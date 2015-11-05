#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.X509.X509Stores
struct X509Stores_t747;

#include "mscorlib_System_Object.h"

// Mono.Security.X509.X509StoreManager
struct  X509StoreManager_t746  : public Object_t
{
};
struct X509StoreManager_t746_StaticFields{
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_userStore
	X509Stores_t747 * ____userStore_0;
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_machineStore
	X509Stores_t747 * ____machineStore_1;
};
