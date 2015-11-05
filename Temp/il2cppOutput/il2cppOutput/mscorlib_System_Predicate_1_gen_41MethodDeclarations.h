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

// System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>
struct Predicate_1_t2350;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t211;
// System.AsyncCallback
struct AsyncCallback_t212;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgument.h"

// System.Void System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m17738_gshared (Predicate_1_t2350 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m17738(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2350 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m17738_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m17739_gshared (Predicate_1_t2350 * __this, CustomAttributeNamedArgument_t1306  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m17739(__this, ___obj, method) (( bool (*) (Predicate_1_t2350 *, CustomAttributeNamedArgument_t1306 , const MethodInfo*))Predicate_1_Invoke_m17739_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m17740_gshared (Predicate_1_t2350 * __this, CustomAttributeNamedArgument_t1306  ___obj, AsyncCallback_t212 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m17740(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2350 *, CustomAttributeNamedArgument_t1306 , AsyncCallback_t212 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m17740_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m17741_gshared (Predicate_1_t2350 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m17741(__this, ___result, method) (( bool (*) (Predicate_1_t2350 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m17741_gshared)(__this, ___result, method)
