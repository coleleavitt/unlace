__int64 __fastcall sub_3EA750(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        char *a12,
        __int64 a13,
        __int64 a14)
{
  unsigned __int16 v15; // di
  __int64 v16; // rax
  char *v17; // rsi
  __int64 v18; // rdx
  signed int v19; // eax
  signed int v20; // edx

  v15 = *(_WORD *)(a1 + 48);
  v16 = 308;
  v17 = (char *)&unk_415E60;
  while ( v16 > 0 )
  {
    while ( 1 )
    {
      a12 = &v17[8 * (v16 >> 1)];
      if ( *(_WORD *)a12 >= v15 )
        break;
      v17 = a12 + 8;
      v16 = v16 - 1 - (v16 >> 1);
      if ( v16 <= 0 )
        goto LABEL_5;
    }
    v16 >>= 1;
  }
LABEL_5:
  if ( v17 == (char *)&unk_416800 || v15 != *(_WORD *)v17 )
    return 0;
  v18 = *(_QWORD *)v17;
  *(_QWORD *)(a1 + 888) = *(_QWORD *)v17;
  v19 = WORD1(v18);
  v20 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL);
  if ( v19 <= v20 )
  {
    if ( !(_WORD)v19 )
    {
      if ( (*(_BYTE *)(a1 + 892) & 1) != 0 )
      {
LABEL_10:
        if ( (*(_BYTE *)(a1 + 52) & 4) != 0 )
        {
          switch ( *(_BYTE *)(a1 + 56) )
          {
            case 'd':
            case 'l':
              *(_WORD *)(a1 + 890) = 8;
              return 1;
            case 'p':
              return 0;
            case 's':
            case 'w':
              *(_WORD *)(a1 + 890) = 4;
              return 1;
            default:
              if ( !under_debugger )
                sub_37E160(0xCCB4u, *(double *)a2.m128_u64);
              goto LABEL_26;
          }
        }
        if ( !under_debugger )
          sub_37E160(0xCCB3u, *(double *)a2.m128_u64);
LABEL_26:
        BUG();
      }
      *(_WORD *)(a1 + 890) = v20;
    }
    return 1;
  }
  if ( (*(_BYTE *)(a1 + 892) & 1) != 0 )
  {
    if ( !(_WORD)v19 )
      goto LABEL_10;
    return 1;
  }
  sub_32C190(*(_QWORD **)(a1 + 8), *(_QWORD *)(a1 + 40), 0x32u, (__int64)a12, a1, a14, a2, a3, a4, a5, a6, a7, a8, a9);
  return 0;
}

