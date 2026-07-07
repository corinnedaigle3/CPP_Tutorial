// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPPTutorialCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPPTutorialCharacter() {}

// ********** Begin Cross Module References ********************************************************
CPPTUTORIAL_API UClass* Z_Construct_UClass_ACPPTutorialCharacter();
CPPTUTORIAL_API UClass* Z_Construct_UClass_ACPPTutorialCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CPPTutorial();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACPPTutorialCharacter ****************************************************
void ACPPTutorialCharacter::StaticRegisterNativesACPPTutorialCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACPPTutorialCharacter;
UClass* ACPPTutorialCharacter::GetPrivateStaticClass()
{
	using TClass = ACPPTutorialCharacter;
	if (!Z_Registration_Info_UClass_ACPPTutorialCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPPTutorialCharacter"),
			Z_Registration_Info_UClass_ACPPTutorialCharacter.InnerSingleton,
			StaticRegisterNativesACPPTutorialCharacter,
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
	return Z_Registration_Info_UClass_ACPPTutorialCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ACPPTutorialCharacter_NoRegister()
{
	return ACPPTutorialCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACPPTutorialCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A controllable top-down perspective character\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CPPTutorialCharacter.h" },
		{ "ModuleRelativePath", "CPPTutorialCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A controllable top-down perspective character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Top down camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPPTutorialCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Top down camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPPTutorialCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPPTutorialCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPPTutorialCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPPTutorialCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopDownCameraComponent_MetaData), NewProp_TopDownCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPPTutorialCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPPTutorialCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPPTutorialCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPPTutorialCharacter_Statics::NewProp_TopDownCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPPTutorialCharacter_Statics::NewProp_CameraBoom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPPTutorialCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACPPTutorialCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_CPPTutorial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPPTutorialCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPPTutorialCharacter_Statics::ClassParams = {
	&ACPPTutorialCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACPPTutorialCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACPPTutorialCharacter_Statics::PropPointers),
	0,
	0x008001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPPTutorialCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPPTutorialCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPPTutorialCharacter()
{
	if (!Z_Registration_Info_UClass_ACPPTutorialCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPPTutorialCharacter.OuterSingleton, Z_Construct_UClass_ACPPTutorialCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPPTutorialCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPPTutorialCharacter);
ACPPTutorialCharacter::~ACPPTutorialCharacter() {}
// ********** End Class ACPPTutorialCharacter ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_corin_OneDrive_Desktop_YoutubeTutorials_CPP_Tutorial_CPPTutorial_Source_CPPTutorial_CPPTutorialCharacter_h__Script_CPPTutorial_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPPTutorialCharacter, ACPPTutorialCharacter::StaticClass, TEXT("ACPPTutorialCharacter"), &Z_Registration_Info_UClass_ACPPTutorialCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPPTutorialCharacter), 3195830083U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_corin_OneDrive_Desktop_YoutubeTutorials_CPP_Tutorial_CPPTutorial_Source_CPPTutorial_CPPTutorialCharacter_h__Script_CPPTutorial_659708037(TEXT("/Script/CPPTutorial"),
	Z_CompiledInDeferFile_FID_Users_corin_OneDrive_Desktop_YoutubeTutorials_CPP_Tutorial_CPPTutorial_Source_CPPTutorial_CPPTutorialCharacter_h__Script_CPPTutorial_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_corin_OneDrive_Desktop_YoutubeTutorials_CPP_Tutorial_CPPTutorial_Source_CPPTutorial_CPPTutorialCharacter_h__Script_CPPTutorial_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
