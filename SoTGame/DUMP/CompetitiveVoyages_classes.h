// Class CompetitiveVoyages.CompetitiveVoyagesServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UCompetitiveVoyagesServiceInterface : UInterface {
};

// Class CompetitiveVoyages.CompetitiveVoyagesService
// Size: 0x470 (Inherited: 0x3c8)
struct ACompetitiveVoyagesService : AActor {
	char UnknownData_3C8[0x38]; // 0x3c8(0x38)
	struct UCompetitiveVoyagesServiceParams* ServiceParams; // 0x400(0x08)
	char UnknownData_408[0x68]; // 0x408(0x68)
};

// Class CompetitiveVoyages.CompetitiveVoyagesServiceParams
// Size: 0x38 (Inherited: 0x28)
struct UCompetitiveVoyagesServiceParams : UDataAsset {
	struct UVoyageDescDataAsset* OptInVoyageDesc; // 0x28(0x08)
	struct UVoyageDescDataAsset* MainVoyageDesc; // 0x30(0x08)
};

// Class CompetitiveVoyages.SetCrewOptInNPCDataStep
// Size: 0x98 (Inherited: 0x98)
struct USetCrewOptInNPCDataStep : UTaleQuestStep {
};

// Class CompetitiveVoyages.TaleQuestCompetitiveVoyagesService
// Size: 0xa0 (Inherited: 0x60)
struct UTaleQuestCompetitiveVoyagesService : UTaleQuestService {
	char UnknownData_60[0x18]; // 0x60(0x18)
	struct AActor* PhasedMarkerManager; // 0x78(0x08)
	struct TArray<struct FPhasedMarkerItem> PhasedMarkerItems; // 0x80(0x10)
	char UnknownData_90[0x10]; // 0x90(0x10)
};

// Class CompetitiveVoyages.TaleQuestCompetitiveVoyagesServiceDesc
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestCompetitiveVoyagesServiceDesc : UTaleQuestServiceDesc {
};

// Class CompetitiveVoyages.SetCrewOptInNPCDataStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct USetCrewOptInNPCDataStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor Actor; // 0x80(0x30)
};

// Class CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestCompetitiveVoyagesFunctionStepLibrary : UTaleQuestFunctionStepLibrary {

	void SetTreasureHuntItemFound(struct AActor* FindingActor); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.SetTreasureHuntItemFound // Final|Native|Public|Const // @ game+0x472ba50
	void SetPhasedMarkerManager(struct AActor* InMarkerManager); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.SetPhasedMarkerManager // Final|Native|Public // @ game+0x472b9d0
	void SetMainVoyageState(char InState); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.SetMainVoyageState // Final|Native|Public|Const // @ game+0x472b950
	void SetCompetitiveVoyageState(char InState); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.SetCompetitiveVoyageState // Final|Native|Public|Const // @ game+0x472b8d0
	void RemovePhasedMarkerItem(struct AActor* InItemInfo); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.RemovePhasedMarkerItem // Final|Native|Public // @ game+0x472b850
	void RemovePhasedMapMarker(struct AActor* InItemInfo); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.RemovePhasedMapMarker // Final|Native|Public // @ game+0x472b7d0
	int32_t GetNumTreasureHuntItemsFound(); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.GetNumTreasureHuntItemsFound // Final|Native|Public|Const // @ game+0x472b7a0
	char GetMainVoyageState(); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.GetMainVoyageState // Final|Native|Public|Const // @ game+0x472b770
	void CreatePhasedMapMarkerService(struct UClass* InClass); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.CreatePhasedMapMarkerService // Final|Native|Public // @ game+0x472b6f0
	void AddPhasedMarkerItem(struct AActor* InItemInfo); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.AddPhasedMarkerItem // Final|Native|Public // @ game+0x472b670
	void AddPhasedMapMarker(struct AActor* InItemInfo); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.AddPhasedMapMarker // Final|Native|Public // @ game+0x472b5f0
};

