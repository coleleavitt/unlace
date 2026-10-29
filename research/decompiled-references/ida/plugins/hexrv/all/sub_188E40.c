__int64 __fastcall sub_188E40(__int64 a1, _QWORD *a2, __int64 a3)
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
  __int64 v20; // rdi
  __int64 v21; // rbx
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __int64 v24; // rdi
  __m128i v26; // [rsp+0h] [rbp-68h] BYREF
  __int64 v27; // [rsp+10h] [rbp-58h] BYREF
  __int128 v28; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+28h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 568);
  v26.m128i_i64[0] = a3;
  v29 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 128);
  v28 = 0;
  v27 = 0;
  if ( v6 + v5 - 1 >= v5 )
  {
    v27 = qvector_reserve();
    *(__m128i *)(v27 + 16 * v28) = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v6);
    v9 = v27;
    v7 = *((_QWORD *)&v28 + 1);
    v8 = v28 + 1;
  }
  else
  {
    v7 = 0;
    v8 = 0;
    v9 = 0;
  }
  v10 = *(_QWORD *)(a1 + 208);
  v27 = 0;
  v28 = 0;
  if ( v10 )
  {
    *(_QWORD *)(a1 + 216) = 0;
    qfree();
    v11 = v27;
    *(_QWORD *)(a1 + 208) = v9;
    *(_QWORD *)(a1 + 216) = v8;
    *(_QWORD *)(a1 + 224) = v7;
    if ( v11 )
    {
      *(_QWORD *)&v28 = 0;
      qfree();
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
      v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL) & (v14 + *(_QWORD *)(a1 + 1440));
      *(_QWORD *)&v28 = v16 - v14;
      sub_312AD0(a1 + 208, &v27);
    }
    while ( v12 != v13 );
  }
  v18 = *(_QWORD *)(a1 + 1440) + v26.m128i_i64[0];
  v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL);
  *(_QWORD *)&v28 = *(_QWORD *)(a1 + 128) - v26.m128i_i64[0];
  v27 = v18 & v19;
  sub_312AD0(a1 + 208, &v27);
  sub_311BB0(a1 + 208, a1 + 184);
  v28 = 0;
  v27 = 0;
  v27 = qvector_reserve();
  *(__m128i *)(v27 + 16 * v28) = _mm_load_si128((const __m128i *)&xmmword_3FE260);
  v20 = *(_QWORD *)(a1 + 232);
  v21 = v27;
  v27 = 0;
  v22 = (__m128i)_mm_loadh_ps((const double *)&v28 + 1);
  v28 = 0;
  if ( v20 )
  {
    *(_QWORD *)(a1 + 240) = 0;
    v26 = v22;
    qfree();
    v23 = _mm_load_si128(&v26);
    v24 = v27;
    *(_QWORD *)(a1 + 232) = v21;
    *(__m128i *)(a1 + 240) = v23;
    if ( v24 )
    {
      *(_QWORD *)&v28 = 0;
      qfree();
    }
  }
  else
  {
    *(_QWORD *)(a1 + 232) = v21;
    *(__m128i *)(a1 + 240) = v22;
  }
  return sub_312B60(a1 + 232, a1 + 208);
}

