﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t774;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t889;

#include "mscorlib_System_Object.h"

// System.Collections.Specialized.HybridDictionary
struct  HybridDictionary_t888  : public Object_t
{
	// System.Boolean System.Collections.Specialized.HybridDictionary::caseInsensitive
	bool ___caseInsensitive_0;
	// System.Collections.Hashtable System.Collections.Specialized.HybridDictionary::hashtable
	Hashtable_t774 * ___hashtable_1;
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.HybridDictionary::list
	ListDictionary_t889 * ___list_2;
};
