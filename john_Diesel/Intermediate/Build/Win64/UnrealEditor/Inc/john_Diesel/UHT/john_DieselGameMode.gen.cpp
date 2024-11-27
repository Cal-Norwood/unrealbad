// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "john_Diesel/john_DieselGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodejohn_DieselGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	JOHN_DIESEL_API UClass* Z_Construct_UClass_Ajohn_DieselGameMode();
	JOHN_DIESEL_API UClass* Z_Construct_UClass_Ajohn_DieselGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_john_Diesel();
// End Cross Module References
	void Ajohn_DieselGameMode::StaticRegisterNativesAjohn_DieselGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Ajohn_DieselGameMode);
	UClass* Z_Construct_UClass_Ajohn_DieselGameMode_NoRegister()
	{
		return Ajohn_DieselGameMode::StaticClass();
	}
	struct Z_Construct_UClass_Ajohn_DieselGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ajohn_DieselGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_john_Diesel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ajohn_DieselGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "john_DieselGameMode.h" },
		{ "ModuleRelativePath", "john_DieselGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ajohn_DieselGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ajohn_DieselGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Ajohn_DieselGameMode_Statics::ClassParams = {
		&Ajohn_DieselGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_Ajohn_DieselGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Ajohn_DieselGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Ajohn_DieselGameMode()
	{
		if (!Z_Registration_Info_UClass_Ajohn_DieselGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Ajohn_DieselGameMode.OuterSingleton, Z_Construct_UClass_Ajohn_DieselGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Ajohn_DieselGameMode.OuterSingleton;
	}
	template<> JOHN_DIESEL_API UClass* StaticClass<Ajohn_DieselGameMode>()
	{
		return Ajohn_DieselGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ajohn_DieselGameMode);
	Ajohn_DieselGameMode::~Ajohn_DieselGameMode() {}
	struct Z_CompiledInDeferFile_FID_Cal_Norwood_Documents_john_Diesel_Source_john_Diesel_john_DieselGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cal_Norwood_Documents_john_Diesel_Source_john_Diesel_john_DieselGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Ajohn_DieselGameMode, Ajohn_DieselGameMode::StaticClass, TEXT("Ajohn_DieselGameMode"), &Z_Registration_Info_UClass_Ajohn_DieselGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Ajohn_DieselGameMode), 1767828864U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cal_Norwood_Documents_john_Diesel_Source_john_Diesel_john_DieselGameMode_h_2878694346(TEXT("/Script/john_Diesel"),
		Z_CompiledInDeferFile_FID_Cal_Norwood_Documents_john_Diesel_Source_john_Diesel_john_DieselGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cal_Norwood_Documents_john_Diesel_Source_john_Diesel_john_DieselGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
