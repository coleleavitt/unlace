_BOOL8 __fastcall sub_DEFB0(__int64 a1, __int64 a2, _QWORD *a3, int a4)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // r12
  __int64 v9; // rbp
  int *v10; // rbx
  int tinfo_size; // eax
  unsigned int v13; // r14d
  int v14; // r13d
  char tinfo_property; // al
  char v16; // al
  int v17; // eax
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rsi
  int v21; // [rsp+0h] [rbp-A8h]
  __int64 v22; // [rsp+8h] [rbp-A0h]
  _QWORD *v23; // [rsp+10h] [rbp-98h]
  int v24; // [rsp+18h] [rbp-90h]
  unsigned int v25; // [rsp+18h] [rbp-90h]
  bool v26; // [rsp+1Fh] [rbp-89h]
  __int64 v27; // [rsp+20h] [rbp-88h]
  _QWORD v28[2]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v29[2]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v30[24]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+68h] [rbp-40h]

  v23 = a3;
  v31 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a2 + 32);
  if ( a4 <= (int)v5 )
  {
    v6 = a4;
  }
  else
  {
    v6 = (int)v5;
    v7 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF0;
    if ( v7 != 64 && v7 != 208 )
      sub_DEE60();
  }
  if ( (int)v6 <= 0 )
    return 1;
  v8 = 0;
  v27 = 80 * v6;
  while ( 1 )
  {
    v9 = v8 + *(_QWORD *)(a2 + 24);
    v10 = (int *)(v8 + *v23);
    v22 = v9 + 56;
    if ( !(unsigned int)lexcompare_tinfo() && !(unsigned int)compare_arglocs() )
      goto LABEL_8;
    tinfo_size = get_tinfo_size();
    v13 = *(_DWORD *)(v9 + 4);
    v14 = tinfo_size;
    v24 = tinfo_size;
    v26 = (unsigned int)compare_arglocs() == 0 && tinfo_size == v13;
    if ( v26 )
      goto LABEL_8;
    tinfo_property = get_tinfo_property();
    if ( (tinfo_property & 0x3E) == 0 )
      return v26;
    if ( (tinfo_property & 0xFu) > 8 )
      return v26;
    v16 = get_tinfo_property();
    if ( (v16 & 0x3E) == 0 )
      return v26;
    if ( (v16 & 0xFu) > 8 )
      return v26;
    if ( (int)v13 >= v14 )
      return v26;
    v17 = *v10;
    if ( *(_DWORD *)(v9 + 56) != *v10 || (unsigned int)(v17 - 3) > 1 && v17 != 1 )
      return v26;
    v28[1] = 0;
    v28[0] = 0xFFFFFFFF00000000LL;
    sub_1C1230(v30, v22, v13, 0);
    sub_121860((unsigned int)v28, a1, (unsigned int)v30, v13, v18, v19, v21, v22, (_DWORD)v23, v24, v27);
    cleanup_argloc();
    v20 = *(_QWORD *)(a1 + 1504);
    v29[0] = 0;
    v29[1] = 0;
    if ( !(unsigned __int8)sub_12CBC0(v28, v20, v25, 0, 0) || !(unsigned __int8)sub_1C02B0(v28, v29) )
      goto LABEL_25;
    sub_1C1230(v30, v10, v25, 0);
    if ( (unsigned int)sub_1BDD50(v30, v29) )
      break;
    cleanup_argloc();
    cleanup_argloc();
    sub_1181E0(v28);
LABEL_8:
    v8 += 80;
    if ( v27 == v8 )
      return 1;
  }
  cleanup_argloc();
LABEL_25:
  cleanup_argloc();
  sub_1181E0(v28);
  return v26;
}

