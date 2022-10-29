// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mavros_msgs:msg/Mavlink.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/mavlink__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `payload64`
// Member `signature`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
mavros_msgs__msg__Mavlink__init(mavros_msgs__msg__Mavlink * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mavros_msgs__msg__Mavlink__fini(msg);
    return false;
  }
  // framing_status
  // magic
  // len
  // incompat_flags
  // compat_flags
  // seq
  // sysid
  // compid
  // msgid
  // checksum
  // payload64
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->payload64, 0)) {
    mavros_msgs__msg__Mavlink__fini(msg);
    return false;
  }
  // signature
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->signature, 0)) {
    mavros_msgs__msg__Mavlink__fini(msg);
    return false;
  }
  return true;
}

void
mavros_msgs__msg__Mavlink__fini(mavros_msgs__msg__Mavlink * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // framing_status
  // magic
  // len
  // incompat_flags
  // compat_flags
  // seq
  // sysid
  // compid
  // msgid
  // checksum
  // payload64
  rosidl_runtime_c__uint64__Sequence__fini(&msg->payload64);
  // signature
  rosidl_runtime_c__uint8__Sequence__fini(&msg->signature);
}

mavros_msgs__msg__Mavlink *
mavros_msgs__msg__Mavlink__create()
{
  mavros_msgs__msg__Mavlink * msg = (mavros_msgs__msg__Mavlink *)malloc(sizeof(mavros_msgs__msg__Mavlink));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__msg__Mavlink));
  bool success = mavros_msgs__msg__Mavlink__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__msg__Mavlink__destroy(mavros_msgs__msg__Mavlink * msg)
{
  if (msg) {
    mavros_msgs__msg__Mavlink__fini(msg);
  }
  free(msg);
}


bool
mavros_msgs__msg__Mavlink__Sequence__init(mavros_msgs__msg__Mavlink__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mavros_msgs__msg__Mavlink * data = NULL;
  if (size) {
    data = (mavros_msgs__msg__Mavlink *)calloc(size, sizeof(mavros_msgs__msg__Mavlink));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__msg__Mavlink__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__msg__Mavlink__fini(&data[i - 1]);
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
mavros_msgs__msg__Mavlink__Sequence__fini(mavros_msgs__msg__Mavlink__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mavros_msgs__msg__Mavlink__fini(&array->data[i]);
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

mavros_msgs__msg__Mavlink__Sequence *
mavros_msgs__msg__Mavlink__Sequence__create(size_t size)
{
  mavros_msgs__msg__Mavlink__Sequence * array = (mavros_msgs__msg__Mavlink__Sequence *)malloc(sizeof(mavros_msgs__msg__Mavlink__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__msg__Mavlink__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mavros_msgs__msg__Mavlink__Sequence__destroy(mavros_msgs__msg__Mavlink__Sequence * array)
{
  if (array) {
    mavros_msgs__msg__Mavlink__Sequence__fini(array);
  }
  free(array);
}
