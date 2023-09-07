// Class TaleCore.ClientCommandHandler
// Size: 0x3e0 (Inherited: 0x3c8)
struct AClientCommandHandler : AActor {
	struct FClientCommandQueue CommandQueue; // 0x3c8(0x18)

	void OnRep_CommandQueue(); // Function TaleCore.ClientCommandHandler.OnRep_CommandQueue // Final|Native|Private // @ game+0x3f43c00
};

// Class TaleCore.TaleStruct
// Size: 0xb8 (Inherited: 0x88)
struct UTaleStruct : UStruct {
	struct FGuid StructId; // 0x88(0x10)
	char UnknownData_98[0x20]; // 0x98(0x20)
};

