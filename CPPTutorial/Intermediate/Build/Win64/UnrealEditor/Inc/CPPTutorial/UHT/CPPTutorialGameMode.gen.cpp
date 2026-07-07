// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPPTutorialGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPPTutorialGameMode() {}

// ********** Begin Cross Module References ********************************************************
CPPTUTORIAL_API UClass* Z_Construct_UClass_ACPPTutorialGameMode();
CPPTUTORIAL_API UClass* Z_Construct_UClass_ACPPTutorialGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CPPTutorial();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACPPTutorialGameMode *****************************************************
void ACPPTutorialGameMode::StaticRegisterNativesACPPTutorialGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACPPTutorialGameMode;
UClass* ACPPTutorialGameMode::GetPrivateStaticClass()
{
	using TClass = ACPPTutorialGameMode;
	if (!Z_Registration_Info_UClass_ACPPTutorialGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPPTutorialGameMode"),
			Z_Registration_Info_UClass_ACPPTutorialGameMode.InnerSingleton,
			StaticRegisterNativesACPPTutorialGameMode,
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
	return Z_Registration_Info_UClass_ACPPTutorialGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ACPPTutorialGameMode_NoRegister()
{
	return ACPPTutorialGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACPPTutorialGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple Game Mode for a top-down perspective game\n *  Sets the default gameplay framework classes\n *  Check the Blueprint derived class for the set values\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CPPTutorialGameMode.h" },
		{ "ModuleRelativePath", "CPPTutorialGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple Game Mode for a top-down perspective game\nSets the default gameplay framework classes\nCheck the Blueprint derived class for the set values" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPPTutorialGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACPPTutorialGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CPPTutorial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPPTutorialGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPPTutorialGameMode_Statics::ClassParams = {
	&ACPPTutorialGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPPTutorialGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPPTutorialGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPPTutorialGameMode()
{
	if (!Z_Registration_Info_UClass_ACPPTutorialGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPPTutorialGameMode.OuterSingleton, Z_Construct_UClass_ACPPTutorialGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPPTutorialGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPPTutorialGameMode);
ACPPTutorialGameMode::~ACPPTutorialGameMode() {}
// ********** End Class ACPPTutorialGameMode *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_corin_OneDrive_Desktop_YoutubeTutorials_CPP_Tutorial_CPPTutorial_Source_CPPTutorial_CPPTutorialGameMode_h__Script_CPPTutorial_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPPTutorialGameMode, ACPPTutorialGameMode::StaticClass, TEXT("ACPPTutorialGameMode"), &Z_Registration_Info_UClass_ACPPTutorialGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPPTutorialGameMode), 401224649U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_corin_OneDrive_Desktop_YoutubeTutorials_CPP_Tutorial_CPPTutorial_Source_CPPTutorial_CPPTutorialGameMode_h__Script_CPPTutorial_845531770(TEXT("/Script/CPPTutorial"),
	Z_CompiledInDeferFile_FID_Users_corin_OneDrive_Desktop_YoutubeTutorials_CPP_Tutorial_CPPTutorial_Source_CPPTutorial_CPPTutorialGameMode_h__Script_CPPTutorial_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_corin_OneDrive_Desktop_YoutubeTutorials_CPP_Tutorial_CPPTutorial_Source_CPPTutorial_CPPTutorialGameMode_h__Script_CPPTutorial_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
