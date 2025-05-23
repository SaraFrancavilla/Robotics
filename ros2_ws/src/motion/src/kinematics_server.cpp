#include "motion/kinematics_server.hpp"


#include "builtin_interfaces/msg/time.hpp"
#include <iostream>
#include <iomanip>

using namespace std;
using namespace Eigen;
using Eigen::MatrixXf;

namespace motion
{
    
    DirectKinServer::DirectKinServer() : Node("direct_kin_server"){
        
        // Define the service callback
        auto service_callback = [this](const std::shared_ptr<custom_msg_interfaces::srv::ComputeDirKin::Request> request,
                                       std::shared_ptr<custom_msg_interfaces::srv::ComputeDirKin::Response> response){
                                       this->computeDirectKinematics(request, response);};
        // Create the service
        service_ = this->create_service<custom_msg_interfaces::srv::ComputeDirKin>("compute_dir_kin", service_callback);
        RCLCPP_INFO(this->get_logger(), "Direct Kinematics Service is ready.");
    }
    
    void DirectKinServer::computeDirectKinematics(const std::shared_ptr<custom_msg_interfaces::srv::ComputeDirKin::Request> request,
                                                  std::shared_ptr<custom_msg_interfaces::srv::ComputeDirKin::Response> response){
        try{
            Eigen::Vector3d end_effector_position;
            Eigen::Matrix3d end_effector_orientation;
            std::vector<Eigen::Matrix4d> Tm;
            
            // Compute direct kinematics
            response = ur5Direct(request->joints, 1.0, end_effector_position, end_effector_orientation, Tm);
            response->frame_id = request->frame_id;
             // Set status message and frame ID
            response->status_message = "Direct kinematics calculated successfully";
        }catch (const std::exception& e){
            RCLCPP_ERROR(this->get_logger(), "Error in direct kinematics calculation: %s", e.what());
            response->status_message = "Failed to calculate direct kinematics";
        }
    }
    
    Eigen::Matrix4d DirectKinServer::Tij(double th, double alpha, double d, double a)
    {
        Eigen::Matrix4d T;
        T << std::cos(th), -std::sin(th) * std::cos(alpha), std::sin(th) * std::sin(alpha), a * std::cos(th),
             std::sin(th), std::cos(th) * std::cos(alpha), -std::cos(th) * std::sin(alpha), a * std::sin(th),
             0, std::sin(alpha), std::cos(alpha), d,
             0, 0, 0, 1;
        return T;
    }
    
    std::shared_ptr<custom_msg_interfaces::srv::ComputeDirKin::Response> DirectKinServer::ur5Direct(const std::vector<double>& Th, double scaleFactor, Eigen::Vector3d& pe,
                                    Eigen::Matrix3d& Re, std::vector<Eigen::Matrix4d>& Tm){

        std::shared_ptr<custom_msg_interfaces::srv::ComputeDirKin::Response> response;
        
        // Compute transformation matrices
        Eigen::Matrix4d T60 = Eigen::Matrix4d::Identity();
        for (size_t i = 0; i < 6; ++i) {
            Eigen::Matrix4d T = Tij(Th[i], ALPHA[i], D[i]*scaleFactor, A[i]* scaleFactor);
            Tm.push_back(T);
            T60 *= T;
        }

        pe = T60.block<3, 1>(0, 3);
        Re = T60.block<3, 3>(0, 0);

        response->final_pose.position.x = pe(0);
        response->final_pose.position.y = pe(1);
        response->final_pose.position.z = pe(2);

        Eigen::Quaterniond q(Re);
        response->final_pose.orientation.x = q.x();
        response->final_pose.orientation.y = q.y();
        response->final_pose.orientation.z = q.z();
        response->final_pose.orientation.w = q.w();
        

        return response;        
    }
    
    // node
    InverseKinServer::InverseKinServer(const rclcpp::NodeOptions & options): Node("inverse_kin_server_node", options){
     // Create the service
        using namespace std::placeholders;

        // Define the service callback
        auto service_callback = [this](
            const std::shared_ptr<custom_msg_interfaces::srv::ComputeIK::Request> request,
            std::shared_ptr<custom_msg_interfaces::srv::ComputeIK::Response> response) {
            this->computeIKCallback(request, response);
        };
        
        // Create the service
        service_ = this->create_service<custom_msg_interfaces::srv::ComputeIK>("compute_ik", service_callback);
        RCLCPP_INFO(this->get_logger(), "Inverse Kinematics Service is ready.");
        
    }
    
