// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from communication:srv/RobotReset.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "communication/srv/detail/robot_reset__struct.h"
#include "communication/srv/detail/robot_reset__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool communication__srv__robot_reset__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("communication.srv._robot_reset.RobotReset_Request", full_classname_dest, 49) == 0);
  }
  communication__srv__RobotReset_Request * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // reset_step
    PyObject * field = PyObject_GetAttrString(_pymsg, "reset_step");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reset_step = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // release
    PyObject * field = PyObject_GetAttrString(_pymsg, "release");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->release = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * communication__srv__robot_reset__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobotReset_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("communication.srv._robot_reset");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobotReset_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  communication__srv__RobotReset_Request * ros_message = (communication__srv__RobotReset_Request *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reset_step
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->reset_step);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reset_step", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // release
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->release ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "release", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "communication/srv/detail/robot_reset__struct.h"
// already included above
// #include "communication/srv/detail/robot_reset__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool communication__srv__robot_reset__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("communication.srv._robot_reset.RobotReset_Response", full_classname_dest, 50) == 0);
  }
  communication__srv__RobotReset_Response * ros_message = _ros_message;
  {  // is_success
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_success = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * communication__srv__robot_reset__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobotReset_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("communication.srv._robot_reset");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobotReset_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  communication__srv__RobotReset_Response * ros_message = (communication__srv__RobotReset_Response *)raw_ros_message;
  {  // is_success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}