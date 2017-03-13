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
// EnemyManager
struct EnemyManager_t3846953235;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MysteryItemManager
struct  MysteryItemManager_t2573482533  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean MysteryItemManager::increaseSpeed
	bool ___increaseSpeed_2;
	// System.Boolean MysteryItemManager::superJump
	bool ___superJump_3;
	// System.Boolean MysteryItemManager::increaseHealth
	bool ___increaseHealth_4;
	// System.Boolean MysteryItemManager::shield
	bool ___shield_5;
	// System.Boolean MysteryItemManager::gainWeapon
	bool ___gainWeapon_6;
	// System.Boolean MysteryItemManager::decreaseSpeed
	bool ___decreaseSpeed_7;
	// System.Boolean MysteryItemManager::cantJump
	bool ___cantJump_8;
	// System.Boolean MysteryItemManager::moreEnemies
	bool ___moreEnemies_9;
	// System.Boolean MysteryItemManager::decreaseHealth
	bool ___decreaseHealth_10;
	// System.Boolean MysteryItemManager::loseWeapon
	bool ___loseWeapon_11;
	// System.Boolean MysteryItemManager::immortality
	bool ___immortality_12;
	// System.Boolean MysteryItemManager::mysteryItemActive
	bool ___mysteryItemActive_13;
	// System.Single MysteryItemManager::mysteryItemLengthCounter
	float ___mysteryItemLengthCounter_14;
	// PlayerControl MysteryItemManager::thePlayerControlManager
	PlayerControl_t792727354 * ___thePlayerControlManager_15;
	// System.Single MysteryItemManager::normalMovementSpeed
	float ___normalMovementSpeed_16;
	// System.Single MysteryItemManager::normalJumpForce
	float ___normalJumpForce_17;
	// EnemyManager MysteryItemManager::spawnEnemies
	EnemyManager_t3846953235 * ___spawnEnemies_18;

