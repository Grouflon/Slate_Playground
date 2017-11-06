// Fill out your copyright notice in the Description page of Project Settings.

#include "SStandardSlateWidget.h"
#include "SlateOptMacros.h"

#include <Engine/Font.h>
#include <Widgets/SWindow.h>
#include <Widgets/Text/STextBlock.h>

#include "StandardHUD.h"

#define LOCTEXT_NAMESPACE "SStandardSlateWidget"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SStandardSlateWidget::Construct(const FArguments& InArgs)
{
	OwnerHUD = InArgs._OwnerHUD;

	const FText title = FText::FromString(TEXT("LOLWINDOW"));
	/* 
	UObject* obj_ptr = StaticLoadObject(UFont::StaticClass(), NULL,
		TEXT("/Game/Fonts/CompositeVerdana"));
	UFont* font_ptr = Cast<UFont>(obj_ptr);
	*/
	 
	ChildSlot
	.VAlign(VAlign_Fill)
	.HAlign(HAlign_Fill)
	[
		SNew(SWindow)
		.Title(title)
		.HasCloseButton(false)
		.SizingRule(ESizingRule::Autosized)
		[
			SNew(STextBlock)
			.ShadowColorAndOpacity(FLinearColor::Black)
			.ColorAndOpacity(FLinearColor::Red)
			.ShadowOffset(FIntPoint(-1, 1))
			.Font(FSlateFontInfo(OwnerHUD->DebugGUIFont, 24))
			.Text(LOCTEXT("HelloSlate", "Hello, Slate!"))
		]
	];
	
}
END_SLATE_FUNCTION_BUILD_OPTIMIZATION

#undef LOCTEXT_NAMESPACE