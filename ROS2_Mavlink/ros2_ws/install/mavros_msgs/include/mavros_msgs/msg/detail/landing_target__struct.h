// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mavros_msgs:msg/LandingTarget.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__MSG__DETAIL__LANDING_TARGET__STRUCT_H_
#define MAVROS_MSGS__MSG__DETAIL__LANDING_TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'GLOBAL'.
enum
{
  mavros_msgs__msg__LandingTarget__GLOBAL = 0
};

/// Constant 'LOCAL_NED'.
enum
{
  mavros_msgs__msg__LandingTarget__LOCAL_NED = 2
};

/// Constant 'MISSION'.
enum
{
  mavros_msgs__msg__LandingTarget__MISSION = 3
};

/// Constant 'GLOBAL_RELATIVE_ALT'.
enum
{
  mavros_msgs__msg__LandingTarget__GLOBAL_RELATIVE_ALT = 4
};

/// Constant 'LOCAL_ENU'.
enum
{
  mavros_msgs__msg__LandingTarget__LOCAL_ENU = 5
};

/// Constant 'GLOBAL_INT'.
enum
{
  mavros_msgs__msg__LandingTarget__GLOBAL_INT = 6
};

/// Constant 'GLOBAL_RELATIVE_ALT_INT'.
enum
{
  mavros_msgs__msg__LandingTarget__GLOBAL_RELATIVE_ALT_INT = 7
};

/// Constant 'LOCAL_OFFSET_NED'.
enum
{
  mavros_msgs__msg__LandingTarget__LOCAL_OFFSET_NED = 8
};

/// Constant 'BODY_NED'.
enum
{
  mavros_msgs__msg__LandingTarget__BODY_NED = 9
};

/// Constant 'BODY_OFFSET_NED'.
enum
{
  mavros_msgs__msg__LandingTarget__BODY_OFFSET_NED = 10
};

/// Constant 'GLOBAL_TERRAIN_ALT'.
enum
{
  mavros_msgs__msg__LandingTarget__GLOBAL_TERRAIN_ALT = 11
};

/// Constant 'GLOBAL_TERRAIN_ALT_INT'.
enum
{
  mavros_msgs__msg__LandingTarget__GLOBAL_TERRAIN_ALT_INT = 12
};

/// Constant 'LIGHT_BEACON'.
enum
{
  mavros_msgs__msg__LandingTarget__LIGHT_BEACON = 0
};

/// Constant 'RADIO_BEACON'.
enum
{
  mavros_msgs__msg__LandingTarget__RADIO_BEACON = 1
};

/// Constant 'VISION_FIDUCIAL'.
enum
{
  mavros_msgs__msg__LandingTarget__VISION_FIDUCIAL = 2
};

/// Constant 'VISION_OTHER'.
enum
{
  mavros_msgs__msg__LandingTarget__VISION_OTHER = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in msg/LandingTarget in the package mavros_msgs.
typedef struct mavros_msgs__msg__LandingTarget
{
  std_msgs__msg__Header header;
  uint8_t target_num;
  uint8_t frame;
  float angle[2];
  float distance;
  float size[2];
  geometry_msgs__msg__Pose pose;
  uint8_t type;
} mavros_msgs__msg__LandingTarget;

// Struct for a sequence of mavros_msgs__msg__LandingTarget.
typedef struct mavros_msgs__msg__LandingTarget__Sequence
{
  mavros_msgs__msg__LandingTarget * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mavros_msgs__msg__LandingTarget__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAVROS_MSGS__MSG__DETAIL__LANDING_TARGET__STRUCT_H_
