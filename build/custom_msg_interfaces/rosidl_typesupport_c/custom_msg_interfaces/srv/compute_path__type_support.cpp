// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from custom_msg_interfaces:srv/ComputePath.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "custom_msg_interfaces/srv/detail/compute_path__struct.h"
#include "custom_msg_interfaces/srv/detail/compute_path__type_support.h"
#include "custom_msg_interfaces/srv/detail/compute_path__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace custom_msg_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ComputePath_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ComputePath_Request_type_support_ids_t;

static const _ComputePath_Request_type_support_ids_t _ComputePath_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ComputePath_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ComputePath_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ComputePath_Request_type_support_symbol_names_t _ComputePath_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msg_interfaces, srv, ComputePath_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msg_interfaces, srv, ComputePath_Request)),
  }
};

typedef struct _ComputePath_Request_type_support_data_t
{
  void * data[2];
} _ComputePath_Request_type_support_data_t;

static _ComputePath_Request_type_support_data_t _ComputePath_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ComputePath_Request_message_typesupport_map = {
  2,
  "custom_msg_interfaces",
  &_ComputePath_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ComputePath_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ComputePath_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ComputePath_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ComputePath_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &custom_msg_interfaces__srv__ComputePath_Request__get_type_hash,
  &custom_msg_interfaces__srv__ComputePath_Request__get_type_description,
  &custom_msg_interfaces__srv__ComputePath_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace custom_msg_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_msg_interfaces, srv, ComputePath_Request)() {
  return &::custom_msg_interfaces::srv::rosidl_typesupport_c::ComputePath_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_msg_interfaces/srv/detail/compute_path__struct.h"
// already included above
// #include "custom_msg_interfaces/srv/detail/compute_path__type_support.h"
// already included above
// #include "custom_msg_interfaces/srv/detail/compute_path__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_msg_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ComputePath_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ComputePath_Response_type_support_ids_t;

static const _ComputePath_Response_type_support_ids_t _ComputePath_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ComputePath_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ComputePath_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ComputePath_Response_type_support_symbol_names_t _ComputePath_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msg_interfaces, srv, ComputePath_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msg_interfaces, srv, ComputePath_Response)),
  }
};

typedef struct _ComputePath_Response_type_support_data_t
{
  void * data[2];
} _ComputePath_Response_type_support_data_t;

static _ComputePath_Response_type_support_data_t _ComputePath_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ComputePath_Response_message_typesupport_map = {
  2,
  "custom_msg_interfaces",
  &_ComputePath_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ComputePath_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ComputePath_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ComputePath_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ComputePath_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &custom_msg_interfaces__srv__ComputePath_Response__get_type_hash,
  &custom_msg_interfaces__srv__ComputePath_Response__get_type_description,
  &custom_msg_interfaces__srv__ComputePath_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace custom_msg_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_msg_interfaces, srv, ComputePath_Response)() {
  return &::custom_msg_interfaces::srv::rosidl_typesupport_c::ComputePath_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_msg_interfaces/srv/detail/compute_path__struct.h"
// already included above
// #include "custom_msg_interfaces/srv/detail/compute_path__type_support.h"
// already included above
// #include "custom_msg_interfaces/srv/detail/compute_path__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_msg_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ComputePath_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ComputePath_Event_type_support_ids_t;

static const _ComputePath_Event_type_support_ids_t _ComputePath_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ComputePath_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ComputePath_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ComputePath_Event_type_support_symbol_names_t _ComputePath_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msg_interfaces, srv, ComputePath_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msg_interfaces, srv, ComputePath_Event)),
  }
};

typedef struct _ComputePath_Event_type_support_data_t
{
  void * data[2];
} _ComputePath_Event_type_support_data_t;

static _ComputePath_Event_type_support_data_t _ComputePath_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ComputePath_Event_message_typesupport_map = {
  2,
  "custom_msg_interfaces",
  &_ComputePath_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ComputePath_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ComputePath_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ComputePath_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ComputePath_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &custom_msg_interfaces__srv__ComputePath_Event__get_type_hash,
  &custom_msg_interfaces__srv__ComputePath_Event__get_type_description,
  &custom_msg_interfaces__srv__ComputePath_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace custom_msg_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_msg_interfaces, srv, ComputePath_Event)() {
  return &::custom_msg_interfaces::srv::rosidl_typesupport_c::ComputePath_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custom_msg_interfaces/srv/detail/compute_path__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace custom_msg_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _ComputePath_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ComputePath_type_support_ids_t;

static const _ComputePath_type_support_ids_t _ComputePath_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ComputePath_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ComputePath_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ComputePath_type_support_symbol_names_t _ComputePath_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msg_interfaces, srv, ComputePath)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msg_interfaces, srv, ComputePath)),
  }
};

typedef struct _ComputePath_type_support_data_t
{
  void * data[2];
} _ComputePath_type_support_data_t;

static _ComputePath_type_support_data_t _ComputePath_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ComputePath_service_typesupport_map = {
  2,
  "custom_msg_interfaces",
  &_ComputePath_service_typesupport_ids.typesupport_identifier[0],
  &_ComputePath_service_typesupport_symbol_names.symbol_name[0],
  &_ComputePath_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ComputePath_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ComputePath_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ComputePath_Request_message_type_support_handle,
  &ComputePath_Response_message_type_support_handle,
  &ComputePath_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    custom_msg_interfaces,
    srv,
    ComputePath
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    custom_msg_interfaces,
    srv,
    ComputePath
  ),
  &custom_msg_interfaces__srv__ComputePath__get_type_hash,
  &custom_msg_interfaces__srv__ComputePath__get_type_description,
  &custom_msg_interfaces__srv__ComputePath__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace custom_msg_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, custom_msg_interfaces, srv, ComputePath)() {
  return &::custom_msg_interfaces::srv::rosidl_typesupport_c::ComputePath_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
