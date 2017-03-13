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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Sight
struct  Sight_t3676560131  : public MonoBehaviour_t1158329972
{
public:
	// Enemy Sight::enemy
	Enemy_t1088811588 * ___enemy_2;

public:
	inline static int32_t get_offset_of_enemy_2() { return static_cast<int32_t>(offsetof(Sight_t3676560131, ___enemy_2)); }
	inline Enemy_t1088811588 * get_enemy_2() const { return ___enemy_2; }
	inline Enemy_t1088811588 ** get_address_of_enemy_2() { return &___enemy_2; }
	inline void set_enemy_2(Enemy_t1088811588 * value)
	{
		___enemy_2 = value;
		Il2CppCodeGenWriteBarrier(&___enemy_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
