// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from person_msgs:srv/Query.idl
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
#include "person_msgs/srv/detail/query__struct.h"
#include "person_msgs/srv/detail/query__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool person_msgs__srv__query__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("person_msgs.srv._query.Query_Request", full_classname_dest, 36) == 0);
  }
  person_msgs__srv__Query_Request * ros_message = _ros_message;
  {  // light
    PyObject * field = PyObject_GetAttrString(_pymsg, "light");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->light = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // value
    PyObject * field = PyObject_GetAttrString(_pymsg, "value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->value = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * person_msgs__srv__query__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Query_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("person_msgs.srv._query");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Query_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  person_msgs__srv__Query_Request * ros_message = (person_msgs__srv__Query_Request *)raw_ros_message;
  {  // light
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->light);
    {
      int rc = PyObject_SetAttrString(_pymessage, "light", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // value
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "value", field);
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
// #include "person_msgs/srv/detail/query__struct.h"
// already included above
// #include "person_msgs/srv/detail/query__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool person_msgs__srv__query__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("person_msgs.srv._query.Query_Response", full_classname_dest, 37) == 0);
  }
  person_msgs__srv__Query_Response * ros_message = _ros_message;
  {  // color
    PyObject * field = PyObject_GetAttrString(_pymsg, "color");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->color = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // total
    PyObject * field = PyObject_GetAttrString(_pymsg, "total");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->total = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * person_msgs__srv__query__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Query_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("person_msgs.srv._query");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Query_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  person_msgs__srv__Query_Response * ros_message = (person_msgs__srv__Query_Response *)raw_ros_message;
  {  // color
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->color);
    {
      int rc = PyObject_SetAttrString(_pymessage, "color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->total);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
