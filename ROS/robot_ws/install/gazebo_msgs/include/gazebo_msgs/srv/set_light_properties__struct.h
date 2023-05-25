// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:srv/SetLightProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__SET_LIGHT_PROPERTIES__STRUCT_H_
#define GAZEBO_MSGS__SRV__SET_LIGHT_PROPERTIES__STRUCT_H_

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
// Member 'diffuse'
#include "std_msgs/msg/color_rgba__struct.h"

// Struct defined in srv/SetLightProperties in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__SetLightProperties_Request
{
  rosidl_generator_c__String light_name;
  std_msgs__msg__ColorRGBA diffuse;
  double attenuation_constant;
  double attenuation_linear;
  double attenuation_quadratic;
} gazebo_msgs__srv__SetLightProperties_Request;

// Struct for a sequence of gazebo_msgs__srv__SetLightProperties_Request.
typedef struct gazebo_msgs__srv__SetLightProperties_Request__Sequence
{
  gazebo_msgs__srv__SetLightProperties_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__SetLightProperties_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status_message'
// already included above
// #include "rosidl_generator_c/string.h"

// Struct defined in srv/SetLightProperties in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__SetLightProperties_Response
{
  bool success;
  rosidl_generator_c__String status_message;
} gazebo_msgs__srv__SetLightProperties_Response;

// Struct for a sequence of gazebo_msgs__srv__SetLightProperties_Response.
typedef struct gazebo_msgs__srv__SetLightProperties_Response__Sequence
{
  gazebo_msgs__srv__SetLightProperties_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__SetLightProperties_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__SRV__SET_LIGHT_PROPERTIES__STRUCT_H_
