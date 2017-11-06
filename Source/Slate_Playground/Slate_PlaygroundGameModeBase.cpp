// Fill out your copyright notice in the Description page of Project Settings.

#include "Slate_PlaygroundGameModeBase.h"

#include "StandardHUD.h"

ASlate_PlaygroundGameModeBase::ASlate_PlaygroundGameModeBase() : Super()
{
	HUDClass = AStandardHUD::StaticClass();
}