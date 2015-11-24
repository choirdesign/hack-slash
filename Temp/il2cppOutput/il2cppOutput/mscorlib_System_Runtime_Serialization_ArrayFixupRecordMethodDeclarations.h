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

// System.Runtime.Serialization.ArrayFixupRecord
struct ArrayFixupRecord_t1509;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1507;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1501;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Serialization.ArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32,System.Runtime.Serialization.ObjectRecord)
extern "C" void ArrayFixupRecord__ctor_m9009 (ArrayFixupRecord_t1509 * __this, ObjectRecord_t1507 * ___objectToBeFixed, int32_t ___index, ObjectRecord_t1507 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void ArrayFixupRecord_FixupImpl_m9010 (ArrayFixupRecord_t1509 * __this, ObjectManager_t1501 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
