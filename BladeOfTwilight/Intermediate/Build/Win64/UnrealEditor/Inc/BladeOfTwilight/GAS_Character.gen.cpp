// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BladeOfTwilight/GAS_Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_Character() {}
// Cross Module References
	BLADEOFTWILIGHT_API UClass* Z_Construct_UClass_AGAS_Character_NoRegister();
	BLADEOFTWILIGHT_API UClass* Z_Construct_UClass_AGAS_Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_BladeOfTwilight();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	void AGAS_Character::StaticRegisterNativesAGAS_Character()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGAS_Character);
	UClass* Z_Construct_UClass_AGAS_Character_NoRegister()
	{
		return AGAS_Character::StaticClass();
	}
	struct Z_Construct_UClass_AGAS_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
		static const UECodeGen_Private::FClassPropertyParams NewProp_PreloadedAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreloadedAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreloadedAbilities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGAS_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_BladeOfTwilight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAS_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GAS_Character.h" },
		{ "ModuleRelativePath", "GAS_Character.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAS_Character_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Character Abilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GAS_Character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAS_Character_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGAS_Character, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGAS_Character_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_Character_Statics::NewProp_AbilitySystemComponent_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGAS_Character_Statics::NewProp_PreloadedAbilities_Inner = { "PreloadedAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAS_Character_Statics::NewProp_PreloadedAbilities_MetaData[] = {
		{ "Category", "Character Abilities" },
		{ "ModuleRelativePath", "GAS_Character.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGAS_Character_Statics::NewProp_PreloadedAbilities = { "PreloadedAbilities", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGAS_Character, PreloadedAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGAS_Character_Statics::NewProp_PreloadedAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_Character_Statics::NewProp_PreloadedAbilities_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGAS_Character_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_Character_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_Character_Statics::NewProp_PreloadedAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_Character_Statics::NewProp_PreloadedAbilities,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGAS_Character_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AGAS_Character, IAbilitySystemInterface), false },  // 220555618
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGAS_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGAS_Character>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGAS_Character_Statics::ClassParams = {
		&AGAS_Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGAS_Character_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_Character_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGAS_Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGAS_Character()
	{
		if (!Z_Registration_Info_UClass_AGAS_Character.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGAS_Character.OuterSingleton, Z_Construct_UClass_AGAS_Character_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGAS_Character.OuterSingleton;
	}
	template<> BLADEOFTWILIGHT_API UClass* StaticClass<AGAS_Character>()
	{
		return AGAS_Character::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGAS_Character);
	struct Z_CompiledInDeferFile_FID_BladeOfTwilight_Source_BladeOfTwilight_GAS_Character_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BladeOfTwilight_Source_BladeOfTwilight_GAS_Character_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGAS_Character, AGAS_Character::StaticClass, TEXT("AGAS_Character"), &Z_Registration_Info_UClass_AGAS_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGAS_Character), 3703243335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BladeOfTwilight_Source_BladeOfTwilight_GAS_Character_h_599326708(TEXT("/Script/BladeOfTwilight"),
		Z_CompiledInDeferFile_FID_BladeOfTwilight_Source_BladeOfTwilight_GAS_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BladeOfTwilight_Source_BladeOfTwilight_GAS_Character_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
