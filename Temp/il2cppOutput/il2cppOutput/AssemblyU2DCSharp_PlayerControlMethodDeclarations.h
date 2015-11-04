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
struct PlayerControl_t15;
// System.Collections.IEnumerator
struct IEnumerator_t57;
// UnityEngine.Collision2D
struct Collision2D_t56;

#include "codegen/il2cpp-codegen.h"

// System.Void PlayerControl::.ctor()
extern "C" void PlayerControl__ctor_m61 (PlayerControl_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::.cctor()
extern "C" void PlayerControl__cctor_m62 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::Start()
extern "C" void PlayerControl_Start_m63 (PlayerControl_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::Update()
extern "C" void PlayerControl_Update_m64 (PlayerControl_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::ChangeAnimAtk()
extern "C" void PlayerControl_ChangeAnimAtk_m65 (PlayerControl_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayerControl::Anim()
extern "C" Object_t * PlayerControl_Anim_m66 (PlayerControl_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C" void PlayerControl_OnCollisionEnter2D_m67 (PlayerControl_t15 * __this, Collision2D_t56 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::PlayerAtk()
extern "C" void PlayerControl_PlayerAtk_m68 (PlayerControl_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::ChangeAnimWin()
extern "C" void PlayerControl_ChangeAnimWin_m69 (PlayerControl_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
