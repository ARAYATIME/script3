// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "script3/script3GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodescript3GameMode() {}
// Cross Module References
	SCRIPT3_API UClass* Z_Construct_UClass_Ascript3GameMode_NoRegister();
	SCRIPT3_API UClass* Z_Construct_UClass_Ascript3GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_script3();
// End Cross Module References
	void Ascript3GameMode::StaticRegisterNativesAscript3GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Ascript3GameMode);
	UClass* Z_Construct_UClass_Ascript3GameMode_NoRegister()
	{
		return Ascript3GameMode::StaticClass();
	}
	struct Z_Construct_UClass_Ascript3GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ascript3GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_script3,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ascript3GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "script3GameMode.h" },
		{ "ModuleRelativePath", "script3GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ascript3GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ascript3GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Ascript3GameMode_Statics::ClassParams = {
		&Ascript3GameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Ascript3GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Ascript3GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Ascript3GameMode()
	{
		if (!Z_Registration_Info_UClass_Ascript3GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Ascript3GameMode.OuterSingleton, Z_Construct_UClass_Ascript3GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Ascript3GameMode.OuterSingleton;
	}
	template<> SCRIPT3_API UClass* StaticClass<Ascript3GameMode>()
	{
		return Ascript3GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ascript3GameMode);
	struct Z_CompiledInDeferFile_FID_script3_Source_script3_script3GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_script3_Source_script3_script3GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Ascript3GameMode, Ascript3GameMode::StaticClass, TEXT("Ascript3GameMode"), &Z_Registration_Info_UClass_Ascript3GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Ascript3GameMode), 2229249458U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_script3_Source_script3_script3GameMode_h_3652605565(TEXT("/Script/script3"),
		Z_CompiledInDeferFile_FID_script3_Source_script3_script3GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_script3_Source_script3_script3GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
