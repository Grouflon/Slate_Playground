// Fill out your copyright notice in the Description page of Project Settings.

#include "StandardHUD.h"

#include <Widgets/SWeakWidget.h>

#include "SStandardSlateWidget.h"

void AStandardHUD::BeginPlay()
{
	Super::BeginPlay();

	MyUIWidget = SNew(SStandardSlateWidget).OwnerHUD(this);

	GEngine->GameViewport->AddViewportWidgetContent(SNew(SWeakWidget).PossiblyNullContent(MyUIWidget.ToSharedRef()));

	MyUIWidget->SetVisibility(EVisibility::Visible);
}

