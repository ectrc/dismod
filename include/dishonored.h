#ifndef DISMOD_DISHONORED_H
#define DISMOD_DISHONORED_H

#include "sdk.hpp"

struct FDisAIMonitorReaction;
struct FArkComponentBase;

struct IArkComponentPreAsyncWork
{
    void* vtable;
};

struct FArkComponentBase {
    void* vtable;
    int m_pOwner;
    unsigned int m_bStarted;
    unsigned int m_bPendingStop;
};

struct FResponseLogic_Base
{
    void* vtable;
    FDisAIMonitorReaction *m_pOwningMonitor;
    int m_iNumberOfTransgressions;
    const FTweakAIResponse *m_pAIResponseTweak;
    float m_fTransgressionTimer;
};

struct FDisAIMonitorReaction : FArkComponentBase, IArkComponentPreAsyncWork {
    UDishonoredAIBrain *m_pOwningBrain;
    FResponseLogic_Base *m_Responses[10];

    void static __thiscall Init(FDisAIMonitorReaction* me);
};

#endif