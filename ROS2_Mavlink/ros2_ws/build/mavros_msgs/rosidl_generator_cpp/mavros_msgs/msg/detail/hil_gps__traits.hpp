// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mavros_msgs:msg/HilGPS.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__MSG__DETAIL__HIL_GPS__TRAITS_HPP_
#define MAVROS_MSGS__MSG__DETAIL__HIL_GPS__TRAITS_HPP_

#include "mavros_msgs/msg/detail/hil_gps__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'geo'
#include "geographic_msgs/msg/detail/geo_point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mavros_msgs::msg::HilGPS>()
{
  return "mavros_msgs::msg::HilGPS";
}

template<>
inline const char * name<mavros_msgs::msg::HilGPS>()
{
  return "mavros_msgs/msg/HilGPS";
}

template<>
struct has_fixed_size<mavros_msgs::msg::HilGPS>
  : std::integral_constant<bool, has_fixed_size<geographic_msgs::msg::GeoPoint>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mavros_msgs::msg::HilGPS>
  : std::integral_constant<bool, has_bounded_size<geographic_msgs::msg::GeoPoint>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mavros_msgs::msg::HilGPS>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAVROS_MSGS__MSG__DETAIL__HIL_GPS__TRAITS_HPP_
