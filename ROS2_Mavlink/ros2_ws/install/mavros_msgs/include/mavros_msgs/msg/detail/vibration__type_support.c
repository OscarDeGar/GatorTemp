// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mavros_msgs:msg/Vibration.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mavros_msgs/msg/detail/vibration__rosidl_typesupport_introspection_c.h"
#include "mavros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mavros_msgs/msg/detail/vibration__functions.h"
#include "mavros_msgs/msg/detail/vibration__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `vibration`
#include "geometry_msgs/msg/vector3.h"
// Member `vibration`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Vibration__rosidl_typesupport_introspection_c__Vibration_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mavros_msgs__msg__Vibration__init(message_memory);
}

void Vibration__rosidl_typesupport_introspection_c__Vibration_fini_function(void * message_memory)
{
  mavros_msgs__msg__Vibration__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Vibration__rosidl_typesupport_introspection_c__Vibration_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__Vibration, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vibration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__Vibration, vibration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "clipping",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__Vibration, clipping),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Vibration__rosidl_typesupport_introspection_c__Vibration_message_members = {
  "mavros_msgs__msg",  // message namespace
  "Vibration",  // message name
  3,  // number of fields
  sizeof(mavros_msgs__msg__Vibration),
  Vibration__rosidl_typesupport_introspection_c__Vibration_message_member_array,  // message members
  Vibration__rosidl_typesupport_introspection_c__Vibration_init_function,  // function to initialize message memory (memory has to be allocated)
  Vibration__rosidl_typesupport_introspection_c__Vibration_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Vibration__rosidl_typesupport_introspection_c__Vibration_message_type_support_handle = {
  0,
  &Vibration__rosidl_typesupport_introspection_c__Vibration_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mavros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, msg, Vibration)() {
  Vibration__rosidl_typesupport_introspection_c__Vibration_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  Vibration__rosidl_typesupport_introspection_c__Vibration_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!Vibration__rosidl_typesupport_introspection_c__Vibration_message_type_support_handle.typesupport_identifier) {
    Vibration__rosidl_typesupport_introspection_c__Vibration_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Vibration__rosidl_typesupport_introspection_c__Vibration_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
