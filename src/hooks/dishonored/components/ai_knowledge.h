#ifndef add_ai_knowledge_to_component_manager_H
#define add_ai_knowledge_to_component_manager_H

#include "component_base.h"
#include "engine/engine.h"

DEFINE_HOOK(
    add_ai_knowledge_to_component_manager,
    "56 57 6A ? 6A ? 8B F9 E8 ? ? ? ? 33 F6 83 C4 ? 3B C6 74 ? 89 70",
    void*,
    UArkComponentContainer* comp
);

inline auto __thiscall add_ai_knowledge_to_component_manager_hook::trampoline(UArkComponentContainer* comp) -> void * {
    return add_ai_knowledge_to_component_manager_hook::instance()->hook_.original()(comp);
}

#endif