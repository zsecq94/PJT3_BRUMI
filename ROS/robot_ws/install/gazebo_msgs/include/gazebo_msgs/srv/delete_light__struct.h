// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:srv/DeleteLight.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DELETE_LIGHT__STRUCT_H_
#define GAZEBO_MSGS__SRV__DELETE_LIGHT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'light_name'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/DeleteLight in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__DeleteLight_Request
{
  rosidl_generator_c__String light_name;
} gazebo_msgs__srv__DeleteLight_Request;

// Struct for a sequence of gazebo_msgs__srv__DeleteLight_Request.
typedef struct gazebo_msgs__srv__DeleteLight_Request__Sequence
{
  gazebo_msgs__srv__DeleteLight_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__DeleteLight_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status_message'
// already included above
// #include "rosidl_generator_c/string.h"

// Struct defined in srv/DeleteLight in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__DeleteLight_Response
{
  bool success;
  rosidl_generator_c__String status_message;
} gazebo_msgs__srv__DeleteLight_Response;

// Struct for a sequence of gazebo_msgs__srv__DeleteLight_Response.
typedef struct gazebo_msgs__srv__DeleteLight_Response__Sequence
{
  gazebo_msgs__srv__DeleteLight_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__DeleteLight_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__SRV__DELETE_LIGHT__STRUCT_H_
