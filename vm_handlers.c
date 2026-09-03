/* ===== op-func 0x100002120 name=FUN_100002120 =====

void FUN_100002120(void)

{
  DAT_100005d0c = 1;
  return;
}


===== end ===== */

/* ===== op-func 0x100002130 name=FUN_100002130 =====

void FUN_100002130(void)

{
  long lVar1;
  
  lVar1 = (long)DAT_100005d04;
  DAT_100005d04 = DAT_100005d04 + 1;
  DAT_100005d00 = (&DAT_100004500)[lVar1];
  return;
}


===== end ===== */

/* ===== op-func 0x100002160 name=FUN_100002160 =====

void FUN_100002160(void)

{
  long lVar1;
  
  lVar1 = (long)DAT_100005d04;
  DAT_100005d04 = DAT_100005d04 + 1;
  DAT_100005d00 = DAT_100005d00 ^ (&DAT_100004500)[lVar1];
  return;
}


===== end ===== */

/* ===== op-func 0x100002190 name=FUN_100002190 =====

void FUN_100002190(void)

{
  long lVar1;
  
  lVar1 = (long)DAT_100005d04;
  DAT_100005d04 = DAT_100005d04 + 1;
  DAT_100005d00 =
       DAT_100005d00 << ((&DAT_100004500)[lVar1] & 7) |
       DAT_100005d00 >> 8 - ((&DAT_100004500)[lVar1] & 7);
  return;
}


===== end ===== */

/* ===== op-func 0x1000021c0 name=FUN_1000021c0 =====

void FUN_1000021c0(void)

{
  DAT_100005d00 = (&DAT_100002250)[DAT_100005d00];
  return;
}


===== end ===== */

/* ===== op-func 0x1000021e0 name=FUN_1000021e0 =====

void FUN_1000021e0(void)

{
  long lVar1;
  
  lVar1 = (long)DAT_100005d08;
  if (lVar1 < 0x70) {
    DAT_100005d08 = DAT_100005d08 + 1;
    (&DAT_100004490)[lVar1] = DAT_100005d00;
  }
  return;
}


===== end ===== */

/* ===== op-func 0x100002210 name=FUN_100002210 =====

void FUN_100002210(void)

{
  return;
}


===== end ===== */

/* ===== op-func 0x100001f60 name=FUN_100001f60 =====

void FUN_100001f60(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  byte bVar6;
  long lVar7;
  undefined8 local_28;
  undefined8 uStack_20;
  
  lVar3 = 0;
  do {
    param_1[lVar3] = (byte)lVar3 ^ 0x70;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  lVar3 = 0;
  do {
    *param_1 = *param_1 ^ (&DAT_100002350)[lVar3];
    iVar5 = 0;
    do {
      lVar4 = 0;
      do {
        param_1[lVar4] = (&DAT_100002250)[param_1[lVar4]];
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x10);
      bVar6 = (byte)iVar5 ^ 0x9e;
      local_28 = *(undefined8 *)param_1;
      uStack_20 = *(undefined8 *)(param_1 + 8);
      lVar4 = 0;
      do {
        bVar6 = bVar6 ^ param_1[lVar4];
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x10);
      lVar7 = 1;
      lVar4 = 0;
      do {
        bVar1 = *(byte *)((long)&local_28 + (ulong)((uint)lVar7 & 0xf));
        bVar2 = (byte)(lVar4 + 1) & 7;
        param_1[lVar4] =
             (bVar1 << bVar2 | bVar1 >> 8 - bVar2) ^ *(byte *)((long)&local_28 + lVar4) ^ bVar6;
        lVar7 = lVar7 + 7;
        lVar4 = lVar4 + 1;
      } while (lVar7 != 0x71);
      iVar5 = iVar5 + 1;
    } while (iVar5 != 6);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  lVar3 = 0;
  do {
    *param_1 = *param_1 ^ (&DAT_100002360)[lVar3];
    iVar5 = 0;
    do {
      lVar4 = 0;
      do {
        param_1[lVar4] = (&DAT_100002250)[param_1[lVar4]];
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x10);
      bVar6 = (byte)iVar5 ^ 0x9e;
      local_28 = *(undefined8 *)param_1;
      uStack_20 = *(undefined8 *)(param_1 + 8);
      lVar4 = 0;
      do {
        bVar6 = bVar6 ^ param_1[lVar4];
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x10);
      lVar7 = 1;
      lVar4 = 0;
      do {
        bVar1 = *(byte *)((long)&local_28 + (ulong)((uint)lVar7 & 0xf));
        bVar2 = (byte)(lVar4 + 1) & 7;
        param_1[lVar4] =
             (bVar1 << bVar2 | bVar1 >> 8 - bVar2) ^ *(byte *)((long)&local_28 + lVar4) ^ bVar6;
        lVar7 = lVar7 + 7;
        lVar4 = lVar4 + 1;
      } while (lVar7 != 0x71);
      iVar5 = iVar5 + 1;
    } while (iVar5 != 6);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  return;
}


===== end ===== */

