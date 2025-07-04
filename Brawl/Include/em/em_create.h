#pragma once

#include <StaticAssert.h>
#include <gr/gr_gimmick_motion_path.h>
#include <mt/mt_vector.h>
#include <types.h>

enum emKind {
    Enemy_Invalid = -0x1,
    Enemy_Goomba = 0x0,
    Enemy_Kuribo = 0x0,
    Enemy_Poppant = 0x1,
    Enemy_Popperam = 0x1,
    Enemy_Feyesh = 0x2,
    Enemy_Pochi = 0x2,
    Enemy_Jyk = 0x3,
    Enemy_Jyakeel = 0x3,
    Enemy_Auroros = 0x4,
    Enemy_Aroaros = 0x4,
    Enemy_Cymul = 0x5,
    Enemy_Cymal = 0x5,
    Enemy_Roturret = 0x6,
    Enemy_Deathpod = 0x6,
    Enemy_Borboras = 0x7,
    Enemy_Boobas = 0x7,
    Enemy_GiantGoomba = 0x8,
    Enemy_DekaKuribo = 0x8,
    Enemy_Buckot = 0x9,
    Enemy_Botron = 0x9,
    Enemy_Bucculus = 0xA,
    Enemy_Bucyulus = 0xA,
    Enemy_Greap = 0xB,
    Enemy_Gyraan = 0xB,
    Enemy_Armight = 0xC,
    Enemy_SirAlamos = 0xC,
    Enemy_BulletBill = 0xD,
    Enemy_Killer = 0xD,
    Enemy_Roader = 0xE,
    Enemy_Roada = 0xE,
    Enemy_Spaak = 0xF,
    Enemy_Spar = 0xF,
    Enemy_Mite = 0x10,
    Enemy_Ticken = 0x11,
    Enemy_Teckin = 0x11,
    Enemy_Towtow = 0x12,
    Enemy_Tautau = 0x12,
    Enemy_HammerBro = 0x13,
    Enemy_HammerBros = 0x13,
    Enemy_Bytan = 0x14,
    Enemy_Bitan = 0x14,
    Enemy_Floow = 0x15,
    Enemy_Flows = 0x15,
    Enemy_Puppit = 0x16,
    Enemy_Kokkon = 0x16,
    Enemy_Primid = 0x17,
    Enemy_Prim = 0x17,
    Enemy_Shellpod = 0x18,
    Enemy_Shelly = 0x18,
    Enemy_Koopa = 0x19,
    Enemy_Patapata = 0x19,
    Enemy_Shaydas = 0x1A,
    Enemy_Jdus = 0x1A,
    Enemy_Bombed = 0x1B,
    Enemy_Bombhead = 0x1B,
    Enemy_Primid_Metal = 0x1C,
    Enemy_Prim_Metal = 0x1C,
    Enemy_Nagagog = 0x1D,
    Enemy_Ngagog = 0x1D,
    Enemy_Trowlon = 0x1E,
    Enemy_Faulong = 0x1E,
    Enemy_Primid_Big = 0x1F,
    Enemy_Prim_Big = 0x1F,
    Enemy_Primid_Boom = 0x20,
    Enemy_Prim_Boomerang = 0x20,
    Enemy_Primid_Fire = 0x21,
    Enemy_Prim_Fire = 0x21,
    Enemy_Primid_Scope = 0x22,
    Enemy_Prim_SuperScope = 0x22,
    Enemy_Primid_Sword = 0x23,
    Enemy_Prim_Sword = 0x23,
    Enemy_Gamyga = 0x24,
    Enemy_Ghamgha = 0x24,
    Enemy_ROB_Blaster = 0x25,
    Enemy_Robo_Beam = 0x25,
    Enemy_ROB_Distance = 0x26,
    Enemy_Robo_Distance = 0x26,
    Enemy_ROB_Launcher = 0x27,
    Enemy_Robo_Homing = 0x27,
    Enemy_ROB_Sentry = 0x28,
    Enemy_Robo_Punch = 0x28,
    Enemy_Autolance = 0x29,
    Enemy_Cataguard = 0x29,
    Enemy_Armank = 0x2A,
    Enemy_Arman = 0x2A,
    Enemy_Glire = 0x2B,
    Enemy_Gal_Fire = 0x2B,
    Enemy_Glice = 0x2C,
    Enemy_Gal_Ice = 0x2C,
    Enemy_Glunder = 0x2D,
    Enemy_Gal_Thunder = 0x2D,
    Enemy_Boss_PeteyPiranha = 0x2E,
    Enemy_Boss_BossPackun = 0x2E,
    Enemy_GamygaBase = 0x2F,
    Enemy_Ghamghabase = 0x2F,
    Enemy_Boss_Galleom = 0x33,
    Enemy_Boss_Ridley = 0x34,
    Enemy_Boss_Rayquaza = 0x35,
    Enemy_Boss_Duon = 0x36,
    Enemy_Boss_Porky = 0x37,
    Enemy_Boss_MetaRidley = 0x38,
    Enemy_Boss_Metaridley = 0x38,
    Enemy_Boss_FalconFlyer = 0x39,
    Enemy_Boss_Falconflyer = 0x39,
    Enemy_Boss_Tabuu = 0x3A,
    Enemy_Boss_Taboo = 0x3A,
    Enemy_Boss_MasterHand = 0x3B,
    Enemy_Boss_Masterhand = 0x3B,
    Enemy_Boss_CrazyHand = 0x3C,
    Enemy_Boss_Crazyhand = 0x3C
};
typedef emKind EnemyKind;

