// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_interfaces_ysj:msg\Temp.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES_YSJ__MSG__DETAIL__TEMP__TRAITS_HPP_
#define MY_INTERFACES_YSJ__MSG__DETAIL__TEMP__TRAITS_HPP_

#include "my_interfaces_ysj/msg/detail/temp__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_interfaces_ysj::msg::Temp>()
{
  return "my_interfaces_ysj::msg::Temp";
}

template<>
struct has_fixed_size<my_interfaces_ysj::msg::Temp>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_interfaces_ysj::msg::Temp>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_interfaces_ysj::msg::Temp>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_INTERFACES_YSJ__MSG__DETAIL__TEMP__TRAITS_HPP_
