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
struct Collection_1_t1798;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t63;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2054;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1797;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m10826_gshared (Collection_1_t1798 * __this, const MethodInfo* method);
#define Collection_1__ctor_m10826(__this, method) (( void (*) (Collection_1_t1798 *, const MethodInfo*))Collection_1__ctor_m10826_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10827_gshared (Collection_1_t1798 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10827(__this, method) (( bool (*) (Collection_1_t1798 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10827_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m10828_gshared (Collection_1_t1798 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m10828(__this, ___array, ___index, method) (( void (*) (Collection_1_t1798 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m10828_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m10829_gshared (Collection_1_t1798 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m10829(__this, method) (( Object_t * (*) (Collection_1_t1798 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m10829_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m10830_gshared (Collection_1_t1798 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m10830(__this, ___value, method) (( int32_t (*) (Collection_1_t1798 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m10830_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m10831_gshared (Collection_1_t1798 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m10831(__this, ___value, method) (( bool (*) (Collection_1_t1798 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m10831_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m10832_gshared (Collection_1_t1798 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m10832(__this, ___value, method) (( int32_t (*) (Collection_1_t1798 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m10832_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m10833_gshared (Collection_1_t1798 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m10833(__this, ___index, ___value, method) (( void (*) (Collection_1_t1798 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m10833_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m10834_gshared (Collection_1_t1798 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m10834(__this, ___value, method) (( void (*) (Collection_1_t1798 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m10834_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m10835_gshared (Collection_1_t1798 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m10835(__this, method) (( bool (*) (Collection_1_t1798 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m10835_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m10836_gshared (Collection_1_t1798 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m10836(__this, method) (( Object_t * (*) (Collection_1_t1798 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m10836_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m10837_gshared (Collection_1_t1798 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m10837(__this, method) (( bool (*) (Collection_1_t1798 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m10837_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m10838_gshared (Collection_1_t1798 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m10838(__this, method) (( bool (*) (Collection_1_t1798 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m10838_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m10839_gshared (Collection_1_t1798 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m10839(__this, ___index, method) (( Object_t * (*) (Collection_1_t1798 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m10839_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m10840_gshared (Collection_1_t1798 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m10840(__this, ___index, ___value, method) (( void (*) (Collection_1_t1798 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m10840_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m10841_gshared (Collection_1_t1798 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m10841(__this, ___item, method) (( void (*) (Collection_1_t1798 *, Object_t *, const MethodInfo*))Collection_1_Add_m10841_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m10842_gshared (Collection_1_t1798 * __this, const MethodInfo* method);
#define Collection_1_Clear_m10842(__this, method) (( void (*) (Collection_1_t1798 *, const MethodInfo*))Collection_1_Clear_m10842_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m10843_gshared (Collection_1_t1798 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m10843(__this, method) (( void (*) (Collection_1_t1798 *, const MethodInfo*))Collection_1_ClearItems_m10843_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m10844_gshared (Collection_1_t1798 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m10844(__this, ___item, method) (( bool (*) (Collection_1_t1798 *, Object_t *, const MethodInfo*))Collection_1_Contains_m10844_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m10845_gshared (Collection_1_t1798 * __this, ObjectU5BU5D_t63* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m10845(__this, ___array, ___index, method) (( void (*) (Collection_1_t1798 *, ObjectU5BU5D_t63*, int32_t, const MethodInfo*))Collection_1_CopyTo_m10845_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m10846_gshared (Collection_1_t1798 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m10846(__this, method) (( Object_t* (*) (Collection_1_t1798 *, const MethodInfo*))Collection_1_GetEnumerator_m10846_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m10847_gshared (Collection_1_t1798 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m10847(__this, ___item, method) (( int32_t (*) (Collection_1_t1798 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m10847_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m10848_gshared (Collection_1_t1798 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m10848(__this, ___index, ___item, method) (( void (*) (Collection_1_t1798 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m10848_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m10849_gshared (Collection_1_t1798 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m10849(__this, ___index, ___item, method) (( void (*) (Collection_1_t1798 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m10849_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m10850_gshared (Collection_1_t1798 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m10850(__this, ___item, method) (( bool (*) (Collection_1_t1798 *, Object_t *, const MethodInfo*))Collection_1_Remove_m10850_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m10851_gshared (Collection_1_t1798 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m10851(__this, ___index, method) (( void (*) (Collection_1_t1798 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m10851_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m10852_gshared (Collection_1_t1798 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m10852(__this, ___index, method) (( void (*) (Collection_1_t1798 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m10852_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m10853_gshared (Collection_1_t1798 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m10853(__this, method) (( int32_t (*) (Collection_1_t1798 *, const MethodInfo*))Collection_1_get_Count_m10853_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m10854_gshared (Collection_1_t1798 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m10854(__this, ___index, method) (( Object_t * (*) (Collection_1_t1798 *, int32_t, const MethodInfo*))Collection_1_get_Item_m10854_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m10855_gshared (Collection_1_t1798 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m10855(__this, ___index, ___value, method) (( void (*) (Collection_1_t1798 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m10855_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m10856_gshared (Collection_1_t1798 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m10856(__this, ___index, ___item, method) (( void (*) (Collection_1_t1798 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m10856_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m10857_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m10857(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m10857_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m10858_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m10858(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m10858_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m10859_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m10859(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m10859_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m10860_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m10860(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m10860_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m10861_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m10861(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m10861_gshared)(__this /* static, unused */, ___list, method)
