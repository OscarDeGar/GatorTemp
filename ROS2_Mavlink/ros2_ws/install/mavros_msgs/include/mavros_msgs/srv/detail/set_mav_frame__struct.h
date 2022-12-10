// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mavros_msgs:srv/SetMavFrame.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__SRV__DETAIL__SET_MAV_FRAME__STRUCT_H_
#define MAVROS_MSGS__SRV__DETAIL__SET_MAV_FRAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FRAME_GLOBAL'.
enum
{
  mavros_msgs__srv__SetMavFrame_Request__FRAME_GLOBAL = 0
};

/// Constant 'FRAME_LOCAL_NED'.
enum
{
  mavros_msgs__srv__SetMavFrame_Request__FRAME_LOCAL_NED = 1
};

/// Constant 'FRAME_MISSION'.
enum
{
  mavros_msgs__srv__SetMavFrame_Request__FRAME_MISSION = 2
};

/// Constant 'FRAME_GLOBAL_RELATIVE_ALT'.
enum
{
  mavros_msgs__srv__SetMavFrame_Request__FRAME_GLOBAL_RELATIVE_ALT = 3
};

/// Constant 'FRAME_LOCAL_ENU'.
enum
{
  mavros_msgs__srv__SetMavFrame_Request__FRAME_LOCAL_ENU = 4
};

/// Constant 'FRAME_GLOBAL_INT'.
enum
{
  mavros_msgs__srv__SetMavFrame_Request__FRAME_GLOBAL_INT = 5
};

/// Constant 'FRAME_GLOBAL_RELATIVE_ALT_INT'.
enum
{
  mavros_msgs__srv__SetMavFrame_Request__FRAME_GLOBAL_RELATIVE_ALT_INT = 6
};

/// Constant 'FRAME_LOCAL_OFFSET_NED'.
enum
{
  mavros_msgs__srv__SetMavFrame_Request__FRAME_LOCAL_OFFSET_NED = 7
};

/// Constant 'FRAME_BODY_NED'.
enum
{
  mavros_msgs__srv__SetMavFrame_Request__FRAME_BODY_NED = 8
};

/// Constant 'FRAME_BODY_OFFSET_NED'.
enum
{
  mavros_msgs__srv__SetMavFrame_Request__FRAME_BODY_OFFSET_NED = 9
};

/// Constant 'FRAME_GLOBAL_TERRAIN_ALT'.
enum
{
  mavros_msgs__srv__SetMavFrame_Request__FRAME_GLOBAL_TERRAIN_ALT = 10
};

/// Constant 'FRAME_GLOBAL_TERRAIN_ALT_INT'.
enum
{
  mavros_msgs__srv__SetMavFrame_Request__FRAME_GLOBAL_TERRAIN_ALT_INT = 11
};

/// Constant 'FRAME_BODY_FRD'.
enum
{
  mavros_msgs__srv__SetMavFrame_Request__FRAME_BODY_FRD = 12
};

/// Constant 'FRAME_RESERVED_13'.
enum
{
  mavros_msgs__srv__SetMavFrame_Request__FRAME_RESERVED_13 = 13
};

/// Constant 'FRAME_RESERVED_14'.
enum
{
  mavros_msgs__srv__SetMavFrame_Request__FRAME_RESERVED_14 = 14
};

/// Constant 'FRAME_RESERVED_15'.
enum
{
  mavros_msgs__srv__SetMavFrame_Request__FRAME_RESERVED_15 = 15
};

/// Constant 'FRAME_RESERVED_16'.
enum
{
  mavros_msgs__srv__SetMavFrame_Request__FRAME_RESERVED_16 = 16
};

/// Constant 'FRAME_RESERVED_17'.
enum
{
  mavros_msgs__srv__SetMavFrame_Request__FRAME_RESERVED_17 = 17
};

/// Constant 'FRAME_RESERVED_18'.
enum
{
  mavros_msgs__srv__SetMavFrame_Request__FRAME_RESERVED_18 = 18
};

/// Constant 'FRAME_RESERVED_19'.
enum
{
  mavros_msgs__srv__SetMavFrame_Request__FRAME_RESERVED_19 = 19
};

/// Constant 'FRAME_LOCAL_FRD'.
enum
{
  mavros_msgs__srv__SetMavFrame_Request__FRAME_LOCAL_FRD = 20
};

/// Constant 'FRAME_LOCAL_FLU'.
enum
{
  mavros_msgs__srv__SetMavFrame_Request__FRAME_LOCAL_FLU = 21
};

// Struct defined in srv/SetMavFrame in the package mavros_msgs.
typedef struct mavros_msgs__srv__SetMavFrame_Request
{
  uint8_t mav_frame;
} mavros_msgs__srv__SetMavFrame_Request;

// Struct for a sequence of mavros_msgs__srv__SetMavFrame_Request.
typedef struct mavros_msgs__srv__SetMavFrame_Request__Sequence
{
  mavros_msgs__srv__SetMavFrame_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mavros_msgs__srv__SetMavFrame_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SetMavFrame in the package mavros_msgs.
typedef struct mavros_msgs__srv__SetMavFrame_Response
{
  bool success;
} mavros_msgs__srv__SetMavFrame_Response;

// Struct for a sequence of mavros_msgs__srv__SetMavFrame_Response.
typedef struct mavros_msgs__srv__SetMavFrame_Response__Sequence
{
  mavros_msgs__srv__SetMavFrame_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mavros_msgs__srv__SetMavFrame_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAVROS_MSGS__SRV__DETAIL__SET_MAV_FRAME__STRUCT_H_
