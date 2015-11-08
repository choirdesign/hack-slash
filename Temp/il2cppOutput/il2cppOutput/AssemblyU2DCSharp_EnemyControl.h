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
// PlayerControl
struct PlayerControl_t23;
// UnityEngine.UI.Text
struct Text_t8;
// EnemyStats
struct EnemyStats_t11;
// UnityEngine.UI.Slider
struct Slider_t32;
// UnityEngine.Transform
struct Transform_t4;
// DamageCalc
struct DamageCalc_t15;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// EnemyControl
struct  EnemyControl_t31  : public MonoBehaviour_t2
{
	// System.Boolean EnemyControl::isDead
	bool ___isDead_2;
	// UnityEngine.GameObject EnemyControl::player
	GameObject_t3 * ___player_3;
	// PlayerControl EnemyControl::pstats
	PlayerControl_t23 * ___pstats_4;
	// UnityEngine.GameObject EnemyControl::me
	GameObject_t3 * ___me_5;
	// UnityEngine.GameObject EnemyControl::childCanvas
	GameObject_t3 * ___childCanvas_6;
	// UnityEngine.GameObject EnemyControl::childText
	GameObject_t3 * ___childText_7;
	// UnityEngine.UI.Text EnemyControl::myName
	Text_t8 * ___myName_8;
	// EnemyStats EnemyControl::enemyStats
	EnemyStats_t11 * ___enemyStats_9;
	// UnityEngine.GameObject EnemyControl::childSlider
	GameObject_t3 * ___childSlider_10;
	// UnityEngine.UI.Slider EnemyControl::eHpGauge
	Slider_t32 * ___eHpGauge_11;
	// UnityEngine.Transform EnemyControl::meTrans
	Transform_t4 * ___meTrans_12;
	// DamageCalc EnemyControl::damageCalc
	DamageCalc_t15 * ___damageCalc_13;
};
