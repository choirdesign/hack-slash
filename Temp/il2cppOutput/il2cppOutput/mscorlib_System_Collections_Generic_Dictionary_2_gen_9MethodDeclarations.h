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
struct Dictionary_2_t1895;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1894;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t641;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2408;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t64;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2409;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t859;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1900;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m11966_gshared (Dictionary_2_t1895 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11966(__this, method) (( void (*) (Dictionary_2_t1895 *, const MethodInfo*))Dictionary_2__ctor_m11966_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11968_gshared (Dictionary_2_t1895 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11968(__this, ___comparer, method) (( void (*) (Dictionary_2_t1895 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11968_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11970_gshared (Dictionary_2_t1895 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11970(__this, ___capacity, method) (( void (*) (Dictionary_2_t1895 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11970_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11972_gshared (Dictionary_2_t1895 * __this, SerializationInfo_t641 * ___info, StreamingContext_t642  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11972(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1895 *, SerializationInfo_t641 *, StreamingContext_t642 , const MethodInfo*))Dictionary_2__ctor_m11972_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11974_gshared (Dictionary_2_t1895 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11974(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1895 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11974_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11976_gshared (Dictionary_2_t1895 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11976(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1895 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11976_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11978_gshared (Dictionary_2_t1895 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11978(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1895 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11978_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11980_gshared (Dictionary_2_t1895 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11980(__this, ___key, method) (( bool (*) (Dictionary_2_t1895 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11980_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11982_gshared (Dictionary_2_t1895 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11982(__this, ___key, method) (( void (*) (Dictionary_2_t1895 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11982_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11984_gshared (Dictionary_2_t1895 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11984(__this, method) (( bool (*) (Dictionary_2_t1895 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11984_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11986_gshared (Dictionary_2_t1895 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11986(__this, method) (( Object_t * (*) (Dictionary_2_t1895 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11986_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11988_gshared (Dictionary_2_t1895 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11988(__this, method) (( bool (*) (Dictionary_2_t1895 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11988_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11990_gshared (Dictionary_2_t1895 * __this, KeyValuePair_2_t1897  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11990(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1895 *, KeyValuePair_2_t1897 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11990_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11992_gshared (Dictionary_2_t1895 * __this, KeyValuePair_2_t1897  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11992(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1895 *, KeyValuePair_2_t1897 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11992_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11994_gshared (Dictionary_2_t1895 * __this, KeyValuePair_2U5BU5D_t2408* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11994(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1895 *, KeyValuePair_2U5BU5D_t2408*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11994_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11996_gshared (Dictionary_2_t1895 * __this, KeyValuePair_2_t1897  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11996(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1895 *, KeyValuePair_2_t1897 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11996_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11998_gshared (Dictionary_2_t1895 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11998(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1895 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11998_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12000_gshared (Dictionary_2_t1895 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12000(__this, method) (( Object_t * (*) (Dictionary_2_t1895 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12000_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12002_gshared (Dictionary_2_t1895 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12002(__this, method) (( Object_t* (*) (Dictionary_2_t1895 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12002_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12004_gshared (Dictionary_2_t1895 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12004(__this, method) (( Object_t * (*) (Dictionary_2_t1895 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12004_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12006_gshared (Dictionary_2_t1895 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12006(__this, method) (( int32_t (*) (Dictionary_2_t1895 *, const MethodInfo*))Dictionary_2_get_Count_m12006_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m12008_gshared (Dictionary_2_t1895 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12008(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1895 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m12008_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12010_gshared (Dictionary_2_t1895 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12010(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1895 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m12010_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12012_gshared (Dictionary_2_t1895 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12012(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1895 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12012_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12014_gshared (Dictionary_2_t1895 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12014(__this, ___size, method) (( void (*) (Dictionary_2_t1895 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12014_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12016_gshared (Dictionary_2_t1895 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12016(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1895 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12016_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1897  Dictionary_2_make_pair_m12018_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12018(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1897  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m12018_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m12020_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12020(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m12020_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12022_gshared (Dictionary_2_t1895 * __this, KeyValuePair_2U5BU5D_t2408* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12022(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1895 *, KeyValuePair_2U5BU5D_t2408*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12022_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m12024_gshared (Dictionary_2_t1895 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12024(__this, method) (( void (*) (Dictionary_2_t1895 *, const MethodInfo*))Dictionary_2_Resize_m12024_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12026_gshared (Dictionary_2_t1895 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12026(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1895 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m12026_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m12028_gshared (Dictionary_2_t1895 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12028(__this, method) (( void (*) (Dictionary_2_t1895 *, const MethodInfo*))Dictionary_2_Clear_m12028_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12030_gshared (Dictionary_2_t1895 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12030(__this, ___key, method) (( bool (*) (Dictionary_2_t1895 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m12030_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12032_gshared (Dictionary_2_t1895 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12032(__this, ___value, method) (( bool (*) (Dictionary_2_t1895 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m12032_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12034_gshared (Dictionary_2_t1895 * __this, SerializationInfo_t641 * ___info, StreamingContext_t642  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12034(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1895 *, SerializationInfo_t641 *, StreamingContext_t642 , const MethodInfo*))Dictionary_2_GetObjectData_m12034_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12036_gshared (Dictionary_2_t1895 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12036(__this, ___sender, method) (( void (*) (Dictionary_2_t1895 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12036_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12038_gshared (Dictionary_2_t1895 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12038(__this, ___key, method) (( bool (*) (Dictionary_2_t1895 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m12038_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12040_gshared (Dictionary_2_t1895 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12040(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1895 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m12040_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1900 * Dictionary_2_get_Values_m12041_gshared (Dictionary_2_t1895 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12041(__this, method) (( ValueCollection_t1900 * (*) (Dictionary_2_t1895 *, const MethodInfo*))Dictionary_2_get_Values_m12041_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m12043_gshared (Dictionary_2_t1895 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12043(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1895 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12043_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m12045_gshared (Dictionary_2_t1895 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12045(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1895 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12045_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12047_gshared (Dictionary_2_t1895 * __this, KeyValuePair_2_t1897  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12047(__this, ___pair, method) (( bool (*) (Dictionary_2_t1895 *, KeyValuePair_2_t1897 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12047_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1902  Dictionary_2_GetEnumerator_m12048_gshared (Dictionary_2_t1895 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12048(__this, method) (( Enumerator_t1902  (*) (Dictionary_2_t1895 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12048_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1047  Dictionary_2_U3CCopyToU3Em__0_m12050_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12050(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1047  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12050_gshared)(__this /* static, unused */, ___key, ___value, method)
