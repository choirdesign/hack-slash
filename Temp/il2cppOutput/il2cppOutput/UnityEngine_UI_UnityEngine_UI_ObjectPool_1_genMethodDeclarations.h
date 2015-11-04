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
#define ObjectPool_1__ctor_m1643(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t111 *, UnityAction_1_t113 *, UnityAction_1_t113 *, const MethodInfo*))ObjectPool_1__ctor_m11139_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m11140(__this, method) (( int32_t (*) (ObjectPool_1_t111 *, const MethodInfo*))ObjectPool_1_get_countAll_m11141_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m11142(__this, ___value, method) (( void (*) (ObjectPool_1_t111 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m11143_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m11144(__this, method) (( int32_t (*) (ObjectPool_1_t111 *, const MethodInfo*))ObjectPool_1_get_countActive_m11145_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m11146(__this, method) (( int32_t (*) (ObjectPool_1_t111 *, const MethodInfo*))ObjectPool_1_get_countInactive_m11147_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m11148(__this, method) (( List_1_t302 * (*) (ObjectPool_1_t111 *, const MethodInfo*))ObjectPool_1_Get_m11149_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m11150(__this, ___element, method) (( void (*) (ObjectPool_1_t111 *, List_1_t302 *, const MethodInfo*))ObjectPool_1_Release_m11151_gshared)(__this, ___element, method)
