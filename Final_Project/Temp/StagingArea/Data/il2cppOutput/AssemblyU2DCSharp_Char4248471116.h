#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Char
struct  Char_t4248471116  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator Char::<EnemyAnimator>k__BackingField
	Animator_t69676727 * ___U3CEnemyAnimatorU3Ek__BackingField_2;
	// UnityEngine.Transform Char::BulletPosition
	Transform_t3275118058 * ___BulletPosition_3;
	// System.Single Char::PlayerMovementSpeed
	float ___PlayerMovementSpeed_4;
	// System.Boolean Char::IsPlayerFacingRight
	bool ___IsPlayerFacingRight_5;
	// UnityEngine.GameObject Char::BulletPrefab
	GameObject_t1756533147 * ___BulletPrefab_6;
	// System.Int32 Char::Health
	int32_t ___Health_7;
	// UnityEngine.EdgeCollider2D Char::KinfeCollider
	EdgeCollider2D_t216857133 * ___KinfeCollider_8;
	// System.Collections.Generic.List`1<System.String> Char::damageSources
	List_1_t1398341365 * ___damageSources_9;
	// System.Boolean Char::<IPlayerAttacking>k__BackingField
	bool ___U3CIPlayerAttackingU3Ek__BackingField_10;
	// System.Boolean Char::<TakingDamage>k__BackingField
	bool ___U3CTakingDamageU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CEnemyAnimatorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Char_t4248471116, ___U3CEnemyAnimatorU3Ek__BackingField_2)); }
	inline Animator_t69676727 * get_U3CEnemyAnimatorU3Ek__BackingField_2() const { return ___U3CEnemyAnimatorU3Ek__BackingField_2; }
	inline Animator_t69676727 ** get_address_of_U3CEnemyAnimatorU3Ek__BackingField_2() { return &___U3CEnemyAnimatorU3Ek__BackingField_2; }
	inline void set_U3CEnemyAnimatorU3Ek__BackingField_2(Animator_t69676727 * value)
	{
		___U3CEnemyAnimatorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CEnemyAnimatorU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_BulletPosition_3() { return static_cast<int32_t>(offsetof(Char_t4248471116, ___BulletPosition_3)); }
	inline Transform_t3275118058 * get_BulletPosition_3() const { return ___BulletPosition_3; }
	inline Transform_t3275118058 ** get_address_of_BulletPosition_3() { return &___BulletPosition_3; }
	inline void set_BulletPosition_3(Transform_t3275118058 * value)
	{
		___BulletPosition_3 = value;
		Il2CppCodeGenWriteBarrier(&___BulletPosition_3, value);
	}

	inline static int32_t get_offset_of_PlayerMovementSpeed_4() { return static_cast<int32_t>(offsetof(Char_t4248471116, ___PlayerMovementSpeed_4)); }
	inline float get_PlayerMovementSpeed_4() const { return ___PlayerMovementSpeed_4; }
	inline float* get_address_of_PlayerMovementSpeed_4() { return &___PlayerMovementSpeed_4; }
	inline void set_PlayerMovementSpeed_4(float value)
	{
		___PlayerMovementSpeed_4 = value;
	}

	inline static int32_t get_offset_of_IsPlayerFacingRight_5() { return static_cast<int32_t>(offsetof(Char_t4248471116, ___IsPlayerFacingRight_5)); }
	inline bool get_IsPlayerFacingRight_5() const { return ___IsPlayerFacingRight_5; }
	inline bool* get_address_of_IsPlayerFacingRight_5() { return &___IsPlayerFacingRight_5; }
	inline void set_IsPlayerFacingRight_5(bool value)
	{
		___IsPlayerFacingRight_5 = value;
	}

	inline static int32_t get_offset_of_BulletPrefab_6() { return static_cast<int32_t>(offsetof(Char_t4248471116, ___BulletPrefab_6)); }
	inline GameObject_t1756533147 * get_BulletPrefab_6() const { return ___BulletPrefab_6; }
	inline GameObject_t1756533147 ** get_address_of_BulletPrefab_6() { return &___BulletPrefab_6; }
	inline void set_BulletPrefab_6(GameObject_t1756533147 * value)
	{
		___BulletPrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___BulletPrefab_6, value);
	}

	inline static int32_t get_offset_of_Health_7() { return static_cast<int32_t>(offsetof(Char_t4248471116, ___Health_7)); }
	inline int32_t get_Health_7() const { return ___Health_7; }
	inline int32_t* get_address_of_Health_7() { return &___Health_7; }
	inline void set_Health_7(int32_t value)
	{
		___Health_7 = value;
	}

	inline static int32_t get_offset_of_KinfeCollider_8() { return static_cast<int32_t>(offsetof(Char_t4248471116, ___KinfeCollider_8)); }
	inline EdgeCollider2D_t216857133 * get_KinfeCollider_8() const { return ___KinfeCollider_8; }
	inline EdgeCollider2D_t216857133 ** get_address_of_KinfeCollider_8() { return &___KinfeCollider_8; }
	inline void set_KinfeCollider_8(EdgeCollider2D_t216857133 * value)
	{
		___KinfeCollider_8 = value;
		Il2CppCodeGenWriteBarrier(&___KinfeCollider_8, value);
	}

	inline static int32_t get_offset_of_damageSources_9() { return static_cast<int32_t>(offsetof(Char_t4248471116, ___damageSources_9)); }
	inline List_1_t1398341365 * get_damageSources_9() const { return ___damageSources_9; }
	inline List_1_t1398341365 ** get_address_of_damageSources_9() { return &___damageSources_9; }
	inline void set_damageSources_9(List_1_t1398341365 * value)
	{
		___damageSources_9 = value;
		Il2CppCodeGenWriteBarrier(&___damageSources_9, value);
	}

	inline static int32_t get_offset_of_U3CIPlayerAttackingU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(Char_t4248471116, ___U3CIPlayerAttackingU3Ek__BackingField_10)); }
	inline bool get_U3CIPlayerAttackingU3Ek__BackingField_10() const { return ___U3CIPlayerAttackingU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CIPlayerAttackingU3Ek__BackingField_10() { return &___U3CIPlayerAttackingU3Ek__BackingField_10; }
	inline void set_U3CIPlayerAttackingU3Ek__BackingField_10(bool value)
	{
		___U3CIPlayerAttackingU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CTakingDamageU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(Char_t4248471116, ___U3CTakingDamageU3Ek__BackingField_11)); }
	inline bool get_U3CTakingDamageU3Ek__BackingField_11() const { return ___U3CTakingDamageU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CTakingDamageU3Ek__BackingField_11() { return &___U3CTakingDamageU3Ek__BackingField_11; }
	inline void set_U3CTakingDamageU3Ek__BackingField_11(bool value)
	{
		___U3CTakingDamageU3Ek__BackingField_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
