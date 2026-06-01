__int64 __fastcall sub_4FCE0(signed int a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v5; // rbp
  signed int v6; // r14d
  signed int v7; // r9d
  unsigned int v8; // r11d
  char v9; // r11
  __int64 v10; // r8
  int v11; // edx
  int v12; // r10d
  int v13; // esi
  unsigned __int16 v14; // ax
  int v15; // esi

  v4 = a4;
  _BitScanReverse((unsigned int *)&a4, a1);
  v5 = 0;
  v6 = 0;
  if ( a2 <= 0 )
    return 0;
  while ( 1 )
  {
    v7 = *(unsigned __int16 *)(a3 + 2 * v5);
    if ( *(_WORD *)(a3 + 2 * v5) )
      break;
LABEL_9:
    if ( a2 <= (int)++v5 )
      return 0;
  }
  v6 += v7;
  if ( a1 >= v6 )
  {
    _BitScanReverse(&v8, v7);
    v9 = (v8 ^ 0x1F) - (a4 ^ 0x1F);
    v10 = v4;
    v11 = 0;
    v12 = ((2 * a1) >> v9) - v7;
    do
    {
      while ( 1 )
      {
        HIBYTE(v14) = v5;
        if ( v12 <= v11 )
          break;
        v13 = v7 + v11;
        LOBYTE(v14) = v9;
        ++v11;
        v10 += 4;
        *(_DWORD *)(v10 - 4) = (((v13 << v9) - a1) << 16) | v14;
        if ( v7 <= v11 )
          goto LABEL_8;
      }
      LOBYTE(v14) = v9 - 1;
      v15 = v11 - v12;
      ++v11;
      v10 += 4;
      *(_DWORD *)(v10 - 4) = (v15 << (v9 - 1) << 16) | v14;
    }
    while ( v7 > v11 );
LABEL_8:
    v4 += 4LL * (unsigned int)(v7 - 1) + 4;
    goto LABEL_9;
  }
  return 0xFFFFFFFFLL;
}

