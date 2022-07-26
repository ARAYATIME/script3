// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SCRIPT3_MyCharacterclase_generated_h
#error "MyCharacterclase.generated.h already included, missing '#pragma once' in MyCharacterclase.h"
#endif
#define SCRIPT3_MyCharacterclase_generated_h

#define FID_script3_Source_script3_MyCharacterclase_h_23_SPARSE_DATA
#define FID_script3_Source_script3_MyCharacterclase_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_script3_Source_script3_MyCharacterclase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_script3_Source_script3_MyCharacterclase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacterclase(); \
	friend struct Z_Construct_UClass_AMyCharacterclase_Statics; \
public: \
	DECLARE_CLASS(AMyCharacterclase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/script3"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacterclase)


#define FID_script3_Source_script3_MyCharacterclase_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAMyCharacterclase(); \
	friend struct Z_Construct_UClass_AMyCharacterclase_Statics; \
public: \
	DECLARE_CLASS(AMyCharacterclase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/script3"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacterclase)


#define FID_script3_Source_script3_MyCharacterclase_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyCharacterclase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyCharacterclase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacterclase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacterclase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacterclase(AMyCharacterclase&&); \
	NO_API AMyCharacterclase(const AMyCharacterclase&); \
public:


#define FID_script3_Source_script3_MyCharacterclase_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacterclase(AMyCharacterclase&&); \
	NO_API AMyCharacterclase(const AMyCharacterclase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacterclase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacterclase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCharacterclase)


#define FID_script3_Source_script3_MyCharacterclase_h_20_PROLOG
#define FID_script3_Source_script3_MyCharacterclase_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_script3_Source_script3_MyCharacterclase_h_23_SPARSE_DATA \
	FID_script3_Source_script3_MyCharacterclase_h_23_RPC_WRAPPERS \
	FID_script3_Source_script3_MyCharacterclase_h_23_INCLASS \
	FID_script3_Source_script3_MyCharacterclase_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_script3_Source_script3_MyCharacterclase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_script3_Source_script3_MyCharacterclase_h_23_SPARSE_DATA \
	FID_script3_Source_script3_MyCharacterclase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_script3_Source_script3_MyCharacterclase_h_23_INCLASS_NO_PURE_DECLS \
	FID_script3_Source_script3_MyCharacterclase_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCRIPT3_API UClass* StaticClass<class AMyCharacterclase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_script3_Source_script3_MyCharacterclase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
