// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LocalMultiplayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef LOCALMULTIPLAYER_LocalMultiplayerCharacter_generated_h
#error "LocalMultiplayerCharacter.generated.h already included, missing '#pragma once' in LocalMultiplayerCharacter.h"
#endif
#define LOCALMULTIPLAYER_LocalMultiplayerCharacter_generated_h

#define FID_Users_Guillem_Desktop_UNI_LearnCourseC___ProvesUnreal2_LocalMultiplayer_Source_LocalMultiplayer_LocalMultiplayerCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execOnAttackHit); \
	DECLARE_FUNCTION(execPerformAttack);


#define FID_Users_Guillem_Desktop_UNI_LearnCourseC___ProvesUnreal2_LocalMultiplayer_Source_LocalMultiplayer_LocalMultiplayerCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALocalMultiplayerCharacter(); \
	friend struct Z_Construct_UClass_ALocalMultiplayerCharacter_Statics; \
public: \
	DECLARE_CLASS(ALocalMultiplayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LocalMultiplayer"), NO_API) \
	DECLARE_SERIALIZER(ALocalMultiplayerCharacter)


#define FID_Users_Guillem_Desktop_UNI_LearnCourseC___ProvesUnreal2_LocalMultiplayer_Source_LocalMultiplayer_LocalMultiplayerCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALocalMultiplayerCharacter(ALocalMultiplayerCharacter&&); \
	ALocalMultiplayerCharacter(const ALocalMultiplayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALocalMultiplayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALocalMultiplayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALocalMultiplayerCharacter) \
	NO_API virtual ~ALocalMultiplayerCharacter();


#define FID_Users_Guillem_Desktop_UNI_LearnCourseC___ProvesUnreal2_LocalMultiplayer_Source_LocalMultiplayer_LocalMultiplayerCharacter_h_18_PROLOG
#define FID_Users_Guillem_Desktop_UNI_LearnCourseC___ProvesUnreal2_LocalMultiplayer_Source_LocalMultiplayer_LocalMultiplayerCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Guillem_Desktop_UNI_LearnCourseC___ProvesUnreal2_LocalMultiplayer_Source_LocalMultiplayer_LocalMultiplayerCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Guillem_Desktop_UNI_LearnCourseC___ProvesUnreal2_LocalMultiplayer_Source_LocalMultiplayer_LocalMultiplayerCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_Guillem_Desktop_UNI_LearnCourseC___ProvesUnreal2_LocalMultiplayer_Source_LocalMultiplayer_LocalMultiplayerCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOCALMULTIPLAYER_API UClass* StaticClass<class ALocalMultiplayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Guillem_Desktop_UNI_LearnCourseC___ProvesUnreal2_LocalMultiplayer_Source_LocalMultiplayer_LocalMultiplayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
