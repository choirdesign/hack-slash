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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t1894;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1883;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12063_gshared (ShimEnumerator_t1894 * __this, Dictionary_2_t1883 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12063(__this, ___host, method) (( void (*) (ShimEnumerator_t1894 *, Dictionary_2_t1883 *, const MethodInfo*))ShimEnumerator__ctor_m12063_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12064_gshared (ShimEnumerator_t1894 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12064(__this, method) (( bool (*) (ShimEnumerator_t1894 *, const MethodInfo*))ShimEnumerator_MoveNext_m12064_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1035  ShimEnumerator_get_Entry_m12065_gshared (ShimEnumerator_t1894 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12065(__this, method) (( DictionaryEntry_t1035  (*) (ShimEnumerator_t1894 *, const MethodInfo*))ShimEnumerator_get_Entry_m12065_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12066_gshared (ShimEnumerator_t1894 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12066(__this, method) (( Object_t * (*) (ShimEnumerator_t1894 *, const MethodInfo*))ShimEnumerator_get_Key_m12066_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12067_gshared (ShimEnumerator_t1894 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12067(__this, method) (( Object_t * (*) (ShimEnumerator_t1894 *, const MethodInfo*))ShimEnumerator_get_Value_m12067_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12068_gshared (ShimEnumerator_t1894 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12068(__this, method) (( Object_t * (*) (ShimEnumerator_t1894 *, const MethodInfo*))ShimEnumerator_get_Current_m12068_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m12069_gshared (ShimEnumerator_t1894 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m12069(__this, method) (( void (*) (ShimEnumerator_t1894 *, const MethodInfo*))ShimEnumerator_Reset_m12069_gshared)(__this, method)
