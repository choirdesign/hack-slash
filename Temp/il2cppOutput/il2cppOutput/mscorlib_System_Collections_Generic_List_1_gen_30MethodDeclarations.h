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

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t527;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t2454;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t2455;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t64;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t386;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t2192;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t637;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2196;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2199;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_33.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m15898_gshared (List_1_t527 * __this, const MethodInfo* method);
#define List_1__ctor_m15898(__this, method) (( void (*) (List_1_t527 *, const MethodInfo*))List_1__ctor_m15898_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15899_gshared (List_1_t527 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m15899(__this, ___collection, method) (( void (*) (List_1_t527 *, Object_t*, const MethodInfo*))List_1__ctor_m15899_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3423_gshared (List_1_t527 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3423(__this, ___capacity, method) (( void (*) (List_1_t527 *, int32_t, const MethodInfo*))List_1__ctor_m3423_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m15900_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m15900(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m15900_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15901_gshared (List_1_t527 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15901(__this, method) (( Object_t* (*) (List_1_t527 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15902_gshared (List_1_t527 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15902(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t527 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15902_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15903_gshared (List_1_t527 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15903(__this, method) (( Object_t * (*) (List_1_t527 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15903_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15904_gshared (List_1_t527 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15904(__this, ___item, method) (( int32_t (*) (List_1_t527 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m15904_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15905_gshared (List_1_t527 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15905(__this, ___item, method) (( bool (*) (List_1_t527 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m15905_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15906_gshared (List_1_t527 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15906(__this, ___item, method) (( int32_t (*) (List_1_t527 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m15906_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15907_gshared (List_1_t527 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15907(__this, ___index, ___item, method) (( void (*) (List_1_t527 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m15907_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15908_gshared (List_1_t527 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15908(__this, ___item, method) (( void (*) (List_1_t527 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m15908_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15909_gshared (List_1_t527 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15909(__this, method) (( bool (*) (List_1_t527 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15909_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15910_gshared (List_1_t527 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15910(__this, method) (( bool (*) (List_1_t527 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15910_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15911_gshared (List_1_t527 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15911(__this, method) (( Object_t * (*) (List_1_t527 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15911_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15912_gshared (List_1_t527 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15912(__this, method) (( bool (*) (List_1_t527 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15912_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15913_gshared (List_1_t527 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15913(__this, method) (( bool (*) (List_1_t527 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15913_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15914_gshared (List_1_t527 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15914(__this, ___index, method) (( Object_t * (*) (List_1_t527 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m15914_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15915_gshared (List_1_t527 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15915(__this, ___index, ___value, method) (( void (*) (List_1_t527 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m15915_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m15916_gshared (List_1_t527 * __this, UILineInfo_t382  ___item, const MethodInfo* method);
#define List_1_Add_m15916(__this, ___item, method) (( void (*) (List_1_t527 *, UILineInfo_t382 , const MethodInfo*))List_1_Add_m15916_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15917_gshared (List_1_t527 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m15917(__this, ___newCount, method) (( void (*) (List_1_t527 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m15917_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15918_gshared (List_1_t527 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m15918(__this, ___collection, method) (( void (*) (List_1_t527 *, Object_t*, const MethodInfo*))List_1_AddCollection_m15918_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15919_gshared (List_1_t527 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m15919(__this, ___enumerable, method) (( void (*) (List_1_t527 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m15919_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15920_gshared (List_1_t527 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m15920(__this, ___collection, method) (( void (*) (List_1_t527 *, Object_t*, const MethodInfo*))List_1_AddRange_m15920_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2192 * List_1_AsReadOnly_m15921_gshared (List_1_t527 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m15921(__this, method) (( ReadOnlyCollection_1_t2192 * (*) (List_1_t527 *, const MethodInfo*))List_1_AsReadOnly_m15921_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m15922_gshared (List_1_t527 * __this, const MethodInfo* method);
#define List_1_Clear_m15922(__this, method) (( void (*) (List_1_t527 *, const MethodInfo*))List_1_Clear_m15922_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m15923_gshared (List_1_t527 * __this, UILineInfo_t382  ___item, const MethodInfo* method);
#define List_1_Contains_m15923(__this, ___item, method) (( bool (*) (List_1_t527 *, UILineInfo_t382 , const MethodInfo*))List_1_Contains_m15923_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15924_gshared (List_1_t527 * __this, UILineInfoU5BU5D_t637* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m15924(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t527 *, UILineInfoU5BU5D_t637*, int32_t, const MethodInfo*))List_1_CopyTo_m15924_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t382  List_1_Find_m15925_gshared (List_1_t527 * __this, Predicate_1_t2196 * ___match, const MethodInfo* method);
#define List_1_Find_m15925(__this, ___match, method) (( UILineInfo_t382  (*) (List_1_t527 *, Predicate_1_t2196 *, const MethodInfo*))List_1_Find_m15925_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15926_gshared (Object_t * __this /* static, unused */, Predicate_1_t2196 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m15926(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2196 *, const MethodInfo*))List_1_CheckMatch_m15926_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15927_gshared (List_1_t527 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2196 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m15927(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t527 *, int32_t, int32_t, Predicate_1_t2196 *, const MethodInfo*))List_1_GetIndex_m15927_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2191  List_1_GetEnumerator_m15928_gshared (List_1_t527 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m15928(__this, method) (( Enumerator_t2191  (*) (List_1_t527 *, const MethodInfo*))List_1_GetEnumerator_m15928_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15929_gshared (List_1_t527 * __this, UILineInfo_t382  ___item, const MethodInfo* method);
#define List_1_IndexOf_m15929(__this, ___item, method) (( int32_t (*) (List_1_t527 *, UILineInfo_t382 , const MethodInfo*))List_1_IndexOf_m15929_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15930_gshared (List_1_t527 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m15930(__this, ___start, ___delta, method) (( void (*) (List_1_t527 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m15930_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15931_gshared (List_1_t527 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m15931(__this, ___index, method) (( void (*) (List_1_t527 *, int32_t, const MethodInfo*))List_1_CheckIndex_m15931_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15932_gshared (List_1_t527 * __this, int32_t ___index, UILineInfo_t382  ___item, const MethodInfo* method);
#define List_1_Insert_m15932(__this, ___index, ___item, method) (( void (*) (List_1_t527 *, int32_t, UILineInfo_t382 , const MethodInfo*))List_1_Insert_m15932_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15933_gshared (List_1_t527 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m15933(__this, ___collection, method) (( void (*) (List_1_t527 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m15933_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m15934_gshared (List_1_t527 * __this, UILineInfo_t382  ___item, const MethodInfo* method);
#define List_1_Remove_m15934(__this, ___item, method) (( bool (*) (List_1_t527 *, UILineInfo_t382 , const MethodInfo*))List_1_Remove_m15934_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15935_gshared (List_1_t527 * __this, Predicate_1_t2196 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m15935(__this, ___match, method) (( int32_t (*) (List_1_t527 *, Predicate_1_t2196 *, const MethodInfo*))List_1_RemoveAll_m15935_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15936_gshared (List_1_t527 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m15936(__this, ___index, method) (( void (*) (List_1_t527 *, int32_t, const MethodInfo*))List_1_RemoveAt_m15936_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m15937_gshared (List_1_t527 * __this, const MethodInfo* method);
#define List_1_Reverse_m15937(__this, method) (( void (*) (List_1_t527 *, const MethodInfo*))List_1_Reverse_m15937_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m15938_gshared (List_1_t527 * __this, const MethodInfo* method);
#define List_1_Sort_m15938(__this, method) (( void (*) (List_1_t527 *, const MethodInfo*))List_1_Sort_m15938_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15939_gshared (List_1_t527 * __this, Comparison_1_t2199 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m15939(__this, ___comparison, method) (( void (*) (List_1_t527 *, Comparison_1_t2199 *, const MethodInfo*))List_1_Sort_m15939_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t637* List_1_ToArray_m15940_gshared (List_1_t527 * __this, const MethodInfo* method);
#define List_1_ToArray_m15940(__this, method) (( UILineInfoU5BU5D_t637* (*) (List_1_t527 *, const MethodInfo*))List_1_ToArray_m15940_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m15941_gshared (List_1_t527 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m15941(__this, method) (( void (*) (List_1_t527 *, const MethodInfo*))List_1_TrimExcess_m15941_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15942_gshared (List_1_t527 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m15942(__this, method) (( int32_t (*) (List_1_t527 *, const MethodInfo*))List_1_get_Capacity_m15942_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15943_gshared (List_1_t527 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m15943(__this, ___value, method) (( void (*) (List_1_t527 *, int32_t, const MethodInfo*))List_1_set_Capacity_m15943_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m15944_gshared (List_1_t527 * __this, const MethodInfo* method);
#define List_1_get_Count_m15944(__this, method) (( int32_t (*) (List_1_t527 *, const MethodInfo*))List_1_get_Count_m15944_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t382  List_1_get_Item_m15945_gshared (List_1_t527 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m15945(__this, ___index, method) (( UILineInfo_t382  (*) (List_1_t527 *, int32_t, const MethodInfo*))List_1_get_Item_m15945_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15946_gshared (List_1_t527 * __this, int32_t ___index, UILineInfo_t382  ___value, const MethodInfo* method);
#define List_1_set_Item_m15946(__this, ___index, ___value, method) (( void (*) (List_1_t527 *, int32_t, UILineInfo_t382 , const MethodInfo*))List_1_set_Item_m15946_gshared)(__this, ___index, ___value, method)
