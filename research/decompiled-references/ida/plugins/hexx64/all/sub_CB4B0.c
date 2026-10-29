unsigned __int64 __fastcall sub_CB4B0(
        __int64 *a1,
        __m128i *a2,
        __int64 a3,
        unsigned int a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v13; // r8
  __int64 v14; // r13
  __int64 v15; // rax
  __m128 v16; // xmm0
  __int64 v17; // rbp
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r10
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __m128i v23; // xmm1
  __int64 v24; // r9
  __m128i v25; // xmm2
  __m128i v26; // xmm0
  __m128i v27; // xmm1
  __m128i si128; // xmm0
  __m128 v29; // xmm4
  __m128 v30; // xmm5
  __m128 v31; // xmm4
  __int64 v33; // r13
  __int64 v34; // r12
  unsigned __int64 v35; // r15
  signed int **v36; // r8
  __int64 v37; // rbx
  __int64 v38; // rbp
  __int64 *v39; // rdi
  __int64 v40; // r14
  __int64 v41; // rdx
  __m128i v43; // [rsp+10h] [rbp-D8h] BYREF
  __m128i *v44; // [rsp+20h] [rbp-C8h]
  signed int **v45; // [rsp+28h] [rbp-C0h]
  signed int **v46; // [rsp+30h] [rbp-B8h]
  __int64 v47; // [rsp+38h] [rbp-B0h]
  __m128 v48; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v49; // [rsp+50h] [rbp-98h] BYREF
  __m128 v50; // [rsp+60h] [rbp-88h] BYREF
  __m128i v51; // [rsp+70h] [rbp-78h]
  __m128i v52; // [rsp+80h] [rbp-68h] BYREF
  __m128i v53; // [rsp+90h] [rbp-58h]
  unsigned __int64 v54; // [rsp+A8h] [rbp-40h]

  v13 = a1[2];
  v14 = *a1;
  v15 = a1[3];
  v16 = (__m128)_mm_loadu_si128(a2);
  v54 = __readfsqword(0x28u);
  v17 = a2[1].m128i_i64[1];
  v45 = (signed int **)&v48;
  v18 = 0xAAAAAAAAAAAAAAABLL * ((v13 - v14) >> 2);
  v19 = _mm_movehl_ps(a10, v16).m128_u64[0];
  v44 = &v52;
  v20 = v16.m128_u64[0];
  if ( (__int64)(v18
               + 0xAAAAAAAAAAAAAAABLL * ((__int64)(v16.m128_u64[0] - v19) >> 2)
               + 42 * ((v17 == 0) + ((v17 - v15) >> 3) - 1)) > 16 )
  {
    v21 = v14;
    v22 = v17;
    while ( 1 )
    {
      v23 = _mm_loadl_epi64(a2 + 1);
      v24 = a1[1];
      v25 = _mm_unpacklo_epi64(v23, (__m128i)(unsigned __int64)v22);
      if ( !a3 )
        break;
      v50.m128_u64[0] = v21;
      v50.m128_u64[1] = v24;
      --a3;
      v51.m128i_i64[0] = v13;
      v51.m128i_i64[1] = v15;
      v52 = (__m128i)v16;
      v53 = v25;
      sub_C4100(v45, (signed int **)&v50, (signed int **)&v52, a4);
      v26 = _mm_loadu_si128(a2 + 1);
      v52 = _mm_loadu_si128(a2);
      v27 = _mm_load_si128(&v49);
      v53 = v26;
      si128 = _mm_load_si128((const __m128i *)&v48);
      v51 = v27;
      v50 = (__m128)si128;
      v43 = si128;
      sub_CB4B0(
        (__int64 *)&v50,
        &v52,
        a3,
        a4,
        *(double *)si128.m128i_i64,
        *(double *)v27.m128i_i64,
        *(double *)v25.m128i_i64,
        *(double *)&v22,
        v29,
        v30);
      v16 = (__m128)_mm_load_si128(&v43);
      *a2 = _mm_load_si128((const __m128i *)&v48);
      a9 = _mm_movehl_ps(v31, v16);
      v19 = a9.m128_u64[0];
      a2[1] = _mm_load_si128(&v49);
      v13 = a1[2];
      v22 = a2[1].m128i_i64[1];
      v21 = *a1;
      v15 = a1[3];
      v18 = 0xAAAAAAAAAAAAAAABLL * ((v13 - *a1) >> 2);
      v20 = v16.m128_u64[0];
      if ( (__int64)(v18
                   + 0xAAAAAAAAAAAAAAABLL * ((__int64)(v16.m128_u64[0] - a9.m128_u64[0]) >> 2)
                   + 42 * ((v22 == 0) + ((v22 - v15) >> 3) - 1)) <= 16 )
        return v54 - __readfsqword(0x28u);
    }
    v33 = v21;
    v34 = v20;
    v53.m128i_i64[1] = v15;
    v35 = v19;
    v43.m128i_i64[0] = v15;
    v52.m128i_i64[0] = v21;
    v52.m128i_i64[1] = v24;
    v47 = v24;
    v53.m128i_i64[0] = v13;
    v46 = (signed int **)v13;
    v48 = v16;
    v49.m128i_i64[0] = v23.m128i_i64[0];
    v49.m128i_i64[1] = v22;
    v50 = v16;
    v51.m128i_i64[0] = v23.m128i_i64[0];
    v51.m128i_i64[1] = v22;
    sub_CB120(
      v44,
      &v50,
      v45,
      a4,
      *(double *)v16.m128_u64,
      *(double *)v23.m128i_i64,
      *(double *)v25.m128i_i64,
      *(double *)&v22,
      a9);
    if ( (__int64)(v18
                 - 0x5555555555555555LL * ((__int64)(v34 - v35) >> 2)
                 + 42 * ((v22 == 0) + ((v22 - v43.m128i_i64[0]) >> 3) - 1)) > 1 )
    {
      v36 = v46;
      v46 = (signed int **)v18;
      v37 = v22;
      v38 = v43.m128i_i64[0];
      v43.m128i_i64[0] = v47;
      v45 = v36;
      do
      {
        v41 = v34;
        if ( v34 == v35 )
        {
          v35 = *(_QWORD *)(v37 - 8);
          v37 -= 8;
          v41 = v35 + 504;
        }
        v34 = v41 - 12;
        v39 = (__int64 *)v44;
        v50.m128_u64[0] = *(_QWORD *)(v41 - 12);
        v50.m128_i32[2] = *(_DWORD *)(v41 - 4);
        *(_QWORD *)(v41 - 12) = *(_QWORD *)v33;
        *(_DWORD *)(v41 - 4) = *(_DWORD *)(v33 + 8);
        v52.m128i_i64[0] = v33;
        v53.m128i_i64[1] = v38;
        v40 = (__int64)v46
            + 42 * (v37 == 0)
            + 42 * ((v37 - v38) >> 3)
            + 0xAAAAAAAAAAAAAAABLL * ((__int64)(v41 - 12 - v35) >> 2)
            - 42;
        v52.m128i_i64[1] = v43.m128i_i64[0];
        v53.m128i_i64[0] = (__int64)v45;
        sub_CA920(v39, 0, v40, v50.m128_i64[0], v50.m128_i32[2], a4);
      }
      while ( v40 > 1 );
    }
  }
  return v54 - __readfsqword(0x28u);
}

