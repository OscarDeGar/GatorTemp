// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mavros_msgs:msg/DebugValue.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__MSG__DETAIL__DEBUG_VALUE__STRUCT_H_
#define MAVROS_MSGS__MSG__DETAIL__DEBUG_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TYPE_DEBUG'.
enum
{
  mavros_msgs__msg__DebugValue__TYPE_DEBUG = 0
};

/// Constant 'TYPE_DEBUG_VECT'.
enum
{
  mavros_msgs__msg__DebugValue__TYPE_DEBUG_VECT = 1
};

/// Constant 'TYPE_DEBUG_ARRAY'.
enum
{
  mavros_msgs__msg__DebugValue__TYPE_DEBUG_ARRAY = 2
};

/// Constant 'TYPE_NAMED_VALUE_FLOAT'.
enum
{
  mavros_msgs__msg__DebugValue__TYPE_NAMED_VALUE_FLOAT = 3
};

/// Constant 'TYPE_NAMED_VALUE_INT'.
enum
{
  mavros_msgs__msg__DebugValue__TYPE_NAMED_VALUE_INT = 4
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/DebugValue in the package mavros_msgs.
typedef struct mavros_msgs__msg__DebugValue
{
  std_msgs__msg__Header header;
  int32_t index;
  rosidl_runtime_c__String name;
  float value_float;
  int32_t value_int;
  rosidl_runtime_c__float__Sequence data;
  uint8_t type;
} mavros_msgs__msg__DebugValue;

// Struct for a sequence of mavros_msgs__msg__DebugValue.
typedef struct mavros_msgs__msg__DebugValue__Sequence
{
  mavros_msgs__msg__DebugValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mavros_msgs__msg__DebugValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAVROS_MSGS__MSG__DETAIL__DEBUG_VALUE__STRUCT_H_
