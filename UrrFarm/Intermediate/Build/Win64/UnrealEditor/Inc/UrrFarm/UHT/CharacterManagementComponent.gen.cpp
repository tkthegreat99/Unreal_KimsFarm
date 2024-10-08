// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UrrFarm/Public/Components/CharacterManagementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterManagementComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_UrrFarm();
	URRFARM_API UClass* Z_Construct_UClass_UCharacterManagementComponent();
	URRFARM_API UClass* Z_Construct_UClass_UCharacterManagementComponent_NoRegister();
// End Cross Module References
	void UCharacterManagementComponent::StaticRegisterNativesUCharacterManagementComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterManagementComponent);
	UClass* Z_Construct_UClass_UCharacterManagementComponent_NoRegister()
	{
		return UCharacterManagementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterManagementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComponentOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AIController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterManagementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UrrFarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterManagementComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterManagementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CharacterManagementComponent.h" },
		{ "ModuleRelativePath", "Public/Components/CharacterManagementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterManagementComponent_Statics::NewProp_ComponentOwner_MetaData[] = {
		{ "Category", "CharacterManagementComponent" },
		{ "ModuleRelativePath", "Public/Components/CharacterManagementComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCharacterManagementComponent_Statics::NewProp_ComponentOwner = { "ComponentOwner", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterManagementComponent, ComponentOwner), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterManagementComponent_Statics::NewProp_ComponentOwner_MetaData), Z_Construct_UClass_UCharacterManagementComponent_Statics::NewProp_ComponentOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterManagementComponent_Statics::NewProp_AIController_MetaData[] = {
		{ "Category", "CharacterManagementComponent" },
		{ "ModuleRelativePath", "Public/Components/CharacterManagementComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCharacterManagementComponent_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterManagementComponent, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterManagementComponent_Statics::NewProp_AIController_MetaData), Z_Construct_UClass_UCharacterManagementComponent_Statics::NewProp_AIController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterManagementComponent_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "Public/Components/CharacterManagementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterManagementComponent_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterManagementComponent, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterManagementComponent_Statics::NewProp_CurrentHealth_MetaData), Z_Construct_UClass_UCharacterManagementComponent_Statics::NewProp_CurrentHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterManagementComponent_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "Public/Components/CharacterManagementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterManagementComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterManagementComponent, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterManagementComponent_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_UCharacterManagementComponent_Statics::NewProp_MaxHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterManagementComponent_Statics::NewProp_AttackRange_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "Public/Components/CharacterManagementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterManagementComponent_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterManagementComponent, AttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterManagementComponent_Statics::NewProp_AttackRange_MetaData), Z_Construct_UClass_UCharacterManagementComponent_Statics::NewProp_AttackRange_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterManagementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterManagementComponent_Statics::NewProp_ComponentOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterManagementComponent_Statics::NewProp_AIController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterManagementComponent_Statics::NewProp_CurrentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterManagementComponent_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterManagementComponent_Statics::NewProp_AttackRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterManagementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterManagementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterManagementComponent_Statics::ClassParams = {
		&UCharacterManagementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCharacterManagementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterManagementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterManagementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterManagementComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterManagementComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCharacterManagementComponent()
	{
		if (!Z_Registration_Info_UClass_UCharacterManagementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterManagementComponent.OuterSingleton, Z_Construct_UClass_UCharacterManagementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCharacterManagementComponent.OuterSingleton;
	}
	template<> URRFARM_API UClass* StaticClass<UCharacterManagementComponent>()
	{
		return UCharacterManagementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterManagementComponent);
	UCharacterManagementComponent::~UCharacterManagementComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Components_CharacterManagementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Components_CharacterManagementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterManagementComponent, UCharacterManagementComponent::StaticClass, TEXT("UCharacterManagementComponent"), &Z_Registration_Info_UClass_UCharacterManagementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterManagementComponent), 4196562932U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Components_CharacterManagementComponent_h_2137873564(TEXT("/Script/UrrFarm"),
		Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Components_CharacterManagementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Components_CharacterManagementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
