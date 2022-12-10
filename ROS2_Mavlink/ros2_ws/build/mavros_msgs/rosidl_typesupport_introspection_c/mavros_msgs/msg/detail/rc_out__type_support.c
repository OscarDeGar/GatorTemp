// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mavros_msgs:msg/RCOut.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mavros_msgs/msg/detail/rc_out__rosidl_typesupport_introspection_c.h"
#include "mavros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mavros_msgs/msg/detail/rc_out__functions.h"
#include "mavros_msgs/msg/detail/rc_out__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `channels`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RCOut__rosidl_typesupport_introspection_c__RCOut_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mavros_msgs__msg__RCOut__init(message_memory);
}

void RCOut__rosidl_typesupport_introspection_c__RCOut_fini_function(void * message_memory)
{
  mavros_msgs__msg__RCOut__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RCOut__rosidl_typesupport_introspection_c__RCOut_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__RCOut, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "channels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__RCOut, channels),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RCOut__rosidl_typesupport_introspection_c__RCOut_message_members = {
  "mavros_msgs__msg",  // message namespace
  "RCOut",  // message name
  2,  // number of fields
  sizeof(mavros_msgs__msg__RCOut),
  RCOut__rosidl_typesupport_introspection_c__RCOut_message_member_array,  // message members
  RCOut__rosidl_typesupport_introspection_c__RCOut_init_function,  // function to initialize message memory (memory has to be allocated)
  RCOut__rosidl_typesupport_introspection_c__RCOut_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RCOut__rosidl_typesupport_introspection_c__RCOut_message_type_support_handle = {
  0,
  &RCOut__rosidl_typesupport_introspection_c__RCOut_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mavros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, msg, RCOut)() {
  RCOut__rosidl_typesupport_introspection_c__RCOut_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!RCOut__rosidl_typesupport_introspection_c__RCOut_message_type_support_handle.typesupport_identifier) {
    RCOut__rosidl_typesupport_introspection_c__RCOut_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RCOut__rosidl_typesupport_introspection_c__RCOut_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
