// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mavros_msgs:msg/ActuatorControl.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__MSG__DETAIL__ACTUATOR_CONTROL__STRUCT_H_
#define MAVROS_MSGS__MSG__DETAIL__ACTUATOR_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PX4_MIX_FLIGHT_CONTROL'.
enum
{
  mavros_msgs__msg__ActuatorControl__PX4_MIX_FLIGHT_CONTROL = 0
};

/// Constant 'PX4_MIX_FLIGHT_CONTROL_VTOL_ALT'.
enum
{
  mavros_msgs__msg__ActuatorControl__PX4_MIX_FLIGHT_CONTROL_VTOL_ALT = 1
};

/// Constant 'PX4_MIX_PAYLOAD'.
enum
{
  mavros_msgs__msg__ActuatorControl__PX4_MIX_PAYLOAD = 2
};

/// Constant 'PX4_MIX_MANUAL_PASSTHROUGH'.
enum
{
  mavros_msgs__msg__ActuatorControl__PX4_MIX_MANUAL_PASSTHROUGH = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/ActuatorControl in the package mavros_msgs.
typedef struct mavros_msgs__msg__ActuatorControl
{
  std_msgs__msg__Header header;
  uint8_t group_mix;
  float controls[8];
} mavros_msgs__msg__ActuatorControl;

// Struct for a sequence of mavros_msgs__msg__ActuatorControl.
typedef struct mavros_msgs__msg__ActuatorControl__Sequence
{
  mavros_msgs__msg__ActuatorControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mavros_msgs__msg__ActuatorControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAVROS_MSGS__MSG__DETAIL__ACTUATOR_CONTROL__STRUCT_H_
