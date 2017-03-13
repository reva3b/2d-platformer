#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MysteryItemManager
struct MysteryItemManager_t2573482533;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MysteryItemDisplay
struct  MysteryItemDisplay_t2347889684  : public MonoBehaviour_t1158329972
{
public:
	// MysteryItemManager MysteryItemDisplay::item
	MysteryItemManager_t2573482533 * ___item_2;
	// UnityEngine.UI.Text MysteryItemDisplay::mysteryItemDisplay
	Text_t356221433 * ___mysteryItemDisplay_3;
	// System.Single MysteryItemDisplay::fadeTime
	float ___fadeTime_4;
	// System.Boolean MysteryItemDisplay::displayOn
	bool ___displayOn_5;

public:
	inline static int32_t get_offset_of_item_2() { return static_cast<int32_t>(offsetof(MysteryItemDisplay_t2347889684, ___item_2)); }
	inline MysteryItemManager_t2573482533 * get_item_2() const { return ___item_2; }
	inline MysteryItemManager_t2573482533 ** get_address_of_item_2() { return &___item_2; }
	inline void set_item_2(MysteryItemManager_t2573482533 * value)
	{
		___item_2 = value;
		Il2CppCodeGenWriteBarrier(&___item_2, value);
	}

	inline static int32_t get_offset_of_mysteryItemDisplay_3() { return static_cast<int32_t>(offsetof(MysteryItemDisplay_t2347889684, ___mysteryItemDisplay_3)); }
	inline Text_t356221433 * get_mysteryItemDisplay_3() const { return ___mysteryItemDisplay_3; }
	inline Text_t356221433 ** get_address_of_mysteryItemDisplay_3() { return &___mysteryItemDisplay_3; }
	inline void set_mysteryItemDisplay_3(Text_t356221433 * value)
	{
		___mysteryItemDisplay_3 = value;
		Il2CppCodeGenWriteBarrier(&___mysteryItemDisplay_3, value);
	}

	inline static int32_t get_offset_of_fadeTime_4() { return static_cast<int32_t>(offsetof(MysteryItemDisplay_t2347889684, ___fadeTime_4)); }
	inline float get_fadeTime_4() const { return ___fadeTime_4; }
	inline float* get_address_of_fadeTime_4() { return &___fadeTime_4; }
	inline void set_fadeTime_4(float value)
	{
		___fadeTime_4 = value;
	}

	inline static int32_t get_offset_of_displayOn_5() { return static_cast<int32_t>(offsetof(MysteryItemDisplay_t2347889684, ___displayOn_5)); }
	inline bool get_displayOn_5() const { return ___displayOn_5; }
	inline bool* get_address_of_displayOn_5() { return &___displayOn_5; }
	inline void set_displayOn_5(bool value)
	{
		___displayOn_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
