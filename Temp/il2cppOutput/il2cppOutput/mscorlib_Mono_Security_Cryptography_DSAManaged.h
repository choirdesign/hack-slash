﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Math.BigInteger
struct BigInteger_t1138;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t691;
// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t1143;

#include "mscorlib_System_Security_Cryptography_DSA.h"

// Mono.Security.Cryptography.DSAManaged
struct  DSAManaged_t1144  : public DSA_t752
{
	// System.Boolean Mono.Security.Cryptography.DSAManaged::keypairGenerated
	bool ___keypairGenerated_2;
	// System.Boolean Mono.Security.Cryptography.DSAManaged::m_disposed
	bool ___m_disposed_3;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::p
	BigInteger_t1138 * ___p_4;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::q
	BigInteger_t1138 * ___q_5;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::g
	BigInteger_t1138 * ___g_6;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::x
	BigInteger_t1138 * ___x_7;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::y
	BigInteger_t1138 * ___y_8;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::j
	BigInteger_t1138 * ___j_9;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::seed
	BigInteger_t1138 * ___seed_10;
	// System.Int32 Mono.Security.Cryptography.DSAManaged::counter
	int32_t ___counter_11;
	// System.Boolean Mono.Security.Cryptography.DSAManaged::j_missing
	bool ___j_missing_12;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.DSAManaged::rng
	RandomNumberGenerator_t691 * ___rng_13;
	// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.DSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t1143 * ___KeyGenerated_14;
};
