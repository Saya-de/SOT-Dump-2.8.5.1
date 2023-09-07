// Class Time.TimeInterface
// Size: 0x28 (Inherited: 0x28)
struct UTimeInterface : UInterface {

	struct FGameTime GetTime(); // Function Time.TimeInterface.GetTime // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x36327a0
	struct FDateTime GetSmoothRealWorldTime(); // Function Time.TimeInterface.GetSmoothRealWorldTime // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x3632760
	struct FDateTime GetPreciseRealWorldTime(); // Function Time.TimeInterface.GetPreciseRealWorldTime // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x3632720
	struct FGameTime ConvertRealWorldTimeToGameWorldTime(struct FDateTime RealWorldTime); // Function Time.TimeInterface.ConvertRealWorldTimeToGameWorldTime // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x3632480
	struct FDateTime ConvertGameWorldTimeToRealWorldTime(struct FGameTime GameWorldTime); // Function Time.TimeInterface.ConvertGameWorldTimeToRealWorldTime // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x36323e0
};

// Class Time.CustomizableTimeInterface
// Size: 0x28 (Inherited: 0x28)
struct UCustomizableTimeInterface : UInterface {

	void SetTimeScalar(int32_t RequestedTimeScalar); // Function Time.CustomizableTimeInterface.SetTimeScalar // Native|Public|BlueprintCallable // @ game+0x36330d0
	void SetSunset(float SunsetHours); // Function Time.CustomizableTimeInterface.SetSunset // Native|Public|BlueprintCallable // @ game+0x3632fd0
	void SetSunrise(float SunriseHours); // Function Time.CustomizableTimeInterface.SetSunrise // Native|Public|BlueprintCallable // @ game+0x3632ed0
	void SetGameWorldTime(struct FGameTime RequestedTime); // Function Time.CustomizableTimeInterface.SetGameWorldTime // Native|Public|HasOutParms|BlueprintCallable // @ game+0x3632d90
	int32_t GetTimeScalar(); // Function Time.CustomizableTimeInterface.GetTimeScalar // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x36327e0
	void EnableQueryServiceTime(bool Enable); // Function Time.CustomizableTimeInterface.EnableQueryServiceTime // Native|Public|BlueprintCallable // @ game+0x3632600
};

// Class Time.DebugTimeInterface
// Size: 0x28 (Inherited: 0x28)
struct UDebugTimeInterface : UInterface {

	void SetTimeScalar(int32_t RequestedTimeScalar); // Function Time.DebugTimeInterface.SetTimeScalar // Native|Public|BlueprintCallable // @ game+0x3633150
	void SetSunset(float SunsetHours); // Function Time.DebugTimeInterface.SetSunset // Native|Public|BlueprintCallable // @ game+0x3633050
	void SetSunrise(float SunriseHours); // Function Time.DebugTimeInterface.SetSunrise // Native|Public|BlueprintCallable // @ game+0x3632f50
	void SetGameWorldTime(struct FGameTime RequestedTime); // Function Time.DebugTimeInterface.SetGameWorldTime // Native|Public|HasOutParms|BlueprintCallable // @ game+0x3632e30
	int32_t GetTimeScalar(); // Function Time.DebugTimeInterface.GetTimeScalar // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3632810
	void EnableQueryServiceTime(bool Enable); // Function Time.DebugTimeInterface.EnableQueryServiceTime // Native|Public|BlueprintCallable // @ game+0x3632690
};

// Class Time.LocationProviderInterface
// Size: 0x28 (Inherited: 0x28)
struct ULocationProviderInterface : UInterface {
};

