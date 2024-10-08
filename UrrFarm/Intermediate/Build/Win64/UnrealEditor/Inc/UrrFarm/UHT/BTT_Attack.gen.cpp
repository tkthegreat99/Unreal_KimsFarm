// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UrrFarm/Public/AI/BTT_Attack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_Attack() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_UrrFarm();
	URRFARM_API UClass* Z_Construct_UClass_UBTT_Attack();
	URRFARM_API UClass* Z_Construct_UClass_UBTT_Attack_NoRegister();
// End Cross Module References
	void UBTT_Attack::StaticRegisterNativesUBTT_Attack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_Attack);
	UClass* Z_Construct_UClass_UBTT_Attack_NoRegister()
	{
		return UBTT_Attack::StaticClass();
	}
	struct Z_Construct_UClass_UBTT_Attack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTT_Attack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_UrrFarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_Attack_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_Attack_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/BTT_Attack.h" },
		{ "ModuleRelativePath", "Public/AI/BTT_Attack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTT_Attack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_Attack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_Attack_Statics::ClassParams = {
		&UBTT_Attack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_Attack_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTT_Attack_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBTT_Attack()
	{
		if (!Z_Registration_Info_UClass_UBTT_Attack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_Attack.OuterSingleton, Z_Construct_UClass_UBTT_Attack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTT_Attack.OuterSingleton;
	}
	template<> URRFARM_API UClass* StaticClass<UBTT_Attack>()
	{
		return UBTT_Attack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_Attack);
	UBTT_Attack::~UBTT_Attack() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_AI_BTT_Attack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_AI_BTT_Attack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_Attack, UBTT_Attack::StaticClass, TEXT("UBTT_Attack"), &Z_Registration_Info_UClass_UBTT_Attack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_Attack), 472555353U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_AI_BTT_Attack_h_1096192416(TEXT("/Script/UrrFarm"),
		Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_AI_BTT_Attack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_AI_BTT_Attack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
