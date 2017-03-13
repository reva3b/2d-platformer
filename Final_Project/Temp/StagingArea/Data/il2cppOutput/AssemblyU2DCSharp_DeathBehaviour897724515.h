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

// DeathBehaviour
struct  DeathBehaviour_t897724515  : public StateMachineBehaviour_t2151245329
{
public:
	// System.Single DeathBehaviour::respawnTime
	float ___respawnTime_2;
	// System.Single DeathBehaviour::deathTimer
	float ___deathTimer_3;

public:
	inline static int32_t get_offset_of_respawnTime_2() { return static_cast<int32_t>(offsetof(DeathBehaviour_t897724515, ___respawnTime_2)); }
	inline float get_respawnTime_2() const { return ___respawnTime_2; }
	inline float* get_address_of_respawnTime_2() { return &___respawnTime_2; }
	inline void set_respawnTime_2(float value)
	{
		___respawnTime_2 = value;
	}

	inline static int32_t get_offset_of_deathTimer_3() { return static_cast<int32_t>(offsetof(DeathBehaviour_t897724515, ___deathTimer_3)); }
	inline float get_deathTimer_3() const { return ___deathTimer_3; }
	inline float* get_address_of_deathTimer_3() { return &___deathTimer_3; }
	inline void set_deathTimer_3(float value)
	{
		___deathTimer_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
