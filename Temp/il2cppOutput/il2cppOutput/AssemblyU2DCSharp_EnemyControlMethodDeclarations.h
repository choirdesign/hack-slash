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

// EnemyControl
struct EnemyControl_t33;
// UnityEngine.Collision2D
struct Collision2D_t73;
// System.Collections.IEnumerator
struct IEnumerator_t71;

#include "codegen/il2cpp-codegen.h"

// System.Void EnemyControl::.ctor()
extern "C" void EnemyControl__ctor_m96 (EnemyControl_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyControl::Start()
extern "C" void EnemyControl_Start_m97 (EnemyControl_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyControl::Update()
extern "C" void EnemyControl_Update_m98 (EnemyControl_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyControl::OnCollisionStay2D(UnityEngine.Collision2D)
extern "C" void EnemyControl_OnCollisionStay2D_m99 (EnemyControl_t33 * __this, Collision2D_t73 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyControl::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C" void EnemyControl_OnCollisionEnter2D_m100 (EnemyControl_t33 * __this, Collision2D_t73 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator EnemyControl::EnemyAttack(System.Single)
extern "C" Object_t * EnemyControl_EnemyAttack_m101 (EnemyControl_t33 * __this, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator EnemyControl::EnemyHeal(System.Int32)
extern "C" Object_t * EnemyControl_EnemyHeal_m102 (EnemyControl_t33 * __this, int32_t ___heal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
