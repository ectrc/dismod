/*
#############################################################################################
# Dishonered (DishonoredSDK) SDK 1.4
# Generated with the CodeRedGenerator v1.1.5
# ========================================================================================= #
# File: DishonoredGame_classes.cpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless
# Links: www.github.com/CodeRedModding/CodeRed-Generator
#############################################################################################
*/
#include "../include/sdk.hpp"

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function DishonoredGame.DisCrusher.EncroachingOn
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[314])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  Other                          (CPF_Parm)

bool ADisCrusher::eventEncroachingOn(class AActor* Other)
{
	static UFunction* uFnEncroachingOn = nullptr;

	if (!uFnEncroachingOn)
	{
		uFnEncroachingOn = UFunction::FindFunction("Function DishonoredGame.DisCrusher.EncroachingOn");
	}

	ADisCrusher_eventEncroachingOn_Params EncroachingOn_Params;
	memset(&EncroachingOn_Params, 0, sizeof(EncroachingOn_Params));
	EncroachingOn_Params.Other = Other;

	this->ProcessEvent(uFnEncroachingOn, &EncroachingOn_Params, nullptr);

	return EncroachingOn_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredAutoTestManager.DoSentinel_PerfAtSpecificLocation
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[19128])
// Parameter Info:
// struct FVector                 InLocation                     (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FRotator                InRotation                     (CPF_Const | CPF_Parm | CPF_OutParm)

void ADishonoredAutoTestManager::DoSentinel_PerfAtSpecificLocation(struct FVector& InLocation, struct FRotator& InRotation)
{
	static UFunction* uFnDoSentinel_PerfAtSpecificLocation = nullptr;

	if (!uFnDoSentinel_PerfAtSpecificLocation)
	{
		uFnDoSentinel_PerfAtSpecificLocation = UFunction::FindFunction("Function DishonoredGame.DishonoredAutoTestManager.DoSentinel_PerfAtSpecificLocation");
	}

	ADishonoredAutoTestManager_execDoSentinel_PerfAtSpecificLocation_Params DoSentinel_PerfAtSpecificLocation_Params;
	memset(&DoSentinel_PerfAtSpecificLocation_Params, 0, sizeof(DoSentinel_PerfAtSpecificLocation_Params));
	memcpy_s(&DoSentinel_PerfAtSpecificLocation_Params.InLocation, sizeof(DoSentinel_PerfAtSpecificLocation_Params.InLocation), &InLocation, sizeof(InLocation));
	memcpy_s(&DoSentinel_PerfAtSpecificLocation_Params.InRotation, sizeof(DoSentinel_PerfAtSpecificLocation_Params.InRotation), &InRotation, sizeof(InRotation));

	this->ProcessEvent(uFnDoSentinel_PerfAtSpecificLocation, &DoSentinel_PerfAtSpecificLocation_Params, nullptr);

	memcpy_s(&InLocation, sizeof(InLocation), &DoSentinel_PerfAtSpecificLocation_Params.InLocation, sizeof(DoSentinel_PerfAtSpecificLocation_Params.InLocation));
	memcpy_s(&InRotation, sizeof(InRotation), &DoSentinel_PerfAtSpecificLocation_Params.InRotation, sizeof(DoSentinel_PerfAtSpecificLocation_Params.InRotation));
};

// Function DishonoredGame.DishonoredAutoTestManager.DoSentinel_MemoryAtSpecificLocation
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[19127])
// Parameter Info:
// struct FVector                 InLocation                     (CPF_Const | CPF_Parm)
// struct FRotator                InRotation                     (CPF_Const | CPF_Parm)

void ADishonoredAutoTestManager::DoSentinel_MemoryAtSpecificLocation(const struct FVector& InLocation, const struct FRotator& InRotation)
{
	static UFunction* uFnDoSentinel_MemoryAtSpecificLocation = nullptr;

	if (!uFnDoSentinel_MemoryAtSpecificLocation)
	{
		uFnDoSentinel_MemoryAtSpecificLocation = UFunction::FindFunction("Function DishonoredGame.DishonoredAutoTestManager.DoSentinel_MemoryAtSpecificLocation");
	}

	ADishonoredAutoTestManager_execDoSentinel_MemoryAtSpecificLocation_Params DoSentinel_MemoryAtSpecificLocation_Params;
	memset(&DoSentinel_MemoryAtSpecificLocation_Params, 0, sizeof(DoSentinel_MemoryAtSpecificLocation_Params));
	memcpy_s(&DoSentinel_MemoryAtSpecificLocation_Params.InLocation, sizeof(DoSentinel_MemoryAtSpecificLocation_Params.InLocation), &InLocation, sizeof(InLocation));
	memcpy_s(&DoSentinel_MemoryAtSpecificLocation_Params.InRotation, sizeof(DoSentinel_MemoryAtSpecificLocation_Params.InRotation), &InRotation, sizeof(InRotation));

	this->ProcessEvent(uFnDoSentinel_MemoryAtSpecificLocation, &DoSentinel_MemoryAtSpecificLocation_Params, nullptr);
};

// Function DishonoredGame.DishonoredAutoTestManager.GetTravelLocations
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[20796])
// Parameter Info:
// class FName                    LevelName                      (CPF_Parm)
// class APlayerController*       PC                             (CPF_Parm)
// class TArray<struct FVector>   TravelPoints                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void ADishonoredAutoTestManager::GetTravelLocations(const class FName& LevelName, class APlayerController* PC, class TArray<struct FVector>& TravelPoints)
{
	static UFunction* uFnGetTravelLocations = nullptr;

	if (!uFnGetTravelLocations)
	{
		uFnGetTravelLocations = UFunction::FindFunction("Function DishonoredGame.DishonoredAutoTestManager.GetTravelLocations");
	}

	ADishonoredAutoTestManager_execGetTravelLocations_Params GetTravelLocations_Params;
	memset(&GetTravelLocations_Params, 0, sizeof(GetTravelLocations_Params));
	memcpy_s(&GetTravelLocations_Params.LevelName, sizeof(GetTravelLocations_Params.LevelName), &LevelName, sizeof(LevelName));
	GetTravelLocations_Params.PC = PC;
	memcpy_s(&GetTravelLocations_Params.TravelPoints, sizeof(GetTravelLocations_Params.TravelPoints), &TravelPoints, sizeof(TravelPoints));

	this->ProcessEvent(uFnGetTravelLocations, &GetTravelLocations_Params, nullptr);

	memcpy_s(&TravelPoints, sizeof(TravelPoints), &GetTravelLocations_Params.TravelPoints, sizeof(GetTravelLocations_Params.TravelPoints));
};

// Function DishonoredGame.DishonoredAutoTestManager.DoSentinelActionBeforeExit_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[19130])
// Parameter Info:

void ADishonoredAutoTestManager::DoSentinelActionBeforeExit_Native()
{
	static UFunction* uFnDoSentinelActionBeforeExit_Native = nullptr;

	if (!uFnDoSentinelActionBeforeExit_Native)
	{
		uFnDoSentinelActionBeforeExit_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredAutoTestManager.DoSentinelActionBeforeExit_Native");
	}

	ADishonoredAutoTestManager_execDoSentinelActionBeforeExit_Native_Params DoSentinelActionBeforeExit_Native_Params;
	memset(&DoSentinelActionBeforeExit_Native_Params, 0, sizeof(DoSentinelActionBeforeExit_Native_Params));

	this->ProcessEvent(uFnDoSentinelActionBeforeExit_Native, &DoSentinelActionBeforeExit_Native_Params, nullptr);
};

// Function DishonoredGame.DishonoredAutoTestManager.DoSentinelActionPerLoadedLevel_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[19131])
// Parameter Info:

void ADishonoredAutoTestManager::DoSentinelActionPerLoadedLevel_Native()
{
	static UFunction* uFnDoSentinelActionPerLoadedLevel_Native = nullptr;

	if (!uFnDoSentinelActionPerLoadedLevel_Native)
	{
		uFnDoSentinelActionPerLoadedLevel_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredAutoTestManager.DoSentinelActionPerLoadedLevel_Native");
	}

	ADishonoredAutoTestManager_execDoSentinelActionPerLoadedLevel_Native_Params DoSentinelActionPerLoadedLevel_Native_Params;
	memset(&DoSentinelActionPerLoadedLevel_Native_Params, 0, sizeof(DoSentinelActionPerLoadedLevel_Native_Params));

	this->ProcessEvent(uFnDoSentinelActionPerLoadedLevel_Native, &DoSentinelActionPerLoadedLevel_Native_Params, nullptr);
};

// Function DishonoredGame.DishonoredAutoTestManager.DoSentinelActionPerLoadedMap
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[19132])
// Parameter Info:

void ADishonoredAutoTestManager::DoSentinelActionPerLoadedMap()
{
	static UFunction* uFnDoSentinelActionPerLoadedMap = nullptr;

	if (!uFnDoSentinelActionPerLoadedMap)
	{
		uFnDoSentinelActionPerLoadedMap = UFunction::FindFunction("Function DishonoredGame.DishonoredAutoTestManager.DoSentinelActionPerLoadedMap");
	}

	ADishonoredAutoTestManager_execDoSentinelActionPerLoadedMap_Params DoSentinelActionPerLoadedMap_Params;
	memset(&DoSentinelActionPerLoadedMap_Params, 0, sizeof(DoSentinelActionPerLoadedMap_Params));

	this->ProcessEvent(uFnDoSentinelActionPerLoadedMap, &DoSentinelActionPerLoadedMap_Params, nullptr);
};

// Function DishonoredGame.DishonoredAutoTestManager.EndSentinelRun
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[19576])
// Parameter Info:
// EAutomatedRunResult            RunResult                      (CPF_Parm)

void ADishonoredAutoTestManager::EndSentinelRun(EAutomatedRunResult RunResult)
{
	static UFunction* uFnEndSentinelRun = nullptr;

	if (!uFnEndSentinelRun)
	{
		uFnEndSentinelRun = UFunction::FindFunction("Function DishonoredGame.DishonoredAutoTestManager.EndSentinelRun");
	}

	ADishonoredAutoTestManager_execEndSentinelRun_Params EndSentinelRun_Params;
	memset(&EndSentinelRun_Params, 0, sizeof(EndSentinelRun_Params));
	memcpy_s(&EndSentinelRun_Params.RunResult, sizeof(EndSentinelRun_Params.RunResult), &RunResult, sizeof(RunResult));

	this->ProcessEvent(uFnEndSentinelRun, &EndSentinelRun_Params, nullptr);
};

// Function DishonoredGame.DishonoredAutoTestManager.BeginSentinelRun
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[16240])
// Parameter Info:
// class FString                  TaskDescription                (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
// class FString                  TaskParameter                  (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
// class FString                  TagDesc                        (CPF_Const | CPF_Parm | CPF_NeedCtorLink)

void ADishonoredAutoTestManager::BeginSentinelRun(const class FString& TaskDescription, const class FString& TaskParameter, const class FString& TagDesc)
{
	static UFunction* uFnBeginSentinelRun = nullptr;

	if (!uFnBeginSentinelRun)
	{
		uFnBeginSentinelRun = UFunction::FindFunction("Function DishonoredGame.DishonoredAutoTestManager.BeginSentinelRun");
	}

	ADishonoredAutoTestManager_execBeginSentinelRun_Params BeginSentinelRun_Params;
	memset(&BeginSentinelRun_Params, 0, sizeof(BeginSentinelRun_Params));
	memcpy_s(&BeginSentinelRun_Params.TaskDescription, sizeof(BeginSentinelRun_Params.TaskDescription), &TaskDescription, sizeof(TaskDescription));
	memcpy_s(&BeginSentinelRun_Params.TaskParameter, sizeof(BeginSentinelRun_Params.TaskParameter), &TaskParameter, sizeof(TaskParameter));
	memcpy_s(&BeginSentinelRun_Params.TagDesc, sizeof(BeginSentinelRun_Params.TagDesc), &TagDesc, sizeof(TagDesc));

	this->ProcessEvent(uFnBeginSentinelRun, &BeginSentinelRun_Params, nullptr);
};

// Function DishonoredGame.DishonoredDebugMenu.ToggleDebugMenu
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45370])
// Parameter Info:
// class FString                  _PageName                      (CPF_Parm | CPF_NeedCtorLink)

void UDishonoredDebugMenu::ToggleDebugMenu(const class FString& _PageName)
{
	static UFunction* uFnToggleDebugMenu = nullptr;

	if (!uFnToggleDebugMenu)
	{
		uFnToggleDebugMenu = UFunction::FindFunction("Function DishonoredGame.DishonoredDebugMenu.ToggleDebugMenu");
	}

	UDishonoredDebugMenu_execToggleDebugMenu_Params ToggleDebugMenu_Params;
	memset(&ToggleDebugMenu_Params, 0, sizeof(ToggleDebugMenu_Params));
	memcpy_s(&ToggleDebugMenu_Params._PageName, sizeof(ToggleDebugMenu_Params._PageName), &_PageName, sizeof(_PageName));

	this->ProcessEvent(uFnToggleDebugMenu, &ToggleDebugMenu_Params, nullptr);
};

// Function DishonoredGame.DishonoredDebugMenu.LoadMenu
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35768])
// Parameter Info:
// class FString                  _PageName                      (CPF_Parm | CPF_NeedCtorLink)

void UDishonoredDebugMenu::LoadMenu(const class FString& _PageName)
{
	static UFunction* uFnLoadMenu = nullptr;

	if (!uFnLoadMenu)
	{
		uFnLoadMenu = UFunction::FindFunction("Function DishonoredGame.DishonoredDebugMenu.LoadMenu");
	}

	UDishonoredDebugMenu_execLoadMenu_Params LoadMenu_Params;
	memset(&LoadMenu_Params, 0, sizeof(LoadMenu_Params));
	memcpy_s(&LoadMenu_Params._PageName, sizeof(LoadMenu_Params._PageName), &_PageName, sizeof(_PageName));

	this->ProcessEvent(uFnLoadMenu, &LoadMenu_Params, nullptr);
};

// Function DishonoredGame.DishonoredDebugMenu.HideMenu
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35463])
// Parameter Info:

void UDishonoredDebugMenu::HideMenu()
{
	static UFunction* uFnHideMenu = nullptr;

	if (!uFnHideMenu)
	{
		uFnHideMenu = UFunction::FindFunction("Function DishonoredGame.DishonoredDebugMenu.HideMenu");
	}

	UDishonoredDebugMenu_execHideMenu_Params HideMenu_Params;
	memset(&HideMenu_Params, 0, sizeof(HideMenu_Params));

	this->ProcessEvent(uFnHideMenu, &HideMenu_Params, nullptr);
};

// Function DishonoredGame.DishonoredEmitterPool.SpawnEmitterMeshAttachment
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[26099])
// Parameter Info:
// class UParticleSystemComponent* ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
// class UParticleSystem*         _pEmitterTemplate              (CPF_Parm)
// class USkeletalMeshComponent*  _pMesh                         (CPF_Parm | CPF_EditInline)
// class FName                    _AttachPointName               (CPF_Parm)
// uint32_t                       _bAttachToSocket               (CPF_OptionalParm | CPF_Parm)
// struct FVector                 _RelativeLoc                   (CPF_OptionalParm | CPF_Parm)
// struct FRotator                _RelativeRot                   (CPF_OptionalParm | CPF_Parm)

class UParticleSystemComponent* ADishonoredEmitterPool::SpawnEmitterMeshAttachment(class UParticleSystem* _pEmitterTemplate, class USkeletalMeshComponent* _pMesh, const class FName& _AttachPointName, bool _bAttachToSocket, const struct FVector& _RelativeLoc, const struct FRotator& _RelativeRot)
{
	static UFunction* uFnSpawnEmitterMeshAttachment = nullptr;

	if (!uFnSpawnEmitterMeshAttachment)
	{
		uFnSpawnEmitterMeshAttachment = UFunction::FindFunction("Function DishonoredGame.DishonoredEmitterPool.SpawnEmitterMeshAttachment");
	}

	ADishonoredEmitterPool_execSpawnEmitterMeshAttachment_Params SpawnEmitterMeshAttachment_Params;
	memset(&SpawnEmitterMeshAttachment_Params, 0, sizeof(SpawnEmitterMeshAttachment_Params));
	SpawnEmitterMeshAttachment_Params._pEmitterTemplate = _pEmitterTemplate;
	SpawnEmitterMeshAttachment_Params._pMesh = _pMesh;
	memcpy_s(&SpawnEmitterMeshAttachment_Params._AttachPointName, sizeof(SpawnEmitterMeshAttachment_Params._AttachPointName), &_AttachPointName, sizeof(_AttachPointName));
	SpawnEmitterMeshAttachment_Params._bAttachToSocket = _bAttachToSocket;
	memcpy_s(&SpawnEmitterMeshAttachment_Params._RelativeLoc, sizeof(SpawnEmitterMeshAttachment_Params._RelativeLoc), &_RelativeLoc, sizeof(_RelativeLoc));
	memcpy_s(&SpawnEmitterMeshAttachment_Params._RelativeRot, sizeof(SpawnEmitterMeshAttachment_Params._RelativeRot), &_RelativeRot, sizeof(_RelativeRot));

	this->ProcessEvent(uFnSpawnEmitterMeshAttachment, &SpawnEmitterMeshAttachment_Params, nullptr);

	return SpawnEmitterMeshAttachment_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredEmitterPool.SpawnEmitter
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[26097])
// Parameter Info:
// class UParticleSystemComponent* ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
// class UParticleSystem*         _pEmitterTemplate              (CPF_Parm)
// struct FVector                 _SpawnLocation                 (CPF_Parm)
// struct FRotator                _SpawnRotation                 (CPF_OptionalParm | CPF_Parm)
// class AActor*                  _pAttachToActor                (CPF_OptionalParm | CPF_Parm)
// uint32_t                       _bInheritScaleFromBase         (CPF_OptionalParm | CPF_Parm)

class UParticleSystemComponent* ADishonoredEmitterPool::SpawnEmitter(class UParticleSystem* _pEmitterTemplate, const struct FVector& _SpawnLocation, const struct FRotator& _SpawnRotation, class AActor* _pAttachToActor, bool _bInheritScaleFromBase)
{
	static UFunction* uFnSpawnEmitter = nullptr;

	if (!uFnSpawnEmitter)
	{
		uFnSpawnEmitter = UFunction::FindFunction("Function DishonoredGame.DishonoredEmitterPool.SpawnEmitter");
	}

	ADishonoredEmitterPool_execSpawnEmitter_Params SpawnEmitter_Params;
	memset(&SpawnEmitter_Params, 0, sizeof(SpawnEmitter_Params));
	SpawnEmitter_Params._pEmitterTemplate = _pEmitterTemplate;
	memcpy_s(&SpawnEmitter_Params._SpawnLocation, sizeof(SpawnEmitter_Params._SpawnLocation), &_SpawnLocation, sizeof(_SpawnLocation));
	memcpy_s(&SpawnEmitter_Params._SpawnRotation, sizeof(SpawnEmitter_Params._SpawnRotation), &_SpawnRotation, sizeof(_SpawnRotation));
	SpawnEmitter_Params._pAttachToActor = _pAttachToActor;
	SpawnEmitter_Params._bInheritScaleFromBase = _bInheritScaleFromBase;

	this->ProcessEvent(uFnSpawnEmitter, &SpawnEmitter_Params, nullptr);

	return SpawnEmitter_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredEngine.PublishRichPresence
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44609])
// Parameter Info:

void UDishonoredEngine::PublishRichPresence()
{
	static UFunction* uFnPublishRichPresence = nullptr;

	if (!uFnPublishRichPresence)
	{
		uFnPublishRichPresence = UFunction::FindFunction("Function DishonoredGame.DishonoredEngine.PublishRichPresence");
	}

	UDishonoredEngine_execPublishRichPresence_Params PublishRichPresence_Params;
	memset(&PublishRichPresence_Params, 0, sizeof(PublishRichPresence_Params));

	this->ProcessEvent(uFnPublishRichPresence, &PublishRichPresence_Params, nullptr);
};

// Function DishonoredGame.DishonoredEngine.UpdateRichPresenceChaos
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45648])
// Parameter Info:
// int32_t                        nCurrentRichPresenceChaos      (CPF_Parm)

void UDishonoredEngine::UpdateRichPresenceChaos(int32_t nCurrentRichPresenceChaos)
{
	static UFunction* uFnUpdateRichPresenceChaos = nullptr;

	if (!uFnUpdateRichPresenceChaos)
	{
		uFnUpdateRichPresenceChaos = UFunction::FindFunction("Function DishonoredGame.DishonoredEngine.UpdateRichPresenceChaos");
	}

	UDishonoredEngine_execUpdateRichPresenceChaos_Params UpdateRichPresenceChaos_Params;
	memset(&UpdateRichPresenceChaos_Params, 0, sizeof(UpdateRichPresenceChaos_Params));
	memcpy_s(&UpdateRichPresenceChaos_Params.nCurrentRichPresenceChaos, sizeof(UpdateRichPresenceChaos_Params.nCurrentRichPresenceChaos), &nCurrentRichPresenceChaos, sizeof(nCurrentRichPresenceChaos));

	this->ProcessEvent(uFnUpdateRichPresenceChaos, &UpdateRichPresenceChaos_Params, nullptr);
};

// Function DishonoredGame.DishonoredEngine.UpdateRichPresenceChapter
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45649])
// Parameter Info:
// int32_t                        nCurrentRichPresenceChapter    (CPF_Parm)

void UDishonoredEngine::UpdateRichPresenceChapter(int32_t nCurrentRichPresenceChapter)
{
	static UFunction* uFnUpdateRichPresenceChapter = nullptr;

	if (!uFnUpdateRichPresenceChapter)
	{
		uFnUpdateRichPresenceChapter = UFunction::FindFunction("Function DishonoredGame.DishonoredEngine.UpdateRichPresenceChapter");
	}

	UDishonoredEngine_execUpdateRichPresenceChapter_Params UpdateRichPresenceChapter_Params;
	memset(&UpdateRichPresenceChapter_Params, 0, sizeof(UpdateRichPresenceChapter_Params));
	memcpy_s(&UpdateRichPresenceChapter_Params.nCurrentRichPresenceChapter, sizeof(UpdateRichPresenceChapter_Params.nCurrentRichPresenceChapter), &nCurrentRichPresenceChapter, sizeof(nCurrentRichPresenceChapter));

	this->ProcessEvent(uFnUpdateRichPresenceChapter, &UpdateRichPresenceChapter_Params, nullptr);
};

// Function DishonoredGame.DishonoredEngine.OpenContentUnavailableMenu
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[27392])
// Parameter Info:

void UDishonoredEngine::OpenContentUnavailableMenu()
{
	static UFunction* uFnOpenContentUnavailableMenu = nullptr;

	if (!uFnOpenContentUnavailableMenu)
	{
		uFnOpenContentUnavailableMenu = UFunction::FindFunction("Function DishonoredGame.DishonoredEngine.OpenContentUnavailableMenu");
	}

	UDishonoredEngine_execOpenContentUnavailableMenu_Params OpenContentUnavailableMenu_Params;
	memset(&OpenContentUnavailableMenu_Params, 0, sizeof(OpenContentUnavailableMenu_Params));

	this->ProcessEvent(uFnOpenContentUnavailableMenu, &OpenContentUnavailableMenu_Params, nullptr);
};

// Function DishonoredGame.DishonoredEngine.OpenControllerConnectionMenu
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[23688])
// Parameter Info:

void UDishonoredEngine::OpenControllerConnectionMenu()
{
	static UFunction* uFnOpenControllerConnectionMenu = nullptr;

	if (!uFnOpenControllerConnectionMenu)
	{
		uFnOpenControllerConnectionMenu = UFunction::FindFunction("Function DishonoredGame.DishonoredEngine.OpenControllerConnectionMenu");
	}

	UDishonoredEngine_execOpenControllerConnectionMenu_Params OpenControllerConnectionMenu_Params;
	memset(&OpenControllerConnectionMenu_Params, 0, sizeof(OpenControllerConnectionMenu_Params));

	this->ProcessEvent(uFnOpenControllerConnectionMenu, &OpenControllerConnectionMenu_Params, nullptr);
};

// Function DishonoredGame.DishonoredEngine.OnControllerDisconnected
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[23582])
// Parameter Info:
// int32_t                        ControllerId                   (CPF_Parm)

void UDishonoredEngine::OnControllerDisconnected(int32_t ControllerId)
{
	static UFunction* uFnOnControllerDisconnected = nullptr;

	if (!uFnOnControllerDisconnected)
	{
		uFnOnControllerDisconnected = UFunction::FindFunction("Function DishonoredGame.DishonoredEngine.OnControllerDisconnected");
	}

	UDishonoredEngine_execOnControllerDisconnected_Params OnControllerDisconnected_Params;
	memset(&OnControllerDisconnected_Params, 0, sizeof(OnControllerDisconnected_Params));
	memcpy_s(&OnControllerDisconnected_Params.ControllerId, sizeof(OnControllerDisconnected_Params.ControllerId), &ControllerId, sizeof(ControllerId));

	this->ProcessEvent(uFnOnControllerDisconnected, &OnControllerDisconnected_Params, nullptr);
};

// Function DishonoredGame.DishonoredEngine.OnControllerChanged
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[23581])
// Parameter Info:
// uint32_t                       bIsConnected                   (CPF_Parm)

void UDishonoredEngine::OnControllerChanged(bool bIsConnected)
{
	static UFunction* uFnOnControllerChanged = nullptr;

	if (!uFnOnControllerChanged)
	{
		uFnOnControllerChanged = UFunction::FindFunction("Function DishonoredGame.DishonoredEngine.OnControllerChanged");
	}

	UDishonoredEngine_execOnControllerChanged_Params OnControllerChanged_Params;
	memset(&OnControllerChanged_Params, 0, sizeof(OnControllerChanged_Params));
	OnControllerChanged_Params.bIsConnected = bIsConnected;

	this->ProcessEvent(uFnOnControllerChanged, &OnControllerChanged_Params, nullptr);
};

// Function DishonoredGame.DishonoredEngine.OpenPauseMenu
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[23691])
// Parameter Info:

void UDishonoredEngine::OpenPauseMenu()
{
	static UFunction* uFnOpenPauseMenu = nullptr;

	if (!uFnOpenPauseMenu)
	{
		uFnOpenPauseMenu = UFunction::FindFunction("Function DishonoredGame.DishonoredEngine.OpenPauseMenu");
	}

	UDishonoredEngine_execOpenPauseMenu_Params OpenPauseMenu_Params;
	memset(&OpenPauseMenu_Params, 0, sizeof(OpenPauseMenu_Params));

	this->ProcessEvent(uFnOpenPauseMenu, &OpenPauseMenu_Params, nullptr);
};

// Function DishonoredGame.DishonoredEngine.PlayLoadMapMovie
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[24342])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  _MapName                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  _MovieName                     (CPF_Parm | CPF_NeedCtorLink)

bool UDishonoredEngine::PlayLoadMapMovie(const class FString& _MapName, const class FString& _MovieName)
{
	static UFunction* uFnPlayLoadMapMovie = nullptr;

	if (!uFnPlayLoadMapMovie)
	{
		uFnPlayLoadMapMovie = UFunction::FindFunction("Function DishonoredGame.DishonoredEngine.PlayLoadMapMovie");
	}

	UDishonoredEngine_execPlayLoadMapMovie_Params PlayLoadMapMovie_Params;
	memset(&PlayLoadMapMovie_Params, 0, sizeof(PlayLoadMapMovie_Params));
	memcpy_s(&PlayLoadMapMovie_Params._MapName, sizeof(PlayLoadMapMovie_Params._MapName), &_MapName, sizeof(_MapName));
	memcpy_s(&PlayLoadMapMovie_Params._MovieName, sizeof(PlayLoadMapMovie_Params._MovieName), &_MovieName, sizeof(_MovieName));

	this->ProcessEvent(uFnPlayLoadMapMovie, &PlayLoadMapMovie_Params, nullptr);

	return PlayLoadMapMovie_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredEngine.PopIgnoreAutosave
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44351])
// Parameter Info:
// EDisIgnoreAutosaveType         _Type                          (CPF_Parm)

void UDishonoredEngine::PopIgnoreAutosave(EDisIgnoreAutosaveType _Type)
{
	static UFunction* uFnPopIgnoreAutosave = nullptr;

	if (!uFnPopIgnoreAutosave)
	{
		uFnPopIgnoreAutosave = UFunction::FindFunction("Function DishonoredGame.DishonoredEngine.PopIgnoreAutosave");
	}

	UDishonoredEngine_execPopIgnoreAutosave_Params PopIgnoreAutosave_Params;
	memset(&PopIgnoreAutosave_Params, 0, sizeof(PopIgnoreAutosave_Params));
	memcpy_s(&PopIgnoreAutosave_Params._Type, sizeof(PopIgnoreAutosave_Params._Type), &_Type, sizeof(_Type));

	this->ProcessEvent(uFnPopIgnoreAutosave, &PopIgnoreAutosave_Params, nullptr);
};

// Function DishonoredGame.DishonoredEngine.PushIgnoreAutosave
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44618])
// Parameter Info:
// EDisIgnoreAutosaveType         _Type                          (CPF_Parm)

void UDishonoredEngine::PushIgnoreAutosave(EDisIgnoreAutosaveType _Type)
{
	static UFunction* uFnPushIgnoreAutosave = nullptr;

	if (!uFnPushIgnoreAutosave)
	{
		uFnPushIgnoreAutosave = UFunction::FindFunction("Function DishonoredGame.DishonoredEngine.PushIgnoreAutosave");
	}

	UDishonoredEngine_execPushIgnoreAutosave_Params PushIgnoreAutosave_Params;
	memset(&PushIgnoreAutosave_Params, 0, sizeof(PushIgnoreAutosave_Params));
	memcpy_s(&PushIgnoreAutosave_Params._Type, sizeof(PushIgnoreAutosave_Params._Type), &_Type, sizeof(_Type));

	this->ProcessEvent(uFnPushIgnoreAutosave, &PushIgnoreAutosave_Params, nullptr);
};

// Function DishonoredGame.DishonoredEngine.PopDisableSave
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[44350])
// Parameter Info:
// EDisDisableSaveType            _DisableSaveType               (CPF_Parm)
// float                          _fWaitToEnable                 (CPF_OptionalParm | CPF_Parm)

void UDishonoredEngine::PopDisableSave(EDisDisableSaveType _DisableSaveType, float _fWaitToEnable)
{
	static UFunction* uFnPopDisableSave = nullptr;

	if (!uFnPopDisableSave)
	{
		uFnPopDisableSave = UFunction::FindFunction("Function DishonoredGame.DishonoredEngine.PopDisableSave");
	}

	UDishonoredEngine_execPopDisableSave_Params PopDisableSave_Params;
	memset(&PopDisableSave_Params, 0, sizeof(PopDisableSave_Params));
	memcpy_s(&PopDisableSave_Params._DisableSaveType, sizeof(PopDisableSave_Params._DisableSaveType), &_DisableSaveType, sizeof(_DisableSaveType));
	memcpy_s(&PopDisableSave_Params._fWaitToEnable, sizeof(PopDisableSave_Params._fWaitToEnable), &_fWaitToEnable, sizeof(_fWaitToEnable));

	this->ProcessEvent(uFnPopDisableSave, &PopDisableSave_Params, nullptr);
};

// Function DishonoredGame.DishonoredEngine.PushDisableSave
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44617])
// Parameter Info:
// EDisDisableSaveType            _DisableSaveType               (CPF_Parm)

void UDishonoredEngine::PushDisableSave(EDisDisableSaveType _DisableSaveType)
{
	static UFunction* uFnPushDisableSave = nullptr;

	if (!uFnPushDisableSave)
	{
		uFnPushDisableSave = UFunction::FindFunction("Function DishonoredGame.DishonoredEngine.PushDisableSave");
	}

	UDishonoredEngine_execPushDisableSave_Params PushDisableSave_Params;
	memset(&PushDisableSave_Params, 0, sizeof(PushDisableSave_Params));
	memcpy_s(&PushDisableSave_Params._DisableSaveType, sizeof(PushDisableSave_Params._DisableSaveType), &_DisableSaveType, sizeof(_DisableSaveType));

	this->ProcessEvent(uFnPushDisableSave, &PushDisableSave_Params, nullptr);
};

// Function DishonoredGame.DishonoredEngine.Dis_Load
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31664])
// Parameter Info:
// int32_t                        _Slot                          (CPF_Parm)

void UDishonoredEngine::Dis_Load(int32_t _Slot)
{
	static UFunction* uFnDis_Load = nullptr;

	if (!uFnDis_Load)
	{
		uFnDis_Load = UFunction::FindFunction("Function DishonoredGame.DishonoredEngine.Dis_Load");
	}

	UDishonoredEngine_execDis_Load_Params Dis_Load_Params;
	memset(&Dis_Load_Params, 0, sizeof(Dis_Load_Params));
	memcpy_s(&Dis_Load_Params._Slot, sizeof(Dis_Load_Params._Slot), &_Slot, sizeof(_Slot));

	this->ProcessEvent(uFnDis_Load, &Dis_Load_Params, nullptr);
};

// Function DishonoredGame.DishonoredEngine.Dis_Save
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31673])
// Parameter Info:
// int32_t                        _Slot                          (CPF_Parm)

void UDishonoredEngine::Dis_Save(int32_t _Slot)
{
	static UFunction* uFnDis_Save = nullptr;

	if (!uFnDis_Save)
	{
		uFnDis_Save = UFunction::FindFunction("Function DishonoredGame.DishonoredEngine.Dis_Save");
	}

	UDishonoredEngine_execDis_Save_Params Dis_Save_Params;
	memset(&Dis_Save_Params, 0, sizeof(Dis_Save_Params));
	memcpy_s(&Dis_Save_Params._Slot, sizeof(Dis_Save_Params._Slot), &_Slot, sizeof(_Slot));

	this->ProcessEvent(uFnDis_Save, &Dis_Save_Params, nullptr);
};

// Function DishonoredGame.DishonoredGameInfo.PreventDeath
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   _pKilledPawn                   (CPF_Parm)
// class AController*             _pKiller                       (CPF_Parm)
// class UClass*                  _pDamageType                   (CPF_Parm)
// struct FVector                 _HitLocation                   (CPF_Parm)

bool ADishonoredGameInfo::eventPreventDeath(class APawn* _pKilledPawn, class AController* _pKiller, class UClass* _pDamageType, const struct FVector& _HitLocation)
{
	static UFunction* uFnPreventDeath = nullptr;

	if (!uFnPreventDeath)
	{
		uFnPreventDeath = UFunction::FindFunction("Function DishonoredGame.DishonoredGameInfo.PreventDeath");
	}

	ADishonoredGameInfo_eventPreventDeath_Params PreventDeath_Params;
	memset(&PreventDeath_Params, 0, sizeof(PreventDeath_Params));
	PreventDeath_Params._pKilledPawn = _pKilledPawn;
	PreventDeath_Params._pKiller = _pKiller;
	PreventDeath_Params._pDamageType = _pDamageType;
	memcpy_s(&PreventDeath_Params._HitLocation, sizeof(PreventDeath_Params._HitLocation), &_HitLocation, sizeof(_HitLocation));

	this->ProcessEvent(uFnPreventDeath, &PreventDeath_Params, nullptr);

	return PreventDeath_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredGameInfo.PreventDeath_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44430])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   _pKilledPawn                   (CPF_Parm)
// class AController*             _pKiller                       (CPF_Parm)
// class UClass*                  _pDamageType                   (CPF_Parm)
// struct FVector                 _HitLocation                   (CPF_Parm)

bool ADishonoredGameInfo::PreventDeath_Native(class APawn* _pKilledPawn, class AController* _pKiller, class UClass* _pDamageType, const struct FVector& _HitLocation)
{
	static UFunction* uFnPreventDeath_Native = nullptr;

	if (!uFnPreventDeath_Native)
	{
		uFnPreventDeath_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredGameInfo.PreventDeath_Native");
	}

	ADishonoredGameInfo_execPreventDeath_Native_Params PreventDeath_Native_Params;
	memset(&PreventDeath_Native_Params, 0, sizeof(PreventDeath_Native_Params));
	PreventDeath_Native_Params._pKilledPawn = _pKilledPawn;
	PreventDeath_Native_Params._pKiller = _pKiller;
	PreventDeath_Native_Params._pDamageType = _pDamageType;
	memcpy_s(&PreventDeath_Native_Params._HitLocation, sizeof(PreventDeath_Native_Params._HitLocation), &_HitLocation, sizeof(_HitLocation));

	this->ProcessEvent(uFnPreventDeath_Native, &PreventDeath_Native_Params, nullptr);

	return PreventDeath_Native_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredGameInfo.NotifyPathChanged
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ADishonoredGameInfo::eventNotifyPathChanged()
{
	static UFunction* uFnNotifyPathChanged = nullptr;

	if (!uFnNotifyPathChanged)
	{
		uFnNotifyPathChanged = UFunction::FindFunction("Function DishonoredGame.DishonoredGameInfo.NotifyPathChanged");
	}

	ADishonoredGameInfo_eventNotifyPathChanged_Params NotifyPathChanged_Params;
	memset(&NotifyPathChanged_Params, 0, sizeof(NotifyPathChanged_Params));

	this->ProcessEvent(uFnNotifyPathChanged, &NotifyPathChanged_Params, nullptr);
};

// Function DishonoredGame.DishonoredGameInfo.StartMatch
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ADishonoredGameInfo::eventStartMatch()
{
	static UFunction* uFnStartMatch = nullptr;

	if (!uFnStartMatch)
	{
		uFnStartMatch = UFunction::FindFunction("Function DishonoredGame.DishonoredGameInfo.StartMatch");
	}

	ADishonoredGameInfo_eventStartMatch_Params StartMatch_Params;
	memset(&StartMatch_Params, 0, sizeof(StartMatch_Params));

	this->ProcessEvent(uFnStartMatch, &StartMatch_Params, nullptr);
};

// Function DishonoredGame.DishonoredGameInfo.SpawnPlayer
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[26113])
// Parameter Info:
// class APawn*                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UClass*                  _pSpawnClass                   (CPF_Parm)
// struct FVector                 _SpawnLocation                 (CPF_Parm)
// struct FRotator                _SpawnRotation                 (CPF_Parm)

class APawn* ADishonoredGameInfo::SpawnPlayer(class UClass* _pSpawnClass, const struct FVector& _SpawnLocation, const struct FRotator& _SpawnRotation)
{
	static UFunction* uFnSpawnPlayer = nullptr;

	if (!uFnSpawnPlayer)
	{
		uFnSpawnPlayer = UFunction::FindFunction("Function DishonoredGame.DishonoredGameInfo.SpawnPlayer");
	}

	ADishonoredGameInfo_execSpawnPlayer_Params SpawnPlayer_Params;
	memset(&SpawnPlayer_Params, 0, sizeof(SpawnPlayer_Params));
	SpawnPlayer_Params._pSpawnClass = _pSpawnClass;
	memcpy_s(&SpawnPlayer_Params._SpawnLocation, sizeof(SpawnPlayer_Params._SpawnLocation), &_SpawnLocation, sizeof(_SpawnLocation));
	memcpy_s(&SpawnPlayer_Params._SpawnRotation, sizeof(SpawnPlayer_Params._SpawnRotation), &_SpawnRotation, sizeof(_SpawnRotation));

	this->ProcessEvent(uFnSpawnPlayer, &SpawnPlayer_Params, nullptr);

	return SpawnPlayer_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredGameInfo.CanStartMatch
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30806])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool ADishonoredGameInfo::CanStartMatch()
{
	static UFunction* uFnCanStartMatch = nullptr;

	if (!uFnCanStartMatch)
	{
		uFnCanStartMatch = UFunction::FindFunction("Function DishonoredGame.DishonoredGameInfo.CanStartMatch");
	}

	ADishonoredGameInfo_execCanStartMatch_Params CanStartMatch_Params;
	memset(&CanStartMatch_Params, 0, sizeof(CanStartMatch_Params));

	this->ProcessEvent(uFnCanStartMatch, &CanStartMatch_Params, nullptr);

	return CanStartMatch_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredGameInfo.GameEnding
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[13530])
// Parameter Info:

void ADishonoredGameInfo::eventGameEnding()
{
	static UFunction* uFnGameEnding = nullptr;

	if (!uFnGameEnding)
	{
		uFnGameEnding = UFunction::FindFunction("Function DishonoredGame.DishonoredGameInfo.GameEnding");
	}

	ADishonoredGameInfo_eventGameEnding_Params GameEnding_Params;
	memset(&GameEnding_Params, 0, sizeof(GameEnding_Params));

	this->ProcessEvent(uFnGameEnding, &GameEnding_Params, nullptr);
};

// Function DishonoredGame.DishonoredGameInfo.GetDishonoredEngineVersion
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[35317])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t ADishonoredGameInfo::GetDishonoredEngineVersion()
{
	static UFunction* uFnGetDishonoredEngineVersion = nullptr;

	if (!uFnGetDishonoredEngineVersion)
	{
		uFnGetDishonoredEngineVersion = UFunction::FindFunction("Function DishonoredGame.DishonoredGameInfo.GetDishonoredEngineVersion");
	}

	ADishonoredGameInfo_execGetDishonoredEngineVersion_Params GetDishonoredEngineVersion_Params;
	memset(&GetDishonoredEngineVersion_Params, 0, sizeof(GetDishonoredEngineVersion_Params));

	ADishonoredGameInfo::StaticClass()->ProcessEvent(uFnGetDishonoredEngineVersion, &GetDishonoredEngineVersion_Params, nullptr);

	return GetDishonoredEngineVersion_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredGameInfo.GetChangelist
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[35315])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t ADishonoredGameInfo::GetChangelist()
{
	static UFunction* uFnGetChangelist = nullptr;

	if (!uFnGetChangelist)
	{
		uFnGetChangelist = UFunction::FindFunction("Function DishonoredGame.DishonoredGameInfo.GetChangelist");
	}

	ADishonoredGameInfo_execGetChangelist_Params GetChangelist_Params;
	memset(&GetChangelist_Params, 0, sizeof(GetChangelist_Params));

	ADishonoredGameInfo::StaticClass()->ProcessEvent(uFnGetChangelist, &GetChangelist_Params, nullptr);

	return GetChangelist_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredKActor.TakeDamage_Native
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[45311])
// Parameter Info:
// int32_t                        _Damage                        (CPF_Parm)
// class AController*             _pInstigatedBy                 (CPF_Parm)
// struct FVector                 _HitLocation                   (CPF_Parm)
// struct FVector                 _Momentum                      (CPF_Parm)
// class UClass*                  _pDamageType                   (CPF_Parm)
// struct FTraceHitInfo           _HitInfo                       (CPF_OptionalParm | CPF_Parm)
// class AActor*                  _pDamageCauser                 (CPF_OptionalParm | CPF_Parm)

void ADishonoredKActor::TakeDamage_Native(int32_t _Damage, class AController* _pInstigatedBy, const struct FVector& _HitLocation, const struct FVector& _Momentum, class UClass* _pDamageType, const struct FTraceHitInfo& _HitInfo, class AActor* _pDamageCauser)
{
	static UFunction* uFnTakeDamage_Native = nullptr;

	if (!uFnTakeDamage_Native)
	{
		uFnTakeDamage_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredKActor.TakeDamage_Native");
	}

	ADishonoredKActor_execTakeDamage_Native_Params TakeDamage_Native_Params;
	memset(&TakeDamage_Native_Params, 0, sizeof(TakeDamage_Native_Params));
	memcpy_s(&TakeDamage_Native_Params._Damage, sizeof(TakeDamage_Native_Params._Damage), &_Damage, sizeof(_Damage));
	TakeDamage_Native_Params._pInstigatedBy = _pInstigatedBy;
	memcpy_s(&TakeDamage_Native_Params._HitLocation, sizeof(TakeDamage_Native_Params._HitLocation), &_HitLocation, sizeof(_HitLocation));
	memcpy_s(&TakeDamage_Native_Params._Momentum, sizeof(TakeDamage_Native_Params._Momentum), &_Momentum, sizeof(_Momentum));
	TakeDamage_Native_Params._pDamageType = _pDamageType;
	memcpy_s(&TakeDamage_Native_Params._HitInfo, sizeof(TakeDamage_Native_Params._HitInfo), &_HitInfo, sizeof(_HitInfo));
	TakeDamage_Native_Params._pDamageCauser = _pDamageCauser;

	this->ProcessEvent(uFnTakeDamage_Native, &TakeDamage_Native_Params, nullptr);
};

// Function DishonoredGame.DishonoredKActor.TakeDamage
// [0x00024C00] (FUNC_Native | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[13766])
// Parameter Info:
// int32_t                        Damage                         (CPF_Parm)
// class AController*             InstigatedBy                   (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 Momentum                       (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_OptionalParm | CPF_Parm)
// class AActor*                  DamageCauser                   (CPF_OptionalParm | CPF_Parm)

void ADishonoredKActor::eventTakeDamage(int32_t Damage, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static UFunction* uFnTakeDamage = nullptr;

	if (!uFnTakeDamage)
	{
		uFnTakeDamage = UFunction::FindFunction("Function DishonoredGame.DishonoredKActor.TakeDamage");
	}

	ADishonoredKActor_eventTakeDamage_Params TakeDamage_Params;
	memset(&TakeDamage_Params, 0, sizeof(TakeDamage_Params));
	memcpy_s(&TakeDamage_Params.Damage, sizeof(TakeDamage_Params.Damage), &Damage, sizeof(Damage));
	TakeDamage_Params.InstigatedBy = InstigatedBy;
	memcpy_s(&TakeDamage_Params.HitLocation, sizeof(TakeDamage_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&TakeDamage_Params.Momentum, sizeof(TakeDamage_Params.Momentum), &Momentum, sizeof(Momentum));
	TakeDamage_Params.DamageType = DamageType;
	memcpy_s(&TakeDamage_Params.HitInfo, sizeof(TakeDamage_Params.HitInfo), &HitInfo, sizeof(HitInfo));
	TakeDamage_Params.DamageCauser = DamageCauser;

	this->ProcessEvent(uFnTakeDamage, &TakeDamage_Params, nullptr);
};

// Function DishonoredGame.DishonoredKActor.DestroyIfPlayerCantSeeMe
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[13815])
// Parameter Info:

void ADishonoredKActor::eventDestroyIfPlayerCantSeeMe()
{
	static UFunction* uFnDestroyIfPlayerCantSeeMe = nullptr;

	if (!uFnDestroyIfPlayerCantSeeMe)
	{
		uFnDestroyIfPlayerCantSeeMe = UFunction::FindFunction("Function DishonoredGame.DishonoredKActor.DestroyIfPlayerCantSeeMe");
	}

	ADishonoredKActor_eventDestroyIfPlayerCantSeeMe_Params DestroyIfPlayerCantSeeMe_Params;
	memset(&DestroyIfPlayerCantSeeMe_Params, 0, sizeof(DestroyIfPlayerCantSeeMe_Params));

	this->ProcessEvent(uFnDestroyIfPlayerCantSeeMe, &DestroyIfPlayerCantSeeMe_Params, nullptr);
};

// Function DishonoredGame.DishonoredKAsset.TakeDamage_Native
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[45311])
// Parameter Info:
// int32_t                        _Damage                        (CPF_Parm)
// class AController*             _pInstigatedBy                 (CPF_Parm)
// struct FVector                 _HitLocation                   (CPF_Parm)
// struct FVector                 _Momentum                      (CPF_Parm)
// class UClass*                  _pDamageType                   (CPF_Parm)
// struct FTraceHitInfo           _HitInfo                       (CPF_OptionalParm | CPF_Parm)
// class AActor*                  _pDamageCauser                 (CPF_OptionalParm | CPF_Parm)

void ADishonoredKAsset::TakeDamage_Native(int32_t _Damage, class AController* _pInstigatedBy, const struct FVector& _HitLocation, const struct FVector& _Momentum, class UClass* _pDamageType, const struct FTraceHitInfo& _HitInfo, class AActor* _pDamageCauser)
{
	static UFunction* uFnTakeDamage_Native = nullptr;

	if (!uFnTakeDamage_Native)
	{
		uFnTakeDamage_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredKAsset.TakeDamage_Native");
	}

	ADishonoredKAsset_execTakeDamage_Native_Params TakeDamage_Native_Params;
	memset(&TakeDamage_Native_Params, 0, sizeof(TakeDamage_Native_Params));
	memcpy_s(&TakeDamage_Native_Params._Damage, sizeof(TakeDamage_Native_Params._Damage), &_Damage, sizeof(_Damage));
	TakeDamage_Native_Params._pInstigatedBy = _pInstigatedBy;
	memcpy_s(&TakeDamage_Native_Params._HitLocation, sizeof(TakeDamage_Native_Params._HitLocation), &_HitLocation, sizeof(_HitLocation));
	memcpy_s(&TakeDamage_Native_Params._Momentum, sizeof(TakeDamage_Native_Params._Momentum), &_Momentum, sizeof(_Momentum));
	TakeDamage_Native_Params._pDamageType = _pDamageType;
	memcpy_s(&TakeDamage_Native_Params._HitInfo, sizeof(TakeDamage_Native_Params._HitInfo), &_HitInfo, sizeof(_HitInfo));
	TakeDamage_Native_Params._pDamageCauser = _pDamageCauser;

	this->ProcessEvent(uFnTakeDamage_Native, &TakeDamage_Native_Params, nullptr);
};

// Function DishonoredGame.DishonoredKAsset.TakeDamage
// [0x00024D00] (FUNC_Simulated | FUNC_Native | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[13766])
// Parameter Info:
// int32_t                        Damage                         (CPF_Parm)
// class AController*             InstigatedBy                   (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 Momentum                       (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_OptionalParm | CPF_Parm)
// class AActor*                  DamageCauser                   (CPF_OptionalParm | CPF_Parm)

void ADishonoredKAsset::eventTakeDamage(int32_t Damage, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static UFunction* uFnTakeDamage = nullptr;

	if (!uFnTakeDamage)
	{
		uFnTakeDamage = UFunction::FindFunction("Function DishonoredGame.DishonoredKAsset.TakeDamage");
	}

	ADishonoredKAsset_eventTakeDamage_Params TakeDamage_Params;
	memset(&TakeDamage_Params, 0, sizeof(TakeDamage_Params));
	memcpy_s(&TakeDamage_Params.Damage, sizeof(TakeDamage_Params.Damage), &Damage, sizeof(Damage));
	TakeDamage_Params.InstigatedBy = InstigatedBy;
	memcpy_s(&TakeDamage_Params.HitLocation, sizeof(TakeDamage_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&TakeDamage_Params.Momentum, sizeof(TakeDamage_Params.Momentum), &Momentum, sizeof(Momentum));
	TakeDamage_Params.DamageType = DamageType;
	memcpy_s(&TakeDamage_Params.HitInfo, sizeof(TakeDamage_Params.HitInfo), &HitInfo, sizeof(HitInfo));
	TakeDamage_Params.DamageCauser = DamageCauser;

	this->ProcessEvent(uFnTakeDamage, &TakeDamage_Params, nullptr);
};

// Function DishonoredGame.DishonoredNote.PostRenderFor
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APlayerController*       PC                             (CPF_Parm)
// class UCanvas*                 Canvas                         (CPF_Parm)
// struct FVector                 CameraPosition                 (CPF_Parm)
// struct FVector                 CameraDir                      (CPF_Parm)

void ADishonoredNote::eventPostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir)
{
	static UFunction* uFnPostRenderFor = nullptr;

	if (!uFnPostRenderFor)
	{
		uFnPostRenderFor = UFunction::FindFunction("Function DishonoredGame.DishonoredNote.PostRenderFor");
	}

	ADishonoredNote_eventPostRenderFor_Params PostRenderFor_Params;
	memset(&PostRenderFor_Params, 0, sizeof(PostRenderFor_Params));
	PostRenderFor_Params.PC = PC;
	PostRenderFor_Params.Canvas = Canvas;
	memcpy_s(&PostRenderFor_Params.CameraPosition, sizeof(PostRenderFor_Params.CameraPosition), &CameraPosition, sizeof(CameraPosition));
	memcpy_s(&PostRenderFor_Params.CameraDir, sizeof(PostRenderFor_Params.CameraDir), &CameraDir, sizeof(CameraDir));

	this->ProcessEvent(uFnPostRenderFor, &PostRenderFor_Params, nullptr);
};

// Function DishonoredGame.DishonoredNote.NativeNotePostRender
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43765])
// Parameter Info:
// class APlayerController*       PC                             (CPF_Parm)
// class UCanvas*                 Canvas                         (CPF_Parm)
// struct FVector                 CameraPosition                 (CPF_Parm)
// struct FVector                 CameraDir                      (CPF_Parm)

void ADishonoredNote::NativeNotePostRender(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir)
{
	static UFunction* uFnNativeNotePostRender = nullptr;

	if (!uFnNativeNotePostRender)
	{
		uFnNativeNotePostRender = UFunction::FindFunction("Function DishonoredGame.DishonoredNote.NativeNotePostRender");
	}

	ADishonoredNote_execNativeNotePostRender_Params NativeNotePostRender_Params;
	memset(&NativeNotePostRender_Params, 0, sizeof(NativeNotePostRender_Params));
	NativeNotePostRender_Params.PC = PC;
	NativeNotePostRender_Params.Canvas = Canvas;
	memcpy_s(&NativeNotePostRender_Params.CameraPosition, sizeof(NativeNotePostRender_Params.CameraPosition), &CameraPosition, sizeof(CameraPosition));
	memcpy_s(&NativeNotePostRender_Params.CameraDir, sizeof(NativeNotePostRender_Params.CameraDir), &CameraDir, sizeof(CameraDir));

	this->ProcessEvent(uFnNativeNotePostRender, &NativeNotePostRender_Params, nullptr);
};

// Function DishonoredGame.DishonoredPawn.OnDLC05SetStoryGroup
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47581])
// Parameter Info:
// class USequenceAction*         _pAction                       (CPF_Parm)

void ADishonoredPawn::OnDLC05SetStoryGroup(class USequenceAction* _pAction)
{
	static UFunction* uFnOnDLC05SetStoryGroup = nullptr;

	if (!uFnOnDLC05SetStoryGroup)
	{
		uFnOnDLC05SetStoryGroup = UFunction::FindFunction("Function DishonoredGame.DishonoredPawn.OnDLC05SetStoryGroup");
	}

	ADishonoredPawn_execOnDLC05SetStoryGroup_Params OnDLC05SetStoryGroup_Params;
	memset(&OnDLC05SetStoryGroup_Params, 0, sizeof(OnDLC05SetStoryGroup_Params));
	OnDLC05SetStoryGroup_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnDLC05SetStoryGroup, &OnDLC05SetStoryGroup_Params, nullptr);
};

// Function DishonoredGame.DishonoredPawn.JumpOffPawn
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[21449])
// Parameter Info:

void ADishonoredPawn::JumpOffPawn()
{
	static UFunction* uFnJumpOffPawn = nullptr;

	if (!uFnJumpOffPawn)
	{
		uFnJumpOffPawn = UFunction::FindFunction("Function DishonoredGame.DishonoredPawn.JumpOffPawn");
	}

	ADishonoredPawn_execJumpOffPawn_Params JumpOffPawn_Params;
	memset(&JumpOffPawn_Params, 0, sizeof(JumpOffPawn_Params));

	this->ProcessEvent(uFnJumpOffPawn, &JumpOffPawn_Params, nullptr);
};

// Function DishonoredGame.DishonoredPawn.CrushedBy
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APawn*                   OtherPawn                      (CPF_Parm)

void ADishonoredPawn::CrushedBy(class APawn* OtherPawn)
{
	static UFunction* uFnCrushedBy = nullptr;

	if (!uFnCrushedBy)
	{
		uFnCrushedBy = UFunction::FindFunction("Function DishonoredGame.DishonoredPawn.CrushedBy");
	}

	ADishonoredPawn_execCrushedBy_Params CrushedBy_Params;
	memset(&CrushedBy_Params, 0, sizeof(CrushedBy_Params));
	CrushedBy_Params.OtherPawn = OtherPawn;

	this->ProcessEvent(uFnCrushedBy, &CrushedBy_Params, nullptr);
};

// Function DishonoredGame.DishonoredPawn.CrushedBy_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30938])
// Parameter Info:
// class APawn*                   _pOtherPawn                    (CPF_Parm)

void ADishonoredPawn::CrushedBy_Native(class APawn* _pOtherPawn)
{
	static UFunction* uFnCrushedBy_Native = nullptr;

	if (!uFnCrushedBy_Native)
	{
		uFnCrushedBy_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredPawn.CrushedBy_Native");
	}

	ADishonoredPawn_execCrushedBy_Native_Params CrushedBy_Native_Params;
	memset(&CrushedBy_Native_Params, 0, sizeof(CrushedBy_Native_Params));
	CrushedBy_Native_Params._pOtherPawn = _pOtherPawn;

	this->ProcessEvent(uFnCrushedBy_Native, &CrushedBy_Native_Params, nullptr);
};

// Function DishonoredGame.DishonoredPawn.OnModifyElixirCount
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43943])
// Parameter Info:
// class UDisSeqAct_ModifyElixirCount* _pAction                       (CPF_Parm)

void ADishonoredPawn::OnModifyElixirCount(class UDisSeqAct_ModifyElixirCount* _pAction)
{
	static UFunction* uFnOnModifyElixirCount = nullptr;

	if (!uFnOnModifyElixirCount)
	{
		uFnOnModifyElixirCount = UFunction::FindFunction("Function DishonoredGame.DishonoredPawn.OnModifyElixirCount");
	}

	ADishonoredPawn_execOnModifyElixirCount_Params OnModifyElixirCount_Params;
	memset(&OnModifyElixirCount_Params, 0, sizeof(OnModifyElixirCount_Params));
	OnModifyElixirCount_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnModifyElixirCount, &OnModifyElixirCount_Params, nullptr);
};

// Function DishonoredGame.DishonoredPawn.OnGetAbstractItemQuantity
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43924])
// Parameter Info:
// class UDisSeqAct_GetAbstractItemQuantity* _pAction                       (CPF_Parm)

void ADishonoredPawn::OnGetAbstractItemQuantity(class UDisSeqAct_GetAbstractItemQuantity* _pAction)
{
	static UFunction* uFnOnGetAbstractItemQuantity = nullptr;

	if (!uFnOnGetAbstractItemQuantity)
	{
		uFnOnGetAbstractItemQuantity = UFunction::FindFunction("Function DishonoredGame.DishonoredPawn.OnGetAbstractItemQuantity");
	}

	ADishonoredPawn_execOnGetAbstractItemQuantity_Params OnGetAbstractItemQuantity_Params;
	memset(&OnGetAbstractItemQuantity_Params, 0, sizeof(OnGetAbstractItemQuantity_Params));
	OnGetAbstractItemQuantity_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnGetAbstractItemQuantity, &OnGetAbstractItemQuantity_Params, nullptr);
};

// Function DishonoredGame.DishonoredPawn.OnRemoveAbstractItem
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43959])
// Parameter Info:
// class UDisSeqAct_RemoveAbstractItem* _pAction                       (CPF_Parm)

void ADishonoredPawn::OnRemoveAbstractItem(class UDisSeqAct_RemoveAbstractItem* _pAction)
{
	static UFunction* uFnOnRemoveAbstractItem = nullptr;

	if (!uFnOnRemoveAbstractItem)
	{
		uFnOnRemoveAbstractItem = UFunction::FindFunction("Function DishonoredGame.DishonoredPawn.OnRemoveAbstractItem");
	}

	ADishonoredPawn_execOnRemoveAbstractItem_Params OnRemoveAbstractItem_Params;
	memset(&OnRemoveAbstractItem_Params, 0, sizeof(OnRemoveAbstractItem_Params));
	OnRemoveAbstractItem_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnRemoveAbstractItem, &OnRemoveAbstractItem_Params, nullptr);
};

// Function DishonoredGame.DishonoredPawn.OnAddAbstractItem
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43863])
// Parameter Info:
// class UDisSeqAct_AddAbstractItem* _pAction                       (CPF_Parm)

void ADishonoredPawn::OnAddAbstractItem(class UDisSeqAct_AddAbstractItem* _pAction)
{
	static UFunction* uFnOnAddAbstractItem = nullptr;

	if (!uFnOnAddAbstractItem)
	{
		uFnOnAddAbstractItem = UFunction::FindFunction("Function DishonoredGame.DishonoredPawn.OnAddAbstractItem");
	}

	ADishonoredPawn_execOnAddAbstractItem_Params OnAddAbstractItem_Params;
	memset(&OnAddAbstractItem_Params, 0, sizeof(OnAddAbstractItem_Params));
	OnAddAbstractItem_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnAddAbstractItem, &OnAddAbstractItem_Params, nullptr);
};

// Function DishonoredGame.DishonoredPawn.OnModifyAmmo
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43942])
// Parameter Info:
// class UDisSeqAct_ModifyAmmo*   _pAction                       (CPF_Parm)

void ADishonoredPawn::OnModifyAmmo(class UDisSeqAct_ModifyAmmo* _pAction)
{
	static UFunction* uFnOnModifyAmmo = nullptr;

	if (!uFnOnModifyAmmo)
	{
		uFnOnModifyAmmo = UFunction::FindFunction("Function DishonoredGame.DishonoredPawn.OnModifyAmmo");
	}

	ADishonoredPawn_execOnModifyAmmo_Params OnModifyAmmo_Params;
	memset(&OnModifyAmmo_Params, 0, sizeof(OnModifyAmmo_Params));
	OnModifyAmmo_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnModifyAmmo, &OnModifyAmmo_Params, nullptr);
};

// Function DishonoredGame.DishonoredPawn.OnEquipItemType
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43909])
// Parameter Info:
// class UDisSeqAct_EquipItemType* _pAction                       (CPF_Parm)

void ADishonoredPawn::OnEquipItemType(class UDisSeqAct_EquipItemType* _pAction)
{
	static UFunction* uFnOnEquipItemType = nullptr;

	if (!uFnOnEquipItemType)
	{
		uFnOnEquipItemType = UFunction::FindFunction("Function DishonoredGame.DishonoredPawn.OnEquipItemType");
	}

	ADishonoredPawn_execOnEquipItemType_Params OnEquipItemType_Params;
	memset(&OnEquipItemType_Params, 0, sizeof(OnEquipItemType_Params));
	OnEquipItemType_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnEquipItemType, &OnEquipItemType_Params, nullptr);
};

// Function DishonoredGame.DishonoredPawn.OnAddInventoryItem
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43865])
// Parameter Info:
// class UDisSeqAct_AddInventoryItem* _pAction                       (CPF_Parm)

void ADishonoredPawn::OnAddInventoryItem(class UDisSeqAct_AddInventoryItem* _pAction)
{
	static UFunction* uFnOnAddInventoryItem = nullptr;

	if (!uFnOnAddInventoryItem)
	{
		uFnOnAddInventoryItem = UFunction::FindFunction("Function DishonoredGame.DishonoredPawn.OnAddInventoryItem");
	}

	ADishonoredPawn_execOnAddInventoryItem_Params OnAddInventoryItem_Params;
	memset(&OnAddInventoryItem_Params, 0, sizeof(OnAddInventoryItem_Params));
	OnAddInventoryItem_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnAddInventoryItem, &OnAddInventoryItem_Params, nullptr);
};

// Function DishonoredGame.DishonoredPawn.OnSetDisposition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43980])
// Parameter Info:
// class UDisSeqAct_SetDisposition* _pAction                       (CPF_Parm)

void ADishonoredPawn::OnSetDisposition(class UDisSeqAct_SetDisposition* _pAction)
{
	static UFunction* uFnOnSetDisposition = nullptr;

	if (!uFnOnSetDisposition)
	{
		uFnOnSetDisposition = UFunction::FindFunction("Function DishonoredGame.DishonoredPawn.OnSetDisposition");
	}

	ADishonoredPawn_execOnSetDisposition_Params OnSetDisposition_Params;
	memset(&OnSetDisposition_Params, 0, sizeof(OnSetDisposition_Params));
	OnSetDisposition_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnSetDisposition, &OnSetDisposition_Params, nullptr);
};

// Function DishonoredGame.DishonoredPawn.OnTeleport
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Teleport*        _pAction                       (CPF_Parm)

void ADishonoredPawn::OnTeleport(class USeqAct_Teleport* _pAction)
{
	static UFunction* uFnOnTeleport = nullptr;

	if (!uFnOnTeleport)
	{
		uFnOnTeleport = UFunction::FindFunction("Function DishonoredGame.DishonoredPawn.OnTeleport");
	}

	ADishonoredPawn_execOnTeleport_Params OnTeleport_Params;
	memset(&OnTeleport_Params, 0, sizeof(OnTeleport_Params));
	OnTeleport_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnTeleport, &OnTeleport_Params, nullptr);
};

// Function DishonoredGame.DishonoredPawn.OnTeleport_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43994])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class USeqAct_Teleport*        _pAction                       (CPF_Parm)

bool ADishonoredPawn::OnTeleport_Native(class USeqAct_Teleport* _pAction)
{
	static UFunction* uFnOnTeleport_Native = nullptr;

	if (!uFnOnTeleport_Native)
	{
		uFnOnTeleport_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredPawn.OnTeleport_Native");
	}

	ADishonoredPawn_execOnTeleport_Native_Params OnTeleport_Native_Params;
	memset(&OnTeleport_Native_Params, 0, sizeof(OnTeleport_Native_Params));
	OnTeleport_Native_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnTeleport_Native, &OnTeleport_Native_Params, nullptr);

	return OnTeleport_Native_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredPawn.Landed
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 HitNormal                      (CPF_Parm)
// class AActor*                  pFloorActor                    (CPF_Parm)

void ADishonoredPawn::eventLanded(const struct FVector& HitNormal, class AActor* pFloorActor)
{
	static UFunction* uFnLanded = nullptr;

	if (!uFnLanded)
	{
		uFnLanded = UFunction::FindFunction("Function DishonoredGame.DishonoredPawn.Landed");
	}

	ADishonoredPawn_eventLanded_Params Landed_Params;
	memset(&Landed_Params, 0, sizeof(Landed_Params));
	memcpy_s(&Landed_Params.HitNormal, sizeof(Landed_Params.HitNormal), &HitNormal, sizeof(HitNormal));
	Landed_Params.pFloorActor = pFloorActor;

	this->ProcessEvent(uFnLanded, &Landed_Params, nullptr);
};

// Function DishonoredGame.DishonoredPawn.Landed_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35678])
// Parameter Info:
// struct FVector                 HitNormal                      (CPF_Parm)
// class AActor*                  pFloorActor                    (CPF_Parm)

void ADishonoredPawn::Landed_Native(const struct FVector& HitNormal, class AActor* pFloorActor)
{
	static UFunction* uFnLanded_Native = nullptr;

	if (!uFnLanded_Native)
	{
		uFnLanded_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredPawn.Landed_Native");
	}

	ADishonoredPawn_execLanded_Native_Params Landed_Native_Params;
	memset(&Landed_Native_Params, 0, sizeof(Landed_Native_Params));
	memcpy_s(&Landed_Native_Params.HitNormal, sizeof(Landed_Native_Params.HitNormal), &HitNormal, sizeof(HitNormal));
	Landed_Native_Params.pFloorActor = pFloorActor;

	this->ProcessEvent(uFnLanded_Native, &Landed_Native_Params, nullptr);
};

// Function DishonoredGame.DishonoredPawn.BreakConstraint
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FName                    _JointName                     (CPF_Parm)

void ADishonoredPawn::eventBreakConstraint(const class FName& _JointName)
{
	static UFunction* uFnBreakConstraint = nullptr;

	if (!uFnBreakConstraint)
	{
		uFnBreakConstraint = UFunction::FindFunction("Function DishonoredGame.DishonoredPawn.BreakConstraint");
	}

	ADishonoredPawn_eventBreakConstraint_Params BreakConstraint_Params;
	memset(&BreakConstraint_Params, 0, sizeof(BreakConstraint_Params));
	memcpy_s(&BreakConstraint_Params._JointName, sizeof(BreakConstraint_Params._JointName), &_JointName, sizeof(_JointName));

	this->ProcessEvent(uFnBreakConstraint, &BreakConstraint_Params, nullptr);
};

// Function DishonoredGame.DishonoredPawn.ChooseAndTriggerDeathEvent
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UClass*                  _pDamageType                   (CPF_Parm)

void ADishonoredPawn::eventChooseAndTriggerDeathEvent(class UClass* _pDamageType)
{
	static UFunction* uFnChooseAndTriggerDeathEvent = nullptr;

	if (!uFnChooseAndTriggerDeathEvent)
	{
		uFnChooseAndTriggerDeathEvent = UFunction::FindFunction("Function DishonoredGame.DishonoredPawn.ChooseAndTriggerDeathEvent");
	}

	ADishonoredPawn_eventChooseAndTriggerDeathEvent_Params ChooseAndTriggerDeathEvent_Params;
	memset(&ChooseAndTriggerDeathEvent_Params, 0, sizeof(ChooseAndTriggerDeathEvent_Params));
	ChooseAndTriggerDeathEvent_Params._pDamageType = _pDamageType;

	this->ProcessEvent(uFnChooseAndTriggerDeathEvent, &ChooseAndTriggerDeathEvent_Params, nullptr);
};

// Function DishonoredGame.DishonoredPawn.ChooseAndTriggerDeathEvent_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30864])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UClass*                  _pDamageType                   (CPF_Parm)

bool ADishonoredPawn::ChooseAndTriggerDeathEvent_Native(class UClass* _pDamageType)
{
	static UFunction* uFnChooseAndTriggerDeathEvent_Native = nullptr;

	if (!uFnChooseAndTriggerDeathEvent_Native)
	{
		uFnChooseAndTriggerDeathEvent_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredPawn.ChooseAndTriggerDeathEvent_Native");
	}

	ADishonoredPawn_execChooseAndTriggerDeathEvent_Native_Params ChooseAndTriggerDeathEvent_Native_Params;
	memset(&ChooseAndTriggerDeathEvent_Native_Params, 0, sizeof(ChooseAndTriggerDeathEvent_Native_Params));
	ChooseAndTriggerDeathEvent_Native_Params._pDamageType = _pDamageType;

	this->ProcessEvent(uFnChooseAndTriggerDeathEvent_Native, &ChooseAndTriggerDeathEvent_Native_Params, nullptr);

	return ChooseAndTriggerDeathEvent_Native_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredPawn.PlayDying
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AController*             Killer                         (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FVector                 HitLoc                         (CPF_Parm)

void ADishonoredPawn::PlayDying(class AController* Killer, class UClass* DamageType, const struct FVector& HitLoc)
{
	static UFunction* uFnPlayDying = nullptr;

	if (!uFnPlayDying)
	{
		uFnPlayDying = UFunction::FindFunction("Function DishonoredGame.DishonoredPawn.PlayDying");
	}

	ADishonoredPawn_execPlayDying_Params PlayDying_Params;
	memset(&PlayDying_Params, 0, sizeof(PlayDying_Params));
	PlayDying_Params.Killer = Killer;
	PlayDying_Params.DamageType = DamageType;
	memcpy_s(&PlayDying_Params.HitLoc, sizeof(PlayDying_Params.HitLoc), &HitLoc, sizeof(HitLoc));

	this->ProcessEvent(uFnPlayDying, &PlayDying_Params, nullptr);
};

// Function DishonoredGame.DishonoredPawn.PlayDying_Native
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44228])
// Parameter Info:
// class AController*             Killer                         (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FVector                 HitLoc                         (CPF_Parm)

void ADishonoredPawn::PlayDying_Native(class AController* Killer, class UClass* DamageType, const struct FVector& HitLoc)
{
	static UFunction* uFnPlayDying_Native = nullptr;

	if (!uFnPlayDying_Native)
	{
		uFnPlayDying_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredPawn.PlayDying_Native");
	}

	ADishonoredPawn_execPlayDying_Native_Params PlayDying_Native_Params;
	memset(&PlayDying_Native_Params, 0, sizeof(PlayDying_Native_Params));
	PlayDying_Native_Params.Killer = Killer;
	PlayDying_Native_Params.DamageType = DamageType;
	memcpy_s(&PlayDying_Native_Params.HitLoc, sizeof(PlayDying_Native_Params.HitLoc), &HitLoc, sizeof(HitLoc));

	this->ProcessEvent(uFnPlayDying_Native, &PlayDying_Native_Params, nullptr);
};

// Function DishonoredGame.DishonoredPawn.TakeFallingDamage_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45312])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 _HitNormal                     (CPF_Parm)
// class AActor*                  _pFloorActor                   (CPF_Parm)

int32_t ADishonoredPawn::TakeFallingDamage_Native(const struct FVector& _HitNormal, class AActor* _pFloorActor)
{
	static UFunction* uFnTakeFallingDamage_Native = nullptr;

	if (!uFnTakeFallingDamage_Native)
	{
		uFnTakeFallingDamage_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredPawn.TakeFallingDamage_Native");
	}

	ADishonoredPawn_execTakeFallingDamage_Native_Params TakeFallingDamage_Native_Params;
	memset(&TakeFallingDamage_Native_Params, 0, sizeof(TakeFallingDamage_Native_Params));
	memcpy_s(&TakeFallingDamage_Native_Params._HitNormal, sizeof(TakeFallingDamage_Native_Params._HitNormal), &_HitNormal, sizeof(_HitNormal));
	TakeFallingDamage_Native_Params._pFloorActor = _pFloorActor;

	this->ProcessEvent(uFnTakeFallingDamage_Native, &TakeFallingDamage_Native_Params, nullptr);

	return TakeFallingDamage_Native_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredPawn.TakeFallingDamage
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 _HitNormal                     (CPF_Parm)
// class AActor*                  _pFloorActor                   (CPF_Parm)

void ADishonoredPawn::TakeFallingDamage(const struct FVector& _HitNormal, class AActor* _pFloorActor)
{
	static UFunction* uFnTakeFallingDamage = nullptr;

	if (!uFnTakeFallingDamage)
	{
		uFnTakeFallingDamage = UFunction::FindFunction("Function DishonoredGame.DishonoredPawn.TakeFallingDamage");
	}

	ADishonoredPawn_execTakeFallingDamage_Params TakeFallingDamage_Params;
	memset(&TakeFallingDamage_Params, 0, sizeof(TakeFallingDamage_Params));
	memcpy_s(&TakeFallingDamage_Params._HitNormal, sizeof(TakeFallingDamage_Params._HitNormal), &_HitNormal, sizeof(_HitNormal));
	TakeFallingDamage_Params._pFloorActor = _pFloorActor;

	this->ProcessEvent(uFnTakeFallingDamage, &TakeFallingDamage_Params, nullptr);
};

// Function DishonoredGame.DishonoredPawn.TakeDamage_Native
// [0x00424400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[45311])
// Parameter Info:
// class AController*             _pInstigatedBy                 (CPF_Parm)
// struct FVector                 _HitLocation                   (CPF_Parm)
// class UClass*                  _pDamageType                   (CPF_Parm)
// struct FTraceHitInfo           _HitInfo                       (CPF_OptionalParm | CPF_Parm)
// class AActor*                  _pDamageCauser                 (CPF_OptionalParm | CPF_Parm)
// int32_t                        _rDamage                       (CPF_Parm | CPF_OutParm)
// struct FVector                 _rMomentum                     (CPF_Parm | CPF_OutParm)

void ADishonoredPawn::TakeDamage_Native(class AController* _pInstigatedBy, const struct FVector& _HitLocation, class UClass* _pDamageType, const struct FTraceHitInfo& _HitInfo, class AActor* _pDamageCauser, int32_t& _rDamage, struct FVector& _rMomentum)
{
	static UFunction* uFnTakeDamage_Native = nullptr;

	if (!uFnTakeDamage_Native)
	{
		uFnTakeDamage_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredPawn.TakeDamage_Native");
	}

	ADishonoredPawn_execTakeDamage_Native_Params TakeDamage_Native_Params;
	memset(&TakeDamage_Native_Params, 0, sizeof(TakeDamage_Native_Params));
	TakeDamage_Native_Params._pInstigatedBy = _pInstigatedBy;
	memcpy_s(&TakeDamage_Native_Params._HitLocation, sizeof(TakeDamage_Native_Params._HitLocation), &_HitLocation, sizeof(_HitLocation));
	TakeDamage_Native_Params._pDamageType = _pDamageType;
	memcpy_s(&TakeDamage_Native_Params._HitInfo, sizeof(TakeDamage_Native_Params._HitInfo), &_HitInfo, sizeof(_HitInfo));
	TakeDamage_Native_Params._pDamageCauser = _pDamageCauser;
	memcpy_s(&TakeDamage_Native_Params._rDamage, sizeof(TakeDamage_Native_Params._rDamage), &_rDamage, sizeof(_rDamage));
	memcpy_s(&TakeDamage_Native_Params._rMomentum, sizeof(TakeDamage_Native_Params._rMomentum), &_rMomentum, sizeof(_rMomentum));

	this->ProcessEvent(uFnTakeDamage_Native, &TakeDamage_Native_Params, nullptr);

	memcpy_s(&_rDamage, sizeof(_rDamage), &TakeDamage_Native_Params._rDamage, sizeof(TakeDamage_Native_Params._rDamage));
	memcpy_s(&_rMomentum, sizeof(_rMomentum), &TakeDamage_Native_Params._rMomentum, sizeof(TakeDamage_Native_Params._rMomentum));
};

// Function DishonoredGame.DishonoredPawn.TakeDamage
// [0x00024C00] (FUNC_Native | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[13766])
// Parameter Info:
// int32_t                        Damage                         (CPF_Parm)
// class AController*             InstigatedBy                   (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 Momentum                       (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_OptionalParm | CPF_Parm)
// class AActor*                  DamageCauser                   (CPF_OptionalParm | CPF_Parm)

void ADishonoredPawn::eventTakeDamage(int32_t Damage, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static UFunction* uFnTakeDamage = nullptr;

	if (!uFnTakeDamage)
	{
		uFnTakeDamage = UFunction::FindFunction("Function DishonoredGame.DishonoredPawn.TakeDamage");
	}

	ADishonoredPawn_eventTakeDamage_Params TakeDamage_Params;
	memset(&TakeDamage_Params, 0, sizeof(TakeDamage_Params));
	memcpy_s(&TakeDamage_Params.Damage, sizeof(TakeDamage_Params.Damage), &Damage, sizeof(Damage));
	TakeDamage_Params.InstigatedBy = InstigatedBy;
	memcpy_s(&TakeDamage_Params.HitLocation, sizeof(TakeDamage_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&TakeDamage_Params.Momentum, sizeof(TakeDamage_Params.Momentum), &Momentum, sizeof(Momentum));
	TakeDamage_Params.DamageType = DamageType;
	memcpy_s(&TakeDamage_Params.HitInfo, sizeof(TakeDamage_Params.HitInfo), &HitInfo, sizeof(HitInfo));
	TakeDamage_Params.DamageCauser = DamageCauser;

	this->ProcessEvent(uFnTakeDamage, &TakeDamage_Params, nullptr);
};

// Function DishonoredGame.DishonoredPawn.FireTakeDamageKismetEvent
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  _pInInstigator                 (CPF_Parm)
// class UClass*                  _pInDamageType                 (CPF_Parm)
// int32_t                        _inAmount                      (CPF_Parm)

void ADishonoredPawn::eventFireTakeDamageKismetEvent(class AActor* _pInInstigator, class UClass* _pInDamageType, int32_t _inAmount)
{
	static UFunction* uFnFireTakeDamageKismetEvent = nullptr;

	if (!uFnFireTakeDamageKismetEvent)
	{
		uFnFireTakeDamageKismetEvent = UFunction::FindFunction("Function DishonoredGame.DishonoredPawn.FireTakeDamageKismetEvent");
	}

	ADishonoredPawn_eventFireTakeDamageKismetEvent_Params FireTakeDamageKismetEvent_Params;
	memset(&FireTakeDamageKismetEvent_Params, 0, sizeof(FireTakeDamageKismetEvent_Params));
	FireTakeDamageKismetEvent_Params._pInInstigator = _pInInstigator;
	FireTakeDamageKismetEvent_Params._pInDamageType = _pInDamageType;
	memcpy_s(&FireTakeDamageKismetEvent_Params._inAmount, sizeof(FireTakeDamageKismetEvent_Params._inAmount), &_inAmount, sizeof(_inAmount));

	this->ProcessEvent(uFnFireTakeDamageKismetEvent, &FireTakeDamageKismetEvent_Params, nullptr);
};

// Function DishonoredGame.DishonoredPawn.DisplayDebug
// [0x00420102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class AHUD*                    _HUD                           (CPF_Parm)
// float                          _fOut_YL                       (CPF_Parm | CPF_OutParm)
// float                          _fOut_YPos                     (CPF_Parm | CPF_OutParm)

void ADishonoredPawn::DisplayDebug(class AHUD* _HUD, float& _fOut_YL, float& _fOut_YPos)
{
	static UFunction* uFnDisplayDebug = nullptr;

	if (!uFnDisplayDebug)
	{
		uFnDisplayDebug = UFunction::FindFunction("Function DishonoredGame.DishonoredPawn.DisplayDebug");
	}

	ADishonoredPawn_execDisplayDebug_Params DisplayDebug_Params;
	memset(&DisplayDebug_Params, 0, sizeof(DisplayDebug_Params));
	DisplayDebug_Params._HUD = _HUD;
	memcpy_s(&DisplayDebug_Params._fOut_YL, sizeof(DisplayDebug_Params._fOut_YL), &_fOut_YL, sizeof(_fOut_YL));
	memcpy_s(&DisplayDebug_Params._fOut_YPos, sizeof(DisplayDebug_Params._fOut_YPos), &_fOut_YPos, sizeof(_fOut_YPos));

	this->ProcessEvent(uFnDisplayDebug, &DisplayDebug_Params, nullptr);

	memcpy_s(&_fOut_YL, sizeof(_fOut_YL), &DisplayDebug_Params._fOut_YL, sizeof(DisplayDebug_Params._fOut_YL));
	memcpy_s(&_fOut_YPos, sizeof(_fOut_YPos), &DisplayDebug_Params._fOut_YPos, sizeof(DisplayDebug_Params._fOut_YPos));
};

// Function DishonoredGame.DishonoredPawn.DisplayDebug_Native
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[32321])
// Parameter Info:
// class AHUD*                    _pHUD                          (CPF_Parm)
// float                          _rfOut_YL                      (CPF_Parm | CPF_OutParm)
// float                          _rfOut_YPos                    (CPF_Parm | CPF_OutParm)

void ADishonoredPawn::DisplayDebug_Native(class AHUD* _pHUD, float& _rfOut_YL, float& _rfOut_YPos)
{
	static UFunction* uFnDisplayDebug_Native = nullptr;

	if (!uFnDisplayDebug_Native)
	{
		uFnDisplayDebug_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredPawn.DisplayDebug_Native");
	}

	ADishonoredPawn_execDisplayDebug_Native_Params DisplayDebug_Native_Params;
	memset(&DisplayDebug_Native_Params, 0, sizeof(DisplayDebug_Native_Params));
	DisplayDebug_Native_Params._pHUD = _pHUD;
	memcpy_s(&DisplayDebug_Native_Params._rfOut_YL, sizeof(DisplayDebug_Native_Params._rfOut_YL), &_rfOut_YL, sizeof(_rfOut_YL));
	memcpy_s(&DisplayDebug_Native_Params._rfOut_YPos, sizeof(DisplayDebug_Native_Params._rfOut_YPos), &_rfOut_YPos, sizeof(_rfOut_YPos));

	this->ProcessEvent(uFnDisplayDebug_Native, &DisplayDebug_Native_Params, nullptr);

	memcpy_s(&_rfOut_YL, sizeof(_rfOut_YL), &DisplayDebug_Native_Params._rfOut_YL, sizeof(DisplayDebug_Native_Params._rfOut_YL));
	memcpy_s(&_rfOut_YPos, sizeof(_rfOut_YPos), &DisplayDebug_Native_Params._rfOut_YPos, sizeof(DisplayDebug_Native_Params._rfOut_YPos));
};

// Function DishonoredGame.DishonoredRoute.ResolveRouteIndex
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[25166])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        idx                            (CPF_Parm)
// ERouteDirection                RouteDirection                 (CPF_Parm)
// uint8_t                        out_bComplete                  (CPF_Parm | CPF_OutParm)
// uint8_t                        out_bReverse                   (CPF_Parm | CPF_OutParm)

int32_t ADishonoredRoute::ResolveRouteIndex(int32_t idx, ERouteDirection RouteDirection, uint8_t& out_bComplete, uint8_t& out_bReverse)
{
	static UFunction* uFnResolveRouteIndex = nullptr;

	if (!uFnResolveRouteIndex)
	{
		uFnResolveRouteIndex = UFunction::FindFunction("Function DishonoredGame.DishonoredRoute.ResolveRouteIndex");
	}

	ADishonoredRoute_execResolveRouteIndex_Params ResolveRouteIndex_Params;
	memset(&ResolveRouteIndex_Params, 0, sizeof(ResolveRouteIndex_Params));
	memcpy_s(&ResolveRouteIndex_Params.idx, sizeof(ResolveRouteIndex_Params.idx), &idx, sizeof(idx));
	memcpy_s(&ResolveRouteIndex_Params.RouteDirection, sizeof(ResolveRouteIndex_Params.RouteDirection), &RouteDirection, sizeof(RouteDirection));
	memcpy_s(&ResolveRouteIndex_Params.out_bComplete, sizeof(ResolveRouteIndex_Params.out_bComplete), &out_bComplete, sizeof(out_bComplete));
	memcpy_s(&ResolveRouteIndex_Params.out_bReverse, sizeof(ResolveRouteIndex_Params.out_bReverse), &out_bReverse, sizeof(out_bReverse));

	this->ProcessEvent(uFnResolveRouteIndex, &ResolveRouteIndex_Params, nullptr);

	memcpy_s(&out_bComplete, sizeof(out_bComplete), &ResolveRouteIndex_Params.out_bComplete, sizeof(ResolveRouteIndex_Params.out_bComplete));
	memcpy_s(&out_bReverse, sizeof(out_bReverse), &ResolveRouteIndex_Params.out_bReverse, sizeof(ResolveRouteIndex_Params.out_bReverse));

	return ResolveRouteIndex_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredRoute.OnToggle
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[23663])
// Parameter Info:
// class USeqAct_Toggle*          _pAction                       (CPF_Parm)

void ADishonoredRoute::OnToggle(class USeqAct_Toggle* _pAction)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function DishonoredGame.DishonoredRoute.OnToggle");
	}

	ADishonoredRoute_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	OnToggle_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function DishonoredGame.DishonoredViewportClient.RemoveNPCView
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class ADisDebugNPCController*  _pPossessingController         (CPF_Parm)

void UDishonoredViewportClient::RemoveNPCView(class ADisDebugNPCController* _pPossessingController)
{
	static UFunction* uFnRemoveNPCView = nullptr;

	if (!uFnRemoveNPCView)
	{
		uFnRemoveNPCView = UFunction::FindFunction("Function DishonoredGame.DishonoredViewportClient.RemoveNPCView");
	}

	UDishonoredViewportClient_execRemoveNPCView_Params RemoveNPCView_Params;
	memset(&RemoveNPCView_Params, 0, sizeof(RemoveNPCView_Params));
	RemoveNPCView_Params._pPossessingController = _pPossessingController;

	this->ProcessEvent(uFnRemoveNPCView, &RemoveNPCView_Params, nullptr);
};

// Function DishonoredGame.DishonoredViewportClient.AddNPCView
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class ADisDebugNPCController*  _pPossessingController         (CPF_Parm)
// int32_t                        iViewIndex                     (CPF_Parm)

void UDishonoredViewportClient::AddNPCView(class ADisDebugNPCController* _pPossessingController, int32_t iViewIndex)
{
	static UFunction* uFnAddNPCView = nullptr;

	if (!uFnAddNPCView)
	{
		uFnAddNPCView = UFunction::FindFunction("Function DishonoredGame.DishonoredViewportClient.AddNPCView");
	}

	UDishonoredViewportClient_execAddNPCView_Params AddNPCView_Params;
	memset(&AddNPCView_Params, 0, sizeof(AddNPCView_Params));
	AddNPCView_Params._pPossessingController = _pPossessingController;
	memcpy_s(&AddNPCView_Params.iViewIndex, sizeof(AddNPCView_Params.iViewIndex), &iViewIndex, sizeof(iViewIndex));

	this->ProcessEvent(uFnAddNPCView, &AddNPCView_Params, nullptr);
};

// Function DishonoredGame.DishonoredViewportClient.DrawTransition
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 _pCanvas                       (CPF_Parm)

void UDishonoredViewportClient::DrawTransition(class UCanvas* _pCanvas)
{
	static UFunction* uFnDrawTransition = nullptr;

	if (!uFnDrawTransition)
	{
		uFnDrawTransition = UFunction::FindFunction("Function DishonoredGame.DishonoredViewportClient.DrawTransition");
	}

	UDishonoredViewportClient_execDrawTransition_Params DrawTransition_Params;
	memset(&DrawTransition_Params, 0, sizeof(DrawTransition_Params));
	DrawTransition_Params._pCanvas = _pCanvas;

	this->ProcessEvent(uFnDrawTransition, &DrawTransition_Params, nullptr);
};

// Function DishonoredGame.DishonoredViewportClient.PostRender
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 _pCanvas                       (CPF_Parm)

void UDishonoredViewportClient::eventPostRender(class UCanvas* _pCanvas)
{
	static UFunction* uFnPostRender = nullptr;

	if (!uFnPostRender)
	{
		uFnPostRender = UFunction::FindFunction("Function DishonoredGame.DishonoredViewportClient.PostRender");
	}

	UDishonoredViewportClient_eventPostRender_Params PostRender_Params;
	memset(&PostRender_Params, 0, sizeof(PostRender_Params));
	PostRender_Params._pCanvas = _pCanvas;

	this->ProcessEvent(uFnPostRender, &PostRender_Params, nullptr);
};

// Function DishonoredGame.DishonoredViewportClient.PostRender_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44363])
// Parameter Info:
// class UCanvas*                 _pCanvas                       (CPF_Parm)

void UDishonoredViewportClient::PostRender_Native(class UCanvas* _pCanvas)
{
	static UFunction* uFnPostRender_Native = nullptr;

	if (!uFnPostRender_Native)
	{
		uFnPostRender_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredViewportClient.PostRender_Native");
	}

	UDishonoredViewportClient_execPostRender_Native_Params PostRender_Native_Params;
	memset(&PostRender_Native_Params, 0, sizeof(PostRender_Native_Params));
	PostRender_Native_Params._pCanvas = _pCanvas;

	this->ProcessEvent(uFnPostRender_Native, &PostRender_Native_Params, nullptr);
};

// Function DishonoredGame.DisParticleSystemComponent.InitializeForPool
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35594])
// Parameter Info:

void UDisParticleSystemComponent::InitializeForPool()
{
	static UFunction* uFnInitializeForPool = nullptr;

	if (!uFnInitializeForPool)
	{
		uFnInitializeForPool = UFunction::FindFunction("Function DishonoredGame.DisParticleSystemComponent.InitializeForPool");
	}

	UDisParticleSystemComponent_execInitializeForPool_Params InitializeForPool_Params;
	memset(&InitializeForPool_Params, 0, sizeof(InitializeForPool_Params));

	this->ProcessEvent(uFnInitializeForPool, &InitializeForPool_Params, nullptr);
};

// Function DishonoredGame.DisProtectionTuneSource.OnToggle
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[23663])
// Parameter Info:
// class USeqAct_Toggle*          _pAction                       (CPF_Parm)

void ADisProtectionTuneSource::OnToggle(class USeqAct_Toggle* _pAction)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function DishonoredGame.DisProtectionTuneSource.OnToggle");
	}

	ADisProtectionTuneSource_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	OnToggle_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function DishonoredGame.DisSkeletalBreakable.TakeDamage
// [0x00024C00] (FUNC_Native | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[13766])
// Parameter Info:
// int32_t                        Damage                         (CPF_Parm)
// class AController*             InstigatedBy                   (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 Momentum                       (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_OptionalParm | CPF_Parm)
// class AActor*                  DamageCauser                   (CPF_OptionalParm | CPF_Parm)

void ADisSkeletalBreakable::eventTakeDamage(int32_t Damage, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static UFunction* uFnTakeDamage = nullptr;

	if (!uFnTakeDamage)
	{
		uFnTakeDamage = UFunction::FindFunction("Function DishonoredGame.DisSkeletalBreakable.TakeDamage");
	}

	ADisSkeletalBreakable_eventTakeDamage_Params TakeDamage_Params;
	memset(&TakeDamage_Params, 0, sizeof(TakeDamage_Params));
	memcpy_s(&TakeDamage_Params.Damage, sizeof(TakeDamage_Params.Damage), &Damage, sizeof(Damage));
	TakeDamage_Params.InstigatedBy = InstigatedBy;
	memcpy_s(&TakeDamage_Params.HitLocation, sizeof(TakeDamage_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&TakeDamage_Params.Momentum, sizeof(TakeDamage_Params.Momentum), &Momentum, sizeof(Momentum));
	TakeDamage_Params.DamageType = DamageType;
	memcpy_s(&TakeDamage_Params.HitInfo, sizeof(TakeDamage_Params.HitInfo), &HitInfo, sizeof(HitInfo));
	TakeDamage_Params.DamageCauser = DamageCauser;

	this->ProcessEvent(uFnTakeDamage, &TakeDamage_Params, nullptr);
};

// Function DishonoredGame.DisSkeletalBreakable.TakeDamage_Native
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[45311])
// Parameter Info:
// int32_t                        _Damage                        (CPF_Parm)
// class AController*             _pInstigatedBy                 (CPF_Parm)
// struct FVector                 _HitLocation                   (CPF_Parm)
// struct FVector                 _Momentum                      (CPF_Parm)
// class UClass*                  _pDamageType                   (CPF_Parm)
// struct FTraceHitInfo           _HitInfo                       (CPF_OptionalParm | CPF_Parm)
// class AActor*                  _pDamageCauser                 (CPF_OptionalParm | CPF_Parm)

void ADisSkeletalBreakable::TakeDamage_Native(int32_t _Damage, class AController* _pInstigatedBy, const struct FVector& _HitLocation, const struct FVector& _Momentum, class UClass* _pDamageType, const struct FTraceHitInfo& _HitInfo, class AActor* _pDamageCauser)
{
	static UFunction* uFnTakeDamage_Native = nullptr;

	if (!uFnTakeDamage_Native)
	{
		uFnTakeDamage_Native = UFunction::FindFunction("Function DishonoredGame.DisSkeletalBreakable.TakeDamage_Native");
	}

	ADisSkeletalBreakable_execTakeDamage_Native_Params TakeDamage_Native_Params;
	memset(&TakeDamage_Native_Params, 0, sizeof(TakeDamage_Native_Params));
	memcpy_s(&TakeDamage_Native_Params._Damage, sizeof(TakeDamage_Native_Params._Damage), &_Damage, sizeof(_Damage));
	TakeDamage_Native_Params._pInstigatedBy = _pInstigatedBy;
	memcpy_s(&TakeDamage_Native_Params._HitLocation, sizeof(TakeDamage_Native_Params._HitLocation), &_HitLocation, sizeof(_HitLocation));
	memcpy_s(&TakeDamage_Native_Params._Momentum, sizeof(TakeDamage_Native_Params._Momentum), &_Momentum, sizeof(_Momentum));
	TakeDamage_Native_Params._pDamageType = _pDamageType;
	memcpy_s(&TakeDamage_Native_Params._HitInfo, sizeof(TakeDamage_Native_Params._HitInfo), &_HitInfo, sizeof(_HitInfo));
	TakeDamage_Native_Params._pDamageCauser = _pDamageCauser;

	this->ProcessEvent(uFnTakeDamage_Native, &TakeDamage_Native_Params, nullptr);
};

// Function DishonoredGame.DisSkeletalBreakable.BreakConstraint
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 _Impulse                       (CPF_Parm)
// struct FVector                 _HitLocation                   (CPF_Parm)
// class FName                    _JointName                     (CPF_Parm)

void ADisSkeletalBreakable::eventBreakConstraint(const struct FVector& _Impulse, const struct FVector& _HitLocation, const class FName& _JointName)
{
	static UFunction* uFnBreakConstraint = nullptr;

	if (!uFnBreakConstraint)
	{
		uFnBreakConstraint = UFunction::FindFunction("Function DishonoredGame.DisSkeletalBreakable.BreakConstraint");
	}

	ADisSkeletalBreakable_eventBreakConstraint_Params BreakConstraint_Params;
	memset(&BreakConstraint_Params, 0, sizeof(BreakConstraint_Params));
	memcpy_s(&BreakConstraint_Params._Impulse, sizeof(BreakConstraint_Params._Impulse), &_Impulse, sizeof(_Impulse));
	memcpy_s(&BreakConstraint_Params._HitLocation, sizeof(BreakConstraint_Params._HitLocation), &_HitLocation, sizeof(_HitLocation));
	memcpy_s(&BreakConstraint_Params._JointName, sizeof(BreakConstraint_Params._JointName), &_JointName, sizeof(_JointName));

	this->ProcessEvent(uFnBreakConstraint, &BreakConstraint_Params, nullptr);
};

// Function DishonoredGame.DishonoredUsableObject.OnToggleHidden
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_ToggleHidden*    Action                         (CPF_Parm)

void ADishonoredUsableObject::OnToggleHidden(class USeqAct_ToggleHidden* Action)
{
	static UFunction* uFnOnToggleHidden = nullptr;

	if (!uFnOnToggleHidden)
	{
		uFnOnToggleHidden = UFunction::FindFunction("Function DishonoredGame.DishonoredUsableObject.OnToggleHidden");
	}

	ADishonoredUsableObject_execOnToggleHidden_Params OnToggleHidden_Params;
	memset(&OnToggleHidden_Params, 0, sizeof(OnToggleHidden_Params));
	OnToggleHidden_Params.Action = Action;

	this->ProcessEvent(uFnOnToggleHidden, &OnToggleHidden_Params, nullptr);
};

// Function DishonoredGame.DishonoredUsableObject.OnToggle
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Toggle*          _pAction                       (CPF_Parm)

void ADishonoredUsableObject::OnToggle(class USeqAct_Toggle* _pAction)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function DishonoredGame.DishonoredUsableObject.OnToggle");
	}

	ADishonoredUsableObject_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	OnToggle_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function DishonoredGame.DishonoredUsableObject.OnToggle_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[23664])
// Parameter Info:
// class USeqAct_Toggle*          _pAction                       (CPF_Parm)

void ADishonoredUsableObject::OnToggle_Native(class USeqAct_Toggle* _pAction)
{
	static UFunction* uFnOnToggle_Native = nullptr;

	if (!uFnOnToggle_Native)
	{
		uFnOnToggle_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredUsableObject.OnToggle_Native");
	}

	ADishonoredUsableObject_execOnToggle_Native_Params OnToggle_Native_Params;
	memset(&OnToggle_Native_Params, 0, sizeof(OnToggle_Native_Params));
	OnToggle_Native_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnToggle_Native, &OnToggle_Native_Params, nullptr);
};

// Function DishonoredGame.DisProjectileLauncher.OnToggle
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Toggle*          _pAction                       (CPF_Parm)

void ADisProjectileLauncher::OnToggle(class USeqAct_Toggle* _pAction)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function DishonoredGame.DisProjectileLauncher.OnToggle");
	}

	ADisProjectileLauncher_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	OnToggle_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function DishonoredGame.DisProjectileLauncher.OnToggle_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[23664])
// Parameter Info:
// class USeqAct_Toggle*          _pAction                       (CPF_Parm)

void ADisProjectileLauncher::OnToggle_Native(class USeqAct_Toggle* _pAction)
{
	static UFunction* uFnOnToggle_Native = nullptr;

	if (!uFnOnToggle_Native)
	{
		uFnOnToggle_Native = UFunction::FindFunction("Function DishonoredGame.DisProjectileLauncher.OnToggle_Native");
	}

	ADisProjectileLauncher_execOnToggle_Native_Params OnToggle_Native_Params;
	memset(&OnToggle_Native_Params, 0, sizeof(OnToggle_Native_Params));
	OnToggle_Native_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnToggle_Native, &OnToggle_Native_Params, nullptr);
};

// Function DishonoredGame.DisProjectileLauncher.BaseChange
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[311])
// Parameter Info:

void ADisProjectileLauncher::eventBaseChange()
{
	static UFunction* uFnBaseChange = nullptr;

	if (!uFnBaseChange)
	{
		uFnBaseChange = UFunction::FindFunction("Function DishonoredGame.DisProjectileLauncher.BaseChange");
	}

	ADisProjectileLauncher_eventBaseChange_Params BaseChange_Params;
	memset(&BaseChange_Params, 0, sizeof(BaseChange_Params));

	this->ProcessEvent(uFnBaseChange, &BaseChange_Params, nullptr);
};

// Function DishonoredGame.DisTrigger.CallUsedBy
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   User                           (CPF_Parm)

bool ADisTrigger::eventCallUsedBy(class APawn* User)
{
	static UFunction* uFnCallUsedBy = nullptr;

	if (!uFnCallUsedBy)
	{
		uFnCallUsedBy = UFunction::FindFunction("Function DishonoredGame.DisTrigger.CallUsedBy");
	}

	ADisTrigger_eventCallUsedBy_Params CallUsedBy_Params;
	memset(&CallUsedBy_Params, 0, sizeof(CallUsedBy_Params));
	CallUsedBy_Params.User = User;

	this->ProcessEvent(uFnCallUsedBy, &CallUsedBy_Params, nullptr);

	return CallUsedBy_Params.ReturnValue;
};

// Function DishonoredGame.DisTriggerAbstractItem.OnToggle
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Toggle*          _pAction                       (CPF_Parm)

void ADisTriggerAbstractItem::OnToggle(class USeqAct_Toggle* _pAction)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function DishonoredGame.DisTriggerAbstractItem.OnToggle");
	}

	ADisTriggerAbstractItem_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	OnToggle_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function DishonoredGame.DisTriggerAbstractItem.OnToggle_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[23664])
// Parameter Info:
// class USeqAct_Toggle*          _pAction                       (CPF_Parm)

void ADisTriggerAbstractItem::OnToggle_Native(class USeqAct_Toggle* _pAction)
{
	static UFunction* uFnOnToggle_Native = nullptr;

	if (!uFnOnToggle_Native)
	{
		uFnOnToggle_Native = UFunction::FindFunction("Function DishonoredGame.DisTriggerAbstractItem.OnToggle_Native");
	}

	ADisTriggerAbstractItem_execOnToggle_Native_Params OnToggle_Native_Params;
	memset(&OnToggle_Native_Params, 0, sizeof(OnToggle_Native_Params));
	OnToggle_Native_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnToggle_Native, &OnToggle_Native_Params, nullptr);
};

// Function DishonoredGame.DisTriggerAbstractItem.CallUsedBy
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   User                           (CPF_Parm)

bool ADisTriggerAbstractItem::eventCallUsedBy(class APawn* User)
{
	static UFunction* uFnCallUsedBy = nullptr;

	if (!uFnCallUsedBy)
	{
		uFnCallUsedBy = UFunction::FindFunction("Function DishonoredGame.DisTriggerAbstractItem.CallUsedBy");
	}

	ADisTriggerAbstractItem_eventCallUsedBy_Params CallUsedBy_Params;
	memset(&CallUsedBy_Params, 0, sizeof(CallUsedBy_Params));
	CallUsedBy_Params.User = User;

	this->ProcessEvent(uFnCallUsedBy, &CallUsedBy_Params, nullptr);

	return CallUsedBy_Params.ReturnValue;
};

// Function DishonoredGame.DisTripwire.TakeDamage
// [0x00024C00] (FUNC_Native | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[13766])
// Parameter Info:
// int32_t                        Damage                         (CPF_Parm)
// class AController*             InstigatedBy                   (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 Momentum                       (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_OptionalParm | CPF_Parm)
// class AActor*                  DamageCauser                   (CPF_OptionalParm | CPF_Parm)

void ADisTripwire::eventTakeDamage(int32_t Damage, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static UFunction* uFnTakeDamage = nullptr;

	if (!uFnTakeDamage)
	{
		uFnTakeDamage = UFunction::FindFunction("Function DishonoredGame.DisTripwire.TakeDamage");
	}

	ADisTripwire_eventTakeDamage_Params TakeDamage_Params;
	memset(&TakeDamage_Params, 0, sizeof(TakeDamage_Params));
	memcpy_s(&TakeDamage_Params.Damage, sizeof(TakeDamage_Params.Damage), &Damage, sizeof(Damage));
	TakeDamage_Params.InstigatedBy = InstigatedBy;
	memcpy_s(&TakeDamage_Params.HitLocation, sizeof(TakeDamage_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&TakeDamage_Params.Momentum, sizeof(TakeDamage_Params.Momentum), &Momentum, sizeof(Momentum));
	TakeDamage_Params.DamageType = DamageType;
	memcpy_s(&TakeDamage_Params.HitInfo, sizeof(TakeDamage_Params.HitInfo), &HitInfo, sizeof(HitInfo));
	TakeDamage_Params.DamageCauser = DamageCauser;

	this->ProcessEvent(uFnTakeDamage, &TakeDamage_Params, nullptr);
};

// Function DishonoredGame.DisTripwire.TakeDamage_Native
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[45311])
// Parameter Info:
// int32_t                        _Damage                        (CPF_Parm)
// class AController*             _pInstigatedBy                 (CPF_Parm)
// struct FVector                 _HitLocation                   (CPF_Parm)
// struct FVector                 _Momentum                      (CPF_Parm)
// class UClass*                  _pDamageType                   (CPF_Parm)
// struct FTraceHitInfo           _HitInfo                       (CPF_OptionalParm | CPF_Parm)
// class AActor*                  _pDamageCauser                 (CPF_OptionalParm | CPF_Parm)

void ADisTripwire::TakeDamage_Native(int32_t _Damage, class AController* _pInstigatedBy, const struct FVector& _HitLocation, const struct FVector& _Momentum, class UClass* _pDamageType, const struct FTraceHitInfo& _HitInfo, class AActor* _pDamageCauser)
{
	static UFunction* uFnTakeDamage_Native = nullptr;

	if (!uFnTakeDamage_Native)
	{
		uFnTakeDamage_Native = UFunction::FindFunction("Function DishonoredGame.DisTripwire.TakeDamage_Native");
	}

	ADisTripwire_execTakeDamage_Native_Params TakeDamage_Native_Params;
	memset(&TakeDamage_Native_Params, 0, sizeof(TakeDamage_Native_Params));
	memcpy_s(&TakeDamage_Native_Params._Damage, sizeof(TakeDamage_Native_Params._Damage), &_Damage, sizeof(_Damage));
	TakeDamage_Native_Params._pInstigatedBy = _pInstigatedBy;
	memcpy_s(&TakeDamage_Native_Params._HitLocation, sizeof(TakeDamage_Native_Params._HitLocation), &_HitLocation, sizeof(_HitLocation));
	memcpy_s(&TakeDamage_Native_Params._Momentum, sizeof(TakeDamage_Native_Params._Momentum), &_Momentum, sizeof(_Momentum));
	TakeDamage_Native_Params._pDamageType = _pDamageType;
	memcpy_s(&TakeDamage_Native_Params._HitInfo, sizeof(TakeDamage_Native_Params._HitInfo), &_HitInfo, sizeof(_HitInfo));
	TakeDamage_Native_Params._pDamageCauser = _pDamageCauser;

	this->ProcessEvent(uFnTakeDamage_Native, &TakeDamage_Native_Params, nullptr);
};

// Function DishonoredGame.DisWatchTower.TakeDamage
// [0x00024C00] (FUNC_Native | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[13766])
// Parameter Info:
// int32_t                        Damage                         (CPF_Parm)
// class AController*             InstigatedBy                   (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 Momentum                       (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_OptionalParm | CPF_Parm)
// class AActor*                  DamageCauser                   (CPF_OptionalParm | CPF_Parm)

void ADisWatchTower::eventTakeDamage(int32_t Damage, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static UFunction* uFnTakeDamage = nullptr;

	if (!uFnTakeDamage)
	{
		uFnTakeDamage = UFunction::FindFunction("Function DishonoredGame.DisWatchTower.TakeDamage");
	}

	ADisWatchTower_eventTakeDamage_Params TakeDamage_Params;
	memset(&TakeDamage_Params, 0, sizeof(TakeDamage_Params));
	memcpy_s(&TakeDamage_Params.Damage, sizeof(TakeDamage_Params.Damage), &Damage, sizeof(Damage));
	TakeDamage_Params.InstigatedBy = InstigatedBy;
	memcpy_s(&TakeDamage_Params.HitLocation, sizeof(TakeDamage_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&TakeDamage_Params.Momentum, sizeof(TakeDamage_Params.Momentum), &Momentum, sizeof(Momentum));
	TakeDamage_Params.DamageType = DamageType;
	memcpy_s(&TakeDamage_Params.HitInfo, sizeof(TakeDamage_Params.HitInfo), &HitInfo, sizeof(HitInfo));
	TakeDamage_Params.DamageCauser = DamageCauser;

	this->ProcessEvent(uFnTakeDamage, &TakeDamage_Params, nullptr);
};

// Function DishonoredGame.DisWatchTower.TakeDamage_Native
// [0x00424400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[45311])
// Parameter Info:
// class AController*             _pInstigatedBy                 (CPF_Parm)
// struct FVector                 _HitLocation                   (CPF_Parm)
// class UClass*                  _pDamageType                   (CPF_Parm)
// struct FTraceHitInfo           _HitInfo                       (CPF_OptionalParm | CPF_Parm)
// class AActor*                  _pDamageCauser                 (CPF_OptionalParm | CPF_Parm)
// int32_t                        _rDamage                       (CPF_Parm | CPF_OutParm)
// struct FVector                 _rMomentum                     (CPF_Parm | CPF_OutParm)

void ADisWatchTower::TakeDamage_Native(class AController* _pInstigatedBy, const struct FVector& _HitLocation, class UClass* _pDamageType, const struct FTraceHitInfo& _HitInfo, class AActor* _pDamageCauser, int32_t& _rDamage, struct FVector& _rMomentum)
{
	static UFunction* uFnTakeDamage_Native = nullptr;

	if (!uFnTakeDamage_Native)
	{
		uFnTakeDamage_Native = UFunction::FindFunction("Function DishonoredGame.DisWatchTower.TakeDamage_Native");
	}

	ADisWatchTower_execTakeDamage_Native_Params TakeDamage_Native_Params;
	memset(&TakeDamage_Native_Params, 0, sizeof(TakeDamage_Native_Params));
	TakeDamage_Native_Params._pInstigatedBy = _pInstigatedBy;
	memcpy_s(&TakeDamage_Native_Params._HitLocation, sizeof(TakeDamage_Native_Params._HitLocation), &_HitLocation, sizeof(_HitLocation));
	TakeDamage_Native_Params._pDamageType = _pDamageType;
	memcpy_s(&TakeDamage_Native_Params._HitInfo, sizeof(TakeDamage_Native_Params._HitInfo), &_HitInfo, sizeof(_HitInfo));
	TakeDamage_Native_Params._pDamageCauser = _pDamageCauser;
	memcpy_s(&TakeDamage_Native_Params._rDamage, sizeof(TakeDamage_Native_Params._rDamage), &_rDamage, sizeof(_rDamage));
	memcpy_s(&TakeDamage_Native_Params._rMomentum, sizeof(TakeDamage_Native_Params._rMomentum), &_rMomentum, sizeof(_rMomentum));

	this->ProcessEvent(uFnTakeDamage_Native, &TakeDamage_Native_Params, nullptr);

	memcpy_s(&_rDamage, sizeof(_rDamage), &TakeDamage_Native_Params._rDamage, sizeof(TakeDamage_Native_Params._rDamage));
	memcpy_s(&_rMomentum, sizeof(_rMomentum), &TakeDamage_Native_Params._rMomentum, sizeof(TakeDamage_Native_Params._rMomentum));
};

// Function DishonoredGame.DisWatchTower.OnWatchTowerShootAtTarget
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44005])
// Parameter Info:
// class UDisSeqAct_WatchTowerShootAtTarget* _pAction                       (CPF_Parm)

void ADisWatchTower::OnWatchTowerShootAtTarget(class UDisSeqAct_WatchTowerShootAtTarget* _pAction)
{
	static UFunction* uFnOnWatchTowerShootAtTarget = nullptr;

	if (!uFnOnWatchTowerShootAtTarget)
	{
		uFnOnWatchTowerShootAtTarget = UFunction::FindFunction("Function DishonoredGame.DisWatchTower.OnWatchTowerShootAtTarget");
	}

	ADisWatchTower_execOnWatchTowerShootAtTarget_Params OnWatchTowerShootAtTarget_Params;
	memset(&OnWatchTowerShootAtTarget_Params, 0, sizeof(OnWatchTowerShootAtTarget_Params));
	OnWatchTowerShootAtTarget_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnWatchTowerShootAtTarget, &OnWatchTowerShootAtTarget_Params, nullptr);
};

// Function DishonoredGame.DisWatchTower.OnSetDisposition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43980])
// Parameter Info:
// class UDisSeqAct_SetDisposition* _pAction                       (CPF_Parm)

void ADisWatchTower::OnSetDisposition(class UDisSeqAct_SetDisposition* _pAction)
{
	static UFunction* uFnOnSetDisposition = nullptr;

	if (!uFnOnSetDisposition)
	{
		uFnOnSetDisposition = UFunction::FindFunction("Function DishonoredGame.DisWatchTower.OnSetDisposition");
	}

	ADisWatchTower_execOnSetDisposition_Params OnSetDisposition_Params;
	memset(&OnSetDisposition_Params, 0, sizeof(OnSetDisposition_Params));
	OnSetDisposition_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnSetDisposition, &OnSetDisposition_Params, nullptr);
};

// Function DishonoredGame.DisTweaks_Faction.OnSetDisposition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43980])
// Parameter Info:
// class UDisSeqAct_SetDisposition* _pAction                       (CPF_Parm)

void UDisTweaks_Faction::OnSetDisposition(class UDisSeqAct_SetDisposition* _pAction)
{
	static UFunction* uFnOnSetDisposition = nullptr;

	if (!uFnOnSetDisposition)
	{
		uFnOnSetDisposition = UFunction::FindFunction("Function DishonoredGame.DisTweaks_Faction.OnSetDisposition");
	}

	UDisTweaks_Faction_execOnSetDisposition_Params OnSetDisposition_Params;
	memset(&OnSetDisposition_Params, 0, sizeof(OnSetDisposition_Params));
	OnSetDisposition_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnSetDisposition, &OnSetDisposition_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerBase.Req_EquipmentIconImage
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44708])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        _ItemIdx                       (CPF_Parm)

class FString UDisGFxMoviePlayerBase::Req_EquipmentIconImage(int32_t _ItemIdx)
{
	static UFunction* uFnReq_EquipmentIconImage = nullptr;

	if (!uFnReq_EquipmentIconImage)
	{
		uFnReq_EquipmentIconImage = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerBase.Req_EquipmentIconImage");
	}

	UDisGFxMoviePlayerBase_execReq_EquipmentIconImage_Params Req_EquipmentIconImage_Params;
	memset(&Req_EquipmentIconImage_Params, 0, sizeof(Req_EquipmentIconImage_Params));
	memcpy_s(&Req_EquipmentIconImage_Params._ItemIdx, sizeof(Req_EquipmentIconImage_Params._ItemIdx), &_ItemIdx, sizeof(_ItemIdx));

	this->ProcessEvent(uFnReq_EquipmentIconImage, &Req_EquipmentIconImage_Params, nullptr);

	return Req_EquipmentIconImage_Params.ReturnValue;
};

// Function DishonoredGame.DisGFxMoviePlayerBase.HideMessageBox
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35464])
// Parameter Info:

void UDisGFxMoviePlayerBase::HideMessageBox()
{
	static UFunction* uFnHideMessageBox = nullptr;

	if (!uFnHideMessageBox)
	{
		uFnHideMessageBox = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerBase.HideMessageBox");
	}

	UDisGFxMoviePlayerBase_execHideMessageBox_Params HideMessageBox_Params;
	memset(&HideMessageBox_Params, 0, sizeof(HideMessageBox_Params));

	this->ProcessEvent(uFnHideMessageBox, &HideMessageBox_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerBase.AddMessageBoxTimer
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30028])
// Parameter Info:
// float                          _fDuration                     (CPF_Parm)

void UDisGFxMoviePlayerBase::AddMessageBoxTimer(float _fDuration)
{
	static UFunction* uFnAddMessageBoxTimer = nullptr;

	if (!uFnAddMessageBoxTimer)
	{
		uFnAddMessageBoxTimer = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerBase.AddMessageBoxTimer");
	}

	UDisGFxMoviePlayerBase_execAddMessageBoxTimer_Params AddMessageBoxTimer_Params;
	memset(&AddMessageBoxTimer_Params, 0, sizeof(AddMessageBoxTimer_Params));
	memcpy_s(&AddMessageBoxTimer_Params._fDuration, sizeof(AddMessageBoxTimer_Params._fDuration), &_fDuration, sizeof(_fDuration));

	this->ProcessEvent(uFnAddMessageBoxTimer, &AddMessageBoxTimer_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerBase.ShowMessageBox
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44892])
// Parameter Info:
// class FString                  _rMessage                      (CPF_Parm | CPF_NeedCtorLink)
// class FString                  _rButton0                      (CPF_Parm | CPF_NeedCtorLink)
// class FString                  _rButton1                      (CPF_Parm | CPF_NeedCtorLink)
// class FString                  _rButton2                      (CPF_Parm | CPF_NeedCtorLink)

void UDisGFxMoviePlayerBase::ShowMessageBox(const class FString& _rMessage, const class FString& _rButton0, const class FString& _rButton1, const class FString& _rButton2)
{
	static UFunction* uFnShowMessageBox = nullptr;

	if (!uFnShowMessageBox)
	{
		uFnShowMessageBox = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerBase.ShowMessageBox");
	}

	UDisGFxMoviePlayerBase_execShowMessageBox_Params ShowMessageBox_Params;
	memset(&ShowMessageBox_Params, 0, sizeof(ShowMessageBox_Params));
	memcpy_s(&ShowMessageBox_Params._rMessage, sizeof(ShowMessageBox_Params._rMessage), &_rMessage, sizeof(_rMessage));
	memcpy_s(&ShowMessageBox_Params._rButton0, sizeof(ShowMessageBox_Params._rButton0), &_rButton0, sizeof(_rButton0));
	memcpy_s(&ShowMessageBox_Params._rButton1, sizeof(ShowMessageBox_Params._rButton1), &_rButton1, sizeof(_rButton1));
	memcpy_s(&ShowMessageBox_Params._rButton2, sizeof(ShowMessageBox_Params._rButton2), &_rButton2, sizeof(_rButton2));

	this->ProcessEvent(uFnShowMessageBox, &ShowMessageBox_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerBase.FormatText
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35122])
// Parameter Info:
// class FString                  _rTextVarPath                  (CPF_Parm | CPF_NeedCtorLink)

void UDisGFxMoviePlayerBase::FormatText(const class FString& _rTextVarPath)
{
	static UFunction* uFnFormatText = nullptr;

	if (!uFnFormatText)
	{
		uFnFormatText = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerBase.FormatText");
	}

	UDisGFxMoviePlayerBase_execFormatText_Params FormatText_Params;
	memset(&FormatText_Params, 0, sizeof(FormatText_Params));
	memcpy_s(&FormatText_Params._rTextVarPath, sizeof(FormatText_Params._rTextVarPath), &_rTextVarPath, sizeof(_rTextVarPath));

	this->ProcessEvent(uFnFormatText, &FormatText_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerBase.OnFocusLost
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[13801])
// Parameter Info:
// int32_t                        _LocalPlayerIndex              (CPF_Parm)

void UDisGFxMoviePlayerBase::eventOnFocusLost(int32_t _LocalPlayerIndex)
{
	static UFunction* uFnOnFocusLost = nullptr;

	if (!uFnOnFocusLost)
	{
		uFnOnFocusLost = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerBase.OnFocusLost");
	}

	UDisGFxMoviePlayerBase_eventOnFocusLost_Params OnFocusLost_Params;
	memset(&OnFocusLost_Params, 0, sizeof(OnFocusLost_Params));
	memcpy_s(&OnFocusLost_Params._LocalPlayerIndex, sizeof(OnFocusLost_Params._LocalPlayerIndex), &_LocalPlayerIndex, sizeof(_LocalPlayerIndex));

	this->ProcessEvent(uFnOnFocusLost, &OnFocusLost_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerBase.OnFocusGained
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[13800])
// Parameter Info:
// int32_t                        _LocalPlayerIndex              (CPF_Parm)

void UDisGFxMoviePlayerBase::eventOnFocusGained(int32_t _LocalPlayerIndex)
{
	static UFunction* uFnOnFocusGained = nullptr;

	if (!uFnOnFocusGained)
	{
		uFnOnFocusGained = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerBase.OnFocusGained");
	}

	UDisGFxMoviePlayerBase_eventOnFocusGained_Params OnFocusGained_Params;
	memset(&OnFocusGained_Params, 0, sizeof(OnFocusGained_Params));
	memcpy_s(&OnFocusGained_Params._LocalPlayerIndex, sizeof(OnFocusGained_Params._LocalPlayerIndex), &_LocalPlayerIndex, sizeof(_LocalPlayerIndex));

	this->ProcessEvent(uFnOnFocusGained, &OnFocusGained_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerBase.WidgetInitialized_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45814])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    _WidgetName                    (CPF_Parm)
// class FName                    _WidgetPath                    (CPF_Parm)
// class UGFxObject*              _pWidget                       (CPF_Parm)

bool UDisGFxMoviePlayerBase::WidgetInitialized_Native(const class FName& _WidgetName, const class FName& _WidgetPath, class UGFxObject* _pWidget)
{
	static UFunction* uFnWidgetInitialized_Native = nullptr;

	if (!uFnWidgetInitialized_Native)
	{
		uFnWidgetInitialized_Native = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerBase.WidgetInitialized_Native");
	}

	UDisGFxMoviePlayerBase_execWidgetInitialized_Native_Params WidgetInitialized_Native_Params;
	memset(&WidgetInitialized_Native_Params, 0, sizeof(WidgetInitialized_Native_Params));
	memcpy_s(&WidgetInitialized_Native_Params._WidgetName, sizeof(WidgetInitialized_Native_Params._WidgetName), &_WidgetName, sizeof(_WidgetName));
	memcpy_s(&WidgetInitialized_Native_Params._WidgetPath, sizeof(WidgetInitialized_Native_Params._WidgetPath), &_WidgetPath, sizeof(_WidgetPath));
	WidgetInitialized_Native_Params._pWidget = _pWidget;

	this->ProcessEvent(uFnWidgetInitialized_Native, &WidgetInitialized_Native_Params, nullptr);

	return WidgetInitialized_Native_Params.ReturnValue;
};

// Function DishonoredGame.DisGFxMoviePlayerBase.WidgetInitialized
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    _WidgetName                    (CPF_Parm)
// class FName                    _WidgetPath                    (CPF_Parm)
// class UGFxObject*              _pWidget                       (CPF_Parm)

bool UDisGFxMoviePlayerBase::eventWidgetInitialized(const class FName& _WidgetName, const class FName& _WidgetPath, class UGFxObject* _pWidget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerBase.WidgetInitialized");
	}

	UDisGFxMoviePlayerBase_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params._WidgetName, sizeof(WidgetInitialized_Params._WidgetName), &_WidgetName, sizeof(_WidgetName));
	memcpy_s(&WidgetInitialized_Params._WidgetPath, sizeof(WidgetInitialized_Params._WidgetPath), &_WidgetPath, sizeof(_WidgetPath));
	WidgetInitialized_Params._pWidget = _pWidget;

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function DishonoredGame.DisGFxMoviePlayerBase.HasFinishedAsyncLoading
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35452])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UDisGFxMoviePlayerBase::HasFinishedAsyncLoading()
{
	static UFunction* uFnHasFinishedAsyncLoading = nullptr;

	if (!uFnHasFinishedAsyncLoading)
	{
		uFnHasFinishedAsyncLoading = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerBase.HasFinishedAsyncLoading");
	}

	UDisGFxMoviePlayerBase_execHasFinishedAsyncLoading_Params HasFinishedAsyncLoading_Params;
	memset(&HasFinishedAsyncLoading_Params, 0, sizeof(HasFinishedAsyncLoading_Params));

	this->ProcessEvent(uFnHasFinishedAsyncLoading, &HasFinishedAsyncLoading_Params, nullptr);

	return HasFinishedAsyncLoading_Params.ReturnValue;
};

// Function DishonoredGame.DisGFxMoviePlayerBase.SetPauseDuringAsyncLoading
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       _bDesiredPauseState            (CPF_Parm)

void UDisGFxMoviePlayerBase::eventSetPauseDuringAsyncLoading(bool _bDesiredPauseState)
{
	static UFunction* uFnSetPauseDuringAsyncLoading = nullptr;

	if (!uFnSetPauseDuringAsyncLoading)
	{
		uFnSetPauseDuringAsyncLoading = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerBase.SetPauseDuringAsyncLoading");
	}

	UDisGFxMoviePlayerBase_eventSetPauseDuringAsyncLoading_Params SetPauseDuringAsyncLoading_Params;
	memset(&SetPauseDuringAsyncLoading_Params, 0, sizeof(SetPauseDuringAsyncLoading_Params));
	SetPauseDuringAsyncLoading_Params._bDesiredPauseState = _bDesiredPauseState;

	this->ProcessEvent(uFnSetPauseDuringAsyncLoading, &SetPauseDuringAsyncLoading_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerBase.CaptureAnalogInput
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30807])
// Parameter Info:
// uint32_t                       _bCapture                      (CPF_Parm)

void UDisGFxMoviePlayerBase::CaptureAnalogInput(bool _bCapture)
{
	static UFunction* uFnCaptureAnalogInput = nullptr;

	if (!uFnCaptureAnalogInput)
	{
		uFnCaptureAnalogInput = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerBase.CaptureAnalogInput");
	}

	UDisGFxMoviePlayerBase_execCaptureAnalogInput_Params CaptureAnalogInput_Params;
	memset(&CaptureAnalogInput_Params, 0, sizeof(CaptureAnalogInput_Params));
	CaptureAnalogInput_Params._bCapture = _bCapture;

	this->ProcessEvent(uFnCaptureAnalogInput, &CaptureAnalogInput_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerBase.Advance
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[28826])
// Parameter Info:
// float                          _fDeltaTime                    (CPF_Parm)

void UDisGFxMoviePlayerBase::Advance(float _fDeltaTime)
{
	static UFunction* uFnAdvance = nullptr;

	if (!uFnAdvance)
	{
		uFnAdvance = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerBase.Advance");
	}

	UDisGFxMoviePlayerBase_execAdvance_Params Advance_Params;
	memset(&Advance_Params, 0, sizeof(Advance_Params));
	memcpy_s(&Advance_Params._fDeltaTime, sizeof(Advance_Params._fDeltaTime), &_fDeltaTime, sizeof(_fDeltaTime));

	this->ProcessEvent(uFnAdvance, &Advance_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerBase.Close
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[3944])
// Parameter Info:
// uint32_t                       _bUnload                       (CPF_OptionalParm | CPF_Parm)

void UDisGFxMoviePlayerBase::Close(bool _bUnload)
{
	static UFunction* uFnClose = nullptr;

	if (!uFnClose)
	{
		uFnClose = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerBase.Close");
	}

	UDisGFxMoviePlayerBase_execClose_Params Close_Params;
	memset(&Close_Params, 0, sizeof(Close_Params));
	Close_Params._bUnload = _bUnload;

	this->ProcessEvent(uFnClose, &Close_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerBase.Start
// [0x00024C00] (FUNC_Native | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[13805])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       _bStartPaused                  (CPF_OptionalParm | CPF_Parm)

bool UDisGFxMoviePlayerBase::eventStart(bool _bStartPaused)
{
	static UFunction* uFnStart = nullptr;

	if (!uFnStart)
	{
		uFnStart = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerBase.Start");
	}

	UDisGFxMoviePlayerBase_eventStart_Params Start_Params;
	memset(&Start_Params, 0, sizeof(Start_Params));
	Start_Params._bStartPaused = _bStartPaused;

	this->ProcessEvent(uFnStart, &Start_Params, nullptr);

	return Start_Params.ReturnValue;
};

// Function DishonoredGame.DisGFxMoviePlayerBase.PreLoad
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[13804])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UDisGFxMoviePlayerBase::eventPreLoad()
{
	static UFunction* uFnPreLoad = nullptr;

	if (!uFnPreLoad)
	{
		uFnPreLoad = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerBase.PreLoad");
	}

	UDisGFxMoviePlayerBase_eventPreLoad_Params PreLoad_Params;
	memset(&PreLoad_Params, 0, sizeof(PreLoad_Params));

	this->ProcessEvent(uFnPreLoad, &PreLoad_Params, nullptr);

	return PreLoad_Params.ReturnValue;
};

// Function DishonoredGame.DisGFxMoviePlayerGamma.OnGammaImageClosed
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43920])
// Parameter Info:

void UDisGFxMoviePlayerGamma::OnGammaImageClosed()
{
	static UFunction* uFnOnGammaImageClosed = nullptr;

	if (!uFnOnGammaImageClosed)
	{
		uFnOnGammaImageClosed = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerGamma.OnGammaImageClosed");
	}

	UDisGFxMoviePlayerGamma_execOnGammaImageClosed_Params OnGammaImageClosed_Params;
	memset(&OnGammaImageClosed_Params, 0, sizeof(OnGammaImageClosed_Params));

	this->ProcessEvent(uFnOnGammaImageClosed, &OnGammaImageClosed_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnMessageBoxConfirm
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43937])
// Parameter Info:
// int32_t                        _ChoiceIdx                     (CPF_Parm)

void UDisGFxMoviePlayerGlobal::OnMessageBoxConfirm(int32_t _ChoiceIdx)
{
	static UFunction* uFnOnMessageBoxConfirm = nullptr;

	if (!uFnOnMessageBoxConfirm)
	{
		uFnOnMessageBoxConfirm = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerGlobal.OnMessageBoxConfirm");
	}

	UDisGFxMoviePlayerGlobal_execOnMessageBoxConfirm_Params OnMessageBoxConfirm_Params;
	memset(&OnMessageBoxConfirm_Params, 0, sizeof(OnMessageBoxConfirm_Params));
	memcpy_s(&OnMessageBoxConfirm_Params._ChoiceIdx, sizeof(OnMessageBoxConfirm_Params._ChoiceIdx), &_ChoiceIdx, sizeof(_ChoiceIdx));

	this->ProcessEvent(uFnOnMessageBoxConfirm, &OnMessageBoxConfirm_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnDLCInaccessbible
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47583])
// Parameter Info:
// uint8_t                        _ControllerId                  (CPF_Parm)

void UDisGFxMoviePlayerGlobal::OnDLCInaccessbible(uint8_t _ControllerId)
{
	static UFunction* uFnOnDLCInaccessbible = nullptr;

	if (!uFnOnDLCInaccessbible)
	{
		uFnOnDLCInaccessbible = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerGlobal.OnDLCInaccessbible");
	}

	UDisGFxMoviePlayerGlobal_execOnDLCInaccessbible_Params OnDLCInaccessbible_Params;
	memset(&OnDLCInaccessbible_Params, 0, sizeof(OnDLCInaccessbible_Params));
	memcpy_s(&OnDLCInaccessbible_Params._ControllerId, sizeof(OnDLCInaccessbible_Params._ControllerId), &_ControllerId, sizeof(_ControllerId));

	this->ProcessEvent(uFnOnDLCInaccessbible, &OnDLCInaccessbible_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnAutoSaveDisabled
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43887])
// Parameter Info:
// uint8_t                        _ControllerId                  (CPF_Parm)

void UDisGFxMoviePlayerGlobal::OnAutoSaveDisabled(uint8_t _ControllerId)
{
	static UFunction* uFnOnAutoSaveDisabled = nullptr;

	if (!uFnOnAutoSaveDisabled)
	{
		uFnOnAutoSaveDisabled = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerGlobal.OnAutoSaveDisabled");
	}

	UDisGFxMoviePlayerGlobal_execOnAutoSaveDisabled_Params OnAutoSaveDisabled_Params;
	memset(&OnAutoSaveDisabled_Params, 0, sizeof(OnAutoSaveDisabled_Params));
	memcpy_s(&OnAutoSaveDisabled_Params._ControllerId, sizeof(OnAutoSaveDisabled_Params._ControllerId), &_ControllerId, sizeof(_ControllerId));

	this->ProcessEvent(uFnOnAutoSaveDisabled, &OnAutoSaveDisabled_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnMainMenuMissionSelected
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43934])
// Parameter Info:
// uint8_t                        _ControllerId                  (CPF_Parm)

void UDisGFxMoviePlayerGlobal::OnMainMenuMissionSelected(uint8_t _ControllerId)
{
	static UFunction* uFnOnMainMenuMissionSelected = nullptr;

	if (!uFnOnMainMenuMissionSelected)
	{
		uFnOnMainMenuMissionSelected = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerGlobal.OnMainMenuMissionSelected");
	}

	UDisGFxMoviePlayerGlobal_execOnMainMenuMissionSelected_Params OnMainMenuMissionSelected_Params;
	memset(&OnMainMenuMissionSelected_Params, 0, sizeof(OnMainMenuMissionSelected_Params));
	memcpy_s(&OnMainMenuMissionSelected_Params._ControllerId, sizeof(OnMainMenuMissionSelected_Params._ControllerId), &_ControllerId, sizeof(_ControllerId));

	this->ProcessEvent(uFnOnMainMenuMissionSelected, &OnMainMenuMissionSelected_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnOnlineFeatureDisabled
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43950])
// Parameter Info:
// uint8_t                        _ControllerId                  (CPF_Parm)

void UDisGFxMoviePlayerGlobal::OnOnlineFeatureDisabled(uint8_t _ControllerId)
{
	static UFunction* uFnOnOnlineFeatureDisabled = nullptr;

	if (!uFnOnOnlineFeatureDisabled)
	{
		uFnOnOnlineFeatureDisabled = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerGlobal.OnOnlineFeatureDisabled");
	}

	UDisGFxMoviePlayerGlobal_execOnOnlineFeatureDisabled_Params OnOnlineFeatureDisabled_Params;
	memset(&OnOnlineFeatureDisabled_Params, 0, sizeof(OnOnlineFeatureDisabled_Params));
	memcpy_s(&OnOnlineFeatureDisabled_Params._ControllerId, sizeof(OnOnlineFeatureDisabled_Params._ControllerId), &_ControllerId, sizeof(_ControllerId));

	this->ProcessEvent(uFnOnOnlineFeatureDisabled, &OnOnlineFeatureDisabled_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnSaveDataDLCMissing
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43969])
// Parameter Info:
// uint8_t                        _ControllerId                  (CPF_Parm)

void UDisGFxMoviePlayerGlobal::OnSaveDataDLCMissing(uint8_t _ControllerId)
{
	static UFunction* uFnOnSaveDataDLCMissing = nullptr;

	if (!uFnOnSaveDataDLCMissing)
	{
		uFnOnSaveDataDLCMissing = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerGlobal.OnSaveDataDLCMissing");
	}

	UDisGFxMoviePlayerGlobal_execOnSaveDataDLCMissing_Params OnSaveDataDLCMissing_Params;
	memset(&OnSaveDataDLCMissing_Params, 0, sizeof(OnSaveDataDLCMissing_Params));
	memcpy_s(&OnSaveDataDLCMissing_Params._ControllerId, sizeof(OnSaveDataDLCMissing_Params._ControllerId), &_ControllerId, sizeof(_ControllerId));

	this->ProcessEvent(uFnOnSaveDataDLCMissing, &OnSaveDataDLCMissing_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnSaveDataUpdateMissing
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43970])
// Parameter Info:
// uint8_t                        _ControllerId                  (CPF_Parm)

void UDisGFxMoviePlayerGlobal::OnSaveDataUpdateMissing(uint8_t _ControllerId)
{
	static UFunction* uFnOnSaveDataUpdateMissing = nullptr;

	if (!uFnOnSaveDataUpdateMissing)
	{
		uFnOnSaveDataUpdateMissing = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerGlobal.OnSaveDataUpdateMissing");
	}

	UDisGFxMoviePlayerGlobal_execOnSaveDataUpdateMissing_Params OnSaveDataUpdateMissing_Params;
	memset(&OnSaveDataUpdateMissing_Params, 0, sizeof(OnSaveDataUpdateMissing_Params));
	memcpy_s(&OnSaveDataUpdateMissing_Params._ControllerId, sizeof(OnSaveDataUpdateMissing_Params._ControllerId), &_ControllerId, sizeof(_ControllerId));

	this->ProcessEvent(uFnOnSaveDataUpdateMissing, &OnSaveDataUpdateMissing_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnGenericDeleteFailure
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43921])
// Parameter Info:
// uint8_t                        _ControllerId                  (CPF_Parm)

void UDisGFxMoviePlayerGlobal::OnGenericDeleteFailure(uint8_t _ControllerId)
{
	static UFunction* uFnOnGenericDeleteFailure = nullptr;

	if (!uFnOnGenericDeleteFailure)
	{
		uFnOnGenericDeleteFailure = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerGlobal.OnGenericDeleteFailure");
	}

	UDisGFxMoviePlayerGlobal_execOnGenericDeleteFailure_Params OnGenericDeleteFailure_Params;
	memset(&OnGenericDeleteFailure_Params, 0, sizeof(OnGenericDeleteFailure_Params));
	memcpy_s(&OnGenericDeleteFailure_Params._ControllerId, sizeof(OnGenericDeleteFailure_Params._ControllerId), &_ControllerId, sizeof(_ControllerId));

	this->ProcessEvent(uFnOnGenericDeleteFailure, &OnGenericDeleteFailure_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnGenericLoadFailure
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43922])
// Parameter Info:
// uint8_t                        _ControllerId                  (CPF_Parm)
// uint32_t                       bIsOptions                     (CPF_Parm)

void UDisGFxMoviePlayerGlobal::OnGenericLoadFailure(uint8_t _ControllerId, bool bIsOptions)
{
	static UFunction* uFnOnGenericLoadFailure = nullptr;

	if (!uFnOnGenericLoadFailure)
	{
		uFnOnGenericLoadFailure = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerGlobal.OnGenericLoadFailure");
	}

	UDisGFxMoviePlayerGlobal_execOnGenericLoadFailure_Params OnGenericLoadFailure_Params;
	memset(&OnGenericLoadFailure_Params, 0, sizeof(OnGenericLoadFailure_Params));
	memcpy_s(&OnGenericLoadFailure_Params._ControllerId, sizeof(OnGenericLoadFailure_Params._ControllerId), &_ControllerId, sizeof(_ControllerId));
	OnGenericLoadFailure_Params.bIsOptions = bIsOptions;

	this->ProcessEvent(uFnOnGenericLoadFailure, &OnGenericLoadFailure_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnGenericSaveWriteFailure
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43923])
// Parameter Info:
// uint8_t                        _ControllerId                  (CPF_Parm)

void UDisGFxMoviePlayerGlobal::OnGenericSaveWriteFailure(uint8_t _ControllerId)
{
	static UFunction* uFnOnGenericSaveWriteFailure = nullptr;

	if (!uFnOnGenericSaveWriteFailure)
	{
		uFnOnGenericSaveWriteFailure = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerGlobal.OnGenericSaveWriteFailure");
	}

	UDisGFxMoviePlayerGlobal_execOnGenericSaveWriteFailure_Params OnGenericSaveWriteFailure_Params;
	memset(&OnGenericSaveWriteFailure_Params, 0, sizeof(OnGenericSaveWriteFailure_Params));
	memcpy_s(&OnGenericSaveWriteFailure_Params._ControllerId, sizeof(OnGenericSaveWriteFailure_Params._ControllerId), &_ControllerId, sizeof(_ControllerId));

	this->ProcessEvent(uFnOnGenericSaveWriteFailure, &OnGenericSaveWriteFailure_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnSaveWriteCorrupt
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43977])
// Parameter Info:
// uint8_t                        _ControllerId                  (CPF_Parm)

void UDisGFxMoviePlayerGlobal::OnSaveWriteCorrupt(uint8_t _ControllerId)
{
	static UFunction* uFnOnSaveWriteCorrupt = nullptr;

	if (!uFnOnSaveWriteCorrupt)
	{
		uFnOnSaveWriteCorrupt = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerGlobal.OnSaveWriteCorrupt");
	}

	UDisGFxMoviePlayerGlobal_execOnSaveWriteCorrupt_Params OnSaveWriteCorrupt_Params;
	memset(&OnSaveWriteCorrupt_Params, 0, sizeof(OnSaveWriteCorrupt_Params));
	memcpy_s(&OnSaveWriteCorrupt_Params._ControllerId, sizeof(OnSaveWriteCorrupt_Params._ControllerId), &_ControllerId, sizeof(_ControllerId));

	this->ProcessEvent(uFnOnSaveWriteCorrupt, &OnSaveWriteCorrupt_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnSaveGameLoadCorrupt
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43974])
// Parameter Info:
// uint8_t                        _ControllerId                  (CPF_Parm)
// uint32_t                       bIsOptions                     (CPF_Parm)

void UDisGFxMoviePlayerGlobal::OnSaveGameLoadCorrupt(uint8_t _ControllerId, bool bIsOptions)
{
	static UFunction* uFnOnSaveGameLoadCorrupt = nullptr;

	if (!uFnOnSaveGameLoadCorrupt)
	{
		uFnOnSaveGameLoadCorrupt = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerGlobal.OnSaveGameLoadCorrupt");
	}

	UDisGFxMoviePlayerGlobal_execOnSaveGameLoadCorrupt_Params OnSaveGameLoadCorrupt_Params;
	memset(&OnSaveGameLoadCorrupt_Params, 0, sizeof(OnSaveGameLoadCorrupt_Params));
	memcpy_s(&OnSaveGameLoadCorrupt_Params._ControllerId, sizeof(OnSaveGameLoadCorrupt_Params._ControllerId), &_ControllerId, sizeof(_ControllerId));
	OnSaveGameLoadCorrupt_Params.bIsOptions = bIsOptions;

	this->ProcessEvent(uFnOnSaveGameLoadCorrupt, &OnSaveGameLoadCorrupt_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnSaveGameOwnerFailure
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43975])
// Parameter Info:
// uint8_t                        _ControllerId                  (CPF_Parm)
// uint32_t                       bIsOptions                     (CPF_Parm)

void UDisGFxMoviePlayerGlobal::OnSaveGameOwnerFailure(uint8_t _ControllerId, bool bIsOptions)
{
	static UFunction* uFnOnSaveGameOwnerFailure = nullptr;

	if (!uFnOnSaveGameOwnerFailure)
	{
		uFnOnSaveGameOwnerFailure = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerGlobal.OnSaveGameOwnerFailure");
	}

	UDisGFxMoviePlayerGlobal_execOnSaveGameOwnerFailure_Params OnSaveGameOwnerFailure_Params;
	memset(&OnSaveGameOwnerFailure_Params, 0, sizeof(OnSaveGameOwnerFailure_Params));
	memcpy_s(&OnSaveGameOwnerFailure_Params._ControllerId, sizeof(OnSaveGameOwnerFailure_Params._ControllerId), &_ControllerId, sizeof(_ControllerId));
	OnSaveGameOwnerFailure_Params.bIsOptions = bIsOptions;

	this->ProcessEvent(uFnOnSaveGameOwnerFailure, &OnSaveGameOwnerFailure_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnStorageSpaceMissing
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43993])
// Parameter Info:
// uint8_t                        _ControllerId                  (CPF_Parm)
// struct FQWord                  Size                           (CPF_Parm)

void UDisGFxMoviePlayerGlobal::OnStorageSpaceMissing(uint8_t _ControllerId, const struct FQWord& Size)
{
	static UFunction* uFnOnStorageSpaceMissing = nullptr;

	if (!uFnOnStorageSpaceMissing)
	{
		uFnOnStorageSpaceMissing = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerGlobal.OnStorageSpaceMissing");
	}

	UDisGFxMoviePlayerGlobal_execOnStorageSpaceMissing_Params OnStorageSpaceMissing_Params;
	memset(&OnStorageSpaceMissing_Params, 0, sizeof(OnStorageSpaceMissing_Params));
	memcpy_s(&OnStorageSpaceMissing_Params._ControllerId, sizeof(OnStorageSpaceMissing_Params._ControllerId), &_ControllerId, sizeof(_ControllerId));
	memcpy_s(&OnStorageSpaceMissing_Params.Size, sizeof(OnStorageSpaceMissing_Params.Size), &Size, sizeof(Size));

	this->ProcessEvent(uFnOnStorageSpaceMissing, &OnStorageSpaceMissing_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnStorageDeviceNotSelected
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43992])
// Parameter Info:
// uint8_t                        _ControllerId                  (CPF_Parm)

void UDisGFxMoviePlayerGlobal::OnStorageDeviceNotSelected(uint8_t _ControllerId)
{
	static UFunction* uFnOnStorageDeviceNotSelected = nullptr;

	if (!uFnOnStorageDeviceNotSelected)
	{
		uFnOnStorageDeviceNotSelected = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerGlobal.OnStorageDeviceNotSelected");
	}

	UDisGFxMoviePlayerGlobal_execOnStorageDeviceNotSelected_Params OnStorageDeviceNotSelected_Params;
	memset(&OnStorageDeviceNotSelected_Params, 0, sizeof(OnStorageDeviceNotSelected_Params));
	memcpy_s(&OnStorageDeviceNotSelected_Params._ControllerId, sizeof(OnStorageDeviceNotSelected_Params._ControllerId), &_ControllerId, sizeof(_ControllerId));

	this->ProcessEvent(uFnOnStorageDeviceNotSelected, &OnStorageDeviceNotSelected_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnStorageDeviceDisconnected
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43991])
// Parameter Info:
// uint8_t                        _ControllerId                  (CPF_Parm)

void UDisGFxMoviePlayerGlobal::OnStorageDeviceDisconnected(uint8_t _ControllerId)
{
	static UFunction* uFnOnStorageDeviceDisconnected = nullptr;

	if (!uFnOnStorageDeviceDisconnected)
	{
		uFnOnStorageDeviceDisconnected = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerGlobal.OnStorageDeviceDisconnected");
	}

	UDisGFxMoviePlayerGlobal_execOnStorageDeviceDisconnected_Params OnStorageDeviceDisconnected_Params;
	memset(&OnStorageDeviceDisconnected_Params, 0, sizeof(OnStorageDeviceDisconnected_Params));
	memcpy_s(&OnStorageDeviceDisconnected_Params._ControllerId, sizeof(OnStorageDeviceDisconnected_Params._ControllerId), &_ControllerId, sizeof(_ControllerId));

	this->ProcessEvent(uFnOnStorageDeviceDisconnected, &OnStorageDeviceDisconnected_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnControllerDisconnected
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[23582])
// Parameter Info:
// uint8_t                        _ControllerId                  (CPF_Parm)

void UDisGFxMoviePlayerGlobal::OnControllerDisconnected(uint8_t _ControllerId)
{
	static UFunction* uFnOnControllerDisconnected = nullptr;

	if (!uFnOnControllerDisconnected)
	{
		uFnOnControllerDisconnected = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerGlobal.OnControllerDisconnected");
	}

	UDisGFxMoviePlayerGlobal_execOnControllerDisconnected_Params OnControllerDisconnected_Params;
	memset(&OnControllerDisconnected_Params, 0, sizeof(OnControllerDisconnected_Params));
	memcpy_s(&OnControllerDisconnected_Params._ControllerId, sizeof(OnControllerDisconnected_Params._ControllerId), &_ControllerId, sizeof(_ControllerId));

	this->ProcessEvent(uFnOnControllerDisconnected, &OnControllerDisconnected_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnLoginChange
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[9776])
// Parameter Info:
// uint8_t                        _ControllerId                  (CPF_Parm)

void UDisGFxMoviePlayerGlobal::OnLoginChange(uint8_t _ControllerId)
{
	static UFunction* uFnOnLoginChange = nullptr;

	if (!uFnOnLoginChange)
	{
		uFnOnLoginChange = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerGlobal.OnLoginChange");
	}

	UDisGFxMoviePlayerGlobal_execOnLoginChange_Params OnLoginChange_Params;
	memset(&OnLoginChange_Params, 0, sizeof(OnLoginChange_Params));
	memcpy_s(&OnLoginChange_Params._ControllerId, sizeof(OnLoginChange_Params._ControllerId), &_ControllerId, sizeof(_ControllerId));

	this->ProcessEvent(uFnOnLoginChange, &OnLoginChange_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.UnregisterOnlineDelegates
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UDisGFxMoviePlayerGlobal::eventUnregisterOnlineDelegates()
{
	static UFunction* uFnUnregisterOnlineDelegates = nullptr;

	if (!uFnUnregisterOnlineDelegates)
	{
		uFnUnregisterOnlineDelegates = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerGlobal.UnregisterOnlineDelegates");
	}

	UDisGFxMoviePlayerGlobal_eventUnregisterOnlineDelegates_Params UnregisterOnlineDelegates_Params;
	memset(&UnregisterOnlineDelegates_Params, 0, sizeof(UnregisterOnlineDelegates_Params));

	this->ProcessEvent(uFnUnregisterOnlineDelegates, &UnregisterOnlineDelegates_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.RegisterOnlineDelegates
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UDisGFxMoviePlayerGlobal::eventRegisterOnlineDelegates()
{
	static UFunction* uFnRegisterOnlineDelegates = nullptr;

	if (!uFnRegisterOnlineDelegates)
	{
		uFnRegisterOnlineDelegates = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerGlobal.RegisterOnlineDelegates");
	}

	UDisGFxMoviePlayerGlobal_eventRegisterOnlineDelegates_Params RegisterOnlineDelegates_Params;
	memset(&RegisterOnlineDelegates_Params, 0, sizeof(RegisterOnlineDelegates_Params));

	this->ProcessEvent(uFnRegisterOnlineDelegates, &RegisterOnlineDelegates_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerHUD.OnPlayerChoiceConfirm
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43954])
// Parameter Info:
// int32_t                        _Index                         (CPF_Parm)

void UDisGFxMoviePlayerHUD::OnPlayerChoiceConfirm(int32_t _Index)
{
	static UFunction* uFnOnPlayerChoiceConfirm = nullptr;

	if (!uFnOnPlayerChoiceConfirm)
	{
		uFnOnPlayerChoiceConfirm = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerHUD.OnPlayerChoiceConfirm");
	}

	UDisGFxMoviePlayerHUD_execOnPlayerChoiceConfirm_Params OnPlayerChoiceConfirm_Params;
	memset(&OnPlayerChoiceConfirm_Params, 0, sizeof(OnPlayerChoiceConfirm_Params));
	memcpy_s(&OnPlayerChoiceConfirm_Params._Index, sizeof(OnPlayerChoiceConfirm_Params._Index), &_Index, sizeof(_Index));

	this->ProcessEvent(uFnOnPlayerChoiceConfirm, &OnPlayerChoiceConfirm_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.CloseJournal
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30885])
// Parameter Info:

void UDisGFxMoviePlayerJournal::CloseJournal()
{
	static UFunction* uFnCloseJournal = nullptr;

	if (!uFnCloseJournal)
	{
		uFnCloseJournal = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.CloseJournal");
	}

	UDisGFxMoviePlayerJournal_execCloseJournal_Params CloseJournal_Params;
	memset(&CloseJournal_Params, 0, sizeof(CloseJournal_Params));

	this->ProcessEvent(uFnCloseJournal, &CloseJournal_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.RemoveBoneCharm
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44691])
// Parameter Info:
// int32_t                        _ItemIdx                       (CPF_Parm)

void UDisGFxMoviePlayerJournal::RemoveBoneCharm(int32_t _ItemIdx)
{
	static UFunction* uFnRemoveBoneCharm = nullptr;

	if (!uFnRemoveBoneCharm)
	{
		uFnRemoveBoneCharm = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.RemoveBoneCharm");
	}

	UDisGFxMoviePlayerJournal_execRemoveBoneCharm_Params RemoveBoneCharm_Params;
	memset(&RemoveBoneCharm_Params, 0, sizeof(RemoveBoneCharm_Params));
	memcpy_s(&RemoveBoneCharm_Params._ItemIdx, sizeof(RemoveBoneCharm_Params._ItemIdx), &_ItemIdx, sizeof(_ItemIdx));

	this->ProcessEvent(uFnRemoveBoneCharm, &RemoveBoneCharm_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.EquipBoneCharm
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34849])
// Parameter Info:
// int32_t                        _ItemIdx                       (CPF_Parm)

void UDisGFxMoviePlayerJournal::EquipBoneCharm(int32_t _ItemIdx)
{
	static UFunction* uFnEquipBoneCharm = nullptr;

	if (!uFnEquipBoneCharm)
	{
		uFnEquipBoneCharm = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.EquipBoneCharm");
	}

	UDisGFxMoviePlayerJournal_execEquipBoneCharm_Params EquipBoneCharm_Params;
	memset(&EquipBoneCharm_Params, 0, sizeof(EquipBoneCharm_Params));
	memcpy_s(&EquipBoneCharm_Params._ItemIdx, sizeof(EquipBoneCharm_Params._ItemIdx), &_ItemIdx, sizeof(_ItemIdx));

	this->ProcessEvent(uFnEquipBoneCharm, &EquipBoneCharm_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_CharmsListDetails
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44705])
// Parameter Info:
// int32_t                        _ItemIdx                       (CPF_Parm)

void UDisGFxMoviePlayerJournal::Req_CharmsListDetails(int32_t _ItemIdx)
{
	static UFunction* uFnReq_CharmsListDetails = nullptr;

	if (!uFnReq_CharmsListDetails)
	{
		uFnReq_CharmsListDetails = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.Req_CharmsListDetails");
	}

	UDisGFxMoviePlayerJournal_execReq_CharmsListDetails_Params Req_CharmsListDetails_Params;
	memset(&Req_CharmsListDetails_Params, 0, sizeof(Req_CharmsListDetails_Params));
	memcpy_s(&Req_CharmsListDetails_Params._ItemIdx, sizeof(Req_CharmsListDetails_Params._ItemIdx), &_ItemIdx, sizeof(_ItemIdx));

	this->ProcessEvent(uFnReq_CharmsListDetails, &Req_CharmsListDetails_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_CharmsTabContent
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44706])
// Parameter Info:

void UDisGFxMoviePlayerJournal::Req_CharmsTabContent()
{
	static UFunction* uFnReq_CharmsTabContent = nullptr;

	if (!uFnReq_CharmsTabContent)
	{
		uFnReq_CharmsTabContent = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.Req_CharmsTabContent");
	}

	UDisGFxMoviePlayerJournal_execReq_CharmsTabContent_Params Req_CharmsTabContent_Params;
	memset(&Req_CharmsTabContent_Params, 0, sizeof(Req_CharmsTabContent_Params));

	this->ProcessEvent(uFnReq_CharmsTabContent, &Req_CharmsTabContent_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.ReadNote
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44660])
// Parameter Info:
// int32_t                        _ItemIdx                       (CPF_Parm)

void UDisGFxMoviePlayerJournal::ReadNote(int32_t _ItemIdx)
{
	static UFunction* uFnReadNote = nullptr;

	if (!uFnReadNote)
	{
		uFnReadNote = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.ReadNote");
	}

	UDisGFxMoviePlayerJournal_execReadNote_Params ReadNote_Params;
	memset(&ReadNote_Params, 0, sizeof(ReadNote_Params));
	memcpy_s(&ReadNote_Params._ItemIdx, sizeof(ReadNote_Params._ItemIdx), &_ItemIdx, sizeof(_ItemIdx));

	this->ProcessEvent(uFnReadNote, &ReadNote_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.StopAudioLog
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45230])
// Parameter Info:
// int32_t                        _ItemIdx                       (CPF_Parm)

void UDisGFxMoviePlayerJournal::StopAudioLog(int32_t _ItemIdx)
{
	static UFunction* uFnStopAudioLog = nullptr;

	if (!uFnStopAudioLog)
	{
		uFnStopAudioLog = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.StopAudioLog");
	}

	UDisGFxMoviePlayerJournal_execStopAudioLog_Params StopAudioLog_Params;
	memset(&StopAudioLog_Params, 0, sizeof(StopAudioLog_Params));
	memcpy_s(&StopAudioLog_Params._ItemIdx, sizeof(StopAudioLog_Params._ItemIdx), &_ItemIdx, sizeof(_ItemIdx));

	this->ProcessEvent(uFnStopAudioLog, &StopAudioLog_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.PlayAudioLog
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44226])
// Parameter Info:
// int32_t                        _ItemIdx                       (CPF_Parm)

void UDisGFxMoviePlayerJournal::PlayAudioLog(int32_t _ItemIdx)
{
	static UFunction* uFnPlayAudioLog = nullptr;

	if (!uFnPlayAudioLog)
	{
		uFnPlayAudioLog = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.PlayAudioLog");
	}

	UDisGFxMoviePlayerJournal_execPlayAudioLog_Params PlayAudioLog_Params;
	memset(&PlayAudioLog_Params, 0, sizeof(PlayAudioLog_Params));
	memcpy_s(&PlayAudioLog_Params._ItemIdx, sizeof(PlayAudioLog_Params._ItemIdx), &_ItemIdx, sizeof(_ItemIdx));

	this->ProcessEvent(uFnPlayAudioLog, &PlayAudioLog_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_LogInfo
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44720])
// Parameter Info:
// int32_t                        _ItemIdx                       (CPF_Parm)

void UDisGFxMoviePlayerJournal::Req_LogInfo(int32_t _ItemIdx)
{
	static UFunction* uFnReq_LogInfo = nullptr;

	if (!uFnReq_LogInfo)
	{
		uFnReq_LogInfo = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.Req_LogInfo");
	}

	UDisGFxMoviePlayerJournal_execReq_LogInfo_Params Req_LogInfo_Params;
	memset(&Req_LogInfo_Params, 0, sizeof(Req_LogInfo_Params));
	memcpy_s(&Req_LogInfo_Params._ItemIdx, sizeof(Req_LogInfo_Params._ItemIdx), &_ItemIdx, sizeof(_ItemIdx));

	this->ProcessEvent(uFnReq_LogInfo, &Req_LogInfo_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Logs_Books
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44723])
// Parameter Info:

void UDisGFxMoviePlayerJournal::Req_Logs_Books()
{
	static UFunction* uFnReq_Logs_Books = nullptr;

	if (!uFnReq_Logs_Books)
	{
		uFnReq_Logs_Books = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Logs_Books");
	}

	UDisGFxMoviePlayerJournal_execReq_Logs_Books_Params Req_Logs_Books_Params;
	memset(&Req_Logs_Books_Params, 0, sizeof(Req_Logs_Books_Params));

	this->ProcessEvent(uFnReq_Logs_Books, &Req_Logs_Books_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Logs_Notes
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44724])
// Parameter Info:

void UDisGFxMoviePlayerJournal::Req_Logs_Notes()
{
	static UFunction* uFnReq_Logs_Notes = nullptr;

	if (!uFnReq_Logs_Notes)
	{
		uFnReq_Logs_Notes = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Logs_Notes");
	}

	UDisGFxMoviePlayerJournal_execReq_Logs_Notes_Params Req_Logs_Notes_Params;
	memset(&Req_Logs_Notes_Params, 0, sizeof(Req_Logs_Notes_Params));

	this->ProcessEvent(uFnReq_Logs_Notes, &Req_Logs_Notes_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Logs_Audio
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44722])
// Parameter Info:

void UDisGFxMoviePlayerJournal::Req_Logs_Audio()
{
	static UFunction* uFnReq_Logs_Audio = nullptr;

	if (!uFnReq_Logs_Audio)
	{
		uFnReq_Logs_Audio = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Logs_Audio");
	}

	UDisGFxMoviePlayerJournal_execReq_Logs_Audio_Params Req_Logs_Audio_Params;
	memset(&Req_Logs_Audio_Params, 0, sizeof(Req_Logs_Audio_Params));

	this->ProcessEvent(uFnReq_Logs_Audio, &Req_Logs_Audio_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Logs_All
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44721])
// Parameter Info:

void UDisGFxMoviePlayerJournal::Req_Logs_All()
{
	static UFunction* uFnReq_Logs_All = nullptr;

	if (!uFnReq_Logs_All)
	{
		uFnReq_Logs_All = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Logs_All");
	}

	UDisGFxMoviePlayerJournal_execReq_Logs_All_Params Req_Logs_All_Params;
	memset(&Req_Logs_All_Params, 0, sizeof(Req_Logs_All_Params));

	this->ProcessEvent(uFnReq_Logs_All, &Req_Logs_All_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_InventoryItemInfo
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44717])
// Parameter Info:
// int32_t                        _ItemIdx                       (CPF_Parm)

void UDisGFxMoviePlayerJournal::Req_InventoryItemInfo(int32_t _ItemIdx)
{
	static UFunction* uFnReq_InventoryItemInfo = nullptr;

	if (!uFnReq_InventoryItemInfo)
	{
		uFnReq_InventoryItemInfo = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.Req_InventoryItemInfo");
	}

	UDisGFxMoviePlayerJournal_execReq_InventoryItemInfo_Params Req_InventoryItemInfo_Params;
	memset(&Req_InventoryItemInfo_Params, 0, sizeof(Req_InventoryItemInfo_Params));
	memcpy_s(&Req_InventoryItemInfo_Params._ItemIdx, sizeof(Req_InventoryItemInfo_Params._ItemIdx), &_ItemIdx, sizeof(_ItemIdx));

	this->ProcessEvent(uFnReq_InventoryItemInfo, &Req_InventoryItemInfo_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Inventory_Upgrades
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44716])
// Parameter Info:

void UDisGFxMoviePlayerJournal::Req_Inventory_Upgrades()
{
	static UFunction* uFnReq_Inventory_Upgrades = nullptr;

	if (!uFnReq_Inventory_Upgrades)
	{
		uFnReq_Inventory_Upgrades = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Inventory_Upgrades");
	}

	UDisGFxMoviePlayerJournal_execReq_Inventory_Upgrades_Params Req_Inventory_Upgrades_Params;
	memset(&Req_Inventory_Upgrades_Params, 0, sizeof(Req_Inventory_Upgrades_Params));

	this->ProcessEvent(uFnReq_Inventory_Upgrades, &Req_Inventory_Upgrades_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Inventory_Ammo
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44712])
// Parameter Info:

void UDisGFxMoviePlayerJournal::Req_Inventory_Ammo()
{
	static UFunction* uFnReq_Inventory_Ammo = nullptr;

	if (!uFnReq_Inventory_Ammo)
	{
		uFnReq_Inventory_Ammo = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Inventory_Ammo");
	}

	UDisGFxMoviePlayerJournal_execReq_Inventory_Ammo_Params Req_Inventory_Ammo_Params;
	memset(&Req_Inventory_Ammo_Params, 0, sizeof(Req_Inventory_Ammo_Params));

	this->ProcessEvent(uFnReq_Inventory_Ammo, &Req_Inventory_Ammo_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Inventory_Gadgets
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44713])
// Parameter Info:

void UDisGFxMoviePlayerJournal::Req_Inventory_Gadgets()
{
	static UFunction* uFnReq_Inventory_Gadgets = nullptr;

	if (!uFnReq_Inventory_Gadgets)
	{
		uFnReq_Inventory_Gadgets = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Inventory_Gadgets");
	}

	UDisGFxMoviePlayerJournal_execReq_Inventory_Gadgets_Params Req_Inventory_Gadgets_Params;
	memset(&Req_Inventory_Gadgets_Params, 0, sizeof(Req_Inventory_Gadgets_Params));

	this->ProcessEvent(uFnReq_Inventory_Gadgets, &Req_Inventory_Gadgets_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Inventory_Resources
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44715])
// Parameter Info:

void UDisGFxMoviePlayerJournal::Req_Inventory_Resources()
{
	static UFunction* uFnReq_Inventory_Resources = nullptr;

	if (!uFnReq_Inventory_Resources)
	{
		uFnReq_Inventory_Resources = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Inventory_Resources");
	}

	UDisGFxMoviePlayerJournal_execReq_Inventory_Resources_Params Req_Inventory_Resources_Params;
	memset(&Req_Inventory_Resources_Params, 0, sizeof(Req_Inventory_Resources_Params));

	this->ProcessEvent(uFnReq_Inventory_Resources, &Req_Inventory_Resources_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Inventory_Key_Ring
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44714])
// Parameter Info:

void UDisGFxMoviePlayerJournal::Req_Inventory_Key_Ring()
{
	static UFunction* uFnReq_Inventory_Key_Ring = nullptr;

	if (!uFnReq_Inventory_Key_Ring)
	{
		uFnReq_Inventory_Key_Ring = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Inventory_Key_Ring");
	}

	UDisGFxMoviePlayerJournal_execReq_Inventory_Key_Ring_Params Req_Inventory_Key_Ring_Params;
	memset(&Req_Inventory_Key_Ring_Params, 0, sizeof(Req_Inventory_Key_Ring_Params));

	this->ProcessEvent(uFnReq_Inventory_Key_Ring, &Req_Inventory_Key_Ring_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Inventory_All
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44711])
// Parameter Info:

void UDisGFxMoviePlayerJournal::Req_Inventory_All()
{
	static UFunction* uFnReq_Inventory_All = nullptr;

	if (!uFnReq_Inventory_All)
	{
		uFnReq_Inventory_All = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Inventory_All");
	}

	UDisGFxMoviePlayerJournal_execReq_Inventory_All_Params Req_Inventory_All_Params;
	memset(&Req_Inventory_All_Params, 0, sizeof(Req_Inventory_All_Params));

	this->ProcessEvent(uFnReq_Inventory_All, &Req_Inventory_All_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.PowerBuy
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44374])
// Parameter Info:
// class FString                  _rPowerId                      (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        _PowerLevel                    (CPF_Parm)

void UDisGFxMoviePlayerJournal::PowerBuy(const class FString& _rPowerId, int32_t _PowerLevel)
{
	static UFunction* uFnPowerBuy = nullptr;

	if (!uFnPowerBuy)
	{
		uFnPowerBuy = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.PowerBuy");
	}

	UDisGFxMoviePlayerJournal_execPowerBuy_Params PowerBuy_Params;
	memset(&PowerBuy_Params, 0, sizeof(PowerBuy_Params));
	memcpy_s(&PowerBuy_Params._rPowerId, sizeof(PowerBuy_Params._rPowerId), &_rPowerId, sizeof(_rPowerId));
	memcpy_s(&PowerBuy_Params._PowerLevel, sizeof(PowerBuy_Params._PowerLevel), &_PowerLevel, sizeof(_PowerLevel));

	this->ProcessEvent(uFnPowerBuy, &PowerBuy_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.OnPowerInfosRequest
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43956])
// Parameter Info:
// class FString                  _rPowerId                      (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       _bJustPurchased                (CPF_Parm)

void UDisGFxMoviePlayerJournal::OnPowerInfosRequest(const class FString& _rPowerId, bool _bJustPurchased)
{
	static UFunction* uFnOnPowerInfosRequest = nullptr;

	if (!uFnOnPowerInfosRequest)
	{
		uFnOnPowerInfosRequest = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.OnPowerInfosRequest");
	}

	UDisGFxMoviePlayerJournal_execOnPowerInfosRequest_Params OnPowerInfosRequest_Params;
	memset(&OnPowerInfosRequest_Params, 0, sizeof(OnPowerInfosRequest_Params));
	memcpy_s(&OnPowerInfosRequest_Params._rPowerId, sizeof(OnPowerInfosRequest_Params._rPowerId), &_rPowerId, sizeof(_rPowerId));
	OnPowerInfosRequest_Params._bJustPurchased = _bJustPurchased;

	this->ProcessEvent(uFnOnPowerInfosRequest, &OnPowerInfosRequest_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_PowerDetails
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44728])
// Parameter Info:
// class FString                  _rPowerId                      (CPF_Parm | CPF_NeedCtorLink)

void UDisGFxMoviePlayerJournal::Req_PowerDetails(const class FString& _rPowerId)
{
	static UFunction* uFnReq_PowerDetails = nullptr;

	if (!uFnReq_PowerDetails)
	{
		uFnReq_PowerDetails = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.Req_PowerDetails");
	}

	UDisGFxMoviePlayerJournal_execReq_PowerDetails_Params Req_PowerDetails_Params;
	memset(&Req_PowerDetails_Params, 0, sizeof(Req_PowerDetails_Params));
	memcpy_s(&Req_PowerDetails_Params._rPowerId, sizeof(Req_PowerDetails_Params._rPowerId), &_rPowerId, sizeof(_rPowerId));

	this->ProcessEvent(uFnReq_PowerDetails, &Req_PowerDetails_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_PowersTabContent
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44729])
// Parameter Info:

void UDisGFxMoviePlayerJournal::Req_PowersTabContent()
{
	static UFunction* uFnReq_PowersTabContent = nullptr;

	if (!uFnReq_PowersTabContent)
	{
		uFnReq_PowersTabContent = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.Req_PowersTabContent");
	}

	UDisGFxMoviePlayerJournal_execReq_PowersTabContent_Params Req_PowersTabContent_Params;
	memset(&Req_PowersTabContent_Params, 0, sizeof(Req_PowersTabContent_Params));

	this->ProcessEvent(uFnReq_PowersTabContent, &Req_PowersTabContent_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_MissionItemInfo
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44725])
// Parameter Info:
// int32_t                        _ItemIdx                       (CPF_Parm)

void UDisGFxMoviePlayerJournal::Req_MissionItemInfo(int32_t _ItemIdx)
{
	static UFunction* uFnReq_MissionItemInfo = nullptr;

	if (!uFnReq_MissionItemInfo)
	{
		uFnReq_MissionItemInfo = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.Req_MissionItemInfo");
	}

	UDisGFxMoviePlayerJournal_execReq_MissionItemInfo_Params Req_MissionItemInfo_Params;
	memset(&Req_MissionItemInfo_Params, 0, sizeof(Req_MissionItemInfo_Params));
	memcpy_s(&Req_MissionItemInfo_Params._ItemIdx, sizeof(Req_MissionItemInfo_Params._ItemIdx), &_ItemIdx, sizeof(_ItemIdx));

	this->ProcessEvent(uFnReq_MissionItemInfo, &Req_MissionItemInfo_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_MissionItems
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44726])
// Parameter Info:

void UDisGFxMoviePlayerJournal::Req_MissionItems()
{
	static UFunction* uFnReq_MissionItems = nullptr;

	if (!uFnReq_MissionItems)
	{
		uFnReq_MissionItems = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.Req_MissionItems");
	}

	UDisGFxMoviePlayerJournal_execReq_MissionItems_Params Req_MissionItems_Params;
	memset(&Req_MissionItems_Params, 0, sizeof(Req_MissionItems_Params));

	this->ProcessEvent(uFnReq_MissionItems, &Req_MissionItems_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_ChapterNotes
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44704])
// Parameter Info:

void UDisGFxMoviePlayerJournal::Req_ChapterNotes()
{
	static UFunction* uFnReq_ChapterNotes = nullptr;

	if (!uFnReq_ChapterNotes)
	{
		uFnReq_ChapterNotes = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.Req_ChapterNotes");
	}

	UDisGFxMoviePlayerJournal_execReq_ChapterNotes_Params Req_ChapterNotes_Params;
	memset(&Req_ChapterNotes_Params, 0, sizeof(Req_ChapterNotes_Params));

	this->ProcessEvent(uFnReq_ChapterNotes, &Req_ChapterNotes_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.OnToggleHUDMarker
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43997])
// Parameter Info:
// int32_t                        _ItemIdx                       (CPF_Parm)

void UDisGFxMoviePlayerJournal::OnToggleHUDMarker(int32_t _ItemIdx)
{
	static UFunction* uFnOnToggleHUDMarker = nullptr;

	if (!uFnOnToggleHUDMarker)
	{
		uFnOnToggleHUDMarker = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.OnToggleHUDMarker");
	}

	UDisGFxMoviePlayerJournal_execOnToggleHUDMarker_Params OnToggleHUDMarker_Params;
	memset(&OnToggleHUDMarker_Params, 0, sizeof(OnToggleHUDMarker_Params));
	memcpy_s(&OnToggleHUDMarker_Params._ItemIdx, sizeof(OnToggleHUDMarker_Params._ItemIdx), &_ItemIdx, sizeof(_ItemIdx));

	this->ProcessEvent(uFnOnToggleHUDMarker, &OnToggleHUDMarker_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.OnToggleObjectivesListHistory
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43999])
// Parameter Info:

void UDisGFxMoviePlayerJournal::OnToggleObjectivesListHistory()
{
	static UFunction* uFnOnToggleObjectivesListHistory = nullptr;

	if (!uFnOnToggleObjectivesListHistory)
	{
		uFnOnToggleObjectivesListHistory = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.OnToggleObjectivesListHistory");
	}

	UDisGFxMoviePlayerJournal_execOnToggleObjectivesListHistory_Params OnToggleObjectivesListHistory_Params;
	memset(&OnToggleObjectivesListHistory_Params, 0, sizeof(OnToggleObjectivesListHistory_Params));

	this->ProcessEvent(uFnOnToggleObjectivesListHistory, &OnToggleObjectivesListHistory_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_ObjectivesList
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44727])
// Parameter Info:

void UDisGFxMoviePlayerJournal::Req_ObjectivesList()
{
	static UFunction* uFnReq_ObjectivesList = nullptr;

	if (!uFnReq_ObjectivesList)
	{
		uFnReq_ObjectivesList = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.Req_ObjectivesList");
	}

	UDisGFxMoviePlayerJournal_execReq_ObjectivesList_Params Req_ObjectivesList_Params;
	memset(&Req_ObjectivesList_Params, 0, sizeof(Req_ObjectivesList_Params));

	this->ProcessEvent(uFnReq_ObjectivesList, &Req_ObjectivesList_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_FlashingTabsBitfield
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44709])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UDisGFxMoviePlayerJournal::Req_FlashingTabsBitfield()
{
	static UFunction* uFnReq_FlashingTabsBitfield = nullptr;

	if (!uFnReq_FlashingTabsBitfield)
	{
		uFnReq_FlashingTabsBitfield = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerJournal.Req_FlashingTabsBitfield");
	}

	UDisGFxMoviePlayerJournal_execReq_FlashingTabsBitfield_Params Req_FlashingTabsBitfield_Params;
	memset(&Req_FlashingTabsBitfield_Params, 0, sizeof(Req_FlashingTabsBitfield_Params));

	this->ProcessEvent(uFnReq_FlashingTabsBitfield, &Req_FlashingTabsBitfield_Params, nullptr);

	return Req_FlashingTabsBitfield_Params.ReturnValue;
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnLeaveOptions
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43929])
// Parameter Info:

void UDisGFxMoviePlayerMenuBase::OnLeaveOptions()
{
	static UFunction* uFnOnLeaveOptions = nullptr;

	if (!uFnOnLeaveOptions)
	{
		uFnOnLeaveOptions = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnLeaveOptions");
	}

	UDisGFxMoviePlayerMenuBase_execOnLeaveOptions_Params OnLeaveOptions_Params;
	memset(&OnLeaveOptions_Params, 0, sizeof(OnLeaveOptions_Params));

	this->ProcessEvent(uFnOnLeaveOptions, &OnLeaveOptions_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnResetOptions
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43965])
// Parameter Info:
// int32_t                        _CategoryIdx                   (CPF_Parm)
// int32_t                        _SubCategoryIdx                (CPF_Parm)

void UDisGFxMoviePlayerMenuBase::OnResetOptions(int32_t _CategoryIdx, int32_t _SubCategoryIdx)
{
	static UFunction* uFnOnResetOptions = nullptr;

	if (!uFnOnResetOptions)
	{
		uFnOnResetOptions = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnResetOptions");
	}

	UDisGFxMoviePlayerMenuBase_execOnResetOptions_Params OnResetOptions_Params;
	memset(&OnResetOptions_Params, 0, sizeof(OnResetOptions_Params));
	memcpy_s(&OnResetOptions_Params._CategoryIdx, sizeof(OnResetOptions_Params._CategoryIdx), &_CategoryIdx, sizeof(_CategoryIdx));
	memcpy_s(&OnResetOptions_Params._SubCategoryIdx, sizeof(OnResetOptions_Params._SubCategoryIdx), &_SubCategoryIdx, sizeof(_SubCategoryIdx));

	this->ProcessEvent(uFnOnResetOptions, &OnResetOptions_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnSettingChange
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43984])
// Parameter Info:
// int32_t                        _SettingID                     (CPF_Parm)
// float                          _fValue                        (CPF_Parm)

void UDisGFxMoviePlayerMenuBase::OnSettingChange(int32_t _SettingID, float _fValue)
{
	static UFunction* uFnOnSettingChange = nullptr;

	if (!uFnOnSettingChange)
	{
		uFnOnSettingChange = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnSettingChange");
	}

	UDisGFxMoviePlayerMenuBase_execOnSettingChange_Params OnSettingChange_Params;
	memset(&OnSettingChange_Params, 0, sizeof(OnSettingChange_Params));
	memcpy_s(&OnSettingChange_Params._SettingID, sizeof(OnSettingChange_Params._SettingID), &_SettingID, sizeof(_SettingID));
	memcpy_s(&OnSettingChange_Params._fValue, sizeof(OnSettingChange_Params._fValue), &_fValue, sizeof(_fValue));

	this->ProcessEvent(uFnOnSettingChange, &OnSettingChange_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.DisplayStorageDeviceSelection
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32344])
// Parameter Info:

void UDisGFxMoviePlayerMenuBase::DisplayStorageDeviceSelection()
{
	static UFunction* uFnDisplayStorageDeviceSelection = nullptr;

	if (!uFnDisplayStorageDeviceSelection)
	{
		uFnDisplayStorageDeviceSelection = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMenuBase.DisplayStorageDeviceSelection");
	}

	UDisGFxMoviePlayerMenuBase_execDisplayStorageDeviceSelection_Params DisplayStorageDeviceSelection_Params;
	memset(&DisplayStorageDeviceSelection_Params, 0, sizeof(DisplayStorageDeviceSelection_Params));

	this->ProcessEvent(uFnDisplayStorageDeviceSelection, &DisplayStorageDeviceSelection_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.CloseGammaImage
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30884])
// Parameter Info:

void UDisGFxMoviePlayerMenuBase::CloseGammaImage()
{
	static UFunction* uFnCloseGammaImage = nullptr;

	if (!uFnCloseGammaImage)
	{
		uFnCloseGammaImage = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMenuBase.CloseGammaImage");
	}

	UDisGFxMoviePlayerMenuBase_execCloseGammaImage_Params CloseGammaImage_Params;
	memset(&CloseGammaImage_Params, 0, sizeof(CloseGammaImage_Params));

	this->ProcessEvent(uFnCloseGammaImage, &CloseGammaImage_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.OpenGammaImage
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44007])
// Parameter Info:

void UDisGFxMoviePlayerMenuBase::OpenGammaImage()
{
	static UFunction* uFnOpenGammaImage = nullptr;

	if (!uFnOpenGammaImage)
	{
		uFnOpenGammaImage = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMenuBase.OpenGammaImage");
	}

	UDisGFxMoviePlayerMenuBase_execOpenGammaImage_Params OpenGammaImage_Params;
	memset(&OpenGammaImage_Params, 0, sizeof(OpenGammaImage_Params));

	this->ProcessEvent(uFnOpenGammaImage, &OpenGammaImage_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnApplyVideoSettings
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43886])
// Parameter Info:

void UDisGFxMoviePlayerMenuBase::OnApplyVideoSettings()
{
	static UFunction* uFnOnApplyVideoSettings = nullptr;

	if (!uFnOnApplyVideoSettings)
	{
		uFnOnApplyVideoSettings = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnApplyVideoSettings");
	}

	UDisGFxMoviePlayerMenuBase_execOnApplyVideoSettings_Params OnApplyVideoSettings_Params;
	memset(&OnApplyVideoSettings_Params, 0, sizeof(OnApplyVideoSettings_Params));

	this->ProcessEvent(uFnOnApplyVideoSettings, &OnApplyVideoSettings_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.Req_VideoSettingsScreen
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44734])
// Parameter Info:

void UDisGFxMoviePlayerMenuBase::Req_VideoSettingsScreen()
{
	static UFunction* uFnReq_VideoSettingsScreen = nullptr;

	if (!uFnReq_VideoSettingsScreen)
	{
		uFnReq_VideoSettingsScreen = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMenuBase.Req_VideoSettingsScreen");
	}

	UDisGFxMoviePlayerMenuBase_execReq_VideoSettingsScreen_Params Req_VideoSettingsScreen_Params;
	memset(&Req_VideoSettingsScreen_Params, 0, sizeof(Req_VideoSettingsScreen_Params));

	this->ProcessEvent(uFnReq_VideoSettingsScreen, &Req_VideoSettingsScreen_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.Req_GamepadMappingScreen
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44710])
// Parameter Info:
// int32_t                        _SchemeIdx                     (CPF_Parm)

void UDisGFxMoviePlayerMenuBase::Req_GamepadMappingScreen(int32_t _SchemeIdx)
{
	static UFunction* uFnReq_GamepadMappingScreen = nullptr;

	if (!uFnReq_GamepadMappingScreen)
	{
		uFnReq_GamepadMappingScreen = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMenuBase.Req_GamepadMappingScreen");
	}

	UDisGFxMoviePlayerMenuBase_execReq_GamepadMappingScreen_Params Req_GamepadMappingScreen_Params;
	memset(&Req_GamepadMappingScreen_Params, 0, sizeof(Req_GamepadMappingScreen_Params));
	memcpy_s(&Req_GamepadMappingScreen_Params._SchemeIdx, sizeof(Req_GamepadMappingScreen_Params._SchemeIdx), &_SchemeIdx, sizeof(_SchemeIdx));

	this->ProcessEvent(uFnReq_GamepadMappingScreen, &Req_GamepadMappingScreen_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnKeyListening
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43928])
// Parameter Info:
// int32_t                        _SettingID                     (CPF_Parm)

void UDisGFxMoviePlayerMenuBase::OnKeyListening(int32_t _SettingID)
{
	static UFunction* uFnOnKeyListening = nullptr;

	if (!uFnOnKeyListening)
	{
		uFnOnKeyListening = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnKeyListening");
	}

	UDisGFxMoviePlayerMenuBase_execOnKeyListening_Params OnKeyListening_Params;
	memset(&OnKeyListening_Params, 0, sizeof(OnKeyListening_Params));
	memcpy_s(&OnKeyListening_Params._SettingID, sizeof(OnKeyListening_Params._SettingID), &_SettingID, sizeof(_SettingID));

	this->ProcessEvent(uFnOnKeyListening, &OnKeyListening_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnLoadGameListClosed
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43932])
// Parameter Info:

void UDisGFxMoviePlayerMenuBase::OnLoadGameListClosed()
{
	static UFunction* uFnOnLoadGameListClosed = nullptr;

	if (!uFnOnLoadGameListClosed)
	{
		uFnOnLoadGameListClosed = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnLoadGameListClosed");
	}

	UDisGFxMoviePlayerMenuBase_execOnLoadGameListClosed_Params OnLoadGameListClosed_Params;
	memset(&OnLoadGameListClosed_Params, 0, sizeof(OnLoadGameListClosed_Params));

	this->ProcessEvent(uFnOnLoadGameListClosed, &OnLoadGameListClosed_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnSaveGameListClosed
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43973])
// Parameter Info:

void UDisGFxMoviePlayerMenuBase::OnSaveGameListClosed()
{
	static UFunction* uFnOnSaveGameListClosed = nullptr;

	if (!uFnOnSaveGameListClosed)
	{
		uFnOnSaveGameListClosed = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnSaveGameListClosed");
	}

	UDisGFxMoviePlayerMenuBase_execOnSaveGameListClosed_Params OnSaveGameListClosed_Params;
	memset(&OnSaveGameListClosed_Params, 0, sizeof(OnSaveGameListClosed_Params));

	this->ProcessEvent(uFnOnSaveGameListClosed, &OnSaveGameListClosed_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnDeleteSaveConfirm
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43894])
// Parameter Info:
// uint32_t                       _bFromSaveGameMenu             (CPF_Parm)
// int32_t                        _ListIdx                       (CPF_Parm)

void UDisGFxMoviePlayerMenuBase::OnDeleteSaveConfirm(bool _bFromSaveGameMenu, int32_t _ListIdx)
{
	static UFunction* uFnOnDeleteSaveConfirm = nullptr;

	if (!uFnOnDeleteSaveConfirm)
	{
		uFnOnDeleteSaveConfirm = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnDeleteSaveConfirm");
	}

	UDisGFxMoviePlayerMenuBase_execOnDeleteSaveConfirm_Params OnDeleteSaveConfirm_Params;
	memset(&OnDeleteSaveConfirm_Params, 0, sizeof(OnDeleteSaveConfirm_Params));
	OnDeleteSaveConfirm_Params._bFromSaveGameMenu = _bFromSaveGameMenu;
	memcpy_s(&OnDeleteSaveConfirm_Params._ListIdx, sizeof(OnDeleteSaveConfirm_Params._ListIdx), &_ListIdx, sizeof(_ListIdx));

	this->ProcessEvent(uFnOnDeleteSaveConfirm, &OnDeleteSaveConfirm_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnLoadLastSaveClicked
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43933])
// Parameter Info:

void UDisGFxMoviePlayerMenuBase::OnLoadLastSaveClicked()
{
	static UFunction* uFnOnLoadLastSaveClicked = nullptr;

	if (!uFnOnLoadLastSaveClicked)
	{
		uFnOnLoadLastSaveClicked = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnLoadLastSaveClicked");
	}

	UDisGFxMoviePlayerMenuBase_execOnLoadLastSaveClicked_Params OnLoadLastSaveClicked_Params;
	memset(&OnLoadLastSaveClicked_Params, 0, sizeof(OnLoadLastSaveClicked_Params));

	this->ProcessEvent(uFnOnLoadLastSaveClicked, &OnLoadLastSaveClicked_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnLoadGameConfirm
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43931])
// Parameter Info:
// int32_t                        _ListIdx                       (CPF_Parm)

void UDisGFxMoviePlayerMenuBase::OnLoadGameConfirm(int32_t _ListIdx)
{
	static UFunction* uFnOnLoadGameConfirm = nullptr;

	if (!uFnOnLoadGameConfirm)
	{
		uFnOnLoadGameConfirm = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnLoadGameConfirm");
	}

	UDisGFxMoviePlayerMenuBase_execOnLoadGameConfirm_Params OnLoadGameConfirm_Params;
	memset(&OnLoadGameConfirm_Params, 0, sizeof(OnLoadGameConfirm_Params));
	memcpy_s(&OnLoadGameConfirm_Params._ListIdx, sizeof(OnLoadGameConfirm_Params._ListIdx), &_ListIdx, sizeof(_ListIdx));

	this->ProcessEvent(uFnOnLoadGameConfirm, &OnLoadGameConfirm_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnLoadGameClicked
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43930])
// Parameter Info:

void UDisGFxMoviePlayerMenuBase::OnLoadGameClicked()
{
	static UFunction* uFnOnLoadGameClicked = nullptr;

	if (!uFnOnLoadGameClicked)
	{
		uFnOnLoadGameClicked = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnLoadGameClicked");
	}

	UDisGFxMoviePlayerMenuBase_execOnLoadGameClicked_Params OnLoadGameClicked_Params;
	memset(&OnLoadGameClicked_Params, 0, sizeof(OnLoadGameClicked_Params));

	this->ProcessEvent(uFnOnLoadGameClicked, &OnLoadGameClicked_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnSaveGameConfirm
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43972])
// Parameter Info:
// int32_t                        _ListIdx                       (CPF_Parm)

void UDisGFxMoviePlayerMenuBase::OnSaveGameConfirm(int32_t _ListIdx)
{
	static UFunction* uFnOnSaveGameConfirm = nullptr;

	if (!uFnOnSaveGameConfirm)
	{
		uFnOnSaveGameConfirm = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnSaveGameConfirm");
	}

	UDisGFxMoviePlayerMenuBase_execOnSaveGameConfirm_Params OnSaveGameConfirm_Params;
	memset(&OnSaveGameConfirm_Params, 0, sizeof(OnSaveGameConfirm_Params));
	memcpy_s(&OnSaveGameConfirm_Params._ListIdx, sizeof(OnSaveGameConfirm_Params._ListIdx), &_ListIdx, sizeof(_ListIdx));

	this->ProcessEvent(uFnOnSaveGameConfirm, &OnSaveGameConfirm_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnSaveGameClicked
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43971])
// Parameter Info:

void UDisGFxMoviePlayerMenuBase::OnSaveGameClicked()
{
	static UFunction* uFnOnSaveGameClicked = nullptr;

	if (!uFnOnSaveGameClicked)
	{
		uFnOnSaveGameClicked = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnSaveGameClicked");
	}

	UDisGFxMoviePlayerMenuBase_execOnSaveGameClicked_Params OnSaveGameClicked_Params;
	memset(&OnSaveGameClicked_Params, 0, sizeof(OnSaveGameClicked_Params));

	this->ProcessEvent(uFnOnSaveGameClicked, &OnSaveGameClicked_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.Req_CanLoadGame
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44702])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UDisGFxMoviePlayerMenuBase::Req_CanLoadGame()
{
	static UFunction* uFnReq_CanLoadGame = nullptr;

	if (!uFnReq_CanLoadGame)
	{
		uFnReq_CanLoadGame = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMenuBase.Req_CanLoadGame");
	}

	UDisGFxMoviePlayerMenuBase_execReq_CanLoadGame_Params Req_CanLoadGame_Params;
	memset(&Req_CanLoadGame_Params, 0, sizeof(Req_CanLoadGame_Params));

	this->ProcessEvent(uFnReq_CanLoadGame, &Req_CanLoadGame_Params, nullptr);

	return Req_CanLoadGame_Params.ReturnValue;
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.Req_CanSaveGame
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44703])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UDisGFxMoviePlayerMenuBase::Req_CanSaveGame()
{
	static UFunction* uFnReq_CanSaveGame = nullptr;

	if (!uFnReq_CanSaveGame)
	{
		uFnReq_CanSaveGame = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMenuBase.Req_CanSaveGame");
	}

	UDisGFxMoviePlayerMenuBase_execReq_CanSaveGame_Params Req_CanSaveGame_Params;
	memset(&Req_CanSaveGame_Params, 0, sizeof(Req_CanSaveGame_Params));

	this->ProcessEvent(uFnReq_CanSaveGame, &Req_CanSaveGame_Params, nullptr);

	return Req_CanSaveGame_Params.ReturnValue;
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.Req_IsSaveLoadEnabled
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44718])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UDisGFxMoviePlayerMenuBase::Req_IsSaveLoadEnabled()
{
	static UFunction* uFnReq_IsSaveLoadEnabled = nullptr;

	if (!uFnReq_IsSaveLoadEnabled)
	{
		uFnReq_IsSaveLoadEnabled = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMenuBase.Req_IsSaveLoadEnabled");
	}

	UDisGFxMoviePlayerMenuBase_execReq_IsSaveLoadEnabled_Params Req_IsSaveLoadEnabled_Params;
	memset(&Req_IsSaveLoadEnabled_Params, 0, sizeof(Req_IsSaveLoadEnabled_Params));

	this->ProcessEvent(uFnReq_IsSaveLoadEnabled, &Req_IsSaveLoadEnabled_Params, nullptr);

	return Req_IsSaveLoadEnabled_Params.ReturnValue;
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.Req_CanContinueGame
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44701])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UDisGFxMoviePlayerMenuBase::Req_CanContinueGame()
{
	static UFunction* uFnReq_CanContinueGame = nullptr;

	if (!uFnReq_CanContinueGame)
	{
		uFnReq_CanContinueGame = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMenuBase.Req_CanContinueGame");
	}

	UDisGFxMoviePlayerMenuBase_execReq_CanContinueGame_Params Req_CanContinueGame_Params;
	memset(&Req_CanContinueGame_Params, 0, sizeof(Req_CanContinueGame_Params));

	this->ProcessEvent(uFnReq_CanContinueGame, &Req_CanContinueGame_Params, nullptr);

	return Req_CanContinueGame_Params.ReturnValue;
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.UseDLC06Progression
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47708])
// Parameter Info:
// int32_t                        _ListIdx                       (CPF_Parm)

void UDisGFxMoviePlayerMainMenu::UseDLC06Progression(int32_t _ListIdx)
{
	static UFunction* uFnUseDLC06Progression = nullptr;

	if (!uFnUseDLC06Progression)
	{
		uFnUseDLC06Progression = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMainMenu.UseDLC06Progression");
	}

	UDisGFxMoviePlayerMainMenu_execUseDLC06Progression_Params UseDLC06Progression_Params;
	memset(&UseDLC06Progression_Params, 0, sizeof(UseDLC06Progression_Params));
	memcpy_s(&UseDLC06Progression_Params._ListIdx, sizeof(UseDLC06Progression_Params._ListIdx), &_ListIdx, sizeof(_ListIdx));

	this->ProcessEvent(uFnUseDLC06Progression, &UseDLC06Progression_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.BackToStartScreen
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30568])
// Parameter Info:

void UDisGFxMoviePlayerMainMenu::BackToStartScreen()
{
	static UFunction* uFnBackToStartScreen = nullptr;

	if (!uFnBackToStartScreen)
	{
		uFnBackToStartScreen = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMainMenu.BackToStartScreen");
	}

	UDisGFxMoviePlayerMainMenu_execBackToStartScreen_Params BackToStartScreen_Params;
	memset(&BackToStartScreen_Params, 0, sizeof(BackToStartScreen_Params));

	this->ProcessEvent(uFnBackToStartScreen, &BackToStartScreen_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnQuitGameConfirm
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43957])
// Parameter Info:

void UDisGFxMoviePlayerMainMenu::OnQuitGameConfirm()
{
	static UFunction* uFnOnQuitGameConfirm = nullptr;

	if (!uFnOnQuitGameConfirm)
	{
		uFnOnQuitGameConfirm = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnQuitGameConfirm");
	}

	UDisGFxMoviePlayerMainMenu_execOnQuitGameConfirm_Params OnQuitGameConfirm_Params;
	memset(&OnQuitGameConfirm_Params, 0, sizeof(OnQuitGameConfirm_Params));

	this->ProcessEvent(uFnOnQuitGameConfirm, &OnQuitGameConfirm_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnDLCListClosed
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43897])
// Parameter Info:

void UDisGFxMoviePlayerMainMenu::OnDLCListClosed()
{
	static UFunction* uFnOnDLCListClosed = nullptr;

	if (!uFnOnDLCListClosed)
	{
		uFnOnDLCListClosed = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnDLCListClosed");
	}

	UDisGFxMoviePlayerMainMenu_execOnDLCListClosed_Params OnDLCListClosed_Params;
	memset(&OnDLCListClosed_Params, 0, sizeof(OnDLCListClosed_Params));

	this->ProcessEvent(uFnOnDLCListClosed, &OnDLCListClosed_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.DeleteDLC
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[18884])
// Parameter Info:
// int32_t                        _DLCIdx                        (CPF_Parm)

void UDisGFxMoviePlayerMainMenu::DeleteDLC(int32_t _DLCIdx)
{
	static UFunction* uFnDeleteDLC = nullptr;

	if (!uFnDeleteDLC)
	{
		uFnDeleteDLC = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMainMenu.DeleteDLC");
	}

	UDisGFxMoviePlayerMainMenu_execDeleteDLC_Params DeleteDLC_Params;
	memset(&DeleteDLC_Params, 0, sizeof(DeleteDLC_Params));
	memcpy_s(&DeleteDLC_Params._DLCIdx, sizeof(DeleteDLC_Params._DLCIdx), &_DLCIdx, sizeof(_DLCIdx));

	this->ProcessEvent(uFnDeleteDLC, &DeleteDLC_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.Req_DLConHDD
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44707])
// Parameter Info:

void UDisGFxMoviePlayerMainMenu::Req_DLConHDD()
{
	static UFunction* uFnReq_DLConHDD = nullptr;

	if (!uFnReq_DLConHDD)
	{
		uFnReq_DLConHDD = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMainMenu.Req_DLConHDD");
	}

	UDisGFxMoviePlayerMainMenu_execReq_DLConHDD_Params Req_DLConHDD_Params;
	memset(&Req_DLConHDD_Params, 0, sizeof(Req_DLConHDD_Params));

	this->ProcessEvent(uFnReq_DLConHDD, &Req_DLConHDD_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnDLCClicked
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43896])
// Parameter Info:

void UDisGFxMoviePlayerMainMenu::OnDLCClicked()
{
	static UFunction* uFnOnDLCClicked = nullptr;

	if (!uFnOnDLCClicked)
	{
		uFnOnDLCClicked = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnDLCClicked");
	}

	UDisGFxMoviePlayerMainMenu_execOnDLCClicked_Params OnDLCClicked_Params;
	memset(&OnDLCClicked_Params, 0, sizeof(OnDLCClicked_Params));

	this->ProcessEvent(uFnOnDLCClicked, &OnDLCClicked_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.Req_PSStoreEnabled
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44730])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UDisGFxMoviePlayerMainMenu::Req_PSStoreEnabled()
{
	static UFunction* uFnReq_PSStoreEnabled = nullptr;

	if (!uFnReq_PSStoreEnabled)
	{
		uFnReq_PSStoreEnabled = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMainMenu.Req_PSStoreEnabled");
	}

	UDisGFxMoviePlayerMainMenu_execReq_PSStoreEnabled_Params Req_PSStoreEnabled_Params;
	memset(&Req_PSStoreEnabled_Params, 0, sizeof(Req_PSStoreEnabled_Params));

	this->ProcessEvent(uFnReq_PSStoreEnabled, &Req_PSStoreEnabled_Params, nullptr);

	return Req_PSStoreEnabled_Params.ReturnValue;
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnOptionsClicked
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43951])
// Parameter Info:

void UDisGFxMoviePlayerMainMenu::OnOptionsClicked()
{
	static UFunction* uFnOnOptionsClicked = nullptr;

	if (!uFnOnOptionsClicked)
	{
		uFnOnOptionsClicked = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnOptionsClicked");
	}

	UDisGFxMoviePlayerMainMenu_execOnOptionsClicked_Params OnOptionsClicked_Params;
	memset(&OnOptionsClicked_Params, 0, sizeof(OnOptionsClicked_Params));

	this->ProcessEvent(uFnOnOptionsClicked, &OnOptionsClicked_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.Req_SaveSlotInfos
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44732])
// Parameter Info:
// int32_t                        _ListIdx                       (CPF_Parm)

void UDisGFxMoviePlayerMainMenu::Req_SaveSlotInfos(int32_t _ListIdx)
{
	static UFunction* uFnReq_SaveSlotInfos = nullptr;

	if (!uFnReq_SaveSlotInfos)
	{
		uFnReq_SaveSlotInfos = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMainMenu.Req_SaveSlotInfos");
	}

	UDisGFxMoviePlayerMainMenu_execReq_SaveSlotInfos_Params Req_SaveSlotInfos_Params;
	memset(&Req_SaveSlotInfos_Params, 0, sizeof(Req_SaveSlotInfos_Params));
	memcpy_s(&Req_SaveSlotInfos_Params._ListIdx, sizeof(Req_SaveSlotInfos_Params._ListIdx), &_ListIdx, sizeof(_ListIdx));

	this->ProcessEvent(uFnReq_SaveSlotInfos, &Req_SaveSlotInfos_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnMissionsMenuClosed
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43941])
// Parameter Info:

void UDisGFxMoviePlayerMainMenu::OnMissionsMenuClosed()
{
	static UFunction* uFnOnMissionsMenuClosed = nullptr;

	if (!uFnOnMissionsMenuClosed)
	{
		uFnOnMissionsMenuClosed = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnMissionsMenuClosed");
	}

	UDisGFxMoviePlayerMainMenu_execOnMissionsMenuClosed_Params OnMissionsMenuClosed_Params;
	memset(&OnMissionsMenuClosed_Params, 0, sizeof(OnMissionsMenuClosed_Params));

	this->ProcessEvent(uFnOnMissionsMenuClosed, &OnMissionsMenuClosed_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OpenMissionStats
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44008])
// Parameter Info:
// int32_t                        _MissionIdx                    (CPF_Parm)

void UDisGFxMoviePlayerMainMenu::OpenMissionStats(int32_t _MissionIdx)
{
	static UFunction* uFnOpenMissionStats = nullptr;

	if (!uFnOpenMissionStats)
	{
		uFnOpenMissionStats = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMainMenu.OpenMissionStats");
	}

	UDisGFxMoviePlayerMainMenu_execOpenMissionStats_Params OpenMissionStats_Params;
	memset(&OpenMissionStats_Params, 0, sizeof(OpenMissionStats_Params));
	memcpy_s(&OpenMissionStats_Params._MissionIdx, sizeof(OpenMissionStats_Params._MissionIdx), &_MissionIdx, sizeof(_MissionIdx));

	this->ProcessEvent(uFnOpenMissionStats, &OpenMissionStats_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnMissionSelected
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43940])
// Parameter Info:
// int32_t                        _MissionIdx                    (CPF_Parm)

void UDisGFxMoviePlayerMainMenu::OnMissionSelected(int32_t _MissionIdx)
{
	static UFunction* uFnOnMissionSelected = nullptr;

	if (!uFnOnMissionSelected)
	{
		uFnOnMissionSelected = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnMissionSelected");
	}

	UDisGFxMoviePlayerMainMenu_execOnMissionSelected_Params OnMissionSelected_Params;
	memset(&OnMissionSelected_Params, 0, sizeof(OnMissionSelected_Params));
	memcpy_s(&OnMissionSelected_Params._MissionIdx, sizeof(OnMissionSelected_Params._MissionIdx), &_MissionIdx, sizeof(_MissionIdx));

	this->ProcessEvent(uFnOnMissionSelected, &OnMissionSelected_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnDLCTabSelected
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43898])
// Parameter Info:

void UDisGFxMoviePlayerMainMenu::OnDLCTabSelected()
{
	static UFunction* uFnOnDLCTabSelected = nullptr;

	if (!uFnOnDLCTabSelected)
	{
		uFnOnDLCTabSelected = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnDLCTabSelected");
	}

	UDisGFxMoviePlayerMainMenu_execOnDLCTabSelected_Params OnDLCTabSelected_Params;
	memset(&OnDLCTabSelected_Params, 0, sizeof(OnDLCTabSelected_Params));

	this->ProcessEvent(uFnOnDLCTabSelected, &OnDLCTabSelected_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnCampaignTabSelected
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43889])
// Parameter Info:

void UDisGFxMoviePlayerMainMenu::OnCampaignTabSelected()
{
	static UFunction* uFnOnCampaignTabSelected = nullptr;

	if (!uFnOnCampaignTabSelected)
	{
		uFnOnCampaignTabSelected = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnCampaignTabSelected");
	}

	UDisGFxMoviePlayerMainMenu_execOnCampaignTabSelected_Params OnCampaignTabSelected_Params;
	memset(&OnCampaignTabSelected_Params, 0, sizeof(OnCampaignTabSelected_Params));

	this->ProcessEvent(uFnOnCampaignTabSelected, &OnCampaignTabSelected_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnMissionsClicked
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43939])
// Parameter Info:

void UDisGFxMoviePlayerMainMenu::OnMissionsClicked()
{
	static UFunction* uFnOnMissionsClicked = nullptr;

	if (!uFnOnMissionsClicked)
	{
		uFnOnMissionsClicked = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnMissionsClicked");
	}

	UDisGFxMoviePlayerMainMenu_execOnMissionsClicked_Params OnMissionsClicked_Params;
	memset(&OnMissionsClicked_Params, 0, sizeof(OnMissionsClicked_Params));

	this->ProcessEvent(uFnOnMissionsClicked, &OnMissionsClicked_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnContinueClicked
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43892])
// Parameter Info:

void UDisGFxMoviePlayerMainMenu::OnContinueClicked()
{
	static UFunction* uFnOnContinueClicked = nullptr;

	if (!uFnOnContinueClicked)
	{
		uFnOnContinueClicked = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnContinueClicked");
	}

	UDisGFxMoviePlayerMainMenu_execOnContinueClicked_Params OnContinueClicked_Params;
	memset(&OnContinueClicked_Params, 0, sizeof(OnContinueClicked_Params));

	this->ProcessEvent(uFnOnContinueClicked, &OnContinueClicked_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnNewGameConfirm
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43945])
// Parameter Info:
// int32_t                        _Difficulty                    (CPF_Parm)

void UDisGFxMoviePlayerMainMenu::OnNewGameConfirm(int32_t _Difficulty)
{
	static UFunction* uFnOnNewGameConfirm = nullptr;

	if (!uFnOnNewGameConfirm)
	{
		uFnOnNewGameConfirm = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnNewGameConfirm");
	}

	UDisGFxMoviePlayerMainMenu_execOnNewGameConfirm_Params OnNewGameConfirm_Params;
	memset(&OnNewGameConfirm_Params, 0, sizeof(OnNewGameConfirm_Params));
	memcpy_s(&OnNewGameConfirm_Params._Difficulty, sizeof(OnNewGameConfirm_Params._Difficulty), &_Difficulty, sizeof(_Difficulty));

	this->ProcessEvent(uFnOnNewGameConfirm, &OnNewGameConfirm_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnNewGameClicked
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43944])
// Parameter Info:

void UDisGFxMoviePlayerMainMenu::OnNewGameClicked()
{
	static UFunction* uFnOnNewGameClicked = nullptr;

	if (!uFnOnNewGameClicked)
	{
		uFnOnNewGameClicked = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnNewGameClicked");
	}

	UDisGFxMoviePlayerMainMenu_execOnNewGameClicked_Params OnNewGameClicked_Params;
	memset(&OnNewGameClicked_Params, 0, sizeof(OnNewGameClicked_Params));

	this->ProcessEvent(uFnOnNewGameClicked, &OnNewGameClicked_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnDeviceSelectionComplete
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[9770])
// Parameter Info:
// uint32_t                       _bWasSuccessful                (CPF_Parm)

void UDisGFxMoviePlayerMainMenu::OnDeviceSelectionComplete(bool _bWasSuccessful)
{
	static UFunction* uFnOnDeviceSelectionComplete = nullptr;

	if (!uFnOnDeviceSelectionComplete)
	{
		uFnOnDeviceSelectionComplete = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnDeviceSelectionComplete");
	}

	UDisGFxMoviePlayerMainMenu_execOnDeviceSelectionComplete_Params OnDeviceSelectionComplete_Params;
	memset(&OnDeviceSelectionComplete_Params, 0, sizeof(OnDeviceSelectionComplete_Params));
	OnDeviceSelectionComplete_Params._bWasSuccessful = _bWasSuccessful;

	this->ProcessEvent(uFnOnDeviceSelectionComplete, &OnDeviceSelectionComplete_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnLoginCancelled
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[9775])
// Parameter Info:

void UDisGFxMoviePlayerMainMenu::OnLoginCancelled()
{
	static UFunction* uFnOnLoginCancelled = nullptr;

	if (!uFnOnLoginCancelled)
	{
		uFnOnLoginCancelled = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnLoginCancelled");
	}

	UDisGFxMoviePlayerMainMenu_execOnLoginCancelled_Params OnLoginCancelled_Params;
	memset(&OnLoginCancelled_Params, 0, sizeof(OnLoginCancelled_Params));

	this->ProcessEvent(uFnOnLoginCancelled, &OnLoginCancelled_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnLoginChange
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[9776])
// Parameter Info:
// uint8_t                        _ControllerId                  (CPF_Parm)

void UDisGFxMoviePlayerMainMenu::OnLoginChange(uint8_t _ControllerId)
{
	static UFunction* uFnOnLoginChange = nullptr;

	if (!uFnOnLoginChange)
	{
		uFnOnLoginChange = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnLoginChange");
	}

	UDisGFxMoviePlayerMainMenu_execOnLoginChange_Params OnLoginChange_Params;
	memset(&OnLoginChange_Params, 0, sizeof(OnLoginChange_Params));
	memcpy_s(&OnLoginChange_Params._ControllerId, sizeof(OnLoginChange_Params._ControllerId), &_ControllerId, sizeof(_ControllerId));

	this->ProcessEvent(uFnOnLoginChange, &OnLoginChange_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.ReadProfileSettings
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        _UserIndex                     (CPF_Parm)

void UDisGFxMoviePlayerMainMenu::eventReadProfileSettings(uint8_t _UserIndex)
{
	static UFunction* uFnReadProfileSettings = nullptr;

	if (!uFnReadProfileSettings)
	{
		uFnReadProfileSettings = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMainMenu.ReadProfileSettings");
	}

	UDisGFxMoviePlayerMainMenu_eventReadProfileSettings_Params ReadProfileSettings_Params;
	memset(&ReadProfileSettings_Params, 0, sizeof(ReadProfileSettings_Params));
	memcpy_s(&ReadProfileSettings_Params._UserIndex, sizeof(ReadProfileSettings_Params._UserIndex), &_UserIndex, sizeof(_UserIndex));

	this->ProcessEvent(uFnReadProfileSettings, &ReadProfileSettings_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.UnregisterControllerDelegates
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        _ControllerId                  (CPF_Parm)

void UDisGFxMoviePlayerMainMenu::eventUnregisterControllerDelegates(uint8_t _ControllerId)
{
	static UFunction* uFnUnregisterControllerDelegates = nullptr;

	if (!uFnUnregisterControllerDelegates)
	{
		uFnUnregisterControllerDelegates = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMainMenu.UnregisterControllerDelegates");
	}

	UDisGFxMoviePlayerMainMenu_eventUnregisterControllerDelegates_Params UnregisterControllerDelegates_Params;
	memset(&UnregisterControllerDelegates_Params, 0, sizeof(UnregisterControllerDelegates_Params));
	memcpy_s(&UnregisterControllerDelegates_Params._ControllerId, sizeof(UnregisterControllerDelegates_Params._ControllerId), &_ControllerId, sizeof(_ControllerId));

	this->ProcessEvent(uFnUnregisterControllerDelegates, &UnregisterControllerDelegates_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.RegisterControllerDelegates
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        _ControllerId                  (CPF_Parm)

void UDisGFxMoviePlayerMainMenu::eventRegisterControllerDelegates(uint8_t _ControllerId)
{
	static UFunction* uFnRegisterControllerDelegates = nullptr;

	if (!uFnRegisterControllerDelegates)
	{
		uFnRegisterControllerDelegates = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMainMenu.RegisterControllerDelegates");
	}

	UDisGFxMoviePlayerMainMenu_eventRegisterControllerDelegates_Params RegisterControllerDelegates_Params;
	memset(&RegisterControllerDelegates_Params, 0, sizeof(RegisterControllerDelegates_Params));
	memcpy_s(&RegisterControllerDelegates_Params._ControllerId, sizeof(RegisterControllerDelegates_Params._ControllerId), &_ControllerId, sizeof(_ControllerId));

	this->ProcessEvent(uFnRegisterControllerDelegates, &RegisterControllerDelegates_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.UnregisterCommonDelegates
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UDisGFxMoviePlayerMainMenu::eventUnregisterCommonDelegates()
{
	static UFunction* uFnUnregisterCommonDelegates = nullptr;

	if (!uFnUnregisterCommonDelegates)
	{
		uFnUnregisterCommonDelegates = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMainMenu.UnregisterCommonDelegates");
	}

	UDisGFxMoviePlayerMainMenu_eventUnregisterCommonDelegates_Params UnregisterCommonDelegates_Params;
	memset(&UnregisterCommonDelegates_Params, 0, sizeof(UnregisterCommonDelegates_Params));

	this->ProcessEvent(uFnUnregisterCommonDelegates, &UnregisterCommonDelegates_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.RegisterCommonDelegates
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UDisGFxMoviePlayerMainMenu::eventRegisterCommonDelegates()
{
	static UFunction* uFnRegisterCommonDelegates = nullptr;

	if (!uFnRegisterCommonDelegates)
	{
		uFnRegisterCommonDelegates = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMainMenu.RegisterCommonDelegates");
	}

	UDisGFxMoviePlayerMainMenu_eventRegisterCommonDelegates_Params RegisterCommonDelegates_Params;
	memset(&RegisterCommonDelegates_Params, 0, sizeof(RegisterCommonDelegates_Params));

	this->ProcessEvent(uFnRegisterCommonDelegates, &RegisterCommonDelegates_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.SetControllerId
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        _ControllerId                  (CPF_Parm)

void UDisGFxMoviePlayerMainMenu::eventSetControllerId(int32_t _ControllerId)
{
	static UFunction* uFnSetControllerId = nullptr;

	if (!uFnSetControllerId)
	{
		uFnSetControllerId = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMainMenu.SetControllerId");
	}

	UDisGFxMoviePlayerMainMenu_eventSetControllerId_Params SetControllerId_Params;
	memset(&SetControllerId_Params, 0, sizeof(SetControllerId_Params));
	memcpy_s(&SetControllerId_Params._ControllerId, sizeof(SetControllerId_Params._ControllerId), &_ControllerId, sizeof(_ControllerId));

	this->ProcessEvent(uFnSetControllerId, &SetControllerId_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerPauseMenu.OnMenuClosed
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43936])
// Parameter Info:

void UDisGFxMoviePlayerPauseMenu::OnMenuClosed()
{
	static UFunction* uFnOnMenuClosed = nullptr;

	if (!uFnOnMenuClosed)
	{
		uFnOnMenuClosed = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerPauseMenu.OnMenuClosed");
	}

	UDisGFxMoviePlayerPauseMenu_execOnMenuClosed_Params OnMenuClosed_Params;
	memset(&OnMenuClosed_Params, 0, sizeof(OnMenuClosed_Params));

	this->ProcessEvent(uFnOnMenuClosed, &OnMenuClosed_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerPauseMenu.BackToWindows
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30569])
// Parameter Info:

void UDisGFxMoviePlayerPauseMenu::BackToWindows()
{
	static UFunction* uFnBackToWindows = nullptr;

	if (!uFnBackToWindows)
	{
		uFnBackToWindows = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerPauseMenu.BackToWindows");
	}

	UDisGFxMoviePlayerPauseMenu_execBackToWindows_Params BackToWindows_Params;
	memset(&BackToWindows_Params, 0, sizeof(BackToWindows_Params));

	this->ProcessEvent(uFnBackToWindows, &BackToWindows_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerPauseMenu.OnQuitGameConfirm
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43957])
// Parameter Info:

void UDisGFxMoviePlayerPauseMenu::OnQuitGameConfirm()
{
	static UFunction* uFnOnQuitGameConfirm = nullptr;

	if (!uFnOnQuitGameConfirm)
	{
		uFnOnQuitGameConfirm = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerPauseMenu.OnQuitGameConfirm");
	}

	UDisGFxMoviePlayerPauseMenu_execOnQuitGameConfirm_Params OnQuitGameConfirm_Params;
	memset(&OnQuitGameConfirm_Params, 0, sizeof(OnQuitGameConfirm_Params));

	this->ProcessEvent(uFnOnQuitGameConfirm, &OnQuitGameConfirm_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerPauseMenu.BackToDLC07MainMenu
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45877])
// Parameter Info:

void UDisGFxMoviePlayerPauseMenu::BackToDLC07MainMenu()
{
	static UFunction* uFnBackToDLC07MainMenu = nullptr;

	if (!uFnBackToDLC07MainMenu)
	{
		uFnBackToDLC07MainMenu = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerPauseMenu.BackToDLC07MainMenu");
	}

	UDisGFxMoviePlayerPauseMenu_execBackToDLC07MainMenu_Params BackToDLC07MainMenu_Params;
	memset(&BackToDLC07MainMenu_Params, 0, sizeof(BackToDLC07MainMenu_Params));

	this->ProcessEvent(uFnBackToDLC07MainMenu, &BackToDLC07MainMenu_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerPauseMenu.BackToDLC06MainMenu
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45876])
// Parameter Info:

void UDisGFxMoviePlayerPauseMenu::BackToDLC06MainMenu()
{
	static UFunction* uFnBackToDLC06MainMenu = nullptr;

	if (!uFnBackToDLC06MainMenu)
	{
		uFnBackToDLC06MainMenu = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerPauseMenu.BackToDLC06MainMenu");
	}

	UDisGFxMoviePlayerPauseMenu_execBackToDLC06MainMenu_Params BackToDLC06MainMenu_Params;
	memset(&BackToDLC06MainMenu_Params, 0, sizeof(BackToDLC06MainMenu_Params));

	this->ProcessEvent(uFnBackToDLC06MainMenu, &BackToDLC06MainMenu_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerPauseMenu.OnTutorialReadRequest
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44003])
// Parameter Info:
// int32_t                        _ListIdx                       (CPF_Parm)

void UDisGFxMoviePlayerPauseMenu::OnTutorialReadRequest(int32_t _ListIdx)
{
	static UFunction* uFnOnTutorialReadRequest = nullptr;

	if (!uFnOnTutorialReadRequest)
	{
		uFnOnTutorialReadRequest = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerPauseMenu.OnTutorialReadRequest");
	}

	UDisGFxMoviePlayerPauseMenu_execOnTutorialReadRequest_Params OnTutorialReadRequest_Params;
	memset(&OnTutorialReadRequest_Params, 0, sizeof(OnTutorialReadRequest_Params));
	memcpy_s(&OnTutorialReadRequest_Params._ListIdx, sizeof(OnTutorialReadRequest_Params._ListIdx), &_ListIdx, sizeof(_ListIdx));

	this->ProcessEvent(uFnOnTutorialReadRequest, &OnTutorialReadRequest_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerPauseMenu.OnTutorialsClicked
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44004])
// Parameter Info:

void UDisGFxMoviePlayerPauseMenu::OnTutorialsClicked()
{
	static UFunction* uFnOnTutorialsClicked = nullptr;

	if (!uFnOnTutorialsClicked)
	{
		uFnOnTutorialsClicked = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerPauseMenu.OnTutorialsClicked");
	}

	UDisGFxMoviePlayerPauseMenu_execOnTutorialsClicked_Params OnTutorialsClicked_Params;
	memset(&OnTutorialsClicked_Params, 0, sizeof(OnTutorialsClicked_Params));

	this->ProcessEvent(uFnOnTutorialsClicked, &OnTutorialsClicked_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerPauseMenu.OnLeaveOptions
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43929])
// Parameter Info:

void UDisGFxMoviePlayerPauseMenu::OnLeaveOptions()
{
	static UFunction* uFnOnLeaveOptions = nullptr;

	if (!uFnOnLeaveOptions)
	{
		uFnOnLeaveOptions = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerPauseMenu.OnLeaveOptions");
	}

	UDisGFxMoviePlayerPauseMenu_execOnLeaveOptions_Params OnLeaveOptions_Params;
	memset(&OnLeaveOptions_Params, 0, sizeof(OnLeaveOptions_Params));

	this->ProcessEvent(uFnOnLeaveOptions, &OnLeaveOptions_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerPauseMenu.OnOptionsClicked
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43951])
// Parameter Info:

void UDisGFxMoviePlayerPauseMenu::OnOptionsClicked()
{
	static UFunction* uFnOnOptionsClicked = nullptr;

	if (!uFnOnOptionsClicked)
	{
		uFnOnOptionsClicked = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerPauseMenu.OnOptionsClicked");
	}

	UDisGFxMoviePlayerPauseMenu_execOnOptionsClicked_Params OnOptionsClicked_Params;
	memset(&OnOptionsClicked_Params, 0, sizeof(OnOptionsClicked_Params));

	this->ProcessEvent(uFnOnOptionsClicked, &OnOptionsClicked_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerPauseMenu.OnResumeGameClicked
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43966])
// Parameter Info:

void UDisGFxMoviePlayerPauseMenu::OnResumeGameClicked()
{
	static UFunction* uFnOnResumeGameClicked = nullptr;

	if (!uFnOnResumeGameClicked)
	{
		uFnOnResumeGameClicked = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerPauseMenu.OnResumeGameClicked");
	}

	UDisGFxMoviePlayerPauseMenu_execOnResumeGameClicked_Params OnResumeGameClicked_Params;
	memset(&OnResumeGameClicked_Params, 0, sizeof(OnResumeGameClicked_Params));

	this->ProcessEvent(uFnOnResumeGameClicked, &OnResumeGameClicked_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerPauseMenu.HasFinishedSaveLoad
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[46550])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UDisGFxMoviePlayerPauseMenu::HasFinishedSaveLoad()
{
	static UFunction* uFnHasFinishedSaveLoad = nullptr;

	if (!uFnHasFinishedSaveLoad)
	{
		uFnHasFinishedSaveLoad = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerPauseMenu.HasFinishedSaveLoad");
	}

	UDisGFxMoviePlayerPauseMenu_execHasFinishedSaveLoad_Params HasFinishedSaveLoad_Params;
	memset(&HasFinishedSaveLoad_Params, 0, sizeof(HasFinishedSaveLoad_Params));

	this->ProcessEvent(uFnHasFinishedSaveLoad, &HasFinishedSaveLoad_Params, nullptr);

	return HasFinishedSaveLoad_Params.ReturnValue;
};

// Function DishonoredGame.DisGFxMoviePlayerPauseMenu.SetPauseDuringSaveLoad
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       _bDesiredPauseState            (CPF_Parm)

void UDisGFxMoviePlayerPauseMenu::eventSetPauseDuringSaveLoad(bool _bDesiredPauseState)
{
	static UFunction* uFnSetPauseDuringSaveLoad = nullptr;

	if (!uFnSetPauseDuringSaveLoad)
	{
		uFnSetPauseDuringSaveLoad = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerPauseMenu.SetPauseDuringSaveLoad");
	}

	UDisGFxMoviePlayerPauseMenu_eventSetPauseDuringSaveLoad_Params SetPauseDuringSaveLoad_Params;
	memset(&SetPauseDuringSaveLoad_Params, 0, sizeof(SetPauseDuringSaveLoad_Params));
	SetPauseDuringSaveLoad_Params._bDesiredPauseState = _bDesiredPauseState;

	this->ProcessEvent(uFnSetPauseDuringSaveLoad, &SetPauseDuringSaveLoad_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMissionStats.OnClosed
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43891])
// Parameter Info:

void UDisGFxMoviePlayerMissionStats::OnClosed()
{
	static UFunction* uFnOnClosed = nullptr;

	if (!uFnOnClosed)
	{
		uFnOnClosed = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMissionStats.OnClosed");
	}

	UDisGFxMoviePlayerMissionStats_execOnClosed_Params OnClosed_Params;
	memset(&OnClosed_Params, 0, sizeof(OnClosed_Params));

	this->ProcessEvent(uFnOnClosed, &OnClosed_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMissionStats.OnBackClicked
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43888])
// Parameter Info:

void UDisGFxMoviePlayerMissionStats::OnBackClicked()
{
	static UFunction* uFnOnBackClicked = nullptr;

	if (!uFnOnBackClicked)
	{
		uFnOnBackClicked = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMissionStats.OnBackClicked");
	}

	UDisGFxMoviePlayerMissionStats_execOnBackClicked_Params OnBackClicked_Params;
	memset(&OnBackClicked_Params, 0, sizeof(OnBackClicked_Params));

	this->ProcessEvent(uFnOnBackClicked, &OnBackClicked_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMissionStats.OnReplayMissionClicked
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43963])
// Parameter Info:

void UDisGFxMoviePlayerMissionStats::OnReplayMissionClicked()
{
	static UFunction* uFnOnReplayMissionClicked = nullptr;

	if (!uFnOnReplayMissionClicked)
	{
		uFnOnReplayMissionClicked = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMissionStats.OnReplayMissionClicked");
	}

	UDisGFxMoviePlayerMissionStats_execOnReplayMissionClicked_Params OnReplayMissionClicked_Params;
	memset(&OnReplayMissionClicked_Params, 0, sizeof(OnReplayMissionClicked_Params));

	this->ProcessEvent(uFnOnReplayMissionClicked, &OnReplayMissionClicked_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerMissionStats.OnContinueClicked
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43892])
// Parameter Info:

void UDisGFxMoviePlayerMissionStats::OnContinueClicked()
{
	static UFunction* uFnOnContinueClicked = nullptr;

	if (!uFnOnContinueClicked)
	{
		uFnOnContinueClicked = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerMissionStats.OnContinueClicked");
	}

	UDisGFxMoviePlayerMissionStats_execOnContinueClicked_Params OnContinueClicked_Params;
	memset(&OnContinueClicked_Params, 0, sizeof(OnContinueClicked_Params));

	this->ProcessEvent(uFnOnContinueClicked, &OnContinueClicked_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerNote.OnReadableNoteClosed
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43958])
// Parameter Info:

void UDisGFxMoviePlayerNote::OnReadableNoteClosed()
{
	static UFunction* uFnOnReadableNoteClosed = nullptr;

	if (!uFnOnReadableNoteClosed)
	{
		uFnOnReadableNoteClosed = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerNote.OnReadableNoteClosed");
	}

	UDisGFxMoviePlayerNote_execOnReadableNoteClosed_Params OnReadableNoteClosed_Params;
	memset(&OnReadableNoteClosed_Params, 0, sizeof(OnReadableNoteClosed_Params));

	this->ProcessEvent(uFnOnReadableNoteClosed, &OnReadableNoteClosed_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerNote.HasFinishedAsyncLoading
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35452])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UDisGFxMoviePlayerNote::HasFinishedAsyncLoading()
{
	static UFunction* uFnHasFinishedAsyncLoading = nullptr;

	if (!uFnHasFinishedAsyncLoading)
	{
		uFnHasFinishedAsyncLoading = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerNote.HasFinishedAsyncLoading");
	}

	UDisGFxMoviePlayerNote_execHasFinishedAsyncLoading_Params HasFinishedAsyncLoading_Params;
	memset(&HasFinishedAsyncLoading_Params, 0, sizeof(HasFinishedAsyncLoading_Params));

	this->ProcessEvent(uFnHasFinishedAsyncLoading, &HasFinishedAsyncLoading_Params, nullptr);

	return HasFinishedAsyncLoading_Params.ReturnValue;
};

// Function DishonoredGame.DisGFxMoviePlayerPowerWheel.OnClosed
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43891])
// Parameter Info:

void UDisGFxMoviePlayerPowerWheel::OnClosed()
{
	static UFunction* uFnOnClosed = nullptr;

	if (!uFnOnClosed)
	{
		uFnOnClosed = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerPowerWheel.OnClosed");
	}

	UDisGFxMoviePlayerPowerWheel_execOnClosed_Params OnClosed_Params;
	memset(&OnClosed_Params, 0, sizeof(OnClosed_Params));

	this->ProcessEvent(uFnOnClosed, &OnClosed_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerPowerWheel.ConsumeManaPotion
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30901])
// Parameter Info:

void UDisGFxMoviePlayerPowerWheel::ConsumeManaPotion()
{
	static UFunction* uFnConsumeManaPotion = nullptr;

	if (!uFnConsumeManaPotion)
	{
		uFnConsumeManaPotion = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerPowerWheel.ConsumeManaPotion");
	}

	UDisGFxMoviePlayerPowerWheel_execConsumeManaPotion_Params ConsumeManaPotion_Params;
	memset(&ConsumeManaPotion_Params, 0, sizeof(ConsumeManaPotion_Params));

	this->ProcessEvent(uFnConsumeManaPotion, &ConsumeManaPotion_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerPowerWheel.ConsumeHealthPotion
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30900])
// Parameter Info:

void UDisGFxMoviePlayerPowerWheel::ConsumeHealthPotion()
{
	static UFunction* uFnConsumeHealthPotion = nullptr;

	if (!uFnConsumeHealthPotion)
	{
		uFnConsumeHealthPotion = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerPowerWheel.ConsumeHealthPotion");
	}

	UDisGFxMoviePlayerPowerWheel_execConsumeHealthPotion_Params ConsumeHealthPotion_Params;
	memset(&ConsumeHealthPotion_Params, 0, sizeof(ConsumeHealthPotion_Params));

	this->ProcessEvent(uFnConsumeHealthPotion, &ConsumeHealthPotion_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerPowerWheel.OnSelectionChanged
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43978])
// Parameter Info:
// int32_t                        _ItemIdx                       (CPF_Parm)

void UDisGFxMoviePlayerPowerWheel::OnSelectionChanged(int32_t _ItemIdx)
{
	static UFunction* uFnOnSelectionChanged = nullptr;

	if (!uFnOnSelectionChanged)
	{
		uFnOnSelectionChanged = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerPowerWheel.OnSelectionChanged");
	}

	UDisGFxMoviePlayerPowerWheel_execOnSelectionChanged_Params OnSelectionChanged_Params;
	memset(&OnSelectionChanged_Params, 0, sizeof(OnSelectionChanged_Params));
	memcpy_s(&OnSelectionChanged_Params._ItemIdx, sizeof(OnSelectionChanged_Params._ItemIdx), &_ItemIdx, sizeof(_ItemIdx));

	this->ProcessEvent(uFnOnSelectionChanged, &OnSelectionChanged_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerStore.OnShopClosed
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43986])
// Parameter Info:

void UDisGFxMoviePlayerStore::OnShopClosed()
{
	static UFunction* uFnOnShopClosed = nullptr;

	if (!uFnOnShopClosed)
	{
		uFnOnShopClosed = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerStore.OnShopClosed");
	}

	UDisGFxMoviePlayerStore_execOnShopClosed_Params OnShopClosed_Params;
	memset(&OnShopClosed_Params, 0, sizeof(OnShopClosed_Params));

	this->ProcessEvent(uFnOnShopClosed, &OnShopClosed_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerStore.Req_BuyItem
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44700])
// Parameter Info:
// int32_t                        _ItemIdx                       (CPF_Parm)

void UDisGFxMoviePlayerStore::Req_BuyItem(int32_t _ItemIdx)
{
	static UFunction* uFnReq_BuyItem = nullptr;

	if (!uFnReq_BuyItem)
	{
		uFnReq_BuyItem = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerStore.Req_BuyItem");
	}

	UDisGFxMoviePlayerStore_execReq_BuyItem_Params Req_BuyItem_Params;
	memset(&Req_BuyItem_Params, 0, sizeof(Req_BuyItem_Params));
	memcpy_s(&Req_BuyItem_Params._ItemIdx, sizeof(Req_BuyItem_Params._ItemIdx), &_ItemIdx, sizeof(_ItemIdx));

	this->ProcessEvent(uFnReq_BuyItem, &Req_BuyItem_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerStore.Req_ItemInfo
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44719])
// Parameter Info:
// int32_t                        _ItemIdx                       (CPF_Parm)

void UDisGFxMoviePlayerStore::Req_ItemInfo(int32_t _ItemIdx)
{
	static UFunction* uFnReq_ItemInfo = nullptr;

	if (!uFnReq_ItemInfo)
	{
		uFnReq_ItemInfo = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerStore.Req_ItemInfo");
	}

	UDisGFxMoviePlayerStore_execReq_ItemInfo_Params Req_ItemInfo_Params;
	memset(&Req_ItemInfo_Params, 0, sizeof(Req_ItemInfo_Params));
	memcpy_s(&Req_ItemInfo_Params._ItemIdx, sizeof(Req_ItemInfo_Params._ItemIdx), &_ItemIdx, sizeof(_ItemIdx));

	this->ProcessEvent(uFnReq_ItemInfo, &Req_ItemInfo_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerStore.Req_FavorsList
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47668])
// Parameter Info:

void UDisGFxMoviePlayerStore::Req_FavorsList()
{
	static UFunction* uFnReq_FavorsList = nullptr;

	if (!uFnReq_FavorsList)
	{
		uFnReq_FavorsList = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerStore.Req_FavorsList");
	}

	UDisGFxMoviePlayerStore_execReq_FavorsList_Params Req_FavorsList_Params;
	memset(&Req_FavorsList_Params, 0, sizeof(Req_FavorsList_Params));

	this->ProcessEvent(uFnReq_FavorsList, &Req_FavorsList_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerStore.Req_UpgradesList
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44733])
// Parameter Info:

void UDisGFxMoviePlayerStore::Req_UpgradesList()
{
	static UFunction* uFnReq_UpgradesList = nullptr;

	if (!uFnReq_UpgradesList)
	{
		uFnReq_UpgradesList = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerStore.Req_UpgradesList");
	}

	UDisGFxMoviePlayerStore_execReq_UpgradesList_Params Req_UpgradesList_Params;
	memset(&Req_UpgradesList_Params, 0, sizeof(Req_UpgradesList_Params));

	this->ProcessEvent(uFnReq_UpgradesList, &Req_UpgradesList_Params, nullptr);
};

// Function DishonoredGame.DisGFxMoviePlayerStore.Req_PurchasesList
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44731])
// Parameter Info:

void UDisGFxMoviePlayerStore::Req_PurchasesList()
{
	static UFunction* uFnReq_PurchasesList = nullptr;

	if (!uFnReq_PurchasesList)
	{
		uFnReq_PurchasesList = UFunction::FindFunction("Function DishonoredGame.DisGFxMoviePlayerStore.Req_PurchasesList");
	}

	UDisGFxMoviePlayerStore_execReq_PurchasesList_Params Req_PurchasesList_Params;
	memset(&Req_PurchasesList_Params, 0, sizeof(Req_PurchasesList_Params));

	this->ProcessEvent(uFnReq_PurchasesList, &Req_PurchasesList_Params, nullptr);
};

// Function DishonoredGame.DishonoredHUD.Version
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ADishonoredHUD::Version()
{
	static UFunction* uFnVersion = nullptr;

	if (!uFnVersion)
	{
		uFnVersion = UFunction::FindFunction("Function DishonoredGame.DishonoredHUD.Version");
	}

	ADishonoredHUD_execVersion_Params Version_Params;
	memset(&Version_Params, 0, sizeof(Version_Params));

	this->ProcessEvent(uFnVersion, &Version_Params, nullptr);
};

// Function DishonoredGame.DishonoredHUD.DebugOnly
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[31375])
// Parameter Info:
// class FName                    DebugType1                     (CPF_OptionalParm | CPF_Parm)
// class FName                    DebugType2                     (CPF_OptionalParm | CPF_Parm)
// class FName                    DebugType3                     (CPF_OptionalParm | CPF_Parm)
// class FName                    DebugType4                     (CPF_OptionalParm | CPF_Parm)
// class FName                    DebugType5                     (CPF_OptionalParm | CPF_Parm)

void ADishonoredHUD::DebugOnly(const class FName& DebugType1, const class FName& DebugType2, const class FName& DebugType3, const class FName& DebugType4, const class FName& DebugType5)
{
	static UFunction* uFnDebugOnly = nullptr;

	if (!uFnDebugOnly)
	{
		uFnDebugOnly = UFunction::FindFunction("Function DishonoredGame.DishonoredHUD.DebugOnly");
	}

	ADishonoredHUD_execDebugOnly_Params DebugOnly_Params;
	memset(&DebugOnly_Params, 0, sizeof(DebugOnly_Params));
	memcpy_s(&DebugOnly_Params.DebugType1, sizeof(DebugOnly_Params.DebugType1), &DebugType1, sizeof(DebugType1));
	memcpy_s(&DebugOnly_Params.DebugType2, sizeof(DebugOnly_Params.DebugType2), &DebugType2, sizeof(DebugType2));
	memcpy_s(&DebugOnly_Params.DebugType3, sizeof(DebugOnly_Params.DebugType3), &DebugType3, sizeof(DebugType3));
	memcpy_s(&DebugOnly_Params.DebugType4, sizeof(DebugOnly_Params.DebugType4), &DebugType4, sizeof(DebugType4));
	memcpy_s(&DebugOnly_Params.DebugType5, sizeof(DebugOnly_Params.DebugType5), &DebugType5, sizeof(DebugType5));

	this->ProcessEvent(uFnDebugOnly, &DebugOnly_Params, nullptr);
};

// Function DishonoredGame.DishonoredHUD.DebugClear
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31357])
// Parameter Info:

void ADishonoredHUD::DebugClear()
{
	static UFunction* uFnDebugClear = nullptr;

	if (!uFnDebugClear)
	{
		uFnDebugClear = UFunction::FindFunction("Function DishonoredGame.DishonoredHUD.DebugClear");
	}

	ADishonoredHUD_execDebugClear_Params DebugClear_Params;
	memset(&DebugClear_Params, 0, sizeof(DebugClear_Params));

	this->ProcessEvent(uFnDebugClear, &DebugClear_Params, nullptr);
};

// Function DishonoredGame.DishonoredHUD.DebugDisable
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[31360])
// Parameter Info:
// class FName                    DebugType                      (CPF_OptionalParm | CPF_Parm)

void ADishonoredHUD::DebugDisable(const class FName& DebugType)
{
	static UFunction* uFnDebugDisable = nullptr;

	if (!uFnDebugDisable)
	{
		uFnDebugDisable = UFunction::FindFunction("Function DishonoredGame.DishonoredHUD.DebugDisable");
	}

	ADishonoredHUD_execDebugDisable_Params DebugDisable_Params;
	memset(&DebugDisable_Params, 0, sizeof(DebugDisable_Params));
	memcpy_s(&DebugDisable_Params.DebugType, sizeof(DebugDisable_Params.DebugType), &DebugType, sizeof(DebugType));

	this->ProcessEvent(uFnDebugDisable, &DebugDisable_Params, nullptr);
};

// Function DishonoredGame.DishonoredHUD.DebugEnable
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[31361])
// Parameter Info:
// class FName                    DebugType                      (CPF_OptionalParm | CPF_Parm)

void ADishonoredHUD::DebugEnable(const class FName& DebugType)
{
	static UFunction* uFnDebugEnable = nullptr;

	if (!uFnDebugEnable)
	{
		uFnDebugEnable = UFunction::FindFunction("Function DishonoredGame.DishonoredHUD.DebugEnable");
	}

	ADishonoredHUD_execDebugEnable_Params DebugEnable_Params;
	memset(&DebugEnable_Params, 0, sizeof(DebugEnable_Params));
	memcpy_s(&DebugEnable_Params.DebugType, sizeof(DebugEnable_Params.DebugType), &DebugType, sizeof(DebugType));

	this->ProcessEvent(uFnDebugEnable, &DebugEnable_Params, nullptr);
};

// Function DishonoredGame.DishonoredHUD.DrawHUD
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:

void ADishonoredHUD::DrawHUD()
{
	static UFunction* uFnDrawHUD = nullptr;

	if (!uFnDrawHUD)
	{
		uFnDrawHUD = UFunction::FindFunction("Function DishonoredGame.DishonoredHUD.DrawHUD");
	}

	ADishonoredHUD_execDrawHUD_Params DrawHUD_Params;
	memset(&DrawHUD_Params, 0, sizeof(DrawHUD_Params));

	this->ProcessEvent(uFnDrawHUD, &DrawHUD_Params, nullptr);
};

// Function DishonoredGame.DishonoredHUD.CallDrawRoute
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APawn*                   _pTarget                       (CPF_Parm)

void ADishonoredHUD::eventCallDrawRoute(class APawn* _pTarget)
{
	static UFunction* uFnCallDrawRoute = nullptr;

	if (!uFnCallDrawRoute)
	{
		uFnCallDrawRoute = UFunction::FindFunction("Function DishonoredGame.DishonoredHUD.CallDrawRoute");
	}

	ADishonoredHUD_eventCallDrawRoute_Params CallDrawRoute_Params;
	memset(&CallDrawRoute_Params, 0, sizeof(CallDrawRoute_Params));
	CallDrawRoute_Params._pTarget = _pTarget;

	this->ProcessEvent(uFnCallDrawRoute, &CallDrawRoute_Params, nullptr);
};

// Function DishonoredGame.DishonoredHUD.ShowDebugInfo_Native
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[44891])
// Parameter Info:
// float                          out_YL                         (CPF_Parm | CPF_OutParm)
// float                          out_YPos                       (CPF_Parm | CPF_OutParm)

void ADishonoredHUD::ShowDebugInfo_Native(float& out_YL, float& out_YPos)
{
	static UFunction* uFnShowDebugInfo_Native = nullptr;

	if (!uFnShowDebugInfo_Native)
	{
		uFnShowDebugInfo_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredHUD.ShowDebugInfo_Native");
	}

	ADishonoredHUD_execShowDebugInfo_Native_Params ShowDebugInfo_Native_Params;
	memset(&ShowDebugInfo_Native_Params, 0, sizeof(ShowDebugInfo_Native_Params));
	memcpy_s(&ShowDebugInfo_Native_Params.out_YL, sizeof(ShowDebugInfo_Native_Params.out_YL), &out_YL, sizeof(out_YL));
	memcpy_s(&ShowDebugInfo_Native_Params.out_YPos, sizeof(ShowDebugInfo_Native_Params.out_YPos), &out_YPos, sizeof(out_YPos));

	this->ProcessEvent(uFnShowDebugInfo_Native, &ShowDebugInfo_Native_Params, nullptr);

	memcpy_s(&out_YL, sizeof(out_YL), &ShowDebugInfo_Native_Params.out_YL, sizeof(ShowDebugInfo_Native_Params.out_YL));
	memcpy_s(&out_YPos, sizeof(out_YPos), &ShowDebugInfo_Native_Params.out_YPos, sizeof(ShowDebugInfo_Native_Params.out_YPos));
};

// Function DishonoredGame.DishonoredHUD.PlayerDisplayDebug_Native
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[44253])
// Parameter Info:
// float                          out_YL                         (CPF_Parm | CPF_OutParm)
// float                          out_YPos                       (CPF_Parm | CPF_OutParm)

void ADishonoredHUD::PlayerDisplayDebug_Native(float& out_YL, float& out_YPos)
{
	static UFunction* uFnPlayerDisplayDebug_Native = nullptr;

	if (!uFnPlayerDisplayDebug_Native)
	{
		uFnPlayerDisplayDebug_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredHUD.PlayerDisplayDebug_Native");
	}

	ADishonoredHUD_execPlayerDisplayDebug_Native_Params PlayerDisplayDebug_Native_Params;
	memset(&PlayerDisplayDebug_Native_Params, 0, sizeof(PlayerDisplayDebug_Native_Params));
	memcpy_s(&PlayerDisplayDebug_Native_Params.out_YL, sizeof(PlayerDisplayDebug_Native_Params.out_YL), &out_YL, sizeof(out_YL));
	memcpy_s(&PlayerDisplayDebug_Native_Params.out_YPos, sizeof(PlayerDisplayDebug_Native_Params.out_YPos), &out_YPos, sizeof(out_YPos));

	this->ProcessEvent(uFnPlayerDisplayDebug_Native, &PlayerDisplayDebug_Native_Params, nullptr);

	memcpy_s(&out_YL, sizeof(out_YL), &PlayerDisplayDebug_Native_Params.out_YL, sizeof(PlayerDisplayDebug_Native_Params.out_YL));
	memcpy_s(&out_YPos, sizeof(out_YPos), &PlayerDisplayDebug_Native_Params.out_YPos, sizeof(PlayerDisplayDebug_Native_Params.out_YPos));
};

// Function DishonoredGame.DishonoredHUD.ShowDebugInfo
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// float                          out_YL                         (CPF_Parm | CPF_OutParm)
// float                          out_YPos                       (CPF_Parm | CPF_OutParm)

void ADishonoredHUD::ShowDebugInfo(float& out_YL, float& out_YPos)
{
	static UFunction* uFnShowDebugInfo = nullptr;

	if (!uFnShowDebugInfo)
	{
		uFnShowDebugInfo = UFunction::FindFunction("Function DishonoredGame.DishonoredHUD.ShowDebugInfo");
	}

	ADishonoredHUD_execShowDebugInfo_Params ShowDebugInfo_Params;
	memset(&ShowDebugInfo_Params, 0, sizeof(ShowDebugInfo_Params));
	memcpy_s(&ShowDebugInfo_Params.out_YL, sizeof(ShowDebugInfo_Params.out_YL), &out_YL, sizeof(out_YL));
	memcpy_s(&ShowDebugInfo_Params.out_YPos, sizeof(ShowDebugInfo_Params.out_YPos), &out_YPos, sizeof(out_YPos));

	this->ProcessEvent(uFnShowDebugInfo, &ShowDebugInfo_Params, nullptr);

	memcpy_s(&out_YL, sizeof(out_YL), &ShowDebugInfo_Params.out_YL, sizeof(ShowDebugInfo_Params.out_YL));
	memcpy_s(&out_YPos, sizeof(out_YPos), &ShowDebugInfo_Params.out_YPos, sizeof(ShowDebugInfo_Params.out_YPos));
};

// Function DishonoredGame.DishonoredHUD.ShowDebug
// [0x00024200] (FUNC_Exec | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FName                    _DebugType                     (CPF_OptionalParm | CPF_Parm)

void ADishonoredHUD::ShowDebug(const class FName& _DebugType)
{
	static UFunction* uFnShowDebug = nullptr;

	if (!uFnShowDebug)
	{
		uFnShowDebug = UFunction::FindFunction("Function DishonoredGame.DishonoredHUD.ShowDebug");
	}

	ADishonoredHUD_execShowDebug_Params ShowDebug_Params;
	memset(&ShowDebug_Params, 0, sizeof(ShowDebug_Params));
	memcpy_s(&ShowDebug_Params._DebugType, sizeof(ShowDebug_Params._DebugType), &_DebugType, sizeof(_DebugType));

	this->ProcessEvent(uFnShowDebug, &ShowDebug_Params, nullptr);
};

// Function DishonoredGame.DishonoredHUD.CallShouldDisplayDebug
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    DebugType                      (CPF_Parm)

bool ADishonoredHUD::eventCallShouldDisplayDebug(const class FName& DebugType)
{
	static UFunction* uFnCallShouldDisplayDebug = nullptr;

	if (!uFnCallShouldDisplayDebug)
	{
		uFnCallShouldDisplayDebug = UFunction::FindFunction("Function DishonoredGame.DishonoredHUD.CallShouldDisplayDebug");
	}

	ADishonoredHUD_eventCallShouldDisplayDebug_Params CallShouldDisplayDebug_Params;
	memset(&CallShouldDisplayDebug_Params, 0, sizeof(CallShouldDisplayDebug_Params));
	memcpy_s(&CallShouldDisplayDebug_Params.DebugType, sizeof(CallShouldDisplayDebug_Params.DebugType), &DebugType, sizeof(DebugType));

	this->ProcessEvent(uFnCallShouldDisplayDebug, &CallShouldDisplayDebug_Params, nullptr);

	return CallShouldDisplayDebug_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredHUD.DrawHUD_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32786])
// Parameter Info:

void ADishonoredHUD::DrawHUD_Native()
{
	static UFunction* uFnDrawHUD_Native = nullptr;

	if (!uFnDrawHUD_Native)
	{
		uFnDrawHUD_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredHUD.DrawHUD_Native");
	}

	ADishonoredHUD_execDrawHUD_Native_Params DrawHUD_Native_Params;
	memset(&DrawHUD_Native_Params, 0, sizeof(DrawHUD_Native_Params));

	this->ProcessEvent(uFnDrawHUD_Native, &DrawHUD_Native_Params, nullptr);
};

// Function DishonoredGame.DishonoredHUD.RenderNonHUD_Native
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44697])
// Parameter Info:
// struct FVector                 ViewPoint                      (CPF_Parm)
// struct FRotator                ViewRot                        (CPF_Parm)

void ADishonoredHUD::RenderNonHUD_Native(const struct FVector& ViewPoint, const struct FRotator& ViewRot)
{
	static UFunction* uFnRenderNonHUD_Native = nullptr;

	if (!uFnRenderNonHUD_Native)
	{
		uFnRenderNonHUD_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredHUD.RenderNonHUD_Native");
	}

	ADishonoredHUD_execRenderNonHUD_Native_Params RenderNonHUD_Native_Params;
	memset(&RenderNonHUD_Native_Params, 0, sizeof(RenderNonHUD_Native_Params));
	memcpy_s(&RenderNonHUD_Native_Params.ViewPoint, sizeof(RenderNonHUD_Native_Params.ViewPoint), &ViewPoint, sizeof(ViewPoint));
	memcpy_s(&RenderNonHUD_Native_Params.ViewRot, sizeof(RenderNonHUD_Native_Params.ViewRot), &ViewRot, sizeof(ViewRot));

	this->ProcessEvent(uFnRenderNonHUD_Native, &RenderNonHUD_Native_Params, nullptr);
};

// Function DishonoredGame.DisUISoundTheme.ProcessSoundEvent
// [0x00024802] (FUNC_Defined | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FName                    _SoundEventName                (CPF_Parm)
// class APlayerController*       _pSoundOwner                   (CPF_OptionalParm | CPF_Parm)

void UDisUISoundTheme::eventProcessSoundEvent(const class FName& _SoundEventName, class APlayerController* _pSoundOwner)
{
	static UFunction* uFnProcessSoundEvent = nullptr;

	if (!uFnProcessSoundEvent)
	{
		uFnProcessSoundEvent = UFunction::FindFunction("Function DishonoredGame.DisUISoundTheme.ProcessSoundEvent");
	}

	UDisUISoundTheme_eventProcessSoundEvent_Params ProcessSoundEvent_Params;
	memset(&ProcessSoundEvent_Params, 0, sizeof(ProcessSoundEvent_Params));
	memcpy_s(&ProcessSoundEvent_Params._SoundEventName, sizeof(ProcessSoundEvent_Params._SoundEventName), &_SoundEventName, sizeof(_SoundEventName));
	ProcessSoundEvent_Params._pSoundOwner = _pSoundOwner;

	this->ProcessEvent(uFnProcessSoundEvent, &ProcessSoundEvent_Params, nullptr);
};

// Function DishonoredGame.DishonoredAnimNodeSeq.PlayAnim
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[24268])
// Parameter Info:
// uint32_t                       _bLoop                         (CPF_OptionalParm | CPF_Parm)
// float                          _fInRate                       (CPF_OptionalParm | CPF_Parm)
// float                          _fStartTime                    (CPF_OptionalParm | CPF_Parm)

void UDishonoredAnimNodeSeq::PlayAnim(bool _bLoop, float _fInRate, float _fStartTime)
{
	static UFunction* uFnPlayAnim = nullptr;

	if (!uFnPlayAnim)
	{
		uFnPlayAnim = UFunction::FindFunction("Function DishonoredGame.DishonoredAnimNodeSeq.PlayAnim");
	}

	UDishonoredAnimNodeSeq_execPlayAnim_Params PlayAnim_Params;
	memset(&PlayAnim_Params, 0, sizeof(PlayAnim_Params));
	PlayAnim_Params._bLoop = _bLoop;
	memcpy_s(&PlayAnim_Params._fInRate, sizeof(PlayAnim_Params._fInRate), &_fInRate, sizeof(_fInRate));
	memcpy_s(&PlayAnim_Params._fStartTime, sizeof(PlayAnim_Params._fStartTime), &_fStartTime, sizeof(_fStartTime));

	this->ProcessEvent(uFnPlayAnim, &PlayAnim_Params, nullptr);
};

// Function DishonoredGame.DisAnimNodeSeqPlayer.PlayAnim
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[24268])
// Parameter Info:
// uint32_t                       _bLoop                         (CPF_OptionalParm | CPF_Parm)
// float                          _fInRate                       (CPF_OptionalParm | CPF_Parm)
// float                          _fStartTime                    (CPF_OptionalParm | CPF_Parm)

void UDisAnimNodeSeqPlayer::PlayAnim(bool _bLoop, float _fInRate, float _fStartTime)
{
	static UFunction* uFnPlayAnim = nullptr;

	if (!uFnPlayAnim)
	{
		uFnPlayAnim = UFunction::FindFunction("Function DishonoredGame.DisAnimNodeSeqPlayer.PlayAnim");
	}

	UDisAnimNodeSeqPlayer_execPlayAnim_Params PlayAnim_Params;
	memset(&PlayAnim_Params, 0, sizeof(PlayAnim_Params));
	PlayAnim_Params._bLoop = _bLoop;
	memcpy_s(&PlayAnim_Params._fInRate, sizeof(PlayAnim_Params._fInRate), &_fInRate, sizeof(_fInRate));
	memcpy_s(&PlayAnim_Params._fStartTime, sizeof(PlayAnim_Params._fStartTime), &_fStartTime, sizeof(_fStartTime));

	this->ProcessEvent(uFnPlayAnim, &PlayAnim_Params, nullptr);
};

// Function DishonoredGame.DishonoredAnimNodeSeqAttack.PlayAnim
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[24268])
// Parameter Info:
// uint32_t                       _bLoop                         (CPF_OptionalParm | CPF_Parm)
// float                          _fInRate                       (CPF_OptionalParm | CPF_Parm)
// float                          _fStartTime                    (CPF_OptionalParm | CPF_Parm)

void UDishonoredAnimNodeSeqAttack::PlayAnim(bool _bLoop, float _fInRate, float _fStartTime)
{
	static UFunction* uFnPlayAnim = nullptr;

	if (!uFnPlayAnim)
	{
		uFnPlayAnim = UFunction::FindFunction("Function DishonoredGame.DishonoredAnimNodeSeqAttack.PlayAnim");
	}

	UDishonoredAnimNodeSeqAttack_execPlayAnim_Params PlayAnim_Params;
	memset(&PlayAnim_Params, 0, sizeof(PlayAnim_Params));
	PlayAnim_Params._bLoop = _bLoop;
	memcpy_s(&PlayAnim_Params._fInRate, sizeof(PlayAnim_Params._fInRate), &_fInRate, sizeof(_fInRate));
	memcpy_s(&PlayAnim_Params._fStartTime, sizeof(PlayAnim_Params._fStartTime), &_fStartTime, sizeof(_fStartTime));

	this->ProcessEvent(uFnPlayAnim, &PlayAnim_Params, nullptr);
};

// Function DishonoredGame.DishonoredAnimNodeSeqMantle.SetAnim
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[25585])
// Parameter Info:
// class FName                    Sequence                       (CPF_Parm)

void UDishonoredAnimNodeSeqMantle::SetAnim(const class FName& Sequence)
{
	static UFunction* uFnSetAnim = nullptr;

	if (!uFnSetAnim)
	{
		uFnSetAnim = UFunction::FindFunction("Function DishonoredGame.DishonoredAnimNodeSeqMantle.SetAnim");
	}

	UDishonoredAnimNodeSeqMantle_execSetAnim_Params SetAnim_Params;
	memset(&SetAnim_Params, 0, sizeof(SetAnim_Params));
	memcpy_s(&SetAnim_Params.Sequence, sizeof(SetAnim_Params.Sequence), &Sequence, sizeof(Sequence));

	this->ProcessEvent(uFnSetAnim, &SetAnim_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerCamera.ApplyDebugCam_Native
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[30478])
// Parameter Info:
// class APawn*                   _pOwnerPawn                    (CPF_Parm)
// float                          _fDeltaTime                    (CPF_Parm)
// struct FTViewTarget            _OutVT                         (CPF_Parm | CPF_OutParm)

void ADishonoredPlayerCamera::ApplyDebugCam_Native(class APawn* _pOwnerPawn, float _fDeltaTime, struct FTViewTarget& _OutVT)
{
	static UFunction* uFnApplyDebugCam_Native = nullptr;

	if (!uFnApplyDebugCam_Native)
	{
		uFnApplyDebugCam_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerCamera.ApplyDebugCam_Native");
	}

	ADishonoredPlayerCamera_execApplyDebugCam_Native_Params ApplyDebugCam_Native_Params;
	memset(&ApplyDebugCam_Native_Params, 0, sizeof(ApplyDebugCam_Native_Params));
	ApplyDebugCam_Native_Params._pOwnerPawn = _pOwnerPawn;
	memcpy_s(&ApplyDebugCam_Native_Params._fDeltaTime, sizeof(ApplyDebugCam_Native_Params._fDeltaTime), &_fDeltaTime, sizeof(_fDeltaTime));
	memcpy_s(&ApplyDebugCam_Native_Params._OutVT, sizeof(ApplyDebugCam_Native_Params._OutVT), &_OutVT, sizeof(_OutVT));

	this->ProcessEvent(uFnApplyDebugCam_Native, &ApplyDebugCam_Native_Params, nullptr);

	memcpy_s(&_OutVT, sizeof(_OutVT), &ApplyDebugCam_Native_Params._OutVT, sizeof(ApplyDebugCam_Native_Params._OutVT));
};

// Function DishonoredGame.DishonoredCheatManager.DLC05StartChallenge
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[46195])
// Parameter Info:
// EDisDLC05Leaderboard           _Challenge                     (CPF_Parm)
// uint32_t                       _bExpertMode                   (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::DLC05StartChallenge(EDisDLC05Leaderboard _Challenge, bool _bExpertMode)
{
	static UFunction* uFnDLC05StartChallenge = nullptr;

	if (!uFnDLC05StartChallenge)
	{
		uFnDLC05StartChallenge = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DLC05StartChallenge");
	}

	UDishonoredCheatManager_execDLC05StartChallenge_Params DLC05StartChallenge_Params;
	memset(&DLC05StartChallenge_Params, 0, sizeof(DLC05StartChallenge_Params));
	memcpy_s(&DLC05StartChallenge_Params._Challenge, sizeof(DLC05StartChallenge_Params._Challenge), &_Challenge, sizeof(_Challenge));
	DLC05StartChallenge_Params._bExpertMode = _bExpertMode;

	this->ProcessEvent(uFnDLC05StartChallenge, &DLC05StartChallenge_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DLC05UnlockExpertMode
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[46197])
// Parameter Info:

void UDishonoredCheatManager::DLC05UnlockExpertMode()
{
	static UFunction* uFnDLC05UnlockExpertMode = nullptr;

	if (!uFnDLC05UnlockExpertMode)
	{
		uFnDLC05UnlockExpertMode = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DLC05UnlockExpertMode");
	}

	UDishonoredCheatManager_execDLC05UnlockExpertMode_Params DLC05UnlockExpertMode_Params;
	memset(&DLC05UnlockExpertMode_Params, 0, sizeof(DLC05UnlockExpertMode_Params));

	this->ProcessEvent(uFnDLC05UnlockExpertMode, &DLC05UnlockExpertMode_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DLC05ToggleTimer
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[46196])
// Parameter Info:

void UDishonoredCheatManager::DLC05ToggleTimer()
{
	static UFunction* uFnDLC05ToggleTimer = nullptr;

	if (!uFnDLC05ToggleTimer)
	{
		uFnDLC05ToggleTimer = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DLC05ToggleTimer");
	}

	UDishonoredCheatManager_execDLC05ToggleTimer_Params DLC05ToggleTimer_Params;
	memset(&DLC05ToggleTimer_Params, 0, sizeof(DLC05ToggleTimer_Params));

	this->ProcessEvent(uFnDLC05ToggleTimer, &DLC05ToggleTimer_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.IsAttentionTypeAllowed
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35603])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// EDisAttentionChangeReasonType  _Type                          (CPF_Parm)

bool UDishonoredCheatManager::IsAttentionTypeAllowed(EDisAttentionChangeReasonType _Type)
{
	static UFunction* uFnIsAttentionTypeAllowed = nullptr;

	if (!uFnIsAttentionTypeAllowed)
	{
		uFnIsAttentionTypeAllowed = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.IsAttentionTypeAllowed");
	}

	UDishonoredCheatManager_execIsAttentionTypeAllowed_Params IsAttentionTypeAllowed_Params;
	memset(&IsAttentionTypeAllowed_Params, 0, sizeof(IsAttentionTypeAllowed_Params));
	memcpy_s(&IsAttentionTypeAllowed_Params._Type, sizeof(IsAttentionTypeAllowed_Params._Type), &_Type, sizeof(_Type));

	this->ProcessEvent(uFnIsAttentionTypeAllowed, &IsAttentionTypeAllowed_Params, nullptr);

	return IsAttentionTypeAllowed_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredCheatManager.AttentionClearExclusiveType
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30542])
// Parameter Info:

void UDishonoredCheatManager::AttentionClearExclusiveType()
{
	static UFunction* uFnAttentionClearExclusiveType = nullptr;

	if (!uFnAttentionClearExclusiveType)
	{
		uFnAttentionClearExclusiveType = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AttentionClearExclusiveType");
	}

	UDishonoredCheatManager_execAttentionClearExclusiveType_Params AttentionClearExclusiveType_Params;
	memset(&AttentionClearExclusiveType_Params, 0, sizeof(AttentionClearExclusiveType_Params));

	this->ProcessEvent(uFnAttentionClearExclusiveType, &AttentionClearExclusiveType_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AttentionSetExclusiveType
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[30548])
// Parameter Info:
// EDisAttentionChangeReasonType  _Type1                         (CPF_Parm)
// EDisAttentionChangeReasonType  _Type2                         (CPF_OptionalParm | CPF_Parm)
// EDisAttentionChangeReasonType  _Type3                         (CPF_OptionalParm | CPF_Parm)
// EDisAttentionChangeReasonType  _Type4                         (CPF_OptionalParm | CPF_Parm)
// EDisAttentionChangeReasonType  _Type5                         (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::AttentionSetExclusiveType(EDisAttentionChangeReasonType _Type1, EDisAttentionChangeReasonType _Type2, EDisAttentionChangeReasonType _Type3, EDisAttentionChangeReasonType _Type4, EDisAttentionChangeReasonType _Type5)
{
	static UFunction* uFnAttentionSetExclusiveType = nullptr;

	if (!uFnAttentionSetExclusiveType)
	{
		uFnAttentionSetExclusiveType = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AttentionSetExclusiveType");
	}

	UDishonoredCheatManager_execAttentionSetExclusiveType_Params AttentionSetExclusiveType_Params;
	memset(&AttentionSetExclusiveType_Params, 0, sizeof(AttentionSetExclusiveType_Params));
	memcpy_s(&AttentionSetExclusiveType_Params._Type1, sizeof(AttentionSetExclusiveType_Params._Type1), &_Type1, sizeof(_Type1));
	memcpy_s(&AttentionSetExclusiveType_Params._Type2, sizeof(AttentionSetExclusiveType_Params._Type2), &_Type2, sizeof(_Type2));
	memcpy_s(&AttentionSetExclusiveType_Params._Type3, sizeof(AttentionSetExclusiveType_Params._Type3), &_Type3, sizeof(_Type3));
	memcpy_s(&AttentionSetExclusiveType_Params._Type4, sizeof(AttentionSetExclusiveType_Params._Type4), &_Type4, sizeof(_Type4));
	memcpy_s(&AttentionSetExclusiveType_Params._Type5, sizeof(AttentionSetExclusiveType_Params._Type5), &_Type5, sizeof(_Type5));

	this->ProcessEvent(uFnAttentionSetExclusiveType, &AttentionSetExclusiveType_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AttentionAddExclusiveType
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[30540])
// Parameter Info:
// EDisAttentionChangeReasonType  _Type1                         (CPF_Parm)
// EDisAttentionChangeReasonType  _Type2                         (CPF_OptionalParm | CPF_Parm)
// EDisAttentionChangeReasonType  _Type3                         (CPF_OptionalParm | CPF_Parm)
// EDisAttentionChangeReasonType  _Type4                         (CPF_OptionalParm | CPF_Parm)
// EDisAttentionChangeReasonType  _Type5                         (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::AttentionAddExclusiveType(EDisAttentionChangeReasonType _Type1, EDisAttentionChangeReasonType _Type2, EDisAttentionChangeReasonType _Type3, EDisAttentionChangeReasonType _Type4, EDisAttentionChangeReasonType _Type5)
{
	static UFunction* uFnAttentionAddExclusiveType = nullptr;

	if (!uFnAttentionAddExclusiveType)
	{
		uFnAttentionAddExclusiveType = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AttentionAddExclusiveType");
	}

	UDishonoredCheatManager_execAttentionAddExclusiveType_Params AttentionAddExclusiveType_Params;
	memset(&AttentionAddExclusiveType_Params, 0, sizeof(AttentionAddExclusiveType_Params));
	memcpy_s(&AttentionAddExclusiveType_Params._Type1, sizeof(AttentionAddExclusiveType_Params._Type1), &_Type1, sizeof(_Type1));
	memcpy_s(&AttentionAddExclusiveType_Params._Type2, sizeof(AttentionAddExclusiveType_Params._Type2), &_Type2, sizeof(_Type2));
	memcpy_s(&AttentionAddExclusiveType_Params._Type3, sizeof(AttentionAddExclusiveType_Params._Type3), &_Type3, sizeof(_Type3));
	memcpy_s(&AttentionAddExclusiveType_Params._Type4, sizeof(AttentionAddExclusiveType_Params._Type4), &_Type4, sizeof(_Type4));
	memcpy_s(&AttentionAddExclusiveType_Params._Type5, sizeof(AttentionAddExclusiveType_Params._Type5), &_Type5, sizeof(_Type5));

	this->ProcessEvent(uFnAttentionAddExclusiveType, &AttentionAddExclusiveType_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AttentionClearIgnoreType
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30543])
// Parameter Info:

void UDishonoredCheatManager::AttentionClearIgnoreType()
{
	static UFunction* uFnAttentionClearIgnoreType = nullptr;

	if (!uFnAttentionClearIgnoreType)
	{
		uFnAttentionClearIgnoreType = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AttentionClearIgnoreType");
	}

	UDishonoredCheatManager_execAttentionClearIgnoreType_Params AttentionClearIgnoreType_Params;
	memset(&AttentionClearIgnoreType_Params, 0, sizeof(AttentionClearIgnoreType_Params));

	this->ProcessEvent(uFnAttentionClearIgnoreType, &AttentionClearIgnoreType_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AttentionSetIgnoreType
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[30549])
// Parameter Info:
// EDisAttentionChangeReasonType  _Type1                         (CPF_Parm)
// EDisAttentionChangeReasonType  _Type2                         (CPF_OptionalParm | CPF_Parm)
// EDisAttentionChangeReasonType  _Type3                         (CPF_OptionalParm | CPF_Parm)
// EDisAttentionChangeReasonType  _Type4                         (CPF_OptionalParm | CPF_Parm)
// EDisAttentionChangeReasonType  _Type5                         (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::AttentionSetIgnoreType(EDisAttentionChangeReasonType _Type1, EDisAttentionChangeReasonType _Type2, EDisAttentionChangeReasonType _Type3, EDisAttentionChangeReasonType _Type4, EDisAttentionChangeReasonType _Type5)
{
	static UFunction* uFnAttentionSetIgnoreType = nullptr;

	if (!uFnAttentionSetIgnoreType)
	{
		uFnAttentionSetIgnoreType = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AttentionSetIgnoreType");
	}

	UDishonoredCheatManager_execAttentionSetIgnoreType_Params AttentionSetIgnoreType_Params;
	memset(&AttentionSetIgnoreType_Params, 0, sizeof(AttentionSetIgnoreType_Params));
	memcpy_s(&AttentionSetIgnoreType_Params._Type1, sizeof(AttentionSetIgnoreType_Params._Type1), &_Type1, sizeof(_Type1));
	memcpy_s(&AttentionSetIgnoreType_Params._Type2, sizeof(AttentionSetIgnoreType_Params._Type2), &_Type2, sizeof(_Type2));
	memcpy_s(&AttentionSetIgnoreType_Params._Type3, sizeof(AttentionSetIgnoreType_Params._Type3), &_Type3, sizeof(_Type3));
	memcpy_s(&AttentionSetIgnoreType_Params._Type4, sizeof(AttentionSetIgnoreType_Params._Type4), &_Type4, sizeof(_Type4));
	memcpy_s(&AttentionSetIgnoreType_Params._Type5, sizeof(AttentionSetIgnoreType_Params._Type5), &_Type5, sizeof(_Type5));

	this->ProcessEvent(uFnAttentionSetIgnoreType, &AttentionSetIgnoreType_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AttentionAddIgnoreType
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[30541])
// Parameter Info:
// EDisAttentionChangeReasonType  _Type1                         (CPF_Parm)
// EDisAttentionChangeReasonType  _Type2                         (CPF_OptionalParm | CPF_Parm)
// EDisAttentionChangeReasonType  _Type3                         (CPF_OptionalParm | CPF_Parm)
// EDisAttentionChangeReasonType  _Type4                         (CPF_OptionalParm | CPF_Parm)
// EDisAttentionChangeReasonType  _Type5                         (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::AttentionAddIgnoreType(EDisAttentionChangeReasonType _Type1, EDisAttentionChangeReasonType _Type2, EDisAttentionChangeReasonType _Type3, EDisAttentionChangeReasonType _Type4, EDisAttentionChangeReasonType _Type5)
{
	static UFunction* uFnAttentionAddIgnoreType = nullptr;

	if (!uFnAttentionAddIgnoreType)
	{
		uFnAttentionAddIgnoreType = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AttentionAddIgnoreType");
	}

	UDishonoredCheatManager_execAttentionAddIgnoreType_Params AttentionAddIgnoreType_Params;
	memset(&AttentionAddIgnoreType_Params, 0, sizeof(AttentionAddIgnoreType_Params));
	memcpy_s(&AttentionAddIgnoreType_Params._Type1, sizeof(AttentionAddIgnoreType_Params._Type1), &_Type1, sizeof(_Type1));
	memcpy_s(&AttentionAddIgnoreType_Params._Type2, sizeof(AttentionAddIgnoreType_Params._Type2), &_Type2, sizeof(_Type2));
	memcpy_s(&AttentionAddIgnoreType_Params._Type3, sizeof(AttentionAddIgnoreType_Params._Type3), &_Type3, sizeof(_Type3));
	memcpy_s(&AttentionAddIgnoreType_Params._Type4, sizeof(AttentionAddIgnoreType_Params._Type4), &_Type4, sizeof(_Type4));
	memcpy_s(&AttentionAddIgnoreType_Params._Type5, sizeof(AttentionAddIgnoreType_Params._Type5), &_Type5, sizeof(_Type5));

	this->ProcessEvent(uFnAttentionAddIgnoreType, &AttentionAddIgnoreType_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.GiveAllUsableRequiredItems
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35324])
// Parameter Info:

void UDishonoredCheatManager::GiveAllUsableRequiredItems()
{
	static UFunction* uFnGiveAllUsableRequiredItems = nullptr;

	if (!uFnGiveAllUsableRequiredItems)
	{
		uFnGiveAllUsableRequiredItems = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.GiveAllUsableRequiredItems");
	}

	UDishonoredCheatManager_execGiveAllUsableRequiredItems_Params GiveAllUsableRequiredItems_Params;
	memset(&GiveAllUsableRequiredItems_Params, 0, sizeof(GiveAllUsableRequiredItems_Params));

	this->ProcessEvent(uFnGiveAllUsableRequiredItems, &GiveAllUsableRequiredItems_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.BlinkShowRangeFull
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30649])
// Parameter Info:
// float                          _fDuration                     (CPF_Parm)

void UDishonoredCheatManager::BlinkShowRangeFull(float _fDuration)
{
	static UFunction* uFnBlinkShowRangeFull = nullptr;

	if (!uFnBlinkShowRangeFull)
	{
		uFnBlinkShowRangeFull = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.BlinkShowRangeFull");
	}

	UDishonoredCheatManager_execBlinkShowRangeFull_Params BlinkShowRangeFull_Params;
	memset(&BlinkShowRangeFull_Params, 0, sizeof(BlinkShowRangeFull_Params));
	memcpy_s(&BlinkShowRangeFull_Params._fDuration, sizeof(BlinkShowRangeFull_Params._fDuration), &_fDuration, sizeof(_fDuration));

	this->ProcessEvent(uFnBlinkShowRangeFull, &BlinkShowRangeFull_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.BlinkShowRange
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30648])
// Parameter Info:
// float                          _fDuration                     (CPF_Parm)

void UDishonoredCheatManager::BlinkShowRange(float _fDuration)
{
	static UFunction* uFnBlinkShowRange = nullptr;

	if (!uFnBlinkShowRange)
	{
		uFnBlinkShowRange = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.BlinkShowRange");
	}

	UDishonoredCheatManager_execBlinkShowRange_Params BlinkShowRange_Params;
	memset(&BlinkShowRange_Params, 0, sizeof(BlinkShowRange_Params));
	memcpy_s(&BlinkShowRange_Params._fDuration, sizeof(BlinkShowRange_Params._fDuration), &_fDuration, sizeof(_fDuration));

	this->ProcessEvent(uFnBlinkShowRange, &BlinkShowRange_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DisSlomoCommand
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32427])
// Parameter Info:
// class FName                    _operation                     (CPF_Parm)

void UDishonoredCheatManager::DisSlomoCommand(const class FName& _operation)
{
	static UFunction* uFnDisSlomoCommand = nullptr;

	if (!uFnDisSlomoCommand)
	{
		uFnDisSlomoCommand = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DisSlomoCommand");
	}

	UDishonoredCheatManager_execDisSlomoCommand_Params DisSlomoCommand_Params;
	memset(&DisSlomoCommand_Params, 0, sizeof(DisSlomoCommand_Params));
	memcpy_s(&DisSlomoCommand_Params._operation, sizeof(DisSlomoCommand_Params._operation), &_operation, sizeof(_operation));

	this->ProcessEvent(uFnDisSlomoCommand, &DisSlomoCommand_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DisSlomoFull
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32428])
// Parameter Info:
// float                          _fPlayerDilation               (CPF_Parm)
// float                          _fWorldDilation                (CPF_Parm)

void UDishonoredCheatManager::DisSlomoFull(float _fPlayerDilation, float _fWorldDilation)
{
	static UFunction* uFnDisSlomoFull = nullptr;

	if (!uFnDisSlomoFull)
	{
		uFnDisSlomoFull = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DisSlomoFull");
	}

	UDishonoredCheatManager_execDisSlomoFull_Params DisSlomoFull_Params;
	memset(&DisSlomoFull_Params, 0, sizeof(DisSlomoFull_Params));
	memcpy_s(&DisSlomoFull_Params._fPlayerDilation, sizeof(DisSlomoFull_Params._fPlayerDilation), &_fPlayerDilation, sizeof(_fPlayerDilation));
	memcpy_s(&DisSlomoFull_Params._fWorldDilation, sizeof(DisSlomoFull_Params._fWorldDilation), &_fWorldDilation, sizeof(_fWorldDilation));

	this->ProcessEvent(uFnDisSlomoFull, &DisSlomoFull_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DisSlomo
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32426])
// Parameter Info:
// float                          _fDilation                     (CPF_Parm)

void UDishonoredCheatManager::DisSlomo(float _fDilation)
{
	static UFunction* uFnDisSlomo = nullptr;

	if (!uFnDisSlomo)
	{
		uFnDisSlomo = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DisSlomo");
	}

	UDishonoredCheatManager_execDisSlomo_Params DisSlomo_Params;
	memset(&DisSlomo_Params, 0, sizeof(DisSlomo_Params));
	memcpy_s(&DisSlomo_Params._fDilation, sizeof(DisSlomo_Params._fDilation), &_fDilation, sizeof(_fDilation));

	this->ProcessEvent(uFnDisSlomo, &DisSlomo_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.ForceCorpseDropTypeOff
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35119])
// Parameter Info:

void UDishonoredCheatManager::ForceCorpseDropTypeOff()
{
	static UFunction* uFnForceCorpseDropTypeOff = nullptr;

	if (!uFnForceCorpseDropTypeOff)
	{
		uFnForceCorpseDropTypeOff = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.ForceCorpseDropTypeOff");
	}

	UDishonoredCheatManager_execForceCorpseDropTypeOff_Params ForceCorpseDropTypeOff_Params;
	memset(&ForceCorpseDropTypeOff_Params, 0, sizeof(ForceCorpseDropTypeOff_Params));

	this->ProcessEvent(uFnForceCorpseDropTypeOff, &ForceCorpseDropTypeOff_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.ForceCorpseDropType
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35118])
// Parameter Info:
// EDisCorpseDropType             _Type                          (CPF_Parm)

void UDishonoredCheatManager::ForceCorpseDropType(EDisCorpseDropType _Type)
{
	static UFunction* uFnForceCorpseDropType = nullptr;

	if (!uFnForceCorpseDropType)
	{
		uFnForceCorpseDropType = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.ForceCorpseDropType");
	}

	UDishonoredCheatManager_execForceCorpseDropType_Params ForceCorpseDropType_Params;
	memset(&ForceCorpseDropType_Params, 0, sizeof(ForceCorpseDropType_Params));
	memcpy_s(&ForceCorpseDropType_Params._Type, sizeof(ForceCorpseDropType_Params._Type), &_Type, sizeof(_Type));

	this->ProcessEvent(uFnForceCorpseDropType, &ForceCorpseDropType_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.SetDebugMantleStepSize
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44859])
// Parameter Info:
// float                          _fStepSize                     (CPF_Parm)

void UDishonoredCheatManager::SetDebugMantleStepSize(float _fStepSize)
{
	static UFunction* uFnSetDebugMantleStepSize = nullptr;

	if (!uFnSetDebugMantleStepSize)
	{
		uFnSetDebugMantleStepSize = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.SetDebugMantleStepSize");
	}

	UDishonoredCheatManager_execSetDebugMantleStepSize_Params SetDebugMantleStepSize_Params;
	memset(&SetDebugMantleStepSize_Params, 0, sizeof(SetDebugMantleStepSize_Params));
	memcpy_s(&SetDebugMantleStepSize_Params._fStepSize, sizeof(SetDebugMantleStepSize_Params._fStepSize), &_fStepSize, sizeof(_fStepSize));

	this->ProcessEvent(uFnSetDebugMantleStepSize, &SetDebugMantleStepSize_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.SetDebugMantleCheckTime
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44858])
// Parameter Info:
// float                          _fCheckTime                    (CPF_Parm)

void UDishonoredCheatManager::SetDebugMantleCheckTime(float _fCheckTime)
{
	static UFunction* uFnSetDebugMantleCheckTime = nullptr;

	if (!uFnSetDebugMantleCheckTime)
	{
		uFnSetDebugMantleCheckTime = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.SetDebugMantleCheckTime");
	}

	UDishonoredCheatManager_execSetDebugMantleCheckTime_Params SetDebugMantleCheckTime_Params;
	memset(&SetDebugMantleCheckTime_Params, 0, sizeof(SetDebugMantleCheckTime_Params));
	memcpy_s(&SetDebugMantleCheckTime_Params._fCheckTime, sizeof(SetDebugMantleCheckTime_Params._fCheckTime), &_fCheckTime, sizeof(_fCheckTime));

	this->ProcessEvent(uFnSetDebugMantleCheckTime, &SetDebugMantleCheckTime_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NormalStepMantleEdgeFinder
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43781])
// Parameter Info:

void UDishonoredCheatManager::NormalStepMantleEdgeFinder()
{
	static UFunction* uFnNormalStepMantleEdgeFinder = nullptr;

	if (!uFnNormalStepMantleEdgeFinder)
	{
		uFnNormalStepMantleEdgeFinder = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NormalStepMantleEdgeFinder");
	}

	UDishonoredCheatManager_execNormalStepMantleEdgeFinder_Params NormalStepMantleEdgeFinder_Params;
	memset(&NormalStepMantleEdgeFinder_Params, 0, sizeof(NormalStepMantleEdgeFinder_Params));

	this->ProcessEvent(uFnNormalStepMantleEdgeFinder, &NormalStepMantleEdgeFinder_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.SingleStepMantleEdgeFinder
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44903])
// Parameter Info:

void UDishonoredCheatManager::SingleStepMantleEdgeFinder()
{
	static UFunction* uFnSingleStepMantleEdgeFinder = nullptr;

	if (!uFnSingleStepMantleEdgeFinder)
	{
		uFnSingleStepMantleEdgeFinder = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.SingleStepMantleEdgeFinder");
	}

	UDishonoredCheatManager_execSingleStepMantleEdgeFinder_Params SingleStepMantleEdgeFinder_Params;
	memset(&SingleStepMantleEdgeFinder_Params, 0, sizeof(SingleStepMantleEdgeFinder_Params));

	this->ProcessEvent(uFnSingleStepMantleEdgeFinder, &SingleStepMantleEdgeFinder_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.SetVisSettingsLowVis
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44864])
// Parameter Info:

void UDishonoredCheatManager::SetVisSettingsLowVis()
{
	static UFunction* uFnSetVisSettingsLowVis = nullptr;

	if (!uFnSetVisSettingsLowVis)
	{
		uFnSetVisSettingsLowVis = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.SetVisSettingsLowVis");
	}

	UDishonoredCheatManager_execSetVisSettingsLowVis_Params SetVisSettingsLowVis_Params;
	memset(&SetVisSettingsLowVis_Params, 0, sizeof(SetVisSettingsLowVis_Params));

	this->ProcessEvent(uFnSetVisSettingsLowVis, &SetVisSettingsLowVis_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.SetVisSettingsHighVis
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44863])
// Parameter Info:

void UDishonoredCheatManager::SetVisSettingsHighVis()
{
	static UFunction* uFnSetVisSettingsHighVis = nullptr;

	if (!uFnSetVisSettingsHighVis)
	{
		uFnSetVisSettingsHighVis = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.SetVisSettingsHighVis");
	}

	UDishonoredCheatManager_execSetVisSettingsHighVis_Params SetVisSettingsHighVis_Params;
	memset(&SetVisSettingsHighVis_Params, 0, sizeof(SetVisSettingsHighVis_Params));

	this->ProcessEvent(uFnSetVisSettingsHighVis, &SetVisSettingsHighVis_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.StopVisSettingsMode
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45231])
// Parameter Info:

void UDishonoredCheatManager::StopVisSettingsMode()
{
	static UFunction* uFnStopVisSettingsMode = nullptr;

	if (!uFnStopVisSettingsMode)
	{
		uFnStopVisSettingsMode = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.StopVisSettingsMode");
	}

	UDishonoredCheatManager_execStopVisSettingsMode_Params StopVisSettingsMode_Params;
	memset(&StopVisSettingsMode_Params, 0, sizeof(StopVisSettingsMode_Params));

	this->ProcessEvent(uFnStopVisSettingsMode, &StopVisSettingsMode_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.StartVisSettingsMode
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45142])
// Parameter Info:

void UDishonoredCheatManager::StartVisSettingsMode()
{
	static UFunction* uFnStartVisSettingsMode = nullptr;

	if (!uFnStartVisSettingsMode)
	{
		uFnStartVisSettingsMode = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.StartVisSettingsMode");
	}

	UDishonoredCheatManager_execStartVisSettingsMode_Params StartVisSettingsMode_Params;
	memset(&StartVisSettingsMode_Params, 0, sizeof(StartVisSettingsMode_Params));

	this->ProcessEvent(uFnStartVisSettingsMode, &StartVisSettingsMode_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.GiveMoney
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35326])
// Parameter Info:
// int32_t                        _Count                         (CPF_Parm)

void UDishonoredCheatManager::GiveMoney(int32_t _Count)
{
	static UFunction* uFnGiveMoney = nullptr;

	if (!uFnGiveMoney)
	{
		uFnGiveMoney = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.GiveMoney");
	}

	UDishonoredCheatManager_execGiveMoney_Params GiveMoney_Params;
	memset(&GiveMoney_Params, 0, sizeof(GiveMoney_Params));
	memcpy_s(&GiveMoney_Params._Count, sizeof(GiveMoney_Params._Count), &_Count, sizeof(_Count));

	this->ProcessEvent(uFnGiveMoney, &GiveMoney_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.GiveBoneCharm
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35325])
// Parameter Info:

void UDishonoredCheatManager::GiveBoneCharm()
{
	static UFunction* uFnGiveBoneCharm = nullptr;

	if (!uFnGiveBoneCharm)
	{
		uFnGiveBoneCharm = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.GiveBoneCharm");
	}

	UDishonoredCheatManager_execGiveBoneCharm_Params GiveBoneCharm_Params;
	memset(&GiveBoneCharm_Params, 0, sizeof(GiveBoneCharm_Params));

	this->ProcessEvent(uFnGiveBoneCharm, &GiveBoneCharm_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.MinUpgrades
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43698])
// Parameter Info:

void UDishonoredCheatManager::MinUpgrades()
{
	static UFunction* uFnMinUpgrades = nullptr;

	if (!uFnMinUpgrades)
	{
		uFnMinUpgrades = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.MinUpgrades");
	}

	UDishonoredCheatManager_execMinUpgrades_Params MinUpgrades_Params;
	memset(&MinUpgrades_Params, 0, sizeof(MinUpgrades_Params));

	this->ProcessEvent(uFnMinUpgrades, &MinUpgrades_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.MaxUpgrades
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43665])
// Parameter Info:

void UDishonoredCheatManager::MaxUpgrades()
{
	static UFunction* uFnMaxUpgrades = nullptr;

	if (!uFnMaxUpgrades)
	{
		uFnMaxUpgrades = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.MaxUpgrades");
	}

	UDishonoredCheatManager_execMaxUpgrades_Params MaxUpgrades_Params;
	memset(&MaxUpgrades_Params, 0, sizeof(MaxUpgrades_Params));

	this->ProcessEvent(uFnMaxUpgrades, &MaxUpgrades_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.RemoveUpgrade
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44696])
// Parameter Info:
// class FString                  _Name                          (CPF_Parm | CPF_NeedCtorLink)

void UDishonoredCheatManager::RemoveUpgrade(const class FString& _Name)
{
	static UFunction* uFnRemoveUpgrade = nullptr;

	if (!uFnRemoveUpgrade)
	{
		uFnRemoveUpgrade = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.RemoveUpgrade");
	}

	UDishonoredCheatManager_execRemoveUpgrade_Params RemoveUpgrade_Params;
	memset(&RemoveUpgrade_Params, 0, sizeof(RemoveUpgrade_Params));
	memcpy_s(&RemoveUpgrade_Params._Name, sizeof(RemoveUpgrade_Params._Name), &_Name, sizeof(_Name));

	this->ProcessEvent(uFnRemoveUpgrade, &RemoveUpgrade_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AddUpgrade
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30033])
// Parameter Info:
// class FString                  _Name                          (CPF_Parm | CPF_NeedCtorLink)

void UDishonoredCheatManager::AddUpgrade(const class FString& _Name)
{
	static UFunction* uFnAddUpgrade = nullptr;

	if (!uFnAddUpgrade)
	{
		uFnAddUpgrade = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AddUpgrade");
	}

	UDishonoredCheatManager_execAddUpgrade_Params AddUpgrade_Params;
	memset(&AddUpgrade_Params, 0, sizeof(AddUpgrade_Params));
	memcpy_s(&AddUpgrade_Params._Name, sizeof(AddUpgrade_Params._Name), &_Name, sizeof(_Name));

	this->ProcessEvent(uFnAddUpgrade, &AddUpgrade_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.ReportDanglingPointers
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[44699])
// Parameter Info:
// uint32_t                       _bReportShutdownPawns          (CPF_OptionalParm | CPF_Parm)
// uint32_t                       _bReportDestroyedActors        (CPF_OptionalParm | CPF_Parm)
// uint32_t                       _bReportUnreportedProperties   (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::ReportDanglingPointers(bool _bReportShutdownPawns, bool _bReportDestroyedActors, bool _bReportUnreportedProperties)
{
	static UFunction* uFnReportDanglingPointers = nullptr;

	if (!uFnReportDanglingPointers)
	{
		uFnReportDanglingPointers = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.ReportDanglingPointers");
	}

	UDishonoredCheatManager_execReportDanglingPointers_Params ReportDanglingPointers_Params;
	memset(&ReportDanglingPointers_Params, 0, sizeof(ReportDanglingPointers_Params));
	ReportDanglingPointers_Params._bReportShutdownPawns = _bReportShutdownPawns;
	ReportDanglingPointers_Params._bReportDestroyedActors = _bReportDestroyedActors;
	ReportDanglingPointers_Params._bReportUnreportedProperties = _bReportUnreportedProperties;

	this->ProcessEvent(uFnReportDanglingPointers, &ReportDanglingPointers_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.GetDifficulty
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35316])
// Parameter Info:

void UDishonoredCheatManager::GetDifficulty()
{
	static UFunction* uFnGetDifficulty = nullptr;

	if (!uFnGetDifficulty)
	{
		uFnGetDifficulty = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.GetDifficulty");
	}

	UDishonoredCheatManager_execGetDifficulty_Params GetDifficulty_Params;
	memset(&GetDifficulty_Params, 0, sizeof(GetDifficulty_Params));

	this->ProcessEvent(uFnGetDifficulty, &GetDifficulty_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.SetDifficulty
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44860])
// Parameter Info:
// int32_t                        _Level                         (CPF_Parm)

void UDishonoredCheatManager::SetDifficulty(int32_t _Level)
{
	static UFunction* uFnSetDifficulty = nullptr;

	if (!uFnSetDifficulty)
	{
		uFnSetDifficulty = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.SetDifficulty");
	}

	UDishonoredCheatManager_execSetDifficulty_Params SetDifficulty_Params;
	memset(&SetDifficulty_Params, 0, sizeof(SetDifficulty_Params));
	memcpy_s(&SetDifficulty_Params._Level, sizeof(SetDifficulty_Params._Level), &_Level, sizeof(_Level));

	this->ProcessEvent(uFnSetDifficulty, &SetDifficulty_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DebugDarkness
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31358])
// Parameter Info:

void UDishonoredCheatManager::DebugDarkness()
{
	static UFunction* uFnDebugDarkness = nullptr;

	if (!uFnDebugDarkness)
	{
		uFnDebugDarkness = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DebugDarkness");
	}

	UDishonoredCheatManager_execDebugDarkness_Params DebugDarkness_Params;
	memset(&DebugDarkness_Params, 0, sizeof(DebugDarkness_Params));

	this->ProcessEvent(uFnDebugDarkness, &DebugDarkness_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AddDarkness
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30027])
// Parameter Info:
// int32_t                        _Value                         (CPF_Parm)

void UDishonoredCheatManager::AddDarkness(int32_t _Value)
{
	static UFunction* uFnAddDarkness = nullptr;

	if (!uFnAddDarkness)
	{
		uFnAddDarkness = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AddDarkness");
	}

	UDishonoredCheatManager_execAddDarkness_Params AddDarkness_Params;
	memset(&AddDarkness_Params, 0, sizeof(AddDarkness_Params));
	memcpy_s(&AddDarkness_Params._Value, sizeof(AddDarkness_Params._Value), &_Value, sizeof(_Value));

	this->ProcessEvent(uFnAddDarkness, &AddDarkness_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.ToggleUsableHighlight
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45377])
// Parameter Info:

void UDishonoredCheatManager::ToggleUsableHighlight()
{
	static UFunction* uFnToggleUsableHighlight = nullptr;

	if (!uFnToggleUsableHighlight)
	{
		uFnToggleUsableHighlight = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.ToggleUsableHighlight");
	}

	UDishonoredCheatManager_execToggleUsableHighlight_Params ToggleUsableHighlight_Params;
	memset(&ToggleUsableHighlight_Params, 0, sizeof(ToggleUsableHighlight_Params));

	this->ProcessEvent(uFnToggleUsableHighlight, &ToggleUsableHighlight_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.ToggleActorLightEnvironment
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45369])
// Parameter Info:

void UDishonoredCheatManager::ToggleActorLightEnvironment()
{
	static UFunction* uFnToggleActorLightEnvironment = nullptr;

	if (!uFnToggleActorLightEnvironment)
	{
		uFnToggleActorLightEnvironment = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.ToggleActorLightEnvironment");
	}

	UDishonoredCheatManager_execToggleActorLightEnvironment_Params ToggleActorLightEnvironment_Params;
	memset(&ToggleActorLightEnvironment_Params, 0, sizeof(ToggleActorLightEnvironment_Params));

	this->ProcessEvent(uFnToggleActorLightEnvironment, &ToggleActorLightEnvironment_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.LogDuplicateAnimSequences
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35786])
// Parameter Info:

void UDishonoredCheatManager::LogDuplicateAnimSequences()
{
	static UFunction* uFnLogDuplicateAnimSequences = nullptr;

	if (!uFnLogDuplicateAnimSequences)
	{
		uFnLogDuplicateAnimSequences = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.LogDuplicateAnimSequences");
	}

	UDishonoredCheatManager_execLogDuplicateAnimSequences_Params LogDuplicateAnimSequences_Params;
	memset(&LogDuplicateAnimSequences_Params, 0, sizeof(LogDuplicateAnimSequences_Params));

	this->ProcessEvent(uFnLogDuplicateAnimSequences, &LogDuplicateAnimSequences_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.LogAnimSequences
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35785])
// Parameter Info:

void UDishonoredCheatManager::LogAnimSequences()
{
	static UFunction* uFnLogAnimSequences = nullptr;

	if (!uFnLogAnimSequences)
	{
		uFnLogAnimSequences = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.LogAnimSequences");
	}

	UDishonoredCheatManager_execLogAnimSequences_Params LogAnimSequences_Params;
	memset(&LogAnimSequences_Params, 0, sizeof(LogAnimSequences_Params));

	this->ProcessEvent(uFnLogAnimSequences, &LogAnimSequences_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.ToggleRatProbingForGround
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45374])
// Parameter Info:

void UDishonoredCheatManager::ToggleRatProbingForGround()
{
	static UFunction* uFnToggleRatProbingForGround = nullptr;

	if (!uFnToggleRatProbingForGround)
	{
		uFnToggleRatProbingForGround = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.ToggleRatProbingForGround");
	}

	UDishonoredCheatManager_execToggleRatProbingForGround_Params ToggleRatProbingForGround_Params;
	memset(&ToggleRatProbingForGround_Params, 0, sizeof(ToggleRatProbingForGround_Params));

	this->ProcessEvent(uFnToggleRatProbingForGround, &ToggleRatProbingForGround_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.SpawnRandomRatSwarm
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45099])
// Parameter Info:

void UDishonoredCheatManager::SpawnRandomRatSwarm()
{
	static UFunction* uFnSpawnRandomRatSwarm = nullptr;

	if (!uFnSpawnRandomRatSwarm)
	{
		uFnSpawnRandomRatSwarm = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.SpawnRandomRatSwarm");
	}

	UDishonoredCheatManager_execSpawnRandomRatSwarm_Params SpawnRandomRatSwarm_Params;
	memset(&SpawnRandomRatSwarm_Params, 0, sizeof(SpawnRandomRatSwarm_Params));

	this->ProcessEvent(uFnSpawnRandomRatSwarm, &SpawnRandomRatSwarm_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.KillAllRats
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35646])
// Parameter Info:

void UDishonoredCheatManager::KillAllRats()
{
	static UFunction* uFnKillAllRats = nullptr;

	if (!uFnKillAllRats)
	{
		uFnKillAllRats = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.KillAllRats");
	}

	UDishonoredCheatManager_execKillAllRats_Params KillAllRats_Params;
	memset(&KillAllRats_Params, 0, sizeof(KillAllRats_Params));

	this->ProcessEvent(uFnKillAllRats, &KillAllRats_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.BreakOnTargetedRat
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UDishonoredCheatManager::BreakOnTargetedRat()
{
	static UFunction* uFnBreakOnTargetedRat = nullptr;

	if (!uFnBreakOnTargetedRat)
	{
		uFnBreakOnTargetedRat = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.BreakOnTargetedRat");
	}

	UDishonoredCheatManager_execBreakOnTargetedRat_Params BreakOnTargetedRat_Params;
	memset(&BreakOnTargetedRat_Params, 0, sizeof(BreakOnTargetedRat_Params));

	this->ProcessEvent(uFnBreakOnTargetedRat, &BreakOnTargetedRat_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DebugRats
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31377])
// Parameter Info:

void UDishonoredCheatManager::DebugRats()
{
	static UFunction* uFnDebugRats = nullptr;

	if (!uFnDebugRats)
	{
		uFnDebugRats = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DebugRats");
	}

	UDishonoredCheatManager_execDebugRats_Params DebugRats_Params;
	memset(&DebugRats_Params, 0, sizeof(DebugRats_Params));

	this->ProcessEvent(uFnDebugRats, &DebugRats_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DebugRat
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31376])
// Parameter Info:

void UDishonoredCheatManager::DebugRat()
{
	static UFunction* uFnDebugRat = nullptr;

	if (!uFnDebugRat)
	{
		uFnDebugRat = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DebugRat");
	}

	UDishonoredCheatManager_execDebugRat_Params DebugRat_Params;
	memset(&DebugRat_Params, 0, sizeof(DebugRat_Params));

	this->ProcessEvent(uFnDebugRat, &DebugRat_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DebugBreakableCollision
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UDishonoredCheatManager::DebugBreakableCollision()
{
	static UFunction* uFnDebugBreakableCollision = nullptr;

	if (!uFnDebugBreakableCollision)
	{
		uFnDebugBreakableCollision = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DebugBreakableCollision");
	}

	UDishonoredCheatManager_execDebugBreakableCollision_Params DebugBreakableCollision_Params;
	memset(&DebugBreakableCollision_Params, 0, sizeof(DebugBreakableCollision_Params));

	this->ProcessEvent(uFnDebugBreakableCollision, &DebugBreakableCollision_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DebugHeart
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UDishonoredCheatManager::DebugHeart()
{
	static UFunction* uFnDebugHeart = nullptr;

	if (!uFnDebugHeart)
	{
		uFnDebugHeart = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DebugHeart");
	}

	UDishonoredCheatManager_execDebugHeart_Params DebugHeart_Params;
	memset(&DebugHeart_Params, 0, sizeof(DebugHeart_Params));

	this->ProcessEvent(uFnDebugHeart, &DebugHeart_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DebugSpringRazor
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UDishonoredCheatManager::DebugSpringRazor()
{
	static UFunction* uFnDebugSpringRazor = nullptr;

	if (!uFnDebugSpringRazor)
	{
		uFnDebugSpringRazor = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DebugSpringRazor");
	}

	UDishonoredCheatManager_execDebugSpringRazor_Params DebugSpringRazor_Params;
	memset(&DebugSpringRazor_Params, 0, sizeof(DebugSpringRazor_Params));

	this->ProcessEvent(uFnDebugSpringRazor, &DebugSpringRazor_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.ListActorTickTime
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35761])
// Parameter Info:

void UDishonoredCheatManager::ListActorTickTime()
{
	static UFunction* uFnListActorTickTime = nullptr;

	if (!uFnListActorTickTime)
	{
		uFnListActorTickTime = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.ListActorTickTime");
	}

	UDishonoredCheatManager_execListActorTickTime_Params ListActorTickTime_Params;
	memset(&ListActorTickTime_Params, 0, sizeof(ListActorTickTime_Params));

	this->ProcessEvent(uFnListActorTickTime, &ListActorTickTime_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.ListTickableActors
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35763])
// Parameter Info:

void UDishonoredCheatManager::ListTickableActors()
{
	static UFunction* uFnListTickableActors = nullptr;

	if (!uFnListTickableActors)
	{
		uFnListTickableActors = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.ListTickableActors");
	}

	UDishonoredCheatManager_execListTickableActors_Params ListTickableActors_Params;
	memset(&ListTickableActors_Params, 0, sizeof(ListTickableActors_Params));

	this->ProcessEvent(uFnListTickableActors, &ListTickableActors_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.ListComponents
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35762])
// Parameter Info:

void UDishonoredCheatManager::ListComponents()
{
	static UFunction* uFnListComponents = nullptr;

	if (!uFnListComponents)
	{
		uFnListComponents = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.ListComponents");
	}

	UDishonoredCheatManager_execListComponents_Params ListComponents_Params;
	memset(&ListComponents_Params, 0, sizeof(ListComponents_Params));

	this->ProcessEvent(uFnListComponents, &ListComponents_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.TestNailing
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45334])
// Parameter Info:

void UDishonoredCheatManager::TestNailing()
{
	static UFunction* uFnTestNailing = nullptr;

	if (!uFnTestNailing)
	{
		uFnTestNailing = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.TestNailing");
	}

	UDishonoredCheatManager_execTestNailing_Params TestNailing_Params;
	memset(&TestNailing_Params, 0, sizeof(TestNailing_Params));

	this->ProcessEvent(uFnTestNailing, &TestNailing_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.ToggleDrawRainBox
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UDishonoredCheatManager::ToggleDrawRainBox()
{
	static UFunction* uFnToggleDrawRainBox = nullptr;

	if (!uFnToggleDrawRainBox)
	{
		uFnToggleDrawRainBox = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.ToggleDrawRainBox");
	}

	UDishonoredCheatManager_execToggleDrawRainBox_Params ToggleDrawRainBox_Params;
	memset(&ToggleDrawRainBox_Params, 0, sizeof(ToggleDrawRainBox_Params));

	this->ProcessEvent(uFnToggleDrawRainBox, &ToggleDrawRainBox_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.BendTimeDisplay
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30608])
// Parameter Info:

void UDishonoredCheatManager::BendTimeDisplay()
{
	static UFunction* uFnBendTimeDisplay = nullptr;

	if (!uFnBendTimeDisplay)
	{
		uFnBendTimeDisplay = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.BendTimeDisplay");
	}

	UDishonoredCheatManager_execBendTimeDisplay_Params BendTimeDisplay_Params;
	memset(&BendTimeDisplay_Params, 0, sizeof(BendTimeDisplay_Params));

	this->ProcessEvent(uFnBendTimeDisplay, &BendTimeDisplay_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.BendTimeReport
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30609])
// Parameter Info:

void UDishonoredCheatManager::BendTimeReport()
{
	static UFunction* uFnBendTimeReport = nullptr;

	if (!uFnBendTimeReport)
	{
		uFnBendTimeReport = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.BendTimeReport");
	}

	UDishonoredCheatManager_execBendTimeReport_Params BendTimeReport_Params;
	memset(&BendTimeReport_Params, 0, sizeof(BendTimeReport_Params));

	this->ProcessEvent(uFnBendTimeReport, &BendTimeReport_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.MinPowers
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43696])
// Parameter Info:

void UDishonoredCheatManager::MinPowers()
{
	static UFunction* uFnMinPowers = nullptr;

	if (!uFnMinPowers)
	{
		uFnMinPowers = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.MinPowers");
	}

	UDishonoredCheatManager_execMinPowers_Params MinPowers_Params;
	memset(&MinPowers_Params, 0, sizeof(MinPowers_Params));

	this->ProcessEvent(uFnMinPowers, &MinPowers_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.MaxPowers
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43664])
// Parameter Info:

void UDishonoredCheatManager::MaxPowers()
{
	static UFunction* uFnMaxPowers = nullptr;

	if (!uFnMaxPowers)
	{
		uFnMaxPowers = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.MaxPowers");
	}

	UDishonoredCheatManager_execMaxPowers_Params MaxPowers_Params;
	memset(&MaxPowers_Params, 0, sizeof(MaxPowers_Params));

	this->ProcessEvent(uFnMaxPowers, &MaxPowers_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.RemovePower
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44695])
// Parameter Info:
// class FName                    _WhichPower                    (CPF_Parm)

void UDishonoredCheatManager::RemovePower(const class FName& _WhichPower)
{
	static UFunction* uFnRemovePower = nullptr;

	if (!uFnRemovePower)
	{
		uFnRemovePower = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.RemovePower");
	}

	UDishonoredCheatManager_execRemovePower_Params RemovePower_Params;
	memset(&RemovePower_Params, 0, sizeof(RemovePower_Params));
	memcpy_s(&RemovePower_Params._WhichPower, sizeof(RemovePower_Params._WhichPower), &_WhichPower, sizeof(_WhichPower));

	this->ProcessEvent(uFnRemovePower, &RemovePower_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AddAttribute
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30026])
// Parameter Info:
// class FName                    _Name                          (CPF_Parm)
// float                          _fValue                        (CPF_Parm)

void UDishonoredCheatManager::AddAttribute(const class FName& _Name, float _fValue)
{
	static UFunction* uFnAddAttribute = nullptr;

	if (!uFnAddAttribute)
	{
		uFnAddAttribute = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AddAttribute");
	}

	UDishonoredCheatManager_execAddAttribute_Params AddAttribute_Params;
	memset(&AddAttribute_Params, 0, sizeof(AddAttribute_Params));
	memcpy_s(&AddAttribute_Params._Name, sizeof(AddAttribute_Params._Name), &_Name, sizeof(_Name));
	memcpy_s(&AddAttribute_Params._fValue, sizeof(AddAttribute_Params._fValue), &_fValue, sizeof(_fValue));

	this->ProcessEvent(uFnAddAttribute, &AddAttribute_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AddPower
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30032])
// Parameter Info:
// class FName                    _WhichPower                    (CPF_Parm)
// int32_t                        _WhichLevel                    (CPF_Parm)

void UDishonoredCheatManager::AddPower(const class FName& _WhichPower, int32_t _WhichLevel)
{
	static UFunction* uFnAddPower = nullptr;

	if (!uFnAddPower)
	{
		uFnAddPower = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AddPower");
	}

	UDishonoredCheatManager_execAddPower_Params AddPower_Params;
	memset(&AddPower_Params, 0, sizeof(AddPower_Params));
	memcpy_s(&AddPower_Params._WhichPower, sizeof(AddPower_Params._WhichPower), &_WhichPower, sizeof(_WhichPower));
	memcpy_s(&AddPower_Params._WhichLevel, sizeof(AddPower_Params._WhichLevel), &_WhichLevel, sizeof(_WhichLevel));

	this->ProcessEvent(uFnAddPower, &AddPower_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.RemoveMod
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44692])
// Parameter Info:
// class FName                    _WhichAttribute                (CPF_Parm)
// class FName                    _ModName                       (CPF_Parm)

void UDishonoredCheatManager::RemoveMod(const class FName& _WhichAttribute, const class FName& _ModName)
{
	static UFunction* uFnRemoveMod = nullptr;

	if (!uFnRemoveMod)
	{
		uFnRemoveMod = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.RemoveMod");
	}

	UDishonoredCheatManager_execRemoveMod_Params RemoveMod_Params;
	memset(&RemoveMod_Params, 0, sizeof(RemoveMod_Params));
	memcpy_s(&RemoveMod_Params._WhichAttribute, sizeof(RemoveMod_Params._WhichAttribute), &_WhichAttribute, sizeof(_WhichAttribute));
	memcpy_s(&RemoveMod_Params._ModName, sizeof(RemoveMod_Params._ModName), &_ModName, sizeof(_ModName));

	this->ProcessEvent(uFnRemoveMod, &RemoveMod_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AddMod
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[30029])
// Parameter Info:
// class FName                    _WhichAttribute                (CPF_Parm)
// class FName                    _ModName                       (CPF_Parm)
// EeDisAttributeModifierType     _ModType                       (CPF_Parm)
// float                          _fModValue                     (CPF_Parm)
// float                          _fLifetime                     (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::AddMod(const class FName& _WhichAttribute, const class FName& _ModName, EeDisAttributeModifierType _ModType, float _fModValue, float _fLifetime)
{
	static UFunction* uFnAddMod = nullptr;

	if (!uFnAddMod)
	{
		uFnAddMod = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AddMod");
	}

	UDishonoredCheatManager_execAddMod_Params AddMod_Params;
	memset(&AddMod_Params, 0, sizeof(AddMod_Params));
	memcpy_s(&AddMod_Params._WhichAttribute, sizeof(AddMod_Params._WhichAttribute), &_WhichAttribute, sizeof(_WhichAttribute));
	memcpy_s(&AddMod_Params._ModName, sizeof(AddMod_Params._ModName), &_ModName, sizeof(_ModName));
	memcpy_s(&AddMod_Params._ModType, sizeof(AddMod_Params._ModType), &_ModType, sizeof(_ModType));
	memcpy_s(&AddMod_Params._fModValue, sizeof(AddMod_Params._fModValue), &_fModValue, sizeof(_fModValue));
	memcpy_s(&AddMod_Params._fLifetime, sizeof(AddMod_Params._fLifetime), &_fLifetime, sizeof(_fLifetime));

	this->ProcessEvent(uFnAddMod, &AddMod_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.SimFPS
// [0x00024202] (FUNC_Defined | FUNC_Exec | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        _LowFPS                        (CPF_OptionalParm | CPF_Parm)
// int32_t                        _HighFPS                       (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::SimFPS(int32_t _LowFPS, int32_t _HighFPS)
{
	static UFunction* uFnSimFPS = nullptr;

	if (!uFnSimFPS)
	{
		uFnSimFPS = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.SimFPS");
	}

	UDishonoredCheatManager_execSimFPS_Params SimFPS_Params;
	memset(&SimFPS_Params, 0, sizeof(SimFPS_Params));
	memcpy_s(&SimFPS_Params._LowFPS, sizeof(SimFPS_Params._LowFPS), &_LowFPS, sizeof(_LowFPS));
	memcpy_s(&SimFPS_Params._HighFPS, sizeof(SimFPS_Params._HighFPS), &_HighFPS, sizeof(_HighFPS));

	this->ProcessEvent(uFnSimFPS, &SimFPS_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.SetSingleStepFPS
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        FPS                            (CPF_Parm)

void UDishonoredCheatManager::SetSingleStepFPS(int32_t FPS)
{
	static UFunction* uFnSetSingleStepFPS = nullptr;

	if (!uFnSetSingleStepFPS)
	{
		uFnSetSingleStepFPS = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.SetSingleStepFPS");
	}

	UDishonoredCheatManager_execSetSingleStepFPS_Params SetSingleStepFPS_Params;
	memset(&SetSingleStepFPS_Params, 0, sizeof(SetSingleStepFPS_Params));
	memcpy_s(&SetSingleStepFPS_Params.FPS, sizeof(SetSingleStepFPS_Params.FPS), &FPS, sizeof(FPS));

	this->ProcessEvent(uFnSetSingleStepFPS, &SetSingleStepFPS_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NormalStep
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UDishonoredCheatManager::NormalStep()
{
	static UFunction* uFnNormalStep = nullptr;

	if (!uFnNormalStep)
	{
		uFnNormalStep = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NormalStep");
	}

	UDishonoredCheatManager_execNormalStep_Params NormalStep_Params;
	memset(&NormalStep_Params, 0, sizeof(NormalStep_Params));

	this->ProcessEvent(uFnNormalStep, &NormalStep_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.SingleStep
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UDishonoredCheatManager::SingleStep()
{
	static UFunction* uFnSingleStep = nullptr;

	if (!uFnSingleStep)
	{
		uFnSingleStep = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.SingleStep");
	}

	UDishonoredCheatManager_execSingleStep_Params SingleStep_Params;
	memset(&SingleStep_Params, 0, sizeof(SingleStep_Params));

	this->ProcessEvent(uFnSingleStep, &SingleStep_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.SingleStep_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44902])
// Parameter Info:

void UDishonoredCheatManager::SingleStep_Native()
{
	static UFunction* uFnSingleStep_Native = nullptr;

	if (!uFnSingleStep_Native)
	{
		uFnSingleStep_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.SingleStep_Native");
	}

	UDishonoredCheatManager_execSingleStep_Native_Params SingleStep_Native_Params;
	memset(&SingleStep_Native_Params, 0, sizeof(SingleStep_Native_Params));

	this->ProcessEvent(uFnSingleStep_Native, &SingleStep_Native_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.Walk
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UDishonoredCheatManager::Walk()
{
	static UFunction* uFnWalk = nullptr;

	if (!uFnWalk)
	{
		uFnWalk = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.Walk");
	}

	UDishonoredCheatManager_execWalk_Params Walk_Params;
	memset(&Walk_Params, 0, sizeof(Walk_Params));

	this->ProcessEvent(uFnWalk, &Walk_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DialogSkipGlobalRules
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31633])
// Parameter Info:

void UDishonoredCheatManager::DialogSkipGlobalRules()
{
	static UFunction* uFnDialogSkipGlobalRules = nullptr;

	if (!uFnDialogSkipGlobalRules)
	{
		uFnDialogSkipGlobalRules = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DialogSkipGlobalRules");
	}

	UDishonoredCheatManager_execDialogSkipGlobalRules_Params DialogSkipGlobalRules_Params;
	memset(&DialogSkipGlobalRules_Params, 0, sizeof(DialogSkipGlobalRules_Params));

	this->ProcessEvent(uFnDialogSkipGlobalRules, &DialogSkipGlobalRules_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DebugDialog
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31359])
// Parameter Info:

void UDishonoredCheatManager::DebugDialog()
{
	static UFunction* uFnDebugDialog = nullptr;

	if (!uFnDebugDialog)
	{
		uFnDebugDialog = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DebugDialog");
	}

	UDishonoredCheatManager_execDebugDialog_Params DebugDialog_Params;
	memset(&DebugDialog_Params, 0, sizeof(DebugDialog_Params));

	this->ProcessEvent(uFnDebugDialog, &DebugDialog_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DebugToggleVerbose
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31379])
// Parameter Info:

void UDishonoredCheatManager::DebugToggleVerbose()
{
	static UFunction* uFnDebugToggleVerbose = nullptr;

	if (!uFnDebugToggleVerbose)
	{
		uFnDebugToggleVerbose = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DebugToggleVerbose");
	}

	UDishonoredCheatManager_execDebugToggleVerbose_Params DebugToggleVerbose_Params;
	memset(&DebugToggleVerbose_Params, 0, sizeof(DebugToggleVerbose_Params));

	this->ProcessEvent(uFnDebugToggleVerbose, &DebugToggleVerbose_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DebugMenuRight
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31373])
// Parameter Info:

void UDishonoredCheatManager::DebugMenuRight()
{
	static UFunction* uFnDebugMenuRight = nullptr;

	if (!uFnDebugMenuRight)
	{
		uFnDebugMenuRight = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DebugMenuRight");
	}

	UDishonoredCheatManager_execDebugMenuRight_Params DebugMenuRight_Params;
	memset(&DebugMenuRight_Params, 0, sizeof(DebugMenuRight_Params));

	this->ProcessEvent(uFnDebugMenuRight, &DebugMenuRight_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DebugMenuLeft
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31372])
// Parameter Info:

void UDishonoredCheatManager::DebugMenuLeft()
{
	static UFunction* uFnDebugMenuLeft = nullptr;

	if (!uFnDebugMenuLeft)
	{
		uFnDebugMenuLeft = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DebugMenuLeft");
	}

	UDishonoredCheatManager_execDebugMenuLeft_Params DebugMenuLeft_Params;
	memset(&DebugMenuLeft_Params, 0, sizeof(DebugMenuLeft_Params));

	this->ProcessEvent(uFnDebugMenuLeft, &DebugMenuLeft_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DebugMenuDown
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31370])
// Parameter Info:

void UDishonoredCheatManager::DebugMenuDown()
{
	static UFunction* uFnDebugMenuDown = nullptr;

	if (!uFnDebugMenuDown)
	{
		uFnDebugMenuDown = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DebugMenuDown");
	}

	UDishonoredCheatManager_execDebugMenuDown_Params DebugMenuDown_Params;
	memset(&DebugMenuDown_Params, 0, sizeof(DebugMenuDown_Params));

	this->ProcessEvent(uFnDebugMenuDown, &DebugMenuDown_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DebugMenuUp
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31374])
// Parameter Info:

void UDishonoredCheatManager::DebugMenuUp()
{
	static UFunction* uFnDebugMenuUp = nullptr;

	if (!uFnDebugMenuUp)
	{
		uFnDebugMenuUp = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DebugMenuUp");
	}

	UDishonoredCheatManager_execDebugMenuUp_Params DebugMenuUp_Params;
	memset(&DebugMenuUp_Params, 0, sizeof(DebugMenuUp_Params));

	this->ProcessEvent(uFnDebugMenuUp, &DebugMenuUp_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DebugMenuEnter
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31371])
// Parameter Info:

void UDishonoredCheatManager::DebugMenuEnter()
{
	static UFunction* uFnDebugMenuEnter = nullptr;

	if (!uFnDebugMenuEnter)
	{
		uFnDebugMenuEnter = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DebugMenuEnter");
	}

	UDishonoredCheatManager_execDebugMenuEnter_Params DebugMenuEnter_Params;
	memset(&DebugMenuEnter_Params, 0, sizeof(DebugMenuEnter_Params));

	this->ProcessEvent(uFnDebugMenuEnter, &DebugMenuEnter_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.EndLiveSession
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[46482])
// Parameter Info:

void UDishonoredCheatManager::EndLiveSession()
{
	static UFunction* uFnEndLiveSession = nullptr;

	if (!uFnEndLiveSession)
	{
		uFnEndLiveSession = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.EndLiveSession");
	}

	UDishonoredCheatManager_execEndLiveSession_Params EndLiveSession_Params;
	memset(&EndLiveSession_Params, 0, sizeof(EndLiveSession_Params));

	this->ProcessEvent(uFnEndLiveSession, &EndLiveSession_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.CreateLiveSession
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45888])
// Parameter Info:

void UDishonoredCheatManager::CreateLiveSession()
{
	static UFunction* uFnCreateLiveSession = nullptr;

	if (!uFnCreateLiveSession)
	{
		uFnCreateLiveSession = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.CreateLiveSession");
	}

	UDishonoredCheatManager_execCreateLiveSession_Params CreateLiveSession_Params;
	memset(&CreateLiveSession_Params, 0, sizeof(CreateLiveSession_Params));

	this->ProcessEvent(uFnCreateLiveSession, &CreateLiveSession_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.WriteScoreToLeaderboard_Name
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47719])
// Parameter Info:
// class FString                  _rLeaderboardName              (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        nScore                         (CPF_Parm)

void UDishonoredCheatManager::WriteScoreToLeaderboard_Name(const class FString& _rLeaderboardName, int32_t nScore)
{
	static UFunction* uFnWriteScoreToLeaderboard_Name = nullptr;

	if (!uFnWriteScoreToLeaderboard_Name)
	{
		uFnWriteScoreToLeaderboard_Name = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.WriteScoreToLeaderboard_Name");
	}

	UDishonoredCheatManager_execWriteScoreToLeaderboard_Name_Params WriteScoreToLeaderboard_Name_Params;
	memset(&WriteScoreToLeaderboard_Name_Params, 0, sizeof(WriteScoreToLeaderboard_Name_Params));
	memcpy_s(&WriteScoreToLeaderboard_Name_Params._rLeaderboardName, sizeof(WriteScoreToLeaderboard_Name_Params._rLeaderboardName), &_rLeaderboardName, sizeof(_rLeaderboardName));
	memcpy_s(&WriteScoreToLeaderboard_Name_Params.nScore, sizeof(WriteScoreToLeaderboard_Name_Params.nScore), &nScore, sizeof(nScore));

	this->ProcessEvent(uFnWriteScoreToLeaderboard_Name, &WriteScoreToLeaderboard_Name_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.WriteScoreToLeaderboard_ID
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47718])
// Parameter Info:
// int32_t                        nLeaderboardID                 (CPF_Parm)
// int32_t                        nScore                         (CPF_Parm)

void UDishonoredCheatManager::WriteScoreToLeaderboard_ID(int32_t nLeaderboardID, int32_t nScore)
{
	static UFunction* uFnWriteScoreToLeaderboard_ID = nullptr;

	if (!uFnWriteScoreToLeaderboard_ID)
	{
		uFnWriteScoreToLeaderboard_ID = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.WriteScoreToLeaderboard_ID");
	}

	UDishonoredCheatManager_execWriteScoreToLeaderboard_ID_Params WriteScoreToLeaderboard_ID_Params;
	memset(&WriteScoreToLeaderboard_ID_Params, 0, sizeof(WriteScoreToLeaderboard_ID_Params));
	memcpy_s(&WriteScoreToLeaderboard_ID_Params.nLeaderboardID, sizeof(WriteScoreToLeaderboard_ID_Params.nLeaderboardID), &nLeaderboardID, sizeof(nLeaderboardID));
	memcpy_s(&WriteScoreToLeaderboard_ID_Params.nScore, sizeof(WriteScoreToLeaderboard_ID_Params.nScore), &nScore, sizeof(nScore));

	this->ProcessEvent(uFnWriteScoreToLeaderboard_ID, &WriteScoreToLeaderboard_ID_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.GetLeaderboardsInfo_Name
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[46530])
// Parameter Info:
// class FString                  _rLeaderboardName              (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        nStartIndex                    (CPF_Parm)
// int32_t                        nNbEntriesToRetrieve           (CPF_Parm)
// uint32_t                       bFriends                       (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bAroundUser                    (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::GetLeaderboardsInfo_Name(const class FString& _rLeaderboardName, int32_t nStartIndex, int32_t nNbEntriesToRetrieve, bool bFriends, bool bAroundUser)
{
	static UFunction* uFnGetLeaderboardsInfo_Name = nullptr;

	if (!uFnGetLeaderboardsInfo_Name)
	{
		uFnGetLeaderboardsInfo_Name = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.GetLeaderboardsInfo_Name");
	}

	UDishonoredCheatManager_execGetLeaderboardsInfo_Name_Params GetLeaderboardsInfo_Name_Params;
	memset(&GetLeaderboardsInfo_Name_Params, 0, sizeof(GetLeaderboardsInfo_Name_Params));
	memcpy_s(&GetLeaderboardsInfo_Name_Params._rLeaderboardName, sizeof(GetLeaderboardsInfo_Name_Params._rLeaderboardName), &_rLeaderboardName, sizeof(_rLeaderboardName));
	memcpy_s(&GetLeaderboardsInfo_Name_Params.nStartIndex, sizeof(GetLeaderboardsInfo_Name_Params.nStartIndex), &nStartIndex, sizeof(nStartIndex));
	memcpy_s(&GetLeaderboardsInfo_Name_Params.nNbEntriesToRetrieve, sizeof(GetLeaderboardsInfo_Name_Params.nNbEntriesToRetrieve), &nNbEntriesToRetrieve, sizeof(nNbEntriesToRetrieve));
	GetLeaderboardsInfo_Name_Params.bFriends = bFriends;
	GetLeaderboardsInfo_Name_Params.bAroundUser = bAroundUser;

	this->ProcessEvent(uFnGetLeaderboardsInfo_Name, &GetLeaderboardsInfo_Name_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.GetLeaderboardsInfo_ID
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[46529])
// Parameter Info:
// int32_t                        nLeaderboardID                 (CPF_Parm)
// int32_t                        nStartIndex                    (CPF_Parm)
// int32_t                        nNbEntriesToRetrieve           (CPF_Parm)
// uint32_t                       bFriends                       (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bAroundUser                    (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::GetLeaderboardsInfo_ID(int32_t nLeaderboardID, int32_t nStartIndex, int32_t nNbEntriesToRetrieve, bool bFriends, bool bAroundUser)
{
	static UFunction* uFnGetLeaderboardsInfo_ID = nullptr;

	if (!uFnGetLeaderboardsInfo_ID)
	{
		uFnGetLeaderboardsInfo_ID = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.GetLeaderboardsInfo_ID");
	}

	UDishonoredCheatManager_execGetLeaderboardsInfo_ID_Params GetLeaderboardsInfo_ID_Params;
	memset(&GetLeaderboardsInfo_ID_Params, 0, sizeof(GetLeaderboardsInfo_ID_Params));
	memcpy_s(&GetLeaderboardsInfo_ID_Params.nLeaderboardID, sizeof(GetLeaderboardsInfo_ID_Params.nLeaderboardID), &nLeaderboardID, sizeof(nLeaderboardID));
	memcpy_s(&GetLeaderboardsInfo_ID_Params.nStartIndex, sizeof(GetLeaderboardsInfo_ID_Params.nStartIndex), &nStartIndex, sizeof(nStartIndex));
	memcpy_s(&GetLeaderboardsInfo_ID_Params.nNbEntriesToRetrieve, sizeof(GetLeaderboardsInfo_ID_Params.nNbEntriesToRetrieve), &nNbEntriesToRetrieve, sizeof(nNbEntriesToRetrieve));
	GetLeaderboardsInfo_ID_Params.bFriends = bFriends;
	GetLeaderboardsInfo_ID_Params.bAroundUser = bAroundUser;

	this->ProcessEvent(uFnGetLeaderboardsInfo_ID, &GetLeaderboardsInfo_ID_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.ResetAllSteamAchievements
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44754])
// Parameter Info:

void UDishonoredCheatManager::ResetAllSteamAchievements()
{
	static UFunction* uFnResetAllSteamAchievements = nullptr;

	if (!uFnResetAllSteamAchievements)
	{
		uFnResetAllSteamAchievements = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.ResetAllSteamAchievements");
	}

	UDishonoredCheatManager_execResetAllSteamAchievements_Params ResetAllSteamAchievements_Params;
	memset(&ResetAllSteamAchievements_Params, 0, sizeof(ResetAllSteamAchievements_Params));

	this->ProcessEvent(uFnResetAllSteamAchievements, &ResetAllSteamAchievements_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DeleteAllSteamSaveGames
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31512])
// Parameter Info:

void UDishonoredCheatManager::DeleteAllSteamSaveGames()
{
	static UFunction* uFnDeleteAllSteamSaveGames = nullptr;

	if (!uFnDeleteAllSteamSaveGames)
	{
		uFnDeleteAllSteamSaveGames = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DeleteAllSteamSaveGames");
	}

	UDishonoredCheatManager_execDeleteAllSteamSaveGames_Params DeleteAllSteamSaveGames_Params;
	memset(&DeleteAllSteamSaveGames_Params, 0, sizeof(DeleteAllSteamSaveGames_Params));

	this->ProcessEvent(uFnDeleteAllSteamSaveGames, &DeleteAllSteamSaveGames_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DLC05AddScore
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[46178])
// Parameter Info:
// int32_t                        I                              (CPF_Parm)

void UDishonoredCheatManager::DLC05AddScore(int32_t I)
{
	static UFunction* uFnDLC05AddScore = nullptr;

	if (!uFnDLC05AddScore)
	{
		uFnDLC05AddScore = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DLC05AddScore");
	}

	UDishonoredCheatManager_execDLC05AddScore_Params DLC05AddScore_Params;
	memset(&DLC05AddScore_Params, 0, sizeof(DLC05AddScore_Params));
	memcpy_s(&DLC05AddScore_Params.I, sizeof(DLC05AddScore_Params.I), &I, sizeof(I));

	this->ProcessEvent(uFnDLC05AddScore, &DLC05AddScore_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DLC05ShowChallenge
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[46194])
// Parameter Info:

void UDishonoredCheatManager::DLC05ShowChallenge()
{
	static UFunction* uFnDLC05ShowChallenge = nullptr;

	if (!uFnDLC05ShowChallenge)
	{
		uFnDLC05ShowChallenge = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DLC05ShowChallenge");
	}

	UDishonoredCheatManager_execDLC05ShowChallenge_Params DLC05ShowChallenge_Params;
	memset(&DLC05ShowChallenge_Params, 0, sizeof(DLC05ShowChallenge_Params));

	this->ProcessEvent(uFnDLC05ShowChallenge, &DLC05ShowChallenge_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.ShowStorePage
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44895])
// Parameter Info:
// class FString                  _arg                           (CPF_Parm | CPF_NeedCtorLink)

void UDishonoredCheatManager::ShowStorePage(const class FString& _arg)
{
	static UFunction* uFnShowStorePage = nullptr;

	if (!uFnShowStorePage)
	{
		uFnShowStorePage = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.ShowStorePage");
	}

	UDishonoredCheatManager_execShowStorePage_Params ShowStorePage_Params;
	memset(&ShowStorePage_Params, 0, sizeof(ShowStorePage_Params));
	memcpy_s(&ShowStorePage_Params._arg, sizeof(ShowStorePage_Params._arg), &_arg, sizeof(_arg));

	this->ProcessEvent(uFnShowStorePage, &ShowStorePage_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.Slack
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44907])
// Parameter Info:

void UDishonoredCheatManager::Slack()
{
	static UFunction* uFnSlack = nullptr;

	if (!uFnSlack)
	{
		uFnSlack = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.Slack");
	}

	UDishonoredCheatManager_execSlack_Params Slack_Params;
	memset(&Slack_Params, 0, sizeof(Slack_Params));

	this->ProcessEvent(uFnSlack, &Slack_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.SwitchDLCLock
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45248])
// Parameter Info:
// int32_t                        _Index                         (CPF_Parm)

void UDishonoredCheatManager::SwitchDLCLock(int32_t _Index)
{
	static UFunction* uFnSwitchDLCLock = nullptr;

	if (!uFnSwitchDLCLock)
	{
		uFnSwitchDLCLock = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.SwitchDLCLock");
	}

	UDishonoredCheatManager_execSwitchDLCLock_Params SwitchDLCLock_Params;
	memset(&SwitchDLCLock_Params, 0, sizeof(SwitchDLCLock_Params));
	memcpy_s(&SwitchDLCLock_Params._Index, sizeof(SwitchDLCLock_Params._Index), &_Index, sizeof(_Index));

	this->ProcessEvent(uFnSwitchDLCLock, &SwitchDLCLock_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.GoreEnable
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35386])
// Parameter Info:
// uint32_t                       _bEnable                       (CPF_Parm)

void UDishonoredCheatManager::GoreEnable(bool _bEnable)
{
	static UFunction* uFnGoreEnable = nullptr;

	if (!uFnGoreEnable)
	{
		uFnGoreEnable = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.GoreEnable");
	}

	UDishonoredCheatManager_execGoreEnable_Params GoreEnable_Params;
	memset(&GoreEnable_Params, 0, sizeof(GoreEnable_Params));
	GoreEnable_Params._bEnable = _bEnable;

	this->ProcessEvent(uFnGoreEnable, &GoreEnable_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.GiveRunes
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35328])
// Parameter Info:
// int32_t                        _Count                         (CPF_Parm)

void UDishonoredCheatManager::GiveRunes(int32_t _Count)
{
	static UFunction* uFnGiveRunes = nullptr;

	if (!uFnGiveRunes)
	{
		uFnGiveRunes = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.GiveRunes");
	}

	UDishonoredCheatManager_execGiveRunes_Params GiveRunes_Params;
	memset(&GiveRunes_Params, 0, sizeof(GiveRunes_Params));
	memcpy_s(&GiveRunes_Params._Count, sizeof(GiveRunes_Params._Count), &_Count, sizeof(_Count));

	this->ProcessEvent(uFnGiveRunes, &GiveRunes_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.ShowPowerMenu
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44893])
// Parameter Info:

void UDishonoredCheatManager::ShowPowerMenu()
{
	static UFunction* uFnShowPowerMenu = nullptr;

	if (!uFnShowPowerMenu)
	{
		uFnShowPowerMenu = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.ShowPowerMenu");
	}

	UDishonoredCheatManager_execShowPowerMenu_Params ShowPowerMenu_Params;
	memset(&ShowPowerMenu_Params, 0, sizeof(ShowPowerMenu_Params));

	this->ProcessEvent(uFnShowPowerMenu, &ShowPowerMenu_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DoorPoltergeistMode
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[32664])
// Parameter Info:
// int32_t                        _Mode                          (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::DoorPoltergeistMode(int32_t _Mode)
{
	static UFunction* uFnDoorPoltergeistMode = nullptr;

	if (!uFnDoorPoltergeistMode)
	{
		uFnDoorPoltergeistMode = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DoorPoltergeistMode");
	}

	UDishonoredCheatManager_execDoorPoltergeistMode_Params DoorPoltergeistMode_Params;
	memset(&DoorPoltergeistMode_Params, 0, sizeof(DoorPoltergeistMode_Params));
	memcpy_s(&DoorPoltergeistMode_Params._Mode, sizeof(DoorPoltergeistMode_Params._Mode), &_Mode, sizeof(_Mode));

	this->ProcessEvent(uFnDoorPoltergeistMode, &DoorPoltergeistMode_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DormantDebugEnable
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32674])
// Parameter Info:
// uint32_t                       _bEnable                       (CPF_Parm)

void UDishonoredCheatManager::DormantDebugEnable(bool _bEnable)
{
	static UFunction* uFnDormantDebugEnable = nullptr;

	if (!uFnDormantDebugEnable)
	{
		uFnDormantDebugEnable = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DormantDebugEnable");
	}

	UDishonoredCheatManager_execDormantDebugEnable_Params DormantDebugEnable_Params;
	memset(&DormantDebugEnable_Params, 0, sizeof(DormantDebugEnable_Params));
	DormantDebugEnable_Params._bEnable = _bEnable;

	this->ProcessEvent(uFnDormantDebugEnable, &DormantDebugEnable_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DormantDebugToggle
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32675])
// Parameter Info:

void UDishonoredCheatManager::DormantDebugToggle()
{
	static UFunction* uFnDormantDebugToggle = nullptr;

	if (!uFnDormantDebugToggle)
	{
		uFnDormantDebugToggle = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DormantDebugToggle");
	}

	UDishonoredCheatManager_execDormantDebugToggle_Params DormantDebugToggle_Params;
	memset(&DormantDebugToggle_Params, 0, sizeof(DormantDebugToggle_Params));

	this->ProcessEvent(uFnDormantDebugToggle, &DormantDebugToggle_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DestroyActor
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31523])
// Parameter Info:

void UDishonoredCheatManager::DestroyActor()
{
	static UFunction* uFnDestroyActor = nullptr;

	if (!uFnDestroyActor)
	{
		uFnDestroyActor = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DestroyActor");
	}

	UDishonoredCheatManager_execDestroyActor_Params DestroyActor_Params;
	memset(&DestroyActor_Params, 0, sizeof(DestroyActor_Params));

	this->ProcessEvent(uFnDestroyActor, &DestroyActor_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DisNoteShow
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32153])
// Parameter Info:
// uint32_t                       _bShow                         (CPF_Parm)

void UDishonoredCheatManager::DisNoteShow(bool _bShow)
{
	static UFunction* uFnDisNoteShow = nullptr;

	if (!uFnDisNoteShow)
	{
		uFnDisNoteShow = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DisNoteShow");
	}

	UDishonoredCheatManager_execDisNoteShow_Params DisNoteShow_Params;
	memset(&DisNoteShow_Params, 0, sizeof(DisNoteShow_Params));
	DisNoteShow_Params._bShow = _bShow;

	this->ProcessEvent(uFnDisNoteShow, &DisNoteShow_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DisNoteToggle
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32154])
// Parameter Info:

void UDishonoredCheatManager::DisNoteToggle()
{
	static UFunction* uFnDisNoteToggle = nullptr;

	if (!uFnDisNoteToggle)
	{
		uFnDisNoteToggle = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DisNoteToggle");
	}

	UDishonoredCheatManager_execDisNoteToggle_Params DisNoteToggle_Params;
	memset(&DisNoteToggle_Params, 0, sizeof(DisNoteToggle_Params));

	this->ProcessEvent(uFnDisNoteToggle, &DisNoteToggle_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCLogSteeringFlags
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43824])
// Parameter Info:

void UDishonoredCheatManager::NPCLogSteeringFlags()
{
	static UFunction* uFnNPCLogSteeringFlags = nullptr;

	if (!uFnNPCLogSteeringFlags)
	{
		uFnNPCLogSteeringFlags = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCLogSteeringFlags");
	}

	UDishonoredCheatManager_execNPCLogSteeringFlags_Params NPCLogSteeringFlags_Params;
	memset(&NPCLogSteeringFlags_Params, 0, sizeof(NPCLogSteeringFlags_Params));

	this->ProcessEvent(uFnNPCLogSteeringFlags, &NPCLogSteeringFlags_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCToggleSteeringWall
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43841])
// Parameter Info:

void UDishonoredCheatManager::NPCToggleSteeringWall()
{
	static UFunction* uFnNPCToggleSteeringWall = nullptr;

	if (!uFnNPCToggleSteeringWall)
	{
		uFnNPCToggleSteeringWall = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCToggleSteeringWall");
	}

	UDishonoredCheatManager_execNPCToggleSteeringWall_Params NPCToggleSteeringWall_Params;
	memset(&NPCToggleSteeringWall_Params, 0, sizeof(NPCToggleSteeringWall_Params));

	this->ProcessEvent(uFnNPCToggleSteeringWall, &NPCToggleSteeringWall_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCToggleSteeringEnemyPush
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43840])
// Parameter Info:

void UDishonoredCheatManager::NPCToggleSteeringEnemyPush()
{
	static UFunction* uFnNPCToggleSteeringEnemyPush = nullptr;

	if (!uFnNPCToggleSteeringEnemyPush)
	{
		uFnNPCToggleSteeringEnemyPush = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCToggleSteeringEnemyPush");
	}

	UDishonoredCheatManager_execNPCToggleSteeringEnemyPush_Params NPCToggleSteeringEnemyPush_Params;
	memset(&NPCToggleSteeringEnemyPush_Params, 0, sizeof(NPCToggleSteeringEnemyPush_Params));

	this->ProcessEvent(uFnNPCToggleSteeringEnemyPush, &NPCToggleSteeringEnemyPush_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCToggleSteeringCombat
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43838])
// Parameter Info:

void UDishonoredCheatManager::NPCToggleSteeringCombat()
{
	static UFunction* uFnNPCToggleSteeringCombat = nullptr;

	if (!uFnNPCToggleSteeringCombat)
	{
		uFnNPCToggleSteeringCombat = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCToggleSteeringCombat");
	}

	UDishonoredCheatManager_execNPCToggleSteeringCombat_Params NPCToggleSteeringCombat_Params;
	memset(&NPCToggleSteeringCombat_Params, 0, sizeof(NPCToggleSteeringCombat_Params));

	this->ProcessEvent(uFnNPCToggleSteeringCombat, &NPCToggleSteeringCombat_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCToggleSteeringDanger
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43839])
// Parameter Info:

void UDishonoredCheatManager::NPCToggleSteeringDanger()
{
	static UFunction* uFnNPCToggleSteeringDanger = nullptr;

	if (!uFnNPCToggleSteeringDanger)
	{
		uFnNPCToggleSteeringDanger = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCToggleSteeringDanger");
	}

	UDishonoredCheatManager_execNPCToggleSteeringDanger_Params NPCToggleSteeringDanger_Params;
	memset(&NPCToggleSteeringDanger_Params, 0, sizeof(NPCToggleSteeringDanger_Params));

	this->ProcessEvent(uFnNPCToggleSteeringDanger, &NPCToggleSteeringDanger_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCToggleSteeringAvoidable
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43837])
// Parameter Info:

void UDishonoredCheatManager::NPCToggleSteeringAvoidable()
{
	static UFunction* uFnNPCToggleSteeringAvoidable = nullptr;

	if (!uFnNPCToggleSteeringAvoidable)
	{
		uFnNPCToggleSteeringAvoidable = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCToggleSteeringAvoidable");
	}

	UDishonoredCheatManager_execNPCToggleSteeringAvoidable_Params NPCToggleSteeringAvoidable_Params;
	memset(&NPCToggleSteeringAvoidable_Params, 0, sizeof(NPCToggleSteeringAvoidable_Params));

	this->ProcessEvent(uFnNPCToggleSteeringAvoidable, &NPCToggleSteeringAvoidable_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCToggleLookAtBlending
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47574])
// Parameter Info:

void UDishonoredCheatManager::NPCToggleLookAtBlending()
{
	static UFunction* uFnNPCToggleLookAtBlending = nullptr;

	if (!uFnNPCToggleLookAtBlending)
	{
		uFnNPCToggleLookAtBlending = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCToggleLookAtBlending");
	}

	UDishonoredCheatManager_execNPCToggleLookAtBlending_Params NPCToggleLookAtBlending_Params;
	memset(&NPCToggleLookAtBlending_Params, 0, sizeof(NPCToggleLookAtBlending_Params));

	this->ProcessEvent(uFnNPCToggleLookAtBlending, &NPCToggleLookAtBlending_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCDelayTravel
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[43806])
// Parameter Info:
// float                          _fTravelDelay                  (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::NPCDelayTravel(float _fTravelDelay)
{
	static UFunction* uFnNPCDelayTravel = nullptr;

	if (!uFnNPCDelayTravel)
	{
		uFnNPCDelayTravel = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCDelayTravel");
	}

	UDishonoredCheatManager_execNPCDelayTravel_Params NPCDelayTravel_Params;
	memset(&NPCDelayTravel_Params, 0, sizeof(NPCDelayTravel_Params));
	memcpy_s(&NPCDelayTravel_Params._fTravelDelay, sizeof(NPCDelayTravel_Params._fTravelDelay), &_fTravelDelay, sizeof(_fTravelDelay));

	this->ProcessEvent(uFnNPCDelayTravel, &NPCDelayTravel_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCSpawn
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43830])
// Parameter Info:
// class FName                    _TweaksName                    (CPF_Parm)

void UDishonoredCheatManager::NPCSpawn(const class FName& _TweaksName)
{
	static UFunction* uFnNPCSpawn = nullptr;

	if (!uFnNPCSpawn)
	{
		uFnNPCSpawn = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCSpawn");
	}

	UDishonoredCheatManager_execNPCSpawn_Params NPCSpawn_Params;
	memset(&NPCSpawn_Params, 0, sizeof(NPCSpawn_Params));
	memcpy_s(&NPCSpawn_Params._TweaksName, sizeof(NPCSpawn_Params._TweaksName), &_TweaksName, sizeof(_TweaksName));

	this->ProcessEvent(uFnNPCSpawn, &NPCSpawn_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCPlayerVisibilityForLOD
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43825])
// Parameter Info:
// int32_t                        _iNPCVisibility                (CPF_Parm)

void UDishonoredCheatManager::NPCPlayerVisibilityForLOD(int32_t _iNPCVisibility)
{
	static UFunction* uFnNPCPlayerVisibilityForLOD = nullptr;

	if (!uFnNPCPlayerVisibilityForLOD)
	{
		uFnNPCPlayerVisibilityForLOD = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCPlayerVisibilityForLOD");
	}

	UDishonoredCheatManager_execNPCPlayerVisibilityForLOD_Params NPCPlayerVisibilityForLOD_Params;
	memset(&NPCPlayerVisibilityForLOD_Params, 0, sizeof(NPCPlayerVisibilityForLOD_Params));
	memcpy_s(&NPCPlayerVisibilityForLOD_Params._iNPCVisibility, sizeof(NPCPlayerVisibilityForLOD_Params._iNPCVisibility), &_iNPCVisibility, sizeof(_iNPCVisibility));

	this->ProcessEvent(uFnNPCPlayerVisibilityForLOD, &NPCPlayerVisibilityForLOD_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCToggleLODSystem
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43834])
// Parameter Info:

void UDishonoredCheatManager::NPCToggleLODSystem()
{
	static UFunction* uFnNPCToggleLODSystem = nullptr;

	if (!uFnNPCToggleLODSystem)
	{
		uFnNPCToggleLODSystem = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCToggleLODSystem");
	}

	UDishonoredCheatManager_execNPCToggleLODSystem_Params NPCToggleLODSystem_Params;
	memset(&NPCToggleLODSystem_Params, 0, sizeof(NPCToggleLODSystem_Params));

	this->ProcessEvent(uFnNPCToggleLODSystem, &NPCToggleLODSystem_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCClearForcedLOD
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43805])
// Parameter Info:

void UDishonoredCheatManager::NPCClearForcedLOD()
{
	static UFunction* uFnNPCClearForcedLOD = nullptr;

	if (!uFnNPCClearForcedLOD)
	{
		uFnNPCClearForcedLOD = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCClearForcedLOD");
	}

	UDishonoredCheatManager_execNPCClearForcedLOD_Params NPCClearForcedLOD_Params;
	memset(&NPCClearForcedLOD_Params, 0, sizeof(NPCClearForcedLOD_Params));

	this->ProcessEvent(uFnNPCClearForcedLOD, &NPCClearForcedLOD_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCForceLODForAll
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[43818])
// Parameter Info:
// EeDisLODStatus                 _LodStatus                     (CPF_Parm)
// int32_t                        _iLodDistance                  (CPF_OptionalParm | CPF_Parm)
// int32_t                        _iNPCForcedRendered            (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::NPCForceLODForAll(EeDisLODStatus _LodStatus, int32_t _iLodDistance, int32_t _iNPCForcedRendered)
{
	static UFunction* uFnNPCForceLODForAll = nullptr;

	if (!uFnNPCForceLODForAll)
	{
		uFnNPCForceLODForAll = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCForceLODForAll");
	}

	UDishonoredCheatManager_execNPCForceLODForAll_Params NPCForceLODForAll_Params;
	memset(&NPCForceLODForAll_Params, 0, sizeof(NPCForceLODForAll_Params));
	memcpy_s(&NPCForceLODForAll_Params._LodStatus, sizeof(NPCForceLODForAll_Params._LodStatus), &_LodStatus, sizeof(_LodStatus));
	memcpy_s(&NPCForceLODForAll_Params._iLodDistance, sizeof(NPCForceLODForAll_Params._iLodDistance), &_iLodDistance, sizeof(_iLodDistance));
	memcpy_s(&NPCForceLODForAll_Params._iNPCForcedRendered, sizeof(NPCForceLODForAll_Params._iNPCForcedRendered), &_iNPCForcedRendered, sizeof(_iNPCForcedRendered));

	this->ProcessEvent(uFnNPCForceLODForAll, &NPCForceLODForAll_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCForceLOD
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[43817])
// Parameter Info:
// EeDisLODStatus                 _LodStatus                     (CPF_Parm)
// int32_t                        _iLodDistance                  (CPF_OptionalParm | CPF_Parm)
// int32_t                        _iNPCForcedRendered            (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::NPCForceLOD(EeDisLODStatus _LodStatus, int32_t _iLodDistance, int32_t _iNPCForcedRendered)
{
	static UFunction* uFnNPCForceLOD = nullptr;

	if (!uFnNPCForceLOD)
	{
		uFnNPCForceLOD = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCForceLOD");
	}

	UDishonoredCheatManager_execNPCForceLOD_Params NPCForceLOD_Params;
	memset(&NPCForceLOD_Params, 0, sizeof(NPCForceLOD_Params));
	memcpy_s(&NPCForceLOD_Params._LodStatus, sizeof(NPCForceLOD_Params._LodStatus), &_LodStatus, sizeof(_LodStatus));
	memcpy_s(&NPCForceLOD_Params._iLodDistance, sizeof(NPCForceLOD_Params._iLodDistance), &_iLodDistance, sizeof(_iLodDistance));
	memcpy_s(&NPCForceLOD_Params._iNPCForcedRendered, sizeof(NPCForceLOD_Params._iNPCForcedRendered), &_iNPCForcedRendered, sizeof(_iNPCForcedRendered));

	this->ProcessEvent(uFnNPCForceLOD, &NPCForceLOD_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCActionSpineBendingToggle
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43803])
// Parameter Info:

void UDishonoredCheatManager::NPCActionSpineBendingToggle()
{
	static UFunction* uFnNPCActionSpineBendingToggle = nullptr;

	if (!uFnNPCActionSpineBendingToggle)
	{
		uFnNPCActionSpineBendingToggle = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCActionSpineBendingToggle");
	}

	UDishonoredCheatManager_execNPCActionSpineBendingToggle_Params NPCActionSpineBendingToggle_Params;
	memset(&NPCActionSpineBendingToggle_Params, 0, sizeof(NPCActionSpineBendingToggle_Params));

	this->ProcessEvent(uFnNPCActionSpineBendingToggle, &NPCActionSpineBendingToggle_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCTogglePrediction
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43835])
// Parameter Info:

void UDishonoredCheatManager::NPCTogglePrediction()
{
	static UFunction* uFnNPCTogglePrediction = nullptr;

	if (!uFnNPCTogglePrediction)
	{
		uFnNPCTogglePrediction = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCTogglePrediction");
	}

	UDishonoredCheatManager_execNPCTogglePrediction_Params NPCTogglePrediction_Params;
	memset(&NPCTogglePrediction_Params, 0, sizeof(NPCTogglePrediction_Params));

	this->ProcessEvent(uFnNPCTogglePrediction, &NPCTogglePrediction_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCSetFreeze
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43827])
// Parameter Info:
// uint32_t                       _bFreeze                       (CPF_Parm)

void UDishonoredCheatManager::NPCSetFreeze(bool _bFreeze)
{
	static UFunction* uFnNPCSetFreeze = nullptr;

	if (!uFnNPCSetFreeze)
	{
		uFnNPCSetFreeze = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCSetFreeze");
	}

	UDishonoredCheatManager_execNPCSetFreeze_Params NPCSetFreeze_Params;
	memset(&NPCSetFreeze_Params, 0, sizeof(NPCSetFreeze_Params));
	NPCSetFreeze_Params._bFreeze = _bFreeze;

	this->ProcessEvent(uFnNPCSetFreeze, &NPCSetFreeze_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCFreeze
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43820])
// Parameter Info:

void UDishonoredCheatManager::NPCFreeze()
{
	static UFunction* uFnNPCFreeze = nullptr;

	if (!uFnNPCFreeze)
	{
		uFnNPCFreeze = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCFreeze");
	}

	UDishonoredCheatManager_execNPCFreeze_Params NPCFreeze_Params;
	memset(&NPCFreeze_Params, 0, sizeof(NPCFreeze_Params));

	this->ProcessEvent(uFnNPCFreeze, &NPCFreeze_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCForceSkelMeshLOD
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43819])
// Parameter Info:
// int32_t                        iDesiredLevel                  (CPF_Parm)

void UDishonoredCheatManager::NPCForceSkelMeshLOD(int32_t iDesiredLevel)
{
	static UFunction* uFnNPCForceSkelMeshLOD = nullptr;

	if (!uFnNPCForceSkelMeshLOD)
	{
		uFnNPCForceSkelMeshLOD = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCForceSkelMeshLOD");
	}

	UDishonoredCheatManager_execNPCForceSkelMeshLOD_Params NPCForceSkelMeshLOD_Params;
	memset(&NPCForceSkelMeshLOD_Params, 0, sizeof(NPCForceSkelMeshLOD_Params));
	memcpy_s(&NPCForceSkelMeshLOD_Params.iDesiredLevel, sizeof(NPCForceSkelMeshLOD_Params.iDesiredLevel), &iDesiredLevel, sizeof(iDesiredLevel));

	this->ProcessEvent(uFnNPCForceSkelMeshLOD, &NPCForceSkelMeshLOD_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCSlowDeath
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43829])
// Parameter Info:

void UDishonoredCheatManager::NPCSlowDeath()
{
	static UFunction* uFnNPCSlowDeath = nullptr;

	if (!uFnNPCSlowDeath)
	{
		uFnNPCSlowDeath = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCSlowDeath");
	}

	UDishonoredCheatManager_execNPCSlowDeath_Params NPCSlowDeath_Params;
	memset(&NPCSlowDeath_Params, 0, sizeof(NPCSlowDeath_Params));

	this->ProcessEvent(uFnNPCSlowDeath, &NPCSlowDeath_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCToggleSlopeOffset
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43836])
// Parameter Info:

void UDishonoredCheatManager::NPCToggleSlopeOffset()
{
	static UFunction* uFnNPCToggleSlopeOffset = nullptr;

	if (!uFnNPCToggleSlopeOffset)
	{
		uFnNPCToggleSlopeOffset = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCToggleSlopeOffset");
	}

	UDishonoredCheatManager_execNPCToggleSlopeOffset_Params NPCToggleSlopeOffset_Params;
	memset(&NPCToggleSlopeOffset_Params, 0, sizeof(NPCToggleSlopeOffset_Params));

	this->ProcessEvent(uFnNPCToggleSlopeOffset, &NPCToggleSlopeOffset_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCSlap
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43828])
// Parameter Info:
// float                          fDesiredDamage                 (CPF_Parm)

void UDishonoredCheatManager::NPCSlap(float fDesiredDamage)
{
	static UFunction* uFnNPCSlap = nullptr;

	if (!uFnNPCSlap)
	{
		uFnNPCSlap = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCSlap");
	}

	UDishonoredCheatManager_execNPCSlap_Params NPCSlap_Params;
	memset(&NPCSlap_Params, 0, sizeof(NPCSlap_Params));
	memcpy_s(&NPCSlap_Params.fDesiredDamage, sizeof(NPCSlap_Params.fDesiredDamage), &fDesiredDamage, sizeof(fDesiredDamage));

	this->ProcessEvent(uFnNPCSlap, &NPCSlap_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCImpulse
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[43822])
// Parameter Info:
// float                          _fImpulseMagnitude             (CPF_Parm)
// float                          _fTeleportHeight               (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::NPCImpulse(float _fImpulseMagnitude, float _fTeleportHeight)
{
	static UFunction* uFnNPCImpulse = nullptr;

	if (!uFnNPCImpulse)
	{
		uFnNPCImpulse = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCImpulse");
	}

	UDishonoredCheatManager_execNPCImpulse_Params NPCImpulse_Params;
	memset(&NPCImpulse_Params, 0, sizeof(NPCImpulse_Params));
	memcpy_s(&NPCImpulse_Params._fImpulseMagnitude, sizeof(NPCImpulse_Params._fImpulseMagnitude), &_fImpulseMagnitude, sizeof(_fImpulseMagnitude));
	memcpy_s(&NPCImpulse_Params._fTeleportHeight, sizeof(NPCImpulse_Params._fTeleportHeight), &_fTeleportHeight, sizeof(_fTeleportHeight));

	this->ProcessEvent(uFnNPCImpulse, &NPCImpulse_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCKnockdown
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43823])
// Parameter Info:

void UDishonoredCheatManager::NPCKnockdown()
{
	static UFunction* uFnNPCKnockdown = nullptr;

	if (!uFnNPCKnockdown)
	{
		uFnNPCKnockdown = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCKnockdown");
	}

	UDishonoredCheatManager_execNPCKnockdown_Params NPCKnockdown_Params;
	memset(&NPCKnockdown_Params, 0, sizeof(NPCKnockdown_Params));

	this->ProcessEvent(uFnNPCKnockdown, &NPCKnockdown_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCBreakLinkedAction
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43804])
// Parameter Info:

void UDishonoredCheatManager::NPCBreakLinkedAction()
{
	static UFunction* uFnNPCBreakLinkedAction = nullptr;

	if (!uFnNPCBreakLinkedAction)
	{
		uFnNPCBreakLinkedAction = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCBreakLinkedAction");
	}

	UDishonoredCheatManager_execNPCBreakLinkedAction_Params NPCBreakLinkedAction_Params;
	memset(&NPCBreakLinkedAction_Params, 0, sizeof(NPCBreakLinkedAction_Params));

	this->ProcessEvent(uFnNPCBreakLinkedAction, &NPCBreakLinkedAction_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCSetDamage
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43826])
// Parameter Info:
// float                          fDesiredDamage                 (CPF_Parm)

void UDishonoredCheatManager::NPCSetDamage(float fDesiredDamage)
{
	static UFunction* uFnNPCSetDamage = nullptr;

	if (!uFnNPCSetDamage)
	{
		uFnNPCSetDamage = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCSetDamage");
	}

	UDishonoredCheatManager_execNPCSetDamage_Params NPCSetDamage_Params;
	memset(&NPCSetDamage_Params, 0, sizeof(NPCSetDamage_Params));
	memcpy_s(&NPCSetDamage_Params.fDesiredDamage, sizeof(NPCSetDamage_Params.fDesiredDamage), &fDesiredDamage, sizeof(fDesiredDamage));

	this->ProcessEvent(uFnNPCSetDamage, &NPCSetDamage_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCEasyDismemberment
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43815])
// Parameter Info:

void UDishonoredCheatManager::NPCEasyDismemberment()
{
	static UFunction* uFnNPCEasyDismemberment = nullptr;

	if (!uFnNPCEasyDismemberment)
	{
		uFnNPCEasyDismemberment = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCEasyDismemberment");
	}

	UDishonoredCheatManager_execNPCEasyDismemberment_Params NPCEasyDismemberment_Params;
	memset(&NPCEasyDismemberment_Params, 0, sizeof(NPCEasyDismemberment_Params));

	this->ProcessEvent(uFnNPCEasyDismemberment, &NPCEasyDismemberment_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCForceFatality
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43816])
// Parameter Info:

void UDishonoredCheatManager::NPCForceFatality()
{
	static UFunction* uFnNPCForceFatality = nullptr;

	if (!uFnNPCForceFatality)
	{
		uFnNPCForceFatality = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCForceFatality");
	}

	UDishonoredCheatManager_execNPCForceFatality_Params NPCForceFatality_Params;
	memset(&NPCForceFatality_Params, 0, sizeof(NPCForceFatality_Params));

	this->ProcessEvent(uFnNPCForceFatality, &NPCForceFatality_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCTestVersus
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43833])
// Parameter Info:

void UDishonoredCheatManager::NPCTestVersus()
{
	static UFunction* uFnNPCTestVersus = nullptr;

	if (!uFnNPCTestVersus)
	{
		uFnNPCTestVersus = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCTestVersus");
	}

	UDishonoredCheatManager_execNPCTestVersus_Params NPCTestVersus_Params;
	memset(&NPCTestVersus_Params, 0, sizeof(NPCTestVersus_Params));

	this->ProcessEvent(uFnNPCTestVersus, &NPCTestVersus_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCTestParry
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43832])
// Parameter Info:

void UDishonoredCheatManager::NPCTestParry()
{
	static UFunction* uFnNPCTestParry = nullptr;

	if (!uFnNPCTestParry)
	{
		uFnNPCTestParry = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCTestParry");
	}

	UDishonoredCheatManager_execNPCTestParry_Params NPCTestParry_Params;
	memset(&NPCTestParry_Params, 0, sizeof(NPCTestParry_Params));

	this->ProcessEvent(uFnNPCTestParry, &NPCTestParry_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCDodgeNothing
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43811])
// Parameter Info:

void UDishonoredCheatManager::NPCDodgeNothing()
{
	static UFunction* uFnNPCDodgeNothing = nullptr;

	if (!uFnNPCDodgeNothing)
	{
		uFnNPCDodgeNothing = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCDodgeNothing");
	}

	UDishonoredCheatManager_execNPCDodgeNothing_Params NPCDodgeNothing_Params;
	memset(&NPCDodgeNothing_Params, 0, sizeof(NPCDodgeNothing_Params));

	this->ProcessEvent(uFnNPCDodgeNothing, &NPCDodgeNothing_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCDodgeEverything
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43810])
// Parameter Info:

void UDishonoredCheatManager::NPCDodgeEverything()
{
	static UFunction* uFnNPCDodgeEverything = nullptr;

	if (!uFnNPCDodgeEverything)
	{
		uFnNPCDodgeEverything = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCDodgeEverything");
	}

	UDishonoredCheatManager_execNPCDodgeEverything_Params NPCDodgeEverything_Params;
	memset(&NPCDodgeEverything_Params, 0, sizeof(NPCDodgeEverything_Params));

	this->ProcessEvent(uFnNPCDodgeEverything, &NPCDodgeEverything_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCDestroyNonVisible
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43809])
// Parameter Info:

void UDishonoredCheatManager::NPCDestroyNonVisible()
{
	static UFunction* uFnNPCDestroyNonVisible = nullptr;

	if (!uFnNPCDestroyNonVisible)
	{
		uFnNPCDestroyNonVisible = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCDestroyNonVisible");
	}

	UDishonoredCheatManager_execNPCDestroyNonVisible_Params NPCDestroyNonVisible_Params;
	memset(&NPCDestroyNonVisible_Params, 0, sizeof(NPCDestroyNonVisible_Params));

	this->ProcessEvent(uFnNPCDestroyNonVisible, &NPCDestroyNonVisible_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCDestroyNonSelected
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43808])
// Parameter Info:

void UDishonoredCheatManager::NPCDestroyNonSelected()
{
	static UFunction* uFnNPCDestroyNonSelected = nullptr;

	if (!uFnNPCDestroyNonSelected)
	{
		uFnNPCDestroyNonSelected = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCDestroyNonSelected");
	}

	UDishonoredCheatManager_execNPCDestroyNonSelected_Params NPCDestroyNonSelected_Params;
	memset(&NPCDestroyNonSelected_Params, 0, sizeof(NPCDestroyNonSelected_Params));

	this->ProcessEvent(uFnNPCDestroyNonSelected, &NPCDestroyNonSelected_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NPCDestroy
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43807])
// Parameter Info:

void UDishonoredCheatManager::NPCDestroy()
{
	static UFunction* uFnNPCDestroy = nullptr;

	if (!uFnNPCDestroy)
	{
		uFnNPCDestroy = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NPCDestroy");
	}

	UDishonoredCheatManager_execNPCDestroy_Params NPCDestroy_Params;
	memset(&NPCDestroy_Params, 0, sizeof(NPCDestroy_Params));

	this->ProcessEvent(uFnNPCDestroy, &NPCDestroy_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.GodNPC
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35384])
// Parameter Info:

void UDishonoredCheatManager::GodNPC()
{
	static UFunction* uFnGodNPC = nullptr;

	if (!uFnGodNPC)
	{
		uFnGodNPC = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.GodNPC");
	}

	UDishonoredCheatManager_execGodNPC_Params GodNPC_Params;
	memset(&GodNPC_Params, 0, sizeof(GodNPC_Params));

	this->ProcessEvent(uFnGodNPC, &GodNPC_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.NavMeshCheck
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43773])
// Parameter Info:

void UDishonoredCheatManager::NavMeshCheck()
{
	static UFunction* uFnNavMeshCheck = nullptr;

	if (!uFnNavMeshCheck)
	{
		uFnNavMeshCheck = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.NavMeshCheck");
	}

	UDishonoredCheatManager_execNavMeshCheck_Params NavMeshCheck_Params;
	memset(&NavMeshCheck_Params, 0, sizeof(NavMeshCheck_Params));

	this->ProcessEvent(uFnNavMeshCheck, &NavMeshCheck_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.MatGoBackward
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43649])
// Parameter Info:

void UDishonoredCheatManager::MatGoBackward()
{
	static UFunction* uFnMatGoBackward = nullptr;

	if (!uFnMatGoBackward)
	{
		uFnMatGoBackward = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.MatGoBackward");
	}

	UDishonoredCheatManager_execMatGoBackward_Params MatGoBackward_Params;
	memset(&MatGoBackward_Params, 0, sizeof(MatGoBackward_Params));

	this->ProcessEvent(uFnMatGoBackward, &MatGoBackward_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.MatGoForward
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43650])
// Parameter Info:

void UDishonoredCheatManager::MatGoForward()
{
	static UFunction* uFnMatGoForward = nullptr;

	if (!uFnMatGoForward)
	{
		uFnMatGoForward = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.MatGoForward");
	}

	UDishonoredCheatManager_execMatGoForward_Params MatGoForward_Params;
	memset(&MatGoForward_Params, 0, sizeof(MatGoForward_Params));

	this->ProcessEvent(uFnMatGoForward, &MatGoForward_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.LocoTeleport
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35784])
// Parameter Info:

void UDishonoredCheatManager::LocoTeleport()
{
	static UFunction* uFnLocoTeleport = nullptr;

	if (!uFnLocoTeleport)
	{
		uFnLocoTeleport = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.LocoTeleport");
	}

	UDishonoredCheatManager_execLocoTeleport_Params LocoTeleport_Params;
	memset(&LocoTeleport_Params, 0, sizeof(LocoTeleport_Params));

	this->ProcessEvent(uFnLocoTeleport, &LocoTeleport_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.LocoShowPathAndStraightPath
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35782])
// Parameter Info:

void UDishonoredCheatManager::LocoShowPathAndStraightPath()
{
	static UFunction* uFnLocoShowPathAndStraightPath = nullptr;

	if (!uFnLocoShowPathAndStraightPath)
	{
		uFnLocoShowPathAndStraightPath = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.LocoShowPathAndStraightPath");
	}

	UDishonoredCheatManager_execLocoShowPathAndStraightPath_Params LocoShowPathAndStraightPath_Params;
	memset(&LocoShowPathAndStraightPath_Params, 0, sizeof(LocoShowPathAndStraightPath_Params));

	this->ProcessEvent(uFnLocoShowPathAndStraightPath, &LocoShowPathAndStraightPath_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.LocoShowAvoidance
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35781])
// Parameter Info:

void UDishonoredCheatManager::LocoShowAvoidance()
{
	static UFunction* uFnLocoShowAvoidance = nullptr;

	if (!uFnLocoShowAvoidance)
	{
		uFnLocoShowAvoidance = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.LocoShowAvoidance");
	}

	UDishonoredCheatManager_execLocoShowAvoidance_Params LocoShowAvoidance_Params;
	memset(&LocoShowAvoidance_Params, 0, sizeof(LocoShowAvoidance_Params));

	this->ProcessEvent(uFnLocoShowAvoidance, &LocoShowAvoidance_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.LocoNewPhysWalking
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35780])
// Parameter Info:

void UDishonoredCheatManager::LocoNewPhysWalking()
{
	static UFunction* uFnLocoNewPhysWalking = nullptr;

	if (!uFnLocoNewPhysWalking)
	{
		uFnLocoNewPhysWalking = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.LocoNewPhysWalking");
	}

	UDishonoredCheatManager_execLocoNewPhysWalking_Params LocoNewPhysWalking_Params;
	memset(&LocoNewPhysWalking_Params, 0, sizeof(LocoNewPhysWalking_Params));

	this->ProcessEvent(uFnLocoNewPhysWalking, &LocoNewPhysWalking_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.LocoNewIK
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35779])
// Parameter Info:

void UDishonoredCheatManager::LocoNewIK()
{
	static UFunction* uFnLocoNewIK = nullptr;

	if (!uFnLocoNewIK)
	{
		uFnLocoNewIK = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.LocoNewIK");
	}

	UDishonoredCheatManager_execLocoNewIK_Params LocoNewIK_Params;
	memset(&LocoNewIK_Params, 0, sizeof(LocoNewIK_Params));

	this->ProcessEvent(uFnLocoNewIK, &LocoNewIK_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.LocoNewAvoidance
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35778])
// Parameter Info:

void UDishonoredCheatManager::LocoNewAvoidance()
{
	static UFunction* uFnLocoNewAvoidance = nullptr;

	if (!uFnLocoNewAvoidance)
	{
		uFnLocoNewAvoidance = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.LocoNewAvoidance");
	}

	UDishonoredCheatManager_execLocoNewAvoidance_Params LocoNewAvoidance_Params;
	memset(&LocoNewAvoidance_Params, 0, sizeof(LocoNewAvoidance_Params));

	this->ProcessEvent(uFnLocoNewAvoidance, &LocoNewAvoidance_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.LocoForceUnaccuracy
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35776])
// Parameter Info:

void UDishonoredCheatManager::LocoForceUnaccuracy()
{
	static UFunction* uFnLocoForceUnaccuracy = nullptr;

	if (!uFnLocoForceUnaccuracy)
	{
		uFnLocoForceUnaccuracy = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.LocoForceUnaccuracy");
	}

	UDishonoredCheatManager_execLocoForceUnaccuracy_Params LocoForceUnaccuracy_Params;
	memset(&LocoForceUnaccuracy_Params, 0, sizeof(LocoForceUnaccuracy_Params));

	this->ProcessEvent(uFnLocoForceUnaccuracy, &LocoForceUnaccuracy_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.LocoForceModifier
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35775])
// Parameter Info:
// int32_t                        _Modifier                      (CPF_Parm)

void UDishonoredCheatManager::LocoForceModifier(int32_t _Modifier)
{
	static UFunction* uFnLocoForceModifier = nullptr;

	if (!uFnLocoForceModifier)
	{
		uFnLocoForceModifier = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.LocoForceModifier");
	}

	UDishonoredCheatManager_execLocoForceModifier_Params LocoForceModifier_Params;
	memset(&LocoForceModifier_Params, 0, sizeof(LocoForceModifier_Params));
	memcpy_s(&LocoForceModifier_Params._Modifier, sizeof(LocoForceModifier_Params._Modifier), &_Modifier, sizeof(_Modifier));

	this->ProcessEvent(uFnLocoForceModifier, &LocoForceModifier_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.LocoForceLookAtMode
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35774])
// Parameter Info:
// int32_t                        _LookAtMode                    (CPF_Parm)

void UDishonoredCheatManager::LocoForceLookAtMode(int32_t _LookAtMode)
{
	static UFunction* uFnLocoForceLookAtMode = nullptr;

	if (!uFnLocoForceLookAtMode)
	{
		uFnLocoForceLookAtMode = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.LocoForceLookAtMode");
	}

	UDishonoredCheatManager_execLocoForceLookAtMode_Params LocoForceLookAtMode_Params;
	memset(&LocoForceLookAtMode_Params, 0, sizeof(LocoForceLookAtMode_Params));
	memcpy_s(&LocoForceLookAtMode_Params._LookAtMode, sizeof(LocoForceLookAtMode_Params._LookAtMode), &_LookAtMode, sizeof(_LookAtMode));

	this->ProcessEvent(uFnLocoForceLookAtMode, &LocoForceLookAtMode_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.LocoForceIdleAnim
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35773])
// Parameter Info:

void UDishonoredCheatManager::LocoForceIdleAnim()
{
	static UFunction* uFnLocoForceIdleAnim = nullptr;

	if (!uFnLocoForceIdleAnim)
	{
		uFnLocoForceIdleAnim = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.LocoForceIdleAnim");
	}

	UDishonoredCheatManager_execLocoForceIdleAnim_Params LocoForceIdleAnim_Params;
	memset(&LocoForceIdleAnim_Params, 0, sizeof(LocoForceIdleAnim_Params));

	this->ProcessEvent(uFnLocoForceIdleAnim, &LocoForceIdleAnim_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.LocoDontRotate
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35772])
// Parameter Info:

void UDishonoredCheatManager::LocoDontRotate()
{
	static UFunction* uFnLocoDontRotate = nullptr;

	if (!uFnLocoDontRotate)
	{
		uFnLocoDontRotate = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.LocoDontRotate");
	}

	UDishonoredCheatManager_execLocoDontRotate_Params LocoDontRotate_Params;
	memset(&LocoDontRotate_Params, 0, sizeof(LocoDontRotate_Params));

	this->ProcessEvent(uFnLocoDontRotate, &LocoDontRotate_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.LocoDisableStartAnims
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35771])
// Parameter Info:

void UDishonoredCheatManager::LocoDisableStartAnims()
{
	static UFunction* uFnLocoDisableStartAnims = nullptr;

	if (!uFnLocoDisableStartAnims)
	{
		uFnLocoDisableStartAnims = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.LocoDisableStartAnims");
	}

	UDishonoredCheatManager_execLocoDisableStartAnims_Params LocoDisableStartAnims_Params;
	memset(&LocoDisableStartAnims_Params, 0, sizeof(LocoDisableStartAnims_Params));

	this->ProcessEvent(uFnLocoDisableStartAnims, &LocoDisableStartAnims_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIUseSimpleAttentionForPlayer
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30438])
// Parameter Info:

void UDishonoredCheatManager::AIUseSimpleAttentionForPlayer()
{
	static UFunction* uFnAIUseSimpleAttentionForPlayer = nullptr;

	if (!uFnAIUseSimpleAttentionForPlayer)
	{
		uFnAIUseSimpleAttentionForPlayer = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIUseSimpleAttentionForPlayer");
	}

	UDishonoredCheatManager_execAIUseSimpleAttentionForPlayer_Params AIUseSimpleAttentionForPlayer_Params;
	memset(&AIUseSimpleAttentionForPlayer_Params, 0, sizeof(AIUseSimpleAttentionForPlayer_Params));

	this->ProcessEvent(uFnAIUseSimpleAttentionForPlayer, &AIUseSimpleAttentionForPlayer_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIEnableAllSubStates
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30230])
// Parameter Info:

void UDishonoredCheatManager::AIEnableAllSubStates()
{
	static UFunction* uFnAIEnableAllSubStates = nullptr;

	if (!uFnAIEnableAllSubStates)
	{
		uFnAIEnableAllSubStates = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIEnableAllSubStates");
	}

	UDishonoredCheatManager_execAIEnableAllSubStates_Params AIEnableAllSubStates_Params;
	memset(&AIEnableAllSubStates_Params, 0, sizeof(AIEnableAllSubStates_Params));

	this->ProcessEvent(uFnAIEnableAllSubStates, &AIEnableAllSubStates_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIDisableSubState
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30212])
// Parameter Info:
// class FString                  _rSubStateName                 (CPF_Parm | CPF_NeedCtorLink)

void UDishonoredCheatManager::AIDisableSubState(const class FString& _rSubStateName)
{
	static UFunction* uFnAIDisableSubState = nullptr;

	if (!uFnAIDisableSubState)
	{
		uFnAIDisableSubState = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIDisableSubState");
	}

	UDishonoredCheatManager_execAIDisableSubState_Params AIDisableSubState_Params;
	memset(&AIDisableSubState_Params, 0, sizeof(AIDisableSubState_Params));
	memcpy_s(&AIDisableSubState_Params._rSubStateName, sizeof(AIDisableSubState_Params._rSubStateName), &_rSubStateName, sizeof(_rSubStateName));

	this->ProcessEvent(uFnAIDisableSubState, &AIDisableSubState_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIEnableSubState
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30232])
// Parameter Info:
// class FString                  _rSubStateName                 (CPF_Parm | CPF_NeedCtorLink)

void UDishonoredCheatManager::AIEnableSubState(const class FString& _rSubStateName)
{
	static UFunction* uFnAIEnableSubState = nullptr;

	if (!uFnAIEnableSubState)
	{
		uFnAIEnableSubState = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIEnableSubState");
	}

	UDishonoredCheatManager_execAIEnableSubState_Params AIEnableSubState_Params;
	memset(&AIEnableSubState_Params, 0, sizeof(AIEnableSubState_Params));
	memcpy_s(&AIEnableSubState_Params._rSubStateName, sizeof(AIEnableSubState_Params._rSubStateName), &_rSubStateName, sizeof(_rSubStateName));

	this->ProcessEvent(uFnAIEnableSubState, &AIEnableSubState_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIEnableAllBehaviors
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30229])
// Parameter Info:

void UDishonoredCheatManager::AIEnableAllBehaviors()
{
	static UFunction* uFnAIEnableAllBehaviors = nullptr;

	if (!uFnAIEnableAllBehaviors)
	{
		uFnAIEnableAllBehaviors = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIEnableAllBehaviors");
	}

	UDishonoredCheatManager_execAIEnableAllBehaviors_Params AIEnableAllBehaviors_Params;
	memset(&AIEnableAllBehaviors_Params, 0, sizeof(AIEnableAllBehaviors_Params));

	this->ProcessEvent(uFnAIEnableAllBehaviors, &AIEnableAllBehaviors_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIDisableBehavior
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30211])
// Parameter Info:
// class FString                  _rBehaviorName                 (CPF_Parm | CPF_NeedCtorLink)

void UDishonoredCheatManager::AIDisableBehavior(const class FString& _rBehaviorName)
{
	static UFunction* uFnAIDisableBehavior = nullptr;

	if (!uFnAIDisableBehavior)
	{
		uFnAIDisableBehavior = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIDisableBehavior");
	}

	UDishonoredCheatManager_execAIDisableBehavior_Params AIDisableBehavior_Params;
	memset(&AIDisableBehavior_Params, 0, sizeof(AIDisableBehavior_Params));
	memcpy_s(&AIDisableBehavior_Params._rBehaviorName, sizeof(AIDisableBehavior_Params._rBehaviorName), &_rBehaviorName, sizeof(_rBehaviorName));

	this->ProcessEvent(uFnAIDisableBehavior, &AIDisableBehavior_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIEnableBehavior
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30231])
// Parameter Info:
// class FString                  _rBehaviorName                 (CPF_Parm | CPF_NeedCtorLink)

void UDishonoredCheatManager::AIEnableBehavior(const class FString& _rBehaviorName)
{
	static UFunction* uFnAIEnableBehavior = nullptr;

	if (!uFnAIEnableBehavior)
	{
		uFnAIEnableBehavior = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIEnableBehavior");
	}

	UDishonoredCheatManager_execAIEnableBehavior_Params AIEnableBehavior_Params;
	memset(&AIEnableBehavior_Params, 0, sizeof(AIEnableBehavior_Params));
	memcpy_s(&AIEnableBehavior_Params._rBehaviorName, sizeof(AIEnableBehavior_Params._rBehaviorName), &_rBehaviorName, sizeof(_rBehaviorName));

	this->ProcessEvent(uFnAIEnableBehavior, &AIEnableBehavior_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIShowThoughts
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[30316])
// Parameter Info:
// float                          _fRadius                       (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::AIShowThoughts(float _fRadius)
{
	static UFunction* uFnAIShowThoughts = nullptr;

	if (!uFnAIShowThoughts)
	{
		uFnAIShowThoughts = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIShowThoughts");
	}

	UDishonoredCheatManager_execAIShowThoughts_Params AIShowThoughts_Params;
	memset(&AIShowThoughts_Params, 0, sizeof(AIShowThoughts_Params));
	memcpy_s(&AIShowThoughts_Params._fRadius, sizeof(AIShowThoughts_Params._fRadius), &_fRadius, sizeof(_fRadius));

	this->ProcessEvent(uFnAIShowThoughts, &AIShowThoughts_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AISetNumbToAIs
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30303])
// Parameter Info:
// uint32_t                       _bNumb                         (CPF_Parm)

void UDishonoredCheatManager::AISetNumbToAIs(bool _bNumb)
{
	static UFunction* uFnAISetNumbToAIs = nullptr;

	if (!uFnAISetNumbToAIs)
	{
		uFnAISetNumbToAIs = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AISetNumbToAIs");
	}

	UDishonoredCheatManager_execAISetNumbToAIs_Params AISetNumbToAIs_Params;
	memset(&AISetNumbToAIs_Params, 0, sizeof(AISetNumbToAIs_Params));
	AISetNumbToAIs_Params._bNumb = _bNumb;

	this->ProcessEvent(uFnAISetNumbToAIs, &AISetNumbToAIs_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AINumbToAIs
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30277])
// Parameter Info:

void UDishonoredCheatManager::AINumbToAIs()
{
	static UFunction* uFnAINumbToAIs = nullptr;

	if (!uFnAINumbToAIs)
	{
		uFnAINumbToAIs = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AINumbToAIs");
	}

	UDishonoredCheatManager_execAINumbToAIs_Params AINumbToAIs_Params;
	memset(&AINumbToAIs_Params, 0, sizeof(AINumbToAIs_Params));

	this->ProcessEvent(uFnAINumbToAIs, &AINumbToAIs_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AISetDeafToAIs
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30297])
// Parameter Info:
// uint32_t                       _bDeaf                         (CPF_Parm)

void UDishonoredCheatManager::AISetDeafToAIs(bool _bDeaf)
{
	static UFunction* uFnAISetDeafToAIs = nullptr;

	if (!uFnAISetDeafToAIs)
	{
		uFnAISetDeafToAIs = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AISetDeafToAIs");
	}

	UDishonoredCheatManager_execAISetDeafToAIs_Params AISetDeafToAIs_Params;
	memset(&AISetDeafToAIs_Params, 0, sizeof(AISetDeafToAIs_Params));
	AISetDeafToAIs_Params._bDeaf = _bDeaf;

	this->ProcessEvent(uFnAISetDeafToAIs, &AISetDeafToAIs_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIDeafToAIs
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30208])
// Parameter Info:

void UDishonoredCheatManager::AIDeafToAIs()
{
	static UFunction* uFnAIDeafToAIs = nullptr;

	if (!uFnAIDeafToAIs)
	{
		uFnAIDeafToAIs = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIDeafToAIs");
	}

	UDishonoredCheatManager_execAIDeafToAIs_Params AIDeafToAIs_Params;
	memset(&AIDeafToAIs_Params, 0, sizeof(AIDeafToAIs_Params));

	this->ProcessEvent(uFnAIDeafToAIs, &AIDeafToAIs_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AISetBlindToAIs
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30294])
// Parameter Info:
// uint32_t                       _bBlind                        (CPF_Parm)

void UDishonoredCheatManager::AISetBlindToAIs(bool _bBlind)
{
	static UFunction* uFnAISetBlindToAIs = nullptr;

	if (!uFnAISetBlindToAIs)
	{
		uFnAISetBlindToAIs = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AISetBlindToAIs");
	}

	UDishonoredCheatManager_execAISetBlindToAIs_Params AISetBlindToAIs_Params;
	memset(&AISetBlindToAIs_Params, 0, sizeof(AISetBlindToAIs_Params));
	AISetBlindToAIs_Params._bBlind = _bBlind;

	this->ProcessEvent(uFnAISetBlindToAIs, &AISetBlindToAIs_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIBlindToAIs
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30181])
// Parameter Info:

void UDishonoredCheatManager::AIBlindToAIs()
{
	static UFunction* uFnAIBlindToAIs = nullptr;

	if (!uFnAIBlindToAIs)
	{
		uFnAIBlindToAIs = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIBlindToAIs");
	}

	UDishonoredCheatManager_execAIBlindToAIs_Params AIBlindToAIs_Params;
	memset(&AIBlindToAIs_Params, 0, sizeof(AIBlindToAIs_Params));

	this->ProcessEvent(uFnAIBlindToAIs, &AIBlindToAIs_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AISetDumbToAIs
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30300])
// Parameter Info:
// uint32_t                       _bDumb                         (CPF_Parm)

void UDishonoredCheatManager::AISetDumbToAIs(bool _bDumb)
{
	static UFunction* uFnAISetDumbToAIs = nullptr;

	if (!uFnAISetDumbToAIs)
	{
		uFnAISetDumbToAIs = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AISetDumbToAIs");
	}

	UDishonoredCheatManager_execAISetDumbToAIs_Params AISetDumbToAIs_Params;
	memset(&AISetDumbToAIs_Params, 0, sizeof(AISetDumbToAIs_Params));
	AISetDumbToAIs_Params._bDumb = _bDumb;

	this->ProcessEvent(uFnAISetDumbToAIs, &AISetDumbToAIs_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIDumbToAIs
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30226])
// Parameter Info:

void UDishonoredCheatManager::AIDumbToAIs()
{
	static UFunction* uFnAIDumbToAIs = nullptr;

	if (!uFnAIDumbToAIs)
	{
		uFnAIDumbToAIs = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIDumbToAIs");
	}

	UDishonoredCheatManager_execAIDumbToAIs_Params AIDumbToAIs_Params;
	memset(&AIDumbToAIs_Params, 0, sizeof(AIDumbToAIs_Params));

	this->ProcessEvent(uFnAIDumbToAIs, &AIDumbToAIs_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AISetNumbToPlayer
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30304])
// Parameter Info:
// uint32_t                       _bNumb                         (CPF_Parm)

void UDishonoredCheatManager::AISetNumbToPlayer(bool _bNumb)
{
	static UFunction* uFnAISetNumbToPlayer = nullptr;

	if (!uFnAISetNumbToPlayer)
	{
		uFnAISetNumbToPlayer = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AISetNumbToPlayer");
	}

	UDishonoredCheatManager_execAISetNumbToPlayer_Params AISetNumbToPlayer_Params;
	memset(&AISetNumbToPlayer_Params, 0, sizeof(AISetNumbToPlayer_Params));
	AISetNumbToPlayer_Params._bNumb = _bNumb;

	this->ProcessEvent(uFnAISetNumbToPlayer, &AISetNumbToPlayer_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AINumbToPlayer
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30278])
// Parameter Info:

void UDishonoredCheatManager::AINumbToPlayer()
{
	static UFunction* uFnAINumbToPlayer = nullptr;

	if (!uFnAINumbToPlayer)
	{
		uFnAINumbToPlayer = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AINumbToPlayer");
	}

	UDishonoredCheatManager_execAINumbToPlayer_Params AINumbToPlayer_Params;
	memset(&AINumbToPlayer_Params, 0, sizeof(AINumbToPlayer_Params));

	this->ProcessEvent(uFnAINumbToPlayer, &AINumbToPlayer_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AISetDeafToPlayer
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30298])
// Parameter Info:
// uint32_t                       _bDeaf                         (CPF_Parm)

void UDishonoredCheatManager::AISetDeafToPlayer(bool _bDeaf)
{
	static UFunction* uFnAISetDeafToPlayer = nullptr;

	if (!uFnAISetDeafToPlayer)
	{
		uFnAISetDeafToPlayer = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AISetDeafToPlayer");
	}

	UDishonoredCheatManager_execAISetDeafToPlayer_Params AISetDeafToPlayer_Params;
	memset(&AISetDeafToPlayer_Params, 0, sizeof(AISetDeafToPlayer_Params));
	AISetDeafToPlayer_Params._bDeaf = _bDeaf;

	this->ProcessEvent(uFnAISetDeafToPlayer, &AISetDeafToPlayer_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIDeafToPlayer
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30209])
// Parameter Info:

void UDishonoredCheatManager::AIDeafToPlayer()
{
	static UFunction* uFnAIDeafToPlayer = nullptr;

	if (!uFnAIDeafToPlayer)
	{
		uFnAIDeafToPlayer = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIDeafToPlayer");
	}

	UDishonoredCheatManager_execAIDeafToPlayer_Params AIDeafToPlayer_Params;
	memset(&AIDeafToPlayer_Params, 0, sizeof(AIDeafToPlayer_Params));

	this->ProcessEvent(uFnAIDeafToPlayer, &AIDeafToPlayer_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AISetBlindToPlayer
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30295])
// Parameter Info:
// uint32_t                       _bBlind                        (CPF_Parm)

void UDishonoredCheatManager::AISetBlindToPlayer(bool _bBlind)
{
	static UFunction* uFnAISetBlindToPlayer = nullptr;

	if (!uFnAISetBlindToPlayer)
	{
		uFnAISetBlindToPlayer = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AISetBlindToPlayer");
	}

	UDishonoredCheatManager_execAISetBlindToPlayer_Params AISetBlindToPlayer_Params;
	memset(&AISetBlindToPlayer_Params, 0, sizeof(AISetBlindToPlayer_Params));
	AISetBlindToPlayer_Params._bBlind = _bBlind;

	this->ProcessEvent(uFnAISetBlindToPlayer, &AISetBlindToPlayer_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIBlindToPlayer
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30182])
// Parameter Info:

void UDishonoredCheatManager::AIBlindToPlayer()
{
	static UFunction* uFnAIBlindToPlayer = nullptr;

	if (!uFnAIBlindToPlayer)
	{
		uFnAIBlindToPlayer = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIBlindToPlayer");
	}

	UDishonoredCheatManager_execAIBlindToPlayer_Params AIBlindToPlayer_Params;
	memset(&AIBlindToPlayer_Params, 0, sizeof(AIBlindToPlayer_Params));

	this->ProcessEvent(uFnAIBlindToPlayer, &AIBlindToPlayer_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AISetDumbToPlayer
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30301])
// Parameter Info:
// uint32_t                       _bDumb                         (CPF_Parm)

void UDishonoredCheatManager::AISetDumbToPlayer(bool _bDumb)
{
	static UFunction* uFnAISetDumbToPlayer = nullptr;

	if (!uFnAISetDumbToPlayer)
	{
		uFnAISetDumbToPlayer = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AISetDumbToPlayer");
	}

	UDishonoredCheatManager_execAISetDumbToPlayer_Params AISetDumbToPlayer_Params;
	memset(&AISetDumbToPlayer_Params, 0, sizeof(AISetDumbToPlayer_Params));
	AISetDumbToPlayer_Params._bDumb = _bDumb;

	this->ProcessEvent(uFnAISetDumbToPlayer, &AISetDumbToPlayer_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIDumbToPlayer
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30227])
// Parameter Info:

void UDishonoredCheatManager::AIDumbToPlayer()
{
	static UFunction* uFnAIDumbToPlayer = nullptr;

	if (!uFnAIDumbToPlayer)
	{
		uFnAIDumbToPlayer = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIDumbToPlayer");
	}

	UDishonoredCheatManager_execAIDumbToPlayer_Params AIDumbToPlayer_Params;
	memset(&AIDumbToPlayer_Params, 0, sizeof(AIDumbToPlayer_Params));

	this->ProcessEvent(uFnAIDumbToPlayer, &AIDumbToPlayer_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIForceAttentionLevelOff
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30234])
// Parameter Info:

void UDishonoredCheatManager::AIForceAttentionLevelOff()
{
	static UFunction* uFnAIForceAttentionLevelOff = nullptr;

	if (!uFnAIForceAttentionLevelOff)
	{
		uFnAIForceAttentionLevelOff = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIForceAttentionLevelOff");
	}

	UDishonoredCheatManager_execAIForceAttentionLevelOff_Params AIForceAttentionLevelOff_Params;
	memset(&AIForceAttentionLevelOff_Params, 0, sizeof(AIForceAttentionLevelOff_Params));

	this->ProcessEvent(uFnAIForceAttentionLevelOff, &AIForceAttentionLevelOff_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIForceAttentionLevel
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[30233])
// Parameter Info:
// EDisAttentionLevel             _AttentionLevel                (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::AIForceAttentionLevel(EDisAttentionLevel _AttentionLevel)
{
	static UFunction* uFnAIForceAttentionLevel = nullptr;

	if (!uFnAIForceAttentionLevel)
	{
		uFnAIForceAttentionLevel = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIForceAttentionLevel");
	}

	UDishonoredCheatManager_execAIForceAttentionLevel_Params AIForceAttentionLevel_Params;
	memset(&AIForceAttentionLevel_Params, 0, sizeof(AIForceAttentionLevel_Params));
	memcpy_s(&AIForceAttentionLevel_Params._AttentionLevel, sizeof(AIForceAttentionLevel_Params._AttentionLevel), &_AttentionLevel, sizeof(_AttentionLevel));

	this->ProcessEvent(uFnAIForceAttentionLevel, &AIForceAttentionLevel_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIClearAttention
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30204])
// Parameter Info:

void UDishonoredCheatManager::AIClearAttention()
{
	static UFunction* uFnAIClearAttention = nullptr;

	if (!uFnAIClearAttention)
	{
		uFnAIClearAttention = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIClearAttention");
	}

	UDishonoredCheatManager_execAIClearAttention_Params AIClearAttention_Params;
	memset(&AIClearAttention_Params, 0, sizeof(AIClearAttention_Params));

	this->ProcessEvent(uFnAIClearAttention, &AIClearAttention_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIForcePanicNow
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30236])
// Parameter Info:

void UDishonoredCheatManager::AIForcePanicNow()
{
	static UFunction* uFnAIForcePanicNow = nullptr;

	if (!uFnAIForcePanicNow)
	{
		uFnAIForcePanicNow = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIForcePanicNow");
	}

	UDishonoredCheatManager_execAIForcePanicNow_Params AIForcePanicNow_Params;
	memset(&AIForcePanicNow_Params, 0, sizeof(AIForcePanicNow_Params));

	this->ProcessEvent(uFnAIForcePanicNow, &AIForcePanicNow_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIForcePanic
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30235])
// Parameter Info:

void UDishonoredCheatManager::AIForcePanic()
{
	static UFunction* uFnAIForcePanic = nullptr;

	if (!uFnAIForcePanic)
	{
		uFnAIForcePanic = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIForcePanic");
	}

	UDishonoredCheatManager_execAIForcePanic_Params AIForcePanic_Params;
	memset(&AIForcePanic_Params, 0, sizeof(AIForcePanic_Params));

	this->ProcessEvent(uFnAIForcePanic, &AIForcePanic_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIRegisterAllHideouts
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30290])
// Parameter Info:

void UDishonoredCheatManager::AIRegisterAllHideouts()
{
	static UFunction* uFnAIRegisterAllHideouts = nullptr;

	if (!uFnAIRegisterAllHideouts)
	{
		uFnAIRegisterAllHideouts = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIRegisterAllHideouts");
	}

	UDishonoredCheatManager_execAIRegisterAllHideouts_Params AIRegisterAllHideouts_Params;
	memset(&AIRegisterAllHideouts_Params, 0, sizeof(AIRegisterAllHideouts_Params));

	this->ProcessEvent(uFnAIRegisterAllHideouts, &AIRegisterAllHideouts_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIDebugHideout
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30210])
// Parameter Info:

void UDishonoredCheatManager::AIDebugHideout()
{
	static UFunction* uFnAIDebugHideout = nullptr;

	if (!uFnAIDebugHideout)
	{
		uFnAIDebugHideout = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIDebugHideout");
	}

	UDishonoredCheatManager_execAIDebugHideout_Params AIDebugHideout_Params;
	memset(&AIDebugHideout_Params, 0, sizeof(AIDebugHideout_Params));

	this->ProcessEvent(uFnAIDebugHideout, &AIDebugHideout_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AISetLocoDebug
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30302])
// Parameter Info:

void UDishonoredCheatManager::AISetLocoDebug()
{
	static UFunction* uFnAISetLocoDebug = nullptr;

	if (!uFnAISetLocoDebug)
	{
		uFnAISetLocoDebug = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AISetLocoDebug");
	}

	UDishonoredCheatManager_execAISetLocoDebug_Params AISetLocoDebug_Params;
	memset(&AISetLocoDebug_Params, 0, sizeof(AISetLocoDebug_Params));

	this->ProcessEvent(uFnAISetLocoDebug, &AISetLocoDebug_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIGoToReset
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30255])
// Parameter Info:

void UDishonoredCheatManager::AIGoToReset()
{
	static UFunction* uFnAIGoToReset = nullptr;

	if (!uFnAIGoToReset)
	{
		uFnAIGoToReset = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIGoToReset");
	}

	UDishonoredCheatManager_execAIGoToReset_Params AIGoToReset_Params;
	memset(&AIGoToReset_Params, 0, sizeof(AIGoToReset_Params));

	this->ProcessEvent(uFnAIGoToReset, &AIGoToReset_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIGoToCrosshair
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30254])
// Parameter Info:

void UDishonoredCheatManager::AIGoToCrosshair()
{
	static UFunction* uFnAIGoToCrosshair = nullptr;

	if (!uFnAIGoToCrosshair)
	{
		uFnAIGoToCrosshair = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIGoToCrosshair");
	}

	UDishonoredCheatManager_execAIGoToCrosshair_Params AIGoToCrosshair_Params;
	memset(&AIGoToCrosshair_Params, 0, sizeof(AIGoToCrosshair_Params));

	this->ProcessEvent(uFnAIGoToCrosshair, &AIGoToCrosshair_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIPauseOnPathFailure
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30284])
// Parameter Info:

void UDishonoredCheatManager::AIPauseOnPathFailure()
{
	static UFunction* uFnAIPauseOnPathFailure = nullptr;

	if (!uFnAIPauseOnPathFailure)
	{
		uFnAIPauseOnPathFailure = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIPauseOnPathFailure");
	}

	UDishonoredCheatManager_execAIPauseOnPathFailure_Params AIPauseOnPathFailure_Params;
	memset(&AIPauseOnPathFailure_Params, 0, sizeof(AIPauseOnPathFailure_Params));

	this->ProcessEvent(uFnAIPauseOnPathFailure, &AIPauseOnPathFailure_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIVerbosePathDebug
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30439])
// Parameter Info:

void UDishonoredCheatManager::AIVerbosePathDebug()
{
	static UFunction* uFnAIVerbosePathDebug = nullptr;

	if (!uFnAIVerbosePathDebug)
	{
		uFnAIVerbosePathDebug = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIVerbosePathDebug");
	}

	UDishonoredCheatManager_execAIVerbosePathDebug_Params AIVerbosePathDebug_Params;
	memset(&AIVerbosePathDebug_Params, 0, sizeof(AIVerbosePathDebug_Params));

	this->ProcessEvent(uFnAIVerbosePathDebug, &AIVerbosePathDebug_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AISetBeepWhenSeePlayer
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30293])
// Parameter Info:
// uint32_t                       _bBeep                         (CPF_Parm)

void UDishonoredCheatManager::AISetBeepWhenSeePlayer(bool _bBeep)
{
	static UFunction* uFnAISetBeepWhenSeePlayer = nullptr;

	if (!uFnAISetBeepWhenSeePlayer)
	{
		uFnAISetBeepWhenSeePlayer = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AISetBeepWhenSeePlayer");
	}

	UDishonoredCheatManager_execAISetBeepWhenSeePlayer_Params AISetBeepWhenSeePlayer_Params;
	memset(&AISetBeepWhenSeePlayer_Params, 0, sizeof(AISetBeepWhenSeePlayer_Params));
	AISetBeepWhenSeePlayer_Params._bBeep = _bBeep;

	this->ProcessEvent(uFnAISetBeepWhenSeePlayer, &AISetBeepWhenSeePlayer_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIBeepWhenSeePlayer
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30177])
// Parameter Info:

void UDishonoredCheatManager::AIBeepWhenSeePlayer()
{
	static UFunction* uFnAIBeepWhenSeePlayer = nullptr;

	if (!uFnAIBeepWhenSeePlayer)
	{
		uFnAIBeepWhenSeePlayer = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIBeepWhenSeePlayer");
	}

	UDishonoredCheatManager_execAIBeepWhenSeePlayer_Params AIBeepWhenSeePlayer_Params;
	memset(&AIBeepWhenSeePlayer_Params, 0, sizeof(AIBeepWhenSeePlayer_Params));

	this->ProcessEvent(uFnAIBeepWhenSeePlayer, &AIBeepWhenSeePlayer_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIAlwaysRingAlarm
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30176])
// Parameter Info:

void UDishonoredCheatManager::AIAlwaysRingAlarm()
{
	static UFunction* uFnAIAlwaysRingAlarm = nullptr;

	if (!uFnAIAlwaysRingAlarm)
	{
		uFnAIAlwaysRingAlarm = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIAlwaysRingAlarm");
	}

	UDishonoredCheatManager_execAIAlwaysRingAlarm_Params AIAlwaysRingAlarm_Params;
	memset(&AIAlwaysRingAlarm_Params, 0, sizeof(AIAlwaysRingAlarm_Params));

	this->ProcessEvent(uFnAIAlwaysRingAlarm, &AIAlwaysRingAlarm_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AINeverRingAlarm
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30273])
// Parameter Info:

void UDishonoredCheatManager::AINeverRingAlarm()
{
	static UFunction* uFnAINeverRingAlarm = nullptr;

	if (!uFnAINeverRingAlarm)
	{
		uFnAINeverRingAlarm = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AINeverRingAlarm");
	}

	UDishonoredCheatManager_execAINeverRingAlarm_Params AINeverRingAlarm_Params;
	memset(&AINeverRingAlarm_Params, 0, sizeof(AINeverRingAlarm_Params));

	this->ProcessEvent(uFnAINeverRingAlarm, &AINeverRingAlarm_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIDontRotate
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30216])
// Parameter Info:

void UDishonoredCheatManager::AIDontRotate()
{
	static UFunction* uFnAIDontRotate = nullptr;

	if (!uFnAIDontRotate)
	{
		uFnAIDontRotate = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIDontRotate");
	}

	UDishonoredCheatManager_execAIDontRotate_Params AIDontRotate_Params;
	memset(&AIDontRotate_Params, 0, sizeof(AIDontRotate_Params));

	this->ProcessEvent(uFnAIDontRotate, &AIDontRotate_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIForceTransitSpeed
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[30237])
// Parameter Info:
// int32_t                        TransitSpeedEnum               (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::AIForceTransitSpeed(int32_t TransitSpeedEnum)
{
	static UFunction* uFnAIForceTransitSpeed = nullptr;

	if (!uFnAIForceTransitSpeed)
	{
		uFnAIForceTransitSpeed = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIForceTransitSpeed");
	}

	UDishonoredCheatManager_execAIForceTransitSpeed_Params AIForceTransitSpeed_Params;
	memset(&AIForceTransitSpeed_Params, 0, sizeof(AIForceTransitSpeed_Params));
	memcpy_s(&AIForceTransitSpeed_Params.TransitSpeedEnum, sizeof(AIForceTransitSpeed_Params.TransitSpeedEnum), &TransitSpeedEnum, sizeof(TransitSpeedEnum));

	this->ProcessEvent(uFnAIForceTransitSpeed, &AIForceTransitSpeed_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIToggleMagic
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30437])
// Parameter Info:

void UDishonoredCheatManager::AIToggleMagic()
{
	static UFunction* uFnAIToggleMagic = nullptr;

	if (!uFnAIToggleMagic)
	{
		uFnAIToggleMagic = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIToggleMagic");
	}

	UDishonoredCheatManager_execAIToggleMagic_Params AIToggleMagic_Params;
	memset(&AIToggleMagic_Params, 0, sizeof(AIToggleMagic_Params));

	this->ProcessEvent(uFnAIToggleMagic, &AIToggleMagic_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AITestGuns
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30435])
// Parameter Info:

void UDishonoredCheatManager::AITestGuns()
{
	static UFunction* uFnAITestGuns = nullptr;

	if (!uFnAITestGuns)
	{
		uFnAITestGuns = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AITestGuns");
	}

	UDishonoredCheatManager_execAITestGuns_Params AITestGuns_Params;
	memset(&AITestGuns_Params, 0, sizeof(AITestGuns_Params));

	this->ProcessEvent(uFnAITestGuns, &AITestGuns_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIEnable
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30228])
// Parameter Info:
// uint32_t                       _bEnable                       (CPF_Parm)

void UDishonoredCheatManager::AIEnable(bool _bEnable)
{
	static UFunction* uFnAIEnable = nullptr;

	if (!uFnAIEnable)
	{
		uFnAIEnable = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIEnable");
	}

	UDishonoredCheatManager_execAIEnable_Params AIEnable_Params;
	memset(&AIEnable_Params, 0, sizeof(AIEnable_Params));
	AIEnable_Params._bEnable = _bEnable;

	this->ProcessEvent(uFnAIEnable, &AIEnable_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIToggle
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30436])
// Parameter Info:

void UDishonoredCheatManager::AIToggle()
{
	static UFunction* uFnAIToggle = nullptr;

	if (!uFnAIToggle)
	{
		uFnAIToggle = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIToggle");
	}

	UDishonoredCheatManager_execAIToggle_Params AIToggle_Params;
	memset(&AIToggle_Params, 0, sizeof(AIToggle_Params));

	this->ProcessEvent(uFnAIToggle, &AIToggle_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIDontAttack
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30215])
// Parameter Info:

void UDishonoredCheatManager::AIDontAttack()
{
	static UFunction* uFnAIDontAttack = nullptr;

	if (!uFnAIDontAttack)
	{
		uFnAIDontAttack = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIDontAttack");
	}

	UDishonoredCheatManager_execAIDontAttack_Params AIDontAttack_Params;
	memset(&AIDontAttack_Params, 0, sizeof(AIDontAttack_Params));

	this->ProcessEvent(uFnAIDontAttack, &AIDontAttack_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AISetSuspicion
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30305])
// Parameter Info:
// int32_t                        DesiredSuspicion               (CPF_Parm)

void UDishonoredCheatManager::AISetSuspicion(int32_t DesiredSuspicion)
{
	static UFunction* uFnAISetSuspicion = nullptr;

	if (!uFnAISetSuspicion)
	{
		uFnAISetSuspicion = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AISetSuspicion");
	}

	UDishonoredCheatManager_execAISetSuspicion_Params AISetSuspicion_Params;
	memset(&AISetSuspicion_Params, 0, sizeof(AISetSuspicion_Params));
	memcpy_s(&AISetSuspicion_Params.DesiredSuspicion, sizeof(AISetSuspicion_Params.DesiredSuspicion), &DesiredSuspicion, sizeof(DesiredSuspicion));

	this->ProcessEvent(uFnAISetSuspicion, &AISetSuspicion_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIForget
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30238])
// Parameter Info:

void UDishonoredCheatManager::AIForget()
{
	static UFunction* uFnAIForget = nullptr;

	if (!uFnAIForget)
	{
		uFnAIForget = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIForget");
	}

	UDishonoredCheatManager_execAIForget_Params AIForget_Params;
	memset(&AIForget_Params, 0, sizeof(AIForget_Params));

	this->ProcessEvent(uFnAIForget, &AIForget_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIDumb
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[30225])
// Parameter Info:
// uint32_t                       _bOnSingleAI                   (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::AIDumb(bool _bOnSingleAI)
{
	static UFunction* uFnAIDumb = nullptr;

	if (!uFnAIDumb)
	{
		uFnAIDumb = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIDumb");
	}

	UDishonoredCheatManager_execAIDumb_Params AIDumb_Params;
	memset(&AIDumb_Params, 0, sizeof(AIDumb_Params));
	AIDumb_Params._bOnSingleAI = _bOnSingleAI;

	this->ProcessEvent(uFnAIDumb, &AIDumb_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AINumb
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[30276])
// Parameter Info:
// uint32_t                       _bOnSingleAI                   (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::AINumb(bool _bOnSingleAI)
{
	static UFunction* uFnAINumb = nullptr;

	if (!uFnAINumb)
	{
		uFnAINumb = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AINumb");
	}

	UDishonoredCheatManager_execAINumb_Params AINumb_Params;
	memset(&AINumb_Params, 0, sizeof(AINumb_Params));
	AINumb_Params._bOnSingleAI = _bOnSingleAI;

	this->ProcessEvent(uFnAINumb, &AINumb_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIBlind
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[30180])
// Parameter Info:
// uint32_t                       _bOnSingleAI                   (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::AIBlind(bool _bOnSingleAI)
{
	static UFunction* uFnAIBlind = nullptr;

	if (!uFnAIBlind)
	{
		uFnAIBlind = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIBlind");
	}

	UDishonoredCheatManager_execAIBlind_Params AIBlind_Params;
	memset(&AIBlind_Params, 0, sizeof(AIBlind_Params));
	AIBlind_Params._bOnSingleAI = _bOnSingleAI;

	this->ProcessEvent(uFnAIBlind, &AIBlind_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIDeaf
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[30207])
// Parameter Info:
// uint32_t                       _bOnSingleAI                   (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::AIDeaf(bool _bOnSingleAI)
{
	static UFunction* uFnAIDeaf = nullptr;

	if (!uFnAIDeaf)
	{
		uFnAIDeaf = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIDeaf");
	}

	UDishonoredCheatManager_execAIDeaf_Params AIDeaf_Params;
	memset(&AIDeaf_Params, 0, sizeof(AIDeaf_Params));
	AIDeaf_Params._bOnSingleAI = _bOnSingleAI;

	this->ProcessEvent(uFnAIDeaf, &AIDeaf_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIGibAll
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45862])
// Parameter Info:

void UDishonoredCheatManager::AIGibAll()
{
	static UFunction* uFnAIGibAll = nullptr;

	if (!uFnAIGibAll)
	{
		uFnAIGibAll = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIGibAll");
	}

	UDishonoredCheatManager_execAIGibAll_Params AIGibAll_Params;
	memset(&AIGibAll_Params, 0, sizeof(AIGibAll_Params));

	this->ProcessEvent(uFnAIGibAll, &AIGibAll_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIGib
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30239])
// Parameter Info:

void UDishonoredCheatManager::AIGib()
{
	static UFunction* uFnAIGib = nullptr;

	if (!uFnAIGib)
	{
		uFnAIGib = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIGib");
	}

	UDishonoredCheatManager_execAIGib_Params AIGib_Params;
	memset(&AIGib_Params, 0, sizeof(AIGib_Params));

	this->ProcessEvent(uFnAIGib, &AIGib_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AIClearDebug
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30205])
// Parameter Info:

void UDishonoredCheatManager::AIClearDebug()
{
	static UFunction* uFnAIClearDebug = nullptr;

	if (!uFnAIClearDebug)
	{
		uFnAIClearDebug = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AIClearDebug");
	}

	UDishonoredCheatManager_execAIClearDebug_Params AIClearDebug_Params;
	memset(&AIClearDebug_Params, 0, sizeof(AIClearDebug_Params));

	this->ProcessEvent(uFnAIClearDebug, &AIClearDebug_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AICycleDebug
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30206])
// Parameter Info:

void UDishonoredCheatManager::AICycleDebug()
{
	static UFunction* uFnAICycleDebug = nullptr;

	if (!uFnAICycleDebug)
	{
		uFnAICycleDebug = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AICycleDebug");
	}

	UDishonoredCheatManager_execAICycleDebug_Params AICycleDebug_Params;
	memset(&AICycleDebug_Params, 0, sizeof(AICycleDebug_Params));

	this->ProcessEvent(uFnAICycleDebug, &AICycleDebug_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AISetDebug
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30299])
// Parameter Info:

void UDishonoredCheatManager::AISetDebug()
{
	static UFunction* uFnAISetDebug = nullptr;

	if (!uFnAISetDebug)
	{
		uFnAISetDebug = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AISetDebug");
	}

	UDishonoredCheatManager_execAISetDebug_Params AISetDebug_Params;
	memset(&AISetDebug_Params, 0, sizeof(AISetDebug_Params));

	this->ProcessEvent(uFnAISetDebug, &AISetDebug_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DisplayDebug_Native
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[32321])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AHUD*                    _pHUD                          (CPF_Parm)
// float                          _rfOut_YL                      (CPF_Parm | CPF_OutParm)
// float                          _rfOut_YPos                    (CPF_Parm | CPF_OutParm)

bool UDishonoredCheatManager::DisplayDebug_Native(class AHUD* _pHUD, float& _rfOut_YL, float& _rfOut_YPos)
{
	static UFunction* uFnDisplayDebug_Native = nullptr;

	if (!uFnDisplayDebug_Native)
	{
		uFnDisplayDebug_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DisplayDebug_Native");
	}

	UDishonoredCheatManager_execDisplayDebug_Native_Params DisplayDebug_Native_Params;
	memset(&DisplayDebug_Native_Params, 0, sizeof(DisplayDebug_Native_Params));
	DisplayDebug_Native_Params._pHUD = _pHUD;
	memcpy_s(&DisplayDebug_Native_Params._rfOut_YL, sizeof(DisplayDebug_Native_Params._rfOut_YL), &_rfOut_YL, sizeof(_rfOut_YL));
	memcpy_s(&DisplayDebug_Native_Params._rfOut_YPos, sizeof(DisplayDebug_Native_Params._rfOut_YPos), &_rfOut_YPos, sizeof(_rfOut_YPos));

	this->ProcessEvent(uFnDisplayDebug_Native, &DisplayDebug_Native_Params, nullptr);

	memcpy_s(&_rfOut_YL, sizeof(_rfOut_YL), &DisplayDebug_Native_Params._rfOut_YL, sizeof(DisplayDebug_Native_Params._rfOut_YL));
	memcpy_s(&_rfOut_YPos, sizeof(_rfOut_YPos), &DisplayDebug_Native_Params._rfOut_YPos, sizeof(DisplayDebug_Native_Params._rfOut_YPos));

	return DisplayDebug_Native_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredCheatManager.InitCheatManager
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UDishonoredCheatManager::InitCheatManager()
{
	static UFunction* uFnInitCheatManager = nullptr;

	if (!uFnInitCheatManager)
	{
		uFnInitCheatManager = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.InitCheatManager");
	}

	UDishonoredCheatManager_execInitCheatManager_Params InitCheatManager_Params;
	memset(&InitCheatManager_Params, 0, sizeof(InitCheatManager_Params));

	this->ProcessEvent(uFnInitCheatManager, &InitCheatManager_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.InitCheatManager_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35593])
// Parameter Info:

void UDishonoredCheatManager::InitCheatManager_Native()
{
	static UFunction* uFnInitCheatManager_Native = nullptr;

	if (!uFnInitCheatManager_Native)
	{
		uFnInitCheatManager_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.InitCheatManager_Native");
	}

	UDishonoredCheatManager_execInitCheatManager_Native_Params InitCheatManager_Native_Params;
	memset(&InitCheatManager_Native_Params, 0, sizeof(InitCheatManager_Native_Params));

	this->ProcessEvent(uFnInitCheatManager_Native, &InitCheatManager_Native_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerGhostChestView
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44267])
// Parameter Info:
// uint32_t                       _bChestView                    (CPF_Parm)

void UDishonoredCheatManager::PlayerGhostChestView(bool _bChestView)
{
	static UFunction* uFnPlayerGhostChestView = nullptr;

	if (!uFnPlayerGhostChestView)
	{
		uFnPlayerGhostChestView = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerGhostChestView");
	}

	UDishonoredCheatManager_execPlayerGhostChestView_Params PlayerGhostChestView_Params;
	memset(&PlayerGhostChestView_Params, 0, sizeof(PlayerGhostChestView_Params));
	PlayerGhostChestView_Params._bChestView = _bChestView;

	this->ProcessEvent(uFnPlayerGhostChestView, &PlayerGhostChestView_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerTestCamRumble
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44279])
// Parameter Info:
// float                          _fAmplitude                    (CPF_Parm)
// float                          _fFrequency                    (CPF_Parm)
// float                          _fDuration                     (CPF_Parm)

void UDishonoredCheatManager::PlayerTestCamRumble(float _fAmplitude, float _fFrequency, float _fDuration)
{
	static UFunction* uFnPlayerTestCamRumble = nullptr;

	if (!uFnPlayerTestCamRumble)
	{
		uFnPlayerTestCamRumble = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerTestCamRumble");
	}

	UDishonoredCheatManager_execPlayerTestCamRumble_Params PlayerTestCamRumble_Params;
	memset(&PlayerTestCamRumble_Params, 0, sizeof(PlayerTestCamRumble_Params));
	memcpy_s(&PlayerTestCamRumble_Params._fAmplitude, sizeof(PlayerTestCamRumble_Params._fAmplitude), &_fAmplitude, sizeof(_fAmplitude));
	memcpy_s(&PlayerTestCamRumble_Params._fFrequency, sizeof(PlayerTestCamRumble_Params._fFrequency), &_fFrequency, sizeof(_fFrequency));
	memcpy_s(&PlayerTestCamRumble_Params._fDuration, sizeof(PlayerTestCamRumble_Params._fDuration), &_fDuration, sizeof(_fDuration));

	this->ProcessEvent(uFnPlayerTestCamRumble, &PlayerTestCamRumble_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.EnableIronSight
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34727])
// Parameter Info:

void UDishonoredCheatManager::EnableIronSight()
{
	static UFunction* uFnEnableIronSight = nullptr;

	if (!uFnEnableIronSight)
	{
		uFnEnableIronSight = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.EnableIronSight");
	}

	UDishonoredCheatManager_execEnableIronSight_Params EnableIronSight_Params;
	memset(&EnableIronSight_Params, 0, sizeof(EnableIronSight_Params));

	this->ProcessEvent(uFnEnableIronSight, &EnableIronSight_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.DoLineCheckStressTest
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[32660])
// Parameter Info:
// int32_t                        _NumRadialSegs                 (CPF_OptionalParm | CPF_Parm)
// int32_t                        _NumHeightSegs                 (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::DoLineCheckStressTest(int32_t _NumRadialSegs, int32_t _NumHeightSegs)
{
	static UFunction* uFnDoLineCheckStressTest = nullptr;

	if (!uFnDoLineCheckStressTest)
	{
		uFnDoLineCheckStressTest = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.DoLineCheckStressTest");
	}

	UDishonoredCheatManager_execDoLineCheckStressTest_Params DoLineCheckStressTest_Params;
	memset(&DoLineCheckStressTest_Params, 0, sizeof(DoLineCheckStressTest_Params));
	memcpy_s(&DoLineCheckStressTest_Params._NumRadialSegs, sizeof(DoLineCheckStressTest_Params._NumRadialSegs), &_NumRadialSegs, sizeof(_NumRadialSegs));
	memcpy_s(&DoLineCheckStressTest_Params._NumHeightSegs, sizeof(DoLineCheckStressTest_Params._NumHeightSegs), &_NumHeightSegs, sizeof(_NumHeightSegs));

	this->ProcessEvent(uFnDoLineCheckStressTest, &DoLineCheckStressTest_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerForceDramaticFatalities
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44261])
// Parameter Info:

void UDishonoredCheatManager::PlayerForceDramaticFatalities()
{
	static UFunction* uFnPlayerForceDramaticFatalities = nullptr;

	if (!uFnPlayerForceDramaticFatalities)
	{
		uFnPlayerForceDramaticFatalities = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerForceDramaticFatalities");
	}

	UDishonoredCheatManager_execPlayerForceDramaticFatalities_Params PlayerForceDramaticFatalities_Params;
	memset(&PlayerForceDramaticFatalities_Params, 0, sizeof(PlayerForceDramaticFatalities_Params));

	this->ProcessEvent(uFnPlayerForceDramaticFatalities, &PlayerForceDramaticFatalities_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerForceKillCam
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44263])
// Parameter Info:

void UDishonoredCheatManager::PlayerForceKillCam()
{
	static UFunction* uFnPlayerForceKillCam = nullptr;

	if (!uFnPlayerForceKillCam)
	{
		uFnPlayerForceKillCam = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerForceKillCam");
	}

	UDishonoredCheatManager_execPlayerForceKillCam_Params PlayerForceKillCam_Params;
	memset(&PlayerForceKillCam_Params, 0, sizeof(PlayerForceKillCam_Params));

	this->ProcessEvent(uFnPlayerForceKillCam, &PlayerForceKillCam_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerToggleHomingArrow
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44283])
// Parameter Info:

void UDishonoredCheatManager::PlayerToggleHomingArrow()
{
	static UFunction* uFnPlayerToggleHomingArrow = nullptr;

	if (!uFnPlayerToggleHomingArrow)
	{
		uFnPlayerToggleHomingArrow = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerToggleHomingArrow");
	}

	UDishonoredCheatManager_execPlayerToggleHomingArrow_Params PlayerToggleHomingArrow_Params;
	memset(&PlayerToggleHomingArrow_Params, 0, sizeof(PlayerToggleHomingArrow_Params));

	this->ProcessEvent(uFnPlayerToggleHomingArrow, &PlayerToggleHomingArrow_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerToggleAimAssist
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44282])
// Parameter Info:

void UDishonoredCheatManager::PlayerToggleAimAssist()
{
	static UFunction* uFnPlayerToggleAimAssist = nullptr;

	if (!uFnPlayerToggleAimAssist)
	{
		uFnPlayerToggleAimAssist = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerToggleAimAssist");
	}

	UDishonoredCheatManager_execPlayerToggleAimAssist_Params PlayerToggleAimAssist_Params;
	memset(&PlayerToggleAimAssist_Params, 0, sizeof(PlayerToggleAimAssist_Params));

	this->ProcessEvent(uFnPlayerToggleAimAssist, &PlayerToggleAimAssist_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerShowNavMeshStatus
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[14111])
// Parameter Info:
// uint32_t                       _bShow                         (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::PlayerShowNavMeshStatus(bool _bShow)
{
	static UFunction* uFnPlayerShowNavMeshStatus = nullptr;

	if (!uFnPlayerShowNavMeshStatus)
	{
		uFnPlayerShowNavMeshStatus = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerShowNavMeshStatus");
	}

	UDishonoredCheatManager_execPlayerShowNavMeshStatus_Params PlayerShowNavMeshStatus_Params;
	memset(&PlayerShowNavMeshStatus_Params, 0, sizeof(PlayerShowNavMeshStatus_Params));
	PlayerShowNavMeshStatus_Params._bShow = _bShow;

	this->ProcessEvent(uFnPlayerShowNavMeshStatus, &PlayerShowNavMeshStatus_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerFillAdrenaline
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44259])
// Parameter Info:

void UDishonoredCheatManager::PlayerFillAdrenaline()
{
	static UFunction* uFnPlayerFillAdrenaline = nullptr;

	if (!uFnPlayerFillAdrenaline)
	{
		uFnPlayerFillAdrenaline = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerFillAdrenaline");
	}

	UDishonoredCheatManager_execPlayerFillAdrenaline_Params PlayerFillAdrenaline_Params;
	memset(&PlayerFillAdrenaline_Params, 0, sizeof(PlayerFillAdrenaline_Params));

	this->ProcessEvent(uFnPlayerFillAdrenaline, &PlayerFillAdrenaline_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerToggleAdrenalineCooldown
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44281])
// Parameter Info:

void UDishonoredCheatManager::PlayerToggleAdrenalineCooldown()
{
	static UFunction* uFnPlayerToggleAdrenalineCooldown = nullptr;

	if (!uFnPlayerToggleAdrenalineCooldown)
	{
		uFnPlayerToggleAdrenalineCooldown = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerToggleAdrenalineCooldown");
	}

	UDishonoredCheatManager_execPlayerToggleAdrenalineCooldown_Params PlayerToggleAdrenalineCooldown_Params;
	memset(&PlayerToggleAdrenalineCooldown_Params, 0, sizeof(PlayerToggleAdrenalineCooldown_Params));

	this->ProcessEvent(uFnPlayerToggleAdrenalineCooldown, &PlayerToggleAdrenalineCooldown_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerInfiniteAdrenaline
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44268])
// Parameter Info:

void UDishonoredCheatManager::PlayerInfiniteAdrenaline()
{
	static UFunction* uFnPlayerInfiniteAdrenaline = nullptr;

	if (!uFnPlayerInfiniteAdrenaline)
	{
		uFnPlayerInfiniteAdrenaline = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerInfiniteAdrenaline");
	}

	UDishonoredCheatManager_execPlayerInfiniteAdrenaline_Params PlayerInfiniteAdrenaline_Params;
	memset(&PlayerInfiniteAdrenaline_Params, 0, sizeof(PlayerInfiniteAdrenaline_Params));

	this->ProcessEvent(uFnPlayerInfiniteAdrenaline, &PlayerInfiniteAdrenaline_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AbstractInventoryList
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[29974])
// Parameter Info:

void UDishonoredCheatManager::AbstractInventoryList()
{
	static UFunction* uFnAbstractInventoryList = nullptr;

	if (!uFnAbstractInventoryList)
	{
		uFnAbstractInventoryList = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AbstractInventoryList");
	}

	UDishonoredCheatManager_execAbstractInventoryList_Params AbstractInventoryList_Params;
	memset(&AbstractInventoryList_Params, 0, sizeof(AbstractInventoryList_Params));

	this->ProcessEvent(uFnAbstractInventoryList, &AbstractInventoryList_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerInfiniteAmmo
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44269])
// Parameter Info:

void UDishonoredCheatManager::PlayerInfiniteAmmo()
{
	static UFunction* uFnPlayerInfiniteAmmo = nullptr;

	if (!uFnPlayerInfiniteAmmo)
	{
		uFnPlayerInfiniteAmmo = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerInfiniteAmmo");
	}

	UDishonoredCheatManager_execPlayerInfiniteAmmo_Params PlayerInfiniteAmmo_Params;
	memset(&PlayerInfiniteAmmo_Params, 0, sizeof(PlayerInfiniteAmmo_Params));

	this->ProcessEvent(uFnPlayerInfiniteAmmo, &PlayerInfiniteAmmo_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDisableKnockdown
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44249])
// Parameter Info:

void UDishonoredCheatManager::PlayerDisableKnockdown()
{
	static UFunction* uFnPlayerDisableKnockdown = nullptr;

	if (!uFnPlayerDisableKnockdown)
	{
		uFnPlayerDisableKnockdown = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerDisableKnockdown");
	}

	UDishonoredCheatManager_execPlayerDisableKnockdown_Params PlayerDisableKnockdown_Params;
	memset(&PlayerDisableKnockdown_Params, 0, sizeof(PlayerDisableKnockdown_Params));

	this->ProcessEvent(uFnPlayerDisableKnockdown, &PlayerDisableKnockdown_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerEnableKnockdown
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44256])
// Parameter Info:

void UDishonoredCheatManager::PlayerEnableKnockdown()
{
	static UFunction* uFnPlayerEnableKnockdown = nullptr;

	if (!uFnPlayerEnableKnockdown)
	{
		uFnPlayerEnableKnockdown = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerEnableKnockdown");
	}

	UDishonoredCheatManager_execPlayerEnableKnockdown_Params PlayerEnableKnockdown_Params;
	memset(&PlayerEnableKnockdown_Params, 0, sizeof(PlayerEnableKnockdown_Params));

	this->ProcessEvent(uFnPlayerEnableKnockdown, &PlayerEnableKnockdown_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDisableStrongHitReaction
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44251])
// Parameter Info:

void UDishonoredCheatManager::PlayerDisableStrongHitReaction()
{
	static UFunction* uFnPlayerDisableStrongHitReaction = nullptr;

	if (!uFnPlayerDisableStrongHitReaction)
	{
		uFnPlayerDisableStrongHitReaction = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerDisableStrongHitReaction");
	}

	UDishonoredCheatManager_execPlayerDisableStrongHitReaction_Params PlayerDisableStrongHitReaction_Params;
	memset(&PlayerDisableStrongHitReaction_Params, 0, sizeof(PlayerDisableStrongHitReaction_Params));

	this->ProcessEvent(uFnPlayerDisableStrongHitReaction, &PlayerDisableStrongHitReaction_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerEnableStrongHitReaction
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44257])
// Parameter Info:

void UDishonoredCheatManager::PlayerEnableStrongHitReaction()
{
	static UFunction* uFnPlayerEnableStrongHitReaction = nullptr;

	if (!uFnPlayerEnableStrongHitReaction)
	{
		uFnPlayerEnableStrongHitReaction = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerEnableStrongHitReaction");
	}

	UDishonoredCheatManager_execPlayerEnableStrongHitReaction_Params PlayerEnableStrongHitReaction_Params;
	memset(&PlayerEnableStrongHitReaction_Params, 0, sizeof(PlayerEnableStrongHitReaction_Params));

	this->ProcessEvent(uFnPlayerEnableStrongHitReaction, &PlayerEnableStrongHitReaction_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDisableTakeDamage
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44252])
// Parameter Info:

void UDishonoredCheatManager::PlayerDisableTakeDamage()
{
	static UFunction* uFnPlayerDisableTakeDamage = nullptr;

	if (!uFnPlayerDisableTakeDamage)
	{
		uFnPlayerDisableTakeDamage = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerDisableTakeDamage");
	}

	UDishonoredCheatManager_execPlayerDisableTakeDamage_Params PlayerDisableTakeDamage_Params;
	memset(&PlayerDisableTakeDamage_Params, 0, sizeof(PlayerDisableTakeDamage_Params));

	this->ProcessEvent(uFnPlayerDisableTakeDamage, &PlayerDisableTakeDamage_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerEnableTakeDamage
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44258])
// Parameter Info:

void UDishonoredCheatManager::PlayerEnableTakeDamage()
{
	static UFunction* uFnPlayerEnableTakeDamage = nullptr;

	if (!uFnPlayerEnableTakeDamage)
	{
		uFnPlayerEnableTakeDamage = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerEnableTakeDamage");
	}

	UDishonoredCheatManager_execPlayerEnableTakeDamage_Params PlayerEnableTakeDamage_Params;
	memset(&PlayerEnableTakeDamage_Params, 0, sizeof(PlayerEnableTakeDamage_Params));

	this->ProcessEvent(uFnPlayerEnableTakeDamage, &PlayerEnableTakeDamage_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDamageProjectile_Stealth
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[44245])
// Parameter Info:
// int32_t                        _Amount                        (CPF_OptionalParm | CPF_Parm)
// float                          _fMomentum                     (CPF_OptionalParm | CPF_Parm)
// float                          _fAngle                        (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::PlayerDamageProjectile_Stealth(int32_t _Amount, float _fMomentum, float _fAngle)
{
	static UFunction* uFnPlayerDamageProjectile_Stealth = nullptr;

	if (!uFnPlayerDamageProjectile_Stealth)
	{
		uFnPlayerDamageProjectile_Stealth = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerDamageProjectile_Stealth");
	}

	UDishonoredCheatManager_execPlayerDamageProjectile_Stealth_Params PlayerDamageProjectile_Stealth_Params;
	memset(&PlayerDamageProjectile_Stealth_Params, 0, sizeof(PlayerDamageProjectile_Stealth_Params));
	memcpy_s(&PlayerDamageProjectile_Stealth_Params._Amount, sizeof(PlayerDamageProjectile_Stealth_Params._Amount), &_Amount, sizeof(_Amount));
	memcpy_s(&PlayerDamageProjectile_Stealth_Params._fMomentum, sizeof(PlayerDamageProjectile_Stealth_Params._fMomentum), &_fMomentum, sizeof(_fMomentum));
	memcpy_s(&PlayerDamageProjectile_Stealth_Params._fAngle, sizeof(PlayerDamageProjectile_Stealth_Params._fAngle), &_fAngle, sizeof(_fAngle));

	this->ProcessEvent(uFnPlayerDamageProjectile_Stealth, &PlayerDamageProjectile_Stealth_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDamageProjectile
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[44244])
// Parameter Info:
// int32_t                        _Amount                        (CPF_OptionalParm | CPF_Parm)
// float                          _fMomentum                     (CPF_OptionalParm | CPF_Parm)
// float                          _fAngle                        (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::PlayerDamageProjectile(int32_t _Amount, float _fMomentum, float _fAngle)
{
	static UFunction* uFnPlayerDamageProjectile = nullptr;

	if (!uFnPlayerDamageProjectile)
	{
		uFnPlayerDamageProjectile = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerDamageProjectile");
	}

	UDishonoredCheatManager_execPlayerDamageProjectile_Params PlayerDamageProjectile_Params;
	memset(&PlayerDamageProjectile_Params, 0, sizeof(PlayerDamageProjectile_Params));
	memcpy_s(&PlayerDamageProjectile_Params._Amount, sizeof(PlayerDamageProjectile_Params._Amount), &_Amount, sizeof(_Amount));
	memcpy_s(&PlayerDamageProjectile_Params._fMomentum, sizeof(PlayerDamageProjectile_Params._fMomentum), &_fMomentum, sizeof(_fMomentum));
	memcpy_s(&PlayerDamageProjectile_Params._fAngle, sizeof(PlayerDamageProjectile_Params._fAngle), &_fAngle, sizeof(_fAngle));

	this->ProcessEvent(uFnPlayerDamageProjectile, &PlayerDamageProjectile_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDamageKnockdown
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[44243])
// Parameter Info:
// int32_t                        _Amount                        (CPF_OptionalParm | CPF_Parm)
// float                          _fMomentum                     (CPF_OptionalParm | CPF_Parm)
// float                          _fAngle                        (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::PlayerDamageKnockdown(int32_t _Amount, float _fMomentum, float _fAngle)
{
	static UFunction* uFnPlayerDamageKnockdown = nullptr;

	if (!uFnPlayerDamageKnockdown)
	{
		uFnPlayerDamageKnockdown = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerDamageKnockdown");
	}

	UDishonoredCheatManager_execPlayerDamageKnockdown_Params PlayerDamageKnockdown_Params;
	memset(&PlayerDamageKnockdown_Params, 0, sizeof(PlayerDamageKnockdown_Params));
	memcpy_s(&PlayerDamageKnockdown_Params._Amount, sizeof(PlayerDamageKnockdown_Params._Amount), &_Amount, sizeof(_Amount));
	memcpy_s(&PlayerDamageKnockdown_Params._fMomentum, sizeof(PlayerDamageKnockdown_Params._fMomentum), &_fMomentum, sizeof(_fMomentum));
	memcpy_s(&PlayerDamageKnockdown_Params._fAngle, sizeof(PlayerDamageKnockdown_Params._fAngle), &_fAngle, sizeof(_fAngle));

	this->ProcessEvent(uFnPlayerDamageKnockdown, &PlayerDamageKnockdown_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDamageImpact
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[44242])
// Parameter Info:
// int32_t                        _Amount                        (CPF_OptionalParm | CPF_Parm)
// float                          _fMomentum                     (CPF_OptionalParm | CPF_Parm)
// float                          _fAngle                        (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::PlayerDamageImpact(int32_t _Amount, float _fMomentum, float _fAngle)
{
	static UFunction* uFnPlayerDamageImpact = nullptr;

	if (!uFnPlayerDamageImpact)
	{
		uFnPlayerDamageImpact = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerDamageImpact");
	}

	UDishonoredCheatManager_execPlayerDamageImpact_Params PlayerDamageImpact_Params;
	memset(&PlayerDamageImpact_Params, 0, sizeof(PlayerDamageImpact_Params));
	memcpy_s(&PlayerDamageImpact_Params._Amount, sizeof(PlayerDamageImpact_Params._Amount), &_Amount, sizeof(_Amount));
	memcpy_s(&PlayerDamageImpact_Params._fMomentum, sizeof(PlayerDamageImpact_Params._fMomentum), &_fMomentum, sizeof(_fMomentum));
	memcpy_s(&PlayerDamageImpact_Params._fAngle, sizeof(PlayerDamageImpact_Params._fAngle), &_fAngle, sizeof(_fAngle));

	this->ProcessEvent(uFnPlayerDamageImpact, &PlayerDamageImpact_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDamageFastHit
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[44241])
// Parameter Info:
// int32_t                        _Amount                        (CPF_OptionalParm | CPF_Parm)
// float                          _fMomentum                     (CPF_OptionalParm | CPF_Parm)
// float                          _fAngle                        (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::PlayerDamageFastHit(int32_t _Amount, float _fMomentum, float _fAngle)
{
	static UFunction* uFnPlayerDamageFastHit = nullptr;

	if (!uFnPlayerDamageFastHit)
	{
		uFnPlayerDamageFastHit = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerDamageFastHit");
	}

	UDishonoredCheatManager_execPlayerDamageFastHit_Params PlayerDamageFastHit_Params;
	memset(&PlayerDamageFastHit_Params, 0, sizeof(PlayerDamageFastHit_Params));
	memcpy_s(&PlayerDamageFastHit_Params._Amount, sizeof(PlayerDamageFastHit_Params._Amount), &_Amount, sizeof(_Amount));
	memcpy_s(&PlayerDamageFastHit_Params._fMomentum, sizeof(PlayerDamageFastHit_Params._fMomentum), &_fMomentum, sizeof(_fMomentum));
	memcpy_s(&PlayerDamageFastHit_Params._fAngle, sizeof(PlayerDamageFastHit_Params._fAngle), &_fAngle, sizeof(_fAngle));

	this->ProcessEvent(uFnPlayerDamageFastHit, &PlayerDamageFastHit_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDamageElectricity
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[44240])
// Parameter Info:
// int32_t                        _Amount                        (CPF_OptionalParm | CPF_Parm)
// float                          _fMomentum                     (CPF_OptionalParm | CPF_Parm)
// float                          _fAngle                        (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::PlayerDamageElectricity(int32_t _Amount, float _fMomentum, float _fAngle)
{
	static UFunction* uFnPlayerDamageElectricity = nullptr;

	if (!uFnPlayerDamageElectricity)
	{
		uFnPlayerDamageElectricity = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerDamageElectricity");
	}

	UDishonoredCheatManager_execPlayerDamageElectricity_Params PlayerDamageElectricity_Params;
	memset(&PlayerDamageElectricity_Params, 0, sizeof(PlayerDamageElectricity_Params));
	memcpy_s(&PlayerDamageElectricity_Params._Amount, sizeof(PlayerDamageElectricity_Params._Amount), &_Amount, sizeof(_Amount));
	memcpy_s(&PlayerDamageElectricity_Params._fMomentum, sizeof(PlayerDamageElectricity_Params._fMomentum), &_fMomentum, sizeof(_fMomentum));
	memcpy_s(&PlayerDamageElectricity_Params._fAngle, sizeof(PlayerDamageElectricity_Params._fAngle), &_fAngle, sizeof(_fAngle));

	this->ProcessEvent(uFnPlayerDamageElectricity, &PlayerDamageElectricity_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDamageBullet
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[44239])
// Parameter Info:
// int32_t                        _Amount                        (CPF_OptionalParm | CPF_Parm)
// float                          _fMomentum                     (CPF_OptionalParm | CPF_Parm)
// float                          _fAngle                        (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::PlayerDamageBullet(int32_t _Amount, float _fMomentum, float _fAngle)
{
	static UFunction* uFnPlayerDamageBullet = nullptr;

	if (!uFnPlayerDamageBullet)
	{
		uFnPlayerDamageBullet = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerDamageBullet");
	}

	UDishonoredCheatManager_execPlayerDamageBullet_Params PlayerDamageBullet_Params;
	memset(&PlayerDamageBullet_Params, 0, sizeof(PlayerDamageBullet_Params));
	memcpy_s(&PlayerDamageBullet_Params._Amount, sizeof(PlayerDamageBullet_Params._Amount), &_Amount, sizeof(_Amount));
	memcpy_s(&PlayerDamageBullet_Params._fMomentum, sizeof(PlayerDamageBullet_Params._fMomentum), &_fMomentum, sizeof(_fMomentum));
	memcpy_s(&PlayerDamageBullet_Params._fAngle, sizeof(PlayerDamageBullet_Params._fAngle), &_fAngle, sizeof(_fAngle));

	this->ProcessEvent(uFnPlayerDamageBullet, &PlayerDamageBullet_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDamageBash
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[44238])
// Parameter Info:
// int32_t                        _Amount                        (CPF_OptionalParm | CPF_Parm)
// float                          _fMomentum                     (CPF_OptionalParm | CPF_Parm)
// float                          _fAngle                        (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::PlayerDamageBash(int32_t _Amount, float _fMomentum, float _fAngle)
{
	static UFunction* uFnPlayerDamageBash = nullptr;

	if (!uFnPlayerDamageBash)
	{
		uFnPlayerDamageBash = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerDamageBash");
	}

	UDishonoredCheatManager_execPlayerDamageBash_Params PlayerDamageBash_Params;
	memset(&PlayerDamageBash_Params, 0, sizeof(PlayerDamageBash_Params));
	memcpy_s(&PlayerDamageBash_Params._Amount, sizeof(PlayerDamageBash_Params._Amount), &_Amount, sizeof(_Amount));
	memcpy_s(&PlayerDamageBash_Params._fMomentum, sizeof(PlayerDamageBash_Params._fMomentum), &_fMomentum, sizeof(_fMomentum));
	memcpy_s(&PlayerDamageBash_Params._fAngle, sizeof(PlayerDamageBash_Params._fAngle), &_fAngle, sizeof(_fAngle));

	this->ProcessEvent(uFnPlayerDamageBash, &PlayerDamageBash_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDamage
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[44237])
// Parameter Info:
// int32_t                        _Amount                        (CPF_OptionalParm | CPF_Parm)
// float                          _fMomentum                     (CPF_OptionalParm | CPF_Parm)
// float                          _fAngle                        (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::PlayerDamage(int32_t _Amount, float _fMomentum, float _fAngle)
{
	static UFunction* uFnPlayerDamage = nullptr;

	if (!uFnPlayerDamage)
	{
		uFnPlayerDamage = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerDamage");
	}

	UDishonoredCheatManager_execPlayerDamage_Params PlayerDamage_Params;
	memset(&PlayerDamage_Params, 0, sizeof(PlayerDamage_Params));
	memcpy_s(&PlayerDamage_Params._Amount, sizeof(PlayerDamage_Params._Amount), &_Amount, sizeof(_Amount));
	memcpy_s(&PlayerDamage_Params._fMomentum, sizeof(PlayerDamage_Params._fMomentum), &_fMomentum, sizeof(_fMomentum));
	memcpy_s(&PlayerDamage_Params._fAngle, sizeof(PlayerDamage_Params._fAngle), &_fAngle, sizeof(_fAngle));

	this->ProcessEvent(uFnPlayerDamage, &PlayerDamage_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.HealthAdd
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35456])
// Parameter Info:
// int32_t                        _Amount                        (CPF_Parm)

void UDishonoredCheatManager::HealthAdd(int32_t _Amount)
{
	static UFunction* uFnHealthAdd = nullptr;

	if (!uFnHealthAdd)
	{
		uFnHealthAdd = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.HealthAdd");
	}

	UDishonoredCheatManager_execHealthAdd_Params HealthAdd_Params;
	memset(&HealthAdd_Params, 0, sizeof(HealthAdd_Params));
	memcpy_s(&HealthAdd_Params._Amount, sizeof(HealthAdd_Params._Amount), &_Amount, sizeof(_Amount));

	this->ProcessEvent(uFnHealthAdd, &HealthAdd_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.Buddha
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30771])
// Parameter Info:

void UDishonoredCheatManager::Buddha()
{
	static UFunction* uFnBuddha = nullptr;

	if (!uFnBuddha)
	{
		uFnBuddha = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.Buddha");
	}

	UDishonoredCheatManager_execBuddha_Params Buddha_Params;
	memset(&Buddha_Params, 0, sizeof(Buddha_Params));

	this->ProcessEvent(uFnBuddha, &Buddha_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.ManaToggle
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43632])
// Parameter Info:

void UDishonoredCheatManager::ManaToggle()
{
	static UFunction* uFnManaToggle = nullptr;

	if (!uFnManaToggle)
	{
		uFnManaToggle = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.ManaToggle");
	}

	UDishonoredCheatManager_execManaToggle_Params ManaToggle_Params;
	memset(&ManaToggle_Params, 0, sizeof(ManaToggle_Params));

	this->ProcessEvent(uFnManaToggle, &ManaToggle_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.ManaEnable
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43630])
// Parameter Info:
// uint32_t                       _bEnable                       (CPF_Parm)

void UDishonoredCheatManager::ManaEnable(bool _bEnable)
{
	static UFunction* uFnManaEnable = nullptr;

	if (!uFnManaEnable)
	{
		uFnManaEnable = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.ManaEnable");
	}

	UDishonoredCheatManager_execManaEnable_Params ManaEnable_Params;
	memset(&ManaEnable_Params, 0, sizeof(ManaEnable_Params));
	ManaEnable_Params._bEnable = _bEnable;

	this->ProcessEvent(uFnManaEnable, &ManaEnable_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.ManaAdd
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43629])
// Parameter Info:
// int32_t                        _Amount                        (CPF_Parm)

void UDishonoredCheatManager::ManaAdd(int32_t _Amount)
{
	static UFunction* uFnManaAdd = nullptr;

	if (!uFnManaAdd)
	{
		uFnManaAdd = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.ManaAdd");
	}

	UDishonoredCheatManager_execManaAdd_Params ManaAdd_Params;
	memset(&ManaAdd_Params, 0, sizeof(ManaAdd_Params));
	memcpy_s(&ManaAdd_Params._Amount, sizeof(ManaAdd_Params._Amount), &_Amount, sizeof(_Amount));

	this->ProcessEvent(uFnManaAdd, &ManaAdd_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerForceDeathDir
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44260])
// Parameter Info:

void UDishonoredCheatManager::PlayerForceDeathDir()
{
	static UFunction* uFnPlayerForceDeathDir = nullptr;

	if (!uFnPlayerForceDeathDir)
	{
		uFnPlayerForceDeathDir = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerForceDeathDir");
	}

	UDishonoredCheatManager_execPlayerForceDeathDir_Params PlayerForceDeathDir_Params;
	memset(&PlayerForceDeathDir_Params, 0, sizeof(PlayerForceDeathDir_Params));

	this->ProcessEvent(uFnPlayerForceDeathDir, &PlayerForceDeathDir_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.ClearObjectives
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30883])
// Parameter Info:

void UDishonoredCheatManager::ClearObjectives()
{
	static UFunction* uFnClearObjectives = nullptr;

	if (!uFnClearObjectives)
	{
		uFnClearObjectives = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.ClearObjectives");
	}

	UDishonoredCheatManager_execClearObjectives_Params ClearObjectives_Params;
	memset(&ClearObjectives_Params, 0, sizeof(ClearObjectives_Params));

	this->ProcessEvent(uFnClearObjectives, &ClearObjectives_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.RemoveObjective
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44694])
// Parameter Info:
// class FString                  _ObjectiveName                 (CPF_Parm | CPF_NeedCtorLink)

void UDishonoredCheatManager::RemoveObjective(const class FString& _ObjectiveName)
{
	static UFunction* uFnRemoveObjective = nullptr;

	if (!uFnRemoveObjective)
	{
		uFnRemoveObjective = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.RemoveObjective");
	}

	UDishonoredCheatManager_execRemoveObjective_Params RemoveObjective_Params;
	memset(&RemoveObjective_Params, 0, sizeof(RemoveObjective_Params));
	memcpy_s(&RemoveObjective_Params._ObjectiveName, sizeof(RemoveObjective_Params._ObjectiveName), &_ObjectiveName, sizeof(_ObjectiveName));

	this->ProcessEvent(uFnRemoveObjective, &RemoveObjective_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.AddObjective
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30031])
// Parameter Info:
// class FString                  _ObjectiveName                 (CPF_Parm | CPF_NeedCtorLink)

void UDishonoredCheatManager::AddObjective(const class FString& _ObjectiveName)
{
	static UFunction* uFnAddObjective = nullptr;

	if (!uFnAddObjective)
	{
		uFnAddObjective = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.AddObjective");
	}

	UDishonoredCheatManager_execAddObjective_Params AddObjective_Params;
	memset(&AddObjective_Params, 0, sizeof(AddObjective_Params));
	memcpy_s(&AddObjective_Params._ObjectiveName, sizeof(AddObjective_Params._ObjectiveName), &_ObjectiveName, sizeof(_ObjectiveName));

	this->ProcessEvent(uFnAddObjective, &AddObjective_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerTestAnim
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[44278])
// Parameter Info:
// class FString                  _AnimName                      (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       _bFullBody                     (CPF_OptionalParm | CPF_Parm)

void UDishonoredCheatManager::PlayerTestAnim(const class FString& _AnimName, bool _bFullBody)
{
	static UFunction* uFnPlayerTestAnim = nullptr;

	if (!uFnPlayerTestAnim)
	{
		uFnPlayerTestAnim = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerTestAnim");
	}

	UDishonoredCheatManager_execPlayerTestAnim_Params PlayerTestAnim_Params;
	memset(&PlayerTestAnim_Params, 0, sizeof(PlayerTestAnim_Params));
	memcpy_s(&PlayerTestAnim_Params._AnimName, sizeof(PlayerTestAnim_Params._AnimName), &_AnimName, sizeof(_AnimName));
	PlayerTestAnim_Params._bFullBody = _bFullBody;

	this->ProcessEvent(uFnPlayerTestAnim, &PlayerTestAnim_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDisableMeleeAssist
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44250])
// Parameter Info:

void UDishonoredCheatManager::PlayerDisableMeleeAssist()
{
	static UFunction* uFnPlayerDisableMeleeAssist = nullptr;

	if (!uFnPlayerDisableMeleeAssist)
	{
		uFnPlayerDisableMeleeAssist = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerDisableMeleeAssist");
	}

	UDishonoredCheatManager_execPlayerDisableMeleeAssist_Params PlayerDisableMeleeAssist_Params;
	memset(&PlayerDisableMeleeAssist_Params, 0, sizeof(PlayerDisableMeleeAssist_Params));

	this->ProcessEvent(uFnPlayerDisableMeleeAssist, &PlayerDisableMeleeAssist_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerForceLongFinishers
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44264])
// Parameter Info:

void UDishonoredCheatManager::PlayerForceLongFinishers()
{
	static UFunction* uFnPlayerForceLongFinishers = nullptr;

	if (!uFnPlayerForceLongFinishers)
	{
		uFnPlayerForceLongFinishers = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerForceLongFinishers");
	}

	UDishonoredCheatManager_execPlayerForceLongFinishers_Params PlayerForceLongFinishers_Params;
	memset(&PlayerForceLongFinishers_Params, 0, sizeof(PlayerForceLongFinishers_Params));

	this->ProcessEvent(uFnPlayerForceLongFinishers, &PlayerForceLongFinishers_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerForceFastFinishers
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44262])
// Parameter Info:

void UDishonoredCheatManager::PlayerForceFastFinishers()
{
	static UFunction* uFnPlayerForceFastFinishers = nullptr;

	if (!uFnPlayerForceFastFinishers)
	{
		uFnPlayerForceFastFinishers = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerForceFastFinishers");
	}

	UDishonoredCheatManager_execPlayerForceFastFinishers_Params PlayerForceFastFinishers_Params;
	memset(&PlayerForceFastFinishers_Params, 0, sizeof(PlayerForceFastFinishers_Params));

	this->ProcessEvent(uFnPlayerForceFastFinishers, &PlayerForceFastFinishers_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDisableAssassinate
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44247])
// Parameter Info:

void UDishonoredCheatManager::PlayerDisableAssassinate()
{
	static UFunction* uFnPlayerDisableAssassinate = nullptr;

	if (!uFnPlayerDisableAssassinate)
	{
		uFnPlayerDisableAssassinate = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerDisableAssassinate");
	}

	UDishonoredCheatManager_execPlayerDisableAssassinate_Params PlayerDisableAssassinate_Params;
	memset(&PlayerDisableAssassinate_Params, 0, sizeof(PlayerDisableAssassinate_Params));

	this->ProcessEvent(uFnPlayerDisableAssassinate, &PlayerDisableAssassinate_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDisableFatality
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44248])
// Parameter Info:

void UDishonoredCheatManager::PlayerDisableFatality()
{
	static UFunction* uFnPlayerDisableFatality = nullptr;

	if (!uFnPlayerDisableFatality)
	{
		uFnPlayerDisableFatality = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerDisableFatality");
	}

	UDishonoredCheatManager_execPlayerDisableFatality_Params PlayerDisableFatality_Params;
	memset(&PlayerDisableFatality_Params, 0, sizeof(PlayerDisableFatality_Params));

	this->ProcessEvent(uFnPlayerDisableFatality, &PlayerDisableFatality_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerSetFixedFatality
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44273])
// Parameter Info:

void UDishonoredCheatManager::PlayerSetFixedFatality()
{
	static UFunction* uFnPlayerSetFixedFatality = nullptr;

	if (!uFnPlayerSetFixedFatality)
	{
		uFnPlayerSetFixedFatality = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerSetFixedFatality");
	}

	UDishonoredCheatManager_execPlayerSetFixedFatality_Params PlayerSetFixedFatality_Params;
	memset(&PlayerSetFixedFatality_Params, 0, sizeof(PlayerSetFixedFatality_Params));

	this->ProcessEvent(uFnPlayerSetFixedFatality, &PlayerSetFixedFatality_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerForceReadyStance
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44265])
// Parameter Info:

void UDishonoredCheatManager::PlayerForceReadyStance()
{
	static UFunction* uFnPlayerForceReadyStance = nullptr;

	if (!uFnPlayerForceReadyStance)
	{
		uFnPlayerForceReadyStance = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerForceReadyStance");
	}

	UDishonoredCheatManager_execPlayerForceReadyStance_Params PlayerForceReadyStance_Params;
	memset(&PlayerForceReadyStance_Params, 0, sizeof(PlayerForceReadyStance_Params));

	this->ProcessEvent(uFnPlayerForceReadyStance, &PlayerForceReadyStance_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerSetDamage
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44272])
// Parameter Info:
// float                          fDesiredDamage                 (CPF_Parm)

void UDishonoredCheatManager::PlayerSetDamage(float fDesiredDamage)
{
	static UFunction* uFnPlayerSetDamage = nullptr;

	if (!uFnPlayerSetDamage)
	{
		uFnPlayerSetDamage = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerSetDamage");
	}

	UDishonoredCheatManager_execPlayerSetDamage_Params PlayerSetDamage_Params;
	memset(&PlayerSetDamage_Params, 0, sizeof(PlayerSetDamage_Params));
	memcpy_s(&PlayerSetDamage_Params.fDesiredDamage, sizeof(PlayerSetDamage_Params.fDesiredDamage), &fDesiredDamage, sizeof(fDesiredDamage));

	this->ProcessEvent(uFnPlayerSetDamage, &PlayerSetDamage_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerForceVisible
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44266])
// Parameter Info:

void UDishonoredCheatManager::PlayerForceVisible()
{
	static UFunction* uFnPlayerForceVisible = nullptr;

	if (!uFnPlayerForceVisible)
	{
		uFnPlayerForceVisible = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerForceVisible");
	}

	UDishonoredCheatManager_execPlayerForceVisible_Params PlayerForceVisible_Params;
	memset(&PlayerForceVisible_Params, 0, sizeof(PlayerForceVisible_Params));

	this->ProcessEvent(uFnPlayerForceVisible, &PlayerForceVisible_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDodgeNothing
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44255])
// Parameter Info:

void UDishonoredCheatManager::PlayerDodgeNothing()
{
	static UFunction* uFnPlayerDodgeNothing = nullptr;

	if (!uFnPlayerDodgeNothing)
	{
		uFnPlayerDodgeNothing = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerDodgeNothing");
	}

	UDishonoredCheatManager_execPlayerDodgeNothing_Params PlayerDodgeNothing_Params;
	memset(&PlayerDodgeNothing_Params, 0, sizeof(PlayerDodgeNothing_Params));

	this->ProcessEvent(uFnPlayerDodgeNothing, &PlayerDodgeNothing_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDodgeEverything
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44254])
// Parameter Info:

void UDishonoredCheatManager::PlayerDodgeEverything()
{
	static UFunction* uFnPlayerDodgeEverything = nullptr;

	if (!uFnPlayerDodgeEverything)
	{
		uFnPlayerDodgeEverything = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerDodgeEverything");
	}

	UDishonoredCheatManager_execPlayerDodgeEverything_Params PlayerDodgeEverything_Params;
	memset(&PlayerDodgeEverything_Params, 0, sizeof(PlayerDodgeEverything_Params));

	this->ProcessEvent(uFnPlayerDodgeEverything, &PlayerDodgeEverything_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerTestChain
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44280])
// Parameter Info:

void UDishonoredCheatManager::PlayerTestChain()
{
	static UFunction* uFnPlayerTestChain = nullptr;

	if (!uFnPlayerTestChain)
	{
		uFnPlayerTestChain = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerTestChain");
	}

	UDishonoredCheatManager_execPlayerTestChain_Params PlayerTestChain_Params;
	memset(&PlayerTestChain_Params, 0, sizeof(PlayerTestChain_Params));

	this->ProcessEvent(uFnPlayerTestChain, &PlayerTestChain_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.idkfa
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35506])
// Parameter Info:

void UDishonoredCheatManager::idkfa()
{
	static UFunction* uFnidkfa = nullptr;

	if (!uFnidkfa)
	{
		uFnidkfa = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.idkfa");
	}

	UDishonoredCheatManager_execidkfa_Params idkfa_Params;
	memset(&idkfa_Params, 0, sizeof(idkfa_Params));

	this->ProcessEvent(uFnidkfa, &idkfa_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.MaxItems
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43661])
// Parameter Info:

void UDishonoredCheatManager::MaxItems()
{
	static UFunction* uFnMaxItems = nullptr;

	if (!uFnMaxItems)
	{
		uFnMaxItems = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.MaxItems");
	}

	UDishonoredCheatManager_execMaxItems_Params MaxItems_Params;
	memset(&MaxItems_Params, 0, sizeof(MaxItems_Params));

	this->ProcessEvent(uFnMaxItems, &MaxItems_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.GivePlayerItem
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35327])
// Parameter Info:
// class FString                  _rTweakString                  (CPF_Parm | CPF_NeedCtorLink)

void UDishonoredCheatManager::GivePlayerItem(const class FString& _rTweakString)
{
	static UFunction* uFnGivePlayerItem = nullptr;

	if (!uFnGivePlayerItem)
	{
		uFnGivePlayerItem = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.GivePlayerItem");
	}

	UDishonoredCheatManager_execGivePlayerItem_Params GivePlayerItem_Params;
	memset(&GivePlayerItem_Params, 0, sizeof(GivePlayerItem_Params));
	memcpy_s(&GivePlayerItem_Params._rTweakString, sizeof(GivePlayerItem_Params._rTweakString), &_rTweakString, sizeof(_rTweakString));

	this->ProcessEvent(uFnGivePlayerItem, &GivePlayerItem_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.IgnorePlayerAimOffset
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       _bIgnore                       (CPF_Parm)

void UDishonoredCheatManager::IgnorePlayerAimOffset(bool _bIgnore)
{
	static UFunction* uFnIgnorePlayerAimOffset = nullptr;

	if (!uFnIgnorePlayerAimOffset)
	{
		uFnIgnorePlayerAimOffset = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.IgnorePlayerAimOffset");
	}

	UDishonoredCheatManager_execIgnorePlayerAimOffset_Params IgnorePlayerAimOffset_Params;
	memset(&IgnorePlayerAimOffset_Params, 0, sizeof(IgnorePlayerAimOffset_Params));
	IgnorePlayerAimOffset_Params._bIgnore = _bIgnore;

	this->ProcessEvent(uFnIgnorePlayerAimOffset, &IgnorePlayerAimOffset_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.TogglePlayerBodyMode
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UDishonoredCheatManager::TogglePlayerBodyMode()
{
	static UFunction* uFnTogglePlayerBodyMode = nullptr;

	if (!uFnTogglePlayerBodyMode)
	{
		uFnTogglePlayerBodyMode = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.TogglePlayerBodyMode");
	}

	UDishonoredCheatManager_execTogglePlayerBodyMode_Params TogglePlayerBodyMode_Params;
	memset(&TogglePlayerBodyMode_Params, 0, sizeof(TogglePlayerBodyMode_Params));

	this->ProcessEvent(uFnTogglePlayerBodyMode, &TogglePlayerBodyMode_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.TogglePlayerBodyMode_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45373])
// Parameter Info:
// class APawn*                   _pPawn                         (CPF_Parm)

void UDishonoredCheatManager::TogglePlayerBodyMode_Native(class APawn* _pPawn)
{
	static UFunction* uFnTogglePlayerBodyMode_Native = nullptr;

	if (!uFnTogglePlayerBodyMode_Native)
	{
		uFnTogglePlayerBodyMode_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.TogglePlayerBodyMode_Native");
	}

	UDishonoredCheatManager_execTogglePlayerBodyMode_Native_Params TogglePlayerBodyMode_Native_Params;
	memset(&TogglePlayerBodyMode_Native_Params, 0, sizeof(TogglePlayerBodyMode_Native_Params));
	TogglePlayerBodyMode_Native_Params._pPawn = _pPawn;

	this->ProcessEvent(uFnTogglePlayerBodyMode_Native, &TogglePlayerBodyMode_Native_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerArmsEnable
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44232])
// Parameter Info:
// uint32_t                       _bEnable                       (CPF_Parm)

void UDishonoredCheatManager::PlayerArmsEnable(bool _bEnable)
{
	static UFunction* uFnPlayerArmsEnable = nullptr;

	if (!uFnPlayerArmsEnable)
	{
		uFnPlayerArmsEnable = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerArmsEnable");
	}

	UDishonoredCheatManager_execPlayerArmsEnable_Params PlayerArmsEnable_Params;
	memset(&PlayerArmsEnable_Params, 0, sizeof(PlayerArmsEnable_Params));
	PlayerArmsEnable_Params._bEnable = _bEnable;

	this->ProcessEvent(uFnPlayerArmsEnable, &PlayerArmsEnable_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.PlayerArmsToggle
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44233])
// Parameter Info:

void UDishonoredCheatManager::PlayerArmsToggle()
{
	static UFunction* uFnPlayerArmsToggle = nullptr;

	if (!uFnPlayerArmsToggle)
	{
		uFnPlayerArmsToggle = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.PlayerArmsToggle");
	}

	UDishonoredCheatManager_execPlayerArmsToggle_Params PlayerArmsToggle_Params;
	memset(&PlayerArmsToggle_Params, 0, sizeof(PlayerArmsToggle_Params));

	this->ProcessEvent(uFnPlayerArmsToggle, &PlayerArmsToggle_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.SetCameraBob
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          _fBob                          (CPF_Parm)
// float                          _fRoll                         (CPF_Parm)

void UDishonoredCheatManager::SetCameraBob(float _fBob, float _fRoll)
{
	static UFunction* uFnSetCameraBob = nullptr;

	if (!uFnSetCameraBob)
	{
		uFnSetCameraBob = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.SetCameraBob");
	}

	UDishonoredCheatManager_execSetCameraBob_Params SetCameraBob_Params;
	memset(&SetCameraBob_Params, 0, sizeof(SetCameraBob_Params));
	memcpy_s(&SetCameraBob_Params._fBob, sizeof(SetCameraBob_Params._fBob), &_fBob, sizeof(_fBob));
	memcpy_s(&SetCameraBob_Params._fRoll, sizeof(SetCameraBob_Params._fRoll), &_fRoll, sizeof(_fRoll));

	this->ProcessEvent(uFnSetCameraBob, &SetCameraBob_Params, nullptr);
};

// Function DishonoredGame.DishonoredCheatManager.SetCameraBob_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44856])
// Parameter Info:
// class APawn*                   _pPawn                         (CPF_Parm)
// float                          _fBob                          (CPF_Parm)
// float                          _fRoll                         (CPF_Parm)

void UDishonoredCheatManager::SetCameraBob_Native(class APawn* _pPawn, float _fBob, float _fRoll)
{
	static UFunction* uFnSetCameraBob_Native = nullptr;

	if (!uFnSetCameraBob_Native)
	{
		uFnSetCameraBob_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredCheatManager.SetCameraBob_Native");
	}

	UDishonoredCheatManager_execSetCameraBob_Native_Params SetCameraBob_Native_Params;
	memset(&SetCameraBob_Native_Params, 0, sizeof(SetCameraBob_Native_Params));
	SetCameraBob_Native_Params._pPawn = _pPawn;
	memcpy_s(&SetCameraBob_Native_Params._fBob, sizeof(SetCameraBob_Native_Params._fBob), &_fBob, sizeof(_fBob));
	memcpy_s(&SetCameraBob_Native_Params._fRoll, sizeof(SetCameraBob_Native_Params._fRoll), &_fRoll, sizeof(_fRoll));

	this->ProcessEvent(uFnSetCameraBob_Native, &SetCameraBob_Native_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.UnlockAchievement
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        AchievementId                  (CPF_Parm)

void ADishonoredPlayerPawn::eventUnlockAchievement(int32_t AchievementId)
{
	static UFunction* uFnUnlockAchievement = nullptr;

	if (!uFnUnlockAchievement)
	{
		uFnUnlockAchievement = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.UnlockAchievement");
	}

	ADishonoredPlayerPawn_eventUnlockAchievement_Params UnlockAchievement_Params;
	memset(&UnlockAchievement_Params, 0, sizeof(UnlockAchievement_Params));
	memcpy_s(&UnlockAchievement_Params.AchievementId, sizeof(UnlockAchievement_Params.AchievementId), &AchievementId, sizeof(AchievementId));

	this->ProcessEvent(uFnUnlockAchievement, &UnlockAchievement_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.OnDestroy_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43895])
// Parameter Info:
// class FName                    _ActionName                    (CPF_Parm)

void ADishonoredPlayerPawn::OnDestroy_Native(const class FName& _ActionName)
{
	static UFunction* uFnOnDestroy_Native = nullptr;

	if (!uFnOnDestroy_Native)
	{
		uFnOnDestroy_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.OnDestroy_Native");
	}

	ADishonoredPlayerPawn_execOnDestroy_Native_Params OnDestroy_Native_Params;
	memset(&OnDestroy_Native_Params, 0, sizeof(OnDestroy_Native_Params));
	memcpy_s(&OnDestroy_Native_Params._ActionName, sizeof(OnDestroy_Native_Params._ActionName), &_ActionName, sizeof(_ActionName));

	this->ProcessEvent(uFnOnDestroy_Native, &OnDestroy_Native_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.OnDestroy
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Destroy*         _pAction                       (CPF_Parm)

void ADishonoredPlayerPawn::OnDestroy(class USeqAct_Destroy* _pAction)
{
	static UFunction* uFnOnDestroy = nullptr;

	if (!uFnOnDestroy)
	{
		uFnOnDestroy = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.OnDestroy");
	}

	ADishonoredPlayerPawn_execOnDestroy_Params OnDestroy_Params;
	memset(&OnDestroy_Params, 0, sizeof(OnDestroy_Params));
	OnDestroy_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnDestroy, &OnDestroy_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.NativePostRenderFor
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[23078])
// Parameter Info:
// class APlayerController*       _pPC                           (CPF_Parm)
// class UCanvas*                 _pCanvas                       (CPF_Parm)
// struct FVector                 _CameraPosition                (CPF_Parm)
// struct FVector                 _CameraDir                     (CPF_Parm)

void ADishonoredPlayerPawn::NativePostRenderFor(class APlayerController* _pPC, class UCanvas* _pCanvas, const struct FVector& _CameraPosition, const struct FVector& _CameraDir)
{
	static UFunction* uFnNativePostRenderFor = nullptr;

	if (!uFnNativePostRenderFor)
	{
		uFnNativePostRenderFor = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.NativePostRenderFor");
	}

	ADishonoredPlayerPawn_execNativePostRenderFor_Params NativePostRenderFor_Params;
	memset(&NativePostRenderFor_Params, 0, sizeof(NativePostRenderFor_Params));
	NativePostRenderFor_Params._pPC = _pPC;
	NativePostRenderFor_Params._pCanvas = _pCanvas;
	memcpy_s(&NativePostRenderFor_Params._CameraPosition, sizeof(NativePostRenderFor_Params._CameraPosition), &_CameraPosition, sizeof(_CameraPosition));
	memcpy_s(&NativePostRenderFor_Params._CameraDir, sizeof(NativePostRenderFor_Params._CameraDir), &_CameraDir, sizeof(_CameraDir));

	this->ProcessEvent(uFnNativePostRenderFor, &NativePostRenderFor_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.OnPlayerResurrect
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47592])
// Parameter Info:
// class USequenceAction*         _pAction                       (CPF_Parm)

void ADishonoredPlayerPawn::OnPlayerResurrect(class USequenceAction* _pAction)
{
	static UFunction* uFnOnPlayerResurrect = nullptr;

	if (!uFnOnPlayerResurrect)
	{
		uFnOnPlayerResurrect = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.OnPlayerResurrect");
	}

	ADishonoredPlayerPawn_execOnPlayerResurrect_Params OnPlayerResurrect_Params;
	memset(&OnPlayerResurrect_Params, 0, sizeof(OnPlayerResurrect_Params));
	OnPlayerResurrect_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnPlayerResurrect, &OnPlayerResurrect_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.OnCancelPlayerActivePower
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43890])
// Parameter Info:
// class UDisSeqAct_CancelPlayerActivePower* _pAction                       (CPF_Parm)

void ADishonoredPlayerPawn::OnCancelPlayerActivePower(class UDisSeqAct_CancelPlayerActivePower* _pAction)
{
	static UFunction* uFnOnCancelPlayerActivePower = nullptr;

	if (!uFnOnCancelPlayerActivePower)
	{
		uFnOnCancelPlayerActivePower = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.OnCancelPlayerActivePower");
	}

	ADishonoredPlayerPawn_execOnCancelPlayerActivePower_Params OnCancelPlayerActivePower_Params;
	memset(&OnCancelPlayerActivePower_Params, 0, sizeof(OnCancelPlayerActivePower_Params));
	OnCancelPlayerActivePower_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnCancelPlayerActivePower, &OnCancelPlayerActivePower_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.OnToggleTutorial
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44002])
// Parameter Info:
// class UDisSeqAct_ToggleTutorial* _pAction                       (CPF_Parm)

void ADishonoredPlayerPawn::OnToggleTutorial(class UDisSeqAct_ToggleTutorial* _pAction)
{
	static UFunction* uFnOnToggleTutorial = nullptr;

	if (!uFnOnToggleTutorial)
	{
		uFnOnToggleTutorial = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.OnToggleTutorial");
	}

	ADishonoredPlayerPawn_execOnToggleTutorial_Params OnToggleTutorial_Params;
	memset(&OnToggleTutorial_Params, 0, sizeof(OnToggleTutorial_Params));
	OnToggleTutorial_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnToggleTutorial, &OnToggleTutorial_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.OnToggleChoke
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43996])
// Parameter Info:
// class UDisSeqAct_ToggleChoke*  _pAction                       (CPF_Parm)

void ADishonoredPlayerPawn::OnToggleChoke(class UDisSeqAct_ToggleChoke* _pAction)
{
	static UFunction* uFnOnToggleChoke = nullptr;

	if (!uFnOnToggleChoke)
	{
		uFnOnToggleChoke = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.OnToggleChoke");
	}

	ADishonoredPlayerPawn_execOnToggleChoke_Params OnToggleChoke_Params;
	memset(&OnToggleChoke_Params, 0, sizeof(OnToggleChoke_Params));
	OnToggleChoke_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnToggleChoke, &OnToggleChoke_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.OnOverrideAwarenessDisplay
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43952])
// Parameter Info:
// class UDisSeqAct_OverrideAwarenessDisplay* _pAction                       (CPF_Parm)

void ADishonoredPlayerPawn::OnOverrideAwarenessDisplay(class UDisSeqAct_OverrideAwarenessDisplay* _pAction)
{
	static UFunction* uFnOnOverrideAwarenessDisplay = nullptr;

	if (!uFnOnOverrideAwarenessDisplay)
	{
		uFnOnOverrideAwarenessDisplay = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.OnOverrideAwarenessDisplay");
	}

	ADishonoredPlayerPawn_execOnOverrideAwarenessDisplay_Params OnOverrideAwarenessDisplay_Params;
	memset(&OnOverrideAwarenessDisplay_Params, 0, sizeof(OnOverrideAwarenessDisplay_Params));
	OnOverrideAwarenessDisplay_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnOverrideAwarenessDisplay, &OnOverrideAwarenessDisplay_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.OnSetPlayerMana
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43983])
// Parameter Info:
// class UDisSeqAct_SetPlayerMana* _pAction                       (CPF_Parm)

void ADishonoredPlayerPawn::OnSetPlayerMana(class UDisSeqAct_SetPlayerMana* _pAction)
{
	static UFunction* uFnOnSetPlayerMana = nullptr;

	if (!uFnOnSetPlayerMana)
	{
		uFnOnSetPlayerMana = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.OnSetPlayerMana");
	}

	ADishonoredPlayerPawn_execOnSetPlayerMana_Params OnSetPlayerMana_Params;
	memset(&OnSetPlayerMana_Params, 0, sizeof(OnSetPlayerMana_Params));
	OnSetPlayerMana_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnSetPlayerMana, &OnSetPlayerMana_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.OnSetPlayerHealth
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43982])
// Parameter Info:
// class UDisSeqAct_SetPlayerHealth* _pAction                       (CPF_Parm)

void ADishonoredPlayerPawn::OnSetPlayerHealth(class UDisSeqAct_SetPlayerHealth* _pAction)
{
	static UFunction* uFnOnSetPlayerHealth = nullptr;

	if (!uFnOnSetPlayerHealth)
	{
		uFnOnSetPlayerHealth = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.OnSetPlayerHealth");
	}

	ADishonoredPlayerPawn_execOnSetPlayerHealth_Params OnSetPlayerHealth_Params;
	memset(&OnSetPlayerHealth_Params, 0, sizeof(OnSetPlayerHealth_Params));
	OnSetPlayerHealth_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnSetPlayerHealth, &OnSetPlayerHealth_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.OnAdrenalineToggle
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43868])
// Parameter Info:
// class UDisSeqAct_AdrenalineToggle* _pAction                       (CPF_Parm)

void ADishonoredPlayerPawn::OnAdrenalineToggle(class UDisSeqAct_AdrenalineToggle* _pAction)
{
	static UFunction* uFnOnAdrenalineToggle = nullptr;

	if (!uFnOnAdrenalineToggle)
	{
		uFnOnAdrenalineToggle = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.OnAdrenalineToggle");
	}

	ADishonoredPlayerPawn_execOnAdrenalineToggle_Params OnAdrenalineToggle_Params;
	memset(&OnAdrenalineToggle_Params, 0, sizeof(OnAdrenalineToggle_Params));
	OnAdrenalineToggle_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnAdrenalineToggle, &OnAdrenalineToggle_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.OnGivePickup
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43926])
// Parameter Info:
// class UDisSeqAct_GivePickup*   _pAction                       (CPF_Parm)

void ADishonoredPlayerPawn::OnGivePickup(class UDisSeqAct_GivePickup* _pAction)
{
	static UFunction* uFnOnGivePickup = nullptr;

	if (!uFnOnGivePickup)
	{
		uFnOnGivePickup = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.OnGivePickup");
	}

	ADishonoredPlayerPawn_execOnGivePickup_Params OnGivePickup_Params;
	memset(&OnGivePickup_Params, 0, sizeof(OnGivePickup_Params));
	OnGivePickup_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnGivePickup, &OnGivePickup_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.OnApplyPlayerLoadout
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43885])
// Parameter Info:
// class UDisSeqAct_ApplyPlayerLoadout* _pAction                       (CPF_Parm)

void ADishonoredPlayerPawn::OnApplyPlayerLoadout(class UDisSeqAct_ApplyPlayerLoadout* _pAction)
{
	static UFunction* uFnOnApplyPlayerLoadout = nullptr;

	if (!uFnOnApplyPlayerLoadout)
	{
		uFnOnApplyPlayerLoadout = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.OnApplyPlayerLoadout");
	}

	ADishonoredPlayerPawn_execOnApplyPlayerLoadout_Params OnApplyPlayerLoadout_Params;
	memset(&OnApplyPlayerLoadout_Params, 0, sizeof(OnApplyPlayerLoadout_Params));
	OnApplyPlayerLoadout_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnApplyPlayerLoadout, &OnApplyPlayerLoadout_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.OnTogglePlayerLeftHand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44000])
// Parameter Info:
// class UDisSeqAct_TogglePlayerLeftHand* _pAction                       (CPF_Parm)

void ADishonoredPlayerPawn::OnTogglePlayerLeftHand(class UDisSeqAct_TogglePlayerLeftHand* _pAction)
{
	static UFunction* uFnOnTogglePlayerLeftHand = nullptr;

	if (!uFnOnTogglePlayerLeftHand)
	{
		uFnOnTogglePlayerLeftHand = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.OnTogglePlayerLeftHand");
	}

	ADishonoredPlayerPawn_execOnTogglePlayerLeftHand_Params OnTogglePlayerLeftHand_Params;
	memset(&OnTogglePlayerLeftHand_Params, 0, sizeof(OnTogglePlayerLeftHand_Params));
	OnTogglePlayerLeftHand_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnTogglePlayerLeftHand, &OnTogglePlayerLeftHand_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.OnToggleJournal
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43998])
// Parameter Info:
// class UDisSeqAct_ToggleJournal* _pAction                       (CPF_Parm)

void ADishonoredPlayerPawn::OnToggleJournal(class UDisSeqAct_ToggleJournal* _pAction)
{
	static UFunction* uFnOnToggleJournal = nullptr;

	if (!uFnOnToggleJournal)
	{
		uFnOnToggleJournal = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.OnToggleJournal");
	}

	ADishonoredPlayerPawn_execOnToggleJournal_Params OnToggleJournal_Params;
	memset(&OnToggleJournal_Params, 0, sizeof(OnToggleJournal_Params));
	OnToggleJournal_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnToggleJournal, &OnToggleJournal_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.OnTogglePowerWheel
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44001])
// Parameter Info:
// class UDisSeqAct_TogglePowerWheel* _pAction                       (CPF_Parm)

void ADishonoredPlayerPawn::OnTogglePowerWheel(class UDisSeqAct_TogglePowerWheel* _pAction)
{
	static UFunction* uFnOnTogglePowerWheel = nullptr;

	if (!uFnOnTogglePowerWheel)
	{
		uFnOnTogglePowerWheel = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.OnTogglePowerWheel");
	}

	ADishonoredPlayerPawn_execOnTogglePowerWheel_Params OnTogglePowerWheel_Params;
	memset(&OnTogglePowerWheel_Params, 0, sizeof(OnTogglePowerWheel_Params));
	OnTogglePowerWheel_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnTogglePowerWheel, &OnTogglePowerWheel_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.OnToggleAchievementEval
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43995])
// Parameter Info:
// class UDisSeqAct_ToggleAchievementEval* _pAction                       (CPF_Parm)

void ADishonoredPlayerPawn::OnToggleAchievementEval(class UDisSeqAct_ToggleAchievementEval* _pAction)
{
	static UFunction* uFnOnToggleAchievementEval = nullptr;

	if (!uFnOnToggleAchievementEval)
	{
		uFnOnToggleAchievementEval = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.OnToggleAchievementEval");
	}

	ADishonoredPlayerPawn_execOnToggleAchievementEval_Params OnToggleAchievementEval_Params;
	memset(&OnToggleAchievementEval_Params, 0, sizeof(OnToggleAchievementEval_Params));
	OnToggleAchievementEval_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnToggleAchievementEval, &OnToggleAchievementEval_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.OnGetPlayerStat
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43925])
// Parameter Info:
// class UDisSeqAct_GetPlayerStat* _pAction                       (CPF_Parm)

void ADishonoredPlayerPawn::OnGetPlayerStat(class UDisSeqAct_GetPlayerStat* _pAction)
{
	static UFunction* uFnOnGetPlayerStat = nullptr;

	if (!uFnOnGetPlayerStat)
	{
		uFnOnGetPlayerStat = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.OnGetPlayerStat");
	}

	ADishonoredPlayerPawn_execOnGetPlayerStat_Params OnGetPlayerStat_Params;
	memset(&OnGetPlayerStat_Params, 0, sizeof(OnGetPlayerStat_Params));
	OnGetPlayerStat_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnGetPlayerStat, &OnGetPlayerStat_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.OnEvalAchievement
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43910])
// Parameter Info:
// class UDisSeqAct_EvalAchievement* _pAction                       (CPF_Parm)

void ADishonoredPlayerPawn::OnEvalAchievement(class UDisSeqAct_EvalAchievement* _pAction)
{
	static UFunction* uFnOnEvalAchievement = nullptr;

	if (!uFnOnEvalAchievement)
	{
		uFnOnEvalAchievement = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.OnEvalAchievement");
	}

	ADishonoredPlayerPawn_execOnEvalAchievement_Params OnEvalAchievement_Params;
	memset(&OnEvalAchievement_Params, 0, sizeof(OnEvalAchievement_Params));
	OnEvalAchievement_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnEvalAchievement, &OnEvalAchievement_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.OnGiveUpgrade
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43927])
// Parameter Info:
// class UDisSeqAct_GiveUpgrade*  _pAction                       (CPF_Parm)

void ADishonoredPlayerPawn::OnGiveUpgrade(class UDisSeqAct_GiveUpgrade* _pAction)
{
	static UFunction* uFnOnGiveUpgrade = nullptr;

	if (!uFnOnGiveUpgrade)
	{
		uFnOnGiveUpgrade = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.OnGiveUpgrade");
	}

	ADishonoredPlayerPawn_execOnGiveUpgrade_Params OnGiveUpgrade_Params;
	memset(&OnGiveUpgrade_Params, 0, sizeof(OnGiveUpgrade_Params));
	OnGiveUpgrade_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnGiveUpgrade, &OnGiveUpgrade_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.OnRemoveKey
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43961])
// Parameter Info:
// class UDisSeqAct_RemoveKey*    _pAction                       (CPF_Parm)

void ADishonoredPlayerPawn::OnRemoveKey(class UDisSeqAct_RemoveKey* _pAction)
{
	static UFunction* uFnOnRemoveKey = nullptr;

	if (!uFnOnRemoveKey)
	{
		uFnOnRemoveKey = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.OnRemoveKey");
	}

	ADishonoredPlayerPawn_execOnRemoveKey_Params OnRemoveKey_Params;
	memset(&OnRemoveKey_Params, 0, sizeof(OnRemoveKey_Params));
	OnRemoveKey_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnRemoveKey, &OnRemoveKey_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.OnAddKey
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43866])
// Parameter Info:
// class UDisSeqAct_AddKey*       _pAction                       (CPF_Parm)

void ADishonoredPlayerPawn::OnAddKey(class UDisSeqAct_AddKey* _pAction)
{
	static UFunction* uFnOnAddKey = nullptr;

	if (!uFnOnAddKey)
	{
		uFnOnAddKey = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.OnAddKey");
	}

	ADishonoredPlayerPawn_execOnAddKey_Params OnAddKey_Params;
	memset(&OnAddKey_Params, 0, sizeof(OnAddKey_Params));
	OnAddKey_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnAddKey, &OnAddKey_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.OnMinPowers
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43938])
// Parameter Info:
// class UDisSeqAct_MinPowers*    _pAction                       (CPF_Parm)

void ADishonoredPlayerPawn::OnMinPowers(class UDisSeqAct_MinPowers* _pAction)
{
	static UFunction* uFnOnMinPowers = nullptr;

	if (!uFnOnMinPowers)
	{
		uFnOnMinPowers = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.OnMinPowers");
	}

	ADishonoredPlayerPawn_execOnMinPowers_Params OnMinPowers_Params;
	memset(&OnMinPowers_Params, 0, sizeof(OnMinPowers_Params));
	OnMinPowers_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnMinPowers, &OnMinPowers_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.OnMaxPowers
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43935])
// Parameter Info:
// class UDisSeqAct_MaxPowers*    _pAction                       (CPF_Parm)

void ADishonoredPlayerPawn::OnMaxPowers(class UDisSeqAct_MaxPowers* _pAction)
{
	static UFunction* uFnOnMaxPowers = nullptr;

	if (!uFnOnMaxPowers)
	{
		uFnOnMaxPowers = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.OnMaxPowers");
	}

	ADishonoredPlayerPawn_execOnMaxPowers_Params OnMaxPowers_Params;
	memset(&OnMaxPowers_Params, 0, sizeof(OnMaxPowers_Params));
	OnMaxPowers_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnMaxPowers, &OnMaxPowers_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.OnRemoveAttributeModifier
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43960])
// Parameter Info:
// class UDisSeqAct_RemoveAttributeModifier* _pAction                       (CPF_Parm)

void ADishonoredPlayerPawn::OnRemoveAttributeModifier(class UDisSeqAct_RemoveAttributeModifier* _pAction)
{
	static UFunction* uFnOnRemoveAttributeModifier = nullptr;

	if (!uFnOnRemoveAttributeModifier)
	{
		uFnOnRemoveAttributeModifier = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.OnRemoveAttributeModifier");
	}

	ADishonoredPlayerPawn_execOnRemoveAttributeModifier_Params OnRemoveAttributeModifier_Params;
	memset(&OnRemoveAttributeModifier_Params, 0, sizeof(OnRemoveAttributeModifier_Params));
	OnRemoveAttributeModifier_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnRemoveAttributeModifier, &OnRemoveAttributeModifier_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.OnAddAttributeModifier
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43864])
// Parameter Info:
// class UDisSeqAct_AddAttributeModifier* _pAction                       (CPF_Parm)

void ADishonoredPlayerPawn::OnAddAttributeModifier(class UDisSeqAct_AddAttributeModifier* _pAction)
{
	static UFunction* uFnOnAddAttributeModifier = nullptr;

	if (!uFnOnAddAttributeModifier)
	{
		uFnOnAddAttributeModifier = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.OnAddAttributeModifier");
	}

	ADishonoredPlayerPawn_execOnAddAttributeModifier_Params OnAddAttributeModifier_Params;
	memset(&OnAddAttributeModifier_Params, 0, sizeof(OnAddAttributeModifier_Params));
	OnAddAttributeModifier_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnAddAttributeModifier, &OnAddAttributeModifier_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.OnRemovePower
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43962])
// Parameter Info:
// class UDisSeqAct_RemovePower*  _pAction                       (CPF_Parm)

void ADishonoredPlayerPawn::OnRemovePower(class UDisSeqAct_RemovePower* _pAction)
{
	static UFunction* uFnOnRemovePower = nullptr;

	if (!uFnOnRemovePower)
	{
		uFnOnRemovePower = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.OnRemovePower");
	}

	ADishonoredPlayerPawn_execOnRemovePower_Params OnRemovePower_Params;
	memset(&OnRemovePower_Params, 0, sizeof(OnRemovePower_Params));
	OnRemovePower_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnRemovePower, &OnRemovePower_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.OnAddPower
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43867])
// Parameter Info:
// class UDisSeqAct_AddPower*     _pAction                       (CPF_Parm)

void ADishonoredPlayerPawn::OnAddPower(class UDisSeqAct_AddPower* _pAction)
{
	static UFunction* uFnOnAddPower = nullptr;

	if (!uFnOnAddPower)
	{
		uFnOnAddPower = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.OnAddPower");
	}

	ADishonoredPlayerPawn_execOnAddPower_Params OnAddPower_Params;
	memset(&OnAddPower_Params, 0, sizeof(OnAddPower_Params));
	OnAddPower_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnAddPower, &OnAddPower_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.TakeDamage_Native
// [0x00424400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[45311])
// Parameter Info:
// class AController*             _pInstigatedBy                 (CPF_Parm)
// struct FVector                 _HitLocation                   (CPF_Parm)
// class UClass*                  _pDamageType                   (CPF_Parm)
// struct FTraceHitInfo           _HitInfo                       (CPF_OptionalParm | CPF_Parm)
// class AActor*                  _pDamageCauser                 (CPF_OptionalParm | CPF_Parm)
// int32_t                        _rDamage                       (CPF_Parm | CPF_OutParm)
// struct FVector                 _rMomentum                     (CPF_Parm | CPF_OutParm)

void ADishonoredPlayerPawn::TakeDamage_Native(class AController* _pInstigatedBy, const struct FVector& _HitLocation, class UClass* _pDamageType, const struct FTraceHitInfo& _HitInfo, class AActor* _pDamageCauser, int32_t& _rDamage, struct FVector& _rMomentum)
{
	static UFunction* uFnTakeDamage_Native = nullptr;

	if (!uFnTakeDamage_Native)
	{
		uFnTakeDamage_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.TakeDamage_Native");
	}

	ADishonoredPlayerPawn_execTakeDamage_Native_Params TakeDamage_Native_Params;
	memset(&TakeDamage_Native_Params, 0, sizeof(TakeDamage_Native_Params));
	TakeDamage_Native_Params._pInstigatedBy = _pInstigatedBy;
	memcpy_s(&TakeDamage_Native_Params._HitLocation, sizeof(TakeDamage_Native_Params._HitLocation), &_HitLocation, sizeof(_HitLocation));
	TakeDamage_Native_Params._pDamageType = _pDamageType;
	memcpy_s(&TakeDamage_Native_Params._HitInfo, sizeof(TakeDamage_Native_Params._HitInfo), &_HitInfo, sizeof(_HitInfo));
	TakeDamage_Native_Params._pDamageCauser = _pDamageCauser;
	memcpy_s(&TakeDamage_Native_Params._rDamage, sizeof(TakeDamage_Native_Params._rDamage), &_rDamage, sizeof(_rDamage));
	memcpy_s(&TakeDamage_Native_Params._rMomentum, sizeof(TakeDamage_Native_Params._rMomentum), &_rMomentum, sizeof(_rMomentum));

	this->ProcessEvent(uFnTakeDamage_Native, &TakeDamage_Native_Params, nullptr);

	memcpy_s(&_rDamage, sizeof(_rDamage), &TakeDamage_Native_Params._rDamage, sizeof(TakeDamage_Native_Params._rDamage));
	memcpy_s(&_rMomentum, sizeof(_rMomentum), &TakeDamage_Native_Params._rMomentum, sizeof(TakeDamage_Native_Params._rMomentum));
};

// Function DishonoredGame.DishonoredPlayerPawn.PlayDying_Native
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44228])
// Parameter Info:
// class AController*             Killer                         (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FVector                 HitLoc                         (CPF_Parm)

void ADishonoredPlayerPawn::PlayDying_Native(class AController* Killer, class UClass* DamageType, const struct FVector& HitLoc)
{
	static UFunction* uFnPlayDying_Native = nullptr;

	if (!uFnPlayDying_Native)
	{
		uFnPlayDying_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.PlayDying_Native");
	}

	ADishonoredPlayerPawn_execPlayDying_Native_Params PlayDying_Native_Params;
	memset(&PlayDying_Native_Params, 0, sizeof(PlayDying_Native_Params));
	PlayDying_Native_Params.Killer = Killer;
	PlayDying_Native_Params.DamageType = DamageType;
	memcpy_s(&PlayDying_Native_Params.HitLoc, sizeof(PlayDying_Native_Params.HitLoc), &HitLoc, sizeof(HitLoc));

	this->ProcessEvent(uFnPlayDying_Native, &PlayDying_Native_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.FaceRotation
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[19984])
// Parameter Info:
// struct FRotator                _NewRotation                   (CPF_Parm)
// float                          _fDeltaTime                    (CPF_Parm)

void ADishonoredPlayerPawn::FaceRotation(const struct FRotator& _NewRotation, float _fDeltaTime)
{
	static UFunction* uFnFaceRotation = nullptr;

	if (!uFnFaceRotation)
	{
		uFnFaceRotation = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.FaceRotation");
	}

	ADishonoredPlayerPawn_execFaceRotation_Params FaceRotation_Params;
	memset(&FaceRotation_Params, 0, sizeof(FaceRotation_Params));
	memcpy_s(&FaceRotation_Params._NewRotation, sizeof(FaceRotation_Params._NewRotation), &_NewRotation, sizeof(_NewRotation));
	memcpy_s(&FaceRotation_Params._fDeltaTime, sizeof(FaceRotation_Params._fDeltaTime), &_fDeltaTime, sizeof(_fDeltaTime));

	this->ProcessEvent(uFnFaceRotation, &FaceRotation_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.IsInvisible
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[21396])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool ADishonoredPlayerPawn::IsInvisible()
{
	static UFunction* uFnIsInvisible = nullptr;

	if (!uFnIsInvisible)
	{
		uFnIsInvisible = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.IsInvisible");
	}

	ADishonoredPlayerPawn_execIsInvisible_Params IsInvisible_Params;
	memset(&IsInvisible_Params, 0, sizeof(IsInvisible_Params));

	this->ProcessEvent(uFnIsInvisible, &IsInvisible_Params, nullptr);

	return IsInvisible_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredPlayerPawn.CheatFly
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool ADishonoredPlayerPawn::CheatFly()
{
	static UFunction* uFnCheatFly = nullptr;

	if (!uFnCheatFly)
	{
		uFnCheatFly = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.CheatFly");
	}

	ADishonoredPlayerPawn_execCheatFly_Params CheatFly_Params;
	memset(&CheatFly_Params, 0, sizeof(CheatFly_Params));

	this->ProcessEvent(uFnCheatFly, &CheatFly_Params, nullptr);

	return CheatFly_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredPlayerPawn.CheatFly_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30858])
// Parameter Info:

void ADishonoredPlayerPawn::CheatFly_Native()
{
	static UFunction* uFnCheatFly_Native = nullptr;

	if (!uFnCheatFly_Native)
	{
		uFnCheatFly_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.CheatFly_Native");
	}

	ADishonoredPlayerPawn_execCheatFly_Native_Params CheatFly_Native_Params;
	memset(&CheatFly_Native_Params, 0, sizeof(CheatFly_Native_Params));

	this->ProcessEvent(uFnCheatFly_Native, &CheatFly_Native_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.CheatGhost
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool ADishonoredPlayerPawn::CheatGhost()
{
	static UFunction* uFnCheatGhost = nullptr;

	if (!uFnCheatGhost)
	{
		uFnCheatGhost = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.CheatGhost");
	}

	ADishonoredPlayerPawn_execCheatGhost_Params CheatGhost_Params;
	memset(&CheatGhost_Params, 0, sizeof(CheatGhost_Params));

	this->ProcessEvent(uFnCheatGhost, &CheatGhost_Params, nullptr);

	return CheatGhost_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredPlayerPawn.CheatGhost_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30859])
// Parameter Info:

void ADishonoredPlayerPawn::CheatGhost_Native()
{
	static UFunction* uFnCheatGhost_Native = nullptr;

	if (!uFnCheatGhost_Native)
	{
		uFnCheatGhost_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.CheatGhost_Native");
	}

	ADishonoredPlayerPawn_execCheatGhost_Native_Params CheatGhost_Native_Params;
	memset(&CheatGhost_Native_Params, 0, sizeof(CheatGhost_Native_Params));

	this->ProcessEvent(uFnCheatGhost_Native, &CheatGhost_Native_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.CheatWalk
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool ADishonoredPlayerPawn::CheatWalk()
{
	static UFunction* uFnCheatWalk = nullptr;

	if (!uFnCheatWalk)
	{
		uFnCheatWalk = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.CheatWalk");
	}

	ADishonoredPlayerPawn_execCheatWalk_Params CheatWalk_Params;
	memset(&CheatWalk_Params, 0, sizeof(CheatWalk_Params));

	this->ProcessEvent(uFnCheatWalk, &CheatWalk_Params, nullptr);

	return CheatWalk_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredPlayerPawn.CheatWalk_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30860])
// Parameter Info:

void ADishonoredPlayerPawn::CheatWalk_Native()
{
	static UFunction* uFnCheatWalk_Native = nullptr;

	if (!uFnCheatWalk_Native)
	{
		uFnCheatWalk_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.CheatWalk_Native");
	}

	ADishonoredPlayerPawn_execCheatWalk_Native_Params CheatWalk_Native_Params;
	memset(&CheatWalk_Native_Params, 0, sizeof(CheatWalk_Native_Params));

	this->ProcessEvent(uFnCheatWalk_Native, &CheatWalk_Native_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.DisplayDebug_Cheats
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[32320])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AHUD*                    _HUD                           (CPF_Parm)
// float                          _fOut_YL                       (CPF_Parm | CPF_OutParm)
// float                          _fOut_YPos                     (CPF_Parm | CPF_OutParm)

bool ADishonoredPlayerPawn::DisplayDebug_Cheats(class AHUD* _HUD, float& _fOut_YL, float& _fOut_YPos)
{
	static UFunction* uFnDisplayDebug_Cheats = nullptr;

	if (!uFnDisplayDebug_Cheats)
	{
		uFnDisplayDebug_Cheats = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.DisplayDebug_Cheats");
	}

	ADishonoredPlayerPawn_execDisplayDebug_Cheats_Params DisplayDebug_Cheats_Params;
	memset(&DisplayDebug_Cheats_Params, 0, sizeof(DisplayDebug_Cheats_Params));
	DisplayDebug_Cheats_Params._HUD = _HUD;
	memcpy_s(&DisplayDebug_Cheats_Params._fOut_YL, sizeof(DisplayDebug_Cheats_Params._fOut_YL), &_fOut_YL, sizeof(_fOut_YL));
	memcpy_s(&DisplayDebug_Cheats_Params._fOut_YPos, sizeof(DisplayDebug_Cheats_Params._fOut_YPos), &_fOut_YPos, sizeof(_fOut_YPos));

	this->ProcessEvent(uFnDisplayDebug_Cheats, &DisplayDebug_Cheats_Params, nullptr);

	memcpy_s(&_fOut_YL, sizeof(_fOut_YL), &DisplayDebug_Cheats_Params._fOut_YL, sizeof(DisplayDebug_Cheats_Params._fOut_YL));
	memcpy_s(&_fOut_YPos, sizeof(_fOut_YPos), &DisplayDebug_Cheats_Params._fOut_YPos, sizeof(DisplayDebug_Cheats_Params._fOut_YPos));

	return DisplayDebug_Cheats_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredPlayerPawn.DisplayDebug
// [0x00420102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class AHUD*                    _HUD                           (CPF_Parm)
// float                          _fOut_YL                       (CPF_Parm | CPF_OutParm)
// float                          _fOut_YPos                     (CPF_Parm | CPF_OutParm)

void ADishonoredPlayerPawn::DisplayDebug(class AHUD* _HUD, float& _fOut_YL, float& _fOut_YPos)
{
	static UFunction* uFnDisplayDebug = nullptr;

	if (!uFnDisplayDebug)
	{
		uFnDisplayDebug = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.DisplayDebug");
	}

	ADishonoredPlayerPawn_execDisplayDebug_Params DisplayDebug_Params;
	memset(&DisplayDebug_Params, 0, sizeof(DisplayDebug_Params));
	DisplayDebug_Params._HUD = _HUD;
	memcpy_s(&DisplayDebug_Params._fOut_YL, sizeof(DisplayDebug_Params._fOut_YL), &_fOut_YL, sizeof(_fOut_YL));
	memcpy_s(&DisplayDebug_Params._fOut_YPos, sizeof(DisplayDebug_Params._fOut_YPos), &_fOut_YPos, sizeof(_fOut_YPos));

	this->ProcessEvent(uFnDisplayDebug, &DisplayDebug_Params, nullptr);

	memcpy_s(&_fOut_YL, sizeof(_fOut_YL), &DisplayDebug_Params._fOut_YL, sizeof(DisplayDebug_Params._fOut_YL));
	memcpy_s(&_fOut_YPos, sizeof(_fOut_YPos), &DisplayDebug_Params._fOut_YPos, sizeof(DisplayDebug_Params._fOut_YPos));
};

// Function DishonoredGame.DishonoredPlayerPawn.DoJump
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[19114])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       _bUpdating                     (CPF_Parm)

bool ADishonoredPlayerPawn::DoJump(bool _bUpdating)
{
	static UFunction* uFnDoJump = nullptr;

	if (!uFnDoJump)
	{
		uFnDoJump = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.DoJump");
	}

	ADishonoredPlayerPawn_execDoJump_Params DoJump_Params;
	memset(&DoJump_Params, 0, sizeof(DoJump_Params));
	DoJump_Params._bUpdating = _bUpdating;

	this->ProcessEvent(uFnDoJump, &DoJump_Params, nullptr);

	return DoJump_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredPlayerPawn.EndCrouch
// [0x00020D00] (FUNC_Simulated | FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[13521])
// Parameter Info:
// float                          _fHeightAdjust                 (CPF_Parm)

void ADishonoredPlayerPawn::eventEndCrouch(float _fHeightAdjust)
{
	static UFunction* uFnEndCrouch = nullptr;

	if (!uFnEndCrouch)
	{
		uFnEndCrouch = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.EndCrouch");
	}

	ADishonoredPlayerPawn_eventEndCrouch_Params EndCrouch_Params;
	memset(&EndCrouch_Params, 0, sizeof(EndCrouch_Params));
	memcpy_s(&EndCrouch_Params._fHeightAdjust, sizeof(EndCrouch_Params._fHeightAdjust), &_fHeightAdjust, sizeof(_fHeightAdjust));

	this->ProcessEvent(uFnEndCrouch, &EndCrouch_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.StartCrouch
// [0x00020D00] (FUNC_Simulated | FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[13759])
// Parameter Info:
// float                          _fHeightAdjust                 (CPF_Parm)

void ADishonoredPlayerPawn::eventStartCrouch(float _fHeightAdjust)
{
	static UFunction* uFnStartCrouch = nullptr;

	if (!uFnStartCrouch)
	{
		uFnStartCrouch = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.StartCrouch");
	}

	ADishonoredPlayerPawn_eventStartCrouch_Params StartCrouch_Params;
	memset(&StartCrouch_Params, 0, sizeof(StartCrouch_Params));
	memcpy_s(&StartCrouch_Params._fHeightAdjust, sizeof(StartCrouch_Params._fHeightAdjust), &_fHeightAdjust, sizeof(_fHeightAdjust));

	this->ProcessEvent(uFnStartCrouch, &StartCrouch_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.Landed_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35678])
// Parameter Info:
// struct FVector                 HitNormal                      (CPF_Parm)
// class AActor*                  pFloorActor                    (CPF_Parm)

void ADishonoredPlayerPawn::Landed_Native(const struct FVector& HitNormal, class AActor* pFloorActor)
{
	static UFunction* uFnLanded_Native = nullptr;

	if (!uFnLanded_Native)
	{
		uFnLanded_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.Landed_Native");
	}

	ADishonoredPlayerPawn_execLanded_Native_Params Landed_Native_Params;
	memset(&Landed_Native_Params, 0, sizeof(Landed_Native_Params));
	memcpy_s(&Landed_Native_Params.HitNormal, sizeof(Landed_Native_Params.HitNormal), &HitNormal, sizeof(HitNormal));
	Landed_Native_Params.pFloorActor = pFloorActor;

	this->ProcessEvent(uFnLanded_Native, &Landed_Native_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerPawn.TakeFallingDamage_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45312])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 _HitNormal                     (CPF_Parm)
// class AActor*                  _pFloorActor                   (CPF_Parm)

int32_t ADishonoredPlayerPawn::TakeFallingDamage_Native(const struct FVector& _HitNormal, class AActor* _pFloorActor)
{
	static UFunction* uFnTakeFallingDamage_Native = nullptr;

	if (!uFnTakeFallingDamage_Native)
	{
		uFnTakeFallingDamage_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.TakeFallingDamage_Native");
	}

	ADishonoredPlayerPawn_execTakeFallingDamage_Native_Params TakeFallingDamage_Native_Params;
	memset(&TakeFallingDamage_Native_Params, 0, sizeof(TakeFallingDamage_Native_Params));
	memcpy_s(&TakeFallingDamage_Native_Params._HitNormal, sizeof(TakeFallingDamage_Native_Params._HitNormal), &_HitNormal, sizeof(_HitNormal));
	TakeFallingDamage_Native_Params._pFloorActor = _pFloorActor;

	this->ProcessEvent(uFnTakeFallingDamage_Native, &TakeFallingDamage_Native_Params, nullptr);

	return TakeFallingDamage_Native_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredPlayerPawn.DisplayDebug_Native
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[32321])
// Parameter Info:
// class AHUD*                    _pHUD                          (CPF_Parm)
// float                          _rfOut_YL                      (CPF_Parm | CPF_OutParm)
// float                          _rfOut_YPos                    (CPF_Parm | CPF_OutParm)

void ADishonoredPlayerPawn::DisplayDebug_Native(class AHUD* _pHUD, float& _rfOut_YL, float& _rfOut_YPos)
{
	static UFunction* uFnDisplayDebug_Native = nullptr;

	if (!uFnDisplayDebug_Native)
	{
		uFnDisplayDebug_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.DisplayDebug_Native");
	}

	ADishonoredPlayerPawn_execDisplayDebug_Native_Params DisplayDebug_Native_Params;
	memset(&DisplayDebug_Native_Params, 0, sizeof(DisplayDebug_Native_Params));
	DisplayDebug_Native_Params._pHUD = _pHUD;
	memcpy_s(&DisplayDebug_Native_Params._rfOut_YL, sizeof(DisplayDebug_Native_Params._rfOut_YL), &_rfOut_YL, sizeof(_rfOut_YL));
	memcpy_s(&DisplayDebug_Native_Params._rfOut_YPos, sizeof(DisplayDebug_Native_Params._rfOut_YPos), &_rfOut_YPos, sizeof(_rfOut_YPos));

	this->ProcessEvent(uFnDisplayDebug_Native, &DisplayDebug_Native_Params, nullptr);

	memcpy_s(&_rfOut_YL, sizeof(_rfOut_YL), &DisplayDebug_Native_Params._rfOut_YL, sizeof(DisplayDebug_Native_Params._rfOut_YL));
	memcpy_s(&_rfOut_YPos, sizeof(_rfOut_YPos), &DisplayDebug_Native_Params._rfOut_YPos, sizeof(DisplayDebug_Native_Params._rfOut_YPos));
};

// Function DishonoredGame.DishonoredPlayerPawn.DisplayDebug_Script
// [0x00420802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class AHUD*                    _pHUD                          (CPF_Parm)
// float                          _rfOut_YL                      (CPF_Parm | CPF_OutParm)
// float                          _rfOut_YPos                    (CPF_Parm | CPF_OutParm)

void ADishonoredPlayerPawn::eventDisplayDebug_Script(class AHUD* _pHUD, float& _rfOut_YL, float& _rfOut_YPos)
{
	static UFunction* uFnDisplayDebug_Script = nullptr;

	if (!uFnDisplayDebug_Script)
	{
		uFnDisplayDebug_Script = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerPawn.DisplayDebug_Script");
	}

	ADishonoredPlayerPawn_eventDisplayDebug_Script_Params DisplayDebug_Script_Params;
	memset(&DisplayDebug_Script_Params, 0, sizeof(DisplayDebug_Script_Params));
	DisplayDebug_Script_Params._pHUD = _pHUD;
	memcpy_s(&DisplayDebug_Script_Params._rfOut_YL, sizeof(DisplayDebug_Script_Params._rfOut_YL), &_rfOut_YL, sizeof(_rfOut_YL));
	memcpy_s(&DisplayDebug_Script_Params._rfOut_YPos, sizeof(DisplayDebug_Script_Params._rfOut_YPos), &_rfOut_YPos, sizeof(_rfOut_YPos));

	this->ProcessEvent(uFnDisplayDebug_Script, &DisplayDebug_Script_Params, nullptr);

	memcpy_s(&_rfOut_YL, sizeof(_rfOut_YL), &DisplayDebug_Script_Params._rfOut_YL, sizeof(DisplayDebug_Script_Params._rfOut_YL));
	memcpy_s(&_rfOut_YPos, sizeof(_rfOut_YPos), &DisplayDebug_Script_Params._rfOut_YPos, sizeof(DisplayDebug_Script_Params._rfOut_YPos));
};

// Function DishonoredGame.DishonoredPlayerInput.GetFOVScale
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35318])
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       _bIsForMouse                   (CPF_Parm)

float UDishonoredPlayerInput::GetFOVScale(bool _bIsForMouse)
{
	static UFunction* uFnGetFOVScale = nullptr;

	if (!uFnGetFOVScale)
	{
		uFnGetFOVScale = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerInput.GetFOVScale");
	}

	UDishonoredPlayerInput_execGetFOVScale_Params GetFOVScale_Params;
	memset(&GetFOVScale_Params, 0, sizeof(GetFOVScale_Params));
	GetFOVScale_Params._bIsForMouse = _bIsForMouse;

	this->ProcessEvent(uFnGetFOVScale, &GetFOVScale_Params, nullptr);

	return GetFOVScale_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredPlayerInput.Dis_PlayerChoice_RequestSkip_Released
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31670])
// Parameter Info:

void UDishonoredPlayerInput::Dis_PlayerChoice_RequestSkip_Released()
{
	static UFunction* uFnDis_PlayerChoice_RequestSkip_Released = nullptr;

	if (!uFnDis_PlayerChoice_RequestSkip_Released)
	{
		uFnDis_PlayerChoice_RequestSkip_Released = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerInput.Dis_PlayerChoice_RequestSkip_Released");
	}

	UDishonoredPlayerInput_execDis_PlayerChoice_RequestSkip_Released_Params Dis_PlayerChoice_RequestSkip_Released_Params;
	memset(&Dis_PlayerChoice_RequestSkip_Released_Params, 0, sizeof(Dis_PlayerChoice_RequestSkip_Released_Params));

	this->ProcessEvent(uFnDis_PlayerChoice_RequestSkip_Released, &Dis_PlayerChoice_RequestSkip_Released_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerInput.Dis_PlayerChoice_RequestSkip
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31669])
// Parameter Info:

void UDishonoredPlayerInput::Dis_PlayerChoice_RequestSkip()
{
	static UFunction* uFnDis_PlayerChoice_RequestSkip = nullptr;

	if (!uFnDis_PlayerChoice_RequestSkip)
	{
		uFnDis_PlayerChoice_RequestSkip = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerInput.Dis_PlayerChoice_RequestSkip");
	}

	UDishonoredPlayerInput_execDis_PlayerChoice_RequestSkip_Params Dis_PlayerChoice_RequestSkip_Params;
	memset(&Dis_PlayerChoice_RequestSkip_Params, 0, sizeof(Dis_PlayerChoice_RequestSkip_Params));

	this->ProcessEvent(uFnDis_PlayerChoice_RequestSkip, &Dis_PlayerChoice_RequestSkip_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerInput.Dis_Jump_ButtonDown
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31660])
// Parameter Info:

void UDishonoredPlayerInput::Dis_Jump_ButtonDown()
{
	static UFunction* uFnDis_Jump_ButtonDown = nullptr;

	if (!uFnDis_Jump_ButtonDown)
	{
		uFnDis_Jump_ButtonDown = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerInput.Dis_Jump_ButtonDown");
	}

	UDishonoredPlayerInput_execDis_Jump_ButtonDown_Params Dis_Jump_ButtonDown_Params;
	memset(&Dis_Jump_ButtonDown_Params, 0, sizeof(Dis_Jump_ButtonDown_Params));

	this->ProcessEvent(uFnDis_Jump_ButtonDown, &Dis_Jump_ButtonDown_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerInput.Dis_SneakOrSlide
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31675])
// Parameter Info:
// uint32_t                       _bForGamepad                   (CPF_Parm)

void UDishonoredPlayerInput::Dis_SneakOrSlide(bool _bForGamepad)
{
	static UFunction* uFnDis_SneakOrSlide = nullptr;

	if (!uFnDis_SneakOrSlide)
	{
		uFnDis_SneakOrSlide = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerInput.Dis_SneakOrSlide");
	}

	UDishonoredPlayerInput_execDis_SneakOrSlide_Params Dis_SneakOrSlide_Params;
	memset(&Dis_SneakOrSlide_Params, 0, sizeof(Dis_SneakOrSlide_Params));
	Dis_SneakOrSlide_Params._bForGamepad = _bForGamepad;

	this->ProcessEvent(uFnDis_SneakOrSlide, &Dis_SneakOrSlide_Params, nullptr);
};

// Function DishonoredGame.DisPlayerControllerBase.Playtest_native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44287])
// Parameter Info:
// uint32_t                       bPlaytestMode                  (CPF_Parm)

void ADisPlayerControllerBase::Playtest_native(bool bPlaytestMode)
{
	static UFunction* uFnPlaytest_native = nullptr;

	if (!uFnPlaytest_native)
	{
		uFnPlaytest_native = UFunction::FindFunction("Function DishonoredGame.DisPlayerControllerBase.Playtest_native");
	}

	ADisPlayerControllerBase_execPlaytest_native_Params Playtest_native_Params;
	memset(&Playtest_native_Params, 0, sizeof(Playtest_native_Params));
	Playtest_native_Params.bPlaytestMode = bPlaytestMode;

	this->ProcessEvent(uFnPlaytest_native, &Playtest_native_Params, nullptr);
};

// Function DishonoredGame.DisPlayerControllerBase.SetPlaytestFlag
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44861])
// Parameter Info:
// uint32_t                       bPlaytestMode                  (CPF_Parm)

void ADisPlayerControllerBase::SetPlaytestFlag(bool bPlaytestMode)
{
	static UFunction* uFnSetPlaytestFlag = nullptr;

	if (!uFnSetPlaytestFlag)
	{
		uFnSetPlaytestFlag = UFunction::FindFunction("Function DishonoredGame.DisPlayerControllerBase.SetPlaytestFlag");
	}

	ADisPlayerControllerBase_execSetPlaytestFlag_Params SetPlaytestFlag_Params;
	memset(&SetPlaytestFlag_Params, 0, sizeof(SetPlaytestFlag_Params));
	SetPlaytestFlag_Params.bPlaytestMode = bPlaytestMode;

	this->ProcessEvent(uFnSetPlaytestFlag, &SetPlaytestFlag_Params, nullptr);
};

// Function DishonoredGame.DisPlayerControllerBase.Playtest
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bPlaytestMode                  (CPF_Parm)

void ADisPlayerControllerBase::Playtest(bool bPlaytestMode)
{
	static UFunction* uFnPlaytest = nullptr;

	if (!uFnPlaytest)
	{
		uFnPlaytest = UFunction::FindFunction("Function DishonoredGame.DisPlayerControllerBase.Playtest");
	}

	ADisPlayerControllerBase_execPlaytest_Params Playtest_Params;
	memset(&Playtest_Params, 0, sizeof(Playtest_Params));
	Playtest_Params.bPlaytestMode = bPlaytestMode;

	this->ProcessEvent(uFnPlaytest, &Playtest_Params, nullptr);
};

// Function DishonoredGame.DisDebugNPCController.Dis_StartPower
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31677])
// Parameter Info:

void ADisDebugNPCController::Dis_StartPower()
{
	static UFunction* uFnDis_StartPower = nullptr;

	if (!uFnDis_StartPower)
	{
		uFnDis_StartPower = UFunction::FindFunction("Function DishonoredGame.DisDebugNPCController.Dis_StartPower");
	}

	ADisDebugNPCController_execDis_StartPower_Params Dis_StartPower_Params;
	memset(&Dis_StartPower_Params, 0, sizeof(Dis_StartPower_Params));

	this->ProcessEvent(uFnDis_StartPower, &Dis_StartPower_Params, nullptr);
};

// Function DishonoredGame.DisDebugNPCController.Dis_StartFire
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31676])
// Parameter Info:

void ADisDebugNPCController::Dis_StartFire()
{
	static UFunction* uFnDis_StartFire = nullptr;

	if (!uFnDis_StartFire)
	{
		uFnDis_StartFire = UFunction::FindFunction("Function DishonoredGame.DisDebugNPCController.Dis_StartFire");
	}

	ADisDebugNPCController_execDis_StartFire_Params Dis_StartFire_Params;
	memset(&Dis_StartFire_Params, 0, sizeof(Dis_StartFire_Params));

	this->ProcessEvent(uFnDis_StartFire, &Dis_StartFire_Params, nullptr);
};

// Function DishonoredGame.DisDebugNPCController.HandleWalking
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[20898])
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void ADisDebugNPCController::HandleWalking(float DeltaTime)
{
	static UFunction* uFnHandleWalking = nullptr;

	if (!uFnHandleWalking)
	{
		uFnHandleWalking = UFunction::FindFunction("Function DishonoredGame.DisDebugNPCController.HandleWalking");
	}

	ADisDebugNPCController_execHandleWalking_Params HandleWalking_Params;
	memset(&HandleWalking_Params, 0, sizeof(HandleWalking_Params));
	memcpy_s(&HandleWalking_Params.DeltaTime, sizeof(HandleWalking_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnHandleWalking, &HandleWalking_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.ClientSetOnlineStatus
// [0x010201C2] (FUNC_Defined | FUNC_Net | FUNC_NetReliable | FUNC_Simulated | FUNC_Public | FUNC_NetClient | FUNC_AllFlags)
// Parameter Info:

void ADishonoredPlayerController::ClientSetOnlineStatus()
{
	static UFunction* uFnClientSetOnlineStatus = nullptr;

	if (!uFnClientSetOnlineStatus)
	{
		uFnClientSetOnlineStatus = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.ClientSetOnlineStatus");
	}

	ADishonoredPlayerController_execClientSetOnlineStatus_Params ClientSetOnlineStatus_Params;
	memset(&ClientSetOnlineStatus_Params, 0, sizeof(ClientSetOnlineStatus_Params));

	this->ProcessEvent(uFnClientSetOnlineStatus, &ClientSetOnlineStatus_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.OnControllerChanged
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ControllerId                   (CPF_Parm)
// uint32_t                       bIsConnected                   (CPF_Parm)

void ADishonoredPlayerController::OnControllerChanged(int32_t ControllerId, bool bIsConnected)
{
	static UFunction* uFnOnControllerChanged = nullptr;

	if (!uFnOnControllerChanged)
	{
		uFnOnControllerChanged = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.OnControllerChanged");
	}

	ADishonoredPlayerController_execOnControllerChanged_Params OnControllerChanged_Params;
	memset(&OnControllerChanged_Params, 0, sizeof(OnControllerChanged_Params));
	memcpy_s(&OnControllerChanged_Params.ControllerId, sizeof(OnControllerChanged_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	OnControllerChanged_Params.bIsConnected = bIsConnected;

	this->ProcessEvent(uFnOnControllerChanged, &OnControllerChanged_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.OnControllerChanged_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43893])
// Parameter Info:
// uint32_t                       bIsConnected                   (CPF_Parm)

void ADishonoredPlayerController::OnControllerChanged_Native(bool bIsConnected)
{
	static UFunction* uFnOnControllerChanged_Native = nullptr;

	if (!uFnOnControllerChanged_Native)
	{
		uFnOnControllerChanged_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.OnControllerChanged_Native");
	}

	ADishonoredPlayerController_execOnControllerChanged_Native_Params OnControllerChanged_Native_Params;
	memset(&OnControllerChanged_Native_Params, 0, sizeof(OnControllerChanged_Native_Params));
	OnControllerChanged_Native_Params.bIsConnected = bIsConnected;

	this->ProcessEvent(uFnOnControllerChanged_Native, &OnControllerChanged_Native_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.CalcPlayerSwimAccelRate
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[17886])
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float ADishonoredPlayerController::CalcPlayerSwimAccelRate()
{
	static UFunction* uFnCalcPlayerSwimAccelRate = nullptr;

	if (!uFnCalcPlayerSwimAccelRate)
	{
		uFnCalcPlayerSwimAccelRate = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.CalcPlayerSwimAccelRate");
	}

	ADishonoredPlayerController_execCalcPlayerSwimAccelRate_Params CalcPlayerSwimAccelRate_Params;
	memset(&CalcPlayerSwimAccelRate_Params, 0, sizeof(CalcPlayerSwimAccelRate_Params));

	this->ProcessEvent(uFnCalcPlayerSwimAccelRate, &CalcPlayerSwimAccelRate_Params, nullptr);

	return CalcPlayerSwimAccelRate_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredPlayerController.SaveProfile
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ADishonoredPlayerController::SaveProfile()
{
	static UFunction* uFnSaveProfile = nullptr;

	if (!uFnSaveProfile)
	{
		uFnSaveProfile = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.SaveProfile");
	}

	ADishonoredPlayerController_execSaveProfile_Params SaveProfile_Params;
	memset(&SaveProfile_Params, 0, sizeof(SaveProfile_Params));

	this->ProcessEvent(uFnSaveProfile, &SaveProfile_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.OnSaveProfileComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void ADishonoredPlayerController::OnSaveProfileComplete(uint8_t LocalUserNum, bool bWasSuccessful)
{
	static UFunction* uFnOnSaveProfileComplete = nullptr;

	if (!uFnOnSaveProfileComplete)
	{
		uFnOnSaveProfileComplete = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.OnSaveProfileComplete");
	}

	ADishonoredPlayerController_execOnSaveProfileComplete_Params OnSaveProfileComplete_Params;
	memset(&OnSaveProfileComplete_Params, 0, sizeof(OnSaveProfileComplete_Params));
	memcpy_s(&OnSaveProfileComplete_Params.LocalUserNum, sizeof(OnSaveProfileComplete_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	OnSaveProfileComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnSaveProfileComplete, &OnSaveProfileComplete_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.GetProfileSettings
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[20702])
// Parameter Info:
// class UArkProfileSettings*     ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UArkProfileSettings* ADishonoredPlayerController::GetProfileSettings()
{
	static UFunction* uFnGetProfileSettings = nullptr;

	if (!uFnGetProfileSettings)
	{
		uFnGetProfileSettings = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.GetProfileSettings");
	}

	ADishonoredPlayerController_execGetProfileSettings_Params GetProfileSettings_Params;
	memset(&GetProfileSettings_Params, 0, sizeof(GetProfileSettings_Params));

	this->ProcessEvent(uFnGetProfileSettings, &GetProfileSettings_Params, nullptr);

	return GetProfileSettings_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredPlayerController.OnShowPowerMenu
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43987])
// Parameter Info:
// class UDisSeqAct_ShowPowerMenu* _pAction                       (CPF_Parm)

void ADishonoredPlayerController::OnShowPowerMenu(class UDisSeqAct_ShowPowerMenu* _pAction)
{
	static UFunction* uFnOnShowPowerMenu = nullptr;

	if (!uFnOnShowPowerMenu)
	{
		uFnOnShowPowerMenu = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.OnShowPowerMenu");
	}

	ADishonoredPlayerController_execOnShowPowerMenu_Params OnShowPowerMenu_Params;
	memset(&OnShowPowerMenu_Params, 0, sizeof(OnShowPowerMenu_Params));
	OnShowPowerMenu_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnShowPowerMenu, &OnShowPowerMenu_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.OnObjectiveAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43949])
// Parameter Info:
// class UDisSeqAct_ObjectiveAction* _pAction                       (CPF_Parm)

void ADishonoredPlayerController::OnObjectiveAction(class UDisSeqAct_ObjectiveAction* _pAction)
{
	static UFunction* uFnOnObjectiveAction = nullptr;

	if (!uFnOnObjectiveAction)
	{
		uFnOnObjectiveAction = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.OnObjectiveAction");
	}

	ADishonoredPlayerController_execOnObjectiveAction_Params OnObjectiveAction_Params;
	memset(&OnObjectiveAction_Params, 0, sizeof(OnObjectiveAction_Params));
	OnObjectiveAction_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnObjectiveAction, &OnObjectiveAction_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.ProcessViewRotation
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[13700])
// Parameter Info:
// float                          _fDeltaTime                    (CPF_Parm)
// struct FRotator                _rOut_DeltaRot                 (CPF_Parm)
// struct FRotator                _rOut_ViewRotation             (CPF_Parm | CPF_OutParm)

void ADishonoredPlayerController::ProcessViewRotation(float _fDeltaTime, const struct FRotator& _rOut_DeltaRot, struct FRotator& _rOut_ViewRotation)
{
	static UFunction* uFnProcessViewRotation = nullptr;

	if (!uFnProcessViewRotation)
	{
		uFnProcessViewRotation = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.ProcessViewRotation");
	}

	ADishonoredPlayerController_execProcessViewRotation_Params ProcessViewRotation_Params;
	memset(&ProcessViewRotation_Params, 0, sizeof(ProcessViewRotation_Params));
	memcpy_s(&ProcessViewRotation_Params._fDeltaTime, sizeof(ProcessViewRotation_Params._fDeltaTime), &_fDeltaTime, sizeof(_fDeltaTime));
	memcpy_s(&ProcessViewRotation_Params._rOut_DeltaRot, sizeof(ProcessViewRotation_Params._rOut_DeltaRot), &_rOut_DeltaRot, sizeof(_rOut_DeltaRot));
	memcpy_s(&ProcessViewRotation_Params._rOut_ViewRotation, sizeof(ProcessViewRotation_Params._rOut_ViewRotation), &_rOut_ViewRotation, sizeof(_rOut_ViewRotation));

	this->ProcessEvent(uFnProcessViewRotation, &ProcessViewRotation_Params, nullptr);

	memcpy_s(&_rOut_ViewRotation, sizeof(_rOut_ViewRotation), &ProcessViewRotation_Params._rOut_ViewRotation, sizeof(ProcessViewRotation_Params._rOut_ViewRotation));
};

// Function DishonoredGame.DishonoredPlayerController.CallGetUIController
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UUIInteraction*          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UUIInteraction* ADishonoredPlayerController::eventCallGetUIController()
{
	static UFunction* uFnCallGetUIController = nullptr;

	if (!uFnCallGetUIController)
	{
		uFnCallGetUIController = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.CallGetUIController");
	}

	ADishonoredPlayerController_eventCallGetUIController_Params CallGetUIController_Params;
	memset(&CallGetUIController_Params, 0, sizeof(CallGetUIController_Params));

	this->ProcessEvent(uFnCallGetUIController, &CallGetUIController_Params, nullptr);

	return CallGetUIController_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredPlayerController.OnDLC05ToggleCinematicMode
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UDisSeqAct_DLC05_ToggleCinematicMode* Action                         (CPF_Parm)

void ADishonoredPlayerController::OnDLC05ToggleCinematicMode(class UDisSeqAct_DLC05_ToggleCinematicMode* Action)
{
	static UFunction* uFnOnDLC05ToggleCinematicMode = nullptr;

	if (!uFnOnDLC05ToggleCinematicMode)
	{
		uFnOnDLC05ToggleCinematicMode = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.OnDLC05ToggleCinematicMode");
	}

	ADishonoredPlayerController_execOnDLC05ToggleCinematicMode_Params OnDLC05ToggleCinematicMode_Params;
	memset(&OnDLC05ToggleCinematicMode_Params, 0, sizeof(OnDLC05ToggleCinematicMode_Params));
	OnDLC05ToggleCinematicMode_Params.Action = Action;

	this->ProcessEvent(uFnOnDLC05ToggleCinematicMode, &OnDLC05ToggleCinematicMode_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.DLC05_SetCinematicMode
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       _bInCinematicMode              (CPF_Parm)
// uint32_t                       _bHidePlayer                   (CPF_Parm)
// uint32_t                       _bHideHUD                      (CPF_Parm)
// uint32_t                       _bAffectsMovement              (CPF_Parm)
// uint32_t                       _bAffectsTurning               (CPF_Parm)
// uint32_t                       _bAffectsButtons               (CPF_Parm)
// uint32_t                       _bHideLetterbox                (CPF_Parm)
// uint32_t                       _bAllowProjectilesAndExplosions (CPF_Parm)

void ADishonoredPlayerController::DLC05_SetCinematicMode(bool _bInCinematicMode, bool _bHidePlayer, bool _bHideHUD, bool _bAffectsMovement, bool _bAffectsTurning, bool _bAffectsButtons, bool _bHideLetterbox, bool _bAllowProjectilesAndExplosions)
{
	static UFunction* uFnDLC05_SetCinematicMode = nullptr;

	if (!uFnDLC05_SetCinematicMode)
	{
		uFnDLC05_SetCinematicMode = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.DLC05_SetCinematicMode");
	}

	ADishonoredPlayerController_execDLC05_SetCinematicMode_Params DLC05_SetCinematicMode_Params;
	memset(&DLC05_SetCinematicMode_Params, 0, sizeof(DLC05_SetCinematicMode_Params));
	DLC05_SetCinematicMode_Params._bInCinematicMode = _bInCinematicMode;
	DLC05_SetCinematicMode_Params._bHidePlayer = _bHidePlayer;
	DLC05_SetCinematicMode_Params._bHideHUD = _bHideHUD;
	DLC05_SetCinematicMode_Params._bAffectsMovement = _bAffectsMovement;
	DLC05_SetCinematicMode_Params._bAffectsTurning = _bAffectsTurning;
	DLC05_SetCinematicMode_Params._bAffectsButtons = _bAffectsButtons;
	DLC05_SetCinematicMode_Params._bHideLetterbox = _bHideLetterbox;
	DLC05_SetCinematicMode_Params._bAllowProjectilesAndExplosions = _bAllowProjectilesAndExplosions;

	this->ProcessEvent(uFnDLC05_SetCinematicMode, &DLC05_SetCinematicMode_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.SetCinematicMode
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       _bInCinematicMode              (CPF_Parm)
// uint32_t                       _bHidePlayer                   (CPF_Parm)
// uint32_t                       _bHideHUD                      (CPF_Parm)
// uint32_t                       _bAffectsMovement              (CPF_Parm)
// uint32_t                       _bAffectsTurning               (CPF_Parm)
// uint32_t                       _bAffectsButtons               (CPF_Parm)
// uint32_t                       _bHideLetterbox                (CPF_Parm)

void ADishonoredPlayerController::SetCinematicMode(bool _bInCinematicMode, bool _bHidePlayer, bool _bHideHUD, bool _bAffectsMovement, bool _bAffectsTurning, bool _bAffectsButtons, bool _bHideLetterbox)
{
	static UFunction* uFnSetCinematicMode = nullptr;

	if (!uFnSetCinematicMode)
	{
		uFnSetCinematicMode = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.SetCinematicMode");
	}

	ADishonoredPlayerController_execSetCinematicMode_Params SetCinematicMode_Params;
	memset(&SetCinematicMode_Params, 0, sizeof(SetCinematicMode_Params));
	SetCinematicMode_Params._bInCinematicMode = _bInCinematicMode;
	SetCinematicMode_Params._bHidePlayer = _bHidePlayer;
	SetCinematicMode_Params._bHideHUD = _bHideHUD;
	SetCinematicMode_Params._bAffectsMovement = _bAffectsMovement;
	SetCinematicMode_Params._bAffectsTurning = _bAffectsTurning;
	SetCinematicMode_Params._bAffectsButtons = _bAffectsButtons;
	SetCinematicMode_Params._bHideLetterbox = _bHideLetterbox;

	this->ProcessEvent(uFnSetCinematicMode, &SetCinematicMode_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.SetCinematicMode_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44857])
// Parameter Info:
// uint32_t                       _bInCinematicMode              (CPF_Parm)
// uint32_t                       _bWasInCinematicMode           (CPF_Parm)
// uint32_t                       _bHidePlayer                   (CPF_Parm)
// uint32_t                       _bHideHUD                      (CPF_Parm)
// uint32_t                       _bAffectsMovement              (CPF_Parm)
// uint32_t                       _bAffectsTurning               (CPF_Parm)
// uint32_t                       _bAffectsButtons               (CPF_Parm)
// uint32_t                       _bHideLetterbox                (CPF_Parm)
// uint32_t                       _bAllowProjectilesAndExplosions (CPF_Parm)

void ADishonoredPlayerController::SetCinematicMode_Native(bool _bInCinematicMode, bool _bWasInCinematicMode, bool _bHidePlayer, bool _bHideHUD, bool _bAffectsMovement, bool _bAffectsTurning, bool _bAffectsButtons, bool _bHideLetterbox, bool _bAllowProjectilesAndExplosions)
{
	static UFunction* uFnSetCinematicMode_Native = nullptr;

	if (!uFnSetCinematicMode_Native)
	{
		uFnSetCinematicMode_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.SetCinematicMode_Native");
	}

	ADishonoredPlayerController_execSetCinematicMode_Native_Params SetCinematicMode_Native_Params;
	memset(&SetCinematicMode_Native_Params, 0, sizeof(SetCinematicMode_Native_Params));
	SetCinematicMode_Native_Params._bInCinematicMode = _bInCinematicMode;
	SetCinematicMode_Native_Params._bWasInCinematicMode = _bWasInCinematicMode;
	SetCinematicMode_Native_Params._bHidePlayer = _bHidePlayer;
	SetCinematicMode_Native_Params._bHideHUD = _bHideHUD;
	SetCinematicMode_Native_Params._bAffectsMovement = _bAffectsMovement;
	SetCinematicMode_Native_Params._bAffectsTurning = _bAffectsTurning;
	SetCinematicMode_Native_Params._bAffectsButtons = _bAffectsButtons;
	SetCinematicMode_Native_Params._bHideLetterbox = _bHideLetterbox;
	SetCinematicMode_Native_Params._bAllowProjectilesAndExplosions = _bAllowProjectilesAndExplosions;

	this->ProcessEvent(uFnSetCinematicMode_Native, &SetCinematicMode_Native_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.PreSetCinematicMode_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44429])
// Parameter Info:
// uint32_t                       _bNewInCinematicMode           (CPF_Parm)
// uint32_t                       _bHidePlayer                   (CPF_Parm)

void ADishonoredPlayerController::PreSetCinematicMode_Native(bool _bNewInCinematicMode, bool _bHidePlayer)
{
	static UFunction* uFnPreSetCinematicMode_Native = nullptr;

	if (!uFnPreSetCinematicMode_Native)
	{
		uFnPreSetCinematicMode_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.PreSetCinematicMode_Native");
	}

	ADishonoredPlayerController_execPreSetCinematicMode_Native_Params PreSetCinematicMode_Native_Params;
	memset(&PreSetCinematicMode_Native_Params, 0, sizeof(PreSetCinematicMode_Native_Params));
	PreSetCinematicMode_Native_Params._bNewInCinematicMode = _bNewInCinematicMode;
	PreSetCinematicMode_Native_Params._bHidePlayer = _bHidePlayer;

	this->ProcessEvent(uFnPreSetCinematicMode_Native, &PreSetCinematicMode_Native_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.IsLookInputIgnored
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[21402])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool ADishonoredPlayerController::IsLookInputIgnored()
{
	static UFunction* uFnIsLookInputIgnored = nullptr;

	if (!uFnIsLookInputIgnored)
	{
		uFnIsLookInputIgnored = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.IsLookInputIgnored");
	}

	ADishonoredPlayerController_execIsLookInputIgnored_Params IsLookInputIgnored_Params;
	memset(&IsLookInputIgnored_Params, 0, sizeof(IsLookInputIgnored_Params));

	this->ProcessEvent(uFnIsLookInputIgnored, &IsLookInputIgnored_Params, nullptr);

	return IsLookInputIgnored_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredPlayerController.IsMoveInputIgnored
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[21406])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool ADishonoredPlayerController::IsMoveInputIgnored()
{
	static UFunction* uFnIsMoveInputIgnored = nullptr;

	if (!uFnIsMoveInputIgnored)
	{
		uFnIsMoveInputIgnored = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.IsMoveInputIgnored");
	}

	ADishonoredPlayerController_execIsMoveInputIgnored_Params IsMoveInputIgnored_Params;
	memset(&IsMoveInputIgnored_Params, 0, sizeof(IsMoveInputIgnored_Params));

	this->ProcessEvent(uFnIsMoveInputIgnored, &IsMoveInputIgnored_Params, nullptr);

	return IsMoveInputIgnored_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredPlayerController.PlayRumbleWaveForm
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UForceFeedbackWaveform*  _pWaveForm                     (CPF_Const | CPF_Parm)
// class AActor*                  _pInstigatorActor              (CPF_Const | CPF_Parm)

void ADishonoredPlayerController::eventPlayRumbleWaveForm(class UForceFeedbackWaveform* _pWaveForm, class AActor* _pInstigatorActor)
{
	static UFunction* uFnPlayRumbleWaveForm = nullptr;

	if (!uFnPlayRumbleWaveForm)
	{
		uFnPlayRumbleWaveForm = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.PlayRumbleWaveForm");
	}

	ADishonoredPlayerController_eventPlayRumbleWaveForm_Params PlayRumbleWaveForm_Params;
	memset(&PlayRumbleWaveForm_Params, 0, sizeof(PlayRumbleWaveForm_Params));
	PlayRumbleWaveForm_Params._pWaveForm = _pWaveForm;
	PlayRumbleWaveForm_Params._pInstigatorActor = _pInstigatorActor;

	this->ProcessEvent(uFnPlayRumbleWaveForm, &PlayRumbleWaveForm_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.ToggleScreenConfig
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45376])
// Parameter Info:

void ADishonoredPlayerController::ToggleScreenConfig()
{
	static UFunction* uFnToggleScreenConfig = nullptr;

	if (!uFnToggleScreenConfig)
	{
		uFnToggleScreenConfig = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.ToggleScreenConfig");
	}

	ADishonoredPlayerController_execToggleScreenConfig_Params ToggleScreenConfig_Params;
	memset(&ToggleScreenConfig_Params, 0, sizeof(ToggleScreenConfig_Params));

	this->ProcessEvent(uFnToggleScreenConfig, &ToggleScreenConfig_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.ShowScreenConfig
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44894])
// Parameter Info:

void ADishonoredPlayerController::ShowScreenConfig()
{
	static UFunction* uFnShowScreenConfig = nullptr;

	if (!uFnShowScreenConfig)
	{
		uFnShowScreenConfig = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.ShowScreenConfig");
	}

	ADishonoredPlayerController_execShowScreenConfig_Params ShowScreenConfig_Params;
	memset(&ShowScreenConfig_Params, 0, sizeof(ShowScreenConfig_Params));

	this->ProcessEvent(uFnShowScreenConfig, &ShowScreenConfig_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.Dis_Zoom
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31693])
// Parameter Info:

void ADishonoredPlayerController::Dis_Zoom()
{
	static UFunction* uFnDis_Zoom = nullptr;

	if (!uFnDis_Zoom)
	{
		uFnDis_Zoom = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_Zoom");
	}

	ADishonoredPlayerController_execDis_Zoom_Params Dis_Zoom_Params;
	memset(&Dis_Zoom_Params, 0, sizeof(Dis_Zoom_Params));

	this->ProcessEvent(uFnDis_Zoom, &Dis_Zoom_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.Dis_VersusAlt
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31684])
// Parameter Info:

void ADishonoredPlayerController::Dis_VersusAlt()
{
	static UFunction* uFnDis_VersusAlt = nullptr;

	if (!uFnDis_VersusAlt)
	{
		uFnDis_VersusAlt = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_VersusAlt");
	}

	ADishonoredPlayerController_execDis_VersusAlt_Params Dis_VersusAlt_Params;
	memset(&Dis_VersusAlt_Params, 0, sizeof(Dis_VersusAlt_Params));

	this->ProcessEvent(uFnDis_VersusAlt, &Dis_VersusAlt_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.Dis_Lean_Toggle
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31661])
// Parameter Info:
// uint32_t                       _bLeanLeft                     (CPF_Parm)
// uint32_t                       _bLeanRight                    (CPF_Parm)
// uint32_t                       _bLeanForward                  (CPF_Parm)
// uint32_t                       _bLeanBack                     (CPF_Parm)
// uint32_t                       _bFromGamePad                  (CPF_Parm)

void ADishonoredPlayerController::Dis_Lean_Toggle(bool _bLeanLeft, bool _bLeanRight, bool _bLeanForward, bool _bLeanBack, bool _bFromGamePad)
{
	static UFunction* uFnDis_Lean_Toggle = nullptr;

	if (!uFnDis_Lean_Toggle)
	{
		uFnDis_Lean_Toggle = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_Lean_Toggle");
	}

	ADishonoredPlayerController_execDis_Lean_Toggle_Params Dis_Lean_Toggle_Params;
	memset(&Dis_Lean_Toggle_Params, 0, sizeof(Dis_Lean_Toggle_Params));
	Dis_Lean_Toggle_Params._bLeanLeft = _bLeanLeft;
	Dis_Lean_Toggle_Params._bLeanRight = _bLeanRight;
	Dis_Lean_Toggle_Params._bLeanForward = _bLeanForward;
	Dis_Lean_Toggle_Params._bLeanBack = _bLeanBack;
	Dis_Lean_Toggle_Params._bFromGamePad = _bFromGamePad;

	this->ProcessEvent(uFnDis_Lean_Toggle, &Dis_Lean_Toggle_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.Dis_LeanWithAnalogStick_End
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31663])
// Parameter Info:

void ADishonoredPlayerController::Dis_LeanWithAnalogStick_End()
{
	static UFunction* uFnDis_LeanWithAnalogStick_End = nullptr;

	if (!uFnDis_LeanWithAnalogStick_End)
	{
		uFnDis_LeanWithAnalogStick_End = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_LeanWithAnalogStick_End");
	}

	ADishonoredPlayerController_execDis_LeanWithAnalogStick_End_Params Dis_LeanWithAnalogStick_End_Params;
	memset(&Dis_LeanWithAnalogStick_End_Params, 0, sizeof(Dis_LeanWithAnalogStick_End_Params));

	this->ProcessEvent(uFnDis_LeanWithAnalogStick_End, &Dis_LeanWithAnalogStick_End_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.DisToggleSprint
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[32481])
// Parameter Info:
// uint32_t                       _bFromGamePad                  (CPF_Parm)

void ADishonoredPlayerController::DisToggleSprint(bool _bFromGamePad)
{
	static UFunction* uFnDisToggleSprint = nullptr;

	if (!uFnDisToggleSprint)
	{
		uFnDisToggleSprint = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.DisToggleSprint");
	}

	ADishonoredPlayerController_execDisToggleSprint_Params DisToggleSprint_Params;
	memset(&DisToggleSprint_Params, 0, sizeof(DisToggleSprint_Params));
	DisToggleSprint_Params._bFromGamePad = _bFromGamePad;

	this->ProcessEvent(uFnDisToggleSprint, &DisToggleSprint_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.Dis_SelectPower
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31674])
// Parameter Info:
// int32_t                        _iPower                        (CPF_Parm)

void ADishonoredPlayerController::Dis_SelectPower(int32_t _iPower)
{
	static UFunction* uFnDis_SelectPower = nullptr;

	if (!uFnDis_SelectPower)
	{
		uFnDis_SelectPower = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_SelectPower");
	}

	ADishonoredPlayerController_execDis_SelectPower_Params Dis_SelectPower_Params;
	memset(&Dis_SelectPower_Params, 0, sizeof(Dis_SelectPower_Params));
	memcpy_s(&Dis_SelectPower_Params._iPower, sizeof(Dis_SelectPower_Params._iPower), &_iPower, sizeof(_iPower));

	this->ProcessEvent(uFnDis_SelectPower, &Dis_SelectPower_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.Dis_OpenPauseMenu
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31668])
// Parameter Info:

void ADishonoredPlayerController::Dis_OpenPauseMenu()
{
	static UFunction* uFnDis_OpenPauseMenu = nullptr;

	if (!uFnDis_OpenPauseMenu)
	{
		uFnDis_OpenPauseMenu = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_OpenPauseMenu");
	}

	ADishonoredPlayerController_execDis_OpenPauseMenu_Params Dis_OpenPauseMenu_Params;
	memset(&Dis_OpenPauseMenu_Params, 0, sizeof(Dis_OpenPauseMenu_Params));

	this->ProcessEvent(uFnDis_OpenPauseMenu, &Dis_OpenPauseMenu_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.Dis_OpenJournalTab
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31667])
// Parameter Info:
// int32_t                        _Tab                           (CPF_Parm)

void ADishonoredPlayerController::Dis_OpenJournalTab(int32_t _Tab)
{
	static UFunction* uFnDis_OpenJournalTab = nullptr;

	if (!uFnDis_OpenJournalTab)
	{
		uFnDis_OpenJournalTab = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_OpenJournalTab");
	}

	ADishonoredPlayerController_execDis_OpenJournalTab_Params Dis_OpenJournalTab_Params;
	memset(&Dis_OpenJournalTab_Params, 0, sizeof(Dis_OpenJournalTab_Params));
	memcpy_s(&Dis_OpenJournalTab_Params._Tab, sizeof(Dis_OpenJournalTab_Params._Tab), &_Tab, sizeof(_Tab));

	this->ProcessEvent(uFnDis_OpenJournalTab, &Dis_OpenJournalTab_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.Dis_ToggleJournal
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31678])
// Parameter Info:

void ADishonoredPlayerController::Dis_ToggleJournal()
{
	static UFunction* uFnDis_ToggleJournal = nullptr;

	if (!uFnDis_ToggleJournal)
	{
		uFnDis_ToggleJournal = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_ToggleJournal");
	}

	ADishonoredPlayerController_execDis_ToggleJournal_Params Dis_ToggleJournal_Params;
	memset(&Dis_ToggleJournal_Params, 0, sizeof(Dis_ToggleJournal_Params));

	this->ProcessEvent(uFnDis_ToggleJournal, &Dis_ToggleJournal_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.Dis_CancelPossession
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31652])
// Parameter Info:

void ADishonoredPlayerController::Dis_CancelPossession()
{
	static UFunction* uFnDis_CancelPossession = nullptr;

	if (!uFnDis_CancelPossession)
	{
		uFnDis_CancelPossession = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_CancelPossession");
	}

	ADishonoredPlayerController_execDis_CancelPossession_Params Dis_CancelPossession_Params;
	memset(&Dis_CancelPossession_Params, 0, sizeof(Dis_CancelPossession_Params));

	this->ProcessEvent(uFnDis_CancelPossession, &Dis_CancelPossession_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.Dis_ExitKeyhole
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31659])
// Parameter Info:

void ADishonoredPlayerController::Dis_ExitKeyhole()
{
	static UFunction* uFnDis_ExitKeyhole = nullptr;

	if (!uFnDis_ExitKeyhole)
	{
		uFnDis_ExitKeyhole = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_ExitKeyhole");
	}

	ADishonoredPlayerController_execDis_ExitKeyhole_Params Dis_ExitKeyhole_Params;
	memset(&Dis_ExitKeyhole_Params, 0, sizeof(Dis_ExitKeyhole_Params));

	this->ProcessEvent(uFnDis_ExitKeyhole, &Dis_ExitKeyhole_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.Dis_LeanOrAdrenaline_Multi
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31662])
// Parameter Info:
// int32_t                        _NumButtonPresses              (CPF_Parm)
// uint32_t                       _bIsFinished                   (CPF_Parm)

void ADishonoredPlayerController::Dis_LeanOrAdrenaline_Multi(int32_t _NumButtonPresses, bool _bIsFinished)
{
	static UFunction* uFnDis_LeanOrAdrenaline_Multi = nullptr;

	if (!uFnDis_LeanOrAdrenaline_Multi)
	{
		uFnDis_LeanOrAdrenaline_Multi = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_LeanOrAdrenaline_Multi");
	}

	ADishonoredPlayerController_execDis_LeanOrAdrenaline_Multi_Params Dis_LeanOrAdrenaline_Multi_Params;
	memset(&Dis_LeanOrAdrenaline_Multi_Params, 0, sizeof(Dis_LeanOrAdrenaline_Multi_Params));
	memcpy_s(&Dis_LeanOrAdrenaline_Multi_Params._NumButtonPresses, sizeof(Dis_LeanOrAdrenaline_Multi_Params._NumButtonPresses), &_NumButtonPresses, sizeof(_NumButtonPresses));
	Dis_LeanOrAdrenaline_Multi_Params._bIsFinished = _bIsFinished;

	this->ProcessEvent(uFnDis_LeanOrAdrenaline_Multi, &Dis_LeanOrAdrenaline_Multi_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.Dis_UseAdrenaline_Multi
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31680])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       _bFallbackOnAttack             (CPF_Parm)
// int32_t                        _NumPresses                    (CPF_Parm)
// uint32_t                       _bIsFinished                   (CPF_Parm)

bool ADishonoredPlayerController::Dis_UseAdrenaline_Multi(bool _bFallbackOnAttack, int32_t _NumPresses, bool _bIsFinished)
{
	static UFunction* uFnDis_UseAdrenaline_Multi = nullptr;

	if (!uFnDis_UseAdrenaline_Multi)
	{
		uFnDis_UseAdrenaline_Multi = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_UseAdrenaline_Multi");
	}

	ADishonoredPlayerController_execDis_UseAdrenaline_Multi_Params Dis_UseAdrenaline_Multi_Params;
	memset(&Dis_UseAdrenaline_Multi_Params, 0, sizeof(Dis_UseAdrenaline_Multi_Params));
	Dis_UseAdrenaline_Multi_Params._bFallbackOnAttack = _bFallbackOnAttack;
	memcpy_s(&Dis_UseAdrenaline_Multi_Params._NumPresses, sizeof(Dis_UseAdrenaline_Multi_Params._NumPresses), &_NumPresses, sizeof(_NumPresses));
	Dis_UseAdrenaline_Multi_Params._bIsFinished = _bIsFinished;

	this->ProcessEvent(uFnDis_UseAdrenaline_Multi, &Dis_UseAdrenaline_Multi_Params, nullptr);

	return Dis_UseAdrenaline_Multi_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredPlayerController.Dis_UseAdrenaline
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[31679])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       _bFallbackOnAttack             (CPF_Parm)
// uint32_t                       _bDoMultiFatality              (CPF_OptionalParm | CPF_Parm)

bool ADishonoredPlayerController::Dis_UseAdrenaline(bool _bFallbackOnAttack, bool _bDoMultiFatality)
{
	static UFunction* uFnDis_UseAdrenaline = nullptr;

	if (!uFnDis_UseAdrenaline)
	{
		uFnDis_UseAdrenaline = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_UseAdrenaline");
	}

	ADishonoredPlayerController_execDis_UseAdrenaline_Params Dis_UseAdrenaline_Params;
	memset(&Dis_UseAdrenaline_Params, 0, sizeof(Dis_UseAdrenaline_Params));
	Dis_UseAdrenaline_Params._bFallbackOnAttack = _bFallbackOnAttack;
	Dis_UseAdrenaline_Params._bDoMultiFatality = _bDoMultiFatality;

	this->ProcessEvent(uFnDis_UseAdrenaline, &Dis_UseAdrenaline_Params, nullptr);

	return Dis_UseAdrenaline_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredPlayerController.Dis_ConsumeElixir
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31653])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// EElixirType                    _ElixirType                    (CPF_Parm)

bool ADishonoredPlayerController::Dis_ConsumeElixir(EElixirType _ElixirType)
{
	static UFunction* uFnDis_ConsumeElixir = nullptr;

	if (!uFnDis_ConsumeElixir)
	{
		uFnDis_ConsumeElixir = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_ConsumeElixir");
	}

	ADishonoredPlayerController_execDis_ConsumeElixir_Params Dis_ConsumeElixir_Params;
	memset(&Dis_ConsumeElixir_Params, 0, sizeof(Dis_ConsumeElixir_Params));
	memcpy_s(&Dis_ConsumeElixir_Params._ElixirType, sizeof(Dis_ConsumeElixir_Params._ElixirType), &_ElixirType, sizeof(_ElixirType));

	this->ProcessEvent(uFnDis_ConsumeElixir, &Dis_ConsumeElixir_Params, nullptr);

	return Dis_ConsumeElixir_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredPlayerController.Dis_PrevItemOption
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31672])
// Parameter Info:
// EDisEquipUsage                 _Usage                         (CPF_Parm)

void ADishonoredPlayerController::Dis_PrevItemOption(EDisEquipUsage _Usage)
{
	static UFunction* uFnDis_PrevItemOption = nullptr;

	if (!uFnDis_PrevItemOption)
	{
		uFnDis_PrevItemOption = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_PrevItemOption");
	}

	ADishonoredPlayerController_execDis_PrevItemOption_Params Dis_PrevItemOption_Params;
	memset(&Dis_PrevItemOption_Params, 0, sizeof(Dis_PrevItemOption_Params));
	memcpy_s(&Dis_PrevItemOption_Params._Usage, sizeof(Dis_PrevItemOption_Params._Usage), &_Usage, sizeof(_Usage));

	this->ProcessEvent(uFnDis_PrevItemOption, &Dis_PrevItemOption_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.Dis_NextItemOption
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31666])
// Parameter Info:
// EDisEquipUsage                 _Usage                         (CPF_Parm)

void ADishonoredPlayerController::Dis_NextItemOption(EDisEquipUsage _Usage)
{
	static UFunction* uFnDis_NextItemOption = nullptr;

	if (!uFnDis_NextItemOption)
	{
		uFnDis_NextItemOption = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_NextItemOption");
	}

	ADishonoredPlayerController_execDis_NextItemOption_Params Dis_NextItemOption_Params;
	memset(&Dis_NextItemOption_Params, 0, sizeof(Dis_NextItemOption_Params));
	memcpy_s(&Dis_NextItemOption_Params._Usage, sizeof(Dis_NextItemOption_Params._Usage), &_Usage, sizeof(_Usage));

	this->ProcessEvent(uFnDis_NextItemOption, &Dis_NextItemOption_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.Dis_UseSecondaryItem
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31683])
// Parameter Info:

void ADishonoredPlayerController::Dis_UseSecondaryItem()
{
	static UFunction* uFnDis_UseSecondaryItem = nullptr;

	if (!uFnDis_UseSecondaryItem)
	{
		uFnDis_UseSecondaryItem = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_UseSecondaryItem");
	}

	ADishonoredPlayerController_execDis_UseSecondaryItem_Params Dis_UseSecondaryItem_Params;
	memset(&Dis_UseSecondaryItem_Params, 0, sizeof(Dis_UseSecondaryItem_Params));

	this->ProcessEvent(uFnDis_UseSecondaryItem, &Dis_UseSecondaryItem_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.Dis_UsePrimaryItem
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31681])
// Parameter Info:

void ADishonoredPlayerController::Dis_UsePrimaryItem()
{
	static UFunction* uFnDis_UsePrimaryItem = nullptr;

	if (!uFnDis_UsePrimaryItem)
	{
		uFnDis_UsePrimaryItem = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_UsePrimaryItem");
	}

	ADishonoredPlayerController_execDis_UsePrimaryItem_Params Dis_UsePrimaryItem_Params;
	memset(&Dis_UsePrimaryItem_Params, 0, sizeof(Dis_UsePrimaryItem_Params));

	this->ProcessEvent(uFnDis_UsePrimaryItem, &Dis_UsePrimaryItem_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.Dis_UsePrimaryItemOrAdrenaline_Multi
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31682])
// Parameter Info:
// int32_t                        _NumButtonPresses              (CPF_Parm)
// uint32_t                       _bIsFinished                   (CPF_Parm)

void ADishonoredPlayerController::Dis_UsePrimaryItemOrAdrenaline_Multi(int32_t _NumButtonPresses, bool _bIsFinished)
{
	static UFunction* uFnDis_UsePrimaryItemOrAdrenaline_Multi = nullptr;

	if (!uFnDis_UsePrimaryItemOrAdrenaline_Multi)
	{
		uFnDis_UsePrimaryItemOrAdrenaline_Multi = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_UsePrimaryItemOrAdrenaline_Multi");
	}

	ADishonoredPlayerController_execDis_UsePrimaryItemOrAdrenaline_Multi_Params Dis_UsePrimaryItemOrAdrenaline_Multi_Params;
	memset(&Dis_UsePrimaryItemOrAdrenaline_Multi_Params, 0, sizeof(Dis_UsePrimaryItemOrAdrenaline_Multi_Params));
	memcpy_s(&Dis_UsePrimaryItemOrAdrenaline_Multi_Params._NumButtonPresses, sizeof(Dis_UsePrimaryItemOrAdrenaline_Multi_Params._NumButtonPresses), &_NumButtonPresses, sizeof(_NumButtonPresses));
	Dis_UsePrimaryItemOrAdrenaline_Multi_Params._bIsFinished = _bIsFinished;

	this->ProcessEvent(uFnDis_UsePrimaryItemOrAdrenaline_Multi, &Dis_UsePrimaryItemOrAdrenaline_Multi_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.Dis_EquipItemByType
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31658])
// Parameter Info:
// class UClass*                  _pItemClass                    (CPF_Parm)
// EDisEquipUsage                 _Usage                         (CPF_Parm)

void ADishonoredPlayerController::Dis_EquipItemByType(class UClass* _pItemClass, EDisEquipUsage _Usage)
{
	static UFunction* uFnDis_EquipItemByType = nullptr;

	if (!uFnDis_EquipItemByType)
	{
		uFnDis_EquipItemByType = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_EquipItemByType");
	}

	ADishonoredPlayerController_execDis_EquipItemByType_Params Dis_EquipItemByType_Params;
	memset(&Dis_EquipItemByType_Params, 0, sizeof(Dis_EquipItemByType_Params));
	Dis_EquipItemByType_Params._pItemClass = _pItemClass;
	memcpy_s(&Dis_EquipItemByType_Params._Usage, sizeof(Dis_EquipItemByType_Params._Usage), &_Usage, sizeof(_Usage));

	this->ProcessEvent(uFnDis_EquipItemByType, &Dis_EquipItemByType_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.Dis_PrevEquippedItem
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31671])
// Parameter Info:
// uint32_t                       _bFromGamePad                  (CPF_Parm)

void ADishonoredPlayerController::Dis_PrevEquippedItem(bool _bFromGamePad)
{
	static UFunction* uFnDis_PrevEquippedItem = nullptr;

	if (!uFnDis_PrevEquippedItem)
	{
		uFnDis_PrevEquippedItem = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_PrevEquippedItem");
	}

	ADishonoredPlayerController_execDis_PrevEquippedItem_Params Dis_PrevEquippedItem_Params;
	memset(&Dis_PrevEquippedItem_Params, 0, sizeof(Dis_PrevEquippedItem_Params));
	Dis_PrevEquippedItem_Params._bFromGamePad = _bFromGamePad;

	this->ProcessEvent(uFnDis_PrevEquippedItem, &Dis_PrevEquippedItem_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.Dis_NextEquippedItem
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31665])
// Parameter Info:
// uint32_t                       _bFromGamePad                  (CPF_Parm)

void ADishonoredPlayerController::Dis_NextEquippedItem(bool _bFromGamePad)
{
	static UFunction* uFnDis_NextEquippedItem = nullptr;

	if (!uFnDis_NextEquippedItem)
	{
		uFnDis_NextEquippedItem = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_NextEquippedItem");
	}

	ADishonoredPlayerController_execDis_NextEquippedItem_Params Dis_NextEquippedItem_Params;
	memset(&Dis_NextEquippedItem_Params, 0, sizeof(Dis_NextEquippedItem_Params));
	Dis_NextEquippedItem_Params._bFromGamePad = _bFromGamePad;

	this->ProcessEvent(uFnDis_NextEquippedItem, &Dis_NextEquippedItem_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.Dis_WheelShortcuts_MouseNext
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31691])
// Parameter Info:

void ADishonoredPlayerController::Dis_WheelShortcuts_MouseNext()
{
	static UFunction* uFnDis_WheelShortcuts_MouseNext = nullptr;

	if (!uFnDis_WheelShortcuts_MouseNext)
	{
		uFnDis_WheelShortcuts_MouseNext = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_WheelShortcuts_MouseNext");
	}

	ADishonoredPlayerController_execDis_WheelShortcuts_MouseNext_Params Dis_WheelShortcuts_MouseNext_Params;
	memset(&Dis_WheelShortcuts_MouseNext_Params, 0, sizeof(Dis_WheelShortcuts_MouseNext_Params));

	this->ProcessEvent(uFnDis_WheelShortcuts_MouseNext, &Dis_WheelShortcuts_MouseNext_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.Dis_WheelShortcuts_MousePrevious
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31692])
// Parameter Info:

void ADishonoredPlayerController::Dis_WheelShortcuts_MousePrevious()
{
	static UFunction* uFnDis_WheelShortcuts_MousePrevious = nullptr;

	if (!uFnDis_WheelShortcuts_MousePrevious)
	{
		uFnDis_WheelShortcuts_MousePrevious = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_WheelShortcuts_MousePrevious");
	}

	ADishonoredPlayerController_execDis_WheelShortcuts_MousePrevious_Params Dis_WheelShortcuts_MousePrevious_Params;
	memset(&Dis_WheelShortcuts_MousePrevious_Params, 0, sizeof(Dis_WheelShortcuts_MousePrevious_Params));

	this->ProcessEvent(uFnDis_WheelShortcuts_MousePrevious, &Dis_WheelShortcuts_MousePrevious_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.Dis_WheelShortcuts_KeyboardUse
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31690])
// Parameter Info:
// int32_t                        _ShortcutIdx                   (CPF_Parm)

void ADishonoredPlayerController::Dis_WheelShortcuts_KeyboardUse(int32_t _ShortcutIdx)
{
	static UFunction* uFnDis_WheelShortcuts_KeyboardUse = nullptr;

	if (!uFnDis_WheelShortcuts_KeyboardUse)
	{
		uFnDis_WheelShortcuts_KeyboardUse = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_WheelShortcuts_KeyboardUse");
	}

	ADishonoredPlayerController_execDis_WheelShortcuts_KeyboardUse_Params Dis_WheelShortcuts_KeyboardUse_Params;
	memset(&Dis_WheelShortcuts_KeyboardUse_Params, 0, sizeof(Dis_WheelShortcuts_KeyboardUse_Params));
	memcpy_s(&Dis_WheelShortcuts_KeyboardUse_Params._ShortcutIdx, sizeof(Dis_WheelShortcuts_KeyboardUse_Params._ShortcutIdx), &_ShortcutIdx, sizeof(_ShortcutIdx));

	this->ProcessEvent(uFnDis_WheelShortcuts_KeyboardUse, &Dis_WheelShortcuts_KeyboardUse_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.Dis_WheelShortcuts_KeyboardSelect
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31689])
// Parameter Info:
// int32_t                        _ShortcutIdx                   (CPF_Parm)

void ADishonoredPlayerController::Dis_WheelShortcuts_KeyboardSelect(int32_t _ShortcutIdx)
{
	static UFunction* uFnDis_WheelShortcuts_KeyboardSelect = nullptr;

	if (!uFnDis_WheelShortcuts_KeyboardSelect)
	{
		uFnDis_WheelShortcuts_KeyboardSelect = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_WheelShortcuts_KeyboardSelect");
	}

	ADishonoredPlayerController_execDis_WheelShortcuts_KeyboardSelect_Params Dis_WheelShortcuts_KeyboardSelect_Params;
	memset(&Dis_WheelShortcuts_KeyboardSelect_Params, 0, sizeof(Dis_WheelShortcuts_KeyboardSelect_Params));
	memcpy_s(&Dis_WheelShortcuts_KeyboardSelect_Params._ShortcutIdx, sizeof(Dis_WheelShortcuts_KeyboardSelect_Params._ShortcutIdx), &_ShortcutIdx, sizeof(_ShortcutIdx));

	this->ProcessEvent(uFnDis_WheelShortcuts_KeyboardSelect, &Dis_WheelShortcuts_KeyboardSelect_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.Dis_WheelShortcuts_GamepadUse
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31688])
// Parameter Info:
// int32_t                        _ShortcutIdx                   (CPF_Parm)

void ADishonoredPlayerController::Dis_WheelShortcuts_GamepadUse(int32_t _ShortcutIdx)
{
	static UFunction* uFnDis_WheelShortcuts_GamepadUse = nullptr;

	if (!uFnDis_WheelShortcuts_GamepadUse)
	{
		uFnDis_WheelShortcuts_GamepadUse = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_WheelShortcuts_GamepadUse");
	}

	ADishonoredPlayerController_execDis_WheelShortcuts_GamepadUse_Params Dis_WheelShortcuts_GamepadUse_Params;
	memset(&Dis_WheelShortcuts_GamepadUse_Params, 0, sizeof(Dis_WheelShortcuts_GamepadUse_Params));
	memcpy_s(&Dis_WheelShortcuts_GamepadUse_Params._ShortcutIdx, sizeof(Dis_WheelShortcuts_GamepadUse_Params._ShortcutIdx), &_ShortcutIdx, sizeof(_ShortcutIdx));

	this->ProcessEvent(uFnDis_WheelShortcuts_GamepadUse, &Dis_WheelShortcuts_GamepadUse_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.Dis_WheelShortcuts_GamepadSelect
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31687])
// Parameter Info:
// int32_t                        _ShortcutIdx                   (CPF_Parm)

void ADishonoredPlayerController::Dis_WheelShortcuts_GamepadSelect(int32_t _ShortcutIdx)
{
	static UFunction* uFnDis_WheelShortcuts_GamepadSelect = nullptr;

	if (!uFnDis_WheelShortcuts_GamepadSelect)
	{
		uFnDis_WheelShortcuts_GamepadSelect = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_WheelShortcuts_GamepadSelect");
	}

	ADishonoredPlayerController_execDis_WheelShortcuts_GamepadSelect_Params Dis_WheelShortcuts_GamepadSelect_Params;
	memset(&Dis_WheelShortcuts_GamepadSelect_Params, 0, sizeof(Dis_WheelShortcuts_GamepadSelect_Params));
	memcpy_s(&Dis_WheelShortcuts_GamepadSelect_Params._ShortcutIdx, sizeof(Dis_WheelShortcuts_GamepadSelect_Params._ShortcutIdx), &_ShortcutIdx, sizeof(_ShortcutIdx));

	this->ProcessEvent(uFnDis_WheelShortcuts_GamepadSelect, &Dis_WheelShortcuts_GamepadSelect_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.Dis_Wheel_Close
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31685])
// Parameter Info:
// uint32_t                       _bWithGamepad                  (CPF_Parm)

void ADishonoredPlayerController::Dis_Wheel_Close(bool _bWithGamepad)
{
	static UFunction* uFnDis_Wheel_Close = nullptr;

	if (!uFnDis_Wheel_Close)
	{
		uFnDis_Wheel_Close = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_Wheel_Close");
	}

	ADishonoredPlayerController_execDis_Wheel_Close_Params Dis_Wheel_Close_Params;
	memset(&Dis_Wheel_Close_Params, 0, sizeof(Dis_Wheel_Close_Params));
	Dis_Wheel_Close_Params._bWithGamepad = _bWithGamepad;

	this->ProcessEvent(uFnDis_Wheel_Close, &Dis_Wheel_Close_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.Dis_Wheel_Open
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31686])
// Parameter Info:
// uint32_t                       _bWithGamepad                  (CPF_Parm)

void ADishonoredPlayerController::Dis_Wheel_Open(bool _bWithGamepad)
{
	static UFunction* uFnDis_Wheel_Open = nullptr;

	if (!uFnDis_Wheel_Open)
	{
		uFnDis_Wheel_Open = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.Dis_Wheel_Open");
	}

	ADishonoredPlayerController_execDis_Wheel_Open_Params Dis_Wheel_Open_Params;
	memset(&Dis_Wheel_Open_Params, 0, sizeof(Dis_Wheel_Open_Params));
	Dis_Wheel_Open_Params._bWithGamepad = _bWithGamepad;

	this->ProcessEvent(uFnDis_Wheel_Open, &Dis_Wheel_Open_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.OnTeleport
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Teleport*        _pAction                       (CPF_Parm)

void ADishonoredPlayerController::OnTeleport(class USeqAct_Teleport* _pAction)
{
	static UFunction* uFnOnTeleport = nullptr;

	if (!uFnOnTeleport)
	{
		uFnOnTeleport = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.OnTeleport");
	}

	ADishonoredPlayerController_execOnTeleport_Params OnTeleport_Params;
	memset(&OnTeleport_Params, 0, sizeof(OnTeleport_Params));
	OnTeleport_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnTeleport, &OnTeleport_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.OnTeleport_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43994])
// Parameter Info:
// class USeqAct_Teleport*        _pAction                       (CPF_Parm)

void ADishonoredPlayerController::OnTeleport_Native(class USeqAct_Teleport* _pAction)
{
	static UFunction* uFnOnTeleport_Native = nullptr;

	if (!uFnOnTeleport_Native)
	{
		uFnOnTeleport_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.OnTeleport_Native");
	}

	ADishonoredPlayerController_execOnTeleport_Native_Params OnTeleport_Native_Params;
	memset(&OnTeleport_Native_Params, 0, sizeof(OnTeleport_Native_Params));
	OnTeleport_Native_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnTeleport_Native, &OnTeleport_Native_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.ReceivedPlayer
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ADishonoredPlayerController::eventReceivedPlayer()
{
	static UFunction* uFnReceivedPlayer = nullptr;

	if (!uFnReceivedPlayer)
	{
		uFnReceivedPlayer = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.ReceivedPlayer");
	}

	ADishonoredPlayerController_eventReceivedPlayer_Params ReceivedPlayer_Params;
	memset(&ReceivedPlayer_Params, 0, sizeof(ReceivedPlayer_Params));

	this->ProcessEvent(uFnReceivedPlayer, &ReceivedPlayer_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.ReceivedPlayer_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44662])
// Parameter Info:

void ADishonoredPlayerController::ReceivedPlayer_Native()
{
	static UFunction* uFnReceivedPlayer_Native = nullptr;

	if (!uFnReceivedPlayer_Native)
	{
		uFnReceivedPlayer_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.ReceivedPlayer_Native");
	}

	ADishonoredPlayerController_execReceivedPlayer_Native_Params ReceivedPlayer_Native_Params;
	memset(&ReceivedPlayer_Native_Params, 0, sizeof(ReceivedPlayer_Native_Params));

	this->ProcessEvent(uFnReceivedPlayer_Native, &ReceivedPlayer_Native_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.HandleWalking
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[20898])
// Parameter Info:
// float                          _fDeltaSeconds                 (CPF_Parm)

void ADishonoredPlayerController::HandleWalking(float _fDeltaSeconds)
{
	static UFunction* uFnHandleWalking = nullptr;

	if (!uFnHandleWalking)
	{
		uFnHandleWalking = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.HandleWalking");
	}

	ADishonoredPlayerController_execHandleWalking_Params HandleWalking_Params;
	memset(&HandleWalking_Params, 0, sizeof(HandleWalking_Params));
	memcpy_s(&HandleWalking_Params._fDeltaSeconds, sizeof(HandleWalking_Params._fDeltaSeconds), &_fDeltaSeconds, sizeof(_fDeltaSeconds));

	this->ProcessEvent(uFnHandleWalking, &HandleWalking_Params, nullptr);
};

// Function DishonoredGame.DishonoredPlayerController.HandleHeldButtons
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35449])
// Parameter Info:
// float                          _fDeltaSeconds                 (CPF_Parm)

void ADishonoredPlayerController::HandleHeldButtons(float _fDeltaSeconds)
{
	static UFunction* uFnHandleHeldButtons = nullptr;

	if (!uFnHandleHeldButtons)
	{
		uFnHandleHeldButtons = UFunction::FindFunction("Function DishonoredGame.DishonoredPlayerController.HandleHeldButtons");
	}

	ADishonoredPlayerController_execHandleHeldButtons_Params HandleHeldButtons_Params;
	memset(&HandleHeldButtons_Params, 0, sizeof(HandleHeldButtons_Params));
	memcpy_s(&HandleHeldButtons_Params._fDeltaSeconds, sizeof(HandleHeldButtons_Params._fDeltaSeconds), &_fDeltaSeconds, sizeof(_fDeltaSeconds));

	this->ProcessEvent(uFnHandleHeldButtons, &HandleHeldButtons_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCController.IsDead
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[21371])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool ADishonoredNPCController::IsDead()
{
	static UFunction* uFnIsDead = nullptr;

	if (!uFnIsDead)
	{
		uFnIsDead = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCController.IsDead");
	}

	ADishonoredNPCController_execIsDead_Params IsDead_Params;
	memset(&IsDead_Params, 0, sizeof(IsDead_Params));

	this->ProcessEvent(uFnIsDead, &IsDead_Params, nullptr);

	return IsDead_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredNPCController.DisplayDebug
// [0x00420102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class AHUD*                    _pHUD                          (CPF_Parm)
// float                          _rfOut_YL                      (CPF_Parm | CPF_OutParm)
// float                          _rfOut_YPos                    (CPF_Parm | CPF_OutParm)

void ADishonoredNPCController::DisplayDebug(class AHUD* _pHUD, float& _rfOut_YL, float& _rfOut_YPos)
{
	static UFunction* uFnDisplayDebug = nullptr;

	if (!uFnDisplayDebug)
	{
		uFnDisplayDebug = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCController.DisplayDebug");
	}

	ADishonoredNPCController_execDisplayDebug_Params DisplayDebug_Params;
	memset(&DisplayDebug_Params, 0, sizeof(DisplayDebug_Params));
	DisplayDebug_Params._pHUD = _pHUD;
	memcpy_s(&DisplayDebug_Params._rfOut_YL, sizeof(DisplayDebug_Params._rfOut_YL), &_rfOut_YL, sizeof(_rfOut_YL));
	memcpy_s(&DisplayDebug_Params._rfOut_YPos, sizeof(DisplayDebug_Params._rfOut_YPos), &_rfOut_YPos, sizeof(_rfOut_YPos));

	this->ProcessEvent(uFnDisplayDebug, &DisplayDebug_Params, nullptr);

	memcpy_s(&_rfOut_YL, sizeof(_rfOut_YL), &DisplayDebug_Params._rfOut_YL, sizeof(DisplayDebug_Params._rfOut_YL));
	memcpy_s(&_rfOut_YPos, sizeof(_rfOut_YPos), &DisplayDebug_Params._rfOut_YPos, sizeof(DisplayDebug_Params._rfOut_YPos));
};

// Function DishonoredGame.DishonoredNPCController.DisplayDebug_Native
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[32321])
// Parameter Info:
// class AHUD*                    _pHUD                          (CPF_Parm)
// float                          _rfOut_YL                      (CPF_Parm | CPF_OutParm)
// float                          _rfOut_YPos                    (CPF_Parm | CPF_OutParm)

void ADishonoredNPCController::DisplayDebug_Native(class AHUD* _pHUD, float& _rfOut_YL, float& _rfOut_YPos)
{
	static UFunction* uFnDisplayDebug_Native = nullptr;

	if (!uFnDisplayDebug_Native)
	{
		uFnDisplayDebug_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCController.DisplayDebug_Native");
	}

	ADishonoredNPCController_execDisplayDebug_Native_Params DisplayDebug_Native_Params;
	memset(&DisplayDebug_Native_Params, 0, sizeof(DisplayDebug_Native_Params));
	DisplayDebug_Native_Params._pHUD = _pHUD;
	memcpy_s(&DisplayDebug_Native_Params._rfOut_YL, sizeof(DisplayDebug_Native_Params._rfOut_YL), &_rfOut_YL, sizeof(_rfOut_YL));
	memcpy_s(&DisplayDebug_Native_Params._rfOut_YPos, sizeof(DisplayDebug_Native_Params._rfOut_YPos), &_rfOut_YPos, sizeof(_rfOut_YPos));

	this->ProcessEvent(uFnDisplayDebug_Native, &DisplayDebug_Native_Params, nullptr);

	memcpy_s(&_rfOut_YL, sizeof(_rfOut_YL), &DisplayDebug_Native_Params._rfOut_YL, sizeof(DisplayDebug_Native_Params._rfOut_YL));
	memcpy_s(&_rfOut_YPos, sizeof(_rfOut_YPos), &DisplayDebug_Native_Params._rfOut_YPos, sizeof(DisplayDebug_Native_Params._rfOut_YPos));
};

// Function DishonoredGame.DishonoredNPCController.OnAIRingAlarm
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43878])
// Parameter Info:
// class UDisSeqAct_AIRingAlarm*  _pAction                       (CPF_Parm)

void ADishonoredNPCController::OnAIRingAlarm(class UDisSeqAct_AIRingAlarm* _pAction)
{
	static UFunction* uFnOnAIRingAlarm = nullptr;

	if (!uFnOnAIRingAlarm)
	{
		uFnOnAIRingAlarm = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCController.OnAIRingAlarm");
	}

	ADishonoredNPCController_execOnAIRingAlarm_Params OnAIRingAlarm_Params;
	memset(&OnAIRingAlarm_Params, 0, sizeof(OnAIRingAlarm_Params));
	OnAIRingAlarm_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnAIRingAlarm, &OnAIRingAlarm_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCController.OnAIStartDistraction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43884])
// Parameter Info:
// class UDisSeqAct_AIStartDistraction* _pAction                       (CPF_Parm)

void ADishonoredNPCController::OnAIStartDistraction(class UDisSeqAct_AIStartDistraction* _pAction)
{
	static UFunction* uFnOnAIStartDistraction = nullptr;

	if (!uFnOnAIStartDistraction)
	{
		uFnOnAIStartDistraction = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCController.OnAIStartDistraction");
	}

	ADishonoredNPCController_execOnAIStartDistraction_Params OnAIStartDistraction_Params;
	memset(&OnAIStartDistraction_Params, 0, sizeof(OnAIStartDistraction_Params));
	OnAIStartDistraction_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnAIStartDistraction, &OnAIStartDistraction_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCController.OnAIGetBrainFlags
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43872])
// Parameter Info:
// class UDisSeqAct_AIGetBrainFlagValue* _pAction                       (CPF_Parm)

void ADishonoredNPCController::OnAIGetBrainFlags(class UDisSeqAct_AIGetBrainFlagValue* _pAction)
{
	static UFunction* uFnOnAIGetBrainFlags = nullptr;

	if (!uFnOnAIGetBrainFlags)
	{
		uFnOnAIGetBrainFlags = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCController.OnAIGetBrainFlags");
	}

	ADishonoredNPCController_execOnAIGetBrainFlags_Params OnAIGetBrainFlags_Params;
	memset(&OnAIGetBrainFlags_Params, 0, sizeof(OnAIGetBrainFlags_Params));
	OnAIGetBrainFlags_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnAIGetBrainFlags, &OnAIGetBrainFlags_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCController.OnAISetBrainFlags
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43879])
// Parameter Info:
// class UDisSeqAct_AISetBrainFlags* _pAction                       (CPF_Parm)

void ADishonoredNPCController::OnAISetBrainFlags(class UDisSeqAct_AISetBrainFlags* _pAction)
{
	static UFunction* uFnOnAISetBrainFlags = nullptr;

	if (!uFnOnAISetBrainFlags)
	{
		uFnOnAISetBrainFlags = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCController.OnAISetBrainFlags");
	}

	ADishonoredNPCController_execOnAISetBrainFlags_Params OnAISetBrainFlags_Params;
	memset(&OnAISetBrainFlags_Params, 0, sizeof(OnAISetBrainFlags_Params));
	OnAISetBrainFlags_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnAISetBrainFlags, &OnAISetBrainFlags_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCController.OnAIPsychicAttention
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43877])
// Parameter Info:
// class UDisSeqAct_AIPsychicAttention* _pAction                       (CPF_Parm)

void ADishonoredNPCController::OnAIPsychicAttention(class UDisSeqAct_AIPsychicAttention* _pAction)
{
	static UFunction* uFnOnAIPsychicAttention = nullptr;

	if (!uFnOnAIPsychicAttention)
	{
		uFnOnAIPsychicAttention = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCController.OnAIPsychicAttention");
	}

	ADishonoredNPCController_execOnAIPsychicAttention_Params OnAIPsychicAttention_Params;
	memset(&OnAIPsychicAttention_Params, 0, sizeof(OnAIPsychicAttention_Params));
	OnAIPsychicAttention_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnAIPsychicAttention, &OnAIPsychicAttention_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCController.OnAIClearAttention
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43870])
// Parameter Info:
// class UDisSeqAct_AIClearAttention* _pAction                       (CPF_Parm)

void ADishonoredNPCController::OnAIClearAttention(class UDisSeqAct_AIClearAttention* _pAction)
{
	static UFunction* uFnOnAIClearAttention = nullptr;

	if (!uFnOnAIClearAttention)
	{
		uFnOnAIClearAttention = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCController.OnAIClearAttention");
	}

	ADishonoredNPCController_execOnAIClearAttention_Params OnAIClearAttention_Params;
	memset(&OnAIClearAttention_Params, 0, sizeof(OnAIClearAttention_Params));
	OnAIClearAttention_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnAIClearAttention, &OnAIClearAttention_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCController.OnAISetSuspicionLevel
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43882])
// Parameter Info:
// class UDisSeqAct_AISetSuspicionLevel* _pAction                       (CPF_Parm)

void ADishonoredNPCController::OnAISetSuspicionLevel(class UDisSeqAct_AISetSuspicionLevel* _pAction)
{
	static UFunction* uFnOnAISetSuspicionLevel = nullptr;

	if (!uFnOnAISetSuspicionLevel)
	{
		uFnOnAISetSuspicionLevel = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCController.OnAISetSuspicionLevel");
	}

	ADishonoredNPCController_execOnAISetSuspicionLevel_Params OnAISetSuspicionLevel_Params;
	memset(&OnAISetSuspicionLevel_Params, 0, sizeof(OnAISetSuspicionLevel_Params));
	OnAISetSuspicionLevel_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnAISetSuspicionLevel, &OnAISetSuspicionLevel_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCController.OnAIProtectNeutralsOverride
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43876])
// Parameter Info:
// class UDisSeqAct_AIProtectNeutralsOverride* _pAction                       (CPF_Parm)

void ADishonoredNPCController::OnAIProtectNeutralsOverride(class UDisSeqAct_AIProtectNeutralsOverride* _pAction)
{
	static UFunction* uFnOnAIProtectNeutralsOverride = nullptr;

	if (!uFnOnAIProtectNeutralsOverride)
	{
		uFnOnAIProtectNeutralsOverride = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCController.OnAIProtectNeutralsOverride");
	}

	ADishonoredNPCController_execOnAIProtectNeutralsOverride_Params OnAIProtectNeutralsOverride_Params;
	memset(&OnAIProtectNeutralsOverride_Params, 0, sizeof(OnAIProtectNeutralsOverride_Params));
	OnAIProtectNeutralsOverride_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnAIProtectNeutralsOverride, &OnAIProtectNeutralsOverride_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCController.OnAIShoot
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43883])
// Parameter Info:
// class UDisSeqAct_AIShoot*      _pAction                       (CPF_Parm)

void ADishonoredNPCController::OnAIShoot(class UDisSeqAct_AIShoot* _pAction)
{
	static UFunction* uFnOnAIShoot = nullptr;

	if (!uFnOnAIShoot)
	{
		uFnOnAIShoot = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCController.OnAIShoot");
	}

	ADishonoredNPCController_execOnAIShoot_Params OnAIShoot_Params;
	memset(&OnAIShoot_Params, 0, sizeof(OnAIShoot_Params));
	OnAIShoot_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnAIShoot, &OnAIShoot_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCController.OnAISetSenses
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43881])
// Parameter Info:
// class UDisSeqAct_AISetSenses*  _pAction                       (CPF_Parm)

void ADishonoredNPCController::OnAISetSenses(class UDisSeqAct_AISetSenses* _pAction)
{
	static UFunction* uFnOnAISetSenses = nullptr;

	if (!uFnOnAISetSenses)
	{
		uFnOnAISetSenses = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCController.OnAISetSenses");
	}

	ADishonoredNPCController_execOnAISetSenses_Params OnAISetSenses_Params;
	memset(&OnAISetSenses_Params, 0, sizeof(OnAISetSenses_Params));
	OnAISetSenses_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnAISetSenses, &OnAISetSenses_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCController.OnAISetPatrol
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43880])
// Parameter Info:
// class UDisSeqAct_AISetPatrol*  _pAction                       (CPF_Parm)

void ADishonoredNPCController::OnAISetPatrol(class UDisSeqAct_AISetPatrol* _pAction)
{
	static UFunction* uFnOnAISetPatrol = nullptr;

	if (!uFnOnAISetPatrol)
	{
		uFnOnAISetPatrol = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCController.OnAISetPatrol");
	}

	ADishonoredNPCController_execOnAISetPatrol_Params OnAISetPatrol_Params;
	memset(&OnAISetPatrol_Params, 0, sizeof(OnAISetPatrol_Params));
	OnAISetPatrol_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnAISetPatrol, &OnAISetPatrol_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCController.OnAIGuard
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43874])
// Parameter Info:
// class UDisSeqAct_AIGuard*      _pAction                       (CPF_Parm)

void ADishonoredNPCController::OnAIGuard(class UDisSeqAct_AIGuard* _pAction)
{
	static UFunction* uFnOnAIGuard = nullptr;

	if (!uFnOnAIGuard)
	{
		uFnOnAIGuard = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCController.OnAIGuard");
	}

	ADishonoredNPCController_execOnAIGuard_Params OnAIGuard_Params;
	memset(&OnAIGuard_Params, 0, sizeof(OnAIGuard_Params));
	OnAIGuard_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnAIGuard, &OnAIGuard_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCController.OnAIGoToActor
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43873])
// Parameter Info:
// class UDisSeqAct_AIGoToActor*  _pAction                       (CPF_Parm)

void ADishonoredNPCController::OnAIGoToActor(class UDisSeqAct_AIGoToActor* _pAction)
{
	static UFunction* uFnOnAIGoToActor = nullptr;

	if (!uFnOnAIGoToActor)
	{
		uFnOnAIGoToActor = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCController.OnAIGoToActor");
	}

	ADishonoredNPCController_execOnAIGoToActor_Params OnAIGoToActor_Params;
	memset(&OnAIGoToActor_Params, 0, sizeof(OnAIGoToActor_Params));
	OnAIGoToActor_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnAIGoToActor, &OnAIGoToActor_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCController.OnAIDoSearch
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43871])
// Parameter Info:
// class UDisSeqAct_AIDoSearch*   _pAction                       (CPF_Parm)

void ADishonoredNPCController::OnAIDoSearch(class UDisSeqAct_AIDoSearch* _pAction)
{
	static UFunction* uFnOnAIDoSearch = nullptr;

	if (!uFnOnAIDoSearch)
	{
		uFnOnAIDoSearch = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCController.OnAIDoSearch");
	}

	ADishonoredNPCController_execOnAIDoSearch_Params OnAIDoSearch_Params;
	memset(&OnAIDoSearch_Params, 0, sizeof(OnAIDoSearch_Params));
	OnAIDoSearch_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnAIDoSearch, &OnAIDoSearch_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCController.OnAIAmbush
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43869])
// Parameter Info:
// class UDisSeqAct_AIAmbush*     _pAction                       (CPF_Parm)

void ADishonoredNPCController::OnAIAmbush(class UDisSeqAct_AIAmbush* _pAction)
{
	static UFunction* uFnOnAIAmbush = nullptr;

	if (!uFnOnAIAmbush)
	{
		uFnOnAIAmbush = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCController.OnAIAmbush");
	}

	ADishonoredNPCController_execOnAIAmbush_Params OnAIAmbush_Params;
	memset(&OnAIAmbush_Params, 0, sizeof(OnAIAmbush_Params));
	OnAIAmbush_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnAIAmbush, &OnAIAmbush_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCController.CallClearLatentAction
// [0x00024802] (FUNC_Defined | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UClass*                  _pActionClass                  (CPF_Parm)
// uint32_t                       _bAborted                      (CPF_OptionalParm | CPF_Parm)
// class USeqAct_Latent*          _pExceptionAction              (CPF_OptionalParm | CPF_Parm)

void ADishonoredNPCController::eventCallClearLatentAction(class UClass* _pActionClass, bool _bAborted, class USeqAct_Latent* _pExceptionAction)
{
	static UFunction* uFnCallClearLatentAction = nullptr;

	if (!uFnCallClearLatentAction)
	{
		uFnCallClearLatentAction = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCController.CallClearLatentAction");
	}

	ADishonoredNPCController_eventCallClearLatentAction_Params CallClearLatentAction_Params;
	memset(&CallClearLatentAction_Params, 0, sizeof(CallClearLatentAction_Params));
	CallClearLatentAction_Params._pActionClass = _pActionClass;
	CallClearLatentAction_Params._bAborted = _bAborted;
	CallClearLatentAction_Params._pExceptionAction = _pExceptionAction;

	this->ProcessEvent(uFnCallClearLatentAction, &CallClearLatentAction_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCController.GetMoveTargetLocation
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35319])
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FVector ADishonoredNPCController::GetMoveTargetLocation()
{
	static UFunction* uFnGetMoveTargetLocation = nullptr;

	if (!uFnGetMoveTargetLocation)
	{
		uFnGetMoveTargetLocation = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCController.GetMoveTargetLocation");
	}

	ADishonoredNPCController_execGetMoveTargetLocation_Params GetMoveTargetLocation_Params;
	memset(&GetMoveTargetLocation_Params, 0, sizeof(GetMoveTargetLocation_Params));

	this->ProcessEvent(uFnGetMoveTargetLocation, &GetMoveTargetLocation_Params, nullptr);

	return GetMoveTargetLocation_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredNPCPawn.SetDesiredRotation
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[25640])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                _TargetDesiredRotation         (CPF_Parm)
// uint32_t                       _bInLockDesiredRotation        (CPF_OptionalParm | CPF_Parm)
// uint32_t                       _bInUnlockWhenReached          (CPF_OptionalParm | CPF_Parm)
// float                          _InterpolationTime             (CPF_OptionalParm | CPF_Parm)
// uint32_t                       _bResetRotationRate            (CPF_OptionalParm | CPF_Parm)

bool ADishonoredNPCPawn::SetDesiredRotation(const struct FRotator& _TargetDesiredRotation, bool _bInLockDesiredRotation, bool _bInUnlockWhenReached, float _InterpolationTime, bool _bResetRotationRate)
{
	static UFunction* uFnSetDesiredRotation = nullptr;

	if (!uFnSetDesiredRotation)
	{
		uFnSetDesiredRotation = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCPawn.SetDesiredRotation");
	}

	ADishonoredNPCPawn_execSetDesiredRotation_Params SetDesiredRotation_Params;
	memset(&SetDesiredRotation_Params, 0, sizeof(SetDesiredRotation_Params));
	memcpy_s(&SetDesiredRotation_Params._TargetDesiredRotation, sizeof(SetDesiredRotation_Params._TargetDesiredRotation), &_TargetDesiredRotation, sizeof(_TargetDesiredRotation));
	SetDesiredRotation_Params._bInLockDesiredRotation = _bInLockDesiredRotation;
	SetDesiredRotation_Params._bInUnlockWhenReached = _bInUnlockWhenReached;
	memcpy_s(&SetDesiredRotation_Params._InterpolationTime, sizeof(SetDesiredRotation_Params._InterpolationTime), &_InterpolationTime, sizeof(_InterpolationTime));
	SetDesiredRotation_Params._bResetRotationRate = _bResetRotationRate;

	this->ProcessEvent(uFnSetDesiredRotation, &SetDesiredRotation_Params, nullptr);

	return SetDesiredRotation_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredNPCPawn.SetPushesRigidBodies
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[25751])
// Parameter Info:
// uint32_t                       _bNewPush                      (CPF_Parm)

void ADishonoredNPCPawn::SetPushesRigidBodies(bool _bNewPush)
{
	static UFunction* uFnSetPushesRigidBodies = nullptr;

	if (!uFnSetPushesRigidBodies)
	{
		uFnSetPushesRigidBodies = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCPawn.SetPushesRigidBodies");
	}

	ADishonoredNPCPawn_execSetPushesRigidBodies_Params SetPushesRigidBodies_Params;
	memset(&SetPushesRigidBodies_Params, 0, sizeof(SetPushesRigidBodies_Params));
	SetPushesRigidBodies_Params._bNewPush = _bNewPush;

	this->ProcessEvent(uFnSetPushesRigidBodies, &SetPushesRigidBodies_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCPawn.OnNPCAddPutPocketInteraction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47588])
// Parameter Info:
// class UDisDLC06SeqAct_NPCAddPutPocketInteraction* _pAction                       (CPF_Parm)

void ADishonoredNPCPawn::OnNPCAddPutPocketInteraction(class UDisDLC06SeqAct_NPCAddPutPocketInteraction* _pAction)
{
	static UFunction* uFnOnNPCAddPutPocketInteraction = nullptr;

	if (!uFnOnNPCAddPutPocketInteraction)
	{
		uFnOnNPCAddPutPocketInteraction = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCPawn.OnNPCAddPutPocketInteraction");
	}

	ADishonoredNPCPawn_execOnNPCAddPutPocketInteraction_Params OnNPCAddPutPocketInteraction_Params;
	memset(&OnNPCAddPutPocketInteraction_Params, 0, sizeof(OnNPCAddPutPocketInteraction_Params));
	OnNPCAddPutPocketInteraction_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnNPCAddPutPocketInteraction, &OnNPCAddPutPocketInteraction_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCPawn.OnNPCSetMaterials
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43948])
// Parameter Info:
// class UDisSeqAct_NPCSetMaterials* _pAction                       (CPF_Parm)

void ADishonoredNPCPawn::OnNPCSetMaterials(class UDisSeqAct_NPCSetMaterials* _pAction)
{
	static UFunction* uFnOnNPCSetMaterials = nullptr;

	if (!uFnOnNPCSetMaterials)
	{
		uFnOnNPCSetMaterials = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCPawn.OnNPCSetMaterials");
	}

	ADishonoredNPCPawn_execOnNPCSetMaterials_Params OnNPCSetMaterials_Params;
	memset(&OnNPCSetMaterials_Params, 0, sizeof(OnNPCSetMaterials_Params));
	OnNPCSetMaterials_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnNPCSetMaterials, &OnNPCSetMaterials_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCPawn.OnSetIgnoreDeath
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43981])
// Parameter Info:
// class UDisSeqAct_SetIgnoreDeath* _pAction                       (CPF_Parm)

void ADishonoredNPCPawn::OnSetIgnoreDeath(class UDisSeqAct_SetIgnoreDeath* _pAction)
{
	static UFunction* uFnOnSetIgnoreDeath = nullptr;

	if (!uFnOnSetIgnoreDeath)
	{
		uFnOnSetIgnoreDeath = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCPawn.OnSetIgnoreDeath");
	}

	ADishonoredNPCPawn_execOnSetIgnoreDeath_Params OnSetIgnoreDeath_Params;
	memset(&OnSetIgnoreDeath_Params, 0, sizeof(OnSetIgnoreDeath_Params));
	OnSetIgnoreDeath_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnSetIgnoreDeath, &OnSetIgnoreDeath_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCPawn.OnOverridePossess
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43953])
// Parameter Info:
// class UDisSeqAct_OverridePossess* _pAction                       (CPF_Parm)

void ADishonoredNPCPawn::OnOverridePossess(class UDisSeqAct_OverridePossess* _pAction)
{
	static UFunction* uFnOnOverridePossess = nullptr;

	if (!uFnOnOverridePossess)
	{
		uFnOnOverridePossess = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCPawn.OnOverridePossess");
	}

	ADishonoredNPCPawn_execOnOverridePossess_Params OnOverridePossess_Params;
	memset(&OnOverridePossess_Params, 0, sizeof(OnOverridePossess_Params));
	OnOverridePossess_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnOverridePossess, &OnOverridePossess_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCPawn.OnPlayMusicBox
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43955])
// Parameter Info:
// class UDisSeqAct_PlayMusicBox* _pAction                       (CPF_Parm)

void ADishonoredNPCPawn::OnPlayMusicBox(class UDisSeqAct_PlayMusicBox* _pAction)
{
	static UFunction* uFnOnPlayMusicBox = nullptr;

	if (!uFnOnPlayMusicBox)
	{
		uFnOnPlayMusicBox = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCPawn.OnPlayMusicBox");
	}

	ADishonoredNPCPawn_execOnPlayMusicBox_Params OnPlayMusicBox_Params;
	memset(&OnPlayMusicBox_Params, 0, sizeof(OnPlayMusicBox_Params));
	OnPlayMusicBox_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnPlayMusicBox, &OnPlayMusicBox_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCPawn.OnEquipItemType
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43909])
// Parameter Info:
// class UDisSeqAct_EquipItemType* _pAction                       (CPF_Parm)

void ADishonoredNPCPawn::OnEquipItemType(class UDisSeqAct_EquipItemType* _pAction)
{
	static UFunction* uFnOnEquipItemType = nullptr;

	if (!uFnOnEquipItemType)
	{
		uFnOnEquipItemType = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCPawn.OnEquipItemType");
	}

	ADishonoredNPCPawn_execOnEquipItemType_Params OnEquipItemType_Params;
	memset(&OnEquipItemType_Params, 0, sizeof(OnEquipItemType_Params));
	OnEquipItemType_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnEquipItemType, &OnEquipItemType_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCPawn.OnSpawnStealable
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43989])
// Parameter Info:
// class UDisSeqAct_SpawnStealable* _pAction                       (CPF_Parm)

void ADishonoredNPCPawn::OnSpawnStealable(class UDisSeqAct_SpawnStealable* _pAction)
{
	static UFunction* uFnOnSpawnStealable = nullptr;

	if (!uFnOnSpawnStealable)
	{
		uFnOnSpawnStealable = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCPawn.OnSpawnStealable");
	}

	ADishonoredNPCPawn_execOnSpawnStealable_Params OnSpawnStealable_Params;
	memset(&OnSpawnStealable_Params, 0, sizeof(OnSpawnStealable_Params));
	OnSpawnStealable_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnSpawnStealable, &OnSpawnStealable_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCPawn.OnNPCDoTeleportSpell
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43946])
// Parameter Info:
// class UDisSeqAct_NPCDoTeleportSpell* _pAction                       (CPF_Parm)

void ADishonoredNPCPawn::OnNPCDoTeleportSpell(class UDisSeqAct_NPCDoTeleportSpell* _pAction)
{
	static UFunction* uFnOnNPCDoTeleportSpell = nullptr;

	if (!uFnOnNPCDoTeleportSpell)
	{
		uFnOnNPCDoTeleportSpell = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCPawn.OnNPCDoTeleportSpell");
	}

	ADishonoredNPCPawn_execOnNPCDoTeleportSpell_Params OnNPCDoTeleportSpell_Params;
	memset(&OnNPCDoTeleportSpell_Params, 0, sizeof(OnNPCDoTeleportSpell_Params));
	OnNPCDoTeleportSpell_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnNPCDoTeleportSpell, &OnNPCDoTeleportSpell_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCPawn.OnNPCMarkForVanish
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43947])
// Parameter Info:
// class UDisSeqAct_NPCMarkForVanish* _pAction                       (CPF_Parm)

void ADishonoredNPCPawn::OnNPCMarkForVanish(class UDisSeqAct_NPCMarkForVanish* _pAction)
{
	static UFunction* uFnOnNPCMarkForVanish = nullptr;

	if (!uFnOnNPCMarkForVanish)
	{
		uFnOnNPCMarkForVanish = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCPawn.OnNPCMarkForVanish");
	}

	ADishonoredNPCPawn_execOnNPCMarkForVanish_Params OnNPCMarkForVanish_Params;
	memset(&OnNPCMarkForVanish_Params, 0, sizeof(OnNPCMarkForVanish_Params));
	OnNPCMarkForVanish_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnNPCMarkForVanish, &OnNPCMarkForVanish_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCPawn.OnSeverLimb
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43985])
// Parameter Info:
// class UDisSeqAct_SeverLimb*    _pAction                       (CPF_Parm)

void ADishonoredNPCPawn::OnSeverLimb(class UDisSeqAct_SeverLimb* _pAction)
{
	static UFunction* uFnOnSeverLimb = nullptr;

	if (!uFnOnSeverLimb)
	{
		uFnOnSeverLimb = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCPawn.OnSeverLimb");
	}

	ADishonoredNPCPawn_execOnSeverLimb_Params OnSeverLimb_Params;
	memset(&OnSeverLimb_Params, 0, sizeof(OnSeverLimb_Params));
	OnSeverLimb_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnSeverLimb, &OnSeverLimb_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCPawn.PhysicsVolumeChange
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APhysicsVolume*          _pNewVolume                    (CPF_Parm)

void ADishonoredNPCPawn::eventPhysicsVolumeChange(class APhysicsVolume* _pNewVolume)
{
	static UFunction* uFnPhysicsVolumeChange = nullptr;

	if (!uFnPhysicsVolumeChange)
	{
		uFnPhysicsVolumeChange = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCPawn.PhysicsVolumeChange");
	}

	ADishonoredNPCPawn_eventPhysicsVolumeChange_Params PhysicsVolumeChange_Params;
	memset(&PhysicsVolumeChange_Params, 0, sizeof(PhysicsVolumeChange_Params));
	PhysicsVolumeChange_Params._pNewVolume = _pNewVolume;

	this->ProcessEvent(uFnPhysicsVolumeChange, &PhysicsVolumeChange_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCPawn.NPCTouchedDeepWater
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43842])
// Parameter Info:

void ADishonoredNPCPawn::NPCTouchedDeepWater()
{
	static UFunction* uFnNPCTouchedDeepWater = nullptr;

	if (!uFnNPCTouchedDeepWater)
	{
		uFnNPCTouchedDeepWater = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCPawn.NPCTouchedDeepWater");
	}

	ADishonoredNPCPawn_execNPCTouchedDeepWater_Params NPCTouchedDeepWater_Params;
	memset(&NPCTouchedDeepWater_Params, 0, sizeof(NPCTouchedDeepWater_Params));

	this->ProcessEvent(uFnNPCTouchedDeepWater, &NPCTouchedDeepWater_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCPawn.BreakConstraint
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FName                    _JointName                     (CPF_Parm)

void ADishonoredNPCPawn::eventBreakConstraint(const class FName& _JointName)
{
	static UFunction* uFnBreakConstraint = nullptr;

	if (!uFnBreakConstraint)
	{
		uFnBreakConstraint = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCPawn.BreakConstraint");
	}

	ADishonoredNPCPawn_eventBreakConstraint_Params BreakConstraint_Params;
	memset(&BreakConstraint_Params, 0, sizeof(BreakConstraint_Params));
	memcpy_s(&BreakConstraint_Params._JointName, sizeof(BreakConstraint_Params._JointName), &_JointName, sizeof(_JointName));

	this->ProcessEvent(uFnBreakConstraint, &BreakConstraint_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCPawn.TakeFallingDamage_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45312])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 _HitNormal                     (CPF_Parm)
// class AActor*                  _pFloorActor                   (CPF_Parm)

int32_t ADishonoredNPCPawn::TakeFallingDamage_Native(const struct FVector& _HitNormal, class AActor* _pFloorActor)
{
	static UFunction* uFnTakeFallingDamage_Native = nullptr;

	if (!uFnTakeFallingDamage_Native)
	{
		uFnTakeFallingDamage_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCPawn.TakeFallingDamage_Native");
	}

	ADishonoredNPCPawn_execTakeFallingDamage_Native_Params TakeFallingDamage_Native_Params;
	memset(&TakeFallingDamage_Native_Params, 0, sizeof(TakeFallingDamage_Native_Params));
	memcpy_s(&TakeFallingDamage_Native_Params._HitNormal, sizeof(TakeFallingDamage_Native_Params._HitNormal), &_HitNormal, sizeof(_HitNormal));
	TakeFallingDamage_Native_Params._pFloorActor = _pFloorActor;

	this->ProcessEvent(uFnTakeFallingDamage_Native, &TakeFallingDamage_Native_Params, nullptr);

	return TakeFallingDamage_Native_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredNPCPawn.TakeDamage_Native
// [0x00424400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[45311])
// Parameter Info:
// class AController*             _pInstigatedBy                 (CPF_Parm)
// struct FVector                 _HitLocation                   (CPF_Parm)
// class UClass*                  _pDamageType                   (CPF_Parm)
// struct FTraceHitInfo           _HitInfo                       (CPF_OptionalParm | CPF_Parm)
// class AActor*                  _pDamageCauser                 (CPF_OptionalParm | CPF_Parm)
// int32_t                        _rDamage                       (CPF_Parm | CPF_OutParm)
// struct FVector                 _rMomentum                     (CPF_Parm | CPF_OutParm)

void ADishonoredNPCPawn::TakeDamage_Native(class AController* _pInstigatedBy, const struct FVector& _HitLocation, class UClass* _pDamageType, const struct FTraceHitInfo& _HitInfo, class AActor* _pDamageCauser, int32_t& _rDamage, struct FVector& _rMomentum)
{
	static UFunction* uFnTakeDamage_Native = nullptr;

	if (!uFnTakeDamage_Native)
	{
		uFnTakeDamage_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCPawn.TakeDamage_Native");
	}

	ADishonoredNPCPawn_execTakeDamage_Native_Params TakeDamage_Native_Params;
	memset(&TakeDamage_Native_Params, 0, sizeof(TakeDamage_Native_Params));
	TakeDamage_Native_Params._pInstigatedBy = _pInstigatedBy;
	memcpy_s(&TakeDamage_Native_Params._HitLocation, sizeof(TakeDamage_Native_Params._HitLocation), &_HitLocation, sizeof(_HitLocation));
	TakeDamage_Native_Params._pDamageType = _pDamageType;
	memcpy_s(&TakeDamage_Native_Params._HitInfo, sizeof(TakeDamage_Native_Params._HitInfo), &_HitInfo, sizeof(_HitInfo));
	TakeDamage_Native_Params._pDamageCauser = _pDamageCauser;
	memcpy_s(&TakeDamage_Native_Params._rDamage, sizeof(TakeDamage_Native_Params._rDamage), &_rDamage, sizeof(_rDamage));
	memcpy_s(&TakeDamage_Native_Params._rMomentum, sizeof(TakeDamage_Native_Params._rMomentum), &_rMomentum, sizeof(_rMomentum));

	this->ProcessEvent(uFnTakeDamage_Native, &TakeDamage_Native_Params, nullptr);

	memcpy_s(&_rDamage, sizeof(_rDamage), &TakeDamage_Native_Params._rDamage, sizeof(TakeDamage_Native_Params._rDamage));
	memcpy_s(&_rMomentum, sizeof(_rMomentum), &TakeDamage_Native_Params._rMomentum, sizeof(TakeDamage_Native_Params._rMomentum));
};

// Function DishonoredGame.DishonoredNPCPawn.TakeDamage
// [0x00024C00] (FUNC_Native | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[13766])
// Parameter Info:
// int32_t                        Damage                         (CPF_Parm)
// class AController*             InstigatedBy                   (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 Momentum                       (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_OptionalParm | CPF_Parm)
// class AActor*                  DamageCauser                   (CPF_OptionalParm | CPF_Parm)

void ADishonoredNPCPawn::eventTakeDamage(int32_t Damage, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static UFunction* uFnTakeDamage = nullptr;

	if (!uFnTakeDamage)
	{
		uFnTakeDamage = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCPawn.TakeDamage");
	}

	ADishonoredNPCPawn_eventTakeDamage_Params TakeDamage_Params;
	memset(&TakeDamage_Params, 0, sizeof(TakeDamage_Params));
	memcpy_s(&TakeDamage_Params.Damage, sizeof(TakeDamage_Params.Damage), &Damage, sizeof(Damage));
	TakeDamage_Params.InstigatedBy = InstigatedBy;
	memcpy_s(&TakeDamage_Params.HitLocation, sizeof(TakeDamage_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&TakeDamage_Params.Momentum, sizeof(TakeDamage_Params.Momentum), &Momentum, sizeof(Momentum));
	TakeDamage_Params.DamageType = DamageType;
	memcpy_s(&TakeDamage_Params.HitInfo, sizeof(TakeDamage_Params.HitInfo), &HitInfo, sizeof(HitInfo));
	TakeDamage_Params.DamageCauser = DamageCauser;

	this->ProcessEvent(uFnTakeDamage, &TakeDamage_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCPawn.PlayDying_Native
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44228])
// Parameter Info:
// class AController*             Killer                         (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FVector                 HitLoc                         (CPF_Parm)

void ADishonoredNPCPawn::PlayDying_Native(class AController* Killer, class UClass* DamageType, const struct FVector& HitLoc)
{
	static UFunction* uFnPlayDying_Native = nullptr;

	if (!uFnPlayDying_Native)
	{
		uFnPlayDying_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCPawn.PlayDying_Native");
	}

	ADishonoredNPCPawn_execPlayDying_Native_Params PlayDying_Native_Params;
	memset(&PlayDying_Native_Params, 0, sizeof(PlayDying_Native_Params));
	PlayDying_Native_Params.Killer = Killer;
	PlayDying_Native_Params.DamageType = DamageType;
	memcpy_s(&PlayDying_Native_Params.HitLoc, sizeof(PlayDying_Native_Params.HitLoc), &HitLoc, sizeof(HitLoc));

	this->ProcessEvent(uFnPlayDying_Native, &PlayDying_Native_Params, nullptr);
};

// Function DishonoredGame.DishonoredNPCPawn.ChooseAndTriggerDeathEvent_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30864])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UClass*                  _pDamageType                   (CPF_Parm)

bool ADishonoredNPCPawn::ChooseAndTriggerDeathEvent_Native(class UClass* _pDamageType)
{
	static UFunction* uFnChooseAndTriggerDeathEvent_Native = nullptr;

	if (!uFnChooseAndTriggerDeathEvent_Native)
	{
		uFnChooseAndTriggerDeathEvent_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCPawn.ChooseAndTriggerDeathEvent_Native");
	}

	ADishonoredNPCPawn_execChooseAndTriggerDeathEvent_Native_Params ChooseAndTriggerDeathEvent_Native_Params;
	memset(&ChooseAndTriggerDeathEvent_Native_Params, 0, sizeof(ChooseAndTriggerDeathEvent_Native_Params));
	ChooseAndTriggerDeathEvent_Native_Params._pDamageType = _pDamageType;

	this->ProcessEvent(uFnChooseAndTriggerDeathEvent_Native, &ChooseAndTriggerDeathEvent_Native_Params, nullptr);

	return ChooseAndTriggerDeathEvent_Native_Params.ReturnValue;
};

// Function DishonoredGame.DishonoredNPCPawn.DisplayDebug_Native
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[32321])
// Parameter Info:
// class AHUD*                    _pHUD                          (CPF_Parm)
// float                          _rfOut_YL                      (CPF_Parm | CPF_OutParm)
// float                          _rfOut_YPos                    (CPF_Parm | CPF_OutParm)

void ADishonoredNPCPawn::DisplayDebug_Native(class AHUD* _pHUD, float& _rfOut_YL, float& _rfOut_YPos)
{
	static UFunction* uFnDisplayDebug_Native = nullptr;

	if (!uFnDisplayDebug_Native)
	{
		uFnDisplayDebug_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredNPCPawn.DisplayDebug_Native");
	}

	ADishonoredNPCPawn_execDisplayDebug_Native_Params DisplayDebug_Native_Params;
	memset(&DisplayDebug_Native_Params, 0, sizeof(DisplayDebug_Native_Params));
	DisplayDebug_Native_Params._pHUD = _pHUD;
	memcpy_s(&DisplayDebug_Native_Params._rfOut_YL, sizeof(DisplayDebug_Native_Params._rfOut_YL), &_rfOut_YL, sizeof(_rfOut_YL));
	memcpy_s(&DisplayDebug_Native_Params._rfOut_YPos, sizeof(DisplayDebug_Native_Params._rfOut_YPos), &_rfOut_YPos, sizeof(_rfOut_YPos));

	this->ProcessEvent(uFnDisplayDebug_Native, &DisplayDebug_Native_Params, nullptr);

	memcpy_s(&_rfOut_YL, sizeof(_rfOut_YL), &DisplayDebug_Native_Params._rfOut_YL, sizeof(DisplayDebug_Native_Params._rfOut_YL));
	memcpy_s(&_rfOut_YPos, sizeof(_rfOut_YPos), &DisplayDebug_Native_Params._rfOut_YPos, sizeof(DisplayDebug_Native_Params._rfOut_YPos));
};

// Function DishonoredGame.DisTallboyNPCPawn.TakeDamage_Native
// [0x00424400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[45311])
// Parameter Info:
// class AController*             _pInstigatedBy                 (CPF_Parm)
// struct FVector                 _HitLocation                   (CPF_Parm)
// class UClass*                  _pDamageType                   (CPF_Parm)
// struct FTraceHitInfo           _HitInfo                       (CPF_OptionalParm | CPF_Parm)
// class AActor*                  _pDamageCauser                 (CPF_OptionalParm | CPF_Parm)
// int32_t                        _rDamage                       (CPF_Parm | CPF_OutParm)
// struct FVector                 _rMomentum                     (CPF_Parm | CPF_OutParm)

void ADisTallboyNPCPawn::TakeDamage_Native(class AController* _pInstigatedBy, const struct FVector& _HitLocation, class UClass* _pDamageType, const struct FTraceHitInfo& _HitInfo, class AActor* _pDamageCauser, int32_t& _rDamage, struct FVector& _rMomentum)
{
	static UFunction* uFnTakeDamage_Native = nullptr;

	if (!uFnTakeDamage_Native)
	{
		uFnTakeDamage_Native = UFunction::FindFunction("Function DishonoredGame.DisTallboyNPCPawn.TakeDamage_Native");
	}

	ADisTallboyNPCPawn_execTakeDamage_Native_Params TakeDamage_Native_Params;
	memset(&TakeDamage_Native_Params, 0, sizeof(TakeDamage_Native_Params));
	TakeDamage_Native_Params._pInstigatedBy = _pInstigatedBy;
	memcpy_s(&TakeDamage_Native_Params._HitLocation, sizeof(TakeDamage_Native_Params._HitLocation), &_HitLocation, sizeof(_HitLocation));
	TakeDamage_Native_Params._pDamageType = _pDamageType;
	memcpy_s(&TakeDamage_Native_Params._HitInfo, sizeof(TakeDamage_Native_Params._HitInfo), &_HitInfo, sizeof(_HitInfo));
	TakeDamage_Native_Params._pDamageCauser = _pDamageCauser;
	memcpy_s(&TakeDamage_Native_Params._rDamage, sizeof(TakeDamage_Native_Params._rDamage), &_rDamage, sizeof(_rDamage));
	memcpy_s(&TakeDamage_Native_Params._rMomentum, sizeof(TakeDamage_Native_Params._rMomentum), &_rMomentum, sizeof(_rMomentum));

	this->ProcessEvent(uFnTakeDamage_Native, &TakeDamage_Native_Params, nullptr);

	memcpy_s(&_rDamage, sizeof(_rDamage), &TakeDamage_Native_Params._rDamage, sizeof(TakeDamage_Native_Params._rDamage));
	memcpy_s(&_rMomentum, sizeof(_rMomentum), &TakeDamage_Native_Params._rMomentum, sizeof(TakeDamage_Native_Params._rMomentum));
};

// Function DishonoredGame.DisPossessionProxyPawn.PlayDying_Native
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44228])
// Parameter Info:
// class AController*             Killer                         (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FVector                 HitLoc                         (CPF_Parm)

void ADisPossessionProxyPawn::PlayDying_Native(class AController* Killer, class UClass* DamageType, const struct FVector& HitLoc)
{
	static UFunction* uFnPlayDying_Native = nullptr;

	if (!uFnPlayDying_Native)
	{
		uFnPlayDying_Native = UFunction::FindFunction("Function DishonoredGame.DisPossessionProxyPawn.PlayDying_Native");
	}

	ADisPossessionProxyPawn_execPlayDying_Native_Params PlayDying_Native_Params;
	memset(&PlayDying_Native_Params, 0, sizeof(PlayDying_Native_Params));
	PlayDying_Native_Params.Killer = Killer;
	PlayDying_Native_Params.DamageType = DamageType;
	memcpy_s(&PlayDying_Native_Params.HitLoc, sizeof(PlayDying_Native_Params.HitLoc), &HitLoc, sizeof(HitLoc));

	this->ProcessEvent(uFnPlayDying_Native, &PlayDying_Native_Params, nullptr);
};

// Function DishonoredGame.DishonoredSpawner.OnStartSpawn
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43990])
// Parameter Info:
// class UDisSeqAct_StartSpawn*   _pAction                       (CPF_Parm)

void ADishonoredSpawner::OnStartSpawn(class UDisSeqAct_StartSpawn* _pAction)
{
	static UFunction* uFnOnStartSpawn = nullptr;

	if (!uFnOnStartSpawn)
	{
		uFnOnStartSpawn = UFunction::FindFunction("Function DishonoredGame.DishonoredSpawner.OnStartSpawn");
	}

	ADishonoredSpawner_execOnStartSpawn_Params OnStartSpawn_Params;
	memset(&OnStartSpawn_Params, 0, sizeof(OnStartSpawn_Params));
	OnStartSpawn_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnStartSpawn, &OnStartSpawn_Params, nullptr);
};

// Function DishonoredGame.DisNPCDistractor.OnToggle
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[23663])
// Parameter Info:
// class USeqAct_Toggle*          _pAction                       (CPF_Parm)

void ADisNPCDistractor::OnToggle(class USeqAct_Toggle* _pAction)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function DishonoredGame.DisNPCDistractor.OnToggle");
	}

	ADisNPCDistractor_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	OnToggle_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorNotice.RequestStateExitCallback_GenericAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44741])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorNotice::RequestStateExitCallback_GenericAction(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_GenericAction = nullptr;

	if (!uFnRequestStateExitCallback_GenericAction)
	{
		uFnRequestStateExitCallback_GenericAction = UFunction::FindFunction("Function DishonoredGame.DisBehaviorNotice.RequestStateExitCallback_GenericAction");
	}

	UDisBehaviorNotice_execRequestStateExitCallback_GenericAction_Params RequestStateExitCallback_GenericAction_Params;
	memset(&RequestStateExitCallback_GenericAction_Params, 0, sizeof(RequestStateExitCallback_GenericAction_Params));
	RequestStateExitCallback_GenericAction_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_GenericAction, &RequestStateExitCallback_GenericAction_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorNotice.OnExitCallback_Init
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43912])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pNextState                    (CPF_Parm)

void UDisBehaviorNotice::OnExitCallback_Init(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pNextState)
{
	static UFunction* uFnOnExitCallback_Init = nullptr;

	if (!uFnOnExitCallback_Init)
	{
		uFnOnExitCallback_Init = UFunction::FindFunction("Function DishonoredGame.DisBehaviorNotice.OnExitCallback_Init");
	}

	UDisBehaviorNotice_execOnExitCallback_Init_Params OnExitCallback_Init_Params;
	memset(&OnExitCallback_Init_Params, 0, sizeof(OnExitCallback_Init_Params));
	OnExitCallback_Init_Params._pThisState = _pThisState;
	OnExitCallback_Init_Params._pNextState = _pNextState;

	this->ProcessEvent(uFnOnExitCallback_Init, &OnExitCallback_Init_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorNotice.OnEnterCallback_Init
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43902])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorNotice::OnEnterCallback_Init(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_Init = nullptr;

	if (!uFnOnEnterCallback_Init)
	{
		uFnOnEnterCallback_Init = UFunction::FindFunction("Function DishonoredGame.DisBehaviorNotice.OnEnterCallback_Init");
	}

	UDisBehaviorNotice_execOnEnterCallback_Init_Params OnEnterCallback_Init_Params;
	memset(&OnEnterCallback_Init_Params, 0, sizeof(OnEnterCallback_Init_Params));
	OnEnterCallback_Init_Params._pThisState = _pThisState;
	OnEnterCallback_Init_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_Init, &OnEnterCallback_Init_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorEscapeExplosion.RequestStateExitCallback_GenericAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44741])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorEscapeExplosion::RequestStateExitCallback_GenericAction(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_GenericAction = nullptr;

	if (!uFnRequestStateExitCallback_GenericAction)
	{
		uFnRequestStateExitCallback_GenericAction = UFunction::FindFunction("Function DishonoredGame.DisBehaviorEscapeExplosion.RequestStateExitCallback_GenericAction");
	}

	UDisBehaviorEscapeExplosion_execRequestStateExitCallback_GenericAction_Params RequestStateExitCallback_GenericAction_Params;
	memset(&RequestStateExitCallback_GenericAction_Params, 0, sizeof(RequestStateExitCallback_GenericAction_Params));
	RequestStateExitCallback_GenericAction_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_GenericAction, &RequestStateExitCallback_GenericAction_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorEscapeExplosion.ThreatTerminatedCallback_Flee
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45343])
// Parameter Info:
// class UDisAISubStateFlee*      _pSubSate                      (CPF_Parm)

void UDisBehaviorEscapeExplosion::ThreatTerminatedCallback_Flee(class UDisAISubStateFlee* _pSubSate)
{
	static UFunction* uFnThreatTerminatedCallback_Flee = nullptr;

	if (!uFnThreatTerminatedCallback_Flee)
	{
		uFnThreatTerminatedCallback_Flee = UFunction::FindFunction("Function DishonoredGame.DisBehaviorEscapeExplosion.ThreatTerminatedCallback_Flee");
	}

	UDisBehaviorEscapeExplosion_execThreatTerminatedCallback_Flee_Params ThreatTerminatedCallback_Flee_Params;
	memset(&ThreatTerminatedCallback_Flee_Params, 0, sizeof(ThreatTerminatedCallback_Flee_Params));
	ThreatTerminatedCallback_Flee_Params._pSubSate = _pSubSate;

	this->ProcessEvent(uFnThreatTerminatedCallback_Flee, &ThreatTerminatedCallback_Flee_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorEscapeExplosion.RequestStateExitCallback_Flee
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44740])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorEscapeExplosion::RequestStateExitCallback_Flee(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_Flee = nullptr;

	if (!uFnRequestStateExitCallback_Flee)
	{
		uFnRequestStateExitCallback_Flee = UFunction::FindFunction("Function DishonoredGame.DisBehaviorEscapeExplosion.RequestStateExitCallback_Flee");
	}

	UDisBehaviorEscapeExplosion_execRequestStateExitCallback_Flee_Params RequestStateExitCallback_Flee_Params;
	memset(&RequestStateExitCallback_Flee_Params, 0, sizeof(RequestStateExitCallback_Flee_Params));
	RequestStateExitCallback_Flee_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_Flee, &RequestStateExitCallback_Flee_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorEscapeExplosion.RefreshCallback_Flee
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44669])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fDeltaSeconds                 (CPF_Parm)

void UDisBehaviorEscapeExplosion::RefreshCallback_Flee(class UDisAISubState* _pThisState, float _fDeltaSeconds)
{
	static UFunction* uFnRefreshCallback_Flee = nullptr;

	if (!uFnRefreshCallback_Flee)
	{
		uFnRefreshCallback_Flee = UFunction::FindFunction("Function DishonoredGame.DisBehaviorEscapeExplosion.RefreshCallback_Flee");
	}

	UDisBehaviorEscapeExplosion_execRefreshCallback_Flee_Params RefreshCallback_Flee_Params;
	memset(&RefreshCallback_Flee_Params, 0, sizeof(RefreshCallback_Flee_Params));
	RefreshCallback_Flee_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_Flee_Params._fDeltaSeconds, sizeof(RefreshCallback_Flee_Params._fDeltaSeconds), &_fDeltaSeconds, sizeof(_fDeltaSeconds));

	this->ProcessEvent(uFnRefreshCallback_Flee, &RefreshCallback_Flee_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorEscapeExplosion.OnEnterCallback_Flee
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43900])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorEscapeExplosion::OnEnterCallback_Flee(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_Flee = nullptr;

	if (!uFnOnEnterCallback_Flee)
	{
		uFnOnEnterCallback_Flee = UFunction::FindFunction("Function DishonoredGame.DisBehaviorEscapeExplosion.OnEnterCallback_Flee");
	}

	UDisBehaviorEscapeExplosion_execOnEnterCallback_Flee_Params OnEnterCallback_Flee_Params;
	memset(&OnEnterCallback_Flee_Params, 0, sizeof(OnEnterCallback_Flee_Params));
	OnEnterCallback_Flee_Params._pThisState = _pThisState;
	OnEnterCallback_Flee_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_Flee, &OnEnterCallback_Flee_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorGoHome.RequestStateExitCallback_GenericAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44741])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorGoHome::RequestStateExitCallback_GenericAction(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_GenericAction = nullptr;

	if (!uFnRequestStateExitCallback_GenericAction)
	{
		uFnRequestStateExitCallback_GenericAction = UFunction::FindFunction("Function DishonoredGame.DisBehaviorGoHome.RequestStateExitCallback_GenericAction");
	}

	UDisBehaviorGoHome_execRequestStateExitCallback_GenericAction_Params RequestStateExitCallback_GenericAction_Params;
	memset(&RequestStateExitCallback_GenericAction_Params, 0, sizeof(RequestStateExitCallback_GenericAction_Params));
	RequestStateExitCallback_GenericAction_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_GenericAction, &RequestStateExitCallback_GenericAction_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorGoHome.OnEnterCallback_GenericAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43901])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorGoHome::OnEnterCallback_GenericAction(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_GenericAction = nullptr;

	if (!uFnOnEnterCallback_GenericAction)
	{
		uFnOnEnterCallback_GenericAction = UFunction::FindFunction("Function DishonoredGame.DisBehaviorGoHome.OnEnterCallback_GenericAction");
	}

	UDisBehaviorGoHome_execOnEnterCallback_GenericAction_Params OnEnterCallback_GenericAction_Params;
	memset(&OnEnterCallback_GenericAction_Params, 0, sizeof(OnEnterCallback_GenericAction_Params));
	OnEnterCallback_GenericAction_Params._pThisState = _pThisState;
	OnEnterCallback_GenericAction_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_GenericAction, &OnEnterCallback_GenericAction_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorGoHome.RefreshCallback_Menace
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44675])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fTimeSinceLastThought         (CPF_Parm)

void UDisBehaviorGoHome::RefreshCallback_Menace(class UDisAISubState* _pThisState, float _fTimeSinceLastThought)
{
	static UFunction* uFnRefreshCallback_Menace = nullptr;

	if (!uFnRefreshCallback_Menace)
	{
		uFnRefreshCallback_Menace = UFunction::FindFunction("Function DishonoredGame.DisBehaviorGoHome.RefreshCallback_Menace");
	}

	UDisBehaviorGoHome_execRefreshCallback_Menace_Params RefreshCallback_Menace_Params;
	memset(&RefreshCallback_Menace_Params, 0, sizeof(RefreshCallback_Menace_Params));
	RefreshCallback_Menace_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_Menace_Params._fTimeSinceLastThought, sizeof(RefreshCallback_Menace_Params._fTimeSinceLastThought), &_fTimeSinceLastThought, sizeof(_fTimeSinceLastThought));

	this->ProcessEvent(uFnRefreshCallback_Menace, &RefreshCallback_Menace_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorGoHome.RequestStateExitCallback_TakePosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44746])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorGoHome::RequestStateExitCallback_TakePosition(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_TakePosition = nullptr;

	if (!uFnRequestStateExitCallback_TakePosition)
	{
		uFnRequestStateExitCallback_TakePosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorGoHome.RequestStateExitCallback_TakePosition");
	}

	UDisBehaviorGoHome_execRequestStateExitCallback_TakePosition_Params RequestStateExitCallback_TakePosition_Params;
	memset(&RequestStateExitCallback_TakePosition_Params, 0, sizeof(RequestStateExitCallback_TakePosition_Params));
	RequestStateExitCallback_TakePosition_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_TakePosition, &RequestStateExitCallback_TakePosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorGoHome.RefreshCallback_TakePosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44678])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fTimeSinceLastThought         (CPF_Parm)

void UDisBehaviorGoHome::RefreshCallback_TakePosition(class UDisAISubState* _pThisState, float _fTimeSinceLastThought)
{
	static UFunction* uFnRefreshCallback_TakePosition = nullptr;

	if (!uFnRefreshCallback_TakePosition)
	{
		uFnRefreshCallback_TakePosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorGoHome.RefreshCallback_TakePosition");
	}

	UDisBehaviorGoHome_execRefreshCallback_TakePosition_Params RefreshCallback_TakePosition_Params;
	memset(&RefreshCallback_TakePosition_Params, 0, sizeof(RefreshCallback_TakePosition_Params));
	RefreshCallback_TakePosition_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_TakePosition_Params._fTimeSinceLastThought, sizeof(RefreshCallback_TakePosition_Params._fTimeSinceLastThought), &_fTimeSinceLastThought, sizeof(_fTimeSinceLastThought));

	this->ProcessEvent(uFnRefreshCallback_TakePosition, &RefreshCallback_TakePosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorGoHome.OnEnterCallback_TakePosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43907])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorGoHome::OnEnterCallback_TakePosition(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_TakePosition = nullptr;

	if (!uFnOnEnterCallback_TakePosition)
	{
		uFnOnEnterCallback_TakePosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorGoHome.OnEnterCallback_TakePosition");
	}

	UDisBehaviorGoHome_execOnEnterCallback_TakePosition_Params OnEnterCallback_TakePosition_Params;
	memset(&OnEnterCallback_TakePosition_Params, 0, sizeof(OnEnterCallback_TakePosition_Params));
	OnEnterCallback_TakePosition_Params._pThisState = _pThisState;
	OnEnterCallback_TakePosition_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_TakePosition, &OnEnterCallback_TakePosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorGuard.OnExitCallback_Stand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43915])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorGuard::OnExitCallback_Stand(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnExitCallback_Stand = nullptr;

	if (!uFnOnExitCallback_Stand)
	{
		uFnOnExitCallback_Stand = UFunction::FindFunction("Function DishonoredGame.DisBehaviorGuard.OnExitCallback_Stand");
	}

	UDisBehaviorGuard_execOnExitCallback_Stand_Params OnExitCallback_Stand_Params;
	memset(&OnExitCallback_Stand_Params, 0, sizeof(OnExitCallback_Stand_Params));
	OnExitCallback_Stand_Params._pThisState = _pThisState;
	OnExitCallback_Stand_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnExitCallback_Stand, &OnExitCallback_Stand_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorGuard.RefreshCallback_Stand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44676])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fTimeSinceLastThought         (CPF_Parm)

void UDisBehaviorGuard::RefreshCallback_Stand(class UDisAISubState* _pThisState, float _fTimeSinceLastThought)
{
	static UFunction* uFnRefreshCallback_Stand = nullptr;

	if (!uFnRefreshCallback_Stand)
	{
		uFnRefreshCallback_Stand = UFunction::FindFunction("Function DishonoredGame.DisBehaviorGuard.RefreshCallback_Stand");
	}

	UDisBehaviorGuard_execRefreshCallback_Stand_Params RefreshCallback_Stand_Params;
	memset(&RefreshCallback_Stand_Params, 0, sizeof(RefreshCallback_Stand_Params));
	RefreshCallback_Stand_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_Stand_Params._fTimeSinceLastThought, sizeof(RefreshCallback_Stand_Params._fTimeSinceLastThought), &_fTimeSinceLastThought, sizeof(_fTimeSinceLastThought));

	this->ProcessEvent(uFnRefreshCallback_Stand, &RefreshCallback_Stand_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorGuard.OnEnterCallback_Stand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43905])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorGuard::OnEnterCallback_Stand(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_Stand = nullptr;

	if (!uFnOnEnterCallback_Stand)
	{
		uFnOnEnterCallback_Stand = UFunction::FindFunction("Function DishonoredGame.DisBehaviorGuard.OnEnterCallback_Stand");
	}

	UDisBehaviorGuard_execOnEnterCallback_Stand_Params OnEnterCallback_Stand_Params;
	memset(&OnEnterCallback_Stand_Params, 0, sizeof(OnEnterCallback_Stand_Params));
	OnEnterCallback_Stand_Params._pThisState = _pThisState;
	OnEnterCallback_Stand_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_Stand, &OnEnterCallback_Stand_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorGuard.RequestStateExitCallback_TakePosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44746])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorGuard::RequestStateExitCallback_TakePosition(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_TakePosition = nullptr;

	if (!uFnRequestStateExitCallback_TakePosition)
	{
		uFnRequestStateExitCallback_TakePosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorGuard.RequestStateExitCallback_TakePosition");
	}

	UDisBehaviorGuard_execRequestStateExitCallback_TakePosition_Params RequestStateExitCallback_TakePosition_Params;
	memset(&RequestStateExitCallback_TakePosition_Params, 0, sizeof(RequestStateExitCallback_TakePosition_Params));
	RequestStateExitCallback_TakePosition_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_TakePosition, &RequestStateExitCallback_TakePosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorInteract.OnExitCallback_Stand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43915])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorInteract::OnExitCallback_Stand(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnOnExitCallback_Stand = nullptr;

	if (!uFnOnExitCallback_Stand)
	{
		uFnOnExitCallback_Stand = UFunction::FindFunction("Function DishonoredGame.DisBehaviorInteract.OnExitCallback_Stand");
	}

	UDisBehaviorInteract_execOnExitCallback_Stand_Params OnExitCallback_Stand_Params;
	memset(&OnExitCallback_Stand_Params, 0, sizeof(OnExitCallback_Stand_Params));
	OnExitCallback_Stand_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnOnExitCallback_Stand, &OnExitCallback_Stand_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorInteract.TickCallback_Stand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45360])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// float                          _fDeltaSeconds                 (CPF_Parm)

void UDisBehaviorInteract::TickCallback_Stand(class UDishonoredNativeState* _pThisState, float _fDeltaSeconds)
{
	static UFunction* uFnTickCallback_Stand = nullptr;

	if (!uFnTickCallback_Stand)
	{
		uFnTickCallback_Stand = UFunction::FindFunction("Function DishonoredGame.DisBehaviorInteract.TickCallback_Stand");
	}

	UDisBehaviorInteract_execTickCallback_Stand_Params TickCallback_Stand_Params;
	memset(&TickCallback_Stand_Params, 0, sizeof(TickCallback_Stand_Params));
	TickCallback_Stand_Params._pThisState = _pThisState;
	memcpy_s(&TickCallback_Stand_Params._fDeltaSeconds, sizeof(TickCallback_Stand_Params._fDeltaSeconds), &_fDeltaSeconds, sizeof(_fDeltaSeconds));

	this->ProcessEvent(uFnTickCallback_Stand, &TickCallback_Stand_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorInteract.OnExitCallback_TakePosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43917])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorInteract::OnExitCallback_TakePosition(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnOnExitCallback_TakePosition = nullptr;

	if (!uFnOnExitCallback_TakePosition)
	{
		uFnOnExitCallback_TakePosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorInteract.OnExitCallback_TakePosition");
	}

	UDisBehaviorInteract_execOnExitCallback_TakePosition_Params OnExitCallback_TakePosition_Params;
	memset(&OnExitCallback_TakePosition_Params, 0, sizeof(OnExitCallback_TakePosition_Params));
	OnExitCallback_TakePosition_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnOnExitCallback_TakePosition, &OnExitCallback_TakePosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorInteract.RequestStateExitCallback_TakePosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44746])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorInteract::RequestStateExitCallback_TakePosition(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_TakePosition = nullptr;

	if (!uFnRequestStateExitCallback_TakePosition)
	{
		uFnRequestStateExitCallback_TakePosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorInteract.RequestStateExitCallback_TakePosition");
	}

	UDisBehaviorInteract_execRequestStateExitCallback_TakePosition_Params RequestStateExitCallback_TakePosition_Params;
	memset(&RequestStateExitCallback_TakePosition_Params, 0, sizeof(RequestStateExitCallback_TakePosition_Params));
	RequestStateExitCallback_TakePosition_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_TakePosition, &RequestStateExitCallback_TakePosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorInteract.OnEnterCallback_TakePosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43907])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorInteract::OnEnterCallback_TakePosition(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_TakePosition = nullptr;

	if (!uFnOnEnterCallback_TakePosition)
	{
		uFnOnEnterCallback_TakePosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorInteract.OnEnterCallback_TakePosition");
	}

	UDisBehaviorInteract_execOnEnterCallback_TakePosition_Params OnEnterCallback_TakePosition_Params;
	memset(&OnEnterCallback_TakePosition_Params, 0, sizeof(OnEnterCallback_TakePosition_Params));
	OnEnterCallback_TakePosition_Params._pThisState = _pThisState;
	OnEnterCallback_TakePosition_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_TakePosition, &OnEnterCallback_TakePosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorMagicResponse.RequestStateExitCallback_GenericAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44741])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorMagicResponse::RequestStateExitCallback_GenericAction(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_GenericAction = nullptr;

	if (!uFnRequestStateExitCallback_GenericAction)
	{
		uFnRequestStateExitCallback_GenericAction = UFunction::FindFunction("Function DishonoredGame.DisBehaviorMagicResponse.RequestStateExitCallback_GenericAction");
	}

	UDisBehaviorMagicResponse_execRequestStateExitCallback_GenericAction_Params RequestStateExitCallback_GenericAction_Params;
	memset(&RequestStateExitCallback_GenericAction_Params, 0, sizeof(RequestStateExitCallback_GenericAction_Params));
	RequestStateExitCallback_GenericAction_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_GenericAction, &RequestStateExitCallback_GenericAction_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorPanic.RefreshCallback_Cower
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44666])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fDeltaSeconds                 (CPF_Parm)

void UDisBehaviorPanic::RefreshCallback_Cower(class UDisAISubState* _pThisState, float _fDeltaSeconds)
{
	static UFunction* uFnRefreshCallback_Cower = nullptr;

	if (!uFnRefreshCallback_Cower)
	{
		uFnRefreshCallback_Cower = UFunction::FindFunction("Function DishonoredGame.DisBehaviorPanic.RefreshCallback_Cower");
	}

	UDisBehaviorPanic_execRefreshCallback_Cower_Params RefreshCallback_Cower_Params;
	memset(&RefreshCallback_Cower_Params, 0, sizeof(RefreshCallback_Cower_Params));
	RefreshCallback_Cower_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_Cower_Params._fDeltaSeconds, sizeof(RefreshCallback_Cower_Params._fDeltaSeconds), &_fDeltaSeconds, sizeof(_fDeltaSeconds));

	this->ProcessEvent(uFnRefreshCallback_Cower, &RefreshCallback_Cower_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorPanic.RequestStateExitCallback_Cower
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44735])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorPanic::RequestStateExitCallback_Cower(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_Cower = nullptr;

	if (!uFnRequestStateExitCallback_Cower)
	{
		uFnRequestStateExitCallback_Cower = UFunction::FindFunction("Function DishonoredGame.DisBehaviorPanic.RequestStateExitCallback_Cower");
	}

	UDisBehaviorPanic_execRequestStateExitCallback_Cower_Params RequestStateExitCallback_Cower_Params;
	memset(&RequestStateExitCallback_Cower_Params, 0, sizeof(RequestStateExitCallback_Cower_Params));
	RequestStateExitCallback_Cower_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_Cower, &RequestStateExitCallback_Cower_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorPanic.RequestStateExitCallback_Flee
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44740])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorPanic::RequestStateExitCallback_Flee(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_Flee = nullptr;

	if (!uFnRequestStateExitCallback_Flee)
	{
		uFnRequestStateExitCallback_Flee = UFunction::FindFunction("Function DishonoredGame.DisBehaviorPanic.RequestStateExitCallback_Flee");
	}

	UDisBehaviorPanic_execRequestStateExitCallback_Flee_Params RequestStateExitCallback_Flee_Params;
	memset(&RequestStateExitCallback_Flee_Params, 0, sizeof(RequestStateExitCallback_Flee_Params));
	RequestStateExitCallback_Flee_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_Flee, &RequestStateExitCallback_Flee_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorPanic.RefreshCallback_Flee
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44669])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fDeltaSeconds                 (CPF_Parm)

void UDisBehaviorPanic::RefreshCallback_Flee(class UDisAISubState* _pThisState, float _fDeltaSeconds)
{
	static UFunction* uFnRefreshCallback_Flee = nullptr;

	if (!uFnRefreshCallback_Flee)
	{
		uFnRefreshCallback_Flee = UFunction::FindFunction("Function DishonoredGame.DisBehaviorPanic.RefreshCallback_Flee");
	}

	UDisBehaviorPanic_execRefreshCallback_Flee_Params RefreshCallback_Flee_Params;
	memset(&RefreshCallback_Flee_Params, 0, sizeof(RefreshCallback_Flee_Params));
	RefreshCallback_Flee_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_Flee_Params._fDeltaSeconds, sizeof(RefreshCallback_Flee_Params._fDeltaSeconds), &_fDeltaSeconds, sizeof(_fDeltaSeconds));

	this->ProcessEvent(uFnRefreshCallback_Flee, &RefreshCallback_Flee_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorPanic.OnEnterCallback_Flee
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43900])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorPanic::OnEnterCallback_Flee(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_Flee = nullptr;

	if (!uFnOnEnterCallback_Flee)
	{
		uFnOnEnterCallback_Flee = UFunction::FindFunction("Function DishonoredGame.DisBehaviorPanic.OnEnterCallback_Flee");
	}

	UDisBehaviorPanic_execOnEnterCallback_Flee_Params OnEnterCallback_Flee_Params;
	memset(&OnEnterCallback_Flee_Params, 0, sizeof(OnEnterCallback_Flee_Params));
	OnEnterCallback_Flee_Params._pThisState = _pThisState;
	OnEnterCallback_Flee_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_Flee, &OnEnterCallback_Flee_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorPanic.RequestStateExitCallback_GenericAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44741])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorPanic::RequestStateExitCallback_GenericAction(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_GenericAction = nullptr;

	if (!uFnRequestStateExitCallback_GenericAction)
	{
		uFnRequestStateExitCallback_GenericAction = UFunction::FindFunction("Function DishonoredGame.DisBehaviorPanic.RequestStateExitCallback_GenericAction");
	}

	UDisBehaviorPanic_execRequestStateExitCallback_GenericAction_Params RequestStateExitCallback_GenericAction_Params;
	memset(&RequestStateExitCallback_GenericAction_Params, 0, sizeof(RequestStateExitCallback_GenericAction_Params));
	RequestStateExitCallback_GenericAction_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_GenericAction, &RequestStateExitCallback_GenericAction_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorPanic.RefreshCallback_GenericAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44670])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fDeltaSeconds                 (CPF_Parm)

void UDisBehaviorPanic::RefreshCallback_GenericAction(class UDisAISubState* _pThisState, float _fDeltaSeconds)
{
	static UFunction* uFnRefreshCallback_GenericAction = nullptr;

	if (!uFnRefreshCallback_GenericAction)
	{
		uFnRefreshCallback_GenericAction = UFunction::FindFunction("Function DishonoredGame.DisBehaviorPanic.RefreshCallback_GenericAction");
	}

	UDisBehaviorPanic_execRefreshCallback_GenericAction_Params RefreshCallback_GenericAction_Params;
	memset(&RefreshCallback_GenericAction_Params, 0, sizeof(RefreshCallback_GenericAction_Params));
	RefreshCallback_GenericAction_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_GenericAction_Params._fDeltaSeconds, sizeof(RefreshCallback_GenericAction_Params._fDeltaSeconds), &_fDeltaSeconds, sizeof(_fDeltaSeconds));

	this->ProcessEvent(uFnRefreshCallback_GenericAction, &RefreshCallback_GenericAction_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorPanic.OnEnterCallback_GenericAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43901])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorPanic::OnEnterCallback_GenericAction(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_GenericAction = nullptr;

	if (!uFnOnEnterCallback_GenericAction)
	{
		uFnOnEnterCallback_GenericAction = UFunction::FindFunction("Function DishonoredGame.DisBehaviorPanic.OnEnterCallback_GenericAction");
	}

	UDisBehaviorPanic_execOnEnterCallback_GenericAction_Params OnEnterCallback_GenericAction_Params;
	memset(&OnEnterCallback_GenericAction_Params, 0, sizeof(OnEnterCallback_GenericAction_Params));
	OnEnterCallback_GenericAction_Params._pThisState = _pThisState;
	OnEnterCallback_GenericAction_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_GenericAction, &OnEnterCallback_GenericAction_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorPatrol.TickCallback_Stand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45360])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// float                          _fDeltaSeconds                 (CPF_Parm)

void UDisBehaviorPatrol::TickCallback_Stand(class UDishonoredNativeState* _pThisState, float _fDeltaSeconds)
{
	static UFunction* uFnTickCallback_Stand = nullptr;

	if (!uFnTickCallback_Stand)
	{
		uFnTickCallback_Stand = UFunction::FindFunction("Function DishonoredGame.DisBehaviorPatrol.TickCallback_Stand");
	}

	UDisBehaviorPatrol_execTickCallback_Stand_Params TickCallback_Stand_Params;
	memset(&TickCallback_Stand_Params, 0, sizeof(TickCallback_Stand_Params));
	TickCallback_Stand_Params._pThisState = _pThisState;
	memcpy_s(&TickCallback_Stand_Params._fDeltaSeconds, sizeof(TickCallback_Stand_Params._fDeltaSeconds), &_fDeltaSeconds, sizeof(_fDeltaSeconds));

	this->ProcessEvent(uFnTickCallback_Stand, &TickCallback_Stand_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorPatrol.OnEnterCallback_Stand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43905])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorPatrol::OnEnterCallback_Stand(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_Stand = nullptr;

	if (!uFnOnEnterCallback_Stand)
	{
		uFnOnEnterCallback_Stand = UFunction::FindFunction("Function DishonoredGame.DisBehaviorPatrol.OnEnterCallback_Stand");
	}

	UDisBehaviorPatrol_execOnEnterCallback_Stand_Params OnEnterCallback_Stand_Params;
	memset(&OnEnterCallback_Stand_Params, 0, sizeof(OnEnterCallback_Stand_Params));
	OnEnterCallback_Stand_Params._pThisState = _pThisState;
	OnEnterCallback_Stand_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_Stand, &OnEnterCallback_Stand_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorPatrol.RequestStateExitCallback_TakeActorPosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44745])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorPatrol::RequestStateExitCallback_TakeActorPosition(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_TakeActorPosition = nullptr;

	if (!uFnRequestStateExitCallback_TakeActorPosition)
	{
		uFnRequestStateExitCallback_TakeActorPosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorPatrol.RequestStateExitCallback_TakeActorPosition");
	}

	UDisBehaviorPatrol_execRequestStateExitCallback_TakeActorPosition_Params RequestStateExitCallback_TakeActorPosition_Params;
	memset(&RequestStateExitCallback_TakeActorPosition_Params, 0, sizeof(RequestStateExitCallback_TakeActorPosition_Params));
	RequestStateExitCallback_TakeActorPosition_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_TakeActorPosition, &RequestStateExitCallback_TakeActorPosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorPatrol.TickCallback_TakeActorPosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45363])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// float                          _fDeltaSeconds                 (CPF_Parm)

void UDisBehaviorPatrol::TickCallback_TakeActorPosition(class UDishonoredNativeState* _pThisState, float _fDeltaSeconds)
{
	static UFunction* uFnTickCallback_TakeActorPosition = nullptr;

	if (!uFnTickCallback_TakeActorPosition)
	{
		uFnTickCallback_TakeActorPosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorPatrol.TickCallback_TakeActorPosition");
	}

	UDisBehaviorPatrol_execTickCallback_TakeActorPosition_Params TickCallback_TakeActorPosition_Params;
	memset(&TickCallback_TakeActorPosition_Params, 0, sizeof(TickCallback_TakeActorPosition_Params));
	TickCallback_TakeActorPosition_Params._pThisState = _pThisState;
	memcpy_s(&TickCallback_TakeActorPosition_Params._fDeltaSeconds, sizeof(TickCallback_TakeActorPosition_Params._fDeltaSeconds), &_fDeltaSeconds, sizeof(_fDeltaSeconds));

	this->ProcessEvent(uFnTickCallback_TakeActorPosition, &TickCallback_TakeActorPosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorRatStomp.RequestStateExitCallback_TakeActorPosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44745])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorRatStomp::RequestStateExitCallback_TakeActorPosition(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_TakeActorPosition = nullptr;

	if (!uFnRequestStateExitCallback_TakeActorPosition)
	{
		uFnRequestStateExitCallback_TakeActorPosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorRatStomp.RequestStateExitCallback_TakeActorPosition");
	}

	UDisBehaviorRatStomp_execRequestStateExitCallback_TakeActorPosition_Params RequestStateExitCallback_TakeActorPosition_Params;
	memset(&RequestStateExitCallback_TakeActorPosition_Params, 0, sizeof(RequestStateExitCallback_TakeActorPosition_Params));
	RequestStateExitCallback_TakeActorPosition_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_TakeActorPosition, &RequestStateExitCallback_TakeActorPosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorReact.RequestStateExitCallback_GenericAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44741])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorReact::RequestStateExitCallback_GenericAction(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_GenericAction = nullptr;

	if (!uFnRequestStateExitCallback_GenericAction)
	{
		uFnRequestStateExitCallback_GenericAction = UFunction::FindFunction("Function DishonoredGame.DisBehaviorReact.RequestStateExitCallback_GenericAction");
	}

	UDisBehaviorReact_execRequestStateExitCallback_GenericAction_Params RequestStateExitCallback_GenericAction_Params;
	memset(&RequestStateExitCallback_GenericAction_Params, 0, sizeof(RequestStateExitCallback_GenericAction_Params));
	RequestStateExitCallback_GenericAction_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_GenericAction, &RequestStateExitCallback_GenericAction_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorReact.OnEnterCallback_GenericAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43901])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorReact::OnEnterCallback_GenericAction(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_GenericAction = nullptr;

	if (!uFnOnEnterCallback_GenericAction)
	{
		uFnOnEnterCallback_GenericAction = UFunction::FindFunction("Function DishonoredGame.DisBehaviorReact.OnEnterCallback_GenericAction");
	}

	UDisBehaviorReact_execOnEnterCallback_GenericAction_Params OnEnterCallback_GenericAction_Params;
	memset(&OnEnterCallback_GenericAction_Params, 0, sizeof(OnEnterCallback_GenericAction_Params));
	OnEnterCallback_GenericAction_Params._pThisState = _pThisState;
	OnEnterCallback_GenericAction_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_GenericAction, &OnEnterCallback_GenericAction_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorReturnTravel.RequestStateExitCallback_TakePosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44746])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorReturnTravel::RequestStateExitCallback_TakePosition(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_TakePosition = nullptr;

	if (!uFnRequestStateExitCallback_TakePosition)
	{
		uFnRequestStateExitCallback_TakePosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorReturnTravel.RequestStateExitCallback_TakePosition");
	}

	UDisBehaviorReturnTravel_execRequestStateExitCallback_TakePosition_Params RequestStateExitCallback_TakePosition_Params;
	memset(&RequestStateExitCallback_TakePosition_Params, 0, sizeof(RequestStateExitCallback_TakePosition_Params));
	RequestStateExitCallback_TakePosition_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_TakePosition, &RequestStateExitCallback_TakePosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorWeep.RequestStateExitCallback_DoWeaponManoeuver
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44737])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorWeep::RequestStateExitCallback_DoWeaponManoeuver(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_DoWeaponManoeuver = nullptr;

	if (!uFnRequestStateExitCallback_DoWeaponManoeuver)
	{
		uFnRequestStateExitCallback_DoWeaponManoeuver = UFunction::FindFunction("Function DishonoredGame.DisBehaviorWeep.RequestStateExitCallback_DoWeaponManoeuver");
	}

	UDisBehaviorWeep_execRequestStateExitCallback_DoWeaponManoeuver_Params RequestStateExitCallback_DoWeaponManoeuver_Params;
	memset(&RequestStateExitCallback_DoWeaponManoeuver_Params, 0, sizeof(RequestStateExitCallback_DoWeaponManoeuver_Params));
	RequestStateExitCallback_DoWeaponManoeuver_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_DoWeaponManoeuver, &RequestStateExitCallback_DoWeaponManoeuver_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorWeep.RequestStateExitCallback_Stand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44744])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorWeep::RequestStateExitCallback_Stand(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_Stand = nullptr;

	if (!uFnRequestStateExitCallback_Stand)
	{
		uFnRequestStateExitCallback_Stand = UFunction::FindFunction("Function DishonoredGame.DisBehaviorWeep.RequestStateExitCallback_Stand");
	}

	UDisBehaviorWeep_execRequestStateExitCallback_Stand_Params RequestStateExitCallback_Stand_Params;
	memset(&RequestStateExitCallback_Stand_Params, 0, sizeof(RequestStateExitCallback_Stand_Params));
	RequestStateExitCallback_Stand_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_Stand, &RequestStateExitCallback_Stand_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorWeep.TickCallback_Stand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45360])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fTimeSinceLastThought         (CPF_Parm)

void UDisBehaviorWeep::TickCallback_Stand(class UDisAISubState* _pThisState, float _fTimeSinceLastThought)
{
	static UFunction* uFnTickCallback_Stand = nullptr;

	if (!uFnTickCallback_Stand)
	{
		uFnTickCallback_Stand = UFunction::FindFunction("Function DishonoredGame.DisBehaviorWeep.TickCallback_Stand");
	}

	UDisBehaviorWeep_execTickCallback_Stand_Params TickCallback_Stand_Params;
	memset(&TickCallback_Stand_Params, 0, sizeof(TickCallback_Stand_Params));
	TickCallback_Stand_Params._pThisState = _pThisState;
	memcpy_s(&TickCallback_Stand_Params._fTimeSinceLastThought, sizeof(TickCallback_Stand_Params._fTimeSinceLastThought), &_fTimeSinceLastThought, sizeof(_fTimeSinceLastThought));

	this->ProcessEvent(uFnTickCallback_Stand, &TickCallback_Stand_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorWeep.OnEnterCallback_Stand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43905])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorWeep::OnEnterCallback_Stand(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_Stand = nullptr;

	if (!uFnOnEnterCallback_Stand)
	{
		uFnOnEnterCallback_Stand = UFunction::FindFunction("Function DishonoredGame.DisBehaviorWeep.OnEnterCallback_Stand");
	}

	UDisBehaviorWeep_execOnEnterCallback_Stand_Params OnEnterCallback_Stand_Params;
	memset(&OnEnterCallback_Stand_Params, 0, sizeof(OnEnterCallback_Stand_Params));
	OnEnterCallback_Stand_Params._pThisState = _pThisState;
	OnEnterCallback_Stand_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_Stand, &OnEnterCallback_Stand_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorWeep.RequestStateExitCallback_GenericAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44741])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorWeep::RequestStateExitCallback_GenericAction(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_GenericAction = nullptr;

	if (!uFnRequestStateExitCallback_GenericAction)
	{
		uFnRequestStateExitCallback_GenericAction = UFunction::FindFunction("Function DishonoredGame.DisBehaviorWeep.RequestStateExitCallback_GenericAction");
	}

	UDisBehaviorWeep_execRequestStateExitCallback_GenericAction_Params RequestStateExitCallback_GenericAction_Params;
	memset(&RequestStateExitCallback_GenericAction_Params, 0, sizeof(RequestStateExitCallback_GenericAction_Params));
	RequestStateExitCallback_GenericAction_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_GenericAction, &RequestStateExitCallback_GenericAction_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorWeep.OnEnterCallback_GenericAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43901])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorWeep::OnEnterCallback_GenericAction(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_GenericAction = nullptr;

	if (!uFnOnEnterCallback_GenericAction)
	{
		uFnOnEnterCallback_GenericAction = UFunction::FindFunction("Function DishonoredGame.DisBehaviorWeep.OnEnterCallback_GenericAction");
	}

	UDisBehaviorWeep_execOnEnterCallback_GenericAction_Params OnEnterCallback_GenericAction_Params;
	memset(&OnEnterCallback_GenericAction_Params, 0, sizeof(OnEnterCallback_GenericAction_Params));
	OnEnterCallback_GenericAction_Params._pThisState = _pThisState;
	OnEnterCallback_GenericAction_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_GenericAction, &OnEnterCallback_GenericAction_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorWeep.OnExitCallback_TakePosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43917])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorWeep::OnExitCallback_TakePosition(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnExitCallback_TakePosition = nullptr;

	if (!uFnOnExitCallback_TakePosition)
	{
		uFnOnExitCallback_TakePosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorWeep.OnExitCallback_TakePosition");
	}

	UDisBehaviorWeep_execOnExitCallback_TakePosition_Params OnExitCallback_TakePosition_Params;
	memset(&OnExitCallback_TakePosition_Params, 0, sizeof(OnExitCallback_TakePosition_Params));
	OnExitCallback_TakePosition_Params._pThisState = _pThisState;
	OnExitCallback_TakePosition_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnExitCallback_TakePosition, &OnExitCallback_TakePosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorWeep.OnEnterCallback_TakePosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43907])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorWeep::OnEnterCallback_TakePosition(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_TakePosition = nullptr;

	if (!uFnOnEnterCallback_TakePosition)
	{
		uFnOnEnterCallback_TakePosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorWeep.OnEnterCallback_TakePosition");
	}

	UDisBehaviorWeep_execOnEnterCallback_TakePosition_Params OnEnterCallback_TakePosition_Params;
	memset(&OnEnterCallback_TakePosition_Params, 0, sizeof(OnEnterCallback_TakePosition_Params));
	OnEnterCallback_TakePosition_Params._pThisState = _pThisState;
	OnEnterCallback_TakePosition_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_TakePosition, &OnEnterCallback_TakePosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorWeep.RefreshCallback_TakePosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44678])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fTimeSinceLastThought         (CPF_Parm)

void UDisBehaviorWeep::RefreshCallback_TakePosition(class UDisAISubState* _pThisState, float _fTimeSinceLastThought)
{
	static UFunction* uFnRefreshCallback_TakePosition = nullptr;

	if (!uFnRefreshCallback_TakePosition)
	{
		uFnRefreshCallback_TakePosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorWeep.RefreshCallback_TakePosition");
	}

	UDisBehaviorWeep_execRefreshCallback_TakePosition_Params RefreshCallback_TakePosition_Params;
	memset(&RefreshCallback_TakePosition_Params, 0, sizeof(RefreshCallback_TakePosition_Params));
	RefreshCallback_TakePosition_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_TakePosition_Params._fTimeSinceLastThought, sizeof(RefreshCallback_TakePosition_Params._fTimeSinceLastThought), &_fTimeSinceLastThought, sizeof(_fTimeSinceLastThought));

	this->ProcessEvent(uFnRefreshCallback_TakePosition, &RefreshCallback_TakePosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorWeep.TickCallback_TakePosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45364])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fTimeSinceLastThought         (CPF_Parm)

void UDisBehaviorWeep::TickCallback_TakePosition(class UDisAISubState* _pThisState, float _fTimeSinceLastThought)
{
	static UFunction* uFnTickCallback_TakePosition = nullptr;

	if (!uFnTickCallback_TakePosition)
	{
		uFnTickCallback_TakePosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorWeep.TickCallback_TakePosition");
	}

	UDisBehaviorWeep_execTickCallback_TakePosition_Params TickCallback_TakePosition_Params;
	memset(&TickCallback_TakePosition_Params, 0, sizeof(TickCallback_TakePosition_Params));
	TickCallback_TakePosition_Params._pThisState = _pThisState;
	memcpy_s(&TickCallback_TakePosition_Params._fTimeSinceLastThought, sizeof(TickCallback_TakePosition_Params._fTimeSinceLastThought), &_fTimeSinceLastThought, sizeof(_fTimeSinceLastThought));

	this->ProcessEvent(uFnTickCallback_TakePosition, &TickCallback_TakePosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorEscapePlague.RequestStateExitCallback_TakePosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44746])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorEscapePlague::RequestStateExitCallback_TakePosition(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_TakePosition = nullptr;

	if (!uFnRequestStateExitCallback_TakePosition)
	{
		uFnRequestStateExitCallback_TakePosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorEscapePlague.RequestStateExitCallback_TakePosition");
	}

	UDisBehaviorEscapePlague_execRequestStateExitCallback_TakePosition_Params RequestStateExitCallback_TakePosition_Params;
	memset(&RequestStateExitCallback_TakePosition_Params, 0, sizeof(RequestStateExitCallback_TakePosition_Params));
	RequestStateExitCallback_TakePosition_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_TakePosition, &RequestStateExitCallback_TakePosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorEscapePlague.RefreshCallback_TakePosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44678])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fDeltaSeconds                 (CPF_Parm)

void UDisBehaviorEscapePlague::RefreshCallback_TakePosition(class UDisAISubState* _pThisState, float _fDeltaSeconds)
{
	static UFunction* uFnRefreshCallback_TakePosition = nullptr;

	if (!uFnRefreshCallback_TakePosition)
	{
		uFnRefreshCallback_TakePosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorEscapePlague.RefreshCallback_TakePosition");
	}

	UDisBehaviorEscapePlague_execRefreshCallback_TakePosition_Params RefreshCallback_TakePosition_Params;
	memset(&RefreshCallback_TakePosition_Params, 0, sizeof(RefreshCallback_TakePosition_Params));
	RefreshCallback_TakePosition_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_TakePosition_Params._fDeltaSeconds, sizeof(RefreshCallback_TakePosition_Params._fDeltaSeconds), &_fDeltaSeconds, sizeof(_fDeltaSeconds));

	this->ProcessEvent(uFnRefreshCallback_TakePosition, &RefreshCallback_TakePosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorEscapePlague.OnResetCallback_TakePosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43964])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorEscapePlague::OnResetCallback_TakePosition(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnOnResetCallback_TakePosition = nullptr;

	if (!uFnOnResetCallback_TakePosition)
	{
		uFnOnResetCallback_TakePosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorEscapePlague.OnResetCallback_TakePosition");
	}

	UDisBehaviorEscapePlague_execOnResetCallback_TakePosition_Params OnResetCallback_TakePosition_Params;
	memset(&OnResetCallback_TakePosition_Params, 0, sizeof(OnResetCallback_TakePosition_Params));
	OnResetCallback_TakePosition_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnOnResetCallback_TakePosition, &OnResetCallback_TakePosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorEscapePlague.OnEnterCallback_TakePosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43907])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorEscapePlague::OnEnterCallback_TakePosition(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_TakePosition = nullptr;

	if (!uFnOnEnterCallback_TakePosition)
	{
		uFnOnEnterCallback_TakePosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorEscapePlague.OnEnterCallback_TakePosition");
	}

	UDisBehaviorEscapePlague_execOnEnterCallback_TakePosition_Params OnEnterCallback_TakePosition_Params;
	memset(&OnEnterCallback_TakePosition_Params, 0, sizeof(OnEnterCallback_TakePosition_Params));
	OnEnterCallback_TakePosition_Params._pThisState = _pThisState;
	OnEnterCallback_TakePosition_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_TakePosition, &OnEnterCallback_TakePosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorFollow.NoMoreTargetCallback_Follow
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43778])
// Parameter Info:

void UDisBehaviorFollow::NoMoreTargetCallback_Follow()
{
	static UFunction* uFnNoMoreTargetCallback_Follow = nullptr;

	if (!uFnNoMoreTargetCallback_Follow)
	{
		uFnNoMoreTargetCallback_Follow = UFunction::FindFunction("Function DishonoredGame.DisBehaviorFollow.NoMoreTargetCallback_Follow");
	}

	UDisBehaviorFollow_execNoMoreTargetCallback_Follow_Params NoMoreTargetCallback_Follow_Params;
	memset(&NoMoreTargetCallback_Follow_Params, 0, sizeof(NoMoreTargetCallback_Follow_Params));

	this->ProcessEvent(uFnNoMoreTargetCallback_Follow, &NoMoreTargetCallback_Follow_Params, nullptr);
};

// Function DishonoredGame.DisAISubState.RequestStateExitCallback
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisAISubState::RequestStateExitCallback(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback = nullptr;

	if (!uFnRequestStateExitCallback)
	{
		uFnRequestStateExitCallback = UFunction::FindFunction("Function DishonoredGame.DisAISubState.RequestStateExitCallback");
	}

	UDisAISubState_execRequestStateExitCallback_Params RequestStateExitCallback_Params;
	memset(&RequestStateExitCallback_Params, 0, sizeof(RequestStateExitCallback_Params));
	RequestStateExitCallback_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback, &RequestStateExitCallback_Params, nullptr);
};

// Function DishonoredGame.DisAISubState.RefreshCallback
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fTimeSinceLastThought         (CPF_Parm)

void UDisAISubState::RefreshCallback(class UDisAISubState* _pThisState, float _fTimeSinceLastThought)
{
	static UFunction* uFnRefreshCallback = nullptr;

	if (!uFnRefreshCallback)
	{
		uFnRefreshCallback = UFunction::FindFunction("Function DishonoredGame.DisAISubState.RefreshCallback");
	}

	UDisAISubState_execRefreshCallback_Params RefreshCallback_Params;
	memset(&RefreshCallback_Params, 0, sizeof(RefreshCallback_Params));
	RefreshCallback_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_Params._fTimeSinceLastThought, sizeof(RefreshCallback_Params._fTimeSinceLastThought), &_fTimeSinceLastThought, sizeof(_fTimeSinceLastThought));

	this->ProcessEvent(uFnRefreshCallback, &RefreshCallback_Params, nullptr);
};

// Function DishonoredGame.DisAISubState.TickCallback
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// float                          _fDeltaSeconds                 (CPF_Parm)

void UDisAISubState::TickCallback(class UDishonoredNativeState* _pThisState, float _fDeltaSeconds)
{
	static UFunction* uFnTickCallback = nullptr;

	if (!uFnTickCallback)
	{
		uFnTickCallback = UFunction::FindFunction("Function DishonoredGame.DisAISubState.TickCallback");
	}

	UDisAISubState_execTickCallback_Params TickCallback_Params;
	memset(&TickCallback_Params, 0, sizeof(TickCallback_Params));
	TickCallback_Params._pThisState = _pThisState;
	memcpy_s(&TickCallback_Params._fDeltaSeconds, sizeof(TickCallback_Params._fDeltaSeconds), &_fDeltaSeconds, sizeof(_fDeltaSeconds));

	this->ProcessEvent(uFnTickCallback, &TickCallback_Params, nullptr);
};

// Function DishonoredGame.DisAISubState.OnExitCallback
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pNextState                    (CPF_Parm)

void UDisAISubState::OnExitCallback(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pNextState)
{
	static UFunction* uFnOnExitCallback = nullptr;

	if (!uFnOnExitCallback)
	{
		uFnOnExitCallback = UFunction::FindFunction("Function DishonoredGame.DisAISubState.OnExitCallback");
	}

	UDisAISubState_execOnExitCallback_Params OnExitCallback_Params;
	memset(&OnExitCallback_Params, 0, sizeof(OnExitCallback_Params));
	OnExitCallback_Params._pThisState = _pThisState;
	OnExitCallback_Params._pNextState = _pNextState;

	this->ProcessEvent(uFnOnExitCallback, &OnExitCallback_Params, nullptr);
};

// Function DishonoredGame.DisAISubState.OnResetCallback
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisAISubState::OnResetCallback(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnOnResetCallback = nullptr;

	if (!uFnOnResetCallback)
	{
		uFnOnResetCallback = UFunction::FindFunction("Function DishonoredGame.DisAISubState.OnResetCallback");
	}

	UDisAISubState_execOnResetCallback_Params OnResetCallback_Params;
	memset(&OnResetCallback_Params, 0, sizeof(OnResetCallback_Params));
	OnResetCallback_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnOnResetCallback, &OnResetCallback_Params, nullptr);
};

// Function DishonoredGame.DisAISubState.OnEnterCallback
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisAISubState::OnEnterCallback(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback = nullptr;

	if (!uFnOnEnterCallback)
	{
		uFnOnEnterCallback = UFunction::FindFunction("Function DishonoredGame.DisAISubState.OnEnterCallback");
	}

	UDisAISubState_execOnEnterCallback_Params OnEnterCallback_Params;
	memset(&OnEnterCallback_Params, 0, sizeof(OnEnterCallback_Params));
	OnEnterCallback_Params._pThisState = _pThisState;
	OnEnterCallback_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback, &OnEnterCallback_Params, nullptr);
};

// Function DishonoredGame.DisAISubStateFlee.ThreatTerminatedCallback
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UDisAISubStateFlee*      pSubSate                       (CPF_Parm)

void UDisAISubStateFlee::ThreatTerminatedCallback(class UDisAISubStateFlee* pSubSate)
{
	static UFunction* uFnThreatTerminatedCallback = nullptr;

	if (!uFnThreatTerminatedCallback)
	{
		uFnThreatTerminatedCallback = UFunction::FindFunction("Function DishonoredGame.DisAISubStateFlee.ThreatTerminatedCallback");
	}

	UDisAISubStateFlee_execThreatTerminatedCallback_Params ThreatTerminatedCallback_Params;
	memset(&ThreatTerminatedCallback_Params, 0, sizeof(ThreatTerminatedCallback_Params));
	ThreatTerminatedCallback_Params.pSubSate = pSubSate;

	this->ProcessEvent(uFnThreatTerminatedCallback, &ThreatTerminatedCallback_Params, nullptr);
};

// Function DishonoredGame.DisAISubStateFollow.NoMoreTargetCallback
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UDisAISubStateFollow::NoMoreTargetCallback()
{
	static UFunction* uFnNoMoreTargetCallback = nullptr;

	if (!uFnNoMoreTargetCallback)
	{
		uFnNoMoreTargetCallback = UFunction::FindFunction("Function DishonoredGame.DisAISubStateFollow.NoMoreTargetCallback");
	}

	UDisAISubStateFollow_execNoMoreTargetCallback_Params NoMoreTargetCallback_Params;
	memset(&NoMoreTargetCallback_Params, 0, sizeof(NoMoreTargetCallback_Params));

	this->ProcessEvent(uFnNoMoreTargetCallback, &NoMoreTargetCallback_Params, nullptr);
};

// Function DishonoredGame.DisNavMeshGoal_BestFleePoint.RecycleInternal
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[13709])
// Parameter Info:

void UDisNavMeshGoal_BestFleePoint::RecycleInternal()
{
	static UFunction* uFnRecycleInternal = nullptr;

	if (!uFnRecycleInternal)
	{
		uFnRecycleInternal = UFunction::FindFunction("Function DishonoredGame.DisNavMeshGoal_BestFleePoint.RecycleInternal");
	}

	UDisNavMeshGoal_BestFleePoint_execRecycleInternal_Params RecycleInternal_Params;
	memset(&RecycleInternal_Params, 0, sizeof(RecycleInternal_Params));

	this->ProcessEvent(uFnRecycleInternal, &RecycleInternal_Params, nullptr);
};

// Function DishonoredGame.DisNavMeshGoal_ShootingPosition.Recycle
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[13708])
// Parameter Info:

void UDisNavMeshGoal_ShootingPosition::eventRecycle()
{
	static UFunction* uFnRecycle = nullptr;

	if (!uFnRecycle)
	{
		uFnRecycle = UFunction::FindFunction("Function DishonoredGame.DisNavMeshGoal_ShootingPosition.Recycle");
	}

	UDisNavMeshGoal_ShootingPosition_eventRecycle_Params Recycle_Params;
	memset(&Recycle_Params, 0, sizeof(Recycle_Params));

	this->ProcessEvent(uFnRecycle, &Recycle_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorAmbush.RequestStateExitCallback_LieInWait
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44743])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorAmbush::RequestStateExitCallback_LieInWait(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_LieInWait = nullptr;

	if (!uFnRequestStateExitCallback_LieInWait)
	{
		uFnRequestStateExitCallback_LieInWait = UFunction::FindFunction("Function DishonoredGame.DisBehaviorAmbush.RequestStateExitCallback_LieInWait");
	}

	UDisBehaviorAmbush_execRequestStateExitCallback_LieInWait_Params RequestStateExitCallback_LieInWait_Params;
	memset(&RequestStateExitCallback_LieInWait_Params, 0, sizeof(RequestStateExitCallback_LieInWait_Params));
	RequestStateExitCallback_LieInWait_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_LieInWait, &RequestStateExitCallback_LieInWait_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorAmbush.RequestStateExitCallback_TakeActorPosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44745])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorAmbush::RequestStateExitCallback_TakeActorPosition(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_TakeActorPosition = nullptr;

	if (!uFnRequestStateExitCallback_TakeActorPosition)
	{
		uFnRequestStateExitCallback_TakeActorPosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorAmbush.RequestStateExitCallback_TakeActorPosition");
	}

	UDisBehaviorAmbush_execRequestStateExitCallback_TakeActorPosition_Params RequestStateExitCallback_TakeActorPosition_Params;
	memset(&RequestStateExitCallback_TakeActorPosition_Params, 0, sizeof(RequestStateExitCallback_TakeActorPosition_Params));
	RequestStateExitCallback_TakeActorPosition_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_TakeActorPosition, &RequestStateExitCallback_TakeActorPosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorCombatMelee.RequestStateExitCallback_FindShootingPosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44738])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorCombatMelee::RequestStateExitCallback_FindShootingPosition(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_FindShootingPosition = nullptr;

	if (!uFnRequestStateExitCallback_FindShootingPosition)
	{
		uFnRequestStateExitCallback_FindShootingPosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorCombatMelee.RequestStateExitCallback_FindShootingPosition");
	}

	UDisBehaviorCombatMelee_execRequestStateExitCallback_FindShootingPosition_Params RequestStateExitCallback_FindShootingPosition_Params;
	memset(&RequestStateExitCallback_FindShootingPosition_Params, 0, sizeof(RequestStateExitCallback_FindShootingPosition_Params));
	RequestStateExitCallback_FindShootingPosition_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_FindShootingPosition, &RequestStateExitCallback_FindShootingPosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorCombatMelee.RefreshCallback_Stand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44676])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fTimeSinceLastThought         (CPF_Parm)

void UDisBehaviorCombatMelee::RefreshCallback_Stand(class UDisAISubState* _pThisState, float _fTimeSinceLastThought)
{
	static UFunction* uFnRefreshCallback_Stand = nullptr;

	if (!uFnRefreshCallback_Stand)
	{
		uFnRefreshCallback_Stand = UFunction::FindFunction("Function DishonoredGame.DisBehaviorCombatMelee.RefreshCallback_Stand");
	}

	UDisBehaviorCombatMelee_execRefreshCallback_Stand_Params RefreshCallback_Stand_Params;
	memset(&RefreshCallback_Stand_Params, 0, sizeof(RefreshCallback_Stand_Params));
	RefreshCallback_Stand_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_Stand_Params._fTimeSinceLastThought, sizeof(RefreshCallback_Stand_Params._fTimeSinceLastThought), &_fTimeSinceLastThought, sizeof(_fTimeSinceLastThought));

	this->ProcessEvent(uFnRefreshCallback_Stand, &RefreshCallback_Stand_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorCombatMelee.OnEnterCallback_Stand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43905])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorCombatMelee::OnEnterCallback_Stand(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_Stand = nullptr;

	if (!uFnOnEnterCallback_Stand)
	{
		uFnOnEnterCallback_Stand = UFunction::FindFunction("Function DishonoredGame.DisBehaviorCombatMelee.OnEnterCallback_Stand");
	}

	UDisBehaviorCombatMelee_execOnEnterCallback_Stand_Params OnEnterCallback_Stand_Params;
	memset(&OnEnterCallback_Stand_Params, 0, sizeof(OnEnterCallback_Stand_Params));
	OnEnterCallback_Stand_Params._pThisState = _pThisState;
	OnEnterCallback_Stand_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_Stand, &OnEnterCallback_Stand_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorCombatMelee.RefreshCallback_MeleeChase
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44673])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fTimeSinceLastThought         (CPF_Parm)

void UDisBehaviorCombatMelee::RefreshCallback_MeleeChase(class UDisAISubState* _pThisState, float _fTimeSinceLastThought)
{
	static UFunction* uFnRefreshCallback_MeleeChase = nullptr;

	if (!uFnRefreshCallback_MeleeChase)
	{
		uFnRefreshCallback_MeleeChase = UFunction::FindFunction("Function DishonoredGame.DisBehaviorCombatMelee.RefreshCallback_MeleeChase");
	}

	UDisBehaviorCombatMelee_execRefreshCallback_MeleeChase_Params RefreshCallback_MeleeChase_Params;
	memset(&RefreshCallback_MeleeChase_Params, 0, sizeof(RefreshCallback_MeleeChase_Params));
	RefreshCallback_MeleeChase_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_MeleeChase_Params._fTimeSinceLastThought, sizeof(RefreshCallback_MeleeChase_Params._fTimeSinceLastThought), &_fTimeSinceLastThought, sizeof(_fTimeSinceLastThought));

	this->ProcessEvent(uFnRefreshCallback_MeleeChase, &RefreshCallback_MeleeChase_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorCombatMelee.RefreshCallback_MeleeEngage
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44674])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fTimeSinceLastThought         (CPF_Parm)

void UDisBehaviorCombatMelee::RefreshCallback_MeleeEngage(class UDisAISubState* _pThisState, float _fTimeSinceLastThought)
{
	static UFunction* uFnRefreshCallback_MeleeEngage = nullptr;

	if (!uFnRefreshCallback_MeleeEngage)
	{
		uFnRefreshCallback_MeleeEngage = UFunction::FindFunction("Function DishonoredGame.DisBehaviorCombatMelee.RefreshCallback_MeleeEngage");
	}

	UDisBehaviorCombatMelee_execRefreshCallback_MeleeEngage_Params RefreshCallback_MeleeEngage_Params;
	memset(&RefreshCallback_MeleeEngage_Params, 0, sizeof(RefreshCallback_MeleeEngage_Params));
	RefreshCallback_MeleeEngage_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_MeleeEngage_Params._fTimeSinceLastThought, sizeof(RefreshCallback_MeleeEngage_Params._fTimeSinceLastThought), &_fTimeSinceLastThought, sizeof(_fTimeSinceLastThought));

	this->ProcessEvent(uFnRefreshCallback_MeleeEngage, &RefreshCallback_MeleeEngage_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorAssassinCombat.RequestStateExitCallback_DoPullSpell
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47670])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorAssassinCombat::RequestStateExitCallback_DoPullSpell(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_DoPullSpell = nullptr;

	if (!uFnRequestStateExitCallback_DoPullSpell)
	{
		uFnRequestStateExitCallback_DoPullSpell = UFunction::FindFunction("Function DishonoredGame.DisBehaviorAssassinCombat.RequestStateExitCallback_DoPullSpell");
	}

	UDisBehaviorAssassinCombat_execRequestStateExitCallback_DoPullSpell_Params RequestStateExitCallback_DoPullSpell_Params;
	memset(&RequestStateExitCallback_DoPullSpell_Params, 0, sizeof(RequestStateExitCallback_DoPullSpell_Params));
	RequestStateExitCallback_DoPullSpell_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_DoPullSpell, &RequestStateExitCallback_DoPullSpell_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorAssassinCombat.RequestStateExitCallback_DoAttractSpell
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44736])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorAssassinCombat::RequestStateExitCallback_DoAttractSpell(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_DoAttractSpell = nullptr;

	if (!uFnRequestStateExitCallback_DoAttractSpell)
	{
		uFnRequestStateExitCallback_DoAttractSpell = UFunction::FindFunction("Function DishonoredGame.DisBehaviorAssassinCombat.RequestStateExitCallback_DoAttractSpell");
	}

	UDisBehaviorAssassinCombat_execRequestStateExitCallback_DoAttractSpell_Params RequestStateExitCallback_DoAttractSpell_Params;
	memset(&RequestStateExitCallback_DoAttractSpell_Params, 0, sizeof(RequestStateExitCallback_DoAttractSpell_Params));
	RequestStateExitCallback_DoAttractSpell_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_DoAttractSpell, &RequestStateExitCallback_DoAttractSpell_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorCombatEliteGuard.RequestStateExitCallback_FirePistol
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44739])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorCombatEliteGuard::RequestStateExitCallback_FirePistol(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_FirePistol = nullptr;

	if (!uFnRequestStateExitCallback_FirePistol)
	{
		uFnRequestStateExitCallback_FirePistol = UFunction::FindFunction("Function DishonoredGame.DisBehaviorCombatEliteGuard.RequestStateExitCallback_FirePistol");
	}

	UDisBehaviorCombatEliteGuard_execRequestStateExitCallback_FirePistol_Params RequestStateExitCallback_FirePistol_Params;
	memset(&RequestStateExitCallback_FirePistol_Params, 0, sizeof(RequestStateExitCallback_FirePistol_Params));
	RequestStateExitCallback_FirePistol_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_FirePistol, &RequestStateExitCallback_FirePistol_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorCombatEliteGuard.OnEnterCallback_FirePistol
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43899])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorCombatEliteGuard::OnEnterCallback_FirePistol(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_FirePistol = nullptr;

	if (!uFnOnEnterCallback_FirePistol)
	{
		uFnOnEnterCallback_FirePistol = UFunction::FindFunction("Function DishonoredGame.DisBehaviorCombatEliteGuard.OnEnterCallback_FirePistol");
	}

	UDisBehaviorCombatEliteGuard_execOnEnterCallback_FirePistol_Params OnEnterCallback_FirePistol_Params;
	memset(&OnEnterCallback_FirePistol_Params, 0, sizeof(OnEnterCallback_FirePistol_Params));
	OnEnterCallback_FirePistol_Params._pThisState = _pThisState;
	OnEnterCallback_FirePistol_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_FirePistol, &OnEnterCallback_FirePistol_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorCombatEliteGuard.RequestStateExitCallback_FindShootingPosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44738])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorCombatEliteGuard::RequestStateExitCallback_FindShootingPosition(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_FindShootingPosition = nullptr;

	if (!uFnRequestStateExitCallback_FindShootingPosition)
	{
		uFnRequestStateExitCallback_FindShootingPosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorCombatEliteGuard.RequestStateExitCallback_FindShootingPosition");
	}

	UDisBehaviorCombatEliteGuard_execRequestStateExitCallback_FindShootingPosition_Params RequestStateExitCallback_FindShootingPosition_Params;
	memset(&RequestStateExitCallback_FindShootingPosition_Params, 0, sizeof(RequestStateExitCallback_FindShootingPosition_Params));
	RequestStateExitCallback_FindShootingPosition_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_FindShootingPosition, &RequestStateExitCallback_FindShootingPosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorCombatEliteGuard.RefreshCallback_FindShootingPosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44668])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fTimeSinceLastThought         (CPF_Parm)

void UDisBehaviorCombatEliteGuard::RefreshCallback_FindShootingPosition(class UDisAISubState* _pThisState, float _fTimeSinceLastThought)
{
	static UFunction* uFnRefreshCallback_FindShootingPosition = nullptr;

	if (!uFnRefreshCallback_FindShootingPosition)
	{
		uFnRefreshCallback_FindShootingPosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorCombatEliteGuard.RefreshCallback_FindShootingPosition");
	}

	UDisBehaviorCombatEliteGuard_execRefreshCallback_FindShootingPosition_Params RefreshCallback_FindShootingPosition_Params;
	memset(&RefreshCallback_FindShootingPosition_Params, 0, sizeof(RefreshCallback_FindShootingPosition_Params));
	RefreshCallback_FindShootingPosition_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_FindShootingPosition_Params._fTimeSinceLastThought, sizeof(RefreshCallback_FindShootingPosition_Params._fTimeSinceLastThought), &_fTimeSinceLastThought, sizeof(_fTimeSinceLastThought));

	this->ProcessEvent(uFnRefreshCallback_FindShootingPosition, &RefreshCallback_FindShootingPosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorCombatEliteGuard.RefreshCallback_Stand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44676])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fTimeSinceLastThought         (CPF_Parm)

void UDisBehaviorCombatEliteGuard::RefreshCallback_Stand(class UDisAISubState* _pThisState, float _fTimeSinceLastThought)
{
	static UFunction* uFnRefreshCallback_Stand = nullptr;

	if (!uFnRefreshCallback_Stand)
	{
		uFnRefreshCallback_Stand = UFunction::FindFunction("Function DishonoredGame.DisBehaviorCombatEliteGuard.RefreshCallback_Stand");
	}

	UDisBehaviorCombatEliteGuard_execRefreshCallback_Stand_Params RefreshCallback_Stand_Params;
	memset(&RefreshCallback_Stand_Params, 0, sizeof(RefreshCallback_Stand_Params));
	RefreshCallback_Stand_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_Stand_Params._fTimeSinceLastThought, sizeof(RefreshCallback_Stand_Params._fTimeSinceLastThought), &_fTimeSinceLastThought, sizeof(_fTimeSinceLastThought));

	this->ProcessEvent(uFnRefreshCallback_Stand, &RefreshCallback_Stand_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorOverseerCombat.OnExitCallback_Stand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43915])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorOverseerCombat::OnExitCallback_Stand(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnExitCallback_Stand = nullptr;

	if (!uFnOnExitCallback_Stand)
	{
		uFnOnExitCallback_Stand = UFunction::FindFunction("Function DishonoredGame.DisBehaviorOverseerCombat.OnExitCallback_Stand");
	}

	UDisBehaviorOverseerCombat_execOnExitCallback_Stand_Params OnExitCallback_Stand_Params;
	memset(&OnExitCallback_Stand_Params, 0, sizeof(OnExitCallback_Stand_Params));
	OnExitCallback_Stand_Params._pThisState = _pThisState;
	OnExitCallback_Stand_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnExitCallback_Stand, &OnExitCallback_Stand_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorOverseerCombat.OnEnterCallback_Stand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43905])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorOverseerCombat::OnEnterCallback_Stand(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_Stand = nullptr;

	if (!uFnOnEnterCallback_Stand)
	{
		uFnOnEnterCallback_Stand = UFunction::FindFunction("Function DishonoredGame.DisBehaviorOverseerCombat.OnEnterCallback_Stand");
	}

	UDisBehaviorOverseerCombat_execOnEnterCallback_Stand_Params OnEnterCallback_Stand_Params;
	memset(&OnEnterCallback_Stand_Params, 0, sizeof(OnEnterCallback_Stand_Params));
	OnEnterCallback_Stand_Params._pThisState = _pThisState;
	OnEnterCallback_Stand_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_Stand, &OnEnterCallback_Stand_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorOverseerCombat.RefreshCallback_MeleeChase
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44673])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fTimeSinceLastThought         (CPF_Parm)

void UDisBehaviorOverseerCombat::RefreshCallback_MeleeChase(class UDisAISubState* _pThisState, float _fTimeSinceLastThought)
{
	static UFunction* uFnRefreshCallback_MeleeChase = nullptr;

	if (!uFnRefreshCallback_MeleeChase)
	{
		uFnRefreshCallback_MeleeChase = UFunction::FindFunction("Function DishonoredGame.DisBehaviorOverseerCombat.RefreshCallback_MeleeChase");
	}

	UDisBehaviorOverseerCombat_execRefreshCallback_MeleeChase_Params RefreshCallback_MeleeChase_Params;
	memset(&RefreshCallback_MeleeChase_Params, 0, sizeof(RefreshCallback_MeleeChase_Params));
	RefreshCallback_MeleeChase_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_MeleeChase_Params._fTimeSinceLastThought, sizeof(RefreshCallback_MeleeChase_Params._fTimeSinceLastThought), &_fTimeSinceLastThought, sizeof(_fTimeSinceLastThought));

	this->ProcessEvent(uFnRefreshCallback_MeleeChase, &RefreshCallback_MeleeChase_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorOverseerCombat.RefreshCallback_MeleeEngage
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44674])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fTimeSinceLastThought         (CPF_Parm)

void UDisBehaviorOverseerCombat::RefreshCallback_MeleeEngage(class UDisAISubState* _pThisState, float _fTimeSinceLastThought)
{
	static UFunction* uFnRefreshCallback_MeleeEngage = nullptr;

	if (!uFnRefreshCallback_MeleeEngage)
	{
		uFnRefreshCallback_MeleeEngage = UFunction::FindFunction("Function DishonoredGame.DisBehaviorOverseerCombat.RefreshCallback_MeleeEngage");
	}

	UDisBehaviorOverseerCombat_execRefreshCallback_MeleeEngage_Params RefreshCallback_MeleeEngage_Params;
	memset(&RefreshCallback_MeleeEngage_Params, 0, sizeof(RefreshCallback_MeleeEngage_Params));
	RefreshCallback_MeleeEngage_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_MeleeEngage_Params._fTimeSinceLastThought, sizeof(RefreshCallback_MeleeEngage_Params._fTimeSinceLastThought), &_fTimeSinceLastThought, sizeof(_fTimeSinceLastThought));

	this->ProcessEvent(uFnRefreshCallback_MeleeEngage, &RefreshCallback_MeleeEngage_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorOverseerCombat.RequestStateExitCallback_GenericAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44741])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorOverseerCombat::RequestStateExitCallback_GenericAction(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_GenericAction = nullptr;

	if (!uFnRequestStateExitCallback_GenericAction)
	{
		uFnRequestStateExitCallback_GenericAction = UFunction::FindFunction("Function DishonoredGame.DisBehaviorOverseerCombat.RequestStateExitCallback_GenericAction");
	}

	UDisBehaviorOverseerCombat_execRequestStateExitCallback_GenericAction_Params RequestStateExitCallback_GenericAction_Params;
	memset(&RequestStateExitCallback_GenericAction_Params, 0, sizeof(RequestStateExitCallback_GenericAction_Params));
	RequestStateExitCallback_GenericAction_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_GenericAction, &RequestStateExitCallback_GenericAction_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorOverseerCombat.OnEnterCallback_GenericAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43901])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorOverseerCombat::OnEnterCallback_GenericAction(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_GenericAction = nullptr;

	if (!uFnOnEnterCallback_GenericAction)
	{
		uFnOnEnterCallback_GenericAction = UFunction::FindFunction("Function DishonoredGame.DisBehaviorOverseerCombat.OnEnterCallback_GenericAction");
	}

	UDisBehaviorOverseerCombat_execOnEnterCallback_GenericAction_Params OnEnterCallback_GenericAction_Params;
	memset(&OnEnterCallback_GenericAction_Params, 0, sizeof(OnEnterCallback_GenericAction_Params));
	OnEnterCallback_GenericAction_Params._pThisState = _pThisState;
	OnEnterCallback_GenericAction_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_GenericAction, &OnEnterCallback_GenericAction_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorMusicalCombat.RefreshCallback_DoWeaponManoeuver
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44667])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fTimeSinceLastThought         (CPF_Parm)

void UDisBehaviorMusicalCombat::RefreshCallback_DoWeaponManoeuver(class UDisAISubState* _pThisState, float _fTimeSinceLastThought)
{
	static UFunction* uFnRefreshCallback_DoWeaponManoeuver = nullptr;

	if (!uFnRefreshCallback_DoWeaponManoeuver)
	{
		uFnRefreshCallback_DoWeaponManoeuver = UFunction::FindFunction("Function DishonoredGame.DisBehaviorMusicalCombat.RefreshCallback_DoWeaponManoeuver");
	}

	UDisBehaviorMusicalCombat_execRefreshCallback_DoWeaponManoeuver_Params RefreshCallback_DoWeaponManoeuver_Params;
	memset(&RefreshCallback_DoWeaponManoeuver_Params, 0, sizeof(RefreshCallback_DoWeaponManoeuver_Params));
	RefreshCallback_DoWeaponManoeuver_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_DoWeaponManoeuver_Params._fTimeSinceLastThought, sizeof(RefreshCallback_DoWeaponManoeuver_Params._fTimeSinceLastThought), &_fTimeSinceLastThought, sizeof(_fTimeSinceLastThought));

	this->ProcessEvent(uFnRefreshCallback_DoWeaponManoeuver, &RefreshCallback_DoWeaponManoeuver_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorMusicalCombat.RequestStateExitCallback_DoWeaponManoeuver
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44737])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorMusicalCombat::RequestStateExitCallback_DoWeaponManoeuver(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_DoWeaponManoeuver = nullptr;

	if (!uFnRequestStateExitCallback_DoWeaponManoeuver)
	{
		uFnRequestStateExitCallback_DoWeaponManoeuver = UFunction::FindFunction("Function DishonoredGame.DisBehaviorMusicalCombat.RequestStateExitCallback_DoWeaponManoeuver");
	}

	UDisBehaviorMusicalCombat_execRequestStateExitCallback_DoWeaponManoeuver_Params RequestStateExitCallback_DoWeaponManoeuver_Params;
	memset(&RequestStateExitCallback_DoWeaponManoeuver_Params, 0, sizeof(RequestStateExitCallback_DoWeaponManoeuver_Params));
	RequestStateExitCallback_DoWeaponManoeuver_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_DoWeaponManoeuver, &RequestStateExitCallback_DoWeaponManoeuver_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorMusicalCombat.RefreshCallback_MaintainDistance
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44672])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fTimeSinceLastThought         (CPF_Parm)

void UDisBehaviorMusicalCombat::RefreshCallback_MaintainDistance(class UDisAISubState* _pThisState, float _fTimeSinceLastThought)
{
	static UFunction* uFnRefreshCallback_MaintainDistance = nullptr;

	if (!uFnRefreshCallback_MaintainDistance)
	{
		uFnRefreshCallback_MaintainDistance = UFunction::FindFunction("Function DishonoredGame.DisBehaviorMusicalCombat.RefreshCallback_MaintainDistance");
	}

	UDisBehaviorMusicalCombat_execRefreshCallback_MaintainDistance_Params RefreshCallback_MaintainDistance_Params;
	memset(&RefreshCallback_MaintainDistance_Params, 0, sizeof(RefreshCallback_MaintainDistance_Params));
	RefreshCallback_MaintainDistance_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_MaintainDistance_Params._fTimeSinceLastThought, sizeof(RefreshCallback_MaintainDistance_Params._fTimeSinceLastThought), &_fTimeSinceLastThought, sizeof(_fTimeSinceLastThought));

	this->ProcessEvent(uFnRefreshCallback_MaintainDistance, &RefreshCallback_MaintainDistance_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorMusicalCombat.RefreshCallback_Init
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44671])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fTimeSinceLastThought         (CPF_Parm)

void UDisBehaviorMusicalCombat::RefreshCallback_Init(class UDisAISubState* _pThisState, float _fTimeSinceLastThought)
{
	static UFunction* uFnRefreshCallback_Init = nullptr;

	if (!uFnRefreshCallback_Init)
	{
		uFnRefreshCallback_Init = UFunction::FindFunction("Function DishonoredGame.DisBehaviorMusicalCombat.RefreshCallback_Init");
	}

	UDisBehaviorMusicalCombat_execRefreshCallback_Init_Params RefreshCallback_Init_Params;
	memset(&RefreshCallback_Init_Params, 0, sizeof(RefreshCallback_Init_Params));
	RefreshCallback_Init_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_Init_Params._fTimeSinceLastThought, sizeof(RefreshCallback_Init_Params._fTimeSinceLastThought), &_fTimeSinceLastThought, sizeof(_fTimeSinceLastThought));

	this->ProcessEvent(uFnRefreshCallback_Init, &RefreshCallback_Init_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorTallBoyCombat.RequestStateExitCallback_FindShootingPosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44738])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorTallBoyCombat::RequestStateExitCallback_FindShootingPosition(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_FindShootingPosition = nullptr;

	if (!uFnRequestStateExitCallback_FindShootingPosition)
	{
		uFnRequestStateExitCallback_FindShootingPosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorTallBoyCombat.RequestStateExitCallback_FindShootingPosition");
	}

	UDisBehaviorTallBoyCombat_execRequestStateExitCallback_FindShootingPosition_Params RequestStateExitCallback_FindShootingPosition_Params;
	memset(&RequestStateExitCallback_FindShootingPosition_Params, 0, sizeof(RequestStateExitCallback_FindShootingPosition_Params));
	RequestStateExitCallback_FindShootingPosition_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_FindShootingPosition, &RequestStateExitCallback_FindShootingPosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorCombatRatSwarm.RequestStateExitCallback_TakeActorPosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44745])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorCombatRatSwarm::RequestStateExitCallback_TakeActorPosition(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_TakeActorPosition = nullptr;

	if (!uFnRequestStateExitCallback_TakeActorPosition)
	{
		uFnRequestStateExitCallback_TakeActorPosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorCombatRatSwarm.RequestStateExitCallback_TakeActorPosition");
	}

	UDisBehaviorCombatRatSwarm_execRequestStateExitCallback_TakeActorPosition_Params RequestStateExitCallback_TakeActorPosition_Params;
	memset(&RequestStateExitCallback_TakeActorPosition_Params, 0, sizeof(RequestStateExitCallback_TakeActorPosition_Params));
	RequestStateExitCallback_TakeActorPosition_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_TakeActorPosition, &RequestStateExitCallback_TakeActorPosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorCombatRatSwarm.OnExitCallback_TakeActorPosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43916])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorCombatRatSwarm::OnExitCallback_TakeActorPosition(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnOnExitCallback_TakeActorPosition = nullptr;

	if (!uFnOnExitCallback_TakeActorPosition)
	{
		uFnOnExitCallback_TakeActorPosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorCombatRatSwarm.OnExitCallback_TakeActorPosition");
	}

	UDisBehaviorCombatRatSwarm_execOnExitCallback_TakeActorPosition_Params OnExitCallback_TakeActorPosition_Params;
	memset(&OnExitCallback_TakeActorPosition_Params, 0, sizeof(OnExitCallback_TakeActorPosition_Params));
	OnExitCallback_TakeActorPosition_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnOnExitCallback_TakeActorPosition, &OnExitCallback_TakeActorPosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorCombatRatSwarm.RefreshCallback_TakeActorPosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44677])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fTimeSinceLastThought         (CPF_Parm)

void UDisBehaviorCombatRatSwarm::RefreshCallback_TakeActorPosition(class UDisAISubState* _pThisState, float _fTimeSinceLastThought)
{
	static UFunction* uFnRefreshCallback_TakeActorPosition = nullptr;

	if (!uFnRefreshCallback_TakeActorPosition)
	{
		uFnRefreshCallback_TakeActorPosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorCombatRatSwarm.RefreshCallback_TakeActorPosition");
	}

	UDisBehaviorCombatRatSwarm_execRefreshCallback_TakeActorPosition_Params RefreshCallback_TakeActorPosition_Params;
	memset(&RefreshCallback_TakeActorPosition_Params, 0, sizeof(RefreshCallback_TakeActorPosition_Params));
	RefreshCallback_TakeActorPosition_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_TakeActorPosition_Params._fTimeSinceLastThought, sizeof(RefreshCallback_TakeActorPosition_Params._fTimeSinceLastThought), &_fTimeSinceLastThought, sizeof(_fTimeSinceLastThought));

	this->ProcessEvent(uFnRefreshCallback_TakeActorPosition, &RefreshCallback_TakeActorPosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorCombatRatSwarm.RefreshCallback_Stand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44676])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fTimeSinceLastThought         (CPF_Parm)

void UDisBehaviorCombatRatSwarm::RefreshCallback_Stand(class UDisAISubState* _pThisState, float _fTimeSinceLastThought)
{
	static UFunction* uFnRefreshCallback_Stand = nullptr;

	if (!uFnRefreshCallback_Stand)
	{
		uFnRefreshCallback_Stand = UFunction::FindFunction("Function DishonoredGame.DisBehaviorCombatRatSwarm.RefreshCallback_Stand");
	}

	UDisBehaviorCombatRatSwarm_execRefreshCallback_Stand_Params RefreshCallback_Stand_Params;
	memset(&RefreshCallback_Stand_Params, 0, sizeof(RefreshCallback_Stand_Params));
	RefreshCallback_Stand_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_Stand_Params._fTimeSinceLastThought, sizeof(RefreshCallback_Stand_Params._fTimeSinceLastThought), &_fTimeSinceLastThought, sizeof(_fTimeSinceLastThought));

	this->ProcessEvent(uFnRefreshCallback_Stand, &RefreshCallback_Stand_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorCombatRatSwarm.OnEnterCallback_Stand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43905])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorCombatRatSwarm::OnEnterCallback_Stand(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_Stand = nullptr;

	if (!uFnOnEnterCallback_Stand)
	{
		uFnOnEnterCallback_Stand = UFunction::FindFunction("Function DishonoredGame.DisBehaviorCombatRatSwarm.OnEnterCallback_Stand");
	}

	UDisBehaviorCombatRatSwarm_execOnEnterCallback_Stand_Params OnEnterCallback_Stand_Params;
	memset(&OnEnterCallback_Stand_Params, 0, sizeof(OnEnterCallback_Stand_Params));
	OnEnterCallback_Stand_Params._pThisState = _pThisState;
	OnEnterCallback_Stand_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_Stand, &OnEnterCallback_Stand_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorCombatRatSwarmEliteGuard.RequestStateExitCallback_FirePistol
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44739])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorCombatRatSwarmEliteGuard::RequestStateExitCallback_FirePistol(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_FirePistol = nullptr;

	if (!uFnRequestStateExitCallback_FirePistol)
	{
		uFnRequestStateExitCallback_FirePistol = UFunction::FindFunction("Function DishonoredGame.DisBehaviorCombatRatSwarmEliteGuard.RequestStateExitCallback_FirePistol");
	}

	UDisBehaviorCombatRatSwarmEliteGuard_execRequestStateExitCallback_FirePistol_Params RequestStateExitCallback_FirePistol_Params;
	memset(&RequestStateExitCallback_FirePistol_Params, 0, sizeof(RequestStateExitCallback_FirePistol_Params));
	RequestStateExitCallback_FirePistol_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_FirePistol, &RequestStateExitCallback_FirePistol_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorCombatRatSwarmEliteGuard.RefreshCallback_TakeActorPosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44677])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fTimeSinceLastThought         (CPF_Parm)

void UDisBehaviorCombatRatSwarmEliteGuard::RefreshCallback_TakeActorPosition(class UDisAISubState* _pThisState, float _fTimeSinceLastThought)
{
	static UFunction* uFnRefreshCallback_TakeActorPosition = nullptr;

	if (!uFnRefreshCallback_TakeActorPosition)
	{
		uFnRefreshCallback_TakeActorPosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorCombatRatSwarmEliteGuard.RefreshCallback_TakeActorPosition");
	}

	UDisBehaviorCombatRatSwarmEliteGuard_execRefreshCallback_TakeActorPosition_Params RefreshCallback_TakeActorPosition_Params;
	memset(&RefreshCallback_TakeActorPosition_Params, 0, sizeof(RefreshCallback_TakeActorPosition_Params));
	RefreshCallback_TakeActorPosition_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_TakeActorPosition_Params._fTimeSinceLastThought, sizeof(RefreshCallback_TakeActorPosition_Params._fTimeSinceLastThought), &_fTimeSinceLastThought, sizeof(_fTimeSinceLastThought));

	this->ProcessEvent(uFnRefreshCallback_TakeActorPosition, &RefreshCallback_TakeActorPosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorEnemyUnreachable.RequestStateExitCallback_GenericAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44741])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorEnemyUnreachable::RequestStateExitCallback_GenericAction(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_GenericAction = nullptr;

	if (!uFnRequestStateExitCallback_GenericAction)
	{
		uFnRequestStateExitCallback_GenericAction = UFunction::FindFunction("Function DishonoredGame.DisBehaviorEnemyUnreachable.RequestStateExitCallback_GenericAction");
	}

	UDisBehaviorEnemyUnreachable_execRequestStateExitCallback_GenericAction_Params RequestStateExitCallback_GenericAction_Params;
	memset(&RequestStateExitCallback_GenericAction_Params, 0, sizeof(RequestStateExitCallback_GenericAction_Params));
	RequestStateExitCallback_GenericAction_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_GenericAction, &RequestStateExitCallback_GenericAction_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorEnemyUnreachable.RequestStateExitCallback_TakePosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44746])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorEnemyUnreachable::RequestStateExitCallback_TakePosition(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_TakePosition = nullptr;

	if (!uFnRequestStateExitCallback_TakePosition)
	{
		uFnRequestStateExitCallback_TakePosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorEnemyUnreachable.RequestStateExitCallback_TakePosition");
	}

	UDisBehaviorEnemyUnreachable_execRequestStateExitCallback_TakePosition_Params RequestStateExitCallback_TakePosition_Params;
	memset(&RequestStateExitCallback_TakePosition_Params, 0, sizeof(RequestStateExitCallback_TakePosition_Params));
	RequestStateExitCallback_TakePosition_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_TakePosition, &RequestStateExitCallback_TakePosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorEnemyUnreachable.RequestStateExitCallback_DoWeaponManoeuver
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44737])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorEnemyUnreachable::RequestStateExitCallback_DoWeaponManoeuver(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_DoWeaponManoeuver = nullptr;

	if (!uFnRequestStateExitCallback_DoWeaponManoeuver)
	{
		uFnRequestStateExitCallback_DoWeaponManoeuver = UFunction::FindFunction("Function DishonoredGame.DisBehaviorEnemyUnreachable.RequestStateExitCallback_DoWeaponManoeuver");
	}

	UDisBehaviorEnemyUnreachable_execRequestStateExitCallback_DoWeaponManoeuver_Params RequestStateExitCallback_DoWeaponManoeuver_Params;
	memset(&RequestStateExitCallback_DoWeaponManoeuver_Params, 0, sizeof(RequestStateExitCallback_DoWeaponManoeuver_Params));
	RequestStateExitCallback_DoWeaponManoeuver_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_DoWeaponManoeuver, &RequestStateExitCallback_DoWeaponManoeuver_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorEnemyUnreachable.OnExitCallback_Menace
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43914])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pNextState                    (CPF_Parm)

void UDisBehaviorEnemyUnreachable::OnExitCallback_Menace(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pNextState)
{
	static UFunction* uFnOnExitCallback_Menace = nullptr;

	if (!uFnOnExitCallback_Menace)
	{
		uFnOnExitCallback_Menace = UFunction::FindFunction("Function DishonoredGame.DisBehaviorEnemyUnreachable.OnExitCallback_Menace");
	}

	UDisBehaviorEnemyUnreachable_execOnExitCallback_Menace_Params OnExitCallback_Menace_Params;
	memset(&OnExitCallback_Menace_Params, 0, sizeof(OnExitCallback_Menace_Params));
	OnExitCallback_Menace_Params._pThisState = _pThisState;
	OnExitCallback_Menace_Params._pNextState = _pNextState;

	this->ProcessEvent(uFnOnExitCallback_Menace, &OnExitCallback_Menace_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorEnemyUnreachable.RefreshCallback_Menace
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44675])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fDeltaSeconds                 (CPF_Parm)

void UDisBehaviorEnemyUnreachable::RefreshCallback_Menace(class UDisAISubState* _pThisState, float _fDeltaSeconds)
{
	static UFunction* uFnRefreshCallback_Menace = nullptr;

	if (!uFnRefreshCallback_Menace)
	{
		uFnRefreshCallback_Menace = UFunction::FindFunction("Function DishonoredGame.DisBehaviorEnemyUnreachable.RefreshCallback_Menace");
	}

	UDisBehaviorEnemyUnreachable_execRefreshCallback_Menace_Params RefreshCallback_Menace_Params;
	memset(&RefreshCallback_Menace_Params, 0, sizeof(RefreshCallback_Menace_Params));
	RefreshCallback_Menace_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_Menace_Params._fDeltaSeconds, sizeof(RefreshCallback_Menace_Params._fDeltaSeconds), &_fDeltaSeconds, sizeof(_fDeltaSeconds));

	this->ProcessEvent(uFnRefreshCallback_Menace, &RefreshCallback_Menace_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorEnemyUnreachable.OnEnterCallback_Menace
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43904])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorEnemyUnreachable::OnEnterCallback_Menace(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_Menace = nullptr;

	if (!uFnOnEnterCallback_Menace)
	{
		uFnOnEnterCallback_Menace = UFunction::FindFunction("Function DishonoredGame.DisBehaviorEnemyUnreachable.OnEnterCallback_Menace");
	}

	UDisBehaviorEnemyUnreachable_execOnEnterCallback_Menace_Params OnEnterCallback_Menace_Params;
	memset(&OnEnterCallback_Menace_Params, 0, sizeof(OnEnterCallback_Menace_Params));
	OnEnterCallback_Menace_Params._pThisState = _pThisState;
	OnEnterCallback_Menace_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_Menace, &OnEnterCallback_Menace_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorShoot.TickCallback_Stand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45360])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// float                          _fDeltaSeconds                 (CPF_Parm)

void UDisBehaviorShoot::TickCallback_Stand(class UDishonoredNativeState* _pThisState, float _fDeltaSeconds)
{
	static UFunction* uFnTickCallback_Stand = nullptr;

	if (!uFnTickCallback_Stand)
	{
		uFnTickCallback_Stand = UFunction::FindFunction("Function DishonoredGame.DisBehaviorShoot.TickCallback_Stand");
	}

	UDisBehaviorShoot_execTickCallback_Stand_Params TickCallback_Stand_Params;
	memset(&TickCallback_Stand_Params, 0, sizeof(TickCallback_Stand_Params));
	TickCallback_Stand_Params._pThisState = _pThisState;
	memcpy_s(&TickCallback_Stand_Params._fDeltaSeconds, sizeof(TickCallback_Stand_Params._fDeltaSeconds), &_fDeltaSeconds, sizeof(_fDeltaSeconds));

	this->ProcessEvent(uFnTickCallback_Stand, &TickCallback_Stand_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorShoot.RequestStateExitCallback_FirePistol
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44739])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorShoot::RequestStateExitCallback_FirePistol(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_FirePistol = nullptr;

	if (!uFnRequestStateExitCallback_FirePistol)
	{
		uFnRequestStateExitCallback_FirePistol = UFunction::FindFunction("Function DishonoredGame.DisBehaviorShoot.RequestStateExitCallback_FirePistol");
	}

	UDisBehaviorShoot_execRequestStateExitCallback_FirePistol_Params RequestStateExitCallback_FirePistol_Params;
	memset(&RequestStateExitCallback_FirePistol_Params, 0, sizeof(RequestStateExitCallback_FirePistol_Params));
	RequestStateExitCallback_FirePistol_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_FirePistol, &RequestStateExitCallback_FirePistol_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorCombatWolfhound.RefreshCallback_WolfhoundCombatLongDistance
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44680])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fTimeSinceLastThought         (CPF_Parm)

void UDisBehaviorCombatWolfhound::RefreshCallback_WolfhoundCombatLongDistance(class UDisAISubState* _pThisState, float _fTimeSinceLastThought)
{
	static UFunction* uFnRefreshCallback_WolfhoundCombatLongDistance = nullptr;

	if (!uFnRefreshCallback_WolfhoundCombatLongDistance)
	{
		uFnRefreshCallback_WolfhoundCombatLongDistance = UFunction::FindFunction("Function DishonoredGame.DisBehaviorCombatWolfhound.RefreshCallback_WolfhoundCombatLongDistance");
	}

	UDisBehaviorCombatWolfhound_execRefreshCallback_WolfhoundCombatLongDistance_Params RefreshCallback_WolfhoundCombatLongDistance_Params;
	memset(&RefreshCallback_WolfhoundCombatLongDistance_Params, 0, sizeof(RefreshCallback_WolfhoundCombatLongDistance_Params));
	RefreshCallback_WolfhoundCombatLongDistance_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_WolfhoundCombatLongDistance_Params._fTimeSinceLastThought, sizeof(RefreshCallback_WolfhoundCombatLongDistance_Params._fTimeSinceLastThought), &_fTimeSinceLastThought, sizeof(_fTimeSinceLastThought));

	this->ProcessEvent(uFnRefreshCallback_WolfhoundCombatLongDistance, &RefreshCallback_WolfhoundCombatLongDistance_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorCombatWolfhound.RefreshCallback_WHShortDistance
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44679])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fTimeSinceLastThought         (CPF_Parm)

void UDisBehaviorCombatWolfhound::RefreshCallback_WHShortDistance(class UDisAISubState* _pThisState, float _fTimeSinceLastThought)
{
	static UFunction* uFnRefreshCallback_WHShortDistance = nullptr;

	if (!uFnRefreshCallback_WHShortDistance)
	{
		uFnRefreshCallback_WHShortDistance = UFunction::FindFunction("Function DishonoredGame.DisBehaviorCombatWolfhound.RefreshCallback_WHShortDistance");
	}

	UDisBehaviorCombatWolfhound_execRefreshCallback_WHShortDistance_Params RefreshCallback_WHShortDistance_Params;
	memset(&RefreshCallback_WHShortDistance_Params, 0, sizeof(RefreshCallback_WHShortDistance_Params));
	RefreshCallback_WHShortDistance_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_WHShortDistance_Params._fTimeSinceLastThought, sizeof(RefreshCallback_WHShortDistance_Params._fTimeSinceLastThought), &_fTimeSinceLastThought, sizeof(_fTimeSinceLastThought));

	this->ProcessEvent(uFnRefreshCallback_WHShortDistance, &RefreshCallback_WHShortDistance_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorCombatWolfhound.RefreshCallback_MeleeChase
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44673])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fTimeSinceLastThought         (CPF_Parm)

void UDisBehaviorCombatWolfhound::RefreshCallback_MeleeChase(class UDisAISubState* _pThisState, float _fTimeSinceLastThought)
{
	static UFunction* uFnRefreshCallback_MeleeChase = nullptr;

	if (!uFnRefreshCallback_MeleeChase)
	{
		uFnRefreshCallback_MeleeChase = UFunction::FindFunction("Function DishonoredGame.DisBehaviorCombatWolfhound.RefreshCallback_MeleeChase");
	}

	UDisBehaviorCombatWolfhound_execRefreshCallback_MeleeChase_Params RefreshCallback_MeleeChase_Params;
	memset(&RefreshCallback_MeleeChase_Params, 0, sizeof(RefreshCallback_MeleeChase_Params));
	RefreshCallback_MeleeChase_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_MeleeChase_Params._fTimeSinceLastThought, sizeof(RefreshCallback_MeleeChase_Params._fTimeSinceLastThought), &_fTimeSinceLastThought, sizeof(_fTimeSinceLastThought));

	this->ProcessEvent(uFnRefreshCallback_MeleeChase, &RefreshCallback_MeleeChase_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorSummonWolfHound.OnExitCallback_GenericAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43911])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pNextState                    (CPF_Parm)

void UDisBehaviorSummonWolfHound::OnExitCallback_GenericAction(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pNextState)
{
	static UFunction* uFnOnExitCallback_GenericAction = nullptr;

	if (!uFnOnExitCallback_GenericAction)
	{
		uFnOnExitCallback_GenericAction = UFunction::FindFunction("Function DishonoredGame.DisBehaviorSummonWolfHound.OnExitCallback_GenericAction");
	}

	UDisBehaviorSummonWolfHound_execOnExitCallback_GenericAction_Params OnExitCallback_GenericAction_Params;
	memset(&OnExitCallback_GenericAction_Params, 0, sizeof(OnExitCallback_GenericAction_Params));
	OnExitCallback_GenericAction_Params._pThisState = _pThisState;
	OnExitCallback_GenericAction_Params._pNextState = _pNextState;

	this->ProcessEvent(uFnOnExitCallback_GenericAction, &OnExitCallback_GenericAction_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorSummonWolfHound.RequestStateExitCallback_GenericAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44741])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorSummonWolfHound::RequestStateExitCallback_GenericAction(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_GenericAction = nullptr;

	if (!uFnRequestStateExitCallback_GenericAction)
	{
		uFnRequestStateExitCallback_GenericAction = UFunction::FindFunction("Function DishonoredGame.DisBehaviorSummonWolfHound.RequestStateExitCallback_GenericAction");
	}

	UDisBehaviorSummonWolfHound_execRequestStateExitCallback_GenericAction_Params RequestStateExitCallback_GenericAction_Params;
	memset(&RequestStateExitCallback_GenericAction_Params, 0, sizeof(RequestStateExitCallback_GenericAction_Params));
	RequestStateExitCallback_GenericAction_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_GenericAction, &RequestStateExitCallback_GenericAction_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorSummonWolfHound.OnEnterCallback_GenericAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43901])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorSummonWolfHound::OnEnterCallback_GenericAction(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnOnEnterCallback_GenericAction = nullptr;

	if (!uFnOnEnterCallback_GenericAction)
	{
		uFnOnEnterCallback_GenericAction = UFunction::FindFunction("Function DishonoredGame.DisBehaviorSummonWolfHound.OnEnterCallback_GenericAction");
	}

	UDisBehaviorSummonWolfHound_execOnEnterCallback_GenericAction_Params OnEnterCallback_GenericAction_Params;
	memset(&OnEnterCallback_GenericAction_Params, 0, sizeof(OnEnterCallback_GenericAction_Params));
	OnEnterCallback_GenericAction_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnOnEnterCallback_GenericAction, &OnEnterCallback_GenericAction_Params, nullptr);
};

// Function DishonoredGame.DisSeqAct_SetRainEmitter.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UDisSeqAct_SetRainEmitter::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function DishonoredGame.DisSeqAct_SetRainEmitter.GetObjClassVersion");
	}

	UDisSeqAct_SetRainEmitter_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));

	UDisSeqAct_SetRainEmitter::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function DishonoredGame.DisSeqEvent_Distracted.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UDisSeqEvent_Distracted::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function DishonoredGame.DisSeqEvent_Distracted.GetObjClassVersion");
	}

	UDisSeqEvent_Distracted_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));

	UDisSeqEvent_Distracted::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function DishonoredGame.DisSeqVar_PlayerCamera.GetObjectValue
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[20659])
// Parameter Info:
// class UObject*                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UObject* UDisSeqVar_PlayerCamera::GetObjectValueW()
{
	static UFunction* uFnGetObjectValueW = nullptr;

	if (!uFnGetObjectValueW)
	{
		uFnGetObjectValueW = UFunction::FindFunction("Function DishonoredGame.DisSeqVar_PlayerCamera.GetObjectValue");
	}

	UDisSeqVar_PlayerCamera_execGetObjectValueW_Params GetObjectValueW_Params;
	memset(&GetObjectValueW_Params, 0, sizeof(GetObjectValueW_Params));

	this->ProcessEvent(uFnGetObjectValueW, &GetObjectValueW_Params, nullptr);

	return GetObjectValueW_Params.ReturnValue;
};

// Function DishonoredGame.DisSeqVar_PlayerPawn.GetObjectValue
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[20659])
// Parameter Info:
// class UObject*                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UObject* UDisSeqVar_PlayerPawn::GetObjectValueW()
{
	static UFunction* uFnGetObjectValueW = nullptr;

	if (!uFnGetObjectValueW)
	{
		uFnGetObjectValueW = UFunction::FindFunction("Function DishonoredGame.DisSeqVar_PlayerPawn.GetObjectValue");
	}

	UDisSeqVar_PlayerPawn_execGetObjectValueW_Params GetObjectValueW_Params;
	memset(&GetObjectValueW_Params, 0, sizeof(GetObjectValueW_Params));

	this->ProcessEvent(uFnGetObjectValueW, &GetObjectValueW_Params, nullptr);

	return GetObjectValueW_Params.ReturnValue;
};

// Function DishonoredGame.DisSeqVar_SpawnerPawn.GetObjectValue
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[20659])
// Parameter Info:
// class UObject*                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UObject* UDisSeqVar_SpawnerPawn::GetObjectValueW()
{
	static UFunction* uFnGetObjectValueW = nullptr;

	if (!uFnGetObjectValueW)
	{
		uFnGetObjectValueW = UFunction::FindFunction("Function DishonoredGame.DisSeqVar_SpawnerPawn.GetObjectValue");
	}

	UDisSeqVar_SpawnerPawn_execGetObjectValueW_Params GetObjectValueW_Params;
	memset(&GetObjectValueW_Params, 0, sizeof(GetObjectValueW_Params));

	this->ProcessEvent(uFnGetObjectValueW, &GetObjectValueW_Params, nullptr);

	return GetObjectValueW_Params.ReturnValue;
};

// Function DishonoredGame.DisToggleableVolume.OnToggle
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[23663])
// Parameter Info:
// class USeqAct_Toggle*          _pAction                       (CPF_Parm)

void ADisToggleableVolume::OnToggle(class USeqAct_Toggle* _pAction)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function DishonoredGame.DisToggleableVolume.OnToggle");
	}

	ADisToggleableVolume_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	OnToggle_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function DishonoredGame.DisForbiddenZone.OnForbiddenZoneOverride
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43919])
// Parameter Info:
// class UDisSeqAct_ForbiddenZoneOverride* _pAction                       (CPF_Parm)

void ADisForbiddenZone::OnForbiddenZoneOverride(class UDisSeqAct_ForbiddenZoneOverride* _pAction)
{
	static UFunction* uFnOnForbiddenZoneOverride = nullptr;

	if (!uFnOnForbiddenZoneOverride)
	{
		uFnOnForbiddenZoneOverride = UFunction::FindFunction("Function DishonoredGame.DisForbiddenZone.OnForbiddenZoneOverride");
	}

	ADisForbiddenZone_execOnForbiddenZoneOverride_Params OnForbiddenZoneOverride_Params;
	memset(&OnForbiddenZoneOverride_Params, 0, sizeof(OnForbiddenZoneOverride_Params));
	OnForbiddenZoneOverride_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnForbiddenZoneOverride, &OnForbiddenZoneOverride_Params, nullptr);
};

// Function DishonoredGame.DisGrenade.TakeDamage_Native
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[45311])
// Parameter Info:
// int32_t                        _Damage                        (CPF_Parm)
// class AController*             _pInstigatedBy                 (CPF_Parm)
// struct FVector                 _HitLocation                   (CPF_Parm)
// struct FVector                 _Momentum                      (CPF_Parm)
// class UClass*                  _pDamageType                   (CPF_Parm)
// struct FTraceHitInfo           _HitInfo                       (CPF_OptionalParm | CPF_Parm)
// class AActor*                  _pDamageCauser                 (CPF_OptionalParm | CPF_Parm)

void ADisGrenade::TakeDamage_Native(int32_t _Damage, class AController* _pInstigatedBy, const struct FVector& _HitLocation, const struct FVector& _Momentum, class UClass* _pDamageType, const struct FTraceHitInfo& _HitInfo, class AActor* _pDamageCauser)
{
	static UFunction* uFnTakeDamage_Native = nullptr;

	if (!uFnTakeDamage_Native)
	{
		uFnTakeDamage_Native = UFunction::FindFunction("Function DishonoredGame.DisGrenade.TakeDamage_Native");
	}

	ADisGrenade_execTakeDamage_Native_Params TakeDamage_Native_Params;
	memset(&TakeDamage_Native_Params, 0, sizeof(TakeDamage_Native_Params));
	memcpy_s(&TakeDamage_Native_Params._Damage, sizeof(TakeDamage_Native_Params._Damage), &_Damage, sizeof(_Damage));
	TakeDamage_Native_Params._pInstigatedBy = _pInstigatedBy;
	memcpy_s(&TakeDamage_Native_Params._HitLocation, sizeof(TakeDamage_Native_Params._HitLocation), &_HitLocation, sizeof(_HitLocation));
	memcpy_s(&TakeDamage_Native_Params._Momentum, sizeof(TakeDamage_Native_Params._Momentum), &_Momentum, sizeof(_Momentum));
	TakeDamage_Native_Params._pDamageType = _pDamageType;
	memcpy_s(&TakeDamage_Native_Params._HitInfo, sizeof(TakeDamage_Native_Params._HitInfo), &_HitInfo, sizeof(_HitInfo));
	TakeDamage_Native_Params._pDamageCauser = _pDamageCauser;

	this->ProcessEvent(uFnTakeDamage_Native, &TakeDamage_Native_Params, nullptr);
};

// Function DishonoredGame.DisWhiskeyBottle.TakeDamage_Native
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[45311])
// Parameter Info:
// int32_t                        _Damage                        (CPF_Parm)
// class AController*             _pInstigatedBy                 (CPF_Parm)
// struct FVector                 _HitLocation                   (CPF_Parm)
// struct FVector                 _Momentum                      (CPF_Parm)
// class UClass*                  _pDamageType                   (CPF_Parm)
// struct FTraceHitInfo           _HitInfo                       (CPF_OptionalParm | CPF_Parm)
// class AActor*                  _pDamageCauser                 (CPF_OptionalParm | CPF_Parm)

void ADisWhiskeyBottle::TakeDamage_Native(int32_t _Damage, class AController* _pInstigatedBy, const struct FVector& _HitLocation, const struct FVector& _Momentum, class UClass* _pDamageType, const struct FTraceHitInfo& _HitInfo, class AActor* _pDamageCauser)
{
	static UFunction* uFnTakeDamage_Native = nullptr;

	if (!uFnTakeDamage_Native)
	{
		uFnTakeDamage_Native = UFunction::FindFunction("Function DishonoredGame.DisWhiskeyBottle.TakeDamage_Native");
	}

	ADisWhiskeyBottle_execTakeDamage_Native_Params TakeDamage_Native_Params;
	memset(&TakeDamage_Native_Params, 0, sizeof(TakeDamage_Native_Params));
	memcpy_s(&TakeDamage_Native_Params._Damage, sizeof(TakeDamage_Native_Params._Damage), &_Damage, sizeof(_Damage));
	TakeDamage_Native_Params._pInstigatedBy = _pInstigatedBy;
	memcpy_s(&TakeDamage_Native_Params._HitLocation, sizeof(TakeDamage_Native_Params._HitLocation), &_HitLocation, sizeof(_HitLocation));
	memcpy_s(&TakeDamage_Native_Params._Momentum, sizeof(TakeDamage_Native_Params._Momentum), &_Momentum, sizeof(_Momentum));
	TakeDamage_Native_Params._pDamageType = _pDamageType;
	memcpy_s(&TakeDamage_Native_Params._HitInfo, sizeof(TakeDamage_Native_Params._HitInfo), &_HitInfo, sizeof(_HitInfo));
	TakeDamage_Native_Params._pDamageCauser = _pDamageCauser;

	this->ProcessEvent(uFnTakeDamage_Native, &TakeDamage_Native_Params, nullptr);
};

// Function DishonoredGame.DisProjectile.TakeDamage_Native
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[45311])
// Parameter Info:
// int32_t                        _Damage                        (CPF_Parm)
// class AController*             _pInstigatedBy                 (CPF_Parm)
// struct FVector                 _HitLocation                   (CPF_Parm)
// struct FVector                 _Momentum                      (CPF_Parm)
// class UClass*                  _pDamageType                   (CPF_Parm)
// struct FTraceHitInfo           _HitInfo                       (CPF_OptionalParm | CPF_Parm)
// class AActor*                  _pDamageCauser                 (CPF_OptionalParm | CPF_Parm)

void ADisProjectile::TakeDamage_Native(int32_t _Damage, class AController* _pInstigatedBy, const struct FVector& _HitLocation, const struct FVector& _Momentum, class UClass* _pDamageType, const struct FTraceHitInfo& _HitInfo, class AActor* _pDamageCauser)
{
	static UFunction* uFnTakeDamage_Native = nullptr;

	if (!uFnTakeDamage_Native)
	{
		uFnTakeDamage_Native = UFunction::FindFunction("Function DishonoredGame.DisProjectile.TakeDamage_Native");
	}

	ADisProjectile_execTakeDamage_Native_Params TakeDamage_Native_Params;
	memset(&TakeDamage_Native_Params, 0, sizeof(TakeDamage_Native_Params));
	memcpy_s(&TakeDamage_Native_Params._Damage, sizeof(TakeDamage_Native_Params._Damage), &_Damage, sizeof(_Damage));
	TakeDamage_Native_Params._pInstigatedBy = _pInstigatedBy;
	memcpy_s(&TakeDamage_Native_Params._HitLocation, sizeof(TakeDamage_Native_Params._HitLocation), &_HitLocation, sizeof(_HitLocation));
	memcpy_s(&TakeDamage_Native_Params._Momentum, sizeof(TakeDamage_Native_Params._Momentum), &_Momentum, sizeof(_Momentum));
	TakeDamage_Native_Params._pDamageType = _pDamageType;
	memcpy_s(&TakeDamage_Native_Params._HitInfo, sizeof(TakeDamage_Native_Params._HitInfo), &_HitInfo, sizeof(_HitInfo));
	TakeDamage_Native_Params._pDamageCauser = _pDamageCauser;

	this->ProcessEvent(uFnTakeDamage_Native, &TakeDamage_Native_Params, nullptr);
};

// Function DishonoredGame.DisProjectile.TakeDamage
// [0x00024C00] (FUNC_Native | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[13766])
// Parameter Info:
// int32_t                        _Damage                        (CPF_Parm)
// class AController*             _pInstigatedBy                 (CPF_Parm)
// struct FVector                 _HitLocation                   (CPF_Parm)
// struct FVector                 _Momentum                      (CPF_Parm)
// class UClass*                  _pDamageType                   (CPF_Parm)
// struct FTraceHitInfo           _HitInfo                       (CPF_OptionalParm | CPF_Parm)
// class AActor*                  _pDamageCauser                 (CPF_OptionalParm | CPF_Parm)

void ADisProjectile::eventTakeDamage(int32_t _Damage, class AController* _pInstigatedBy, const struct FVector& _HitLocation, const struct FVector& _Momentum, class UClass* _pDamageType, const struct FTraceHitInfo& _HitInfo, class AActor* _pDamageCauser)
{
	static UFunction* uFnTakeDamage = nullptr;

	if (!uFnTakeDamage)
	{
		uFnTakeDamage = UFunction::FindFunction("Function DishonoredGame.DisProjectile.TakeDamage");
	}

	ADisProjectile_eventTakeDamage_Params TakeDamage_Params;
	memset(&TakeDamage_Params, 0, sizeof(TakeDamage_Params));
	memcpy_s(&TakeDamage_Params._Damage, sizeof(TakeDamage_Params._Damage), &_Damage, sizeof(_Damage));
	TakeDamage_Params._pInstigatedBy = _pInstigatedBy;
	memcpy_s(&TakeDamage_Params._HitLocation, sizeof(TakeDamage_Params._HitLocation), &_HitLocation, sizeof(_HitLocation));
	memcpy_s(&TakeDamage_Params._Momentum, sizeof(TakeDamage_Params._Momentum), &_Momentum, sizeof(_Momentum));
	TakeDamage_Params._pDamageType = _pDamageType;
	memcpy_s(&TakeDamage_Params._HitInfo, sizeof(TakeDamage_Params._HitInfo), &_HitInfo, sizeof(_HitInfo));
	TakeDamage_Params._pDamageCauser = _pDamageCauser;

	this->ProcessEvent(uFnTakeDamage, &TakeDamage_Params, nullptr);
};

// Function DishonoredGame.DisProjectile_Arrow.BaseChange
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[311])
// Parameter Info:

void ADisProjectile_Arrow::eventBaseChange()
{
	static UFunction* uFnBaseChange = nullptr;

	if (!uFnBaseChange)
	{
		uFnBaseChange = UFunction::FindFunction("Function DishonoredGame.DisProjectile_Arrow.BaseChange");
	}

	ADisProjectile_Arrow_eventBaseChange_Params BaseChange_Params;
	memset(&BaseChange_Params, 0, sizeof(BaseChange_Params));

	this->ProcessEvent(uFnBaseChange, &BaseChange_Params, nullptr);
};

// Function DishonoredGame.DisProjectile_GrenadeBase.TakeDamage_Native
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[45311])
// Parameter Info:
// int32_t                        _Damage                        (CPF_Parm)
// class AController*             _pInstigatedBy                 (CPF_Parm)
// struct FVector                 _HitLocation                   (CPF_Parm)
// struct FVector                 _Momentum                      (CPF_Parm)
// class UClass*                  _pDamageType                   (CPF_Parm)
// struct FTraceHitInfo           _HitInfo                       (CPF_OptionalParm | CPF_Parm)
// class AActor*                  _pDamageCauser                 (CPF_OptionalParm | CPF_Parm)

void ADisProjectile_GrenadeBase::TakeDamage_Native(int32_t _Damage, class AController* _pInstigatedBy, const struct FVector& _HitLocation, const struct FVector& _Momentum, class UClass* _pDamageType, const struct FTraceHitInfo& _HitInfo, class AActor* _pDamageCauser)
{
	static UFunction* uFnTakeDamage_Native = nullptr;

	if (!uFnTakeDamage_Native)
	{
		uFnTakeDamage_Native = UFunction::FindFunction("Function DishonoredGame.DisProjectile_GrenadeBase.TakeDamage_Native");
	}

	ADisProjectile_GrenadeBase_execTakeDamage_Native_Params TakeDamage_Native_Params;
	memset(&TakeDamage_Native_Params, 0, sizeof(TakeDamage_Native_Params));
	memcpy_s(&TakeDamage_Native_Params._Damage, sizeof(TakeDamage_Native_Params._Damage), &_Damage, sizeof(_Damage));
	TakeDamage_Native_Params._pInstigatedBy = _pInstigatedBy;
	memcpy_s(&TakeDamage_Native_Params._HitLocation, sizeof(TakeDamage_Native_Params._HitLocation), &_HitLocation, sizeof(_HitLocation));
	memcpy_s(&TakeDamage_Native_Params._Momentum, sizeof(TakeDamage_Native_Params._Momentum), &_Momentum, sizeof(_Momentum));
	TakeDamage_Native_Params._pDamageType = _pDamageType;
	memcpy_s(&TakeDamage_Native_Params._HitInfo, sizeof(TakeDamage_Native_Params._HitInfo), &_HitInfo, sizeof(_HitInfo));
	TakeDamage_Native_Params._pDamageCauser = _pDamageCauser;

	this->ProcessEvent(uFnTakeDamage_Native, &TakeDamage_Native_Params, nullptr);
};

// Function DishonoredGame.DisProjectile_StickyGrenade.BaseChange
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[311])
// Parameter Info:

void ADisProjectile_StickyGrenade::eventBaseChange()
{
	static UFunction* uFnBaseChange = nullptr;

	if (!uFnBaseChange)
	{
		uFnBaseChange = UFunction::FindFunction("Function DishonoredGame.DisProjectile_StickyGrenade.BaseChange");
	}

	ADisProjectile_StickyGrenade_eventBaseChange_Params BaseChange_Params;
	memset(&BaseChange_Params, 0, sizeof(BaseChange_Params));

	this->ProcessEvent(uFnBaseChange, &BaseChange_Params, nullptr);
};

// Function DishonoredGame.DisProjectile_Whiskey.TakeDamage_Native
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[45311])
// Parameter Info:
// int32_t                        _Damage                        (CPF_Parm)
// class AController*             _pInstigatedBy                 (CPF_Parm)
// struct FVector                 _HitLocation                   (CPF_Parm)
// struct FVector                 _Momentum                      (CPF_Parm)
// class UClass*                  _pDamageType                   (CPF_Parm)
// struct FTraceHitInfo           _HitInfo                       (CPF_OptionalParm | CPF_Parm)
// class AActor*                  _pDamageCauser                 (CPF_OptionalParm | CPF_Parm)

void ADisProjectile_Whiskey::TakeDamage_Native(int32_t _Damage, class AController* _pInstigatedBy, const struct FVector& _HitLocation, const struct FVector& _Momentum, class UClass* _pDamageType, const struct FTraceHitInfo& _HitInfo, class AActor* _pDamageCauser)
{
	static UFunction* uFnTakeDamage_Native = nullptr;

	if (!uFnTakeDamage_Native)
	{
		uFnTakeDamage_Native = UFunction::FindFunction("Function DishonoredGame.DisProjectile_Whiskey.TakeDamage_Native");
	}

	ADisProjectile_Whiskey_execTakeDamage_Native_Params TakeDamage_Native_Params;
	memset(&TakeDamage_Native_Params, 0, sizeof(TakeDamage_Native_Params));
	memcpy_s(&TakeDamage_Native_Params._Damage, sizeof(TakeDamage_Native_Params._Damage), &_Damage, sizeof(_Damage));
	TakeDamage_Native_Params._pInstigatedBy = _pInstigatedBy;
	memcpy_s(&TakeDamage_Native_Params._HitLocation, sizeof(TakeDamage_Native_Params._HitLocation), &_HitLocation, sizeof(_HitLocation));
	memcpy_s(&TakeDamage_Native_Params._Momentum, sizeof(TakeDamage_Native_Params._Momentum), &_Momentum, sizeof(_Momentum));
	TakeDamage_Native_Params._pDamageType = _pDamageType;
	memcpy_s(&TakeDamage_Native_Params._HitInfo, sizeof(TakeDamage_Native_Params._HitInfo), &_HitInfo, sizeof(_HitInfo));
	TakeDamage_Native_Params._pDamageCauser = _pDamageCauser;

	this->ProcessEvent(uFnTakeDamage_Native, &TakeDamage_Native_Params, nullptr);
};

// Function DishonoredGame.DisGadget_SpringRazorPlaced.TakeDamage
// [0x00024C00] (FUNC_Native | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[13766])
// Parameter Info:
// int32_t                        Damage                         (CPF_Parm)
// class AController*             InstigatedBy                   (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 Momentum                       (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_OptionalParm | CPF_Parm)
// class AActor*                  DamageCauser                   (CPF_OptionalParm | CPF_Parm)

void ADisGadget_SpringRazorPlaced::eventTakeDamage(int32_t Damage, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static UFunction* uFnTakeDamage = nullptr;

	if (!uFnTakeDamage)
	{
		uFnTakeDamage = UFunction::FindFunction("Function DishonoredGame.DisGadget_SpringRazorPlaced.TakeDamage");
	}

	ADisGadget_SpringRazorPlaced_eventTakeDamage_Params TakeDamage_Params;
	memset(&TakeDamage_Params, 0, sizeof(TakeDamage_Params));
	memcpy_s(&TakeDamage_Params.Damage, sizeof(TakeDamage_Params.Damage), &Damage, sizeof(Damage));
	TakeDamage_Params.InstigatedBy = InstigatedBy;
	memcpy_s(&TakeDamage_Params.HitLocation, sizeof(TakeDamage_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&TakeDamage_Params.Momentum, sizeof(TakeDamage_Params.Momentum), &Momentum, sizeof(Momentum));
	TakeDamage_Params.DamageType = DamageType;
	memcpy_s(&TakeDamage_Params.HitInfo, sizeof(TakeDamage_Params.HitInfo), &HitInfo, sizeof(HitInfo));
	TakeDamage_Params.DamageCauser = DamageCauser;

	this->ProcessEvent(uFnTakeDamage, &TakeDamage_Params, nullptr);
};

// Function DishonoredGame.DisGadget_SpringRazorPlaced.TakeDamage_Native
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[45311])
// Parameter Info:
// int32_t                        _Damage                        (CPF_Parm)
// class AController*             _pInstigatedBy                 (CPF_Parm)
// struct FVector                 _HitLocation                   (CPF_Parm)
// struct FVector                 _Momentum                      (CPF_Parm)
// class UClass*                  _pDamageType                   (CPF_Parm)
// struct FTraceHitInfo           _HitInfo                       (CPF_OptionalParm | CPF_Parm)
// class AActor*                  _pDamageCauser                 (CPF_OptionalParm | CPF_Parm)

void ADisGadget_SpringRazorPlaced::TakeDamage_Native(int32_t _Damage, class AController* _pInstigatedBy, const struct FVector& _HitLocation, const struct FVector& _Momentum, class UClass* _pDamageType, const struct FTraceHitInfo& _HitInfo, class AActor* _pDamageCauser)
{
	static UFunction* uFnTakeDamage_Native = nullptr;

	if (!uFnTakeDamage_Native)
	{
		uFnTakeDamage_Native = UFunction::FindFunction("Function DishonoredGame.DisGadget_SpringRazorPlaced.TakeDamage_Native");
	}

	ADisGadget_SpringRazorPlaced_execTakeDamage_Native_Params TakeDamage_Native_Params;
	memset(&TakeDamage_Native_Params, 0, sizeof(TakeDamage_Native_Params));
	memcpy_s(&TakeDamage_Native_Params._Damage, sizeof(TakeDamage_Native_Params._Damage), &_Damage, sizeof(_Damage));
	TakeDamage_Native_Params._pInstigatedBy = _pInstigatedBy;
	memcpy_s(&TakeDamage_Native_Params._HitLocation, sizeof(TakeDamage_Native_Params._HitLocation), &_HitLocation, sizeof(_HitLocation));
	memcpy_s(&TakeDamage_Native_Params._Momentum, sizeof(TakeDamage_Native_Params._Momentum), &_Momentum, sizeof(_Momentum));
	TakeDamage_Native_Params._pDamageType = _pDamageType;
	memcpy_s(&TakeDamage_Native_Params._HitInfo, sizeof(TakeDamage_Native_Params._HitInfo), &_HitInfo, sizeof(_HitInfo));
	TakeDamage_Native_Params._pDamageCauser = _pDamageCauser;

	this->ProcessEvent(uFnTakeDamage_Native, &TakeDamage_Native_Params, nullptr);
};

// Function DishonoredGame.DisGadget_SpringRazorPlaced.BaseChange
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[311])
// Parameter Info:

void ADisGadget_SpringRazorPlaced::eventBaseChange()
{
	static UFunction* uFnBaseChange = nullptr;

	if (!uFnBaseChange)
	{
		uFnBaseChange = UFunction::FindFunction("Function DishonoredGame.DisGadget_SpringRazorPlaced.BaseChange");
	}

	ADisGadget_SpringRazorPlaced_eventBaseChange_Params BaseChange_Params;
	memset(&BaseChange_Params, 0, sizeof(BaseChange_Params));

	this->ProcessEvent(uFnBaseChange, &BaseChange_Params, nullptr);
};

// Function DishonoredGame.DishonoredBreakable.Detach
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  Other                          (CPF_Parm)

void ADishonoredBreakable::eventDetach(class AActor* Other)
{
	static UFunction* uFnDetach = nullptr;

	if (!uFnDetach)
	{
		uFnDetach = UFunction::FindFunction("Function DishonoredGame.DishonoredBreakable.Detach");
	}

	ADishonoredBreakable_eventDetach_Params Detach_Params;
	memset(&Detach_Params, 0, sizeof(Detach_Params));
	Detach_Params.Other = Other;

	this->ProcessEvent(uFnDetach, &Detach_Params, nullptr);
};

// Function DishonoredGame.DishonoredBreakable.Attach
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  Other                          (CPF_Parm)

void ADishonoredBreakable::eventAttach(class AActor* Other)
{
	static UFunction* uFnAttach = nullptr;

	if (!uFnAttach)
	{
		uFnAttach = UFunction::FindFunction("Function DishonoredGame.DishonoredBreakable.Attach");
	}

	ADishonoredBreakable_eventAttach_Params Attach_Params;
	memset(&Attach_Params, 0, sizeof(Attach_Params));
	Attach_Params.Other = Other;

	this->ProcessEvent(uFnAttach, &Attach_Params, nullptr);
};

// Function DishonoredGame.DishonoredMovable.OnSleepRBPhysics_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43988])
// Parameter Info:

void ADishonoredMovable::OnSleepRBPhysics_Native()
{
	static UFunction* uFnOnSleepRBPhysics_Native = nullptr;

	if (!uFnOnSleepRBPhysics_Native)
	{
		uFnOnSleepRBPhysics_Native = UFunction::FindFunction("Function DishonoredGame.DishonoredMovable.OnSleepRBPhysics_Native");
	}

	ADishonoredMovable_execOnSleepRBPhysics_Native_Params OnSleepRBPhysics_Native_Params;
	memset(&OnSleepRBPhysics_Native_Params, 0, sizeof(OnSleepRBPhysics_Native_Params));

	this->ProcessEvent(uFnOnSleepRBPhysics_Native, &OnSleepRBPhysics_Native_Params, nullptr);
};

// Function DishonoredGame.DishonoredMovable.OnSleepRBPhysics
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ADishonoredMovable::eventOnSleepRBPhysics()
{
	static UFunction* uFnOnSleepRBPhysics = nullptr;

	if (!uFnOnSleepRBPhysics)
	{
		uFnOnSleepRBPhysics = UFunction::FindFunction("Function DishonoredGame.DishonoredMovable.OnSleepRBPhysics");
	}

	ADishonoredMovable_eventOnSleepRBPhysics_Params OnSleepRBPhysics_Params;
	memset(&OnSleepRBPhysics_Params, 0, sizeof(OnSleepRBPhysics_Params));

	this->ProcessEvent(uFnOnSleepRBPhysics, &OnSleepRBPhysics_Params, nullptr);
};

// Function DishonoredGame.DisNPCAttachment.TakeDamage_Native
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[45311])
// Parameter Info:
// int32_t                        _Damage                        (CPF_Parm)
// class AController*             _pInstigatedBy                 (CPF_Parm)
// struct FVector                 _HitLocation                   (CPF_Parm)
// struct FVector                 _Momentum                      (CPF_Parm)
// class UClass*                  _pDamageType                   (CPF_Parm)
// struct FTraceHitInfo           _HitInfo                       (CPF_OptionalParm | CPF_Parm)
// class AActor*                  _pDamageCauser                 (CPF_OptionalParm | CPF_Parm)

void ADisNPCAttachment::TakeDamage_Native(int32_t _Damage, class AController* _pInstigatedBy, const struct FVector& _HitLocation, const struct FVector& _Momentum, class UClass* _pDamageType, const struct FTraceHitInfo& _HitInfo, class AActor* _pDamageCauser)
{
	static UFunction* uFnTakeDamage_Native = nullptr;

	if (!uFnTakeDamage_Native)
	{
		uFnTakeDamage_Native = UFunction::FindFunction("Function DishonoredGame.DisNPCAttachment.TakeDamage_Native");
	}

	ADisNPCAttachment_execTakeDamage_Native_Params TakeDamage_Native_Params;
	memset(&TakeDamage_Native_Params, 0, sizeof(TakeDamage_Native_Params));
	memcpy_s(&TakeDamage_Native_Params._Damage, sizeof(TakeDamage_Native_Params._Damage), &_Damage, sizeof(_Damage));
	TakeDamage_Native_Params._pInstigatedBy = _pInstigatedBy;
	memcpy_s(&TakeDamage_Native_Params._HitLocation, sizeof(TakeDamage_Native_Params._HitLocation), &_HitLocation, sizeof(_HitLocation));
	memcpy_s(&TakeDamage_Native_Params._Momentum, sizeof(TakeDamage_Native_Params._Momentum), &_Momentum, sizeof(_Momentum));
	TakeDamage_Native_Params._pDamageType = _pDamageType;
	memcpy_s(&TakeDamage_Native_Params._HitInfo, sizeof(TakeDamage_Native_Params._HitInfo), &_HitInfo, sizeof(_HitInfo));
	TakeDamage_Native_Params._pDamageCauser = _pDamageCauser;

	this->ProcessEvent(uFnTakeDamage_Native, &TakeDamage_Native_Params, nullptr);
};

// Function DishonoredGame.DisWhaleOilBattery.Detach
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  Other                          (CPF_Parm)

void ADisWhaleOilBattery::eventDetach(class AActor* Other)
{
	static UFunction* uFnDetach = nullptr;

	if (!uFnDetach)
	{
		uFnDetach = UFunction::FindFunction("Function DishonoredGame.DisWhaleOilBattery.Detach");
	}

	ADisWhaleOilBattery_eventDetach_Params Detach_Params;
	memset(&Detach_Params, 0, sizeof(Detach_Params));
	Detach_Params.Other = Other;

	this->ProcessEvent(uFnDetach, &Detach_Params, nullptr);
};

// Function DishonoredGame.DisWhaleOilBattery.Attach
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  Other                          (CPF_Parm)

void ADisWhaleOilBattery::eventAttach(class AActor* Other)
{
	static UFunction* uFnAttach = nullptr;

	if (!uFnAttach)
	{
		uFnAttach = UFunction::FindFunction("Function DishonoredGame.DisWhaleOilBattery.Attach");
	}

	ADisWhaleOilBattery_eventAttach_Params Attach_Params;
	memset(&Attach_Params, 0, sizeof(Attach_Params));
	Attach_Params.Other = Other;

	this->ProcessEvent(uFnAttach, &Attach_Params, nullptr);
};

// Function DishonoredGame.DisWhaleOilBattery.TakeDamage_Native
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[45311])
// Parameter Info:
// int32_t                        _Damage                        (CPF_Parm)
// class AController*             _pInstigatedBy                 (CPF_Parm)
// struct FVector                 _HitLocation                   (CPF_Parm)
// struct FVector                 _Momentum                      (CPF_Parm)
// class UClass*                  _pDamageType                   (CPF_Parm)
// struct FTraceHitInfo           _HitInfo                       (CPF_OptionalParm | CPF_Parm)
// class AActor*                  _pDamageCauser                 (CPF_OptionalParm | CPF_Parm)

void ADisWhaleOilBattery::TakeDamage_Native(int32_t _Damage, class AController* _pInstigatedBy, const struct FVector& _HitLocation, const struct FVector& _Momentum, class UClass* _pDamageType, const struct FTraceHitInfo& _HitInfo, class AActor* _pDamageCauser)
{
	static UFunction* uFnTakeDamage_Native = nullptr;

	if (!uFnTakeDamage_Native)
	{
		uFnTakeDamage_Native = UFunction::FindFunction("Function DishonoredGame.DisWhaleOilBattery.TakeDamage_Native");
	}

	ADisWhaleOilBattery_execTakeDamage_Native_Params TakeDamage_Native_Params;
	memset(&TakeDamage_Native_Params, 0, sizeof(TakeDamage_Native_Params));
	memcpy_s(&TakeDamage_Native_Params._Damage, sizeof(TakeDamage_Native_Params._Damage), &_Damage, sizeof(_Damage));
	TakeDamage_Native_Params._pInstigatedBy = _pInstigatedBy;
	memcpy_s(&TakeDamage_Native_Params._HitLocation, sizeof(TakeDamage_Native_Params._HitLocation), &_HitLocation, sizeof(_HitLocation));
	memcpy_s(&TakeDamage_Native_Params._Momentum, sizeof(TakeDamage_Native_Params._Momentum), &_Momentum, sizeof(_Momentum));
	TakeDamage_Native_Params._pDamageType = _pDamageType;
	memcpy_s(&TakeDamage_Native_Params._HitInfo, sizeof(TakeDamage_Native_Params._HitInfo), &_HitInfo, sizeof(_HitInfo));
	TakeDamage_Native_Params._pDamageCauser = _pDamageCauser;

	this->ProcessEvent(uFnTakeDamage_Native, &TakeDamage_Native_Params, nullptr);
};

// Function DishonoredGame.DisPickup_Base.OnToggleHidden
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_ToggleHidden*    Action                         (CPF_Parm)

void ADisPickup_Base::OnToggleHidden(class USeqAct_ToggleHidden* Action)
{
	static UFunction* uFnOnToggleHidden = nullptr;

	if (!uFnOnToggleHidden)
	{
		uFnOnToggleHidden = UFunction::FindFunction("Function DishonoredGame.DisPickup_Base.OnToggleHidden");
	}

	ADisPickup_Base_execOnToggleHidden_Params OnToggleHidden_Params;
	memset(&OnToggleHidden_Params, 0, sizeof(OnToggleHidden_Params));
	OnToggleHidden_Params.Action = Action;

	this->ProcessEvent(uFnOnToggleHidden, &OnToggleHidden_Params, nullptr);
};

// Function DishonoredGame.DisPickup_Base.BaseChange
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[311])
// Parameter Info:

void ADisPickup_Base::eventBaseChange()
{
	static UFunction* uFnBaseChange = nullptr;

	if (!uFnBaseChange)
	{
		uFnBaseChange = UFunction::FindFunction("Function DishonoredGame.DisPickup_Base.BaseChange");
	}

	ADisPickup_Base_eventBaseChange_Params BaseChange_Params;
	memset(&BaseChange_Params, 0, sizeof(BaseChange_Params));

	this->ProcessEvent(uFnBaseChange, &BaseChange_Params, nullptr);
};

// Function DishonoredGame.DisWhaleBoneCharm.OnSetBoneCharmEffect
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43979])
// Parameter Info:
// class UDisSeqAct_SetBoneCharmEffect* _pAction                       (CPF_Parm)

void ADisWhaleBoneCharm::OnSetBoneCharmEffect(class UDisSeqAct_SetBoneCharmEffect* _pAction)
{
	static UFunction* uFnOnSetBoneCharmEffect = nullptr;

	if (!uFnOnSetBoneCharmEffect)
	{
		uFnOnSetBoneCharmEffect = UFunction::FindFunction("Function DishonoredGame.DisWhaleBoneCharm.OnSetBoneCharmEffect");
	}

	ADisWhaleBoneCharm_execOnSetBoneCharmEffect_Params OnSetBoneCharmEffect_Params;
	memset(&OnSetBoneCharmEffect_Params, 0, sizeof(OnSetBoneCharmEffect_Params));
	OnSetBoneCharmEffect_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnSetBoneCharmEffect, &OnSetBoneCharmEffect_Params, nullptr);
};

// Function DishonoredGame.DisWallOfLight.TakeDamage
// [0x00024C00] (FUNC_Native | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[13766])
// Parameter Info:
// int32_t                        DamageAmount                   (CPF_Parm)
// class AController*             EventInstigator                (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 Momentum                       (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_OptionalParm | CPF_Parm)
// class AActor*                  DamageCauser                   (CPF_OptionalParm | CPF_Parm)

void ADisWallOfLight::eventTakeDamage(int32_t DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static UFunction* uFnTakeDamage = nullptr;

	if (!uFnTakeDamage)
	{
		uFnTakeDamage = UFunction::FindFunction("Function DishonoredGame.DisWallOfLight.TakeDamage");
	}

	ADisWallOfLight_eventTakeDamage_Params TakeDamage_Params;
	memset(&TakeDamage_Params, 0, sizeof(TakeDamage_Params));
	memcpy_s(&TakeDamage_Params.DamageAmount, sizeof(TakeDamage_Params.DamageAmount), &DamageAmount, sizeof(DamageAmount));
	TakeDamage_Params.EventInstigator = EventInstigator;
	memcpy_s(&TakeDamage_Params.HitLocation, sizeof(TakeDamage_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&TakeDamage_Params.Momentum, sizeof(TakeDamage_Params.Momentum), &Momentum, sizeof(Momentum));
	TakeDamage_Params.DamageType = DamageType;
	memcpy_s(&TakeDamage_Params.HitInfo, sizeof(TakeDamage_Params.HitInfo), &HitInfo, sizeof(HitInfo));
	TakeDamage_Params.DamageCauser = DamageCauser;

	this->ProcessEvent(uFnTakeDamage, &TakeDamage_Params, nullptr);
};

// Function DishonoredGame.DisWallOfLight.TakeDamage_Native
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[45311])
// Parameter Info:
// int32_t                        DamageAmount                   (CPF_Parm)
// class AController*             EventInstigator                (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 Momentum                       (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_OptionalParm | CPF_Parm)
// class AActor*                  DamageCauser                   (CPF_OptionalParm | CPF_Parm)

void ADisWallOfLight::TakeDamage_Native(int32_t DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static UFunction* uFnTakeDamage_Native = nullptr;

	if (!uFnTakeDamage_Native)
	{
		uFnTakeDamage_Native = UFunction::FindFunction("Function DishonoredGame.DisWallOfLight.TakeDamage_Native");
	}

	ADisWallOfLight_execTakeDamage_Native_Params TakeDamage_Native_Params;
	memset(&TakeDamage_Native_Params, 0, sizeof(TakeDamage_Native_Params));
	memcpy_s(&TakeDamage_Native_Params.DamageAmount, sizeof(TakeDamage_Native_Params.DamageAmount), &DamageAmount, sizeof(DamageAmount));
	TakeDamage_Native_Params.EventInstigator = EventInstigator;
	memcpy_s(&TakeDamage_Native_Params.HitLocation, sizeof(TakeDamage_Native_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&TakeDamage_Native_Params.Momentum, sizeof(TakeDamage_Native_Params.Momentum), &Momentum, sizeof(Momentum));
	TakeDamage_Native_Params.DamageType = DamageType;
	memcpy_s(&TakeDamage_Native_Params.HitInfo, sizeof(TakeDamage_Native_Params.HitInfo), &HitInfo, sizeof(HitInfo));
	TakeDamage_Native_Params.DamageCauser = DamageCauser;

	this->ProcessEvent(uFnTakeDamage_Native, &TakeDamage_Native_Params, nullptr);
};

// Function DishonoredGame.DisSeqVar_Task.GetObjectValue
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[20659])
// Parameter Info:
// class UObject*                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UObject* UDisSeqVar_Task::GetObjectValueW()
{
	static UFunction* uFnGetObjectValueW = nullptr;

	if (!uFnGetObjectValueW)
	{
		uFnGetObjectValueW = UFunction::FindFunction("Function DishonoredGame.DisSeqVar_Task.GetObjectValue");
	}

	UDisSeqVar_Task_execGetObjectValueW_Params GetObjectValueW_Params;
	memset(&GetObjectValueW_Params, 0, sizeof(GetObjectValueW_Params));

	this->ProcessEvent(uFnGetObjectValueW, &GetObjectValueW_Params, nullptr);

	return GetObjectValueW_Params.ReturnValue;
};

// Function DishonoredGame.DisGameCrowdAgentSkeletalRat.TakeDamage
// [0x00024C00] (FUNC_Native | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[13766])
// Parameter Info:
// int32_t                        DamageAmount                   (CPF_Parm)
// class AController*             EventInstigator                (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 Momentum                       (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_OptionalParm | CPF_Parm)
// class AActor*                  DamageCauser                   (CPF_OptionalParm | CPF_Parm)

void ADisGameCrowdAgentSkeletalRat::eventTakeDamage(int32_t DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static UFunction* uFnTakeDamage = nullptr;

	if (!uFnTakeDamage)
	{
		uFnTakeDamage = UFunction::FindFunction("Function DishonoredGame.DisGameCrowdAgentSkeletalRat.TakeDamage");
	}

	ADisGameCrowdAgentSkeletalRat_eventTakeDamage_Params TakeDamage_Params;
	memset(&TakeDamage_Params, 0, sizeof(TakeDamage_Params));
	memcpy_s(&TakeDamage_Params.DamageAmount, sizeof(TakeDamage_Params.DamageAmount), &DamageAmount, sizeof(DamageAmount));
	TakeDamage_Params.EventInstigator = EventInstigator;
	memcpy_s(&TakeDamage_Params.HitLocation, sizeof(TakeDamage_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&TakeDamage_Params.Momentum, sizeof(TakeDamage_Params.Momentum), &Momentum, sizeof(Momentum));
	TakeDamage_Params.DamageType = DamageType;
	memcpy_s(&TakeDamage_Params.HitInfo, sizeof(TakeDamage_Params.HitInfo), &HitInfo, sizeof(HitInfo));
	TakeDamage_Params.DamageCauser = DamageCauser;

	this->ProcessEvent(uFnTakeDamage, &TakeDamage_Params, nullptr);
};

// Function DishonoredGame.DisGameCrowdAgentSkeletalRat.TakeDamage_Native
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[45311])
// Parameter Info:
// int32_t                        DamageAmount                   (CPF_Parm)
// class AController*             EventInstigator                (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 Momentum                       (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_OptionalParm | CPF_Parm)
// class AActor*                  DamageCauser                   (CPF_OptionalParm | CPF_Parm)

void ADisGameCrowdAgentSkeletalRat::TakeDamage_Native(int32_t DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static UFunction* uFnTakeDamage_Native = nullptr;

	if (!uFnTakeDamage_Native)
	{
		uFnTakeDamage_Native = UFunction::FindFunction("Function DishonoredGame.DisGameCrowdAgentSkeletalRat.TakeDamage_Native");
	}

	ADisGameCrowdAgentSkeletalRat_execTakeDamage_Native_Params TakeDamage_Native_Params;
	memset(&TakeDamage_Native_Params, 0, sizeof(TakeDamage_Native_Params));
	memcpy_s(&TakeDamage_Native_Params.DamageAmount, sizeof(TakeDamage_Native_Params.DamageAmount), &DamageAmount, sizeof(DamageAmount));
	TakeDamage_Native_Params.EventInstigator = EventInstigator;
	memcpy_s(&TakeDamage_Native_Params.HitLocation, sizeof(TakeDamage_Native_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&TakeDamage_Native_Params.Momentum, sizeof(TakeDamage_Native_Params.Momentum), &Momentum, sizeof(Momentum));
	TakeDamage_Native_Params.DamageType = DamageType;
	memcpy_s(&TakeDamage_Native_Params.HitInfo, sizeof(TakeDamage_Native_Params.HitInfo), &HitInfo, sizeof(HitInfo));
	TakeDamage_Native_Params.DamageCauser = DamageCauser;

	this->ProcessEvent(uFnTakeDamage_Native, &TakeDamage_Native_Params, nullptr);
};

// Function DishonoredGame.DisGameCrowdAgentSkeletalRat.PlayParticleEffect
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[13684])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UAnimNotify_PlayParticleEffect* AnimNotifyData                 (CPF_Const | CPF_Parm)

bool ADisGameCrowdAgentSkeletalRat::eventPlayParticleEffect(class UAnimNotify_PlayParticleEffect* AnimNotifyData)
{
	static UFunction* uFnPlayParticleEffect = nullptr;

	if (!uFnPlayParticleEffect)
	{
		uFnPlayParticleEffect = UFunction::FindFunction("Function DishonoredGame.DisGameCrowdAgentSkeletalRat.PlayParticleEffect");
	}

	ADisGameCrowdAgentSkeletalRat_eventPlayParticleEffect_Params PlayParticleEffect_Params;
	memset(&PlayParticleEffect_Params, 0, sizeof(PlayParticleEffect_Params));
	PlayParticleEffect_Params.AnimNotifyData = AnimNotifyData;

	this->ProcessEvent(uFnPlayParticleEffect, &PlayParticleEffect_Params, nullptr);

	return PlayParticleEffect_Params.ReturnValue;
};

// Function DishonoredGame.DisRatSpawner.OnActivateRatSpawner
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43862])
// Parameter Info:
// class UDisSeqAct_ActivateRatSpawner* _pAction                       (CPF_Parm)

void ADisRatSpawner::OnActivateRatSpawner(class UDisSeqAct_ActivateRatSpawner* _pAction)
{
	static UFunction* uFnOnActivateRatSpawner = nullptr;

	if (!uFnOnActivateRatSpawner)
	{
		uFnOnActivateRatSpawner = UFunction::FindFunction("Function DishonoredGame.DisRatSpawner.OnActivateRatSpawner");
	}

	ADisRatSpawner_execOnActivateRatSpawner_Params OnActivateRatSpawner_Params;
	memset(&OnActivateRatSpawner_Params, 0, sizeof(OnActivateRatSpawner_Params));
	OnActivateRatSpawner_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnActivateRatSpawner, &OnActivateRatSpawner_Params, nullptr);
};

// Function DishonoredGame.DisRatRepulsor.OnToggle
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[23663])
// Parameter Info:
// class USeqAct_Toggle*          _pAction                       (CPF_Parm)

void ADisRatRepulsor::OnToggle(class USeqAct_Toggle* _pAction)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function DishonoredGame.DisRatRepulsor.OnToggle");
	}

	ADisRatRepulsor_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	OnToggle_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function DishonoredGame.DisEmitterCameraLensEffect_Looping.ActivateLensEffect
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ADisEmitterCameraLensEffect_Looping::ActivateLensEffect()
{
	static UFunction* uFnActivateLensEffect = nullptr;

	if (!uFnActivateLensEffect)
	{
		uFnActivateLensEffect = UFunction::FindFunction("Function DishonoredGame.DisEmitterCameraLensEffect_Looping.ActivateLensEffect");
	}

	ADisEmitterCameraLensEffect_Looping_execActivateLensEffect_Params ActivateLensEffect_Params;
	memset(&ActivateLensEffect_Params, 0, sizeof(ActivateLensEffect_Params));

	this->ProcessEvent(uFnActivateLensEffect, &ActivateLensEffect_Params, nullptr);
};

// Function DishonoredGame.DisEmitterCameraLensEffect_Looping.EnabledFromScript
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34726])
// Parameter Info:

void ADisEmitterCameraLensEffect_Looping::EnabledFromScript()
{
	static UFunction* uFnEnabledFromScript = nullptr;

	if (!uFnEnabledFromScript)
	{
		uFnEnabledFromScript = UFunction::FindFunction("Function DishonoredGame.DisEmitterCameraLensEffect_Looping.EnabledFromScript");
	}

	ADisEmitterCameraLensEffect_Looping_execEnabledFromScript_Params EnabledFromScript_Params;
	memset(&EnabledFromScript_Params, 0, sizeof(EnabledFromScript_Params));

	this->ProcessEvent(uFnEnabledFromScript, &EnabledFromScript_Params, nullptr);
};

// Function DishonoredGame.DisEmitterCameraLensEffect_Looping.NotifyRetriggered
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[23399])
// Parameter Info:

void ADisEmitterCameraLensEffect_Looping::NotifyRetriggered()
{
	static UFunction* uFnNotifyRetriggered = nullptr;

	if (!uFnNotifyRetriggered)
	{
		uFnNotifyRetriggered = UFunction::FindFunction("Function DishonoredGame.DisEmitterCameraLensEffect_Looping.NotifyRetriggered");
	}

	ADisEmitterCameraLensEffect_Looping_execNotifyRetriggered_Params NotifyRetriggered_Params;
	memset(&NotifyRetriggered_Params, 0, sizeof(NotifyRetriggered_Params));

	this->ProcessEvent(uFnNotifyRetriggered, &NotifyRetriggered_Params, nullptr);
};

// Function DishonoredGame.DisFleePointActor.OnToggle
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[23663])
// Parameter Info:
// class USeqAct_Toggle*          _pAction                       (CPF_Parm)

void ADisFleePointActor::OnToggle(class USeqAct_Toggle* _pAction)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function DishonoredGame.DisFleePointActor.OnToggle");
	}

	ADisFleePointActor_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	OnToggle_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function DishonoredGame.DisGlobalMusicManager.TickCallback_Chase
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45356])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// float                          _fDeltaSeconds                 (CPF_Parm)

void UDisGlobalMusicManager::TickCallback_Chase(class UDishonoredNativeState* _pThisState, float _fDeltaSeconds)
{
	static UFunction* uFnTickCallback_Chase = nullptr;

	if (!uFnTickCallback_Chase)
	{
		uFnTickCallback_Chase = UFunction::FindFunction("Function DishonoredGame.DisGlobalMusicManager.TickCallback_Chase");
	}

	UDisGlobalMusicManager_execTickCallback_Chase_Params TickCallback_Chase_Params;
	memset(&TickCallback_Chase_Params, 0, sizeof(TickCallback_Chase_Params));
	TickCallback_Chase_Params._pThisState = _pThisState;
	memcpy_s(&TickCallback_Chase_Params._fDeltaSeconds, sizeof(TickCallback_Chase_Params._fDeltaSeconds), &_fDeltaSeconds, sizeof(_fDeltaSeconds));

	this->ProcessEvent(uFnTickCallback_Chase, &TickCallback_Chase_Params, nullptr);
};

// Function DishonoredGame.DisGlobalMusicManager.TickCallback_Combat
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45357])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// float                          _fDeltaSeconds                 (CPF_Parm)

void UDisGlobalMusicManager::TickCallback_Combat(class UDishonoredNativeState* _pThisState, float _fDeltaSeconds)
{
	static UFunction* uFnTickCallback_Combat = nullptr;

	if (!uFnTickCallback_Combat)
	{
		uFnTickCallback_Combat = UFunction::FindFunction("Function DishonoredGame.DisGlobalMusicManager.TickCallback_Combat");
	}

	UDisGlobalMusicManager_execTickCallback_Combat_Params TickCallback_Combat_Params;
	memset(&TickCallback_Combat_Params, 0, sizeof(TickCallback_Combat_Params));
	TickCallback_Combat_Params._pThisState = _pThisState;
	memcpy_s(&TickCallback_Combat_Params._fDeltaSeconds, sizeof(TickCallback_Combat_Params._fDeltaSeconds), &_fDeltaSeconds, sizeof(_fDeltaSeconds));

	this->ProcessEvent(uFnTickCallback_Combat, &TickCallback_Combat_Params, nullptr);
};

// Function DishonoredGame.DisGlobalMusicManager.TickCallback_RatAttack
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45359])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// float                          _fDeltaSeconds                 (CPF_Parm)

void UDisGlobalMusicManager::TickCallback_RatAttack(class UDishonoredNativeState* _pThisState, float _fDeltaSeconds)
{
	static UFunction* uFnTickCallback_RatAttack = nullptr;

	if (!uFnTickCallback_RatAttack)
	{
		uFnTickCallback_RatAttack = UFunction::FindFunction("Function DishonoredGame.DisGlobalMusicManager.TickCallback_RatAttack");
	}

	UDisGlobalMusicManager_execTickCallback_RatAttack_Params TickCallback_RatAttack_Params;
	memset(&TickCallback_RatAttack_Params, 0, sizeof(TickCallback_RatAttack_Params));
	TickCallback_RatAttack_Params._pThisState = _pThisState;
	memcpy_s(&TickCallback_RatAttack_Params._fDeltaSeconds, sizeof(TickCallback_RatAttack_Params._fDeltaSeconds), &_fDeltaSeconds, sizeof(_fDeltaSeconds));

	this->ProcessEvent(uFnTickCallback_RatAttack, &TickCallback_RatAttack_Params, nullptr);
};

// Function DishonoredGame.DisGlobalMusicManager.TickCallback_Suspense
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45362])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// float                          _fDeltaSeconds                 (CPF_Parm)

void UDisGlobalMusicManager::TickCallback_Suspense(class UDishonoredNativeState* _pThisState, float _fDeltaSeconds)
{
	static UFunction* uFnTickCallback_Suspense = nullptr;

	if (!uFnTickCallback_Suspense)
	{
		uFnTickCallback_Suspense = UFunction::FindFunction("Function DishonoredGame.DisGlobalMusicManager.TickCallback_Suspense");
	}

	UDisGlobalMusicManager_execTickCallback_Suspense_Params TickCallback_Suspense_Params;
	memset(&TickCallback_Suspense_Params, 0, sizeof(TickCallback_Suspense_Params));
	TickCallback_Suspense_Params._pThisState = _pThisState;
	memcpy_s(&TickCallback_Suspense_Params._fDeltaSeconds, sizeof(TickCallback_Suspense_Params._fDeltaSeconds), &_fDeltaSeconds, sizeof(_fDeltaSeconds));

	this->ProcessEvent(uFnTickCallback_Suspense, &TickCallback_Suspense_Params, nullptr);
};

// Function DishonoredGame.DisGlobalMusicManager.TickCallback_Exploration
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45358])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// float                          _fDeltaSeconds                 (CPF_Parm)

void UDisGlobalMusicManager::TickCallback_Exploration(class UDishonoredNativeState* _pThisState, float _fDeltaSeconds)
{
	static UFunction* uFnTickCallback_Exploration = nullptr;

	if (!uFnTickCallback_Exploration)
	{
		uFnTickCallback_Exploration = UFunction::FindFunction("Function DishonoredGame.DisGlobalMusicManager.TickCallback_Exploration");
	}

	UDisGlobalMusicManager_execTickCallback_Exploration_Params TickCallback_Exploration_Params;
	memset(&TickCallback_Exploration_Params, 0, sizeof(TickCallback_Exploration_Params));
	TickCallback_Exploration_Params._pThisState = _pThisState;
	memcpy_s(&TickCallback_Exploration_Params._fDeltaSeconds, sizeof(TickCallback_Exploration_Params._fDeltaSeconds), &_fDeltaSeconds, sizeof(_fDeltaSeconds));

	this->ProcessEvent(uFnTickCallback_Exploration, &TickCallback_Exploration_Params, nullptr);
};

// Function DishonoredGame.DisMusicState_Base.TickCallback
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// float                          _fDeltaSeconds                 (CPF_Parm)

void UDisMusicState_Base::TickCallback(class UDishonoredNativeState* _pThisState, float _fDeltaSeconds)
{
	static UFunction* uFnTickCallback = nullptr;

	if (!uFnTickCallback)
	{
		uFnTickCallback = UFunction::FindFunction("Function DishonoredGame.DisMusicState_Base.TickCallback");
	}

	UDisMusicState_Base_execTickCallback_Params TickCallback_Params;
	memset(&TickCallback_Params, 0, sizeof(TickCallback_Params));
	TickCallback_Params._pThisState = _pThisState;
	memcpy_s(&TickCallback_Params._fDeltaSeconds, sizeof(TickCallback_Params._fDeltaSeconds), &_fDeltaSeconds, sizeof(_fDeltaSeconds));

	this->ProcessEvent(uFnTickCallback, &TickCallback_Params, nullptr);
};

// Function DishonoredGame.DisSeqEvent_Assassinated.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UDisSeqEvent_Assassinated::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function DishonoredGame.DisSeqEvent_Assassinated.GetObjClassVersion");
	}

	UDisSeqEvent_Assassinated_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));

	UDisSeqEvent_Assassinated::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function DishonoredGame.DisBehaviorSearch.TickCallback_StareAtUnreachable
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45361])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// float                          _fDeltaSeconds                 (CPF_Parm)

void UDisBehaviorSearch::TickCallback_StareAtUnreachable(class UDishonoredNativeState* _pThisState, float _fDeltaSeconds)
{
	static UFunction* uFnTickCallback_StareAtUnreachable = nullptr;

	if (!uFnTickCallback_StareAtUnreachable)
	{
		uFnTickCallback_StareAtUnreachable = UFunction::FindFunction("Function DishonoredGame.DisBehaviorSearch.TickCallback_StareAtUnreachable");
	}

	UDisBehaviorSearch_execTickCallback_StareAtUnreachable_Params TickCallback_StareAtUnreachable_Params;
	memset(&TickCallback_StareAtUnreachable_Params, 0, sizeof(TickCallback_StareAtUnreachable_Params));
	TickCallback_StareAtUnreachable_Params._pThisState = _pThisState;
	memcpy_s(&TickCallback_StareAtUnreachable_Params._fDeltaSeconds, sizeof(TickCallback_StareAtUnreachable_Params._fDeltaSeconds), &_fDeltaSeconds, sizeof(_fDeltaSeconds));

	this->ProcessEvent(uFnTickCallback_StareAtUnreachable, &TickCallback_StareAtUnreachable_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorSearch.OnEnterCallback_StareAtUnreachable
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43906])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorSearch::OnEnterCallback_StareAtUnreachable(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_StareAtUnreachable = nullptr;

	if (!uFnOnEnterCallback_StareAtUnreachable)
	{
		uFnOnEnterCallback_StareAtUnreachable = UFunction::FindFunction("Function DishonoredGame.DisBehaviorSearch.OnEnterCallback_StareAtUnreachable");
	}

	UDisBehaviorSearch_execOnEnterCallback_StareAtUnreachable_Params OnEnterCallback_StareAtUnreachable_Params;
	memset(&OnEnterCallback_StareAtUnreachable_Params, 0, sizeof(OnEnterCallback_StareAtUnreachable_Params));
	OnEnterCallback_StareAtUnreachable_Params._pThisState = _pThisState;
	OnEnterCallback_StareAtUnreachable_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_StareAtUnreachable, &OnEnterCallback_StareAtUnreachable_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorSearch.OnExitCallback_Stand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43915])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pNextState                    (CPF_Parm)

void UDisBehaviorSearch::OnExitCallback_Stand(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pNextState)
{
	static UFunction* uFnOnExitCallback_Stand = nullptr;

	if (!uFnOnExitCallback_Stand)
	{
		uFnOnExitCallback_Stand = UFunction::FindFunction("Function DishonoredGame.DisBehaviorSearch.OnExitCallback_Stand");
	}

	UDisBehaviorSearch_execOnExitCallback_Stand_Params OnExitCallback_Stand_Params;
	memset(&OnExitCallback_Stand_Params, 0, sizeof(OnExitCallback_Stand_Params));
	OnExitCallback_Stand_Params._pThisState = _pThisState;
	OnExitCallback_Stand_Params._pNextState = _pNextState;

	this->ProcessEvent(uFnOnExitCallback_Stand, &OnExitCallback_Stand_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorSearch.RequestStateExitCallback_Stand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44744])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorSearch::RequestStateExitCallback_Stand(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_Stand = nullptr;

	if (!uFnRequestStateExitCallback_Stand)
	{
		uFnRequestStateExitCallback_Stand = UFunction::FindFunction("Function DishonoredGame.DisBehaviorSearch.RequestStateExitCallback_Stand");
	}

	UDisBehaviorSearch_execRequestStateExitCallback_Stand_Params RequestStateExitCallback_Stand_Params;
	memset(&RequestStateExitCallback_Stand_Params, 0, sizeof(RequestStateExitCallback_Stand_Params));
	RequestStateExitCallback_Stand_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_Stand, &RequestStateExitCallback_Stand_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorSearch.TickCallback_Stand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45360])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// float                          _fDeltaSeconds                 (CPF_Parm)

void UDisBehaviorSearch::TickCallback_Stand(class UDishonoredNativeState* _pThisState, float _fDeltaSeconds)
{
	static UFunction* uFnTickCallback_Stand = nullptr;

	if (!uFnTickCallback_Stand)
	{
		uFnTickCallback_Stand = UFunction::FindFunction("Function DishonoredGame.DisBehaviorSearch.TickCallback_Stand");
	}

	UDisBehaviorSearch_execTickCallback_Stand_Params TickCallback_Stand_Params;
	memset(&TickCallback_Stand_Params, 0, sizeof(TickCallback_Stand_Params));
	TickCallback_Stand_Params._pThisState = _pThisState;
	memcpy_s(&TickCallback_Stand_Params._fDeltaSeconds, sizeof(TickCallback_Stand_Params._fDeltaSeconds), &_fDeltaSeconds, sizeof(_fDeltaSeconds));

	this->ProcessEvent(uFnTickCallback_Stand, &TickCallback_Stand_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorSearch.OnEnterCallback_Stand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43905])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorSearch::OnEnterCallback_Stand(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_Stand = nullptr;

	if (!uFnOnEnterCallback_Stand)
	{
		uFnOnEnterCallback_Stand = UFunction::FindFunction("Function DishonoredGame.DisBehaviorSearch.OnEnterCallback_Stand");
	}

	UDisBehaviorSearch_execOnEnterCallback_Stand_Params OnEnterCallback_Stand_Params;
	memset(&OnEnterCallback_Stand_Params, 0, sizeof(OnEnterCallback_Stand_Params));
	OnEnterCallback_Stand_Params._pThisState = _pThisState;
	OnEnterCallback_Stand_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_Stand, &OnEnterCallback_Stand_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorSearch.OnExitCallback_GenericAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43911])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pNextState                    (CPF_Parm)

void UDisBehaviorSearch::OnExitCallback_GenericAction(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pNextState)
{
	static UFunction* uFnOnExitCallback_GenericAction = nullptr;

	if (!uFnOnExitCallback_GenericAction)
	{
		uFnOnExitCallback_GenericAction = UFunction::FindFunction("Function DishonoredGame.DisBehaviorSearch.OnExitCallback_GenericAction");
	}

	UDisBehaviorSearch_execOnExitCallback_GenericAction_Params OnExitCallback_GenericAction_Params;
	memset(&OnExitCallback_GenericAction_Params, 0, sizeof(OnExitCallback_GenericAction_Params));
	OnExitCallback_GenericAction_Params._pThisState = _pThisState;
	OnExitCallback_GenericAction_Params._pNextState = _pNextState;

	this->ProcessEvent(uFnOnExitCallback_GenericAction, &OnExitCallback_GenericAction_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorSearch.RequestStateExitCallback_GenericAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44741])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorSearch::RequestStateExitCallback_GenericAction(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_GenericAction = nullptr;

	if (!uFnRequestStateExitCallback_GenericAction)
	{
		uFnRequestStateExitCallback_GenericAction = UFunction::FindFunction("Function DishonoredGame.DisBehaviorSearch.RequestStateExitCallback_GenericAction");
	}

	UDisBehaviorSearch_execRequestStateExitCallback_GenericAction_Params RequestStateExitCallback_GenericAction_Params;
	memset(&RequestStateExitCallback_GenericAction_Params, 0, sizeof(RequestStateExitCallback_GenericAction_Params));
	RequestStateExitCallback_GenericAction_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_GenericAction, &RequestStateExitCallback_GenericAction_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorSearch.OnEnterCallback_GenericAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43901])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorSearch::OnEnterCallback_GenericAction(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_GenericAction = nullptr;

	if (!uFnOnEnterCallback_GenericAction)
	{
		uFnOnEnterCallback_GenericAction = UFunction::FindFunction("Function DishonoredGame.DisBehaviorSearch.OnEnterCallback_GenericAction");
	}

	UDisBehaviorSearch_execOnEnterCallback_GenericAction_Params OnEnterCallback_GenericAction_Params;
	memset(&OnEnterCallback_GenericAction_Params, 0, sizeof(OnEnterCallback_GenericAction_Params));
	OnEnterCallback_GenericAction_Params._pThisState = _pThisState;
	OnEnterCallback_GenericAction_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_GenericAction, &OnEnterCallback_GenericAction_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorSearch.OnExitCallback_TrackTarget
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43918])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pNextState                    (CPF_Parm)

void UDisBehaviorSearch::OnExitCallback_TrackTarget(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pNextState)
{
	static UFunction* uFnOnExitCallback_TrackTarget = nullptr;

	if (!uFnOnExitCallback_TrackTarget)
	{
		uFnOnExitCallback_TrackTarget = UFunction::FindFunction("Function DishonoredGame.DisBehaviorSearch.OnExitCallback_TrackTarget");
	}

	UDisBehaviorSearch_execOnExitCallback_TrackTarget_Params OnExitCallback_TrackTarget_Params;
	memset(&OnExitCallback_TrackTarget_Params, 0, sizeof(OnExitCallback_TrackTarget_Params));
	OnExitCallback_TrackTarget_Params._pThisState = _pThisState;
	OnExitCallback_TrackTarget_Params._pNextState = _pNextState;

	this->ProcessEvent(uFnOnExitCallback_TrackTarget, &OnExitCallback_TrackTarget_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorSearch.OnEnterCallback_TrackTarget
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43908])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorSearch::OnEnterCallback_TrackTarget(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_TrackTarget = nullptr;

	if (!uFnOnEnterCallback_TrackTarget)
	{
		uFnOnEnterCallback_TrackTarget = UFunction::FindFunction("Function DishonoredGame.DisBehaviorSearch.OnEnterCallback_TrackTarget");
	}

	UDisBehaviorSearch_execOnEnterCallback_TrackTarget_Params OnEnterCallback_TrackTarget_Params;
	memset(&OnEnterCallback_TrackTarget_Params, 0, sizeof(OnEnterCallback_TrackTarget_Params));
	OnEnterCallback_TrackTarget_Params._pThisState = _pThisState;
	OnEnterCallback_TrackTarget_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_TrackTarget, &OnEnterCallback_TrackTarget_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorSearch.OnExitCallback_Investigate
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43913])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pNextState                    (CPF_Parm)

void UDisBehaviorSearch::OnExitCallback_Investigate(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pNextState)
{
	static UFunction* uFnOnExitCallback_Investigate = nullptr;

	if (!uFnOnExitCallback_Investigate)
	{
		uFnOnExitCallback_Investigate = UFunction::FindFunction("Function DishonoredGame.DisBehaviorSearch.OnExitCallback_Investigate");
	}

	UDisBehaviorSearch_execOnExitCallback_Investigate_Params OnExitCallback_Investigate_Params;
	memset(&OnExitCallback_Investigate_Params, 0, sizeof(OnExitCallback_Investigate_Params));
	OnExitCallback_Investigate_Params._pThisState = _pThisState;
	OnExitCallback_Investigate_Params._pNextState = _pNextState;

	this->ProcessEvent(uFnOnExitCallback_Investigate, &OnExitCallback_Investigate_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorSearch.RequestStateExitCallback_Investigate
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44742])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorSearch::RequestStateExitCallback_Investigate(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_Investigate = nullptr;

	if (!uFnRequestStateExitCallback_Investigate)
	{
		uFnRequestStateExitCallback_Investigate = UFunction::FindFunction("Function DishonoredGame.DisBehaviorSearch.RequestStateExitCallback_Investigate");
	}

	UDisBehaviorSearch_execRequestStateExitCallback_Investigate_Params RequestStateExitCallback_Investigate_Params;
	memset(&RequestStateExitCallback_Investigate_Params, 0, sizeof(RequestStateExitCallback_Investigate_Params));
	RequestStateExitCallback_Investigate_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_Investigate, &RequestStateExitCallback_Investigate_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorSearch.OnEnterCallback_Investigate
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43903])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorSearch::OnEnterCallback_Investigate(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_Investigate = nullptr;

	if (!uFnOnEnterCallback_Investigate)
	{
		uFnOnEnterCallback_Investigate = UFunction::FindFunction("Function DishonoredGame.DisBehaviorSearch.OnEnterCallback_Investigate");
	}

	UDisBehaviorSearch_execOnEnterCallback_Investigate_Params OnEnterCallback_Investigate_Params;
	memset(&OnEnterCallback_Investigate_Params, 0, sizeof(OnEnterCallback_Investigate_Params));
	OnEnterCallback_Investigate_Params._pThisState = _pThisState;
	OnEnterCallback_Investigate_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_Investigate, &OnEnterCallback_Investigate_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorPatrolSearch.OnEnterCallback_Stand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43905])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorPatrolSearch::OnEnterCallback_Stand(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_Stand = nullptr;

	if (!uFnOnEnterCallback_Stand)
	{
		uFnOnEnterCallback_Stand = UFunction::FindFunction("Function DishonoredGame.DisBehaviorPatrolSearch.OnEnterCallback_Stand");
	}

	UDisBehaviorPatrolSearch_execOnEnterCallback_Stand_Params OnEnterCallback_Stand_Params;
	memset(&OnEnterCallback_Stand_Params, 0, sizeof(OnEnterCallback_Stand_Params));
	OnEnterCallback_Stand_Params._pThisState = _pThisState;
	OnEnterCallback_Stand_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_Stand, &OnEnterCallback_Stand_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorTriggerAlarm.OnExitCallback_GenericAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43911])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pNextState                    (CPF_Parm)

void UDisBehaviorTriggerAlarm::OnExitCallback_GenericAction(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pNextState)
{
	static UFunction* uFnOnExitCallback_GenericAction = nullptr;

	if (!uFnOnExitCallback_GenericAction)
	{
		uFnOnExitCallback_GenericAction = UFunction::FindFunction("Function DishonoredGame.DisBehaviorTriggerAlarm.OnExitCallback_GenericAction");
	}

	UDisBehaviorTriggerAlarm_execOnExitCallback_GenericAction_Params OnExitCallback_GenericAction_Params;
	memset(&OnExitCallback_GenericAction_Params, 0, sizeof(OnExitCallback_GenericAction_Params));
	OnExitCallback_GenericAction_Params._pThisState = _pThisState;
	OnExitCallback_GenericAction_Params._pNextState = _pNextState;

	this->ProcessEvent(uFnOnExitCallback_GenericAction, &OnExitCallback_GenericAction_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorTriggerAlarm.RequestStateExitCallback_GenericAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44741])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorTriggerAlarm::RequestStateExitCallback_GenericAction(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_GenericAction = nullptr;

	if (!uFnRequestStateExitCallback_GenericAction)
	{
		uFnRequestStateExitCallback_GenericAction = UFunction::FindFunction("Function DishonoredGame.DisBehaviorTriggerAlarm.RequestStateExitCallback_GenericAction");
	}

	UDisBehaviorTriggerAlarm_execRequestStateExitCallback_GenericAction_Params RequestStateExitCallback_GenericAction_Params;
	memset(&RequestStateExitCallback_GenericAction_Params, 0, sizeof(RequestStateExitCallback_GenericAction_Params));
	RequestStateExitCallback_GenericAction_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_GenericAction, &RequestStateExitCallback_GenericAction_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorTriggerAlarm.OnEnterCallback_GenericAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43901])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorTriggerAlarm::OnEnterCallback_GenericAction(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_GenericAction = nullptr;

	if (!uFnOnEnterCallback_GenericAction)
	{
		uFnOnEnterCallback_GenericAction = UFunction::FindFunction("Function DishonoredGame.DisBehaviorTriggerAlarm.OnEnterCallback_GenericAction");
	}

	UDisBehaviorTriggerAlarm_execOnEnterCallback_GenericAction_Params OnEnterCallback_GenericAction_Params;
	memset(&OnEnterCallback_GenericAction_Params, 0, sizeof(OnEnterCallback_GenericAction_Params));
	OnEnterCallback_GenericAction_Params._pThisState = _pThisState;
	OnEnterCallback_GenericAction_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_GenericAction, &OnEnterCallback_GenericAction_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorTriggerAlarm.OnExitCallback_TakePosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43917])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pNextState                    (CPF_Parm)

void UDisBehaviorTriggerAlarm::OnExitCallback_TakePosition(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pNextState)
{
	static UFunction* uFnOnExitCallback_TakePosition = nullptr;

	if (!uFnOnExitCallback_TakePosition)
	{
		uFnOnExitCallback_TakePosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorTriggerAlarm.OnExitCallback_TakePosition");
	}

	UDisBehaviorTriggerAlarm_execOnExitCallback_TakePosition_Params OnExitCallback_TakePosition_Params;
	memset(&OnExitCallback_TakePosition_Params, 0, sizeof(OnExitCallback_TakePosition_Params));
	OnExitCallback_TakePosition_Params._pThisState = _pThisState;
	OnExitCallback_TakePosition_Params._pNextState = _pNextState;

	this->ProcessEvent(uFnOnExitCallback_TakePosition, &OnExitCallback_TakePosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorTriggerAlarm.RequestStateExitCallback_TakePosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44746])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisBehaviorTriggerAlarm::RequestStateExitCallback_TakePosition(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_TakePosition = nullptr;

	if (!uFnRequestStateExitCallback_TakePosition)
	{
		uFnRequestStateExitCallback_TakePosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorTriggerAlarm.RequestStateExitCallback_TakePosition");
	}

	UDisBehaviorTriggerAlarm_execRequestStateExitCallback_TakePosition_Params RequestStateExitCallback_TakePosition_Params;
	memset(&RequestStateExitCallback_TakePosition_Params, 0, sizeof(RequestStateExitCallback_TakePosition_Params));
	RequestStateExitCallback_TakePosition_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_TakePosition, &RequestStateExitCallback_TakePosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorTriggerAlarm.RefreshCallback_TakePosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44678])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fDeltaSeconds                 (CPF_Parm)

void UDisBehaviorTriggerAlarm::RefreshCallback_TakePosition(class UDisAISubState* _pThisState, float _fDeltaSeconds)
{
	static UFunction* uFnRefreshCallback_TakePosition = nullptr;

	if (!uFnRefreshCallback_TakePosition)
	{
		uFnRefreshCallback_TakePosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorTriggerAlarm.RefreshCallback_TakePosition");
	}

	UDisBehaviorTriggerAlarm_execRefreshCallback_TakePosition_Params RefreshCallback_TakePosition_Params;
	memset(&RefreshCallback_TakePosition_Params, 0, sizeof(RefreshCallback_TakePosition_Params));
	RefreshCallback_TakePosition_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_TakePosition_Params._fDeltaSeconds, sizeof(RefreshCallback_TakePosition_Params._fDeltaSeconds), &_fDeltaSeconds, sizeof(_fDeltaSeconds));

	this->ProcessEvent(uFnRefreshCallback_TakePosition, &RefreshCallback_TakePosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorTriggerAlarm.OnEnterCallback_TakePosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43907])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorTriggerAlarm::OnEnterCallback_TakePosition(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_TakePosition = nullptr;

	if (!uFnOnEnterCallback_TakePosition)
	{
		uFnOnEnterCallback_TakePosition = UFunction::FindFunction("Function DishonoredGame.DisBehaviorTriggerAlarm.OnEnterCallback_TakePosition");
	}

	UDisBehaviorTriggerAlarm_execOnEnterCallback_TakePosition_Params OnEnterCallback_TakePosition_Params;
	memset(&OnEnterCallback_TakePosition_Params, 0, sizeof(OnEnterCallback_TakePosition_Params));
	OnEnterCallback_TakePosition_Params._pThisState = _pThisState;
	OnEnterCallback_TakePosition_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_TakePosition, &OnEnterCallback_TakePosition_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorTriggerAlarm.OnExitCallback_Stand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43915])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pNextState                    (CPF_Parm)

void UDisBehaviorTriggerAlarm::OnExitCallback_Stand(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pNextState)
{
	static UFunction* uFnOnExitCallback_Stand = nullptr;

	if (!uFnOnExitCallback_Stand)
	{
		uFnOnExitCallback_Stand = UFunction::FindFunction("Function DishonoredGame.DisBehaviorTriggerAlarm.OnExitCallback_Stand");
	}

	UDisBehaviorTriggerAlarm_execOnExitCallback_Stand_Params OnExitCallback_Stand_Params;
	memset(&OnExitCallback_Stand_Params, 0, sizeof(OnExitCallback_Stand_Params));
	OnExitCallback_Stand_Params._pThisState = _pThisState;
	OnExitCallback_Stand_Params._pNextState = _pNextState;

	this->ProcessEvent(uFnOnExitCallback_Stand, &OnExitCallback_Stand_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorTriggerAlarm.TickCallback_Stand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45360])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// float                          _fDeltaSeconds                 (CPF_Parm)

void UDisBehaviorTriggerAlarm::TickCallback_Stand(class UDishonoredNativeState* _pThisState, float _fDeltaSeconds)
{
	static UFunction* uFnTickCallback_Stand = nullptr;

	if (!uFnTickCallback_Stand)
	{
		uFnTickCallback_Stand = UFunction::FindFunction("Function DishonoredGame.DisBehaviorTriggerAlarm.TickCallback_Stand");
	}

	UDisBehaviorTriggerAlarm_execTickCallback_Stand_Params TickCallback_Stand_Params;
	memset(&TickCallback_Stand_Params, 0, sizeof(TickCallback_Stand_Params));
	TickCallback_Stand_Params._pThisState = _pThisState;
	memcpy_s(&TickCallback_Stand_Params._fDeltaSeconds, sizeof(TickCallback_Stand_Params._fDeltaSeconds), &_fDeltaSeconds, sizeof(_fDeltaSeconds));

	this->ProcessEvent(uFnTickCallback_Stand, &TickCallback_Stand_Params, nullptr);
};

// Function DishonoredGame.DisBehaviorTriggerAlarm.OnEnterCallback_Stand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43905])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisBehaviorTriggerAlarm::OnEnterCallback_Stand(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_Stand = nullptr;

	if (!uFnOnEnterCallback_Stand)
	{
		uFnOnEnterCallback_Stand = UFunction::FindFunction("Function DishonoredGame.DisBehaviorTriggerAlarm.OnEnterCallback_Stand");
	}

	UDisBehaviorTriggerAlarm_execOnEnterCallback_Stand_Params OnEnterCallback_Stand_Params;
	memset(&OnEnterCallback_Stand_Params, 0, sizeof(OnEnterCallback_Stand_Params));
	OnEnterCallback_Stand_Params._pThisState = _pThisState;
	OnEnterCallback_Stand_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_Stand, &OnEnterCallback_Stand_Params, nullptr);
};

// Function DishonoredGame.DisRiverKrust.OnRiverKrustDisable
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43967])
// Parameter Info:
// class UDisSeqAct_RiverKrustDisable* _pAction                       (CPF_Parm)

void ADisRiverKrust::OnRiverKrustDisable(class UDisSeqAct_RiverKrustDisable* _pAction)
{
	static UFunction* uFnOnRiverKrustDisable = nullptr;

	if (!uFnOnRiverKrustDisable)
	{
		uFnOnRiverKrustDisable = UFunction::FindFunction("Function DishonoredGame.DisRiverKrust.OnRiverKrustDisable");
	}

	ADisRiverKrust_execOnRiverKrustDisable_Params OnRiverKrustDisable_Params;
	memset(&OnRiverKrustDisable_Params, 0, sizeof(OnRiverKrustDisable_Params));
	OnRiverKrustDisable_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnRiverKrustDisable, &OnRiverKrustDisable_Params, nullptr);
};

// Function DishonoredGame.DisRiverKrust.OnRiverKrustSpitAtTarget
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43968])
// Parameter Info:
// class UDisSeqAct_RiverKrustSpitAtTarget* _pAction                       (CPF_Parm)

void ADisRiverKrust::OnRiverKrustSpitAtTarget(class UDisSeqAct_RiverKrustSpitAtTarget* _pAction)
{
	static UFunction* uFnOnRiverKrustSpitAtTarget = nullptr;

	if (!uFnOnRiverKrustSpitAtTarget)
	{
		uFnOnRiverKrustSpitAtTarget = UFunction::FindFunction("Function DishonoredGame.DisRiverKrust.OnRiverKrustSpitAtTarget");
	}

	ADisRiverKrust_execOnRiverKrustSpitAtTarget_Params OnRiverKrustSpitAtTarget_Params;
	memset(&OnRiverKrustSpitAtTarget_Params, 0, sizeof(OnRiverKrustSpitAtTarget_Params));
	OnRiverKrustSpitAtTarget_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnRiverKrustSpitAtTarget, &OnRiverKrustSpitAtTarget_Params, nullptr);
};

// Function DishonoredGame.DisRiverKrust.TakeDamage
// [0x00024C00] (FUNC_Native | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[13766])
// Parameter Info:
// int32_t                        Damage                         (CPF_Parm)
// class AController*             InstigatedBy                   (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 Momentum                       (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_OptionalParm | CPF_Parm)
// class AActor*                  DamageCauser                   (CPF_OptionalParm | CPF_Parm)

void ADisRiverKrust::eventTakeDamage(int32_t Damage, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static UFunction* uFnTakeDamage = nullptr;

	if (!uFnTakeDamage)
	{
		uFnTakeDamage = UFunction::FindFunction("Function DishonoredGame.DisRiverKrust.TakeDamage");
	}

	ADisRiverKrust_eventTakeDamage_Params TakeDamage_Params;
	memset(&TakeDamage_Params, 0, sizeof(TakeDamage_Params));
	memcpy_s(&TakeDamage_Params.Damage, sizeof(TakeDamage_Params.Damage), &Damage, sizeof(Damage));
	TakeDamage_Params.InstigatedBy = InstigatedBy;
	memcpy_s(&TakeDamage_Params.HitLocation, sizeof(TakeDamage_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&TakeDamage_Params.Momentum, sizeof(TakeDamage_Params.Momentum), &Momentum, sizeof(Momentum));
	TakeDamage_Params.DamageType = DamageType;
	memcpy_s(&TakeDamage_Params.HitInfo, sizeof(TakeDamage_Params.HitInfo), &HitInfo, sizeof(HitInfo));
	TakeDamage_Params.DamageCauser = DamageCauser;

	this->ProcessEvent(uFnTakeDamage, &TakeDamage_Params, nullptr);
};

// Function DishonoredGame.DisRiverKrust.TakeDamage_Native
// [0x00424400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[45311])
// Parameter Info:
// class AController*             _pInstigatedBy                 (CPF_Parm)
// struct FVector                 _HitLocation                   (CPF_Parm)
// struct FVector                 _Momentum                      (CPF_Parm)
// class UClass*                  _pDamageType                   (CPF_Parm)
// struct FTraceHitInfo           _HitInfo                       (CPF_OptionalParm | CPF_Parm)
// class AActor*                  _pDamageCauser                 (CPF_OptionalParm | CPF_Parm)
// int32_t                        _rDamage                       (CPF_Parm | CPF_OutParm)

void ADisRiverKrust::TakeDamage_Native(class AController* _pInstigatedBy, const struct FVector& _HitLocation, const struct FVector& _Momentum, class UClass* _pDamageType, const struct FTraceHitInfo& _HitInfo, class AActor* _pDamageCauser, int32_t& _rDamage)
{
	static UFunction* uFnTakeDamage_Native = nullptr;

	if (!uFnTakeDamage_Native)
	{
		uFnTakeDamage_Native = UFunction::FindFunction("Function DishonoredGame.DisRiverKrust.TakeDamage_Native");
	}

	ADisRiverKrust_execTakeDamage_Native_Params TakeDamage_Native_Params;
	memset(&TakeDamage_Native_Params, 0, sizeof(TakeDamage_Native_Params));
	TakeDamage_Native_Params._pInstigatedBy = _pInstigatedBy;
	memcpy_s(&TakeDamage_Native_Params._HitLocation, sizeof(TakeDamage_Native_Params._HitLocation), &_HitLocation, sizeof(_HitLocation));
	memcpy_s(&TakeDamage_Native_Params._Momentum, sizeof(TakeDamage_Native_Params._Momentum), &_Momentum, sizeof(_Momentum));
	TakeDamage_Native_Params._pDamageType = _pDamageType;
	memcpy_s(&TakeDamage_Native_Params._HitInfo, sizeof(TakeDamage_Native_Params._HitInfo), &_HitInfo, sizeof(_HitInfo));
	TakeDamage_Native_Params._pDamageCauser = _pDamageCauser;
	memcpy_s(&TakeDamage_Native_Params._rDamage, sizeof(TakeDamage_Native_Params._rDamage), &_rDamage, sizeof(_rDamage));

	this->ProcessEvent(uFnTakeDamage_Native, &TakeDamage_Native_Params, nullptr);

	memcpy_s(&_rDamage, sizeof(_rDamage), &TakeDamage_Native_Params._rDamage, sizeof(TakeDamage_Native_Params._rDamage));
};

// Function DishonoredGame.DisRiverKrust.OnAnimEnd
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[13641])
// Parameter Info:
// class UAnimNodeSequence*       _seqNode                       (CPF_Parm)
// float                          _playedTime                    (CPF_Parm)
// float                          _excessTime                    (CPF_Parm)

void ADisRiverKrust::eventOnAnimEnd(class UAnimNodeSequence* _seqNode, float _playedTime, float _excessTime)
{
	static UFunction* uFnOnAnimEnd = nullptr;

	if (!uFnOnAnimEnd)
	{
		uFnOnAnimEnd = UFunction::FindFunction("Function DishonoredGame.DisRiverKrust.OnAnimEnd");
	}

	ADisRiverKrust_eventOnAnimEnd_Params OnAnimEnd_Params;
	memset(&OnAnimEnd_Params, 0, sizeof(OnAnimEnd_Params));
	OnAnimEnd_Params._seqNode = _seqNode;
	memcpy_s(&OnAnimEnd_Params._playedTime, sizeof(OnAnimEnd_Params._playedTime), &_playedTime, sizeof(_playedTime));
	memcpy_s(&OnAnimEnd_Params._excessTime, sizeof(OnAnimEnd_Params._excessTime), &_excessTime, sizeof(_excessTime));

	this->ProcessEvent(uFnOnAnimEnd, &OnAnimEnd_Params, nullptr);
};

// Function DishonoredGame.DisFish.TakeDamage
// [0x00024C00] (FUNC_Native | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[13766])
// Parameter Info:
// int32_t                        Damage                         (CPF_Parm)
// class AController*             InstigatedBy                   (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 Momentum                       (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_OptionalParm | CPF_Parm)
// class AActor*                  DamageCauser                   (CPF_OptionalParm | CPF_Parm)

void ADisFish::eventTakeDamage(int32_t Damage, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static UFunction* uFnTakeDamage = nullptr;

	if (!uFnTakeDamage)
	{
		uFnTakeDamage = UFunction::FindFunction("Function DishonoredGame.DisFish.TakeDamage");
	}

	ADisFish_eventTakeDamage_Params TakeDamage_Params;
	memset(&TakeDamage_Params, 0, sizeof(TakeDamage_Params));
	memcpy_s(&TakeDamage_Params.Damage, sizeof(TakeDamage_Params.Damage), &Damage, sizeof(Damage));
	TakeDamage_Params.InstigatedBy = InstigatedBy;
	memcpy_s(&TakeDamage_Params.HitLocation, sizeof(TakeDamage_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&TakeDamage_Params.Momentum, sizeof(TakeDamage_Params.Momentum), &Momentum, sizeof(Momentum));
	TakeDamage_Params.DamageType = DamageType;
	memcpy_s(&TakeDamage_Params.HitInfo, sizeof(TakeDamage_Params.HitInfo), &HitInfo, sizeof(HitInfo));
	TakeDamage_Params.DamageCauser = DamageCauser;

	this->ProcessEvent(uFnTakeDamage, &TakeDamage_Params, nullptr);
};

// Function DishonoredGame.DisFish.TakeDamage_Native
// [0x00424400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[45311])
// Parameter Info:
// class AController*             _pInstigatedBy                 (CPF_Parm)
// struct FVector                 _HitLocation                   (CPF_Parm)
// class UClass*                  _pDamageType                   (CPF_Parm)
// struct FTraceHitInfo           _HitInfo                       (CPF_OptionalParm | CPF_Parm)
// class AActor*                  _pDamageCauser                 (CPF_OptionalParm | CPF_Parm)
// int32_t                        _rDamage                       (CPF_Parm | CPF_OutParm)
// struct FVector                 _rMomentum                     (CPF_Parm | CPF_OutParm)

void ADisFish::TakeDamage_Native(class AController* _pInstigatedBy, const struct FVector& _HitLocation, class UClass* _pDamageType, const struct FTraceHitInfo& _HitInfo, class AActor* _pDamageCauser, int32_t& _rDamage, struct FVector& _rMomentum)
{
	static UFunction* uFnTakeDamage_Native = nullptr;

	if (!uFnTakeDamage_Native)
	{
		uFnTakeDamage_Native = UFunction::FindFunction("Function DishonoredGame.DisFish.TakeDamage_Native");
	}

	ADisFish_execTakeDamage_Native_Params TakeDamage_Native_Params;
	memset(&TakeDamage_Native_Params, 0, sizeof(TakeDamage_Native_Params));
	TakeDamage_Native_Params._pInstigatedBy = _pInstigatedBy;
	memcpy_s(&TakeDamage_Native_Params._HitLocation, sizeof(TakeDamage_Native_Params._HitLocation), &_HitLocation, sizeof(_HitLocation));
	TakeDamage_Native_Params._pDamageType = _pDamageType;
	memcpy_s(&TakeDamage_Native_Params._HitInfo, sizeof(TakeDamage_Native_Params._HitInfo), &_HitInfo, sizeof(_HitInfo));
	TakeDamage_Native_Params._pDamageCauser = _pDamageCauser;
	memcpy_s(&TakeDamage_Native_Params._rDamage, sizeof(TakeDamage_Native_Params._rDamage), &_rDamage, sizeof(_rDamage));
	memcpy_s(&TakeDamage_Native_Params._rMomentum, sizeof(TakeDamage_Native_Params._rMomentum), &_rMomentum, sizeof(_rMomentum));

	this->ProcessEvent(uFnTakeDamage_Native, &TakeDamage_Native_Params, nullptr);

	memcpy_s(&_rDamage, sizeof(_rDamage), &TakeDamage_Native_Params._rDamage, sizeof(TakeDamage_Native_Params._rDamage));
	memcpy_s(&_rMomentum, sizeof(_rMomentum), &TakeDamage_Native_Params._rMomentum, sizeof(TakeDamage_Native_Params._rMomentum));
};

// Function DishonoredGame.DisDLC05MoviePlayerBrief.OnBriefScreenClosed
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47579])
// Parameter Info:

void UDisDLC05MoviePlayerBrief::OnBriefScreenClosed()
{
	static UFunction* uFnOnBriefScreenClosed = nullptr;

	if (!uFnOnBriefScreenClosed)
	{
		uFnOnBriefScreenClosed = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerBrief.OnBriefScreenClosed");
	}

	UDisDLC05MoviePlayerBrief_execOnBriefScreenClosed_Params OnBriefScreenClosed_Params;
	memset(&OnBriefScreenClosed_Params, 0, sizeof(OnBriefScreenClosed_Params));

	this->ProcessEvent(uFnOnBriefScreenClosed, &OnBriefScreenClosed_Params, nullptr);
};

// Function DishonoredGame.DisDLC05MoviePlayerLeaderboard.Req_DLC05_Leaderboards_PlayerProfile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47664])
// Parameter Info:
// int32_t                        _LeaderboardEntryIdx           (CPF_Parm)

void UDisDLC05MoviePlayerLeaderboard::Req_DLC05_Leaderboards_PlayerProfile(int32_t _LeaderboardEntryIdx)
{
	static UFunction* uFnReq_DLC05_Leaderboards_PlayerProfile = nullptr;

	if (!uFnReq_DLC05_Leaderboards_PlayerProfile)
	{
		uFnReq_DLC05_Leaderboards_PlayerProfile = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerLeaderboard.Req_DLC05_Leaderboards_PlayerProfile");
	}

	UDisDLC05MoviePlayerLeaderboard_execReq_DLC05_Leaderboards_PlayerProfile_Params Req_DLC05_Leaderboards_PlayerProfile_Params;
	memset(&Req_DLC05_Leaderboards_PlayerProfile_Params, 0, sizeof(Req_DLC05_Leaderboards_PlayerProfile_Params));
	memcpy_s(&Req_DLC05_Leaderboards_PlayerProfile_Params._LeaderboardEntryIdx, sizeof(Req_DLC05_Leaderboards_PlayerProfile_Params._LeaderboardEntryIdx), &_LeaderboardEntryIdx, sizeof(_LeaderboardEntryIdx));

	this->ProcessEvent(uFnReq_DLC05_Leaderboards_PlayerProfile, &Req_DLC05_Leaderboards_PlayerProfile_Params, nullptr);
};

// Function DishonoredGame.DisDLC05MoviePlayerLeaderboard.Req_DLC05_CancelLeaderboardLoading
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47657])
// Parameter Info:

void UDisDLC05MoviePlayerLeaderboard::Req_DLC05_CancelLeaderboardLoading()
{
	static UFunction* uFnReq_DLC05_CancelLeaderboardLoading = nullptr;

	if (!uFnReq_DLC05_CancelLeaderboardLoading)
	{
		uFnReq_DLC05_CancelLeaderboardLoading = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerLeaderboard.Req_DLC05_CancelLeaderboardLoading");
	}

	UDisDLC05MoviePlayerLeaderboard_execReq_DLC05_CancelLeaderboardLoading_Params Req_DLC05_CancelLeaderboardLoading_Params;
	memset(&Req_DLC05_CancelLeaderboardLoading_Params, 0, sizeof(Req_DLC05_CancelLeaderboardLoading_Params));

	this->ProcessEvent(uFnReq_DLC05_CancelLeaderboardLoading, &Req_DLC05_CancelLeaderboardLoading_Params, nullptr);
};

// Function DishonoredGame.DisDLC05MoviePlayerLeaderboard.Req_DLC05_NextLeaderboardPage
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47665])
// Parameter Info:
// int32_t                        _ChallengeIdx                  (CPF_Parm)
// int32_t                        _FilterIdx                     (CPF_Parm)

void UDisDLC05MoviePlayerLeaderboard::Req_DLC05_NextLeaderboardPage(int32_t _ChallengeIdx, int32_t _FilterIdx)
{
	static UFunction* uFnReq_DLC05_NextLeaderboardPage = nullptr;

	if (!uFnReq_DLC05_NextLeaderboardPage)
	{
		uFnReq_DLC05_NextLeaderboardPage = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerLeaderboard.Req_DLC05_NextLeaderboardPage");
	}

	UDisDLC05MoviePlayerLeaderboard_execReq_DLC05_NextLeaderboardPage_Params Req_DLC05_NextLeaderboardPage_Params;
	memset(&Req_DLC05_NextLeaderboardPage_Params, 0, sizeof(Req_DLC05_NextLeaderboardPage_Params));
	memcpy_s(&Req_DLC05_NextLeaderboardPage_Params._ChallengeIdx, sizeof(Req_DLC05_NextLeaderboardPage_Params._ChallengeIdx), &_ChallengeIdx, sizeof(_ChallengeIdx));
	memcpy_s(&Req_DLC05_NextLeaderboardPage_Params._FilterIdx, sizeof(Req_DLC05_NextLeaderboardPage_Params._FilterIdx), &_FilterIdx, sizeof(_FilterIdx));

	this->ProcessEvent(uFnReq_DLC05_NextLeaderboardPage, &Req_DLC05_NextLeaderboardPage_Params, nullptr);
};

// Function DishonoredGame.DisDLC05MoviePlayerLeaderboard.Req_DLC05_PrevLeaderboardPage
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47667])
// Parameter Info:
// int32_t                        _ChallengeIdx                  (CPF_Parm)
// int32_t                        _FilterIdx                     (CPF_Parm)

void UDisDLC05MoviePlayerLeaderboard::Req_DLC05_PrevLeaderboardPage(int32_t _ChallengeIdx, int32_t _FilterIdx)
{
	static UFunction* uFnReq_DLC05_PrevLeaderboardPage = nullptr;

	if (!uFnReq_DLC05_PrevLeaderboardPage)
	{
		uFnReq_DLC05_PrevLeaderboardPage = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerLeaderboard.Req_DLC05_PrevLeaderboardPage");
	}

	UDisDLC05MoviePlayerLeaderboard_execReq_DLC05_PrevLeaderboardPage_Params Req_DLC05_PrevLeaderboardPage_Params;
	memset(&Req_DLC05_PrevLeaderboardPage_Params, 0, sizeof(Req_DLC05_PrevLeaderboardPage_Params));
	memcpy_s(&Req_DLC05_PrevLeaderboardPage_Params._ChallengeIdx, sizeof(Req_DLC05_PrevLeaderboardPage_Params._ChallengeIdx), &_ChallengeIdx, sizeof(_ChallengeIdx));
	memcpy_s(&Req_DLC05_PrevLeaderboardPage_Params._FilterIdx, sizeof(Req_DLC05_PrevLeaderboardPage_Params._FilterIdx), &_FilterIdx, sizeof(_FilterIdx));

	this->ProcessEvent(uFnReq_DLC05_PrevLeaderboardPage, &Req_DLC05_PrevLeaderboardPage_Params, nullptr);
};

// Function DishonoredGame.DisDLC05MoviePlayerLeaderboard.Req_DLC05_Leaderboards
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47662])
// Parameter Info:
// int32_t                        _ChallengeIdx                  (CPF_Parm)
// int32_t                        _FilterIdx                     (CPF_Parm)

void UDisDLC05MoviePlayerLeaderboard::Req_DLC05_Leaderboards(int32_t _ChallengeIdx, int32_t _FilterIdx)
{
	static UFunction* uFnReq_DLC05_Leaderboards = nullptr;

	if (!uFnReq_DLC05_Leaderboards)
	{
		uFnReq_DLC05_Leaderboards = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerLeaderboard.Req_DLC05_Leaderboards");
	}

	UDisDLC05MoviePlayerLeaderboard_execReq_DLC05_Leaderboards_Params Req_DLC05_Leaderboards_Params;
	memset(&Req_DLC05_Leaderboards_Params, 0, sizeof(Req_DLC05_Leaderboards_Params));
	memcpy_s(&Req_DLC05_Leaderboards_Params._ChallengeIdx, sizeof(Req_DLC05_Leaderboards_Params._ChallengeIdx), &_ChallengeIdx, sizeof(_ChallengeIdx));
	memcpy_s(&Req_DLC05_Leaderboards_Params._FilterIdx, sizeof(Req_DLC05_Leaderboards_Params._FilterIdx), &_FilterIdx, sizeof(_FilterIdx));

	this->ProcessEvent(uFnReq_DLC05_Leaderboards, &Req_DLC05_Leaderboards_Params, nullptr);
};

// Function DishonoredGame.DisDLC05MoviePlayerLeaderboard.Req_DLC05_Leaderboards_ChallengesList
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47663])
// Parameter Info:
// int32_t                        _Mode                          (CPF_Parm)

void UDisDLC05MoviePlayerLeaderboard::Req_DLC05_Leaderboards_ChallengesList(int32_t _Mode)
{
	static UFunction* uFnReq_DLC05_Leaderboards_ChallengesList = nullptr;

	if (!uFnReq_DLC05_Leaderboards_ChallengesList)
	{
		uFnReq_DLC05_Leaderboards_ChallengesList = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerLeaderboard.Req_DLC05_Leaderboards_ChallengesList");
	}

	UDisDLC05MoviePlayerLeaderboard_execReq_DLC05_Leaderboards_ChallengesList_Params Req_DLC05_Leaderboards_ChallengesList_Params;
	memset(&Req_DLC05_Leaderboards_ChallengesList_Params, 0, sizeof(Req_DLC05_Leaderboards_ChallengesList_Params));
	memcpy_s(&Req_DLC05_Leaderboards_ChallengesList_Params._Mode, sizeof(Req_DLC05_Leaderboards_ChallengesList_Params._Mode), &_Mode, sizeof(_Mode));

	this->ProcessEvent(uFnReq_DLC05_Leaderboards_ChallengesList, &Req_DLC05_Leaderboards_ChallengesList_Params, nullptr);
};

// Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.OnQuitDLC05Confirm
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47593])
// Parameter Info:

void UDisDLC05MoviePlayerChallengeMenu::OnQuitDLC05Confirm()
{
	static UFunction* uFnOnQuitDLC05Confirm = nullptr;

	if (!uFnOnQuitDLC05Confirm)
	{
		uFnOnQuitDLC05Confirm = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.OnQuitDLC05Confirm");
	}

	UDisDLC05MoviePlayerChallengeMenu_execOnQuitDLC05Confirm_Params OnQuitDLC05Confirm_Params;
	memset(&OnQuitDLC05Confirm_Params, 0, sizeof(OnQuitDLC05Confirm_Params));

	this->ProcessEvent(uFnOnQuitDLC05Confirm, &OnQuitDLC05Confirm_Params, nullptr);
};

// Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.DLC05_Credits
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[46172])
// Parameter Info:

void UDisDLC05MoviePlayerChallengeMenu::DLC05_Credits()
{
	static UFunction* uFnDLC05_Credits = nullptr;

	if (!uFnDLC05_Credits)
	{
		uFnDLC05_Credits = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.DLC05_Credits");
	}

	UDisDLC05MoviePlayerChallengeMenu_execDLC05_Credits_Params DLC05_Credits_Params;
	memset(&DLC05_Credits_Params, 0, sizeof(DLC05_Credits_Params));

	this->ProcessEvent(uFnDLC05_Credits, &DLC05_Credits_Params, nullptr);
};

// Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.OnGalleryClosed
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47585])
// Parameter Info:

void UDisDLC05MoviePlayerChallengeMenu::OnGalleryClosed()
{
	static UFunction* uFnOnGalleryClosed = nullptr;

	if (!uFnOnGalleryClosed)
	{
		uFnOnGalleryClosed = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.OnGalleryClosed");
	}

	UDisDLC05MoviePlayerChallengeMenu_execOnGalleryClosed_Params OnGalleryClosed_Params;
	memset(&OnGalleryClosed_Params, 0, sizeof(OnGalleryClosed_Params));

	this->ProcessEvent(uFnOnGalleryClosed, &OnGalleryClosed_Params, nullptr);
};

// Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.OnGalleryViewportClosed
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47586])
// Parameter Info:

void UDisDLC05MoviePlayerChallengeMenu::OnGalleryViewportClosed()
{
	static UFunction* uFnOnGalleryViewportClosed = nullptr;

	if (!uFnOnGalleryViewportClosed)
	{
		uFnOnGalleryViewportClosed = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.OnGalleryViewportClosed");
	}

	UDisDLC05MoviePlayerChallengeMenu_execOnGalleryViewportClosed_Params OnGalleryViewportClosed_Params;
	memset(&OnGalleryViewportClosed_Params, 0, sizeof(OnGalleryViewportClosed_Params));

	this->ProcessEvent(uFnOnGalleryViewportClosed, &OnGalleryViewportClosed_Params, nullptr);
};

// Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.Req_GalleryLargeImage
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47669])
// Parameter Info:
// int32_t                        _ImageIdx                      (CPF_Parm)

void UDisDLC05MoviePlayerChallengeMenu::Req_GalleryLargeImage(int32_t _ImageIdx)
{
	static UFunction* uFnReq_GalleryLargeImage = nullptr;

	if (!uFnReq_GalleryLargeImage)
	{
		uFnReq_GalleryLargeImage = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.Req_GalleryLargeImage");
	}

	UDisDLC05MoviePlayerChallengeMenu_execReq_GalleryLargeImage_Params Req_GalleryLargeImage_Params;
	memset(&Req_GalleryLargeImage_Params, 0, sizeof(Req_GalleryLargeImage_Params));
	memcpy_s(&Req_GalleryLargeImage_Params._ImageIdx, sizeof(Req_GalleryLargeImage_Params._ImageIdx), &_ImageIdx, sizeof(_ImageIdx));

	this->ProcessEvent(uFnReq_GalleryLargeImage, &Req_GalleryLargeImage_Params, nullptr);
};

// Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.Req_DLC05_GalleryUnlockDetails
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47661])
// Parameter Info:
// int32_t                        _ImageIdx                      (CPF_Parm)

void UDisDLC05MoviePlayerChallengeMenu::Req_DLC05_GalleryUnlockDetails(int32_t _ImageIdx)
{
	static UFunction* uFnReq_DLC05_GalleryUnlockDetails = nullptr;

	if (!uFnReq_DLC05_GalleryUnlockDetails)
	{
		uFnReq_DLC05_GalleryUnlockDetails = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.Req_DLC05_GalleryUnlockDetails");
	}

	UDisDLC05MoviePlayerChallengeMenu_execReq_DLC05_GalleryUnlockDetails_Params Req_DLC05_GalleryUnlockDetails_Params;
	memset(&Req_DLC05_GalleryUnlockDetails_Params, 0, sizeof(Req_DLC05_GalleryUnlockDetails_Params));
	memcpy_s(&Req_DLC05_GalleryUnlockDetails_Params._ImageIdx, sizeof(Req_DLC05_GalleryUnlockDetails_Params._ImageIdx), &_ImageIdx, sizeof(_ImageIdx));

	this->ProcessEvent(uFnReq_DLC05_GalleryUnlockDetails, &Req_DLC05_GalleryUnlockDetails_Params, nullptr);
};

// Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.Req_DLC05_GalleryList
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47660])
// Parameter Info:

void UDisDLC05MoviePlayerChallengeMenu::Req_DLC05_GalleryList()
{
	static UFunction* uFnReq_DLC05_GalleryList = nullptr;

	if (!uFnReq_DLC05_GalleryList)
	{
		uFnReq_DLC05_GalleryList = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.Req_DLC05_GalleryList");
	}

	UDisDLC05MoviePlayerChallengeMenu_execReq_DLC05_GalleryList_Params Req_DLC05_GalleryList_Params;
	memset(&Req_DLC05_GalleryList_Params, 0, sizeof(Req_DLC05_GalleryList_Params));

	this->ProcessEvent(uFnReq_DLC05_GalleryList, &Req_DLC05_GalleryList_Params, nullptr);
};

// Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.StartDLC05Challenge
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47687])
// Parameter Info:
// int32_t                        _ChallengeIdx                  (CPF_Parm)

void UDisDLC05MoviePlayerChallengeMenu::StartDLC05Challenge(int32_t _ChallengeIdx)
{
	static UFunction* uFnStartDLC05Challenge = nullptr;

	if (!uFnStartDLC05Challenge)
	{
		uFnStartDLC05Challenge = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.StartDLC05Challenge");
	}

	UDisDLC05MoviePlayerChallengeMenu_execStartDLC05Challenge_Params StartDLC05Challenge_Params;
	memset(&StartDLC05Challenge_Params, 0, sizeof(StartDLC05Challenge_Params));
	memcpy_s(&StartDLC05Challenge_Params._ChallengeIdx, sizeof(StartDLC05Challenge_Params._ChallengeIdx), &_ChallengeIdx, sizeof(_ChallengeIdx));

	this->ProcessEvent(uFnStartDLC05Challenge, &StartDLC05Challenge_Params, nullptr);
};

// Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.Req_DLC05_ChallengeDetails
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47658])
// Parameter Info:
// int32_t                        _ChallengeIdx                  (CPF_Parm)

void UDisDLC05MoviePlayerChallengeMenu::Req_DLC05_ChallengeDetails(int32_t _ChallengeIdx)
{
	static UFunction* uFnReq_DLC05_ChallengeDetails = nullptr;

	if (!uFnReq_DLC05_ChallengeDetails)
	{
		uFnReq_DLC05_ChallengeDetails = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.Req_DLC05_ChallengeDetails");
	}

	UDisDLC05MoviePlayerChallengeMenu_execReq_DLC05_ChallengeDetails_Params Req_DLC05_ChallengeDetails_Params;
	memset(&Req_DLC05_ChallengeDetails_Params, 0, sizeof(Req_DLC05_ChallengeDetails_Params));
	memcpy_s(&Req_DLC05_ChallengeDetails_Params._ChallengeIdx, sizeof(Req_DLC05_ChallengeDetails_Params._ChallengeIdx), &_ChallengeIdx, sizeof(_ChallengeIdx));

	this->ProcessEvent(uFnReq_DLC05_ChallengeDetails, &Req_DLC05_ChallengeDetails_Params, nullptr);
};

// Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.Req_DLC05_ExpertChallengesList
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47659])
// Parameter Info:

void UDisDLC05MoviePlayerChallengeMenu::Req_DLC05_ExpertChallengesList()
{
	static UFunction* uFnReq_DLC05_ExpertChallengesList = nullptr;

	if (!uFnReq_DLC05_ExpertChallengesList)
	{
		uFnReq_DLC05_ExpertChallengesList = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.Req_DLC05_ExpertChallengesList");
	}

	UDisDLC05MoviePlayerChallengeMenu_execReq_DLC05_ExpertChallengesList_Params Req_DLC05_ExpertChallengesList_Params;
	memset(&Req_DLC05_ExpertChallengesList_Params, 0, sizeof(Req_DLC05_ExpertChallengesList_Params));

	this->ProcessEvent(uFnReq_DLC05_ExpertChallengesList, &Req_DLC05_ExpertChallengesList_Params, nullptr);
};

// Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.Req_DLC05_NormalChallengesList
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47666])
// Parameter Info:

void UDisDLC05MoviePlayerChallengeMenu::Req_DLC05_NormalChallengesList()
{
	static UFunction* uFnReq_DLC05_NormalChallengesList = nullptr;

	if (!uFnReq_DLC05_NormalChallengesList)
	{
		uFnReq_DLC05_NormalChallengesList = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.Req_DLC05_NormalChallengesList");
	}

	UDisDLC05MoviePlayerChallengeMenu_execReq_DLC05_NormalChallengesList_Params Req_DLC05_NormalChallengesList_Params;
	memset(&Req_DLC05_NormalChallengesList_Params, 0, sizeof(Req_DLC05_NormalChallengesList_Params));

	this->ProcessEvent(uFnReq_DLC05_NormalChallengesList, &Req_DLC05_NormalChallengesList_Params, nullptr);
};

// Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.OnWelcomeDisclaimerClosed
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47598])
// Parameter Info:

void UDisDLC05MoviePlayerChallengeMenu::OnWelcomeDisclaimerClosed()
{
	static UFunction* uFnOnWelcomeDisclaimerClosed = nullptr;

	if (!uFnOnWelcomeDisclaimerClosed)
	{
		uFnOnWelcomeDisclaimerClosed = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.OnWelcomeDisclaimerClosed");
	}

	UDisDLC05MoviePlayerChallengeMenu_execOnWelcomeDisclaimerClosed_Params OnWelcomeDisclaimerClosed_Params;
	memset(&OnWelcomeDisclaimerClosed_Params, 0, sizeof(OnWelcomeDisclaimerClosed_Params));

	this->ProcessEvent(uFnOnWelcomeDisclaimerClosed, &OnWelcomeDisclaimerClosed_Params, nullptr);
};

// Function DishonoredGame.DisDLC05MoviePlayerResultsMenu.OnQuitDLC05Confirm
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47593])
// Parameter Info:

void UDisDLC05MoviePlayerResultsMenu::OnQuitDLC05Confirm()
{
	static UFunction* uFnOnQuitDLC05Confirm = nullptr;

	if (!uFnOnQuitDLC05Confirm)
	{
		uFnOnQuitDLC05Confirm = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerResultsMenu.OnQuitDLC05Confirm");
	}

	UDisDLC05MoviePlayerResultsMenu_execOnQuitDLC05Confirm_Params OnQuitDLC05Confirm_Params;
	memset(&OnQuitDLC05Confirm_Params, 0, sizeof(OnQuitDLC05Confirm_Params));

	this->ProcessEvent(uFnOnQuitDLC05Confirm, &OnQuitDLC05Confirm_Params, nullptr);
};

// Function DishonoredGame.DisDLC05MoviePlayerResultsMenu.BackToDLC05MainMenu
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45875])
// Parameter Info:

void UDisDLC05MoviePlayerResultsMenu::BackToDLC05MainMenu()
{
	static UFunction* uFnBackToDLC05MainMenu = nullptr;

	if (!uFnBackToDLC05MainMenu)
	{
		uFnBackToDLC05MainMenu = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerResultsMenu.BackToDLC05MainMenu");
	}

	UDisDLC05MoviePlayerResultsMenu_execBackToDLC05MainMenu_Params BackToDLC05MainMenu_Params;
	memset(&BackToDLC05MainMenu_Params, 0, sizeof(BackToDLC05MainMenu_Params));

	this->ProcessEvent(uFnBackToDLC05MainMenu, &BackToDLC05MainMenu_Params, nullptr);
};

// Function DishonoredGame.DisDLC05MoviePlayerResultsMenu.ReplayChallenge
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47654])
// Parameter Info:

void UDisDLC05MoviePlayerResultsMenu::ReplayChallenge()
{
	static UFunction* uFnReplayChallenge = nullptr;

	if (!uFnReplayChallenge)
	{
		uFnReplayChallenge = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerResultsMenu.ReplayChallenge");
	}

	UDisDLC05MoviePlayerResultsMenu_execReplayChallenge_Params ReplayChallenge_Params;
	memset(&ReplayChallenge_Params, 0, sizeof(ReplayChallenge_Params));

	this->ProcessEvent(uFnReplayChallenge, &ReplayChallenge_Params, nullptr);
};

// Function DishonoredGame.DisDLC05MoviePlayerResultsMenu.CanUnpauseToReplay
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45883])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UDisDLC05MoviePlayerResultsMenu::CanUnpauseToReplay()
{
	static UFunction* uFnCanUnpauseToReplay = nullptr;

	if (!uFnCanUnpauseToReplay)
	{
		uFnCanUnpauseToReplay = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerResultsMenu.CanUnpauseToReplay");
	}

	UDisDLC05MoviePlayerResultsMenu_execCanUnpauseToReplay_Params CanUnpauseToReplay_Params;
	memset(&CanUnpauseToReplay_Params, 0, sizeof(CanUnpauseToReplay_Params));

	this->ProcessEvent(uFnCanUnpauseToReplay, &CanUnpauseToReplay_Params, nullptr);

	return CanUnpauseToReplay_Params.ReturnValue;
};

// Function DishonoredGame.DisDLC05MoviePlayerResultsMenu.SetPauseUntilReplay
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       _bDesiredPauseState            (CPF_Parm)

void UDisDLC05MoviePlayerResultsMenu::eventSetPauseUntilReplay(bool _bDesiredPauseState)
{
	static UFunction* uFnSetPauseUntilReplay = nullptr;

	if (!uFnSetPauseUntilReplay)
	{
		uFnSetPauseUntilReplay = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerResultsMenu.SetPauseUntilReplay");
	}

	UDisDLC05MoviePlayerResultsMenu_eventSetPauseUntilReplay_Params SetPauseUntilReplay_Params;
	memset(&SetPauseUntilReplay_Params, 0, sizeof(SetPauseUntilReplay_Params));
	SetPauseUntilReplay_Params._bDesiredPauseState = _bDesiredPauseState;

	this->ProcessEvent(uFnSetPauseUntilReplay, &SetPauseUntilReplay_Params, nullptr);
};

// Function DishonoredGame.DisDLC05MoviePlayerHUD.EndChallenge
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[46481])
// Parameter Info:

void UDisDLC05MoviePlayerHUD::EndChallenge()
{
	static UFunction* uFnEndChallenge = nullptr;

	if (!uFnEndChallenge)
	{
		uFnEndChallenge = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerHUD.EndChallenge");
	}

	UDisDLC05MoviePlayerHUD_execEndChallenge_Params EndChallenge_Params;
	memset(&EndChallenge_Params, 0, sizeof(EndChallenge_Params));

	this->ProcessEvent(uFnEndChallenge, &EndChallenge_Params, nullptr);
};

// Function DishonoredGame.DisDLC05MoviePlayerHUD.DLC05_GoToNextPhase
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[46173])
// Parameter Info:

void UDisDLC05MoviePlayerHUD::DLC05_GoToNextPhase()
{
	static UFunction* uFnDLC05_GoToNextPhase = nullptr;

	if (!uFnDLC05_GoToNextPhase)
	{
		uFnDLC05_GoToNextPhase = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerHUD.DLC05_GoToNextPhase");
	}

	UDisDLC05MoviePlayerHUD_execDLC05_GoToNextPhase_Params DLC05_GoToNextPhase_Params;
	memset(&DLC05_GoToNextPhase_Params, 0, sizeof(DLC05_GoToNextPhase_Params));

	this->ProcessEvent(uFnDLC05_GoToNextPhase, &DLC05_GoToNextPhase_Params, nullptr);
};

// Function DishonoredGame.DisDLC05MoviePlayerPauseMenu.BackToDLC05MainMenu
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[45875])
// Parameter Info:

void UDisDLC05MoviePlayerPauseMenu::BackToDLC05MainMenu()
{
	static UFunction* uFnBackToDLC05MainMenu = nullptr;

	if (!uFnBackToDLC05MainMenu)
	{
		uFnBackToDLC05MainMenu = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerPauseMenu.BackToDLC05MainMenu");
	}

	UDisDLC05MoviePlayerPauseMenu_execBackToDLC05MainMenu_Params BackToDLC05MainMenu_Params;
	memset(&BackToDLC05MainMenu_Params, 0, sizeof(BackToDLC05MainMenu_Params));

	this->ProcessEvent(uFnBackToDLC05MainMenu, &BackToDLC05MainMenu_Params, nullptr);
};

// Function DishonoredGame.DisDLC05MoviePlayerPauseMenu.EndChallenge
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[46481])
// Parameter Info:

void UDisDLC05MoviePlayerPauseMenu::EndChallenge()
{
	static UFunction* uFnEndChallenge = nullptr;

	if (!uFnEndChallenge)
	{
		uFnEndChallenge = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerPauseMenu.EndChallenge");
	}

	UDisDLC05MoviePlayerPauseMenu_execEndChallenge_Params EndChallenge_Params;
	memset(&EndChallenge_Params, 0, sizeof(EndChallenge_Params));

	this->ProcessEvent(uFnEndChallenge, &EndChallenge_Params, nullptr);
};

// Function DishonoredGame.DisDLC05MoviePlayerPauseMenu.OnLevelLoadingOpened
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47587])
// Parameter Info:

void UDisDLC05MoviePlayerPauseMenu::OnLevelLoadingOpened()
{
	static UFunction* uFnOnLevelLoadingOpened = nullptr;

	if (!uFnOnLevelLoadingOpened)
	{
		uFnOnLevelLoadingOpened = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerPauseMenu.OnLevelLoadingOpened");
	}

	UDisDLC05MoviePlayerPauseMenu_execOnLevelLoadingOpened_Params OnLevelLoadingOpened_Params;
	memset(&OnLevelLoadingOpened_Params, 0, sizeof(OnLevelLoadingOpened_Params));

	this->ProcessEvent(uFnOnLevelLoadingOpened, &OnLevelLoadingOpened_Params, nullptr);
};

// Function DishonoredGame.DisDLC05MoviePlayerPauseMenu.ReplayChallenge
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47654])
// Parameter Info:

void UDisDLC05MoviePlayerPauseMenu::ReplayChallenge()
{
	static UFunction* uFnReplayChallenge = nullptr;

	if (!uFnReplayChallenge)
	{
		uFnReplayChallenge = UFunction::FindFunction("Function DishonoredGame.DisDLC05MoviePlayerPauseMenu.ReplayChallenge");
	}

	UDisDLC05MoviePlayerPauseMenu_execReplayChallenge_Params ReplayChallenge_Params;
	memset(&ReplayChallenge_Params, 0, sizeof(ReplayChallenge_Params));

	this->ProcessEvent(uFnReplayChallenge, &ReplayChallenge_Params, nullptr);
};

// Function DishonoredGame.DisDLC05GameInfo.PostLogin
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APlayerController*       NewPlayer                      (CPF_Parm)

void ADisDLC05GameInfo::eventPostLogin(class APlayerController* NewPlayer)
{
	static UFunction* uFnPostLogin = nullptr;

	if (!uFnPostLogin)
	{
		uFnPostLogin = UFunction::FindFunction("Function DishonoredGame.DisDLC05GameInfo.PostLogin");
	}

	ADisDLC05GameInfo_eventPostLogin_Params PostLogin_Params;
	memset(&PostLogin_Params, 0, sizeof(PostLogin_Params));
	PostLogin_Params.NewPlayer = NewPlayer;

	this->ProcessEvent(uFnPostLogin, &PostLogin_Params, nullptr);
};

// Function DishonoredGame.DisDLC05GameInfo.PostLogin_Native
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47630])
// Parameter Info:
// class APlayerController*       NewPlayer                      (CPF_Parm)

void ADisDLC05GameInfo::PostLogin_Native(class APlayerController* NewPlayer)
{
	static UFunction* uFnPostLogin_Native = nullptr;

	if (!uFnPostLogin_Native)
	{
		uFnPostLogin_Native = UFunction::FindFunction("Function DishonoredGame.DisDLC05GameInfo.PostLogin_Native");
	}

	ADisDLC05GameInfo_execPostLogin_Native_Params PostLogin_Native_Params;
	memset(&PostLogin_Native_Params, 0, sizeof(PostLogin_Native_Params));
	PostLogin_Native_Params.NewPlayer = NewPlayer;

	this->ProcessEvent(uFnPostLogin_Native, &PostLogin_Native_Params, nullptr);
};

// Function DishonoredGame.DisSeqAct_DLC05_DialogScriptedChoice.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UDisSeqAct_DLC05_DialogScriptedChoice::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function DishonoredGame.DisSeqAct_DLC05_DialogScriptedChoice.GetObjClassVersion");
	}

	UDisSeqAct_DLC05_DialogScriptedChoice_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));

	UDisSeqAct_DLC05_DialogScriptedChoice::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function DishonoredGame.DisSeqAct_DLC05_DarkVision.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UDisSeqAct_DLC05_DarkVision::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function DishonoredGame.DisSeqAct_DLC05_DarkVision.GetObjClassVersion");
	}

	UDisSeqAct_DLC05_DarkVision_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));

	UDisSeqAct_DLC05_DarkVision::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function DishonoredGame.DisSeqAct_DLC05_Interp.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UDisSeqAct_DLC05_Interp::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function DishonoredGame.DisSeqAct_DLC05_Interp.GetObjClassVersion");
	}

	UDisSeqAct_DLC05_Interp_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));

	UDisSeqAct_DLC05_Interp::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function DishonoredGame.DisSeqAct_DLC05_Timer.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UDisSeqAct_DLC05_Timer::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function DishonoredGame.DisSeqAct_DLC05_Timer.GetObjClassVersion");
	}

	UDisSeqAct_DLC05_Timer_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));

	UDisSeqAct_DLC05_Timer::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function DishonoredGame.DisSeqEvent_DLC05_Challenge.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UDisSeqEvent_DLC05_Challenge::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function DishonoredGame.DisSeqEvent_DLC05_Challenge.GetObjClassVersion");
	}

	UDisSeqEvent_DLC05_Challenge_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));

	UDisSeqEvent_DLC05_Challenge::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function DishonoredGame.DisDLC06CheatManager.ReportStoryFlags
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47656])
// Parameter Info:

void UDisDLC06CheatManager::ReportStoryFlags()
{
	static UFunction* uFnReportStoryFlags = nullptr;

	if (!uFnReportStoryFlags)
	{
		uFnReportStoryFlags = UFunction::FindFunction("Function DishonoredGame.DisDLC06CheatManager.ReportStoryFlags");
	}

	UDisDLC06CheatManager_execReportStoryFlags_Params ReportStoryFlags_Params;
	memset(&ReportStoryFlags_Params, 0, sizeof(ReportStoryFlags_Params));

	this->ProcessEvent(uFnReportStoryFlags, &ReportStoryFlags_Params, nullptr);
};

// Function DishonoredGame.DisDLC06CheatManager.ReportEndGameFiles
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47655])
// Parameter Info:

void UDisDLC06CheatManager::ReportEndGameFiles()
{
	static UFunction* uFnReportEndGameFiles = nullptr;

	if (!uFnReportEndGameFiles)
	{
		uFnReportEndGameFiles = UFunction::FindFunction("Function DishonoredGame.DisDLC06CheatManager.ReportEndGameFiles");
	}

	UDisDLC06CheatManager_execReportEndGameFiles_Params ReportEndGameFiles_Params;
	memset(&ReportEndGameFiles_Params, 0, sizeof(ReportEndGameFiles_Params));

	this->ProcessEvent(uFnReportEndGameFiles, &ReportEndGameFiles_Params, nullptr);
};

// Function DishonoredGame.DisDLC06CheatManager.UnlockMasterAssassin
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47706])
// Parameter Info:

void UDisDLC06CheatManager::UnlockMasterAssassin()
{
	static UFunction* uFnUnlockMasterAssassin = nullptr;

	if (!uFnUnlockMasterAssassin)
	{
		uFnUnlockMasterAssassin = UFunction::FindFunction("Function DishonoredGame.DisDLC06CheatManager.UnlockMasterAssassin");
	}

	UDisDLC06CheatManager_execUnlockMasterAssassin_Params UnlockMasterAssassin_Params;
	memset(&UnlockMasterAssassin_Params, 0, sizeof(UnlockMasterAssassin_Params));

	this->ProcessEvent(uFnUnlockMasterAssassin, &UnlockMasterAssassin_Params, nullptr);
};

// Function DishonoredGame.DisDLC06CheatManager.MaxItems
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43661])
// Parameter Info:

void UDisDLC06CheatManager::MaxItems()
{
	static UFunction* uFnMaxItems = nullptr;

	if (!uFnMaxItems)
	{
		uFnMaxItems = UFunction::FindFunction("Function DishonoredGame.DisDLC06CheatManager.MaxItems");
	}

	UDisDLC06CheatManager_execMaxItems_Params MaxItems_Params;
	memset(&MaxItems_Params, 0, sizeof(MaxItems_Params));

	this->ProcessEvent(uFnMaxItems, &MaxItems_Params, nullptr);
};

// Function DishonoredGame.DisDLC06CheatManager.I_AM_DAUD
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[46551])
// Parameter Info:

void UDisDLC06CheatManager::I_AM_DAUD()
{
	static UFunction* uFnI_AM_DAUD = nullptr;

	if (!uFnI_AM_DAUD)
	{
		uFnI_AM_DAUD = UFunction::FindFunction("Function DishonoredGame.DisDLC06CheatManager.I_AM_DAUD");
	}

	UDisDLC06CheatManager_execI_AM_DAUD_Params I_AM_DAUD_Params;
	memset(&I_AM_DAUD_Params, 0, sizeof(I_AM_DAUD_Params));

	this->ProcessEvent(uFnI_AM_DAUD, &I_AM_DAUD_Params, nullptr);
};

// Function DishonoredGame.DisDLC06PlayerPawn.DoJump
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[19114])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       _bUpdating                     (CPF_Parm)

bool ADisDLC06PlayerPawn::DoJump(bool _bUpdating)
{
	static UFunction* uFnDoJump = nullptr;

	if (!uFnDoJump)
	{
		uFnDoJump = UFunction::FindFunction("Function DishonoredGame.DisDLC06PlayerPawn.DoJump");
	}

	ADisDLC06PlayerPawn_execDoJump_Params DoJump_Params;
	memset(&DoJump_Params, 0, sizeof(DoJump_Params));
	DoJump_Params._bUpdating = _bUpdating;

	this->ProcessEvent(uFnDoJump, &DoJump_Params, nullptr);

	return DoJump_Params.ReturnValue;
};

// Function DishonoredGame.DisDLC06NPCPawn.OnNPCSetHeadMesh
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47590])
// Parameter Info:
// class UDisDLC06SeqAct_NPCSetHeadMesh* _pAction                       (CPF_Parm)

void ADisDLC06NPCPawn::OnNPCSetHeadMesh(class UDisDLC06SeqAct_NPCSetHeadMesh* _pAction)
{
	static UFunction* uFnOnNPCSetHeadMesh = nullptr;

	if (!uFnOnNPCSetHeadMesh)
	{
		uFnOnNPCSetHeadMesh = UFunction::FindFunction("Function DishonoredGame.DisDLC06NPCPawn.OnNPCSetHeadMesh");
	}

	ADisDLC06NPCPawn_execOnNPCSetHeadMesh_Params OnNPCSetHeadMesh_Params;
	memset(&OnNPCSetHeadMesh_Params, 0, sizeof(OnNPCSetHeadMesh_Params));
	OnNPCSetHeadMesh_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnNPCSetHeadMesh, &OnNPCSetHeadMesh_Params, nullptr);
};

// Function DishonoredGame.DisDLC06Projectile_Arrow_Explosive.TakeDamage_Native
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[45311])
// Parameter Info:
// int32_t                        _Damage                        (CPF_Parm)
// class AController*             _pInstigatedBy                 (CPF_Parm)
// struct FVector                 _HitLocation                   (CPF_Parm)
// struct FVector                 _Momentum                      (CPF_Parm)
// class UClass*                  _pDamageType                   (CPF_Parm)
// struct FTraceHitInfo           _HitInfo                       (CPF_OptionalParm | CPF_Parm)
// class AActor*                  _pDamageCauser                 (CPF_OptionalParm | CPF_Parm)

void ADisDLC06Projectile_Arrow_Explosive::TakeDamage_Native(int32_t _Damage, class AController* _pInstigatedBy, const struct FVector& _HitLocation, const struct FVector& _Momentum, class UClass* _pDamageType, const struct FTraceHitInfo& _HitInfo, class AActor* _pDamageCauser)
{
	static UFunction* uFnTakeDamage_Native = nullptr;

	if (!uFnTakeDamage_Native)
	{
		uFnTakeDamage_Native = UFunction::FindFunction("Function DishonoredGame.DisDLC06Projectile_Arrow_Explosive.TakeDamage_Native");
	}

	ADisDLC06Projectile_Arrow_Explosive_execTakeDamage_Native_Params TakeDamage_Native_Params;
	memset(&TakeDamage_Native_Params, 0, sizeof(TakeDamage_Native_Params));
	memcpy_s(&TakeDamage_Native_Params._Damage, sizeof(TakeDamage_Native_Params._Damage), &_Damage, sizeof(_Damage));
	TakeDamage_Native_Params._pInstigatedBy = _pInstigatedBy;
	memcpy_s(&TakeDamage_Native_Params._HitLocation, sizeof(TakeDamage_Native_Params._HitLocation), &_HitLocation, sizeof(_HitLocation));
	memcpy_s(&TakeDamage_Native_Params._Momentum, sizeof(TakeDamage_Native_Params._Momentum), &_Momentum, sizeof(_Momentum));
	TakeDamage_Native_Params._pDamageType = _pDamageType;
	memcpy_s(&TakeDamage_Native_Params._HitInfo, sizeof(TakeDamage_Native_Params._HitInfo), &_HitInfo, sizeof(_HitInfo));
	TakeDamage_Native_Params._pDamageCauser = _pDamageCauser;

	this->ProcessEvent(uFnTakeDamage_Native, &TakeDamage_Native_Params, nullptr);
};

// Function DishonoredGame.DisDLC06MoviePlayerMainMenu.GetLastDifficultyModeLockState
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[46528])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UDisDLC06MoviePlayerMainMenu::GetLastDifficultyModeLockState()
{
	static UFunction* uFnGetLastDifficultyModeLockState = nullptr;

	if (!uFnGetLastDifficultyModeLockState)
	{
		uFnGetLastDifficultyModeLockState = UFunction::FindFunction("Function DishonoredGame.DisDLC06MoviePlayerMainMenu.GetLastDifficultyModeLockState");
	}

	UDisDLC06MoviePlayerMainMenu_execGetLastDifficultyModeLockState_Params GetLastDifficultyModeLockState_Params;
	memset(&GetLastDifficultyModeLockState_Params, 0, sizeof(GetLastDifficultyModeLockState_Params));

	this->ProcessEvent(uFnGetLastDifficultyModeLockState, &GetLastDifficultyModeLockState_Params, nullptr);

	return GetLastDifficultyModeLockState_Params.ReturnValue;
};

// Function DishonoredGame.DisDLC06MoviePlayerMainMenu.OnQuitDLC06Confirm
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47594])
// Parameter Info:

void UDisDLC06MoviePlayerMainMenu::OnQuitDLC06Confirm()
{
	static UFunction* uFnOnQuitDLC06Confirm = nullptr;

	if (!uFnOnQuitDLC06Confirm)
	{
		uFnOnQuitDLC06Confirm = UFunction::FindFunction("Function DishonoredGame.DisDLC06MoviePlayerMainMenu.OnQuitDLC06Confirm");
	}

	UDisDLC06MoviePlayerMainMenu_execOnQuitDLC06Confirm_Params OnQuitDLC06Confirm_Params;
	memset(&OnQuitDLC06Confirm_Params, 0, sizeof(OnQuitDLC06Confirm_Params));

	this->ProcessEvent(uFnOnQuitDLC06Confirm, &OnQuitDLC06Confirm_Params, nullptr);
};

// Function DishonoredGame.DisDLC06MoviePlayerMainMenu.DLC06_Credits
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[46198])
// Parameter Info:

void UDisDLC06MoviePlayerMainMenu::DLC06_Credits()
{
	static UFunction* uFnDLC06_Credits = nullptr;

	if (!uFnDLC06_Credits)
	{
		uFnDLC06_Credits = UFunction::FindFunction("Function DishonoredGame.DisDLC06MoviePlayerMainMenu.DLC06_Credits");
	}

	UDisDLC06MoviePlayerMainMenu_execDLC06_Credits_Params DLC06_Credits_Params;
	memset(&DLC06_Credits_Params, 0, sizeof(DLC06_Credits_Params));

	this->ProcessEvent(uFnDLC06_Credits, &DLC06_Credits_Params, nullptr);
};

// Function DishonoredGame.DisDLC07MoviePlayerMainMenu.DLC07_Credits
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[46201])
// Parameter Info:

void UDisDLC07MoviePlayerMainMenu::DLC07_Credits()
{
	static UFunction* uFnDLC07_Credits = nullptr;

	if (!uFnDLC07_Credits)
	{
		uFnDLC07_Credits = UFunction::FindFunction("Function DishonoredGame.DisDLC07MoviePlayerMainMenu.DLC07_Credits");
	}

	UDisDLC07MoviePlayerMainMenu_execDLC07_Credits_Params DLC07_Credits_Params;
	memset(&DLC07_Credits_Params, 0, sizeof(DLC07_Credits_Params));

	this->ProcessEvent(uFnDLC07_Credits, &DLC07_Credits_Params, nullptr);
};

// Function DishonoredGame.DisDLC07MoviePlayerMainMenu.OnQuitDLC07Confirm
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47595])
// Parameter Info:

void UDisDLC07MoviePlayerMainMenu::OnQuitDLC07Confirm()
{
	static UFunction* uFnOnQuitDLC07Confirm = nullptr;

	if (!uFnOnQuitDLC07Confirm)
	{
		uFnOnQuitDLC07Confirm = UFunction::FindFunction("Function DishonoredGame.DisDLC07MoviePlayerMainMenu.OnQuitDLC07Confirm");
	}

	UDisDLC07MoviePlayerMainMenu_execOnQuitDLC07Confirm_Params OnQuitDLC07Confirm_Params;
	memset(&OnQuitDLC07Confirm_Params, 0, sizeof(OnQuitDLC07Confirm_Params));

	this->ProcessEvent(uFnOnQuitDLC07Confirm, &OnQuitDLC07Confirm_Params, nullptr);
};

// Function DishonoredGame.DisDLC06BehaviorAssassinSalute.OnExitCallback_GenericAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43911])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pNextState                    (CPF_Parm)

void UDisDLC06BehaviorAssassinSalute::OnExitCallback_GenericAction(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pNextState)
{
	static UFunction* uFnOnExitCallback_GenericAction = nullptr;

	if (!uFnOnExitCallback_GenericAction)
	{
		uFnOnExitCallback_GenericAction = UFunction::FindFunction("Function DishonoredGame.DisDLC06BehaviorAssassinSalute.OnExitCallback_GenericAction");
	}

	UDisDLC06BehaviorAssassinSalute_execOnExitCallback_GenericAction_Params OnExitCallback_GenericAction_Params;
	memset(&OnExitCallback_GenericAction_Params, 0, sizeof(OnExitCallback_GenericAction_Params));
	OnExitCallback_GenericAction_Params._pThisState = _pThisState;
	OnExitCallback_GenericAction_Params._pNextState = _pNextState;

	this->ProcessEvent(uFnOnExitCallback_GenericAction, &OnExitCallback_GenericAction_Params, nullptr);
};

// Function DishonoredGame.DisDLC06BehaviorAssassinSalute.RequestStateExitCallback_GenericAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44741])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisDLC06BehaviorAssassinSalute::RequestStateExitCallback_GenericAction(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_GenericAction = nullptr;

	if (!uFnRequestStateExitCallback_GenericAction)
	{
		uFnRequestStateExitCallback_GenericAction = UFunction::FindFunction("Function DishonoredGame.DisDLC06BehaviorAssassinSalute.RequestStateExitCallback_GenericAction");
	}

	UDisDLC06BehaviorAssassinSalute_execRequestStateExitCallback_GenericAction_Params RequestStateExitCallback_GenericAction_Params;
	memset(&RequestStateExitCallback_GenericAction_Params, 0, sizeof(RequestStateExitCallback_GenericAction_Params));
	RequestStateExitCallback_GenericAction_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_GenericAction, &RequestStateExitCallback_GenericAction_Params, nullptr);
};

// Function DishonoredGame.DisDLC06BehaviorAssassinSalute.OnEnterCallback_GenericAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43901])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pNextState                    (CPF_Parm)

void UDisDLC06BehaviorAssassinSalute::OnEnterCallback_GenericAction(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pNextState)
{
	static UFunction* uFnOnEnterCallback_GenericAction = nullptr;

	if (!uFnOnEnterCallback_GenericAction)
	{
		uFnOnEnterCallback_GenericAction = UFunction::FindFunction("Function DishonoredGame.DisDLC06BehaviorAssassinSalute.OnEnterCallback_GenericAction");
	}

	UDisDLC06BehaviorAssassinSalute_execOnEnterCallback_GenericAction_Params OnEnterCallback_GenericAction_Params;
	memset(&OnEnterCallback_GenericAction_Params, 0, sizeof(OnEnterCallback_GenericAction_Params));
	OnEnterCallback_GenericAction_Params._pThisState = _pThisState;
	OnEnterCallback_GenericAction_Params._pNextState = _pNextState;

	this->ProcessEvent(uFnOnEnterCallback_GenericAction, &OnEnterCallback_GenericAction_Params, nullptr);
};

// Function DishonoredGame.DisDLC06BehaviorSummonedAssassinIdle.RequestStateExitCallback_GenericAction
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44741])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisDLC06BehaviorSummonedAssassinIdle::RequestStateExitCallback_GenericAction(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_GenericAction = nullptr;

	if (!uFnRequestStateExitCallback_GenericAction)
	{
		uFnRequestStateExitCallback_GenericAction = UFunction::FindFunction("Function DishonoredGame.DisDLC06BehaviorSummonedAssassinIdle.RequestStateExitCallback_GenericAction");
	}

	UDisDLC06BehaviorSummonedAssassinIdle_execRequestStateExitCallback_GenericAction_Params RequestStateExitCallback_GenericAction_Params;
	memset(&RequestStateExitCallback_GenericAction_Params, 0, sizeof(RequestStateExitCallback_GenericAction_Params));
	RequestStateExitCallback_GenericAction_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_GenericAction, &RequestStateExitCallback_GenericAction_Params, nullptr);
};

// Function DishonoredGame.DisDLC06Gadget_ArcMinePlaced.BaseChange
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[311])
// Parameter Info:

void ADisDLC06Gadget_ArcMinePlaced::eventBaseChange()
{
	static UFunction* uFnBaseChange = nullptr;

	if (!uFnBaseChange)
	{
		uFnBaseChange = UFunction::FindFunction("Function DishonoredGame.DisDLC06Gadget_ArcMinePlaced.BaseChange");
	}

	ADisDLC06Gadget_ArcMinePlaced_eventBaseChange_Params BaseChange_Params;
	memset(&BaseChange_Params, 0, sizeof(BaseChange_Params));

	this->ProcessEvent(uFnBaseChange, &BaseChange_Params, nullptr);
};

// Function DishonoredGame.DisDLC06Gadget_ArcMinePlaced.TakeDamage
// [0x00024C00] (FUNC_Native | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[13766])
// Parameter Info:
// int32_t                        Damage                         (CPF_Parm)
// class AController*             InstigatedBy                   (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 Momentum                       (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_OptionalParm | CPF_Parm)
// class AActor*                  DamageCauser                   (CPF_OptionalParm | CPF_Parm)

void ADisDLC06Gadget_ArcMinePlaced::eventTakeDamage(int32_t Damage, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static UFunction* uFnTakeDamage = nullptr;

	if (!uFnTakeDamage)
	{
		uFnTakeDamage = UFunction::FindFunction("Function DishonoredGame.DisDLC06Gadget_ArcMinePlaced.TakeDamage");
	}

	ADisDLC06Gadget_ArcMinePlaced_eventTakeDamage_Params TakeDamage_Params;
	memset(&TakeDamage_Params, 0, sizeof(TakeDamage_Params));
	memcpy_s(&TakeDamage_Params.Damage, sizeof(TakeDamage_Params.Damage), &Damage, sizeof(Damage));
	TakeDamage_Params.InstigatedBy = InstigatedBy;
	memcpy_s(&TakeDamage_Params.HitLocation, sizeof(TakeDamage_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&TakeDamage_Params.Momentum, sizeof(TakeDamage_Params.Momentum), &Momentum, sizeof(Momentum));
	TakeDamage_Params.DamageType = DamageType;
	memcpy_s(&TakeDamage_Params.HitInfo, sizeof(TakeDamage_Params.HitInfo), &HitInfo, sizeof(HitInfo));
	TakeDamage_Params.DamageCauser = DamageCauser;

	this->ProcessEvent(uFnTakeDamage, &TakeDamage_Params, nullptr);
};

// Function DishonoredGame.DisDLC07MoviePlayerJournal.Req_CharmsTabContent
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44706])
// Parameter Info:

void UDisDLC07MoviePlayerJournal::Req_CharmsTabContent()
{
	static UFunction* uFnReq_CharmsTabContent = nullptr;

	if (!uFnReq_CharmsTabContent)
	{
		uFnReq_CharmsTabContent = UFunction::FindFunction("Function DishonoredGame.DisDLC07MoviePlayerJournal.Req_CharmsTabContent");
	}

	UDisDLC07MoviePlayerJournal_execReq_CharmsTabContent_Params Req_CharmsTabContent_Params;
	memset(&Req_CharmsTabContent_Params, 0, sizeof(Req_CharmsTabContent_Params));

	this->ProcessEvent(uFnReq_CharmsTabContent, &Req_CharmsTabContent_Params, nullptr);
};

// Function DishonoredGame.DisDLC07MoviePlayerJournal.RemoveBoneCharm
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44691])
// Parameter Info:
// int32_t                        _ItemIdx                       (CPF_Parm)

void UDisDLC07MoviePlayerJournal::RemoveBoneCharm(int32_t _ItemIdx)
{
	static UFunction* uFnRemoveBoneCharm = nullptr;

	if (!uFnRemoveBoneCharm)
	{
		uFnRemoveBoneCharm = UFunction::FindFunction("Function DishonoredGame.DisDLC07MoviePlayerJournal.RemoveBoneCharm");
	}

	UDisDLC07MoviePlayerJournal_execRemoveBoneCharm_Params RemoveBoneCharm_Params;
	memset(&RemoveBoneCharm_Params, 0, sizeof(RemoveBoneCharm_Params));
	memcpy_s(&RemoveBoneCharm_Params._ItemIdx, sizeof(RemoveBoneCharm_Params._ItemIdx), &_ItemIdx, sizeof(_ItemIdx));

	this->ProcessEvent(uFnRemoveBoneCharm, &RemoveBoneCharm_Params, nullptr);
};

// Function DishonoredGame.DisDLC07MoviePlayerJournal.EquipBoneCharm
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34849])
// Parameter Info:
// int32_t                        _ItemIdx                       (CPF_Parm)

void UDisDLC07MoviePlayerJournal::EquipBoneCharm(int32_t _ItemIdx)
{
	static UFunction* uFnEquipBoneCharm = nullptr;

	if (!uFnEquipBoneCharm)
	{
		uFnEquipBoneCharm = UFunction::FindFunction("Function DishonoredGame.DisDLC07MoviePlayerJournal.EquipBoneCharm");
	}

	UDisDLC07MoviePlayerJournal_execEquipBoneCharm_Params EquipBoneCharm_Params;
	memset(&EquipBoneCharm_Params, 0, sizeof(EquipBoneCharm_Params));
	memcpy_s(&EquipBoneCharm_Params._ItemIdx, sizeof(EquipBoneCharm_Params._ItemIdx), &_ItemIdx, sizeof(_ItemIdx));

	this->ProcessEvent(uFnEquipBoneCharm, &EquipBoneCharm_Params, nullptr);
};

// Function DishonoredGame.DisDLC07BehaviorAssassinVsRiverKrustCombat.RequestStateExitCallback_TakePosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44746])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisDLC07BehaviorAssassinVsRiverKrustCombat::RequestStateExitCallback_TakePosition(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_TakePosition = nullptr;

	if (!uFnRequestStateExitCallback_TakePosition)
	{
		uFnRequestStateExitCallback_TakePosition = UFunction::FindFunction("Function DishonoredGame.DisDLC07BehaviorAssassinVsRiverKrustCombat.RequestStateExitCallback_TakePosition");
	}

	UDisDLC07BehaviorAssassinVsRiverKrustCombat_execRequestStateExitCallback_TakePosition_Params RequestStateExitCallback_TakePosition_Params;
	memset(&RequestStateExitCallback_TakePosition_Params, 0, sizeof(RequestStateExitCallback_TakePosition_Params));
	RequestStateExitCallback_TakePosition_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_TakePosition, &RequestStateExitCallback_TakePosition_Params, nullptr);
};

// Function DishonoredGame.DisDLC07BehaviorAssassinVsRiverKrustCombat.RefreshCallback_TakePosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44678])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fTimeSinceLastThought         (CPF_Parm)

void UDisDLC07BehaviorAssassinVsRiverKrustCombat::RefreshCallback_TakePosition(class UDisAISubState* _pThisState, float _fTimeSinceLastThought)
{
	static UFunction* uFnRefreshCallback_TakePosition = nullptr;

	if (!uFnRefreshCallback_TakePosition)
	{
		uFnRefreshCallback_TakePosition = UFunction::FindFunction("Function DishonoredGame.DisDLC07BehaviorAssassinVsRiverKrustCombat.RefreshCallback_TakePosition");
	}

	UDisDLC07BehaviorAssassinVsRiverKrustCombat_execRefreshCallback_TakePosition_Params RefreshCallback_TakePosition_Params;
	memset(&RefreshCallback_TakePosition_Params, 0, sizeof(RefreshCallback_TakePosition_Params));
	RefreshCallback_TakePosition_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_TakePosition_Params._fTimeSinceLastThought, sizeof(RefreshCallback_TakePosition_Params._fTimeSinceLastThought), &_fTimeSinceLastThought, sizeof(_fTimeSinceLastThought));

	this->ProcessEvent(uFnRefreshCallback_TakePosition, &RefreshCallback_TakePosition_Params, nullptr);
};

// Function DishonoredGame.DisDLC07BehaviorAssassinVsRiverKrustCombat.OnEnterCallback_TakePosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43907])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisDLC07BehaviorAssassinVsRiverKrustCombat::OnEnterCallback_TakePosition(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_TakePosition = nullptr;

	if (!uFnOnEnterCallback_TakePosition)
	{
		uFnOnEnterCallback_TakePosition = UFunction::FindFunction("Function DishonoredGame.DisDLC07BehaviorAssassinVsRiverKrustCombat.OnEnterCallback_TakePosition");
	}

	UDisDLC07BehaviorAssassinVsRiverKrustCombat_execOnEnterCallback_TakePosition_Params OnEnterCallback_TakePosition_Params;
	memset(&OnEnterCallback_TakePosition_Params, 0, sizeof(OnEnterCallback_TakePosition_Params));
	OnEnterCallback_TakePosition_Params._pThisState = _pThisState;
	OnEnterCallback_TakePosition_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_TakePosition, &OnEnterCallback_TakePosition_Params, nullptr);
};

// Function DishonoredGame.DisDLC07BehaviorAssassinVsRiverKrustCombat.RequestStateExitCallback_DoPullSpell
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47670])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisDLC07BehaviorAssassinVsRiverKrustCombat::RequestStateExitCallback_DoPullSpell(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_DoPullSpell = nullptr;

	if (!uFnRequestStateExitCallback_DoPullSpell)
	{
		uFnRequestStateExitCallback_DoPullSpell = UFunction::FindFunction("Function DishonoredGame.DisDLC07BehaviorAssassinVsRiverKrustCombat.RequestStateExitCallback_DoPullSpell");
	}

	UDisDLC07BehaviorAssassinVsRiverKrustCombat_execRequestStateExitCallback_DoPullSpell_Params RequestStateExitCallback_DoPullSpell_Params;
	memset(&RequestStateExitCallback_DoPullSpell_Params, 0, sizeof(RequestStateExitCallback_DoPullSpell_Params));
	RequestStateExitCallback_DoPullSpell_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_DoPullSpell, &RequestStateExitCallback_DoPullSpell_Params, nullptr);
};

// Function DishonoredGame.DisDLC07BehaviorAssassinVsRiverKrustCombat.RefreshCallback_Stand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[44676])
// Parameter Info:
// class UDisAISubState*          _pThisState                    (CPF_Parm)
// float                          _fTimeSinceLastThought         (CPF_Parm)

void UDisDLC07BehaviorAssassinVsRiverKrustCombat::RefreshCallback_Stand(class UDisAISubState* _pThisState, float _fTimeSinceLastThought)
{
	static UFunction* uFnRefreshCallback_Stand = nullptr;

	if (!uFnRefreshCallback_Stand)
	{
		uFnRefreshCallback_Stand = UFunction::FindFunction("Function DishonoredGame.DisDLC07BehaviorAssassinVsRiverKrustCombat.RefreshCallback_Stand");
	}

	UDisDLC07BehaviorAssassinVsRiverKrustCombat_execRefreshCallback_Stand_Params RefreshCallback_Stand_Params;
	memset(&RefreshCallback_Stand_Params, 0, sizeof(RefreshCallback_Stand_Params));
	RefreshCallback_Stand_Params._pThisState = _pThisState;
	memcpy_s(&RefreshCallback_Stand_Params._fTimeSinceLastThought, sizeof(RefreshCallback_Stand_Params._fTimeSinceLastThought), &_fTimeSinceLastThought, sizeof(_fTimeSinceLastThought));

	this->ProcessEvent(uFnRefreshCallback_Stand, &RefreshCallback_Stand_Params, nullptr);
};

// Function DishonoredGame.DisDLC07BehaviorAssassinVsRiverKrustCombat.OnEnterCallback_Stand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43905])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)
// class UDishonoredNativeState*  _pLastState                    (CPF_Parm)

void UDisDLC07BehaviorAssassinVsRiverKrustCombat::OnEnterCallback_Stand(class UDishonoredNativeState* _pThisState, class UDishonoredNativeState* _pLastState)
{
	static UFunction* uFnOnEnterCallback_Stand = nullptr;

	if (!uFnOnEnterCallback_Stand)
	{
		uFnOnEnterCallback_Stand = UFunction::FindFunction("Function DishonoredGame.DisDLC07BehaviorAssassinVsRiverKrustCombat.OnEnterCallback_Stand");
	}

	UDisDLC07BehaviorAssassinVsRiverKrustCombat_execOnEnterCallback_Stand_Params OnEnterCallback_Stand_Params;
	memset(&OnEnterCallback_Stand_Params, 0, sizeof(OnEnterCallback_Stand_Params));
	OnEnterCallback_Stand_Params._pThisState = _pThisState;
	OnEnterCallback_Stand_Params._pLastState = _pLastState;

	this->ProcessEvent(uFnOnEnterCallback_Stand, &OnEnterCallback_Stand_Params, nullptr);
};

// Function DishonoredGame.DisDLC07BehaviorTentacleIdle.RequestStateExitCallback_TentacleAttack
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47671])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisDLC07BehaviorTentacleIdle::RequestStateExitCallback_TentacleAttack(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_TentacleAttack = nullptr;

	if (!uFnRequestStateExitCallback_TentacleAttack)
	{
		uFnRequestStateExitCallback_TentacleAttack = UFunction::FindFunction("Function DishonoredGame.DisDLC07BehaviorTentacleIdle.RequestStateExitCallback_TentacleAttack");
	}

	UDisDLC07BehaviorTentacleIdle_execRequestStateExitCallback_TentacleAttack_Params RequestStateExitCallback_TentacleAttack_Params;
	memset(&RequestStateExitCallback_TentacleAttack_Params, 0, sizeof(RequestStateExitCallback_TentacleAttack_Params));
	RequestStateExitCallback_TentacleAttack_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_TentacleAttack, &RequestStateExitCallback_TentacleAttack_Params, nullptr);
};

// Function DishonoredGame.DisDLC07BehaviorTentacleIdle.RequestStateExitCallback_TentacleSpawn
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47672])
// Parameter Info:
// class UDishonoredNativeState*  _pThisState                    (CPF_Parm)

void UDisDLC07BehaviorTentacleIdle::RequestStateExitCallback_TentacleSpawn(class UDishonoredNativeState* _pThisState)
{
	static UFunction* uFnRequestStateExitCallback_TentacleSpawn = nullptr;

	if (!uFnRequestStateExitCallback_TentacleSpawn)
	{
		uFnRequestStateExitCallback_TentacleSpawn = UFunction::FindFunction("Function DishonoredGame.DisDLC07BehaviorTentacleIdle.RequestStateExitCallback_TentacleSpawn");
	}

	UDisDLC07BehaviorTentacleIdle_execRequestStateExitCallback_TentacleSpawn_Params RequestStateExitCallback_TentacleSpawn_Params;
	memset(&RequestStateExitCallback_TentacleSpawn_Params, 0, sizeof(RequestStateExitCallback_TentacleSpawn_Params));
	RequestStateExitCallback_TentacleSpawn_Params._pThisState = _pThisState;

	this->ProcessEvent(uFnRequestStateExitCallback_TentacleSpawn, &RequestStateExitCallback_TentacleSpawn_Params, nullptr);
};

// Function DishonoredGame.DisDLC07NPCPawn.OnNPCEnrage
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47589])
// Parameter Info:
// class UDisDLC07SeqAct_NPCEnrage* _pAction                       (CPF_Parm)

void ADisDLC07NPCPawn::OnNPCEnrage(class UDisDLC07SeqAct_NPCEnrage* _pAction)
{
	static UFunction* uFnOnNPCEnrage = nullptr;

	if (!uFnOnNPCEnrage)
	{
		uFnOnNPCEnrage = UFunction::FindFunction("Function DishonoredGame.DisDLC07NPCPawn.OnNPCEnrage");
	}

	ADisDLC07NPCPawn_execOnNPCEnrage_Params OnNPCEnrage_Params;
	memset(&OnNPCEnrage_Params, 0, sizeof(OnNPCEnrage_Params));
	OnNPCEnrage_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnNPCEnrage, &OnNPCEnrage_Params, nullptr);
};

// Function DishonoredGame.DisDLC07NPCPawn.TakeDamage_Native
// [0x00424400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[45311])
// Parameter Info:
// class AController*             _pInstigatedBy                 (CPF_Parm)
// struct FVector                 _HitLocation                   (CPF_Parm)
// class UClass*                  _pDamageType                   (CPF_Parm)
// struct FTraceHitInfo           _HitInfo                       (CPF_OptionalParm | CPF_Parm)
// class AActor*                  _pDamageCauser                 (CPF_OptionalParm | CPF_Parm)
// int32_t                        _rDamage                       (CPF_Parm | CPF_OutParm)
// struct FVector                 _rMomentum                     (CPF_Parm | CPF_OutParm)

void ADisDLC07NPCPawn::TakeDamage_Native(class AController* _pInstigatedBy, const struct FVector& _HitLocation, class UClass* _pDamageType, const struct FTraceHitInfo& _HitInfo, class AActor* _pDamageCauser, int32_t& _rDamage, struct FVector& _rMomentum)
{
	static UFunction* uFnTakeDamage_Native = nullptr;

	if (!uFnTakeDamage_Native)
	{
		uFnTakeDamage_Native = UFunction::FindFunction("Function DishonoredGame.DisDLC07NPCPawn.TakeDamage_Native");
	}

	ADisDLC07NPCPawn_execTakeDamage_Native_Params TakeDamage_Native_Params;
	memset(&TakeDamage_Native_Params, 0, sizeof(TakeDamage_Native_Params));
	TakeDamage_Native_Params._pInstigatedBy = _pInstigatedBy;
	memcpy_s(&TakeDamage_Native_Params._HitLocation, sizeof(TakeDamage_Native_Params._HitLocation), &_HitLocation, sizeof(_HitLocation));
	TakeDamage_Native_Params._pDamageType = _pDamageType;
	memcpy_s(&TakeDamage_Native_Params._HitInfo, sizeof(TakeDamage_Native_Params._HitInfo), &_HitInfo, sizeof(_HitInfo));
	TakeDamage_Native_Params._pDamageCauser = _pDamageCauser;
	memcpy_s(&TakeDamage_Native_Params._rDamage, sizeof(TakeDamage_Native_Params._rDamage), &_rDamage, sizeof(_rDamage));
	memcpy_s(&TakeDamage_Native_Params._rMomentum, sizeof(TakeDamage_Native_Params._rMomentum), &_rMomentum, sizeof(_rMomentum));

	this->ProcessEvent(uFnTakeDamage_Native, &TakeDamage_Native_Params, nullptr);

	memcpy_s(&_rDamage, sizeof(_rDamage), &TakeDamage_Native_Params._rDamage, sizeof(TakeDamage_Native_Params._rDamage));
	memcpy_s(&_rMomentum, sizeof(_rMomentum), &TakeDamage_Native_Params._rMomentum, sizeof(TakeDamage_Native_Params._rMomentum));
};

// Function DishonoredGame.DisDLC07GravehoundSpawner.NotifyPathChanged
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ADisDLC07GravehoundSpawner::eventNotifyPathChanged()
{
	static UFunction* uFnNotifyPathChanged = nullptr;

	if (!uFnNotifyPathChanged)
	{
		uFnNotifyPathChanged = UFunction::FindFunction("Function DishonoredGame.DisDLC07GravehoundSpawner.NotifyPathChanged");
	}

	ADisDLC07GravehoundSpawner_eventNotifyPathChanged_Params NotifyPathChanged_Params;
	memset(&NotifyPathChanged_Params, 0, sizeof(NotifyPathChanged_Params));

	this->ProcessEvent(uFnNotifyPathChanged, &NotifyPathChanged_Params, nullptr);
};

// Function DishonoredGame.DisDLC07GravehoundSpawner.OnStartSpawn
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43990])
// Parameter Info:
// class UDisSeqAct_StartSpawn*   _pAction                       (CPF_Parm)

void ADisDLC07GravehoundSpawner::OnStartSpawn(class UDisSeqAct_StartSpawn* _pAction)
{
	static UFunction* uFnOnStartSpawn = nullptr;

	if (!uFnOnStartSpawn)
	{
		uFnOnStartSpawn = UFunction::FindFunction("Function DishonoredGame.DisDLC07GravehoundSpawner.OnStartSpawn");
	}

	ADisDLC07GravehoundSpawner_execOnStartSpawn_Params OnStartSpawn_Params;
	memset(&OnStartSpawn_Params, 0, sizeof(OnStartSpawn_Params));
	OnStartSpawn_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnStartSpawn, &OnStartSpawn_Params, nullptr);
};

// Function DishonoredGame.DisDLC07GravehoundSpawner.OnPermaKill
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47591])
// Parameter Info:
// class UDisDLC07SeqAct_PermaKill* _pAction                       (CPF_Parm)

void ADisDLC07GravehoundSpawner::OnPermaKill(class UDisDLC07SeqAct_PermaKill* _pAction)
{
	static UFunction* uFnOnPermaKill = nullptr;

	if (!uFnOnPermaKill)
	{
		uFnOnPermaKill = UFunction::FindFunction("Function DishonoredGame.DisDLC07GravehoundSpawner.OnPermaKill");
	}

	ADisDLC07GravehoundSpawner_execOnPermaKill_Params OnPermaKill_Params;
	memset(&OnPermaKill_Params, 0, sizeof(OnPermaKill_Params));
	OnPermaKill_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnPermaKill, &OnPermaKill_Params, nullptr);
};

// Function DishonoredGame.DisDLC07CheatManager.GiveCrackedBoneCharm
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[46531])
// Parameter Info:

void UDisDLC07CheatManager::GiveCrackedBoneCharm()
{
	static UFunction* uFnGiveCrackedBoneCharm = nullptr;

	if (!uFnGiveCrackedBoneCharm)
	{
		uFnGiveCrackedBoneCharm = UFunction::FindFunction("Function DishonoredGame.DisDLC07CheatManager.GiveCrackedBoneCharm");
	}

	UDisDLC07CheatManager_execGiveCrackedBoneCharm_Params GiveCrackedBoneCharm_Params;
	memset(&GiveCrackedBoneCharm_Params, 0, sizeof(GiveCrackedBoneCharm_Params));

	this->ProcessEvent(uFnGiveCrackedBoneCharm, &GiveCrackedBoneCharm_Params, nullptr);
};

// Function DishonoredGame.DisDLC07CheatManager.RecreateEndgameDaud
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47653])
// Parameter Info:

void UDisDLC07CheatManager::RecreateEndgameDaud()
{
	static UFunction* uFnRecreateEndgameDaud = nullptr;

	if (!uFnRecreateEndgameDaud)
	{
		uFnRecreateEndgameDaud = UFunction::FindFunction("Function DishonoredGame.DisDLC07CheatManager.RecreateEndgameDaud");
	}

	UDisDLC07CheatManager_execRecreateEndgameDaud_Params RecreateEndgameDaud_Params;
	memset(&RecreateEndgameDaud_Params, 0, sizeof(RecreateEndgameDaud_Params));

	this->ProcessEvent(uFnRecreateEndgameDaud, &RecreateEndgameDaud_Params, nullptr);
};

// Function DishonoredGame.DisDLC07CheatManager.LoadEndgameDaud
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[46570])
// Parameter Info:
// uint32_t                       _bHighChaos                    (CPF_Parm)

void UDisDLC07CheatManager::LoadEndgameDaud(bool _bHighChaos)
{
	static UFunction* uFnLoadEndgameDaud = nullptr;

	if (!uFnLoadEndgameDaud)
	{
		uFnLoadEndgameDaud = UFunction::FindFunction("Function DishonoredGame.DisDLC07CheatManager.LoadEndgameDaud");
	}

	UDisDLC07CheatManager_execLoadEndgameDaud_Params LoadEndgameDaud_Params;
	memset(&LoadEndgameDaud_Params, 0, sizeof(LoadEndgameDaud_Params));
	LoadEndgameDaud_Params._bHighChaos = _bHighChaos;

	this->ProcessEvent(uFnLoadEndgameDaud, &LoadEndgameDaud_Params, nullptr);
};

// Function DishonoredGame.DisDLC07CheatManager.SaveEndgameDaud
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47679])
// Parameter Info:
// uint32_t                       _bHighChaos                    (CPF_Parm)

void UDisDLC07CheatManager::SaveEndgameDaud(bool _bHighChaos)
{
	static UFunction* uFnSaveEndgameDaud = nullptr;

	if (!uFnSaveEndgameDaud)
	{
		uFnSaveEndgameDaud = UFunction::FindFunction("Function DishonoredGame.DisDLC07CheatManager.SaveEndgameDaud");
	}

	UDisDLC07CheatManager_execSaveEndgameDaud_Params SaveEndgameDaud_Params;
	memset(&SaveEndgameDaud_Params, 0, sizeof(SaveEndgameDaud_Params));
	SaveEndgameDaud_Params._bHighChaos = _bHighChaos;

	this->ProcessEvent(uFnSaveEndgameDaud, &SaveEndgameDaud_Params, nullptr);
};

// Function DishonoredGame.DisDLC07CheatManager.PrintHighClassUniques
// [0x00024600] (FUNC_Exec | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[47637])
// Parameter Info:
// int32_t                        _Threshold                     (CPF_OptionalParm | CPF_Parm)
// class FName                    _ClassName                     (CPF_OptionalParm | CPF_Parm)

void UDisDLC07CheatManager::PrintHighClassUniques(int32_t _Threshold, const class FName& _ClassName)
{
	static UFunction* uFnPrintHighClassUniques = nullptr;

	if (!uFnPrintHighClassUniques)
	{
		uFnPrintHighClassUniques = UFunction::FindFunction("Function DishonoredGame.DisDLC07CheatManager.PrintHighClassUniques");
	}

	UDisDLC07CheatManager_execPrintHighClassUniques_Params PrintHighClassUniques_Params;
	memset(&PrintHighClassUniques_Params, 0, sizeof(PrintHighClassUniques_Params));
	memcpy_s(&PrintHighClassUniques_Params._Threshold, sizeof(PrintHighClassUniques_Params._Threshold), &_Threshold, sizeof(_Threshold));
	memcpy_s(&PrintHighClassUniques_Params._ClassName, sizeof(PrintHighClassUniques_Params._ClassName), &_ClassName, sizeof(_ClassName));

	this->ProcessEvent(uFnPrintHighClassUniques, &PrintHighClassUniques_Params, nullptr);
};

// Function DishonoredGame.DisDLC07CheatManager.I_AM_DAUD
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[46551])
// Parameter Info:

void UDisDLC07CheatManager::I_AM_DAUD()
{
	static UFunction* uFnI_AM_DAUD = nullptr;

	if (!uFnI_AM_DAUD)
	{
		uFnI_AM_DAUD = UFunction::FindFunction("Function DishonoredGame.DisDLC07CheatManager.I_AM_DAUD");
	}

	UDisDLC07CheatManager_execI_AM_DAUD_Params I_AM_DAUD_Params;
	memset(&I_AM_DAUD_Params, 0, sizeof(I_AM_DAUD_Params));

	this->ProcessEvent(uFnI_AM_DAUD, &I_AM_DAUD_Params, nullptr);
};

// Function DishonoredGame.DisDLC07CheatManager.MaxItems
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[43661])
// Parameter Info:

void UDisDLC07CheatManager::MaxItems()
{
	static UFunction* uFnMaxItems = nullptr;

	if (!uFnMaxItems)
	{
		uFnMaxItems = UFunction::FindFunction("Function DishonoredGame.DisDLC07CheatManager.MaxItems");
	}

	UDisDLC07CheatManager_execMaxItems_Params MaxItems_Params;
	memset(&MaxItems_Params, 0, sizeof(MaxItems_Params));

	this->ProcessEvent(uFnMaxItems, &MaxItems_Params, nullptr);
};

// Function DishonoredGame.DisDLC07PlayerPawn.OnClearTutorials
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47580])
// Parameter Info:
// class UDisDLC07SeqAct_ClearTutorials* _pAction                       (CPF_Parm)

void ADisDLC07PlayerPawn::OnClearTutorials(class UDisDLC07SeqAct_ClearTutorials* _pAction)
{
	static UFunction* uFnOnClearTutorials = nullptr;

	if (!uFnOnClearTutorials)
	{
		uFnOnClearTutorials = UFunction::FindFunction("Function DishonoredGame.DisDLC07PlayerPawn.OnClearTutorials");
	}

	ADisDLC07PlayerPawn_execOnClearTutorials_Params OnClearTutorials_Params;
	memset(&OnClearTutorials_Params, 0, sizeof(OnClearTutorials_Params));
	OnClearTutorials_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnClearTutorials, &OnClearTutorials_Params, nullptr);
};

// Function DishonoredGame.DisDLC07PlayerPawn.OnToggleSaving
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47597])
// Parameter Info:
// class UDisDLC07SeqAct_ToggleSaving* _pAction                       (CPF_Parm)

void ADisDLC07PlayerPawn::OnToggleSaving(class UDisDLC07SeqAct_ToggleSaving* _pAction)
{
	static UFunction* uFnOnToggleSaving = nullptr;

	if (!uFnOnToggleSaving)
	{
		uFnOnToggleSaving = UFunction::FindFunction("Function DishonoredGame.DisDLC07PlayerPawn.OnToggleSaving");
	}

	ADisDLC07PlayerPawn_execOnToggleSaving_Params OnToggleSaving_Params;
	memset(&OnToggleSaving_Params, 0, sizeof(OnToggleSaving_Params));
	OnToggleSaving_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnToggleSaving, &OnToggleSaving_Params, nullptr);
};

// Function DishonoredGame.DisDLC07PlayerPawn.OnEndDLC07
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47584])
// Parameter Info:
// class UDisDLC07SeqAct_EndDLC07* _pAction                       (CPF_Parm)

void ADisDLC07PlayerPawn::OnEndDLC07(class UDisDLC07SeqAct_EndDLC07* _pAction)
{
	static UFunction* uFnOnEndDLC07 = nullptr;

	if (!uFnOnEndDLC07)
	{
		uFnOnEndDLC07 = UFunction::FindFunction("Function DishonoredGame.DisDLC07PlayerPawn.OnEndDLC07");
	}

	ADisDLC07PlayerPawn_execOnEndDLC07_Params OnEndDLC07_Params;
	memset(&OnEndDLC07_Params, 0, sizeof(OnEndDLC07_Params));
	OnEndDLC07_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnEndDLC07, &OnEndDLC07_Params, nullptr);
};

// Function DishonoredGame.DisDLC07PlayerPawn.JumpOffPawn
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[21449])
// Parameter Info:

void ADisDLC07PlayerPawn::JumpOffPawn()
{
	static UFunction* uFnJumpOffPawn = nullptr;

	if (!uFnJumpOffPawn)
	{
		uFnJumpOffPawn = UFunction::FindFunction("Function DishonoredGame.DisDLC07PlayerPawn.JumpOffPawn");
	}

	ADisDLC07PlayerPawn_execJumpOffPawn_Params JumpOffPawn_Params;
	memset(&JumpOffPawn_Params, 0, sizeof(JumpOffPawn_Params));

	this->ProcessEvent(uFnJumpOffPawn, &JumpOffPawn_Params, nullptr);
};

// Function DishonoredGame.DisDLC07PlayerPawn.TakeDamage_Native
// [0x00424400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[45311])
// Parameter Info:
// class AController*             _pInstigatedBy                 (CPF_Parm)
// struct FVector                 _HitLocation                   (CPF_Parm)
// class UClass*                  _pDamageType                   (CPF_Parm)
// struct FTraceHitInfo           _HitInfo                       (CPF_OptionalParm | CPF_Parm)
// class AActor*                  _pDamageCauser                 (CPF_OptionalParm | CPF_Parm)
// int32_t                        _rDamage                       (CPF_Parm | CPF_OutParm)
// struct FVector                 _rMomentum                     (CPF_Parm | CPF_OutParm)

void ADisDLC07PlayerPawn::TakeDamage_Native(class AController* _pInstigatedBy, const struct FVector& _HitLocation, class UClass* _pDamageType, const struct FTraceHitInfo& _HitInfo, class AActor* _pDamageCauser, int32_t& _rDamage, struct FVector& _rMomentum)
{
	static UFunction* uFnTakeDamage_Native = nullptr;

	if (!uFnTakeDamage_Native)
	{
		uFnTakeDamage_Native = UFunction::FindFunction("Function DishonoredGame.DisDLC07PlayerPawn.TakeDamage_Native");
	}

	ADisDLC07PlayerPawn_execTakeDamage_Native_Params TakeDamage_Native_Params;
	memset(&TakeDamage_Native_Params, 0, sizeof(TakeDamage_Native_Params));
	TakeDamage_Native_Params._pInstigatedBy = _pInstigatedBy;
	memcpy_s(&TakeDamage_Native_Params._HitLocation, sizeof(TakeDamage_Native_Params._HitLocation), &_HitLocation, sizeof(_HitLocation));
	TakeDamage_Native_Params._pDamageType = _pDamageType;
	memcpy_s(&TakeDamage_Native_Params._HitInfo, sizeof(TakeDamage_Native_Params._HitInfo), &_HitInfo, sizeof(_HitInfo));
	TakeDamage_Native_Params._pDamageCauser = _pDamageCauser;
	memcpy_s(&TakeDamage_Native_Params._rDamage, sizeof(TakeDamage_Native_Params._rDamage), &_rDamage, sizeof(_rDamage));
	memcpy_s(&TakeDamage_Native_Params._rMomentum, sizeof(TakeDamage_Native_Params._rMomentum), &_rMomentum, sizeof(_rMomentum));

	this->ProcessEvent(uFnTakeDamage_Native, &TakeDamage_Native_Params, nullptr);

	memcpy_s(&_rDamage, sizeof(_rDamage), &TakeDamage_Native_Params._rDamage, sizeof(TakeDamage_Native_Params._rDamage));
	memcpy_s(&_rMomentum, sizeof(_rMomentum), &TakeDamage_Native_Params._rMomentum, sizeof(TakeDamage_Native_Params._rMomentum));
};

// Function DishonoredGame.DisDLC07PlayerPawn.DisplayDebug_Native
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[32321])
// Parameter Info:
// class AHUD*                    _pHUD                          (CPF_Parm)
// float                          _rfOut_YL                      (CPF_Parm | CPF_OutParm)
// float                          _rfOut_YPos                    (CPF_Parm | CPF_OutParm)

void ADisDLC07PlayerPawn::DisplayDebug_Native(class AHUD* _pHUD, float& _rfOut_YL, float& _rfOut_YPos)
{
	static UFunction* uFnDisplayDebug_Native = nullptr;

	if (!uFnDisplayDebug_Native)
	{
		uFnDisplayDebug_Native = UFunction::FindFunction("Function DishonoredGame.DisDLC07PlayerPawn.DisplayDebug_Native");
	}

	ADisDLC07PlayerPawn_execDisplayDebug_Native_Params DisplayDebug_Native_Params;
	memset(&DisplayDebug_Native_Params, 0, sizeof(DisplayDebug_Native_Params));
	DisplayDebug_Native_Params._pHUD = _pHUD;
	memcpy_s(&DisplayDebug_Native_Params._rfOut_YL, sizeof(DisplayDebug_Native_Params._rfOut_YL), &_rfOut_YL, sizeof(_rfOut_YL));
	memcpy_s(&DisplayDebug_Native_Params._rfOut_YPos, sizeof(DisplayDebug_Native_Params._rfOut_YPos), &_rfOut_YPos, sizeof(_rfOut_YPos));

	this->ProcessEvent(uFnDisplayDebug_Native, &DisplayDebug_Native_Params, nullptr);

	memcpy_s(&_rfOut_YL, sizeof(_rfOut_YL), &DisplayDebug_Native_Params._rfOut_YL, sizeof(DisplayDebug_Native_Params._rfOut_YL));
	memcpy_s(&_rfOut_YPos, sizeof(_rfOut_YPos), &DisplayDebug_Native_Params._rfOut_YPos, sizeof(DisplayDebug_Native_Params._rfOut_YPos));
};

// Function DishonoredGame.DisDLC07WhaleBoneCharmCracked.OnSetBoneCharmCrackedEffect
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[47596])
// Parameter Info:
// class UDisDLC07SeqAct_SetBoneCharmCrackedEffect* _pAction                       (CPF_Parm)

void ADisDLC07WhaleBoneCharmCracked::OnSetBoneCharmCrackedEffect(class UDisDLC07SeqAct_SetBoneCharmCrackedEffect* _pAction)
{
	static UFunction* uFnOnSetBoneCharmCrackedEffect = nullptr;

	if (!uFnOnSetBoneCharmCrackedEffect)
	{
		uFnOnSetBoneCharmCrackedEffect = UFunction::FindFunction("Function DishonoredGame.DisDLC07WhaleBoneCharmCracked.OnSetBoneCharmCrackedEffect");
	}

	ADisDLC07WhaleBoneCharmCracked_execOnSetBoneCharmCrackedEffect_Params OnSetBoneCharmCrackedEffect_Params;
	memset(&OnSetBoneCharmCrackedEffect_Params, 0, sizeof(OnSetBoneCharmCrackedEffect_Params));
	OnSetBoneCharmCrackedEffect_Params._pAction = _pAction;

	this->ProcessEvent(uFnOnSetBoneCharmCrackedEffect, &OnSetBoneCharmCrackedEffect_Params, nullptr);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
