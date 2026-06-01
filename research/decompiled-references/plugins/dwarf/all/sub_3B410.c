__int64 __fastcall sub_3B410(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 *v4; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  const char *v9; // rsi
  __int64 *v10; // rax
  const char *v11; // rbp
  __int64 *v12; // rax
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  const char *v16; // rsi

  sub_39C30(a1);
  v2 = *(_QWORD *)(a1 + 88);
  if ( a1 == v2 || !v2 )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v4 = sub_34340(a1);
      v9 = src;
      if ( v4[1] )
        v9 = (const char *)*v4;
      sub_88B80((unsigned int)"Error parameter DIE %s resolving type\n", (_DWORD)v9, v5, v6, v7, v8);
    }
    return 5;
  }
  result = 0;
  if ( *(_BYTE *)(v2 + 142) == 5 )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v10 = sub_34340(v2);
      v11 = src;
      if ( v10[1] )
        v11 = (const char *)*v10;
      v12 = sub_34340(a1);
      v16 = src;
      if ( v12[1] )
        v16 = (const char *)*v12;
      sub_88B80(
        (unsigned int)"Error parameter DIE %s dependency DIE %s processing error\n",
        (_DWORD)v16,
        (_DWORD)v11,
        v13,
        v14,
        v15);
    }
    return 5;
  }
  return result;
}
