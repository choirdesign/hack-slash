﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Text.ASCIIEncoding
struct ASCIIEncoding_t1571;
// System.Char[]
struct CharU5BU5D_t60;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t676;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t1582;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1573;
// System.Text.Decoder
struct Decoder_t1209;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.ASCIIEncoding::.ctor()
extern "C" void ASCIIEncoding__ctor_m9411 (ASCIIEncoding_t1571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t ASCIIEncoding_GetByteCount_m9412 (ASCIIEncoding_t1571 * __this, CharU5BU5D_t60* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.String)
extern "C" int32_t ASCIIEncoding_GetByteCount_m9413 (ASCIIEncoding_t1571 * __this, String_t* ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m9414 (ASCIIEncoding_t1571 * __this, CharU5BU5D_t60* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t676* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t ASCIIEncoding_GetBytes_m9415 (ASCIIEncoding_t1571 * __this, CharU5BU5D_t60* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t676* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1582 ** ___buffer, CharU5BU5D_t60** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m9416 (ASCIIEncoding_t1571 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t676* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t ASCIIEncoding_GetBytes_m9417 (ASCIIEncoding_t1571 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t676* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1582 ** ___buffer, CharU5BU5D_t60** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ASCIIEncoding_GetCharCount_m9418 (ASCIIEncoding_t1571 * __this, ByteU5BU5D_t676* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetChars_m9419 (ASCIIEncoding_t1571 * __this, ByteU5BU5D_t676* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t60* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Text.DecoderFallbackBuffer&)
extern "C" int32_t ASCIIEncoding_GetChars_m9420 (ASCIIEncoding_t1571 * __this, ByteU5BU5D_t676* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t60* ___chars, int32_t ___charIndex, DecoderFallbackBuffer_t1573 ** ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxByteCount(System.Int32)
extern "C" int32_t ASCIIEncoding_GetMaxByteCount_m9421 (ASCIIEncoding_t1571 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxCharCount(System.Int32)
extern "C" int32_t ASCIIEncoding_GetMaxCharCount_m9422 (ASCIIEncoding_t1571 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.ASCIIEncoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* ASCIIEncoding_GetString_m9423 (ASCIIEncoding_t1571 * __this, ByteU5BU5D_t676* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m9424 (ASCIIEncoding_t1571 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char*,System.Int32)
extern "C" int32_t ASCIIEncoding_GetByteCount_m9425 (ASCIIEncoding_t1571 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.ASCIIEncoding::GetDecoder()
extern "C" Decoder_t1209 * ASCIIEncoding_GetDecoder_m9426 (ASCIIEncoding_t1571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
