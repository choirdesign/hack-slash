#pragma once

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
struct ShimEnumerator_t1896;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1885;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12077_gshared (ShimEnumerator_t1896 * __this, Dictionary_2_t1885 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12077(__this, ___host, method) (( void (*) (ShimEnumerator_t1896 *, Dictionary_2_t1885 *, const MethodInfo*))ShimEnumerator__ctor_m12077_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12078_gshared (ShimEnumerator_t1896 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12078(__this, method) (( bool (*) (ShimEnumerator_t1896 *, const MethodInfo*))ShimEnumerator_MoveNext_m12078_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1037  ShimEnumerator_get_Entry_m12079_gshared (ShimEnumerator_t1896 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12079(__this, method) (( DictionaryEntry_t1037  (*) (ShimEnumerator_t1896 *, const MethodInfo*))ShimEnumerator_get_Entry_m12079_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12080_gshared (ShimEnumerator_t1896 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12080(__this, method) (( Object_t * (*) (ShimEnumerator_t1896 *, const MethodInfo*))ShimEnumerator_get_Key_m12080_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12081_gshared (ShimEnumerator_t1896 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12081(__this, method) (( Object_t * (*) (ShimEnumerator_t1896 *, const MethodInfo*))ShimEnumerator_get_Value_m12081_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12082_gshared (ShimEnumerator_t1896 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12082(__this, method) (( Object_t * (*) (ShimEnumerator_t1896 *, const MethodInfo*))ShimEnumerator_get_Current_m12082_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m12083_gshared (ShimEnumerator_t1896 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m12083(__this, method) (( void (*) (ShimEnumerator_t1896 *, const MethodInfo*))ShimEnumerator_Reset_m12083_gshared)(__this, method)
