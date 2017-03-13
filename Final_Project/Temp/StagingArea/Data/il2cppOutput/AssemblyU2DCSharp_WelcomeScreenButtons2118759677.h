#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WelcomeScreenButtons
struct  WelcomeScreenButtons_t2118759677  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject WelcomeScreenButtons::continuePanel
	GameObject_t1756533147 * ___continuePanel_2;
	// UnityEngine.GameObject WelcomeScreenButtons::settingsTint
	GameObject_t1756533147 * ___settingsTint_3;

public:
	inline static int32_t get_offset_of_continuePanel_2() { return static_cast<int32_t>(offsetof(WelcomeScreenButtons_t2118759677, ___continuePanel_2)); }
	inline GameObject_t1756533147 * get_continuePanel_2() const { return ___continuePanel_2; }
	inline GameObject_t1756533147 ** get_address_of_continuePanel_2() { return &___continuePanel_2; }
	inline void set_continuePanel_2(GameObject_t1756533147 * value)
	{
		___continuePanel_2 = value;
		Il2CppCodeGenWriteBarrier(&___continuePanel_2, value);
	}

	inline static int32_t get_offset_of_settingsTint_3() { return static_cast<int32_t>(offsetof(WelcomeScreenButtons_t2118759677, ___settingsTint_3)); }
	inline GameObject_t1756533147 * get_settingsTint_3() const { return ___settingsTint_3; }
	inline GameObject_t1756533147 ** get_address_of_settingsTint_3() { return &___settingsTint_3; }
	inline void set_settingsTint_3(GameObject_t1756533147 * value)
	{
		___settingsTint_3 = value;
		Il2CppCodeGenWriteBarrier(&___settingsTint_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
