__int64 __fastcall sub_3E620(__int64 a1, const double *a2, double a3, double a4, __m128i a5, __m128i a6)
{
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v9; // rdx
  double v10; // rsi
  unsigned int v11; // r13d
  __m128i v12; // xmm0
  __int64 v14; // rdx
  double v15; // rsi
  unsigned int v16; // r14d
  __int32 v17; // eax
  double v18; // rsi
  __m128i v19; // xmm2
  __m128i v20; // xmm1
  __m128i v21; // xmm0
  __int32 v22; // eax
  __m128i v23; // xmm0
  __m128i v24; // [rsp+0h] [rbp-98h] BYREF
  __int64 v25; // [rsp+10h] [rbp-88h] BYREF
  __m128i v26; // [rsp+18h] [rbp-80h]
  __m128i v27; // [rsp+30h] [rbp-68h] BYREF
  __m128i v28; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+58h] [rbp-40h]

  v6 = *((_QWORD *)a2 + 2);
  v7 = *((_QWORD *)a2 + 1);
  v29 = __readfsqword(0x28u);
  sub_744C0(&v27, *(_QWORD *)a2, v7);
  if ( v28.m128i_i8[0]
    || (v9 = v27.m128i_i64[1] + *((_QWORD *)a2 + 1),
        v10 = *a2,
        v11 = v27.m128i_i32[0],
        *((_QWORD *)a2 + 1) = v9,
        sub_744C0(&v27, *(_QWORD *)&v10, v9),
        v28.m128i_i8[0])
    || (v14 = v27.m128i_i64[1] + *((_QWORD *)a2 + 1),
        v15 = *a2,
        v16 = v27.m128i_i32[0],
        *((_QWORD *)a2 + 1) = v14,
        sub_744C0(&v27, *(_QWORD *)&v15, v14),
        v28.m128i_i8[0])
    || (v17 = v27.m128i_i32[0],
        v18 = *a2,
        *((_QWORD *)a2 + 1) += v27.m128i_i64[1],
        v24.m128i_i32[3] = v17,
        sub_74310(&v27, *(_QWORD *)&v18),
        v28.m128i_i8[0]) )
  {
    *(_QWORD *)a1 = v27.m128i_i64[0];
    v12 = _mm_loadu_si128((const __m128i *)&v27.m128i_u64[1]);
    *(_BYTE *)(a1 + 64) = 1;
    *(__m128i *)(a1 + 8) = v12;
  }
  else
  {
    *((_QWORD *)a2 + 1) += 4LL;
    v25 = *(_QWORD *)a2;
    v24.m128i_i64[0] = v27.m128i_i64[0];
    v26 = (__m128i)_mm_loadh_ps(a2 + 2);
    sub_3E180((__int64)&v27, &v25, *(double *)v27.m128i_i64, v26, a5, a6);
    v19 = _mm_loadl_epi64(&v27);
    v20 = _mm_loadu_si128((const __m128i *)&v27.m128i_u64[1]);
    v21 = _mm_loadl_epi64(&v24);
    if ( v28.m128i_i8[8] )
    {
      *(_BYTE *)(a1 + 64) = 1;
      *(_QWORD *)a1 = v19.m128i_i64[0];
      *(__m128i *)(a1 + 8) = v20;
    }
    else
    {
      v22 = v24.m128i_i32[3];
      *(_QWORD *)a1 = v6;
      *(__m128i *)(a1 + 24) = _mm_unpacklo_epi64(v21, v19);
      v23 = _mm_loadl_epi64(&v28);
      *(_QWORD *)(a1 + 40) = v20.m128i_i64[0];
      *(_DWORD *)(a1 + 16) = v22;
      *(_BYTE *)(a1 + 64) = 0;
      *(_QWORD *)(a1 + 8) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v11), _mm_cvtsi32_si128(v16)).m128i_u64[0];
      *(__m128i *)(a1 + 48) = _mm_unpackhi_epi64(v20, _mm_unpacklo_epi64(v23, v23));
    }
  }
  return a1;
}

