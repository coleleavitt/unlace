unsigned __int64 __fastcall sub_B510(
        _QWORD *a1,
        const __m128i *a2,
        unsigned __int8 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  const __m128i *v16; // rbx
  __int64 v17; // r8
  __int64 v18; // rbp
  double v19; // rax
  __m128i v20; // xmm2
  __m128i v21; // xmm1
  __m128i v22; // xmm0
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  _OWORD v26[2]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-20h]

  v14 = a2[1].m128i_u64[1];
  v27 = __readfsqword(0x28u);
  v15 = a2[1].m128i_i64[0];
  if ( v14 < v15 + 2 )
    goto LABEL_12;
  v16 = a2;
  a2 = (const __m128i *)(v15 + 4);
  if ( v14 < v15 + 4 )
  {
    v16[1].m128i_i64[0] = v15 + 2;
    goto LABEL_12;
  }
  v17 = v15 + 8;
  v16[1].m128i_i64[0] = (__int64)a2;
  if ( v14 < v15 + 8 )
    goto LABEL_12;
  a2 = (const __m128i *)(v15 + 12);
  v18 = *(unsigned int *)(v15 + 4);
  if ( v14 < v15 + 12 )
  {
    v16[1].m128i_i64[0] = v17;
    goto LABEL_12;
  }
  *(_QWORD *)&v19 = v15 + 16;
  if ( v14 < *(_QWORD *)&v19 )
  {
    v16[1].m128i_i64[0] = (__int64)a2;
    goto LABEL_12;
  }
  a2 = (const __m128i *)(*(_QWORD *)&v19 + v18);
  *(double *)v16[1].m128i_i64 = v19;
  v20 = (__m128i)(unsigned __int64)(*(_QWORD *)&v19 + v18);
  v21 = _mm_unpacklo_epi64((__m128i)*(unsigned __int64 *)&v19, v20);
  if ( v14 < *(_QWORD *)&v19 + v18
    || (unsigned __int64)a2 < *(_QWORD *)&v19
    || (v22 = _mm_loadl_epi64(v16),
        a2 = (const __m128i *)v26,
        v26[1] = v21,
        v26[0] = _mm_unpacklo_epi64(v22, (__m128i)*(unsigned __int64 *)&v19),
        sub_B350(
          a1,
          (unsigned __int64)v26,
          *(double *)v26,
          *(double *)v21.m128i_i64,
          *(double *)v20.m128i_i64,
          v19,
          a8,
          a9,
          a10,
          a11,
          a3,
          0,
          v17,
          a14),
        v23 = v16[1].m128i_u64[0],
        v24 = v23 + v18,
        v16[1].m128i_i64[1] < v23 + v18)
    || v24 < v23 )
  {
LABEL_12:
    sub_3660(a1, a2);
  }
  v16[1].m128i_i64[0] = v24;
  return v27 - __readfsqword(0x28u);
}

