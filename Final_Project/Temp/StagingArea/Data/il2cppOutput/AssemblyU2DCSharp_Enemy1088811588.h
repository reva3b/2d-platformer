#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Ienemy
struct Ienemy_t1554599973;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "AssemblyU2DCSharp_Char4248471116.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Enemy
struct  Enemy_t1088811588  : public Char_t4248471116
{
public:
	// Ienemy Enemy::currentState
	Il2CppObject * ___currentState_12;
	// UnityEngine.GameObject Enemy::<Target>k__BackingField
	GameObject_t1756533147 * ___U3CTargetU3Ek__BackingField_13;
	// System.Single Enemy::AttackRange
	float ___AttackRange_14;
	// System.Single Enemy::ThrowRange
	float ___ThrowRange_15;

public:
	inline static int32_t get_offset_of_currentState_12() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___currentState_12)); }
	inline Il2CppObject * get_currentState_12() const { return ___currentState_12; }
	inline Il2CppObject ** get_address_of_currentState_12() { return &___currentState_12; }
	inline void set_currentState_12(Il2CppObject * value)
	{
		___currentState_12 = value;
		Il2CppCodeGenWriteBarrier(&___currentState_12, value);
	}

	inline static int32_t get_offset_of_U3CTargetU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___U3CTargetU3Ek__BackingField_13)); }
	inline GameObject_t1756533147 * get_U3CTargetU3Ek__BackingField_13() const { return ___U3CTargetU3Ek__BackingField_13; }
	inline GameObject_t1756533147 ** get_address_of_U3CTargetU3Ek__BackingField_13() { return &___U3CTargetU3Ek__BackingField_13; }
	inline void set_U3CTargetU3Ek__BackingField_13(GameObject_t1756533147 * value)
	{
		___U3CTargetU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTargetU3Ek__BackingField_13, value);
	}

	inline static int32_t get_offset_of_AttackRange_14() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___AttackRange_14)); }
	inline float get_AttackRange_14() const { return ___AttackRange_14; }
	inline float* get_address_of_AttackRange_14() { return &___AttackRange_14; }
	inline void set_AttackRange_14(float value)
	{
		___AttackRange_14 = value;
	}

	inline static int32_t get_offset_of_ThrowRange_15() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___ThrowRange_15)); }
	inline float get_ThrowRange_15() const { return ___ThrowRange_15; }
	inline float* get_address_of_ThrowRange_15() { return &___ThrowRange_15; }
	inline void set_ThrowRange_15(float value)
	{
		___ThrowRange_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
