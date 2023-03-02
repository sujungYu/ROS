// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces_ysj:msg\Temp.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES_YSJ__MSG__DETAIL__TEMP__BUILDER_HPP_
#define MY_INTERFACES_YSJ__MSG__DETAIL__TEMP__BUILDER_HPP_

#include "my_interfaces_ysj/msg/detail/temp__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace my_interfaces_ysj
{

namespace msg
{

namespace builder
{

class Init_Temp_temperature
{
public:
  Init_Temp_temperature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces_ysj::msg::Temp temperature(::my_interfaces_ysj::msg::Temp::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces_ysj::msg::Temp msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces_ysj::msg::Temp>()
{
  return my_interfaces_ysj::msg::builder::Init_Temp_temperature();
}

}  // namespace my_interfaces_ysj

#endif  // MY_INTERFACES_YSJ__MSG__DETAIL__TEMP__BUILDER_HPP_
