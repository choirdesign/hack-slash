#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Pauser>
struct List_1_t53;
// UnityEngine.Behaviour[]
struct BehaviourU5BU5D_t52;
// System.Predicate`1<UnityEngine.Behaviour>
struct Predicate_1_t54;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Pauser
struct  Pauser_t51  : public MonoBehaviour_t2
{
	// UnityEngine.Behaviour[] Pauser::pauseBehavs
	BehaviourU5BU5D_t52* ___pauseBehavs_3;
};
struct Pauser_t51_StaticFields{
	// System.Collections.Generic.List`1<Pauser> Pauser::targets
	List_1_t53 * ___targets_2;
	// System.Predicate`1<UnityEngine.Behaviour> Pauser::<>f__am$cache2
	Predicate_1_t54 * ___U3CU3Ef__amU24cache2_4;
};
