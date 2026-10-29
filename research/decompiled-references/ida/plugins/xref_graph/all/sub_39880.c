unsigned __int64 __fastcall sub_39880(__int64 a1, __m128 a2, __m128 a3)
{
  const char *v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // r15
  double v7; // xmm5_8
  __m128i v8; // xmm2
  __m128 v9; // xmm3
  __m128i v10; // xmm4
  __m128 v11; // xmm5
  double v12; // xmm0_8
  __m128 v13; // xmm6
  double v14; // xmm1_8
  __m128 v15; // xmm0
  __m128 v16; // xmm2
  __m128 v17; // xmm2
  __m128 v18; // xmm3
  const char *v19; // rax
  const char *v20; // rdx
  __m128 v21; // xmm4
  __m128d v22; // xmm2
  __m128d v23; // xmm2
  __m128d v24; // xmm5
  __int64 i; // rbp
  __int64 v26; // rax
  __int64 v27; // rdx
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm0_4
  __int128 v32; // xmm5
  unsigned __int64 v33; // xmm3_8
  float v34; // xmm1_4
  __m128i v35; // xmm4
  __m128 v36; // xmm2
  __m128 v37; // xmm0
  __m128 v38; // xmm0
  __m128i v39; // xmm3
  unsigned __int64 v40; // [rsp+0h] [rbp-E8h] BYREF
  unsigned __int64 x; // [rsp+8h] [rbp-E0h]
  __m128d v42; // [rsp+10h] [rbp-D8h] BYREF
  __m128 v43; // [rsp+20h] [rbp-C8h] BYREF
  __m128i v44; // [rsp+30h] [rbp-B8h] BYREF
  __m128i v45; // [rsp+40h] [rbp-A8h] BYREF
  void *ptr; // [rsp+50h] [rbp-98h] BYREF
  const char *v47; // [rsp+58h] [rbp-90h]
  __int64 v48; // [rsp+60h] [rbp-88h]
  double v49[3]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v50; // [rsp+88h] [rbp-60h]
  __int64 v51; // [rsp+90h] [rbp-58h]
  unsigned __int64 v52; // [rsp+A8h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  sub_1FB80((QT::QGraphicsScene *)&ptr, *(_QWORD *)(a1 + 96));
  v3 = *(const char **)(a1 + 96);
  sub_391C0(v49, (__int64)v3, *(double *)a2.m128_u64, a3);
  v4 = 0;
  v45.m128i_i64[1] = v51;
  if ( !v51 )
    goto LABEL_17;
  do
  {
    sub_384C0(a1, v49, v4);
    v3 = (const char *)v49;
    sub_38C90(a1, (__int64)v49, v4, a2, a3);
    v5 = v50;
    v6 = v50 + 80 * v4;
    v7 = *(double *)(v6 + 32);
    v8 = _mm_loadl_epi64((const __m128i *)(v6 + 64));
    v9 = (__m128)*(unsigned __int64 *)(v6 + 72);
    v10 = _mm_loadl_epi64((const __m128i *)(v6 + 24));
    if ( v7 < 0.0 )
    {
      v40 = 0x3F8000003F800000LL;
      if ( -v7 * 1.0e12 <= 0.0 )
        goto LABEL_4;
    }
    else
    {
      v40 = 0x3F8000003F800000LL;
      if ( 1.0e12 * v7 <= 0.0 )
        goto LABEL_4;
    }
    v29 = *(float *)(v6 + 28);
    v30 = *(float *)(v6 + 24);
    _mm_storel_ps((double *)v45.m128i_i64, (__m128)v8);
    _mm_storel_ps(v42.m128d_f64, (__m128)v10);
    x = v9.m128_u64[0];
    v40 = *(_QWORD *)&v7;
    v31 = hypotf(v30, v29);
    v32 = v40;
    v33 = x;
    v34 = v31 - 1.0;
    v35 = _mm_loadl_epi64((const __m128i *)&v42);
    v36 = (__m128)_mm_loadl_epi64(&v45);
    if ( (float)(v31 - 1.0) < 0.0 )
    {
      if ( v34 >= -0.0000099999997 )
      {
LABEL_36:
        v40 = 0x3F8000003F800000LL;
        goto LABEL_31;
      }
      if ( v31 >= 0.0 )
      {
        v40 = 0x3F8000003F800000LL;
        if ( v31 <= 0.0000099999997 )
          goto LABEL_31;
      }
    }
    else if ( v34 <= 0.0000099999997 )
    {
      goto LABEL_36;
    }
    v40 = 0x3F8000003F800000LL;
    v35 = (__m128i)_mm_div_ps((__m128)_mm_move_epi64(v35), _mm_loadh_ps((const double *)&v40));
LABEL_31:
    v37.m128_u64[1] = *((_QWORD *)&v32 + 1);
    _mm_storel_ps((double *)v45.m128i_i64, v36);
    _mm_storel_ps(v42.m128d_f64, (__m128)v35);
    x = v33;
    *(double *)v37.m128_u64 = log(*(double *)&v32);
    v8 = _mm_loadl_epi64(&v45);
    v37.m128_f32[0] = *(double *)v37.m128_u64;
    v9 = (__m128)x;
    v10 = (__m128i)_mm_mul_ps(
                     (__m128)_mm_move_epi64((__m128i)_mm_shuffle_ps(v37, v37, 224)),
                     (__m128)_mm_move_epi64(_mm_loadl_epi64((const __m128i *)&v42)));
LABEL_4:
    v11 = 0;
    v9.m128_f32[0] = *(double *)v9.m128_u64;
    v12 = *(double *)(a1 + 80);
    v13 = 0;
    v13.m128_f32[0] = *(double *)(a1 + 8);
    v14 = *(double *)a1 * v12;
    v11.m128_f32[0] = v12;
    v15 = (__m128)0x3FF0000000000000uLL;
    v42 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)(a1 + 80), (__m128d)*(unsigned __int64 *)(a1 + 80));
    *(double *)v15.m128_u64 = 1.0 - v14;
    v15.m128_f32[0] = 1.0 - v14;
    v16 = _mm_mul_ps(
            (__m128)_mm_move_epi64((__m128i)_mm_add_ps(
                                              (__m128)_mm_move_epi64((__m128i)_mm_mul_ps(
                                                                                (__m128)_mm_move_epi64((__m128i)_mm_div_ps((__m128)_mm_move_epi64((__m128i)_mm_sub_ps((__m128)_mm_move_epi64(v8), (__m128)_mm_move_epi64((__m128i)_mm_mul_ps((__m128)_mm_move_epi64((__m128i)_mm_mul_ps((__m128)_mm_move_epi64((__m128i)_mm_shuffle_ps(v9, v9, 224)), (__m128)_mm_move_epi64(v10))), (__m128)_mm_move_epi64((__m128i)_mm_shuffle_ps(v13, v13, 224)))))), _mm_loadh_ps((const double *)&v40))),
                                                                                (__m128)_mm_move_epi64((__m128i)_mm_shuffle_ps(v11, v11, 224)))),
                                              (__m128)_mm_loadl_epi64((const __m128i *)(v6 + 56)))),
            (__m128)_mm_move_epi64((__m128i)_mm_shuffle_ps(v15, v15, 224)));
    LODWORD(x) = v16.m128_i32[0];
    a2 = (__m128)v16.m128_u32[0];
    a3 = _mm_shuffle_ps(v16, v16, 229);
    _mm_storel_ps((double *)v44.m128i_i64, v16);
    v43 = v16;
    v45.m128i_i32[0] = a3.m128_i32[0];
    *(double *)a2.m128_u64 = hypotf(v16.m128_f32[0], a3.m128_f32[0]);
    if ( *(double *)(a1 + 40) <= *(double *)a2.m128_u64 )
    {
      a3 = (__m128)v45.m128i_u32[0];
      v17 = v43;
      v18 = (__m128)_mm_loadl_epi64(&v44);
      if ( v48 > 0 )
      {
        v3 = &v47[8 * v48];
        v19 = v47;
        while ( 1 )
        {
          v20 = v19;
          if ( v3 == v19 )
            break;
          v19 += 8;
          if ( *(_QWORD *)v6 == *((_QWORD *)v19 - 1) )
          {
            if ( v20 - v47 == -8 )
              break;
            goto LABEL_26;
          }
        }
      }
      v21 = (__m128)*(unsigned __int64 *)(a1 + 48);
      if ( *(double *)a2.m128_u64 <= *(double *)v21.m128_u64 )
        goto LABEL_10;
      v38 = (__m128)(unsigned int)x;
      v21.m128_f32[0] = *(double *)v21.m128_u64;
      v44 = (__m128i)v43;
      _mm_storel_ps((double *)v43.m128_u64, v18);
      _mm_storel_ps((double *)v45.m128i_i64, _mm_shuffle_ps(v21, v21, 224));
      v38.m128_f32[0] = hypotf(v38.m128_f32[0], a3.m128_f32[0]);
      v39 = _mm_loadl_epi64((const __m128i *)&v43);
      a3 = v38;
      a3.m128_f32[0] = v38.m128_f32[0] - 1.0;
      if ( (float)(v38.m128_f32[0] - 1.0) < 0.0 )
      {
        if ( a3.m128_f32[0] >= -0.0000099999997 )
          goto LABEL_39;
        if ( v38.m128_f32[0] >= 0.0 )
        {
          a3 = (__m128)0x3727C5ACu;
          v39 = 0;
          if ( v38.m128_f32[0] <= 0.0000099999997 )
            goto LABEL_39;
        }
      }
      else if ( a3.m128_f32[0] <= 0.0000099999997 )
      {
LABEL_39:
        a2 = (__m128)_mm_loadl_epi64(&v45);
        v17 = _mm_mul_ps((__m128)_mm_move_epi64(v39), a2);
        v18 = v17;
LABEL_10:
        v22 = _mm_cvtps_pd(v17);
        goto LABEL_11;
      }
      a2 = (__m128)_mm_loadl_epi64(&v45);
      v17 = _mm_mul_ps(
              (__m128)_mm_move_epi64((__m128i)_mm_div_ps(
                                                (__m128)_mm_move_epi64(v44),
                                                _mm_loadh_ps((const double *)&v40))),
              a2);
      v18 = v17;
      goto LABEL_10;
    }
