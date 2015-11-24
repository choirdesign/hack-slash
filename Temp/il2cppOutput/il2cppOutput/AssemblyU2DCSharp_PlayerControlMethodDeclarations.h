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
struct PlayerControl_t25;
// System.Collections.IEnumerator
struct IEnumerator_t71;
// UnityEngine.Collision2D
struct Collision2D_t73;

#include "codegen/il2cpp-codegen.h"

// System.Void PlayerControl::.ctor()
extern "C" void PlayerControl__ctor_m131 (PlayerControl_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::.cctor()
extern "C" void PlayerControl__cctor_m132 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::Start()
extern "C" void PlayerControl_Start_m133 (PlayerControl_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::Update()
extern "C" void PlayerControl_Update_m134 (PlayerControl_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::ChangeAnimAtk()
extern "C" void PlayerControl_ChangeAnimAtk_m135 (PlayerControl_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayerControl::Anim()
extern "C" Object_t * PlayerControl_Anim_m136 (PlayerControl_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C" void PlayerControl_OnCollisionEnter2D_m137 (PlayerControl_t25 * __this, Collision2D_t73 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::PlayerAtk()
extern "C" void PlayerControl_PlayerAtk_m138 (PlayerControl_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::PlayerDamage(System.Int32,System.Boolean)
extern "C" void PlayerControl_PlayerDamage_m139 (PlayerControl_t25 * __this, int32_t ___damage, bool ___isHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayerControl::PlayerHeal(System.Int32)
extern "C" Object_t * PlayerControl_PlayerHeal_m140 (PlayerControl_t25 * __this, int32_t ___heal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::PlayerHealTex(System.Int32)
extern "C" void PlayerControl_PlayerHealTex_m141 (PlayerControl_t25 * __this, int32_t ___heal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::ChangeAnimWin()
extern "C" void PlayerControl_ChangeAnimWin_m142 (PlayerControl_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
