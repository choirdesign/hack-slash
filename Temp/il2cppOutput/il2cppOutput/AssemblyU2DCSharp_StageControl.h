#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t23;
// UnityEngine.GameObject
struct GameObject_t7;
// UnityEngine.Transform
struct Transform_t8;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// StageControl
struct  StageControl_t12  : public MonoBehaviour_t2
{
	// UnityEngine.UI.Text StageControl::rateText
	Text_t23 * ___rateText_2;
	// System.Int32 StageControl::rate
	int32_t ___rate_3;
	// System.Int32 StageControl::rateUpPos
	int32_t ___rateUpPos_4;
	// UnityEngine.GameObject StageControl::player
	GameObject_t7 * ___player_5;
	// UnityEngine.Transform StageControl::playerTrans
	Transform_t8 * ___playerTrans_6;
	// UnityEngine.GameObject StageControl::mainCamera
	GameObject_t7 * ___mainCamera_7;
	// UnityEngine.UI.Text StageControl::clearText
	Text_t23 * ___clearText_8;
};
