// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mavros_msgs:msg/FileEntry.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/file_entry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
mavros_msgs__msg__FileEntry__init(mavros_msgs__msg__FileEntry * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    mavros_msgs__msg__FileEntry__fini(msg);
    return false;
  }
  // type
  // size
  return true;
}

void
mavros_msgs__msg__FileEntry__fini(mavros_msgs__msg__FileEntry * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // type
  // size
}

mavros_msgs__msg__FileEntry *
mavros_msgs__msg__FileEntry__create()
{
  mavros_msgs__msg__FileEntry * msg = (mavros_msgs__msg__FileEntry *)malloc(sizeof(mavros_msgs__msg__FileEntry));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__msg__FileEntry));
  bool success = mavros_msgs__msg__FileEntry__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__msg__FileEntry__destroy(mavros_msgs__msg__FileEntry * msg)
{
  if (msg) {
    mavros_msgs__msg__FileEntry__fini(msg);
  }
  free(msg);
}


bool
mavros_msgs__msg__FileEntry__Sequence__init(mavros_msgs__msg__FileEntry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mavros_msgs__msg__FileEntry * data = NULL;
  if (size) {
    data = (mavros_msgs__msg__FileEntry *)calloc(size, sizeof(mavros_msgs__msg__FileEntry));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__msg__FileEntry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__msg__FileEntry__fini(&data[i - 1]);
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
mavros_msgs__msg__FileEntry__Sequence__fini(mavros_msgs__msg__FileEntry__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mavros_msgs__msg__FileEntry__fini(&array->data[i]);
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

mavros_msgs__msg__FileEntry__Sequence *
mavros_msgs__msg__FileEntry__Sequence__create(size_t size)
{
  mavros_msgs__msg__FileEntry__Sequence * array = (mavros_msgs__msg__FileEntry__Sequence *)malloc(sizeof(mavros_msgs__msg__FileEntry__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__msg__FileEntry__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mavros_msgs__msg__FileEntry__Sequence__destroy(mavros_msgs__msg__FileEntry__Sequence * array)
{
  if (array) {
    mavros_msgs__msg__FileEntry__Sequence__fini(array);
  }
  free(array);
}
