// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mavros_msgs:msg/CameraImageCaptured.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/camera_image_captured__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__functions.h"
// Member `geo`
#include "geographic_msgs/msg/detail/geo_point__functions.h"
// Member `file_url`
#include "rosidl_runtime_c/string_functions.h"

bool
mavros_msgs__msg__CameraImageCaptured__init(mavros_msgs__msg__CameraImageCaptured * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mavros_msgs__msg__CameraImageCaptured__fini(msg);
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__init(&msg->orientation)) {
    mavros_msgs__msg__CameraImageCaptured__fini(msg);
    return false;
  }
  // geo
  if (!geographic_msgs__msg__GeoPoint__init(&msg->geo)) {
    mavros_msgs__msg__CameraImageCaptured__fini(msg);
    return false;
  }
  // relative_alt
  // image_index
  // capture_result
  // file_url
  if (!rosidl_runtime_c__String__init(&msg->file_url)) {
    mavros_msgs__msg__CameraImageCaptured__fini(msg);
    return false;
  }
  return true;
}

void
mavros_msgs__msg__CameraImageCaptured__fini(mavros_msgs__msg__CameraImageCaptured * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // orientation
  geometry_msgs__msg__Quaternion__fini(&msg->orientation);
  // geo
  geographic_msgs__msg__GeoPoint__fini(&msg->geo);
  // relative_alt
  // image_index
  // capture_result
  // file_url
  rosidl_runtime_c__String__fini(&msg->file_url);
}

mavros_msgs__msg__CameraImageCaptured *
mavros_msgs__msg__CameraImageCaptured__create()
{
  mavros_msgs__msg__CameraImageCaptured * msg = (mavros_msgs__msg__CameraImageCaptured *)malloc(sizeof(mavros_msgs__msg__CameraImageCaptured));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__msg__CameraImageCaptured));
  bool success = mavros_msgs__msg__CameraImageCaptured__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__msg__CameraImageCaptured__destroy(mavros_msgs__msg__CameraImageCaptured * msg)
{
  if (msg) {
    mavros_msgs__msg__CameraImageCaptured__fini(msg);
  }
  free(msg);
}


bool
mavros_msgs__msg__CameraImageCaptured__Sequence__init(mavros_msgs__msg__CameraImageCaptured__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mavros_msgs__msg__CameraImageCaptured * data = NULL;
  if (size) {
    data = (mavros_msgs__msg__CameraImageCaptured *)calloc(size, sizeof(mavros_msgs__msg__CameraImageCaptured));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__msg__CameraImageCaptured__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__msg__CameraImageCaptured__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mavros_msgs__msg__CameraImageCaptured__Sequence__fini(mavros_msgs__msg__CameraImageCaptured__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mavros_msgs__msg__CameraImageCaptured__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mavros_msgs__msg__CameraImageCaptured__Sequence *
mavros_msgs__msg__CameraImageCaptured__Sequence__create(size_t size)
{
  mavros_msgs__msg__CameraImageCaptured__Sequence * array = (mavros_msgs__msg__CameraImageCaptured__Sequence *)malloc(sizeof(mavros_msgs__msg__CameraImageCaptured__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__msg__CameraImageCaptured__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mavros_msgs__msg__CameraImageCaptured__Sequence__destroy(mavros_msgs__msg__CameraImageCaptured__Sequence * array)
{
  if (array) {
    mavros_msgs__msg__CameraImageCaptured__Sequence__fini(array);
  }
  free(array);
}
