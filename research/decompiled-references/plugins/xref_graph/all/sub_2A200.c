unsigned __int64 __fastcall sub_2A200(__m128d *a1, __m128d *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128d v6; // xmm4
  __m128d v7; // xmm5
  double v9; // xmm10_8
  double v10; // xmm0_8
  __m128d v11; // xmm2
  __m128d v12; // xmm3
  __m128 v13; // xmm6
  double v14; // xmm8_8
  double v15; // xmm1_8
  double v16; // xmm7_8
  __m128 si128; // xmm4
  int *v18; // rdi
  int *v19; // rsi
  unsigned __int64 *v20; // rdx
  double v21; // xmm5_8
  double v22; // xmm9_8
  double v23; // xmm0_8
  double v24; // xmm1_8
  int *v25; // rax
  unsigned __int64 *v26; // rbx
  unsigned __int64 *v27; // rax
  __m128d i; // xmm1
  __m128d v29; // xmm0
  __m128d v30; // kr00_16
  double v32; // xmm9_8
  double v33; // xmm11_8
  double v34; // xmm0_8
  double v35; // xmm9_8
  double v36; // xmm5_8
  __m128d v37; // [rsp+0h] [rbp-A8h]
  __m128d v38; // [rsp+10h] [rbp-98h]
  __m128d v39; // [rsp+20h] [rbp-88h]
  double v40; // [rsp+30h] [rbp-78h]
  double v41; // [rsp+38h] [rbp-70h]
  __m128d v42; // [rsp+40h] [rbp-68h]
  double v43; // [rsp+50h] [rbp-58h] BYREF
  double v44; // [rsp+58h] [rbp-50h] BYREF
  double v45; // [rsp+60h] [rbp-48h] BYREF
  double v46; // [rsp+68h] [rbp-40h] BYREF
  void *ptr[2]; // [rsp+70h] [rbp-38h] BYREF
  int *v48; // [rsp+80h] [rbp-28h]
  unsigned __int64 v49; // [rsp+88h] [rbp-20h]

  v6 = a2[1];
  v7 = *a2;
  v49 = __readfsqword(0x28u);
  v9 = v6.m128d_f64[0];
  v10 = _mm_unpackhi_pd(v7, v7).m128d_f64[0];
  v11 = _mm_add_pd(_mm_mul_pd(_mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL), v6), v7);
  v12 = _mm_sub_pd(*a1, v11);
  v13 = (__m128)v11;
  v14 = _mm_unpackhi_pd(v11, v11).m128d_f64[0];
  v15 = v12.m128d_f64[0];
  v16 = _mm_unpackhi_pd(v12, v12).m128d_f64[0];
  if ( v12.m128d_f64[0] == 0.0 )
  {
    si128 = 0;
    if ( v16 == 0.0 )
    {
      v19 = nullptr;
      goto LABEL_15;
    }
    v18 = nullptr;
    v19 = nullptr;
    v20 = nullptr;
  }
  else
  {
    v32 = (v7.m128d_f64[0] - v11.m128d_f64[0]) / v12.m128d_f64[0];
    if ( v32 <= 0.0 || (v33 = v32 * v16 + v14, v33 < v10) || _mm_unpackhi_pd(v6, v6).m128d_f64[0] + v10 < v33 )
    {
      si128 = 0;
      v19 = nullptr;
      v20 = nullptr;
      v18 = nullptr;
    }
    else
    {
      v42 = v11;
      v48 = nullptr;
      v41 = v11.m128d_f64[0];
      v40 = v14;
      v39 = v12;
      v38.m128d_f64[0] = v12.m128d_f64[0];
      v37.m128d_f64[0] = v16;
      v43 = (v7.m128d_f64[0] - v11.m128d_f64[0]) / v12.m128d_f64[0];
      *(_OWORD *)ptr = 0;
      sub_29EF0((int **)ptr, nullptr, (__int64 *)&v43, a4, a5, a6);
      si128 = (__m128)_mm_load_si128((const __m128i *)ptr);
      v19 = v48;
      v15 = v12.m128d_f64[0];
      v13 = (__m128)*(unsigned __int64 *)&v11.m128d_f64[0];
      if ( !si128.m128_u64[0] || (v18 = (int *)ptr[0], v20 = (unsigned __int64 *)ptr[1], *(int *)si128.m128_u64[0] > 1) )
      {
        *(__m128 *)ptr = si128;
        sub_29B10((__int64)ptr, 0, 0, 0, a5, a6);
        v16 = v37.m128d_f64[0];
        v15 = v38.m128d_f64[0];
        v12 = v39;
        v14 = v40;
        v13 = (__m128)*(unsigned __int64 *)&v41;
        v11 = v42;
        si128 = (__m128)_mm_load_si128((const __m128i *)ptr);
        v18 = (int *)ptr[0];
        v20 = (unsigned __int64 *)ptr[1];
        v19 = v48;
      }
      v9 = a2[1].m128d_f64[0];
      v7.m128d_f64[0] = a2->m128d_f64[0];
    }
    v34 = (v7.m128d_f64[0] + v9 - *(double *)v13.m128_u64) / v15;
    if ( v34 > 0.0 )
    {
      v35 = a2->m128d_f64[1];
      v36 = v34 * v16 + v14;
      if ( v36 >= v35 && v35 + a2[1].m128d_f64[1] >= v36 )
      {
        v42 = v11;
        v48 = v19;
        v41 = *(double *)v13.m128_u64;
        v40 = v14;
        v39 = v12;
        v38.m128d_f64[0] = v15;
        v37.m128d_f64[0] = v16;
        v44 = v34;
        *(__m128 *)ptr = si128;
        sub_29EF0((int **)ptr, v19, (__int64 *)&v44, a4, a5, a6);
        si128 = (__m128)_mm_load_si128((const __m128i *)ptr);
        v13 = (__m128)v13.m128_u64[0];
        v19 = v48;
        if ( !si128.m128_u64[0]
          || (v18 = (int *)ptr[0], v20 = (unsigned __int64 *)ptr[1], *(int *)si128.m128_u64[0] > 1) )
        {
          *(__m128 *)ptr = si128;
          sub_29B10((__int64)ptr, 0, 0, 0, a5, a6);
          v16 = v37.m128d_f64[0];
          v15 = v38.m128d_f64[0];
          v12 = v39;
          v14 = v40;
          v13 = (__m128)*(unsigned __int64 *)&v41;
          v11 = v42;
          si128 = (__m128)_mm_load_si128((const __m128i *)ptr);
          v18 = (int *)ptr[0];
          v20 = (unsigned __int64 *)ptr[1];
          v19 = v48;
        }
      }
    }
    if ( v16 == 0.0 )
      goto LABEL_13;
    v10 = a2->m128d_f64[1];
  }
  v21 = (v10 - v14) / v16;
  if ( v21 > 0.0 )
  {
    v22 = v21 * v15 + *(double *)v13.m128_u64;
    if ( v22 >= a2->m128d_f64[0] && a2->m128d_f64[0] + a2[1].m128d_f64[0] >= v22 )
    {
      v42 = v11;
      v48 = v19;
      v41 = *(double *)v13.m128_u64;
      v40 = v14;
      v39 = v12;
      v38.m128d_f64[0] = v15;
      v37.m128d_f64[0] = v16;
      v45 = (v10 - v14) / v16;
      *(__m128 *)ptr = si128;
      sub_29EF0((int **)ptr, v19, (__int64 *)&v45, a4, a5, a6);
      si128 = (__m128)_mm_load_si128((const __m128i *)ptr);
      v13 = (__m128)v13.m128_u64[0];
      v19 = v48;
      if ( !si128.m128_u64[0] || (v18 = (int *)ptr[0], v20 = (unsigned __int64 *)ptr[1], *(int *)si128.m128_u64[0] > 1) )
      {
        *(__m128 *)ptr = si128;
        sub_29B10((__int64)ptr, 0, 0, 0, a5, a6);
        v16 = v37.m128d_f64[0];
        v15 = v38.m128d_f64[0];
        v12 = v39;
        v14 = v40;
        v13 = (__m128)*(unsigned __int64 *)&v41;
        v11 = v42;
        si128 = (__m128)_mm_load_si128((const __m128i *)ptr);
        v18 = (int *)ptr[0];
        v20 = (unsigned __int64 *)ptr[1];
        v19 = v48;
      }
      v10 = a2->m128d_f64[1];
    }
  }
  v23 = (v10 + a2[1].m128d_f64[1] - v14) / v16;
  if ( v23 > 0.0 )
  {
    v24 = v15 * v23 + *(double *)v13.m128_u64;
    if ( v24 >= a2->m128d_f64[0] && a2->m128d_f64[0] + a2[1].m128d_f64[0] >= v24 )
    {
      v38 = v11;
      v48 = v19;
      v37 = v12;
      v46 = v23;
      *(__m128 *)ptr = si128;
      sub_29EF0((int **)ptr, v19, (__int64 *)&v46, a4, a5, a6);
      si128 = (__m128)_mm_load_si128((const __m128i *)ptr);
      v19 = v48;
      v25 = (int *)si128.m128_u64[0];
      if ( si128.m128_u64[0] )
      {
        v18 = (int *)ptr[0];
        v20 = (unsigned __int64 *)ptr[1];
        if ( *(int *)si128.m128_u64[0] <= 1 )
          goto LABEL_14;
      }
      *(__m128 *)ptr = si128;
      sub_29B10((__int64)ptr, 0, 0, 0, a5, a6);
      v12 = v37;
      v11 = v38;
      si128 = (__m128)_mm_load_si128((const __m128i *)ptr);
      v18 = (int *)ptr[0];
      v20 = (unsigned __int64 *)ptr[1];
      v19 = v48;
    }
  }
