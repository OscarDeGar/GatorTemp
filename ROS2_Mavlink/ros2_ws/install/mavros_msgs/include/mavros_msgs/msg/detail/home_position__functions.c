// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mavros_msgs:msg/HomePosition.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/home_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `geo`
#include "geographic_msgs/msg/detail/geo_point__functions.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__functions.h"
// Member `approach`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
mavros_msgs__msg__HomePosition__init(mavros_msgs__msg__HomePosition * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mavros_msgs__msg__HomePosition__fini(msg);
    return false;
  }
  // geo
  if (!geographic_msgs__msg__GeoPoint__init(&msg->geo)) {
    mavros_msgs__msg__HomePosition__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    mavros_msgs__msg__HomePosition__fini(msg);
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__init(&msg->orientation)) {
    mavros_msgs__msg__HomePosition__fini(msg);
    return false;
  }
  // approach
  if (!geometry_msgs__msg__Vector3__init(&msg->approach)) {
    mavros_msgs__msg__HomePosition__fini(msg);
    return false;
  }
  return true;
}

void
mavros_msgs__msg__HomePosition__fini(mavros_msgs__msg__HomePosition * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // geo
  geographic_msgs__msg__GeoPoint__fini(&msg->geo);
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // orientation
  geometry_msgs__msg__Quaternion__fini(&msg->orientation);
  // approach
  geometry_msgs__msg__Vector3__fini(&msg->approach);
}

mavros_msgs__msg__HomePosition *
mavros_msgs__msg__HomePosition__create()
{
  mavros_msgs__msg__HomePosition * msg = (mavros_msgs__msg__HomePosition *)malloc(sizeof(mavros_msgs__msg__HomePosition));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__msg__HomePosition));
  bool success = mavros_msgs__msg__HomePosition__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__msg__HomePosition__destroy(mavros_msgs__msg__HomePosition * msg)
{
  if (msg) {
    mavros_msgs__msg__HomePosition__fini(msg);
  }
  free(msg);
}


bool
mavros_msgs__msg__HomePosition__Sequence__init(mavros_msgs__msg__HomePosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mavros_msgs__msg__HomePosition * data = NULL;
  if (size) {
    data = (mavros_msgs__msg__HomePosition *)calloc(size, sizeof(mavros_msgs__msg__HomePosition));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__msg__HomePosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__msg__HomePosition__fini(&data[i - 1]);
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
mavros_msgs__msg__HomePosition__Sequence__fini(mavros_msgs__msg__HomePosition__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mavros_msgs__msg__HomePosition__fini(&array->data[i]);
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

mavros_msgs__msg__HomePosition__Sequence *
mavros_msgs__msg__HomePosition__Sequence__create(size_t size)
{
  mavros_msgs__msg__HomePosition__Sequence * array = (mavros_msgs__msg__HomePosition__Sequence *)malloc(sizeof(mavros_msgs__msg__HomePosition__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__msg__HomePosition__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mavros_msgs__msg__HomePosition__Sequence__destroy(mavros_msgs__msg__HomePosition__Sequence * array)
{
  if (array) {
    mavros_msgs__msg__HomePosition__Sequence__fini(array);
  }
  free(array);
}
