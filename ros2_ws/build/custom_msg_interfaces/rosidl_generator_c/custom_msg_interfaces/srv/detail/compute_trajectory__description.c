// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_msg_interfaces:srv/ComputeTrajectory.idl
// generated code does not contain a copyright notice

#include "custom_msg_interfaces/srv/detail/compute_trajectory__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_msg_interfaces
const rosidl_type_hash_t *
custom_msg_interfaces__srv__ComputeTrajectory__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x37, 0x20, 0x07, 0xa9, 0x53, 0xd5, 0xab, 0x95,
      0xb4, 0x3f, 0x6f, 0xb6, 0xf2, 0x1d, 0x5d, 0x76,
      0xfb, 0xa1, 0xf6, 0x79, 0xce, 0x31, 0x99, 0xf6,
      0xb6, 0x42, 0xdb, 0xfb, 0x6d, 0x94, 0x05, 0xca,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_custom_msg_interfaces
const rosidl_type_hash_t *
custom_msg_interfaces__srv__ComputeTrajectory_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x22, 0xd4, 0xc9, 0x36, 0xd3, 0xcd, 0x33, 0x03,
      0x9c, 0x5c, 0xcb, 0xf5, 0x78, 0x17, 0x1d, 0xdf,
      0x66, 0x0d, 0x06, 0x0c, 0x19, 0x28, 0xc0, 0x75,
      0x4c, 0x07, 0x42, 0x46, 0x6e, 0xa4, 0x4c, 0x48,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_custom_msg_interfaces
const rosidl_type_hash_t *
custom_msg_interfaces__srv__ComputeTrajectory_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6a, 0x52, 0x1d, 0x91, 0x3d, 0x7a, 0xd8, 0xd4,
      0xcf, 0x73, 0x61, 0x22, 0x0a, 0x05, 0x40, 0x1e,
      0x22, 0xfa, 0x87, 0x33, 0xc4, 0xcc, 0x37, 0x74,
      0x2e, 0xed, 0xf8, 0xee, 0xdd, 0x59, 0x47, 0xe8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_custom_msg_interfaces
const rosidl_type_hash_t *
custom_msg_interfaces__srv__ComputeTrajectory_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x72, 0xbc, 0xf6, 0x87, 0x66, 0xb9, 0x95, 0xcd,
      0x8e, 0x84, 0xf3, 0x18, 0x24, 0x47, 0xd4, 0x1a,
      0xa1, 0x4e, 0x28, 0xeb, 0x60, 0x6f, 0x9e, 0xbf,
      0xad, 0xe7, 0x90, 0xe7, 0x1b, 0x96, 0x60, 0x14,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "trajectory_msgs/msg/detail/joint_trajectory__functions.h"
