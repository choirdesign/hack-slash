﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;
// System.Collections.Hashtable
struct Hashtable_t790;
// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t1565;

#include "mscorlib_System_Object.h"

// System.Security.SecurityManager
struct  SecurityManager_t1585  : public Object_t
{
};
struct SecurityManager_t1585_StaticFields{
	// System.Object System.Security.SecurityManager::_lockObject
	Object_t * ____lockObject_0;
	// System.Collections.Hashtable System.Security.SecurityManager::_declsecCache
	Hashtable_t790 * ____declsecCache_1;
	// System.Security.Permissions.SecurityPermission System.Security.SecurityManager::_execution
	SecurityPermission_t1565 * ____execution_2;
};