LABEL_26:
    v22 = 0;
    v18 = 0;
LABEL_11:
    v23 = _mm_mul_pd(v22, v42);
    v24 = *(__m128d *)(v6 + 8);
    _mm_storel_ps((double *)(v6 + 56), v18);
    ++v4;
    *(__m128d *)(v6 + 40) = _mm_add_pd(v23, v24);
  }
  while ( v45.m128i_i64[1] != v4 );
  for ( i = v5 + 80 * v51; i != v5; *(_QWORD *)(v26 + 120) = v27 )
  {
    while ( !(unsigned __int8)sub_28A00(*(_QWORD *)v5) )
    {
      v5 += 80;
      if ( i == v5 )
        goto LABEL_17;
    }
    v3 = (const char *)(v5 + 40);
    sub_28900(*(_QWORD *)v5, (__m128d *)(v5 + 40));
    v26 = *(_QWORD *)v5;
    v27 = *(_QWORD *)(v5 + 56);
    v5 += 80;
  }
LABEL_17:
  if ( v50 )
  {
    v51 = 0;
    qfree(v50, v3);
  }
  if ( *(_QWORD *)&v49[0] )
  {
    v49[1] = 0.0;
    qfree(*(_QWORD *)&v49[0], v3);
  }
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  return v52 - __readfsqword(0x28u);
}

