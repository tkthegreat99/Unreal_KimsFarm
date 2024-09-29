// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UrrFarm/Public/Animation/MainCharacterAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainCharacterAnimInstance() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_UrrFarm();
	URRFARM_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
	URRFARM_API UClass* Z_Construct_UClass_UMainCharacterAnimInstance();
	URRFARM_API UClass* Z_Construct_UClass_UMainCharacterAnimInstance_NoRegister();
// End Cross Module References
	void UMainCharacterAnimInstance::StaticRegisterNativesUMainCharacterAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainCharacterAnimInstance);
	UClass* Z_Construct_UClass_UMainCharacterAnimInstance_NoRegister()
	{
		return UMainCharacterAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMainCharacterAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[];
#endif
		static void NewProp_bIsInAir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAccelerating_MetaData[];
#endif
		static void NewProp_bIsAccelerating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAccelerating;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainCharacterAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_UrrFarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharacterAnimInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainCharacterAnimInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/MainCharacterAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animation/MainCharacterAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_Character_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Animation/MainCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0044000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainCharacterAnimInstance, Character), Z_Construct_UClass_AMainCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_Character_MetaData), Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_Character_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_CurrentSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Animation/MainCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_CurrentSpeed = { "CurrentSpeed", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainCharacterAnimInstance, CurrentSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_CurrentSpeed_MetaData), Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_CurrentSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_Velocity_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Animation/MainCharacterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainCharacterAnimInstance, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_Velocity_MetaData), Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_Velocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_bIsInAir_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Animation/MainCharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_bIsInAir_SetBit(void* Obj)
	{
		((UMainCharacterAnimInstance*)Obj)->bIsInAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMainCharacterAnimInstance), &Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_bIsInAir_MetaData), Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_bIsInAir_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_bIsAccelerating_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Animation/MainCharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_bIsAccelerating_SetBit(void* Obj)
	{
		((UMainCharacterAnimInstance*)Obj)->bIsAccelerating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_bIsAccelerating = { "bIsAccelerating", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMainCharacterAnimInstance), &Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_bIsAccelerating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_bIsAccelerating_MetaData), Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_bIsAccelerating_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainCharacterAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_CurrentSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_bIsInAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_bIsAccelerating,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainCharacterAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainCharacterAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainCharacterAnimInstance_Statics::ClassParams = {
		&UMainCharacterAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMainCharacterAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharacterAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharacterAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainCharacterAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharacterAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMainCharacterAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UMainCharacterAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainCharacterAnimInstance.OuterSingleton, Z_Construct_UClass_UMainCharacterAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMainCharacterAnimInstance.OuterSingleton;
	}
	template<> URRFARM_API UClass* StaticClass<UMainCharacterAnimInstance>()
	{
		return UMainCharacterAnimInstance::StaticClass();
	}
	UMainCharacterAnimInstance::UMainCharacterAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainCharacterAnimInstance);
	UMainCharacterAnimInstance::~UMainCharacterAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Animation_MainCharacterAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Animation_MainCharacterAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMainCharacterAnimInstance, UMainCharacterAnimInstance::StaticClass, TEXT("UMainCharacterAnimInstance"), &Z_Registration_Info_UClass_UMainCharacterAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainCharacterAnimInstance), 1364460629U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Animation_MainCharacterAnimInstance_h_1214333836(TEXT("/Script/UrrFarm"),
		Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Animation_MainCharacterAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_KimsFarm_UrrFarm_Source_UrrFarm_Public_Animation_MainCharacterAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
