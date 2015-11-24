#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4;
// PlayerControl
struct PlayerControl_t25;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// AtkButton
struct  AtkButton_t24  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject AtkButton::player
	GameObject_t4 * ___player_2;
	// UnityEngine.GameObject AtkButton::battleManager
	GameObject_t4 * ___battleManager_3;
	// PlayerControl AtkButton::playerCtrl
	PlayerControl_t25 * ___playerCtrl_4;
};
