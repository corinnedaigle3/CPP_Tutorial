// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPlusPlusTutorial1GameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPlusPlusTutorial1GameMode() {}

// ********** Begin Cross Module References ********************************************************
CPLUSPLUSTUTORIAL1_API UClass* Z_Construct_UClass_ACPlusPlusTutorial1GameMode();
CPLUSPLUSTUTORIAL1_API UClass* Z_Construct_UClass_ACPlusPlusTutorial1GameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CPlusPlusTutorial1();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACPlusPlusTutorial1GameMode **********************************************
void ACPlusPlusTutorial1GameMode::StaticRegisterNativesACPlusPlusTutorial1GameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACPlusPlusTutorial1GameMode;
UClass* ACPlusPlusTutorial1GameMode::GetPrivateStaticClass()
{
	using TClass = ACPlusPlusTutorial1GameMode;
	if (!Z_Registration_Info_UClass_ACPlusPlusTutorial1GameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPlusPlusTutorial1GameMode"),
			Z_Registration_Info_UClass_ACPlusPlusTutorial1GameMode.InnerSingleton,
			StaticRegisterNativesACPlusPlusTutorial1GameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ACPlusPlusTutorial1GameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ACPlusPlusTutorial1GameMode_NoRegister()
{
	return ACPlusPlusTutorial1GameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACPlusPlusTutorial1GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CPlusPlusTutorial1GameMode.h" },
		{ "ModuleRelativePath", "CPlusPlusTutorial1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPlusPlusTutorial1GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACPlusPlusTutorial1GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CPlusPlusTutorial1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPlusPlusTutorial1GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPlusPlusTutorial1GameMode_Statics::ClassParams = {
	&ACPlusPlusTutorial1GameMode::StaticClass,
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
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPlusPlusTutorial1GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPlusPlusTutorial1GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPlusPlusTutorial1GameMode()
{
	if (!Z_Registration_Info_UClass_ACPlusPlusTutorial1GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPlusPlusTutorial1GameMode.OuterSingleton, Z_Construct_UClass_ACPlusPlusTutorial1GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPlusPlusTutorial1GameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPlusPlusTutorial1GameMode);
ACPlusPlusTutorial1GameMode::~ACPlusPlusTutorial1GameMode() {}
// ********** End Class ACPlusPlusTutorial1GameMode ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_corin_OneDrive_Desktop_YoutubeTutorials_CPP_Tutorial_CPlusPlusTutorial1_Source_CPlusPlusTutorial1_CPlusPlusTutorial1GameMode_h__Script_CPlusPlusTutorial1_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPlusPlusTutorial1GameMode, ACPlusPlusTutorial1GameMode::StaticClass, TEXT("ACPlusPlusTutorial1GameMode"), &Z_Registration_Info_UClass_ACPlusPlusTutorial1GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPlusPlusTutorial1GameMode), 1215855051U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_corin_OneDrive_Desktop_YoutubeTutorials_CPP_Tutorial_CPlusPlusTutorial1_Source_CPlusPlusTutorial1_CPlusPlusTutorial1GameMode_h__Script_CPlusPlusTutorial1_534467861(TEXT("/Script/CPlusPlusTutorial1"),
	Z_CompiledInDeferFile_FID_Users_corin_OneDrive_Desktop_YoutubeTutorials_CPP_Tutorial_CPlusPlusTutorial1_Source_CPlusPlusTutorial1_CPlusPlusTutorial1GameMode_h__Script_CPlusPlusTutorial1_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_corin_OneDrive_Desktop_YoutubeTutorials_CPP_Tutorial_CPlusPlusTutorial1_Source_CPlusPlusTutorial1_CPlusPlusTutorial1GameMode_h__Script_CPlusPlusTutorial1_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
