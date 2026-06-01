__int64 __fastcall sub_3A0F0(__int64 a1)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 scalar_bt; // rbp
  int tinfo_size; // eax
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 *v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  const char *v15; // rsi
  __int64 *v16; // rax
  const char *v17; // rbp
  __int64 *v18; // rax
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  const char *v22; // rsi
  int v23; // eax
  __int64 v24; // rax
  __int64 *v25; // rax
  __int64 v26; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v27[5]; // [rsp+10h] [rbp-28h] BYREF

  v27[1] = __readfsqword(0x28u);
  create_tinfo(a1 + 8, 1, 7, 0);
  sub_30CA0(a1);
  v2 = *(unsigned int *)(a1 + 136);
  if ( get_tinfo_size(0, *(_QWORD *)(a1 + 8), 0) < v2 )
    return 5;
  v3 = *(unsigned int *)(a1 + 136);
  if ( (_DWORD)v3 && v3 != get_tinfo_size(0, *(_QWORD *)(a1 + 8), 0) )
  {
    scalar_bt = (unsigned __int8)get_scalar_bt(*(unsigned int *)(a1 + 136));
    create_tinfo(a1 + 8, scalar_bt, 7, 0);
    tinfo_size = get_tinfo_size(0, *(_QWORD *)(a1 + 8), 0);
    sub_345A0(a1, tinfo_size);
    v27[0] = 0x4528FF010435BBCALL;
    v8 = sub_856E0(v27, a1 + 64);
    v9 = (__int64 *)sub_85620(v8, (unsigned int)scalar_bt);
    sub_349E0(a1, v9);
    *(_QWORD *)(a1 + 88) = a1;
    return 3;
  }
  sub_39C30(a1);
  v4 = *(_QWORD *)(a1 + 88);
  if ( !v4 )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v10 = sub_34340(a1);
      v15 = src;
      if ( v10[1] )
        v15 = (const char *)*v10;
      sub_88B80((unsigned int)"Error pointer DIE %s resolving type\n", (_DWORD)v15, v11, v12, v13, v14);
    }
    return 5;
  }
  if ( *(_BYTE *)(v4 + 142) == 5 )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v16 = sub_34340(v4);
      v17 = src;
      if ( v16[1] )
        v17 = (const char *)*v16;
      v18 = sub_34340(a1);
      v22 = src;
      if ( v18[1] )
        v22 = (const char *)*v18;
      sub_88B80((unsigned int)"Error pointer DIE %s dependency DIE %s\n", (_DWORD)v22, (_DWORD)v17, v19, v20, v21);
    }
    return 5;
  }
  result = 0;
  if ( a1 == v4 )
  {
    v23 = get_tinfo_size(0, *(_QWORD *)(a1 + 8), 0);
    sub_345A0(a1, v23);
    v26 = 0x4528FF010435BBCALL;
    v24 = sub_856E0(&v26, a1 + 64);
    v27[0] = 0x4E7B30A9EA4DB41LL;
    v25 = (__int64 *)sub_856E0(v24, v27);
    sub_349E0(a1, v25);
    return 3;
  }
  return result;
}

