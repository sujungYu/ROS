// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from webots_ros2_msgs:srv\SetDifferentialWheelSpeed.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_ROS2_MSGS__SRV__DETAIL__SET_DIFFERENTIAL_WHEEL_SPEED__TRAITS_HPP_
#define WEBOTS_ROS2_MSGS__SRV__DETAIL__SET_DIFFERENTIAL_WHEEL_SPEED__TRAITS_HPP_

#include "webots_ros2_msgs/srv/detail/set_differential_wheel_speed__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request>()
{
  return "webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request";
}

template<>
struct has_fixed_size<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Response>()
{
  return "webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Response";
}

template<>
struct has_fixed_size<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<webots_ros2_msgs::srv::SetDifferentialWheelSpeed>()
{
  return "webots_ros2_msgs::srv::SetDifferentialWheelSpeed";
}

template<>
struct has_fixed_size<webots_ros2_msgs::srv::SetDifferentialWheelSpeed>
  : std::integral_constant<
    bool,
    has_fixed_size<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request>::value &&
    has_fixed_size<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Response>::value
  >
{
};

template<>
struct has_bounded_size<webots_ros2_msgs::srv::SetDifferentialWheelSpeed>
  : std::integral_constant<
    bool,
    has_bounded_size<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request>::value &&
    has_bounded_size<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Response>::value
  >
{
};

template<>
struct is_service<webots_ros2_msgs::srv::SetDifferentialWheelSpeed>
  : std::true_type
{
};

template<>
struct is_service_request<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request>
  : std::true_type
{
};

template<>
struct is_service_response<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // WEBOTS_ROS2_MSGS__SRV__DETAIL__SET_DIFFERENTIAL_WHEEL_SPEED__TRAITS_HPP_
