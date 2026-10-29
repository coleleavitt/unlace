__int64 __fastcall sub_7F110(__int64 *a1, char **a2, double a3)
{
  int v4; // eax
  unsigned __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rbp
  __int64 v8; // r12
  char *v9; // rax
  char v10; // dl
  __int64 v12; // rsi
  __int64 v13; // rax

  v4 = sub_7D4F0(a2, a3);
  if ( v4 < 0 )
    return 0;
  v5 = a1[1];
  v6 = v4;
  if ( v5 < v4 )
  {
    v12 = *a1;
    if ( a1[2] < (unsigned __int64)v4 )
    {
      v13 = qvector_reserve((__int64)a1, v12, v4, 16);
      v5 = a1[1];
      *a1 = v13;
      v12 = v13;
    }
    memset((void *)(v12 + 16 * v5), 0, 16 * (v6 - v5));
    goto LABEL_4;
  }
  if ( v4 != v5 )
  {
LABEL_4:
    a1[1] = v6;
    v5 = v6;
  }
  v7 = *a1;
  v8 = *a1 + 16 * v5;
  if ( *a1 != v8 )
  {
    while ( *a2 < a2[1] )
    {
      *(_DWORD *)v7 = unpack_dd();
      if ( *a2 >= a2[1] )
      {
        if ( under_debugger )
          goto LABEL_22;
LABEL_17:
        sub_383060(0xC597u, a3);
      }
      *(_DWORD *)(v7 + 4) = unpack_dd();
      if ( *a2 >= a2[1] )
        break;
      *(_DWORD *)(v7 + 8) = unpack_dd();
      v9 = *a2;
      if ( *a2 >= a2[1] )
      {
        if ( !under_debugger )
          sub_383060(0xC596u, a3);
LABEL_22:
        BUG();
      }
      v10 = *v9;
      *a2 = v9 + 1;
      *(_BYTE *)(v7 + 12) = v10 != 0;
      v7 += 16;
      if ( v8 == v7 )
        return 1;
    }
    if ( under_debugger )
      goto LABEL_22;
    goto LABEL_17;
  }
  return 1;
}

