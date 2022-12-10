// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mavros_msgs:msg/ADSBVehicle.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/adsb_vehicle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `callsign`
#include "rosidl_runtime_c/string_functions.h"
// Member `tslc`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
mavros_msgs__msg__ADSBVehicle__init(mavros_msgs__msg__ADSBVehicle * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mavros_msgs__msg__ADSBVehicle__fini(msg);
    return false;
  }
  // icao_address
  // callsign
  if (!rosidl_runtime_c__String__init(&msg->callsign)) {
    mavros_msgs__msg__ADSBVehicle__fini(msg);
    return false;
  }
  // latitude
  // longitude
  // altitude
  // heading
  // hor_velocity
  // ver_velocity
  // altitude_type
  // emitter_type
  // tslc
  if (!builtin_interfaces__msg__Duration__init(&msg->tslc)) {
    mavros_msgs__msg__ADSBVehicle__fini(msg);
    return false;
  }
  // flags
  // squawk
  return true;
}

void
mavros_msgs__msg__ADSBVehicle__fini(mavros_msgs__msg__ADSBVehicle * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // icao_address
  // callsign
  rosidl_runtime_c__String__fini(&msg->callsign);
  // latitude
  // longitude
  // altitude
  // heading
  // hor_velocity
  // ver_velocity
  // altitude_type
  // emitter_type
  // tslc
  builtin_interfaces__msg__Duration__fini(&msg->tslc);
  // flags
  // squawk
}

mavros_msgs__msg__ADSBVehicle *
mavros_msgs__msg__ADSBVehicle__create()
{
  mavros_msgs__msg__ADSBVehicle * msg = (mavros_msgs__msg__ADSBVehicle *)malloc(sizeof(mavros_msgs__msg__ADSBVehicle));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__msg__ADSBVehicle));
  bool success = mavros_msgs__msg__ADSBVehicle__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__msg__ADSBVehicle__destroy(mavros_msgs__msg__ADSBVehicle * msg)
{
  if (msg) {
    mavros_msgs__msg__ADSBVehicle__fini(msg);
  }
  free(msg);
}


bool
mavros_msgs__msg__ADSBVehicle__Sequence__init(mavros_msgs__msg__ADSBVehicle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mavros_msgs__msg__ADSBVehicle * data = NULL;
  if (size) {
    data = (mavros_msgs__msg__ADSBVehicle *)calloc(size, sizeof(mavros_msgs__msg__ADSBVehicle));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__msg__ADSBVehicle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__msg__ADSBVehicle__fini(&data[i - 1]);
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
mavros_msgs__msg__ADSBVehicle__Sequence__fini(mavros_msgs__msg__ADSBVehicle__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mavros_msgs__msg__ADSBVehicle__fini(&array->data[i]);
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

mavros_msgs__msg__ADSBVehicle__Sequence *
mavros_msgs__msg__ADSBVehicle__Sequence__create(size_t size)
{
  mavros_msgs__msg__ADSBVehicle__Sequence * array = (mavros_msgs__msg__ADSBVehicle__Sequence *)malloc(sizeof(mavros_msgs__msg__ADSBVehicle__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__msg__ADSBVehicle__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mavros_msgs__msg__ADSBVehicle__Sequence__destroy(mavros_msgs__msg__ADSBVehicle__Sequence * array)
{
  if (array) {
    mavros_msgs__msg__ADSBVehicle__Sequence__fini(array);
  }
  free(array);
}
