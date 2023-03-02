// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_interfaces_ysj:srv\AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES_YSJ__SRV__DETAIL__ADD_THREE_INTS__TRAITS_HPP_
#define MY_INTERFACES_YSJ__SRV__DETAIL__ADD_THREE_INTS__TRAITS_HPP_

#include "my_interfaces_ysj/srv/detail/add_three_ints__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_interfaces_ysj::srv::AddThreeInts_Request>()
{
  return "my_interfaces_ysj::srv::AddThreeInts_Request";
}

template<>
struct has_fixed_size<my_interfaces_ysj::srv::AddThreeInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_interfaces_ysj::srv::AddThreeInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_interfaces_ysj::srv::AddThreeInts_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_interfaces_ysj::srv::AddThreeInts_Response>()
{
  return "my_interfaces_ysj::srv::AddThreeInts_Response";
}

template<>
struct has_fixed_size<my_interfaces_ysj::srv::AddThreeInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_interfaces_ysj::srv::AddThreeInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_interfaces_ysj::srv::AddThreeInts_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_interfaces_ysj::srv::AddThreeInts>()
{
  return "my_interfaces_ysj::srv::AddThreeInts";
}

template<>
struct has_fixed_size<my_interfaces_ysj::srv::AddThreeInts>
  : std::integral_constant<
    bool,
    has_fixed_size<my_interfaces_ysj::srv::AddThreeInts_Request>::value &&
    has_fixed_size<my_interfaces_ysj::srv::AddThreeInts_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_interfaces_ysj::srv::AddThreeInts>
  : std::integral_constant<
    bool,
    has_bounded_size<my_interfaces_ysj::srv::AddThreeInts_Request>::value &&
    has_bounded_size<my_interfaces_ysj::srv::AddThreeInts_Response>::value
  >
{
};

template<>
struct is_service<my_interfaces_ysj::srv::AddThreeInts>
  : std::true_type
{
};

template<>
struct is_service_request<my_interfaces_ysj::srv::AddThreeInts_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_interfaces_ysj::srv::AddThreeInts_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_INTERFACES_YSJ__SRV__DETAIL__ADD_THREE_INTS__TRAITS_HPP_
