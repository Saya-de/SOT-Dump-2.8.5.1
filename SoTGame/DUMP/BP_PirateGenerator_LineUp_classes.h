// BlueprintGeneratedClass BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C
// Size: 0x619 (Inherited: 0x488)
struct ABP_PirateGenerator_LineUp_C : APosablePirate {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct UCapsuleComponent* Capsule; // 0x490(0x08)
	struct UParticleSystemComponent* GhostParticlesOut; // 0x498(0x08)
	struct UParticleSystemComponent* GhostParticlesIn; // 0x4a0(0x08)
	struct UAnimNotifyWwiseEmitterComponent* AnimNotifyWwiseEmitter; // 0x4a8(0x08)
	struct USkeletalMeshComponent* SkeletalProp; // 0x4b0(0x08)
	struct UStaticMeshComponent* StaticPropSecondary; // 0x4b8(0x08)
	struct USkeletalMeshComponent* SkeletalPropSecondary; // 0x4c0(0x08)
	struct UStaticMeshComponent* StaticProp; // 0x4c8(0x08)
	struct FString ForceShape; // 0x4d0(0x10)
	struct FBP_LineUp_Animation Animation; // 0x4e0(0xc8)
	struct UBP_Anim_CharacterSelect_C* CharacterSelectAnimgraph; // 0x5a8(0x08)
	float ZoomTime; // 0x5b0(0x04)
	float GhostTransitionOutTime; // 0x5b4(0x04)
	float GhostTransitionInTime; // 0x5b8(0x04)
	bool GhostTransitioning; // 0x5bc(0x01)
	char UnknownData_5BD[0x3]; // 0x5bd(0x03)
	int32_t PoseIndex; // 0x5c0(0x04)
	char UnknownData_5C4[0x4]; // 0x5c4(0x04)
	struct UAnimationSwitchDataAsset* AnimationSwitch; // 0x5c8(0x08)
	struct UAnimationDataStoreAsset* AnimationAsset; // 0x5d0(0x08)
	bool Initialized; // 0x5d8(0x01)
	char UnknownData_5D9[0x7]; // 0x5d9(0x07)
	struct FMulticastDelegate LineUpPirateInitializedDispatcher; // 0x5e0(0x10)
	bool IsHighlighted; // 0x5f0(0x01)
	bool IsInShipSelect; // 0x5f1(0x01)
	char UnknownData_5F2[0x2]; // 0x5f2(0x02)
	float ShipSelectVariantTimer; // 0x5f4(0x04)
	float ShipSelectVariantTimerMax; // 0x5f8(0x04)
	int32_t ShipSelectAnimCountMax; // 0x5fc(0x04)
	int32_t ShipSelectVariantAnimIndex; // 0x600(0x04)
	bool IsPlayingShipSelectVariant; // 0x604(0x01)
	char UnknownData_605[0x3]; // 0x605(0x03)
	struct UAnimSequence* ShipSelectAnimToPlay; // 0x608(0x08)
	struct UAnimSequence* ShipSelectPropAnimToPlay; // 0x610(0x08)
	bool ShipSelectAnimStarted; // 0x618(0x01)

	void GetPirateSelector(struct UPirateSelector* PirateSelectorComponent); // Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.GetPirateSelector // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x188c2f0
	void Reset(); // Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.Reset // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void DelayBasedOnAngle(); // Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.DelayBasedOnAngle // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void FadeProps(float Duration); // Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.FadeProps // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void ActivateGhostMaterial(struct UMeshComponent* MeshComponent, bool FadeIn, float Duration); // Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ActivateGhostMaterial // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void ClearProps(); // Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ClearProps // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void SetProp(struct FBP_LineUp_Props BP_LineUp_Props, bool Primary?); // Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.SetProp // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void UpdateAnimation(); // Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.UpdateAnimation // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void RandomizePirate(int32_t PoseIndex, struct FPirateDescription PirateDesc, struct TArray<struct UClass*> Outfit); // Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.RandomizePirate // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void UserConstructionScript(); // Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.UserConstructionScript // Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void PlayMontage(struct UAnimInstance* Character, struct UAnimSequence* OutOf, struct UAnimSequence* LoopAnim, struct UAnimInstance* Prop, struct UAnimSequence* OutOf, struct UAnimSequence* PropLoop); // Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.PlayMontage // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void Highlighted(); // Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.Highlighted // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void OutOfHighlight(); // Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.OutOfHighlight // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void Selected(); // Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.Selected // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void OnEndGeneratingPirate(); // Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.OnEndGeneratingPirate // Event|Protected|BlueprintEvent // @ game+0x188c2f0
	void OnBeginGeneratingPirate(); // Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.OnBeginGeneratingPirate // Event|Protected|BlueprintEvent // @ game+0x188c2f0
	void RandomizePirateEvent(struct FPirateDescription PirateDesc, struct TArray<struct UClass*> Outfit); // Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.RandomizePirateEvent // Net|NetReliableHasOutParms|NetClient|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void ShipSelect(); // Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ShipSelect // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void ReceiveTick(float* DeltaSeconds); // Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void OnSignalSpawnIn(); // Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.OnSignalSpawnIn // Event|Protected|BlueprintEvent // @ game+0x188c2f0
	void ExecuteUbergraph_BP_PirateGenerator_LineUp(int32_t EntryPoint); // Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ExecuteUbergraph_BP_PirateGenerator_LineUp // HasDefaults // @ game+0x188c2f0
	void LineUpPirateInitializedDispatcher__DelegateSignature(); // Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.LineUpPirateInitializedDispatcher__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
};

