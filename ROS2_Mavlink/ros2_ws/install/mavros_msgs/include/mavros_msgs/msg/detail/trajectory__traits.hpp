// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mavros_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__MSG__DETAIL__TRAJECTORY__TRAITS_HPP_
#define MAVROS_MSGS__MSG__DETAIL__TRAJECTORY__TRAITS_HPP_

#include "mavros_msgs/msg/detail/trajectory__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'point_1'
// Member 'point_2'
// Member 'point_3'
// Member 'point_4'
// Member 'point_5'
#include "mavros_msgs/msg/detail/position_target__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mavros_msgs::msg::Trajectory>()
{
  return "mavros_msgs::msg::Trajectory";
}

template<>
inline const char * name<mavros_msgs::msg::Trajectory>()
{
  return "mavros_msgs/msg/Trajectory";
}

template<>
struct has_fixed_size<mavros_msgs::msg::Trajectory>
  : std::integral_constant<bool, has_fixed_size<mavros_msgs::msg::PositionTarget>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mavros_msgs::msg::Trajectory>
  : std::integral_constant<bool, has_bounded_size<mavros_msgs::msg::PositionTarget>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mavros_msgs::msg::Trajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAVROS_MSGS__MSG__DETAIL__TRAJECTORY__TRAITS_HPP_
