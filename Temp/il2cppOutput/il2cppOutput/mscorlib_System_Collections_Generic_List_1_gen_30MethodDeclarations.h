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
struct List_1_t515;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t2442;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t2443;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t57;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t377;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t2180;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t625;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2184;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2187;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_33.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m15840_gshared (List_1_t515 * __this, const MethodInfo* method);
#define List_1__ctor_m15840(__this, method) (( void (*) (List_1_t515 *, const MethodInfo*))List_1__ctor_m15840_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15841_gshared (List_1_t515 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m15841(__this, ___collection, method) (( void (*) (List_1_t515 *, Object_t*, const MethodInfo*))List_1__ctor_m15841_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3364_gshared (List_1_t515 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3364(__this, ___capacity, method) (( void (*) (List_1_t515 *, int32_t, const MethodInfo*))List_1__ctor_m3364_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m15842_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m15842(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m15842_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15843_gshared (List_1_t515 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15843(__this, method) (( Object_t* (*) (List_1_t515 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15843_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15844_gshared (List_1_t515 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15844(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t515 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15844_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15845_gshared (List_1_t515 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15845(__this, method) (( Object_t * (*) (List_1_t515 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15845_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15846_gshared (List_1_t515 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15846(__this, ___item, method) (( int32_t (*) (List_1_t515 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m15846_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15847_gshared (List_1_t515 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15847(__this, ___item, method) (( bool (*) (List_1_t515 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m15847_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15848_gshared (List_1_t515 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15848(__this, ___item, method) (( int32_t (*) (List_1_t515 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m15848_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15849_gshared (List_1_t515 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15849(__this, ___index, ___item, method) (( void (*) (List_1_t515 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m15849_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15850_gshared (List_1_t515 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15850(__this, ___item, method) (( void (*) (List_1_t515 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m15850_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15851_gshared (List_1_t515 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15851(__this, method) (( bool (*) (List_1_t515 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15851_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15852_gshared (List_1_t515 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15852(__this, method) (( bool (*) (List_1_t515 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15852_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15853_gshared (List_1_t515 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15853(__this, method) (( Object_t * (*) (List_1_t515 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15853_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15854_gshared (List_1_t515 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15854(__this, method) (( bool (*) (List_1_t515 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15854_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15855_gshared (List_1_t515 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15855(__this, method) (( bool (*) (List_1_t515 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15855_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15856_gshared (List_1_t515 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15856(__this, ___index, method) (( Object_t * (*) (List_1_t515 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m15856_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15857_gshared (List_1_t515 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15857(__this, ___index, ___value, method) (( void (*) (List_1_t515 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m15857_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m15858_gshared (List_1_t515 * __this, UILineInfo_t373  ___item, const MethodInfo* method);
#define List_1_Add_m15858(__this, ___item, method) (( void (*) (List_1_t515 *, UILineInfo_t373 , const MethodInfo*))List_1_Add_m15858_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15859_gshared (List_1_t515 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m15859(__this, ___newCount, method) (( void (*) (List_1_t515 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m15859_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15860_gshared (List_1_t515 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m15860(__this, ___collection, method) (( void (*) (List_1_t515 *, Object_t*, const MethodInfo*))List_1_AddCollection_m15860_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15861_gshared (List_1_t515 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m15861(__this, ___enumerable, method) (( void (*) (List_1_t515 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m15861_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15862_gshared (List_1_t515 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m15862(__this, ___collection, method) (( void (*) (List_1_t515 *, Object_t*, const MethodInfo*))List_1_AddRange_m15862_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2180 * List_1_AsReadOnly_m15863_gshared (List_1_t515 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m15863(__this, method) (( ReadOnlyCollection_1_t2180 * (*) (List_1_t515 *, const MethodInfo*))List_1_AsReadOnly_m15863_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m15864_gshared (List_1_t515 * __this, const MethodInfo* method);
#define List_1_Clear_m15864(__this, method) (( void (*) (List_1_t515 *, const MethodInfo*))List_1_Clear_m15864_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m15865_gshared (List_1_t515 * __this, UILineInfo_t373  ___item, const MethodInfo* method);
#define List_1_Contains_m15865(__this, ___item, method) (( bool (*) (List_1_t515 *, UILineInfo_t373 , const MethodInfo*))List_1_Contains_m15865_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15866_gshared (List_1_t515 * __this, UILineInfoU5BU5D_t625* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m15866(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t515 *, UILineInfoU5BU5D_t625*, int32_t, const MethodInfo*))List_1_CopyTo_m15866_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t373  List_1_Find_m15867_gshared (List_1_t515 * __this, Predicate_1_t2184 * ___match, const MethodInfo* method);
#define List_1_Find_m15867(__this, ___match, method) (( UILineInfo_t373  (*) (List_1_t515 *, Predicate_1_t2184 *, const MethodInfo*))List_1_Find_m15867_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15868_gshared (Object_t * __this /* static, unused */, Predicate_1_t2184 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m15868(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2184 *, const MethodInfo*))List_1_CheckMatch_m15868_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15869_gshared (List_1_t515 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2184 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m15869(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t515 *, int32_t, int32_t, Predicate_1_t2184 *, const MethodInfo*))List_1_GetIndex_m15869_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2179  List_1_GetEnumerator_m15870_gshared (List_1_t515 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m15870(__this, method) (( Enumerator_t2179  (*) (List_1_t515 *, const MethodInfo*))List_1_GetEnumerator_m15870_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15871_gshared (List_1_t515 * __this, UILineInfo_t373  ___item, const MethodInfo* method);
#define List_1_IndexOf_m15871(__this, ___item, method) (( int32_t (*) (List_1_t515 *, UILineInfo_t373 , const MethodInfo*))List_1_IndexOf_m15871_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15872_gshared (List_1_t515 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m15872(__this, ___start, ___delta, method) (( void (*) (List_1_t515 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m15872_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15873_gshared (List_1_t515 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m15873(__this, ___index, method) (( void (*) (List_1_t515 *, int32_t, const MethodInfo*))List_1_CheckIndex_m15873_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15874_gshared (List_1_t515 * __this, int32_t ___index, UILineInfo_t373  ___item, const MethodInfo* method);
#define List_1_Insert_m15874(__this, ___index, ___item, method) (( void (*) (List_1_t515 *, int32_t, UILineInfo_t373 , const MethodInfo*))List_1_Insert_m15874_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15875_gshared (List_1_t515 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m15875(__this, ___collection, method) (( void (*) (List_1_t515 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m15875_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m15876_gshared (List_1_t515 * __this, UILineInfo_t373  ___item, const MethodInfo* method);
#define List_1_Remove_m15876(__this, ___item, method) (( bool (*) (List_1_t515 *, UILineInfo_t373 , const MethodInfo*))List_1_Remove_m15876_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15877_gshared (List_1_t515 * __this, Predicate_1_t2184 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m15877(__this, ___match, method) (( int32_t (*) (List_1_t515 *, Predicate_1_t2184 *, const MethodInfo*))List_1_RemoveAll_m15877_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15878_gshared (List_1_t515 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m15878(__this, ___index, method) (( void (*) (List_1_t515 *, int32_t, const MethodInfo*))List_1_RemoveAt_m15878_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m15879_gshared (List_1_t515 * __this, const MethodInfo* method);
#define List_1_Reverse_m15879(__this, method) (( void (*) (List_1_t515 *, const MethodInfo*))List_1_Reverse_m15879_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m15880_gshared (List_1_t515 * __this, const MethodInfo* method);
#define List_1_Sort_m15880(__this, method) (( void (*) (List_1_t515 *, const MethodInfo*))List_1_Sort_m15880_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15881_gshared (List_1_t515 * __this, Comparison_1_t2187 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m15881(__this, ___comparison, method) (( void (*) (List_1_t515 *, Comparison_1_t2187 *, const MethodInfo*))List_1_Sort_m15881_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t625* List_1_ToArray_m15882_gshared (List_1_t515 * __this, const MethodInfo* method);
#define List_1_ToArray_m15882(__this, method) (( UILineInfoU5BU5D_t625* (*) (List_1_t515 *, const MethodInfo*))List_1_ToArray_m15882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m15883_gshared (List_1_t515 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m15883(__this, method) (( void (*) (List_1_t515 *, const MethodInfo*))List_1_TrimExcess_m15883_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15884_gshared (List_1_t515 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m15884(__this, method) (( int32_t (*) (List_1_t515 *, const MethodInfo*))List_1_get_Capacity_m15884_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15885_gshared (List_1_t515 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m15885(__this, ___value, method) (( void (*) (List_1_t515 *, int32_t, const MethodInfo*))List_1_set_Capacity_m15885_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m15886_gshared (List_1_t515 * __this, const MethodInfo* method);
#define List_1_get_Count_m15886(__this, method) (( int32_t (*) (List_1_t515 *, const MethodInfo*))List_1_get_Count_m15886_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t373  List_1_get_Item_m15887_gshared (List_1_t515 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m15887(__this, ___index, method) (( UILineInfo_t373  (*) (List_1_t515 *, int32_t, const MethodInfo*))List_1_get_Item_m15887_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15888_gshared (List_1_t515 * __this, int32_t ___index, UILineInfo_t373  ___value, const MethodInfo* method);
#define List_1_set_Item_m15888(__this, ___index, ___value, method) (( void (*) (List_1_t515 *, int32_t, UILineInfo_t373 , const MethodInfo*))List_1_set_Item_m15888_gshared)(__this, ___index, ___value, method)
