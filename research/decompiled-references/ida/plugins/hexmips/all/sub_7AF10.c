__int64 __fastcall sub_7AF10(__int64 *a1, char **a2)
{
  int v3; // eax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rbp
  __int64 v6; // rbp
  __int64 v7; // r12
  char *v8; // rax
  char v9; // dl
  __int64 v11; // rsi
  __int64 v12; // rax

  v3 = sub_792F0(a2);
  if ( v3 < 0 )
    return 0;
  v4 = a1[1];
  v5 = v3;
  if ( v4 < v3 )
  {
    v11 = *a1;
    if ( a1[2] < (unsigned __int64)v3 )
    {
      v12 = qvector_reserve();
      v4 = a1[1];
      *a1 = v12;
      v11 = v12;
    }
    memset((void *)(v11 + 16 * v4), 0, 16 * (v5 - v4));
    goto LABEL_4;
  }
  if ( v3 != v4 )
  {
LABEL_4:
    a1[1] = v5;
    v4 = v5;
  }
  v6 = *a1;
  v7 = *a1 + 16 * v4;
  if ( *a1 != v7 )
  {
    while ( *a2 < a2[1] )
    {
      *(_DWORD *)v6 = unpack_dd();
      if ( *a2 >= a2[1] )
      {
        if ( under_debugger )
          goto LABEL_22;
LABEL_17:
        sub_37E160(50583);
      }
      *(_DWORD *)(v6 + 4) = unpack_dd();
      if ( *a2 >= a2[1] )
        break;
      *(_DWORD *)(v6 + 8) = unpack_dd();
      v8 = *a2;
      if ( *a2 >= a2[1] )
      {
        if ( !under_debugger )
          sub_37E160(50582);
LABEL_22:
        BUG();
      }
      v9 = *v8;
      *a2 = v8 + 1;
      *(_BYTE *)(v6 + 12) = v9 != 0;
      v6 += 16;
      if ( v7 == v6 )
        return 1;
    }
    if ( under_debugger )
      goto LABEL_22;
    goto LABEL_17;
  }
  return 1;
}

