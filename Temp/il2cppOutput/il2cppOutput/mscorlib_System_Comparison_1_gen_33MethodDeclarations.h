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

// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2180;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t211;
// System.AsyncCallback
struct AsyncCallback_t212;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m15850_gshared (Comparison_1_t2180 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m15850(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2180 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m15850_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15851_gshared (Comparison_1_t2180 * __this, UICharInfo_t377  ___x, UICharInfo_t377  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m15851(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2180 *, UICharInfo_t377 , UICharInfo_t377 , const MethodInfo*))Comparison_1_Invoke_m15851_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15852_gshared (Comparison_1_t2180 * __this, UICharInfo_t377  ___x, UICharInfo_t377  ___y, AsyncCallback_t212 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m15852(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2180 *, UICharInfo_t377 , UICharInfo_t377 , AsyncCallback_t212 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m15852_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15853_gshared (Comparison_1_t2180 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m15853(__this, ___result, method) (( int32_t (*) (Comparison_1_t2180 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m15853_gshared)(__this, ___result, method)
