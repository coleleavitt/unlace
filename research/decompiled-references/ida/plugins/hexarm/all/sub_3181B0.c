__int64 __fastcall sub_3181B0(_QWORD *a1, __int64 *a2, __m128i *a3)
{
  unsigned __int64 *v5; // rax
  unsigned int v6; // esi
  __m128i v7; // xmm0
  unsigned __int64 v8; // xmm0_8

  v5 = (unsigned __int64 *)sub_318130(
                             *a2,
                             *a1 + 16LL * a1[1],
                             a3,
                             (unsigned __int8 (__fastcall *)(_QWORD, __int64))sub_316C90);
  v6 = 0;
  *a2 = (__int64)v5;
  if ( v5 == (unsigned __int64 *)(*a1 + 16LL * a1[1]) )
    return v6;
  v7 = _mm_loadu_si128(a3);
  v6 = 1;
  v8 = _mm_add_epi64(v7, _mm_srli_si128(v7, 8)).m128i_u64[0];
  if ( !v8 )
    return v6;
  LOBYTE(v6) = *v5 < v8;
  return v6;
}

