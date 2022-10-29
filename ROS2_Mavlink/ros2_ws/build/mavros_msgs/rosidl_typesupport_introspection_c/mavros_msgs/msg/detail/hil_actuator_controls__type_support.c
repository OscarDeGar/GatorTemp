// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mavros_msgs:msg/HilActuatorControls.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mavros_msgs/msg/detail/hil_actuator_controls__rosidl_typesupport_introspection_c.h"
#include "mavros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mavros_msgs/msg/detail/hil_actuator_controls__functions.h"
#include "mavros_msgs/msg/detail/hil_actuator_controls__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void HilActuatorControls__rosidl_typesupport_introspection_c__HilActuatorControls_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mavros_msgs__msg__HilActuatorControls__init(message_memory);
}

void HilActuatorControls__rosidl_typesupport_introspection_c__HilActuatorControls_fini_function(void * message_memory)
{
  mavros_msgs__msg__HilActuatorControls__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember HilActuatorControls__rosidl_typesupport_introspection_c__HilActuatorControls_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__HilActuatorControls, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "controls",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__HilActuatorControls, controls),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__HilActuatorControls, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "flags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__HilActuatorControls, flags),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers HilActuatorControls__rosidl_typesupport_introspection_c__HilActuatorControls_message_members = {
  "mavros_msgs__msg",  // message namespace
  "HilActuatorControls",  // message name
  4,  // number of fields
  sizeof(mavros_msgs__msg__HilActuatorControls),
  HilActuatorControls__rosidl_typesupport_introspection_c__HilActuatorControls_message_member_array,  // message members
  HilActuatorControls__rosidl_typesupport_introspection_c__HilActuatorControls_init_function,  // function to initialize message memory (memory has to be allocated)
  HilActuatorControls__rosidl_typesupport_introspection_c__HilActuatorControls_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t HilActuatorControls__rosidl_typesupport_introspection_c__HilActuatorControls_message_type_support_handle = {
  0,
  &HilActuatorControls__rosidl_typesupport_introspection_c__HilActuatorControls_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mavros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, msg, HilActuatorControls)() {
  HilActuatorControls__rosidl_typesupport_introspection_c__HilActuatorControls_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!HilActuatorControls__rosidl_typesupport_introspection_c__HilActuatorControls_message_type_support_handle.typesupport_identifier) {
    HilActuatorControls__rosidl_typesupport_introspection_c__HilActuatorControls_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &HilActuatorControls__rosidl_typesupport_introspection_c__HilActuatorControls_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
