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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1912;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1914;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t631;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2400;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2401;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t849;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1917;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m12292_gshared (Dictionary_2_t1912 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12292(__this, method) (( void (*) (Dictionary_2_t1912 *, const MethodInfo*))Dictionary_2__ctor_m12292_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12293_gshared (Dictionary_2_t1912 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12293(__this, ___comparer, method) (( void (*) (Dictionary_2_t1912 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12293_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12294_gshared (Dictionary_2_t1912 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12294(__this, ___capacity, method) (( void (*) (Dictionary_2_t1912 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12294_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12295_gshared (Dictionary_2_t1912 * __this, SerializationInfo_t631 * ___info, StreamingContext_t632  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12295(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1912 *, SerializationInfo_t631 *, StreamingContext_t632 , const MethodInfo*))Dictionary_2__ctor_m12295_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12296_gshared (Dictionary_2_t1912 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12296(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1912 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12296_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12297_gshared (Dictionary_2_t1912 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12297(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1912 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12297_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12298_gshared (Dictionary_2_t1912 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12298(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1912 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12298_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12299_gshared (Dictionary_2_t1912 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12299(__this, ___key, method) (( bool (*) (Dictionary_2_t1912 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12299_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12300_gshared (Dictionary_2_t1912 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12300(__this, ___key, method) (( void (*) (Dictionary_2_t1912 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12300_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12301_gshared (Dictionary_2_t1912 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12301(__this, method) (( bool (*) (Dictionary_2_t1912 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12301_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12302_gshared (Dictionary_2_t1912 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12302(__this, method) (( Object_t * (*) (Dictionary_2_t1912 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12302_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12303_gshared (Dictionary_2_t1912 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12303(__this, method) (( bool (*) (Dictionary_2_t1912 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12303_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12304_gshared (Dictionary_2_t1912 * __this, KeyValuePair_2_t1915  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12304(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1912 *, KeyValuePair_2_t1915 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12304_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12305_gshared (Dictionary_2_t1912 * __this, KeyValuePair_2_t1915  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12305(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1912 *, KeyValuePair_2_t1915 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12305_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12306_gshared (Dictionary_2_t1912 * __this, KeyValuePair_2U5BU5D_t2400* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12306(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1912 *, KeyValuePair_2U5BU5D_t2400*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12306_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12307_gshared (Dictionary_2_t1912 * __this, KeyValuePair_2_t1915  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12307(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1912 *, KeyValuePair_2_t1915 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12307_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12308_gshared (Dictionary_2_t1912 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12308(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1912 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12308_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12309_gshared (Dictionary_2_t1912 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12309(__this, method) (( Object_t * (*) (Dictionary_2_t1912 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12309_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12310_gshared (Dictionary_2_t1912 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12310(__this, method) (( Object_t* (*) (Dictionary_2_t1912 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12310_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12311_gshared (Dictionary_2_t1912 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12311(__this, method) (( Object_t * (*) (Dictionary_2_t1912 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12311_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12312_gshared (Dictionary_2_t1912 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12312(__this, method) (( int32_t (*) (Dictionary_2_t1912 *, const MethodInfo*))Dictionary_2_get_Count_m12312_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m12313_gshared (Dictionary_2_t1912 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12313(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1912 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m12313_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12314_gshared (Dictionary_2_t1912 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12314(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1912 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m12314_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12315_gshared (Dictionary_2_t1912 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12315(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1912 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12315_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12316_gshared (Dictionary_2_t1912 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12316(__this, ___size, method) (( void (*) (Dictionary_2_t1912 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12316_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12317_gshared (Dictionary_2_t1912 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12317(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1912 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12317_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1915  Dictionary_2_make_pair_m12318_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12318(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1915  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m12318_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m12319_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12319(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m12319_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12320_gshared (Dictionary_2_t1912 * __this, KeyValuePair_2U5BU5D_t2400* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12320(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1912 *, KeyValuePair_2U5BU5D_t2400*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12320_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m12321_gshared (Dictionary_2_t1912 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12321(__this, method) (( void (*) (Dictionary_2_t1912 *, const MethodInfo*))Dictionary_2_Resize_m12321_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12322_gshared (Dictionary_2_t1912 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12322(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1912 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m12322_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m12323_gshared (Dictionary_2_t1912 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12323(__this, method) (( void (*) (Dictionary_2_t1912 *, const MethodInfo*))Dictionary_2_Clear_m12323_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12324_gshared (Dictionary_2_t1912 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12324(__this, ___key, method) (( bool (*) (Dictionary_2_t1912 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m12324_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12325_gshared (Dictionary_2_t1912 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12325(__this, ___value, method) (( bool (*) (Dictionary_2_t1912 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m12325_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12326_gshared (Dictionary_2_t1912 * __this, SerializationInfo_t631 * ___info, StreamingContext_t632  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12326(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1912 *, SerializationInfo_t631 *, StreamingContext_t632 , const MethodInfo*))Dictionary_2_GetObjectData_m12326_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12327_gshared (Dictionary_2_t1912 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12327(__this, ___sender, method) (( void (*) (Dictionary_2_t1912 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12327_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12328_gshared (Dictionary_2_t1912 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12328(__this, ___key, method) (( bool (*) (Dictionary_2_t1912 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m12328_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12329_gshared (Dictionary_2_t1912 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12329(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1912 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m12329_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1917 * Dictionary_2_get_Values_m12330_gshared (Dictionary_2_t1912 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12330(__this, method) (( ValueCollection_t1917 * (*) (Dictionary_2_t1912 *, const MethodInfo*))Dictionary_2_get_Values_m12330_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m12331_gshared (Dictionary_2_t1912 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12331(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1912 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12331_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m12332_gshared (Dictionary_2_t1912 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12332(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1912 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12332_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12333_gshared (Dictionary_2_t1912 * __this, KeyValuePair_2_t1915  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12333(__this, ___pair, method) (( bool (*) (Dictionary_2_t1912 *, KeyValuePair_2_t1915 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12333_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1919  Dictionary_2_GetEnumerator_m12334_gshared (Dictionary_2_t1912 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12334(__this, method) (( Enumerator_t1919  (*) (Dictionary_2_t1912 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12334_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1037  Dictionary_2_U3CCopyToU3Em__0_m12335_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12335(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1037  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12335_gshared)(__this /* static, unused */, ___key, ___value, method)
