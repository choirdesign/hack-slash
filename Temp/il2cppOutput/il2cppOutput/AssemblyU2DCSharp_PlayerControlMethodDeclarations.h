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

// PlayerControl
struct PlayerControl_t23;
// System.Collections.IEnumerator
struct IEnumerator_t64;
// UnityEngine.Collision2D
struct Collision2D_t66;

#include "codegen/il2cpp-codegen.h"

// System.Void PlayerControl::.ctor()
extern "C" void PlayerControl__ctor_m100 (PlayerControl_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::.cctor()
extern "C" void PlayerControl__cctor_m101 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::Start()
extern "C" void PlayerControl_Start_m102 (PlayerControl_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::Update()
extern "C" void PlayerControl_Update_m103 (PlayerControl_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::ChangeAnimAtk()
extern "C" void PlayerControl_ChangeAnimAtk_m104 (PlayerControl_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayerControl::Anim()
extern "C" Object_t * PlayerControl_Anim_m105 (PlayerControl_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C" void PlayerControl_OnCollisionEnter2D_m106 (PlayerControl_t23 * __this, Collision2D_t66 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::PlayerAtk()
extern "C" void PlayerControl_PlayerAtk_m107 (PlayerControl_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::PlayerDamage(System.Int32,System.Boolean)
extern "C" void PlayerControl_PlayerDamage_m108 (PlayerControl_t23 * __this, int32_t ___damage, bool ___isHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::ChangeAnimWin()
extern "C" void PlayerControl_ChangeAnimWin_m109 (PlayerControl_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
