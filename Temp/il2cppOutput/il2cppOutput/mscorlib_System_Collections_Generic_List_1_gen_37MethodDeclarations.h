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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t391;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t414;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2064;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t64;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t2401;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1798;
// System.Object[]
struct ObjectU5BU5D_t75;
// System.Predicate`1<System.Object>
struct Predicate_1_t87;
// System.Comparison`1<System.Object>
struct Comparison_1_t1816;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m10735_gshared (List_1_t391 * __this, const MethodInfo* method);
#define List_1__ctor_m10735(__this, method) (( void (*) (List_1_t391 *, const MethodInfo*))List_1__ctor_m10735_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m10737_gshared (List_1_t391 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m10737(__this, ___collection, method) (( void (*) (List_1_t391 *, Object_t*, const MethodInfo*))List_1__ctor_m10737_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10739_gshared (List_1_t391 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10739(__this, ___capacity, method) (( void (*) (List_1_t391 *, int32_t, const MethodInfo*))List_1__ctor_m10739_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m10741_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m10741(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10741_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10743_gshared (List_1_t391 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10743(__this, method) (( Object_t* (*) (List_1_t391 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10743_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10745_gshared (List_1_t391 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10745(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t391 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10745_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10747_gshared (List_1_t391 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10747(__this, method) (( Object_t * (*) (List_1_t391 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10747_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10749_gshared (List_1_t391 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10749(__this, ___item, method) (( int32_t (*) (List_1_t391 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10749_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10751_gshared (List_1_t391 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10751(__this, ___item, method) (( bool (*) (List_1_t391 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10751_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10753_gshared (List_1_t391 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10753(__this, ___item, method) (( int32_t (*) (List_1_t391 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10753_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10755_gshared (List_1_t391 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10755(__this, ___index, ___item, method) (( void (*) (List_1_t391 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10755_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10757_gshared (List_1_t391 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10757(__this, ___item, method) (( void (*) (List_1_t391 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10757_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10759_gshared (List_1_t391 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10759(__this, method) (( bool (*) (List_1_t391 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10759_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10761_gshared (List_1_t391 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10761(__this, method) (( bool (*) (List_1_t391 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10761_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10763_gshared (List_1_t391 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10763(__this, method) (( Object_t * (*) (List_1_t391 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10763_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10765_gshared (List_1_t391 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10765(__this, method) (( bool (*) (List_1_t391 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10765_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10767_gshared (List_1_t391 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10767(__this, method) (( bool (*) (List_1_t391 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10767_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10769_gshared (List_1_t391 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10769(__this, ___index, method) (( Object_t * (*) (List_1_t391 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10769_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10771_gshared (List_1_t391 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10771(__this, ___index, ___value, method) (( void (*) (List_1_t391 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10771_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m10773_gshared (List_1_t391 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m10773(__this, ___item, method) (( void (*) (List_1_t391 *, Object_t *, const MethodInfo*))List_1_Add_m10773_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10775_gshared (List_1_t391 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m10775(__this, ___newCount, method) (( void (*) (List_1_t391 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10775_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m10777_gshared (List_1_t391 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m10777(__this, ___collection, method) (( void (*) (List_1_t391 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10777_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m10779_gshared (List_1_t391 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m10779(__this, ___enumerable, method) (( void (*) (List_1_t391 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10779_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m10781_gshared (List_1_t391 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m10781(__this, ___collection, method) (( void (*) (List_1_t391 *, Object_t*, const MethodInfo*))List_1_AddRange_m10781_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1798 * List_1_AsReadOnly_m10783_gshared (List_1_t391 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m10783(__this, method) (( ReadOnlyCollection_1_t1798 * (*) (List_1_t391 *, const MethodInfo*))List_1_AsReadOnly_m10783_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m10785_gshared (List_1_t391 * __this, const MethodInfo* method);
#define List_1_Clear_m10785(__this, method) (( void (*) (List_1_t391 *, const MethodInfo*))List_1_Clear_m10785_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m10787_gshared (List_1_t391 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m10787(__this, ___item, method) (( bool (*) (List_1_t391 *, Object_t *, const MethodInfo*))List_1_Contains_m10787_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10789_gshared (List_1_t391 * __this, ObjectU5BU5D_t75* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10789(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t391 *, ObjectU5BU5D_t75*, int32_t, const MethodInfo*))List_1_CopyTo_m10789_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m10791_gshared (List_1_t391 * __this, Predicate_1_t87 * ___match, const MethodInfo* method);
#define List_1_Find_m10791(__this, ___match, method) (( Object_t * (*) (List_1_t391 *, Predicate_1_t87 *, const MethodInfo*))List_1_Find_m10791_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m10793_gshared (Object_t * __this /* static, unused */, Predicate_1_t87 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m10793(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t87 *, const MethodInfo*))List_1_CheckMatch_m10793_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m10795_gshared (List_1_t391 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t87 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m10795(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t391 *, int32_t, int32_t, Predicate_1_t87 *, const MethodInfo*))List_1_GetIndex_m10795_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1806  List_1_GetEnumerator_m10796_gshared (List_1_t391 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m10796(__this, method) (( Enumerator_t1806  (*) (List_1_t391 *, const MethodInfo*))List_1_GetEnumerator_m10796_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10798_gshared (List_1_t391 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m10798(__this, ___item, method) (( int32_t (*) (List_1_t391 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10798_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m10800_gshared (List_1_t391 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m10800(__this, ___start, ___delta, method) (( void (*) (List_1_t391 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10800_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m10802_gshared (List_1_t391 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m10802(__this, ___index, method) (( void (*) (List_1_t391 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10802_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10804_gshared (List_1_t391 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m10804(__this, ___index, ___item, method) (( void (*) (List_1_t391 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10804_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m10806_gshared (List_1_t391 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m10806(__this, ___collection, method) (( void (*) (List_1_t391 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10806_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m10808_gshared (List_1_t391 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m10808(__this, ___item, method) (( bool (*) (List_1_t391 *, Object_t *, const MethodInfo*))List_1_Remove_m10808_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m10810_gshared (List_1_t391 * __this, Predicate_1_t87 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m10810(__this, ___match, method) (( int32_t (*) (List_1_t391 *, Predicate_1_t87 *, const MethodInfo*))List_1_RemoveAll_m10810_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10812_gshared (List_1_t391 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10812(__this, ___index, method) (( void (*) (List_1_t391 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10812_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m10814_gshared (List_1_t391 * __this, const MethodInfo* method);
#define List_1_Reverse_m10814(__this, method) (( void (*) (List_1_t391 *, const MethodInfo*))List_1_Reverse_m10814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m10816_gshared (List_1_t391 * __this, const MethodInfo* method);
#define List_1_Sort_m10816(__this, method) (( void (*) (List_1_t391 *, const MethodInfo*))List_1_Sort_m10816_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m10818_gshared (List_1_t391 * __this, Comparison_1_t1816 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m10818(__this, ___comparison, method) (( void (*) (List_1_t391 *, Comparison_1_t1816 *, const MethodInfo*))List_1_Sort_m10818_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t75* List_1_ToArray_m10820_gshared (List_1_t391 * __this, const MethodInfo* method);
#define List_1_ToArray_m10820(__this, method) (( ObjectU5BU5D_t75* (*) (List_1_t391 *, const MethodInfo*))List_1_ToArray_m10820_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m10822_gshared (List_1_t391 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m10822(__this, method) (( void (*) (List_1_t391 *, const MethodInfo*))List_1_TrimExcess_m10822_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m10824_gshared (List_1_t391 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m10824(__this, method) (( int32_t (*) (List_1_t391 *, const MethodInfo*))List_1_get_Capacity_m10824_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m10826_gshared (List_1_t391 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m10826(__this, ___value, method) (( void (*) (List_1_t391 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10826_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m10828_gshared (List_1_t391 * __this, const MethodInfo* method);
#define List_1_get_Count_m10828(__this, method) (( int32_t (*) (List_1_t391 *, const MethodInfo*))List_1_get_Count_m10828_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m10830_gshared (List_1_t391 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10830(__this, ___index, method) (( Object_t * (*) (List_1_t391 *, int32_t, const MethodInfo*))List_1_get_Item_m10830_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10832_gshared (List_1_t391 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m10832(__this, ___index, ___value, method) (( void (*) (List_1_t391 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10832_gshared)(__this, ___index, ___value, method)
