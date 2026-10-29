__int64 __fastcall sub_1CFD60(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i v6; // xmm1
  __m128i v10; // xmm0
  __m128i v11; // xmm2
  __m128i v13; // xmm0
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128i v18; // xmm1
  _QWORD *v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // r14
  __m128i v25; // xmm1
  __m128i v26; // xmm0
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rbp
  __int64 v31; // rax
  __m128i v32; // [rsp+0h] [rbp-78h] BYREF
  __m128i v33; // [rsp+10h] [rbp-68h] BYREF
  __m128i v34; // [rsp+20h] [rbp-58h] BYREF
  _UNKNOWN **v35; // [rsp+30h] [rbp-48h]
  __int64 v36; // [rsp+38h] [rbp-40h]
  unsigned __int64 v37; // [rsp+48h] [rbp-30h]

  v6 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a3, (__m128i)(unsigned __int64)a3);
  v10 = _mm_loadu_si128((const __m128i *)(a1 + 128));
  v11 = _mm_loadl_epi64((const __m128i *)(a1 + 568));
  v37 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 80) += a3;
  *(_QWORD *)(a1 + 144) += a3;
  v13 = _mm_add_epi64(v10, v6);
  v14 = a1 + 184;
  *(__m128i *)(v14 - 56) = v13;
  v32 = v6;
  v34 = _mm_unpacklo_epi64(v11, v13);
  sub_1CED40(v14, a3, (unsigned __int64 *)&v34, a4, a5, a6);
  sub_1CED40(a1 + 272, a3, (unsigned __int64 *)&v34, v15, v16, v17);
  *(_QWORD *)(a1 + 576) += a3;
  v18 = _mm_load_si128(&v32);
  v19 = (_QWORD *)(a1 + 600);
  do
  {
    *v19 += a3;
    v19 += 4;
  }
  while ( (_QWORD *)(a1 + 728) != v19 );
  v20 = *(_QWORD *)(a1 + 1472);
  *(_QWORD *)(a1 + 704) = ~*(_QWORD *)(a1 + 696);
  if ( a4 )
  {
    v21 = *(_QWORD *)(a1 + 1480);
    v22 = v20 + 40 * v21;
    if ( v22 != v20 )
    {
      do
      {
        v23 = _mm_loadu_si128((const __m128i *)(v20 + 24));
        *(_QWORD *)(v20 + 8) += a3;
        v20 += 40;
        *(__m128i *)(v20 - 16) = _mm_add_epi64(v23, v18);
      }
      while ( v20 != v22 );
      v21 = *(_QWORD *)(a1 + 1480);
      v20 = *(_QWORD *)(a1 + 1472);
    }
    v24 = *(_QWORD *)a4;
    v25 = _mm_loadu_si128((const __m128i *)(a4 + 8));
    v26 = _mm_loadu_si128((const __m128i *)(a4 + 24));
    if ( *(_QWORD *)(a1 + 1488) < (unsigned __int64)(v21 + 1) )
    {
      v33 = v26;
      v32 = v25;
      v31 = qvector_reserve();
      v26 = _mm_load_si128(&v33);
      v25 = _mm_load_si128(&v32);
      *(_QWORD *)(a1 + 1472) = v31;
      v21 = *(_QWORD *)(a1 + 1480);
      v20 = v31;
    }
    v27 = v20 + 40 * v21;
    *(_QWORD *)v27 = v24;
    *(__m128i *)(v27 + 8) = v25;
    *(__m128i *)(v27 + 24) = v26;
    ++*(_QWORD *)(a1 + 1480);
    *(_QWORD *)(a1 + 152) += a3;
  }
  else
  {
    *(_QWORD *)(v20 + 16) += a3;
    *(_QWORD *)(*(_QWORD *)(a1 + 1472) + 32LL) += a3;
  }
  sub_188C20((_QWORD *)a1, *(_QWORD *)(*(_QWORD *)(a1 + 1472) + 8LL), *(_QWORD *)(a1 + 144) - *(int *)(a1 + 120));
  sub_1CFC50(a1, 0, a2, a3);
  v36 = a3;
  v28 = *(_QWORD *)(a1 + 432);
  v35 = &off_4B2410;
  v29 = v28 + 104LL * *(_QWORD *)(a1 + 440);
  while ( v29 != v28 )
  {
    v28 += 104;
    for_all_arglocs();
  }
  return 0;
}