// Class Time.TimeBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTimeBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FReplicatedDateTime MakeReplicatedDateTimeFromDateTime(struct FDateTime InDateTime); // Function Time.TimeBlueprintLibrary.MakeReplicatedDateTimeFromDateTime // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3632ac0
	struct FDateTime MakeDateTimeFromReplicatedDateTime(struct FReplicatedDateTime InDateTime); // Function Time.TimeBlueprintLibrary.MakeDateTimeFromReplicatedDateTime // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3632a30
	struct FDateTime MakeDateTimeFromRaw(int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t Second, int32_t Millisecond); // Function Time.TimeBlueprintLibrary.MakeDateTimeFromRaw // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3632840
	bool DateTimesWithinTolerance(struct FDateTime FirstDateTime, struct FDateTime SecondDateTime, struct FTimespan Tolerance); // Function Time.TimeBlueprintLibrary.DateTimesWithinTolerance // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3632510
};

// Class Time.TimeFormatterInterface
// Size: 0x28 (Inherited: 0x28)
struct UTimeFormatterInterface : UInterface {
};

// Class Time.TimeService
// Size: 0x4f8 (Inherited: 0x3c8)
struct ATimeService : AActor {
	char UnknownData_3C8[0x38]; // 0x3c8(0x38)
	struct FTimespan GameWorldTimeOffset; // 0x400(0x08)
	char UnknownData_408[0x4]; // 0x408(0x04)
	uint32_t TimeScalar; // 0x40c(0x04)
	uint32_t NumberOfDaysInEachGameMonth; // 0x410(0x04)
	char UnknownData_414[0x4]; // 0x414(0x04)
	double ServiceTimeQueryRapidFrequencyOffsetMax; // 0x418(0x08)
	float ServiceTimeQueryRapidFrequencyInSeconds; // 0x420(0x04)
	float ServiceTimeQueryFrequencyInSeconds; // 0x424(0x04)
	float ClientTimeUpdateFrequencyInSeconds; // 0x428(0x04)
	float SunriseTimeHours; // 0x42c(0x04)
	float SunsetTimeHours; // 0x430(0x04)
	float LocalTimeUpdateAdjustMaxTimeDelta; // 0x434(0x04)
	float MinLocalTimeUpdateAdjustPercentageToSlowDown; // 0x438(0x04)
	float MaxLocalTimeUpdateAdjustPercentageToSlowDown; // 0x43c(0x04)
	float MinLocalTimeUpdateAdjustPercentageToSpeedUp; // 0x440(0x04)
	float MaxLocalTimeUpdateAdjustPercentageToSpeedUp; // 0x444(0x04)
	uint32_t MaxNumReplicatedTimeEntriesToAverage; // 0x448(0x04)
	char UnknownData_44C[0x4c]; // 0x44c(0x4c)
	struct FReplicatedAuthoritativeTime ReplicatedServerTime; // 0x498(0x10)
	char UnknownData_4A8[0x50]; // 0x4a8(0x50)

	void OnRep_ReplicatedServerTime(); // Function Time.TimeService.OnRep_ReplicatedServerTime // Final|Native|Protected // @ game+0x3632d70
	void MulticastOnServiceTimeChangedRPC(int64_t ServiceTimeInTicks); // Function Time.TimeService.MulticastOnServiceTimeChangedRPC // Net|NetReliableNative|Event|NetMulticast|Protected // @ game+0x3632b40
};

// Class Time.DebugTimeService
// Size: 0x500 (Inherited: 0x4f8)
struct ADebugTimeService : ATimeService {
	char UnknownData_4F8[0x8]; // 0x4f8(0x08)

	void MulticastOnTimeScalarOffsetRPC(int32_t Scalar, int64_t Offset); // Function Time.DebugTimeService.MulticastOnTimeScalarOffsetRPC // Net|NetReliableNative|Event|NetMulticast|Protected // @ game+0x3632ca0
};

// Class Time.CustomizableTimeService
// Size: 0x508 (Inherited: 0x500)
struct ACustomizableTimeService : ADebugTimeService {
	char UnknownData_500[0x8]; // 0x500(0x08)

	void MulticastOnTimeScalarOffsetRPC(int32_t Scalar, int64_t Offset); // Function Time.CustomizableTimeService.MulticastOnTimeScalarOffsetRPC // Net|NetReliableNative|Event|NetMulticast|Protected // @ game+0x3632bd0
};

