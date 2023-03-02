// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_interfaces_ysj:msg\Temp.idl
// generated code does not contain a copyright notice
#include "my_interfaces_ysj/msg/detail/temp__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_interfaces_ysj/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_interfaces_ysj/msg/detail/temp__struct.h"
#include "my_interfaces_ysj/msg/detail/temp__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Temp__ros_msg_type = my_interfaces_ysj__msg__Temp;

static bool _Temp__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Temp__ros_msg_type * ros_message = static_cast<const _Temp__ros_msg_type *>(untyped_ros_message);
  // Field name: temperature
  {
    cdr << ros_message->temperature;
  }

  return true;
}

static bool _Temp__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Temp__ros_msg_type * ros_message = static_cast<_Temp__ros_msg_type *>(untyped_ros_message);
  // Field name: temperature
  {
    cdr >> ros_message->temperature;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_interfaces_ysj
size_t get_serialized_size_my_interfaces_ysj__msg__Temp(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Temp__ros_msg_type * ros_message = static_cast<const _Temp__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name temperature
  {
    size_t item_size = sizeof(ros_message->temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Temp__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_interfaces_ysj__msg__Temp(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_interfaces_ysj
size_t max_serialized_size_my_interfaces_ysj__msg__Temp(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Temp__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_my_interfaces_ysj__msg__Temp(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Temp = {
  "my_interfaces_ysj::msg",
  "Temp",
  _Temp__cdr_serialize,
  _Temp__cdr_deserialize,
  _Temp__get_serialized_size,
  _Temp__max_serialized_size
};

static rosidl_message_type_support_t _Temp__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Temp,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_interfaces_ysj, msg, Temp)() {
  return &_Temp__type_support;
}

#if defined(__cplusplus)
}
#endif
