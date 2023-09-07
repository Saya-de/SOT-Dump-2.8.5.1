// Class AdventureOnDemandFramework.AdventureOnDemandAreCrewNearQuestTargetStep
// Size: 0x98 (Inherited: 0x98)
struct UAdventureOnDemandAreCrewNearQuestTargetStep : UTaleQuestStep {
};

// Class AdventureOnDemandFramework.AdventureOnDemandAreCrewNearQuestTargetStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct UAdventureOnDemandAreCrewNearQuestTargetStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableBool AreCrewNearQuestTarget; // 0x80(0x30)
};

// Class AdventureOnDemandFramework.AdventureOnDemandArrivalTunnelDependencies
// Size: 0xf8 (Inherited: 0xd8)
struct UAdventureOnDemandArrivalTunnelDependencies : UArrivalTunnelDependencies {
	TScriptInterface<struct UAdventureOnDemandServiceInterface> AdventureOnDemandService; // 0xd8(0x10)
	TScriptInterface<struct UGameEventSchedulerServiceInterface> GameEventSchedulerService; // 0xe8(0x10)
};

// Class AdventureOnDemandFramework.AdventureOnDemandArrivalTunnelWorkerBase
// Size: 0x30 (Inherited: 0x28)
struct UAdventureOnDemandArrivalTunnelWorkerBase : UObject {
	struct UWorld* WorldPtr; // 0x28(0x08)
};

// Class AdventureOnDemandFramework.AdventureOnDemandArrivalTunnelDesc
// Size: 0xd8 (Inherited: 0xb0)
struct UAdventureOnDemandArrivalTunnelDesc : UClientDestinationPreLoadingArrivalTunnelDesc {
	struct FVector ResurfaceLocationOffset; // 0xb0(0x0c)
	char UnknownData_BC[0x4]; // 0xbc(0x04)
	struct UAdventureOnDemandArrivalTunnelWorkerBase* DefaultArrivalLocationWorkerClass; // 0xc0(0x08)
	struct UEnvQuery* ResurfaceLocationEQ; // 0xc8(0x08)
	bool ShouldExcludeCrewFromBeingTargetedForGameEvents; // 0xd0(0x01)
	char UnknownData_D1[0x3]; // 0xd1(0x03)
	float ExclusionTimerFromBeingTargetedForGameEvents; // 0xd4(0x04)
};

// Class AdventureOnDemandFramework.AdventureOnDemandArrivalTunnelOfTheDamned
// Size: 0x700 (Inherited: 0x6a0)
struct AAdventureOnDemandArrivalTunnelOfTheDamned : AClientDestinationPreLoadingArrivalTunnelOfTheDamned {
	char UnknownData_6A0[0x28]; // 0x6a0(0x28)
	struct UAdventureOnDemandArrivalTunnelDesc* AdventureOnDemandArrivalTunnelDesc; // 0x6c8(0x08)
	struct UAdventureOnDemandArrivalTunnelWorkerBase* ArrivalLocationWorker; // 0x6d0(0x08)
	TScriptInterface<struct UAdventureOnDemandServiceInterface> AdventureOnDemandServiceWeakPtr; // 0x6d8(0x10)
	TScriptInterface<struct UGameEventSchedulerServiceInterface> GameEventSchedulerServiceWeakPtr; // 0x6e8(0x10)
	char UnknownData_6F8[0x8]; // 0x6f8(0x08)
};

// Class AdventureOnDemandFramework.VoyageOnDemandArrivalTunnelWorker
// Size: 0x30 (Inherited: 0x30)
struct UVoyageOnDemandArrivalTunnelWorker : UAdventureOnDemandArrivalTunnelWorkerBase {
};

// Class AdventureOnDemandFramework.AdventureOnDemandDepartureTunnelDependencies
// Size: 0x148 (Inherited: 0x138)
struct UAdventureOnDemandDepartureTunnelDependencies : UDepartureTunnelDependencies {
	TScriptInterface<struct UAdventureOnDemandServiceInterface> AdventureOnDemandService; // 0x138(0x10)
};

// Class AdventureOnDemandFramework.GameEventOnDemandDepartureTunnelDependencies
// Size: 0x148 (Inherited: 0x148)
struct UGameEventOnDemandDepartureTunnelDependencies : UAdventureOnDemandDepartureTunnelDependencies {
};

