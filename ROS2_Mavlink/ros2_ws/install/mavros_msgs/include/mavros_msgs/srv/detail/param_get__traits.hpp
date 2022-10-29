// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mavros_msgs:srv/ParamGet.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__SRV__DETAIL__PARAM_GET__TRAITS_HPP_
#define MAVROS_MSGS__SRV__DETAIL__PARAM_GET__TRAITS_HPP_

#include "mavros_msgs/srv/detail/param_get__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mavros_msgs::srv::ParamGet_Request>()
{
  return "mavros_msgs::srv::ParamGet_Request";
}

template<>
inline const char * name<mavros_msgs::srv::ParamGet_Request>()
{
  return "mavros_msgs/srv/ParamGet_Request";
}

template<>
struct has_fixed_size<mavros_msgs::srv::ParamGet_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mavros_msgs::srv::ParamGet_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mavros_msgs::srv::ParamGet_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'value'
#include "mavros_msgs/msg/detail/param_value__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mavros_msgs::srv::ParamGet_Response>()
{
  return "mavros_msgs::srv::ParamGet_Response";
}

template<>
inline const char * name<mavros_msgs::srv::ParamGet_Response>()
{
  return "mavros_msgs/srv/ParamGet_Response";
}

template<>
struct has_fixed_size<mavros_msgs::srv::ParamGet_Response>
  : std::integral_constant<bool, has_fixed_size<mavros_msgs::msg::ParamValue>::value> {};

template<>
struct has_bounded_size<mavros_msgs::srv::ParamGet_Response>
  : std::integral_constant<bool, has_bounded_size<mavros_msgs::msg::ParamValue>::value> {};

template<>
struct is_message<mavros_msgs::srv::ParamGet_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mavros_msgs::srv::ParamGet>()
{
  return "mavros_msgs::srv::ParamGet";
}

template<>
inline const char * name<mavros_msgs::srv::ParamGet>()
{
  return "mavros_msgs/srv/ParamGet";
}

template<>
struct has_fixed_size<mavros_msgs::srv::ParamGet>
  : std::integral_constant<
    bool,
    has_fixed_size<mavros_msgs::srv::ParamGet_Request>::value &&
    has_fixed_size<mavros_msgs::srv::ParamGet_Response>::value
  >
{
};

template<>
struct has_bounded_size<mavros_msgs::srv::ParamGet>
  : std::integral_constant<
    bool,
    has_bounded_size<mavros_msgs::srv::ParamGet_Request>::value &&
    has_bounded_size<mavros_msgs::srv::ParamGet_Response>::value
  >
{
};

template<>
struct is_service<mavros_msgs::srv::ParamGet>
  : std::true_type
{
};

template<>
struct is_service_request<mavros_msgs::srv::ParamGet_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mavros_msgs::srv::ParamGet_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MAVROS_MSGS__SRV__DETAIL__PARAM_GET__TRAITS_HPP_
