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
// UnityEngine.Transform
struct Transform_t4;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// FloorControl_Distant_alt2
struct  FloorControl_Distant_alt2_t11  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject FloorControl_Distant_alt2::player
	GameObject_t3 * ___player_2;
	// UnityEngine.Transform FloorControl_Distant_alt2::playerTrans
	Transform_t4 * ___playerTrans_3;
	// System.Single FloorControl_Distant_alt2::myHeight
	float ___myHeight_4;
	// System.Int32 FloorControl_Distant_alt2::speed
	int32_t ___speed_5;
};
