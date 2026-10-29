__int64 __fastcall sub_194F0(__int64 a1, _DWORD *a2, __int64 a3, __int16 a4, unsigned int a5, int a6)
{
  unsigned int v9; // r15d
  int v10; // ebx
  int v11; // eax

  if ( *a2 != -1 )
    return 0xFFFFFFFFLL;
  if ( *(int *)(a3 + 36) > 0 )
  {
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      v11 = sub_19140(a3, v10);
      if ( v11 == -1 )
        return 4294967293LL;
      ++v10;
      v9 = v11 | (v9 << 8);
      if ( v10 >= *(_DWORD *)(a3 + 36) )
      {
        if ( v9 < a5 || v9 == -1 )
          return 4294967293LL;
        goto LABEL_9;
      }
    }
  }
  if ( a5 )
    return 4294967293LL;
  v9 = 0;
LABEL_9:
  if ( v9 >= a5 + a6 )
    return 4294967293LL;
  *(_WORD *)(a1 + 24) = a4;
  if ( !(unsigned __int8)sub_19200(a3, v9 - a5) )
    return 0xFFFFFFFFLL;
  *a2 = 0;
  return 1;
}

