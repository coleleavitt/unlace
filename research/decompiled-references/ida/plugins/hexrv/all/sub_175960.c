unsigned __int64 __fastcall sub_175960(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __m128i *v3; // rbx
  __m128i v4; // xmm0
  unsigned __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 8);
  v7 = __readfsqword(0x28u);
  v3 = *(__m128i **)a2;
  if ( 16 * v2 )
  {
    do
    {
      sub_175840(a1, (unsigned __int64 *)v3);
      v4 = _mm_loadu_si128(v3);
      v6 = _mm_add_epi64(v4, _mm_srli_si128(v4, 8)).m128i_u64[0];
      if ( v6 != -1 )
        sub_175840(a1, &v6);
      ++v3;
    }
    while ( v3 != (__m128i *)(*(_QWORD *)a2 + 16LL * *(_QWORD *)(a2 + 8)) );
  }
  return v7 - __readfsqword(0x28u);
}

