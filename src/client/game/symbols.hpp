#pragma once

#define WEAK __declspec(selectany)

namespace game
{
	// Functions
	
	WEAK symbol<void(int type, VariableUnion u)> AddRefToValue{0x1405C0EB0};
	WEAK symbol<void(unsigned int id)> AddRefToObject{0x1405C0EA0};
	WEAK symbol<unsigned int(unsigned int id)> AllocThread{0x1405C1200};
	WEAK symbol<ObjectVariableValue*(unsigned int* id)> AllocVariable{0x1405C1260};
	WEAK symbol<void(int type, VariableUnion u)> RemoveRefToValue{0x1405C29B0};
	WEAK symbol<void(unsigned int id)> RemoveRefToObject{0x1405C28A0};

	WEAK symbol<void(unsigned int weapon, bool isAlternate, 
		char* output, unsigned int maxStringLen)> BG_GetWeaponNameComplete{0x1406A0800};

	WEAK symbol<void(int localClientNum, const char* text)> Cbuf_AddText{0x14059A050};

	WEAK symbol<void(int localClientNum, const char* message)> CG_GameMessage{0x14037F450};
	WEAK symbol<void(int localClientNum, const char* message)> CG_GameMessageBold{0x14037F1B0};
	WEAK symbol<char*(const unsigned int weapon, 
		bool isAlternate, char* outputBuffer, int bufferLen)> CG_GetWeaponDisplayName{0x1403B9210};

	WEAK symbol<void(const char* cmdName, void(), cmd_function_s* allocedCmd)> Cmd_AddCommandInternal{0x14059A5F0};
	WEAK symbol<void(int localClientNum, int controllerIndex, const char* text)> Cmd_ExecuteSingleCommand{0x14059ABA0};

	WEAK symbol<void(errorParm code, const char* message, ...)> Com_Error{0x1405A2D80};
	WEAK symbol<void(char const* finalMessage)> Com_Shutdown{0x1405A62C0};
	WEAK symbol<void()> Com_Quit_f{0x1405A50D0};
	WEAK symbol<bool()> Com_InFrontend{0x140328BD0};
	WEAK symbol<void()> Quit{0x1405A52A0};

	WEAK symbol<void(XAssetType type, void(__cdecl* func)(game::XAssetHeader, void*), const void* inData, bool includeOverride)>
		DB_EnumXAssets_Internal{0x1404129F0};
	WEAK symbol<const char*(const XAsset* asset)> DB_GetXAssetName{0x1403E4090};
	WEAK symbol<void(XZoneInfo* zoneInfo, unsigned int zoneCount, DBSyncMode syncMode)> DB_LoadXAssets{0x140414FF0};
	WEAK symbol<XAssetHeader(XAssetType type, const char* name, int allowCreateDefault)> DB_FindXAssetHeader{0x140412F60};
	WEAK symbol<DB_FileSysInterface*()> DB_FSInitialize{0x140272EC0};
	WEAK symbol<int(const RawFile* rawfile)> DB_GetRawFileLen{0x140413D80};
	WEAK symbol<int(const RawFile* rawfile, char* buf, int size)> DB_GetRawBuffer{0x140413C40};

	WEAK symbol<dvar_t*(const char* name)> Dvar_FindVar{0x140618F90};
	WEAK symbol<void(char* buffer, int index)> Dvar_GetCombinedString{0x1405A75D0};
	WEAK symbol<dvar_t*(int hash, const char* name, bool value, unsigned int flags)> Dvar_RegisterBool{0x140617BB0};
	WEAK symbol<dvar_t*(int hash, const char* name, const char** valueList, int defaultIndex, unsigned int flags)> Dvar_RegisterEnum{0x140617E90};
	WEAK symbol<dvar_t*(int hash, const char* name, int value, int min, int max, unsigned int flags)> Dvar_RegisterInt{0x140618090};
	WEAK symbol<dvar_t*(int hash, const char* dvarName, float value, float min, float max, unsigned int flags)>
		Dvar_RegisterFloat{0x140617F80};
	WEAK symbol<dvar_t*(int hash, const char* dvarName, const char* value, unsigned int flags)>
		Dvar_RegisterString{0x140618170};
	WEAK symbol<dvar_t*(int dvarName, const char* a2, float x, float y, float z, float w, float min, float max,
		unsigned int flags)> Dvar_RegisterVec4{0x1406185F0};
	WEAK symbol<const char*(const dvar_t* dvar)> Dvar_DisplayableValue{0x140618EA0};
	WEAK symbol<const char*(dvar_t* dvar, void* a2, void* value)> Dvar_ValueToString{0x14061B8F0};
	WEAK symbol<void(int hash, const char* name, const char* buffer)> Dvar_SetCommand{0x14061A5C0};
	WEAK symbol<void(const char* dvarName, const char* string, DvarSetSource source)> Dvar_SetFromStringFromSource{0x14061A910};

