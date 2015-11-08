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
struct EnemyControl_t31;
// UnityEngine.Collision2D
struct Collision2D_t66;
// System.Collections.IEnumerator
struct IEnumerator_t64;

#include "codegen/il2cpp-codegen.h"

// System.Void EnemyControl::.ctor()
extern "C" void EnemyControl__ctor_m72 (EnemyControl_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyControl::Start()
extern "C" void EnemyControl_Start_m73 (EnemyControl_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyControl::Update()
extern "C" void EnemyControl_Update_m74 (EnemyControl_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyControl::OnCollisionStay2D(UnityEngine.Collision2D)
extern "C" void EnemyControl_OnCollisionStay2D_m75 (EnemyControl_t31 * __this, Collision2D_t66 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyControl::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C" void EnemyControl_OnCollisionEnter2D_m76 (EnemyControl_t31 * __this, Collision2D_t66 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator EnemyControl::EnemyAttack(System.Single)
extern "C" Object_t * EnemyControl_EnemyAttack_m77 (EnemyControl_t31 * __this, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
