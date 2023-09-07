// BlueprintGeneratedClass sot_frontend_01_a.sot_frontend_01_a_C
// Size: 0x450 (Inherited: 0x3d0)
struct Asot_frontend_01_a_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct UPirateSelector* PirateUI; // 0x3d8(0x08)
	bool ZoomIn; // 0x3e0(0x01)
	bool Rotation; // 0x3e1(0x01)
	bool Selected; // 0x3e2(0x01)
	char UnknownData_3E3[0x1]; // 0x3e3(0x01)
	float initTime; // 0x3e4(0x04)
	float rotFactor; // 0x3e8(0x04)
	bool ZoomOut; // 0x3ec(0x01)
	bool initHighlight; // 0x3ed(0x01)
	char UnknownData_3EE[0x2]; // 0x3ee(0x02)
	int32_t charSlotID; // 0x3f0(0x04)
	char UnknownData_3F4[0x4]; // 0x3f4(0x04)
	struct TArray<struct ABP_PirateGenerator_LineUp_C*> pirateLineUpRef; // 0x3f8(0x10)
	int32_t lastCharSlotID; // 0x408(0x04)
	bool zoomOutDone; // 0x40c(0x01)
	bool zoomDone; // 0x40d(0x01)
	char UnknownData_40E[0x2]; // 0x40e(0x02)
	struct UBP_Anim_CharacterSelect_C* pirateLineUpAnimgraph; // 0x410(0x08)
	struct FVector selectedPirateLoc; // 0x418(0x0c)
	struct FRotator selectedPirateRot; // 0x424(0x0c)
	bool PiratesInitialized; // 0x430(0x01)
	bool PirateSelected; // 0x431(0x01)
	bool mouseDown; // 0x432(0x01)
	bool mouseDragging; // 0x433(0x01)
	float mouseStartX; // 0x434(0x04)
	struct ABP_CarouselCam_C* BP_CarouselCam_C_2_ExecuteUbergraph_sot_frontend_01_a_RefProperty; // 0x438(0x08)
	struct AMatineeActor* MatineeActor_PirateSelect_ExecuteUbergraph_sot_frontend_01_a_RefProperty; // 0x440(0x08)
	struct ABP_CarouselCam_C* BP_CarouselCam_C_2_UniqueObjectNameForCooking_232772163_RefProperty; // 0x448(0x08)

	void Get Pirate Selector Component(struct UPirateSelector* PirateSelectorComponent); // Function sot_frontend_01_a.sot_frontend_01_a_C.Get Pirate Selector Component // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x188c2f0
	void GetFrontendCameraComponent(struct UFrontendCameraComponent* Camera Component); // Function sot_frontend_01_a.sot_frontend_01_a_C.GetFrontendCameraComponent // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x188c2f0
	void ResetLineUpPirates(); // Function sot_frontend_01_a.sot_frontend_01_a_C.ResetLineUpPirates // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void RefreshCharSlotStatus(); // Function sot_frontend_01_a.sot_frontend_01_a_C.RefreshCharSlotStatus // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void SetCharSlotId(int32_t NewCharSlotID); // Function sot_frontend_01_a.sot_frontend_01_a_C.SetCharSlotId // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void PirateHighlight(float Time); // Function sot_frontend_01_a.sot_frontend_01_a_C.PirateHighlight // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void GetSelectedPirate(struct ABP_PirateGenerator_LineUp_C* Item); // Function sot_frontend_01_a.sot_frontend_01_a_C.GetSelectedPirate // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x188c2f0
	void GetPirateLineup(struct ABP_PirateGenerator_LineUpUI_C* Item); // Function sot_frontend_01_a.sot_frontend_01_a_C.GetPirateLineup // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void InpActEvt_FrontendTavernSelect_UniqueObjectNameForCooking_1729007687(struct FKey Key); // Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernSelect_UniqueObjectNameForCooking_1729007687 // BlueprintEvent // @ game+0x188c2f0
	void InpActEvt_FrontendTavernNextPage_UniqueObjectNameForCooking_1729007686(struct FKey Key); // Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernNextPage_UniqueObjectNameForCooking_1729007686 // BlueprintEvent // @ game+0x188c2f0
	void K2Node_MatineeController_5_Stop(); // Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Stop // BlueprintEvent // @ game+0x188c2f0
	void K2Node_MatineeController_5_Pause(); // Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Pause // BlueprintEvent // @ game+0x188c2f0
	void K2Node_MatineeController_5_Start(); // Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Start // BlueprintEvent // @ game+0x188c2f0
	void K2Node_MatineeController_5_Finished(); // Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Finished // BlueprintEvent // @ game+0x188c2f0
	void InpActEvt_FrontendTavernChangeProfile_UniqueObjectNameForCooking_1729007685(struct FKey Key); // Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernChangeProfile_UniqueObjectNameForCooking_1729007685 // BlueprintEvent // @ game+0x188c2f0
	void InpActEvt_FrontendTavernFavourite_UniqueObjectNameForCooking_1729007684(struct FKey Key); // Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernFavourite_UniqueObjectNameForCooking_1729007684 // BlueprintEvent // @ game+0x188c2f0
	void InpActEvt_FrontendTavernQuitGame_UniqueObjectNameForCooking_1729007683(struct FKey Key); // Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernQuitGame_UniqueObjectNameForCooking_1729007683 // BlueprintEvent // @ game+0x188c2f0
	void InpAxisEvt_FrontendTavernRotate_K2Node_InputAxisEvent_22(float AxisValue); // Function sot_frontend_01_a.sot_frontend_01_a_C.InpAxisEvt_FrontendTavernRotate_K2Node_InputAxisEvent_22 // BlueprintEvent // @ game+0x188c2f0
	void ReceiveBeginPlay(); // Function sot_frontend_01_a.sot_frontend_01_a_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void BeginCelebration(); // Function sot_frontend_01_a.sot_frontend_01_a_C.BeginCelebration // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void pirateSelectCam(); // Function sot_frontend_01_a.sot_frontend_01_a_C.pirateSelectCam // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void showShipSelectPirate(); // Function sot_frontend_01_a.sot_frontend_01_a_C.showShipSelectPirate // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void reinstateSelectedPirateLoc(); // Function sot_frontend_01_a.sot_frontend_01_a_C.reinstateSelectedPirateLoc // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void StartGeneratingPirates(); // Function sot_frontend_01_a.sot_frontend_01_a_C.StartGeneratingPirates // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void SelectionCancelled(); // Function sot_frontend_01_a.sot_frontend_01_a_C.SelectionCancelled // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void SelectPirateButtonPressed(); // Function sot_frontend_01_a.sot_frontend_01_a_C.SelectPirateButtonPressed // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void RefreshPiratesButtonPressed(); // Function sot_frontend_01_a.sot_frontend_01_a_C.RefreshPiratesButtonPressed // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void FavoritePirateButtonPressed(); // Function sot_frontend_01_a.sot_frontend_01_a_C.FavoritePirateButtonPressed // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void ReceiveTick(float* DeltaSeconds); // Function sot_frontend_01_a.sot_frontend_01_a_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void PiratesInitializedEvent(); // Function sot_frontend_01_a.sot_frontend_01_a_C.PiratesInitializedEvent // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void StartPirateCreationAnimation(); // Function sot_frontend_01_a.sot_frontend_01_a_C.StartPirateCreationAnimation // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void OnLeavingSelectionState(); // Function sot_frontend_01_a.sot_frontend_01_a_C.OnLeavingSelectionState // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void ExecuteUbergraph_sot_frontend_01_a(int32_t EntryPoint); // Function sot_frontend_01_a.sot_frontend_01_a_C.ExecuteUbergraph_sot_frontend_01_a // HasDefaults // @ game+0x188c2f0
};

