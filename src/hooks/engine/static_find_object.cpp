#include "static_find_object.h"

auto __cdecl static_find_object_hook::trampoline(UClass* ObjectClass, UObject* InObjectPackage, const wchar_t* OrigInName, unsigned int ExactClass) -> UObject* {
  return instance()->hook_.original()(ObjectClass, InObjectPackage, OrigInName, ExactClass);
}
