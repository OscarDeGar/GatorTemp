// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mavros_msgs:msg/MountControl.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__MSG__DETAIL__MOUNT_CONTROL__STRUCT_H_
#define MAVROS_MSGS__MSG__DETAIL__MOUNT_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MAV_MOUNT_MODE_RETRACT'.
enum
{
  mavros_msgs__msg__MountControl__MAV_MOUNT_MODE_RETRACT = 0
};

/// Constant 'MAV_MOUNT_MODE_NEUTRAL'.
enum
{
  mavros_msgs__msg__MountControl__MAV_MOUNT_MODE_NEUTRAL = 1
};

/// Constant 'MAV_MOUNT_MODE_MAVLINK_TARGETING'.
enum
{
  mavros_msgs__msg__MountControl__MAV_MOUNT_MODE_MAVLINK_TARGETING = 2
};

/// Constant 'MAV_MOUNT_MODE_RC_TARGETING'.
enum
{
  mavros_msgs__msg__MountControl__MAV_MOUNT_MODE_RC_TARGETING = 3
};

/// Constant 'MAV_MOUNT_MODE_GPS_POINT'.
enum
{
  mavros_msgs__msg__MountControl__MAV_MOUNT_MODE_GPS_POINT = 4
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/MountControl in the package mavros_msgs.
typedef struct mavros_msgs__msg__MountControl
{
  std_msgs__msg__Header header;
  uint8_t mode;
  float pitch;
  float roll;
  float yaw;
  float altitude;
  float latitude;
  float longitude;
} mavros_msgs__msg__MountControl;

// Struct for a sequence of mavros_msgs__msg__MountControl.
typedef struct mavros_msgs__msg__MountControl__Sequence
{
  mavros_msgs__msg__MountControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mavros_msgs__msg__MountControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAVROS_MSGS__MSG__DETAIL__MOUNT_CONTROL__STRUCT_H_
