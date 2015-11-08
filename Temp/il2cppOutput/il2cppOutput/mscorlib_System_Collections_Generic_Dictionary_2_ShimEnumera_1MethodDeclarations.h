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
struct ShimEnumerator_t1982;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1973;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13068_gshared (ShimEnumerator_t1982 * __this, Dictionary_2_t1973 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13068(__this, ___host, method) (( void (*) (ShimEnumerator_t1982 *, Dictionary_2_t1973 *, const MethodInfo*))ShimEnumerator__ctor_m13068_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13069_gshared (ShimEnumerator_t1982 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13069(__this, method) (( bool (*) (ShimEnumerator_t1982 *, const MethodInfo*))ShimEnumerator_MoveNext_m13069_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1047  ShimEnumerator_get_Entry_m13070_gshared (ShimEnumerator_t1982 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13070(__this, method) (( DictionaryEntry_t1047  (*) (ShimEnumerator_t1982 *, const MethodInfo*))ShimEnumerator_get_Entry_m13070_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13071_gshared (ShimEnumerator_t1982 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13071(__this, method) (( Object_t * (*) (ShimEnumerator_t1982 *, const MethodInfo*))ShimEnumerator_get_Key_m13071_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13072_gshared (ShimEnumerator_t1982 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13072(__this, method) (( Object_t * (*) (ShimEnumerator_t1982 *, const MethodInfo*))ShimEnumerator_get_Value_m13072_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13073_gshared (ShimEnumerator_t1982 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13073(__this, method) (( Object_t * (*) (ShimEnumerator_t1982 *, const MethodInfo*))ShimEnumerator_get_Current_m13073_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m13074_gshared (ShimEnumerator_t1982 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m13074(__this, method) (( void (*) (ShimEnumerator_t1982 *, const MethodInfo*))ShimEnumerator_Reset_m13074_gshared)(__this, method)
