unsigned __int64 __fastcall sub_190300(__int64 a1, const __m128i *a2)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __m128 v8; // xmm1
  __m128i v9; // xmm0
  unsigned __int64 v10; // rbp
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r12
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rax
  __m128i v23; // xmm0
  _QWORD *v24; // rdi
  __int64 v25; // rax
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  __int64 v28; // rax
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r12
  __int64 v35; // r14
  _QWORD *v36; // rcx
  __int64 v37; // r15
  __int64 v38; // rax
  unsigned __int64 v39; // rbp
  __int64 v40; // rdx
  __int64 v41; // rax
  __m128i v42; // xmm0
  __int64 v43; // rbp
  unsigned __int64 v44; // rdx
  _QWORD *v45; // rax
  const __m128i *v46; // r13
  _QWORD *v47; // rax
  __int64 v48; // rax
  const __m128i *v49; // rbp
  unsigned __int64 v50; // rbp
  __int64 v51; // rax
  __int64 v52; // r13
  __int64 v53; // r14
  __int64 *v54; // rax
  bool v55; // cc
  __int64 v56; // rbp
  __int64 v57; // r12
  unsigned __int64 v58; // r13
  unsigned __int64 v59; // r14
  unsigned __int64 v60; // rbx
  unsigned int i; // eax
  _QWORD *v62; // rdx
  unsigned __int64 v63; // rdx
  int v64; // eax
  int v65; // ebx
  unsigned int v66; // eax
  __int64 v67; // rdi
  __int64 v68; // rbp
  __int64 v69; // rbx
  __int64 v70; // rax
  _QWORD *v71; // rdi
  __int64 v72; // rdi
  __int64 v73; // r12
  __int64 v74; // rbp
  __int64 v75; // rbx
  _QWORD *v76; // rdi
  _QWORD *v78; // rsi
  _QWORD *v79; // rdi
  __int64 v80; // [rsp+0h] [rbp-1C8h] BYREF
  __int64 v81; // [rsp+8h] [rbp-1C0h]
  __int64 v82; // [rsp+10h] [rbp-1B8h]
  _QWORD *v83; // [rsp+18h] [rbp-1B0h]
  __int64 v84; // [rsp+20h] [rbp-1A8h] BYREF
  __int128 v85; // [rsp+28h] [rbp-1A0h]
  __int64 v86; // [rsp+40h] [rbp-188h] BYREF
  __int64 v87; // [rsp+48h] [rbp-180h] BYREF
  __int128 v88; // [rsp+50h] [rbp-178h]
  unsigned __int64 *v89; // [rsp+60h] [rbp-168h] BYREF
  __int128 v90; // [rsp+68h] [rbp-160h]
  _QWORD *v91; // [rsp+78h] [rbp-150h] BYREF
  __int128 v92; // [rsp+80h] [rbp-148h]
  __m128 v93; // [rsp+90h] [rbp-138h]
  __int64 v94; // [rsp+A0h] [rbp-128h]
  __int128 v95; // [rsp+B0h] [rbp-118h] BYREF
  __int128 v96; // [rsp+C0h] [rbp-108h]
  __int128 v97; // [rsp+D0h] [rbp-F8h] BYREF
  __int64 v98; // [rsp+E0h] [rbp-E8h]
  __int64 v99; // [rsp+E8h] [rbp-E0h]
  __int64 v100; // [rsp+F0h] [rbp-D8h]
  __int128 v101; // [rsp+F8h] [rbp-D0h]
  __int64 v102; // [rsp+108h] [rbp-C0h]
  __int64 v103; // [rsp+110h] [rbp-B8h]
  __int64 v104; // [rsp+118h] [rbp-B0h]
  __int128 v105; // [rsp+120h] [rbp-A8h]
  __int64 v106; // [rsp+130h] [rbp-98h]
  __int128 v107; // [rsp+138h] [rbp-90h]
  __int64 v108; // [rsp+148h] [rbp-80h]
  __m128i v109; // [rsp+150h] [rbp-78h]
  __int64 v110; // [rsp+160h] [rbp-68h]
  __int64 v111; // [rsp+168h] [rbp-60h]
  __int64 v112; // [rsp+170h] [rbp-58h]
  __int64 v113; // [rsp+178h] [rbp-50h]
  char v114; // [rsp+180h] [rbp-48h]
  unsigned __int64 v115; // [rsp+188h] [rbp-40h]

  v2 = *(int *)(a1 + 116);
  v83 = (_QWORD *)a1;
  v115 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 128);
  if ( v3 == v2 )
    return v115 - __readfsqword(0x28u);
  v86 = a1;
  v5 = *(_QWORD *)(a1 + 136);
  v6 = *(_QWORD *)(a1 + 40);
  v7 = *(_QWORD *)(a1 + 1472);
  v87 = 0;
  v80 = v5;
  v89 = nullptr;
  v91 = nullptr;
  v8 = _mm_loadh_ps((const double *)&v80);
  v94 = v6;
  v96 = 0u;
  v98 = 0;
  v99 = 0;
  v100 = 0;
  v102 = 0;
  v103 = 0;
  v104 = 0;
  v106 = 0;
  v88 = 0;
  v90 = 0;
  v92 = 0;
  v93 = v8;
  v95 = 0;
  v97 = 0;
  v101 = 0;
  v105 = 0;
  v107 = 0;
  v9 = _mm_loadl_epi64((const __m128i *)(v7 + 8));
  v108 = a1;
  v110 = v5;
  v109 = _mm_unpacklo_epi64(v9, (__m128i)v3);
  v111 = v6;
  v10 = *(int *)(a1 + 64);
  v112 = 0;
  v113 = -1;
  v114 = 0;
  if ( v10 )
  {
    a2 = nullptr;
    v11 = qvector_reserve((__int64)&v87, 0, v10, 216);
    v12 = *((_QWORD *)&v88 + 1);
    *((_QWORD *)&v88 + 1) = 0;
    v13 = v87;
    v80 = v12;
    v14 = v88 - 1;
    if ( (__int64)v88 - 1 >= 0 )
    {
      v15 = v11;
      do
      {
        *(_QWORD *)v15 = *(_QWORD *)v13;
        v16 = *(_QWORD *)(v13 + 8);
        *(_QWORD *)(v13 + 8) = 0;
        *(_QWORD *)(v15 + 8) = v16;
        v17 = *(_QWORD *)(v13 + 16);
        *(_QWORD *)(v13 + 16) = 0;
        *(_QWORD *)(v15 + 16) = v17;
        v18 = *(_QWORD *)(v13 + 24);
        v19 = _mm_loadu_si128((const __m128i *)(v13 + 32));
        *(_QWORD *)(v13 + 24) = 0;
        *(_QWORD *)(v15 + 24) = v18;
        *(__m128i *)(v15 + 32) = v19;
        *(_OWORD *)(v13 + 32) = 0;
        v81 = v15 + 48;
        sub_64000((__int64 *)(v15 + 48), v13 + 48, *(double *)v19.m128i_i64);
        v20 = *(_QWORD *)(v13 + 64);
        a2 = (const __m128i *)(v13 + 88);
        v21 = _mm_loadu_si128((const __m128i *)(v13 + 72));
        *(_QWORD *)(v13 + 64) = 0;
        *(_QWORD *)(v15 + 64) = v20;
        *(__m128i *)(v15 + 72) = v21;
        *(_OWORD *)(v13 + 72) = 0;
        sub_64000((__int64 *)(v15 + 88), v13 + 88, *(double *)v21.m128i_i64);
        v22 = *(_QWORD *)(v13 + 104);
        v23 = _mm_loadu_si128((const __m128i *)(v13 + 112));
        v24 = (_QWORD *)v13;
        *(_QWORD *)(v13 + 104) = 0;
        v15 += 216;
        v13 += 216;
        *(_QWORD *)(v15 - 112) = v22;
        *(__m128i *)(v15 - 104) = v23;
        v25 = *(_QWORD *)(v13 - 88);
        v26 = _mm_loadu_si128((const __m128i *)(v13 - 80));
        *(_OWORD *)(v13 - 104) = 0;
        *(_QWORD *)(v15 - 88) = v25;
        *(__m128i *)(v15 - 80) = v26;
        v27 = _mm_loadu_si128((const __m128i *)(v13 - 64));
        v28 = *(_QWORD *)(v13 - 16);
        *(_QWORD *)(v13 - 88) = 0;
        *(_OWORD *)(v13 - 80) = 0;
        *(__m128i *)(v15 - 64) = v27;
        v29 = _mm_loadu_si128((const __m128i *)(v13 - 48));
        *(_QWORD *)(v15 - 16) = v28;
        LOBYTE(v28) = *(_BYTE *)(v13 - 8);
        *(__m128i *)(v15 - 48) = v29;
        v30 = _mm_loadu_si128((const __m128i *)(v13 - 32));
        *(_BYTE *)(v15 - 8) = v28;
        *(__m128i *)(v15 - 32) = v30;
        sub_18D0D0(v24);
      }
      while ( v14-- != 0 );
      v13 = v87;
    }
    qfree(v13);
    v34 = v88;
    v87 = v11;
    *((_QWORD *)&v88 + 1) = v80;
    if ( (unsigned __int64)v88 < v10 )
    {
      v35 = 216 * v88;
      while ( 1 )
      {
        a2 = (const __m128i *)&v95;
        sub_18FE90(v11 + v35, &v95, v32, v33);
        ++v34;
        v35 += 216;
        if ( v10 == v34 )
          break;
        v11 = v87;
      }
    }
    *(_QWORD *)&v88 = v10;
  }
  sub_18D0D0(&v95);
  v37 = v86;
  v38 = v92;
  v39 = *(_QWORD *)(v86 + 1480);
  if ( (unsigned __int64)v92 < v39 )
  {
    v78 = v91;
    if ( *((_QWORD *)&v92 + 1) < v39 )
    {
      v91 = (_QWORD *)qvector_reserve((__int64)&v91, (__int64)v91, *(_QWORD *)(v86 + 1480), 8);
      v78 = v91;
      v38 = v92;
    }
    v79 = &v78[v38];
    a2 = nullptr;
    memset(v79, 0, 8 * (v39 - v38));
    *(_QWORD *)&v92 = v39;
    v37 = v86;
  }
  else
  {
    if ( v39 != (_QWORD)v92 )
      *(_QWORD *)&v92 = *(_QWORD *)(v86 + 1480);
    if ( !v39 )
      goto LABEL_18;
  }
  v40 = 0;
  v41 = 0;
  do
  {
    v42 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v37 + 1472) + v40 + 8));
    v36 = v91;
    v40 += 40;
    v91[v41++] = _mm_add_epi64(v42, _mm_srli_si128(v42, 8)).m128i_u64[0];
    v37 = v86;
  }
  while ( v39 != v41 );
