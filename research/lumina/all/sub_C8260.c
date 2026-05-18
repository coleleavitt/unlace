__int16 __fastcall sub_C8260(__int64 a1)
{
  int v1; // edx
  __int16 *v2; // rax
  __int64 v3; // rcx
  __int16 *v4; // rdx
  __int64 v5; // r8
  int v6; // ecx
  __int64 v7; // rax
  int v8; // esi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int16 v11; // ax
  __int16 result; // ax
  __int16 i; // ax

  v1 = *(unsigned __int16 *)(a1 + 96);
  if ( (_WORD)v1 )
  {
    v2 = *(__int16 **)(a1 + 8);
    v3 = (unsigned int)(v1 - 1);
    v4 = v2 + 1;
    v5 = (__int64)&v2[v3 + 1];
    v6 = 0;
    while ( 1 )
    {
      v7 = *v2;
      v8 = 1;
      if ( (v7 & 0x8000u) == 0LL )
        v8 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 16 * v7 + 10);
      v6 += v8;
      v2 = v4;
      if ( (__int16 *)v5 == v4 )
        break;
      ++v4;
    }
    v9 = (unsigned int)(4 * v6);
    if ( (unsigned int)v9 > 7 )
    {
      _BitScanReverse64(&v10, v9);
      v9 >>= 60 - ((unsigned __int8)v10 ^ 0x3Fu);
      v11 = 10 * (60 - (v10 ^ 0x3F)) + 30;
LABEL_9:
      result = word_1BACD0[v9 & 7] + v11;
      *(_WORD *)(a1 + 92) = result;
      return result;
    }
    if ( (unsigned int)v9 > 1 )
    {
      for ( i = 40; ; i -= 10 )
      {
        v9 *= 2LL;
        if ( v9 > 7 )
          break;
      }
      v11 = i - 20;
      goto LABEL_9;
    }
  }
  *(_WORD *)(a1 + 92) = 0;
  return 0;
}
