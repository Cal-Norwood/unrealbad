// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "john_Diesel/Private/Ship.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShip() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	JOHN_DIESEL_API UClass* Z_Construct_UClass_AShip();
	JOHN_DIESEL_API UClass* Z_Construct_UClass_AShip_NoRegister();
	UPackage* Z_Construct_UPackage__Script_john_Diesel();
// End Cross Module References
	void AShip::StaticRegisterNativesAShip()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShip);
	UClass* Z_Construct_UClass_AShip_NoRegister()
	{
		return AShip::StaticClass();
	}
	struct Z_Construct_UClass_AShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shipName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_shipName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_fuelTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fuelTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_fuelTypes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_selectedFuels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_selectedFuels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_selectedFuels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_amountOfFuelTypes_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_amountOfFuelTypes;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_requiredFuelAmounts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_requiredFuelAmounts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_requiredFuelAmounts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShipSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShipSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DockPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DockPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_john_Diesel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Ship.h" },
		{ "ModuleRelativePath", "Private/Ship.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_shipName_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Private/Ship.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_shipName = { "shipName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, shipName), METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_shipName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_shipName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_fuelTypes_Inner = { "fuelTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_fuelTypes_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Private/Ship.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_fuelTypes = { "fuelTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, fuelTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_fuelTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_fuelTypes_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_selectedFuels_Inner = { "selectedFuels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_selectedFuels_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Private/Ship.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_selectedFuels = { "selectedFuels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, selectedFuels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_selectedFuels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_selectedFuels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_amountOfFuelTypes_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Private/Ship.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_amountOfFuelTypes = { "amountOfFuelTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, amountOfFuelTypes), METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_amountOfFuelTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_amountOfFuelTypes_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_requiredFuelAmounts_Inner = { "requiredFuelAmounts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_requiredFuelAmounts_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Private/Ship.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_requiredFuelAmounts = { "requiredFuelAmounts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, requiredFuelAmounts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_requiredFuelAmounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_requiredFuelAmounts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_ShipSpeed_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Private/Ship.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_ShipSpeed = { "ShipSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, ShipSpeed), METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_ShipSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_ShipSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_DockPosition_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Private/Ship.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_DockPosition = { "DockPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, DockPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_DockPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_DockPosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_shipName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_fuelTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_fuelTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_selectedFuels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_selectedFuels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_amountOfFuelTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_requiredFuelAmounts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_requiredFuelAmounts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_ShipSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_DockPosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShip>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShip_Statics::ClassParams = {
		&AShip::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShip()
	{
		if (!Z_Registration_Info_UClass_AShip.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShip.OuterSingleton, Z_Construct_UClass_AShip_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShip.OuterSingleton;
	}
	template<> JOHN_DIESEL_API UClass* StaticClass<AShip>()
	{
		return AShip::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShip);
	AShip::~AShip() {}
	struct Z_CompiledInDeferFile_FID_SpaceTruck_unrealbad_john_Diesel_Source_john_Diesel_Private_Ship_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceTruck_unrealbad_john_Diesel_Source_john_Diesel_Private_Ship_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShip, AShip::StaticClass, TEXT("AShip"), &Z_Registration_Info_UClass_AShip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShip), 3523179038U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceTruck_unrealbad_john_Diesel_Source_john_Diesel_Private_Ship_h_3114256583(TEXT("/Script/john_Diesel"),
		Z_CompiledInDeferFile_FID_SpaceTruck_unrealbad_john_Diesel_Source_john_Diesel_Private_Ship_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpaceTruck_unrealbad_john_Diesel_Source_john_Diesel_Private_Ship_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
