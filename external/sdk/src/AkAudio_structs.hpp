/*
#############################################################################################
# Dishonered (DishonoredSDK) SDK 1.4
# Generated with the CodeRedGenerator v1.1.5
# ========================================================================================= #
# File: AkAudio_structs.hpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless
# Links: www.github.com/CodeRedModding/CodeRed-Generator
#############################################################################################
*/
#pragma once

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/

// ScriptStruct AkAudio.AkComponent.AkPlayingRadius
// 0x0008
struct FAkPlayingRadius
{
	int32_t                                            m_PlayingID;                                   // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_Radius;                                      // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct AkAudio.InterpTrackAkEvent.AkEventTrackKey
// 0x000C
struct FAkEventTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	class UAkEvent*                                    Event;                                         // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UInterpTrackAkEventKeyProperties*            Properties;                                    // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
