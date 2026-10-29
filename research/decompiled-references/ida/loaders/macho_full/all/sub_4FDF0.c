unsigned __int64 __fastcall sub_4FDF0(unsigned int a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 result; // rax
  unsigned int v7; // r14d
  __int64 v8; // r12
  signed int v9; // r8d
  unsigned int v10; // r11d
  char v11; // r11
  __int64 v12; // rdi
  int v13; // edx
  char v14; // bl
  int v15; // r10d
  unsigned __int64 v16; // rbp
  int v17; // esi
  unsigned __int16 v18; // ax
  unsigned __int64 v19; // rax
  int v20; // esi
  char v24; // [rsp+18h] [rbp-50h]

  v7 = a1;
  _BitScanReverse(&a1, a1);
  v24 = a1 ^ 0x1F;
  if ( a2 > 0 )
  {
    v8 = 0;
    do
    {
      v9 = *(unsigned __int16 *)(a3 + 2 * v8);
      if ( *(_WORD *)(a3 + 2 * v8) )
      {
        _BitScanReverse(&v10, v9);
        v11 = (v10 ^ 0x1F) - v24;
        v12 = a6;
        v13 = 0;
        v14 = *(_BYTE *)(a4 + v8);
        v15 = ((int)(2 * v7) >> v11) - v9;
        v16 = (unsigned __int64)*(unsigned int *)(a5 + 4 * v8) << 32;
        do
        {
          while ( 1 )
          {
            LOBYTE(v18) = 0;
            HIBYTE(v18) = v14;
            v19 = v16 | v18;
            if ( v15 <= v13 )
              break;
            v17 = v9 + v13;
            LOBYTE(v19) = v14 + v11;
            ++v13;
            v12 += 8;
            result = ((unsigned __int64)(unsigned __int16)((v17 << v11) - v7) << 16) | v19 & 0xFFFFFFFF0000FFFFLL;
            *(_QWORD *)(v12 - 8) = result;
            if ( v9 <= v13 )
              goto LABEL_8;
          }
          LOBYTE(v19) = v14 + v11 - 1;
          v20 = v13 - v15;
          ++v13;
          v12 += 8;
          result = ((unsigned __int64)(unsigned __int16)(v20 << (v11 - 1)) << 16) | v19 & 0xFFFFFFFF0000FFFFLL;
          *(_QWORD *)(v12 - 8) = result;
        }
        while ( v9 > v13 );
LABEL_8:
        a6 += 8LL * (unsigned int)(v9 - 1) + 8;
      }
      ++v8;
    }
    while ( a2 > (int)v8 );
  }
  return result;
}

