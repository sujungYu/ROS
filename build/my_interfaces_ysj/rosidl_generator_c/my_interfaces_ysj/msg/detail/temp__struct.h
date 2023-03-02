// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interfaces_ysj:msg\Temp.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES_YSJ__MSG__DETAIL__TEMP__STRUCT_H_
#define MY_INTERFACES_YSJ__MSG__DETAIL__TEMP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Temp in the package my_interfaces_ysj.
typedef struct my_interfaces_ysj__msg__Temp
{
  int64_t temperature;
} my_interfaces_ysj__msg__Temp;

// Struct for a sequence of my_interfaces_ysj__msg__Temp.
typedef struct my_interfaces_ysj__msg__Temp__Sequence
{
  my_interfaces_ysj__msg__Temp * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces_ysj__msg__Temp__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES_YSJ__MSG__DETAIL__TEMP__STRUCT_H_
