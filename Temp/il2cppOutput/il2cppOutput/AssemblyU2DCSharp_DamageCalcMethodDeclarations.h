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

// DamageCalc
struct DamageCalc_t1;

#include "codegen/il2cpp-codegen.h"

// System.Void DamageCalc::.ctor()
extern "C" void DamageCalc__ctor_m0 (DamageCalc_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DamageCalc::IsHit(System.Int32,System.Int32)
extern "C" bool DamageCalc_IsHit_m1 (DamageCalc_t1 * __this, int32_t ___pAgl, int32_t ___eAgl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DamageCalc::Calc(System.Int32,System.Int32)
extern "C" int32_t DamageCalc_Calc_m2 (DamageCalc_t1 * __this, int32_t ___myAtk, int32_t ___enemyDef, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DamageCalc::RndPCalc(System.Int32)
extern "C" int32_t DamageCalc_RndPCalc_m3 (DamageCalc_t1 * __this, int32_t ___Atk, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DamageCalc::Log()
extern "C" void DamageCalc_Log_m4 (DamageCalc_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
