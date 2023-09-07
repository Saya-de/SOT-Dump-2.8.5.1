// Class CoherentUIGTPlugin.CoherentUIGTBaseComponent
// Size: 0x310 (Inherited: 0xc8)
struct UCoherentUIGTBaseComponent : UActorComponent {
	struct FMulticastDelegate ReadyForBindings; // 0xc8(0x10)
	struct FMulticastDelegate BindingsReleased; // 0xd8(0x10)
	struct FMulticastDelegate FinishLoad; // 0xe8(0x10)
	struct FMulticastDelegate FailLoad; // 0xf8(0x10)
	struct FMulticastDelegate StartLoading; // 0x108(0x10)
	struct FMulticastDelegate NavigateTo; // 0x118(0x10)
	struct FMulticastDelegate JavaScriptEvent; // 0x128(0x10)
	struct FMulticastDelegate UIGTScriptingReady; // 0x138(0x10)
	DelegateProperty LiveViewSizeRequested; // 0x148(0x10)
	char UnknownData_158[0x18]; // 0x158(0x18)
	struct UTextureRenderTarget2D* Texture; // 0x170(0x08)
	char Filter; // 0x178(0x01)
	bool bReceiveInput; // 0x179(0x01)
	bool bReceiveInputWhenTransparent; // 0x17a(0x01)
	bool AllowPerformanceWarnings; // 0x17b(0x01)
	float ExecuteJSTimersThresholdMs; // 0x17c(0x04)
	float UpdateStylesAndLayoutThresholdMs; // 0x180(0x04)
	float RecordRenderingCommandsThresholdMs; // 0x184(0x04)
	float PaintWarningThresholdMs; // 0x188(0x04)
	int32_t LayersCountThreshold; // 0x18c(0x04)
	int32_t LayerWidthThreshold; // 0x190(0x04)
	int32_t LayerHeightThreshold; // 0x194(0x04)
	bool bEnableAdditionalDefaultStyles; // 0x198(0x01)
	bool bDelayedUpdate; // 0x199(0x01)
	char UnknownData_19A[0x176]; // 0x19a(0x176)

