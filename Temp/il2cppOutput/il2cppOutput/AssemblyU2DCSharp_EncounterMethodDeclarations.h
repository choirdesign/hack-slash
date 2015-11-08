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
struct Encounter_t45;
// UnityEngine.Collider2D
struct Collider2D_t67;
// UnityEngine.Collision2D
struct Collision2D_t66;
// System.Collections.IEnumerator
struct IEnumerator_t64;

#include "codegen/il2cpp-codegen.h"

// System.Void Encounter::.ctor()
extern "C" void Encounter__ctor_m133 (Encounter_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Encounter::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void Encounter_OnTriggerEnter2D_m134 (Encounter_t45 * __this, Collider2D_t67 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Encounter::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C" void Encounter_OnCollisionEnter2D_m135 (Encounter_t45 * __this, Collision2D_t66 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Encounter::ExitBattle()
extern "C" void Encounter_ExitBattle_m136 (Encounter_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Encounter::Anim()
extern "C" Object_t * Encounter_Anim_m137 (Encounter_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
