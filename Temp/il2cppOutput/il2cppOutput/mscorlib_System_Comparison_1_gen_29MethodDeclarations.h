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

// System.Comparison`1<UnityEngine.Vector4>
struct Comparison_1_t2128;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t225;
// System.AsyncCallback
struct AsyncCallback_t226;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Comparison`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m15224_gshared (Comparison_1_t2128 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m15224(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2128 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m15224_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector4>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15225_gshared (Comparison_1_t2128 * __this, Vector4_t312  ___x, Vector4_t312  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m15225(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2128 *, Vector4_t312 , Vector4_t312 , const MethodInfo*))Comparison_1_Invoke_m15225_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector4>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15226_gshared (Comparison_1_t2128 * __this, Vector4_t312  ___x, Vector4_t312  ___y, AsyncCallback_t226 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m15226(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2128 *, Vector4_t312 , Vector4_t312 , AsyncCallback_t226 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m15226_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15227_gshared (Comparison_1_t2128 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m15227(__this, ___result, method) (( int32_t (*) (Comparison_1_t2128 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m15227_gshared)(__this, ___result, method)
