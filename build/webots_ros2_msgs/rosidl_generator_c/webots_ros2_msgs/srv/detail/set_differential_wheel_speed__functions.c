// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from webots_ros2_msgs:srv\SetDifferentialWheelSpeed.idl
// generated code does not contain a copyright notice
#include "webots_ros2_msgs/srv/detail/set_differential_wheel_speed__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__init(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request * msg)
{
  if (!msg) {
    return false;
  }
  // left_speed
  // right_speed
  return true;
}

void
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__fini(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request * msg)
{
  if (!msg) {
    return;
  }
  // left_speed
  // right_speed
}

webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request *
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__create()
{
  webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request * msg = (webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request *)malloc(sizeof(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request));
  bool success = webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__destroy(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request * msg)
{
  if (msg) {
    webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__fini(msg);
  }
  free(msg);
}


bool
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__Sequence__init(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request * data = NULL;
  if (size) {
    data = (webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request *)calloc(size, sizeof(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__fini(&data[i - 1]);
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
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__Sequence__fini(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__fini(&array->data[i]);
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

webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__Sequence *
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__Sequence__create(size_t size)
{
  webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__Sequence * array = (webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__Sequence *)malloc(sizeof(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__Sequence__destroy(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__Sequence * array)
{
  if (array) {
    webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Request__Sequence__fini(array);
  }
  free(array);
}


bool
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__init(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__fini(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response *
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__create()
{
  webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response * msg = (webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response *)malloc(sizeof(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response));
  bool success = webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__destroy(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response * msg)
{
  if (msg) {
    webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__fini(msg);
  }
  free(msg);
}


bool
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__Sequence__init(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response * data = NULL;
  if (size) {
    data = (webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response *)calloc(size, sizeof(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__fini(&data[i - 1]);
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
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__Sequence__fini(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__fini(&array->data[i]);
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

webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__Sequence *
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__Sequence__create(size_t size)
{
  webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__Sequence * array = (webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__Sequence *)malloc(sizeof(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__Sequence__destroy(webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__Sequence * array)
{
  if (array) {
    webots_ros2_msgs__srv__SetDifferentialWheelSpeed_Response__Sequence__fini(array);
  }
  free(array);
}
