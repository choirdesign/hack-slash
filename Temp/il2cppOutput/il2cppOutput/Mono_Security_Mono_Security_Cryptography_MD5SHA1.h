﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t730;

#include "mscorlib_System_Security_Cryptography_HashAlgorithm.h"

// Mono.Security.Cryptography.MD5SHA1
struct  MD5SHA1_t769  : public HashAlgorithm_t730
{
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Cryptography.MD5SHA1::md5
	HashAlgorithm_t730 * ___md5_4;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Cryptography.MD5SHA1::sha
	HashAlgorithm_t730 * ___sha_5;
	// System.Boolean Mono.Security.Cryptography.MD5SHA1::hashing
	bool ___hashing_6;
};