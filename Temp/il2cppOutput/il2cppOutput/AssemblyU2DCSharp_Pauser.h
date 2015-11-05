#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Pauser>
struct List_1_t48;
// UnityEngine.Behaviour[]
struct BehaviourU5BU5D_t47;
// System.Predicate`1<UnityEngine.Behaviour>
struct Predicate_1_t49;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Pauser
struct  Pauser_t46  : public MonoBehaviour_t2
{
	// UnityEngine.Behaviour[] Pauser::pauseBehavs
	BehaviourU5BU5D_t47* ___pauseBehavs_3;
};
struct Pauser_t46_StaticFields{
	// System.Collections.Generic.List`1<Pauser> Pauser::targets
	List_1_t48 * ___targets_2;
	// System.Predicate`1<UnityEngine.Behaviour> Pauser::<>f__am$cache2
	Predicate_1_t49 * ___U3CU3Ef__amU24cache2_4;
};
