// ScriptStruct GameEventsOnDemand.GameEventsOnDemandLoserTunnelCrewData
// Size: 0x20 (Inherited: 0x00)
struct FGameEventsOnDemandLoserTunnelCrewData {
	struct FGuid CrewId; // 0x00(0x10)
	struct UClass* GameEventType; // 0x10(0x08)
	char UnknownData_18[0x8]; // 0x18(0x08)
};

// ScriptStruct GameEventsOnDemand.GameEventAvailabilityTelemetryData
// Size: 0x18 (Inherited: 0x00)
struct FGameEventAvailabilityTelemetryData {
	struct FString EventName; // 0x00(0x10)
	char EventCategory; // 0x10(0x01)
	char AvailabilityState; // 0x11(0x01)
	char UnknownData_12[0x6]; // 0x12(0x06)
};

// ScriptStruct GameEventsOnDemand.ProcessGameEventOnDemandAvailabilityTelemetryEvent
// Size: 0x10 (Inherited: 0x00)
struct FProcessGameEventOnDemandAvailabilityTelemetryEvent {
	struct TArray<struct FGameEventAvailabilityTelemetryData> GameEventAvailabilityData; // 0x00(0x10)
};

// ScriptStruct GameEventsOnDemand.AdvertiseGameEventOnDemandAvailabilityTelemetryEvent
// Size: 0x20 (Inherited: 0x00)
struct FAdvertiseGameEventOnDemandAvailabilityTelemetryEvent {
	struct FGameEventAvailabilityModel GameEventAvailability; // 0x00(0x20)
};

