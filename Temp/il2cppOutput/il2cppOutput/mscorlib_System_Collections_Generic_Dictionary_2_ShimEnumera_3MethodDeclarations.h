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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t2279;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2269;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17044_gshared (ShimEnumerator_t2279 * __this, Dictionary_2_t2269 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m17044(__this, ___host, method) (( void (*) (ShimEnumerator_t2279 *, Dictionary_2_t2269 *, const MethodInfo*))ShimEnumerator__ctor_m17044_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17045_gshared (ShimEnumerator_t2279 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m17045(__this, method) (( bool (*) (ShimEnumerator_t2279 *, const MethodInfo*))ShimEnumerator_MoveNext_m17045_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t1037  ShimEnumerator_get_Entry_m17046_gshared (ShimEnumerator_t2279 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m17046(__this, method) (( DictionaryEntry_t1037  (*) (ShimEnumerator_t2279 *, const MethodInfo*))ShimEnumerator_get_Entry_m17046_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17047_gshared (ShimEnumerator_t2279 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m17047(__this, method) (( Object_t * (*) (ShimEnumerator_t2279 *, const MethodInfo*))ShimEnumerator_get_Key_m17047_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17048_gshared (ShimEnumerator_t2279 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m17048(__this, method) (( Object_t * (*) (ShimEnumerator_t2279 *, const MethodInfo*))ShimEnumerator_get_Value_m17048_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17049_gshared (ShimEnumerator_t2279 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m17049(__this, method) (( Object_t * (*) (ShimEnumerator_t2279 *, const MethodInfo*))ShimEnumerator_get_Current_m17049_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::Reset()
extern "C" void ShimEnumerator_Reset_m17050_gshared (ShimEnumerator_t2279 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m17050(__this, method) (( void (*) (ShimEnumerator_t2279 *, const MethodInfo*))ShimEnumerator_Reset_m17050_gshared)(__this, method)
