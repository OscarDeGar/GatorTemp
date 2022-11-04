// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mavros_msgs:srv/ParamSetV2.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__SRV__DETAIL__PARAM_SET_V2__TRAITS_HPP_
#define MAVROS_MSGS__SRV__DETAIL__PARAM_SET_V2__TRAITS_HPP_

#include "mavros_msgs/srv/detail/param_set_v2__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'value'
#include "rcl_interfaces/msg/detail/parameter_value__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mavros_msgs::srv::ParamSetV2_Request>()
{
  return "mavros_msgs::srv::ParamSetV2_Request";
}

template<>
inline const char * name<mavros_msgs::srv::ParamSetV2_Request>()
{
  return "mavros_msgs/srv/ParamSetV2_Request";
}

template<>
struct has_fixed_size<mavros_msgs::srv::ParamSetV2_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mavros_msgs::srv::ParamSetV2_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mavros_msgs::srv::ParamSetV2_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'value'
// already included above
// #include "rcl_interfaces/msg/detail/parameter_value__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mavros_msgs::srv::ParamSetV2_Response>()
{
  return "mavros_msgs::srv::ParamSetV2_Response";
}

template<>
inline const char * name<mavros_msgs::srv::ParamSetV2_Response>()
{
  return "mavros_msgs/srv/ParamSetV2_Response";
}

template<>
struct has_fixed_size<mavros_msgs::srv::ParamSetV2_Response>
  : std::integral_constant<bool, has_fixed_size<rcl_interfaces::msg::ParameterValue>::value> {};

template<>
struct has_bounded_size<mavros_msgs::srv::ParamSetV2_Response>
  : std::integral_constant<bool, has_bounded_size<rcl_interfaces::msg::ParameterValue>::value> {};

template<>
struct is_message<mavros_msgs::srv::ParamSetV2_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mavros_msgs::srv::ParamSetV2>()
{
  return "mavros_msgs::srv::ParamSetV2";
}

template<>
inline const char * name<mavros_msgs::srv::ParamSetV2>()
{
  return "mavros_msgs/srv/ParamSetV2";
}

template<>
struct has_fixed_size<mavros_msgs::srv::ParamSetV2>
  : std::integral_constant<
    bool,
    has_fixed_size<mavros_msgs::srv::ParamSetV2_Request>::value &&
    has_fixed_size<mavros_msgs::srv::ParamSetV2_Response>::value
  >
{
};

template<>
struct has_bounded_size<mavros_msgs::srv::ParamSetV2>
  : std::integral_constant<
    bool,
    has_bounded_size<mavros_msgs::srv::ParamSetV2_Request>::value &&
    has_bounded_size<mavros_msgs::srv::ParamSetV2_Response>::value
  >
{
};

template<>
struct is_service<mavros_msgs::srv::ParamSetV2>
  : std::true_type
{
};

template<>
struct is_service_request<mavros_msgs::srv::ParamSetV2_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mavros_msgs::srv::ParamSetV2_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MAVROS_MSGS__SRV__DETAIL__PARAM_SET_V2__TRAITS_HPP_
