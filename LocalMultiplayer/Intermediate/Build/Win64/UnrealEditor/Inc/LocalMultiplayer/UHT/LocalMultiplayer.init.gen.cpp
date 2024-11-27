// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalMultiplayer_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LocalMultiplayer;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LocalMultiplayer()
	{
		if (!Z_Registration_Info_UPackage__Script_LocalMultiplayer.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LocalMultiplayer",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xA439F96A,
				0x4FF2D4E4,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LocalMultiplayer.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LocalMultiplayer.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LocalMultiplayer(Z_Construct_UPackage__Script_LocalMultiplayer, TEXT("/Script/LocalMultiplayer"), Z_Registration_Info_UPackage__Script_LocalMultiplayer, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA439F96A, 0x4FF2D4E4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
