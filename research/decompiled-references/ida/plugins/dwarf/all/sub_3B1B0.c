__int64 __fastcall sub_3B1B0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rbp
  int v8; // eax
  unsigned __int64 v9; // rax
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
  _QWORD v23[5]; // [rsp+0h] [rbp-28h] BYREF

  v23[1] = __readfsqword(0x28u);
  sub_39C30(a1);
  v2 = *(_QWORD *)(a1 + 88);
  if ( !v2 || a1 == v2 )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v10 = sub_34340(a1);
      v15 = src;
      if ( v10[1] )
        v15 = (const char *)*v10;
      sub_88B80((unsigned int)"Error complex member DIE %s resolving type\n", (_DWORD)v15, v11, v12, v13, v14);
    }
    return 5;
  }
  if ( *(_BYTE *)(v2 + 142) == 5 )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v16 = sub_34340(v2);
      v17 = src;
      if ( v16[1] )
        v17 = (const char *)*v16;
      v18 = sub_34340(a1);
      v22 = src;
      if ( v18[1] )
        v22 = (const char *)*v18;
      sub_88B80(
        (unsigned int)"Error complex member DIE %s dependency DIE %s processing error\n",
        (_DWORD)v22,
        (_DWORD)v17,
        v19,
        v20,
        v21);
    }
    return 5;
  }
  if ( (*(_BYTE *)(v2 + 143) & 2) != 0 )
  {
    v3 = *(_QWORD *)(v2 + 96);
    if ( v3 )
      *(_QWORD *)(a1 + 88) = v3;
  }
  if ( !*(_DWORD *)(a1 + 136) )
    sub_345A0(a1, *(_DWORD *)(*(_QWORD *)(a1 + 88) + 136LL));
  v4 = *(_QWORD *)(a1 + 80);
  v5 = *(_QWORD *)(a1 + 104);
  v23[0] = 0;
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 144) + 88LL);
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *))(v6 + 176))(v5, a1 + 144, a1 + 152, v23);
  if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, _QWORD *))(v6 + 168))(*(_QWORD *)(a1 + 104), a1 + 160, v23) )
  {
    v8 = *(_DWORD *)(a1 + 136);
    if ( v8 )
    {
      v9 = (unsigned int)(8 * v8);
      if ( v9 > *(_QWORD *)(a1 + 160) )
        v9 = *(_QWORD *)(a1 + 160);
      *(_QWORD *)(a1 + 160) = v9;
    }
  }
  return 0;
}