    void InverseKinServer::computeIKCallback(const std::shared_ptr<custom_msg_interfaces::srv::ComputeIK::Request> request,
                                             std::shared_ptr<custom_msg_interfaces::srv::ComputeIK::Response> response){

     auto position = (request->target_pose).position;
     auto orientation =  (request->target_pose).orientation;
    
     // Convert quaternion to Eigen rotation matrix (using double precision then cast to float)
     Eigen::Quaterniond q_eig(orientation.x, orientation.y, orientation.z, orientation.w);
        
     Eigen::Matrix3d R_d = q_eig.normalized().toRotationMatrix(); // 3x3 double
     Eigen::Matrix3f R_f = R_d.cast<float>(); // cast to float
    
     // Position as Eigen Vector3f
     //Eigen::Vector3f p60(x, y, z);
     Eigen::Vector3f p60(position.x, position.y, position.z);
    
     // Compute the inverse kinematics assuming a scale factor = 1.0
     Eigen::MatrixXd solutions = ur5Inverse(p60, R_f, 1.0f);  // 8x6 







        
    //ADJUST IT
     // Prepare the response multiarray: we have 8 solutions, each with 6 joints
     response->joint_angles_matrix.layout.dim.resize(2);
    
     // First dimension = number of solutions
     response->joint_angles_matrix.layout.dim[0].label = "solutions";
     response->joint_angles_matrix.layout.dim[0].size = 8;         // we know we always produce 8
     response->joint_angles_matrix.layout.dim[0].stride = 8 * 6;   // each row has 6 entries, total 8 rows
    
     // Second dimension = number of joints
     response->joint_angles_matrix.layout.dim[1].label = "joints";
     response->joint_angles_matrix.layout.dim[1].size = 6;         // 6 joints
     response->joint_angles_matrix.layout.dim[1].stride = 6;       // stride
    
     response->joint_angles_matrix.layout.data_offset = 0;
     response->joint_angles_matrix.data.resize(8 * 6);



        
        
    
     // Fill the data in row-major order
     for (int i = 0; i < 8; ++i){
        for (int j = 0; j < 6; ++j){
            // Convert float (or double) to double for the message
            double angle_val = static_cast<double>(solutions(i, j));
            response->joint_angles_matrix.data[i * 6 + j] = angle_val;
        }
     }
     response->status_message = "Inverse kinematics solutions computed successfully.";
     RCLCPP_INFO(this->get_logger(), "IK solutions computed and sent back to client.");
    }

    
    bool almzero(float x) {
        return abs(x) < 1e-7;
    }
    
    Matrix4f Tij(float th, float alpha, float d, float a) {
        Matrix4f T;
        T << cos(th), -sin(th) * cos(alpha), sin(th) * sin(alpha), a * cos(th),
             sin(th), cos(th) * cos(alpha), -cos(th) * sin(alpha), a * sin(th),
             0, sin(alpha), cos(alpha), d,
             0, 0, 0, 1;
        return T;
    }
    
