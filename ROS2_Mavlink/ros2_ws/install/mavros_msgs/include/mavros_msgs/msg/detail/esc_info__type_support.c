// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mavros_msgs:msg/ESCInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mavros_msgs/msg/detail/esc_info__rosidl_typesupport_introspection_c.h"
#include "mavros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mavros_msgs/msg/detail/esc_info__functions.h"
#include "mavros_msgs/msg/detail/esc_info__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `esc_info`
#include "mavros_msgs/msg/esc_info_item.h"
// Member `esc_info`
#include "mavros_msgs/msg/detail/esc_info_item__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ESCInfo__rosidl_typesupport_introspection_c__ESCInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mavros_msgs__msg__ESCInfo__init(message_memory);
}

void ESCInfo__rosidl_typesupport_introspection_c__ESCInfo_fini_function(void * message_memory)
{
  mavros_msgs__msg__ESCInfo__fini(message_memory);
}

size_t ESCInfo__rosidl_typesupport_introspection_c__size_function__ESCInfoItem__esc_info(
  const void * untyped_member)
{
  const mavros_msgs__msg__ESCInfoItem__Sequence * member =
    (const mavros_msgs__msg__ESCInfoItem__Sequence *)(untyped_member);
  return member->size;
}

const void * ESCInfo__rosidl_typesupport_introspection_c__get_const_function__ESCInfoItem__esc_info(
  const void * untyped_member, size_t index)
{
  const mavros_msgs__msg__ESCInfoItem__Sequence * member =
    (const mavros_msgs__msg__ESCInfoItem__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ESCInfo__rosidl_typesupport_introspection_c__get_function__ESCInfoItem__esc_info(
  void * untyped_member, size_t index)
{
  mavros_msgs__msg__ESCInfoItem__Sequence * member =
    (mavros_msgs__msg__ESCInfoItem__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ESCInfo__rosidl_typesupport_introspection_c__resize_function__ESCInfoItem__esc_info(
  void * untyped_member, size_t size)
{
  mavros_msgs__msg__ESCInfoItem__Sequence * member =
    (mavros_msgs__msg__ESCInfoItem__Sequence *)(untyped_member);
  mavros_msgs__msg__ESCInfoItem__Sequence__fini(member);
  return mavros_msgs__msg__ESCInfoItem__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ESCInfo__rosidl_typesupport_introspection_c__ESCInfo_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__ESCInfo, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "counter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__ESCInfo, counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__ESCInfo, count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "connection_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__ESCInfo, connection_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__ESCInfo, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "esc_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__ESCInfo, esc_info),  // bytes offset in struct
    NULL,  // default value
    ESCInfo__rosidl_typesupport_introspection_c__size_function__ESCInfoItem__esc_info,  // size() function pointer
    ESCInfo__rosidl_typesupport_introspection_c__get_const_function__ESCInfoItem__esc_info,  // get_const(index) function pointer
    ESCInfo__rosidl_typesupport_introspection_c__get_function__ESCInfoItem__esc_info,  // get(index) function pointer
    ESCInfo__rosidl_typesupport_introspection_c__resize_function__ESCInfoItem__esc_info  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ESCInfo__rosidl_typesupport_introspection_c__ESCInfo_message_members = {
  "mavros_msgs__msg",  // message namespace
  "ESCInfo",  // message name
  6,  // number of fields
  sizeof(mavros_msgs__msg__ESCInfo),
  ESCInfo__rosidl_typesupport_introspection_c__ESCInfo_message_member_array,  // message members
  ESCInfo__rosidl_typesupport_introspection_c__ESCInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  ESCInfo__rosidl_typesupport_introspection_c__ESCInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ESCInfo__rosidl_typesupport_introspection_c__ESCInfo_message_type_support_handle = {
  0,
  &ESCInfo__rosidl_typesupport_introspection_c__ESCInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mavros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, msg, ESCInfo)() {
  ESCInfo__rosidl_typesupport_introspection_c__ESCInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ESCInfo__rosidl_typesupport_introspection_c__ESCInfo_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, msg, ESCInfoItem)();
  if (!ESCInfo__rosidl_typesupport_introspection_c__ESCInfo_message_type_support_handle.typesupport_identifier) {
    ESCInfo__rosidl_typesupport_introspection_c__ESCInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ESCInfo__rosidl_typesupport_introspection_c__ESCInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
