unsigned __int64 __fastcall sub_79A00(
        __int64 *a1,
        const __m128i *a2,
        __int64 (__fastcall *a3)(const __m128i *, __int64 *))
{
  const __m128i *v5; // rbp
  const __m128i *v6; // rbx
  char v7; // al
  __int64 v8; // rcx
  __int64 v9; // r15
  __m128i v10; // xmm2
  __m128i v11; // xmm1
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r9
  __int64 v15; // r8
  unsigned __int64 v16; // r14
  __int64 v17; // rdi
  __m128i v18; // xmm0
  __int64 v19; // rbp
  __m128i v20; // xmm0
  __int64 v21; // rdi
  __int64 v22; // rbp
  __m128i v23; // xmm0
  __int64 v24; // rdi
  __int64 v25; // rdi
  __m128i v27; // xmm0
  const __m128i *v28; // r15
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  __int64 v31; // rdi
  __int64 v32; // r14
  __m128i v33; // xmm0
  __int64 v34; // rdi
  __int64 v35; // r14
  __m128i v36; // xmm0
  __m128i v37; // xmm0
  __int64 v38; // rax
  __int64 v39; // rdi
  __m128i v40; // xmm0
  __int64 v41; // rdi
  __m128i v42; // xmm1
  __int64 v43; // rax
  __m128i v44; // xmm1
  __int64 v45; // rdi
  __m128i v46; // [rsp+0h] [rbp-118h] BYREF
  const __m128i *v47; // [rsp+18h] [rbp-100h]
  __m128i v48; // [rsp+20h] [rbp-F8h] BYREF
  const __m128i *v49; // [rsp+30h] [rbp-E8h]
  __int64 v50; // [rsp+38h] [rbp-E0h]
  __m128i v51; // [rsp+40h] [rbp-D8h] BYREF
  __m128i v52; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+60h] [rbp-B8h]
  __int64 v54; // [rsp+68h] [rbp-B0h]
  __int64 v55; // [rsp+70h] [rbp-A8h]
  const __m128i *v56; // [rsp+78h] [rbp-A0h]
  __m128i v57; // [rsp+80h] [rbp-98h] BYREF
  __m128i v58; // [rsp+90h] [rbp-88h] BYREF
  __int64 v59; // [rsp+A0h] [rbp-78h]
  __m128i v60; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v61; // [rsp+B8h] [rbp-60h]
  __m128i v62; // [rsp+C0h] [rbp-58h] BYREF
  unsigned __int64 v63; // [rsp+D8h] [rbp-40h]

  v49 = a2;
  v63 = __readfsqword(0x28u);
  if ( a1 != (__int64 *)a2 && a2 != (const __m128i *)(a1 + 10) )
  {
    v5 = (const __m128i *)(a1 + 20);
    do
    {
      v6 = v5 - 5;
      v7 = a3(v5 - 5, a1);
      v8 = v5[-3].m128i_i64[0];
      v9 = v5[-2].m128i_i64[1];
      v47 = v5;
      v10 = _mm_loadu_si128((const __m128i *)((char *)v5 - 40));
      v11 = _mm_loadu_si128(v5 - 1);
      if ( v7 )
      {
        v12 = v5[-5].m128i_i64[0];
        v13 = v5[-5].m128i_i64[1];
        v14 = v5[-4].m128i_i64[0];
        v15 = v5[-4].m128i_i64[1];
        *(const __m128i *)((char *)&v5[-3] + 8) = 0;
        v5[-3].m128i_i64[0] = 0;
        v5[-2].m128i_i64[1] = 0;
        v16 = 0xCCCCCCCCCCCCCCCDLL * (((char *)v6 - (char *)a1) >> 4);
        v5[-1] = 0;
        if ( (char *)v6 - (char *)a1 > 0 )
        {
          v48.m128i_i64[0] = v13;
          v50 = v12;
          v53 = v15;
          v54 = v14;
          v55 = v8;
          v56 = v5;
          v51 = v11;
          v52 = v10;
          do
          {
            v17 = v6[2].m128i_i64[0];
            v6 -= 5;
            v18 = _mm_loadu_si128(v6);
            v19 = v6[2].m128i_i64[0];
            v6[2].m128i_i64[0] = 0;
            v6[5] = v18;
            v6[6] = _mm_loadu_si128(v6 + 1);
            v20 = _mm_loadu_si128((const __m128i *)((char *)v6 + 40));
            *(const __m128i *)((char *)&v6[2] + 8) = 0;
            if ( v17 )
            {
              v6[7].m128i_i64[1] = 0;
              v46 = v20;
              qfree(v17);
              v20 = _mm_load_si128(&v46);
            }
            v21 = v6[8].m128i_i64[1];
            v6[7].m128i_i64[0] = v19;
            *(__m128i *)((char *)v6 + 120) = v20;
            v22 = v6[3].m128i_i64[1];
            v23 = _mm_loadu_si128(v6 + 4);
            v6[3].m128i_i64[1] = 0;
            v6[4] = 0;
            if ( v21 )
            {
              v6[9].m128i_i64[0] = 0;
              v46 = v23;
              qfree(v21);
              v23 = _mm_load_si128(&v46);
            }
            v6[8].m128i_i64[1] = v22;
            v6[9] = v23;
            --v16;
          }
          while ( v16 );
          v13 = v48.m128i_i64[0];
          v12 = v50;
          v15 = v53;
          v11 = _mm_load_si128(&v51);
          v10 = _mm_load_si128(&v52);
          v14 = v54;
          v8 = v55;
          v5 = v56;
        }
        *a1 = v12;
        v24 = a1[4];
        a1[1] = v13;
        a1[2] = v14;
        a1[3] = v15;
        if ( v24 )
        {
          a1[5] = 0;
          v50 = v8;
          v48 = v10;
          v46 = v11;
          qfree(v24);
          v8 = v50;
          v10 = _mm_load_si128(&v48);
          v11 = _mm_load_si128(&v46);
        }
        v25 = a1[7];
        a1[4] = v8;
        *(__m128i *)(a1 + 5) = v10;
        if ( v25 )
        {
          a1[8] = 0;
          v46 = v11;
          qfree(v25);
          v11 = _mm_load_si128(&v46);
        }
        a1[7] = v9;
        *((__m128i *)a1 + 4) = v11;
      }
      else
      {
        v27 = _mm_loadu_si128(v5 - 5);
        v61 = v9;
        v28 = v5 - 10;
        v59 = v8;
        v57 = v27;
        v29 = _mm_loadu_si128(v5 - 4);
        v5[-3].m128i_i64[0] = 0;
        v58 = v29;
        v5[-2].m128i_i64[1] = 0;
        v60 = v10;
        *(const __m128i *)((char *)&v5[-3] + 8) = 0;
        v62 = v11;
        v5[-1] = 0;
        while ( (unsigned __int8)a3(&v57, v28->m128i_i64) )
        {
          v30 = _mm_loadu_si128(v28);
          v31 = v28[7].m128i_i64[0];
          v32 = v28[2].m128i_i64[0];
          v28[2].m128i_i64[0] = 0;
          v28[5] = v30;
          v28[6] = _mm_loadu_si128(v28 + 1);
          v33 = _mm_loadu_si128((const __m128i *)((char *)v28 + 40));
          *(const __m128i *)((char *)&v28[2] + 8) = 0;
          if ( v31 )
          {
            v28[7].m128i_i64[1] = 0;
            v46 = v33;
            qfree(v31);
            v33 = _mm_load_si128(&v46);
          }
          v34 = v28[8].m128i_i64[1];
          v28[7].m128i_i64[0] = v32;
          *(__m128i *)((char *)v28 + 120) = v33;
          v35 = v28[3].m128i_i64[1];
          v36 = _mm_loadu_si128(v28 + 4);
          v28[3].m128i_i64[1] = 0;
          v28[4] = 0;
          if ( v34 )
          {
            v28[9].m128i_i64[0] = 0;
            v46 = v36;
            qfree(v34);
            v36 = _mm_load_si128(&v46);
          }
          v28[8].m128i_i64[1] = v35;
          v28 -= 5;
          v28[14] = v36;
        }
        v37 = _mm_load_si128(&v57);
        v38 = v59;
        v59 = 0;
        v28[5] = v37;
        v39 = v28[7].m128i_i64[0];
        v28[6] = _mm_load_si128(&v58);
        v40 = _mm_loadu_si128(&v60);
        v60 = 0;
        if ( v39 )
        {
          v28[7].m128i_i64[1] = 0;
          v46.m128i_i64[0] = v38;
          v48 = v40;
          qfree(v39);
          v40 = _mm_load_si128(&v48);
          v38 = v46.m128i_i64[0];
        }
        v41 = v28[8].m128i_i64[1];
        *(__m128i *)((char *)v28 + 120) = v40;
        v42 = _mm_load_si128(&v62);
        v28[7].m128i_i64[0] = v38;
        v43 = v61;
        v62 = 0;
        v61 = 0;
        if ( v41 )
        {
          v28[9].m128i_i64[0] = 0;
          v46.m128i_i64[0] = v43;
          v48 = v42;
          qfree(v41);
          v44 = _mm_load_si128(&v48);
          v45 = v61;
          v28[8].m128i_i64[1] = v46.m128i_i64[0];
          v28[9] = v44;
          if ( v45 )
          {
            v62.m128i_i64[0] = 0;
            qfree(v45);
          }
        }
        else
        {
          v28[8].m128i_i64[1] = v43;
          v28[9] = v42;
        }
        if ( v59 )
        {
          v60.m128i_i64[0] = 0;
          qfree(v59);
        }
      }
      v5 += 5;
    }
    while ( v49 != v47 );
  }
  return v63 - __readfsqword(0x28u);
}

