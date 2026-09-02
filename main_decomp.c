/* ===== func 0x100000a20 name=FUN_100000a20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100000a20(int param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  int iVar16;
  long lVar17;
  ssize_t sVar18;
  size_t sVar19;
  ulong uVar20;
  byte *pbVar21;
  ulong extraout_x9;
  int *piVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  long lVar26;
  uint uVar27;
  char *pcVar28;
  int iVar29;
  ulong uVar30;
  undefined *puVar31;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4d8;
  uint local_4c4;
  byte local_4c0 [8];
  undefined8 uStack_4b8;
  byte local_4b0;
  undefined7 uStack_4af;
  undefined8 uStack_4a8;
  uint local_4a0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  posix_spawn_file_actions_t local_b0 [2];
  int local_a0;
  int iStack_9c;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 uStack_88;
  byte bStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  pid_t pStack_84;
  undefined5 uStack_80;
  undefined3 local_7b;
  undefined5 uStack_78;
  
  _ptrace(0x1f,0,(caddr_t)0x0,0);
  lVar17 = __dyld_get_image_header(0);
  if (*(int *)(lVar17 + 0x10) != 0) {
    iVar16 = 0;
    piVar22 = (int *)(lVar17 + 0x20);
LAB_100000a78:
    iVar29 = *piVar22;
    if (iVar29 == 0x1b) {
      lVar17 = 0;
      do {
        local_4c0[lVar17] = *(byte *)((long)piVar22 + lVar17 + 8);
        lVar17 = lVar17 + 1;
      } while (lVar17 != 0x10);
    }
    else {
      piVar22 = (int *)((long)piVar22 + (ulong)(uint)piVar22[1]);
      if (iVar29 != 0x1b) goto LAB_100000abc;
    }
    goto LAB_100000acc;
  }
LAB_100000ac8:
  local_4c0[0] = 0;
  local_4c0[1] = 0;
  local_4c0[2] = 0;
  local_4c0[3] = 0;
  local_4c0[4] = 0;
  local_4c0[5] = 0;
  local_4c0[6] = 0;
  local_4c0[7] = 0;
  uStack_4b8 = 0;
LAB_100000acc:
  uVar20 = 0;
  local_90._0_1_ = local_4c0[0];
  local_90._1_1_ = local_4c0[1];
  local_90._2_1_ = local_4c0[2];
  local_90._3_1_ = local_4c0[3];
  local_90._4_4_ = 0xe4a29285;
  uStack_88 = DAT_100060000;
  bStack_87 = DAT_100060001;
  uStack_86 = DAT_100060002;
  uStack_85 = DAT_100060003;
  pStack_84 = 0x3c298bf8;
  do {
    (&DAT_10000fb9b)[uVar20] =
         (char)uVar20 * '7' ^ (&DAT_1000080bf)[uVar20] ^ *(byte *)((long)&local_90 + (uVar20 & 0xf))
    ;
    uVar20 = uVar20 + 1;
  } while (uVar20 != 0x79e0);
  local_4b0 = 0;
  uStack_4b8._0_1_ = s__tmp__udx_XXXXXX_100002d58[8];
  uStack_4b8._1_1_ = s__tmp__udx_XXXXXX_100002d58[9];
  uStack_4b8._2_1_ = s__tmp__udx_XXXXXX_100002d58[10];
  uStack_4b8._3_1_ = s__tmp__udx_XXXXXX_100002d58[0xb];
  uStack_4b8._4_1_ = s__tmp__udx_XXXXXX_100002d58[0xc];
  uStack_4b8._5_1_ = s__tmp__udx_XXXXXX_100002d58[0xd];
  uStack_4b8._6_1_ = s__tmp__udx_XXXXXX_100002d58[0xe];
  uStack_4b8._7_1_ = s__tmp__udx_XXXXXX_100002d58[0xf];
  local_4c0[0] = s__tmp__udx_XXXXXX_100002d58[0];
  local_4c0[1] = s__tmp__udx_XXXXXX_100002d58[1];
  local_4c0[2] = s__tmp__udx_XXXXXX_100002d58[2];
  local_4c0[3] = s__tmp__udx_XXXXXX_100002d58[3];
  local_4c0[4] = s__tmp__udx_XXXXXX_100002d58[4];
  local_4c0[5] = s__tmp__udx_XXXXXX_100002d58[5];
  local_4c0[6] = s__tmp__udx_XXXXXX_100002d58[6];
  local_4c0[7] = s__tmp__udx_XXXXXX_100002d58[7];
  iVar16 = _mkstemp((char *)local_4c0);
  if (-1 < iVar16) {
    sVar18 = _write(iVar16,&DAT_10000fb9b,0x79e0);
    if (sVar18 == 0x79e0) {
      _fchmod(iVar16,0x1c0);
      _close(iVar16);
      iVar16 = _pipe((int)&stack0xfffffffffffffff0 + -0x90);
      if (iVar16 == 0) {
        _posix_spawn_file_actions_init(local_b0);
        _posix_spawn_file_actions_adddup2(local_b0,iStack_9c,1);
        _posix_spawn_file_actions_addclose(local_b0,local_a0);
        local_510 = local_4c0;
        uStack_508 = 0;
        iVar16 = _posix_spawn((pid_t *)&local_c0,(char *)local_4c0,local_b0,(posix_spawnattr_t *)0x0
                              ,(char **)&local_510,*(char ***)PTR__environ_100004020);
        _posix_spawn_file_actions_destroy(local_b0);
        _close(iStack_9c);
        if (iVar16 == 0) {
          iVar29 = 0;
          do {
            sVar18 = _read(local_a0,&DAT_10000faac + iVar29,(ulong)(0x10 - iVar29));
            iVar29 = iVar29 + ((uint)sVar18 & ((uint)(sVar18 >> 0x3f) ^ 0xffffffff));
          } while (0 < sVar18 && iVar29 < 0x10);
          iVar29 = -(uint)(iVar29 != 0x10);
        }
        else {
          iVar29 = -1;
        }
        _close(local_a0);
        if (iVar16 == 0) {
          _waitpid((pid_t)local_c0,(int *)&local_4d8,0);
        }
        else {
          iVar29 = -1;
        }
        _unlink((char *)local_4c0);
        if (iVar29 != 0) goto LAB_100000db0;
        uVar20 = 0;
        uVar30 = cntvct_el0;
        do {
          (&DAT_10000fabc)[uVar20] = (&DAT_10000faac)[uVar20 & 0xf] ^ (&DAT_100060004)[uVar20];
          uVar20 = uVar20 + 1;
        } while (uVar20 != 0x80);
        lVar17 = cntvct_el0;
        local_510 = (byte *)0x288;
        local_90._0_1_ = 1;
        local_90._1_1_ = 0;
        local_90._2_1_ = 0;
        local_90._3_1_ = 0;
        local_90._4_4_ = 0xe;
        uStack_88 = 1;
        bStack_87 = 0;
        uStack_86 = 0;
        uStack_85 = 0;
        pStack_84 = _getpid();
        local_4a0 = 0;
        iVar16 = _sysctl((int *)&local_90,4,local_4c0,&local_510,(void *)0x0,0);
        uVar27 = 0;
        if (iVar16 == 0) {
          uVar27 = local_4a0 >> 0xb & 1;
        }
        if ((uVar27 != 0) || (5000000 < lVar17 - uVar30)) {
          DAT_10000fabc = DAT_10000fabc ^ 0xa5;
          DAT_10000fae1 = DAT_10000fae1 ^ 0x3c;
          DAT_10000fab1 = DAT_10000fab1 ^ 0x91;
        }
        uVar20 = 0;
        do {
          (&DAT_10000fb3c)[uVar20] = (&DAT_10000faac)[uVar20 & 0xf] ^ (&DAT_100008080)[uVar20];
          uVar20 = uVar20 + 1;
        } while (uVar20 != 0x3f);
        iVar16 = _pipe((int)&local_510);
        if ((iVar16 == 0) && (iVar16 = _pipe((int)&stack0xfffffffffffffff0 + -0x90), iVar16 == 0)) {
          local_4f0 = CONCAT44(local_4f0._4_4_,0x400);
          iVar16 = __NSGetExecutablePath(local_4c0,&local_4f0);
          if (iVar16 == 0) {
            _posix_spawn_file_actions_init(local_b0);
            _posix_spawn_file_actions_adddup2(local_b0,(int)local_510,0);
            _posix_spawn_file_actions_adddup2(local_b0,iStack_9c,1);
            _posix_spawn_file_actions_addclose(local_b0,local_510._4_4_);
            _posix_spawn_file_actions_addclose(local_b0,local_a0);
            _posix_spawnattr_init((posix_spawnattr_t *)&local_c0);
            local_4c4 = 0x1000007;
            local_4d8 = 0;
            _posix_spawnattr_setbinpref_np
                      ((posix_spawnattr_t *)&local_c0,1,(cpu_type_t *)&local_4c4,&local_4d8);
            local_90._0_1_ = (byte)local_4c0;
            local_90._1_1_ = (undefined1)((ulong)local_4c0 >> 8);
            local_90._2_1_ = (undefined1)((ulong)local_4c0 >> 0x10);
            local_90._3_1_ = (undefined1)((ulong)local_4c0 >> 0x18);
            local_90._4_4_ = (undefined4)((ulong)local_4c0 >> 0x20);
            uStack_88 = 0;
            bStack_87 = 0;
            uStack_86 = 0;
            uStack_85 = 0;
            pStack_84 = 0;
            iVar16 = _posix_spawn(&DAT_10000faa4,(char *)local_4c0,local_b0,
                                  (posix_spawnattr_t *)&local_c0,(char **)&local_90,
                                  *(char ***)PTR__environ_100004020);
            _posix_spawn_file_actions_destroy(local_b0);
            _posix_spawnattr_destroy((posix_spawnattr_t *)&local_c0);
            _close((int)local_510);
            _close(iStack_9c);
            if (iVar16 == 0) {
              iVar16 = 0;
              DAT_10000faa8 = local_a0;
              DAT_10000faa0 = local_510._4_4_;
            }
            else {
              _close(local_510._4_4_);
              _close(local_a0);
              iVar16 = -1;
            }
            goto LAB_100000d80;
          }
        }
        iVar16 = -1;
LAB_100000d80:
        if (iVar16 == 0) {
          _arc4random_buf(&local_a0,0x10);
          sVar18 = _write(DAT_10000faa0,&local_a0,0x10);
          iVar16 = DAT_10000faa8;
          uVar13 = uRam000000010000fb83;
          if (sVar18 == 0x10) {
            uVar27 = 0;
            do {
              uVar13 = uRam000000010000fb83;
              uVar14 = uStack_4a8;
              uVar25 = uVar27;
              if (0x1f < (int)uVar27) break;
              sVar18 = _read(iVar16,local_4c0 + (int)uVar27,(long)(int)(0x20 - uVar27));
              uVar25 = (uint)uVar30;
              if (sVar18 < 1) {
                uVar25 = uVar27;
              }
              uVar30 = (ulong)uVar25;
              uVar27 = uVar27 + ((uint)sVar18 & ((uint)(sVar18 >> 0x3f) ^ 0xffffffff));
              uVar13 = uRam000000010000fb83;
              uVar14 = uStack_4a8;
            } while (0 < sVar18);
            uRam000000010000fb83 = uVar14;
            if (uVar25 == 0x20) {
              _DAT_10000fb7b = CONCAT71(uStack_4af,local_4b0);
              FUN_1000029b4(local_b0);
              lVar17 = 0;
              do {
                (&DAT_10004fb9b)[lVar17] = (byte)lVar17 ^ 0x53;
                lVar17 = lVar17 + 1;
              } while (lVar17 != 0x10);
              lVar17 = 0;
              do {
                uVar27 = 0;
                DAT_10004fb9b = DAT_10004fb9b ^ *(byte *)((long)local_b0 + lVar17);
                do {
                  lVar26 = 0;
                  do {
                    (&DAT_10004fb9b)[lVar26] = (&DAT_100002d89)[(&DAT_10004fb9b)[lVar26]];
                    lVar26 = lVar26 + 1;
                  } while (lVar26 != 0x10);
                  lVar26 = 0;
                  uVar25 = uVar27 ^ 0xffffff9e;
                  uStack_88 = (undefined1)uRam000000010004fba3;
                  bStack_87 = (byte)((ulong)uRam000000010004fba3 >> 8);
                  uStack_86 = (undefined1)((ulong)uRam000000010004fba3 >> 0x10);
                  uStack_85 = (undefined1)((ulong)uRam000000010004fba3 >> 0x18);
                  pStack_84 = (pid_t)((ulong)uRam000000010004fba3 >> 0x20);
                  local_90._0_1_ = DAT_10004fb9b;
                  local_90._1_1_ = (undefined1)_DAT_10004fb9c;
                  local_90._2_1_ = (undefined1)((uint7)_DAT_10004fb9c >> 8);
                  local_90._3_1_ = (undefined1)((uint7)_DAT_10004fb9c >> 0x10);
                  local_90._4_4_ = (undefined4)((uint7)_DAT_10004fb9c >> 0x18);
                  do {
                    uVar25 = (&DAT_10004fb9b)[lVar26] ^ uVar25;
                    lVar26 = lVar26 + 1;
                  } while (lVar26 != 0x10);
                  lVar26 = 0;
                  uVar20 = 1;
                  do {
                    bVar3 = *(byte *)((ulong)&local_90 | uVar20 & 0xf);
                    (&DAT_10004fb9b)[lVar26] =
                         *(byte *)((long)&local_90 + lVar26) ^ (byte)uVar25 ^
                         (bVar3 << (ulong)((uint)lVar26 + 1 & 7) |
                         bVar3 >> (ulong)(((uint)lVar26 ^ 0xffffffff) & 7));
                    lVar26 = lVar26 + 1;
                    uVar20 = uVar20 + 7;
                  } while (uVar20 != 0x71);
                  uVar27 = uVar27 + 1;
                } while (uVar27 != 6);
                lVar17 = lVar17 + 1;
              } while (lVar17 != 0x10);
              lVar17 = 0;
              do {
                uVar27 = 0;
                DAT_10004fb9b = DAT_10004fb9b ^ *(byte *)((long)&local_a0 + lVar17);
                do {
                  lVar26 = 0;
                  do {
                    (&DAT_10004fb9b)[lVar26] = (&DAT_100002d89)[(&DAT_10004fb9b)[lVar26]];
                    lVar26 = lVar26 + 1;
                  } while (lVar26 != 0x10);
                  lVar26 = 0;
                  uVar25 = uVar27 ^ 0xffffff9e;
                  uStack_88 = (undefined1)uRam000000010004fba3;
                  bStack_87 = (byte)((ulong)uRam000000010004fba3 >> 8);
                  uStack_86 = (undefined1)((ulong)uRam000000010004fba3 >> 0x10);
                  uStack_85 = (undefined1)((ulong)uRam000000010004fba3 >> 0x18);
                  pStack_84 = (pid_t)((ulong)uRam000000010004fba3 >> 0x20);
                  local_90._0_1_ = DAT_10004fb9b;
                  local_90._1_1_ = (undefined1)_DAT_10004fb9c;
                  local_90._2_1_ = (undefined1)((uint7)_DAT_10004fb9c >> 8);
                  local_90._3_1_ = (undefined1)((uint7)_DAT_10004fb9c >> 0x10);
                  local_90._4_4_ = (undefined4)((uint7)_DAT_10004fb9c >> 0x18);
                  do {
                    uVar25 = (&DAT_10004fb9b)[lVar26] ^ uVar25;
                    lVar26 = lVar26 + 1;
                  } while (lVar26 != 0x10);
                  lVar26 = 0;
                  uVar20 = 1;
                  do {
                    bVar3 = *(byte *)((ulong)&local_90 | uVar20 & 0xf);
                    (&DAT_10004fb9b)[lVar26] =
                         *(byte *)((long)&local_90 + lVar26) ^ (byte)uVar25 ^
                         (bVar3 << (ulong)((uint)lVar26 + 1 & 7) |
                         bVar3 >> (ulong)(((uint)lVar26 ^ 0xffffffff) & 7));
                    lVar26 = lVar26 + 1;
                    uVar20 = uVar20 + 7;
                  } while (uVar20 != 0x71);
                  uVar27 = uVar27 + 1;
                } while (uVar27 != 6);
                lVar17 = lVar17 + 1;
              } while (lVar17 != 0x10);
              lVar17 = 0;
              do {
                uVar27 = 0;
                DAT_10004fb9b = DAT_10004fb9b ^ local_4c0[lVar17];
                do {
                  lVar26 = 0;
                  do {
                    (&DAT_10004fb9b)[lVar26] = (&DAT_100002d89)[(&DAT_10004fb9b)[lVar26]];
                    lVar26 = lVar26 + 1;
                  } while (lVar26 != 0x10);
                  lVar26 = 0;
                  uVar25 = uVar27 ^ 0xffffff9e;
                  uStack_88 = (undefined1)uRam000000010004fba3;
                  bStack_87 = (byte)((ulong)uRam000000010004fba3 >> 8);
                  uStack_86 = (undefined1)((ulong)uRam000000010004fba3 >> 0x10);
                  uStack_85 = (undefined1)((ulong)uRam000000010004fba3 >> 0x18);
                  pStack_84 = (pid_t)((ulong)uRam000000010004fba3 >> 0x20);
                  local_90._0_1_ = DAT_10004fb9b;
                  local_90._1_1_ = (undefined1)_DAT_10004fb9c;
                  local_90._2_1_ = (undefined1)((uint7)_DAT_10004fb9c >> 8);
                  local_90._3_1_ = (undefined1)((uint7)_DAT_10004fb9c >> 0x10);
                  local_90._4_4_ = (undefined4)((uint7)_DAT_10004fb9c >> 0x18);
                  do {
                    uVar25 = (&DAT_10004fb9b)[lVar26] ^ uVar25;
                    lVar26 = lVar26 + 1;
                  } while (lVar26 != 0x10);
                  lVar26 = 0;
                  uVar20 = 1;
                  do {
                    bVar3 = *(byte *)((ulong)&local_90 | uVar20 & 0xf);
                    (&DAT_10004fb9b)[lVar26] =
                         *(byte *)((long)&local_90 + lVar26) ^ (byte)uVar25 ^
                         (bVar3 << (ulong)((uint)lVar26 + 1 & 7) |
                         bVar3 >> (ulong)(((uint)lVar26 ^ 0xffffffff) & 7));
                    lVar26 = lVar26 + 1;
                    uVar20 = uVar20 + 7;
                  } while (uVar20 != 0x71);
                  uVar27 = uVar27 + 1;
                } while (uVar27 != 6);
                lVar17 = lVar17 + 1;
              } while (lVar17 != 0x10);
              lVar17 = 0;
              do {
                (&DAT_10004fbab)[lVar17] = (byte)lVar17 ^ 0x54;
                lVar17 = lVar17 + 1;
              } while (lVar17 != 0x10);
              lVar17 = 0;
              do {
                uVar27 = 0;
                DAT_10004fbab = DAT_10004fbab ^ *(byte *)((long)&local_a0 + lVar17);
                do {
                  lVar26 = 0;
                  do {
                    (&DAT_10004fbab)[lVar26] = (&DAT_100002d89)[(&DAT_10004fbab)[lVar26]];
                    lVar26 = lVar26 + 1;
                  } while (lVar26 != 0x10);
                  lVar26 = 0;
                  uVar25 = uVar27 ^ 0xffffff9e;
                  uStack_88 = (undefined1)uRam000000010004fbb3;
                  bStack_87 = (byte)((ulong)uRam000000010004fbb3 >> 8);
                  uStack_86 = (undefined1)((ulong)uRam000000010004fbb3 >> 0x10);
                  uStack_85 = (undefined1)((ulong)uRam000000010004fbb3 >> 0x18);
                  pStack_84 = (pid_t)((ulong)uRam000000010004fbb3 >> 0x20);
                  local_90._0_1_ = DAT_10004fbab;
                  local_90._1_1_ = (undefined1)_DAT_10004fbac;
                  local_90._2_1_ = (undefined1)((uint7)_DAT_10004fbac >> 8);
                  local_90._3_1_ = (undefined1)((uint7)_DAT_10004fbac >> 0x10);
                  local_90._4_4_ = (undefined4)((uint7)_DAT_10004fbac >> 0x18);
                  do {
                    uVar25 = (&DAT_10004fbab)[lVar26] ^ uVar25;
                    lVar26 = lVar26 + 1;
                  } while (lVar26 != 0x10);
                  lVar26 = 0;
                  uVar20 = 1;
                  do {
                    bVar3 = *(byte *)((ulong)&local_90 | uVar20 & 0xf);
                    (&DAT_10004fbab)[lVar26] =
                         *(byte *)((long)&local_90 + lVar26) ^ (byte)uVar25 ^
                         (bVar3 << (ulong)((uint)lVar26 + 1 & 7) |
                         bVar3 >> (ulong)(((uint)lVar26 ^ 0xffffffff) & 7));
                    lVar26 = lVar26 + 1;
                    uVar20 = uVar20 + 7;
                  } while (uVar20 != 0x71);
                  uVar27 = uVar27 + 1;
                } while (uVar27 != 6);
                lVar17 = lVar17 + 1;
              } while (lVar17 != 0x10);
              lVar17 = 0;
              do {
                uVar27 = 0;
                DAT_10004fbab = DAT_10004fbab ^ local_4c0[lVar17];
                do {
                  lVar26 = 0;
                  do {
                    (&DAT_10004fbab)[lVar26] = (&DAT_100002d89)[(&DAT_10004fbab)[lVar26]];
                    lVar26 = lVar26 + 1;
                  } while (lVar26 != 0x10);
                  lVar26 = 0;
                  uVar25 = uVar27 ^ 0xffffff9e;
                  uStack_88 = (undefined1)uRam000000010004fbb3;
                  bStack_87 = (byte)((ulong)uRam000000010004fbb3 >> 8);
                  uStack_86 = (undefined1)((ulong)uRam000000010004fbb3 >> 0x10);
                  uStack_85 = (undefined1)((ulong)uRam000000010004fbb3 >> 0x18);
                  pStack_84 = (pid_t)((ulong)uRam000000010004fbb3 >> 0x20);
                  local_90._0_1_ = DAT_10004fbab;
                  local_90._1_1_ = (undefined1)_DAT_10004fbac;
                  local_90._2_1_ = (undefined1)((uint7)_DAT_10004fbac >> 8);
                  local_90._3_1_ = (undefined1)((uint7)_DAT_10004fbac >> 0x10);
                  local_90._4_4_ = (undefined4)((uint7)_DAT_10004fbac >> 0x18);
                  do {
                    uVar25 = (&DAT_10004fbab)[lVar26] ^ uVar25;
                    lVar26 = lVar26 + 1;
                  } while (lVar26 != 0x10);
                  lVar26 = 0;
                  uVar20 = 1;
                  do {
                    bVar3 = *(byte *)((ulong)&local_90 | uVar20 & 0xf);
                    (&DAT_10004fbab)[lVar26] =
                         *(byte *)((long)&local_90 + lVar26) ^ (byte)uVar25 ^
                         (bVar3 << (ulong)((uint)lVar26 + 1 & 7) |
                         bVar3 >> (ulong)(((uint)lVar26 ^ 0xffffffff) & 7));
                    lVar26 = lVar26 + 1;
                    uVar20 = uVar20 + 7;
                  } while (uVar20 != 0x71);
                  uVar27 = uVar27 + 1;
                } while (uVar27 != 6);
                lVar17 = lVar17 + 1;
              } while (lVar17 != 0x10);
              FUN_1000029b4(&local_510);
              lVar17 = 0;
              do {
                (&DAT_10000fb8b)[lVar17] = (byte)lVar17 ^ 0x68;
                lVar17 = lVar17 + 1;
              } while (lVar17 != 0x10);
              lVar17 = 0;
              do {
                uVar27 = 0;
                DAT_10000fb8b = DAT_10000fb8b ^ *(byte *)((long)&local_510 + lVar17);
                do {
                  lVar26 = 0;
                  do {
                    (&DAT_10000fb8b)[lVar26] = (&DAT_100002d89)[(&DAT_10000fb8b)[lVar26]];
                    lVar26 = lVar26 + 1;
                  } while (lVar26 != 0x10);
                  lVar26 = 0;
                  uVar25 = uVar27 ^ 0xffffff9e;
                  uStack_88 = uRam000000010000fb93;
                  bStack_87 = DAT_10000fb94;
                  uStack_86 = (undefined1)uRam000000010000fb95;
                  uStack_85 = (undefined1)((uint6)uRam000000010000fb95 >> 8);
                  pStack_84 = (pid_t)((uint6)uRam000000010000fb95 >> 0x10);
                  local_90._0_1_ = DAT_10000fb8b;
                  local_90._1_1_ = (undefined1)_DAT_10000fb8c;
                  local_90._2_1_ = (undefined1)((uint7)_DAT_10000fb8c >> 8);
                  local_90._3_1_ = (undefined1)((uint7)_DAT_10000fb8c >> 0x10);
                  local_90._4_4_ = (undefined4)((uint7)_DAT_10000fb8c >> 0x18);
                  do {
                    uVar25 = (&DAT_10000fb8b)[lVar26] ^ uVar25;
                    lVar26 = lVar26 + 1;
                  } while (lVar26 != 0x10);
                  lVar26 = 0;
                  uVar20 = 1;
                  do {
                    bVar3 = *(byte *)((ulong)&local_90 | uVar20 & 0xf);
                    (&DAT_10000fb8b)[lVar26] =
                         *(byte *)((long)&local_90 + lVar26) ^ (byte)uVar25 ^
                         (bVar3 << (ulong)((uint)lVar26 + 1 & 7) |
                         bVar3 >> (ulong)(((uint)lVar26 ^ 0xffffffff) & 7));
                    lVar26 = lVar26 + 1;
                    uVar20 = uVar20 + 7;
                  } while (uVar20 != 0x71);
                  uVar27 = uVar27 + 1;
                } while (uVar27 != 6);
                lVar17 = lVar17 + 1;
              } while (lVar17 != 0x10);
              lVar17 = 0;
              do {
                uVar27 = 0;
                DAT_10000fb8b = DAT_10000fb8b ^ (&local_4b0)[lVar17];
                do {
                  lVar26 = 0;
                  do {
                    (&DAT_10000fb8b)[lVar26] = (&DAT_100002d89)[(&DAT_10000fb8b)[lVar26]];
                    lVar26 = lVar26 + 1;
                  } while (lVar26 != 0x10);
                  lVar26 = 0;
                  uVar25 = uVar27 ^ 0xffffff9e;
                  uStack_88 = uRam000000010000fb93;
                  bStack_87 = DAT_10000fb94;
                  uStack_86 = (undefined1)uRam000000010000fb95;
                  uStack_85 = (undefined1)((uint6)uRam000000010000fb95 >> 8);
                  pStack_84 = (pid_t)((uint6)uRam000000010000fb95 >> 0x10);
                  local_90._0_1_ = DAT_10000fb8b;
                  local_90._1_1_ = (undefined1)_DAT_10000fb8c;
                  local_90._2_1_ = (undefined1)((uint7)_DAT_10000fb8c >> 8);
                  local_90._3_1_ = (undefined1)((uint7)_DAT_10000fb8c >> 0x10);
                  local_90._4_4_ = (undefined4)((uint7)_DAT_10000fb8c >> 0x18);
                  do {
                    uVar25 = (&DAT_10000fb8b)[lVar26] ^ uVar25;
                    lVar26 = lVar26 + 1;
                  } while (lVar26 != 0x10);
                  lVar26 = 0;
                  uVar20 = 1;
                  do {
                    bVar3 = *(byte *)((ulong)&local_90 | uVar20 & 0xf);
                    (&DAT_10000fb8b)[lVar26] =
                         *(byte *)((long)&local_90 + lVar26) ^ (byte)uVar25 ^
                         (bVar3 << (ulong)((uint)lVar26 + 1 & 7) |
                         bVar3 >> (ulong)(((uint)lVar26 ^ 0xffffffff) & 7));
                    lVar26 = lVar26 + 1;
                    uVar20 = uVar20 + 7;
                  } while (uVar20 != 0x71);
                  uVar27 = uVar27 + 1;
                } while (uVar27 != 6);
                lVar17 = lVar17 + 1;
              } while (lVar17 != 0x10);
              DAT_10004fbbc = 0;
              local_510 = (byte *)0x288;
              local_90._0_1_ = 1;
              local_90._1_1_ = 0;
              local_90._2_1_ = 0;
              local_90._3_1_ = 0;
              local_90._4_4_ = 0xe;
              uStack_88 = 1;
              bStack_87 = 0;
              uStack_86 = 0;
              uStack_85 = 0;
              pStack_84 = _getpid();
              local_4a0 = 0;
              iVar16 = _sysctl((int *)&local_90,4,local_4c0,&local_510,(void *)0x0,0);
              if ((iVar16 == 0) && ((local_4a0 >> 0xb & 1) != 0)) {
                _DAT_10000fb7b = _DAT_10000fb7b ^ 0x6d;
                DAT_10000fb94 = DAT_10000fb94 ^ 0xa7;
              }
              if (param_1 < 2) {
                pcVar28 = "usage: challenge NepCTF{...}\n";
                sVar19 = 0x1d;
              }
              else {
                pcVar28 = *(char **)(param_2 + 8);
                sVar19 = _strlen(pcVar28);
                if (((sVar19 == 0x28) && (iVar16 = _strncmp(pcVar28,"NepCTF{",7), iVar16 == 0)) &&
                   (pcVar28[0x27] == '}')) {
                  FUN_10000240c(&local_4d8);
                  uVar20 = (ulong)(((DAT_10000fb7b ^ local_4d8._3_1_) & 3) << 5) ^ 0x20;
                  lVar17 = 0;
                  do {
                    lVar26 = 0;
                    uStack_4e8 = *(undefined8 *)(pcVar28 + lVar17 * 0x10 + 0xf);
                    local_4f0 = *(undefined8 *)(pcVar28 + lVar17 * 0x10 + 7);
                    do {
                      *(byte *)((long)&local_4f0 + lVar26) =
                           (&DAT_100008000)[lVar26 + uVar20] ^ (byte)lVar17 ^
                           *(byte *)((long)&local_4f0 + lVar26);
                      lVar26 = lVar26 + 1;
                    } while (lVar26 != 0x10);
                    lVar26 = 0;
                    uStack_88 = (undefined1)uStack_4e8;
                    bStack_87 = (byte)((ulong)uStack_4e8 >> 8);
                    uStack_86 = (undefined1)((ulong)uStack_4e8 >> 0x10);
                    uStack_85 = (undefined1)((ulong)uStack_4e8 >> 0x18);
                    pStack_84 = (pid_t)((ulong)uStack_4e8 >> 0x20);
                    local_90._0_1_ = (byte)local_4f0;
                    local_90._1_1_ = (undefined1)((ulong)local_4f0 >> 8);
                    local_90._2_1_ = (undefined1)((ulong)local_4f0 >> 0x10);
                    local_90._3_1_ = (undefined1)((ulong)local_4f0 >> 0x18);
                    local_90._4_4_ = (undefined4)((ulong)local_4f0 >> 0x20);
                    uVar30 = 1;
                    do {
                      *(byte *)((long)&local_4f0 + lVar26) =
                           (*(byte *)((long)&local_90 + lVar26) >> 7 |
                           *(byte *)((long)&local_90 + lVar26) << 1) ^
                           *(byte *)((ulong)&local_90 | uVar30 & 0xf) ^ (&DAT_10000fabc)[lVar26] ^
                           *(byte *)((long)&local_4f0 + lVar26);
                      lVar26 = lVar26 + 1;
                      uVar30 = uVar30 + 5;
                    } while (uVar30 != 0x51);
                    pbVar1 = local_4c0 + lVar17 * 0xf0;
                    (&uStack_4b8)[lVar17 * 0x1e] = uStack_4e8;
                    *(undefined8 *)pbVar1 = local_4f0;
                    uVar30 = 1;
                    puVar31 = &DAT_10000fac4;
                    bVar15 = true;
                    do {
                      uVar27 = (uint)uVar30;
                      if ((uVar30 & 1) == 0) {
                        lVar26 = 0;
                        do {
                          *(undefined *)((long)&local_4f0 + lVar26) =
                               (&DAT_100002d89)[*(byte *)((long)&local_4f0 + lVar26)];
                          uVar14 = uStack_4e8;
                          uVar13 = local_4f0;
                          lVar26 = lVar26 + 1;
                        } while (lVar26 != 0x10);
                        local_90._1_1_ = local_4f0._5_1_;
                        local_90._2_1_ = uStack_4e8._2_1_;
                        local_90._3_1_ = uStack_4e8._7_1_;
                        uVar10 = local_4f0._3_1_;
                        bStack_87 = uStack_4e8._5_1_;
                        uStack_86 = local_4f0._2_1_;
                        uStack_85 = local_4f0._7_1_;
                        uVar9 = local_4f0._1_1_;
                        uVar11 = local_4f0._6_1_;
                        uVar12 = uStack_4e8._3_1_;
                        local_90._0_1_ = (undefined1)local_4f0;
                        local_4f0._0_2_ = CONCAT11(local_4f0._5_1_,(undefined1)local_4f0);
                        local_4f0._4_4_ = SUB84(uVar13,4);
                        local_4f0._0_4_ =
                             CONCAT13(uStack_4e8._7_1_,
                                      CONCAT12(uStack_4e8._2_1_,(undefined2)local_4f0));
                        local_4f0 = CONCAT17(uVar10,CONCAT16(uStack_4e8._6_1_,
                                                             CONCAT15(uStack_4e8._1_1_,
                                                                      (undefined5)local_4f0)));
                        uStack_88 = (undefined1)uStack_4e8;
                        uStack_4e8._0_2_ = CONCAT11(uStack_4e8._5_1_,(undefined1)uStack_4e8);
                        uStack_4e8._4_4_ = SUB84(uVar14,4);
                        uStack_4e8._0_4_ =
                             CONCAT13(uStack_85,CONCAT12(uStack_86,(undefined2)uStack_4e8));
                        uStack_4e8 = CONCAT17(uVar12,CONCAT16(uVar11,CONCAT15(uVar9,(undefined5)
                                                                                    uStack_4e8)));
                        if (uVar30 != 0xe) {
                          lVar26 = 4;
                          pbVar21 = (byte *)((long)&local_4f0 + 3);
                          do {
                            bVar5 = pbVar21[-3];
                            bVar6 = pbVar21[-2];
                            bVar7 = pbVar21[-1];
                            bVar4 = *pbVar21;
                            bVar3 = bVar5 >> 7 ^ bVar5 << 1 ^ bVar7;
                            bVar8 = bVar6 >> 7 ^ bVar6 << 1 ^ bVar4;
                            pbVar21[-3] = bVar8 ^ bVar6 ^ bVar3;
                            bVar2 = bVar7 >> 7 ^ bVar7 << 1;
                            pbVar21[-2] = bVar8 ^ bVar5 ^ bVar7 ^ bVar2;
                            bVar7 = (byte)((uint)(int)(char)bVar4 >> 7) & 0x1b ^ bVar4 << 1;
                            pbVar21[-1] = bVar2 ^ bVar4 ^ bVar6 ^ bVar5 ^ bVar7;
                            *pbVar21 = bVar7 ^ bVar6 ^ bVar5 ^ bVar3;
                            lVar26 = lVar26 + -1;
                            pbVar21 = pbVar21 + 4;
                          } while (lVar26 != 0);
                        }
                        lVar26 = 0;
                        pStack_84 = (pid_t)((ulong)uStack_4e8 >> 0x20);
                        local_90._4_4_ = (undefined4)((ulong)local_4f0 >> 0x20);
                        uVar24 = 1;
                        do {
                          bVar3 = *(byte *)((ulong)&local_90 | (ulong)(uVar27 + (int)lVar26) & 0xf);
                          *(byte *)((long)&local_4f0 + lVar26) =
                               (bVar3 << (ulong)(uVar27 & 7 | 1) |
                               bVar3 >> (ulong)(-(uVar27 | 1) & 7)) ^
                               *(byte *)((ulong)&local_90 | uVar24 & 0xf) ^ puVar31[lVar26] ^
                               *(byte *)((long)&local_4f0 + lVar26);
                          lVar26 = lVar26 + 1;
                          uVar24 = uVar24 + 5;
                        } while (uVar24 != 0x51);
                      }
                      else {
                        lVar26 = 0;
                        local_90._0_1_ = (char)DAT_10004fbbc;
                        local_90._1_1_ = (char)((uint)DAT_10004fbbc >> 8);
                        local_90._2_1_ = (char)((uint)DAT_10004fbbc >> 0x10);
                        local_90._3_1_ = (char)((uint)DAT_10004fbbc >> 0x18);
                        pStack_84._1_3_ = (undefined3)uStack_4e8;
                        uStack_80 = (undefined5)((ulong)uStack_4e8 >> 0x18);
                        local_90._4_4_ = CONCAT31((int3)local_4f0,(byte)uVar30);
                        uStack_88 = (undefined1)((ulong)local_4f0 >> 0x18);
                        bStack_87 = (byte)((ulong)local_4f0 >> 0x20);
                        uStack_86 = (undefined1)((ulong)local_4f0 >> 0x28);
                        uStack_85 = (undefined1)((ulong)local_4f0 >> 0x30);
                        pStack_84._0_1_ = (undefined1)((ulong)local_4f0 >> 0x38);
                        do {
                          *(byte *)((long)&local_a0 + lVar26) = (byte)lVar26 ^ 0x4d;
                          lVar26 = lVar26 + 1;
                        } while (lVar26 != 0x10);
                        lVar26 = 0;
                        do {
                          uVar27 = 0;
                          local_a0 = CONCAT31(local_a0._1_3_,
                                              (byte)local_a0 ^ (&DAT_10004fb9b)[lVar26]);
                          do {
                            lVar23 = 0;
                            do {
                              *(undefined *)((long)&local_a0 + lVar23) =
                                   (&DAT_100002d89)[*(byte *)((long)&local_a0 + lVar23)];
                              lVar23 = lVar23 + 1;
                            } while (lVar23 != 0x10);
                            lVar23 = 0;
                            uVar25 = uVar27 ^ 0xffffff9e;
                            uStack_508 = uStack_98;
                            local_510 = (byte *)CONCAT44(iStack_9c,local_a0);
                            do {
                              uVar25 = *(byte *)((long)&local_a0 + lVar23) ^ uVar25;
                              lVar23 = lVar23 + 1;
                            } while (lVar23 != 0x10);
                            lVar23 = 0;
                            uVar24 = 1;
                            do {
                              bVar3 = *(byte *)((ulong)&local_510 | uVar24 & 0xf);
                              *(byte *)((long)&local_a0 + lVar23) =
                                   *(byte *)((long)&local_510 + lVar23) ^ (byte)uVar25 ^
                                   (bVar3 << (ulong)((uint)lVar23 + 1 & 7) |
                                   bVar3 >> (ulong)(((uint)lVar23 ^ 0xffffffff) & 7));
                              lVar23 = lVar23 + 1;
                              uVar24 = uVar24 + 7;
                            } while (uVar24 != 0x71);
                            uVar27 = uVar27 + 1;
                          } while (uVar27 != 6);
                          lVar26 = lVar26 + 1;
                        } while (lVar26 != 0x10);
                        lVar26 = 0;
                        do {
                          uVar27 = 0;
                          local_a0 = CONCAT31(local_a0._1_3_,
                                              (byte)local_a0 ^ *(byte *)((long)&local_90 + lVar26));
                          do {
                            lVar23 = 0;
                            do {
                              *(undefined *)((long)&local_a0 + lVar23) =
                                   (&DAT_100002d89)[*(byte *)((long)&local_a0 + lVar23)];
                              lVar23 = lVar23 + 1;
                            } while (lVar23 != 0x10);
                            lVar23 = 0;
                            uVar25 = uVar27 ^ 0xffffff9e;
                            uStack_508 = uStack_98;
                            local_510 = (byte *)CONCAT44(iStack_9c,local_a0);
                            do {
                              uVar25 = *(byte *)((long)&local_a0 + lVar23) ^ uVar25;
                              lVar23 = lVar23 + 1;
                            } while (lVar23 != 0x10);
                            lVar23 = 0;
                            uVar24 = 1;
                            do {
                              bVar3 = *(byte *)((ulong)&local_510 | uVar24 & 0xf);
                              *(byte *)((long)&local_a0 + lVar23) =
                                   *(byte *)((long)&local_510 + lVar23) ^ (byte)uVar25 ^
                                   (bVar3 << (ulong)((uint)lVar23 + 1 & 7) |
                                   bVar3 >> (ulong)(((uint)lVar23 ^ 0xffffffff) & 7));
                              lVar23 = lVar23 + 1;
                              uVar24 = uVar24 + 7;
                            } while (uVar24 != 0x71);
                            uVar27 = uVar27 + 1;
                          } while (uVar27 != 6);
                          lVar26 = lVar26 + 1;
                        } while (lVar26 != 0x15);
                        local_7b = (undefined3)local_a0;
                        uStack_78 = (undefined5)(CONCAT44(iStack_9c,local_a0) >> 0x18);
                        sVar18 = _write(DAT_10000faa0,&local_90,0x1d);
                        iVar16 = DAT_10000faa8;
                        if (sVar18 == 0x1d) {
                          uVar27 = 0;
                          uVar24 = extraout_x9;
                          do {
                            uVar25 = uVar27;
                            if (0xf < (int)uVar27) break;
                            sVar18 = _read(iVar16,(void *)((long)local_b0 + (long)(int)uVar27),
                                           (long)(int)(0x10 - uVar27));
                            uVar25 = (uint)uVar24;
                            if (sVar18 < 1) {
                              uVar25 = uVar27;
                            }
                            uVar24 = (ulong)uVar25;
                            uVar27 = uVar27 + ((uint)sVar18 & ((uint)(sVar18 >> 0x3f) ^ 0xffffffff))
                            ;
                          } while (0 < sVar18);
                          if (uVar25 == 0x10) {
                            lVar26 = 0;
                            do {
                              uVar27 = 0;
                              DAT_10004fbab = DAT_10004fbab ^ *(byte *)((long)&local_90 + lVar26);
                              do {
                                lVar23 = 0;
                                do {
                                  (&DAT_10004fbab)[lVar23] =
                                       (&DAT_100002d89)[(&DAT_10004fbab)[lVar23]];
                                  lVar23 = lVar23 + 1;
                                } while (lVar23 != 0x10);
                                lVar23 = 0;
                                uVar25 = uVar27 ^ 0xffffff9e;
                                uStack_508 = uRam000000010004fbb3;
                                local_510 = (byte *)CONCAT71(_DAT_10004fbac,DAT_10004fbab);
                                do {
                                  uVar25 = (&DAT_10004fbab)[lVar23] ^ uVar25;
                                  lVar23 = lVar23 + 1;
                                } while (lVar23 != 0x10);
                                lVar23 = 0;
                                uVar24 = 1;
                                do {
                                  bVar3 = *(byte *)((ulong)&local_510 | uVar24 & 0xf);
                                  (&DAT_10004fbab)[lVar23] =
                                       *(byte *)((long)&local_510 + lVar23) ^ (byte)uVar25 ^
                                       (bVar3 << (ulong)((uint)lVar23 + 1 & 7) |
                                       bVar3 >> (ulong)(((uint)lVar23 ^ 0xffffffff) & 7));
                                  lVar23 = lVar23 + 1;
                                  uVar24 = uVar24 + 7;
                                } while (uVar24 != 0x71);
                                uVar27 = uVar27 + 1;
                              } while (uVar27 != 6);
                              lVar26 = lVar26 + 1;
                            } while (lVar26 != 0x15);
                            lVar26 = 0;
                            do {
                              *(byte *)((long)&local_c0 + lVar26) = (byte)lVar26 ^ 0x6d;
                              lVar26 = lVar26 + 1;
                            } while (lVar26 != 0x10);
                            lVar26 = 0;
                            do {
                              uVar27 = 0;
                              local_c0._0_4_ =
                                   CONCAT31(local_c0._1_3_,(byte)local_c0 ^ (&DAT_10004fb9b)[lVar26]
                                           );
                              do {
                                lVar23 = 0;
                                do {
                                  *(undefined *)((long)&local_c0 + lVar23) =
                                       (&DAT_100002d89)[*(byte *)((long)&local_c0 + lVar23)];
                                  lVar23 = lVar23 + 1;
                                } while (lVar23 != 0x10);
                                lVar23 = 0;
                                uVar25 = uVar27 ^ 0xffffff9e;
                                uStack_508 = uStack_b8;
                                local_510 = (byte *)CONCAT44(local_c0._4_4_,(pid_t)local_c0);
                                do {
                                  uVar25 = *(byte *)((long)&local_c0 + lVar23) ^ uVar25;
                                  lVar23 = lVar23 + 1;
                                } while (lVar23 != 0x10);
                                lVar23 = 0;
                                uVar24 = 1;
                                do {
                                  bVar3 = *(byte *)((ulong)&local_510 | uVar24 & 0xf);
                                  *(byte *)((long)&local_c0 + lVar23) =
                                       *(byte *)((long)&local_510 + lVar23) ^ (byte)uVar25 ^
                                       (bVar3 << (ulong)((uint)lVar23 + 1 & 7) |
                                       bVar3 >> (ulong)(((uint)lVar23 ^ 0xffffffff) & 7));
                                  lVar23 = lVar23 + 1;
                                  uVar24 = uVar24 + 7;
                                } while (uVar24 != 0x71);
                                uVar27 = uVar27 + 1;
                              } while (uVar27 != 6);
                              lVar26 = lVar26 + 1;
                            } while (lVar26 != 0x10);
                            uVar27 = 0;
                            local_c0._0_4_ = CONCAT31(local_c0._1_3_,(byte)local_c0 ^ (byte)uVar30);
                            do {
                              lVar26 = 0;
                              do {
                                *(undefined *)((long)&local_c0 + lVar26) =
                                     (&DAT_100002d89)[*(byte *)((long)&local_c0 + lVar26)];
                                lVar26 = lVar26 + 1;
                              } while (lVar26 != 0x10);
                              lVar26 = 0;
                              uVar25 = uVar27 ^ 0xffffff9e;
                              uStack_508 = uStack_b8;
                              local_510 = (byte *)CONCAT44(local_c0._4_4_,(pid_t)local_c0);
                              do {
                                uVar25 = *(byte *)((long)&local_c0 + lVar26) ^ uVar25;
                                lVar26 = lVar26 + 1;
                              } while (lVar26 != 0x10);
                              lVar26 = 0;
                              uVar24 = 1;
                              do {
                                bVar3 = *(byte *)((ulong)&local_510 | uVar24 & 0xf);
                                *(byte *)((long)&local_c0 + lVar26) =
                                     *(byte *)((long)&local_510 + lVar26) ^ (byte)uVar25 ^
                                     (bVar3 << (ulong)((uint)lVar26 + 1 & 7) |
                                     bVar3 >> (ulong)(((uint)lVar26 ^ 0xffffffff) & 7));
                                lVar26 = lVar26 + 1;
                                uVar24 = uVar24 + 7;
                              } while (uVar24 != 0x71);
                              uVar27 = uVar27 + 1;
                            } while (uVar27 != 6);
                            lVar26 = 0;
                            do {
                              uVar27 = 0;
                              local_c0._0_4_ =
                                   CONCAT31(local_c0._1_3_,(byte)local_c0 ^ (&DAT_10004fbab)[lVar26]
                                           );
                              do {
                                lVar23 = 0;
                                do {
                                  *(undefined *)((long)&local_c0 + lVar23) =
                                       (&DAT_100002d89)[*(byte *)((long)&local_c0 + lVar23)];
                                  lVar23 = lVar23 + 1;
                                } while (lVar23 != 0x10);
                                lVar23 = 0;
                                uVar25 = uVar27 ^ 0xffffff9e;
                                uStack_508 = uStack_b8;
                                local_510 = (byte *)CONCAT44(local_c0._4_4_,(pid_t)local_c0);
                                do {
                                  uVar25 = *(byte *)((long)&local_c0 + lVar23) ^ uVar25;
                                  lVar23 = lVar23 + 1;
                                } while (lVar23 != 0x10);
                                lVar23 = 0;
                                uVar24 = 1;
                                do {
                                  bVar3 = *(byte *)((ulong)&local_510 | uVar24 & 0xf);
                                  *(byte *)((long)&local_c0 + lVar23) =
                                       *(byte *)((long)&local_510 + lVar23) ^ (byte)uVar25 ^
                                       (bVar3 << (ulong)((uint)lVar23 + 1 & 7) |
                                       bVar3 >> (ulong)(((uint)lVar23 ^ 0xffffffff) & 7));
                                  lVar23 = lVar23 + 1;
                                  uVar24 = uVar24 + 7;
                                } while (uVar24 != 0x71);
                                uVar27 = uVar27 + 1;
                              } while (uVar27 != 6);
                              lVar26 = lVar26 + 1;
                            } while (lVar26 != 0x10);
                            lVar26 = 0;
                            do {
                              uVar27 = 0;
                              local_c0._0_4_ =
                                   CONCAT31(local_c0._1_3_,(byte)local_c0 ^ (&DAT_10000fb8b)[lVar26]
                                           );
                              do {
                                lVar23 = 0;
                                do {
                                  *(undefined *)((long)&local_c0 + lVar23) =
                                       (&DAT_100002d89)[*(byte *)((long)&local_c0 + lVar23)];
                                  lVar23 = lVar23 + 1;
                                } while (lVar23 != 0x10);
                                lVar23 = 0;
                                uVar25 = uVar27 ^ 0xffffff9e;
                                uStack_508 = uStack_b8;
                                local_510 = (byte *)CONCAT44(local_c0._4_4_,(pid_t)local_c0);
                                do {
                                  uVar25 = *(byte *)((long)&local_c0 + lVar23) ^ uVar25;
                                  lVar23 = lVar23 + 1;
                                } while (lVar23 != 0x10);
                                lVar23 = 0;
                                uVar24 = 1;
                                do {
                                  bVar3 = *(byte *)((ulong)&local_510 | uVar24 & 0xf);
                                  *(byte *)((long)&local_c0 + lVar23) =
                                       *(byte *)((long)&local_510 + lVar23) ^ (byte)uVar25 ^
                                       (bVar3 << (ulong)((uint)lVar23 + 1 & 7) |
                                       bVar3 >> (ulong)(((uint)lVar23 ^ 0xffffffff) & 7));
                                  lVar23 = lVar23 + 1;
                                  uVar24 = uVar24 + 7;
                                } while (uVar24 != 0x71);
                                uVar27 = uVar27 + 1;
                              } while (uVar27 != 6);
                              lVar26 = lVar26 + 1;
                            } while (lVar26 != 0x10);
                            lVar26 = 0;
                            do {
                              *(byte *)((long)&local_4f0 + lVar26) =
                                   *(byte *)((long)&local_c0 + lVar26) ^
                                   *(byte *)((long)local_b0 + lVar26);
                              lVar26 = lVar26 + 1;
                            } while (lVar26 != 0x10);
                            lVar26 = 0;
                            do {
                              uVar27 = 0;
                              DAT_10000fb8b = DAT_10000fb8b ^ *(byte *)((long)&local_90 + lVar26);
                              do {
                                lVar23 = 0;
                                do {
                                  (&DAT_10000fb8b)[lVar23] =
                                       (&DAT_100002d89)[(&DAT_10000fb8b)[lVar23]];
                                  lVar23 = lVar23 + 1;
                                } while (lVar23 != 0x10);
                                lVar23 = 0;
                                uVar25 = uVar27 ^ 0xffffff9e;
                                uStack_508 = CONCAT62(uRam000000010000fb95,
                                                      CONCAT11(DAT_10000fb94,uRam000000010000fb93));
                                local_510 = (byte *)CONCAT71(_DAT_10000fb8c,DAT_10000fb8b);
                                do {
                                  uVar25 = (&DAT_10000fb8b)[lVar23] ^ uVar25;
                                  lVar23 = lVar23 + 1;
                                } while (lVar23 != 0x10);
                                lVar23 = 0;
                                uVar24 = 1;
                                do {
                                  bVar3 = *(byte *)((ulong)&local_510 | uVar24 & 0xf);
                                  (&DAT_10000fb8b)[lVar23] =
                                       *(byte *)((long)&local_510 + lVar23) ^ (byte)uVar25 ^
                                       (bVar3 << (ulong)((uint)lVar23 + 1 & 7) |
                                       bVar3 >> (ulong)(((uint)lVar23 ^ 0xffffffff) & 7));
                                  lVar23 = lVar23 + 1;
                                  uVar24 = uVar24 + 7;
                                } while (uVar24 != 0x71);
                                uVar27 = uVar27 + 1;
                              } while (uVar27 != 6);
                              lVar26 = lVar26 + 1;
                            } while (lVar26 != 0x15);
                            lVar26 = 0;
                            do {
                              uVar27 = 0;
                              DAT_10000fb8b = DAT_10000fb8b ^ *(byte *)((long)&local_4f0 + lVar26);
                              do {
                                lVar23 = 0;
                                do {
                                  (&DAT_10000fb8b)[lVar23] =
                                       (&DAT_100002d89)[(&DAT_10000fb8b)[lVar23]];
                                  lVar23 = lVar23 + 1;
                                } while (lVar23 != 0x10);
                                lVar23 = 0;
                                uVar25 = uVar27 ^ 0xffffff9e;
                                uStack_508 = CONCAT62(uRam000000010000fb95,
                                                      CONCAT11(DAT_10000fb94,uRam000000010000fb93));
                                local_510 = (byte *)CONCAT71(_DAT_10000fb8c,DAT_10000fb8b);
                                do {
                                  uVar25 = (&DAT_10000fb8b)[lVar23] ^ uVar25;
                                  lVar23 = lVar23 + 1;
                                } while (lVar23 != 0x10);
                                lVar23 = 0;
                                uVar24 = 1;
                                do {
                                  bVar3 = *(byte *)((ulong)&local_510 | uVar24 & 0xf);
                                  (&DAT_10000fb8b)[lVar23] =
                                       *(byte *)((long)&local_510 + lVar23) ^ (byte)uVar25 ^
                                       (bVar3 << (ulong)((uint)lVar23 + 1 & 7) |
                                       bVar3 >> (ulong)(((uint)lVar23 ^ 0xffffffff) & 7));
                                  lVar23 = lVar23 + 1;
                                  uVar24 = uVar24 + 7;
                                } while (uVar24 != 0x71);
                                uVar27 = uVar27 + 1;
                              } while (uVar27 != 6);
                              lVar26 = lVar26 + 1;
                            } while (lVar26 != 0x10);
                            iVar16 = 0;
                            DAT_10004fbbc = DAT_10004fbbc + 1;
                          }
                          else {
                            iVar16 = -1;
                          }
                        }
                        else {
                          iVar16 = -1;
                        }
                        if (iVar16 != 0) break;
                      }
                      *(undefined8 *)(pbVar1 + uVar30 * 0x10 + 8) = uStack_4e8;
                      *(undefined8 *)(pbVar1 + uVar30 * 0x10) = local_4f0;
                      bVar15 = uVar30 < 0xe;
                      uVar30 = uVar30 + 1;
                      puVar31 = puVar31 + 8;
                    } while (uVar30 != 0xf);
                    if (bVar15) {
                      pcVar28 = "cooperation failed\n";
                      sVar19 = 0x13;
                      goto LAB_1000015b0;
                    }
                    bVar15 = lVar17 == 0;
                    lVar17 = lVar17 + 1;
                  } while (bVar15);
                  lVar17 = 0;
                  uVar27 = 0;
                  do {
                    *(char *)((long)&local_510 + lVar17) = (char)uVar27;
                    *(byte *)((long)&local_510 + lVar17 + 1) =
                         ((char)uVar27 + (char)(uVar27 / 7) * -7) * '\x02' | 1;
                    uVar27 = uVar27 + 1;
                    lVar17 = lVar17 + 2;
                  } while (lVar17 != 0x1c);
                  lVar17 = 0;
                  do {
                    *(byte *)((long)&local_a0 + lVar17) = (byte)lVar17 ^ 0x46;
                    lVar17 = lVar17 + 1;
                  } while (lVar17 != 0x10);
                  FUN_100002498(&local_a0,pcVar28 + 7,0x20);
                  FUN_100002498(&local_a0,&local_510,0x1c);
                  FUN_100002498(&local_a0,local_4c0,0x1e0);
                  FUN_100002498(&local_a0,&DAT_10000fb8b,0x10);
                  FUN_100002498(&local_a0,&DAT_10000fb7b,0x10);
                  FUN_100002498(&local_a0,&DAT_10000fb3c,0x3f);
                  FUN_10000257c(local_b0,&local_4d8);
                  lVar17 = 0;
                  do {
                    *(byte *)((long)&local_c0 + lVar17) =
                         *(byte *)((long)local_b0 + lVar17) ^ (&DAT_100008010)[lVar17 + uVar20];
                    lVar17 = lVar17 + 1;
                  } while (lVar17 != 0x10);
                  lVar17 = 0;
                  local_4c4 = local_4c4 & 0xffffff00;
                  do {
                    bVar3 = (byte)local_4c4 |
                            *(byte *)((long)&local_c0 + lVar17) ^
                            *(byte *)((long)&local_a0 + lVar17);
                    local_4c4 = CONCAT31(local_4c4._1_3_,bVar3);
                    lVar17 = lVar17 + 1;
                  } while (lVar17 != 0x10);
                  local_90._0_1_ = 0;
                  local_90._1_1_ = 0;
                  local_90._2_1_ = 0;
                  local_90._3_1_ = 0;
                  uStack_88 = 0;
                  bStack_87 = 0;
                  uStack_86 = 0;
                  uStack_85 = 0;
                  pStack_84 = 0;
                  uStack_78 = 0;
                  uStack_80 = 0;
                  local_7b = 0;
                  local_90._4_4_ = 0xff;
                  _write(DAT_10000faa0,&local_90,0x1d);
                  if (0 < DAT_10000faa4) {
                    _waitpid(DAT_10000faa4,(int *)&local_4f0,0);
                  }
                  if (bVar3 == 0) {
                    _write(1,"Correct! Access granted.\n",0x19);
                    return 0;
                  }
                }
                pcVar28 = "Access Denied\n";
                sVar19 = 0xe;
              }
              _write(2,pcVar28,sVar19);
              return 1;
            }
          }
          uRam000000010000fb83 = uVar13;
          pcVar28 = "session handshake failed\n";
          sVar19 = 0x19;
        }
        else {
          pcVar28 = "cooperation failed (need Rosetta / x86_64)\n";
          sVar19 = 0x2b;
        }
LAB_1000015b0:
        _write(2,pcVar28,sVar19);
        return 2;
      }
    }
    else {
      _close(iVar16);
    }
    _unlink((char *)local_4c0);
  }
LAB_100000db0:
  _write(2,"stage2 failed\n",0xe);
  return 5;
LAB_100000abc:
  iVar16 = iVar16 + 1;
  if (iVar16 == *(int *)(lVar17 + 0x10)) goto LAB_100000ac8;
  goto LAB_100000a78;
}


===== end ===== */

