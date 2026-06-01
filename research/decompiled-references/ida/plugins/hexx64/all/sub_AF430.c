__int64 __fastcall sub_AF430(__int128 a1, __int64 a2, char a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // r12
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r11
  __int64 v16; // r14
  int v17; // esi
  __int64 v18; // r13
  int v19; // ecx
  __int64 v20; // rax
  unsigned __int8 *v21; // rax
  _DWORD *v22; // rax
  int v23; // eax
  int v24; // r8d
  int v25; // eax
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // [rsp-10h] [rbp-C0h]
  __int64 v29; // [rsp-8h] [rbp-B8h]
  __int64 v30; // [rsp+0h] [rbp-B0h]
  __int64 v31; // [rsp+0h] [rbp-B0h]
  int v32; // [rsp+10h] [rbp-A0h]
  int v33; // [rsp+10h] [rbp-A0h]
  int v34; // [rsp+10h] [rbp-A0h]
  __int64 v35; // [rsp+18h] [rbp-98h]
  unsigned __int64 v36; // [rsp+18h] [rbp-98h]
  __int64 v37; // [rsp+18h] [rbp-98h]
  __int64 v38; // [rsp+28h] [rbp-88h]
  char *v39; // [rsp+28h] [rbp-88h]
  unsigned __int8 *v40; // [rsp+30h] [rbp-80h]
  __int64 v41; // [rsp+30h] [rbp-80h]
  _QWORD v43[2]; // [rsp+40h] [rbp-70h] BYREF
  _QWORD v44[2]; // [rsp+50h] [rbp-60h] BYREF
  __int64 v45[10]; // [rsp+60h] [rbp-50h] BYREF

  v45[3] = __readfsqword(0x28u);
  if ( !(_BYTE)a5 || *(_DWORD *)(a2 + 68) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL) + 88LL) )
    return 0;
  v6 = *((_QWORD *)&a1 + 1);
  if ( *((_QWORD *)&a1 + 1) )
  {
    if ( sub_122240(a2, *(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL), 0) )
    {
      v9 = a2 + 64;
      v40 = (unsigned __int8 *)(*((_QWORD *)&a1 + 1) + 64LL);
      if ( (unsigned __int8)sub_1301F0(
                              (const __m128i *)a1,
                              *(_QWORD *)(a2 + 8),
                              a2 + 64,
                              *(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL),
                              *((_QWORD *)&a1 + 1) + 64LL) )
      {
        if ( *(_BYTE *)(*((_QWORD *)&a1 + 1) + 32LL) == 4 )
        {
          v22 = *(_DWORD **)(*((_QWORD *)&a1 + 1) + 40LL);
          if ( *v22 == 9 )
          {
            if ( v22 )
            {
              v39 = (char *)(v22 + 8);
              if ( (unsigned __int8)sub_130BC0(
                                      (const __m128i *)a1,
                                      *((__int64 *)&a1 + 1),
                                      (__int64)(v22 + 8),
                                      a2,
                                      a2 + 32,
                                      0) )
              {
                v37 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
                if ( (unsigned __int8)sub_12EA80(v37, (const __m128i *)a1, a2, a2 + 48, *(_QWORD *)(a2 + 8), v9, 0)
                  || (unsigned __int8)sub_1301F0(
                                        (const __m128i *)a1,
                                        a2,
                                        a2 + 48,
                                        *((__int64 *)&a1 + 1),
                                        *((_QWORD *)&a1 + 1) + 48LL) )
                {
                  if ( (unsigned __int8)sub_132E20(a1, (__int64)v39, a2, a2 + 32, 8u) )
                  {
                    v45[1] = 0;
                    v45[0] = 0xFFFFFFFF00000000LL;
                    sub_11CA10((char *)v45, v39);
                    sub_125180(*((_QWORD *)&a1 + 1) + 32LL, (unsigned __int8 *)v45);
                    sub_A1280(v37, *((__int64 *)&a1 + 1), *(_DWORD *)(a2 + 4));
                    if ( (unsigned __int8)sub_A9F90(a1, a2, *((__int64 *)&a1 + 1)) )
                      sub_11D5A0(a2);
                    sub_11CDA0((__int64)v45);
                    return a5;
                  }
                }
              }
            }
          }
        }
        if ( (unsigned __int64)*(int *)(*((_QWORD *)&a1 + 1) + 68LL) <= 8 )
        {
          v15 = sub_11C8A0(a2, v45);
          if ( v15 )
          {
            if ( *(_BYTE *)v45[0] == 4 )
            {
              v38 = v15;
              if ( sub_131FD0(
                     (const __m128i *)a1,
                     a2,
                     *(_QWORD *)(v45[0] + 8),
                     *((__int64 *)&a1 + 1),
                     *((unsigned int **)&a1 + 1)) )
              {
                if ( (*(_DWORD *)(a2 + 4) & 0x40010) == 0
                  && (*(_BYTE *)(a2 + 65) & 2) == 0
                  && !sub_A2650(*(_QWORD *)(a1 + 64), a2) )
                {
                  v16 = 0;
                  v17 = *(_DWORD *)(v38 + 4);
                  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
                  v19 = 8 * (*(_DWORD *)(v6 + 68) - v17);
                  if ( *(_DWORD *)a2 == 20 )
                  {
                    v27 = 0;
                    if ( (unsigned __int64)v19 <= 0x3F )
                      v27 = 1LL << v19;
                    v16 = v27 - 1;
                  }
                  v36 = v19;
                  v20 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v38 + 8) + 16LL), v17, 0) << v19;
                  if ( v36 >= 0x40 )
                    v20 = 0;
                  sub_120A10(v38, v18, v20 | v16, *(_DWORD *)(v6 + 68), -1, 0);
                  v21 = (unsigned __int8 *)sub_125180(v9, v40);
                  sub_125180(v45[0], v21);
                  sub_11D5D0(a2, v18);
                  return a5;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( !sub_11E8C0(*((unsigned int **)&a1 + 1))
    || !sub_11E8C0((unsigned int *)a2)
    || !(unsigned __int8)sub_130BC0(
                           (const __m128i *)a1,
                           *(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL),
                           *((_QWORD *)&a1 + 1) + 64LL,
                           *(_QWORD *)(a2 + 8),
                           a2 + 64,
                           0) )
  {
    goto LABEL_10;
  }
  v10 = *(_QWORD *)(a1 + 480);
  v43[1] = 0;
  v44[1] = 0;
  v11 = *(_QWORD *)(v10 + 112);
  v43[0] = 0xFFFFFFFF00000000LL;
  v44[0] = 0xFFFFFFFF00000000LL;
  v35 = v11;
  if ( *(_DWORD *)a2 != 4 )
    goto LABEL_17;
  if ( ((**((_DWORD **)&a1 + 1) - 19) & 0xFFFFFFFD) == 0 )
  {
    sub_125180((__int64)v43, (unsigned __int8 *)(*((_QWORD *)&a1 + 1) + 32LL));
    if ( (unsigned __int8)sub_132E20(a1, (__int64)v43, a2, a2 + 32, 4u) )
    {
      sub_125180((__int64)v44, (unsigned __int8 *)(*((_QWORD *)&a1 + 1) + 48LL));
      sub_207610(*((_QWORD *)&a1 + 1) + 32LL, *((int ***)&a1 + 1));
      v32 = HIDWORD(v43[0]);
      v41 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 24LL);
      v23 = round_up_power2();
      v24 = v32;
      if ( LOBYTE(v44[0]) != 2 && v32 > 8 && v23 < SHIDWORD(v44[0]) )
      {
        sub_1272B0((unsigned __int64)v44, v35, v23, 0);
        v24 = v32;
      }
      sub_1207E0((char *)v44, v35, 9, v41, v24);
      goto LABEL_18;
    }
    goto LABEL_46;
  }
  if ( **((_DWORD **)&a1 + 1) == 20 )
  {
    if ( (unsigned __int8)sub_11FD80((char *)(a2 + 32), v45, 0) && !v45[0] )
    {
      sub_125180((__int64)v43, (unsigned __int8 *)(*((_QWORD *)&a1 + 1) + 32LL));
      sub_125180((__int64)v44, (unsigned __int8 *)(*((_QWORD *)&a1 + 1) + 48LL));
      sub_207610(*((_QWORD *)&a1 + 1) + 32LL, *((int ***)&a1 + 1));
      v30 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 24LL);
      v33 = 2 * HIDWORD(v43[0]);
      v25 = round_up_power2();
      if ( LOBYTE(v43[0]) != 2 && v33 > 8 && v25 < SHIDWORD(v43[0]) )
        sub_1272B0((unsigned __int64)v43, v35, v25, 0);
      sub_1207E0((char *)v43, v35, 9, v30, v33);
      v34 = HIDWORD(v43[0]);
      v31 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 24LL);
      v26 = round_up_power2();
      if ( LOBYTE(v44[0]) != 2 && v34 > 8 && v26 < SHIDWORD(v44[0]) )
        sub_1272B0((unsigned __int64)v44, v35, v26, 0);
      sub_1207E0((char *)v44, v35, 9, v31, v34);
      goto LABEL_18;
    }
  }
  else
  {
LABEL_17:
    v12 = sub_A9580(a1, *((unsigned __int8 **)&a1 + 1), a2, a2, (__int64)v43, (char *)v44, a3);
    v13 = v28;
    v14 = v29;
    if ( v12 )
    {
LABEL_18:
      sub_123A40((__int64)v45, (unsigned __int8 *)(*((_QWORD *)&a1 + 1) + 64LL), v13, v14);
      *((_QWORD *)&a1 + 1) = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL);
      if ( (unsigned __int8)sub_132E20(a1, (__int64)v45, *(_QWORD *)(a2 + 8), a2 + 64, 0xDu)
        && (*(_DWORD *)(v6 + 4) & 0x40010) == 0
        && (*(_BYTE *)(v6 + 65) & 2) == 0
        && !sub_A2650(*(_QWORD *)(a1 + 64), v6) )
      {
        sub_12AB50((unsigned __int8 *)v43, v35, SHIDWORD(v43[0]), 2);
        sub_12AB50((unsigned __int8 *)v44, v35, SHIDWORD(v44[0]), 2);
        sub_12AB50((unsigned __int8 *)v45, v35, SHIDWORD(v45[0]), 2);
        sub_125180(v6 + 32, (unsigned __int8 *)v43);
        sub_125180(v6 + 48, (unsigned __int8 *)v44);
        sub_125180(v6 + 64, (unsigned __int8 *)v45);
        sub_A1280(v35, v6, *(_DWORD *)(a2 + 4));
        if ( *(_DWORD *)a2 != 4
          || v6 && sub_122240(a2, *(_QWORD *)(v6 + 8), 0)
          || !(unsigned __int8)sub_A9BE0(a1, v6, a2, *(_QWORD *)(a2 + 8)) )
        {
          sub_11D5A0(a2);
        }
        sub_11CDA0((__int64)v45);
        sub_11CDA0((__int64)v44);
        sub_11CDA0((__int64)v43);
        return a5;
      }
      sub_11CDA0((__int64)v45);
    }
  }
LABEL_46:
  sub_11CDA0((__int64)v44);
  sub_11CDA0((__int64)v43);
LABEL_10:
  if ( *(_DWORD *)v6 == 7 || *(_DWORD *)a2 == 7 )
    return 0;
  *((_QWORD *)&a1 + 1) = v6;
  if ( (unsigned __int8)sub_AEC00(a1, a2) )
    return a5;
  *((_QWORD *)&a1 + 1) = a2;
  return sub_AEC00(a1, v6);
}

