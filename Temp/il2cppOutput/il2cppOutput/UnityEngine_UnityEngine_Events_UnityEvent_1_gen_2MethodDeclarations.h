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

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t170;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t1932;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t600;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
extern "C" void UnityEvent_1__ctor_m1808_gshared (UnityEvent_1_t170 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m1808(__this, method) (( void (*) (UnityEvent_1_t170 *, const MethodInfo*))UnityEvent_1__ctor_m1808_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m12595_gshared (UnityEvent_1_t170 * __this, UnityAction_1_t1932 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m12595(__this, ___call, method) (( void (*) (UnityEvent_1_t170 *, UnityAction_1_t1932 *, const MethodInfo*))UnityEvent_1_AddListener_m12595_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m12596_gshared (UnityEvent_1_t170 * __this, UnityAction_1_t1932 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m12596(__this, ___call, method) (( void (*) (UnityEvent_1_t170 *, UnityAction_1_t1932 *, const MethodInfo*))UnityEvent_1_RemoveListener_m12596_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m12597_gshared (UnityEvent_1_t170 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m12597(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t170 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m12597_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t600 * UnityEvent_1_GetDelegate_m12598_gshared (UnityEvent_1_t170 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m12598(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t600 * (*) (UnityEvent_1_t170 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m12598_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t600 * UnityEvent_1_GetDelegate_m12599_gshared (Object_t * __this /* static, unused */, UnityAction_1_t1932 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m12599(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t600 * (*) (Object_t * /* static, unused */, UnityAction_1_t1932 *, const MethodInfo*))UnityEvent_1_GetDelegate_m12599_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m1812_gshared (UnityEvent_1_t170 * __this, int32_t ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m1812(__this, ___arg0, method) (( void (*) (UnityEvent_1_t170 *, int32_t, const MethodInfo*))UnityEvent_1_Invoke_m1812_gshared)(__this, ___arg0, method)
