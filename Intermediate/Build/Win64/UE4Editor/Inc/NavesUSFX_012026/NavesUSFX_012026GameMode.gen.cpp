// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX_012026/NavesUSFX_012026GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavesUSFX_012026GameMode() {}
// Cross Module References
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_ANavesUSFX_012026GameMode_NoRegister();
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_ANavesUSFX_012026GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX_012026();
// End Cross Module References
	void ANavesUSFX_012026GameMode::StaticRegisterNativesANavesUSFX_012026GameMode()
	{
	}
	UClass* Z_Construct_UClass_ANavesUSFX_012026GameMode_NoRegister()
	{
		return ANavesUSFX_012026GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPerseguirJugador_MetaData[];
#endif
		static void NewProp_bPerseguirJugador_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPerseguirJugador;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TiempoPersecucion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TiempoPersecucion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX_012026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NavesUSFX_012026GameMode.h" },
		{ "ModuleRelativePath", "NavesUSFX_012026GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::NewProp_bPerseguirJugador_MetaData[] = {
		{ "Category", "NavesUSFX_012026GameMode" },
		{ "Comment", "// controla si los enemigos persiguen\n" },
		{ "ModuleRelativePath", "NavesUSFX_012026GameMode.h" },
		{ "ToolTip", "controla si los enemigos persiguen" },
	};
#endif
	void Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::NewProp_bPerseguirJugador_SetBit(void* Obj)
	{
		((ANavesUSFX_012026GameMode*)Obj)->bPerseguirJugador = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::NewProp_bPerseguirJugador = { "bPerseguirJugador", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANavesUSFX_012026GameMode), &Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::NewProp_bPerseguirJugador_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::NewProp_bPerseguirJugador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::NewProp_bPerseguirJugador_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::NewProp_TiempoPersecucion_MetaData[] = {
		{ "Category", "NavesUSFX_012026GameMode" },
		{ "Comment", "// tiempo para activar persecuci?n\n" },
		{ "ModuleRelativePath", "NavesUSFX_012026GameMode.h" },
		{ "ToolTip", "tiempo para activar persecuci?n" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::NewProp_TiempoPersecucion = { "TiempoPersecucion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavesUSFX_012026GameMode, TiempoPersecucion), METADATA_PARAMS(Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::NewProp_TiempoPersecucion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::NewProp_TiempoPersecucion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::NewProp_bPerseguirJugador,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::NewProp_TiempoPersecucion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavesUSFX_012026GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::ClassParams = {
		&ANavesUSFX_012026GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavesUSFX_012026GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavesUSFX_012026GameMode, 2724311503);
	template<> NAVESUSFX_012026_API UClass* StaticClass<ANavesUSFX_012026GameMode>()
	{
		return ANavesUSFX_012026GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavesUSFX_012026GameMode(Z_Construct_UClass_ANavesUSFX_012026GameMode, &ANavesUSFX_012026GameMode::StaticClass, TEXT("/Script/NavesUSFX_012026"), TEXT("ANavesUSFX_012026GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavesUSFX_012026GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
