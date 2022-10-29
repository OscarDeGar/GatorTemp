// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mavros_msgs:msg/ESCStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mavros_msgs/msg/detail/esc_status__rosidl_typesupport_introspection_c.h"
#include "mavros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mavros_msgs/msg/detail/esc_status__functions.h"
#include "mavros_msgs/msg/detail/esc_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `esc_status`
#include "mavros_msgs/msg/esc_status_item.h"
// Member `esc_status`
#include "mavros_msgs/msg/detail/esc_status_item__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ESCStatus__rosidl_typesupport_introspection_c__ESCStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mavros_msgs__msg__ESCStatus__init(message_memory);
}

void ESCStatus__rosidl_typesupport_introspection_c__ESCStatus_fini_function(void * message_memory)
{
  mavros_msgs__msg__ESCStatus__fini(message_memory);
}

size_t ESCStatus__rosidl_typesupport_introspection_c__size_function__ESCStatusItem__esc_status(
  const void * untyped_member)
{
  const mavros_msgs__msg__ESCStatusItem__Sequence * member =
    (const mavros_msgs__msg__ESCStatusItem__Sequence *)(untyped_member);
  return member->size;
}

const void * ESCStatus__rosidl_typesupport_introspection_c__get_const_function__ESCStatusItem__esc_status(
  const void * untyped_member, size_t index)
{
  const mavros_msgs__msg__ESCStatusItem__Sequence * member =
    (const mavros_msgs__msg__ESCStatusItem__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ESCStatus__rosidl_typesupport_introspection_c__get_function__ESCStatusItem__esc_status(
  void * untyped_member, size_t index)
{
  mavros_msgs__msg__ESCStatusItem__Sequence * member =
    (mavros_msgs__msg__ESCStatusItem__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ESCStatus__rosidl_typesupport_introspection_c__resize_function__ESCStatusItem__esc_status(
  void * untyped_member, size_t size)
{
  mavros_msgs__msg__ESCStatusItem__Sequence * member =
    (mavros_msgs__msg__ESCStatusItem__Sequence *)(untyped_member);
  mavros_msgs__msg__ESCStatusItem__Sequence__fini(member);
  return mavros_msgs__msg__ESCStatusItem__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ESCStatus__rosidl_typesupport_introspection_c__ESCStatus_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__ESCStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "esc_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__ESCStatus, esc_status),  // bytes offset in struct
    NULL,  // default value
    ESCStatus__rosidl_typesupport_introspection_c__size_function__ESCStatusItem__esc_status,  // size() function pointer
    ESCStatus__rosidl_typesupport_introspection_c__get_const_function__ESCStatusItem__esc_status,  // get_const(index) function pointer
    ESCStatus__rosidl_typesupport_introspection_c__get_function__ESCStatusItem__esc_status,  // get(index) function pointer
    ESCStatus__rosidl_typesupport_introspection_c__resize_function__ESCStatusItem__esc_status  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ESCStatus__rosidl_typesupport_introspection_c__ESCStatus_message_members = {
  "mavros_msgs__msg",  // message namespace
  "ESCStatus",  // message name
  2,  // number of fields
  sizeof(mavros_msgs__msg__ESCStatus),
  ESCStatus__rosidl_typesupport_introspection_c__ESCStatus_message_member_array,  // message members
  ESCStatus__rosidl_typesupport_introspection_c__ESCStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  ESCStatus__rosidl_typesupport_introspection_c__ESCStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ESCStatus__rosidl_typesupport_introspection_c__ESCStatus_message_type_support_handle = {
  0,
  &ESCStatus__rosidl_typesupport_introspection_c__ESCStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mavros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, msg, ESCStatus)() {
  ESCStatus__rosidl_typesupport_introspection_c__ESCStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ESCStatus__rosidl_typesupport_introspection_c__ESCStatus_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, msg, ESCStatusItem)();
  if (!ESCStatus__rosidl_typesupport_introspection_c__ESCStatus_message_type_support_handle.typesupport_identifier) {
    ESCStatus__rosidl_typesupport_introspection_c__ESCStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ESCStatus__rosidl_typesupport_introspection_c__ESCStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
