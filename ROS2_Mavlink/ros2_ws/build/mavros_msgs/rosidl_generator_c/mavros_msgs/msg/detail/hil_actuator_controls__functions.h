// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mavros_msgs:msg/HilActuatorControls.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__MSG__DETAIL__HIL_ACTUATOR_CONTROLS__FUNCTIONS_H_
#define MAVROS_MSGS__MSG__DETAIL__HIL_ACTUATOR_CONTROLS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mavros_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "mavros_msgs/msg/detail/hil_actuator_controls__struct.h"

/// Initialize msg/HilActuatorControls message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mavros_msgs__msg__HilActuatorControls
 * )) before or use
 * mavros_msgs__msg__HilActuatorControls__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mavros_msgs
bool
mavros_msgs__msg__HilActuatorControls__init(mavros_msgs__msg__HilActuatorControls * msg);

/// Finalize msg/HilActuatorControls message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mavros_msgs
void
mavros_msgs__msg__HilActuatorControls__fini(mavros_msgs__msg__HilActuatorControls * msg);

/// Create msg/HilActuatorControls message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mavros_msgs__msg__HilActuatorControls__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mavros_msgs
mavros_msgs__msg__HilActuatorControls *
mavros_msgs__msg__HilActuatorControls__create();

/// Destroy msg/HilActuatorControls message.
/**
 * It calls
 * mavros_msgs__msg__HilActuatorControls__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mavros_msgs
void
mavros_msgs__msg__HilActuatorControls__destroy(mavros_msgs__msg__HilActuatorControls * msg);


/// Initialize array of msg/HilActuatorControls messages.
/**
 * It allocates the memory for the number of elements and calls
 * mavros_msgs__msg__HilActuatorControls__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mavros_msgs
bool
mavros_msgs__msg__HilActuatorControls__Sequence__init(mavros_msgs__msg__HilActuatorControls__Sequence * array, size_t size);

/// Finalize array of msg/HilActuatorControls messages.
/**
 * It calls
 * mavros_msgs__msg__HilActuatorControls__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mavros_msgs
void
mavros_msgs__msg__HilActuatorControls__Sequence__fini(mavros_msgs__msg__HilActuatorControls__Sequence * array);

/// Create array of msg/HilActuatorControls messages.
/**
 * It allocates the memory for the array and calls
 * mavros_msgs__msg__HilActuatorControls__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mavros_msgs
mavros_msgs__msg__HilActuatorControls__Sequence *
mavros_msgs__msg__HilActuatorControls__Sequence__create(size_t size);

/// Destroy array of msg/HilActuatorControls messages.
/**
 * It calls
 * mavros_msgs__msg__HilActuatorControls__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mavros_msgs
void
mavros_msgs__msg__HilActuatorControls__Sequence__destroy(mavros_msgs__msg__HilActuatorControls__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MAVROS_MSGS__MSG__DETAIL__HIL_ACTUATOR_CONTROLS__FUNCTIONS_H_
