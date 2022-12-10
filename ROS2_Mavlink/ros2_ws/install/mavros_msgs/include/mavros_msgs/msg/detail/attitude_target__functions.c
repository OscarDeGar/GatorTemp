// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mavros_msgs:msg/AttitudeTarget.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/attitude_target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__functions.h"
// Member `body_rate`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
mavros_msgs__msg__AttitudeTarget__init(mavros_msgs__msg__AttitudeTarget * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mavros_msgs__msg__AttitudeTarget__fini(msg);
    return false;
  }
  // type_mask
  // orientation
  if (!geometry_msgs__msg__Quaternion__init(&msg->orientation)) {
    mavros_msgs__msg__AttitudeTarget__fini(msg);
    return false;
  }
  // body_rate
  if (!geometry_msgs__msg__Vector3__init(&msg->body_rate)) {
    mavros_msgs__msg__AttitudeTarget__fini(msg);
    return false;
  }
  // thrust
  return true;
}

void
mavros_msgs__msg__AttitudeTarget__fini(mavros_msgs__msg__AttitudeTarget * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // type_mask
  // orientation
  geometry_msgs__msg__Quaternion__fini(&msg->orientation);
  // body_rate
  geometry_msgs__msg__Vector3__fini(&msg->body_rate);
  // thrust
}

mavros_msgs__msg__AttitudeTarget *
mavros_msgs__msg__AttitudeTarget__create()
{
  mavros_msgs__msg__AttitudeTarget * msg = (mavros_msgs__msg__AttitudeTarget *)malloc(sizeof(mavros_msgs__msg__AttitudeTarget));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__msg__AttitudeTarget));
  bool success = mavros_msgs__msg__AttitudeTarget__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__msg__AttitudeTarget__destroy(mavros_msgs__msg__AttitudeTarget * msg)
{
  if (msg) {
    mavros_msgs__msg__AttitudeTarget__fini(msg);
  }
  free(msg);
}


bool
mavros_msgs__msg__AttitudeTarget__Sequence__init(mavros_msgs__msg__AttitudeTarget__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mavros_msgs__msg__AttitudeTarget * data = NULL;
  if (size) {
    data = (mavros_msgs__msg__AttitudeTarget *)calloc(size, sizeof(mavros_msgs__msg__AttitudeTarget));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__msg__AttitudeTarget__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__msg__AttitudeTarget__fini(&data[i - 1]);
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
mavros_msgs__msg__AttitudeTarget__Sequence__fini(mavros_msgs__msg__AttitudeTarget__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mavros_msgs__msg__AttitudeTarget__fini(&array->data[i]);
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

mavros_msgs__msg__AttitudeTarget__Sequence *
mavros_msgs__msg__AttitudeTarget__Sequence__create(size_t size)
{
  mavros_msgs__msg__AttitudeTarget__Sequence * array = (mavros_msgs__msg__AttitudeTarget__Sequence *)malloc(sizeof(mavros_msgs__msg__AttitudeTarget__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__msg__AttitudeTarget__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mavros_msgs__msg__AttitudeTarget__Sequence__destroy(mavros_msgs__msg__AttitudeTarget__Sequence * array)
{
  if (array) {
    mavros_msgs__msg__AttitudeTarget__Sequence__fini(array);
  }
  free(array);
}
