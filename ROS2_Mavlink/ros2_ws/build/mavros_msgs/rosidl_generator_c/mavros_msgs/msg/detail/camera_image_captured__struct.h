// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mavros_msgs:msg/CameraImageCaptured.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__MSG__DETAIL__CAMERA_IMAGE_CAPTURED__STRUCT_H_
#define MAVROS_MSGS__MSG__DETAIL__CAMERA_IMAGE_CAPTURED__STRUCT_H_

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
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'geo'
#include "geographic_msgs/msg/detail/geo_point__struct.h"
// Member 'file_url'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/CameraImageCaptured in the package mavros_msgs.
typedef struct mavros_msgs__msg__CameraImageCaptured
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Quaternion orientation;
  geographic_msgs__msg__GeoPoint geo;
  float relative_alt;
  int32_t image_index;
  int8_t capture_result;
  rosidl_runtime_c__String file_url;
} mavros_msgs__msg__CameraImageCaptured;

// Struct for a sequence of mavros_msgs__msg__CameraImageCaptured.
typedef struct mavros_msgs__msg__CameraImageCaptured__Sequence
{
  mavros_msgs__msg__CameraImageCaptured * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mavros_msgs__msg__CameraImageCaptured__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAVROS_MSGS__MSG__DETAIL__CAMERA_IMAGE_CAPTURED__STRUCT_H_
