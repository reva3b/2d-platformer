#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_StateMachineBehaviour2151245329.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GlareBehavior
struct  GlareBehavior_t1723260651  : public StateMachineBehaviour_t2151245329
{
public:
	// System.Single GlareBehavior::glareTime
	float ___glareTime_2;
	// System.Single GlareBehavior::elapsed
	float ___elapsed_3;

public:
	inline static int32_t get_offset_of_glareTime_2() { return static_cast<int32_t>(offsetof(GlareBehavior_t1723260651, ___glareTime_2)); }
	inline float get_glareTime_2() const { return ___glareTime_2; }
	inline float* get_address_of_glareTime_2() { return &___glareTime_2; }
	inline void set_glareTime_2(float value)
	{
		___glareTime_2 = value;
	}

	inline static int32_t get_offset_of_elapsed_3() { return static_cast<int32_t>(offsetof(GlareBehavior_t1723260651, ___elapsed_3)); }
	inline float get_elapsed_3() const { return ___elapsed_3; }
	inline float* get_address_of_elapsed_3() { return &___elapsed_3; }
	inline void set_elapsed_3(float value)
	{
		___elapsed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