	WEAK symbol<int(const char* fname)> generateHashValue{0x140343D20};

	WEAK symbol<bool()> CL_IsCgameInitialized{0x1403CA0C0};
	WEAK symbol<void(const char* text, int maxChars, Font_s* font, float x, float y, float xScale, float yScale,
		const float* color, int style, const float* glowColor, Material* fxMaterial, Material* fxMaterialGlow,
		int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int fxDecayDuration, int a17)> CL_DrawTextPhysicalWithEffects{0x1403D4990};

	WEAK symbol<unsigned int(unsigned int parentId, unsigned int name)> FindVariable{0x1405C1D50};
	WEAK symbol<unsigned int(int entnum, unsigned int classnum)> FindEntityId{0x1405C1C50};
	WEAK symbol<void(VariableValue* result, unsigned int classnum, int entnum, int offset)> GetEntityFieldValue{0x1405C6100};
	WEAK symbol<unsigned int(unsigned int parentId, unsigned int unsignedValue)> GetVariable{0x1405C2690};
	WEAK symbol<unsigned int(unsigned int parentId, unsigned int unsignedValue)> GetNewVariable{0x1405C22B0};
	WEAK symbol<unsigned int(unsigned int parentId, unsigned int unsignedValue)> GetNewArrayVariable{0x1405C2130};
	WEAK symbol<void(unsigned int parentId, unsigned int id, VariableValue* value)> SetNewVariableValue{0x1405C5EA0};
	WEAK symbol<void(unsigned int parentId, unsigned int index)> RemoveVariableValue{0x1405C2A50};

	WEAK symbol<unsigned int(const char* name)> G_GetWeaponForName{0x14051B260};
	WEAK symbol<int(void* ps, unsigned int weapon, int a3, int a4, __int64 a5, int a6)> 
		G_GivePlayerWeapon{0x14051B660};
	WEAK symbol<void(void* ps, const unsigned int weapon, int hadWeapon)> G_InitializeAmmo{0x1404C4110};
	WEAK symbol<void(int clientNum, const unsigned int weapon)> G_SelectWeapon{0x14051C0D0};
	WEAK symbol<bool(int localClientNum, ScreenPlacement* screenPlacement, const float* worldDir, float* outScreenPos)> WorldPosToScreenPos{0x14036F310};

	WEAK symbol<char*(char* string)> I_CleanStr{0x140620660};

	WEAK symbol<char*(GfxImage* image, uint32_t width, uint32_t height, uint32_t depth, uint32_t mipCount, 
		uint32_t imageFlags, DXGI_FORMAT imageFormat, int a8, const char* name, const void* initData)> Image_Setup{0x14074B2A0};

	WEAK symbol<const char*(int, int, int)> Key_KeynumToString{0x1403D32D0};

	WEAK symbol<void(int clientNum, const char* menu, int a3, int a4, unsigned int a5)> LUI_OpenMenu{0x1405F0EE0};
	WEAK symbol<bool(int clientNum, const char* name, hks::lua_State* s)> LUI_BeginEvent{0x1403155E0};
	WEAK symbol<void(hks::lua_State* s)> LUI_EndEvent{0x140316890};
	WEAK symbol<void()> LUI_EnterCriticalSection{0x140316980};
	WEAK symbol<void()> LUI_LeaveCriticalSection{0x14031BC20};
	WEAK symbol<bool(int clientNum, const char* menu)> Menu_IsMenuOpenAndVisible{0x1405EE1A0};

	WEAK symbol<Material*(const char* material)> Material_RegisterHandle{0x140759BA0};

	WEAK symbol<void(pathnode_t*, float* out)> PathNode_WorldifyPosFromParent{0x140525830};

	WEAK symbol<const float*(const float* v)> Scr_AllocVector{0x1405C3220};
	WEAK symbol<void()> Scr_ClearOutParams{0x1405C6E50};
	WEAK symbol<scr_entref_t(unsigned int entId)> Scr_GetEntityIdRef{0x1405C56C0};
	WEAK symbol<unsigned int(int entnum, unsigned int classnum)> Scr_GetEntityId{0x1405C5610};
	WEAK symbol<int(unsigned int classnum, int entnum, int offset)> Scr_SetObjectField{0x140512190};
	WEAK symbol<void(unsigned int id, scr_string_t stringValue, unsigned int paramcount)> Scr_NotifyId{0x1405C8240};
	WEAK symbol<unsigned int(unsigned int threadId)> Scr_GetSelf{0x1405C57C0};
	WEAK symbol<void()> Scr_ErrorInternal{0x1405C6EC0};

