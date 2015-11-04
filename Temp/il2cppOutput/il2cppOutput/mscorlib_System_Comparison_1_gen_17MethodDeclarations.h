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

// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t1985;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t208;
// System.AsyncCallback
struct AsyncCallback_t209;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Comparison`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m13260_gshared (Comparison_1_t1985 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m13260(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1985 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m13260_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m13261_gshared (Comparison_1_t1985 * __this, UIVertex_t219  ___x, UIVertex_t219  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m13261(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1985 *, UIVertex_t219 , UIVertex_t219 , const MethodInfo*))Comparison_1_Invoke_m13261_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UIVertex>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m13262_gshared (Comparison_1_t1985 * __this, UIVertex_t219  ___x, UIVertex_t219  ___y, AsyncCallback_t209 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m13262(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1985 *, UIVertex_t219 , UIVertex_t219 , AsyncCallback_t209 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m13262_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m13263_gshared (Comparison_1_t1985 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m13263(__this, ___result, method) (( int32_t (*) (Comparison_1_t1985 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m13263_gshared)(__this, ___result, method)
