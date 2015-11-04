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

// System.Globalization.TextInfo
struct TextInfo_t1109;
// System.Globalization.CultureInfo
struct CultureInfo_t651;
// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Void.h"

// System.Void System.Globalization.TextInfo::.ctor(System.Globalization.CultureInfo,System.Int32,System.Void*,System.Boolean)
extern "C" void TextInfo__ctor_m7386 (TextInfo_t1109 * __this, CultureInfo_t651 * ___ci, int32_t ___lcid, void* ___data, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.TextInfo::.ctor(System.Globalization.TextInfo)
extern "C" void TextInfo__ctor_m7387 (TextInfo_t1109 * __this, TextInfo_t1109 * ___textInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.TextInfo::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void TextInfo_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m7388 (TextInfo_t1109 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::get_ListSeparator()
extern "C" String_t* TextInfo_get_ListSeparator_m7389 (TextInfo_t1109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::get_CultureName()
extern "C" String_t* TextInfo_get_CultureName_m7390 (TextInfo_t1109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.TextInfo::Equals(System.Object)
extern "C" bool TextInfo_Equals_m7391 (TextInfo_t1109 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.TextInfo::GetHashCode()
extern "C" int32_t TextInfo_GetHashCode_m7392 (TextInfo_t1109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::ToString()
extern "C" String_t* TextInfo_ToString_m7393 (TextInfo_t1109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Globalization.TextInfo::ToLower(System.Char)
extern "C" uint16_t TextInfo_ToLower_m7394 (TextInfo_t1109 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Globalization.TextInfo::ToUpper(System.Char)
extern "C" uint16_t TextInfo_ToUpper_m7395 (TextInfo_t1109 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::ToLower(System.String)
extern "C" String_t* TextInfo_ToLower_m7396 (TextInfo_t1109 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.TextInfo::Clone()
extern "C" Object_t * TextInfo_Clone_m7397 (TextInfo_t1109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
