#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerStats
struct  PlayerStats_t2629781060  : public Il2CppObject
{
public:
	// System.Int32 PlayerStats::Health
	int32_t ___Health_0;
	// System.Int32 PlayerStats::Shield
	int32_t ___Shield_1;
	// System.Int32 PlayerStats::CoinCount
	int32_t ___CoinCount_2;
	// System.String PlayerStats::name
	String_t* ___name_3;
	// System.Int32 PlayerStats::LevelID
	int32_t ___LevelID_4;
	// System.Single PlayerStats::PositionX
	float ___PositionX_5;
	// System.Single PlayerStats::PositionY
	float ___PositionY_6;

public:
	inline static int32_t get_offset_of_Health_0() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___Health_0)); }
	inline int32_t get_Health_0() const { return ___Health_0; }
	inline int32_t* get_address_of_Health_0() { return &___Health_0; }
	inline void set_Health_0(int32_t value)
	{
		___Health_0 = value;
	}

	inline static int32_t get_offset_of_Shield_1() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___Shield_1)); }
	inline int32_t get_Shield_1() const { return ___Shield_1; }
	inline int32_t* get_address_of_Shield_1() { return &___Shield_1; }
	inline void set_Shield_1(int32_t value)
	{
		___Shield_1 = value;
	}

	inline static int32_t get_offset_of_CoinCount_2() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___CoinCount_2)); }
	inline int32_t get_CoinCount_2() const { return ___CoinCount_2; }
	inline int32_t* get_address_of_CoinCount_2() { return &___CoinCount_2; }
	inline void set_CoinCount_2(int32_t value)
	{
		___CoinCount_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier(&___name_3, value);
	}

	inline static int32_t get_offset_of_LevelID_4() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___LevelID_4)); }
	inline int32_t get_LevelID_4() const { return ___LevelID_4; }
	inline int32_t* get_address_of_LevelID_4() { return &___LevelID_4; }
	inline void set_LevelID_4(int32_t value)
	{
		___LevelID_4 = value;
	}

	inline static int32_t get_offset_of_PositionX_5() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___PositionX_5)); }
	inline float get_PositionX_5() const { return ___PositionX_5; }
	inline float* get_address_of_PositionX_5() { return &___PositionX_5; }
	inline void set_PositionX_5(float value)
	{
		___PositionX_5 = value;
	}

	inline static int32_t get_offset_of_PositionY_6() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___PositionY_6)); }
	inline float get_PositionY_6() const { return ___PositionY_6; }
	inline float* get_address_of_PositionY_6() { return &___PositionY_6; }
	inline void set_PositionY_6(float value)
	{
		___PositionY_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
