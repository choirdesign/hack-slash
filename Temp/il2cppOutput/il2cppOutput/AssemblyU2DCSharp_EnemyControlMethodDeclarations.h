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
struct EnemyControl_t25;
// UnityEngine.Collision2D
struct Collision2D_t58;
// System.Collections.IEnumerator
struct IEnumerator_t59;

#include "codegen/il2cpp-codegen.h"

// System.Void EnemyControl::.ctor()
extern "C" void EnemyControl__ctor_m44 (EnemyControl_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyControl::Start()
extern "C" void EnemyControl_Start_m45 (EnemyControl_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyControl::Update()
extern "C" void EnemyControl_Update_m46 (EnemyControl_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyControl::OnCollisionStay2D(UnityEngine.Collision2D)
extern "C" void EnemyControl_OnCollisionStay2D_m47 (EnemyControl_t25 * __this, Collision2D_t58 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyControl::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C" void EnemyControl_OnCollisionEnter2D_m48 (EnemyControl_t25 * __this, Collision2D_t58 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator EnemyControl::TestAct(System.Single)
extern "C" Object_t * EnemyControl_TestAct_m49 (EnemyControl_t25 * __this, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
