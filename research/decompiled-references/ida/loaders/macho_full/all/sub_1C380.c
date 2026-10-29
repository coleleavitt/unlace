__int64 __fastcall sub_1C380(_QWORD *a1, _QWORD *a2, unsigned __int64 *a3)
{
  const __m128i *v3; // rax
  const __m128i *v5; // rdi
  unsigned __int64 v6; // rdi
  unsigned int v7; // ecx
  __m128i v8; // xmm0
  unsigned __int64 v9; // rax

  v3 = (const __m128i *)a1[66];
  v5 = &v3[2 * a1[67]];
  if ( v3 == v5 )
    return 0;
  while ( (~(unsigned __int8)v3[1].m128i_i32[2] & 5) != 0 )
  {
    v3 += 2;
    if ( v5 == v3 )
      return 0;
  }
  if ( !v3 )
    return 0;
  v6 = a1[95];
  v7 = 0;
  if ( v6 != -1 && v6 >= v3->m128i_i64[0] )
  {
    if ( a2 )
      *a2 = v3->m128i_i64[0];
    if ( a3 )
    {
      v8 = _mm_loadu_si128(v3);
      v9 = _mm_add_epi64(v8, _mm_srli_si128(v8, 8)).m128i_u64[0];
      if ( v9 > a1[95] )
        v9 = a1[95];
      *a3 = v9;
    }
    return 1;
  }
  return v7;
}