LABEL_18:
  v43 = *(int *)(v37 + 64);
  v44 = 0;
  v84 = 0;
  v85 = 0;
  if ( v43 )
  {
    a2 = nullptr;
    v84 = qvector_reserve((__int64)&v84, 0, v43, 32);
    memset((void *)(v84 + 32 * v85), 0, 32 * (v43 - v85));
    *(_QWORD *)&v85 = v43;
    v44 = v84;
    v37 = v86;
  }
  v45 = *(_QWORD **)(v37 + 520);
  if ( v45 )
  {
    do
    {
      v44 += 32LL;
      *(_QWORD *)(v44 - 32) = v45[42];
      *(_QWORD *)(v44 - 24) = v45[41];
      *(_QWORD *)(v44 - 16) = v45[65];
      v36 = (_QWORD *)v45[64];
      *(_QWORD *)(v44 - 8) = v36;
      v45 = (_QWORD *)v45[1];
    }
    while ( v45 );
    v37 = v86;
    v46 = *(const __m128i **)(v86 + 520);
    if ( v46 )
    {
      do
      {
        a2 = v46;
        v47 = (_QWORD *)sub_18B8E0(&v86, v46);
        if ( v47[21] < v93.m128_i64[0] )
          v93.m128_u64[0] = v47[21];
        if ( v47[22] < v93.m128_i64[1] )
        {
          v93.m128_u64[1] = v47[22];
          v94 = v47[23];
        }
        v44 = v47[24];
        if ( v44 )
        {
          if ( v44 >= (unsigned __int64)v92 )
          {
            if ( !under_debugger )
              sub_383060(0xCDF2u, 0.0);
LABEL_88:
            BUG();
          }
          v36 = v91;
          v48 = v47[25];
          v44 = (unsigned __int64)&v91[v44];
          if ( *(_QWORD *)v44 > v48 )
            *(_QWORD *)v44 = v48;
        }
        v49 = (const __m128i *)v93.m128_u64[1];
        if ( v93.m128_u64[1] )
        {
          while ( 1 )
          {
            a2 = v49;
            if ( !sub_317040(&v89, (unsigned __int64)v49) )
              break;
            v49 = (const __m128i *)((char *)v49 - 1);
            if ( !v49 )
              goto LABEL_81;
          }
        }
        else
        {
LABEL_81:
          v49 = nullptr;
        }
        v93.m128_u64[1] = (unsigned __int64)v49;
        v46 = (const __m128i *)v46->m128i_i64[1];
      }
      while ( v46 );
      v37 = v86;
    }
  }
  v50 = *(int *)(v37 + 64);
  *((_QWORD *)&v95 + 1) = 0;
  *(_QWORD *)&v95 = &unk_4EBEA0;
  v97 = 0u;
  LODWORD(v98) = v50;
  v99 = 0;
  v100 = 0;
  LODWORD(v101) = v50;
  DWORD2(v101) = 1;
  v96 = 0;
  if ( v50 )
  {
    a2 = nullptr;
    v51 = qvector_reserve((__int64)&v95 + 8, 0, v50, 24);
    v52 = v96;
    *((_QWORD *)&v95 + 1) = v51;
    if ( (unsigned __int64)v96 < v50 )
    {
      while ( 1 )
      {
        a2 = (const __m128i *)&v97;
        v53 = v51 + 24 * v52;
        sub_64000((__int64 *)v53, (__int64)&v97, 0.0);
        ++v52;
        *(_DWORD *)(v53 + 16) = v98;
        if ( v50 == v52 )
          break;
        v51 = *((_QWORD *)&v95 + 1);
      }
    }
    *(_QWORD *)&v96 = v50;
  }
  *(_QWORD *)&v95 = &off_4DE0E0;
  v54 = (__int64 *)sub_670E0((_QWORD *)v37, (__int64)a2, v44, (__int64)v36);
  sub_311760(v54, (__int64)&v95);
  v55 = *(_DWORD *)(v37 + 64) <= 1;
  v81 = 0;
  v80 = 0;
  v82 = v84;
  if ( !v55 )
  {
    while ( 1 )
    {
      v56 = *(_QWORD *)(*(_QWORD *)(v37 + 528) + v81);
      v57 = *((_QWORD *)&v95 + 1) + 3 * v81;
      v58 = *(_QWORD *)(v56 + 336);
      v59 = *(_QWORD *)(v56 + 328);
      v60 = *(_QWORD *)(v56 + 520);
      for ( i = sub_64960((_QWORD *)v57, 0); i != *(_DWORD *)(v57 + 8); i = sub_64960((_QWORD *)v57, i + 1) )
      {
        if ( i >= *(_DWORD *)(v37 + 64) )
        {
          if ( !under_debugger )
            sub_383060(0xCDEFu, 0.0);
          goto LABEL_88;
        }
        v62 = *(_QWORD **)(*(_QWORD *)(v37 + 528) + 8LL * i);
        if ( v58 > v62[42] )
          v58 = v62[42];
        if ( v59 > v62[41] )
          v59 = v62[41];
        if ( *(_QWORD *)(v56 + 512) == v62[64] )
        {
          v63 = v62[65];
          if ( v60 > v63 )
            v60 = v63;
        }
      }
      if ( v58 != *(_QWORD *)(v82 + 4 * v81) || v59 != *(_QWORD *)(v82 + 4 * v81 + 8) )
      {
        v64 = *(_DWORD *)(v56 + 24);
        BYTE1(v64) &= ~2u;
        LOBYTE(v64) = v64 | 0x80;
        *(_DWORD *)(v56 + 24) = v64;
      }
      *(_QWORD *)(v56 + 520) = v60;
      v65 = v80;
      *(_QWORD *)(v56 + 336) = v58;
      *(_QWORD *)(v56 + 328) = v59;
      v66 = *(_DWORD *)(v37 + 64);
      if ( (int)v66 <= v65 + 2 )
        break;
      ++v80;
      v81 += 8;
      if ( (unsigned int)v80 >= v66 )
      {
        if ( !under_debugger )
          sub_383060(0xCDEFu, 0.0);
        goto LABEL_88;
      }
    }
  }
  *(_QWORD *)&v95 = &unk_4EBEA0;
  qfree(v99);
  qfree(v97);
  v67 = *((_QWORD *)&v95 + 1);
  if ( *((_QWORD *)&v95 + 1) )
  {
    v68 = v96;
    if ( (_QWORD)v96 )
    {
      v69 = 0;
      do
      {
        v70 = 3 * v69++;
        qfree(*(_QWORD *)(v67 + 8 * v70));
        v67 = *((_QWORD *)&v95 + 1);
      }
      while ( v68 != v69 );
    }
    *(_QWORD *)&v96 = 0;
    qfree(v67);
  }
  if ( v84 )
  {
    *(_QWORD *)&v85 = 0;
    qfree(v84);
  }
  v71 = v83;
  *v91 = v93.m128_u64[1];
  sub_18D700(v71, &v91, v93.m128_i64[0], 0.0);
  if ( v91 )
  {
    *(_QWORD *)&v92 = 0;
    qfree((__int64)v91);
  }
  if ( v89 )
  {
    *(_QWORD *)&v90 = 0;
    qfree((__int64)v89);
  }
  v72 = v87;
  if ( v87 )
  {
    v73 = v88;
    if ( (_QWORD)v88 )
    {
      v74 = 0;
      v75 = 0;
      do
      {
        v76 = (_QWORD *)(v74 + v72);
        ++v75;
        v74 += 216;
        sub_18D0D0(v76);
        v72 = v87;
      }
      while ( v73 != v75 );
    }
    *(_QWORD *)&v88 = 0;
    qfree(v72);
  }
  return v115 - __readfsqword(0x28u);
}

