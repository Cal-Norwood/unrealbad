// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "john_DieselProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef JOHN_DIESEL_john_DieselProjectile_generated_h
#error "john_DieselProjectile.generated.h already included, missing '#pragma once' in john_DieselProjectile.h"
#endif
#define JOHN_DIESEL_john_DieselProjectile_generated_h

#define FID_Cal_Norwood_Documents_john_Diesel_Source_john_Diesel_john_DieselProjectile_h_15_SPARSE_DATA
#define FID_Cal_Norwood_Documents_john_Diesel_Source_john_Diesel_john_DieselProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Cal_Norwood_Documents_john_Diesel_Source_john_Diesel_john_DieselProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Cal_Norwood_Documents_john_Diesel_Source_john_Diesel_john_DieselProjectile_h_15_ACCESSORS
#define FID_Cal_Norwood_Documents_john_Diesel_Source_john_Diesel_john_DieselProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAjohn_DieselProjectile(); \
	friend struct Z_Construct_UClass_Ajohn_DieselProjectile_Statics; \
public: \
	DECLARE_CLASS(Ajohn_DieselProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/john_Diesel"), NO_API) \
	DECLARE_SERIALIZER(Ajohn_DieselProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Cal_Norwood_Documents_john_Diesel_Source_john_Diesel_john_DieselProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAjohn_DieselProjectile(); \
	friend struct Z_Construct_UClass_Ajohn_DieselProjectile_Statics; \
public: \
	DECLARE_CLASS(Ajohn_DieselProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/john_Diesel"), NO_API) \
	DECLARE_SERIALIZER(Ajohn_DieselProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Cal_Norwood_Documents_john_Diesel_Source_john_Diesel_john_DieselProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Ajohn_DieselProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Ajohn_DieselProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Ajohn_DieselProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Ajohn_DieselProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Ajohn_DieselProjectile(Ajohn_DieselProjectile&&); \
	NO_API Ajohn_DieselProjectile(const Ajohn_DieselProjectile&); \
public: \
	NO_API virtual ~Ajohn_DieselProjectile();


#define FID_Cal_Norwood_Documents_john_Diesel_Source_john_Diesel_john_DieselProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Ajohn_DieselProjectile(Ajohn_DieselProjectile&&); \
	NO_API Ajohn_DieselProjectile(const Ajohn_DieselProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Ajohn_DieselProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Ajohn_DieselProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Ajohn_DieselProjectile) \
	NO_API virtual ~Ajohn_DieselProjectile();


#define FID_Cal_Norwood_Documents_john_Diesel_Source_john_Diesel_john_DieselProjectile_h_12_PROLOG
#define FID_Cal_Norwood_Documents_john_Diesel_Source_john_Diesel_john_DieselProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Cal_Norwood_Documents_john_Diesel_Source_john_Diesel_john_DieselProjectile_h_15_SPARSE_DATA \
	FID_Cal_Norwood_Documents_john_Diesel_Source_john_Diesel_john_DieselProjectile_h_15_RPC_WRAPPERS \
	FID_Cal_Norwood_Documents_john_Diesel_Source_john_Diesel_john_DieselProjectile_h_15_ACCESSORS \
	FID_Cal_Norwood_Documents_john_Diesel_Source_john_Diesel_john_DieselProjectile_h_15_INCLASS \
	FID_Cal_Norwood_Documents_john_Diesel_Source_john_Diesel_john_DieselProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Cal_Norwood_Documents_john_Diesel_Source_john_Diesel_john_DieselProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Cal_Norwood_Documents_john_Diesel_Source_john_Diesel_john_DieselProjectile_h_15_SPARSE_DATA \
	FID_Cal_Norwood_Documents_john_Diesel_Source_john_Diesel_john_DieselProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Cal_Norwood_Documents_john_Diesel_Source_john_Diesel_john_DieselProjectile_h_15_ACCESSORS \
	FID_Cal_Norwood_Documents_john_Diesel_Source_john_Diesel_john_DieselProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Cal_Norwood_Documents_john_Diesel_Source_john_Diesel_john_DieselProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JOHN_DIESEL_API UClass* StaticClass<class Ajohn_DieselProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Cal_Norwood_Documents_john_Diesel_Source_john_Diesel_john_DieselProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
