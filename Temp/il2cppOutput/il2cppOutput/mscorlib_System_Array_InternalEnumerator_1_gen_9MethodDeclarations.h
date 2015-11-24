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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_9.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11192_gshared (InternalEnumerator_1_t1841 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11192(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1841 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11192_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m11193_gshared (InternalEnumerator_1_t1841 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m11193(__this, method) (( void (*) (InternalEnumerator_1_t1841 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m11193_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11194_gshared (InternalEnumerator_1_t1841 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11194(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1841 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11194_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11195_gshared (InternalEnumerator_1_t1841 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11195(__this, method) (( void (*) (InternalEnumerator_1_t1841 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11195_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11196_gshared (InternalEnumerator_1_t1841 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11196(__this, method) (( bool (*) (InternalEnumerator_1_t1841 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11196_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::get_Current()
extern "C" DictionaryEntry_t1053  InternalEnumerator_1_get_Current_m11197_gshared (InternalEnumerator_1_t1841 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11197(__this, method) (( DictionaryEntry_t1053  (*) (InternalEnumerator_1_t1841 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11197_gshared)(__this, method)
