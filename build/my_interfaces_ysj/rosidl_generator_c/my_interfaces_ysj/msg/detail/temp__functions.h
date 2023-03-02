// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from my_interfaces_ysj:msg\Temp.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES_YSJ__MSG__DETAIL__TEMP__FUNCTIONS_H_
#define MY_INTERFACES_YSJ__MSG__DETAIL__TEMP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "my_interfaces_ysj/msg/rosidl_generator_c__visibility_control.h"

#include "my_interfaces_ysj/msg/detail/temp__struct.h"

/// Initialize msg/Temp message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_interfaces_ysj__msg__Temp
 * )) before or use
 * my_interfaces_ysj__msg__Temp__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
bool
my_interfaces_ysj__msg__Temp__init(my_interfaces_ysj__msg__Temp * msg);

/// Finalize msg/Temp message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__msg__Temp__fini(my_interfaces_ysj__msg__Temp * msg);

/// Create msg/Temp message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_interfaces_ysj__msg__Temp__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
my_interfaces_ysj__msg__Temp *
my_interfaces_ysj__msg__Temp__create();

/// Destroy msg/Temp message.
/**
 * It calls
 * my_interfaces_ysj__msg__Temp__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__msg__Temp__destroy(my_interfaces_ysj__msg__Temp * msg);


/// Initialize array of msg/Temp messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_interfaces_ysj__msg__Temp__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
bool
my_interfaces_ysj__msg__Temp__Sequence__init(my_interfaces_ysj__msg__Temp__Sequence * array, size_t size);

/// Finalize array of msg/Temp messages.
/**
 * It calls
 * my_interfaces_ysj__msg__Temp__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__msg__Temp__Sequence__fini(my_interfaces_ysj__msg__Temp__Sequence * array);

/// Create array of msg/Temp messages.
/**
 * It allocates the memory for the array and calls
 * my_interfaces_ysj__msg__Temp__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
my_interfaces_ysj__msg__Temp__Sequence *
my_interfaces_ysj__msg__Temp__Sequence__create(size_t size);

/// Destroy array of msg/Temp messages.
/**
 * It calls
 * my_interfaces_ysj__msg__Temp__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__msg__Temp__Sequence__destroy(my_interfaces_ysj__msg__Temp__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES_YSJ__MSG__DETAIL__TEMP__FUNCTIONS_H_
