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

// Attack
struct  Attack_t3423014084  : public Il2CppObject
{
public:
	// System.Single Attack::attackTimer
	float ___attackTimer_0;
	// System.Single Attack::attackCooldown
	float ___attackCooldown_1;
	// System.Boolean Attack::canattack
	bool ___canattack_2;
	// Enemy Attack::enemy
	Enemy_t1088811588 * ___enemy_3;

public:
	inline static int32_t get_offset_of_attackTimer_0() { return static_cast<int32_t>(offsetof(Attack_t3423014084, ___attackTimer_0)); }
	inline float get_attackTimer_0() const { return ___attackTimer_0; }
	inline float* get_address_of_attackTimer_0() { return &___attackTimer_0; }
	inline void set_attackTimer_0(float value)
	{
		___attackTimer_0 = value;
	}

	inline static int32_t get_offset_of_attackCooldown_1() { return static_cast<int32_t>(offsetof(Attack_t3423014084, ___attackCooldown_1)); }
	inline float get_attackCooldown_1() const { return ___attackCooldown_1; }
	inline float* get_address_of_attackCooldown_1() { return &___attackCooldown_1; }
	inline void set_attackCooldown_1(float value)
	{
		___attackCooldown_1 = value;
	}

	inline static int32_t get_offset_of_canattack_2() { return static_cast<int32_t>(offsetof(Attack_t3423014084, ___canattack_2)); }
	inline bool get_canattack_2() const { return ___canattack_2; }
	inline bool* get_address_of_canattack_2() { return &___canattack_2; }
	inline void set_canattack_2(bool value)
	{
		___canattack_2 = value;
	}

	inline static int32_t get_offset_of_enemy_3() { return static_cast<int32_t>(offsetof(Attack_t3423014084, ___enemy_3)); }
	inline Enemy_t1088811588 * get_enemy_3() const { return ___enemy_3; }
	inline Enemy_t1088811588 ** get_address_of_enemy_3() { return &___enemy_3; }
	inline void set_enemy_3(Enemy_t1088811588 * value)
	{
		___enemy_3 = value;
		Il2CppCodeGenWriteBarrier(&___enemy_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