// Class AdventureOnDemandFramework.VoyageOnDemandDepartureTunnelDependencies
// Size: 0x148 (Inherited: 0x148)
struct UVoyageOnDemandDepartureTunnelDependencies : UAdventureOnDemandDepartureTunnelDependencies {
};

// Class AdventureOnDemandFramework.AdventureOnDemandDepartureTunnelDesc
// Size: 0x128 (Inherited: 0x118)
struct UAdventureOnDemandDepartureTunnelDesc : UDepartureTunnelDesc {
	float SecondsAfterCrewArriveInTunnelBeforeAllowingTunnelCancellation; // 0x118(0x04)
	float SecondsBetweenTunnelCancellationPopupReminder; // 0x11c(0x04)
	struct UPopUpMessageDesc* DefaultTunnelCancellationAvailableReminderPopup; // 0x120(0x08)
};

// Class AdventureOnDemandFramework.GameEventOnDemandDepartureTunnelDesc
// Size: 0x148 (Inherited: 0x128)
struct UGameEventOnDemandDepartureTunnelDesc : UAdventureOnDemandDepartureTunnelDesc {
	struct UClass* GameEventType; // 0x128(0x20)
};

// Class AdventureOnDemandFramework.VoyageOnDemandDepartureTunnelDesc
// Size: 0x128 (Inherited: 0x128)
struct UVoyageOnDemandDepartureTunnelDesc : UAdventureOnDemandDepartureTunnelDesc {
};

// Class AdventureOnDemandFramework.AdventureOnDemandDepartureTunnelOfTheDamned
// Size: 0x8e0 (Inherited: 0x8c0)
struct AAdventureOnDemandDepartureTunnelOfTheDamned : ADepartureTunnelOfTheDamned {
	struct UAdventureOnDemandDepartureTunnelDesc* AdventureOnDemandDepartureTunnelDesc; // 0x8b8(0x08)
	TScriptInterface<struct UAdventureOnDemandServiceInterface> AdventureOnDemandService; // 0x8c0(0x10)
	char UnknownData_8D8[0x8]; // 0x8d8(0x08)
};

// Class AdventureOnDemandFramework.GameEventOnDemandDepartureTunnelOfTheDamned
// Size: 0x8e0 (Inherited: 0x8e0)
struct AGameEventOnDemandDepartureTunnelOfTheDamned : AAdventureOnDemandDepartureTunnelOfTheDamned {
	struct UGameEventOnDemandDepartureTunnelDesc* GameEventOnDemandDepartureTunnelDesc; // 0x8d8(0x08)
};

// Class AdventureOnDemandFramework.VoyageOnDemandDepartureTunnelOfTheDamned
// Size: 0x8e0 (Inherited: 0x8e0)
struct AVoyageOnDemandDepartureTunnelOfTheDamned : AAdventureOnDemandDepartureTunnelOfTheDamned {
	struct UVoyageOnDemandDepartureTunnelDesc* VoyageOnDemandDepartureTunnelDesc; // 0x8d8(0x08)
};

// Class AdventureOnDemandFramework.AdventureOnDemandDisplayHintPopUpStep
// Size: 0x98 (Inherited: 0x98)
struct UAdventureOnDemandDisplayHintPopUpStep : UTaleQuestStep {
};

// Class AdventureOnDemandFramework.AdventureOnDemandDisplayHintPopUpStepDesc
// Size: 0x80 (Inherited: 0x80)
struct UAdventureOnDemandDisplayHintPopUpStepDesc : UTaleQuestStepDesc {
};

// Class AdventureOnDemandFramework.AdventureOnDemandForceIslandBannerStep
// Size: 0x98 (Inherited: 0x98)
struct UAdventureOnDemandForceIslandBannerStep : UTaleQuestStep {
};

// Class AdventureOnDemandFramework.AdventureOnDemandForceIslandBannerStepDesc
// Size: 0x80 (Inherited: 0x80)
struct UAdventureOnDemandForceIslandBannerStepDesc : UTaleQuestStepDesc {
};

// Class AdventureOnDemandFramework.AdventureOnDemandGetIsDivingToTunnelStep
// Size: 0x98 (Inherited: 0x98)
struct UAdventureOnDemandGetIsDivingToTunnelStep : UTaleQuestStep {
};

