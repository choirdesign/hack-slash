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

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t2044;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t225;
// System.AsyncCallback
struct AsyncCallback_t226;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m13985_gshared (UnityAction_1_t2044 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m13985(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t2044 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m13985_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m13986_gshared (UnityAction_1_t2044 * __this, Vector2_t72  ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m13986(__this, ___arg0, method) (( void (*) (UnityAction_1_t2044 *, Vector2_t72 , const MethodInfo*))UnityAction_1_Invoke_m13986_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m13987_gshared (UnityAction_1_t2044 * __this, Vector2_t72  ___arg0, AsyncCallback_t226 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m13987(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t2044 *, Vector2_t72 , AsyncCallback_t226 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m13987_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m13988_gshared (UnityAction_1_t2044 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m13988(__this, ___result, method) (( void (*) (UnityAction_1_t2044 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m13988_gshared)(__this, ___result, method)
