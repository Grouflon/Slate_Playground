// Fill out your copyright notice in the Description page of Project Settings.

#include "Slate_Playground.h"

#include <Modules/ModuleManager.h>
#include <LevelEditor.h>
#include <MultiBox/MultiBoxBuilder.h>
#include <Widgets/Docking/SDockTab.h>
#include <WorkspaceMenuStructure.h>
#include <WorkspaceMenuStructureModule.h>


#define LOCTEXT_NAMESPACE "SStandardSlateWidget"

class FSlatePlaygroundGameModuleImpl
	: public FDefaultGameModuleImpl
{
public:

	static void MenuEntryExecuteAction()
	{
		UE_LOG(LogTemp, Log, TEXT("Menu Action"));
	}

	static void CreateMenuEntry(FMenuBuilder& MenuBuilder)
	{
		FUIAction action = FUIAction(FExecuteAction::CreateStatic(&FSlatePlaygroundGameModuleImpl::MenuEntryExecuteAction));

		TSharedRef<STextBlock> text = SNew(STextBlock)
			.Text(LOCTEXT("HelloSlate", "Hello, Slate!"));

		MenuBuilder.AddMenuEntry(action, text);
	}

	static TSharedRef<SDockTab> MakeNomadTab(const FSpawnTabArgs&)
	{
		TSharedRef<SDockTab> WidgetReflectorTab = SNew(SDockTab)
			.TabRole(ETabRole::NomadTab);
		//WidgetReflectorTab->SetContent(GetWidgetReflector(WidgetReflectorTab));
		return WidgetReflectorTab;
	}

	virtual void StartupModule() override
	{
		UE_LOG(LogTemp, Log, TEXT("Module started"));
		
		FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");

		/*m_menuExtender = TSharedPtr<FExtender>(new FExtender());
		m_menuExtender->AddMenuExtension(
			TEXT("LevelEditor"),
			EExtensionHook::After,
			nullptr,
			FMenuExtensionDelegate::CreateStatic(&FSlatePlaygroundGameModuleImpl::CreateMenuEntry)
		);
		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(m_menuExtender);
		*/

		FTabSpawnerEntry& SpawnerEntry = FGlobalTabmanager::Get()->RegisterTabSpawner(TEXT("NomadTab"), FOnSpawnTab::CreateStatic(&FSlatePlaygroundGameModuleImpl::MakeNomadTab))
			.SetDisplayName(LOCTEXT("NomadTabTitle", "Nomad Tab"))
			.SetTooltipText(LOCTEXT("NomadTabTooltipText", "Open the Nomad tab."))
			.SetGroup(WorkspaceMenu::GetMenuStructure().GetLevelEditorCategory())
			.SetIcon(FSlateIcon(FCoreStyle::Get().GetStyleSetName(), "WidgetReflector.TabIcon"))
			;

		SpawnerEntry.SetAutoGenerateMenuEntry(true);
		SpawnerEntry.SetMenuType(ETabSpawnerMenuType::Enabled);
		LevelEditorModule.OnRegisterTabs().Broadcast(FGlobalTabmanager::Get());

		FGlobalTabmanager::Get()->InvokeTab(FTabId(TEXT("NomadTab")));
	}

	virtual void ShutdownModule() override
	{
		FGlobalTabmanager::Get()->UnregisterTabSpawner(TEXT("NomadTab"));

		/*
		FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
		LevelEditorModule.GetMenuExtensibilityManager()->RemoveExtender(m_menuExtender);
		m_menuExtender.Reset();
		*/

		UE_LOG(LogTemp, Log, TEXT("Module shut down"));
	}

private:
	TSharedPtr<FExtender> m_menuExtender;
};

#undef LOCTEXT_NAMESPACE

IMPLEMENT_PRIMARY_GAME_MODULE( FSlatePlaygroundGameModuleImpl, Slate_Playground, "Slate_Playground" );
