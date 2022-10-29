// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mavros_msgs:msg/Thrust.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/thrust__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
mavros_msgs__msg__Thrust__init(mavros_msgs__msg__Thrust * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mavros_msgs__msg__Thrust__fini(msg);
    return false;
  }
  // thrust
  return true;
}

void
mavros_msgs__msg__Thrust__fini(mavros_msgs__msg__Thrust * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // thrust
}

mavros_msgs__msg__Thrust *
mavros_msgs__msg__Thrust__create()
{
  mavros_msgs__msg__Thrust * msg = (mavros_msgs__msg__Thrust *)malloc(sizeof(mavros_msgs__msg__Thrust));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__msg__Thrust));
  bool success = mavros_msgs__msg__Thrust__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__msg__Thrust__destroy(mavros_msgs__msg__Thrust * msg)
{
  if (msg) {
    mavros_msgs__msg__Thrust__fini(msg);
  }
  free(msg);
}


bool
mavros_msgs__msg__Thrust__Sequence__init(mavros_msgs__msg__Thrust__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mavros_msgs__msg__Thrust * data = NULL;
  if (size) {
    data = (mavros_msgs__msg__Thrust *)calloc(size, sizeof(mavros_msgs__msg__Thrust));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__msg__Thrust__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__msg__Thrust__fini(&data[i - 1]);
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
mavros_msgs__msg__Thrust__Sequence__fini(mavros_msgs__msg__Thrust__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mavros_msgs__msg__Thrust__fini(&array->data[i]);
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

mavros_msgs__msg__Thrust__Sequence *
mavros_msgs__msg__Thrust__Sequence__create(size_t size)
{
  mavros_msgs__msg__Thrust__Sequence * array = (mavros_msgs__msg__Thrust__Sequence *)malloc(sizeof(mavros_msgs__msg__Thrust__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__msg__Thrust__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mavros_msgs__msg__Thrust__Sequence__destroy(mavros_msgs__msg__Thrust__Sequence * array)
{
  if (array) {
    mavros_msgs__msg__Thrust__Sequence__fini(array);
  }
  free(array);
}
