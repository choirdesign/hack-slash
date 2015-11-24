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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1984;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1833;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t647;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2425;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t71;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2426;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t865;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m13006_gshared (Dictionary_2_t1984 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m13006(__this, method) (( void (*) (Dictionary_2_t1984 *, const MethodInfo*))Dictionary_2__ctor_m13006_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13008_gshared (Dictionary_2_t1984 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13008(__this, ___comparer, method) (( void (*) (Dictionary_2_t1984 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13008_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13010_gshared (Dictionary_2_t1984 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m13010(__this, ___capacity, method) (( void (*) (Dictionary_2_t1984 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13010_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13012_gshared (Dictionary_2_t1984 * __this, SerializationInfo_t647 * ___info, StreamingContext_t648  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m13012(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1984 *, SerializationInfo_t647 *, StreamingContext_t648 , const MethodInfo*))Dictionary_2__ctor_m13012_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13014_gshared (Dictionary_2_t1984 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13014(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1984 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13014_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13016_gshared (Dictionary_2_t1984 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13016(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1984 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13016_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13018_gshared (Dictionary_2_t1984 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13018(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1984 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13018_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13020_gshared (Dictionary_2_t1984 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13020(__this, ___key, method) (( bool (*) (Dictionary_2_t1984 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13020_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13022_gshared (Dictionary_2_t1984 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13022(__this, ___key, method) (( void (*) (Dictionary_2_t1984 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13022_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13024_gshared (Dictionary_2_t1984 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13024(__this, method) (( bool (*) (Dictionary_2_t1984 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13024_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13026_gshared (Dictionary_2_t1984 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13026(__this, method) (( Object_t * (*) (Dictionary_2_t1984 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13026_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13028_gshared (Dictionary_2_t1984 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13028(__this, method) (( bool (*) (Dictionary_2_t1984 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13028_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13030_gshared (Dictionary_2_t1984 * __this, KeyValuePair_2_t1986  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13030(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1984 *, KeyValuePair_2_t1986 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13030_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13032_gshared (Dictionary_2_t1984 * __this, KeyValuePair_2_t1986  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13032(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1984 *, KeyValuePair_2_t1986 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13032_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13034_gshared (Dictionary_2_t1984 * __this, KeyValuePair_2U5BU5D_t2425* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13034(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1984 *, KeyValuePair_2U5BU5D_t2425*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13034_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13036_gshared (Dictionary_2_t1984 * __this, KeyValuePair_2_t1986  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13036(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1984 *, KeyValuePair_2_t1986 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13036_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13038_gshared (Dictionary_2_t1984 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13038(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1984 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13038_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13040_gshared (Dictionary_2_t1984 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13040(__this, method) (( Object_t * (*) (Dictionary_2_t1984 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13040_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13042_gshared (Dictionary_2_t1984 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13042(__this, method) (( Object_t* (*) (Dictionary_2_t1984 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13042_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13044_gshared (Dictionary_2_t1984 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13044(__this, method) (( Object_t * (*) (Dictionary_2_t1984 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13044_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13046_gshared (Dictionary_2_t1984 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13046(__this, method) (( int32_t (*) (Dictionary_2_t1984 *, const MethodInfo*))Dictionary_2_get_Count_m13046_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m13048_gshared (Dictionary_2_t1984 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13048(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1984 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m13048_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13050_gshared (Dictionary_2_t1984 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m13050(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1984 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m13050_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13052_gshared (Dictionary_2_t1984 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13052(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1984 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13052_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13054_gshared (Dictionary_2_t1984 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13054(__this, ___size, method) (( void (*) (Dictionary_2_t1984 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13054_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13056_gshared (Dictionary_2_t1984 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13056(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1984 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13056_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1986  Dictionary_2_make_pair_m13058_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13058(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1986  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m13058_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m13060_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13060(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m13060_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13062_gshared (Dictionary_2_t1984 * __this, KeyValuePair_2U5BU5D_t2425* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13062(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1984 *, KeyValuePair_2U5BU5D_t2425*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13062_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m13064_gshared (Dictionary_2_t1984 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13064(__this, method) (( void (*) (Dictionary_2_t1984 *, const MethodInfo*))Dictionary_2_Resize_m13064_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13066_gshared (Dictionary_2_t1984 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13066(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1984 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m13066_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m13068_gshared (Dictionary_2_t1984 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13068(__this, method) (( void (*) (Dictionary_2_t1984 *, const MethodInfo*))Dictionary_2_Clear_m13068_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13070_gshared (Dictionary_2_t1984 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13070(__this, ___key, method) (( bool (*) (Dictionary_2_t1984 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m13070_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13072_gshared (Dictionary_2_t1984 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13072(__this, ___value, method) (( bool (*) (Dictionary_2_t1984 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m13072_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13074_gshared (Dictionary_2_t1984 * __this, SerializationInfo_t647 * ___info, StreamingContext_t648  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13074(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1984 *, SerializationInfo_t647 *, StreamingContext_t648 , const MethodInfo*))Dictionary_2_GetObjectData_m13074_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13076_gshared (Dictionary_2_t1984 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13076(__this, ___sender, method) (( void (*) (Dictionary_2_t1984 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13076_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13078_gshared (Dictionary_2_t1984 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13078(__this, ___key, method) (( bool (*) (Dictionary_2_t1984 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m13078_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13080_gshared (Dictionary_2_t1984 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13080(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1984 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m13080_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t1988 * Dictionary_2_get_Values_m13082_gshared (Dictionary_2_t1984 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13082(__this, method) (( ValueCollection_t1988 * (*) (Dictionary_2_t1984 *, const MethodInfo*))Dictionary_2_get_Values_m13082_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m13084_gshared (Dictionary_2_t1984 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13084(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1984 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13084_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m13086_gshared (Dictionary_2_t1984 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13086(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1984 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13086_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13088_gshared (Dictionary_2_t1984 * __this, KeyValuePair_2_t1986  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13088(__this, ___pair, method) (( bool (*) (Dictionary_2_t1984 *, KeyValuePair_2_t1986 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13088_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1990  Dictionary_2_GetEnumerator_m13090_gshared (Dictionary_2_t1984 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13090(__this, method) (( Enumerator_t1990  (*) (Dictionary_2_t1984 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13090_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1053  Dictionary_2_U3CCopyToU3Em__0_m13092_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13092(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1053  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13092_gshared)(__this /* static, unused */, ___key, ___value, method)
