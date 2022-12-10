// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mavros_msgs:msg/CommandCode.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__MSG__DETAIL__COMMAND_CODE__STRUCT_H_
#define MAVROS_MSGS__MSG__DETAIL__COMMAND_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'AIRFRAME_CONFIGURATION'.
enum
{
  mavros_msgs__msg__CommandCode__AIRFRAME_CONFIGURATION = 2520
};

/// Constant 'ARM_AUTHORIZATION_REQUEST'.
enum
{
  mavros_msgs__msg__CommandCode__ARM_AUTHORIZATION_REQUEST = 3001
};

/// Constant 'COMPONENT_ARM_DISARM'.
enum
{
  mavros_msgs__msg__CommandCode__COMPONENT_ARM_DISARM = 400
};

/// Constant 'CONDITION_DELAY'.
enum
{
  mavros_msgs__msg__CommandCode__CONDITION_DELAY = 112
};

/// Constant 'CONDITION_CHANGE_ALT'.
enum
{
  mavros_msgs__msg__CommandCode__CONDITION_CHANGE_ALT = 113
};

/// Constant 'CONDITION_DISTANCE'.
enum
{
  mavros_msgs__msg__CommandCode__CONDITION_DISTANCE = 114
};

/// Constant 'CONDITION_YAW'.
enum
{
  mavros_msgs__msg__CommandCode__CONDITION_YAW = 115
};

/// Constant 'CONDITION_LAST'.
enum
{
  mavros_msgs__msg__CommandCode__CONDITION_LAST = 159
};

/// Constant 'CONTROL_HIGH_LATENCY'.
enum
{
  mavros_msgs__msg__CommandCode__CONTROL_HIGH_LATENCY = 2600
};

/// Constant 'DO_FOLLOW'.
enum
{
  mavros_msgs__msg__CommandCode__DO_FOLLOW = 32
};

/// Constant 'DO_FOLLOW_REPOSITION'.
enum
{
  mavros_msgs__msg__CommandCode__DO_FOLLOW_REPOSITION = 33
};

/// Constant 'DO_SET_MODE'.
enum
{
  mavros_msgs__msg__CommandCode__DO_SET_MODE = 176
};

/// Constant 'DO_JUMP'.
enum
{
  mavros_msgs__msg__CommandCode__DO_JUMP = 177
};

/// Constant 'DO_CHANGE_SPEED'.
enum
{
  mavros_msgs__msg__CommandCode__DO_CHANGE_SPEED = 178
};

/// Constant 'DO_SET_HOME'.
enum
{
  mavros_msgs__msg__CommandCode__DO_SET_HOME = 179
};

/// Constant 'DO_SET_PARAMETER'.
enum
{
  mavros_msgs__msg__CommandCode__DO_SET_PARAMETER = 180
};

/// Constant 'DO_SET_RELAY'.
enum
{
  mavros_msgs__msg__CommandCode__DO_SET_RELAY = 181
};

/// Constant 'DO_REPEAT_RELAY'.
enum
{
  mavros_msgs__msg__CommandCode__DO_REPEAT_RELAY = 182
};

/// Constant 'DO_SET_SERVO'.
enum
{
  mavros_msgs__msg__CommandCode__DO_SET_SERVO = 183
};

/// Constant 'DO_REPEAT_SERVO'.
enum
{
  mavros_msgs__msg__CommandCode__DO_REPEAT_SERVO = 184
};

/// Constant 'DO_FLIGHTTERMINATION'.
enum
{
  mavros_msgs__msg__CommandCode__DO_FLIGHTTERMINATION = 185
};

/// Constant 'DO_CHANGE_ALTITUDE'.
enum
{
  mavros_msgs__msg__CommandCode__DO_CHANGE_ALTITUDE = 186
};

/// Constant 'DO_LAND_START'.
enum
{
  mavros_msgs__msg__CommandCode__DO_LAND_START = 189
};

/// Constant 'DO_RALLY_LAND'.
enum
{
  mavros_msgs__msg__CommandCode__DO_RALLY_LAND = 190
};

/// Constant 'DO_GO_AROUND'.
enum
{
  mavros_msgs__msg__CommandCode__DO_GO_AROUND = 191
};

