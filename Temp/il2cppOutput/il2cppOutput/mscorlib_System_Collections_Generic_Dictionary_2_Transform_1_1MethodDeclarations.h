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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Transform_1_t1842;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t225;
// System.AsyncCallback
struct AsyncCallback_t226;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m11198_gshared (Transform_1_t1842 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m11198(__this, ___object, ___method, method) (( void (*) (Transform_1_t1842 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m11198_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t1834  Transform_1_Invoke_m11199_gshared (Transform_1_t1842 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m11199(__this, ___key, ___value, method) (( KeyValuePair_2_t1834  (*) (Transform_1_t1842 *, Object_t *, int32_t, const MethodInfo*))Transform_1_Invoke_m11199_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m11200_gshared (Transform_1_t1842 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t226 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m11200(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1842 *, Object_t *, int32_t, AsyncCallback_t226 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m11200_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t1834  Transform_1_EndInvoke_m11201_gshared (Transform_1_t1842 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m11201(__this, ___result, method) (( KeyValuePair_2_t1834  (*) (Transform_1_t1842 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m11201_gshared)(__this, ___result, method)
