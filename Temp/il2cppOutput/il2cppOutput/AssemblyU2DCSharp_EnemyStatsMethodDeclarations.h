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
struct EnemyStats_t11;

#include "codegen/il2cpp-codegen.h"

// System.Void EnemyStats::.ctor()
extern "C" void EnemyStats__ctor_m24 (EnemyStats_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyStats::Start()
extern "C" void EnemyStats_Start_m25 (EnemyStats_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyStats::Update()
extern "C" void EnemyStats_Update_m26 (EnemyStats_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyStats::EnemyInit(System.Int32)
extern "C" void EnemyStats_EnemyInit_m27 (EnemyStats_t11 * __this, int32_t ___enemyNum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyStats::EnemyDamage(System.Int32,System.Boolean)
extern "C" void EnemyStats_EnemyDamage_m28 (EnemyStats_t11 * __this, int32_t ___damage, bool ___isHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
