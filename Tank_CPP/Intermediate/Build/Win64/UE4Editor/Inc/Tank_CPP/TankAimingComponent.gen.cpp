// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tank_CPP/Public/TankAimingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankAimingComponent() {}
// Cross Module References
	TANK_CPP_API UClass* Z_Construct_UClass_ATankAimingComponent_NoRegister();
	TANK_CPP_API UClass* Z_Construct_UClass_ATankAimingComponent();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Tank_CPP();
// End Cross Module References
	void ATankAimingComponent::StaticRegisterNativesATankAimingComponent()
	{
	}
	UClass* Z_Construct_UClass_ATankAimingComponent_NoRegister()
	{
		return ATankAimingComponent::StaticClass();
	}
	struct Z_Construct_UClass_ATankAimingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankAimingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tank_CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankAimingComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TankAimingComponent.h" },
		{ "ModuleRelativePath", "Public/TankAimingComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankAimingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankAimingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATankAimingComponent_Statics::ClassParams = {
		&ATankAimingComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATankAimingComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATankAimingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankAimingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATankAimingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATankAimingComponent, 707576699);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankAimingComponent(Z_Construct_UClass_ATankAimingComponent, &ATankAimingComponent::StaticClass, TEXT("/Script/Tank_CPP"), TEXT("ATankAimingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankAimingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
