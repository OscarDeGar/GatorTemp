// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mavros_msgs:msg/ParamValue.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/param_value__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
mavros_msgs__msg__ParamValue__init(mavros_msgs__msg__ParamValue * msg)
{
  if (!msg) {
    return false;
  }
  // integer
  // real
  return true;
}

void
mavros_msgs__msg__ParamValue__fini(mavros_msgs__msg__ParamValue * msg)
{
  if (!msg) {
    return;
  }
  // integer
  // real
}

mavros_msgs__msg__ParamValue *
mavros_msgs__msg__ParamValue__create()
{
  mavros_msgs__msg__ParamValue * msg = (mavros_msgs__msg__ParamValue *)malloc(sizeof(mavros_msgs__msg__ParamValue));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__msg__ParamValue));
  bool success = mavros_msgs__msg__ParamValue__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__msg__ParamValue__destroy(mavros_msgs__msg__ParamValue * msg)
{
  if (msg) {
    mavros_msgs__msg__ParamValue__fini(msg);
  }
  free(msg);
}


bool
mavros_msgs__msg__ParamValue__Sequence__init(mavros_msgs__msg__ParamValue__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mavros_msgs__msg__ParamValue * data = NULL;
  if (size) {
    data = (mavros_msgs__msg__ParamValue *)calloc(size, sizeof(mavros_msgs__msg__ParamValue));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__msg__ParamValue__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__msg__ParamValue__fini(&data[i - 1]);
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
mavros_msgs__msg__ParamValue__Sequence__fini(mavros_msgs__msg__ParamValue__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mavros_msgs__msg__ParamValue__fini(&array->data[i]);
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

mavros_msgs__msg__ParamValue__Sequence *
mavros_msgs__msg__ParamValue__Sequence__create(size_t size)
{
  mavros_msgs__msg__ParamValue__Sequence * array = (mavros_msgs__msg__ParamValue__Sequence *)malloc(sizeof(mavros_msgs__msg__ParamValue__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__msg__ParamValue__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mavros_msgs__msg__ParamValue__Sequence__destroy(mavros_msgs__msg__ParamValue__Sequence * array)
{
  if (array) {
    mavros_msgs__msg__ParamValue__Sequence__fini(array);
  }
  free(array);
}