LABEL_13:
  v25 = (int *)si128.m128_u64[0];
  if ( !si128.m128_u64[0] )
  {
    v13 = (__m128)(unsigned __int64)v20;
    si128 = (__m128)_mm_unpacklo_epi64((__m128i)si128, (__m128i)(unsigned __int64)v20);
    goto LABEL_15;
  }
LABEL_14:
  if ( *v25 <= 1 )
  {
    v26 = (unsigned __int64 *)(_mm_movehl_ps(v13, si128).m128_u64[0] + 8LL * (_QWORD)v19);
    if ( *v18 > 1 )
      goto LABEL_16;
    goto LABEL_35;
  }
LABEL_15:
  v38 = v11;
  v48 = v19;
  v37 = v12;
  *(__m128 *)ptr = si128;
  sub_29B10((__int64)ptr, 0, 0, 0, a5, a6);
  si128 = (__m128)_mm_load_si128((const __m128i *)ptr);
  v19 = v48;
  v26 = (unsigned __int64 *)(_mm_movehl_ps(v13, si128).m128_u64[0] + 8LL * (_QWORD)v48);
  if ( !si128.m128_u64[0] || (v18 = (int *)ptr[0], v20 = (unsigned __int64 *)ptr[1], *(int *)ptr[0] > 1) )
  {
LABEL_16:
    v48 = v19;
    v38 = v11;
    v37 = v12;
    *(__m128 *)ptr = si128;
    sub_29B10((__int64)ptr, 0, 0, 0, a5, a6);
    v20 = (unsigned __int64 *)ptr[1];
    v18 = (int *)ptr[0];
    if ( ptr[1] == v26 )
    {
      i = (__m128d)*v26;
      goto LABEL_19;
    }
LABEL_17:
    v27 = v20 + 1;
    for ( i = (__m128d)*v20; v27 != v26; i = v29 )
    {
      v29 = (__m128d)*v27++;
      v29.m128d_f64[0] = fmin(v29.m128d_f64[0], i.m128d_f64[0]);
    }
LABEL_19:
    v37 = _mm_add_pd(_mm_mul_pd(_mm_unpacklo_pd(i, i), v12), v11);
    v30 = v37;
    if ( !v18 )
      return v49 - __readfsqword(0x28u);
    goto LABEL_20;
  }
LABEL_35:
  if ( v20 != v26 )
    goto LABEL_17;
  v37 = _mm_add_pd(_mm_mul_pd(_mm_unpacklo_pd((__m128d)*v20, (__m128d)*v20), v12), v11);
  v30 = v37;
LABEL_20:
  if ( !_InterlockedSub(v18, 1u) )
  {
    v38.m128d_f64[0] = v30.m128d_f64[1];
    v37.m128d_f64[0] = v30.m128d_f64[0];
    free(v18);
  }
  return v49 - __readfsqword(0x28u);
}
