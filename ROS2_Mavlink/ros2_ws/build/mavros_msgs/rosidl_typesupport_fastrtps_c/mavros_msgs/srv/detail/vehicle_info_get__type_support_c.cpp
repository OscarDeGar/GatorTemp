// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mavros_msgs:srv/VehicleInfoGet.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/srv/detail/vehicle_info_get__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mavros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mavros_msgs/srv/detail/vehicle_info_get__struct.h"
#include "mavros_msgs/srv/detail/vehicle_info_get__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _VehicleInfoGet_Request__ros_msg_type = mavros_msgs__srv__VehicleInfoGet_Request;

static bool _VehicleInfoGet_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleInfoGet_Request__ros_msg_type * ros_message = static_cast<const _VehicleInfoGet_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: sysid
  {
    cdr << ros_message->sysid;
  }

  // Field name: compid
  {
    cdr << ros_message->compid;
  }

  // Field name: get_all
  {
    cdr << (ros_message->get_all ? true : false);
  }

  return true;
}

static bool _VehicleInfoGet_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleInfoGet_Request__ros_msg_type * ros_message = static_cast<_VehicleInfoGet_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: sysid
  {
    cdr >> ros_message->sysid;
  }

  // Field name: compid
  {
    cdr >> ros_message->compid;
  }

  // Field name: get_all
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->get_all = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t get_serialized_size_mavros_msgs__srv__VehicleInfoGet_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleInfoGet_Request__ros_msg_type * ros_message = static_cast<const _VehicleInfoGet_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sysid
  {
    size_t item_size = sizeof(ros_message->sysid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name compid
  {
    size_t item_size = sizeof(ros_message->compid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name get_all
  {
    size_t item_size = sizeof(ros_message->get_all);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleInfoGet_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mavros_msgs__srv__VehicleInfoGet_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t max_serialized_size_mavros_msgs__srv__VehicleInfoGet_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: sysid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: compid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: get_all
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _VehicleInfoGet_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mavros_msgs__srv__VehicleInfoGet_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VehicleInfoGet_Request = {
  "mavros_msgs::srv",
  "VehicleInfoGet_Request",
  _VehicleInfoGet_Request__cdr_serialize,
  _VehicleInfoGet_Request__cdr_deserialize,
  _VehicleInfoGet_Request__get_serialized_size,
  _VehicleInfoGet_Request__max_serialized_size
};

static rosidl_message_type_support_t _VehicleInfoGet_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleInfoGet_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, srv, VehicleInfoGet_Request)() {
  return &_VehicleInfoGet_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "mavros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "mavros_msgs/srv/detail/vehicle_info_get__struct.h"
// already included above
// #include "mavros_msgs/srv/detail/vehicle_info_get__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "mavros_msgs/msg/detail/vehicle_info__functions.h"  // vehicles

// forward declare type support functions
size_t get_serialized_size_mavros_msgs__msg__VehicleInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mavros_msgs__msg__VehicleInfo(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, msg, VehicleInfo)();


using _VehicleInfoGet_Response__ros_msg_type = mavros_msgs__srv__VehicleInfoGet_Response;

static bool _VehicleInfoGet_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleInfoGet_Response__ros_msg_type * ros_message = static_cast<const _VehicleInfoGet_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: vehicles
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mavros_msgs, msg, VehicleInfo
      )()->data);
    size_t size = ros_message->vehicles.size;
    auto array_ptr = ros_message->vehicles.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _VehicleInfoGet_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleInfoGet_Response__ros_msg_type * ros_message = static_cast<_VehicleInfoGet_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: vehicles
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mavros_msgs, msg, VehicleInfo
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->vehicles.data) {
      mavros_msgs__msg__VehicleInfo__Sequence__fini(&ros_message->vehicles);
    }
    if (!mavros_msgs__msg__VehicleInfo__Sequence__init(&ros_message->vehicles, size)) {
      return "failed to create array for field 'vehicles'";
    }
    auto array_ptr = ros_message->vehicles.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t get_serialized_size_mavros_msgs__srv__VehicleInfoGet_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleInfoGet_Response__ros_msg_type * ros_message = static_cast<const _VehicleInfoGet_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicles
  {
    size_t array_size = ros_message->vehicles.size;
    auto array_ptr = ros_message->vehicles.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_mavros_msgs__msg__VehicleInfo(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleInfoGet_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mavros_msgs__srv__VehicleInfoGet_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t max_serialized_size_mavros_msgs__srv__VehicleInfoGet_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vehicles
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_mavros_msgs__msg__VehicleInfo(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _VehicleInfoGet_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mavros_msgs__srv__VehicleInfoGet_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VehicleInfoGet_Response = {
  "mavros_msgs::srv",
  "VehicleInfoGet_Response",
  _VehicleInfoGet_Response__cdr_serialize,
  _VehicleInfoGet_Response__cdr_deserialize,
  _VehicleInfoGet_Response__get_serialized_size,
  _VehicleInfoGet_Response__max_serialized_size
};

static rosidl_message_type_support_t _VehicleInfoGet_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleInfoGet_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, srv, VehicleInfoGet_Response)() {
  return &_VehicleInfoGet_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "mavros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mavros_msgs/srv/vehicle_info_get.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t VehicleInfoGet__callbacks = {
  "mavros_msgs::srv",
  "VehicleInfoGet",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, srv, VehicleInfoGet_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, srv, VehicleInfoGet_Response)(),
};

static rosidl_service_type_support_t VehicleInfoGet__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &VehicleInfoGet__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, srv, VehicleInfoGet)() {
  return &VehicleInfoGet__handle;
}

#if defined(__cplusplus)
}
#endif
