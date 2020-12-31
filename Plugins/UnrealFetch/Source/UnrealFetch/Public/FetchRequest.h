// Copyright (c) 2020 Arunoda Susiripala. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IFetch.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "FetchRequest.generated.h"

/**
 *
 */
UCLASS()
class UNREALFETCH_API UFetchRequest : public UObject
{
	GENERATED_BODY()

public:
	UFetchRequest();
	void Process(FString URL, FFetchOptions Options);

	UFUNCTION(BlueprintCallable)
		UFetchRequest* OnText(FFetchTextResponseDelegate Event);

	UFUNCTION(BlueprintCallable)
		UFetchRequest* OnError(FFetchErrorDelegate Event);

	UFUNCTION(BlueprintCallable)
		UFetchRequest* OnJson(FFetchJsonResponseDelegate Event);

private:
	bool bStarted = false;
	bool bFinished = false;
	bool bSuccessful = false;
	UFetchResponse* FetchResponse;
	FString ResponseText;

	FFetchTextResponseDelegate OnTextDelegate;
	FFetchErrorDelegate OnErrorDelegate;
	FFetchJsonResponseDelegate OnJsonDelegate;

	void OnResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bSuccess);
	FString HttpMethodToString(FFetchOptionsMethod Method);
};

