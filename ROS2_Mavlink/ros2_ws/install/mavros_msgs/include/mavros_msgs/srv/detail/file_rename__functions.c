// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mavros_msgs:srv/FileRename.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/srv/detail/file_rename__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `old_path`
// Member `new_path`
#include "rosidl_runtime_c/string_functions.h"

bool
mavros_msgs__srv__FileRename_Request__init(mavros_msgs__srv__FileRename_Request * msg)
{
  if (!msg) {
    return false;
  }
  // old_path
  if (!rosidl_runtime_c__String__init(&msg->old_path)) {
    mavros_msgs__srv__FileRename_Request__fini(msg);
    return false;
  }
  // new_path
  if (!rosidl_runtime_c__String__init(&msg->new_path)) {
    mavros_msgs__srv__FileRename_Request__fini(msg);
    return false;
  }
  return true;
}

void
mavros_msgs__srv__FileRename_Request__fini(mavros_msgs__srv__FileRename_Request * msg)
{
  if (!msg) {
    return;
  }
  // old_path
  rosidl_runtime_c__String__fini(&msg->old_path);
  // new_path
  rosidl_runtime_c__String__fini(&msg->new_path);
}

mavros_msgs__srv__FileRename_Request *
mavros_msgs__srv__FileRename_Request__create()
{
  mavros_msgs__srv__FileRename_Request * msg = (mavros_msgs__srv__FileRename_Request *)malloc(sizeof(mavros_msgs__srv__FileRename_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__srv__FileRename_Request));
  bool success = mavros_msgs__srv__FileRename_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__srv__FileRename_Request__destroy(mavros_msgs__srv__FileRename_Request * msg)
{
  if (msg) {
    mavros_msgs__srv__FileRename_Request__fini(msg);
  }
  free(msg);
}


bool
mavros_msgs__srv__FileRename_Request__Sequence__init(mavros_msgs__srv__FileRename_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mavros_msgs__srv__FileRename_Request * data = NULL;
  if (size) {
    data = (mavros_msgs__srv__FileRename_Request *)calloc(size, sizeof(mavros_msgs__srv__FileRename_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__srv__FileRename_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__srv__FileRename_Request__fini(&data[i - 1]);
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
mavros_msgs__srv__FileRename_Request__Sequence__fini(mavros_msgs__srv__FileRename_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mavros_msgs__srv__FileRename_Request__fini(&array->data[i]);
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

mavros_msgs__srv__FileRename_Request__Sequence *
mavros_msgs__srv__FileRename_Request__Sequence__create(size_t size)
{
  mavros_msgs__srv__FileRename_Request__Sequence * array = (mavros_msgs__srv__FileRename_Request__Sequence *)malloc(sizeof(mavros_msgs__srv__FileRename_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__srv__FileRename_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mavros_msgs__srv__FileRename_Request__Sequence__destroy(mavros_msgs__srv__FileRename_Request__Sequence * array)
{
  if (array) {
    mavros_msgs__srv__FileRename_Request__Sequence__fini(array);
  }
  free(array);
}


bool
mavros_msgs__srv__FileRename_Response__init(mavros_msgs__srv__FileRename_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // r_errno
  return true;
}

void
mavros_msgs__srv__FileRename_Response__fini(mavros_msgs__srv__FileRename_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // r_errno
}

mavros_msgs__srv__FileRename_Response *
mavros_msgs__srv__FileRename_Response__create()
{
  mavros_msgs__srv__FileRename_Response * msg = (mavros_msgs__srv__FileRename_Response *)malloc(sizeof(mavros_msgs__srv__FileRename_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__srv__FileRename_Response));
  bool success = mavros_msgs__srv__FileRename_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__srv__FileRename_Response__destroy(mavros_msgs__srv__FileRename_Response * msg)
{
  if (msg) {
    mavros_msgs__srv__FileRename_Response__fini(msg);
  }
  free(msg);
}


bool
mavros_msgs__srv__FileRename_Response__Sequence__init(mavros_msgs__srv__FileRename_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mavros_msgs__srv__FileRename_Response * data = NULL;
  if (size) {
    data = (mavros_msgs__srv__FileRename_Response *)calloc(size, sizeof(mavros_msgs__srv__FileRename_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__srv__FileRename_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__srv__FileRename_Response__fini(&data[i - 1]);
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
mavros_msgs__srv__FileRename_Response__Sequence__fini(mavros_msgs__srv__FileRename_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mavros_msgs__srv__FileRename_Response__fini(&array->data[i]);
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

mavros_msgs__srv__FileRename_Response__Sequence *
mavros_msgs__srv__FileRename_Response__Sequence__create(size_t size)
{
  mavros_msgs__srv__FileRename_Response__Sequence * array = (mavros_msgs__srv__FileRename_Response__Sequence *)malloc(sizeof(mavros_msgs__srv__FileRename_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__srv__FileRename_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mavros_msgs__srv__FileRename_Response__Sequence__destroy(mavros_msgs__srv__FileRename_Response__Sequence * array)
{
  if (array) {
    mavros_msgs__srv__FileRename_Response__Sequence__fini(array);
  }
  free(array);
}
