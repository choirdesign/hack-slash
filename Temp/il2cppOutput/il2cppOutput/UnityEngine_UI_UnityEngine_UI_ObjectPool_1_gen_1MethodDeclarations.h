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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_0MethodDeclarations.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m11604(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t1877 *, UnityAction_1_t1878 *, UnityAction_1_t1878 *, const MethodInfo*))ObjectPool_1__ctor_m11457_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::get_countAll()
#define ObjectPool_1_get_countAll_m11605(__this, method) (( int32_t (*) (ObjectPool_1_t1877 *, const MethodInfo*))ObjectPool_1_get_countAll_m11459_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m11606(__this, ___value, method) (( void (*) (ObjectPool_1_t1877 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m11461_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::get_countActive()
#define ObjectPool_1_get_countActive_m11607(__this, method) (( int32_t (*) (ObjectPool_1_t1877 *, const MethodInfo*))ObjectPool_1_get_countActive_m11463_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m11608(__this, method) (( int32_t (*) (ObjectPool_1_t1877 *, const MethodInfo*))ObjectPool_1_get_countInactive_m11465_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::Get()
#define ObjectPool_1_Get_m11609(__this, method) (( List_1_t397 * (*) (ObjectPool_1_t1877 *, const MethodInfo*))ObjectPool_1_Get_m11467_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::Release(T)
#define ObjectPool_1_Release_m11610(__this, ___element, method) (( void (*) (ObjectPool_1_t1877 *, List_1_t397 *, const MethodInfo*))ObjectPool_1_Release_m11469_gshared)(__this, ___element, method)