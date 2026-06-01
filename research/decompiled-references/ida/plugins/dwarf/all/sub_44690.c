unsigned __int64 __fastcall sub_44690(
        __m128i *a1,
        __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128i *a6,
        __int64 (__fastcall *a7)(__m128i *, __m128i *, double, double))
{
  __m128i *v7; // r13
  __int64 v8; // r12
  __m128i *v9; // rbx
  __m128i *v10; // r14
  __int64 v11; // rdx
  __m128i *v12; // r15
  __m128i v13; // xmm1
  __m128i *v14; // rbp
  __int64 v15; // rcx
  __m128i v16; // xmm0
  __int64 v17; // rdi
  __int64 v18; // rbp
  __int64 v19; // r15
  __int64 v20; // rbp
  __m128i v21; // xmm0
  __int64 v22; // rdi
  __m128i v23; // xmm0
  size_t v24; // rbp
  __int64 v25; // rax
  __m128i v26; // xmm0
  size_t v27; // rbp
  __int64 v28; // rax
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  __int64 v31; // rax
  __m128i v32; // xmm0
  __int64 v33; // rax
  __m128i v34; // xmm0
  char v35; // bp
  __int64 v36; // rbp
  __m128i v37; // xmm0
  __int64 v38; // rdi
  __int64 v39; // r15
  __int64 v40; // rbx
  __m128i v41; // xmm1
  __int64 v42; // rbp
  __m128i v43; // xmm0
  __int64 v44; // rdi
  __int64 v46; // rdx
  __m128i *v47; // r15
  __m128i v48; // xmm1
  __m128i *v49; // rbp
  __int64 v50; // rcx
  __m128i v51; // xmm0
  __int64 v52; // rdi
  __int64 v53; // rbp
  __int64 *v54; // rbp
  __m128i *v55; // rax
  __int64 v56; // r15
  __m128i v57; // xmm0
  __int64 v58; // rdi
  __m128i v59; // xmm0
  size_t v60; // r15
  __int64 v61; // rax
  __m128i v62; // xmm0
  size_t v63; // r15
  __int64 v64; // rax
  __m128i v65; // xmm0
  __m128i v66; // xmm0
  __int64 v67; // rax
  __m128i v68; // xmm0
  __int64 v69; // rax
  __m128i v70; // xmm0
  char v71; // r15
  __int64 v72; // r15
  __m128i v73; // xmm0
  __int64 v74; // rdi
  void *v75; // rax
  const void *v76; // rsi
  void *v77; // rax
  const void *v78; // rsi
  void *v79; // rax
  const void *v80; // rsi
  void *v81; // rax
  const void *v82; // rsi
  __int64 *v83; // rbp
  __int64 v84; // rbx
  __int128 v85; // xmm1
  __int64 v86; // rax
  __int64 v87; // r13
  __m128i v88; // xmm0
  __int64 v89; // rdi
  __int64 v90; // rax
  __int64 v91; // r13
  __m128i *v92; // rbp
  __m128i v93; // xmm1
  __int8 *v94; // rbx
  __int64 v95; // r14
  __m128i v96; // xmm0
  __int64 v97; // rdi
  __m128i v98; // [rsp+0h] [rbp-148h] BYREF
  __m128i v99; // [rsp+10h] [rbp-138h] BYREF
  __int64 v100; // [rsp+20h] [rbp-128h]
  __int64 v101; // [rsp+28h] [rbp-120h]
  __m128i v102; // [rsp+30h] [rbp-118h] BYREF
  void *v103; // [rsp+40h] [rbp-108h]
  __int128 v104; // [rsp+48h] [rbp-100h]
  __int64 v105; // [rsp+58h] [rbp-F0h]
  __m128i v106; // [rsp+60h] [rbp-E8h]
  __int64 v107; // [rsp+70h] [rbp-D8h]
  char v108; // [rsp+78h] [rbp-D0h]
  __int64 v109; // [rsp+80h] [rbp-C8h]
  __m128i v110; // [rsp+88h] [rbp-C0h]
  __m128i v111; // [rsp+A0h] [rbp-A8h] BYREF
  void *v112; // [rsp+B0h] [rbp-98h]
  __int128 v113; // [rsp+B8h] [rbp-90h]
  __int64 v114; // [rsp+C8h] [rbp-80h]
  __m128i v115; // [rsp+D0h] [rbp-78h]
  __int64 v116; // [rsp+E0h] [rbp-68h]
  char v117; // [rsp+E8h] [rbp-60h]
  __int64 v118; // [rsp+F0h] [rbp-58h]
  __m128i v119; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v120; // [rsp+108h] [rbp-40h]

  v7 = a1;
  v8 = a3;
  v9 = a2;
  v120 = __readfsqword(0x28u);
  v10 = a6;
  if ( a4 > a5 )
  {
    v101 = 0x4EC4EC4EC4EC4EC5LL * ((a3 - (__int64)a2) >> 3);
    if ( a3 - (__int64)a2 > 0 )
    {
      v46 = 0x4EC4EC4EC4EC4EC5LL * ((a3 - (__int64)a2) >> 3);
      v47 = a2;
      v48 = 0;
      v49 = a6;
      do
      {
        v49->m128i_i64[0] = v47->m128i_i64[0];
        v49->m128i_i64[1] = v47->m128i_i64[1];
        v50 = v47[1].m128i_i64[0];
        v51 = _mm_loadu_si128((__m128i *)((char *)v47 + 24));
        v47[1].m128i_i64[0] = 0;
        *(__m128i *)((char *)v47 + 24) = v48;
        v52 = v49[1].m128i_i64[0];
        if ( v52 )
        {
          v49[1].m128i_i64[1] = 0;
          v99.m128i_i64[0] = v50;
          v100 = v46;
          v98 = v51;
          qfree(v52);
          v50 = v99.m128i_i64[0];
          v46 = v100;
          v48 = 0;
          v51 = _mm_load_si128(&v98);
        }
        v49[1].m128i_i64[0] = v50;
        v47 = (__m128i *)((char *)v47 + 104);
        v49 = (__m128i *)((char *)v49 + 104);
        v49[-5] = v51;
        v49[-4].m128i_i64[0] = v47[-4].m128i_i64[0];
        *(__m128i *)((char *)v49 - 56) = _mm_loadu_si128((__m128i *)((char *)v47 - 56));
        v49[-3].m128i_i64[1] = v47[-3].m128i_i64[1];
        v49[-2].m128i_i8[0] = v47[-2].m128i_i8[0];
        v49[-2].m128i_i64[1] = v47[-2].m128i_i64[1];
        v49[-1] = _mm_loadu_si128(v47 - 1);
        --v46;
      }
      while ( v46 );
      v53 = v101 - 1;
      if ( v101 - 1 < 0 )
        v53 = 0;
      v54 = &v10->m128i_i64[13 * v53];
      v55 = (__m128i *)(v54 + 13);
      if ( a2 == v7 )
      {
        v90 = (char *)v55 - (char *)v10;
        v91 = 0x4EC4EC4EC4EC4EC5LL * (v90 >> 3);
        if ( v90 > 0 )
        {
          v92 = (__m128i *)(v54 + 3);
          v93 = 0;
          do
          {
            v94 = &v92[-2].m128i_i8[8];
            v8 -= 104;
            *(_QWORD *)v8 = v92[-2].m128i_i64[1];
            *(_QWORD *)(v8 + 8) = v92[-1].m128i_i64[0];
            v95 = v92[-1].m128i_i64[1];
            v92[-1].m128i_i64[1] = 0;
            v96 = _mm_loadu_si128(v92);
            *v92 = v93;
            v97 = *(_QWORD *)(v8 + 16);
            if ( v97 )
            {
              *(_QWORD *)(v8 + 24) = 0;
              v98 = v96;
              qfree(v97);
              v96 = _mm_load_si128(&v98);
              v93 = 0;
            }
            *(_QWORD *)(v8 + 16) = v95;
            v92 = (__m128i *)((char *)v92 - 104);
            *(__m128i *)(v8 + 24) = v96;
            *(_QWORD *)(v8 + 40) = *((_QWORD *)v94 + 5);
            *(__m128i *)(v8 + 48) = _mm_loadu_si128((const __m128i *)v94 + 3);
            *(_QWORD *)(v8 + 64) = *((_QWORD *)v94 + 8);
            *(_BYTE *)(v8 + 72) = v94[72];
            *(_QWORD *)(v8 + 80) = *((_QWORD *)v94 + 10);
            *(__m128i *)(v8 + 88) = _mm_loadu_si128((const __m128i *)(v94 + 88));
            --v91;
          }
          while ( v91 );
        }
      }
      else if ( v10 != v55 )
      {
        do
        {
          v9 = (__m128i *)((char *)v9 - 104);
          while ( 1 )
          {
            v59 = _mm_loadu_si128(v9);
            v60 = v9[1].m128i_u64[1];
            v103 = nullptr;
            v104 = 0;
            v102 = v59;
            if ( v60 )
            {
              v77 = (void *)qalloc_or_throw(v60);
              v78 = (const void *)v9[1].m128i_i64[0];
              *((_QWORD *)&v104 + 1) = v60;
              v103 = v77;
              memcpy(v77, v78, v60);
              *(_QWORD *)&v104 = v60;
            }
            v61 = v9[2].m128i_i64[1];
            v62 = _mm_loadu_si128(v9 + 3);
            v112 = nullptr;
            v63 = v54[3];
            v113 = 0;
            v105 = v61;
            v64 = v9[4].m128i_i64[0];
            v106 = v62;
            v65 = _mm_loadu_si128((__m128i *)((char *)v9 + 88));
            v107 = v64;
            LOBYTE(v64) = v9[4].m128i_i8[8];
            v110 = v65;
            v66 = _mm_loadu_si128((const __m128i *)v54);
            v108 = v64;
            v67 = v9[5].m128i_i64[0];
            v111 = v66;
            v109 = v67;
            if ( v63 )
            {
              v75 = (void *)qalloc_or_throw(v63);
              v76 = (const void *)v54[2];
              v112 = v75;
              *((_QWORD *)&v113 + 1) = v63;
              memcpy(v75, v76, v63);
              *(_QWORD *)&v113 = v63;
            }
            v68 = _mm_loadu_si128((const __m128i *)v54 + 3);
            v114 = v54[5];
            v69 = v54[8];
            v115 = v68;
            v70 = _mm_loadu_si128((const __m128i *)(v54 + 11));
            v116 = v69;
            LOBYTE(v69) = *((_BYTE *)v54 + 72);
            v119 = v70;
            v117 = v69;
            v118 = v54[10];
            v71 = a7(&v111, &v102, *(double *)v70.m128i_i64, *(double *)v48.m128i_i64);
            if ( v112 )
            {
              *(_QWORD *)&v113 = 0;
              qfree(v112);
            }
            if ( v103 )
            {
              *(_QWORD *)&v104 = 0;
              qfree(v103);
            }
            v8 -= 104;
            if ( v71 )
              break;
            *(_QWORD *)v8 = *v54;
            *(_QWORD *)(v8 + 8) = v54[1];
            v72 = v54[2];
            v73 = _mm_loadu_si128((const __m128i *)(v54 + 3));
            v54[2] = 0;
            *(_OWORD *)(v54 + 3) = 0;
            v74 = *(_QWORD *)(v8 + 16);
            if ( v74 )
            {
              *(_QWORD *)(v8 + 24) = 0;
              v98 = v73;
              qfree(v74);
              v73 = _mm_load_si128(&v98);
            }
            *(_QWORD *)(v8 + 16) = v72;
            *(__m128i *)(v8 + 24) = v73;
            *(_QWORD *)(v8 + 40) = v54[5];
            *(__m128i *)(v8 + 48) = _mm_loadu_si128((const __m128i *)v54 + 3);
            *(_QWORD *)(v8 + 64) = v54[8];
            *(_BYTE *)(v8 + 72) = *((_BYTE *)v54 + 72);
            *(_QWORD *)(v8 + 80) = v54[10];
            *(__m128i *)(v8 + 88) = _mm_loadu_si128((const __m128i *)(v54 + 11));
            if ( v10 == (__m128i *)v54 )
              return v120 - __readfsqword(0x28u);
            v54 -= 13;
          }
          *(_QWORD *)v8 = v9->m128i_i64[0];
          *(_QWORD *)(v8 + 8) = v9->m128i_i64[1];
          v56 = v9[1].m128i_i64[0];
          v57 = _mm_loadu_si128((__m128i *)((char *)v9 + 24));
          v9[1].m128i_i64[0] = 0;
          *(__m128i *)((char *)&v9[1] + 8) = 0;
          v58 = *(_QWORD *)(v8 + 16);
          if ( v58 )
          {
            *(_QWORD *)(v8 + 24) = 0;
            v98 = v57;
            qfree(v58);
            v57 = _mm_load_si128(&v98);
          }
          *(_QWORD *)(v8 + 16) = v56;
          *(__m128i *)(v8 + 24) = v57;
          *(_QWORD *)(v8 + 40) = v9[2].m128i_i64[1];
          *(__m128i *)(v8 + 48) = _mm_loadu_si128(v9 + 3);
          *(_QWORD *)(v8 + 64) = v9[4].m128i_i64[0];
          *(_BYTE *)(v8 + 72) = v9[4].m128i_i8[8];
          *(_QWORD *)(v8 + 80) = v9[5].m128i_i64[0];
          *(__m128i *)(v8 + 88) = _mm_loadu_si128((__m128i *)((char *)v9 + 88));
        }
        while ( v7 != v9 );
        v83 = v54 + 13;
        v84 = 0x4EC4EC4EC4EC4EC5LL * (((char *)v83 - (char *)v10) >> 3);
        if ( (char *)v83 - (char *)v10 > 0 )
        {
          v85 = 0;
          do
          {
            v86 = *(v83 - 13);
            v83 -= 13;
            v8 -= 104;
            *(_QWORD *)v8 = v86;
            *(_QWORD *)(v8 + 8) = v83[1];
            v87 = v83[2];
            v88 = _mm_loadu_si128((const __m128i *)(v83 + 3));
            v83[2] = 0;
            *(_OWORD *)(v83 + 3) = v85;
            v89 = *(_QWORD *)(v8 + 16);
            if ( v89 )
            {
              *(_QWORD *)(v8 + 24) = 0;
              v98 = v88;
              qfree(v89);
              v88 = _mm_load_si128(&v98);
              v85 = 0;
            }
            *(_QWORD *)(v8 + 16) = v87;
            *(__m128i *)(v8 + 24) = v88;
            *(_QWORD *)(v8 + 40) = v83[5];
            *(__m128i *)(v8 + 48) = _mm_loadu_si128((const __m128i *)v83 + 3);
            *(_QWORD *)(v8 + 64) = v83[8];
            *(_BYTE *)(v8 + 72) = *((_BYTE *)v83 + 72);
            *(_QWORD *)(v8 + 80) = v83[10];
            *(__m128i *)(v8 + 88) = _mm_loadu_si128((const __m128i *)(v83 + 11));
            --v84;
          }
          while ( v84 );
        }
      }
    }
  }
  else
  {
    v101 = 0x4EC4EC4EC4EC4EC5LL * (((char *)a2 - (char *)a1) >> 3);
    if ( (char *)a2 - (char *)a1 > 0 )
    {
      v11 = 0x4EC4EC4EC4EC4EC5LL * (((char *)a2 - (char *)a1) >> 3);
      v12 = a1;
      v13 = 0;
      v14 = a6;
      do
      {
        v14->m128i_i64[0] = v12->m128i_i64[0];
        v14->m128i_i64[1] = v12->m128i_i64[1];
        v15 = v12[1].m128i_i64[0];
        v16 = _mm_loadu_si128((__m128i *)((char *)v12 + 24));
        v12[1].m128i_i64[0] = 0;
        *(__m128i *)((char *)v12 + 24) = v13;
        v17 = v14[1].m128i_i64[0];
        if ( v17 )
        {
          v14[1].m128i_i64[1] = 0;
          v100 = v15;
          v98.m128i_i64[0] = v11;
          v99 = v16;
          qfree(v17);
          v16 = _mm_load_si128(&v99);
          v15 = v100;
          v13 = 0;
          v11 = v98.m128i_i64[0];
        }
        v14[1].m128i_i64[0] = v15;
        v12 = (__m128i *)((char *)v12 + 104);
        v14 = (__m128i *)((char *)v14 + 104);
        v14[-5] = v16;
        v14[-4].m128i_i64[0] = v12[-4].m128i_i64[0];
        *(__m128i *)((char *)v14 - 56) = _mm_loadu_si128((__m128i *)((char *)v12 - 56));
        v14[-3].m128i_i64[1] = v12[-3].m128i_i64[1];
        v14[-2].m128i_i8[0] = v12[-2].m128i_i8[0];
        v14[-2].m128i_i64[1] = v12[-2].m128i_i64[1];
        v14[-1] = _mm_loadu_si128(v12 - 1);
        --v11;
      }
      while ( v11 );
      v18 = v101 - 1;
      if ( v101 - 1 < 0 )
        v18 = 0;
      v19 = (__int64)&v10[6].m128i_i64[13 * v18 + 1];
      if ( v10 != (__m128i *)v19 && a2 != (__m128i *)v8 )
      {
        do
        {
          v23 = _mm_loadu_si128(v10);
          v24 = v10[1].m128i_u64[1];
          v103 = nullptr;
          v104 = 0;
          v102 = v23;
          if ( v24 )
          {
            v81 = (void *)qalloc_or_throw(v24);
            v82 = (const void *)v10[1].m128i_i64[0];
            *((_QWORD *)&v104 + 1) = v24;
            v103 = v81;
            memcpy(v81, v82, v24);
            *(_QWORD *)&v104 = v24;
          }
          v25 = v10[2].m128i_i64[1];
          v26 = _mm_loadu_si128(v10 + 3);
          v112 = nullptr;
          v27 = v9[1].m128i_u64[1];
          v113 = 0;
          v105 = v25;
          v28 = v10[4].m128i_i64[0];
          v106 = v26;
          v29 = _mm_loadu_si128((__m128i *)((char *)v10 + 88));
          v107 = v28;
          LOBYTE(v28) = v10[4].m128i_i8[8];
          v110 = v29;
          v30 = _mm_loadu_si128(v9);
          v108 = v28;
          v31 = v10[5].m128i_i64[0];
          v111 = v30;
          v109 = v31;
          if ( v27 )
          {
            v79 = (void *)qalloc_or_throw(v27);
            v80 = (const void *)v9[1].m128i_i64[0];
            v112 = v79;
            *((_QWORD *)&v113 + 1) = v27;
            memcpy(v79, v80, v27);
            *(_QWORD *)&v113 = v27;
          }
          v32 = _mm_loadu_si128(v9 + 3);
          v114 = v9[2].m128i_i64[1];
          v33 = v9[4].m128i_i64[0];
          v115 = v32;
          v34 = _mm_loadu_si128((__m128i *)((char *)v9 + 88));
          v116 = v33;
          LOBYTE(v33) = v9[4].m128i_i8[8];
          v119 = v34;
          v117 = v33;
          v118 = v9[5].m128i_i64[0];
          v35 = a7(&v111, &v102, *(double *)v34.m128i_i64, *(double *)v13.m128i_i64);
          if ( v112 )
          {
            *(_QWORD *)&v113 = 0;
            qfree(v112);
          }
          if ( v103 )
          {
            *(_QWORD *)&v104 = 0;
            qfree(v103);
          }
          if ( v35 )
          {
            v7->m128i_i64[0] = v9->m128i_i64[0];
            v7->m128i_i64[1] = v9->m128i_i64[1];
            v20 = v9[1].m128i_i64[0];
            v21 = _mm_loadu_si128((__m128i *)((char *)v9 + 24));
            v9[1].m128i_i64[0] = 0;
            *(__m128i *)((char *)&v9[1] + 8) = 0;
            v22 = v7[1].m128i_i64[0];
            if ( v22 )
            {
              v7[1].m128i_i64[1] = 0;
              v98 = v21;
              qfree(v22);
              v21 = _mm_load_si128(&v98);
            }
            v7[1].m128i_i64[0] = v20;
            v9 = (__m128i *)((char *)v9 + 104);
            v7 = (__m128i *)((char *)v7 + 104);
            v7[-5] = v21;
            v7[-4].m128i_i64[0] = v9[-4].m128i_i64[0];
            *(__m128i *)((char *)v7 - 56) = _mm_loadu_si128((__m128i *)((char *)v9 - 56));
            v7[-3].m128i_i64[1] = v9[-3].m128i_i64[1];
            v7[-2].m128i_i8[0] = v9[-2].m128i_i8[0];
            v7[-2].m128i_i64[1] = v9[-2].m128i_i64[1];
            v7[-1] = _mm_loadu_si128(v9 - 1);
            if ( v10 == (__m128i *)v19 )
              break;
          }
          else
          {
            v7->m128i_i64[0] = v10->m128i_i64[0];
            v7->m128i_i64[1] = v10->m128i_i64[1];
            v36 = v10[1].m128i_i64[0];
            v37 = _mm_loadu_si128((__m128i *)((char *)v10 + 24));
            v10[1].m128i_i64[0] = 0;
            *(__m128i *)((char *)&v10[1] + 8) = 0;
            v38 = v7[1].m128i_i64[0];
            if ( v38 )
            {
              v7[1].m128i_i64[1] = 0;
              v98 = v37;
              qfree(v38);
              v37 = _mm_load_si128(&v98);
            }
            v7[1].m128i_i64[0] = v36;
            v10 = (__m128i *)((char *)v10 + 104);
            v7 = (__m128i *)((char *)v7 + 104);
            v7[-5] = v37;
            v7[-4].m128i_i64[0] = v10[-4].m128i_i64[0];
            *(__m128i *)((char *)v7 - 56) = _mm_loadu_si128((__m128i *)((char *)v10 - 56));
            v7[-3].m128i_i64[1] = v10[-3].m128i_i64[1];
            v7[-2].m128i_i8[0] = v10[-2].m128i_i8[0];
            v7[-2].m128i_i64[1] = v10[-2].m128i_i64[1];
            v7[-1] = _mm_loadu_si128(v10 - 1);
            if ( v10 == (__m128i *)v19 )
              break;
          }
        }
        while ( (__m128i *)v8 != v9 );
      }
      if ( (__m128i *)v19 != v10 )
      {
        v39 = v19 - (_QWORD)v10;
        v40 = 0x4EC4EC4EC4EC4EC5LL * (v39 >> 3);
        if ( v39 > 0 )
        {
          v41 = 0;
          do
          {
            v7->m128i_i64[0] = v10->m128i_i64[0];
            v7->m128i_i64[1] = v10->m128i_i64[1];
            v42 = v10[1].m128i_i64[0];
            v43 = _mm_loadu_si128((__m128i *)((char *)v10 + 24));
            v10[1].m128i_i64[0] = 0;
            *(__m128i *)((char *)v10 + 24) = v41;
            v44 = v7[1].m128i_i64[0];
            if ( v44 )
            {
              v7[1].m128i_i64[1] = 0;
              v98 = v43;
              qfree(v44);
              v43 = _mm_load_si128(&v98);
              v41 = 0;
            }
            v7[1].m128i_i64[0] = v42;
            v10 = (__m128i *)((char *)v10 + 104);
            v7 = (__m128i *)((char *)v7 + 104);
            v7[-5] = v43;
            v7[-4].m128i_i64[0] = v10[-4].m128i_i64[0];
            *(__m128i *)((char *)v7 - 56) = _mm_loadu_si128((__m128i *)((char *)v10 - 56));
            v7[-3].m128i_i64[1] = v10[-3].m128i_i64[1];
            v7[-2].m128i_i8[0] = v10[-2].m128i_i8[0];
            v7[-2].m128i_i64[1] = v10[-2].m128i_i64[1];
            v7[-1] = _mm_loadu_si128(v10 - 1);
            --v40;
          }
          while ( v40 );
        }
      }
    }
  }
  return v120 - __readfsqword(0x28u);
}

