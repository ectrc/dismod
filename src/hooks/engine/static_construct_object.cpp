#include "static_construct_object.h"

auto __cdecl UObject_StaticConstructObject_hook::trampoline(UClass* object_class, UObject* outer, FName name, DWORD object_flags, UObject* template_, void* error, UObject* sub_object_root, void* graph, int a1, int a2) -> UObject* {
#if LOG_SCO
  LOG("StaticConstructObject({}, {} {})",
    object_class != nullptr ? object_class->GetFullName() : "nullptr",
    outer != nullptr ? outer->GetFullName() : "nullptr",
    name.ToString()
  );
#endif

  return instance()->hook_.original()(object_class, outer, name, object_flags, template_, error, sub_object_root, graph, a1, a2);
}
