﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Object
struct Object_t78;
struct Object_t78_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"

// UnityEngine.Object UnityEngine.Resources::Load(System.String)
extern "C" Object_t78 * Resources_Load_m269 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C" Object_t78 * Resources_Load_m2615 (Object_t * __this /* static, unused */, String_t* ___path, Type_t * ___systemTypeInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
