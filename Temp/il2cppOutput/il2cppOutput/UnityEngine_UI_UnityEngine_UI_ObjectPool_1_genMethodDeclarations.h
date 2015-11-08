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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_0MethodDeclarations.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m1700(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t121 *, UnityAction_1_t123 *, UnityAction_1_t123 *, const MethodInfo*))ObjectPool_1__ctor_m11197_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m11198(__this, method) (( int32_t (*) (ObjectPool_1_t121 *, const MethodInfo*))ObjectPool_1_get_countAll_m11199_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m11200(__this, ___value, method) (( void (*) (ObjectPool_1_t121 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m11201_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m11202(__this, method) (( int32_t (*) (ObjectPool_1_t121 *, const MethodInfo*))ObjectPool_1_get_countActive_m11203_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m11204(__this, method) (( int32_t (*) (ObjectPool_1_t121 *, const MethodInfo*))ObjectPool_1_get_countInactive_m11205_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m11206(__this, method) (( List_1_t312 * (*) (ObjectPool_1_t121 *, const MethodInfo*))ObjectPool_1_Get_m11207_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m11208(__this, ___element, method) (( void (*) (ObjectPool_1_t121 *, List_1_t312 *, const MethodInfo*))ObjectPool_1_Release_m11209_gshared)(__this, ___element, method)
