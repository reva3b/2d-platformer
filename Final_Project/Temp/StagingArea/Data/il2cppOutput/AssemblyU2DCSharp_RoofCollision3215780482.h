#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.BoxCollider2D
struct BoxCollider2D_t948534547;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoofCollision
struct  RoofCollision_t3215780482  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.BoxCollider2D RoofCollision::playerCollider
	BoxCollider2D_t948534547 * ___playerCollider_2;
	// UnityEngine.BoxCollider2D RoofCollision::roofCollider
	BoxCollider2D_t948534547 * ___roofCollider_3;
	// UnityEngine.BoxCollider2D RoofCollision::roofTrigger
	BoxCollider2D_t948534547 * ___roofTrigger_4;

public:
	inline static int32_t get_offset_of_playerCollider_2() { return static_cast<int32_t>(offsetof(RoofCollision_t3215780482, ___playerCollider_2)); }
	inline BoxCollider2D_t948534547 * get_playerCollider_2() const { return ___playerCollider_2; }
	inline BoxCollider2D_t948534547 ** get_address_of_playerCollider_2() { return &___playerCollider_2; }
	inline void set_playerCollider_2(BoxCollider2D_t948534547 * value)
	{
		___playerCollider_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerCollider_2, value);
	}

	inline static int32_t get_offset_of_roofCollider_3() { return static_cast<int32_t>(offsetof(RoofCollision_t3215780482, ___roofCollider_3)); }
	inline BoxCollider2D_t948534547 * get_roofCollider_3() const { return ___roofCollider_3; }
	inline BoxCollider2D_t948534547 ** get_address_of_roofCollider_3() { return &___roofCollider_3; }
	inline void set_roofCollider_3(BoxCollider2D_t948534547 * value)
	{
		___roofCollider_3 = value;
		Il2CppCodeGenWriteBarrier(&___roofCollider_3, value);
	}

	inline static int32_t get_offset_of_roofTrigger_4() { return static_cast<int32_t>(offsetof(RoofCollision_t3215780482, ___roofTrigger_4)); }
	inline BoxCollider2D_t948534547 * get_roofTrigger_4() const { return ___roofTrigger_4; }
	inline BoxCollider2D_t948534547 ** get_address_of_roofTrigger_4() { return &___roofTrigger_4; }
	inline void set_roofTrigger_4(BoxCollider2D_t948534547 * value)
	{
		___roofTrigger_4 = value;
		Il2CppCodeGenWriteBarrier(&___roofTrigger_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
