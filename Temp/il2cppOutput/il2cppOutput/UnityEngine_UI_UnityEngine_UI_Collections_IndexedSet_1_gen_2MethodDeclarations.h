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
struct IndexedSet_1_t1911;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2054;
// System.Object[]
struct ObjectU5BU5D_t63;
// System.Predicate`1<System.Object>
struct Predicate_1_t80;
// System.Comparison`1<System.Object>
struct Comparison_1_t1806;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m12261_gshared (IndexedSet_1_t1911 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m12261(__this, method) (( void (*) (IndexedSet_1_t1911 *, const MethodInfo*))IndexedSet_1__ctor_m12261_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12263_gshared (IndexedSet_1_t1911 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12263(__this, method) (( Object_t * (*) (IndexedSet_1_t1911 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12263_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m12265_gshared (IndexedSet_1_t1911 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m12265(__this, ___item, method) (( void (*) (IndexedSet_1_t1911 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m12265_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m12267_gshared (IndexedSet_1_t1911 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m12267(__this, ___item, method) (( bool (*) (IndexedSet_1_t1911 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m12267_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m12269_gshared (IndexedSet_1_t1911 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m12269(__this, method) (( Object_t* (*) (IndexedSet_1_t1911 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m12269_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m12271_gshared (IndexedSet_1_t1911 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m12271(__this, method) (( void (*) (IndexedSet_1_t1911 *, const MethodInfo*))IndexedSet_1_Clear_m12271_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m12273_gshared (IndexedSet_1_t1911 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m12273(__this, ___item, method) (( bool (*) (IndexedSet_1_t1911 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m12273_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m12275_gshared (IndexedSet_1_t1911 * __this, ObjectU5BU5D_t63* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m12275(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1911 *, ObjectU5BU5D_t63*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m12275_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m12277_gshared (IndexedSet_1_t1911 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m12277(__this, method) (( int32_t (*) (IndexedSet_1_t1911 *, const MethodInfo*))IndexedSet_1_get_Count_m12277_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m12279_gshared (IndexedSet_1_t1911 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m12279(__this, method) (( bool (*) (IndexedSet_1_t1911 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m12279_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m12281_gshared (IndexedSet_1_t1911 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m12281(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1911 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m12281_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m12283_gshared (IndexedSet_1_t1911 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m12283(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1911 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m12283_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m12285_gshared (IndexedSet_1_t1911 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m12285(__this, ___index, method) (( void (*) (IndexedSet_1_t1911 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m12285_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m12287_gshared (IndexedSet_1_t1911 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m12287(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t1911 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m12287_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m12289_gshared (IndexedSet_1_t1911 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m12289(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1911 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m12289_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m12290_gshared (IndexedSet_1_t1911 * __this, Predicate_1_t80 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m12290(__this, ___match, method) (( void (*) (IndexedSet_1_t1911 *, Predicate_1_t80 *, const MethodInfo*))IndexedSet_1_RemoveAll_m12290_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m12291_gshared (IndexedSet_1_t1911 * __this, Comparison_1_t1806 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m12291(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1911 *, Comparison_1_t1806 *, const MethodInfo*))IndexedSet_1_Sort_m12291_gshared)(__this, ___sortLayoutFunction, method)