/// Constant 'DO_REPOSITION'.
enum
{
  mavros_msgs__msg__CommandCode__DO_REPOSITION = 192
};

/// Constant 'DO_PAUSE_CONTINUE'.
enum
{
  mavros_msgs__msg__CommandCode__DO_PAUSE_CONTINUE = 193
};

/// Constant 'DO_SET_REVERSE'.
enum
{
  mavros_msgs__msg__CommandCode__DO_SET_REVERSE = 194
};

/// Constant 'DO_SET_ROI_LOCATION'.
enum
{
  mavros_msgs__msg__CommandCode__DO_SET_ROI_LOCATION = 195
};

/// Constant 'DO_SET_ROI_WPNEXT_OFFSET'.
enum
{
  mavros_msgs__msg__CommandCode__DO_SET_ROI_WPNEXT_OFFSET = 196
};

/// Constant 'DO_SET_ROI_NONE'.
enum
{
  mavros_msgs__msg__CommandCode__DO_SET_ROI_NONE = 197
};

/// Constant 'DO_SET_ROI_SYSID'.
enum
{
  mavros_msgs__msg__CommandCode__DO_SET_ROI_SYSID = 198
};

/// Constant 'DO_CONTROL_VIDEO'.
enum
{
  mavros_msgs__msg__CommandCode__DO_CONTROL_VIDEO = 200
};

/// Constant 'DO_SET_ROI'.
enum
{
  mavros_msgs__msg__CommandCode__DO_SET_ROI = 201
};

/// Constant 'DO_DIGICAM_CONFIGURE'.
enum
{
  mavros_msgs__msg__CommandCode__DO_DIGICAM_CONFIGURE = 202
};

/// Constant 'DO_DIGICAM_CONTROL'.
enum
{
  mavros_msgs__msg__CommandCode__DO_DIGICAM_CONTROL = 203
};

/// Constant 'DO_MOUNT_CONFIGURE'.
enum
{
  mavros_msgs__msg__CommandCode__DO_MOUNT_CONFIGURE = 204
};

/// Constant 'DO_MOUNT_CONTROL'.
enum
{
  mavros_msgs__msg__CommandCode__DO_MOUNT_CONTROL = 205
};

/// Constant 'DO_SET_CAM_TRIGG_DIST'.
enum
{
  mavros_msgs__msg__CommandCode__DO_SET_CAM_TRIGG_DIST = 206
};

/// Constant 'DO_FENCE_ENABLE'.
enum
{
  mavros_msgs__msg__CommandCode__DO_FENCE_ENABLE = 207
};

/// Constant 'DO_PARACHUTE'.
enum
{
  mavros_msgs__msg__CommandCode__DO_PARACHUTE = 208
};

/// Constant 'DO_MOTOR_TEST'.
enum
{
  mavros_msgs__msg__CommandCode__DO_MOTOR_TEST = 209
};

/// Constant 'DO_INVERTED_FLIGHT'.
enum
{
  mavros_msgs__msg__CommandCode__DO_INVERTED_FLIGHT = 210
};

/// Constant 'DO_GRIPPER'.
enum
{
  mavros_msgs__msg__CommandCode__DO_GRIPPER = 211
};

/// Constant 'DO_AUTOTUNE_ENABLE'.
enum
{
  mavros_msgs__msg__CommandCode__DO_AUTOTUNE_ENABLE = 212
};

/// Constant 'DO_SET_CAM_TRIGG_INTERVAL'.
enum
{
  mavros_msgs__msg__CommandCode__DO_SET_CAM_TRIGG_INTERVAL = 214
};

/// Constant 'DO_MOUNT_CONTROL_QUAT'.
enum
{
  mavros_msgs__msg__CommandCode__DO_MOUNT_CONTROL_QUAT = 220
};

/// Constant 'DO_GUIDED_MASTER'.
enum
{
  mavros_msgs__msg__CommandCode__DO_GUIDED_MASTER = 221
};

/// Constant 'DO_GUIDED_LIMITS'.
enum
{
  mavros_msgs__msg__CommandCode__DO_GUIDED_LIMITS = 222
};

