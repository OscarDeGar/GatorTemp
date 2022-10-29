// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mavros_msgs:msg/GPSINPUT.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/gpsinput__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
mavros_msgs__msg__GPSINPUT__init(mavros_msgs__msg__GPSINPUT * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mavros_msgs__msg__GPSINPUT__fini(msg);
    return false;
  }
  // fix_type
  // gps_id
  // ignore_flags
  // time_week_ms
  // time_week
  // lat
  // lon
  // alt
  // hdop
  // vdop
  // vn
  // ve
  // vd
  // speed_accuracy
  // horiz_accuracy
  // vert_accuracy
  // satellites_visible
  // yaw
  return true;
}

void
mavros_msgs__msg__GPSINPUT__fini(mavros_msgs__msg__GPSINPUT * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // fix_type
  // gps_id
  // ignore_flags
  // time_week_ms
  // time_week
  // lat
  // lon
  // alt
  // hdop
  // vdop
  // vn
  // ve
  // vd
  // speed_accuracy
  // horiz_accuracy
  // vert_accuracy
  // satellites_visible
  // yaw
}

mavros_msgs__msg__GPSINPUT *
mavros_msgs__msg__GPSINPUT__create()
{
  mavros_msgs__msg__GPSINPUT * msg = (mavros_msgs__msg__GPSINPUT *)malloc(sizeof(mavros_msgs__msg__GPSINPUT));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__msg__GPSINPUT));
  bool success = mavros_msgs__msg__GPSINPUT__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__msg__GPSINPUT__destroy(mavros_msgs__msg__GPSINPUT * msg)
{
  if (msg) {
    mavros_msgs__msg__GPSINPUT__fini(msg);
  }
  free(msg);
}


bool
mavros_msgs__msg__GPSINPUT__Sequence__init(mavros_msgs__msg__GPSINPUT__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mavros_msgs__msg__GPSINPUT * data = NULL;
  if (size) {
    data = (mavros_msgs__msg__GPSINPUT *)calloc(size, sizeof(mavros_msgs__msg__GPSINPUT));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__msg__GPSINPUT__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__msg__GPSINPUT__fini(&data[i - 1]);
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
mavros_msgs__msg__GPSINPUT__Sequence__fini(mavros_msgs__msg__GPSINPUT__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mavros_msgs__msg__GPSINPUT__fini(&array->data[i]);
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

mavros_msgs__msg__GPSINPUT__Sequence *
mavros_msgs__msg__GPSINPUT__Sequence__create(size_t size)
{
  mavros_msgs__msg__GPSINPUT__Sequence * array = (mavros_msgs__msg__GPSINPUT__Sequence *)malloc(sizeof(mavros_msgs__msg__GPSINPUT__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__msg__GPSINPUT__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mavros_msgs__msg__GPSINPUT__Sequence__destroy(mavros_msgs__msg__GPSINPUT__Sequence * array)
{
  if (array) {
    mavros_msgs__msg__GPSINPUT__Sequence__fini(array);
  }
  free(array);
}
