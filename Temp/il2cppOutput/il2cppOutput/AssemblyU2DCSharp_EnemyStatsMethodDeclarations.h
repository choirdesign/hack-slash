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

// EnemyStats
struct EnemyStats_t13;

#include "codegen/il2cpp-codegen.h"

// System.Void EnemyStats::.ctor()
extern "C" void EnemyStats__ctor_m42 (EnemyStats_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyStats::Start()
extern "C" void EnemyStats_Start_m43 (EnemyStats_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyStats::Update()
extern "C" void EnemyStats_Update_m44 (EnemyStats_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyStats::EnemyInit(System.Int32)
extern "C" void EnemyStats_EnemyInit_m45 (EnemyStats_t13 * __this, int32_t ___enemyNum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyStats::EnemyDamage(System.Int32,System.Boolean)
extern "C" void EnemyStats_EnemyDamage_m46 (EnemyStats_t13 * __this, int32_t ___damage, bool ___isHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyStats::EnemyHeal(System.Int32)
extern "C" void EnemyStats_EnemyHeal_m47 (EnemyStats_t13 * __this, int32_t ___heal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
