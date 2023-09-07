// BlueprintGeneratedClass sot_frontend_01_a_animation.sot_frontend_01_a_animation_C
// Size: 0x428 (Inherited: 0x3d0)
struct Asot_frontend_01_a_animation_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct AStaticMeshActor* shipSelectUI_title_14_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty; // 0x3d8(0x08)
	struct AStaticMeshActor* shipSelectUI_gallion_10_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty; // 0x3e0(0x08)
	struct AStaticMeshActor* shipSelectUI_sloop_12_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty; // 0x3e8(0x08)
	struct ASkeletalMeshActor* shipSelect_CharMarker2_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty; // 0x3f0(0x08)
	struct ABP_PirateGenerator_LineUp_C* BP_PirateGenerator_LineUp_C_4_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty; // 0x3f8(0x08)
	struct AMatineeActor* MatineeActor_ShipSelect_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty; // 0x400(0x08)
	struct AMatineeActor* MatineeActor_ShipSelect_UniqueObjectNameForCooking_1530807069_RefProperty; // 0x408(0x08)
	struct ACameraActor* ShipSelectScreenCam_UniqueObjectNameForCooking_1530807069_RefProperty; // 0x410(0x08)
	struct AMatineeActor* MatineeActor_ShipSelect_UniqueObjectNameForCooking_1530807072_RefProperty; // 0x418(0x08)
	struct ABP_PirateGenerator_LineUp_C* BP_PirateGenerator_LineUp_C_4_UniqueObjectNameForCooking_1530807072_RefProperty; // 0x420(0x08)

	void OnReturnToPirateSelection(); // Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.OnReturnToPirateSelection // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void GetPirateSelector(struct UPirateSelector* PirateSelectorComponent); // Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GetPirateSelector // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x188c2f0
	void GetFrontendCameraComponent(struct UFrontendCameraComponent* Frontend Camera Component); // Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GetFrontendCameraComponent // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x188c2f0
	void goToShipSelCam(); // Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.goToShipSelCam // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void ReceiveBeginPlay(); // Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ShipSelect(); // Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ShipSelect // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void GenerateShipSelectionPirate(); // Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GenerateShipSelectionPirate // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void HideShipSelectionPirate(); // Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.HideShipSelectionPirate // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void ExecuteUbergraph_sot_frontend_01_a_animation(int32_t EntryPoint); // Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ExecuteUbergraph_sot_frontend_01_a_animation //  // @ game+0x188c2f0
};

