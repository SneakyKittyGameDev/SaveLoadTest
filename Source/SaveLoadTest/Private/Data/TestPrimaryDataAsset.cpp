// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveLoadTest/Public/Data/TestPrimaryDataAsset.h"

#include "JsonObjectConverter.h"

FString UTestPrimaryDataAsset::SerializeTestData(const UTestPrimaryDataAsset* TestDataAsset)
{
	FString Serialized;
	FJsonObjectConverter::UStructToJsonObjectString(TestDataAsset->TestData, Serialized);
	return Serialized;
}

FTestData UTestPrimaryDataAsset::DeserializeTestData(const FString& String)
{
	FTestData TestData;
	FJsonObjectConverter::JsonObjectStringToUStruct(String, &TestData);
	return TestData;
}

void UTestPrimaryDataAsset::ApplyTestDataToDataAsset(const FTestData& Data)
{
	TestData = Data;
}
