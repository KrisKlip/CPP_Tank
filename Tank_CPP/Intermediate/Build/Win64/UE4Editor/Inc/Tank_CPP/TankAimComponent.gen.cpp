// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tank_CPP/Public/TankAimComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankAimComponent() {}
// Cross Module References
	TANK_CPP_API UClass* Z_Construct_UClass_UTankAimComponent_NoRegister();
	TANK_CPP_API UClass* Z_Construct_UClass_UTankAimComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Tank_CPP();
// End Cross Module References
	void UTankAimComponent::StaticRegisterNativesUTankAimComponent()
	{
	}
	UClass* Z_Construct_UClass_UTankAimComponent_NoRegister()
	{
		return UTankAimComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTankAimComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTankAimComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Tank_CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankAimComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TankAimComponent.h" },
		{ "ModuleRelativePath", "Public/TankAimComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTankAimComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTankAimComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTankAimComponent_Statics::ClassParams = {
		&UTankAimComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		nullptr, 0,
		nullptr, 0,
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTankAimComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTankAimComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTankAimComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTankAimComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankAimComponent, 3732179408);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankAimComponent(Z_Construct_UClass_UTankAimComponent, &UTankAimComponent::StaticClass, TEXT("/Script/Tank_CPP"), TEXT("UTankAimComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankAimComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
