// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UrrFarm/Public/AI/PetAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePetAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UrrFarm();
	URRFARM_API UClass* Z_Construct_UClass_APetAIController();
	URRFARM_API UClass* Z_Construct_UClass_APetAIController_NoRegister();
// End Cross Module References
	void APetAIController::StaticRegisterNativesAPetAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APetAIController);
	UClass* Z_Construct_UClass_APetAIController_NoRegister()
	{
		return APetAIController::StaticClass();
	}
	struct Z_Construct_UClass_APetAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BehaviorTree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlackboardData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APetAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_UrrFarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APetAIController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetAIController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI/PetAIController.h" },
		{ "ModuleRelativePath", "Public/AI/PetAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetAIController_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/PetAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APetAIController_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetAIController, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetAIController_Statics::NewProp_BehaviorTree_MetaData), Z_Construct_UClass_APetAIController_Statics::NewProp_BehaviorTree_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APetAIController_Statics::NewProp_BlackboardData_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Behavior Tree\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/AI/PetAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Behavior Tree\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APetAIController_Statics::NewProp_BlackboardData = { "BlackboardData", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APetAIController, BlackboardData), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetAIController_Statics::NewProp_BlackboardData_MetaData), Z_Construct_UClass_APetAIController_Statics::NewProp_BlackboardData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APetAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetAIController_Statics::NewProp_BehaviorTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APetAIController_Statics::NewProp_BlackboardData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APetAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APetAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APetAIController_Statics::ClassParams = {
		&APetAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APetAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APetAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APetAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_APetAIController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APetAIController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APetAIController()
	{
		if (!Z_Registration_Info_UClass_APetAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APetAIController.OuterSingleton, Z_Construct_UClass_APetAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APetAIController.OuterSingleton;
	}
	template<> URRFARM_API UClass* StaticClass<APetAIController>()
	{
		return APetAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APetAIController);
	APetAIController::~APetAIController() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_AI_PetAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_AI_PetAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APetAIController, APetAIController::StaticClass, TEXT("APetAIController"), &Z_Registration_Info_UClass_APetAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APetAIController), 1025346251U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_AI_PetAIController_h_4131595836(TEXT("/Script/UrrFarm"),
		Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_AI_PetAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_AI_PetAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
