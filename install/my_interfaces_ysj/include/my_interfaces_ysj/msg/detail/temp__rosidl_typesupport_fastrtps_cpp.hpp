// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from my_interfaces_ysj:msg\Temp.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES_YSJ__MSG__DETAIL__TEMP__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MY_INTERFACES_YSJ__MSG__DETAIL__TEMP__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "my_interfaces_ysj/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "my_interfaces_ysj/msg/detail/temp__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace my_interfaces_ysj
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_interfaces_ysj
cdr_serialize(
  const my_interfaces_ysj::msg::Temp & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_interfaces_ysj
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_interfaces_ysj::msg::Temp & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_interfaces_ysj
get_serialized_size(
  const my_interfaces_ysj::msg::Temp & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_interfaces_ysj
max_serialized_size_Temp(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace my_interfaces_ysj

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_interfaces_ysj
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_interfaces_ysj, msg, Temp)();

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES_YSJ__MSG__DETAIL__TEMP__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
