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
struct Dictionary_2_t1910;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1912;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t629;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2398;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t57;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2399;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t847;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1915;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m12278_gshared (Dictionary_2_t1910 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12278(__this, method) (( void (*) (Dictionary_2_t1910 *, const MethodInfo*))Dictionary_2__ctor_m12278_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12279_gshared (Dictionary_2_t1910 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12279(__this, ___comparer, method) (( void (*) (Dictionary_2_t1910 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12279_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12280_gshared (Dictionary_2_t1910 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12280(__this, ___capacity, method) (( void (*) (Dictionary_2_t1910 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12280_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12281_gshared (Dictionary_2_t1910 * __this, SerializationInfo_t629 * ___info, StreamingContext_t630  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12281(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1910 *, SerializationInfo_t629 *, StreamingContext_t630 , const MethodInfo*))Dictionary_2__ctor_m12281_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12282_gshared (Dictionary_2_t1910 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12282(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1910 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12282_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12283_gshared (Dictionary_2_t1910 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12283(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1910 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12283_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12284_gshared (Dictionary_2_t1910 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12284(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1910 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12284_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12285_gshared (Dictionary_2_t1910 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12285(__this, ___key, method) (( bool (*) (Dictionary_2_t1910 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12285_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12286_gshared (Dictionary_2_t1910 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12286(__this, ___key, method) (( void (*) (Dictionary_2_t1910 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12286_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12287_gshared (Dictionary_2_t1910 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12287(__this, method) (( bool (*) (Dictionary_2_t1910 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12287_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12288_gshared (Dictionary_2_t1910 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12288(__this, method) (( Object_t * (*) (Dictionary_2_t1910 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12288_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12289_gshared (Dictionary_2_t1910 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12289(__this, method) (( bool (*) (Dictionary_2_t1910 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12289_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12290_gshared (Dictionary_2_t1910 * __this, KeyValuePair_2_t1913  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12290(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1910 *, KeyValuePair_2_t1913 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12290_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12291_gshared (Dictionary_2_t1910 * __this, KeyValuePair_2_t1913  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12291(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1910 *, KeyValuePair_2_t1913 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12291_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12292_gshared (Dictionary_2_t1910 * __this, KeyValuePair_2U5BU5D_t2398* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12292(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1910 *, KeyValuePair_2U5BU5D_t2398*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12292_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12293_gshared (Dictionary_2_t1910 * __this, KeyValuePair_2_t1913  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12293(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1910 *, KeyValuePair_2_t1913 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12293_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12294_gshared (Dictionary_2_t1910 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12294(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1910 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12294_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12295_gshared (Dictionary_2_t1910 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12295(__this, method) (( Object_t * (*) (Dictionary_2_t1910 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12295_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12296_gshared (Dictionary_2_t1910 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12296(__this, method) (( Object_t* (*) (Dictionary_2_t1910 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12296_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12297_gshared (Dictionary_2_t1910 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12297(__this, method) (( Object_t * (*) (Dictionary_2_t1910 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12297_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12298_gshared (Dictionary_2_t1910 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12298(__this, method) (( int32_t (*) (Dictionary_2_t1910 *, const MethodInfo*))Dictionary_2_get_Count_m12298_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m12299_gshared (Dictionary_2_t1910 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12299(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1910 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m12299_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12300_gshared (Dictionary_2_t1910 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12300(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1910 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m12300_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12301_gshared (Dictionary_2_t1910 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12301(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1910 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12301_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12302_gshared (Dictionary_2_t1910 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12302(__this, ___size, method) (( void (*) (Dictionary_2_t1910 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12302_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12303_gshared (Dictionary_2_t1910 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12303(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1910 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12303_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1913  Dictionary_2_make_pair_m12304_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12304(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1913  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m12304_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m12305_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12305(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m12305_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12306_gshared (Dictionary_2_t1910 * __this, KeyValuePair_2U5BU5D_t2398* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12306(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1910 *, KeyValuePair_2U5BU5D_t2398*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12306_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m12307_gshared (Dictionary_2_t1910 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12307(__this, method) (( void (*) (Dictionary_2_t1910 *, const MethodInfo*))Dictionary_2_Resize_m12307_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12308_gshared (Dictionary_2_t1910 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12308(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1910 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m12308_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m12309_gshared (Dictionary_2_t1910 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12309(__this, method) (( void (*) (Dictionary_2_t1910 *, const MethodInfo*))Dictionary_2_Clear_m12309_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12310_gshared (Dictionary_2_t1910 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12310(__this, ___key, method) (( bool (*) (Dictionary_2_t1910 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m12310_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12311_gshared (Dictionary_2_t1910 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12311(__this, ___value, method) (( bool (*) (Dictionary_2_t1910 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m12311_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12312_gshared (Dictionary_2_t1910 * __this, SerializationInfo_t629 * ___info, StreamingContext_t630  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12312(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1910 *, SerializationInfo_t629 *, StreamingContext_t630 , const MethodInfo*))Dictionary_2_GetObjectData_m12312_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12313_gshared (Dictionary_2_t1910 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12313(__this, ___sender, method) (( void (*) (Dictionary_2_t1910 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12313_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12314_gshared (Dictionary_2_t1910 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12314(__this, ___key, method) (( bool (*) (Dictionary_2_t1910 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m12314_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12315_gshared (Dictionary_2_t1910 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12315(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1910 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m12315_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1915 * Dictionary_2_get_Values_m12316_gshared (Dictionary_2_t1910 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12316(__this, method) (( ValueCollection_t1915 * (*) (Dictionary_2_t1910 *, const MethodInfo*))Dictionary_2_get_Values_m12316_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m12317_gshared (Dictionary_2_t1910 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12317(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1910 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12317_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m12318_gshared (Dictionary_2_t1910 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12318(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1910 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12318_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12319_gshared (Dictionary_2_t1910 * __this, KeyValuePair_2_t1913  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12319(__this, ___pair, method) (( bool (*) (Dictionary_2_t1910 *, KeyValuePair_2_t1913 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12319_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1917  Dictionary_2_GetEnumerator_m12320_gshared (Dictionary_2_t1910 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12320(__this, method) (( Enumerator_t1917  (*) (Dictionary_2_t1910 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12320_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1035  Dictionary_2_U3CCopyToU3Em__0_m12321_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12321(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1035  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12321_gshared)(__this /* static, unused */, ___key, ___value, method)
