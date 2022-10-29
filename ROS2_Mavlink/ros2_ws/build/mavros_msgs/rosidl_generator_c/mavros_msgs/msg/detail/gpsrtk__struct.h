// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mavros_msgs:msg/GPSRTK.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__MSG__DETAIL__GPSRTK__STRUCT_H_
#define MAVROS_MSGS__MSG__DETAIL__GPSRTK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/GPSRTK in the package mavros_msgs.
typedef struct mavros_msgs__msg__GPSRTK
{
  std_msgs__msg__Header header;
  uint8_t rtk_receiver_id;
  int16_t wn;
  uint32_t tow;
  uint8_t rtk_health;
  uint8_t rtk_rate;
  uint8_t nsats;
  int32_t baseline_a;
  int32_t baseline_b;
  int32_t baseline_c;
  uint32_t accuracy;
  int32_t iar_num_hypotheses;
} mavros_msgs__msg__GPSRTK;

// Struct for a sequence of mavros_msgs__msg__GPSRTK.
typedef struct mavros_msgs__msg__GPSRTK__Sequence
{
  mavros_msgs__msg__GPSRTK * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mavros_msgs__msg__GPSRTK__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAVROS_MSGS__MSG__DETAIL__GPSRTK__STRUCT_H_
