﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t96;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t218;
// System.AsyncCallback
struct AsyncCallback_t219;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m1663_gshared (Comparison_1_t96 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1663(__this, ___object, ___method, method) (( void (*) (Comparison_1_t96 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1663_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m11092_gshared (Comparison_1_t96 * __this, RaycastResult_t127  ___x, RaycastResult_t127  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m11092(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t96 *, RaycastResult_t127 , RaycastResult_t127 , const MethodInfo*))Comparison_1_Invoke_m11092_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m11093_gshared (Comparison_1_t96 * __this, RaycastResult_t127  ___x, RaycastResult_t127  ___y, AsyncCallback_t219 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m11093(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t96 *, RaycastResult_t127 , RaycastResult_t127 , AsyncCallback_t219 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m11093_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m11094_gshared (Comparison_1_t96 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m11094(__this, ___result, method) (( int32_t (*) (Comparison_1_t96 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m11094_gshared)(__this, ___result, method)
