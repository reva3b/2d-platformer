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
// UnityEngine.AnimationClip
struct AnimationClip_t3510324950;
// SoundManager
struct SoundManager_t654432262;
// ShowButtons
struct ShowButtons_t2634117638;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainMenu
struct  MainMenu_t4009084430  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 MainMenu::sceneToStart
	int32_t ___sceneToStart_2;
	// System.Boolean MainMenu::changeScenes
	bool ___changeScenes_3;
	// System.Boolean MainMenu::changeMusicOnStart
	bool ___changeMusicOnStart_4;
	// System.Boolean MainMenu::inMainMenu
	bool ___inMainMenu_5;
	// UnityEngine.Animator MainMenu::animColorFade
	Animator_t69676727 * ___animColorFade_6;
	// UnityEngine.Animator MainMenu::animMenuAlpha
	Animator_t69676727 * ___animMenuAlpha_7;
	// UnityEngine.AnimationClip MainMenu::fadeColorAnimationClip
	AnimationClip_t3510324950 * ___fadeColorAnimationClip_8;
	// UnityEngine.AnimationClip MainMenu::fadeAlphaAnimationClip
	AnimationClip_t3510324950 * ___fadeAlphaAnimationClip_9;
	// SoundManager MainMenu::playMusic
	SoundManager_t654432262 * ___playMusic_10;
	// System.Single MainMenu::fastFadeIn
	float ___fastFadeIn_11;
	// ShowButtons MainMenu::showPanels
	ShowButtons_t2634117638 * ___showPanels_12;

public:
	inline static int32_t get_offset_of_sceneToStart_2() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___sceneToStart_2)); }
	inline int32_t get_sceneToStart_2() const { return ___sceneToStart_2; }
	inline int32_t* get_address_of_sceneToStart_2() { return &___sceneToStart_2; }
	inline void set_sceneToStart_2(int32_t value)
	{
		___sceneToStart_2 = value;
	}

	inline static int32_t get_offset_of_changeScenes_3() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___changeScenes_3)); }
	inline bool get_changeScenes_3() const { return ___changeScenes_3; }
	inline bool* get_address_of_changeScenes_3() { return &___changeScenes_3; }
	inline void set_changeScenes_3(bool value)
	{
		___changeScenes_3 = value;
	}

	inline static int32_t get_offset_of_changeMusicOnStart_4() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___changeMusicOnStart_4)); }
	inline bool get_changeMusicOnStart_4() const { return ___changeMusicOnStart_4; }
	inline bool* get_address_of_changeMusicOnStart_4() { return &___changeMusicOnStart_4; }
	inline void set_changeMusicOnStart_4(bool value)
	{
		___changeMusicOnStart_4 = value;
	}

	inline static int32_t get_offset_of_inMainMenu_5() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___inMainMenu_5)); }
	inline bool get_inMainMenu_5() const { return ___inMainMenu_5; }
	inline bool* get_address_of_inMainMenu_5() { return &___inMainMenu_5; }
	inline void set_inMainMenu_5(bool value)
	{
		___inMainMenu_5 = value;
	}

	inline static int32_t get_offset_of_animColorFade_6() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___animColorFade_6)); }
	inline Animator_t69676727 * get_animColorFade_6() const { return ___animColorFade_6; }
	inline Animator_t69676727 ** get_address_of_animColorFade_6() { return &___animColorFade_6; }
	inline void set_animColorFade_6(Animator_t69676727 * value)
	{
		___animColorFade_6 = value;
		Il2CppCodeGenWriteBarrier(&___animColorFade_6, value);
	}

	inline static int32_t get_offset_of_animMenuAlpha_7() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___animMenuAlpha_7)); }
	inline Animator_t69676727 * get_animMenuAlpha_7() const { return ___animMenuAlpha_7; }
	inline Animator_t69676727 ** get_address_of_animMenuAlpha_7() { return &___animMenuAlpha_7; }
	inline void set_animMenuAlpha_7(Animator_t69676727 * value)
	{
		___animMenuAlpha_7 = value;
		Il2CppCodeGenWriteBarrier(&___animMenuAlpha_7, value);
	}

	inline static int32_t get_offset_of_fadeColorAnimationClip_8() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___fadeColorAnimationClip_8)); }
	inline AnimationClip_t3510324950 * get_fadeColorAnimationClip_8() const { return ___fadeColorAnimationClip_8; }
	inline AnimationClip_t3510324950 ** get_address_of_fadeColorAnimationClip_8() { return &___fadeColorAnimationClip_8; }
	inline void set_fadeColorAnimationClip_8(AnimationClip_t3510324950 * value)
	{
		___fadeColorAnimationClip_8 = value;
		Il2CppCodeGenWriteBarrier(&___fadeColorAnimationClip_8, value);
	}

	inline static int32_t get_offset_of_fadeAlphaAnimationClip_9() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___fadeAlphaAnimationClip_9)); }
	inline AnimationClip_t3510324950 * get_fadeAlphaAnimationClip_9() const { return ___fadeAlphaAnimationClip_9; }
	inline AnimationClip_t3510324950 ** get_address_of_fadeAlphaAnimationClip_9() { return &___fadeAlphaAnimationClip_9; }
	inline void set_fadeAlphaAnimationClip_9(AnimationClip_t3510324950 * value)
	{
		___fadeAlphaAnimationClip_9 = value;
		Il2CppCodeGenWriteBarrier(&___fadeAlphaAnimationClip_9, value);
	}

	inline static int32_t get_offset_of_playMusic_10() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___playMusic_10)); }
	inline SoundManager_t654432262 * get_playMusic_10() const { return ___playMusic_10; }
	inline SoundManager_t654432262 ** get_address_of_playMusic_10() { return &___playMusic_10; }
	inline void set_playMusic_10(SoundManager_t654432262 * value)
	{
		___playMusic_10 = value;
		Il2CppCodeGenWriteBarrier(&___playMusic_10, value);
	}

	inline static int32_t get_offset_of_fastFadeIn_11() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___fastFadeIn_11)); }
	inline float get_fastFadeIn_11() const { return ___fastFadeIn_11; }
	inline float* get_address_of_fastFadeIn_11() { return &___fastFadeIn_11; }
	inline void set_fastFadeIn_11(float value)
	{
		___fastFadeIn_11 = value;
	}

	inline static int32_t get_offset_of_showPanels_12() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___showPanels_12)); }
	inline ShowButtons_t2634117638 * get_showPanels_12() const { return ___showPanels_12; }
	inline ShowButtons_t2634117638 ** get_address_of_showPanels_12() { return &___showPanels_12; }
	inline void set_showPanels_12(ShowButtons_t2634117638 * value)
	{
		___showPanels_12 = value;
		Il2CppCodeGenWriteBarrier(&___showPanels_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
