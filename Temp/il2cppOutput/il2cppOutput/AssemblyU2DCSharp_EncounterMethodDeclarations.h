#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Encounter
struct Encounter_t49;
// UnityEngine.Collider2D
struct Collider2D_t74;
// UnityEngine.Collision2D
struct Collision2D_t73;
// System.Collections.IEnumerator
struct IEnumerator_t71;

#include "codegen/il2cpp-codegen.h"

// System.Void Encounter::.ctor()
extern "C" void Encounter__ctor_m166 (Encounter_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Encounter::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void Encounter_OnTriggerEnter2D_m167 (Encounter_t49 * __this, Collider2D_t74 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Encounter::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C" void Encounter_OnCollisionEnter2D_m168 (Encounter_t49 * __this, Collision2D_t73 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Encounter::ExitBattle()
extern "C" void Encounter_ExitBattle_m169 (Encounter_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Encounter::Anim()
extern "C" Object_t * Encounter_Anim_m170 (Encounter_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
