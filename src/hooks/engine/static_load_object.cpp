#include "static_load_object.h"

auto __cdecl UObject_StaticLoadObject_hook::trampoline(UClass* object_class, UObject* outer, const wchar_t* outer_name, const wchar_t* file_name, engine::load_flags load_flags, UPackageMap* sandbox, bool allow_object_reconciliation) -> UObject* {
  return instance()->hook_.original()(object_class, outer, outer_name, file_name, load_flags, sandbox, allow_object_reconciliation);
}
