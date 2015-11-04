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
// UnityEngine.UI.Text
struct Text_t23;
// EnemyStats
struct EnemyStats_t1;
// UnityEngine.UI.Slider
struct Slider_t24;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// EnemyControl
struct  EnemyControl_t22  : public MonoBehaviour_t2
{
	// System.Boolean EnemyControl::isDead
	bool ___isDead_2;
	// UnityEngine.GameObject EnemyControl::player
	GameObject_t7 * ___player_3;
	// UnityEngine.GameObject EnemyControl::me
	GameObject_t7 * ___me_4;
	// UnityEngine.GameObject EnemyControl::childCanvas
	GameObject_t7 * ___childCanvas_5;
	// UnityEngine.GameObject EnemyControl::childText
	GameObject_t7 * ___childText_6;
	// UnityEngine.UI.Text EnemyControl::myName
	Text_t23 * ___myName_7;
	// EnemyStats EnemyControl::enemyStats
	EnemyStats_t1 * ___enemyStats_8;
	// UnityEngine.GameObject EnemyControl::childSlider
	GameObject_t7 * ___childSlider_9;
	// UnityEngine.UI.Slider EnemyControl::eHpGauge
	Slider_t24 * ___eHpGauge_10;
};