	WEAK symbol<unsigned int(unsigned int localId, const char* pos, unsigned int paramcount)> VM_Execute{0x1405C8DB0};

	WEAK symbol<void(float x, float y, float width, float height, float s0, float t0, float s1, float t1,
					 float* color, Material* material)> R_AddCmdDrawStretchPic{0x1403C9710};
	WEAK symbol<void(float x, float y, float width, float height, float s0, float t0, float s1, float t1,
					 float angle, float* color, Material* material)> R_AddCmdDrawStretchPicRotateXY{0x1403C99B0};
	WEAK symbol<void*(const char* text, int maxChars, Font_s* font, float x, float y, float xScale, float yScale, 
					 float rotation, float* color, int style)> R_AddCmdDrawText{0x14076C660};
	WEAK symbol<void(const char* text, int maxChars, Font_s* font, float x, float y, float xScale, float yScale, 
					 float rotation, float* color1, float* color2, int style)> R_AddCmdDrawText2{0x14076C860};
	WEAK symbol<void(rectangle* rect, float a2, float a3, float a4, float a5, float* color, Material* material)> R_DrawRectangle{0x14076A280};
	WEAK symbol<void(const char* text, int maxChars, Font_s* font, int fontSize, float x, float y, float xScale, float yScale, float rotation, 
		const float* color, int style, int cursorPos, char cursor)> R_AddCmdDrawTextWithCursor{0x14076CAF0};
	WEAK symbol<void*(const char* text, int maxChars, Font_s* font, float x, float y, float xScale, float yScale,
		int a8, float* color1, unsigned int style, rgba color2)> R_AddCmdDrawTextGradient{0x14076C570};
	WEAK symbol<Font_s*(const char* font, int size)> R_RegisterFont{0x140746FE0};
	WEAK symbol<int(const char* text, int maxChars, Font_s* font)> R_TextWidth{0x1407472A0};
	WEAK symbol<void()> R_SyncRenderThread{0x14076E7D0};
	WEAK symbol<void()> R_WaitWorkerCmds{0x140794330};
	WEAK symbol<void(const void* obj, void* pose, unsigned int entnum, unsigned int renderFxFlags, float* lightingOrigin, 
		float materialTime, __int64 a7, __int64 a8)> R_AddDObjToScene{0x140775C40};
	WEAK symbol<HANDLE(unsigned __int64* outUserData, void* dest, unsigned __int64 bytes)> R_Cinematic_SysIO_BinkRead{0x1407191B0};

	WEAK symbol<ScreenPlacement*()> ScrPlace_GetViewPlacement{0x1403E16A0};
	WEAK symbol<ScreenPlacement*()> ScrPlace_GetView{0x1403E1660};

	WEAK symbol<const char*(scr_string_t stringValue)> SL_ConvertToString{0x1405BFBB0};
	WEAK symbol<scr_string_t(const char* str, unsigned int user)> SL_GetString{0x1405C0170};

	WEAK symbol<bool()> SV_Loaded{0x1406B3860};

	WEAK symbol<void()> Sys_ShowConsole{0x140633080};
	WEAK symbol<bool()> Sys_IsDatabaseReady2{0x1405A9FE0};
	WEAK symbol<int()> Sys_Milliseconds{0x140650720};
	WEAK symbol<bool()> Sys_IsMainThread{0x1405AA020};
	WEAK symbol<void(int critSec)> Sys_EnterCriticalSection{0x140624240};
	WEAK symbol<void(int critSec)> Sys_LeaveCriticalSection{0x1406242C0};

	WEAK symbol<const char*(const char* string)> UI_SafeTranslateString{0x1405A2930};
	WEAK symbol<int(int localClientNum, const char* sound)> UI_PlayLocalSoundAlias{0x140606080};

	WEAK symbol<void(pmove_t* move, trace_t*, const float*, const float*,
		const Bounds*, int, int)> PM_playerTrace{0x14068F0A0};
	WEAK symbol<void(pmove_t*, trace_t*, const float*, const float*,
		const Bounds*, int, int)> PM_trace{0x14068F1D0};

	WEAK symbol<void*(jmp_buf* Buf, int Value)> longjmp{0x14089EED0};
	WEAK symbol<int(jmp_buf* Buf)> _setjmp{0x1408EC2E0};

