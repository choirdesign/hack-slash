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

// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
struct InvokableCall_1_t2029;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t2028;
// System.Object[]
struct ObjectU5BU5D_t63;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m13898_gshared (InvokableCall_1_t2029 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m13898(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2029 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m13898_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m13899_gshared (InvokableCall_1_t2029 * __this, UnityAction_1_t2028 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m13899(__this, ___action, method) (( void (*) (InvokableCall_1_t2029 *, UnityAction_1_t2028 *, const MethodInfo*))InvokableCall_1__ctor_m13899_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m13900_gshared (InvokableCall_1_t2029 * __this, ObjectU5BU5D_t63* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m13900(__this, ___args, method) (( void (*) (InvokableCall_1_t2029 *, ObjectU5BU5D_t63*, const MethodInfo*))InvokableCall_1_Invoke_m13900_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m13901_gshared (InvokableCall_1_t2029 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m13901(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2029 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m13901_gshared)(__this, ___targetObj, ___method, method)
