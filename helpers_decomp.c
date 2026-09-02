/* ===== func 0x100002498 name=FUN_100002498 =====

void FUN_100002498(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_10;
  undefined8 uStack_8;
  
  if (0 < param_3) {
    lVar2 = 0;
    do {
      uVar3 = 0;
      *param_1 = *param_1 ^ *(byte *)(param_2 + lVar2);
      do {
        lVar5 = 0;
        do {
          param_1[lVar5] = (&DAT_100002d89)[param_1[lVar5]];
          lVar5 = lVar5 + 1;
        } while (lVar5 != 0x10);
        lVar5 = 0;
        uVar4 = uVar3 ^ 0xffffff9e;
        uStack_8 = *(undefined8 *)(param_1 + 8);
        local_10 = *(undefined8 *)param_1;
        do {
          uVar4 = param_1[lVar5] ^ uVar4;
          lVar5 = lVar5 + 1;
        } while (lVar5 != 0x10);
        lVar5 = 0;
        uVar6 = 1;
        do {
          bVar1 = *(byte *)((ulong)&local_10 | uVar6 & 0xf);
          param_1[lVar5] =
               *(byte *)((long)&local_10 + lVar5) ^ (byte)uVar4 ^
               (bVar1 << (ulong)((uint)lVar5 + 1 & 7) |
               bVar1 >> (ulong)(((uint)lVar5 ^ 0xffffffff) & 7));
          lVar5 = lVar5 + 1;
          uVar6 = uVar6 + 7;
        } while (uVar6 != 0x71);
        uVar3 = uVar3 + 1;
      } while (uVar3 != 6);
      lVar2 = lVar2 + 1;
    } while (lVar2 != param_3);
  }
  return;
}


===== end ===== */

/* ===== func 0x10000257c name=FUN_10000257c =====

void FUN_10000257c(byte *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_10;
  undefined8 uStack_8;
  
  lVar2 = 0;
  do {
    param_1[lVar2] = (byte)lVar2 ^ 0xd4;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    uVar3 = 0;
    *param_1 = *param_1 ^ *(byte *)(param_2 + lVar2);
    do {
      lVar5 = 0;
      do {
        param_1[lVar5] = (&DAT_100002d89)[param_1[lVar5]];
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x10);
      lVar5 = 0;
      uVar4 = uVar3 ^ 0xffffff9e;
      uStack_8 = *(undefined8 *)(param_1 + 8);
      local_10 = *(undefined8 *)param_1;
      do {
        uVar4 = param_1[lVar5] ^ uVar4;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x10);
      lVar5 = 0;
      uVar6 = 1;
      do {
        bVar1 = *(byte *)((ulong)&local_10 | uVar6 & 0xf);
        param_1[lVar5] =
             *(byte *)((long)&local_10 + lVar5) ^ (byte)uVar4 ^
             (bVar1 << (ulong)((uint)lVar5 + 1 & 7) |
             bVar1 >> (ulong)(((uint)lVar5 ^ 0xffffffff) & 7));
        lVar5 = lVar5 + 1;
        uVar6 = uVar6 + 7;
      } while (uVar6 != 0x71);
      uVar3 = uVar3 + 1;
    } while (uVar3 != 6);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    uVar3 = 0;
    *param_1 = *param_1 ^ (&DAT_100064000)[lVar2];
    do {
      lVar5 = 0;
      do {
        param_1[lVar5] = (&DAT_100002d89)[param_1[lVar5]];
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x10);
      lVar5 = 0;
      uVar4 = uVar3 ^ 0xffffff9e;
      uStack_8 = *(undefined8 *)(param_1 + 8);
      local_10 = *(undefined8 *)param_1;
      do {
        uVar4 = param_1[lVar5] ^ uVar4;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x10);
      lVar5 = 0;
      uVar6 = 1;
      do {
        bVar1 = *(byte *)((ulong)&local_10 | uVar6 & 0xf);
        param_1[lVar5] =
             *(byte *)((long)&local_10 + lVar5) ^ (byte)uVar4 ^
             (bVar1 << (ulong)((uint)lVar5 + 1 & 7) |
             bVar1 >> (ulong)(((uint)lVar5 ^ 0xffffffff) & 7));
        lVar5 = lVar5 + 1;
        uVar6 = uVar6 + 7;
      } while (uVar6 != 0x71);
      uVar3 = uVar3 + 1;
    } while (uVar3 != 6);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    uVar3 = 0;
    *param_1 = *param_1 ^ (&DAT_10000faac)[lVar2];
    do {
      lVar5 = 0;
      do {
        param_1[lVar5] = (&DAT_100002d89)[param_1[lVar5]];
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x10);
      lVar5 = 0;
      uVar4 = uVar3 ^ 0xffffff9e;
      uStack_8 = *(undefined8 *)(param_1 + 8);
      local_10 = *(undefined8 *)param_1;
      do {
        uVar4 = param_1[lVar5] ^ uVar4;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x10);
      lVar5 = 0;
      uVar6 = 1;
      do {
        bVar1 = *(byte *)((ulong)&local_10 | uVar6 & 0xf);
        param_1[lVar5] =
             *(byte *)((long)&local_10 + lVar5) ^ (byte)uVar4 ^
             (bVar1 << (ulong)((uint)lVar5 + 1 & 7) |
             bVar1 >> (ulong)(((uint)lVar5 ^ 0xffffffff) & 7));
        lVar5 = lVar5 + 1;
        uVar6 = uVar6 + 7;
      } while (uVar6 != 0x71);
      uVar3 = uVar3 + 1;
    } while (uVar3 != 6);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    uVar3 = 0;
    *param_1 = *param_1 ^ (&DAT_10000fb7b)[lVar2];
    do {
      lVar5 = 0;
      do {
        param_1[lVar5] = (&DAT_100002d89)[param_1[lVar5]];
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x10);
      lVar5 = 0;
      uVar4 = uVar3 ^ 0xffffff9e;
      uStack_8 = *(undefined8 *)(param_1 + 8);
      local_10 = *(undefined8 *)param_1;
      do {
        uVar4 = param_1[lVar5] ^ uVar4;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x10);
      lVar5 = 0;
      uVar6 = 1;
      do {
        bVar1 = *(byte *)((ulong)&local_10 | uVar6 & 0xf);
        param_1[lVar5] =
             *(byte *)((long)&local_10 + lVar5) ^ (byte)uVar4 ^
             (bVar1 << (ulong)((uint)lVar5 + 1 & 7) |
             bVar1 >> (ulong)(((uint)lVar5 ^ 0xffffffff) & 7));
        lVar5 = lVar5 + 1;
        uVar6 = uVar6 + 7;
      } while (uVar6 != 0x71);
      uVar3 = uVar3 + 1;
    } while (uVar3 != 6);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    uVar3 = 0;
    *param_1 = *param_1 ^ (&DAT_10000fb8b)[lVar2];
    do {
      lVar5 = 0;
      do {
        param_1[lVar5] = (&DAT_100002d89)[param_1[lVar5]];
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x10);
      lVar5 = 0;
      uVar4 = uVar3 ^ 0xffffff9e;
      uStack_8 = *(undefined8 *)(param_1 + 8);
      local_10 = *(undefined8 *)param_1;
      do {
        uVar4 = param_1[lVar5] ^ uVar4;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x10);
      lVar5 = 0;
      uVar6 = 1;
      do {
        bVar1 = *(byte *)((ulong)&local_10 | uVar6 & 0xf);
        param_1[lVar5] =
             *(byte *)((long)&local_10 + lVar5) ^ (byte)uVar4 ^
             (bVar1 << (ulong)((uint)lVar5 + 1 & 7) |
             bVar1 >> (ulong)(((uint)lVar5 ^ 0xffffffff) & 7));
        lVar5 = lVar5 + 1;
        uVar6 = uVar6 + 7;
      } while (uVar6 != 0x71);
      uVar3 = uVar3 + 1;
    } while (uVar3 != 6);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
  return;
}


===== end ===== */

