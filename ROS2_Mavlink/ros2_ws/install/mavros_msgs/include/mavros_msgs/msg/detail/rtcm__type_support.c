// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mavros_msgs:msg/RTCM.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mavros_msgs/msg/detail/rtcm__rosidl_typesupport_introspection_c.h"
#include "mavros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mavros_msgs/msg/detail/rtcm__functions.h"
#include "mavros_msgs/msg/detail/rtcm__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RTCM__rosidl_typesupport_introspection_c__RTCM_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mavros_msgs__msg__RTCM__init(message_memory);
}

void RTCM__rosidl_typesupport_introspection_c__RTCM_fini_function(void * message_memory)
{
  mavros_msgs__msg__RTCM__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RTCM__rosidl_typesupport_introspection_c__RTCM_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__RTCM, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__RTCM, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RTCM__rosidl_typesupport_introspection_c__RTCM_message_members = {
  "mavros_msgs__msg",  // message namespace
  "RTCM",  // message name
  2,  // number of fields
  sizeof(mavros_msgs__msg__RTCM),
  RTCM__rosidl_typesupport_introspection_c__RTCM_message_member_array,  // message members
  RTCM__rosidl_typesupport_introspection_c__RTCM_init_function,  // function to initialize message memory (memory has to be allocated)
  RTCM__rosidl_typesupport_introspection_c__RTCM_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RTCM__rosidl_typesupport_introspection_c__RTCM_message_type_support_handle = {
  0,
  &RTCM__rosidl_typesupport_introspection_c__RTCM_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mavros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, msg, RTCM)() {
  RTCM__rosidl_typesupport_introspection_c__RTCM_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!RTCM__rosidl_typesupport_introspection_c__RTCM_message_type_support_handle.typesupport_identifier) {
    RTCM__rosidl_typesupport_introspection_c__RTCM_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RTCM__rosidl_typesupport_introspection_c__RTCM_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
