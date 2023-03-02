// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from webots_ros2_msgs:srv\SetDifferentialWheelSpeed.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_ROS2_MSGS__SRV__DETAIL__SET_DIFFERENTIAL_WHEEL_SPEED__STRUCT_HPP_
#define WEBOTS_ROS2_MSGS__SRV__DETAIL__SET_DIFFERENTIAL_WHEEL_SPEED__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request __attribute__((deprecated))
#else
# define DEPRECATED__webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request __declspec(deprecated)
#endif

namespace webots_ros2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetDifferentialWheelSpeed_Request_
{
  using Type = SetDifferentialWheelSpeed_Request_<ContainerAllocator>;

  explicit SetDifferentialWheelSpeed_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_speed = 0.0;
      this->right_speed = 0.0;
    }
  }

  explicit SetDifferentialWheelSpeed_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_speed = 0.0;
      this->right_speed = 0.0;
    }
  }

  // field types and members
  using _left_speed_type =
    double;
  _left_speed_type left_speed;
  using _right_speed_type =
    double;
  _right_speed_type right_speed;

  // setters for named parameter idiom
  Type & set__left_speed(
    const double & _arg)
  {
    this->left_speed = _arg;
    return *this;
  }
  Type & set__right_speed(
    const double & _arg)
  {
    this->right_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request
    std::shared_ptr<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request
    std::shared_ptr<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetDifferentialWheelSpeed_Request_ & other) const
  {
    if (this->left_speed != other.left_speed) {
      return false;
    }
    if (this->right_speed != other.right_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetDifferentialWheelSpeed_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetDifferentialWheelSpeed_Request_

// alias to use template instance with default allocator
using SetDifferentialWheelSpeed_Request =
  webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace webots_ros2_msgs


#ifndef _WIN32
# define DEPRECATED__webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response __attribute__((deprecated))
#else
# define DEPRECATED__webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response __declspec(deprecated)
#endif

namespace webots_ros2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetDifferentialWheelSpeed_Response_
{
  using Type = SetDifferentialWheelSpeed_Response_<ContainerAllocator>;

  explicit SetDifferentialWheelSpeed_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SetDifferentialWheelSpeed_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response
    std::shared_ptr<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response
    std::shared_ptr<webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetDifferentialWheelSpeed_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetDifferentialWheelSpeed_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetDifferentialWheelSpeed_Response_

// alias to use template instance with default allocator
using SetDifferentialWheelSpeed_Response =
  webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace webots_ros2_msgs

namespace webots_ros2_msgs
{

namespace srv
{

struct SetDifferentialWheelSpeed
{
  using Request = webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Request;
  using Response = webots_ros2_msgs::srv::SetDifferentialWheelSpeed_Response;
};

}  // namespace srv

}  // namespace webots_ros2_msgs

#endif  // WEBOTS_ROS2_MSGS__SRV__DETAIL__SET_DIFFERENTIAL_WHEEL_SPEED__STRUCT_HPP_
