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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1922;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1921;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t647;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2419;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t71;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2420;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t865;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1926;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m12226_gshared (Dictionary_2_t1922 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12226(__this, method) (( void (*) (Dictionary_2_t1922 *, const MethodInfo*))Dictionary_2__ctor_m12226_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12228_gshared (Dictionary_2_t1922 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12228(__this, ___comparer, method) (( void (*) (Dictionary_2_t1922 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12228_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12230_gshared (Dictionary_2_t1922 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12230(__this, ___capacity, method) (( void (*) (Dictionary_2_t1922 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12230_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12232_gshared (Dictionary_2_t1922 * __this, SerializationInfo_t647 * ___info, StreamingContext_t648  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12232(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1922 *, SerializationInfo_t647 *, StreamingContext_t648 , const MethodInfo*))Dictionary_2__ctor_m12232_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12234_gshared (Dictionary_2_t1922 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12234(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1922 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12234_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12236_gshared (Dictionary_2_t1922 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12236(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1922 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12236_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12238_gshared (Dictionary_2_t1922 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12238(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1922 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12238_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12240_gshared (Dictionary_2_t1922 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12240(__this, ___key, method) (( bool (*) (Dictionary_2_t1922 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12240_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12242_gshared (Dictionary_2_t1922 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12242(__this, ___key, method) (( void (*) (Dictionary_2_t1922 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12242_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12244_gshared (Dictionary_2_t1922 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12244(__this, method) (( bool (*) (Dictionary_2_t1922 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12244_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12246_gshared (Dictionary_2_t1922 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12246(__this, method) (( Object_t * (*) (Dictionary_2_t1922 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12246_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12248_gshared (Dictionary_2_t1922 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12248(__this, method) (( bool (*) (Dictionary_2_t1922 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12248_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12250_gshared (Dictionary_2_t1922 * __this, KeyValuePair_2_t1924  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12250(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1922 *, KeyValuePair_2_t1924 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12250_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12252_gshared (Dictionary_2_t1922 * __this, KeyValuePair_2_t1924  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12252(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1922 *, KeyValuePair_2_t1924 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12252_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12254_gshared (Dictionary_2_t1922 * __this, KeyValuePair_2U5BU5D_t2419* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12254(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1922 *, KeyValuePair_2U5BU5D_t2419*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12254_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12256_gshared (Dictionary_2_t1922 * __this, KeyValuePair_2_t1924  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12256(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1922 *, KeyValuePair_2_t1924 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12256_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12258_gshared (Dictionary_2_t1922 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12258(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1922 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12258_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12260_gshared (Dictionary_2_t1922 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12260(__this, method) (( Object_t * (*) (Dictionary_2_t1922 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12260_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12262_gshared (Dictionary_2_t1922 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12262(__this, method) (( Object_t* (*) (Dictionary_2_t1922 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12262_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12264_gshared (Dictionary_2_t1922 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12264(__this, method) (( Object_t * (*) (Dictionary_2_t1922 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12264_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12266_gshared (Dictionary_2_t1922 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12266(__this, method) (( int32_t (*) (Dictionary_2_t1922 *, const MethodInfo*))Dictionary_2_get_Count_m12266_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m12268_gshared (Dictionary_2_t1922 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12268(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1922 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m12268_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12270_gshared (Dictionary_2_t1922 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12270(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1922 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m12270_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12272_gshared (Dictionary_2_t1922 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12272(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1922 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12272_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12274_gshared (Dictionary_2_t1922 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12274(__this, ___size, method) (( void (*) (Dictionary_2_t1922 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12274_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12276_gshared (Dictionary_2_t1922 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12276(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1922 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12276_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1924  Dictionary_2_make_pair_m12278_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12278(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1924  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m12278_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m12280_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12280(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m12280_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12282_gshared (Dictionary_2_t1922 * __this, KeyValuePair_2U5BU5D_t2419* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12282(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1922 *, KeyValuePair_2U5BU5D_t2419*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12282_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m12284_gshared (Dictionary_2_t1922 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12284(__this, method) (( void (*) (Dictionary_2_t1922 *, const MethodInfo*))Dictionary_2_Resize_m12284_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12286_gshared (Dictionary_2_t1922 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12286(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1922 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m12286_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m12288_gshared (Dictionary_2_t1922 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12288(__this, method) (( void (*) (Dictionary_2_t1922 *, const MethodInfo*))Dictionary_2_Clear_m12288_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12290_gshared (Dictionary_2_t1922 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12290(__this, ___key, method) (( bool (*) (Dictionary_2_t1922 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m12290_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12292_gshared (Dictionary_2_t1922 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12292(__this, ___value, method) (( bool (*) (Dictionary_2_t1922 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m12292_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12294_gshared (Dictionary_2_t1922 * __this, SerializationInfo_t647 * ___info, StreamingContext_t648  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12294(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1922 *, SerializationInfo_t647 *, StreamingContext_t648 , const MethodInfo*))Dictionary_2_GetObjectData_m12294_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12296_gshared (Dictionary_2_t1922 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12296(__this, ___sender, method) (( void (*) (Dictionary_2_t1922 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12296_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12298_gshared (Dictionary_2_t1922 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12298(__this, ___key, method) (( bool (*) (Dictionary_2_t1922 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m12298_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12300_gshared (Dictionary_2_t1922 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12300(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1922 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m12300_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1926 * Dictionary_2_get_Values_m12301_gshared (Dictionary_2_t1922 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12301(__this, method) (( ValueCollection_t1926 * (*) (Dictionary_2_t1922 *, const MethodInfo*))Dictionary_2_get_Values_m12301_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m12303_gshared (Dictionary_2_t1922 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12303(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1922 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12303_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m12305_gshared (Dictionary_2_t1922 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12305(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1922 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12305_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12307_gshared (Dictionary_2_t1922 * __this, KeyValuePair_2_t1924  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12307(__this, ___pair, method) (( bool (*) (Dictionary_2_t1922 *, KeyValuePair_2_t1924 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12307_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1928  Dictionary_2_GetEnumerator_m12308_gshared (Dictionary_2_t1922 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12308(__this, method) (( Enumerator_t1928  (*) (Dictionary_2_t1922 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12308_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1053  Dictionary_2_U3CCopyToU3Em__0_m12310_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12310(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1053  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12310_gshared)(__this /* static, unused */, ___key, ___value, method)
