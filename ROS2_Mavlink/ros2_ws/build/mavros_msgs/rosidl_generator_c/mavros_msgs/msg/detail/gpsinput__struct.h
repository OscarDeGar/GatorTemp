// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mavros_msgs:msg/GPSINPUT.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__MSG__DETAIL__GPSINPUT__STRUCT_H_
#define MAVROS_MSGS__MSG__DETAIL__GPSINPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'GPS_FIX_TYPE_NO_GPS'.
enum
{
  mavros_msgs__msg__GPSINPUT__GPS_FIX_TYPE_NO_GPS = 0
};

/// Constant 'GPS_FIX_TYPE_NO_FIX'.
enum
{
  mavros_msgs__msg__GPSINPUT__GPS_FIX_TYPE_NO_FIX = 1
};

/// Constant 'GPS_FIX_TYPE_2D_FIX'.
enum
{
  mavros_msgs__msg__GPSINPUT__GPS_FIX_TYPE_2D_FIX = 2
};

/// Constant 'GPS_FIX_TYPE_3D_FIX'.
enum
{
  mavros_msgs__msg__GPSINPUT__GPS_FIX_TYPE_3D_FIX = 3
};

/// Constant 'GPS_FIX_TYPE_DGPS'.
enum
{
  mavros_msgs__msg__GPSINPUT__GPS_FIX_TYPE_DGPS = 4
};

/// Constant 'GPS_FIX_TYPE_RTK_FLOATR'.
enum
{
  mavros_msgs__msg__GPSINPUT__GPS_FIX_TYPE_RTK_FLOATR = 5
};

/// Constant 'GPS_FIX_TYPE_RTK_FIXEDR'.
enum
{
  mavros_msgs__msg__GPSINPUT__GPS_FIX_TYPE_RTK_FIXEDR = 6
};

/// Constant 'GPS_FIX_TYPE_STATIC'.
enum
{
  mavros_msgs__msg__GPSINPUT__GPS_FIX_TYPE_STATIC = 7
};

/// Constant 'GPS_FIX_TYPE_PPP'.
enum
{
  mavros_msgs__msg__GPSINPUT__GPS_FIX_TYPE_PPP = 8
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/GPSINPUT in the package mavros_msgs.
typedef struct mavros_msgs__msg__GPSINPUT
{
  std_msgs__msg__Header header;
  uint8_t fix_type;
  uint8_t gps_id;
  uint16_t ignore_flags;
  uint32_t time_week_ms;
  uint16_t time_week;
  int32_t lat;
  int32_t lon;
  float alt;
  float hdop;
  float vdop;
  float vn;
  float ve;
  float vd;
  float speed_accuracy;
  float horiz_accuracy;
  float vert_accuracy;
  uint8_t satellites_visible;
  uint16_t yaw;
} mavros_msgs__msg__GPSINPUT;

// Struct for a sequence of mavros_msgs__msg__GPSINPUT.
typedef struct mavros_msgs__msg__GPSINPUT__Sequence
{
  mavros_msgs__msg__GPSINPUT * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mavros_msgs__msg__GPSINPUT__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAVROS_MSGS__MSG__DETAIL__GPSINPUT__STRUCT_H_
