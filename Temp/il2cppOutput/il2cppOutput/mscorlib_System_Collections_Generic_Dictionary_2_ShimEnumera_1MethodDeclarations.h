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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t1993;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1984;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13196_gshared (ShimEnumerator_t1993 * __this, Dictionary_2_t1984 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13196(__this, ___host, method) (( void (*) (ShimEnumerator_t1993 *, Dictionary_2_t1984 *, const MethodInfo*))ShimEnumerator__ctor_m13196_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13197_gshared (ShimEnumerator_t1993 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13197(__this, method) (( bool (*) (ShimEnumerator_t1993 *, const MethodInfo*))ShimEnumerator_MoveNext_m13197_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1053  ShimEnumerator_get_Entry_m13198_gshared (ShimEnumerator_t1993 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13198(__this, method) (( DictionaryEntry_t1053  (*) (ShimEnumerator_t1993 *, const MethodInfo*))ShimEnumerator_get_Entry_m13198_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13199_gshared (ShimEnumerator_t1993 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13199(__this, method) (( Object_t * (*) (ShimEnumerator_t1993 *, const MethodInfo*))ShimEnumerator_get_Key_m13199_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13200_gshared (ShimEnumerator_t1993 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13200(__this, method) (( Object_t * (*) (ShimEnumerator_t1993 *, const MethodInfo*))ShimEnumerator_get_Value_m13200_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13201_gshared (ShimEnumerator_t1993 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13201(__this, method) (( Object_t * (*) (ShimEnumerator_t1993 *, const MethodInfo*))ShimEnumerator_get_Current_m13201_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m13202_gshared (ShimEnumerator_t1993 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m13202(__this, method) (( void (*) (ShimEnumerator_t1993 *, const MethodInfo*))ShimEnumerator_Reset_m13202_gshared)(__this, method)
