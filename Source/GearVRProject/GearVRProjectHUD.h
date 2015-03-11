// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "GearVRProjectHUD.generated.h"

UCLASS()
class AGearVRProjectHUD : public AHUD
{
	GENERATED_BODY()

public:
	AGearVRProjectHUD(const FObjectInitializer& ObjectInitializer);

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