// Class AdventureOnDemandFramework.AdventureOnDemandGetIsDivingToTunnelStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct UAdventureOnDemandGetIsDivingToTunnelStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableBool IsCrewDivingToTunnel; // 0x80(0x30)
};

// Class AdventureOnDemandFramework.AdventureOnDemandGetTunnelDescStep
// Size: 0x98 (Inherited: 0x98)
struct UAdventureOnDemandGetTunnelDescStep : UTaleQuestStep {
};

// Class AdventureOnDemandFramework.AdventureOnDemandGetTunnelDescStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct UAdventureOnDemandGetTunnelDescStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableDataAsset TunnelDesc; // 0x80(0x30)
};

// Class AdventureOnDemandFramework.AdventureOnDemandLocationRequestDataAsset
// Size: 0x40 (Inherited: 0x28)
struct UAdventureOnDemandLocationRequestDataAsset : UDataAsset {
	struct TArray<struct FVector2D> SeaBasedGameEventLocations; // 0x28(0x10)
	struct UEnvQuery* SeaBasedGameEventQuery; // 0x38(0x08)
};

// Class AdventureOnDemandFramework.AdventureOnDemandServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UAdventureOnDemandServiceInterface : UInterface {
};

// Class AdventureOnDemandFramework.AdventureOnDemandServiceParams
// Size: 0x70 (Inherited: 0x28)
struct UAdventureOnDemandServiceParams : UDataAsset {
	struct UVoyageDescDataAsset* DiveToTunnelVoyageDesc; // 0x28(0x08)
	struct UTunnelDesc* VoyageTunnelDesc; // 0x30(0x08)
	struct UVoyageDescDataAsset* LeaveTunnelVoyageDesc; // 0x38(0x08)
	struct TArray<struct FExtraSpawnDistanceFromIsland> ExtraSpawnDistanceFromIsland; // 0x40(0x10)
	float WorldEventsCooldown; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
	struct UAdventureOnDemandLocationRequestDataAsset* LocationRequestDataAsset; // 0x58(0x08)
	struct UGameEventsOnDemandBannerTextDataAsset* GameEventsOnDemandBannerTextDataAsset; // 0x60(0x08)
	struct UClass* HuntersCallCompany; // 0x68(0x08)
};

// Class AdventureOnDemandFramework.AdventureOnDemandSetDirectionToApproachTargetFromStep
// Size: 0x98 (Inherited: 0x98)
struct UAdventureOnDemandSetDirectionToApproachTargetFromStep : UTaleQuestStep {
};

// Class AdventureOnDemandFramework.AdventureOnDemandSetDirectionToApproachTargetFromStepDesc
// Size: 0x110 (Inherited: 0x80)
struct UAdventureOnDemandSetDirectionToApproachTargetFromStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableVector DirectionToApproachTargetFrom; // 0x80(0x30)
	struct FQuestVariableVector PointOfInterestToGetDirectionToTargetFrom; // 0xb0(0x30)
	struct FQuestVariableActor ActorToGetDirectionToTargetFrom; // 0xe0(0x30)
};

// Class AdventureOnDemandFramework.AdventureOnDemandSetHintPopUpStep
// Size: 0x98 (Inherited: 0x98)
struct UAdventureOnDemandSetHintPopUpStep : UTaleQuestStep {
};

// Class AdventureOnDemandFramework.AdventureOnDemandSetHintPopUpStepDesc
// Size: 0x88 (Inherited: 0x80)
struct UAdventureOnDemandSetHintPopUpStepDesc : UTaleQuestStepDesc {
	char HintType; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
};

// Class AdventureOnDemandFramework.AdventureOnDemandSetTargetLocationStep
// Size: 0x98 (Inherited: 0x98)
struct UAdventureOnDemandSetTargetLocationStep : UTaleQuestStep {
};

// Class AdventureOnDemandFramework.AdventureOnDemandSetTargetLocationStepDesc
// Size: 0x140 (Inherited: 0x80)
struct UAdventureOnDemandSetTargetLocationStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableName IslandName; // 0x80(0x30)
	struct FQuestVariableActor IslandData; // 0xb0(0x30)
	struct FQuestVariableVector TargetLocation; // 0xe0(0x30)
	struct FQuestVariableFloat RadiusFromTarget; // 0x110(0x30)
};

