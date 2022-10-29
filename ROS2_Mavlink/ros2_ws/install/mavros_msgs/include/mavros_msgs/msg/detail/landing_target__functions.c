// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mavros_msgs:msg/LandingTarget.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/landing_target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
mavros_msgs__msg__LandingTarget__init(mavros_msgs__msg__LandingTarget * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mavros_msgs__msg__LandingTarget__fini(msg);
    return false;
  }
  // target_num
  // frame
  // angle
  // distance
  // size
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    mavros_msgs__msg__LandingTarget__fini(msg);
    return false;
  }
  // type
  return true;
}

void
mavros_msgs__msg__LandingTarget__fini(mavros_msgs__msg__LandingTarget * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // target_num
  // frame
  // angle
  // distance
  // size
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // type
}

mavros_msgs__msg__LandingTarget *
mavros_msgs__msg__LandingTarget__create()
{
  mavros_msgs__msg__LandingTarget * msg = (mavros_msgs__msg__LandingTarget *)malloc(sizeof(mavros_msgs__msg__LandingTarget));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__msg__LandingTarget));
  bool success = mavros_msgs__msg__LandingTarget__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__msg__LandingTarget__destroy(mavros_msgs__msg__LandingTarget * msg)
{
  if (msg) {
    mavros_msgs__msg__LandingTarget__fini(msg);
  }
  free(msg);
}


bool
mavros_msgs__msg__LandingTarget__Sequence__init(mavros_msgs__msg__LandingTarget__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mavros_msgs__msg__LandingTarget * data = NULL;
  if (size) {
    data = (mavros_msgs__msg__LandingTarget *)calloc(size, sizeof(mavros_msgs__msg__LandingTarget));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__msg__LandingTarget__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__msg__LandingTarget__fini(&data[i - 1]);
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
mavros_msgs__msg__LandingTarget__Sequence__fini(mavros_msgs__msg__LandingTarget__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mavros_msgs__msg__LandingTarget__fini(&array->data[i]);
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

mavros_msgs__msg__LandingTarget__Sequence *
mavros_msgs__msg__LandingTarget__Sequence__create(size_t size)
{
  mavros_msgs__msg__LandingTarget__Sequence * array = (mavros_msgs__msg__LandingTarget__Sequence *)malloc(sizeof(mavros_msgs__msg__LandingTarget__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__msg__LandingTarget__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mavros_msgs__msg__LandingTarget__Sequence__destroy(mavros_msgs__msg__LandingTarget__Sequence * array)
{
  if (array) {
    mavros_msgs__msg__LandingTarget__Sequence__fini(array);
  }
  free(array);
}
