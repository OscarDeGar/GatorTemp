// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mavros_msgs:msg/ESCInfo.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/esc_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `esc_info`
#include "mavros_msgs/msg/detail/esc_info_item__functions.h"

bool
mavros_msgs__msg__ESCInfo__init(mavros_msgs__msg__ESCInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mavros_msgs__msg__ESCInfo__fini(msg);
    return false;
  }
  // counter
  // count
  // connection_type
  // info
  // esc_info
  if (!mavros_msgs__msg__ESCInfoItem__Sequence__init(&msg->esc_info, 0)) {
    mavros_msgs__msg__ESCInfo__fini(msg);
    return false;
  }
  return true;
}

void
mavros_msgs__msg__ESCInfo__fini(mavros_msgs__msg__ESCInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // counter
  // count
  // connection_type
  // info
  // esc_info
  mavros_msgs__msg__ESCInfoItem__Sequence__fini(&msg->esc_info);
}

mavros_msgs__msg__ESCInfo *
mavros_msgs__msg__ESCInfo__create()
{
  mavros_msgs__msg__ESCInfo * msg = (mavros_msgs__msg__ESCInfo *)malloc(sizeof(mavros_msgs__msg__ESCInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__msg__ESCInfo));
  bool success = mavros_msgs__msg__ESCInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__msg__ESCInfo__destroy(mavros_msgs__msg__ESCInfo * msg)
{
  if (msg) {
    mavros_msgs__msg__ESCInfo__fini(msg);
  }
  free(msg);
}


bool
mavros_msgs__msg__ESCInfo__Sequence__init(mavros_msgs__msg__ESCInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mavros_msgs__msg__ESCInfo * data = NULL;
  if (size) {
    data = (mavros_msgs__msg__ESCInfo *)calloc(size, sizeof(mavros_msgs__msg__ESCInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__msg__ESCInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__msg__ESCInfo__fini(&data[i - 1]);
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
mavros_msgs__msg__ESCInfo__Sequence__fini(mavros_msgs__msg__ESCInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mavros_msgs__msg__ESCInfo__fini(&array->data[i]);
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

mavros_msgs__msg__ESCInfo__Sequence *
mavros_msgs__msg__ESCInfo__Sequence__create(size_t size)
{
  mavros_msgs__msg__ESCInfo__Sequence * array = (mavros_msgs__msg__ESCInfo__Sequence *)malloc(sizeof(mavros_msgs__msg__ESCInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__msg__ESCInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mavros_msgs__msg__ESCInfo__Sequence__destroy(mavros_msgs__msg__ESCInfo__Sequence * array)
{
  if (array) {
    mavros_msgs__msg__ESCInfo__Sequence__fini(array);
  }
  free(array);
}
