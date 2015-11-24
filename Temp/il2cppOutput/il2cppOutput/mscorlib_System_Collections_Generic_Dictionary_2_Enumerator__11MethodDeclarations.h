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
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m16627_gshared (Enumerator_t2244 * __this, Dictionary_2_t2237 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m16627(__this, ___dictionary, method) (( void (*) (Enumerator_t2244 *, Dictionary_2_t2237 *, const MethodInfo*))Enumerator__ctor_m16627_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m16628_gshared (Enumerator_t2244 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m16628(__this, method) (( Object_t * (*) (Enumerator_t2244 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m16628_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m16629_gshared (Enumerator_t2244 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m16629(__this, method) (( void (*) (Enumerator_t2244 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m16629_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1053  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16630_gshared (Enumerator_t2244 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16630(__this, method) (( DictionaryEntry_t1053  (*) (Enumerator_t2244 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16630_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16631_gshared (Enumerator_t2244 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16631(__this, method) (( Object_t * (*) (Enumerator_t2244 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16631_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16632_gshared (Enumerator_t2244 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16632(__this, method) (( Object_t * (*) (Enumerator_t2244 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16632_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m16633_gshared (Enumerator_t2244 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m16633(__this, method) (( bool (*) (Enumerator_t2244 *, const MethodInfo*))Enumerator_MoveNext_m16633_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" KeyValuePair_2_t2239  Enumerator_get_Current_m16634_gshared (Enumerator_t2244 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m16634(__this, method) (( KeyValuePair_2_t2239  (*) (Enumerator_t2244 *, const MethodInfo*))Enumerator_get_Current_m16634_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m16635_gshared (Enumerator_t2244 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m16635(__this, method) (( Object_t * (*) (Enumerator_t2244 *, const MethodInfo*))Enumerator_get_CurrentKey_m16635_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m16636_gshared (Enumerator_t2244 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m16636(__this, method) (( int32_t (*) (Enumerator_t2244 *, const MethodInfo*))Enumerator_get_CurrentValue_m16636_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Reset()
extern "C" void Enumerator_Reset_m16637_gshared (Enumerator_t2244 * __this, const MethodInfo* method);
#define Enumerator_Reset_m16637(__this, method) (( void (*) (Enumerator_t2244 *, const MethodInfo*))Enumerator_Reset_m16637_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyState()
extern "C" void Enumerator_VerifyState_m16638_gshared (Enumerator_t2244 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m16638(__this, method) (( void (*) (Enumerator_t2244 *, const MethodInfo*))Enumerator_VerifyState_m16638_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m16639_gshared (Enumerator_t2244 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m16639(__this, method) (( void (*) (Enumerator_t2244 *, const MethodInfo*))Enumerator_VerifyCurrent_m16639_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m16640_gshared (Enumerator_t2244 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m16640(__this, method) (( void (*) (Enumerator_t2244 *, const MethodInfo*))Enumerator_Dispose_m16640_gshared)(__this, method)
