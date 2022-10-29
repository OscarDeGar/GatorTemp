// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mavros_msgs:msg/ESCTelemetry.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mavros_msgs/msg/detail/esc_telemetry__rosidl_typesupport_introspection_c.h"
#include "mavros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mavros_msgs/msg/detail/esc_telemetry__functions.h"
#include "mavros_msgs/msg/detail/esc_telemetry__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `esc_telemetry`
#include "mavros_msgs/msg/esc_telemetry_item.h"
// Member `esc_telemetry`
#include "mavros_msgs/msg/detail/esc_telemetry_item__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ESCTelemetry__rosidl_typesupport_introspection_c__ESCTelemetry_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mavros_msgs__msg__ESCTelemetry__init(message_memory);
}

void ESCTelemetry__rosidl_typesupport_introspection_c__ESCTelemetry_fini_function(void * message_memory)
{
  mavros_msgs__msg__ESCTelemetry__fini(message_memory);
}

size_t ESCTelemetry__rosidl_typesupport_introspection_c__size_function__ESCTelemetryItem__esc_telemetry(
  const void * untyped_member)
{
  const mavros_msgs__msg__ESCTelemetryItem__Sequence * member =
    (const mavros_msgs__msg__ESCTelemetryItem__Sequence *)(untyped_member);
  return member->size;
}

const void * ESCTelemetry__rosidl_typesupport_introspection_c__get_const_function__ESCTelemetryItem__esc_telemetry(
  const void * untyped_member, size_t index)
{
  const mavros_msgs__msg__ESCTelemetryItem__Sequence * member =
    (const mavros_msgs__msg__ESCTelemetryItem__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ESCTelemetry__rosidl_typesupport_introspection_c__get_function__ESCTelemetryItem__esc_telemetry(
  void * untyped_member, size_t index)
{
  mavros_msgs__msg__ESCTelemetryItem__Sequence * member =
    (mavros_msgs__msg__ESCTelemetryItem__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ESCTelemetry__rosidl_typesupport_introspection_c__resize_function__ESCTelemetryItem__esc_telemetry(
  void * untyped_member, size_t size)
{
  mavros_msgs__msg__ESCTelemetryItem__Sequence * member =
    (mavros_msgs__msg__ESCTelemetryItem__Sequence *)(untyped_member);
  mavros_msgs__msg__ESCTelemetryItem__Sequence__fini(member);
  return mavros_msgs__msg__ESCTelemetryItem__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ESCTelemetry__rosidl_typesupport_introspection_c__ESCTelemetry_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__ESCTelemetry, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "esc_telemetry",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__ESCTelemetry, esc_telemetry),  // bytes offset in struct
    NULL,  // default value
    ESCTelemetry__rosidl_typesupport_introspection_c__size_function__ESCTelemetryItem__esc_telemetry,  // size() function pointer
    ESCTelemetry__rosidl_typesupport_introspection_c__get_const_function__ESCTelemetryItem__esc_telemetry,  // get_const(index) function pointer
    ESCTelemetry__rosidl_typesupport_introspection_c__get_function__ESCTelemetryItem__esc_telemetry,  // get(index) function pointer
    ESCTelemetry__rosidl_typesupport_introspection_c__resize_function__ESCTelemetryItem__esc_telemetry  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ESCTelemetry__rosidl_typesupport_introspection_c__ESCTelemetry_message_members = {
  "mavros_msgs__msg",  // message namespace
  "ESCTelemetry",  // message name
  2,  // number of fields
  sizeof(mavros_msgs__msg__ESCTelemetry),
  ESCTelemetry__rosidl_typesupport_introspection_c__ESCTelemetry_message_member_array,  // message members
  ESCTelemetry__rosidl_typesupport_introspection_c__ESCTelemetry_init_function,  // function to initialize message memory (memory has to be allocated)
  ESCTelemetry__rosidl_typesupport_introspection_c__ESCTelemetry_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ESCTelemetry__rosidl_typesupport_introspection_c__ESCTelemetry_message_type_support_handle = {
  0,
  &ESCTelemetry__rosidl_typesupport_introspection_c__ESCTelemetry_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mavros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, msg, ESCTelemetry)() {
  ESCTelemetry__rosidl_typesupport_introspection_c__ESCTelemetry_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ESCTelemetry__rosidl_typesupport_introspection_c__ESCTelemetry_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, msg, ESCTelemetryItem)();
  if (!ESCTelemetry__rosidl_typesupport_introspection_c__ESCTelemetry_message_type_support_handle.typesupport_identifier) {
    ESCTelemetry__rosidl_typesupport_introspection_c__ESCTelemetry_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ESCTelemetry__rosidl_typesupport_introspection_c__ESCTelemetry_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
