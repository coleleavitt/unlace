__int64 __fastcall sub_AEE70(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, unsigned int a6)
{
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r11
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // r13
  int v17; // ecx
  __int64 v18; // rax
  _DWORD *v19; // rax
  int v20; // eax
  __int64 v21; // r8
  int v22; // eax
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // [rsp+0h] [rbp-B0h]
  __int64 v26; // [rsp+0h] [rbp-B0h]
  int v27; // [rsp+10h] [rbp-A0h]
  int v28; // [rsp+10h] [rbp-A0h]
  int v29; // [rsp+10h] [rbp-A0h]
  __int64 v30; // [rsp+18h] [rbp-98h]
  unsigned __int64 v31; // [rsp+18h] [rbp-98h]
  __int64 v32; // [rsp+18h] [rbp-98h]
  __int64 v33; // [rsp+28h] [rbp-88h]
  _DWORD *v34; // [rsp+28h] [rbp-88h]
  __int64 v35; // [rsp+30h] [rbp-80h]
  _QWORD v37[2]; // [rsp+40h] [rbp-70h] BYREF
  _QWORD v38[2]; // [rsp+50h] [rbp-60h] BYREF
  _QWORD v39[10]; // [rsp+60h] [rbp-50h] BYREF

  v39[3] = __readfsqword(0x28u);
  if ( !(_BYTE)a6 || *(_DWORD *)(a3 + 68) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL) + 88LL) )
    return 0;
  if ( a2 )
  {
    if ( (unsigned __int8)sub_121C80(a3, *(_QWORD *)(a2 + 8), 0) )
    {
      v10 = a3 + 64;
      if ( (unsigned __int8)sub_12FC30(a1, *(_QWORD *)(a3 + 8), a3 + 64, *(_QWORD *)(a2 + 8), a2 + 64) )
      {
        if ( *(_BYTE *)(a2 + 32) == 4 )
        {
          v19 = *(_DWORD **)(a2 + 40);
          if ( *v19 == 9 )
          {
            if ( v19 )
            {
              v34 = v19 + 8;
              if ( (unsigned __int8)sub_130600(a1, a2, v19 + 8, a3, a3 + 32, 0) )
              {
                v32 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
                if ( (unsigned __int8)sub_12E4C0(v32, a1, a3, (int)a3 + 48, *(_QWORD *)(a3 + 8), v10, 0)
                  || (unsigned __int8)sub_12FC30(a1, a3, a3 + 48, a2, a2 + 48) )
                {
                  if ( (unsigned __int8)sub_132860(a1, a2, (_DWORD)v34, a3, (int)a3 + 32, 8) )
                  {
                    v39[1] = 0;
                    v39[0] = 0xFFFFFFFF00000000LL;
                    sub_11C450(v39, v34);
                    sub_124BC0(a2 + 32);
                    sub_A0CC0(v32, a2, *(_DWORD *)(a3 + 4));
                    if ( (unsigned __int8)sub_A99D0(a1, a3, a2) )
                      sub_11CFE0(a3);
                    sub_11C7E0(v39);
                    return a6;
                  }
                }
              }
            }
          }
        }
        if ( (unsigned __int64)*(int *)(a2 + 68) <= 8 )
        {
          v13 = sub_11C2E0(a3, v39);
          if ( v13 )
          {
            if ( *(_BYTE *)v39[0] == 4 )
            {
              v33 = v13;
              if ( (unsigned __int8)sub_131A10(a1, a3, *(_QWORD *)(v39[0] + 8LL), a2, a2) )
              {
                if ( (*(_DWORD *)(a3 + 4) & 0x40010) == 0
                  && (*(_BYTE *)(a3 + 65) & 2) == 0
                  && !sub_A2090(*(_QWORD *)(a1 + 64), a3) )
                {
                  v14 = 0;
                  v15 = *(unsigned int *)(v33 + 4);
                  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
                  v17 = 8 * (*(_DWORD *)(a2 + 68) - v15);
                  if ( *(_DWORD *)a3 == 20 )
                  {
                    v24 = 0;
                    if ( (unsigned __int64)v17 <= 0x3F )
                      v24 = 1LL << v17;
                    v14 = v24 - 1;
                  }
                  v31 = v17;
                  v18 = sub_32AEF0(*(_QWORD *)(*(_QWORD *)(v33 + 8) + 16LL), v15, 0) << v17;
                  if ( v31 >= 0x40 )
                    v18 = 0;
                  sub_120450(v33, v16, v18 | v14, *(unsigned int *)(a2 + 68), -1, 0);
                  sub_124BC0(v10);
                  sub_124BC0(v39[0]);
                  sub_11D010(a3, v16);
                  return a6;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( !(unsigned __int8)sub_11E300(a2)
    || !(unsigned __int8)sub_11E300(a3)
    || !(unsigned __int8)sub_130600(a1, *(_QWORD *)(a2 + 8), a2 + 64, *(_QWORD *)(a3 + 8), a3 + 64, 0) )
  {
    goto LABEL_10;
  }
  v11 = *(_QWORD *)(a1 + 480);
  v37[1] = 0;
  v38[1] = 0;
  v12 = *(_QWORD *)(v11 + 112);
  v37[0] = 0xFFFFFFFF00000000LL;
  v38[0] = 0xFFFFFFFF00000000LL;
  v30 = v12;
  if ( *(_DWORD *)a3 != 4 )
    goto LABEL_76;
  if ( ((*(_DWORD *)a2 - 19) & 0xFFFFFFFD) == 0 )
  {
    sub_124BC0(v37);
    if ( (unsigned __int8)sub_132860(a1, a2, (unsigned int)v37, a3, (int)a3 + 32, 4) )
    {
      sub_124BC0(v38);
      sub_2079D0(a2 + 32, a2);
      v27 = HIDWORD(v37[0]);
      v35 = *(_QWORD *)(a2 + 24);
      v20 = round_up_power2();
      v21 = (unsigned int)v27;
      if ( LOBYTE(v38[0]) != 2 && v27 > 8 && v20 < SHIDWORD(v38[0]) )
      {
        sub_126CF0(v38, v30, (unsigned int)v20, 0);
        v21 = (unsigned int)v27;
      }
      sub_120220(v38, v30, 9, v35, v21);
      goto LABEL_18;
    }
    goto LABEL_46;
  }
  if ( *(_DWORD *)a2 == 20 )
  {
    if ( (unsigned __int8)sub_11F7C0(a3 + 32, v39, 0) && !v39[0] )
    {
      sub_124BC0(v37);
      sub_124BC0(v38);
      sub_2079D0(a2 + 32, a2);
      v25 = *(_QWORD *)(a2 + 24);
      v28 = 2 * HIDWORD(v37[0]);
      v22 = round_up_power2();
      if ( LOBYTE(v37[0]) != 2 && v28 > 8 && v22 < SHIDWORD(v37[0]) )
        sub_126CF0(v37, v30, (unsigned int)v22, 0);
      sub_120220(v37, v30, 9, v25, (unsigned int)v28);
      v29 = HIDWORD(v37[0]);
      v26 = *(_QWORD *)(a2 + 24);
      v23 = round_up_power2();
      if ( LOBYTE(v38[0]) != 2 && v29 > 8 && v23 < SHIDWORD(v38[0]) )
        sub_126CF0(v38, v30, (unsigned int)v23, 0);
      sub_120220(v38, v30, 9, v26, (unsigned int)v29);
      goto LABEL_18;
    }
  }
  else
  {
LABEL_76:
    if ( (unsigned __int8)sub_A8FC0(a1, a2, (int *)a2, a3, a3, (__int64)v37, (__int64)v38, a4) )
    {
LABEL_18:
      sub_123480(v39, a2 + 64);
      if ( (unsigned __int8)sub_132860(
                              a1,
                              *(_QWORD *)(a2 + 8),
                              (unsigned int)v39,
                              *(_QWORD *)(a3 + 8),
                              (int)a3 + 64,
                              13)
        && (*(_DWORD *)(a2 + 4) & 0x40010) == 0
        && (*(_BYTE *)(a2 + 65) & 2) == 0
        && !sub_A2090(*(_QWORD *)(a1 + 64), a2) )
      {
        sub_12A590(v37, v30, HIDWORD(v37[0]), 2);
        sub_12A590(v38, v30, HIDWORD(v38[0]), 2);
        sub_12A590(v39, v30, HIDWORD(v39[0]), 2);
        sub_124BC0(a2 + 32);
        sub_124BC0(a2 + 48);
        sub_124BC0(a2 + 64);
        sub_A0CC0(v30, a2, *(_DWORD *)(a3 + 4));
        if ( *(_DWORD *)a3 != 4
          || a2 && (unsigned __int8)sub_121C80(a3, *(_QWORD *)(a2 + 8), 0)
          || !(unsigned __int8)sub_A9620(a1, a2, a3, *(_QWORD *)(a3 + 8)) )
        {
          sub_11CFE0(a3);
        }
        sub_11C7E0(v39);
        sub_11C7E0(v38);
        sub_11C7E0(v37);
        return a6;
      }
      sub_11C7E0(v39);
    }
  }
LABEL_46:
  sub_11C7E0(v38);
  sub_11C7E0(v37);
LABEL_10:
  if ( *(_DWORD *)a2 == 7 || *(_DWORD *)a3 == 7 )
    return 0;
  if ( (unsigned __int8)sub_AE640(a1, a2, a3) )
    return a6;
  else
    return sub_AE640(a1, a3, a2);
}

