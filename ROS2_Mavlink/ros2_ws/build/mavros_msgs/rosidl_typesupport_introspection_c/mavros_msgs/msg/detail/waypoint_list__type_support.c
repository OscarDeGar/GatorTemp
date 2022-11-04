// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mavros_msgs:msg/WaypointList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mavros_msgs/msg/detail/waypoint_list__rosidl_typesupport_introspection_c.h"
#include "mavros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mavros_msgs/msg/detail/waypoint_list__functions.h"
#include "mavros_msgs/msg/detail/waypoint_list__struct.h"


// Include directives for member types
// Member `waypoints`
#include "mavros_msgs/msg/waypoint.h"
// Member `waypoints`
#include "mavros_msgs/msg/detail/waypoint__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void WaypointList__rosidl_typesupport_introspection_c__WaypointList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mavros_msgs__msg__WaypointList__init(message_memory);
}

void WaypointList__rosidl_typesupport_introspection_c__WaypointList_fini_function(void * message_memory)
{
  mavros_msgs__msg__WaypointList__fini(message_memory);
}

size_t WaypointList__rosidl_typesupport_introspection_c__size_function__Waypoint__waypoints(
  const void * untyped_member)
{
  const mavros_msgs__msg__Waypoint__Sequence * member =
    (const mavros_msgs__msg__Waypoint__Sequence *)(untyped_member);
  return member->size;
}

const void * WaypointList__rosidl_typesupport_introspection_c__get_const_function__Waypoint__waypoints(
  const void * untyped_member, size_t index)
{
  const mavros_msgs__msg__Waypoint__Sequence * member =
    (const mavros_msgs__msg__Waypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * WaypointList__rosidl_typesupport_introspection_c__get_function__Waypoint__waypoints(
  void * untyped_member, size_t index)
{
  mavros_msgs__msg__Waypoint__Sequence * member =
    (mavros_msgs__msg__Waypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

bool WaypointList__rosidl_typesupport_introspection_c__resize_function__Waypoint__waypoints(
  void * untyped_member, size_t size)
{
  mavros_msgs__msg__Waypoint__Sequence * member =
    (mavros_msgs__msg__Waypoint__Sequence *)(untyped_member);
  mavros_msgs__msg__Waypoint__Sequence__fini(member);
  return mavros_msgs__msg__Waypoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember WaypointList__rosidl_typesupport_introspection_c__WaypointList_message_member_array[2] = {
  {
    "current_seq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__WaypointList, current_seq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__WaypointList, waypoints),  // bytes offset in struct
    NULL,  // default value
    WaypointList__rosidl_typesupport_introspection_c__size_function__Waypoint__waypoints,  // size() function pointer
    WaypointList__rosidl_typesupport_introspection_c__get_const_function__Waypoint__waypoints,  // get_const(index) function pointer
    WaypointList__rosidl_typesupport_introspection_c__get_function__Waypoint__waypoints,  // get(index) function pointer
    WaypointList__rosidl_typesupport_introspection_c__resize_function__Waypoint__waypoints  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WaypointList__rosidl_typesupport_introspection_c__WaypointList_message_members = {
  "mavros_msgs__msg",  // message namespace
  "WaypointList",  // message name
  2,  // number of fields
  sizeof(mavros_msgs__msg__WaypointList),
  WaypointList__rosidl_typesupport_introspection_c__WaypointList_message_member_array,  // message members
  WaypointList__rosidl_typesupport_introspection_c__WaypointList_init_function,  // function to initialize message memory (memory has to be allocated)
  WaypointList__rosidl_typesupport_introspection_c__WaypointList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WaypointList__rosidl_typesupport_introspection_c__WaypointList_message_type_support_handle = {
  0,
  &WaypointList__rosidl_typesupport_introspection_c__WaypointList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mavros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, msg, WaypointList)() {
  WaypointList__rosidl_typesupport_introspection_c__WaypointList_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, msg, Waypoint)();
  if (!WaypointList__rosidl_typesupport_introspection_c__WaypointList_message_type_support_handle.typesupport_identifier) {
    WaypointList__rosidl_typesupport_introspection_c__WaypointList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WaypointList__rosidl_typesupport_introspection_c__WaypointList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
