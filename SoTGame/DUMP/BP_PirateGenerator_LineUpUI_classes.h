// BlueprintGeneratedClass BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C
// Size: 0x450 (Inherited: 0x3c8)
struct ABP_PirateGenerator_LineUpUI_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3d0(0x08)
	struct TArray<struct ABP_PirateGenerator_LineUp_C*> Pirates; // 0x3d8(0x10)
	struct TArray<struct FCarouselPirateDesc> CarouselPirateDescs; // 0x3e8(0x10)
	struct TArray<bool> LockedPirates; // 0x3f8(0x10)
	struct FRadialCoordinate MinBodyShape; // 0x408(0x08)
	struct FRadialCoordinate MaxBodyShape; // 0x410(0x08)
	bool UseIPG; // 0x418(0x01)
	char UnknownData_419[0x7]; // 0x419(0x07)
	struct UAnimationDataStoreAsset* AnimationAsset; // 0x420(0x08)
	struct UClass* DefaultAnimationSet; // 0x428(0x08)
	struct UCarouselPirateGeneratorParamsAsset* PirateGeneratorParams; // 0x430(0x08)
	int32_t NumberOfPiratesCurrentlyGenerating; // 0x438(0x04)
	char UnknownData_43C[0x4]; // 0x43c(0x04)
	struct FMulticastDelegate PirateLineUpInitializedDispatcher; // 0x440(0x10)

	void GetLockStatus(int32_t IndexToToggle, bool Locked); // Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.GetLockStatus // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x188c2f0
	void ToggleLockStatus(int32_t IndexToToggle); // Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.ToggleLockStatus // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void ClearLockedPirates(); // Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.ClearLockedPirates // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void GetTransitionState(bool Transitioning); // Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.GetTransitionState // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void GetAnimationDataFromClass(struct UClass* Class, struct UAD_FrontendPirate_Default_C* AnimationData); // Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.GetAnimationDataFromClass // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x188c2f0
	void SanitizeAnimationPoses(); // Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.SanitizeAnimationPoses // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void RandomizePirates(); // Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.RandomizePirates // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void UserConstructionScript(); // Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void ReceiveBeginPlay(); // Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void LineUpPirateInitalized(); // Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.LineUpPirateInitalized // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void ExecuteUbergraph_BP_PirateGenerator_LineUpUI(int32_t EntryPoint); // Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.ExecuteUbergraph_BP_PirateGenerator_LineUpUI //  // @ game+0x188c2f0
	void PirateLineUpInitializedDispatcher__DelegateSignature(); // Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.PirateLineUpInitializedDispatcher__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
};

