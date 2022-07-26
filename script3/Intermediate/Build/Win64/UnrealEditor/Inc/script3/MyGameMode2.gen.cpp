// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "script3/MyGameMode2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameMode2() {}
// Cross Module References
	SCRIPT3_API UClass* Z_Construct_UClass_AMyGameMode2_NoRegister();
	SCRIPT3_API UClass* Z_Construct_UClass_AMyGameMode2();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_script3();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	void AMyGameMode2::StaticRegisterNativesAMyGameMode2()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyGameMode2);
	UClass* Z_Construct_UClass_AMyGameMode2_NoRegister()
	{
		return AMyGameMode2::StaticClass();
	}
	struct Z_Construct_UClass_AMyGameMode2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnbleHealth_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SpawnbleHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawnX_MIN_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_spawnX_MIN;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawnX_MAX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_spawnX_MAX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawnY_MIN_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_spawnY_MIN;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawnY_MAX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_spawnY_MAX;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGameMode2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_script3,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameMode2_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyGameMode2.h" },
		{ "ModuleRelativePath", "MyGameMode2.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameMode2_Statics::NewProp_SpawnbleHealth_MetaData[] = {
		{ "Category", "MyGameMode2" },
		{ "ModuleRelativePath", "MyGameMode2.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyGameMode2_Statics::NewProp_SpawnbleHealth = { "SpawnbleHealth", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameMode2, SpawnbleHealth), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyGameMode2_Statics::NewProp_SpawnbleHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode2_Statics::NewProp_SpawnbleHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameMode2_Statics::NewProp_spawnX_MIN_MetaData[] = {
		{ "Category", "MyGameMode2" },
		{ "ModuleRelativePath", "MyGameMode2.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyGameMode2_Statics::NewProp_spawnX_MIN = { "spawnX_MIN", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameMode2, spawnX_MIN), METADATA_PARAMS(Z_Construct_UClass_AMyGameMode2_Statics::NewProp_spawnX_MIN_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode2_Statics::NewProp_spawnX_MIN_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameMode2_Statics::NewProp_spawnX_MAX_MetaData[] = {
		{ "Category", "MyGameMode2" },
		{ "ModuleRelativePath", "MyGameMode2.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyGameMode2_Statics::NewProp_spawnX_MAX = { "spawnX_MAX", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameMode2, spawnX_MAX), METADATA_PARAMS(Z_Construct_UClass_AMyGameMode2_Statics::NewProp_spawnX_MAX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode2_Statics::NewProp_spawnX_MAX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameMode2_Statics::NewProp_spawnY_MIN_MetaData[] = {
		{ "Category", "MyGameMode2" },
		{ "ModuleRelativePath", "MyGameMode2.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyGameMode2_Statics::NewProp_spawnY_MIN = { "spawnY_MIN", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameMode2, spawnY_MIN), METADATA_PARAMS(Z_Construct_UClass_AMyGameMode2_Statics::NewProp_spawnY_MIN_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode2_Statics::NewProp_spawnY_MIN_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameMode2_Statics::NewProp_spawnY_MAX_MetaData[] = {
		{ "Category", "MyGameMode2" },
		{ "ModuleRelativePath", "MyGameMode2.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyGameMode2_Statics::NewProp_spawnY_MAX = { "spawnY_MAX", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameMode2, spawnY_MAX), METADATA_PARAMS(Z_Construct_UClass_AMyGameMode2_Statics::NewProp_spawnY_MAX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode2_Statics::NewProp_spawnY_MAX_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGameMode2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameMode2_Statics::NewProp_SpawnbleHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameMode2_Statics::NewProp_spawnX_MIN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameMode2_Statics::NewProp_spawnX_MAX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameMode2_Statics::NewProp_spawnY_MIN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameMode2_Statics::NewProp_spawnY_MAX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGameMode2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameMode2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGameMode2_Statics::ClassParams = {
		&AMyGameMode2::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyGameMode2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode2_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyGameMode2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyGameMode2()
	{
		if (!Z_Registration_Info_UClass_AMyGameMode2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGameMode2.OuterSingleton, Z_Construct_UClass_AMyGameMode2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyGameMode2.OuterSingleton;
	}
	template<> SCRIPT3_API UClass* StaticClass<AMyGameMode2>()
	{
		return AMyGameMode2::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameMode2);
	struct Z_CompiledInDeferFile_FID_script3_Source_script3_MyGameMode2_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_script3_Source_script3_MyGameMode2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyGameMode2, AMyGameMode2::StaticClass, TEXT("AMyGameMode2"), &Z_Registration_Info_UClass_AMyGameMode2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGameMode2), 9700641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_script3_Source_script3_MyGameMode2_h_483938792(TEXT("/Script/script3"),
		Z_CompiledInDeferFile_FID_script3_Source_script3_MyGameMode2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_script3_Source_script3_MyGameMode2_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
