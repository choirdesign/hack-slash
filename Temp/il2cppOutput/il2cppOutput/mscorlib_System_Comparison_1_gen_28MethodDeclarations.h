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

// System.Comparison`1<UnityEngine.Vector2>
struct Comparison_1_t2111;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t218;
// System.AsyncCallback
struct AsyncCallback_t219;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Comparison`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m15027_gshared (Comparison_1_t2111 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m15027(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2111 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m15027_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector2>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15028_gshared (Comparison_1_t2111 * __this, Vector2_t65  ___x, Vector2_t65  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m15028(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2111 *, Vector2_t65 , Vector2_t65 , const MethodInfo*))Comparison_1_Invoke_m15028_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector2>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15029_gshared (Comparison_1_t2111 * __this, Vector2_t65  ___x, Vector2_t65  ___y, AsyncCallback_t219 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m15029(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2111 *, Vector2_t65 , Vector2_t65 , AsyncCallback_t219 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m15029_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15030_gshared (Comparison_1_t2111 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m15030(__this, ___result, method) (( int32_t (*) (Comparison_1_t2111 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m15030_gshared)(__this, ___result, method)
