// Copyright (c) 2020 Arunoda Susiripala. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "SimpleJsonValue.h"
#include "UObject/NoExportTypes.h"
#include "SimpleJson.generated.h"

/**
 * 
 */
UCLASS()
class FETCH_API USimpleJson : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Scripting | Javascript")
	static USimpleJsonValue* MakeJson(FString InputJson);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Scripting | Javascript")
	static USimpleJsonValue* MakeJsonNumber(float Number);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Scripting | Javascript")
	static USimpleJsonValue* MakeJsonBool(bool Value);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Scripting | Javascript")
	static USimpleJsonValue* MakeJsonString(FString Value);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Scripting | Javascript")
	static USimpleJsonValue* MakeJsonNull();
};