/* ===== func 0x1000029b4 name=FUN_1000029b4 =====

void FUN_1000029b4(byte *param_1)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_10;
  undefined8 uStack_8;
  
  lVar2 = 0;
  do {
    param_1[lVar2] = (byte)lVar2 ^ 0x70;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    uVar3 = 0;
    *param_1 = *param_1 ^ (&DAT_100002d69)[lVar2];
    do {
      lVar5 = 0;
      do {
        param_1[lVar5] = (&DAT_100002d89)[param_1[lVar5]];
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x10);
      lVar5 = 0;
      uVar4 = uVar3 ^ 0xffffff9e;
      uStack_8 = *(undefined8 *)(param_1 + 8);
      local_10 = *(undefined8 *)param_1;
      do {
        uVar4 = param_1[lVar5] ^ uVar4;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x10);
      lVar5 = 0;
      uVar6 = 1;
      do {
        bVar1 = *(byte *)((ulong)&local_10 | uVar6 & 0xf);
        param_1[lVar5] =
             *(byte *)((long)&local_10 + lVar5) ^ (byte)uVar4 ^
             (bVar1 << (ulong)((uint)lVar5 + 1 & 7) |
             bVar1 >> (ulong)(((uint)lVar5 ^ 0xffffffff) & 7));
        lVar5 = lVar5 + 1;
        uVar6 = uVar6 + 7;
      } while (uVar6 != 0x71);
      uVar3 = uVar3 + 1;
    } while (uVar3 != 6);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    uVar3 = 0;
    *param_1 = *param_1 ^ (&DAT_100002d79)[lVar2];
    do {
      lVar5 = 0;
      do {
        param_1[lVar5] = (&DAT_100002d89)[param_1[lVar5]];
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x10);
      lVar5 = 0;
      uVar4 = uVar3 ^ 0xffffff9e;
      uStack_8 = *(undefined8 *)(param_1 + 8);
      local_10 = *(undefined8 *)param_1;
      do {
        uVar4 = param_1[lVar5] ^ uVar4;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x10);
      lVar5 = 0;
      uVar6 = 1;
      do {
        bVar1 = *(byte *)((ulong)&local_10 | uVar6 & 0xf);
        param_1[lVar5] =
             *(byte *)((long)&local_10 + lVar5) ^ (byte)uVar4 ^
             (bVar1 << (ulong)((uint)lVar5 + 1 & 7) |
             bVar1 >> (ulong)(((uint)lVar5 ^ 0xffffffff) & 7));
        lVar5 = lVar5 + 1;
        uVar6 = uVar6 + 7;
      } while (uVar6 != 0x71);
      uVar3 = uVar3 + 1;
    } while (uVar3 != 6);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
  return;
}


===== end ===== */

/* ===== func 0x100002c64 name=_strncmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _strncmp(char *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100002c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__strncmp_1000040a0)((int)param_1);
  return iVar1;
}


===== end ===== */