// Class AdventureOnDemandFramework.AdventureOnDemandSetTunnelDescStep
// Size: 0x98 (Inherited: 0x98)
struct UAdventureOnDemandSetTunnelDescStep : UTaleQuestStep {
};

// Class AdventureOnDemandFramework.AdventureOnDemandSetTunnelDescStepDesc
// Size: 0x88 (Inherited: 0x80)
struct UAdventureOnDemandSetTunnelDescStepDesc : UTaleQuestStepDesc {
	struct UTunnelDesc* TunnelDesc; // 0x80(0x08)
};

// Class AdventureOnDemandFramework.AdventureOnDemandSuppressIslandBannerStep
// Size: 0x98 (Inherited: 0x98)
struct UAdventureOnDemandSuppressIslandBannerStep : UTaleQuestStep {
};

// Class AdventureOnDemandFramework.AdventureOnDemandSuppressIslandBannerStepDesc
// Size: 0x80 (Inherited: 0x80)
struct UAdventureOnDemandSuppressIslandBannerStepDesc : UTaleQuestStepDesc {
};

// Class AdventureOnDemandFramework.AdventureOnDemandYieldQuestResumeOnConditionsTaleStep
// Size: 0xb0 (Inherited: 0x98)
struct UAdventureOnDemandYieldQuestResumeOnConditionsTaleStep : UTaleQuestStep {
	char UnknownData_98[0x18]; // 0x98(0x18)
};

// Class AdventureOnDemandFramework.AdventureOnDemandTaleFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UAdventureOnDemandTaleFunctionLibrary : UTaleQuestFunctionStepLibrary {

	bool CompareOnDemandQuestResumeConditionMetReason(char Left, char Right); // Function AdventureOnDemandFramework.AdventureOnDemandTaleFunctionLibrary.CompareOnDemandQuestResumeConditionMetReason // Final|Native|Static|Public // @ game+0x46c9b10
};

// Class AdventureOnDemandFramework.AdventureOnDemandVoyageSelectionCompanyDataAsset
// Size: 0x60 (Inherited: 0x28)
struct UAdventureOnDemandVoyageSelectionCompanyDataAsset : UDataAsset {
	struct FName CompanyName; // 0x28(0x08)
	struct TArray<struct UInteractionPrerequisiteBase*> Prerequisites; // 0x30(0x10)
	struct TArray<struct FAdventureOnDemandVoyageSelectionVoyageProposalGroup> VoyageGroups; // 0x40(0x10)
	struct TArray<struct FAdventureOnDemandVoyageSelectionVoyageProposalGroup> WorldEventGroups; // 0x50(0x10)
};

// Class AdventureOnDemandFramework.AdventureOnDemandVoyageSelectionDataAsset
// Size: 0x48 (Inherited: 0x28)
struct UAdventureOnDemandVoyageSelectionDataAsset : UDataAsset {
	struct TArray<struct UAdventureOnDemandVoyageSelectionCompanyDataAsset*> CompanyEntries; // 0x28(0x10)
	struct TArray<struct UAdventureOnDemandVoyageSelectionCompanyDataAsset*> TallTaleChapters; // 0x38(0x10)
};

// Class AdventureOnDemandFramework.AdventureOnDemandYieldQuestResumeOnConditionsStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct UAdventureOnDemandYieldQuestResumeOnConditionsStepDesc : UTaleQuestStepDesc {
	struct FOnDemandQuestResumeConditionMetReasonQuestVariable OutConditionsMetReason; // 0x80(0x30)
};

// Class AdventureOnDemandFramework.GameEventsOnDemandBannerTextDataAsset
// Size: 0x150 (Inherited: 0x28)
struct UGameEventsOnDemandBannerTextDataAsset : UDataAsset {
	struct TArray<struct FGameEventOnDemandBannerTextData> GameEventSpecificBannerTextData; // 0x28(0x10)
	struct FText OnShipSunkBannerText; // 0x38(0x38)
	struct FText OnVoyageCancelledBannerText; // 0x70(0x38)
	struct FText OnCrewJoinedGameEventBannerHeaderText; // 0xa8(0x38)
	struct FText OnCrewJoinedGameEventBannerMessageText; // 0xe0(0x38)
	struct FText OnGameEventCompletedBannerMessageText; // 0x118(0x38)
};

