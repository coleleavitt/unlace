__int64 __fastcall sub_22850(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        double a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8)
{
  __m128 v10; // xmm1
  __m128 v11; // xmm0
  __int64 v12; // rdx
  __int64 v13; // xmm3_8
  unsigned __int64 v14; // xmm4_8
  __int64 v15; // rsi
  char *v16; // rdi
  __int64 v17; // r9
  __int64 v18; // r8
  char *v19; // r10
  unsigned __int64 v20; // r14
  signed __int64 v21; // rbp
  __int64 *v22; // r12
  __int64 *v23; // r9
  __m128 v24; // xmm1
  __m128i v25; // xmm0
  __int64 *v26; // rbx
  __int64 *v27; // r12
  __int64 v28; // rsi
  unsigned __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 *v31; // rcx
  __int64 v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 *v36; // r8
  __m128 si128; // xmm1
  __m128i v38; // xmm0
  __int64 v39; // r10
  __int64 *v40; // rbx
  __int64 *v41; // r12
  __int64 v42; // rsi
  __int64 v43; // rdx
  unsigned __int64 *v44; // rcx
  unsigned __int64 v45; // rcx
  __int64 *v47; // rdx
  __int64 v48; // rdi
  __int64 v49; // rax
  __m128i v50; // xmm0
  __int64 v51; // rdx
  __int64 v52; // [rsp+0h] [rbp-B8h]
  __int64 *v53; // [rsp+0h] [rbp-B8h]
  __int64 v54; // [rsp+0h] [rbp-B8h]
  __int64 v55; // [rsp+8h] [rbp-B0h]
  __int64 *v56; // [rsp+8h] [rbp-B0h]
  __int64 v57; // [rsp+8h] [rbp-B0h]
  __int64 v58; // [rsp+10h] [rbp-A8h]
  __int64 v59; // [rsp+10h] [rbp-A8h]
  __int64 v60; // [rsp+10h] [rbp-A8h]
  __int64 v61; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v62; // [rsp+20h] [rbp-98h]
  signed __int64 v63; // [rsp+28h] [rbp-90h]
  __m128 v64; // [rsp+30h] [rbp-88h] BYREF
  __m128i v65; // [rsp+40h] [rbp-78h]
  __m128 v66; // [rsp+50h] [rbp-68h] BYREF
  __m128i v67; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v68; // [rsp+78h] [rbp-40h]

  v68 = __readfsqword(0x28u);
  v10 = (__m128)_mm_loadu_si128(a3);
  v11 = (__m128)_mm_loadu_si128(a3 + 1);
  v12 = v10.m128_u64[0];
  v13 = _mm_movehl_ps(a7, v10).m128_u64[0];
  v14 = _mm_movehl_ps(a8, v11).m128_u64[0];
  v15 = v11.m128_u64[0];
  v16 = (char *)(v10.m128_u64[0] + 72);
  v61 = v14;
  v62 = v13;
  if ( v10.m128_u64[0] + 72 == v11.m128_u64[0] )
  {
    v16 = *(char **)(v14 + 8);
    v61 = v14 + 8;
    v62 = (unsigned __int64)v16;
    v15 = (__int64)(v16 + 504);
  }
  v17 = *(_QWORD *)(a2 + 40);
  v18 = *(_QWORD *)(a2 + 72);
  v58 = *(_QWORD *)(a2 + 32);
  v19 = *(char **)(a2 + 56);
  v52 = *(_QWORD *)(a2 + 16);
  v20 = 0x8E38E38E38E38E39LL * ((v58 - v52) >> 3);
  v21 = v20
      - 0x71C71C71C71C71C7LL * ((signed __int64)(v10.m128_u64[0] - v13) >> 3)
      + 7 * ((v14 == 0) + ((__int64)(v14 - v17) >> 3) - 1);
  v63 = v21;
  v55 = *(_QWORD *)(a2 + 48);
  if ( v21 >= (v20 - 0x71C71C71C71C71C7LL * ((v55 - (__int64)v19) >> 3) + 7 * ((v18 == 0) + ((v18 - v17) >> 3) - 1)) >> 1 )
  {
    if ( (char *)v55 != v16 )
    {
      v59 = *(_QWORD *)(a2 + 56);
      v53 = *(__int64 **)(a2 + 72);
      if ( v18 == v61 )
      {
        v66 = v10;
        v67 = (__m128i)v11;
        sub_22690(&v64, (__int64)v16, v55, (double *)v66.m128_u64);
      }
      else
      {
        v64 = v10;
        v65 = (__m128i)v11;
        sub_22690(&v66, (__int64)v16, v15, (double *)v64.m128_u64);
        v36 = v53;
        si128 = (__m128)_mm_load_si128((const __m128i *)&v66);
        v38 = _mm_load_si128(&v67);
        v39 = v59;
        if ( v53 != (__int64 *)(v61 + 8) )
        {
          v54 = v59;
          v60 = a2;
          v40 = (__int64 *)(v61 + 8);
          v41 = v36;
          do
          {
            v42 = *v40++;
            v64 = si128;
            v65 = v38;
            sub_22690(&v66, v42, v42 + 504, (double *)v64.m128_u64);
            si128 = (__m128)_mm_load_si128((const __m128i *)&v66);
            v38 = _mm_load_si128(&v67);
          }
          while ( v41 != v40 );
          v39 = v54;
          a2 = v60;
        }
        v66 = si128;
        v67 = v38;
        sub_22690(&v64, v39, v55, (double *)v66.m128_u64);
      }
      v16 = *(char **)(a2 + 48);
      v19 = *(char **)(a2 + 56);
    }
    if ( v16 == v19 )
    {
      operator delete(v16, 0x1F8u);
      v47 = (__int64 *)(*(_QWORD *)(a2 + 72) - 8LL);
      *(_QWORD *)(a2 + 72) = v47;
      v48 = *v47;
      v49 = *v47 + 504;
      *(_QWORD *)(a2 + 56) = *v47;
      *(_QWORD *)(a2 + 64) = v49;
      *(_QWORD *)(a2 + 48) = v48 + 432;
    }
    else
    {
      *(_QWORD *)(a2 + 48) = v16 - 72;
    }
    free_debug_event();
    v33 = _mm_loadu_si128((const __m128i *)(a2 + 16));
    v31 = *(__int64 **)(a2 + 40);
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 32);
    *(__m128i *)a1 = v33;
    v21 += 0x8E38E38E38E38E39LL * (_mm_sub_epi64(v33, _mm_srli_si128(v33, 8)).m128i_i64[0] >> 3);
    if ( v21 >= 0 )
      goto LABEL_14;
    goto LABEL_28;
  }
  if ( v52 != v10.m128_u64[0] )
  {
    v56 = *(__int64 **)(a2 + 40);
    if ( v17 == v14 )
    {
      v67.m128i_i64[0] = v15;
      v66.m128_u64[0] = (unsigned __int64)v16;
      v66.m128_u64[1] = v62;
      v67.m128i_i64[1] = v61;
      sub_22470(
        (__m128i *)&v64,
        v52,
        v10.m128_i64[0],
        (__m128i *)&v66,
        *(double *)v11.m128_u64,
        *(double *)v10.m128_u64,
        a6);
    }
    else
    {
      v64.m128_u64[0] = (unsigned __int64)v16;
      v65.m128i_i64[0] = v15;
      v64.m128_u64[1] = v62;
      v22 = (__int64 *)(v14 - 8);
      v65.m128i_i64[1] = v61;
      sub_22470(
        (__m128i *)&v66,
        v13,
        v10.m128_i64[0],
        (__m128i *)&v64,
        *(double *)v11.m128_u64,
        *(double *)v10.m128_u64,
        a6);
      v23 = v56;
      v24 = (__m128)_mm_load_si128((const __m128i *)&v66);
      v25 = _mm_load_si128(&v67);
      if ( v56 != v22 )
      {
        v57 = a2;
        v26 = v22;
        v27 = v23;
        do
        {
          v28 = *v26--;
          v64 = v24;
          v65 = v25;
          sub_22470(
            (__m128i *)&v66,
            v28,
            v28 + 504,
            (__m128i *)&v64,
            *(double *)v25.m128i_i64,
            *(double *)v24.m128_u64,
            a6);
          v24 = (__m128)_mm_load_si128((const __m128i *)&v66);
          v25 = _mm_load_si128(&v67);
        }
        while ( v27 != v26 );
        a2 = v57;
      }
      v66 = v24;
      v67 = v25;
      sub_22470((__m128i *)&v64, v52, v58, (__m128i *)&v66, *(double *)v25.m128i_i64, *(double *)v24.m128_u64, a6);
    }
    v12 = *(_QWORD *)(a2 + 16);
    v58 = *(_QWORD *)(a2 + 32);
  }
  if ( v12 != v58 - 72 )
  {
    free_debug_event();
    v29 = *(_QWORD *)(a2 + 24);
    v30 = *(_QWORD *)(a2 + 32);
    v31 = *(__int64 **)(a2 + 40);
    v32 = *(_QWORD *)(a2 + 16) + 72LL;
    *(_QWORD *)(a2 + 16) = v32;
    v33 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v32, (__m128i)v29);
    *(_QWORD *)(a1 + 16) = v30;
    *(__m128i *)a1 = v33;
    v21 += 0x8E38E38E38E38E39LL * ((__int64)(v32 - v29) >> 3);
    if ( v21 >= 0 )
    {
LABEL_14:
      v34 = v33.m128i_i64[0];
      goto LABEL_15;
    }
