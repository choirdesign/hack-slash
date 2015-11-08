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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2231;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1924;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t641;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>[]
struct KeyValuePair_2U5BU5D_t2460;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t64;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
struct IEnumerator_1_t2461;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t859;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_t2236;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor()
extern "C" void Dictionary_2__ctor_m16455_gshared (Dictionary_2_t2231 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m16455(__this, method) (( void (*) (Dictionary_2_t2231 *, const MethodInfo*))Dictionary_2__ctor_m16455_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16457_gshared (Dictionary_2_t2231 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16457(__this, ___comparer, method) (( void (*) (Dictionary_2_t2231 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16457_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m16459_gshared (Dictionary_2_t2231 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m16459(__this, ___capacity, method) (( void (*) (Dictionary_2_t2231 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16459_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m16461_gshared (Dictionary_2_t2231 * __this, SerializationInfo_t641 * ___info, StreamingContext_t642  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m16461(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2231 *, SerializationInfo_t641 *, StreamingContext_t642 , const MethodInfo*))Dictionary_2__ctor_m16461_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m16463_gshared (Dictionary_2_t2231 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16463(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2231 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16463_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m16465_gshared (Dictionary_2_t2231 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16465(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2231 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16465_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m16467_gshared (Dictionary_2_t2231 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m16467(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2231 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16467_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m16469_gshared (Dictionary_2_t2231 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m16469(__this, ___key, method) (( bool (*) (Dictionary_2_t2231 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16469_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m16471_gshared (Dictionary_2_t2231 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m16471(__this, ___key, method) (( void (*) (Dictionary_2_t2231 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16471_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16473_gshared (Dictionary_2_t2231 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16473(__this, method) (( bool (*) (Dictionary_2_t2231 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16473_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16475_gshared (Dictionary_2_t2231 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16475(__this, method) (( Object_t * (*) (Dictionary_2_t2231 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16475_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16477_gshared (Dictionary_2_t2231 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16477(__this, method) (( bool (*) (Dictionary_2_t2231 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16477_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16479_gshared (Dictionary_2_t2231 * __this, KeyValuePair_2_t2233  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16479(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2231 *, KeyValuePair_2_t2233 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16479_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16481_gshared (Dictionary_2_t2231 * __this, KeyValuePair_2_t2233  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16481(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2231 *, KeyValuePair_2_t2233 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16481_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16483_gshared (Dictionary_2_t2231 * __this, KeyValuePair_2U5BU5D_t2460* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16483(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2231 *, KeyValuePair_2U5BU5D_t2460*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16483_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16485_gshared (Dictionary_2_t2231 * __this, KeyValuePair_2_t2233  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16485(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2231 *, KeyValuePair_2_t2233 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16485_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m16487_gshared (Dictionary_2_t2231 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16487(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2231 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16487_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16489_gshared (Dictionary_2_t2231 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16489(__this, method) (( Object_t * (*) (Dictionary_2_t2231 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16489_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16491_gshared (Dictionary_2_t2231 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16491(__this, method) (( Object_t* (*) (Dictionary_2_t2231 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16491_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16493_gshared (Dictionary_2_t2231 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16493(__this, method) (( Object_t * (*) (Dictionary_2_t2231 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16493_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m16495_gshared (Dictionary_2_t2231 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m16495(__this, method) (( int32_t (*) (Dictionary_2_t2231 *, const MethodInfo*))Dictionary_2_get_Count_m16495_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m16497_gshared (Dictionary_2_t2231 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m16497(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2231 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m16497_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m16499_gshared (Dictionary_2_t2231 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m16499(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2231 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m16499_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m16501_gshared (Dictionary_2_t2231 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m16501(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2231 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16501_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m16503_gshared (Dictionary_2_t2231 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m16503(__this, ___size, method) (( void (*) (Dictionary_2_t2231 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16503_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m16505_gshared (Dictionary_2_t2231 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m16505(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2231 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16505_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2233  Dictionary_2_make_pair_m16507_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m16507(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2233  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m16507_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m16509_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m16509(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m16509_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m16511_gshared (Dictionary_2_t2231 * __this, KeyValuePair_2U5BU5D_t2460* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m16511(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2231 *, KeyValuePair_2U5BU5D_t2460*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16511_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Resize()
extern "C" void Dictionary_2_Resize_m16513_gshared (Dictionary_2_t2231 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m16513(__this, method) (( void (*) (Dictionary_2_t2231 *, const MethodInfo*))Dictionary_2_Resize_m16513_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m16515_gshared (Dictionary_2_t2231 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m16515(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2231 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m16515_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Clear()
extern "C" void Dictionary_2_Clear_m16517_gshared (Dictionary_2_t2231 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m16517(__this, method) (( void (*) (Dictionary_2_t2231 *, const MethodInfo*))Dictionary_2_Clear_m16517_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m16519_gshared (Dictionary_2_t2231 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m16519(__this, ___key, method) (( bool (*) (Dictionary_2_t2231 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m16519_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m16521_gshared (Dictionary_2_t2231 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m16521(__this, ___value, method) (( bool (*) (Dictionary_2_t2231 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m16521_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m16523_gshared (Dictionary_2_t2231 * __this, SerializationInfo_t641 * ___info, StreamingContext_t642  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m16523(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2231 *, SerializationInfo_t641 *, StreamingContext_t642 , const MethodInfo*))Dictionary_2_GetObjectData_m16523_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m16525_gshared (Dictionary_2_t2231 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m16525(__this, ___sender, method) (( void (*) (Dictionary_2_t2231 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16525_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m16527_gshared (Dictionary_2_t2231 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m16527(__this, ___key, method) (( bool (*) (Dictionary_2_t2231 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m16527_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m16529_gshared (Dictionary_2_t2231 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m16529(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2231 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m16529_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Values()
extern "C" ValueCollection_t2236 * Dictionary_2_get_Values_m16531_gshared (Dictionary_2_t2231 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m16531(__this, method) (( ValueCollection_t2236 * (*) (Dictionary_2_t2231 *, const MethodInfo*))Dictionary_2_get_Values_m16531_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m16533_gshared (Dictionary_2_t2231 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m16533(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2231 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16533_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m16535_gshared (Dictionary_2_t2231 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m16535(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2231 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16535_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m16537_gshared (Dictionary_2_t2231 * __this, KeyValuePair_2_t2233  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m16537(__this, ___pair, method) (( bool (*) (Dictionary_2_t2231 *, KeyValuePair_2_t2233 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16537_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t2238  Dictionary_2_GetEnumerator_m16539_gshared (Dictionary_2_t2231 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m16539(__this, method) (( Enumerator_t2238  (*) (Dictionary_2_t2231 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16539_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1047  Dictionary_2_U3CCopyToU3Em__0_m16541_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m16541(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1047  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16541_gshared)(__this /* static, unused */, ___key, ___value, method)
