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

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t526;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t2451;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t2452;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t64;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t2453;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t2183;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t636;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2187;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2190;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_32.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m15754_gshared (List_1_t526 * __this, const MethodInfo* method);
#define List_1__ctor_m15754(__this, method) (( void (*) (List_1_t526 *, const MethodInfo*))List_1__ctor_m15754_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15755_gshared (List_1_t526 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m15755(__this, ___collection, method) (( void (*) (List_1_t526 *, Object_t*, const MethodInfo*))List_1__ctor_m15755_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3422_gshared (List_1_t526 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3422(__this, ___capacity, method) (( void (*) (List_1_t526 *, int32_t, const MethodInfo*))List_1__ctor_m3422_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m15756_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m15756(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m15756_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15757_gshared (List_1_t526 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15757(__this, method) (( Object_t* (*) (List_1_t526 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15757_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15758_gshared (List_1_t526 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15758(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t526 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15758_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15759_gshared (List_1_t526 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15759(__this, method) (( Object_t * (*) (List_1_t526 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15759_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15760_gshared (List_1_t526 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15760(__this, ___item, method) (( int32_t (*) (List_1_t526 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m15760_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15761_gshared (List_1_t526 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15761(__this, ___item, method) (( bool (*) (List_1_t526 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m15761_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15762_gshared (List_1_t526 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15762(__this, ___item, method) (( int32_t (*) (List_1_t526 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m15762_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15763_gshared (List_1_t526 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15763(__this, ___index, ___item, method) (( void (*) (List_1_t526 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m15763_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15764_gshared (List_1_t526 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15764(__this, ___item, method) (( void (*) (List_1_t526 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m15764_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15765_gshared (List_1_t526 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15765(__this, method) (( bool (*) (List_1_t526 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15765_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15766_gshared (List_1_t526 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15766(__this, method) (( bool (*) (List_1_t526 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15766_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15767_gshared (List_1_t526 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15767(__this, method) (( Object_t * (*) (List_1_t526 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15767_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15768_gshared (List_1_t526 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15768(__this, method) (( bool (*) (List_1_t526 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15768_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15769_gshared (List_1_t526 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15769(__this, method) (( bool (*) (List_1_t526 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15769_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15770_gshared (List_1_t526 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15770(__this, ___index, method) (( Object_t * (*) (List_1_t526 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m15770_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15771_gshared (List_1_t526 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15771(__this, ___index, ___value, method) (( void (*) (List_1_t526 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m15771_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m15772_gshared (List_1_t526 * __this, UICharInfo_t384  ___item, const MethodInfo* method);
#define List_1_Add_m15772(__this, ___item, method) (( void (*) (List_1_t526 *, UICharInfo_t384 , const MethodInfo*))List_1_Add_m15772_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15773_gshared (List_1_t526 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m15773(__this, ___newCount, method) (( void (*) (List_1_t526 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m15773_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15774_gshared (List_1_t526 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m15774(__this, ___collection, method) (( void (*) (List_1_t526 *, Object_t*, const MethodInfo*))List_1_AddCollection_m15774_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15775_gshared (List_1_t526 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m15775(__this, ___enumerable, method) (( void (*) (List_1_t526 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m15775_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15776_gshared (List_1_t526 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m15776(__this, ___collection, method) (( void (*) (List_1_t526 *, Object_t*, const MethodInfo*))List_1_AddRange_m15776_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2183 * List_1_AsReadOnly_m15777_gshared (List_1_t526 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m15777(__this, method) (( ReadOnlyCollection_1_t2183 * (*) (List_1_t526 *, const MethodInfo*))List_1_AsReadOnly_m15777_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m15778_gshared (List_1_t526 * __this, const MethodInfo* method);
#define List_1_Clear_m15778(__this, method) (( void (*) (List_1_t526 *, const MethodInfo*))List_1_Clear_m15778_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m15779_gshared (List_1_t526 * __this, UICharInfo_t384  ___item, const MethodInfo* method);
#define List_1_Contains_m15779(__this, ___item, method) (( bool (*) (List_1_t526 *, UICharInfo_t384 , const MethodInfo*))List_1_Contains_m15779_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15780_gshared (List_1_t526 * __this, UICharInfoU5BU5D_t636* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m15780(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t526 *, UICharInfoU5BU5D_t636*, int32_t, const MethodInfo*))List_1_CopyTo_m15780_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t384  List_1_Find_m15781_gshared (List_1_t526 * __this, Predicate_1_t2187 * ___match, const MethodInfo* method);
#define List_1_Find_m15781(__this, ___match, method) (( UICharInfo_t384  (*) (List_1_t526 *, Predicate_1_t2187 *, const MethodInfo*))List_1_Find_m15781_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15782_gshared (Object_t * __this /* static, unused */, Predicate_1_t2187 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m15782(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2187 *, const MethodInfo*))List_1_CheckMatch_m15782_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15783_gshared (List_1_t526 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2187 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m15783(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t526 *, int32_t, int32_t, Predicate_1_t2187 *, const MethodInfo*))List_1_GetIndex_m15783_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t2182  List_1_GetEnumerator_m15784_gshared (List_1_t526 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m15784(__this, method) (( Enumerator_t2182  (*) (List_1_t526 *, const MethodInfo*))List_1_GetEnumerator_m15784_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15785_gshared (List_1_t526 * __this, UICharInfo_t384  ___item, const MethodInfo* method);
#define List_1_IndexOf_m15785(__this, ___item, method) (( int32_t (*) (List_1_t526 *, UICharInfo_t384 , const MethodInfo*))List_1_IndexOf_m15785_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15786_gshared (List_1_t526 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m15786(__this, ___start, ___delta, method) (( void (*) (List_1_t526 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m15786_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15787_gshared (List_1_t526 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m15787(__this, ___index, method) (( void (*) (List_1_t526 *, int32_t, const MethodInfo*))List_1_CheckIndex_m15787_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15788_gshared (List_1_t526 * __this, int32_t ___index, UICharInfo_t384  ___item, const MethodInfo* method);
#define List_1_Insert_m15788(__this, ___index, ___item, method) (( void (*) (List_1_t526 *, int32_t, UICharInfo_t384 , const MethodInfo*))List_1_Insert_m15788_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15789_gshared (List_1_t526 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m15789(__this, ___collection, method) (( void (*) (List_1_t526 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m15789_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m15790_gshared (List_1_t526 * __this, UICharInfo_t384  ___item, const MethodInfo* method);
#define List_1_Remove_m15790(__this, ___item, method) (( bool (*) (List_1_t526 *, UICharInfo_t384 , const MethodInfo*))List_1_Remove_m15790_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15791_gshared (List_1_t526 * __this, Predicate_1_t2187 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m15791(__this, ___match, method) (( int32_t (*) (List_1_t526 *, Predicate_1_t2187 *, const MethodInfo*))List_1_RemoveAll_m15791_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15792_gshared (List_1_t526 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m15792(__this, ___index, method) (( void (*) (List_1_t526 *, int32_t, const MethodInfo*))List_1_RemoveAt_m15792_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m15793_gshared (List_1_t526 * __this, const MethodInfo* method);
#define List_1_Reverse_m15793(__this, method) (( void (*) (List_1_t526 *, const MethodInfo*))List_1_Reverse_m15793_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m15794_gshared (List_1_t526 * __this, const MethodInfo* method);
#define List_1_Sort_m15794(__this, method) (( void (*) (List_1_t526 *, const MethodInfo*))List_1_Sort_m15794_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15795_gshared (List_1_t526 * __this, Comparison_1_t2190 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m15795(__this, ___comparison, method) (( void (*) (List_1_t526 *, Comparison_1_t2190 *, const MethodInfo*))List_1_Sort_m15795_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t636* List_1_ToArray_m15796_gshared (List_1_t526 * __this, const MethodInfo* method);
#define List_1_ToArray_m15796(__this, method) (( UICharInfoU5BU5D_t636* (*) (List_1_t526 *, const MethodInfo*))List_1_ToArray_m15796_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m15797_gshared (List_1_t526 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m15797(__this, method) (( void (*) (List_1_t526 *, const MethodInfo*))List_1_TrimExcess_m15797_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15798_gshared (List_1_t526 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m15798(__this, method) (( int32_t (*) (List_1_t526 *, const MethodInfo*))List_1_get_Capacity_m15798_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15799_gshared (List_1_t526 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m15799(__this, ___value, method) (( void (*) (List_1_t526 *, int32_t, const MethodInfo*))List_1_set_Capacity_m15799_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m15800_gshared (List_1_t526 * __this, const MethodInfo* method);
#define List_1_get_Count_m15800(__this, method) (( int32_t (*) (List_1_t526 *, const MethodInfo*))List_1_get_Count_m15800_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t384  List_1_get_Item_m15801_gshared (List_1_t526 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m15801(__this, ___index, method) (( UICharInfo_t384  (*) (List_1_t526 *, int32_t, const MethodInfo*))List_1_get_Item_m15801_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15802_gshared (List_1_t526 * __this, int32_t ___index, UICharInfo_t384  ___value, const MethodInfo* method);
#define List_1_set_Item_m15802(__this, ___index, ___value, method) (( void (*) (List_1_t526 *, int32_t, UICharInfo_t384 , const MethodInfo*))List_1_set_Item_m15802_gshared)(__this, ___index, ___value, method)
