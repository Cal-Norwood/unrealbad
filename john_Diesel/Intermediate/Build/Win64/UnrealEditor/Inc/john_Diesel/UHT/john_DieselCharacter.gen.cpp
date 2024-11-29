// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "john_Diesel/john_DieselCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodejohn_DieselCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	JOHN_DIESEL_API UClass* Z_Construct_UClass_Ajohn_DieselCharacter();
	JOHN_DIESEL_API UClass* Z_Construct_UClass_Ajohn_DieselCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_john_Diesel();
// End Cross Module References
	DEFINE_FUNCTION(Ajohn_DieselCharacter::execSetupNormalMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupNormalMovement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Ajohn_DieselCharacter::execSetupSpaceMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupSpaceMovement();
		P_NATIVE_END;
	}
	void Ajohn_DieselCharacter::StaticRegisterNativesAjohn_DieselCharacter()
	{
		UClass* Class = Ajohn_DieselCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetupNormalMovement", &Ajohn_DieselCharacter::execSetupNormalMovement },
			{ "SetupSpaceMovement", &Ajohn_DieselCharacter::execSetupSpaceMovement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Ajohn_DieselCharacter_SetupNormalMovement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ajohn_DieselCharacter_SetupNormalMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "john_DieselCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Ajohn_DieselCharacter_SetupNormalMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Ajohn_DieselCharacter, nullptr, "SetupNormalMovement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Ajohn_DieselCharacter_SetupNormalMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Ajohn_DieselCharacter_SetupNormalMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Ajohn_DieselCharacter_SetupNormalMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Ajohn_DieselCharacter_SetupNormalMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Ajohn_DieselCharacter_SetupSpaceMovement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ajohn_DieselCharacter_SetupSpaceMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "john_DieselCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Ajohn_DieselCharacter_SetupSpaceMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Ajohn_DieselCharacter, nullptr, "SetupSpaceMovement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Ajohn_DieselCharacter_SetupSpaceMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Ajohn_DieselCharacter_SetupSpaceMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Ajohn_DieselCharacter_SetupSpaceMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Ajohn_DieselCharacter_SetupSpaceMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Ajohn_DieselCharacter);
	UClass* Z_Construct_UClass_Ajohn_DieselCharacter_NoRegister()
	{
		return Ajohn_DieselCharacter::StaticClass();
	}
	struct Z_Construct_UClass_Ajohn_DieselCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RollAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerSpaceAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_playerSpaceAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ajohn_DieselCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_john_Diesel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Ajohn_DieselCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Ajohn_DieselCharacter_SetupNormalMovement, "SetupNormalMovement" }, // 803671620
		{ &Z_Construct_UFunction_Ajohn_DieselCharacter_SetupSpaceMovement, "SetupSpaceMovement" }, // 1712563956
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ajohn_DieselCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "john_DieselCharacter.h" },
		{ "ModuleRelativePath", "john_DieselCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "john_DieselCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ajohn_DieselCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "john_DieselCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ajohn_DieselCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** MappingContext */" },
		{ "ModuleRelativePath", "john_DieselCharacter.h" },
		{ "ToolTip", "MappingContext" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ajohn_DieselCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_DefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Jump Input Action */" },
		{ "ModuleRelativePath", "john_DieselCharacter.h" },
		{ "ToolTip", "Jump Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ajohn_DieselCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_JumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_JumpAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Move Input Action */" },
		{ "ModuleRelativePath", "john_DieselCharacter.h" },
		{ "ToolTip", "Move Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ajohn_DieselCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_RollAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "john_DieselCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_RollAction = { "RollAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ajohn_DieselCharacter, RollAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_RollAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_RollAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_playerSpaceAcceleration_MetaData[] = {
		{ "Category", "john_DieselCharacter" },
		{ "ModuleRelativePath", "john_DieselCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_playerSpaceAcceleration = { "playerSpaceAcceleration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ajohn_DieselCharacter, playerSpaceAcceleration), METADATA_PARAMS(Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_playerSpaceAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_playerSpaceAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Look Input Action */" },
		{ "ModuleRelativePath", "john_DieselCharacter.h" },
		{ "ToolTip", "Look Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ajohn_DieselCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_LookAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Ajohn_DieselCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_RollAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_playerSpaceAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ajohn_DieselCharacter_Statics::NewProp_LookAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ajohn_DieselCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ajohn_DieselCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Ajohn_DieselCharacter_Statics::ClassParams = {
		&Ajohn_DieselCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Ajohn_DieselCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Ajohn_DieselCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Ajohn_DieselCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Ajohn_DieselCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Ajohn_DieselCharacter()
	{
		if (!Z_Registration_Info_UClass_Ajohn_DieselCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Ajohn_DieselCharacter.OuterSingleton, Z_Construct_UClass_Ajohn_DieselCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Ajohn_DieselCharacter.OuterSingleton;
	}
	template<> JOHN_DIESEL_API UClass* StaticClass<Ajohn_DieselCharacter>()
	{
		return Ajohn_DieselCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ajohn_DieselCharacter);
	Ajohn_DieselCharacter::~Ajohn_DieselCharacter() {}
	struct Z_CompiledInDeferFile_FID_Cal_Norwood_Documents_Github_unrealbad_john_Diesel_Source_john_Diesel_john_DieselCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cal_Norwood_Documents_Github_unrealbad_john_Diesel_Source_john_Diesel_john_DieselCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Ajohn_DieselCharacter, Ajohn_DieselCharacter::StaticClass, TEXT("Ajohn_DieselCharacter"), &Z_Registration_Info_UClass_Ajohn_DieselCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Ajohn_DieselCharacter), 2561228330U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cal_Norwood_Documents_Github_unrealbad_john_Diesel_Source_john_Diesel_john_DieselCharacter_h_707424126(TEXT("/Script/john_Diesel"),
		Z_CompiledInDeferFile_FID_Cal_Norwood_Documents_Github_unrealbad_john_Diesel_Source_john_Diesel_john_DieselCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cal_Norwood_Documents_Github_unrealbad_john_Diesel_Source_john_Diesel_john_DieselCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
