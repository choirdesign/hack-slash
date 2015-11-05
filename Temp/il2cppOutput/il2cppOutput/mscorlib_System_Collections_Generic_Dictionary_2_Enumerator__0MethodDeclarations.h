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
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12045_gshared (Enumerator_t1892 * __this, Dictionary_2_t1885 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12045(__this, ___dictionary, method) (( void (*) (Enumerator_t1892 *, Dictionary_2_t1885 *, const MethodInfo*))Enumerator__ctor_m12045_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12046_gshared (Enumerator_t1892 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12046(__this, method) (( Object_t * (*) (Enumerator_t1892 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12046_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m12047_gshared (Enumerator_t1892 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m12047(__this, method) (( void (*) (Enumerator_t1892 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m12047_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1037  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12048_gshared (Enumerator_t1892 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12048(__this, method) (( DictionaryEntry_t1037  (*) (Enumerator_t1892 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12048_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12049_gshared (Enumerator_t1892 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12049(__this, method) (( Object_t * (*) (Enumerator_t1892 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12049_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12050_gshared (Enumerator_t1892 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12050(__this, method) (( Object_t * (*) (Enumerator_t1892 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12050_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12051_gshared (Enumerator_t1892 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12051(__this, method) (( bool (*) (Enumerator_t1892 *, const MethodInfo*))Enumerator_MoveNext_m12051_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1887  Enumerator_get_Current_m12052_gshared (Enumerator_t1892 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12052(__this, method) (( KeyValuePair_2_t1887  (*) (Enumerator_t1892 *, const MethodInfo*))Enumerator_get_Current_m12052_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m12053_gshared (Enumerator_t1892 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12053(__this, method) (( int32_t (*) (Enumerator_t1892 *, const MethodInfo*))Enumerator_get_CurrentKey_m12053_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m12054_gshared (Enumerator_t1892 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12054(__this, method) (( Object_t * (*) (Enumerator_t1892 *, const MethodInfo*))Enumerator_get_CurrentValue_m12054_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m12055_gshared (Enumerator_t1892 * __this, const MethodInfo* method);
#define Enumerator_Reset_m12055(__this, method) (( void (*) (Enumerator_t1892 *, const MethodInfo*))Enumerator_Reset_m12055_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m12056_gshared (Enumerator_t1892 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12056(__this, method) (( void (*) (Enumerator_t1892 *, const MethodInfo*))Enumerator_VerifyState_m12056_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12057_gshared (Enumerator_t1892 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12057(__this, method) (( void (*) (Enumerator_t1892 *, const MethodInfo*))Enumerator_VerifyCurrent_m12057_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m12058_gshared (Enumerator_t1892 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12058(__this, method) (( void (*) (Enumerator_t1892 *, const MethodInfo*))Enumerator_Dispose_m12058_gshared)(__this, method)
