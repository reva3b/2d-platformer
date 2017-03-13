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
// PlayerControl
struct PlayerControl_t792727354;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// PopMsgUP
struct PopMsgUP_t1508724349;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MessageAK
struct  MessageAK_t2699542663  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image MessageAK::Msg
	Image_t2042527209 * ___Msg_2;
	// UnityEngine.UI.Text MessageAK::Text
	Text_t356221433 * ___Text_3;
	// PlayerControl MessageAK::thePlayerControlManager
	PlayerControl_t792727354 * ___thePlayerControlManager_4;
	// UnityEngine.Rigidbody2D MessageAK::PlayerRigidBody
	Rigidbody2D_t502193897 * ___PlayerRigidBody_5;
	// PopMsgUP MessageAK::popMsg
	PopMsgUP_t1508724349 * ___popMsg_6;

public:
	inline static int32_t get_offset_of_Msg_2() { return static_cast<int32_t>(offsetof(MessageAK_t2699542663, ___Msg_2)); }
	inline Image_t2042527209 * get_Msg_2() const { return ___Msg_2; }
	inline Image_t2042527209 ** get_address_of_Msg_2() { return &___Msg_2; }
	inline void set_Msg_2(Image_t2042527209 * value)
	{
		___Msg_2 = value;
		Il2CppCodeGenWriteBarrier(&___Msg_2, value);
	}

	inline static int32_t get_offset_of_Text_3() { return static_cast<int32_t>(offsetof(MessageAK_t2699542663, ___Text_3)); }
	inline Text_t356221433 * get_Text_3() const { return ___Text_3; }
	inline Text_t356221433 ** get_address_of_Text_3() { return &___Text_3; }
	inline void set_Text_3(Text_t356221433 * value)
	{
		___Text_3 = value;
		Il2CppCodeGenWriteBarrier(&___Text_3, value);
	}

	inline static int32_t get_offset_of_thePlayerControlManager_4() { return static_cast<int32_t>(offsetof(MessageAK_t2699542663, ___thePlayerControlManager_4)); }
	inline PlayerControl_t792727354 * get_thePlayerControlManager_4() const { return ___thePlayerControlManager_4; }
	inline PlayerControl_t792727354 ** get_address_of_thePlayerControlManager_4() { return &___thePlayerControlManager_4; }
	inline void set_thePlayerControlManager_4(PlayerControl_t792727354 * value)
	{
		___thePlayerControlManager_4 = value;
		Il2CppCodeGenWriteBarrier(&___thePlayerControlManager_4, value);
	}

	inline static int32_t get_offset_of_PlayerRigidBody_5() { return static_cast<int32_t>(offsetof(MessageAK_t2699542663, ___PlayerRigidBody_5)); }
	inline Rigidbody2D_t502193897 * get_PlayerRigidBody_5() const { return ___PlayerRigidBody_5; }
	inline Rigidbody2D_t502193897 ** get_address_of_PlayerRigidBody_5() { return &___PlayerRigidBody_5; }
	inline void set_PlayerRigidBody_5(Rigidbody2D_t502193897 * value)
	{
		___PlayerRigidBody_5 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerRigidBody_5, value);
	}

	inline static int32_t get_offset_of_popMsg_6() { return static_cast<int32_t>(offsetof(MessageAK_t2699542663, ___popMsg_6)); }
	inline PopMsgUP_t1508724349 * get_popMsg_6() const { return ___popMsg_6; }
	inline PopMsgUP_t1508724349 ** get_address_of_popMsg_6() { return &___popMsg_6; }
	inline void set_popMsg_6(PopMsgUP_t1508724349 * value)
	{
		___popMsg_6 = value;
		Il2CppCodeGenWriteBarrier(&___popMsg_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
