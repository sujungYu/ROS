// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from webots_ros2_msgs:srv\SetDifferentialWheelSpeed.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_ROS2_MSGS__SRV__DETAIL__SET_DIFFERENTIAL_WHEEL_SPEED__STRUCT_H_
#define WEBOTS_ROS2_MSGS__SRV__DETAIL__SET_DIFFERENTIAL_WHEEL_SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SetDifferentialWheelSpeed in the package webots_ros2_msgs.
typedef struct webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request
{
  double left_speed;
  double right_speed;
} webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request;

// Struct for a sequence of webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request.
typedef struct webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__Sequence
{
  webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SetDifferentialWheelSpeed in the package webots_ros2_msgs.
typedef struct webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response
{
  uint8_t structure_needs_at_least_one_member;
} webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response;

// Struct for a sequence of webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response.
typedef struct webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__Sequence
{
  webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEBOTS_ROS2_MSGS__SRV__DETAIL__SET_DIFFERENTIAL_WHEEL_SPEED__STRUCT_H_
