#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerShield
struct  PlayerShield_t799658760  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 PlayerShield::MaximumPlayerBarStatValue
	int32_t ___MaximumPlayerBarStatValue_2;
	// System.Int32 PlayerShield::CurrentPlayerBarStatValue
	int32_t ___CurrentPlayerBarStatValue_3;
	// System.Single PlayerShield::PlayerBarFillAmount
	float ___PlayerBarFillAmount_4;
	// UnityEngine.UI.Image PlayerShield::PlayerBarContent
	Image_t2042527209 * ___PlayerBarContent_5;
	// UnityEngine.UI.Text PlayerShield::PlayerBarValueText
	Text_t356221433 * ___PlayerBarValueText_6;
	// System.Single PlayerShield::PlayerBarLerpSpeed
	float ___PlayerBarLerpSpeed_7;

public:
	inline static int32_t get_offset_of_MaximumPlayerBarStatValue_2() { return static_cast<int32_t>(offsetof(PlayerShield_t799658760, ___MaximumPlayerBarStatValue_2)); }
	inline int32_t get_MaximumPlayerBarStatValue_2() const { return ___MaximumPlayerBarStatValue_2; }
	inline int32_t* get_address_of_MaximumPlayerBarStatValue_2() { return &___MaximumPlayerBarStatValue_2; }
	inline void set_MaximumPlayerBarStatValue_2(int32_t value)
	{
		___MaximumPlayerBarStatValue_2 = value;
	}

	inline static int32_t get_offset_of_CurrentPlayerBarStatValue_3() { return static_cast<int32_t>(offsetof(PlayerShield_t799658760, ___CurrentPlayerBarStatValue_3)); }
	inline int32_t get_CurrentPlayerBarStatValue_3() const { return ___CurrentPlayerBarStatValue_3; }
	inline int32_t* get_address_of_CurrentPlayerBarStatValue_3() { return &___CurrentPlayerBarStatValue_3; }
	inline void set_CurrentPlayerBarStatValue_3(int32_t value)
	{
		___CurrentPlayerBarStatValue_3 = value;
	}

	inline static int32_t get_offset_of_PlayerBarFillAmount_4() { return static_cast<int32_t>(offsetof(PlayerShield_t799658760, ___PlayerBarFillAmount_4)); }
	inline float get_PlayerBarFillAmount_4() const { return ___PlayerBarFillAmount_4; }
	inline float* get_address_of_PlayerBarFillAmount_4() { return &___PlayerBarFillAmount_4; }
	inline void set_PlayerBarFillAmount_4(float value)
	{
		___PlayerBarFillAmount_4 = value;
	}

	inline static int32_t get_offset_of_PlayerBarContent_5() { return static_cast<int32_t>(offsetof(PlayerShield_t799658760, ___PlayerBarContent_5)); }
	inline Image_t2042527209 * get_PlayerBarContent_5() const { return ___PlayerBarContent_5; }
	inline Image_t2042527209 ** get_address_of_PlayerBarContent_5() { return &___PlayerBarContent_5; }
	inline void set_PlayerBarContent_5(Image_t2042527209 * value)
	{
		___PlayerBarContent_5 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerBarContent_5, value);
	}

	inline static int32_t get_offset_of_PlayerBarValueText_6() { return static_cast<int32_t>(offsetof(PlayerShield_t799658760, ___PlayerBarValueText_6)); }
	inline Text_t356221433 * get_PlayerBarValueText_6() const { return ___PlayerBarValueText_6; }
	inline Text_t356221433 ** get_address_of_PlayerBarValueText_6() { return &___PlayerBarValueText_6; }
	inline void set_PlayerBarValueText_6(Text_t356221433 * value)
	{
		___PlayerBarValueText_6 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerBarValueText_6, value);
	}

	inline static int32_t get_offset_of_PlayerBarLerpSpeed_7() { return static_cast<int32_t>(offsetof(PlayerShield_t799658760, ___PlayerBarLerpSpeed_7)); }
	inline float get_PlayerBarLerpSpeed_7() const { return ___PlayerBarLerpSpeed_7; }
	inline float* get_address_of_PlayerBarLerpSpeed_7() { return &___PlayerBarLerpSpeed_7; }
	inline void set_PlayerBarLerpSpeed_7(float value)
	{
		___PlayerBarLerpSpeed_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
