#include "save.h"

auto __thiscall FName_ToString_hook::trampoline(FName* name, FString* result) -> FString* {
    if (name->FNameEntryId < 0) name->FNameEntryId = 0;
    return instance()->hook_.original()(name, result);
}

inline auto __thiscall UDishonoredEngine_DisSave_hook::trampoline(UDishonoredEngine* engine, int slot) -> void {
    return; // disabled to prevent saving of any kind
    return instance()->hook_.original()(engine, slot);
}