unsigned __int64 __fastcall sub_7C150(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  const __m128i *v4; // rbx
  __int64 v5; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  __m128i v8; // xmm0
  __int64 v10; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v3 = pack_dd();
  sub_7B560(a2, (__int64)&v10, v3 - (_QWORD)&v10);
  v4 = *(const __m128i **)a1;
  v5 = *(_QWORD *)a1 + 16LL * *(_QWORD *)(a1 + 8);
  if ( v5 != *(_QWORD *)a1 )
  {
    v6 = 0;
    do
    {
      v7 = v4->m128i_i64[0];
      ++v4;
      sub_7B740(a2, v7 - v6);
      sub_7B740(a2, v4[-1].m128i_i64[1]);
      v8 = _mm_loadu_si128(v4 - 1);
      v6 = _mm_add_epi64(v8, _mm_srli_si128(v8, 8)).m128i_u64[0];
    }
    while ( (const __m128i *)v5 != v4 );
  }
  return v11 - __readfsqword(0x28u);
}

