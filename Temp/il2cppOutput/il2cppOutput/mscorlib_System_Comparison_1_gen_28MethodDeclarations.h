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

// System.Comparison`1<UnityEngine.Vector2>
struct Comparison_1_t2099;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t208;
// System.AsyncCallback
struct AsyncCallback_t209;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Comparison`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m14969_gshared (Comparison_1_t2099 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m14969(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2099 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m14969_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector2>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14970_gshared (Comparison_1_t2099 * __this, Vector2_t55  ___x, Vector2_t55  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m14970(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2099 *, Vector2_t55 , Vector2_t55 , const MethodInfo*))Comparison_1_Invoke_m14970_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector2>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14971_gshared (Comparison_1_t2099 * __this, Vector2_t55  ___x, Vector2_t55  ___y, AsyncCallback_t209 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m14971(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2099 *, Vector2_t55 , Vector2_t55 , AsyncCallback_t209 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m14971_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14972_gshared (Comparison_1_t2099 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m14972(__this, ___result, method) (( int32_t (*) (Comparison_1_t2099 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m14972_gshared)(__this, ___result, method)
