// Enum Music.EAISpawnerMusicZoneState
enum class EAISpawnerMusicZoneState : uint8_t {
	Passive,
	InCombat,
	BattleWon,
	EAISpawnerMusicZoneState_MAX,
};

// ScriptStruct Music.MusicZoneRemoteValues
// Size: 0x20 (Inherited: 0x00)
struct FMusicZoneRemoteValues {
	struct TArray<struct FMusicZoneEmitterSwitch> Switches; // 0x00(0x10)
	struct TArray<struct FMusicZoneEmitterRTPC> RTPCs; // 0x10(0x10)
};

// ScriptStruct Music.MusicZoneEmitterRTPC
// Size: 0x0c (Inherited: 0x00)
struct FMusicZoneEmitterRTPC {
	struct FName RTPC; // 0x00(0x08)
	float Value; // 0x08(0x04)
};

// ScriptStruct Music.MusicZoneEmitterSwitch
// Size: 0x10 (Inherited: 0x00)
struct FMusicZoneEmitterSwitch {
	struct FName SwitchGroup; // 0x00(0x08)
	struct FName Value; // 0x08(0x08)
};

// ScriptStruct Music.MusicZoneDestroyedEvent
// Size: 0x10 (Inherited: 0x00)
struct FMusicZoneDestroyedEvent {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Music.MusicZoneSpawnedEvent
// Size: 0x10 (Inherited: 0x00)
struct FMusicZoneSpawnedEvent {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

