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

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t1814;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t71;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t82;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2070;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1813;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m10917_gshared (Collection_1_t1814 * __this, const MethodInfo* method);
#define Collection_1__ctor_m10917(__this, method) (( void (*) (Collection_1_t1814 *, const MethodInfo*))Collection_1__ctor_m10917_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10918_gshared (Collection_1_t1814 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10918(__this, method) (( bool (*) (Collection_1_t1814 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10918_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m10919_gshared (Collection_1_t1814 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m10919(__this, ___array, ___index, method) (( void (*) (Collection_1_t1814 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m10919_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m10920_gshared (Collection_1_t1814 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m10920(__this, method) (( Object_t * (*) (Collection_1_t1814 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m10920_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m10921_gshared (Collection_1_t1814 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m10921(__this, ___value, method) (( int32_t (*) (Collection_1_t1814 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m10921_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m10922_gshared (Collection_1_t1814 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m10922(__this, ___value, method) (( bool (*) (Collection_1_t1814 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m10922_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m10923_gshared (Collection_1_t1814 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m10923(__this, ___value, method) (( int32_t (*) (Collection_1_t1814 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m10923_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m10924_gshared (Collection_1_t1814 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m10924(__this, ___index, ___value, method) (( void (*) (Collection_1_t1814 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m10924_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m10925_gshared (Collection_1_t1814 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m10925(__this, ___value, method) (( void (*) (Collection_1_t1814 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m10925_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m10926_gshared (Collection_1_t1814 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m10926(__this, method) (( bool (*) (Collection_1_t1814 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m10926_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m10927_gshared (Collection_1_t1814 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m10927(__this, method) (( Object_t * (*) (Collection_1_t1814 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m10927_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m10928_gshared (Collection_1_t1814 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m10928(__this, method) (( bool (*) (Collection_1_t1814 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m10928_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m10929_gshared (Collection_1_t1814 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m10929(__this, method) (( bool (*) (Collection_1_t1814 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m10929_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m10930_gshared (Collection_1_t1814 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m10930(__this, ___index, method) (( Object_t * (*) (Collection_1_t1814 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m10930_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m10931_gshared (Collection_1_t1814 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m10931(__this, ___index, ___value, method) (( void (*) (Collection_1_t1814 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m10931_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m10932_gshared (Collection_1_t1814 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m10932(__this, ___item, method) (( void (*) (Collection_1_t1814 *, Object_t *, const MethodInfo*))Collection_1_Add_m10932_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m10933_gshared (Collection_1_t1814 * __this, const MethodInfo* method);
#define Collection_1_Clear_m10933(__this, method) (( void (*) (Collection_1_t1814 *, const MethodInfo*))Collection_1_Clear_m10933_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m10934_gshared (Collection_1_t1814 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m10934(__this, method) (( void (*) (Collection_1_t1814 *, const MethodInfo*))Collection_1_ClearItems_m10934_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m10935_gshared (Collection_1_t1814 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m10935(__this, ___item, method) (( bool (*) (Collection_1_t1814 *, Object_t *, const MethodInfo*))Collection_1_Contains_m10935_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m10936_gshared (Collection_1_t1814 * __this, ObjectU5BU5D_t82* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m10936(__this, ___array, ___index, method) (( void (*) (Collection_1_t1814 *, ObjectU5BU5D_t82*, int32_t, const MethodInfo*))Collection_1_CopyTo_m10936_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m10937_gshared (Collection_1_t1814 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m10937(__this, method) (( Object_t* (*) (Collection_1_t1814 *, const MethodInfo*))Collection_1_GetEnumerator_m10937_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m10938_gshared (Collection_1_t1814 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m10938(__this, ___item, method) (( int32_t (*) (Collection_1_t1814 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m10938_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m10939_gshared (Collection_1_t1814 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m10939(__this, ___index, ___item, method) (( void (*) (Collection_1_t1814 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m10939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m10940_gshared (Collection_1_t1814 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m10940(__this, ___index, ___item, method) (( void (*) (Collection_1_t1814 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m10940_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m10941_gshared (Collection_1_t1814 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m10941(__this, ___item, method) (( bool (*) (Collection_1_t1814 *, Object_t *, const MethodInfo*))Collection_1_Remove_m10941_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m10942_gshared (Collection_1_t1814 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m10942(__this, ___index, method) (( void (*) (Collection_1_t1814 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m10942_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m10943_gshared (Collection_1_t1814 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m10943(__this, ___index, method) (( void (*) (Collection_1_t1814 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m10943_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m10944_gshared (Collection_1_t1814 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m10944(__this, method) (( int32_t (*) (Collection_1_t1814 *, const MethodInfo*))Collection_1_get_Count_m10944_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m10945_gshared (Collection_1_t1814 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m10945(__this, ___index, method) (( Object_t * (*) (Collection_1_t1814 *, int32_t, const MethodInfo*))Collection_1_get_Item_m10945_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m10946_gshared (Collection_1_t1814 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m10946(__this, ___index, ___value, method) (( void (*) (Collection_1_t1814 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m10946_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m10947_gshared (Collection_1_t1814 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m10947(__this, ___index, ___item, method) (( void (*) (Collection_1_t1814 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m10947_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m10948_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m10948(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m10948_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m10949_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m10949(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m10949_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m10950_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m10950(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m10950_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m10951_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m10951(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m10951_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m10952_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m10952(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m10952_gshared)(__this /* static, unused */, ___list, method)