LABEL_28:
    v43 = ~(~v21 / 7);
LABEL_29:
    v44 = (unsigned __int64 *)&v31[v43];
    *(_QWORD *)(a1 + 24) = v44;
    v45 = *v44;
    v35 = v45 + 72 * (v21 - 7 * v43);
    *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64((__m128i)v45, (__m128i)(v45 + 504));
    goto LABEL_30;
  }
  free_debug_event();
  operator delete(*(void **)(a2 + 24), 0x1F8u);
  v31 = (__int64 *)(*(_QWORD *)(a2 + 40) + 8LL);
  *(_QWORD *)(a2 + 40) = v31;
  v34 = *v31;
  v50 = (__m128i)(unsigned __int64)*v31;
  v51 = *v31 + 504;
  *(_QWORD *)(a2 + 24) = *v31;
  *(_QWORD *)(a2 + 32) = v51;
  *(_QWORD *)(a2 + 16) = v34;
  *(_QWORD *)(a1 + 16) = v51;
  *(__m128i *)a1 = _mm_unpacklo_epi64(v50, v50);
LABEL_15:
  if ( v21 > 6 )
  {
    v43 = v21 / 7;
    goto LABEL_29;
  }
  *(_QWORD *)(a1 + 24) = v31;
  v35 = v34 + 72 * v63;
LABEL_30:
  *(_QWORD *)a1 = v35;
  return a1;
}

