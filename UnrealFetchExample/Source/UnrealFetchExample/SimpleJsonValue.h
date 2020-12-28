// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SimpleJsonObject.h"
#include "SimpleJsonValue.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class UNREALFETCHEXAMPLE_API USimpleJsonValue : public UObject
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, BlueprintPure)
	float AsNumber();

	UFUNCTION(BlueprintCallable, BlueprintPure)
	FString AsString();

	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool AsBool();

	UFUNCTION(BlueprintCallable, BlueprintPure)
	USimpleJsonObject* AsObject();

	UFUNCTION(BlueprintCallable, BlueprintPure)
	TArray<USimpleJsonValue*> AsArray();

	static USimpleJsonValue* Get(TSharedPtr<FJsonValue> JsonValue);

public:
	TSharedPtr<FJsonValue> Original;
};