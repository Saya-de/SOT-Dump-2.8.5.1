// Class Music.EmitterManipulatorInterface
// Size: 0x28 (Inherited: 0x28)
struct UEmitterManipulatorInterface : UInterface {
};

// Class Music.MusicZoneInterface
// Size: 0x28 (Inherited: 0x28)
struct UMusicZoneInterface : UEmitterManipulatorInterface {

	bool CanPlayForPlayer(struct AActor* Player); // Function Music.MusicZoneInterface.CanPlayForPlayer // RequiredAPI|Native|Event|Public|BlueprintEvent|Const // @ game+0x3e4b350
};

// Class Music.MusicZoneComponent
// Size: 0x3d0 (Inherited: 0x2e0)
struct UMusicZoneComponent : USceneComponent {
	char UnknownData_2E0[0x8]; // 0x2e0(0x08)
	float InnerRadius; // 0x2e8(0x04)
	float OuterRadius; // 0x2ec(0x04)
	struct FName LocationRTPC; // 0x2f0(0x08)
	struct FName PlaybackPositionRTPC; // 0x2f8(0x08)
	bool LocalRTPC; // 0x300(0x01)
	char UnknownData_301[0x7]; // 0x301(0x07)
	struct UWwiseEvent* PlayEvent; // 0x308(0x08)
	struct UWwiseEvent* StopEvent; // 0x310(0x08)
	struct TArray<struct UWwiseEvent*> OneShotEvents; // 0x318(0x10)
	struct UWwiseObjectPoolWrapper* EmitterPool; // 0x328(0x08)
	bool DisableAfterPlayThrough; // 0x330(0x01)
	bool ActivateOnBeginPlay; // 0x331(0x01)
	char UnknownData_332[0x6]; // 0x332(0x06)
	struct FMulticastDelegate OnMusicZoneStarted; // 0x338(0x10)
	char UnknownData_348[0x28]; // 0x348(0x28)
	struct FMusicZoneRemoteValues EmitterRemoteValues; // 0x370(0x20)
	char UnknownData_390[0x40]; // 0x390(0x40)

	bool SetPlaybackPositionRtpc(float OutTimeInSeconds); // Function Music.MusicZoneComponent.SetPlaybackPositionRtpc // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x3e4b590
	void OnRep_EmitterRemoteValues(); // Function Music.MusicZoneComponent.OnRep_EmitterRemoteValues // Final|Native|Private // @ game+0x3e4b550
	struct FWwiseEmitter GetEmitter(); // Function Music.MusicZoneComponent.GetEmitter // Native|Public|BlueprintCallable // @ game+0x3e4b4d0
	void DisableZone(); // Function Music.MusicZoneComponent.DisableZone // Final|Native|Public|BlueprintCallable // @ game+0x3e4b4b0
	void Client_StopMusicAndDisableZone(); // Function Music.MusicZoneComponent.Client_StopMusicAndDisableZone // Net|NetReliableNative|Event|NetMulticast|Public // @ game+0x3e4b490
	void Client_PlayOneShot(int32_t Index); // Function Music.MusicZoneComponent.Client_PlayOneShot // Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable // @ game+0x3e4b410
	void Client_ActivateZone(); // Function Music.MusicZoneComponent.Client_ActivateZone // Net|NetReliableNative|Event|NetMulticast|Public // @ game+0x3e4b3f0
	void ActivateZone(); // Function Music.MusicZoneComponent.ActivateZone // Final|Native|Public|BlueprintCallable // @ game+0x3e4b330
};

// Class Music.AISpawnerMusicZoneComponent
// Size: 0x3f0 (Inherited: 0x3d0)
struct UAISpawnerMusicZoneComponent : UMusicZoneComponent {
	struct UWwiseEvent* BattleWonEvent; // 0x3c8(0x08)
	struct UAISpawner* AISpawner; // 0x3d0(0x08)
	struct TArray<struct APawn*> SpawnerPawns; // 0x3d8(0x10)
	char SpawnerState; // 0x3e8(0x01)

	void OnRep_SpawnerState(); // Function Music.AISpawnerMusicZoneComponent.OnRep_SpawnerState // Final|Native|Private // @ game+0x3e4b570
};

// Class Music.SynchedMusicZoneComponent
// Size: 0x400 (Inherited: 0x3d0)
struct USynchedMusicZoneComponent : UMusicZoneComponent {
	float StartDelayTime; // 0x3c8(0x04)
	int32_t PlayFromStartTimeMS; // 0x3cc(0x04)
	char UnknownData_3D8[0x28]; // 0x3d8(0x28)
};

// Class Music.MusicZoneServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UMusicZoneServiceInterface : UInterface {
};

// Class Music.MusicZoneService
// Size: 0x490 (Inherited: 0x3c8)
struct AMusicZoneService : AActor {
	char UnknownData_3C8[0xc8]; // 0x3c8(0xc8)
};

// Class Music.NetMusicZoneActor
// Size: 0x3d0 (Inherited: 0x3c8)
struct ANetMusicZoneActor : AActor {
	struct UMusicZoneComponent* MusicZone; // 0x3c8(0x08)
};

