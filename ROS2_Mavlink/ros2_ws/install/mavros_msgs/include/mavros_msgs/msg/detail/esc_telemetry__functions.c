// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mavros_msgs:msg/ESCTelemetry.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/esc_telemetry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `esc_telemetry`
#include "mavros_msgs/msg/detail/esc_telemetry_item__functions.h"

bool
mavros_msgs__msg__ESCTelemetry__init(mavros_msgs__msg__ESCTelemetry * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mavros_msgs__msg__ESCTelemetry__fini(msg);
    return false;
  }
  // esc_telemetry
  if (!mavros_msgs__msg__ESCTelemetryItem__Sequence__init(&msg->esc_telemetry, 0)) {
    mavros_msgs__msg__ESCTelemetry__fini(msg);
    return false;
  }
  return true;
}

void
mavros_msgs__msg__ESCTelemetry__fini(mavros_msgs__msg__ESCTelemetry * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // esc_telemetry
  mavros_msgs__msg__ESCTelemetryItem__Sequence__fini(&msg->esc_telemetry);
}

mavros_msgs__msg__ESCTelemetry *
mavros_msgs__msg__ESCTelemetry__create()
{
  mavros_msgs__msg__ESCTelemetry * msg = (mavros_msgs__msg__ESCTelemetry *)malloc(sizeof(mavros_msgs__msg__ESCTelemetry));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__msg__ESCTelemetry));
  bool success = mavros_msgs__msg__ESCTelemetry__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__msg__ESCTelemetry__destroy(mavros_msgs__msg__ESCTelemetry * msg)
{
  if (msg) {
    mavros_msgs__msg__ESCTelemetry__fini(msg);
  }
  free(msg);
}


bool
mavros_msgs__msg__ESCTelemetry__Sequence__init(mavros_msgs__msg__ESCTelemetry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mavros_msgs__msg__ESCTelemetry * data = NULL;
  if (size) {
    data = (mavros_msgs__msg__ESCTelemetry *)calloc(size, sizeof(mavros_msgs__msg__ESCTelemetry));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__msg__ESCTelemetry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__msg__ESCTelemetry__fini(&data[i - 1]);
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
mavros_msgs__msg__ESCTelemetry__Sequence__fini(mavros_msgs__msg__ESCTelemetry__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mavros_msgs__msg__ESCTelemetry__fini(&array->data[i]);
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

mavros_msgs__msg__ESCTelemetry__Sequence *
mavros_msgs__msg__ESCTelemetry__Sequence__create(size_t size)
{
  mavros_msgs__msg__ESCTelemetry__Sequence * array = (mavros_msgs__msg__ESCTelemetry__Sequence *)malloc(sizeof(mavros_msgs__msg__ESCTelemetry__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__msg__ESCTelemetry__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mavros_msgs__msg__ESCTelemetry__Sequence__destroy(mavros_msgs__msg__ESCTelemetry__Sequence * array)
{
  if (array) {
    mavros_msgs__msg__ESCTelemetry__Sequence__fini(array);
  }
  free(array);
}
