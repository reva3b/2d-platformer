#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerStats
struct PlayerStats_t2629781060;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.EdgeCollider2D
struct EdgeCollider2D_t216857133;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;

#include "AssemblyU2DCSharp_Char4248471116.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// User
struct  User_t719925459  : public Char_t4248471116
{
public:
	// UnityEngine.Rigidbody2D User::PlayerRigidBody
	Rigidbody2D_t502193897 * ___PlayerRigidBody_13;
	// UnityEngine.Animator User::PlayerAnimator
	Animator_t69676727 * ___PlayerAnimator_14;
	// UnityEngine.Transform User::KunaiPosition
	Transform_t3275118058 * ___KunaiPosition_15;
	// UnityEngine.GameObject User::KunaiPrefab
	GameObject_t1756533147 * ___KunaiPrefab_16;
	// UnityEngine.EdgeCollider2D User::PlayerKnifeCollider
	EdgeCollider2D_t216857133 * ___PlayerKnifeCollider_17;
	// System.Collections.Generic.List`1<System.String> User::DamageSourcesForPlayer
	List_1_t1398341365 * ___DamageSourcesForPlayer_18;
	// UnityEngine.Transform[] User::PlayerGroundPoints
	TransformU5BU5D_t3764228911* ___PlayerGroundPoints_19;
	// UnityEngine.LayerMask User::WhatIsGroundForPlayer
	LayerMask_t3188175821  ___WhatIsGroundForPlayer_20;
	// System.Single User::PlayerMovementSpeed
	float ___PlayerMovementSpeed_21;
	// System.Single User::PlayerGroundRadius
	float ___PlayerGroundRadius_22;
	// System.Single User::PlayerJumpForce
	float ___PlayerJumpForce_23;
	// System.Boolean User::IsPlayerFacingRight
	bool ___IsPlayerFacingRight_24;
	// System.Boolean User::<IsPlayerAttacking>k__BackingField
	bool ___U3CIsPlayerAttackingU3Ek__BackingField_25;
	// System.Boolean User::IsPlayerSliding
	bool ___IsPlayerSliding_26;
	// System.Boolean User::PlayerIsGrounded
	bool ___PlayerIsGrounded_27;
	// System.Boolean User::ShouldPlayerJump
	bool ___ShouldPlayerJump_28;
	// System.Boolean User::IsPlayerDead
	bool ___IsPlayerDead_29;
	// System.Boolean User::IsPlayerGunAttack
	bool ___IsPlayerGunAttack_30;
	// System.Boolean User::PlayerAirControl
	bool ___PlayerAirControl_31;

public:
	inline static int32_t get_offset_of_PlayerRigidBody_13() { return static_cast<int32_t>(offsetof(User_t719925459, ___PlayerRigidBody_13)); }
	inline Rigidbody2D_t502193897 * get_PlayerRigidBody_13() const { return ___PlayerRigidBody_13; }
	inline Rigidbody2D_t502193897 ** get_address_of_PlayerRigidBody_13() { return &___PlayerRigidBody_13; }
	inline void set_PlayerRigidBody_13(Rigidbody2D_t502193897 * value)
	{
		___PlayerRigidBody_13 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerRigidBody_13, value);
	}

	inline static int32_t get_offset_of_PlayerAnimator_14() { return static_cast<int32_t>(offsetof(User_t719925459, ___PlayerAnimator_14)); }
	inline Animator_t69676727 * get_PlayerAnimator_14() const { return ___PlayerAnimator_14; }
	inline Animator_t69676727 ** get_address_of_PlayerAnimator_14() { return &___PlayerAnimator_14; }
	inline void set_PlayerAnimator_14(Animator_t69676727 * value)
	{
		___PlayerAnimator_14 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerAnimator_14, value);
	}

	inline static int32_t get_offset_of_KunaiPosition_15() { return static_cast<int32_t>(offsetof(User_t719925459, ___KunaiPosition_15)); }
	inline Transform_t3275118058 * get_KunaiPosition_15() const { return ___KunaiPosition_15; }
	inline Transform_t3275118058 ** get_address_of_KunaiPosition_15() { return &___KunaiPosition_15; }
	inline void set_KunaiPosition_15(Transform_t3275118058 * value)
	{
		___KunaiPosition_15 = value;
		Il2CppCodeGenWriteBarrier(&___KunaiPosition_15, value);
	}

	inline static int32_t get_offset_of_KunaiPrefab_16() { return static_cast<int32_t>(offsetof(User_t719925459, ___KunaiPrefab_16)); }
	inline GameObject_t1756533147 * get_KunaiPrefab_16() const { return ___KunaiPrefab_16; }
	inline GameObject_t1756533147 ** get_address_of_KunaiPrefab_16() { return &___KunaiPrefab_16; }
	inline void set_KunaiPrefab_16(GameObject_t1756533147 * value)
	{
		___KunaiPrefab_16 = value;
		Il2CppCodeGenWriteBarrier(&___KunaiPrefab_16, value);
	}

	inline static int32_t get_offset_of_PlayerKnifeCollider_17() { return static_cast<int32_t>(offsetof(User_t719925459, ___PlayerKnifeCollider_17)); }
	inline EdgeCollider2D_t216857133 * get_PlayerKnifeCollider_17() const { return ___PlayerKnifeCollider_17; }
	inline EdgeCollider2D_t216857133 ** get_address_of_PlayerKnifeCollider_17() { return &___PlayerKnifeCollider_17; }
	inline void set_PlayerKnifeCollider_17(EdgeCollider2D_t216857133 * value)
	{
		___PlayerKnifeCollider_17 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerKnifeCollider_17, value);
	}

	inline static int32_t get_offset_of_DamageSourcesForPlayer_18() { return static_cast<int32_t>(offsetof(User_t719925459, ___DamageSourcesForPlayer_18)); }
	inline List_1_t1398341365 * get_DamageSourcesForPlayer_18() const { return ___DamageSourcesForPlayer_18; }
	inline List_1_t1398341365 ** get_address_of_DamageSourcesForPlayer_18() { return &___DamageSourcesForPlayer_18; }
	inline void set_DamageSourcesForPlayer_18(List_1_t1398341365 * value)
	{
		___DamageSourcesForPlayer_18 = value;
		Il2CppCodeGenWriteBarrier(&___DamageSourcesForPlayer_18, value);
	}

	inline static int32_t get_offset_of_PlayerGroundPoints_19() { return static_cast<int32_t>(offsetof(User_t719925459, ___PlayerGroundPoints_19)); }
	inline TransformU5BU5D_t3764228911* get_PlayerGroundPoints_19() const { return ___PlayerGroundPoints_19; }
	inline TransformU5BU5D_t3764228911** get_address_of_PlayerGroundPoints_19() { return &___PlayerGroundPoints_19; }
	inline void set_PlayerGroundPoints_19(TransformU5BU5D_t3764228911* value)
	{
		___PlayerGroundPoints_19 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerGroundPoints_19, value);
	}

	inline static int32_t get_offset_of_WhatIsGroundForPlayer_20() { return static_cast<int32_t>(offsetof(User_t719925459, ___WhatIsGroundForPlayer_20)); }
	inline LayerMask_t3188175821  get_WhatIsGroundForPlayer_20() const { return ___WhatIsGroundForPlayer_20; }
	inline LayerMask_t3188175821 * get_address_of_WhatIsGroundForPlayer_20() { return &___WhatIsGroundForPlayer_20; }
	inline void set_WhatIsGroundForPlayer_20(LayerMask_t3188175821  value)
	{
		___WhatIsGroundForPlayer_20 = value;
	}

	inline static int32_t get_offset_of_PlayerMovementSpeed_21() { return static_cast<int32_t>(offsetof(User_t719925459, ___PlayerMovementSpeed_21)); }
	inline float get_PlayerMovementSpeed_21() const { return ___PlayerMovementSpeed_21; }
	inline float* get_address_of_PlayerMovementSpeed_21() { return &___PlayerMovementSpeed_21; }
	inline void set_PlayerMovementSpeed_21(float value)
	{
		___PlayerMovementSpeed_21 = value;
	}

	inline static int32_t get_offset_of_PlayerGroundRadius_22() { return static_cast<int32_t>(offsetof(User_t719925459, ___PlayerGroundRadius_22)); }
	inline float get_PlayerGroundRadius_22() const { return ___PlayerGroundRadius_22; }
	inline float* get_address_of_PlayerGroundRadius_22() { return &___PlayerGroundRadius_22; }
	inline void set_PlayerGroundRadius_22(float value)
	{
		___PlayerGroundRadius_22 = value;
	}

	inline static int32_t get_offset_of_PlayerJumpForce_23() { return static_cast<int32_t>(offsetof(User_t719925459, ___PlayerJumpForce_23)); }
	inline float get_PlayerJumpForce_23() const { return ___PlayerJumpForce_23; }
	inline float* get_address_of_PlayerJumpForce_23() { return &___PlayerJumpForce_23; }
	inline void set_PlayerJumpForce_23(float value)
	{
		___PlayerJumpForce_23 = value;
	}

	inline static int32_t get_offset_of_IsPlayerFacingRight_24() { return static_cast<int32_t>(offsetof(User_t719925459, ___IsPlayerFacingRight_24)); }
	inline bool get_IsPlayerFacingRight_24() const { return ___IsPlayerFacingRight_24; }
	inline bool* get_address_of_IsPlayerFacingRight_24() { return &___IsPlayerFacingRight_24; }
	inline void set_IsPlayerFacingRight_24(bool value)
	{
		___IsPlayerFacingRight_24 = value;
	}

	inline static int32_t get_offset_of_U3CIsPlayerAttackingU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(User_t719925459, ___U3CIsPlayerAttackingU3Ek__BackingField_25)); }
	inline bool get_U3CIsPlayerAttackingU3Ek__BackingField_25() const { return ___U3CIsPlayerAttackingU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CIsPlayerAttackingU3Ek__BackingField_25() { return &___U3CIsPlayerAttackingU3Ek__BackingField_25; }
	inline void set_U3CIsPlayerAttackingU3Ek__BackingField_25(bool value)
	{
		___U3CIsPlayerAttackingU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_IsPlayerSliding_26() { return static_cast<int32_t>(offsetof(User_t719925459, ___IsPlayerSliding_26)); }
	inline bool get_IsPlayerSliding_26() const { return ___IsPlayerSliding_26; }
	inline bool* get_address_of_IsPlayerSliding_26() { return &___IsPlayerSliding_26; }
	inline void set_IsPlayerSliding_26(bool value)
	{
		___IsPlayerSliding_26 = value;
	}

	inline static int32_t get_offset_of_PlayerIsGrounded_27() { return static_cast<int32_t>(offsetof(User_t719925459, ___PlayerIsGrounded_27)); }
	inline bool get_PlayerIsGrounded_27() const { return ___PlayerIsGrounded_27; }
	inline bool* get_address_of_PlayerIsGrounded_27() { return &___PlayerIsGrounded_27; }
	inline void set_PlayerIsGrounded_27(bool value)
	{
		___PlayerIsGrounded_27 = value;
	}

	inline static int32_t get_offset_of_ShouldPlayerJump_28() { return static_cast<int32_t>(offsetof(User_t719925459, ___ShouldPlayerJump_28)); }
	inline bool get_ShouldPlayerJump_28() const { return ___ShouldPlayerJump_28; }
	inline bool* get_address_of_ShouldPlayerJump_28() { return &___ShouldPlayerJump_28; }
	inline void set_ShouldPlayerJump_28(bool value)
	{
		___ShouldPlayerJump_28 = value;
	}

	inline static int32_t get_offset_of_IsPlayerDead_29() { return static_cast<int32_t>(offsetof(User_t719925459, ___IsPlayerDead_29)); }
	inline bool get_IsPlayerDead_29() const { return ___IsPlayerDead_29; }
	inline bool* get_address_of_IsPlayerDead_29() { return &___IsPlayerDead_29; }
	inline void set_IsPlayerDead_29(bool value)
	{
		___IsPlayerDead_29 = value;
	}

	inline static int32_t get_offset_of_IsPlayerGunAttack_30() { return static_cast<int32_t>(offsetof(User_t719925459, ___IsPlayerGunAttack_30)); }
	inline bool get_IsPlayerGunAttack_30() const { return ___IsPlayerGunAttack_30; }
	inline bool* get_address_of_IsPlayerGunAttack_30() { return &___IsPlayerGunAttack_30; }
	inline void set_IsPlayerGunAttack_30(bool value)
	{
		___IsPlayerGunAttack_30 = value;
	}

	inline static int32_t get_offset_of_PlayerAirControl_31() { return static_cast<int32_t>(offsetof(User_t719925459, ___PlayerAirControl_31)); }
	inline bool get_PlayerAirControl_31() const { return ___PlayerAirControl_31; }
	inline bool* get_address_of_PlayerAirControl_31() { return &___PlayerAirControl_31; }
	inline void set_PlayerAirControl_31(bool value)
	{
		___PlayerAirControl_31 = value;
	}
};

struct User_t719925459_StaticFields
{
public:
	// PlayerStats User::currentPlayer
	PlayerStats_t2629781060 * ___currentPlayer_12;

public:
	inline static int32_t get_offset_of_currentPlayer_12() { return static_cast<int32_t>(offsetof(User_t719925459_StaticFields, ___currentPlayer_12)); }
	inline PlayerStats_t2629781060 * get_currentPlayer_12() const { return ___currentPlayer_12; }
	inline PlayerStats_t2629781060 ** get_address_of_currentPlayer_12() { return &___currentPlayer_12; }
	inline void set_currentPlayer_12(PlayerStats_t2629781060 * value)
	{
		___currentPlayer_12 = value;
		Il2CppCodeGenWriteBarrier(&___currentPlayer_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