#include "geometry_msgs/msg/detail/pose_array__functions.h"
#include "builtin_interfaces/msg/detail/duration__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "trajectory_msgs/msg/detail/joint_trajectory_point__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Duration__EXPECTED_HASH = {1, {
    0xe8, 0xd0, 0x09, 0xf6, 0x59, 0x81, 0x6f, 0x75,
    0x8b, 0x75, 0x33, 0x4e, 0xe1, 0xa9, 0xca, 0x5b,
    0x5c, 0x0b, 0x85, 0x98, 0x43, 0x26, 0x1f, 0x14,
    0xc7, 0xf9, 0x37, 0x34, 0x95, 0x99, 0xd9, 0x3b,
  }};
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose__EXPECTED_HASH = {1, {
    0xd5, 0x01, 0x95, 0x4e, 0x94, 0x76, 0xce, 0xa2,
    0x99, 0x69, 0x84, 0xe8, 0x12, 0x05, 0x4b, 0x68,
    0x02, 0x6a, 0xe0, 0xbf, 0xae, 0x78, 0x9d, 0x9a,
    0x10, 0xb2, 0x3d, 0xaf, 0x35, 0xcc, 0x90, 0xfa,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__PoseArray__EXPECTED_HASH = {1, {
    0xaf, 0x0c, 0xc3, 0x6d, 0x19, 0x0e, 0x10, 0x4d,
    0x54, 0x6d, 0x16, 0x8d, 0x6b, 0x39, 0xdf, 0x04,
    0xfa, 0x4b, 0x4c, 0xce, 0xcf, 0x59, 0xcb, 0x4c,
    0x9e, 0xd3, 0x28, 0xd3, 0xd5, 0x00, 0x4a, 0xa0,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
static const rosidl_type_hash_t trajectory_msgs__msg__JointTrajectory__EXPECTED_HASH = {1, {
    0x17, 0x9b, 0x33, 0xeb, 0xa5, 0x9d, 0x67, 0x6f,
    0x6d, 0x96, 0x7a, 0xc7, 0x1f, 0xe3, 0x5e, 0x7c,
    0xa2, 0xf6, 0x4b, 0x2f, 0x39, 0x28, 0xf4, 0xa0,
    0x18, 0xce, 0xc1, 0x15, 0xe2, 0x13, 0x79, 0x6e,
  }};
static const rosidl_type_hash_t trajectory_msgs__msg__JointTrajectoryPoint__EXPECTED_HASH = {1, {
    0xde, 0x89, 0x07, 0x03, 0x6d, 0x8b, 0xd4, 0x5a,
    0xac, 0x6f, 0x30, 0xcc, 0x90, 0x44, 0xa3, 0xd4,
    0xa3, 0x29, 0xc4, 0x2c, 0xbf, 0x71, 0x9a, 0xff,
    0x7d, 0x95, 0xa5, 0x84, 0xcf, 0xa5, 0x32, 0xd7,
  }};
#endif

static char custom_msg_interfaces__srv__ComputeTrajectory__TYPE_NAME[] = "custom_msg_interfaces/srv/ComputeTrajectory";
static char builtin_interfaces__msg__Duration__TYPE_NAME[] = "builtin_interfaces/msg/Duration";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char custom_msg_interfaces__srv__ComputeTrajectory_Event__TYPE_NAME[] = "custom_msg_interfaces/srv/ComputeTrajectory_Event";
static char custom_msg_interfaces__srv__ComputeTrajectory_Request__TYPE_NAME[] = "custom_msg_interfaces/srv/ComputeTrajectory_Request";
static char custom_msg_interfaces__srv__ComputeTrajectory_Response__TYPE_NAME[] = "custom_msg_interfaces/srv/ComputeTrajectory_Response";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__PoseArray__TYPE_NAME[] = "geometry_msgs/msg/PoseArray";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";
static char trajectory_msgs__msg__JointTrajectory__TYPE_NAME[] = "trajectory_msgs/msg/JointTrajectory";
static char trajectory_msgs__msg__JointTrajectoryPoint__TYPE_NAME[] = "trajectory_msgs/msg/JointTrajectoryPoint";

// Define type names, field names, and default values
static char custom_msg_interfaces__srv__ComputeTrajectory__FIELD_NAME__request_message[] = "request_message";
static char custom_msg_interfaces__srv__ComputeTrajectory__FIELD_NAME__response_message[] = "response_message";
static char custom_msg_interfaces__srv__ComputeTrajectory__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field custom_msg_interfaces__srv__ComputeTrajectory__FIELDS[] = {
  {
    {custom_msg_interfaces__srv__ComputeTrajectory__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {custom_msg_interfaces__srv__ComputeTrajectory_Request__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msg_interfaces__srv__ComputeTrajectory__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {custom_msg_interfaces__srv__ComputeTrajectory_Response__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msg_interfaces__srv__ComputeTrajectory__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {custom_msg_interfaces__srv__ComputeTrajectory_Event__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription custom_msg_interfaces__srv__ComputeTrajectory__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {custom_msg_interfaces__srv__ComputeTrajectory_Event__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {custom_msg_interfaces__srv__ComputeTrajectory_Request__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {custom_msg_interfaces__srv__ComputeTrajectory_Response__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__PoseArray__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {trajectory_msgs__msg__JointTrajectory__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {trajectory_msgs__msg__JointTrajectoryPoint__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_msg_interfaces__srv__ComputeTrajectory__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_msg_interfaces__srv__ComputeTrajectory__TYPE_NAME, 43, 43},
      {custom_msg_interfaces__srv__ComputeTrajectory__FIELDS, 3, 3},
    },
    {custom_msg_interfaces__srv__ComputeTrajectory__REFERENCED_TYPE_DESCRIPTIONS, 13, 13},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = custom_msg_interfaces__srv__ComputeTrajectory_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = custom_msg_interfaces__srv__ComputeTrajectory_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = custom_msg_interfaces__srv__ComputeTrajectory_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PoseArray__EXPECTED_HASH, geometry_msgs__msg__PoseArray__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = geometry_msgs__msg__PoseArray__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&trajectory_msgs__msg__JointTrajectory__EXPECTED_HASH, trajectory_msgs__msg__JointTrajectory__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = trajectory_msgs__msg__JointTrajectory__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&trajectory_msgs__msg__JointTrajectoryPoint__EXPECTED_HASH, trajectory_msgs__msg__JointTrajectoryPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[12].fields = trajectory_msgs__msg__JointTrajectoryPoint__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char custom_msg_interfaces__srv__ComputeTrajectory_Request__FIELD_NAME__array[] = "array";

static rosidl_runtime_c__type_description__Field custom_msg_interfaces__srv__ComputeTrajectory_Request__FIELDS[] = {
  {
    {custom_msg_interfaces__srv__ComputeTrajectory_Request__FIELD_NAME__array, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__PoseArray__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription custom_msg_interfaces__srv__ComputeTrajectory_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__PoseArray__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_msg_interfaces__srv__ComputeTrajectory_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_msg_interfaces__srv__ComputeTrajectory_Request__TYPE_NAME, 51, 51},
      {custom_msg_interfaces__srv__ComputeTrajectory_Request__FIELDS, 1, 1},
    },
    {custom_msg_interfaces__srv__ComputeTrajectory_Request__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PoseArray__EXPECTED_HASH, geometry_msgs__msg__PoseArray__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__PoseArray__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char custom_msg_interfaces__srv__ComputeTrajectory_Response__FIELD_NAME__trajectory[] = "trajectory";
static char custom_msg_interfaces__srv__ComputeTrajectory_Response__FIELD_NAME__status_message[] = "status_message";

static rosidl_runtime_c__type_description__Field custom_msg_interfaces__srv__ComputeTrajectory_Response__FIELDS[] = {
  {
    {custom_msg_interfaces__srv__ComputeTrajectory_Response__FIELD_NAME__trajectory, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {trajectory_msgs__msg__JointTrajectory__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msg_interfaces__srv__ComputeTrajectory_Response__FIELD_NAME__status_message, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription custom_msg_interfaces__srv__ComputeTrajectory_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {trajectory_msgs__msg__JointTrajectory__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {trajectory_msgs__msg__JointTrajectoryPoint__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_msg_interfaces__srv__ComputeTrajectory_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_msg_interfaces__srv__ComputeTrajectory_Response__TYPE_NAME, 52, 52},
      {custom_msg_interfaces__srv__ComputeTrajectory_Response__FIELDS, 2, 2},
    },
    {custom_msg_interfaces__srv__ComputeTrajectory_Response__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&trajectory_msgs__msg__JointTrajectory__EXPECTED_HASH, trajectory_msgs__msg__JointTrajectory__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = trajectory_msgs__msg__JointTrajectory__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&trajectory_msgs__msg__JointTrajectoryPoint__EXPECTED_HASH, trajectory_msgs__msg__JointTrajectoryPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = trajectory_msgs__msg__JointTrajectoryPoint__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char custom_msg_interfaces__srv__ComputeTrajectory_Event__FIELD_NAME__info[] = "info";
static char custom_msg_interfaces__srv__ComputeTrajectory_Event__FIELD_NAME__request[] = "request";
static char custom_msg_interfaces__srv__ComputeTrajectory_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field custom_msg_interfaces__srv__ComputeTrajectory_Event__FIELDS[] = {
  {
    {custom_msg_interfaces__srv__ComputeTrajectory_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msg_interfaces__srv__ComputeTrajectory_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {custom_msg_interfaces__srv__ComputeTrajectory_Request__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msg_interfaces__srv__ComputeTrajectory_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {custom_msg_interfaces__srv__ComputeTrajectory_Response__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription custom_msg_interfaces__srv__ComputeTrajectory_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {custom_msg_interfaces__srv__ComputeTrajectory_Request__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {custom_msg_interfaces__srv__ComputeTrajectory_Response__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__PoseArray__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {trajectory_msgs__msg__JointTrajectory__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {trajectory_msgs__msg__JointTrajectoryPoint__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_msg_interfaces__srv__ComputeTrajectory_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_msg_interfaces__srv__ComputeTrajectory_Event__TYPE_NAME, 49, 49},
      {custom_msg_interfaces__srv__ComputeTrajectory_Event__FIELDS, 3, 3},
    },
    {custom_msg_interfaces__srv__ComputeTrajectory_Event__REFERENCED_TYPE_DESCRIPTIONS, 12, 12},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = custom_msg_interfaces__srv__ComputeTrajectory_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = custom_msg_interfaces__srv__ComputeTrajectory_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PoseArray__EXPECTED_HASH, geometry_msgs__msg__PoseArray__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__PoseArray__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&trajectory_msgs__msg__JointTrajectory__EXPECTED_HASH, trajectory_msgs__msg__JointTrajectory__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = trajectory_msgs__msg__JointTrajectory__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&trajectory_msgs__msg__JointTrajectoryPoint__EXPECTED_HASH, trajectory_msgs__msg__JointTrajectoryPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = trajectory_msgs__msg__JointTrajectoryPoint__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "geometry_msgs/PoseArray array\n"
  "---\n"
  "trajectory_msgs/JointTrajectory trajectory\n"
  "string status_message\n"
  "";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_msg_interfaces__srv__ComputeTrajectory__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_msg_interfaces__srv__ComputeTrajectory__TYPE_NAME, 43, 43},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 100, 100},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
custom_msg_interfaces__srv__ComputeTrajectory_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_msg_interfaces__srv__ComputeTrajectory_Request__TYPE_NAME, 51, 51},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
custom_msg_interfaces__srv__ComputeTrajectory_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_msg_interfaces__srv__ComputeTrajectory_Response__TYPE_NAME, 52, 52},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
custom_msg_interfaces__srv__ComputeTrajectory_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_msg_interfaces__srv__ComputeTrajectory_Event__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_msg_interfaces__srv__ComputeTrajectory__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[14];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 14, 14};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_msg_interfaces__srv__ComputeTrajectory__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[3] = *custom_msg_interfaces__srv__ComputeTrajectory_Event__get_individual_type_description_source(NULL);
    sources[4] = *custom_msg_interfaces__srv__ComputeTrajectory_Request__get_individual_type_description_source(NULL);
    sources[5] = *custom_msg_interfaces__srv__ComputeTrajectory_Response__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[8] = *geometry_msgs__msg__PoseArray__get_individual_type_description_source(NULL);
    sources[9] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[10] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[11] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[12] = *trajectory_msgs__msg__JointTrajectory__get_individual_type_description_source(NULL);
    sources[13] = *trajectory_msgs__msg__JointTrajectoryPoint__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_msg_interfaces__srv__ComputeTrajectory_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_msg_interfaces__srv__ComputeTrajectory_Request__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__PoseArray__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_msg_interfaces__srv__ComputeTrajectory_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_msg_interfaces__srv__ComputeTrajectory_Response__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[4] = *trajectory_msgs__msg__JointTrajectory__get_individual_type_description_source(NULL);
    sources[5] = *trajectory_msgs__msg__JointTrajectoryPoint__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_msg_interfaces__srv__ComputeTrajectory_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[13];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 13, 13};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_msg_interfaces__srv__ComputeTrajectory_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[3] = *custom_msg_interfaces__srv__ComputeTrajectory_Request__get_individual_type_description_source(NULL);
    sources[4] = *custom_msg_interfaces__srv__ComputeTrajectory_Response__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__PoseArray__get_individual_type_description_source(NULL);
    sources[8] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[9] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[10] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[11] = *trajectory_msgs__msg__JointTrajectory__get_individual_type_description_source(NULL);
    sources[12] = *trajectory_msgs__msg__JointTrajectoryPoint__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
