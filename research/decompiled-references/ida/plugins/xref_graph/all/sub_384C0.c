unsigned __int64 __fastcall sub_384C0(__int64 a1, double *a2, __int64 a3)
{
  __int64 v5; // r15
  __int64 v7; // rdx
  double v8; // r14
  const char *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  double v12; // xmm0_8
  bool v13; // zf
  __m128 v14; // xmm2
  __m128 v15; // xmm3
  __int64 v16; // rdi
  unsigned __int64 v17; // r14
  __m128d v18; // xmm1
  __m128d v19; // xmm5
  __m128d v20; // xmm0
  double v21; // xmm1_8
  unsigned __int64 v22; // rax
  __int64 *v23; // r13
  double v24; // rax
  __m128d v25; // xmm1
  __int64 v26; // rax
  __m128d v27; // xmm5
  __int64 v28; // r13
  __m128d v29; // xmm0
  double v30; // xmm1_8
  __m128i v31; // xmm0
  double v32; // xmm4_8
  __m128d v33; // xmm1
  float v34; // xmm6_4
  float v35; // xmm4_4
  float v36; // xmm0_4
  __m128i v38; // xmm0
  __m128d v39; // xmm1
  double v40; // xmm5_8
  float v41; // xmm5_4
  float v42; // xmm4_4
  float v43; // xmm0_4
  double v44; // xmm0_8
  double v45; // xmm4_8
  double v46; // xmm0_8
  double v47; // xmm4_8
  double v48; // xmm5_8
  double v49; // xmm4_8
  double v50; // xmm4_8
  double v51; // xmm0_8
  double v52; // xmm4_8
  double v53; // xmm5_8
  double v54; // xmm4_8
  double v55; // xmm4_8
  double v56; // xmm7_8
  __int64 v57; // rdx
  _QWORD *v58; // r9
  _QWORD *v59; // r8
  __int64 *v60; // r11
  __int64 v61; // r10
  double v62; // [rsp+8h] [rbp-C8h]
  __int64 v63; // [rsp+18h] [rbp-B8h]
  _QWORD *v64; // [rsp+20h] [rbp-B0h]
  _QWORD *v65; // [rsp+28h] [rbp-A8h]
  __int64 *v66; // [rsp+30h] [rbp-A0h]
  __int64 v67; // [rsp+40h] [rbp-90h] BYREF
  __int64 v68; // [rsp+48h] [rbp-88h] BYREF
  __int128 v69; // [rsp+50h] [rbp-80h]
  __m128d v70; // [rsp+68h] [rbp-68h] BYREF
  __m128i v71; // [rsp+78h] [rbp-58h]
  double v72; // [rsp+88h] [rbp-48h] BYREF
  unsigned __int64 v73; // [rsp+90h] [rbp-40h]

  v5 = *((_QWORD *)a2 + 3) + 80 * a3;
  v73 = __readfsqword(0x28u);
  v7 = *((_QWORD *)a2 + 1);
  v69 = 0;
  v68 = 0;
  if ( !v7 )
  {
    v8 = *a2;
    v9 = nullptr;
    v10 = 1;
    v70.m128d_f64[0] = v8;
LABEL_3:
    v68 = qvector_reserve(&v68, v9, v10, 8);
    v9 = (const char *)v68;
    v11 = v69;
    goto LABEL_4;
  }
  v9 = (const char *)qvector_reserve(&v68, 0, v7, 8);
  v8 = *a2;
  v68 = (__int64)v9;
  v11 = v69;
  v70.m128d_f64[0] = v8;
  v10 = v69 + 1;
  if ( *((_QWORD *)&v69 + 1) < (unsigned __int64)(v69 + 1) )
    goto LABEL_3;
LABEL_4:
  *(double *)&v9[8 * v11] = v8;
  v12 = *(double *)(a1 + 16);
  v13 = (_QWORD)v69 == -1;
  *(_QWORD *)&v69 = v69 + 1;
  v14 = (__m128)*(unsigned int *)(v5 + 64);
  v15 = (__m128)*(unsigned int *)(v5 + 68);
  v16 = v68;
  v62 = v12 * v12;
  if ( !v13 )
  {
    v17 = 0;
    do
    {
      while ( 1 )
      {
        v23 = *(__int64 **)(v16 + 8 * v17);
        v24 = *(double *)v23;
        if ( *v23 == -1 )
        {
          v70 = _mm_div_pd(
                  *(__m128d *)(v23 + 5),
                  _mm_unpacklo_pd((__m128d)(unsigned __int64)v23[7], (__m128d)(unsigned __int64)v23[7]));
          v38 = _mm_loadu_si128((const __m128i *)(v5 + 8));
          v71 = v38;
          QT::QLineF::length((QT::QLineF *)&v70);
          *(_QWORD *)&v39.m128d_f64[0] = v38.m128i_i64[0];
          v22 = v69;
          v15 = (__m128)v15.m128_u32[0];
          v14 = (__m128)v14.m128_u32[0];
          if ( *(double *)(a1 + 88) <= *((double *)v23 + 3) / *(double *)v38.m128i_i64 )
          {
            v57 = v23[8];
            v58 = v23 + 8;
            v59 = v23 + 12;
            v60 = &v67;
            if ( v57 )
              goto LABEL_44;
            while ( v59 != ++v58 )
            {
              v57 = *v58;
              if ( *v58 )
              {
LABEL_44:
                v9 = (const char *)v68;
                v61 = *(_QWORD *)a2 + 96 * v57;
                v67 = v61;
                if ( *((_QWORD *)&v69 + 1) < v22 + 1 )
                {
                  v66 = v60;
                  v65 = v58;
                  v64 = v59;
                  v63 = v61;
                  v68 = qvector_reserve(&v68, v68, v22 + 1, 8);
                  v9 = (const char *)v68;
                  v60 = v66;
                  v22 = v69;
                  v58 = v65;
                  v59 = v64;
                  v61 = v63;
                  v14 = (__m128)v14.m128_u32[0];
                  v15 = (__m128)v15.m128_u32[0];
                }
                *(_QWORD *)&v9[8 * v22] = v61;
                v22 = v69 + 1;
                *(_QWORD *)&v69 = v69 + 1;
              }
            }
          }
          else
          {
            v40 = *(double *)v38.m128i_i64 - 1.0;
            if ( *(double *)v38.m128i_i64 - 1.0 < 0.0 )
            {
              if ( v40 >= -1.0e-12 )
              {
LABEL_28:
                v41 = *(double *)&v71.m128i_i64[1] - v70.m128d_f64[1];
                v42 = *(double *)v71.m128i_i64 - v70.m128d_f64[0];
              }
              else
              {
                v55 = _mm_cmpgt_sd((__m128d)0LL, v39).m128d_f64[0];
                *(_QWORD *)&v56 = ~*(_QWORD *)&v55 & v38.m128i_i64[0]
                                | COERCE_UNSIGNED_INT64(-*(double *)v38.m128i_i64) & *(_QWORD *)&v55;
                v41 = 0.0;
                v42 = 0.0;
                if ( v56 > 1.0e-12 )
                  goto LABEL_40;
              }
            }
            else
            {
              if ( v40 <= 1.0e-12 )
                goto LABEL_28;
LABEL_40:
              v41 = (*(double *)&v71.m128i_i64[1] - v70.m128d_f64[1]) / *(double *)v38.m128i_i64;
              v42 = (*(double *)v71.m128i_i64 - v70.m128d_f64[0]) / *(double *)v38.m128i_i64;
            }
            v43 = *((double *)v23 + 7)
                * *(double *)(v5 + 72)
                * v62
                / (*(double *)v38.m128i_i64
                 * *(double *)v38.m128i_i64);
            v14.m128_f32[0] = v14.m128_f32[0] + (float)(v42 * v43);
            v15.m128_f32[0] = v15.m128_f32[0] + (float)(v43 * v41);
          }
          v16 = v68;
          goto LABEL_11;
        }
        if ( a3 != *(_QWORD *)&v24 )
          break;
LABEL_10:
        v22 = v69;
LABEL_11:
        if ( ++v17 >= v22 )
          goto LABEL_21;
      }
      v25.m128d_f64[0] = *(double *)(v5 + 8);
      v26 = *((_QWORD *)a2 + 3) + 80LL * *(_QWORD *)&v24;
      v27.m128d_f64[0] = *(double *)(v26 + 8);
      v28 = v26;
      v29.m128d_f64[0] = v25.m128d_f64[0] - v27.m128d_f64[0];
      if ( v25.m128d_f64[0] == 0.0 || v27.m128d_f64[0] == 0.0 )
      {
        v30 = _mm_cmpgt_sd((__m128d)0LL, v29).m128d_f64[0];
        if ( COERCE_DOUBLE(
               COERCE_UNSIGNED_INT64(-v29.m128d_f64[0]) & *(_QWORD *)&v30
             | ~*(_QWORD *)&v30 & *(_QWORD *)&v29.m128d_f64[0]) > 1.0e-12 )
          goto LABEL_17;
      }
      else
      {
        v45 = _mm_cmpgt_sd((__m128d)0LL, v29).m128d_f64[0];
        v46 = COERCE_DOUBLE(
                COERCE_UNSIGNED_INT64(-v29.m128d_f64[0]) & *(_QWORD *)&v45
              | ~*(_QWORD *)&v45 & *(_QWORD *)&v29.m128d_f64[0])
            * 1.0e12;
        v47 = _mm_cmpgt_sd((__m128d)0LL, v27).m128d_f64[0];
        *(_QWORD *)&v48 = COERCE_UNSIGNED_INT64(-v27.m128d_f64[0]) & *(_QWORD *)&v47
                        | ~*(_QWORD *)&v47 & *(_QWORD *)&v27.m128d_f64[0];
        v49 = _mm_cmpgt_sd((__m128d)0LL, v25).m128d_f64[0];
        if ( fmin(
               COERCE_DOUBLE(
                 COERCE_UNSIGNED_INT64(-v25.m128d_f64[0]) & *(_QWORD *)&v49
               | ~*(_QWORD *)&v49 & *(_QWORD *)&v25.m128d_f64[0]),
               v48) < v46 )
          goto LABEL_17;
      }
      v18.m128d_f64[0] = *(double *)(v5 + 16);
      v19.m128d_f64[0] = *(double *)(v26 + 16);
      v20.m128d_f64[0] = v18.m128d_f64[0] - v19.m128d_f64[0];
      if ( v18.m128d_f64[0] == 0.0 || v19.m128d_f64[0] == 0.0 )
      {
        v21 = _mm_cmpgt_sd((__m128d)0LL, v20).m128d_f64[0];
        if ( COERCE_DOUBLE(
               COERCE_UNSIGNED_INT64(-v20.m128d_f64[0]) & *(_QWORD *)&v21
             | ~*(_QWORD *)&v21 & *(_QWORD *)&v20.m128d_f64[0]) > 1.0e-12 )
          goto LABEL_17;
LABEL_9:
        v9 = (const char *)&v72;
        _mm_storel_ps(&v72, _mm_unpacklo_ps(v14, v15));
        sub_38420(a1, &v72);
        v14 = (__m128)LODWORD(v72);
        v16 = v68;
        v15 = (__m128)HIDWORD(v72);
        goto LABEL_10;
      }
      v50 = _mm_cmpgt_sd((__m128d)0LL, v20).m128d_f64[0];
      v51 = COERCE_DOUBLE(
              COERCE_UNSIGNED_INT64(-v20.m128d_f64[0]) & *(_QWORD *)&v50
            | ~*(_QWORD *)&v50 & *(_QWORD *)&v20.m128d_f64[0])
          * 1.0e12;
      v52 = _mm_cmpgt_sd((__m128d)0LL, v19).m128d_f64[0];
      *(_QWORD *)&v53 = COERCE_UNSIGNED_INT64(-v19.m128d_f64[0]) & *(_QWORD *)&v52
                      | ~*(_QWORD *)&v52 & *(_QWORD *)&v19.m128d_f64[0];
      v54 = _mm_cmpgt_sd((__m128d)0LL, v18).m128d_f64[0];
      if ( fmin(
             COERCE_DOUBLE(
               COERCE_UNSIGNED_INT64(-v18.m128d_f64[0]) & *(_QWORD *)&v54
             | ~*(_QWORD *)&v54 & *(_QWORD *)&v18.m128d_f64[0]),
             v53) >= v51 )
        goto LABEL_9;
LABEL_17:
      v70 = (__m128d)_mm_loadu_si128((const __m128i *)(v26 + 8));
      v31 = _mm_loadu_si128((const __m128i *)(v5 + 8));
      v71 = v31;
      QT::QLineF::length((QT::QLineF *)&v70);
      v32 = *(double *)v31.m128i_i64 - 1.0;
      *(_QWORD *)&v33.m128d_f64[0] = v31.m128i_i64[0];
      v15 = (__m128)v15.m128_u32[0];
      v14 = (__m128)v14.m128_u32[0];
      if ( *(double *)v31.m128i_i64 - 1.0 < 0.0 )
      {
        if ( v32 >= -1.0e-12 )
        {
LABEL_24:
          v34 = *(double *)&v71.m128i_i64[1] - v70.m128d_f64[1];
          v35 = *(double *)v71.m128i_i64 - v70.m128d_f64[0];
          goto LABEL_20;
        }
        v44 = _mm_cmpgt_sd((__m128d)0LL, v33).m128d_f64[0];
        v34 = 0.0;
        v35 = 0.0;
        if ( COERCE_DOUBLE(
               ~*(_QWORD *)&v44 & *(_QWORD *)&v33.m128d_f64[0]
             | COERCE_UNSIGNED_INT64(-v33.m128d_f64[0]) & *(_QWORD *)&v44) <= 1.0e-12 )
          goto LABEL_20;
      }
      else if ( v32 <= 1.0e-12 )
      {
        goto LABEL_24;
      }
      v34 = (*(double *)&v71.m128i_i64[1] - v70.m128d_f64[1]) / v33.m128d_f64[0];
      v35 = (*(double *)v71.m128i_i64 - v70.m128d_f64[0]) / v33.m128d_f64[0];
LABEL_20:
      ++v17;
      v16 = v68;
      v36 = *(double *)(v28 + 72) * *(double *)(v5 + 72) * v62 / (v33.m128d_f64[0] * v33.m128d_f64[0]);
      v14.m128_f32[0] = v14.m128_f32[0] + (float)(v35 * v36);
      v15.m128_f32[0] = v15.m128_f32[0] + (float)(v36 * v34);
    }
    while ( v17 < (unsigned __int64)v69 );
  }
LABEL_21:
  _mm_storel_ps((double *)(v5 + 64), _mm_unpacklo_ps(v14, v15));
  if ( v16 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v16, v9);
  }
  return v73 - __readfsqword(0x28u);
}