/// Constant 'DO_ENGINE_CONTROL'.
enum
{
  mavros_msgs__msg__CommandCode__DO_ENGINE_CONTROL = 223
};

/// Constant 'DO_SET_MISSION_CURRENT'.
enum
{
  mavros_msgs__msg__CommandCode__DO_SET_MISSION_CURRENT = 224
};

/// Constant 'DO_LAST'.
enum
{
  mavros_msgs__msg__CommandCode__DO_LAST = 240
};

/// Constant 'DO_JUMP_TAG'.
enum
{
  mavros_msgs__msg__CommandCode__DO_JUMP_TAG = 601
};

/// Constant 'DO_TRIGGER_CONTROL'.
enum
{
  mavros_msgs__msg__CommandCode__DO_TRIGGER_CONTROL = 2003
};

/// Constant 'DO_VTOL_TRANSITION'.
enum
{
  mavros_msgs__msg__CommandCode__DO_VTOL_TRANSITION = 3000
};

/// Constant 'DO_ADSB_OUT_IDENT'.
enum
{
  mavros_msgs__msg__CommandCode__DO_ADSB_OUT_IDENT = 10001
};

/// Constant 'DO_WINCH'.
enum
{
  mavros_msgs__msg__CommandCode__DO_WINCH = 42600
};

/// Constant 'FIXED_MAG_CAL_YAW'.
enum
{
  mavros_msgs__msg__CommandCode__FIXED_MAG_CAL_YAW = 42006
};

/// Constant 'GET_HOME_POSITION'.
enum
{
  mavros_msgs__msg__CommandCode__GET_HOME_POSITION = 410
};

/// Constant 'GET_MESSAGE_INTERVAL'.
enum
{
  mavros_msgs__msg__CommandCode__GET_MESSAGE_INTERVAL = 510
};

/// Constant 'IMAGE_START_CAPTURE'.
enum
{
  mavros_msgs__msg__CommandCode__IMAGE_START_CAPTURE = 2000
};

/// Constant 'IMAGE_STOP_CAPTURE'.
enum
{
  mavros_msgs__msg__CommandCode__IMAGE_STOP_CAPTURE = 2001
};

/// Constant 'JUMP_TAG'.
enum
{
  mavros_msgs__msg__CommandCode__JUMP_TAG = 600
};

/// Constant 'LOGGING_START'.
enum
{
  mavros_msgs__msg__CommandCode__LOGGING_START = 2510
};

/// Constant 'LOGGING_STOP'.
enum
{
  mavros_msgs__msg__CommandCode__LOGGING_STOP = 2511
};

/// Constant 'MISSION_START'.
enum
{
  mavros_msgs__msg__CommandCode__MISSION_START = 300
};

/// Constant 'NAV_WAYPOINT'.
enum
{
  mavros_msgs__msg__CommandCode__NAV_WAYPOINT = 16
};

/// Constant 'NAV_LOITER_UNLIM'.
enum
{
  mavros_msgs__msg__CommandCode__NAV_LOITER_UNLIM = 17
};

/// Constant 'NAV_LOITER_TURNS'.
enum
{
  mavros_msgs__msg__CommandCode__NAV_LOITER_TURNS = 18
};

/// Constant 'NAV_LOITER_TIME'.
enum
{
  mavros_msgs__msg__CommandCode__NAV_LOITER_TIME = 19
};

/// Constant 'NAV_RETURN_TO_LAUNCH'.
enum
{
  mavros_msgs__msg__CommandCode__NAV_RETURN_TO_LAUNCH = 20
};

/// Constant 'NAV_LAND'.
enum
{
  mavros_msgs__msg__CommandCode__NAV_LAND = 21
};

/// Constant 'NAV_TAKEOFF'.
enum
{
  mavros_msgs__msg__CommandCode__NAV_TAKEOFF = 22
};

/// Constant 'NAV_LAND_LOCAL'.
enum
{
  mavros_msgs__msg__CommandCode__NAV_LAND_LOCAL = 23
};

