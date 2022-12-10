// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mavros_msgs:msg/ADSBVehicle.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__MSG__DETAIL__ADSB_VEHICLE__TRAITS_HPP_
#define MAVROS_MSGS__MSG__DETAIL__ADSB_VEHICLE__TRAITS_HPP_

#include "mavros_msgs/msg/detail/adsb_vehicle__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'tslc'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mavros_msgs::msg::ADSBVehicle>()
{
  return "mavros_msgs::msg::ADSBVehicle";
}

template<>
inline const char * name<mavros_msgs::msg::ADSBVehicle>()
{
  return "mavros_msgs/msg/ADSBVehicle";
}

template<>
struct has_fixed_size<mavros_msgs::msg::ADSBVehicle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mavros_msgs::msg::ADSBVehicle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mavros_msgs::msg::ADSBVehicle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAVROS_MSGS__MSG__DETAIL__ADSB_VEHICLE__TRAITS_HPP_
