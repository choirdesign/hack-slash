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

// System.Security.Cryptography.AesTransform
struct AesTransform_t683;
// System.Security.Cryptography.Aes
struct Aes_t681;
// System.Byte[]
struct ByteU5BU5D_t678;
// System.UInt32[]
struct UInt32U5BU5D_t684;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.AesTransform::.ctor(System.Security.Cryptography.Aes,System.Boolean,System.Byte[],System.Byte[])
extern "C" void AesTransform__ctor_m3484 (AesTransform_t683 * __this, Aes_t681 * ___algo, bool ___encryption, ByteU5BU5D_t678* ___key, ByteU5BU5D_t678* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesTransform::.cctor()
extern "C" void AesTransform__cctor_m3485 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesTransform::ECB(System.Byte[],System.Byte[])
extern "C" void AesTransform_ECB_m3486 (AesTransform_t683 * __this, ByteU5BU5D_t678* ___input, ByteU5BU5D_t678* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.AesTransform::SubByte(System.UInt32)
extern "C" uint32_t AesTransform_SubByte_m3487 (AesTransform_t683 * __this, uint32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void AesTransform_Encrypt128_m3488 (AesTransform_t683 * __this, ByteU5BU5D_t678* ___indata, ByteU5BU5D_t678* ___outdata, UInt32U5BU5D_t684* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void AesTransform_Decrypt128_m3489 (AesTransform_t683 * __this, ByteU5BU5D_t678* ___indata, ByteU5BU5D_t678* ___outdata, UInt32U5BU5D_t684* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
