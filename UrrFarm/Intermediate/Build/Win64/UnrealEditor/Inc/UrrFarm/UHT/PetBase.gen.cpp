// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UrrFarm/Public/Character/PetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePetBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UrrFarm();
	URRFARM_API UClass* Z_Construct_UClass_APetBase();
	URRFARM_API UClass* Z_Construct_UClass_APetBase_NoRegister();
	URRFARM_API UEnum* Z_Construct_UEnum_UrrFarm_EPetRarity();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPetRarity;
	static UEnum* EPetRarity_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPetRarity.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPetRarity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UrrFarm_EPetRarity, (UObject*)Z_Construct_UPackage__Script_UrrFarm(), TEXT("EPetRarity"));
		}
		return Z_Registration_Info_UEnum_EPetRarity.OuterSingleton;
	}
	template<> URRFARM_API UEnum* StaticEnum<EPetRarity>()
	{
		return EPetRarity_StaticEnum();
	}
	struct Z_Construct_UEnum_UrrFarm_EPetRarity_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UrrFarm_EPetRarity_Statics::Enumerators[] = {
		{ "EPetRarity::EPR_Common", (int64)EPetRarity::EPR_Common },
		{ "EPetRarity::EPR_Rare", (int64)EPetRarity::EPR_Rare },
		{ "EPetRarity::EPR_Legend", (int64)EPetRarity::EPR_Legend },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UrrFarm_EPetRarity_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EPR_Common.DisplayName", "Common" },
		{ "EPR_Common.Name", "EPetRarity::EPR_Common" },
		{ "EPR_Legend.DisplayName", "Legend" },
		{ "EPR_Legend.Name", "EPetRarity::EPR_Legend" },
		{ "EPR_Rare.DisplayName", "Rare" },
		{ "EPR_Rare.Name", "EPetRarity::EPR_Rare" },
		{ "ModuleRelativePath", "Public/Character/PetBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UrrFarm_EPetRarity_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UrrFarm,
		nullptr,
		"EPetRarity",
		"EPetRarity",
		Z_Construct_UEnum_UrrFarm_EPetRarity_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UrrFarm_EPetRarity_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UrrFarm_EPetRarity_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UrrFarm_EPetRarity_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UrrFarm_EPetRarity()
	{
		if (!Z_Registration_Info_UEnum_EPetRarity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPetRarity.InnerSingleton, Z_Construct_UEnum_UrrFarm_EPetRarity_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPetRarity.InnerSingleton;
	}
	void APetBase::StaticRegisterNativesAPetBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APetBase);
	UClass* Z_Construct_UClass_APetBase_NoRegister()
	{
		return APetBase::StaticClass();
	}
	struct Z_Construct_UClass_APetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttackMontage;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PetRarity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PetRarity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PetRarity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UrrFarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APetBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/PetBase.h" },
		{ "ModuleRelativePath", "Public/Character/PetBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetBase_Statics::NewProp_AttackMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pet" },
		{ "ModuleRelativePath", "Public/Character/PetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APetBase_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetBase, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetBase_Statics::NewProp_AttackMontage_MetaData), Z_Construct_UClass_APetBase_Statics::NewProp_AttackMontage_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APetBase_Statics::NewProp_PetRarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetBase_Statics::NewProp_PetRarity_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pet" },
		{ "ModuleRelativePath", "Public/Character/PetBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APetBase_Statics::NewProp_PetRarity = { "PetRarity", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetBase, PetRarity), Z_Construct_UEnum_UrrFarm_EPetRarity, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetBase_Statics::NewProp_PetRarity_MetaData), Z_Construct_UClass_APetBase_Statics::NewProp_PetRarity_MetaData) }; // 1348822153
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APetBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetBase_Statics::NewProp_AttackMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetBase_Statics::NewProp_PetRarity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetBase_Statics::NewProp_PetRarity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APetBase_Statics::ClassParams = {
		&APetBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APetBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APetBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APetBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APetBase()
	{
		if (!Z_Registration_Info_UClass_APetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APetBase.OuterSingleton, Z_Construct_UClass_APetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APetBase.OuterSingleton;
	}
	template<> URRFARM_API UClass* StaticClass<APetBase>()
	{
		return APetBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APetBase);
	APetBase::~APetBase() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Character_PetBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Character_PetBase_h_Statics::EnumInfo[] = {
		{ EPetRarity_StaticEnum, TEXT("EPetRarity"), &Z_Registration_Info_UEnum_EPetRarity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1348822153U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Character_PetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APetBase, APetBase::StaticClass, TEXT("APetBase"), &Z_Registration_Info_UClass_APetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APetBase), 1415288272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Character_PetBase_h_2933948244(TEXT("/Script/UrrFarm"),
		Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Character_PetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Character_PetBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Character_PetBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Character_PetBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