    //Eigen::MatrixXd InverseKinServer::ur5Inverse(
    Eigen::MatrixXd InverseKinServer::ur5Inverse(const Eigen::Vector3f & p60, const Eigen::Matrix3f & R60, float scaleFactor){

        //CREA VETTORE DI VARIABILI CON FOR LOOP
        
        MatrixXd solutions(8, 6); // 8 possible solutions, each with 6 joint angles
        solutions.setConstant(NAN); // Initialize with NaN
    
        float A_scaled[6], D_scaled[6];
        for (int i = 0; i < 6; ++i) {
            A_scaled[i] = A[i] * scaleFactor;
            D_scaled[i] = D[i] * scaleFactor;
        }
    
        Matrix4f T60;
        T60.block<3, 3>(0, 0) = R60;
        T60.block<3, 1>(0, 3) = p60;
        T60.row(3) << 0, 0, 0, 1;
    
        Vector4f p50 = T60 * Vector4f(0, 0, -D_scaled[5], 1);
        float psi = atan2(p50(1), p50(0));
        float p50xy = hypot(p50(1), p50(0));
        if (p50xy < D_scaled[3]) {
            cerr << "Position request in the unreachable cylinder" << endl;
            return solutions;
        }
        float phi1_1 = acos(D_scaled[3] / p50xy);
        float phi1_2 = -phi1_1;
    
        float th1_1 = psi + phi1_1 + PI / 2;
        float th1_2 = psi + phi1_2 + PI / 2;
    
        float p61z_1 = p60(0) * sin(th1_1) - p60(1) * cos(th1_1);
        float p61z_2 = p60(0) * sin(th1_2) - p60(1) * cos(th1_2);
    
        float th5_1_1 = acos((p61z_1 - D_scaled[3]) / D_scaled[5]);
        float th5_1_2 = -acos((p61z_1 - D_scaled[3]) / D_scaled[5]);
        float th5_2_1 = acos((p61z_2 - D_scaled[3]) / D_scaled[5]);
        float th5_2_2 = -acos((p61z_2 - D_scaled[3]) / D_scaled[5]);
    
        Matrix4f T10_1 = Tij(th1_1, ALPHA[0], D_scaled[0], A_scaled[0]);
        Matrix4f T10_2 = Tij(th1_2, ALPHA[0], D_scaled[0], A_scaled[0]);
    
        Matrix4f T16_1 = (T10_1.inverse() * T60).inverse();
        Matrix4f T16_2 = (T10_2.inverse() * T60).inverse();
    
        float zy_1 = T16_1(1, 2);
        float zx_1 = T16_1(0, 2);
    
        float zy_2 = T16_2(1, 2);
        float zx_2 = T16_2(0, 2);
    
        float th6_1_1, th6_1_2, th6_2_1, th6_2_2;
        if (almzero(sin(th5_1_1)) || (almzero(zy_1) && almzero(zx_1))) {
            cerr << "Singular configuration. Choosing arbitrary th6" << endl;
            th6_1_1 = 0;
        } else {
            th6_1_1 = atan2((-zy_1 / sin(th5_1_1)), (zx_1 / sin(th5_1_1)));
        }
    
        if (almzero(sin(th5_1_2)) || (almzero(zy_1) && almzero(zx_1))) {
            cerr << "Singular configuration. Choosing arbitrary th6" << endl;
            th6_1_2 = 0;
        } else {
            th6_1_2 = atan2((-zy_1 / sin(th5_1_2)), (zx_1 / sin(th5_1_2)));
        }
    
        if (almzero(sin(th5_2_1)) || (almzero(zy_2) && almzero(zx_2))) {
            cerr << "Singular configuration. Choosing arbitrary th6" << endl;
            th6_2_1 = 0;
        } else {
            th6_2_1 = atan2((-zy_2 / sin(th5_2_1)), (zx_2 / sin(th5_2_1)));
        }
    
        if (almzero(sin(th5_2_2)) || (almzero(zy_2) && almzero(zx_2))) {
            cerr << "Singular configuration. Choosing arbitrary th6" << endl;
            th6_2_2 = 0;
        } else {
            th6_2_2 = atan2((-zy_2 / sin(th5_2_2)), (zx_2 / sin(th5_2_2)));
        }
    
        Matrix4f T61_1 = T16_1.inverse();
        Matrix4f T61_2 = T16_2.inverse();
    
        Matrix4f T54_1_1 = Tij(th5_1_1, ALPHA[4], D_scaled[4], A_scaled[4]);
        Matrix4f T54_1_2 = Tij(th5_1_2, ALPHA[4], D_scaled[4], A_scaled[4]);
        Matrix4f T54_2_1 = Tij(th5_2_1, ALPHA[4], D_scaled[4], A_scaled[4]);
        Matrix4f T54_2_2 = Tij(th5_2_2, ALPHA[4], D_scaled[4], A_scaled[4]);
    
        Matrix4f T65_1_1 = Tij(th6_1_1, ALPHA[5], D_scaled[5], A_scaled[5]);
        Matrix4f T65_1_2 = Tij(th6_1_2, ALPHA[5], D_scaled[5], A_scaled[5]);
        Matrix4f T65_2_1 = Tij(th6_2_1, ALPHA[5], D_scaled[5], A_scaled[5]);
        Matrix4f T65_2_2 = Tij(th6_2_2, ALPHA[5], D_scaled[5], A_scaled[5]);
    
        Matrix4f T41_1_1 = T61_1 * (T54_1_1 * T65_1_1).inverse();
        Matrix4f T41_1_2 = T61_1 * (T54_1_2 * T65_1_2).inverse();
        Matrix4f T41_2_1 = T61_2 * (T54_2_1 * T65_2_1).inverse();
        Matrix4f T41_2_2 = T61_2 * (T54_2_2 * T65_2_2).inverse();
    
        Vector4f P;
        Vector3f P31_1_1, P31_1_2, P31_2_1, P31_2_2;
    
        P = T41_1_1 * Vector4f(0, -D_scaled[3], 0, 1);
        P31_1_1 = P.head<3>();
        P = T41_1_2 * Vector4f(0, -D_scaled[3], 0, 1);
        P31_1_2 = P.head<3>();
        P = T41_2_1 * Vector4f(0, -D_scaled[3], 0, 1);
        P31_2_1 = P.head<3>();
        P = T41_2_2 * Vector4f(0, -D_scaled[3], 0, 1);
        P31_2_2 = P.head<3>();
    
        float C;
        float th3_1_1_1, th3_1_1_2, th3_1_2_1, th3_1_2_2;
        float th3_2_1_1, th3_2_1_2, th3_2_2_1, th3_2_2_2;
    
        C = (P31_1_1.squaredNorm() - A_scaled[1] * A_scaled[1] - A_scaled[2] * A_scaled[2]) / (2 * A_scaled[1] * A_scaled[2]);
        if (abs(C) > 1) {
            cerr << "Point out of the work space" << endl;
            th3_1_1_1 = NAN;
            th3_1_1_2 = NAN;
        } else {
            th3_1_1_1 = acos(C);
            th3_1_1_2 = -acos(C);
        }
    
        C = (P31_1_2.squaredNorm() - A_scaled[1] * A_scaled[1] - A_scaled[2] * A_scaled[2]) / (2 * A_scaled[1] * A_scaled[2]);
        if (abs(C) > 1) {
            cerr << "Point out of the work space" << endl;
            th3_1_2_1 = NAN;
            th3_1_2_2 = NAN;
        } else {
            th3_1_2_1 = acos(C);
            th3_1_2_2 = -acos(C);
        }
    
        C = (P31_2_1.squaredNorm() - A_scaled[1] * A_scaled[1] - A_scaled[2] * A_scaled[2]) / (2 * A_scaled[1] * A_scaled[2]);
        if (abs(C) > 1) {
            cerr << "Point out of the work space" << endl;
            th3_2_1_1 = NAN;
            th3_2_1_2 = NAN;
        } else {
            th3_2_1_1 = acos(C);
            th3_2_1_2 = -acos(C);
        }
    
        C = (P31_2_2.squaredNorm() - A_scaled[1] * A_scaled[1] - A_scaled[2] * A_scaled[2]) / (2 * A_scaled[1] * A_scaled[2]);
        if (abs(C) > 1) {
            cerr << "Point out of the work space" << endl;
            th3_2_2_1 = NAN;
            th3_2_2_2 = NAN;
        } else {
            th3_2_2_1 = acos(C);
            th3_2_2_2 = -acos(C);
        }
    
        float th2_1_1_1 = -atan2(P31_1_1(1), -P31_1_1(0)) + asin((A_scaled[2] * sin(th3_1_1_1)) / P31_1_1.norm());
        float th2_1_1_2 = -atan2(P31_1_1(1), -P31_1_1(0)) + asin((A_scaled[2] * sin(th3_1_1_2)) / P31_1_1.norm());
        float th2_1_2_1 = -atan2(P31_1_2(1), -P31_1_2(0)) + asin((A_scaled[2] * sin(th3_1_2_1)) / P31_1_2.norm());
        float th2_1_2_2 = -atan2(P31_1_2(1), -P31_1_2(0)) + asin((A_scaled[2] * sin(th3_1_2_2)) / P31_1_2.norm());
        float th2_2_1_1 = -atan2(P31_2_1(1), -P31_2_1(0)) + asin((A_scaled[2] * sin(th3_2_1_1)) / P31_2_1.norm());
        float th2_2_1_2 = -atan2(P31_2_1(1), -P31_2_1(0)) + asin((A_scaled[2] * sin(th3_2_1_2)) / P31_2_1.norm());
        float th2_2_2_1 = -atan2(P31_2_2(1), -P31_2_2(0)) + asin((A_scaled[2] * sin(th3_2_2_1)) / P31_2_2.norm());
        float th2_2_2_2 = -atan2(P31_2_2(1), -P31_2_2(0)) + asin((A_scaled[2] * sin(th3_2_2_2)) / P31_2_2.norm());
    
        Matrix4f T21, T32, T41, T43;
        float xy, xx, th4_1_1_1, th4_1_1_2, th4_1_2_1, th4_1_2_2;
        float th4_2_1_1, th4_2_1_2, th4_2_2_1, th4_2_2_2;
    
        T21 = Tij(th2_1_1_1, ALPHA[1], D_scaled[1], A_scaled[1]);
        T32 = Tij(th3_1_1_1, ALPHA[2], D_scaled[2], A_scaled[2]);
        T41 = T41_1_1;
        T43 = (T21 * T32).inverse() * T41;
        xy = T43(1, 0);
        xx = T43(0, 0);
        th4_1_1_1 = atan2(xy, xx);
    
        T21 = Tij(th2_1_1_2, ALPHA[1], D_scaled[1], A_scaled[1]);
        T32 = Tij(th3_1_1_2, ALPHA[2], D_scaled[2], A_scaled[2]);
        T41 = T41_1_1;
        T43 = (T21 * T32).inverse() * T41;
        xy = T43(1, 0);
        xx = T43(0, 0);
        th4_1_1_2 = atan2(xy, xx);
    
        T21 = Tij(th2_1_2_1, ALPHA[1], D_scaled[1], A_scaled[1]);
        T32 = Tij(th3_1_2_1, ALPHA[2], D_scaled[2], A_scaled[2]);
        T41 = T41_1_2;
        T43 = (T21 * T32).inverse() * T41;
        xy = T43(1, 0);
        xx = T43(0, 0);
        th4_1_2_1 = atan2(xy, xx);
    
        T21 = Tij(th2_1_2_2, ALPHA[1], D_scaled[1], A_scaled[1]);
        T32 = Tij(th3_1_2_2, ALPHA[2], D_scaled[2], A_scaled[2]);
        T41 = T41_1_2;
        T43 = (T21 * T32).inverse() * T41;
        xy = T43(1, 0);
        xx = T43(0, 0);
        th4_1_2_2 = atan2(xy, xx);
        
        //4_2_...
    
        T21 = Tij(th2_2_1_1, ALPHA[1], D_scaled[1], A_scaled[1]);
        T32 = Tij(th3_2_1_1, ALPHA[2], D_scaled[2], A_scaled[2]);
        T41 = T41_2_1;
        T43 = (T21 * T32).inverse() * T41;
        xy = T43(1, 0);
        xx = T43(0, 0);
        th4_2_1_1 = atan2(xy, xx);
    
        T21 = Tij(th2_2_1_2, ALPHA[1], D_scaled[1], A_scaled[1]);
        T32 = Tij(th3_2_1_2, ALPHA[2], D_scaled[2], A_scaled[2]);
        T41 = T41_2_1;
        T43 = (T21 * T32).inverse() * T41;
        xy = T43(1, 0);
        xx = T43(0, 0);
        th4_2_1_2 = atan2(xy, xx);
        
    
        T21 = Tij(th2_2_2_1, ALPHA[1], D_scaled[1], A_scaled[1]);
        T32 = Tij(th3_2_2_1, ALPHA[2], D_scaled[2], A_scaled[2]);
        T41 = T41_2_2;
        T43 = (T21 * T32).inverse() * T41;
        xy = T43(1, 0);
        xx = T43(0, 0);
        th4_2_2_1 = atan2(xy, xx);
        
        T21 = Tij(th2_2_2_2, ALPHA[1], D_scaled[1], A_scaled[1]);
        T32 = Tij(th3_2_2_2, ALPHA[2], D_scaled[2], A_scaled[2]);
        T41 = T41_2_2;
        T43 = (T21 * T32).inverse() * T41;
        xy = T43(1, 0);
        xx = T43(0, 0);
        th4_2_2_2 = atan2(xy, xx);
    
        // Store the solutions in the MatrixXd
        solutions.row(0) << th1_1, th2_1_1_1, th3_1_1_1, th4_1_1_1, th5_1_1, th6_1_1;
        solutions.row(1) << th1_1, th2_1_1_2, th3_1_1_2, th4_1_1_2, th5_1_1, th6_1_1;
        solutions.row(2) << th1_1, th2_1_2_1, th3_1_2_1, th4_1_2_1, th5_1_2, th6_1_2;
        solutions.row(3) << th1_1, th2_1_2_2, th3_1_2_2, th4_1_2_2, th5_1_2, th6_1_2;
        solutions.row(4) << th1_2, th2_2_1_1, th3_2_1_1, th4_2_1_1, th5_2_1, th6_2_1;
        solutions.row(5) << th1_2, th2_2_1_2, th3_2_1_2, th4_2_1_2, th5_2_1, th6_2_1;
        solutions.row(6) << th1_2, th2_2_2_1, th3_2_2_1, th4_2_2_1, th5_2_2, th6_2_2;
        solutions.row(7) << th1_2, th2_2_2_2, th3_2_2_2, th4_2_2_2, th5_2_2, th6_2_2;
    
        return solutions;
    
    
    }
}// namespace motion_pkg

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<motion::DirectKinServer>();
    rclcpp::spin(std::make_shared<motion::InverseKinServer>());
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
