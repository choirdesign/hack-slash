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

// FloorControl_Distant
struct  FloorControl_Distant_t9  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject FloorControl_Distant::main_camera
	GameObject_t3 * ___main_camera_2;
	// UnityEngine.Transform FloorControl_Distant::cameraTrans
	Transform_t4 * ___cameraTrans_3;
	// System.Single FloorControl_Distant::myHeight
	float ___myHeight_4;
};