	// Variables

	WEAK symbol<cmd_function_s*> cmd_functions{0x14AD17BB8};
	WEAK symbol<CmdArgs> cmd_args{0x14AD17A60};
	WEAK symbol<const char*> command_whitelist{0x140BF84E0};

	WEAK symbol<HWND> hWnd{0x14CCF81C0};

	WEAK symbol<const char*> g_assetNames{0x140BEF280};

	WEAK symbol<int> g_poolSize{0x140BF2E40};

	WEAK symbol<gentity_s> g_entities{0x1452DDDA0};
	WEAK symbol<int> num_entities{0x1455CC738};
	WEAK symbol<PathData> pathData{0x1452CCDA0};
	WEAK symbol<int> vehicle_pathnode_count{0x14D009A30};

	WEAK symbol<DWORD> threadIds{0x14B11DC80};

	WEAK symbol<GfxDrawMethod_s> gfxDrawMethod{0x14EDF9E00};
	WEAK symbol<refdef_t> refdef{0x141BC2500};

	WEAK symbol<int> keyCatchers{0x14203F3C0};

	WEAK symbol<PlayerKeyState> playerKeys{0x141E8767C};

	WEAK symbol<int> dvarCount{0x14BFBB310};
	WEAK symbol<dvar_t> dvarPool{0x14BFBB320};

	WEAK symbol<unsigned int> levelEntityId{0x14B5E0B30};
	WEAK symbol<int> g_script_error_level{0x14BA9CC24};
	WEAK symbol<jmp_buf> g_script_error{0x14BA9CD40};
	WEAK symbol<scr_classStruct_t> g_classMap{0x140BF95C0};

	WEAK symbol<scrVarGlob_t> scr_VarGlob{0x14B617C00};
	WEAK symbol<scrVmPub_t> scr_VmPub{0x14BA9EE40};
	WEAK symbol<function_stack_t> scr_function_stack{0x14BAA93C0};

	WEAK symbol<DB_FileSysInterface*> g_fileSystem{0x1420B27E8};

	namespace hks
	{
		WEAK symbol<lua_State*> lua_state{0x1419D83E8};
		WEAK symbol<void(lua_State* s, const char* str, unsigned int l)> hksi_lua_pushlstring{0x140287410};
		WEAK symbol<const char*(lua_State* s, const HksObject* obj, unsigned int* len)> hks_obj_tolstring{0x140287410};
		WEAK symbol<int(lua_State* s, const HksObject* obj, HksObject* ret)> hks_obj_getmetatable{0x1402DA210};
		WEAK symbol<HksObject*(HksObject* result, lua_State* s, const HksObject* table, const HksObject* key)> hks_obj_getfield{0x1402D9E20};
		WEAK symbol<void(lua_State* s, const HksObject* tbl, const HksObject* key, const HksObject* val)> hks_obj_settable{0x1402DB040};
		WEAK symbol<HksObject* (HksObject* result, lua_State* s, const HksObject* table, const HksObject* key)> hks_obj_gettable{0x1402DA300};
		WEAK symbol<void(lua_State* s, int nargs, int nresults, const unsigned int* pc)> vm_call_internal{0x14030AB60};
		WEAK symbol<void(lua_State* s, int index)> hksi_lua_pushvalue{0x1402DE040};
		WEAK symbol<HashTable*(lua_State* s, unsigned int arraySize, unsigned int hashSize)> Hashtable_Create{0x1402C8290};
		WEAK symbol<HksObject*(HashTable* t, HksObject* result, HksObject* key)> Hashtable_getNextHash{0x1402D5150};
		WEAK symbol<void(lua_State* s, const HksObject* tbl, HksObject* key, HksObject* retval)> hks_obj_next{0x1402DA850};
		WEAK symbol<cclosure*(lua_State* s, lua_function function, int num_upvalues, 
			int internal_, int profilerTreatClosureAsFunc)> cclosure_Create{0x1402C84B0};
		WEAK symbol<int(lua_State* s, int t)> hksi_luaL_ref{0x1402E4520};
		WEAK symbol<void(lua_State* s, int t, int ref)> hksi_luaL_unref{0x1402DCE50};
		WEAK symbol<void(lua_State* s, int index, const char* k)> hksi_lua_setfield{0x1402DEA30};
		WEAK symbol<int(lua_State* s, int nargs, int nresults, int errfunc)> hksi_lua_pcall{0x1402DDE50};
		WEAK symbol<void(lua_State* s, HksObject* lfp)> closePendingUpvalues{0x1402CBAD0};
	}
}