#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t8;
// UnityEngine.GameObject
struct GameObject_t4;
// PlayerControl
struct PlayerControl_t25;
// UnityEngine.Transform
struct Transform_t5;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// StageControl
struct  StageControl_t21  : public MonoBehaviour_t2
{
	// UnityEngine.UI.Text StageControl::rateText
	Text_t8 * ___rateText_2;
	// System.Int32 StageControl::rate
	int32_t ___rate_3;
	// System.Int32 StageControl::rateUpPos
	int32_t ___rateUpPos_4;
	// UnityEngine.GameObject StageControl::player
	GameObject_t4 * ___player_5;
	// PlayerControl StageControl::pc
	PlayerControl_t25 * ___pc_6;
	// System.Int32 StageControl::playerHp
	int32_t ___playerHp_7;
	// UnityEngine.Transform StageControl::playerTrans
	Transform_t5 * ___playerTrans_8;
	// UnityEngine.GameObject StageControl::mainCamera
	GameObject_t4 * ___mainCamera_9;
	// UnityEngine.UI.Text StageControl::clearText
	Text_t8 * ___clearText_10;
};
