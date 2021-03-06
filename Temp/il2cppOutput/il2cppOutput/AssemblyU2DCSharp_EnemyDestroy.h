﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t37;
// EnemyStats
struct EnemyStats_t13;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// EnemyDestroy
struct  EnemyDestroy_t36  : public MonoBehaviour_t2
{
	// System.Single EnemyDestroy::fadeTime
	float ___fadeTime_2;
	// System.Single EnemyDestroy::currentRemainTime
	float ___currentRemainTime_3;
	// UnityEngine.SpriteRenderer EnemyDestroy::spRenderer
	SpriteRenderer_t37 * ___spRenderer_4;
	// System.Boolean EnemyDestroy::isDead
	bool ___isDead_5;
	// System.Boolean EnemyDestroy::enemyIdentifier
	bool ___enemyIdentifier_6;
	// EnemyStats EnemyDestroy::enemyStats
	EnemyStats_t13 * ___enemyStats_7;
};
