// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mavros_msgs:msg/VehicleInfo.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__MSG__DETAIL__VEHICLE_INFO__STRUCT_H_
#define MAVROS_MSGS__MSG__DETAIL__VEHICLE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAVE_INFO_HEARTBEAT'.
enum
{
  mavros_msgs__msg__VehicleInfo__HAVE_INFO_HEARTBEAT = 1
};

/// Constant 'HAVE_INFO_AUTOPILOT_VERSION'.
enum
{
  mavros_msgs__msg__VehicleInfo__HAVE_INFO_AUTOPILOT_VERSION = 2
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'mode'
// Member 'flight_custom_version'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/VehicleInfo in the package mavros_msgs.
typedef struct mavros_msgs__msg__VehicleInfo
{
  std_msgs__msg__Header header;
  uint8_t available_info;
  uint8_t sysid;
  uint8_t compid;
  uint8_t autopilot;
  uint8_t type;
  uint8_t system_status;
  uint8_t base_mode;
  uint32_t custom_mode;
  rosidl_runtime_c__String mode;
  uint32_t mode_id;
  uint64_t capabilities;
  uint32_t flight_sw_version;
  uint32_t middleware_sw_version;
  uint32_t os_sw_version;
  uint32_t board_version;
  rosidl_runtime_c__String flight_custom_version;
  uint16_t vendor_id;
  uint16_t product_id;
  uint64_t uid;
} mavros_msgs__msg__VehicleInfo;

// Struct for a sequence of mavros_msgs__msg__VehicleInfo.
typedef struct mavros_msgs__msg__VehicleInfo__Sequence
{
  mavros_msgs__msg__VehicleInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mavros_msgs__msg__VehicleInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAVROS_MSGS__MSG__DETAIL__VEHICLE_INFO__STRUCT_H_
