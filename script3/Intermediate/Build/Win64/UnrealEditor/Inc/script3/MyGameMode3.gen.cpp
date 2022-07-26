// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "script3/MyGameMode3.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameMode3() {}
// Cross Module References
	SCRIPT3_API UClass* Z_Construct_UClass_AMyGameMode3_NoRegister();
	SCRIPT3_API UClass* Z_Construct_UClass_AMyGameMode3();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_script3();
// End Cross Module References
	void AMyGameMode3::StaticRegisterNativesAMyGameMode3()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyGameMode3);
	UClass* Z_Construct_UClass_AMyGameMode3_NoRegister()
	{
		return AMyGameMode3::StaticClass();
	}
	struct Z_Construct_UClass_AMyGameMode3_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGameMode3_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_script3,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameMode3_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyGameMode3.h" },
		{ "ModuleRelativePath", "MyGameMode3.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGameMode3_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameMode3>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGameMode3_Statics::ClassParams = {
		&AMyGameMode3::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyGameMode3_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode3_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyGameMode3()
	{
		if (!Z_Registration_Info_UClass_AMyGameMode3.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGameMode3.OuterSingleton, Z_Construct_UClass_AMyGameMode3_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyGameMode3.OuterSingleton;
	}
	template<> SCRIPT3_API UClass* StaticClass<AMyGameMode3>()
	{
		return AMyGameMode3::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameMode3);
	struct Z_CompiledInDeferFile_FID_script3_Source_script3_MyGameMode3_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_script3_Source_script3_MyGameMode3_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyGameMode3, AMyGameMode3::StaticClass, TEXT("AMyGameMode3"), &Z_Registration_Info_UClass_AMyGameMode3, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGameMode3), 1533505027U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_script3_Source_script3_MyGameMode3_h_596410948(TEXT("/Script/script3"),
		Z_CompiledInDeferFile_FID_script3_Source_script3_MyGameMode3_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_script3_Source_script3_MyGameMode3_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
