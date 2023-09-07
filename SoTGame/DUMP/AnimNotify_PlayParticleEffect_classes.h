// BlueprintGeneratedClass AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C
// Size: 0x6c (Inherited: 0x38)
struct UAnimNotify_PlayParticleEffect_C : UAnimNotify {
	struct UParticleSystem* PSTemplate; // 0x38(0x08)
	struct FString SocketName; // 0x40(0x10)
	bool Attached; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	struct FVector LocationOffset; // 0x54(0x0c)
	struct FRotator RotationOffset; // 0x60(0x0c)

	struct FString GetNotifyName(); // Function AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C.GetNotifyName // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	bool Received_Notify(struct USkeletalMeshComponent** MeshComp, struct UAnimSequenceBase** Animation); // Function AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C.Received_Notify // Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
};

