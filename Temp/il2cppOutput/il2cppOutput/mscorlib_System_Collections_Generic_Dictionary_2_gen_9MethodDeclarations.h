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
struct Dictionary_2_t1885;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1884;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t631;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2398;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2399;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t849;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1890;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m11922_gshared (Dictionary_2_t1885 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11922(__this, method) (( void (*) (Dictionary_2_t1885 *, const MethodInfo*))Dictionary_2__ctor_m11922_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11924_gshared (Dictionary_2_t1885 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11924(__this, ___comparer, method) (( void (*) (Dictionary_2_t1885 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11924_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11926_gshared (Dictionary_2_t1885 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11926(__this, ___capacity, method) (( void (*) (Dictionary_2_t1885 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11926_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11928_gshared (Dictionary_2_t1885 * __this, SerializationInfo_t631 * ___info, StreamingContext_t632  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11928(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1885 *, SerializationInfo_t631 *, StreamingContext_t632 , const MethodInfo*))Dictionary_2__ctor_m11928_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11930_gshared (Dictionary_2_t1885 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11930(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1885 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11930_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11932_gshared (Dictionary_2_t1885 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11932(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1885 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11932_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11934_gshared (Dictionary_2_t1885 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11934(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1885 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11934_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11936_gshared (Dictionary_2_t1885 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11936(__this, ___key, method) (( bool (*) (Dictionary_2_t1885 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11936_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11938_gshared (Dictionary_2_t1885 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11938(__this, ___key, method) (( void (*) (Dictionary_2_t1885 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11938_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11940_gshared (Dictionary_2_t1885 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11940(__this, method) (( bool (*) (Dictionary_2_t1885 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11940_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11942_gshared (Dictionary_2_t1885 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11942(__this, method) (( Object_t * (*) (Dictionary_2_t1885 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11944_gshared (Dictionary_2_t1885 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11944(__this, method) (( bool (*) (Dictionary_2_t1885 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11944_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11946_gshared (Dictionary_2_t1885 * __this, KeyValuePair_2_t1887  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11946(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1885 *, KeyValuePair_2_t1887 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11946_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11948_gshared (Dictionary_2_t1885 * __this, KeyValuePair_2_t1887  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11948(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1885 *, KeyValuePair_2_t1887 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11948_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11950_gshared (Dictionary_2_t1885 * __this, KeyValuePair_2U5BU5D_t2398* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11950(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1885 *, KeyValuePair_2U5BU5D_t2398*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11950_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11952_gshared (Dictionary_2_t1885 * __this, KeyValuePair_2_t1887  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11952(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1885 *, KeyValuePair_2_t1887 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11952_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11954_gshared (Dictionary_2_t1885 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11954(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1885 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11954_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11956_gshared (Dictionary_2_t1885 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11956(__this, method) (( Object_t * (*) (Dictionary_2_t1885 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11956_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11958_gshared (Dictionary_2_t1885 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11958(__this, method) (( Object_t* (*) (Dictionary_2_t1885 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11958_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11960_gshared (Dictionary_2_t1885 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11960(__this, method) (( Object_t * (*) (Dictionary_2_t1885 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11960_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11962_gshared (Dictionary_2_t1885 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11962(__this, method) (( int32_t (*) (Dictionary_2_t1885 *, const MethodInfo*))Dictionary_2_get_Count_m11962_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m11964_gshared (Dictionary_2_t1885 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11964(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1885 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m11964_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11966_gshared (Dictionary_2_t1885 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11966(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1885 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m11966_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11968_gshared (Dictionary_2_t1885 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11968(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1885 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11968_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11970_gshared (Dictionary_2_t1885 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11970(__this, ___size, method) (( void (*) (Dictionary_2_t1885 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11970_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11972_gshared (Dictionary_2_t1885 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11972(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1885 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11972_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1887  Dictionary_2_make_pair_m11974_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11974(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1887  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m11974_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m11976_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11976(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m11976_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11978_gshared (Dictionary_2_t1885 * __this, KeyValuePair_2U5BU5D_t2398* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11978(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1885 *, KeyValuePair_2U5BU5D_t2398*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11978_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m11980_gshared (Dictionary_2_t1885 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11980(__this, method) (( void (*) (Dictionary_2_t1885 *, const MethodInfo*))Dictionary_2_Resize_m11980_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11982_gshared (Dictionary_2_t1885 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11982(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1885 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m11982_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m11984_gshared (Dictionary_2_t1885 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11984(__this, method) (( void (*) (Dictionary_2_t1885 *, const MethodInfo*))Dictionary_2_Clear_m11984_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11986_gshared (Dictionary_2_t1885 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11986(__this, ___key, method) (( bool (*) (Dictionary_2_t1885 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m11986_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11988_gshared (Dictionary_2_t1885 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11988(__this, ___value, method) (( bool (*) (Dictionary_2_t1885 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m11988_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11990_gshared (Dictionary_2_t1885 * __this, SerializationInfo_t631 * ___info, StreamingContext_t632  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11990(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1885 *, SerializationInfo_t631 *, StreamingContext_t632 , const MethodInfo*))Dictionary_2_GetObjectData_m11990_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11992_gshared (Dictionary_2_t1885 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11992(__this, ___sender, method) (( void (*) (Dictionary_2_t1885 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11992_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11994_gshared (Dictionary_2_t1885 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11994(__this, ___key, method) (( bool (*) (Dictionary_2_t1885 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m11994_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11996_gshared (Dictionary_2_t1885 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11996(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1885 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m11996_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1890 * Dictionary_2_get_Values_m11997_gshared (Dictionary_2_t1885 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11997(__this, method) (( ValueCollection_t1890 * (*) (Dictionary_2_t1885 *, const MethodInfo*))Dictionary_2_get_Values_m11997_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m11999_gshared (Dictionary_2_t1885 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11999(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1885 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11999_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m12001_gshared (Dictionary_2_t1885 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12001(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1885 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12001_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12003_gshared (Dictionary_2_t1885 * __this, KeyValuePair_2_t1887  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12003(__this, ___pair, method) (( bool (*) (Dictionary_2_t1885 *, KeyValuePair_2_t1887 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12003_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1892  Dictionary_2_GetEnumerator_m12004_gshared (Dictionary_2_t1885 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12004(__this, method) (( Enumerator_t1892  (*) (Dictionary_2_t1885 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12004_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1037  Dictionary_2_U3CCopyToU3Em__0_m12006_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12006(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1037  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12006_gshared)(__this /* static, unused */, ___key, ___value, method)
