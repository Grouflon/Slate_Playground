// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Slate_Playground.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1Slate_Playground() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UClass* Z_Construct_UClass_AHUD();
	ENGINE_API class UClass* Z_Construct_UClass_UFont_NoRegister();

	SLATE_PLAYGROUND_API class UClass* Z_Construct_UClass_ASlate_PlaygroundGameModeBase_NoRegister();
	SLATE_PLAYGROUND_API class UClass* Z_Construct_UClass_ASlate_PlaygroundGameModeBase();
	SLATE_PLAYGROUND_API class UClass* Z_Construct_UClass_AStandardHUD_NoRegister();
	SLATE_PLAYGROUND_API class UClass* Z_Construct_UClass_AStandardHUD();
	SLATE_PLAYGROUND_API class UPackage* Z_Construct_UPackage__Script_Slate_Playground();
	void ASlate_PlaygroundGameModeBase::StaticRegisterNativesASlate_PlaygroundGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASlate_PlaygroundGameModeBase_NoRegister()
	{
		return ASlate_PlaygroundGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ASlate_PlaygroundGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_Slate_Playground();
			OuterClass = ASlate_PlaygroundGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				static TCppClassTypeInfo<TCppClassTypeTraits<ASlate_PlaygroundGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Slate_PlaygroundGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Slate_PlaygroundGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASlate_PlaygroundGameModeBase, 2441288831);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASlate_PlaygroundGameModeBase(Z_Construct_UClass_ASlate_PlaygroundGameModeBase, &ASlate_PlaygroundGameModeBase::StaticClass, TEXT("/Script/Slate_Playground"), TEXT("ASlate_PlaygroundGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASlate_PlaygroundGameModeBase);
	void AStandardHUD::StaticRegisterNativesAStandardHUD()
	{
	}
	UClass* Z_Construct_UClass_AStandardHUD_NoRegister()
	{
		return AStandardHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AStandardHUD()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AHUD();
			Z_Construct_UPackage__Script_Slate_Playground();
			OuterClass = AStandardHUD::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2090028C;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_DebugGUIFont = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DebugGUIFont"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DebugGUIFont, AStandardHUD), 0x0010000000000001, Z_Construct_UClass_UFont_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AStandardHUD> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Rendering Actor Input Replication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("StandardHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("StandardHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_DebugGUIFont, TEXT("Category"), TEXT("StandardHUD"));
				MetaData->SetValue(NewProp_DebugGUIFont, TEXT("ModuleRelativePath"), TEXT("StandardHUD.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStandardHUD, 2434573612);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStandardHUD(Z_Construct_UClass_AStandardHUD, &AStandardHUD::StaticClass, TEXT("/Script/Slate_Playground"), TEXT("AStandardHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStandardHUD);
	UPackage* Z_Construct_UPackage__Script_Slate_Playground()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/Slate_Playground")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x8EA9E089;
			Guid.B = 0xB97F8C57;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
