// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../RVPDPRapidJsonFunctionLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LatentActionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRVPDPRapidJsonFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	RVPDPRAPIDJSON_API UClass* Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary();
	RVPDPRAPIDJSON_API UClass* Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary_NoRegister();
	RVPDPRAPIDJSON_API UScriptStruct* Z_Construct_UScriptStruct_FRVPDPRapidJsonCustomStructSerialization();
	UPackage* Z_Construct_UPackage__Script_RVPDPRapidJson();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RVPDPRapidJsonCustomStructSerialization;
class UScriptStruct* FRVPDPRapidJsonCustomStructSerialization::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RVPDPRapidJsonCustomStructSerialization.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RVPDPRapidJsonCustomStructSerialization.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRVPDPRapidJsonCustomStructSerialization, (UObject*)Z_Construct_UPackage__Script_RVPDPRapidJson(), TEXT("RVPDPRapidJsonCustomStructSerialization"));
	}
	return Z_Registration_Info_UScriptStruct_RVPDPRapidJsonCustomStructSerialization.OuterSingleton;
}
template<> RVPDPRAPIDJSON_API UScriptStruct* StaticStruct<FRVPDPRapidJsonCustomStructSerialization>()
{
	return FRVPDPRapidJsonCustomStructSerialization::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRVPDPRapidJsonCustomStructSerialization_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRVPDPRapidJsonCustomStructSerialization_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRVPDPRapidJsonCustomStructSerialization_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRVPDPRapidJsonCustomStructSerialization>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRVPDPRapidJsonCustomStructSerialization_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RVPDPRapidJson,
		nullptr,
		&NewStructOps,
		"RVPDPRapidJsonCustomStructSerialization",
		nullptr,
		0,
		sizeof(FRVPDPRapidJsonCustomStructSerialization),
		alignof(FRVPDPRapidJsonCustomStructSerialization),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRVPDPRapidJsonCustomStructSerialization_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRVPDPRapidJsonCustomStructSerialization_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRVPDPRapidJsonCustomStructSerialization()
	{
		if (!Z_Registration_Info_UScriptStruct_RVPDPRapidJsonCustomStructSerialization.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RVPDPRapidJsonCustomStructSerialization.InnerSingleton, Z_Construct_UScriptStruct_FRVPDPRapidJsonCustomStructSerialization_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RVPDPRapidJsonCustomStructSerialization.InnerSingleton;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeserializeTArrayFTransform_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTransform>*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::DeserializeTArrayFTransform_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeserializeTArrayFRotator_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRotator>*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::DeserializeTArrayFRotator_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeserializeTArrayFVector_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::DeserializeTArrayFVector_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeserializeTArrayFloat_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::DeserializeTArrayFloat_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeserializeTArrayFText_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FText>*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::DeserializeTArrayFText_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeserializeTArrayFName_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::DeserializeTArrayFName_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeserializeTArrayBool_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<bool>*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::DeserializeTArrayBool_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeserializeTArrayFColor_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FColor>*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::DeserializeTArrayFColor_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeserializeTArrayFString_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::DeserializeTArrayFString_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeserializeTArrayInt64_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int64>*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::DeserializeTArrayInt64_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeserializeTArrayUInt8_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::DeserializeTArrayUInt8_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeserializeTArrayInt_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::DeserializeTArrayInt_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeTArrayFTransform_Wrapper)
	{
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_inTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::SerializeTArrayFTransform_Wrapper(Z_Param_Out_inTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeTArrayFRotator_Wrapper)
	{
		P_GET_TARRAY_REF(FRotator,Z_Param_Out_inRotator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::SerializeTArrayFRotator_Wrapper(Z_Param_Out_inRotator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeTArrayFVector_Wrapper)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_inFVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::SerializeTArrayFVector_Wrapper(Z_Param_Out_inFVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeTArrayFloat_Wrapper)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_inFloats);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::SerializeTArrayFloat_Wrapper(Z_Param_Out_inFloats);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeTArrayFText_Wrapper)
	{
		P_GET_TARRAY_REF(FText,Z_Param_Out_InTexts);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::SerializeTArrayFText_Wrapper(Z_Param_Out_InTexts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeTArrayFName_Wrapper)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_InNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::SerializeTArrayFName_Wrapper(Z_Param_Out_InNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeTArrayBool_Wrapper)
	{
		P_GET_TARRAY_REF(bool,Z_Param_Out_InBools);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::SerializeTArrayBool_Wrapper(Z_Param_Out_InBools);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeTArrayFColor_Wrapper)
	{
		P_GET_TARRAY_REF(FColor,Z_Param_Out_Colors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::SerializeTArrayFColor_Wrapper(Z_Param_Out_Colors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeTArrayFString_Wrapper)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_InStrings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::SerializeTArrayFString_Wrapper(Z_Param_Out_InStrings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeTArrayInt64_Wrapper)
	{
		P_GET_TARRAY_REF(int64,Z_Param_Out_InInt64s);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::SerializeTArrayInt64_Wrapper(Z_Param_Out_InInt64s);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeTArrayUInt8_Wrapper)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InUInt8s);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::SerializeTArrayUInt8_Wrapper(Z_Param_Out_InUInt8s);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeTArrayInt_Wrapper)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_InInts);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::SerializeTArrayInt_Wrapper(Z_Param_Out_InInts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeserializeFTransform_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::DeserializeFTransform_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeserializeFRotator_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::DeserializeFRotator_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeserializeFVector_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::DeserializeFVector_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeserializeFloat_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::DeserializeFloat_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeserializeFText_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::DeserializeFText_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeserializeFName_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::DeserializeFName_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeserializeBool_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::DeserializeBool_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeserializeFColor_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::DeserializeFColor_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeserializeFString_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::DeserializeFString_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeserializeInt64_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::DeserializeInt64_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeserializeUInt8_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::DeserializeUInt8_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeserializeInt_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::DeserializeInt_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeFTransform_Wrapper)
	{
		P_GET_STRUCT(FTransform,Z_Param_TransformValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::SerializeFTransform_Wrapper(Z_Param_TransformValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeFRotator_Wrapper)
	{
		P_GET_STRUCT(FRotator,Z_Param_RotatorValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::SerializeFRotator_Wrapper(Z_Param_RotatorValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeFVector_Wrapper)
	{
		P_GET_STRUCT(FVector,Z_Param_VectorValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::SerializeFVector_Wrapper(Z_Param_VectorValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeFloat_Wrapper)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FloatValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::SerializeFloat_Wrapper(Z_Param_FloatValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeFText_Wrapper)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_TextValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::SerializeFText_Wrapper(Z_Param_TextValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeFName_Wrapper)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NameValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::SerializeFName_Wrapper(Z_Param_NameValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeBool_Wrapper)
	{
		P_GET_UBOOL(Z_Param_BoolValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::SerializeBool_Wrapper(Z_Param_BoolValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeFColor_Wrapper)
	{
		P_GET_STRUCT(FColor,Z_Param_ColorValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::SerializeFColor_Wrapper(Z_Param_ColorValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeFString_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StringValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::SerializeFString_Wrapper(Z_Param_StringValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeInt64_Wrapper)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Int64Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::SerializeInt64_Wrapper(Z_Param_Int64Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeUInt8_Wrapper)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_UInt8Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::SerializeUInt8_Wrapper(Z_Param_UInt8Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeInt_Wrapper)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_IntValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URVPDPRapidJsonFunctionLibrary::SerializeInt_Wrapper(Z_Param_IntValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeSerializeTransformArrayAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_stringToDeSerialize);
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_deSerializedResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		URVPDPRapidJsonFunctionLibrary::DeSerializeTransformArrayAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_stringToDeSerialize,Z_Param_Out_deSerializedResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeTransformArrayAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY(FTransform,Z_Param_arrayToSerialize);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_serializedString);
		P_FINISH;
		P_NATIVE_BEGIN;
		URVPDPRapidJsonFunctionLibrary::SerializeTransformArrayAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_arrayToSerialize,Z_Param_Out_serializedString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeSerializeRotatorArrayAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_stringToDeSerialize);
		P_GET_TARRAY_REF(FRotator,Z_Param_Out_deSerializedResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		URVPDPRapidJsonFunctionLibrary::DeSerializeRotatorArrayAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_stringToDeSerialize,Z_Param_Out_deSerializedResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeRotatorArrayAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY(FRotator,Z_Param_arrayToSerialize);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_serializedString);
		P_FINISH;
		P_NATIVE_BEGIN;
		URVPDPRapidJsonFunctionLibrary::SerializeRotatorArrayAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_arrayToSerialize,Z_Param_Out_serializedString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeSerializeVectorArrayAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_stringToDeSerialize);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_deSerializedResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		URVPDPRapidJsonFunctionLibrary::DeSerializeVectorArrayAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_stringToDeSerialize,Z_Param_Out_deSerializedResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeVectorArrayAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY(FVector,Z_Param_arrayToSerialize);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_serializedString);
		P_FINISH;
		P_NATIVE_BEGIN;
		URVPDPRapidJsonFunctionLibrary::SerializeVectorArrayAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_arrayToSerialize,Z_Param_Out_serializedString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeSerializeFloatArrayAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_stringToDeSerialize);
		P_GET_TARRAY_REF(float,Z_Param_Out_deSerializedResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		URVPDPRapidJsonFunctionLibrary::DeSerializeFloatArrayAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_stringToDeSerialize,Z_Param_Out_deSerializedResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeFloatArrayAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY(float,Z_Param_arrayToSerialize);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_serializedString);
		P_FINISH;
		P_NATIVE_BEGIN;
		URVPDPRapidJsonFunctionLibrary::SerializeFloatArrayAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_arrayToSerialize,Z_Param_Out_serializedString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeSerializeTextArrayAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_stringToDeSerialize);
		P_GET_TARRAY_REF(FText,Z_Param_Out_deSerializedResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		URVPDPRapidJsonFunctionLibrary::DeSerializeTextArrayAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_stringToDeSerialize,Z_Param_Out_deSerializedResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeTextArrayAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY(FText,Z_Param_arrayToSerialize);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_serializedString);
		P_FINISH;
		P_NATIVE_BEGIN;
		URVPDPRapidJsonFunctionLibrary::SerializeTextArrayAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_arrayToSerialize,Z_Param_Out_serializedString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeSerializeNameArrayAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_stringToDeSerialize);
		P_GET_TARRAY_REF(FName,Z_Param_Out_deSerializedResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		URVPDPRapidJsonFunctionLibrary::DeSerializeNameArrayAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_stringToDeSerialize,Z_Param_Out_deSerializedResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeNameArrayAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY(FName,Z_Param_arrayToSerialize);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_serializedString);
		P_FINISH;
		P_NATIVE_BEGIN;
		URVPDPRapidJsonFunctionLibrary::SerializeNameArrayAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_arrayToSerialize,Z_Param_Out_serializedString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeSerializeBoolArrayAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_stringToDeSerialize);
		P_GET_TARRAY_REF(bool,Z_Param_Out_deSerializedResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		URVPDPRapidJsonFunctionLibrary::DeSerializeBoolArrayAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_stringToDeSerialize,Z_Param_Out_deSerializedResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeBoolArrayAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY(bool,Z_Param_arrayToSerialize);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_serializedString);
		P_FINISH;
		P_NATIVE_BEGIN;
		URVPDPRapidJsonFunctionLibrary::SerializeBoolArrayAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_arrayToSerialize,Z_Param_Out_serializedString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeSerializeColorArrayAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_stringToDeSerialize);
		P_GET_TARRAY_REF(FColor,Z_Param_Out_deSerializedResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		URVPDPRapidJsonFunctionLibrary::DeSerializeColorArrayAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_stringToDeSerialize,Z_Param_Out_deSerializedResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeColorArrayAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY(FColor,Z_Param_arrayToSerialize);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_serializedString);
		P_FINISH;
		P_NATIVE_BEGIN;
		URVPDPRapidJsonFunctionLibrary::SerializeColorArrayAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_arrayToSerialize,Z_Param_Out_serializedString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeSerializeStringArrayAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_stringToDeSerialize);
		P_GET_TARRAY_REF(FString,Z_Param_Out_deSerializedResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		URVPDPRapidJsonFunctionLibrary::DeSerializeStringArrayAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_stringToDeSerialize,Z_Param_Out_deSerializedResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeStringArrayAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY(FString,Z_Param_arrayToSerialize);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_serializedString);
		P_FINISH;
		P_NATIVE_BEGIN;
		URVPDPRapidJsonFunctionLibrary::SerializeStringArrayAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_arrayToSerialize,Z_Param_Out_serializedString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeSerializeInt64ArrayAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_stringToDeSerialize);
		P_GET_TARRAY_REF(int64,Z_Param_Out_deSerializedResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		URVPDPRapidJsonFunctionLibrary::DeSerializeInt64ArrayAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_stringToDeSerialize,Z_Param_Out_deSerializedResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeInt64ArrayAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY(int64,Z_Param_arrayToSerialize);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_serializedString);
		P_FINISH;
		P_NATIVE_BEGIN;
		URVPDPRapidJsonFunctionLibrary::SerializeInt64ArrayAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_arrayToSerialize,Z_Param_Out_serializedString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeSerializeUInt8ArrayAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_stringToDeSerialize);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_deSerializedResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		URVPDPRapidJsonFunctionLibrary::DeSerializeUInt8ArrayAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_stringToDeSerialize,Z_Param_Out_deSerializedResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeUint8ArrayAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY(uint8,Z_Param_arrayToSerialize);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_serializedString);
		P_FINISH;
		P_NATIVE_BEGIN;
		URVPDPRapidJsonFunctionLibrary::SerializeUint8ArrayAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_arrayToSerialize,Z_Param_Out_serializedString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execDeSerializeInt32ArrayAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_stringToDeSerialize);
		P_GET_TARRAY_REF(int32,Z_Param_Out_deSerializedResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		URVPDPRapidJsonFunctionLibrary::DeSerializeInt32ArrayAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_stringToDeSerialize,Z_Param_Out_deSerializedResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URVPDPRapidJsonFunctionLibrary::execSerializeInt32ArrayAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY(int32,Z_Param_arrayToSerialize);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_serializedString);
		P_FINISH;
		P_NATIVE_BEGIN;
		URVPDPRapidJsonFunctionLibrary::SerializeInt32ArrayAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_arrayToSerialize,Z_Param_Out_serializedString);
		P_NATIVE_END;
	}
	void URVPDPRapidJsonFunctionLibrary::StaticRegisterNativesURVPDPRapidJsonFunctionLibrary()
	{
		UClass* Class = URVPDPRapidJsonFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeserializeBool_Wrapper", &URVPDPRapidJsonFunctionLibrary::execDeserializeBool_Wrapper },
			{ "DeSerializeBoolArrayAsync", &URVPDPRapidJsonFunctionLibrary::execDeSerializeBoolArrayAsync },
			{ "DeSerializeColorArrayAsync", &URVPDPRapidJsonFunctionLibrary::execDeSerializeColorArrayAsync },
			{ "DeserializeFColor_Wrapper", &URVPDPRapidJsonFunctionLibrary::execDeserializeFColor_Wrapper },
			{ "DeserializeFloat_Wrapper", &URVPDPRapidJsonFunctionLibrary::execDeserializeFloat_Wrapper },
			{ "DeSerializeFloatArrayAsync", &URVPDPRapidJsonFunctionLibrary::execDeSerializeFloatArrayAsync },
			{ "DeserializeFName_Wrapper", &URVPDPRapidJsonFunctionLibrary::execDeserializeFName_Wrapper },
			{ "DeserializeFRotator_Wrapper", &URVPDPRapidJsonFunctionLibrary::execDeserializeFRotator_Wrapper },
			{ "DeserializeFString_Wrapper", &URVPDPRapidJsonFunctionLibrary::execDeserializeFString_Wrapper },
			{ "DeserializeFText_Wrapper", &URVPDPRapidJsonFunctionLibrary::execDeserializeFText_Wrapper },
			{ "DeserializeFTransform_Wrapper", &URVPDPRapidJsonFunctionLibrary::execDeserializeFTransform_Wrapper },
			{ "DeserializeFVector_Wrapper", &URVPDPRapidJsonFunctionLibrary::execDeserializeFVector_Wrapper },
			{ "DeSerializeInt32ArrayAsync", &URVPDPRapidJsonFunctionLibrary::execDeSerializeInt32ArrayAsync },
			{ "DeserializeInt64_Wrapper", &URVPDPRapidJsonFunctionLibrary::execDeserializeInt64_Wrapper },
			{ "DeSerializeInt64ArrayAsync", &URVPDPRapidJsonFunctionLibrary::execDeSerializeInt64ArrayAsync },
			{ "DeserializeInt_Wrapper", &URVPDPRapidJsonFunctionLibrary::execDeserializeInt_Wrapper },
			{ "DeSerializeNameArrayAsync", &URVPDPRapidJsonFunctionLibrary::execDeSerializeNameArrayAsync },
			{ "DeSerializeRotatorArrayAsync", &URVPDPRapidJsonFunctionLibrary::execDeSerializeRotatorArrayAsync },
			{ "DeSerializeStringArrayAsync", &URVPDPRapidJsonFunctionLibrary::execDeSerializeStringArrayAsync },
			{ "DeserializeTArrayBool_Wrapper", &URVPDPRapidJsonFunctionLibrary::execDeserializeTArrayBool_Wrapper },
			{ "DeserializeTArrayFColor_Wrapper", &URVPDPRapidJsonFunctionLibrary::execDeserializeTArrayFColor_Wrapper },
			{ "DeserializeTArrayFloat_Wrapper", &URVPDPRapidJsonFunctionLibrary::execDeserializeTArrayFloat_Wrapper },
			{ "DeserializeTArrayFName_Wrapper", &URVPDPRapidJsonFunctionLibrary::execDeserializeTArrayFName_Wrapper },
			{ "DeserializeTArrayFRotator_Wrapper", &URVPDPRapidJsonFunctionLibrary::execDeserializeTArrayFRotator_Wrapper },
			{ "DeserializeTArrayFString_Wrapper", &URVPDPRapidJsonFunctionLibrary::execDeserializeTArrayFString_Wrapper },
			{ "DeserializeTArrayFText_Wrapper", &URVPDPRapidJsonFunctionLibrary::execDeserializeTArrayFText_Wrapper },
			{ "DeserializeTArrayFTransform_Wrapper", &URVPDPRapidJsonFunctionLibrary::execDeserializeTArrayFTransform_Wrapper },
			{ "DeserializeTArrayFVector_Wrapper", &URVPDPRapidJsonFunctionLibrary::execDeserializeTArrayFVector_Wrapper },
			{ "DeserializeTArrayInt64_Wrapper", &URVPDPRapidJsonFunctionLibrary::execDeserializeTArrayInt64_Wrapper },
			{ "DeserializeTArrayInt_Wrapper", &URVPDPRapidJsonFunctionLibrary::execDeserializeTArrayInt_Wrapper },
			{ "DeserializeTArrayUInt8_Wrapper", &URVPDPRapidJsonFunctionLibrary::execDeserializeTArrayUInt8_Wrapper },
			{ "DeSerializeTextArrayAsync", &URVPDPRapidJsonFunctionLibrary::execDeSerializeTextArrayAsync },
			{ "DeSerializeTransformArrayAsync", &URVPDPRapidJsonFunctionLibrary::execDeSerializeTransformArrayAsync },
			{ "DeserializeUInt8_Wrapper", &URVPDPRapidJsonFunctionLibrary::execDeserializeUInt8_Wrapper },
			{ "DeSerializeUInt8ArrayAsync", &URVPDPRapidJsonFunctionLibrary::execDeSerializeUInt8ArrayAsync },
			{ "DeSerializeVectorArrayAsync", &URVPDPRapidJsonFunctionLibrary::execDeSerializeVectorArrayAsync },
			{ "SerializeBool_Wrapper", &URVPDPRapidJsonFunctionLibrary::execSerializeBool_Wrapper },
			{ "SerializeBoolArrayAsync", &URVPDPRapidJsonFunctionLibrary::execSerializeBoolArrayAsync },
			{ "SerializeColorArrayAsync", &URVPDPRapidJsonFunctionLibrary::execSerializeColorArrayAsync },
			{ "SerializeFColor_Wrapper", &URVPDPRapidJsonFunctionLibrary::execSerializeFColor_Wrapper },
			{ "SerializeFloat_Wrapper", &URVPDPRapidJsonFunctionLibrary::execSerializeFloat_Wrapper },
			{ "SerializeFloatArrayAsync", &URVPDPRapidJsonFunctionLibrary::execSerializeFloatArrayAsync },
			{ "SerializeFName_Wrapper", &URVPDPRapidJsonFunctionLibrary::execSerializeFName_Wrapper },
			{ "SerializeFRotator_Wrapper", &URVPDPRapidJsonFunctionLibrary::execSerializeFRotator_Wrapper },
			{ "SerializeFString_Wrapper", &URVPDPRapidJsonFunctionLibrary::execSerializeFString_Wrapper },
			{ "SerializeFText_Wrapper", &URVPDPRapidJsonFunctionLibrary::execSerializeFText_Wrapper },
			{ "SerializeFTransform_Wrapper", &URVPDPRapidJsonFunctionLibrary::execSerializeFTransform_Wrapper },
			{ "SerializeFVector_Wrapper", &URVPDPRapidJsonFunctionLibrary::execSerializeFVector_Wrapper },
			{ "SerializeInt32ArrayAsync", &URVPDPRapidJsonFunctionLibrary::execSerializeInt32ArrayAsync },
			{ "SerializeInt64_Wrapper", &URVPDPRapidJsonFunctionLibrary::execSerializeInt64_Wrapper },
			{ "SerializeInt64ArrayAsync", &URVPDPRapidJsonFunctionLibrary::execSerializeInt64ArrayAsync },
			{ "SerializeInt_Wrapper", &URVPDPRapidJsonFunctionLibrary::execSerializeInt_Wrapper },
			{ "SerializeNameArrayAsync", &URVPDPRapidJsonFunctionLibrary::execSerializeNameArrayAsync },
			{ "SerializeRotatorArrayAsync", &URVPDPRapidJsonFunctionLibrary::execSerializeRotatorArrayAsync },
			{ "SerializeStringArrayAsync", &URVPDPRapidJsonFunctionLibrary::execSerializeStringArrayAsync },
			{ "SerializeTArrayBool_Wrapper", &URVPDPRapidJsonFunctionLibrary::execSerializeTArrayBool_Wrapper },
			{ "SerializeTArrayFColor_Wrapper", &URVPDPRapidJsonFunctionLibrary::execSerializeTArrayFColor_Wrapper },
			{ "SerializeTArrayFloat_Wrapper", &URVPDPRapidJsonFunctionLibrary::execSerializeTArrayFloat_Wrapper },
			{ "SerializeTArrayFName_Wrapper", &URVPDPRapidJsonFunctionLibrary::execSerializeTArrayFName_Wrapper },
			{ "SerializeTArrayFRotator_Wrapper", &URVPDPRapidJsonFunctionLibrary::execSerializeTArrayFRotator_Wrapper },
			{ "SerializeTArrayFString_Wrapper", &URVPDPRapidJsonFunctionLibrary::execSerializeTArrayFString_Wrapper },
			{ "SerializeTArrayFText_Wrapper", &URVPDPRapidJsonFunctionLibrary::execSerializeTArrayFText_Wrapper },
			{ "SerializeTArrayFTransform_Wrapper", &URVPDPRapidJsonFunctionLibrary::execSerializeTArrayFTransform_Wrapper },
			{ "SerializeTArrayFVector_Wrapper", &URVPDPRapidJsonFunctionLibrary::execSerializeTArrayFVector_Wrapper },
			{ "SerializeTArrayInt64_Wrapper", &URVPDPRapidJsonFunctionLibrary::execSerializeTArrayInt64_Wrapper },
			{ "SerializeTArrayInt_Wrapper", &URVPDPRapidJsonFunctionLibrary::execSerializeTArrayInt_Wrapper },
			{ "SerializeTArrayUInt8_Wrapper", &URVPDPRapidJsonFunctionLibrary::execSerializeTArrayUInt8_Wrapper },
			{ "SerializeTextArrayAsync", &URVPDPRapidJsonFunctionLibrary::execSerializeTextArrayAsync },
			{ "SerializeTransformArrayAsync", &URVPDPRapidJsonFunctionLibrary::execSerializeTransformArrayAsync },
			{ "SerializeUInt8_Wrapper", &URVPDPRapidJsonFunctionLibrary::execSerializeUInt8_Wrapper },
			{ "SerializeUint8ArrayAsync", &URVPDPRapidJsonFunctionLibrary::execSerializeUint8ArrayAsync },
			{ "SerializeVectorArrayAsync", &URVPDPRapidJsonFunctionLibrary::execSerializeVectorArrayAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeserializeBool_Wrapper_Parms
		{
			FString JsonString;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeBool_Wrapper_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::NewProp_JsonString_MetaData) };
	void Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RVPDPRapidJsonFunctionLibrary_eventDeserializeBool_Wrapper_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RVPDPRapidJsonFunctionLibrary_eventDeserializeBool_Wrapper_Parms), &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize" },
		{ "DisplayName", "De-Serialize Bool" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeserializeBool_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeBool_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeBool_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeBool_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeBoolArrayAsync_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeSerializeBoolArrayAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString stringToDeSerialize;
			TArray<bool> deSerializedResult;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_stringToDeSerialize;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_deSerializedResult_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_deSerializedResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeBoolArrayAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeBoolArrayAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeBoolArrayAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeBoolArrayAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeBoolArrayAsync_Statics::NewProp_stringToDeSerialize = { "stringToDeSerialize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeBoolArrayAsync_Parms, stringToDeSerialize), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeBoolArrayAsync_Statics::NewProp_deSerializedResult_Inner = { "deSerializedResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeBoolArrayAsync_Statics::NewProp_deSerializedResult = { "deSerializedResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeBoolArrayAsync_Parms, deSerializedResult), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeBoolArrayAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeBoolArrayAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeBoolArrayAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeBoolArrayAsync_Statics::NewProp_stringToDeSerialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeBoolArrayAsync_Statics::NewProp_deSerializedResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeBoolArrayAsync_Statics::NewProp_deSerializedResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeBoolArrayAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "De-Serializes the Array using Async Task so eventhough it's very large the FPS doesn't get affected since it's not run on the Game Thread" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeBoolArrayAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeSerializeBoolArrayAsync", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeBoolArrayAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeBoolArrayAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeBoolArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventDeSerializeBoolArrayAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeBoolArrayAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeBoolArrayAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeBoolArrayAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeBoolArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventDeSerializeBoolArrayAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeBoolArrayAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeBoolArrayAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeColorArrayAsync_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeSerializeColorArrayAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString stringToDeSerialize;
			TArray<FColor> deSerializedResult;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_stringToDeSerialize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_deSerializedResult_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_deSerializedResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeColorArrayAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeColorArrayAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeColorArrayAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeColorArrayAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeColorArrayAsync_Statics::NewProp_stringToDeSerialize = { "stringToDeSerialize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeColorArrayAsync_Parms, stringToDeSerialize), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeColorArrayAsync_Statics::NewProp_deSerializedResult_Inner = { "deSerializedResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeColorArrayAsync_Statics::NewProp_deSerializedResult = { "deSerializedResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeColorArrayAsync_Parms, deSerializedResult), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeColorArrayAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeColorArrayAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeColorArrayAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeColorArrayAsync_Statics::NewProp_stringToDeSerialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeColorArrayAsync_Statics::NewProp_deSerializedResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeColorArrayAsync_Statics::NewProp_deSerializedResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeColorArrayAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "De-Serializes the Array using Async Task so eventhough it's very large the FPS doesn't get affected since it's not run on the Game Thread" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeColorArrayAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeSerializeColorArrayAsync", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeColorArrayAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeColorArrayAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeColorArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventDeSerializeColorArrayAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeColorArrayAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeColorArrayAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeColorArrayAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeColorArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventDeSerializeColorArrayAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeColorArrayAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeColorArrayAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeserializeFColor_Wrapper_Parms
		{
			FString JsonString;
			FColor ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeFColor_Wrapper_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeFColor_Wrapper_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize" },
		{ "DisplayName", "De-Serialize Color" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeserializeFColor_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeFColor_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeFColor_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFColor_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeserializeFloat_Wrapper_Parms
		{
			FString JsonString;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeFloat_Wrapper_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeFloat_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize" },
		{ "DisplayName", "De-Serialize Float" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeserializeFloat_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeFloat_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeFloat_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFloat_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeFloatArrayAsync_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeSerializeFloatArrayAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString stringToDeSerialize;
			TArray<float> deSerializedResult;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_stringToDeSerialize;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deSerializedResult_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_deSerializedResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeFloatArrayAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeFloatArrayAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeFloatArrayAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeFloatArrayAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeFloatArrayAsync_Statics::NewProp_stringToDeSerialize = { "stringToDeSerialize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeFloatArrayAsync_Parms, stringToDeSerialize), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeFloatArrayAsync_Statics::NewProp_deSerializedResult_Inner = { "deSerializedResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeFloatArrayAsync_Statics::NewProp_deSerializedResult = { "deSerializedResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeFloatArrayAsync_Parms, deSerializedResult), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeFloatArrayAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeFloatArrayAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeFloatArrayAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeFloatArrayAsync_Statics::NewProp_stringToDeSerialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeFloatArrayAsync_Statics::NewProp_deSerializedResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeFloatArrayAsync_Statics::NewProp_deSerializedResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeFloatArrayAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "De-Serializes the Array using Async Task so eventhough it's very large the FPS doesn't get affected since it's not run on the Game Thread" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeFloatArrayAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeSerializeFloatArrayAsync", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeFloatArrayAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeFloatArrayAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeFloatArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventDeSerializeFloatArrayAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeFloatArrayAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeFloatArrayAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeFloatArrayAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeFloatArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventDeSerializeFloatArrayAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeFloatArrayAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeFloatArrayAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeserializeFName_Wrapper_Parms
		{
			FString JsonString;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeFName_Wrapper_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeFName_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize" },
		{ "DisplayName", "De-Serialize Name" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeserializeFName_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeFName_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeFName_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFName_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeserializeFRotator_Wrapper_Parms
		{
			FString JsonString;
			FRotator ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeFRotator_Wrapper_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeFRotator_Wrapper_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize" },
		{ "DisplayName", "De-Serialize Rotator" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeserializeFRotator_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeFRotator_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeFRotator_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFRotator_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeserializeFString_Wrapper_Parms
		{
			FString JsonString;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeFString_Wrapper_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeFString_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize" },
		{ "DisplayName", "De-Serialize String" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeserializeFString_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeFString_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeFString_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFString_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeserializeFText_Wrapper_Parms
		{
			FString JsonString;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeFText_Wrapper_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeFText_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize" },
		{ "DisplayName", "De-Serialize Text" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeserializeFText_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeFText_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeFText_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFText_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeserializeFTransform_Wrapper_Parms
		{
			FString JsonString;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeFTransform_Wrapper_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeFTransform_Wrapper_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize" },
		{ "DisplayName", "De-Serialize Transform" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeserializeFTransform_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeFTransform_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeFTransform_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFTransform_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeserializeFVector_Wrapper_Parms
		{
			FString JsonString;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeFVector_Wrapper_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeFVector_Wrapper_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize" },
		{ "DisplayName", "De-Serialize Vector" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeserializeFVector_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeFVector_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeFVector_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFVector_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt32ArrayAsync_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeSerializeInt32ArrayAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString stringToDeSerialize;
			TArray<int32> deSerializedResult;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_stringToDeSerialize;
		static const UECodeGen_Private::FIntPropertyParams NewProp_deSerializedResult_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_deSerializedResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt32ArrayAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeInt32ArrayAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt32ArrayAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeInt32ArrayAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt32ArrayAsync_Statics::NewProp_stringToDeSerialize = { "stringToDeSerialize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeInt32ArrayAsync_Parms, stringToDeSerialize), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt32ArrayAsync_Statics::NewProp_deSerializedResult_Inner = { "deSerializedResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt32ArrayAsync_Statics::NewProp_deSerializedResult = { "deSerializedResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeInt32ArrayAsync_Parms, deSerializedResult), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt32ArrayAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt32ArrayAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt32ArrayAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt32ArrayAsync_Statics::NewProp_stringToDeSerialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt32ArrayAsync_Statics::NewProp_deSerializedResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt32ArrayAsync_Statics::NewProp_deSerializedResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt32ArrayAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "De-Serializes the Array using Async Task so eventhough it's very large the FPS doesn't get affected since it's not run on the Game Thread" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt32ArrayAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeSerializeInt32ArrayAsync", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt32ArrayAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt32ArrayAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt32ArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventDeSerializeInt32ArrayAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt32ArrayAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt32ArrayAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt32ArrayAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt32ArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventDeSerializeInt32ArrayAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt32ArrayAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt32ArrayAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeserializeInt64_Wrapper_Parms
		{
			FString JsonString;
			int64 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeInt64_Wrapper_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeInt64_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize" },
		{ "DisplayName", "De-Serialize Int64" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeserializeInt64_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeInt64_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeInt64_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt64_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt64ArrayAsync_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeSerializeInt64ArrayAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString stringToDeSerialize;
			TArray<int64> deSerializedResult;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_stringToDeSerialize;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_deSerializedResult_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_deSerializedResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt64ArrayAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeInt64ArrayAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt64ArrayAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeInt64ArrayAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt64ArrayAsync_Statics::NewProp_stringToDeSerialize = { "stringToDeSerialize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeInt64ArrayAsync_Parms, stringToDeSerialize), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt64ArrayAsync_Statics::NewProp_deSerializedResult_Inner = { "deSerializedResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt64ArrayAsync_Statics::NewProp_deSerializedResult = { "deSerializedResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeInt64ArrayAsync_Parms, deSerializedResult), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt64ArrayAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt64ArrayAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt64ArrayAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt64ArrayAsync_Statics::NewProp_stringToDeSerialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt64ArrayAsync_Statics::NewProp_deSerializedResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt64ArrayAsync_Statics::NewProp_deSerializedResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt64ArrayAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "De-Serializes the Array using Async Task so eventhough it's very large the FPS doesn't get affected since it's not run on the Game Thread" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt64ArrayAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeSerializeInt64ArrayAsync", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt64ArrayAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt64ArrayAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt64ArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventDeSerializeInt64ArrayAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt64ArrayAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt64ArrayAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt64ArrayAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt64ArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventDeSerializeInt64ArrayAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt64ArrayAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt64ArrayAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeserializeInt_Wrapper_Parms
		{
			FString JsonString;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeInt_Wrapper_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeInt_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------- De-SERIALIZE --------//\n" },
#endif
		{ "DisplayName", "De-Serialize Int" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "------- De-SERIALIZE --------" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeserializeInt_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeInt_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeInt_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeNameArrayAsync_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeSerializeNameArrayAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString stringToDeSerialize;
			TArray<FName> deSerializedResult;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_stringToDeSerialize;
		static const UECodeGen_Private::FNamePropertyParams NewProp_deSerializedResult_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_deSerializedResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeNameArrayAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeNameArrayAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeNameArrayAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeNameArrayAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeNameArrayAsync_Statics::NewProp_stringToDeSerialize = { "stringToDeSerialize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeNameArrayAsync_Parms, stringToDeSerialize), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeNameArrayAsync_Statics::NewProp_deSerializedResult_Inner = { "deSerializedResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeNameArrayAsync_Statics::NewProp_deSerializedResult = { "deSerializedResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeNameArrayAsync_Parms, deSerializedResult), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeNameArrayAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeNameArrayAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeNameArrayAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeNameArrayAsync_Statics::NewProp_stringToDeSerialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeNameArrayAsync_Statics::NewProp_deSerializedResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeNameArrayAsync_Statics::NewProp_deSerializedResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeNameArrayAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "De-Serializes the Array using Async Task so eventhough it's very large the FPS doesn't get affected since it's not run on the Game Thread" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeNameArrayAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeSerializeNameArrayAsync", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeNameArrayAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeNameArrayAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeNameArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventDeSerializeNameArrayAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeNameArrayAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeNameArrayAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeNameArrayAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeNameArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventDeSerializeNameArrayAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeNameArrayAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeNameArrayAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeRotatorArrayAsync_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeSerializeRotatorArrayAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString stringToDeSerialize;
			TArray<FRotator> deSerializedResult;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_stringToDeSerialize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_deSerializedResult_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_deSerializedResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeRotatorArrayAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeRotatorArrayAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeRotatorArrayAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeRotatorArrayAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeRotatorArrayAsync_Statics::NewProp_stringToDeSerialize = { "stringToDeSerialize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeRotatorArrayAsync_Parms, stringToDeSerialize), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeRotatorArrayAsync_Statics::NewProp_deSerializedResult_Inner = { "deSerializedResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeRotatorArrayAsync_Statics::NewProp_deSerializedResult = { "deSerializedResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeRotatorArrayAsync_Parms, deSerializedResult), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeRotatorArrayAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeRotatorArrayAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeRotatorArrayAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeRotatorArrayAsync_Statics::NewProp_stringToDeSerialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeRotatorArrayAsync_Statics::NewProp_deSerializedResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeRotatorArrayAsync_Statics::NewProp_deSerializedResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeRotatorArrayAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "De-Serializes the Array using Async Task so eventhough it's very large the FPS doesn't get affected since it's not run on the Game Thread" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeRotatorArrayAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeSerializeRotatorArrayAsync", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeRotatorArrayAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeRotatorArrayAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeRotatorArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventDeSerializeRotatorArrayAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeRotatorArrayAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeRotatorArrayAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeRotatorArrayAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeRotatorArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventDeSerializeRotatorArrayAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeRotatorArrayAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeRotatorArrayAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeStringArrayAsync_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeSerializeStringArrayAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString stringToDeSerialize;
			TArray<FString> deSerializedResult;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_stringToDeSerialize;
		static const UECodeGen_Private::FStrPropertyParams NewProp_deSerializedResult_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_deSerializedResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeStringArrayAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeStringArrayAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeStringArrayAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeStringArrayAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeStringArrayAsync_Statics::NewProp_stringToDeSerialize = { "stringToDeSerialize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeStringArrayAsync_Parms, stringToDeSerialize), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeStringArrayAsync_Statics::NewProp_deSerializedResult_Inner = { "deSerializedResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeStringArrayAsync_Statics::NewProp_deSerializedResult = { "deSerializedResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeStringArrayAsync_Parms, deSerializedResult), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeStringArrayAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeStringArrayAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeStringArrayAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeStringArrayAsync_Statics::NewProp_stringToDeSerialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeStringArrayAsync_Statics::NewProp_deSerializedResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeStringArrayAsync_Statics::NewProp_deSerializedResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeStringArrayAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "De-Serializes the Array using Async Task so eventhough it's very large the FPS doesn't get affected since it's not run on the Game Thread" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeStringArrayAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeSerializeStringArrayAsync", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeStringArrayAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeStringArrayAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeStringArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventDeSerializeStringArrayAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeStringArrayAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeStringArrayAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeStringArrayAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeStringArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventDeSerializeStringArrayAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeStringArrayAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeStringArrayAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayBool_Wrapper_Parms
		{
			FString JsonString;
			TArray<bool> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayBool_Wrapper_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayBool_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "DisplayName", "De-Serialize Bool Array" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeserializeTArrayBool_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayBool_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayBool_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFColor_Wrapper_Parms
		{
			FString JsonString;
			TArray<FColor> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFColor_Wrapper_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFColor_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "DisplayName", "De-Serialize Color Array" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeserializeTArrayFColor_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFColor_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFColor_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFloat_Wrapper_Parms
		{
			FString JsonString;
			TArray<float> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFloat_Wrapper_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFloat_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "DisplayName", "De-Serialize Float Array" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeserializeTArrayFloat_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFloat_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFloat_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFName_Wrapper_Parms
		{
			FString JsonString;
			TArray<FName> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFName_Wrapper_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFName_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "DisplayName", "De-Serialize Name Array" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeserializeTArrayFName_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFName_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFName_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFRotator_Wrapper_Parms
		{
			FString JsonString;
			TArray<FRotator> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFRotator_Wrapper_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFRotator_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "DisplayName", "De-Serialize Rotator Array" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeserializeTArrayFRotator_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFRotator_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFRotator_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFString_Wrapper_Parms
		{
			FString JsonString;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFString_Wrapper_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFString_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "DisplayName", "De-Serialize String Array" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeserializeTArrayFString_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFString_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFString_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFText_Wrapper_Parms
		{
			FString JsonString;
			TArray<FText> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFText_Wrapper_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFText_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "DisplayName", "De-Serialize Text Array" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeserializeTArrayFText_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFText_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFText_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFTransform_Wrapper_Parms
		{
			FString JsonString;
			TArray<FTransform> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFTransform_Wrapper_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFTransform_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "DisplayName", "De-Serialize Transform Array" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeserializeTArrayFTransform_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFTransform_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFTransform_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFVector_Wrapper_Parms
		{
			FString JsonString;
			TArray<FVector> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFVector_Wrapper_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFVector_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "DisplayName", "De-Serialize Vector Array" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeserializeTArrayFVector_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFVector_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayFVector_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayInt64_Wrapper_Parms
		{
			FString JsonString;
			TArray<int64> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayInt64_Wrapper_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayInt64_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "DisplayName", "De-Serialize Int64 Array" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeserializeTArrayInt64_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayInt64_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayInt64_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayInt_Wrapper_Parms
		{
			FString JsonString;
			TArray<int32> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayInt_Wrapper_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayInt_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------- DE-SERIALIZE ARRAYS --------//\n" },
#endif
		{ "DisplayName", "De-Serialize Int Array" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "------- DE-SERIALIZE ARRAYS --------" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeserializeTArrayInt_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayInt_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayInt_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayUInt8_Wrapper_Parms
		{
			FString JsonString;
			TArray<uint8> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayUInt8_Wrapper_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayUInt8_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "DisplayName", "De-Serialize Byte Array" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeserializeTArrayUInt8_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayUInt8_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeTArrayUInt8_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTextArrayAsync_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeSerializeTextArrayAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString stringToDeSerialize;
			TArray<FText> deSerializedResult;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_stringToDeSerialize;
		static const UECodeGen_Private::FTextPropertyParams NewProp_deSerializedResult_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_deSerializedResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTextArrayAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeTextArrayAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTextArrayAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeTextArrayAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTextArrayAsync_Statics::NewProp_stringToDeSerialize = { "stringToDeSerialize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeTextArrayAsync_Parms, stringToDeSerialize), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTextArrayAsync_Statics::NewProp_deSerializedResult_Inner = { "deSerializedResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTextArrayAsync_Statics::NewProp_deSerializedResult = { "deSerializedResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeTextArrayAsync_Parms, deSerializedResult), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTextArrayAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTextArrayAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTextArrayAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTextArrayAsync_Statics::NewProp_stringToDeSerialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTextArrayAsync_Statics::NewProp_deSerializedResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTextArrayAsync_Statics::NewProp_deSerializedResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTextArrayAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "De-Serializes the Array using Async Task so eventhough it's very large the FPS doesn't get affected since it's not run on the Game Thread" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTextArrayAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeSerializeTextArrayAsync", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTextArrayAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTextArrayAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTextArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventDeSerializeTextArrayAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTextArrayAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTextArrayAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTextArrayAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTextArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventDeSerializeTextArrayAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTextArrayAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTextArrayAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTransformArrayAsync_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeSerializeTransformArrayAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString stringToDeSerialize;
			TArray<FTransform> deSerializedResult;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_stringToDeSerialize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_deSerializedResult_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_deSerializedResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTransformArrayAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeTransformArrayAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTransformArrayAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeTransformArrayAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTransformArrayAsync_Statics::NewProp_stringToDeSerialize = { "stringToDeSerialize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeTransformArrayAsync_Parms, stringToDeSerialize), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTransformArrayAsync_Statics::NewProp_deSerializedResult_Inner = { "deSerializedResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTransformArrayAsync_Statics::NewProp_deSerializedResult = { "deSerializedResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeTransformArrayAsync_Parms, deSerializedResult), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTransformArrayAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTransformArrayAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTransformArrayAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTransformArrayAsync_Statics::NewProp_stringToDeSerialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTransformArrayAsync_Statics::NewProp_deSerializedResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTransformArrayAsync_Statics::NewProp_deSerializedResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTransformArrayAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "De-Serializes the Array using Async Task so eventhough it's very large the FPS doesn't get affected since it's not run on the Game Thread" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTransformArrayAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeSerializeTransformArrayAsync", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTransformArrayAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTransformArrayAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTransformArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventDeSerializeTransformArrayAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTransformArrayAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTransformArrayAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTransformArrayAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTransformArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventDeSerializeTransformArrayAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTransformArrayAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTransformArrayAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeserializeUInt8_Wrapper_Parms
		{
			FString JsonString;
			uint8 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeUInt8_Wrapper_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeserializeUInt8_Wrapper_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize" },
		{ "DisplayName", "De-Serialize Byte" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeserializeUInt8_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeUInt8_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventDeserializeUInt8_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeUInt8_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeUInt8ArrayAsync_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeSerializeUInt8ArrayAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString stringToDeSerialize;
			TArray<uint8> deSerializedResult;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_stringToDeSerialize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_deSerializedResult_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_deSerializedResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeUInt8ArrayAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeUInt8ArrayAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeUInt8ArrayAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeUInt8ArrayAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeUInt8ArrayAsync_Statics::NewProp_stringToDeSerialize = { "stringToDeSerialize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeUInt8ArrayAsync_Parms, stringToDeSerialize), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeUInt8ArrayAsync_Statics::NewProp_deSerializedResult_Inner = { "deSerializedResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeUInt8ArrayAsync_Statics::NewProp_deSerializedResult = { "deSerializedResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeUInt8ArrayAsync_Parms, deSerializedResult), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeUInt8ArrayAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeUInt8ArrayAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeUInt8ArrayAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeUInt8ArrayAsync_Statics::NewProp_stringToDeSerialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeUInt8ArrayAsync_Statics::NewProp_deSerializedResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeUInt8ArrayAsync_Statics::NewProp_deSerializedResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeUInt8ArrayAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "De-Serializes the Array using Async Task so eventhough it's very large the FPS doesn't get affected since it's not run on the Game Thread" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeUInt8ArrayAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeSerializeUInt8ArrayAsync", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeUInt8ArrayAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeUInt8ArrayAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeUInt8ArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventDeSerializeUInt8ArrayAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeUInt8ArrayAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeUInt8ArrayAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeUInt8ArrayAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeUInt8ArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventDeSerializeUInt8ArrayAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeUInt8ArrayAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeUInt8ArrayAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeVectorArrayAsync_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventDeSerializeVectorArrayAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString stringToDeSerialize;
			TArray<FVector> deSerializedResult;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_stringToDeSerialize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_deSerializedResult_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_deSerializedResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeVectorArrayAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeVectorArrayAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeVectorArrayAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeVectorArrayAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeVectorArrayAsync_Statics::NewProp_stringToDeSerialize = { "stringToDeSerialize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeVectorArrayAsync_Parms, stringToDeSerialize), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeVectorArrayAsync_Statics::NewProp_deSerializedResult_Inner = { "deSerializedResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeVectorArrayAsync_Statics::NewProp_deSerializedResult = { "deSerializedResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventDeSerializeVectorArrayAsync_Parms, deSerializedResult), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeVectorArrayAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeVectorArrayAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeVectorArrayAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeVectorArrayAsync_Statics::NewProp_stringToDeSerialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeVectorArrayAsync_Statics::NewProp_deSerializedResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeVectorArrayAsync_Statics::NewProp_deSerializedResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeVectorArrayAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "De-Serializes the Array using Async Task so eventhough it's very large the FPS doesn't get affected since it's not run on the Game Thread" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeVectorArrayAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "DeSerializeVectorArrayAsync", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeVectorArrayAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeVectorArrayAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeVectorArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventDeSerializeVectorArrayAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeVectorArrayAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeVectorArrayAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeVectorArrayAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeVectorArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventDeSerializeVectorArrayAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeVectorArrayAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeVectorArrayAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeBool_Wrapper_Parms
		{
			bool BoolValue;
			FString ReturnValue;
		};
		static void NewProp_BoolValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::NewProp_BoolValue_SetBit(void* Obj)
	{
		((RVPDPRapidJsonFunctionLibrary_eventSerializeBool_Wrapper_Parms*)Obj)->BoolValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RVPDPRapidJsonFunctionLibrary_eventSerializeBool_Wrapper_Parms), &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeBool_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::NewProp_BoolValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize" },
		{ "DisplayName", "Serialize Bool" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeBool_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeBool_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeBool_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBool_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBoolArrayAsync_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeBoolArrayAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<bool> arrayToSerialize;
			FString serializedString;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_arrayToSerialize_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_arrayToSerialize;
		static const UECodeGen_Private::FStrPropertyParams NewProp_serializedString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBoolArrayAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeBoolArrayAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBoolArrayAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeBoolArrayAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBoolArrayAsync_Statics::NewProp_arrayToSerialize_Inner = { "arrayToSerialize", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBoolArrayAsync_Statics::NewProp_arrayToSerialize = { "arrayToSerialize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeBoolArrayAsync_Parms, arrayToSerialize), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBoolArrayAsync_Statics::NewProp_serializedString = { "serializedString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeBoolArrayAsync_Parms, serializedString), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBoolArrayAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBoolArrayAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBoolArrayAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBoolArrayAsync_Statics::NewProp_arrayToSerialize_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBoolArrayAsync_Statics::NewProp_arrayToSerialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBoolArrayAsync_Statics::NewProp_serializedString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBoolArrayAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Serializes the Array using Async Task so eventhough it's very large the FPS doesn't get affected since it's not run on the Game Thread" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBoolArrayAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeBoolArrayAsync", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBoolArrayAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBoolArrayAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBoolArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeBoolArrayAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBoolArrayAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBoolArrayAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBoolArrayAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBoolArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeBoolArrayAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBoolArrayAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBoolArrayAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeColorArrayAsync_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeColorArrayAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FColor> arrayToSerialize;
			FString serializedString;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_arrayToSerialize_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_arrayToSerialize;
		static const UECodeGen_Private::FStrPropertyParams NewProp_serializedString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeColorArrayAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeColorArrayAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeColorArrayAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeColorArrayAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeColorArrayAsync_Statics::NewProp_arrayToSerialize_Inner = { "arrayToSerialize", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeColorArrayAsync_Statics::NewProp_arrayToSerialize = { "arrayToSerialize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeColorArrayAsync_Parms, arrayToSerialize), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeColorArrayAsync_Statics::NewProp_serializedString = { "serializedString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeColorArrayAsync_Parms, serializedString), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeColorArrayAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeColorArrayAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeColorArrayAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeColorArrayAsync_Statics::NewProp_arrayToSerialize_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeColorArrayAsync_Statics::NewProp_arrayToSerialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeColorArrayAsync_Statics::NewProp_serializedString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeColorArrayAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Serializes the Array using Async Task so eventhough it's very large the FPS doesn't get affected since it's not run on the Game Thread" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeColorArrayAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeColorArrayAsync", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeColorArrayAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeColorArrayAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeColorArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeColorArrayAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeColorArrayAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeColorArrayAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeColorArrayAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeColorArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeColorArrayAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeColorArrayAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeColorArrayAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeFColor_Wrapper_Parms
		{
			FColor ColorValue;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::NewProp_ColorValue = { "ColorValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeFColor_Wrapper_Parms, ColorValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeFColor_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::NewProp_ColorValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize" },
		{ "DisplayName", "Serialize Color" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeFColor_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeFColor_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeFColor_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFColor_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeFloat_Wrapper_Parms
		{
			float FloatValue;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeFloat_Wrapper_Parms, FloatValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeFloat_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::NewProp_FloatValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize" },
		{ "DisplayName", "Serialize Float" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeFloat_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeFloat_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeFloat_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloat_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloatArrayAsync_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeFloatArrayAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<float> arrayToSerialize;
			FString serializedString;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_arrayToSerialize_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_arrayToSerialize;
		static const UECodeGen_Private::FStrPropertyParams NewProp_serializedString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloatArrayAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeFloatArrayAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloatArrayAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeFloatArrayAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloatArrayAsync_Statics::NewProp_arrayToSerialize_Inner = { "arrayToSerialize", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloatArrayAsync_Statics::NewProp_arrayToSerialize = { "arrayToSerialize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeFloatArrayAsync_Parms, arrayToSerialize), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloatArrayAsync_Statics::NewProp_serializedString = { "serializedString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeFloatArrayAsync_Parms, serializedString), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloatArrayAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloatArrayAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloatArrayAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloatArrayAsync_Statics::NewProp_arrayToSerialize_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloatArrayAsync_Statics::NewProp_arrayToSerialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloatArrayAsync_Statics::NewProp_serializedString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloatArrayAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Serializes the Array using Async Task so eventhough it's very large the FPS doesn't get affected since it's not run on the Game Thread" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloatArrayAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeFloatArrayAsync", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloatArrayAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloatArrayAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloatArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeFloatArrayAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloatArrayAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloatArrayAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloatArrayAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloatArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeFloatArrayAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloatArrayAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloatArrayAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeFName_Wrapper_Parms
		{
			FName NameValue;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::NewProp_NameValue = { "NameValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeFName_Wrapper_Parms, NameValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeFName_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::NewProp_NameValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize" },
		{ "DisplayName", "Serialize Name" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeFName_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeFName_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeFName_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFName_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeFRotator_Wrapper_Parms
		{
			FRotator RotatorValue;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotatorValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::NewProp_RotatorValue = { "RotatorValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeFRotator_Wrapper_Parms, RotatorValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeFRotator_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::NewProp_RotatorValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize" },
		{ "DisplayName", "Serialize Rotator" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeFRotator_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeFRotator_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeFRotator_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFRotator_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeFString_Wrapper_Parms
		{
			FString StringValue;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeFString_Wrapper_Parms, StringValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeFString_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::NewProp_StringValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize" },
		{ "DisplayName", "Serialize String" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeFString_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeFString_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeFString_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFString_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeFText_Wrapper_Parms
		{
			FText TextValue;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_TextValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::NewProp_TextValue = { "TextValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeFText_Wrapper_Parms, TextValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeFText_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::NewProp_TextValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize" },
		{ "DisplayName", "Serialize Text" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeFText_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeFText_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeFText_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFText_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeFTransform_Wrapper_Parms
		{
			FTransform TransformValue;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::NewProp_TransformValue = { "TransformValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeFTransform_Wrapper_Parms, TransformValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeFTransform_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::NewProp_TransformValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize" },
		{ "DisplayName", "Serialize Transform" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeFTransform_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeFTransform_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeFTransform_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFTransform_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeFVector_Wrapper_Parms
		{
			FVector VectorValue;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::NewProp_VectorValue = { "VectorValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeFVector_Wrapper_Parms, VectorValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeFVector_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::NewProp_VectorValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize" },
		{ "DisplayName", "Serialize Vector" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeFVector_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeFVector_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeFVector_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFVector_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt32ArrayAsync_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeInt32ArrayAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<int32> arrayToSerialize;
			FString serializedString;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FIntPropertyParams NewProp_arrayToSerialize_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_arrayToSerialize;
		static const UECodeGen_Private::FStrPropertyParams NewProp_serializedString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt32ArrayAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeInt32ArrayAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt32ArrayAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeInt32ArrayAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt32ArrayAsync_Statics::NewProp_arrayToSerialize_Inner = { "arrayToSerialize", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt32ArrayAsync_Statics::NewProp_arrayToSerialize = { "arrayToSerialize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeInt32ArrayAsync_Parms, arrayToSerialize), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt32ArrayAsync_Statics::NewProp_serializedString = { "serializedString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeInt32ArrayAsync_Parms, serializedString), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt32ArrayAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt32ArrayAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt32ArrayAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt32ArrayAsync_Statics::NewProp_arrayToSerialize_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt32ArrayAsync_Statics::NewProp_arrayToSerialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt32ArrayAsync_Statics::NewProp_serializedString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt32ArrayAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Serializes the Array using Async Task so eventhough it's very large the FPS doesn't get affected since it's not run on the Game Thread" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt32ArrayAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeInt32ArrayAsync", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt32ArrayAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt32ArrayAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt32ArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeInt32ArrayAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt32ArrayAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt32ArrayAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt32ArrayAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt32ArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeInt32ArrayAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt32ArrayAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt32ArrayAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeInt64_Wrapper_Parms
		{
			int64 Int64Value;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Int64Value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics::NewProp_Int64Value = { "Int64Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeInt64_Wrapper_Parms, Int64Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeInt64_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics::NewProp_Int64Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize" },
		{ "DisplayName", "Serialize Int64" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeInt64_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeInt64_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeInt64_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64ArrayAsync_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeInt64ArrayAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<int64> arrayToSerialize;
			FString serializedString;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_arrayToSerialize_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_arrayToSerialize;
		static const UECodeGen_Private::FStrPropertyParams NewProp_serializedString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64ArrayAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeInt64ArrayAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64ArrayAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeInt64ArrayAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64ArrayAsync_Statics::NewProp_arrayToSerialize_Inner = { "arrayToSerialize", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64ArrayAsync_Statics::NewProp_arrayToSerialize = { "arrayToSerialize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeInt64ArrayAsync_Parms, arrayToSerialize), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64ArrayAsync_Statics::NewProp_serializedString = { "serializedString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeInt64ArrayAsync_Parms, serializedString), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64ArrayAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64ArrayAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64ArrayAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64ArrayAsync_Statics::NewProp_arrayToSerialize_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64ArrayAsync_Statics::NewProp_arrayToSerialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64ArrayAsync_Statics::NewProp_serializedString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64ArrayAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Serializes the Array using Async Task so eventhough it's very large the FPS doesn't get affected since it's not run on the Game Thread" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64ArrayAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeInt64ArrayAsync", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64ArrayAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64ArrayAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64ArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeInt64ArrayAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64ArrayAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64ArrayAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64ArrayAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64ArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeInt64ArrayAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64ArrayAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64ArrayAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeInt_Wrapper_Parms
		{
			int32 IntValue;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeInt_Wrapper_Parms, IntValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeInt_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics::NewProp_IntValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------- SERIALIZE --------//\n" },
#endif
		{ "DisplayName", "Serialize Int" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "------- SERIALIZE --------" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeInt_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeInt_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeInt_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeNameArrayAsync_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeNameArrayAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FName> arrayToSerialize;
			FString serializedString;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FNamePropertyParams NewProp_arrayToSerialize_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_arrayToSerialize;
		static const UECodeGen_Private::FStrPropertyParams NewProp_serializedString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeNameArrayAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeNameArrayAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeNameArrayAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeNameArrayAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeNameArrayAsync_Statics::NewProp_arrayToSerialize_Inner = { "arrayToSerialize", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeNameArrayAsync_Statics::NewProp_arrayToSerialize = { "arrayToSerialize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeNameArrayAsync_Parms, arrayToSerialize), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeNameArrayAsync_Statics::NewProp_serializedString = { "serializedString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeNameArrayAsync_Parms, serializedString), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeNameArrayAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeNameArrayAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeNameArrayAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeNameArrayAsync_Statics::NewProp_arrayToSerialize_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeNameArrayAsync_Statics::NewProp_arrayToSerialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeNameArrayAsync_Statics::NewProp_serializedString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeNameArrayAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Serializes the Array using Async Task so eventhough it's very large the FPS doesn't get affected since it's not run on the Game Thread" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeNameArrayAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeNameArrayAsync", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeNameArrayAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeNameArrayAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeNameArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeNameArrayAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeNameArrayAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeNameArrayAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeNameArrayAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeNameArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeNameArrayAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeNameArrayAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeNameArrayAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeRotatorArrayAsync_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeRotatorArrayAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FRotator> arrayToSerialize;
			FString serializedString;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_arrayToSerialize_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_arrayToSerialize;
		static const UECodeGen_Private::FStrPropertyParams NewProp_serializedString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeRotatorArrayAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeRotatorArrayAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeRotatorArrayAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeRotatorArrayAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeRotatorArrayAsync_Statics::NewProp_arrayToSerialize_Inner = { "arrayToSerialize", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeRotatorArrayAsync_Statics::NewProp_arrayToSerialize = { "arrayToSerialize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeRotatorArrayAsync_Parms, arrayToSerialize), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeRotatorArrayAsync_Statics::NewProp_serializedString = { "serializedString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeRotatorArrayAsync_Parms, serializedString), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeRotatorArrayAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeRotatorArrayAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeRotatorArrayAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeRotatorArrayAsync_Statics::NewProp_arrayToSerialize_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeRotatorArrayAsync_Statics::NewProp_arrayToSerialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeRotatorArrayAsync_Statics::NewProp_serializedString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeRotatorArrayAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Serializes the Array using Async Task so eventhough it's very large the FPS doesn't get affected since it's not run on the Game Thread" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeRotatorArrayAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeRotatorArrayAsync", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeRotatorArrayAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeRotatorArrayAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeRotatorArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeRotatorArrayAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeRotatorArrayAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeRotatorArrayAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeRotatorArrayAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeRotatorArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeRotatorArrayAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeRotatorArrayAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeRotatorArrayAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeStringArrayAsync_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeStringArrayAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FString> arrayToSerialize;
			FString serializedString;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_arrayToSerialize_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_arrayToSerialize;
		static const UECodeGen_Private::FStrPropertyParams NewProp_serializedString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeStringArrayAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeStringArrayAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeStringArrayAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeStringArrayAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeStringArrayAsync_Statics::NewProp_arrayToSerialize_Inner = { "arrayToSerialize", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeStringArrayAsync_Statics::NewProp_arrayToSerialize = { "arrayToSerialize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeStringArrayAsync_Parms, arrayToSerialize), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeStringArrayAsync_Statics::NewProp_serializedString = { "serializedString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeStringArrayAsync_Parms, serializedString), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeStringArrayAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeStringArrayAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeStringArrayAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeStringArrayAsync_Statics::NewProp_arrayToSerialize_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeStringArrayAsync_Statics::NewProp_arrayToSerialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeStringArrayAsync_Statics::NewProp_serializedString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeStringArrayAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Serializes the Array using Async Task so eventhough it's very large the FPS doesn't get affected since it's not run on the Game Thread" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeStringArrayAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeStringArrayAsync", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeStringArrayAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeStringArrayAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeStringArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeStringArrayAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeStringArrayAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeStringArrayAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeStringArrayAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeStringArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeStringArrayAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeStringArrayAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeStringArrayAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayBool_Wrapper_Parms
		{
			TArray<bool> InBools;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InBools_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBools_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InBools;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::NewProp_InBools_Inner = { "InBools", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::NewProp_InBools_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::NewProp_InBools = { "InBools", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayBool_Wrapper_Parms, InBools), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::NewProp_InBools_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::NewProp_InBools_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayBool_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::NewProp_InBools_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::NewProp_InBools,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "DisplayName", "Serialize Bool Array" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeTArrayBool_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayBool_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayBool_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFColor_Wrapper_Parms
		{
			TArray<FColor> Colors;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Colors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Colors;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::NewProp_Colors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFColor_Wrapper_Parms, Colors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::NewProp_Colors_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::NewProp_Colors_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFColor_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::NewProp_Colors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::NewProp_Colors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "DisplayName", "Serialize Color Array" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeTArrayFColor_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFColor_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFColor_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFloat_Wrapper_Parms
		{
			TArray<float> inFloats;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_inFloats_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inFloats_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_inFloats;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::NewProp_inFloats_Inner = { "inFloats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::NewProp_inFloats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::NewProp_inFloats = { "inFloats", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFloat_Wrapper_Parms, inFloats), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::NewProp_inFloats_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::NewProp_inFloats_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFloat_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::NewProp_inFloats_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::NewProp_inFloats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "DisplayName", "Serialize Float Array" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeTArrayFloat_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFloat_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFloat_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFName_Wrapper_Parms
		{
			TArray<FName> InNames;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InNames;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::NewProp_InNames_Inner = { "InNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::NewProp_InNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::NewProp_InNames = { "InNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFName_Wrapper_Parms, InNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::NewProp_InNames_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::NewProp_InNames_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFName_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::NewProp_InNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::NewProp_InNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "DisplayName", "Serialize Name Array" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeTArrayFName_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFName_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFName_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFRotator_Wrapper_Parms
		{
			TArray<FRotator> inRotator;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inRotator_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inRotator_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_inRotator;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::NewProp_inRotator_Inner = { "inRotator", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::NewProp_inRotator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::NewProp_inRotator = { "inRotator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFRotator_Wrapper_Parms, inRotator), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::NewProp_inRotator_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::NewProp_inRotator_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFRotator_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::NewProp_inRotator_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::NewProp_inRotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "DisplayName", "Serialize Rotator Array" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeTArrayFRotator_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFRotator_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFRotator_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFString_Wrapper_Parms
		{
			TArray<FString> InStrings;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InStrings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStrings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InStrings;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::NewProp_InStrings_Inner = { "InStrings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::NewProp_InStrings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::NewProp_InStrings = { "InStrings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFString_Wrapper_Parms, InStrings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::NewProp_InStrings_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::NewProp_InStrings_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFString_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::NewProp_InStrings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::NewProp_InStrings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "DisplayName", "Serialize String Array" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeTArrayFString_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFString_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFString_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFText_Wrapper_Parms
		{
			TArray<FText> InTexts;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_InTexts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTexts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InTexts;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::NewProp_InTexts_Inner = { "InTexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::NewProp_InTexts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::NewProp_InTexts = { "InTexts", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFText_Wrapper_Parms, InTexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::NewProp_InTexts_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::NewProp_InTexts_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFText_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::NewProp_InTexts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::NewProp_InTexts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "DisplayName", "Serialize Text Array" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeTArrayFText_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFText_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFText_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFTransform_Wrapper_Parms
		{
			TArray<FTransform> inTransform;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inTransform_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inTransform_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_inTransform;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::NewProp_inTransform_Inner = { "inTransform", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::NewProp_inTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::NewProp_inTransform = { "inTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFTransform_Wrapper_Parms, inTransform), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::NewProp_inTransform_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::NewProp_inTransform_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFTransform_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::NewProp_inTransform_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::NewProp_inTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "DisplayName", "Serialize Transform Array" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeTArrayFTransform_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFTransform_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFTransform_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFVector_Wrapper_Parms
		{
			TArray<FVector> inFVector;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inFVector_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inFVector_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_inFVector;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::NewProp_inFVector_Inner = { "inFVector", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::NewProp_inFVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::NewProp_inFVector = { "inFVector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFVector_Wrapper_Parms, inFVector), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::NewProp_inFVector_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::NewProp_inFVector_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFVector_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::NewProp_inFVector_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::NewProp_inFVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "DisplayName", "Serialize Vector Array" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeTArrayFVector_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFVector_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayFVector_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayInt64_Wrapper_Parms
		{
			TArray<int64> InInt64s;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_InInt64s_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInt64s_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InInt64s;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::NewProp_InInt64s_Inner = { "InInt64s", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::NewProp_InInt64s_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::NewProp_InInt64s = { "InInt64s", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayInt64_Wrapper_Parms, InInt64s), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::NewProp_InInt64s_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::NewProp_InInt64s_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayInt64_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::NewProp_InInt64s_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::NewProp_InInt64s,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "DisplayName", "Serialize Int64 Array" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeTArrayInt64_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayInt64_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayInt64_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayInt_Wrapper_Parms
		{
			TArray<int32> InInts;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InInts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InInts;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::NewProp_InInts_Inner = { "InInts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::NewProp_InInts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::NewProp_InInts = { "InInts", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayInt_Wrapper_Parms, InInts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::NewProp_InInts_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::NewProp_InInts_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayInt_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::NewProp_InInts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::NewProp_InInts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------- SERIALIZE ARRAYS --------//\n" },
#endif
		{ "DisplayName", "Serialize Int Array" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "------- SERIALIZE ARRAYS --------" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeTArrayInt_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayInt_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayInt_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayUInt8_Wrapper_Parms
		{
			TArray<uint8> InUInt8s;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InUInt8s_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUInt8s_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InUInt8s;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::NewProp_InUInt8s_Inner = { "InUInt8s", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::NewProp_InUInt8s_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::NewProp_InUInt8s = { "InUInt8s", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayUInt8_Wrapper_Parms, InUInt8s), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::NewProp_InUInt8s_MetaData), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::NewProp_InUInt8s_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayUInt8_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::NewProp_InUInt8s_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::NewProp_InUInt8s,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "DisplayName", "Serialize Byte Array" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeTArrayUInt8_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayUInt8_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeTArrayUInt8_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTextArrayAsync_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeTextArrayAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FText> arrayToSerialize;
			FString serializedString;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FTextPropertyParams NewProp_arrayToSerialize_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_arrayToSerialize;
		static const UECodeGen_Private::FStrPropertyParams NewProp_serializedString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTextArrayAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTextArrayAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTextArrayAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTextArrayAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTextArrayAsync_Statics::NewProp_arrayToSerialize_Inner = { "arrayToSerialize", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTextArrayAsync_Statics::NewProp_arrayToSerialize = { "arrayToSerialize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTextArrayAsync_Parms, arrayToSerialize), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTextArrayAsync_Statics::NewProp_serializedString = { "serializedString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTextArrayAsync_Parms, serializedString), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTextArrayAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTextArrayAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTextArrayAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTextArrayAsync_Statics::NewProp_arrayToSerialize_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTextArrayAsync_Statics::NewProp_arrayToSerialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTextArrayAsync_Statics::NewProp_serializedString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTextArrayAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Serializes the Array using Async Task so eventhough it's very large the FPS doesn't get affected since it's not run on the Game Thread" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTextArrayAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeTextArrayAsync", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTextArrayAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTextArrayAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTextArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeTextArrayAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTextArrayAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTextArrayAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTextArrayAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTextArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeTextArrayAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTextArrayAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTextArrayAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTransformArrayAsync_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeTransformArrayAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FTransform> arrayToSerialize;
			FString serializedString;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_arrayToSerialize_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_arrayToSerialize;
		static const UECodeGen_Private::FStrPropertyParams NewProp_serializedString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTransformArrayAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTransformArrayAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTransformArrayAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTransformArrayAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTransformArrayAsync_Statics::NewProp_arrayToSerialize_Inner = { "arrayToSerialize", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTransformArrayAsync_Statics::NewProp_arrayToSerialize = { "arrayToSerialize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTransformArrayAsync_Parms, arrayToSerialize), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTransformArrayAsync_Statics::NewProp_serializedString = { "serializedString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeTransformArrayAsync_Parms, serializedString), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTransformArrayAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTransformArrayAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTransformArrayAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTransformArrayAsync_Statics::NewProp_arrayToSerialize_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTransformArrayAsync_Statics::NewProp_arrayToSerialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTransformArrayAsync_Statics::NewProp_serializedString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTransformArrayAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Serializes the Array using Async Task so eventhough it's very large the FPS doesn't get affected since it's not run on the Game Thread" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTransformArrayAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeTransformArrayAsync", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTransformArrayAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTransformArrayAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTransformArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeTransformArrayAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTransformArrayAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTransformArrayAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTransformArrayAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTransformArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeTransformArrayAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTransformArrayAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTransformArrayAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeUInt8_Wrapper_Parms
		{
			uint8 UInt8Value;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_UInt8Value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics::NewProp_UInt8Value = { "UInt8Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeUInt8_Wrapper_Parms, UInt8Value), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeUInt8_Wrapper_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics::NewProp_UInt8Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize" },
		{ "DisplayName", "Serialize Byte" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeUInt8_Wrapper", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeUInt8_Wrapper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeUInt8_Wrapper_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUInt8_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUint8ArrayAsync_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeUint8ArrayAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<uint8> arrayToSerialize;
			FString serializedString;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_arrayToSerialize_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_arrayToSerialize;
		static const UECodeGen_Private::FStrPropertyParams NewProp_serializedString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUint8ArrayAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeUint8ArrayAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUint8ArrayAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeUint8ArrayAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUint8ArrayAsync_Statics::NewProp_arrayToSerialize_Inner = { "arrayToSerialize", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUint8ArrayAsync_Statics::NewProp_arrayToSerialize = { "arrayToSerialize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeUint8ArrayAsync_Parms, arrayToSerialize), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUint8ArrayAsync_Statics::NewProp_serializedString = { "serializedString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeUint8ArrayAsync_Parms, serializedString), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUint8ArrayAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUint8ArrayAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUint8ArrayAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUint8ArrayAsync_Statics::NewProp_arrayToSerialize_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUint8ArrayAsync_Statics::NewProp_arrayToSerialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUint8ArrayAsync_Statics::NewProp_serializedString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUint8ArrayAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Serializes the Array using Async Task so eventhough it's very large the FPS doesn't get affected since it's not run on the Game Thread" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUint8ArrayAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeUint8ArrayAsync", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUint8ArrayAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUint8ArrayAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUint8ArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeUint8ArrayAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUint8ArrayAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUint8ArrayAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUint8ArrayAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUint8ArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeUint8ArrayAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUint8ArrayAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUint8ArrayAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeVectorArrayAsync_Statics
	{
		struct RVPDPRapidJsonFunctionLibrary_eventSerializeVectorArrayAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FVector> arrayToSerialize;
			FString serializedString;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_arrayToSerialize_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_arrayToSerialize;
		static const UECodeGen_Private::FStrPropertyParams NewProp_serializedString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeVectorArrayAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeVectorArrayAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeVectorArrayAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeVectorArrayAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeVectorArrayAsync_Statics::NewProp_arrayToSerialize_Inner = { "arrayToSerialize", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeVectorArrayAsync_Statics::NewProp_arrayToSerialize = { "arrayToSerialize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeVectorArrayAsync_Parms, arrayToSerialize), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeVectorArrayAsync_Statics::NewProp_serializedString = { "serializedString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RVPDPRapidJsonFunctionLibrary_eventSerializeVectorArrayAsync_Parms, serializedString), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeVectorArrayAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeVectorArrayAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeVectorArrayAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeVectorArrayAsync_Statics::NewProp_arrayToSerialize_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeVectorArrayAsync_Statics::NewProp_arrayToSerialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeVectorArrayAsync_Statics::NewProp_serializedString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeVectorArrayAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Serializes the Array using Async Task so eventhough it's very large the FPS doesn't get affected since it's not run on the Game Thread" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeVectorArrayAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, nullptr, "SerializeVectorArrayAsync", nullptr, nullptr, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeVectorArrayAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeVectorArrayAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeVectorArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeVectorArrayAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeVectorArrayAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeVectorArrayAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeVectorArrayAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeVectorArrayAsync_Statics::RVPDPRapidJsonFunctionLibrary_eventSerializeVectorArrayAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeVectorArrayAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeVectorArrayAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URVPDPRapidJsonFunctionLibrary);
	UClass* Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary_NoRegister()
	{
		return URVPDPRapidJsonFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RVPDPRapidJson,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeBool_Wrapper, "DeserializeBool_Wrapper" }, // 2323007600
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeBoolArrayAsync, "DeSerializeBoolArrayAsync" }, // 576100601
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeColorArrayAsync, "DeSerializeColorArrayAsync" }, // 3687160718
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFColor_Wrapper, "DeserializeFColor_Wrapper" }, // 1360378456
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFloat_Wrapper, "DeserializeFloat_Wrapper" }, // 4001648891
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeFloatArrayAsync, "DeSerializeFloatArrayAsync" }, // 726881991
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFName_Wrapper, "DeserializeFName_Wrapper" }, // 4223751833
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFRotator_Wrapper, "DeserializeFRotator_Wrapper" }, // 3178673261
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFString_Wrapper, "DeserializeFString_Wrapper" }, // 665532277
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFText_Wrapper, "DeserializeFText_Wrapper" }, // 882601626
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFTransform_Wrapper, "DeserializeFTransform_Wrapper" }, // 4152363355
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeFVector_Wrapper, "DeserializeFVector_Wrapper" }, // 1776936583
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt32ArrayAsync, "DeSerializeInt32ArrayAsync" }, // 2075205242
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt64_Wrapper, "DeserializeInt64_Wrapper" }, // 2185825699
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeInt64ArrayAsync, "DeSerializeInt64ArrayAsync" }, // 783999042
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeInt_Wrapper, "DeserializeInt_Wrapper" }, // 1300515824
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeNameArrayAsync, "DeSerializeNameArrayAsync" }, // 305435644
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeRotatorArrayAsync, "DeSerializeRotatorArrayAsync" }, // 1578562263
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeStringArrayAsync, "DeSerializeStringArrayAsync" }, // 1455869883
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper, "DeserializeTArrayBool_Wrapper" }, // 3714567194
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper, "DeserializeTArrayFColor_Wrapper" }, // 2406078059
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper, "DeserializeTArrayFloat_Wrapper" }, // 3983930312
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper, "DeserializeTArrayFName_Wrapper" }, // 2875912704
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper, "DeserializeTArrayFRotator_Wrapper" }, // 2476740383
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper, "DeserializeTArrayFString_Wrapper" }, // 2700147524
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper, "DeserializeTArrayFText_Wrapper" }, // 3270414853
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper, "DeserializeTArrayFTransform_Wrapper" }, // 3536567677
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper, "DeserializeTArrayFVector_Wrapper" }, // 1314045273
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper, "DeserializeTArrayInt64_Wrapper" }, // 2365252388
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper, "DeserializeTArrayInt_Wrapper" }, // 1171515723
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper, "DeserializeTArrayUInt8_Wrapper" }, // 2636941368
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTextArrayAsync, "DeSerializeTextArrayAsync" }, // 258996401
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeTransformArrayAsync, "DeSerializeTransformArrayAsync" }, // 3359967318
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeserializeUInt8_Wrapper, "DeserializeUInt8_Wrapper" }, // 2609413528
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeUInt8ArrayAsync, "DeSerializeUInt8ArrayAsync" }, // 3541166818
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_DeSerializeVectorArrayAsync, "DeSerializeVectorArrayAsync" }, // 670669845
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBool_Wrapper, "SerializeBool_Wrapper" }, // 3108842485
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeBoolArrayAsync, "SerializeBoolArrayAsync" }, // 2039533739
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeColorArrayAsync, "SerializeColorArrayAsync" }, // 2810571691
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFColor_Wrapper, "SerializeFColor_Wrapper" }, // 3471408920
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloat_Wrapper, "SerializeFloat_Wrapper" }, // 248460251
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFloatArrayAsync, "SerializeFloatArrayAsync" }, // 3001034215
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFName_Wrapper, "SerializeFName_Wrapper" }, // 879447735
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFRotator_Wrapper, "SerializeFRotator_Wrapper" }, // 658763230
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFString_Wrapper, "SerializeFString_Wrapper" }, // 219852010
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFText_Wrapper, "SerializeFText_Wrapper" }, // 2907896754
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFTransform_Wrapper, "SerializeFTransform_Wrapper" }, // 2109041079
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeFVector_Wrapper, "SerializeFVector_Wrapper" }, // 3516716524
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt32ArrayAsync, "SerializeInt32ArrayAsync" }, // 899318704
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64_Wrapper, "SerializeInt64_Wrapper" }, // 1305931514
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt64ArrayAsync, "SerializeInt64ArrayAsync" }, // 869674047
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeInt_Wrapper, "SerializeInt_Wrapper" }, // 1712084007
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeNameArrayAsync, "SerializeNameArrayAsync" }, // 3730025511
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeRotatorArrayAsync, "SerializeRotatorArrayAsync" }, // 1739912388
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeStringArrayAsync, "SerializeStringArrayAsync" }, // 3285558194
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper, "SerializeTArrayBool_Wrapper" }, // 3752448734
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper, "SerializeTArrayFColor_Wrapper" }, // 3345615472
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper, "SerializeTArrayFloat_Wrapper" }, // 70045073
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper, "SerializeTArrayFName_Wrapper" }, // 788610784
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper, "SerializeTArrayFRotator_Wrapper" }, // 987078346
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper, "SerializeTArrayFString_Wrapper" }, // 925978358
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper, "SerializeTArrayFText_Wrapper" }, // 29232808
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper, "SerializeTArrayFTransform_Wrapper" }, // 4163665906
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper, "SerializeTArrayFVector_Wrapper" }, // 2014949907
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper, "SerializeTArrayInt64_Wrapper" }, // 2999481776
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper, "SerializeTArrayInt_Wrapper" }, // 2226370083
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper, "SerializeTArrayUInt8_Wrapper" }, // 1919127106
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTextArrayAsync, "SerializeTextArrayAsync" }, // 2289978172
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeTransformArrayAsync, "SerializeTransformArrayAsync" }, // 1553036296
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUInt8_Wrapper, "SerializeUInt8_Wrapper" }, // 932167986
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeUint8ArrayAsync, "SerializeUint8ArrayAsync" }, // 2423074083
		{ &Z_Construct_UFunction_URVPDPRapidJsonFunctionLibrary_SerializeVectorArrayAsync, "SerializeVectorArrayAsync" }, // 4251715046
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RVPDPRapidJsonFunctionLibrary.h" },
		{ "ModuleRelativePath", "RVPDPRapidJsonFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URVPDPRapidJsonFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary_Statics::ClassParams = {
		&URVPDPRapidJsonFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_URVPDPRapidJsonFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URVPDPRapidJsonFunctionLibrary.OuterSingleton, Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URVPDPRapidJsonFunctionLibrary.OuterSingleton;
	}
	template<> RVPDPRAPIDJSON_API UClass* StaticClass<URVPDPRapidJsonFunctionLibrary>()
	{
		return URVPDPRapidJsonFunctionLibrary::StaticClass();
	}
	URVPDPRapidJsonFunctionLibrary::URVPDPRapidJsonFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URVPDPRapidJsonFunctionLibrary);
	URVPDPRapidJsonFunctionLibrary::~URVPDPRapidJsonFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_RVPDPRapidJson_RVPDPRapidJsonFunctionLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_RVPDPRapidJson_RVPDPRapidJsonFunctionLibrary_h_Statics::ScriptStructInfo[] = {
		{ FRVPDPRapidJsonCustomStructSerialization::StaticStruct, Z_Construct_UScriptStruct_FRVPDPRapidJsonCustomStructSerialization_Statics::NewStructOps, TEXT("RVPDPRapidJsonCustomStructSerialization"), &Z_Registration_Info_UScriptStruct_RVPDPRapidJsonCustomStructSerialization, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRVPDPRapidJsonCustomStructSerialization), 2417589057U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_RVPDPRapidJson_RVPDPRapidJsonFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URVPDPRapidJsonFunctionLibrary, URVPDPRapidJsonFunctionLibrary::StaticClass, TEXT("URVPDPRapidJsonFunctionLibrary"), &Z_Registration_Info_UClass_URVPDPRapidJsonFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URVPDPRapidJsonFunctionLibrary), 2165560737U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_RVPDPRapidJson_RVPDPRapidJsonFunctionLibrary_h_1957553131(TEXT("/Script/RVPDPRapidJson"),
		Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_RVPDPRapidJson_RVPDPRapidJsonFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_RVPDPRapidJson_RVPDPRapidJsonFunctionLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_RVPDPRapidJson_RVPDPRapidJsonFunctionLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kuba_Documents_GitHub_Household_Hustle_Household_Hustle_Plugins_VertexPaintDetectionPlugin_Source_RVPDPRapidJson_RVPDPRapidJsonFunctionLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
