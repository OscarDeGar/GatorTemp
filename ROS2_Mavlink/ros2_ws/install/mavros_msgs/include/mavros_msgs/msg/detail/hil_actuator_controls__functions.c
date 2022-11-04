// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mavros_msgs:msg/HilActuatorControls.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/hil_actuator_controls__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
mavros_msgs__msg__HilActuatorControls__init(mavros_msgs__msg__HilActuatorControls * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mavros_msgs__msg__HilActuatorControls__fini(msg);
    return false;
  }
  // controls
  // mode
  // flags
  return true;
}

void
mavros_msgs__msg__HilActuatorControls__fini(mavros_msgs__msg__HilActuatorControls * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // controls
  // mode
  // flags
}

mavros_msgs__msg__HilActuatorControls *
mavros_msgs__msg__HilActuatorControls__create()
{
  mavros_msgs__msg__HilActuatorControls * msg = (mavros_msgs__msg__HilActuatorControls *)malloc(sizeof(mavros_msgs__msg__HilActuatorControls));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__msg__HilActuatorControls));
  bool success = mavros_msgs__msg__HilActuatorControls__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__msg__HilActuatorControls__destroy(mavros_msgs__msg__HilActuatorControls * msg)
{
  if (msg) {
    mavros_msgs__msg__HilActuatorControls__fini(msg);
  }
  free(msg);
}


bool
mavros_msgs__msg__HilActuatorControls__Sequence__init(mavros_msgs__msg__HilActuatorControls__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mavros_msgs__msg__HilActuatorControls * data = NULL;
  if (size) {
    data = (mavros_msgs__msg__HilActuatorControls *)calloc(size, sizeof(mavros_msgs__msg__HilActuatorControls));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__msg__HilActuatorControls__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__msg__HilActuatorControls__fini(&data[i - 1]);
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
mavros_msgs__msg__HilActuatorControls__Sequence__fini(mavros_msgs__msg__HilActuatorControls__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mavros_msgs__msg__HilActuatorControls__fini(&array->data[i]);
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

mavros_msgs__msg__HilActuatorControls__Sequence *
mavros_msgs__msg__HilActuatorControls__Sequence__create(size_t size)
{
  mavros_msgs__msg__HilActuatorControls__Sequence * array = (mavros_msgs__msg__HilActuatorControls__Sequence *)malloc(sizeof(mavros_msgs__msg__HilActuatorControls__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__msg__HilActuatorControls__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mavros_msgs__msg__HilActuatorControls__Sequence__destroy(mavros_msgs__msg__HilActuatorControls__Sequence * array)
{
  if (array) {
    mavros_msgs__msg__HilActuatorControls__Sequence__fini(array);
  }
  free(array);
}
