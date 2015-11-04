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

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1196;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t404;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t1716;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Globalization.NumberFormatInfo::.ctor(System.Int32,System.Boolean)
extern "C" void NumberFormatInfo__ctor_m7351 (NumberFormatInfo_t1196 * __this, int32_t ___lcid, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.ctor(System.Boolean)
extern "C" void NumberFormatInfo__ctor_m7352 (NumberFormatInfo_t1196 * __this, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.ctor()
extern "C" void NumberFormatInfo__ctor_m7353 (NumberFormatInfo_t1196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.cctor()
extern "C" void NumberFormatInfo__cctor_m7354 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyDecimalDigits()
extern "C" int32_t NumberFormatInfo_get_CurrencyDecimalDigits_m7355 (NumberFormatInfo_t1196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencyDecimalSeparator()
extern "C" String_t* NumberFormatInfo_get_CurrencyDecimalSeparator_m7356 (NumberFormatInfo_t1196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencyGroupSeparator()
extern "C" String_t* NumberFormatInfo_get_CurrencyGroupSeparator_m7357 (NumberFormatInfo_t1196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawCurrencyGroupSizes()
extern "C" Int32U5BU5D_t404* NumberFormatInfo_get_RawCurrencyGroupSizes_m7358 (NumberFormatInfo_t1196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyNegativePattern()
extern "C" int32_t NumberFormatInfo_get_CurrencyNegativePattern_m7359 (NumberFormatInfo_t1196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyPositivePattern()
extern "C" int32_t NumberFormatInfo_get_CurrencyPositivePattern_m7360 (NumberFormatInfo_t1196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencySymbol()
extern "C" String_t* NumberFormatInfo_get_CurrencySymbol_m7361 (NumberFormatInfo_t1196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_CurrentInfo()
extern "C" NumberFormatInfo_t1196 * NumberFormatInfo_get_CurrentInfo_m7362 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
extern "C" NumberFormatInfo_t1196 * NumberFormatInfo_get_InvariantInfo_m7363 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NaNSymbol()
extern "C" String_t* NumberFormatInfo_get_NaNSymbol_m7364 (NumberFormatInfo_t1196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NegativeInfinitySymbol()
extern "C" String_t* NumberFormatInfo_get_NegativeInfinitySymbol_m7365 (NumberFormatInfo_t1196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NegativeSign()
extern "C" String_t* NumberFormatInfo_get_NegativeSign_m7366 (NumberFormatInfo_t1196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_NumberDecimalDigits()
extern "C" int32_t NumberFormatInfo_get_NumberDecimalDigits_m7367 (NumberFormatInfo_t1196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NumberDecimalSeparator()
extern "C" String_t* NumberFormatInfo_get_NumberDecimalSeparator_m7368 (NumberFormatInfo_t1196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NumberGroupSeparator()
extern "C" String_t* NumberFormatInfo_get_NumberGroupSeparator_m7369 (NumberFormatInfo_t1196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawNumberGroupSizes()
extern "C" Int32U5BU5D_t404* NumberFormatInfo_get_RawNumberGroupSizes_m7370 (NumberFormatInfo_t1196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_NumberNegativePattern()
extern "C" int32_t NumberFormatInfo_get_NumberNegativePattern_m7371 (NumberFormatInfo_t1196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::set_NumberNegativePattern(System.Int32)
extern "C" void NumberFormatInfo_set_NumberNegativePattern_m7372 (NumberFormatInfo_t1196 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentDecimalDigits()
extern "C" int32_t NumberFormatInfo_get_PercentDecimalDigits_m7373 (NumberFormatInfo_t1196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentDecimalSeparator()
extern "C" String_t* NumberFormatInfo_get_PercentDecimalSeparator_m7374 (NumberFormatInfo_t1196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentGroupSeparator()
extern "C" String_t* NumberFormatInfo_get_PercentGroupSeparator_m7375 (NumberFormatInfo_t1196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawPercentGroupSizes()
extern "C" Int32U5BU5D_t404* NumberFormatInfo_get_RawPercentGroupSizes_m7376 (NumberFormatInfo_t1196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentNegativePattern()
extern "C" int32_t NumberFormatInfo_get_PercentNegativePattern_m7377 (NumberFormatInfo_t1196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentPositivePattern()
extern "C" int32_t NumberFormatInfo_get_PercentPositivePattern_m7378 (NumberFormatInfo_t1196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentSymbol()
extern "C" String_t* NumberFormatInfo_get_PercentSymbol_m7379 (NumberFormatInfo_t1196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PerMilleSymbol()
extern "C" String_t* NumberFormatInfo_get_PerMilleSymbol_m7380 (NumberFormatInfo_t1196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PositiveInfinitySymbol()
extern "C" String_t* NumberFormatInfo_get_PositiveInfinitySymbol_m7381 (NumberFormatInfo_t1196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PositiveSign()
extern "C" String_t* NumberFormatInfo_get_PositiveSign_m7382 (NumberFormatInfo_t1196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.NumberFormatInfo::GetFormat(System.Type)
extern "C" Object_t * NumberFormatInfo_GetFormat_m7383 (NumberFormatInfo_t1196 * __this, Type_t * ___formatType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.NumberFormatInfo::Clone()
extern "C" Object_t * NumberFormatInfo_Clone_m7384 (NumberFormatInfo_t1196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::GetInstance(System.IFormatProvider)
extern "C" NumberFormatInfo_t1196 * NumberFormatInfo_GetInstance_m7385 (Object_t * __this /* static, unused */, Object_t * ___formatProvider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
