// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "StandardHUD.generated.h"

class SStandardSlateWidget;

/**
 * 
 */
UCLASS()
class SLATE_PLAYGROUND_API AStandardHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere) UFont* DebugGUIFont;

private:

	TSharedPtr<SStandardSlateWidget> MyUIWidget;
};
