// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mavros_msgs:msg/GPSRAW.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__MSG__DETAIL__GPSRAW__STRUCT_H_
#define MAVROS_MSGS__MSG__DETAIL__GPSRAW__STRUCT_H_

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
  mavros_msgs__msg__GPSRAW__GPS_FIX_TYPE_NO_GPS = 0
};

/// Constant 'GPS_FIX_TYPE_NO_FIX'.
enum
{
  mavros_msgs__msg__GPSRAW__GPS_FIX_TYPE_NO_FIX = 1
};

/// Constant 'GPS_FIX_TYPE_2D_FIX'.
enum
{
  mavros_msgs__msg__GPSRAW__GPS_FIX_TYPE_2D_FIX = 2
};

/// Constant 'GPS_FIX_TYPE_3D_FIX'.
enum
{
  mavros_msgs__msg__GPSRAW__GPS_FIX_TYPE_3D_FIX = 3
};

/// Constant 'GPS_FIX_TYPE_DGPS'.
enum
{
  mavros_msgs__msg__GPSRAW__GPS_FIX_TYPE_DGPS = 4
};

/// Constant 'GPS_FIX_TYPE_RTK_FLOATR'.
enum
{
  mavros_msgs__msg__GPSRAW__GPS_FIX_TYPE_RTK_FLOATR = 5
};

/// Constant 'GPS_FIX_TYPE_RTK_FIXEDR'.
enum
{
  mavros_msgs__msg__GPSRAW__GPS_FIX_TYPE_RTK_FIXEDR = 6
};

/// Constant 'GPS_FIX_TYPE_STATIC'.
enum
{
  mavros_msgs__msg__GPSRAW__GPS_FIX_TYPE_STATIC = 7
};

/// Constant 'GPS_FIX_TYPE_PPP'.
enum
{
  mavros_msgs__msg__GPSRAW__GPS_FIX_TYPE_PPP = 8
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/GPSRAW in the package mavros_msgs.
typedef struct mavros_msgs__msg__GPSRAW
{
  std_msgs__msg__Header header;
  uint8_t fix_type;
  int32_t lat;
  int32_t lon;
  int32_t alt;
  uint16_t eph;
  uint16_t epv;
  uint16_t vel;
  uint16_t cog;
  uint8_t satellites_visible;
  int32_t alt_ellipsoid;
  uint32_t h_acc;
  uint32_t v_acc;
  uint32_t vel_acc;
  int32_t hdg_acc;
  uint16_t yaw;
  uint8_t dgps_numch;
  uint32_t dgps_age;
} mavros_msgs__msg__GPSRAW;

// Struct for a sequence of mavros_msgs__msg__GPSRAW.
typedef struct mavros_msgs__msg__GPSRAW__Sequence
{
  mavros_msgs__msg__GPSRAW * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mavros_msgs__msg__GPSRAW__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAVROS_MSGS__MSG__DETAIL__GPSRAW__STRUCT_H_