	void UpdateWholeDataModelFromStruct(struct UStructProperty* Arg); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromStruct // Final|Native|Public|BlueprintCallable|Const // @ game+0x55ae040
	void UpdateWholeDataModelFromObject(struct UObject* Model); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromObject // Final|Native|Public|BlueprintCallable|Const // @ game+0x55adf40
	void TriggerJSEvent(struct FString Name, struct UCoherentUIGTJSEvent* EventData); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.TriggerJSEvent // Final|Native|Public|BlueprintCallable|Const // @ game+0x55adc70
	void SynchronizeModels(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SynchronizeModels // Final|Native|Public|BlueprintCallable|Const // @ game+0x55adc10
	void ShowPaintRects(bool show); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.ShowPaintRects // Final|Native|Public|BlueprintCallable // @ game+0x55adaf0
	void SetClickThroughAlphaThreshold(float Threshold); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SetClickThroughAlphaThreshold // Final|Native|Public|BlueprintCallable // @ game+0x55ad530
	void Resize(int32_t Width, int32_t Height); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Resize // Native|Public|BlueprintCallable // @ game+0x55ad470
	void Reload(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Reload // Final|Native|Public|BlueprintCallable // @ game+0x55ad430
	void Redraw(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Redraw // Final|Native|Public|BlueprintCallable|Const // @ game+0x55ad3f0
	void Load(struct FString path); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Load // Final|Native|Public|BlueprintCallable // @ game+0x55ad060
	bool IsTransparent(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsTransparent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x55ad000
	bool IsReadyToCreateView(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyToCreateView // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x55acfa0
	bool IsReadyForBindings(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyForBindings // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x55acf40
	bool IsDocumentReady(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsDocumentReady // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x55aceb0
	bool HasRequestedView(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.HasRequestedView // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x55acca0
	float GetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.GetClickThroughAlphaThreshold // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x55ac9d0
	void EndDebugFrameSave(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EndDebugFrameSave // Final|Native|Public|BlueprintCallable // @ game+0x55ac900
	void EnableDelayedUpdate(bool bEnabled); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EnableDelayedUpdate // Final|Native|Public|BlueprintCallable // @ game+0x55ac870
	void DebugSaveNextFrame(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.DebugSaveNextFrame // Final|Native|Public|BlueprintCallable // @ game+0x55ac830
	struct UCoherentUIGTJSEvent* CreateJSEvent(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateJSEvent // Final|Native|Public|BlueprintCallable // @ game+0x55ac750
	void CreateDataModelFromStruct(struct FString Name, struct UStructProperty* Arg); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromStruct // Final|Native|Public|BlueprintCallable // @ game+0x55ac4a0
	void CreateDataModelFromObject(struct FString Name, struct UObject* Model); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromObject // Final|Native|Public|BlueprintCallable // @ game+0x55ac2e0
	void BeginDebugFrameSave(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.BeginDebugFrameSave // Final|Native|Public|BlueprintCallable // @ game+0x55ac2a0
};

// Class CoherentUIGTPlugin.CoherentUIGTComponent
// Size: 0x348 (Inherited: 0x310)
struct UCoherentUIGTComponent : UCoherentUIGTBaseComponent {
	struct FString URL; // 0x310(0x10)
	int32_t Width; // 0x320(0x04)
	int32_t Height; // 0x324(0x04)
	bool ManualTexture; // 0x328(0x01)
	char UnknownData_329[0x3]; // 0x329(0x03)
	float ClickThroughAlphaThreshold; // 0x32c(0x04)
	bool Transparent; // 0x330(0x01)
	char UnknownData_331[0x17]; // 0x331(0x17)
};

// Class CoherentUIGTPlugin.CoherentUIGTLiveView
// Size: 0xf8 (Inherited: 0xc8)
struct UCoherentUIGTLiveView : UActorComponent {
	struct FString LinkName; // 0xc8(0x10)
	struct UTextureRenderTarget2D* Texture; // 0xd8(0x08)
	char UnknownData_E0[0x18]; // 0xe0(0x18)

	void OnLiveViewSizeRequest(struct UCoherentUIGTBaseComponent* BaseComponent, struct FString Name, int32_t Width, int32_t Height); // Function CoherentUIGTPlugin.CoherentUIGTLiveView.OnLiveViewSizeRequest // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x55ad1a0
};

// Class CoherentUIGTPlugin.CoherentUIGTRenderToTextureLiveView
// Size: 0x100 (Inherited: 0xf8)
struct UCoherentUIGTRenderToTextureLiveView : UCoherentUIGTLiveView {
	char UnknownData_F8[0x8]; // 0xf8(0x08)
};

// Class CoherentUIGTPlugin.CoherentUIGTAssetReferencer
// Size: 0x28 (Inherited: 0x28)
struct UCoherentUIGTAssetReferencer : UObject {
};

// Class CoherentUIGTPlugin.CoherentUIGTSystem
// Size: 0x418 (Inherited: 0x3c8)
struct ACoherentUIGTSystem : AActor {
	char UnknownData_3C8[0x50]; // 0x3c8(0x50)
};

// Class CoherentUIGTPlugin.CoherentUIGTJSEvent
// Size: 0xb8 (Inherited: 0x28)
struct UCoherentUIGTJSEvent : UObject {
	char UnknownData_28[0x80]; // 0x28(0x80)
	struct TArray<struct UStruct*> StructTypes; // 0xa8(0x10)

	void AddText(struct FText Text); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddText // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x55ac0d0
	void AddStructArg(struct UStructProperty* Arg); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddStructArg // Final|Native|Public|BlueprintCallable // @ game+0x55ac010
	void AddString(struct FString Str); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddString // Final|Native|Public|BlueprintCallable // @ game+0x55abe90
	void AddObject(struct UObject* Object); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddObject // Final|Native|Public|BlueprintCallable // @ game+0x55abd40
	void AddName(struct FName Name); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddName // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x55abc00
	void AddInt32(int32_t integer); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddInt32 // Final|Native|Public|BlueprintCallable // @ game+0x55abb80
	void AddFloat(float fl); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddFloat // Final|Native|Public|BlueprintCallable // @ game+0x55aba50
	void AddByte(char byte); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddByte // Final|Native|Public|BlueprintCallable // @ game+0x55ab910
	void AddBool(bool B); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddBool // Final|Native|Public|BlueprintCallable // @ game+0x55ab7d0
	void AddArray(struct TArray<int32_t> Array); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddArray // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x55ab490
};

// Class CoherentUIGTPlugin.CoherentUIGTJSPayload
// Size: 0x40 (Inherited: 0x28)
struct UCoherentUIGTJSPayload : UObject {
	struct FString EventName; // 0x28(0x10)
	char UnknownData_38[0x8]; // 0x38(0x08)

	void ReadObject(int32_t Index, struct UObject* Object); // Function CoherentUIGTPlugin.CoherentUIGTJSPayload.ReadObject // Final|Native|Public|BlueprintCallable // @ game+0x55ad330
	struct FString GetString(int32_t Index); // Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetString // Final|Native|Public|BlueprintCallable // @ game+0x55acbb0
	float GetNumber(int32_t Index); // Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetNumber // Final|Native|Public|BlueprintCallable // @ game+0x55acaf0
	int32_t GetInt32(int32_t Index); // Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetInt32 // Final|Native|Public|BlueprintCallable // @ game+0x55aca60
	bool GetBool(int32_t Index); // Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetBool // Final|Native|Public|BlueprintCallable // @ game+0x55ac940
};

// Class CoherentUIGTPlugin.CoherentUIGTEventHelpers
// Size: 0x28 (Inherited: 0x28)
struct UCoherentUIGTEventHelpers : UObject {
};

// Class CoherentUIGTPlugin.CoherentUIGTHUD
// Size: 0x338 (Inherited: 0x310)
struct UCoherentUIGTHUD : UCoherentUIGTBaseComponent {
	struct FStringAssetReference HUDMaterialName; // 0x310(0x10)
	struct UMaterial* HUDMaterial; // 0x320(0x08)
	struct UMaterialInstanceDynamic* HUDMaterialInstance; // 0x328(0x08)
	char UnknownData_330[0x8]; // 0x330(0x08)
};

// Class CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UCoherentUIGTBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void TriggerJSEvent(struct UCoherentUIGTBaseComponent* Component, struct FString EventName, struct UCoherentUIGTJSEvent* JSEvent); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.TriggerJSEvent // Final|Native|Static|Public|BlueprintCallable // @ game+0x55add50
	void SetupLoadingScreen(struct UObject* WorldContextObject, struct FCoherentUIGTLoadingScreenSettings Settings); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.SetupLoadingScreen // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x55ad840
	struct UCoherentUIGTJSEvent* CreateJSEvent(struct UObject* WorldContextObject); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.CreateJSEvent // Final|Native|Static|Public|BlueprintCallable // @ game+0x55ac780
	void AddStructArg(struct UCoherentUIGTJSEvent* JSEvent, struct UStructProperty* Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddStructArg // Final|Native|Static|Public|BlueprintCallable // @ game+0x55abf30
	void AddString(struct UCoherentUIGTJSEvent* JSEvent, struct FString Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddString // Final|Native|Static|Public|BlueprintCallable // @ game+0x55abdc0
	void AddObject(struct UCoherentUIGTJSEvent* JSEvent, struct UObject* Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddObject // Final|Native|Static|Public|BlueprintCallable // @ game+0x55abc90
	void AddInt32(struct UCoherentUIGTJSEvent* JSEvent, int32_t Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddInt32 // Final|Native|Static|Public|BlueprintCallable // @ game+0x55abad0
	void AddFloat(struct UCoherentUIGTJSEvent* JSEvent, float Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddFloat // Final|Native|Static|Public|BlueprintCallable // @ game+0x55ab990
	void AddByte(struct UCoherentUIGTJSEvent* JSEvent, char Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddByte // Final|Native|Static|Public|BlueprintCallable // @ game+0x55ab860
	void AddBool(struct UCoherentUIGTJSEvent* JSEvent, bool Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddBool // Final|Native|Static|Public|BlueprintCallable // @ game+0x55ab710
	void AddArrayOfStructs(struct UCoherentUIGTJSEvent* JSEvent, struct TArray<int32_t> Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArrayOfStructs // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x55ab580
	void AddArray(struct UCoherentUIGTJSEvent* JSEvent, struct TArray<int32_t> Arg, int32_t ArrayType); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArray // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x55ab360
};

// Class CoherentUIGTPlugin.CoherentUIGTGameHUD
// Size: 0x558 (Inherited: 0x4c0)
struct ACoherentUIGTGameHUD : AHUD {
	struct UCoherentUIGTHUD* CoherentUIGTHUD; // 0x4c0(0x08)
	char UnknownData_4C8[0x90]; // 0x4c8(0x90)

	void SetupUIGTView(struct FString PageUrl, bool bIsTransparent, float ClickThroughAlphaThreshold, float AnimationFrameDefer, bool bDelayedUpdate); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.SetupUIGTView // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x55ad920
	bool HasSetupUIGTView(); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.HasSetupUIGTView // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x55acd00
};

// Class CoherentUIGTPlugin.CoherentUIGTInputActor
// Size: 0x428 (Inherited: 0x3c8)
struct ACoherentUIGTInputActor : AActor {
	struct FMulticastDelegate OnCoherentUIGTInputActorMouseButtonDown; // 0x3c8(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorMouseButtonUp; // 0x3d8(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorKeyDown; // 0x3e8(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorKeyUp; // 0x3f8(0x10)
	char UnknownData_408[0x20]; // 0x408(0x20)

	void ToggleCoherentUIGTInputFocus(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.ToggleCoherentUIGTInputFocus // Final|Native|Public|BlueprintCallable // @ game+0x55adc50
	void SetLineTraceMode(char Mode); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetLineTraceMode // Final|Native|Public|BlueprintCallable // @ game+0x55ad7c0
	void SetInputPropagationBehaviour(char Propagation); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetInputPropagationBehaviour // Final|Native|Public|BlueprintCallable // @ game+0x55ad740
	void SetCoherentUIGTViewFocus(struct UCoherentUIGTBaseComponent* NewFocusedView); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTViewFocus // Final|Native|Public|BlueprintCallable // @ game+0x55ad6c0
	void SetCoherentUIGTInputFocus(bool FocusUI); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTInputFocus // Final|Native|Public|BlueprintCallable // @ game+0x55ad630
	bool IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x55acf10
	bool IsCoherentUIGTFocused(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsCoherentUIGTFocused // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x55ace80
	void Initialize(char CollisionChannel, char AddressMode, char RaycastQuality, int32_t UVChannel); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize // Final|Native|Public|BlueprintCallable // @ game+0x55acd30
	char GetInputPropagationBehaviour(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.GetInputPropagationBehaviour // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x55aca30
	void AlwaysAcceptMouseInput(bool bAccept); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.AlwaysAcceptMouseInput // Final|Native|Public|BlueprintCallable // @ game+0x55ac210
	void AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(bool bAllow); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED // Final|Native|Public|BlueprintCallable // @ game+0x55ac180
};

// Class CoherentUIGTPlugin.CoherentUIGTSettings
// Size: 0x68 (Inherited: 0x28)
struct UCoherentUIGTSettings : UObject {
	bool EnableLiveReload; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	int32_t InspectorPort; // 0x2c(0x04)
	int32_t WebdriverPort; // 0x30(0x04)
	bool EnableWebSecurity; // 0x34(0x01)
	bool EnableLocalization; // 0x35(0x01)
	bool RunAsynchronous; // 0x36(0x01)
	bool bRecursivelyBindUStructs; // 0x37(0x01)
	bool LoadSystemFonts; // 0x38(0x01)
	bool AllowPerformanceWarningsInEditor; // 0x39(0x01)
	bool ShowWarningsOnScreen; // 0x3a(0x01)
	char LogSeverity; // 0x3b(0x01)
	bool bPaintToBackBuffer; // 0x3c(0x01)
	bool bRespectTitleSafeZone; // 0x3d(0x01)
	bool bRespectLetterboxing; // 0x3e(0x01)
	char UnknownData_3F[0x1]; // 0x3f(0x01)
	struct FString HUDMaterialName; // 0x40(0x10)
	struct FString CoUIResourcesRoot; // 0x50(0x10)
	bool TickWhileGameIsPaused; // 0x60(0x01)
	char MSAA; // 0x61(0x01)
	char UnknownData_62[0x6]; // 0x62(0x06)
};

// Class CoherentUIGTPlugin.CoherentUIGTWidget
// Size: 0x3d8 (Inherited: 0x138)
struct UCoherentUIGTWidget : UWidget {
	char UnknownData_138[0x20]; // 0x138(0x20)
	struct AActor* Owner; // 0x158(0x08)
	struct FMulticastDelegate ReadyForBindings; // 0x160(0x10)
	struct FMulticastDelegate BindingsReleased; // 0x170(0x10)
	struct FMulticastDelegate FinishLoad; // 0x180(0x10)
	struct FMulticastDelegate FailLoad; // 0x190(0x10)
	struct FMulticastDelegate StartLoading; // 0x1a0(0x10)
	struct FMulticastDelegate NavigateTo; // 0x1b0(0x10)
	struct FMulticastDelegate JavaScriptEvent; // 0x1c0(0x10)
	struct FMulticastDelegate UIGTScriptingReady; // 0x1d0(0x10)
	char UnknownData_1E0[0x18]; // 0x1e0(0x18)
	char Filter; // 0x1f8(0x01)
	bool bReceiveInput; // 0x1f9(0x01)
	bool bReceiveInputWhenTransparent; // 0x1fa(0x01)
	bool bGammaCorrectedMaterial; // 0x1fb(0x01)
	bool AllowPerformanceWarnings; // 0x1fc(0x01)
	char UnknownData_1FD[0x3]; // 0x1fd(0x03)
	float ExecuteJSTimersThresholdMs; // 0x200(0x04)
	float UpdateStylesAndLayoutThresholdMs; // 0x204(0x04)
	float RecordRenderingCommandsThresholdMs; // 0x208(0x04)
	float PaintWarningThresholdMs; // 0x20c(0x04)
	int32_t LayersCountThreshold; // 0x210(0x04)
	int32_t LayerWidthThreshold; // 0x214(0x04)
	int32_t LayerHeightThreshold; // 0x218(0x04)
	bool bEnableAdditionalDefaultStyles; // 0x21c(0x01)
	char UnknownData_21D[0x1a3]; // 0x21d(0x1a3)
	struct FString URL; // 0x3c0(0x10)
	float ClickThroughAlphaThreshold; // 0x3d0(0x04)
	bool Transparent; // 0x3d4(0x01)
	char UnknownData_3D5[0x3]; // 0x3d5(0x03)

	void UpdateWholeDataModelFromStruct(struct UStructProperty* Arg); // Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromStruct // Final|Native|Public|BlueprintCallable|Const // @ game+0x55ae130
	void UpdateWholeDataModelFromObject(struct UObject* Model); // Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromObject // Final|Native|Public|BlueprintCallable|Const // @ game+0x55adfc0
	void TriggerJSEvent(struct FString Name, struct UCoherentUIGTJSEvent* EventData); // Function CoherentUIGTPlugin.CoherentUIGTWidget.TriggerJSEvent // Final|Native|Public|BlueprintCallable|Const // @ game+0x55ade60
	void SynchronizeModels(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SynchronizeModels // Final|Native|Public|BlueprintCallable|Const // @ game+0x55adc30
	void ShowPaintRects(bool show); // Function CoherentUIGTPlugin.CoherentUIGTWidget.ShowPaintRects // Final|Native|Public|BlueprintCallable // @ game+0x55adb80
	void SetClickThroughAlphaThreshold(float Threshold); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SetClickThroughAlphaThreshold // Final|Native|Public|BlueprintCallable // @ game+0x55ad5b0
	void Reload(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.Reload // Final|Native|Public|BlueprintCallable // @ game+0x55ad450
	void Redraw(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.Redraw // Final|Native|Public|BlueprintCallable|Const // @ game+0x55ad410
	void Load(struct FString path); // Function CoherentUIGTPlugin.CoherentUIGTWidget.Load // Final|Native|Public|BlueprintCallable // @ game+0x55ad100
	bool IsTransparent(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.IsTransparent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x55ad030
	bool IsReadyToCreateView(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyToCreateView // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x55acfd0
	bool IsReadyForBindings(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyForBindings // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x55acf70
	bool IsDocumentReady(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.IsDocumentReady // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x55acee0
	bool HasRequestedView(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.HasRequestedView // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x55accd0
	struct UTextureRenderTarget2D* GetRenderTexture(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.GetRenderTexture // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x55acb80
	float GetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.GetClickThroughAlphaThreshold // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x55aca00
	void EndDebugFrameSave(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.EndDebugFrameSave // Final|Native|Public|BlueprintCallable // @ game+0x55ac920
	void DebugSaveNextFrame(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.DebugSaveNextFrame // Final|Native|Public|BlueprintCallable // @ game+0x55ac850
	struct UCoherentUIGTJSEvent* CreateJSEvent(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateJSEvent // Final|Native|Public|BlueprintCallable // @ game+0x55ac800
	void CreateDataModelFromStruct(struct FString Name, struct UStructProperty* Arg); // Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromStruct // Final|Native|Public|BlueprintCallable // @ game+0x55ac5f0
	void CreateDataModelFromObject(struct FString Name, struct UObject* Model); // Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromObject // Final|Native|Public|BlueprintCallable // @ game+0x55ac3c0
	void BeginDebugFrameSave(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.BeginDebugFrameSave // Final|Native|Public|BlueprintCallable // @ game+0x55ac2c0
};

