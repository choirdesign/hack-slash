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

// System.Comparison`1<System.Reflection.CustomAttributeTypedArgument>
struct Comparison_1_t2342;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t211;
// System.AsyncCallback
struct AsyncCallback_t212;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Reflection_CustomAttributeTypedArgument.h"

// System.Void System.Comparison`1<System.Reflection.CustomAttributeTypedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m17581_gshared (Comparison_1_t2342 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m17581(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2342 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m17581_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeTypedArgument>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m17582_gshared (Comparison_1_t2342 * __this, CustomAttributeTypedArgument_t1307  ___x, CustomAttributeTypedArgument_t1307  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m17582(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2342 *, CustomAttributeTypedArgument_t1307 , CustomAttributeTypedArgument_t1307 , const MethodInfo*))Comparison_1_Invoke_m17582_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Reflection.CustomAttributeTypedArgument>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m17583_gshared (Comparison_1_t2342 * __this, CustomAttributeTypedArgument_t1307  ___x, CustomAttributeTypedArgument_t1307  ___y, AsyncCallback_t212 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m17583(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2342 *, CustomAttributeTypedArgument_t1307 , CustomAttributeTypedArgument_t1307 , AsyncCallback_t212 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m17583_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeTypedArgument>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m17584_gshared (Comparison_1_t2342 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m17584(__this, ___result, method) (( int32_t (*) (Comparison_1_t2342 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m17584_gshared)(__this, ___result, method)
