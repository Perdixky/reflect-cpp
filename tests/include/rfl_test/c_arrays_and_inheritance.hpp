#pragma once

#include "config.hpp"

#if REFLECTCPP_MODULES
import rfl.c_arrays_and_inheritance;
#else
#ifndef REFLECT_CPP_C_ARRAYS_OR_INHERITANCE
#define REFLECT_CPP_C_ARRAYS_OR_INHERITANCE
#endif
#include <rfl.hpp>
#include <rfl/json.hpp>
#include <rfl/num_fields.hpp>
#endif
