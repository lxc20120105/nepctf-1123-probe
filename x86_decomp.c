/* ===== func 0x1000008c0 name=FUN_1000008c0 =====

/* WARNING: Removing unreachable block (ram,0x000100001776) */
/* WARNING: Removing unreachable block (ram,0x000100001764) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1000008c0(void)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  ssize_t sVar8;
  mach_header_64 *mhp;
  uint8_t *puVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  byte bVar13;
  uint uVar14;
  long lVar15;
  byte bVar16;
  int iVar17;
  byte bVar18;
  byte bVar19;
  long lVar20;
  ulong uVar21;
  int iVar22;
  byte local_3a8 [16];
  byte local_398 [16];
  uint local_388;
  byte bStack_384;
  byte abStack_383 [15];
  undefined4 uStack_374;
  undefined8 uStack_370;
  uint local_368;
  byte abStack_f8 [24];
  ulong local_e0;
  byte local_d8 [16];
  byte local_c8;
  undefined7 uStack_c7;
  undefined8 uStack_c0;
  byte local_b8;
  undefined7 uStack_b7;
  undefined8 uStack_b0;
  undefined8 local_a8;
  byte bStack_a0;
  undefined2 uStack_9f;
  undefined1 uStack_9d;
  pid_t pStack_9c;
  undefined5 uStack_98;
  uint local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  byte local_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  byte local_68;
  undefined2 uStack_67;
  byte bStack_65;
  undefined4 uStack_64;
  undefined8 uStack_60;
  size_t local_58;
  undefined8 uStack_50;
  byte local_48;
  undefined7 uStack_47;
  undefined8 uStack_40;
  
  local_58 = 0x288;
  local_a8 = 0xe00000001;
  bStack_a0 = 1;
  uStack_9f = 0;
  uStack_9d = 0;
  pStack_9c = _getpid();
  local_368 = 0;
  iVar17 = 0;
  iVar5 = _sysctl((int *)&local_a8,4,&local_388,&local_58,(void *)0x0,0);
  uVar14 = local_368;
  lVar6 = __dyld_get_image_header(0);
  if (*(int *)(lVar6 + 0x10) != 0) {
    piVar7 = (int *)(lVar6 + 0x20);
LAB_100000950:
    iVar22 = *piVar7;
    if (iVar22 == 0x1b) {
      lVar6 = 8;
      do {
        local_398[lVar6 + 8] = *(byte *)((long)piVar7 + lVar6);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x18);
    }
    else {
      piVar7 = (int *)((long)piVar7 + (ulong)(uint)piVar7[1]);
      if (iVar22 != 0x1b) goto LAB_10000098b;
    }
    goto LAB_10000099d;
  }
LAB_100000993:
  local_388 = 0;
  bStack_384 = 0;
  abStack_383[0] = 0;
  abStack_383[1] = 0;
  abStack_383[2] = 0;
  abStack_383[3] = 0;
  abStack_383[4] = 0;
  abStack_383[5] = 0;
  abStack_383[6] = 0;
  abStack_383[7] = 0;
  abStack_383[8] = 0;
  abStack_383[9] = 0;
  abStack_383[10] = 0;
LAB_10000099d:
  local_a8 = CONCAT44(0x18e71c62,local_388);
  bStack_a0 = abStack_383[3];
  uStack_9f = CONCAT11(abStack_383[5],abStack_383[4]);
  uStack_9d = abStack_383[6];
  pStack_9c = 0x851a064b;
  bVar4 = 0;
  lVar6 = 0;
  do {
    (&DAT_100004500)[lVar6] =
         (&DAT_100004000)[lVar6] ^ bVar4 ^ *(byte *)((long)&local_a8 + (ulong)((uint)lVar6 & 0xf));
    lVar6 = lVar6 + 1;
    bVar4 = bVar4 + 0x9b;
  } while (lVar6 != 0x482);
  _memset_pattern16(&DAT_100005500,&PTR_FUN_100003040,0x800);
  _DAT_100005b60 = FUN_100002130;
  _DAT_100005950 = FUN_100002160;
  _DAT_100005818 = FUN_100002190;
  _DAT_100005758 = FUN_1000021c0;
  _DAT_1000057e8 = FUN_1000021e0;
  _DAT_100005728 = FUN_100002210;
  _DAT_100005828 = FUN_100002120;
  DAT_100005d00 = 0;
  DAT_100005d08 = 0;
  DAT_100005d0c = '\0';
  DAT_100005d04 = 0;
  do {
    lVar6 = (long)DAT_100005d04;
    DAT_100005d04 = DAT_100005d04 + 1;
    (**(code **)(&DAT_100005500 + (ulong)(byte)(&DAT_100004500)[lVar6] * 8))();
    if (DAT_100005d0c != '\0') break;
  } while (DAT_100005d04 < 0x482);
  iVar17 = 0;
  do {
    iVar22 = iVar17;
    if (0xf < iVar22) {
      if (iVar22 != 0x10) {
        return 0;
      }
      goto LAB_100000b59;
    }
    sVar8 = _read(0,abStack_f8 + iVar22,(long)(0x10 - iVar22));
    iVar17 = 0;
    if (0 < sVar8) {
      iVar17 = (int)sVar8;
    }
    iVar17 = iVar17 + iVar22;
  } while (0 < sVar8);
  if (iVar22 == 0x10) {
LAB_100000b59:
    _arc4random_buf(local_d8,0x10);
    lVar6 = 0;
    mhp = (mach_header_64 *)__dyld_get_image_header(0);
    local_a8 = 0;
    puVar9 = _getsectiondata(mhp,"__TEXT","__text",&local_a8);
    uVar21 = local_a8;
    do {
      (&local_c8)[lVar6] = (byte)lVar6 ^ 0x48;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x10);
    if ((puVar9 != (uint8_t *)0x0) && (0 < (long)local_a8)) {
      uVar12 = 0;
      do {
        local_c8 = local_c8 ^ puVar9[uVar12];
        iVar17 = 0;
        do {
          lVar6 = 0;
          do {
            (&local_c8)[lVar6] = (&DAT_100002250)[(&local_c8)[lVar6]];
            lVar6 = lVar6 + 1;
          } while (lVar6 != 0x10);
          bVar4 = (byte)iVar17 ^ 0x9e;
          local_388 = (uint)CONCAT71(uStack_c7,local_c8);
          bStack_384 = (byte)((uint7)uStack_c7 >> 0x18);
          abStack_383[0] = (byte)((uint7)uStack_c7 >> 0x20);
          abStack_383[1] = (byte)((uint7)uStack_c7 >> 0x28);
          abStack_383[2] = (byte)((uint7)uStack_c7 >> 0x30);
          abStack_383[3] = (byte)uStack_c0;
          abStack_383[4] = (byte)((ulong)uStack_c0 >> 8);
          abStack_383[5] = (byte)((ulong)uStack_c0 >> 0x10);
          abStack_383[6] = (byte)((ulong)uStack_c0 >> 0x18);
          abStack_383[7] = (byte)((ulong)uStack_c0 >> 0x20);
          abStack_383[8] = (byte)((ulong)uStack_c0 >> 0x28);
          abStack_383[9] = (byte)((ulong)uStack_c0 >> 0x30);
          abStack_383[10] = (byte)((ulong)uStack_c0 >> 0x38);
          lVar6 = 0;
          do {
            bVar4 = bVar4 ^ (&local_c8)[lVar6];
            lVar6 = lVar6 + 1;
          } while (lVar6 != 0x10);
          lVar20 = 1;
          lVar6 = 0;
          do {
            bVar1 = *(byte *)((long)&local_388 + (ulong)((uint)lVar20 & 0xf));
            bVar19 = (byte)(lVar6 + 1) & 7;
            (&local_c8)[lVar6] =
                 (bVar1 << bVar19 | bVar1 >> 8 - bVar19) ^ *(byte *)((long)&local_388 + lVar6) ^
                 bVar4;
            lVar20 = lVar20 + 7;
            lVar6 = lVar6 + 1;
          } while (lVar20 != 0x71);
          iVar17 = iVar17 + 1;
        } while (iVar17 != 6);
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar21);
    }
    local_388 = (uint)local_d8._0_8_;
    bStack_384 = SUB81(local_d8._0_8_,4);
    abStack_383[0] = SUB81(local_d8._0_8_,5);
    abStack_383[1] = SUB81(local_d8._0_8_,6);
    abStack_383[2] = SUB81(local_d8._0_8_,7);
    abStack_383[3] = (byte)local_d8._8_8_;
    abStack_383[4] = SUB81(local_d8._8_8_,1);
    abStack_383[5] = SUB81(local_d8._8_8_,2);
    abStack_383[6] = SUB81(local_d8._8_8_,3);
    abStack_383[7] = SUB81(local_d8._8_8_,4);
    abStack_383[8] = SUB81(local_d8._8_8_,5);
    abStack_383[9] = SUB81(local_d8._8_8_,6);
    abStack_383[10] = SUB81(local_d8._8_8_,7);
    abStack_383[0xb] = local_c8;
    abStack_383[0xc] = (byte)uStack_c7;
    abStack_383[0xd] = (byte)((uint7)uStack_c7 >> 8);
    abStack_383[0xe] = (byte)((uint7)uStack_c7 >> 0x10);
    uStack_374 = (undefined4)((uint7)uStack_c7 >> 0x18);
    uStack_370 = uStack_c0;
    _write(1,&local_388,0x20);
    FUN_100001f60(local_3a8);
    lVar6 = 0;
    do {
      (&local_78)[lVar6] = (byte)lVar6 ^ 0x53;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x10);
    lVar6 = 0;
    do {
      local_78 = local_78 ^ local_3a8[lVar6];
      iVar17 = 0;
      do {
        lVar20 = 0;
        do {
          (&local_78)[lVar20] = (&DAT_100002250)[(&local_78)[lVar20]];
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x10);
        bVar4 = (byte)iVar17 ^ 0x9e;
        local_388 = (uint)CONCAT71(uStack_77,local_78);
        bStack_384 = (byte)((uint7)uStack_77 >> 0x18);
        abStack_383[0] = (byte)((uint7)uStack_77 >> 0x20);
        abStack_383[1] = (byte)((uint7)uStack_77 >> 0x28);
        abStack_383[2] = (byte)((uint7)uStack_77 >> 0x30);
        abStack_383[3] = (byte)uStack_70;
        abStack_383[4] = (byte)((ulong)uStack_70 >> 8);
        abStack_383[5] = (byte)((ulong)uStack_70 >> 0x10);
        abStack_383[6] = (byte)((ulong)uStack_70 >> 0x18);
        abStack_383[7] = (byte)((ulong)uStack_70 >> 0x20);
        abStack_383[8] = (byte)((ulong)uStack_70 >> 0x28);
        abStack_383[9] = (byte)((ulong)uStack_70 >> 0x30);
        abStack_383[10] = (byte)((ulong)uStack_70 >> 0x38);
        lVar20 = 0;
        do {
          bVar4 = bVar4 ^ (&local_78)[lVar20];
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x10);
        lVar15 = 1;
        lVar20 = 0;
        do {
          bVar1 = *(byte *)((long)&local_388 + (ulong)((uint)lVar15 & 0xf));
          bVar19 = (byte)(lVar20 + 1) & 7;
          (&local_78)[lVar20] =
               (bVar1 << bVar19 | bVar1 >> 8 - bVar19) ^ *(byte *)((long)&local_388 + lVar20) ^
               bVar4;
          lVar15 = lVar15 + 7;
          lVar20 = lVar20 + 1;
        } while (lVar15 != 0x71);
        iVar17 = iVar17 + 1;
      } while (iVar17 != 6);
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x10);
    lVar6 = 0;
    do {
      local_78 = local_78 ^ abStack_f8[lVar6];
      iVar17 = 0;
      do {
        lVar20 = 0;
        do {
          (&local_78)[lVar20] = (&DAT_100002250)[(&local_78)[lVar20]];
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x10);
        bVar4 = (byte)iVar17 ^ 0x9e;
        local_388 = (uint)CONCAT71(uStack_77,local_78);
        bStack_384 = (byte)((uint7)uStack_77 >> 0x18);
        abStack_383[0] = (byte)((uint7)uStack_77 >> 0x20);
        abStack_383[1] = (byte)((uint7)uStack_77 >> 0x28);
        abStack_383[2] = (byte)((uint7)uStack_77 >> 0x30);
        abStack_383[3] = (byte)uStack_70;
        abStack_383[4] = (byte)((ulong)uStack_70 >> 8);
        abStack_383[5] = (byte)((ulong)uStack_70 >> 0x10);
        abStack_383[6] = (byte)((ulong)uStack_70 >> 0x18);
        abStack_383[7] = (byte)((ulong)uStack_70 >> 0x20);
        abStack_383[8] = (byte)((ulong)uStack_70 >> 0x28);
        abStack_383[9] = (byte)((ulong)uStack_70 >> 0x30);
        abStack_383[10] = (byte)((ulong)uStack_70 >> 0x38);
        lVar20 = 0;
        do {
          bVar4 = bVar4 ^ (&local_78)[lVar20];
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x10);
        lVar15 = 1;
        lVar20 = 0;
        do {
          bVar1 = *(byte *)((long)&local_388 + (ulong)((uint)lVar15 & 0xf));
          bVar19 = (byte)(lVar20 + 1) & 7;
          (&local_78)[lVar20] =
               (bVar1 << bVar19 | bVar1 >> 8 - bVar19) ^ *(byte *)((long)&local_388 + lVar20) ^
               bVar4;
          lVar15 = lVar15 + 7;
          lVar20 = lVar20 + 1;
        } while (lVar15 != 0x71);
        iVar17 = iVar17 + 1;
      } while (iVar17 != 6);
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x10);
    lVar6 = 0;
    do {
      local_78 = local_78 ^ local_d8[lVar6];
      iVar17 = 0;
      do {
        lVar20 = 0;
        do {
          (&local_78)[lVar20] = (&DAT_100002250)[(&local_78)[lVar20]];
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x10);
        bVar4 = (byte)iVar17 ^ 0x9e;
        local_388 = (uint)CONCAT71(uStack_77,local_78);
        bStack_384 = (byte)((uint7)uStack_77 >> 0x18);
        abStack_383[0] = (byte)((uint7)uStack_77 >> 0x20);
        abStack_383[1] = (byte)((uint7)uStack_77 >> 0x28);
        abStack_383[2] = (byte)((uint7)uStack_77 >> 0x30);
        abStack_383[3] = (byte)uStack_70;
        abStack_383[4] = (byte)((ulong)uStack_70 >> 8);
        abStack_383[5] = (byte)((ulong)uStack_70 >> 0x10);
        abStack_383[6] = (byte)((ulong)uStack_70 >> 0x18);
        abStack_383[7] = (byte)((ulong)uStack_70 >> 0x20);
        abStack_383[8] = (byte)((ulong)uStack_70 >> 0x28);
        abStack_383[9] = (byte)((ulong)uStack_70 >> 0x30);
        abStack_383[10] = (byte)((ulong)uStack_70 >> 0x38);
        lVar20 = 0;
        do {
          bVar4 = bVar4 ^ (&local_78)[lVar20];
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x10);
        lVar15 = 1;
        lVar20 = 0;
        do {
          bVar1 = *(byte *)((long)&local_388 + (ulong)((uint)lVar15 & 0xf));
          bVar19 = (byte)(lVar20 + 1) & 7;
          (&local_78)[lVar20] =
               (bVar1 << bVar19 | bVar1 >> 8 - bVar19) ^ *(byte *)((long)&local_388 + lVar20) ^
               bVar4;
          lVar15 = lVar15 + 7;
          lVar20 = lVar20 + 1;
        } while (lVar15 != 0x71);
        iVar17 = iVar17 + 1;
      } while (iVar17 != 6);
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x10);
    lVar6 = 0;
    do {
      *(byte *)((long)&local_88 + lVar6) = (byte)lVar6 ^ 0x54;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x10);
    lVar6 = 0;
    do {
      local_88 = CONCAT31(local_88._1_3_,(byte)local_88 ^ abStack_f8[lVar6]);
      iVar17 = 0;
      do {
        lVar20 = 0;
        do {
          *(undefined *)((long)&local_88 + lVar20) =
               (&DAT_100002250)[*(byte *)((long)&local_88 + lVar20)];
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x10);
        bVar4 = (byte)iVar17 ^ 0x9e;
        local_388 = local_88;
        bStack_384 = (byte)uStack_84;
        abStack_383[0] = (byte)((uint)uStack_84 >> 8);
        abStack_383[1] = (byte)((uint)uStack_84 >> 0x10);
        abStack_383[2] = (byte)((uint)uStack_84 >> 0x18);
        abStack_383[3] = (byte)uStack_80;
        abStack_383[4] = (byte)((uint)uStack_80 >> 8);
        abStack_383[5] = (byte)((uint)uStack_80 >> 0x10);
        abStack_383[6] = (byte)((uint)uStack_80 >> 0x18);
        abStack_383[7] = (byte)uStack_7c;
        abStack_383[8] = (byte)((uint)uStack_7c >> 8);
        abStack_383[9] = (byte)((uint)uStack_7c >> 0x10);
        abStack_383[10] = (byte)((uint)uStack_7c >> 0x18);
        lVar20 = 0;
        do {
          bVar4 = bVar4 ^ *(byte *)((long)&local_88 + lVar20);
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x10);
        lVar15 = 1;
        lVar20 = 0;
        do {
          bVar1 = *(byte *)((long)&local_388 + (ulong)((uint)lVar15 & 0xf));
          bVar19 = (byte)(lVar20 + 1) & 7;
          *(byte *)((long)&local_88 + lVar20) =
               (bVar1 << bVar19 | bVar1 >> 8 - bVar19) ^ *(byte *)((long)&local_388 + lVar20) ^
               bVar4;
          lVar15 = lVar15 + 7;
          lVar20 = lVar20 + 1;
        } while (lVar15 != 0x71);
        iVar17 = iVar17 + 1;
      } while (iVar17 != 6);
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x10);
    lVar6 = 0;
    do {
      local_88 = CONCAT31(local_88._1_3_,(byte)local_88 ^ local_d8[lVar6]);
      uVar10 = 0;
      do {
        lVar20 = 0;
        do {
          *(undefined *)((long)&local_88 + lVar20) =
               (&DAT_100002250)[*(byte *)((long)&local_88 + lVar20)];
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x10);
        uVar11 = uVar10 ^ 0x9e;
        local_388 = local_88;
        bStack_384 = (byte)uStack_84;
        abStack_383[0] = (byte)((uint)uStack_84 >> 8);
        abStack_383[1] = (byte)((uint)uStack_84 >> 0x10);
        abStack_383[2] = (byte)((uint)uStack_84 >> 0x18);
        abStack_383[3] = (byte)uStack_80;
        abStack_383[4] = (byte)((uint)uStack_80 >> 8);
        abStack_383[5] = (byte)((uint)uStack_80 >> 0x10);
        abStack_383[6] = (byte)((uint)uStack_80 >> 0x18);
        abStack_383[7] = (byte)uStack_7c;
        abStack_383[8] = (byte)((uint)uStack_7c >> 8);
        abStack_383[9] = (byte)((uint)uStack_7c >> 0x10);
        abStack_383[10] = (byte)((uint)uStack_7c >> 0x18);
        lVar20 = 0;
        do {
          bVar4 = (byte)uVar11 ^ *(byte *)((long)&local_88 + lVar20);
          uVar11 = (uint)bVar4;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x10);
        lVar15 = 1;
        lVar20 = 0;
        do {
          bVar1 = *(byte *)((long)&local_388 + (ulong)((uint)lVar15 & 0xf));
          bVar19 = (byte)(lVar20 + 1) & 7;
          *(byte *)((long)&local_88 + lVar20) =
               (bVar1 << bVar19 | bVar1 >> 8 - bVar19) ^ *(byte *)((long)&local_388 + lVar20) ^
               bVar4;
          lVar15 = lVar15 + 7;
          lVar20 = lVar20 + 1;
        } while (lVar15 != 0x71);
        uVar10 = uVar10 + 1;
      } while (uVar10 != 6);
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x10);
    FUN_100001f60(&local_a8);
    lVar6 = 0;
    do {
      (&local_68)[lVar6] = (byte)lVar6 ^ 0x68;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x10);
    lVar6 = 0;
    do {
      local_68 = local_68 ^ *(byte *)((long)&local_a8 + lVar6);
      iVar17 = 0;
      do {
        lVar20 = 0;
        do {
          (&local_68)[lVar20] = (&DAT_100002250)[(&local_68)[lVar20]];
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x10);
        bVar4 = (byte)iVar17 ^ 0x9e;
        local_388 = CONCAT13(bStack_65,CONCAT21(uStack_67,local_68));
        bStack_384 = (byte)uStack_64;
        abStack_383[0] = (byte)((uint)uStack_64 >> 8);
        abStack_383[1] = (byte)((uint)uStack_64 >> 0x10);
        abStack_383[2] = (byte)((uint)uStack_64 >> 0x18);
        abStack_383[3] = (byte)uStack_60;
        abStack_383[4] = (byte)((ulong)uStack_60 >> 8);
        abStack_383[5] = (byte)((ulong)uStack_60 >> 0x10);
        abStack_383[6] = (byte)((ulong)uStack_60 >> 0x18);
        abStack_383[7] = (byte)((ulong)uStack_60 >> 0x20);
        abStack_383[8] = (byte)((ulong)uStack_60 >> 0x28);
        abStack_383[9] = (byte)((ulong)uStack_60 >> 0x30);
        abStack_383[10] = (byte)((ulong)uStack_60 >> 0x38);
        lVar20 = 0;
        do {
          bVar4 = bVar4 ^ (&local_68)[lVar20];
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x10);
        lVar15 = 1;
        lVar20 = 0;
        do {
          bVar1 = *(byte *)((long)&local_388 + (ulong)((uint)lVar15 & 0xf));
          bVar19 = (byte)(lVar20 + 1) & 7;
          (&local_68)[lVar20] =
               (bVar1 << bVar19 | bVar1 >> 8 - bVar19) ^ *(byte *)((long)&local_388 + lVar20) ^
               bVar4;
          lVar15 = lVar15 + 7;
          lVar20 = lVar20 + 1;
        } while (lVar15 != 0x71);
        iVar17 = iVar17 + 1;
      } while (iVar17 != 6);
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x10);
    lVar6 = 0;
    do {
      local_68 = local_68 ^ (&local_c8)[lVar6];
      iVar17 = 0;
      do {
        lVar20 = 0;
        do {
          (&local_68)[lVar20] = (&DAT_100002250)[(&local_68)[lVar20]];
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x10);
        bVar4 = (byte)iVar17 ^ 0x9e;
        local_388 = CONCAT13(bStack_65,CONCAT21(uStack_67,local_68));
        bStack_384 = (byte)uStack_64;
        abStack_383[0] = (byte)((uint)uStack_64 >> 8);
        abStack_383[1] = (byte)((uint)uStack_64 >> 0x10);
        abStack_383[2] = (byte)((uint)uStack_64 >> 0x18);
        abStack_383[3] = (byte)uStack_60;
        abStack_383[4] = (byte)((ulong)uStack_60 >> 8);
        abStack_383[5] = (byte)((ulong)uStack_60 >> 0x10);
        abStack_383[6] = (byte)((ulong)uStack_60 >> 0x18);
        abStack_383[7] = (byte)((ulong)uStack_60 >> 0x20);
        abStack_383[8] = (byte)((ulong)uStack_60 >> 0x28);
        abStack_383[9] = (byte)((ulong)uStack_60 >> 0x30);
        abStack_383[10] = (byte)((ulong)uStack_60 >> 0x38);
        lVar20 = 0;
        do {
          bVar4 = bVar4 ^ (&local_68)[lVar20];
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x10);
        lVar15 = 1;
        lVar20 = 0;
        do {
          bVar1 = *(byte *)((long)&local_388 + (ulong)((uint)lVar15 & 0xf));
          bVar19 = (byte)(lVar20 + 1) & 7;
          (&local_68)[lVar20] =
               (bVar1 << bVar19 | bVar1 >> 8 - bVar19) ^ *(byte *)((long)&local_388 + lVar20) ^
               bVar4;
          lVar15 = lVar15 + 7;
          lVar20 = lVar20 + 1;
        } while (lVar15 != 0x71);
        iVar17 = iVar17 + 1;
      } while (iVar17 != 6);
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x10);
    if ((iVar5 == 0) && ((uVar14 & 0x800) != 0)) {
      DAT_10000449d = DAT_10000449d ^ 0xa5;
      bStack_65 = bStack_65 ^ 0x5c;
    }
    uVar21 = 0;
LAB_1000012c0:
    do {
      iVar5 = 0;
      do {
        iVar17 = iVar5;
        if (0x1c < iVar17) break;
        sVar8 = _read(0,(void *)((long)&local_388 + (long)iVar17),(long)(0x1d - iVar17));
        iVar5 = 0;
        if (0 < sVar8) {
          iVar5 = (int)sVar8;
        }
        iVar5 = iVar5 + iVar17;
      } while (0 < sVar8);
      iVar5 = 1;
      if (iVar17 == 0x1d) {
        uStack_98 = CONCAT14((byte)uStack_374,
                             CONCAT13(abStack_383[0xe],
                                      CONCAT12(abStack_383[0xd],
                                               CONCAT11(abStack_383[0xc],abStack_383[0xb]))));
        local_a8 = CONCAT17(abStack_383[2],
                            CONCAT16(abStack_383[1],
                                     CONCAT15(abStack_383[0],CONCAT14(bStack_384,local_388))));
        bStack_a0 = abStack_383[3];
        uStack_9f = (undefined2)
                    (CONCAT12(abStack_383[5],CONCAT11(abStack_383[4],abStack_383[3])) >> 8);
        uStack_9d = abStack_383[6];
        pStack_9c = CONCAT13(abStack_383[10],
                             CONCAT12(abStack_383[9],CONCAT11(abStack_383[8],abStack_383[7])));
        if (bStack_384 == 0xff) {
          iVar5 = 1;
        }
        else {
          lVar6 = 0;
          do {
            (&local_b8)[lVar6] = (byte)lVar6 ^ 0x4d;
            lVar6 = lVar6 + 1;
          } while (lVar6 != 0x10);
          lVar6 = 0;
          do {
            local_b8 = local_b8 ^ (&local_78)[lVar6];
            iVar5 = 0;
            do {
              lVar20 = 0;
              do {
                (&local_b8)[lVar20] = (&DAT_100002250)[(&local_b8)[lVar20]];
                lVar20 = lVar20 + 1;
              } while (lVar20 != 0x10);
              bVar4 = (byte)iVar5 ^ 0x9e;
              local_58 = CONCAT71(uStack_b7,local_b8);
              uStack_50 = uStack_b0;
              lVar20 = 0;
              do {
                bVar4 = bVar4 ^ (&local_b8)[lVar20];
                lVar20 = lVar20 + 1;
              } while (lVar20 != 0x10);
              lVar15 = 1;
              lVar20 = 0;
              do {
                bVar1 = *(byte *)((long)&local_58 + (ulong)((uint)lVar15 & 0xf));
                bVar19 = (byte)(lVar20 + 1) & 7;
                (&local_b8)[lVar20] =
                     (bVar1 << bVar19 | bVar1 >> 8 - bVar19) ^ *(byte *)((long)&local_58 + lVar20) ^
                     bVar4;
                lVar15 = lVar15 + 7;
                lVar20 = lVar20 + 1;
              } while (lVar15 != 0x71);
              iVar5 = iVar5 + 1;
            } while (iVar5 != 6);
            lVar6 = lVar6 + 1;
          } while (lVar6 != 0x10);
          lVar6 = 0;
          do {
            local_b8 = local_b8 ^ *(byte *)((long)&local_a8 + lVar6);
            uVar14 = 0;
            do {
              lVar20 = 0;
              do {
                (&local_b8)[lVar20] = (&DAT_100002250)[(&local_b8)[lVar20]];
                lVar20 = lVar20 + 1;
              } while (lVar20 != 0x10);
              uVar10 = uVar14 ^ 0x9e;
              local_58 = CONCAT71(uStack_b7,local_b8);
              uStack_50 = uStack_b0;
              lVar20 = 0;
              do {
                bVar4 = (byte)uVar10 ^ (&local_b8)[lVar20];
                uVar10 = (uint)bVar4;
                lVar20 = lVar20 + 1;
              } while (lVar20 != 0x10);
              lVar15 = 1;
              lVar20 = 0;
              do {
                bVar1 = *(byte *)((long)&local_58 + (ulong)((uint)lVar15 & 0xf));
                bVar19 = (byte)(lVar20 + 1) & 7;
                (&local_b8)[lVar20] =
                     (bVar1 << bVar19 | bVar1 >> 8 - bVar19) ^ *(byte *)((long)&local_58 + lVar20) ^
                     bVar4;
                lVar15 = lVar15 + 7;
                lVar20 = lVar20 + 1;
              } while (lVar15 != 0x71);
              uVar14 = uVar14 + 1;
            } while (uVar14 != 6);
            lVar6 = lVar6 + 1;
          } while (lVar6 != 0x15);
          lVar6 = 0;
          bVar3 = false;
          do {
            bVar3 = (bool)(bVar3 | (&local_b8)[lVar6] != *(byte *)((long)&uStack_374 + lVar6 + 1));
            lVar6 = lVar6 + 1;
          } while (lVar6 != 8);
          if ((local_388 != (uint)uVar21) || ((local_388 % 7) * 2 + 1 != (uint)bStack_384)) {
            bVar3 = true;
          }
          if (!bVar3) {
            lVar6 = 0;
            do {
              local_88 = CONCAT31(local_88._1_3_,(byte)local_88 ^ *(byte *)((long)&local_a8 + lVar6)
                                 );
              iVar5 = 0;
              do {
                lVar20 = 0;
                do {
                  *(undefined *)((long)&local_88 + lVar20) =
                       (&DAT_100002250)[*(byte *)((long)&local_88 + lVar20)];
                  lVar20 = lVar20 + 1;
                } while (lVar20 != 0x10);
                bVar4 = (byte)iVar5 ^ 0x9e;
                local_58 = CONCAT44(uStack_84,local_88);
                lVar20 = 0;
                do {
                  bVar4 = bVar4 ^ *(byte *)((long)&local_88 + lVar20);
                  lVar20 = lVar20 + 1;
                } while (lVar20 != 0x10);
                lVar15 = 1;
                lVar20 = 0;
                do {
                  bVar1 = *(byte *)((long)&local_58 + (ulong)((uint)lVar15 & 0xf));
                  bVar19 = (byte)(lVar20 + 1) & 7;
                  *(byte *)((long)&local_88 + lVar20) =
                       (bVar1 << bVar19 | bVar1 >> 8 - bVar19) ^ *(byte *)((long)&local_58 + lVar20)
                       ^ bVar4;
                  lVar15 = lVar15 + 7;
                  lVar20 = lVar20 + 1;
                } while (lVar15 != 0x71);
                iVar5 = iVar5 + 1;
              } while (iVar5 != 6);
              lVar6 = lVar6 + 1;
            } while (lVar6 != 0x15);
            lVar6 = 0;
            do {
              abStack_383[lVar6] =
                   abStack_383[lVar6] ^ (&local_68)[(uint)bStack_384 + (int)lVar6 & 0xf];
              lVar6 = lVar6 + 1;
            } while (lVar6 != 0x10);
            local_e0 = uVar21;
            lVar6 = 0;
            do {
              abStack_383[lVar6] = (&DAT_100002250)[abStack_383[lVar6]];
              bVar16 = abStack_383[0xb];
              bVar13 = abStack_383[7];
              bVar2 = abStack_383[6];
              bVar19 = abStack_383[3];
              bVar1 = abStack_383[2];
              bVar4 = abStack_383[1];
              lVar6 = lVar6 + 1;
            } while (lVar6 != 0x10);
            abStack_383[1] = abStack_383[5];
            abStack_383[2] = abStack_383[10];
            abStack_383[3] = (byte)uStack_374;
            abStack_383[5] = abStack_383[9];
            abStack_383[6] = abStack_383[0xe];
            abStack_383[7] = bVar19;
            abStack_383[9] = abStack_383[0xd];
            abStack_383[10] = bVar1;
            abStack_383[0xb] = bVar13;
            abStack_383[0xd] = bVar4;
            abStack_383[0xe] = bVar2;
            uStack_374 = CONCAT31(uStack_374._1_3_,bVar16);
            lVar6 = 0;
            do {
              bVar4 = abStack_383[lVar6 * 4];
              bVar1 = abStack_383[lVar6 * 4 + 1];
              bVar19 = abStack_383[lVar6 * 4 + 2];
              bVar2 = abStack_383[lVar6 * 4 + 3];
              bVar13 = bVar4 * '\x02' ^ bVar19 ^ (char)bVar4 >> 7 & 0x1bU;
              bVar18 = (char)bVar1 >> 7 & 0x1bU ^ bVar1 * '\x02';
              abStack_383[lVar6 * 4] = bVar1 ^ bVar2 ^ bVar13 ^ bVar18;
              bVar16 = (char)bVar19 >> 7 & 0x1bU ^ bVar19 * '\x02';
              abStack_383[lVar6 * 4 + 1] = bVar2 ^ bVar19 ^ bVar4 ^ bVar18 ^ bVar16;
              bVar19 = (char)bVar2 >> 7 & 0x1bU ^ bVar2 * '\x02';
              abStack_383[lVar6 * 4 + 2] = bVar2 ^ bVar1 ^ bVar4 ^ bVar16 ^ bVar19;
              abStack_383[lVar6 * 4 + 3] = bVar1 ^ bVar4 ^ bVar13 ^ bVar19;
              lVar6 = lVar6 + 1;
            } while (lVar6 != 4);
            local_58 = CONCAT17(abStack_383[7],
                                CONCAT16(abStack_383[6],
                                         CONCAT15(abStack_383[5],
                                                  CONCAT14(abStack_383[4],
                                                           CONCAT13(abStack_383[3],
                                                                    CONCAT12(abStack_383[2],
                                                                             CONCAT11(abStack_383[1]
                                                                                      ,abStack_383
                                                                                       [0])))))));
            uStack_50 = CONCAT17((byte)uStack_374,
                                 CONCAT16(abStack_383[0xe],
                                          CONCAT15(abStack_383[0xd],
                                                   CONCAT14(abStack_383[0xc],
                                                            CONCAT13(abStack_383[0xb],
                                                                     CONCAT12(abStack_383[10],
                                                                              CONCAT11(abStack_383
                                                                                       [9],
                                                  abStack_383[8])))))));
            lVar6 = 1;
            lVar20 = 0;
            do {
              bVar4 = *(byte *)((long)&local_58 + (ulong)((uint)bStack_384 + (int)lVar20 & 0xf));
              bVar1 = bStack_384 + 1 & 7;
              abStack_383[lVar20] =
                   abStack_383[lVar20] ^
                   (bVar4 << bVar1 | bVar4 >> 8 - bVar1) ^
                   *(byte *)((long)&local_58 + (ulong)((uint)lVar6 & 0xf)) ^
                   (&DAT_100004490)
                   [(ulong)(uint)((int)(((uint)bStack_384 - ((int)(bStack_384 - 1) >> 0x1f)) + -1)
                                 >> 1) * 0x10 + lVar20];
              uVar21 = local_e0;
              lVar20 = lVar20 + 1;
              lVar6 = lVar6 + 5;
            } while (lVar6 != 0x51);
            lVar6 = 0;
            do {
              (&local_48)[lVar6] = (byte)lVar6 ^ 0x6d;
              lVar6 = lVar6 + 1;
            } while (lVar6 != 0x10);
            lVar6 = 0;
            do {
              local_48 = local_48 ^ (&local_78)[lVar6];
              uVar14 = 0;
              do {
                lVar20 = 0;
                do {
                  (&local_48)[lVar20] = (&DAT_100002250)[(&local_48)[lVar20]];
                  lVar20 = lVar20 + 1;
                } while (lVar20 != 0x10);
                uVar10 = uVar14 ^ 0x9e;
                local_58 = CONCAT71(uStack_47,local_48);
                uStack_50 = uStack_40;
                lVar20 = 0;
                do {
                  bVar4 = (byte)uVar10 ^ (&local_48)[lVar20];
                  uVar10 = (uint)bVar4;
                  lVar20 = lVar20 + 1;
                } while (lVar20 != 0x10);
                lVar15 = 1;
                lVar20 = 0;
                do {
                  bVar1 = *(byte *)((long)&local_58 + (ulong)((uint)lVar15 & 0xf));
                  bVar19 = (byte)(lVar20 + 1) & 7;
                  (&local_48)[lVar20] =
                       (bVar1 << bVar19 | bVar1 >> 8 - bVar19) ^ *(byte *)((long)&local_58 + lVar20)
                       ^ bVar4;
                  lVar15 = lVar15 + 7;
                  lVar20 = lVar20 + 1;
                } while (lVar15 != 0x71);
                uVar14 = uVar14 + 1;
              } while (uVar14 != 6);
              lVar6 = lVar6 + 1;
            } while (lVar6 != 0x10);
            local_48 = local_48 ^ bStack_384;
            uVar14 = 0;
            do {
              lVar6 = 0;
              do {
                (&local_48)[lVar6] = (&DAT_100002250)[(&local_48)[lVar6]];
                lVar6 = lVar6 + 1;
              } while (lVar6 != 0x10);
              uVar10 = uVar14 ^ 0x9e;
              local_58 = CONCAT71(uStack_47,local_48);
              uStack_50 = uStack_40;
              lVar6 = 0;
              do {
                bVar4 = (byte)uVar10 ^ (&local_48)[lVar6];
                uVar10 = (uint)bVar4;
                lVar6 = lVar6 + 1;
              } while (lVar6 != 0x10);
              lVar20 = 1;
              lVar6 = 0;
              do {
                bVar1 = *(byte *)((long)&local_58 + (ulong)((uint)lVar20 & 0xf));
                bVar19 = (byte)(lVar6 + 1) & 7;
                (&local_48)[lVar6] =
                     (bVar1 << bVar19 | bVar1 >> 8 - bVar19) ^ *(byte *)((long)&local_58 + lVar6) ^
                     bVar4;
                lVar20 = lVar20 + 7;
                lVar6 = lVar6 + 1;
              } while (lVar20 != 0x71);
              uVar14 = uVar14 + 1;
            } while (uVar14 != 6);
            lVar6 = 0;
            do {
              local_48 = local_48 ^ *(byte *)((long)&local_88 + lVar6);
              iVar5 = 0;
              do {
                lVar20 = 0;
                do {
                  (&local_48)[lVar20] = (&DAT_100002250)[(&local_48)[lVar20]];
                  lVar20 = lVar20 + 1;
                } while (lVar20 != 0x10);
                bVar4 = (byte)iVar5 ^ 0x9e;
                local_58 = CONCAT71(uStack_47,local_48);
                uStack_50 = uStack_40;
                lVar20 = 0;
                do {
                  bVar4 = bVar4 ^ (&local_48)[lVar20];
                  lVar20 = lVar20 + 1;
                } while (lVar20 != 0x10);
                lVar15 = 1;
                lVar20 = 0;
                do {
                  bVar1 = *(byte *)((long)&local_58 + (ulong)((uint)lVar15 & 0xf));
                  bVar19 = (byte)(lVar20 + 1) & 7;
                  (&local_48)[lVar20] =
                       (bVar1 << bVar19 | bVar1 >> 8 - bVar19) ^ *(byte *)((long)&local_58 + lVar20)
                       ^ bVar4;
                  lVar15 = lVar15 + 7;
                  lVar20 = lVar20 + 1;
                } while (lVar15 != 0x71);
                iVar5 = iVar5 + 1;
              } while (iVar5 != 6);
              lVar6 = lVar6 + 1;
            } while (lVar6 != 0x10);
            lVar6 = 0;
            do {
              local_48 = local_48 ^ (&local_68)[lVar6];
              iVar5 = 0;
              do {
                lVar20 = 0;
                do {
                  (&local_48)[lVar20] = (&DAT_100002250)[(&local_48)[lVar20]];
                  lVar20 = lVar20 + 1;
                } while (lVar20 != 0x10);
                bVar4 = (byte)iVar5 ^ 0x9e;
                local_58 = CONCAT71(uStack_47,local_48);
                uStack_50 = uStack_40;
                lVar20 = 0;
                do {
                  bVar4 = bVar4 ^ (&local_48)[lVar20];
                  lVar20 = lVar20 + 1;
                } while (lVar20 != 0x10);
                lVar15 = 1;
                lVar20 = 0;
                do {
                  bVar1 = *(byte *)((long)&local_58 + (ulong)((uint)lVar15 & 0xf));
                  bVar19 = (byte)(lVar20 + 1) & 7;
                  (&local_48)[lVar20] =
                       (bVar1 << bVar19 | bVar1 >> 8 - bVar19) ^ *(byte *)((long)&local_58 + lVar20)
                       ^ bVar4;
                  lVar15 = lVar15 + 7;
                  lVar20 = lVar20 + 1;
                } while (lVar15 != 0x71);
                iVar5 = iVar5 + 1;
              } while (iVar5 != 6);
              lVar6 = lVar6 + 1;
            } while (lVar6 != 0x10);
            lVar6 = 0;
            do {
              local_398[lVar6] = (&local_48)[lVar6] ^ abStack_383[lVar6];
              lVar6 = lVar6 + 1;
            } while (lVar6 != 0x10);
            _write(1,local_398,0x10);
            lVar6 = 0;
            do {
              local_68 = local_68 ^ *(byte *)((long)&local_a8 + lVar6);
              iVar5 = 0;
              do {
                lVar20 = 0;
                do {
                  (&local_68)[lVar20] = (&DAT_100002250)[(&local_68)[lVar20]];
                  lVar20 = lVar20 + 1;
                } while (lVar20 != 0x10);
                bVar4 = (byte)iVar5 ^ 0x9e;
                local_58 = CONCAT44(uStack_64,CONCAT13(bStack_65,CONCAT21(uStack_67,local_68)));
                uStack_50 = uStack_60;
                lVar20 = 0;
                do {
                  bVar4 = bVar4 ^ (&local_68)[lVar20];
                  lVar20 = lVar20 + 1;
                } while (lVar20 != 0x10);
                lVar15 = 1;
                lVar20 = 0;
                do {
                  bVar1 = *(byte *)((long)&local_58 + (ulong)((uint)lVar15 & 0xf));
                  bVar19 = (byte)(lVar20 + 1) & 7;
                  (&local_68)[lVar20] =
                       (bVar1 << bVar19 | bVar1 >> 8 - bVar19) ^ *(byte *)((long)&local_58 + lVar20)
                       ^ bVar4;
                  lVar15 = lVar15 + 7;
                  lVar20 = lVar20 + 1;
                } while (lVar15 != 0x71);
                iVar5 = iVar5 + 1;
              } while (iVar5 != 6);
              lVar6 = lVar6 + 1;
            } while (lVar6 != 0x15);
            lVar6 = 0;
            do {
              local_68 = local_68 ^ abStack_383[lVar6];
              iVar5 = 0;
              do {
                lVar20 = 0;
                do {
                  (&local_68)[lVar20] = (&DAT_100002250)[(&local_68)[lVar20]];
                  lVar20 = lVar20 + 1;
                } while (lVar20 != 0x10);
                bVar4 = (byte)iVar5 ^ 0x9e;
                local_58 = CONCAT44(uStack_64,CONCAT13(bStack_65,CONCAT21(uStack_67,local_68)));
                uStack_50 = uStack_60;
                lVar20 = 0;
                do {
                  bVar4 = bVar4 ^ (&local_68)[lVar20];
                  lVar20 = lVar20 + 1;
                } while (lVar20 != 0x10);
                lVar15 = 1;
                lVar20 = 0;
                do {
                  bVar1 = *(byte *)((long)&local_58 + (ulong)((uint)lVar15 & 0xf));
                  bVar19 = (byte)(lVar20 + 1) & 7;
                  (&local_68)[lVar20] =
                       (bVar1 << bVar19 | bVar1 >> 8 - bVar19) ^ *(byte *)((long)&local_58 + lVar20)
                       ^ bVar4;
                  lVar15 = lVar15 + 7;
                  lVar20 = lVar20 + 1;
                } while (lVar15 != 0x71);
                iVar5 = iVar5 + 1;
              } while (iVar5 != 6);
              lVar6 = lVar6 + 1;
            } while (lVar6 != 0x10);
            uVar21 = (ulong)((int)uVar21 + 1);
            goto LAB_1000012c0;
          }
          lVar6 = 0;
          do {
            (&local_48)[lVar6] = (byte)lVar6 ^ 0x45;
            lVar6 = lVar6 + 1;
          } while (lVar6 != 0x10);
          lVar6 = 0;
          do {
            local_48 = local_48 ^ (&local_78)[lVar6];
            iVar5 = 0;
            do {
              lVar20 = 0;
              do {
                (&local_48)[lVar20] = (&DAT_100002250)[(&local_48)[lVar20]];
                lVar20 = lVar20 + 1;
              } while (lVar20 != 0x10);
              bVar4 = (byte)iVar5 ^ 0x9e;
              local_58 = CONCAT71(uStack_47,local_48);
              uStack_50 = uStack_40;
              lVar20 = 0;
              do {
                bVar4 = bVar4 ^ (&local_48)[lVar20];
                lVar20 = lVar20 + 1;
              } while (lVar20 != 0x10);
              lVar15 = 1;
              lVar20 = 0;
              do {
                bVar1 = *(byte *)((long)&local_58 + (ulong)((uint)lVar15 & 0xf));
                bVar19 = (byte)(lVar20 + 1) & 7;
                (&local_48)[lVar20] =
                     (bVar1 << bVar19 | bVar1 >> 8 - bVar19) ^ *(byte *)((long)&local_58 + lVar20) ^
                     bVar4;
                lVar15 = lVar15 + 7;
                lVar20 = lVar20 + 1;
              } while (lVar15 != 0x71);
              iVar5 = iVar5 + 1;
            } while (iVar5 != 6);
            lVar6 = lVar6 + 1;
          } while (lVar6 != 0x10);
          lVar6 = 0;
          do {
            local_48 = local_48 ^ *(byte *)((long)&local_388 + lVar6);
            iVar5 = 0;
            do {
              lVar20 = 0;
              do {
                (&local_48)[lVar20] = (&DAT_100002250)[(&local_48)[lVar20]];
                lVar20 = lVar20 + 1;
              } while (lVar20 != 0x10);
              bVar4 = (byte)iVar5 ^ 0x9e;
              local_58 = CONCAT71(uStack_47,local_48);
              uStack_50 = uStack_40;
              lVar20 = 0;
              do {
                bVar4 = bVar4 ^ (&local_48)[lVar20];
                lVar20 = lVar20 + 1;
              } while (lVar20 != 0x10);
              lVar15 = 1;
              lVar20 = 0;
              do {
                bVar1 = *(byte *)((long)&local_58 + (ulong)((uint)lVar15 & 0xf));
                bVar19 = (byte)(lVar20 + 1) & 7;
                (&local_48)[lVar20] =
                     (bVar1 << bVar19 | bVar1 >> 8 - bVar19) ^ *(byte *)((long)&local_58 + lVar20) ^
                     bVar4;
                lVar15 = lVar15 + 7;
                lVar20 = lVar20 + 1;
              } while (lVar15 != 0x71);
              iVar5 = iVar5 + 1;
            } while (iVar5 != 6);
            lVar6 = lVar6 + 1;
          } while (lVar6 != 5);
          _write(1,&local_48,0x10);
          iVar5 = 3;
        }
      }
    } while (iVar5 == 3);
  }
  return 0;
LAB_10000098b:
  iVar17 = iVar17 + 1;
  if (iVar17 == *(int *)(lVar6 + 0x10)) goto LAB_100000993;
  goto LAB_100000950;
}


===== end ===== */

/* FUNCTION LIST
0x100000860  entry  size=2
0x1000008ac  thunk_FUN_1000008c0  size=5
0x1000008c0  FUN_1000008c0  size=5764
0x100001f60  FUN_100001f60  size=439
0x100002120  FUN_100002120  size=13
0x100002130  FUN_100002130  size=39
0x100002160  FUN_100002160  size=39
0x100002190  FUN_100002190  size=39
0x1000021c0  FUN_1000021c0  size=30
0x1000021e0  FUN_1000021e0  size=45
0x100002210  FUN_100002210  size=6
0x100002216  __dyld_get_image_header  size=6
0x10000221c  _arc4random_buf  size=6
0x100002222  _getpid  size=6
0x100002228  _getsectiondata  size=6
0x10000222e  _memset_pattern16  size=6
0x100002234  _read  size=6
0x10000223a  _sysctl  size=6
0x100002240  _write  size=6
END FUNCTION LIST */
