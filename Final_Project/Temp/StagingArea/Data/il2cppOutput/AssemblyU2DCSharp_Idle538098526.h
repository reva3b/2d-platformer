#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Enemy
struct Enemy_t1088811588;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Idle
struct  Idle_t538098526  : public Il2CppObject
{
public:
	// Enemy Idle::enemy
	Enemy_t1088811588 * ___enemy_0;
	// System.Single Idle::itimer
	float ___itimer_1;
	// System.Single Idle::iduration
	float ___iduration_2;

public:
	inline static int32_t get_offset_of_enemy_0() { return static_cast<int32_t>(offsetof(Idle_t538098526, ___enemy_0)); }
	inline Enemy_t1088811588 * get_enemy_0() const { return ___enemy_0; }
	inline Enemy_t1088811588 ** get_address_of_enemy_0() { return &___enemy_0; }
	inline void set_enemy_0(Enemy_t1088811588 * value)
	{
		___enemy_0 = value;
		Il2CppCodeGenWriteBarrier(&___enemy_0, value);
	}

	inline static int32_t get_offset_of_itimer_1() { return static_cast<int32_t>(offsetof(Idle_t538098526, ___itimer_1)); }
	inline float get_itimer_1() const { return ___itimer_1; }
	inline float* get_address_of_itimer_1() { return &___itimer_1; }
	inline void set_itimer_1(float value)
	{
		___itimer_1 = value;
	}

	inline static int32_t get_offset_of_iduration_2() { return static_cast<int32_t>(offsetof(Idle_t538098526, ___iduration_2)); }
	inline float get_iduration_2() const { return ___iduration_2; }
	inline float* get_address_of_iduration_2() { return &___iduration_2; }
	inline void set_iduration_2(float value)
	{
		___iduration_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
