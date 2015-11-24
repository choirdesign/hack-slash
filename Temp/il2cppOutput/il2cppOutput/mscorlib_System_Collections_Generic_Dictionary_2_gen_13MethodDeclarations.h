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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2237;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1833;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t647;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>[]
struct KeyValuePair_2U5BU5D_t2466;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t71;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
struct IEnumerator_1_t2467;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t865;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_t2242;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor()
extern "C" void Dictionary_2__ctor_m16502_gshared (Dictionary_2_t2237 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m16502(__this, method) (( void (*) (Dictionary_2_t2237 *, const MethodInfo*))Dictionary_2__ctor_m16502_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16504_gshared (Dictionary_2_t2237 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16504(__this, ___comparer, method) (( void (*) (Dictionary_2_t2237 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16504_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m16506_gshared (Dictionary_2_t2237 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m16506(__this, ___capacity, method) (( void (*) (Dictionary_2_t2237 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16506_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m16508_gshared (Dictionary_2_t2237 * __this, SerializationInfo_t647 * ___info, StreamingContext_t648  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m16508(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2237 *, SerializationInfo_t647 *, StreamingContext_t648 , const MethodInfo*))Dictionary_2__ctor_m16508_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m16510_gshared (Dictionary_2_t2237 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16510(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2237 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16510_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m16512_gshared (Dictionary_2_t2237 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16512(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2237 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16512_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m16514_gshared (Dictionary_2_t2237 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m16514(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2237 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16514_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m16516_gshared (Dictionary_2_t2237 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m16516(__this, ___key, method) (( bool (*) (Dictionary_2_t2237 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16516_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m16518_gshared (Dictionary_2_t2237 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m16518(__this, ___key, method) (( void (*) (Dictionary_2_t2237 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16518_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16520_gshared (Dictionary_2_t2237 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16520(__this, method) (( bool (*) (Dictionary_2_t2237 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16520_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16522_gshared (Dictionary_2_t2237 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16522(__this, method) (( Object_t * (*) (Dictionary_2_t2237 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16522_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16524_gshared (Dictionary_2_t2237 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16524(__this, method) (( bool (*) (Dictionary_2_t2237 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16524_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16526_gshared (Dictionary_2_t2237 * __this, KeyValuePair_2_t2239  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16526(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2237 *, KeyValuePair_2_t2239 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16526_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16528_gshared (Dictionary_2_t2237 * __this, KeyValuePair_2_t2239  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16528(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2237 *, KeyValuePair_2_t2239 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16528_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16530_gshared (Dictionary_2_t2237 * __this, KeyValuePair_2U5BU5D_t2466* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16530(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2237 *, KeyValuePair_2U5BU5D_t2466*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16530_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16532_gshared (Dictionary_2_t2237 * __this, KeyValuePair_2_t2239  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16532(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2237 *, KeyValuePair_2_t2239 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16532_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m16534_gshared (Dictionary_2_t2237 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16534(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2237 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16534_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16536_gshared (Dictionary_2_t2237 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16536(__this, method) (( Object_t * (*) (Dictionary_2_t2237 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16536_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16538_gshared (Dictionary_2_t2237 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16538(__this, method) (( Object_t* (*) (Dictionary_2_t2237 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16538_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16540_gshared (Dictionary_2_t2237 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16540(__this, method) (( Object_t * (*) (Dictionary_2_t2237 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16540_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m16542_gshared (Dictionary_2_t2237 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m16542(__this, method) (( int32_t (*) (Dictionary_2_t2237 *, const MethodInfo*))Dictionary_2_get_Count_m16542_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m16544_gshared (Dictionary_2_t2237 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m16544(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2237 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m16544_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m16546_gshared (Dictionary_2_t2237 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m16546(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2237 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m16546_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m16548_gshared (Dictionary_2_t2237 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m16548(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2237 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16548_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m16550_gshared (Dictionary_2_t2237 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m16550(__this, ___size, method) (( void (*) (Dictionary_2_t2237 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16550_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m16552_gshared (Dictionary_2_t2237 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m16552(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2237 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16552_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2239  Dictionary_2_make_pair_m16554_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m16554(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2239  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m16554_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m16556_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m16556(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m16556_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m16558_gshared (Dictionary_2_t2237 * __this, KeyValuePair_2U5BU5D_t2466* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m16558(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2237 *, KeyValuePair_2U5BU5D_t2466*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16558_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Resize()
extern "C" void Dictionary_2_Resize_m16560_gshared (Dictionary_2_t2237 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m16560(__this, method) (( void (*) (Dictionary_2_t2237 *, const MethodInfo*))Dictionary_2_Resize_m16560_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m16562_gshared (Dictionary_2_t2237 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m16562(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2237 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m16562_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Clear()
extern "C" void Dictionary_2_Clear_m16564_gshared (Dictionary_2_t2237 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m16564(__this, method) (( void (*) (Dictionary_2_t2237 *, const MethodInfo*))Dictionary_2_Clear_m16564_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m16566_gshared (Dictionary_2_t2237 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m16566(__this, ___key, method) (( bool (*) (Dictionary_2_t2237 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m16566_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m16568_gshared (Dictionary_2_t2237 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m16568(__this, ___value, method) (( bool (*) (Dictionary_2_t2237 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m16568_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m16570_gshared (Dictionary_2_t2237 * __this, SerializationInfo_t647 * ___info, StreamingContext_t648  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m16570(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2237 *, SerializationInfo_t647 *, StreamingContext_t648 , const MethodInfo*))Dictionary_2_GetObjectData_m16570_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m16572_gshared (Dictionary_2_t2237 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m16572(__this, ___sender, method) (( void (*) (Dictionary_2_t2237 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16572_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m16574_gshared (Dictionary_2_t2237 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m16574(__this, ___key, method) (( bool (*) (Dictionary_2_t2237 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m16574_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m16576_gshared (Dictionary_2_t2237 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m16576(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2237 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m16576_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Values()
extern "C" ValueCollection_t2242 * Dictionary_2_get_Values_m16578_gshared (Dictionary_2_t2237 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m16578(__this, method) (( ValueCollection_t2242 * (*) (Dictionary_2_t2237 *, const MethodInfo*))Dictionary_2_get_Values_m16578_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m16580_gshared (Dictionary_2_t2237 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m16580(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2237 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16580_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m16582_gshared (Dictionary_2_t2237 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m16582(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2237 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16582_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m16584_gshared (Dictionary_2_t2237 * __this, KeyValuePair_2_t2239  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m16584(__this, ___pair, method) (( bool (*) (Dictionary_2_t2237 *, KeyValuePair_2_t2239 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16584_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t2244  Dictionary_2_GetEnumerator_m16586_gshared (Dictionary_2_t2237 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m16586(__this, method) (( Enumerator_t2244  (*) (Dictionary_2_t2237 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16586_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1053  Dictionary_2_U3CCopyToU3Em__0_m16588_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m16588(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1053  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16588_gshared)(__this /* static, unused */, ___key, ___value, method)
