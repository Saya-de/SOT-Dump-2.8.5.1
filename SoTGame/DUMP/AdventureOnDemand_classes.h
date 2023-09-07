// Class AdventureOnDemand.AdventureOnDemandService
// Size: 0x668 (Inherited: 0x3c8)
struct AAdventureOnDemandService : AActor {
	char UnknownData_3C8[0x10]; // 0x3c8(0x10)
	struct UAdventureOnDemandServiceParams* Params; // 0x3d8(0x08)
	struct UAdventureOnDemandVoyageSelectionDataAsset* VoyageSelectionDataAsset; // 0x3e0(0x08)
	char UnknownData_3E8[0xb0]; // 0x3e8(0xb0)
	struct TArray<struct FAdventureOnDemandServiceCrewEntry> DiveToTunnelEntries; // 0x498(0x10)
	struct TArray<struct FAdventureOnDemandServiceCrewEntry> LeaveTunnelEntries; // 0x4a8(0x10)
	struct TArray<struct FGuid> CrewsDivingToTunnel; // 0x4b8(0x10)
	struct TArray<struct FGuid> CrewsInArrivalTunnel; // 0x4c8(0x10)
	struct TArray<struct FGuid> CrewsOnCooldown; // 0x4d8(0x10)
	char UnknownData_4E8[0x180]; // 0x4e8(0x180)
};

// Class AdventureOnDemand.GameEventOnDemandArrivalTunnelWorkerBase
// Size: 0xa8 (Inherited: 0x30)
struct UGameEventOnDemandArrivalTunnelWorkerBase : UAdventureOnDemandArrivalTunnelWorkerBase {
	float TriggerTunnelFailureTimeout; // 0x30(0x04)
	float MinRangeFromTarget; // 0x34(0x04)
	float MaxRangeFromTarget; // 0x38(0x04)
	float SubsequentCrewJoinRadiusModifier; // 0x3c(0x04)
	char UnknownData_40[0x48]; // 0x40(0x48)
	struct UVoyageDescDataAsset* LeaveTunnelVoyageDesc; // 0x88(0x08)
	char UnknownData_90[0x18]; // 0x90(0x18)
};

// Class AdventureOnDemand.IslandBasedGameEventOnDemandArrivalTunnelWorker
// Size: 0xc0 (Inherited: 0xa8)
struct UIslandBasedGameEventOnDemandArrivalTunnelWorker : UGameEventOnDemandArrivalTunnelWorkerBase {
	bool UseSpawnDistanceFromIslandForResurfaceRadius; // 0xa8(0x01)
	char UnknownData_A9[0x3]; // 0xa9(0x03)
	float ResurfaceMaxRadiusModifier; // 0xac(0x04)
	char UnknownData_B0[0x10]; // 0xb0(0x10)
};

// Class AdventureOnDemand.SkellyFortEventOnDemandArrivalTunnelWorker
// Size: 0x158 (Inherited: 0xc0)
struct USkellyFortEventOnDemandArrivalTunnelWorker : UIslandBasedGameEventOnDemandArrivalTunnelWorker {
	struct UClass* SkellyFortType; // 0xc0(0x08)
	char UnknownData_C8[0x84]; // 0xc8(0x84)
	float RetryRequestEventFrequency; // 0x14c(0x04)
	char UnknownData_150[0x8]; // 0x150(0x08)
};

// Class AdventureOnDemand.SeaBasedGameEventOnDemandArrivalTunnelWorker
// Size: 0x110 (Inherited: 0xa8)
struct USeaBasedGameEventOnDemandArrivalTunnelWorker : UGameEventOnDemandArrivalTunnelWorkerBase {
	struct UClass* GameEventType; // 0xa8(0x20)
	float VacateOccupiedLocationTimer; // 0xc8(0x04)
	char UnknownData_CC[0x44]; // 0xcc(0x44)
};

// Class AdventureOnDemand.KrakenGameEventOnDemandArrivalTunnelWorker
// Size: 0x120 (Inherited: 0x110)
struct UKrakenGameEventOnDemandArrivalTunnelWorker : USeaBasedGameEventOnDemandArrivalTunnelWorker {
	char UnknownData_110[0x10]; // 0x110(0x10)
};

// Class AdventureOnDemand.TinySharkGameEventOnDemandArrivalTunnelWorker
// Size: 0x120 (Inherited: 0x110)
struct UTinySharkGameEventOnDemandArrivalTunnelWorker : USeaBasedGameEventOnDemandArrivalTunnelWorker {
	char UnknownData_110[0x10]; // 0x110(0x10)
};

