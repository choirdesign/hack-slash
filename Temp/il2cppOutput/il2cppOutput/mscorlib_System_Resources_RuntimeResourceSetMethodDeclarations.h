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

// System.Resources.RuntimeResourceSet
struct RuntimeResourceSet_t1344;
// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t1243;
// System.IO.Stream
struct Stream_t787;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Resources.RuntimeResourceSet::.ctor(System.IO.UnmanagedMemoryStream)
extern "C" void RuntimeResourceSet__ctor_m8338 (RuntimeResourceSet_t1344 * __this, UnmanagedMemoryStream_t1243 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.RuntimeResourceSet::.ctor(System.IO.Stream)
extern "C" void RuntimeResourceSet__ctor_m8339 (RuntimeResourceSet_t1344 * __this, Stream_t787 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.RuntimeResourceSet::.ctor(System.String)
extern "C" void RuntimeResourceSet__ctor_m8340 (RuntimeResourceSet_t1344 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.RuntimeResourceSet::GetObject(System.String)
extern "C" Object_t * RuntimeResourceSet_GetObject_m8341 (RuntimeResourceSet_t1344 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.RuntimeResourceSet::GetObject(System.String,System.Boolean)
extern "C" Object_t * RuntimeResourceSet_GetObject_m8342 (RuntimeResourceSet_t1344 * __this, String_t* ___name, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.RuntimeResourceSet::CloneDisposableObjectIfPossible(System.Object)
extern "C" Object_t * RuntimeResourceSet_CloneDisposableObjectIfPossible_m8343 (RuntimeResourceSet_t1344 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
