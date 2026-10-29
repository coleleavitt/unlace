unsigned __int64 __fastcall sub_B350(
        _QWORD *a1,
        unsigned __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        char a12,
        __int64 a13,
        __int64 a14)
{
  _QWORD *v14; // r12
  const __m128i *v15; // rbx
  int *v16; // rdx
  int v17; // esi
  _WORD *v18; // rdx
  unsigned __int64 v19; // rcx
  __int16 v20; // ax
  unsigned __int16 v21; // ax
  unsigned __int64 v22; // rax
  __m128 v23; // xmm1
  __m128i v24; // xmm0
  __m128 v25; // xmm3
  void *exception; // rdi
  __m128i v28[2]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v29; // [rsp+28h] [rbp-20h]

  v14 = a1;
  v29 = __readfsqword(0x28u);
  v15 = (const __m128i *)a2;
  if ( a12 )
  {
    v16 = *(int **)(a2 + 16);
    if ( *(_QWORD *)(a2 + 24) < (unsigned __int64)(v16 + 1) )
LABEL_15:
      sub_3660(a1, a2);
    v17 = *v16;
    v15[1].m128i_i64[0] = (__int64)(v16 + 1);
    if ( (unsigned int)(v17 - 1) > 1 )
    {
      sub_5800((__int64)"(unknown symbols signature %08X)\n", v17);
      exception = __cxa_allocate_exception(1u);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'bad_cv_t, nullptr);
    }
  }
  a1 = (_QWORD *)a1[27];
  v14[23] = -1;
  v14[24] = 0;
  v14[25] = -1;
  if ( a1 )
  {
    v14[28] = 0;
    qfree(a1);
    v14[27] = 0;
    v14[29] = 0;
  }
  v18 = (_WORD *)v15[1].m128i_i64[0];
  v19 = v15[1].m128i_u64[1];
  if ( v19 >= (unsigned __int64)v18 )
  {
    while ( (_DWORD)v19 != (_DWORD)v18 )
    {
      a2 = (unsigned __int64)(v18 + 1);
      if ( v19 < (unsigned __int64)(v18 + 1) )
        goto LABEL_15;
      v20 = *v18;
      a1 = v18 + 2;
      v15[1].m128i_i64[0] = a2;
      v21 = v20 - 2;
      if ( v19 < (unsigned __int64)(v18 + 2) )
        goto LABEL_15;
      a2 = (unsigned __int16)v18[1];
      v15[1].m128i_i64[0] = (__int64)a1;
      v22 = (unsigned __int64)a1 + v21;
      v23 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, (__m128i)v22);
      if ( v19 < v22 || v22 < (unsigned __int64)a1 )
        goto LABEL_15;
      v24 = _mm_loadl_epi64(v15);
      v15[1].m128i_i64[0] = v22;
      v25 = (__m128)(unsigned __int64)a1;
      a1 = v14;
      v28[1] = (__m128i)v23;
      v28[0] = _mm_unpacklo_epi64(v24, (__m128i)v25);
      sub_9B00(
        (unsigned __int64)v14,
        a2,
        v28,
        v19,
        a13,
        a14,
        *(double *)v28[0].m128i_i64,
        v23,
        (__m128)v22,
        v25,
        a7,
        a8,
        a9,
        a10);
      v18 = (_WORD *)v15[1].m128i_i64[0];
      v19 = v15[1].m128i_u64[1];
      if ( v19 < (unsigned __int64)v18 )
        break;
    }
  }
  qfree(v14[24]);
  v14[24] = 0;
  return v29 - __readfsqword(0x28u);
}
