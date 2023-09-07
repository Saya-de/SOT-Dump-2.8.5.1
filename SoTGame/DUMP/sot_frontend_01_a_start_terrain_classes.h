// BlueprintGeneratedClass sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C
// Size: 0x400 (Inherited: 0x3d0)
struct Asot_frontend_01_a_start_terrain_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	bool IsPlaying; // 0x3d8(0x01)
	char UnknownData_3D9[0x7]; // 0x3d9(0x07)
	struct AMatineeActor* BakedOpenSeqCam_ExecuteUbergraph_sot_frontend_01_a_start_terrain_RefProperty; // 0x3e0(0x08)
	struct ABP_Audio_Play_Wwise_Event_Function_C* BP_Audio_Play_Wwise_Event_Function_C_2_ExecuteUbergraph_sot_frontend_01_a_start_terrain_RefProperty; // 0x3e8(0x08)
	struct ACameraActor* IntroCam_ExecuteUbergraph_sot_frontend_01_a_start_terrain_RefProperty; // 0x3f0(0x08)
	struct ABP_Audio_Play_Wwise_Event_Function_C* BP_Audio_Play_Wwise_Event_Function_C_2_UniqueObjectNameForCooking_993562282_RefProperty; // 0x3f8(0x08)

	void LeaveMapTableAnimation(); // Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.LeaveMapTableAnimation // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void GetFrontendCamera(struct UFrontendCameraComponent* CameraComponent); // Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.GetFrontendCamera // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x188c2f0
	void K2Node_MatineeController_10_MatineeSequenceFinished(); // Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.K2Node_MatineeController_10_MatineeSequenceFinished // BlueprintEvent // @ game+0x188c2f0
	void K2Node_MatineeController_10_Finished(); // Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.K2Node_MatineeController_10_Finished // BlueprintEvent // @ game+0x188c2f0
	void PlayIntroMatinee(); // Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.PlayIntroMatinee // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void EnteredEngageState(); // Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.EnteredEngageState // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void SetMatineePlaybackRate(float PlaybackRate); // Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.SetMatineePlaybackRate // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void ReceiveBeginPlay(); // Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ExitIntroMatinee(); // Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.ExitIntroMatinee // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void ExecuteUbergraph_sot_frontend_01_a_start_terrain(int32_t EntryPoint); // Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.ExecuteUbergraph_sot_frontend_01_a_start_terrain //  // @ game+0x188c2f0
};

