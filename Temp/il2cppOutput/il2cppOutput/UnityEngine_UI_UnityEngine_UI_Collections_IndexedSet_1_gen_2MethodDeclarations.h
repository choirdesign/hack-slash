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

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t1909;
// System.Collections.IEnumerator
struct IEnumerator_t57;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2052;
// System.Object[]
struct ObjectU5BU5D_t61;
// System.Predicate`1<System.Object>
struct Predicate_1_t77;
// System.Comparison`1<System.Object>
struct Comparison_1_t1804;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m12247_gshared (IndexedSet_1_t1909 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m12247(__this, method) (( void (*) (IndexedSet_1_t1909 *, const MethodInfo*))IndexedSet_1__ctor_m12247_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12249_gshared (IndexedSet_1_t1909 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12249(__this, method) (( Object_t * (*) (IndexedSet_1_t1909 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12249_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m12251_gshared (IndexedSet_1_t1909 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m12251(__this, ___item, method) (( void (*) (IndexedSet_1_t1909 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m12251_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m12253_gshared (IndexedSet_1_t1909 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m12253(__this, ___item, method) (( bool (*) (IndexedSet_1_t1909 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m12253_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m12255_gshared (IndexedSet_1_t1909 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m12255(__this, method) (( Object_t* (*) (IndexedSet_1_t1909 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m12255_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m12257_gshared (IndexedSet_1_t1909 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m12257(__this, method) (( void (*) (IndexedSet_1_t1909 *, const MethodInfo*))IndexedSet_1_Clear_m12257_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m12259_gshared (IndexedSet_1_t1909 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m12259(__this, ___item, method) (( bool (*) (IndexedSet_1_t1909 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m12259_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m12261_gshared (IndexedSet_1_t1909 * __this, ObjectU5BU5D_t61* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m12261(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1909 *, ObjectU5BU5D_t61*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m12261_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m12263_gshared (IndexedSet_1_t1909 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m12263(__this, method) (( int32_t (*) (IndexedSet_1_t1909 *, const MethodInfo*))IndexedSet_1_get_Count_m12263_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m12265_gshared (IndexedSet_1_t1909 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m12265(__this, method) (( bool (*) (IndexedSet_1_t1909 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m12265_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m12267_gshared (IndexedSet_1_t1909 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m12267(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1909 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m12267_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m12269_gshared (IndexedSet_1_t1909 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m12269(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1909 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m12269_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m12271_gshared (IndexedSet_1_t1909 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m12271(__this, ___index, method) (( void (*) (IndexedSet_1_t1909 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m12271_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m12273_gshared (IndexedSet_1_t1909 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m12273(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t1909 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m12273_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m12275_gshared (IndexedSet_1_t1909 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m12275(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1909 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m12275_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m12276_gshared (IndexedSet_1_t1909 * __this, Predicate_1_t77 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m12276(__this, ___match, method) (( void (*) (IndexedSet_1_t1909 *, Predicate_1_t77 *, const MethodInfo*))IndexedSet_1_RemoveAll_m12276_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m12277_gshared (IndexedSet_1_t1909 * __this, Comparison_1_t1804 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m12277(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1909 *, Comparison_1_t1804 *, const MethodInfo*))IndexedSet_1_Sort_m12277_gshared)(__this, ___sortLayoutFunction, method)
