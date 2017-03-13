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

// ShowButtons
struct  ShowButtons_t2634117638  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ShowButtons::settingsPanel
	GameObject_t1756533147 * ___settingsPanel_2;
	// UnityEngine.GameObject ShowButtons::settingsTint
	GameObject_t1756533147 * ___settingsTint_3;
	// UnityEngine.GameObject ShowButtons::menuPanel
	GameObject_t1756533147 * ___menuPanel_4;
	// UnityEngine.GameObject ShowButtons::pausePanel
	GameObject_t1756533147 * ___pausePanel_5;

public:
	inline static int32_t get_offset_of_settingsPanel_2() { return static_cast<int32_t>(offsetof(ShowButtons_t2634117638, ___settingsPanel_2)); }
	inline GameObject_t1756533147 * get_settingsPanel_2() const { return ___settingsPanel_2; }
	inline GameObject_t1756533147 ** get_address_of_settingsPanel_2() { return &___settingsPanel_2; }
	inline void set_settingsPanel_2(GameObject_t1756533147 * value)
	{
		___settingsPanel_2 = value;
		Il2CppCodeGenWriteBarrier(&___settingsPanel_2, value);
	}

	inline static int32_t get_offset_of_settingsTint_3() { return static_cast<int32_t>(offsetof(ShowButtons_t2634117638, ___settingsTint_3)); }
	inline GameObject_t1756533147 * get_settingsTint_3() const { return ___settingsTint_3; }
	inline GameObject_t1756533147 ** get_address_of_settingsTint_3() { return &___settingsTint_3; }
	inline void set_settingsTint_3(GameObject_t1756533147 * value)
	{
		___settingsTint_3 = value;
		Il2CppCodeGenWriteBarrier(&___settingsTint_3, value);
	}

	inline static int32_t get_offset_of_menuPanel_4() { return static_cast<int32_t>(offsetof(ShowButtons_t2634117638, ___menuPanel_4)); }
	inline GameObject_t1756533147 * get_menuPanel_4() const { return ___menuPanel_4; }
	inline GameObject_t1756533147 ** get_address_of_menuPanel_4() { return &___menuPanel_4; }
	inline void set_menuPanel_4(GameObject_t1756533147 * value)
	{
		___menuPanel_4 = value;
		Il2CppCodeGenWriteBarrier(&___menuPanel_4, value);
	}

	inline static int32_t get_offset_of_pausePanel_5() { return static_cast<int32_t>(offsetof(ShowButtons_t2634117638, ___pausePanel_5)); }
	inline GameObject_t1756533147 * get_pausePanel_5() const { return ___pausePanel_5; }
	inline GameObject_t1756533147 ** get_address_of_pausePanel_5() { return &___pausePanel_5; }
	inline void set_pausePanel_5(GameObject_t1756533147 * value)
	{
		___pausePanel_5 = value;
		Il2CppCodeGenWriteBarrier(&___pausePanel_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
