__int64 __fastcall sub_8580(_QWORD *a1, __int64 a2)
{
  unsigned int wide_byte; // eax
  _DWORD *v4; // r13
  int k; // r14d
  __int64 *v7; // r14
  const char *v8; // r15
  int i; // r13d
  __m128i v10; // xmm0
  _DWORD *v11; // rdx
  int j; // edi
  int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // [rsp+0h] [rbp-3Ch]

  if ( !a2 )
    return 0;
  wide_byte = get_wide_byte();
  ++*(_WORD *)(a2 + 26);
  v15 = wide_byte;
  if ( !(_BYTE)byte_1CC48 )
  {
    v7 = &qword_132C0;
    if ( __cxa_guard_acquire(&byte_1CC48) )
    {
      do
      {
        v8 = (const char *)v7[1];
        for ( i = 0; i < strlen(v8); ++i )
        {
          v10 = _mm_slli_epi32(_mm_loadl_epi64((const __m128i *)v7 + 16), 1u);
          v7[32] = v10.m128i_i64[0];
          if ( (unsigned __int8)(v8[i] - 48) <= 1u )
          {
            *((_DWORD *)v7 + 64) = _mm_cvtsi128_si32(v10) + 1;
            if ( v8[i] == 49 )
              *((_DWORD *)v7 + 65) = _mm_cvtsi128_si32(_mm_shuffle_epi32(v10, 229)) + 1;
          }
        }
        v11 = (_DWORD *)v7 + 9;
        for ( j = 0; j != 10; ++j )
        {
          while ( !v7[3 * j + 2] )
          {
LABEL_16:
            ++j;
            v11 += 6;
            if ( j == 10 )
              goto LABEL_22;
          }
          v13 = *(v11 - 1);
          v14 = 0;
          while ( !_bittest(&v13, v14) )
          {
            ++v14;
            ++*v11;
            if ( v14 == 24 )
              goto LABEL_16;
          }
          v11 += 6;
        }
LABEL_22:
        v7 += 33;
      }
      while ( v7 != (__int64 *)&off_1CB60 );
      __cxa_guard_release(&byte_1CC48);
    }
  }
  v4 = &off_16440;
  for ( k = 48; k != 148; ++k )
  {
    if ( (v4[64] & v15) == v4[65] )
    {
      *(_WORD *)(a2 + 24) = *(_WORD *)v4;
      *(_WORD *)(a2 + 26) = 1;
      a1[31] = a2 + 40;
      a1[32] = 0;
      a1[83] = 0;
      memset(
        (void *)((unsigned __int64)(a1 + 33) & 0xFFFFFFFFFFFFFFF8LL),
        0,
        8LL * (((unsigned int)a1 - (((_DWORD)a1 + 264) & 0xFFFFFFF8) + 672) >> 3));
      a1[32] = *(_QWORD *)(a2 + 16);
      if ( (unsigned __int8)sub_8150((__int64)a1, a2, (__int64)&off_16440 - 12672, v15, k, 0, 9) )
        return *(unsigned __int16 *)(a2 + 26);
    }
    v4 += 66;
  }
  return 0;
}

