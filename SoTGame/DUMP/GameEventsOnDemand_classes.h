// Class GameEventsOnDemand.EnvQueryGenerator_SeaBasedGameEventOnDemandLocations
// Size: 0x58 (Inherited: 0x58)
struct UEnvQueryGenerator_SeaBasedGameEventOnDemandLocations : UEnvQueryGenerator {
};

// Class GameEventsOnDemand.GameEventsOnDemandAvailabilityService
// Size: 0x88 (Inherited: 0x28)
struct UGameEventsOnDemandAvailabilityService : UObject {
	char UnknownData_28[0x40]; // 0x28(0x40)
	struct UWorld* World; // 0x68(0x08)
	char UnknownData_70[0x18]; // 0x70(0x18)
};

// Class GameEventsOnDemand.GameEventsOnDemandLoserTunnelService
// Size: 0x508 (Inherited: 0x3c8)
struct AGameEventsOnDemandLoserTunnelService : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct UWorld* World; // 0x3d0(0x08)
	char UnknownData_3D8[0x58]; // 0x3d8(0x58)
	struct UVoyageDescDataAsset* LoserTunnelVoyageDescDataAsset; // 0x430(0x08)
	char UnknownData_438[0x50]; // 0x438(0x50)
	struct TArray<struct FGameEventsOnDemandLoserTunnelCrewData> TrackedCrews; // 0x488(0x10)
	struct FName TemporaryBannerTag; // 0x498(0x08)
	char UnknownData_4A0[0x68]; // 0x4a0(0x68)
};

