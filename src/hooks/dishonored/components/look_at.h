#ifndef look_at_comp_h
#define look_at_comp_h

#include "hook.h"
#include "dishonored.h"

DEFINE_HOOK(
    look_at_comp,
    "55 8B EC 56 8B F1 83 7E ? 00 74 ? E8 ? ? ? ? 83 66 ? ? C7 46 ? 00 00 00 00 ? ? 00 00 00 00 C7 46 ? 00 00 00 00 8B 45",
    void,
    FDisLookAtRequest* comp,
    void* _rLookAtComponent,
    UObject* _rAsker,
    EDisLookAtPriority _Priority
);

inline auto __thiscall look_at_comp_hook::trampoline(FDisLookAtRequest* comp, void *_rLookAtComponent, UObject *_rAsker, EDisLookAtPriority _Priority) -> void {
    return look_at_comp_hook::instance()->hook_.original()(comp, _rLookAtComponent, _rAsker, _Priority);
}

#endif
