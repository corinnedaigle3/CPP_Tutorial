// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPlusPlusTutorial1_init() {}
	CPLUSPLUSTUTORIAL1_API UFunction* Z_Construct_UDelegateFunction_CPlusPlusTutorial1_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CPlusPlusTutorial1;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CPlusPlusTutorial1()
	{
		if (!Z_Registration_Info_UPackage__Script_CPlusPlusTutorial1.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CPlusPlusTutorial1_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CPlusPlusTutorial1",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x67C9F2EF,
				0x1882DA80,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CPlusPlusTutorial1.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CPlusPlusTutorial1.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CPlusPlusTutorial1(Z_Construct_UPackage__Script_CPlusPlusTutorial1, TEXT("/Script/CPlusPlusTutorial1"), Z_Registration_Info_UPackage__Script_CPlusPlusTutorial1, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x67C9F2EF, 0x1882DA80));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
