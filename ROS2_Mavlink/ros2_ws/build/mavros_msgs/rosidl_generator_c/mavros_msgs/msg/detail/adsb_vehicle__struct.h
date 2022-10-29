// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mavros_msgs:msg/ADSBVehicle.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__MSG__DETAIL__ADSB_VEHICLE__STRUCT_H_
#define MAVROS_MSGS__MSG__DETAIL__ADSB_VEHICLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ALT_PRESSURE_QNH'.
enum
{
  mavros_msgs__msg__ADSBVehicle__ALT_PRESSURE_QNH = 0
};

/// Constant 'ALT_GEOMETRIC'.
enum
{
  mavros_msgs__msg__ADSBVehicle__ALT_GEOMETRIC = 1
};

/// Constant 'EMITTER_NO_INFO'.
enum
{
  mavros_msgs__msg__ADSBVehicle__EMITTER_NO_INFO = 0
};

/// Constant 'EMITTER_LIGHT'.
enum
{
  mavros_msgs__msg__ADSBVehicle__EMITTER_LIGHT = 1
};

/// Constant 'EMITTER_SMALL'.
enum
{
  mavros_msgs__msg__ADSBVehicle__EMITTER_SMALL = 2
};

/// Constant 'EMITTER_LARGE'.
enum
{
  mavros_msgs__msg__ADSBVehicle__EMITTER_LARGE = 3
};

/// Constant 'EMITTER_HIGH_VORTEX_LARGE'.
enum
{
  mavros_msgs__msg__ADSBVehicle__EMITTER_HIGH_VORTEX_LARGE = 4
};

/// Constant 'EMITTER_HEAVY'.
enum
{
  mavros_msgs__msg__ADSBVehicle__EMITTER_HEAVY = 5
};

/// Constant 'EMITTER_HIGHLY_MANUV'.
enum
{
  mavros_msgs__msg__ADSBVehicle__EMITTER_HIGHLY_MANUV = 6
};

/// Constant 'EMITTER_ROTOCRAFT'.
enum
{
  mavros_msgs__msg__ADSBVehicle__EMITTER_ROTOCRAFT = 7
};

/// Constant 'EMITTER_UNASSIGNED'.
enum
{
  mavros_msgs__msg__ADSBVehicle__EMITTER_UNASSIGNED = 8
};

/// Constant 'EMITTER_GLIDER'.
enum
{
  mavros_msgs__msg__ADSBVehicle__EMITTER_GLIDER = 9
};

/// Constant 'EMITTER_LIGHTER_AIR'.
enum
{
  mavros_msgs__msg__ADSBVehicle__EMITTER_LIGHTER_AIR = 10
};

/// Constant 'EMITTER_PARACHUTE'.
enum
{
  mavros_msgs__msg__ADSBVehicle__EMITTER_PARACHUTE = 11
};

/// Constant 'EMITTER_ULTRA_LIGHT'.
enum
{
  mavros_msgs__msg__ADSBVehicle__EMITTER_ULTRA_LIGHT = 12
};

/// Constant 'EMITTER_UNASSIGNED2'.
enum
{
  mavros_msgs__msg__ADSBVehicle__EMITTER_UNASSIGNED2 = 13
};

/// Constant 'EMITTER_UAV'.
enum
{
  mavros_msgs__msg__ADSBVehicle__EMITTER_UAV = 14
};

/// Constant 'EMITTER_SPACE'.
enum
{
  mavros_msgs__msg__ADSBVehicle__EMITTER_SPACE = 15
};

/// Constant 'EMITTER_UNASSGINED3'.
enum
{
  mavros_msgs__msg__ADSBVehicle__EMITTER_UNASSGINED3 = 16
};

/// Constant 'EMITTER_EMERGENCY_SURFACE'.
enum
{
  mavros_msgs__msg__ADSBVehicle__EMITTER_EMERGENCY_SURFACE = 17
};

/// Constant 'EMITTER_SERVICE_SURFACE'.
enum
{
  mavros_msgs__msg__ADSBVehicle__EMITTER_SERVICE_SURFACE = 18
};

/// Constant 'EMITTER_POINT_OBSTACLE'.
enum
{
  mavros_msgs__msg__ADSBVehicle__EMITTER_POINT_OBSTACLE = 19
};

/// Constant 'FLAG_VALID_COORDS'.
enum
{
  mavros_msgs__msg__ADSBVehicle__FLAG_VALID_COORDS = 1
};

/// Constant 'FLAG_VALID_ALTITUDE'.
enum
{
  mavros_msgs__msg__ADSBVehicle__FLAG_VALID_ALTITUDE = 2
};

/// Constant 'FLAG_VALID_HEADING'.
enum
{
  mavros_msgs__msg__ADSBVehicle__FLAG_VALID_HEADING = 4
};

/// Constant 'FLAG_VALID_VELOCITY'.
enum
{
  mavros_msgs__msg__ADSBVehicle__FLAG_VALID_VELOCITY = 8
};

/// Constant 'FLAG_VALID_CALLSIGN'.
enum
{
  mavros_msgs__msg__ADSBVehicle__FLAG_VALID_CALLSIGN = 16
};

/// Constant 'FLAG_VALID_SQUAWK'.
enum
{
  mavros_msgs__msg__ADSBVehicle__FLAG_VALID_SQUAWK = 32
};

/// Constant 'FLAG_SIMULATED'.
enum
{
  mavros_msgs__msg__ADSBVehicle__FLAG_SIMULATED = 64
};

/// Constant 'FLAG_VERTICAL_VELOCITY_VALID'.
enum
{
  mavros_msgs__msg__ADSBVehicle__FLAG_VERTICAL_VELOCITY_VALID = 128
};

/// Constant 'FLAG_BARO_VALID'.
enum
{
  mavros_msgs__msg__ADSBVehicle__FLAG_BARO_VALID = 256
};

/// Constant 'FLAG_SOURCE_UAT'.
enum
{
  mavros_msgs__msg__ADSBVehicle__FLAG_SOURCE_UAT = 32768
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'callsign'
#include "rosidl_runtime_c/string.h"
// Member 'tslc'
#include "builtin_interfaces/msg/detail/duration__struct.h"

// Struct defined in msg/ADSBVehicle in the package mavros_msgs.
typedef struct mavros_msgs__msg__ADSBVehicle
{
  std_msgs__msg__Header header;
  uint32_t icao_address;
  rosidl_runtime_c__String callsign;
  double latitude;
  double longitude;
  float altitude;
  float heading;
  float hor_velocity;
  float ver_velocity;
  uint8_t altitude_type;
  uint8_t emitter_type;
  builtin_interfaces__msg__Duration tslc;
  uint16_t flags;
  uint16_t squawk;
} mavros_msgs__msg__ADSBVehicle;

// Struct for a sequence of mavros_msgs__msg__ADSBVehicle.
typedef struct mavros_msgs__msg__ADSBVehicle__Sequence
{
  mavros_msgs__msg__ADSBVehicle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mavros_msgs__msg__ADSBVehicle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAVROS_MSGS__MSG__DETAIL__ADSB_VEHICLE__STRUCT_H_
