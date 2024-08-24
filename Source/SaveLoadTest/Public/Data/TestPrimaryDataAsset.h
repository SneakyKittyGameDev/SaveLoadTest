// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TestPrimaryDataAsset.generated.h"

USTRUCT(BlueprintType)
struct FTestData
{
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Test")
	FString item {""};
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Test")
	float value {-1.0f};
};

UCLASS()
class SAVELOADTEST_API UTestPrimaryDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Test")
	FTestData TestData;

	UFUNCTION(BlueprintPure, Category = "Test")
	static FString SerializeTestData(const UTestPrimaryDataAsset* TestDataAsset);
	UFUNCTION(BlueprintPure, Category = "Test")
	static FTestData DeserializeTestData(const FString& String);
	UFUNCTION(BlueprintCallable, Category = "Test")
	void ApplyTestDataToDataAsset(const FTestData& Data);
};
