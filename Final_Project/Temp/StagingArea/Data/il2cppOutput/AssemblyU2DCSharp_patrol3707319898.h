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

// patrol
struct  patrol_t3707319898  : public Il2CppObject
{
public:
	// Enemy patrol::enemy
	Enemy_t1088811588 * ___enemy_0;
	// System.Single patrol::ptimer
	float ___ptimer_1;
	// System.Single patrol::pduration
	float ___pduration_2;

public:
	inline static int32_t get_offset_of_enemy_0() { return static_cast<int32_t>(offsetof(patrol_t3707319898, ___enemy_0)); }
	inline Enemy_t1088811588 * get_enemy_0() const { return ___enemy_0; }
	inline Enemy_t1088811588 ** get_address_of_enemy_0() { return &___enemy_0; }
	inline void set_enemy_0(Enemy_t1088811588 * value)
	{
		___enemy_0 = value;
		Il2CppCodeGenWriteBarrier(&___enemy_0, value);
	}

	inline static int32_t get_offset_of_ptimer_1() { return static_cast<int32_t>(offsetof(patrol_t3707319898, ___ptimer_1)); }
	inline float get_ptimer_1() const { return ___ptimer_1; }
	inline float* get_address_of_ptimer_1() { return &___ptimer_1; }
	inline void set_ptimer_1(float value)
	{
		___ptimer_1 = value;
	}

	inline static int32_t get_offset_of_pduration_2() { return static_cast<int32_t>(offsetof(patrol_t3707319898, ___pduration_2)); }
	inline float get_pduration_2() const { return ___pduration_2; }
	inline float* get_address_of_pduration_2() { return &___pduration_2; }
	inline void set_pduration_2(float value)
	{
		___pduration_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
