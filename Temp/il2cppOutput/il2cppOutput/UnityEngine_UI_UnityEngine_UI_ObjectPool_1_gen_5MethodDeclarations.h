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

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m15392(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2142 *, UnityAction_1_t2143 *, UnityAction_1_t2143 *, const MethodInfo*))ObjectPool_1__ctor_m11457_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::get_countAll()
#define ObjectPool_1_get_countAll_m15393(__this, method) (( int32_t (*) (ObjectPool_1_t2142 *, const MethodInfo*))ObjectPool_1_get_countAll_m11459_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m15394(__this, ___value, method) (( void (*) (ObjectPool_1_t2142 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m11461_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::get_countActive()
#define ObjectPool_1_get_countActive_m15395(__this, method) (( int32_t (*) (ObjectPool_1_t2142 *, const MethodInfo*))ObjectPool_1_get_countActive_m11463_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m15396(__this, method) (( int32_t (*) (ObjectPool_1_t2142 *, const MethodInfo*))ObjectPool_1_get_countInactive_m11465_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::Get()
#define ObjectPool_1_Get_m15397(__this, method) (( List_1_t308 * (*) (ObjectPool_1_t2142 *, const MethodInfo*))ObjectPool_1_Get_m11467_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::Release(T)
#define ObjectPool_1_Release_m15398(__this, ___element, method) (( void (*) (ObjectPool_1_t2142 *, List_1_t308 *, const MethodInfo*))ObjectPool_1_Release_m11469_gshared)(__this, ___element, method)