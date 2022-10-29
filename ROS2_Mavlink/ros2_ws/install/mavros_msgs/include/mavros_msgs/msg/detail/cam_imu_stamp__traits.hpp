// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mavros_msgs:msg/CamIMUStamp.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__MSG__DETAIL__CAM_IMU_STAMP__TRAITS_HPP_
#define MAVROS_MSGS__MSG__DETAIL__CAM_IMU_STAMP__TRAITS_HPP_

#include "mavros_msgs/msg/detail/cam_imu_stamp__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'frame_stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mavros_msgs::msg::CamIMUStamp>()
{
  return "mavros_msgs::msg::CamIMUStamp";
}

template<>
inline const char * name<mavros_msgs::msg::CamIMUStamp>()
{
  return "mavros_msgs/msg/CamIMUStamp";
}

template<>
struct has_fixed_size<mavros_msgs::msg::CamIMUStamp>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<mavros_msgs::msg::CamIMUStamp>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<mavros_msgs::msg::CamIMUStamp>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAVROS_MSGS__MSG__DETAIL__CAM_IMU_STAMP__TRAITS_HPP_
