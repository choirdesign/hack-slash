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

// EDamageTextGen
struct EDamageTextGen_t9;
// System.Collections.IEnumerator
struct IEnumerator_t64;

#include "codegen/il2cpp-codegen.h"

// System.Void EDamageTextGen::.ctor()
extern "C" void EDamageTextGen__ctor_m19 (EDamageTextGen_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EDamageTextGen::EDTGen(System.Int32,System.Boolean)
extern "C" void EDamageTextGen_EDTGen_m20 (EDamageTextGen_t9 * __this, int32_t ___sendDamage, bool ___isHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator EDamageTextGen::Erasure()
extern "C" Object_t * EDamageTextGen_Erasure_m21 (EDamageTextGen_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EDamageTextGen::PDTGen(System.Int32,System.Boolean)
extern "C" void EDamageTextGen_PDTGen_m22 (EDamageTextGen_t9 * __this, int32_t ___sendDamage, bool ___isHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator EDamageTextGen::PErasure()
extern "C" Object_t * EDamageTextGen_PErasure_m23 (EDamageTextGen_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
