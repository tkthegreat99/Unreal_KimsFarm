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
	UPackage* Z_Construct_UPackage__Script_UrrFarm();
	URRFARM_API UClass* Z_Construct_UClass_APetBase();
	URRFARM_API UClass* Z_Construct_UClass_APetBase_NoRegister();
// End Cross Module References
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_APetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APetBase_Statics::ClassParams = {
		&APetBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APetBase_Statics::Class_MetaDataParams)
	};
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
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Character_PetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APetBase, APetBase::StaticClass, TEXT("APetBase"), &Z_Registration_Info_UClass_APetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APetBase), 1780007964U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Character_PetBase_h_71792457(TEXT("/Script/UrrFarm"),
		Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Character_PetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Character_PetBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
