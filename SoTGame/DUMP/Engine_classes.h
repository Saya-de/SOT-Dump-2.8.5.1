// Class Engine.ActorComponent
// Size: 0xc8 (Inherited: 0x28)
struct UActorComponent : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct FActorComponentTickFunction PrimaryComponentTick; // 0x30(0x50)
	struct TArray<struct FName> ComponentTags; // 0x80(0x10)
	struct TArray<struct FSimpleMemberReference> UCSModifiedProperties; // 0x90(0x10)
	char UnknownData_A0[0x10]; // 0xa0(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0xb0(0x10)
	char UnknownData_C0_0 : 3; // 0xc0(0x01)
	char bReplicates : 1; // 0xc0(0x01)
	char bNetAddressable : 1; // 0xc0(0x01)
	char UnknownData_C0_5 : 3; // 0xc0(0x01)
	char UnknownData_C1_0 : 6; // 0xc1(0x01)
	char bCreatedByConstructionScript : 1; // 0xc1(0x01)
	char bInstanceComponent : 1; // 0xc1(0x01)
	char bAutoActivate : 1; // 0xc2(0x01)
	char bIsActive : 1; // 0xc2(0x01)
	char bEditableWhenInherited : 1; // 0xc2(0x01)
	char UnknownData_C2_3 : 5; // 0xc2(0x01)
	char UnknownData_C3_0 : 3; // 0xc3(0x01)
	char bNeedsLoadForClient : 1; // 0xc3(0x01)
	char bNeedsLoadForServer : 1; // 0xc3(0x01)
	char UnknownData_C3_5 : 3; // 0xc3(0x01)
	char TargetNetDormancy; // 0xc4(0x01)
	char CreationMethod; // 0xc5(0x01)
	char UnknownData_C6[0x2]; // 0xc6(0x02)

	void ToggleActive(); // Function Engine.ActorComponent.ToggleActive // Native|Public|BlueprintCallable // @ game+0x2ce6000
	void SetTickGroup(char NewTickGroup); // Function Engine.ActorComponent.SetTickGroup // Final|Native|Public|BlueprintCallable // @ game+0x2ce5060
	void SetTickableWhenPaused(bool bTickableWhenPaused); // Function Engine.ActorComponent.SetTickableWhenPaused // Final|Native|Public|BlueprintCallable // @ game+0x2ce5170
	void SetIsReplicated(bool ShouldReplicate); // Function Engine.ActorComponent.SetIsReplicated // Final|Native|Public|BlueprintCallable // @ game+0x2ce48d0
	void SetComponentTickEnabled(bool bEnabled); // Function Engine.ActorComponent.SetComponentTickEnabled // Native|Public|BlueprintCallable // @ game+0x2ce4130
	void SetActive(bool bNewActive, bool bReset); // Function Engine.ActorComponent.SetActive // Native|Public|BlueprintCallable // @ game+0x2ce3790
	void RemoveTickPrerequisiteComponent(struct UActorComponent* PrerequisiteComponent); // Function Engine.ActorComponent.RemoveTickPrerequisiteComponent // Native|Public|BlueprintCallable // @ game+0x2ce26b0
	void RemoveTickPrerequisiteActor(struct AActor* PrerequisiteActor); // Function Engine.ActorComponent.RemoveTickPrerequisiteActor // Native|Public|BlueprintCallable // @ game+0x2ce2590
	void ReceiveTick(float DeltaSeconds); // Function Engine.ActorComponent.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceiveEndPlay(char EndPlayReason); // Function Engine.ActorComponent.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceiveBeginPlay(); // Function Engine.ActorComponent.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void OnRep_IsActive(); // Function Engine.ActorComponent.OnRep_IsActive // Native|Public // @ game+0x2ce14a0
	void K2_DestroyComponent(struct UObject* Object); // Function Engine.ActorComponent.K2_DestroyComponent // Final|Native|Public|BlueprintCallable // @ game+0x2cdf310
	bool IsComponentTickEnabled(); // Function Engine.ActorComponent.IsComponentTickEnabled // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdd0d0
	bool IsBeingDestroyed(); // Function Engine.ActorComponent.IsBeingDestroyed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdd070
	bool IsActive(); // Function Engine.ActorComponent.IsActive // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdcfb0
	char GetTargetNetDormancy(); // Function Engine.ActorComponent.GetTargetNetDormancy // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdc8f0
	struct AActor* GetOwner(); // Function Engine.ActorComponent.GetOwner // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdc3a0
	bool FlushNetDormancy(); // Function Engine.ActorComponent.FlushNetDormancy // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x2cd94d0
	void Deactivate(); // Function Engine.ActorComponent.Deactivate // Native|Public|BlueprintCallable // @ game+0x2cd8b00
	bool ComponentHasTag(struct FName Tag); // Function Engine.ActorComponent.ComponentHasTag // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cd8970
	void AddTickPrerequisiteComponent(struct UActorComponent* PrerequisiteComponent); // Function Engine.ActorComponent.AddTickPrerequisiteComponent // Native|Public|BlueprintCallable // @ game+0x2cd5920
	void AddTickPrerequisiteActor(struct AActor* PrerequisiteActor); // Function Engine.ActorComponent.AddTickPrerequisiteActor // Native|Public|BlueprintCallable // @ game+0x2cd5800
	void Activate(bool bReset); // Function Engine.ActorComponent.Activate // Native|Public|BlueprintCallable // @ game+0x2cd5030
};

// Class Engine.DataAsset
// Size: 0x28 (Inherited: 0x28)
struct UDataAsset : UObject {
};

// Class Engine.Actor
// Size: 0x3c8 (Inherited: 0x28)
struct AActor : UObject {
	struct FActorTickFunction PrimaryActorTick; // 0x28(0x50)
	float CustomTimeDilation; // 0x78(0x04)
	char bAllowRemovalFromServerWhenCollisionMerged : 1; // 0x7c(0x01)
	char bAllowRemovalFromServerWhenAutomaticallyInstanced : 1; // 0x7c(0x01)
	char bHidden : 1; // 0x7c(0x01)
	char bNetTemporary : 1; // 0x7c(0x01)
	char bNetStartup : 1; // 0x7c(0x01)
	char bOnlyRelevantToOwner : 1; // 0x7c(0x01)
	char bAlwaysRelevant : 1; // 0x7c(0x01)
	char bReplicateMovement : 1; // 0x7c(0x01)
	char bTearOff : 1; // 0x7d(0x01)
	char bExchangedRoles : 1; // 0x7d(0x01)
	char bPendingNetUpdate : 1; // 0x7d(0x01)
	char bNetLoadOnClient : 1; // 0x7d(0x01)
	char bNetUseOwnerRelevancy : 1; // 0x7d(0x01)
	char bBlockInput : 1; // 0x7d(0x01)
	char UnknownData_7D_6 : 1; // 0x7d(0x01)
	char bCanBeInCluster : 1; // 0x7d(0x01)
	char UnknownData_7E_0 : 2; // 0x7e(0x01)
	char bActorEnableCollision : 1; // 0x7e(0x01)
	char UnknownData_7E_3 : 1; // 0x7e(0x01)
	char bReplicateAttachment : 1; // 0x7e(0x01)
	char UnknownData_7E_5 : 1; // 0x7e(0x01)
	char bReplicates : 1; // 0x7e(0x01)
	char UnknownData_7F[0x1]; // 0x7f(0x01)
	struct FMulticastDelegate OnPreNetOwnershipChange; // 0x80(0x01)
	char UnknownData_81[0x2]; // 0x81(0x02)
	char RemoteRole; // 0x83(0x01)
	char UnknownData_84[0x4]; // 0x84(0x04)
	struct AActor* Owner; // 0x88(0x08)
	struct FRepMovement ReplicatedMovement; // 0x90(0x38)
	struct FRepAttachment AttachmentReplication; // 0xc8(0x48)
	char Role; // 0x110(0x01)
	char UnknownData_111[0x1]; // 0x111(0x01)
	char SpawnRestrictions; // 0x112(0x01)
	char AutoReceiveInput; // 0x113(0x01)
	int32_t InputPriority; // 0x114(0x04)
	struct UInputComponent* InputComponent; // 0x118(0x08)
	float NetCullDistanceSquared; // 0x120(0x04)
	char UnknownData_124[0x4]; // 0x124(0x04)
	int32_t NetTag; // 0x128(0x04)
	float NetUpdateTime; // 0x12c(0x04)
	float NetUpdateFrequency; // 0x130(0x04)
	float NetPriority; // 0x134(0x04)
	float LastNetUpdateTime; // 0x138(0x04)
	struct FName NetDriverName; // 0x13c(0x08)
	char bAutoDestroyWhenFinished : 1; // 0x144(0x01)
	char bCanBeDamaged : 1; // 0x144(0x01)
	char bActorIsBeingDestroyed : 1; // 0x144(0x01)
	char bCollideWhenPlacing : 1; // 0x144(0x01)
	char bFindCameraComponentWhenViewTarget : 1; // 0x144(0x01)
	char bRelevantForNetworkReplays : 1; // 0x144(0x01)
	char UnknownData_144_6 : 2; // 0x144(0x01)
	char UnknownData_145[0x3]; // 0x145(0x03)
	char SpawnCollisionHandlingMethod; // 0x148(0x01)
	char UnknownData_149[0x7]; // 0x149(0x07)
	struct APawn* Instigator; // 0x150(0x08)
	struct TArray<struct AActor*> Children; // 0x158(0x10)
	struct USceneComponent* RootComponent; // 0x168(0x08)
	struct TArray<struct AMatineeActor*> ControllingMatineeActors; // 0x170(0x10)
	float InitialLifeSpan; // 0x180(0x04)
	char UnknownData_184[0x4]; // 0x184(0x04)
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x188(0x01)
	char UnknownData_188_1 : 7; // 0x188(0x01)
	char UnknownData_189[0x7]; // 0x189(0x07)
	struct TArray<struct FName> Layers; // 0x190(0x10)
	struct FActorPtr ParentComponentActor; // 0x1a0(0x08)
	struct TArray<struct AActor*> ChildComponentActors; // 0x1a8(0x10)
	char UnknownData_1B8[0x8]; // 0x1b8(0x08)
	char bActorSeamlessTraveled : 1; // 0x1c0(0x01)
	char bIgnoresOriginShifting : 1; // 0x1c0(0x01)
	char bEnableAutoLODGeneration : 1; // 0x1c0(0x01)
	char InvertFeatureCheck : 1; // 0x1c0(0x01)
	char UnknownData_1C0_4 : 4; // 0x1c0(0x01)
	char UnknownData_1C1[0x3]; // 0x1c1(0x03)
	struct FName Feature; // 0x1c4(0x08)
	char UnknownData_1CC[0x4]; // 0x1cc(0x04)
	struct TArray<struct FName> Tags; // 0x1d0(0x10)
	uint64_t HiddenEditorViews; // 0x1e0(0x08)
	struct FMulticastDelegate OnActorBeginOverlap; // 0x1e8(0x01)
	struct FMulticastDelegate OnActorEndOverlap; // 0x1e9(0x01)
	struct FMulticastDelegate OnActorHit; // 0x1ea(0x01)
	struct FMulticastDelegate OnDestroyed; // 0x1eb(0x01)
	char UnknownData_1EC[0x3c]; // 0x1ec(0x3c)
	struct FMulticastDelegate OnEndPlay; // 0x228(0x01)
	bool bDoOverlapNotifiesOnLoad; // 0x229(0x01)
	char UnknownData_22A[0xf6]; // 0x22a(0xf6)
	struct TArray<struct UActorComponent*> BlueprintCreatedComponents; // 0x320(0x10)
	struct TArray<struct UActorComponent*> InstanceComponents; // 0x330(0x10)
	char UnknownData_340[0x8]; // 0x340(0x08)
	struct TArray<struct AActor*> ChildActorInterfaceProviders; // 0x348(0x10)
	char UnknownData_358[0x68]; // 0x358(0x68)
	double DormancyLingeringInSeconds; // 0x3c0(0x08)

	void UserConstructionScript(); // Function Engine.Actor.UserConstructionScript // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void TearOff(); // Function Engine.Actor.TearOff // Native|Public|BlueprintCallable // @ game+0x2ce5fe0
	void SnapRootComponentTo(struct AActor* InParentActor, struct FName InSocketName); // Function Engine.Actor.SnapRootComponentTo // Final|Native|Public|BlueprintCallable // @ game+0x2ce5710
	void SetTickGroup(char NewTickGroup); // Function Engine.Actor.SetTickGroup // Final|Native|Public|BlueprintCallable // @ game+0x2ce4fe0
	void SetTickableWhenPaused(bool bTickableWhenPaused); // Function Engine.Actor.SetTickableWhenPaused // Final|Native|Public|BlueprintCallable // @ game+0x2ce50e0
	void SetReplicates(bool bInReplicates); // Function Engine.Actor.SetReplicates // Final|Native|Public|BlueprintCallable // @ game+0x2ce4e50
	void SetReplicateMovement(bool bInReplicateMovement); // Function Engine.Actor.SetReplicateMovement // Native|Public|BlueprintCallable // @ game+0x2ce4dc0
	void SetOwner(struct AActor* NewOwner); // Function Engine.Actor.SetOwner // Final|Native|Public|BlueprintCallable // @ game+0x2ce4c30
	void SetLifeSpan(float InLifespan); // Function Engine.Actor.SetLifeSpan // Native|Public|BlueprintCallable // @ game+0x2ce4960
	void SetIgnoreNetTransformUpdates(bool bInIgnoreNetTransformUpdates); // Function Engine.Actor.SetIgnoreNetTransformUpdates // Final|Native|Public|BlueprintCallable // @ game+0x2ce4750
	void SetActorTickEnabled(bool bEnabled); // Function Engine.Actor.SetActorTickEnabled // Final|Native|Public|BlueprintCallable // @ game+0x2ce3b40
	void SetActorScale3D(struct FVector NewScale3D); // Function Engine.Actor.SetActorScale3D // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ce3ab0
	bool SetActorRotation(struct FRotator NewRotation); // Function Engine.Actor.SetActorRotation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ce3a10
	void SetActorRelativeScale3D(struct FVector NewRelativeScale); // Function Engine.Actor.SetActorRelativeScale3D // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ce3980
	void SetActorHiddenInGame(bool bNewHidden); // Function Engine.Actor.SetActorHiddenInGame // Native|Public|BlueprintCallable // @ game+0x2ce38f0
	void SetActorEnableCollision(bool bNewActorEnableCollision); // Function Engine.Actor.SetActorEnableCollision // Final|Native|Public|BlueprintCallable // @ game+0x2ce3860
	void RemoveTickPrerequisiteComponent(struct UActorComponent* PrerequisiteComponent); // Function Engine.Actor.RemoveTickPrerequisiteComponent // Native|Public|BlueprintCallable // @ game+0x2ce2620
	void RemoveTickPrerequisiteActor(struct AActor* PrerequisiteActor); // Function Engine.Actor.RemoveTickPrerequisiteActor // Native|Public|BlueprintCallable // @ game+0x2ce2500
	void ReceiveTick(float DeltaSeconds); // Function Engine.Actor.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceiveRadialDamage(float DamageReceived, struct UDamageType* DamageType, struct FVector Origin, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function Engine.Actor.ReceiveRadialDamage // BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x188c2f0
	void ReceivePointDamage(float Damage, struct UDamageType* DamageType, struct FVector HitLocation, struct FVector HitNormal, struct UPrimitiveComponent* HitComponent, struct FName BoneName, struct FVector ShotFromDirection, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function Engine.Actor.ReceivePointDamage // BlueprintAuthorityOnly|Event|Public|HasDefaults|BlueprintEvent // @ game+0x188c2f0
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit); // Function Engine.Actor.ReceiveHit // Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x2ce20f0
	void ReceiveEndPlay(char EndPlayReason); // Function Engine.Actor.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceiveDestroyed(); // Function Engine.Actor.ReceiveDestroyed // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceiveBeginPlay(); // Function Engine.Actor.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function Engine.Actor.ReceiveAnyDamage // BlueprintAuthorityOnly|Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceiveActorOnReleased(); // Function Engine.Actor.ReceiveActorOnReleased // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceiveActorOnInputTouchLeave(char FingerIndex); // Function Engine.Actor.ReceiveActorOnInputTouchLeave // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceiveActorOnInputTouchEnter(char FingerIndex); // Function Engine.Actor.ReceiveActorOnInputTouchEnter // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceiveActorOnInputTouchEnd(char FingerIndex); // Function Engine.Actor.ReceiveActorOnInputTouchEnd // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceiveActorOnInputTouchBegin(char FingerIndex); // Function Engine.Actor.ReceiveActorOnInputTouchBegin // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceiveActorOnClicked(); // Function Engine.Actor.ReceiveActorOnClicked // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceiveActorEndOverlap(struct AActor* OtherActor); // Function Engine.Actor.ReceiveActorEndOverlap // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceiveActorEndCursorOver(); // Function Engine.Actor.ReceiveActorEndCursorOver // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function Engine.Actor.ReceiveActorBeginOverlap // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceiveActorBeginCursorOver(); // Function Engine.Actor.ReceiveActorBeginCursorOver // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void OnRep_Role(); // Function Engine.Actor.OnRep_Role // Native|Public // @ game+0x2ce1540
	void OnRep_ReplicateMovement(); // Function Engine.Actor.OnRep_ReplicateMovement // Native|Public // @ game+0x2ce1500
	void OnRep_ReplicatedMovement(); // Function Engine.Actor.OnRep_ReplicatedMovement // Native|Public // @ game+0x2ce1520
	void OnRep_Instigator(); // Function Engine.Actor.OnRep_Instigator // Native|Public // @ game+0x2ce1480
	void OnRep_AttachmentReplication(); // Function Engine.Actor.OnRep_AttachmentReplication // Native|Public // @ game+0x2ce1460
	void OnEndPlayDynamicMulticastEvent__DelegateSignature(struct AActor* EndPlayActor); // DelegateFunction Engine.Actor.OnEndPlayDynamicMulticastEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x188c2f0
	void OnDestroyedDynamicMulticastEvent__DelegateSignature(struct AActor* DeletedActor); // DelegateFunction Engine.Actor.OnDestroyedDynamicMulticastEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x188c2f0
	void MakeNoise(float Loudness, struct APawn* NoiseInstigator, struct FVector NoiseLocation, float MaxRange, struct FName Tag); // Function Engine.Actor.MakeNoise // Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ce12d0
	struct UMaterialInstanceDynamic* MakeMIDForMaterial(struct UMaterialInterface* Parent); // Function Engine.Actor.MakeMIDForMaterial // Final|Native|Public|BlueprintCallable // @ game+0x2ce1240
	bool K2_TeleportTo(struct FVector DestLocation, struct FRotator DestRotation); // Function Engine.Actor.K2_TeleportTo // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ce0ea0
	bool K2_SetActorTransform(struct FTransform NewTransform, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_SetActorTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2cdfe70
	void K2_SetActorRelativeTransform(struct FTransform NewRelativeTransform, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_SetActorRelativeTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2cdfc80
	void K2_SetActorRelativeRotation(struct FRotator NewRelativeRotation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_SetActorRelativeRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2cdfad0
	void K2_SetActorRelativeLocation(struct FVector NewRelativeLocation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_SetActorRelativeLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2cdf920
	bool K2_SetActorLocationAndRotation(struct FVector NewLocation, struct FRotator NewRotation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_SetActorLocationAndRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2cdf740
	bool K2_SetActorLocation(struct FVector NewLocation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_SetActorLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2cdf590
	void K2_OnReset(); // Function Engine.Actor.K2_OnReset // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void K2_OnEndViewTarget(struct APlayerController* PC); // Function Engine.Actor.K2_OnEndViewTarget // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void K2_OnBecomeViewTarget(struct APlayerController* PC); // Function Engine.Actor.K2_OnBecomeViewTarget // Event|Public|BlueprintEvent // @ game+0x188c2f0
	struct USceneComponent* K2_GetRootComponent(); // Function Engine.Actor.K2_GetRootComponent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdf560
	struct FRotator K2_GetActorRotation(); // Function Engine.Actor.K2_GetActorRotation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdf3d0
	struct FVector K2_GetActorLocation(); // Function Engine.Actor.K2_GetActorLocation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdf390
	void K2_DestroyComponent(struct UActorComponent* Component); // Function Engine.Actor.K2_DestroyComponent // Final|Native|Public|BlueprintCallable // @ game+0x2cdf290
	void K2_DestroyActor(); // Function Engine.Actor.K2_DestroyActor // Native|Public|BlueprintCallable // @ game+0x2cdf270
	void K2_AttachRootComponentToActor(struct AActor* InParentActor, struct FName InSocketName, char AttachLocationType, bool bWeldSimulatedBodies); // Function Engine.Actor.K2_AttachRootComponentToActor // Final|Native|Public|BlueprintCallable // @ game+0x2cdefd0
	void K2_AttachRootComponentTo(struct USceneComponent* InParent, struct FName InSocketName, char AttachLocationType, bool bWeldSimulatedBodies); // Function Engine.Actor.K2_AttachRootComponentTo // Final|Native|Public|BlueprintCallable // @ game+0x2cdee80
	void K2_AddActorWorldTransform(struct FTransform DeltaTransform, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorWorldTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2cdde90
	void K2_AddActorWorldRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorWorldRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2cddce0
	void K2_AddActorWorldOffset(struct FVector DeltaLocation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorWorldOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2cddb30
	void K2_AddActorLocalTransform(struct FTransform NewTransform, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorLocalTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2cdd940
	void K2_AddActorLocalRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorLocalRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2cdd790
	void K2_AddActorLocalOffset(struct FVector DeltaLocation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorLocalOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2cdd5e0
	bool IsOverlappingActor(struct AActor* Other); // Function Engine.Actor.IsOverlappingActor // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdd3f0
	bool IsChildActor(); // Function Engine.Actor.IsChildActor // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdd0a0
	bool IsActorTickEnabled(); // Function Engine.Actor.IsActorTickEnabled // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdd010
	bool IsActorBeingDestroyed(); // Function Engine.Actor.IsActorBeingDestroyed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdcfe0
	bool HasNetOwner(); // Function Engine.Actor.HasNetOwner // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdcf80
	bool HasAuthority(); // Function Engine.Actor.HasAuthority // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdcf20
	float GetVerticalDistanceTo(struct AActor* OtherActor); // Function Engine.Actor.GetVerticalDistanceTo // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdcd70
	struct FVector GetVelocity(); // Function Engine.Actor.GetVelocity // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdcd30
	struct FTransform GetTransform(); // Function Engine.Actor.GetTransform // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdcbb0
	bool GetTickableWhenPaused(); // Function Engine.Actor.GetTickableWhenPaused // Final|Native|Public|BlueprintCallable // @ game+0x2cdc920
	char GetPxActorCapacityForPhysXAggregate(); // Function Engine.Actor.GetPxActorCapacityForPhysXAggregate // Native|Event|Public|BlueprintEvent|Const // @ game+0x2cdc500
	struct AActor* GetParentActor(); // Function Engine.Actor.GetParentActor // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdc3f0
	struct AActor* GetOwner(); // Function Engine.Actor.GetOwner // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdc380
	void GetOverlappingComponents(struct TArray<struct UPrimitiveComponent*> OverlappingComponents); // Function Engine.Actor.GetOverlappingComponents // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdc2d0
	void GetOverlappingActors(struct TArray<struct AActor*> OverlappingActors, struct UClass* ClassFilter); // Function Engine.Actor.GetOverlappingActors // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdc1d0
	float GetLifeSpan(); // Function Engine.Actor.GetLifeSpan // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdc070
	struct UObject* GetInterfaceImplementer(struct UClass* InterfaceClass); // Function Engine.Actor.GetInterfaceImplementer // Final|Native|Public|BlueprintCallable // @ game+0x2cdbfe0
	struct AController* GetInstigatorController(); // Function Engine.Actor.GetInstigatorController // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdbfb0
	struct APawn* GetInstigator(); // Function Engine.Actor.GetInstigator // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdbf80
	struct FVector GetInputVectorAxisValue(struct FKey InputAxisKey); // Function Engine.Actor.GetInputVectorAxisValue // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdbd40
	float GetInputAxisValue(struct FName InputAxisName); // Function Engine.Actor.GetInputAxisValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdb7b0
	float GetInputAxisKeyValue(struct FKey InputAxisKey); // Function Engine.Actor.GetInputAxisKeyValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdb6b0
	float GetHorizontalDotProductTo(struct AActor* OtherActor); // Function Engine.Actor.GetHorizontalDotProductTo // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdb3f0
	float GetHorizontalDistanceTo(struct AActor* OtherActor); // Function Engine.Actor.GetHorizontalDistanceTo // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdb350
	float GetDotProductTo(struct AActor* OtherActor); // Function Engine.Actor.GetDotProductTo // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cda7d0
	float GetDistanceTo(struct AActor* OtherActor); // Function Engine.Actor.GetDistanceTo // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cda730
	struct TArray<struct UActorComponent*> GetComponentsByTag(struct UClass* ComponentClass, struct FName Tag); // Function Engine.Actor.GetComponentsByTag // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cda070
	struct TArray<struct UActorComponent*> GetComponentsByClass(struct UClass* ComponentClass); // Function Engine.Actor.GetComponentsByClass // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cd9f80
	void GetComponentInterfacesByClass(struct TArray<struct UActorComponent*> OutInterfaces, struct UClass* InterfaceClass); // Function Engine.Actor.GetComponentInterfacesByClass // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2cd9e40
	struct UActorComponent* GetComponentInterfaceByClass(struct UClass* InterfaceClass); // Function Engine.Actor.GetComponentInterfaceByClass // Final|Native|Public|BlueprintCallable // @ game+0x2cd9db0
	struct UActorComponent* GetComponentByClass(struct UClass* ComponentClass); // Function Engine.Actor.GetComponentByClass // Native|Public // @ game+0x2cd9d10
	struct AActor* GetAttachParentActor(); // Function Engine.Actor.GetAttachParentActor // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cd9a00
	struct FVector GetActorUpVector(); // Function Engine.Actor.GetActorUpVector // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cd98f0
	float GetActorTimeDilation(); // Function Engine.Actor.GetActorTimeDilation // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cd98c0
	struct FVector GetActorScale3D(); // Function Engine.Actor.GetActorScale3D // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cd9880
	struct FVector GetActorRightVector(); // Function Engine.Actor.GetActorRightVector // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cd9840
	struct FVector GetActorRelativeScale3D(); // Function Engine.Actor.GetActorRelativeScale3D // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cd9800
	struct FVector GetActorForwardVector(); // Function Engine.Actor.GetActorForwardVector // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cd97c0
	void GetActorEyesViewPoint(struct FVector OutLocation, struct FRotator OutRotation); // Function Engine.Actor.GetActorEyesViewPoint // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cd96d0
	bool GetActorEnableCollision(); // Function Engine.Actor.GetActorEnableCollision // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cd96a0
	void GetActorBounds(bool bOnlyCollidingComponents, struct FVector Origin, struct FVector BoxExtent, bool bIncludeFromChildActors); // Function Engine.Actor.GetActorBounds // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cd9520
	void ForceNetUpdate(); // Function Engine.Actor.ForceNetUpdate // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x2cd9500
	bool FlushNetDormancy(); // Function Engine.Actor.FlushNetDormancy // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x2cd94a0
	void EnableInput(struct APlayerController* PlayerController); // Function Engine.Actor.EnableInput // Native|Public|BlueprintCallable // @ game+0x2cd9170
	void DisableInput(struct APlayerController* PlayerController); // Function Engine.Actor.DisableInput // Native|Public|BlueprintCallable // @ game+0x2cd9020
	void DetachRootComponentFromParent(bool bMaintainWorldPosition); // Function Engine.Actor.DetachRootComponentFromParent // Final|Native|Public|BlueprintCallable // @ game+0x2cd8f90
	void AttachRootComponentToNoReplication(struct USceneComponent* InParent, struct FName InSocketName, char AttachLocationType, bool bWeldSimulatedBodies); // Function Engine.Actor.AttachRootComponentToNoReplication // Final|Native|Public|BlueprintCallable // @ game+0x2cd5c00
	void AttachActorToActorNoReplication(struct AActor* InParentActor, struct FName InSocketName, bool bWeldSimulatedBodies); // Function Engine.Actor.AttachActorToActorNoReplication // Final|Native|Public|BlueprintCallable // @ game+0x2cd5af0
	void AddTickPrerequisiteComponent(struct UActorComponent* PrerequisiteComponent); // Function Engine.Actor.AddTickPrerequisiteComponent // Native|Public|BlueprintCallable // @ game+0x2cd5890
	void AddTickPrerequisiteActor(struct AActor* PrerequisiteActor); // Function Engine.Actor.AddTickPrerequisiteActor // Native|Public|BlueprintCallable // @ game+0x2cd5770
	struct UActorComponent* AddComponent(struct FName TemplateName, bool bManualAttachment, struct FTransform RelativeTransform, struct UObject* ComponentTemplateContext); // Function Engine.Actor.AddComponent // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2cd5280
	bool ActorHasTag(struct FName Tag); // Function Engine.Actor.ActorHasTag // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cd5150
};

// Class Engine.BlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintFunctionLibrary : UObject {
};

// Class Engine.DeveloperSettings
// Size: 0x38 (Inherited: 0x28)
struct UDeveloperSettings : UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
};

// Class Engine.SceneComponent
// Size: 0x2e0 (Inherited: 0xc8)
struct USceneComponent : UActorComponent {
	struct TArray<struct USceneComponent*> AttachChildren; // 0xc8(0x10)
	char bRequiresCustomLocation : 1; // 0xd8(0x01)
	char UnknownData_D8_1 : 7; // 0xd8(0x01)
	char UnknownData_D9[0x7]; // 0xd9(0x07)
	struct USceneComponent* AttachParent; // 0xe0(0x08)
	struct FName AttachSocketName; // 0xe8(0x08)
	char bAbsoluteLocation : 1; // 0xf0(0x01)
	char bAbsoluteRotation : 1; // 0xf0(0x01)
	char bAbsoluteScale : 1; // 0xf0(0x01)
	char bVisible : 1; // 0xf0(0x01)
	char bAbsoluteTranslation : 1; // 0xf0(0x01)
	char bHiddenInGame : 1; // 0xf0(0x01)
	char bShouldUpdatePhysicsVolume : 1; // 0xf0(0x01)
	char bBoundsChangeTriggersStreamingDataRebuild : 1; // 0xf0(0x01)
	char bUseAttachParentBound : 1; // 0xf1(0x01)
	char bComponentIsUnionOfChildren : 1; // 0xf1(0x01)
	char UnknownData_F1_2 : 1; // 0xf1(0x01)
	char bJitterReduction : 1; // 0xf1(0x01)
	char UnknownData_F1_4 : 1; // 0xf1(0x01)
	char CacheRootVelocity : 1; // 0xf1(0x01)
	char bWorldToComponentUpdated : 1; // 0xf1(0x01)
	char UnknownData_F2[0xe]; // 0xf2(0x0e)
	struct APhysicsVolume* PhysicsVolume; // 0x100(0x08)
	struct FVector RelativeLocation; // 0x108(0x0c)
	struct FRotator RelativeRotation; // 0x114(0x0c)
	struct FVector RelativeScale3D; // 0x120(0x0c)
	char UnknownData_12C[0x104]; // 0x12c(0x104)
	char Mobility; // 0x230(0x01)
	char DetailMode; // 0x231(0x01)
	char UnknownData_232[0xa]; // 0x232(0x0a)
	struct FVector ComponentVelocity; // 0x23c(0x0c)
	struct FMulticastDelegate PhysicsVolumeChangedDelegate; // 0x248(0x10)
	char UnknownData_258[0x10]; // 0x258(0x10)
	struct TArray<struct FName> SocketVelocitiesToCache; // 0x268(0x10)
	struct TArray<struct AActor*> MovedActors; // 0x278(0x10)
	char UnknownData_288[0x58]; // 0x288(0x58)

	void ToggleVisibility(bool bPropagateToChildren); // Function Engine.SceneComponent.ToggleVisibility // Final|Native|Public|BlueprintCallable // @ game+0x2ce60b0
	void SnapTo(struct USceneComponent* InParent, struct FName InSocketName); // Function Engine.SceneComponent.SnapTo // Final|Native|Public|BlueprintCallable // @ game+0x2ce57d0
	bool SharesBasis(struct USceneComponent* Other); // Function Engine.SceneComponent.SharesBasis // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ce5680
	void SetWorldScale3D(struct FVector NewScale); // Function Engine.SceneComponent.SetWorldScale3D // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ce55f0
	void SetVisibility(bool bNewVisibility, bool bPropagateToChildren); // Function Engine.SceneComponent.SetVisibility // Native|Public|BlueprintCallable // @ game+0x2ce5410
	void SetRelativeScale3D(struct FVector NewScale3D); // Function Engine.SceneComponent.SetRelativeScale3D // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ce4d30
	void SetHiddenInGame(bool NewHidden, bool bPropagateToChildren); // Function Engine.SceneComponent.SetHiddenInGame // Native|Public|BlueprintCallable // @ game+0x2ce4560
	void SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale); // Function Engine.SceneComponent.SetAbsolute // Final|Native|Public|BlueprintCallable // @ game+0x2ce3670
	void ResetRelativeTransform(); // Function Engine.SceneComponent.ResetRelativeTransform // Final|Native|Public|BlueprintCallable // @ game+0x2ce27a0
	void OnRep_Visibility(bool OldValue); // Function Engine.SceneComponent.OnRep_Visibility // Final|Native|Private // @ game+0x2ce1580
	void OnRep_Transform(); // Function Engine.SceneComponent.OnRep_Transform // Final|Native|Private // @ game+0x2ce1560
	bool K2_TryGetCachedSocketVelocity(struct FName SocketName, struct FVector OutVelocity); // Function Engine.SceneComponent.K2_TryGetCachedSocketVelocity // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ce0f90
	void K2_SetWorldTransform(struct FTransform NewTransform, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_SetWorldTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ce0cb0
	void K2_SetWorldRotation(struct FRotator NewRotation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_SetWorldRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ce0b00
	void K2_SetWorldLocationAndRotation(struct FVector NewLocation, struct FRotator NewRotation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_SetWorldLocationAndRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ce0930
	void K2_SetWorldLocation(struct FVector NewLocation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_SetWorldLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ce0780
	void K2_SetRelativeTransform(struct FTransform NewTransform, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_SetRelativeTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ce0590
	void K2_SetRelativeRotation(struct FRotator NewRotation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_SetRelativeRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ce03e0
	void K2_SetRelativeLocationAndRotation(struct FVector NewLocation, struct FRotator NewRotation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_SetRelativeLocationAndRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ce0210
	void K2_SetRelativeLocation(struct FVector NewLocation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_SetRelativeLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ce0060
	struct FTransform K2_GetComponentToWorld(); // Function Engine.SceneComponent.K2_GetComponentToWorld // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdf4d0
	struct FVector K2_GetComponentScale(); // Function Engine.SceneComponent.K2_GetComponentScale // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdf490
	struct FRotator K2_GetComponentRotation(); // Function Engine.SceneComponent.K2_GetComponentRotation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdf450
	struct FVector K2_GetComponentLocation(); // Function Engine.SceneComponent.K2_GetComponentLocation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdf410
	void K2_AttachTo(struct USceneComponent* InParent, struct FName InSocketName, char AttachType, bool bWeldSimulatedBodies); // Function Engine.SceneComponent.K2_AttachTo // Final|Native|Public|BlueprintCallable // @ game+0x2cdf120
	void K2_AddWorldTransform(struct FTransform DeltaTransform, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddWorldTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2cdec90
	void K2_AddWorldRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddWorldRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2cdeae0
	void K2_AddWorldOffset(struct FVector DeltaLocation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddWorldOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2cde930
	void K2_AddRelativeRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddRelativeRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2cde780
	void K2_AddRelativeLocation(struct FVector DeltaLocation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddRelativeLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2cde5d0
	void K2_AddLocalTransform(struct FTransform DeltaTransform, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddLocalTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2cde3e0
	void K2_AddLocalRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddLocalRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2cde230
	void K2_AddLocalOffset(struct FVector DeltaLocation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddLocalOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2cde080
	bool IsVisible(); // Function Engine.SceneComponent.IsVisible // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdd5b0
	bool IsSimulatingPhysics(struct FName BoneName); // Function Engine.SceneComponent.IsSimulatingPhysics // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdd510
	bool IsAnySimulatingPhysics(); // Function Engine.SceneComponent.IsAnySimulatingPhysics // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdd040
	struct FVector GetUpVector(); // Function Engine.SceneComponent.GetUpVector // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdcc10
	struct FTransform GetSocketTransform(struct FName InSocketName, char TransformSpace); // Function Engine.SceneComponent.GetSocketTransform // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdc7d0
	struct FRotator GetSocketRotation(struct FName InSocketName); // Function Engine.SceneComponent.GetSocketRotation // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdc720
	struct FQuat GetSocketQuaternion(struct FName InSocketName); // Function Engine.SceneComponent.GetSocketQuaternion // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdc680
	struct FVector GetSocketLocation(struct FName InSocketName); // Function Engine.SceneComponent.GetSocketLocation // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdc5d0
	struct FVector GetRightVector(); // Function Engine.SceneComponent.GetRightVector // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdc590
	struct FTransform GetRelativeTransform(); // Function Engine.SceneComponent.GetRelativeTransform // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdc530
	struct APhysicsVolume* GetPhysicsVolume(); // Function Engine.SceneComponent.GetPhysicsVolume // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdc4d0
	void GetParentComponents(struct TArray<struct USceneComponent*> Parents); // Function Engine.SceneComponent.GetParentComponents // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdc420
	int32_t GetNumChildrenComponents(); // Function Engine.SceneComponent.GetNumChildrenComponents // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdc1a0
	struct FVector GetForwardVector(); // Function Engine.SceneComponent.GetForwardVector // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cda980
	struct FVector GetComponentVelocity(); // Function Engine.SceneComponent.GetComponentVelocity // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cd9f40
	void GetChildrenComponents(bool bIncludeAllDescendants, struct TArray<struct USceneComponent*> Children); // Function Engine.SceneComponent.GetChildrenComponents // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2cd9bf0
	struct USceneComponent* GetChildComponent(int32_t ChildIndex); // Function Engine.SceneComponent.GetChildComponent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cd9b60
	struct FName GetAttachSocketName(); // Function Engine.SceneComponent.GetAttachSocketName // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cd9a30
	struct USceneComponent* GetAttachParent(); // Function Engine.SceneComponent.GetAttachParent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cd99d0
	struct FTransform GetAttachedBasisTransform(); // Function Engine.SceneComponent.GetAttachedBasisTransform // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cd9a50
	struct TArray<struct FName> GetAllSocketNames(); // Function Engine.SceneComponent.GetAllSocketNames // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cd9930
	bool DoesSocketExist(struct FName InSocketName); // Function Engine.SceneComponent.DoesSocketExist // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cd90b0
	void DetachFromParent(bool bMaintainWorldPosition, bool bCallModify); // Function Engine.SceneComponent.DetachFromParent // Native|Public|BlueprintCallable // @ game+0x2cd8ec0
};

// Class Engine.Pawn
// Size: 0x440 (Inherited: 0x3c8)
struct APawn : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	char bUseControllerRotationPitch : 1; // 0x3d0(0x01)
	char bUseControllerRotationYaw : 1; // 0x3d0(0x01)
	char bUseControllerRotationRoll : 1; // 0x3d0(0x01)
	char bCanAffectNavigationGeneration : 1; // 0x3d0(0x01)
	char UnknownData_3D0_4 : 4; // 0x3d0(0x01)
	char UnknownData_3D1[0x3]; // 0x3d1(0x03)
	float BaseEyeHeight; // 0x3d4(0x04)
	char AutoPossessPlayer; // 0x3d8(0x01)
	char AutoPossessAI; // 0x3d9(0x01)
	char UnknownData_3DA[0x6]; // 0x3da(0x06)
	struct UClass* AIControllerClass; // 0x3e0(0x08)
	struct APlayerState* PlayerState; // 0x3e8(0x08)
	char RemoteViewPitch; // 0x3f0(0x01)
	char UnknownData_3F1[0x7]; // 0x3f1(0x07)
	struct AController* LastHitBy; // 0x3f8(0x08)
	struct AController* Controller; // 0x400(0x08)
	char UnknownData_408[0x18]; // 0x408(0x18)
	struct FVector ControlInputVector; // 0x420(0x0c)
	struct FVector LastControlInputVector; // 0x42c(0x0c)
	char UnknownData_438[0x8]; // 0x438(0x08)

	void SpawnDefaultController(); // Function Engine.Pawn.SpawnDefaultController // Native|Public|BlueprintCallable // @ game+0x2deb5c0
	void SetCanAffectNavigationGeneration(bool bNewValue); // Function Engine.Pawn.SetCanAffectNavigationGeneration // Final|Native|Public|BlueprintCallable // @ game+0x2de6220
	void ReceiveUnpossessed(struct AController* OldController); // Function Engine.Pawn.ReceiveUnpossessed // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceivePossessed(struct AController* NewController); // Function Engine.Pawn.ReceivePossessed // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void PawnMakeNoise(float Loudness, struct FVector NoiseLocation, bool bUseNoiseMakerLocation, struct AActor* NoiseMaker); // Function Engine.Pawn.PawnMakeNoise // Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2de3540
	void OnRep_PlayerState(); // Function Engine.Pawn.OnRep_PlayerState // Native|Public // @ game+0x2de3180
	void OnRep_Controller(); // Function Engine.Pawn.OnRep_Controller // Native|Public // @ game+0x2de30e0
	void LaunchPawn(struct FVector LaunchVelocity, bool bXYOverride, bool bZOverride); // Function Engine.Pawn.LaunchPawn // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2de2840
	struct FVector K2_GetMovementInputVector(); // Function Engine.Pawn.K2_GetMovementInputVector // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2de22b0
	bool IsMoveInputIgnored(); // Function Engine.Pawn.IsMoveInputIgnored // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de1d60
	bool IsLocallyControlled(); // Function Engine.Pawn.IsLocallyControlled // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de1d00
	bool IsControlled(); // Function Engine.Pawn.IsControlled // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de1b50
	struct FVector GetPendingMovementInputVector(); // Function Engine.Pawn.GetPendingMovementInputVector // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddebf0
	struct FVector GetNavAgentLocation(); // Function Engine.Pawn.GetNavAgentLocation // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2dde060
	struct UPawnMovementComponent* GetMovementComponent(); // Function Engine.Pawn.GetMovementComponent // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2dddf90
	struct AActor* GetMovementBaseActor(struct APawn* Pawn); // Function Engine.Pawn.GetMovementBaseActor // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2dddf10
	struct FVector GetLastMovementInputVector(); // Function Engine.Pawn.GetLastMovementInputVector // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddd560
	struct FRotator GetControlRotation(); // Function Engine.Pawn.GetControlRotation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddcd30
	struct AController* GetController(); // Function Engine.Pawn.GetController // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddcd70
	struct FRotator GetBaseAimRotation(); // Function Engine.Pawn.GetBaseAimRotation // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddc750
	void DetachFromControllerPendingDestroy(); // Function Engine.Pawn.DetachFromControllerPendingDestroy // Native|Public|BlueprintCallable // @ game+0x2dda7d0
	struct FVector ConsumeMovementInputVector(); // Function Engine.Pawn.ConsumeMovementInputVector // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2dda0c0
	void AddMovementInput(struct FVector WorldDirection, float ScaleValue, bool bForce); // Function Engine.Pawn.AddMovementInput // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2dd8f80
	void AddControllerYawInput(float Val); // Function Engine.Pawn.AddControllerYawInput // Native|Public|BlueprintCallable // @ game+0x2dd81f0
	void AddControllerRollInput(float Val); // Function Engine.Pawn.AddControllerRollInput // Native|Public|BlueprintCallable // @ game+0x2dd8170
	void AddControllerPitchInput(float Val); // Function Engine.Pawn.AddControllerPitchInput // Native|Public|BlueprintCallable // @ game+0x2dd80f0
};

// Class Engine.Character
// Size: 0x5e0 (Inherited: 0x440)
struct ACharacter : APawn {
	struct USkeletalMeshComponent* Mesh; // 0x440(0x08)
	struct UCharacterMovementComponent* CharacterMovement; // 0x448(0x08)
	struct UCapsuleComponent* CapsuleComponent; // 0x450(0x08)
	struct FBasedMovementInfo BasedMovement; // 0x458(0x38)
	struct FBasedMovementInfo ReplicatedBasedMovement; // 0x490(0x38)
	struct FVector BaseTranslationOffset; // 0x4c8(0x0c)
	char UnknownData_4D4[0xc]; // 0x4d4(0x0c)
	struct FQuat BaseRotationOffset; // 0x4e0(0x10)
	char ReplicatedMovementMode; // 0x4f0(0x01)
	bool bInBaseReplication; // 0x4f1(0x01)
	char UnknownData_4F2[0x2]; // 0x4f2(0x02)
	float CrouchedEyeHeight; // 0x4f4(0x04)
	char bIsCrouched : 1; // 0x4f8(0x01)
	char bPressedJump : 1; // 0x4f8(0x01)
	char bClientUpdating : 1; // 0x4f8(0x01)
	char bClientWasFalling : 1; // 0x4f8(0x01)
	char bClientResimulateRootMotion : 1; // 0x4f8(0x01)
	char bSimGravityDisabled : 1; // 0x4f8(0x01)
	char bServerMoveIgnoreRootMotion : 1; // 0x4f8(0x01)
	char UnknownData_4F9[0x3]; // 0x4f9(0x03)
	float JumpKeyHoldTime; // 0x4fc(0x04)
	float JumpMaxHoldTime; // 0x500(0x04)
	char UnknownData_504[0x4]; // 0x504(0x04)
	struct FMulticastDelegate OnReachedJumpApex; // 0x508(0x10)
	char UnknownData_518[0x10]; // 0x518(0x10)
	struct FMulticastDelegate OnCharacterMovementUpdated; // 0x528(0x10)
	char UnknownData_538[0x8]; // 0x538(0x08)
	struct FRootMotionMovementParams ClientRootMotionParams; // 0x540(0x40)
	struct TArray<struct FSimulatedRootMotionReplicatedMove> RootMotionRepMoves; // 0x580(0x10)
	struct FRepRootMotionMontage RepRootMotion; // 0x590(0x40)
	char UnknownData_5D0[0x10]; // 0x5d0(0x10)

	void UnCrouch(bool bClientSimulation); // Function Engine.Character.UnCrouch // Native|Public|BlueprintCallable // @ game+0x2debe00
	void StopJumping(); // Function Engine.Character.StopJumping // Native|Public|BlueprintCallable // @ game+0x2deb7e0
	void StopAnimMontage(struct UAnimMontage* AnimMontage); // Function Engine.Character.StopAnimMontage // Native|Public|BlueprintCallable // @ game+0x2deb750
	void SetReplicateMovement(bool bInReplicateMovement); // Function Engine.Character.SetReplicateMovement // Native|Public|BlueprintCallable // @ game+0x2dea280
	float PlayAnimMontage(struct UAnimMontage* AnimMontage, float InPlayRate, struct FName StartSectionName); // Function Engine.Character.PlayAnimMontage // Native|Public|BlueprintCallable // @ game+0x2de38c0
	void OnWalkingOffLedge(struct FVector PreviousFloorImpactNormal, struct FVector PreviousFloorContactNormal, struct FVector PreviousLocation, float TimeDelta); // Function Engine.Character.OnWalkingOffLedge // Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x2de3380
	void OnRep_RootMotion(); // Function Engine.Character.OnRep_RootMotion // Final|Native|Public // @ game+0x2de3220
	void OnRep_ReplicatedBasedMovement(); // Function Engine.Character.OnRep_ReplicatedBasedMovement // Native|Public // @ game+0x2de31a0
	void OnRep_IsCrouched(); // Function Engine.Character.OnRep_IsCrouched // Native|Public // @ game+0x2de3140
	void OnLaunched(struct FVector LaunchVelocity, bool bXYOverride, bool bZOverride); // Function Engine.Character.OnLaunched // Event|Public|HasDefaults|BlueprintEvent // @ game+0x188c2f0
	void OnLanded(struct FHitResult Hit); // Function Engine.Character.OnLanded // Event|Public|HasOutParms|BlueprintEvent // @ game+0x188c2f0
	void OnJumped(); // Function Engine.Character.OnJumped // Native|Event|Public|BlueprintEvent // @ game+0x2de2fb0
	void LaunchCharacter(struct FVector LaunchVelocity, bool bXYOverride, bool bZOverride); // Function Engine.Character.LaunchCharacter // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2de2720
	void K2_UpdateCustomMovement(float DeltaTime); // Function Engine.Character.K2_UpdateCustomMovement // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // Function Engine.Character.K2_OnStartCrouch // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void K2_OnMovementModeChanged(char PrevMovementMode, char NewMovementMode, char PrevCustomMode, char NewCustomMode); // Function Engine.Character.K2_OnMovementModeChanged // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // Function Engine.Character.K2_OnEndCrouch // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void Jump(); // Function Engine.Character.Jump // Native|Public|BlueprintCallable // @ game+0x2de2140
	bool IsPlayingRootMotion(); // Function Engine.Character.IsPlayingRootMotion // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de1ff0
	bool IsPlayingNetworkedRootMotionMontage(); // Function Engine.Character.IsPlayingNetworkedRootMotionMontage // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de1fc0
	bool IsJumpProvidingForce(); // Function Engine.Character.IsJumpProvidingForce // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de1cd0
	struct UAnimMontage* GetCurrentMontage(); // Function Engine.Character.GetCurrentMontage // Final|Native|Public|BlueprintCallable // @ game+0x2ddcda0
	void Crouch(bool bClientSimulation); // Function Engine.Character.Crouch // Native|Public|BlueprintCallable // @ game+0x2dda570
	void ClientCheatWalk(); // Function Engine.Character.ClientCheatWalk // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2dd9e50
	void ClientCheatGhost(); // Function Engine.Character.ClientCheatGhost // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2dd9e30
	void ClientCheatFly(); // Function Engine.Character.ClientCheatFly // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2dd9e10
	bool CanJumpInternal(); // Function Engine.Character.CanJumpInternal // Native|Event|Protected|BlueprintEvent|Const // @ game+0x2dd9a60
	bool CanJump(); // Function Engine.Character.CanJump // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2dd9a30
};

// Class Engine.InputComponent
// Size: 0x150 (Inherited: 0xc8)
struct UInputComponent : UActorComponent {
	char UnknownData_C8[0x88]; // 0xc8(0x88)

	bool WasControllerKeyJustReleased(struct FKey Key); // Function Engine.InputComponent.WasControllerKeyJustReleased // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0x2ce62f0
	bool WasControllerKeyJustPressed(struct FKey Key); // Function Engine.InputComponent.WasControllerKeyJustPressed // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0x2ce61f0
	bool IsControllerKeyDown(struct FKey Key); // Function Engine.InputComponent.IsControllerKeyDown // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdd100
	void GetTouchState(int32_t FingerIndex, float LocationX, float LocationY, bool bIsCurrentlyPressed); // Function Engine.InputComponent.GetTouchState // Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdca30
	struct FVector GetControllerVectorKeyState(struct FKey Key); // Function Engine.InputComponent.GetControllerVectorKeyState // Final|Native|Private|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cda5d0
	void GetControllerMouseDelta(float DeltaX, float DeltaY); // Function Engine.InputComponent.GetControllerMouseDelta // Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2cda4f0
	float GetControllerKeyTimeDown(struct FKey Key); // Function Engine.InputComponent.GetControllerKeyTimeDown // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0x2cda3f0
	void GetControllerAnalogStickState(char WhichStick, float StickX, float StickY); // Function Engine.InputComponent.GetControllerAnalogStickState // Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2cda2d0
	float GetControllerAnalogKeyState(struct FKey Key); // Function Engine.InputComponent.GetControllerAnalogKeyState // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0x2cda1d0
};

// Class Engine.AnimInstance
// Size: 0x440 (Inherited: 0x28)
struct UAnimInstance : UObject {
	struct USkeleton* CurrentSkeleton; // 0x28(0x08)
	struct TArray<struct FAnimTickRecord> UngroupedActivePlayers; // 0x30(0x10)
	struct TArray<struct FAnimGroupInstance> SyncGroups; // 0x40(0x10)
	struct TArray<struct FActiveVertexAnim> VertexAnims; // 0x50(0x10)
	char RootMotionMode; // 0x60(0x01)
	bool bWarnAboutBlueprintUsage; // 0x61(0x01)
	char UnknownData_62[0x6]; // 0x62(0x06)
	struct FMulticastDelegate OnMontageBlendingOut; // 0x68(0x10)
	struct FMulticastDelegate OnMontageStarted; // 0x78(0x10)
	struct FMulticastDelegate OnMontageEnded; // 0x88(0x10)
	struct FMulticastDelegate OnStateEntered; // 0x98(0x10)
	struct FMulticastDelegate OnStateExited; // 0xa8(0x10)
	struct FMulticastDelegate OnStateInitialised; // 0xb8(0x10)
	struct FMulticastDelegate OnAnimUpdated; // 0xc8(0x10)
	char UnknownData_D8[0x70]; // 0xd8(0x70)
	bool bQueueMontageEvents; // 0x148(0x01)
	char UnknownData_149[0xf7]; // 0x149(0xf7)
	struct TArray<struct FAnimNotifyEvent> ActiveAnimNotifyState; // 0x240(0x10)
	char UnknownData_250[0x100]; // 0x250(0x100)
	int16_t SlotNodeInitializationCounter; // 0x350(0x02)
	int16_t GraphTraversalCounter; // 0x352(0x02)
	char UnknownData_354[0x54]; // 0x354(0x54)
	bool bBoneCachesInvalidated; // 0x3a8(0x01)
	char UnknownData_3A9[0x8f]; // 0x3a9(0x8f)
	char UnknownData_438_0 : 1; // 0x438(0x01)
	char bBlueprintAnimUpdateEnabled : 1; // 0x438(0x01)
	char UnknownData_438_2 : 6; // 0x438(0x01)
	char UnknownData_439[0x7]; // 0x439(0x07)

	void UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic); // Function Engine.AnimInstance.UnlockAIResources // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x2ef99d0
	struct APawn* TryGetPawnOwner(); // Function Engine.AnimInstance.TryGetPawnOwner // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ef9880
	void StopSlotAnimation(float InBlendOutTime, struct FName SlotNodeName); // Function Engine.AnimInstance.StopSlotAnimation // Final|Native|Public|BlueprintCallable // @ game+0x2ef9700
	void SetMorphTarget(struct FName MorphTargetName, float Value); // Function Engine.AnimInstance.SetMorphTarget // Final|Native|Public|BlueprintCallable // @ game+0x2ef4fc0
	struct UAnimMontage* PlaySlotAnimationAsDynamicMontage(struct UAnimSequenceBase* Asset, struct FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount, float BlendOutTriggerTime, float StartingPosition); // Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage // Final|Native|Public|BlueprintCallable // @ game+0x2eef0c0
	float PlaySlotAnimation(struct UAnimSequenceBase* Asset, struct FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount); // Function Engine.AnimInstance.PlaySlotAnimation // Final|Native|Public|BlueprintCallable // @ game+0x2eeef00
	void Montage_Stop(float InBlendOutTime, struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_Stop // Final|Native|Public|BlueprintCallable // @ game+0x2eee340
	void Montage_SetPlayRate(struct UAnimMontage* Montage, float NewPlayRate); // Function Engine.AnimInstance.Montage_SetPlayRate // Final|Native|Public|BlueprintCallable // @ game+0x2eee270
	void Montage_SetNextSection(struct FName SectionNameToChange, struct FName NextSection, struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_SetNextSection // Final|Native|Public|BlueprintCallable // @ game+0x2eee170
	void Montage_Resume(struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_Resume // Final|Native|Public|BlueprintCallable // @ game+0x2eee0f0
	float Montage_Play(struct UAnimMontage* MontageToPlay, float InPlayRate, float Position); // Function Engine.AnimInstance.Montage_Play // Final|Native|Public|BlueprintCallable // @ game+0x2eedff0
	void Montage_Pause(struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_Pause // Final|Native|Public|BlueprintCallable // @ game+0x2eedf70
	void Montage_JumpToSectionsEnd(struct FName SectionName, struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_JumpToSectionsEnd // Final|Native|Public|BlueprintCallable // @ game+0x2eedeb0
	void Montage_JumpToSection(struct FName SectionName, struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_JumpToSection // Final|Native|Public|BlueprintCallable // @ game+0x2eeddf0
	bool Montage_IsPlaying(struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_IsPlaying // Final|Native|Public|BlueprintCallable // @ game+0x2eedd60
	bool Montage_IsActive(struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_IsActive // Final|Native|Public|BlueprintCallable // @ game+0x2eedcd0
	struct FName Montage_GetCurrentSection(struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_GetCurrentSection // Final|Native|Public|BlueprintCallable // @ game+0x2eedc40
	void LockAIResources(bool bLockMovement, bool LockAILogic); // Function Engine.AnimInstance.LockAIResources // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x2eed9c0
	bool IsPlayingSlotAnimation(struct UAnimSequenceBase* Asset, struct FName SlotNodeName); // Function Engine.AnimInstance.IsPlayingSlotAnimation // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eed340
	float GetSyncGroupPosition(struct FName Name); // Function Engine.AnimInstance.GetSyncGroupPosition // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eec6c0
	float GetStateWeight(int32_t MachineIndex, int32_t StateIndex); // Function Engine.AnimInstance.GetStateWeight // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2eec3f0
	float GetRelevantAnimTimeRemainingFraction(int32_t MachineIndex, int32_t StateIndex); // Function Engine.AnimInstance.GetRelevantAnimTimeRemainingFraction // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2eebe10
	float GetRelevantAnimTimeRemaining(int32_t MachineIndex, int32_t StateIndex); // Function Engine.AnimInstance.GetRelevantAnimTimeRemaining // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2eebd50
	float GetRelevantAnimTimeFraction(int32_t MachineIndex, int32_t StateIndex); // Function Engine.AnimInstance.GetRelevantAnimTimeFraction // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2eebc90
	float GetRelevantAnimTime(int32_t MachineIndex, int32_t StateIndex); // Function Engine.AnimInstance.GetRelevantAnimTime // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2eebbd0
	float GetRelevantAnimLength(int32_t MachineIndex, int32_t StateIndex); // Function Engine.AnimInstance.GetRelevantAnimLength // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2eebb10
	struct USkeletalMeshComponent* GetOwningComponent(); // Function Engine.AnimInstance.GetOwningComponent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eeb5e0
	struct AActor* GetOwningActor(); // Function Engine.AnimInstance.GetOwningActor // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eeb520
	float GetMaxPlayingAnimTimeRemaining(int32_t MachineIndex, int32_t StateIndex); // Function Engine.AnimInstance.GetMaxPlayingAnimTimeRemaining // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2eeb0f0
	float GetMaxAnimTimeRemaining(int32_t MachineIndex, int32_t StateIndex); // Function Engine.AnimInstance.GetMaxAnimTimeRemaining // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2eeaff0
	float GetInstanceTransitionTimeElapsedFraction(int32_t MachineIndex, int32_t TransitionIndex); // Function Engine.AnimInstance.GetInstanceTransitionTimeElapsedFraction // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2eea990
	float GetInstanceTransitionTimeElapsed(int32_t MachineIndex, int32_t TransitionIndex); // Function Engine.AnimInstance.GetInstanceTransitionTimeElapsed // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2eea8d0
	float GetInstanceTransitionCrossfadeDuration(int32_t MachineIndex, int32_t TransitionIndex); // Function Engine.AnimInstance.GetInstanceTransitionCrossfadeDuration // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2eea810
	float GetInstanceStateWeight(int32_t MachineIndex, int32_t StateIndex); // Function Engine.AnimInstance.GetInstanceStateWeight // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2eea5f0
	float GetInstanceCurrentStateElapsedTime(int32_t MachineIndex); // Function Engine.AnimInstance.GetInstanceCurrentStateElapsedTime // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2eea560
	float GetInstanceAssetPlayerTimeFromEndFraction(int32_t AssetPlayerIndex); // Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEndFraction // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2eea4a0
	float GetInstanceAssetPlayerTimeFromEnd(int32_t AssetPlayerIndex); // Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEnd // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2eea410
	float GetInstanceAssetPlayerTimeFraction(int32_t AssetPlayerIndex); // Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFraction // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2eea380
	float GetInstanceAssetPlayerTime(int32_t AssetPlayerIndex); // Function Engine.AnimInstance.GetInstanceAssetPlayerTime // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2eea2f0
	float GetInstanceAssetPlayerLength(int32_t AssetPlayerIndex); // Function Engine.AnimInstance.GetInstanceAssetPlayerLength // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2eea260
	float GetCurveValue(struct FName CurveName); // Function Engine.AnimInstance.GetCurveValue // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2ee9b70
	struct FName GetCurrentStateName(int32_t MachineIndex); // Function Engine.AnimInstance.GetCurrentStateName // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2ee9ae0
	float GetCurrentStateElapsedTime(int32_t MachineIndex); // Function Engine.AnimInstance.GetCurrentStateElapsedTime // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2ee9a50
	float GetAnimAssetPlayerTimeFromEndFraction(struct UAnimationAsset* AnimAsset, float CurrentTime); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEndFraction // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ee8d80
	float GetAnimAssetPlayerTimeFromEnd(struct UAnimationAsset* AnimAsset, float CurrentTime); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEnd // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2ee8cb0
	float GetAnimAssetPlayerTimeFraction(struct UAnimationAsset* AnimAsset, float CurrentTime); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFraction // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ee8be0
	float GetAnimAssetPlayerLength(struct UAnimationAsset* AnimAsset); // Function Engine.AnimInstance.GetAnimAssetPlayerLength // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ee8b50
	void ClearMorphTargets(); // Function Engine.AnimInstance.ClearMorphTargets // Final|Native|Public|BlueprintCallable // @ game+0x2ee6e30
	float CalculateDirection(struct FVector Velocity, struct FRotator BaseRotation); // Function Engine.AnimInstance.CalculateDirection // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ee6b30
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Engine.AnimInstance.BlueprintUpdateAnimation // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void BlueprintUninitializeAnimation(); // Function Engine.AnimInstance.BlueprintUninitializeAnimation // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void BlueprintPostEvaluateAnimation(); // Function Engine.AnimInstance.BlueprintPostEvaluateAnimation // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void BlueprintInitializeAnimation(); // Function Engine.AnimInstance.BlueprintInitializeAnimation // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void AnimNotify_Sound(struct UAnimNotify* Notify); // Function Engine.AnimInstance.AnimNotify_Sound // Final|Native|Public // @ game+0x2ee4a10
};

// Class Engine.AnimNotify
// Size: 0x38 (Inherited: 0x28)
struct UAnimNotify : UObject {
	bool PlayedWithSequencer; // 0x28(0x01)
	char UnknownData_29[0xf]; // 0x29(0x0f)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function Engine.AnimNotify.Received_Notify // Event|Public|BlueprintEvent|Const // @ game+0x188c2f0
	struct FString GetNotifyName(); // Function Engine.AnimNotify.GetNotifyName // Native|Event|Public|BlueprintEvent|Const // @ game+0x2eeb270
};

// Class Engine.AnimNotifyState
// Size: 0x30 (Inherited: 0x28)
struct UAnimNotifyState : UObject {
	bool PlayedWithSequencer; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)

	bool Received_NotifyTick(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float FrameDeltaTime); // Function Engine.AnimNotifyState.Received_NotifyTick // Event|Public|BlueprintEvent|Const // @ game+0x188c2f0
	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function Engine.AnimNotifyState.Received_NotifyEnd // Event|Public|BlueprintEvent|Const // @ game+0x188c2f0
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function Engine.AnimNotifyState.Received_NotifyBegin // Event|Public|BlueprintEvent|Const // @ game+0x188c2f0
	struct FString GetNotifyName(); // Function Engine.AnimNotifyState.GetNotifyName // Native|Event|Public|BlueprintEvent|Const // @ game+0x2eeb310
};

// Class Engine.AnimNotifyState_TimedParticleEffect
// Size: 0x60 (Inherited: 0x30)
struct UAnimNotifyState_TimedParticleEffect : UAnimNotifyState {
	struct UParticleSystem* PSTemplate; // 0x30(0x08)
	struct FName SocketName; // 0x38(0x08)
	struct FVector LocationOffset; // 0x40(0x0c)
	struct FRotator RotationOffset; // 0x4c(0x0c)
	bool bOwnerOnlySee; // 0x58(0x01)
	bool bOwnerNoSee; // 0x59(0x01)
	bool bDestroyAtEnd; // 0x5a(0x01)
	bool bWorldOwnedEffect; // 0x5b(0x01)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.CameraComponent
// Size: 0x850 (Inherited: 0x2e0)
struct UCameraComponent : USceneComponent {
	float FieldOfView; // 0x2e0(0x04)
	float OrthoWidth; // 0x2e4(0x04)
	float OrthoNearClipPlane; // 0x2e8(0x04)
	float OrthoFarClipPlane; // 0x2ec(0x04)
	float AspectRatio; // 0x2f0(0x04)
	char bConstrainAspectRatio : 1; // 0x2f4(0x01)
	char bUseFieldOfViewForLOD : 1; // 0x2f4(0x01)
	char bUsePawnControlRotation : 1; // 0x2f4(0x01)
	char UnknownData_2F4_3 : 5; // 0x2f4(0x01)
	char UnknownData_2F5[0x3]; // 0x2f5(0x03)
	char ProjectionMode; // 0x2f8(0x01)
	char UnknownData_2F9[0x3]; // 0x2f9(0x03)
	float PostProcessBlendWeight; // 0x2fc(0x04)
	struct FPostProcessSettings PostProcessSettings; // 0x300(0x540)
	char bUseControllerViewRotation : 1; // 0x840(0x01)
	char UnknownData_840_1 : 7; // 0x840(0x01)
	char UnknownData_841[0xf]; // 0x841(0x0f)

	struct FVector ProjectWorldLocation(struct FVector WorldLocation, struct FIntPoint ViewDimensions); // Function Engine.CameraComponent.ProjectWorldLocation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2eef990
	void GetCameraView(float DeltaTime, struct FMinimalViewInfo DesiredView); // Function Engine.CameraComponent.GetCameraView // Native|Public|HasOutParms|BlueprintCallable // @ game+0x2ee9740
	void AddOrUpdateBlendable(TScriptInterface<struct UBlendableInterface> InBlendableObject, float InWeight); // Function Engine.CameraComponent.AddOrUpdateBlendable // Final|Native|Public|BlueprintCallable // @ game+0x2ee4510
};

// Class Engine.MovementComponent
// Size: 0x110 (Inherited: 0xc8)
struct UMovementComponent : UActorComponent {
	struct USceneComponent* UpdatedComponent; // 0xc8(0x08)
	struct UPrimitiveComponent* UpdatedPrimitive; // 0xd0(0x08)
	char UnknownData_D8[0x4]; // 0xd8(0x04)
	struct FVector Velocity; // 0xdc(0x0c)
	char bConstrainToPlane : 1; // 0xe8(0x01)
	char bSnapToPlaneAtStart : 1; // 0xe8(0x01)
	char UnknownData_E8_2 : 6; // 0xe8(0x01)
	char UnknownData_E9[0x3]; // 0xe9(0x03)
	char PlaneConstraintAxisSetting; // 0xec(0x01)
	char UnknownData_ED[0x3]; // 0xed(0x03)
	struct FVector PlaneConstraintNormal; // 0xf0(0x0c)
	struct FVector PlaneConstraintOrigin; // 0xfc(0x0c)
	char bUpdateOnlyIfRendered : 1; // 0x108(0x01)
	char bAutoUpdateTickRegistration : 1; // 0x108(0x01)
	char bAutoRegisterUpdatedComponent : 1; // 0x108(0x01)
	char UnknownData_108_3 : 5; // 0x108(0x01)
	char UnknownData_109[0x7]; // 0x109(0x07)

	void StopMovementImmediately(); // Function Engine.MovementComponent.StopMovementImmediately // Native|Public|BlueprintCallable // @ game+0x2deb800
	void SnapUpdatedComponentToPlane(); // Function Engine.MovementComponent.SnapUpdatedComponentToPlane // Native|Public|BlueprintCallable // @ game+0x2deb5a0
	void SetUpdatedComponent(struct USceneComponent* NewUpdatedComponent); // Function Engine.MovementComponent.SetUpdatedComponent // Native|Public|BlueprintCallable // @ game+0x2deae20
	void SetPlaneConstraintOrigin(struct FVector PlaneOrigin); // Function Engine.MovementComponent.SetPlaneConstraintOrigin // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2de9e30
	void SetPlaneConstraintNormal(struct FVector PlaneNormal); // Function Engine.MovementComponent.SetPlaneConstraintNormal // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2de9da0
	void SetPlaneConstraintFromVectors(struct FVector Forward, struct FVector Up); // Function Engine.MovementComponent.SetPlaneConstraintFromVectors // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2de9cc0
	void SetPlaneConstraintEnabled(bool bEnabled); // Function Engine.MovementComponent.SetPlaneConstraintEnabled // Native|Public|BlueprintCallable // @ game+0x2de9c30
	void SetPlaneConstraintAxisSetting(char NewAxisSetting); // Function Engine.MovementComponent.SetPlaneConstraintAxisSetting // Native|Public|BlueprintCallable // @ game+0x2de9bb0
	void PhysicsVolumeChanged(struct APhysicsVolume* NewVolume); // Function Engine.MovementComponent.PhysicsVolumeChanged // Native|Public // @ game+0x2de36b0
	bool K2_MoveUpdatedComponent(struct FVector Delta, struct FRotator NewRotation, struct FHitResult OutHit, bool bSweep, bool bTeleport); // Function Engine.MovementComponent.K2_MoveUpdatedComponent // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2de2540
	float K2_GetModifiedMaxSpeed(); // Function Engine.MovementComponent.K2_GetModifiedMaxSpeed // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de2270
	float K2_GetMaxSpeedModifier(); // Function Engine.MovementComponent.K2_GetMaxSpeedModifier // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de2230
	bool IsExceedingMaxSpeed(float MaxSpeed); // Function Engine.MovementComponent.IsExceedingMaxSpeed // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de1bb0
	struct FVector GetPlaneConstraintOrigin(); // Function Engine.MovementComponent.GetPlaneConstraintOrigin // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddef20
	struct FVector GetPlaneConstraintNormal(); // Function Engine.MovementComponent.GetPlaneConstraintNormal // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddeee0
	char GetPlaneConstraintAxisSetting(); // Function Engine.MovementComponent.GetPlaneConstraintAxisSetting // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddeec0
	struct APhysicsVolume* GetPhysicsVolume(); // Function Engine.MovementComponent.GetPhysicsVolume // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddee90
	float GetMaxSpeed(); // Function Engine.MovementComponent.GetMaxSpeed // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddde30
	float GetGravityZ(); // Function Engine.MovementComponent.GetGravityZ // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddd3a0
	struct FVector ConstrainNormalToPlane(struct FVector Normal); // Function Engine.MovementComponent.ConstrainNormalToPlane // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2dd9fd0
	struct FVector ConstrainLocationToPlane(struct FVector Location); // Function Engine.MovementComponent.ConstrainLocationToPlane // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2dd9f20
	struct FVector ConstrainDirectionToPlane(struct FVector Direction); // Function Engine.MovementComponent.ConstrainDirectionToPlane // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2dd9e70
};

// Class Engine.NavMovementComponent
// Size: 0x158 (Inherited: 0x110)
struct UNavMovementComponent : UMovementComponent {
	struct FNavAgentProperties NavAgentProps; // 0x110(0x30)
	char bUpdateNavAgentWithOwnersCollision : 1; // 0x140(0x01)
	char UnknownData_140_1 : 7; // 0x140(0x01)
	char UnknownData_141[0x3]; // 0x141(0x03)
	struct FMovementProperties MovementState; // 0x144(0x04)
	char UnknownData_148[0x8]; // 0x148(0x08)
	bool UseDefaultNavWalkingSearchRadiusScale; // 0x150(0x01)
	bool UseDefaultNavWalkingSearchHeightScale; // 0x151(0x01)
	char UnknownData_152[0x6]; // 0x152(0x06)

	void StopMovementKeepPathing(); // Function Engine.NavMovementComponent.StopMovementKeepPathing // Final|Native|Public|BlueprintCallable // @ game+0x2deb820
	void StopActiveMovement(); // Function Engine.NavMovementComponent.StopActiveMovement // Native|Public|BlueprintCallable // @ game+0x2deb730
	bool IsSwimming(); // Function Engine.NavMovementComponent.IsSwimming // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de2110
	bool IsMovingOnGround(); // Function Engine.NavMovementComponent.IsMovingOnGround // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de1dc0
	bool IsFlying(); // Function Engine.NavMovementComponent.IsFlying // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de1c70
	bool IsFalling(); // Function Engine.NavMovementComponent.IsFalling // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de1c40
	bool IsCrouching(); // Function Engine.NavMovementComponent.IsCrouching // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de1b80
	struct FVector GetActorFeetLocation(); // Function Engine.NavMovementComponent.GetActorFeetLocation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddc380
};

// Class Engine.PawnMovementComponent
// Size: 0x160 (Inherited: 0x158)
struct UPawnMovementComponent : UNavMovementComponent {
	struct APawn* PawnOwner; // 0x158(0x08)

	struct FVector K2_GetInputVector(); // Function Engine.PawnMovementComponent.K2_GetInputVector // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2de21f0
	bool IsMoveInputIgnored(); // Function Engine.PawnMovementComponent.IsMoveInputIgnored // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de1d90
	struct FVector GetPendingInputVector(); // Function Engine.PawnMovementComponent.GetPendingInputVector // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddebb0
	struct APawn* GetPawnOwner(); // Function Engine.PawnMovementComponent.GetPawnOwner // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddeb80
	struct FVector GetLastInputVector(); // Function Engine.PawnMovementComponent.GetLastInputVector // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddd520
	struct FVector ConsumeInputVector(); // Function Engine.PawnMovementComponent.ConsumeInputVector // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2dda080
	void AddInputVector(struct FVector WorldVector, bool bForce); // Function Engine.PawnMovementComponent.AddInputVector // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2dd8e00
};

// Class Engine.CharacterMovementComponent
// Size: 0x590 (Inherited: 0x160)
struct UCharacterMovementComponent : UPawnMovementComponent {
	char UnknownData_160[0x18]; // 0x160(0x18)
	struct ACharacter* CharacterOwner; // 0x178(0x08)
	float GravityScale; // 0x180(0x04)
	float MaxStepHeight; // 0x184(0x04)
	float JumpZVelocity; // 0x188(0x04)
	float JumpOffJumpZFactor; // 0x18c(0x04)
	float WalkableFloorAngle; // 0x190(0x04)
	float WalkableFloorZ; // 0x194(0x04)
	char MovementMode; // 0x198(0x01)
	char CustomMovementMode; // 0x199(0x01)
	char UnknownData_19A[0x26]; // 0x19a(0x26)
	float GroundFriction; // 0x1c0(0x04)
	float MaxWalkSpeed; // 0x1c4(0x04)
	float MaxWalkSpeedBackwards; // 0x1c8(0x04)
	float WalkBackwardsMinAngle; // 0x1cc(0x04)
	float WalkBackwardsMaxAngle; // 0x1d0(0x04)
	float MaxWalkSpeedCrouched; // 0x1d4(0x04)
	float MaxSwimSpeed; // 0x1d8(0x04)
	float MaxFlySpeed; // 0x1dc(0x04)
	float MaxCustomMovementSpeed; // 0x1e0(0x04)
	float MaxAcceleration; // 0x1e4(0x04)
	float MaxChargeAcceleration; // 0x1e8(0x04)
	float BrakingFrictionFactor; // 0x1ec(0x04)
	float BrakingFriction; // 0x1f0(0x04)
	char bUseSeparateBrakingFriction : 1; // 0x1f4(0x01)
	char UnknownData_1F4_1 : 7; // 0x1f4(0x01)
	char UnknownData_1F5[0x3]; // 0x1f5(0x03)
	float BrakingDecelerationWalking; // 0x1f8(0x04)
	float BrakingDecelerationFalling; // 0x1fc(0x04)
	float BrakingDecelerationSwimming; // 0x200(0x04)
	float BrakingDecelerationFlying; // 0x204(0x04)
	float AirControl; // 0x208(0x04)
	float AirControlBoostMultiplier; // 0x20c(0x04)
	float AirControlBoostVelocityThreshold; // 0x210(0x04)
	float FallingLateralFriction; // 0x214(0x04)
	float CrouchedHalfHeight; // 0x218(0x04)
	float Buoyancy; // 0x21c(0x04)
	float PerchRadiusThreshold; // 0x220(0x04)
	float PerchAdditionalHeight; // 0x224(0x04)
	struct FRotator RotationRate; // 0x228(0x0c)
	char bUseControllerDesiredRotation : 1; // 0x234(0x01)
	char bOrientRotationToMovement : 1; // 0x234(0x01)
	char bMovementInProgress : 1; // 0x234(0x01)
	char bEnableScopedMovementUpdates : 1; // 0x234(0x01)
	char bForceMaxAccel : 1; // 0x234(0x01)
	char bRunPhysicsWithNoController : 1; // 0x234(0x01)
	char bForceNextFloorCheck : 1; // 0x234(0x01)
	char bShrinkProxyCapsule : 1; // 0x234(0x01)
	char bCanWalkOffLedges : 1; // 0x235(0x01)
	char bCanWalkOffLedgesWhenCrouching : 1; // 0x235(0x01)
	char bDeferUpdateMoveComponent : 1; // 0x235(0x01)
	char UnknownData_235_3 : 5; // 0x235(0x01)
	char UnknownData_236[0x2]; // 0x236(0x02)
	struct USceneComponent* DeferredUpdatedMoveComponent; // 0x238(0x08)
	float MaxOutOfWaterStepHeight; // 0x240(0x04)
	float OutofWaterZ; // 0x244(0x04)
	float Mass; // 0x248(0x04)
	bool bEnablePhysicsInteraction; // 0x24c(0x01)
	bool bTouchForceScaledToMass; // 0x24d(0x01)
	bool bPushForceScaledToMass; // 0x24e(0x01)
	bool bScalePushForceToVelocity; // 0x24f(0x01)
	float StandingDownwardForceScale; // 0x250(0x04)
	float InitialPushForceFactor; // 0x254(0x04)
	float PushForceFactor; // 0x258(0x04)
	float PushForcePointZOffsetFactor; // 0x25c(0x04)
	float TouchForceFactor; // 0x260(0x04)
	float MinTouchForce; // 0x264(0x04)
	float MaxTouchForce; // 0x268(0x04)
	float RepulsionForce; // 0x26c(0x04)
	float NetMoveDelta; // 0x270(0x04)
	char bForceBraking : 1; // 0x274(0x01)
	char UnknownData_274_1 : 7; // 0x274(0x01)
	char UnknownData_275[0x3]; // 0x275(0x03)
	float CrouchedSpeedMultiplier; // 0x278(0x04)
	float UpperImpactNormalScale; // 0x27c(0x04)
	struct FVector Acceleration; // 0x280(0x0c)
	struct FVector LastUpdateLocation; // 0x28c(0x0c)
	struct FVector PendingImpulseToApply; // 0x298(0x0c)
	struct FVector PendingForceToApply; // 0x2a4(0x0c)
	float AnalogInputModifier; // 0x2b0(0x04)
	char UnknownData_2B4[0x34]; // 0x2b4(0x34)
	float MaxSimulationTimeStep; // 0x2e8(0x04)
	int32_t MaxSimulationIterations; // 0x2ec(0x04)
	float MaxSmoothNetUpdateDist; // 0x2f0(0x04)
	float NoSmoothNetUpdateDist; // 0x2f4(0x04)
	float NetworkSimulatedSmoothLocationTime; // 0x2f8(0x04)
	float NetworkSimulatedSmoothRotationTime; // 0x2fc(0x04)
	float LedgeCheckThreshold; // 0x300(0x04)
	float JumpOutOfWaterPitch; // 0x304(0x04)
	struct FFindFloorResult CurrentFloor; // 0x308(0x8c)
	char DefaultLandMovementMode; // 0x394(0x01)
	char DefaultWaterMovementMode; // 0x395(0x01)
	char GroundMovementMode; // 0x396(0x01)
	char UnknownData_397[0x1]; // 0x397(0x01)
	char bMaintainHorizontalGroundVelocity : 1; // 0x398(0x01)
	char bImpartBaseVelocityX : 1; // 0x398(0x01)
	char bImpartBaseVelocityY : 1; // 0x398(0x01)
	char bImpartBaseVelocityZ : 1; // 0x398(0x01)
	char bImpartBaseAngularVelocity : 1; // 0x398(0x01)
	char bJustTeleported : 1; // 0x398(0x01)
	char bNetworkUpdateReceived : 1; // 0x398(0x01)
	char bBasedMovementUpdateReceived : 1; // 0x398(0x01)
	char bMovementUpdateReceived : 1; // 0x399(0x01)
	char bNetworkMovementModeChanged : 1; // 0x399(0x01)
	char bNotifyApex : 1; // 0x399(0x01)
	char bCheatFlying : 1; // 0x399(0x01)
	char bWantsToCrouch : 1; // 0x399(0x01)
	char bCrouchMaintainsBaseLocation : 1; // 0x399(0x01)
	char bIgnoreBaseRotation : 1; // 0x399(0x01)
	char bFastAttachedMove : 1; // 0x399(0x01)
	char bAlwaysCheckFloor : 1; // 0x39a(0x01)
	char bUseFlatBaseForFloorChecks : 1; // 0x39a(0x01)
	char bPerformingJumpOff : 1; // 0x39a(0x01)
	char bWantsToLeaveNavWalking : 1; // 0x39a(0x01)
	char bUseRVOAvoidance : 1; // 0x39a(0x01)
	char bRequestedMoveUseAcceleration : 1; // 0x39a(0x01)
	char bPreventSimulatedFloorChecks : 1; // 0x39a(0x01)
	char bPreventNavMeshFalling : 1; // 0x39a(0x01)
	char bHasRequestedVelocity : 1; // 0x39b(0x01)
	char bRequestedMoveWithMaxSpeed : 1; // 0x39b(0x01)
	char bWasAvoidanceUpdated : 1; // 0x39b(0x01)
	char UnknownData_39B_3 : 2; // 0x39b(0x01)
	char bProjectNavMeshWalking : 1; // 0x39b(0x01)
	char UnknownData_39B_6 : 2; // 0x39b(0x01)
	char UnknownData_39C[0x14]; // 0x39c(0x14)
	float SmoothingClientPositionTolerance; // 0x3b0(0x04)
	float AvoidanceConsiderationRadius; // 0x3b4(0x04)
	struct FVector RequestedVelocity; // 0x3b8(0x0c)
	int32_t AvoidanceUID; // 0x3c4(0x04)
	struct FNavAvoidanceMask AvoidanceGroup; // 0x3c8(0x04)
	struct FNavAvoidanceMask GroupsToAvoid; // 0x3cc(0x04)
	struct FNavAvoidanceMask GroupsToIgnore; // 0x3d0(0x04)
	float AvoidanceWeight; // 0x3d4(0x04)
	struct FVector PendingLaunchVelocity; // 0x3d8(0x0c)
	char UnknownData_3E4[0x9c]; // 0x3e4(0x9c)
	float NavMeshProjectionInterval; // 0x480(0x04)
	float NavMeshProjectionTimer; // 0x484(0x04)
	bool bUseNavMeshProjectionTimeModifier; // 0x488(0x01)
	char UnknownData_489[0x3]; // 0x489(0x03)
	float MaxNavMeshProjectionInterval; // 0x48c(0x04)
	char UnknownData_490[0x4]; // 0x490(0x04)
	float NavMeshProjectionInterpSpeed; // 0x494(0x04)
	bool bUsePlaneBasedNavMeshProjectionInterpSystem; // 0x498(0x01)
	char UnknownData_499[0x3]; // 0x499(0x03)
	float MaxAllowedZOffsetFromCurrentPlane; // 0x49c(0x04)
	float MaxZDiffFromPrevPlane; // 0x4a0(0x04)
	char UnknownData_4A4[0x1c]; // 0x4a4(0x1c)
	float NavMeshProjectionHeightScaleUp; // 0x4c0(0x04)
	float NavMeshProjectionHeightScaleDown; // 0x4c4(0x04)
	bool UseControllerRotationInNavWalkingMoveComponent; // 0x4c8(0x01)
	char UnknownData_4C9[0x7]; // 0x4c9(0x07)
	struct FCharacterMovementComponentPreClothTickFunction PreClothComponentTick; // 0x4d0(0x50)
	char UnknownData_520[0x14]; // 0x520(0x14)
	float MinTimeBetweenTimeStampResets; // 0x534(0x04)
	char UnknownData_538[0x8]; // 0x538(0x08)
	struct FRootMotionMovementParams RootMotionParams; // 0x540(0x40)
	bool bWasSimulatingRootMotion; // 0x580(0x01)
	char UnknownData_581[0xf]; // 0x581(0x0f)

	void UpdateMaxNavMeshProjectionIntervalAndModifier(float DesiredMaxNavMeshProjectionInterval); // Function Engine.CharacterMovementComponent.UpdateMaxNavMeshProjectionIntervalAndModifier // Final|Native|Public|BlueprintCallable // @ game+0x2ef9d60
	void SetWalkableFloorZ(float InWalkableFloorZ); // Function Engine.CharacterMovementComponent.SetWalkableFloorZ // Final|Native|Public|BlueprintCallable // @ game+0x2ef7930
	void SetWalkableFloorAngle(float InWalkableFloorAngle); // Function Engine.CharacterMovementComponent.SetWalkableFloorAngle // Final|Native|Public|BlueprintCallable // @ game+0x2ef78b0
	void SetNavMeshProjectionInterval(float InNavMeshProjectionInterval); // Function Engine.CharacterMovementComponent.SetNavMeshProjectionInterval // Final|Native|Public|BlueprintCallable // @ game+0x2ef52b0
	void SetMovementMode(char NewMovementMode, char NewCustomMode); // Function Engine.CharacterMovementComponent.SetMovementMode // Native|Public|BlueprintCallable // @ game+0x2ef5090
	void SetGroupsToIgnore(int32_t GroupFlags); // Function Engine.CharacterMovementComponent.SetGroupsToIgnore // Final|Native|Public|BlueprintCallable // @ game+0x2ef4450
	void SetGroupsToAvoid(int32_t GroupFlags); // Function Engine.CharacterMovementComponent.SetGroupsToAvoid // Final|Native|Public|BlueprintCallable // @ game+0x2ef43d0
	void SetAvoidanceGroup(int32_t GroupFlags); // Function Engine.CharacterMovementComponent.SetAvoidanceGroup // Final|Native|Public|BlueprintCallable // @ game+0x2ef1560
	void SetAvoidanceEnabled(bool bEnable); // Function Engine.CharacterMovementComponent.SetAvoidanceEnabled // Final|Native|Public|BlueprintCallable // @ game+0x2ef14d0
	void ServerMoveOld(float OldTimeStamp, struct FVector_NetQuantize10 OldAccel, struct UPrimitiveComponent* ClientMovementBase, struct FName ClientBaseBoneName, char OldMoveFlags); // Function Engine.CharacterMovementComponent.ServerMoveOld // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x2ef0dc0
	void ServerMoveDualHybridRootMotion(float TimeStamp0, struct FVector_NetQuantize10 InAccel0, char PendingFlags, uint32_t View0, float TimeStamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, char NewFlags, char ClientRoll, uint32_t View, struct UPrimitiveComponent* ClientMovementBase, struct FName ClientBaseBoneName, char ClientMovementMode); // Function Engine.CharacterMovementComponent.ServerMoveDualHybridRootMotion // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x2ef0960
	void ServerMoveDual(float TimeStamp0, struct FVector_NetQuantize10 InAccel0, char PendingFlags, uint32_t View0, float TimeStamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, char NewFlags, char ClientRoll, uint32_t View, struct UPrimitiveComponent* ClientMovementBase, struct FName ClientBaseBoneName, char ClientMovementMode); // Function Engine.CharacterMovementComponent.ServerMoveDual // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x2ef0500
	void ServerMove(float TimeStamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, char CompressedMoveFlags, char ClientRoll, uint32_t View, struct UPrimitiveComponent* ClientMovementBase, struct FName ClientBaseBoneName, char ClientMovementMode); // Function Engine.CharacterMovementComponent.ServerMove // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x2ef01e0
	float K2_GetWalkableFloorZ(); // Function Engine.CharacterMovementComponent.K2_GetWalkableFloorZ // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eed5a0
	float K2_GetWalkableFloorAngle(); // Function Engine.CharacterMovementComponent.K2_GetWalkableFloorAngle // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eed570
	float K2_GetModifiedMaxAcceleration(); // Function Engine.CharacterMovementComponent.K2_GetModifiedMaxAcceleration // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eed530
	bool IsWalking(); // Function Engine.CharacterMovementComponent.IsWalking // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eed500
	bool IsWalkable(struct FHitResult Hit); // Function Engine.CharacterMovementComponent.IsWalkable // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2eed430
	float GetValidPerchRadius(); // Function Engine.CharacterMovementComponent.GetValidPerchRadius // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eeca70
	float GetPerchRadiusThreshold(); // Function Engine.CharacterMovementComponent.GetPerchRadiusThreshold // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eeb610
	float GetNavMeshProjectionInterval(); // Function Engine.CharacterMovementComponent.GetNavMeshProjectionInterval // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eeb1e0
	struct UPrimitiveComponent* GetMovementBase(); // Function Engine.CharacterMovementComponent.GetMovementBase // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eeb1b0
	float GetMaxJumpHeight(); // Function Engine.CharacterMovementComponent.GetMaxJumpHeight // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eeb0b0
	float GetMaxAcceleration(); // Function Engine.CharacterMovementComponent.GetMaxAcceleration // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eeafb0
	struct FVector GetImpartedMovementBaseVelocity(); // Function Engine.CharacterMovementComponent.GetImpartedMovementBaseVelocity // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2eea220
	struct FVector GetCurrentAcceleration(); // Function Engine.CharacterMovementComponent.GetCurrentAcceleration // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ee98f0
	struct ACharacter* GetCharacterOwner(); // Function Engine.CharacterMovementComponent.GetCharacterOwner // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ee98d0
	float GetAnalogInputModifier(); // Function Engine.CharacterMovementComponent.GetAnalogInputModifier // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ee8b20
	void DisableMovement(); // Function Engine.CharacterMovementComponent.DisableMovement // Native|Public|BlueprintCallable // @ game+0x2ee7db0
	void ClientVeryShortAdjustPosition(float TimeStamp, struct FVector NewLoc, struct UPrimitiveComponent* NewBase, struct FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode); // Function Engine.CharacterMovementComponent.ClientVeryShortAdjustPosition // Net|Native|Event|Public|HasDefaults|NetClient // @ game+0x2ee74a0
	void ClientAdjustRootMotionPosition(float TimeStamp, float ServerMontageTrackPosition, struct FVector ServerLoc, struct FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, struct UPrimitiveComponent* ServerBase, struct FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode); // Function Engine.CharacterMovementComponent.ClientAdjustRootMotionPosition // Net|Native|Event|Public|HasDefaults|NetClient // @ game+0x2ee71b0
	void ClientAdjustPosition(float TimeStamp, struct FVector NewLoc, struct FVector NewVel, struct UPrimitiveComponent* NewBase, struct FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode); // Function Engine.CharacterMovementComponent.ClientAdjustPosition // Net|Native|Event|Public|HasDefaults|NetClient // @ game+0x2ee6f40
	void ClientAckGoodMove(float TimeStamp); // Function Engine.CharacterMovementComponent.ClientAckGoodMove // Net|Native|Event|Public|NetClient // @ game+0x2ee6ec0
	void CapsuleTouched(struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Engine.CharacterMovementComponent.CapsuleTouched // Native|Protected|HasOutParms // @ game+0x2ee6c30
	void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration); // Function Engine.CharacterMovementComponent.CalcVelocity // Native|Public|BlueprintCallable // @ game+0x2ee69d0
	void AddImpulse(struct FVector Impulse, bool bVelocityChange); // Function Engine.CharacterMovementComponent.AddImpulse // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ee4050
	void AddForce(struct FVector Force); // Function Engine.CharacterMovementComponent.AddForce // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ee3fc0
};

// Class Engine.Engine
// Size: 0x9d0 (Inherited: 0x28)
struct UEngine : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct UFont* TinyFont; // 0x30(0x08)
	struct FStringAssetReference TinyFontName; // 0x38(0x10)
	struct UFont* SmallFont; // 0x48(0x08)
	struct FStringAssetReference SmallFontName; // 0x50(0x10)
	struct UFont* MediumFont; // 0x60(0x08)
	struct FStringAssetReference MediumFontName; // 0x68(0x10)
	struct UFont* LargeFont; // 0x78(0x08)
	struct FStringAssetReference LargeFontName; // 0x80(0x10)
	struct UFont* MonoFont; // 0x90(0x08)
	struct FStringAssetReference MonoFontName; // 0x98(0x10)
	struct UFont* SubtitleFont; // 0xa8(0x08)
	struct FStringAssetReference SubtitleFontName; // 0xb0(0x10)
	struct UFont* HugeFont; // 0xc0(0x08)
	struct FStringAssetReference HugeFontName; // 0xc8(0x10)
	struct TArray<struct UFont*> AdditionalFonts; // 0xd8(0x10)
	char UnknownData_E8[0x8]; // 0xe8(0x08)
	struct TArray<struct FString> AdditionalFontNames; // 0xf0(0x10)
	struct UClass* ConsoleClass; // 0x100(0x08)
	struct FStringClassReference ConsoleClassName; // 0x108(0x10)
	struct UClass* GameViewportClientClass; // 0x118(0x08)
	struct FStringClassReference GameViewportClientClassName; // 0x120(0x10)
	struct UClass* LocalPlayerClass; // 0x130(0x08)
	struct FStringClassReference LocalPlayerClassName; // 0x138(0x10)
	struct UClass* WorldSettingsClass; // 0x148(0x08)
	struct FStringClassReference WorldSettingsClassName; // 0x150(0x10)
	struct FStringClassReference NavigationSystemClassName; // 0x160(0x10)
	struct UClass* NavigationSystemClass; // 0x170(0x08)
	struct FStringClassReference AvoidanceManagerClassName; // 0x178(0x10)
	struct UClass* AvoidanceManagerClass; // 0x188(0x08)
	struct UClass* PhysicsCollisionHandlerClass; // 0x190(0x08)
	struct FStringClassReference PhysicsCollisionHandlerClassName; // 0x198(0x10)
	struct FStringClassReference GameUserSettingsClassName; // 0x1a8(0x10)
	struct UClass* GameUserSettingsClass; // 0x1b8(0x08)
	struct FStringClassReference AIControllerClassName; // 0x1c0(0x10)
	struct UGameUserSettings* GameUserSettings; // 0x1d0(0x08)
	struct UClass* LevelScriptActorClass; // 0x1d8(0x08)
	struct FStringClassReference LevelScriptActorClassName; // 0x1e0(0x10)
	struct FStringClassReference DefaultBlueprintBaseClassName; // 0x1f0(0x10)
	struct FStringClassReference GameSingletonClassName; // 0x200(0x10)
	struct UObject* GameSingleton; // 0x210(0x08)
	struct UClass* DefaultPreviewPawnClass; // 0x218(0x08)
	struct FStringClassReference DefaultPreviewPawnClassName; // 0x220(0x10)
	struct FString PlayOnConsoleSaveDir; // 0x230(0x10)
	struct UTexture2D* DefaultTexture; // 0x240(0x08)
	struct FStringAssetReference DefaultTextureName; // 0x248(0x10)
	struct UTexture* DefaultDiffuseTexture; // 0x258(0x08)
	struct FStringAssetReference DefaultDiffuseTextureName; // 0x260(0x10)
	struct UTexture2D* DefaultBSPVertexTexture; // 0x270(0x08)
	struct FStringAssetReference DefaultBSPVertexTextureName; // 0x278(0x10)
	struct UTexture2D* HighFrequencyNoiseTexture; // 0x288(0x08)
	struct FStringAssetReference HighFrequencyNoiseTextureName; // 0x290(0x10)
	struct UTexture2D* DefaultBokehTexture; // 0x2a0(0x08)
	struct FStringAssetReference DefaultBokehTextureName; // 0x2a8(0x10)
	struct UTexture2D* HDRCalibrationTexture; // 0x2b8(0x08)
	struct FStringAssetReference HDRCalibrationTextureName; // 0x2c0(0x10)
	struct UMaterial* WireframeMaterial; // 0x2d0(0x08)
	struct FString WireframeMaterialName; // 0x2d8(0x10)
	struct UMaterial* DebugMeshMaterial; // 0x2e8(0x08)
	struct FStringAssetReference DebugMeshMaterialName; // 0x2f0(0x10)
	struct UMaterial* LevelColorationLitMaterial; // 0x300(0x08)
	struct FString LevelColorationLitMaterialName; // 0x308(0x10)
	struct UMaterial* LevelColorationUnlitMaterial; // 0x318(0x08)
	struct FString LevelColorationUnlitMaterialName; // 0x320(0x10)
	struct UMaterial* TriangleDensityScreenSpaceMaterial; // 0x330(0x08)
	struct FString TriangleDensityScreenSpaceMaterialName; // 0x338(0x10)
	struct UMaterial* TriangleDensityWorldSpaceMaterial; // 0x348(0x08)
	struct FString TriangleDensityWorldSpaceMaterialName; // 0x350(0x10)
	struct UMaterial* LightingTexelDensityMaterial; // 0x360(0x08)
	struct FString LightingTexelDensityName; // 0x368(0x10)
	struct UMaterial* ShadedLevelColorationLitMaterial; // 0x378(0x08)
	struct FString ShadedLevelColorationLitMaterialName; // 0x380(0x10)
	struct UMaterial* ShadedLevelColorationUnlitMaterial; // 0x390(0x08)
	struct FString ShadedLevelColorationUnlitMaterialName; // 0x398(0x10)
	struct UMaterial* RemoveSurfaceMaterial; // 0x3a8(0x08)
	struct FStringAssetReference RemoveSurfaceMaterialName; // 0x3b0(0x10)
	struct UMaterial* VertexColorMaterial; // 0x3c0(0x08)
	struct FString VertexColorMaterialName; // 0x3c8(0x10)
	struct UMaterial* VertexColorViewModeMaterial_ColorOnly; // 0x3d8(0x08)
	struct FString VertexColorViewModeMaterialName_ColorOnly; // 0x3e0(0x10)
	struct UMaterial* VertexColorViewModeMaterial_AlphaAsColor; // 0x3f0(0x08)
	struct FString VertexColorViewModeMaterialName_AlphaAsColor; // 0x3f8(0x10)
	struct UMaterial* VertexColorViewModeMaterial_RedOnly; // 0x408(0x08)
	struct FString VertexColorViewModeMaterialName_RedOnly; // 0x410(0x10)
	struct UMaterial* VertexColorViewModeMaterial_GreenOnly; // 0x420(0x08)
	struct FString VertexColorViewModeMaterialName_GreenOnly; // 0x428(0x10)
	struct UMaterial* VertexColorViewModeMaterial_BlueOnly; // 0x438(0x08)
	struct FString VertexColorViewModeMaterialName_BlueOnly; // 0x440(0x10)
	struct UMaterial* ConstraintLimitMaterial; // 0x450(0x08)
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialX; // 0x458(0x08)
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialY; // 0x460(0x08)
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialZ; // 0x468(0x08)
	struct FStringAssetReference ConstraintLimitMaterialName; // 0x470(0x10)
	struct UMaterial* InvalidLightmapSettingsMaterial; // 0x480(0x08)
	struct FStringAssetReference InvalidLightmapSettingsMaterialName; // 0x488(0x10)
	struct UMaterial* PreviewShadowsIndicatorMaterial; // 0x498(0x08)
	struct FStringAssetReference PreviewShadowsIndicatorMaterialName; // 0x4a0(0x10)
	struct UMaterial* ArrowMaterial; // 0x4b0(0x08)
	struct FStringAssetReference ArrowMaterialName; // 0x4b8(0x10)
	struct FLinearColor LightingOnlyBrightness; // 0x4c8(0x10)
	struct TArray<struct FColor> LightComplexityColors; // 0x4d8(0x10)
	struct TArray<struct FLinearColor> ShaderComplexityColors; // 0x4e8(0x10)
	struct TArray<struct FLinearColor> StationaryLightOverlapColors; // 0x4f8(0x10)
	struct TArray<struct FLinearColor> LODColorationColors; // 0x508(0x10)
	float MaxPixelShaderAdditiveComplexityCount; // 0x518(0x04)
	float MaxES2PixelShaderAdditiveComplexityCount; // 0x51c(0x04)
	float MinLightMapDensity; // 0x520(0x04)
	float IdealLightMapDensity; // 0x524(0x04)
	float MaxLightMapDensity; // 0x528(0x04)
	char bRenderLightMapDensityGrayscale : 1; // 0x52c(0x01)
	char UnknownData_52C_1 : 7; // 0x52c(0x01)
	char UnknownData_52D[0x3]; // 0x52d(0x03)
	float RenderLightMapDensityGrayscaleScale; // 0x530(0x04)
	float RenderLightMapDensityColorScale; // 0x534(0x04)
	struct FLinearColor LightMapDensityVertexMappedColor; // 0x538(0x10)
	struct FLinearColor LightMapDensitySelectedColor; // 0x548(0x10)
	struct TArray<struct FStatColorMapping> StatColorMappings; // 0x558(0x10)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x568(0x08)
	struct FStringAssetReference DefaultPhysMaterialName; // 0x570(0x10)
	struct TArray<struct FGameNameRedirect> ActiveGameNameRedirects; // 0x580(0x10)
	struct TArray<struct FClassRedirect> ActiveClassRedirects; // 0x590(0x10)
	struct TArray<struct FPluginRedirect> ActivePluginRedirects; // 0x5a0(0x10)
	struct TArray<struct FStructRedirect> ActiveStructRedirects; // 0x5b0(0x10)
	struct UTexture2D* PreIntegratedSkinBRDFTexture; // 0x5c0(0x08)
	struct FStringAssetReference PreIntegratedSkinBRDFTextureName; // 0x5c8(0x10)
	struct UTexture2D* MiniFontTexture; // 0x5d8(0x08)
	struct FStringAssetReference MiniFontTextureName; // 0x5e0(0x10)
	struct UTexture* WeightMapPlaceholderTexture; // 0x5f0(0x08)
	struct FStringAssetReference WeightMapPlaceholderTextureName; // 0x5f8(0x10)
	struct UTexture2D* LightMapDensityTexture; // 0x608(0x08)
	struct FStringAssetReference LightMapDensityTextureName; // 0x610(0x10)
	char UnknownData_620[0x8]; // 0x620(0x08)
	struct UGameViewportClient* GameViewport; // 0x628(0x08)
	struct TArray<struct FString> DeferredCommands; // 0x630(0x10)
	int32_t TickCycles; // 0x640(0x04)
	int32_t GameCycles; // 0x644(0x04)
	int32_t ClientCycles; // 0x648(0x04)
	float NearClipPlane; // 0x64c(0x04)
	char bHardwareSurveyEnabled : 1; // 0x650(0x01)
	char bSubtitlesEnabled : 1; // 0x650(0x01)
	char bSubtitlesForcedOff : 1; // 0x650(0x01)
	char UnknownData_650_3 : 5; // 0x650(0x01)
	char UnknownData_651[0x3]; // 0x651(0x03)
	int32_t MaximumLoopIterationCount; // 0x654(0x04)
	char bCanBlueprintsTickByDefault : 1; // 0x658(0x01)
	char bOptimizeAnimBlueprintMemberVariableAccess : 1; // 0x658(0x01)
	char bEnableEditorPSysRealtimeLOD : 1; // 0x658(0x01)
	char UnknownData_658_3 : 1; // 0x658(0x01)
	char bSmoothFrameRate : 1; // 0x658(0x01)
	char bUseFixedFrameRate : 1; // 0x658(0x01)
	char UnknownData_658_6 : 2; // 0x658(0x01)
	char UnknownData_659[0x3]; // 0x659(0x03)
	float FixedFrameRate; // 0x65c(0x04)
	struct FFloatRange SmoothedFrameRateRange; // 0x660(0x10)
	struct UEngineCustomTimeStep* CustomTimeStep; // 0x670(0x08)
	char UnknownData_678[0x20]; // 0x678(0x20)
	struct UTimecodeProvider* TimecodeProvider; // 0x698(0x08)
	char UnknownData_6A0[0x19]; // 0x6a0(0x19)
	bool bGenerateDefaultTimecode; // 0x6b9(0x01)
	char UnknownData_6BA[0xa]; // 0x6ba(0x0a)
	float GenerateDefaultTimecodeFrameDelay; // 0x6c4(0x04)
	char bCheckForMultiplePawnsSpawnedInAFrame : 1; // 0x6c8(0x01)
	char UnknownData_6C8_1 : 7; // 0x6c8(0x01)
	char UnknownData_6C9[0x3]; // 0x6c9(0x03)
	int32_t NumPawnsAllowedToBeSpawnedInAFrame; // 0x6cc(0x04)
	char bShouldGenerateLowQualityLightmaps : 1; // 0x6d0(0x01)
	char UnknownData_6D0_1 : 7; // 0x6d0(0x01)
	char UnknownData_6D1[0x3]; // 0x6d1(0x03)
	struct FColor C_WorldBox; // 0x6d4(0x04)
	struct FColor C_BrushWire; // 0x6d8(0x04)
	struct FColor C_AddWire; // 0x6dc(0x04)
	struct FColor C_SubtractWire; // 0x6e0(0x04)
	struct FColor C_SemiSolidWire; // 0x6e4(0x04)
	struct FColor C_NonSolidWire; // 0x6e8(0x04)
	struct FColor C_WireBackground; // 0x6ec(0x04)
	struct FColor C_ScaleBoxHi; // 0x6f0(0x04)
	struct FColor C_VolumeCollision; // 0x6f4(0x04)
	struct FColor C_BSPCollision; // 0x6f8(0x04)
	struct FColor C_OrthoBackground; // 0x6fc(0x04)
	struct FColor C_Volume; // 0x700(0x04)
	struct FColor C_BrushShape; // 0x704(0x04)
	float StreamingDistanceFactor; // 0x708(0x04)
	char TransitionType; // 0x70c(0x01)
	char UnknownData_70D[0x3]; // 0x70d(0x03)
	struct FString TransitionDescription; // 0x710(0x10)
	struct FString TransitionGameMode; // 0x720(0x10)
	float MeshLODRange; // 0x730(0x04)
	char bAllowMatureLanguage : 1; // 0x734(0x01)
	char UnknownData_734_1 : 7; // 0x734(0x01)
	char UnknownData_735[0x3]; // 0x735(0x03)
	float CameraRotationThreshold; // 0x738(0x04)
	float CameraTranslationThreshold; // 0x73c(0x04)
	float PrimitiveProbablyVisibleTime; // 0x740(0x04)
	float MaxOcclusionPixelsFraction; // 0x744(0x04)
	char bPauseOnLossOfFocus : 1; // 0x748(0x01)
	char UnknownData_748_1 : 7; // 0x748(0x01)
	char UnknownData_749[0x3]; // 0x749(0x03)
	int32_t MaxParticleResize; // 0x74c(0x04)
	int32_t MaxParticleResizeWarn; // 0x750(0x04)
	char UnknownData_754[0x4]; // 0x754(0x04)
	struct TArray<struct FDropNoteInfo> PendingDroppedNotes; // 0x758(0x10)
	struct FRigidBodyErrorCorrection PhysicErrorCorrection; // 0x768(0x1c)
	float NetClientTicksPerSecond; // 0x784(0x04)
	char bHasPendingGlobalReregister : 1; // 0x788(0x01)
	char UnknownData_788_1 : 7; // 0x788(0x01)
	char UnknownData_789[0x3]; // 0x789(0x03)
	float DisplayGamma; // 0x78c(0x04)
	float MinDesiredFrameRate; // 0x790(0x04)
	struct FLinearColor DefaultSelectedMaterialColor; // 0x794(0x10)
	struct FLinearColor SelectedMaterialColor; // 0x7a4(0x10)
	struct FLinearColor SelectionOutlineColor; // 0x7b4(0x10)
	struct FLinearColor SubduedSelectionOutlineColor; // 0x7c4(0x10)
	struct FLinearColor SelectedMaterialColorOverride; // 0x7d4(0x10)
	bool bIsOverridingSelectedColor; // 0x7e4(0x01)
	char UnknownData_7E5[0x3]; // 0x7e5(0x03)
	char bEnableOnScreenDebugMessages : 1; // 0x7e8(0x01)
	char bEnableOnScreenDebugMessagesDisplay : 1; // 0x7e8(0x01)
	char bSuppressMapWarnings : 1; // 0x7e8(0x01)
	char bCookSeparateSharedMPGameContent : 1; // 0x7e8(0x01)
	char bDisableAILogging : 1; // 0x7e8(0x01)
	char UnknownData_7E8_5 : 3; // 0x7e8(0x01)
	char UnknownData_7E9[0x3]; // 0x7e9(0x03)
	uint32_t bEnableVisualLogRecordingOnStart; // 0x7ec(0x04)
	char UnknownData_7F0[0x4]; // 0x7f0(0x04)
	int32_t ScreenSaverInhibitorSemaphore; // 0x7f4(0x04)
	char bLockReadOnlyLevels : 1; // 0x7f8(0x01)
	char UnknownData_7F8_1 : 7; // 0x7f8(0x01)
	char UnknownData_7F9[0x7]; // 0x7f9(0x07)
	struct FString ParticleEventManagerClassPath; // 0x800(0x10)
	char UnknownData_810[0x10]; // 0x810(0x10)
	float SelectionHighlightIntensity; // 0x820(0x04)
	float BSPSelectionHighlightIntensity; // 0x824(0x04)
	float HoverHighlightIntensity; // 0x828(0x04)
	float SelectionHighlightIntensityBillboards; // 0x82c(0x04)
	char UnknownData_830[0x130]; // 0x830(0x130)
	struct TArray<struct FNetDriverDefinition> NetDriverDefinitions; // 0x960(0x10)
	struct TArray<struct FString> ServerActors; // 0x970(0x10)
	struct TArray<struct FString> RuntimeServerActors; // 0x980(0x10)
	char bStartedLoadMapMovie : 1; // 0x990(0x01)
	char UnknownData_990_1 : 7; // 0x990(0x01)
	char UnknownData_991[0x17]; // 0x991(0x17)
	int32_t NextWorldContextHandle; // 0x9a8(0x04)
	char UnknownData_9AC[0x24]; // 0x9ac(0x24)
};

// Class Engine.GameEngine
// Size: 0xa30 (Inherited: 0x9d0)
struct UGameEngine : UEngine {
	float MaxDeltaTime; // 0x9d0(0x04)
	float ServerFlushLogInterval; // 0x9d4(0x04)
	char UnknownData_9D8[0x58]; // 0x9d8(0x58)
};

// Class Engine.GameInstance
// Size: 0x88 (Inherited: 0x28)
struct UGameInstance : UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
	struct TArray<struct ULocalPlayer*> LocalPlayers; // 0x38(0x10)
	char UnknownData_48[0x8]; // 0x48(0x08)
	struct UOnlineSession* OnlineSession; // 0x50(0x08)
	char UnknownData_58[0x30]; // 0x58(0x30)

	void ReceiveShutdown(); // Function Engine.GameInstance.ReceiveShutdown // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceiveInit(); // Function Engine.GameInstance.ReceiveInit // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void DebugRemovePlayer(int32_t ControllerId); // Function Engine.GameInstance.DebugRemovePlayer // Exec|Native|Public // @ game+0x2cd8bb0
	void DebugCreatePlayer(int32_t ControllerId); // Function Engine.GameInstance.DebugCreatePlayer // Exec|Native|Public // @ game+0x2cd8b20
};

// Class Engine.Info
// Size: 0x3c8 (Inherited: 0x3c8)
struct AInfo : AActor {
};

// Class Engine.GameMode
// Size: 0x4c0 (Inherited: 0x3c8)
struct AGameMode : AInfo {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	char bDisableAsyncOcclusionChecking : 1; // 0x3d0(0x01)
	char bUseSeamlessTravel : 1; // 0x3d0(0x01)
	char bPauseable : 1; // 0x3d0(0x01)
	char bStartPlayersAsSpectators : 1; // 0x3d0(0x01)
	char bDelayedStart : 1; // 0x3d0(0x01)
	char UnknownData_3D0_5 : 3; // 0x3d0(0x01)
	char UnknownData_3D1[0x7]; // 0x3d1(0x07)
	struct FString OptionsString; // 0x3d8(0x10)
	struct UClass* DefaultPawnClass; // 0x3e8(0x08)
	struct UClass* HUDClass; // 0x3f0(0x08)
	int32_t NumSpectators; // 0x3f8(0x04)
	int32_t NumPlayers; // 0x3fc(0x04)
	int32_t NumBots; // 0x400(0x04)
	float MinRespawnDelay; // 0x404(0x04)
	struct AGameSession* GameSession; // 0x408(0x08)
	int32_t NumTravellingPlayers; // 0x410(0x04)
	char UnknownData_414[0x4]; // 0x414(0x04)
	struct FText DefaultPlayerName; // 0x418(0x38)
	struct UClass* EngineMessageClass; // 0x450(0x08)
	struct UClass* PlayerControllerClass; // 0x458(0x08)
	struct UClass* SpectatorClass; // 0x460(0x08)
	struct UClass* ReplaySpectatorPlayerControllerClass; // 0x468(0x08)
	struct UClass* PlayerStateClass; // 0x470(0x08)
	struct UClass* GameStateClass; // 0x478(0x08)
	struct AGameState* GameState; // 0x480(0x08)
	struct TArray<struct APlayerState*> InactivePlayerArray; // 0x488(0x10)
	char UnknownData_498[0x10]; // 0x498(0x10)
	struct TArray<struct FGameClassShortName> GameModeClassAliases; // 0x4a8(0x10)
	float InactivePlayerStateLifeSpan; // 0x4b8(0x04)
	bool bHandleDedicatedServerReplays; // 0x4bc(0x01)
	char UnknownData_4BD[0x3]; // 0x4bd(0x03)

	void StartPlay(); // Function Engine.GameMode.StartPlay // Native|Public|BlueprintCallable // @ game+0x2deb6d0
	void StartMatch(); // Function Engine.GameMode.StartMatch // Native|Public|BlueprintCallable // @ game+0x2deb6b0
	struct APawn* SpawnDefaultPawnFor(struct AController* NewPlayer, struct AActor* StartSpot); // Function Engine.GameMode.SpawnDefaultPawnFor // Native|Event|Public|BlueprintEvent // @ game+0x2deb5e0
	bool ShouldReset(struct AActor* ActorToReset); // Function Engine.GameMode.ShouldReset // Native|Event|Public|BlueprintEvent // @ game+0x2deb1c0
	void SetBandwidthLimit(float AsyncIOBandwidthLimit); // Function Engine.GameMode.SetBandwidthLimit // Exec|Native|Public // @ game+0x2de58a0
	void ReturnToMainMenuHost(); // Function Engine.GameMode.ReturnToMainMenuHost // Native|Public|BlueprintCallable // @ game+0x2de43d0
	void RestartGame(); // Function Engine.GameMode.RestartGame // Native|Public|BlueprintCallable // @ game+0x2de4330
	void ResetLevel(); // Function Engine.GameMode.ResetLevel // Native|Public|BlueprintCallable // @ game+0x2de42f0
	bool ReadyToStartMatch(); // Function Engine.GameMode.ReadyToStartMatch // Native|Event|Protected|BlueprintEvent // @ game+0x2de3e90
	bool ReadyToEndMatch(); // Function Engine.GameMode.ReadyToEndMatch // Native|Event|Protected|BlueprintEvent // @ game+0x2de3e60
	bool PlayerCanRestart(struct APlayerController* Player); // Function Engine.GameMode.PlayerCanRestart // Native|Event|Public|BlueprintEvent // @ game+0x2de3ac0
	bool MustSpectate(struct APlayerController* NewPlayerController); // Function Engine.GameMode.MustSpectate // Native|Event|Public|BlueprintEvent|Const // @ game+0x2de2be0
	void K2_PostLogin(struct APlayerController* NewPlayer); // Function Engine.GameMode.K2_PostLogin // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void K2_OnSwapPlayerControllers(struct APlayerController* OldPC, struct APlayerController* NewPC); // Function Engine.GameMode.K2_OnSwapPlayerControllers // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void K2_OnSetMatchState(struct FName NewState); // Function Engine.GameMode.K2_OnSetMatchState // Event|Protected|BlueprintEvent // @ game+0x188c2f0
	void K2_OnRestartPlayer(struct AController* NewPlayer); // Function Engine.GameMode.K2_OnRestartPlayer // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void K2_OnLogout(struct AController* ExitingController); // Function Engine.GameMode.K2_OnLogout // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void K2_OnChangeName(struct AController* Other, struct FString NewName, bool bNameChange); // Function Engine.GameMode.K2_OnChangeName // Event|Public|BlueprintEvent // @ game+0x188c2f0
	struct AActor* K2_FindPlayerStart(struct AController* Player); // Function Engine.GameMode.K2_FindPlayerStart // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2de2160
	bool IsMatchInProgress(); // Function Engine.GameMode.IsMatchInProgress // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de1d30
	void InitStartSpot(struct AActor* StartSpot, struct AController* NewPlayer); // Function Engine.GameMode.InitStartSpot // Native|Event|Public|BlueprintEvent // @ game+0x2de1990
	bool HasMatchStarted(); // Function Engine.GameMode.HasMatchStarted // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de1760
	bool HasMatchEnded(); // Function Engine.GameMode.HasMatchEnded // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de1730
	int32_t GetNumPlayers(); // Function Engine.GameMode.GetNumPlayers // Native|Public|BlueprintCallable // @ game+0x2dde1f0
	struct FName GetMatchState(); // Function Engine.GameMode.GetMatchState // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2dddcd0
	struct UClass* GetDefaultPawnClassForController(struct AController* InController); // Function Engine.GameMode.GetDefaultPawnClassForController // Native|Event|Public|BlueprintEvent // @ game+0x2ddcec0
	struct AActor* FindPlayerStart(struct AController* Player, struct FString IncomingName); // Function Engine.GameMode.FindPlayerStart // Native|Event|Public|BlueprintEvent // @ game+0x2ddbfe0
	void EndMatch(); // Function Engine.GameMode.EndMatch // Native|Public|BlueprintCallable // @ game+0x2ddbc00
	struct AActor* ChoosePlayerStart(struct AController* Player); // Function Engine.GameMode.ChoosePlayerStart // Native|Event|Public|BlueprintEvent // @ game+0x2dd9cb0
	void ChangeName(struct AController* Controller, struct FString NewName, bool bNameChange); // Function Engine.GameMode.ChangeName // Native|Public|BlueprintCallable // @ game+0x2dd9b60
	bool CanSpectate(struct APlayerController* Viewer, struct APlayerState* ViewTarget); // Function Engine.GameMode.CanSpectate // Native|Event|Public|BlueprintEvent // @ game+0x2dd9a90
	void AbortMatch(); // Function Engine.GameMode.AbortMatch // Native|Public|BlueprintCallable // @ game+0x2dd7e70
};

// Class Engine.PrimitiveComponent
// Size: 0x5c0 (Inherited: 0x2e0)
struct UPrimitiveComponent : USceneComponent {
	char UnknownData_2E0[0x8]; // 0x2e0(0x08)
	float MinDrawDistance; // 0x2e8(0x04)
	char UnknownData_2EC[0x4]; // 0x2ec(0x04)
	float LDMaxDrawDistance; // 0x2f0(0x04)
	float CachedMaxDrawDistance; // 0x2f4(0x04)
	char DepthPriorityGroup; // 0x2f8(0x01)
	char ViewOwnerDepthPriorityGroup; // 0x2f9(0x01)
	char UnknownData_2FA[0x2]; // 0x2fa(0x02)
	char bAlwaysCreatePhysicsState : 1; // 0x2fc(0x01)
	char bGenerateOverlapEvents : 1; // 0x2fc(0x01)
	char bMultiBodyOverlap : 1; // 0x2fc(0x01)
	char bCheckAsyncSceneOnMove : 1; // 0x2fc(0x01)
	char bTraceComplexOnMove : 1; // 0x2fc(0x01)
	char bReturnMaterialOnMove : 1; // 0x2fc(0x01)
	char bUseViewOwnerDepthPriorityGroup : 1; // 0x2fc(0x01)
	char bAllowCullDistanceVolume : 1; // 0x2fc(0x01)
	char bHasMotionBlurVelocityMeshes : 1; // 0x2fd(0x01)
	char bRenderInMainPass : 1; // 0x2fd(0x01)
	char bRenderInCustomPrePass : 1; // 0x2fd(0x01)
	char bReflected : 1; // 0x2fd(0x01)
	char UnknownData_2FD_4 : 1; // 0x2fd(0x01)
	char bReflectedOnLowQuality : 1; // 0x2fd(0x01)
	char bFFTWaterMask : 1; // 0x2fd(0x01)
	char bVolumeFogMask : 1; // 0x2fd(0x01)
	char UnknownData_2FE_0 : 1; // 0x2fe(0x01)
	char bAffectsFlatWater : 1; // 0x2fe(0x01)
	char bGPUParticlesKillPlane : 1; // 0x2fe(0x01)
	char bDontCull : 1; // 0x2fe(0x01)
	char bDontSizeOnScreenCull : 1; // 0x2fe(0x01)
	char UnknownData_2FE_5 : 3; // 0x2fe(0x01)
	char UnknownData_2FF[0x1]; // 0x2ff(0x01)
	float OverriddenShadowMinTexelSize; // 0x300(0x04)
	bool bOverrideShadowMinSizeCulling; // 0x304(0x01)
	bool bOverrideShadowCascadesExclusion; // 0x305(0x01)
	char ExcludedShadowCascades; // 0x306(0x01)
	char UnknownData_307[0x1]; // 0x307(0x01)
	char bReceivesDecals : 1; // 0x308(0x01)
	char bOwnerNoSee : 1; // 0x308(0x01)
	char bOnlyOwnerSee : 1; // 0x308(0x01)
	char bTreatAsBackgroundForOcclusion : 1; // 0x308(0x01)
	char bIsACloud : 1; // 0x308(0x01)
	char bUseAsOccluder : 1; // 0x308(0x01)
	char bSelectable : 1; // 0x308(0x01)
	char bForceMipStreaming : 1; // 0x308(0x01)
	char bHasPerInstanceHitProxies : 1; // 0x309(0x01)
	char CastShadow : 1; // 0x309(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x309(0x01)
	char bUseFarCascadeLPVBiasMultiplier : 1; // 0x309(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x309(0x01)
	char bCastDynamicShadow : 1; // 0x309(0x01)
	char bCastStaticShadow : 1; // 0x309(0x01)
	char bCastVolumetricTranslucentShadow : 1; // 0x309(0x01)
	char bSelfShadowOnly : 1; // 0x30a(0x01)
	char bCastFarShadow : 1; // 0x30a(0x01)
	char bCastInsetShadow : 1; // 0x30a(0x01)
	char bCastCinematicShadow : 1; // 0x30a(0x01)
	char bCastHiddenShadow : 1; // 0x30a(0x01)
	char bCastShadowAsTwoSided : 1; // 0x30a(0x01)
	char bCastShadowOnLowQuality : 1; // 0x30a(0x01)
	char bLightAsIfStatic : 1; // 0x30a(0x01)
	char bLightAttachmentsAsGroup : 1; // 0x30b(0x01)
	char UnknownData_30B_1 : 7; // 0x30b(0x01)
	char IndirectLightingCacheQuality; // 0x30c(0x01)
	bool bHasCachedStaticLighting; // 0x30d(0x01)
	bool bStaticLightingBuildEnqueued; // 0x30e(0x01)
	char UnknownData_30F[0x1]; // 0x30f(0x01)
	char bIgnoreRadialImpulse : 1; // 0x310(0x01)
	char bIgnoreRadialForce : 1; // 0x310(0x01)
	char AlwaysLoadOnClient : 1; // 0x310(0x01)
	char AlwaysLoadOnServer : 1; // 0x310(0x01)
	char bUseEditorCompositing : 1; // 0x310(0x01)
	char bRenderCustomDepth : 1; // 0x310(0x01)
	char bAllowVelocityInMaterial : 1; // 0x310(0x01)
	char UnknownData_311[0x3]; // 0x311(0x03)
	int32_t CustomDepthStencilValue; // 0x314(0x04)
	int32_t TranslucencySortPriority; // 0x318(0x04)
	int32_t VisibilityId; // 0x31c(0x04)
	char UnknownData_320[0x4]; // 0x320(0x04)
	float LpvBiasMultiplier; // 0x324(0x04)
	float FarCascadeLPVBiasMultiplier; // 0x328(0x04)
	float LpvIntensityMultiplier; // 0x32c(0x04)
	struct FCustomPrimitiveData CustomPrimitiveData; // 0x330(0x10)
	struct FBodyInstance BodyInstance; // 0x340(0x180)
	char bAffectRain : 1; // 0x4c0(0x01)
	char bCanEverAffectNavigation : 1; // 0x4c0(0x01)
	char UnknownData_4C0_2 : 1; // 0x4c0(0x01)
	char bSkipRenderingInOuterLPVCascades : 1; // 0x4c0(0x01)
	char bEnableMergeCollisionComponents : 1; // 0x4c0(0x01)
	char bVisibleWhenAboveWaterAndPlayerUnderwater : 1; // 0x4c0(0x01)
	char bVisibleWhenAboveWaterAndPlayerAbove : 1; // 0x4c0(0x01)
	char bVisibleWhenUnderwaterAndPlayerAbove : 1; // 0x4c0(0x01)
	char bVisibleWhenUnderwaterAndPlayerUnderwater : 1; // 0x4c1(0x01)
	char bCanRenderAboveAndBelowWaterAtSameTime : 1; // 0x4c1(0x01)
	char UnknownData_4C1_2 : 6; // 0x4c1(0x01)
	char UnknownData_4C2[0x6]; // 0x4c2(0x06)
	float BoundsScale; // 0x4c8(0x04)
	float OcclusionBoundsScale; // 0x4cc(0x04)
	float LastRenderTime; // 0x4d0(0x04)
	bool bGPUVisibility; // 0x4d4(0x01)
	char bHasCustomNavigableGeometry; // 0x4d5(0x01)
	char CanCharacterStepUpOn; // 0x4d6(0x01)
	char UnknownData_4D7[0x49]; // 0x4d7(0x49)
	struct FMulticastDelegate OnComponentHit; // 0x520(0x01)
	struct FMulticastDelegate OnComponentBeginOverlap; // 0x521(0x01)
	struct FMulticastDelegate OnComponentEndOverlap; // 0x522(0x01)
	struct FMulticastDelegate OnComponentWake; // 0x523(0x01)
	struct FMulticastDelegate OnComponentSleep; // 0x524(0x01)
	char UnknownData_525[0x33]; // 0x525(0x33)
	struct UPrimitiveComponent* LODParentPrimitive; // 0x558(0x08)
	struct FPrimitiveComponentPostPhysicsTickFunction PostPhysicsComponentTick; // 0x560(0x50)
	struct UPrimitiveComponent* MergedCollisionComponentParent; // 0x5b0(0x08)
	char UnknownData_5B8[0x8]; // 0x5b8(0x08)

	void WakeRigidBody(struct FName BoneName); // Function Engine.PrimitiveComponent.WakeRigidBody // Native|Public|BlueprintCallable // @ game+0x2dec180
	void WakeAllRigidBodies(); // Function Engine.PrimitiveComponent.WakeAllRigidBodies // Native|Public|BlueprintCallable // @ game+0x2dec160
	void SetWalkableSlopeOverride(struct FWalkableSlopeOverride NewOverride); // Function Engine.PrimitiveComponent.SetWalkableSlopeOverride // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x2deb050
	void SetTranslucentSortPriority(int32_t NewTranslucentSortPriority); // Function Engine.PrimitiveComponent.SetTranslucentSortPriority // Final|Native|Public|BlueprintCallable // @ game+0x2dead10
	void SetSimulatePhysics(bool bSimulate); // Function Engine.PrimitiveComponent.SetSimulatePhysics // Native|Public|BlueprintCallable // @ game+0x2dea430
	void SetRenderInMainPass(bool bValue); // Function Engine.PrimitiveComponent.SetRenderInMainPass // Final|Native|Public|BlueprintCallable // @ game+0x2dea1f0
	void SetRenderCustomDepth(bool bValue); // Function Engine.PrimitiveComponent.SetRenderCustomDepth // Final|Native|Public|BlueprintCallable // @ game+0x2dea160
	void SetPhysMaterialOverride(struct UPhysicalMaterial* NewPhysMaterial); // Function Engine.PrimitiveComponent.SetPhysMaterialOverride // Native|Public|BlueprintCallable // @ game+0x2de96a0
	void SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, struct FName BoneName); // Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity // Final|Native|Public|BlueprintCallable // @ game+0x2de9aa0
	void SetPhysicsLinearVelocity(struct FVector NewVel, bool bAddToCurrent, struct FName BoneName); // Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2de9990
	void SetPhysicsAngularVelocity(struct FVector NewAngVel, bool bAddToCurrent, struct FName BoneName); // Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2de9730
	void SetOwnerNoSee(bool bNewOwnerNoSee); // Function Engine.PrimitiveComponent.SetOwnerNoSee // Final|Native|Public|BlueprintCallable // @ game+0x2de9610
	void SetOnlyOwnerSee(bool bNewOnlyOwnerSee); // Function Engine.PrimitiveComponent.SetOnlyOwnerSee // Final|Native|Public|BlueprintCallable // @ game+0x2de9500
	void SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision); // Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision // Native|Public|BlueprintCallable // @ game+0x2de9470
	void SetMaterial(int32_t ElementIndex, struct UMaterialInterface* Material); // Function Engine.PrimitiveComponent.SetMaterial // Native|Public|BlueprintCallable // @ game+0x2de9090
	void SetMassScale(struct FName BoneName, float InMassScale); // Function Engine.PrimitiveComponent.SetMassScale // Native|Public|BlueprintCallable // @ game+0x2de8f40
	void SetMassOverrideInKg(struct FName BoneName, float MassInKg, bool bOverrideMass); // Function Engine.PrimitiveComponent.SetMassOverrideInKg // Native|Public|BlueprintCallable // @ game+0x2de8e40
	void SetLockedAxis(char LockedAxis); // Function Engine.PrimitiveComponent.SetLockedAxis // Native|Public|BlueprintCallable // @ game+0x2de8d30
	void SetLinearDamping(float InDamping); // Function Engine.PrimitiveComponent.SetLinearDamping // Native|Public|BlueprintCallable // @ game+0x2de84f0
	void SetGenerateOverlapEvents(bool bEnable); // Function Engine.PrimitiveComponent.SetGenerateOverlapEvents // Final|Native|Public|BlueprintCallable // @ game+0x2de7c70
	void SetEnableGravity(bool bGravityEnabled); // Function Engine.PrimitiveComponent.SetEnableGravity // Native|Public|BlueprintCallable // @ game+0x2de7920
	void SetCustomPrimitiveVector(int32_t Index, struct FVector Value); // Function Engine.PrimitiveComponent.SetCustomPrimitiveVector // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2de7500
	void SetCustomPrimitiveScalar(int32_t Index, float Value); // Function Engine.PrimitiveComponent.SetCustomPrimitiveScalar // Final|Native|Public|BlueprintCallable // @ game+0x2de7430
	void SetCustomDepthStencilValue(int32_t Value); // Function Engine.PrimitiveComponent.SetCustomDepthStencilValue // Final|Native|Public|BlueprintCallable // @ game+0x2de7250
	void SetCullDistance(float NewCullDistance); // Function Engine.PrimitiveComponent.SetCullDistance // Final|Native|Public|BlueprintCallable // @ game+0x2de7150
	void SetConstraintMode(char ConstraintMode); // Function Engine.PrimitiveComponent.SetConstraintMode // Native|Public|BlueprintCallable // @ game+0x2de6dc0
	void SetCollisionResponseToChannel(char Channel, char NewResponse); // Function Engine.PrimitiveComponent.SetCollisionResponseToChannel // Final|Native|Public|BlueprintCallable // @ game+0x2de6a10
	void SetCollisionResponseToAllChannels(char NewResponse); // Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels // Final|Native|Public|BlueprintCallable // @ game+0x2de6990
	void SetCollisionProfileName(struct FName InCollisionProfileName); // Function Engine.PrimitiveComponent.SetCollisionProfileName // Native|Public|BlueprintCallable // @ game+0x2de6900
	void SetCollisionObjectType(char Channel); // Function Engine.PrimitiveComponent.SetCollisionObjectType // Final|Native|Public|BlueprintCallable // @ game+0x2de6880
	void SetCollisionEnabled(char NewType); // Function Engine.PrimitiveComponent.SetCollisionEnabled // Native|Public|BlueprintCallable // @ game+0x2de6800
	void SetCenterOfMass(struct FVector CenterOfMassOffset, struct FName BoneName); // Function Engine.PrimitiveComponent.SetCenterOfMass // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2de6460
	void SetCastShadow(bool NewCastShadow); // Function Engine.PrimitiveComponent.SetCastShadow // Final|Native|Public|BlueprintCallable // @ game+0x2de62b0
	void SetAngularDamping(float InDamping); // Function Engine.PrimitiveComponent.SetAngularDamping // Native|Public|BlueprintCallable // @ game+0x2de5090
	void SetAllPhysicsLinearVelocity(struct FVector NewVel, bool bAddToCurrent); // Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2de4fb0
	void SetAllMassScale(float InMassScale); // Function Engine.PrimitiveComponent.SetAllMassScale // Native|Public|BlueprintCallable // @ game+0x2de4b90
	struct FVector ScaleByMomentOfInertia(struct FVector InputVector, struct FName BoneName); // Function Engine.PrimitiveComponent.ScaleByMomentOfInertia // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2de4410
	void PutRigidBodyToSleep(struct FName BoneName); // Function Engine.PrimitiveComponent.PutRigidBodyToSleep // Final|Native|Public|BlueprintCallable // @ game+0x2de3de0
	bool K2_LineTraceComponent(struct FVector TraceStart, struct FVector TraceEnd, bool bTraceComplex, bool bShowTrace, struct FVector HitLocation, struct FVector HitNormal, struct FName BoneName); // Function Engine.PrimitiveComponent.K2_LineTraceComponent // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2de22f0
	bool IsOverlappingComponent(struct UPrimitiveComponent* OtherComp); // Function Engine.PrimitiveComponent.IsOverlappingComponent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de1f00
	bool IsOverlappingActor(struct AActor* Other); // Function Engine.PrimitiveComponent.IsOverlappingActor // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de1e70
	bool IsGravityEnabled(); // Function Engine.PrimitiveComponent.IsGravityEnabled // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de1ca0
	void IgnoreActorWhenMoving(struct AActor* Actor, bool bShouldIgnore); // Function Engine.PrimitiveComponent.IgnoreActorWhenMoving // Final|Native|Public|BlueprintCallable // @ game+0x2de1880
	struct FWalkableSlopeOverride GetWalkableSlopeOverride(); // Function Engine.PrimitiveComponent.GetWalkableSlopeOverride // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de10b0
	struct FVector GetPhysicsLinearVelocityAtPoint(struct FVector Point, struct FName BoneName); // Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ddeda0
	struct FVector GetPhysicsLinearVelocity(struct FName BoneName); // Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2dded00
	struct FVector GetPhysicsAngularVelocity(struct FName BoneName); // Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ddec60
	void GetOverlappingComponents(struct TArray<struct UPrimitiveComponent*> InOverlappingComponents); // Function Engine.PrimitiveComponent.GetOverlappingComponents // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2dde5a0
	void GetOverlappingActors(struct TArray<struct AActor*> OverlappingActors, struct UClass* ClassFilter); // Function Engine.PrimitiveComponent.GetOverlappingActors // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2dde4a0
	struct TArray<struct FOverlapInfo> GetOverlapInfos(); // Function Engine.PrimitiveComponent.GetOverlapInfos // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2dde280
	int32_t GetNumMaterials(); // Function Engine.PrimitiveComponent.GetNumMaterials // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2dde1c0
	struct UMaterialInterface* GetMaterial(int32_t ElementIndex); // Function Engine.PrimitiveComponent.GetMaterial // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2dddcf0
	float GetMassScale(struct FName BoneName); // Function Engine.PrimitiveComponent.GetMassScale // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2dddc30
	float GetMass(); // Function Engine.PrimitiveComponent.GetMass // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2dddbf0
	float GetLinearDamping(); // Function Engine.PrimitiveComponent.GetLinearDamping // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddd620
	struct FVector GetInertiaTensor(struct FName BoneName); // Function Engine.PrimitiveComponent.GetInertiaTensor // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddd3e0
	char GetCollisionResponseToChannel(char Channel); // Function Engine.PrimitiveComponent.GetCollisionResponseToChannel // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddcb90
	struct FName GetCollisionProfileName(); // Function Engine.PrimitiveComponent.GetCollisionProfileName // Final|Native|Public|BlueprintCallable // @ game+0x2ddcb50
	char GetCollisionObjectType(); // Function Engine.PrimitiveComponent.GetCollisionObjectType // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddcb20
	float GetClosestPointOnCollision(struct FVector Point, struct FVector OutPointOnBody, struct FName BoneName); // Function Engine.PrimitiveComponent.GetClosestPointOnCollision // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddc9b0
	struct FVector GetCenterOfMass(struct FName BoneName); // Function Engine.PrimitiveComponent.GetCenterOfMass // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ddc910
	float GetAngularDamping(); // Function Engine.PrimitiveComponent.GetAngularDamping // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddc670
	struct UMaterialInstanceDynamic* CreateDynamicMaterialInstance(int32_t ElementIndex, struct UMaterialInterface* SourceMaterial); // Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x2dda3d0
	struct UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(int32_t ElementIndex, struct UMaterialInterface* Parent); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial // Native|Public|BlueprintCallable // @ game+0x2dda2d0
	struct UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamic(int32_t ElementIndex); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic // Native|Public|BlueprintCallable // @ game+0x2dda230
	struct TArray<struct AActor*> CopyArrayOfMoveIgnoreActors(); // Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors // Final|Native|Public|BlueprintCallable // @ game+0x2dda190
	void ClearMoveIgnoreActors(int32_t InSlack); // Function Engine.PrimitiveComponent.ClearMoveIgnoreActors // Final|Native|Public|BlueprintCallable // @ game+0x2dd9d70
	bool CanCharacterStepUp(struct APawn* Pawn); // Function Engine.PrimitiveComponent.CanCharacterStepUp // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2dd9990
	void AddTorque(struct FVector Torque, struct FName BoneName, bool bAccelChange); // Function Engine.PrimitiveComponent.AddTorque // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2dd9620
	void AddRadialImpulse(struct FVector Origin, float Radius, float Strength, char Falloff, bool bVelChange); // Function Engine.PrimitiveComponent.AddRadialImpulse // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2dd9260
	void AddRadialForce(struct FVector Origin, float Radius, float Strength, char Falloff, bool bAccelChange); // Function Engine.PrimitiveComponent.AddRadialForce // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2dd90a0
	void AddImpulseAtLocation(struct FVector Impulse, struct FVector Location, struct FName BoneName); // Function Engine.PrimitiveComponent.AddImpulseAtLocation // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2dd8cd0
	void AddImpulse(struct FVector Impulse, struct FName BoneName, bool bVelChange); // Function Engine.PrimitiveComponent.AddImpulse // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2dd8bb0
	void AddForceAtLocation(struct FVector Force, struct FVector Location, struct FName BoneName); // Function Engine.PrimitiveComponent.AddForceAtLocation // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2dd88f0
	void AddForce(struct FVector Force, struct FName BoneName, bool bAccelChange); // Function Engine.PrimitiveComponent.AddForce // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2dd87d0
	void AddAngularImpulse(struct FVector Impulse, struct FName BoneName, bool bVelChange); // Function Engine.PrimitiveComponent.AddAngularImpulse // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2dd7fd0
};

// Class Engine.GameState
// Size: 0x420 (Inherited: 0x3c8)
struct AGameState : AInfo {
	struct UClass* GameModeClass; // 0x3c8(0x08)
	struct AGameMode* AuthorityGameMode; // 0x3d0(0x08)
	struct UClass* SpectatorClass; // 0x3d8(0x08)
	struct FName MatchState; // 0x3e0(0x08)
	struct FName PreviousMatchState; // 0x3e8(0x08)
	int32_t ElapsedTime; // 0x3f0(0x04)
	char UnknownData_3F4[0x4]; // 0x3f4(0x04)
	struct TArray<struct APlayerState*> PlayerArray; // 0x3f8(0x10)
	float ReplicatedWorldTimeSeconds; // 0x408(0x04)
	float ServerWorldTimeSecondsDelta; // 0x40c(0x04)
	float ServerWorldTimeSecondsUpdateFrequency; // 0x410(0x04)
	char UnknownData_414[0xc]; // 0x414(0x0c)

	void OnRep_SpectatorClass(); // Function Engine.GameState.OnRep_SpectatorClass // Native|Public // @ game+0x2de32c0
	void OnRep_ReplicatedWorldTimeSeconds(); // Function Engine.GameState.OnRep_ReplicatedWorldTimeSeconds // Native|Protected // @ game+0x2de3200
	void OnRep_MatchState(); // Function Engine.GameState.OnRep_MatchState // Native|Public // @ game+0x2de3160
	void OnRep_GameModeClass(); // Function Engine.GameState.OnRep_GameModeClass // Native|Public // @ game+0x2de3120
	void OnRep_ElapsedTime(); // Function Engine.GameState.OnRep_ElapsedTime // Native|Public // @ game+0x2de3100
	float GetServerWorldTimeSeconds(); // Function Engine.GameState.GetServerWorldTimeSeconds // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de0360
};

// Class Engine.GameUserSettings
// Size: 0x78 (Inherited: 0x28)
struct UGameUserSettings : UObject {
	bool bUseVSync; // 0x28(0x01)
	char UnknownData_29[0x1f]; // 0x29(0x1f)
	uint32_t ResolutionSizeX; // 0x48(0x04)
	uint32_t ResolutionSizeY; // 0x4c(0x04)
	uint32_t LastUserConfirmedResolutionSizeX; // 0x50(0x04)
	uint32_t LastUserConfirmedResolutionSizeY; // 0x54(0x04)
	int32_t WindowPosX; // 0x58(0x04)
	int32_t WindowPosY; // 0x5c(0x04)
	bool bUseDesktopResolutionForFullscreen; // 0x60(0x01)
	char UnknownData_61[0x3]; // 0x61(0x03)
	int32_t FullscreenMode; // 0x64(0x04)
	int32_t LastConfirmedFullscreenMode; // 0x68(0x04)
	uint32_t Version; // 0x6c(0x04)
	int32_t AudioQualityLevel; // 0x70(0x04)
	char UnknownData_74[0x4]; // 0x74(0x04)
};

// Class Engine.ScriptViewportClient
// Size: 0x30 (Inherited: 0x28)
struct UScriptViewportClient : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class Engine.GameViewportClient
// Size: 0x250 (Inherited: 0x30)
struct UGameViewportClient : UScriptViewportClient {
	char UnknownData_30[0x8]; // 0x30(0x08)
	struct UConsole* ViewportConsole; // 0x38(0x08)
	struct TArray<struct FDebugDisplayProperty> DebugProperties; // 0x40(0x10)
	char UnknownData_50[0x30]; // 0x50(0x30)
	struct UWorld* World; // 0x80(0x08)
	struct UGameInstance* GameInstance; // 0x88(0x08)
	char UnknownData_90[0x1c0]; // 0x90(0x1c0)

	void SSSwapControllers(); // Function Engine.GameViewportClient.SSSwapControllers // Exec|Native|Public // @ game+0x31aa3e0
	void ShowTitleSafeArea(); // Function Engine.GameViewportClient.ShowTitleSafeArea // Exec|Native|Public // @ game+0x31aa490
	void SetConsoleTarget(int32_t PlayerIndex); // Function Engine.GameViewportClient.SetConsoleTarget // Exec|Native|Public // @ game+0x31aa400
};

// Class Engine.PlayerState
// Size: 0x450 (Inherited: 0x3c8)
struct APlayerState : AInfo {
	float Score; // 0x3c8(0x04)
	char Ping; // 0x3cc(0x01)
	char UnknownData_3CD[0x3]; // 0x3cd(0x03)
	struct FString PlayerName; // 0x3d0(0x10)
	char UnknownData_3E0[0x10]; // 0x3e0(0x10)
	int32_t PlayerId; // 0x3f0(0x04)
	char bIsSpectator : 1; // 0x3f4(0x01)
	char bOnlySpectator : 1; // 0x3f4(0x01)
	char bIsABot : 1; // 0x3f4(0x01)
	char UnknownData_3F4_3 : 1; // 0x3f4(0x01)
	char bIsInactive : 1; // 0x3f4(0x01)
	char bFromPreviousLevel : 1; // 0x3f4(0x01)
	char UnknownData_3F4_6 : 2; // 0x3f4(0x01)
	char UnknownData_3F5[0x3]; // 0x3f5(0x03)
	int32_t StartTime; // 0x3f8(0x04)
	char UnknownData_3FC[0x4]; // 0x3fc(0x04)
	struct UClass* EngineMessageClass; // 0x400(0x08)
	char UnknownData_408[0x18]; // 0x408(0x18)
	struct FUniqueNetIdRepl UniqueId; // 0x420(0x18)
	char UnknownData_438[0x18]; // 0x438(0x18)

	void OnRep_UniqueId(); // Function Engine.PlayerState.OnRep_UniqueId // Native|Public // @ game+0x2de32e0
};

// Class Engine.Controller
// Size: 0x428 (Inherited: 0x3c8)
struct AController : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct APawn* Pawn; // 0x3d0(0x08)
	char UnknownData_3D8[0x8]; // 0x3d8(0x08)
	struct ACharacter* Character; // 0x3e0(0x08)
	struct APlayerState* PlayerState; // 0x3e8(0x08)
	struct USceneComponent* TransformComponent; // 0x3f0(0x08)
	struct FRotator ControlRotation; // 0x3f8(0x0c)
	char bAttachToPawn : 1; // 0x404(0x01)
	char UnknownData_404_1 : 7; // 0x404(0x01)
	char UnknownData_405[0xb]; // 0x405(0x0b)
	struct FName StateName; // 0x410(0x08)
	struct FMulticastDelegate OnInstigatedAnyDamage; // 0x418(0x10)

	void UnPossess(); // Function Engine.Controller.UnPossess // Native|Public|BlueprintCallable // @ game+0x2ce6140
	void StopMovement(); // Function Engine.Controller.StopMovement // Native|Public|BlueprintCallable // @ game+0x2ce5f10
	void SetInitialLocationAndRotation(struct FVector NewLocation, struct FRotator NewRotation); // Function Engine.Controller.SetInitialLocationAndRotation // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ce47e0
	void SetControlRotation(struct FRotator NewRotation); // Function Engine.Controller.SetControlRotation // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ce41c0
	void ReceiveInstigatedAnyDamage(float Damage, struct UDamageType* DamageType, struct AActor* DamagedActor, struct AActor* DamageCauser); // Function Engine.Controller.ReceiveInstigatedAnyDamage // BlueprintAuthorityOnly|Event|Protected|BlueprintEvent // @ game+0x188c2f0
	void Possess(struct APawn* InPawn); // Function Engine.Controller.Possess // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x2ce1f70
	void OnRep_PlayerState(); // Function Engine.Controller.OnRep_PlayerState // Native|Public // @ game+0x2ce14e0
	void OnRep_Pawn(); // Function Engine.Controller.OnRep_Pawn // Native|Public // @ game+0x2ce14c0
	bool LineOfSightTo(struct AActor* Other, struct FVector ViewPoint, bool bAlternateChecks); // Function Engine.Controller.LineOfSightTo // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ce1070
	struct APawn* K2_GetPawn(); // Function Engine.Controller.K2_GetPawn // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdf530
	bool IsLocalPlayerController(); // Function Engine.Controller.IsLocalPlayerController // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdd360
	bool IsLocalController(); // Function Engine.Controller.IsLocalController // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdd330
	struct AActor* GetViewTarget(); // Function Engine.Controller.GetViewTarget // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdce10
	struct FRotator GetDesiredRotation(); // Function Engine.Controller.GetDesiredRotation // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cda6f0
	struct FRotator GetControlRotation(); // Function Engine.Controller.GetControlRotation // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cda190
	void ClientSetRotation(struct FRotator NewRotation, bool bResetCamera); // Function Engine.Controller.ClientSetRotation // Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0x2cd7b10
	void ClientSetLocation(struct FVector NewLocation, struct FRotator NewRotation); // Function Engine.Controller.ClientSetLocation // Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0x2cd7a30
	struct APlayerController* CastToPlayerController(); // Function Engine.Controller.CastToPlayerController // Final|Native|Public|BlueprintCallable // @ game+0x2cd5e70
};

// Class Engine.PlayerController
// Size: 0x770 (Inherited: 0x428)
struct APlayerController : AController {
	struct UPlayer* Player; // 0x428(0x08)
	char UnknownData_430[0x8]; // 0x430(0x08)
	struct APawn* AcknowledgedPawn; // 0x438(0x08)
	struct UInterpTrackInstDirector* ControllingDirTrackInst; // 0x440(0x08)
	char UnknownData_448[0x8]; // 0x448(0x08)
	struct AHUD* MyHUD; // 0x450(0x08)
	struct APlayerCameraManager* PlayerCameraManager; // 0x458(0x08)
	struct UClass* PlayerCameraManagerClass; // 0x460(0x08)
	bool bAutoManageActiveCameraTarget; // 0x468(0x01)
	char UnknownData_469[0x3]; // 0x469(0x03)
	struct FRotator TargetViewRotation; // 0x46c(0x0c)
	char UnknownData_478[0x10]; // 0x478(0x10)
	struct TArray<struct AActor*> HiddenActors; // 0x488(0x10)
	float LastSpectatorStateSynchTime; // 0x498(0x04)
	struct FVector LastSpectatorSyncLocation; // 0x49c(0x0c)
	struct FRotator LastSpectatorSyncRotation; // 0x4a8(0x0c)
	int32_t ClientCap; // 0x4b4(0x04)
	struct UCheatManager* CheatManager; // 0x4b8(0x08)
	struct UClass* CheatClass; // 0x4c0(0x08)
	struct UPlayerInput* PlayerInput; // 0x4c8(0x08)
	struct TArray<struct FActiveForceFeedbackEffect> ActiveForceFeedbackEffects; // 0x4d0(0x10)
	char UnknownData_4E0[0x90]; // 0x4e0(0x90)
	char UnknownData_570_0 : 2; // 0x570(0x01)
	char bPlayerIsWaiting : 1; // 0x570(0x01)
	char UnknownData_570_3 : 5; // 0x570(0x01)
	char UnknownData_571[0x3]; // 0x571(0x03)
	char NetPlayerIndex; // 0x574(0x01)
	bool bHasVoiceHandshakeCompleted; // 0x575(0x01)
	char UnknownData_576[0x2]; // 0x576(0x02)
	struct UNetConnection* PendingSwapConnection; // 0x578(0x08)
	struct UNetConnection* NetConnection; // 0x580(0x08)
	char UnknownData_588[0xc]; // 0x588(0x0c)
	float InputYawScale; // 0x594(0x04)
	float InputPitchScale; // 0x598(0x04)
	float InputRollScale; // 0x59c(0x04)
	char bShowMouseCursor : 1; // 0x5a0(0x01)
	char bEnableClickEvents : 1; // 0x5a0(0x01)
	char bEnableTouchEvents : 1; // 0x5a0(0x01)
	char bEnableMouseOverEvents : 1; // 0x5a0(0x01)
	char bEnableTouchOverEvents : 1; // 0x5a0(0x01)
	char bForceFeedbackEnabled : 1; // 0x5a0(0x01)
	char UnknownData_5A0_6 : 2; // 0x5a0(0x01)
	char UnknownData_5A1[0x3]; // 0x5a1(0x03)
	char DefaultMouseCursor; // 0x5a4(0x01)
	char CurrentMouseCursor; // 0x5a5(0x01)
	char DefaultClickTraceChannel; // 0x5a6(0x01)
	char CurrentClickTraceChannel; // 0x5a7(0x01)
	float HitResultTraceDistance; // 0x5a8(0x04)
	float ForceFeedbackIntensity; // 0x5ac(0x04)
	char UnknownData_5B0[0x88]; // 0x5b0(0x88)
	struct UInputComponent* InactiveStateInputComponent; // 0x638(0x08)
	char UnknownData_640[0x20]; // 0x640(0x20)
	struct UTouchInterface* CurrentTouchInterface; // 0x660(0x08)
	char UnknownData_668[0x30]; // 0x668(0x30)
	struct ASpectatorPawn* SpectatorPawn; // 0x698(0x08)
	struct FVector SpawnLocation; // 0x6a0(0x0c)
	char UnknownData_6AC[0x4]; // 0x6ac(0x04)
	struct TMap<struct ULevel*, struct UInputComponent*> LevelInputComponents; // 0x6b0(0x50)
	char UnknownData_700[0x14]; // 0x700(0x14)
	bool bIsLocalPlayerController; // 0x714(0x01)
	char UnknownData_715[0x1]; // 0x715(0x01)
	uint16_t SeamlessTravelCount; // 0x716(0x02)
	uint16_t LastCompletedSeamlessTravelCount; // 0x718(0x02)
	bool bInCinematicMode; // 0x71a(0x01)
	char UnknownData_71B[0x55]; // 0x71b(0x55)

	bool WasInputKeyJustReleased(struct FKey Key); // Function Engine.PlayerController.WasInputKeyJustReleased // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ce64f0
	bool WasInputKeyJustPressed(struct FKey Key); // Function Engine.PlayerController.WasInputKeyJustPressed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ce63f0
	void ToggleSpeaking(bool bInSpeaking); // Function Engine.PlayerController.ToggleSpeaking // Exec|Native|Public // @ game+0x2ce6020
	void SwitchLevel(struct FString URL); // Function Engine.PlayerController.SwitchLevel // Exec|Native|Public // @ game+0x2ce5f30
	void StopHapticEffect(char Hand); // Function Engine.PlayerController.StopHapticEffect // Final|Native|Public|BlueprintCallable // @ game+0x2ce5e90
	void StartFire(char FireModeNum); // Function Engine.PlayerController.StartFire // Exec|Native|Public // @ game+0x2ce5a60
	void SetVirtualJoystickVisibility(bool bVisible); // Function Engine.PlayerController.SetVirtualJoystickVisibility // Native|Public|BlueprintCallable // @ game+0x2ce5380
	void SetViewTargetWithBlend(struct AActor* NewViewTarget, float BlendTime, char BlendFunc, float BlendExp, bool bLockOutgoing); // Function Engine.PlayerController.SetViewTargetWithBlend // Native|Public|BlueprintCallable // @ game+0x2ce5200
	void SetName(struct FString S); // Function Engine.PlayerController.SetName // Exec|Native|Public // @ game+0x2ce4b80
	void SetIgnoreMoveInput(bool bNewMoveInput); // Function Engine.PlayerController.SetIgnoreMoveInput // Native|Public|BlueprintCallable // @ game+0x2ce46c0
	void SetIgnoreLookInput(bool bNewLookInput); // Function Engine.PlayerController.SetIgnoreLookInput // Native|Public|BlueprintCallable // @ game+0x2ce4630
	void SetHapticsByValue(float Frequency, float Amplitude, char Hand); // Function Engine.PlayerController.SetHapticsByValue // Final|Native|Public|BlueprintCallable // @ game+0x2ce4450
	void SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning); // Function Engine.PlayerController.SetCinematicMode // Native|Public|BlueprintCallable // @ game+0x2ce3f70
	void SetAudioListenerOverride(struct USceneComponent* AttachToComponent, struct FVector Location, struct FRotator Rotation); // Function Engine.PlayerController.SetAudioListenerOverride // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ce3cd0
	void ServerViewSelf(struct FViewTargetTransitionParams TransitionParams); // Function Engine.PlayerController.ServerViewSelf // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x2ce3500
	void ServerViewPrevPlayer(); // Function Engine.PlayerController.ServerViewPrevPlayer // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x2ce34b0
	void ServerViewNextPlayer(); // Function Engine.PlayerController.ServerViewNextPlayer // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x2ce3460
	void ServerVerifyViewTarget(); // Function Engine.PlayerController.ServerVerifyViewTarget // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x2ce3410
	void ServerUpdateCamera(struct FVector_NetQuantize CamLoc, int32_t CamPitchAndYaw); // Function Engine.PlayerController.ServerUpdateCamera // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x2ce32f0
	void ServerUnmutePlayer(struct FUniqueNetIdRepl PlayerId); // Function Engine.PlayerController.ServerUnmutePlayer // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x2ce31a0
	void ServerToggleAILogging(); // Function Engine.PlayerController.ServerToggleAILogging // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x2ce3150
	void ServerShortTimeout(); // Function Engine.PlayerController.ServerShortTimeout // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x2ce3100
	void ServerSetSpectatorWaiting(bool bWaiting); // Function Engine.PlayerController.ServerSetSpectatorWaiting // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x2ce3040
	void ServerSetSpectatorLocation(struct FVector NewLoc, struct FRotator NewRot); // Function Engine.PlayerController.ServerSetSpectatorLocation // Net|Native|Event|Public|NetServer|HasDefaults|NetValidate // @ game+0x2ce2f10
	void ServerRestartPlayer(); // Function Engine.PlayerController.ServerRestartPlayer // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x2ce2ec0
	void ServerPause(); // Function Engine.PlayerController.ServerPause // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x2ce2e70
	void ServerNotifyLoadedWorld(struct FName WorldPackageName); // Function Engine.PlayerController.ServerNotifyLoadedWorld // Final|Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x2ce2dc0
	void ServerMutePlayer(struct FUniqueNetIdRepl PlayerId); // Function Engine.PlayerController.ServerMutePlayer // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x2ce2c70
	void ServerCheckClientPossessionReliable(); // Function Engine.PlayerController.ServerCheckClientPossessionReliable // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x2ce2c20
	void ServerCheckClientPossession(); // Function Engine.PlayerController.ServerCheckClientPossession // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x2ce2bd0
	void ServerChangeName(struct FString S); // Function Engine.PlayerController.ServerChangeName // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x2ce2b00
	void ServerCamera(struct FName NewMode); // Function Engine.PlayerController.ServerCamera // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x2ce2a40
	void ServerAcknowledgePossession(struct APawn* P); // Function Engine.PlayerController.ServerAcknowledgePossession // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x2ce2980
	void SendToConsole(struct FString Command); // Function Engine.PlayerController.SendToConsole // Exec|Native|Public // @ game+0x2ce28d0
	void SendPlayerName(int32_t Id, struct FString Name); // Function Engine.PlayerController.SendPlayerName // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2ce27e0
	void RestartLevel(); // Function Engine.PlayerController.RestartLevel // Exec|Native|Public // @ game+0x2ce27c0
	void ResetIgnoreMoveInput(); // Function Engine.PlayerController.ResetIgnoreMoveInput // Native|Public|BlueprintCallable // @ game+0x2ce2780
	void ResetIgnoreLookInput(); // Function Engine.PlayerController.ResetIgnoreLookInput // Native|Public|BlueprintCallable // @ game+0x2ce2760
	void ResetIgnoreInputFlags(); // Function Engine.PlayerController.ResetIgnoreInputFlags // Native|Public|BlueprintCallable // @ game+0x2ce2740
	bool ProjectWorldLocationToScreen(struct FVector WorldLocation, struct FVector2D ScreenLocation); // Function Engine.PlayerController.ProjectWorldLocationToScreen // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ce2000
	void PlayHapticEffect(struct UHapticFeedbackEffect* HapticEffect, char Hand, float Scale); // Function Engine.PlayerController.PlayHapticEffect // Final|Native|Public|BlueprintCallable // @ game+0x2ce1e60
	void PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, char Action, struct FLatentActionInfo LatentInfo); // Function Engine.PlayerController.PlayDynamicForceFeedback // Final|Native|Public|BlueprintCallable // @ game+0x2ce1bd0
	void Pause(); // Function Engine.PlayerController.Pause // Exec|Native|Public // @ game+0x2ce16a0
	void OnServerStartedVisualLogger(bool bIsLogging); // Function Engine.PlayerController.OnServerStartedVisualLogger // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2ce1610
	void LocalTravel(struct FString URL); // Function Engine.PlayerController.LocalTravel // Exec|Native|Public // @ game+0x2ce1190
	bool IsSeamlessTravelInProgress(); // Function Engine.PlayerController.IsSeamlessTravelInProgress // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdd4e0
	bool IsPossessingServerAcknowledgedPawn(); // Function Engine.PlayerController.IsPossessingServerAcknowledgedPawn // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2cdd480
	bool IsMoveInputIgnored(); // Function Engine.PlayerController.IsMoveInputIgnored // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdd3c0
	bool IsLookInputIgnored(); // Function Engine.PlayerController.IsLookInputIgnored // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdd390
	bool IsInputKeyDown(struct FKey Key); // Function Engine.PlayerController.IsInputKeyDown // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdd230
	void GetViewportSize(int32_t SizeX, int32_t SizeY); // Function Engine.PlayerController.GetViewportSize // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdce40
	struct ASpectatorPawn* GetSpectatorPawn(); // Function Engine.PlayerController.GetSpectatorPawn // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdc8d0
	bool GetMousePosition(float LocationX, float LocationY); // Function Engine.PlayerController.GetMousePosition // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdc0b0
	struct FVector GetInputVectorKeyState(struct FKey Key); // Function Engine.PlayerController.GetInputVectorKeyState // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdbe60
	void GetInputTouchState(char FingerIndex, float LocationX, float LocationY, bool bIsCurrentlyPressed); // Function Engine.PlayerController.GetInputTouchState // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdbbc0
	void GetInputMouseDelta(float DeltaX, float DeltaY); // Function Engine.PlayerController.GetInputMouseDelta // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdbae0
	void GetInputMotionState(struct FVector Tilt, struct FVector RotationRate, struct FVector Gravity, struct FVector Acceleration); // Function Engine.PlayerController.GetInputMotionState // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdb950
	float GetInputKeyTimeDown(struct FKey Key); // Function Engine.PlayerController.GetInputKeyTimeDown // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdb850
	void GetInputAnalogStickState(char WhichStick, float StickX, float StickY); // Function Engine.PlayerController.GetInputAnalogStickState // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdb590
	float GetInputAnalogKeyState(struct FKey Key); // Function Engine.PlayerController.GetInputAnalogKeyState // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdb490
	struct AHUD* GetHUD(); // Function Engine.PlayerController.GetHUD // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cda9c0
	bool GetHitResultUnderFingerForObjects(char FingerIndex, struct TArray<char> ObjectTypes, bool bTraceComplex, struct FHitResult HitResult); // Function Engine.PlayerController.GetHitResultUnderFingerForObjects // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdb180
	bool GetHitResultUnderFingerByChannel(char FingerIndex, char TraceChannel, bool bTraceComplex, struct FHitResult HitResult); // Function Engine.PlayerController.GetHitResultUnderFingerByChannel // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdafe0
	bool GetHitResultUnderFinger(char FingerIndex, char TraceChannel, bool bTraceComplex, struct FHitResult HitResult); // Function Engine.PlayerController.GetHitResultUnderFinger // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdae40
	bool GetHitResultUnderCursorForObjects(struct TArray<char> ObjectTypes, bool bTraceComplex, struct FHitResult HitResult); // Function Engine.PlayerController.GetHitResultUnderCursorForObjects // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdacb0
	bool GetHitResultUnderCursorByChannel(char TraceChannel, bool bTraceComplex, struct FHitResult HitResult); // Function Engine.PlayerController.GetHitResultUnderCursorByChannel // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdab50
	bool GetHitResultUnderCursor(char TraceChannel, bool bTraceComplex, struct FHitResult HitResult); // Function Engine.PlayerController.GetHitResultUnderCursor // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2cda9f0
	struct FVector GetFocalLocation(); // Function Engine.PlayerController.GetFocalLocation // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cda940
	void FOV(float NewFOV); // Function Engine.PlayerController.FOV // Exec|Native|Public // @ game+0x2cd9200
	void EnableCheats(); // Function Engine.PlayerController.EnableCheats // Exec|Native|Public // @ game+0x2cd9150
	bool DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, struct FVector WorldLocation, struct FVector WorldDirection); // Function Engine.PlayerController.DeprojectScreenPositionToWorld // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cd8d40
	bool DeprojectMousePositionToWorld(struct FVector WorldLocation, struct FVector WorldDirection); // Function Engine.PlayerController.DeprojectMousePositionToWorld // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cd8c40
	void ConsoleKey(struct FKey Key); // Function Engine.PlayerController.ConsoleKey // Exec|Native|Public // @ game+0x2cd8a00
	void ClientWasKicked(struct FText KickReason); // Function Engine.PlayerController.ClientWasKicked // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd88d0
	void ClientVoiceHandshakeComplete(); // Function Engine.PlayerController.ClientVoiceHandshakeComplete // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd88b0
	void ClientUpdateLevelStreamingStatusBatched(struct FString PackageBasePath, struct TArray<struct FLevelStreamingStatusUpdateInfo> LevelStreamingStatusUpdateInfo); // Function Engine.PlayerController.ClientUpdateLevelStreamingStatusBatched // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd8780
	void ClientUpdateLevelStreamingStatus(struct FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int32_t LODIndex); // Function Engine.PlayerController.ClientUpdateLevelStreamingStatus // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd85d0
	void ClientUnmutePlayer(struct FUniqueNetIdRepl PlayerId); // Function Engine.PlayerController.ClientUnmutePlayer // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd84e0
	void ClientTravelInternal(struct FString URL, char TravelType, bool bSeamless, struct FGuid MapPackageGuid); // Function Engine.PlayerController.ClientTravelInternal // Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0x2cd8360
	void ClientTravel(struct FString URL, char TravelType, bool bSeamless, struct FGuid MapPackageGuid); // Function Engine.PlayerController.ClientTravel // Final|Native|Public|HasDefaults // @ game+0x2cd81e0
	void ClientTeamMessage(struct APlayerState* SenderPlayerState, struct FString S, struct FName Type, float MsgLifeTime); // Function Engine.PlayerController.ClientTeamMessage // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd8070
	void ClientStopForceFeedback(struct UForceFeedbackEffect* ForceFeedbackEffect, struct FName Tag); // Function Engine.PlayerController.ClientStopForceFeedback // Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable // @ game+0x2cd7fa0
	void ClientStopCameraShake(struct UClass* Shake); // Function Engine.PlayerController.ClientStopCameraShake // Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable // @ game+0x2cd7f10
	void ClientStopCameraAnim(struct UCameraAnim* AnimToStop); // Function Engine.PlayerController.ClientStopCameraAnim // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd7e80
	void ClientStartOnlineSession(); // Function Engine.PlayerController.ClientStartOnlineSession // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd7e60
	void ClientSpawnCameraLensEffect(struct UClass* LensEffectEmitterClass); // Function Engine.PlayerController.ClientSpawnCameraLensEffect // Net|Native|Event|Public|NetClient|BlueprintCallable // @ game+0x2cd7dd0
	void ClientSetViewTarget(struct AActor* A, struct FViewTargetTransitionParams TransitionParams); // Function Engine.PlayerController.ClientSetViewTarget // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd7c80
	void ClientSetSpectatorWaiting(bool bWaiting); // Function Engine.PlayerController.ClientSetSpectatorWaiting // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd7bf0
	void ClientSetHUD(struct UClass* NewHUDClass); // Function Engine.PlayerController.ClientSetHUD // Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable // @ game+0x2cd79a0
	void ClientSetForceMipLevelsToBeResident(struct UMaterialInterface* Material, float ForceDuration, int32_t CinematicTextureGroups); // Function Engine.PlayerController.ClientSetForceMipLevelsToBeResident // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd78a0
	void ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD); // Function Engine.PlayerController.ClientSetCinematicMode // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd7730
	void ClientSetCameraMode(struct FName NewCamMode); // Function Engine.PlayerController.ClientSetCameraMode // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd76a0
	void ClientSetCameraFade(bool bEnableFading, struct FColor FadeColor, struct FVector2D FadeAlpha, float FadeTime, bool bFadeAudio); // Function Engine.PlayerController.ClientSetCameraFade // Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0x2cd7510
	void ClientSetBlockOnAsyncLoading(); // Function Engine.PlayerController.ClientSetBlockOnAsyncLoading // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd74f0
	void ClientSeamlessTravelComplete(); // Function Engine.PlayerController.ClientSeamlessTravelComplete // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd74d0
	void ClientReturnToMainMenu(struct FString ReturnReason); // Function Engine.PlayerController.ClientReturnToMainMenu // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd7420
	void ClientRetryClientRestart(struct APawn* NewPawn); // Function Engine.PlayerController.ClientRetryClientRestart // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd7390
	void ClientRestart(struct APawn* NewPawn); // Function Engine.PlayerController.ClientRestart // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd7300
	void ClientReset(); // Function Engine.PlayerController.ClientReset // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd72e0
	void ClientRepObjRef(struct UObject* Object); // Function Engine.PlayerController.ClientRepObjRef // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd7250
	void ClientReceiveLocalizedMessage(struct UClass* Message, int32_t Switch, struct APlayerState* RelatedPlayerState_2, struct APlayerState* RelatedPlayerState_3, struct UObject* OptionalObject); // Function Engine.PlayerController.ClientReceiveLocalizedMessage // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd70d0
	void ClientPrestreamTextures(struct AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int32_t CinematicTextureGroups); // Function Engine.PlayerController.ClientPrestreamTextures // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd6f80
	void ClientPrepareMapChange(struct FName LevelName, bool bFirst, bool bLast); // Function Engine.PlayerController.ClientPrepareMapChange // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd6e70
	void ClientPlaySoundAtLocation(struct USoundBase* Sound, struct FVector Location, float VolumeMultiplier, float PitchMultiplier); // Function Engine.PlayerController.ClientPlaySoundAtLocation // Net|Native|Event|Public|HasDefaults|NetClient // @ game+0x2cd6d20
	void ClientPlaySound(struct USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier); // Function Engine.PlayerController.ClientPlaySound // Net|Native|Event|Public|NetClient // @ game+0x2cd6c20
	void ClientPlayForceFeedback(struct UForceFeedbackEffect* ForceFeedbackEffect, bool bLooping, struct FName Tag); // Function Engine.PlayerController.ClientPlayForceFeedback // Net|Native|Event|Public|NetClient|BlueprintCallable // @ game+0x2cd6b10
	void ClientPlayCameraShake(struct UClass* Shake, float Scale, char PlaySpace, struct FRotator UserPlaySpaceRot); // Function Engine.PlayerController.ClientPlayCameraShake // Net|Native|Event|Public|HasDefaults|NetClient|BlueprintCallable // @ game+0x2cd69b0
	void ClientPlayCameraAnim(struct UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, char Space, struct FRotator CustomPlaySpace); // Function Engine.PlayerController.ClientPlayCameraAnim // Net|Native|Event|Public|HasDefaults|NetClient|BlueprintCallable // @ game+0x2cd6710
	void ClientMutePlayer(struct FUniqueNetIdRepl PlayerId); // Function Engine.PlayerController.ClientMutePlayer // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd6620
	void ClientMessage(struct FString S, struct FName Type, float MsgLifeTime); // Function Engine.PlayerController.ClientMessage // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd64f0
	void ClientIgnoreMoveInput(bool bIgnore); // Function Engine.PlayerController.ClientIgnoreMoveInput // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd6460
	void ClientIgnoreLookInput(bool bIgnore); // Function Engine.PlayerController.ClientIgnoreLookInput // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd63d0
	void ClientGotoState(struct FName NewState); // Function Engine.PlayerController.ClientGotoState // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd6340
	void ClientGameEnded(struct AActor* EndGameFocus, bool bIsWinner); // Function Engine.PlayerController.ClientGameEnded // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd6270
	void ClientForceGarbageCollection(); // Function Engine.PlayerController.ClientForceGarbageCollection // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd6250
	void ClientFlushLevelStreaming(); // Function Engine.PlayerController.ClientFlushLevelStreaming // Final|Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd6230
	void ClientEndOnlineSession(); // Function Engine.PlayerController.ClientEndOnlineSession // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd6210
	void ClientEnableNetworkVoice(bool bEnable); // Function Engine.PlayerController.ClientEnableNetworkVoice // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd6180
	void ClientCommitMapChange(); // Function Engine.PlayerController.ClientCommitMapChange // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd6160
	void ClientClearCameraLensEffects(); // Function Engine.PlayerController.ClientClearCameraLensEffects // Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable // @ game+0x2cd6140
	void ClientCapBandwidth(int32_t Cap); // Function Engine.PlayerController.ClientCapBandwidth // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd60b0
	void ClientCancelPendingMapChange(); // Function Engine.PlayerController.ClientCancelPendingMapChange // Net|NetReliableNative|Event|Public|NetClient // @ game+0x2cd6090
	void ClientBlendOutCameraShake(struct UClass* Shake); // Function Engine.PlayerController.ClientBlendOutCameraShake // Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable // @ game+0x2cd6000
	void ClientAddTextureStreamingLoc(struct FVector InLoc, float Duration, bool bOverrideLocation); // Function Engine.PlayerController.ClientAddTextureStreamingLoc // Final|Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0x2cd5ee0
	void ClearAudioListenerOverride(); // Function Engine.PlayerController.ClearAudioListenerOverride // Final|Native|Public|BlueprintCallable // @ game+0x2cd5ea0
	void Camera(struct FName NewMode); // Function Engine.PlayerController.Camera // Exec|Native|Public // @ game+0x2cd5de0
	void AddYawInput(float Val); // Function Engine.PlayerController.AddYawInput // Native|Public|BlueprintCallable // @ game+0x2cd59b0
	void AddRollInput(float Val); // Function Engine.PlayerController.AddRollInput // Native|Public|BlueprintCallable // @ game+0x2cd56f0
	void AddPitchInput(float Val); // Function Engine.PlayerController.AddPitchInput // Native|Public|BlueprintCallable // @ game+0x2cd5670
	void ActivateTouchInterface(struct UTouchInterface* NewTouchInterface); // Function Engine.PlayerController.ActivateTouchInterface // Native|Public|BlueprintCallable // @ game+0x2cd50c0
};

// Class Engine.StaticMeshActor
// Size: 0x3d8 (Inherited: 0x3c8)
struct AStaticMeshActor : AActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x3c8(0x08)
	bool bStaticMeshReplicateMovement; // 0x3d0(0x01)
	char NavigationGeometryGatheringMode; // 0x3d1(0x01)
	char UnknownData_3D2[0x6]; // 0x3d2(0x06)
};

// Class Engine.Brush
// Size: 0x400 (Inherited: 0x3c8)
struct ABrush : AActor {
	char BrushType; // 0x3c8(0x01)
	char UnknownData_3C9[0x3]; // 0x3c9(0x03)
	struct FColor BrushColor; // 0x3cc(0x04)
	int32_t PolyFlags; // 0x3d0(0x04)
	char bColored : 1; // 0x3d4(0x01)
	char bSolidWhenSelected : 1; // 0x3d4(0x01)
	char bPlaceableFromClassBrowser : 1; // 0x3d4(0x01)
	char bNotForClientOrServer : 1; // 0x3d4(0x01)
	char UnknownData_3D4_4 : 4; // 0x3d4(0x01)
	char UnknownData_3D5[0x3]; // 0x3d5(0x03)
	struct UModel* Brush; // 0x3d8(0x08)
	struct UBrushComponent* BrushComponent; // 0x3e0(0x08)
	char bInManipulation : 1; // 0x3e8(0x01)
	char UnknownData_3E8_1 : 7; // 0x3e8(0x01)
	char UnknownData_3E9[0x7]; // 0x3e9(0x07)
	struct TArray<struct FGeomSelection> SavedSelections; // 0x3f0(0x10)
};

// Class Engine.Volume
// Size: 0x400 (Inherited: 0x400)
struct AVolume : ABrush {
};

// Class Engine.BlockingVolume
// Size: 0x400 (Inherited: 0x400)
struct ABlockingVolume : AVolume {
};

// Class Engine.WorldSettings
// Size: 0x580 (Inherited: 0x3c8)
struct AWorldSettings : AInfo {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	char bEnableWorldBoundsChecks : 1; // 0x3d0(0x01)
	char bEnableNavigationSystem : 1; // 0x3d0(0x01)
	char UnknownData_3D0_2 : 6; // 0x3d0(0x01)
	char UnknownData_3D1[0x3]; // 0x3d1(0x03)
	char WorldCompositionSetting; // 0x3d4(0x01)
	char UnknownData_3D5[0x3]; // 0x3d5(0x03)
	struct FStringAssetReference InstancedNavMeshesDataAssetOveride; // 0x3d8(0x10)
	char bEnableWorldOriginRebasing : 1; // 0x3e8(0x01)
	char bWorldGravitySet : 1; // 0x3e8(0x01)
	char bGlobalGravitySet : 1; // 0x3e8(0x01)
	char UnknownData_3E8_3 : 5; // 0x3e8(0x01)
	char UnknownData_3E9[0x3]; // 0x3e9(0x03)
	float KillZ; // 0x3ec(0x04)
	struct UClass* KillZDamageType; // 0x3f0(0x08)
	float GlobalGravityZ; // 0x3f8(0x04)
	char UnknownData_3FC[0x4]; // 0x3fc(0x04)
	struct UClass* DefaultPhysicsVolumeClass; // 0x400(0x08)
	struct UClass* PhysicsCollisionHandlerClass; // 0x408(0x08)
	struct UClass* DefaultGameMode; // 0x410(0x08)
	struct TArray<struct FGameModePrefix> DefaultMapPrefixes; // 0x418(0x10)
	struct UClass* GameNetworkManagerClass; // 0x428(0x08)
	int32_t PackedLightAndShadowMapTextureSize; // 0x430(0x04)
	char bMinimizeBSPSections : 1; // 0x434(0x01)
	char UnknownData_434_1 : 7; // 0x434(0x01)
	char UnknownData_435[0x3]; // 0x435(0x03)
	struct FVector DefaultColorScale; // 0x438(0x0c)
	char bPrecomputeVisibility : 1; // 0x444(0x01)
	char bPlaceCellsOnlyAlongCameraTracks : 1; // 0x444(0x01)
	char UnknownData_444_2 : 6; // 0x444(0x01)
	char UnknownData_445[0x3]; // 0x445(0x03)
	int32_t VisibilityCellSize; // 0x448(0x04)
	char VisibilityAggressiveness; // 0x44c(0x01)
	char UnknownData_44D[0x3]; // 0x44d(0x03)
	char bForceNoPrecomputedLighting : 1; // 0x450(0x01)
	char UnknownData_450_1 : 7; // 0x450(0x01)
	char UnknownData_451[0x3]; // 0x451(0x03)
	struct FLightmassWorldInfoSettings LightmassSettings; // 0x454(0x44)
	char LevelLightingQuality; // 0x498(0x01)
	char UnknownData_499[0x7]; // 0x499(0x07)
	struct FReverbSettings DefaultReverbSettings; // 0x4a0(0x18)
	struct FInteriorSettings DefaultAmbientZoneSettings; // 0x4b8(0x24)
	char UnknownData_4DC[0x4]; // 0x4dc(0x04)
	struct USoundMix* DefaultBaseSoundMix; // 0x4e0(0x08)
	float WorldToMeters; // 0x4e8(0x04)
	char UnknownData_4EC[0x4]; // 0x4ec(0x04)
	struct UBookMark* BookMarks[0x0a]; // 0x4f0(0x50)
	float TimeDilation; // 0x540(0x04)
	float MatineeTimeDilation; // 0x544(0x04)
	float DemoPlayTimeDilation; // 0x548(0x04)
	char bHighPriorityLoading : 1; // 0x54c(0x01)
	char bHighPriorityLoadingLocal : 1; // 0x54c(0x01)
	char UnknownData_54C_2 : 6; // 0x54c(0x01)
	char UnknownData_54D[0x3]; // 0x54d(0x03)
	struct TArray<struct FNetViewer> ReplicationViewers; // 0x550(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x560(0x10)
	float WorldGravityZ; // 0x570(0x04)
	char UnknownData_574[0x4]; // 0x574(0x04)
	struct APlayerState* Pauser; // 0x578(0x08)

	void OnRep_WorldGravityZ(); // Function Engine.WorldSettings.OnRep_WorldGravityZ // Native|Public // @ game+0x2de3300
};

// Class Engine.PostProcessComponent
// Size: 0x840 (Inherited: 0x2e0)
struct UPostProcessComponent : USceneComponent {
	char UnknownData_2E0[0x10]; // 0x2e0(0x10)
	struct FPostProcessSettings Settings; // 0x2f0(0x540)
	float Priority; // 0x830(0x04)
	float BlendRadius; // 0x834(0x04)
	float BlendWeight; // 0x838(0x04)
	char bEnabled : 1; // 0x83c(0x01)
	char bUnbound : 1; // 0x83c(0x01)
	char UnknownData_83C_2 : 6; // 0x83c(0x01)
	char UnknownData_83D[0x3]; // 0x83d(0x03)

	void AddOrUpdateBlendable(TScriptInterface<struct UBlendableInterface> InBlendableObject, float InWeight); // Function Engine.PostProcessComponent.AddOrUpdateBlendable // Final|Native|Public|BlueprintCallable // @ game+0x2ee4600
};

// Class Engine.Texture
// Size: 0x138 (Inherited: 0x28)
struct UTexture : UObject {
	int32_t LODBias; // 0x28(0x04)
	int32_t NumCinematicMipLevels; // 0x2c(0x04)
	char SRGB : 1; // 0x30(0x01)
	char NeverStream : 1; // 0x30(0x01)
	char bNoTiling : 1; // 0x30(0x01)
	char bUseCinematicMipLevels : 1; // 0x30(0x01)
	char CompressionNone : 1; // 0x30(0x01)
	char bUAV : 1; // 0x30(0x01)
	char UnknownData_30_6 : 2; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	uint32_t MaxQualityReduction; // 0x34(0x04)
	int32_t CachedCombinedLODBias; // 0x38(0x04)
	char bAsyncResourceReleaseHasBeenStarted : 1; // 0x3c(0x01)
	char UnknownData_3C_1 : 7; // 0x3c(0x01)
	char UnknownData_3D[0x3]; // 0x3d(0x03)
	char CompressionSettings; // 0x40(0x01)
	char Filter; // 0x41(0x01)
	char LODGroup; // 0x42(0x01)
	char UnknownData_43[0x1]; // 0x43(0x01)
	float StreamingPriorityBoost; // 0x44(0x04)
	char UnknownData_48[0x58]; // 0x48(0x58)
	struct TArray<struct FExternalMip> ExternalMips; // 0xa0(0x10)
	char UnknownData_B0[0x88]; // 0xb0(0x88)
};

// Class Engine.TextureRenderTarget
// Size: 0x140 (Inherited: 0x138)
struct UTextureRenderTarget : UTexture {
	float TargetGamma; // 0x138(0x04)
	char UnknownData_13C[0x4]; // 0x13c(0x04)
};

// Class Engine.TextureRenderTarget2D
// Size: 0x168 (Inherited: 0x140)
struct UTextureRenderTarget2D : UTextureRenderTarget {
	int32_t SizeX; // 0x140(0x04)
	int32_t SizeY; // 0x144(0x04)
	struct FLinearColor ClearColor; // 0x148(0x10)
	char AddressX; // 0x158(0x01)
	char AddressY; // 0x159(0x01)
	char UnknownData_15A[0x2]; // 0x15a(0x02)
	char bForceLinearGamma : 1; // 0x15c(0x01)
	char bHDR : 1; // 0x15c(0x01)
	char bAutoGenerateMips : 1; // 0x15c(0x01)
	char UnknownData_15C_3 : 5; // 0x15c(0x01)
	char UnknownData_15D[0x3]; // 0x15d(0x03)
	char OverrideFormat; // 0x160(0x01)
	bool bDontClearOnCreation; // 0x161(0x01)
	char UnknownData_162[0x6]; // 0x162(0x06)
};

// Class Engine.DebugCameraController
// Size: 0x7c0 (Inherited: 0x770)
struct ADebugCameraController : APlayerController {
	char bUseOriginalPlayerHUD : 1; // 0x770(0x01)
	char bShowSelectedInfo : 1; // 0x770(0x01)
	char bIsFrozenRendering : 1; // 0x770(0x01)
	char UnknownData_770_3 : 5; // 0x770(0x01)
	char UnknownData_771[0x7]; // 0x771(0x07)
	struct UDrawFrustumComponent* DrawFrustum; // 0x778(0x08)
	char UnknownData_780[0x10]; // 0x780(0x10)
	struct APlayerController* OriginalControllerRef; // 0x790(0x08)
	struct UPlayer* OriginalPlayer; // 0x798(0x08)
	float SpeedScale; // 0x7a0(0x04)
	float InitialMaxSpeed; // 0x7a4(0x04)
	float InitialAccel; // 0x7a8(0x04)
	float InitialDecel; // 0x7ac(0x04)
	float SpeedScaleAdjustment; // 0x7b0(0x04)
	float FovScaleAdjustment; // 0x7b4(0x04)
	char UnknownData_7B8[0x8]; // 0x7b8(0x08)

	void ToggleDisplay(); // Function Engine.DebugCameraController.ToggleDisplay // Final|Native|Public|BlueprintCallable // @ game+0x2deb940
	void ShowDebugSelectedInfo(); // Function Engine.DebugCameraController.ShowDebugSelectedInfo // Exec|Native|Public // @ game+0x2deb370
	void IncreaseFOV(); // Function Engine.DebugCameraController.IncreaseFOV // Final|Native|Public|BlueprintCallable // @ game+0x2de1970
	void IncreaseCameraSpeed(); // Function Engine.DebugCameraController.IncreaseCameraSpeed // Final|Native|Public|BlueprintCallable // @ game+0x2de1950
	void DecreaseFOV(); // Function Engine.DebugCameraController.DecreaseFOV // Final|Native|Public|BlueprintCallable // @ game+0x2dda640
	void DecreaseCameraSpeed(); // Function Engine.DebugCameraController.DecreaseCameraSpeed // Final|Native|Public|BlueprintCallable // @ game+0x2dda620
};

// Class Engine.HUD
// Size: 0x4c0 (Inherited: 0x3c8)
struct AHUD : AActor {
	struct FColor WhiteColor; // 0x3c8(0x04)
	struct FColor GreenColor; // 0x3cc(0x04)
	struct FColor RedColor; // 0x3d0(0x04)
	char UnknownData_3D4[0x4]; // 0x3d4(0x04)
	struct APlayerController* PlayerOwner; // 0x3d8(0x08)
	char bLostFocusPaused : 1; // 0x3e0(0x01)
	char bShowHUD : 1; // 0x3e0(0x01)
	char bShowDebugInfo : 1; // 0x3e0(0x01)
	char bShowHitBoxDebugInfo : 1; // 0x3e0(0x01)
	char bShowOverlays : 1; // 0x3e0(0x01)
	char bEnableDebugTextShadow : 1; // 0x3e0(0x01)
	char UnknownData_3E0_6 : 2; // 0x3e0(0x01)
	char UnknownData_3E1[0x7]; // 0x3e1(0x07)
	struct TArray<struct AActor*> PostRenderedActors; // 0x3e8(0x10)
	float LastHUDRenderTime; // 0x3f8(0x04)
	float RenderDelta; // 0x3fc(0x04)
	struct TArray<struct FName> DebugDisplay; // 0x400(0x10)
	struct TArray<struct FName> ToggledDebugCategories; // 0x410(0x10)
	struct UCanvas* Canvas; // 0x420(0x08)
	struct UCanvas* DebugCanvas; // 0x428(0x08)
	struct TArray<struct FDebugTextInfo> DebugTextList; // 0x430(0x10)
	struct UClass* ShowDebugTargetDesiredClass; // 0x440(0x08)
	struct AActor* ShowDebugTargetActor; // 0x448(0x08)
	char UnknownData_450[0x70]; // 0x450(0x70)

	void ShowHUD(); // Function Engine.HUD.ShowHUD // Exec|Native|Public // @ game+0x2deb410
	void ShowDebugToggleSubCategory(struct FName Category); // Function Engine.HUD.ShowDebugToggleSubCategory // Final|Exec|Native|Public // @ game+0x2deb390
	void ShowDebugForReticleTargetToggle(struct UClass* DesiredClass); // Function Engine.HUD.ShowDebugForReticleTargetToggle // Final|Exec|Native|Public // @ game+0x2deb2f0
	void ShowDebug(struct FName DebugType); // Function Engine.HUD.ShowDebug // Exec|Native|Public // @ game+0x2deb260
	void RemoveDebugText(struct AActor* SrcActor, bool bLeaveDurationText); // Function Engine.HUD.RemoveDebugText // Final|Net|NetReliableNative|Event|Public|NetClient // @ game+0x2de41c0
	void RemoveAllDebugStrings(); // Function Engine.HUD.RemoveAllDebugStrings // Final|Net|NetReliableNative|Event|Public|NetClient // @ game+0x2de41a0
	void ReceiveHitBoxRelease(struct FName BoxName); // Function Engine.HUD.ReceiveHitBoxRelease // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceiveHitBoxEndCursorOver(struct FName BoxName); // Function Engine.HUD.ReceiveHitBoxEndCursorOver // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceiveHitBoxClick(struct FName BoxName); // Function Engine.HUD.ReceiveHitBoxClick // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceiveHitBoxBeginCursorOver(struct FName BoxName); // Function Engine.HUD.ReceiveHitBoxBeginCursorOver // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceiveDrawHUD(int32_t SizeX, int32_t SizeY); // Function Engine.HUD.ReceiveDrawHUD // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x188c2f0
	struct FVector Project(struct FVector Location); // Function Engine.HUD.Project // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2de3b60
	void GetTextSize(struct FString Text, float OutWidth, float OutHeight, struct UFont* Font, float Scale); // Function Engine.HUD.GetTextSize // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2de07c0
	struct APlayerController* GetOwningPlayerController(); // Function Engine.HUD.GetOwningPlayerController // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x2dde680
	struct APawn* GetOwningPawn(); // Function Engine.HUD.GetOwningPawn // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x2dde650
	void GetActorsInSelectionRectangle(struct UClass* ClassFilter, struct FVector2D FirstPoint, struct FVector2D SecondPoint, struct TArray<struct AActor*> OutActors, bool bIncludeNonCollidingComponents, bool bActorMustBeFullyEnclosed); // Function Engine.HUD.GetActorsInSelectionRectangle // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ddc450
	void DrawTextureSimple(struct UTexture* Texture, float ScreenX, float ScreenY, float Scale, bool bScalePosition); // Function Engine.HUD.DrawTextureSimple // Final|Native|Public|BlueprintCallable // @ game+0x2ddba50
	void DrawTexture(struct UTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, struct FLinearColor TintColor, char BlendMode, float Scale, bool bScalePosition, float Rotation, struct FVector2D RotPivot); // Function Engine.HUD.DrawTexture // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ddb630
	void DrawText(struct FString Text, struct FLinearColor TextColor, float ScreenX, float ScreenY, struct UFont* Font, float Scale, bool bScalePosition); // Function Engine.HUD.DrawText // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ddb3f0
	void DrawRect(struct FLinearColor RectColor, float ScreenX, float ScreenY, float ScreenW, float ScreenH); // Function Engine.HUD.DrawRect // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ddb240
	void DrawMaterialTriangle(struct UMaterialInterface* Material, struct FVector2D V0_Pos, struct FVector2D V1_Pos, struct FVector2D V2_Pos, struct FVector2D V0_UV, struct FVector2D V1_UV, struct FVector2D V2_UV, struct FLinearColor V0_Color, struct FLinearColor V1_Color, struct FLinearColor V2_Color); // Function Engine.HUD.DrawMaterialTriangle // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ddaf80
	void DrawMaterialSimple(struct UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale, bool bScalePosition); // Function Engine.HUD.DrawMaterialSimple // Final|Native|Public|BlueprintCallable // @ game+0x2ddad80
	void DrawMaterial(struct UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, bool bScalePosition, float Rotation, struct FVector2D RotPivot); // Function Engine.HUD.DrawMaterial // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2dda9f0
	void DrawLine(float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, struct FLinearColor LineColor); // Function Engine.HUD.DrawLine // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2dda840
	void Deproject(float ScreenX, float ScreenY, struct FVector WorldPosition, struct FVector WorldDirection); // Function Engine.HUD.Deproject // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2dda660
	void AddHitBox(struct FVector2D Position, struct FVector2D Size, struct FName InName, bool bConsumesInput, int32_t Priority); // Function Engine.HUD.AddHitBox // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2dd8a20
	void AddDebugText(struct FString DebugText, struct AActor* SrcActor, float Duration, struct FVector Offset, struct FVector DesiredOffset, struct FColor TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, struct UFont* InFont, float FontScale, bool bDrawShadow); // Function Engine.HUD.AddDebugText // Final|Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0x2dd8270
};

// Class Engine.FeatureToggledStringAssetReference
// Size: 0x40 (Inherited: 0x28)
struct UFeatureToggledStringAssetReference : UDataAsset {
	struct TArray<struct FFeatureToggledStringAssetReferenceEntry> Entries; // 0x28(0x10)
	struct UClass* ClassType; // 0x38(0x08)
};

// Class Engine.LevelScriptActor
// Size: 0x3d0 (Inherited: 0x3c8)
struct ALevelScriptActor : AActor {
	char bInputEnabled : 1; // 0x3c8(0x01)
	char UnknownData_3C8_1 : 7; // 0x3c8(0x01)
	char UnknownData_3C9[0x7]; // 0x3c9(0x07)

	void WorldOriginLocationChanged(struct FIntVector OldOriginLocation, struct FIntVector NewOriginLocation); // Function Engine.LevelScriptActor.WorldOriginLocationChanged // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning); // Function Engine.LevelScriptActor.SetCinematicMode // Native|Public|BlueprintCallable // @ game+0x2de6530
	bool RemoteEvent(struct FName EventName); // Function Engine.LevelScriptActor.RemoteEvent // Native|Public|BlueprintCallable // @ game+0x2de4100
	void MatchStarted(); // Function Engine.LevelScriptActor.MatchStarted // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void LevelReset(); // Function Engine.LevelScriptActor.LevelReset // BlueprintAuthorityOnly|Event|Public|BlueprintEvent // @ game+0x188c2f0
	void InitialNetRelevantActorsCreated(); // Function Engine.LevelScriptActor.InitialNetRelevantActorsCreated // Event|Public|BlueprintEvent // @ game+0x188c2f0
};

// Class Engine.ArrowComponent
// Size: 0x5d0 (Inherited: 0x5c0)
struct UArrowComponent : UPrimitiveComponent {
	struct FColor ArrowColor; // 0x5b8(0x04)
	float ArrowSize; // 0x5bc(0x04)
	bool bIsScreenSizeScaled; // 0x5c0(0x01)
	float ScreenSize; // 0x5c4(0x04)
	char bTreatAsASprite : 1; // 0x5c8(0x01)
	char UnknownData_5CD_1 : 7; // 0x5cd(0x01)
	char UnknownData_5CE[0x2]; // 0x5ce(0x02)

	void SetArrowColor_New(struct FLinearColor NewColor); // Function Engine.ArrowComponent.SetArrowColor_New // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ef13d0
	void SetArrowColor_DEPRECATED(struct FColor NewColor); // Function Engine.ArrowComponent.SetArrowColor_DEPRECATED // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ef1350
};

// Class Engine.MeshComponent
// Size: 0x5d0 (Inherited: 0x5c0)
struct UMeshComponent : UPrimitiveComponent {
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x5b8(0x10)

	void ResetDefaultMaterials(); // Function Engine.MeshComponent.ResetDefaultMaterials // Final|Native|Public|BlueprintCallable // @ game+0x2de42d0
	struct TArray<struct UMaterialInterface*> GetMaterials(); // Function Engine.MeshComponent.GetMaterials // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2dddd90
};

// Class Engine.StaticMeshComponent
// Size: 0x620 (Inherited: 0x5d0)
struct UStaticMeshComponent : UMeshComponent {
	int32_t ForcedLodModel; // 0x5c8(0x04)
	bool bOverrideMinLOD; // 0x5cc(0x01)
	bool bOverrideNavigationToDefaultObstacle; // 0x5cd(0x01)
	int32_t MinLOD; // 0x5d0(0x04)
	struct UStaticMesh* StaticMesh; // 0x5d8(0x08)
	bool bOverrideWireframeColor; // 0x5e0(0x01)
	char UnknownData_5E3[0x1]; // 0x5e3(0x01)
	struct FColor WireframeColorOverride; // 0x5e4(0x04)
	char bIgnoreInstanceForTextureStreaming : 1; // 0x5e8(0x01)
	char bOverrideLightMapRes : 1; // 0x5e8(0x01)
	char UnknownData_5E8_2 : 6; // 0x5e8(0x01)
	char UnknownData_5E9[0x3]; // 0x5e9(0x03)
	int32_t OverriddenLightMapRes; // 0x5ec(0x04)
	float StreamingDistanceMultiplier; // 0x5f0(0x04)
	char UnknownData_5F4[0x4]; // 0x5f4(0x04)
	struct TArray<struct FGuid> IrrelevantLights; // 0x5f8(0x10)
	struct TArray<struct FStaticMeshComponentLODInfo> LODData; // 0x608(0x10)
	struct UMaterialInterface* CustomDepthMaterial; // 0x618(0x08)

	bool SetStaticMesh(struct UStaticMesh* NewMesh); // Function Engine.StaticMeshComponent.SetStaticMesh // Native|Public|BlueprintCallable // @ game+0x2ef6d10
	void SetForcedLodModel(int32_t NewForcedLodModel); // Function Engine.StaticMeshComponent.SetForcedLodModel // Final|Native|Public|BlueprintCallable // @ game+0x2ef4000
	void SetCustomDepthMaterial(struct UMaterialInterface* Material); // Function Engine.StaticMeshComponent.SetCustomDepthMaterial // Final|Native|Public|BlueprintCallable // @ game+0x2ef2bf0
	void OnRep_StaticMesh(struct UStaticMesh* OldStaticMesh); // Function Engine.StaticMeshComponent.OnRep_StaticMesh // Final|Native|Public // @ game+0x2eee410
	void GetLocalBounds(struct FVector Min, struct FVector Max); // Function Engine.StaticMeshComponent.GetLocalBounds // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2eeaed0
	struct UMaterialInterface* GetCustomDepthMaterial(); // Function Engine.StaticMeshComponent.GetCustomDepthMaterial // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ee9c10
};

// Class Engine.FogVolume
// Size: 0x3d8 (Inherited: 0x3c8)
struct AFogVolume : AActor {
	struct USphereComponent* SphereComponent; // 0x3c8(0x08)
	struct UFogVolumeComponent* FogVolumeComponent; // 0x3d0(0x08)

	void SetScaleWithLighting(bool bScaleWithLighting); // Function Engine.FogVolume.SetScaleWithLighting // Final|Native|Public|BlueprintCallable // @ game+0x2dea310
};

// Class Engine.ThreadedActor
// Size: 0x3c8 (Inherited: 0x3c8)
struct AThreadedActor : AActor {
};

// Class Engine.MaterialInterface
// Size: 0x58 (Inherited: 0x28)
struct UMaterialInterface : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct USubsurfaceProfile* SubsurfaceProfile; // 0x30(0x08)
	char UnknownData_38[0x4]; // 0x38(0x04)
	struct FLightmassMaterialInterfaceSettings LightmassSettings; // 0x3c(0x14)
	char UnknownData_50[0x8]; // 0x50(0x08)

	struct UPhysicalMaterial* GetPhysicalMaterial(); // Function Engine.MaterialInterface.GetPhysicalMaterial // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddec30
	struct UMaterial* GetBaseMaterial(); // Function Engine.MaterialInterface.GetBaseMaterial // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ddc790
};

// Class Engine.Material
// Size: 0xa18 (Inherited: 0x58)
struct UMaterial : UMaterialInterface {
	struct UPhysicalMaterial* PhysMaterial; // 0x58(0x08)
	struct FColorMaterialInput DiffuseColor; // 0x60(0x40)
	struct FColorMaterialInput SpecularColor; // 0xa0(0x40)
	struct FColorMaterialInput BaseColor; // 0xe0(0x40)
	struct FScalarMaterialInput Metallic; // 0x120(0x40)
	struct FScalarMaterialInput Specular; // 0x160(0x40)
	struct FScalarMaterialInput Roughness; // 0x1a0(0x40)
	struct FVectorMaterialInput Normal; // 0x1e0(0x48)
	struct FColorMaterialInput EmissiveColor; // 0x228(0x40)
	struct FScalarMaterialInput Opacity; // 0x268(0x40)
	struct FScalarMaterialInput OpacityMask; // 0x2a8(0x40)
	char MaterialDomain; // 0x2e8(0x01)
	char BlendMode; // 0x2e9(0x01)
	char DecalBlendMode; // 0x2ea(0x01)
	bool bDecalNoEmissiveOrRoughness; // 0x2eb(0x01)
	bool bDecalEnableStencil; // 0x2ec(0x01)
	char MaterialDecalResponse; // 0x2ed(0x01)
	char ShadingModel; // 0x2ee(0x01)
	char UnknownData_2EF[0x1]; // 0x2ef(0x01)
	float OpacityMaskClipValue; // 0x2f0(0x04)
	float DepthWeightScale; // 0x2f4(0x04)
	float DepthWeightExponent; // 0x2f8(0x04)
	float DepthWeightBase; // 0x2fc(0x04)
	char bBlendedOITAfterTranslucency : 1; // 0x300(0x01)
	char bForceResolution : 1; // 0x300(0x01)
	char UnknownData_300_2 : 6; // 0x300(0x01)
	char UnknownData_301[0x3]; // 0x301(0x03)
	char ForcedResolution; // 0x304(0x01)
	char UnknownData_305[0x3]; // 0x305(0x03)
	float FirstSplitDistance; // 0x308(0x04)
	float SecondSplitDistance; // 0x30c(0x04)
	float FullResInFrontMaxDistance; // 0x310(0x04)
	char FullResInFront : 1; // 0x314(0x01)
	char PopPerParticle : 1; // 0x314(0x01)
	char UnknownData_314_2 : 6; // 0x314(0x01)
	char UnknownData_315[0x3]; // 0x315(0x03)
	struct FVectorMaterialInput WorldPositionOffset; // 0x318(0x48)
	struct FVectorMaterialInput WorldDisplacement; // 0x360(0x48)
	struct FScalarMaterialInput TessellationMultiplier; // 0x3a8(0x40)
	struct FColorMaterialInput SubsurfaceColor; // 0x3e8(0x40)
	struct FScalarMaterialInput ClearCoat; // 0x428(0x40)
	struct FScalarMaterialInput ClearCoatRoughness; // 0x468(0x40)
	struct FScalarMaterialInput AmbientOcclusion; // 0x4a8(0x40)
	struct FScalarMaterialInput Refraction; // 0x4e8(0x40)
	struct FColorMaterialInput BillboardColor; // 0x528(0x40)
	struct FVectorMaterialInput BillboardParams; // 0x568(0x48)
	struct FVector2MaterialInput CustomizedUVs[0x08]; // 0x5b0(0x240)
	struct FMaterialAttributesInput MaterialAttributes; // 0x7f0(0x38)
	char UnknownData_828[0x10]; // 0x828(0x10)
	struct FScalarMaterialInput PixelDepthOffset; // 0x838(0x40)
	char bTranslucentBeforeTranslucency : 1; // 0x878(0x01)
	char bTranslucentBeforeVolumeFog : 1; // 0x878(0x01)
	char bTranslucentWithDepthWrite : 1; // 0x878(0x01)
	char bEnableSeparateTranslucency : 1; // 0x878(0x01)
	char bEnableResponsiveAA : 1; // 0x878(0x01)
	char bScreenSpaceReflections : 1; // 0x878(0x01)
	char TwoSided : 1; // 0x878(0x01)
	char DitheredLODTransition : 1; // 0x878(0x01)
	char UnknownData_879[0x3]; // 0x879(0x03)
	char ConstantMaterial; // 0x87c(0x01)
	char UnknownData_87D[0x3]; // 0x87d(0x03)
	float SkyLightWhenOccluded; // 0x880(0x04)
	float CloudShadowsInfluence; // 0x884(0x04)
	int32_t NumCustomizedUVs; // 0x888(0x04)
	char TranslucencyLightingMode; // 0x88c(0x01)
	char UnknownData_88D[0x3]; // 0x88d(0x03)
	float TranslucencyDirectionalLightingIntensity; // 0x890(0x04)
	float LightColorInfluence; // 0x894(0x04)
	float AmbientLightColorInfluence; // 0x898(0x04)
	float LightIntensityInfluence; // 0x89c(0x04)
	float AmbientLightIntensityInfluence; // 0x8a0(0x04)
	float AlternativeAmbientLightColorInfluence; // 0x8a4(0x04)
	float AlternativeAmbientLightIntensityInfluence; // 0x8a8(0x04)
	char bEvaluateLightningAtParticleCenter : 1; // 0x8ac(0x01)
	char UnknownData_8AC_1 : 7; // 0x8ac(0x01)
	char UnknownData_8AD[0x3]; // 0x8ad(0x03)
	float TranslucencyScaleForReflection; // 0x8b0(0x04)
	char bObjectFadeEnabled : 1; // 0x8b4(0x01)
	char UnknownData_8B4_1 : 7; // 0x8b4(0x01)
	char UnknownData_8B5[0x3]; // 0x8b5(0x03)
	float ObjectFadeRate; // 0x8b8(0x04)
	float ObjectFadeDistanceThreshold; // 0x8bc(0x04)
	float TranslucentShadowDensityScale; // 0x8c0(0x04)
	float TranslucentSelfShadowDensityScale; // 0x8c4(0x04)
	float TranslucentSelfShadowSecondDensityScale; // 0x8c8(0x04)
	float TranslucentSelfShadowSecondOpacity; // 0x8cc(0x04)
	float TranslucentBackscatteringExponent; // 0x8d0(0x04)
	struct FLinearColor TranslucentMultipleScatteringExtinction; // 0x8d4(0x10)
	float TranslucentShadowStartOffset; // 0x8e4(0x04)
	float VolumeFogScale; // 0x8e8(0x04)
	char DistanceFog : 1; // 0x8ec(0x01)
	char bDisableDepthTest : 1; // 0x8ec(0x01)
	char bGenerateSphericalParticleNormals : 1; // 0x8ec(0x01)
	char bDontRenderWhenPlayerInsideShip : 1; // 0x8ec(0x01)
	char bTangentSpaceNormal : 1; // 0x8ec(0x01)
	char bUseEmissiveForDynamicAreaLighting : 1; // 0x8ec(0x01)
	char bBlockGI : 1; // 0x8ec(0x01)
	char bUsedAsSpecialEngineMaterial : 1; // 0x8ec(0x01)
	char bUsedWithSkeletalMesh : 1; // 0x8ed(0x01)
	char bUsedWithEditorCompositing : 1; // 0x8ed(0x01)
	char bUsedWithLandscape : 1; // 0x8ed(0x01)
	char bUsedWithParticleSprites : 1; // 0x8ed(0x01)
	char bUsedWithCPUParticleSprites : 1; // 0x8ed(0x01)
	char bUsedWithStaticMesh : 1; // 0x8ed(0x01)
	char bUsedWithCoverage : 1; // 0x8ed(0x01)
	char bUsedWithGPUInstanceCulling : 1; // 0x8ed(0x01)
	char bUsedWithBeamTrails : 1; // 0x8ee(0x01)
	char bUsedWithMeshParticles : 1; // 0x8ee(0x01)
	char bUsedWithStaticLighting : 1; // 0x8ee(0x01)
	char bUsedWithFluidSurfaces : 1; // 0x8ee(0x01)
	char bUsedWithMorphTargets : 1; // 0x8ee(0x01)
	char bUsedWithSplineMeshes : 1; // 0x8ee(0x01)
	char bUsedWithInstancedStaticMeshes : 1; // 0x8ee(0x01)
	char bUsesDistortion : 1; // 0x8ee(0x01)
	char bUsedWithClothing : 1; // 0x8ef(0x01)
	char bUsedWithDeformables : 1; // 0x8ef(0x01)
	char bUsedWithFFTWaterMask : 1; // 0x8ef(0x01)
	char bUsedWithVolumeFogMask : 1; // 0x8ef(0x01)
	char bUsedWithDynamicObjectFading : 1; // 0x8ef(0x01)
	char bUsedWithWaterBoundary : 1; // 0x8ef(0x01)
	char bUsedWithClouds : 1; // 0x8ef(0x01)
	char bUsedWithInstancedRopes : 1; // 0x8ef(0x01)
	char bUsedWithPlanarReflection : 1; // 0x8f0(0x01)
	char bUsedWithPointLightShadows : 1; // 0x8f0(0x01)
	char bUsedWithMaskPass : 1; // 0x8f0(0x01)
	char bUsedWithUI : 1; // 0x8f0(0x01)
	char bAutomaticallySetUsageInEditor : 1; // 0x8f0(0x01)
	char bAllowEmissiveOnLandscape : 1; // 0x8f0(0x01)
	char bApplyWaterMask : 1; // 0x8f0(0x01)
	char bUseReZ : 1; // 0x8f0(0x01)
	char bFullyRough : 1; // 0x8f1(0x01)
	char bUseLightmapDirectionality : 1; // 0x8f1(0x01)
	char UnknownData_8F1_2 : 6; // 0x8f1(0x01)
	char UnknownData_8F2[0x2]; // 0x8f2(0x02)
	char GeometryMode; // 0x8f4(0x01)
	char D3D11TessellationMode; // 0x8f5(0x01)
	char UnknownData_8F6[0x2]; // 0x8f6(0x02)
	char bEnableCrackFreeDisplacement : 1; // 0x8f8(0x01)
	char bEnableAdaptiveTessellation : 1; // 0x8f8(0x01)
	char UnknownData_8F8_2 : 6; // 0x8f8(0x01)
	char UnknownData_8F9[0x3]; // 0x8f9(0x03)
	float MaxDisplacement; // 0x8fc(0x04)
	char Wireframe : 1; // 0x900(0x01)
	char bOutputVelocityOnBasePass : 1; // 0x900(0x01)
	char UnknownData_900_2 : 6; // 0x900(0x01)
	char UnknownData_901[0x3]; // 0x901(0x03)
	float NormalOffsetShadowBiasScale; // 0x904(0x04)
	int32_t EditorX; // 0x908(0x04)
	int32_t EditorY; // 0x90c(0x04)
	int32_t EditorPitch; // 0x910(0x04)
	int32_t EditorYaw; // 0x914(0x04)
	struct TArray<struct UMaterialExpression*> Expressions; // 0x918(0x10)
	struct TArray<struct FMaterialFunctionInfo> MaterialFunctionInfos; // 0x928(0x10)
	struct TArray<struct FMaterialParameterCollectionInfo> MaterialParameterCollectionInfos; // 0x938(0x10)
	char bCanMaskedBeAssumedOpaque : 1; // 0x948(0x01)
	char bIsMasked : 1; // 0x948(0x01)
	char bIsPreviewMaterial : 1; // 0x948(0x01)
	char bUseMaterialAttributes : 1; // 0x948(0x01)
	char bUseTranslucencyVertexFog : 1; // 0x948(0x01)
	char bUseDensityMapOnTranslucencyVertexFog : 1; // 0x948(0x01)
	char bAllowDevelopmentShaderCompile : 1; // 0x948(0x01)
	char bIsMaterialEditorStatsMaterial : 1; // 0x948(0x01)
	char UnknownData_949[0x3]; // 0x949(0x03)
	uint32_t UsageFlagWarnings; // 0x94c(0x04)
	char BlendableLocation; // 0x950(0x01)
	char UnknownData_951[0x3]; // 0x951(0x03)
	int32_t BlendablePriority; // 0x954(0x04)
	char bIsAlphaBlended : 1; // 0x958(0x01)
	char UnknownData_958_1 : 7; // 0x958(0x01)
	char UnknownData_959[0x3]; // 0x959(0x03)
	float RefractionDepthBias; // 0x95c(0x04)
	struct FGuid StateId; // 0x960(0x10)
	int32_t UnwrappedUVSet; // 0x970(0x04)
	char UnknownData_974[0x8c]; // 0x974(0x8c)
	struct TArray<struct UTexture*> ExpressionTextureReferences; // 0xa00(0x10)
	char UnknownData_A10[0x8]; // 0xa10(0x08)
};

// Class Engine.CameraModifier
// Size: 0x48 (Inherited: 0x28)
struct UCameraModifier : UObject {
	char bDebug : 1; // 0x28(0x01)
	char bExclusive : 1; // 0x28(0x01)
	char UnknownData_28_2 : 6; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	char Priority; // 0x2c(0x01)
	char UnknownData_2D[0x3]; // 0x2d(0x03)
	struct APlayerCameraManager* CameraOwner; // 0x30(0x08)
	float AlphaInTime; // 0x38(0x04)
	float AlphaOutTime; // 0x3c(0x04)
	float Alpha; // 0x40(0x04)
	char bAutoDestroyOnCompletion : 1; // 0x44(0x01)
	char UnknownData_44_1 : 7; // 0x44(0x01)
	char UnknownData_45[0x3]; // 0x45(0x03)

	bool IsDisabled(); // Function Engine.CameraModifier.IsDisabled // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x300c3f0
	struct AActor* GetViewTarget(); // Function Engine.CameraModifier.GetViewTarget // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x300a180
	void EnableModifier(); // Function Engine.CameraModifier.EnableModifier // Native|Public|BlueprintCallable // @ game+0x30048c0
	void DisableModifier(bool bImmediate); // Function Engine.CameraModifier.DisableModifier // Native|Public|BlueprintCallable // @ game+0x3001bc0
	void BlueprintModifyPostProcess(float DeltaTime, float PostProcessBlendWeight, struct FPostProcessSettings PostProcessSettings); // Function Engine.CameraModifier.BlueprintModifyPostProcess // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x188c2f0
	void BlueprintModifyCamera(float DeltaTime, struct FVector ViewLocation, struct FRotator ViewRotation, float FOV, struct FVector NewViewLocation, struct FRotator NewViewRotation, float NewFOV); // Function Engine.CameraModifier.BlueprintModifyCamera // BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x188c2f0
};

// Class Engine.PhysicsVolume
// Size: 0x410 (Inherited: 0x400)
struct APhysicsVolume : AVolume {
	float TerminalVelocity; // 0x400(0x04)
	int32_t Priority; // 0x404(0x04)
	float FluidFriction; // 0x408(0x04)
	char bWaterVolume : 1; // 0x40c(0x01)
	char bPhysicsOnContact : 1; // 0x40c(0x01)
	char UnknownData_40C_2 : 6; // 0x40c(0x01)
	char UnknownData_40D[0x3]; // 0x40d(0x03)
};

// Class Engine.ParticleSystemComponent
// Size: 0x8b0 (Inherited: 0x5c0)
struct UParticleSystemComponent : UPrimitiveComponent {
	struct UParticleSystem* Template; // 0x5b8(0x08)
	struct TArray<struct UMaterialInterface*> EmitterMaterials; // 0x5c0(0x10)
	struct TArray<struct USkeletalMeshComponent*> SkelMeshComponents; // 0x5d0(0x10)
	char UnknownData_5E8_0 : 6; // 0x5e8(0x01)
	char bResetOnDetach : 1; // 0x5e0(0x01)
	char bUpdateOnDedicatedServer : 1; // 0x5e0(0x01)
	struct TArray<struct FParticleSysParam> InstanceParameters; // 0x5e8(0x10)
	struct FParticleSysParam EmitterPointParameter; // 0x5f8(0x50)
	struct FMulticastDelegate OnParticleSpawn; // 0x648(0x10)
	struct FMulticastDelegate OnParticleBurst; // 0x658(0x10)
	struct FMulticastDelegate OnParticleDeath; // 0x668(0x10)
	struct FMulticastDelegate OnParticleCollide; // 0x678(0x10)
	struct FVector OldPosition; // 0x688(0x0c)
	struct FVector PartSysVelocity; // 0x694(0x0c)
	char UnknownData_6A1[0x17]; // 0x6a1(0x17)
	struct FVector CustomInheritedVelocity; // 0x6b8(0x0c)
	char UnknownData_6C4[0x14]; // 0x6c4(0x14)
	float CustomParameterDrivingCurves; // 0x6d8(0x04)
	struct FLinearColor ColourTint; // 0x6dc(0x10)
	float WarmUpTime; // 0x6ec(0x04)
	float WarmupTickRate; // 0x6f0(0x04)
	char bWarmingUp : 1; // 0x6f4(0x01)
	char UnknownData_6F4_1 : 7; // 0x6f4(0x01)
	char UnknownData_6F5[0x1b]; // 0x6f5(0x1b)
	float SecondsBeforeInactive; // 0x710(0x04)
	char UnknownData_714[0x8]; // 0x714(0x08)
	float MaxTimeBeforeForceUpdateTransform; // 0x71c(0x04)
	char UnknownData_720[0x4]; // 0x720(0x04)
	char bOverrideLODMethod : 1; // 0x724(0x01)
	char UnknownData_724_1 : 7; // 0x724(0x01)
	char UnknownData_725[0x3]; // 0x725(0x03)
	char LODMethod; // 0x728(0x01)
	char UnknownData_729[0x3]; // 0x729(0x03)
	char bSkipUpdateDynamicDataDuringTick : 1; // 0x72c(0x01)
	char UnknownData_72C_1 : 7; // 0x72c(0x01)
	char UnknownData_72D[0x3]; // 0x72d(0x03)
	struct TArray<struct FMaterialRelevance> CachedViewRelevanceFlags; // 0x730(0x10)
	char UnknownData_740[0x8]; // 0x740(0x08)
	struct TArray<struct UParticleSystemReplay*> ReplayClips; // 0x748(0x10)
	char UnknownData_758[0x60]; // 0x758(0x60)
	float CustomTimeDilation; // 0x7b8(0x04)
	char UnknownData_7BC[0x4]; // 0x7bc(0x04)
	struct FMulticastDelegate OnSystemFinished; // 0x7c0(0x10)
	char bUnbound : 1; // 0x7d0(0x01)
	char UnknownData_7D0_1 : 7; // 0x7d0(0x01)
	char UnknownData_7D1[0xdf]; // 0x7d1(0xdf)

	void SetVectorParameter(struct FName ParameterName, struct FVector Param); // Function Engine.ParticleSystemComponent.SetVectorParameter // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2deaf80
	void SetTrailSourceData(struct FName InFirstSocketName, struct FName InSecondSocketName, char InWidthMode, float InWidth); // Function Engine.ParticleSystemComponent.SetTrailSourceData // Final|Native|Public|BlueprintCallable // @ game+0x2deabc0
	void SetTemplate(struct UParticleSystem* NewTemplate); // Function Engine.ParticleSystemComponent.SetTemplate // Final|Native|Public|BlueprintCallable // @ game+0x2deab40
	void SetMaterialParameter(struct FName ParameterName, struct UMaterialInterface* Param); // Function Engine.ParticleSystemComponent.SetMaterialParameter // Final|Native|Public|BlueprintCallable // @ game+0x2de9220
	void SetFloatParameter(struct FName ParameterName, float Param); // Function Engine.ParticleSystemComponent.SetFloatParameter // Final|Native|Public|BlueprintCallable // @ game+0x2de7ba0
	void SetEnableDistanceFading(bool bEnable); // Function Engine.ParticleSystemComponent.SetEnableDistanceFading // Final|Native|Public|BlueprintCallable // @ game+0x2de7890
	void SetEmitterEnable(struct FName EmitterName, bool bNewEnableState); // Function Engine.ParticleSystemComponent.SetEmitterEnable // Native|Public|BlueprintCallable // @ game+0x2de77c0
	void SetCustomLocalSpaceWorldSpace(); // Function Engine.ParticleSystemComponent.SetCustomLocalSpaceWorldSpace // Final|Native|Public|BlueprintCallable // @ game+0x2de7350
	void SetCustomLocalSpaceComponent(struct USceneComponent* InComponent); // Function Engine.ParticleSystemComponent.SetCustomLocalSpaceComponent // Final|Native|Public|BlueprintCallable // @ game+0x2de72d0
	void SetColorParameter(struct FName ParameterName, struct FLinearColor Param); // Function Engine.ParticleSystemComponent.SetColorParameter // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2de6ba0
	void SetBeamTargetTangent(int32_t EmitterIndex, struct FVector NewTangentPoint, int32_t TargetIndex); // Function Engine.ParticleSystemComponent.SetBeamTargetTangent // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2de5f20
	void SetBeamTargetStrength(int32_t EmitterIndex, float NewTargetStrength, int32_t TargetIndex); // Function Engine.ParticleSystemComponent.SetBeamTargetStrength // Native|Public|BlueprintCallable // @ game+0x2de5e20
	void SetBeamTargetPoint(int32_t EmitterIndex, struct FVector NewTargetPoint, int32_t TargetIndex); // Function Engine.ParticleSystemComponent.SetBeamTargetPoint // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2de5d10
	void SetBeamSourceTangent(int32_t EmitterIndex, struct FVector NewTangentPoint, int32_t SourceIndex); // Function Engine.ParticleSystemComponent.SetBeamSourceTangent // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2de5c00
	void SetBeamSourceStrength(int32_t EmitterIndex, float NewSourceStrength, int32_t SourceIndex); // Function Engine.ParticleSystemComponent.SetBeamSourceStrength // Native|Public|BlueprintCallable // @ game+0x2de5b00
	void SetBeamSourcePoint(int32_t EmitterIndex, struct FVector NewSourcePoint, int32_t SourceIndex); // Function Engine.ParticleSystemComponent.SetBeamSourcePoint // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2de59f0
	void SetBeamEndPoint(int32_t EmitterIndex, struct FVector NewEndPoint); // Function Engine.ParticleSystemComponent.SetBeamEndPoint // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2de5920
	void SetActorParameter(struct FName ParameterName, struct AActor* Param); // Function Engine.ParticleSystemComponent.SetActorParameter // Final|Native|Public|BlueprintCallable // @ game+0x2de45d0
	int32_t GetNumActiveParticles(); // Function Engine.ParticleSystemComponent.GetNumActiveParticles // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2dde130
	struct UMaterialInterface* GetNamedMaterial(struct FName InName); // Function Engine.ParticleSystemComponent.GetNamedMaterial // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2dddfc0
	void GenerateParticleEvent(struct FName InEventName, float InEmitterTime, struct FVector InLocation, struct FVector InDirection, struct FVector InVelocity); // Function Engine.ParticleSystemComponent.GenerateParticleEvent // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ddc1d0
	void EndTrails(); // Function Engine.ParticleSystemComponent.EndTrails // Final|Native|Public|BlueprintCallable // @ game+0x2ddbc20
	struct UMaterialInstanceDynamic* CreateNamedDynamicMaterialInstance(struct FName InName, struct UMaterialInterface* SourceMaterial); // Function Engine.ParticleSystemComponent.CreateNamedDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x2dda4a0
	void BeginTrails(struct FName InFirstSocketName, struct FName InSecondSocketName, char InWidthMode, float InWidth); // Function Engine.ParticleSystemComponent.BeginTrails // Final|Native|Public|BlueprintCallable // @ game+0x2dd9740
	void AddKillSphere(struct FVector4 KillSphere); // Function Engine.ParticleSystemComponent.AddKillSphere // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2dd8ee0
	void AddEmitterPoint(struct FVector4 Position, struct FVector4 InheritedVelocity, struct FVector4 Orientation, struct FVector Scale); // Function Engine.ParticleSystemComponent.AddEmitterPoint // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2dd8610
};

// Class Engine.SplineComponent
// Size: 0x640 (Inherited: 0x5c0)
struct USplineComponent : UPrimitiveComponent {
	struct FInterpCurveVector SplineInfo; // 0x5b8(0x18)
	struct FInterpCurveQuat SplineRotInfo; // 0x5d0(0x18)
	struct FInterpCurveVector SplineScaleInfo; // 0x5e8(0x18)
	struct FInterpCurveFloat SplineReparamTable; // 0x600(0x18)
	bool bAllowSplineEditingPerInstance; // 0x618(0x01)
	int32_t ReparamStepsPerSegment; // 0x61c(0x04)
	float Duration; // 0x620(0x04)
	bool bStationaryEndpoints; // 0x624(0x01)
	bool bSplineHasBeenEdited; // 0x625(0x01)
	bool bClosedLoop; // 0x626(0x01)
	struct FVector DefaultUpVector; // 0x628(0x0c)
	char UnknownData_638[0x8]; // 0x638(0x08)

	void SetWorldLocationAtSplinePoint(int32_t PointIndex, struct FVector InLocation); // Function Engine.SplineComponent.SetWorldLocationAtSplinePoint // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2deb0f0
	void SetUnselectedSplineSegmentColor(struct FLinearColor SegmentColor); // Function Engine.SplineComponent.SetUnselectedSplineSegmentColor // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2dead90
	void SetTangentAtSplinePoint(int32_t PointIndex, struct FVector InTangent, char CoordinateSpace); // Function Engine.SplineComponent.SetTangentAtSplinePoint // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2dea920
	void SetSplineWorldPoints(struct TArray<struct FVector> Points); // Function Engine.SplineComponent.SetSplineWorldPoints // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x2dea860
	void SetSplinePointType(int32_t PointIndex, char Type); // Function Engine.SplineComponent.SetSplinePointType // Final|Native|Public|BlueprintCallable // @ game+0x2dea6a0
	void SetSplinePoints(struct TArray<struct FVector> Points, char CoordinateSpace); // Function Engine.SplineComponent.SetSplinePoints // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x2dea760
	void SetSplineLocalPoints(struct TArray<struct FVector> Points); // Function Engine.SplineComponent.SetSplineLocalPoints // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x2dea5e0
	void SetSelectedSplineSegmentColor(struct FLinearColor SegmentColor); // Function Engine.SplineComponent.SetSelectedSplineSegmentColor // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2dea3a0
	void SetLocationAtSplinePoint(int32_t PointIndex, struct FVector InLocation, char CoordinateSpace); // Function Engine.SplineComponent.SetLocationAtSplinePoint // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2de8c20
	void SetDefaultUpVector(struct FVector UpVector, char CoordinateSpace); // Function Engine.SplineComponent.SetDefaultUpVector // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2de7650
	void SetClosedLoop(bool bInClosedLoop); // Function Engine.SplineComponent.SetClosedLoop // Final|Native|Public|BlueprintCallable // @ game+0x2de66f0
	bool IsClosedLoop(); // Function Engine.SplineComponent.IsClosedLoop // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de1b20
	struct FVector GetWorldTangentAtDistanceAlongSpline(float Distance); // Function Engine.SplineComponent.GetWorldTangentAtDistanceAlongSpline // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2de1680
	struct FRotator GetWorldRotationAtTime(float Time, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetWorldRotationAtTime // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2de1590
	struct FRotator GetWorldRotationAtDistanceAlongSpline(float Distance); // Function Engine.SplineComponent.GetWorldRotationAtDistanceAlongSpline // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2de14e0
	struct FVector GetWorldLocationAtTime(float Time, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetWorldLocationAtTime // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2de13f0
	struct FVector GetWorldLocationAtSplinePoint(int32_t PointIndex); // Function Engine.SplineComponent.GetWorldLocationAtSplinePoint // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2de1340
	struct FVector GetWorldLocationAtDistanceAlongSpline(float Distance); // Function Engine.SplineComponent.GetWorldLocationAtDistanceAlongSpline // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2de1290
	struct FVector GetWorldDirectionAtTime(float Time, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetWorldDirectionAtTime // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2de11a0
	struct FVector GetWorldDirectionAtDistanceAlongSpline(float Distance); // Function Engine.SplineComponent.GetWorldDirectionAtDistanceAlongSpline // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2de10f0
	struct FVector GetUpVectorAtTime(float Time, char CoordinateSpace, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetUpVectorAtTime // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2de0f90
	struct FVector GetUpVectorAtSplinePoint(int32_t PointIndex, char CoordinateSpace); // Function Engine.SplineComponent.GetUpVectorAtSplinePoint // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2de0ec0
	struct FVector GetUpVectorAtDistanceAlongSpline(float Distance, char CoordinateSpace); // Function Engine.SplineComponent.GetUpVectorAtDistanceAlongSpline // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2de0de0
	struct FTransform GetTransformAtTime(float Time, char CoordinateSpace, bool bUseConstantVelocity, bool bUseScale); // Function Engine.SplineComponent.GetTransformAtTime // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2de0c50
	struct FTransform GetTransformAtSplinePoint(int32_t PointIndex, char CoordinateSpace, bool bUseScale); // Function Engine.SplineComponent.GetTransformAtSplinePoint // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2de0b10
	struct FTransform GetTransformAtDistanceAlongSpline(float Distance, char CoordinateSpace, bool bUseScale); // Function Engine.SplineComponent.GetTransformAtDistanceAlongSpline // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2de09c0
	struct FVector GetTangentAtTime(float Time, char CoordinateSpace, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetTangentAtTime // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2de06a0
	struct FVector GetTangentAtSplinePoint(int32_t PointIndex, char CoordinateSpace); // Function Engine.SplineComponent.GetTangentAtSplinePoint // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2de05d0
	struct FVector GetTangentAtDistanceAlongSpline(float Distance, char CoordinateSpace); // Function Engine.SplineComponent.GetTangentAtDistanceAlongSpline // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2de04f0
	char GetSplinePointType(int32_t PointIndex); // Function Engine.SplineComponent.GetSplinePointType // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de0460
	float GetSplineLength(); // Function Engine.SplineComponent.GetSplineLength // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de0430
	struct FVector GetScaleAtTime(float Time, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetScaleAtTime // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2de0280
	struct FVector GetScaleAtSplinePoint(int32_t PointIndex); // Function Engine.SplineComponent.GetScaleAtSplinePoint // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2de01e0
	struct FVector GetScaleAtDistanceAlongSpline(float Distance); // Function Engine.SplineComponent.GetScaleAtDistanceAlongSpline // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2de0140
	struct FRotator GetRotationAtTime(float Time, char CoordinateSpace, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetRotationAtTime // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2de0020
	struct FRotator GetRotationAtSplinePoint(int32_t PointIndex, char CoordinateSpace); // Function Engine.SplineComponent.GetRotationAtSplinePoint // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddff50
	struct FRotator GetRotationAtDistanceAlongSpline(float Distance, char CoordinateSpace); // Function Engine.SplineComponent.GetRotationAtDistanceAlongSpline // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddfe70
	float GetRollAtTime(float Time, char CoordinateSpace, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetRollAtTime // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddfd60
	float GetRollAtSplinePoint(int32_t PointIndex, char CoordinateSpace); // Function Engine.SplineComponent.GetRollAtSplinePoint // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddfca0
	float GetRollAtDistanceAlongSpline(float Distance, char CoordinateSpace); // Function Engine.SplineComponent.GetRollAtDistanceAlongSpline // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddfbd0
	struct FVector GetRightVectorAtTime(float Time, char CoordinateSpace, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetRightVectorAtTime // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddfab0
	struct FVector GetRightVectorAtSplinePoint(int32_t PointIndex, char CoordinateSpace); // Function Engine.SplineComponent.GetRightVectorAtSplinePoint // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddf9e0
	struct FVector GetRightVectorAtDistanceAlongSpline(float Distance, char CoordinateSpace); // Function Engine.SplineComponent.GetRightVectorAtDistanceAlongSpline // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddf900
	struct FQuat GetQuaternionAtTime(float Time, char CoordinateSpace, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetQuaternionAtTime // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddf170
	struct FQuat GetQuaternionAtSplinePoint(int32_t PointIndex, char CoordinateSpace); // Function Engine.SplineComponent.GetQuaternionAtSplinePoint // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddf0a0
	struct FQuat GetQuaternionAtDistanceAlongSpline(float Distance, char CoordinateSpace); // Function Engine.SplineComponent.GetQuaternionAtDistanceAlongSpline // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddefc0
	int32_t GetNumberOfSplinePoints(); // Function Engine.SplineComponent.GetNumberOfSplinePoints // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2dde250
	struct FVector GetLocationAtTime(float Time, char CoordinateSpace, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetLocationAtTime // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2dddab0
	struct FVector GetLocationAtSplinePoint(int32_t PointIndex, char CoordinateSpace); // Function Engine.SplineComponent.GetLocationAtSplinePoint // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddd9e0
	struct FVector GetLocationAtDistanceAlongSpline(float Distance, char CoordinateSpace); // Function Engine.SplineComponent.GetLocationAtDistanceAlongSpline // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddd900
	void GetLocationAndTangentAtSplinePoint(int32_t PointIndex, struct FVector Location, struct FVector Tangent, char CoordinateSpace); // Function Engine.SplineComponent.GetLocationAndTangentAtSplinePoint // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddd790
	void GetLocalLocationAndTangentAtSplinePoint(int32_t PointIndex, struct FVector LocalLocation, struct FVector LocalTangent); // Function Engine.SplineComponent.GetLocalLocationAndTangentAtSplinePoint // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddd660
	float GetInputKeyAtDistanceAlongSpline(float Distance); // Function Engine.SplineComponent.GetInputKeyAtDistanceAlongSpline // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddd490
	float GetDistanceAlongSplineAtSplinePoint(int32_t PointIndex); // Function Engine.SplineComponent.GetDistanceAlongSplineAtSplinePoint // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddd2d0
	struct FVector GetDirectionAtTime(float Time, char CoordinateSpace, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetDirectionAtTime // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddd1b0
	struct FVector GetDirectionAtSplinePoint(int32_t PointIndex, char CoordinateSpace); // Function Engine.SplineComponent.GetDirectionAtSplinePoint // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddd0e0
	struct FVector GetDirectionAtDistanceAlongSpline(float Distance, char CoordinateSpace); // Function Engine.SplineComponent.GetDirectionAtDistanceAlongSpline // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddd000
	struct FVector GetDefaultUpVector(char CoordinateSpace); // Function Engine.SplineComponent.GetDefaultUpVector // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddcf60
	void ClearSplinePoints(); // Function Engine.SplineComponent.ClearSplinePoints // Final|Native|Public|BlueprintCallable // @ game+0x2dd9df0
	void AddSplineWorldPoint(struct FVector Position); // Function Engine.SplineComponent.AddSplineWorldPoint // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2dd9590
	void AddSplinePoint(struct FVector Position, char CoordinateSpace); // Function Engine.SplineComponent.AddSplinePoint // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2dd94b0
	void AddSplineLocalPoint(struct FVector Position); // Function Engine.SplineComponent.AddSplineLocalPoint // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2dd9420
};

// Class Engine.ShapeComponent
// Size: 0x5e0 (Inherited: 0x5c0)
struct UShapeComponent : UPrimitiveComponent {
	struct FColor ShapeColor; // 0x5b8(0x04)
	struct UBodySetup* ShapeBodySetup; // 0x5c0(0x08)
	char bDrawOnlyIfSelected : 1; // 0x5c8(0x01)
	char bShouldCollideWhenPlacing : 1; // 0x5c8(0x01)
	char bDynamicObstacle : 1; // 0x5c8(0x01)
	char UnknownData_5CC_3 : 5; // 0x5cc(0x01)
	char UnknownData_5CD[0x3]; // 0x5cd(0x03)
	struct UClass* AreaClass; // 0x5d0(0x08)
	char UnknownData_5D8[0x8]; // 0x5d8(0x08)
};

// Class Engine.CapsuleComponent
// Size: 0x5e0 (Inherited: 0x5e0)
struct UCapsuleComponent : UShapeComponent {
	float CapsuleHalfHeight; // 0x5d8(0x04)
	float CapsuleRadius; // 0x5dc(0x04)

	void SetCapsuleSize(float InRadius, float InHalfHeight, bool bUpdateOverlaps); // Function Engine.CapsuleComponent.SetCapsuleSize // Final|Native|Public|BlueprintCallable // @ game+0x2ef2580
	void SetCapsuleRadius(float Radius, bool bUpdateOverlaps); // Function Engine.CapsuleComponent.SetCapsuleRadius // Final|Native|Public|BlueprintCallable // @ game+0x2ef24b0
	void SetCapsuleHalfHeight(float HalfHeight, bool bUpdateOverlaps); // Function Engine.CapsuleComponent.SetCapsuleHalfHeight // Final|Native|Public|BlueprintCallable // @ game+0x2ef23e0
	void GetUnscaledCapsuleSize(float OutRadius, float OutHalfHeight); // Function Engine.CapsuleComponent.GetUnscaledCapsuleSize // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2eec960
	float GetUnscaledCapsuleRadius(); // Function Engine.CapsuleComponent.GetUnscaledCapsuleRadius // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eec940
	float GetUnscaledCapsuleHalfHeight(); // Function Engine.CapsuleComponent.GetUnscaledCapsuleHalfHeight // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eec920
	float GetShapeScale(); // Function Engine.CapsuleComponent.GetShapeScale // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eec140
	void GetScaledCapsuleSize(float OutRadius, float OutHalfHeight); // Function Engine.CapsuleComponent.GetScaledCapsuleSize // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2eebfe0
	float GetScaledCapsuleRadius(); // Function Engine.CapsuleComponent.GetScaledCapsuleRadius // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eebf90
	float GetScaledCapsuleHalfHeight(); // Function Engine.CapsuleComponent.GetScaledCapsuleHalfHeight // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eebf40
};

// Class Engine.TextureProxy
// Size: 0x140 (Inherited: 0x138)
struct UTextureProxy : UTexture {
	struct UTexture* Texture; // 0x138(0x08)
};

// Class Engine.Commandlet
// Size: 0x80 (Inherited: 0x28)
struct UCommandlet : UObject {
	struct FString HelpDescription; // 0x28(0x10)
	struct FString HelpUsage; // 0x38(0x10)
	struct FString HelpWebLink; // 0x48(0x10)
	struct TArray<struct FString> HelpParamNames; // 0x58(0x10)
	struct TArray<struct FString> HelpParamDescriptions; // 0x68(0x10)
	char IsServer : 1; // 0x78(0x01)
	char IsClient : 1; // 0x78(0x01)
	char IsEditor : 1; // 0x78(0x01)
	char LogToConsole : 1; // 0x78(0x01)
	char ShowErrorCount : 1; // 0x78(0x01)
	char UnknownData_78_5 : 3; // 0x78(0x01)
	char UnknownData_79[0x7]; // 0x79(0x07)
};

// Class Engine.InstancedStaticMeshComponent
// Size: 0x6d0 (Inherited: 0x620)
struct UInstancedStaticMeshComponent : UStaticMeshComponent {
	struct TArray<struct FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x620(0x10)
	int32_t InstancingRandomSeed; // 0x630(0x04)
	int32_t InstanceStartCullDistance; // 0x634(0x04)
	int32_t InstanceEndCullDistance; // 0x638(0x04)
	char UnknownData_63C[0x4]; // 0x63c(0x04)
	struct TArray<int32_t> InstanceReorderTable; // 0x640(0x10)
	struct TArray<int32_t> RemovedInstances; // 0x650(0x10)
	char UnknownData_660[0x48]; // 0x660(0x48)
	struct UPhysicsSerializer* PhysicsSerializer; // 0x6a8(0x08)
	int32_t NumPendingLightmaps; // 0x6b0(0x04)
	char UnknownData_6B4[0x4]; // 0x6b4(0x04)
	struct TArray<struct FInstancedStaticMeshMappingInfo> CachedMappings; // 0x6b8(0x10)
	char UnknownData_6C8[0x8]; // 0x6c8(0x08)

	bool UpdateInstanceTransform(int32_t InstanceIndex, struct FTransform NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty); // Function Engine.InstancedStaticMeshComponent.UpdateInstanceTransform // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ef9ba0
	void SetCullDistances(int32_t StartCullDistance, int32_t EndCullDistance); // Function Engine.InstancedStaticMeshComponent.SetCullDistances // Final|Native|Public|BlueprintCallable // @ game+0x2ef2b30
	bool RemoveInstance(int32_t InstanceIndex); // Function Engine.InstancedStaticMeshComponent.RemoveInstance // Native|Public|BlueprintCallable // @ game+0x2eefd50
	bool GetInstanceTransform(int32_t InstanceIndex, struct FTransform OutInstanceTransform, bool bWorldSpace); // Function Engine.InstancedStaticMeshComponent.GetInstanceTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2eea6b0
	struct TArray<int32_t> GetInstancesOverlappingSphere(struct FVector Center, float Radius, bool bSphereInWorldSpace); // Function Engine.InstancedStaticMeshComponent.GetInstancesOverlappingSphere // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2eeaa50
	int32_t GetInstanceCount(); // Function Engine.InstancedStaticMeshComponent.GetInstanceCount // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eea530
	void EnableGPUVisibility(bool bEnable); // Function Engine.InstancedStaticMeshComponent.EnableGPUVisibility // Final|Native|Public|BlueprintCallable // @ game+0x2ee7f40
	void ClearInstances(); // Function Engine.InstancedStaticMeshComponent.ClearInstances // Native|Public|BlueprintCallable // @ game+0x2ee6e10
	int32_t AddInstanceWorldSpace(struct FTransform WorldTransform); // Function Engine.InstancedStaticMeshComponent.AddInstanceWorldSpace // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ee42f0
	void AddInstances(struct TArray<struct FTransform> InstanceTransforms); // Function Engine.InstancedStaticMeshComponent.AddInstances // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x2ee43d0
	int32_t AddInstance(struct FTransform InstanceTransform); // Function Engine.InstancedStaticMeshComponent.AddInstance // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ee4130
};

// Class Engine.HierarchicalInstancedStaticMeshComponent
// Size: 0x7a0 (Inherited: 0x6d0)
struct UHierarchicalInstancedStaticMeshComponent : UInstancedStaticMeshComponent {
	char UnknownData_6D0[0x40]; // 0x6d0(0x40)
	struct TArray<int32_t> SortedInstances; // 0x710(0x10)
	int32_t NumBuiltInstances; // 0x720(0x04)
	struct FBox BuiltInstanceBounds; // 0x724(0x1c)
	struct FBox UnbuiltInstanceBounds; // 0x740(0x1c)
	char UnknownData_75C[0x4]; // 0x75c(0x04)
	struct TArray<struct FBox> UnbuiltInstanceBoundsList; // 0x760(0x10)
	int32_t OcclusionLayerNumNodes; // 0x770(0x04)
	char UnknownData_774[0x2]; // 0x774(0x02)
	bool bDisableCollision; // 0x776(0x01)
	char UnknownData_777[0x29]; // 0x777(0x29)

	bool RemoveInstances(struct TArray<int32_t> InstancesToRemove); // Function Engine.HierarchicalInstancedStaticMeshComponent.RemoveInstances // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x2eefdf0
};

// Class Engine.MaterialInstance
// Size: 0x1b8 (Inherited: 0x58)
struct UMaterialInstance : UMaterialInterface {
	struct UPhysicalMaterial* PhysMaterial; // 0x58(0x08)
	struct UMaterialInterface* Parent; // 0x60(0x08)
	char bHasStaticPermutationResource : 1; // 0x68(0x01)
	char UnknownData_68_1 : 1; // 0x68(0x01)
	char bOverrideSubsurfaceProfile : 1; // 0x68(0x01)
	char UnknownData_68_3 : 5; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
	struct FGuid ParentLightingGuid; // 0x70(0x10)
	struct TArray<struct FFontParameterValue> FontParameterValues; // 0x80(0x10)
	struct TArray<struct FScalarParameterValue> ScalarParameterValues; // 0x90(0x10)
	struct TArray<struct FTextureParameterValue> TextureParameterValues; // 0xa0(0x10)
	struct TArray<struct FVectorParameterValue> VectorParameterValues; // 0xb0(0x10)
	struct FMaterialInstanceBasePropertyOverrides BasePropertyOverrides; // 0xc0(0x84)
	char UnknownData_144[0x74]; // 0x144(0x74)
};

// Class Engine.MaterialInstanceConstant
// Size: 0x1b8 (Inherited: 0x1b8)
struct UMaterialInstanceConstant : UMaterialInstance {
};

// Class Engine.MaterialExpression
// Size: 0x70 (Inherited: 0x28)
struct UMaterialExpression : UObject {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char bRealtimePreview : 1; // 0x4c(0x01)
	char bNeedToUpdatePreview : 1; // 0x4c(0x01)
	char bIsParameterExpression : 1; // 0x4c(0x01)
	char bCommentBubbleVisible : 1; // 0x4c(0x01)
	char bShowOutputNameOnPin : 1; // 0x4c(0x01)
	char bHidePreviewWindow : 1; // 0x4c(0x01)
	char bCollapsed : 1; // 0x4c(0x01)
	char bShaderInputData : 1; // 0x4c(0x01)
	char bShowInputs : 1; // 0x4d(0x01)
	char bShowOutputs : 1; // 0x4d(0x01)
	char UnknownData_4D_2 : 6; // 0x4d(0x01)
	char UnknownData_4E[0x2]; // 0x4e(0x02)
	struct TArray<struct FText> MenuCategories; // 0x50(0x10)
	struct TArray<struct FExpressionOutput> Outputs; // 0x60(0x10)
};

// Class Engine.MaterialExpressionCustomOutput
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionCustomOutput : UMaterialExpression {
};

// Class Engine.BlueprintAsyncActionBase
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintAsyncActionBase : UObject {

	void Activate(); // Function Engine.BlueprintAsyncActionBase.Activate // Native|Public|BlueprintCallable // @ game+0x2ee3c30
};

// Class Engine.BlueprintGeneratedClass
// Size: 0x228 (Inherited: 0x1c0)
struct UBlueprintGeneratedClass : UClass {
	int32_t NumReplicatedProperties; // 0x1c0(0x04)
	char UnknownData_1C4[0x4]; // 0x1c4(0x04)
	struct TArray<struct UDynamicBlueprintBinding*> DynamicBindingObjects; // 0x1c8(0x10)
	struct TArray<struct UActorComponent*> ComponentTemplates; // 0x1d8(0x10)
	struct TArray<struct UTimelineTemplate*> Timelines; // 0x1e8(0x10)
	struct USimpleConstructionScript* SimpleConstructionScript; // 0x1f8(0x08)
	struct UInheritableComponentHandler* InheritableComponentHandler; // 0x200(0x08)
	struct UStructProperty* UberGraphFramePointerProperty; // 0x208(0x08)
	struct UFunction* UberGraphFunction; // 0x210(0x08)
	struct TArray<struct FEventGraphFastCallPair> FastCallPairs; // 0x218(0x10)
};

// Class Engine.AISystemBase
// Size: 0x40 (Inherited: 0x28)
struct UAISystemBase : UObject {
	struct FStringClassReference AISystemClassName; // 0x28(0x10)
	struct FName AISystemModuleName; // 0x38(0x08)
};

// Class Engine.UserDefinedStruct
// Size: 0xa8 (Inherited: 0x98)
struct UUserDefinedStruct : UScriptStruct {
	struct FGuid Guid; // 0x98(0x10)
};

// Class Engine.Player
// Size: 0x48 (Inherited: 0x28)
struct UPlayer : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct APlayerController* PlayerController; // 0x30(0x08)
	int32_t CurrentNetSpeed; // 0x38(0x04)
	int32_t ConfiguredInternetSpeed; // 0x3c(0x04)
	int32_t ConfiguredLanSpeed; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
};

// Class Engine.NetConnection
// Size: 0x345a0 (Inherited: 0x48)
struct UNetConnection : UPlayer {
	char UnknownData_48[0x8]; // 0x48(0x08)
	struct TArray<struct UChildConnection*> Children; // 0x50(0x10)
	struct UNetDriver* Driver; // 0x60(0x08)
	struct UPackageMap* PackageMap; // 0x68(0x08)
	struct TArray<struct UChannel*> OpenChannels; // 0x70(0x10)
	struct TArray<struct AActor*> SentTemporaries; // 0x80(0x10)
	struct AActor* ViewTarget; // 0x90(0x08)
	struct AActor* OwningActor; // 0x98(0x08)
	int32_t MaxPacket; // 0xa0(0x04)
	char InternalAck : 1; // 0xa4(0x01)
	char UnknownData_A4_1 : 7; // 0xa4(0x01)
	char UnknownData_A5[0x2fb]; // 0xa5(0x2fb)
	double LastReceiveTime; // 0x3a0(0x08)
	char UnknownData_3A8[0x340b0]; // 0x3a8(0x340b0)
	struct TArray<struct AActor*> ConsideredActorsList; // 0x34458(0x10)
	char UnknownData_34468[0x10]; // 0x34468(0x10)
	int32_t MaxDormantActorsCheckedFromRelevancy; // 0x34478(0x04)
	char UnknownData_3447C[0x5c]; // 0x3447c(0x5c)
	struct TArray<struct UChannel*> DeferredCloseChannels; // 0x344d8(0x10)
	char UnknownData_344E8[0xb8]; // 0x344e8(0xb8)
};

// Class Engine.NetDriver
// Size: 0x478 (Inherited: 0x28)
struct UNetDriver : UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
	struct FString NetConnectionClassName; // 0x38(0x10)
	int32_t MaxDownloadSize; // 0x48(0x04)
	char bClampListenServerTickRate : 1; // 0x4c(0x01)
	char UnknownData_4C_1 : 7; // 0x4c(0x01)
	char UnknownData_4D[0x3]; // 0x4d(0x03)
	int32_t NetServerMaxTickRate; // 0x50(0x04)
	int32_t MaxInternetClientRate; // 0x54(0x04)
	int32_t MaxClientRate; // 0x58(0x04)
	float ServerTravelPause; // 0x5c(0x04)
	float SpawnPrioritySeconds; // 0x60(0x04)
	float RelevantTimeout; // 0x64(0x04)
	float KeepAliveTime; // 0x68(0x04)
	float InitialConnectTimeout; // 0x6c(0x04)
	float ConnectionTimeout; // 0x70(0x04)
	char UnknownData_74[0x4]; // 0x74(0x04)
	struct UNetConnection* ServerConnection; // 0x78(0x08)
	struct TArray<struct UNetConnection*> ClientConnections; // 0x80(0x10)
	struct UWorld* World; // 0x90(0x08)
	char UnknownData_98[0x30]; // 0x98(0x30)
	struct UClass* NetConnectionClass; // 0xc8(0x08)
	struct UProperty* RoleProperty; // 0xd0(0x08)
	struct UProperty* RemoteRoleProperty; // 0xd8(0x08)
	struct FName NetDriverName; // 0xe0(0x08)
	char UnknownData_E8[0x390]; // 0xe8(0x390)
};

// Class Engine.OnlineSession
// Size: 0x28 (Inherited: 0x28)
struct UOnlineSession : UObject {
};

// Class Engine.Model
// Size: 0x578 (Inherited: 0x28)
struct UModel : UObject {
	char UnknownData_28[0x550]; // 0x28(0x550)
};

// Class Engine.EdGraphNode
// Size: 0x90 (Inherited: 0x28)
struct UEdGraphNode : UObject {
	struct TArray<struct UEdGraphPin*> Pins; // 0x28(0x10)
	int32_t NodePosX; // 0x38(0x04)
	int32_t NodePosY; // 0x3c(0x04)
	int32_t NodeWidth; // 0x40(0x04)
	int32_t NodeHeight; // 0x44(0x04)
	char bHasCompilerMessage : 1; // 0x48(0x01)
	char UnknownData_48_1 : 7; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
	struct FString NodeComment; // 0x50(0x10)
	bool bCommentBubblePinned; // 0x60(0x01)
	bool bCommentBubbleVisible; // 0x61(0x01)
	char UnknownData_62[0x2]; // 0x62(0x02)
	int32_t ErrorType; // 0x64(0x04)
	struct FString ErrorMsg; // 0x68(0x10)
	struct FGuid NodeGuid; // 0x78(0x10)
	char AdvancedPinDisplay; // 0x88(0x01)
	bool bIsNodeEnabled; // 0x89(0x01)
	bool bIsDebugFunction; // 0x8a(0x01)
	char UnknownData_8B[0x5]; // 0x8b(0x05)
};

// Class Engine.EdGraphPin
// Size: 0x128 (Inherited: 0x28)
struct UEdGraphPin : UObject {
	struct FString PinName; // 0x28(0x10)
	struct FString PinToolTip; // 0x38(0x10)
	char Direction; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
	struct FEdGraphPinType PinType; // 0x50(0x50)
	struct FString DefaultValue; // 0xa0(0x10)
	struct FString AutogeneratedDefaultValue; // 0xb0(0x10)
	struct UObject* DefaultObject; // 0xc0(0x08)
	struct FText DefaultTextValue; // 0xc8(0x38)
	struct TArray<struct UEdGraphPin*> LinkedTo; // 0x100(0x10)
	struct TArray<struct UEdGraphPin*> SubPins; // 0x110(0x10)
	struct UEdGraphPin* ParentPin; // 0x120(0x08)
};

// Class Engine.EngineBaseTypes
// Size: 0x28 (Inherited: 0x28)
struct UEngineBaseTypes : UObject {
};

// Class Engine.DamageType
// Size: 0x40 (Inherited: 0x28)
struct UDamageType : UObject {
	char bCausedByWorld : 1; // 0x28(0x01)
	char bScaleMomentumByMass : 1; // 0x28(0x01)
	char UnknownData_28_2 : 6; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	float DamageImpulse; // 0x2c(0x04)
	char bRadialDamageVelChange : 1; // 0x30(0x01)
	char UnknownData_30_1 : 7; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	float DestructibleImpulse; // 0x34(0x04)
	float DestructibleDamageSpreadScale; // 0x38(0x04)
	float DamageFalloff; // 0x3c(0x04)
};

// Class Engine.EngineTypes
// Size: 0x28 (Inherited: 0x28)
struct UEngineTypes : UObject {
};

// Class Engine.BlueprintCore
// Size: 0x50 (Inherited: 0x28)
struct UBlueprintCore : UObject {
	struct UClass* SkeletonGeneratedClass; // 0x28(0x08)
	struct UClass* GeneratedClass; // 0x30(0x08)
	bool bLegacyNeedToPurgeSkelRefs; // 0x38(0x01)
	bool bLegacyGeneratedClassIsAuthoritative; // 0x39(0x01)
	char UnknownData_3A[0x2]; // 0x3a(0x02)
	struct FGuid BlueprintGuid; // 0x3c(0x10)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.Blueprint
// Size: 0xd8 (Inherited: 0x50)
struct UBlueprint : UBlueprintCore {
	char bRecompileOnLoad : 1; // 0x50(0x01)
	char UnknownData_50_1 : 7; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
	struct UClass* ParentClass; // 0x58(0x08)
	struct UObject* PRIVATE_InnermostPreviousCDO; // 0x60(0x08)
	char bHasBeenRegenerated : 1; // 0x68(0x01)
	char bIsRegeneratingOnLoad : 1; // 0x68(0x01)
	char UnknownData_68_2 : 6; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
	struct USimpleConstructionScript* SimpleConstructionScript; // 0x70(0x08)
	struct TArray<struct UActorComponent*> ComponentTemplates; // 0x78(0x10)
	struct TArray<struct UTimelineTemplate*> Timelines; // 0x88(0x10)
	struct UInheritableComponentHandler* InheritableComponentHandler; // 0x98(0x08)
	char BlueprintType; // 0xa0(0x01)
	char UnknownData_A1[0x3]; // 0xa1(0x03)
	int32_t BlueprintSystemVersion; // 0xa4(0x04)
	char UnknownData_A8[0x30]; // 0xa8(0x30)
};

// Class Engine.Interface_AssetUserData
// Size: 0x28 (Inherited: 0x28)
struct UInterface_AssetUserData : UInterface {
};

// Class Engine.ChildActorComponent
// Size: 0x300 (Inherited: 0x2e0)
struct UChildActorComponent : USceneComponent {
	struct UClass* ChildActorClass; // 0x2e0(0x08)
	struct AActor* ChildActor; // 0x2e8(0x08)
	char UnknownData_2F0[0x10]; // 0x2f0(0x10)

	void SetChildActorClass(struct UClass* InClass); // Function Engine.ChildActorComponent.SetChildActorClass // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ce3ef0
};

// Class Engine.TestInterface
// Size: 0x28 (Inherited: 0x28)
struct UTestInterface : UInterface {
};

// Class Engine.DerivedTestInterface
// Size: 0x28 (Inherited: 0x28)
struct UDerivedTestInterface : UTestInterface {
};

// Class Engine.ComponentWithDerivedTestInterface
// Size: 0xd0 (Inherited: 0xc8)
struct UComponentWithDerivedTestInterface : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
};

// Class Engine.ActorWithComponentWithDerivedTestInterface
// Size: 0x3d0 (Inherited: 0x3c8)
struct AActorWithComponentWithDerivedTestInterface : AActor {
	struct UComponentWithDerivedTestInterface* ComponentWithDerivedTestInterface; // 0x3c8(0x08)
};

// Class Engine.ActorWithTestInterface
// Size: 0x3d0 (Inherited: 0x3c8)
struct AActorWithTestInterface : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
};

// Class Engine.AmbientSound
// Size: 0x3d0 (Inherited: 0x3c8)
struct AAmbientSound : AActor {
	struct UAudioComponent* AudioComponent; // 0x3c8(0x08)

	void Stop(); // Function Engine.AmbientSound.Stop // Final|Native|Public|BlueprintCallable // @ game+0x2ce5ae0
	void Play(float StartTime); // Function Engine.AmbientSound.Play // Final|Native|Public|BlueprintCallable // @ game+0x2ce16c0
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel); // Function Engine.AmbientSound.FadeOut // Final|Native|Public|BlueprintCallable // @ game+0x2cd9340
	void FadeIn(float FadeInDuration, float FadeVolumeLevel); // Function Engine.AmbientSound.FadeIn // Final|Native|Public|BlueprintCallable // @ game+0x2cd9280
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel); // Function Engine.AmbientSound.AdjustVolume // Final|Native|Public|BlueprintCallable // @ game+0x2cd5a30
};

// Class Engine.AutomaticInstancingActor
// Size: 0x420 (Inherited: 0x3c8)
struct AAutomaticInstancingActor : AActor {
	struct USceneComponent* DummyRoot; // 0x3c8(0x08)
	struct TMap<struct FName, struct FAutomaticInstancingMeshComponentArray> CookedInstancedStaticMeshes; // 0x3d0(0x50)
};

// Class Engine.PendingNetGame
// Size: 0x100 (Inherited: 0x28)
struct UPendingNetGame : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct UNetDriver* NetDriver; // 0x30(0x08)
	char UnknownData_38[0xb0]; // 0x38(0xb0)
	struct UPackage* PreLoadedMapPackage; // 0xe8(0x08)
	struct UWorld* PreLoadedWorld; // 0xf0(0x08)
	char UnknownData_F8[0x8]; // 0xf8(0x08)
};

// Class Engine.World
// Size: 0x7c8 (Inherited: 0x28)
struct UWorld : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct ULevel* PersistentLevel; // 0x30(0x08)
	struct UNetDriver* NetDriver; // 0x38(0x08)
	struct ULineBatchComponent* LineBatcher; // 0x40(0x08)
	struct ULineBatchComponent* PersistentLineBatcher; // 0x48(0x08)
	struct ULineBatchComponent* ForegroundLineBatcher; // 0x50(0x08)
	struct AGameState* GameState; // 0x58(0x08)
	struct AGameNetworkManager* NetworkManager; // 0x60(0x08)
	struct UPhysicsCollisionHandler* PhysicsCollisionHandler; // 0x68(0x08)
	struct TArray<struct UObject*> ExtraReferencedObjects; // 0x70(0x10)
	struct TArray<struct UObject*> PerModuleDataObjects; // 0x80(0x10)
	struct TArray<struct ULevelStreaming*> StreamingLevels; // 0x90(0x10)
	struct FString StreamingLevelsPrefix; // 0xa0(0x10)
	struct ULevel* CurrentLevelPendingVisibility; // 0xb0(0x08)
	struct AParticleEventManager* MyParticleEventManager; // 0xb8(0x08)
	struct APhysicsVolume* DefaultPhysicsVolume; // 0xc0(0x08)
	struct TArray<struct ULevelStreaming*> DirtyStreamingLevels; // 0xc8(0x10)
	char UnknownData_D8[0x1c]; // 0xd8(0x1c)
	struct FName Feature; // 0xf4(0x08)
	char UnknownData_FC[0x4]; // 0xfc(0x04)
	struct TArray<struct FName> FeatureReferences; // 0x100(0x10)
	bool ParticleLOD_bUseGameThread; // 0x110(0x01)
	bool ParticleLOD_bUseMultipleViewportCase; // 0x111(0x01)
	char UnknownData_112[0x2]; // 0x112(0x02)
	struct FVector ParticleLOD_PlayerViewpointLocation; // 0x114(0x0c)
	struct FString TestMetadata; // 0x120(0x10)
	struct UNavigationSystem* NavigationSystem; // 0x130(0x08)
	struct AGameMode* AuthorityGameMode; // 0x138(0x08)
	struct UAISystemBase* AISystem; // 0x140(0x08)
	struct UAvoidanceManager* AvoidanceManager; // 0x148(0x08)
	struct TArray<struct ULevel*> Levels; // 0x150(0x10)
	char UnknownData_160[0x50]; // 0x160(0x50)
	struct ULevel* CurrentLevel; // 0x1b0(0x08)
	char UnknownData_1B8[0x8]; // 0x1b8(0x08)
	struct UGameInstance* OwningGameInstance; // 0x1c0(0x08)
	struct TArray<struct UMaterialParameterCollectionInstance*> ParameterCollectionInstances; // 0x1c8(0x10)
	char UnknownData_1D8[0x520]; // 0x1d8(0x520)
	struct UWorldComposition* WorldComposition; // 0x6f8(0x08)
	char UnknownData_700[0x3d]; // 0x700(0x3d)
	char UnknownData_73D_0 : 7; // 0x73d(0x01)
	char bAreConstraintsDirty : 1; // 0x73d(0x01)
	char UnknownData_73E[0x8a]; // 0x73e(0x8a)
};

// Class Engine.Level
// Size: 0x300 (Inherited: 0x28)
struct ULevel : UObject {
	char UnknownData_28[0xa0]; // 0x28(0xa0)
	struct ULevelActorContainer* ActorCluster; // 0xc8(0x08)
	struct UWorld* OwningWorld; // 0xd0(0x08)
	struct UModel* Model; // 0xd8(0x08)
	struct TArray<struct UModelComponent*> ModelComponents; // 0xe0(0x10)
	struct ALevelScriptActor* LevelScriptActor; // 0xf0(0x08)
	struct ANavigationObjectBase* NavListStart; // 0xf8(0x08)
	struct ANavigationObjectBase* NavListEnd; // 0x100(0x08)
	struct TArray<struct UNavigationDataChunk*> NavDataChunks; // 0x108(0x10)
	float LightmapTotalSize; // 0x118(0x04)
	float ShadowmapTotalSize; // 0x11c(0x04)
	struct TArray<struct FVector> StaticNavigableGeometry; // 0x120(0x10)
	char UnknownData_130[0x130]; // 0x130(0x130)
	bool LevelVisibility; // 0x260(0x01)
	char UnknownData_261[0xf]; // 0x261(0x0f)
	char UnknownData_270_0 : 3; // 0x270(0x01)
	char Blocked : 1; // 0x270(0x01)
	char UnknownData_270_4 : 4; // 0x270(0x01)
	char UnknownData_271[0x67]; // 0x271(0x67)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x2d8(0x10)
	char UnknownData_2E8[0x18]; // 0x2e8(0x18)
};

// Class Engine.BrushShape
// Size: 0x400 (Inherited: 0x400)
struct ABrushShape : ABrush {
};

// Class Engine.AudioVolume
// Size: 0x450 (Inherited: 0x400)
struct AAudioVolume : AVolume {
	float Priority; // 0x400(0x04)
	char bEnabled : 1; // 0x404(0x01)
	char UnknownData_404_1 : 7; // 0x404(0x01)
	char UnknownData_405[0x3]; // 0x405(0x03)
	struct FReverbSettings Settings; // 0x408(0x18)
	struct FInteriorSettings AmbientZoneSettings; // 0x420(0x24)
	char UnknownData_444[0x4]; // 0x444(0x04)
	struct AAudioVolume* NextLowerPriorityVolume; // 0x448(0x08)
};

// Class Engine.CameraBlockingVolume
// Size: 0x400 (Inherited: 0x400)
struct ACameraBlockingVolume : AVolume {
};

// Class Engine.CullDistanceVolume
// Size: 0x418 (Inherited: 0x400)
struct ACullDistanceVolume : AVolume {
	struct TArray<struct FCullDistanceSizePair> CullDistances; // 0x400(0x10)
	char bEnabled : 1; // 0x410(0x01)
	char UnknownData_410_1 : 7; // 0x410(0x01)
	char UnknownData_411[0x7]; // 0x411(0x07)
};

// Class Engine.FFTWater
// Size: 0x410 (Inherited: 0x400)
struct AFFTWater : AVolume {
	struct UFFTWaterComponent* FFTWaterComponent; // 0x400(0x08)
	struct UFFTWaterExtendedPlaneComponent* ExtendedPlaneComponent; // 0x408(0x08)

	bool ValidateVertexBuffer(); // Function Engine.FFTWater.ValidateVertexBuffer // Final|Native|Public|BlueprintCallable // @ game+0x2ce61c0
	bool ValidateParticlesVelocity(); // Function Engine.FFTWater.ValidateParticlesVelocity // Final|Native|Public|BlueprintCallable // @ game+0x2ce6190
	bool ValidateIndexBuffer(); // Function Engine.FFTWater.ValidateIndexBuffer // Final|Native|Public|BlueprintCallable // @ game+0x2ce6160
	void SetWireframe(bool bWireframe); // Function Engine.FFTWater.SetWireframe // Final|Native|Public|BlueprintCallable // @ game+0x2ce5560
	void SetWaterColour(struct FLinearColor WaterColour); // Function Engine.FFTWater.SetWaterColour // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ce54e0
	void SetSpecularBrightness(float SpecularBrightness); // Function Engine.FFTWater.SetSpecularBrightness // Final|Native|Public|BlueprintCallable // @ game+0x2ce4f60
	void SetShallowWaterColour(struct FLinearColor ShallowWaterColour); // Function Engine.FFTWater.SetShallowWaterColour // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ce4ee0
	void SetReflectionBrightness(float ReflectionBrightness); // Function Engine.FFTWater.SetReflectionBrightness // Final|Native|Public|BlueprintCallable // @ game+0x2ce4cb0
	void SetLightFunctionMaterial(struct UMaterialInterface* Material); // Function Engine.FFTWater.SetLightFunctionMaterial // Final|Native|Public|BlueprintCallable // @ game+0x2ce49e0
	void SetFresnelPower(float FresnelPower); // Function Engine.FFTWater.SetFresnelPower // Final|Native|Public|BlueprintCallable // @ game+0x2ce43d0
	void SetFoamHighlightColour(struct FLinearColor FoamHighlightColour); // Function Engine.FFTWater.SetFoamHighlightColour // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ce4350
	void SetFoamColour(struct FLinearColor FoamColour); // Function Engine.FFTWater.SetFoamColour // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ce42d0
	void SetFoamBrightness(float FoamBrightness); // Function Engine.FFTWater.SetFoamBrightness // Final|Native|Public|BlueprintCallable // @ game+0x2ce4250
	void SetCausticsDepth(float Depth); // Function Engine.FFTWater.SetCausticsDepth // Final|Native|Public|BlueprintCallable // @ game+0x2ce3e70
	void SetBackLitColour(struct FLinearColor BackLitColour); // Function Engine.FFTWater.SetBackLitColour // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ce3df0
	void SetAmbientColour(struct FLinearColor AmbientColour); // Function Engine.FFTWater.SetAmbientColour // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ce3bd0
	bool HasLightFunctionMaterial(); // Function Engine.FFTWater.HasLightFunctionMaterial // Final|Native|Public|BlueprintCallable // @ game+0x2cdcf50
	struct UFFTWaterComponent* GetComponent(); // Function Engine.FFTWater.GetComponent // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2cd9cf0
};

// Class Engine.LevelStreamingVolume
// Size: 0x418 (Inherited: 0x400)
struct ALevelStreamingVolume : AVolume {
	struct TArray<struct FName> StreamingLevelNames; // 0x400(0x10)
	char bEditorPreVisOnly : 1; // 0x410(0x01)
	char bDisabled : 1; // 0x410(0x01)
	char UnknownData_410_2 : 6; // 0x410(0x01)
	char UnknownData_411[0x3]; // 0x411(0x03)
	char StreamingUsage; // 0x414(0x01)
	char UnknownData_415[0x3]; // 0x415(0x03)
};

// Class Engine.LightmassCharacterIndirectDetailVolume
// Size: 0x400 (Inherited: 0x400)
struct ALightmassCharacterIndirectDetailVolume : AVolume {
};

// Class Engine.LightmassImportanceVolume
// Size: 0x400 (Inherited: 0x400)
struct ALightmassImportanceVolume : AVolume {
};

// Class Engine.NavigationTypes
// Size: 0x28 (Inherited: 0x28)
struct UNavigationTypes : UObject {
};

// Class Engine.NavMeshBoundsVolume
// Size: 0x410 (Inherited: 0x400)
struct ANavMeshBoundsVolume : AVolume {
	struct FNavAgentSelector SupportedAgents; // 0x400(0x04)
	struct FName OriginatingLevelName; // 0x404(0x08)
	char UnknownData_40C[0x4]; // 0x40c(0x04)
};

// Class Engine.InstancedNavMeshBoundsVolume
// Size: 0x410 (Inherited: 0x410)
struct AInstancedNavMeshBoundsVolume : ANavMeshBoundsVolume {
};

// Class Engine.NavArea
// Size: 0x40 (Inherited: 0x28)
struct UNavArea : UObject {
	float DefaultCost; // 0x28(0x04)
	float FixedAreaEnteringCost; // 0x2c(0x04)
	struct FColor DrawColor; // 0x30(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x34(0x04)
	char bSupportsAgent0 : 1; // 0x38(0x01)
	char bSupportsAgent1 : 1; // 0x38(0x01)
	char bSupportsAgent2 : 1; // 0x38(0x01)
	char bSupportsAgent3 : 1; // 0x38(0x01)
	char bSupportsAgent4 : 1; // 0x38(0x01)
	char bSupportsAgent5 : 1; // 0x38(0x01)
	char bSupportsAgent6 : 1; // 0x38(0x01)
	char bSupportsAgent7 : 1; // 0x38(0x01)
	char bSupportsAgent8 : 1; // 0x39(0x01)
	char bSupportsAgent9 : 1; // 0x39(0x01)
	char bSupportsAgent10 : 1; // 0x39(0x01)
	char bSupportsAgent11 : 1; // 0x39(0x01)
	char bSupportsAgent12 : 1; // 0x39(0x01)
	char bSupportsAgent13 : 1; // 0x39(0x01)
	char bSupportsAgent14 : 1; // 0x39(0x01)
	char bSupportsAgent15 : 1; // 0x39(0x01)
	char UnknownData_3A[0x6]; // 0x3a(0x06)
};

// Class Engine.NavRelevantInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavRelevantInterface : UInterface {
};

// Class Engine.NavModifierVolume
// Size: 0x410 (Inherited: 0x400)
struct ANavModifierVolume : AVolume {
	char UnknownData_400[0x8]; // 0x400(0x08)
	struct UClass* AreaClass; // 0x408(0x08)

	void SetAreaClass(struct UClass* NewAreaClass); // Function Engine.NavModifierVolume.SetAreaClass // Final|Native|Public|BlueprintCallable // @ game+0x2ce3c50
};

// Class Engine.DefaultPhysicsVolume
// Size: 0x410 (Inherited: 0x410)
struct ADefaultPhysicsVolume : APhysicsVolume {
};

// Class Engine.KillZVolume
// Size: 0x410 (Inherited: 0x410)
struct AKillZVolume : APhysicsVolume {
};

// Class Engine.PainCausingVolume
// Size: 0x438 (Inherited: 0x410)
struct APainCausingVolume : APhysicsVolume {
	char bPainCausing : 1; // 0x410(0x01)
	char UnknownData_410_1 : 7; // 0x410(0x01)
	char UnknownData_411[0x3]; // 0x411(0x03)
	float DamagePerSec; // 0x414(0x04)
	struct UClass* DamageType; // 0x418(0x08)
	float PainInterval; // 0x420(0x04)
	char bEntryPain : 1; // 0x424(0x01)
	char BACKUP_bPainCausing : 1; // 0x424(0x01)
	char UnknownData_424_2 : 6; // 0x424(0x01)
	char UnknownData_425[0x3]; // 0x425(0x03)
	struct AController* DamageInstigator; // 0x428(0x08)
	char UnknownData_430[0x8]; // 0x430(0x08)
};

// Class Engine.BlendableInterface
// Size: 0x28 (Inherited: 0x28)
struct UBlendableInterface : UInterface {
};

// Class Engine.Scene
// Size: 0x28 (Inherited: 0x28)
struct UScene : UObject {
};

// Class Engine.Interface_PostProcessVolume
// Size: 0x28 (Inherited: 0x28)
struct UInterface_PostProcessVolume : UInterface {
};

// Class Engine.PostProcessVolume
// Size: 0x960 (Inherited: 0x400)
struct APostProcessVolume : AVolume {
	char UnknownData_400[0x10]; // 0x400(0x10)
	struct FPostProcessSettings Settings; // 0x410(0x540)
	float Priority; // 0x950(0x04)
	float BlendRadius; // 0x954(0x04)
	float BlendWeight; // 0x958(0x04)
	char bEnabled : 1; // 0x95c(0x01)
	char bUnbound : 1; // 0x95c(0x01)
	char UnknownData_95C_2 : 6; // 0x95c(0x01)
	char UnknownData_95D[0x3]; // 0x95d(0x03)

	void AddOrUpdateBlendable(TScriptInterface<struct UBlendableInterface> InBlendableObject, float InWeight); // Function Engine.PostProcessVolume.AddOrUpdateBlendable // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2cd54e0
};

// Class Engine.PrecomputedVisibilityOverrideVolume
// Size: 0x430 (Inherited: 0x400)
struct APrecomputedVisibilityOverrideVolume : AVolume {
	struct TArray<struct AActor*> OverrideVisibleActors; // 0x400(0x10)
	struct TArray<struct AActor*> OverrideInvisibleActors; // 0x410(0x10)
	struct TArray<struct FName> OverrideInvisibleLevels; // 0x420(0x10)
};

// Class Engine.PrecomputedVisibilityVolume
// Size: 0x400 (Inherited: 0x400)
struct APrecomputedVisibilityVolume : AVolume {
};

// Class Engine.TriggerVolume
// Size: 0x400 (Inherited: 0x400)
struct ATriggerVolume : AVolume {
};

// Class Engine.CalmWaterZone
// Size: 0x3d0 (Inherited: 0x3c8)
struct ACalmWaterZone : AActor {
	struct UCalmWaterComponent* CalmWaterComponent; // 0x3c8(0x08)
};

// Class Engine.CameraActor
// Size: 0x930 (Inherited: 0x3c8)
struct ACameraActor : AActor {
	char AutoActivateForPlayer; // 0x3c8(0x01)
	char UnknownData_3C9[0x7]; // 0x3c9(0x07)
	struct UCameraComponent* CameraComponent; // 0x3d0(0x08)
	char UnknownData_3D8[0x8]; // 0x3d8(0x08)
	char bConstrainAspectRatio : 1; // 0x3e0(0x01)
	char UnknownData_3E0_1 : 7; // 0x3e0(0x01)
	char UnknownData_3E1[0x3]; // 0x3e1(0x03)
	float AspectRatio; // 0x3e4(0x04)
	float FOVAngle; // 0x3e8(0x04)
	float PostProcessBlendWeight; // 0x3ec(0x04)
	struct FPostProcessSettings PostProcessSettings; // 0x3f0(0x540)

	int32_t GetAutoActivatePlayerIndex(); // Function Engine.CameraActor.GetAutoActivatePlayerIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cd9ab0
};

// Class Engine.ClientOnlyTestActor
// Size: 0x3c8 (Inherited: 0x3c8)
struct AClientOnlyTestActor : AActor {
};

// Class Engine.NavAgentInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavAgentInterface : UInterface {
};

// Class Engine.CameraShake
// Size: 0x140 (Inherited: 0x28)
struct UCameraShake : UObject {
	char bSingleInstance : 1; // 0x28(0x01)
	char UnknownData_28_1 : 7; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	float OscillationDuration; // 0x2c(0x04)
	float OscillationBlendInTime; // 0x30(0x04)
	float OscillationBlendOutTime; // 0x34(0x04)
	struct FROscillator RotOscillation; // 0x38(0x24)
	struct FVOscillator LocOscillation; // 0x5c(0x24)
	struct FFOscillator FOVOscillation; // 0x80(0x0c)
	float AnimPlayRate; // 0x8c(0x04)
	float AnimScale; // 0x90(0x04)
	float AnimBlendInTime; // 0x94(0x04)
	float AnimBlendOutTime; // 0x98(0x04)
	float RandomAnimSegmentDuration; // 0x9c(0x04)
	struct UCameraAnim* Anim; // 0xa0(0x08)
	char bRandomAnimSegment : 1; // 0xa8(0x01)
	char UnknownData_A8_1 : 7; // 0xa8(0x01)
	char UnknownData_A9[0x17]; // 0xa9(0x17)
	struct APlayerCameraManager* CameraOwner; // 0xc0(0x08)
	char UnknownData_C8[0x68]; // 0xc8(0x68)
	float ShakeScale; // 0x130(0x04)
	float OscillatorTimeRemaining; // 0x134(0x04)
	struct UCameraAnimInst* AnimInst; // 0x138(0x08)

	void ReceiveStopShake(); // Function Engine.CameraShake.ReceiveStopShake // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceivePlayShake(float Scale); // Function Engine.CameraShake.ReceivePlayShake // Event|Public|BlueprintEvent // @ game+0x188c2f0
	bool ReceiveIsFinished(); // Function Engine.CameraShake.ReceiveIsFinished // Native|Event|Public|BlueprintEvent|Const // @ game+0x2ce23a0
	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, struct FMinimalViewInfo POV, struct FMinimalViewInfo ModifiedPOV); // Function Engine.CameraShake.BlueprintUpdateCameraShake // Event|Public|HasOutParms|BlueprintEvent // @ game+0x188c2f0
};

// Class Engine.PlayerCameraManager
// Size: 0x1c60 (Inherited: 0x3c8)
struct APlayerCameraManager : AActor {
	struct APlayerController* PCOwner; // 0x3c8(0x08)
	struct USceneComponent* TransformComponent; // 0x3d0(0x08)
	char UnknownData_3D8[0x8]; // 0x3d8(0x08)
	float DefaultFOV; // 0x3e0(0x04)
	char UnknownData_3E4[0x4]; // 0x3e4(0x04)
	float DefaultOrthoWidth; // 0x3e8(0x04)
	char UnknownData_3EC[0x4]; // 0x3ec(0x04)
	float DefaultAspectRatio; // 0x3f0(0x04)
	char UnknownData_3F4[0x4c]; // 0x3f4(0x4c)
	struct FCameraCacheEntry CameraCache; // 0x440(0x5b0)
	struct FCameraCacheEntry LastFrameCameraCache; // 0x9f0(0x5b0)
	struct FTViewTarget ViewTarget; // 0xfa0(0x5c0)
	struct FTViewTarget PendingViewTarget; // 0x1560(0x5c0)
	char UnknownData_1B20[0x30]; // 0x1b20(0x30)
	struct TArray<struct UCameraModifier*> ModifierList; // 0x1b50(0x10)
	struct TArray<struct UClass*> DefaultModifiers; // 0x1b60(0x10)
	float FreeCamDistance; // 0x1b70(0x04)
	struct FVector FreeCamOffset; // 0x1b74(0x0c)
	struct FVector ViewTargetOffset; // 0x1b80(0x0c)
	char UnknownData_1B8C[0x14]; // 0x1b8c(0x14)
	struct TArray<struct AEmitterCameraLensEffectBase*> CameraLensEffects; // 0x1ba0(0x10)
	struct UCameraModifier_CameraShake* CachedCameraShakeMod; // 0x1bb0(0x08)
	struct UCameraAnimInst* AnimInstPool[0x08]; // 0x1bb8(0x40)
	struct TArray<struct FPostProcessSettings> PostProcessBlendCache; // 0x1bf8(0x10)
	char UnknownData_1C08[0x10]; // 0x1c08(0x10)
	struct TArray<struct UCameraAnimInst*> ActiveAnims; // 0x1c18(0x10)
	struct TArray<struct UCameraAnimInst*> FreeAnims; // 0x1c28(0x10)
	struct ACameraActor* AnimCameraActor; // 0x1c38(0x08)
	char bIsOrthographic : 1; // 0x1c40(0x01)
	char UnknownData_1C40_1 : 5; // 0x1c40(0x01)
	char bUseClientSideCameraUpdates : 1; // 0x1c40(0x01)
	char UnknownData_1C41_0 : 5; // 0x1c41(0x01)
	char bFollowHmdOrientation : 1; // 0x1c41(0x01)
	char UnknownData_1C41_6 : 2; // 0x1c41(0x01)
	char UnknownData_1C42[0x2]; // 0x1c42(0x02)
	float ViewPitchMin; // 0x1c44(0x04)
	float ViewPitchMax; // 0x1c48(0x04)
	float ViewYawMin; // 0x1c4c(0x04)
	float ViewYawMax; // 0x1c50(0x04)
	float ViewRollMin; // 0x1c54(0x04)
	float ViewRollMax; // 0x1c58(0x04)
	char UnknownData_1C5C[0x4]; // 0x1c5c(0x04)

	void StopCameraShake(struct UCameraShake* ShakeInstance); // Function Engine.PlayerCameraManager.StopCameraShake // Native|Public|BlueprintCallable // @ game+0x2ce5e00
	void StopCameraFade(); // Function Engine.PlayerCameraManager.StopCameraFade // Native|Public|BlueprintCallable // @ game+0x2ce5de0
	void StopCameraAnimInst(struct UCameraAnimInst* AnimInst, bool bImmediate); // Function Engine.PlayerCameraManager.StopCameraAnimInst // Native|Public|BlueprintCallable // @ game+0x2ce5d10
	void StopAllInstancesOfCameraShake(struct UClass* Shake); // Function Engine.PlayerCameraManager.StopAllInstancesOfCameraShake // Native|Public|BlueprintCallable // @ game+0x2ce5c80
	void StopAllInstancesOfCameraAnim(struct UCameraAnim* Anim, bool bImmediate); // Function Engine.PlayerCameraManager.StopAllInstancesOfCameraAnim // Native|Public|BlueprintCallable // @ game+0x2ce5bb0
	void StopAllCameraShakes(); // Function Engine.PlayerCameraManager.StopAllCameraShakes // Native|Public|BlueprintCallable // @ game+0x2ce5b90
	void StopAllCameraAnims(bool bImmediate); // Function Engine.PlayerCameraManager.StopAllCameraAnims // Native|Public|BlueprintCallable // @ game+0x2ce5b00
	void StartCameraFade(float FromAlpha, float ToAlpha, float Duration, struct FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished); // Function Engine.PlayerCameraManager.StartCameraFade // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ce5890
	void SetManualCameraFade(float InFadeAmount, struct FLinearColor Color, bool bInFadeAudio); // Function Engine.PlayerCameraManager.SetManualCameraFade // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ce4a60
	bool RemoveCameraModifier(struct UCameraModifier* ModifierToRemove); // Function Engine.PlayerCameraManager.RemoveCameraModifier // Native|Public|BlueprintCallable // @ game+0x2ce2460
	void RemoveCameraLensEffect(struct AEmitterCameraLensEffectBase* Emitter); // Function Engine.PlayerCameraManager.RemoveCameraLensEffect // Native|Public|BlueprintCallable // @ game+0x2ce23d0
	struct UCameraShake* PlayCameraShake(struct UClass* ShakeClass, float Scale, char PlaySpace, struct FRotator UserPlaySpaceRot); // Function Engine.PlayerCameraManager.PlayCameraShake // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ce1a60
	struct UCameraAnimInst* PlayCameraAnim(struct UCameraAnim* Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, char PlaySpace, struct FRotator UserPlaySpaceRot, struct UCurveFloat* BlendInCurve); // Function Engine.PlayerCameraManager.PlayCameraAnim // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ce1740
	bool IsScreenFullyOccluded(); // Function Engine.PlayerCameraManager.IsScreenFullyOccluded // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdd4b0
	bool IsFadeInProgress(); // Function Engine.PlayerCameraManager.IsFadeInProgress // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdd200
	struct APlayerController* GetOwningPlayerController(); // Function Engine.PlayerCameraManager.GetOwningPlayerController // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdc3c0
	float GetFOVAngle(); // Function Engine.PlayerCameraManager.GetFOVAngle // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cda870
	struct FRotator GetCameraRotation(); // Function Engine.PlayerCameraManager.GetCameraRotation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cd9b20
	struct FVector GetCameraLocation(); // Function Engine.PlayerCameraManager.GetCameraLocation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2cd9ae0
	struct UCameraModifier* FindCameraModifierByClass(struct UClass* ModifierClass); // Function Engine.PlayerCameraManager.FindCameraModifierByClass // Native|Public|BlueprintCallable // @ game+0x2cd9400
	void ClearCameraLensEffects(); // Function Engine.PlayerCameraManager.ClearCameraLensEffects // Native|Public|BlueprintCallable // @ game+0x2cd5ec0
	bool BlueprintUpdateCamera(struct AActor* CameraTarget, struct FVector NewCameraLocation, struct FRotator NewCameraRotation, float NewCameraFOV); // Function Engine.PlayerCameraManager.BlueprintUpdateCamera // BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x188c2f0
	void BlendOutAllInstancesOfCameraShake(struct UClass* Shake); // Function Engine.PlayerCameraManager.BlendOutAllInstancesOfCameraShake // Native|Public|BlueprintCallable // @ game+0x2cd5d50
	struct UCameraModifier* AddNewCameraModifier(struct UClass* ModifierClass); // Function Engine.PlayerCameraManager.AddNewCameraModifier // Native|Public|BlueprintCallable // @ game+0x2cd5440
	struct AEmitterCameraLensEffectBase* AddCameraLensEffect(struct UClass* LensEffectEmitterClass); // Function Engine.PlayerCameraManager.AddCameraLensEffect // Native|Public|BlueprintCallable // @ game+0x2cd51e0
};

// Class Engine.CurveBase
// Size: 0x30 (Inherited: 0x28)
struct UCurveBase : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)

	void GetValueRange(float MinValue, float MaxValue); // Function Engine.CurveBase.GetValueRange // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdcc50
	void GetTimeRange(float MinTime, float MaxTime); // Function Engine.CurveBase.GetTimeRange // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x2cdc950
};

// Class Engine.CurveFloat
// Size: 0xb0 (Inherited: 0x30)
struct UCurveFloat : UCurveBase {
	struct FRichCurve FloatCurve; // 0x30(0x78)
	bool bIsEventCurve; // 0xa8(0x01)
	char UnknownData_A9[0x7]; // 0xa9(0x07)

	float GetFloatValue(float InTime); // Function Engine.CurveFloat.GetFloatValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2cda8b0
};

// Class Engine.ForceFeedbackEffect
// Size: 0x40 (Inherited: 0x28)
struct UForceFeedbackEffect : UObject {
	struct TArray<struct FForceFeedbackChannelDetails> ChannelDetails; // 0x28(0x10)
	float Duration; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.LogVisualizerCameraController
// Size: 0x7d8 (Inherited: 0x7c0)
struct ALogVisualizerCameraController : ADebugCameraController {
	struct AActor* PickedActor; // 0x7c0(0x08)
	char UnknownData_7C8[0x10]; // 0x7c8(0x10)
};

// Class Engine.DecalActor
// Size: 0x3d0 (Inherited: 0x3c8)
struct ADecalActor : AActor {
	struct UDecalComponent* Decal; // 0x3c8(0x08)

	void SetDecalMaterial(struct UMaterialInterface* NewDecalMaterial); // Function Engine.DecalActor.SetDecalMaterial // Final|Native|Public|BlueprintCallable // @ game+0x2de75d0
	struct UMaterialInterface* GetDecalMaterial(); // Function Engine.DecalActor.GetDecalMaterial // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddce90
	struct UMaterialInstanceDynamic* CreateDynamicMaterialInstance(); // Function Engine.DecalActor.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x2dda3a0
};

// Class Engine.DestructibleActor
// Size: 0x3e8 (Inherited: 0x3c8)
struct ADestructibleActor : AActor {
	struct UDestructibleComponent* DestructibleComponent; // 0x3c8(0x08)
	char bAffectNavigation : 1; // 0x3d0(0x01)
	char UnknownData_3D0_1 : 7; // 0x3d0(0x01)
	char UnknownData_3D1[0x7]; // 0x3d1(0x07)
	struct FMulticastDelegate OnActorFracture; // 0x3d8(0x10)
};

// Class Engine.DocumentationActor
// Size: 0x3d0 (Inherited: 0x3c8)
struct ADocumentationActor : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
};

// Class Engine.Emitter
// Size: 0x418 (Inherited: 0x3c8)
struct AEmitter : AActor {
	struct UParticleSystemComponent* ParticleSystemComponent; // 0x3c8(0x08)
	char bDestroyOnSystemFinish : 1; // 0x3d0(0x01)
	char bPostUpdateTickGroup : 1; // 0x3d0(0x01)
	char bCurrentlyActive : 1; // 0x3d0(0x01)
	char UnknownData_3D0_3 : 5; // 0x3d0(0x01)
	char UnknownData_3D1[0x7]; // 0x3d1(0x07)
	struct FMulticastDelegate OnParticleSpawn; // 0x3d8(0x10)
	struct FMulticastDelegate OnParticleBurst; // 0x3e8(0x10)
	struct FMulticastDelegate OnParticleDeath; // 0x3f8(0x10)
	struct FMulticastDelegate OnParticleCollide; // 0x408(0x10)

	void ToggleActive(); // Function Engine.Emitter.ToggleActive // Final|Native|Public|BlueprintCallable // @ game+0x2deb920
	void SetVectorParameter(struct FName ParameterName, struct FVector Param); // Function Engine.Emitter.SetVectorParameter // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2deaeb0
	void SetTemplate(struct UParticleSystem* NewTemplate); // Function Engine.Emitter.SetTemplate // Native|Public|BlueprintCallable // @ game+0x2deaab0
	void SetMaterialParameter(struct FName ParameterName, struct UMaterialInterface* Param); // Function Engine.Emitter.SetMaterialParameter // Final|Native|Public|BlueprintCallable // @ game+0x2de9160
	void SetFloatParameter(struct FName ParameterName, float Param); // Function Engine.Emitter.SetFloatParameter // Final|Native|Public|BlueprintCallable // @ game+0x2de7ad0
	void SetColorParameter(struct FName ParameterName, struct FLinearColor Param); // Function Engine.Emitter.SetColorParameter // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2de6ad0
	void SetActorParameter(struct FName ParameterName, struct AActor* Param); // Function Engine.Emitter.SetActorParameter // Final|Native|Public|BlueprintCallable // @ game+0x2de4510
	void OnRep_bCurrentlyActive(); // Function Engine.Emitter.OnRep_bCurrentlyActive // Native|Public // @ game+0x2de3320
	void OnParticleSystemFinished(struct UParticleSystemComponent* FinishedComponent); // Function Engine.Emitter.OnParticleSystemFinished // Native|Public // @ game+0x2de3050
	bool IsActive(); // Function Engine.Emitter.IsActive // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de1a60
	struct FName GetEmitterName(); // Function Engine.Emitter.GetEmitterName // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddd360
	void Deactivate(); // Function Engine.Emitter.Deactivate // Final|Native|Public|BlueprintCallable // @ game+0x2dda600
	void Activate(); // Function Engine.Emitter.Activate // Final|Native|Public|BlueprintCallable // @ game+0x2dd7fb0
};

// Class Engine.EmitterCameraLensEffectBase
// Size: 0x450 (Inherited: 0x418)
struct AEmitterCameraLensEffectBase : AEmitter {
	struct UParticleSystem* PS_CameraEffect; // 0x418(0x08)
	struct UParticleSystem* PS_CameraEffectNonExtremeContent; // 0x420(0x08)
	float BaseFOV; // 0x428(0x04)
	float DistFromCamera; // 0x42c(0x04)
	char bAllowMultipleInstances : 1; // 0x430(0x01)
	char UnknownData_430_1 : 7; // 0x430(0x01)
	char UnknownData_431[0x7]; // 0x431(0x07)
	struct TArray<struct UClass*> EmittersToTreatAsSame; // 0x438(0x10)
	struct APlayerCameraManager* BaseCamera; // 0x448(0x08)
};

// Class Engine.DebugCameraHUD
// Size: 0x4c0 (Inherited: 0x4c0)
struct ADebugCameraHUD : AHUD {
};

// Class Engine.LogVisualizerHUD
// Size: 0x4e8 (Inherited: 0x4c0)
struct ALogVisualizerHUD : ADebugCameraHUD {
	char UnknownData_4C0[0x28]; // 0x4c0(0x28)
};

// Class Engine.AtmosphericFog
// Size: 0x3d0 (Inherited: 0x3c8)
struct AAtmosphericFog : AInfo {
	struct UAtmosphericFogComponent* AtmosphericFogComponent; // 0x3c8(0x08)
};

// Class Engine.ExponentialHeightFog
// Size: 0x3d8 (Inherited: 0x3c8)
struct AExponentialHeightFog : AInfo {
	struct UExponentialHeightFogComponent* Component; // 0x3c8(0x08)
	char bEnabled : 1; // 0x3d0(0x01)
	char UnknownData_3D0_1 : 7; // 0x3d0(0x01)
	char UnknownData_3D1[0x7]; // 0x3d1(0x07)

	void OnRep_bEnabled(); // Function Engine.ExponentialHeightFog.OnRep_bEnabled // Native|Public // @ game+0x2de3340
};

// Class Engine.NavigationObjectBase
// Size: 0x3f0 (Inherited: 0x3c8)
struct ANavigationObjectBase : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct UCapsuleComponent* CapsuleComponent; // 0x3d0(0x08)
	struct UBillboardComponent* GoodSprite; // 0x3d8(0x08)
	struct UBillboardComponent* BadSprite; // 0x3e0(0x08)
	char bIsPIEPlayerStart : 1; // 0x3e8(0x01)
	char UnknownData_3E8_1 : 7; // 0x3e8(0x01)
	char UnknownData_3E9[0x7]; // 0x3e9(0x07)
};

// Class Engine.PlayerStart
// Size: 0x3f8 (Inherited: 0x3f0)
struct APlayerStart : ANavigationObjectBase {
	struct FName PlayerStartTag; // 0x3f0(0x08)
};

// Class Engine.GameNetworkManager
// Size: 0x438 (Inherited: 0x3c8)
struct AGameNetworkManager : AInfo {
	int32_t AdjustedNetSpeed; // 0x3c8(0x04)
	float LastNetSpeedUpdateTime; // 0x3cc(0x04)
	int32_t TotalNetBandwidth; // 0x3d0(0x04)
	int32_t MinDynamicBandwidth; // 0x3d4(0x04)
	int32_t MaxDynamicBandwidth; // 0x3d8(0x04)
	char bIsStandbyCheckingEnabled : 1; // 0x3dc(0x01)
	char bHasStandbyCheatTriggered : 1; // 0x3dc(0x01)
	char UnknownData_3DC_2 : 6; // 0x3dc(0x01)
	char UnknownData_3DD[0x3]; // 0x3dd(0x03)
	float StandbyRxCheatTime; // 0x3e0(0x04)
	float StandbyTxCheatTime; // 0x3e4(0x04)
	int32_t BadPingThreshold; // 0x3e8(0x04)
	float PercentMissingForRxStandby; // 0x3ec(0x04)
	float PercentMissingForTxStandby; // 0x3f0(0x04)
	float PercentForBadPing; // 0x3f4(0x04)
	float JoinInProgressStandbyWaitTime; // 0x3f8(0x04)
	float MoveRepSize; // 0x3fc(0x04)
	float MAXPOSITIONERRORSQUARED; // 0x400(0x04)
	float MAXNEARZEROVELOCITYSQUARED; // 0x404(0x04)
	float CLIENTADJUSTUPDATECOST; // 0x408(0x04)
	float MAXCLIENTUPDATEINTERVAL; // 0x40c(0x04)
	float MaxMoveDeltaTime; // 0x410(0x04)
	bool ClientAuthorativePosition; // 0x414(0x01)
	char UnknownData_415[0x3]; // 0x415(0x03)
	float ClientErrorUpdateRateLimit; // 0x418(0x04)
	bool bMovementTimeDiscrepancyDetection; // 0x41c(0x01)
	bool bMovementTimeDiscrepancyResolution; // 0x41d(0x01)
	char UnknownData_41E[0x2]; // 0x41e(0x02)
	float MovementTimeDiscrepancyMaxTimeMargin; // 0x420(0x04)
	float MovementTimeDiscrepancyMinTimeMargin; // 0x424(0x04)
	float MovementTimeDiscrepancyResolutionRate; // 0x428(0x04)
	float MovementTimeDiscrepancyDriftAllowance; // 0x42c(0x04)
	bool bMovementTimeDiscrepancyForceCorrectionsDuringResolution; // 0x430(0x01)
	bool bUseDistanceBasedRelevancy; // 0x431(0x01)
	char UnknownData_432[0x6]; // 0x432(0x06)
};

// Class Engine.GameSession
// Size: 0x3f8 (Inherited: 0x3c8)
struct AGameSession : AInfo {
	int32_t MaxSpectators; // 0x3c8(0x04)
	int32_t MaxPlayers; // 0x3cc(0x04)
	char MaxSplitscreensPerConnection; // 0x3d0(0x01)
	bool bRequiresPushToTalk; // 0x3d1(0x01)
	char UnknownData_3D2[0x2]; // 0x3d2(0x02)
	struct FName SessionName; // 0x3d4(0x08)
	char UnknownData_3DC[0x1c]; // 0x3dc(0x1c)
};

// Class Engine.SkyLight
// Size: 0x3d8 (Inherited: 0x3c8)
struct ASkyLight : AInfo {
	struct USkyLightComponent* LightComponent; // 0x3c8(0x08)
	char bEnabled : 1; // 0x3d0(0x01)
	char UnknownData_3D0_1 : 7; // 0x3d0(0x01)
	char UnknownData_3D1[0x7]; // 0x3d1(0x07)

	void OnRep_bEnabled(); // Function Engine.SkyLight.OnRep_bEnabled // Native|Public // @ game+0x2de3360
};

// Class Engine.WindDirectionalSource
// Size: 0x3d0 (Inherited: 0x3c8)
struct AWindDirectionalSource : AInfo {
	struct UWindDirectionalSourceComponent* Component; // 0x3c8(0x08)

	struct UWindDirectionalSourceComponent* GetComponent(); // Function Engine.WindDirectionalSource.GetComponent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddcc20
};

// Class Engine.LevelBounds
// Size: 0x3d0 (Inherited: 0x3c8)
struct ALevelBounds : AActor {
	bool bAutoUpdateBounds; // 0x3c8(0x01)
	char UnknownData_3C9[0x7]; // 0x3c9(0x07)
};

// Class Engine.LightComponentBase
// Size: 0x310 (Inherited: 0x2e0)
struct ULightComponentBase : USceneComponent {
	struct FGuid LightGuid; // 0x2e0(0x10)
	float Brightness; // 0x2f0(0x04)
	float Intensity; // 0x2f4(0x04)
	struct FColor LightColor; // 0x2f8(0x04)
	char bAffectsWorld : 1; // 0x2fc(0x01)
	char CastShadows : 1; // 0x2fc(0x01)
	char CastStaticShadows : 1; // 0x2fc(0x01)
	char CastDynamicShadows : 1; // 0x2fc(0x01)
	char bAffectTranslucentLighting : 1; // 0x2fc(0x01)
	char bPrecomputedLightingIsValid : 1; // 0x2fc(0x01)
	char RainOcclusion : 1; // 0x2fc(0x01)
	char UnknownData_2FD[0x3]; // 0x2fd(0x03)
	float IndirectLightingIntensity; // 0x300(0x04)
	float ScaleForTranslucency; // 0x304(0x04)
	float CapForTranslucency; // 0x308(0x04)
	char UnknownData_30C[0x4]; // 0x30c(0x04)

	void SetCastShadows(bool bNewValue); // Function Engine.LightComponentBase.SetCastShadows // Final|Native|Public|BlueprintCallable // @ game+0x2de63d0
	struct FLinearColor GetLightColor(); // Function Engine.LightComponentBase.GetLightColor // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddd5e0
};

// Class Engine.LightComponent
// Size: 0x470 (Inherited: 0x310)
struct ULightComponent : ULightComponentBase {
	float Temperature; // 0x310(0x04)
	char bUseTemperature : 1; // 0x314(0x01)
	char UnknownData_314_1 : 7; // 0x314(0x01)
	char UnknownData_315[0x3]; // 0x315(0x03)
	int32_t ShadowMapChannel; // 0x318(0x04)
	char UnknownData_31C[0x4]; // 0x31c(0x04)
	float SourceRadius; // 0x320(0x04)
	float MinRoughness; // 0x324(0x04)
	float ShadowBias; // 0x328(0x04)
	float ShadowSharpen; // 0x32c(0x04)
	float ShadowResMaxDynamicDegradation; // 0x330(0x04)
	char InverseSquaredFalloff : 1; // 0x334(0x01)
	char CastTranslucentShadows : 1; // 0x334(0x01)
	char bCastShadowsFromCinematicObjectsOnly : 1; // 0x334(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x334(0x01)
	char UnknownData_334_4 : 4; // 0x334(0x01)
	char UnknownData_335[0x3]; // 0x335(0x03)
	struct UMaterialInterface* LightFunctionMaterial; // 0x338(0x08)
	struct FVector LightFunctionScale; // 0x340(0x0c)
	char UnknownData_34C[0x4]; // 0x34c(0x04)
	struct UTextureLightProfile* IESTexture; // 0x350(0x08)
	char bUseIESBrightness : 1; // 0x358(0x01)
	char UnknownData_358_1 : 7; // 0x358(0x01)
	char UnknownData_359[0x3]; // 0x359(0x03)
	float IESBrightnessScale; // 0x35c(0x04)
	float LightFunctionFadeDistance; // 0x360(0x04)
	float DisabledBrightness; // 0x364(0x04)
	char bEnableLightShaftBloom : 1; // 0x368(0x01)
	char UnknownData_368_1 : 7; // 0x368(0x01)
	char UnknownData_369[0x3]; // 0x369(0x03)
	float BloomScale; // 0x36c(0x04)
	float BloomThreshold; // 0x370(0x04)
	struct FColor BloomTint; // 0x374(0x04)
	bool bUseRayTracedDistanceFieldShadows; // 0x378(0x01)
	char UnknownData_379[0x3]; // 0x379(0x03)
	float RayStartOffsetDepthScale; // 0x37c(0x04)
	char UnknownData_380[0xf0]; // 0x380(0xf0)

	void SetTemperature(float NewTemperature); // Function Engine.LightComponent.SetTemperature // Final|Native|Public|BlueprintCallable // @ game+0x2deaa30
	void SetLightFunctionScale(struct FVector NewLightFunctionScale); // Function Engine.LightComponent.SetLightFunctionScale // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2de8460
	void SetLightFunctionMaterial(struct UMaterialInterface* NewLightFunctionMaterial); // Function Engine.LightComponent.SetLightFunctionMaterial // Final|Native|Public|BlueprintCallable // @ game+0x2de8350
	void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance); // Function Engine.LightComponent.SetLightFunctionFadeDistance // Final|Native|Public|BlueprintCallable // @ game+0x2de8250
	void SetLightFunctionDisabledBrightness(float NewValue); // Function Engine.LightComponent.SetLightFunctionDisabledBrightness // Final|Native|Public|BlueprintCallable // @ game+0x2de8150
	void SetLightColor(struct FLinearColor NewLightColor, bool bSRGB); // Function Engine.LightComponent.SetLightColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2de8000
	void SetIntensity(float NewIntensity); // Function Engine.LightComponent.SetIntensity // Final|Native|Public|BlueprintCallable // @ game+0x2de7f00
	void SetIndirectLightingIntensity(float NewIntensity); // Function Engine.LightComponent.SetIndirectLightingIntensity // Final|Native|Public|BlueprintCallable // @ game+0x2de7e00
	void SetIESTexture(struct UTextureLightProfile* NewValue); // Function Engine.LightComponent.SetIESTexture // Final|Native|Public|BlueprintCallable // @ game+0x2de7d80
	void SetEnableLightShaftBloom(bool bNewValue); // Function Engine.LightComponent.SetEnableLightShaftBloom // Final|Native|Public|BlueprintCallable // @ game+0x2de79b0
	void SetBloomTint(struct FColor NewValue); // Function Engine.LightComponent.SetBloomTint // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2de6130
	void SetBloomThreshold(float NewValue); // Function Engine.LightComponent.SetBloomThreshold // Final|Native|Public|BlueprintCallable // @ game+0x2de60b0
	void SetBloomScale(float NewValue); // Function Engine.LightComponent.SetBloomScale // Final|Native|Public|BlueprintCallable // @ game+0x2de6030
	void SetAffectTranslucentLighting(bool bNewValue); // Function Engine.LightComponent.SetAffectTranslucentLighting // Final|Native|Public|BlueprintCallable // @ game+0x2de47b0
	void SetAffectDynamicIndirectLighting(bool bNewValue); // Function Engine.LightComponent.SetAffectDynamicIndirectLighting // Final|Native|Public|BlueprintCallable // @ game+0x2de4690
	int32_t GetNumberOfShadowCastersInFirstCascade(); // Function Engine.LightComponent.GetNumberOfShadowCastersInFirstCascade // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2dde220
};

// Class Engine.Light
// Size: 0x3d0 (Inherited: 0x3c8)
struct ALight : AActor {
	struct ULightComponent* LightComponent; // 0x3c8(0x08)

	void SetLightFunctionScale(struct FVector NewLightFunctionScale); // Function Engine.Light.SetLightFunctionScale // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2de83d0
	void SetLightFunctionMaterial(struct UMaterialInterface* NewLightFunctionMaterial); // Function Engine.Light.SetLightFunctionMaterial // Final|Native|Public|BlueprintCallable // @ game+0x2de82d0
	void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance); // Function Engine.Light.SetLightFunctionFadeDistance // Final|Native|Public|BlueprintCallable // @ game+0x2de81d0
	void SetLightColor(struct FLinearColor NewLightColor); // Function Engine.Light.SetLightColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2de7f80
	void SetCastShadows(bool bNewValue); // Function Engine.Light.SetCastShadows // Final|Native|Public|BlueprintCallable // @ game+0x2de6340
	void SetBrightness(float NewBrightness); // Function Engine.Light.SetBrightness // Final|Native|Public|BlueprintCallable // @ game+0x2de61a0
	void SetAffectTranslucentLighting(bool bNewValue); // Function Engine.Light.SetAffectTranslucentLighting // Final|Native|Public|BlueprintCallable // @ game+0x2de4720
	struct FLinearColor GetLightColor(); // Function Engine.Light.GetLightColor // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddd5a0
	float GetBrightness(); // Function Engine.Light.GetBrightness // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddc8e0
};

// Class Engine.AmbientLightSource
// Size: 0x3d8 (Inherited: 0x3d0)
struct AAmbientLightSource : ALight {
	struct UAmbientLightSourceComponent* AmbientLightSourceComponent; // 0x3d0(0x08)
};

// Class Engine.DirectionalLight
// Size: 0x3d0 (Inherited: 0x3d0)
struct ADirectionalLight : ALight {
};

// Class Engine.PointLight
// Size: 0x3d8 (Inherited: 0x3d0)
struct APointLight : ALight {
	struct UPointLightComponent* PointLightComponent; // 0x3d0(0x08)

	void SetRadius(float NewRadius); // Function Engine.PointLight.SetRadius // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2dea0e0
	void SetLightFalloffExponent(float NewLightFalloffExponent); // Function Engine.PointLight.SetLightFalloffExponent // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2de80d0
};

// Class Engine.SpotLight
// Size: 0x3d8 (Inherited: 0x3d0)
struct ASpotLight : ALight {
	struct USpotLightComponent* SpotLightComponent; // 0x3d0(0x08)

	void SetOuterConeAngle(float NewOuterConeAngle); // Function Engine.SpotLight.SetOuterConeAngle // Final|Native|Public|BlueprintCallable // @ game+0x2de9590
	void SetInnerConeAngle(float NewInnerConeAngle); // Function Engine.SpotLight.SetInnerConeAngle // Final|Native|Public|BlueprintCallable // @ game+0x2de7e80
};

// Class Engine.GeneratedMeshAreaLight
// Size: 0x3d8 (Inherited: 0x3d8)
struct AGeneratedMeshAreaLight : ASpotLight {
};

// Class Engine.LODActor
// Size: 0x400 (Inherited: 0x3c8)
struct ALODActor : AActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x3c8(0x08)
	struct TArray<struct AActor*> SubActors; // 0x3d0(0x10)
	float LODDrawDistance; // 0x3e0(0x04)
	int32_t LodLevel; // 0x3e4(0x04)
	struct TArray<struct UObject*> SubObjects; // 0x3e8(0x10)
	char UnknownData_3F8[0x8]; // 0x3f8(0x08)
};

// Class Engine.MaterialInstanceActor
// Size: 0x3d8 (Inherited: 0x3c8)
struct AMaterialInstanceActor : AActor {
	struct TArray<struct AActor*> TargetActors; // 0x3c8(0x10)
};

// Class Engine.MatineeActor
// Size: 0x440 (Inherited: 0x3c8)
struct AMatineeActor : AActor {
	struct UInterpData* MatineeData; // 0x3c8(0x08)
	struct FName MatineeControllerName; // 0x3d0(0x08)
	float PlayRate; // 0x3d8(0x04)
	char bPlayOnLevelLoad : 1; // 0x3dc(0x01)
	char bForceStartPos : 1; // 0x3dc(0x01)
	char UnknownData_3DC_2 : 6; // 0x3dc(0x01)
	char UnknownData_3DD[0x3]; // 0x3dd(0x03)
	float ForceStartPosition; // 0x3e0(0x04)
	char bLooping : 1; // 0x3e4(0x01)
	char bRewindOnPlay : 1; // 0x3e4(0x01)
	char bNoResetOnRewind : 1; // 0x3e4(0x01)
	char bRewindIfAlreadyPlaying : 1; // 0x3e4(0x01)
	char bDisableRadioFilter : 1; // 0x3e4(0x01)
	char bClientSideOnly : 1; // 0x3e4(0x01)
	char bSkipUpdateIfNotVisible : 1; // 0x3e4(0x01)
	char bIsSkippable : 1; // 0x3e4(0x01)
	char UnknownData_3E5[0x3]; // 0x3e5(0x03)
	int32_t PreferredSplitScreenNum; // 0x3e8(0x04)
	char bDisableMovementInput : 1; // 0x3ec(0x01)
	char bDisableLookAtInput : 1; // 0x3ec(0x01)
	char bHidePlayer : 1; // 0x3ec(0x01)
	char bHideHud : 1; // 0x3ec(0x01)
	char UnknownData_3EC_4 : 4; // 0x3ec(0x01)
	char UnknownData_3ED[0x3]; // 0x3ed(0x03)
	struct TArray<struct FInterpGroupActorInfo> GroupActorInfos; // 0x3f0(0x10)
	char bShouldShowGore : 1; // 0x400(0x01)
	char UnknownData_400_1 : 7; // 0x400(0x01)
	char UnknownData_401[0x7]; // 0x401(0x07)
	struct TArray<struct UInterpGroupInst*> GroupInst; // 0x408(0x10)
	struct TArray<struct FCameraCutInfo> CameraCuts; // 0x418(0x10)
	char bIsPlaying : 1; // 0x428(0x01)
	char bReversePlayback : 1; // 0x428(0x01)
	char bPaused : 1; // 0x428(0x01)
	char bPendingStop : 1; // 0x428(0x01)
	char UnknownData_428_4 : 4; // 0x428(0x01)
	char UnknownData_429[0x3]; // 0x429(0x03)
	float InterpPosition; // 0x42c(0x04)
	char UnknownData_430[0x4]; // 0x430(0x04)
	char ReplicationForceIsPlaying; // 0x434(0x01)
	char UnknownData_435[0x7]; // 0x435(0x07)
	char bServerInitialLevelStreamingComplete : 1; // 0x43c(0x01)
	char UnknownData_43C_1 : 7; // 0x43c(0x01)
	char UnknownData_43D[0x3]; // 0x43d(0x03)

	void Stop(); // Function Engine.MatineeActor.Stop // Native|Public|BlueprintCallable // @ game+0x2deb6f0
	void SetPosition(float NewPosition, bool bJump); // Function Engine.MatineeActor.SetPosition // Native|Public|BlueprintCallable // @ game+0x2de9f40
	void SetLoopingState(bool bNewLooping); // Function Engine.MatineeActor.SetLoopingState // Native|Public|BlueprintCallable // @ game+0x2de8db0
	void Reverse(); // Function Engine.MatineeActor.Reverse // Native|Public|BlueprintCallable // @ game+0x2de43f0
	void PlayInstantly(); // Function Engine.MatineeActor.PlayInstantly // Final|Native|Public|BlueprintCallable // @ game+0x2de3aa0
	void Play(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo); // Function Engine.MatineeActor.Play // Final|Native|Public|BlueprintCallable // @ game+0x2de3740
	void Pause(); // Function Engine.MatineeActor.Pause // Native|Public|BlueprintCallable // @ game+0x2de3520
	void ChangePlaybackDirection(); // Function Engine.MatineeActor.ChangePlaybackDirection // Native|Public|BlueprintCallable // @ game+0x2dd9c90
};

// Class Engine.MatineeActorCameraAnim
// Size: 0x448 (Inherited: 0x440)
struct AMatineeActorCameraAnim : AMatineeActor {
	struct UCameraAnim* CameraAnim; // 0x440(0x08)
};

// Class Engine.MergedCollisionActor
// Size: 0x3d0 (Inherited: 0x3c8)
struct AMergedCollisionActor : AActor {
	struct UMergedCollisionComponent* MergedCollisionComponent; // 0x3c8(0x08)
};

// Class Engine.NavigationQueryFilter
// Size: 0x40 (Inherited: 0x28)
struct UNavigationQueryFilter : UObject {
	struct TArray<struct FNavigationFilterArea> Areas; // 0x28(0x10)
	struct FNavigationFilterFlags IncludeFlags; // 0x38(0x04)
	struct FNavigationFilterFlags ExcludeFlags; // 0x3c(0x04)
};

// Class Engine.NavigationData
// Size: 0x588 (Inherited: 0x3c8)
struct ANavigationData : AActor {
	struct UPrimitiveComponent* RenderingComp; // 0x3c8(0x08)
	struct FNavDataConfig NavDataConfig; // 0x3d0(0x58)
	char bEnableDrawing : 1; // 0x428(0x01)
	char bRebuildAtRuntime : 1; // 0x428(0x01)
	char UnknownData_428_2 : 6; // 0x428(0x01)
	char UnknownData_429[0x3]; // 0x429(0x03)
	char RuntimeGeneration; // 0x42c(0x01)
	char UnknownData_42D[0x3]; // 0x42d(0x03)
	char bForceRebuildOnLoad : 1; // 0x430(0x01)
	char UnknownData_430_1 : 7; // 0x430(0x01)
	char UnknownData_431[0x3]; // 0x431(0x03)
	float ObservedPathsTickInterval; // 0x434(0x04)
	char UnknownData_438[0xe8]; // 0x438(0xe8)
	struct TArray<struct FSupportedAreaData> SupportedAreas; // 0x520(0x10)
	char UnknownData_530[0x58]; // 0x530(0x58)
};

// Class Engine.AbstractNavData
// Size: 0x588 (Inherited: 0x588)
struct AAbstractNavData : ANavigationData {
};

// Class Engine.NavigationGraph
// Size: 0x588 (Inherited: 0x588)
struct ANavigationGraph : ANavigationData {
};

// Class Engine.RecastNavMesh
// Size: 0x638 (Inherited: 0x588)
struct ARecastNavMesh : ANavigationData {
	char bDrawTriangleEdges : 1; // 0x588(0x01)
	char bDrawPolyEdges : 1; // 0x588(0x01)
	char bDrawFilledPolys : 1; // 0x588(0x01)
	char bDrawNavMeshEdges : 1; // 0x588(0x01)
	char bDrawTileBounds : 1; // 0x588(0x01)
	char bDrawPathCollidingGeometry : 1; // 0x588(0x01)
	char bDrawTileLabels : 1; // 0x588(0x01)
	char bDrawPolygonLabels : 1; // 0x588(0x01)
	char bDrawDefaultPolygonCost : 1; // 0x589(0x01)
	char bDrawLabelsOnPathNodes : 1; // 0x589(0x01)
	char bDrawNavLinks : 1; // 0x589(0x01)
	char bDrawFailedNavLinks : 1; // 0x589(0x01)
	char bDrawClusters : 1; // 0x589(0x01)
	char bDrawOctree : 1; // 0x589(0x01)
	char bDistinctlyDrawTilesBeingBuilt : 1; // 0x589(0x01)
	char bDrawNavMesh : 1; // 0x589(0x01)
	char UnknownData_58A[0x2]; // 0x58a(0x02)
	float DrawOffset; // 0x58c(0x04)
	float BuiltTileSizeUU; // 0x590(0x04)
	float BuiltCellSize; // 0x594(0x04)
	char bFixedTilePoolSize : 1; // 0x598(0x01)
	char UnknownData_598_1 : 7; // 0x598(0x01)
	char UnknownData_599[0x3]; // 0x599(0x03)
	int32_t TilePoolSize; // 0x59c(0x04)
	float TileSizeUU; // 0x5a0(0x04)
	float CellSize; // 0x5a4(0x04)
	float CellHeight; // 0x5a8(0x04)
	float AgentRadius; // 0x5ac(0x04)
	float AgentHeight; // 0x5b0(0x04)
	float AgentMaxHeight; // 0x5b4(0x04)
	float AgentMaxSlope; // 0x5b8(0x04)
	float AgentMaxStepHeight; // 0x5bc(0x04)
	float MinRegionArea; // 0x5c0(0x04)
	float MergeRegionSize; // 0x5c4(0x04)
	float MaxSimplificationError; // 0x5c8(0x04)
	int32_t MaxSimultaneousTileGenerationJobsCount; // 0x5cc(0x04)
	int32_t TileNumberHardLimit; // 0x5d0(0x04)
	int32_t PolyRefTileBits; // 0x5d4(0x04)
	int32_t PolyRefNavPolyBits; // 0x5d8(0x04)
	int32_t PolyRefSaltBits; // 0x5dc(0x04)
	float DefaultDrawDistance; // 0x5e0(0x04)
	float DefaultMaxSearchNodes; // 0x5e4(0x04)
	float DefaultMaxHierarchicalSearchNodes; // 0x5e8(0x04)
	char RegionPartitioning; // 0x5ec(0x01)
	char LayerPartitioning; // 0x5ed(0x01)
	char UnknownData_5EE[0x2]; // 0x5ee(0x02)
	int32_t RegionChunkSplits; // 0x5f0(0x04)
	int32_t LayerChunkSplits; // 0x5f4(0x04)
	char bSortNavigationAreasByCost : 1; // 0x5f8(0x01)
	char bPerformVoxelFiltering : 1; // 0x5f8(0x01)
	char bMarkLowHeightAreas : 1; // 0x5f8(0x01)
	char bDoFullyAsyncNavDataGathering : 1; // 0x5f8(0x01)
	char bUseBetterOffsetsFromCorners : 1; // 0x5f8(0x01)
	char bUseVirtualFilters : 1; // 0x5f8(0x01)
	char bUseVoxelCache : 1; // 0x5f8(0x01)
	char UnknownData_5F9[0x3]; // 0x5f9(0x03)
	float TileSetUpdateInterval; // 0x5fc(0x04)
	float HeuristicScale; // 0x600(0x04)
	float VerticalDeviationFromGroundCompensation; // 0x604(0x04)
	char UnknownData_608[0x30]; // 0x608(0x30)
};

// Class Engine.NavigationGraphNode
// Size: 0x3c8 (Inherited: 0x3c8)
struct ANavigationGraphNode : AActor {
};

// Class Engine.PlayerStartPIE
// Size: 0x3f8 (Inherited: 0x3f8)
struct APlayerStartPIE : APlayerStart {
};

// Class Engine.NavPathObserverInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavPathObserverInterface : UInterface {
};

// Class Engine.NavigationTestingActor
// Size: 0x498 (Inherited: 0x3c8)
struct ANavigationTestingActor : AActor {
	char UnknownData_3C8[0x10]; // 0x3c8(0x10)
	struct UCapsuleComponent* CapsuleComponent; // 0x3d8(0x08)
	struct UNavigationInvokerComponent* InvokerComponent; // 0x3e0(0x08)
	char bActAsNavigationInvoker : 1; // 0x3e8(0x01)
	char UnknownData_3E8_1 : 7; // 0x3e8(0x01)
	char UnknownData_3E9[0x3]; // 0x3e9(0x03)
	struct FNavAgentProperties NavAgentProps; // 0x3ec(0x30)
	struct FVector QueryingExtent; // 0x41c(0x0c)
	struct ANavigationData* MyNavData; // 0x428(0x08)
	struct FVector ProjectedLocation; // 0x430(0x0c)
	char bProjectedLocationValid : 1; // 0x43c(0x01)
	char bSearchStart : 1; // 0x43c(0x01)
	char bUseHierarchicalPathfinding : 1; // 0x43c(0x01)
	char bGatherDetailedInfo : 1; // 0x43c(0x01)
	char bShowNodePool : 1; // 0x43c(0x01)
	char bShowBestPath : 1; // 0x43c(0x01)
	char bShowDiffWithPreviousStep : 1; // 0x43c(0x01)
	char bShouldBeVisibleInGame : 1; // 0x43c(0x01)
	char UnknownData_43D[0x3]; // 0x43d(0x03)
	char CostDisplayMode; // 0x440(0x01)
	char UnknownData_441[0x3]; // 0x441(0x03)
	struct FVector2D TextCanvasOffset; // 0x444(0x08)
	char bPathExist : 1; // 0x44c(0x01)
	char bPathIsPartial : 1; // 0x44c(0x01)
	char bPathSearchOutOfNodes : 1; // 0x44c(0x01)
	char UnknownData_44C_3 : 5; // 0x44c(0x01)
	char UnknownData_44D[0x3]; // 0x44d(0x03)
	float PathfindingTime; // 0x450(0x04)
	float PathCost; // 0x454(0x04)
	int32_t PathfindingSteps; // 0x458(0x04)
	char UnknownData_45C[0x4]; // 0x45c(0x04)
	struct ANavigationTestingActor* OtherActor; // 0x460(0x08)
	struct UClass* FilterClass; // 0x468(0x08)
	int32_t ShowStepIndex; // 0x470(0x04)
	float OffsetFromCornersDistance; // 0x474(0x04)
	char UnknownData_478[0x20]; // 0x478(0x20)
};

// Class Engine.NavLinkDefinition
// Size: 0x50 (Inherited: 0x28)
struct UNavLinkDefinition : UObject {
	struct TArray<struct FNavigationLink> Links; // 0x28(0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks; // 0x38(0x10)
	char UnknownData_48[0x8]; // 0x48(0x08)
};

// Class Engine.NavLinkHostInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavLinkHostInterface : UInterface {
};

// Class Engine.NavLinkProxy
// Size: 0x418 (Inherited: 0x3c8)
struct ANavLinkProxy : AActor {
	char UnknownData_3C8[0x10]; // 0x3c8(0x10)
	struct TArray<struct FNavigationLink> PointLinks; // 0x3d8(0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks; // 0x3e8(0x10)
	struct UNavLinkCustomComponent* SmartLinkComp; // 0x3f8(0x08)
	bool bSmartLinkIsRelevant; // 0x400(0x01)
	char UnknownData_401[0x7]; // 0x401(0x07)
	struct FMulticastDelegate OnSmartLinkReached; // 0x408(0x10)

	void SetSmartLinkEnabled(bool bEnabled); // Function Engine.NavLinkProxy.SetSmartLinkEnabled // Final|Native|Public|BlueprintCallable // @ game+0x2dea550
	void ResumePathFollowing(struct AActor* Agent); // Function Engine.NavLinkProxy.ResumePathFollowing // Final|Native|Public|BlueprintCallable // @ game+0x2de4350
	void ReceiveSmartLinkReached(struct AActor* Agent, struct FVector Destination); // Function Engine.NavLinkProxy.ReceiveSmartLinkReached // Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x188c2f0
	bool IsSmartLinkEnabled(); // Function Engine.NavLinkProxy.IsSmartLinkEnabled // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de20e0
	bool HasMovingAgents(); // Function Engine.NavLinkProxy.HasMovingAgents // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de1790
};

// Class Engine.Note
// Size: 0x3c8 (Inherited: 0x3c8)
struct ANote : AActor {
};

// Class Engine.ParticleSystem
// Size: 0x140 (Inherited: 0x28)
struct UParticleSystem : UObject {
	char SystemUpdateMode; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	float UpdateTime_FPS; // 0x2c(0x04)
	float UpdateTime_Delta; // 0x30(0x04)
	float WarmUpTime; // 0x34(0x04)
	float WarmupTickRate; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct UParticleEmitter*> Emitters; // 0x40(0x10)
	struct UParticleSystemComponent* PreviewComponent; // 0x50(0x08)
	struct UInterpCurveEdSetup* CurveEdSetup; // 0x58(0x08)
	char bOrientZAxisTowardCamera : 1; // 0x60(0x01)
	char UnknownData_60_1 : 7; // 0x60(0x01)
	char UnknownData_61[0x3]; // 0x61(0x03)
	float LODDistanceCheckTime; // 0x64(0x04)
	char LODMethod; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
	struct TArray<float> LODDistances; // 0x70(0x10)
	char bRegenerateLODDuplicate : 1; // 0x80(0x01)
	char UnknownData_80_1 : 7; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
	struct TArray<struct FParticleSystemLOD> LODSettings; // 0x88(0x10)
	char bIgnoreBoundsRotation : 1; // 0x98(0x01)
	char bBoostParticleAggregationPriority : 1; // 0x98(0x01)
	char bUseFixedRelativeBoundingBox : 1; // 0x98(0x01)
	char UnknownData_98_3 : 5; // 0x98(0x01)
	char UnknownData_99[0x3]; // 0x99(0x03)
	struct FBox FixedRelativeBoundingBox; // 0x9c(0x1c)
	char bUseLowResTranslucencyBoundingBox : 1; // 0xb8(0x01)
	char UnknownData_B8_1 : 7; // 0xb8(0x01)
	char UnknownData_B9[0x3]; // 0xb9(0x03)
	struct FBox LowResTranslucencyBoundingBox; // 0xbc(0x1c)
	float SecondsBeforeInactive; // 0xd8(0x04)
	char bShouldResetPeakCounts : 1; // 0xdc(0x01)
	char bHasPhysics : 1; // 0xdc(0x01)
	char bPostPhysicsTick : 1; // 0xdc(0x01)
	char bUseRealtimeThumbnail : 1; // 0xdc(0x01)
	char ThumbnailImageOutOfDate : 1; // 0xdc(0x01)
	char UnknownData_DC_5 : 3; // 0xdc(0x01)
	char UnknownData_DD[0x3]; // 0xdd(0x03)
	float Delay; // 0xe0(0x04)
	float DelayLow; // 0xe4(0x04)
	char bUseDelayRange : 1; // 0xe8(0x01)
	char UnknownData_E8_1 : 7; // 0xe8(0x01)
	char UnknownData_E9[0x3]; // 0xe9(0x03)
	struct FVector MacroUVPosition; // 0xec(0x0c)
	float MacroUVRadius; // 0xf8(0x04)
	char OcclusionBoundsMethod; // 0xfc(0x01)
	char UnknownData_FD[0x3]; // 0xfd(0x03)
	struct FBox CustomOcclusionBounds; // 0x100(0x1c)
	char UnknownData_11C[0x4]; // 0x11c(0x04)
	struct TArray<struct FLODSoloTrack> SoloTracking; // 0x120(0x10)
	struct TArray<struct FNamedEmitterMaterial> NamedMaterialSlots; // 0x130(0x10)

	int32_t GetNumLODs(); // Function Engine.ParticleSystem.GetNumLODs // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2dde160
	bool ContainsEmitterType(struct UClass* TypeData); // Function Engine.ParticleSystem.ContainsEmitterType // Final|Native|Public|BlueprintCallable // @ game+0x2dda100
};

// Class Engine.ParticleSystemAggregateTickSettings
// Size: 0x38 (Inherited: 0x28)
struct UParticleSystemAggregateTickSettings : UObject {
	int32_t FramesTickScaledOver; // 0x28(0x04)
	int32_t MaxTicksPerFrame; // 0x2c(0x04)
	float PriorityInflationPower; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// Class Engine.ParticleEventManager
// Size: 0x3c8 (Inherited: 0x3c8)
struct AParticleEventManager : AActor {
};

// Class Engine.Interface_CollisionDataProvider
// Size: 0x28 (Inherited: 0x28)
struct UInterface_CollisionDataProvider : UInterface {
};

// Class Engine.MeshPatchAsset
// Size: 0x38 (Inherited: 0x28)
struct UMeshPatchAsset : UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
};

// Class Engine.SkeletalMesh
// Size: 0x238 (Inherited: 0x28)
struct USkeletalMesh : UObject {
	char UnknownData_28[0x28]; // 0x28(0x28)
	struct USkeleton* Skeleton; // 0x50(0x08)
	struct FBoxSphereBounds Bounds; // 0x58(0x1c)
	char UnknownData_74[0x4]; // 0x74(0x04)
	struct TArray<struct FSkeletalMaterial> Materials; // 0x78(0x10)
	struct TArray<struct FBoneMirrorInfo> SkelMirrorTable; // 0x88(0x10)
	char SkelMirrorAxis; // 0x98(0x01)
	char SkelMirrorFlipAxis; // 0x99(0x01)
	char UnknownData_9A[0x6]; // 0x9a(0x06)
	struct TArray<struct FSkeletalMeshLODInfo> LODInfo; // 0xa0(0x10)
	char bUseFullPrecisionUVs : 1; // 0xb0(0x01)
	char bHasBeenSimplified : 1; // 0xb0(0x01)
	char bHasVertexColors : 1; // 0xb0(0x01)
	char UnknownData_B0_3 : 5; // 0xb0(0x01)
	char UnknownData_B1[0x7]; // 0xb1(0x07)
	struct TArray<struct FDeformablesSettings> DeformablesSettings; // 0xb8(0x10)
	char bKeepTessellationAdjacency : 1; // 0xc8(0x01)
	char bKeepSkeletalMeshBuffersInMemory : 1; // 0xc8(0x01)
	char bEnablePerPolyCollision : 1; // 0xc8(0x01)
	char UnknownData_C8_3 : 5; // 0xc8(0x01)
	char UnknownData_C9[0x7]; // 0xc9(0x07)
	struct UBodySetup* BodySetup; // 0xd0(0x08)
	struct UPhysicsAsset* PhysicsAsset; // 0xd8(0x08)
	struct UHIKCharacterization* Characterization; // 0xe0(0x08)
	struct UPhysicsAsset* DeformablesPhysicsAsset; // 0xe8(0x08)
	float StreamingDistanceMultiplier; // 0xf0(0x04)
	float StreamingDiscardedTexelRatios; // 0xf4(0x04)
	struct TArray<struct UMorphTarget*> MorphTargets; // 0xf8(0x10)
	struct TArray<struct UMeshPatchAsset*> MeshPatchAssets; // 0x108(0x10)
	char UnknownData_118[0xd8]; // 0x118(0xd8)
	struct TArray<struct FClothingAssetData> ClothingAssets; // 0x1f0(0x10)
	char UnknownData_200[0x10]; // 0x200(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x210(0x10)
	char UnknownData_220[0x8]; // 0x220(0x08)
	struct TArray<struct USkeletalMeshSocket*> Sockets; // 0x228(0x10)

	bool IsSectionUsingCloth(int32_t InSectionIndex, bool bCheckCorrespondingSections); // Function Engine.SkeletalMesh.IsSectionUsingCloth // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de2020
	int32_t GetNumLODsBP(); // Function Engine.SkeletalMesh.GetNumLODsBP // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2dde190
	struct USkeletalMeshSocket* FindSocket(struct FName InSocketName); // Function Engine.SkeletalMesh.FindSocket // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddc0e0
};

// Class Engine.AnimationAsset
// Size: 0x50 (Inherited: 0x28)
struct UAnimationAsset : UObject {
	struct USkeleton* Skeleton; // 0x28(0x08)
	char UnknownData_30[0x10]; // 0x30(0x10)
	struct TArray<struct UAnimMetaData*> MetaData; // 0x40(0x10)
};

// Class Engine.DefaultPawn
// Size: 0x468 (Inherited: 0x440)
struct ADefaultPawn : APawn {
	float BaseTurnRate; // 0x440(0x04)
	float BaseLookUpRate; // 0x444(0x04)
	struct UPawnMovementComponent* MovementComponent; // 0x448(0x08)
	struct USphereComponent* CollisionComponent; // 0x450(0x08)
	struct UStaticMeshComponent* MeshComponent; // 0x458(0x08)
	char bAddDefaultMovementBindings : 1; // 0x460(0x01)
	char UnknownData_460_1 : 7; // 0x460(0x01)
	char UnknownData_461[0x7]; // 0x461(0x07)

	void TurnAtRate(float Rate); // Function Engine.DefaultPawn.TurnAtRate // Final|Native|Public|BlueprintCallable // @ game+0x2debd80
	void Turn(float Val); // Function Engine.DefaultPawn.Turn // Final|Native|Private|BlueprintCallable // @ game+0x2debd00
	void MoveUp_World(float Val); // Function Engine.DefaultPawn.MoveUp_World // Native|Public|BlueprintCallable // @ game+0x2de2b60
	void MoveRight(float Val); // Function Engine.DefaultPawn.MoveRight // Native|Public|BlueprintCallable // @ game+0x2de2ae0
	void MoveForward(float Val); // Function Engine.DefaultPawn.MoveForward // Native|Public|BlueprintCallable // @ game+0x2de2a60
	void LookUpAtRate(float Rate); // Function Engine.DefaultPawn.LookUpAtRate // Final|Native|Public|BlueprintCallable // @ game+0x2de29e0
	void LookUp(float Val); // Function Engine.DefaultPawn.LookUp // Final|Native|Private|BlueprintCallable // @ game+0x2de2960
};

// Class Engine.SpectatorPawn
// Size: 0x468 (Inherited: 0x468)
struct ASpectatorPawn : ADefaultPawn {
};

// Class Engine.ReflectionCapture
// Size: 0x3d0 (Inherited: 0x3c8)
struct AReflectionCapture : AActor {
	struct UReflectionCaptureComponent* CaptureComponent; // 0x3c8(0x08)
};

// Class Engine.BoxReflectionCapture
// Size: 0x3d0 (Inherited: 0x3d0)
struct ABoxReflectionCapture : AReflectionCapture {
};

// Class Engine.PlaneReflectionCapture
// Size: 0x3d0 (Inherited: 0x3d0)
struct APlaneReflectionCapture : AReflectionCapture {
};

// Class Engine.SphereReflectionCapture
// Size: 0x3d8 (Inherited: 0x3d0)
struct ASphereReflectionCapture : AReflectionCapture {
	struct UDrawSphereComponent* DrawCaptureRadius; // 0x3d0(0x08)
};

// Class Engine.RigidBodyBase
// Size: 0x3c8 (Inherited: 0x3c8)
struct ARigidBodyBase : AActor {
};

// Class Engine.PhysicsConstraintActor
// Size: 0x3e8 (Inherited: 0x3c8)
struct APhysicsConstraintActor : ARigidBodyBase {
	struct UPhysicsConstraintComponent* ConstraintComp; // 0x3c8(0x08)
	struct AActor* ConstraintActor1; // 0x3d0(0x08)
	struct AActor* ConstraintActor2; // 0x3d8(0x08)
	char bDisableCollision : 1; // 0x3e0(0x01)
	char UnknownData_3E0_1 : 7; // 0x3e0(0x01)
	char UnknownData_3E1[0x7]; // 0x3e1(0x07)
};

// Class Engine.PhysicsThruster
// Size: 0x3d0 (Inherited: 0x3c8)
struct APhysicsThruster : ARigidBodyBase {
	struct UPhysicsThrusterComponent* ThrusterComponent; // 0x3c8(0x08)
};

// Class Engine.RadialForceActor
// Size: 0x3d0 (Inherited: 0x3c8)
struct ARadialForceActor : ARigidBodyBase {
	struct URadialForceComponent* ForceComponent; // 0x3c8(0x08)

	void ToggleForce(); // Function Engine.RadialForceActor.ToggleForce // Native|Public|BlueprintCallable // @ game+0x2deb960
	void FireImpulse(); // Function Engine.RadialForceActor.FireImpulse // Native|Public|BlueprintCallable // @ game+0x2ddc170
	void EnableForce(); // Function Engine.RadialForceActor.EnableForce // Native|Public|BlueprintCallable // @ game+0x2ddbbe0
	void DisableForce(); // Function Engine.RadialForceActor.DisableForce // Native|Public|BlueprintCallable // @ game+0x2dda7f0
};

// Class Engine.SceneCapture
// Size: 0x3d0 (Inherited: 0x3c8)
struct ASceneCapture : AActor {
	struct UStaticMeshComponent* MeshComp; // 0x3c8(0x08)
};

// Class Engine.SceneCapture2D
// Size: 0x3e0 (Inherited: 0x3d0)
struct ASceneCapture2D : ASceneCapture {
	struct USceneCaptureComponent2D* CaptureComponent2D; // 0x3d0(0x08)
	struct UDrawFrustumComponent* DrawFrustum; // 0x3d8(0x08)

	void OnInterpToggle(bool bEnable); // Function Engine.SceneCapture2D.OnInterpToggle // Final|Native|Public|BlueprintCallable // @ game+0x2de2e90
};

// Class Engine.SceneCaptureCube
// Size: 0x3e0 (Inherited: 0x3d0)
struct ASceneCaptureCube : ASceneCapture {
	struct USceneCaptureComponentCube* CaptureComponentCube; // 0x3d0(0x08)
	struct UDrawFrustumComponent* DrawFrustum; // 0x3d8(0x08)

	void OnInterpToggle(bool bEnable); // Function Engine.SceneCaptureCube.OnInterpToggle // Final|Native|Public|BlueprintCallable // @ game+0x2de2f20
};

// Class Engine.ServerOnlyTestActor
// Size: 0x3c8 (Inherited: 0x3c8)
struct AServerOnlyTestActor : AActor {
};

// Class Engine.SkinnedMeshComponent
// Size: 0x6f0 (Inherited: 0x5d0)
struct USkinnedMeshComponent : UMeshComponent {
	struct USkeletalMesh* SkeletalMesh; // 0x5c8(0x08)
	struct USkinnedMeshComponent* MasterPoseComponent; // 0x5d0(0x08)
	char UnknownData_5E0[0x38]; // 0x5e0(0x38)
	struct UMaterialInterface* CustomDepthMaterial; // 0x618(0x08)
	char UnknownData_620[0x10]; // 0x620(0x10)
	char bUseBoundsFromMasterPoseComponent : 1; // 0x630(0x01)
	char UnknownData_630_1 : 7; // 0x630(0x01)
	char UnknownData_631[0x7]; // 0x631(0x07)
	struct TArray<struct FActiveVertexAnim> ActiveVertexAnims; // 0x638(0x10)
	struct UPhysicsAsset* PhysicsAssetOverride; // 0x648(0x08)
	int32_t ForcedLodModel; // 0x650(0x04)
	int32_t MinLodModel; // 0x654(0x04)
	int32_t PredictedLODLevel; // 0x658(0x04)
	int32_t OldPredictedLODLevel; // 0x65c(0x04)
	float MaxDistanceFactor; // 0x660(0x04)
	char UnknownData_664[0x4]; // 0x664(0x04)
	struct TArray<struct FSkelMeshComponentLODInfo> LODInfo; // 0x668(0x10)
	float StreamingDistanceMultiplier; // 0x678(0x04)
	struct FColor WireframeColor; // 0x67c(0x04)
	char bForceWireframe : 1; // 0x680(0x01)
	char bDisplayBones : 1; // 0x680(0x01)
	char bDisplayBoneCollisions : 1; // 0x680(0x01)
	char bDisableMorphTarget : 1; // 0x680(0x01)
	char bHideSkin : 1; // 0x680(0x01)
	char UnknownData_680_5 : 3; // 0x680(0x01)
	char UnknownData_681[0x17]; // 0x681(0x17)
	char bPerBoneMotionBlur : 1; // 0x698(0x01)
	char bComponentUseFixedSkelBounds : 1; // 0x698(0x01)
	char bConsiderAllBodiesForBounds : 1; // 0x698(0x01)
	char UnknownData_698_3 : 5; // 0x698(0x01)
	char UnknownData_699[0x3]; // 0x699(0x03)
	char MeshComponentUpdateFlag; // 0x69c(0x01)
	char UnknownData_69D[0x3]; // 0x69d(0x03)
	char bForceMeshObjectUpdate : 1; // 0x6a0(0x01)
	char bChartDistanceFactor : 1; // 0x6a0(0x01)
	char bCanHighlightSelectedSections : 1; // 0x6a0(0x01)
	char bRecentlyRendered : 1; // 0x6a0(0x01)
	char UnknownData_6A0_4 : 4; // 0x6a0(0x01)
	char UnknownData_6A1[0x3]; // 0x6a1(0x03)
	float ProgressiveDrawingFraction; // 0x6a4(0x04)
	char CustomSortAlternateIndexMode; // 0x6a8(0x01)
	char UnknownData_6A9[0x13]; // 0x6a9(0x13)
	struct FBoxSphereBounds CachedLocalBounds; // 0x6bc(0x1c)
	bool bCachedLocalBoundsUpToDate; // 0x6d8(0x01)
	bool bEnableUpdateRateOptimizations; // 0x6d9(0x01)
	bool bDisplayDebugUpdateRateOptimizations; // 0x6da(0x01)
	char UnknownData_6DB[0x15]; // 0x6db(0x15)

	void UnHideBoneByName(struct FName BoneName); // Function Engine.SkinnedMeshComponent.UnHideBoneByName // Final|Native|Public|BlueprintCallable // @ game+0x2debe90
	void TransformToBoneSpace(struct FName BoneName, struct FVector InPosition, struct FRotator InRotation, struct FVector OutPosition, struct FRotator OutRotation); // Function Engine.SkinnedMeshComponent.TransformToBoneSpace // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2debb40
	void TransformFromBoneSpace(struct FName BoneName, struct FVector InPosition, struct FRotator InRotation, struct FVector OutPosition, struct FRotator OutRotation); // Function Engine.SkinnedMeshComponent.TransformFromBoneSpace // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2deb980
	void SetSkeletalMesh(struct USkeletalMesh* NewMesh); // Function Engine.SkinnedMeshComponent.SetSkeletalMesh // Native|Public|BlueprintCallable // @ game+0x2dea4c0
	void SetPhysicsAsset(struct UPhysicsAsset* NewPhysicsAsset, bool bForceReInit); // Function Engine.SkinnedMeshComponent.SetPhysicsAsset // Native|Public|BlueprintCallable // @ game+0x2de9840
	void SetMasterPoseComponent(struct USkinnedMeshComponent* NewMasterBoneComponent); // Function Engine.SkinnedMeshComponent.SetMasterPoseComponent // Final|Native|Public|BlueprintCallable // @ game+0x2de9010
	void SetCustomDepthMaterial(struct UMaterialInterface* Material); // Function Engine.SkinnedMeshComponent.SetCustomDepthMaterial // Final|Native|Public|BlueprintCallable // @ game+0x2de71d0
	void OnRep_SkeletalMesh(struct USkeletalMesh* OldMesh); // Function Engine.SkinnedMeshComponent.OnRep_SkeletalMesh // Final|Native|Public // @ game+0x2de3240
	bool IsBoneHiddenByName(struct FName BoneName); // Function Engine.SkinnedMeshComponent.IsBoneHiddenByName // Final|Native|Public|BlueprintCallable // @ game+0x2de1a90
	void HideBoneByName(struct FName BoneName, char PhysBodyOption); // Function Engine.SkinnedMeshComponent.HideBoneByName // Final|Native|Public|BlueprintCallable // @ game+0x2de17c0
	struct FName GetSocketBoneName(struct FName InSocketName); // Function Engine.SkinnedMeshComponent.GetSocketBoneName // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de03a0
	struct FName GetParentBone(struct FName BoneName); // Function Engine.SkinnedMeshComponent.GetParentBone // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2dde6b0
	struct UMaterialInterface* GetCustomDepthMaterial(); // Function Engine.SkinnedMeshComponent.GetCustomDepthMaterial // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddce60
	struct FName GetBoneName(int32_t BoneIndex); // Function Engine.SkinnedMeshComponent.GetBoneName // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddc850
	int32_t GetBoneIndex(struct FName BoneName); // Function Engine.SkinnedMeshComponent.GetBoneIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddc7c0
	bool BoneIsChildOf(struct FName BoneName, struct FName ParentBoneName); // Function Engine.SkinnedMeshComponent.BoneIsChildOf // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2dd98b0
};

// Class Engine.PhysicsConstraintComponent
// Size: 0x490 (Inherited: 0x2e0)
struct UPhysicsConstraintComponent : USceneComponent {
	struct AActor* ConstraintActor1; // 0x2e0(0x08)
	struct FConstrainComponentPropName ComponentName1; // 0x2e8(0x08)
	struct AActor* ConstraintActor2; // 0x2f0(0x08)
	struct FConstrainComponentPropName ComponentName2; // 0x2f8(0x08)
	char UnknownData_300[0x10]; // 0x300(0x10)
	struct UPhysicsConstraintTemplate* ConstraintSetup; // 0x310(0x08)
	struct FMulticastDelegate OnConstraintBroken; // 0x318(0x10)
	char UnknownData_328[0x8]; // 0x328(0x08)
	struct FConstraintInstance ConstraintInstance; // 0x330(0x160)

	void SetLinearZLimit(char ConstraintType, float LimitSize); // Function Engine.PhysicsConstraintComponent.SetLinearZLimit // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2de8b60
	void SetLinearYLimit(char ConstraintType, float LimitSize); // Function Engine.PhysicsConstraintComponent.SetLinearYLimit // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2de8aa0
	void SetLinearXLimit(char ConstraintType, float LimitSize); // Function Engine.PhysicsConstraintComponent.SetLinearXLimit // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2de89e0
	void SetLinearVelocityTarget(struct FVector InVelTarget); // Function Engine.PhysicsConstraintComponent.SetLinearVelocityTarget // Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2de8950
	void SetLinearVelocityDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ); // Function Engine.PhysicsConstraintComponent.SetLinearVelocityDrive // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2de8830
	void SetLinearPositionTarget(struct FVector InPosTarget); // Function Engine.PhysicsConstraintComponent.SetLinearPositionTarget // Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2de87a0
	void SetLinearPositionDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ); // Function Engine.PhysicsConstraintComponent.SetLinearPositionDrive // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2de8680
	void SetLinearDriveParams(float InSpring, float InDamping, float InForceLimit); // Function Engine.PhysicsConstraintComponent.SetLinearDriveParams // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2de8570
	void SetDisableCollision(bool bDisableCollision); // Function Engine.PhysicsConstraintComponent.SetDisableCollision // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2de7730
	void SetConstraintReferencePosition(char Frame, struct FVector RefPosition); // Function Engine.PhysicsConstraintComponent.SetConstraintReferencePosition // Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2de7080
	void SetConstraintReferenceOrientation(char Frame, struct FVector PriAxis, struct FVector SecAxis); // Function Engine.PhysicsConstraintComponent.SetConstraintReferenceOrientation // Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2de6f60
	void SetConstraintReferenceFrame(char Frame, struct FTransform RefFrame); // Function Engine.PhysicsConstraintComponent.SetConstraintReferenceFrame // Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2de6e40
	void SetConstrainedComponents(struct UPrimitiveComponent* Component1, struct FName BoneName1, struct UPrimitiveComponent* Component2, struct FName BoneName2); // Function Engine.PhysicsConstraintComponent.SetConstrainedComponents // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2de6c70
	void SetAngularVelocityTarget(struct FVector InVelTarget); // Function Engine.PhysicsConstraintComponent.SetAngularVelocityTarget // Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2de5690
	void SetAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive); // Function Engine.PhysicsConstraintComponent.SetAngularVelocityDrive // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2de55c0
	void SetAngularTwistLimit(char ConstraintType, float TwistLimitAngle); // Function Engine.PhysicsConstraintComponent.SetAngularTwistLimit // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2de5500
	void SetAngularSwing2Limit(char MotionType, float Swing2LimitAngle); // Function Engine.PhysicsConstraintComponent.SetAngularSwing2Limit // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2de5440
	void SetAngularSwing1Limit(char MotionType, float Swing1LimitAngle); // Function Engine.PhysicsConstraintComponent.SetAngularSwing1Limit // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2de5380
	void SetAngularOrientationTarget(struct FRotator InPosTarget); // Function Engine.PhysicsConstraintComponent.SetAngularOrientationTarget // Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2de52f0
	void SetAngularOrientationDrive(bool bEnableSwingDrive, bool bEnableTwistDrive); // Function Engine.PhysicsConstraintComponent.SetAngularOrientationDrive // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2de5220
	void SetAngularDriveParams(float InSpring, float InDamping, float InForceLimit); // Function Engine.PhysicsConstraintComponent.SetAngularDriveParams // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2de5110
	float GetCurrentTwist(); // Function Engine.PhysicsConstraintComponent.GetCurrentTwist // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddce30
	float GetCurrentSwing2(); // Function Engine.PhysicsConstraintComponent.GetCurrentSwing2 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddce00
	float GetCurrentSwing1(); // Function Engine.PhysicsConstraintComponent.GetCurrentSwing1 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddcdd0
	void GetConstraintForce(struct FVector OutLinearForce, struct FVector OutAngularForce); // Function Engine.PhysicsConstraintComponent.GetConstraintForce // Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ddcc50
	void BreakConstraint(); // Function Engine.PhysicsConstraintComponent.BreakConstraint // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2dd9970
};

// Class Engine.Skeleton
// Size: 0x268 (Inherited: 0x28)
struct USkeleton : UObject {
	struct TArray<struct FBoneNode> BoneTree; // 0x28(0x10)
	char UnknownData_38[0x80]; // 0x38(0x80)
	struct TArray<struct FSkeletonToMeshLinkup> LinkupCache; // 0xb8(0x10)
	struct TArray<struct USkeletalMeshSocket*> Sockets; // 0xc8(0x10)
	char UnknownData_D8[0x50]; // 0xd8(0x50)
	struct FSmartNameContainer SmartNames; // 0x128(0x50)
	struct TArray<struct FAnimSlotGroup> SlotGroups; // 0x178(0x10)
	char UnknownData_188[0xe0]; // 0x188(0xe0)
};

// Class Engine.Interface_Animatable
// Size: 0x28 (Inherited: 0x28)
struct UInterface_Animatable : UInterface {

	struct UAnimInstance* GetAnimInstance(); // Function Engine.Interface_Animatable.GetAnimInstance // RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddc6b0
};

// Class Engine.SkeletalMeshComponent
// Size: 0x9c0 (Inherited: 0x6f0)
struct USkeletalMeshComponent : USkinnedMeshComponent {
	char UnknownData_6F0[0x10]; // 0x6f0(0x10)
	char AnimationMode; // 0x700(0x01)
	char UnknownData_701[0x7]; // 0x701(0x07)
	struct UClass* AnimBlueprintGeneratedClass; // 0x708(0x08)
	struct UAnimInstance* AnimScriptInstance; // 0x710(0x08)
	struct FSingleAnimationPlayData AnimationData; // 0x718(0x20)
	char UnknownData_738[0x10]; // 0x738(0x10)
	struct TArray<struct FTransform> CachedLocalAtoms; // 0x748(0x10)
	struct TArray<struct FTransform> CachedSpaceBases; // 0x758(0x10)
	char UnknownData_768[0x28]; // 0x768(0x28)
	float GlobalAnimRateScale; // 0x790(0x04)
	char bHasValidBodies : 1; // 0x794(0x01)
	char UnknownData_794_1 : 7; // 0x794(0x01)
	char UnknownData_795[0x3]; // 0x795(0x03)
	char KinematicBonesUpdateType; // 0x798(0x01)
	char UnknownData_799[0x3]; // 0x799(0x03)
	char bBlendPhysics : 1; // 0x79c(0x01)
	char bEnablePhysicsOnDedicatedServer : 1; // 0x79c(0x01)
	char bUpdateJointsFromAnimation : 1; // 0x79c(0x01)
	char bDisableClothSimulation : 1; // 0x79c(0x01)
	char bCollideWithEnvironment : 1; // 0x79c(0x01)
	char bCollideWithAttachedChildren : 1; // 0x79c(0x01)
	char bLocalSpaceSimulation : 1; // 0x79c(0x01)
	char bClothMorphTarget : 1; // 0x79c(0x01)
	char bResetAfterTeleport : 1; // 0x79d(0x01)
	char UnknownData_79D_1 : 7; // 0x79d(0x01)
	char UnknownData_79E[0x2]; // 0x79e(0x02)
	float TeleportDistanceThreshold; // 0x7a0(0x04)
	float TeleportRotationThreshold; // 0x7a4(0x04)
	float ClothBlendWeight; // 0x7a8(0x04)
	char UnknownData_7AC[0x4]; // 0x7ac(0x04)
	struct FVector RootBoneTranslation; // 0x7b0(0x0c)
	char bNoSkeletonUpdate : 1; // 0x7bc(0x01)
	char bPauseAnims : 1; // 0x7bc(0x01)
	char bEnablePerPolyCollision : 1; // 0x7bc(0x01)
	char UnknownData_7BC_3 : 5; // 0x7bc(0x01)
	char UnknownData_7BD[0x3]; // 0x7bd(0x03)
	struct UBodySetup* BodySetup; // 0x7c0(0x08)
	char bAutonomousTickPose : 1; // 0x7c8(0x01)
	char bForceRefpose : 1; // 0x7c8(0x01)
	char bOldForceRefPose : 1; // 0x7c8(0x01)
	char bShowPrePhysBones : 1; // 0x7c8(0x01)
	char bRequiredBonesUpToDate : 1; // 0x7c8(0x01)
	char bAnimTreeInitialised : 1; // 0x7c8(0x01)
	char bEnableLineCheckWithBounds : 1; // 0x7c8(0x01)
	char UnknownData_7C9[0x3]; // 0x7c9(0x03)
	struct FVector LineCheckBoundsScale; // 0x7cc(0x0c)
	int32_t RagdollAggregateThreshold; // 0x7d8(0x04)
	char UnknownData_7DC[0x4]; // 0x7dc(0x04)
	struct FMulticastDelegate OnConstraintBroken; // 0x7e0(0x10)
	bool UseRefPoseToInitialise; // 0x7f0(0x01)
	char UnknownData_7F1[0x1c7]; // 0x7f1(0x1c7)
	float LastPoseTickTime; // 0x9b8(0x04)
	char UnknownData_9BC[0x4]; // 0x9bc(0x04)

	void UnbindClothFromMasterPoseComponent(bool bRestoreSimulationSpace); // Function Engine.SkeletalMeshComponent.UnbindClothFromMasterPoseComponent // Final|Native|Public|BlueprintCallable // @ game+0x2debf10
	void Stop(); // Function Engine.SkeletalMeshComponent.Stop // Final|Native|Public|BlueprintCallable // @ game+0x2deb710
	void SetPosition(float InPos, bool bFireNotifies); // Function Engine.SkeletalMeshComponent.SetPosition // Final|Native|Public|BlueprintCallable // @ game+0x2dea010
	void SetPlayRate(float Rate); // Function Engine.SkeletalMeshComponent.SetPlayRate // Final|Native|Public|BlueprintCallable // @ game+0x2de9ec0
	void SetPhysicsBlendWeight(float PhysicsBlendWeight); // Function Engine.SkeletalMeshComponent.SetPhysicsBlendWeight // Final|Native|Public|BlueprintCallable // @ game+0x2de9910
	void SetMorphTarget(struct FName MorphTargetName, float Value, bool bRemoveZeroWeight); // Function Engine.SkeletalMeshComponent.SetMorphTarget // Final|Native|Public|BlueprintCallable // @ game+0x2de9360
	void SetEnablePhysicsBlending(bool bNewBlendPhysics); // Function Engine.SkeletalMeshComponent.SetEnablePhysicsBlending // Final|Native|Public|BlueprintCallable // @ game+0x2de7a40
	void SetClothMaxDistanceScale(float Scale); // Function Engine.SkeletalMeshComponent.SetClothMaxDistanceScale // Final|Native|Public|BlueprintCallable // @ game+0x2de6780
	void SetAnimInstanceClass(struct UClass* NewClass); // Function Engine.SkeletalMeshComponent.SetAnimInstanceClass // Final|Native|Public|BlueprintCallable // @ game+0x2de5720
	void SetAnimationMode(char InAnimationMode); // Function Engine.SkeletalMeshComponent.SetAnimationMode // Final|Native|Public|BlueprintCallable // @ game+0x2de5820
	void SetAnimation(struct UAnimationAsset* NewAnimToPlay); // Function Engine.SkeletalMeshComponent.SetAnimation // Final|Native|Public|BlueprintCallable // @ game+0x2de57a0
	void SetAllMotorsAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType); // Function Engine.SkeletalMeshComponent.SetAllMotorsAngularVelocityDrive // Final|Native|Public|BlueprintCallable // @ game+0x2de4e90
	void SetAllMotorsAngularPositionDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType); // Function Engine.SkeletalMeshComponent.SetAllMotorsAngularPositionDrive // Final|Native|Public|BlueprintCallable // @ game+0x2de4d70
	void SetAllMotorsAngularDriveParams(float InSpring, float InDamping, float InForceLimit, bool bSkipCustomPhysicsType); // Function Engine.SkeletalMeshComponent.SetAllMotorsAngularDriveParams // Final|Native|Public|BlueprintCallable // @ game+0x2de4c10
	void SetAllBodiesSimulatePhysics(bool bNewSimulate); // Function Engine.SkeletalMeshComponent.SetAllBodiesSimulatePhysics // Final|Native|Public|BlueprintCallable // @ game+0x2de4b00
	void SetAllBodiesPhysicsBlendWeight(float PhysicsBlendWeight, bool bSkipCustomPhysicsType); // Function Engine.SkeletalMeshComponent.SetAllBodiesPhysicsBlendWeight // Final|Native|Public|BlueprintCallable // @ game+0x2de4a30
	void SetAllBodiesBelowSimulatePhysics(struct FName InBoneName, bool bNewSimulate); // Function Engine.SkeletalMeshComponent.SetAllBodiesBelowSimulatePhysics // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x2de4960
	void SetAllBodiesBelowPhysicsBlendWeight(struct FName InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType); // Function Engine.SkeletalMeshComponent.SetAllBodiesBelowPhysicsBlendWeight // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x2de4840
	void ResetClothTeleportMode(); // Function Engine.SkeletalMeshComponent.ResetClothTeleportMode // Final|Native|Public|BlueprintCallable // @ game+0x2de42b0
	void ResetAllBodiesSimulatePhysics(); // Function Engine.SkeletalMeshComponent.ResetAllBodiesSimulatePhysics // Final|Native|Public|BlueprintCallable // @ game+0x2de4290
	void PlayAnimation(struct UAnimationAsset* NewAnimToPlay, bool bLooping); // Function Engine.SkeletalMeshComponent.PlayAnimation // Final|Native|Public|BlueprintCallable // @ game+0x2de39d0
	void Play(bool bLooping); // Function Engine.SkeletalMeshComponent.Play // Final|Native|Public|BlueprintCallable // @ game+0x2de3830
	bool IsPlaying(); // Function Engine.SkeletalMeshComponent.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2de1f90
	float GetPosition(); // Function Engine.SkeletalMeshComponent.GetPosition // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddef90
	float GetPlayRate(); // Function Engine.SkeletalMeshComponent.GetPlayRate // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddef60
	float GetMorphTarget(struct FName MorphTargetName); // Function Engine.SkeletalMeshComponent.GetMorphTarget // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddde70
	float GetClothMaxDistanceScale(); // Function Engine.SkeletalMeshComponent.GetClothMaxDistanceScale // Final|Native|Public|BlueprintCallable // @ game+0x2ddcaf0
	struct UAnimInstance* GetAnimInstance(); // Function Engine.SkeletalMeshComponent.GetAnimInstance // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddc6e0
	char GetAnimationMode(); // Function Engine.SkeletalMeshComponent.GetAnimationMode // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ddc720
	void ForceClothNextUpdateTeleportAndReset(); // Function Engine.SkeletalMeshComponent.ForceClothNextUpdateTeleportAndReset // Final|Native|Public|BlueprintCallable // @ game+0x2ddc1b0
	void ForceClothNextUpdateTeleport(); // Function Engine.SkeletalMeshComponent.ForceClothNextUpdateTeleport // Final|Native|Public|BlueprintCallable // @ game+0x2ddc190
	void ClearMorphTargets(); // Function Engine.SkeletalMeshComponent.ClearMorphTargets // Final|Native|Public|BlueprintCallable // @ game+0x2dd9d50
	void BindClothToMasterPoseComponent(); // Function Engine.SkeletalMeshComponent.BindClothToMasterPoseComponent // Final|Native|Public|BlueprintCallable // @ game+0x2dd9890
	void AccumulateAllBodiesBelowPhysicsBlendWeight(struct FName InBoneName, float AddPhysicsBlendWeight, bool bSkipCustomPhysicsType); // Function Engine.SkeletalMeshComponent.AccumulateAllBodiesBelowPhysicsBlendWeight // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x2dd7e90
};

// Class Engine.MatineeAnimInterface
// Size: 0x28 (Inherited: 0x28)
struct UMatineeAnimInterface : UInterface {
};

// Class Engine.SkeletalMeshActor
// Size: 0x3f8 (Inherited: 0x3c8)
struct ASkeletalMeshActor : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	char bShouldDoAnimNotifies : 1; // 0x3d0(0x01)
	char bWakeOnLevelStart : 1; // 0x3d0(0x01)
	char UnknownData_3D0_2 : 6; // 0x3d0(0x01)
	char UnknownData_3D1[0x7]; // 0x3d1(0x07)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x3d8(0x08)
	struct USkeletalMesh* ReplicatedMesh; // 0x3e0(0x08)
	struct UPhysicsAsset* ReplicatedPhysAsset; // 0x3e8(0x08)
	char UnknownData_3F0[0x8]; // 0x3f0(0x08)

	void OnRep_ReplicatedPhysAsset(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedPhysAsset // Native|Public // @ game+0x2de31e0
	void OnRep_ReplicatedMesh(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedMesh // Native|Public // @ game+0x2de31c0
};

// Class Engine.SplineMeshActor
// Size: 0x3d0 (Inherited: 0x3c8)
struct ASplineMeshActor : AActor {
	struct USplineMeshComponent* SplineMeshComponent; // 0x3c8(0x08)
};

// Class Engine.CoveredMeshActor
// Size: 0x3e0 (Inherited: 0x3d8)
struct ACoveredMeshActor : AStaticMeshActor {
	struct UInstancedCoverageMeshComponent* InstancedCoverageMeshComponent; // 0x3d8(0x08)
};

// Class Engine.StreamingProbe
// Size: 0x3c8 (Inherited: 0x3c8)
struct AStreamingProbe : AActor {
};

// Class Engine.TargetPoint
// Size: 0x3c8 (Inherited: 0x3c8)
struct ATargetPoint : AActor {
};

// Class Engine.TextRenderActor
// Size: 0x3d0 (Inherited: 0x3c8)
struct ATextRenderActor : AActor {
	struct UTextRenderComponent* TextRender; // 0x3c8(0x08)
};

// Class Engine.TriggerBase
// Size: 0x3d8 (Inherited: 0x3c8)
struct ATriggerBase : AActor {
	struct UShapeComponent* CollisionComponent; // 0x3c8(0x08)
	struct UBillboardComponent* SpriteComponent; // 0x3d0(0x08)
};

// Class Engine.TriggerBox
// Size: 0x3d8 (Inherited: 0x3d8)
struct ATriggerBox : ATriggerBase {
};

// Class Engine.TriggerCapsule
// Size: 0x3d8 (Inherited: 0x3d8)
struct ATriggerCapsule : ATriggerBase {
};

// Class Engine.TriggerSphere
// Size: 0x3d8 (Inherited: 0x3d8)
struct ATriggerSphere : ATriggerBase {
};

// Class Engine.VectorFieldVolume
// Size: 0x3d0 (Inherited: 0x3c8)
struct AVectorFieldVolume : AActor {
	struct UVectorFieldComponent* VectorFieldComponent; // 0x3c8(0x08)
};

// Class Engine.WaterEmissionVolume
// Size: 0x3d0 (Inherited: 0x3c8)
struct AWaterEmissionVolume : AActor {
	struct UWaterEmissionVolumeComponent* WaterEmissionVolumeComponent; // 0x3c8(0x08)
};

// Class Engine.ComponentWithTestInterface
// Size: 0xd0 (Inherited: 0xc8)
struct UComponentWithTestInterface : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
};

// Class Engine.AnotherComponentWithTestInterface
// Size: 0xd0 (Inherited: 0xc8)
struct UAnotherComponentWithTestInterface : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
};

// Class Engine.ApplicationLifecycleComponent
// Size: 0x118 (Inherited: 0xc8)
struct UApplicationLifecycleComponent : UActorComponent {
	struct FMulticastDelegate ApplicationWillDeactivateDelegate; // 0xc8(0x10)
	struct FMulticastDelegate ApplicationHasReactivatedDelegate; // 0xd8(0x10)
	struct FMulticastDelegate ApplicationWillEnterBackgroundDelegate; // 0xe8(0x10)
	struct FMulticastDelegate ApplicationHasEnteredForegroundDelegate; // 0xf8(0x10)
	struct FMulticastDelegate ApplicationWillTerminateDelegate; // 0x108(0x10)

	void ApplicationLifetimeDelegate__DelegateSignature(); // DelegateFunction Engine.ApplicationLifecycleComponent.ApplicationLifetimeDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x188c2f0
};

// Class Engine.AggregatorInterface
// Size: 0x28 (Inherited: 0x28)
struct UAggregatorInterface : UInterface {

	void UnregisterAggregatable(TScriptInterface<struct UAggregatableInterface> InAggregatable); // Function Engine.AggregatorInterface.UnregisterAggregatable // Native|Public|BlueprintCallable // @ game+0x2debfa0
	void RegisterAggregatable(TScriptInterface<struct UAggregatableInterface> InAggregatable); // Function Engine.AggregatorInterface.RegisterAggregatable // Native|Public|BlueprintCallable // @ game+0x2de3ec0
};

// Class Engine.ComponentAggregatorComponent
// Size: 0xe0 (Inherited: 0xc8)
struct UComponentAggregatorComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct TArray<struct UObject*> Aggregatables; // 0xd0(0x10)

	void UnregisterAggregatable(TScriptInterface<struct UAggregatableInterface> InAggregatable); // Function Engine.ComponentAggregatorComponent.UnregisterAggregatable // Native|Public|BlueprintCallable // @ game+0x2dec040
	void RegisterAggregatable(TScriptInterface<struct UAggregatableInterface> InAggregatable); // Function Engine.ComponentAggregatorComponent.RegisterAggregatable // Native|Public|BlueprintCallable // @ game+0x2de3f60
};

// Class Engine.InterpToMovementComponent
// Size: 0x1a8 (Inherited: 0x110)
struct UInterpToMovementComponent : UMovementComponent {
	float Duration; // 0x110(0x04)
	char bPauseOnImpact : 1; // 0x114(0x01)
	char UnknownData_114_1 : 7; // 0x114(0x01)
	char UnknownData_115[0x3]; // 0x115(0x03)
	char BehaviourType; // 0x118(0x01)
	char UnknownData_119[0x3]; // 0x119(0x03)
	char bForceSubStepping : 1; // 0x11c(0x01)
	char UnknownData_11C_1 : 7; // 0x11c(0x01)
	char UnknownData_11D[0x3]; // 0x11d(0x03)
	struct FMulticastDelegate OnInterpToReverse; // 0x120(0x10)
	struct FMulticastDelegate OnInterpToStop; // 0x130(0x10)
	struct FMulticastDelegate OnWaitBeginDelegate; // 0x140(0x10)
	struct FMulticastDelegate OnWaitEndDelegate; // 0x150(0x10)
	struct FMulticastDelegate OnResetDelegate; // 0x160(0x10)
	float MaxSimulationTimeStep; // 0x170(0x04)
	int32_t MaxSimulationIterations; // 0x174(0x04)
	struct TArray<struct FInterpControlPoint> ControlPoints; // 0x178(0x10)
	char UnknownData_188[0x20]; // 0x188(0x20)

	void StopSimulating(struct FHitResult HitResult); // Function Engine.InterpToMovementComponent.StopSimulating // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x2deb860
	void OnInterpToWaitEndDelegate__DelegateSignature(struct FHitResult ImpactResult, float Time); // DelegateFunction Engine.InterpToMovementComponent.OnInterpToWaitEndDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x188c2f0
	void OnInterpToWaitBeginDelegate__DelegateSignature(struct FHitResult ImpactResult, float Time); // DelegateFunction Engine.InterpToMovementComponent.OnInterpToWaitBeginDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x188c2f0
	void OnInterpToStopDelegate__DelegateSignature(struct FHitResult ImpactResult, float Time); // DelegateFunction Engine.InterpToMovementComponent.OnInterpToStopDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x188c2f0
	void OnInterpToReverseDelegate__DelegateSignature(struct FHitResult ImpactResult, float Time); // DelegateFunction Engine.InterpToMovementComponent.OnInterpToReverseDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x188c2f0
	void OnInterpToResetDelegate__DelegateSignature(struct FHitResult ImpactResult, float Time); // DelegateFunction Engine.InterpToMovementComponent.OnInterpToResetDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x188c2f0
};

// Class Engine.NavigationSystem
// Size: 0x3d8 (Inherited: 0x28)
struct UNavigationSystem : UBlueprintFunctionLibrary {
	struct ANavigationData* MainNavData; // 0x28(0x08)
	struct ANavigationData* AbstractNavData; // 0x30(0x08)
	char bAutoCreateNavigationData : 1; // 0x38(0x01)
	char bAllowClientSideNavigation : 1; // 0x38(0x01)
	char bSupportRebuilding : 1; // 0x38(0x01)
	char bInitialBuildingLocked : 1; // 0x38(0x01)
	char UnknownData_38_4 : 1; // 0x38(0x01)
	char bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x38(0x01)
	char UnknownData_38_6 : 2; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	char DataGatheringMode; // 0x3c(0x01)
	char UnknownData_3D[0x3]; // 0x3d(0x03)
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x40(0x01)
	char UnknownData_40_1 : 7; // 0x40(0x01)
	char UnknownData_41[0x3]; // 0x41(0x03)
	float ActiveTilesUpdateInterval; // 0x44(0x04)
	struct TArray<struct FNavDataConfig> SupportedAgents; // 0x48(0x10)
	float DirtyAreasUpdateFreq; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct ANavigationData*> NavDataSet; // 0x60(0x10)
	struct TArray<struct ANavigationData*> NavDataRegistrationQueue; // 0x70(0x10)
	char UnknownData_80[0x60]; // 0x80(0x60)
	struct FMulticastDelegate OnNavDataRegisteredEvent; // 0xe0(0x10)
	struct FMulticastDelegate OnNavigationGenerationFinishedDelegate; // 0xf0(0x10)
	char UnknownData_100[0xcc]; // 0x100(0xcc)
	char OperationMode; // 0x1cc(0x01)
	char UnknownData_1CD[0x1f3]; // 0x1cd(0x1f3)
	struct FStringAssetReference InstancedNavMeshesDataAsset; // 0x3c0(0x10)
	struct UInstancedNavMeshesDataAsset* InstancedNavMeshesData; // 0x3d0(0x08)

	void UnregisterNavigationInvoker(struct AActor* Invoker); // Function Engine.NavigationSystem.UnregisterNavigationInvoker // Final|Native|Public|BlueprintCallable // @ game+0x2dec0e0
	void SimpleMoveToLocation(struct AController* Controller, struct FVector Goal); // Function Engine.NavigationSystem.SimpleMoveToLocation // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2deb4e0
	void SimpleMoveToActor(struct AController* Controller, struct AActor* Goal); // Function Engine.NavigationSystem.SimpleMoveToActor // Final|Native|Static|Public|BlueprintCallable // @ game+0x2deb430
	void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs); // Function Engine.NavigationSystem.SetMaxSimultaneousTileGenerationJobsCount // Final|Native|Public|BlueprintCallable // @ game+0x2de92e0
	void SetGeometryGatheringMode(char NewMode); // Function Engine.NavigationSystem.SetGeometryGatheringMode // Final|Native|Public|BlueprintCallable // @ game+0x2de7d00
	void ResetMaxSimultaneousTileGenerationJobsCount(); // Function Engine.NavigationSystem.ResetMaxSimultaneousTileGenerationJobsCount // Final|Native|Public|BlueprintCallable // @ game+0x2de4310
	void RegisterNavigationInvoker(struct AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius); // Function Engine.NavigationSystem.RegisterNavigationInvoker // Final|Native|Public|BlueprintCallable // @ game+0x2de4000
	struct FVector ProjectPointToNavigation(struct UObject* WorldContext, struct FVector Point, struct ANavigationData* NavData, struct UClass* FilterClass, struct FVector QueryExtent); // Function Engine.NavigationSystem.ProjectPointToNavigation // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2de3c10
	void OnNavigationBoundsUpdated(struct ANavMeshBoundsVolume* NavVolume); // Function Engine.NavigationSystem.OnNavigationBoundsUpdated // Final|Native|Public|BlueprintCallable // @ game+0x2de2fd0
	bool NavigationRaycast(struct UObject* WorldContext, struct FVector RayStart, struct FVector RayEnd, struct FVector HitLocation, struct UClass* FilterClass, struct AController* Querier); // Function Engine.NavigationSystem.NavigationRaycast // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2de2c80
	bool IsNavigationBeingBuilt(struct UObject* WorldContext); // Function Engine.NavigationSystem.IsNavigationBeingBuilt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2de1df0
	struct FVector GetRandomReachablePointInRadius(struct UObject* WorldContext, struct FVector Origin, float Radius, struct ANavigationData* NavData, struct UClass* FilterClass); // Function Engine.NavigationSystem.GetRandomReachablePointInRadius // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ddf730
	struct FVector GetRandomPointInRadius(struct UObject* WorldContext, struct FVector Origin, float Radius, struct ANavigationData* NavData, struct UClass* FilterClass); // Function Engine.NavigationSystem.GetRandomPointInRadius // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ddf560
	struct FVector GetRandomPointInNavigableRadius(struct UObject* WorldContext, struct FVector Origin, float Radius, struct ANavigationData* NavData, struct UClass* FilterClass); // Function Engine.NavigationSystem.GetRandomPointInNavigableRadius // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ddf390
	struct FVector GetRandomPoint(struct UObject* WorldContext, struct ANavigationData* NavData, struct UClass* FilterClass); // Function Engine.NavigationSystem.GetRandomPoint // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ddf290
	char GetPathLength(struct UObject* WorldContext, struct FVector PathStart, struct FVector PathEnd, float PathLength, struct ANavigationData* NavData, struct UClass* FilterClass); // Function Engine.NavigationSystem.GetPathLength // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2dde960
	char GetPathCost(struct UObject* WorldContext, struct FVector PathStart, struct FVector PathEnd, float PathCost, struct ANavigationData* NavData, struct UClass* FilterClass); // Function Engine.NavigationSystem.GetPathCost // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2dde740
	struct UNavigationSystem* GetNavigationSystem(struct UObject* WorldContext); // Function Engine.NavigationSystem.GetNavigationSystem // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2dde0b0
	struct ANavigationData* GetMainNavData(); // Function Engine.NavigationSystem.GetMainNavData // Final|Native|Public|BlueprintCallable // @ game+0x2dddbd0
	struct UNavigationPath* FindPathToLocationSynchronously(struct UObject* WorldContext, struct FVector PathStart, struct FVector PathEnd, struct AActor* PathfindingContext, struct UClass* FilterClass); // Function Engine.NavigationSystem.FindPathToLocationSynchronously // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ddbe30
	struct UNavigationPath* FindPathToActorSynchronously(struct UObject* WorldContext, struct FVector PathStart, struct AActor* GoalActor, float TetherDistance, struct AActor* PathfindingContext, struct UClass* FilterClass); // Function Engine.NavigationSystem.FindPathToActorSynchronously // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ddbc40
	bool DoesMainNavDataHaveValidNavMesh(); // Function Engine.NavigationSystem.DoesMainNavDataHaveValidNavMesh // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2dda810
};

// Class Engine.AnimSequenceBase
// Size: 0x78 (Inherited: 0x50)
struct UAnimSequenceBase : UAnimationAsset {
	struct TArray<struct FAnimNotifyEvent> Notifies; // 0x50(0x10)
	float SequenceLength; // 0x60(0x04)
	float RateScale; // 0x64(0x04)
	struct FRawCurveTracks RawCurveData; // 0x68(0x10)

	float GetPlayLength(); // Function Engine.AnimSequenceBase.GetPlayLength // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eeb6e0
};

// Class Engine.AnimCompositeBase
// Size: 0x78 (Inherited: 0x78)
struct UAnimCompositeBase : UAnimSequenceBase {
};

// Class Engine.AnimStateMachineTypes
// Size: 0x28 (Inherited: 0x28)
struct UAnimStateMachineTypes : UObject {
};

// Class Engine.AnimMontage
// Size: 0xe8 (Inherited: 0x78)
struct UAnimMontage : UAnimCompositeBase {
	float BlendInTime; // 0x78(0x04)
	float BlendOutTime; // 0x7c(0x04)
	float BlendOutTriggerTime; // 0x80(0x04)
	char UnknownData_84[0x4]; // 0x84(0x04)
	struct TArray<struct FCompositeSection> CompositeSections; // 0x88(0x10)
	struct TArray<struct FSlotAnimationTrack> SlotAnimTracks; // 0x98(0x10)
	struct TArray<struct FBranchingPoint> BranchingPoints; // 0xa8(0x10)
	bool bEnableRootMotionTranslation; // 0xb8(0x01)
	bool bEnableRootMotionRotation; // 0xb9(0x01)
	char RootMotionRootLock; // 0xba(0x01)
	char UnknownData_BB[0x5]; // 0xbb(0x05)
	struct TArray<struct FBranchingPointMarker> BranchingPointMarkers; // 0xc0(0x10)
	bool bAnimBranchingPointNeedsSort; // 0xd0(0x01)
	char UnknownData_D1[0x7]; // 0xd1(0x07)
	struct TArray<int32_t> BranchingPointStateNotifyIndices; // 0xd8(0x10)
};

// Class Engine.RVOAvoidanceInterface
// Size: 0x28 (Inherited: 0x28)
struct URVOAvoidanceInterface : UInterface {
};

// Class Engine.NetworkPredictionInterface
// Size: 0x28 (Inherited: 0x28)
struct UNetworkPredictionInterface : UInterface {
};

// Class Engine.FloatingPawnMovement
// Size: 0x178 (Inherited: 0x160)
struct UFloatingPawnMovement : UPawnMovementComponent {
	float MaxSpeed; // 0x160(0x04)
	float Acceleration; // 0x164(0x04)
	float Deceleration; // 0x168(0x04)
	float TurningBoost; // 0x16c(0x04)
	char bPositionCorrected : 1; // 0x170(0x01)
	char UnknownData_170_1 : 7; // 0x170(0x01)
	char UnknownData_171[0x7]; // 0x171(0x07)
};

// Class Engine.SpectatorPawnMovement
// Size: 0x180 (Inherited: 0x178)
struct USpectatorPawnMovement : UFloatingPawnMovement {
	char bIgnoreTimeDilation : 1; // 0x178(0x01)
	char UnknownData_178_1 : 7; // 0x178(0x01)
	char UnknownData_179[0x7]; // 0x179(0x07)
};

// Class Engine.ProjectileMovementComponent
// Size: 0x178 (Inherited: 0x110)
struct UProjectileMovementComponent : UMovementComponent {
	float InitialSpeed; // 0x110(0x04)
	float MaxSpeed; // 0x114(0x04)
	char bRotationFollowsVelocity : 1; // 0x118(0x01)
	char bShouldBounce : 1; // 0x118(0x01)
	char bInitialVelocityInLocalSpace : 1; // 0x118(0x01)
	char bForceSubStepping : 1; // 0x118(0x01)
	char bIsHomingProjectile : 1; // 0x118(0x01)
	char bBounceAngleAffectsFriction : 1; // 0x118(0x01)
	char bIsSliding : 1; // 0x118(0x01)
	char UnknownData_119[0x3]; // 0x119(0x03)
	float PreviousHitTime; // 0x11c(0x04)
	struct FVector PreviousHitNormal; // 0x120(0x0c)
	float ProjectileGravityScale; // 0x12c(0x04)
	float Buoyancy; // 0x130(0x04)
	float Bounciness; // 0x134(0x04)
	float Friction; // 0x138(0x04)
	float BounceVelocityStopSimulatingThreshold; // 0x13c(0x04)
	struct FMulticastDelegate OnProjectileBounce; // 0x140(0x10)
	struct FMulticastDelegate OnProjectileStop; // 0x150(0x10)
	float HomingAccelerationMagnitude; // 0x160(0x04)
	struct USceneComponent* HomingTargetComponent; // 0x164(0x08)
	float MaxSimulationTimeStep; // 0x16c(0x04)
	int32_t MaxSimulationIterations; // 0x170(0x04)
	char UnknownData_174[0x4]; // 0x174(0x04)

	void StopSimulating(struct FHitResult HitResult); // Function Engine.ProjectileMovementComponent.StopSimulating // Native|Public|HasOutParms|BlueprintCallable // @ game+0x2ef9640
	void SetVelocityInLocalSpace(struct FVector NewVelocity); // Function Engine.ProjectileMovementComponent.SetVelocityInLocalSpace // Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ef7690
	void OnProjectileStopDelegate__DelegateSignature(struct FHitResult ImpactResult); // DelegateFunction Engine.ProjectileMovementComponent.OnProjectileStopDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x188c2f0
	void OnProjectileBounceDelegate__DelegateSignature(struct FHitResult ImpactResult, struct FVector ImpactVelocity); // DelegateFunction Engine.ProjectileMovementComponent.OnProjectileBounceDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults // @ game+0x188c2f0
	struct FVector LimitVelocity(struct FVector NewVelocity); // Function Engine.ProjectileMovementComponent.LimitVelocity // Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2eed680
};

// Class Engine.RotatingMovementComponent
// Size: 0x130 (Inherited: 0x110)
struct URotatingMovementComponent : UMovementComponent {
	struct FRotator RotationRate; // 0x110(0x0c)
	struct FVector PivotTranslation; // 0x11c(0x0c)
	char bRotationInLocalSpace : 1; // 0x128(0x01)
	char UnknownData_128_1 : 7; // 0x128(0x01)
	char UnknownData_129[0x7]; // 0x129(0x07)
};

// Class Engine.NavigationInvokerComponent
// Size: 0xd0 (Inherited: 0xc8)
struct UNavigationInvokerComponent : UActorComponent {
	float TileGenerationRadius; // 0xc8(0x04)
	float TileRemovalRadius; // 0xcc(0x04)
};

// Class Engine.NavRelevantComponent
// Size: 0xf8 (Inherited: 0xc8)
struct UNavRelevantComponent : UActorComponent {
	char UnknownData_C8[0x24]; // 0xc8(0x24)
	char bNavigationRelevant : 1; // 0xec(0x01)
	char bAttachToOwnersRoot : 1; // 0xec(0x01)
	char UnknownData_EC_2 : 6; // 0xec(0x01)
	char UnknownData_ED[0x3]; // 0xed(0x03)
	struct UObject* CachedNavParent; // 0xf0(0x08)

	void SetNavigationRelevancy(bool bRelevant); // Function Engine.NavRelevantComponent.SetNavigationRelevancy // Final|Native|Public|BlueprintCallable // @ game+0x2ef5330
};

// Class Engine.NavLinkCustomInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavLinkCustomInterface : UInterface {
};

// Class Engine.NavLinkCustomComponent
// Size: 0x190 (Inherited: 0xf8)
struct UNavLinkCustomComponent : UNavRelevantComponent {
	char UnknownData_F8[0x8]; // 0xf8(0x08)
	uint32_t NavLinkUserId; // 0x100(0x04)
	char UnknownData_104[0x4]; // 0x104(0x04)
	struct UClass* EnabledAreaClass; // 0x108(0x08)
	struct UClass* DisabledAreaClass; // 0x110(0x08)
	struct FVector LinkRelativeStart; // 0x118(0x0c)
	struct FVector LinkRelativeEnd; // 0x124(0x0c)
	char LinkDirection; // 0x130(0x01)
	char UnknownData_131[0x3]; // 0x131(0x03)
	char bLinkEnabled : 1; // 0x134(0x01)
	char bNotifyWhenEnabled : 1; // 0x134(0x01)
	char bNotifyWhenDisabled : 1; // 0x134(0x01)
	char bCreateBoxObstacle : 1; // 0x134(0x01)
	char UnknownData_134_4 : 4; // 0x134(0x01)
	char UnknownData_135[0x3]; // 0x135(0x03)
	struct FVector ObstacleOffset; // 0x138(0x0c)
	struct FVector ObstacleExtent; // 0x144(0x0c)
	struct UClass* ObstacleAreaClass; // 0x150(0x08)
	float BroadcastRadius; // 0x158(0x04)
	float BroadcastInterval; // 0x15c(0x04)
	char BroadcastChannel; // 0x160(0x01)
	char UnknownData_161[0x2f]; // 0x161(0x2f)
};

// Class Engine.NavModifierComponent
// Size: 0x118 (Inherited: 0xf8)
struct UNavModifierComponent : UNavRelevantComponent {
	struct UClass* AreaClass; // 0xf8(0x08)
	struct FVector FailsafeExtent; // 0x100(0x0c)
	char UnknownData_10C[0xc]; // 0x10c(0x0c)
};

// Class Engine.PawnNoiseEmitterComponent
// Size: 0xf0 (Inherited: 0xc8)
struct UPawnNoiseEmitterComponent : UActorComponent {
	char bAIPerceptionSystemCompatibilityMode : 1; // 0xc8(0x01)
	char UnknownData_C8_1 : 7; // 0xc8(0x01)
	char UnknownData_C9[0x3]; // 0xc9(0x03)
	struct FVector LastRemoteNoisePosition; // 0xcc(0x0c)
	float NoiseLifetime; // 0xd8(0x04)
	float LastRemoteNoiseVolume; // 0xdc(0x04)
	float LastRemoteNoiseTime; // 0xe0(0x04)
	float LastLocalNoiseVolume; // 0xe4(0x04)
	float LastLocalNoiseTime; // 0xe8(0x04)
	char UnknownData_EC[0x4]; // 0xec(0x04)

	void MakeNoise(struct AActor* NoiseMaker, float Loudness, struct FVector NoiseLocation); // Function Engine.PawnNoiseEmitterComponent.MakeNoise // BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2eedb20
};

// Class Engine.PhysicsHandleComponent
// Size: 0x170 (Inherited: 0xc8)
struct UPhysicsHandleComponent : UActorComponent {
	struct UPrimitiveComponent* GrabbedComponent; // 0xc8(0x08)
	char UnknownData_D0[0x10]; // 0xd0(0x10)
	float LinearDamping; // 0xe0(0x04)
	float LinearStiffness; // 0xe4(0x04)
	float AngularDamping; // 0xe8(0x04)
	float AngularStiffness; // 0xec(0x04)
	char UnknownData_F0[0x60]; // 0xf0(0x60)
	float InterpolationSpeed; // 0x150(0x04)
	char UnknownData_154[0x1c]; // 0x154(0x1c)

	void SetTargetRotation(struct FRotator NewRotation); // Function Engine.PhysicsHandleComponent.SetTargetRotation // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ef6fa0
	void SetTargetLocationAndRotation(struct FVector NewLocation, struct FRotator NewRotation); // Function Engine.PhysicsHandleComponent.SetTargetLocationAndRotation // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ef6ec0
	void SetTargetLocation(struct FVector NewLocation); // Function Engine.PhysicsHandleComponent.SetTargetLocation // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ef6e30
	void SetLinearStiffness(float NewLinearStiffness); // Function Engine.PhysicsHandleComponent.SetLinearStiffness // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef4da0
	void SetLinearDamping(float NewLinearDamping); // Function Engine.PhysicsHandleComponent.SetLinearDamping // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef4d20
	void SetInterpolationSpeed(float NewInterpolationSpeed); // Function Engine.PhysicsHandleComponent.SetInterpolationSpeed // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef4990
	void SetAngularStiffness(float NewAngularStiffness); // Function Engine.PhysicsHandleComponent.SetAngularStiffness // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef11c0
	void SetAngularDamping(float NewAngularDamping); // Function Engine.PhysicsHandleComponent.SetAngularDamping // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef1140
	void ReleaseComponent(); // Function Engine.PhysicsHandleComponent.ReleaseComponent // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2eefd30
	void GrabComponent(struct UPrimitiveComponent* Component, struct FName InBoneName, struct FVector GrabLocation, bool bConstrainRotation); // Function Engine.PhysicsHandleComponent.GrabComponent // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2eecc60
	void GetTargetLocationAndRotation(struct FVector TargetLocation, struct FRotator TargetRotation); // Function Engine.PhysicsHandleComponent.GetTargetLocationAndRotation // Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2eec760
};

// Class Engine.PlatformEventsComponent
// Size: 0xe8 (Inherited: 0xc8)
struct UPlatformEventsComponent : UActorComponent {
	struct FMulticastDelegate PlatformChangedToLaptopModeDelegate; // 0xc8(0x10)
	struct FMulticastDelegate PlatformChangedToTabletModeDelegate; // 0xd8(0x10)

	bool SupportsConvertibleLaptops(); // Function Engine.PlatformEventsComponent.SupportsConvertibleLaptops // Final|Native|Public|BlueprintCallable // @ game+0x2ef97d0
	void PlatformEventDelegate__DelegateSignature(); // DelegateFunction Engine.PlatformEventsComponent.PlatformEventDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x188c2f0
	bool IsInTabletMode(); // Function Engine.PlatformEventsComponent.IsInTabletMode // Final|Native|Public|BlueprintCallable // @ game+0x2eed280
	bool IsInLaptopMode(); // Function Engine.PlatformEventsComponent.IsInLaptopMode // Final|Native|Public|BlueprintCallable // @ game+0x2eed250
};

// Class Engine.AtmosphericFogComponent
// Size: 0x4c0 (Inherited: 0x2e0)
struct UAtmosphericFogComponent : USceneComponent {
	float SunMultiplier; // 0x2e0(0x04)
	float FogMultiplier; // 0x2e4(0x04)
	float DensityMultiplier; // 0x2e8(0x04)
	float DensityOffset; // 0x2ec(0x04)
	float DistanceScale; // 0x2f0(0x04)
	float AltitudeScale; // 0x2f4(0x04)
	float DistanceOffset; // 0x2f8(0x04)
	float GroundOffset; // 0x2fc(0x04)
	float StartDistance; // 0x300(0x04)
	float SunDiscScale; // 0x304(0x04)
	float DefaultBrightness; // 0x308(0x04)
	struct FColor DefaultLightColor; // 0x30c(0x04)
	char bDisableSunDisk : 1; // 0x310(0x01)
	char bDisableGroundScattering : 1; // 0x310(0x01)
	char UnknownData_310_2 : 6; // 0x310(0x01)
	char UnknownData_311[0x3]; // 0x311(0x03)
	struct FAtmospherePrecomputeParameters PrecomputeParams; // 0x314(0x2c)
	struct UTexture2D* TransmittanceTexture; // 0x340(0x08)
	struct UTexture2D* IrradianceTexture; // 0x348(0x08)
	char UnknownData_350[0x170]; // 0x350(0x170)

	void StartPrecompute(); // Function Engine.AtmosphericFogComponent.StartPrecompute // Final|Native|Public|BlueprintCallable // @ game+0x2ef95c0
	void SetSunMultiplier(float NewSunMultiplier); // Function Engine.AtmosphericFogComponent.SetSunMultiplier // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef6db0
	void SetStartDistance(float NewStartDistance); // Function Engine.AtmosphericFogComponent.SetStartDistance // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef6800
	void SetPrecomputeParams(float DensityHeight, int32_t MaxScatteringOrder, int32_t InscatterAltitudeSampleNum); // Function Engine.AtmosphericFogComponent.SetPrecomputeParams // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef5a40
	void SetFogMultiplier(float NewFogMultiplier); // Function Engine.AtmosphericFogComponent.SetFogMultiplier // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef3f00
	void SetDistanceScale(float NewDistanceScale); // Function Engine.AtmosphericFogComponent.SetDistanceScale // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef3270
	void SetDistanceOffset(float NewDistanceOffset); // Function Engine.AtmosphericFogComponent.SetDistanceOffset // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef31f0
	void SetDensityOffset(float NewDensityOffset); // Function Engine.AtmosphericFogComponent.SetDensityOffset // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef2e70
	void SetDensityMultiplier(float NewDensityMultiplier); // Function Engine.AtmosphericFogComponent.SetDensityMultiplier // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef2df0
	void SetDefaultLightColor(struct FLinearColor NewLightColor); // Function Engine.AtmosphericFogComponent.SetDefaultLightColor // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ef2d70
	void SetDefaultBrightness(float NewBrightness); // Function Engine.AtmosphericFogComponent.SetDefaultBrightness // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef2cf0
	void SetAltitudeScale(float NewAltitudeScale); // Function Engine.AtmosphericFogComponent.SetAltitudeScale // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef0fb0
	void DisableSunDisk(bool NewSunDisk); // Function Engine.AtmosphericFogComponent.DisableSunDisk // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ee7dd0
	void DisableGroundScattering(bool NewGroundScattering); // Function Engine.AtmosphericFogComponent.DisableGroundScattering // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ee7d20
};

// Class Engine.SoundAttenuation
// Size: 0xe8 (Inherited: 0x28)
struct USoundAttenuation : UObject {
	struct FAttenuationSettings Attenuation; // 0x28(0xc0)
};

// Class Engine.AudioComponent
// Size: 0x430 (Inherited: 0x2e0)
struct UAudioComponent : USceneComponent {
	struct USoundBase* Sound; // 0x2e0(0x08)
	struct TArray<struct FAudioComponentParam> InstanceParameters; // 0x2e8(0x10)
	struct USoundClass* SoundClassOverride; // 0x2f8(0x08)
	char bAutoDestroy : 1; // 0x300(0x01)
	char bStopWhenOwnerDestroyed : 1; // 0x300(0x01)
	char bShouldRemainActiveIfDropped : 1; // 0x300(0x01)
	char bAllowSpatialization : 1; // 0x300(0x01)
	char bOverrideAttenuation : 1; // 0x300(0x01)
	char bIsUISound : 1; // 0x300(0x01)
	char UnknownData_300_6 : 2; // 0x300(0x01)
	char UnknownData_301[0x3]; // 0x301(0x03)
	float PitchModulationMin; // 0x304(0x04)
	float PitchModulationMax; // 0x308(0x04)
	float VolumeModulationMin; // 0x30c(0x04)
	float VolumeModulationMax; // 0x310(0x04)
	float VolumeMultiplier; // 0x314(0x04)
	float PitchMultiplier; // 0x318(0x04)
	float HighFrequencyGainMultiplier; // 0x31c(0x04)
	struct USoundAttenuation* AttenuationSettings; // 0x320(0x08)
	struct FAttenuationSettings AttenuationOverrides; // 0x328(0xc0)
	char UnknownData_3E8[0x8]; // 0x3e8(0x08)
	struct FMulticastDelegate OnAudioFinished; // 0x3f0(0x10)
	char UnknownData_400[0x18]; // 0x400(0x18)
	DelegateProperty OnQueueSubtitles; // 0x418(0x10)
	char UnknownData_428[0x8]; // 0x428(0x08)

	void Stop(); // Function Engine.AudioComponent.Stop // Final|Native|Public|BlueprintCallable // @ game+0x2ef95e0
	void SetWaveParameter(struct FName InName, struct USoundWave* InWave); // Function Engine.AudioComponent.SetWaveParameter // Final|Native|Public|BlueprintCallable // @ game+0x2ef7ad0
	void SetVolumeMultiplier(float NewVolumeMultiplier); // Function Engine.AudioComponent.SetVolumeMultiplier // Final|Native|Public|BlueprintCallable // @ game+0x2ef7830
	void SetUISound(bool bInUISound); // Function Engine.AudioComponent.SetUISound // Final|Native|Public|BlueprintCallable // @ game+0x2ef74c0
	void SetSound(struct USoundBase* NewSound); // Function Engine.AudioComponent.SetSound // Final|Native|Public|BlueprintCallable // @ game+0x2ef6080
	void SetPitchMultiplier(float NewPitchMultiplier); // Function Engine.AudioComponent.SetPitchMultiplier // Final|Native|Public|BlueprintCallable // @ game+0x2ef5650
	void SetIntParameter(struct FName InName, int32_t InInt); // Function Engine.AudioComponent.SetIntParameter // Final|Native|Public|BlueprintCallable // @ game+0x2ef47d0
	void SetFloatParameter(struct FName InName, float InFloat); // Function Engine.AudioComponent.SetFloatParameter // Final|Native|Public|BlueprintCallable // @ game+0x2ef3a90
	void SetBoolParameter(struct FName InName, bool InBool); // Function Engine.AudioComponent.SetBoolParameter // Final|Native|Public|BlueprintCallable // @ game+0x2ef2010
	void Play(float StartTime); // Function Engine.AudioComponent.Play // Final|Native|Public|BlueprintCallable // @ game+0x2eee870
	bool IsPlaying(); // Function Engine.AudioComponent.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eed2e0
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel); // Function Engine.AudioComponent.FadeOut // Final|Native|Public|BlueprintCallable // @ game+0x2ee82f0
	void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime); // Function Engine.AudioComponent.FadeIn // Final|Native|Public|BlueprintCallable // @ game+0x2ee81e0
	bool BP_GetAttenuationSettingsToApply(struct FAttenuationSettings OutAttenuationSettings); // Function Engine.AudioComponent.BP_GetAttenuationSettingsToApply // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x2ee59c0
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel); // Function Engine.AudioComponent.AdjustVolume // Final|Native|Public|BlueprintCallable // @ game+0x2ee4950
	void AdjustAttenuation(struct FAttenuationSettings InAttenuationSettings); // Function Engine.AudioComponent.AdjustAttenuation // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x2ee47e0
};

// Class Engine.BasisComponent
// Size: 0x2f0 (Inherited: 0x2e0)
struct UBasisComponent : USceneComponent {
	char UnknownData_2E0[0x10]; // 0x2e0(0x10)
};

// Class Engine.CalmWaterComponent
// Size: 0x2f0 (Inherited: 0x2e0)
struct UCalmWaterComponent : USceneComponent {
	float Radius; // 0x2e0(0x04)
	float RadiusPercentageToStartLerp; // 0x2e4(0x04)
	float DampeningFactor; // 0x2e8(0x04)
	char UnknownData_2EC[0x4]; // 0x2ec(0x04)
};

// Class Engine.EditorOnlyChildActorComponent
// Size: 0x310 (Inherited: 0x300)
struct UEditorOnlyChildActorComponent : UChildActorComponent {
	struct UClass* CachedChildActorClass; // 0x300(0x08)
	char UnknownData_308[0x8]; // 0x308(0x08)
};

// Class Engine.DecalComponent
// Size: 0x310 (Inherited: 0x2e0)
struct UDecalComponent : USceneComponent {
	struct UMaterialInterface* DecalMaterial; // 0x2e0(0x08)
	int32_t SortOrder; // 0x2e8(0x04)
	float FadeScreenSize; // 0x2ec(0x04)
	struct UMaterialInstanceDynamic* MaterialInstanceDynamic; // 0x2f0(0x08)
	char UnknownData_2F8[0x18]; // 0x2f8(0x18)

	void SetSortOrder(int32_t Value); // Function Engine.DecalComponent.SetSortOrder // Final|Native|Public|BlueprintCallable // @ game+0x2ef6000
	void SetLifeSpan(float LifeSpan); // Function Engine.DecalComponent.SetLifeSpan // Final|Native|Public|BlueprintCallable // @ game+0x2ef4b10
	void SetDecalMaterial(struct UMaterialInterface* NewDecalMaterial); // Function Engine.DecalComponent.SetDecalMaterial // Final|Native|Public|BlueprintCallable // @ game+0x2ef2c70
	struct UMaterialInterface* GetDecalMaterial(); // Function Engine.DecalComponent.GetDecalMaterial // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ee9e50
	struct UMaterialInstanceDynamic* GetDecalDynamicMaterialInstance(); // Function Engine.DecalComponent.GetDecalDynamicMaterialInstance // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ee9e20
	struct UMaterialInstanceDynamic* CreateDynamicMaterialInstance(); // Function Engine.DecalComponent.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x2ee7800
};

// Class Engine.ExponentialHeightFogComponent
// Size: 0x340 (Inherited: 0x2e0)
struct UExponentialHeightFogComponent : USceneComponent {
	float FogDensity; // 0x2e0(0x04)
	struct FLinearColor FogInscatteringColor; // 0x2e4(0x10)
	struct FLinearColor FarFogInscatteringColor; // 0x2f4(0x10)
	float DirectionalInscatteringExponent; // 0x304(0x04)
	float DirectionalInscatteringStartDistance; // 0x308(0x04)
	float StartScaleDirectionalInscattering; // 0x30c(0x04)
	float FarScaleDirectionalInscattering; // 0x310(0x04)
	struct FLinearColor DirectionalInscatteringColor; // 0x314(0x10)
	float FogHeightFalloff; // 0x324(0x04)
	float FogMaxOpacity; // 0x328(0x04)
	float StartDistance; // 0x32c(0x04)
	float FarDistance; // 0x330(0x04)
	float StartScale; // 0x334(0x04)
	float FarScale; // 0x338(0x04)
	bool bIsUnderwater; // 0x33c(0x01)
	char UnknownData_33D[0x3]; // 0x33d(0x03)

	void SetStartDistance(float Value); // Function Engine.ExponentialHeightFogComponent.SetStartDistance // Final|Native|Public|BlueprintCallable // @ game+0x2ef6880
	void SetInscatteringStartScale(float Value); // Function Engine.ExponentialHeightFogComponent.SetInscatteringStartScale // Final|Native|Public|BlueprintCallable // @ game+0x2ef4750
	void SetInscatteringFarScale(float Value); // Function Engine.ExponentialHeightFogComponent.SetInscatteringFarScale // Final|Native|Public|BlueprintCallable // @ game+0x2ef46d0
	void SetFogMaxOpacity(float Value); // Function Engine.ExponentialHeightFogComponent.SetFogMaxOpacity // Final|Native|Public|BlueprintCallable // @ game+0x2ef3e80
	void SetFogInscatteringColor(struct FLinearColor Value); // Function Engine.ExponentialHeightFogComponent.SetFogInscatteringColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ef3e00
	void SetFogHeightFalloff(float Value); // Function Engine.ExponentialHeightFogComponent.SetFogHeightFalloff // Final|Native|Public|BlueprintCallable // @ game+0x2ef3d80
	void SetFogDensity(float Value); // Function Engine.ExponentialHeightFogComponent.SetFogDensity // Final|Native|Public|BlueprintCallable // @ game+0x2ef3d00
	void SetFarInscatteringColour(struct FLinearColor Value); // Function Engine.ExponentialHeightFogComponent.SetFarInscatteringColour // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ef3a10
	void SetExponentialFogFarDistance(float Value); // Function Engine.ExponentialHeightFogComponent.SetExponentialFogFarDistance // Final|Native|Public|BlueprintCallable // @ game+0x2ef3910
	void SetDirectionalInscatteringStartScale(float Value); // Function Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringStartScale // Final|Native|Public|BlueprintCallable // @ game+0x2ef3170
	void SetDirectionalInscatteringStartDistance(float Value); // Function Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringStartDistance // Final|Native|Public|BlueprintCallable // @ game+0x2ef30f0
	void SetDirectionalInscatteringFarScale(float Value); // Function Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringFarScale // Final|Native|Public|BlueprintCallable // @ game+0x2ef3070
	void SetDirectionalInscatteringExponent(float Value); // Function Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringExponent // Final|Native|Public|BlueprintCallable // @ game+0x2ef2ff0
	void SetDirectionalInscatteringColor(struct FLinearColor Value); // Function Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ef2f70
};

// Class Engine.FogVolumeComponent
// Size: 0x3e0 (Inherited: 0x2e0)
struct UFogVolumeComponent : USceneComponent {
	struct FLinearColor Color; // 0x2e0(0x10)
	float SceneFogSaturation; // 0x2f0(0x04)
	float Density; // 0x2f4(0x04)
	float HeightFogFalloff; // 0x2f8(0x04)
	float DistanceFalloffPower; // 0x2fc(0x04)
	float ShadowIntensity; // 0x300(0x04)
	float ScaleOnTranslucency; // 0x304(0x04)
	struct FVector FogVelocity; // 0x308(0x0c)
	struct FVector NoisePrimaryScale; // 0x314(0x0c)
	struct FVector NoiseSecondaryScale; // 0x320(0x0c)
	float NoiseBlend; // 0x32c(0x04)
	struct UTexture* VolumeTexture; // 0x330(0x08)
	float InscatteringIntensity; // 0x338(0x04)
	float InscatteringPower; // 0x33c(0x04)
	float ShadowDistance; // 0x340(0x04)
	float ActiveBelowDepth; // 0x344(0x04)
	char bUseSceneInscattering : 1; // 0x348(0x01)
	char UnknownData_348_1 : 7; // 0x348(0x01)
	char UnknownData_349[0x3]; // 0x349(0x03)
	bool bUnderwater; // 0x34c(0x01)
	bool bScaleWithLighting; // 0x34d(0x01)
	bool bAdvancedVolumeFog; // 0x34e(0x01)
	bool UseDensityMapOnTranslucency; // 0x34f(0x01)
	struct UTexture* DensityMap; // 0x350(0x08)
	struct FVector DensityMapScale; // 0x358(0x0c)
	struct FVector DensityMapOffset; // 0x364(0x0c)
	struct FVector DensityMapActiveHemisphereOrigin; // 0x370(0x0c)
	struct FVector DensityMapActiveHemisphereDirection; // 0x37c(0x0c)
	float DensityMapActiveHemisphereInnerRadius; // 0x388(0x04)
	float DensityMapActiveHemisphereOuterRadius; // 0x38c(0x04)
	float SelfShadowBrightness; // 0x390(0x04)
	float SelfShadowFogScale; // 0x394(0x04)
	bool bMeshFog; // 0x398(0x01)
	char UnknownData_399[0x3]; // 0x399(0x03)
	float MeshFogDensity; // 0x39c(0x04)
	float MeshFogShadowDensity; // 0x3a0(0x04)
	float MeshFogScatteringDensity; // 0x3a4(0x04)
	struct FVector MeshFogNoisePrimaryScale; // 0x3a8(0x0c)
	struct FVector MeshFogNoiseSecondaryScale; // 0x3b4(0x0c)
	float MeshFogNoiseBlend; // 0x3c0(0x04)
	struct FVector MeshFogVelocity; // 0x3c4(0x0c)
	struct UTexture* MeshFogVolumeTexture; // 0x3d0(0x08)
	char UnknownData_3D8[0x8]; // 0x3d8(0x08)

	void UpdateFog(); // Function Engine.FogVolumeComponent.UpdateFog // Final|Native|Public|BlueprintCallable // @ game+0x2ef9b80
};

// Class Engine.InstancedNavMeshInterface
// Size: 0x28 (Inherited: 0x28)
struct UInstancedNavMeshInterface : UInterface {
};

// Class Engine.InstancedNavMeshComponent
// Size: 0x300 (Inherited: 0x2e0)
struct UInstancedNavMeshComponent : USceneComponent {
	char UnknownData_2E0[0x8]; // 0x2e0(0x08)
	struct FName NavMeshName; // 0x2e8(0x08)
	bool UseAttachedParentAsPrimitiveBase; // 0x2f0(0x01)
	char UnknownData_2F1[0xf]; // 0x2f1(0x0f)
};

// Class Engine.AmbientLightSourceComponent
// Size: 0x4a0 (Inherited: 0x470)
struct UAmbientLightSourceComponent : ULightComponent {
	float Radius; // 0x468(0x04)
	float AmbientIntensity; // 0x46c(0x04)
	struct FLinearColor Tint; // 0x470(0x10)
	char QuadraticFalloff : 1; // 0x480(0x01)
	char Shape; // 0x484(0x01)
	char SimpleFunctionType; // 0x485(0x01)
	float ScaleOffset; // 0x488(0x04)
	float PulsePhase; // 0x48c(0x04)
	float FlickerFrequency; // 0x490(0x04)
	int32_t FlickerPerlinRow; // 0x494(0x04)
	bool bShadowed; // 0x498(0x01)
	char GroupingPolicy; // 0x499(0x01)
	char UnknownData_49C_1 : 7; // 0x49c(0x01)
	char UnknownData_49D[0x3]; // 0x49d(0x03)

	void SetTint(struct FLinearColor NewTint); // Function Engine.AmbientLightSourceComponent.SetTint // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ef73c0
	void SetRadius(float NewRadius); // Function Engine.AmbientLightSourceComponent.SetRadius // Final|Native|Public|BlueprintCallable // @ game+0x2ef5b50
	void SetGroupingPolicy(char Policy); // Function Engine.AmbientLightSourceComponent.SetGroupingPolicy // Final|Native|Public|BlueprintCallable // @ game+0x2ef4350
	void SetAmbientIntensity(float NewIntensity); // Function Engine.AmbientLightSourceComponent.SetAmbientIntensity // Final|Native|Public|BlueprintCallable // @ game+0x2ef10c0
};

// Class Engine.DirectionalLightComponent
// Size: 0x4f0 (Inherited: 0x470)
struct UDirectionalLightComponent : ULightComponent {
	char bEnableLightShaftOcclusion : 1; // 0x468(0x01)
	float OcclusionMaskDarkness; // 0x46c(0x04)
	float OcclusionDepthRange; // 0x470(0x04)
	struct FVector LightShaftOverrideDirection; // 0x474(0x0c)
	float WholeSceneDynamicShadowRadius; // 0x480(0x04)
	float DynamicShadowDistanceMovableLight; // 0x484(0x04)
	float DynamicShadowDistanceStationaryLight; // 0x488(0x04)
	int32_t DynamicShadowCascades; // 0x48c(0x04)
	float CascadeDistributionExponent; // 0x490(0x04)
	float CascadeTransitionFraction; // 0x494(0x04)
	float ShadowDistanceFadeoutFraction; // 0x498(0x04)
	float LastTransitionSizeOverride; // 0x49c(0x04)
	float CloseCascadeUpdateRateInMs; // 0x4a0(0x04)
	float FarCascadesUpdateRateInMs; // 0x4a4(0x04)
	char bUseInsetShadowsForMovableObjects : 1; // 0x4a8(0x01)
	int32_t FarShadowCascadeCount; // 0x4ac(0x04)
	float FarShadowDistance; // 0x4b0(0x04)
	float NormalOffsetScale; // 0x4b4(0x04)
	float CloudsShadowsIntensity; // 0x4b8(0x04)
	float DistanceFieldShadowDistance; // 0x4bc(0x04)
	float LightSourceAngle; // 0x4c0(0x04)
	float TraceDistance; // 0x4c4(0x04)
	struct FLightmassDirectionalLightSettings LightmassSettings; // 0x4c8(0x10)
	char bCastModulatedShadows : 1; // 0x4d8(0x01)
	char UnknownData_4D8_3 : 5; // 0x4d8(0x01)
	char UnknownData_4D9[0x3]; // 0x4d9(0x03)
	struct FColor ModulatedShadowColor; // 0x4dc(0x04)
	char bUsedAsAtmosphereSunLight : 1; // 0x4e0(0x01)
	char UnknownData_4E0_1 : 7; // 0x4e0(0x01)
	char UnknownData_4E1[0xf]; // 0x4e1(0x0f)

	void SetShadowLastTransitionSize(float NewValue); // Function Engine.DirectionalLightComponent.SetShadowLastTransitionSize // Final|Native|Public|BlueprintCallable // @ game+0x2ef5ef0
	void SetShadowDistanceFadeoutFraction(float NewValue); // Function Engine.DirectionalLightComponent.SetShadowDistanceFadeoutFraction // Final|Native|Public|BlueprintCallable // @ game+0x2ef5e70
	void SetOcclusionMaskDarkness(float NewValue); // Function Engine.DirectionalLightComponent.SetOcclusionMaskDarkness // Final|Native|Public|BlueprintCallable // @ game+0x2ef54c0
	void SetNormalOffsetBiasScale(float NewValue); // Function Engine.DirectionalLightComponent.SetNormalOffsetBiasScale // Final|Native|Public|BlueprintCallable // @ game+0x2ef5440
	void SetLightShaftOverrideDirection(struct FVector NewValue); // Function Engine.DirectionalLightComponent.SetLightShaftOverrideDirection // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ef4c90
	void SetFarCascadeUpdateRate(float NewValue); // Function Engine.DirectionalLightComponent.SetFarCascadeUpdateRate // Final|Native|Public|BlueprintCallable // @ game+0x2ef3990
	void SetEnableLightShaftOcclusion(bool bNewValue); // Function Engine.DirectionalLightComponent.SetEnableLightShaftOcclusion // Final|Native|Public|BlueprintCallable // @ game+0x2ef3470
	void SetDynamicShadowDistanceStationaryLight(float NewValue); // Function Engine.DirectionalLightComponent.SetDynamicShadowDistanceStationaryLight // Final|Native|Public|BlueprintCallable // @ game+0x2ef33f0
	void SetDynamicShadowDistanceMovableLight(float NewValue); // Function Engine.DirectionalLightComponent.SetDynamicShadowDistanceMovableLight // Final|Native|Public|BlueprintCallable // @ game+0x2ef3370
	void SetDynamicShadowCascades(int32_t NewValue); // Function Engine.DirectionalLightComponent.SetDynamicShadowCascades // Final|Native|Public|BlueprintCallable // @ game+0x2ef32f0
	void SetCloudsShadowsIntensity(float NewValue); // Function Engine.DirectionalLightComponent.SetCloudsShadowsIntensity // Final|Native|Public|BlueprintCallable // @ game+0x2ef2920
	void SetCloseCascadeUpdateRate(float NewValue); // Function Engine.DirectionalLightComponent.SetCloseCascadeUpdateRate // Final|Native|Public|BlueprintCallable // @ game+0x2ef28a0
	void SetCascadeTransitionFraction(float NewValue); // Function Engine.DirectionalLightComponent.SetCascadeTransitionFraction // Final|Native|Public|BlueprintCallable // @ game+0x2ef2820
	void SetCascadeDistributionExponent(float NewValue); // Function Engine.DirectionalLightComponent.SetCascadeDistributionExponent // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef27a0
};

// Class Engine.PointLightComponent
// Size: 0x4b0 (Inherited: 0x470)
struct UPointLightComponent : ULightComponent {
	float Radius; // 0x468(0x04)
	float AttenuationRadius; // 0x46c(0x04)
	char bUseInverseSquaredFalloff : 1; // 0x470(0x01)
	float LightFalloffExponent; // 0x474(0x04)
	float IntensityScaleForWater; // 0x478(0x04)
	float MinDistanceToLightAssumed; // 0x47c(0x04)
	float SourceRadius; // 0x480(0x04)
	float SourceLength; // 0x484(0x04)
	char SimpleFunctionType; // 0x488(0x01)
	float ScaleOffset; // 0x48c(0x04)
	float PulsePhase; // 0x490(0x04)
	float FlickerFrequency; // 0x494(0x04)
	int32_t FlickerPerlinRow; // 0x498(0x04)
	struct FLightmassPointLightSettings LightmassSettings; // 0x49c(0x0c)
	char UnknownData_4A9_1 : 7; // 0x4a9(0x01)
	char UnknownData_4AA[0x6]; // 0x4aa(0x06)

	void SetSourceRadius(float bNewValue); // Function Engine.PointLightComponent.SetSourceRadius // Final|Native|Public|BlueprintCallable // @ game+0x2ef6180
	void SetSourceLength(float NewValue); // Function Engine.PointLightComponent.SetSourceLength // Final|Native|Public|BlueprintCallable // @ game+0x2ef6100
	void SetLightFalloffExponent(float NewLightFalloffExponent); // Function Engine.PointLightComponent.SetLightFalloffExponent // Final|Native|Public|BlueprintCallable // @ game+0x2ef4c10
	void SetAttenuationRadius(float NewRadius); // Function Engine.PointLightComponent.SetAttenuationRadius // Final|Native|Public|BlueprintCallable // @ game+0x2ef1450
};

// Class Engine.SpotLightComponent
// Size: 0x4c0 (Inherited: 0x4b0)
struct USpotLightComponent : UPointLightComponent {
	float InnerConeAngle; // 0x4a8(0x04)
	float OuterConeAngle; // 0x4ac(0x04)
	float LightShaftConeAngle; // 0x4b0(0x04)
	float KickBackRatio; // 0x4b4(0x04)

	void SetOuterConeAngle(float NewOuterConeAngle); // Function Engine.SpotLightComponent.SetOuterConeAngle // Final|Native|Public|BlueprintCallable // @ game+0x2ef55d0
	void SetKickBackProportionality(float NewKickBackRatio); // Function Engine.SpotLightComponent.SetKickBackProportionality // Final|Native|Public|BlueprintCallable // @ game+0x2ef4a10
	void SetInnerConeAngle(float NewInnerConeAngle); // Function Engine.SpotLightComponent.SetInnerConeAngle // Final|Native|Public|BlueprintCallable // @ game+0x2ef4650
};

// Class Engine.SkyLightComponent
// Size: 0x4b0 (Inherited: 0x310)
struct USkyLightComponent : ULightComponentBase {
	char SourceType; // 0x310(0x01)
	char UnknownData_311[0x7]; // 0x311(0x07)
	struct UTextureCube* Cubemap; // 0x318(0x08)
	float SkyDistanceThreshold; // 0x320(0x04)
	bool bLowerHemisphereIsBlack; // 0x324(0x01)
	char UnknownData_325[0x3]; // 0x325(0x03)
	float OcclusionMaxDistance; // 0x328(0x04)
	float Contrast; // 0x32c(0x04)
	float MinOcclusion; // 0x330(0x04)
	struct FColor OcclusionTint; // 0x334(0x04)
	float ScaleForInteriors; // 0x338(0x04)
	char UnknownData_33C[0xac]; // 0x33c(0xac)
	struct UTextureCube* BlendDestinationCubemap; // 0x3e8(0x08)
	char UnknownData_3F0[0xc0]; // 0x3f0(0xc0)

	void SetOcclusionTint(struct FColor InTint); // Function Engine.SkyLightComponent.SetOcclusionTint // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ef5540
	void SetMinOcclusion(float InMinOcclusion); // Function Engine.SkyLightComponent.SetMinOcclusion // Final|Native|Public|BlueprintCallable // @ game+0x2ef4f40
	void SetLightColor(struct FLinearColor NewLightColor); // Function Engine.SkyLightComponent.SetLightColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ef4b90
	void SetIntensity(float NewIntensity); // Function Engine.SkyLightComponent.SetIntensity // Final|Native|Public|BlueprintCallable // @ game+0x2ef4890
	void SetIndirectLightingIntensity(float NewIntensity); // Function Engine.SkyLightComponent.SetIndirectLightingIntensity // Final|Native|Public|BlueprintCallable // @ game+0x2ef45d0
	void SetCubemapBlend(struct UTextureCube* SourceCubemap, struct UTextureCube* DestinationCubemap, float InBlendFraction); // Function Engine.SkyLightComponent.SetCubemapBlend // Final|Native|Public|BlueprintCallable // @ game+0x2ef2a20
	void SetCubemap(struct UTextureCube* NewCubemap); // Function Engine.SkyLightComponent.SetCubemap // Final|Native|Public|BlueprintCallable // @ game+0x2ef29a0
	void RecaptureSky(); // Function Engine.SkyLightComponent.RecaptureSky // Final|Native|Public|BlueprintCallable // @ game+0x2eefc40
};

// Class Engine.NavigationGraphNodeComponent
// Size: 0x310 (Inherited: 0x2e0)
struct UNavigationGraphNodeComponent : USceneComponent {
	struct FNavGraphNode Node; // 0x2e0(0x18)
	struct UNavigationGraphNodeComponent* NextNodeComponent; // 0x2f8(0x08)
	struct UNavigationGraphNodeComponent* PrevNodeComponent; // 0x300(0x08)
	char UnknownData_308[0x8]; // 0x308(0x08)
};

// Class Engine.PhysicsSpringComponent
// Size: 0x310 (Inherited: 0x2e0)
struct UPhysicsSpringComponent : USceneComponent {
	float SpringStiffness; // 0x2e0(0x04)
	float SpringDamping; // 0x2e4(0x04)
	float SpringLengthAtRest; // 0x2e8(0x04)
	float SpringRadius; // 0x2ec(0x04)
	char SpringChannel; // 0x2f0(0x01)
	bool bIgnoreSelf; // 0x2f1(0x01)
	char UnknownData_2F2[0x2]; // 0x2f2(0x02)
	float SpringCompression; // 0x2f4(0x04)
	char UnknownData_2F8[0x18]; // 0x2f8(0x18)

	struct FVector GetSpringRestingPoint(); // Function Engine.PhysicsSpringComponent.GetSpringRestingPoint // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2eec280
	struct FVector GetSpringDirection(); // Function Engine.PhysicsSpringComponent.GetSpringDirection // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2eec240
	struct FVector GetSpringCurrentEndPoint(); // Function Engine.PhysicsSpringComponent.GetSpringCurrentEndPoint // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2eec200
	float GetNormalizedCompressionScalar(); // Function Engine.PhysicsSpringComponent.GetNormalizedCompressionScalar // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eeb240
};

// Class Engine.PhysicsThrusterComponent
// Size: 0x2f0 (Inherited: 0x2e0)
struct UPhysicsThrusterComponent : USceneComponent {
	float ThrustStrength; // 0x2e0(0x04)
	char UnknownData_2E4[0xc]; // 0x2e4(0x0c)
};

// Class Engine.PostProcessEditorSettings
// Size: 0x38 (Inherited: 0x38)
struct UPostProcessEditorSettings : UDeveloperSettings {
};

// Class Engine.WaterId
// Size: 0x28 (Inherited: 0x28)
struct UWaterId : UObject {
};

// Class Engine.BaseWaterComponent
// Size: 0x5d0 (Inherited: 0x5c0)
struct UBaseWaterComponent : UPrimitiveComponent {
	struct UClass* WaterId; // 0x5b8(0x08)
	bool ActiveInExclusionZone; // 0x5c0(0x01)
	char UnknownData_5C9[0x7]; // 0x5c9(0x07)
};

// Class Engine.FFTWaterComponent
// Size: 0x9b0 (Inherited: 0x5d0)
struct UFFTWaterComponent : UBaseWaterComponent {
	struct FFFTWaterComponentParams WaterParams; // 0x5c8(0x310)
	struct UModel* Brush; // 0x8d8(0x08)
	struct UBodySetup* BrushBodySetup; // 0x8e0(0x08)
	struct FVector PrePivot; // 0x8e8(0x0c)
	char UnknownData_8FC[0x7c]; // 0x8fc(0x7c)
	struct UMaterialInterface* LightFunctionMaterial; // 0x978(0x08)
	struct UMaterial* DefaultLightFunctionMaterial; // 0x980(0x08)
	char UnknownData_988[0x28]; // 0x988(0x28)

	void SetWaterPositionOffset(struct FVector2D PositionOffset); // Function Engine.FFTWaterComponent.SetWaterPositionOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ef7a40
	void SetWaterColour(struct FLinearColor WaterColour); // Function Engine.FFTWaterComponent.SetWaterColour // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ef79b0
	void SetSpecularBrightness(float SpecularBrightness); // Function Engine.FFTWaterComponent.SetSpecularBrightness // Final|Native|Public|BlueprintCallable // @ game+0x2ef6200
	void SetShallowWaterColour(struct FLinearColor ShallowWaterColour); // Function Engine.FFTWaterComponent.SetShallowWaterColour // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ef5f70
	void SetReflectionBrightness(float ReflectionBrightness); // Function Engine.FFTWaterComponent.SetReflectionBrightness // Final|Native|Public|BlueprintCallable // @ game+0x2ef5bd0
	void SetMurkyRegion(struct FMurkyRegion MurkyRegion); // Function Engine.FFTWaterComponent.SetMurkyRegion // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x2ef5150
	void SetFresnelPower(float FresnelPower); // Function Engine.FFTWaterComponent.SetFresnelPower // Final|Native|Public|BlueprintCallable // @ game+0x2ef4150
	void SetFoamHighlightColour(struct FLinearColor FoamHighlightColour); // Function Engine.FFTWaterComponent.SetFoamHighlightColour // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ef3c70
	void SetFoamColour(struct FLinearColor FoamColour); // Function Engine.FFTWaterComponent.SetFoamColour // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ef3be0
	void SetFoamBrightness(float FoamBrightness); // Function Engine.FFTWaterComponent.SetFoamBrightness // Final|Native|Public|BlueprintCallable // @ game+0x2ef3b60
	void SetCarrierWaveParams(float Amplitude, float WaveLength, float PropagationSpeed); // Function Engine.FFTWaterComponent.SetCarrierWaveParams // Final|Native|Public|BlueprintCallable // @ game+0x2ef2690
	void SetBackLitColour(struct FLinearColor BackLitColour); // Function Engine.FFTWaterComponent.SetBackLitColour // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ef15e0
	void SetAmbientColour(struct FLinearColor AmbientColour); // Function Engine.FFTWaterComponent.SetAmbientColour // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ef1030
	void GetWaterPositionOffset(struct FVector2D PositionOffset); // Function Engine.FFTWaterComponent.GetWaterPositionOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2eecaa0
};

// Class Engine.FFTWaterExtendedPlaneComponent
// Size: 0x8f0 (Inherited: 0x5d0)
struct UFFTWaterExtendedPlaneComponent : UBaseWaterComponent {
	struct FFFTWaterComponentParams WaterParams; // 0x5c8(0x310)
	struct UMaterial* Material; // 0x8d8(0x08)
	char UnknownData_8E8[0x8]; // 0x8e8(0x08)

	void SetMurkyRegion(struct FMurkyRegion MurkyRegion); // Function Engine.FFTWaterExtendedPlaneComponent.SetMurkyRegion // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x2ef5200
};

// Class Engine.BillboardComponent
// Size: 0x5e0 (Inherited: 0x5c0)
struct UBillboardComponent : UPrimitiveComponent {
	struct UTexture2D* Sprite; // 0x5b8(0x08)
	char bIsScreenSizeScaled : 1; // 0x5c0(0x01)
	float ScreenSize; // 0x5c4(0x04)
	float U; // 0x5c8(0x04)
	float UL; // 0x5cc(0x04)
	float V; // 0x5d0(0x04)
	float VL; // 0x5d4(0x04)
	char UnknownData_5DC_1 : 7; // 0x5dc(0x01)
	char UnknownData_5DD[0x3]; // 0x5dd(0x03)

	void SetUV(int32_t NewU, int32_t NewUL, int32_t NewV, int32_t NewVL); // Function Engine.BillboardComponent.SetUV // Native|Public|BlueprintCallable // @ game+0x2ef7550
	void SetSpriteAndUV(struct UTexture2D* NewSprite, int32_t NewU, int32_t NewUL, int32_t NewV, int32_t NewVL); // Function Engine.BillboardComponent.SetSpriteAndUV // Native|Public|BlueprintCallable // @ game+0x2ef64c0
	void SetSprite(struct UTexture2D* NewSprite); // Function Engine.BillboardComponent.SetSprite // Native|Public|BlueprintCallable // @ game+0x2ef6430
};

// Class Engine.BrushComponent
// Size: 0x5e0 (Inherited: 0x5c0)
struct UBrushComponent : UPrimitiveComponent {
	struct UModel* Brush; // 0x5b8(0x08)
	struct UBodySetup* BrushBodySetup; // 0x5c0(0x08)
	struct FVector PrePivot; // 0x5c8(0x0c)
	char UnknownData_5DC[0x4]; // 0x5dc(0x04)
};

// Class Engine.DrawFrustumComponent
// Size: 0x5e0 (Inherited: 0x5c0)
struct UDrawFrustumComponent : UPrimitiveComponent {
	struct FColor FrustumColor; // 0x5b8(0x04)
	float FrustumAngle; // 0x5bc(0x04)
	float FrustumAspectRatio; // 0x5c0(0x04)
	float FrustumStartDist; // 0x5c4(0x04)
	float FrustumEndDist; // 0x5c8(0x04)
	struct UTexture* Texture; // 0x5d0(0x08)
	char UnknownData_5DC[0x4]; // 0x5dc(0x04)
};

// Class Engine.LineBatchComponent
// Size: 0x5f0 (Inherited: 0x5c0)
struct ULineBatchComponent : UPrimitiveComponent {
	char UnknownData_5C0[0x30]; // 0x5c0(0x30)
};

// Class Engine.MaterialBillboardComponent
// Size: 0x5d0 (Inherited: 0x5c0)
struct UMaterialBillboardComponent : UPrimitiveComponent {
	struct TArray<struct FMaterialSpriteElement> Elements; // 0x5b8(0x10)

	void AddElement(struct UMaterialInterface* Material, struct UCurveFloat* DistanceToOpacityCurve, bool bSizeIsInScreenSpace, float BaseSizeX, float BaseSizeY, struct UCurveFloat* DistanceToSizeCurve); // Function Engine.MaterialBillboardComponent.AddElement // Native|Public|BlueprintCallable // @ game+0x2ee3e00
};

// Class Engine.CollisionProfile
// Size: 0x158 (Inherited: 0x38)
struct UCollisionProfile : UDeveloperSettings {
	struct TArray<struct FCollisionResponseTemplate> Profiles; // 0x38(0x10)
	struct TArray<struct FCustomChannelSetup> DefaultChannelResponses; // 0x48(0x10)
	struct TArray<struct FCustomProfile> EditProfiles; // 0x58(0x10)
	struct TArray<struct FRedirector> ProfileRedirects; // 0x68(0x10)
	struct TArray<struct FRedirector> CollisionChannelRedirects; // 0x78(0x10)
	char UnknownData_88[0xd0]; // 0x88(0xd0)
};

// Class Engine.StaticMesh
// Size: 0x138 (Inherited: 0x28)
struct UStaticMesh : UObject {
	char UnknownData_28[0x18]; // 0x28(0x18)
	int32_t MinLOD; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
	struct TArray<struct UMaterialInterface*> Materials; // 0x48(0x10)
	int32_t LightMapResolution; // 0x58(0x04)
	int32_t LightMapCoordinateIndex; // 0x5c(0x04)
	struct UBodySetup* BodySetup; // 0x60(0x08)
	int32_t LODForCollision; // 0x68(0x04)
	char bUseMaximumStreamingTexelRatio : 1; // 0x6c(0x01)
	char bStripComplexCollisionForConsole : 1; // 0x6c(0x01)
	char bHasNavigationData : 1; // 0x6c(0x01)
	char UnknownData_6C_3 : 5; // 0x6c(0x01)
	char UnknownData_6D[0x3]; // 0x6d(0x03)
	float StreamingDistanceMultiplier; // 0x70(0x04)
	float LpvBiasMultiplier; // 0x74(0x04)
	char UnknownData_78[0x30]; // 0x78(0x30)
	struct TArray<struct UStaticMeshSocket*> Sockets; // 0xa8(0x10)
	char UnknownData_B8[0x18]; // 0xb8(0x18)
	struct FVector PositiveBoundsExtension; // 0xd0(0x0c)
	struct FVector NegativeBoundsExtension; // 0xdc(0x0c)
	struct FBoxSphereBounds ExtendedBounds; // 0xe8(0x1c)
	char UnknownData_104[0x4]; // 0x104(0x04)
	struct TArray<struct FString> SourceMaterials; // 0x108(0x10)
	int32_t UVsForStreaming; // 0x118(0x04)
	int32_t ElementToIgnoreForTexFactor; // 0x11c(0x04)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x120(0x10)
	struct UNavCollision* NavCollision; // 0x130(0x08)

	int32_t GetNumUVChannels(int32_t LodLevel); // Function Engine.StaticMesh.GetNumUVChannels // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eeb3e0
	int32_t GetNumLODsBP(); // Function Engine.StaticMesh.GetNumLODsBP // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eeb3b0
	struct FBox GetBoundingBox(); // Function Engine.StaticMesh.GetBoundingBox // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ee96f0
};

// Class Engine.MergedCollisionComponent
// Size: 0x5e0 (Inherited: 0x5c0)
struct UMergedCollisionComponent : UPrimitiveComponent {
	struct TArray<struct FMergedCollisionComponentStaticMeshInstanceData> PerInstanceData; // 0x5b8(0x10)
	char UnknownData_5D0[0x10]; // 0x5d0(0x10)

	struct UStaticMesh* GetStaticMeshByInstanceBodyIndex(int32_t InstanceBodyIndex); // Function Engine.MergedCollisionComponent.GetStaticMeshByInstanceBodyIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eec4b0
	int32_t GetOwningActorCrc32ByInstanceBodyIndex(int32_t InstanceBodyIndex); // Function Engine.MergedCollisionComponent.GetOwningActorCrc32ByInstanceBodyIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eeb550
};

// Class Engine.DestructibleComponent
// Size: 0x7b0 (Inherited: 0x6f0)
struct UDestructibleComponent : USkinnedMeshComponent {
	char bFractureEffectOverride : 1; // 0x6f0(0x01)
	char UnknownData_6F0_1 : 7; // 0x6f0(0x01)
	char UnknownData_6F1[0x7]; // 0x6f1(0x07)
	struct TArray<struct FFractureEffect> FractureEffects; // 0x6f8(0x10)
	bool bEnableHardSleeping; // 0x708(0x01)
	char UnknownData_709[0x3]; // 0x709(0x03)
	float LargeChunkThreshold; // 0x70c(0x04)
	char UnknownData_710[0x10]; // 0x710(0x10)
	struct FMulticastDelegate OnComponentFracture; // 0x720(0x10)
	char UnknownData_730[0x80]; // 0x730(0x80)

	void SetDestructibleMesh(struct UDestructibleMesh* NewMesh); // Function Engine.DestructibleComponent.SetDestructibleMesh // Final|Native|Public|BlueprintCallable // @ game+0x2ef2ef0
	struct UDestructibleMesh* GetDestructibleMesh(); // Function Engine.DestructibleComponent.GetDestructibleMesh // Final|Native|Public|BlueprintCallable // @ game+0x2ee9e80
	void ApplyRadiusDamage(float BaseDamage, struct FVector HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage); // Function Engine.DestructibleComponent.ApplyRadiusDamage // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ee5640
	void ApplyDamage(float DamageAmount, struct FVector HitLocation, struct FVector ImpulseDir, float ImpulseStrength); // Function Engine.DestructibleComponent.ApplyDamage // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ee4a90
};

// Class Engine.PoseableMeshComponent
// Size: 0x7c0 (Inherited: 0x6f0)
struct UPoseableMeshComponent : USkinnedMeshComponent {
	char UnknownData_6F0[0xd0]; // 0x6f0(0xd0)

	void SetBoneTransformByName(struct FName BoneName, struct FTransform InTransform, char BoneSpace); // Function Engine.PoseableMeshComponent.SetBoneTransformByName // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ef1d10
	void SetBoneScaleByName(struct FName BoneName, struct FVector InScale3D, char BoneSpace); // Function Engine.PoseableMeshComponent.SetBoneScaleByName // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ef1a60
	void SetBoneRotationByName(struct FName BoneName, struct FRotator InRotation, char BoneSpace); // Function Engine.PoseableMeshComponent.SetBoneRotationByName // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ef1950
	void SetBoneLocationByName(struct FName BoneName, struct FVector InLocation, char BoneSpace); // Function Engine.PoseableMeshComponent.SetBoneLocationByName // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ef1840
	void ResetBoneTransformByName(struct FName BoneName); // Function Engine.PoseableMeshComponent.ResetBoneTransformByName // Final|Native|Public|BlueprintCallable // @ game+0x2ef0000
	struct FTransform GetBoneTransformByName(struct FName BoneName, char BoneSpace); // Function Engine.PoseableMeshComponent.GetBoneTransformByName // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ee9440
	struct FVector GetBoneScaleByName(struct FName BoneName, char BoneSpace); // Function Engine.PoseableMeshComponent.GetBoneScaleByName // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ee9370
	struct FRotator GetBoneRotationByName(struct FName BoneName, char BoneSpace); // Function Engine.PoseableMeshComponent.GetBoneRotationByName // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ee92a0
	struct FVector GetBoneLocationByName(struct FName BoneName, char BoneSpace); // Function Engine.PoseableMeshComponent.GetBoneLocationByName // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ee91d0
};

// Class Engine.PoseableSkeletalMeshComponent
// Size: 0x9d0 (Inherited: 0x9c0)
struct UPoseableSkeletalMeshComponent : USkeletalMeshComponent {
	char UnknownData_9C0[0x10]; // 0x9c0(0x10)

	void SwitchPoseMode(char NewMode); // Function Engine.PoseableSkeletalMeshComponent.SwitchPoseMode // Final|Native|Public|BlueprintCallable // @ game+0x2ef9800
	void SetBoneTransformByName(struct FName BoneName, struct FTransform InTransform, char BoneSpace, bool bApplyRefPose); // Function Engine.PoseableSkeletalMeshComponent.SetBoneTransformByName // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ef1e70
	void SetBoneTransformByIndex(int32_t BoneIndex, struct FTransform InTransform, char BoneSpace, bool bApplyRefPose); // Function Engine.PoseableSkeletalMeshComponent.SetBoneTransformByIndex // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ef1b70
	struct FTransform GetBoneTransformByName(struct FName BoneName, char BoneSpace, bool bApplyRefPose); // Function Engine.PoseableSkeletalMeshComponent.GetBoneTransformByName // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ee9540
};

// Class Engine.FlatWaterMeshComponent
// Size: 0x6c0 (Inherited: 0x620)
struct UFlatWaterMeshComponent : UStaticMeshComponent {
	int32_t RandomDropRate; // 0x620(0x04)
	float RandomDropSize; // 0x624(0x04)
	float RandomDropHeight; // 0x628(0x04)
	float RestorationScale; // 0x62c(0x04)
	float ForceScale; // 0x630(0x04)
	float DampHeight; // 0x634(0x04)
	float NormalMapScale; // 0x638(0x04)
	int32_t TextureWidth; // 0x63c(0x04)
	int32_t TextureHeight; // 0x640(0x04)
	char UnknownData_644[0x4]; // 0x644(0x04)
	struct UStaticMesh* ClippingHull; // 0x648(0x08)
	float MaxSimulationDistance; // 0x650(0x04)
	float InitialRandomHeight; // 0x654(0x04)
	float InitialRandomVelocity; // 0x658(0x04)
	char UnknownData_65C[0x4]; // 0x65c(0x04)
	struct UTexture* Texture; // 0x660(0x08)
	struct UTexture* NormalTexture; // 0x668(0x08)
	struct UTextureRenderTarget2D* WaterMaskTexture; // 0x670(0x08)
	char UnknownData_678[0x18]; // 0x678(0x18)
	struct TArray<struct UMaterialInterface*> OriginalMaterials; // 0x690(0x10)
	struct TArray<struct FFlatWaterMeshTextureOverride> TextureOverrides; // 0x6a0(0x10)
	char UnknownData_6B0[0x10]; // 0x6b0(0x10)

	void UpdateBoundary(struct AActor* BoundaryActor); // Function Engine.FlatWaterMeshComponent.UpdateBoundary // Final|Native|Public|BlueprintCallable // @ game+0x2ef9ac0
	void SetTexture(int32_t MaterialIndex, struct FName Name, struct UTexture* Texture); // Function Engine.FlatWaterMeshComponent.SetTexture // Final|Native|Public|BlueprintCallable // @ game+0x2ef71c0
	void SetScalarValue(int32_t MaterialIndex, struct FName Name, float Value); // Function Engine.FlatWaterMeshComponent.SetScalarValue // Final|Native|Public|BlueprintCallable // @ game+0x2ef5ce0
	void PlaceDrop(struct FVector2D Position, float Size, float Height); // Function Engine.FlatWaterMeshComponent.PlaceDrop // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2eee770
	void CreateBoundaryMap(struct AActor* BoundaryActor, float ZNearDistance, float ZFarDistance, int32_t TextureSize); // Function Engine.FlatWaterMeshComponent.CreateBoundaryMap // Final|Native|Public|BlueprintCallable // @ game+0x2ee76c0
};

// Class Engine.InstancedCoverageMeshComponent
// Size: 0x6b0 (Inherited: 0x620)
struct UInstancedCoverageMeshComponent : UStaticMeshComponent {
	struct UStaticMeshComponent* CoveredMeshComponent; // 0x620(0x08)
	int32_t InstanceCount; // 0x628(0x04)
	int32_t InstancingRandomSeed; // 0x62c(0x04)
	float InstancePositionExtrusion; // 0x630(0x04)
	float InstanceScale; // 0x634(0x04)
	float InstanceScaleVariance; // 0x638(0x04)
	struct FRotator InstanceRotation; // 0x63c(0x0c)
	struct FRotator InstanceRotationVariance; // 0x648(0x0c)
	struct FVector InstanceAttractionDirection; // 0x654(0x0c)
	float InstanceAttractionIntensity; // 0x660(0x04)
	int32_t InstanceBaseMeshPlacementLOD; // 0x664(0x04)
	struct TArray<struct FInstancedCoverageMeshLOD> LODs; // 0x668(0x10)
	float CompleteCullingDistance; // 0x678(0x04)
	bool InstanceLODPreserveSilhouette; // 0x67c(0x01)
	char UnknownData_67D[0x3]; // 0x67d(0x03)
	float BackFaceCullingAngle; // 0x680(0x04)
	float ShadowBackFaceCullingAngle; // 0x684(0x04)
	int32_t MaxPlacementAttempts; // 0x688(0x04)
	bool bEvenlySpaced; // 0x68c(0x01)
	bool bVertexColourDensity; // 0x68d(0x01)
	bool bUpdatePlacement; // 0x68e(0x01)
	char UnknownData_68F[0x1]; // 0x68f(0x01)
	struct TArray<float> RandomNumbers; // 0x690(0x10)
	float BaseMeshSurfaceArea; // 0x6a0(0x04)
	char UnknownData_6A4[0x4]; // 0x6a4(0x04)
	struct UStaticMesh* CoveredMesh; // 0x6a8(0x08)

	void SetBaseMeshComponent(struct UStaticMeshComponent* BaseMeshComponent); // Function Engine.InstancedCoverageMeshComponent.SetBaseMeshComponent // Native|Public|BlueprintCallable // @ game+0x2ef1670
	struct UStaticMeshComponent* BaseMeshComponent(); // Function Engine.InstancedCoverageMeshComponent.BaseMeshComponent // Native|Public|BlueprintCallable // @ game+0x2ee5b40
};

// Class Engine.MergedStaticMeshComponent
// Size: 0x660 (Inherited: 0x620)
struct UMergedStaticMeshComponent : UStaticMeshComponent {
	bool bDisplayMergedInEditor; // 0x620(0x01)
	char UnknownData_621[0x7]; // 0x621(0x07)
	struct TArray<float> LODScreenSizes; // 0x628(0x10)
	struct TArray<float> LODReductionPercentTriangles; // 0x638(0x10)
	int32_t LODForCollision; // 0x648(0x04)
	bool ClampNumberOfLODs; // 0x64c(0x01)
	char UnknownData_64D[0x3]; // 0x64d(0x03)
	int32_t MaxNumberOfLODs; // 0x650(0x04)
	bool bMergeVertexColours; // 0x654(0x01)
	char UnknownData_655[0xb]; // 0x655(0x0b)
};

// Class Engine.MobileInstancedStaticMeshComponent
// Size: 0x6a0 (Inherited: 0x620)
struct UMobileInstancedStaticMeshComponent : UStaticMeshComponent {
	int32_t MaxInstances; // 0x620(0x04)
	char UnknownData_624[0xc]; // 0x624(0x0c)
	struct TArray<struct FTransform> InstanceTransforms; // 0x630(0x10)
	struct TArray<struct FMatrix> InstanceMatrices; // 0x640(0x10)
	struct FBoxSphereBounds LocalBounds; // 0x650(0x1c)
	bool bBoundsBuilt; // 0x66c(0x01)
	char UnknownData_66D[0x3]; // 0x66d(0x03)
	struct UPhysicsSerializer* PhysicsSerializer; // 0x670(0x08)
	char UnknownData_678[0x28]; // 0x678(0x28)

	int32_t AddInstance(struct FTransform Transform); // Function Engine.MobileInstancedStaticMeshComponent.AddInstance // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ee4210
};

// Class Engine.SplineMeshComponent
// Size: 0x6c0 (Inherited: 0x620)
struct USplineMeshComponent : UStaticMeshComponent {
	char UnknownData_620[0x8]; // 0x620(0x08)
	struct FSplineMeshParams SplineParams; // 0x628(0x58)
	struct FVector SplineUpDir; // 0x680(0x0c)
	char bAllowSplineEditingPerInstance : 1; // 0x68c(0x01)
	char bSmoothInterpRollScale : 1; // 0x68c(0x01)
	char UnknownData_68C_2 : 6; // 0x68c(0x01)
	char UnknownData_68D[0x3]; // 0x68d(0x03)
	char ForwardAxis; // 0x690(0x01)
	char UnknownData_691[0x3]; // 0x691(0x03)
	float SplineBoundaryMin; // 0x694(0x04)
	float SplineBoundaryMax; // 0x698(0x04)
	char UnknownData_69C[0x4]; // 0x69c(0x04)
	struct UBodySetup* BodySetup; // 0x6a0(0x08)
	struct FGuid CachedMeshBodySetupGuid; // 0x6a8(0x10)
	char bMeshDirty : 1; // 0x6b8(0x01)
	char UnknownData_6B8_1 : 7; // 0x6b8(0x01)
	char UnknownData_6B9[0x7]; // 0x6b9(0x07)

	void UpdateMesh(); // Function Engine.SplineMeshComponent.UpdateMesh // Final|Native|Public|BlueprintCallable // @ game+0x2ef9de0
	void SetStartTangent(struct FVector StartTangent, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetStartTangent // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ef6c30
	void SetStartScale(struct FVector2D StartScale, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetStartScale // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ef6b70
	void SetStartRoll(float StartRoll, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetStartRoll // Final|Native|Public|BlueprintCallable // @ game+0x2ef6aa0
	void SetStartPosition(struct FVector StartPos, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetStartPosition // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ef69c0
	void SetStartOffset(struct FVector2D StartOffset, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetStartOffset // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ef6900
	void SetStartAndEnd(struct FVector StartPos, struct FVector StartTangent, struct FVector EndPos, struct FVector EndTangent, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetStartAndEnd // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ef6640
	void SetSplineUpDir(struct FVector InSplineUpDir, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetSplineUpDir // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ef6350
	void SetForwardAxis(char InForwardAxis, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetForwardAxis // Final|Native|Public|BlueprintCallable // @ game+0x2ef4080
	void SetEndTangent(struct FVector EndTangent, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetEndTangent // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ef3830
	void SetEndScale(struct FVector2D EndScale, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetEndScale // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ef3770
	void SetEndRoll(float EndRoll, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetEndRoll // Final|Native|Public|BlueprintCallable // @ game+0x2ef36a0
	void SetEndPosition(struct FVector EndPos, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetEndPosition // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ef35c0
	void SetEndOffset(struct FVector2D EndOffset, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetEndOffset // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ef3500
	void SetBoundaryMin(float InBoundaryMin, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetBoundaryMin // Final|Native|Public|BlueprintCallable // @ game+0x2ef21b0
	void SetBoundaryMax(float InBoundaryMax, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetBoundaryMax // Final|Native|Public|BlueprintCallable // @ game+0x2ef20e0
	struct FVector GetStartTangent(); // Function Engine.SplineMeshComponent.GetStartTangent // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2eec3b0
	struct FVector2D GetStartScale(); // Function Engine.SplineMeshComponent.GetStartScale // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2eec370
	float GetStartRoll(); // Function Engine.SplineMeshComponent.GetStartRoll // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eec340
	struct FVector GetStartPosition(); // Function Engine.SplineMeshComponent.GetStartPosition // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2eec300
	struct FVector2D GetStartOffset(); // Function Engine.SplineMeshComponent.GetStartOffset // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2eec2c0
	struct FVector GetSplineUpDir(); // Function Engine.SplineMeshComponent.GetSplineUpDir // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2eec1c0
	char GetForwardAxis(); // Function Engine.SplineMeshComponent.GetForwardAxis // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ee9fe0
	struct FVector GetEndTangent(); // Function Engine.SplineMeshComponent.GetEndTangent // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ee9fa0
	struct FVector2D GetEndScale(); // Function Engine.SplineMeshComponent.GetEndScale // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ee9f60
	float GetEndRoll(); // Function Engine.SplineMeshComponent.GetEndRoll // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ee9f30
	struct FVector GetEndPosition(); // Function Engine.SplineMeshComponent.GetEndPosition // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ee9ef0
	struct FVector2D GetEndOffset(); // Function Engine.SplineMeshComponent.GetEndOffset // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2ee9eb0
	float GetBoundaryMin(); // Function Engine.SplineMeshComponent.GetBoundaryMin // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ee96c0
	float GetBoundaryMax(); // Function Engine.SplineMeshComponent.GetBoundaryMax // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2ee9690
};

// Class Engine.ModelComponent
// Size: 0x600 (Inherited: 0x5c0)
struct UModelComponent : UPrimitiveComponent {
	char UnknownData_5C0[0x10]; // 0x5c0(0x10)
	struct UBodySetup* ModelBodySetup; // 0x5d0(0x08)
	char UnknownData_5D8[0x28]; // 0x5d8(0x28)
};

// Class Engine.NavLinkRenderingComponent
// Size: 0x5c0 (Inherited: 0x5c0)
struct UNavLinkRenderingComponent : UPrimitiveComponent {
};

// Class Engine.NavMeshRenderingComponent
// Size: 0x5c0 (Inherited: 0x5c0)
struct UNavMeshRenderingComponent : UPrimitiveComponent {
};

// Class Engine.NavTestRenderingComponent
// Size: 0x5c0 (Inherited: 0x5c0)
struct UNavTestRenderingComponent : UPrimitiveComponent {
};

// Class Engine.BoxComponent
// Size: 0x5f0 (Inherited: 0x5e0)
struct UBoxComponent : UShapeComponent {
	struct FVector BoxExtent; // 0x5d8(0x0c)
	char UnknownData_5EC[0x4]; // 0x5ec(0x04)

	void SetBoxExtent(struct FVector InBoxExtent, bool bUpdateOverlaps); // Function Engine.BoxComponent.SetBoxExtent // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ef2280
	struct FVector GetUnscaledBoxExtent(); // Function Engine.BoxComponent.GetUnscaledBoxExtent // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2eec8f0
	struct FVector GetScaledBoxExtent(); // Function Engine.BoxComponent.GetScaledBoxExtent // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2eebed0
};

// Class Engine.SphereComponent
// Size: 0x5e0 (Inherited: 0x5e0)
struct USphereComponent : UShapeComponent {
	float SphereRadius; // 0x5d8(0x04)

	void SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps); // Function Engine.SphereComponent.SetSphereRadius // Final|Native|Public|BlueprintCallable // @ game+0x2ef6280
	float GetUnscaledSphereRadius(); // Function Engine.SphereComponent.GetUnscaledSphereRadius // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eeca50
	float GetShapeScale(); // Function Engine.SphereComponent.GetShapeScale // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eec180
	float GetScaledSphereRadius(); // Function Engine.SphereComponent.GetScaledSphereRadius // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eec0f0
};

// Class Engine.DrawSphereComponent
// Size: 0x5e0 (Inherited: 0x5e0)
struct UDrawSphereComponent : USphereComponent {
};

// Class Engine.EllipsoidComponent
// Size: 0x5e0 (Inherited: 0x5e0)
struct UEllipsoidComponent : USphereComponent {
};

// Class Engine.TextRenderComponent
// Size: 0x620 (Inherited: 0x5c0)
struct UTextRenderComponent : UPrimitiveComponent {
	struct FText Text; // 0x5b8(0x38)
	struct UMaterialInterface* TextMaterial; // 0x5f0(0x08)
	struct UFont* Font; // 0x5f8(0x08)
	char HorizontalAlignment; // 0x600(0x01)
	char VerticalAlignment; // 0x601(0x01)
	struct FColor TextRenderColor; // 0x604(0x04)
	float XScale; // 0x608(0x04)
	float YScale; // 0x60c(0x04)
	float WorldSize; // 0x610(0x04)
	float InvDefaultSize; // 0x614(0x04)
	float HorizSpacingAdjust; // 0x618(0x04)
	char bAlwaysRenderAsText : 1; // 0x61c(0x01)

	void SetYScale(float Value); // Function Engine.TextRenderComponent.SetYScale // Final|Native|Public|BlueprintCallable // @ game+0x2ef7d50
	void SetXScale(float Value); // Function Engine.TextRenderComponent.SetXScale // Final|Native|Public|BlueprintCallable // @ game+0x2ef7cd0
	void SetWorldSize(float Value); // Function Engine.TextRenderComponent.SetWorldSize // Final|Native|Public|BlueprintCallable // @ game+0x2ef7c50
	void SetTextRenderColor(struct FColor Value); // Function Engine.TextRenderComponent.SetTextRenderColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ef7150
	void SetTextMaterial(struct UMaterialInterface* Material); // Function Engine.TextRenderComponent.SetTextMaterial // Final|Native|Public|BlueprintCallable // @ game+0x2ef70d0
	void SetText(struct FString Value); // Function Engine.TextRenderComponent.SetText // Final|Native|Public|BlueprintCallable // @ game+0x2ef7030
	void SetHorizSpacingAdjust(float Value); // Function Engine.TextRenderComponent.SetHorizSpacingAdjust // Final|Native|Public|BlueprintCallable // @ game+0x2ef44d0
	void SetHorizontalAlignment(char Value); // Function Engine.TextRenderComponent.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x2ef4550
	void SetFont(struct UFont* Value); // Function Engine.TextRenderComponent.SetFont // Final|Native|Public|BlueprintCallable // @ game+0x2ef3f80
	void K2_SetText(struct FText Value); // Function Engine.TextRenderComponent.K2_SetText // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x2eed5d0
	struct FVector GetTextWorldSize(); // Function Engine.TextRenderComponent.GetTextWorldSize // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2eec880
	struct FVector GetTextLocalSize(); // Function Engine.TextRenderComponent.GetTextLocalSize // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x2eec840
};

// Class Engine.VectorFieldComponent
// Size: 0x5e0 (Inherited: 0x5c0)
struct UVectorFieldComponent : UPrimitiveComponent {
	struct UVectorField* VectorField; // 0x5b8(0x08)
	float Intensity; // 0x5c0(0x04)
	float Tightness; // 0x5c4(0x04)
	char bPreviewVectorField : 1; // 0x5c8(0x01)
	char UnknownData_5D0_1 : 7; // 0x5d0(0x01)
	char UnknownData_5D1[0xf]; // 0x5d1(0x0f)

	void SetIntensity(float NewIntensity); // Function Engine.VectorFieldComponent.SetIntensity // Native|Public|BlueprintCallable // @ game+0x2ef4910
};

// Class Engine.RadialForceComponent
// Size: 0x310 (Inherited: 0x2e0)
struct URadialForceComponent : USceneComponent {
	float Radius; // 0x2e0(0x04)
	char Falloff; // 0x2e4(0x01)
	char UnknownData_2E5[0x3]; // 0x2e5(0x03)
	float ImpulseStrength; // 0x2e8(0x04)
	char bImpulseVelChange : 1; // 0x2ec(0x01)
	char bIgnoreOwningActor : 1; // 0x2ec(0x01)
	char UnknownData_2EC_2 : 6; // 0x2ec(0x01)
	char UnknownData_2ED[0x3]; // 0x2ed(0x03)
	float ForceStrength; // 0x2f0(0x04)
	float DestructibleDamage; // 0x2f4(0x04)
	struct TArray<char> ObjectTypesToAffect; // 0x2f8(0x10)
	char UnknownData_308[0x8]; // 0x308(0x08)

	void RemoveObjectTypeToAffect(char ObjectType); // Function Engine.RadialForceComponent.RemoveObjectTypeToAffect // Native|Public|BlueprintCallable // @ game+0x2eefeb0
	void FireImpulse(); // Function Engine.RadialForceComponent.FireImpulse // Native|Public|BlueprintCallable // @ game+0x2ee84d0
	void AddObjectTypeToAffect(char ObjectType); // Function Engine.RadialForceComponent.AddObjectTypeToAffect // Native|Public|BlueprintCallable // @ game+0x2ee4480
};

// Class Engine.ReflectionCaptureComponent
// Size: 0x370 (Inherited: 0x2e0)
struct UReflectionCaptureComponent : USceneComponent {
	bool bLockSettings; // 0x2e0(0x01)
	char UnknownData_2E1[0x3]; // 0x2e1(0x03)
	float Brightness; // 0x2e4(0x04)
	float ShadowBrightness; // 0x2e8(0x04)
	float LPVOcclusionBrightness; // 0x2ec(0x04)
	struct FLinearColor ReflectionTint; // 0x2f0(0x10)
	char UnknownData_300[0xc]; // 0x300(0x0c)
	struct FGuid StateId; // 0x30c(0x10)
	char UnknownData_31C[0x54]; // 0x31c(0x54)

	void UpdateReflectionCapture(); // Function Engine.ReflectionCaptureComponent.UpdateReflectionCapture // Final|Native|Public|BlueprintCallable // @ game+0x2ef9e00
	void UpdateAllReflectionCaptures(); // Function Engine.ReflectionCaptureComponent.UpdateAllReflectionCaptures // Final|Native|Public|BlueprintCallable // @ game+0x2ef9aa0
	void SetTint(struct FLinearColor Value); // Function Engine.ReflectionCaptureComponent.SetTint // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ef7440
	void SetShadowBrightness(float Value); // Function Engine.ReflectionCaptureComponent.SetShadowBrightness // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef5df0
	void SetLPVOcclusionBrightness(float Value); // Function Engine.ReflectionCaptureComponent.SetLPVOcclusionBrightness // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef4a90
	void SetBrightness(float Value); // Function Engine.ReflectionCaptureComponent.SetBrightness // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef2360
};

// Class Engine.BoxReflectionCaptureComponent
// Size: 0x390 (Inherited: 0x370)
struct UBoxReflectionCaptureComponent : UReflectionCaptureComponent {
	float BoxTransitionDistance; // 0x370(0x04)
	char UnknownData_374[0x4]; // 0x374(0x04)
	struct UBoxComponent* PreviewInfluenceBox; // 0x378(0x08)
	struct UBoxComponent* PreviewCaptureBox; // 0x380(0x08)
	char UnknownData_388[0x8]; // 0x388(0x08)
};

// Class Engine.PlaneReflectionCaptureComponent
// Size: 0x390 (Inherited: 0x370)
struct UPlaneReflectionCaptureComponent : UReflectionCaptureComponent {
	float InfluenceRadiusScale; // 0x370(0x04)
	char UnknownData_374[0x4]; // 0x374(0x04)
	struct UDrawSphereComponent* PreviewInfluenceRadius; // 0x378(0x08)
	struct UBoxComponent* PreviewCaptureBox; // 0x380(0x08)
	char UnknownData_388[0x8]; // 0x388(0x08)
};

// Class Engine.SphereReflectionCaptureComponent
// Size: 0x380 (Inherited: 0x370)
struct USphereReflectionCaptureComponent : UReflectionCaptureComponent {
	float InfluenceRadius; // 0x370(0x04)
	float CaptureDistanceScale; // 0x374(0x04)
	struct UDrawSphereComponent* PreviewInfluenceRadius; // 0x378(0x08)
};

// Class Engine.SceneCaptureComponent
// Size: 0x350 (Inherited: 0x2e0)
struct USceneCaptureComponent : USceneComponent {
	struct TArray<struct UPrimitiveComponent*> HiddenComponents; // 0x2e0(0x10)
	bool bCaptureEveryFrame; // 0x2f0(0x01)
	char UnknownData_2F1[0x3]; // 0x2f1(0x03)
	float MaxViewDistanceOverride; // 0x2f4(0x04)
	struct TArray<struct FEngineShowFlagsSetting> ShowFlagSettings; // 0x2f8(0x10)
	char UnknownData_308[0x48]; // 0x308(0x48)

	void HideComponent(struct UPrimitiveComponent* InComponent); // Function Engine.SceneCaptureComponent.HideComponent // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2eed0b0
	void HideActorComponents(struct AActor* InActor); // Function Engine.SceneCaptureComponent.HideActorComponents // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2eed030
};

// Class Engine.SceneCaptureComponent2D
// Size: 0x8c0 (Inherited: 0x350)
struct USceneCaptureComponent2D : USceneCaptureComponent {
	float FOVAngle; // 0x348(0x04)
	struct UTextureRenderTarget2D* TextureTarget; // 0x350(0x08)
	char CaptureSource; // 0x358(0x01)
	char UnknownData_35D[0x3]; // 0x35d(0x03)
	struct FPostProcessSettings PostProcessSettings; // 0x360(0x540)
	float PostProcessBlendWeight; // 0x8a0(0x04)
	float OrthoWidth; // 0x8a4(0x04)
	float OrthoNearClipPlane; // 0x8a8(0x04)
	float OrthoFarClipPlane; // 0x8ac(0x04)
	char ProjectionMode; // 0x8b0(0x01)
	char UnknownData_8B1[0x3]; // 0x8b1(0x03)
	float AspectRatio; // 0x8b4(0x04)
	char bConstrainAspectRatio : 1; // 0x8b8(0x01)
	char UnknownData_8B8_1 : 7; // 0x8b8(0x01)
	char UnknownData_8B9[0x3]; // 0x8b9(0x03)
	int32_t LandscapeLODOverride; // 0x8bc(0x04)

	void UpdateContent(); // Function Engine.SceneCaptureComponent2D.UpdateContent // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef9b40
	void AddOrUpdateBlendable(TScriptInterface<struct UBlendableInterface> InBlendableObject, float InWeight); // Function Engine.SceneCaptureComponent2D.AddOrUpdateBlendable // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ee46f0
};

// Class Engine.SceneCaptureComponentCube
// Size: 0x350 (Inherited: 0x350)
struct USceneCaptureComponentCube : USceneCaptureComponent {
	struct UTextureRenderTargetCube* TextureTarget; // 0x348(0x08)

	void UpdateContent(); // Function Engine.SceneCaptureComponentCube.UpdateContent // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef9b60
};

// Class Engine.SpringArmComponent
// Size: 0x370 (Inherited: 0x2e0)
struct USpringArmComponent : USceneComponent {
	float TargetArmLength; // 0x2e0(0x04)
	struct FVector SocketOffset; // 0x2e4(0x0c)
	struct FVector TargetOffset; // 0x2f0(0x0c)
	float ProbeSize; // 0x2fc(0x04)
	char ProbeChannel; // 0x300(0x01)
	char UnknownData_301[0x3]; // 0x301(0x03)
	char bDoCollisionTest : 1; // 0x304(0x01)
	char bUsePawnControlRotation : 1; // 0x304(0x01)
	char bInheritPitch : 1; // 0x304(0x01)
	char bInheritYaw : 1; // 0x304(0x01)
	char bInheritRoll : 1; // 0x304(0x01)
	char bEnableCameraLag : 1; // 0x304(0x01)
	char bEnableCameraRotationLag : 1; // 0x304(0x01)
	char bUseCameraLagSubstepping : 1; // 0x304(0x01)
	char bDrawDebugLagMarkers : 1; // 0x305(0x01)
	char UnknownData_305_1 : 7; // 0x305(0x01)
	char UnknownData_306[0x2]; // 0x306(0x02)
	float CameraLagSpeed; // 0x308(0x04)
	float CameraRotationLagSpeed; // 0x30c(0x04)
	float CameraLagMaxTimeStep; // 0x310(0x04)
	float CameraLagMaxDistance; // 0x314(0x04)
	char UnknownData_318[0x58]; // 0x318(0x58)
};

// Class Engine.WaterEmissionVolumeComponent
// Size: 0x310 (Inherited: 0x2e0)
struct UWaterEmissionVolumeComponent : USceneComponent {
	float Radius; // 0x2e0(0x04)
	float GenerationDensity; // 0x2e4(0x04)
	char UnknownData_2E8[0x28]; // 0x2e8(0x28)
};

// Class Engine.WindDirectionalSourceComponent
// Size: 0x300 (Inherited: 0x2e0)
struct UWindDirectionalSourceComponent : USceneComponent {
	float Strength; // 0x2e0(0x04)
	float Speed; // 0x2e4(0x04)
	float MinGustAmount; // 0x2e8(0x04)
	float MaxGustAmount; // 0x2ec(0x04)
	char UnknownData_2F0[0x10]; // 0x2f0(0x10)
};

// Class Engine.TimelineComponent
// Size: 0x160 (Inherited: 0xc8)
struct UTimelineComponent : UActorComponent {
	struct FTimeline TheTimeline; // 0xc8(0x98)

	void Stop(); // Function Engine.TimelineComponent.Stop // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef9600
	void SetTimelineLengthMode(char NewLengthMode); // Function Engine.TimelineComponent.SetTimelineLengthMode // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef7340
	void SetTimelineLength(float NewLength); // Function Engine.TimelineComponent.SetTimelineLength // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef72c0
	void SetPlayRate(float NewRate); // Function Engine.TimelineComponent.SetPlayRate // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef5750
	void SetPlaybackPosition(float NewPosition, bool bFireEvents, bool bFireUpdate); // Function Engine.TimelineComponent.SetPlaybackPosition // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef57d0
	void SetNewTime(float NewTime); // Function Engine.TimelineComponent.SetNewTime // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef53c0
	void SetLooping(bool bNewLooping); // Function Engine.TimelineComponent.SetLooping // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef4eb0
	void ReverseFromEnd(); // Function Engine.TimelineComponent.ReverseFromEnd // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef00a0
	void Reverse(); // Function Engine.TimelineComponent.Reverse // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2ef0080
	void PlayFromStart(); // Function Engine.TimelineComponent.PlayFromStart // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2eeeee0
	void Play(); // Function Engine.TimelineComponent.Play // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x2eee8f0
	void OnRep_Timeline(); // Function Engine.TimelineComponent.OnRep_Timeline // Final|Native|Public // @ game+0x2eee490
	bool IsReversing(); // Function Engine.TimelineComponent.IsReversing // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eed400
	bool IsPlaying(); // Function Engine.TimelineComponent.IsPlaying // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eed310
	bool IsLooping(); // Function Engine.TimelineComponent.IsLooping // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eed2b0
	float GetTimelineLength(); // Function Engine.TimelineComponent.GetTimelineLength // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eec8c0
	float GetPlayRate(); // Function Engine.TimelineComponent.GetPlayRate // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eeb720
	float GetPlaybackPosition(); // Function Engine.TimelineComponent.GetPlaybackPosition // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x2eeb750
};

// Class Engine.AggregatableInterface
// Size: 0x28 (Inherited: 0x28)
struct UAggregatableInterface : UInterface {
};

// Class Engine.AnimComposite
// Size: 0x88 (Inherited: 0x78)
struct UAnimComposite : UAnimCompositeBase {
	struct FAnimTrack AnimationTrack; // 0x78(0x10)
};

// Class Engine.AnimSequence
// Size: 0x158 (Inherited: 0x78)
struct UAnimSequence : UAnimSequenceBase {
	int32_t NumFrames; // 0x78(0x04)
	char UnknownData_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct FTrackToSkeletonMap> TrackToSkeletonMapTable; // 0x80(0x10)
	char UnknownData_90[0x10]; // 0x90(0x10)
	struct TArray<struct FTranslationTrack> TranslationData; // 0xa0(0x10)
	struct TArray<struct FRotationTrack> RotationData; // 0xb0(0x10)
	struct TArray<struct FScaleTrack> ScaleData; // 0xc0(0x10)
	char TranslationCompressionFormat; // 0xd0(0x01)
	char RotationCompressionFormat; // 0xd1(0x01)
	char ScaleCompressionFormat; // 0xd2(0x01)
	char UnknownData_D3[0x5]; // 0xd3(0x05)
	struct TArray<int32_t> CompressedTrackOffsets; // 0xd8(0x10)
	struct FCompressedOffsetData CompressedScaleOffsets; // 0xe8(0x18)
	char UnknownData_100[0x10]; // 0x100(0x10)
	char KeyEncodingFormat; // 0x110(0x01)
	char UnknownData_111[0x1f]; // 0x111(0x1f)
	char AdditiveAnimType; // 0x130(0x01)
	char RefPoseType; // 0x131(0x01)
	char UnknownData_132[0x6]; // 0x132(0x06)
	struct UAnimSequence* RefPoseSeq; // 0x138(0x08)
	int32_t RefFrameIndex; // 0x140(0x04)
	int32_t EncodingPkgVersion; // 0x144(0x04)
	struct FName RetargetSource; // 0x148(0x08)
	bool bEnableRootMotion; // 0x150(0x01)
	char RootMotionRootLock; // 0x151(0x01)
	bool bRootMotionSettingsCopiedFromMontage; // 0x152(0x01)
	char UnknownData_153[0x5]; // 0x153(0x05)
};

// Class Engine.BlendSpaceBase
// Size: 0x108 (Inherited: 0x50)
struct UBlendSpaceBase : UAnimationAsset {
	struct FBlendParameter BlendParameters[0x03]; // 0x50(0x60)
	struct FInterpolationParameter InterpolationParam[0x03]; // 0xb0(0x18)
	float TargetWeightInterpolationSpeedPerSec; // 0xc8(0x04)
	char NotifyTriggerMode; // 0xcc(0x01)
	bool bRotationBlendInMeshSpace; // 0xcd(0x01)
	char UnknownData_CE[0x2]; // 0xce(0x02)
	int32_t NumOfDimension; // 0xd0(0x04)
	float AnimLength; // 0xd4(0x04)
	struct TArray<struct FPerBoneInterpolation> PerBoneBlend; // 0xd8(0x10)
	struct TArray<struct FBlendSample> SampleData; // 0xe8(0x10)
	struct TArray<struct FEditorElement> GridSamples; // 0xf8(0x10)
};

// Class Engine.BlendSpace
// Size: 0x110 (Inherited: 0x108)
struct UBlendSpace : UBlendSpaceBase {
	char AxisToScaleAnimation; // 0x108(0x01)
	char UnknownData_109[0x7]; // 0x109(0x07)
};

// Class Engine.AimOffsetBlendSpace
// Size: 0x110 (Inherited: 0x110)
struct UAimOffsetBlendSpace : UBlendSpace {
};

// Class Engine.BlendSpace1D
// Size: 0x110 (Inherited: 0x108)
struct UBlendSpace1D : UBlendSpaceBase {
	bool bScaleAnimation; // 0x108(0x01)
	char UnknownData_109[0x7]; // 0x109(0x07)
};

// Class Engine.AimOffsetBlendSpace1D
// Size: 0x110 (Inherited: 0x110)
struct UAimOffsetBlendSpace1D : UBlendSpace1D {
};

// Class Engine.AnimCompress
// Size: 0x40 (Inherited: 0x28)
struct UAnimCompress : UObject {
	struct FString Description; // 0x28(0x10)
	char bNeedsSkeleton : 1; // 0x38(0x01)
	char UnknownData_38_1 : 7; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	char TranslationCompressionFormat; // 0x3c(0x01)
	char RotationCompressionFormat; // 0x3d(0x01)
	char ScaleCompressionFormat; // 0x3e(0x01)
	char UnknownData_3F[0x1]; // 0x3f(0x01)
};

// Class Engine.AnimCompress_Automatic
// Size: 0x48 (Inherited: 0x40)
struct UAnimCompress_Automatic : UAnimCompress {
	float MaxEndEffectorError; // 0x40(0x04)
	char bTryFixedBitwiseCompression : 1; // 0x44(0x01)
	char bTryPerTrackBitwiseCompression : 1; // 0x44(0x01)
	char bTryLinearKeyRemovalCompression : 1; // 0x44(0x01)
	char bTryIntervalKeyRemoval : 1; // 0x44(0x01)
	char bRunCurrentDefaultCompressor : 1; // 0x44(0x01)
	char bAutoReplaceIfExistingErrorTooGreat : 1; // 0x44(0x01)
	char bRaiseMaxErrorToExisting : 1; // 0x44(0x01)
	char UnknownData_45[0x3]; // 0x45(0x03)
};

// Class Engine.AnimCompress_BitwiseCompressOnly
// Size: 0x40 (Inherited: 0x40)
struct UAnimCompress_BitwiseCompressOnly : UAnimCompress {
};

// Class Engine.AnimCompress_LeastDestructive
// Size: 0x40 (Inherited: 0x40)
struct UAnimCompress_LeastDestructive : UAnimCompress {
};

// Class Engine.AnimCompress_RemoveEverySecondKey
// Size: 0x48 (Inherited: 0x40)
struct UAnimCompress_RemoveEverySecondKey : UAnimCompress {
	int32_t MinKeys; // 0x40(0x04)
	char bStartAtSecondKey : 1; // 0x44(0x01)
	char UnknownData_44_1 : 7; // 0x44(0x01)
	char UnknownData_45[0x3]; // 0x45(0x03)
};

// Class Engine.AnimCompress_RemoveLinearKeys
// Size: 0x60 (Inherited: 0x40)
struct UAnimCompress_RemoveLinearKeys : UAnimCompress {
	float MaxPosDiff; // 0x40(0x04)
	float MaxAngleDiff; // 0x44(0x04)
	float MaxScaleDiff; // 0x48(0x04)
	float MaxEffectorDiff; // 0x4c(0x04)
	float MinEffectorDiff; // 0x50(0x04)
	float EffectorDiffSocket; // 0x54(0x04)
	float ParentKeyScale; // 0x58(0x04)
	char bRetarget : 1; // 0x5c(0x01)
	char bActuallyFilterLinearKeys : 1; // 0x5c(0x01)
	char UnknownData_5C_2 : 6; // 0x5c(0x01)
	char UnknownData_5D[0x3]; // 0x5d(0x03)
};

// Class Engine.AnimCompress_PerTrackCompression
// Size: 0xe0 (Inherited: 0x60)
struct UAnimCompress_PerTrackCompression : UAnimCompress_RemoveLinearKeys {
	float MaxZeroingThreshold; // 0x60(0x04)
	float MaxPosDiffBitwise; // 0x64(0x04)
	float MaxAngleDiffBitwise; // 0x68(0x04)
	float MaxScaleDiffBitwise; // 0x6c(0x04)
	struct TArray<char> AllowedRotationFormats; // 0x70(0x10)
	struct TArray<char> AllowedTranslationFormats; // 0x80(0x10)
	struct TArray<char> AllowedScaleFormats; // 0x90(0x10)
	char bResampleAnimation : 1; // 0xa0(0x01)
	char UnknownData_A0_1 : 7; // 0xa0(0x01)
	char UnknownData_A1[0x3]; // 0xa1(0x03)
	float ResampledFramerate; // 0xa4(0x04)
	int32_t MinKeysForResampling; // 0xa8(0x04)
	char bUseAdaptiveError : 1; // 0xac(0x01)
	char bUseOverrideForEndEffectors : 1; // 0xac(0x01)
	char UnknownData_AC_2 : 6; // 0xac(0x01)
	char UnknownData_AD[0x3]; // 0xad(0x03)
	int32_t TrackHeightBias; // 0xb0(0x04)
	float ParentingDivisor; // 0xb4(0x04)
	float ParentingDivisorExponent; // 0xb8(0x04)
	char bUseAdaptiveError2 : 1; // 0xbc(0x01)
	char UnknownData_BC_1 : 7; // 0xbc(0x01)
	char UnknownData_BD[0x3]; // 0xbd(0x03)
	float RotationErrorSourceRatio; // 0xc0(0x04)
	float TranslationErrorSourceRatio; // 0xc4(0x04)
	float ScaleErrorSourceRatio; // 0xc8(0x04)
	float MaxErrorPerTrackRatio; // 0xcc(0x04)
	float PerturbationProbeSize; // 0xd0(0x04)
	char UnknownData_D4[0xc]; // 0xd4(0x0c)
};

// Class Engine.AnimCompress_RemoveTrivialKeys
// Size: 0x50 (Inherited: 0x40)
struct UAnimCompress_RemoveTrivialKeys : UAnimCompress {
	float MaxPosDiff; // 0x40(0x04)
	float MaxAngleDiff; // 0x44(0x04)
	float MaxScaleDiff; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.AnimSingleNodeInstance
// Size: 0x520 (Inherited: 0x440)
struct UAnimSingleNodeInstance : UAnimInstance {
	struct UAnimationAsset* CurrentAsset; // 0x440(0x08)
	struct UVertexAnimation* CurrentVertexAnim; // 0x448(0x08)
	struct FVector BlendSpaceInput; // 0x450(0x0c)
	char UnknownData_45C[0x4]; // 0x45c(0x04)
	struct TArray<struct FBlendSampleData> BlendSampleData; // 0x460(0x10)
	struct FBlendFilter BlendFilter; // 0x470(0x90)
	float CurrentTime; // 0x500(0x04)
	float PlayRate; // 0x504(0x04)
	DelegateProperty PostEvaluateAnimEvent; // 0x508(0x10)
	char bLooping : 1; // 0x518(0x01)
	char bPlaying : 1; // 0x518(0x01)
	char bReverse : 1; // 0x518(0x01)
	char UnknownData_518_3 : 5; // 0x518(0x01)
	char UnknownData_519[0x7]; // 0x519(0x07)

	void StopAnim(); // Function Engine.AnimSingleNodeInstance.StopAnim // Final|Native|Public|BlueprintCallable // @ game+0x2ef9620
	void SetVertexAnimation(struct UVertexAnimation* NewVertexAnim, bool bIsLooping, float InPlayRate); // Function Engine.AnimSingleNodeInstance.SetVertexAnimation // Final|Native|Public|BlueprintCallable // @ game+0x2ef7720
	void SetReverse(bool bInReverse); // Function Engine.AnimSingleNodeInstance.SetReverse // Final|Native|Public|BlueprintCallable // @ game+0x2ef5c50
	void SetPosition(float InPosition, bool bFireNotifies); // Function Engine.AnimSingleNodeInstance.SetPosition // Final|Native|Public|BlueprintCallable // @ game+0x2ef5970
	void SetPlayRate(float InPlayRate); // Function Engine.AnimSingleNodeInstance.SetPlayRate // Final|Native|Public|BlueprintCallable // @ game+0x2ef56d0
	void SetPlaying(bool bIsPlaying); // Function Engine.AnimSingleNodeInstance.SetPlaying // Final|Native|Public|BlueprintCallable // @ game+0x2ef58e0
	void SetLooping(bool bIsLooping); // Function Engine.AnimSingleNodeInstance.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x2ef4e20
	void SetBlendSpaceInput(struct FVector InBlendInput); // Function Engine.AnimSingleNodeInstance.SetBlendSpaceInput // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ef17b0
	void SetAnimationAsset(struct UAnimationAsset* NewAsset, bool bIsLooping, float InPlayRate); // Function Engine.AnimSingleNodeInstance.SetAnimationAsset // Native|Public|BlueprintCallable // @ game+0x2ef1240
	void PlayAnim(bool bIsLooping, float InPlayRate, float InStartPosition); // Function Engine.AnimSingleNodeInstance.PlayAnim // Final|Native|Public|BlueprintCallable // @ game+0x2eee910
	float GetLength(); // Function Engine.AnimSingleNodeInstance.GetLength // Final|Native|Public|BlueprintCallable // @ game+0x2eeaea0
};

// Class Engine.AnimMetaData
// Size: 0x28 (Inherited: 0x28)
struct UAnimMetaData : UObject {
};

// Class Engine.AnimNotify_ResetDynamics
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotify_ResetDynamics : UAnimNotify {
};

// Class Engine.AnimNotifyCondition
// Size: 0x28 (Inherited: 0x28)
struct UAnimNotifyCondition : UObject {
};

// Class Engine.AnimNotifyState_Trail
// Size: 0x58 (Inherited: 0x30)
struct UAnimNotifyState_Trail : UAnimNotifyState {
	struct UParticleSystem* PSTemplate; // 0x30(0x08)
	struct FName FirstSocketName; // 0x38(0x08)
	struct FName SecondSocketName; // 0x40(0x08)
	char WidthScaleMode; // 0x48(0x01)
	char UnknownData_49[0x3]; // 0x49(0x03)
	struct FName WidthScaleCurve; // 0x4c(0x08)
	char UnknownData_54[0x4]; // 0x54(0x04)

	struct UParticleSystem* OverridePSTemplate(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function Engine.AnimNotifyState_Trail.OverridePSTemplate // Event|Public|BlueprintEvent|Const // @ game+0x188c2f0
};

// Class Engine.AnimSet
// Size: 0xf0 (Inherited: 0x28)
struct UAnimSet : UObject {
	char bAnimRotationOnly : 1; // 0x28(0x01)
	char UnknownData_28_1 : 7; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct TArray<struct FName> TrackBoneNames; // 0x30(0x10)
	struct TArray<struct FAnimSetMeshLinkup> LinkupCache; // 0x40(0x10)
	struct TArray<char> BoneUseAnimTranslation; // 0x50(0x10)
	struct TArray<char> ForceUseMeshTranslation; // 0x60(0x10)
	struct TArray<struct FName> UseTranslationBoneNames; // 0x70(0x10)
	struct TArray<struct FName> ForceMeshTranslationBoneNames; // 0x80(0x10)
	struct FName PreviewSkelMeshName; // 0x90(0x08)
	struct FName BestRatioSkelMeshName; // 0x98(0x08)
	char UnknownData_A0[0x50]; // 0xa0(0x50)
};

// Class Engine.AssetImportData
// Size: 0x28 (Inherited: 0x28)
struct UAssetImportData : UObject {
};

// Class Engine.AssetUserData
// Size: 0x28 (Inherited: 0x28)
struct UAssetUserData : UObject {
};

// Class Engine.AutomationTestSettings
// Size: 0x308 (Inherited: 0x28)
struct UAutomationTestSettings : UObject {
	struct FFilePath AutomationTestmap; // 0x28(0x10)
	struct TArray<struct FEditorMapPerformanceTestDefinition> EditorPerformanceTestMaps; // 0x38(0x10)
	struct FBuildPromotionTestSettings BuildPromotionTest; // 0x48(0x210)
	struct FMaterialEditorPromotionSettings MaterialEditorPromotionTest; // 0x258(0x30)
	struct FParticleEditorPromotionSettings ParticleEditorPromotionTest; // 0x288(0x10)
	struct TArray<struct FString> EngineTestModules; // 0x298(0x10)
	struct TArray<struct FString> EditorTestModules; // 0x2a8(0x10)
	struct TArray<struct FString> TestLevelFolders; // 0x2b8(0x10)
	struct TArray<struct FOpenTestAsset> TestAssetsToOpen; // 0x2c8(0x10)
	struct TArray<struct FExternalToolDefinition> ExternalTools; // 0x2d8(0x10)
	struct TArray<struct FEditorImportExportTestDefinition> ImportExportTestDefinitions; // 0x2e8(0x10)
	struct TArray<struct FLaunchOnTestSettings> LaunchOnSettings; // 0x2f8(0x10)
};

// Class Engine.AutomationTestUserSettings
// Size: 0x58 (Inherited: 0x28)
struct UAutomationTestUserSettings : UObject {
	bool FilterTests; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct TArray<struct FString> IncludedTestsPrefix; // 0x30(0x10)
	struct TArray<struct FString> ExcludedTestsPrefix; // 0x40(0x10)
	bool IncludeEpicTests; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
};

// Class Engine.AvoidanceManager
// Size: 0xc8 (Inherited: 0x28)
struct UAvoidanceManager : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	float DefaultTimeToLive; // 0x30(0x04)
	float LockTimeAfterAvoid; // 0x34(0x04)
	float LockTimeAfterClean; // 0x38(0x04)
	float DeltaTimeToPredict; // 0x3c(0x04)
	float ArtificialRadiusExpansion; // 0x40(0x04)
	float TestHeightDifference; // 0x44(0x04)
	char UnknownData_48[0x80]; // 0x48(0x80)

	bool RegisterMovementComponent(struct UMovementComponent* MovementComp, float AvoidanceWeight); // Function Engine.AvoidanceManager.RegisterMovementComponent // Final|Native|Public|BlueprintCallable // @ game+0x2eefc60
	int32_t GetObjectCount(); // Function Engine.AvoidanceManager.GetObjectCount // Final|Native|Public|BlueprintCallable // @ game+0x2eeb4f0
	int32_t GetNewAvoidanceUID(); // Function Engine.AvoidanceManager.GetNewAvoidanceUID // Final|Native|Public|BlueprintCallable // @ game+0x2eeb210
	struct FVector GetAvoidanceVelocityIgnoringUID(struct FNavAvoidanceData AvoidanceData, float DeltaTime, int32_t IgnoreThisUID); // Function Engine.AvoidanceManager.GetAvoidanceVelocityIgnoringUID // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ee9080
	struct FVector GetAvoidanceVelocityForComponent(struct UMovementComponent* MovementComp); // Function Engine.AvoidanceManager.GetAvoidanceVelocityForComponent // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x2ee8fe0
	struct FVector GetAvoidanceVelocity(struct FNavAvoidanceData AvoidanceData, float DeltaTime); // Function Engine.AvoidanceManager.GetAvoidanceVelocity // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ee8ee0
};

// Class Engine.AnimBlueprint
// Size: 0x100 (Inherited: 0xd8)
struct UAnimBlueprint : UBlueprint {
	struct USkeleton* TargetSkeleton; // 0xd8(0x08)
	struct TArray<struct FAnimGroupInfo> Groups; // 0xe0(0x10)
	struct TArray<struct FName> SkeletonSlotNames; // 0xf0(0x10)
};

// Class Engine.LevelScriptBlueprint
// Size: 0xd8 (Inherited: 0xd8)
struct ULevelScriptBlueprint : UBlueprint {
};

// Class Engine.DataTable
// Size: 0x80 (Inherited: 0x28)
struct UDataTable : UObject {
	struct UScriptStruct* RowStruct; // 0x28(0x08)
	char UnknownData_30[0x50]; // 0x30(0x50)
};

// Class Engine.DataTableFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UDataTableFunctionLibrary : UBlueprintFunctionLibrary {

	void GetDataTableRowNames(struct UDataTable* Table, struct TArray<struct FName> OutRowNames); // Function Engine.DataTableFunctionLibrary.GetDataTableRowNames // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x2ee9d40
	bool GetDataTableRowFromName(struct UDataTable* Table, struct FName RowName, struct FTableRowBase OutRow); // Function Engine.DataTableFunctionLibrary.GetDataTableRowFromName // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x2ee9c40
	void EvaluateCurveTableRow(struct UCurveTable* CurveTable, struct FName RowName, float InXY, char OutResult, float OutXY); // Function Engine.DataTableFunctionLibrary.EvaluateCurveTableRow // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x2ee8040
};

// Class Engine.DebugDrawService
// Size: 0x28 (Inherited: 0x28)
struct UDebugDrawService : UBlueprintFunctionLibrary {
};

// Class Engine.DeformablesBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UDeformablesBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void ApplyWorldForceToDeformables(struct USkinnedMeshComponent* SkinnedMeshComp, struct FVector WorldSpaceForce); // Function Engine.DeformablesBlueprintFunctionLibrary.ApplyWorldForceToDeformables // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x2ee57e0
};

// Class Engine.FeatureConfigBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UFeatureConfigBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void MakeFeatureFlag(struct FFeatureFlag Flag); // Function Engine.FeatureConfigBlueprintFunctionLibrary.MakeFeatureFlag // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x2eeda90
	bool IsFeatureEnabled(struct FFeatureFlag Flag); // Function Engine.FeatureConfigBlueprintFunctionLibrary.IsFeatureEnabled // Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x2eed130
	void BreakFeatureFlag(struct FFeatureFlag Flag); // Function Engine.FeatureConfigBlueprintFunctionLibrary.BreakFeatureFlag // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x2ee63f0
};

// Class Engine.DialogueTypes
// Size: 0x28 (Inherited: 0x28)
struct UDialogueTypes : UObject {
};

// Class Engine.GameplayStatics
// Size: 0x28 (Inherited: 0x28)
struct UGameplayStatics : UBlueprintFunctionLibrary {

	void UnloadStreamLevel(struct UObject* WorldContextObject, struct FName LevelName, struct FLatentActionInfo LatentInfo); // Function Engine.GameplayStatics.UnloadStreamLevel // Final|Native|Static|Public|BlueprintCallable // @ game+0x2ef98b0
	struct UAudioComponent* SpawnSoundAttached(struct USoundBase* Sound, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, char LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings); // Function Engine.GameplayStatics.SpawnSoundAttached // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x2ef92b0
	struct UAudioComponent* SpawnSoundAtLocation(struct UObject* WorldContextObject, struct USoundBase* Sound, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings); // Function Engine.GameplayStatics.SpawnSoundAtLocation // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x2ef9060
	struct UAudioComponent* SpawnSound2D(struct UObject* WorldContextObject, struct USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime); // Function Engine.GameplayStatics.SpawnSound2D // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x2ef8ee0
	struct UObject* SpawnObject(struct UClass* ObjectClass, struct UObject* Outer); // Function Engine.GameplayStatics.SpawnObject // Final|Native|Static|Public|BlueprintCallable // @ game+0x2ef8e20
	struct UParticleSystemComponent* SpawnEmitterAttached(struct UParticleSystem* EmitterTemplate, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, char LocationType, bool bAutoDestroy); // Function Engine.GameplayStatics.SpawnEmitterAttached // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x2ef8c10
	struct UParticleSystemComponent* SpawnEmitterAtLocation(struct UObject* WorldContextObject, struct UParticleSystem* EmitterTemplate, struct FVector Location, struct FRotator Rotation, bool bAutoDestroy); // Function Engine.GameplayStatics.SpawnEmitterAtLocation // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x2ef8a80
	struct UAudioComponent* SpawnDialogueAttached(struct UDialogueWave* Dialogue, struct FDialogueContext Context, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, char LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings); // Function Engine.GameplayStatics.SpawnDialogueAttached // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ef86d0
	struct UAudioComponent* SpawnDialogueAtLocation(struct UObject* WorldContextObject, struct UDialogueWave* Dialogue, struct FDialogueContext Context, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings); // Function Engine.GameplayStatics.SpawnDialogueAtLocation // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ef8400
	struct UAudioComponent* SpawnDialogue2D(struct UObject* WorldContextObject, struct UDialogueWave* Dialogue, struct FDialogueContext Context, float VolumeMultiplier, float PitchMultiplier, float StartTime); // Function Engine.GameplayStatics.SpawnDialogue2D // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x2ef8210
	struct UDecalComponent* SpawnDecalAttached(struct UMaterialInterface* DecalMaterial, struct FVector DecalSize, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, char LocationType, float LifeSpan); // Function Engine.GameplayStatics.SpawnDecalAttached // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x2ef7fb0
	struct UDecalComponent* SpawnDecalAtLocation(struct UObject* WorldContextObject, struct UMaterialInterface* DecalMaterial, struct FVector DecalSize, struct FVector Location, struct FRotator Rotation, float LifeSpan); // Function Engine.GameplayStatics.SpawnDecalAtLocation // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x2ef7dd0
	void SetWorldOriginLocation(struct UObject* WorldContextObject, struct FIntVector NewLocation); // Function Engine.GameplayStatics.SetWorldOriginLocation // Final|Native|Static|Public|BlueprintCallable // @ game+0x2ef7b90
	void SetGlobalTimeDilation(struct UObject* WorldContextObject, float TimeDilation); // Function Engine.GameplayStatics.SetGlobalTimeDilation // Final|Native|Static|Public|BlueprintCallable // @ game+0x2ef4290
	bool SetGamePaused(struct UObject* WorldContextObject, bool bPaused); // Function Engine.GameplayStatics.SetGamePaused // Final|Native|Static|Public|BlueprintCallable // @ game+0x2ef41d0
	void SetBaseSoundMix(struct UObject* WorldContextObject, struct USoundMix* InSoundMix); // Function Engine.GameplayStatics.SetBaseSoundMix // Final|Native|Static|Public|BlueprintCallable // @ game+0x2ef1700
	bool SaveGameToSlot(struct USaveGame* SaveGameObject, struct FString SlotName, int32_t UserIndex); // Function Engine.GameplayStatics.SaveGameToSlot // Final|Native|Static|Public|BlueprintCallable // @ game+0x2ef00c0
	void RemovePlayer(struct APlayerController* Player, bool bDestroyPawn); // Function Engine.GameplayStatics.RemovePlayer // Final|Native|Static|Public|BlueprintCallable // @ game+0x2eeff40
	void PushSoundMixModifier(struct UObject* WorldContextObject, struct USoundMix* InSoundMixModifier); // Function Engine.GameplayStatics.PushSoundMixModifier // Final|Native|Static|Public|BlueprintCallable // @ game+0x2eefb90
	bool ProjectWorldToScreen(struct APlayerController* Player, struct FVector WorldPosition, struct FVector2D ScreenPosition); // Function Engine.GameplayStatics.ProjectWorldToScreen // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2eefa70
	void PopSoundMixModifier(struct UObject* WorldContextObject, struct USoundMix* InSoundMixModifier); // Function Engine.GameplayStatics.PopSoundMixModifier // Final|Native|Static|Public|BlueprintCallable // @ game+0x2eef8e0
	void PlayWorldCameraShake(struct UObject* WorldContextObject, struct UClass* Shake, struct FVector Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter); // Function Engine.GameplayStatics.PlayWorldCameraShake // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x2eef6d0
	void PlaySoundAtLocation(struct UObject* WorldContextObject, struct USoundBase* Sound, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings); // Function Engine.GameplayStatics.PlaySoundAtLocation // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x2eef480
	void PlaySound2D(struct UObject* WorldContextObject, struct USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime); // Function Engine.GameplayStatics.PlaySound2D // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x2eef300
	void PlayDialogueAtLocation(struct UObject* WorldContextObject, struct UDialogueWave* Dialogue, struct FDialogueContext Context, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings); // Function Engine.GameplayStatics.PlayDialogueAtLocation // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2eeec00
	void PlayDialogue2D(struct UObject* WorldContextObject, struct UDialogueWave* Dialogue, struct FDialogueContext Context, float VolumeMultiplier, float PitchMultiplier, float StartTime); // Function Engine.GameplayStatics.PlayDialogue2D // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x2eeea10
	struct FString ParseOption(struct FString Options, struct FString Key); // Function Engine.GameplayStatics.ParseOption // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2eee620
	void OpenLevel(struct UObject* WorldContextObject, struct FName LevelName, bool bAbsolute, struct FString Options); // Function Engine.GameplayStatics.OpenLevel // Final|Native|Static|Public|BlueprintCallable // @ game+0x2eee4b0
	void LoadStreamLevel(struct UObject* WorldContextObject, struct FName LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, struct FLatentActionInfo LatentInfo); // Function Engine.GameplayStatics.LoadStreamLevel // Final|Native|Static|Public|BlueprintCallable // @ game+0x2eed810
	struct USaveGame* LoadGameFromSlot(struct FString SlotName, int32_t UserIndex); // Function Engine.GameplayStatics.LoadGameFromSlot // Final|Native|Static|Public|BlueprintCallable // @ game+0x2eed730
	bool IsGamePaused(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.IsGamePaused // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2eed1d0
	bool HasOption(struct FString Options, struct FString InKey); // Function Engine.GameplayStatics.HasOption // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2eecf20
	int32_t GrassOverlappingSphereCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FVector CenterPosition, float Radius); // Function Engine.GameplayStatics.GrassOverlappingSphereCount // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x2eecdd0
	struct FIntVector GetWorldOriginLocation(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.GetWorldOriginLocation // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2eecbc0
	float GetWorldDeltaSeconds(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.GetWorldDeltaSeconds // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2eecb30
	char GetSurfaceType(struct FHitResult Hit); // Function Engine.GameplayStatics.GetSurfaceType // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x2eec600
	struct ULevelStreaming* GetStreamingLevel(struct UObject* WorldContextObject, struct FName PackageName); // Function Engine.GameplayStatics.GetStreamingLevel // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2eec540
	float GetRealTimeSeconds(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.GetRealTimeSeconds // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2eeba80
	struct APawn* GetPlayerPawn(struct UObject* WorldContextObject, int32_t PlayerIndex); // Function Engine.GameplayStatics.GetPlayerPawn // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2eeb9c0
	struct APlayerController* GetPlayerController(struct UObject* WorldContextObject, int32_t PlayerIndex); // Function Engine.GameplayStatics.GetPlayerController // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2eeb900
	struct ACharacter* GetPlayerCharacter(struct UObject* WorldContextObject, int32_t PlayerIndex); // Function Engine.GameplayStatics.GetPlayerCharacter // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2eeb840
	struct APlayerCameraManager* GetPlayerCameraManager(struct UObject* WorldContextObject, int32_t PlayerIndex); // Function Engine.GameplayStatics.GetPlayerCameraManager // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2eeb780
	struct FString GetPlatformName(); // Function Engine.GameplayStatics.GetPlatformName // Final|Native|Static|Public|BlueprintCallable // @ game+0x2eeb640
	struct UClass* GetObjectClass(struct UObject* Object); // Function Engine.GameplayStatics.GetObjectClass // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2eeb470
	void GetKeyValue(struct FString Pair, struct FString Key, struct FString Value); // Function Engine.GameplayStatics.GetKeyValue // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x2eead30
	int32_t GetIntOption(struct FString Options, struct FString Key, int32_t DefaultValue); // Function Engine.GameplayStatics.GetIntOption // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2eeabf0
	float GetGlobalTimeDilation(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.GetGlobalTimeDilation // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2eea190
	struct AGameState* GetGameState(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.GetGameState // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2eea110
	struct AGameMode* GetGameMode(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.GetGameMode // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2eea090
	struct UGameInstance* GetGameInstance(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.GetGameInstance // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2eea010
	struct FString GetCurrentLevelName(struct UObject* WorldContextObject, bool bRemovePrefixString); // Function Engine.GameplayStatics.GetCurrentLevelName // Final|Native|Static|Public|BlueprintCallable // @ game+0x2ee9930
	float GetAudioTimeSeconds(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.GetAudioTimeSeconds // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ee8e50
	void GetAllActorsWithInterface(struct UObject* WorldContextObject, struct UClass* Interface, struct TArray<struct AActor*> OutActors); // Function Engine.GameplayStatics.GetAllActorsWithInterface // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x2ee8a00
	void GetAllActorsOfClass(struct UObject* WorldContextObject, struct UClass* ActorClass, struct TArray<struct AActor*> OutActors); // Function Engine.GameplayStatics.GetAllActorsOfClass // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x2ee88e0
	void GetActorArrayBounds(struct TArray<struct AActor*> Actors, bool bOnlyCollidingComponents, struct FVector Center, struct FVector BoxExtent); // Function Engine.GameplayStatics.GetActorArrayBounds // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ee8740
	struct FVector GetActorArrayAverageLocation(struct TArray<struct AActor*> Actors); // Function Engine.GameplayStatics.GetActorArrayAverageLocation // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ee8680
	void GetAccurateRealTime(struct UObject* WorldContextObject, int32_t Seconds, float PartialSeconds); // Function Engine.GameplayStatics.GetAccurateRealTime // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x2ee8560
	void FlushLevelStreaming(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.FlushLevelStreaming // Final|Native|Static|Public|BlueprintCallable // @ game+0x2ee84f0
	struct AActor* FinishSpawningActor(struct AActor* Actor, struct FTransform SpawnTransform); // Function Engine.GameplayStatics.FinishSpawningActor // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ee83b0
	void EnableLiveStreaming(bool Enable); // Function Engine.GameplayStatics.EnableLiveStreaming // Final|Native|Static|Public|BlueprintCallable // @ game+0x2ee7fc0
	bool DoesSaveGameExist(struct FString SlotName, int32_t UserIndex); // Function Engine.GameplayStatics.DoesSaveGameExist // Final|Native|Static|Public|BlueprintCallable // @ game+0x2ee7e60
	bool DeprojectScreenToWorld(struct APlayerController* Player, struct FVector2D ScreenPosition, struct FVector WorldPosition, struct FVector WorldDirection); // Function Engine.GameplayStatics.DeprojectScreenToWorld // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ee7bb0
	bool DeleteGameInSlot(struct FString SlotName, int32_t UserIndex); // Function Engine.GameplayStatics.DeleteGameInSlot // Final|Native|Static|Public|BlueprintCallable // @ game+0x2ee7ad0
	void DeactivateReverbEffect(struct UObject* WorldContextObject, struct FName TagName); // Function Engine.GameplayStatics.DeactivateReverbEffect // Final|Native|Static|Public|BlueprintCallable // @ game+0x2ee7a20
	struct USaveGame* CreateSaveGameObjectFromBlueprint(struct UBlueprint* SaveGameBlueprint); // Function Engine.GameplayStatics.CreateSaveGameObjectFromBlueprint // Final|Native|Static|Public|BlueprintCallable // @ game+0x2ee79a0
	struct USaveGame* CreateSaveGameObject(struct UClass* SaveGameClass); // Function Engine.GameplayStatics.CreateSaveGameObject // Final|Native|Static|Public|BlueprintCallable // @ game+0x2ee7920
	struct APlayerController* CreatePlayer(struct UObject* WorldContextObject, int32_t ControllerId, bool bSpawnPawn); // Function Engine.GameplayStatics.CreatePlayer // Final|Native|Static|Public|BlueprintCallable // @ game+0x2ee7830
	void ClearSoundMixModifiers(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.ClearSoundMixModifiers // Final|Native|Static|Public|BlueprintCallable // @ game+0x2ee6e50
	void BreakHitResult(struct FHitResult Hit, bool bBlockingHit, bool bInitialOverlap, float Time, struct FVector Location, struct FVector ImpactPoint, struct FVector Normal, struct FVector ImpactNormal, struct UPhysicalMaterial* PhysMat, struct AActor* HitActor, struct UPrimitiveComponent* HitComponent, struct FName HitBoneName, int32_t HitItem, struct FVector TraceStart, struct FVector TraceEnd); // Function Engine.GameplayStatics.BreakHitResult // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ee6480
	bool BlueprintSuggestProjectileVelocity(struct UObject* WorldContextObject, struct FVector TossVelocity, struct FVector StartLocation, struct FVector EndLocation, float LaunchSpeed, float OverrideGravityZ, char TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug); // Function Engine.GameplayStatics.BlueprintSuggestProjectileVelocity // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ee6100
	struct AActor* BeginSpawningActorFromClass(struct UObject* WorldContextObject, struct UClass* ActorClass, struct FTransform SpawnTransform, bool bNoCollisionFail, struct AActor* Owner); // Function Engine.GameplayStatics.BeginSpawningActorFromClass // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ee5f00
	struct AActor* BeginSpawningActorFromBlueprint(struct UObject* WorldContextObject, struct UBlueprint* Blueprint, struct FTransform SpawnTransform, bool bNoCollisionFail); // Function Engine.GameplayStatics.BeginSpawningActorFromBlueprint // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ee5d60
	struct AActor* BeginDeferredActorSpawnFromClass(struct UObject* WorldContextObject, struct UClass* ActorClass, struct FTransform SpawnTransform, char CollisionHandlingOverride, struct AActor* Owner); // Function Engine.GameplayStatics.BeginDeferredActorSpawnFromClass // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ee5b70
	bool AreAnyListenersWithinRange(struct UObject* WorldContextObject, struct FVector Location, float MaximumRange); // Function Engine.GameplayStatics.AreAnyListenersWithinRange // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x2ee58a0
	bool ApplyRadialDamageWithFalloff(struct UObject* WorldContextObject, float BaseDamage, float MinimumDamage, struct FVector Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, struct UClass* DamageTypeClass, struct TArray<struct AActor*> IgnoreActors, struct AActor* DamageCauser, struct AController* InstigatedByController, char DamagePreventionChannel); // Function Engine.GameplayStatics.ApplyRadialDamageWithFalloff // Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ee52c0
	bool ApplyRadialDamage(struct UObject* WorldContextObject, float BaseDamage, struct FVector Origin, float DamageRadius, struct UClass* DamageTypeClass, struct TArray<struct AActor*> IgnoreActors, struct AActor* DamageCauser, struct AController* InstigatedByController, bool bDoFullDamage, char DamagePreventionChannel); // Function Engine.GameplayStatics.ApplyRadialDamage // Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ee4fc0
	void ApplyPointDamage(struct AActor* DamagedActor, float BaseDamage, struct FVector HitFromDirection, struct FHitResult HitInfo, struct AController* EventInstigator, struct AActor* DamageCauser, struct UClass* DamageTypeClass); // Function Engine.GameplayStatics.ApplyPointDamage // Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ee4d80
	void ApplyDamage(struct AActor* DamagedActor, float BaseDamage, struct AController* EventInstigator, struct AActor* DamageCauser, struct UClass* DamageTypeClass); // Function Engine.GameplayStatics.ApplyDamage // Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable // @ game+0x2ee4c00
	void ActivateReverbEffect(struct UObject* WorldContextObject, struct UReverbEffect* ReverbEffect, struct FName TagName, float Priority, float Volume, float FadeTime); // Function Engine.GameplayStatics.ActivateReverbEffect // Final|Native|Static|Public|BlueprintCallable // @ game+0x2ee3c50
};

// Class Engine.GPUSortDestData
// Size: 0x30 (Inherited: 0x28)
struct UGPUSortDestData : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class Engine.GPUSortTestLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGPUSortTestLibrary : UBlueprintFunctionLibrary {

	bool ValidateGPUTransposeForSize(struct UObject* WorldContext, struct UGPUSortDestData* TestData); // Function Engine.GPUSortTestLibrary.ValidateGPUTransposeForSize // Final|Native|Static|Public|BlueprintCallable // @ game+0x3025c30
	bool ValidateGPUSortForSize(struct UObject* WorldContext, struct UGPUSortDestData* TestData); // Function Engine.GPUSortTestLibrary.ValidateGPUSortForSize // Final|Native|Static|Public|BlueprintCallable // @ game+0x3025b70
	struct UGPUSortDestData* TestGPUTransposeForSize(struct UObject* WorldContext, int32_t Size); // Function Engine.GPUSortTestLibrary.TestGPUTransposeForSize // Final|Native|Static|Public|BlueprintCallable // @ game+0x30241b0
	struct UGPUSortDestData* TestGPUSortForSize(struct UObject* WorldContext, int32_t Size); // Function Engine.GPUSortTestLibrary.TestGPUSortForSize // Final|Native|Static|Public|BlueprintCallable // @ game+0x30240f0
};

// Class Engine.KismetArrayLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetArrayLibrary : UBlueprintFunctionLibrary {

	void SetArrayPropertyByName(struct UObject* Object, struct FName PropertyName, struct TArray<int32_t> Value); // Function Engine.KismetArrayLibrary.SetArrayPropertyByName // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x301e730
	void FilterArray(struct TArray<struct AActor*> TargetArray, struct UClass* FilterClass, struct TArray<struct AActor*> FilteredArray); // Function Engine.KismetArrayLibrary.FilterArray // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3006600
	void Array_Shuffle(struct TArray<int32_t> TargetArray); // Function Engine.KismetArrayLibrary.Array_Shuffle // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x2ff5420
	void Array_Set(struct TArray<int32_t> TargetArray, int32_t Index, int32_t Item, bool bSizeToFit); // Function Engine.KismetArrayLibrary.Array_Set // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x2ff51c0
	void Array_Resize(struct TArray<int32_t> TargetArray, int32_t Size); // Function Engine.KismetArrayLibrary.Array_Resize // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x2ff50a0
	bool Array_RemoveItem(struct TArray<int32_t> TargetArray, int32_t Item); // Function Engine.KismetArrayLibrary.Array_RemoveItem // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x2ff4ec0
	void Array_Remove(struct TArray<int32_t> TargetArray, int32_t IndexToRemove); // Function Engine.KismetArrayLibrary.Array_Remove // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x2ff4da0
	int32_t Array_Length(struct TArray<int32_t> TargetArray); // Function Engine.KismetArrayLibrary.Array_Length // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x2ff4cb0
	int32_t Array_LastIndex(struct TArray<int32_t> TargetArray); // Function Engine.KismetArrayLibrary.Array_LastIndex // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x2ff4bc0
	void Array_Insert(struct TArray<int32_t> TargetArray, int32_t NewItem, int32_t Index); // Function Engine.KismetArrayLibrary.Array_Insert // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x2ff49a0
	void Array_Get(struct TArray<int32_t> TargetArray, int32_t Index, int32_t Item); // Function Engine.KismetArrayLibrary.Array_Get // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x2ff4790
	int32_t Array_Find(struct TArray<int32_t> TargetArray, int32_t ItemToFind); // Function Engine.KismetArrayLibrary.Array_Find // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x2ff45b0
	bool Array_Contains(struct TArray<int32_t> TargetArray, int32_t ItemToFind); // Function Engine.KismetArrayLibrary.Array_Contains // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x2ff43c0
	void Array_Clear(struct TArray<int32_t> TargetArray); // Function Engine.KismetArrayLibrary.Array_Clear // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x2ff42e0
	void Array_Append(struct TArray<int32_t> TargetArray, struct TArray<int32_t> SourceArray); // Function Engine.KismetArrayLibrary.Array_Append // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x2ff4160
	int32_t Array_AddUnique(struct TArray<int32_t> TargetArray, int32_t NewItem); // Function Engine.KismetArrayLibrary.Array_AddUnique // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x2ff3f80
	int32_t Array_Add(struct TArray<int32_t> TargetArray, int32_t NewItem); // Function Engine.KismetArrayLibrary.Array_Add // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x2ff3da0
};

// Class Engine.KismetGuidLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetGuidLibrary : UBlueprintFunctionLibrary {

	void Parse_StringToGuid(struct FString GuidString, struct FGuid OutGuid, bool Success); // Function Engine.KismetGuidLibrary.Parse_StringToGuid // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3019340
	bool NotEqual_GuidGuid(struct FGuid A, struct FGuid B); // Function Engine.KismetGuidLibrary.NotEqual_GuidGuid // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3018520
	struct FGuid NewGuid(); // Function Engine.KismetGuidLibrary.NewGuid // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3017d80
	bool IsValid_Guid(struct FGuid InGuid); // Function Engine.KismetGuidLibrary.IsValid_Guid // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x300ca50
	void Invalidate_Guid(struct FGuid InGuid); // Function Engine.KismetGuidLibrary.Invalidate_Guid // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x300bd40
	bool EqualEqual_GuidGuid(struct FGuid A, struct FGuid B); // Function Engine.KismetGuidLibrary.EqualEqual_GuidGuid // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3004de0
	struct FString Conv_GuidToString(struct FGuid InGuid); // Function Engine.KismetGuidLibrary.Conv_GuidToString // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2fff2a0
};

// Class Engine.KismetInputLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetInputLibrary : UBlueprintFunctionLibrary {

	bool PointerEvent_IsTouchEvent(struct FPointerEvent Input); // Function Engine.KismetInputLibrary.PointerEvent_IsTouchEvent // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x301a270
	bool PointerEvent_IsMouseButtonDown(struct FPointerEvent Input, struct FKey MouseButton); // Function Engine.KismetInputLibrary.PointerEvent_IsMouseButtonDown // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x301a0c0
	float PointerEvent_GetWheelDelta(struct FPointerEvent Input); // Function Engine.KismetInputLibrary.PointerEvent_GetWheelDelta // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3019fb0
	int32_t PointerEvent_GetUserIndex(struct FPointerEvent Input); // Function Engine.KismetInputLibrary.PointerEvent_GetUserIndex // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3019ea0
	int32_t PointerEvent_GetTouchpadIndex(struct FPointerEvent Input); // Function Engine.KismetInputLibrary.PointerEvent_GetTouchpadIndex // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3019d90
	struct FVector2D PointerEvent_GetScreenSpacePosition(struct FPointerEvent Input); // Function Engine.KismetInputLibrary.PointerEvent_GetScreenSpacePosition // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3019c80
	int32_t PointerEvent_GetPointerIndex(struct FPointerEvent Input); // Function Engine.KismetInputLibrary.PointerEvent_GetPointerIndex // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3019b70
	struct FVector2D PointerEvent_GetLastScreenSpacePosition(struct FPointerEvent Input); // Function Engine.KismetInputLibrary.PointerEvent_GetLastScreenSpacePosition // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3019a60
	struct FVector2D PointerEvent_GetGestureDelta(struct FPointerEvent Input); // Function Engine.KismetInputLibrary.PointerEvent_GetGestureDelta // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3019950
	struct FKey PointerEvent_GetEffectingButton(struct FPointerEvent Input); // Function Engine.KismetInputLibrary.PointerEvent_GetEffectingButton // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3019800
	struct FVector2D PointerEvent_GetCursorDelta(struct FPointerEvent Input); // Function Engine.KismetInputLibrary.PointerEvent_GetCursorDelta // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30196f0
	bool Key_IsVectorAxis(struct FKey Key); // Function Engine.KismetInputLibrary.Key_IsVectorAxis // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x30102a0
	bool Key_IsMouseButton(struct FKey Key); // Function Engine.KismetInputLibrary.Key_IsMouseButton // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x30101f0
	bool Key_IsModifierKey(struct FKey Key); // Function Engine.KismetInputLibrary.Key_IsModifierKey // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3010140
	bool Key_IsKeyboardKey(struct FKey Key); // Function Engine.KismetInputLibrary.Key_IsKeyboardKey // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3010090
	bool Key_IsGamepadKey(struct FKey Key); // Function Engine.KismetInputLibrary.Key_IsGamepadKey // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x300ffe0
	bool Key_IsFloatAxis(struct FKey Key); // Function Engine.KismetInputLibrary.Key_IsFloatAxis // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x300ff30
	struct FText Key_GetDisplayName(struct FKey Key); // Function Engine.KismetInputLibrary.Key_GetDisplayName // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x300fe60
	bool InputEvent_IsShiftDown(struct FInputEvent Input); // Function Engine.KismetInputLibrary.InputEvent_IsShiftDown // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x300bc80
	bool InputEvent_IsRightShiftDown(struct FInputEvent Input); // Function Engine.KismetInputLibrary.InputEvent_IsRightShiftDown // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x300bbc0
	bool InputEvent_IsRightControlDown(struct FInputEvent Input); // Function Engine.KismetInputLibrary.InputEvent_IsRightControlDown // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x300bb00
	bool InputEvent_IsRightCommandDown(struct FInputEvent Input); // Function Engine.KismetInputLibrary.InputEvent_IsRightCommandDown // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x300ba40
	bool InputEvent_IsRightAltDown(struct FInputEvent Input); // Function Engine.KismetInputLibrary.InputEvent_IsRightAltDown // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x300b980
	bool InputEvent_IsRepeat(struct FInputEvent Input); // Function Engine.KismetInputLibrary.InputEvent_IsRepeat // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x300b8c0
	bool InputEvent_IsLeftShiftDown(struct FInputEvent Input); // Function Engine.KismetInputLibrary.InputEvent_IsLeftShiftDown // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x300b800
	bool InputEvent_IsLeftControlDown(struct FInputEvent Input); // Function Engine.KismetInputLibrary.InputEvent_IsLeftControlDown // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x300b740
	bool InputEvent_IsLeftCommandDown(struct FInputEvent Input); // Function Engine.KismetInputLibrary.InputEvent_IsLeftCommandDown // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x300b680
	bool InputEvent_IsLeftAltDown(struct FInputEvent Input); // Function Engine.KismetInputLibrary.InputEvent_IsLeftAltDown // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x300b5c0
	bool InputEvent_IsControlDown(struct FInputEvent Input); // Function Engine.KismetInputLibrary.InputEvent_IsControlDown // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x300b500
	bool InputEvent_IsCommandDown(struct FInputEvent Input); // Function Engine.KismetInputLibrary.InputEvent_IsCommandDown // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x300b440
	bool InputEvent_IsAltDown(struct FInputEvent Input); // Function Engine.KismetInputLibrary.InputEvent_IsAltDown // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x300b380
	int32_t GetUserIndex(struct FKeyEvent Input); // Function Engine.KismetInputLibrary.GetUserIndex // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3009d70
	struct FKey GetKey(struct FKeyEvent Input); // Function Engine.KismetInputLibrary.GetKey // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3008830
	float GetAnalogValue(struct FAnalogInputEvent Input); // Function Engine.KismetInputLibrary.GetAnalogValue // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3007640
	bool EqualEqual_KeyKey(struct FKey A, struct FKey B); // Function Engine.KismetInputLibrary.EqualEqual_KeyKey // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30050c0
	int32_t ControllerEvent_GetUserIndex(struct FControllerEvent Input); // Function Engine.KismetInputLibrary.ControllerEvent_GetUserIndex // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x2ffe490
	struct FKey ControllerEvent_GetEffectingButton(struct FControllerEvent Input); // Function Engine.KismetInputLibrary.ControllerEvent_GetEffectingButton // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x2ffe310
	float ControllerEvent_GetAnalogValue(struct FControllerEvent Input); // Function Engine.KismetInputLibrary.ControllerEvent_GetAnalogValue // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x2ffe1e0
	void CalibrateTilt(); // Function Engine.KismetInputLibrary.CalibrateTilt // Final|Native|Static|Public|BlueprintCallable // @ game+0x2ffa4d0
};

// Class Engine.KismetMaterialLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetMaterialLibrary : UBlueprintFunctionLibrary {

	void SetVectorParameterValue(struct UObject* WorldContextObject, struct UMaterialParameterCollection* Collection, struct FName ParameterName, struct FLinearColor ParameterValue); // Function Engine.KismetMaterialLibrary.SetVectorParameterValue // Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x301fd50
	void SetScalarParameterValue(struct UObject* WorldContextObject, struct UMaterialParameterCollection* Collection, struct FName ParameterName, float ParameterValue); // Function Engine.KismetMaterialLibrary.SetScalarParameterValue // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x301f660
	struct FLinearColor GetVectorParameterValue(struct UObject* WorldContextObject, struct UMaterialParameterCollection* Collection, struct FName ParameterName); // Function Engine.KismetMaterialLibrary.GetVectorParameterValue // Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x3009fe0
	float GetScalarParameterValue(struct UObject* WorldContextObject, struct UMaterialParameterCollection* Collection, struct FName ParameterName); // Function Engine.KismetMaterialLibrary.GetScalarParameterValue // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x30093b0
	struct UMaterialInstanceDynamic* CreateDynamicMaterialInstance(struct UObject* WorldContextObject, struct UMaterialInterface* Parent); // Function Engine.KismetMaterialLibrary.CreateDynamicMaterialInstance // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x30009a0
};

// Class Engine.KismetMathLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetMathLibrary : UBlueprintFunctionLibrary {

	int32_t Xor_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.Xor_IntInt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30261e0
	float VSizeSquared(struct FVector A); // Function Engine.KismetMathLibrary.VSizeSquared // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3025ae0
	float VSize2DSquared(struct FVector2D A); // Function Engine.KismetMathLibrary.VSize2DSquared // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30259d0
	float VSize2D(struct FVector2D A); // Function Engine.KismetMathLibrary.VSize2D // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3025950
	float VSize(struct FVector A); // Function Engine.KismetMathLibrary.VSize // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3025a50
	struct FVector VLerp(struct FVector A, struct FVector B, float Alpha); // Function Engine.KismetMathLibrary.VLerp // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3025810
	struct FVector VInterpTo_Constant(struct FVector Current, struct FVector Target, float DeltaTime, float InterpSpeed); // Function Engine.KismetMathLibrary.VInterpTo_Constant // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3025670
	struct FVector VInterpTo(struct FVector Current, struct FVector Target, float DeltaTime, float InterpSpeed); // Function Engine.KismetMathLibrary.VInterpTo // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30254d0
	struct FVector2D Vector2DInterpTo_Constant(struct FVector2D Current, struct FVector2D Target, float DeltaTime, float InterpSpeed); // Function Engine.KismetMathLibrary.Vector2DInterpTo_Constant // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3025e40
	struct FVector2D Vector2DInterpTo(struct FVector2D Current, struct FVector2D Target, float DeltaTime, float InterpSpeed); // Function Engine.KismetMathLibrary.Vector2DInterpTo // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3025cf0
	struct FVector VEase(struct FVector A, struct FVector B, float Alpha, char EasingFunc, float BlendExp, int32_t Steps); // Function Engine.KismetMathLibrary.VEase // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30252d0
	struct FDateTime UtcNow(); // Function Engine.KismetMathLibrary.UtcNow // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3025290
	struct FVector TransformLocation(struct FTransform T, struct FVector Location); // Function Engine.KismetMathLibrary.TransformLocation // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3024e10
	struct FVector TransformDirection(struct FTransform T, struct FVector Direction); // Function Engine.KismetMathLibrary.TransformDirection // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3024cd0
	struct FDateTime Today(); // Function Engine.KismetMathLibrary.Today // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3024c50
	struct FTransform TLerp(struct FTransform A, struct FTransform B, float Alpha); // Function Engine.KismetMathLibrary.TLerp // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3023e50
	struct FTransform TInterpTo(struct FTransform Current, struct FTransform Target, float DeltaTime, float InterpSpeed); // Function Engine.KismetMathLibrary.TInterpTo // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3023c30
	struct FTimespan TimespanZeroValue(); // Function Engine.KismetMathLibrary.TimespanZeroValue // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3024a30
	float TimespanRatio(struct FTimespan A, struct FTimespan B); // Function Engine.KismetMathLibrary.TimespanRatio // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3024970
	struct FTimespan TimespanMinValue(); // Function Engine.KismetMathLibrary.TimespanMinValue // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3024930
	struct FTimespan TimespanMaxValue(); // Function Engine.KismetMathLibrary.TimespanMaxValue // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30248f0
	bool TimespanFromString(struct FString TimespanString, struct FTimespan Result); // Function Engine.KismetMathLibrary.TimespanFromString // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30247f0
	struct FTransform TEase(struct FTransform A, struct FTransform B, float Alpha, char EasingFunc, float BlendExp, int32_t Steps); // Function Engine.KismetMathLibrary.TEase // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30239a0
	float Tan(float A); // Function Engine.KismetMathLibrary.Tan // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3024030
	struct FVector Subtract_VectorVector(struct FVector A, struct FVector B); // Function Engine.KismetMathLibrary.Subtract_VectorVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3023800
	struct FVector Subtract_VectorInt(struct FVector A, int32_t B); // Function Engine.KismetMathLibrary.Subtract_VectorInt // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3023720
	struct FVector Subtract_VectorFloat(struct FVector A, float B); // Function Engine.KismetMathLibrary.Subtract_VectorFloat // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3023640
	struct FVector2D Subtract_Vector2DVector2D(struct FVector2D A, struct FVector2D B); // Function Engine.KismetMathLibrary.Subtract_Vector2DVector2D // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3023580
	struct FVector2D Subtract_Vector2DFloat(struct FVector2D A, float B); // Function Engine.KismetMathLibrary.Subtract_Vector2DFloat // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30234c0
	struct FTimespan Subtract_TimespanTimespan(struct FTimespan A, struct FTimespan B); // Function Engine.KismetMathLibrary.Subtract_TimespanTimespan // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3023400
	int32_t Subtract_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.Subtract_IntInt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3023340
	float Subtract_FloatFloat(float A, float B); // Function Engine.KismetMathLibrary.Subtract_FloatFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3023280
	struct FDateTime Subtract_DateTimeTimespan(struct FDateTime A, struct FTimespan B); // Function Engine.KismetMathLibrary.Subtract_DateTimeTimespan // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30231c0
	struct FTimespan Subtract_DateTimeDateTime(struct FDateTime A, struct FDateTime B); // Function Engine.KismetMathLibrary.Subtract_DateTimeDateTime // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3023100
	char Subtract_ByteByte(char A, char B); // Function Engine.KismetMathLibrary.Subtract_ByteByte // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3023040
	float Square(float A); // Function Engine.KismetMathLibrary.Square // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3022cb0
	float Sqrt(float A); // Function Engine.KismetMathLibrary.Sqrt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3022c30
	float Sin(float A); // Function Engine.KismetMathLibrary.Sin // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3020380
	int32_t SignOfInteger(int32_t A); // Function Engine.KismetMathLibrary.SignOfInteger // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3020300
	float SignOfFloat(float A); // Function Engine.KismetMathLibrary.SignOfFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3020280
	void SetRandomStreamSeed(struct FRandomStream Stream, int32_t NewSeed); // Function Engine.KismetMathLibrary.SetRandomStreamSeed // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x301f490
	struct FVector SelectVector(struct FVector A, struct FVector B, bool bPickA); // Function Engine.KismetMathLibrary.SelectVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x301e5a0
	struct FTransform SelectTransform(struct FTransform A, struct FTransform B, bool bPickA); // Function Engine.KismetMathLibrary.SelectTransform // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x301e3d0
	struct FString SelectString(struct FString A, struct FString B, bool bPickA); // Function Engine.KismetMathLibrary.SelectString // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x301e240
	struct FRotator SelectRotator(struct FRotator A, struct FRotator B, bool bPickA); // Function Engine.KismetMathLibrary.SelectRotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x301e100
	struct UObject* SelectObject(struct UObject* A, struct UObject* B, bool bSelectA); // Function Engine.KismetMathLibrary.SelectObject // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x301e000
	int32_t SelectInt(int32_t A, int32_t B, bool bPickA); // Function Engine.KismetMathLibrary.SelectInt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x301df10
	float SelectFloat(float A, float B, bool bPickA); // Function Engine.KismetMathLibrary.SelectFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x301de10
	struct FLinearColor SelectColor(struct FLinearColor A, struct FLinearColor B, bool bPickA); // Function Engine.KismetMathLibrary.SelectColor // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x301dce0
	struct UClass* SelectClass(struct UClass* A, struct UClass* B, bool bSelectA); // Function Engine.KismetMathLibrary.SelectClass // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x301dbe0
	void SeedRandomStream(struct FRandomStream Stream); // Function Engine.KismetMathLibrary.SeedRandomStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x301db60
	int32_t Round(float A); // Function Engine.KismetMathLibrary.Round // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x301dae0
	struct FRotator RotatorFromAxisAndAngle(struct FVector Axis, float Angle); // Function Engine.KismetMathLibrary.RotatorFromAxisAndAngle // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x301da00
	struct FVector RotateAngleAxis(struct FVector InVect, float AngleDeg, struct FVector Axis); // Function Engine.KismetMathLibrary.RotateAngleAxis // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x301d8c0
	struct FRotator RLerp(struct FRotator A, struct FRotator B, float Alpha, bool bShortestPath); // Function Engine.KismetMathLibrary.RLerp // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x301b550
	struct FRotator RInterpTo_Constant(struct FRotator Current, struct FRotator Target, float DeltaTime, float InterpSpeed); // Function Engine.KismetMathLibrary.RInterpTo_Constant // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x301b3b0
	struct FRotator RInterpTo(struct FRotator Current, struct FRotator Target, float DeltaTime, float InterpSpeed); // Function Engine.KismetMathLibrary.RInterpTo // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x301b210
	void RGBToHSV_Vector(struct FLinearColor RGB, struct FLinearColor HSV); // Function Engine.KismetMathLibrary.RGBToHSV_Vector // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x301b150
	void RGBToHSV(struct FLinearColor InColor, float H, float S, float V, float A); // Function Engine.KismetMathLibrary.RGBToHSV // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x301af60
	void ResetRandomStream(struct FRandomStream Stream); // Function Engine.KismetMathLibrary.ResetRandomStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x301c780
	struct FRotator REase(struct FRotator A, struct FRotator B, float Alpha, bool bShortestPath, char EasingFunc, float BlendExp, int32_t Steps); // Function Engine.KismetMathLibrary.REase // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x301ad30
	struct FVector RandomUnitVectorInConeWithYawAndPitch(struct FVector ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees); // Function Engine.KismetMathLibrary.RandomUnitVectorInConeWithYawAndPitch // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x301c210
	struct FVector RandomUnitVectorInCone(struct FVector ConeDir, float ConeHalfAngle); // Function Engine.KismetMathLibrary.RandomUnitVectorInCone // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x301c130
	struct FVector RandomUnitVectorFromStream(struct FRandomStream Stream); // Function Engine.KismetMathLibrary.RandomUnitVectorFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x301c090
	struct FVector RandomUnitVector(); // Function Engine.KismetMathLibrary.RandomUnitVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x301c050
	struct FRotator RandomRotatorFromStream(bool bRoll, struct FRandomStream Stream); // Function Engine.KismetMathLibrary.RandomRotatorFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x301bf70
	struct FRotator RandomRotator(bool bRoll); // Function Engine.KismetMathLibrary.RandomRotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x301bed0
	struct FVector RandomPointInBoundingBox(struct FVector Origin, struct FVector BoxExtent); // Function Engine.KismetMathLibrary.RandomPointInBoundingBox // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x301bdd0
	int32_t RandomIntegerInRangeFromStream(int32_t Min, int32_t Max, struct FRandomStream Stream); // Function Engine.KismetMathLibrary.RandomIntegerInRangeFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x301bcd0
	int32_t RandomIntegerInRange(int32_t Min, int32_t Max); // Function Engine.KismetMathLibrary.RandomIntegerInRange // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x301bc10
	int32_t RandomIntegerFromStream(int32_t Max, struct FRandomStream Stream); // Function Engine.KismetMathLibrary.RandomIntegerFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x301bb40
	int32_t RandomInteger(int32_t Max); // Function Engine.KismetMathLibrary.RandomInteger // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x301bac0
	float RandomFloatInRangeFromStream(float Min, float Max, struct FRandomStream Stream); // Function Engine.KismetMathLibrary.RandomFloatInRangeFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x301b9b0
	float RandomFloatInRange(float Min, float Max); // Function Engine.KismetMathLibrary.RandomFloatInRange // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x301b8f0
	float RandomFloatFromStream(struct FRandomStream Stream); // Function Engine.KismetMathLibrary.RandomFloatFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x301b860
	float RandomFloat(); // Function Engine.KismetMathLibrary.RandomFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x301b830
	bool RandomBoolFromStream(struct FRandomStream Stream); // Function Engine.KismetMathLibrary.RandomBoolFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x301b7a0
	bool RandomBool(); // Function Engine.KismetMathLibrary.RandomBool // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x301b770
	float RadiansToDegrees(float A); // Function Engine.KismetMathLibrary.RadiansToDegrees // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x301b6f0
	struct FVector ProjectVectorOnToVector(struct FVector V, struct FVector Target); // Function Engine.KismetMathLibrary.ProjectVectorOnToVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x301ab40
	struct FVector ProjectVectorOnToPlane(struct FVector V, struct FVector PlaneNormal); // Function Engine.KismetMathLibrary.ProjectVectorOnToPlane // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x301aa50
	struct FVector ProjectPointOnToPlane(struct FVector Point, struct FVector PlaneBase, struct FVector PlaneNormal); // Function Engine.KismetMathLibrary.ProjectPointOnToPlane // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x301a910
	bool PointsAreCoplanar(struct TArray<struct FVector> Points, float Tolerance); // Function Engine.KismetMathLibrary.PointsAreCoplanar // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x301a380
	int32_t Percent_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.Percent_IntInt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3019610
	float Percent_FloatFloat(float A, float B); // Function Engine.KismetMathLibrary.Percent_FloatFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3019550
	char Percent_ByteByte(char A, char B); // Function Engine.KismetMathLibrary.Percent_ByteByte // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3019490
	int32_t Or_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.Or_IntInt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30190f0
	struct FDateTime Now(); // Function Engine.KismetMathLibrary.Now // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3019020
	bool NotEqual_VectorVector(struct FVector A, struct FVector B, float ErrorTolerance); // Function Engine.KismetMathLibrary.NotEqual_VectorVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3018e80
	bool NotEqual_TimespanTimespan(struct FTimespan A, struct FTimespan B); // Function Engine.KismetMathLibrary.NotEqual_TimespanTimespan // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3018dc0
	bool NotEqual_RotatorRotator(struct FRotator A, struct FRotator B, float ErrorTolerance); // Function Engine.KismetMathLibrary.NotEqual_RotatorRotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3018980
	bool NotEqual_ObjectObject(struct UObject* A, struct UObject* B); // Function Engine.KismetMathLibrary.NotEqual_ObjectObject // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30188c0
	bool NotEqual_NameName(struct FName A, struct FName B); // Function Engine.KismetMathLibrary.NotEqual_NameName // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3018800
	bool NotEqual_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.NotEqual_IntInt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3018740
	bool NotEqual_FloatFloat(float A, float B); // Function Engine.KismetMathLibrary.NotEqual_FloatFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3018460
	bool NotEqual_DateTimeDateTime(struct FDateTime A, struct FDateTime B); // Function Engine.KismetMathLibrary.NotEqual_DateTimeDateTime // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30183b0
	bool NotEqual_ClassClass(struct UClass* A, struct UClass* B); // Function Engine.KismetMathLibrary.NotEqual_ClassClass // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30182f0
	bool NotEqual_ByteByte(char A, char B); // Function Engine.KismetMathLibrary.NotEqual_ByteByte // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3018230
	bool NotEqual_BoolBool(bool A, bool B); // Function Engine.KismetMathLibrary.NotEqual_BoolBool // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3018160
	bool Not_PreBool(bool A); // Function Engine.KismetMathLibrary.Not_PreBool // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3018fa0
	float NormalizeToRange(float Value, float RangeMin, float RangeMax); // Function Engine.KismetMathLibrary.NormalizeToRange // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3017f60
	struct FRotator NormalizedDeltaRotator(struct FRotator A, struct FRotator B); // Function Engine.KismetMathLibrary.NormalizedDeltaRotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3018070
	float NormalizeAxis(float Angle); // Function Engine.KismetMathLibrary.NormalizeAxis // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3017ee0
	struct FVector2D Normal2D(struct FVector2D A); // Function Engine.KismetMathLibrary.Normal2D // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3017dc0
	struct FVector Normal(struct FVector A); // Function Engine.KismetMathLibrary.Normal // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3017e40
	struct FVector NegateVector(struct FVector A); // Function Engine.KismetMathLibrary.NegateVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3017ce0
	struct FRotator NegateRotator(struct FRotator A); // Function Engine.KismetMathLibrary.NegateRotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3017c40
	bool NearlyEqual_TransformTransform(struct FTransform A, struct FTransform B, float LocationTolerance, float RotationTolerance, float Scale3DTolerance); // Function Engine.KismetMathLibrary.NearlyEqual_TransformTransform // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3017a20
	bool NearlyEqual_FloatFloat(float A, float B, float ErrorTolerance); // Function Engine.KismetMathLibrary.NearlyEqual_FloatFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3017910
	float MultiplyMultiply_FloatFloat(float Base, float Exp); // Function Engine.KismetMathLibrary.MultiplyMultiply_FloatFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3016db0
	float MultiplyByPi(float Value); // Function Engine.KismetMathLibrary.MultiplyByPi // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3016d30
	struct FVector Multiply_VectorVector(struct FVector A, struct FVector B); // Function Engine.KismetMathLibrary.Multiply_VectorVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3017820
	struct FVector Multiply_VectorInt(struct FVector A, int32_t B); // Function Engine.KismetMathLibrary.Multiply_VectorInt // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3017740
	struct FVector Multiply_VectorFloat(struct FVector A, float B); // Function Engine.KismetMathLibrary.Multiply_VectorFloat // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3017660
	struct FVector2D Multiply_Vector2DFloat(struct FVector2D A, float B); // Function Engine.KismetMathLibrary.Multiply_Vector2DFloat // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30175a0
	struct FTimespan Multiply_TimespanFloat(struct FTimespan A, float Scalar); // Function Engine.KismetMathLibrary.Multiply_TimespanFloat // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30174e0
	struct FRotator Multiply_RotatorInt(struct FRotator A, int32_t B); // Function Engine.KismetMathLibrary.Multiply_RotatorInt // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3017400
	struct FRotator Multiply_RotatorFloat(struct FRotator A, float B); // Function Engine.KismetMathLibrary.Multiply_RotatorFloat // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3017320
	struct FLinearColor Multiply_LinearColorLinearColor(struct FLinearColor A, struct FLinearColor B); // Function Engine.KismetMathLibrary.Multiply_LinearColorLinearColor // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3017250
	struct FLinearColor Multiply_LinearColorFloat(struct FLinearColor A, float B); // Function Engine.KismetMathLibrary.Multiply_LinearColorFloat // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3017180
	int32_t Multiply_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.Multiply_IntInt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30170c0
	float Multiply_IntFloat(int32_t A, float B); // Function Engine.KismetMathLibrary.Multiply_IntFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3016ff0
	float Multiply_FloatFloat(float A, float B); // Function Engine.KismetMathLibrary.Multiply_FloatFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3016f30
	char Multiply_ByteByte(char A, char B); // Function Engine.KismetMathLibrary.Multiply_ByteByte // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3016e70
	struct FVector MirrorVectorByNormal(struct FVector InVect, struct FVector InNormal); // Function Engine.KismetMathLibrary.MirrorVectorByNormal // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30169b0
	void MinOfIntArray(struct TArray<int32_t> IntArray, int32_t IndexOfMinValue, int32_t MinValue); // Function Engine.KismetMathLibrary.MinOfIntArray // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3016590
	void MinOfFloatArray(struct TArray<float> FloatArray, int32_t IndexOfMinValue, float MinValue); // Function Engine.KismetMathLibrary.MinOfFloatArray // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3016440
	void MinOfByteArray(struct TArray<char> ByteArray, int32_t IndexOfMinValue, char MinValue); // Function Engine.KismetMathLibrary.MinOfByteArray // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x30162f0
	void MinimumAreaRectangle(struct UObject* WorldContextObject, struct TArray<struct FVector> InVerts, struct FVector SampleSurfaceNormal, struct FVector OutRectCenter, struct FRotator OutRectRotation, float OutSideLengthX, float OutSideLengthY, bool bDebugDraw); // Function Engine.KismetMathLibrary.MinimumAreaRectangle // Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x30166e0
	int32_t Min(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.Min // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3016230
	void MaxOfIntArray(struct TArray<int32_t> IntArray, int32_t IndexOfMaxValue, int32_t MaxValue); // Function Engine.KismetMathLibrary.MaxOfIntArray // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3015cf0
	void MaxOfFloatArray(struct TArray<float> FloatArray, int32_t IndexOfMaxValue, float MaxValue); // Function Engine.KismetMathLibrary.MaxOfFloatArray // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3015ba0
	void MaxOfByteArray(struct TArray<char> ByteArray, int32_t IndexOfMaxValue, char MaxValue); // Function Engine.KismetMathLibrary.MaxOfByteArray // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3015a50
	int32_t Max(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.Max // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3015990
	float MapRangeUnclamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB); // Function Engine.KismetMathLibrary.MapRangeUnclamped // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3015420
	float MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB); // Function Engine.KismetMathLibrary.MapRangeClamped // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3015280
	struct FVector2D MakeVector2D(float X, float Y); // Function Engine.KismetMathLibrary.MakeVector2D // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3015090
	struct FVector MakeVector(float X, float Y, float Z); // Function Engine.KismetMathLibrary.MakeVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3015160
	struct FTransform MakeTransform(struct FVector Location, struct FRotator Rotation, struct FVector Scale); // Function Engine.KismetMathLibrary.MakeTransform // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3014f20
	struct FTimespan MakeTimespan(int32_t Days, int32_t Hours, int32_t Minutes, int32_t Seconds, int32_t Milliseconds); // Function Engine.KismetMathLibrary.MakeTimespan // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3014da0
	struct FRotator MakeRotFromZY(struct FVector Z, struct FVector Y); // Function Engine.KismetMathLibrary.MakeRotFromZY // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3014a40
	struct FRotator MakeRotFromZX(struct FVector Z, struct FVector X); // Function Engine.KismetMathLibrary.MakeRotFromZX // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3014940
	struct FRotator MakeRotFromZ(struct FVector Z); // Function Engine.KismetMathLibrary.MakeRotFromZ // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30148a0
	struct FRotator MakeRotFromYZ(struct FVector Y, struct FVector Z); // Function Engine.KismetMathLibrary.MakeRotFromYZ // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30147a0
	struct FRotator MakeRotFromYX(struct FVector Y, struct FVector X); // Function Engine.KismetMathLibrary.MakeRotFromYX // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30146a0
	struct FRotator MakeRotFromY(struct FVector Y); // Function Engine.KismetMathLibrary.MakeRotFromY // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3014600
	struct FRotator MakeRotFromXZ(struct FVector X, struct FVector Z); // Function Engine.KismetMathLibrary.MakeRotFromXZ // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3014500
	struct FRotator MakeRotFromXY(struct FVector X, struct FVector Y); // Function Engine.KismetMathLibrary.MakeRotFromXY // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3014400
	struct FRotator MakeRotFromX(struct FVector X); // Function Engine.KismetMathLibrary.MakeRotFromX // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3014360
	struct FRotator MakeRotator(float Roll, float Pitch, float Yaw); // Function Engine.KismetMathLibrary.MakeRotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3014c80
	struct FRotator MakeRotationFromAxes(struct FVector Forward, struct FVector Right, struct FVector Up); // Function Engine.KismetMathLibrary.MakeRotationFromAxes // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3014b40
	struct FRandomStream MakeRandomStream(int32_t InitialSeed); // Function Engine.KismetMathLibrary.MakeRandomStream // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30142d0
	float MakePulsatingValue(float InCurrentTime, float InPulsesPerSecond, float InPhase); // Function Engine.KismetMathLibrary.MakePulsatingValue // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30141c0
	struct FDateTime MakeDateTime(int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t Second, int32_t Millisecond); // Function Engine.KismetMathLibrary.MakeDateTime // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3013b80
	struct FLinearColor MakeColor(float R, float G, float B, float A); // Function Engine.KismetMathLibrary.MakeColor // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3013a20
	float Loge(float A); // Function Engine.KismetMathLibrary.Loge // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30139a0
	bool LinePlaneIntersection_OriginNormal(struct FVector LineStart, struct FVector LineEnd, struct FVector PlaneOrigin, struct FVector PlaneNormal, float T, struct FVector Intersection); // Function Engine.KismetMathLibrary.LinePlaneIntersection_OriginNormal // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3011360
	bool LinePlaneIntersection(struct FVector LineStart, struct FVector LineEnd, struct FPlane APlane, float T, struct FVector Intersection); // Function Engine.KismetMathLibrary.LinePlaneIntersection // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3011170
	struct FLinearColor LinearColorLerpUsingHSV(struct FLinearColor A, struct FLinearColor B, float Alpha); // Function Engine.KismetMathLibrary.LinearColorLerpUsingHSV // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3013000
	struct FLinearColor LinearColorLerp(struct FLinearColor A, struct FLinearColor B, float Alpha); // Function Engine.KismetMathLibrary.LinearColorLerp // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3012ee0
	struct FVector LessLess_VectorRotator(struct FVector A, struct FRotator B); // Function Engine.KismetMathLibrary.LessLess_VectorRotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3010cd0
	bool LessEqual_TimespanTimespan(struct FTimespan A, struct FTimespan B); // Function Engine.KismetMathLibrary.LessEqual_TimespanTimespan // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3010c10
	bool LessEqual_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.LessEqual_IntInt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3010b50
	bool LessEqual_FloatFloat(float A, float B); // Function Engine.KismetMathLibrary.LessEqual_FloatFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3010a90
	bool LessEqual_DateTimeDateTime(struct FDateTime A, struct FDateTime B); // Function Engine.KismetMathLibrary.LessEqual_DateTimeDateTime // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30109e0
	bool LessEqual_ByteByte(char A, char B); // Function Engine.KismetMathLibrary.LessEqual_ByteByte // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3010920
	bool Less_TimespanTimespan(struct FTimespan A, struct FTimespan B); // Function Engine.KismetMathLibrary.Less_TimespanTimespan // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30110b0
	bool Less_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.Less_IntInt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3010ff0
	bool Less_FloatFloat(float A, float B); // Function Engine.KismetMathLibrary.Less_FloatFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3010f30
	bool Less_DateTimeDateTime(struct FDateTime A, struct FDateTime B); // Function Engine.KismetMathLibrary.Less_DateTimeDateTime // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3010e80
	bool Less_ByteByte(char A, char B); // Function Engine.KismetMathLibrary.Less_ByteByte // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3010dc0
	float Lerp(float A, float B, float Alpha); // Function Engine.KismetMathLibrary.Lerp // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3010810
	bool IsPointInBox(struct FVector Point, struct FBox Box); // Function Engine.KismetMathLibrary.IsPointInBox // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x300c7e0
	bool IsMorning(struct FDateTime A); // Function Engine.KismetMathLibrary.IsMorning // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x300c520
	bool IsLeapYear(int32_t Year); // Function Engine.KismetMathLibrary.IsLeapYear // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300c420
	bool IsAfternoon(struct FDateTime A); // Function Engine.KismetMathLibrary.IsAfternoon // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x300c280
	struct FTransform InvertTransform(struct FTransform T); // Function Engine.KismetMathLibrary.InvertTransform // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x300c180
	struct FVector InverseTransformLocation(struct FTransform T, struct FVector Location); // Function Engine.KismetMathLibrary.InverseTransformLocation // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x300c020
	struct FVector InverseTransformDirection(struct FTransform T, struct FVector Direction); // Function Engine.KismetMathLibrary.InverseTransformDirection // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x300bee0
	float InverseLerp(float A, float B, float Value); // Function Engine.KismetMathLibrary.InverseLerp // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300bdd0
	bool InRange_FloatFloat(float Value, float Min, float Max, bool InclusiveMin, bool InclusiveMax); // Function Engine.KismetMathLibrary.InRange_FloatFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300b1e0
	float Hypotenuse(float Width, float Height); // Function Engine.KismetMathLibrary.Hypotenuse // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300b120
	void HSVToRGB_Vector(struct FLinearColor HSV, struct FLinearColor RGB); // Function Engine.KismetMathLibrary.HSVToRGB_Vector // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x300aec0
	struct FLinearColor HSVToRGB(float H, float S, float V, float A); // Function Engine.KismetMathLibrary.HSVToRGB // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x300ad60
	float GridSnap_Float(float Location, float GridSize); // Function Engine.KismetMathLibrary.GridSnap_Float // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300aca0
	struct FVector GreaterGreater_VectorRotator(struct FVector A, struct FRotator B); // Function Engine.KismetMathLibrary.GreaterGreater_VectorRotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x300a800
	bool GreaterEqual_TimespanTimespan(struct FTimespan A, struct FTimespan B); // Function Engine.KismetMathLibrary.GreaterEqual_TimespanTimespan // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x300a740
	bool GreaterEqual_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.GreaterEqual_IntInt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300a680
	bool GreaterEqual_FloatFloat(float A, float B); // Function Engine.KismetMathLibrary.GreaterEqual_FloatFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300a5c0
	bool GreaterEqual_DateTimeDateTime(struct FDateTime A, struct FDateTime B); // Function Engine.KismetMathLibrary.GreaterEqual_DateTimeDateTime // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x300a510
	bool GreaterEqual_ByteByte(char A, char B); // Function Engine.KismetMathLibrary.GreaterEqual_ByteByte // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300a450
	bool Greater_TimespanTimespan(struct FTimespan A, struct FTimespan B); // Function Engine.KismetMathLibrary.Greater_TimespanTimespan // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x300abe0
	bool Greater_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.Greater_IntInt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300ab20
	bool Greater_FloatFloat(float A, float B); // Function Engine.KismetMathLibrary.Greater_FloatFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300aa60
	bool Greater_DateTimeDateTime(struct FDateTime A, struct FDateTime B); // Function Engine.KismetMathLibrary.Greater_DateTimeDateTime // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x300a9b0
	bool Greater_ByteByte(char A, char B); // Function Engine.KismetMathLibrary.Greater_ByteByte // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300a8f0
	int32_t GetYear(struct FDateTime A); // Function Engine.KismetMathLibrary.GetYear // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x300a3a0
	void GetYawPitchFromVector(struct FVector InVec, float Yaw, float Pitch); // Function Engine.KismetMathLibrary.GetYawPitchFromVector // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x300a270
	float GetYawFromVector(struct FVector InVec); // Function Engine.KismetMathLibrary.GetYawFromVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x300a1e0
	struct FVector GetVectorArrayAverage(struct TArray<struct FVector> Vectors); // Function Engine.KismetMathLibrary.GetVectorArrayAverage // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3009f20
	struct FVector GetUpVector(struct FRotator InRot); // Function Engine.KismetMathLibrary.GetUpVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3009cd0
	float GetTotalSeconds(struct FTimespan A); // Function Engine.KismetMathLibrary.GetTotalSeconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3009a70
	float GetTotalMinutes(struct FTimespan A); // Function Engine.KismetMathLibrary.GetTotalMinutes // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30099e0
	float GetTotalMilliseconds(struct FTimespan A); // Function Engine.KismetMathLibrary.GetTotalMilliseconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3009950
	float GetTotalHours(struct FTimespan A); // Function Engine.KismetMathLibrary.GetTotalHours // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30098c0
	float GetTotalDays(struct FTimespan A); // Function Engine.KismetMathLibrary.GetTotalDays // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3009830
	struct FTimespan GetTimeOfDay(struct FDateTime A); // Function Engine.KismetMathLibrary.GetTimeOfDay // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30097b0
	int32_t GetSeconds(struct FTimespan A); // Function Engine.KismetMathLibrary.GetSeconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3009510
	int32_t GetSecond(struct FDateTime A); // Function Engine.KismetMathLibrary.GetSecond // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30094a0
	struct FVector GetRightVector(struct FRotator InRot); // Function Engine.KismetMathLibrary.GetRightVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3009310
	float GetPI(); // Function Engine.KismetMathLibrary.GetPI // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3009050
	int32_t GetMonth(struct FDateTime A); // Function Engine.KismetMathLibrary.GetMonth // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3008e80
	int32_t GetMinutes(struct FTimespan A); // Function Engine.KismetMathLibrary.GetMinutes // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3008e00
	int32_t GetMinute(struct FDateTime A); // Function Engine.KismetMathLibrary.GetMinute // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3008d90
	float GetMinElement(struct FVector A); // Function Engine.KismetMathLibrary.GetMinElement // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3008d00
	int32_t GetMilliseconds(struct FTimespan A); // Function Engine.KismetMathLibrary.GetMilliseconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3008c80
	int32_t GetMillisecond(struct FDateTime A); // Function Engine.KismetMathLibrary.GetMillisecond // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3008c10
	float GetMaxElement(struct FVector A); // Function Engine.KismetMathLibrary.GetMaxElement // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3008b50
	int32_t GetHours(struct FTimespan A); // Function Engine.KismetMathLibrary.GetHours // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30087b0
	int32_t GetHour12(struct FDateTime A); // Function Engine.KismetMathLibrary.GetHour12 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30086d0
	int32_t GetHour(struct FDateTime A); // Function Engine.KismetMathLibrary.GetHour // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3008740
	struct FVector GetForwardVector(struct FRotator InRot); // Function Engine.KismetMathLibrary.GetForwardVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3008500
	struct FTimespan GetDuration(struct FTimespan A); // Function Engine.KismetMathLibrary.GetDuration // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30080b0
	struct FVector GetDirectionVector(struct FVector From, struct FVector To); // Function Engine.KismetMathLibrary.GetDirectionVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3007ee0
	int32_t GetDays(struct FTimespan A); // Function Engine.KismetMathLibrary.GetDays // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3007e60
	int32_t GetDayOfYear(struct FDateTime A); // Function Engine.KismetMathLibrary.GetDayOfYear // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3007df0
	int32_t GetDay(struct FDateTime A); // Function Engine.KismetMathLibrary.GetDay // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3007d80
	struct FDateTime GetDate(struct FDateTime A); // Function Engine.KismetMathLibrary.GetDate // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3007d00
	void GetAxes(struct FRotator A, struct FVector X, struct FVector Y, struct FVector Z); // Function Engine.KismetMathLibrary.GetAxes // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3007760
	int32_t FTrunc(float A); // Function Engine.KismetMathLibrary.FTrunc // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3006580
	struct FTimespan FromSeconds(float Seconds); // Function Engine.KismetMathLibrary.FromSeconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3007310
	struct FTimespan FromMinutes(float Minutes); // Function Engine.KismetMathLibrary.FromMinutes // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3007280
	struct FTimespan FromMilliseconds(float Milliseconds); // Function Engine.KismetMathLibrary.FromMilliseconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30071f0
	struct FTimespan FromHours(float Hours); // Function Engine.KismetMathLibrary.FromHours // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3007160
	struct FTimespan FromDays(float Days); // Function Engine.KismetMathLibrary.FromDays // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30070d0
	float Fraction(float A); // Function Engine.KismetMathLibrary.Fraction // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3006fd0
	int32_t FMod(float Dividend, float Divisor, float Remainder); // Function Engine.KismetMathLibrary.FMod // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3006470
	float FMin(float A, float B); // Function Engine.KismetMathLibrary.FMin // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30063b0
	float FMax(float A, float B); // Function Engine.KismetMathLibrary.FMax // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30062f0
	float FixedTurn(float InCurrent, float InDesired, float InDeltaRate); // Function Engine.KismetMathLibrary.FixedTurn // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3006b80
	float FInterpTo_Constant(float Current, float Target, float DeltaTime, float InterpSpeed); // Function Engine.KismetMathLibrary.FInterpTo_Constant // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30061a0
	float FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed); // Function Engine.KismetMathLibrary.FInterpTo // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3006050
	float FInterpEaseInOut(float A, float B, float Alpha, float Exponent); // Function Engine.KismetMathLibrary.FInterpEaseInOut // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3005f00
	struct FRotator FindLookAtRotation(struct FVector Start, struct FVector Target); // Function Engine.KismetMathLibrary.FindLookAtRotation // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3006760
	int32_t FFloor(float A); // Function Engine.KismetMathLibrary.FFloor // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3005e80
	float FClamp(float Value, float Min, float Max); // Function Engine.KismetMathLibrary.FClamp // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3005d70
	int32_t FCeil(float A); // Function Engine.KismetMathLibrary.FCeil // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3005cf0
	float Exp(float A); // Function Engine.KismetMathLibrary.Exp // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3005c70
	bool EqualEqual_VectorVector(struct FVector A, struct FVector B, float ErrorTolerance); // Function Engine.KismetMathLibrary.EqualEqual_VectorVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3005a40
	bool EqualEqual_TransformTransform(struct FTransform A, struct FTransform B); // Function Engine.KismetMathLibrary.EqualEqual_TransformTransform // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30058d0
	bool EqualEqual_TimespanTimespan(struct FTimespan A, struct FTimespan B); // Function Engine.KismetMathLibrary.EqualEqual_TimespanTimespan // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3005810
	bool EqualEqual_RotatorRotator(struct FRotator A, struct FRotator B, float ErrorTolerance); // Function Engine.KismetMathLibrary.EqualEqual_RotatorRotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30053d0
	bool EqualEqual_ObjectObject(struct UObject* A, struct UObject* B); // Function Engine.KismetMathLibrary.EqualEqual_ObjectObject // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3005310
	bool EqualEqual_NameName(struct FName A, struct FName B); // Function Engine.KismetMathLibrary.EqualEqual_NameName // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3005250
	bool EqualEqual_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.EqualEqual_IntInt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3005000
	bool EqualEqual_FloatFloat(float A, float B); // Function Engine.KismetMathLibrary.EqualEqual_FloatFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3004d20
	bool EqualEqual_DateTimeDateTime(struct FDateTime A, struct FDateTime B); // Function Engine.KismetMathLibrary.EqualEqual_DateTimeDateTime // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3004c70
	bool EqualEqual_ClassClass(struct UClass* A, struct UClass* B); // Function Engine.KismetMathLibrary.EqualEqual_ClassClass // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3004bb0
	bool EqualEqual_ByteByte(char A, char B); // Function Engine.KismetMathLibrary.EqualEqual_ByteByte // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3004af0
	bool EqualEqual_BoolBool(bool A, bool B); // Function Engine.KismetMathLibrary.EqualEqual_BoolBool // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3004a20
	float Ease(float A, float B, float Alpha, char EasingFunc, float BlendExp, int32_t Steps); // Function Engine.KismetMathLibrary.Ease // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30046f0
	float DotProduct2D(struct FVector2D A, struct FVector2D B); // Function Engine.KismetMathLibrary.DotProduct2D // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30022c0
	float Dot_VectorVector(struct FVector A, struct FVector B); // Function Engine.KismetMathLibrary.Dot_VectorVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3002370
	struct FVector Divide_VectorVector(struct FVector A, struct FVector B); // Function Engine.KismetMathLibrary.Divide_VectorVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3002110
	struct FVector Divide_VectorInt(struct FVector A, int32_t B); // Function Engine.KismetMathLibrary.Divide_VectorInt // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3002030
	struct FVector Divide_VectorFloat(struct FVector A, float B); // Function Engine.KismetMathLibrary.Divide_VectorFloat // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3001f50
	struct FVector2D Divide_Vector2DFloat(struct FVector2D A, float B); // Function Engine.KismetMathLibrary.Divide_Vector2DFloat // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3001e90
	int32_t Divide_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.Divide_IntInt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3001dd0
	float Divide_FloatFloat(float A, float B); // Function Engine.KismetMathLibrary.Divide_FloatFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3001d10
	char Divide_ByteByte(char A, char B); // Function Engine.KismetMathLibrary.Divide_ByteByte // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3001c50
	float DegTan(float A); // Function Engine.KismetMathLibrary.DegTan // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3001840
	float DegSin(float A); // Function Engine.KismetMathLibrary.DegSin // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30017c0
	float DegreesToRadians(float A); // Function Engine.KismetMathLibrary.DegreesToRadians // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30018c0
	float DegCos(float A); // Function Engine.KismetMathLibrary.DegCos // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3001740
	float DegAtan2(float A, float B); // Function Engine.KismetMathLibrary.DegAtan2 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3001600
	float DegAtan(float A); // Function Engine.KismetMathLibrary.DegAtan // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30016c0
	float DegAsin(float A); // Function Engine.KismetMathLibrary.DegAsin // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3001580
	float DegAcos(float A); // Function Engine.KismetMathLibrary.DegAcos // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3001500
	int32_t DaysInYear(int32_t Year); // Function Engine.KismetMathLibrary.DaysInYear // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3001220
	int32_t DaysInMonth(int32_t Year, int32_t Month); // Function Engine.KismetMathLibrary.DaysInMonth // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3001160
	struct FDateTime DateTimeMinValue(); // Function Engine.KismetMathLibrary.DateTimeMinValue // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3001120
	struct FDateTime DateTimeMaxValue(); // Function Engine.KismetMathLibrary.DateTimeMaxValue // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30010e0
	bool DateTimeFromString(struct FString DateTimeString, struct FDateTime Result); // Function Engine.KismetMathLibrary.DateTimeFromString // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3000fe0
	bool DateTimeFromIsoString(struct FString IsoString, struct FDateTime Result); // Function Engine.KismetMathLibrary.DateTimeFromIsoString // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3000ee0
	float CrossProduct2D(struct FVector2D A, struct FVector2D B); // Function Engine.KismetMathLibrary.CrossProduct2D // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3000b80
	struct FVector Cross_VectorVector(struct FVector A, struct FVector B); // Function Engine.KismetMathLibrary.Cross_VectorVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3000c30
	struct FVector CreateVectorFromYawPitch(float Yaw, float Pitch, float Length); // Function Engine.KismetMathLibrary.CreateVectorFromYawPitch // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3000a60
	float Cos(float A); // Function Engine.KismetMathLibrary.Cos // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30008b0
	struct FTransform ConvertTransformToRelative(struct FTransform Transform, struct FTransform ParentTransform); // Function Engine.KismetMathLibrary.ConvertTransformToRelative // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3000730
	struct FVector2D Conv_VectorToVector2D(struct FVector InVector); // Function Engine.KismetMathLibrary.Conv_VectorToVector2D // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30006a0
	struct FTransform Conv_VectorToTransform(struct FVector InLocation); // Function Engine.KismetMathLibrary.Conv_VectorToTransform // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30005d0
	struct FRotator Conv_VectorToRotator(struct FVector InVec); // Function Engine.KismetMathLibrary.Conv_VectorToRotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3000440
	struct FLinearColor Conv_VectorToLinearColor(struct FVector InVec); // Function Engine.KismetMathLibrary.Conv_VectorToLinearColor // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30003b0
	struct FVector Conv_Vector2DToVector(struct FVector2D InVector2D, float Z); // Function Engine.KismetMathLibrary.Conv_Vector2DToVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3000210
	struct FVector Conv_RotatorToVector(struct FRotator InRot); // Function Engine.KismetMathLibrary.Conv_RotatorToVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2fffc90
	struct FVector Conv_LinearColorToVector(struct FLinearColor InLinearColor); // Function Engine.KismetMathLibrary.Conv_LinearColorToVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2fff8a0
	struct FColor Conv_LinearColorToColor(struct FLinearColor InLinearColor); // Function Engine.KismetMathLibrary.Conv_LinearColorToColor // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2fff810
	float Conv_IntToFloat(int32_t InInt); // Function Engine.KismetMathLibrary.Conv_IntToFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2fff490
	char Conv_IntToByte(int32_t InInt); // Function Engine.KismetMathLibrary.Conv_IntToByte // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2fff410
	bool Conv_IntToBool(int32_t InInt); // Function Engine.KismetMathLibrary.Conv_IntToBool // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2fff390
	struct FVector Conv_FloatToVector(float InFloat); // Function Engine.KismetMathLibrary.Conv_FloatToVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2fff210
	struct FLinearColor Conv_FloatToLinearColor(float InFloat); // Function Engine.KismetMathLibrary.Conv_FloatToLinearColor // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ffee70
	struct FLinearColor Conv_ColorToLinearColor(struct FColor InColor); // Function Engine.KismetMathLibrary.Conv_ColorToLinearColor // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ffed10
	int32_t Conv_ByteToInt(char InByte); // Function Engine.KismetMathLibrary.Conv_ByteToInt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ffeb10
	float Conv_ByteToFloat(char InByte); // Function Engine.KismetMathLibrary.Conv_ByteToFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ffea90
	int32_t Conv_BoolToInt(bool InBool); // Function Engine.KismetMathLibrary.Conv_BoolToInt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ffe880
	float Conv_BoolToFloat(bool InBool); // Function Engine.KismetMathLibrary.Conv_BoolToFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ffe7f0
	char Conv_BoolToByte(bool InBool); // Function Engine.KismetMathLibrary.Conv_BoolToByte // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ffe770
	struct FTransform ComposeTransforms(struct FTransform A, struct FTransform B); // Function Engine.KismetMathLibrary.ComposeTransforms // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ffde90
	struct FRotator ComposeRotators(struct FRotator A, struct FRotator B); // Function Engine.KismetMathLibrary.ComposeRotators // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ffdda0
	bool ClassIsChildOf(struct UClass* TestClass, struct UClass* ParentClass); // Function Engine.KismetMathLibrary.ClassIsChildOf // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ffd150
	struct FVector ClampVectorSize(struct FVector A, float Min, float Max); // Function Engine.KismetMathLibrary.ClampVectorSize // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ffd030
	float ClampAxis(float Angle); // Function Engine.KismetMathLibrary.ClampAxis // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ffcfb0
	float ClampAngle(float AngleDegrees, float MinAngleDegrees, float MaxAngleDegrees); // Function Engine.KismetMathLibrary.ClampAngle // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ffcea0
	int32_t Clamp(int32_t Value, int32_t Min, int32_t Max); // Function Engine.KismetMathLibrary.Clamp // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ffcdb0
	struct FLinearColor CInterpTo(struct FLinearColor Current, struct FLinearColor Target, float DeltaTime, float InterpSpeed); // Function Engine.KismetMathLibrary.CInterpTo // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ffa350
	void BreakVector2D(struct FVector2D InVec, float X, float Y); // Function Engine.KismetMathLibrary.BreakVector2D // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ff8b50
	void BreakVector(struct FVector InVec, float X, float Y, float Z); // Function Engine.KismetMathLibrary.BreakVector // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ff8c70
	void BreakTransform(struct FTransform InTransform, struct FVector Location, struct FRotator Rotation, struct FVector Scale); // Function Engine.KismetMathLibrary.BreakTransform // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ff8980
	void BreakTimespan(struct FTimespan InTimespan, int32_t Days, int32_t Hours, int32_t Minutes, int32_t Seconds, int32_t Milliseconds); // Function Engine.KismetMathLibrary.BreakTimespan // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ff8770
	void BreakRotIntoAxes(struct FRotator InRot, struct FVector X, struct FVector Y, struct FVector Z); // Function Engine.KismetMathLibrary.BreakRotIntoAxes // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ff8460
	void BreakRotator(struct FRotator InRot, float Roll, float Pitch, float Yaw); // Function Engine.KismetMathLibrary.BreakRotator // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ff85e0
	void BreakRandomStream(struct FRandomStream InRandomStream, int32_t InitialSeed); // Function Engine.KismetMathLibrary.BreakRandomStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ff8380
	void BreakDateTime(struct FDateTime InDateTime, int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t Second, int32_t Millisecond); // Function Engine.KismetMathLibrary.BreakDateTime // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ff80d0
	void BreakColor(struct FLinearColor InColor, float R, float G, float B, float A); // Function Engine.KismetMathLibrary.BreakColor // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ff7ee0
	bool BooleanXOR(bool A, bool B); // Function Engine.KismetMathLibrary.BooleanXOR // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ff64d0
	bool BooleanOR(bool A, bool B); // Function Engine.KismetMathLibrary.BooleanOR // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ff6400
	bool BooleanNOR(bool A, bool B); // Function Engine.KismetMathLibrary.BooleanNOR // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ff6330
	bool BooleanNAND(bool A, bool B); // Function Engine.KismetMathLibrary.BooleanNAND // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ff6260
	bool BooleanAND(bool A, bool B); // Function Engine.KismetMathLibrary.BooleanAND // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ff6190
	float Atan2(float A, float B); // Function Engine.KismetMathLibrary.Atan2 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ff5f90
	float Atan(float A); // Function Engine.KismetMathLibrary.Atan // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ff6050
	float Asin(float A); // Function Engine.KismetMathLibrary.Asin // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ff5f10
	int32_t And_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.And_IntInt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ff3ce0
	struct FVector Add_VectorVector(struct FVector A, struct FVector B); // Function Engine.KismetMathLibrary.Add_VectorVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ff3bf0
	struct FVector Add_VectorInt(struct FVector A, int32_t B); // Function Engine.KismetMathLibrary.Add_VectorInt // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ff3b10
	struct FVector Add_VectorFloat(struct FVector A, float B); // Function Engine.KismetMathLibrary.Add_VectorFloat // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ff3a30
	struct FVector2D Add_Vector2DVector2D(struct FVector2D A, struct FVector2D B); // Function Engine.KismetMathLibrary.Add_Vector2DVector2D // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ff3970
	struct FVector2D Add_Vector2DFloat(struct FVector2D A, float B); // Function Engine.KismetMathLibrary.Add_Vector2DFloat // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ff38b0
	struct FTimespan Add_TimespanTimespan(struct FTimespan A, struct FTimespan B); // Function Engine.KismetMathLibrary.Add_TimespanTimespan // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ff37f0
	int32_t Add_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.Add_IntInt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ff3730
	float Add_FloatFloat(float A, float B); // Function Engine.KismetMathLibrary.Add_FloatFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ff3670
	struct FDateTime Add_DateTimeTimespan(struct FDateTime A, struct FTimespan B); // Function Engine.KismetMathLibrary.Add_DateTimeTimespan // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ff35b0
	char Add_ByteByte(char A, char B); // Function Engine.KismetMathLibrary.Add_ByteByte // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ff34f0
	float Acos(float A); // Function Engine.KismetMathLibrary.Acos // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ff32f0
	int32_t Abs_Int(int32_t A); // Function Engine.KismetMathLibrary.Abs_Int // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ff3270
	float Abs(float A); // Function Engine.KismetMathLibrary.Abs // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ff31f0
};

// Class Engine.KismetNodeHelperLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetNodeHelperLibrary : UBlueprintFunctionLibrary {

	void MarkBit(int32_t Data, int32_t Index); // Function Engine.KismetNodeHelperLibrary.MarkBit // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x30155c0
	bool HasUnmarkedBit(int32_t Data, int32_t NumBits); // Function Engine.KismetNodeHelperLibrary.HasUnmarkedBit // Final|Native|Static|Public|BlueprintCallable // @ game+0x300b040
	bool HasMarkedBit(int32_t Data, int32_t NumBits); // Function Engine.KismetNodeHelperLibrary.HasMarkedBit // Final|Native|Static|Public|BlueprintCallable // @ game+0x300af80
	char GetValidIndex(struct UEnum* Enum, char EnumeratorIndex); // Function Engine.KismetNodeHelperLibrary.GetValidIndex // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3009e60
	int32_t GetUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits, bool bRandom); // Function Engine.KismetNodeHelperLibrary.GetUnmarkedBit // Final|Native|Static|Public|BlueprintCallable // @ game+0x3009ba0
	int32_t GetRandomUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits); // Function Engine.KismetNodeHelperLibrary.GetRandomUnmarkedBit // Final|Native|Static|Public|BlueprintCallable // @ game+0x30091c0
	int32_t GetFirstUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits); // Function Engine.KismetNodeHelperLibrary.GetFirstUnmarkedBit // Final|Native|Static|Public|BlueprintCallable // @ game+0x3008410
	struct FString GetEnumeratorUserFriendlyName(struct UEnum* Enum, char EnumeratorValue); // Function Engine.KismetNodeHelperLibrary.GetEnumeratorUserFriendlyName // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30082f0
	struct FName GetEnumeratorName(struct UEnum* Enum, char EnumeratorValue); // Function Engine.KismetNodeHelperLibrary.GetEnumeratorName // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3008230
	void ClearBit(int32_t Data, int32_t Index); // Function Engine.KismetNodeHelperLibrary.ClearBit // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x2ffd290
	void ClearAllBits(int32_t Data); // Function Engine.KismetNodeHelperLibrary.ClearAllBits // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x2ffd210
	bool BitIsMarked(int32_t Data, int32_t Index); // Function Engine.KismetNodeHelperLibrary.BitIsMarked // Final|Native|Static|Public|BlueprintCallable // @ game+0x2ff60d0
};

// Class Engine.KismetStringLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetStringLibrary : UBlueprintFunctionLibrary {

	struct FString TrimTrailing(struct FString SourceString); // Function Engine.KismetStringLibrary.TrimTrailing // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30251a0
	struct FString Trim(struct FString SourceString); // Function Engine.KismetStringLibrary.Trim // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30250b0
	struct FString ToUpper(struct FString SourceString); // Function Engine.KismetStringLibrary.ToUpper // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3024b60
	struct FString ToLower(struct FString SourceString); // Function Engine.KismetStringLibrary.ToLower // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3024a70
	struct FString TimeSecondsToString(float InSeconds); // Function Engine.KismetStringLibrary.TimeSecondsToString // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3024710
	bool StartsWith(struct FString SourceString, struct FString InPrefix, char SearchCase); // Function Engine.KismetStringLibrary.StartsWith // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3022d50
	bool Split(struct FString SourceString, struct FString InStr, struct FString LeftS, struct FString RightS, char SearchCase, char SearchDir); // Function Engine.KismetStringLibrary.Split // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x30229e0
	struct FString RightPad(struct FString SourceString, int32_t ChCount); // Function Engine.KismetStringLibrary.RightPad // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x301d790
	struct FString RightChop(struct FString SourceString, int32_t Count); // Function Engine.KismetStringLibrary.RightChop // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x301d660
	struct FString Right(struct FString SourceString, int32_t Count); // Function Engine.KismetStringLibrary.Right // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x301d530
	struct FString Reverse(struct FString SourceString); // Function Engine.KismetStringLibrary.Reverse // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x301d440
	int32_t ReplaceInline(struct FString SourceString, struct FString SearchText, struct FString ReplacementText, char SearchCase); // Function Engine.KismetStringLibrary.ReplaceInline // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x301c550
	struct FString Replace(struct FString SourceString, struct FString From, struct FString To, char SearchCase); // Function Engine.KismetStringLibrary.Replace // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x301c370
	struct TArray<struct FString> ParseIntoArray(struct FString SourceString, struct FString Delimiter, bool CullEmptyStrings); // Function Engine.KismetStringLibrary.ParseIntoArray // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30191b0
	bool NotEqual_StrStr(struct FString A, struct FString B); // Function Engine.KismetStringLibrary.NotEqual_StrStr // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3018aa0
	bool NotEqual_StriStri(struct FString A, struct FString B); // Function Engine.KismetStringLibrary.NotEqual_StriStri // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3018ba0
	struct FString Mid(struct FString SourceString, int32_t Start, int32_t Count); // Function Engine.KismetStringLibrary.Mid // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30160c0
	bool MatchesWildcard(struct FString SourceString, struct FString Wildcard, char SearchCase); // Function Engine.KismetStringLibrary.MatchesWildcard // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3015850
	int32_t Len(struct FString S); // Function Engine.KismetStringLibrary.Len // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3010770
	struct FString LeftPad(struct FString SourceString, int32_t ChCount); // Function Engine.KismetStringLibrary.LeftPad // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3010640
	struct FString LeftChop(struct FString SourceString, int32_t Count); // Function Engine.KismetStringLibrary.LeftChop // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3010510
	struct FString Left(struct FString SourceString, int32_t Count); // Function Engine.KismetStringLibrary.Left // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30103e0
	struct FString JoinStringArray(struct TArray<struct FString> SourceArray, struct FString Separator); // Function Engine.KismetStringLibrary.JoinStringArray // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x300caf0
	bool IsNumeric(struct FString SourceString); // Function Engine.KismetStringLibrary.IsNumeric // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300c710
	struct FString GetSubstring(struct FString SourceString, int32_t StartIndex, int32_t Length); // Function Engine.KismetStringLibrary.GetSubstring // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3009590
	int32_t GetCharacterAsNumber(struct FString SourceString, int32_t Index); // Function Engine.KismetStringLibrary.GetCharacterAsNumber // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30079e0
	struct TArray<struct FString> GetCharacterArrayFromString(struct FString SourceString); // Function Engine.KismetStringLibrary.GetCharacterArrayFromString // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30078e0
	int32_t FindSubstring(struct FString SearchIn, struct FString Substring, bool bUseCase, bool bSearchFromEnd, int32_t StartPosition); // Function Engine.KismetStringLibrary.FindSubstring // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3006860
	bool EqualEqual_StrStr(struct FString A, struct FString B); // Function Engine.KismetStringLibrary.EqualEqual_StrStr // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30054f0
	bool EqualEqual_StriStri(struct FString A, struct FString B); // Function Engine.KismetStringLibrary.EqualEqual_StriStri // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30055f0
	bool EndsWith(struct FString SourceString, struct FString InSuffix, char SearchCase); // Function Engine.KismetStringLibrary.EndsWith // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30048e0
	int32_t CullArray(struct FString SourceString, struct TArray<struct FString> InArray); // Function Engine.KismetStringLibrary.CullArray // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3000d20
	struct FString Conv_VectorToString(struct FVector InVec); // Function Engine.KismetStringLibrary.Conv_VectorToString // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30004e0
	struct FString Conv_Vector2dToString(struct FVector2D InVec); // Function Engine.KismetStringLibrary.Conv_Vector2dToString // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30002e0
	struct FString Conv_TransformToString(struct FTransform InTrans); // Function Engine.KismetStringLibrary.Conv_TransformToString // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30000e0
	struct FName Conv_StringToName(struct FString InString); // Function Engine.KismetStringLibrary.Conv_StringToName // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2fffe70
	int32_t Conv_StringToInt(struct FString InString); // Function Engine.KismetStringLibrary.Conv_StringToInt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2fffdd0
	float Conv_StringToFloat(struct FString InString); // Function Engine.KismetStringLibrary.Conv_StringToFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2fffd30
	struct FString Conv_RotatorToString(struct FRotator InRot); // Function Engine.KismetStringLibrary.Conv_RotatorToString // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2fffba0
	struct FString Conv_ObjectToString(struct UObject* InObj); // Function Engine.KismetStringLibrary.Conv_ObjectToString // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2fffac0
	struct FString Conv_NameToString(struct FName InName); // Function Engine.KismetStringLibrary.Conv_NameToString // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2fff930
	struct FString Conv_IntToString(int32_t InInt); // Function Engine.KismetStringLibrary.Conv_IntToString // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2fff510
	struct FString Conv_FloatToString(float InFloat); // Function Engine.KismetStringLibrary.Conv_FloatToString // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ffef00
	struct FString Conv_ColorToString(struct FLinearColor InColor); // Function Engine.KismetStringLibrary.Conv_ColorToString // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ffed90
	struct FString Conv_ByteToString(char InByte); // Function Engine.KismetStringLibrary.Conv_ByteToString // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ffeb90
	struct FString Conv_BoolToString(bool InBool); // Function Engine.KismetStringLibrary.Conv_BoolToString // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ffe900
	struct FString Concat_StrStr(struct FString A, struct FString B); // Function Engine.KismetStringLibrary.Concat_StrStr // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ffe010
	struct FString BuildString_Vector2d(struct FString AppendTo, struct FString Prefix, struct FVector2D InVector2D, struct FString Suffix); // Function Engine.KismetStringLibrary.BuildString_Vector2d // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ff9f80
	struct FString BuildString_Vector(struct FString AppendTo, struct FString Prefix, struct FVector InVector, struct FString Suffix); // Function Engine.KismetStringLibrary.BuildString_Vector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ffa160
	struct FString BuildString_Rotator(struct FString AppendTo, struct FString Prefix, struct FRotator InRot, struct FString Suffix); // Function Engine.KismetStringLibrary.BuildString_Rotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ff9d90
	struct FString BuildString_Object(struct FString AppendTo, struct FString Prefix, struct UObject* InObj, struct FString Suffix); // Function Engine.KismetStringLibrary.BuildString_Object // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ff9bb0
	struct FString BuildString_Name(struct FString AppendTo, struct FString Prefix, struct FName InName, struct FString Suffix); // Function Engine.KismetStringLibrary.BuildString_Name // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ff99d0
	struct FString BuildString_Int(struct FString AppendTo, struct FString Prefix, int32_t InInt, struct FString Suffix); // Function Engine.KismetStringLibrary.BuildString_Int // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ff97f0
	struct FString BuildString_Float(struct FString AppendTo, struct FString Prefix, float InFloat, struct FString Suffix); // Function Engine.KismetStringLibrary.BuildString_Float // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ff9610
	struct FString BuildString_Color(struct FString AppendTo, struct FString Prefix, struct FLinearColor InColor, struct FString Suffix); // Function Engine.KismetStringLibrary.BuildString_Color // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ff9430
	struct FString BuildString_Bool(struct FString AppendTo, struct FString Prefix, bool InBool, struct FString Suffix); // Function Engine.KismetStringLibrary.BuildString_Bool // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ff9250
};

// Class Engine.KismetSystemLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetSystemLibrary : UBlueprintFunctionLibrary {

	void StackTrace(); // Function Engine.KismetSystemLibrary.StackTrace // Final|Native|Static|Public|BlueprintCallable // @ game+0x3022d30
	bool SphereTraceSingleForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, struct TArray<char> ObjectTypes, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, char DrawDebugType, struct FHitResult OutHit, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.SphereTraceSingleForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x3021f50
	bool SphereTraceSingleByObject_DEPRECATED(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, struct TArray<char> ObjectsToTrace, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, char DrawDebugType, struct FHitResult OutHit, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.SphereTraceSingleByObject_DEPRECATED // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x3021ba0
	bool SphereTraceSingle_NEW(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, char TraceChannel, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, char DrawDebugType, struct FHitResult OutHit, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.SphereTraceSingle_NEW // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x3022670
	bool SphereTraceSingle_DEPRECATED(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, char TraceChannel, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, char DrawDebugType, struct FHitResult OutHit, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.SphereTraceSingle_DEPRECATED // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x3022300
	bool SphereTraceMultiForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, struct TArray<char> ObjectTypes, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, char DrawDebugType, struct TArray<struct FHitResult> OutHits, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.SphereTraceMultiForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x30211d0
	bool SphereTraceMultiByObject_DEPRECATED(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, struct TArray<char> ObjectsToTrace, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, char DrawDebugType, struct TArray<struct FHitResult> OutHits, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.SphereTraceMultiByObject_DEPRECATED // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x3020e60
	bool SphereTraceMulti_NEW(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, char TraceChannel, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, char DrawDebugType, struct TArray<struct FHitResult> OutHits, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.SphereTraceMulti_NEW // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x3021870
	bool SphereTraceMulti_DEPRECATED(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, char TraceChannel, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, char DrawDebugType, struct TArray<struct FHitResult> OutHits, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.SphereTraceMulti_DEPRECATED // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x3021540
	bool SphereOverlapComponents_NEW(struct UObject* WorldContextObject, struct FVector SpherePos, float SphereRadius, struct TArray<char> ObjectTypes, struct UClass* ComponentClassFilter, struct TArray<struct AActor*> ActorsToIgnore, struct TArray<struct UPrimitiveComponent*> OutComponents); // Function Engine.KismetSystemLibrary.SphereOverlapComponents_NEW // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x3020bd0
	bool SphereOverlapComponents_DEPRECATED(struct UObject* WorldContextObject, struct FVector SpherePos, float SphereRadius, char Filter, struct UClass* ComponentClassFilter, struct TArray<struct AActor*> ActorsToIgnore, struct TArray<struct UPrimitiveComponent*> OutComponents); // Function Engine.KismetSystemLibrary.SphereOverlapComponents_DEPRECATED // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x3020970
	bool SphereOverlapActors_NEW(struct UObject* WorldContextObject, struct FVector SpherePos, float SphereRadius, struct TArray<char> ObjectTypes, struct UClass* ActorClassFilter, struct TArray<struct AActor*> ActorsToIgnore, struct TArray<struct AActor*> OutActors); // Function Engine.KismetSystemLibrary.SphereOverlapActors_NEW // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x30206e0
	bool SphereOverlapActors_DEPRECATED(struct UObject* WorldContextObject, struct FVector SpherePos, float SphereRadius, char Filter, struct UClass* ActorClassFilter, struct TArray<struct AActor*> ActorsToIgnore, struct TArray<struct AActor*> OutActors); // Function Engine.KismetSystemLibrary.SphereOverlapActors_DEPRECATED // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x3020480
	void ShowPlatformSpecificLeaderboardScreen(struct FString CategoryName); // Function Engine.KismetSystemLibrary.ShowPlatformSpecificLeaderboardScreen // Final|Native|Static|Public|BlueprintCallable // @ game+0x30201f0
	void ShowPlatformSpecificAchievementsScreen(struct APlayerController* SpecificPlayer); // Function Engine.KismetSystemLibrary.ShowPlatformSpecificAchievementsScreen // Final|Native|Static|Public|BlueprintCallable // @ game+0x3020180
	void ShowAdBanner(int32_t AdIdIndex, bool bShowOnBottomOfScreen); // Function Engine.KismetSystemLibrary.ShowAdBanner // Final|Native|Static|Public|BlueprintCallable // @ game+0x30200d0
	void SetWindowTitle(struct FText Title); // Function Engine.KismetSystemLibrary.SetWindowTitle // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3020010
	void SetVolumeButtonsHandledBySystem(bool bEnabled); // Function Engine.KismetSystemLibrary.SetVolumeButtonsHandledBySystem // Final|Native|Static|Public|BlueprintCallable // @ game+0x301ff90
	void SetVectorPropertyByName(struct UObject* Object, struct FName PropertyName, struct FVector Value); // Function Engine.KismetSystemLibrary.SetVectorPropertyByName // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x301fe90
	void SetTransformPropertyByName(struct UObject* Object, struct FName PropertyName, struct FTransform Value); // Function Engine.KismetSystemLibrary.SetTransformPropertyByName // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x301fc00
	void SetTextPropertyByName(struct UObject* Object, struct FName PropertyName, struct FText Value); // Function Engine.KismetSystemLibrary.SetTextPropertyByName // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x301fae0
	void SetSupressViewportTransitionMessage(struct UObject* WorldContextObject, bool bState); // Function Engine.KismetSystemLibrary.SetSupressViewportTransitionMessage // Final|Native|Static|Public|BlueprintCallable // @ game+0x301fa20
	void SetStructurePropertyByName(struct UObject* Object, struct FName PropertyName, struct FGenericStruct Value); // Function Engine.KismetSystemLibrary.SetStructurePropertyByName // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x301f930
	void SetStringPropertyByName(struct UObject* Object, struct FName PropertyName, struct FString Value); // Function Engine.KismetSystemLibrary.SetStringPropertyByName // Final|Native|Static|Public|BlueprintCallable // @ game+0x301f820
	void SetRotatorPropertyByName(struct UObject* Object, struct FName PropertyName, struct FRotator Value); // Function Engine.KismetSystemLibrary.SetRotatorPropertyByName // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x301f560
	void SetObjectPropertyByName(struct UObject* Object, struct FName PropertyName, struct UObject* Value); // Function Engine.KismetSystemLibrary.SetObjectPropertyByName // Final|Native|Static|Public|BlueprintCallable // @ game+0x301f3a0
	void SetNamePropertyByName(struct UObject* Object, struct FName PropertyName, struct FName Value); // Function Engine.KismetSystemLibrary.SetNamePropertyByName // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x301f220
	void SetLinearColorPropertyByName(struct UObject* Object, struct FName PropertyName, struct FLinearColor Value); // Function Engine.KismetSystemLibrary.SetLinearColorPropertyByName // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x301f100
	void SetIntPropertyByName(struct UObject* Object, struct FName PropertyName, int32_t Value); // Function Engine.KismetSystemLibrary.SetIntPropertyByName // Final|Native|Static|Public|BlueprintCallable // @ game+0x301f010
	void SetFloatPropertyByName(struct UObject* Object, struct FName PropertyName, float Value); // Function Engine.KismetSystemLibrary.SetFloatPropertyByName // Final|Native|Static|Public|BlueprintCallable // @ game+0x301ef10
	void SetCollisionProfileNameProperty(struct UObject* Object, struct FName PropertyName, struct FCollisionProfileName Value); // Function Engine.KismetSystemLibrary.SetCollisionProfileNameProperty // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x301eda0
	void SetClassPropertyByName(struct UObject* Object, struct FName PropertyName, struct UClass* Value); // Function Engine.KismetSystemLibrary.SetClassPropertyByName // Final|Native|Static|Public|BlueprintCallable // @ game+0x301ecb0
	void SetBytePropertyByName(struct UObject* Object, struct FName PropertyName, char Value); // Function Engine.KismetSystemLibrary.SetBytePropertyByName // Final|Native|Static|Public|BlueprintCallable // @ game+0x301ebc0
	void SetBoolPropertyByName(struct UObject* Object, struct FName PropertyName, bool Value); // Function Engine.KismetSystemLibrary.SetBoolPropertyByName // Final|Native|Static|Public|BlueprintCallable // @ game+0x301eac0
	void SetAssetPropertyByName(struct UObject* Object, struct FName PropertyName, struct UObject* Value); // Function Engine.KismetSystemLibrary.SetAssetPropertyByName // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x301e970
	void SetAssetClassPropertyByName(struct UObject* Object, struct FName PropertyName, struct UClass* Value); // Function Engine.KismetSystemLibrary.SetAssetClassPropertyByName // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x301e820
	void RetriggerableDelay(struct UObject* WorldContextObject, float Duration, struct FLatentActionInfo LatentInfo); // Function Engine.KismetSystemLibrary.RetriggerableDelay // Final|Native|Static|Public|BlueprintCallable // @ game+0x301d320
	void ResetGamepadAssignmentToController(int32_t ControllerId); // Function Engine.KismetSystemLibrary.ResetGamepadAssignmentToController // Final|Native|Static|Public|BlueprintCallable // @ game+0x301c6f0
	void ResetGamepadAssignments(); // Function Engine.KismetSystemLibrary.ResetGamepadAssignments // Final|Native|Static|Public|BlueprintCallable // @ game+0x301c760
	void RegisterForRemoteNotifications(); // Function Engine.KismetSystemLibrary.RegisterForRemoteNotifications // Final|Native|Static|Public|BlueprintCallable // @ game+0x301c350
	void QuitGame(struct UObject* WorldContextObject, struct APlayerController* SpecificPlayer, char QuitPreference); // Function Engine.KismetSystemLibrary.QuitGame // Final|Native|Static|Public|BlueprintCallable // @ game+0x301ac30
	void PrintWarning(struct FString InString); // Function Engine.KismetSystemLibrary.PrintWarning // Final|Native|Static|Public|BlueprintCallable // @ game+0x301a880
	void PrintText(struct UObject* WorldContextObject, struct FText InText, bool bPrintToScreen, bool bPrintToLog, struct FLinearColor TextColor, float Duration); // Function Engine.KismetSystemLibrary.PrintText // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x301a680
	void PrintString(struct UObject* WorldContextObject, struct FString InString, bool bPrintToScreen, bool bPrintToLog, struct FLinearColor TextColor, float Duration); // Function Engine.KismetSystemLibrary.PrintString // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x301a480
	void OnAssetLoaded__DelegateSignature(struct UObject* Loaded); // DelegateFunction Engine.KismetSystemLibrary.OnAssetLoaded__DelegateSignature // Public|Delegate // @ game+0x188c2f0
	void OnAssetClassLoaded__DelegateSignature(struct UClass* Loaded); // DelegateFunction Engine.KismetSystemLibrary.OnAssetClassLoaded__DelegateSignature // Public|Delegate // @ game+0x188c2f0
	void MoveComponentTo(struct USceneComponent* Component, struct FVector TargetRelativeLocation, struct FRotator TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, char MoveAction, struct FLatentActionInfo LatentInfo); // Function Engine.KismetSystemLibrary.MoveComponentTo // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x3016aa0
	struct FText MakeLiteralText(struct FText Value); // Function Engine.KismetSystemLibrary.MakeLiteralText // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30140f0
	struct FString MakeLiteralString(struct FString Value); // Function Engine.KismetSystemLibrary.MakeLiteralString // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3014000
	struct FName MakeLiteralName(struct FName Value); // Function Engine.KismetSystemLibrary.MakeLiteralName // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3013f70
	int32_t MakeLiteralInt(int32_t Value); // Function Engine.KismetSystemLibrary.MakeLiteralInt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3013ef0
	float MakeLiteralFloat(float Value); // Function Engine.KismetSystemLibrary.MakeLiteralFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3013e70
	char MakeLiteralByte(char Value); // Function Engine.KismetSystemLibrary.MakeLiteralByte // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3013df0
	bool MakeLiteralBool(bool Value); // Function Engine.KismetSystemLibrary.MakeLiteralBool // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3013d70
	void LoadAssetClass(struct UObject* WorldContextObject, struct UClass* AssetClass, DelegateProperty OnLoaded, struct FLatentActionInfo LatentInfo); // Function Engine.KismetSystemLibrary.LoadAssetClass // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x30132e0
	void LoadAsset(struct UObject* WorldContextObject, struct UObject* Asset, DelegateProperty OnLoaded, struct FLatentActionInfo LatentInfo); // Function Engine.KismetSystemLibrary.LoadAsset // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3013120
	bool LineTraceSingleForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct TArray<char> ObjectTypes, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, char DrawDebugType, struct FHitResult OutHit, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.LineTraceSingleForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x3012530
	bool LineTraceSingleByObject_DEPRECATED(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct TArray<char> ObjectsToTrace, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, char DrawDebugType, struct FHitResult OutHit, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.LineTraceSingleByObject_DEPRECATED // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x30121c0
	bool LineTraceSingle_NEW(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, char TraceChannel, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, char DrawDebugType, struct FHitResult OutHit, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.LineTraceSingle_NEW // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x3012bc0
	bool LineTraceSingle_DEPRECATED(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, char TraceChannel, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, char DrawDebugType, struct FHitResult OutHit, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.LineTraceSingle_DEPRECATED // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x30128a0
	bool LineTraceMultiForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct TArray<char> ObjectTypes, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, char DrawDebugType, struct TArray<struct FHitResult> OutHits, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.LineTraceMultiForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x30118b0
	bool LineTraceMultiByObject_DEPRECATED(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct TArray<char> ObjectsToTrace, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, char DrawDebugType, struct TArray<struct FHitResult> OutHits, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.LineTraceMultiByObject_DEPRECATED // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x3011580
	bool LineTraceMulti_NEW(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, char TraceChannel, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, char DrawDebugType, struct TArray<struct FHitResult> OutHits, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.LineTraceMulti_NEW // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x3011ed0
	bool LineTraceMulti_DEPRECATED(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, char TraceChannel, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, char DrawDebugType, struct TArray<struct FHitResult> OutHits, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.LineTraceMulti_DEPRECATED // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x3011be0
	void LaunchURL(struct FString URL); // Function Engine.KismetSystemLibrary.LaunchURL // Final|Native|Static|Public|BlueprintCallable // @ game+0x3010350
	void K2_UnPauseTimerHandle(struct UObject* WorldContextObject, struct FTimerHandle Handle); // Function Engine.KismetSystemLibrary.K2_UnPauseTimerHandle // Final|Native|Static|Public|BlueprintCallable // @ game+0x300fda0
	void K2_UnPauseTimerDelegate(DelegateProperty Delegate); // Function Engine.KismetSystemLibrary.K2_UnPauseTimerDelegate // Final|Native|Static|Public|BlueprintCallable // @ game+0x300fd00
	void K2_UnPauseTimer(struct UObject* Object, struct FString FunctionName); // Function Engine.KismetSystemLibrary.K2_UnPauseTimer // Final|Native|Static|Public|BlueprintCallable // @ game+0x300fc20
	bool K2_TimerExistsHandle(struct UObject* WorldContextObject, struct FTimerHandle Handle); // Function Engine.KismetSystemLibrary.K2_TimerExistsHandle // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300fb60
	bool K2_TimerExistsDelegate(DelegateProperty Delegate); // Function Engine.KismetSystemLibrary.K2_TimerExistsDelegate // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300fab0
	bool K2_TimerExists(struct UObject* Object, struct FString FunctionName); // Function Engine.KismetSystemLibrary.K2_TimerExists // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300f9c0
	struct FTimerHandle K2_SetTimerDelegate(DelegateProperty Delegate, float Time, bool bLooping); // Function Engine.KismetSystemLibrary.K2_SetTimerDelegate // Final|Native|Static|Public|BlueprintCallable // @ game+0x300f660
	struct FTimerHandle K2_SetTimer(struct UObject* Object, struct FString FunctionName, float Time, bool bLooping); // Function Engine.KismetSystemLibrary.K2_SetTimer // Final|Native|Static|Public|BlueprintCallable // @ game+0x300f4c0
	void K2_PauseTimerHandle(struct UObject* WorldContextObject, struct FTimerHandle Handle); // Function Engine.KismetSystemLibrary.K2_PauseTimerHandle // Final|Native|Static|Public|BlueprintCallable // @ game+0x300f350
	void K2_PauseTimerDelegate(DelegateProperty Delegate); // Function Engine.KismetSystemLibrary.K2_PauseTimerDelegate // Final|Native|Static|Public|BlueprintCallable // @ game+0x300f2b0
	void K2_PauseTimer(struct UObject* Object, struct FString FunctionName); // Function Engine.KismetSystemLibrary.K2_PauseTimer // Final|Native|Static|Public|BlueprintCallable // @ game+0x300f1d0
	bool K2_IsValidTimerHandle(struct FTimerHandle Handle); // Function Engine.KismetSystemLibrary.K2_IsValidTimerHandle // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300f150
	bool K2_IsTimerPausedHandle(struct UObject* WorldContextObject, struct FTimerHandle Handle); // Function Engine.KismetSystemLibrary.K2_IsTimerPausedHandle // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300f090
	bool K2_IsTimerPausedDelegate(DelegateProperty Delegate); // Function Engine.KismetSystemLibrary.K2_IsTimerPausedDelegate // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300efe0
	bool K2_IsTimerPaused(struct UObject* Object, struct FString FunctionName); // Function Engine.KismetSystemLibrary.K2_IsTimerPaused // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300eef0
	bool K2_IsTimerActiveHandle(struct UObject* WorldContextObject, struct FTimerHandle Handle); // Function Engine.KismetSystemLibrary.K2_IsTimerActiveHandle // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300ee30
	bool K2_IsTimerActiveDelegate(DelegateProperty Delegate); // Function Engine.KismetSystemLibrary.K2_IsTimerActiveDelegate // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300ed80
	bool K2_IsTimerActive(struct UObject* Object, struct FString FunctionName); // Function Engine.KismetSystemLibrary.K2_IsTimerActive // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300ec90
	struct FTimerHandle K2_InvalidateTimerHandle(struct FTimerHandle Handle); // Function Engine.KismetSystemLibrary.K2_InvalidateTimerHandle // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x300ebf0
	float K2_GetTimerRemainingTimeHandle(struct UObject* WorldContextObject, struct FTimerHandle Handle); // Function Engine.KismetSystemLibrary.K2_GetTimerRemainingTimeHandle // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300eb20
	float K2_GetTimerRemainingTimeDelegate(DelegateProperty Delegate); // Function Engine.KismetSystemLibrary.K2_GetTimerRemainingTimeDelegate // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300ea70
	float K2_GetTimerRemainingTime(struct UObject* Object, struct FString FunctionName); // Function Engine.KismetSystemLibrary.K2_GetTimerRemainingTime // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300e980
	float K2_GetTimerElapsedTimeHandle(struct UObject* WorldContextObject, struct FTimerHandle Handle); // Function Engine.KismetSystemLibrary.K2_GetTimerElapsedTimeHandle // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300e8b0
	float K2_GetTimerElapsedTimeDelegate(DelegateProperty Delegate); // Function Engine.KismetSystemLibrary.K2_GetTimerElapsedTimeDelegate // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300e800
	float K2_GetTimerElapsedTime(struct UObject* Object, struct FString FunctionName); // Function Engine.KismetSystemLibrary.K2_GetTimerElapsedTime // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300e710
	void K2_ClearTimerHandle(struct UObject* WorldContextObject, struct FTimerHandle Handle); // Function Engine.KismetSystemLibrary.K2_ClearTimerHandle // Final|Native|Static|Public|BlueprintCallable // @ game+0x300ce00
	void K2_ClearTimerDelegate(DelegateProperty Delegate); // Function Engine.KismetSystemLibrary.K2_ClearTimerDelegate // Final|Native|Static|Public|BlueprintCallable // @ game+0x300cd60
	void K2_ClearTimer(struct UObject* Object, struct FString FunctionName); // Function Engine.KismetSystemLibrary.K2_ClearTimer // Final|Native|Static|Public|BlueprintCallable // @ game+0x300cc80
	bool IsValidClass(struct UClass* Class); // Function Engine.KismetSystemLibrary.IsValidClass // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300c9d0
	bool IsValid(struct UObject* Object); // Function Engine.KismetSystemLibrary.IsValid // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300c950
	bool IsServer(struct UObject* WorldContextObject); // Function Engine.KismetSystemLibrary.IsServer // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300c8d0
	bool IsPackagedForDistribution(); // Function Engine.KismetSystemLibrary.IsPackagedForDistribution // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300c7b0
	bool IsLoggedIn(struct APlayerController* SpecificPlayer); // Function Engine.KismetSystemLibrary.IsLoggedIn // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300c4a0
	bool IsDedicatedServer(struct UObject* WorldContextObject); // Function Engine.KismetSystemLibrary.IsDedicatedServer // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300c370
	bool IsControllerAssignedToGamepad(int32_t ControllerId); // Function Engine.KismetSystemLibrary.IsControllerAssignedToGamepad // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300c2f0
	void HideAdBanner(); // Function Engine.KismetSystemLibrary.HideAdBanner // Final|Native|Static|Public|BlueprintCallable // @ game+0x300b100
	bool GetVolumeButtonsHandledBySystem(); // Function Engine.KismetSystemLibrary.GetVolumeButtonsHandledBySystem // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300a1b0
	struct FString GetUniqueDeviceId(); // Function Engine.KismetSystemLibrary.GetUniqueDeviceId // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3009b00
	bool GetSupportedFullscreenResolutions(struct TArray<struct FIntPoint> Resolutions); // Function Engine.KismetSystemLibrary.GetSupportedFullscreenResolutions // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3009700
	int32_t GetRenderingMaterialQualityLevel(); // Function Engine.KismetSystemLibrary.GetRenderingMaterialQualityLevel // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30092e0
	int32_t GetRenderingDetailMode(); // Function Engine.KismetSystemLibrary.GetRenderingDetailMode // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30092b0
	struct TArray<struct FString> GetPreferredLanguages(); // Function Engine.KismetSystemLibrary.GetPreferredLanguages // Final|Native|Static|Public|BlueprintCallable // @ game+0x3009120
	struct FString GetPlatformUserName(); // Function Engine.KismetSystemLibrary.GetPlatformUserName // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3009080
	int32_t GetObjectNameAsCrc32(struct UObject* Object); // Function Engine.KismetSystemLibrary.GetObjectNameAsCrc32 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3008fd0
	struct FString GetObjectName(struct UObject* Object); // Function Engine.KismetSystemLibrary.GetObjectName // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3008ef0
	int32_t GetMaxShadowCascades(); // Function Engine.KismetSystemLibrary.GetMaxShadowCascades // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3008be0
	struct FString GetLocalCurrencySymbol(); // Function Engine.KismetSystemLibrary.GetLocalCurrencySymbol // Final|Native|Static|Public|BlueprintCallable // @ game+0x3008ab0
	struct FString GetLocalCurrencyCode(); // Function Engine.KismetSystemLibrary.GetLocalCurrencyCode // Final|Native|Static|Public|BlueprintCallable // @ game+0x3008a10
	float GetGameTimeInSeconds(struct UObject* WorldContextObject); // Function Engine.KismetSystemLibrary.GetGameTimeInSeconds // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3008640
	struct FString GetGameName(); // Function Engine.KismetSystemLibrary.GetGameName // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x30085a0
	struct FString GetEngineVersion(); // Function Engine.KismetSystemLibrary.GetEngineVersion // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3008190
	struct FString GetDisplayName(struct UObject* Object); // Function Engine.KismetSystemLibrary.GetDisplayName // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3007fd0
	void GetComponentBounds(struct USceneComponent* Component, struct FVector Origin, struct FVector BoxExtent, float SphereRadius); // Function Engine.KismetSystemLibrary.GetComponentBounds // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3007ba0
	struct FString GetClassDisplayName(struct UClass* Class); // Function Engine.KismetSystemLibrary.GetClassDisplayName // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3007ac0
	int32_t GetAdIDCount(); // Function Engine.KismetSystemLibrary.GetAdIDCount // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3007610
	void GetActorListFromComponentList(struct TArray<struct UPrimitiveComponent*> ComponentList, struct UClass* ActorClassFilter, struct TArray<struct AActor*> OutActorList); // Function Engine.KismetSystemLibrary.GetActorListFromComponentList // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x30074b0
	void GetActorBounds(struct AActor* Actor, struct FVector Origin, struct FVector BoxExtent); // Function Engine.KismetSystemLibrary.GetActorBounds // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x30073a0
	void ForceCloseAdBanner(); // Function Engine.KismetSystemLibrary.ForceCloseAdBanner // Final|Native|Static|Public|BlueprintCallable // @ game+0x3006dd0
	void FlushPersistentDebugLines(struct UObject* WorldContextObject); // Function Engine.KismetSystemLibrary.FlushPersistentDebugLines // Final|Native|Static|Public|BlueprintCallable // @ game+0x3006d20
	void FlushDebugStrings(struct UObject* WorldContextObject); // Function Engine.KismetSystemLibrary.FlushDebugStrings // Final|Native|Static|Public|BlueprintCallable // @ game+0x3006c90
	void ExecuteConsoleCommand(struct UObject* WorldContextObject, struct FString Command, struct APlayerController* SpecificPlayer); // Function Engine.KismetSystemLibrary.ExecuteConsoleCommand // Final|Native|Static|Public|BlueprintCallable // @ game+0x3005b60
	void DrawDebugString(struct UObject* WorldContextObject, struct FVector TextLocation, struct FString Text, struct AActor* TestBaseActor, struct FLinearColor TextColor, float Duration); // Function Engine.KismetSystemLibrary.DrawDebugString // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x30043e0
	void DrawDebugSphere(struct UObject* WorldContextObject, struct FVector Center, float Radius, int32_t Segments, struct FLinearColor LineColor, float Duration); // Function Engine.KismetSystemLibrary.DrawDebugSphere // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x3004210
	void DrawDebugPoint(struct UObject* WorldContextObject, struct FVector Position, float Size, struct FLinearColor PointColor, float Duration); // Function Engine.KismetSystemLibrary.DrawDebugPoint // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x3004080
	void DrawDebugPlane(struct UObject* WorldContextObject, struct FPlane PlaneCoordinates, struct FVector Location, float Size, struct FLinearColor PlaneColor, float Duration); // Function Engine.KismetSystemLibrary.DrawDebugPlane // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x3003eb0
	void DrawDebugLine(struct UObject* WorldContextObject, struct FVector LineStart, struct FVector LineEnd, struct FLinearColor LineColor, float Duration, float Thickness); // Function Engine.KismetSystemLibrary.DrawDebugLine // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x3003cd0
	void DrawDebugFrustum(struct UObject* WorldContextObject, struct FTransform FrustumTransform, struct FLinearColor FrustumColor, float Duration); // Function Engine.KismetSystemLibrary.DrawDebugFrustum // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x3003b20
	void DrawDebugFloatHistoryTransform(struct UObject* WorldContextObject, struct FDebugFloatHistory FloatHistory, struct FTransform DrawTransform, struct FVector2D DrawSize, struct FLinearColor DrawColor, float Duration); // Function Engine.KismetSystemLibrary.DrawDebugFloatHistoryTransform // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x30038c0
	void DrawDebugFloatHistoryLocation(struct UObject* WorldContextObject, struct FDebugFloatHistory FloatHistory, struct FVector DrawLocation, struct FVector2D DrawSize, struct FLinearColor DrawColor, float Duration); // Function Engine.KismetSystemLibrary.DrawDebugFloatHistoryLocation // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x30036b0
	void DrawDebugCylinder(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, int32_t Segments, struct FLinearColor LineColor, float Duration); // Function Engine.KismetSystemLibrary.DrawDebugCylinder // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x30034a0
	void DrawDebugCoordinateSystem(struct UObject* WorldContextObject, struct FVector AxisLoc, struct FRotator AxisRot, float Scale, float Duration); // Function Engine.KismetSystemLibrary.DrawDebugCoordinateSystem // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x3003310
	void DrawDebugConeInDegrees(struct UObject* WorldContextObject, struct FVector Origin, struct FVector Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, struct FLinearColor LineColor, float Duration); // Function Engine.KismetSystemLibrary.DrawDebugConeInDegrees // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x3003070
	void DrawDebugCone(struct UObject* WorldContextObject, struct FVector Origin, struct FVector Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, struct FLinearColor LineColor); // Function Engine.KismetSystemLibrary.DrawDebugCone // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x3002e20
	void DrawDebugCircle(struct UObject* WorldContextObject, struct FVector Center, float Radius, int32_t NumSegments, struct FLinearColor LineColor, float Duration, float Thickness, struct FVector YAxis, struct FVector ZAxis, bool bDrawAxis); // Function Engine.KismetSystemLibrary.DrawDebugCircle // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x3002b40
	void DrawDebugCapsule(struct UObject* WorldContextObject, struct FVector Center, float HalfHeight, float Radius, struct FRotator Rotation, struct FLinearColor LineColor, float Duration); // Function Engine.KismetSystemLibrary.DrawDebugCapsule // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x3002920
	void DrawDebugCamera(struct ACameraActor* CameraActor, struct FLinearColor CameraColor, float Duration); // Function Engine.KismetSystemLibrary.DrawDebugCamera // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x3002820
	void DrawDebugBox(struct UObject* WorldContextObject, struct FVector Center, struct FVector Extent, struct FLinearColor LineColor, struct FRotator Rotation, float Duration); // Function Engine.KismetSystemLibrary.DrawDebugBox // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x3002630
	void DrawDebugArrow(struct UObject* WorldContextObject, struct FVector LineStart, struct FVector LineEnd, float ArrowSize, struct FLinearColor LineColor, float Duration); // Function Engine.KismetSystemLibrary.DrawDebugArrow // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x3002450
	bool DoesImplementInterface(struct UObject* TestObject, struct UClass* Interface); // Function Engine.KismetSystemLibrary.DoesImplementInterface // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3002200
	void Delay(struct UObject* WorldContextObject, float Duration, struct FLatentActionInfo LatentInfo); // Function Engine.KismetSystemLibrary.Delay // Final|Native|Static|Public|BlueprintCallable // @ game+0x3001940
	void CreateCopyForUndoBuffer(struct UObject* ObjectToModify); // Function Engine.KismetSystemLibrary.CreateCopyForUndoBuffer // Final|Native|Static|Public|BlueprintCallable // @ game+0x3000930
	struct UObject* Conv_InterfaceToObject(TScriptInterface<struct UInterface> Interface); // Function Engine.KismetSystemLibrary.Conv_InterfaceToObject // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x2fff770
	struct UObject* Conv_AssetToObject(struct UObject* Asset); // Function Engine.KismetSystemLibrary.Conv_AssetToObject // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x2ffe6a0
	struct UClass* Conv_AssetClassToClass(struct UClass* AssetClass); // Function Engine.KismetSystemLibrary.Conv_AssetClassToClass // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x2ffe5c0
	void ControlScreensaver(bool bAllowScreenSaver); // Function Engine.KismetSystemLibrary.ControlScreensaver // Final|Native|Static|Public|BlueprintCallable // @ game+0x2ffe160
	bool ComponentOverlapComponents_NEW(struct UPrimitiveComponent* Component, struct FTransform ComponentTransform, struct TArray<char> ObjectTypes, struct UClass* ComponentClassFilter, struct TArray<struct AActor*> ActorsToIgnore, struct TArray<struct UPrimitiveComponent*> OutComponents); // Function Engine.KismetSystemLibrary.ComponentOverlapComponents_NEW // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ffdb00
	bool ComponentOverlapComponents_DEPRECATED(struct UPrimitiveComponent* Component, struct FTransform ComponentTransform, char Filter, struct UClass* ComponentClassFilter, struct TArray<struct AActor*> ActorsToIgnore, struct TArray<struct UPrimitiveComponent*> OutComponents); // Function Engine.KismetSystemLibrary.ComponentOverlapComponents_DEPRECATED // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ffd890
	bool ComponentOverlapActors_NEW(struct UPrimitiveComponent* Component, struct FTransform ComponentTransform, struct TArray<char> ObjectTypes, struct UClass* ActorClassFilter, struct TArray<struct AActor*> ActorsToIgnore, struct TArray<struct AActor*> OutActors); // Function Engine.KismetSystemLibrary.ComponentOverlapActors_NEW // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ffd5f0
	bool ComponentOverlapActors_DEPRECATED(struct UPrimitiveComponent* Component, struct FTransform ComponentTransform, char Filter, struct UClass* ActorClassFilter, struct TArray<struct AActor*> ActorsToIgnore, struct TArray<struct AActor*> OutActors); // Function Engine.KismetSystemLibrary.ComponentOverlapActors_DEPRECATED // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ffd380
	void CollectGarbage(); // Function Engine.KismetSystemLibrary.CollectGarbage // Final|Native|Static|Public|BlueprintCallable // @ game+0x2ffd360
	bool CapsuleTraceSingleForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, struct TArray<char> ObjectTypes, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, char DrawDebugType, struct FHitResult OutHit, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.CapsuleTraceSingleForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ffc1e0
	bool CapsuleTraceSingleByObject_DEPRECATED(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, struct TArray<char> ObjectsToTrace, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, char DrawDebugType, struct FHitResult OutHit, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.CapsuleTraceSingleByObject_DEPRECATED // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ffbdf0
	bool CapsuleTraceSingle_NEW(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, char TraceChannel, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, char DrawDebugType, struct FHitResult OutHit, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.CapsuleTraceSingle_NEW // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ffc980
	bool CapsuleTraceSingle_DEPRECATED(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, char TraceChannel, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, char DrawDebugType, struct FHitResult OutHit, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.CapsuleTraceSingle_DEPRECATED // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ffc5d0
	bool CapsuleTraceMultiForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, struct TArray<char> ObjectTypes, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, char DrawDebugType, struct TArray<struct FHitResult> OutHits, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.CapsuleTraceMultiForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ffb360
	bool CapsuleTraceMultiByObject_DEPRECATED(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, struct TArray<char> ObjectsToTrace, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, char DrawDebugType, struct TArray<struct FHitResult> OutHits, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.CapsuleTraceMultiByObject_DEPRECATED // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ffafb0
	bool CapsuleTraceMulti_NEW(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, char TraceChannel, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, char DrawDebugType, struct TArray<struct FHitResult> OutHits, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.CapsuleTraceMulti_NEW // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ffba80
	bool CapsuleTraceMulti_DEPRECATED(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, char TraceChannel, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, char DrawDebugType, struct TArray<struct FHitResult> OutHits, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.CapsuleTraceMulti_DEPRECATED // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ffb710
	bool CapsuleOverlapComponents_NEW(struct UObject* WorldContextObject, struct FVector CapsulePos, float Radius, float HalfHeight, struct TArray<char> ObjectTypes, struct UClass* ComponentClassFilter, struct TArray<struct AActor*> ActorsToIgnore, struct TArray<struct UPrimitiveComponent*> OutComponents); // Function Engine.KismetSystemLibrary.CapsuleOverlapComponents_NEW // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2fface0
	bool CapsuleOverlapComponents_DEPRECATED(struct UObject* WorldContextObject, struct FVector CapsulePos, float Radius, float HalfHeight, char Filter, struct UClass* ComponentClassFilter, struct TArray<struct AActor*> ActorsToIgnore, struct TArray<struct UPrimitiveComponent*> OutComponents); // Function Engine.KismetSystemLibrary.CapsuleOverlapComponents_DEPRECATED // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ffaa50
	bool CapsuleOverlapActors_NEW(struct UObject* WorldContextObject, struct FVector CapsulePos, float Radius, float HalfHeight, struct TArray<char> ObjectTypes, struct UClass* ActorClassFilter, struct TArray<struct AActor*> ActorsToIgnore, struct TArray<struct AActor*> OutActors); // Function Engine.KismetSystemLibrary.CapsuleOverlapActors_NEW // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ffa780
	bool CapsuleOverlapActors_DEPRECATED(struct UObject* WorldContextObject, struct FVector CapsulePos, float Radius, float HalfHeight, char Filter, struct UClass* ActorClassFilter, struct TArray<struct AActor*> ActorsToIgnore, struct TArray<struct AActor*> OutActors); // Function Engine.KismetSystemLibrary.CapsuleOverlapActors_DEPRECATED // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ffa4f0
	bool BoxTraceSingleForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, struct TArray<char> ObjectTypes, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, char DrawDebugType, struct FHitResult OutHit, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.BoxTraceSingleForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ff7ae0
	bool BoxTraceSingle(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, char TraceChannel, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, char DrawDebugType, struct FHitResult OutHit, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.BoxTraceSingle // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ff7720
	bool BoxTraceMultiForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, struct TArray<char> ObjectTypes, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, char DrawDebugType, struct TArray<struct FHitResult> OutHits, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.BoxTraceMultiForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ff7330
	bool BoxTraceMulti(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, char TraceChannel, bool bTraceComplex, struct TArray<struct AActor*> ActorsToIgnore, char DrawDebugType, struct TArray<struct FHitResult> OutHits, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.BoxTraceMulti // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ff6fa0
	bool BoxOverlapComponents_NEW(struct UObject* WorldContextObject, struct FVector BoxPos, struct FVector Extent, struct TArray<char> ObjectTypes, struct UClass* ComponentClassFilter, struct TArray<struct AActor*> ActorsToIgnore, struct TArray<struct UPrimitiveComponent*> OutComponents); // Function Engine.KismetSystemLibrary.BoxOverlapComponents_NEW // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ff6d00
	bool BoxOverlapComponents_DEPRECATED(struct UObject* WorldContextObject, struct FVector BoxPos, struct FVector Extent, char Filter, struct UClass* ComponentClassFilter, struct TArray<struct AActor*> ActorsToIgnore, struct TArray<struct UPrimitiveComponent*> OutComponents); // Function Engine.KismetSystemLibrary.BoxOverlapComponents_DEPRECATED // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ff6aa0
	bool BoxOverlapActors_NEW(struct UObject* WorldContextObject, struct FVector BoxPos, struct FVector BoxExtent, struct TArray<char> ObjectTypes, struct UClass* ActorClassFilter, struct TArray<struct AActor*> ActorsToIgnore, struct TArray<struct AActor*> OutActors); // Function Engine.KismetSystemLibrary.BoxOverlapActors_NEW // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ff6800
	bool BoxOverlapActors_DEPRECATED(struct UObject* WorldContextObject, struct FVector BoxPos, struct FVector BoxExtent, char Filter, struct UClass* ActorClassFilter, struct TArray<struct AActor*> ActorsToIgnore, struct TArray<struct AActor*> OutActors); // Function Engine.KismetSystemLibrary.BoxOverlapActors_DEPRECATED // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x2ff65a0
	struct FDebugFloatHistory AddFloatHistorySample(float Value, struct FDebugFloatHistory FloatHistory); // Function Engine.KismetSystemLibrary.AddFloatHistorySample // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x2ff3370
};

// Class Engine.KismetTextLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetTextLibrary : UBlueprintFunctionLibrary {

	struct FText TextTrimTrailing(struct FText InText); // Function Engine.KismetTextLibrary.TextTrimTrailing // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3024620
	struct FText TextTrimPrecedingAndTrailing(struct FText InText); // Function Engine.KismetTextLibrary.TextTrimPrecedingAndTrailing // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3024550
	struct FText TextTrimPreceding(struct FText InText); // Function Engine.KismetTextLibrary.TextTrimPreceding // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3024480
	bool TextIsTransient(struct FText InText); // Function Engine.KismetTextLibrary.TextIsTransient // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x30243d0
	bool TextIsEmpty(struct FText InText); // Function Engine.KismetTextLibrary.TextIsEmpty // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3024320
	bool TextIsCultureInvariant(struct FText InText); // Function Engine.KismetTextLibrary.TextIsCultureInvariant // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3024270
	bool NotEqual_TextText(struct FText A, struct FText B); // Function Engine.KismetTextLibrary.NotEqual_TextText // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3018ca0
	bool NotEqual_IgnoreCase_TextText(struct FText A, struct FText B); // Function Engine.KismetTextLibrary.NotEqual_IgnoreCase_TextText // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3018620
	struct FText GetEmptyText(); // Function Engine.KismetTextLibrary.GetEmptyText // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3008140
	struct FText Format(struct FText InPattern, struct TArray<struct FFormatTextArgument> InArgs); // Function Engine.KismetTextLibrary.Format // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3006df0
	bool FindTextInLocalizationTable(struct FString Namespace, struct FString Key, struct FText OutText); // Function Engine.KismetTextLibrary.FindTextInLocalizationTable // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3006a20
	bool EqualEqual_TextText(struct FText A, struct FText B); // Function Engine.KismetTextLibrary.EqualEqual_TextText // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x30056f0
	bool EqualEqual_IgnoreCase_TextText(struct FText A, struct FText B); // Function Engine.KismetTextLibrary.EqualEqual_IgnoreCase_TextText // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3004ee0
	struct FString Conv_TextToString(struct FText InText); // Function Engine.KismetTextLibrary.Conv_TextToString // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x2ffffe0
	struct FText Conv_StringToText(struct FString InString); // Function Engine.KismetTextLibrary.Conv_StringToText // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ffff20
	struct FText Conv_NameToText(struct FName InName); // Function Engine.KismetTextLibrary.Conv_NameToText // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2fffa10
	struct FText Conv_IntToText(int32_t Value, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits); // Function Engine.KismetTextLibrary.Conv_IntToText // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2fff5f0
	struct FText Conv_FloatToText(float Value, char RoundingMode, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits); // Function Engine.KismetTextLibrary.Conv_FloatToText // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ffefe0
	struct FText Conv_ByteToText(char Value); // Function Engine.KismetTextLibrary.Conv_ByteToText // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ffec70
	struct FText Conv_BoolToText(bool InBool); // Function Engine.KismetTextLibrary.Conv_BoolToText // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ffe9e0
	struct FText AsTimespan_Timespan(struct FTimespan InTimespan); // Function Engine.KismetTextLibrary.AsTimespan_Timespan // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ff5e50
	struct FText AsTime_DateTime(struct FDateTime In); // Function Engine.KismetTextLibrary.AsTime_DateTime // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ff5da0
	struct FText AsPercent_Float(float Value, char RoundingMode, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits); // Function Engine.KismetTextLibrary.AsPercent_Float // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ff5b70
	struct FText AsDateTime_DateTime(struct FDateTime In); // Function Engine.KismetTextLibrary.AsDateTime_DateTime // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ff5a10
	struct FText AsDate_DateTime(struct FDateTime InDateTime); // Function Engine.KismetTextLibrary.AsDate_DateTime // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x2ff5ac0
	struct FText AsCurrency_Integer(int32_t Value, char RoundingMode, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits, struct FString CurrencyCode); // Function Engine.KismetTextLibrary.AsCurrency_Integer // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ff5790
	struct FText AsCurrency_Float(float Value, char RoundingMode, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits, struct FString CurrencyCode); // Function Engine.KismetTextLibrary.AsCurrency_Float // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x2ff5500
};

// Class Engine.LoadingPerfBPFuncLib
// Size: 0x28 (Inherited: 0x28)
struct ULoadingPerfBPFuncLib : UBlueprintFunctionLibrary {

	void WriteTimings(); // Function Engine.LoadingPerfBPFuncLib.WriteTimings // Final|Native|Static|Public|BlueprintCallable // @ game+0x30261c0
	void MarkEndStreaming(); // Function Engine.LoadingPerfBPFuncLib.MarkEndStreaming // Final|Native|Static|Public|BlueprintCallable // @ game+0x3015690
};

// Class Engine.WorldComposition
// Size: 0xb8 (Inherited: 0x28)
struct UWorldComposition : UObject {
	char UnknownData_28[0x70]; // 0x28(0x70)
	struct TArray<struct ULevelStreaming*> TilesStreaming; // 0x98(0x10)
	double TilesStreamingTimeThreshold; // 0xa8(0x08)
	bool bLoadAllTilesDuringCinematic; // 0xb0(0x01)
	bool bRebaseOriginIn3DSpace; // 0xb1(0x01)
	char UnknownData_B2[0x2]; // 0xb2(0x02)
	float RebaseOriginDistance; // 0xb4(0x04)
};

// Class Engine.NestedWorldComposition
// Size: 0xd8 (Inherited: 0xb8)
struct UNestedWorldComposition : UWorldComposition {
	char UnknownData_B8[0x20]; // 0xb8(0x20)
};

// Class Engine.NestedWorldCompositionFunctionLib
// Size: 0x28 (Inherited: 0x28)
struct UNestedWorldCompositionFunctionLib : UBlueprintFunctionLibrary {

	void TriggerManualNestedLevelUnload(struct UObject* WorldContextObject, struct FName PackageName); // Function Engine.NestedWorldCompositionFunctionLib.TriggerManualNestedLevelUnload // Final|Native|Static|Public|BlueprintCallable // @ game+0x3025000
	void TriggerManualNestedLevelLoad(struct UObject* WorldContextObject, struct FName PackageName); // Function Engine.NestedWorldCompositionFunctionLib.TriggerManualNestedLevelLoad // Final|Native|Static|Public|BlueprintCallable // @ game+0x3024f50
	bool IsNestedLevelVisibleRecursive(struct UObject* WorldContextObject, struct FName PackageName); // Function Engine.NestedWorldCompositionFunctionLib.IsNestedLevelVisibleRecursive // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300c650
	bool IsNestedLevelVisible(struct UObject* WorldContextObject, struct FName PackageName); // Function Engine.NestedWorldCompositionFunctionLib.IsNestedLevelVisible // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x300c590
};

// Class Engine.NetPushModelHelpers
// Size: 0x28 (Inherited: 0x28)
struct UNetPushModelHelpers : UBlueprintFunctionLibrary {

	void MarkPropertyDirtyFromRepIndex(struct UObject* Object, int32_t RepIndex, struct FName PropertyName); // Function Engine.NetPushModelHelpers.MarkPropertyDirtyFromRepIndex // Final|Native|Static|Public|BlueprintCallable // @ game+0x3015760
	void MarkPropertyDirty(struct UObject* Object, struct FName PropertyName); // Function Engine.NetPushModelHelpers.MarkPropertyDirty // Final|Native|Static|Public|BlueprintCallable // @ game+0x30156b0
};

// Class Engine.ParticleWarningFunctions
// Size: 0x28 (Inherited: 0x28)
struct UParticleWarningFunctions : UBlueprintFunctionLibrary {

	struct TArray<struct FString> RetrieveInfoOnEmitterWithShortQuarterResArea(struct UParticleSystemComponent* Component, float ShortQuarterRes); // Function Engine.ParticleWarningFunctions.RetrieveInfoOnEmitterWithShortQuarterResArea // Final|Native|Static|Public|BlueprintCallable // @ game+0x301ca60
	struct TArray<struct FString> RetrieveInfoOnEmitterWithLongNearTransition(struct UParticleSystemComponent* Component, float LongNearTransition); // Function Engine.ParticleWarningFunctions.RetrieveInfoOnEmitterWithLongNearTransition // Final|Native|Static|Public|BlueprintCallable // @ game+0x301c930
	struct TArray<struct FString> RetrieveInfoOnEmitterWithLongFarTransition(struct UParticleSystemComponent* Component, float LongFarTransition); // Function Engine.ParticleWarningFunctions.RetrieveInfoOnEmitterWithLongFarTransition // Final|Native|Static|Public|BlueprintCallable // @ game+0x301c800
	struct TArray<struct FString> RetrieveInfoOnEmittersWithoutPerVertexLighting(struct UParticleSystemComponent* Component); // Function Engine.ParticleWarningFunctions.RetrieveInfoOnEmittersWithoutPerVertexLighting // Final|Native|Static|Public|BlueprintCallable // @ game+0x301d240
	struct TArray<struct FString> RetrieveInfoOnEmittersWithLowAlphaThreshold(struct UParticleSystemComponent* Component, float LowAlphaThreshold); // Function Engine.ParticleWarningFunctions.RetrieveInfoOnEmittersWithLowAlphaThreshold // Final|Native|Static|Public|BlueprintCallable // @ game+0x301d110
	struct TArray<struct FString> RetrieveInfoOnEmittersWithLoopZero(struct UParticleSystemComponent* Component); // Function Engine.ParticleWarningFunctions.RetrieveInfoOnEmittersWithLoopZero // Final|Native|Static|Public|BlueprintCallable // @ game+0x301d030
	struct TArray<struct FString> RetrieveInfoOnEmittersWithKillOnCompleteUnticked(struct UParticleSystemComponent* Component); // Function Engine.ParticleWarningFunctions.RetrieveInfoOnEmittersWithKillOnCompleteUnticked // Final|Native|Static|Public|BlueprintCallable // @ game+0x301cf50
	struct TArray<struct FString> RetrieveInfoOnEmittersWithHighSpawnRate(struct UParticleSystemComponent* Component, int32_t HighSpawnRate); // Function Engine.ParticleWarningFunctions.RetrieveInfoOnEmittersWithHighSpawnRate // Final|Native|Static|Public|BlueprintCallable // @ game+0x301ce30
	struct TArray<struct FString> RetrieveInfoOnEmittersWithDurationZero(struct UParticleSystemComponent* Component); // Function Engine.ParticleWarningFunctions.RetrieveInfoOnEmittersWithDurationZero // Final|Native|Static|Public|BlueprintCallable // @ game+0x301cd50
	struct TArray<struct FString> RetrieveInfoOnEmittersUsingMaxDrawCount(struct UParticleSystemComponent* Component); // Function Engine.ParticleWarningFunctions.RetrieveInfoOnEmittersUsingMaxDrawCount // Final|Native|Static|Public|BlueprintCallable // @ game+0x301cc70
	struct TArray<struct FString> RetrieveInfoOnEmittersOnCPU(struct UParticleSystemComponent* Component); // Function Engine.ParticleWarningFunctions.RetrieveInfoOnEmittersOnCPU // Final|Native|Static|Public|BlueprintCallable // @ game+0x301cb90
};

// Class Engine.SkeletalMeshMergeBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct USkeletalMeshMergeBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	struct USkeletalMesh* MergeSkeletalMeshesWithMorphTargets(struct TArray<struct USkeletalMesh*> Meshes, struct TArray<struct FName> MorphTargetNames, struct TArray<float> MorphTargetWeights); // Function Engine.SkeletalMeshMergeBlueprintFunctionLibrary.MergeSkeletalMeshesWithMorphTargets // Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3015ef0
	struct USkeletalMesh* MergeSkeletalMeshes(struct TArray<struct USkeletalMesh*> Meshes); // Function Engine.SkeletalMeshMergeBlueprintFunctionLibrary.MergeSkeletalMeshes // Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3015e40
};

// Class Engine.VisualLoggerKismetLibrary
// Size: 0x28 (Inherited: 0x28)
struct UVisualLoggerKismetLibrary : UBlueprintFunctionLibrary {

	void LogText(struct UObject* WorldContextObject, struct FString Text, struct FName LogCategory); // Function Engine.VisualLoggerKismetLibrary.LogText // Final|Native|Static|Public|BlueprintCallable // @ game+0x3013880
	void LogLocation(struct UObject* WorldContextObject, struct FVector Location, struct FString Text, struct FLinearColor ObjectColor, float Radius, struct FName LogCategory); // Function Engine.VisualLoggerKismetLibrary.LogLocation // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x3013680
	void LogBox(struct UObject* WorldContextObject, struct FBox BoxShape, struct FString Text, struct FLinearColor ObjectColor, struct FName LogCategory); // Function Engine.VisualLoggerKismetLibrary.LogBox // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x30134a0
};

// Class Engine.AnimBlueprintGeneratedClass
// Size: 0x290 (Inherited: 0x228)
struct UAnimBlueprintGeneratedClass : UBlueprintGeneratedClass {
	struct TArray<struct FBakedAnimationStateMachine> BakedStateMachines; // 0x228(0x10)
	struct USkeleton* TargetSkeleton; // 0x238(0x08)
	struct TArray<struct FAnimNotifyEvent> AnimNotifies; // 0x240(0x10)
	int32_t RootAnimNodeIndex; // 0x250(0x04)
	char UnknownData_254[0x1c]; // 0x254(0x1c)
	struct TArray<struct FAnimGroupInfo> Groups; // 0x270(0x10)
	struct TArray<struct FName> SkeletonSlotNames; // 0x280(0x10)
};

// Class Engine.BodySetup
// Size: 0x2c8 (Inherited: 0x28)
struct UBodySetup : UObject {
	struct FKAggregateGeom AggGeom; // 0x28(0x48)
	struct FName BoneName; // 0x70(0x08)
	char PhysicsType; // 0x78(0x01)
	char UnknownData_79[0x3]; // 0x79(0x03)
	char bCookComplexGeometryOnServer : 1; // 0x7c(0x01)
	char bConsiderForBounds : 1; // 0x7c(0x01)
	char bMeshCollideAll : 1; // 0x7c(0x01)
	char bDoubleSidedGeometry : 1; // 0x7c(0x01)
	char bGenerateNonMirroredCollision : 1; // 0x7c(0x01)
	char bSharedCookedData : 1; // 0x7c(0x01)
	char bGenerateMirroredCollision : 1; // 0x7c(0x01)
	char UnknownData_7D[0x3]; // 0x7d(0x03)
	struct UPhysicalMaterial* PhysMaterial; // 0x80(0x08)
	char CollisionReponse; // 0x88(0x01)
	char CollisionTraceFlag; // 0x89(0x01)
	char UnknownData_8A[0x6]; // 0x8a(0x06)
	struct FBodyInstance DefaultInstance; // 0x90(0x180)
	struct FWalkableSlopeOverride WalkableSlopeOverride; // 0x210(0x08)
	struct FVector BuildScale3D; // 0x218(0x0c)
	char UnknownData_224[0xa4]; // 0x224(0xa4)
};

// Class Engine.BodySetup2D
// Size: 0x2f8 (Inherited: 0x2c8)
struct UBodySetup2D : UBodySetup {
	struct FAggregateGeometry2D AggGeom2D; // 0x2c8(0x30)
};

// Class Engine.BoneMaskFilter
// Size: 0x38 (Inherited: 0x28)
struct UBoneMaskFilter : UObject {
	struct TArray<struct FInputBlendPose> BlendPoses; // 0x28(0x10)
};

// Class Engine.BookMark
// Size: 0x50 (Inherited: 0x28)
struct UBookMark : UObject {
	struct FVector Location; // 0x28(0x0c)
	struct FRotator Rotation; // 0x34(0x0c)
	struct TArray<struct FString> HiddenLevels; // 0x40(0x10)
};

// Class Engine.BookMark2D
// Size: 0x38 (Inherited: 0x28)
struct UBookMark2D : UObject {
	float Zoom2D; // 0x28(0x04)
	struct FIntPoint Location; // 0x2c(0x08)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// Class Engine.Breakpoint
// Size: 0x40 (Inherited: 0x28)
struct UBreakpoint : UObject {
	char bEnabled : 1; // 0x28(0x01)
	char UnknownData_28_1 : 7; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct UEdGraphNode* Node; // 0x30(0x08)
	char bStepOnce : 1; // 0x38(0x01)
	char bStepOnce_WasPreviouslyDisabled : 1; // 0x38(0x01)
	char bStepOnce_RemoveAfterHit : 1; // 0x38(0x01)
	char UnknownData_38_3 : 5; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// Class Engine.BrushBuilder
// Size: 0x80 (Inherited: 0x28)
struct UBrushBuilder : UObject {
	struct FString BitmapFilename; // 0x28(0x10)
	struct FString ToolTip; // 0x38(0x10)
	char NotifyBadParams : 1; // 0x48(0x01)
	char UnknownData_48_1 : 7; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
	struct TArray<struct FVector> Vertices; // 0x50(0x10)
	struct TArray<struct FBuilderPoly> Polys; // 0x60(0x10)
	struct FName Layer; // 0x70(0x08)
	char MergeCoplanars : 1; // 0x78(0x01)
	char UnknownData_78_1 : 7; // 0x78(0x01)
	char UnknownData_79[0x7]; // 0x79(0x07)
};

// Class Engine.ButtonStyleAsset
// Size: 0x2d0 (Inherited: 0x28)
struct UButtonStyleAsset : UObject {
	struct FButtonStyle ButtonStyle; // 0x28(0x2a8)
};

// Class Engine.CameraAnim
// Size: 0x5b0 (Inherited: 0x28)
struct UCameraAnim : UObject {
	struct UInterpGroup* CameraInterpGroup; // 0x28(0x08)
	float AnimLength; // 0x30(0x04)
	struct FBox BoundingBox; // 0x34(0x1c)
	char bRelativeToInitialTransform : 1; // 0x50(0x01)
	char UnknownData_50_1 : 7; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	float BaseFOV; // 0x54(0x04)
	char UnknownData_58[0x8]; // 0x58(0x08)
	struct FPostProcessSettings BasePostProcessSettings; // 0x60(0x540)
	float BasePostProcessBlendWeight; // 0x5a0(0x04)
	char UnknownData_5A4[0xc]; // 0x5a4(0x0c)
};

// Class Engine.CameraAnimInst
// Size: 0x120 (Inherited: 0x28)
struct UCameraAnimInst : UObject {
	struct UCameraAnim* CamAnim; // 0x28(0x08)
	struct UInterpGroupInst* InterpGroupInst; // 0x30(0x08)
	char UnknownData_38[0x1c]; // 0x38(0x1c)
	float PlayRate; // 0x54(0x04)
	char UnknownData_58[0x10]; // 0x58(0x10)
	struct UInterpTrackMove* MoveTrack; // 0x68(0x08)
	struct UInterpTrackInstMove* MoveInst; // 0x70(0x08)
	struct UCurveFloat* BlendInCurve; // 0x78(0x08)
	char PlaySpace; // 0x80(0x01)
	char UnknownData_81[0x9f]; // 0x81(0x9f)

	void Stop(bool bImmediate); // Function Engine.CameraAnimInst.Stop // Final|Native|Public|BlueprintCallable // @ game+0x3022e90
	void SetScale(float NewDuration); // Function Engine.CameraAnimInst.SetScale // Final|Native|Public|BlueprintCallable // @ game+0x301f7a0
	void SetDuration(float NewDuration); // Function Engine.CameraAnimInst.SetDuration // Final|Native|Public|BlueprintCallable // @ game+0x301ee90
};

// Class Engine.CameraModifier_CameraShake
// Size: 0x60 (Inherited: 0x48)
struct UCameraModifier_CameraShake : UCameraModifier {
	struct TArray<struct UCameraShake*> ActiveShakes; // 0x48(0x10)
	float SplitScreenShakeScale; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.CameraViewTargetInterface
// Size: 0x28 (Inherited: 0x28)
struct UCameraViewTargetInterface : UInterface {
};

// Class Engine.Canvas
// Size: 0xf0 (Inherited: 0x28)
struct UCanvas : UObject {
	float OrgX; // 0x28(0x04)
	float OrgY; // 0x2c(0x04)
	float ClipX; // 0x30(0x04)
	float ClipY; // 0x34(0x04)
	struct FColor DrawColor; // 0x38(0x04)
	char bCenterX : 1; // 0x3c(0x01)
	char bCenterY : 1; // 0x3c(0x01)
	char bNoSmooth : 1; // 0x3c(0x01)
	char UnknownData_3C_3 : 5; // 0x3c(0x01)
	char UnknownData_3D[0x3]; // 0x3d(0x03)
	int32_t SizeX; // 0x40(0x04)
	int32_t SizeY; // 0x44(0x04)
	char UnknownData_48[0x8]; // 0x48(0x08)
	struct FPlane ColorModulate; // 0x50(0x10)
	struct UTexture2D* DefaultTexture; // 0x60(0x08)
	struct UTexture2D* GradientTexture0; // 0x68(0x08)
	struct UReporterGraph* ReporterGraph; // 0x70(0x08)
	char UnknownData_78[0x78]; // 0x78(0x78)

	struct FVector2D K2_TextSize(struct UFont* RenderFont, struct FString RenderText, struct FVector2D Scale); // Function Engine.Canvas.K2_TextSize // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x300f880
	struct FVector2D K2_StrLen(struct UFont* RenderFont, struct FString RenderText); // Function Engine.Canvas.K2_StrLen // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x300f790
	struct FVector K2_Project(struct FVector WorldLocation); // Function Engine.Canvas.K2_Project // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x300f410
	void K2_DrawTriangle(struct UTexture* RenderTexture, struct TArray<struct FCanvasUVTri> Triangles); // Function Engine.Canvas.K2_DrawTriangle // Final|Native|Public|BlueprintCallable // @ game+0x300e5d0
	void K2_DrawTextWithFontInfo(struct FSlateFontInfo FontInfo, struct FString RenderText, struct FVector2D ScreenPosition, struct FVector2D Scale, struct FLinearColor RenderColor, float Kerning, struct FLinearColor ShadowColor, struct FVector2D ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, struct FLinearColor OutlineColor); // Function Engine.Canvas.K2_DrawTextWithFontInfo // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x300df00
	void K2_DrawTexture(struct UTexture* RenderTexture, struct FVector2D ScreenPosition, struct FVector2D ScreenSize, struct FVector2D CoordinatePosition, struct FVector2D CoordinateSize, struct FLinearColor RenderColor, char BlendMode, float Rotation, struct FVector2D PivotPoint); // Function Engine.Canvas.K2_DrawTexture // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x300e350
	void K2_DrawText(struct UFont* RenderFont, struct FString RenderText, struct FVector2D ScreenPosition, struct FVector2D Scale, struct FLinearColor RenderColor, float Kerning, struct FLinearColor ShadowColor, struct FVector2D ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, struct FLinearColor OutlineColor); // Function Engine.Canvas.K2_DrawText // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x300db60
	void K2_DrawPolygon(struct UTexture* RenderTexture, struct FVector2D ScreenPosition, struct FVector2D Radius, int32_t NumberOfSides, struct FLinearColor RenderColor); // Function Engine.Canvas.K2_DrawPolygon // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x300d9d0
	void K2_DrawMaterialTriangle(struct UMaterialInterface* RenderMaterial, struct TArray<struct FCanvasUVTri> Triangles); // Function Engine.Canvas.K2_DrawMaterialTriangle // Final|Native|Public|BlueprintCallable // @ game+0x300d890
	void K2_DrawMaterial(struct UMaterialInterface* RenderMaterial, struct FVector2D ScreenPosition, struct FVector2D ScreenSize, struct FVector2D CoordinatePosition, struct FVector2D CoordinateSize, float Rotation, struct FVector2D PivotPoint); // Function Engine.Canvas.K2_DrawMaterial // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x300d670
	void K2_DrawLine(struct FVector2D ScreenPositionA, struct FVector2D ScreenPositionB, float Thickness, struct FLinearColor RenderColor); // Function Engine.Canvas.K2_DrawLine // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x300d520
	void K2_DrawBox(struct FVector2D ScreenPosition, struct FVector2D ScreenSize, float Thickness); // Function Engine.Canvas.K2_DrawBox // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x300d420
	void K2_DrawBorder(struct UTexture* BorderTexture, struct UTexture* BackgroundTexture, struct UTexture* LeftBorderTexture, struct UTexture* RightBorderTexture, struct UTexture* TopBorderTexture, struct UTexture* BottomBorderTexture, struct FVector2D ScreenPosition, struct FVector2D ScreenSize, struct FVector2D CoordinatePosition, struct FVector2D CoordinateSize, struct FLinearColor RenderColor, struct FVector2D BorderScale, struct FVector2D BackgroundScale, float Rotation, struct FVector2D PivotPoint, struct FVector2D CornerSize); // Function Engine.Canvas.K2_DrawBorder // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x300cfe0
	void K2_Deproject(struct FVector2D ScreenPosition, struct FVector WorldOrigin, struct FVector WorldDirection); // Function Engine.Canvas.K2_Deproject // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x300cec0
	void DrawTextures(struct TArray<struct FTextureRenderData> RenderDatas); // Function Engine.Canvas.DrawTextures // Native|Public|HasOutParms // @ game+0x30045d0
};

// Class Engine.Channel
// Size: 0x68 (Inherited: 0x28)
struct UChannel : UObject {
	struct UNetConnection* Connection; // 0x28(0x08)
	char UnknownData_30[0x38]; // 0x30(0x38)
};

// Class Engine.ActorChannel
// Size: 0x260 (Inherited: 0x68)
struct UActorChannel : UChannel {
	struct AActor* Actor; // 0x68(0x08)
	char UnknownData_70[0xe8]; // 0x70(0xe8)
	struct TArray<struct UObject*> ObjectsRequiredForQueuedBunches; // 0x158(0x10)
	char UnknownData_168[0xf8]; // 0x168(0xf8)
};

// Class Engine.ControlChannel
// Size: 0x80 (Inherited: 0x68)
struct UControlChannel : UChannel {
	char UnknownData_68[0x18]; // 0x68(0x18)
};

// Class Engine.VoiceChannel
// Size: 0x90 (Inherited: 0x68)
struct UVoiceChannel : UChannel {
	char UnknownData_68[0x18]; // 0x68(0x18)
	int32_t BandwidthPerSecondReservationInBytes; // 0x80(0x04)
	char UnknownData_84[0x4]; // 0x84(0x04)
	float SaturationCooloffPeriodInSeconds; // 0x88(0x04)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
};

// Class Engine.CheatManager
// Size: 0x78 (Inherited: 0x28)
struct UCheatManager : UObject {
	struct ADebugCameraController* DebugCameraControllerRef; // 0x28(0x08)
	struct UClass* DebugCameraControllerClass; // 0x30(0x08)
	char UnknownData_38[0x40]; // 0x38(0x40)

	void WidgetReflector(); // Function Engine.CheatManager.WidgetReflector // Exec|Native|Public // @ game+0x30261a0
	void Walk(); // Function Engine.CheatManager.Walk // Exec|Native|Public // @ game+0x3026180
	void ViewSelf(); // Function Engine.CheatManager.ViewSelf // Exec|Native|Public // @ game+0x3026160
	void ViewPlayer(struct FString S); // Function Engine.CheatManager.ViewPlayer // Exec|Native|Public // @ game+0x30260b0
	void ViewClass(struct UClass* DesiredClass); // Function Engine.CheatManager.ViewClass // Exec|Native|Public // @ game+0x3026020
	void ViewActor(struct FName ActorName); // Function Engine.CheatManager.ViewActor // Exec|Native|Public // @ game+0x3025f90
	void ToggleDebugCamera(); // Function Engine.CheatManager.ToggleDebugCamera // Exec|Native|Public // @ game+0x3024cb0
	void ToggleAILogging(); // Function Engine.CheatManager.ToggleAILogging // Exec|Native|Public // @ game+0x3024c90
	void TextureAtlasVisualizer(); // Function Engine.CheatManager.TextureAtlasVisualizer // Exec|Native|Public // @ game+0x30246f0
	void TestCollisionDistance(); // Function Engine.CheatManager.TestCollisionDistance // Exec|Native|Public // @ game+0x30240d0
	void Teleport(); // Function Engine.CheatManager.Teleport // Exec|Native|Public // @ game+0x30240b0
	void Summon(struct FString ClassName); // Function Engine.CheatManager.Summon // Exec|Native|Public // @ game+0x30238f0
	void StreamLevelOut(struct FName PackageName); // Function Engine.CheatManager.StreamLevelOut // Exec|Native|Public // @ game+0x3022fb0
	void StreamLevelIn(struct FName PackageName); // Function Engine.CheatManager.StreamLevelIn // Exec|Native|Public // @ game+0x3022f20
	void Slomo(float T); // Function Engine.CheatManager.Slomo // Exec|Native|Public // @ game+0x3020400
	void SetWorldOrigin(); // Function Engine.CheatManager.SetWorldOrigin // Final|Exec|Native|Public // @ game+0x30200b0
	void SetNavDrawDistance(float DrawDistance); // Function Engine.CheatManager.SetNavDrawDistance // Final|Exec|Native|Public // @ game+0x301f320
	void SetMouseSensitivityToDefault(); // Function Engine.CheatManager.SetMouseSensitivityToDefault // Final|Exec|Native|Public // @ game+0x301f200
	void ServerToggleAILogging(); // Function Engine.CheatManager.ServerToggleAILogging // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x301e6e0
	void RebuildNavigation(); // Function Engine.CheatManager.RebuildNavigation // Exec|Native|Public // @ game+0x301c330
	void PlayersOnly(); // Function Engine.CheatManager.PlayersOnly // Exec|Native|Public // @ game+0x30196d0
	void OnlyLoadLevel(struct FName PackageName); // Function Engine.CheatManager.OnlyLoadLevel // Exec|Native|Public // @ game+0x3019060
	void LogLoc(); // Function Engine.CheatManager.LogLoc // Exec|Native|Public // @ game+0x3013660
	void InvertMouse(); // Function Engine.CheatManager.InvertMouse // Final|Exec|Native|Public // @ game+0x300c160
	void God(); // Function Engine.CheatManager.God // Exec|Native|Public // @ game+0x300a430
	void Ghost(); // Function Engine.CheatManager.Ghost // Exec|Native|Public // @ game+0x300a410
	void FreezeFrame(float Delay); // Function Engine.CheatManager.FreezeFrame // Exec|Native|Public // @ game+0x3007050
	void FontAtlasVisualizer(); // Function Engine.CheatManager.FontAtlasVisualizer // Exec|Native|Public // @ game+0x3006db0
	void Fly(); // Function Engine.CheatManager.Fly // Exec|Native|Public // @ game+0x3006d90
	void FlushLog(); // Function Engine.CheatManager.FlushLog // Exec|Native|Public // @ game+0x3006d00
	void DumpVoiceMutingState(); // Function Engine.CheatManager.DumpVoiceMutingState // Exec|Native|Public // @ game+0x30046d0
	void DumpPartyState(); // Function Engine.CheatManager.DumpPartyState // Exec|Native|Public // @ game+0x30046b0
	void DumpOnlineSessionState(); // Function Engine.CheatManager.DumpOnlineSessionState // Exec|Native|Public // @ game+0x3004690
	void DestroyTarget(); // Function Engine.CheatManager.DestroyTarget // Exec|Native|Public // @ game+0x3001ba0
	void DestroyPawns(struct UClass* aClass); // Function Engine.CheatManager.DestroyPawns // Exec|Native|Public // @ game+0x3001b10
	void DestroyAllPawnsExceptTarget(); // Function Engine.CheatManager.DestroyAllPawnsExceptTarget // Final|Exec|Native|Public // @ game+0x3001af0
	void DestroyAll(struct UClass* aClass); // Function Engine.CheatManager.DestroyAll // Exec|Native|Public // @ game+0x3001a60
	void DebugCapsuleSweepSize(float HalfHeight, float Radius); // Function Engine.CheatManager.DebugCapsuleSweepSize // Exec|Native|Public // @ game+0x3001430
	void DebugCapsuleSweepPawn(); // Function Engine.CheatManager.DebugCapsuleSweepPawn // Exec|Native|Public // @ game+0x3001410
	void DebugCapsuleSweepComplex(bool bTraceComplex); // Function Engine.CheatManager.DebugCapsuleSweepComplex // Exec|Native|Public // @ game+0x3001380
	void DebugCapsuleSweepClear(); // Function Engine.CheatManager.DebugCapsuleSweepClear // Exec|Native|Public // @ game+0x3001360
	void DebugCapsuleSweepChannel(char Channel); // Function Engine.CheatManager.DebugCapsuleSweepChannel // Exec|Native|Public // @ game+0x30012e0
	void DebugCapsuleSweepCapture(); // Function Engine.CheatManager.DebugCapsuleSweepCapture // Exec|Native|Public // @ game+0x30012c0
	void DebugCapsuleSweep(); // Function Engine.CheatManager.DebugCapsuleSweep // Exec|Native|Public // @ game+0x30012a0
	void DamageTarget(float DamageAmount); // Function Engine.CheatManager.DamageTarget // Final|Exec|Native|Public // @ game+0x3000e60
	void ChangeSize(float F); // Function Engine.CheatManager.ChangeSize // Exec|Native|Public // @ game+0x2ffcd30
	void BugItStringCreator(struct FVector ViewLocation, struct FRotator ViewRotation, struct FString GoString, struct FString LocString); // Function Engine.CheatManager.BugItStringCreator // Exec|Native|Public|HasOutParms|HasDefaults // @ game+0x2ff9080
	void BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll); // Function Engine.CheatManager.BugItGo // Exec|Native|Public // @ game+0x2ff8eb0
	void BugIt(struct FString ScreenShotDescription); // Function Engine.CheatManager.BugIt // Exec|Native|Public // @ game+0x2ff8e00
};

// Class Engine.CheckBoxStyleAsset
// Size: 0x618 (Inherited: 0x28)
struct UCheckBoxStyleAsset : UObject {
	struct FCheckBoxStyle CheckBoxStyle; // 0x28(0x5f0)
};

// Class Engine.PluginCommandlet
// Size: 0xa0 (Inherited: 0x80)
struct UPluginCommandlet : UCommandlet {
	char UnknownData_80[0x20]; // 0x80(0x20)
};

// Class Engine.SmokeTestCommandlet
// Size: 0x80 (Inherited: 0x80)
struct USmokeTestCommandlet : UCommandlet {
};

// Class Engine.Console
// Size: 0xf0 (Inherited: 0x28)
struct UConsole : UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
	struct ULocalPlayer* ConsoleTargetPlayer; // 0x38(0x08)
	struct UTexture2D* DefaultTexture_Black; // 0x40(0x08)
	struct UTexture2D* DefaultTexture_White; // 0x48(0x08)
	char UnknownData_50[0x18]; // 0x50(0x18)
	struct TArray<struct FString> HistoryBuffer; // 0x68(0x10)
	char UnknownData_78[0x78]; // 0x78(0x78)
};

// Class Engine.CurveLinearColor
// Size: 0x210 (Inherited: 0x30)
struct UCurveLinearColor : UCurveBase {
	struct FRichCurve FloatCurves[0x04]; // 0x30(0x1e0)

	struct FLinearColor GetLinearColorValue(float InTime); // Function Engine.CurveLinearColor.GetLinearColorValue // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x3008970
};

// Class Engine.CurveVector
// Size: 0x198 (Inherited: 0x30)
struct UCurveVector : UCurveBase {
	struct FRichCurve FloatCurves[0x03]; // 0x30(0x168)

	struct FVector GetVectorValue(float InTime); // Function Engine.CurveVector.GetVectorValue // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x300a0e0
};

// Class Engine.CurveEdPresetCurve
// Size: 0x28 (Inherited: 0x28)
struct UCurveEdPresetCurve : UObject {
};

// Class Engine.CurveTable
// Size: 0x78 (Inherited: 0x28)
struct UCurveTable : UObject {
	char UnknownData_28[0x50]; // 0x28(0x50)
};

// Class Engine.CustomWidgetDrawerInterface
// Size: 0x28 (Inherited: 0x28)
struct UCustomWidgetDrawerInterface : UInterface {
};

// Class Engine.InstancedNavMeshesDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UInstancedNavMeshesDataAsset : UDataAsset {
	struct TArray<struct FInstancedNavMesh> InstancedNavMeshes; // 0x28(0x10)
};

// Class Engine.ParticleComputeShaderData
// Size: 0x48 (Inherited: 0x28)
struct UParticleComputeShaderData : UDataAsset {
	char UnknownData_28[0x20]; // 0x28(0x20)
};

// Class Engine.StringArrayDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UStringArrayDataAsset : UDataAsset {
	struct TArray<struct FString> Array; // 0x28(0x10)
};

// Class Engine.DestructibleFractureSettings
// Size: 0xa0 (Inherited: 0x28)
struct UDestructibleFractureSettings : UObject {
	int32_t CellSiteCount; // 0x28(0x04)
	struct FFractureMaterial FractureMaterialDesc; // 0x2c(0x24)
	int32_t RandomSeed; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
	struct TArray<struct FVector> VoronoiSites; // 0x58(0x10)
	int32_t OriginalSubmeshCount; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct UMaterialInterface*> Materials; // 0x70(0x10)
	struct TArray<struct FDestructibleChunkParameters> ChunkParameters; // 0x80(0x10)
	struct TArray<struct FString> MaterialNames; // 0x90(0x10)
};

// Class Engine.AnimationSettings
// Size: 0x80 (Inherited: 0x38)
struct UAnimationSettings : UDeveloperSettings {
	struct TArray<float> DefaultVisibleDistanceFactorThresholds; // 0x38(0x10)
	int32_t CompressCommandletVersion; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FString> KeyEndEffectorsMatchNameArray; // 0x50(0x10)
	struct UClass* DefaultCompressionAlgorithm; // 0x60(0x08)
	char RotationCompressionFormat; // 0x68(0x01)
	char TranslationCompressionFormat; // 0x69(0x01)
	char UnknownData_6A[0x2]; // 0x6a(0x02)
	float AlternativeCompressionThreshold; // 0x6c(0x04)
	bool ForceRecompression; // 0x70(0x01)
	bool bOnlyCheckForMissingSkeletalMeshes; // 0x71(0x01)
	bool bForceBelowThreshold; // 0x72(0x01)
	bool bFirstRecompressUsingCurrentOrDefault; // 0x73(0x01)
	bool bRaiseMaxErrorToExisting; // 0x74(0x01)
	bool bTryFixedBitwiseCompression; // 0x75(0x01)
	bool bTryPerTrackBitwiseCompression; // 0x76(0x01)
	bool bTryLinearKeyRemovalCompression; // 0x77(0x01)
	bool bTryIntervalKeyRemoval; // 0x78(0x01)
	bool bStripAnimationDataOnDedicatedServer; // 0x79(0x01)
	char UnknownData_7A[0x6]; // 0x7a(0x06)
};

// Class Engine.AudioSettings
// Size: 0x80 (Inherited: 0x38)
struct UAudioSettings : UDeveloperSettings {
	struct FStringAssetReference DefaultSoundClassName; // 0x38(0x10)
	struct FStringAssetReference DefaultBaseSoundMix; // 0x48(0x10)
	struct FStringAssetReference VoiPSoundClass; // 0x58(0x10)
	float LowPassFilterResonance; // 0x68(0x04)
	int32_t MaximumConcurrentStreams; // 0x6c(0x04)
	struct TArray<struct FAudioQualitySettings> QualityLevels; // 0x70(0x10)
};

// Class Engine.AutomaticInstancingSettings
// Size: 0x40 (Inherited: 0x38)
struct UAutomaticInstancingSettings : UDeveloperSettings {
	bool IsEnabled; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// Class Engine.UserInterfaceSettings
// Size: 0x158 (Inherited: 0x38)
struct UUserInterfaceSettings : UDeveloperSettings {
	char RenderFocusRule; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
	struct FStringClassReference DefaultCursor; // 0x40(0x10)
	struct FStringClassReference TextEditBeamCursor; // 0x50(0x10)
	struct FStringClassReference CrosshairsCursor; // 0x60(0x10)
	struct FStringClassReference GrabHandCursor; // 0x70(0x10)
	struct FStringClassReference GrabHandClosedCursor; // 0x80(0x10)
	struct FStringClassReference SlashedCircleCursor; // 0x90(0x10)
	float ApplicationScale; // 0xa0(0x04)
	char UIScaleRule; // 0xa4(0x01)
	char UnknownData_A5[0x3]; // 0xa5(0x03)
	struct FStringClassReference CustomScalingRuleClass; // 0xa8(0x10)
	struct FRuntimeFloatCurve UIScaleCurve; // 0xb8(0x80)
	struct TArray<struct UObject*> CursorClasses; // 0x138(0x10)
	struct UClass* CustomScalingRuleClassInstance; // 0x148(0x08)
	struct UDPICustomScalingRule* CustomScalingRule; // 0x150(0x08)
};

// Class Engine.StreamingSettings
// Size: 0x60 (Inherited: 0x38)
struct UStreamingSettings : UDeveloperSettings {
	char AsyncLoadingThreadEnabled : 1; // 0x38(0x01)
	char WarnIfTimeLimitExceeded : 1; // 0x38(0x01)
	char UnknownData_38_2 : 6; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	float TimeLimitExceededMultiplier; // 0x3c(0x04)
	float TimeLimitExceededMinTime; // 0x40(0x04)
	int32_t MinBulkDataSizeForAsyncLoading; // 0x44(0x04)
	float AsyncIOBandwidthLimit; // 0x48(0x04)
	char UseBackgroundLevelStreaming : 1; // 0x4c(0x01)
	char AsyncLoadingUseFullTimeLimit : 1; // 0x4c(0x01)
	char UnknownData_4C_2 : 6; // 0x4c(0x01)
	char UnknownData_4D[0x3]; // 0x4d(0x03)
	float AsyncLoadingTimeLimit; // 0x50(0x04)
	float PriorityAsyncLoadingExtraTime; // 0x54(0x04)
	float LevelStreamingActorsUpdateTimeLimit; // 0x58(0x04)
	int32_t LevelStreamingComponentsRegistrationGranularity; // 0x5c(0x04)
};

// Class Engine.GarbageCollectionSettings
// Size: 0x58 (Inherited: 0x38)
struct UGarbageCollectionSettings : UDeveloperSettings {
	float TimeBetweenPurgingPendingKillObjects; // 0x38(0x04)
	char FlushStreamingOnGC : 1; // 0x3c(0x01)
	char AllowParallelGC : 1; // 0x3c(0x01)
	char CreateGCClusters : 1; // 0x3c(0x01)
	char MergeGCClusters : 1; // 0x3c(0x01)
	char UnknownData_3C_4 : 4; // 0x3c(0x01)
	char UnknownData_3D[0x3]; // 0x3d(0x03)
	int32_t NumRetriesBeforeForcingGC; // 0x40(0x04)
	int32_t MaxObjectsNotConsideredByGC; // 0x44(0x04)
	int32_t SizeOfPermanentObjectPool; // 0x48(0x04)
	int32_t MaxObjectsInGame; // 0x4c(0x04)
	int32_t MaxObjectsInEditor; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
};

// Class Engine.NetworkClusteringSettings
// Size: 0x40 (Inherited: 0x38)
struct UNetworkClusteringSettings : UDeveloperSettings {
	float DynamicActorGridHalfSizeKm; // 0x38(0x04)
	float DynamicActorGridCellSizeKm; // 0x3c(0x04)
};

// Class Engine.NetworkSettings
// Size: 0x40 (Inherited: 0x38)
struct UNetworkSettings : UDeveloperSettings {
	char bVerifyPeer : 1; // 0x38(0x01)
	char UnknownData_38_1 : 7; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// Class Engine.PhysicsSettings
// Size: 0xc8 (Inherited: 0x38)
struct UPhysicsSettings : UDeveloperSettings {
	float DefaultGravityZ; // 0x38(0x04)
	float DefaultTerminalVelocity; // 0x3c(0x04)
	float DefaultFluidFriction; // 0x40(0x04)
	int32_t SimulateScratchMemorySize; // 0x44(0x04)
	int32_t RagdollAggregateThreshold; // 0x48(0x04)
	float TriangleMeshTriangleMinAreaThreshold; // 0x4c(0x04)
	bool bEnableAsyncScene; // 0x50(0x01)
	bool bEnableShapeSharing; // 0x51(0x01)
	bool bEnablePCM; // 0x52(0x01)
	bool bWarnMissingLocks; // 0x53(0x01)
	bool bEnable2DPhysics; // 0x54(0x01)
	char LockedAxis; // 0x55(0x01)
	char DefaultDegreesOfFreedom; // 0x56(0x01)
	char UnknownData_57[0x1]; // 0x57(0x01)
	float BounceThresholdVelocity; // 0x58(0x04)
	char FrictionCombineMode; // 0x5c(0x01)
	char RestitutionCombineMode; // 0x5d(0x01)
	char UnknownData_5E[0x2]; // 0x5e(0x02)
	float MaxAngularVelocity; // 0x60(0x04)
	float MaxDepenetrationVelocity; // 0x64(0x04)
	bool bSimulateSkeletalMeshOnDedicatedServer; // 0x68(0x01)
	bool bDefaultHasComplexCollision; // 0x69(0x01)
	char UnknownData_6A[0x2]; // 0x6a(0x02)
	float MaxPhysicsDeltaTime; // 0x6c(0x04)
	bool bSubstepping; // 0x70(0x01)
	bool bSubsteppingAsync; // 0x71(0x01)
	char UnknownData_72[0x2]; // 0x72(0x02)
	float MaxSubstepDeltaTime; // 0x74(0x04)
	int32_t MaxSubsteps; // 0x78(0x04)
	float SyncSceneSmoothingFactor; // 0x7c(0x04)
	float AsyncSceneSmoothingFactor; // 0x80(0x04)
	float InitialAverageFrameRate; // 0x84(0x04)
	struct TArray<struct FPhysicalSurfaceName> PhysicalSurfaces; // 0x88(0x10)
	struct TArray<struct FDominanceGroupPair> DominanceGroups; // 0x98(0x10)
	struct TArray<struct FDominanceGroupName> DominanceGroupNames; // 0xa8(0x10)
	char DefaultStaticDominanceGroup; // 0xb8(0x01)
	char DefaultMovableDominanceGroup; // 0xb9(0x01)
	bool bEnableMBP; // 0xba(0x01)
	char UnknownData_BB[0x1]; // 0xbb(0x01)
	int32_t MBPSubdivisions; // 0xbc(0x04)
	float MBPWorldHalfExtentInCM; // 0xc0(0x04)
	char UnknownData_C4[0x4]; // 0xc4(0x04)
};

// Class Engine.RendererSettings
// Size: 0x110 (Inherited: 0x38)
struct URendererSettings : UDeveloperSettings {
	char bMobileHDR : 1; // 0x38(0x01)
	char UnknownData_38_1 : 7; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	uint32_t MobileNumDynamicPointLights; // 0x3c(0x04)
	char bMobileDynamicPointLightsUseStaticBranch : 1; // 0x40(0x01)
	char bOcclusionCulling : 1; // 0x40(0x01)
	char UnknownData_40_2 : 6; // 0x40(0x01)
	char UnknownData_41[0x3]; // 0x41(0x03)
	float MinScreenRadiusForLights; // 0x44(0x04)
	float MinScreenRadiusForEarlyZPass; // 0x48(0x04)
	float MinScreenRadiusForCSMdepth; // 0x4c(0x04)
	char bPrecomputedVisibilityWarning : 1; // 0x50(0x01)
	char bTextureStreaming : 1; // 0x50(0x01)
	char bUseDXT5NormalMaps : 1; // 0x50(0x01)
	char bAllowStaticLighting : 1; // 0x50(0x01)
	char bUseNormalMapsForStaticLighting : 1; // 0x50(0x01)
	char bGenerateMeshDistanceFields : 1; // 0x50(0x01)
	char bGenerateLandscapeGIData : 1; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	float TessellationAdaptivePixelsPerTriangle; // 0x54(0x04)
	char bSeparateTranslucency : 1; // 0x58(0x01)
	char UnknownData_58_1 : 7; // 0x58(0x01)
	char UnknownData_59[0x3]; // 0x59(0x03)
	char TranslucentSortPolicy; // 0x5c(0x01)
	char UnknownData_5D[0x3]; // 0x5d(0x03)
	struct FVector TranslucentSortAxis; // 0x60(0x0c)
	char CustomDepthStencil; // 0x6c(0x01)
	char UnknownData_6D[0x3]; // 0x6d(0x03)
	char bDefaultFeatureBloom : 1; // 0x70(0x01)
	char bDefaultFeatureAmbientOcclusion : 1; // 0x70(0x01)
	char bDefaultFeatureAmbientOcclusionStaticFraction : 1; // 0x70(0x01)
	char bDefaultFeatureAutoExposure : 1; // 0x70(0x01)
	char bDefaultFeatureMotionBlur : 1; // 0x70(0x01)
	char bDefaultFeatureLensFlare : 1; // 0x70(0x01)
	char UnknownData_70_6 : 2; // 0x70(0x01)
	char UnknownData_71[0x3]; // 0x71(0x03)
	char DefaultFeatureAntiAliasing; // 0x74(0x01)
	char EarlyZPass; // 0x75(0x01)
	char bDepthSort; // 0x76(0x01)
	char UnknownData_77[0x1]; // 0x77(0x01)
	char bEarlyZPassMovable : 1; // 0x78(0x01)
	char bDBuffer : 1; // 0x78(0x01)
	char UnknownData_78_2 : 6; // 0x78(0x01)
	char UnknownData_79[0x3]; // 0x79(0x03)
	char ClearSceneMethod; // 0x7c(0x01)
	char UnknownData_7D[0x3]; // 0x7d(0x03)
	char bBasePassOutputsVelocity : 1; // 0x80(0x01)
	char UnknownData_80_1 : 7; // 0x80(0x01)
	char UnknownData_81[0x3]; // 0x81(0x03)
	float WireframeCullThreshold; // 0x84(0x04)
	char UIScaleRule; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
	struct FRuntimeFloatCurve UIScaleCurve; // 0x90(0x80)
};

// Class Engine.TextureLODSettings
// Size: 0x38 (Inherited: 0x28)
struct UTextureLODSettings : UObject {
	struct TArray<struct FTextureLODGroup> TextureLODGroups; // 0x28(0x10)
};

// Class Engine.DeviceProfile
// Size: 0x80 (Inherited: 0x38)
struct UDeviceProfile : UTextureLODSettings {
	struct FString DeviceType; // 0x38(0x10)
	struct FString BaseProfileName; // 0x48(0x10)
	struct UObject* Parent; // 0x58(0x08)
	char UnknownData_60[0x8]; // 0x60(0x08)
	struct TArray<struct FString> CVars; // 0x68(0x10)
	char UnknownData_78[0x8]; // 0x78(0x08)
};

// Class Engine.DeviceProfileManager
// Size: 0x58 (Inherited: 0x28)
struct UDeviceProfileManager : UObject {
	struct TArray<struct UObject*> Profiles; // 0x28(0x10)
	char UnknownData_38[0x20]; // 0x38(0x20)
};

// Class Engine.DialogueVoice
// Size: 0x40 (Inherited: 0x28)
struct UDialogueVoice : UObject {
	char Gender; // 0x28(0x01)
	char Plurality; // 0x29(0x01)
	char UnknownData_2A[0x2]; // 0x2a(0x02)
	struct FGuid LocalizationGUID; // 0x2c(0x10)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.DialogueWave
// Size: 0x60 (Inherited: 0x28)
struct UDialogueWave : UObject {
	char bMature : 1; // 0x28(0x01)
	char UnknownData_28_1 : 7; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct FString SpokenText; // 0x30(0x10)
	struct TArray<struct FDialogueContextMapping> ContextMappings; // 0x40(0x10)
	struct FGuid LocalizationGUID; // 0x50(0x10)
};

// Class Engine.Distribution
// Size: 0x30 (Inherited: 0x28)
struct UDistribution : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class Engine.DistributionFloat
// Size: 0x38 (Inherited: 0x30)
struct UDistributionFloat : UDistribution {
	char bCanBeBaked : 1; // 0x30(0x01)
	char UnknownData_30_1 : 7; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// Class Engine.DistributionFloatConstant
// Size: 0x40 (Inherited: 0x38)
struct UDistributionFloatConstant : UDistributionFloat {
	float Constant; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.DistributionFloatParameterBase
// Size: 0x60 (Inherited: 0x40)
struct UDistributionFloatParameterBase : UDistributionFloatConstant {
	struct FName ParameterName; // 0x40(0x08)
	float MinInput; // 0x48(0x04)
	float MaxInput; // 0x4c(0x04)
	float MinOutput; // 0x50(0x04)
	float MaxOutput; // 0x54(0x04)
	char ParamMode; // 0x58(0x01)
	char UnknownData_59[0x7]; // 0x59(0x07)
};

// Class Engine.DistributionFloatParticleParameter
// Size: 0x60 (Inherited: 0x60)
struct UDistributionFloatParticleParameter : UDistributionFloatParameterBase {
};

// Class Engine.DistributionFloatConstantCurve
// Size: 0x50 (Inherited: 0x38)
struct UDistributionFloatConstantCurve : UDistributionFloat {
	struct FInterpCurveFloat ConstantCurve; // 0x38(0x18)
};

// Class Engine.DistributionFloatUniform
// Size: 0x40 (Inherited: 0x38)
struct UDistributionFloatUniform : UDistributionFloat {
	float Max; // 0x38(0x04)
	float Min; // 0x3c(0x04)
};

// Class Engine.DistributionFloatUniformCurve
// Size: 0x50 (Inherited: 0x38)
struct UDistributionFloatUniformCurve : UDistributionFloat {
	struct FInterpCurveVector2D ConstantCurve; // 0x38(0x18)
};

// Class Engine.DistributionVector
// Size: 0x38 (Inherited: 0x30)
struct UDistributionVector : UDistribution {
	char bCanBeBaked : 1; // 0x30(0x01)
	char bIsDirty : 1; // 0x30(0x01)
	char UnknownData_30_2 : 6; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// Class Engine.DistributionVectorConstant
// Size: 0x50 (Inherited: 0x38)
struct UDistributionVectorConstant : UDistributionVector {
	struct FVector Constant; // 0x38(0x0c)
	char bLockAxes : 1; // 0x44(0x01)
	char UnknownData_44_1 : 7; // 0x44(0x01)
	char UnknownData_45[0x3]; // 0x45(0x03)
	char LockedAxes; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// Class Engine.DistributionVectorParameterBase
// Size: 0x90 (Inherited: 0x50)
struct UDistributionVectorParameterBase : UDistributionVectorConstant {
	struct FName ParameterName; // 0x50(0x08)
	struct FVector MinInput; // 0x58(0x0c)
	struct FVector MaxInput; // 0x64(0x0c)
	struct FVector MinOutput; // 0x70(0x0c)
	struct FVector MaxOutput; // 0x7c(0x0c)
	char ParamModes[0x03]; // 0x88(0x03)
	char UnknownData_8B[0x5]; // 0x8b(0x05)
};

// Class Engine.DistributionVectorParticleParameter
// Size: 0x90 (Inherited: 0x90)
struct UDistributionVectorParticleParameter : UDistributionVectorParameterBase {
};

// Class Engine.DistributionVectorConstantCurve
// Size: 0x58 (Inherited: 0x38)
struct UDistributionVectorConstantCurve : UDistributionVector {
	struct FInterpCurveVector ConstantCurve; // 0x38(0x18)
	char bLockAxes : 1; // 0x50(0x01)
	char UnknownData_50_1 : 7; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	char LockedAxes; // 0x54(0x01)
	char UnknownData_55[0x3]; // 0x55(0x03)
};

// Class Engine.DistributionVectorUniform
// Size: 0x60 (Inherited: 0x38)
struct UDistributionVectorUniform : UDistributionVector {
	struct FVector Max; // 0x38(0x0c)
	struct FVector Min; // 0x44(0x0c)
	char bLockAxes : 1; // 0x50(0x01)
	char UnknownData_50_1 : 7; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	char LockedAxes; // 0x54(0x01)
	char MirrorFlags[0x03]; // 0x55(0x03)
	char bUseExtremes : 1; // 0x58(0x01)
	char UnknownData_58_1 : 7; // 0x58(0x01)
	char UnknownData_59[0x7]; // 0x59(0x07)
};

// Class Engine.DistributionVectorUniformCurve
// Size: 0x60 (Inherited: 0x38)
struct UDistributionVectorUniformCurve : UDistributionVector {
	struct FInterpCurveTwoVectors ConstantCurve; // 0x38(0x18)
	char bLockAxes1 : 1; // 0x50(0x01)
	char bLockAxes2 : 1; // 0x50(0x01)
	char UnknownData_50_2 : 6; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	char LockedAxes[0x02]; // 0x54(0x02)
	char MirrorFlags[0x03]; // 0x56(0x03)
	char UnknownData_59[0x3]; // 0x59(0x03)
	char bUseExtremes : 1; // 0x5c(0x01)
	char UnknownData_5C_1 : 7; // 0x5c(0x01)
	char UnknownData_5D[0x3]; // 0x5d(0x03)
};

// Class Engine.DPICustomScalingRule
// Size: 0x28 (Inherited: 0x28)
struct UDPICustomScalingRule : UObject {
};

// Class Engine.DynamicBlueprintBinding
// Size: 0x28 (Inherited: 0x28)
struct UDynamicBlueprintBinding : UObject {
};

// Class Engine.ComponentDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UComponentDelegateBinding : UDynamicBlueprintBinding {
	struct TArray<struct FBlueprintComponentDelegateBinding> ComponentDelegateBindings; // 0x28(0x10)
};

// Class Engine.InputDelegateBinding
// Size: 0x28 (Inherited: 0x28)
struct UInputDelegateBinding : UDynamicBlueprintBinding {
};

// Class Engine.InputActionDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UInputActionDelegateBinding : UInputDelegateBinding {
	struct TArray<struct FBlueprintInputActionDelegateBinding> InputActionDelegateBindings; // 0x28(0x10)
};

// Class Engine.InputAxisDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UInputAxisDelegateBinding : UInputDelegateBinding {
	struct TArray<struct FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings; // 0x28(0x10)
};

// Class Engine.InputAxisKeyDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UInputAxisKeyDelegateBinding : UInputDelegateBinding {
	struct TArray<struct FBlueprintInputAxisKeyDelegateBinding> InputAxisKeyDelegateBindings; // 0x28(0x10)
};

// Class Engine.InputVectorAxisDelegateBinding
// Size: 0x38 (Inherited: 0x38)
struct UInputVectorAxisDelegateBinding : UInputAxisKeyDelegateBinding {
};

// Class Engine.InputKeyDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UInputKeyDelegateBinding : UInputDelegateBinding {
	struct TArray<struct FBlueprintInputKeyDelegateBinding> InputKeyDelegateBindings; // 0x28(0x10)
};

// Class Engine.InputTouchDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UInputTouchDelegateBinding : UInputDelegateBinding {
	struct TArray<struct FBlueprintInputTouchDelegateBinding> InputTouchDelegateBindings; // 0x28(0x10)
};

// Class Engine.InstancedActorDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UInstancedActorDelegateBinding : UDynamicBlueprintBinding {
	struct TArray<struct FBlueprintInstancedActorDelegateBinding> ActorDelegateBindings; // 0x28(0x10)
};

// Class Engine.EdGraph
// Size: 0x60 (Inherited: 0x28)
struct UEdGraph : UObject {
	struct UClass* Schema; // 0x28(0x08)
	struct TArray<struct UEdGraphNode*> Nodes; // 0x30(0x10)
	char bEditable : 1; // 0x40(0x01)
	char bAllowDeletion : 1; // 0x40(0x01)
	char bAllowRenaming : 1; // 0x40(0x01)
	char UnknownData_40_3 : 5; // 0x40(0x01)
	char UnknownData_41[0x1f]; // 0x41(0x1f)
};

// Class Engine.EdGraphNode_Documentation
// Size: 0xb0 (Inherited: 0x90)
struct UEdGraphNode_Documentation : UEdGraphNode {
	struct FString Link; // 0x90(0x10)
	struct FString Excerpt; // 0xa0(0x10)
};

// Class Engine.EdGraphSchema
// Size: 0x28 (Inherited: 0x28)
struct UEdGraphSchema : UObject {
};

// Class Engine.ImportantToggleSettingInterface
// Size: 0x28 (Inherited: 0x28)
struct UImportantToggleSettingInterface : UInterface {
};

// Class Engine.EndUserSettings
// Size: 0x38 (Inherited: 0x28)
struct UEndUserSettings : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	bool bSendAnonymousUsageDataToEpic; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// Class Engine.EngineCustomTimeStep
// Size: 0x28 (Inherited: 0x28)
struct UEngineCustomTimeStep : UObject {
};

// Class Engine.ExecutableAnimMetaDataInterface
// Size: 0x28 (Inherited: 0x28)
struct UExecutableAnimMetaDataInterface : UInterface {
};

// Class Engine.Exporter
// Size: 0x68 (Inherited: 0x28)
struct UExporter : UObject {
	struct UClass* SupportedClass; // 0x28(0x08)
	struct UObject* ExportRootScope; // 0x30(0x08)
	struct TArray<struct FString> FormatExtension; // 0x38(0x10)
	struct TArray<struct FString> FormatDescription; // 0x48(0x10)
	int32_t PreferredFormatIndex; // 0x58(0x04)
	int32_t TextIndent; // 0x5c(0x04)
	char bText : 1; // 0x60(0x01)
	char bSelectedOnly : 1; // 0x60(0x01)
	char bForceFileOperations : 1; // 0x60(0x01)
	char UnknownData_60_3 : 5; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
};

// Class Engine.RareNetworkProfilerExporter
// Size: 0x68 (Inherited: 0x68)
struct URareNetworkProfilerExporter : UExporter {
};

// Class Engine.FFTWaterSettings
// Size: 0x50 (Inherited: 0x28)
struct UFFTWaterSettings : UObject {
	struct FStringAssetReference FFTWaterMaterialName; // 0x28(0x10)
	struct FStringAssetReference FFTWaterFoamTextureName; // 0x38(0x10)
	int32_t BaseMeshDetail; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.FontImportOptions
// Size: 0xd8 (Inherited: 0x28)
struct UFontImportOptions : UObject {
	struct FFontImportOptionsData Data; // 0x28(0xb0)
};

// Class Engine.Font
// Size: 0x1d8 (Inherited: 0x28)
struct UFont : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	char FontCacheType; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct TArray<struct FFontCharacter> Characters; // 0x38(0x10)
	struct TArray<struct UTexture2D*> Textures; // 0x48(0x10)
	int32_t IsRemapped; // 0x58(0x04)
	float EmScale; // 0x5c(0x04)
	float Ascent; // 0x60(0x04)
	float Descent; // 0x64(0x04)
	float Leading; // 0x68(0x04)
	int32_t Kerning; // 0x6c(0x04)
	struct FFontImportOptionsData ImportOptions; // 0x70(0xb0)
	int32_t NumCharacters; // 0x120(0x04)
	char UnknownData_124[0x4]; // 0x124(0x04)
	struct TArray<int32_t> MaxCharHeight; // 0x128(0x10)
	float ScalingFactor; // 0x138(0x04)
	int32_t LegacyFontSize; // 0x13c(0x04)
	struct FName LegacyFontName; // 0x140(0x08)
	struct FCompositeFont CompositeFont; // 0x148(0x28)
	char UnknownData_170[0x68]; // 0x170(0x68)
};

// Class Engine.HapticFeedbackEffect
// Size: 0x128 (Inherited: 0x28)
struct UHapticFeedbackEffect : UObject {
	struct FHapticFeedbackDetails HapticDetails; // 0x28(0x100)
};

// Class Engine.HighLatencySettings
// Size: 0x40 (Inherited: 0x28)
struct UHighLatencySettings : UObject {
	bool UseHighLatency; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	int32_t PktLag; // 0x2c(0x04)
	int32_t PktLagVariance; // 0x30(0x04)
	bool PktOrder; // 0x34(0x01)
	char UnknownData_35[0x3]; // 0x35(0x03)
	int32_t PktDup; // 0x38(0x04)
	int32_t PktLoss; // 0x3c(0x04)
};

// Class Engine.HIKCharacterization
// Size: 0x138 (Inherited: 0x28)
struct UHIKCharacterization : UObject {
	struct FName Reference; // 0x28(0x08)
	struct FName Hips; // 0x30(0x08)
	struct FName LeftUpLeg; // 0x38(0x08)
	struct FName LeftLeg; // 0x40(0x08)
	struct FName LeftFoot; // 0x48(0x08)
	struct FName RightUpLeg; // 0x50(0x08)
	struct FName RightLeg; // 0x58(0x08)
	struct FName RightFoot; // 0x60(0x08)
	struct FName Spine; // 0x68(0x08)
	struct FName LeftArm; // 0x70(0x08)
	struct FName LeftForeArm; // 0x78(0x08)
	struct FName LeftHand; // 0x80(0x08)
	struct FName RightArm; // 0x88(0x08)
	struct FName RightForeArm; // 0x90(0x08)
	struct FName RightHand; // 0x98(0x08)
	struct FName Head; // 0xa0(0x08)
	struct TArray<struct FHIKBoneTransform> BoneTransforms; // 0xa8(0x10)
	bool Locked; // 0xb8(0x01)
	char UnknownData_B9[0x7]; // 0xb9(0x07)
	struct TArray<int32_t> UnrealToHumanIKBoneMapping; // 0xc0(0x10)
	struct TArray<struct FHIKBoneMapping> AdditionalBones; // 0xd0(0x10)
	bool LeftElbowInverted; // 0xe0(0x01)
	bool RightElbowInverted; // 0xe1(0x01)
	bool LeftKneeInverted; // 0xe2(0x01)
	bool RightKneeInverted; // 0xe3(0x01)
	bool AdjustLeftShoulder; // 0xe4(0x01)
	char UnknownData_E5[0x3]; // 0xe5(0x03)
	struct FVector AdjustLeftShoulder_Axis; // 0xe8(0x0c)
	float AdjustLeftShoulder_Angle; // 0xf4(0x04)
	bool AdjustRightShoulder; // 0xf8(0x01)
	char UnknownData_F9[0x3]; // 0xf9(0x03)
	struct FVector AdjustRightShoulder_Axis; // 0xfc(0x0c)
	float AdjustRightShoulder_Angle; // 0x108(0x04)
	bool SpineSquashNStretch; // 0x10c(0x01)
	bool NeckSquashNStretch; // 0x10d(0x01)
	char UnknownData_10E[0x2]; // 0x10e(0x02)
	float SpineJointsMinSquashNStretchFactor; // 0x110(0x04)
	float SpineJointsMaxSquashNStretchFactor; // 0x114(0x04)
	float NeckJointsMinSquashNStretchFactor; // 0x118(0x04)
	float NeckJointsMaxSquashNStretchFactor; // 0x11c(0x04)
	bool bInitFromSkeleton; // 0x120(0x01)
	char UnknownData_121[0x3]; // 0x121(0x03)
	int32_t InitFromSkeletonCount; // 0x124(0x04)
	struct FRotator ImportRotator; // 0x128(0x0c)
	char UnknownData_134[0x4]; // 0x134(0x04)
};

// Class Engine.InheritableComponentHandler
// Size: 0x38 (Inherited: 0x28)
struct UInheritableComponentHandler : UObject {
	struct TArray<struct FComponentOverrideRecord> Records; // 0x28(0x10)
};

// Class Engine.PlayerInput
// Size: 0x428 (Inherited: 0x28)
struct UPlayerInput : UObject {
	char UnknownData_28[0xf8]; // 0x28(0xf8)
	struct TArray<struct FKeyBind> DebugExecBindings; // 0x120(0x10)
	char UnknownData_130[0x40]; // 0x130(0x40)
	struct TArray<struct FName> GamepadInvertedAxes; // 0x170(0x10)
	struct TArray<struct FName> MouseInvertedAxes; // 0x180(0x10)
	struct TArray<struct FName> InvertedCombinedAxisY; // 0x190(0x10)
	struct TArray<struct FName> InvertedCombinedAxisX; // 0x1a0(0x10)
	char UnknownData_1B0[0x278]; // 0x1b0(0x278)

	void SetMouseSensitivity(float Sensitivity); // Function Engine.PlayerInput.SetMouseSensitivity // Final|Exec|Native|Public // @ game+0x30fff70
	void SetForceFeedbackIntensity(float Intensity); // Function Engine.PlayerInput.SetForceFeedbackIntensity // Final|Exec|Native|Public // @ game+0x30ffef0
	void SetCombinedAxisScale(struct FName CombinedAxisName, float Scale); // Function Engine.PlayerInput.SetCombinedAxisScale // Final|Exec|Native|Public // @ game+0x30ffe20
	void SetCombinedAxisNonLinearity(struct FName CombinedAxisName, float NonLinearity); // Function Engine.PlayerInput.SetCombinedAxisNonLinearity // Final|Exec|Native|Public // @ game+0x30ffd50
	void SetCombinedAxisLowerDeadzone(struct FName CombinedAxisName, float LowerDeadzone); // Function Engine.PlayerInput.SetCombinedAxisLowerDeadzone // Final|Exec|Native|Public // @ game+0x30ffc80
	void SetBind(struct FName BindName, struct FString Command); // Function Engine.PlayerInput.SetBind // Final|Exec|Native|Public // @ game+0x30ffba0
	void InvertMouseAxis(struct FName AxisName); // Function Engine.PlayerInput.InvertMouseAxis // Final|Exec|Native|Public // @ game+0x30ff5b0
	void InvertGamepadAxis(struct FName AxisName); // Function Engine.PlayerInput.InvertGamepadAxis // Final|Exec|Native|Public // @ game+0x30ff530
	void InvertCombinedAxisY(struct FName CombinedAxisName); // Function Engine.PlayerInput.InvertCombinedAxisY // Final|Exec|Native|Public // @ game+0x30ff4b0
	void InvertCombinedAxisX(struct FName CombinedAxisName); // Function Engine.PlayerInput.InvertCombinedAxisX // Final|Exec|Native|Public // @ game+0x30ff430
	void InvertAxisKey(struct FKey AxisKey); // Function Engine.PlayerInput.InvertAxisKey // Final|Exec|Native|Public // @ game+0x30ff340
	void ClearSmoothing(); // Function Engine.PlayerInput.ClearSmoothing // Final|Exec|Native|Public // @ game+0x30fea00
};

// Class Engine.InputSettings
// Size: 0xc0 (Inherited: 0x28)
struct UInputSettings : UObject {
	struct TArray<struct FInputAxisConfigEntry> AxisConfig; // 0x28(0x10)
	char bAltEnterTogglesFullscreen : 1; // 0x38(0x01)
	char bUseMouseForTouch : 1; // 0x38(0x01)
	char bEnableMouseSmoothing : 1; // 0x38(0x01)
	char bEnableFOVScaling : 1; // 0x38(0x01)
	char UnknownData_38_4 : 4; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	float FOVScale; // 0x3c(0x04)
	float DoubleClickTime; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
	struct TArray<struct FInputActionKeyMapping> ActionMappings; // 0x48(0x10)
	struct TArray<struct FInputAxisKeyMapping> AxisMappings; // 0x58(0x10)
	struct TArray<struct FInputCombinedAxisKeyMapping> CombinedAxisMappings; // 0x68(0x10)
	bool bAlwaysShowTouchInterface; // 0x78(0x01)
	bool bShowConsoleOnFourFingerTap; // 0x79(0x01)
	char UnknownData_7A[0x6]; // 0x7a(0x06)
	struct FStringAssetReference DefaultTouchInterface; // 0x80(0x10)
	struct FKey ConsoleKey; // 0x90(0x20)
	struct TArray<struct FKey> ConsoleKeys; // 0xb0(0x10)
};

// Class Engine.InterpCurveEdSetup
// Size: 0x40 (Inherited: 0x28)
struct UInterpCurveEdSetup : UObject {
	struct TArray<struct FCurveEdTab> Tabs; // 0x28(0x10)
	int32_t ActiveTab; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.InterpData
// Size: 0x70 (Inherited: 0x28)
struct UInterpData : UObject {
	float InterpLength; // 0x28(0x04)
	float PathBuildTime; // 0x2c(0x04)
	struct TArray<struct UInterpGroup*> InterpGroups; // 0x30(0x10)
	struct UInterpCurveEdSetup* CurveEdSetup; // 0x40(0x08)
	float EdSectionStart; // 0x48(0x04)
	float EdSectionEnd; // 0x4c(0x04)
	char bShouldBakeAndPrune : 1; // 0x50(0x01)
	char UnknownData_50_1 : 7; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
	struct UInterpGroupDirector* CachedDirectorGroup; // 0x58(0x08)
	struct TArray<struct FName> AllEventNames; // 0x60(0x10)
};

// Class Engine.InterpFilter
// Size: 0x38 (Inherited: 0x28)
struct UInterpFilter : UObject {
	struct FString Caption; // 0x28(0x10)
};

// Class Engine.InterpFilter_Classes
// Size: 0x38 (Inherited: 0x38)
struct UInterpFilter_Classes : UInterpFilter {
};

// Class Engine.InterpFilter_Custom
// Size: 0x38 (Inherited: 0x38)
struct UInterpFilter_Custom : UInterpFilter {
};

// Class Engine.InterpGroup
// Size: 0x50 (Inherited: 0x28)
struct UInterpGroup : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct TArray<struct UInterpTrack*> InterpTracks; // 0x30(0x10)
	struct FName GroupName; // 0x40(0x08)
	struct FColor GroupColor; // 0x48(0x04)
	char bCollapsed : 1; // 0x4c(0x01)
	char bVisible : 1; // 0x4c(0x01)
	char bIsFolder : 1; // 0x4c(0x01)
	char bIsParented : 1; // 0x4c(0x01)
	char bIsSelected : 1; // 0x4c(0x01)
	char UnknownData_4C_5 : 3; // 0x4c(0x01)
	char UnknownData_4D[0x3]; // 0x4d(0x03)
};

// Class Engine.InterpGroupCamera
// Size: 0x60 (Inherited: 0x50)
struct UInterpGroupCamera : UInterpGroup {
	struct UCameraAnim* CameraAnimInst; // 0x50(0x08)
	float CompressTolerance; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.InterpGroupDirector
// Size: 0x50 (Inherited: 0x50)
struct UInterpGroupDirector : UInterpGroup {
};

// Class Engine.InterpGroupInst
// Size: 0x48 (Inherited: 0x28)
struct UInterpGroupInst : UObject {
	struct UInterpGroup* Group; // 0x28(0x08)
	struct AActor* GroupActor; // 0x30(0x08)
	struct TArray<struct UInterpTrackInst*> TrackInst; // 0x38(0x10)
};

// Class Engine.InterpGroupInstCamera
// Size: 0x48 (Inherited: 0x48)
struct UInterpGroupInstCamera : UInterpGroupInst {
};

// Class Engine.InterpGroupInstDirector
// Size: 0x48 (Inherited: 0x48)
struct UInterpGroupInstDirector : UInterpGroupInst {
};

// Class Engine.InterpTrack
// Size: 0x70 (Inherited: 0x28)
struct UInterpTrack : UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
	struct TArray<struct UInterpTrack*> SubTracks; // 0x38(0x10)
	struct UClass* TrackInstClass; // 0x48(0x08)
	char ActiveCondition; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
	struct FString TrackTitle; // 0x58(0x10)
	char bOnePerGroup : 1; // 0x68(0x01)
	char bDirGroupOnly : 1; // 0x68(0x01)
	char bDisableTrack : 1; // 0x68(0x01)
	char bIsSelected : 1; // 0x68(0x01)
	char bIsAnimControlTrack : 1; // 0x68(0x01)
	char bSubTrackOnly : 1; // 0x68(0x01)
	char bVisible : 1; // 0x68(0x01)
	char bIsRecording : 1; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
};

// Class Engine.InterpTrackBoolProp
// Size: 0x88 (Inherited: 0x70)
struct UInterpTrackBoolProp : UInterpTrack {
	struct TArray<struct FBoolTrackKey> BoolTrack; // 0x70(0x10)
	struct FName PropertyName; // 0x80(0x08)
};

// Class Engine.InterpTrackDirector
// Size: 0x88 (Inherited: 0x70)
struct UInterpTrackDirector : UInterpTrack {
	struct TArray<struct FDirectorTrackCut> CutTrack; // 0x70(0x10)
	char bSimulateCameraCutsOnClients : 1; // 0x80(0x01)
	char UnknownData_80_1 : 7; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
};

// Class Engine.InterpTrackEvent
// Size: 0x88 (Inherited: 0x70)
struct UInterpTrackEvent : UInterpTrack {
	struct TArray<struct FEventTrackKey> EventTrack; // 0x70(0x10)
	char bFireEventsWhenForwards : 1; // 0x80(0x01)
	char bFireEventsWhenBackwards : 1; // 0x80(0x01)
	char bFireEventsWhenJumpingForwards : 1; // 0x80(0x01)
	char bUseCustomEventName : 1; // 0x80(0x01)
	char UnknownData_80_4 : 4; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
};

// Class Engine.InterpTrackFloatBase
// Size: 0x90 (Inherited: 0x70)
struct UInterpTrackFloatBase : UInterpTrack {
	struct FInterpCurveFloat FloatTrack; // 0x70(0x18)
	float CurveTension; // 0x88(0x04)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
};

// Class Engine.InterpTrackAnimControl
// Size: 0xb0 (Inherited: 0x90)
struct UInterpTrackAnimControl : UInterpTrackFloatBase {
	struct FName SlotName; // 0x90(0x08)
	struct TArray<struct FAnimControlTrackKey> AnimSeqs; // 0x98(0x10)
	char bSkipAnimNotifiers : 1; // 0xa8(0x01)
	char UnknownData_A8_1 : 7; // 0xa8(0x01)
	char UnknownData_A9[0x7]; // 0xa9(0x07)
};

// Class Engine.InterpTrackFade
// Size: 0xa8 (Inherited: 0x90)
struct UInterpTrackFade : UInterpTrackFloatBase {
	char bPersistFade : 1; // 0x90(0x01)
	char bFadeAudio : 1; // 0x90(0x01)
	char UnknownData_90_2 : 6; // 0x90(0x01)
	char UnknownData_91[0x3]; // 0x91(0x03)
	struct FLinearColor FadeColor; // 0x94(0x10)
	char UnknownData_A4[0x4]; // 0xa4(0x04)
};

// Class Engine.InterpTrackFloatAnimBPParam
// Size: 0xa8 (Inherited: 0x90)
struct UInterpTrackFloatAnimBPParam : UInterpTrackFloatBase {
	struct UClass* AnimBlueprintClass; // 0x90(0x08)
	struct FName ParamName; // 0x98(0x08)
	char UnknownData_A0[0x8]; // 0xa0(0x08)
};

// Class Engine.InterpTrackFloatMaterialParam
// Size: 0xa8 (Inherited: 0x90)
struct UInterpTrackFloatMaterialParam : UInterpTrackFloatBase {
	struct TArray<struct UMaterialInterface*> TargetMaterials; // 0x90(0x10)
	struct FName ParamName; // 0xa0(0x08)
};

// Class Engine.InterpTrackFloatParticleParam
// Size: 0x98 (Inherited: 0x90)
struct UInterpTrackFloatParticleParam : UInterpTrackFloatBase {
	struct FName ParamName; // 0x90(0x08)
};

// Class Engine.InterpTrackFloatProp
// Size: 0x98 (Inherited: 0x90)
struct UInterpTrackFloatProp : UInterpTrackFloatBase {
	struct FName PropertyName; // 0x90(0x08)
};

// Class Engine.InterpTrackMove
// Size: 0xc8 (Inherited: 0x70)
struct UInterpTrackMove : UInterpTrack {
	struct FInterpCurveVector PosTrack; // 0x70(0x18)
	struct FInterpCurveVector EulerTrack; // 0x88(0x18)
	struct FInterpLookupTrack LookupTrack; // 0xa0(0x10)
	struct FName LookAtGroupName; // 0xb0(0x08)
	float LinCurveTension; // 0xb8(0x04)
	float AngCurveTension; // 0xbc(0x04)
	char bUseQuatInterpolation : 1; // 0xc0(0x01)
	char bShowArrowAtKeys : 1; // 0xc0(0x01)
	char bDisableMovement : 1; // 0xc0(0x01)
	char bShowTranslationOnCurveEd : 1; // 0xc0(0x01)
	char bShowRotationOnCurveEd : 1; // 0xc0(0x01)
	char bHide3DTrack : 1; // 0xc0(0x01)
	char UnknownData_C0_6 : 2; // 0xc0(0x01)
	char UnknownData_C1[0x3]; // 0xc1(0x03)
	char RotMode; // 0xc4(0x01)
	char UnknownData_C5[0x3]; // 0xc5(0x03)
};

// Class Engine.InterpTrackMoveAxis
// Size: 0xa8 (Inherited: 0x90)
struct UInterpTrackMoveAxis : UInterpTrackFloatBase {
	char MoveAxis; // 0x90(0x01)
	char UnknownData_91[0x7]; // 0x91(0x07)
	struct FInterpLookupTrack LookupTrack; // 0x98(0x10)
};

// Class Engine.InterpTrackLinearColorBase
// Size: 0x90 (Inherited: 0x70)
struct UInterpTrackLinearColorBase : UInterpTrack {
	struct FInterpCurveLinearColor LinearColorTrack; // 0x70(0x18)
	float CurveTension; // 0x88(0x04)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
};

// Class Engine.InterpTrackLinearColorProp
// Size: 0x98 (Inherited: 0x90)
struct UInterpTrackLinearColorProp : UInterpTrackLinearColorBase {
	struct FName PropertyName; // 0x90(0x08)
};

// Class Engine.InterpTrackParticleReplay
// Size: 0x80 (Inherited: 0x70)
struct UInterpTrackParticleReplay : UInterpTrack {
	struct TArray<struct FParticleReplayTrackKey> TrackKeys; // 0x70(0x10)
};

// Class Engine.InterpTrackToggle
// Size: 0x88 (Inherited: 0x70)
struct UInterpTrackToggle : UInterpTrack {
	struct TArray<struct FToggleTrackKey> ToggleTrack; // 0x70(0x10)
	char bActivateSystemEachUpdate : 1; // 0x80(0x01)
	char bActivateWithJustAttachedFlag : 1; // 0x80(0x01)
	char bFireEventsWhenForwards : 1; // 0x80(0x01)
	char bFireEventsWhenBackwards : 1; // 0x80(0x01)
	char bFireEventsWhenJumpingForwards : 1; // 0x80(0x01)
	char UnknownData_80_5 : 3; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
};

// Class Engine.InterpTrackVectorBase
// Size: 0x90 (Inherited: 0x70)
struct UInterpTrackVectorBase : UInterpTrack {
	struct FInterpCurveVector VectorTrack; // 0x70(0x18)
	float CurveTension; // 0x88(0x04)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
};

// Class Engine.InterpTrackAudioMaster
// Size: 0x90 (Inherited: 0x90)
struct UInterpTrackAudioMaster : UInterpTrackVectorBase {
};

// Class Engine.InterpTrackColorProp
// Size: 0x98 (Inherited: 0x90)
struct UInterpTrackColorProp : UInterpTrackVectorBase {
	struct FName PropertyName; // 0x90(0x08)
};

// Class Engine.InterpTrackColorScale
// Size: 0x90 (Inherited: 0x90)
struct UInterpTrackColorScale : UInterpTrackVectorBase {
};

// Class Engine.InterpTrackSound
// Size: 0xa8 (Inherited: 0x90)
struct UInterpTrackSound : UInterpTrackVectorBase {
	struct TArray<struct FSoundTrackKey> Sounds; // 0x90(0x10)
	char bPlayOnReverse : 1; // 0xa0(0x01)
	char bContinueSoundOnMatineeEnd : 1; // 0xa0(0x01)
	char bSuppressSubtitles : 1; // 0xa0(0x01)
	char bTreatAsDialogue : 1; // 0xa0(0x01)
	char bAttach : 1; // 0xa0(0x01)
	char UnknownData_A0_5 : 3; // 0xa0(0x01)
	char UnknownData_A1[0x7]; // 0xa1(0x07)
};

// Class Engine.InterpTrackVectorMaterialParam
// Size: 0xa8 (Inherited: 0x90)
struct UInterpTrackVectorMaterialParam : UInterpTrackVectorBase {
	struct TArray<struct UMaterialInterface*> TargetMaterials; // 0x90(0x10)
	struct FName ParamName; // 0xa0(0x08)
};

// Class Engine.InterpTrackVectorProp
// Size: 0x98 (Inherited: 0x90)
struct UInterpTrackVectorProp : UInterpTrackVectorBase {
	struct FName PropertyName; // 0x90(0x08)
};

// Class Engine.InterpTrackVisibility
// Size: 0x88 (Inherited: 0x70)
struct UInterpTrackVisibility : UInterpTrack {
	struct TArray<struct FVisibilityTrackKey> VisibilityTrack; // 0x70(0x10)
	char bFireEventsWhenForwards : 1; // 0x80(0x01)
	char bFireEventsWhenBackwards : 1; // 0x80(0x01)
	char bFireEventsWhenJumpingForwards : 1; // 0x80(0x01)
	char UnknownData_80_3 : 5; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
};

// Class Engine.InterpTrackInst
// Size: 0x28 (Inherited: 0x28)
struct UInterpTrackInst : UObject {
};

// Class Engine.InterpTrackInstAnimControl
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstAnimControl : UInterpTrackInst {
	float LastUpdatePosition; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// Class Engine.InterpTrackInstAudioMaster
// Size: 0x28 (Inherited: 0x28)
struct UInterpTrackInstAudioMaster : UInterpTrackInst {
};

// Class Engine.InterpTrackInstColorScale
// Size: 0x28 (Inherited: 0x28)
struct UInterpTrackInstColorScale : UInterpTrackInst {
};

// Class Engine.InterpTrackInstDirector
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstDirector : UInterpTrackInst {
	struct AActor* OldViewTarget; // 0x28(0x08)
};

// Class Engine.InterpTrackInstEvent
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstEvent : UInterpTrackInst {
	float LastUpdatePosition; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// Class Engine.InterpTrackInstFade
// Size: 0x28 (Inherited: 0x28)
struct UInterpTrackInstFade : UInterpTrackInst {
};

// Class Engine.InterpTrackInstFloatAnimBPParam
// Size: 0x40 (Inherited: 0x28)
struct UInterpTrackInstFloatAnimBPParam : UInterpTrackInst {
	struct UAnimInstance* AnimScriptInstance; // 0x28(0x08)
	float ResetFloat; // 0x30(0x04)
	char UnknownData_34[0xc]; // 0x34(0x0c)
};

// Class Engine.InterpTrackInstFloatMaterialParam
// Size: 0x60 (Inherited: 0x28)
struct UInterpTrackInstFloatMaterialParam : UInterpTrackInst {
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstances; // 0x28(0x10)
	struct TArray<float> ResetFloats; // 0x38(0x10)
	struct TArray<struct FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x48(0x10)
	struct UInterpTrackFloatMaterialParam* InstancedTrack; // 0x58(0x08)
};

// Class Engine.InterpTrackInstFloatParticleParam
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstFloatParticleParam : UInterpTrackInst {
	float ResetFloat; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// Class Engine.InterpTrackInstMove
// Size: 0x40 (Inherited: 0x28)
struct UInterpTrackInstMove : UInterpTrackInst {
	struct FVector ResetLocation; // 0x28(0x0c)
	struct FRotator ResetRotation; // 0x34(0x0c)
};

// Class Engine.InterpTrackInstParticleReplay
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstParticleReplay : UInterpTrackInst {
	float LastUpdatePosition; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// Class Engine.InterpTrackInstProperty
// Size: 0x38 (Inherited: 0x28)
struct UInterpTrackInstProperty : UInterpTrackInst {
	struct UProperty* InterpProperty; // 0x28(0x08)
	struct UObject* PropertyOuterObjectInst; // 0x30(0x08)
};

// Class Engine.InterpTrackInstBoolProp
// Size: 0x50 (Inherited: 0x38)
struct UInterpTrackInstBoolProp : UInterpTrackInstProperty {
	char UnknownData_38[0x8]; // 0x38(0x08)
	struct UBoolProperty* BoolProperty; // 0x40(0x08)
	bool ResetBool; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// Class Engine.InterpTrackInstColorProp
// Size: 0x48 (Inherited: 0x38)
struct UInterpTrackInstColorProp : UInterpTrackInstProperty {
	char UnknownData_38[0x8]; // 0x38(0x08)
	struct FColor ResetColor; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
};

// Class Engine.InterpTrackInstFloatProp
// Size: 0x48 (Inherited: 0x38)
struct UInterpTrackInstFloatProp : UInterpTrackInstProperty {
	char UnknownData_38[0x8]; // 0x38(0x08)
	float ResetFloat; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
};

// Class Engine.InterpTrackInstLinearColorProp
// Size: 0x50 (Inherited: 0x38)
struct UInterpTrackInstLinearColorProp : UInterpTrackInstProperty {
	char UnknownData_38[0x8]; // 0x38(0x08)
	struct FLinearColor ResetColor; // 0x40(0x10)
};

// Class Engine.InterpTrackInstVectorProp
// Size: 0x50 (Inherited: 0x38)
struct UInterpTrackInstVectorProp : UInterpTrackInstProperty {
	char UnknownData_38[0x8]; // 0x38(0x08)
	struct FVector ResetVector; // 0x40(0x0c)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.InterpTrackInstSound
// Size: 0x38 (Inherited: 0x28)
struct UInterpTrackInstSound : UInterpTrackInst {
	float LastUpdatePosition; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct UAudioComponent* PlayAudioComp; // 0x30(0x08)
};

// Class Engine.InterpTrackInstToggle
// Size: 0x38 (Inherited: 0x28)
struct UInterpTrackInstToggle : UInterpTrackInst {
	char Action; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	float LastUpdatePosition; // 0x2c(0x04)
	char bSavedActiveState : 1; // 0x30(0x01)
	char UnknownData_30_1 : 7; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// Class Engine.InterpTrackInstVectorMaterialParam
// Size: 0x60 (Inherited: 0x28)
struct UInterpTrackInstVectorMaterialParam : UInterpTrackInst {
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstances; // 0x28(0x10)
	struct TArray<struct FVector> ResetVectors; // 0x38(0x10)
	struct TArray<struct FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x48(0x10)
	struct UInterpTrackVectorMaterialParam* InstancedTrack; // 0x58(0x08)
};

// Class Engine.InterpTrackInstVisibility
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstVisibility : UInterpTrackInst {
	char Action; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	float LastUpdatePosition; // 0x2c(0x04)
};

// Class Engine.IntSerialization
// Size: 0x50 (Inherited: 0x28)
struct UIntSerialization : UObject {
	uint16_t UnsignedInt16Variable; // 0x28(0x02)
	char UnknownData_2A[0x2]; // 0x2a(0x02)
	uint32_t UnsignedInt32Variable; // 0x2c(0x04)
	uint64_t UnsignedInt64Variable; // 0x30(0x08)
	int8_t SignedInt8Variable; // 0x38(0x01)
	char UnknownData_39[0x1]; // 0x39(0x01)
	int16_t SignedInt16Variable; // 0x3a(0x02)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	int64_t SignedInt64Variable; // 0x40(0x08)
	char UnsignedInt8Variable; // 0x48(0x01)
	char UnknownData_49[0x3]; // 0x49(0x03)
	int32_t SignedInt32Variable; // 0x4c(0x04)
};

// Class Engine.Layer
// Size: 0x48 (Inherited: 0x28)
struct ULayer : UObject {
	struct FName LayerName; // 0x28(0x08)
	char bIsVisible : 1; // 0x30(0x01)
	char UnknownData_30_1 : 7; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct TArray<struct FLayerActorStats> ActorStats; // 0x38(0x10)
};

// Class Engine.LevelActorContainer
// Size: 0x38 (Inherited: 0x28)
struct ULevelActorContainer : UObject {
	struct TArray<struct AActor*> Actors; // 0x28(0x10)
};

// Class Engine.LevelStreaming
// Size: 0x210 (Inherited: 0x28)
struct ULevelStreaming : UObject {
	struct UWorld* WorldAsset; // 0x28(0x20)
	char UnknownData_48[0x8]; // 0x48(0x08)
	struct FName PackageNameToLoad; // 0x50(0x08)
	struct TArray<struct FName> LODPackageNames; // 0x58(0x10)
	char UnknownData_68[0x18]; // 0x68(0x18)
	struct FTransform LevelTransform; // 0x80(0x30)
	char UnknownData_B0[0xc]; // 0xb0(0x0c)
	char UnknownData_BC_0 : 3; // 0xbc(0x01)
	char bShouldBeVisibleInEditor : 1; // 0xbc(0x01)
	char Blocked : 1; // 0xbc(0x01)
	char bShouldBeLoaded : 1; // 0xbc(0x01)
	char bShouldBeVisible : 1; // 0xbc(0x01)
	char bShouldBlockOnLoad : 1; // 0xbc(0x01)
	char UnknownData_BD[0x3]; // 0xbd(0x03)
	int32_t LevelLODIndex; // 0xc0(0x04)
	char bDisableDistanceStreaming : 1; // 0xc4(0x01)
	char UnknownData_C4_1 : 2; // 0xc4(0x01)
	char bDrawOnLevelStatusMap : 1; // 0xc4(0x01)
	char UnknownData_C4_4 : 4; // 0xc4(0x01)
	char UnknownData_C5[0x3]; // 0xc5(0x03)
	struct FLinearColor LevelColor; // 0xc8(0x10)
	struct TArray<struct ALevelStreamingVolume*> EditorStreamingVolumes; // 0xd8(0x10)
	float MinTimeBetweenVolumeUnloadRequests; // 0xe8(0x04)
	char UnknownData_EC[0x4]; // 0xec(0x04)
	struct TArray<struct FString> Keywords; // 0xf0(0x10)
	struct FMulticastDelegate OnLevelLoaded; // 0x100(0x10)
	struct FMulticastDelegate OnLevelUnloaded; // 0x110(0x10)
	struct FMulticastDelegate OnLevelShown; // 0x120(0x10)
	struct FMulticastDelegate OnLevelHidden; // 0x130(0x10)
	char UnknownData_140[0xc0]; // 0x140(0xc0)
	struct ULevel* LoadedLevel; // 0x200(0x08)
	struct ULevel* PendingUnloadLevel; // 0x208(0x08)

	bool IsStreamingStatePending(); // Function Engine.LevelStreaming.IsStreamingStatePending // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x30ff6c0
	bool IsLevelVisible(); // Function Engine.LevelStreaming.IsLevelVisible // RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x30ff660
	bool IsLevelLoaded(); // Function Engine.LevelStreaming.IsLevelLoaded // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x30ff630
	struct ALevelScriptActor* GetLevelScriptActor(); // Function Engine.LevelStreaming.GetLevelScriptActor // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x30ff1a0
	struct ULevelStreaming* CreateInstance(struct FString UniqueInstanceName); // Function Engine.LevelStreaming.CreateInstance // Final|Native|Public|BlueprintCallable // @ game+0x30fece0
};

// Class Engine.LevelStreamingAlwaysLoaded
// Size: 0x210 (Inherited: 0x210)
struct ULevelStreamingAlwaysLoaded : ULevelStreaming {
};

// Class Engine.LevelStreamingKismet
// Size: 0x220 (Inherited: 0x210)
struct ULevelStreamingKismet : ULevelStreaming {
	char bInitiallyLoaded : 1; // 0x210(0x01)
	char bInitiallyVisible : 1; // 0x210(0x01)
	char UnknownData_210_2 : 6; // 0x210(0x01)
	char UnknownData_211[0xf]; // 0x211(0x0f)
};

// Class Engine.LevelStreamingPersistent
// Size: 0x210 (Inherited: 0x210)
struct ULevelStreamingPersistent : ULevelStreaming {
};

// Class Engine.LightmappedSurfaceCollection
// Size: 0x40 (Inherited: 0x28)
struct ULightmappedSurfaceCollection : UObject {
	struct UModel* SourceModel; // 0x28(0x08)
	struct TArray<int32_t> Surfaces; // 0x30(0x10)
};

// Class Engine.LightmassPrimitiveSettingsObject
// Size: 0x40 (Inherited: 0x28)
struct ULightmassPrimitiveSettingsObject : UObject {
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x28(0x18)
};

// Class Engine.LocalMessage
// Size: 0x28 (Inherited: 0x28)
struct ULocalMessage : UObject {
};

// Class Engine.EngineMessage
// Size: 0xa8 (Inherited: 0x28)
struct UEngineMessage : ULocalMessage {
	struct FString FailedPlaceMessage; // 0x28(0x10)
	struct FString MaxedOutMessage; // 0x38(0x10)
	struct FString EnteredMessage; // 0x48(0x10)
	struct FString LeftMessage; // 0x58(0x10)
	struct FString GlobalNameChange; // 0x68(0x10)
	struct FString SpecEnteredMessage; // 0x78(0x10)
	struct FString NewPlayerMessage; // 0x88(0x10)
	struct FString NewSpecMessage; // 0x98(0x10)
};

// Class Engine.MaterialExpressionAbs
// Size: 0xa8 (Inherited: 0x70)
struct UMaterialExpressionAbs : UMaterialExpression {
	struct FExpressionInput Input; // 0x70(0x38)
};

// Class Engine.MaterialExpressionActorPositionWS
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionActorPositionWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionAdd
// Size: 0xe8 (Inherited: 0x70)
struct UMaterialExpressionAdd : UMaterialExpression {
	struct FExpressionInput A; // 0x70(0x38)
	struct FExpressionInput B; // 0xa8(0x38)
	float ConstA; // 0xe0(0x04)
	float ConstB; // 0xe4(0x04)
};

// Class Engine.MaterialExpressionAppendVector
// Size: 0xe0 (Inherited: 0x70)
struct UMaterialExpressionAppendVector : UMaterialExpression {
	struct FExpressionInput A; // 0x70(0x38)
	struct FExpressionInput B; // 0xa8(0x38)
};

// Class Engine.MaterialExpressionAtmosphericFogColor
// Size: 0xa8 (Inherited: 0x70)
struct UMaterialExpressionAtmosphericFogColor : UMaterialExpression {
	struct FExpressionInput WorldPosition; // 0x70(0x38)
};

// Class Engine.MaterialExpressionBlackBody
// Size: 0xa8 (Inherited: 0x70)
struct UMaterialExpressionBlackBody : UMaterialExpression {
	struct FExpressionInput Temp; // 0x70(0x38)
};

// Class Engine.MaterialExpressionBoneMatrix
// Size: 0x80 (Inherited: 0x70)
struct UMaterialExpressionBoneMatrix : UMaterialExpression {
	int32_t ReferenceIndex; // 0x70(0x04)
	struct FName BoneName; // 0x74(0x08)
	bool bPosition; // 0x7c(0x01)
	char UnknownData_7D[0x3]; // 0x7d(0x03)
};

// Class Engine.MaterialExpressionBreakMaterialAttributes
// Size: 0xf0 (Inherited: 0x70)
struct UMaterialExpressionBreakMaterialAttributes : UMaterialExpression {
	struct FExpressionInput Struct; // 0x70(0x38)
	struct FMaterialAttributesInput MaterialAttributes; // 0xa8(0x38)
	char UnknownData_E0[0x10]; // 0xe0(0x10)
};

// Class Engine.MaterialExpressionBumpOffset
// Size: 0x128 (Inherited: 0x70)
struct UMaterialExpressionBumpOffset : UMaterialExpression {
	struct FExpressionInput Coordinate; // 0x70(0x38)
	struct FExpressionInput Height; // 0xa8(0x38)
	struct FExpressionInput HeightRatioInput; // 0xe0(0x38)
	float HeightRatio; // 0x118(0x04)
	float ReferencePlane; // 0x11c(0x04)
	uint32_t ConstCoordinate; // 0x120(0x04)
	char UnknownData_124[0x4]; // 0x124(0x04)
};

// Class Engine.MaterialExpressionCameraPositionWS
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionCameraPositionWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionCameraVectorWS
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionCameraVectorWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionCausticTexture
// Size: 0xa8 (Inherited: 0x70)
struct UMaterialExpressionCausticTexture : UMaterialExpression {
	struct FExpressionInput Coordinates; // 0x70(0x38)
};

// Class Engine.MaterialExpressionCausticTextureCoordinate
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionCausticTextureCoordinate : UMaterialExpression {
};

// Class Engine.MaterialExpressionCeil
// Size: 0xa8 (Inherited: 0x70)
struct UMaterialExpressionCeil : UMaterialExpression {
	struct FExpressionInput Input; // 0x70(0x38)
};

// Class Engine.MaterialExpressionClamp
// Size: 0x128 (Inherited: 0x70)
struct UMaterialExpressionClamp : UMaterialExpression {
	struct FExpressionInput Input; // 0x70(0x38)
	struct FExpressionInput Min; // 0xa8(0x38)
	struct FExpressionInput Max; // 0xe0(0x38)
	char ClampMode; // 0x118(0x01)
	char UnknownData_119[0x3]; // 0x119(0x03)
	float MinDefault; // 0x11c(0x04)
	float MaxDefault; // 0x120(0x04)
	char UnknownData_124[0x4]; // 0x124(0x04)
};

// Class Engine.MaterialExpressionCollectionParameter
// Size: 0x90 (Inherited: 0x70)
struct UMaterialExpressionCollectionParameter : UMaterialExpression {
	struct UMaterialParameterCollection* Collection; // 0x70(0x08)
	struct FName ParameterName; // 0x78(0x08)
	struct FGuid ParameterId; // 0x80(0x10)
};

// Class Engine.MaterialExpressionComment
// Size: 0x98 (Inherited: 0x70)
struct UMaterialExpressionComment : UMaterialExpression {
	int32_t SizeX; // 0x70(0x04)
	int32_t SizeY; // 0x74(0x04)
	struct FString Text; // 0x78(0x10)
	struct FLinearColor CommentColor; // 0x88(0x10)
};

// Class Engine.MaterialExpressionComponentMask
// Size: 0xb0 (Inherited: 0x70)
struct UMaterialExpressionComponentMask : UMaterialExpression {
	struct FExpressionInput Input; // 0x70(0x38)
	char R : 1; // 0xa8(0x01)
	char G : 1; // 0xa8(0x01)
	char B : 1; // 0xa8(0x01)
	char A : 1; // 0xa8(0x01)
	char UnknownData_A8_4 : 4; // 0xa8(0x01)
	char UnknownData_A9[0x7]; // 0xa9(0x07)
};

// Class Engine.MaterialExpressionConstant
// Size: 0x78 (Inherited: 0x70)
struct UMaterialExpressionConstant : UMaterialExpression {
	float R; // 0x70(0x04)
	char UnknownData_74[0x4]; // 0x74(0x04)
};

// Class Engine.MaterialExpressionConstant2Vector
// Size: 0x78 (Inherited: 0x70)
struct UMaterialExpressionConstant2Vector : UMaterialExpression {
	float R; // 0x70(0x04)
	float G; // 0x74(0x04)
};

// Class Engine.MaterialExpressionConstant3Vector
// Size: 0x80 (Inherited: 0x70)
struct UMaterialExpressionConstant3Vector : UMaterialExpression {
	struct FLinearColor Constant; // 0x70(0x10)
};

// Class Engine.MaterialExpressionConstant4Vector
// Size: 0x80 (Inherited: 0x70)
struct UMaterialExpressionConstant4Vector : UMaterialExpression {
	struct FLinearColor Constant; // 0x70(0x10)
};

// Class Engine.MaterialExpressionConstantBiasScale
// Size: 0xb0 (Inherited: 0x70)
struct UMaterialExpressionConstantBiasScale : UMaterialExpression {
	struct FExpressionInput Input; // 0x70(0x38)
	float Bias; // 0xa8(0x04)
	float Scale; // 0xac(0x04)
};

// Class Engine.MaterialExpressionCosine
// Size: 0xb0 (Inherited: 0x70)
struct UMaterialExpressionCosine : UMaterialExpression {
	struct FExpressionInput Input; // 0x70(0x38)
	float Period; // 0xa8(0x04)
	char UnknownData_AC[0x4]; // 0xac(0x04)
};

// Class Engine.MaterialExpressionCrossProduct
// Size: 0xe0 (Inherited: 0x70)
struct UMaterialExpressionCrossProduct : UMaterialExpression {
	struct FExpressionInput A; // 0x70(0x38)
	struct FExpressionInput B; // 0xa8(0x38)
};

// Class Engine.MaterialExpressionCustom
// Size: 0xb8 (Inherited: 0x70)
struct UMaterialExpressionCustom : UMaterialExpression {
	struct FString Code; // 0x70(0x10)
	char OutputType; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
	struct FString Description; // 0x88(0x10)
	struct TArray<struct FCustomInput> Inputs; // 0x98(0x10)
	struct FString DeclarationCode; // 0xa8(0x10)
};

// Class Engine.MaterialExpressionCustomVelocity
// Size: 0xa8 (Inherited: 0x70)
struct UMaterialExpressionCustomVelocity : UMaterialExpressionCustomOutput {
	struct FExpressionInput Velocity2D; // 0x70(0x38)
};

// Class Engine.MaterialExpressionDDX
// Size: 0xa8 (Inherited: 0x70)
struct UMaterialExpressionDDX : UMaterialExpression {
	struct FExpressionInput Value; // 0x70(0x38)
};

// Class Engine.MaterialExpressionDDY
// Size: 0xa8 (Inherited: 0x70)
struct UMaterialExpressionDDY : UMaterialExpression {
	struct FExpressionInput Value; // 0x70(0x38)
};

// Class Engine.MaterialExpressionDecalMipmapLevel
// Size: 0xb0 (Inherited: 0x70)
struct UMaterialExpressionDecalMipmapLevel : UMaterialExpression {
	struct FExpressionInput TextureSize; // 0x70(0x38)
	float ConstWidth; // 0xa8(0x04)
	float ConstHeight; // 0xac(0x04)
};

// Class Engine.MaterialExpressionDepthFade
// Size: 0xe8 (Inherited: 0x70)
struct UMaterialExpressionDepthFade : UMaterialExpression {
	struct FExpressionInput InOpacity; // 0x70(0x38)
	struct FExpressionInput FadeDistance; // 0xa8(0x38)
	float OpacityDefault; // 0xe0(0x04)
	float FadeDistanceDefault; // 0xe4(0x04)
};

// Class Engine.MaterialExpressionDepthOfFieldFunction
// Size: 0xb0 (Inherited: 0x70)
struct UMaterialExpressionDepthOfFieldFunction : UMaterialExpression {
	char FunctionValue; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
	struct FExpressionInput Depth; // 0x78(0x38)
};

// Class Engine.MaterialExpressionDeriveNormalZ
// Size: 0xa8 (Inherited: 0x70)
struct UMaterialExpressionDeriveNormalZ : UMaterialExpression {
	struct FExpressionInput InXY; // 0x70(0x38)
};

// Class Engine.MaterialExpressionDesaturation
// Size: 0xf0 (Inherited: 0x70)
struct UMaterialExpressionDesaturation : UMaterialExpression {
	struct FExpressionInput Input; // 0x70(0x38)
	struct FExpressionInput Fraction; // 0xa8(0x38)
	struct FLinearColor LuminanceFactors; // 0xe0(0x10)
};

// Class Engine.MaterialExpressionDistance
// Size: 0xe0 (Inherited: 0x70)
struct UMaterialExpressionDistance : UMaterialExpression {
	struct FExpressionInput A; // 0x70(0x38)
	struct FExpressionInput B; // 0xa8(0x38)
};

// Class Engine.MaterialExpressionDistanceCullFade
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionDistanceCullFade : UMaterialExpression {
};

// Class Engine.MaterialExpressionDistanceFieldGradient
// Size: 0xa8 (Inherited: 0x70)
struct UMaterialExpressionDistanceFieldGradient : UMaterialExpression {
	struct FExpressionInput Position; // 0x70(0x38)
};

// Class Engine.MaterialExpressionDistanceToNearestSurface
// Size: 0xa8 (Inherited: 0x70)
struct UMaterialExpressionDistanceToNearestSurface : UMaterialExpression {
	struct FExpressionInput Position; // 0x70(0x38)
};

// Class Engine.MaterialExpressionDivide
// Size: 0xe8 (Inherited: 0x70)
struct UMaterialExpressionDivide : UMaterialExpression {
	struct FExpressionInput A; // 0x70(0x38)
	struct FExpressionInput B; // 0xa8(0x38)
	float ConstA; // 0xe0(0x04)
	float ConstB; // 0xe4(0x04)
};

// Class Engine.MaterialExpressionDotProduct
// Size: 0xe0 (Inherited: 0x70)
struct UMaterialExpressionDotProduct : UMaterialExpression {
	struct FExpressionInput A; // 0x70(0x38)
	struct FExpressionInput B; // 0xa8(0x38)
};

// Class Engine.MaterialExpressionDynamicParameter
// Size: 0x90 (Inherited: 0x70)
struct UMaterialExpressionDynamicParameter : UMaterialExpression {
	struct TArray<struct FString> ParamNames; // 0x70(0x10)
	struct FLinearColor DefaultValue; // 0x80(0x10)
};

// Class Engine.MaterialExpressionEyeAdaptation
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionEyeAdaptation : UMaterialExpression {
};

// Class Engine.MaterialExpressionFeatureLevelSwitch
// Size: 0x188 (Inherited: 0x70)
struct UMaterialExpressionFeatureLevelSwitch : UMaterialExpression {
	struct FExpressionInput Default; // 0x70(0x38)
	struct FExpressionInput Inputs[0x04]; // 0xa8(0xe0)
};

// Class Engine.MaterialExpressionFloor
// Size: 0xa8 (Inherited: 0x70)
struct UMaterialExpressionFloor : UMaterialExpression {
	struct FExpressionInput Input; // 0x70(0x38)
};

// Class Engine.MaterialExpressionFmod
// Size: 0xe0 (Inherited: 0x70)
struct UMaterialExpressionFmod : UMaterialExpression {
	struct FExpressionInput A; // 0x70(0x38)
	struct FExpressionInput B; // 0xa8(0x38)
};

// Class Engine.MaterialExpressionFontSample
// Size: 0x80 (Inherited: 0x70)
struct UMaterialExpressionFontSample : UMaterialExpression {
	struct UFont* Font; // 0x70(0x08)
	int32_t FontTexturePage; // 0x78(0x04)
	char UnknownData_7C[0x4]; // 0x7c(0x04)
};

// Class Engine.MaterialExpressionFontSampleParameter
// Size: 0xa0 (Inherited: 0x80)
struct UMaterialExpressionFontSampleParameter : UMaterialExpressionFontSample {
	struct FName ParameterName; // 0x80(0x08)
	struct FGuid ExpressionGUID; // 0x88(0x10)
	struct FName Group; // 0x98(0x08)
};

// Class Engine.MaterialExpressionFrac
// Size: 0xa8 (Inherited: 0x70)
struct UMaterialExpressionFrac : UMaterialExpression {
	struct FExpressionInput Input; // 0x70(0x38)
};

// Class Engine.MaterialExpressionFresnel
// Size: 0x128 (Inherited: 0x70)
struct UMaterialExpressionFresnel : UMaterialExpression {
	struct FExpressionInput ExponentIn; // 0x70(0x38)
	float Exponent; // 0xa8(0x04)
	char UnknownData_AC[0x4]; // 0xac(0x04)
	struct FExpressionInput BaseReflectFractionIn; // 0xb0(0x38)
	float BaseReflectFraction; // 0xe8(0x04)
	char UnknownData_EC[0x4]; // 0xec(0x04)
	struct FExpressionInput Normal; // 0xf0(0x38)
};

// Class Engine.MaterialExpressionFunctionInput
// Size: 0x100 (Inherited: 0x70)
struct UMaterialExpressionFunctionInput : UMaterialExpression {
	struct FExpressionInput Preview; // 0x70(0x38)
	struct FString InputName; // 0xa8(0x10)
	struct FString Description; // 0xb8(0x10)
	struct FGuid Id; // 0xc8(0x10)
	char InputType; // 0xd8(0x01)
	char UnknownData_D9[0x7]; // 0xd9(0x07)
	struct FVector4 PreviewValue; // 0xe0(0x10)
	char bUsePreviewValueAsDefault : 1; // 0xf0(0x01)
	char UnknownData_F0_1 : 7; // 0xf0(0x01)
	char UnknownData_F1[0x3]; // 0xf1(0x03)
	int32_t SortPriority; // 0xf4(0x04)
	char bCompilingFunctionPreview : 1; // 0xf8(0x01)
	char UnknownData_F8_1 : 7; // 0xf8(0x01)
	char UnknownData_F9[0x7]; // 0xf9(0x07)
};

// Class Engine.MaterialExpressionFunctionOutput
// Size: 0xe8 (Inherited: 0x70)
struct UMaterialExpressionFunctionOutput : UMaterialExpression {
	struct FString OutputName; // 0x70(0x10)
	struct FString Description; // 0x80(0x10)
	int32_t SortPriority; // 0x90(0x04)
	char UnknownData_94[0x4]; // 0x94(0x04)
	struct FExpressionInput A; // 0x98(0x38)
	char bLastPreviewed : 1; // 0xd0(0x01)
	char UnknownData_D0_1 : 7; // 0xd0(0x01)
	char UnknownData_D1[0x3]; // 0xd1(0x03)
	struct FGuid Id; // 0xd4(0x10)
	char UnknownData_E4[0x4]; // 0xe4(0x04)
};

// Class Engine.MaterialExpressionGIReplace
// Size: 0x118 (Inherited: 0x70)
struct UMaterialExpressionGIReplace : UMaterialExpression {
	struct FExpressionInput Default; // 0x70(0x38)
	struct FExpressionInput StaticIndirect; // 0xa8(0x38)
	struct FExpressionInput DynamicIndirect; // 0xe0(0x38)
};

// Class Engine.MaterialExpressionHash
// Size: 0xa8 (Inherited: 0x70)
struct UMaterialExpressionHash : UMaterialExpression {
	struct FExpressionInput Input; // 0x70(0x38)
};

// Class Engine.MaterialExpressionIf
// Size: 0x198 (Inherited: 0x70)
struct UMaterialExpressionIf : UMaterialExpression {
	struct FExpressionInput A; // 0x70(0x38)
	struct FExpressionInput B; // 0xa8(0x38)
	struct FExpressionInput AGreaterThanB; // 0xe0(0x38)
	struct FExpressionInput AEqualsB; // 0x118(0x38)
	struct FExpressionInput ALessThanB; // 0x150(0x38)
	float EqualsThreshold; // 0x188(0x04)
	float ConstB; // 0x18c(0x04)
	float ConstAEqualsB; // 0x190(0x04)
	char UnknownData_194[0x4]; // 0x194(0x04)
};

// Class Engine.MaterialExpressionIfCondition
// Size: 0x160 (Inherited: 0x70)
struct UMaterialExpressionIfCondition : UMaterialExpression {
	struct FExpressionInput A; // 0x70(0x38)
	struct FExpressionInput B; // 0xa8(0x38)
	struct FExpressionInput IfTrue; // 0xe0(0x38)
	struct FExpressionInput IfFalse; // 0x118(0x38)
	char Condition; // 0x150(0x01)
	char Attribute; // 0x151(0x01)
	char UnknownData_152[0x2]; // 0x152(0x02)
	float ConstB; // 0x154(0x04)
	float ConstIfTrue; // 0x158(0x04)
	float ConstIfFalse; // 0x15c(0x04)
};

// Class Engine.MaterialExpressionIfShadowPass
// Size: 0xe0 (Inherited: 0x70)
struct UMaterialExpressionIfShadowPass : UMaterialExpression {
	struct FExpressionInput Shadow; // 0x70(0x38)
	struct FExpressionInput NotShadow; // 0xa8(0x38)
};

// Class Engine.MaterialExpressionLightmapUVs
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionLightmapUVs : UMaterialExpression {
};

// Class Engine.MaterialExpressionLightmassReplace
// Size: 0xe0 (Inherited: 0x70)
struct UMaterialExpressionLightmassReplace : UMaterialExpression {
	struct FExpressionInput Realtime; // 0x70(0x38)
	struct FExpressionInput Lightmass; // 0xa8(0x38)
};

// Class Engine.MaterialExpressionLightVector
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionLightVector : UMaterialExpression {
};

// Class Engine.MaterialExpressionLinearInterpolate
// Size: 0x128 (Inherited: 0x70)
struct UMaterialExpressionLinearInterpolate : UMaterialExpression {
	struct FExpressionInput A; // 0x70(0x38)
	struct FExpressionInput B; // 0xa8(0x38)
	struct FExpressionInput Alpha; // 0xe0(0x38)
	float ConstA; // 0x118(0x04)
	float ConstB; // 0x11c(0x04)
	float ConstAlpha; // 0x120(0x04)
	char UnknownData_124[0x4]; // 0x124(0x04)
};

// Class Engine.MaterialExpressionLocalDisturbanceTexture
// Size: 0xa8 (Inherited: 0x70)
struct UMaterialExpressionLocalDisturbanceTexture : UMaterialExpression {
	struct FExpressionInput Coordinates; // 0x70(0x38)
};

// Class Engine.MaterialExpressionLogarithm2
// Size: 0xa8 (Inherited: 0x70)
struct UMaterialExpressionLogarithm2 : UMaterialExpression {
	struct FExpressionInput X; // 0x70(0x38)
};

// Class Engine.MaterialExpressionLowResClouds
// Size: 0xa8 (Inherited: 0x70)
struct UMaterialExpressionLowResClouds : UMaterialExpression {
	struct FExpressionInput Coordinates; // 0x70(0x38)
};

// Class Engine.MaterialExpressionLumaAvg
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionLumaAvg : UMaterialExpression {
};

// Class Engine.MaterialExpressionMakeMaterialAttributes
// Size: 0x5e8 (Inherited: 0x70)
struct UMaterialExpressionMakeMaterialAttributes : UMaterialExpression {
	struct FExpressionInput BaseColor; // 0x70(0x38)
	struct FExpressionInput Metallic; // 0xa8(0x38)
	struct FExpressionInput Specular; // 0xe0(0x38)
	struct FExpressionInput Roughness; // 0x118(0x38)
	struct FExpressionInput EmissiveColor; // 0x150(0x38)
	struct FExpressionInput Opacity; // 0x188(0x38)
	struct FExpressionInput OpacityMask; // 0x1c0(0x38)
	struct FExpressionInput Normal; // 0x1f8(0x38)
	struct FExpressionInput WorldPositionOffset; // 0x230(0x38)
	struct FExpressionInput WorldDisplacement; // 0x268(0x38)
	struct FExpressionInput TessellationMultiplier; // 0x2a0(0x38)
	struct FExpressionInput SubsurfaceColor; // 0x2d8(0x38)
	struct FExpressionInput ClearCoat; // 0x310(0x38)
	struct FExpressionInput ClearCoatRoughness; // 0x348(0x38)
	struct FExpressionInput AmbientOcclusion; // 0x380(0x38)
	struct FExpressionInput Refraction; // 0x3b8(0x38)
	struct FExpressionInput CustomizedUVs[0x08]; // 0x3f0(0x1c0)
	struct FExpressionInput PixelDepthOffset; // 0x5b0(0x38)
};

// Class Engine.MaterialExpressionMaterialFunctionCall
// Size: 0x98 (Inherited: 0x70)
struct UMaterialExpressionMaterialFunctionCall : UMaterialExpression {
	struct UMaterialFunction* MaterialFunction; // 0x70(0x08)
	struct TArray<struct FFunctionExpressionInput> FunctionInputs; // 0x78(0x10)
	struct TArray<struct FFunctionExpressionOutput> FunctionOutputs; // 0x88(0x10)
};

// Class Engine.MaterialExpressionMax
// Size: 0xe8 (Inherited: 0x70)
struct UMaterialExpressionMax : UMaterialExpression {
	struct FExpressionInput A; // 0x70(0x38)
	struct FExpressionInput B; // 0xa8(0x38)
	float ConstA; // 0xe0(0x04)
	float ConstB; // 0xe4(0x04)
};

// Class Engine.MaterialExpressionMin
// Size: 0xe8 (Inherited: 0x70)
struct UMaterialExpressionMin : UMaterialExpression {
	struct FExpressionInput A; // 0x70(0x38)
	struct FExpressionInput B; // 0xa8(0x38)
	float ConstA; // 0xe0(0x04)
	float ConstB; // 0xe4(0x04)
};

// Class Engine.MaterialExpressionMultiply
// Size: 0xe8 (Inherited: 0x70)
struct UMaterialExpressionMultiply : UMaterialExpression {
	struct FExpressionInput A; // 0x70(0x38)
	struct FExpressionInput B; // 0xa8(0x38)
	float ConstA; // 0xe0(0x04)
	float ConstB; // 0xe4(0x04)
};

// Class Engine.MaterialExpressionNoise
// Size: 0x100 (Inherited: 0x70)
struct UMaterialExpressionNoise : UMaterialExpression {
	struct FExpressionInput Position; // 0x70(0x38)
	struct FExpressionInput FilterWidth; // 0xa8(0x38)
	float Scale; // 0xe0(0x04)
	int32_t Quality; // 0xe4(0x04)
	char NoiseFunction; // 0xe8(0x01)
	char UnknownData_E9[0x3]; // 0xe9(0x03)
	char bTurbulence : 1; // 0xec(0x01)
	char UnknownData_EC_1 : 7; // 0xec(0x01)
	char UnknownData_ED[0x3]; // 0xed(0x03)
	int32_t Levels; // 0xf0(0x04)
	float OutputMin; // 0xf4(0x04)
	float OutputMax; // 0xf8(0x04)
	float LevelScale; // 0xfc(0x04)
};

// Class Engine.MaterialExpressionNormalize
// Size: 0xa8 (Inherited: 0x70)
struct UMaterialExpressionNormalize : UMaterialExpression {
	struct FExpressionInput VectorInput; // 0x70(0x38)
};

// Class Engine.MaterialExpressionObjectBounds
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionObjectBounds : UMaterialExpression {
};

// Class Engine.MaterialExpressionObjectOrientation
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionObjectOrientation : UMaterialExpression {
};

// Class Engine.MaterialExpressionObjectPositionWS
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionObjectPositionWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionObjectRadius
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionObjectRadius : UMaterialExpression {
};

// Class Engine.MaterialExpressionOneMinus
// Size: 0xa8 (Inherited: 0x70)
struct UMaterialExpressionOneMinus : UMaterialExpression {
	struct FExpressionInput Input; // 0x70(0x38)
};

// Class Engine.MaterialExpressionPanner
// Size: 0xf0 (Inherited: 0x70)
struct UMaterialExpressionPanner : UMaterialExpression {
	struct FExpressionInput Coordinate; // 0x70(0x38)
	struct FExpressionInput Time; // 0xa8(0x38)
	float SpeedX; // 0xe0(0x04)
	float SpeedY; // 0xe4(0x04)
	uint32_t ConstCoordinate; // 0xe8(0x04)
	bool bFractionalPart; // 0xec(0x01)
	char UnknownData_ED[0x3]; // 0xed(0x03)
};

// Class Engine.MaterialExpressionParameter
// Size: 0x90 (Inherited: 0x70)
struct UMaterialExpressionParameter : UMaterialExpression {
	struct FName ParameterName; // 0x70(0x08)
	struct FGuid ExpressionGUID; // 0x78(0x10)
	struct FName Group; // 0x88(0x08)
};

// Class Engine.MaterialExpressionScalarParameter
// Size: 0xa0 (Inherited: 0x90)
struct UMaterialExpressionScalarParameter : UMaterialExpressionParameter {
	float DefaultValue; // 0x90(0x04)
	float SliderMin; // 0x94(0x04)
	float SliderMax; // 0x98(0x04)
	bool bUseCustomPrimitiveData; // 0x9c(0x01)
	char PrimitiveDataIndex; // 0x9d(0x01)
	char UnknownData_9E[0x2]; // 0x9e(0x02)
};

// Class Engine.MaterialExpressionStaticBoolParameter
// Size: 0x98 (Inherited: 0x90)
struct UMaterialExpressionStaticBoolParameter : UMaterialExpressionParameter {
	char DefaultValue : 1; // 0x90(0x01)
	char UnknownData_90_1 : 7; // 0x90(0x01)
	char UnknownData_91[0x7]; // 0x91(0x07)
};

// Class Engine.MaterialExpressionStaticSwitchParameter
// Size: 0x108 (Inherited: 0x98)
struct UMaterialExpressionStaticSwitchParameter : UMaterialExpressionStaticBoolParameter {
	struct FExpressionInput A; // 0x98(0x38)
	struct FExpressionInput B; // 0xd0(0x38)
};

// Class Engine.MaterialExpressionStaticComponentMaskParameter
// Size: 0xd0 (Inherited: 0x90)
struct UMaterialExpressionStaticComponentMaskParameter : UMaterialExpressionParameter {
	struct FExpressionInput Input; // 0x90(0x38)
	char DefaultR : 1; // 0xc8(0x01)
	char DefaultG : 1; // 0xc8(0x01)
	char DefaultB : 1; // 0xc8(0x01)
	char DefaultA : 1; // 0xc8(0x01)
	char UnknownData_C8_4 : 4; // 0xc8(0x01)
	char UnknownData_C9[0x7]; // 0xc9(0x07)
};

// Class Engine.MaterialExpressionVectorParameter
// Size: 0xa8 (Inherited: 0x90)
struct UMaterialExpressionVectorParameter : UMaterialExpressionParameter {
	struct FLinearColor DefaultValue; // 0x90(0x10)
	bool bUseCustomPrimitiveData; // 0xa0(0x01)
	char PrimitiveDataIndex; // 0xa1(0x01)
	char UnknownData_A2[0x6]; // 0xa2(0x06)
};

// Class Engine.MaterialExpressionParticleColor
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionParticleColor : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleDirection
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionParticleDirection : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleMacroUV
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionParticleMacroUV : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleMotionBlurFade
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionParticleMotionBlurFade : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticlePositionWS
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionParticlePositionWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleRadius
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionParticleRadius : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleRelativeTime
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionParticleRelativeTime : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleSize
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionParticleSize : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleSpeed
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionParticleSpeed : UMaterialExpression {
};

// Class Engine.MaterialExpressionPerInstanceFadeAmount
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionPerInstanceFadeAmount : UMaterialExpression {
};

// Class Engine.MaterialExpressionPerInstanceRandom
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionPerInstanceRandom : UMaterialExpression {
};

// Class Engine.MaterialExpressionPixelDepth
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionPixelDepth : UMaterialExpression {
};

// Class Engine.MaterialExpressionPixelNormalWS
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionPixelNormalWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionPower
// Size: 0xe8 (Inherited: 0x70)
struct UMaterialExpressionPower : UMaterialExpression {
	struct FExpressionInput Base; // 0x70(0x38)
	struct FExpressionInput Exponent; // 0xa8(0x38)
	float ConstExponent; // 0xe0(0x04)
	char UnknownData_E4[0x4]; // 0xe4(0x04)
};

// Class Engine.MaterialExpressionPrecomputedAOMask
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionPrecomputedAOMask : UMaterialExpression {
};

// Class Engine.MaterialExpressionQualitySwitch
// Size: 0x150 (Inherited: 0x70)
struct UMaterialExpressionQualitySwitch : UMaterialExpression {
	struct FExpressionInput Default; // 0x70(0x38)
	struct FExpressionInput Inputs[0x03]; // 0xa8(0xa8)
};

// Class Engine.MaterialExpressionReflectionVectorWS
// Size: 0xb0 (Inherited: 0x70)
struct UMaterialExpressionReflectionVectorWS : UMaterialExpression {
	struct FExpressionInput CustomWorldNormal; // 0x70(0x38)
	char bNormalizeCustomWorldNormal : 1; // 0xa8(0x01)
	char UnknownData_A8_1 : 7; // 0xa8(0x01)
	char UnknownData_A9[0x7]; // 0xa9(0x07)
};

// Class Engine.MaterialExpressionRotateAboutAxis
// Size: 0x158 (Inherited: 0x70)
struct UMaterialExpressionRotateAboutAxis : UMaterialExpression {
	struct FExpressionInput NormalizedRotationAxis; // 0x70(0x38)
	struct FExpressionInput RotationAngle; // 0xa8(0x38)
	struct FExpressionInput PivotPoint; // 0xe0(0x38)
	struct FExpressionInput Position; // 0x118(0x38)
	float Period; // 0x150(0x04)
	char UnknownData_154[0x4]; // 0x154(0x04)
};

// Class Engine.MaterialExpressionRotator
// Size: 0xf0 (Inherited: 0x70)
struct UMaterialExpressionRotator : UMaterialExpression {
	struct FExpressionInput Coordinate; // 0x70(0x38)
	struct FExpressionInput Time; // 0xa8(0x38)
	float CenterX; // 0xe0(0x04)
	float CenterY; // 0xe4(0x04)
	float Speed; // 0xe8(0x04)
	uint32_t ConstCoordinate; // 0xec(0x04)
};

// Class Engine.MaterialExpressionSceneColor
// Size: 0xf0 (Inherited: 0x70)
struct UMaterialExpressionSceneColor : UMaterialExpression {
	char InputMode; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
	struct FExpressionInput Input; // 0x78(0x38)
	struct FExpressionInput OffsetFraction; // 0xb0(0x38)
	struct FVector2D ConstInput; // 0xe8(0x08)
};

// Class Engine.MaterialExpressionSceneDepth
// Size: 0xf0 (Inherited: 0x70)
struct UMaterialExpressionSceneDepth : UMaterialExpression {
	char InputMode; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
	struct FExpressionInput Input; // 0x78(0x38)
	struct FExpressionInput Coordinates; // 0xb0(0x38)
	struct FVector2D ConstInput; // 0xe8(0x08)
};

// Class Engine.MaterialExpressionSceneTexelSize
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionSceneTexelSize : UMaterialExpression {
};

// Class Engine.MaterialExpressionSceneTexture
// Size: 0xb0 (Inherited: 0x70)
struct UMaterialExpressionSceneTexture : UMaterialExpression {
	struct FExpressionInput Coordinates; // 0x70(0x38)
	char SceneTextureId; // 0xa8(0x01)
	bool bClampUVs; // 0xa9(0x01)
	bool bFiltered; // 0xaa(0x01)
	char UnknownData_AB[0x5]; // 0xab(0x05)
};

// Class Engine.MaterialExpressionScreenPosition
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionScreenPosition : UMaterialExpression {
};

// Class Engine.MaterialExpressionSine
// Size: 0xb0 (Inherited: 0x70)
struct UMaterialExpressionSine : UMaterialExpression {
	struct FExpressionInput Input; // 0x70(0x38)
	float Period; // 0xa8(0x04)
	char UnknownData_AC[0x4]; // 0xac(0x04)
};

// Class Engine.MaterialExpressionSpeedTree
// Size: 0x80 (Inherited: 0x70)
struct UMaterialExpressionSpeedTree : UMaterialExpression {
	char GeometryType; // 0x70(0x01)
	char WindType; // 0x71(0x01)
	char LODType; // 0x72(0x01)
	char UnknownData_73[0x1]; // 0x73(0x01)
	float BillboardThreshold; // 0x74(0x04)
	bool bAccurateWindVelocities; // 0x78(0x01)
	char UnknownData_79[0x7]; // 0x79(0x07)
};

// Class Engine.MaterialExpressionSphereMask
// Size: 0x158 (Inherited: 0x70)
struct UMaterialExpressionSphereMask : UMaterialExpression {
	struct FExpressionInput A; // 0x70(0x38)
	struct FExpressionInput B; // 0xa8(0x38)
	struct FExpressionInput Radius; // 0xe0(0x38)
	struct FExpressionInput Hardness; // 0x118(0x38)
	float AttenuationRadius; // 0x150(0x04)
	float HardnessPercent; // 0x154(0x04)
};

// Class Engine.MaterialExpressionSphericalParticleOpacity
// Size: 0xb0 (Inherited: 0x70)
struct UMaterialExpressionSphericalParticleOpacity : UMaterialExpression {
	struct FExpressionInput Density; // 0x70(0x38)
	float ConstantDensity; // 0xa8(0x04)
	char UnknownData_AC[0x4]; // 0xac(0x04)
};

// Class Engine.MaterialExpressionSquareRoot
// Size: 0xa8 (Inherited: 0x70)
struct UMaterialExpressionSquareRoot : UMaterialExpression {
	struct FExpressionInput Input; // 0x70(0x38)
};

// Class Engine.MaterialExpressionStaticBool
// Size: 0x78 (Inherited: 0x70)
struct UMaterialExpressionStaticBool : UMaterialExpression {
	char Value : 1; // 0x70(0x01)
	char UnknownData_70_1 : 7; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
};

// Class Engine.MaterialExpressionStaticSwitch
// Size: 0x120 (Inherited: 0x70)
struct UMaterialExpressionStaticSwitch : UMaterialExpression {
	char DefaultValue : 1; // 0x70(0x01)
	char UnknownData_70_1 : 7; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
	struct FExpressionInput A; // 0x78(0x38)
	struct FExpressionInput B; // 0xb0(0x38)
	struct FExpressionInput Value; // 0xe8(0x38)
};

// Class Engine.MaterialExpressionSubtract
// Size: 0xe8 (Inherited: 0x70)
struct UMaterialExpressionSubtract : UMaterialExpression {
	struct FExpressionInput A; // 0x70(0x38)
	struct FExpressionInput B; // 0xa8(0x38)
	float ConstA; // 0xe0(0x04)
	float ConstB; // 0xe4(0x04)
};

// Class Engine.MaterialExpressionTextureBase
// Size: 0x80 (Inherited: 0x70)
struct UMaterialExpressionTextureBase : UMaterialExpression {
	struct UTexture* Texture; // 0x70(0x08)
	char SamplerType; // 0x78(0x01)
	char UnknownData_79[0x3]; // 0x79(0x03)
	char IsDefaultMeshpaintTexture : 1; // 0x7c(0x01)
	char UnknownData_7C_1 : 7; // 0x7c(0x01)
	char UnknownData_7D[0x3]; // 0x7d(0x03)
};

// Class Engine.MaterialExpressionTextureObject
// Size: 0x80 (Inherited: 0x80)
struct UMaterialExpressionTextureObject : UMaterialExpressionTextureBase {
};

// Class Engine.MaterialExpressionTextureSample
// Size: 0x1a8 (Inherited: 0x80)
struct UMaterialExpressionTextureSample : UMaterialExpressionTextureBase {
	struct FExpressionInput Coordinates; // 0x80(0x38)
	struct FExpressionInput TextureObject; // 0xb8(0x38)
	struct FExpressionInput MipValue; // 0xf0(0x38)
	struct FExpressionInput CoordinatesDX; // 0x128(0x38)
	struct FExpressionInput CoordinatesDY; // 0x160(0x38)
	char MipValueMode; // 0x198(0x01)
	char SamplerSource; // 0x199(0x01)
	char UnknownData_19A[0x2]; // 0x19a(0x02)
	uint32_t ConstCoordinate; // 0x19c(0x04)
	int32_t ConstMipValue; // 0x1a0(0x04)
	char UnknownData_1A4[0x4]; // 0x1a4(0x04)
};

// Class Engine.MaterialExpressionParticleSubUV
// Size: 0x1b0 (Inherited: 0x1a8)
struct UMaterialExpressionParticleSubUV : UMaterialExpressionTextureSample {
	char bBlend : 1; // 0x1a8(0x01)
	char bMipBiasOnLowResolution : 1; // 0x1a8(0x01)
	char UnknownData_1A8_2 : 6; // 0x1a8(0x01)
	char UnknownData_1A9[0x7]; // 0x1a9(0x07)
};

// Class Engine.MaterialExpressionPredicatedTextureSample
// Size: 0x1e8 (Inherited: 0x1a8)
struct UMaterialExpressionPredicatedTextureSample : UMaterialExpressionTextureSample {
	struct FExpressionInput Predicate; // 0x1a8(0x38)
	struct FColor DefaultColour; // 0x1e0(0x04)
	char UnknownData_1E4[0x4]; // 0x1e4(0x04)
};

// Class Engine.MaterialExpressionTextureSampleParameter
// Size: 0x1c8 (Inherited: 0x1a8)
struct UMaterialExpressionTextureSampleParameter : UMaterialExpressionTextureSample {
	struct FName ParameterName; // 0x1a8(0x08)
	struct FGuid ExpressionGUID; // 0x1b0(0x10)
	struct FName Group; // 0x1c0(0x08)
};

// Class Engine.MaterialExpressionTextureObjectParameter
// Size: 0x1c8 (Inherited: 0x1c8)
struct UMaterialExpressionTextureObjectParameter : UMaterialExpressionTextureSampleParameter {
};

// Class Engine.MaterialExpressionTextureSampleParameter2D
// Size: 0x1c8 (Inherited: 0x1c8)
struct UMaterialExpressionTextureSampleParameter2D : UMaterialExpressionTextureSampleParameter {
};

// Class Engine.MaterialExpressionAntialiasedTextureMask
// Size: 0x1d0 (Inherited: 0x1c8)
struct UMaterialExpressionAntialiasedTextureMask : UMaterialExpressionTextureSampleParameter2D {
	float Threshold; // 0x1c8(0x04)
	char Channel; // 0x1cc(0x01)
	char UnknownData_1CD[0x3]; // 0x1cd(0x03)
};

// Class Engine.MaterialExpressionPredicatedTextureSampleParameter2D
// Size: 0x208 (Inherited: 0x1c8)
struct UMaterialExpressionPredicatedTextureSampleParameter2D : UMaterialExpressionTextureSampleParameter2D {
	struct FExpressionInput Predicate; // 0x1c8(0x38)
	struct FColor DefaultColour; // 0x200(0x04)
	char UnknownData_204[0x4]; // 0x204(0x04)
};

// Class Engine.MaterialExpressionTextureSampleParameterSubUV
// Size: 0x1d0 (Inherited: 0x1c8)
struct UMaterialExpressionTextureSampleParameterSubUV : UMaterialExpressionTextureSampleParameter2D {
	char bBlend : 1; // 0x1c8(0x01)
	char bMipBiasOnLowResolution : 1; // 0x1c8(0x01)
	char UnknownData_1C8_2 : 6; // 0x1c8(0x01)
	char UnknownData_1C9[0x7]; // 0x1c9(0x07)
};

// Class Engine.MaterialExpressionTextureSampleParameterCube
// Size: 0x1c8 (Inherited: 0x1c8)
struct UMaterialExpressionTextureSampleParameterCube : UMaterialExpressionTextureSampleParameter {
};

// Class Engine.MaterialExpressionTextureCoordinate
// Size: 0x80 (Inherited: 0x70)
struct UMaterialExpressionTextureCoordinate : UMaterialExpression {
	int32_t CoordinateIndex; // 0x70(0x04)
	float UTiling; // 0x74(0x04)
	float VTiling; // 0x78(0x04)
	char UnMirrorU : 1; // 0x7c(0x01)
	char UnMirrorV : 1; // 0x7c(0x01)
	char UnknownData_7C_2 : 6; // 0x7c(0x01)
	char UnknownData_7D[0x3]; // 0x7d(0x03)
};

// Class Engine.MaterialExpressionTime
// Size: 0x78 (Inherited: 0x70)
struct UMaterialExpressionTime : UMaterialExpression {
	char bIgnorePause : 1; // 0x70(0x01)
	char bOverride_Period : 1; // 0x70(0x01)
	char UnknownData_70_2 : 6; // 0x70(0x01)
	char UnknownData_71[0x3]; // 0x71(0x03)
	float Period; // 0x74(0x04)
};

// Class Engine.MaterialExpressionTransform
// Size: 0xb0 (Inherited: 0x70)
struct UMaterialExpressionTransform : UMaterialExpression {
	struct FExpressionInput Input; // 0x70(0x38)
	char TransformSourceType; // 0xa8(0x01)
	char TransformType; // 0xa9(0x01)
	char UnknownData_AA[0x6]; // 0xaa(0x06)
};

// Class Engine.MaterialExpressionTransformPosition
// Size: 0xb0 (Inherited: 0x70)
struct UMaterialExpressionTransformPosition : UMaterialExpression {
	struct FExpressionInput Input; // 0x70(0x38)
	char TransformSourceType; // 0xa8(0x01)
	char TransformType; // 0xa9(0x01)
	char UnknownData_AA[0x6]; // 0xaa(0x06)
};

// Class Engine.MaterialExpressionTranslucencyShadows
// Size: 0x78 (Inherited: 0x70)
struct UMaterialExpressionTranslucencyShadows : UMaterialExpression {
	int32_t Quality; // 0x70(0x04)
	char UnknownData_74[0x4]; // 0x74(0x04)
};

// Class Engine.MaterialExpressionTwoSidedSign
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionTwoSidedSign : UMaterialExpression {
};

// Class Engine.MaterialExpressionUnderwaterTranslucencyTexture
// Size: 0xa8 (Inherited: 0x70)
struct UMaterialExpressionUnderwaterTranslucencyTexture : UMaterialExpression {
	struct FExpressionInput Coordinates; // 0x70(0x38)
};

// Class Engine.MaterialExpressionVertexColor
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionVertexColor : UMaterialExpression {
};

// Class Engine.MaterialExpressionVertexID
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionVertexID : UMaterialExpression {
};

// Class Engine.MaterialExpressionVertexNormalWS
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionVertexNormalWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionViewProperty
// Size: 0x78 (Inherited: 0x70)
struct UMaterialExpressionViewProperty : UMaterialExpression {
	char Property; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
};

// Class Engine.MaterialExpressionViewSize
// Size: 0x70 (Inherited: 0x70)
struct UMaterialExpressionViewSize : UMaterialExpression {
};

// Class Engine.MaterialExpressionWorldPosition
// Size: 0x78 (Inherited: 0x70)
struct UMaterialExpressionWorldPosition : UMaterialExpression {
	char WorldPositionShaderOffset; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
};

// Class Engine.MaterialFunction
// Size: 0x78 (Inherited: 0x28)
struct UMaterialFunction : UObject {
	struct FGuid StateId; // 0x28(0x10)
	struct FString Description; // 0x38(0x10)
	char bExposeToLibrary : 1; // 0x48(0x01)
	char UnknownData_48_1 : 7; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
	struct TArray<struct FText> LibraryCategoriesText; // 0x50(0x10)
	struct TArray<struct UMaterialExpression*> FunctionExpressions; // 0x60(0x10)
	char bReentrantFlag : 1; // 0x70(0x01)
	char UnknownData_70_1 : 7; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
};

// Class Engine.MaterialInstanceDynamic
// Size: 0x1b8 (Inherited: 0x1b8)
struct UMaterialInstanceDynamic : UMaterialInstance {

	void SetVectorParameterValue(struct FName ParameterName, struct FLinearColor Value); // Function Engine.MaterialInstanceDynamic.SetVectorParameterValue // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x3100180
	void SetTextureParameterValue(struct FName ParameterName, struct UTexture* Value); // Function Engine.MaterialInstanceDynamic.SetTextureParameterValue // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x31000c0
	void SetScalarParameterValue(struct FName ParameterName, float Value); // Function Engine.MaterialInstanceDynamic.SetScalarParameterValue // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x30ffff0
	void MergeParameters(struct UMaterialInstance* MaterialInstance); // Function Engine.MaterialInstanceDynamic.MergeParameters // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x30ffb00
	void K2_InterpolateMaterialInstanceParams(struct UMaterialInstance* MaterialA, struct UMaterialInstance* MaterialB, float Alpha); // Function Engine.MaterialInstanceDynamic.K2_InterpolateMaterialInstanceParams // Final|Native|Public|BlueprintCallable // @ game+0x30ff9f0
	struct FLinearColor K2_GetVectorParameterValue(struct FName ParameterName); // Function Engine.MaterialInstanceDynamic.K2_GetVectorParameterValue // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x30ff950
	struct UTexture* K2_GetTextureParameterValue(struct FName ParameterName); // Function Engine.MaterialInstanceDynamic.K2_GetTextureParameterValue // Final|Native|Public|BlueprintCallable // @ game+0x30ff8c0
	float K2_GetScalarParameterValue(struct FName ParameterName); // Function Engine.MaterialInstanceDynamic.K2_GetScalarParameterValue // Final|Native|Public|BlueprintCallable // @ game+0x30ff820
	void K2_CopyMaterialInstanceParameters(struct UMaterialInterface* SourceMaterialToCopyFrom, bool bOverride); // Function Engine.MaterialInstanceDynamic.K2_CopyMaterialInstanceParameters // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x30ff750
	void CopyParameterOverrides(struct UMaterialInstance* MaterialInstance); // Function Engine.MaterialInstanceDynamic.CopyParameterOverrides // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x30fea20
};

// Class Engine.MaterialParameterCollection
// Size: 0x60 (Inherited: 0x28)
struct UMaterialParameterCollection : UObject {
	struct FGuid StateId; // 0x28(0x10)
	struct TArray<struct FCollectionScalarParameter> ScalarParameters; // 0x38(0x10)
	struct TArray<struct FCollectionVectorParameter> VectorParameters; // 0x48(0x10)
	char UnknownData_58[0x8]; // 0x58(0x08)
};

// Class Engine.MaterialParameterCollectionInstance
// Size: 0xf0 (Inherited: 0x28)
struct UMaterialParameterCollectionInstance : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct UMaterialParameterCollection* Collection; // 0x30(0x08)
	struct UWorld* World; // 0x38(0x08)
	char UnknownData_40[0xb0]; // 0x40(0xb0)
};

// Class Engine.MatineeInterface
// Size: 0x28 (Inherited: 0x28)
struct UMatineeInterface : UInterface {
};

// Class Engine.Texture2D
// Size: 0x190 (Inherited: 0x138)
struct UTexture2D : UTexture {
	int32_t RequestedMips; // 0x138(0x04)
	int32_t ResidentMips; // 0x13c(0x04)
	int32_t StreamingIndex; // 0x140(0x04)
	int32_t FirstResourceMemMip; // 0x144(0x04)
	char UnknownData_148[0x4]; // 0x148(0x04)
	struct FIntPoint ImportedSize; // 0x14c(0x08)
	float ForceMipLevelsToBeResidentTimestamp; // 0x154(0x04)
	char bTemporarilyDisableStreaming : 1; // 0x158(0x01)
	char bIsStreamable : 1; // 0x158(0x01)
	char bHasCancelationPending : 1; // 0x158(0x01)
	char bForceMiplevelsToBeResident : 1; // 0x158(0x01)
	char bGlobalForceMipLevelsToBeResident : 1; // 0x158(0x01)
	char UnknownData_158_5 : 3; // 0x158(0x01)
	char UnknownData_159[0x3]; // 0x159(0x03)
	char AddressX; // 0x15c(0x01)
	char AddressY; // 0x15d(0x01)
	char UnknownData_15E[0x2]; // 0x15e(0x02)
	int32_t MinimumLoadedMips; // 0x160(0x04)
	char UnknownData_164[0x2c]; // 0x164(0x2c)

	int32_t Blueprint_GetSizeY(); // Function Engine.Texture2D.Blueprint_GetSizeY // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x30fe9d0
	int32_t Blueprint_GetSizeX(); // Function Engine.Texture2D.Blueprint_GetSizeX // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x30fe9a0
};

// Class Engine.CanvasRenderTarget2D
// Size: 0x180 (Inherited: 0x168)
struct UCanvasRenderTarget2D : UTextureRenderTarget2D {
	struct FMulticastDelegate OnCanvasRenderTargetUpdate; // 0x168(0x10)
	struct UWorld* World; // 0x178(0x08)

	void UpdateResource(); // Function Engine.CanvasRenderTarget2D.UpdateResource // Native|Public|BlueprintCallable // @ game+0x3100250
	void Render(); // Function Engine.CanvasRenderTarget2D.Render // Final|Native|Public|BlueprintCallable // @ game+0x30ffb80
	void ReceiveUpdate(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function Engine.CanvasRenderTarget2D.ReceiveUpdate // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void GetSize(int32_t Width, int32_t Height); // Function Engine.CanvasRenderTarget2D.GetSize // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x30ff230
	struct UCanvasRenderTarget2D* CreateCanvasRenderTarget2D(struct UObject* WorldContextObject, struct UClass* CanvasRenderTarget2DClass, int32_t Width, int32_t Height, char Mips, bool HDR, bool CreateTextureResource, char RenderTargetFormat); // Function Engine.CanvasRenderTarget2D.CreateCanvasRenderTarget2D // Final|Native|Static|Public|BlueprintCallable // @ game+0x30feaa0
};

// Class Engine.CompressedCanvasRenderTarget2D
// Size: 0x1a8 (Inherited: 0x190)
struct UCompressedCanvasRenderTarget2D : UTexture2D {
	struct UWorld* World; // 0x190(0x08)
	struct UCanvasRenderTarget2D* RenderTarget; // 0x198(0x08)
	char UnknownData_1A0[0x8]; // 0x1a0(0x08)

	void UpdateResource(); // Function Engine.CompressedCanvasRenderTarget2D.UpdateResource // Native|Public|BlueprintCallable // @ game+0x3100270
};

// Class Engine.MaybeCompressedCanvasRenderTarget2D
// Size: 0x50 (Inherited: 0x28)
struct UMaybeCompressedCanvasRenderTarget2D : UObject {
	struct FMulticastDelegate OnCanvasUpdate; // 0x28(0x10)
	int32_t ChannelCount; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct UCanvasRenderTarget2D* UncompressedRenderTarget; // 0x40(0x08)
	struct UCompressedCanvasRenderTarget2D* CompressedRenderTarget; // 0x48(0x08)

	void UpdateResource(); // Function Engine.MaybeCompressedCanvasRenderTarget2D.UpdateResource // Final|Native|Public|BlueprintCallable // @ game+0x3100290
	struct UTexture* GetTexture(); // Function Engine.MaybeCompressedCanvasRenderTarget2D.GetTexture // Final|Native|Public|BlueprintCallable // @ game+0x30ff310
	struct UMaybeCompressedCanvasRenderTarget2D* CreateMaybeCompressedCanvasRenderTarget2D(struct UObject* WorldContextObject, int32_t Width, int32_t Height, char Mips, bool HDR, bool CreateTextureResource, int32_t ChannelCount); // Function Engine.MaybeCompressedCanvasRenderTarget2D.CreateMaybeCompressedCanvasRenderTarget2D // Final|Native|Static|Public|BlueprintCallable // @ game+0x30feda0
};

// Class Engine.NavArea_Default
// Size: 0x40 (Inherited: 0x40)
struct UNavArea_Default : UNavArea {
};

// Class Engine.NavArea_LowHeight
// Size: 0x40 (Inherited: 0x40)
struct UNavArea_LowHeight : UNavArea {
};

// Class Engine.NavArea_Null
// Size: 0x40 (Inherited: 0x40)
struct UNavArea_Null : UNavArea {
};

// Class Engine.NavArea_Obstacle
// Size: 0x40 (Inherited: 0x40)
struct UNavArea_Obstacle : UNavArea {
};

// Class Engine.NavAreaMeta
// Size: 0x40 (Inherited: 0x40)
struct UNavAreaMeta : UNavArea {
};

// Class Engine.NavAreaMeta_SwitchByAgent
// Size: 0xc0 (Inherited: 0x40)
struct UNavAreaMeta_SwitchByAgent : UNavAreaMeta {
	struct UClass* Agent0Area; // 0x40(0x08)
	struct UClass* Agent1Area; // 0x48(0x08)
	struct UClass* Agent2Area; // 0x50(0x08)
	struct UClass* Agent3Area; // 0x58(0x08)
	struct UClass* Agent4Area; // 0x60(0x08)
	struct UClass* Agent5Area; // 0x68(0x08)
	struct UClass* Agent6Area; // 0x70(0x08)
	struct UClass* Agent7Area; // 0x78(0x08)
	struct UClass* Agent8Area; // 0x80(0x08)
	struct UClass* Agent9Area; // 0x88(0x08)
	struct UClass* Agent10Area; // 0x90(0x08)
	struct UClass* Agent11Area; // 0x98(0x08)
	struct UClass* Agent12Area; // 0xa0(0x08)
	struct UClass* Agent13Area; // 0xa8(0x08)
	struct UClass* Agent14Area; // 0xb0(0x08)
	struct UClass* Agent15Area; // 0xb8(0x08)
};

// Class Engine.NavCollision
// Size: 0x110 (Inherited: 0x28)
struct UNavCollision : UObject {
	char UnknownData_28[0x50]; // 0x28(0x50)
	struct TArray<struct FNavCollisionCylinder> CylinderCollision; // 0x78(0x10)
	struct TArray<struct FNavCollisionBox> BoxCollision; // 0x88(0x10)
	struct UClass* AreaClass; // 0x98(0x08)
	char bIsDynamicObstacle : 1; // 0xa0(0x01)
	char bGatherConvexGeometry : 1; // 0xa0(0x01)
	char UnknownData_A0_2 : 6; // 0xa0(0x01)
	char UnknownData_A1[0x6f]; // 0xa1(0x6f)
};

// Class Engine.NavigationDataChunk
// Size: 0x30 (Inherited: 0x28)
struct UNavigationDataChunk : UObject {
	struct FName NavigationDataName; // 0x28(0x08)
};

// Class Engine.RecastNavMeshDataChunk
// Size: 0x40 (Inherited: 0x30)
struct URecastNavMeshDataChunk : UNavigationDataChunk {
	char UnknownData_30[0x10]; // 0x30(0x10)
};

// Class Engine.NavigationPath
// Size: 0x88 (Inherited: 0x28)
struct UNavigationPath : UObject {
	struct FMulticastDelegate PathUpdatedNotifier; // 0x28(0x10)
	struct TArray<struct FVector> PathPoints; // 0x38(0x10)
	char RecalculateOnInvalidation; // 0x48(0x01)
	char UnknownData_49[0x3f]; // 0x49(0x3f)

	bool IsValid(); // Function Engine.NavigationPath.IsValid // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x30ff720
	bool IsStringPulled(); // Function Engine.NavigationPath.IsStringPulled // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x30ff6f0
	bool IsPartial(); // Function Engine.NavigationPath.IsPartial // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x30ff690
	float GetPathLength(); // Function Engine.NavigationPath.GetPathLength // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x30ff200
	float GetPathCost(); // Function Engine.NavigationPath.GetPathCost // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x30ff1d0
	struct FString GetDebugString(); // Function Engine.NavigationPath.GetDebugString // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x30ff100
	void EnableRecalculationOnInvalidation(char DoRecalculation); // Function Engine.NavigationPath.EnableRecalculationOnInvalidation // Final|Native|Public|BlueprintCallable // @ game+0x30ff080
	void EnableDebugDrawing(bool bShouldDrawDebugData, struct FLinearColor PathColor); // Function Engine.NavigationPath.EnableDebugDrawing // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x30fefa0
};

// Class Engine.NavigationPathGenerator
// Size: 0x28 (Inherited: 0x28)
struct UNavigationPathGenerator : UInterface {
};

// Class Engine.RecastFilter_UseDefaultArea
// Size: 0x40 (Inherited: 0x40)
struct URecastFilter_UseDefaultArea : UNavigationQueryFilter {
};

// Class Engine.NavLinkTrivial
// Size: 0x50 (Inherited: 0x50)
struct UNavLinkTrivial : UNavLinkDefinition {
};

// Class Engine.NavNodeInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavNodeInterface : UInterface {
};

// Class Engine.DemoNetDriver
// Size: 0x550 (Inherited: 0x478)
struct UDemoNetDriver : UNetDriver {
	char UnknownData_478[0xd8]; // 0x478(0xd8)
};

// Class Engine.NetPhysicsInterpolatorInterface
// Size: 0x28 (Inherited: 0x28)
struct UNetPhysicsInterpolatorInterface : UInterface {
};

// Class Engine.ObjectLibrary
// Size: 0x70 (Inherited: 0x28)
struct UObjectLibrary : UObject {
	struct UClass* ObjectBaseClass; // 0x28(0x08)
	bool bHasBlueprintClasses; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct TArray<struct UObject*> Objects; // 0x38(0x10)
	struct TArray<struct UObject*> WeakObjects; // 0x48(0x10)
	bool bUseWeakReferences; // 0x58(0x01)
	bool bIsFullyLoaded; // 0x59(0x01)
	char UnknownData_5A[0x16]; // 0x5a(0x16)
};

// Class Engine.ObjectReferencer
// Size: 0x38 (Inherited: 0x28)
struct UObjectReferencer : UObject {
	struct TArray<struct UObject*> ReferencedObjects; // 0x28(0x10)
};

// Class Engine.PackageMapClient
// Size: 0x1f8 (Inherited: 0x50)
struct UPackageMapClient : UPackageMap {
	char UnknownData_50[0x1a8]; // 0x50(0x1a8)
};

// Class Engine.ParticleEmitter
// Size: 0xb0 (Inherited: 0x28)
struct UParticleEmitter : UObject {
	struct FName EmitterName; // 0x28(0x08)
	int32_t SubUVDataOffset; // 0x30(0x04)
	char EmitterRenderMode; // 0x34(0x01)
	char UnknownData_35[0x3]; // 0x35(0x03)
	struct TArray<struct UParticleLODLevel*> LODLevels; // 0x38(0x10)
	char ConvertedModules : 1; // 0x48(0x01)
	char UnknownData_48_1 : 7; // 0x48(0x01)
	char UnknownData_49[0x3]; // 0x49(0x03)
	int32_t PeakActiveParticles; // 0x4c(0x04)
	int32_t InitialAllocationCount; // 0x50(0x04)
	float MediumDetailSpawnRateScale; // 0x54(0x04)
	float QualityLevelSpawnRateScale; // 0x58(0x04)
	char DetailMode; // 0x5c(0x01)
	char MaxEmitterQuality; // 0x5d(0x01)
	char MinEmitterQuality; // 0x5e(0x01)
	char UnknownData_5F[0x1]; // 0x5f(0x01)
	char bIsSoloing : 1; // 0x60(0x01)
	char bCookedOut : 1; // 0x60(0x01)
	char bDisabledLODsKeepEmitterAlive : 1; // 0x60(0x01)
	char bHasAnyEnabledLODs : 1; // 0x60(0x01)
	char bHasAnyEnabledLODsValid : 1; // 0x60(0x01)
	char UnknownData_60_5 : 3; // 0x60(0x01)
	char UnknownData_61[0x3f]; // 0x61(0x3f)
	struct TArray<struct UParticleModule*> ModulesNeedingInstanceData; // 0xa0(0x10)
};

// Class Engine.ParticleSpriteEmitter
// Size: 0xb0 (Inherited: 0xb0)
struct UParticleSpriteEmitter : UParticleEmitter {
};

// Class Engine.ParticleLODLevel
// Size: 0xb8 (Inherited: 0x28)
struct UParticleLODLevel : UObject {
	int32_t Level; // 0x28(0x04)
	char bEnabled : 1; // 0x2c(0x01)
	char UnknownData_2C_1 : 7; // 0x2c(0x01)
	char UnknownData_2D[0x3]; // 0x2d(0x03)
	struct UParticleModuleRequired* RequiredModule; // 0x30(0x08)
	struct TArray<struct UParticleModule*> Modules; // 0x38(0x10)
	struct UParticleModule* TypeDataModule; // 0x48(0x08)
	struct UParticleModuleSpawn* SpawnModule; // 0x50(0x08)
	struct UParticleModuleEventGenerator* EventGenerator; // 0x58(0x08)
	struct TArray<struct UParticleModuleSpawnBase*> SpawningModules; // 0x60(0x10)
	struct TArray<struct UParticleModule*> SpawnModules; // 0x70(0x10)
	struct TArray<struct UParticleModule*> UpdateModules; // 0x80(0x10)
	struct TArray<struct UParticleModuleOrbit*> OrbitModules; // 0x90(0x10)
	struct TArray<struct UParticleModuleEventReceiverBase*> EventReceiverModules; // 0xa0(0x10)
	char ConvertedModules : 1; // 0xb0(0x01)
	char UnknownData_B0_1 : 7; // 0xb0(0x01)
	char UnknownData_B1[0x3]; // 0xb1(0x03)
	int32_t PeakActiveParticles; // 0xb4(0x04)
};

// Class Engine.ParticleModule
// Size: 0x50 (Inherited: 0x28)
struct UParticleModule : UObject {
	char bSpawnModule : 1; // 0x28(0x01)
	char bUpdateModule : 1; // 0x28(0x01)
	char bFinalUpdateModule : 1; // 0x28(0x01)
	char bUpdateForGPUEmitter : 1; // 0x28(0x01)
	char bCurvesAsColor : 1; // 0x28(0x01)
	char b3DDrawMode : 1; // 0x28(0x01)
	char bSupported3DDrawMode : 1; // 0x28(0x01)
	char bEnabled : 1; // 0x28(0x01)
	char bEditable : 1; // 0x29(0x01)
	char LODDuplicate : 1; // 0x29(0x01)
	char bSupportsRandomSeed : 1; // 0x29(0x01)
	char bRequiresLoopingNotification : 1; // 0x29(0x01)
	char UnknownData_29_4 : 4; // 0x29(0x01)
	char UnknownData_2A[0x2]; // 0x2a(0x02)
	char LODValidity; // 0x2c(0x01)
	char UnknownData_2D[0x3]; // 0x2d(0x03)
	struct TArray<int32_t> ModuleInstanceOffsets; // 0x30(0x10)
	struct TArray<int32_t> ModuleOffsets; // 0x40(0x10)
};

// Class Engine.ParticleModuleAccelerationBase
// Size: 0x58 (Inherited: 0x50)
struct UParticleModuleAccelerationBase : UParticleModule {
	char bAlwaysInWorldSpace : 1; // 0x50(0x01)
	char UnknownData_50_1 : 7; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
};

// Class Engine.ParticleModuleAcceleration
// Size: 0x1b0 (Inherited: 0x58)
struct UParticleModuleAcceleration : UParticleModuleAccelerationBase {
	struct FRawDistributionVector Acceleration; // 0x58(0x38)
	struct FRawDistributionVector AdditionalAcceleration[0x05]; // 0x90(0x118)
	char bUseGroupAAccelerationForAllGroups : 1; // 0x1a8(0x01)
	char bApplyOwnerScale : 1; // 0x1a8(0x01)
	char UnknownData_1A8_2 : 6; // 0x1a8(0x01)
	char UnknownData_1A9[0x7]; // 0x1a9(0x07)
};

// Class Engine.ParticleModuleAccelerationConstant
// Size: 0x68 (Inherited: 0x58)
struct UParticleModuleAccelerationConstant : UParticleModuleAccelerationBase {
	struct FVector Acceleration; // 0x58(0x0c)
	char UnknownData_64[0x4]; // 0x64(0x04)
};

// Class Engine.ParticleModuleAccelerationDrag
// Size: 0xc8 (Inherited: 0x58)
struct UParticleModuleAccelerationDrag : UParticleModuleAccelerationBase {
	struct UDistributionFloat* DragCoefficient; // 0x58(0x08)
	struct UDistributionFloat* DragOnLocalVelocity; // 0x60(0x08)
	char bUseGroupADragCoefficientForAllGroups : 1; // 0x68(0x01)
	char UnknownData_68_1 : 7; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
	struct UDistributionFloat* AdditionalDragCoefficient[0x05]; // 0x70(0x28)
	char bUseGroupADragOnLocalVelocityForAllGroups : 1; // 0x98(0x01)
	char UnknownData_98_1 : 7; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)
	struct UDistributionFloat* AdditionalDragOnLocalVelocity[0x05]; // 0xa0(0x28)
};

// Class Engine.ParticleModuleAccelerationDragScaleOverLife
// Size: 0x68 (Inherited: 0x58)
struct UParticleModuleAccelerationDragScaleOverLife : UParticleModuleAccelerationBase {
	struct UDistributionFloat* DragScale; // 0x58(0x08)
	struct UDistributionFloat* DragLocalVelocityScale; // 0x60(0x08)
};

// Class Engine.ParticleModuleAccelerationEmitterPoint
// Size: 0x98 (Inherited: 0x58)
struct UParticleModuleAccelerationEmitterPoint : UParticleModuleAccelerationBase {
	struct FRawDistributionFloat AccelerationScale; // 0x58(0x38)
	char bApplyOwnerScale : 1; // 0x90(0x01)
	char UnknownData_90_1 : 7; // 0x90(0x01)
	char UnknownData_91[0x7]; // 0x91(0x07)
};

// Class Engine.ParticleModuleAccelerationOverLifetime
// Size: 0x90 (Inherited: 0x58)
struct UParticleModuleAccelerationOverLifetime : UParticleModuleAccelerationBase {
	struct FRawDistributionVector AccelOverLife; // 0x58(0x38)
};

// Class Engine.ParticleModuleAttractorBase
// Size: 0x50 (Inherited: 0x50)
struct UParticleModuleAttractorBase : UParticleModule {
};

// Class Engine.ParticleModuleAttractorLine
// Size: 0xd8 (Inherited: 0x50)
struct UParticleModuleAttractorLine : UParticleModuleAttractorBase {
	struct FVector EndPoint0; // 0x50(0x0c)
	struct FVector EndPoint1; // 0x5c(0x0c)
	struct FRawDistributionFloat Range; // 0x68(0x38)
	struct FRawDistributionFloat Strength; // 0xa0(0x38)
};

// Class Engine.ParticleModuleAttractorParticle
// Size: 0xe0 (Inherited: 0x50)
struct UParticleModuleAttractorParticle : UParticleModuleAttractorBase {
	struct FName EmitterName; // 0x50(0x08)
	struct FRawDistributionFloat Range; // 0x58(0x38)
	char bStrengthByDistance : 1; // 0x90(0x01)
	char UnknownData_90_1 : 7; // 0x90(0x01)
	char UnknownData_91[0x7]; // 0x91(0x07)
	struct FRawDistributionFloat Strength; // 0x98(0x38)
	char bAffectBaseVelocity : 1; // 0xd0(0x01)
	char UnknownData_D0_1 : 7; // 0xd0(0x01)
	char UnknownData_D1[0x3]; // 0xd1(0x03)
	char SelectionMethod; // 0xd4(0x01)
	char UnknownData_D5[0x3]; // 0xd5(0x03)
	char bRenewSource : 1; // 0xd8(0x01)
	char bInheritSourceVel : 1; // 0xd8(0x01)
	char UnknownData_D8_2 : 6; // 0xd8(0x01)
	char UnknownData_D9[0x3]; // 0xd9(0x03)
	int32_t LastSelIndex; // 0xdc(0x04)
};

// Class Engine.ParticleModuleAttractorPoint
// Size: 0x100 (Inherited: 0x50)
struct UParticleModuleAttractorPoint : UParticleModuleAttractorBase {
	struct FRawDistributionVector Position; // 0x50(0x38)
	struct FRawDistributionFloat Range; // 0x88(0x38)
	struct FRawDistributionFloat Strength; // 0xc0(0x38)
	char StrengthByDistance : 1; // 0xf8(0x01)
	char bAffectBaseVelocity : 1; // 0xf8(0x01)
	char bOverrideVelocity : 1; // 0xf8(0x01)
	char bUseWorldSpacePosition : 1; // 0xf8(0x01)
	char Positive_X : 1; // 0xf8(0x01)
	char Positive_Y : 1; // 0xf8(0x01)
	char Positive_Z : 1; // 0xf8(0x01)
	char Negative_X : 1; // 0xf8(0x01)
	char Negative_Y : 1; // 0xf9(0x01)
	char Negative_Z : 1; // 0xf9(0x01)
	char UnknownData_F9_2 : 6; // 0xf9(0x01)
	char UnknownData_FA[0x6]; // 0xfa(0x06)
};

// Class Engine.ParticleModuleAttractorPointGravity
// Size: 0x68 (Inherited: 0x50)
struct UParticleModuleAttractorPointGravity : UParticleModuleAttractorBase {
	struct FVector Position; // 0x50(0x0c)
	float Radius; // 0x5c(0x04)
	struct UDistributionFloat* Strength; // 0x60(0x08)
};

// Class Engine.ParticleModuleBeamBase
// Size: 0x50 (Inherited: 0x50)
struct UParticleModuleBeamBase : UParticleModule {
};

// Class Engine.ParticleModuleBeamModifier
// Size: 0x110 (Inherited: 0x50)
struct UParticleModuleBeamModifier : UParticleModuleBeamBase {
	char ModifierType; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	struct FBeamModifierOptions PositionOptions; // 0x54(0x04)
	struct FRawDistributionVector Position; // 0x58(0x38)
	struct FBeamModifierOptions TangentOptions; // 0x90(0x04)
	char UnknownData_94[0x4]; // 0x94(0x04)
	struct FRawDistributionVector Tangent; // 0x98(0x38)
	char bAbsoluteTangent : 1; // 0xd0(0x01)
	char UnknownData_D0_1 : 7; // 0xd0(0x01)
	char UnknownData_D1[0x3]; // 0xd1(0x03)
	struct FBeamModifierOptions StrengthOptions; // 0xd4(0x04)
	struct FRawDistributionFloat Strength; // 0xd8(0x38)
};

// Class Engine.ParticleModuleBeamNoise
// Size: 0x1a8 (Inherited: 0x50)
struct UParticleModuleBeamNoise : UParticleModuleBeamBase {
	char bLowFreq_Enabled : 1; // 0x50(0x01)
	char UnknownData_50_1 : 7; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	int32_t Frequency; // 0x54(0x04)
	int32_t Frequency_LowRange; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
	struct FRawDistributionVector NoiseRange; // 0x60(0x38)
	struct FRawDistributionFloat NoiseRangeScale; // 0x98(0x38)
	char bNRScaleEmitterTime : 1; // 0xd0(0x01)
	char UnknownData_D0_1 : 7; // 0xd0(0x01)
	char UnknownData_D1[0x7]; // 0xd1(0x07)
	struct FRawDistributionVector NoiseSpeed; // 0xd8(0x38)
	char bSmooth : 1; // 0x110(0x01)
	char UnknownData_110_1 : 7; // 0x110(0x01)
	char UnknownData_111[0x3]; // 0x111(0x03)
	float NoiseLockRadius; // 0x114(0x04)
	char bNoiseLock : 1; // 0x118(0x01)
	char bOscillate : 1; // 0x118(0x01)
	char UnknownData_118_2 : 6; // 0x118(0x01)
	char UnknownData_119[0x3]; // 0x119(0x03)
	float NoiseLockTime; // 0x11c(0x04)
	float NoiseTension; // 0x120(0x04)
	char bUseNoiseTangents : 1; // 0x124(0x01)
	char UnknownData_124_1 : 7; // 0x124(0x01)
	char UnknownData_125[0x3]; // 0x125(0x03)
	struct FRawDistributionFloat NoiseTangentStrength; // 0x128(0x38)
	int32_t NoiseTessellation; // 0x160(0x04)
	char bTargetNoise : 1; // 0x164(0x01)
	char UnknownData_164_1 : 7; // 0x164(0x01)
	char UnknownData_165[0x3]; // 0x165(0x03)
	float FrequencyDistance; // 0x168(0x04)
	char bApplyNoiseScale : 1; // 0x16c(0x01)
	char UnknownData_16C_1 : 7; // 0x16c(0x01)
	char UnknownData_16D[0x3]; // 0x16d(0x03)
	struct FRawDistributionFloat NoiseScale; // 0x170(0x38)
};

// Class Engine.ParticleModuleBeamSource
// Size: 0x120 (Inherited: 0x50)
struct UParticleModuleBeamSource : UParticleModuleBeamBase {
	char SourceMethod; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	struct FName SourceName; // 0x54(0x08)
	char bSourceAbsolute : 1; // 0x5c(0x01)
	char UnknownData_5C_1 : 7; // 0x5c(0x01)
	char UnknownData_5D[0x3]; // 0x5d(0x03)
	struct FRawDistributionVector Source; // 0x60(0x38)
	char bLockSource : 1; // 0x98(0x01)
	char UnknownData_98_1 : 7; // 0x98(0x01)
	char UnknownData_99[0x3]; // 0x99(0x03)
	char SourceTangentMethod; // 0x9c(0x01)
	char UnknownData_9D[0x3]; // 0x9d(0x03)
	struct FRawDistributionVector SourceTangent; // 0xa0(0x38)
	char bLockSourceTangent : 1; // 0xd8(0x01)
	char UnknownData_D8_1 : 7; // 0xd8(0x01)
	char UnknownData_D9[0x7]; // 0xd9(0x07)
	struct FRawDistributionFloat SourceStrength; // 0xe0(0x38)
	char bLockSourceStength : 1; // 0x118(0x01)
	char UnknownData_118_1 : 7; // 0x118(0x01)
	char UnknownData_119[0x7]; // 0x119(0x07)
};

// Class Engine.ParticleModuleBeamTarget
// Size: 0x120 (Inherited: 0x50)
struct UParticleModuleBeamTarget : UParticleModuleBeamBase {
	char TargetMethod; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	struct FName TargetName; // 0x54(0x08)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
	struct FRawDistributionVector Target; // 0x60(0x38)
	char bTargetAbsolute : 1; // 0x98(0x01)
	char bLockTarget : 1; // 0x98(0x01)
	char UnknownData_98_2 : 6; // 0x98(0x01)
	char UnknownData_99[0x3]; // 0x99(0x03)
	char TargetTangentMethod; // 0x9c(0x01)
	char UnknownData_9D[0x3]; // 0x9d(0x03)
	struct FRawDistributionVector TargetTangent; // 0xa0(0x38)
	char bLockTargetTangent : 1; // 0xd8(0x01)
	char UnknownData_D8_1 : 7; // 0xd8(0x01)
	char UnknownData_D9[0x7]; // 0xd9(0x07)
	struct FRawDistributionFloat TargetStrength; // 0xe0(0x38)
	char bLockTargetStength : 1; // 0x118(0x01)
	char UnknownData_118_1 : 7; // 0x118(0x01)
	char UnknownData_119[0x3]; // 0x119(0x03)
	float LockRadius; // 0x11c(0x04)
};

// Class Engine.ParticleModuleCameraBase
// Size: 0x50 (Inherited: 0x50)
struct UParticleModuleCameraBase : UParticleModule {
};

// Class Engine.ParticleModuleCameraOffset
// Size: 0x90 (Inherited: 0x50)
struct UParticleModuleCameraOffset : UParticleModuleCameraBase {
	struct FRawDistributionFloat CameraOffset; // 0x50(0x38)
	char bSpawnTimeOnly : 1; // 0x88(0x01)
	char UnknownData_88_1 : 7; // 0x88(0x01)
	char UnknownData_89[0x3]; // 0x89(0x03)
	char UpdateMethod; // 0x8c(0x01)
	char UnknownData_8D[0x3]; // 0x8d(0x03)
};

// Class Engine.ParticleModuleCollisionBase
// Size: 0x50 (Inherited: 0x50)
struct UParticleModuleCollisionBase : UParticleModule {
};

// Class Engine.ParticleModuleCollision
// Size: 0x1a0 (Inherited: 0x50)
struct UParticleModuleCollision : UParticleModuleCollisionBase {
	struct FRawDistributionVector DampingFactor; // 0x50(0x38)
	struct FRawDistributionVector DampingFactorRotation; // 0x88(0x38)
	struct FRawDistributionFloat MaxCollisions; // 0xc0(0x38)
	char CollisionCompletionOption; // 0xf8(0x01)
	char UnknownData_F9[0x7]; // 0xf9(0x07)
	struct TArray<char> CollisionTypes; // 0x100(0x10)
	char UnknownData_110[0x4]; // 0x110(0x04)
	char bApplyPhysics : 1; // 0x114(0x01)
	char UnknownData_114_1 : 7; // 0x114(0x01)
	char UnknownData_115[0x3]; // 0x115(0x03)
	struct FRawDistributionFloat ParticleMass; // 0x118(0x38)
	float DirScalar; // 0x150(0x04)
	char bPawnsDoNotDecrementCount : 1; // 0x154(0x01)
	char bOnlyVerticalNormalsDecrementCount : 1; // 0x154(0x01)
	char UnknownData_154_2 : 6; // 0x154(0x01)
	char UnknownData_155[0x3]; // 0x155(0x03)
	float VerticalFudgeFactor; // 0x158(0x04)
	char UnknownData_15C[0x4]; // 0x15c(0x04)
	struct FRawDistributionFloat DelayAmount; // 0x160(0x38)
	char bDropDetail : 1; // 0x198(0x01)
	char bCollideOnlyIfVisible : 1; // 0x198(0x01)
	char bIgnoreSourceActor : 1; // 0x198(0x01)
	char bIgnoreCollisionsWithHiddenObjects : 1; // 0x198(0x01)
	char UnknownData_198_4 : 4; // 0x198(0x01)
	char UnknownData_199[0x3]; // 0x199(0x03)
	float MaxCollisionDistance; // 0x19c(0x04)
};

// Class Engine.ParticleModuleCollisionGPU
// Size: 0xd8 (Inherited: 0x50)
struct UParticleModuleCollisionGPU : UParticleModuleCollisionBase {
	struct FRawDistributionFloat Resilience; // 0x50(0x38)
	struct FRawDistributionFloat ResilienceScaleOverLife; // 0x88(0x38)
	float DampingFactorRotation; // 0xc0(0x04)
	float Friction; // 0xc4(0x04)
	float RadiusScale; // 0xc8(0x04)
	float RadiusBias; // 0xcc(0x04)
	char Response; // 0xd0(0x01)
	char CollisionMode; // 0xd1(0x01)
	char UnknownData_D2[0x6]; // 0xd2(0x06)
};

// Class Engine.ParticleModuleColorBase
// Size: 0x50 (Inherited: 0x50)
struct UParticleModuleColorBase : UParticleModule {
};

// Class Engine.ParticleModuleColor
// Size: 0x308 (Inherited: 0x50)
struct UParticleModuleColor : UParticleModuleColorBase {
	char bUseGroupAColorForAllGroups : 1; // 0x50(0x01)
	char UnknownData_50_1 : 7; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
	struct FRawDistributionVector StartColor; // 0x58(0x38)
	struct FRawDistributionVector AdditionalStartColor[0x05]; // 0x90(0x118)
	char bUseGroupAAlphaForAllGroups : 1; // 0x1a8(0x01)
	char UnknownData_1A8_1 : 7; // 0x1a8(0x01)
	char UnknownData_1A9[0x7]; // 0x1a9(0x07)
	struct FRawDistributionFloat StartAlpha; // 0x1b0(0x38)
	struct FRawDistributionFloat AdditionalStartAlpha[0x05]; // 0x1e8(0x118)
	char bClampAlpha : 1; // 0x300(0x01)
	char bIgnoreComponentColorTint : 1; // 0x300(0x01)
	char UnknownData_300_2 : 6; // 0x300(0x01)
	char UnknownData_301[0x7]; // 0x301(0x07)
};

// Class Engine.ParticleModuleColor_Seeded
// Size: 0x328 (Inherited: 0x308)
struct UParticleModuleColor_Seeded : UParticleModuleColor {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x308(0x20)
};

// Class Engine.ParticleModuleColorOverLife
// Size: 0xc8 (Inherited: 0x50)
struct UParticleModuleColorOverLife : UParticleModuleColorBase {
	struct FRawDistributionVector ColorOverLife; // 0x50(0x38)
	struct FRawDistributionFloat AlphaOverLife; // 0x88(0x38)
	char bClampAlpha : 1; // 0xc0(0x01)
	char UnknownData_C0_1 : 7; // 0xc0(0x01)
	char UnknownData_C1[0x7]; // 0xc1(0x07)
};

// Class Engine.ParticleModuleColorScaleOverLife
// Size: 0xc8 (Inherited: 0x50)
struct UParticleModuleColorScaleOverLife : UParticleModuleColorBase {
	struct FRawDistributionVector ColorScaleOverLife; // 0x50(0x38)
	struct FRawDistributionFloat AlphaScaleOverLife; // 0x88(0x38)
	char bEmitterTime : 1; // 0xc0(0x01)
	char UnknownData_C0_1 : 7; // 0xc0(0x01)
	char UnknownData_C1[0x7]; // 0xc1(0x07)
};

// Class Engine.ParticleModuleMurkyColor
// Size: 0x60 (Inherited: 0x50)
struct UParticleModuleMurkyColor : UParticleModuleColorBase {
	struct FLinearColor ColorScale; // 0x50(0x10)
};

// Class Engine.ParticleModuleEventBase
// Size: 0x50 (Inherited: 0x50)
struct UParticleModuleEventBase : UParticleModule {
};

// Class Engine.ParticleModuleEventGenerator
// Size: 0x60 (Inherited: 0x50)
struct UParticleModuleEventGenerator : UParticleModuleEventBase {
	struct TArray<struct FParticleEvent_GenerateInfo> Events; // 0x50(0x10)
};

// Class Engine.ParticleModuleEventGeneratorGPU
// Size: 0x60 (Inherited: 0x50)
struct UParticleModuleEventGeneratorGPU : UParticleModuleEventBase {
	struct TArray<struct FParticleEventGPU_GenerateInfo> Events; // 0x50(0x10)
};

// Class Engine.ParticleModuleEventReceiverBase
// Size: 0x60 (Inherited: 0x50)
struct UParticleModuleEventReceiverBase : UParticleModuleEventBase {
	char EventGeneratorType; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	struct FName EventName; // 0x54(0x08)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.ParticleModuleEventReceiverKillParticles
// Size: 0x68 (Inherited: 0x60)
struct UParticleModuleEventReceiverKillParticles : UParticleModuleEventReceiverBase {
	char bStopSpawning : 1; // 0x60(0x01)
	char UnknownData_60_1 : 7; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
};

// Class Engine.ParticleModuleEventReceiverSpawn
// Size: 0x1f0 (Inherited: 0x60)
struct UParticleModuleEventReceiverSpawn : UParticleModuleEventReceiverBase {
	struct FRawDistributionFloat SpawnCount; // 0x60(0x38)
	struct FRawDistributionFloat AdditionalSpawnCounts[0x05]; // 0x98(0x118)
	char bUseGroupAForAll : 1; // 0x1b0(0x01)
	char bUseParticleTime : 1; // 0x1b0(0x01)
	char bUsePSysLocation : 1; // 0x1b0(0x01)
	char bInheritVelocity : 1; // 0x1b0(0x01)
	char UnknownData_1B0_4 : 4; // 0x1b0(0x01)
	char UnknownData_1B1[0x7]; // 0x1b1(0x07)
	struct FRawDistributionVector InheritVelocityScale; // 0x1b8(0x38)
};

// Class Engine.ParticleModuleKillBase
// Size: 0x50 (Inherited: 0x50)
struct UParticleModuleKillBase : UParticleModule {
};

// Class Engine.ParticleModuleKillBox
// Size: 0xc8 (Inherited: 0x50)
struct UParticleModuleKillBox : UParticleModuleKillBase {
	struct FRawDistributionVector LowerLeftCorner; // 0x50(0x38)
	struct FRawDistributionVector UpperRightCorner; // 0x88(0x38)
	char bAbsolute : 1; // 0xc0(0x01)
	char bKillInside : 1; // 0xc0(0x01)
	char bAxisAlignedAndFixedSize : 1; // 0xc0(0x01)
	char UnknownData_C0_3 : 5; // 0xc0(0x01)
	char UnknownData_C1[0x7]; // 0xc1(0x07)
};

// Class Engine.ParticleModuleKillHeight
// Size: 0x90 (Inherited: 0x50)
struct UParticleModuleKillHeight : UParticleModuleKillBase {
	struct FRawDistributionFloat Height; // 0x50(0x38)
	char bAbsolute : 1; // 0x88(0x01)
	char bFloor : 1; // 0x88(0x01)
	char bApplyPSysScale : 1; // 0x88(0x01)
	char UnknownData_88_3 : 5; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
};

// Class Engine.ParticleModuleKillOnFFTWater
// Size: 0x60 (Inherited: 0x50)
struct UParticleModuleKillOnFFTWater : UParticleModuleKillBase {
	char FFTWaterKillPointLocation; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	char bUseGroupAFFTWaterKillPointForAllGroups : 1; // 0x54(0x01)
	char UnknownData_54_1 : 7; // 0x54(0x01)
	char UnknownData_55[0x3]; // 0x55(0x03)
	char AdditionalFFTWaterKillPointLocations[0x05]; // 0x58(0x05)
	char UnknownData_5D[0x3]; // 0x5d(0x03)
};

// Class Engine.ParticleModuleKillSphere
// Size: 0xb8 (Inherited: 0x50)
struct UParticleModuleKillSphere : UParticleModuleKillBase {
	struct FVector Centre; // 0x50(0x0c)
	float Radius; // 0x5c(0x04)
	char bUseGroupAForAll : 1; // 0x60(0x01)
	char UnknownData_60_1 : 7; // 0x60(0x01)
	char UnknownData_61[0x3]; // 0x61(0x03)
	struct FKillSphereGroupParams AdditionalParams[0x05]; // 0x64(0x50)
	char UnknownData_B4[0x4]; // 0xb4(0x04)
};

// Class Engine.ParticleModuleLifetimeBase
// Size: 0x50 (Inherited: 0x50)
struct UParticleModuleLifetimeBase : UParticleModule {
};

// Class Engine.ParticleModuleLifetime
// Size: 0x1c0 (Inherited: 0x50)
struct UParticleModuleLifetime : UParticleModuleLifetimeBase {
	char bUseGroupAValuesForAllGroups : 1; // 0x50(0x01)
	char UnknownData_50_1 : 7; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
	struct FRawDistributionFloat LifeTime; // 0x58(0x38)
	struct FRawDistributionFloat AdditionalLifetimes[0x05]; // 0x90(0x118)
	char UnknownData_1A8[0x18]; // 0x1a8(0x18)
};

// Class Engine.ParticleModuleLifetime_Seeded
// Size: 0x1e0 (Inherited: 0x1c0)
struct UParticleModuleLifetime_Seeded : UParticleModuleLifetime {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x1c0(0x20)
};

// Class Engine.ParticleModuleLightBase
// Size: 0x50 (Inherited: 0x50)
struct UParticleModuleLightBase : UParticleModule {
};

// Class Engine.ParticleModuleLight
// Size: 0x138 (Inherited: 0x50)
struct UParticleModuleLight : UParticleModuleLightBase {
	bool bUseInverseSquaredFalloff; // 0x50(0x01)
	bool bAffectsTranslucency; // 0x51(0x01)
	bool bIgnoreComponentTint; // 0x52(0x01)
	bool bPreviewLightRadius; // 0x53(0x01)
	float SpawnFraction; // 0x54(0x04)
	struct FRawDistributionVector ColorScaleOverLife; // 0x58(0x38)
	struct FRawDistributionFloat BrightnessOverLife; // 0x90(0x38)
	struct FRawDistributionFloat RadiusScale; // 0xc8(0x38)
	struct FRawDistributionFloat LightExponent; // 0x100(0x38)
};

// Class Engine.ParticleModuleLight_Seeded
// Size: 0x158 (Inherited: 0x138)
struct UParticleModuleLight_Seeded : UParticleModuleLight {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x138(0x20)
};

// Class Engine.ParticleModuleLocationBase
// Size: 0x50 (Inherited: 0x50)
struct UParticleModuleLocationBase : UParticleModule {
};

// Class Engine.ParticleModuleLocation
// Size: 0x178 (Inherited: 0x50)
struct UParticleModuleLocation : UParticleModuleLocationBase {
	struct FRawDistributionVector StartLocation; // 0x50(0x38)
	struct FRawDistributionVector AdditionalStartLocations[0x04]; // 0x88(0xe0)
	char StartLocationUseGroupAForAll : 1; // 0x168(0x01)
	char UnknownData_168_1 : 7; // 0x168(0x01)
	char UnknownData_169[0x3]; // 0x169(0x03)
	float DistributeOverNPoints; // 0x16c(0x04)
	float DistributeThreshold; // 0x170(0x04)
	char UnknownData_174[0x4]; // 0x174(0x04)
};

// Class Engine.ParticleModuleLocation_Seeded
// Size: 0x198 (Inherited: 0x178)
struct UParticleModuleLocation_Seeded : UParticleModuleLocation {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x178(0x20)
};

// Class Engine.ParticleModuleLocationWorldOffset
// Size: 0x178 (Inherited: 0x178)
struct UParticleModuleLocationWorldOffset : UParticleModuleLocation {
};

// Class Engine.ParticleModuleLocationWorldOffset_Seeded
// Size: 0x198 (Inherited: 0x178)
struct UParticleModuleLocationWorldOffset_Seeded : UParticleModuleLocationWorldOffset {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x178(0x20)
};

// Class Engine.ParticleModuleLocationBoneSocket
// Size: 0x90 (Inherited: 0x50)
struct UParticleModuleLocationBoneSocket : UParticleModuleLocationBase {
	char SourceType; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	struct FVector UniversalOffset; // 0x54(0x0c)
	struct TArray<struct FLocationBoneSocketInfo> SourceLocations; // 0x60(0x10)
	char SelectionMethod; // 0x70(0x01)
	char UnknownData_71[0x3]; // 0x71(0x03)
	char bUpdatePositionEachFrame : 1; // 0x74(0x01)
	char bOrientMeshEmitters : 1; // 0x74(0x01)
	char bInheritBoneVelocity : 1; // 0x74(0x01)
	char UnknownData_74_3 : 5; // 0x74(0x01)
	char UnknownData_75[0x3]; // 0x75(0x03)
	struct FVector InheritVelocityScale; // 0x78(0x0c)
	float InheritedSpeedCap; // 0x84(0x04)
	struct FName SkelMeshActorParamName; // 0x88(0x08)
};

// Class Engine.ParticleModuleLocationDirect
// Size: 0x130 (Inherited: 0x50)
struct UParticleModuleLocationDirect : UParticleModuleLocationBase {
	struct FRawDistributionVector Location; // 0x50(0x38)
	struct FRawDistributionVector LocationOffset; // 0x88(0x38)
	struct FRawDistributionVector ScaleFactor; // 0xc0(0x38)
	struct FRawDistributionVector Direction; // 0xf8(0x38)
};

// Class Engine.ParticleModuleLocationEmitter
// Size: 0xa8 (Inherited: 0x50)
struct UParticleModuleLocationEmitter : UParticleModuleLocationBase {
	struct FName EmitterName; // 0x50(0x08)
	char SelectionMethod; // 0x58(0x01)
	char UnknownData_59[0x3]; // 0x59(0x03)
	char InheritSourceVelocity : 1; // 0x5c(0x01)
	char UnknownData_5C_1 : 7; // 0x5c(0x01)
	char UnknownData_5D[0x3]; // 0x5d(0x03)
	struct FRawDistributionFloat InheritSourceVelocityScaleDistribution; // 0x60(0x38)
	char bInheritSourceRotation : 1; // 0x98(0x01)
	char UnknownData_98_1 : 7; // 0x98(0x01)
	char UnknownData_99[0x3]; // 0x99(0x03)
	float InheritSourceRotationScale; // 0x9c(0x04)
	char MissingParentParticlesBehaviour; // 0xa0(0x01)
	char UnknownData_A1[0x7]; // 0xa1(0x07)
};

// Class Engine.ParticleModuleLocationEmitterDirect
// Size: 0x58 (Inherited: 0x50)
struct UParticleModuleLocationEmitterDirect : UParticleModuleLocationBase {
	struct FName EmitterName; // 0x50(0x08)
};

// Class Engine.ParticleModuleLocationGPU
// Size: 0x1a8 (Inherited: 0x50)
struct UParticleModuleLocationGPU : UParticleModuleLocationBase {
	struct FRawDistributionVector StartLocation; // 0x50(0x38)
	struct FRawDistributionVector AdditionalStartLocations[0x05]; // 0x88(0x118)
	char bUseGroupAStartLocationForAllGroups : 1; // 0x1a0(0x01)
	char UnknownData_1A0_1 : 7; // 0x1a0(0x01)
	char UnknownData_1A1[0x7]; // 0x1a1(0x07)
};

// Class Engine.ParticleModuleLocationGPU2
// Size: 0x1b8 (Inherited: 0x1a8)
struct UParticleModuleLocationGPU2 : UParticleModuleLocationGPU {
	char SpawnLocationValueSemantic; // 0x1a8(0x01)
	char AdditionalSpawnLocationValueSemantics[0x05]; // 0x1a9(0x05)
	char UnknownData_1AE[0x2]; // 0x1ae(0x02)
	char bUseGroupASpawnLocationValueSemanticForAllGroups : 1; // 0x1b0(0x01)
	char UnknownData_1B0_1 : 7; // 0x1b0(0x01)
	char UnknownData_1B1[0x7]; // 0x1b1(0x07)
};

// Class Engine.ParticleModuleLocationPrimitiveBase
// Size: 0xc8 (Inherited: 0x50)
struct UParticleModuleLocationPrimitiveBase : UParticleModuleLocationBase {
	char Positive_X : 1; // 0x50(0x01)
	char Positive_Y : 1; // 0x50(0x01)
	char Positive_Z : 1; // 0x50(0x01)
	char Negative_X : 1; // 0x50(0x01)
	char Negative_Y : 1; // 0x50(0x01)
	char Negative_Z : 1; // 0x50(0x01)
	char SurfaceOnly : 1; // 0x50(0x01)
	char Velocity : 1; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
	struct FRawDistributionFloat VelocityScale; // 0x58(0x38)
	struct FRawDistributionVector StartLocation; // 0x90(0x38)
};

// Class Engine.ParticleModuleLocationComputeShaderOutput
// Size: 0xd0 (Inherited: 0xc8)
struct UParticleModuleLocationComputeShaderOutput : UParticleModuleLocationPrimitiveBase {
	struct UParticleComputeShaderData* PositionData; // 0xc8(0x08)
};

// Class Engine.ParticleModuleLocationPrimitiveCylinder
// Size: 0x348 (Inherited: 0xc8)
struct UParticleModuleLocationPrimitiveCylinder : UParticleModuleLocationPrimitiveBase {
	char RadialVelocity : 1; // 0xc8(0x01)
	char UnknownData_C8_1 : 7; // 0xc8(0x01)
	char UnknownData_C9[0x7]; // 0xc9(0x07)
	struct FRawDistributionFloat StartRadius; // 0xd0(0x38)
	struct FRawDistributionFloat AdditionalStartRadiuses[0x04]; // 0x108(0xe0)
	char StartRadiusUseGroupAForAll : 1; // 0x1e8(0x01)
	char UnknownData_1E8_1 : 7; // 0x1e8(0x01)
	char UnknownData_1E9[0x3]; // 0x1e9(0x03)
	struct FVector2D RadiusScale; // 0x1ec(0x08)
	char UnknownData_1F4[0x4]; // 0x1f4(0x04)
	struct FRawDistributionFloat StartHeight; // 0x1f8(0x38)
	char StartHeightUseGroupAForAll : 1; // 0x230(0x01)
	char UnknownData_230_1 : 7; // 0x230(0x01)
	char UnknownData_231[0x7]; // 0x231(0x07)
	struct FRawDistributionFloat AdditionalStartHeights[0x04]; // 0x238(0xe0)
	struct FVector2D AngleRange; // 0x318(0x08)
	struct FVector2D AdditionalAngleRanges[0x04]; // 0x320(0x20)
	char AngleRangeUseGroupAForAll : 1; // 0x340(0x01)
	char UnknownData_340_1 : 7; // 0x340(0x01)
	char UnknownData_341[0x3]; // 0x341(0x03)
	char HeightAxis; // 0x344(0x01)
	char UnknownData_345[0x3]; // 0x345(0x03)
};

// Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded
// Size: 0x368 (Inherited: 0x348)
struct UParticleModuleLocationPrimitiveCylinder_Seeded : UParticleModuleLocationPrimitiveCylinder {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x348(0x20)
};

// Class Engine.ParticleModuleLocationPrimitiveSphere
// Size: 0x218 (Inherited: 0xc8)
struct UParticleModuleLocationPrimitiveSphere : UParticleModuleLocationPrimitiveBase {
	struct FRawDistributionFloat StartRadius; // 0xc8(0x38)
	struct FRawDistributionFloat AdditionalStartRadiuses[0x04]; // 0x100(0xe0)
	char StartRadiusUseGroupAForAll : 1; // 0x1e0(0x01)
	char UnknownData_1E0_1 : 7; // 0x1e0(0x01)
	char UnknownData_1E1[0x3]; // 0x1e1(0x03)
	struct FVector2D PositiveXAngleRange; // 0x1e4(0x08)
	struct FVector2D NegativeXAngleRange; // 0x1ec(0x08)
	struct FVector2D PositiveYAngleRange; // 0x1f4(0x08)
	struct FVector2D NegativeYAngleRange; // 0x1fc(0x08)
	struct FVector2D PositiveZAngleRange; // 0x204(0x08)
	struct FVector2D NegativeZAngleRange; // 0x20c(0x08)
	char UnknownData_214[0x4]; // 0x214(0x04)
};

// Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded
// Size: 0x238 (Inherited: 0x218)
struct UParticleModuleLocationPrimitiveSphere_Seeded : UParticleModuleLocationPrimitiveSphere {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x218(0x20)
};

// Class Engine.ParticleModuleLocationPrimitiveSphereGPU
// Size: 0x3b8 (Inherited: 0xc8)
struct UParticleModuleLocationPrimitiveSphereGPU : UParticleModuleLocationPrimitiveBase {
	struct FRawDistributionFloat StartRadius; // 0xc8(0x38)
	struct FRawDistributionFloat AdditionalStartRadius[0x04]; // 0x100(0xe0)
	char bUseGroupAStartRadiusForAllGroups : 1; // 0x1e0(0x01)
	char UnknownData_1E0_1 : 7; // 0x1e0(0x01)
	char UnknownData_1E1[0x7]; // 0x1e1(0x07)
	struct FRawDistributionFloat AdditionalVelocityScales[0x04]; // 0x1e8(0xe0)
	char bUseGroupAVelocityScaleForAllGroups : 1; // 0x2c8(0x01)
	char UnknownData_2C8_1 : 7; // 0x2c8(0x01)
	char UnknownData_2C9[0x7]; // 0x2c9(0x07)
	struct FRawDistributionVector AdditionalStartLocations[0x04]; // 0x2d0(0xe0)
	char bUseGroupAStartLocationForAllGroups : 1; // 0x3b0(0x01)
	char UnknownData_3B0_1 : 7; // 0x3b0(0x01)
	char UnknownData_3B1[0x7]; // 0x3b1(0x07)
};

// Class Engine.ParticleModuleLocationVelocityComputeShaderOutput
// Size: 0x1b8 (Inherited: 0xc8)
struct UParticleModuleLocationVelocityComputeShaderOutput : UParticleModuleLocationPrimitiveBase {
	struct UParticleComputeShaderData* PositionData; // 0xc8(0x08)
	struct FRawDistributionVector ComputedVelocityScale; // 0xd0(0x38)
	float SpeedCap; // 0x108(0x04)
	char UnknownData_10C[0x4]; // 0x10c(0x04)
	struct FRawDistributionVector BaseVelocity; // 0x110(0x38)
	struct FRawDistributionVector LocationOffset; // 0x148(0x38)
	struct FRawDistributionVector LocationOffsetScaledDirection; // 0x180(0x38)
};

// Class Engine.ParticleModuleLocationPrimitiveSphereSlice
// Size: 0x208 (Inherited: 0x50)
struct UParticleModuleLocationPrimitiveSphereSlice : UParticleModuleLocationBase {
	struct FRawDistributionFloat StartRadius; // 0x50(0x38)
	struct FRawDistributionFloat AdditionalStartRadiuses[0x04]; // 0x88(0xe0)
	char StartRadiusUseGroupAForAll : 1; // 0x168(0x01)
	char UnknownData_168_1 : 7; // 0x168(0x01)
	char UnknownData_169[0x3]; // 0x169(0x03)
	struct FPrimitiveSphereEmitterAngleRanges AngleRanges[0x02]; // 0x16c(0x20)
	float FirstSliceDistributionWeight; // 0x18c(0x04)
	char SurfaceOnly : 1; // 0x190(0x01)
	char Velocity : 1; // 0x190(0x01)
	char UnknownData_190_2 : 6; // 0x190(0x01)
	char UnknownData_191[0x7]; // 0x191(0x07)
	struct FRawDistributionFloat VelocityScale; // 0x198(0x38)
	struct FRawDistributionVector StartLocation; // 0x1d0(0x38)
};

// Class Engine.ParticleModuleLocationPrimitiveTriangle
// Size: 0x130 (Inherited: 0x50)
struct UParticleModuleLocationPrimitiveTriangle : UParticleModuleLocationBase {
	struct FRawDistributionVector StartOffset; // 0x50(0x38)
	struct FRawDistributionFloat Height; // 0x88(0x38)
	struct FRawDistributionFloat Angle; // 0xc0(0x38)
	struct FRawDistributionFloat Thickness; // 0xf8(0x38)
};

// Class Engine.ParticleModuleLocationSkelVertSurface
// Size: 0xb0 (Inherited: 0x50)
struct UParticleModuleLocationSkelVertSurface : UParticleModuleLocationBase {
	char SourceType; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	struct FVector UniversalOffset; // 0x54(0x0c)
	char bUpdatePositionEachFrame : 1; // 0x60(0x01)
	char bOrientMeshEmitters : 1; // 0x60(0x01)
	char bInheritBoneVelocity : 1; // 0x60(0x01)
	char UnknownData_60_3 : 5; // 0x60(0x01)
	char UnknownData_61[0x3]; // 0x61(0x03)
	struct FName SkelMeshActorParamName; // 0x64(0x08)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct FName> ValidAssociatedBones; // 0x70(0x10)
	char bEnforceNormalCheck : 1; // 0x80(0x01)
	char UnknownData_80_1 : 7; // 0x80(0x01)
	char UnknownData_81[0x3]; // 0x81(0x03)
	struct FVector NormalToCompare; // 0x84(0x0c)
	float NormalCheckToleranceDegrees; // 0x90(0x04)
	float NormalCheckTolerance; // 0x94(0x04)
	struct TArray<int32_t> ValidMaterialIndices; // 0x98(0x10)
	char bInheritVertexColor : 1; // 0xa8(0x01)
	char UnknownData_A8_1 : 7; // 0xa8(0x01)
	char UnknownData_A9[0x7]; // 0xa9(0x07)
};

// Class Engine.ParticleModulePivotOffset
// Size: 0x58 (Inherited: 0x50)
struct UParticleModulePivotOffset : UParticleModuleLocationBase {
	struct FVector2D PivotOffset; // 0x50(0x08)
};

// Class Engine.ParticleModuleSourceMovement
// Size: 0x88 (Inherited: 0x50)
struct UParticleModuleSourceMovement : UParticleModuleLocationBase {
	struct FRawDistributionVector SourceMovementScale; // 0x50(0x38)
};

// Class Engine.ParticleModuleMaterialBase
// Size: 0x50 (Inherited: 0x50)
struct UParticleModuleMaterialBase : UParticleModule {
};

// Class Engine.ParticleModuleMeshMaterial
// Size: 0x60 (Inherited: 0x50)
struct UParticleModuleMeshMaterial : UParticleModuleMaterialBase {
	struct TArray<struct UMaterialInterface*> MeshMaterials; // 0x50(0x10)
};

// Class Engine.ParticleModuleOrbitBase
// Size: 0x58 (Inherited: 0x50)
struct UParticleModuleOrbitBase : UParticleModule {
	char bUseEmitterTime : 1; // 0x50(0x01)
	char UnknownData_50_1 : 7; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
};

// Class Engine.ParticleModuleOrbit
// Size: 0x120 (Inherited: 0x58)
struct UParticleModuleOrbit : UParticleModuleOrbitBase {
	char ChainMode; // 0x58(0x01)
	char UnknownData_59[0x7]; // 0x59(0x07)
	struct FRawDistributionVector OffsetAmount; // 0x60(0x38)
	struct FOrbitOptions OffsetOptions; // 0x98(0x04)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
	struct FRawDistributionVector RotationAmount; // 0xa0(0x38)
	struct FOrbitOptions RotationOptions; // 0xd8(0x04)
	char UnknownData_DC[0x4]; // 0xdc(0x04)
	struct FRawDistributionVector RotationRateAmount; // 0xe0(0x38)
	struct FOrbitOptions RotationRateOptions; // 0x118(0x04)
	char UnknownData_11C[0x4]; // 0x11c(0x04)
};

// Class Engine.ParticleModuleOrientationBase
// Size: 0x50 (Inherited: 0x50)
struct UParticleModuleOrientationBase : UParticleModule {
};

// Class Engine.ParticleModuleOrientationAxisLock
// Size: 0x58 (Inherited: 0x50)
struct UParticleModuleOrientationAxisLock : UParticleModuleOrientationBase {
	char LockAxisFlags; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
};

// Class Engine.ParticleModuleParameterBase
// Size: 0x50 (Inherited: 0x50)
struct UParticleModuleParameterBase : UParticleModule {
};

// Class Engine.ParticleModuleParameterDynamic
// Size: 0x68 (Inherited: 0x50)
struct UParticleModuleParameterDynamic : UParticleModuleParameterBase {
	struct TArray<struct FEmitterDynamicParameter> DynamicParams; // 0x50(0x10)
	int32_t UpdateFlags; // 0x60(0x04)
	char bUsesVelocity : 1; // 0x64(0x01)
	char UnknownData_64_1 : 7; // 0x64(0x01)
	char UnknownData_65[0x3]; // 0x65(0x03)
};

// Class Engine.ParticleModuleParameterDynamic_Seeded
// Size: 0x88 (Inherited: 0x68)
struct UParticleModuleParameterDynamic_Seeded : UParticleModuleParameterDynamic {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x68(0x20)
};

// Class Engine.ParticleModuleParametersOverX
// Size: 0x68 (Inherited: 0x50)
struct UParticleModuleParametersOverX : UParticleModule {
	float GroupScales[0x06]; // 0x50(0x18)
};

// Class Engine.ParticleModuleParametersOverCustom
// Size: 0x1f0 (Inherited: 0x68)
struct UParticleModuleParametersOverCustom : UParticleModuleParametersOverX {
	struct FRawDistributionFloat DynamicParamScaleOverCustomScale; // 0x68(0x38)
	struct FRawDistributionFloat SpawnRateOverCustomScale; // 0xa0(0x38)
	struct FRawDistributionFloat LifetimeOverCustomScale; // 0xd8(0x38)
	struct FRawDistributionFloat SizeOverCustomScale; // 0x110(0x38)
	struct FRawDistributionFloat InitialVelocityOverCustomScale; // 0x148(0x38)
	struct FRawDistributionFloat OpacityOverCustomScale; // 0x180(0x38)
	struct FRawDistributionFloat CylinderRadiusOverCustomScale; // 0x1b8(0x38)
};

// Class Engine.ParticleModuleParametersOverVelocity
// Size: 0x198 (Inherited: 0x68)
struct UParticleModuleParametersOverVelocity : UParticleModuleParametersOverX {
	float MinSpeed; // 0x68(0x04)
	float MaxSpeed; // 0x6c(0x04)
	struct FVector VelocityComponentsWeights; // 0x70(0x0c)
	char UnknownData_7C[0x4]; // 0x7c(0x04)
	struct FRawDistributionFloat SpawnRateOverSpeedScale; // 0x80(0x38)
	struct FRawDistributionFloat LifetimeOverSpeedScale; // 0xb8(0x38)
	struct FRawDistributionFloat SizeOverSpeedScale; // 0xf0(0x38)
	struct FRawDistributionFloat InitialVelocityOverSpeedScale; // 0x128(0x38)
	struct FRawDistributionFloat OpacityOverSpeedScale; // 0x160(0x38)
};

// Class Engine.SubUVAnimation
// Size: 0x88 (Inherited: 0x28)
struct USubUVAnimation : UObject {
	struct UTexture2D* SubUVTexture; // 0x28(0x08)
	int32_t SubImages_Horizontal; // 0x30(0x04)
	int32_t SubImages_Vertical; // 0x34(0x04)
	char BoundingMode; // 0x38(0x01)
	char OpacitySourceMode; // 0x39(0x01)
	char UnknownData_3A[0x2]; // 0x3a(0x02)
	float AlphaThreshold; // 0x3c(0x04)
	float SafeMarginSize; // 0x40(0x04)
	char UnknownData_44[0x44]; // 0x44(0x44)
};

// Class Engine.ParticleModuleRequired
// Size: 0x2e8 (Inherited: 0x50)
struct UParticleModuleRequired : UParticleModule {
	char bDeactivateGroupA : 1; // 0x50(0x01)
	char bDeactivateGroupB : 1; // 0x50(0x01)
	char bDeactivateGroupC : 1; // 0x50(0x01)
	char bDeactivateGroupD : 1; // 0x50(0x01)
	char bDeactivateGroupE : 1; // 0x50(0x01)
	char UnknownData_50_5 : 3; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	char EmitterPriority; // 0x54(0x01)
	char UnknownData_55[0x3]; // 0x55(0x03)
	char bUseComplexitySystemWhenLooping : 1; // 0x58(0x01)
	char UnknownData_58_1 : 7; // 0x58(0x01)
	char UnknownData_59[0x3]; // 0x59(0x03)
	char SwitchPriority; // 0x5c(0x01)
	char UnknownData_5D[0x3]; // 0x5d(0x03)
	char bReplacementGroupIsAdditive : 1; // 0x60(0x01)
	char UnknownData_60_1 : 7; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
	struct UMaterialInterface* Material; // 0x68(0x08)
	struct FVector EmitterOrigin; // 0x70(0x0c)
	char EmitterOriginUseGroupAForAll : 1; // 0x7c(0x01)
	char UnknownData_7C_1 : 7; // 0x7c(0x01)
	char UnknownData_7D[0x3]; // 0x7d(0x03)
	struct FVector AdditionalEmitterOrigins[0x05]; // 0x80(0x3c)
	struct FRotator EmitterRotation; // 0xbc(0x0c)
	char ScreenAlignment; // 0xc8(0x01)
	char UnknownData_C9[0x3]; // 0xc9(0x03)
	char bUseGroupAScreenAlignmentForAllGroups : 1; // 0xcc(0x01)
	char UnknownData_CC_1 : 7; // 0xcc(0x01)
	char UnknownData_CD[0x3]; // 0xcd(0x03)
	char AdditionalScreenAlignments[0x05]; // 0xd0(0x05)
	char UnknownData_D5[0x3]; // 0xd5(0x03)
	float AlignmentInheritedVelocityScale; // 0xd8(0x04)
	char bUseLocalSpace : 1; // 0xdc(0x01)
	char bFollowEmitter : 1; // 0xdc(0x01)
	char bTrailInGrandParentSpace : 1; // 0xdc(0x01)
	char bKillOnDeactivate : 1; // 0xdc(0x01)
	char bKillOnCompleted : 1; // 0xdc(0x01)
	char UnknownData_DC_5 : 3; // 0xdc(0x01)
	char UnknownData_DD[0x3]; // 0xdd(0x03)
	char SortMode; // 0xe0(0x01)
	char WaterKillCondition; // 0xe1(0x01)
	char UnknownData_E2[0x2]; // 0xe2(0x02)
	char bUseLegacyEmitterTime : 1; // 0xe4(0x01)
	char UnknownData_E4_1 : 7; // 0xe4(0x01)
	char UnknownData_E5[0x3]; // 0xe5(0x03)
	float EmitterDuration; // 0xe8(0x04)
	float EmitterDurationLow; // 0xec(0x04)
	char bEmitterDurationUseRange : 1; // 0xf0(0x01)
	char bDurationRecalcEachLoop : 1; // 0xf0(0x01)
	char bSeparateLoopTimeForSubUV : 1; // 0xf0(0x01)
	char UnknownData_F0_3 : 5; // 0xf0(0x01)
	char UnknownData_F1[0x3]; // 0xf1(0x03)
	int32_t EmitterLoops; // 0xf4(0x04)
	struct FRawDistributionFloat LoopTime; // 0xf8(0x38)
	struct FRawDistributionFloat LoopOffset; // 0x130(0x38)
	struct FRawDistributionFloat LoopTimeForSubUV; // 0x168(0x38)
	float LoopBeginTime; // 0x1a0(0x04)
	float LoopEndTime; // 0x1a4(0x04)
	struct FRawDistributionFloat SpawnRate; // 0x1a8(0x38)
	char ParticleBurstMethod; // 0x1e0(0x01)
	char UnknownData_1E1[0x7]; // 0x1e1(0x07)
	struct TArray<struct FParticleBurst> BurstList; // 0x1e8(0x10)
	float EmitterDelay; // 0x1f8(0x04)
	float EmitterDelayLow; // 0x1fc(0x04)
	char bEmitterDelayUseRange : 1; // 0x200(0x01)
	char bDelayFirstLoopOnly : 1; // 0x200(0x01)
	char UnknownData_200_2 : 6; // 0x200(0x01)
	char UnknownData_201[0x3]; // 0x201(0x03)
	char InterpolationMethod; // 0x204(0x01)
	char UnknownData_205[0x3]; // 0x205(0x03)
	int32_t SubImages_Horizontal; // 0x208(0x04)
	int32_t SubImages_Vertical; // 0x20c(0x04)
	char bScaleUV : 1; // 0x210(0x01)
	char UnknownData_210_1 : 7; // 0x210(0x01)
	char UnknownData_211[0x3]; // 0x211(0x03)
	float RandomImageTime; // 0x214(0x04)
	int32_t RandomImageChanges; // 0x218(0x04)
	char bOverrideSystemMacroUV : 1; // 0x21c(0x01)
	char UnknownData_21C_1 : 7; // 0x21c(0x01)
	char UnknownData_21D[0x3]; // 0x21d(0x03)
	struct FVector MacroUVPosition; // 0x220(0x0c)
	float MacroUVRadius; // 0x22c(0x04)
	char bUseMaxDrawCount : 1; // 0x230(0x01)
	char UnknownData_230_1 : 7; // 0x230(0x01)
	char UnknownData_231[0x3]; // 0x231(0x03)
	int32_t MaxDrawCount; // 0x234(0x04)
	char EmitterNormalsMode; // 0x238(0x01)
	char UnknownData_239[0x3]; // 0x239(0x03)
	struct FVector NormalsSphereCenter; // 0x23c(0x0c)
	struct FVector NormalsCylinderDirection; // 0x248(0x0c)
	char bOrbitModuleAffectsVelocityAlignment : 1; // 0x254(0x01)
	char UnknownData_254_1 : 7; // 0x254(0x01)
	char UnknownData_255[0x3]; // 0x255(0x03)
	char UVFlippingMode; // 0x258(0x01)
	char BoundingMode; // 0x259(0x01)
	char OpacitySourceMode; // 0x25a(0x01)
	char UnknownData_25B[0x1]; // 0x25b(0x01)
	float AlphaThreshold; // 0x25c(0x04)
	float SafeMarginSize; // 0x260(0x04)
	char UnknownData_264[0x4]; // 0x264(0x04)
	struct TArray<struct FName> NamedMaterialOverrides; // 0x268(0x10)
	char bUseDistanceFading : 1; // 0x278(0x01)
	char UnknownData_278_1 : 7; // 0x278(0x01)
	char UnknownData_279[0x3]; // 0x279(0x03)
	float FarStopFade; // 0x27c(0x04)
	float FarStartFade; // 0x280(0x04)
	float NearStartFade; // 0x284(0x04)
	float NearStopFade; // 0x288(0x04)
	char ApplyFOVDistanceScaling : 1; // 0x28c(0x01)
	char bUseDistanceSizeScale : 1; // 0x28c(0x01)
	char UnknownData_28C_2 : 6; // 0x28c(0x01)
	char UnknownData_28D[0x3]; // 0x28d(0x03)
	float FarScaleFactor; // 0x290(0x04)
	float FarScaleEndDistance; // 0x294(0x04)
	float FarScaleBeginDistance; // 0x298(0x04)
	float NearScaleBeginDistance; // 0x29c(0x04)
	float NearScaleEndDistance; // 0x2a0(0x04)
	float NearScaleFactor; // 0x2a4(0x04)
	char UnknownData_2A8[0x40]; // 0x2a8(0x40)
};

// Class Engine.ParticleModuleRotationBase
// Size: 0x50 (Inherited: 0x50)
struct UParticleModuleRotationBase : UParticleModule {
};

// Class Engine.ParticleModuleAlignRotationToVelocity
// Size: 0x88 (Inherited: 0x50)
struct UParticleModuleAlignRotationToVelocity : UParticleModuleRotationBase {
	struct FRawDistributionFloat AdditionalAngle; // 0x50(0x38)
};

// Class Engine.ParticleModuleMeshRotation
// Size: 0x90 (Inherited: 0x50)
struct UParticleModuleMeshRotation : UParticleModuleRotationBase {
	struct FRawDistributionVector StartRotation; // 0x50(0x38)
	char bInheritParent : 1; // 0x88(0x01)
	char UnknownData_88_1 : 7; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
};

// Class Engine.ParticleModuleMeshRotation_Seeded
// Size: 0xb0 (Inherited: 0x90)
struct UParticleModuleMeshRotation_Seeded : UParticleModuleMeshRotation {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x90(0x20)
};

// Class Engine.ParticleModuleRotateRotationAxis
// Size: 0xb8 (Inherited: 0x50)
struct UParticleModuleRotateRotationAxis : UParticleModuleRotationBase {
	struct FRotationAboutAxisParameters FacingAxis; // 0x50(0x10)
	char bUseGroupAFacingAxisForAllGroups : 1; // 0x60(0x01)
	char UnknownData_60_1 : 7; // 0x60(0x01)
	char UnknownData_61[0x3]; // 0x61(0x03)
	struct FRotationAboutAxisParameters AdditionalFacingAxes[0x05]; // 0x64(0x50)
	char UnknownData_B4[0x4]; // 0xb4(0x04)
};

// Class Engine.ParticleModuleRotation
// Size: 0x1a8 (Inherited: 0x50)
struct UParticleModuleRotation : UParticleModuleRotationBase {
	char bUseGroupARotationForAllGroups : 1; // 0x50(0x01)
	char UnknownData_50_1 : 7; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
	struct FRawDistributionFloat StartRotation; // 0x58(0x38)
	struct FRawDistributionFloat AdditionalStartRotation[0x05]; // 0x90(0x118)
};

// Class Engine.ParticleModuleRotation_Seeded
// Size: 0x1c8 (Inherited: 0x1a8)
struct UParticleModuleRotation_Seeded : UParticleModuleRotation {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x1a8(0x20)
};

// Class Engine.ParticleModuleRotationOverLifetime
// Size: 0x90 (Inherited: 0x50)
struct UParticleModuleRotationOverLifetime : UParticleModuleRotationBase {
	struct FRawDistributionFloat RotationOverLife; // 0x50(0x38)
	char Scale : 1; // 0x88(0x01)
	char UnknownData_88_1 : 7; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
};

// Class Engine.ParticleModuleRotationRateBase
// Size: 0x50 (Inherited: 0x50)
struct UParticleModuleRotationRateBase : UParticleModule {
};

// Class Engine.ParticleModuleMeshRotationRate
// Size: 0x88 (Inherited: 0x50)
struct UParticleModuleMeshRotationRate : UParticleModuleRotationRateBase {
	struct FRawDistributionVector StartRotationRate; // 0x50(0x38)
};

// Class Engine.ParticleModuleMeshRotationRate_Seeded
// Size: 0xa8 (Inherited: 0x88)
struct UParticleModuleMeshRotationRate_Seeded : UParticleModuleMeshRotationRate {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x88(0x20)
};

// Class Engine.ParticleModuleMeshRotationRateMultiplyLife
// Size: 0x88 (Inherited: 0x50)
struct UParticleModuleMeshRotationRateMultiplyLife : UParticleModuleRotationRateBase {
	struct FRawDistributionVector LifeMultiplier; // 0x50(0x38)
};

// Class Engine.ParticleModuleMeshRotationRateOverLife
// Size: 0x90 (Inherited: 0x50)
struct UParticleModuleMeshRotationRateOverLife : UParticleModuleRotationRateBase {
	struct FRawDistributionVector RotRate; // 0x50(0x38)
	char bScaleRotRate : 1; // 0x88(0x01)
	char UnknownData_88_1 : 7; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
};

// Class Engine.ParticleModuleRotationRate
// Size: 0x1a8 (Inherited: 0x50)
struct UParticleModuleRotationRate : UParticleModuleRotationRateBase {
	char bUseGroupARotationRateForAllGroups : 1; // 0x50(0x01)
	char UnknownData_50_1 : 7; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
	struct FRawDistributionFloat StartRotationRate; // 0x58(0x38)
	struct FRawDistributionFloat AdditionalStartRotationRate[0x05]; // 0x90(0x118)
};

// Class Engine.ParticleModuleRotationRate_Seeded
// Size: 0x1c8 (Inherited: 0x1a8)
struct UParticleModuleRotationRate_Seeded : UParticleModuleRotationRate {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x1a8(0x20)
};

// Class Engine.ParticleModuleRotationRateMultiplyLife
// Size: 0x88 (Inherited: 0x50)
struct UParticleModuleRotationRateMultiplyLife : UParticleModuleRotationRateBase {
	struct FRawDistributionFloat LifeMultiplier; // 0x50(0x38)
};

// Class Engine.ParticleModuleSizeBase
// Size: 0x50 (Inherited: 0x50)
struct UParticleModuleSizeBase : UParticleModule {
};

// Class Engine.ParticleModuleSize
// Size: 0x1b0 (Inherited: 0x50)
struct UParticleModuleSize : UParticleModuleSizeBase {
	char bUseGroupAForAll : 1; // 0x50(0x01)
	char UnknownData_50_1 : 7; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
	struct FRawDistributionVector StartSize; // 0x58(0x38)
	struct FRawDistributionVector AdditionalStartSizes[0x05]; // 0x90(0x118)
	char bKeepAspectRatio : 1; // 0x1a8(0x01)
	char bIgnoreComponentScale : 1; // 0x1a8(0x01)
	char UnknownData_1A8_2 : 6; // 0x1a8(0x01)
	char UnknownData_1A9[0x7]; // 0x1a9(0x07)
};

// Class Engine.ParticleModuleSize_Seeded
// Size: 0x1d0 (Inherited: 0x1b0)
struct UParticleModuleSize_Seeded : UParticleModuleSize {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x1b0(0x20)
};

// Class Engine.ParticleModuleSizeMultiplyLife
// Size: 0x90 (Inherited: 0x50)
struct UParticleModuleSizeMultiplyLife : UParticleModuleSizeBase {
	struct FRawDistributionVector LifeMultiplier; // 0x50(0x38)
	char MultiplyX : 1; // 0x88(0x01)
	char MultiplyY : 1; // 0x88(0x01)
	char MultiplyZ : 1; // 0x88(0x01)
	char UnknownData_88_3 : 5; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
};

// Class Engine.ParticleModuleSizeOverVelocity
// Size: 0x88 (Inherited: 0x50)
struct UParticleModuleSizeOverVelocity : UParticleModuleSizeBase {
	struct FRawDistributionFloat SizeMultiplier; // 0x50(0x38)
};

// Class Engine.ParticleModuleSizeScale
// Size: 0x90 (Inherited: 0x50)
struct UParticleModuleSizeScale : UParticleModuleSizeBase {
	struct FRawDistributionVector SizeScale; // 0x50(0x38)
	char EnableX : 1; // 0x88(0x01)
	char EnableY : 1; // 0x88(0x01)
	char EnableZ : 1; // 0x88(0x01)
	char UnknownData_88_3 : 5; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
};

// Class Engine.ParticleModuleSizeScaleBySpeed
// Size: 0x60 (Inherited: 0x50)
struct UParticleModuleSizeScaleBySpeed : UParticleModuleSizeBase {
	struct FVector2D SpeedScale; // 0x50(0x08)
	struct FVector2D MaxScale; // 0x58(0x08)
};

// Class Engine.ParticleModuleSpawnBase
// Size: 0x58 (Inherited: 0x50)
struct UParticleModuleSpawnBase : UParticleModule {
	char bProcessSpawnRate : 1; // 0x50(0x01)
	char bProcessBurstList : 1; // 0x50(0x01)
	char UnknownData_50_2 : 6; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
};

// Class Engine.ParticleModuleSpawn
// Size: 0x278 (Inherited: 0x58)
struct UParticleModuleSpawn : UParticleModuleSpawnBase {
	struct FRawDistributionFloat Rate; // 0x58(0x38)
	struct FRawDistributionFloat AdditionalRates[0x05]; // 0x90(0x118)
	float StartScaleDistance; // 0x1a8(0x04)
	float EndScaleDistance; // 0x1ac(0x04)
	struct FRawDistributionFloat RateScaleOverDistance; // 0x1b0(0x38)
	struct FRawDistributionFloat RateScale; // 0x1e8(0x38)
	char ParticleBurstMethod; // 0x220(0x01)
	char UnknownData_221[0x7]; // 0x221(0x07)
	struct TArray<struct FParticleBurst> BurstList; // 0x228(0x10)
	struct FRawDistributionFloat BurstScale; // 0x238(0x38)
	char bApplyGlobalSpawnRateScale : 1; // 0x270(0x01)
	char bBurstTreatedAsLoopingForLODs : 1; // 0x270(0x01)
	char UnknownData_270_2 : 6; // 0x270(0x01)
	char UnknownData_271[0x7]; // 0x271(0x07)
};

// Class Engine.ParticleModuleSpawnPerUnit
// Size: 0xa8 (Inherited: 0x58)
struct UParticleModuleSpawnPerUnit : UParticleModuleSpawnBase {
	char bAffectsGroupA : 1; // 0x58(0x01)
	char bAffectsGroupB : 1; // 0x58(0x01)
	char bAffectsGroupC : 1; // 0x58(0x01)
	char bAffectsGroupD : 1; // 0x58(0x01)
	char bAffectsGroupE : 1; // 0x58(0x01)
	char bAffectsReplacementGroup : 1; // 0x58(0x01)
	char UnknownData_58_6 : 2; // 0x58(0x01)
	char UnknownData_59[0x3]; // 0x59(0x03)
	float UnitScalar; // 0x5c(0x04)
	struct FRawDistributionFloat SpawnPerUnit; // 0x60(0x38)
	char bIgnoreSpawnRateWhenMoving : 1; // 0x98(0x01)
	char UnknownData_98_1 : 7; // 0x98(0x01)
	char UnknownData_99[0x3]; // 0x99(0x03)
	float MovementTolerance; // 0x9c(0x04)
	float MaxFrameDistance; // 0xa0(0x04)
	char bIgnoreMovementAlongX : 1; // 0xa4(0x01)
	char bIgnoreMovementAlongY : 1; // 0xa4(0x01)
	char bIgnoreMovementAlongZ : 1; // 0xa4(0x01)
	char UnknownData_A4_3 : 5; // 0xa4(0x01)
	char UnknownData_A5[0x3]; // 0xa5(0x03)
};

// Class Engine.ParticleModuleSpawnPerUnitNew
// Size: 0xa8 (Inherited: 0xa8)
struct UParticleModuleSpawnPerUnitNew : UParticleModuleSpawnPerUnit {
};

// Class Engine.ParticleModuleSpawnRepeatPerPoint
// Size: 0x58 (Inherited: 0x58)
struct UParticleModuleSpawnRepeatPerPoint : UParticleModuleSpawnBase {
};

// Class Engine.ParticleModuleSubUVBase
// Size: 0x50 (Inherited: 0x50)
struct UParticleModuleSubUVBase : UParticleModule {
};

// Class Engine.ParticleModuleSubUV
// Size: 0x90 (Inherited: 0x50)
struct UParticleModuleSubUV : UParticleModuleSubUVBase {
	struct FRawDistributionFloat SubImageIndex; // 0x50(0x38)
	char bUseRealTime : 1; // 0x88(0x01)
	char UnknownData_88_1 : 7; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
};

// Class Engine.ParticleModuleSubUVMovie
// Size: 0xd8 (Inherited: 0x90)
struct UParticleModuleSubUVMovie : UParticleModuleSubUV {
	char bUseEmitterTime : 1; // 0x90(0x01)
	char UnknownData_90_1 : 7; // 0x90(0x01)
	char UnknownData_91[0x7]; // 0x91(0x07)
	struct FRawDistributionFloat FrameRate; // 0x98(0x38)
	int32_t StartingFrame; // 0xd0(0x04)
	char UnknownData_D4[0x4]; // 0xd4(0x04)
};

// Class Engine.ParticleModuleTrailBase
// Size: 0x50 (Inherited: 0x50)
struct UParticleModuleTrailBase : UParticleModule {
};

// Class Engine.ParticleModuleTrailSource
// Size: 0xb8 (Inherited: 0x50)
struct UParticleModuleTrailSource : UParticleModuleTrailBase {
	char SourceMethod; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	struct FName SourceName; // 0x54(0x08)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
	struct FRawDistributionFloat SourceStrength; // 0x60(0x38)
	char bLockSourceStength : 1; // 0x98(0x01)
	char UnknownData_98_1 : 7; // 0x98(0x01)
	char UnknownData_99[0x3]; // 0x99(0x03)
	int32_t SourceOffsetCount; // 0x9c(0x04)
	struct TArray<struct FVector> SourceOffsetDefaults; // 0xa0(0x10)
	char SelectionMethod; // 0xb0(0x01)
	char UnknownData_B1[0x3]; // 0xb1(0x03)
	char bInheritRotation : 1; // 0xb4(0x01)
	char UnknownData_B4_1 : 7; // 0xb4(0x01)
	char UnknownData_B5[0x3]; // 0xb5(0x03)
};

// Class Engine.ParticleModuleTypeDataBase
// Size: 0x50 (Inherited: 0x50)
struct UParticleModuleTypeDataBase : UParticleModule {
};

// Class Engine.ParticleModuleTypeDataAnimTrail
// Size: 0x68 (Inherited: 0x50)
struct UParticleModuleTypeDataAnimTrail : UParticleModuleTypeDataBase {
	char bDeadTrailsOnDeactivate : 1; // 0x50(0x01)
	char bEnablePreviousTangentRecalculation : 1; // 0x50(0x01)
	char bTangentRecalculationEveryFrame : 1; // 0x50(0x01)
	char UnknownData_50_3 : 5; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	float TilingDistance; // 0x54(0x04)
	float DistanceTessellationStepSize; // 0x58(0x04)
	float TangentTessellationStepSize; // 0x5c(0x04)
	float WidthTessellationStepSize; // 0x60(0x04)
	char UnknownData_64[0x4]; // 0x64(0x04)
};

// Class Engine.ParticleModuleTypeDataBeam2
// Size: 0x188 (Inherited: 0x50)
struct UParticleModuleTypeDataBeam2 : UParticleModuleTypeDataBase {
	char BeamMethod; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	int32_t TextureTile; // 0x54(0x04)
	float TextureTileDistance; // 0x58(0x04)
	int32_t Sheets; // 0x5c(0x04)
	int32_t MaxBeamCount; // 0x60(0x04)
	float Speed; // 0x64(0x04)
	int32_t InterpolationPoints; // 0x68(0x04)
	char bAlwaysOn : 1; // 0x6c(0x01)
	char UnknownData_6C_1 : 7; // 0x6c(0x01)
	char UnknownData_6D[0x3]; // 0x6d(0x03)
	int32_t UpVectorStepSize; // 0x70(0x04)
	struct FName BranchParentName; // 0x74(0x08)
	char UnknownData_7C[0x4]; // 0x7c(0x04)
	struct FRawDistributionFloat Distance; // 0x80(0x38)
	char TaperMethod; // 0xb8(0x01)
	char UnknownData_B9[0x7]; // 0xb9(0x07)
	struct FRawDistributionFloat TaperFactor; // 0xc0(0x38)
	struct FRawDistributionFloat TaperScale; // 0xf8(0x38)
	char RenderGeometry : 1; // 0x130(0x01)
	char RenderDirectLine : 1; // 0x130(0x01)
	char RenderLines : 1; // 0x130(0x01)
	char RenderTessellation : 1; // 0x130(0x01)
	char UnknownData_130_4 : 4; // 0x130(0x01)
	char UnknownData_131[0x7]; // 0x131(0x07)
	struct TArray<struct UParticleModuleBeamSource*> LOD_BeamModule_Source; // 0x138(0x10)
	struct TArray<struct UParticleModuleBeamTarget*> LOD_BeamModule_Target; // 0x148(0x10)
	struct TArray<struct UParticleModuleBeamNoise*> LOD_BeamModule_Noise; // 0x158(0x10)
	struct TArray<struct UParticleModuleBeamModifier*> LOD_BeamModule_SourceModifier; // 0x168(0x10)
	struct TArray<struct UParticleModuleBeamModifier*> LOD_BeamModule_TargetModifier; // 0x178(0x10)
};

// Class Engine.ParticleModuleTypeDataGpu
// Size: 0xd80 (Inherited: 0x50)
struct UParticleModuleTypeDataGpu : UParticleModuleTypeDataBase {
	struct FGPUSpriteEmitterInfo EmitterInfo; // 0x50(0x2b0)
	struct FGPUSpriteResourceData ResourceData; // 0x300(0xa60)
	float CameraMotionBlurAmount; // 0xd60(0x04)
	char bClearExistingParticlesOnInit : 1; // 0xd64(0x01)
	char UnknownData_D64_1 : 7; // 0xd64(0x01)
	char UnknownData_D65[0x3]; // 0xd65(0x03)
	char AlphaCullingAggressiveness; // 0xd68(0x01)
	char UnknownData_D69[0x3]; // 0xd69(0x03)
	char bOverrideAlphaThreshold : 1; // 0xd6c(0x01)
	char UnknownData_D6C_1 : 7; // 0xd6c(0x01)
	char UnknownData_D6D[0x3]; // 0xd6d(0x03)
	float OverriddenAlphaThreshold; // 0xd70(0x04)
	char InteractionWithKillPlane; // 0xd74(0x01)
	char KillPlanePointLocation; // 0xd75(0x01)
	char UnknownData_D76[0x2]; // 0xd76(0x02)
	float FadingTimeWhenKilled; // 0xd78(0x04)
	char UnknownData_D7C[0x4]; // 0xd7c(0x04)
};

// Class Engine.ParticleModuleTypeDataMesh
// Size: 0xc0 (Inherited: 0x50)
struct UParticleModuleTypeDataMesh : UParticleModuleTypeDataBase {
	struct UStaticMesh* Mesh; // 0x50(0x08)
	char CastShadows : 1; // 0x58(0x01)
	char DoCollisions : 1; // 0x58(0x01)
	char UnknownData_58_2 : 6; // 0x58(0x01)
	char UnknownData_59[0x3]; // 0x59(0x03)
	char MeshAlignment; // 0x5c(0x01)
	char UnknownData_5D[0x3]; // 0x5d(0x03)
	char bOverrideMaterial : 1; // 0x60(0x01)
	char UnknownData_60_1 : 7; // 0x60(0x01)
	char UnknownData_61[0x3]; // 0x61(0x03)
	float Pitch; // 0x64(0x04)
	float Roll; // 0x68(0x04)
	float Yaw; // 0x6c(0x04)
	struct FRawDistributionVector RollPitchYawRange; // 0x70(0x38)
	char UnknownData_A8[0x8]; // 0xa8(0x08)
	char AxisLockOption; // 0xb0(0x01)
	char UnknownData_B1[0x3]; // 0xb1(0x03)
	char bCameraFacing : 1; // 0xb4(0x01)
	char UnknownData_B4_1 : 7; // 0xb4(0x01)
	char UnknownData_B5[0x3]; // 0xb5(0x03)
	char CameraFacingUpAxisOption; // 0xb8(0x01)
	char CameraFacingOption; // 0xb9(0x01)
	char UnknownData_BA[0x2]; // 0xba(0x02)
	char bApplyParticleRotationAsSpin : 1; // 0xbc(0x01)
	char bFaceCameraDirectionRatherThanPosition : 1; // 0xbc(0x01)
	char bFaceCameraOnlyOnSpawn : 1; // 0xbc(0x01)
	char bCollisionsConsiderPartilceSize : 1; // 0xbc(0x01)
	char UnknownData_BC_4 : 4; // 0xbc(0x01)
	char UnknownData_BD[0x3]; // 0xbd(0x03)
};

// Class Engine.ParticleModuleTypeDataRibbon
// Size: 0x80 (Inherited: 0x50)
struct UParticleModuleTypeDataRibbon : UParticleModuleTypeDataBase {
	int32_t MaxTessellationBetweenParticles; // 0x50(0x04)
	int32_t SheetsPerTrail; // 0x54(0x04)
	int32_t MaxTrailCount; // 0x58(0x04)
	int32_t MaxParticleInTrailCount; // 0x5c(0x04)
	char bDeadTrailsOnDeactivate : 1; // 0x60(0x01)
	char bDeadTrailsOnSourceLoss : 1; // 0x60(0x01)
	char bClipSourceSegement : 1; // 0x60(0x01)
	char bEnablePreviousTangentRecalculation : 1; // 0x60(0x01)
	char bTangentRecalculationEveryFrame : 1; // 0x60(0x01)
	char bSpawnInitialParticle : 1; // 0x60(0x01)
	char UnknownData_60_6 : 2; // 0x60(0x01)
	char UnknownData_61[0x3]; // 0x61(0x03)
	char RenderAxis; // 0x64(0x01)
	char UnknownData_65[0x3]; // 0x65(0x03)
	float TangentSpawningScalar; // 0x68(0x04)
	char bRenderGeometry : 1; // 0x6c(0x01)
	char bRenderSpawnPoints : 1; // 0x6c(0x01)
	char bRenderTangents : 1; // 0x6c(0x01)
	char bRenderTessellation : 1; // 0x6c(0x01)
	char UnknownData_6C_4 : 4; // 0x6c(0x01)
	char UnknownData_6D[0x3]; // 0x6d(0x03)
	float TilingDistance; // 0x70(0x04)
	float DistanceTessellationStepSize; // 0x74(0x04)
	char bEnableTangentDiffInterpScale : 1; // 0x78(0x01)
	char UnknownData_78_1 : 7; // 0x78(0x01)
	char UnknownData_79[0x3]; // 0x79(0x03)
	float TangentTessellationScalar; // 0x7c(0x04)
};

// Class Engine.ParticleModuleVectorFieldBase
// Size: 0x50 (Inherited: 0x50)
struct UParticleModuleVectorFieldBase : UParticleModule {
};

// Class Engine.ParticleModuleVectorFieldGlobal
// Size: 0x60 (Inherited: 0x50)
struct UParticleModuleVectorFieldGlobal : UParticleModuleVectorFieldBase {
	char bOverrideGlobalVectorFieldTightness : 1; // 0x50(0x01)
	char UnknownData_50_1 : 7; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	float GlobalVectorFieldScale; // 0x54(0x04)
	float GlobalVectorFieldTightness; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.ParticleModuleVectorFieldLocal
// Size: 0x88 (Inherited: 0x50)
struct UParticleModuleVectorFieldLocal : UParticleModuleVectorFieldBase {
	struct UVectorField* VectorField; // 0x50(0x08)
	struct FVector RelativeTranslation; // 0x58(0x0c)
	struct FRotator RelativeRotation; // 0x64(0x0c)
	struct FVector RelativeScale3D; // 0x70(0x0c)
	float Intensity; // 0x7c(0x04)
	float Tightness; // 0x80(0x04)
	char bIgnoreComponentTransform : 1; // 0x84(0x01)
	char bTileX : 1; // 0x84(0x01)
	char bTileY : 1; // 0x84(0x01)
	char bTileZ : 1; // 0x84(0x01)
	char UnknownData_84_4 : 4; // 0x84(0x01)
	char UnknownData_85[0x3]; // 0x85(0x03)
};

// Class Engine.ParticleModuleVectorFieldRotation
// Size: 0x68 (Inherited: 0x50)
struct UParticleModuleVectorFieldRotation : UParticleModuleVectorFieldBase {
	struct FVector MinInitialRotation; // 0x50(0x0c)
	struct FVector MaxInitialRotation; // 0x5c(0x0c)
};

// Class Engine.ParticleModuleVectorFieldRotationRate
// Size: 0x60 (Inherited: 0x50)
struct UParticleModuleVectorFieldRotationRate : UParticleModuleVectorFieldBase {
	struct FVector RotationRate; // 0x50(0x0c)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.ParticleModuleVectorFieldScale
// Size: 0x58 (Inherited: 0x50)
struct UParticleModuleVectorFieldScale : UParticleModuleVectorFieldBase {
	struct UDistributionFloat* VectorFieldScale; // 0x50(0x08)
};

// Class Engine.ParticleModuleVectorFieldScaleOverLife
// Size: 0x58 (Inherited: 0x50)
struct UParticleModuleVectorFieldScaleOverLife : UParticleModuleVectorFieldBase {
	struct UDistributionFloat* VectorFieldScaleOverLife; // 0x50(0x08)
};

// Class Engine.ParticleModuleVelocityBase
// Size: 0x58 (Inherited: 0x50)
struct UParticleModuleVelocityBase : UParticleModule {
	char bInWorldSpace : 1; // 0x50(0x01)
	char bApplyOwnerScale : 1; // 0x50(0x01)
	char UnknownData_50_2 : 6; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
};

// Class Engine.ParticleModuleEmitterPointVelocity
// Size: 0x90 (Inherited: 0x58)
struct UParticleModuleEmitterPointVelocity : UParticleModuleVelocityBase {
	struct FRawDistributionFloat VelocityScale; // 0x58(0x38)
};

// Class Engine.ParticleModuleVelocity
// Size: 0x1e8 (Inherited: 0x58)
struct UParticleModuleVelocity : UParticleModuleVelocityBase {
	char bUseGroupAForAll : 1; // 0x58(0x01)
	char UnknownData_58_1 : 7; // 0x58(0x01)
	char UnknownData_59[0x7]; // 0x59(0x07)
	struct FRawDistributionVector StartVelocity; // 0x60(0x38)
	struct FRawDistributionVector AdditionalStartVelocities[0x05]; // 0x98(0x118)
	struct FRawDistributionFloat StartVelocityRadial; // 0x1b0(0x38)
};

// Class Engine.ParticleModuleVelocity_Seeded
// Size: 0x208 (Inherited: 0x1e8)
struct UParticleModuleVelocity_Seeded : UParticleModuleVelocity {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x1e8(0x20)
};

// Class Engine.ParticleModuleVelocityCone
// Size: 0x388 (Inherited: 0x58)
struct UParticleModuleVelocityCone : UParticleModuleVelocityBase {
	struct FRawDistributionFloat Angle; // 0x58(0x38)
	struct FRawDistributionFloat Velocity; // 0x90(0x38)
	struct FVector Direction; // 0xc8(0x0c)
	char bUseGroupAForAll : 1; // 0xd4(0x01)
	char UnknownData_D4_1 : 7; // 0xd4(0x01)
	char UnknownData_D5[0x3]; // 0xd5(0x03)
	struct FVelocityConeGroupParams AdditionalParams[0x05]; // 0xd8(0x280)
	uint32_t VelocityDistributeOverNPoints; // 0x358(0x04)
	float VelocityNPointsRandomness; // 0x35c(0x04)
	struct FVector AdditiveVelocity; // 0x360(0x0c)
	float ConeDepthScale; // 0x36c(0x04)
	char WorldSpaceOffset : 1; // 0x370(0x01)
	char UnknownData_370_1 : 7; // 0x370(0x01)
	char UnknownData_371[0x3]; // 0x371(0x03)
	struct FVector EmitterOriginOffset; // 0x374(0x0c)
	float PushAwayFromCenterFactor; // 0x380(0x04)
	char UnknownData_384[0x4]; // 0x384(0x04)
};

// Class Engine.ParticleModuleVelocityConeEmitterPoint
// Size: 0xe0 (Inherited: 0x58)
struct UParticleModuleVelocityConeEmitterPoint : UParticleModuleVelocityBase {
	struct FRawDistributionFloat Angle; // 0x58(0x38)
	struct FRawDistributionFloat VelocityScale; // 0x90(0x38)
	uint32_t VelocityDistributeOverNPoints; // 0xc8(0x04)
	float VelocityNPointsRandomness; // 0xcc(0x04)
	struct FVector AdditiveVelocity; // 0xd0(0x0c)
	char UnknownData_DC[0x4]; // 0xdc(0x04)
};

// Class Engine.ParticleModuleVelocityInheritParent
// Size: 0xd0 (Inherited: 0x58)
struct UParticleModuleVelocityInheritParent : UParticleModuleVelocityBase {
	struct FRawDistributionVector Scale; // 0x58(0x38)
	struct FRawDistributionVector CustomParentScale; // 0x90(0x38)
	char ScalesRespectEmitterRotation : 1; // 0xc8(0x01)
	char UseCustomLocalSpace : 1; // 0xc8(0x01)
	char UnknownData_C8_2 : 6; // 0xc8(0x01)
	char UnknownData_C9[0x3]; // 0xc9(0x03)
	float SpeedCap; // 0xcc(0x04)
};

// Class Engine.ParticleModuleVelocityOverLifetime
// Size: 0x98 (Inherited: 0x58)
struct UParticleModuleVelocityOverLifetime : UParticleModuleVelocityBase {
	struct FRawDistributionVector VelOverLife; // 0x58(0x38)
	char Absolute : 1; // 0x90(0x01)
	char UnknownData_90_1 : 7; // 0x90(0x01)
	char UnknownData_91[0x7]; // 0x91(0x07)
};

// Class Engine.ParticleModuleWindBase
// Size: 0x50 (Inherited: 0x50)
struct UParticleModuleWindBase : UParticleModule {
};

// Class Engine.ParticleModuleWindInfluence
// Size: 0xc8 (Inherited: 0x50)
struct UParticleModuleWindInfluence : UParticleModuleWindBase {
	float WindSpeedCap; // 0x50(0x04)
	float RandomFactorForWindDirection; // 0x54(0x04)
	struct FRawDistributionFloat InfluenceOnAcceleration; // 0x58(0x38)
	struct FRawDistributionFloat InfluenceOnVelocity; // 0x90(0x38)
};

// Class Engine.ParticleModuleEventSendToGame
// Size: 0x28 (Inherited: 0x28)
struct UParticleModuleEventSendToGame : UObject {
};

// Class Engine.ParticleSystemReplay
// Size: 0x40 (Inherited: 0x28)
struct UParticleSystemReplay : UObject {
	int32_t ClipIDNumber; // 0x28(0x04)
	char UnknownData_2C[0x14]; // 0x2c(0x14)
};

// Class Engine.DemoPendingNetGame
// Size: 0x100 (Inherited: 0x100)
struct UDemoPendingNetGame : UPendingNetGame {
};

// Class Engine.PhysicalMaterial
// Size: 0x70 (Inherited: 0x28)
struct UPhysicalMaterial : UObject {
	float Friction; // 0x28(0x04)
	char FrictionCombineMode; // 0x2c(0x01)
	bool bOverrideFrictionCombineMode; // 0x2d(0x01)
	char UnknownData_2E[0x2]; // 0x2e(0x02)
	float Restitution; // 0x30(0x04)
	char RestitutionCombineMode; // 0x34(0x01)
	bool bOverrideRestitutionCombineMode; // 0x35(0x01)
	char UnknownData_36[0x2]; // 0x36(0x02)
	float Density; // 0x38(0x04)
	float RaiseMassToPower; // 0x3c(0x04)
	float DestructibleDamageThresholdScale; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
	struct UPhysicalMaterialPropertyBase* PhysicalMaterialProperty; // 0x48(0x08)
	char SurfaceType; // 0x50(0x01)
	char UnknownData_51[0x1f]; // 0x51(0x1f)
};

// Class Engine.PhysicalMaterialPropertyBase
// Size: 0x28 (Inherited: 0x28)
struct UPhysicalMaterialPropertyBase : UObject {
};

// Class Engine.PhysicsAsset
// Size: 0xf8 (Inherited: 0x28)
struct UPhysicsAsset : UObject {
	struct TArray<struct UBodySetup*> BodySetup; // 0x28(0x10)
	struct TArray<int32_t> BoundsBodies; // 0x38(0x10)
	struct TArray<struct UPhysicsConstraintTemplate*> ConstraintSetup; // 0x48(0x10)
	char UnknownData_58[0xa0]; // 0x58(0xa0)
};

// Class Engine.PhysicsCollisionHandler
// Size: 0x40 (Inherited: 0x28)
struct UPhysicsCollisionHandler : UObject {
	float ImpactThreshold; // 0x28(0x04)
	float ImpactReFireDelay; // 0x2c(0x04)
	struct USoundBase* DefaultImpactSound; // 0x30(0x08)
	float LastImpactSoundTime; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.PhysicsConstraintTemplate
// Size: 0x240 (Inherited: 0x28)
struct UPhysicsConstraintTemplate : UObject {
	struct FName JointName; // 0x28(0x08)
	struct FName ConstraintBone1; // 0x30(0x08)
	struct FName ConstraintBone2; // 0x38(0x08)
	struct FVector Pos1; // 0x40(0x0c)
	struct FVector PriAxis1; // 0x4c(0x0c)
	struct FVector SecAxis1; // 0x58(0x0c)
	struct FVector Pos2; // 0x64(0x0c)
	struct FVector PriAxis2; // 0x70(0x0c)
	struct FVector SecAxis2; // 0x7c(0x0c)
	char bEnableProjection : 1; // 0x88(0x01)
	char UnknownData_88_1 : 7; // 0x88(0x01)
	char UnknownData_89[0x3]; // 0x89(0x03)
	float ProjectionLinearTolerance; // 0x8c(0x04)
	float ProjectionAngularTolerance; // 0x90(0x04)
	char LinearXMotion; // 0x94(0x01)
	char LinearYMotion; // 0x95(0x01)
	char LinearZMotion; // 0x96(0x01)
	char UnknownData_97[0x1]; // 0x97(0x01)
	float LinearLimitSize; // 0x98(0x04)
	char bLinearLimitSoft : 1; // 0x9c(0x01)
	char UnknownData_9C_1 : 7; // 0x9c(0x01)
	char UnknownData_9D[0x3]; // 0x9d(0x03)
	float LinearLimitStiffness; // 0xa0(0x04)
	float LinearLimitDamping; // 0xa4(0x04)
	char bLinearBreakable : 1; // 0xa8(0x01)
	char UnknownData_A8_1 : 7; // 0xa8(0x01)
	char UnknownData_A9[0x3]; // 0xa9(0x03)
	float LinearBreakThreshold; // 0xac(0x04)
	char AngularSwing1Motion; // 0xb0(0x01)
	char AngularSwing2Motion; // 0xb1(0x01)
	char AngularTwistMotion; // 0xb2(0x01)
	char UnknownData_B3[0x1]; // 0xb3(0x01)
	char bSwingLimitSoft : 1; // 0xb4(0x01)
	char bTwistLimitSoft : 1; // 0xb4(0x01)
	char UnknownData_B4_2 : 6; // 0xb4(0x01)
	char UnknownData_B5[0x3]; // 0xb5(0x03)
	float Swing1LimitAngle; // 0xb8(0x04)
	float Swing2LimitAngle; // 0xbc(0x04)
	float TwistLimitAngle; // 0xc0(0x04)
	float SwingLimitStiffness; // 0xc4(0x04)
	float SwingLimitDamping; // 0xc8(0x04)
	float TwistLimitStiffness; // 0xcc(0x04)
	float TwistLimitDamping; // 0xd0(0x04)
	char bAngularBreakable : 1; // 0xd4(0x01)
	char UnknownData_D4_1 : 7; // 0xd4(0x01)
	char UnknownData_D5[0x3]; // 0xd5(0x03)
	float AngularBreakThreshold; // 0xd8(0x04)
	char UnknownData_DC[0x4]; // 0xdc(0x04)
	struct FConstraintInstance DefaultInstance; // 0xe0(0x160)
};

// Class Engine.PhysicsSerializer
// Size: 0xd0 (Inherited: 0x28)
struct UPhysicsSerializer : UObject {
	char UnknownData_28[0xa8]; // 0x28(0xa8)
};

// Class Engine.PlatformInterfaceBase
// Size: 0x38 (Inherited: 0x28)
struct UPlatformInterfaceBase : UObject {
	struct TArray<struct FDelegateArray> AllDelegates; // 0x28(0x10)
};

// Class Engine.CloudStorageBase
// Size: 0x50 (Inherited: 0x38)
struct UCloudStorageBase : UPlatformInterfaceBase {
	struct TArray<struct FString> LocalCloudFiles; // 0x38(0x10)
	char bSuppressDelegateCalls : 1; // 0x48(0x01)
	char UnknownData_48_1 : 7; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// Class Engine.InGameAdManager
// Size: 0x60 (Inherited: 0x38)
struct UInGameAdManager : UPlatformInterfaceBase {
	char bShouldPauseWhileAdOpen : 1; // 0x38(0x01)
	char UnknownData_38_1 : 7; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
	struct TArray<DelegateProperty> ClickedBannerDelegates; // 0x40(0x10)
	struct TArray<DelegateProperty> ClosedAdDelegates; // 0x50(0x10)
};

// Class Engine.MicroTransactionBase
// Size: 0x68 (Inherited: 0x38)
struct UMicroTransactionBase : UPlatformInterfaceBase {
	struct TArray<struct FPurchaseInfo> AvailableProducts; // 0x38(0x10)
	struct FString LastError; // 0x48(0x10)
	struct FString LastErrorSolution; // 0x58(0x10)
};

// Class Engine.TwitterIntegrationBase
// Size: 0x38 (Inherited: 0x38)
struct UTwitterIntegrationBase : UPlatformInterfaceBase {

	bool TwitterRequest(struct FString URL, struct TArray<struct FString> ParamKeysAndValues, char RequestMethod, int32_t AccountIndex); // Function Engine.TwitterIntegrationBase.TwitterRequest // Native|Public|HasOutParms // @ game+0x31aa620
	bool ShowTweetUI(struct FString InitialMessage, struct FString URL, struct FString Picture); // Function Engine.TwitterIntegrationBase.ShowTweetUI // Native|Public // @ game+0x31aa4b0
	void Init(); // Function Engine.TwitterIntegrationBase.Init // Native|Public // @ game+0x31aa2a0
	int32_t GetNumAccounts(); // Function Engine.TwitterIntegrationBase.GetNumAccounts // Native|Public // @ game+0x31aa170
	struct FString GetAccountName(int32_t AccountIndex); // Function Engine.TwitterIntegrationBase.GetAccountName // Native|Public // @ game+0x31a9e10
	bool CanShowTweetUI(); // Function Engine.TwitterIntegrationBase.CanShowTweetUI // Native|Public // @ game+0x31a9dc0
	bool AuthorizeAccounts(); // Function Engine.TwitterIntegrationBase.AuthorizeAccounts // Native|Public // @ game+0x31a9d90
};

// Class Engine.PlatformInterfaceWebResponse
// Size: 0xb0 (Inherited: 0x28)
struct UPlatformInterfaceWebResponse : UObject {
	struct FString OriginalURL; // 0x28(0x10)
	int32_t ResponseCode; // 0x38(0x04)
	int32_t Tag; // 0x3c(0x04)
	struct FString StringResponse; // 0x40(0x10)
	struct TArray<char> BinaryResponse; // 0x50(0x10)
	char UnknownData_60[0x50]; // 0x60(0x50)

	int32_t GetNumHeaders(); // Function Engine.PlatformInterfaceWebResponse.GetNumHeaders // Native|Public // @ game+0x31aa1a0
	struct FString GetHeaderValue(struct FString HeaderName); // Function Engine.PlatformInterfaceWebResponse.GetHeaderValue // Native|Public // @ game+0x31aa070
	void GetHeader(int32_t HeaderIndex, struct FString Header, struct FString Value); // Function Engine.PlatformInterfaceWebResponse.GetHeader // Native|Public|HasOutParms // @ game+0x31a9f00
};

// Class Engine.LocalPlayer
// Size: 0x210 (Inherited: 0x48)
struct ULocalPlayer : UPlayer {
	char UnknownData_48[0x18]; // 0x48(0x18)
	struct UGameViewportClient* ViewportClient; // 0x60(0x08)
	char UnknownData_68[0x40]; // 0x68(0x40)
	char AspectRatioAxisConstraint; // 0xa8(0x01)
	char UnknownData_A9[0x7]; // 0xa9(0x07)
	struct UClass* PendingLevelPlayerControllerClass; // 0xb0(0x08)
	char bSentSplitJoin : 1; // 0xb8(0x01)
	char UnknownData_B8_1 : 7; // 0xb8(0x01)
	char UnknownData_B9[0x3]; // 0xb9(0x03)
	float MinimumAspectRatio; // 0xbc(0x04)
	char UnknownData_C0[0x150]; // 0xc0(0x150)
};

// Class Engine.ChildConnection
// Size: 0x345a8 (Inherited: 0x345a0)
struct UChildConnection : UNetConnection {
	struct UNetConnection* Parent; // 0x345a0(0x08)
};

// Class Engine.DemoNetConnection
// Size: 0x345b0 (Inherited: 0x345a0)
struct UDemoNetConnection : UNetConnection {
	char UnknownData_345A0[0x10]; // 0x345a0(0x10)
};

// Class Engine.Polys
// Size: 0x38 (Inherited: 0x28)
struct UPolys : UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
};

// Class Engine.ReporterBase
// Size: 0x30 (Inherited: 0x28)
struct UReporterBase : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class Engine.ReporterGraph
// Size: 0xa8 (Inherited: 0x30)
struct UReporterGraph : UReporterBase {
	char UnknownData_30[0x78]; // 0x30(0x78)
};

// Class Engine.ReverbEffect
// Size: 0x58 (Inherited: 0x28)
struct UReverbEffect : UObject {
	float Density; // 0x28(0x04)
	float Diffusion; // 0x2c(0x04)
	float Gain; // 0x30(0x04)
	float GainHF; // 0x34(0x04)
	float DecayTime; // 0x38(0x04)
	float DecayHFRatio; // 0x3c(0x04)
	float ReflectionsGain; // 0x40(0x04)
	float ReflectionsDelay; // 0x44(0x04)
	float LateGain; // 0x48(0x04)
	float LateDelay; // 0x4c(0x04)
	float AirAbsorptionGainHF; // 0x50(0x04)
	float RoomRolloffFactor; // 0x54(0x04)
};

// Class Engine.Rig
// Size: 0x48 (Inherited: 0x28)
struct URig : UObject {
	struct TArray<struct FTransformBase> TransformBases; // 0x28(0x10)
	struct TArray<struct FNode> Nodes; // 0x38(0x10)
};

// Class Engine.SaveGame
// Size: 0x28 (Inherited: 0x28)
struct USaveGame : UObject {
};

// Class Engine.SimpleConstructionScript
// Size: 0x40 (Inherited: 0x28)
struct USimpleConstructionScript : UObject {
	struct TArray<struct USCS_Node*> RootNodes; // 0x28(0x10)
	struct USCS_Node* DefaultSceneRootNode; // 0x38(0x08)
};

// Class Engine.SCS_Node
// Size: 0x88 (Inherited: 0x28)
struct USCS_Node : UObject {
	struct UActorComponent* ComponentTemplate; // 0x28(0x08)
	struct FName VariableName; // 0x30(0x08)
	struct FName AttachToName; // 0x38(0x08)
	struct FName ParentComponentOrVariableName; // 0x40(0x08)
	struct FName ParentComponentOwnerClassName; // 0x48(0x08)
	bool bIsParentComponentNative; // 0x50(0x01)
	bool ServerMigrationFlagSet; // 0x51(0x01)
	char UnknownData_52[0x6]; // 0x52(0x06)
	struct TArray<struct USCS_Node*> ChildNodes; // 0x58(0x10)
	struct TArray<struct FBPVariableMetaDataEntry> MetaDataArray; // 0x68(0x10)
	struct FGuid VariableGuid; // 0x78(0x10)
};

// Class Engine.Selection
// Size: 0x58 (Inherited: 0x28)
struct USelection : UObject {
	char UnknownData_28[0x30]; // 0x28(0x30)
};

// Class Engine.DestructibleMesh
// Size: 0x2d0 (Inherited: 0x238)
struct UDestructibleMesh : USkeletalMesh {
	struct FDestructibleParameters DefaultDestructibleParameters; // 0x238(0x88)
	struct TArray<struct FFractureEffect> FractureEffects; // 0x2c0(0x10)
};

// Class Engine.SkeletalMeshSocket
// Size: 0x60 (Inherited: 0x28)
struct USkeletalMeshSocket : UObject {
	struct FName SocketName; // 0x28(0x08)
	struct FName BoneName; // 0x30(0x08)
	struct FVector RelativeLocation; // 0x38(0x0c)
	struct FRotator RelativeRotation; // 0x44(0x0c)
	struct FVector RelativeScale; // 0x50(0x0c)
	bool bForceAlwaysAnimated; // 0x5c(0x01)
	char UnknownData_5D[0x3]; // 0x5d(0x03)

	void InitializeSocketFromLocation(struct USkeletalMeshComponent* SkelComp, struct FVector WorldLocation, struct FVector WorldNormal); // Function Engine.SkeletalMeshSocket.InitializeSocketFromLocation // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x31aa2c0
	struct FVector GetSocketLocation(struct USkeletalMeshComponent* SkelComp); // Function Engine.SkeletalMeshSocket.GetSocketLocation // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x31aa1d0
};

// Class Engine.SlateBrushAsset
// Size: 0xb8 (Inherited: 0x28)
struct USlateBrushAsset : UObject {
	struct FSlateBrush Brush; // 0x28(0x90)
};

// Class Engine.SoundBase
// Size: 0x50 (Inherited: 0x28)
struct USoundBase : UObject {
	struct USoundClass* SoundClassObject; // 0x28(0x08)
	char bDebug : 1; // 0x30(0x01)
	char UnknownData_30_1 : 7; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	char MaxConcurrentResolutionRule; // 0x34(0x01)
	char UnknownData_35[0x3]; // 0x35(0x03)
	int32_t MaxConcurrentPlayCount; // 0x38(0x04)
	float Duration; // 0x3c(0x04)
	struct USoundAttenuation* AttenuationSettings; // 0x40(0x08)
	char UnknownData_48[0x8]; // 0x48(0x08)
};

// Class Engine.DialogueSoundWaveProxy
// Size: 0x68 (Inherited: 0x50)
struct UDialogueSoundWaveProxy : USoundBase {
	char UnknownData_50[0x18]; // 0x50(0x18)
};

// Class Engine.SoundCue
// Size: 0x130 (Inherited: 0x50)
struct USoundCue : USoundBase {
	char bOverrideAttenuation : 1; // 0x50(0x01)
	char UnknownData_50_1 : 7; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
	struct USoundNode* FirstNode; // 0x58(0x08)
	float VolumeMultiplier; // 0x60(0x04)
	float PitchMultiplier; // 0x64(0x04)
	struct FAttenuationSettings AttenuationOverrides; // 0x68(0xc0)
	char UnknownData_128[0x8]; // 0x128(0x08)
};

// Class Engine.SoundGroups
// Size: 0x88 (Inherited: 0x28)
struct USoundGroups : UObject {
	struct TArray<struct FSoundGroup> SoundGroupProfiles; // 0x28(0x10)
	char UnknownData_38[0x50]; // 0x38(0x50)
};

// Class Engine.SoundWave
// Size: 0x218 (Inherited: 0x50)
struct USoundWave : USoundBase {
	int32_t CompressionQuality; // 0x50(0x04)
	char bLooping : 1; // 0x54(0x01)
	char bStreaming : 1; // 0x54(0x01)
	char UnknownData_54_2 : 6; // 0x54(0x01)
	char UnknownData_55[0x3]; // 0x55(0x03)
	int32_t StreamingPriority; // 0x58(0x04)
	char UnknownData_5C_0 : 3; // 0x5c(0x01)
	char bMature : 1; // 0x5c(0x01)
	char bManualWordWrap : 1; // 0x5c(0x01)
	char bSingleLine : 1; // 0x5c(0x01)
	char UnknownData_5C_6 : 2; // 0x5c(0x01)
	char UnknownData_5D[0x3]; // 0x5d(0x03)
	char SoundGroup; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
	struct FString SpokenText; // 0x68(0x10)
	float Volume; // 0x78(0x04)
	float Pitch; // 0x7c(0x04)
	int32_t NumChannels; // 0x80(0x04)
	int32_t SampleRate; // 0x84(0x04)
	int32_t RawPCMDataSize; // 0x88(0x04)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
	struct TArray<struct FSubtitleCue> Subtitles; // 0x90(0x10)
	struct TArray<struct FLocalizedSubtitle> LocalizedSubtitles; // 0xa0(0x10)
	char UnknownData_B0[0x168]; // 0xb0(0x168)
};

// Class Engine.SoundWaveProcedural
// Size: 0x230 (Inherited: 0x218)
struct USoundWaveProcedural : USoundWave {
	char UnknownData_218[0x18]; // 0x218(0x18)
};

// Class Engine.SoundClass
// Size: 0x78 (Inherited: 0x28)
struct USoundClass : UObject {
	struct FSoundClassProperties Properties; // 0x28(0x24)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct USoundClass*> ChildClasses; // 0x50(0x10)
	struct TArray<struct FPassiveSoundMixModifier> PassiveSoundMixModifiers; // 0x60(0x10)
	struct USoundClass* ParentClass; // 0x70(0x08)
};

// Class Engine.SoundMix
// Size: 0x78 (Inherited: 0x28)
struct USoundMix : UObject {
	char bApplyEQ : 1; // 0x28(0x01)
	char UnknownData_28_1 : 7; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	float EQPriority; // 0x2c(0x04)
	struct FAudioEQEffect EQSettings; // 0x30(0x28)
	struct TArray<struct FSoundClassAdjuster> SoundClassEffects; // 0x58(0x10)
	float InitialDelay; // 0x68(0x04)
	float FadeInTime; // 0x6c(0x04)
	float Duration; // 0x70(0x04)
	float FadeOutTime; // 0x74(0x04)
};

// Class Engine.SoundNode
// Size: 0x38 (Inherited: 0x28)
struct USoundNode : UObject {
	struct TArray<struct USoundNode*> ChildNodes; // 0x28(0x10)
};

// Class Engine.SoundNodeAssetReferencer
// Size: 0x38 (Inherited: 0x38)
struct USoundNodeAssetReferencer : USoundNode {
};

// Class Engine.SoundNodeWavePlayer
// Size: 0x68 (Inherited: 0x38)
struct USoundNodeWavePlayer : USoundNodeAssetReferencer {
	struct USoundWave* SoundWaveAssetPtr; // 0x38(0x20)
	struct USoundWave* SoundWave; // 0x58(0x08)
	char bLooping : 1; // 0x60(0x01)
	char UnknownData_60_1 : 7; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
};

// Class Engine.SoundNodeAttenuation
// Size: 0x108 (Inherited: 0x38)
struct USoundNodeAttenuation : USoundNode {
	struct USoundAttenuation* AttenuationSettings; // 0x38(0x08)
	struct FAttenuationSettings AttenuationOverrides; // 0x40(0xc0)
	char bOverrideAttenuation : 1; // 0x100(0x01)
	char UnknownData_100_1 : 7; // 0x100(0x01)
	char UnknownData_101[0x7]; // 0x101(0x07)
};

// Class Engine.SoundNodeBranch
// Size: 0x40 (Inherited: 0x38)
struct USoundNodeBranch : USoundNode {
	struct FName BoolParameterName; // 0x38(0x08)
};

// Class Engine.SoundNodeConcatenator
// Size: 0x48 (Inherited: 0x38)
struct USoundNodeConcatenator : USoundNode {
	struct TArray<float> InputVolume; // 0x38(0x10)
};

// Class Engine.SoundNodeDelay
// Size: 0x40 (Inherited: 0x38)
struct USoundNodeDelay : USoundNode {
	float DelayMin; // 0x38(0x04)
	float DelayMax; // 0x3c(0x04)
};

// Class Engine.SoundNodeDialoguePlayer
// Size: 0x60 (Inherited: 0x38)
struct USoundNodeDialoguePlayer : USoundNode {
	struct FDialogueWaveParameter DialogueWaveParameter; // 0x38(0x20)
	char bLooping : 1; // 0x58(0x01)
	char UnknownData_58_1 : 7; // 0x58(0x01)
	char UnknownData_59[0x7]; // 0x59(0x07)
};

// Class Engine.SoundNodeDistanceCrossFade
// Size: 0x48 (Inherited: 0x38)
struct USoundNodeDistanceCrossFade : USoundNode {
	struct TArray<struct FDistanceDatum> CrossFadeInput; // 0x38(0x10)
};

// Class Engine.SoundNodeParamCrossFade
// Size: 0x50 (Inherited: 0x48)
struct USoundNodeParamCrossFade : USoundNodeDistanceCrossFade {
	struct FName ParamName; // 0x48(0x08)
};

// Class Engine.SoundNodeDoppler
// Size: 0x40 (Inherited: 0x38)
struct USoundNodeDoppler : USoundNode {
	float DopplerIntensity; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.SoundNodeEnveloper
// Size: 0x170 (Inherited: 0x38)
struct USoundNodeEnveloper : USoundNode {
	float LoopStart; // 0x38(0x04)
	float LoopEnd; // 0x3c(0x04)
	float DurationAfterLoop; // 0x40(0x04)
	int32_t LoopCount; // 0x44(0x04)
	char bLoopIndefinitely : 1; // 0x48(0x01)
	char bLoop : 1; // 0x48(0x01)
	char UnknownData_48_2 : 6; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
	struct UDistributionFloatConstantCurve* VolumeInterpCurve; // 0x50(0x08)
	struct UDistributionFloatConstantCurve* PitchInterpCurve; // 0x58(0x08)
	struct FRuntimeFloatCurve VolumeCurve; // 0x60(0x80)
	struct FRuntimeFloatCurve PitchCurve; // 0xe0(0x80)
	float PitchMin; // 0x160(0x04)
	float PitchMax; // 0x164(0x04)
	float VolumeMin; // 0x168(0x04)
	float VolumeMax; // 0x16c(0x04)
};

// Class Engine.SoundNodeGroupControl
// Size: 0x48 (Inherited: 0x38)
struct USoundNodeGroupControl : USoundNode {
	struct TArray<int32_t> GroupSizes; // 0x38(0x10)
};

// Class Engine.SoundNodeLooping
// Size: 0x40 (Inherited: 0x38)
struct USoundNodeLooping : USoundNode {
	int32_t LoopCount; // 0x38(0x04)
	char bLoopIndefinitely : 1; // 0x3c(0x01)
	char UnknownData_3C_1 : 7; // 0x3c(0x01)
	char UnknownData_3D[0x3]; // 0x3d(0x03)
};

// Class Engine.SoundNodeMature
// Size: 0x38 (Inherited: 0x38)
struct USoundNodeMature : USoundNode {
};

// Class Engine.SoundNodeMixer
// Size: 0x48 (Inherited: 0x38)
struct USoundNodeMixer : USoundNode {
	struct TArray<float> InputVolume; // 0x38(0x10)
};

// Class Engine.SoundNodeModulator
// Size: 0x48 (Inherited: 0x38)
struct USoundNodeModulator : USoundNode {
	float PitchMin; // 0x38(0x04)
	float PitchMax; // 0x3c(0x04)
	float VolumeMin; // 0x40(0x04)
	float VolumeMax; // 0x44(0x04)
};

// Class Engine.SoundNodeModulatorContinuous
// Size: 0x78 (Inherited: 0x38)
struct USoundNodeModulatorContinuous : USoundNode {
	struct FModulatorContinuousParams PitchModulationParams; // 0x38(0x20)
	struct FModulatorContinuousParams VolumeModulationParams; // 0x58(0x20)
};

// Class Engine.SoundNodeOscillator
// Size: 0x60 (Inherited: 0x38)
struct USoundNodeOscillator : USoundNode {
	char bModulateVolume : 1; // 0x38(0x01)
	char bModulatePitch : 1; // 0x38(0x01)
	char UnknownData_38_2 : 6; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	float AmplitudeMin; // 0x3c(0x04)
	float AmplitudeMax; // 0x40(0x04)
	float FrequencyMin; // 0x44(0x04)
	float FrequencyMax; // 0x48(0x04)
	float OffsetMin; // 0x4c(0x04)
	float OffsetMax; // 0x50(0x04)
	float CenterMin; // 0x54(0x04)
	float CenterMax; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.SoundNodeQualityLevel
// Size: 0x38 (Inherited: 0x38)
struct USoundNodeQualityLevel : USoundNode {
};

// Class Engine.SoundNodeRandom
// Size: 0x68 (Inherited: 0x38)
struct USoundNodeRandom : USoundNode {
	struct TArray<float> Weights; // 0x38(0x10)
	int32_t PreselectAtLevelLoad; // 0x48(0x04)
	char bRandomizeWithoutReplacement : 1; // 0x4c(0x01)
	char UnknownData_4C_1 : 7; // 0x4c(0x01)
	char UnknownData_4D[0x3]; // 0x4d(0x03)
	struct TArray<bool> HasBeenUsed; // 0x50(0x10)
	int32_t NumRandomUsed; // 0x60(0x04)
	char UnknownData_64[0x4]; // 0x64(0x04)
};

// Class Engine.SoundNodeSoundClass
// Size: 0x40 (Inherited: 0x38)
struct USoundNodeSoundClass : USoundNode {
	struct USoundClass* SoundClassOverride; // 0x38(0x08)
};

// Class Engine.SoundNodeSwitch
// Size: 0x40 (Inherited: 0x38)
struct USoundNodeSwitch : USoundNode {
	struct FName IntParameterName; // 0x38(0x08)
};

// Class Engine.SoundNodeWaveParam
// Size: 0x40 (Inherited: 0x38)
struct USoundNodeWaveParam : USoundNode {
	struct FName WaveParameterName; // 0x38(0x08)
};

// Class Engine.StaticMeshSocket
// Size: 0x68 (Inherited: 0x28)
struct UStaticMeshSocket : UObject {
	struct FName SocketName; // 0x28(0x08)
	struct FVector RelativeLocation; // 0x30(0x0c)
	struct FRotator RelativeRotation; // 0x3c(0x0c)
	struct FVector RelativeScale; // 0x48(0x0c)
	char UnknownData_54[0x4]; // 0x54(0x04)
	struct FString Tag; // 0x58(0x10)
};

// Class Engine.SubsurfaceProfile
// Size: 0x50 (Inherited: 0x28)
struct USubsurfaceProfile : UObject {
	struct FSubsurfaceProfileStruct Settings; // 0x28(0x24)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.TestInterfaceAlternative
// Size: 0x28 (Inherited: 0x28)
struct UTestInterfaceAlternative : UInterface {
};

// Class Engine.TextPropertyTestObject
// Size: 0xd0 (Inherited: 0x28)
struct UTextPropertyTestObject : UObject {
	struct FText DefaultedText; // 0x28(0x38)
	struct FText UndefaultedText; // 0x60(0x38)
	struct FText TransientText; // 0x98(0x38)
};

// Class Engine.LightMapTexture2D
// Size: 0x198 (Inherited: 0x190)
struct ULightMapTexture2D : UTexture2D {
	char UnknownData_190[0x8]; // 0x190(0x08)
};

// Class Engine.ShadowMapTexture2D
// Size: 0x198 (Inherited: 0x190)
struct UShadowMapTexture2D : UTexture2D {
	char ShadowmapFlags; // 0x190(0x01)
	char UnknownData_191[0x7]; // 0x191(0x07)
};

// Class Engine.TextureLightProfile
// Size: 0x198 (Inherited: 0x190)
struct UTextureLightProfile : UTexture2D {
	float Brightness; // 0x190(0x04)
	float TextureMultiplier; // 0x194(0x04)
};

// Class Engine.Texture2DDynamic
// Size: 0x150 (Inherited: 0x138)
struct UTexture2DDynamic : UTexture {
	char UnknownData_138[0x8]; // 0x138(0x08)
	char Format; // 0x140(0x01)
	char UnknownData_141[0xf]; // 0x141(0x0f)
};

// Class Engine.TextureCube
// Size: 0x190 (Inherited: 0x138)
struct UTextureCube : UTexture {
	char UnknownData_138[0x58]; // 0x138(0x58)
};

// Class Engine.TextureRenderTargetCube
// Size: 0x160 (Inherited: 0x140)
struct UTextureRenderTargetCube : UTextureRenderTarget {
	int32_t SizeX; // 0x140(0x04)
	struct FLinearColor ClearColor; // 0x144(0x10)
	char OverrideFormat; // 0x154(0x01)
	char UnknownData_155[0x3]; // 0x155(0x03)
	char bHDR : 1; // 0x158(0x01)
	char bForceLinearGamma : 1; // 0x158(0x01)
	char UnknownData_158_2 : 6; // 0x158(0x01)
	char UnknownData_159[0x7]; // 0x159(0x07)
};

// Class Engine.ThumbnailInfo
// Size: 0x28 (Inherited: 0x28)
struct UThumbnailInfo : UObject {
};

// Class Engine.TimecodeProvider
// Size: 0x30 (Inherited: 0x28)
struct UTimecodeProvider : UObject {
	float FrameDelay; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)

	char GetSynchronizationState(); // Function Engine.TimecodeProvider.GetSynchronizationState // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x31aa270
	void FetchAndUpdate(); // Function Engine.TimecodeProvider.FetchAndUpdate // Native|Public|BlueprintCallable // @ game+0x31a9df0
};

// Class Engine.TimelineTemplate
// Size: 0x98 (Inherited: 0x28)
struct UTimelineTemplate : UObject {
	float TimelineLength; // 0x28(0x04)
	char LengthMode; // 0x2c(0x01)
	char UnknownData_2D[0x3]; // 0x2d(0x03)
	char bAutoPlay : 1; // 0x30(0x01)
	char bLoop : 1; // 0x30(0x01)
	char bReplicated : 1; // 0x30(0x01)
	char bValidatedAsWired : 1; // 0x30(0x01)
	char UnknownData_30_4 : 4; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct TArray<struct FTTEventTrack> EventTracks; // 0x38(0x10)
	struct TArray<struct FTTFloatTrack> FloatTracks; // 0x48(0x10)
	struct TArray<struct FTTVectorTrack> VectorTracks; // 0x58(0x10)
	struct TArray<struct FTTLinearColorTrack> LinearColorTracks; // 0x68(0x10)
	struct TArray<struct FBPVariableMetaDataEntry> MetaDataArray; // 0x78(0x10)
	struct FGuid TimelineGuid; // 0x88(0x10)
};

// Class Engine.TouchInterface
// Size: 0x58 (Inherited: 0x28)
struct UTouchInterface : UObject {
	struct TArray<struct FTouchInputControl> Controls; // 0x28(0x10)
	float ActiveOpacity; // 0x38(0x04)
	float InactiveOpacity; // 0x3c(0x04)
	float TimeUntilDeactive; // 0x40(0x04)
	float TimeUntilReset; // 0x44(0x04)
	float ActivationDelay; // 0x48(0x04)
	bool bPreventRecenter; // 0x4c(0x01)
	char UnknownData_4D[0x3]; // 0x4d(0x03)
	float StartupDelay; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
};

// Class Engine.UserDefinedEnum
// Size: 0x68 (Inherited: 0x58)
struct UUserDefinedEnum : UEnum {
	struct TArray<struct FText> DisplayNames; // 0x58(0x10)
};

// Class Engine.AnimDataEntryStruct
// Size: 0xa8 (Inherited: 0xa8)
struct UAnimDataEntryStruct : UUserDefinedStruct {
};

// Class Engine.VectorField
// Size: 0x48 (Inherited: 0x28)
struct UVectorField : UObject {
	struct FBox Bounds; // 0x28(0x1c)
	float Intensity; // 0x44(0x04)
};

// Class Engine.VectorFieldAnimated
// Size: 0x88 (Inherited: 0x48)
struct UVectorFieldAnimated : UVectorField {
	struct UTexture2D* Texture; // 0x48(0x08)
	char ConstructionOp; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	int32_t VolumeSizeX; // 0x54(0x04)
	int32_t VolumeSizeY; // 0x58(0x04)
	int32_t VolumeSizeZ; // 0x5c(0x04)
	int32_t SubImagesX; // 0x60(0x04)
	int32_t SubImagesY; // 0x64(0x04)
	int32_t FrameCount; // 0x68(0x04)
	float FramesPerSecond; // 0x6c(0x04)
	char bLoop : 1; // 0x70(0x01)
	char UnknownData_70_1 : 7; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
	struct UVectorFieldStatic* NoiseField; // 0x78(0x08)
	float NoiseScale; // 0x80(0x04)
	float NoiseMax; // 0x84(0x04)
};

// Class Engine.VectorFieldStatic
// Size: 0xd0 (Inherited: 0x48)
struct UVectorFieldStatic : UVectorField {
	int32_t SizeX; // 0x48(0x04)
	int32_t SizeY; // 0x4c(0x04)
	int32_t SizeZ; // 0x50(0x04)
	char UnknownData_54[0x7c]; // 0x54(0x7c)
};

// Class Engine.VertexAnimBase
// Size: 0x30 (Inherited: 0x28)
struct UVertexAnimBase : UObject {
	struct USkeletalMesh* BaseSkelMesh; // 0x28(0x08)
};

// Class Engine.MorphTarget
// Size: 0x40 (Inherited: 0x30)
struct UMorphTarget : UVertexAnimBase {
	char UnknownData_30[0x10]; // 0x30(0x10)
};

// Class Engine.VertexAnimation
// Size: 0x48 (Inherited: 0x30)
struct UVertexAnimation : UVertexAnimBase {
	int32_t NumAnimatedVerts; // 0x30(0x04)
	char UnknownData_34[0x14]; // 0x34(0x14)
};

// Class Engine.VisualLoggerAutomationTests
// Size: 0x28 (Inherited: 0x28)
struct UVisualLoggerAutomationTests : UObject {
};

