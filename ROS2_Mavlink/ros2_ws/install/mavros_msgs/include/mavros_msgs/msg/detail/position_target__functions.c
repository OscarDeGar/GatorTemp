// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mavros_msgs:msg/PositionTarget.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/position_target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `velocity`
// Member `acceleration_or_force`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
mavros_msgs__msg__PositionTarget__init(mavros_msgs__msg__PositionTarget * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mavros_msgs__msg__PositionTarget__fini(msg);
    return false;
  }
  // coordinate_frame
  // type_mask
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    mavros_msgs__msg__PositionTarget__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->velocity)) {
    mavros_msgs__msg__PositionTarget__fini(msg);
    return false;
  }
  // acceleration_or_force
  if (!geometry_msgs__msg__Vector3__init(&msg->acceleration_or_force)) {
    mavros_msgs__msg__PositionTarget__fini(msg);
    return false;
  }
  // yaw
  // yaw_rate
  return true;
}

void
mavros_msgs__msg__PositionTarget__fini(mavros_msgs__msg__PositionTarget * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // coordinate_frame
  // type_mask
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // velocity
  geometry_msgs__msg__Vector3__fini(&msg->velocity);
  // acceleration_or_force
  geometry_msgs__msg__Vector3__fini(&msg->acceleration_or_force);
  // yaw
  // yaw_rate
}

mavros_msgs__msg__PositionTarget *
mavros_msgs__msg__PositionTarget__create()
{
  mavros_msgs__msg__PositionTarget * msg = (mavros_msgs__msg__PositionTarget *)malloc(sizeof(mavros_msgs__msg__PositionTarget));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__msg__PositionTarget));
  bool success = mavros_msgs__msg__PositionTarget__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__msg__PositionTarget__destroy(mavros_msgs__msg__PositionTarget * msg)
{
  if (msg) {
    mavros_msgs__msg__PositionTarget__fini(msg);
  }
  free(msg);
}


bool
mavros_msgs__msg__PositionTarget__Sequence__init(mavros_msgs__msg__PositionTarget__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mavros_msgs__msg__PositionTarget * data = NULL;
  if (size) {
    data = (mavros_msgs__msg__PositionTarget *)calloc(size, sizeof(mavros_msgs__msg__PositionTarget));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__msg__PositionTarget__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__msg__PositionTarget__fini(&data[i - 1]);
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
mavros_msgs__msg__PositionTarget__Sequence__fini(mavros_msgs__msg__PositionTarget__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mavros_msgs__msg__PositionTarget__fini(&array->data[i]);
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

mavros_msgs__msg__PositionTarget__Sequence *
mavros_msgs__msg__PositionTarget__Sequence__create(size_t size)
{
  mavros_msgs__msg__PositionTarget__Sequence * array = (mavros_msgs__msg__PositionTarget__Sequence *)malloc(sizeof(mavros_msgs__msg__PositionTarget__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__msg__PositionTarget__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mavros_msgs__msg__PositionTarget__Sequence__destroy(mavros_msgs__msg__PositionTarget__Sequence * array)
{
  if (array) {
    mavros_msgs__msg__PositionTarget__Sequence__fini(array);
  }
  free(array);
}
