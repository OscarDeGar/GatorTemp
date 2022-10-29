// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mavros_msgs:msg/LandingTarget.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__MSG__DETAIL__LANDING_TARGET__TRAITS_HPP_
#define MAVROS_MSGS__MSG__DETAIL__LANDING_TARGET__TRAITS_HPP_

#include "mavros_msgs/msg/detail/landing_target__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mavros_msgs::msg::LandingTarget>()
{
  return "mavros_msgs::msg::LandingTarget";
}

template<>
inline const char * name<mavros_msgs::msg::LandingTarget>()
{
  return "mavros_msgs/msg/LandingTarget";
}

template<>
struct has_fixed_size<mavros_msgs::msg::LandingTarget>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mavros_msgs::msg::LandingTarget>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mavros_msgs::msg::LandingTarget>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAVROS_MSGS__MSG__DETAIL__LANDING_TARGET__TRAITS_HPP_
