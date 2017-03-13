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

// range
struct  range_t624912309  : public Il2CppObject
{
public:
	// Enemy range::enemy
	Enemy_t1088811588 * ___enemy_0;
	// System.Single range::TTimer
	float ___TTimer_1;
	// System.Single range::TCooldown
	float ___TCooldown_2;
	// System.Boolean range::canT
	bool ___canT_3;

public:
	inline static int32_t get_offset_of_enemy_0() { return static_cast<int32_t>(offsetof(range_t624912309, ___enemy_0)); }
	inline Enemy_t1088811588 * get_enemy_0() const { return ___enemy_0; }
	inline Enemy_t1088811588 ** get_address_of_enemy_0() { return &___enemy_0; }
	inline void set_enemy_0(Enemy_t1088811588 * value)
	{
		___enemy_0 = value;
		Il2CppCodeGenWriteBarrier(&___enemy_0, value);
	}

	inline static int32_t get_offset_of_TTimer_1() { return static_cast<int32_t>(offsetof(range_t624912309, ___TTimer_1)); }
	inline float get_TTimer_1() const { return ___TTimer_1; }
	inline float* get_address_of_TTimer_1() { return &___TTimer_1; }
	inline void set_TTimer_1(float value)
	{
		___TTimer_1 = value;
	}

	inline static int32_t get_offset_of_TCooldown_2() { return static_cast<int32_t>(offsetof(range_t624912309, ___TCooldown_2)); }
	inline float get_TCooldown_2() const { return ___TCooldown_2; }
	inline float* get_address_of_TCooldown_2() { return &___TCooldown_2; }
	inline void set_TCooldown_2(float value)
	{
		___TCooldown_2 = value;
	}

	inline static int32_t get_offset_of_canT_3() { return static_cast<int32_t>(offsetof(range_t624912309, ___canT_3)); }
	inline bool get_canT_3() const { return ___canT_3; }
	inline bool* get_address_of_canT_3() { return &___canT_3; }
	inline void set_canT_3(bool value)
	{
		___canT_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
