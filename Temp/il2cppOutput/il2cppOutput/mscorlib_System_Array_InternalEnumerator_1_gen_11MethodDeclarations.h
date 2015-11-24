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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_11.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12311_gshared (InternalEnumerator_1_t1925 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12311(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1925 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12311_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m12312_gshared (InternalEnumerator_1_t1925 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m12312(__this, method) (( void (*) (InternalEnumerator_1_t1925 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m12312_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12313_gshared (InternalEnumerator_1_t1925 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12313(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1925 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12313_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12314_gshared (InternalEnumerator_1_t1925 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12314(__this, method) (( void (*) (InternalEnumerator_1_t1925 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12314_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12315_gshared (InternalEnumerator_1_t1925 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12315(__this, method) (( bool (*) (InternalEnumerator_1_t1925 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12315_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t1924  InternalEnumerator_1_get_Current_m12316_gshared (InternalEnumerator_1_t1925 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12316(__this, method) (( KeyValuePair_2_t1924  (*) (InternalEnumerator_1_t1925 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12316_gshared)(__this, method)
