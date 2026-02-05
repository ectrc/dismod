#include "static_duplicate_object.h"

auto __cdecl static_duplicate_object_hook::trampoline(UObject *SourceObject, UObject *RootObject, UObject *DestOuter, const wchar_t *DestName, unsigned __int64 FlagMask, UClass *DestClass, unsigned int bMigrateArchetypes) -> UObject* {
#if LOG_SDO
    LOG("StaticDuplicateObject({}, {})", SourceObject != nullptr ? SourceObject->GetName() : "nullptr", DestOuter != nullptr ? DestOuter->GetName() : "nullptr");
#endif
    return static_duplicate_object_hook::instance()->hook_.original()(SourceObject, RootObject, DestOuter, DestName, FlagMask, DestClass, bMigrateArchetypes);
}