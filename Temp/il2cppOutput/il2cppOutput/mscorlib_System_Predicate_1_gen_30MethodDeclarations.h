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

// System.Predicate`1<UnityEngine.Vector4>
struct Predicate_1_t2125;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t225;
// System.AsyncCallback
struct AsyncCallback_t226;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Predicate`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m15214_gshared (Predicate_1_t2125 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m15214(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2125 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m15214_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15215_gshared (Predicate_1_t2125 * __this, Vector4_t312  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m15215(__this, ___obj, method) (( bool (*) (Predicate_1_t2125 *, Vector4_t312 , const MethodInfo*))Predicate_1_Invoke_m15215_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector4>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m15216_gshared (Predicate_1_t2125 * __this, Vector4_t312  ___obj, AsyncCallback_t226 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m15216(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2125 *, Vector4_t312 , AsyncCallback_t226 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m15216_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15217_gshared (Predicate_1_t2125 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m15217(__this, ___result, method) (( bool (*) (Predicate_1_t2125 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m15217_gshared)(__this, ___result, method)
