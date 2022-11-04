// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mavros_msgs:msg/GlobalPositionTarget.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/global_position_target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `velocity`
// Member `acceleration_or_force`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
mavros_msgs__msg__GlobalPositionTarget__init(mavros_msgs__msg__GlobalPositionTarget * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mavros_msgs__msg__GlobalPositionTarget__fini(msg);
    return false;
  }
  // coordinate_frame
  // type_mask
  // latitude
  // longitude
  // altitude
  // velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->velocity)) {
    mavros_msgs__msg__GlobalPositionTarget__fini(msg);
    return false;
  }
  // acceleration_or_force
  if (!geometry_msgs__msg__Vector3__init(&msg->acceleration_or_force)) {
    mavros_msgs__msg__GlobalPositionTarget__fini(msg);
    return false;
  }
  // yaw
  // yaw_rate
  return true;
}

void
mavros_msgs__msg__GlobalPositionTarget__fini(mavros_msgs__msg__GlobalPositionTarget * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // coordinate_frame
  // type_mask
  // latitude
  // longitude
  // altitude
  // velocity
  geometry_msgs__msg__Vector3__fini(&msg->velocity);
  // acceleration_or_force
  geometry_msgs__msg__Vector3__fini(&msg->acceleration_or_force);
  // yaw
  // yaw_rate
}

mavros_msgs__msg__GlobalPositionTarget *
mavros_msgs__msg__GlobalPositionTarget__create()
{
  mavros_msgs__msg__GlobalPositionTarget * msg = (mavros_msgs__msg__GlobalPositionTarget *)malloc(sizeof(mavros_msgs__msg__GlobalPositionTarget));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__msg__GlobalPositionTarget));
  bool success = mavros_msgs__msg__GlobalPositionTarget__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__msg__GlobalPositionTarget__destroy(mavros_msgs__msg__GlobalPositionTarget * msg)
{
  if (msg) {
    mavros_msgs__msg__GlobalPositionTarget__fini(msg);
  }
  free(msg);
}


bool
mavros_msgs__msg__GlobalPositionTarget__Sequence__init(mavros_msgs__msg__GlobalPositionTarget__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mavros_msgs__msg__GlobalPositionTarget * data = NULL;
  if (size) {
    data = (mavros_msgs__msg__GlobalPositionTarget *)calloc(size, sizeof(mavros_msgs__msg__GlobalPositionTarget));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__msg__GlobalPositionTarget__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__msg__GlobalPositionTarget__fini(&data[i - 1]);
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
mavros_msgs__msg__GlobalPositionTarget__Sequence__fini(mavros_msgs__msg__GlobalPositionTarget__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mavros_msgs__msg__GlobalPositionTarget__fini(&array->data[i]);
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

mavros_msgs__msg__GlobalPositionTarget__Sequence *
mavros_msgs__msg__GlobalPositionTarget__Sequence__create(size_t size)
{
  mavros_msgs__msg__GlobalPositionTarget__Sequence * array = (mavros_msgs__msg__GlobalPositionTarget__Sequence *)malloc(sizeof(mavros_msgs__msg__GlobalPositionTarget__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__msg__GlobalPositionTarget__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mavros_msgs__msg__GlobalPositionTarget__Sequence__destroy(mavros_msgs__msg__GlobalPositionTarget__Sequence * array)
{
  if (array) {
    mavros_msgs__msg__GlobalPositionTarget__Sequence__fini(array);
  }
  free(array);
}
