void __fastcall sub_FF70(__int64 a1, char a2, __m128i *a3, __int64 a4)
{
  _BYTE *v4; // rsi
  int v5; // eax
  const __m128i *v6; // rax

  if ( (a2 & 1) != 0 )
  {
    v4 = (_BYTE *)(a4 + 41);
    v5 = 0;
    while ( *v4 )
    {
      ++v5;
      v4 += 40;
      if ( v5 == 6 )
        goto LABEL_5;
    }
    if ( v5 )
    {
LABEL_5:
      v6 = (const __m128i *)(a4 + 40LL * v5);
      *a3 = _mm_loadu_si128(v6);
      a3[1] = _mm_loadu_si128(v6 + 1);
      a3[2].m128i_i32[0] = v6[2].m128i_i32[0];
    }
    a3[2].m128i_i8[3] |= 4u;
  }
}

