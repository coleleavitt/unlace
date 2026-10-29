__int64 __fastcall sub_18D300(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r13
  __int64 v7; // r13
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // r13
  unsigned __int64 v13; // r14
  __int64 v14; // rsi
  __m128i v15; // xmm0
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rbx
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  __int64 v26; // rdi
  __m128i v28; // [rsp+0h] [rbp-68h] BYREF
  __int64 v29; // [rsp+10h] [rbp-58h] BYREF
  __int128 v30; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 568);
  v28.m128i_i64[0] = a3;
  v31 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 128);
  v30 = 0;
  v29 = 0;
  if ( v6 + v5 - 1 >= v5 )
  {
    v29 = qvector_reserve((__int64)&v29, 0, 1, 16);
    *(__m128i *)(v29 + 16 * v30) = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v6);
    v9 = v29;
    v7 = *((_QWORD *)&v30 + 1);
    v8 = v30 + 1;
  }
  else
  {
    v7 = 0;
    v8 = 0;
    v9 = 0;
  }
  v10 = *(_QWORD *)(a1 + 208);
  v29 = 0;
  v30 = 0;
  if ( v10 )
  {
    *(_QWORD *)(a1 + 216) = 0;
    qfree(v10);
    v11 = v29;
    *(_QWORD *)(a1 + 208) = v9;
    *(_QWORD *)(a1 + 216) = v8;
    *(_QWORD *)(a1 + 224) = v7;
    if ( v11 )
    {
      *(_QWORD *)&v30 = 0;
      qfree(v11);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 208) = v9;
    *(_QWORD *)(a1 + 216) = v8;
    *(_QWORD *)(a1 + 224) = v7;
  }
  v12 = *(_QWORD *)(a1 + 1480);
  v13 = 0;
  if ( v12 )
  {
    do
    {
      v17 = *(_QWORD *)(a1 + 1472) + 40 * v13;
      if ( v13 < a2[1] )
        v14 = *(_QWORD *)(*a2 + 8 * v13);
      else
        v14 = *(_QWORD *)(v17 + 24);
      v15 = _mm_loadu_si128((const __m128i *)(v17 + 8));
      v16 = _mm_add_epi64(v15, _mm_srli_si128(v15, 8)).m128i_u64[0];
      if ( *(_QWORD *)(a1 + 136) == v16 && (*(_BYTE *)(a1 + 1) & 1) != 0 )
        v16 = *(_QWORD *)(a1 + 128);
      ++v13;
      v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL) & (v14 + *(_QWORD *)(a1 + 1440));
      *(_QWORD *)&v30 = v16 - v14;
      sub_317BD0((__int64 *)(a1 + 208), (__m128i *)&v29);
    }
    while ( v12 != v13 );
  }
  v18 = *(_QWORD *)(a1 + 1440) + v28.m128i_i64[0];
  v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL);
  *(_QWORD *)&v30 = *(_QWORD *)(a1 + 128) - v28.m128i_i64[0];
  v29 = v18 & v19;
  sub_317BD0((__int64 *)(a1 + 208), (__m128i *)&v29);
  sub_316CB0((__int64 *)(a1 + 208), (__int64 **)(a1 + 184), v20, v21);
  v30 = 0;
  v29 = 0;
  v29 = qvector_reserve((__int64)&v29, 0, 1, 16);
  *(__m128i *)(v29 + 16 * v30) = _mm_load_si128((const __m128i *)&xmmword_424800);
  v22 = *(_QWORD *)(a1 + 232);
  v23 = v29;
  v29 = 0;
  v24 = (__m128i)_mm_loadh_ps((const double *)&v30 + 1);
  v30 = 0;
  if ( v22 )
  {
    *(_QWORD *)(a1 + 240) = 0;
    v28 = v24;
    qfree(v22);
    v25 = _mm_load_si128(&v28);
    v26 = v29;
    *(_QWORD *)(a1 + 232) = v23;
    *(__m128i *)(a1 + 240) = v25;
    if ( v26 )
    {
      *(_QWORD *)&v30 = 0;
      qfree(v26);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 232) = v23;
    *(__m128i *)(a1 + 240) = v24;
  }
  return sub_317C60((__int64 *)(a1 + 232), a1 + 208);
}

