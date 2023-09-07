// Class RareFileOpenLog.AggregateOpenOrderLogsCommandlet
// Size: 0x88 (Inherited: 0x80)
struct UAggregateOpenOrderLogsCommandlet : UCommandlet {
	char UnknownData_80[0x8]; // 0x80(0x08)
};

// Class RareFileOpenLog.RareFileOpenFileHandler
// Size: 0x208 (Inherited: 0x1c0)
struct URareFileOpenFileHandler : UClass {
	char UnknownData_1C0[0x48]; // 0x1c0(0x48)
};

// Class RareFileOpenLog.RareFileOpenOnDiskFileHandler
// Size: 0x208 (Inherited: 0x208)
struct URareFileOpenOnDiskFileHandler : URareFileOpenFileHandler {
};

// Class RareFileOpenLog.RareFileOpenLogSettings
// Size: 0x90 (Inherited: 0x38)
struct URareFileOpenLogSettings : UDeveloperSettings {
	int32_t DataSizeSaveIncrement; // 0x38(0x04)
	float TimeSaveIncrement; // 0x3c(0x04)
	char DataSource; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
	struct TArray<struct FString> SandboxesToEnableByDefault; // 0x48(0x10)
	struct FString OpenOrderLogDirectory; // 0x58(0x10)
	struct FString OutputOrderLogDirectory; // 0x68(0x10)
	int32_t NumberOfLogsToAggregate; // 0x78(0x04)
	char UnknownData_7C[0x14]; // 0x7c(0x14)
};

