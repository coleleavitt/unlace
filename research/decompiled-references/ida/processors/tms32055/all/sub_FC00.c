__int64 __fastcall sub_FC00(__int64 a1, char a2, __m128i *a3, __int64 a4)
{
  _BYTE *v4; // rdi
  int v5; // eax
  const __m128i *v6; // rax

  v4 = (_BYTE *)(a4 + 41);
  v5 = 0;
  while ( *v4 )
  {
    ++v5;
    v4 += 40;
    if ( v5 == 6 )
      goto LABEL_4;
  }
  if ( v5 )
  {
LABEL_4:
    v6 = (const __m128i *)(a4 + 40LL * v5);
    *a3 = _mm_loadu_si128(v6);
    a3[1] = _mm_loadu_si128(v6 + 1);
    a3[2].m128i_i32[0] = v6[2].m128i_i32[0];
  }
  if ( (a2 & 0x20) != 0 )
  {
    a3[1].m128i_i16[4] = -32765;
    a3[1].m128i_i16[5] = -(a2 | 0xFFE0);
    return 4294934531LL;
  }
  else
  {
    a3[1].m128i_i16[5] = a2 & 0x3F;
    a3[1].m128i_i16[4] = -32767;
    return 4294934529LL;
  }
}

