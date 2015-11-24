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
// UnityEngine.UI.Text
struct Text_t8;
// EnemyStats
struct EnemyStats_t13;
// UnityEngine.UI.Slider
struct Slider_t35;
// UnityEngine.Transform
struct Transform_t5;
// DamageCalc
struct DamageCalc_t1;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// EnemyControl
struct  EnemyControl_t33  : public MonoBehaviour_t2
{
	// System.Boolean EnemyControl::isDead
	bool ___isDead_2;
	// UnityEngine.GameObject EnemyControl::player
	GameObject_t4 * ___player_3;
	// PlayerControl EnemyControl::pstats
	PlayerControl_t25 * ___pstats_4;
	// UnityEngine.GameObject EnemyControl::me
	GameObject_t4 * ___me_5;
	// UnityEngine.GameObject EnemyControl::childCanvas
	GameObject_t4 * ___childCanvas_6;
	// UnityEngine.GameObject EnemyControl::childText
	GameObject_t4 * ___childText_7;
	// UnityEngine.UI.Text EnemyControl::myName
	Text_t8 * ___myName_8;
	// EnemyStats EnemyControl::enemyStats
	EnemyStats_t13 * ___enemyStats_9;
	// UnityEngine.GameObject EnemyControl::childSlider
	GameObject_t4 * ___childSlider_10;
	// UnityEngine.UI.Slider EnemyControl::eHpGauge
	Slider_t35 * ___eHpGauge_11;
	// UnityEngine.Transform EnemyControl::meTrans
	Transform_t5 * ___meTrans_12;
	// DamageCalc EnemyControl::damageCalc
	DamageCalc_t1 * ___damageCalc_13;
};
