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

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t1931;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t1930;
// System.Object[]
struct ObjectU5BU5D_t61;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m12590_gshared (InvokableCall_1_t1931 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m12590(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t1931 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m12590_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m12591_gshared (InvokableCall_1_t1931 * __this, UnityAction_1_t1930 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m12591(__this, ___action, method) (( void (*) (InvokableCall_1_t1931 *, UnityAction_1_t1930 *, const MethodInfo*))InvokableCall_1__ctor_m12591_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m12592_gshared (InvokableCall_1_t1931 * __this, ObjectU5BU5D_t61* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m12592(__this, ___args, method) (( void (*) (InvokableCall_1_t1931 *, ObjectU5BU5D_t61*, const MethodInfo*))InvokableCall_1_Invoke_m12592_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m12593_gshared (InvokableCall_1_t1931 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m12593(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t1931 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m12593_gshared)(__this, ___targetObj, ___method, method)
