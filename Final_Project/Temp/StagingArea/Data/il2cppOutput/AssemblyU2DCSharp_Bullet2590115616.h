#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Bullet
struct  Bullet_t2590115616  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Bullet::BulletSpeed
	float ___BulletSpeed_2;
	// UnityEngine.Rigidbody2D Bullet::BulletRigidBody
	Rigidbody2D_t502193897 * ___BulletRigidBody_3;
	// UnityEngine.Vector2 Bullet::BulletDirection
	Vector2_t2243707579  ___BulletDirection_4;

public:
	inline static int32_t get_offset_of_BulletSpeed_2() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___BulletSpeed_2)); }
	inline float get_BulletSpeed_2() const { return ___BulletSpeed_2; }
	inline float* get_address_of_BulletSpeed_2() { return &___BulletSpeed_2; }
	inline void set_BulletSpeed_2(float value)
	{
		___BulletSpeed_2 = value;
	}

	inline static int32_t get_offset_of_BulletRigidBody_3() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___BulletRigidBody_3)); }
	inline Rigidbody2D_t502193897 * get_BulletRigidBody_3() const { return ___BulletRigidBody_3; }
	inline Rigidbody2D_t502193897 ** get_address_of_BulletRigidBody_3() { return &___BulletRigidBody_3; }
	inline void set_BulletRigidBody_3(Rigidbody2D_t502193897 * value)
	{
		___BulletRigidBody_3 = value;
		Il2CppCodeGenWriteBarrier(&___BulletRigidBody_3, value);
	}

	inline static int32_t get_offset_of_BulletDirection_4() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___BulletDirection_4)); }
	inline Vector2_t2243707579  get_BulletDirection_4() const { return ___BulletDirection_4; }
	inline Vector2_t2243707579 * get_address_of_BulletDirection_4() { return &___BulletDirection_4; }
	inline void set_BulletDirection_4(Vector2_t2243707579  value)
	{
		___BulletDirection_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
