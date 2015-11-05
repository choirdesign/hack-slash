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
struct List_1_t516;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t2441;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t2442;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t2443;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t2173;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t626;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2177;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2180;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_32.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m15710_gshared (List_1_t516 * __this, const MethodInfo* method);
#define List_1__ctor_m15710(__this, method) (( void (*) (List_1_t516 *, const MethodInfo*))List_1__ctor_m15710_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15711_gshared (List_1_t516 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m15711(__this, ___collection, method) (( void (*) (List_1_t516 *, Object_t*, const MethodInfo*))List_1__ctor_m15711_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3377_gshared (List_1_t516 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3377(__this, ___capacity, method) (( void (*) (List_1_t516 *, int32_t, const MethodInfo*))List_1__ctor_m3377_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m15712_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m15712(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m15712_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15713_gshared (List_1_t516 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15713(__this, method) (( Object_t* (*) (List_1_t516 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15713_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15714_gshared (List_1_t516 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15714(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t516 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15714_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15715_gshared (List_1_t516 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15715(__this, method) (( Object_t * (*) (List_1_t516 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15715_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15716_gshared (List_1_t516 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15716(__this, ___item, method) (( int32_t (*) (List_1_t516 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m15716_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15717_gshared (List_1_t516 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15717(__this, ___item, method) (( bool (*) (List_1_t516 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m15717_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15718_gshared (List_1_t516 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15718(__this, ___item, method) (( int32_t (*) (List_1_t516 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m15718_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15719_gshared (List_1_t516 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15719(__this, ___index, ___item, method) (( void (*) (List_1_t516 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m15719_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15720_gshared (List_1_t516 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15720(__this, ___item, method) (( void (*) (List_1_t516 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m15720_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15721_gshared (List_1_t516 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15721(__this, method) (( bool (*) (List_1_t516 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15721_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15722_gshared (List_1_t516 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15722(__this, method) (( bool (*) (List_1_t516 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15722_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15723_gshared (List_1_t516 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15723(__this, method) (( Object_t * (*) (List_1_t516 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15723_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15724_gshared (List_1_t516 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15724(__this, method) (( bool (*) (List_1_t516 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15724_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15725_gshared (List_1_t516 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15725(__this, method) (( bool (*) (List_1_t516 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15725_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15726_gshared (List_1_t516 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15726(__this, ___index, method) (( Object_t * (*) (List_1_t516 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m15726_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15727_gshared (List_1_t516 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15727(__this, ___index, ___value, method) (( void (*) (List_1_t516 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m15727_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m15728_gshared (List_1_t516 * __this, UICharInfo_t377  ___item, const MethodInfo* method);
#define List_1_Add_m15728(__this, ___item, method) (( void (*) (List_1_t516 *, UICharInfo_t377 , const MethodInfo*))List_1_Add_m15728_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15729_gshared (List_1_t516 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m15729(__this, ___newCount, method) (( void (*) (List_1_t516 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m15729_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15730_gshared (List_1_t516 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m15730(__this, ___collection, method) (( void (*) (List_1_t516 *, Object_t*, const MethodInfo*))List_1_AddCollection_m15730_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15731_gshared (List_1_t516 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m15731(__this, ___enumerable, method) (( void (*) (List_1_t516 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m15731_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15732_gshared (List_1_t516 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m15732(__this, ___collection, method) (( void (*) (List_1_t516 *, Object_t*, const MethodInfo*))List_1_AddRange_m15732_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2173 * List_1_AsReadOnly_m15733_gshared (List_1_t516 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m15733(__this, method) (( ReadOnlyCollection_1_t2173 * (*) (List_1_t516 *, const MethodInfo*))List_1_AsReadOnly_m15733_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m15734_gshared (List_1_t516 * __this, const MethodInfo* method);
#define List_1_Clear_m15734(__this, method) (( void (*) (List_1_t516 *, const MethodInfo*))List_1_Clear_m15734_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m15735_gshared (List_1_t516 * __this, UICharInfo_t377  ___item, const MethodInfo* method);
#define List_1_Contains_m15735(__this, ___item, method) (( bool (*) (List_1_t516 *, UICharInfo_t377 , const MethodInfo*))List_1_Contains_m15735_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15736_gshared (List_1_t516 * __this, UICharInfoU5BU5D_t626* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m15736(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t516 *, UICharInfoU5BU5D_t626*, int32_t, const MethodInfo*))List_1_CopyTo_m15736_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t377  List_1_Find_m15737_gshared (List_1_t516 * __this, Predicate_1_t2177 * ___match, const MethodInfo* method);
#define List_1_Find_m15737(__this, ___match, method) (( UICharInfo_t377  (*) (List_1_t516 *, Predicate_1_t2177 *, const MethodInfo*))List_1_Find_m15737_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15738_gshared (Object_t * __this /* static, unused */, Predicate_1_t2177 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m15738(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2177 *, const MethodInfo*))List_1_CheckMatch_m15738_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15739_gshared (List_1_t516 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2177 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m15739(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t516 *, int32_t, int32_t, Predicate_1_t2177 *, const MethodInfo*))List_1_GetIndex_m15739_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t2172  List_1_GetEnumerator_m15740_gshared (List_1_t516 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m15740(__this, method) (( Enumerator_t2172  (*) (List_1_t516 *, const MethodInfo*))List_1_GetEnumerator_m15740_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15741_gshared (List_1_t516 * __this, UICharInfo_t377  ___item, const MethodInfo* method);
#define List_1_IndexOf_m15741(__this, ___item, method) (( int32_t (*) (List_1_t516 *, UICharInfo_t377 , const MethodInfo*))List_1_IndexOf_m15741_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15742_gshared (List_1_t516 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m15742(__this, ___start, ___delta, method) (( void (*) (List_1_t516 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m15742_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15743_gshared (List_1_t516 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m15743(__this, ___index, method) (( void (*) (List_1_t516 *, int32_t, const MethodInfo*))List_1_CheckIndex_m15743_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15744_gshared (List_1_t516 * __this, int32_t ___index, UICharInfo_t377  ___item, const MethodInfo* method);
#define List_1_Insert_m15744(__this, ___index, ___item, method) (( void (*) (List_1_t516 *, int32_t, UICharInfo_t377 , const MethodInfo*))List_1_Insert_m15744_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15745_gshared (List_1_t516 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m15745(__this, ___collection, method) (( void (*) (List_1_t516 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m15745_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m15746_gshared (List_1_t516 * __this, UICharInfo_t377  ___item, const MethodInfo* method);
#define List_1_Remove_m15746(__this, ___item, method) (( bool (*) (List_1_t516 *, UICharInfo_t377 , const MethodInfo*))List_1_Remove_m15746_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15747_gshared (List_1_t516 * __this, Predicate_1_t2177 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m15747(__this, ___match, method) (( int32_t (*) (List_1_t516 *, Predicate_1_t2177 *, const MethodInfo*))List_1_RemoveAll_m15747_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15748_gshared (List_1_t516 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m15748(__this, ___index, method) (( void (*) (List_1_t516 *, int32_t, const MethodInfo*))List_1_RemoveAt_m15748_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m15749_gshared (List_1_t516 * __this, const MethodInfo* method);
#define List_1_Reverse_m15749(__this, method) (( void (*) (List_1_t516 *, const MethodInfo*))List_1_Reverse_m15749_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m15750_gshared (List_1_t516 * __this, const MethodInfo* method);
#define List_1_Sort_m15750(__this, method) (( void (*) (List_1_t516 *, const MethodInfo*))List_1_Sort_m15750_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15751_gshared (List_1_t516 * __this, Comparison_1_t2180 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m15751(__this, ___comparison, method) (( void (*) (List_1_t516 *, Comparison_1_t2180 *, const MethodInfo*))List_1_Sort_m15751_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t626* List_1_ToArray_m15752_gshared (List_1_t516 * __this, const MethodInfo* method);
#define List_1_ToArray_m15752(__this, method) (( UICharInfoU5BU5D_t626* (*) (List_1_t516 *, const MethodInfo*))List_1_ToArray_m15752_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m15753_gshared (List_1_t516 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m15753(__this, method) (( void (*) (List_1_t516 *, const MethodInfo*))List_1_TrimExcess_m15753_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15754_gshared (List_1_t516 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m15754(__this, method) (( int32_t (*) (List_1_t516 *, const MethodInfo*))List_1_get_Capacity_m15754_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15755_gshared (List_1_t516 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m15755(__this, ___value, method) (( void (*) (List_1_t516 *, int32_t, const MethodInfo*))List_1_set_Capacity_m15755_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m15756_gshared (List_1_t516 * __this, const MethodInfo* method);
#define List_1_get_Count_m15756(__this, method) (( int32_t (*) (List_1_t516 *, const MethodInfo*))List_1_get_Count_m15756_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t377  List_1_get_Item_m15757_gshared (List_1_t516 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m15757(__this, ___index, method) (( UICharInfo_t377  (*) (List_1_t516 *, int32_t, const MethodInfo*))List_1_get_Item_m15757_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15758_gshared (List_1_t516 * __this, int32_t ___index, UICharInfo_t377  ___value, const MethodInfo* method);
#define List_1_set_Item_m15758(__this, ___index, ___value, method) (( void (*) (List_1_t516 *, int32_t, UICharInfo_t377 , const MethodInfo*))List_1_set_Item_m15758_gshared)(__this, ___index, ___value, method)
