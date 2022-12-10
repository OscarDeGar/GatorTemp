// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mavros_msgs:msg/OnboardComputerStatus.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__MSG__DETAIL__ONBOARD_COMPUTER_STATUS__STRUCT_H_
#define MAVROS_MSGS__MSG__DETAIL__ONBOARD_COMPUTER_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/OnboardComputerStatus in the package mavros_msgs.
typedef struct mavros_msgs__msg__OnboardComputerStatus
{
  std_msgs__msg__Header header;
  uint8_t component;
  uint32_t uptime;
  uint8_t type;
  uint8_t cpu_cores[8];
  uint8_t cpu_combined[10];
  uint8_t gpu_cores[4];
  uint8_t gpu_combined[10];
  int8_t temperature_board;
  int8_t temperature_core[8];
  int16_t fan_speed[4];
  uint32_t ram_usage;
  uint32_t ram_total;
  uint32_t storage_type[4];
  uint32_t storage_usage[4];
  uint32_t storage_total[4];
  uint32_t link_type[6];
  uint32_t link_tx_rate[6];
  uint32_t link_rx_rate[6];
  uint32_t link_tx_max[6];
  uint32_t link_rx_max[6];
} mavros_msgs__msg__OnboardComputerStatus;

// Struct for a sequence of mavros_msgs__msg__OnboardComputerStatus.
typedef struct mavros_msgs__msg__OnboardComputerStatus__Sequence
{
  mavros_msgs__msg__OnboardComputerStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mavros_msgs__msg__OnboardComputerStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAVROS_MSGS__MSG__DETAIL__ONBOARD_COMPUTER_STATUS__STRUCT_H_
