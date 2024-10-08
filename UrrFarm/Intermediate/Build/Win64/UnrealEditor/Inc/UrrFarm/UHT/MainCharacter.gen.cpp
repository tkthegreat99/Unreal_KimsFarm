// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UrrFarm/Public/Character/MainCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UrrFarm();
	URRFARM_API UClass* Z_Construct_UClass_AMainCharacter();
	URRFARM_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
	URRFARM_API UClass* Z_Construct_UClass_UCharacterManagementComponent_NoRegister();
	URRFARM_API UEnum* Z_Construct_UEnum_UrrFarm_ECharacterState();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterState;
	static UEnum* ECharacterState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECharacterState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECharacterState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UrrFarm_ECharacterState, (UObject*)Z_Construct_UPackage__Script_UrrFarm(), TEXT("ECharacterState"));
		}
		return Z_Registration_Info_UEnum_ECharacterState.OuterSingleton;
	}
	template<> URRFARM_API UEnum* StaticEnum<ECharacterState>()
	{
		return ECharacterState_StaticEnum();
	}
	struct Z_Construct_UEnum_UrrFarm_ECharacterState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UrrFarm_ECharacterState_Statics::Enumerators[] = {
		{ "ECharacterState::ECS_Idle", (int64)ECharacterState::ECS_Idle },
		{ "ECharacterState::ECS_Moving", (int64)ECharacterState::ECS_Moving },
		{ "ECharacterState::ECS_Attacking", (int64)ECharacterState::ECS_Attacking },
		{ "ECharacterState::ECS_Gathering", (int64)ECharacterState::ECS_Gathering },
		{ "ECharacterState::ECS_Dead", (int64)ECharacterState::ECS_Dead },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UrrFarm_ECharacterState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ECS_Attacking.DisplayName", "Attacking" },
		{ "ECS_Attacking.Name", "ECharacterState::ECS_Attacking" },
		{ "ECS_Dead.DisplayName", "Dead" },
		{ "ECS_Dead.Name", "ECharacterState::ECS_Dead" },
		{ "ECS_Gathering.DisplayName", "Gathering" },
		{ "ECS_Gathering.Name", "ECharacterState::ECS_Gathering" },
		{ "ECS_Idle.DisplayName", "Idle" },
		{ "ECS_Idle.Name", "ECharacterState::ECS_Idle" },
		{ "ECS_Moving.DisplayName", "Moving" },
		{ "ECS_Moving.Name", "ECharacterState::ECS_Moving" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UrrFarm_ECharacterState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UrrFarm,
		nullptr,
		"ECharacterState",
		"ECharacterState",
		Z_Construct_UEnum_UrrFarm_ECharacterState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UrrFarm_ECharacterState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UrrFarm_ECharacterState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UrrFarm_ECharacterState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UrrFarm_ECharacterState()
	{
		if (!Z_Registration_Info_UEnum_ECharacterState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterState.InnerSingleton, Z_Construct_UEnum_UrrFarm_ECharacterState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECharacterState.InnerSingleton;
	}
	void AMainCharacter::StaticRegisterNativesAMainCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainCharacter);
	UClass* Z_Construct_UClass_AMainCharacter_NoRegister()
	{
		return AMainCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMainCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedSpringArmLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpectedSpringArmLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TopDownCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadarMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RadarMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Manage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Manage;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UrrFarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/MainCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_ExpectedSpringArmLength_MetaData[] = {
		{ "Category", "MainCharacter" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_ExpectedSpringArmLength = { "ExpectedSpringArmLength", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, ExpectedSpringArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_ExpectedSpringArmLength_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_ExpectedSpringArmLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Top down camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Top down camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_TopDownCameraComponent_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_TopDownCameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_RadarMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Radar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_RadarMesh = { "RadarMesh", nullptr, (EPropertyFlags)0x004400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, RadarMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_RadarMesh_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_RadarMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_Manage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Radar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_Manage = { "Manage", nullptr, (EPropertyFlags)0x004400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, Manage), Z_Construct_UClass_UCharacterManagementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_Manage_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_Manage_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_CharacterState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_CharacterState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Radar" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_CharacterState = { "CharacterState", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, CharacterState), Z_Construct_UEnum_UrrFarm_ECharacterState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_CharacterState_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_CharacterState_MetaData) }; // 3859081948
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_ExpectedSpringArmLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_TopDownCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_RadarMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_Manage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_CharacterState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_CharacterState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainCharacter_Statics::ClassParams = {
		&AMainCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMainCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMainCharacter()
	{
		if (!Z_Registration_Info_UClass_AMainCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainCharacter.OuterSingleton, Z_Construct_UClass_AMainCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMainCharacter.OuterSingleton;
	}
	template<> URRFARM_API UClass* StaticClass<AMainCharacter>()
	{
		return AMainCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainCharacter);
	AMainCharacter::~AMainCharacter() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Character_MainCharacter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Character_MainCharacter_h_Statics::EnumInfo[] = {
		{ ECharacterState_StaticEnum, TEXT("ECharacterState"), &Z_Registration_Info_UEnum_ECharacterState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3859081948U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Character_MainCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMainCharacter, AMainCharacter::StaticClass, TEXT("AMainCharacter"), &Z_Registration_Info_UClass_AMainCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainCharacter), 138887778U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Character_MainCharacter_h_373615465(TEXT("/Script/UrrFarm"),
		Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Character_MainCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Character_MainCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Character_MainCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Character_MainCharacter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
