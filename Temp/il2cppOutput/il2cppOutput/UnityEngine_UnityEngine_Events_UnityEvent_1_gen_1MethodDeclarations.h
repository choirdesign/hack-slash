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

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t144;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t324;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t598;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
extern "C" void UnityEvent_1__ctor_m1741_gshared (UnityEvent_1_t144 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m1741(__this, method) (( void (*) (UnityEvent_1_t144 *, const MethodInfo*))UnityEvent_1__ctor_m1741_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m1743_gshared (UnityEvent_1_t144 * __this, UnityAction_1_t324 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m1743(__this, ___call, method) (( void (*) (UnityEvent_1_t144 *, UnityAction_1_t324 *, const MethodInfo*))UnityEvent_1_AddListener_m1743_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m2064_gshared (UnityEvent_1_t144 * __this, UnityAction_1_t324 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m2064(__this, ___call, method) (( void (*) (UnityEvent_1_t144 *, UnityAction_1_t324 *, const MethodInfo*))UnityEvent_1_RemoveListener_m2064_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m12237_gshared (UnityEvent_1_t144 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m12237(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t144 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m12237_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t598 * UnityEvent_1_GetDelegate_m12238_gshared (UnityEvent_1_t144 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m12238(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t598 * (*) (UnityEvent_1_t144 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m12238_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t598 * UnityEvent_1_GetDelegate_m12239_gshared (Object_t * __this /* static, unused */, UnityAction_1_t324 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m12239(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t598 * (*) (Object_t * /* static, unused */, UnityAction_1_t324 *, const MethodInfo*))UnityEvent_1_GetDelegate_m12239_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m1742_gshared (UnityEvent_1_t144 * __this, float ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m1742(__this, ___arg0, method) (( void (*) (UnityEvent_1_t144 *, float, const MethodInfo*))UnityEvent_1_Invoke_m1742_gshared)(__this, ___arg0, method)
