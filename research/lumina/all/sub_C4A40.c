__int64 __fastcall sub_C4A40(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // eax
  __int16 v5; // r13
  __int64 v6; // r14
  unsigned __int8 **v7; // r12
  __int64 v8; // rbp
  __int64 v9; // r11
  __int64 v10; // rax
  _BYTE *v11; // r9
  unsigned __int8 *i; // r8
  __int64 v13; // rax
  __int64 v14; // rsi

  v4 = *(_DWORD *)(a2 + 40);
  if ( v4 <= 0 )
    return 0;
  v5 = *(_WORD *)(a1 + 54);
  v6 = a2 + 16LL * (unsigned int)(v4 - 1) + 88;
  v7 = (unsigned __int8 **)(a2 + 72);
  v8 = (unsigned int)(v5 - 1) + 1LL;
  while ( v5 <= 0 )
  {
LABEL_16:
    v7 += 2;
    if ( (unsigned __int8 **)v6 == v7 )
      return 0;
  }
  v9 = 0;
  while ( *(int *)(a3 + 4 * v9) < 0 )
  {
    if ( *(__int16 *)(a1 + 52) == (_DWORD)v9 )
    {
      if ( a4 )
        break;
      if ( ++v9 == v8 )
        goto LABEL_16;
    }
    else
    {
LABEL_15:
      if ( ++v9 == v8 )
        goto LABEL_16;
    }
  }
  v10 = *(_QWORD *)(a1 + 8) + 16 * v9;
  if ( *v7 )
  {
    v11 = *(_BYTE **)v10;
    for ( i = *v7; ; ++i )
    {
      v13 = (unsigned __int8)*v11;
      v14 = *i;
      if ( (_DWORD)v13 == (_DWORD)v14 )
      {
        if ( !*v11 )
          return 1;
      }
      else if ( byte_1BF000[v13] != byte_1BF000[v14] )
      {
        goto LABEL_15;
      }
      ++v11;
    }
  }
  if ( (*(_BYTE *)(v10 + 14) & 1) == 0 )
    goto LABEL_15;
  return 1;
}
