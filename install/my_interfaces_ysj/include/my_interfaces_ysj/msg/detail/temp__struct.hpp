// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_interfaces_ysj:msg\Temp.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES_YSJ__MSG__DETAIL__TEMP__STRUCT_HPP_
#define MY_INTERFACES_YSJ__MSG__DETAIL__TEMP__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__my_interfaces_ysj__msg__Temp __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces_ysj__msg__Temp __declspec(deprecated)
#endif

namespace my_interfaces_ysj
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Temp_
{
  using Type = Temp_<ContainerAllocator>;

  explicit Temp_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature = 0ll;
    }
  }

  explicit Temp_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature = 0ll;
    }
  }

  // field types and members
  using _temperature_type =
    int64_t;
  _temperature_type temperature;

  // setters for named parameter idiom
  Type & set__temperature(
    const int64_t & _arg)
  {
    this->temperature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces_ysj::msg::Temp_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces_ysj::msg::Temp_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces_ysj::msg::Temp_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces_ysj::msg::Temp_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces_ysj::msg::Temp_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces_ysj::msg::Temp_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces_ysj::msg::Temp_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces_ysj::msg::Temp_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces_ysj::msg::Temp_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces_ysj::msg::Temp_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces_ysj__msg__Temp
    std::shared_ptr<my_interfaces_ysj::msg::Temp_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces_ysj__msg__Temp
    std::shared_ptr<my_interfaces_ysj::msg::Temp_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Temp_ & other) const
  {
    if (this->temperature != other.temperature) {
      return false;
    }
    return true;
  }
  bool operator!=(const Temp_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Temp_

// alias to use template instance with default allocator
using Temp =
  my_interfaces_ysj::msg::Temp_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_interfaces_ysj

#endif  // MY_INTERFACES_YSJ__MSG__DETAIL__TEMP__STRUCT_HPP_