public:
	inline static int32_t get_offset_of_increaseSpeed_2() { return static_cast<int32_t>(offsetof(MysteryItemManager_t2573482533, ___increaseSpeed_2)); }
	inline bool get_increaseSpeed_2() const { return ___increaseSpeed_2; }
	inline bool* get_address_of_increaseSpeed_2() { return &___increaseSpeed_2; }
	inline void set_increaseSpeed_2(bool value)
	{
		___increaseSpeed_2 = value;
	}

	inline static int32_t get_offset_of_superJump_3() { return static_cast<int32_t>(offsetof(MysteryItemManager_t2573482533, ___superJump_3)); }
	inline bool get_superJump_3() const { return ___superJump_3; }
	inline bool* get_address_of_superJump_3() { return &___superJump_3; }
	inline void set_superJump_3(bool value)
	{
		___superJump_3 = value;
	}

	inline static int32_t get_offset_of_increaseHealth_4() { return static_cast<int32_t>(offsetof(MysteryItemManager_t2573482533, ___increaseHealth_4)); }
	inline bool get_increaseHealth_4() const { return ___increaseHealth_4; }
	inline bool* get_address_of_increaseHealth_4() { return &___increaseHealth_4; }
	inline void set_increaseHealth_4(bool value)
	{
		___increaseHealth_4 = value;
	}

	inline static int32_t get_offset_of_shield_5() { return static_cast<int32_t>(offsetof(MysteryItemManager_t2573482533, ___shield_5)); }
	inline bool get_shield_5() const { return ___shield_5; }
	inline bool* get_address_of_shield_5() { return &___shield_5; }
	inline void set_shield_5(bool value)
	{
		___shield_5 = value;
	}

	inline static int32_t get_offset_of_gainWeapon_6() { return static_cast<int32_t>(offsetof(MysteryItemManager_t2573482533, ___gainWeapon_6)); }
	inline bool get_gainWeapon_6() const { return ___gainWeapon_6; }
	inline bool* get_address_of_gainWeapon_6() { return &___gainWeapon_6; }
	inline void set_gainWeapon_6(bool value)
	{
		___gainWeapon_6 = value;
	}

	inline static int32_t get_offset_of_decreaseSpeed_7() { return static_cast<int32_t>(offsetof(MysteryItemManager_t2573482533, ___decreaseSpeed_7)); }
	inline bool get_decreaseSpeed_7() const { return ___decreaseSpeed_7; }
	inline bool* get_address_of_decreaseSpeed_7() { return &___decreaseSpeed_7; }
	inline void set_decreaseSpeed_7(bool value)
	{
		___decreaseSpeed_7 = value;
	}

	inline static int32_t get_offset_of_cantJump_8() { return static_cast<int32_t>(offsetof(MysteryItemManager_t2573482533, ___cantJump_8)); }
	inline bool get_cantJump_8() const { return ___cantJump_8; }
	inline bool* get_address_of_cantJump_8() { return &___cantJump_8; }
	inline void set_cantJump_8(bool value)
	{
		___cantJump_8 = value;
	}

	inline static int32_t get_offset_of_moreEnemies_9() { return static_cast<int32_t>(offsetof(MysteryItemManager_t2573482533, ___moreEnemies_9)); }
	inline bool get_moreEnemies_9() const { return ___moreEnemies_9; }
	inline bool* get_address_of_moreEnemies_9() { return &___moreEnemies_9; }
	inline void set_moreEnemies_9(bool value)
	{
		___moreEnemies_9 = value;
	}

	inline static int32_t get_offset_of_decreaseHealth_10() { return static_cast<int32_t>(offsetof(MysteryItemManager_t2573482533, ___decreaseHealth_10)); }
	inline bool get_decreaseHealth_10() const { return ___decreaseHealth_10; }
	inline bool* get_address_of_decreaseHealth_10() { return &___decreaseHealth_10; }
	inline void set_decreaseHealth_10(bool value)
	{
		___decreaseHealth_10 = value;
	}

	inline static int32_t get_offset_of_loseWeapon_11() { return static_cast<int32_t>(offsetof(MysteryItemManager_t2573482533, ___loseWeapon_11)); }
	inline bool get_loseWeapon_11() const { return ___loseWeapon_11; }
	inline bool* get_address_of_loseWeapon_11() { return &___loseWeapon_11; }
	inline void set_loseWeapon_11(bool value)
	{
		___loseWeapon_11 = value;
	}

	inline static int32_t get_offset_of_immortality_12() { return static_cast<int32_t>(offsetof(MysteryItemManager_t2573482533, ___immortality_12)); }
	inline bool get_immortality_12() const { return ___immortality_12; }
	inline bool* get_address_of_immortality_12() { return &___immortality_12; }
	inline void set_immortality_12(bool value)
	{
		___immortality_12 = value;
	}

	inline static int32_t get_offset_of_mysteryItemActive_13() { return static_cast<int32_t>(offsetof(MysteryItemManager_t2573482533, ___mysteryItemActive_13)); }
	inline bool get_mysteryItemActive_13() const { return ___mysteryItemActive_13; }
	inline bool* get_address_of_mysteryItemActive_13() { return &___mysteryItemActive_13; }
	inline void set_mysteryItemActive_13(bool value)
	{
		___mysteryItemActive_13 = value;
	}

	inline static int32_t get_offset_of_mysteryItemLengthCounter_14() { return static_cast<int32_t>(offsetof(MysteryItemManager_t2573482533, ___mysteryItemLengthCounter_14)); }
	inline float get_mysteryItemLengthCounter_14() const { return ___mysteryItemLengthCounter_14; }
	inline float* get_address_of_mysteryItemLengthCounter_14() { return &___mysteryItemLengthCounter_14; }
	inline void set_mysteryItemLengthCounter_14(float value)
	{
		___mysteryItemLengthCounter_14 = value;
	}

	inline static int32_t get_offset_of_thePlayerControlManager_15() { return static_cast<int32_t>(offsetof(MysteryItemManager_t2573482533, ___thePlayerControlManager_15)); }
	inline PlayerControl_t792727354 * get_thePlayerControlManager_15() const { return ___thePlayerControlManager_15; }
	inline PlayerControl_t792727354 ** get_address_of_thePlayerControlManager_15() { return &___thePlayerControlManager_15; }
	inline void set_thePlayerControlManager_15(PlayerControl_t792727354 * value)
	{
		___thePlayerControlManager_15 = value;
		Il2CppCodeGenWriteBarrier(&___thePlayerControlManager_15, value);
	}

	inline static int32_t get_offset_of_normalMovementSpeed_16() { return static_cast<int32_t>(offsetof(MysteryItemManager_t2573482533, ___normalMovementSpeed_16)); }
	inline float get_normalMovementSpeed_16() const { return ___normalMovementSpeed_16; }
	inline float* get_address_of_normalMovementSpeed_16() { return &___normalMovementSpeed_16; }
	inline void set_normalMovementSpeed_16(float value)
	{
		___normalMovementSpeed_16 = value;
	}

	inline static int32_t get_offset_of_normalJumpForce_17() { return static_cast<int32_t>(offsetof(MysteryItemManager_t2573482533, ___normalJumpForce_17)); }
	inline float get_normalJumpForce_17() const { return ___normalJumpForce_17; }
	inline float* get_address_of_normalJumpForce_17() { return &___normalJumpForce_17; }
	inline void set_normalJumpForce_17(float value)
	{
		___normalJumpForce_17 = value;
	}

	inline static int32_t get_offset_of_spawnEnemies_18() { return static_cast<int32_t>(offsetof(MysteryItemManager_t2573482533, ___spawnEnemies_18)); }
	inline EnemyManager_t3846953235 * get_spawnEnemies_18() const { return ___spawnEnemies_18; }
	inline EnemyManager_t3846953235 ** get_address_of_spawnEnemies_18() { return &___spawnEnemies_18; }
	inline void set_spawnEnemies_18(EnemyManager_t3846953235 * value)
	{
		___spawnEnemies_18 = value;
		Il2CppCodeGenWriteBarrier(&___spawnEnemies_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
