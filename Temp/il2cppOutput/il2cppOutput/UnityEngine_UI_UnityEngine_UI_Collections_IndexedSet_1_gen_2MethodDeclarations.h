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
struct IndexedSet_1_t1943;
// System.Collections.IEnumerator
struct IEnumerator_t71;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2070;
// System.Object[]
struct ObjectU5BU5D_t82;
// System.Predicate`1<System.Object>
struct Predicate_1_t95;
// System.Comparison`1<System.Object>
struct Comparison_1_t1822;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m12542_gshared (IndexedSet_1_t1943 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m12542(__this, method) (( void (*) (IndexedSet_1_t1943 *, const MethodInfo*))IndexedSet_1__ctor_m12542_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12544_gshared (IndexedSet_1_t1943 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12544(__this, method) (( Object_t * (*) (IndexedSet_1_t1943 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12544_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m12546_gshared (IndexedSet_1_t1943 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m12546(__this, ___item, method) (( void (*) (IndexedSet_1_t1943 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m12546_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m12548_gshared (IndexedSet_1_t1943 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m12548(__this, ___item, method) (( bool (*) (IndexedSet_1_t1943 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m12548_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m12550_gshared (IndexedSet_1_t1943 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m12550(__this, method) (( Object_t* (*) (IndexedSet_1_t1943 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m12550_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m12552_gshared (IndexedSet_1_t1943 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m12552(__this, method) (( void (*) (IndexedSet_1_t1943 *, const MethodInfo*))IndexedSet_1_Clear_m12552_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m12554_gshared (IndexedSet_1_t1943 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m12554(__this, ___item, method) (( bool (*) (IndexedSet_1_t1943 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m12554_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m12556_gshared (IndexedSet_1_t1943 * __this, ObjectU5BU5D_t82* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m12556(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1943 *, ObjectU5BU5D_t82*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m12556_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m12558_gshared (IndexedSet_1_t1943 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m12558(__this, method) (( int32_t (*) (IndexedSet_1_t1943 *, const MethodInfo*))IndexedSet_1_get_Count_m12558_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m12560_gshared (IndexedSet_1_t1943 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m12560(__this, method) (( bool (*) (IndexedSet_1_t1943 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m12560_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m12562_gshared (IndexedSet_1_t1943 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m12562(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1943 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m12562_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m12564_gshared (IndexedSet_1_t1943 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m12564(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1943 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m12564_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m12566_gshared (IndexedSet_1_t1943 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m12566(__this, ___index, method) (( void (*) (IndexedSet_1_t1943 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m12566_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m12568_gshared (IndexedSet_1_t1943 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m12568(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t1943 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m12568_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m12570_gshared (IndexedSet_1_t1943 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m12570(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1943 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m12570_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m12571_gshared (IndexedSet_1_t1943 * __this, Predicate_1_t95 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m12571(__this, ___match, method) (( void (*) (IndexedSet_1_t1943 *, Predicate_1_t95 *, const MethodInfo*))IndexedSet_1_RemoveAll_m12571_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m12572_gshared (IndexedSet_1_t1943 * __this, Comparison_1_t1822 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m12572(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1943 *, Comparison_1_t1822 *, const MethodInfo*))IndexedSet_1_Sort_m12572_gshared)(__this, ___sortLayoutFunction, method)
