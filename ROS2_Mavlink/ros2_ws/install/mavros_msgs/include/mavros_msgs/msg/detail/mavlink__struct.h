// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mavros_msgs:msg/Mavlink.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__MSG__DETAIL__MAVLINK__STRUCT_H_
#define MAVROS_MSGS__MSG__DETAIL__MAVLINK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FRAMING_OK'.
enum
{
  mavros_msgs__msg__Mavlink__FRAMING_OK = 1
};

/// Constant 'FRAMING_BAD_CRC'.
enum
{
  mavros_msgs__msg__Mavlink__FRAMING_BAD_CRC = 2
};

/// Constant 'FRAMING_BAD_SIGNATURE'.
enum
{
  mavros_msgs__msg__Mavlink__FRAMING_BAD_SIGNATURE = 3
};

/// Constant 'MAVLINK_V10'.
enum
{
  mavros_msgs__msg__Mavlink__MAVLINK_V10 = 254
};

/// Constant 'MAVLINK_V20'.
enum
{
  mavros_msgs__msg__Mavlink__MAVLINK_V20 = 253
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'payload64'
// Member 'signature'
#include "rosidl_runtime_c/primitives_sequence.h"

// constants for array fields with an upper bound
// payload64
enum
{
  mavros_msgs__msg__Mavlink__payload64__MAX_SIZE = 33
};
// signature
enum
{
  mavros_msgs__msg__Mavlink__signature__MAX_SIZE = 13
};

// Struct defined in msg/Mavlink in the package mavros_msgs.
typedef struct mavros_msgs__msg__Mavlink
{
  std_msgs__msg__Header header;
  uint8_t framing_status;
  uint8_t magic;
  uint8_t len;
  uint8_t incompat_flags;
  uint8_t compat_flags;
  uint8_t seq;
  uint8_t sysid;
  uint8_t compid;
  uint32_t msgid;
  uint16_t checksum;
  rosidl_runtime_c__uint64__Sequence payload64;
  rosidl_runtime_c__uint8__Sequence signature;
} mavros_msgs__msg__Mavlink;

// Struct for a sequence of mavros_msgs__msg__Mavlink.
typedef struct mavros_msgs__msg__Mavlink__Sequence
{
  mavros_msgs__msg__Mavlink * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mavros_msgs__msg__Mavlink__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAVROS_MSGS__MSG__DETAIL__MAVLINK__STRUCT_H_
