// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTankBarrel;
#ifdef TANK_CPP_Tank_generated_h
#error "Tank.generated.h already included, missing '#pragma once' in Tank.h"
#endif
#define TANK_CPP_Tank_generated_h

#define Tank_CPP_Source_Tank_CPP_Public_Tank_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBarrelReference) \
	{ \
		P_GET_OBJECT(UTankBarrel,Z_Param_BarrelToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBarrelReference(Z_Param_BarrelToSet); \
		P_NATIVE_END; \
	}


#define Tank_CPP_Source_Tank_CPP_Public_Tank_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBarrelReference) \
	{ \
		P_GET_OBJECT(UTankBarrel,Z_Param_BarrelToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBarrelReference(Z_Param_BarrelToSet); \
		P_NATIVE_END; \
	}


#define Tank_CPP_Source_Tank_CPP_Public_Tank_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATank(); \
	friend struct Z_Construct_UClass_ATank_Statics; \
public: \
	DECLARE_CLASS(ATank, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tank_CPP"), NO_API) \
	DECLARE_SERIALIZER(ATank)


#define Tank_CPP_Source_Tank_CPP_Public_Tank_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATank(); \
	friend struct Z_Construct_UClass_ATank_Statics; \
public: \
	DECLARE_CLASS(ATank, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tank_CPP"), NO_API) \
	DECLARE_SERIALIZER(ATank)


#define Tank_CPP_Source_Tank_CPP_Public_Tank_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATank(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATank) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATank); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATank); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATank(ATank&&); \
	NO_API ATank(const ATank&); \
public:


#define Tank_CPP_Source_Tank_CPP_Public_Tank_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATank(ATank&&); \
	NO_API ATank(const ATank&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATank); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATank); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATank)


#define Tank_CPP_Source_Tank_CPP_Public_Tank_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LaunchSpeed() { return STRUCT_OFFSET(ATank, LaunchSpeed); }


#define Tank_CPP_Source_Tank_CPP_Public_Tank_h_12_PROLOG
#define Tank_CPP_Source_Tank_CPP_Public_Tank_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tank_CPP_Source_Tank_CPP_Public_Tank_h_15_PRIVATE_PROPERTY_OFFSET \
	Tank_CPP_Source_Tank_CPP_Public_Tank_h_15_RPC_WRAPPERS \
	Tank_CPP_Source_Tank_CPP_Public_Tank_h_15_INCLASS \
	Tank_CPP_Source_Tank_CPP_Public_Tank_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tank_CPP_Source_Tank_CPP_Public_Tank_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tank_CPP_Source_Tank_CPP_Public_Tank_h_15_PRIVATE_PROPERTY_OFFSET \
	Tank_CPP_Source_Tank_CPP_Public_Tank_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Tank_CPP_Source_Tank_CPP_Public_Tank_h_15_INCLASS_NO_PURE_DECLS \
	Tank_CPP_Source_Tank_CPP_Public_Tank_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tank_CPP_Source_Tank_CPP_Public_Tank_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
