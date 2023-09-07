// Class GameEventsOnDemandFramework.GameEventAvailabilityParamsDataAsset
// Size: 0x90 (Inherited: 0x28)
struct UGameEventAvailabilityParamsDataAsset : UDataAsset {
	struct FWeightedProbabilityRangeOfRanges MatchmakingCooldownRanges; // 0x28(0x30)
	struct FWeightedProbabilityRange CrewsJoinedOnDemandLimitRange; // 0x58(0x20)
	float InitialCooldown; // 0x78(0x04)
	int32_t ProgressStateLimit; // 0x7c(0x04)
	bool ShouldApplyShipTypeLimit; // 0x80(0x01)
	char UnknownData_81[0x3]; // 0x81(0x03)
	struct FFeatureFlag SendCrewToLoserTunnelFeature; // 0x84(0x0c)
};

// Class GameEventsOnDemandFramework.GameEventOnDemandAnnouncementComponent
// Size: 0x180 (Inherited: 0xc8)
struct UGameEventOnDemandAnnouncementComponent : UActorComponent {
	struct FFeatureFlag FeatureFlag; // 0xc8(0x0c)
	bool ShouldFireBannerForAnyCrewEnteringIslandVicinity; // 0xd4(0x01)
	char UnknownData_D5[0x3]; // 0xd5(0x03)
	struct FName IslandName; // 0xd8(0x08)
	struct TArray<struct APawn*> CurrentTrackedPawns; // 0xe0(0x10)
	struct TArray<struct FGuid> OnDemandParticipatingCrewIds; // 0xf0(0x10)
	struct TArray<struct FGuid> TrackedShipCrewIds; // 0x100(0x10)
	struct UClass* GameEventType; // 0x110(0x08)
	char UnknownData_118[0x5c]; // 0x118(0x5c)
	struct FName TemporaryBannerTag; // 0x174(0x08)
	char UnknownData_17C[0x4]; // 0x17c(0x04)
};

// Class GameEventsOnDemandFramework.GameEventOnDemandAvailabilityStateTracker
// Size: 0x150 (Inherited: 0x28)
struct UGameEventOnDemandAvailabilityStateTracker : UObject {
	char UnknownData_28[0x88]; // 0x28(0x88)
	struct UClass* ShipTypeLimit; // 0xb0(0x08)
	struct TArray<struct FGuid> ParticipatingCrewIds; // 0xb8(0x10)
	struct TArray<struct FGuid> PreparingToJoinCrewIds; // 0xc8(0x10)
	char UnknownData_D8[0x78]; // 0xd8(0x78)
};

// Class GameEventsOnDemandFramework.GameEventOnDemandVoyageProposalDesc
// Size: 0x128 (Inherited: 0x128)
struct UGameEventOnDemandVoyageProposalDesc : UVoyageProposalDesc {
};

// Class GameEventsOnDemandFramework.GameEventsOnDemandAvailabilityServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameEventsOnDemandAvailabilityServiceInterface : UInterface {
};

// Class GameEventsOnDemandFramework.GameEventsOnDemandInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameEventsOnDemandInterface : UInterface {
};

// Class GameEventsOnDemandFramework.GameEventsOnDemandLoserTunnelServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameEventsOnDemandLoserTunnelServiceInterface : UInterface {
};

