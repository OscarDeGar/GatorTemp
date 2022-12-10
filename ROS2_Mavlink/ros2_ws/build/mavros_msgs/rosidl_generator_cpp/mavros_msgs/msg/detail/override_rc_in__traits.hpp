// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mavros_msgs:msg/OverrideRCIn.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__MSG__DETAIL__OVERRIDE_RC_IN__TRAITS_HPP_
#define MAVROS_MSGS__MSG__DETAIL__OVERRIDE_RC_IN__TRAITS_HPP_

#include "mavros_msgs/msg/detail/override_rc_in__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mavros_msgs::msg::OverrideRCIn>()
{
  return "mavros_msgs::msg::OverrideRCIn";
}

template<>
inline const char * name<mavros_msgs::msg::OverrideRCIn>()
{
  return "mavros_msgs/msg/OverrideRCIn";
}

template<>
struct has_fixed_size<mavros_msgs::msg::OverrideRCIn>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mavros_msgs::msg::OverrideRCIn>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mavros_msgs::msg::OverrideRCIn>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAVROS_MSGS__MSG__DETAIL__OVERRIDE_RC_IN__TRAITS_HPP_