union i32f {
    s32 i;
    float f;
};

// TODO: is this emValueAccesser?
struct UnkParamAccesser {
    u32 unk0;
    u8 unk4[0xBC];
    u32 unkC0;
    u8 unkC4[0x20];
    u32 unkE4;
    u8 unkE8[0x1C];
    float unk104;
    float unk108;
    float unk10C;
    u32 unk110;
    u8 unk114[0xC];
    u32 unk120;
    u8 unk124[0xC];
    u32 unk130;
    u8 unk134[0xC];
    u32 unk140;
    u8 unk144[0x3C];
    u32 unk180;
    u8 unk184[0x4];
    u32 unk188;
    u8 unk18C[0x18];
    u32 unk1A4;
    u32 unk1A8;
    u32 unk1AC;
    s32 unk1B0;
    s32 unk1B4;
    u32 unk1B8;
    u8 unk1BC[0x4];
    u32 unk1C0;
    float unk1C4;
    float unk1C8;
    u32 unk1CC;
    u8 unk1D0[0x30];
    u32 unk200;
    u8 unk204[0x4];
    u32 unk208;
    u8 unk20C[0x18];
    u32 unk224;
    u8 unk228[0x4];
    u32 unk22C;
    u8 unk230[0x4];
    u32 unk234;
    u8 unk238[0x8];
    u32 unk240;
    u32 unk244;
    u32 unk248;
    u8 unk24C[0x8];
    u32 unk254;
    u32 unk258;
    u8 unk25C[0x8];
    s32 unk264;
    s32 unk268;
    u8 unk26C[0xC];
    float unk278;
    s32 unk27C;
    u32 unk280;
    u32 unk284;
    u32 unk288;
    float unk28C;
    float unk290;
    u8 unk294;
    u8 unk295;
    u8 unk296[0x2];
    float unk298;
    u8 unk29C[0xC];
    float unk2A8;
    float unk2AC;
    u32 unk2B0;
    u8 unk2B4[0xC];
    u32 unk2C0;
    u8 unk2C4[0x4];
    u32 unk2C8;
    u8 unk2CC[0x1C];
    u32 unk2E8;
    u8 unk2EC;
    s32 unk2F0;
    float unk2F4;
    float unk2F8;
    u32 unk2FC;
    u32 unk300;
    u8 unk304[0x4];
    u32 unk308;
    u8 unk30C[0x4];
    u32 unk310;
    u8 unk314[0x10];
    u32 unk324;
    u8 unk328[0x4];
    s32 unk32C;
    float unk330;
    u8 unk334[0x10];
    i32f unk344;
    float unk348;
    float unk34C;
    float unk350;
    float unk354;
    u32 unk358;
    s32 unk35C;
    s32 unk360;
    s32 unk364;
    i32f unk368;
    i32f unk36C;
    i32f unk370;
    s32 unk374;
    u32 unk378;
    u8 unk37C[0x4];
    u32 unk380;
    u8 unk384[0x4];
    float unk388;
    float unk38C;
    float unk390;
    float unk394;
    i32f unk398;
    u32 unk39C;
    u8 unk3A0[0x78];
    u32 unk418;
    u8 unk41C[0x18];
    u32 unk434;
    u8 unk438[0x8];
    u32 unk440;
    u8 unk444[0x38];
    u32 unk47C;
    u8 unk480[0x14];
    u32 unk494;
    u8 unk498[0x14];
    u32 unk4AC;
    u8 unk4B0[0x4];
    u32 unk4B4;
    u8 unk4B8[0x4];
    u32 unk4BC;
    u8 unk4C0[0x20];
    u32 unk4E0;
    u8 unk4E4[0xC];
    u32 unk4F0;
    u8 unk4F4[0x8];
    u8 unk4FC;
    s32 unk500;
    s32 unk504;
    u32 unk508;
    s32 unk50C;
    float unk510;
    u32 unk514;
    u8 unk518[0x4];
    u32 unk51C;
    u8 unk520[0x4];
    u32 unk524;
    u8 unk528[0x4];
    s32 unk52C;
    u8 unk530[0x50];
    u32 unk580;
    u8 unk584[0x24];
    u32 unk5A8;
    u8 unk5AC[0x8];
    u32 unk5B4;
    u8 unk5B8[0x34];
    u32 unk5EC;
    u8 unk5F0[0x34];
    u32 unk624;
    u8 unk628[0xC];
    u32 unk634;
    u8 unk638[0xC];
    u32 unk644;
    u8 unk648[0x4];
    s32 unk64C;
    u8 unk650;
    u32 unk654;
    u8 unk658[0x4];
    s32 unk65C;
    s32 unk660;
    u32 unk664;
    u32 unk668;
    u32 unk66C;
    u32 unk670;
    u32 unk674;
    u8 unk678[0x10];
    u32 unk688;
    u8 unk68C[0x8];
    float unk694;
    float unk698;
    float unk69C;
    u32 unk6A0;
    u8 unk6A4[0x4];
    u32 unk6A8;
    u8 unk6AC[0x4];
    float unk6B0;
    float unk6B4;
    u32 unk6B8;
    u8 unk6BC[0x24];
    u32 unk6E0;
    u8 unk6E4[0x21C];
    u32 unk900;
    u8 unk904[0x68];
    u32 unk96C;
    u8 unk970[0x5C];
    float unk9CC;
    u32 unk9D0;
    u8 unk9D4[0xC];
    s32 unk9E0;
    u32 unk9E4;
    u8 unk9E8[0xC];
    float unk9F4;
    float unk9F8;
    float unk9FC;
    float unkA00;
    float unkA04;
    float unkA08;
    float unkA0C;
    u32 unkA10;
    u8 unkA14[0x20];
    u32 unkA34;
    u8 unkA38[0x2C];
    u32 unkA64;
    u8 unkA68[0x38];
    u32 unkAA0;
};

class emCreate {
public:
    u8 m_difficulty;
    char _1[3];
    EnemyKind m_enemyKind;
    int m_teamNo;
    float m_startLr;
    Vec3f m_startPos;
    u32 m_startStatusKind;
    u8 m_level;
    char _33[3];
    float m_36;
    Rect2D m_territoryRange;
    int m_connectedTriggerId;
    void* m_epbm;
    UnkParamAccesser* m_epsp;
    grGimmickMotionPath* m_motionPath;
    int m_parentCreateId;
    virtual ~emCreate(){

    };
};
static_assert(sizeof(emCreate) == 80, "Class is wrong size!");
