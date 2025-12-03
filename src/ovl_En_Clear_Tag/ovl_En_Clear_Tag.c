#include "ovl_En_Clear_Tag.h"

#include "gfx.h"
#include "sys_matrix.h"

static Gfx gArwingDL[91] = {
#include "assets/overlays/ovl_En_Clear_Tag/gArwingDL.inc.c"
};

static Vtx gArwingVtx[148] = {
#include "assets/overlays/ovl_En_Clear_Tag/gArwingVtx.inc.c"
};

u64 ovl_En_Clear_Tag_00000C18_Tex[TEX_LEN(u64, ovl_En_Clear_Tag_00000C18_Tex_WIDTH, ovl_En_Clear_Tag_00000C18_Tex_HEIGHT, 16)] = {
#include "assets/overlays/ovl_En_Clear_Tag/ovl_En_Clear_Tag_00000C18_Tex.rgba16.inc.c"
};

u64 ovl_En_Clear_Tag_00000C98_Tex[TEX_LEN(u64, ovl_En_Clear_Tag_00000C98_Tex_WIDTH, ovl_En_Clear_Tag_00000C98_Tex_HEIGHT, 16)] = {
#include "assets/overlays/ovl_En_Clear_Tag/ovl_En_Clear_Tag_00000C98_Tex.rgba16.inc.c"
};

u64 ovl_En_Clear_Tag_00001498_Tex[TEX_LEN(u64, ovl_En_Clear_Tag_00001498_Tex_WIDTH, ovl_En_Clear_Tag_00001498_Tex_HEIGHT, 16)] = {
#include "assets/overlays/ovl_En_Clear_Tag/ovl_En_Clear_Tag_00001498_Tex.rgba16.inc.c"
};

u64 ovl_En_Clear_Tag_00002498_Tex[TEX_LEN(u64, ovl_En_Clear_Tag_00002498_Tex_WIDTH, ovl_En_Clear_Tag_00002498_Tex_HEIGHT, 16)] = {
#include "assets/overlays/ovl_En_Clear_Tag/ovl_En_Clear_Tag_00002498_Tex.rgba16.inc.c"
};

u64 ovl_En_Clear_Tag_00002C98_Tex[TEX_LEN(u64, ovl_En_Clear_Tag_00002C98_Tex_WIDTH, ovl_En_Clear_Tag_00002C98_Tex_HEIGHT, 16)] = {
#include "assets/overlays/ovl_En_Clear_Tag/ovl_En_Clear_Tag_00002C98_Tex.rgba16.inc.c"
};

u64 ovl_En_Clear_Tag_00003498_Tex[TEX_LEN(u64, ovl_En_Clear_Tag_00003498_Tex_WIDTH, ovl_En_Clear_Tag_00003498_Tex_HEIGHT, 16)] = {
#include "assets/overlays/ovl_En_Clear_Tag/ovl_En_Clear_Tag_00003498_Tex.rgba16.inc.c"
};

static Gfx gArwingLaserDL[14] = {
#include "assets/overlays/ovl_En_Clear_Tag/gArwingLaserDL.inc.c"
};

static Vtx gArwingLaserVtx[6] = {
#include "assets/overlays/ovl_En_Clear_Tag/gArwingLaserVtx.inc.c"
};

u64 ovl_En_Clear_Tag_00003D68_Tex[TEX_LEN(u64, ovl_En_Clear_Tag_00003D68_Tex_WIDTH, ovl_En_Clear_Tag_00003D68_Tex_HEIGHT, 16)] = {
#include "assets/overlays/ovl_En_Clear_Tag/ovl_En_Clear_Tag_00003D68_Tex.rgba16.inc.c"
};

static Vtx gArwingBackfireVtx[3] = {
#include "assets/overlays/ovl_En_Clear_Tag/gArwingBackfireVtx.inc.c"
};

static Gfx gArwingBackfireDL[16] = {
#include "assets/overlays/ovl_En_Clear_Tag/gArwingBackfireDL.inc.c"
};

u64 ovl_En_Clear_Tag_00004018_Tex[TEX_LEN(u64, ovl_En_Clear_Tag_00004018_Tex_WIDTH, ovl_En_Clear_Tag_00004018_Tex_HEIGHT, 8)] = {
#include "assets/overlays/ovl_En_Clear_Tag/ovl_En_Clear_Tag_00004018_Tex.i8.inc.c"
};

