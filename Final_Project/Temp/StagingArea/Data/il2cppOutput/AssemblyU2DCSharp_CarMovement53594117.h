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
// UnityEngine.Transform
struct Transform_t3275118058;
// PlayerControl
struct PlayerControl_t792727354;
// PlayerStats
struct PlayerStats_t2629781060;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CarMovement
struct  CarMovement_t53594117  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.BoxCollider2D CarMovement::playerCollider
	BoxCollider2D_t948534547 * ___playerCollider_2;
	// UnityEngine.Vector3 CarMovement::posA
	Vector3_t2243707580  ___posA_3;
	// UnityEngine.Vector3 CarMovement::posB
	Vector3_t2243707580  ___posB_4;
	// UnityEngine.Vector3 CarMovement::nextPos
	Vector3_t2243707580  ___nextPos_5;
	// System.Single CarMovement::speed
	float ___speed_6;
	// UnityEngine.Transform CarMovement::childTransform
	Transform_t3275118058 * ___childTransform_7;
	// PlayerControl CarMovement::thePlayerControlManager
	PlayerControl_t792727354 * ___thePlayerControlManager_8;
	// UnityEngine.Transform CarMovement::transformB
	Transform_t3275118058 * ___transformB_10;
	// System.Int32 CarMovement::BusMag
	int32_t ___BusMag_11;

public:
	inline static int32_t get_offset_of_playerCollider_2() { return static_cast<int32_t>(offsetof(CarMovement_t53594117, ___playerCollider_2)); }
	inline BoxCollider2D_t948534547 * get_playerCollider_2() const { return ___playerCollider_2; }
	inline BoxCollider2D_t948534547 ** get_address_of_playerCollider_2() { return &___playerCollider_2; }
	inline void set_playerCollider_2(BoxCollider2D_t948534547 * value)
	{
		___playerCollider_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerCollider_2, value);
	}

	inline static int32_t get_offset_of_posA_3() { return static_cast<int32_t>(offsetof(CarMovement_t53594117, ___posA_3)); }
	inline Vector3_t2243707580  get_posA_3() const { return ___posA_3; }
	inline Vector3_t2243707580 * get_address_of_posA_3() { return &___posA_3; }
	inline void set_posA_3(Vector3_t2243707580  value)
	{
		___posA_3 = value;
	}

	inline static int32_t get_offset_of_posB_4() { return static_cast<int32_t>(offsetof(CarMovement_t53594117, ___posB_4)); }
	inline Vector3_t2243707580  get_posB_4() const { return ___posB_4; }
	inline Vector3_t2243707580 * get_address_of_posB_4() { return &___posB_4; }
	inline void set_posB_4(Vector3_t2243707580  value)
	{
		___posB_4 = value;
	}

	inline static int32_t get_offset_of_nextPos_5() { return static_cast<int32_t>(offsetof(CarMovement_t53594117, ___nextPos_5)); }
	inline Vector3_t2243707580  get_nextPos_5() const { return ___nextPos_5; }
	inline Vector3_t2243707580 * get_address_of_nextPos_5() { return &___nextPos_5; }
	inline void set_nextPos_5(Vector3_t2243707580  value)
	{
		___nextPos_5 = value;
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(CarMovement_t53594117, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_childTransform_7() { return static_cast<int32_t>(offsetof(CarMovement_t53594117, ___childTransform_7)); }
	inline Transform_t3275118058 * get_childTransform_7() const { return ___childTransform_7; }
	inline Transform_t3275118058 ** get_address_of_childTransform_7() { return &___childTransform_7; }
	inline void set_childTransform_7(Transform_t3275118058 * value)
	{
		___childTransform_7 = value;
		Il2CppCodeGenWriteBarrier(&___childTransform_7, value);
	}

	inline static int32_t get_offset_of_thePlayerControlManager_8() { return static_cast<int32_t>(offsetof(CarMovement_t53594117, ___thePlayerControlManager_8)); }
	inline PlayerControl_t792727354 * get_thePlayerControlManager_8() const { return ___thePlayerControlManager_8; }
	inline PlayerControl_t792727354 ** get_address_of_thePlayerControlManager_8() { return &___thePlayerControlManager_8; }
	inline void set_thePlayerControlManager_8(PlayerControl_t792727354 * value)
	{
		___thePlayerControlManager_8 = value;
		Il2CppCodeGenWriteBarrier(&___thePlayerControlManager_8, value);
	}

	inline static int32_t get_offset_of_transformB_10() { return static_cast<int32_t>(offsetof(CarMovement_t53594117, ___transformB_10)); }
	inline Transform_t3275118058 * get_transformB_10() const { return ___transformB_10; }
	inline Transform_t3275118058 ** get_address_of_transformB_10() { return &___transformB_10; }
	inline void set_transformB_10(Transform_t3275118058 * value)
	{
		___transformB_10 = value;
		Il2CppCodeGenWriteBarrier(&___transformB_10, value);
	}

	inline static int32_t get_offset_of_BusMag_11() { return static_cast<int32_t>(offsetof(CarMovement_t53594117, ___BusMag_11)); }
	inline int32_t get_BusMag_11() const { return ___BusMag_11; }
	inline int32_t* get_address_of_BusMag_11() { return &___BusMag_11; }
	inline void set_BusMag_11(int32_t value)
	{
		___BusMag_11 = value;
	}
};

struct CarMovement_t53594117_StaticFields
{
public:
	// PlayerStats CarMovement::currentPlayer
	PlayerStats_t2629781060 * ___currentPlayer_9;

public:
	inline static int32_t get_offset_of_currentPlayer_9() { return static_cast<int32_t>(offsetof(CarMovement_t53594117_StaticFields, ___currentPlayer_9)); }
	inline PlayerStats_t2629781060 * get_currentPlayer_9() const { return ___currentPlayer_9; }
	inline PlayerStats_t2629781060 ** get_address_of_currentPlayer_9() { return &___currentPlayer_9; }
	inline void set_currentPlayer_9(PlayerStats_t2629781060 * value)
	{
		___currentPlayer_9 = value;
		Il2CppCodeGenWriteBarrier(&___currentPlayer_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
