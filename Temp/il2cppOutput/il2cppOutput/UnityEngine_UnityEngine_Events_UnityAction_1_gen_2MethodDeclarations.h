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

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t370;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t225;
// System.AsyncCallback
struct AsyncCallback_t226;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m1922_gshared (UnityAction_1_t370 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m1922(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t370 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m1922_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m12995_gshared (UnityAction_1_t370 * __this, bool ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m12995(__this, ___arg0, method) (( void (*) (UnityAction_1_t370 *, bool, const MethodInfo*))UnityAction_1_Invoke_m12995_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m12996_gshared (UnityAction_1_t370 * __this, bool ___arg0, AsyncCallback_t226 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m12996(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t370 *, bool, AsyncCallback_t226 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m12996_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m12997_gshared (UnityAction_1_t370 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m12997(__this, ___result, method) (( void (*) (UnityAction_1_t370 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m12997_gshared)(__this, ___result, method)
