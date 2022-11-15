// Fill out your copyright notice in the Description page of Project Settings.


#include "ColorPickerWidget.h"
#include "Widgets/Colors/SColorPicker.h"
TSharedRef<SWidget> UColorPickerWidget::RebuildWidget()
{
	return SNew(SColorPicker);
}

#if WITH_EDITOR
const FText UColorPickerWidget::GetPaletteCategory()
{
	return FText::FromString("ColorPicker");
}
#endif