u64 ovl_En_Clear_Tag_00004118_Tex[TEX_LEN(u64, ovl_En_Clear_Tag_00004118_Tex_WIDTH, ovl_En_Clear_Tag_00004118_Tex_HEIGHT, 16)] = {
#include "assets/overlays/ovl_En_Clear_Tag/ovl_En_Clear_Tag_00004118_Tex.rgba16.inc.c"
};

static Vtx gArwingDebrisEffectVtx[3] = {
#include "assets/overlays/ovl_En_Clear_Tag/gArwingDebrisEffectVtx.inc.c"
};

static Gfx gArwingDebrisEffectMaterialDL[16] = {
#include "assets/overlays/ovl_En_Clear_Tag/gArwingDebrisEffectMaterialDL.inc.c"
};

static Gfx gArwingDebrisEffectDL[3] = {
#include "assets/overlays/ovl_En_Clear_Tag/gArwingDebrisEffectDL.inc.c"
};

u64 ovl_En_Clear_Tag_000043E0_Tex[TEX_LEN(u64, ovl_En_Clear_Tag_000043E0_Tex_WIDTH, ovl_En_Clear_Tag_000043E0_Tex_HEIGHT, 4)] = {
#include "assets/overlays/ovl_En_Clear_Tag/ovl_En_Clear_Tag_000043E0_Tex.i4.inc.c"
};

u64 ovl_En_Clear_Tag_000047E0_Tex[TEX_LEN(u64, ovl_En_Clear_Tag_000047E0_Tex_WIDTH, ovl_En_Clear_Tag_000047E0_Tex_HEIGHT, 4)] = {
#include "assets/overlays/ovl_En_Clear_Tag/ovl_En_Clear_Tag_000047E0_Tex.i4.inc.c"
};

static Vtx gArwingFireEffectVtx[3] = {
#include "assets/overlays/ovl_En_Clear_Tag/gArwingFireEffectVtx.inc.c"
};

static Gfx gArwingFireEffectMaterialDL[21] = {
#include "assets/overlays/ovl_En_Clear_Tag/gArwingFireEffectMaterialDL.inc.c"
};

static Gfx gArwingFireEffectDL[4] = {
#include "assets/overlays/ovl_En_Clear_Tag/gArwingFireEffectDL.inc.c"
};

u64 ovl_En_Clear_Tag_00004AD8_Tex[TEX_LEN(u64, ovl_En_Clear_Tag_00004AD8_Tex_WIDTH, ovl_En_Clear_Tag_00004AD8_Tex_HEIGHT, 8)] = {
#include "assets/overlays/ovl_En_Clear_Tag/ovl_En_Clear_Tag_00004AD8_Tex.i8.inc.c"
};

static Vtx gArwingFlashEffectVtx[4] = {
#include "assets/overlays/ovl_En_Clear_Tag/gArwingFlashEffectVtx.inc.c"
};

static Gfx gArwingFlashEffectDL[16] = {
#include "assets/overlays/ovl_En_Clear_Tag/gArwingFlashEffectDL.inc.c"
};

u64 ovl_En_Clear_Tag_00005B98_Tex[TEX_LEN(u64, ovl_En_Clear_Tag_00005B98_Tex_WIDTH, ovl_En_Clear_Tag_00005B98_Tex_HEIGHT, 4)] = {
#include "assets/overlays/ovl_En_Clear_Tag/ovl_En_Clear_Tag_00005B98_Tex.i4.inc.c"
};

static Vtx gArwingFlashEffectGroundVtx[3] = {
#include "assets/overlays/ovl_En_Clear_Tag/gArwingFlashEffectGroundVtx.inc.c"
};

static Gfx gArwingFlashEffectGroundDL[17] = {
#include "assets/overlays/ovl_En_Clear_Tag/gArwingFlashEffectGroundDL.inc.c"
};

u64 ovl_En_Clear_Tag_00005E50_Tex[TEX_LEN(u64, ovl_En_Clear_Tag_00005E50_Tex_WIDTH, ovl_En_Clear_Tag_00005E50_Tex_HEIGHT, 8)] = {
#include "assets/overlays/ovl_En_Clear_Tag/ovl_En_Clear_Tag_00005E50_Tex.i8.inc.c"
};

static Vtx gArwingShadowVtx[3] = {
#include "assets/overlays/ovl_En_Clear_Tag/gArwingShadowVtx.inc.c"
};

static Gfx gArwingShadowDL[16] = {
#include "assets/overlays/ovl_En_Clear_Tag/gArwingShadowDL.inc.c"
};

