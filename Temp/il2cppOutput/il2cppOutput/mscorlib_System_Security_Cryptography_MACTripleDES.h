#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.TripleDES
struct TripleDES_t866;
// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t1130;

#include "mscorlib_System_Security_Cryptography_KeyedHashAlgorithm.h"

// System.Security.Cryptography.MACTripleDES
struct  MACTripleDES_t1522  : public KeyedHashAlgorithm_t758
{
	// System.Security.Cryptography.TripleDES System.Security.Cryptography.MACTripleDES::tdes
	TripleDES_t866 * ___tdes_5;
	// Mono.Security.Cryptography.MACAlgorithm System.Security.Cryptography.MACTripleDES::mac
	MACAlgorithm_t1130 * ___mac_6;
	// System.Boolean System.Security.Cryptography.MACTripleDES::m_disposed
	bool ___m_disposed_7;
};
