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
#define ObjectPool_1__ctor_m15345(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2136 *, UnityAction_1_t2137 *, UnityAction_1_t2137 *, const MethodInfo*))ObjectPool_1__ctor_m11197_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::get_countAll()
#define ObjectPool_1_get_countAll_m15346(__this, method) (( int32_t (*) (ObjectPool_1_t2136 *, const MethodInfo*))ObjectPool_1_get_countAll_m11199_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m15347(__this, ___value, method) (( void (*) (ObjectPool_1_t2136 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m11201_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::get_countActive()
#define ObjectPool_1_get_countActive_m15348(__this, method) (( int32_t (*) (ObjectPool_1_t2136 *, const MethodInfo*))ObjectPool_1_get_countActive_m11203_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m15349(__this, method) (( int32_t (*) (ObjectPool_1_t2136 *, const MethodInfo*))ObjectPool_1_get_countInactive_m11205_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::Get()
#define ObjectPool_1_Get_m15350(__this, method) (( List_1_t302 * (*) (ObjectPool_1_t2136 *, const MethodInfo*))ObjectPool_1_Get_m11207_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::Release(T)
#define ObjectPool_1_Release_m15351(__this, ___element, method) (( void (*) (ObjectPool_1_t2136 *, List_1_t302 *, const MethodInfo*))ObjectPool_1_Release_m11209_gshared)(__this, ___element, method)