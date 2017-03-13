#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerBar
struct PlayerBar_t3624843098;
// PlayerShield
struct PlayerShield_t799658760;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerBarStat
struct  PlayerBarStat_t1785125024  : public Il2CppObject
{
public:
	// PlayerBar PlayerBarStat::player_bar
	PlayerBar_t3624843098 * ___player_bar_0;
	// PlayerShield PlayerBarStat::player_shield_bar
	PlayerShield_t799658760 * ___player_shield_bar_1;

public:
	inline static int32_t get_offset_of_player_bar_0() { return static_cast<int32_t>(offsetof(PlayerBarStat_t1785125024, ___player_bar_0)); }
	inline PlayerBar_t3624843098 * get_player_bar_0() const { return ___player_bar_0; }
	inline PlayerBar_t3624843098 ** get_address_of_player_bar_0() { return &___player_bar_0; }
	inline void set_player_bar_0(PlayerBar_t3624843098 * value)
	{
		___player_bar_0 = value;
		Il2CppCodeGenWriteBarrier(&___player_bar_0, value);
	}

	inline static int32_t get_offset_of_player_shield_bar_1() { return static_cast<int32_t>(offsetof(PlayerBarStat_t1785125024, ___player_shield_bar_1)); }
	inline PlayerShield_t799658760 * get_player_shield_bar_1() const { return ___player_shield_bar_1; }
	inline PlayerShield_t799658760 ** get_address_of_player_shield_bar_1() { return &___player_shield_bar_1; }
	inline void set_player_shield_bar_1(PlayerShield_t799658760 * value)
	{
		___player_shield_bar_1 = value;
		Il2CppCodeGenWriteBarrier(&___player_shield_bar_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
