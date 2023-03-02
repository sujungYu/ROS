// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from webots_ros2_msgs:srv\SetDifferentialWheelSpeed.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_ROS2_MSGS__SRV__DETAIL__SET_DIFFERENTIAL_WHEEL_SPEED__BUILDER_HPP_
#define WEBOTS_ROS2_MSGS__SRV__DETAIL__SET_DIFFERENTIAL_WHEEL_SPEED__BUILDER_HPP_

#include "webots_ros2_msgs/srv/detail/set_differential_wheel_speed__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace webots_ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_SetDifferentialWheelSpeed_Request_right_speed
{
public:
  explicit Init_SetDifferentialWheelSpeed_Request_right_speed(::webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request & msg)
  : msg_(msg)
  {}
  ::webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request right_speed(::webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request::_right_speed_type arg)
  {
    msg_.right_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request msg_;
};

class Init_SetDifferentialWheelSpeed_Request_left_speed
{
public:
  Init_SetDifferentialWheelSpeed_Request_left_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetDifferentialWheelSpeed_Request_right_speed left_speed(::webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request::_left_speed_type arg)
  {
    msg_.left_speed = std::move(arg);
    return Init_SetDifferentialWheelSpeed_Request_right_speed(msg_);
  }

private:
  ::webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request>()
{
  return webots_ros2_msgs::srv::builder::Init_SetDifferentialWheelSpeed_Request_left_speed();
}

}  // namespace webots_ros2_msgs


namespace webots_ros2_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Response>()
{
  return ::webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace webots_ros2_msgs

#endif  // WEBOTS_ROS2_MSGS__SRV__DETAIL__SET_DIFFERENTIAL_WHEEL_SPEED__BUILDER_HPP_
