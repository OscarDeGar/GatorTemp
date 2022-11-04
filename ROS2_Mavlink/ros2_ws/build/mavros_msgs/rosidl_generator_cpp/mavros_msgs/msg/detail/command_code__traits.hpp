// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mavros_msgs:msg/CommandCode.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__MSG__DETAIL__COMMAND_CODE__TRAITS_HPP_
#define MAVROS_MSGS__MSG__DETAIL__COMMAND_CODE__TRAITS_HPP_

#include "mavros_msgs/msg/detail/command_code__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mavros_msgs::msg::CommandCode>()
{
  return "mavros_msgs::msg::CommandCode";
}

template<>
inline const char * name<mavros_msgs::msg::CommandCode>()
{
  return "mavros_msgs/msg/CommandCode";
}

template<>
struct has_fixed_size<mavros_msgs::msg::CommandCode>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mavros_msgs::msg::CommandCode>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mavros_msgs::msg::CommandCode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAVROS_MSGS__MSG__DETAIL__COMMAND_CODE__TRAITS_HPP_
