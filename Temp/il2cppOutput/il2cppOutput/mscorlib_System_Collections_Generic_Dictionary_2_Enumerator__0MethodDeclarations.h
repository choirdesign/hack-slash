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
struct Dictionary_2_t1883;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12031_gshared (Enumerator_t1890 * __this, Dictionary_2_t1883 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12031(__this, ___dictionary, method) (( void (*) (Enumerator_t1890 *, Dictionary_2_t1883 *, const MethodInfo*))Enumerator__ctor_m12031_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12032_gshared (Enumerator_t1890 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12032(__this, method) (( Object_t * (*) (Enumerator_t1890 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12032_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m12033_gshared (Enumerator_t1890 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m12033(__this, method) (( void (*) (Enumerator_t1890 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m12033_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1035  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12034_gshared (Enumerator_t1890 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12034(__this, method) (( DictionaryEntry_t1035  (*) (Enumerator_t1890 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12034_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12035_gshared (Enumerator_t1890 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12035(__this, method) (( Object_t * (*) (Enumerator_t1890 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12035_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12036_gshared (Enumerator_t1890 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12036(__this, method) (( Object_t * (*) (Enumerator_t1890 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12036_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12037_gshared (Enumerator_t1890 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12037(__this, method) (( bool (*) (Enumerator_t1890 *, const MethodInfo*))Enumerator_MoveNext_m12037_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1885  Enumerator_get_Current_m12038_gshared (Enumerator_t1890 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12038(__this, method) (( KeyValuePair_2_t1885  (*) (Enumerator_t1890 *, const MethodInfo*))Enumerator_get_Current_m12038_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m12039_gshared (Enumerator_t1890 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12039(__this, method) (( int32_t (*) (Enumerator_t1890 *, const MethodInfo*))Enumerator_get_CurrentKey_m12039_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m12040_gshared (Enumerator_t1890 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12040(__this, method) (( Object_t * (*) (Enumerator_t1890 *, const MethodInfo*))Enumerator_get_CurrentValue_m12040_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m12041_gshared (Enumerator_t1890 * __this, const MethodInfo* method);
#define Enumerator_Reset_m12041(__this, method) (( void (*) (Enumerator_t1890 *, const MethodInfo*))Enumerator_Reset_m12041_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m12042_gshared (Enumerator_t1890 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12042(__this, method) (( void (*) (Enumerator_t1890 *, const MethodInfo*))Enumerator_VerifyState_m12042_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12043_gshared (Enumerator_t1890 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12043(__this, method) (( void (*) (Enumerator_t1890 *, const MethodInfo*))Enumerator_VerifyCurrent_m12043_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m12044_gshared (Enumerator_t1890 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12044(__this, method) (( void (*) (Enumerator_t1890 *, const MethodInfo*))Enumerator_Dispose_m12044_gshared)(__this, method)
