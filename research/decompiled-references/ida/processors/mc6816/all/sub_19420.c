__int64 __fastcall sub_19420(__int64 a1, _DWORD *a2, __int64 a3, __int16 a4, int a5)
{
  int v7; // ebx
  int v8; // r15d
  int v9; // eax
  int v11; // eax

  if ( *a2 != -1 )
    return 0xFFFFFFFFLL;
  if ( *(int *)(a3 + 36) > 0 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      v9 = sub_19140(a3, v8);
      if ( v9 == -1 )
        return 4294967293LL;
      ++v8;
      v7 = v9 | (v7 << 8);
      if ( v8 >= *(_DWORD *)(a3 + 36) )
      {
        if ( a5 != v7 || v7 == -1 )
          return 4294967293LL;
        goto LABEL_9;
      }
    }
  }
  if ( a5 )
    return 4294967293LL;
LABEL_9:
  *(_WORD *)(a1 + 24) = a4;
  v11 = *(_DWORD *)(a3 + 28) + *(unsigned __int16 *)(a1 + 26);
  if ( v11 <= 7 )
    *(_DWORD *)(a3 + 28) = v11;
  *a2 = 0;
  return 1;
}

