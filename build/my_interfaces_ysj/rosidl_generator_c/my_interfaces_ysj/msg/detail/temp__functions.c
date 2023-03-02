// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_interfaces_ysj:msg\Temp.idl
// generated code does not contain a copyright notice
#include "my_interfaces_ysj/msg/detail/temp__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
my_interfaces_ysj__msg__Temp__init(my_interfaces_ysj__msg__Temp * msg)
{
  if (!msg) {
    return false;
  }
  // temperature
  return true;
}

void
my_interfaces_ysj__msg__Temp__fini(my_interfaces_ysj__msg__Temp * msg)
{
  if (!msg) {
    return;
  }
  // temperature
}

my_interfaces_ysj__msg__Temp *
my_interfaces_ysj__msg__Temp__create()
{
  my_interfaces_ysj__msg__Temp * msg = (my_interfaces_ysj__msg__Temp *)malloc(sizeof(my_interfaces_ysj__msg__Temp));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_interfaces_ysj__msg__Temp));
  bool success = my_interfaces_ysj__msg__Temp__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
my_interfaces_ysj__msg__Temp__destroy(my_interfaces_ysj__msg__Temp * msg)
{
  if (msg) {
    my_interfaces_ysj__msg__Temp__fini(msg);
  }
  free(msg);
}


bool
my_interfaces_ysj__msg__Temp__Sequence__init(my_interfaces_ysj__msg__Temp__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  my_interfaces_ysj__msg__Temp * data = NULL;
  if (size) {
    data = (my_interfaces_ysj__msg__Temp *)calloc(size, sizeof(my_interfaces_ysj__msg__Temp));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_interfaces_ysj__msg__Temp__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_interfaces_ysj__msg__Temp__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_interfaces_ysj__msg__Temp__Sequence__fini(my_interfaces_ysj__msg__Temp__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_interfaces_ysj__msg__Temp__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_interfaces_ysj__msg__Temp__Sequence *
my_interfaces_ysj__msg__Temp__Sequence__create(size_t size)
{
  my_interfaces_ysj__msg__Temp__Sequence * array = (my_interfaces_ysj__msg__Temp__Sequence *)malloc(sizeof(my_interfaces_ysj__msg__Temp__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = my_interfaces_ysj__msg__Temp__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
my_interfaces_ysj__msg__Temp__Sequence__destroy(my_interfaces_ysj__msg__Temp__Sequence * array)
{
  if (array) {
    my_interfaces_ysj__msg__Temp__Sequence__fini(array);
  }
  free(array);
}
