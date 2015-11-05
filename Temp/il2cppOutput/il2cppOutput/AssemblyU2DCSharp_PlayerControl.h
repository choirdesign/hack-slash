#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3;
// StageControl
struct StageControl_t13;
// EnemyStats
struct EnemyStats_t5;
// UnityEngine.UI.Slider
struct Slider_t27;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// PlayerControl
struct  PlayerControl_t16  : public MonoBehaviour_t2
{
	// UnityEngine.Vector3 PlayerControl::pos
	Vector3_t24  ___pos_2;
	// UnityEngine.GameObject PlayerControl::mainCamera
	GameObject_t3 * ___mainCamera_3;
	// StageControl PlayerControl::stageControl
	StageControl_t13 * ___stageControl_4;
	// EnemyStats PlayerControl::eStats
	EnemyStats_t5 * ___eStats_7;
	// System.Int32 PlayerControl::pHp
	int32_t ___pHp_8;
	// System.Int32 PlayerControl::pAtk
	int32_t ___pAtk_9;
	// System.Int32 PlayerControl::pDef
	int32_t ___pDef_10;
	// System.Int32 PlayerControl::pAgl
	int32_t ___pAgl_11;
	// System.Int32 PlayerControl::pHeal
	int32_t ___pHeal_12;
	// UnityEngine.GameObject PlayerControl::pHpGauge
	GameObject_t3 * ___pHpGauge_13;
	// UnityEngine.UI.Slider PlayerControl::pHpSlider
	Slider_t27 * ___pHpSlider_14;
};
struct PlayerControl_t16_StaticFields{
	// System.Single PlayerControl::moveSpeed
	float ___moveSpeed_5;
	// System.Boolean PlayerControl::pauseFlg
	bool ___pauseFlg_6;
};
