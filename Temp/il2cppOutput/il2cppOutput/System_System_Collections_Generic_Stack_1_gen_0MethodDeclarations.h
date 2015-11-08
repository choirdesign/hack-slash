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

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t1837;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2064;
// System.Collections.IEnumerator
struct IEnumerator_t64;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m11210_gshared (Stack_1_t1837 * __this, const MethodInfo* method);
#define Stack_1__ctor_m11210(__this, method) (( void (*) (Stack_1_t1837 *, const MethodInfo*))Stack_1__ctor_m11210_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m11211_gshared (Stack_1_t1837 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m11211(__this, method) (( bool (*) (Stack_1_t1837 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m11211_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m11212_gshared (Stack_1_t1837 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m11212(__this, method) (( Object_t * (*) (Stack_1_t1837 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m11212_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m11213_gshared (Stack_1_t1837 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m11213(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t1837 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m11213_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11214_gshared (Stack_1_t1837 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11214(__this, method) (( Object_t* (*) (Stack_1_t1837 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11214_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m11215_gshared (Stack_1_t1837 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m11215(__this, method) (( Object_t * (*) (Stack_1_t1837 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m11215_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m11216_gshared (Stack_1_t1837 * __this, const MethodInfo* method);
#define Stack_1_Peek_m11216(__this, method) (( Object_t * (*) (Stack_1_t1837 *, const MethodInfo*))Stack_1_Peek_m11216_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m11217_gshared (Stack_1_t1837 * __this, const MethodInfo* method);
#define Stack_1_Pop_m11217(__this, method) (( Object_t * (*) (Stack_1_t1837 *, const MethodInfo*))Stack_1_Pop_m11217_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m11218_gshared (Stack_1_t1837 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m11218(__this, ___t, method) (( void (*) (Stack_1_t1837 *, Object_t *, const MethodInfo*))Stack_1_Push_m11218_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m11219_gshared (Stack_1_t1837 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m11219(__this, method) (( int32_t (*) (Stack_1_t1837 *, const MethodInfo*))Stack_1_get_Count_m11219_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1839  Stack_1_GetEnumerator_m11220_gshared (Stack_1_t1837 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m11220(__this, method) (( Enumerator_t1839  (*) (Stack_1_t1837 *, const MethodInfo*))Stack_1_GetEnumerator_m11220_gshared)(__this, method)