/// Constant 'NAV_TAKEOFF_LOCAL'.
enum
{
  mavros_msgs__msg__CommandCode__NAV_TAKEOFF_LOCAL = 24
};

/// Constant 'NAV_FOLLOW'.
enum
{
  mavros_msgs__msg__CommandCode__NAV_FOLLOW = 25
};

/// Constant 'NAV_CONTINUE_AND_CHANGE_ALT'.
enum
{
  mavros_msgs__msg__CommandCode__NAV_CONTINUE_AND_CHANGE_ALT = 30
};

/// Constant 'NAV_LOITER_TO_ALT'.
enum
{
  mavros_msgs__msg__CommandCode__NAV_LOITER_TO_ALT = 31
};

/// Constant 'NAV_ROI'.
enum
{
  mavros_msgs__msg__CommandCode__NAV_ROI = 80
};

/// Constant 'NAV_PATHPLANNING'.
enum
{
  mavros_msgs__msg__CommandCode__NAV_PATHPLANNING = 81
};

/// Constant 'NAV_SPLINE_WAYPOINT'.
enum
{
  mavros_msgs__msg__CommandCode__NAV_SPLINE_WAYPOINT = 82
};

/// Constant 'NAV_VTOL_TAKEOFF'.
enum
{
  mavros_msgs__msg__CommandCode__NAV_VTOL_TAKEOFF = 84
};

/// Constant 'NAV_VTOL_LAND'.
enum
{
  mavros_msgs__msg__CommandCode__NAV_VTOL_LAND = 85
};

/// Constant 'NAV_GUIDED_ENABLE'.
enum
{
  mavros_msgs__msg__CommandCode__NAV_GUIDED_ENABLE = 92
};

/// Constant 'NAV_DELAY'.
enum
{
  mavros_msgs__msg__CommandCode__NAV_DELAY = 93
};

/// Constant 'NAV_PAYLOAD_PLACE'.
enum
{
  mavros_msgs__msg__CommandCode__NAV_PAYLOAD_PLACE = 94
};

/// Constant 'NAV_LAST'.
enum
{
  mavros_msgs__msg__CommandCode__NAV_LAST = 95
};

/// Constant 'NAV_SET_YAW_SPEED'.
enum
{
  mavros_msgs__msg__CommandCode__NAV_SET_YAW_SPEED = 213
};

/// Constant 'NAV_FENCE_RETURN_POINT'.
enum
{
  mavros_msgs__msg__CommandCode__NAV_FENCE_RETURN_POINT = 5000
};

/// Constant 'NAV_FENCE_POLYGON_VERTEX_INCLUSION'.
enum
{
  mavros_msgs__msg__CommandCode__NAV_FENCE_POLYGON_VERTEX_INCLUSION = 5001
};

/// Constant 'NAV_FENCE_POLYGON_VERTEX_EXCLUSION'.
enum
{
  mavros_msgs__msg__CommandCode__NAV_FENCE_POLYGON_VERTEX_EXCLUSION = 5002
};

/// Constant 'NAV_FENCE_CIRCLE_INCLUSION'.
enum
{
  mavros_msgs__msg__CommandCode__NAV_FENCE_CIRCLE_INCLUSION = 5003
};

/// Constant 'NAV_FENCE_CIRCLE_EXCLUSION'.
enum
{
  mavros_msgs__msg__CommandCode__NAV_FENCE_CIRCLE_EXCLUSION = 5004
};

/// Constant 'NAV_RALLY_POINT'.
enum
{
  mavros_msgs__msg__CommandCode__NAV_RALLY_POINT = 5100
};

/// Constant 'OBLIQUE_SURVEY'.
enum
{
  mavros_msgs__msg__CommandCode__OBLIQUE_SURVEY = 260
};

/// Constant 'OVERRIDE_GOTO'.
enum
{
  mavros_msgs__msg__CommandCode__OVERRIDE_GOTO = 252
};

/// Constant 'PANORAMA_CREATE'.
enum
{
  mavros_msgs__msg__CommandCode__PANORAMA_CREATE = 2800
};

/// Constant 'PAYLOAD_PREPARE_DEPLOY'.
enum
{
  mavros_msgs__msg__CommandCode__PAYLOAD_PREPARE_DEPLOY = 30001
};