/* FUNCTION LIST
0x100000a18  entry  size=8
0x100000a20  FUN_100000a20  size=6636
0x10000240c  FUN_10000240c  size=140
0x100002498  FUN_100002498  size=228
0x10000257c  FUN_10000257c  size=1080
0x1000029b4  FUN_1000029b4  size=460
0x100002b80  __NSGetExecutablePath  size=12
0x100002b8c  __dyld_get_image_header  size=12
0x100002b98  _arc4random_buf  size=12
0x100002ba4  _close  size=12
0x100002bb0  _fchmod  size=12
0x100002bbc  _getpid  size=12
0x100002bc8  _mkstemp  size=12
0x100002bd4  _pipe  size=12
0x100002be0  _posix_spawn  size=12
0x100002bec  _posix_spawn_file_actions_addclose  size=12
0x100002bf8  _posix_spawn_file_actions_adddup2  size=12
0x100002c04  _posix_spawn_file_actions_destroy  size=12
0x100002c10  _posix_spawn_file_actions_init  size=12
0x100002c1c  _posix_spawnattr_destroy  size=12
0x100002c28  _posix_spawnattr_init  size=12
0x100002c34  _posix_spawnattr_setbinpref_np  size=12
0x100002c40  _ptrace  size=12
0x100002c4c  _read  size=12
0x100002c58  _strlen  size=12
0x100002c64  _strncmp  size=12
0x100002c70  _sysctl  size=12
0x100002c7c  _unlink  size=12
0x100002c88  _waitpid  size=12
0x100002c94  _write  size=12
END FUNCTION LIST */
