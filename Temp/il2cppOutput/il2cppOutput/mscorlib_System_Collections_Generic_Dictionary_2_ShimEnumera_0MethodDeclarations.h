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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t1922;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1912;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12394_gshared (ShimEnumerator_t1922 * __this, Dictionary_2_t1912 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12394(__this, ___host, method) (( void (*) (ShimEnumerator_t1922 *, Dictionary_2_t1912 *, const MethodInfo*))ShimEnumerator__ctor_m12394_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12395_gshared (ShimEnumerator_t1922 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12395(__this, method) (( bool (*) (ShimEnumerator_t1922 *, const MethodInfo*))ShimEnumerator_MoveNext_m12395_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1037  ShimEnumerator_get_Entry_m12396_gshared (ShimEnumerator_t1922 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12396(__this, method) (( DictionaryEntry_t1037  (*) (ShimEnumerator_t1922 *, const MethodInfo*))ShimEnumerator_get_Entry_m12396_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12397_gshared (ShimEnumerator_t1922 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12397(__this, method) (( Object_t * (*) (ShimEnumerator_t1922 *, const MethodInfo*))ShimEnumerator_get_Key_m12397_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12398_gshared (ShimEnumerator_t1922 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12398(__this, method) (( Object_t * (*) (ShimEnumerator_t1922 *, const MethodInfo*))ShimEnumerator_get_Value_m12398_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12399_gshared (ShimEnumerator_t1922 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12399(__this, method) (( Object_t * (*) (ShimEnumerator_t1922 *, const MethodInfo*))ShimEnumerator_get_Current_m12399_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m12400_gshared (ShimEnumerator_t1922 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m12400(__this, method) (( void (*) (ShimEnumerator_t1922 *, const MethodInfo*))ShimEnumerator_Reset_m12400_gshared)(__this, method)
