#ifndef DISMOD_DISHONORED_H
#define DISMOD_DISHONORED_H

#include "sdk.hpp"

struct FDisAIMonitorReaction;
struct FArkComponentBase;

struct IArkComponentPreAsyncWork
{
    FPointer IArkComponentPreAsyncWork_Vtable;
};

struct FArkComponentBase {
    FPointer FArkComponentBase_VTable;
    int m_pOwner;
    unsigned int m_bStarted;
    unsigned int m_bPendingStop;
};

struct FResponseLogic_Base
{
    FPointer FResponseLogic_Base_Vtable;
    FDisAIMonitorReaction *m_pOwningMonitor;
    int m_iNumberOfTransgressions;
    const FTweakAIResponse *m_pAIResponseTweak;
    float m_fTransgressionTimer;
};

struct FDisAIMonitorReaction : FArkComponentBase, IArkComponentPreAsyncWork {
    UDishonoredAIBrain *m_pOwningBrain;
    FResponseLogic_Base *m_Responses[10];
};

template<typename T>
struct FArkRequestManager
{
    uint8_t Data[0x24];
};

struct FFaceToRequestWorkData
{
    uint8_t Data[0x08];
};


enum class EArkCpntFaceToEvent : uint32_t
{
    None = 0,
};

struct FArkComponentFaceTo : FArkComponentBase, IArkComponentPreAsyncWork {
    const UArkComponentLocomotionConfig *m_pConfig;
    ADishonoredNPCPawn* m_pPawnOwner;
    uint32_t m_bInitialized : 1;
    uint32_t m_bNoTick : 1;
    uint32_t m_bInLOD : 1;
    uint32_t m_bRootMotion : 1;
    uint32_t m_bTurnControl : 1;
    uint32_t m_bDisableAngleUpdate : 1;
    uint32_t m_bForceBodySnapOnMovement : 1;
    uint32_t PaddingBits1 : 25;
    float m_fRotateSpeed;
    float m_fCurAngle;
    int32_t m_CurBodyYaw;
    int32_t m_CurBodyYawDelta;
    int32_t m_TargetYaw;
    FVector m_RealVelocity;
    FArkRequestManager<int> m_ReqMgr;
    FFaceToRequestWorkData m_CurReqWorkData;
    EArkCpntFaceToEvent m_DebugLastFaceToEventSent;
    uint32_t m_bDebugLastFaceToEventDisplayed : 1;
    uint32_t m_bDebugHadInstantRequest : 1;
    uint32_t m_bDebugHadInstantRequestDisplayed : 1;
    uint32_t PaddingBits2 : 29;
    UArkAnimNodeLocomotion* m_pAnimNodeLoco;
};

#endif