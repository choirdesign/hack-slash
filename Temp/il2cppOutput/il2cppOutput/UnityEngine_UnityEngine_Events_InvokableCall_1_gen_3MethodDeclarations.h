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

// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct InvokableCall_1_t1973;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t370;
// System.Object[]
struct ObjectU5BU5D_t82;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m13002_gshared (InvokableCall_1_t1973 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m13002(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t1973 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m13002_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m13003_gshared (InvokableCall_1_t1973 * __this, UnityAction_1_t370 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m13003(__this, ___action, method) (( void (*) (InvokableCall_1_t1973 *, UnityAction_1_t370 *, const MethodInfo*))InvokableCall_1__ctor_m13003_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m13004_gshared (InvokableCall_1_t1973 * __this, ObjectU5BU5D_t82* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m13004(__this, ___args, method) (( void (*) (InvokableCall_1_t1973 *, ObjectU5BU5D_t82*, const MethodInfo*))InvokableCall_1_Invoke_m13004_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Boolean>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m13005_gshared (InvokableCall_1_t1973 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m13005(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t1973 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m13005_gshared)(__this, ___targetObj, ___method, method)
