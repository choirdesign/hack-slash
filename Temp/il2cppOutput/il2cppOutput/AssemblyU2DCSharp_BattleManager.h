#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t18;
// UnityEngine.GameObject
struct GameObject_t3;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// BattleManager
struct  BattleManager_t17  : public MonoBehaviour_t2
{
	// UnityEngine.UI.Image BattleManager::buttonCover
	Image_t18 * ___buttonCover_3;
	// UnityEngine.GameObject BattleManager::player
	GameObject_t3 * ___player_4;
};
struct BattleManager_t17_StaticFields{
	// System.Boolean BattleManager::isBattle
	bool ___isBattle_2;
	// System.Boolean BattleManager::isEnemyDead
	bool ___isEnemyDead_5;
};
