unsigned __int64 __fastcall sub_38C90(__int64 a1, __int64 a2, __int64 a3, __m128 a4, __m128 a5)
{
  __int64 v5; // rbp
  QT::QGraphicsItem *v6; // r13
  __int64 v7; // rbx
  __int64 v8; // r14
  __m128d v9; // xmm3
  __m128d v10; // xmm1
  unsigned __int64 v11; // xmm2_8
  QT::QGraphicsItem *v12; // r15
  __m128d v13; // xmm3
  __m128d v14; // xmm7
  double v15; // xmm2_8
  unsigned __int64 v16; // rcx
  __m128d v17; // xmm0
  __m128 v18; // xmm0
  __m128i v19; // xmm2
  float v20; // xmm1_4
  double v22; // xmm2_8
  unsigned __int64 v23; // xmm4_8
  unsigned __int64 v24; // xmm2_8
  double v25; // xmm6_8
  double v26; // xmm2_8
  unsigned __int64 v27; // xmm4_8
  __int64 v28; // xmm5_8
  double v29; // xmm2_8
  double v30; // xmm2_8
  double v31; // xmm2_8
  unsigned __int64 v32; // xmm5_8
  unsigned __int64 v33; // xmm2_8
  __m128d v34; // xmm1
  unsigned __int64 v35; // xmm4_8
  unsigned __int64 v36; // xmm2_8
  __m128i v37; // [rsp+0h] [rbp-78h] BYREF
  __m128d v38; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v39; // [rsp+20h] [rbp-58h]
  unsigned __int64 v40; // [rsp+28h] [rbp-50h]
  __int64 v41; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v42; // [rsp+38h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a2 + 24) + 80 * a3;
  v6 = *(QT::QGraphicsItem **)v5;
  v37.m128i_i64[0] = *(_QWORD *)(v5 + 64);
  v7 = *((_QWORD *)v6 + 12);
  v8 = v7 + 8LL * *((_QWORD *)v6 + 13);
  if ( v7 != v8 )
  {
    while ( 1 )
    {
      v12 = *(QT::QGraphicsItem **)(*(_QWORD *)v7 + 24LL);
      if ( v12 == v6 )
        v12 = *(QT::QGraphicsItem **)(*(_QWORD *)v7 + 16LL);
      sub_28850(v12);
      v13.m128d_f64[0] = *(double *)(v5 + 8);
      *(_QWORD *)&v14.m128d_f64[0] = a4.m128_u64[0];
      *(double *)a4.m128_u64 = v13.m128d_f64[0] - *(double *)a4.m128_u64;
      if ( v13.m128d_f64[0] == 0.0 || v14.m128d_f64[0] == 0.0 )
      {
        v15 = _mm_cmpgt_sd((__m128d)0LL, (__m128d)a4).m128d_f64[0];
        a4.m128_u64[0] = COERCE_UNSIGNED_INT64(-*(double *)a4.m128_u64) & *(_QWORD *)&v15
                       | ~*(_QWORD *)&v15 & a4.m128_u64[0];
        if ( *(double *)a4.m128_u64 > 1.0e-12 )
          goto LABEL_12;
      }
      else
      {
        v22 = _mm_cmpgt_sd((__m128d)0LL, (__m128d)a4).m128d_f64[0];
        v23 = COERCE_UNSIGNED_INT64(-*(double *)a4.m128_u64) & *(_QWORD *)&v22;
        v24 = ~*(_QWORD *)&v22 & a4.m128_u64[0];
        a4.m128_u64[0] = *(_QWORD *)(v5 + 8);
        v25 = 1.0e12 * COERCE_DOUBLE(v24 | v23);
        v26 = _mm_cmpgt_sd((__m128d)0LL, v14).m128d_f64[0];
        v27 = COERCE_UNSIGNED_INT64(-v14.m128d_f64[0]) & *(_QWORD *)&v26;
        v28 = ~*(_QWORD *)&v26 & *(_QWORD *)&v14.m128d_f64[0];
        v29 = _mm_cmpgt_sd((__m128d)0LL, v13).m128d_f64[0];
        if ( fmin(
               COERCE_DOUBLE(
                 COERCE_UNSIGNED_INT64(-v13.m128d_f64[0]) & *(_QWORD *)&v29
               | ~*(_QWORD *)&v29 & *(_QWORD *)&v13.m128d_f64[0]),
               COERCE_DOUBLE(v28 | v27)) < v25 )
          goto LABEL_12;
      }
      v9 = (__m128d)*(unsigned __int64 *)(v5 + 16);
      a4.m128_u64[1] = *(_QWORD *)&v9.m128d_f64[1];
      *(double *)a4.m128_u64 = v9.m128d_f64[0] - *(double *)a5.m128_u64;
      if ( *(double *)a5.m128_u64 == 0.0 || v9.m128d_f64[0] == 0.0 )
      {
        v10 = _mm_cmpgt_sd((__m128d)0LL, (__m128d)a4);
        v11 = COERCE_UNSIGNED_INT64(-*(double *)a4.m128_u64) & *(_QWORD *)&v10.m128d_f64[0];
        a5 = (__m128)_mm_andn_pd(v10, (__m128d)a4);
        a4.m128_u64[0] = v11 | a5.m128_u64[0];
        if ( COERCE_DOUBLE(v11 | a5.m128_u64[0]) > 1.0e-12 )
          goto LABEL_12;
LABEL_6:
        v7 += 8;
        v41 = v37.m128i_i64[0];
        sub_38420(a1, (double *)&v41);
        v37.m128i_i64[0] = v41;
        if ( v8 == v7 )
          break;
      }
      else
      {
        v30 = _mm_cmpgt_sd((__m128d)0LL, (__m128d)a4).m128d_f64[0];
        *(double *)a4.m128_u64 = COERCE_DOUBLE(
                                   COERCE_UNSIGNED_INT64(-*(double *)a4.m128_u64) & *(_QWORD *)&v30
                                 | ~*(_QWORD *)&v30 & a4.m128_u64[0])
                               * 1.0e12;
        v31 = _mm_cmpgt_sd((__m128d)0LL, (__m128d)a5).m128d_f64[0];
        v32 = COERCE_UNSIGNED_INT64(-*(double *)a5.m128_u64) & *(_QWORD *)&v31;
        v33 = ~*(_QWORD *)&v31 & a5.m128_u64[0];
        v34 = _mm_cmpgt_sd((__m128d)0LL, v9);
        v35 = v33;
        v36 = COERCE_UNSIGNED_INT64(-v9.m128d_f64[0]) & *(_QWORD *)&v34.m128d_f64[0];
        a5 = (__m128)_mm_andn_pd(v34, v9);
        if ( fmin(COERCE_DOUBLE(a5.m128_u64[0] | v36), COERCE_DOUBLE(v35 | v32)) >= *(double *)a4.m128_u64 )
          goto LABEL_6;
LABEL_12:
        sub_28850(v12);
        v16 = a4.m128_u64[0];
        v17 = (__m128d)_mm_loadu_si128((const __m128i *)(v5 + 8));
        v40 = a5.m128_u64[0];
        v39 = v16;
        v38 = v17;
        v18 = _mm_cvtpd_ps(_mm_sub_pd((__m128d)_mm_unpacklo_epi64((__m128i)v16, (__m128i)a5), v17));
        _mm_storel_ps((double *)&v37.m128i_i64[1], v18);
        v18.m128_f32[0] = hypotf(v18.m128_f32[0], _mm_shuffle_ps(v18, v18, 229).m128_f32[0]);
        v19 = _mm_loadl_epi64((const __m128i *)&v37.m128i_u64[1]);
        v20 = v18.m128_f32[0] - 1.0;
        if ( (float)(v18.m128_f32[0] - 1.0) < 0.0 )
        {
          if ( v20 >= -0.0000099999997 )
            goto LABEL_15;
          if ( v18.m128_f32[0] >= 0.0 && v18.m128_f32[0] <= 0.0000099999997 )
          {
            v19 = 0;
            goto LABEL_15;
          }
LABEL_14:
          v18 = _mm_loadh_ps((const double *)&xmmword_41020 + 1);
          v19 = (__m128i)_mm_div_ps((__m128)_mm_move_epi64(v19), v18);
          goto LABEL_15;
        }
        if ( v20 > 0.0000099999997 )
          goto LABEL_14;
LABEL_15:
        _mm_storel_ps((double *)&v37.m128i_i64[1], (__m128)v19);
        v7 += 8;
        QT::QLineF::length((QT::QLineF *)&v38);
        a5 = (__m128)_mm_loadl_epi64(&v37);
        *(double *)v18.m128_u64 = (*(double *)v18.m128_u64 - *(double *)(a1 + 32)) * *(double *)(a1 + 24);
        v18.m128_f32[0] = *(double *)v18.m128_u64;
        a4 = _mm_add_ps(
               (__m128)_mm_move_epi64((__m128i)_mm_mul_ps(
                                                 (__m128)_mm_move_epi64((__m128i)_mm_shuffle_ps(v18, v18, 224)),
                                                 (__m128)_mm_move_epi64(_mm_loadl_epi64((const __m128i *)&v37.m128i_u64[1])))),
               a5);
        _mm_storel_ps((double *)v37.m128i_i64, a4);
        if ( v8 == v7 )
          break;
      }
    }
  }
  *(_QWORD *)(v5 + 64) = v37.m128i_i64[0];
  return v42 - __readfsqword(0x28u);
}
