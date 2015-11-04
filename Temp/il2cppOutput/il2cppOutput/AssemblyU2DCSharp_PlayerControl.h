#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t7;
// StageControl
struct StageControl_t12;
// EnemyStats
struct EnemyStats_t1;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// PlayerControl
struct  PlayerControl_t15  : public MonoBehaviour_t2
{
	// UnityEngine.Vector3 PlayerControl::pos
	Vector3_t32  ___pos_2;
	// UnityEngine.GameObject PlayerControl::mainCamera
	GameObject_t7 * ___mainCamera_3;
	// StageControl PlayerControl::stageControl
	StageControl_t12 * ___stageControl_4;
	// EnemyStats PlayerControl::eStats
	EnemyStats_t1 * ___eStats_7;
	// System.Int32 PlayerControl::pHp
	int32_t ___pHp_8;
	// System.Int32 PlayerControl::pAtk
	int32_t ___pAtk_9;
	// System.Int32 PlayerControl::pDef
	int32_t ___pDef_10;
};
struct PlayerControl_t15_StaticFields{
	// System.Single PlayerControl::moveSpeed
	float ___moveSpeed_5;
	// System.Boolean PlayerControl::pauseFlg
	bool ___pauseFlg_6;
};
