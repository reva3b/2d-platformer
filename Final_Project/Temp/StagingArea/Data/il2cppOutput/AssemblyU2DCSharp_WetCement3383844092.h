#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerControl
struct PlayerControl_t792727354;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WetCement
struct  WetCement_t3383844092  : public MonoBehaviour_t1158329972
{
public:
	// PlayerControl WetCement::thePlayerControlManager
	PlayerControl_t792727354 * ___thePlayerControlManager_2;
	// System.Single WetCement::normalMovementSpeed
	float ___normalMovementSpeed_3;
	// System.Single WetCement::normalJumpForce
	float ___normalJumpForce_4;
	// System.Boolean WetCement::CementActive
	bool ___CementActive_5;
	// System.Single WetCement::CementCounter
	float ___CementCounter_6;
	// System.Single WetCement::originalMovement
	float ___originalMovement_7;
	// System.Single WetCement::originalJump
	float ___originalJump_8;

public:
	inline static int32_t get_offset_of_thePlayerControlManager_2() { return static_cast<int32_t>(offsetof(WetCement_t3383844092, ___thePlayerControlManager_2)); }
	inline PlayerControl_t792727354 * get_thePlayerControlManager_2() const { return ___thePlayerControlManager_2; }
	inline PlayerControl_t792727354 ** get_address_of_thePlayerControlManager_2() { return &___thePlayerControlManager_2; }
	inline void set_thePlayerControlManager_2(PlayerControl_t792727354 * value)
	{
		___thePlayerControlManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___thePlayerControlManager_2, value);
	}

	inline static int32_t get_offset_of_normalMovementSpeed_3() { return static_cast<int32_t>(offsetof(WetCement_t3383844092, ___normalMovementSpeed_3)); }
	inline float get_normalMovementSpeed_3() const { return ___normalMovementSpeed_3; }
	inline float* get_address_of_normalMovementSpeed_3() { return &___normalMovementSpeed_3; }
	inline void set_normalMovementSpeed_3(float value)
	{
		___normalMovementSpeed_3 = value;
	}

	inline static int32_t get_offset_of_normalJumpForce_4() { return static_cast<int32_t>(offsetof(WetCement_t3383844092, ___normalJumpForce_4)); }
	inline float get_normalJumpForce_4() const { return ___normalJumpForce_4; }
	inline float* get_address_of_normalJumpForce_4() { return &___normalJumpForce_4; }
	inline void set_normalJumpForce_4(float value)
	{
		___normalJumpForce_4 = value;
	}

	inline static int32_t get_offset_of_CementActive_5() { return static_cast<int32_t>(offsetof(WetCement_t3383844092, ___CementActive_5)); }
	inline bool get_CementActive_5() const { return ___CementActive_5; }
	inline bool* get_address_of_CementActive_5() { return &___CementActive_5; }
	inline void set_CementActive_5(bool value)
	{
		___CementActive_5 = value;
	}

	inline static int32_t get_offset_of_CementCounter_6() { return static_cast<int32_t>(offsetof(WetCement_t3383844092, ___CementCounter_6)); }
	inline float get_CementCounter_6() const { return ___CementCounter_6; }
	inline float* get_address_of_CementCounter_6() { return &___CementCounter_6; }
	inline void set_CementCounter_6(float value)
	{
		___CementCounter_6 = value;
	}

	inline static int32_t get_offset_of_originalMovement_7() { return static_cast<int32_t>(offsetof(WetCement_t3383844092, ___originalMovement_7)); }
	inline float get_originalMovement_7() const { return ___originalMovement_7; }
	inline float* get_address_of_originalMovement_7() { return &___originalMovement_7; }
	inline void set_originalMovement_7(float value)
	{
		___originalMovement_7 = value;
	}

	inline static int32_t get_offset_of_originalJump_8() { return static_cast<int32_t>(offsetof(WetCement_t3383844092, ___originalJump_8)); }
	inline float get_originalJump_8() const { return ___originalJump_8; }
	inline float* get_address_of_originalJump_8() { return &___originalJump_8; }
	inline void set_originalJump_8(float value)
	{
		___originalJump_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
