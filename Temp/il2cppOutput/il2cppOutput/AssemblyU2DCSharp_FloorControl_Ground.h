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

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// FloorControl_Ground
struct  FloorControl_Ground_t11  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject FloorControl_Ground::main_camera
	GameObject_t7 * ___main_camera_2;
	// System.Single FloorControl_Ground::WIDTH
	float ___WIDTH_3;
	// System.Single FloorControl_Ground::MODEL_NUM
	float ___MODEL_NUM_4;
	// System.Single FloorControl_Ground::playerSpeed
	float ___playerSpeed_5;
	// System.Int32 FloorControl_Ground::speed
	int32_t ___speed_6;
	// System.Int32 FloorControl_Ground::hoge
	int32_t ___hoge_7;
	// StageControl FloorControl_Ground::stageControl
	StageControl_t12 * ___stageControl_8;
};
