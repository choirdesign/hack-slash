﻿#pragma once

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
struct Dictionary_2_t1831;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1833;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t647;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2409;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t71;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2410;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t865;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1837;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m11046_gshared (Dictionary_2_t1831 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11046(__this, method) (( void (*) (Dictionary_2_t1831 *, const MethodInfo*))Dictionary_2__ctor_m11046_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11048_gshared (Dictionary_2_t1831 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11048(__this, ___comparer, method) (( void (*) (Dictionary_2_t1831 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11048_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11049_gshared (Dictionary_2_t1831 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11049(__this, ___capacity, method) (( void (*) (Dictionary_2_t1831 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11049_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11051_gshared (Dictionary_2_t1831 * __this, SerializationInfo_t647 * ___info, StreamingContext_t648  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11051(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1831 *, SerializationInfo_t647 *, StreamingContext_t648 , const MethodInfo*))Dictionary_2__ctor_m11051_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11053_gshared (Dictionary_2_t1831 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11053(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1831 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11053_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11055_gshared (Dictionary_2_t1831 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11055(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1831 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11055_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11057_gshared (Dictionary_2_t1831 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11057(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1831 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11057_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11059_gshared (Dictionary_2_t1831 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11059(__this, ___key, method) (( bool (*) (Dictionary_2_t1831 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11059_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11061_gshared (Dictionary_2_t1831 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11061(__this, ___key, method) (( void (*) (Dictionary_2_t1831 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11061_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11063_gshared (Dictionary_2_t1831 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11063(__this, method) (( bool (*) (Dictionary_2_t1831 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11063_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11065_gshared (Dictionary_2_t1831 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11065(__this, method) (( Object_t * (*) (Dictionary_2_t1831 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11065_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11067_gshared (Dictionary_2_t1831 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11067(__this, method) (( bool (*) (Dictionary_2_t1831 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11067_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11069_gshared (Dictionary_2_t1831 * __this, KeyValuePair_2_t1834  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11069(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1831 *, KeyValuePair_2_t1834 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11069_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11071_gshared (Dictionary_2_t1831 * __this, KeyValuePair_2_t1834  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11071(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1831 *, KeyValuePair_2_t1834 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11071_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11073_gshared (Dictionary_2_t1831 * __this, KeyValuePair_2U5BU5D_t2409* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11073(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1831 *, KeyValuePair_2U5BU5D_t2409*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11073_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11075_gshared (Dictionary_2_t1831 * __this, KeyValuePair_2_t1834  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11075(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1831 *, KeyValuePair_2_t1834 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11075_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11077_gshared (Dictionary_2_t1831 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11077(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1831 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11077_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11079_gshared (Dictionary_2_t1831 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11079(__this, method) (( Object_t * (*) (Dictionary_2_t1831 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11079_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11081_gshared (Dictionary_2_t1831 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11081(__this, method) (( Object_t* (*) (Dictionary_2_t1831 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11081_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11083_gshared (Dictionary_2_t1831 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11083(__this, method) (( Object_t * (*) (Dictionary_2_t1831 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11083_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11085_gshared (Dictionary_2_t1831 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11085(__this, method) (( int32_t (*) (Dictionary_2_t1831 *, const MethodInfo*))Dictionary_2_get_Count_m11085_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m11087_gshared (Dictionary_2_t1831 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11087(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1831 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m11087_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11089_gshared (Dictionary_2_t1831 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11089(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1831 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m11089_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11091_gshared (Dictionary_2_t1831 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11091(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1831 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11091_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11093_gshared (Dictionary_2_t1831 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11093(__this, ___size, method) (( void (*) (Dictionary_2_t1831 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11093_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11095_gshared (Dictionary_2_t1831 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11095(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1831 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11095_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1834  Dictionary_2_make_pair_m11097_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11097(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1834  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m11097_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m11099_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11099(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m11099_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11101_gshared (Dictionary_2_t1831 * __this, KeyValuePair_2U5BU5D_t2409* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11101(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1831 *, KeyValuePair_2U5BU5D_t2409*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11101_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m11103_gshared (Dictionary_2_t1831 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11103(__this, method) (( void (*) (Dictionary_2_t1831 *, const MethodInfo*))Dictionary_2_Resize_m11103_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11105_gshared (Dictionary_2_t1831 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11105(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1831 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m11105_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m11107_gshared (Dictionary_2_t1831 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11107(__this, method) (( void (*) (Dictionary_2_t1831 *, const MethodInfo*))Dictionary_2_Clear_m11107_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11109_gshared (Dictionary_2_t1831 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11109(__this, ___key, method) (( bool (*) (Dictionary_2_t1831 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m11109_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11111_gshared (Dictionary_2_t1831 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11111(__this, ___value, method) (( bool (*) (Dictionary_2_t1831 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m11111_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11113_gshared (Dictionary_2_t1831 * __this, SerializationInfo_t647 * ___info, StreamingContext_t648  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11113(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1831 *, SerializationInfo_t647 *, StreamingContext_t648 , const MethodInfo*))Dictionary_2_GetObjectData_m11113_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11115_gshared (Dictionary_2_t1831 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11115(__this, ___sender, method) (( void (*) (Dictionary_2_t1831 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11115_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11117_gshared (Dictionary_2_t1831 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11117(__this, ___key, method) (( bool (*) (Dictionary_2_t1831 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m11117_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11119_gshared (Dictionary_2_t1831 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11119(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1831 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m11119_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1837 * Dictionary_2_get_Values_m11121_gshared (Dictionary_2_t1831 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11121(__this, method) (( ValueCollection_t1837 * (*) (Dictionary_2_t1831 *, const MethodInfo*))Dictionary_2_get_Values_m11121_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m11123_gshared (Dictionary_2_t1831 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11123(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1831 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11123_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m11125_gshared (Dictionary_2_t1831 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11125(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1831 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11125_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11127_gshared (Dictionary_2_t1831 * __this, KeyValuePair_2_t1834  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11127(__this, ___pair, method) (( bool (*) (Dictionary_2_t1831 *, KeyValuePair_2_t1834 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11127_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1839  Dictionary_2_GetEnumerator_m11129_gshared (Dictionary_2_t1831 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11129(__this, method) (( Enumerator_t1839  (*) (Dictionary_2_t1831 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11129_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1053  Dictionary_2_U3CCopyToU3Em__0_m11131_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11131(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1053  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11131_gshared)(__this /* static, unused */, ___key, ___value, method)
