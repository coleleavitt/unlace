unsigned __int64 __fastcall sub_365720(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 i; // r12
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __m128i *v13; // rsi
  unsigned __int64 v14; // rax
  __int64 j; // rdx
  unsigned __int64 k; // rax
  __m128i *v17; // rbp
  const __m128i *v18; // rdi
  bool v19; // zf
  __int64 v20; // rdi
  __int64 v21; // rbp
  __int64 kk; // rbx
  __int64 *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rbp
  __int64 mm; // rbx
  __int64 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rbx
  __m128i v32; // xmm1
  __int64 v33; // rax
  __m128i v34; // xmm3
  __m128i v35; // xmm0
  __m128 v36; // xmm2
  int v37; // r15d
  __int64 v38; // r14
  __m128i v39; // xmm3
  int v40; // ebp
  __m128i v41; // xmm3
  __m128i v42; // xmm0
  __m128i v43; // xmm1
  __m128 v44; // xmm2
  __m128i v45; // xmm0
  __m128i v46; // xmm0
  __m128 v47; // xmm0
  __int64 v48; // r14
  __int64 v49; // rsi
  __int64 v50; // r8
  __int64 nn; // rdx
  __int64 *v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // rdi
  __int64 v55; // rsi
  __int64 v56; // r8
  __int64 i1; // rcx
  __int64 *v58; // rdx
  __int64 v59; // rdi
  __int64 v60; // rcx
  __int64 v61; // rsi
  __int64 i2; // r14
  __int64 *v63; // rdx
  __int64 v64; // rdi
  __int64 v65; // rdi
  __int64 v66; // rcx
  __int64 v67; // rsi
  __int64 i3; // r14
  __int64 *v69; // rax
  __int64 v70; // rdi
  __int64 v72; // rbx
  __int64 v73; // r14
  int v74; // eax
  int v75; // ecx
  __m128i v76; // xmm3
  __m128i v77; // xmm0
  __m128 v78; // xmm1
  __int64 v79; // rdx
  __m128i v80; // xmm3
  int v81; // eax
  __m128i v82; // xmm2
  __m128i v83; // xmm3
  __m128i v84; // xmm0
  __m128i v85; // xmm0
  __m128 v86; // xmm0
  __int64 v87; // r15
  __int64 v88; // rsi
  __int64 v89; // r9
  __int64 m; // rdx
  __int64 *v91; // rcx
  __int64 v92; // rdi
  __int64 v93; // rdi
  __int64 v94; // rsi
  __int64 v95; // r9
  __int64 n; // rcx
  __int64 *v97; // rdx
  __int64 v98; // rdi
  __int64 v99; // rdi
  __int64 v100; // rsi
  __int64 ii; // rax
  __int64 *v102; // rcx
  __int64 v103; // rdx
  __int64 v104; // rdi
  __int64 v105; // rdi
  __int64 v106; // rsi
  __int64 jj; // rdx
  __int64 *v108; // rax
  __int64 v109; // rcx
  __m128i v110; // [rsp+0h] [rbp-178h] BYREF
  __m128 *v111; // [rsp+18h] [rbp-160h]
  __m128i v112; // [rsp+20h] [rbp-158h] BYREF
  __m128i v113; // [rsp+30h] [rbp-148h] BYREF
  __int64 v114; // [rsp+40h] [rbp-138h]
  __int64 v115; // [rsp+48h] [rbp-130h]
  __m128i v116; // [rsp+50h] [rbp-128h]
  __m128i v117; // [rsp+60h] [rbp-118h]
  __m128i v118; // [rsp+70h] [rbp-108h] BYREF
  __m128i v119; // [rsp+80h] [rbp-F8h] BYREF
  __m128i v120; // [rsp+90h] [rbp-E8h] BYREF
  int v121; // [rsp+A0h] [rbp-D8h]
  int v122; // [rsp+A4h] [rbp-D4h]
  __int64 v123; // [rsp+A8h] [rbp-D0h]
  int v124; // [rsp+B0h] [rbp-C8h]
  __m128 v125; // [rsp+C0h] [rbp-B8h] BYREF
  __m128i v126; // [rsp+D0h] [rbp-A8h]
  __m128i v127; // [rsp+E0h] [rbp-98h]
  __m128i v128; // [rsp+F0h] [rbp-88h]
  __m128i v129; // [rsp+100h] [rbp-78h]
  __m128 v130; // [rsp+110h] [rbp-68h]
  int v131; // [rsp+120h] [rbp-58h]
  int v132; // [rsp+124h] [rbp-54h]
  __int64 v133; // [rsp+128h] [rbp-50h]
  __int64 v134; // [rsp+130h] [rbp-48h]
  unsigned __int64 v135; // [rsp+138h] [rbp-40h]

  v135 = __readfsqword(0x28u);
  v3 = a2 - a1;
  if ( a2 - a1 <= 1920 )
    return v135 - __readfsqword(0x28u);
  for ( i = a2; ; i = v10 )
  {
    v7 = 0xEEEEEEEEEEEEEEEFLL * (v3 >> 3);
    v8 = v7 >> 1;
    if ( !a3 )
      break;
    v9 = *(_QWORD *)(i - 16);
    --a3;
    v10 = a1 + 120;
    v11 = 15 * v8;
    v12 = *(_QWORD *)(a1 + 224);
    v13 = (__m128i *)(a1 + 8 * v11);
    v14 = v13[6].m128i_u64[1];
    if ( v14 >= v12 )
    {
      if ( v9 < v12 )
      {
LABEL_20:
        sub_365310((const __m128i *)a1, (__m128i *)(a1 + 120));
        goto LABEL_8;
      }
      if ( v9 >= v14 )
      {
LABEL_19:
        sub_365310((const __m128i *)a1, v13);
        goto LABEL_8;
      }
    }
    else
    {
      if ( v9 < v14 )
        goto LABEL_19;
      if ( v9 >= v12 )
        goto LABEL_20;
    }
    sub_365310((const __m128i *)a1, (__m128i *)(i - 120));
LABEL_8:
    for ( j = i; ; j = (__int64)v17 )
    {
      for ( k = *(_QWORD *)(a1 + 104); k < *(_QWORD *)(v10 + 104); v10 += 120LL )
        ;
      v17 = (__m128i *)(j - 120);
      if ( *(_QWORD *)(j - 16) < k )
      {
        do
          v17 = (__m128i *)((char *)v17 - 120);
        while ( v17[6].m128i_i64[1] < k );
      }
      if ( v10 >= (unsigned __int64)v17 )
        break;
      v18 = (const __m128i *)v10;
      v10 += 120LL;
      sub_365310(v18, v17);
    }
    sub_365720(v10, i, a3);
    v3 = v10 - a1;
    if ( (__int64)(v10 - a1) <= 1920 )
      return v135 - __readfsqword(0x28u);
  }
  v110.m128i_i64[0] = v8 - 1;
  v72 = a1 + 120 * v8;
  v111 = &v125;
  while ( 1 )
  {
    v73 = *(_QWORD *)(v72 - 120);
    v114 = v73;
    if ( v73 )
      ++*(_DWORD *)(v73 + 104);
    v74 = *(_DWORD *)(v72 - 24);
    v75 = *(_DWORD *)(v72 - 20);
    v76 = _mm_loadu_si128((const __m128i *)(v72 - 72));
    v77 = _mm_loadu_si128((const __m128i *)(v72 - 88));
    v78 = _mm_loadh_ps((const double *)(v72 - 112));
    *(_QWORD *)(v72 - 112) = 0;
    v79 = *(_QWORD *)(v72 - 16);
    v121 = v74;
    v118 = v76;
    v80 = _mm_loadu_si128((const __m128i *)(v72 - 56));
    v81 = *(_DWORD *)(v72 - 8);
    v82 = _mm_loadu_si128((const __m128i *)(v72 - 104));
    v122 = v75;
    v119 = v80;
    v83 = _mm_loadu_si128((const __m128i *)(v72 - 40));
    v123 = v79;
    v124 = v81;
    *(_OWORD *)(v72 - 104) = 0;
    v117 = v77;
    v120 = v83;
    if ( v73 )
      ++*(_DWORD *)(v73 + 104);
    v127 = v77;
    v84 = _mm_load_si128(&v118);
    v132 = v75;
    v128 = v84;
    v85 = _mm_load_si128(&v119);
    v131 = v121;
    v129 = v85;
    v86 = (__m128)_mm_load_si128(&v120);
    v133 = v79;
    v115 = 0;
    LODWORD(v134) = v81;
    v116 = 0;
    v126 = v82;
    v130 = v86;
    v125 = v78;
    sub_35EF80(a1, v110.m128i_i64[0], v7, (__int64)v111, v86);
    v87 = v125.m128_u64[0];
    if ( v125.m128_u64[1] )
      qfree(v125.m128_i64[1]);
    if ( v87 )
    {
      v19 = (*(_DWORD *)(v87 + 104))-- == 1;
      if ( v19 )
      {
        sub_258970((__int64 *)v87);
        v88 = *(_QWORD *)(v87 + 184);
        if ( v88 )
        {
          v89 = *(_QWORD *)(v87 + 192);
          if ( v89 )
          {
            for ( m = 0; m != v89; ++m )
            {
              v91 = (__int64 *)(v88 + 24 * m);
              v92 = *v91;
              if ( *v91 )
              {
                v91[1] = 0;
                v113.m128i_i64[0] = m;
                v112.m128i_i64[0] = v89;
                qfree(v92);
                m = v113.m128i_i64[0];
                v89 = v112.m128i_i64[0];
                v88 = *(_QWORD *)(v87 + 184);
              }
            }
          }
          *(_QWORD *)(v87 + 192) = 0;
          qfree(v88);
        }
        v93 = *(_QWORD *)(v87 + 160);
        if ( v93 )
        {
          *(_QWORD *)(v87 + 168) = 0;
          qfree(v93);
        }
        v94 = *(_QWORD *)(v87 + 128);
        if ( v94 )
        {
          v95 = *(_QWORD *)(v87 + 136);
          if ( v95 )
          {
            for ( n = 0; n != v95; ++n )
            {
              v97 = (__int64 *)(v94 + 32 * n);
              v98 = *v97;
              if ( *v97 )
              {
                v97[1] = 0;
                v113.m128i_i64[0] = n;
                v112.m128i_i64[0] = v95;
                qfree(v98);
                n = v113.m128i_i64[0];
                v95 = v112.m128i_i64[0];
                v94 = *(_QWORD *)(v87 + 128);
              }
            }
          }
          *(_QWORD *)(v87 + 136) = 0;
          qfree(v94);
        }
        sub_255050(v87 + 16, *(double *)v86.m128_u64);
        j__qfree(v87);
      }
    }
    if ( !v110.m128i_i64[0] )
      break;
    --v110.m128i_i64[0];
    if ( v73 )
    {
      v19 = (*(_DWORD *)(v73 + 104))-- == 1;
      if ( v19 )
      {
        sub_258970((__int64 *)v73);
        v99 = *(_QWORD *)(v73 + 184);
        if ( v99 )
        {
          v100 = *(_QWORD *)(v73 + 192);
          if ( v100 )
          {
            for ( ii = 0; ii != v100; ++ii )
            {
              v102 = (__int64 *)(v99 + 24 * ii);
              v103 = *v102;
              if ( *v102 )
              {
                v102[1] = 0;
                v113.m128i_i64[0] = ii;
                v112.m128i_i64[0] = v100;
                qfree(v103);
                ii = v113.m128i_i64[0];
                v99 = *(_QWORD *)(v73 + 184);
              }
            }
          }
          *(_QWORD *)(v73 + 192) = 0;
          qfree(v99);
        }
        v104 = *(_QWORD *)(v73 + 160);
        if ( v104 )
        {
          *(_QWORD *)(v73 + 168) = 0;
          qfree(v104);
        }
        v105 = *(_QWORD *)(v73 + 128);
        if ( v105 )
        {
          v106 = *(_QWORD *)(v73 + 136);
          if ( v106 )
          {
            for ( jj = 0; jj != v106; ++jj )
            {
              v108 = (__int64 *)(v105 + 32 * jj);
              v109 = *v108;
              if ( *v108 )
              {
                v108[1] = 0;
                v113.m128i_i64[0] = v106;
                v112.m128i_i64[0] = jj;
                qfree(v109);
                jj = v112.m128i_i64[0];
                v105 = *(_QWORD *)(v73 + 128);
              }
            }
          }
          *(_QWORD *)(v73 + 136) = 0;
          qfree(v105);
        }
        sub_255050(v73 + 16, *(double *)v86.m128_u64);
        j__qfree(v73);
      }
    }
    v72 -= 120;
  }
  if ( v73 )
  {
    v19 = (*(_DWORD *)(v73 + 104))-- == 1;
    if ( v19 )
    {
      sub_258970((__int64 *)v73);
      v20 = *(_QWORD *)(v73 + 184);
      if ( v20 )
      {
        v21 = *(_QWORD *)(v73 + 192);
        if ( v21 )
        {
          for ( kk = 0; kk != v21; ++kk )
          {
            v23 = (__int64 *)(v20 + 24 * kk);
            v24 = *v23;
            if ( *v23 )
            {
              v23[1] = 0;
              qfree(v24);
              v20 = *(_QWORD *)(v73 + 184);
            }
          }
        }
        *(_QWORD *)(v73 + 192) = 0;
        qfree(v20);
      }
      v25 = *(_QWORD *)(v73 + 160);
      if ( v25 )
      {
        *(_QWORD *)(v73 + 168) = 0;
        qfree(v25);
      }
      v26 = *(_QWORD *)(v73 + 128);
      if ( v26 )
      {
        v27 = *(_QWORD *)(v73 + 136);
        if ( v27 )
        {
          for ( mm = 0; mm != v27; ++mm )
          {
            v29 = (__int64 *)(v26 + 32 * mm);
            v30 = *v29;
            if ( *v29 )
            {
              v29[1] = 0;
              qfree(v30);
              v26 = *(_QWORD *)(v73 + 128);
            }
          }
        }
        *(_QWORD *)(v73 + 136) = 0;
        qfree(v26);
      }
      sub_255050(v73 + 16, *(double *)v86.m128_u64);
      j__qfree(v73);
    }
  }
  while ( i - a1 > 120 )
  {
    v31 = *(_QWORD *)(i - 120);
    i -= 120;
    v114 = v31;
    if ( v31 )
      ++*(_DWORD *)(v31 + 104);
    v32 = _mm_loadu_si128((const __m128i *)(i + 16));
    v33 = *(_QWORD *)(i + 8);
    *(_OWORD *)(i + 16) = 0;
    v34 = _mm_loadu_si128((const __m128i *)(i + 48));
    v35 = _mm_loadu_si128((const __m128i *)(i + 32));
    v36 = _mm_loadh_ps((const double *)(i + 8));
    v115 = v33;
    v37 = *(_DWORD *)(i + 100);
    v118 = v34;
    LODWORD(v33) = *(_DWORD *)(i + 96);
    v38 = *(_QWORD *)(i + 104);
    v39 = _mm_loadu_si128((const __m128i *)(i + 64));
    v40 = *(_DWORD *)(i + 112);
    *(_QWORD *)(i + 8) = 0;
    v121 = v33;
    v119 = v39;
    v41 = _mm_loadu_si128((const __m128i *)(i + 80));
    v122 = v37;
    v123 = v38;
    v124 = v40;
    v113 = (__m128i)v36;
    v116 = v32;
    v112 = v32;
    v117 = v35;
    v110 = v35;
    v120 = v41;
    sub_35E540(i, (const __m128i *)a1, *(double *)v35.m128i_i64);
    v42 = _mm_load_si128(&v110);
    v43 = _mm_load_si128(&v112);
    v44 = (__m128)_mm_load_si128(&v113);
    if ( v31 )
      ++*(_DWORD *)(v31 + 104);
    LODWORD(v134) = v40;
    v116 = 0;
    v127 = v42;
    v45 = _mm_load_si128(&v118);
    v132 = v37;
    v131 = v121;
    v128 = v45;
    v46 = _mm_load_si128(&v119);
    v115 = 0;
    v129 = v46;
    v47 = (__m128)_mm_load_si128(&v120);
    v133 = v38;
    v126 = v43;
    v130 = v47;
    v125 = v44;
    sub_35EF80(a1, 0, 0xEEEEEEEEEEEEEEEFLL * ((i - a1) >> 3), (__int64)v111, v47);
    v48 = v125.m128_u64[0];
    if ( v125.m128_u64[1] )
      qfree(v125.m128_i64[1]);
    if ( v48 )
    {
      v19 = (*(_DWORD *)(v48 + 104))-- == 1;
      if ( v19 )
      {
        sub_258970((__int64 *)v48);
        v49 = *(_QWORD *)(v48 + 184);
        if ( v49 )
        {
          v50 = *(_QWORD *)(v48 + 192);
          if ( v50 )
          {
            for ( nn = 0; nn != v50; ++nn )
            {
              v52 = (__int64 *)(v49 + 24 * nn);
              v53 = *v52;
              if ( *v52 )
              {
                v52[1] = 0;
                v112.m128i_i64[0] = nn;
                v110.m128i_i64[0] = v50;
                qfree(v53);
                v49 = *(_QWORD *)(v48 + 184);
                nn = v112.m128i_i64[0];
                v50 = v110.m128i_i64[0];
              }
            }
          }
          *(_QWORD *)(v48 + 192) = 0;
          qfree(v49);
        }
        v54 = *(_QWORD *)(v48 + 160);
        if ( v54 )
        {
          *(_QWORD *)(v48 + 168) = 0;
          qfree(v54);
        }
        v55 = *(_QWORD *)(v48 + 128);
        if ( v55 )
        {
          v56 = *(_QWORD *)(v48 + 136);
          if ( v56 )
          {
            for ( i1 = 0; i1 != v56; ++i1 )
            {
              v58 = (__int64 *)(v55 + 32 * i1);
              v59 = *v58;
              if ( *v58 )
              {
                v58[1] = 0;
                v112.m128i_i64[0] = i1;
                v110.m128i_i64[0] = v56;
                qfree(v59);
                v55 = *(_QWORD *)(v48 + 128);
                i1 = v112.m128i_i64[0];
                v56 = v110.m128i_i64[0];
              }
            }
          }
          *(_QWORD *)(v48 + 136) = 0;
          qfree(v55);
        }
        sub_255050(v48 + 16, *(double *)v47.m128_u64);
        j__qfree(v48);
      }
    }
    if ( v31 )
    {
      v19 = (*(_DWORD *)(v31 + 104))-- == 1;
      if ( v19 )
      {
        sub_258970((__int64 *)v31);
        v60 = *(_QWORD *)(v31 + 184);
        if ( v60 )
        {
          v61 = *(_QWORD *)(v31 + 192);
          if ( v61 )
          {
            for ( i2 = 0; i2 != v61; ++i2 )
            {
              v63 = (__int64 *)(v60 + 24 * i2);
              v64 = *v63;
              if ( *v63 )
              {
                v63[1] = 0;
                v110.m128i_i64[0] = v61;
                qfree(v64);
                v60 = *(_QWORD *)(v31 + 184);
                v61 = v110.m128i_i64[0];
              }
            }
          }
          *(_QWORD *)(v31 + 192) = 0;
          qfree(v60);
        }
        v65 = *(_QWORD *)(v31 + 160);
        if ( v65 )
        {
          *(_QWORD *)(v31 + 168) = 0;
          qfree(v65);
        }
        v66 = *(_QWORD *)(v31 + 128);
        if ( v66 )
        {
          v67 = *(_QWORD *)(v31 + 136);
          if ( v67 )
          {
            for ( i3 = 0; i3 != v67; ++i3 )
            {
              v69 = (__int64 *)(v66 + 32 * i3);
              v70 = *v69;
              if ( *v69 )
              {
                v69[1] = 0;
                v110.m128i_i64[0] = v67;
                qfree(v70);
                v66 = *(_QWORD *)(v31 + 128);
                v67 = v110.m128i_i64[0];
              }
            }
          }
          *(_QWORD *)(v31 + 136) = 0;
          qfree(v66);
        }
        sub_255050(v31 + 16, *(double *)v47.m128_u64);
        j__qfree(v31);
      }
    }
  }
  return v135 - __readfsqword(0x28u);
}

