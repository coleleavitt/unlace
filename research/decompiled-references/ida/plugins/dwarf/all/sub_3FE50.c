__int64 __fastcall sub_3FE50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 (__fastcall *a7)(__int64, __int64, __int64))
{
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 result; // rax
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rsi
  __m128i v14; // xmm0
  __int64 v15; // rdi
  __int64 v16; // rsi
  __m128i v17; // xmm0
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rbp
  __m128i v24; // xmm0
  __int64 v25; // rdi
  __int64 v26; // rbp
  __m128i v27; // xmm0
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rbp
  __m128i v32; // xmm0
  __int64 v33; // rdi
  __int64 v34; // rbp
  __m128i v35; // xmm0
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rbx
  unsigned __int64 v39; // r12
  __int64 v40; // rbx
  __int64 v41; // rbp
  __int64 v42; // r13
  __m128i v43; // xmm0
  __int64 v44; // rdi
  __int64 v45; // r13
  __m128i v46; // xmm0
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rdi
  unsigned __int64 v50; // rbx
  __int64 v51; // r15
  __int64 v52; // rbp
  __int64 v53; // rcx
  __m128i v54; // xmm0
  __int64 v55; // rdi
  __int64 v56; // rcx
  __m128i v57; // xmm0
  __int64 v58; // rdi
  __int64 v59; // rsi
  __int64 v60; // rdi
  __int64 v61; // rdx
  __int64 v62; // r15
  const __m128i *v63; // rbx
  __int64 v64; // r15
  __int64 v65; // rbp
  __int64 i; // rbx
  __int64 v67; // r12
  __m128i v68; // xmm0
  __int64 v69; // rdi
  __int64 v70; // r12
  __m128i v71; // xmm0
  __int64 v72; // rdi
  __int64 v73; // r12
  __m128i v74; // xmm0
  __int64 v75; // rdi
  __int64 v76; // r12
  __m128i v77; // xmm0
  __int64 v78; // rdi
  unsigned __int64 v79; // r12
  __int64 v80; // rbx
  __int64 v81; // r15
  __int64 v82; // r13
  __m128i v83; // xmm0
  __int64 v84; // rdi
  __int64 v85; // r13
  __m128i v86; // xmm0
  __int64 v87; // rdi
  __int64 v88; // rsi
  __int64 v89; // rdi
  unsigned __int64 v90; // r13
  const __m128i *v91; // rbx
  __int64 v92; // r12
  const __m128i *v93; // rbp
  __int64 v94; // r14
  __m128i v95; // xmm0
  __int64 v96; // rdi
  __int64 v97; // r14
  __m128i v98; // xmm0
  __int64 v99; // rdi
  const __m128i *v100; // rsi
  __int64 v101; // rdi
  __m128i v102; // [rsp+0h] [rbp-98h] BYREF
  __m128i v103; // [rsp+10h] [rbp-88h] BYREF
  __m128i v104; // [rsp+20h] [rbp-78h] BYREF
  __m128i v105; // [rsp+30h] [rbp-68h] BYREF
  __m128i v106; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v107; // [rsp+58h] [rbp-40h]

  v7 = a6;
  v8 = a2;
  v103.m128i_i64[0] = a1;
  v102.m128i_i64[0] = a3;
  if ( a4 > a5 )
  {
    result = v102.m128i_i64[0] - a2;
    v50 = 0x8E38E38E38E38E39LL * ((v102.m128i_i64[0] - a2) >> 4);
    v106.m128i_i64[0] = v50;
    if ( v102.m128i_i64[0] - a2 <= 0 )
      return result;
    v51 = a6 + 64;
    v52 = a2 + 64;
    do
    {
      *(_QWORD *)(v51 - 64) = *(_QWORD *)(v52 - 64);
      *(_QWORD *)(v51 - 56) = *(_QWORD *)(v52 - 56);
      v53 = *(_QWORD *)(v52 - 48);
      v54 = _mm_loadu_si128((const __m128i *)(v52 - 40));
      *(_QWORD *)(v52 - 48) = 0;
      *(_OWORD *)(v52 - 40) = 0;
      v55 = *(_QWORD *)(v51 - 48);
      if ( v55 )
      {
        *(_QWORD *)(v51 - 40) = 0;
        v104.m128i_i64[0] = v53;
        v105 = v54;
        qfree(v55);
        v54 = _mm_load_si128(&v105);
        v53 = v104.m128i_i64[0];
      }
      *(_QWORD *)(v51 - 48) = v53;
      *(__m128i *)(v51 - 40) = v54;
      v56 = *(_QWORD *)(v52 - 24);
      v57 = _mm_loadu_si128((const __m128i *)(v52 - 16));
      *(_QWORD *)(v52 - 24) = 0;
      *(_OWORD *)(v52 - 16) = 0;
      v58 = *(_QWORD *)(v51 - 24);
      if ( v58 )
      {
        *(_QWORD *)(v51 - 16) = 0;
        v105.m128i_i64[0] = v56;
        v104 = v57;
        qfree(v58);
        v56 = v105.m128i_i64[0];
        v57 = _mm_load_si128(&v104);
      }
      *(_QWORD *)(v51 - 24) = v56;
      v59 = v52;
      v60 = v51;
      v52 += 144;
      *(__m128i *)(v51 - 16) = v57;
      v51 += 144;
      copy_tinfo_t(v60, v59);
      *(__m128i *)(v51 - 136) = _mm_loadu_si128((const __m128i *)(v52 - 136));
      *(__m128i *)(v51 - 120) = _mm_loadu_si128((const __m128i *)(v52 - 120));
      *(__m128i *)(v51 - 104) = _mm_loadu_si128((const __m128i *)(v52 - 104));
      *(_DWORD *)(v51 - 88) = *(_DWORD *)(v52 - 88);
      *(_DWORD *)(v51 - 80) = *(_DWORD *)(v52 - 80);
      *(_DWORD *)(v51 - 76) = *(_DWORD *)(v52 - 76);
      *(_BYTE *)(v51 - 72) = *(_BYTE *)(v52 - 72);
      --v50;
    }
    while ( v50 );
    v61 = v103.m128i_i64[0];
    v62 = v106.m128i_i64[0] - 1;
    if ( v106.m128i_i64[0] - 1 < 0 )
      v62 = 0;
    v63 = (const __m128i *)(v7 + 144 * v62);
    result = (__int64)v63[9].m128i_i64;
    if ( v8 != v103.m128i_i64[0] )
    {
      if ( v7 == result )
        return result;
      v64 = v7 + 144 * v62;
      v65 = v8 - 144;
      for ( i = v102.m128i_i64[0] - 80; ; i -= 144 )
      {
        if ( a7(v64, v65, v61) )
        {
          *(_QWORD *)(i - 64) = *(_QWORD *)v65;
          *(_QWORD *)(i - 56) = *(_QWORD *)(v65 + 8);
          v67 = *(_QWORD *)(v65 + 16);
          v68 = _mm_loadu_si128((const __m128i *)(v65 + 24));
          *(_QWORD *)(v65 + 16) = 0;
          *(_OWORD *)(v65 + 24) = 0;
          v69 = *(_QWORD *)(i - 48);
          if ( v69 )
          {
            *(_QWORD *)(i - 40) = 0;
            v102 = v68;
            qfree(v69);
            v68 = _mm_load_si128(&v102);
          }
          *(_QWORD *)(i - 48) = v67;
          *(__m128i *)(i - 40) = v68;
          v70 = *(_QWORD *)(v65 + 40);
          v71 = _mm_loadu_si128((const __m128i *)(v65 + 48));
          *(_QWORD *)(v65 + 40) = 0;
          *(_OWORD *)(v65 + 48) = 0;
          v72 = *(_QWORD *)(i - 24);
          if ( v72 )
          {
            *(_QWORD *)(i - 16) = 0;
            v102 = v71;
            qfree(v72);
            v71 = _mm_load_si128(&v102);
          }
          *(_QWORD *)(i - 24) = v70;
          *(__m128i *)(i - 16) = v71;
          copy_tinfo_t(i, v65 + 64);
          *(__m128i *)(i + 8) = _mm_loadu_si128((const __m128i *)(v65 + 72));
          *(__m128i *)(i + 24) = _mm_loadu_si128((const __m128i *)(v65 + 88));
          *(__m128i *)(i + 40) = _mm_loadu_si128((const __m128i *)(v65 + 104));
          *(_DWORD *)(i + 56) = *(_DWORD *)(v65 + 120);
          *(_DWORD *)(i + 64) = *(_DWORD *)(v65 + 128);
          *(_DWORD *)(i + 68) = *(_DWORD *)(v65 + 132);
          *(_BYTE *)(i + 72) = *(_BYTE *)(v65 + 136);
          if ( v103.m128i_i64[0] == v65 )
          {
            result = v64 + 144 - v7;
            v79 = 0x8E38E38E38E38E39LL * (result >> 4);
            if ( result > 0 )
            {
              v80 = i - 144;
              v81 = v64 + 64;
              do
              {
                *(_QWORD *)(v80 - 64) = *(_QWORD *)(v81 - 64);
                *(_QWORD *)(v80 - 56) = *(_QWORD *)(v81 - 56);
                v82 = *(_QWORD *)(v81 - 48);
                v83 = _mm_loadu_si128((const __m128i *)(v81 - 40));
                *(_QWORD *)(v81 - 48) = 0;
                *(_OWORD *)(v81 - 40) = 0;
                v84 = *(_QWORD *)(v80 - 48);
                if ( v84 )
                {
                  *(_QWORD *)(v80 - 40) = 0;
                  v102 = v83;
                  qfree(v84);
                  v83 = _mm_load_si128(&v102);
                }
                *(_QWORD *)(v80 - 48) = v82;
                *(__m128i *)(v80 - 40) = v83;
                v85 = *(_QWORD *)(v81 - 24);
                v86 = _mm_loadu_si128((const __m128i *)(v81 - 16));
                *(_QWORD *)(v81 - 24) = 0;
                *(_OWORD *)(v81 - 16) = 0;
                v87 = *(_QWORD *)(v80 - 24);
                if ( v87 )
                {
                  *(_QWORD *)(v80 - 16) = 0;
                  v102 = v86;
                  qfree(v87);
                  v86 = _mm_load_si128(&v102);
                }
                *(_QWORD *)(v80 - 24) = v85;
                v88 = v81;
                v89 = v80;
                v81 -= 144;
                *(__m128i *)(v80 - 16) = v86;
                v80 -= 144;
                copy_tinfo_t(v89, v88);
                *(__m128i *)(v80 + 152) = _mm_loadu_si128((const __m128i *)(v81 + 152));
                *(__m128i *)(v80 + 168) = _mm_loadu_si128((const __m128i *)(v81 + 168));
                *(__m128i *)(v80 + 184) = _mm_loadu_si128((const __m128i *)(v81 + 184));
                *(_DWORD *)(v80 + 200) = *(_DWORD *)(v81 + 200);
                *(_DWORD *)(v80 + 208) = *(_DWORD *)(v81 + 208);
                *(_DWORD *)(v80 + 212) = *(_DWORD *)(v81 + 212);
                result = *(unsigned __int8 *)(v81 + 216);
                *(_BYTE *)(v80 + 216) = result;
                --v79;
              }
              while ( v79 );
            }
            return result;
          }
          v65 -= 144;
        }
        else
        {
          *(_QWORD *)(i - 64) = *(_QWORD *)v64;
          *(_QWORD *)(i - 56) = *(_QWORD *)(v64 + 8);
          v73 = *(_QWORD *)(v64 + 16);
          v74 = _mm_loadu_si128((const __m128i *)(v64 + 24));
          *(_QWORD *)(v64 + 16) = 0;
          *(_OWORD *)(v64 + 24) = 0;
          v75 = *(_QWORD *)(i - 48);
          if ( v75 )
          {
            *(_QWORD *)(i - 40) = 0;
            v102 = v74;
            qfree(v75);
            v74 = _mm_load_si128(&v102);
          }
          *(_QWORD *)(i - 48) = v73;
          *(__m128i *)(i - 40) = v74;
          v76 = *(_QWORD *)(v64 + 40);
          v77 = _mm_loadu_si128((const __m128i *)(v64 + 48));
          *(_QWORD *)(v64 + 40) = 0;
          *(_OWORD *)(v64 + 48) = 0;
          v78 = *(_QWORD *)(i - 24);
          if ( v78 )
          {
            *(_QWORD *)(i - 16) = 0;
            v102 = v77;
            qfree(v78);
            v77 = _mm_load_si128(&v102);
          }
          *(_QWORD *)(i - 24) = v76;
          *(__m128i *)(i - 16) = v77;
          copy_tinfo_t(i, v64 + 64);
          *(__m128i *)(i + 8) = _mm_loadu_si128((const __m128i *)(v64 + 72));
          *(__m128i *)(i + 24) = _mm_loadu_si128((const __m128i *)(v64 + 88));
          *(__m128i *)(i + 40) = _mm_loadu_si128((const __m128i *)(v64 + 104));
          *(_DWORD *)(i + 56) = *(_DWORD *)(v64 + 120);
          *(_DWORD *)(i + 64) = *(_DWORD *)(v64 + 128);
          *(_DWORD *)(i + 68) = *(_DWORD *)(v64 + 132);
          result = *(unsigned __int8 *)(v64 + 136);
          *(_BYTE *)(i + 72) = result;
          if ( v7 == v64 )
            return result;
          v64 -= 144;
        }
      }
    }
    result -= v7;
    v90 = 0x8E38E38E38E38E39LL * (result >> 4);
    if ( result > 0 )
    {
      v91 = v63 + 3;
      v92 = v102.m128i_i64[0] - 80;
      do
      {
        v93 = v91 - 3;
        *(_QWORD *)(v92 - 64) = v91[-3].m128i_i64[0];
        *(_QWORD *)(v92 - 56) = v91[-3].m128i_i64[1];
        v94 = v91[-2].m128i_i64[0];
        v91[-2].m128i_i64[0] = 0;
        v95 = _mm_loadu_si128((const __m128i *)((char *)v91 - 24));
        *(const __m128i *)((char *)&v91[-2] + 8) = 0;
        v96 = *(_QWORD *)(v92 - 48);
        if ( v96 )
        {
          *(_QWORD *)(v92 - 40) = 0;
          v102 = v95;
          qfree(v96);
          v95 = _mm_load_si128(&v102);
        }
        *(_QWORD *)(v92 - 48) = v94;
        *(__m128i *)(v92 - 40) = v95;
        v97 = v93[2].m128i_i64[1];
        v93[2].m128i_i64[1] = 0;
        v98 = _mm_loadu_si128(v91);
        *v91 = 0;
        v99 = *(_QWORD *)(v92 - 24);
        if ( v99 )
        {
          *(_QWORD *)(v92 - 16) = 0;
          v102 = v98;
          qfree(v99);
          v98 = _mm_load_si128(&v102);
        }
        *(_QWORD *)(v92 - 24) = v97;
        v100 = v91 + 1;
        v101 = v92;
        v91 -= 9;
        *(__m128i *)(v92 - 16) = v98;
        v92 -= 144;
        copy_tinfo_t(v101, v100);
        *(__m128i *)(v92 + 152) = _mm_loadu_si128((const __m128i *)((char *)v93 + 72));
        *(__m128i *)(v92 + 168) = _mm_loadu_si128((const __m128i *)((char *)v93 + 88));
        *(__m128i *)(v92 + 184) = _mm_loadu_si128((const __m128i *)((char *)v93 + 104));
        *(_DWORD *)(v92 + 200) = v93[7].m128i_i32[2];
        *(_DWORD *)(v92 + 208) = v93[8].m128i_i32[0];
        *(_DWORD *)(v92 + 212) = v93[8].m128i_i32[1];
        result = v93[8].m128i_u8[8];
        *(_BYTE *)(v92 + 216) = result;
        --v90;
      }
      while ( v90 );
    }
  }
  else
  {
    result = a2 - a1;
    v107 = 0x8E38E38E38E38E39LL * ((a2 - a1) >> 4);
    if ( a2 - a1 > 0 )
    {
      v104.m128i_i64[0] = 0x8E38E38E38E38E39LL * ((a2 - a1) >> 4);
      v10 = a1 + 64;
      v11 = a6 + 64;
      v12 = a1 + 64;
      do
      {
        *(_QWORD *)(v11 - 64) = *(_QWORD *)(v12 - 64);
        *(_QWORD *)(v11 - 56) = *(_QWORD *)(v12 - 56);
        v13 = *(_QWORD *)(v12 - 48);
        v14 = _mm_loadu_si128((const __m128i *)(v12 - 40));
        *(_QWORD *)(v12 - 48) = 0;
        *(_OWORD *)(v12 - 40) = 0;
        v15 = *(_QWORD *)(v11 - 48);
        if ( v15 )
        {
          *(_QWORD *)(v11 - 40) = 0;
          v105.m128i_i64[0] = v13;
          v106 = v14;
          qfree(v15);
          v14 = _mm_load_si128(&v106);
        }
        *(_QWORD *)(v11 - 48) = v13;
        *(__m128i *)(v11 - 40) = v14;
        v16 = *(_QWORD *)(v12 - 24);
        v17 = _mm_loadu_si128((const __m128i *)(v12 - 16));
        *(_QWORD *)(v12 - 24) = 0;
        *(_OWORD *)(v12 - 16) = 0;
        v18 = *(_QWORD *)(v11 - 24);
        if ( v18 )
        {
          *(_QWORD *)(v11 - 16) = 0;
          v105.m128i_i64[0] = v16;
          v106 = v17;
          qfree(v18);
          v17 = _mm_load_si128(&v106);
        }
        *(_QWORD *)(v11 - 24) = v16;
        v19 = v11;
        v20 = v12;
        v11 += 144;
        *(__m128i *)(v11 - 160) = v17;
        v12 += 144;
        copy_tinfo_t(v19, v20);
        *(__m128i *)(v11 - 136) = _mm_loadu_si128((const __m128i *)(v12 - 136));
        *(__m128i *)(v11 - 120) = _mm_loadu_si128((const __m128i *)(v12 - 120));
        *(__m128i *)(v11 - 104) = _mm_loadu_si128((const __m128i *)(v12 - 104));
        *(_DWORD *)(v11 - 88) = *(_DWORD *)(v12 - 88);
        *(_DWORD *)(v11 - 80) = *(_DWORD *)(v12 - 80);
        *(_DWORD *)(v11 - 76) = *(_DWORD *)(v12 - 76);
        *(_BYTE *)(v11 - 72) = *(_BYTE *)(v12 - 72);
        --v104.m128i_i64[0];
      }
      while ( v104.m128i_i64[0] );
      v21 = v107 - 1;
      if ( (__int64)(v107 - 1) < 0 )
        v21 = 0;
      v22 = v7 + 144 * v21 + 144;
      result = v102.m128i_i64[0];
      if ( v8 != v102.m128i_i64[0] && v7 != v22 )
      {
        while ( 1 )
        {
          if ( ((unsigned __int8 (__fastcall *)(__int64, __int64))a7)(v8, v7) )
          {
            *(_QWORD *)(v10 - 64) = *(_QWORD *)v8;
            *(_QWORD *)(v10 - 56) = *(_QWORD *)(v8 + 8);
            v23 = *(_QWORD *)(v8 + 16);
            *(_QWORD *)(v8 + 16) = 0;
            v24 = _mm_loadu_si128((const __m128i *)(v8 + 24));
            *(_OWORD *)(v8 + 24) = 0;
            v25 = *(_QWORD *)(v10 - 48);
            if ( v25 )
            {
              *(_QWORD *)(v10 - 40) = 0;
              v103 = v24;
              qfree(v25);
              v24 = _mm_load_si128(&v103);
            }
            *(_QWORD *)(v10 - 48) = v23;
            *(__m128i *)(v10 - 40) = v24;
            v26 = *(_QWORD *)(v8 + 40);
            v27 = _mm_loadu_si128((const __m128i *)(v8 + 48));
            *(_QWORD *)(v8 + 40) = 0;
            *(_OWORD *)(v8 + 48) = 0;
            v28 = *(_QWORD *)(v10 - 24);
            if ( v28 )
            {
              *(_QWORD *)(v10 - 16) = 0;
              v103 = v27;
              qfree(v28);
              v27 = _mm_load_si128(&v103);
            }
            *(_QWORD *)(v10 - 24) = v26;
            v29 = v8 + 64;
            v8 += 144;
            *(__m128i *)(v10 - 16) = v27;
            copy_tinfo_t(v10, v29);
            *(__m128i *)(v10 + 8) = _mm_loadu_si128((const __m128i *)(v8 - 72));
            *(__m128i *)(v10 + 24) = _mm_loadu_si128((const __m128i *)(v8 - 56));
            *(__m128i *)(v10 + 40) = _mm_loadu_si128((const __m128i *)(v8 - 40));
            *(_DWORD *)(v10 + 56) = *(_DWORD *)(v8 - 24);
            *(_DWORD *)(v10 + 64) = *(_DWORD *)(v8 - 16);
            *(_DWORD *)(v10 + 68) = *(_DWORD *)(v8 - 12);
            *(_BYTE *)(v10 + 72) = *(_BYTE *)(v8 - 8);
            v30 = v10 + 144;
            if ( v7 == v22 )
            {
LABEL_27:
              result = v10 + 80;
              v103.m128i_i64[0] = v10 + 80;
              break;
            }
          }
          else
          {
            *(_QWORD *)(v10 - 64) = *(_QWORD *)v7;
            *(_QWORD *)(v10 - 56) = *(_QWORD *)(v7 + 8);
            v31 = *(_QWORD *)(v7 + 16);
            v32 = _mm_loadu_si128((const __m128i *)(v7 + 24));
            *(_QWORD *)(v7 + 16) = 0;
            *(_OWORD *)(v7 + 24) = 0;
            v33 = *(_QWORD *)(v10 - 48);
            if ( v33 )
            {
              *(_QWORD *)(v10 - 40) = 0;
              v103 = v32;
              qfree(v33);
              v32 = _mm_load_si128(&v103);
            }
            *(_QWORD *)(v10 - 48) = v31;
            *(__m128i *)(v10 - 40) = v32;
            v34 = *(_QWORD *)(v7 + 40);
            v35 = _mm_loadu_si128((const __m128i *)(v7 + 48));
            *(_QWORD *)(v7 + 40) = 0;
            *(_OWORD *)(v7 + 48) = 0;
            v36 = *(_QWORD *)(v10 - 24);
            if ( v36 )
            {
              *(_QWORD *)(v10 - 16) = 0;
              v103 = v35;
              qfree(v36);
              v35 = _mm_load_si128(&v103);
            }
            *(_QWORD *)(v10 - 24) = v34;
            v37 = v7 + 64;
            v7 += 144;
            *(__m128i *)(v10 - 16) = v35;
            copy_tinfo_t(v10, v37);
            *(__m128i *)(v10 + 8) = _mm_loadu_si128((const __m128i *)(v7 - 72));
            *(__m128i *)(v10 + 24) = _mm_loadu_si128((const __m128i *)(v7 - 56));
            *(__m128i *)(v10 + 40) = _mm_loadu_si128((const __m128i *)(v7 - 40));
            *(_DWORD *)(v10 + 56) = *(_DWORD *)(v7 - 24);
            *(_DWORD *)(v10 + 64) = *(_DWORD *)(v7 - 16);
            *(_DWORD *)(v10 + 68) = *(_DWORD *)(v7 - 12);
            *(_BYTE *)(v10 + 72) = *(_BYTE *)(v7 - 8);
            v30 = v10 + 144;
            if ( v7 == v22 )
              goto LABEL_27;
          }
          if ( v102.m128i_i64[0] == v8 )
            goto LABEL_27;
          v10 = v30;
        }
      }
      if ( v22 != v7 )
      {
        result = 0x8E38E38E38E38E39LL;
        v38 = v22 - v7;
        v39 = 0x8E38E38E38E38E39LL * (v38 >> 4);
        if ( v38 > 0 )
        {
          v40 = v7 + 64;
          v41 = v103.m128i_i64[0] + 64;
          do
          {
            *(_QWORD *)(v41 - 64) = *(_QWORD *)(v40 - 64);
            *(_QWORD *)(v41 - 56) = *(_QWORD *)(v40 - 56);
            v42 = *(_QWORD *)(v40 - 48);
            v43 = _mm_loadu_si128((const __m128i *)(v40 - 40));
            *(_QWORD *)(v40 - 48) = 0;
            *(_OWORD *)(v40 - 40) = 0;
            v44 = *(_QWORD *)(v41 - 48);
            if ( v44 )
            {
              *(_QWORD *)(v41 - 40) = 0;
              v102 = v43;
              qfree(v44);
              v43 = _mm_load_si128(&v102);
            }
            *(_QWORD *)(v41 - 48) = v42;
            *(__m128i *)(v41 - 40) = v43;
            v45 = *(_QWORD *)(v40 - 24);
            v46 = _mm_loadu_si128((const __m128i *)(v40 - 16));
            *(_QWORD *)(v40 - 24) = 0;
            *(_OWORD *)(v40 - 16) = 0;
            v47 = *(_QWORD *)(v41 - 24);
            if ( v47 )
            {
              *(_QWORD *)(v41 - 16) = 0;
              v102 = v46;
              qfree(v47);
              v46 = _mm_load_si128(&v102);
            }
            *(_QWORD *)(v41 - 24) = v45;
            v48 = v40;
            v49 = v41;
            v40 += 144;
            *(__m128i *)(v41 - 16) = v46;
            v41 += 144;
            copy_tinfo_t(v49, v48);
            *(__m128i *)(v41 - 136) = _mm_loadu_si128((const __m128i *)(v40 - 136));
            *(__m128i *)(v41 - 120) = _mm_loadu_si128((const __m128i *)(v40 - 120));
            *(__m128i *)(v41 - 104) = _mm_loadu_si128((const __m128i *)(v40 - 104));
            *(_DWORD *)(v41 - 88) = *(_DWORD *)(v40 - 88);
            *(_DWORD *)(v41 - 80) = *(_DWORD *)(v40 - 80);
            *(_DWORD *)(v41 - 76) = *(_DWORD *)(v40 - 76);
            result = *(unsigned __int8 *)(v40 - 72);
            *(_BYTE *)(v41 - 72) = result;
            --v39;
          }
          while ( v39 );
        }
      }
    }
  }
  return result;
}

