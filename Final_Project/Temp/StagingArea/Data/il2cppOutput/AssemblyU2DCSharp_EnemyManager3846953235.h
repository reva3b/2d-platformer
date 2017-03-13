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
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyManager
struct  EnemyManager_t3846953235  : public MonoBehaviour_t1158329972
{
public:
	// Enemy EnemyManager::enemy
	Enemy_t1088811588 * ___enemy_2;
	// UnityEngine.Transform EnemyManager::spawnPoints
	Transform_t3275118058 * ___spawnPoints_3;

public:
	inline static int32_t get_offset_of_enemy_2() { return static_cast<int32_t>(offsetof(EnemyManager_t3846953235, ___enemy_2)); }
	inline Enemy_t1088811588 * get_enemy_2() const { return ___enemy_2; }
	inline Enemy_t1088811588 ** get_address_of_enemy_2() { return &___enemy_2; }
	inline void set_enemy_2(Enemy_t1088811588 * value)
	{
		___enemy_2 = value;
		Il2CppCodeGenWriteBarrier(&___enemy_2, value);
	}

	inline static int32_t get_offset_of_spawnPoints_3() { return static_cast<int32_t>(offsetof(EnemyManager_t3846953235, ___spawnPoints_3)); }
	inline Transform_t3275118058 * get_spawnPoints_3() const { return ___spawnPoints_3; }
	inline Transform_t3275118058 ** get_address_of_spawnPoints_3() { return &___spawnPoints_3; }
	inline void set_spawnPoints_3(Transform_t3275118058 * value)
	{
		___spawnPoints_3 = value;
		Il2CppCodeGenWriteBarrier(&___spawnPoints_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
