// BlueprintGeneratedClass BP_CarouselCam.BP_CarouselCam_C
// Size: 0x655 (Inherited: 0x3c8)
struct ABP_CarouselCam_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UDecalComponent* lockedIcon07; // 0x3d0(0x08)
	struct UDecalComponent* lockedIcon06; // 0x3d8(0x08)
	struct UDecalComponent* lockedIcon05; // 0x3e0(0x08)
	struct UDecalComponent* lockedIcon04; // 0x3e8(0x08)
	struct UDecalComponent* lockedIcon03; // 0x3f0(0x08)
	struct UDecalComponent* lockedIcon02; // 0x3f8(0x08)
	struct UDecalComponent* lockedIcon01; // 0x400(0x08)
	struct UDecalComponent* lockedIcon00; // 0x408(0x08)
	struct USpotLightComponent* charLight_floor_Select_SpotL; // 0x410(0x08)
	struct USpotLightComponent* charLight_rear_Select_SpotL; // 0x418(0x08)
	struct USpotLightComponent* charLight_left_Select_SpotL; // 0x420(0x08)
	struct USpotLightComponent* charLight_right_Select_SpotL; // 0x428(0x08)
	struct USpotLightComponent* charLight_right_Far_SpotL; // 0x430(0x08)
	struct USpotLightComponent* charLight_rear_Far_SpotL; // 0x438(0x08)
	struct USpotLightComponent* charLight_floor_Far_SpotL; // 0x440(0x08)
	struct USpotLightComponent* charLight_left_Far_SpotL; // 0x448(0x08)
	struct USpotLightComponent* charLight_floor_HighL_SpotL; // 0x450(0x08)
	struct USpotLightComponent* charLight_rear_HighL_SpotL; // 0x458(0x08)
	struct USpotLightComponent* charLight_left_HighL_SpotL; // 0x460(0x08)
	struct USpotLightComponent* charLight_right_HighL_SpotL; // 0x468(0x08)
	struct USceneComponent* Lights; // 0x470(0x08)
	struct UCameraComponent* Camera; // 0x478(0x08)
	struct UStaticMeshComponent*  camAim; // 0x480(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x488(0x08)
	struct FRotator camAimRot; // 0x490(0x0c)
	char UnknownData_49C[0x4]; // 0x49c(0x04)
	struct UCurveFloat* camSpeed; // 0x4a0(0x08)
	float initTime; // 0x4a8(0x04)
	float Timespan; // 0x4ac(0x04)
	float currTime; // 0x4b0(0x04)
	float camAimRotZ; // 0x4b4(0x04)
	float rotPerChar; // 0x4b8(0x04)
	float MaxTimeSpan; // 0x4bc(0x04)
	float rotOverTime; // 0x4c0(0x04)
	bool rotMatch; // 0x4c4(0x01)
	char UnknownData_4C5[0x3]; // 0x4c5(0x03)
	struct UCurveFloat* camZoom; // 0x4c8(0x08)
	float selectedZoomDist; // 0x4d0(0x04)
	float zoomResult; // 0x4d4(0x04)
	struct FVector initCamLoc; // 0x4d8(0x0c)
	float startZoomDist; // 0x4e4(0x04)
	float camAimRot_1; // 0x4e8(0x04)
	float camAimRot_delta; // 0x4ec(0x04)
	float camRotationFactor; // 0x4f0(0x04)
	float rotPerChar_userSet; // 0x4f4(0x04)
	float endZoomDist; // 0x4f8(0x04)
	float highlightZoomDist; // 0x4fc(0x04)
	float IdleTime; // 0x500(0x04)
	float MaxIdleTime; // 0x504(0x04)
	bool idleStatus; // 0x508(0x01)
	char UnknownData_509[0x3]; // 0x509(0x03)
	int32_t sectorID; // 0x50c(0x04)
	float sectorOffset; // 0x510(0x04)
	int32_t lightFadeScale; // 0x514(0x04)
	struct TArray<struct ULightComponent*> highLLightSet; // 0x518(0x10)
	struct TArray<float> highLLightIntensity; // 0x528(0x10)
	struct TArray<struct ULightComponent*> selectLightSet; // 0x538(0x10)
	struct TArray<float> selectLightIntensity; // 0x548(0x10)
	float LightIntensity; // 0x558(0x04)
	float sectorRemainder; // 0x55c(0x04)
	int32_t lastSectorID; // 0x560(0x04)
	char UnknownData_564[0x4]; // 0x564(0x04)
	struct UCurveFloat* lightFade; // 0x568(0x08)
	bool rotSnapDone; // 0x570(0x01)
	char UnknownData_571[0x7]; // 0x571(0x07)
	struct UCurveFloat* HighLight_camFOV; // 0x578(0x08)
	struct UCurveVector* HighLight_camRot; // 0x580(0x08)
	struct UCurveVector* HighLight_camLoc; // 0x588(0x08)
	float highlightZoomHeight; // 0x590(0x04)
	float ZoomTime; // 0x594(0x04)
	struct UCurveVector* select_camZoomRot; // 0x598(0x08)
	struct UCurveFloat* Select_camZoomFOV; // 0x5a0(0x08)
	struct UCurveVector* select_camZoomLoc; // 0x5a8(0x08)
	struct UCurveVector* camRot; // 0x5b0(0x08)
	struct UCurveVector* CamLoc; // 0x5b8(0x08)
	struct UCurveFloat* camFOV; // 0x5c0(0x08)
	struct FVector currCamLoc; // 0x5c8(0x0c)
	float camRotSnapFactor; // 0x5d4(0x04)
	struct TArray<struct UDecalComponent*> lockIcons; // 0x5d8(0x10)
	struct UMaterialInstance* MI_lockIcon; // 0x5e8(0x08)
	struct UMaterialInstanceDynamic* DM_lockIcon00; // 0x5f0(0x08)
	struct UMaterialInstanceDynamic* DM_lockIcon01; // 0x5f8(0x08)
	struct UMaterialInstanceDynamic* DM_lockIcon02; // 0x600(0x08)
	struct UMaterialInstanceDynamic* DM_lockIcon03; // 0x608(0x08)
	struct UMaterialInstanceDynamic* DM_lockIcon04; // 0x610(0x08)
	struct UMaterialInstanceDynamic* DM_lockIcon05; // 0x618(0x08)
	struct UMaterialInstanceDynamic* DM_lockIcon06; // 0x620(0x08)
	struct UMaterialInstanceDynamic* DM_lockIcon07; // 0x628(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> DM_lockIcon_Set; // 0x630(0x10)
	struct FLinearColor RGB; // 0x640(0x10)
	float maxLockIconOpacity; // 0x650(0x04)
	bool IconFadeDone; // 0x654(0x01)

	void resetLockIconVis(); // Function BP_CarouselCam.BP_CarouselCam_C.resetLockIconVis // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void fadeLockIcon(int32_t CharID, bool IconFadeDone); // Function BP_CarouselCam.BP_CarouselCam_C.fadeLockIcon // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void toggleLockIcon(int32_t CharID); // Function BP_CarouselCam.BP_CarouselCam_C.toggleLockIcon // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void resetCamLoc(); // Function BP_CarouselCam.BP_CarouselCam_C.resetCamLoc // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void initLights(); // Function BP_CarouselCam.BP_CarouselCam_C.initLights // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void camAnimViaCurves(struct UCameraComponent* Camera, struct UCurveVector* Location, struct UCurveVector* Rotation, struct UCurveFloat* FOV, float Time, bool Reverse, float PlayRate, bool done, float DeltaTime, struct FVector cameraLoc); // Function BP_CarouselCam.BP_CarouselCam_C.camAnimViaCurves // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void setLightSector(int32_t sectorID, struct FRotator Rotator); // Function BP_CarouselCam.BP_CarouselCam_C.setLightSector // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void lightSwitch(bool onLights, bool offLights, float Timespan, struct TArray<struct ULightComponent*> LightSet, struct TArray<float> LightSetIntensity); // Function BP_CarouselCam.BP_CarouselCam_C.lightSwitch // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void getSectorID(int32_t sectorID, float Remainder); // Function BP_CarouselCam.BP_CarouselCam_C.getSectorID // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void getCamIdleTime(float Time, float IdleTime, float MaxIdleTime, bool idleStatus); // Function BP_CarouselCam.BP_CarouselCam_C.getCamIdleTime // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void getCamRotDelta(float rotDelta); // Function BP_CarouselCam.BP_CarouselCam_C.getCamRotDelta // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void zeroTest(float Float, bool Result); // Function BP_CarouselCam.BP_CarouselCam_C.zeroTest // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void zoomCam(float Time, bool zoomInTrigger, bool zoomOutTrigger, bool selectedZoomTrigger, bool zoomInDone, bool zoomOutDone); // Function BP_CarouselCam.BP_CarouselCam_C.zoomCam // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void getCamLoc(struct USceneComponent* CameraRef, struct FVector CamLoc); // Function BP_CarouselCam.BP_CarouselCam_C.getCamLoc // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void matchRotPerChar(bool rotMatch); // Function BP_CarouselCam.BP_CarouselCam_C.matchRotPerChar // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void set_timeSpan(float StartTime, float Timespan); // Function BP_CarouselCam.BP_CarouselCam_C.set_timeSpan // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void matchTimespan(bool timesup); // Function BP_CarouselCam.BP_CarouselCam_C.matchTimespan // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void set_camAimRot(float YawValue, float Timespan, bool Continuous, float ResultYawValue, bool rotSnapDone); // Function BP_CarouselCam.BP_CarouselCam_C.set_camAimRot // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void get_camAimRot(struct FRotator Rotation); // Function BP_CarouselCam.BP_CarouselCam_C.get_camAimRot // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void set_maxTimespan(float cameraMoveTime); // Function BP_CarouselCam.BP_CarouselCam_C.set_maxTimespan // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void Reset(bool lockIconVis, bool Continuous, bool Stop, float initTime); // Function BP_CarouselCam.BP_CarouselCam_C.Reset // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void moveCam(float Time, bool rotTrigger, float rotFactor, bool Continuous, bool rotSnap, bool Mouse, int32_t sectorID, bool atDefaultZoom, bool rotSnapDone, struct FRotator sectorRotator); // Function BP_CarouselCam.BP_CarouselCam_C.moveCam // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void UserConstructionScript(); // Function BP_CarouselCam.BP_CarouselCam_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void ReceiveBeginPlay(); // Function BP_CarouselCam.BP_CarouselCam_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceiveTick(float* DeltaSeconds); // Function BP_CarouselCam.BP_CarouselCam_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ExecuteUbergraph_BP_CarouselCam(int32_t EntryPoint); // Function BP_CarouselCam.BP_CarouselCam_C.ExecuteUbergraph_BP_CarouselCam //  // @ game+0x188c2f0
};

