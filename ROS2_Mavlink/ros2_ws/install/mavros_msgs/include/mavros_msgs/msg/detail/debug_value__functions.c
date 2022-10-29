// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mavros_msgs:msg/DebugValue.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/debug_value__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
mavros_msgs__msg__DebugValue__init(mavros_msgs__msg__DebugValue * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mavros_msgs__msg__DebugValue__fini(msg);
    return false;
  }
  // index
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    mavros_msgs__msg__DebugValue__fini(msg);
    return false;
  }
  // value_float
  // value_int
  // data
  if (!rosidl_runtime_c__float__Sequence__init(&msg->data, 0)) {
    mavros_msgs__msg__DebugValue__fini(msg);
    return false;
  }
  // type
  return true;
}

void
mavros_msgs__msg__DebugValue__fini(mavros_msgs__msg__DebugValue * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // index
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // value_float
  // value_int
  // data
  rosidl_runtime_c__float__Sequence__fini(&msg->data);
  // type
}

mavros_msgs__msg__DebugValue *
mavros_msgs__msg__DebugValue__create()
{
  mavros_msgs__msg__DebugValue * msg = (mavros_msgs__msg__DebugValue *)malloc(sizeof(mavros_msgs__msg__DebugValue));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__msg__DebugValue));
  bool success = mavros_msgs__msg__DebugValue__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__msg__DebugValue__destroy(mavros_msgs__msg__DebugValue * msg)
{
  if (msg) {
    mavros_msgs__msg__DebugValue__fini(msg);
  }
  free(msg);
}


bool
mavros_msgs__msg__DebugValue__Sequence__init(mavros_msgs__msg__DebugValue__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mavros_msgs__msg__DebugValue * data = NULL;
  if (size) {
    data = (mavros_msgs__msg__DebugValue *)calloc(size, sizeof(mavros_msgs__msg__DebugValue));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__msg__DebugValue__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__msg__DebugValue__fini(&data[i - 1]);
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
mavros_msgs__msg__DebugValue__Sequence__fini(mavros_msgs__msg__DebugValue__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mavros_msgs__msg__DebugValue__fini(&array->data[i]);
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

mavros_msgs__msg__DebugValue__Sequence *
mavros_msgs__msg__DebugValue__Sequence__create(size_t size)
{
  mavros_msgs__msg__DebugValue__Sequence * array = (mavros_msgs__msg__DebugValue__Sequence *)malloc(sizeof(mavros_msgs__msg__DebugValue__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__msg__DebugValue__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mavros_msgs__msg__DebugValue__Sequence__destroy(mavros_msgs__msg__DebugValue__Sequence * array)
{
  if (array) {
    mavros_msgs__msg__DebugValue__Sequence__fini(array);
  }
  free(array);
}
