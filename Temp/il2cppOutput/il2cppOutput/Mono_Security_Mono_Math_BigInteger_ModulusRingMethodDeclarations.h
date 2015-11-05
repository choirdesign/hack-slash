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

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t701;
// Mono.Math.BigInteger
struct BigInteger_t702;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m3512 (ModulusRing_t701 * __this, BigInteger_t702 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m3513 (ModulusRing_t701 * __this, BigInteger_t702 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t702 * ModulusRing_Multiply_m3514 (ModulusRing_t701 * __this, BigInteger_t702 * ___a, BigInteger_t702 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t702 * ModulusRing_Difference_m3515 (ModulusRing_t701 * __this, BigInteger_t702 * ___a, BigInteger_t702 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t702 * ModulusRing_Pow_m3516 (ModulusRing_t701 * __this, BigInteger_t702 * ___a, BigInteger_t702 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t702 * ModulusRing_Pow_m3517 (ModulusRing_t701 * __this, uint32_t ___b, BigInteger_t702 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
