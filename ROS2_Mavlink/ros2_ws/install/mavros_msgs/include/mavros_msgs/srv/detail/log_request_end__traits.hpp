// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mavros_msgs:srv/LogRequestEnd.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__SRV__DETAIL__LOG_REQUEST_END__TRAITS_HPP_
#define MAVROS_MSGS__SRV__DETAIL__LOG_REQUEST_END__TRAITS_HPP_

#include "mavros_msgs/srv/detail/log_request_end__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mavros_msgs::srv::LogRequestEnd_Request>()
{
  return "mavros_msgs::srv::LogRequestEnd_Request";
}

template<>
inline const char * name<mavros_msgs::srv::LogRequestEnd_Request>()
{
  return "mavros_msgs/srv/LogRequestEnd_Request";
}

template<>
struct has_fixed_size<mavros_msgs::srv::LogRequestEnd_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mavros_msgs::srv::LogRequestEnd_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mavros_msgs::srv::LogRequestEnd_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mavros_msgs::srv::LogRequestEnd_Response>()
{
  return "mavros_msgs::srv::LogRequestEnd_Response";
}

template<>
inline const char * name<mavros_msgs::srv::LogRequestEnd_Response>()
{
  return "mavros_msgs/srv/LogRequestEnd_Response";
}

template<>
struct has_fixed_size<mavros_msgs::srv::LogRequestEnd_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mavros_msgs::srv::LogRequestEnd_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mavros_msgs::srv::LogRequestEnd_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mavros_msgs::srv::LogRequestEnd>()
{
  return "mavros_msgs::srv::LogRequestEnd";
}

template<>
inline const char * name<mavros_msgs::srv::LogRequestEnd>()
{
  return "mavros_msgs/srv/LogRequestEnd";
}

template<>
struct has_fixed_size<mavros_msgs::srv::LogRequestEnd>
  : std::integral_constant<
    bool,
    has_fixed_size<mavros_msgs::srv::LogRequestEnd_Request>::value &&
    has_fixed_size<mavros_msgs::srv::LogRequestEnd_Response>::value
  >
{
};

template<>
struct has_bounded_size<mavros_msgs::srv::LogRequestEnd>
  : std::integral_constant<
    bool,
    has_bounded_size<mavros_msgs::srv::LogRequestEnd_Request>::value &&
    has_bounded_size<mavros_msgs::srv::LogRequestEnd_Response>::value
  >
{
};

template<>
struct is_service<mavros_msgs::srv::LogRequestEnd>
  : std::true_type
{
};

template<>
struct is_service_request<mavros_msgs::srv::LogRequestEnd_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mavros_msgs::srv::LogRequestEnd_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MAVROS_MSGS__SRV__DETAIL__LOG_REQUEST_END__TRAITS_HPP_
