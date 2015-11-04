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
struct Dictionary_2_t2219;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m16522_gshared (Enumerator_t2226 * __this, Dictionary_2_t2219 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m16522(__this, ___dictionary, method) (( void (*) (Enumerator_t2226 *, Dictionary_2_t2219 *, const MethodInfo*))Enumerator__ctor_m16522_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m16523_gshared (Enumerator_t2226 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m16523(__this, method) (( Object_t * (*) (Enumerator_t2226 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m16523_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m16524_gshared (Enumerator_t2226 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m16524(__this, method) (( void (*) (Enumerator_t2226 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m16524_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1035  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16525_gshared (Enumerator_t2226 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16525(__this, method) (( DictionaryEntry_t1035  (*) (Enumerator_t2226 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16525_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16526_gshared (Enumerator_t2226 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16526(__this, method) (( Object_t * (*) (Enumerator_t2226 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16526_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16527_gshared (Enumerator_t2226 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16527(__this, method) (( Object_t * (*) (Enumerator_t2226 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16527_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m16528_gshared (Enumerator_t2226 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m16528(__this, method) (( bool (*) (Enumerator_t2226 *, const MethodInfo*))Enumerator_MoveNext_m16528_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" KeyValuePair_2_t2221  Enumerator_get_Current_m16529_gshared (Enumerator_t2226 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m16529(__this, method) (( KeyValuePair_2_t2221  (*) (Enumerator_t2226 *, const MethodInfo*))Enumerator_get_Current_m16529_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m16530_gshared (Enumerator_t2226 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m16530(__this, method) (( Object_t * (*) (Enumerator_t2226 *, const MethodInfo*))Enumerator_get_CurrentKey_m16530_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m16531_gshared (Enumerator_t2226 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m16531(__this, method) (( int32_t (*) (Enumerator_t2226 *, const MethodInfo*))Enumerator_get_CurrentValue_m16531_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Reset()
extern "C" void Enumerator_Reset_m16532_gshared (Enumerator_t2226 * __this, const MethodInfo* method);
#define Enumerator_Reset_m16532(__this, method) (( void (*) (Enumerator_t2226 *, const MethodInfo*))Enumerator_Reset_m16532_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyState()
extern "C" void Enumerator_VerifyState_m16533_gshared (Enumerator_t2226 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m16533(__this, method) (( void (*) (Enumerator_t2226 *, const MethodInfo*))Enumerator_VerifyState_m16533_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m16534_gshared (Enumerator_t2226 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m16534(__this, method) (( void (*) (Enumerator_t2226 *, const MethodInfo*))Enumerator_VerifyCurrent_m16534_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m16535_gshared (Enumerator_t2226 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m16535(__this, method) (( void (*) (Enumerator_t2226 *, const MethodInfo*))Enumerator_Dispose_m16535_gshared)(__this, method)
