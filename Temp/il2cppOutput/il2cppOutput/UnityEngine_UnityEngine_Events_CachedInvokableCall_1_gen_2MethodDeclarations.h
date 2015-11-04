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

// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
struct CachedInvokableCall_1_t664;
// UnityEngine.Object
struct Object_t63;
struct Object_t63_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t61;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m3412_gshared (CachedInvokableCall_1_t664 * __this, Object_t63 * ___target, MethodInfo_t * ___theFunction, bool ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m3412(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t664 *, Object_t63 *, MethodInfo_t *, bool, const MethodInfo*))CachedInvokableCall_1__ctor_m3412_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m16631_gshared (CachedInvokableCall_1_t664 * __this, ObjectU5BU5D_t61* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m16631(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t664 *, ObjectU5BU5D_t61*, const MethodInfo*))CachedInvokableCall_1_Invoke_m16631_gshared)(__this, ___args, method)
