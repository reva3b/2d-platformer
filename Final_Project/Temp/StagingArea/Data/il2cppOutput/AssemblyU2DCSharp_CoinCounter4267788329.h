#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Image
struct Image_t2042527209;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CoinCounter
struct  CoinCounter_t4267788329  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text CoinCounter::coinDisplay
	Text_t356221433 * ___coinDisplay_2;
	// UnityEngine.UI.Image CoinCounter::coin
	Image_t2042527209 * ___coin_3;

public:
	inline static int32_t get_offset_of_coinDisplay_2() { return static_cast<int32_t>(offsetof(CoinCounter_t4267788329, ___coinDisplay_2)); }
	inline Text_t356221433 * get_coinDisplay_2() const { return ___coinDisplay_2; }
	inline Text_t356221433 ** get_address_of_coinDisplay_2() { return &___coinDisplay_2; }
	inline void set_coinDisplay_2(Text_t356221433 * value)
	{
		___coinDisplay_2 = value;
		Il2CppCodeGenWriteBarrier(&___coinDisplay_2, value);
	}

	inline static int32_t get_offset_of_coin_3() { return static_cast<int32_t>(offsetof(CoinCounter_t4267788329, ___coin_3)); }
	inline Image_t2042527209 * get_coin_3() const { return ___coin_3; }
	inline Image_t2042527209 ** get_address_of_coin_3() { return &___coin_3; }
	inline void set_coin_3(Image_t2042527209 * value)
	{
		___coin_3 = value;
		Il2CppCodeGenWriteBarrier(&___coin_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
