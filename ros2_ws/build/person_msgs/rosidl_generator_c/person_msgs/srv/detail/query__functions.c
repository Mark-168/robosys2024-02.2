// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from person_msgs:srv/Query.idl
// generated code does not contain a copyright notice
#include "person_msgs/srv/detail/query__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
person_msgs__srv__Query_Request__init(person_msgs__srv__Query_Request * msg)
{
  if (!msg) {
    return false;
  }
  // light
  // value
  return true;
}

void
person_msgs__srv__Query_Request__fini(person_msgs__srv__Query_Request * msg)
{
  if (!msg) {
    return;
  }
  // light
  // value
}

bool
person_msgs__srv__Query_Request__are_equal(const person_msgs__srv__Query_Request * lhs, const person_msgs__srv__Query_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // light
  if (lhs->light != rhs->light) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
person_msgs__srv__Query_Request__copy(
  const person_msgs__srv__Query_Request * input,
  person_msgs__srv__Query_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // light
  output->light = input->light;
  // value
  output->value = input->value;
  return true;
}

person_msgs__srv__Query_Request *
person_msgs__srv__Query_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  person_msgs__srv__Query_Request * msg = (person_msgs__srv__Query_Request *)allocator.allocate(sizeof(person_msgs__srv__Query_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(person_msgs__srv__Query_Request));
  bool success = person_msgs__srv__Query_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
person_msgs__srv__Query_Request__destroy(person_msgs__srv__Query_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    person_msgs__srv__Query_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
person_msgs__srv__Query_Request__Sequence__init(person_msgs__srv__Query_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  person_msgs__srv__Query_Request * data = NULL;

  if (size) {
    data = (person_msgs__srv__Query_Request *)allocator.zero_allocate(size, sizeof(person_msgs__srv__Query_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = person_msgs__srv__Query_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        person_msgs__srv__Query_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
person_msgs__srv__Query_Request__Sequence__fini(person_msgs__srv__Query_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      person_msgs__srv__Query_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

person_msgs__srv__Query_Request__Sequence *
person_msgs__srv__Query_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  person_msgs__srv__Query_Request__Sequence * array = (person_msgs__srv__Query_Request__Sequence *)allocator.allocate(sizeof(person_msgs__srv__Query_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = person_msgs__srv__Query_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
person_msgs__srv__Query_Request__Sequence__destroy(person_msgs__srv__Query_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    person_msgs__srv__Query_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
person_msgs__srv__Query_Request__Sequence__are_equal(const person_msgs__srv__Query_Request__Sequence * lhs, const person_msgs__srv__Query_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!person_msgs__srv__Query_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
person_msgs__srv__Query_Request__Sequence__copy(
  const person_msgs__srv__Query_Request__Sequence * input,
  person_msgs__srv__Query_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(person_msgs__srv__Query_Request);
    person_msgs__srv__Query_Request * data =
      (person_msgs__srv__Query_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!person_msgs__srv__Query_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          person_msgs__srv__Query_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!person_msgs__srv__Query_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
person_msgs__srv__Query_Response__init(person_msgs__srv__Query_Response * msg)
{
  if (!msg) {
    return false;
  }
  // color
  // total
  return true;
}

void
person_msgs__srv__Query_Response__fini(person_msgs__srv__Query_Response * msg)
{
  if (!msg) {
    return;
  }
  // color
  // total
}

bool
person_msgs__srv__Query_Response__are_equal(const person_msgs__srv__Query_Response * lhs, const person_msgs__srv__Query_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // color
  if (lhs->color != rhs->color) {
    return false;
  }
  // total
  if (lhs->total != rhs->total) {
    return false;
  }
  return true;
}

bool
person_msgs__srv__Query_Response__copy(
  const person_msgs__srv__Query_Response * input,
  person_msgs__srv__Query_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // color
  output->color = input->color;
  // total
  output->total = input->total;
  return true;
}

person_msgs__srv__Query_Response *
person_msgs__srv__Query_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  person_msgs__srv__Query_Response * msg = (person_msgs__srv__Query_Response *)allocator.allocate(sizeof(person_msgs__srv__Query_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(person_msgs__srv__Query_Response));
  bool success = person_msgs__srv__Query_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
person_msgs__srv__Query_Response__destroy(person_msgs__srv__Query_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    person_msgs__srv__Query_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
person_msgs__srv__Query_Response__Sequence__init(person_msgs__srv__Query_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  person_msgs__srv__Query_Response * data = NULL;

  if (size) {
    data = (person_msgs__srv__Query_Response *)allocator.zero_allocate(size, sizeof(person_msgs__srv__Query_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = person_msgs__srv__Query_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        person_msgs__srv__Query_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
person_msgs__srv__Query_Response__Sequence__fini(person_msgs__srv__Query_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      person_msgs__srv__Query_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

person_msgs__srv__Query_Response__Sequence *
person_msgs__srv__Query_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  person_msgs__srv__Query_Response__Sequence * array = (person_msgs__srv__Query_Response__Sequence *)allocator.allocate(sizeof(person_msgs__srv__Query_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = person_msgs__srv__Query_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
person_msgs__srv__Query_Response__Sequence__destroy(person_msgs__srv__Query_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    person_msgs__srv__Query_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
person_msgs__srv__Query_Response__Sequence__are_equal(const person_msgs__srv__Query_Response__Sequence * lhs, const person_msgs__srv__Query_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!person_msgs__srv__Query_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
person_msgs__srv__Query_Response__Sequence__copy(
  const person_msgs__srv__Query_Response__Sequence * input,
  person_msgs__srv__Query_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(person_msgs__srv__Query_Response);
    person_msgs__srv__Query_Response * data =
      (person_msgs__srv__Query_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!person_msgs__srv__Query_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          person_msgs__srv__Query_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!person_msgs__srv__Query_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
