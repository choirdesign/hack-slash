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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_103.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17804_gshared (InternalEnumerator_1_t2362 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17804(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2362 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17804_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17805_gshared (InternalEnumerator_1_t2362 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17805(__this, method) (( void (*) (InternalEnumerator_1_t2362 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17805_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17806_gshared (InternalEnumerator_1_t2362 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17806(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2362 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17806_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17807_gshared (InternalEnumerator_1_t2362 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17807(__this, method) (( void (*) (InternalEnumerator_1_t2362 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17807_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17808_gshared (InternalEnumerator_1_t2362 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17808(__this, method) (( bool (*) (InternalEnumerator_1_t2362 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17808_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
extern "C" DateTime_t525  InternalEnumerator_1_get_Current_m17809_gshared (InternalEnumerator_1_t2362 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17809(__this, method) (( DateTime_t525  (*) (InternalEnumerator_1_t2362 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17809_gshared)(__this, method)
