// Enum GameEventsOnDemandFramework.EGameEventCategory
enum class EGameEventCategory : uint8_t {
	MainEvent,
	SubEvent,
	EGameEventCategory_MAX,
};

// Enum GameEventsOnDemandFramework.EAvailabilityState
enum class EAvailabilityState : uint8_t {
	Inactive,
	Available_Active,
	Available_ActiveEngaged,
	Unavailable_CrewLimitReached,
	Unavailable_Cooldown,
	Unavailable_ProgressedPastLimit,
	Unavailable_Invalid,
	EAvailabilityState_MAX,
};

// ScriptStruct GameEventsOnDemandFramework.GameEventAvailabilityData
// Size: 0x30 (Inherited: 0x00)
struct FGameEventAvailabilityData {
	struct FString EventName; // 0x00(0x10)
	char EventCategory; // 0x10(0x01)
	char AvailabilityState; // 0x11(0x01)
	char UnknownData_12[0x6]; // 0x12(0x06)
	struct UClass* ShipSizeLimit; // 0x18(0x08)
	struct TArray<struct FGuid> ParticipatingCrewIds; // 0x20(0x10)
};

// ScriptStruct GameEventsOnDemandFramework.GameEventOnDemandCrewSentToSinkingTunnel
// Size: 0x10 (Inherited: 0x00)
struct FGameEventOnDemandCrewSentToSinkingTunnel {
	struct FGuid CrewId; // 0x00(0x10)
};

// ScriptStruct GameEventsOnDemandFramework.GameEventOnDemandDeactivated
// Size: 0x10 (Inherited: 0x00)
struct FGameEventOnDemandDeactivated {
	struct TArray<struct FGuid> OnDemandCrewIds; // 0x00(0x10)
};

// ScriptStruct GameEventsOnDemandFramework.GameEventOnDemandDeactivatedTelemetryEvent
// Size: 0x30 (Inherited: 0x00)
struct FGameEventOnDemandDeactivatedTelemetryEvent {
	struct FString ShipSizeLimit; // 0x00(0x10)
	struct TArray<struct FGuid> ParticipatingOnDemandCrews; // 0x10(0x10)
	struct TArray<struct FGuid> ParticipatingCrews; // 0x20(0x10)
};

// ScriptStruct GameEventsOnDemandFramework.GameEventOnDemandActivatedTelemetryEvent
// Size: 0x04 (Inherited: 0x00)
struct FGameEventOnDemandActivatedTelemetryEvent {
	int32_t NumCrewsOnDemandLimit; // 0x00(0x04)
};

// ScriptStruct GameEventsOnDemandFramework.GameEventOnDemandCrewCancelledVoyageTelemetryEvent
// Size: 0x01 (Inherited: 0x00)
struct FGameEventOnDemandCrewCancelledVoyageTelemetryEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct GameEventsOnDemandFramework.GameEventOnDemandCrewSinkingTelemetryEvent
// Size: 0x01 (Inherited: 0x00)
struct FGameEventOnDemandCrewSinkingTelemetryEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct GameEventsOnDemandFramework.GameEventOnDemandCrewScuttledTelemetryEvent
// Size: 0x01 (Inherited: 0x00)
struct FGameEventOnDemandCrewScuttledTelemetryEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct GameEventsOnDemandFramework.GameEventOnDemandCrewJoinedTelemetryEvent
// Size: 0x10 (Inherited: 0x00)
struct FGameEventOnDemandCrewJoinedTelemetryEvent {
	struct FString ShipType; // 0x00(0x10)
};

// ScriptStruct GameEventsOnDemandFramework.GameEventOnDemandBaseTelemetryFragmentInput
// Size: 0x20 (Inherited: 0x01)
struct FGameEventOnDemandBaseTelemetryFragmentInput : FTelemetryFragmentInput {
	struct FString GameEventType; // 0x00(0x10)
	struct FGuid GameEventOnDemandId; // 0x10(0x10)
};

// ScriptStruct GameEventsOnDemandFramework.GameEventOnDemandBaseTelemetryFragment
// Size: 0x20 (Inherited: 0x00)
struct FGameEventOnDemandBaseTelemetryFragment {
	struct FString GameEventType; // 0x00(0x10)
	struct FGuid GameEventOnDemandId; // 0x10(0x10)
};

// ScriptStruct GameEventsOnDemandFramework.SkellyFortGameEventOnDemandDeactivatedTelemetryEvent
// Size: 0x48 (Inherited: 0x30)
struct FSkellyFortGameEventOnDemandDeactivatedTelemetryEvent : FGameEventOnDemandDeactivatedTelemetryEvent {
	struct FName FortName; // 0x30(0x08)
	struct FGuid FortId; // 0x38(0x10)
};

// ScriptStruct GameEventsOnDemandFramework.SkellyFortGameEventOnDemandActivatedTelemetryEvent
// Size: 0x1c (Inherited: 0x04)
struct FSkellyFortGameEventOnDemandActivatedTelemetryEvent : FGameEventOnDemandActivatedTelemetryEvent {
	struct FName FortName; // 0x04(0x08)
	struct FGuid FortId; // 0x0c(0x10)
};

