__int64 __fastcall sub_791C0(
        __m128i *a1,
        __m128i *a2,
        __m128i *a3,
        __int64 a4,
        __int64 a5,
        __m128i *a6,
        __int64 (__fastcall *a7)(__m128i *, __m128i *))
{
  __m128i *v7; // r14
  __m128i *v8; // r12
  __m128i *v9; // rbp
  __m128i *v10; // rbx
  __int64 result; // rax
  __m128i *v12; // r13
  __m128i *v13; // r15
  __int64 v14; // rcx
  __m128i v15; // xmm0
  __int64 v16; // rdi
  __int64 v17; // rcx
  __m128i v18; // xmm0
  __int64 v19; // rdi
  unsigned __int64 v20; // r15
  __int64 m128i_i64; // r13
  __int64 v22; // r15
  __m128i v23; // xmm0
  __int64 v24; // rdi
  __int64 v25; // r15
  __m128i v26; // xmm0
  __int64 v27; // rdi
  __int64 v28; // r15
  __m128i v29; // xmm0
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // r13
  unsigned __int64 v33; // rbx
  __int64 v34; // rbp
  __m128i v35; // xmm0
  __int64 v36; // rdi
  __int64 v37; // rbp
  __m128i v38; // xmm0
  __int64 v39; // rdi
  __m128i *v40; // r13
  __m128i *v41; // r15
  __int64 v42; // rcx
  __m128i v43; // xmm0
  __int64 v44; // rdi
  __int64 v45; // rcx
  __m128i v46; // xmm0
  __int64 v47; // rdi
  unsigned __int64 v48; // r15
  __m128i *v49; // r13
  __int64 v50; // r15
  __m128i v51; // xmm0
  __int64 v52; // rdi
  __int64 v53; // r15
  __m128i v54; // xmm0
  __int64 v55; // rdi
  __int64 v56; // r15
  __m128i v57; // xmm0
  __int64 v58; // rdi
  __int64 v59; // r15
  __m128i v60; // xmm0
  __int64 v61; // rdi
  __m128i *v62; // r13
  unsigned __int64 v63; // rbp
  __m128i v64; // xmm0
  __int64 v65; // r12
  __m128i v66; // xmm0
  __int64 v67; // rdi
  __int64 v68; // r12
  __m128i v69; // xmm0
  __int64 v70; // rdi
  unsigned __int64 v71; // r14
  __int64 *v72; // rbp
  __int128 v73; // xmm0
  __int64 *v74; // r12
  __int64 v75; // r13
  __m128i v76; // xmm1
  __int64 v77; // rdi
  __int64 v78; // r13
  __m128i v79; // xmm1
  __int64 v80; // rdi
  __m128i v81; // [rsp+0h] [rbp-78h] BYREF
  __m128i v82; // [rsp+10h] [rbp-68h] BYREF
  __m128i v83; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v84; // [rsp+38h] [rbp-40h]

  v7 = a6;
  v8 = a1;
  v9 = a2;
  v10 = a3;
  if ( a4 > a5 )
  {
    result = (char *)a3 - (char *)a2;
    v84 = 0xCCCCCCCCCCCCCCCDLL * (a3 - a2);
    if ( (char *)a3 - (char *)a2 > 0 )
    {
      v81.m128i_i64[0] = 0xCCCCCCCCCCCCCCCDLL * (result >> 4);
      v40 = a2;
      v41 = a6;
      do
      {
        *v41 = _mm_loadu_si128(v40);
        v41[1] = _mm_loadu_si128(v40 + 1);
        v42 = v40[2].m128i_i64[0];
        v43 = _mm_loadu_si128((__m128i *)((char *)v40 + 40));
        v40[2].m128i_i64[0] = 0;
        *(__m128i *)((char *)&v40[2] + 8) = 0;
        v44 = v41[2].m128i_i64[0];
        if ( v44 )
        {
          v41[2].m128i_i64[1] = 0;
          v82.m128i_i64[0] = v42;
          v83 = v43;
          qfree(v44);
          v43 = _mm_load_si128(&v83);
          v42 = v82.m128i_i64[0];
        }
        v41[2].m128i_i64[0] = v42;
        *(__m128i *)((char *)v41 + 40) = v43;
        v45 = v40[3].m128i_i64[1];
        v46 = _mm_loadu_si128(v40 + 4);
        v40[3].m128i_i64[1] = 0;
        v40[4] = 0;
        v47 = v41[3].m128i_i64[1];
        if ( v47 )
        {
          v41[4].m128i_i64[0] = 0;
          v83.m128i_i64[0] = v45;
          v82 = v46;
          qfree(v47);
          v45 = v83.m128i_i64[0];
          v46 = _mm_load_si128(&v82);
        }
        v41[3].m128i_i64[1] = v45;
        v40 += 5;
        v41 += 5;
        v41[-1] = v46;
        --v81.m128i_i64[0];
      }
      while ( v81.m128i_i64[0] );
      v48 = v84 - 1;
      if ( (__int64)(v84 - 1) < 0 )
        v48 = 0;
      v49 = &v7[5 * v48];
      result = (__int64)v49[5].m128i_i64;
      if ( a2 == v8 )
      {
        result -= (__int64)v7;
        v71 = 0xCCCCCCCCCCCCCCCDLL * (result >> 4);
        if ( result > 0 )
        {
          v72 = &v49[2].m128i_i64[1];
          v73 = 0;
          do
          {
            v74 = v72 - 5;
            v10 -= 5;
            *v10 = _mm_loadu_si128((const __m128i *)(v72 - 5));
            v10[1] = _mm_loadu_si128((const __m128i *)(v72 - 3));
            v75 = *(v72 - 1);
            *(v72 - 1) = 0;
            v76 = _mm_loadu_si128((const __m128i *)v72);
            *(_OWORD *)v72 = v73;
            v77 = v10[2].m128i_i64[0];
            if ( v77 )
            {
              v10[2].m128i_i64[1] = 0;
              v81 = v76;
              result = qfree(v77);
              v76 = _mm_load_si128(&v81);
              v73 = 0;
            }
            v10[2].m128i_i64[0] = v75;
            *(__m128i *)((char *)v10 + 40) = v76;
            v78 = v74[7];
            v74[7] = 0;
            v79 = _mm_loadu_si128((const __m128i *)(v72 + 3));
            *(_OWORD *)(v72 + 3) = v73;
            v80 = v10[3].m128i_i64[1];
            if ( v80 )
            {
              v10[4].m128i_i64[0] = 0;
              v81 = v79;
              result = qfree(v80);
              v79 = _mm_load_si128(&v81);
              v73 = 0;
            }
            v10[3].m128i_i64[1] = v78;
            v72 -= 10;
            v10[4] = v79;
            --v71;
          }
          while ( v71 );
        }
      }
      else if ( v7 != (__m128i *)result )
      {
        do
        {
          v9 -= 5;
          while ( 1 )
          {
            v10 -= 5;
            result = a7(v49, v9);
            if ( (_BYTE)result )
              break;
            *v10 = _mm_loadu_si128(v49);
            v10[1] = _mm_loadu_si128(v49 + 1);
            v56 = v49[2].m128i_i64[0];
            v57 = _mm_loadu_si128((__m128i *)((char *)v49 + 40));
            v49[2].m128i_i64[0] = 0;
            *(__m128i *)((char *)&v49[2] + 8) = 0;
            v58 = v10[2].m128i_i64[0];
            if ( v58 )
            {
              v10[2].m128i_i64[1] = 0;
              v81 = v57;
              result = qfree(v58);
              v57 = _mm_load_si128(&v81);
            }
            v10[2].m128i_i64[0] = v56;
            *(__m128i *)((char *)v10 + 40) = v57;
            v59 = v49[3].m128i_i64[1];
            v60 = _mm_loadu_si128(v49 + 4);
            v49[3].m128i_i64[1] = 0;
            v49[4] = 0;
            v61 = v10[3].m128i_i64[1];
            if ( v61 )
            {
              v10[4].m128i_i64[0] = 0;
              v81 = v60;
              result = qfree(v61);
              v60 = _mm_load_si128(&v81);
            }
            v10[3].m128i_i64[1] = v59;
            v10[4] = v60;
            if ( v7 == v49 )
              return result;
            v49 -= 5;
          }
          *v10 = _mm_loadu_si128(v9);
          v10[1] = _mm_loadu_si128(v9 + 1);
          v50 = v9[2].m128i_i64[0];
          v51 = _mm_loadu_si128((__m128i *)((char *)v9 + 40));
          v9[2].m128i_i64[0] = 0;
          *(__m128i *)((char *)&v9[2] + 8) = 0;
          v52 = v10[2].m128i_i64[0];
          if ( v52 )
          {
            v10[2].m128i_i64[1] = 0;
            v81 = v51;
            qfree(v52);
            v51 = _mm_load_si128(&v81);
          }
          v10[2].m128i_i64[0] = v50;
          *(__m128i *)((char *)v10 + 40) = v51;
          v53 = v9[3].m128i_i64[1];
          v54 = _mm_loadu_si128(v9 + 4);
          v9[3].m128i_i64[1] = 0;
          v9[4] = 0;
          v55 = v10[3].m128i_i64[1];
          if ( v55 )
          {
            v10[4].m128i_i64[0] = 0;
            v81 = v54;
            qfree(v55);
            v54 = _mm_load_si128(&v81);
          }
          v10[3].m128i_i64[1] = v53;
          v10[4] = v54;
        }
        while ( v8 != v9 );
        v62 = v49 + 5;
        result = (char *)v62 - (char *)v7;
        v63 = 0xCCCCCCCCCCCCCCCDLL * (v62 - v7);
        if ( (char *)v62 - (char *)v7 > 0 )
        {
          do
          {
            v64 = _mm_loadu_si128(v62 - 5);
            v62 -= 5;
            v10 -= 5;
            *v10 = v64;
            v10[1] = _mm_loadu_si128(v62 + 1);
            v65 = v62[2].m128i_i64[0];
            v66 = _mm_loadu_si128((__m128i *)((char *)v62 + 40));
            v62[2].m128i_i64[0] = 0;
            *(__m128i *)((char *)&v62[2] + 8) = 0;
            v67 = v10[2].m128i_i64[0];
            if ( v67 )
            {
              v10[2].m128i_i64[1] = 0;
              v81 = v66;
              result = qfree(v67);
              v66 = _mm_load_si128(&v81);
            }
            v10[2].m128i_i64[0] = v65;
            *(__m128i *)((char *)v10 + 40) = v66;
            v68 = v62[3].m128i_i64[1];
            v69 = _mm_loadu_si128(v62 + 4);
            v62[3].m128i_i64[1] = 0;
            v62[4] = 0;
            v70 = v10[3].m128i_i64[1];
            if ( v70 )
            {
              v10[4].m128i_i64[0] = 0;
              v81 = v69;
              result = qfree(v70);
              v69 = _mm_load_si128(&v81);
            }
            v10[3].m128i_i64[1] = v68;
            v10[4] = v69;
            --v63;
          }
          while ( v63 );
        }
      }
    }
  }
  else
  {
    result = (char *)a2 - (char *)a1;
    v84 = 0xCCCCCCCCCCCCCCCDLL * (a2 - a1);
    if ( (char *)a2 - (char *)a1 > 0 )
    {
      v81.m128i_i64[0] = 0xCCCCCCCCCCCCCCCDLL * (a2 - a1);
      v12 = a1;
      v13 = a6;
      do
      {
        *v13 = _mm_loadu_si128(v12);
        v13[1] = _mm_loadu_si128(v12 + 1);
        v14 = v12[2].m128i_i64[0];
        v15 = _mm_loadu_si128((__m128i *)((char *)v12 + 40));
        v12[2].m128i_i64[0] = 0;
        *(__m128i *)((char *)&v12[2] + 8) = 0;
        v16 = v13[2].m128i_i64[0];
        if ( v16 )
        {
          v13[2].m128i_i64[1] = 0;
          v82.m128i_i64[0] = v14;
          v83 = v15;
          qfree(v16);
          v15 = _mm_load_si128(&v83);
          v14 = v82.m128i_i64[0];
        }
        v13[2].m128i_i64[0] = v14;
        *(__m128i *)((char *)v13 + 40) = v15;
        v17 = v12[3].m128i_i64[1];
        v18 = _mm_loadu_si128(v12 + 4);
        v12[3].m128i_i64[1] = 0;
        v12[4] = 0;
        v19 = v13[3].m128i_i64[1];
        if ( v19 )
        {
          v13[4].m128i_i64[0] = 0;
          v82.m128i_i64[0] = v17;
          v83 = v18;
          qfree(v19);
          v18 = _mm_load_si128(&v83);
          v17 = v82.m128i_i64[0];
        }
        v13[3].m128i_i64[1] = v17;
        v12 += 5;
        v13 += 5;
        v13[-1] = v18;
        --v81.m128i_i64[0];
      }
      while ( v81.m128i_i64[0] );
      v20 = v84 - 1;
      if ( (__int64)(v84 - 1) < 0 )
        v20 = 0;
      result = 80 * v20;
      m128i_i64 = (__int64)v7[5 * v20 + 5].m128i_i64;
      if ( a2 != v10 && v7 != (__m128i *)m128i_i64 )
      {
        do
        {
          result = a7(v9, v7);
          if ( (_BYTE)result )
          {
            *v8 = _mm_loadu_si128(v9);
            v8[1] = _mm_loadu_si128(v9 + 1);
            v22 = v9[2].m128i_i64[0];
            v23 = _mm_loadu_si128((__m128i *)((char *)v9 + 40));
            v9[2].m128i_i64[0] = 0;
            *(__m128i *)((char *)&v9[2] + 8) = 0;
            v24 = v8[2].m128i_i64[0];
            if ( v24 )
            {
              v8[2].m128i_i64[1] = 0;
              v81 = v23;
              result = qfree(v24);
              v23 = _mm_load_si128(&v81);
            }
            v8[2].m128i_i64[0] = v22;
            *(__m128i *)((char *)v8 + 40) = v23;
            v25 = v9[3].m128i_i64[1];
            v26 = _mm_loadu_si128(v9 + 4);
            v9[3].m128i_i64[1] = 0;
            v9[4] = 0;
            v27 = v8[3].m128i_i64[1];
            if ( v27 )
            {
              v8[4].m128i_i64[0] = 0;
              v81 = v26;
              result = qfree(v27);
              v26 = _mm_load_si128(&v81);
            }
            v9 += 5;
          }
          else
          {
            *v8 = _mm_loadu_si128(v7);
            v8[1] = _mm_loadu_si128(v7 + 1);
            v28 = v7[2].m128i_i64[0];
            v29 = _mm_loadu_si128((__m128i *)((char *)v7 + 40));
            v7[2].m128i_i64[0] = 0;
            *(__m128i *)((char *)&v7[2] + 8) = 0;
            v30 = v8[2].m128i_i64[0];
            if ( v30 )
            {
              v8[2].m128i_i64[1] = 0;
              v81 = v29;
              result = qfree(v30);
              v29 = _mm_load_si128(&v81);
            }
            v8[2].m128i_i64[0] = v28;
            *(__m128i *)((char *)v8 + 40) = v29;
            v25 = v7[3].m128i_i64[1];
            v26 = _mm_loadu_si128(v7 + 4);
            v7[3].m128i_i64[1] = 0;
            v7[4] = 0;
            v31 = v8[3].m128i_i64[1];
            if ( v31 )
            {
              v8[4].m128i_i64[0] = 0;
              v81 = v26;
              result = qfree(v31);
              v26 = _mm_load_si128(&v81);
            }
            v7 += 5;
          }
          v8[3].m128i_i64[1] = v25;
          v8 += 5;
          v8[-1] = v26;
        }
        while ( v7 != (__m128i *)m128i_i64 && v10 != v9 );
      }
      if ( (__m128i *)m128i_i64 != v7 )
      {
        result = 0xCCCCCCCCCCCCCCCDLL;
        v32 = m128i_i64 - (_QWORD)v7;
        v33 = 0xCCCCCCCCCCCCCCCDLL * (v32 >> 4);
        if ( v32 > 0 )
        {
          do
          {
            *v8 = _mm_loadu_si128(v7);
            v8[1] = _mm_loadu_si128(v7 + 1);
            v34 = v7[2].m128i_i64[0];
            v35 = _mm_loadu_si128((__m128i *)((char *)v7 + 40));
            v7[2].m128i_i64[0] = 0;
            *(__m128i *)((char *)&v7[2] + 8) = 0;
            v36 = v8[2].m128i_i64[0];
            if ( v36 )
            {
              v8[2].m128i_i64[1] = 0;
              v81 = v35;
              result = qfree(v36);
              v35 = _mm_load_si128(&v81);
            }
            v8[2].m128i_i64[0] = v34;
            *(__m128i *)((char *)v8 + 40) = v35;
            v37 = v7[3].m128i_i64[1];
            v38 = _mm_loadu_si128(v7 + 4);
            v7[3].m128i_i64[1] = 0;
            v7[4] = 0;
            v39 = v8[3].m128i_i64[1];
            if ( v39 )
            {
              v8[4].m128i_i64[0] = 0;
              v81 = v38;
              result = qfree(v39);
              v38 = _mm_load_si128(&v81);
            }
            v8[3].m128i_i64[1] = v37;
            v7 += 5;
            v8 += 5;
            v8[-1] = v38;
            --v33;
          }
          while ( v33 );
        }
      }
    }
  }
  return result;
}
