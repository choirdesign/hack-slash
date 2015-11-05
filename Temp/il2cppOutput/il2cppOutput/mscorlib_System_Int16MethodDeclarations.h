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

// System.IFormatProvider
struct IFormatProvider_t1718;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Exception
struct Exception_t78;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_Decimal.h"
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Boolean System.Int16::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool Int16_System_IConvertible_ToBoolean_m5699 (int16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Int16::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t Int16_System_IConvertible_ToByte_m5700 (int16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Int16::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t Int16_System_IConvertible_ToChar_m5701 (int16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Int16::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t527  Int16_System_IConvertible_ToDateTime_m5702 (int16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Int16::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t1060  Int16_System_IConvertible_ToDecimal_m5703 (int16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Int16::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double Int16_System_IConvertible_ToDouble_m5704 (int16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Int16::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t Int16_System_IConvertible_ToInt16_m5705 (int16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int16::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t Int16_System_IConvertible_ToInt32_m5706 (int16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Int16::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t Int16_System_IConvertible_ToInt64_m5707 (int16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Int16::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t Int16_System_IConvertible_ToSByte_m5708 (int16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Int16::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float Int16_System_IConvertible_ToSingle_m5709 (int16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Int16::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * Int16_System_IConvertible_ToType_m5710 (int16_t* __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Int16::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t Int16_System_IConvertible_ToUInt16_m5711 (int16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Int16::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t Int16_System_IConvertible_ToUInt32_m5712 (int16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Int16::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t Int16_System_IConvertible_ToUInt64_m5713 (int16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int16::CompareTo(System.Object)
extern "C" int32_t Int16_CompareTo_m5714 (int16_t* __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int16::Equals(System.Object)
extern "C" bool Int16_Equals_m5715 (int16_t* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int16::GetHashCode()
extern "C" int32_t Int16_GetHashCode_m5716 (int16_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int16::CompareTo(System.Int16)
extern "C" int32_t Int16_CompareTo_m5717 (int16_t* __this, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int16::Equals(System.Int16)
extern "C" bool Int16_Equals_m5718 (int16_t* __this, int16_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int16::Parse(System.String,System.Boolean,System.Int16&,System.Exception&)
extern "C" bool Int16_Parse_m5719 (Object_t * __this /* static, unused */, String_t* ___s, bool ___tryParse, int16_t* ___result, Exception_t78 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Int16::Parse(System.String,System.IFormatProvider)
extern "C" int16_t Int16_Parse_m5720 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Int16::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" int16_t Int16_Parse_m5721 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int16::TryParse(System.String,System.Int16&)
extern "C" bool Int16_TryParse_m5722 (Object_t * __this /* static, unused */, String_t* ___s, int16_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int16::ToString()
extern "C" String_t* Int16_ToString_m5723 (int16_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int16::ToString(System.IFormatProvider)
extern "C" String_t* Int16_ToString_m5724 (int16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int16::ToString(System.String)
extern "C" String_t* Int16_ToString_m5725 (int16_t* __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int16::ToString(System.String,System.IFormatProvider)
extern "C" String_t* Int16_ToString_m5726 (int16_t* __this, String_t* ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
