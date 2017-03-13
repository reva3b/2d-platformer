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

// Kunai
struct  Kunai_t1156087496  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Kunai::speed
	float ___speed_2;
	// UnityEngine.Rigidbody2D Kunai::myRigidbody
	Rigidbody2D_t502193897 * ___myRigidbody_3;
	// UnityEngine.Vector2 Kunai::direction
	Vector2_t2243707579  ___direction_4;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Kunai_t1156087496, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_myRigidbody_3() { return static_cast<int32_t>(offsetof(Kunai_t1156087496, ___myRigidbody_3)); }
	inline Rigidbody2D_t502193897 * get_myRigidbody_3() const { return ___myRigidbody_3; }
	inline Rigidbody2D_t502193897 ** get_address_of_myRigidbody_3() { return &___myRigidbody_3; }
	inline void set_myRigidbody_3(Rigidbody2D_t502193897 * value)
	{
		___myRigidbody_3 = value;
		Il2CppCodeGenWriteBarrier(&___myRigidbody_3, value);
	}

	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(Kunai_t1156087496, ___direction_4)); }
	inline Vector2_t2243707579  get_direction_4() const { return ___direction_4; }
	inline Vector2_t2243707579 * get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(Vector2_t2243707579  value)
	{
		___direction_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
