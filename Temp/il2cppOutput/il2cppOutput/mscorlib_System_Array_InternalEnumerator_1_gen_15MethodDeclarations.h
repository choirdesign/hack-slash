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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_15.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12966_gshared (InternalEnumerator_1_t1966 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12966(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1966 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12966_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m12967_gshared (InternalEnumerator_1_t1966 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m12967(__this, method) (( void (*) (InternalEnumerator_1_t1966 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m12967_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12968_gshared (InternalEnumerator_1_t1966 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12968(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1966 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12968_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12969_gshared (InternalEnumerator_1_t1966 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12969(__this, method) (( void (*) (InternalEnumerator_1_t1966 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12969_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12970_gshared (InternalEnumerator_1_t1966 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12970(__this, method) (( bool (*) (InternalEnumerator_1_t1966 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12970_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t1965  InternalEnumerator_1_get_Current_m12971_gshared (InternalEnumerator_1_t1966 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12971(__this, method) (( KeyValuePair_2_t1965  (*) (InternalEnumerator_1_t1966 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12971_gshared)(__this, method)
