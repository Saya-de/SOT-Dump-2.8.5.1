// Enum CompetitiveVoyages.ECompetitiveVoyagesMainVoyageState
enum class ECompetitiveVoyagesMainVoyageState : uint8_t {
	None,
	TreasureHunt,
	HandIn,
	Max,
	ECompetitiveVoyagesMainVoyageState_MAX,
};

// Enum CompetitiveVoyages.ECompetitiveVoyagesOptInState
enum class ECompetitiveVoyagesOptInState : uint8_t {
	None,
	StartingVoyage,
	LoadingVoyage,
	Waiting,
	OptedIn,
	OptedOut,
	OptedInAborted,
	VoyageCompleted,
	Max,
	ECompetitiveVoyagesOptInState_MAX,
};

// Enum CompetitiveVoyages.ECompetitiveVoyagesState
enum class ECompetitiveVoyagesState : uint8_t {
	None,
	Locked,
	Finished,
	Max,
	ECompetitiveVoyagesState_MAX,
};

// ScriptStruct CompetitiveVoyages.PhasedMarkerItem
// Size: 0x18 (Inherited: 0x00)
struct FPhasedMarkerItem {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

