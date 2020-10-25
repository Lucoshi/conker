#ifndef VARIABLES_H
#define VARIABLES_H

extern s32 *D_100010F8;
extern s32 *D_10001194;
extern s32 D_10002070;

extern s32 *D_10002E50;
extern s32 *D_100049E0;
extern s32 *D_100052A0;
extern s32 *D_10023850;
extern s32 *D_10023930;
extern s32 *D_1002AAD0;

/* 80000000 */
extern s32  D_80000300;
extern s32 *D_8000030C;
extern u32  D_80000310;

/* 80020000 */
extern u8   D_8002AAE0;
extern s32  D_8002AAE4;
extern s32  D_8002AAE8[2]; // framebuffer
extern u8   D_8002AB40;
extern OSViMode *D_8002AB90;
extern OSViMode *D_8002ABE0;
extern u8   D_8002AC5C;
extern s32  D_8002B070;
extern s32 *D_8002BA44;
extern s32  D_8002BD18;
extern s32  D_8002BD60;
extern s32  D_8002D4B0;
extern s32 *D_8002D8B0;

/* 80030000 */
extern OSThread *D_80031AE0;
extern OSThread *D_800318B0;

extern s32  D_80032B3F;
extern s32 *D_8003333F;

extern s32 *D_800354F8;
extern s32 *D_800354FC;
extern s16  D_80035500;
extern OSThread *D_80035910;

extern OSMesgQueue *D_80036B40;
extern OSMesg      *D_80036B58;
extern s32  *D_80036B60;
extern s32  D_80036B70;
extern s32  D_80036B78;
extern s32  D_80036B80;
extern s32  D_80036B88;
extern s32  D_80036B8C;
extern s32  D_80036B90;
extern s32  D_80036B98;

extern u32  D_80038070;
extern u16  D_80038074;
extern u8   D_80038080;
extern u32  D_80038090;
extern u32  D_80038094;
extern u32  D_80038098;
extern u32  D_8003809C;
extern f32  D_800380A0;
extern f32  D_800380A4;
extern s32  *D_800380B0;
extern s32  D_800380B4[5];
extern s32  *D_800380B8;
extern s32  *D_800380BC;
extern s32  D_800380E0;
extern s32  D_800388B0;

extern OSMesg *gMessage0;
extern OSMesgQueue *gMessageQueue0;

extern OSMesg *gMessages[3];
extern OSMesgQueue gMessageQueue[3];

extern s32 D_80038904;

extern OSMesgQueue *D_8003B1E8;
extern OSMesgQueue *D_8003B200;
extern OSMesgQueue *D_8003B218;

extern OSMesgQueue *D_8003B230;
extern s32 D_8003B234;
extern u8 D_8003B238;
extern u8 D_8003B239;
extern u8 D_8003B23A;
extern OSMesg      *D_8003B240;

extern s32 D_8003B260;
extern s32 D_8003B264;
extern OSThread    *D_8003B6A0;
extern OSMesg      *D_8003B660;
extern OSMesg      *D_8003B670;
extern OSMesg      *D_8003B680;

extern OSMesgQueue *D_8003B9D0;
extern OSMesg      *D_8003B9E8;
extern OSThread    *D_8003B9F0;

extern u64 D_8003BC20;
extern u32 D_8003BC24;

extern u8  D_8003A570;
extern u8  D_8003A571;
extern u8  D_8003A582;

extern s32  D_8003BE70;
extern s32  D_8003BE74;

extern u32  D_803F5000;
extern u32  D_803FE000;
extern u32  D_807F5000;
extern u32  D_807FE000;

/* 80040000 */
extern s32  D_80041F04;
extern s32  D_80041F08;
extern s32  D_80041F0C;
extern u8   D_80041F61;
extern s8   D_80041FD9;

extern s32 *D_80042770;
extern s32  D_80042774;
extern s32  D_800425E0;
extern s32 *D_800428F8;

extern s32  D_80043B40[]; // 4064

/* 80080000 */
extern s32  D_80082B20;
extern s32  D_80084064;

/* 800E0000 */
extern s32  D_800E9D10[];

extern s32 D_800BE620;
extern s32 D_800BE624;
extern s32 D_800BE760;
extern OSMesgQueue *D_800BE900;
extern s32  D_800BE944;
extern s32  D_800BE948;
extern OSMesg      *D_800BE990;
extern u8 D_800BE9C0;
extern s32 D_800BE9C4;
extern s32 D_800BE9E4;

/* other */

extern s32 *D_151FA130;

extern u8 _extcodeSegmentRomStart[];
extern u8 _extcodeSegmentRomEnd[];

extern u32  AI_A4500000;
extern s32  AI_A4500004;

extern s16 D_BC000C02;

#endif
