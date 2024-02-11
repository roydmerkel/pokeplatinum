#ifndef POKEPLATINUM_STRUCT_OV16_022674C4_H
#define POKEPLATINUM_STRUCT_OV16_022674C4_H

#include "struct_decls/cell_actor_data.h"
#include "struct_decls/sys_task.h"
#include "struct_defs/struct_0205AA50.h"
#include "struct_decls/battle_system.h"

typedef struct {
    u8 state;
    CellActorData *mainActor;
    CellActorData *arrowActor;
    BattleSystem *battleSys;
    SysTask * unk_10;
    Window unk_14;
    u8 unk_24;
    u8 type;
    u8 unk_26;
    u8 unk_27;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    s32 unk_3C;
    s32 unk_40;
    s32 unk_44;
    u8 unk_48;
    u8 unk_49;
    u8 unk_4A;
    u8 unk_4B;
    u8 unk_4C;
    u8 unk_4D;
    u8 unk_4E;
    u8 scrollDirection : 1;
    u8 doneScrolling : 1;
    u8 unk_4F_2 : 1;
    u8 unk_4F_3 : 1;
    u8  : 4;
    SysTask * unk_50;
    u16 unk_54;
} Healthbar;

#endif // POKEPLATINUM_STRUCT_OV16_022674C4_H
