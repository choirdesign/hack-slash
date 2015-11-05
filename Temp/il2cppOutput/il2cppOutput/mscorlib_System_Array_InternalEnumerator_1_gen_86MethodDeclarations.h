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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_86.h"
#include "mscorlib_System_Reflection_Emit_ILTokenInfo.h"

// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17374_gshared (InternalEnumerator_1_t2323 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17374(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2323 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17374_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17375_gshared (InternalEnumerator_1_t2323 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17375(__this, method) (( void (*) (InternalEnumerator_1_t2323 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17375_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17376_gshared (InternalEnumerator_1_t2323 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17376(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2323 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17376_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17377_gshared (InternalEnumerator_1_t2323 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17377(__this, method) (( void (*) (InternalEnumerator_1_t2323 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17377_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17378_gshared (InternalEnumerator_1_t2323 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17378(__this, method) (( bool (*) (InternalEnumerator_1_t2323 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17378_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::get_Current()
extern "C" ILTokenInfo_t1260  InternalEnumerator_1_get_Current_m17379_gshared (InternalEnumerator_1_t2323 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17379(__this, method) (( ILTokenInfo_t1260  (*) (InternalEnumerator_1_t2323 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17379_gshared)(__this, method)
