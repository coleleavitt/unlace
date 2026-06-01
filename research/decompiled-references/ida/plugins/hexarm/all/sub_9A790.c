__int64 __fastcall sub_9A790(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // r13
  int v13; // eax
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-D0h]
  unsigned int v18; // [rsp+18h] [rbp-B8h]
  __int64 v19; // [rsp+20h] [rbp-B0h]
  unsigned __int8 v20; // [rsp+28h] [rbp-A8h]
  _BYTE v21[16]; // [rsp+30h] [rbp-A0h] BYREF
  int v22; // [rsp+40h] [rbp-90h] BYREF
  __int128 v23; // [rsp+48h] [rbp-88h]
  __int64 v24; // [rsp+58h] [rbp-78h]
  _QWORD v25[2]; // [rsp+60h] [rbp-70h] BYREF
  unsigned __int64 v26; // [rsp+70h] [rbp-60h] BYREF
  __int64 v27; // [rsp+78h] [rbp-58h]
  _QWORD v28[10]; // [rsp+80h] [rbp-50h] BYREF

  v28[3] = __readfsqword(0x28u);
  v6 = sub_952F0(a2);
  result = 0;
  if ( !v6 )
  {
    v8 = *(_QWORD *)(a1 + 480);
    v25[1] = 0;
    v27 = 0;
    v9 = *(_QWORD *)(v8 + 112);
    v28[1] = 0;
    v23 = 0;
    v19 = v9;
    v25[0] = 0xFFFFFFFF00000000LL;
    v26 = 0xFFFFFFFF00000000LL;
    v28[0] = 0xFFFFFFFF00000000LL;
    sub_124DE0(&v22, a3);
    sub_124BC0(&v26);
    if ( ((*(_DWORD *)a3 - 14) & 0xFFFFFFF7) != 0 )
    {
      if ( *(_QWORD *)(a2 + 64) )
      {
        if ( !under_debugger )
          sub_3835A0(51927);
        goto LABEL_27;
      }
      sub_124BC0(v28);
      if ( !(unsigned __int8)sub_132860(
                               a1,
                               *(_QWORD *)(a3 + 8),
                               (unsigned int)v28,
                               *(_QWORD *)(a3 + 8),
                               (int)a3 + 64,
                               1) )
        goto LABEL_20;
    }
    else
    {
      sub_124BC0(v28);
      v15 = *(_QWORD *)(a2 + 64);
      if ( !v15 )
        v15 = a4;
      if ( !(unsigned __int8)sub_132860(
                               a1,
                               *(_QWORD *)(a3 + 8),
                               (unsigned int)v28,
                               *(_QWORD *)(v15 + 8),
                               (int)v15 + 64,
                               1) )
        goto LABEL_20;
      if ( *(_DWORD *)a3 == 14 )
      {
        v17 = v24;
        v18 = HIDWORD(v28[0]);
        v16 = sub_32AEF0(*(_QWORD *)(v27 + 16), HIDWORD(v26), 1);
        sub_120450(&v26, v19, v16, v18, v17, 0);
      }
    }
    sub_124BC0(v25);
    if ( HIDWORD(v25[0]) == HIDWORD(v28[0])
      || SHIDWORD(v25[0]) >= SHIDWORD(v28[0]) && (unsigned __int8)sub_126DF0(v25, v19, v24) )
    {
      if ( (*(_BYTE *)(v19 + 48) & 0x10) != 0 && HIDWORD(v25[0]) == 8 && v22 != 14 )
        sub_96220((__int64)&v26, v19, v24, 31);
      if ( (unsigned int)sub_93EF0(a1, a4, a3, (__int64)&v22, 0) )
      {
        sub_124DE0(a3, &v22);
        sub_15B6B0(a3, v19, 0, 0, 0, 0, 0);
        sub_11CFE0(a4);
        v10 = *(_QWORD *)(a2 + 64);
        if ( v10 )
        {
          v11 = v10 + 32;
          v12 = v10 + 64;
          sub_123480(v21, v10 + 32);
          sub_124BC0(v11);
          sub_124BC0(v12);
          sub_11C7E0(v21);
        }
        v13 = *(_DWORD *)(a1 + 24);
        BYTE1(v13) &= ~2u;
        LOBYTE(v13) = v13 | 0x80;
        *(_DWORD *)(a1 + 24) = v13;
        sub_11D010(a3, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
        sub_98D10(a1, a3);
        v14 = 1;
        goto LABEL_14;
      }
LABEL_20:
      v14 = 0;
LABEL_14:
      v20 = v14;
      sub_11C7E0(v28);
      sub_11C7E0(&v26);
      sub_11C7E0(v25);
      return v20;
    }
    if ( !under_debugger )
      sub_3835A0(51693);
LABEL_27:
    BUG();
  }
  return result;
}