/// Constant 'PAYLOAD_CONTROL_DEPLOY'.
enum
{
  mavros_msgs__msg__CommandCode__PAYLOAD_CONTROL_DEPLOY = 30002
};

/// Constant 'PREFLIGHT_CALIBRATION'.
enum
{
  mavros_msgs__msg__CommandCode__PREFLIGHT_CALIBRATION = 241
};

/// Constant 'PREFLIGHT_SET_SENSOR_OFFSETS'.
enum
{
  mavros_msgs__msg__CommandCode__PREFLIGHT_SET_SENSOR_OFFSETS = 242
};

/// Constant 'PREFLIGHT_UAVCAN'.
enum
{
  mavros_msgs__msg__CommandCode__PREFLIGHT_UAVCAN = 243
};

/// Constant 'PREFLIGHT_STORAGE'.
enum
{
  mavros_msgs__msg__CommandCode__PREFLIGHT_STORAGE = 245
};

/// Constant 'PREFLIGHT_REBOOT_SHUTDOWN'.
enum
{
  mavros_msgs__msg__CommandCode__PREFLIGHT_REBOOT_SHUTDOWN = 246
};

/// Constant 'REQUEST_MESSAGE'.
enum
{
  mavros_msgs__msg__CommandCode__REQUEST_MESSAGE = 512
};

/// Constant 'REQUEST_PROTOCOL_VERSION'.
enum
{
  mavros_msgs__msg__CommandCode__REQUEST_PROTOCOL_VERSION = 519
};

/// Constant 'REQUEST_AUTOPILOT_CAPABILITIES'.
enum
{
  mavros_msgs__msg__CommandCode__REQUEST_AUTOPILOT_CAPABILITIES = 520
};

/// Constant 'REQUEST_CAMERA_INFORMATION'.
enum
{
  mavros_msgs__msg__CommandCode__REQUEST_CAMERA_INFORMATION = 521
};

/// Constant 'REQUEST_CAMERA_SETTINGS'.
enum
{
  mavros_msgs__msg__CommandCode__REQUEST_CAMERA_SETTINGS = 522
};

/// Constant 'REQUEST_STORAGE_INFORMATION'.
enum
{
  mavros_msgs__msg__CommandCode__REQUEST_STORAGE_INFORMATION = 525
};

/// Constant 'REQUEST_CAMERA_CAPTURE_STATUS'.
enum
{
  mavros_msgs__msg__CommandCode__REQUEST_CAMERA_CAPTURE_STATUS = 527
};

/// Constant 'REQUEST_FLIGHT_INFORMATION'.
enum
{
  mavros_msgs__msg__CommandCode__REQUEST_FLIGHT_INFORMATION = 528
};

/// Constant 'REQUEST_VIDEO_STREAM_INFORMATION'.
enum
{
  mavros_msgs__msg__CommandCode__REQUEST_VIDEO_STREAM_INFORMATION = 2504
};

/// Constant 'REQUEST_VIDEO_STREAM_STATUS'.
enum
{
  mavros_msgs__msg__CommandCode__REQUEST_VIDEO_STREAM_STATUS = 2505
};

/// Constant 'RESET_CAMERA_SETTINGS'.
enum
{
  mavros_msgs__msg__CommandCode__RESET_CAMERA_SETTINGS = 529
};

/// Constant 'RUN_PREARM_CHECKS'.
enum
{
  mavros_msgs__msg__CommandCode__RUN_PREARM_CHECKS = 401
};

/// Constant 'SET_MESSAGE_INTERVAL'.
enum
{
  mavros_msgs__msg__CommandCode__SET_MESSAGE_INTERVAL = 511
};

/// Constant 'SET_CAMERA_MODE'.
enum
{
  mavros_msgs__msg__CommandCode__SET_CAMERA_MODE = 530
};

/// Constant 'SET_GUIDED_SUBMODE_STANDARD'.
enum
{
  mavros_msgs__msg__CommandCode__SET_GUIDED_SUBMODE_STANDARD = 4000
};

