// BlueprintGeneratedClass BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C
// Size: 0x408 (Inherited: 0x3c8)
struct ABP_Audio_Play_Wwise_Event_Function_C : AActor {
	struct UWwiseEmitterComponent* AudioComp; // 0x3c8(0x08)
	struct TArray<struct UWwiseEvent*> WwisePlayEvents; // 0x3d0(0x10)
	struct FName Wwise Game Parameter; // 0x3e0(0x08)
	float Wwise Game Parameter Value; // 0x3e8(0x04)
	char UnknownData_3EC[0x4]; // 0x3ec(0x04)
	struct UWwiseObjectPoolWrapper* Wwise Object Pool Wrapper; // 0x3f0(0x08)
	struct TArray<struct UWwiseEvent*> WwiseStopEvents; // 0x3f8(0x10)

	void StopAudio(); // Function BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C.StopAudio // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void PlayAudio(); // Function BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C.PlayAudio // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void UserConstructionScript(); // Function BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
};

