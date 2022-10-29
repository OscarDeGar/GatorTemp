// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mavros_msgs:msg/ESCTelemetryItem.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__MSG__DETAIL__ESC_TELEMETRY_ITEM__FUNCTIONS_H_
#define MAVROS_MSGS__MSG__DETAIL__ESC_TELEMETRY_ITEM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mavros_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "mavros_msgs/msg/detail/esc_telemetry_item__struct.h"

/// Initialize msg/ESCTelemetryItem message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mavros_msgs__msg__ESCTelemetryItem
 * )) before or use
 * mavros_msgs__msg__ESCTelemetryItem__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mavros_msgs
bool
mavros_msgs__msg__ESCTelemetryItem__init(mavros_msgs__msg__ESCTelemetryItem * msg);

/// Finalize msg/ESCTelemetryItem message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mavros_msgs
void
mavros_msgs__msg__ESCTelemetryItem__fini(mavros_msgs__msg__ESCTelemetryItem * msg);

/// Create msg/ESCTelemetryItem message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mavros_msgs__msg__ESCTelemetryItem__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mavros_msgs
mavros_msgs__msg__ESCTelemetryItem *
mavros_msgs__msg__ESCTelemetryItem__create();

/// Destroy msg/ESCTelemetryItem message.
/**
 * It calls
 * mavros_msgs__msg__ESCTelemetryItem__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mavros_msgs
void
mavros_msgs__msg__ESCTelemetryItem__destroy(mavros_msgs__msg__ESCTelemetryItem * msg);


/// Initialize array of msg/ESCTelemetryItem messages.
/**
 * It allocates the memory for the number of elements and calls
 * mavros_msgs__msg__ESCTelemetryItem__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mavros_msgs
bool
mavros_msgs__msg__ESCTelemetryItem__Sequence__init(mavros_msgs__msg__ESCTelemetryItem__Sequence * array, size_t size);

/// Finalize array of msg/ESCTelemetryItem messages.
/**
 * It calls
 * mavros_msgs__msg__ESCTelemetryItem__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mavros_msgs
void
mavros_msgs__msg__ESCTelemetryItem__Sequence__fini(mavros_msgs__msg__ESCTelemetryItem__Sequence * array);

/// Create array of msg/ESCTelemetryItem messages.
/**
 * It allocates the memory for the array and calls
 * mavros_msgs__msg__ESCTelemetryItem__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mavros_msgs
mavros_msgs__msg__ESCTelemetryItem__Sequence *
mavros_msgs__msg__ESCTelemetryItem__Sequence__create(size_t size);

/// Destroy array of msg/ESCTelemetryItem messages.
/**
 * It calls
 * mavros_msgs__msg__ESCTelemetryItem__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mavros_msgs
void
mavros_msgs__msg__ESCTelemetryItem__Sequence__destroy(mavros_msgs__msg__ESCTelemetryItem__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MAVROS_MSGS__MSG__DETAIL__ESC_TELEMETRY_ITEM__FUNCTIONS_H_