/// Constant 'SET_GUIDED_SUBMODE_CIRCLE'.
enum
{
  mavros_msgs__msg__CommandCode__SET_GUIDED_SUBMODE_CIRCLE = 4001
};

/// Constant 'SPATIAL_USER_1'.
enum
{
  mavros_msgs__msg__CommandCode__SPATIAL_USER_1 = 31005
};

/// Constant 'SPATIAL_USER_2'.
enum
{
  mavros_msgs__msg__CommandCode__SPATIAL_USER_2 = 31006
};

/// Constant 'SPATIAL_USER_3'.
enum
{
  mavros_msgs__msg__CommandCode__SPATIAL_USER_3 = 31007
};

/// Constant 'SPATIAL_USER_4'.
enum
{
  mavros_msgs__msg__CommandCode__SPATIAL_USER_4 = 31008
};

/// Constant 'SPATIAL_USER_5'.
enum
{
  mavros_msgs__msg__CommandCode__SPATIAL_USER_5 = 31009
};

/// Constant 'START_RX_PAIR'.
enum
{
  mavros_msgs__msg__CommandCode__START_RX_PAIR = 500
};

/// Constant 'STORAGE_FORMAT'.
enum
{
  mavros_msgs__msg__CommandCode__STORAGE_FORMAT = 526
};

/// Constant 'UAVCAN_GET_NODE_INFO'.
enum
{
  mavros_msgs__msg__CommandCode__UAVCAN_GET_NODE_INFO = 5200
};

/// Constant 'USER_1'.
enum
{
  mavros_msgs__msg__CommandCode__USER_1 = 31010
};

/// Constant 'USER_2'.
enum
{
  mavros_msgs__msg__CommandCode__USER_2 = 31011
};

/// Constant 'USER_3'.
enum
{
  mavros_msgs__msg__CommandCode__USER_3 = 31012
};

/// Constant 'USER_4'.
enum
{
  mavros_msgs__msg__CommandCode__USER_4 = 31013
};

/// Constant 'USER_5'.
enum
{
  mavros_msgs__msg__CommandCode__USER_5 = 31014
};

/// Constant 'VIDEO_START_CAPTURE'.
enum
{
  mavros_msgs__msg__CommandCode__VIDEO_START_CAPTURE = 2500
};

/// Constant 'VIDEO_STOP_CAPTURE'.
enum
{
  mavros_msgs__msg__CommandCode__VIDEO_STOP_CAPTURE = 2501
};

/// Constant 'VIDEO_START_STREAMING'.
enum
{
  mavros_msgs__msg__CommandCode__VIDEO_START_STREAMING = 2502
};

/// Constant 'VIDEO_STOP_STREAMING'.
enum
{
  mavros_msgs__msg__CommandCode__VIDEO_STOP_STREAMING = 2503
};

/// Constant 'WAYPOINT_USER_1'.
enum
{
  mavros_msgs__msg__CommandCode__WAYPOINT_USER_1 = 31000
};

/// Constant 'WAYPOINT_USER_2'.
enum
{
  mavros_msgs__msg__CommandCode__WAYPOINT_USER_2 = 31001
};

/// Constant 'WAYPOINT_USER_3'.
enum
{
  mavros_msgs__msg__CommandCode__WAYPOINT_USER_3 = 31002
};

/// Constant 'WAYPOINT_USER_4'.
enum
{
  mavros_msgs__msg__CommandCode__WAYPOINT_USER_4 = 31003
};

/// Constant 'WAYPOINT_USER_5'.
enum
{
  mavros_msgs__msg__CommandCode__WAYPOINT_USER_5 = 31004
};

// Struct defined in msg/CommandCode in the package mavros_msgs.
typedef struct mavros_msgs__msg__CommandCode
{
  uint8_t structure_needs_at_least_one_member;
} mavros_msgs__msg__CommandCode;

// Struct for a sequence of mavros_msgs__msg__CommandCode.
typedef struct mavros_msgs__msg__CommandCode__Sequence
{
  mavros_msgs__msg__CommandCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mavros_msgs__msg__CommandCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAVROS_MSGS__MSG__DETAIL__COMMAND_CODE__STRUCT_H_
