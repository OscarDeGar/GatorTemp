// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mavros_msgs:msg/State.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `mode`
#include "rosidl_runtime_c/string_functions.h"

bool
mavros_msgs__msg__State__init(mavros_msgs__msg__State * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mavros_msgs__msg__State__fini(msg);
    return false;
  }
  // connected
  // armed
  // guided
  // manual_input
  // mode
  if (!rosidl_runtime_c__String__init(&msg->mode)) {
    mavros_msgs__msg__State__fini(msg);
    return false;
  }
  // system_status
  return true;
}

void
mavros_msgs__msg__State__fini(mavros_msgs__msg__State * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // connected
  // armed
  // guided
  // manual_input
  // mode
  rosidl_runtime_c__String__fini(&msg->mode);
  // system_status
}

mavros_msgs__msg__State *
mavros_msgs__msg__State__create()
{
  mavros_msgs__msg__State * msg = (mavros_msgs__msg__State *)malloc(sizeof(mavros_msgs__msg__State));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__msg__State));
  bool success = mavros_msgs__msg__State__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__msg__State__destroy(mavros_msgs__msg__State * msg)
{
  if (msg) {
    mavros_msgs__msg__State__fini(msg);
  }
  free(msg);
}


bool
mavros_msgs__msg__State__Sequence__init(mavros_msgs__msg__State__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mavros_msgs__msg__State * data = NULL;
  if (size) {
    data = (mavros_msgs__msg__State *)calloc(size, sizeof(mavros_msgs__msg__State));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__msg__State__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__msg__State__fini(&data[i - 1]);
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
mavros_msgs__msg__State__Sequence__fini(mavros_msgs__msg__State__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mavros_msgs__msg__State__fini(&array->data[i]);
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

mavros_msgs__msg__State__Sequence *
mavros_msgs__msg__State__Sequence__create(size_t size)
{
  mavros_msgs__msg__State__Sequence * array = (mavros_msgs__msg__State__Sequence *)malloc(sizeof(mavros_msgs__msg__State__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__msg__State__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mavros_msgs__msg__State__Sequence__destroy(mavros_msgs__msg__State__Sequence * array)
{
  if (array) {
    mavros_msgs__msg__State__Sequence__fini(array);
  }
  free(array);
}
