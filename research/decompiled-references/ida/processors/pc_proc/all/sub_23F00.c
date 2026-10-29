unsigned __int64 __fastcall sub_23F00(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  __int64 v3; // rcx
  __m128i v5; // xmm0

  v1 = *(_QWORD *)(a1 + 16);
  if ( !v1 )
    return 0;
  v2 = *(_QWORD *)(a1 + 8);
  while ( 1 )
  {
    v3 = v1--;
    if ( (*(_BYTE *)(v2 + 32 * v1 + 26) & 1) == 0 )
      break;
    if ( !v1 )
      return 0;
  }
  v5 = _mm_loadu_si128((const __m128i *)(32 * v3 + v2 - 24));
  return _mm_add_epi64(v5, _mm_srli_si128(v5, 8)).m128i_u64[0];
}

