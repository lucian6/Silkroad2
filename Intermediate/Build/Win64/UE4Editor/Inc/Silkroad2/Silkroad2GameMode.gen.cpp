// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Silkroad2GameMode.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSilkroad2GameMode() {}
// Cross Module References
	SILKROAD2_API UClass* Z_Construct_UClass_ASilkroad2GameMode_NoRegister();
	SILKROAD2_API UClass* Z_Construct_UClass_ASilkroad2GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Silkroad2();
// End Cross Module References
	void ASilkroad2GameMode::StaticRegisterNativesASilkroad2GameMode()
	{
	}
	UClass* Z_Construct_UClass_ASilkroad2GameMode_NoRegister()
	{
		return ASilkroad2GameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ASilkroad2GameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_Silkroad2();
			OuterClass = ASilkroad2GameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<ASilkroad2GameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Silkroad2GameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Silkroad2GameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASilkroad2GameMode, 1652958943);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASilkroad2GameMode(Z_Construct_UClass_ASilkroad2GameMode, &ASilkroad2GameMode::StaticClass, TEXT("/Script/Silkroad2"), TEXT("ASilkroad2GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASilkroad2GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
