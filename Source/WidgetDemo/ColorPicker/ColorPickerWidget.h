// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "UObject/Object.h"
#include "ColorPickerWidget.generated.h"

/**
 * 
 */
UCLASS()
class WIDGETDEMO_API UColorPickerWidget : public UWidget
{
	GENERATED_BODY()

protected:
	virtual TSharedRef<SWidget> RebuildWidget() override;

public:
#if WITH_EDITOR
	virtual const FText GetPaletteCategory() override;
#endif
};
