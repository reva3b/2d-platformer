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
// PlayerBarStat
struct PlayerBarStat_t1785125024;
// HandlePlayerDeadEvent
struct HandlePlayerDeadEvent_t1954397659;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t948534547;
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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerControl
struct  PlayerControl_t792727354  : public MonoBehaviour_t1158329972
{
public:
	// PlayerBarStat PlayerControl::PlayerHealthBar
	PlayerBarStat_t1785125024 * ___PlayerHealthBar_3;
	// PlayerBarStat PlayerControl::PlayerShieldBar
	PlayerBarStat_t1785125024 * ___PlayerShieldBar_4;
	// HandlePlayerDeadEvent PlayerControl::PlayerDead
	HandlePlayerDeadEvent_t1954397659 * ___PlayerDead_5;
	// UnityEngine.Rigidbody2D PlayerControl::PlayerRigidBody
	Rigidbody2D_t502193897 * ___PlayerRigidBody_6;
	// UnityEngine.Animator PlayerControl::PlayerAnimator
	Animator_t69676727 * ___PlayerAnimator_7;
	// UnityEngine.SpriteRenderer PlayerControl::PlayerSpriteRenderer
	SpriteRenderer_t1209076198 * ___PlayerSpriteRenderer_8;
	// UnityEngine.Vector2 PlayerControl::PlayerStartPosition
	Vector2_t2243707579  ___PlayerStartPosition_9;
	// UnityEngine.BoxCollider2D PlayerControl::PlayerBoxCollider
	BoxCollider2D_t948534547 * ___PlayerBoxCollider_10;
	// UnityEngine.Transform PlayerControl::BulletPosition
	Transform_t3275118058 * ___BulletPosition_11;
	// UnityEngine.GameObject PlayerControl::BulletPrefab
	GameObject_t1756533147 * ___BulletPrefab_12;
	// UnityEngine.EdgeCollider2D PlayerControl::PlayerKnifeCollider
	EdgeCollider2D_t216857133 * ___PlayerKnifeCollider_13;
	// System.Collections.Generic.List`1<System.String> PlayerControl::DamageSourcesForPlayer
	List_1_t1398341365 * ___DamageSourcesForPlayer_14;
	// UnityEngine.Transform[] PlayerControl::PlayerGroundPoints
	TransformU5BU5D_t3764228911* ___PlayerGroundPoints_15;
	// UnityEngine.LayerMask PlayerControl::WhatIsGroundForPlayer
	LayerMask_t3188175821  ___WhatIsGroundForPlayer_16;
	// System.Single PlayerControl::PlayerMovementSpeed
	float ___PlayerMovementSpeed_17;
	// System.Single PlayerControl::PlayerGroundRadius
	float ___PlayerGroundRadius_18;
	// System.Single PlayerControl::PlayerJumpForce
	float ___PlayerJumpForce_19;
	// System.Boolean PlayerControl::IsPlayerFacingRight
	bool ___IsPlayerFacingRight_20;
	// System.Boolean PlayerControl::IsPlayerAttacking
	bool ___IsPlayerAttacking_21;
	// System.Boolean PlayerControl::IsPlayerSliding
	bool ___IsPlayerSliding_22;
	// UnityEngine.Vector2 PlayerControl::NewPlayerSlideColliderSize
	Vector2_t2243707579  ___NewPlayerSlideColliderSize_23;
	// UnityEngine.Vector2 PlayerControl::NewPlayerSlideColliderOffset
	Vector2_t2243707579  ___NewPlayerSlideColliderOffset_24;
	// UnityEngine.Vector2 PlayerControl::OriginalPlayerColliderSize
	Vector2_t2243707579  ___OriginalPlayerColliderSize_25;
	// UnityEngine.Vector2 PlayerControl::OriginalPlayerColliderOffset
	Vector2_t2243707579  ___OriginalPlayerColliderOffset_26;
	// System.Boolean PlayerControl::PlayerIsGrounded
	bool ___PlayerIsGrounded_27;
	// System.Boolean PlayerControl::ShouldPlayerJump
	bool ___ShouldPlayerJump_28;
	// System.Boolean PlayerControl::IsPlayerDead
	bool ___IsPlayerDead_29;
	// System.Boolean PlayerControl::IsPlayerGunAttack
	bool ___IsPlayerGunAttack_30;
	// System.Boolean PlayerControl::IsPlayerImmortal
	bool ___IsPlayerImmortal_31;
	// System.Single PlayerControl::PlayerImmortalTime
	float ___PlayerImmortalTime_32;
	// System.Boolean PlayerControl::ShouldPlayerRespawn
	bool ___ShouldPlayerRespawn_33;
	// System.Boolean PlayerControl::PlayerAirControl
	bool ___PlayerAirControl_34;
	// System.Int32 PlayerControl::Sample_Player_Health
	int32_t ___Sample_Player_Health_35;

public:
	inline static int32_t get_offset_of_PlayerHealthBar_3() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___PlayerHealthBar_3)); }
	inline PlayerBarStat_t1785125024 * get_PlayerHealthBar_3() const { return ___PlayerHealthBar_3; }
	inline PlayerBarStat_t1785125024 ** get_address_of_PlayerHealthBar_3() { return &___PlayerHealthBar_3; }
	inline void set_PlayerHealthBar_3(PlayerBarStat_t1785125024 * value)
	{
		___PlayerHealthBar_3 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerHealthBar_3, value);
	}

	inline static int32_t get_offset_of_PlayerShieldBar_4() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___PlayerShieldBar_4)); }
	inline PlayerBarStat_t1785125024 * get_PlayerShieldBar_4() const { return ___PlayerShieldBar_4; }
	inline PlayerBarStat_t1785125024 ** get_address_of_PlayerShieldBar_4() { return &___PlayerShieldBar_4; }
	inline void set_PlayerShieldBar_4(PlayerBarStat_t1785125024 * value)
	{
		___PlayerShieldBar_4 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerShieldBar_4, value);
	}

	inline static int32_t get_offset_of_PlayerDead_5() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___PlayerDead_5)); }
	inline HandlePlayerDeadEvent_t1954397659 * get_PlayerDead_5() const { return ___PlayerDead_5; }
	inline HandlePlayerDeadEvent_t1954397659 ** get_address_of_PlayerDead_5() { return &___PlayerDead_5; }
	inline void set_PlayerDead_5(HandlePlayerDeadEvent_t1954397659 * value)
	{
		___PlayerDead_5 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerDead_5, value);
	}

	inline static int32_t get_offset_of_PlayerRigidBody_6() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___PlayerRigidBody_6)); }
	inline Rigidbody2D_t502193897 * get_PlayerRigidBody_6() const { return ___PlayerRigidBody_6; }
	inline Rigidbody2D_t502193897 ** get_address_of_PlayerRigidBody_6() { return &___PlayerRigidBody_6; }
	inline void set_PlayerRigidBody_6(Rigidbody2D_t502193897 * value)
	{
		___PlayerRigidBody_6 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerRigidBody_6, value);
	}

	inline static int32_t get_offset_of_PlayerAnimator_7() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___PlayerAnimator_7)); }
	inline Animator_t69676727 * get_PlayerAnimator_7() const { return ___PlayerAnimator_7; }
	inline Animator_t69676727 ** get_address_of_PlayerAnimator_7() { return &___PlayerAnimator_7; }
	inline void set_PlayerAnimator_7(Animator_t69676727 * value)
	{
		___PlayerAnimator_7 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerAnimator_7, value);
	}

	inline static int32_t get_offset_of_PlayerSpriteRenderer_8() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___PlayerSpriteRenderer_8)); }
	inline SpriteRenderer_t1209076198 * get_PlayerSpriteRenderer_8() const { return ___PlayerSpriteRenderer_8; }
	inline SpriteRenderer_t1209076198 ** get_address_of_PlayerSpriteRenderer_8() { return &___PlayerSpriteRenderer_8; }
	inline void set_PlayerSpriteRenderer_8(SpriteRenderer_t1209076198 * value)
	{
		___PlayerSpriteRenderer_8 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerSpriteRenderer_8, value);
	}

	inline static int32_t get_offset_of_PlayerStartPosition_9() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___PlayerStartPosition_9)); }
	inline Vector2_t2243707579  get_PlayerStartPosition_9() const { return ___PlayerStartPosition_9; }
	inline Vector2_t2243707579 * get_address_of_PlayerStartPosition_9() { return &___PlayerStartPosition_9; }
	inline void set_PlayerStartPosition_9(Vector2_t2243707579  value)
	{
		___PlayerStartPosition_9 = value;
	}

	inline static int32_t get_offset_of_PlayerBoxCollider_10() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___PlayerBoxCollider_10)); }
	inline BoxCollider2D_t948534547 * get_PlayerBoxCollider_10() const { return ___PlayerBoxCollider_10; }
	inline BoxCollider2D_t948534547 ** get_address_of_PlayerBoxCollider_10() { return &___PlayerBoxCollider_10; }
	inline void set_PlayerBoxCollider_10(BoxCollider2D_t948534547 * value)
	{
		___PlayerBoxCollider_10 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerBoxCollider_10, value);
	}

	inline static int32_t get_offset_of_BulletPosition_11() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___BulletPosition_11)); }
	inline Transform_t3275118058 * get_BulletPosition_11() const { return ___BulletPosition_11; }
	inline Transform_t3275118058 ** get_address_of_BulletPosition_11() { return &___BulletPosition_11; }
	inline void set_BulletPosition_11(Transform_t3275118058 * value)
	{
		___BulletPosition_11 = value;
		Il2CppCodeGenWriteBarrier(&___BulletPosition_11, value);
	}

	inline static int32_t get_offset_of_BulletPrefab_12() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___BulletPrefab_12)); }
	inline GameObject_t1756533147 * get_BulletPrefab_12() const { return ___BulletPrefab_12; }
	inline GameObject_t1756533147 ** get_address_of_BulletPrefab_12() { return &___BulletPrefab_12; }
	inline void set_BulletPrefab_12(GameObject_t1756533147 * value)
	{
		___BulletPrefab_12 = value;
		Il2CppCodeGenWriteBarrier(&___BulletPrefab_12, value);
	}

	inline static int32_t get_offset_of_PlayerKnifeCollider_13() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___PlayerKnifeCollider_13)); }
	inline EdgeCollider2D_t216857133 * get_PlayerKnifeCollider_13() const { return ___PlayerKnifeCollider_13; }
	inline EdgeCollider2D_t216857133 ** get_address_of_PlayerKnifeCollider_13() { return &___PlayerKnifeCollider_13; }
	inline void set_PlayerKnifeCollider_13(EdgeCollider2D_t216857133 * value)
	{
		___PlayerKnifeCollider_13 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerKnifeCollider_13, value);
	}

	inline static int32_t get_offset_of_DamageSourcesForPlayer_14() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___DamageSourcesForPlayer_14)); }
	inline List_1_t1398341365 * get_DamageSourcesForPlayer_14() const { return ___DamageSourcesForPlayer_14; }
	inline List_1_t1398341365 ** get_address_of_DamageSourcesForPlayer_14() { return &___DamageSourcesForPlayer_14; }
	inline void set_DamageSourcesForPlayer_14(List_1_t1398341365 * value)
	{
		___DamageSourcesForPlayer_14 = value;
		Il2CppCodeGenWriteBarrier(&___DamageSourcesForPlayer_14, value);
	}

	inline static int32_t get_offset_of_PlayerGroundPoints_15() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___PlayerGroundPoints_15)); }
	inline TransformU5BU5D_t3764228911* get_PlayerGroundPoints_15() const { return ___PlayerGroundPoints_15; }
	inline TransformU5BU5D_t3764228911** get_address_of_PlayerGroundPoints_15() { return &___PlayerGroundPoints_15; }
	inline void set_PlayerGroundPoints_15(TransformU5BU5D_t3764228911* value)
	{
		___PlayerGroundPoints_15 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerGroundPoints_15, value);
	}

	inline static int32_t get_offset_of_WhatIsGroundForPlayer_16() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___WhatIsGroundForPlayer_16)); }
	inline LayerMask_t3188175821  get_WhatIsGroundForPlayer_16() const { return ___WhatIsGroundForPlayer_16; }
	inline LayerMask_t3188175821 * get_address_of_WhatIsGroundForPlayer_16() { return &___WhatIsGroundForPlayer_16; }
	inline void set_WhatIsGroundForPlayer_16(LayerMask_t3188175821  value)
	{
		___WhatIsGroundForPlayer_16 = value;
	}

	inline static int32_t get_offset_of_PlayerMovementSpeed_17() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___PlayerMovementSpeed_17)); }
	inline float get_PlayerMovementSpeed_17() const { return ___PlayerMovementSpeed_17; }
	inline float* get_address_of_PlayerMovementSpeed_17() { return &___PlayerMovementSpeed_17; }
	inline void set_PlayerMovementSpeed_17(float value)
	{
		___PlayerMovementSpeed_17 = value;
	}

	inline static int32_t get_offset_of_PlayerGroundRadius_18() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___PlayerGroundRadius_18)); }
	inline float get_PlayerGroundRadius_18() const { return ___PlayerGroundRadius_18; }
	inline float* get_address_of_PlayerGroundRadius_18() { return &___PlayerGroundRadius_18; }
	inline void set_PlayerGroundRadius_18(float value)
	{
		___PlayerGroundRadius_18 = value;
	}

	inline static int32_t get_offset_of_PlayerJumpForce_19() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___PlayerJumpForce_19)); }
	inline float get_PlayerJumpForce_19() const { return ___PlayerJumpForce_19; }
	inline float* get_address_of_PlayerJumpForce_19() { return &___PlayerJumpForce_19; }
	inline void set_PlayerJumpForce_19(float value)
	{
		___PlayerJumpForce_19 = value;
	}

	inline static int32_t get_offset_of_IsPlayerFacingRight_20() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___IsPlayerFacingRight_20)); }
	inline bool get_IsPlayerFacingRight_20() const { return ___IsPlayerFacingRight_20; }
	inline bool* get_address_of_IsPlayerFacingRight_20() { return &___IsPlayerFacingRight_20; }
	inline void set_IsPlayerFacingRight_20(bool value)
	{
		___IsPlayerFacingRight_20 = value;
	}

	inline static int32_t get_offset_of_IsPlayerAttacking_21() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___IsPlayerAttacking_21)); }
	inline bool get_IsPlayerAttacking_21() const { return ___IsPlayerAttacking_21; }
	inline bool* get_address_of_IsPlayerAttacking_21() { return &___IsPlayerAttacking_21; }
	inline void set_IsPlayerAttacking_21(bool value)
	{
		___IsPlayerAttacking_21 = value;
	}

	inline static int32_t get_offset_of_IsPlayerSliding_22() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___IsPlayerSliding_22)); }
	inline bool get_IsPlayerSliding_22() const { return ___IsPlayerSliding_22; }
	inline bool* get_address_of_IsPlayerSliding_22() { return &___IsPlayerSliding_22; }
	inline void set_IsPlayerSliding_22(bool value)
	{
		___IsPlayerSliding_22 = value;
	}

	inline static int32_t get_offset_of_NewPlayerSlideColliderSize_23() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___NewPlayerSlideColliderSize_23)); }
	inline Vector2_t2243707579  get_NewPlayerSlideColliderSize_23() const { return ___NewPlayerSlideColliderSize_23; }
	inline Vector2_t2243707579 * get_address_of_NewPlayerSlideColliderSize_23() { return &___NewPlayerSlideColliderSize_23; }
	inline void set_NewPlayerSlideColliderSize_23(Vector2_t2243707579  value)
	{
		___NewPlayerSlideColliderSize_23 = value;
	}

	inline static int32_t get_offset_of_NewPlayerSlideColliderOffset_24() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___NewPlayerSlideColliderOffset_24)); }
	inline Vector2_t2243707579  get_NewPlayerSlideColliderOffset_24() const { return ___NewPlayerSlideColliderOffset_24; }
	inline Vector2_t2243707579 * get_address_of_NewPlayerSlideColliderOffset_24() { return &___NewPlayerSlideColliderOffset_24; }
	inline void set_NewPlayerSlideColliderOffset_24(Vector2_t2243707579  value)
	{
		___NewPlayerSlideColliderOffset_24 = value;
	}

	inline static int32_t get_offset_of_OriginalPlayerColliderSize_25() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___OriginalPlayerColliderSize_25)); }
	inline Vector2_t2243707579  get_OriginalPlayerColliderSize_25() const { return ___OriginalPlayerColliderSize_25; }
	inline Vector2_t2243707579 * get_address_of_OriginalPlayerColliderSize_25() { return &___OriginalPlayerColliderSize_25; }
	inline void set_OriginalPlayerColliderSize_25(Vector2_t2243707579  value)
	{
		___OriginalPlayerColliderSize_25 = value;
	}

	inline static int32_t get_offset_of_OriginalPlayerColliderOffset_26() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___OriginalPlayerColliderOffset_26)); }
	inline Vector2_t2243707579  get_OriginalPlayerColliderOffset_26() const { return ___OriginalPlayerColliderOffset_26; }
	inline Vector2_t2243707579 * get_address_of_OriginalPlayerColliderOffset_26() { return &___OriginalPlayerColliderOffset_26; }
	inline void set_OriginalPlayerColliderOffset_26(Vector2_t2243707579  value)
	{
		___OriginalPlayerColliderOffset_26 = value;
	}

	inline static int32_t get_offset_of_PlayerIsGrounded_27() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___PlayerIsGrounded_27)); }
	inline bool get_PlayerIsGrounded_27() const { return ___PlayerIsGrounded_27; }
	inline bool* get_address_of_PlayerIsGrounded_27() { return &___PlayerIsGrounded_27; }
	inline void set_PlayerIsGrounded_27(bool value)
	{
		___PlayerIsGrounded_27 = value;
	}

	inline static int32_t get_offset_of_ShouldPlayerJump_28() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___ShouldPlayerJump_28)); }
	inline bool get_ShouldPlayerJump_28() const { return ___ShouldPlayerJump_28; }
	inline bool* get_address_of_ShouldPlayerJump_28() { return &___ShouldPlayerJump_28; }
	inline void set_ShouldPlayerJump_28(bool value)
	{
		___ShouldPlayerJump_28 = value;
	}

	inline static int32_t get_offset_of_IsPlayerDead_29() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___IsPlayerDead_29)); }
	inline bool get_IsPlayerDead_29() const { return ___IsPlayerDead_29; }
	inline bool* get_address_of_IsPlayerDead_29() { return &___IsPlayerDead_29; }
	inline void set_IsPlayerDead_29(bool value)
	{
		___IsPlayerDead_29 = value;
	}

	inline static int32_t get_offset_of_IsPlayerGunAttack_30() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___IsPlayerGunAttack_30)); }
	inline bool get_IsPlayerGunAttack_30() const { return ___IsPlayerGunAttack_30; }
	inline bool* get_address_of_IsPlayerGunAttack_30() { return &___IsPlayerGunAttack_30; }
	inline void set_IsPlayerGunAttack_30(bool value)
	{
		___IsPlayerGunAttack_30 = value;
	}

	inline static int32_t get_offset_of_IsPlayerImmortal_31() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___IsPlayerImmortal_31)); }
	inline bool get_IsPlayerImmortal_31() const { return ___IsPlayerImmortal_31; }
	inline bool* get_address_of_IsPlayerImmortal_31() { return &___IsPlayerImmortal_31; }
	inline void set_IsPlayerImmortal_31(bool value)
	{
		___IsPlayerImmortal_31 = value;
	}

	inline static int32_t get_offset_of_PlayerImmortalTime_32() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___PlayerImmortalTime_32)); }
	inline float get_PlayerImmortalTime_32() const { return ___PlayerImmortalTime_32; }
	inline float* get_address_of_PlayerImmortalTime_32() { return &___PlayerImmortalTime_32; }
	inline void set_PlayerImmortalTime_32(float value)
	{
		___PlayerImmortalTime_32 = value;
	}

	inline static int32_t get_offset_of_ShouldPlayerRespawn_33() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___ShouldPlayerRespawn_33)); }
	inline bool get_ShouldPlayerRespawn_33() const { return ___ShouldPlayerRespawn_33; }
	inline bool* get_address_of_ShouldPlayerRespawn_33() { return &___ShouldPlayerRespawn_33; }
	inline void set_ShouldPlayerRespawn_33(bool value)
	{
		___ShouldPlayerRespawn_33 = value;
	}

	inline static int32_t get_offset_of_PlayerAirControl_34() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___PlayerAirControl_34)); }
	inline bool get_PlayerAirControl_34() const { return ___PlayerAirControl_34; }
	inline bool* get_address_of_PlayerAirControl_34() { return &___PlayerAirControl_34; }
	inline void set_PlayerAirControl_34(bool value)
	{
		___PlayerAirControl_34 = value;
	}

	inline static int32_t get_offset_of_Sample_Player_Health_35() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___Sample_Player_Health_35)); }
	inline int32_t get_Sample_Player_Health_35() const { return ___Sample_Player_Health_35; }
	inline int32_t* get_address_of_Sample_Player_Health_35() { return &___Sample_Player_Health_35; }
	inline void set_Sample_Player_Health_35(int32_t value)
	{
		___Sample_Player_Health_35 = value;
	}
};

struct PlayerControl_t792727354_StaticFields
{
public:
	// PlayerStats PlayerControl::currentPlayer
	PlayerStats_t2629781060 * ___currentPlayer_2;

public:
	inline static int32_t get_offset_of_currentPlayer_2() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354_StaticFields, ___currentPlayer_2)); }
	inline PlayerStats_t2629781060 * get_currentPlayer_2() const { return ___currentPlayer_2; }
	inline PlayerStats_t2629781060 ** get_address_of_currentPlayer_2() { return &___currentPlayer_2; }
	inline void set_currentPlayer_2(PlayerStats_t2629781060 * value)
	{
		___currentPlayer_2 = value;
		Il2CppCodeGenWriteBarrier(&___currentPlayer_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
