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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>
struct Transform_1_t2293;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t225;
// System.AsyncCallback
struct AsyncCallback_t226;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m17123_gshared (Transform_1_t2293 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m17123(__this, ___object, ___method, method) (( void (*) (Transform_1_t2293 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m17123_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>::Invoke(TKey,TValue)
extern "C" bool Transform_1_Invoke_m17124_gshared (Transform_1_t2293 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Transform_1_Invoke_m17124(__this, ___key, ___value, method) (( bool (*) (Transform_1_t2293 *, Object_t *, bool, const MethodInfo*))Transform_1_Invoke_m17124_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m17125_gshared (Transform_1_t2293 * __this, Object_t * ___key, bool ___value, AsyncCallback_t226 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m17125(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2293 *, Object_t *, bool, AsyncCallback_t226 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m17125_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" bool Transform_1_EndInvoke_m17126_gshared (Transform_1_t2293 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m17126(__this, ___result, method) (( bool (*) (Transform_1_t2293 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m17126_gshared)(__this, ___result, method)
