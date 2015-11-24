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
struct List_1_t397;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t420;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2070;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t71;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t2407;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1804;
// System.Object[]
struct ObjectU5BU5D_t82;
// System.Predicate`1<System.Object>
struct Predicate_1_t95;
// System.Comparison`1<System.Object>
struct Comparison_1_t1822;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m10782_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1__ctor_m10782(__this, method) (( void (*) (List_1_t397 *, const MethodInfo*))List_1__ctor_m10782_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m10784_gshared (List_1_t397 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m10784(__this, ___collection, method) (( void (*) (List_1_t397 *, Object_t*, const MethodInfo*))List_1__ctor_m10784_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10786_gshared (List_1_t397 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10786(__this, ___capacity, method) (( void (*) (List_1_t397 *, int32_t, const MethodInfo*))List_1__ctor_m10786_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m10788_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m10788(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10788_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10790_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10790(__this, method) (( Object_t* (*) (List_1_t397 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10790_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10792_gshared (List_1_t397 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10792(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t397 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10792_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10794_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10794(__this, method) (( Object_t * (*) (List_1_t397 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10794_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10796_gshared (List_1_t397 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10796(__this, ___item, method) (( int32_t (*) (List_1_t397 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10796_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10798_gshared (List_1_t397 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10798(__this, ___item, method) (( bool (*) (List_1_t397 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10798_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10800_gshared (List_1_t397 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10800(__this, ___item, method) (( int32_t (*) (List_1_t397 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10800_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10802_gshared (List_1_t397 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10802(__this, ___index, ___item, method) (( void (*) (List_1_t397 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10802_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10804_gshared (List_1_t397 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10804(__this, ___item, method) (( void (*) (List_1_t397 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10804_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10806_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10806(__this, method) (( bool (*) (List_1_t397 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10806_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10808_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10808(__this, method) (( bool (*) (List_1_t397 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10808_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10810_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10810(__this, method) (( Object_t * (*) (List_1_t397 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10810_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10812_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10812(__this, method) (( bool (*) (List_1_t397 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10812_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10814_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10814(__this, method) (( bool (*) (List_1_t397 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10814_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10816_gshared (List_1_t397 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10816(__this, ___index, method) (( Object_t * (*) (List_1_t397 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10816_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10818_gshared (List_1_t397 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10818(__this, ___index, ___value, method) (( void (*) (List_1_t397 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10818_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m10820_gshared (List_1_t397 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m10820(__this, ___item, method) (( void (*) (List_1_t397 *, Object_t *, const MethodInfo*))List_1_Add_m10820_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10822_gshared (List_1_t397 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m10822(__this, ___newCount, method) (( void (*) (List_1_t397 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10822_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m10824_gshared (List_1_t397 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m10824(__this, ___collection, method) (( void (*) (List_1_t397 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10824_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m10826_gshared (List_1_t397 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m10826(__this, ___enumerable, method) (( void (*) (List_1_t397 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10826_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m10828_gshared (List_1_t397 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m10828(__this, ___collection, method) (( void (*) (List_1_t397 *, Object_t*, const MethodInfo*))List_1_AddRange_m10828_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1804 * List_1_AsReadOnly_m10830_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m10830(__this, method) (( ReadOnlyCollection_1_t1804 * (*) (List_1_t397 *, const MethodInfo*))List_1_AsReadOnly_m10830_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m10832_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_Clear_m10832(__this, method) (( void (*) (List_1_t397 *, const MethodInfo*))List_1_Clear_m10832_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m10834_gshared (List_1_t397 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m10834(__this, ___item, method) (( bool (*) (List_1_t397 *, Object_t *, const MethodInfo*))List_1_Contains_m10834_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10836_gshared (List_1_t397 * __this, ObjectU5BU5D_t82* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10836(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t397 *, ObjectU5BU5D_t82*, int32_t, const MethodInfo*))List_1_CopyTo_m10836_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m10838_gshared (List_1_t397 * __this, Predicate_1_t95 * ___match, const MethodInfo* method);
#define List_1_Find_m10838(__this, ___match, method) (( Object_t * (*) (List_1_t397 *, Predicate_1_t95 *, const MethodInfo*))List_1_Find_m10838_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m10840_gshared (Object_t * __this /* static, unused */, Predicate_1_t95 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m10840(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t95 *, const MethodInfo*))List_1_CheckMatch_m10840_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m10842_gshared (List_1_t397 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t95 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m10842(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t397 *, int32_t, int32_t, Predicate_1_t95 *, const MethodInfo*))List_1_GetIndex_m10842_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1812  List_1_GetEnumerator_m10843_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m10843(__this, method) (( Enumerator_t1812  (*) (List_1_t397 *, const MethodInfo*))List_1_GetEnumerator_m10843_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10845_gshared (List_1_t397 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m10845(__this, ___item, method) (( int32_t (*) (List_1_t397 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10845_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m10847_gshared (List_1_t397 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m10847(__this, ___start, ___delta, method) (( void (*) (List_1_t397 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10847_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m10849_gshared (List_1_t397 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m10849(__this, ___index, method) (( void (*) (List_1_t397 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10849_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10851_gshared (List_1_t397 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m10851(__this, ___index, ___item, method) (( void (*) (List_1_t397 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10851_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m10853_gshared (List_1_t397 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m10853(__this, ___collection, method) (( void (*) (List_1_t397 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10853_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m10855_gshared (List_1_t397 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m10855(__this, ___item, method) (( bool (*) (List_1_t397 *, Object_t *, const MethodInfo*))List_1_Remove_m10855_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m10857_gshared (List_1_t397 * __this, Predicate_1_t95 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m10857(__this, ___match, method) (( int32_t (*) (List_1_t397 *, Predicate_1_t95 *, const MethodInfo*))List_1_RemoveAll_m10857_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10859_gshared (List_1_t397 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10859(__this, ___index, method) (( void (*) (List_1_t397 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10859_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m10861_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_Reverse_m10861(__this, method) (( void (*) (List_1_t397 *, const MethodInfo*))List_1_Reverse_m10861_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m10863_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_Sort_m10863(__this, method) (( void (*) (List_1_t397 *, const MethodInfo*))List_1_Sort_m10863_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m10865_gshared (List_1_t397 * __this, Comparison_1_t1822 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m10865(__this, ___comparison, method) (( void (*) (List_1_t397 *, Comparison_1_t1822 *, const MethodInfo*))List_1_Sort_m10865_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t82* List_1_ToArray_m10867_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_ToArray_m10867(__this, method) (( ObjectU5BU5D_t82* (*) (List_1_t397 *, const MethodInfo*))List_1_ToArray_m10867_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m10869_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m10869(__this, method) (( void (*) (List_1_t397 *, const MethodInfo*))List_1_TrimExcess_m10869_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m10871_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m10871(__this, method) (( int32_t (*) (List_1_t397 *, const MethodInfo*))List_1_get_Capacity_m10871_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m10873_gshared (List_1_t397 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m10873(__this, ___value, method) (( void (*) (List_1_t397 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10873_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m10875_gshared (List_1_t397 * __this, const MethodInfo* method);
#define List_1_get_Count_m10875(__this, method) (( int32_t (*) (List_1_t397 *, const MethodInfo*))List_1_get_Count_m10875_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m10877_gshared (List_1_t397 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10877(__this, ___index, method) (( Object_t * (*) (List_1_t397 *, int32_t, const MethodInfo*))List_1_get_Item_m10877_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10879_gshared (List_1_t397 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m10879(__this, ___index, ___value, method) (( void (*) (List_1_t397 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10879_gshared)(__this, ___index, ___value, method)
