// ScriptStruct AdventureOnDemand.AdventureOnDemandServiceCrewEntry
// Size: 0x88 (Inherited: 0x00)
struct FAdventureOnDemandServiceCrewEntry {
	char UnknownData_0[0x40]; // 0x00(0x40)
	struct TArray<struct UCrewVoyageParticipant*> Participants; // 0x40(0x10)
	struct UTunnelDesc* TunnelDesc; // 0x50(0x08)
	char UnknownData_58[0x30]; // 0x58(0x30)
};

