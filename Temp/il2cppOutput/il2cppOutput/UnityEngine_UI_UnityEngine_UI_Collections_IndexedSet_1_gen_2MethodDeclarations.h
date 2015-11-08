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
struct IndexedSet_1_t1921;
// System.Collections.IEnumerator
struct IEnumerator_t64;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2064;
// System.Object[]
struct ObjectU5BU5D_t75;
// System.Predicate`1<System.Object>
struct Predicate_1_t87;
// System.Comparison`1<System.Object>
struct Comparison_1_t1816;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m12305_gshared (IndexedSet_1_t1921 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m12305(__this, method) (( void (*) (IndexedSet_1_t1921 *, const MethodInfo*))IndexedSet_1__ctor_m12305_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12307_gshared (IndexedSet_1_t1921 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12307(__this, method) (( Object_t * (*) (IndexedSet_1_t1921 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12307_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m12309_gshared (IndexedSet_1_t1921 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m12309(__this, ___item, method) (( void (*) (IndexedSet_1_t1921 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m12309_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m12311_gshared (IndexedSet_1_t1921 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m12311(__this, ___item, method) (( bool (*) (IndexedSet_1_t1921 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m12311_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m12313_gshared (IndexedSet_1_t1921 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m12313(__this, method) (( Object_t* (*) (IndexedSet_1_t1921 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m12313_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m12315_gshared (IndexedSet_1_t1921 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m12315(__this, method) (( void (*) (IndexedSet_1_t1921 *, const MethodInfo*))IndexedSet_1_Clear_m12315_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m12317_gshared (IndexedSet_1_t1921 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m12317(__this, ___item, method) (( bool (*) (IndexedSet_1_t1921 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m12317_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m12319_gshared (IndexedSet_1_t1921 * __this, ObjectU5BU5D_t75* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m12319(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1921 *, ObjectU5BU5D_t75*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m12319_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m12321_gshared (IndexedSet_1_t1921 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m12321(__this, method) (( int32_t (*) (IndexedSet_1_t1921 *, const MethodInfo*))IndexedSet_1_get_Count_m12321_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m12323_gshared (IndexedSet_1_t1921 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m12323(__this, method) (( bool (*) (IndexedSet_1_t1921 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m12323_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m12325_gshared (IndexedSet_1_t1921 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m12325(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1921 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m12325_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m12327_gshared (IndexedSet_1_t1921 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m12327(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1921 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m12327_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m12329_gshared (IndexedSet_1_t1921 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m12329(__this, ___index, method) (( void (*) (IndexedSet_1_t1921 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m12329_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m12331_gshared (IndexedSet_1_t1921 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m12331(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t1921 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m12331_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m12333_gshared (IndexedSet_1_t1921 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m12333(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1921 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m12333_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m12334_gshared (IndexedSet_1_t1921 * __this, Predicate_1_t87 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m12334(__this, ___match, method) (( void (*) (IndexedSet_1_t1921 *, Predicate_1_t87 *, const MethodInfo*))IndexedSet_1_RemoveAll_m12334_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m12335_gshared (IndexedSet_1_t1921 * __this, Comparison_1_t1816 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m12335(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1921 *, Comparison_1_t1816 *, const MethodInfo*))IndexedSet_1_Sort_m12335_gshared)(__this, ___sortLayoutFunction, method)
