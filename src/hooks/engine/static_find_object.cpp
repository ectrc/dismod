#include "static_find_object.h"

auto __cdecl UObject_StaticFindObject_hook::trampoline(UClass* ObjectClass, UObject* InObjectPackage, const wchar_t* OrigInName, unsigned int ExactClass) -> UObject* {
  return instance()->hook_.original()(ObjectClass, InObjectPackage, OrigInName, ExactClass);
}
