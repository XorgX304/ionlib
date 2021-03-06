#pragma once

#include "sdk.h"
#include "netvar.h"
#include "../../render/csgo/csgorender.h"

namespace ion
{
	class interfaces
	{
	public:
		IBaseClientDLL* gClient;
		IVEngineClient* gEngine;
		ICvar *gCvar;
		SurfaceV30::ISurface* gSurface;
		vgui::IPanel* gPanel;
		IClientEntityList* gEnt;
		IVModelInfoClient* gModelInfo;
		CGlobalVarsBase* pGlobals;
		CInput* gInput;
		IEngineTrace* gTrace;
		IMaterialSystem* gMatSystem;
		IVModelRender* gModelRender;
		CGlobalVarsBase* gGlobalVars;
		IVDebugOverlay* gDebugOverlay;

		DWORD* pGlobalSpeed;
		DWORD wepSeedOffset;
		DWORD spreadOffset;

		module modClient, modEngine;

		vmt* clientHk, *inputHk, *panelHk, *modelRenderHk;
		netvar* nvar;
		csgorender* render;

		//address
		DWORD weaponIDAsString;

		//materials
		IMaterial* mat_tArms;

		//fonts
		csgofont* tahoma12;
	};
};