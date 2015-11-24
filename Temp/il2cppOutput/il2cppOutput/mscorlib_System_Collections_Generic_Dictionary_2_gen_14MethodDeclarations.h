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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2285;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1833;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t647;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2471;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t71;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2472;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t865;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2290;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m16985_gshared (Dictionary_2_t2285 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m16985(__this, method) (( void (*) (Dictionary_2_t2285 *, const MethodInfo*))Dictionary_2__ctor_m16985_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16986_gshared (Dictionary_2_t2285 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16986(__this, ___comparer, method) (( void (*) (Dictionary_2_t2285 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16986_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m16988_gshared (Dictionary_2_t2285 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m16988(__this, ___capacity, method) (( void (*) (Dictionary_2_t2285 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16988_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m16990_gshared (Dictionary_2_t2285 * __this, SerializationInfo_t647 * ___info, StreamingContext_t648  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m16990(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2285 *, SerializationInfo_t647 *, StreamingContext_t648 , const MethodInfo*))Dictionary_2__ctor_m16990_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m16992_gshared (Dictionary_2_t2285 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16992(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2285 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16992_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m16994_gshared (Dictionary_2_t2285 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16994(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2285 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16994_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m16996_gshared (Dictionary_2_t2285 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m16996(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2285 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16996_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m16998_gshared (Dictionary_2_t2285 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m16998(__this, ___key, method) (( bool (*) (Dictionary_2_t2285 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16998_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17000_gshared (Dictionary_2_t2285 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17000(__this, ___key, method) (( void (*) (Dictionary_2_t2285 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17000_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17002_gshared (Dictionary_2_t2285 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17002(__this, method) (( bool (*) (Dictionary_2_t2285 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17002_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17004_gshared (Dictionary_2_t2285 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17004(__this, method) (( Object_t * (*) (Dictionary_2_t2285 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17004_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17006_gshared (Dictionary_2_t2285 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17006(__this, method) (( bool (*) (Dictionary_2_t2285 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17006_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17008_gshared (Dictionary_2_t2285 * __this, KeyValuePair_2_t2287  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17008(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2285 *, KeyValuePair_2_t2287 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17008_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17010_gshared (Dictionary_2_t2285 * __this, KeyValuePair_2_t2287  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17010(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2285 *, KeyValuePair_2_t2287 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17010_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17012_gshared (Dictionary_2_t2285 * __this, KeyValuePair_2U5BU5D_t2471* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17012(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2285 *, KeyValuePair_2U5BU5D_t2471*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17012_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17014_gshared (Dictionary_2_t2285 * __this, KeyValuePair_2_t2287  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17014(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2285 *, KeyValuePair_2_t2287 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17014_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17016_gshared (Dictionary_2_t2285 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17016(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2285 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17016_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17018_gshared (Dictionary_2_t2285 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17018(__this, method) (( Object_t * (*) (Dictionary_2_t2285 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17018_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17020_gshared (Dictionary_2_t2285 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17020(__this, method) (( Object_t* (*) (Dictionary_2_t2285 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17020_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17022_gshared (Dictionary_2_t2285 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17022(__this, method) (( Object_t * (*) (Dictionary_2_t2285 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17022_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17024_gshared (Dictionary_2_t2285 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17024(__this, method) (( int32_t (*) (Dictionary_2_t2285 *, const MethodInfo*))Dictionary_2_get_Count_m17024_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m17026_gshared (Dictionary_2_t2285 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17026(__this, ___key, method) (( bool (*) (Dictionary_2_t2285 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m17026_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17028_gshared (Dictionary_2_t2285 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17028(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2285 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m17028_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17030_gshared (Dictionary_2_t2285 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17030(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2285 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17030_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17032_gshared (Dictionary_2_t2285 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17032(__this, ___size, method) (( void (*) (Dictionary_2_t2285 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17032_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17034_gshared (Dictionary_2_t2285 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17034(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2285 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17034_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2287  Dictionary_2_make_pair_m17036_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17036(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2287  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m17036_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m17038_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17038(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m17038_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17040_gshared (Dictionary_2_t2285 * __this, KeyValuePair_2U5BU5D_t2471* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17040(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2285 *, KeyValuePair_2U5BU5D_t2471*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17040_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m17042_gshared (Dictionary_2_t2285 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17042(__this, method) (( void (*) (Dictionary_2_t2285 *, const MethodInfo*))Dictionary_2_Resize_m17042_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17044_gshared (Dictionary_2_t2285 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17044(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2285 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m17044_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m17046_gshared (Dictionary_2_t2285 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17046(__this, method) (( void (*) (Dictionary_2_t2285 *, const MethodInfo*))Dictionary_2_Clear_m17046_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17048_gshared (Dictionary_2_t2285 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17048(__this, ___key, method) (( bool (*) (Dictionary_2_t2285 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m17048_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17050_gshared (Dictionary_2_t2285 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17050(__this, ___value, method) (( bool (*) (Dictionary_2_t2285 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m17050_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17052_gshared (Dictionary_2_t2285 * __this, SerializationInfo_t647 * ___info, StreamingContext_t648  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17052(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2285 *, SerializationInfo_t647 *, StreamingContext_t648 , const MethodInfo*))Dictionary_2_GetObjectData_m17052_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17054_gshared (Dictionary_2_t2285 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17054(__this, ___sender, method) (( void (*) (Dictionary_2_t2285 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17054_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17056_gshared (Dictionary_2_t2285 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17056(__this, ___key, method) (( bool (*) (Dictionary_2_t2285 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m17056_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17058_gshared (Dictionary_2_t2285 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17058(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2285 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m17058_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2290 * Dictionary_2_get_Values_m17060_gshared (Dictionary_2_t2285 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17060(__this, method) (( ValueCollection_t2290 * (*) (Dictionary_2_t2285 *, const MethodInfo*))Dictionary_2_get_Values_m17060_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m17062_gshared (Dictionary_2_t2285 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17062(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2285 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17062_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m17064_gshared (Dictionary_2_t2285 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17064(__this, ___value, method) (( bool (*) (Dictionary_2_t2285 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17064_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17066_gshared (Dictionary_2_t2285 * __this, KeyValuePair_2_t2287  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17066(__this, ___pair, method) (( bool (*) (Dictionary_2_t2285 *, KeyValuePair_2_t2287 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17066_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2292  Dictionary_2_GetEnumerator_m17068_gshared (Dictionary_2_t2285 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17068(__this, method) (( Enumerator_t2292  (*) (Dictionary_2_t2285 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17068_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1053  Dictionary_2_U3CCopyToU3Em__0_m17070_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17070(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1053  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17070_gshared)(__this /* static, unused */, ___key, ___value, method)
