unsigned __int64 __fastcall sub_35F6A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 i; // r12
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  const __m128i *v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __m128i *v13; // rsi
  unsigned __int64 v14; // rax
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 j; // rdx
  unsigned __int64 k; // rax
  __m128i *v20; // rbp
  const __m128i *v21; // rdi
  bool v22; // zf
  __int64 v23; // rdi
  __int64 v24; // rbp
  __int64 kk; // rbx
  _QWORD *v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rbp
  __int64 mm; // rbx
  _QWORD *v30; // rax
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
  __m128i v47; // xmm0
  unsigned __int64 v48; // r14
  __int64 v49; // rsi
  __int64 v50; // r8
  __int64 nn; // rdx
  _QWORD *v52; // rcx
  __int64 v53; // rsi
  __int64 v54; // r8
  __int64 i1; // rcx
  _QWORD *v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rsi
  __int64 i2; // r14
  _QWORD *v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rsi
  __int64 i3; // r14
  _QWORD *v64; // rax
  __int64 v66; // rbx
  __int64 v67; // r14
  int v68; // eax
  int v69; // ecx
  __m128i v70; // xmm3
  __m128i v71; // xmm0
  __m128 v72; // xmm1
  __int64 v73; // rdx
  __m128i v74; // xmm3
  int v75; // eax
  __m128i v76; // xmm2
  __m128i v77; // xmm3
  __m128i v78; // xmm0
  __m128i v79; // xmm0
  __m128i v80; // xmm0
  unsigned __int64 v81; // r15
  __int64 v82; // rsi
  __int64 v83; // r9
  __int64 m; // rdx
  _QWORD *v85; // rcx
  __int64 v86; // rsi
  __int64 v87; // r9
  __int64 n; // rcx
  _QWORD *v89; // rdx
  __int64 v90; // rdi
  __int64 v91; // rsi
  __int64 ii; // rax
  _QWORD *v93; // rcx
  __int64 v94; // rdi
  __int64 v95; // rsi
  __int64 jj; // rdx
  _QWORD *v97; // rax
  __m128i v98; // [rsp+0h] [rbp-178h] BYREF
  __int64 v99; // [rsp+10h] [rbp-168h]
  __m128 *v100; // [rsp+18h] [rbp-160h]
  __m128i v101; // [rsp+20h] [rbp-158h] BYREF
  __m128i v102; // [rsp+30h] [rbp-148h] BYREF
  __int64 v103; // [rsp+40h] [rbp-138h]
  __int64 v104; // [rsp+48h] [rbp-130h]
  __m128i v105; // [rsp+50h] [rbp-128h]
  __m128i v106; // [rsp+60h] [rbp-118h]
  __m128i v107; // [rsp+70h] [rbp-108h] BYREF
  __m128i v108; // [rsp+80h] [rbp-F8h] BYREF
  __m128i v109; // [rsp+90h] [rbp-E8h] BYREF
  int v110; // [rsp+A0h] [rbp-D8h]
  int v111; // [rsp+A4h] [rbp-D4h]
  __int64 v112; // [rsp+A8h] [rbp-D0h]
  int v113; // [rsp+B0h] [rbp-C8h]
  int v114; // [rsp+B8h] [rbp-C0h]
  __m128 v115; // [rsp+C0h] [rbp-B8h] BYREF
  __m128i v116; // [rsp+D0h] [rbp-A8h]
  __m128i v117; // [rsp+E0h] [rbp-98h]
  __m128i v118; // [rsp+F0h] [rbp-88h]
  __m128i v119; // [rsp+100h] [rbp-78h]
  __m128i v120; // [rsp+110h] [rbp-68h]
  int v121; // [rsp+120h] [rbp-58h]
  int v122; // [rsp+124h] [rbp-54h]
  __int64 v123; // [rsp+128h] [rbp-50h]
  __int64 v124; // [rsp+130h] [rbp-48h]
  unsigned __int64 v125; // [rsp+138h] [rbp-40h]

  v125 = __readfsqword(0x28u);
  v3 = a2 - a1;
  if ( a2 - a1 <= 1920 )
    return v125 - __readfsqword(0x28u);
  for ( i = a2; ; i = (__int64)v10 )
  {
    v7 = 0xEEEEEEEEEEEEEEEFLL * (v3 >> 3);
    v8 = v7 >> 1;
    if ( !a3 )
      break;
    v9 = *(_QWORD *)(i - 16);
    --a3;
    v10 = (const __m128i *)(a1 + 120);
    v11 = 15 * v8;
    v12 = *(_QWORD *)(a1 + 224);
    v13 = (__m128i *)(a1 + 8 * v11);
    v14 = v13[6].m128i_u64[1];
    if ( v14 >= v12 )
    {
      if ( v9 < v12 )
      {
LABEL_20:
        sub_35F290((const __m128i *)a1, (__m128i *)(a1 + 120));
        goto LABEL_8;
      }
      if ( v9 >= v14 )
      {
LABEL_19:
        sub_35F290((const __m128i *)a1, v13);
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
    sub_35F290((const __m128i *)a1, (__m128i *)(i - 120));
LABEL_8:
    for ( j = i; ; j = (__int64)v20 )
    {
      for ( k = *(_QWORD *)(a1 + 104); k < v10[6].m128i_i64[1]; v10 = (const __m128i *)((char *)v10 + 120) )
        ;
      v20 = (__m128i *)(j - 120);
      if ( *(_QWORD *)(j - 16) < k )
      {
        do
          v20 = (__m128i *)((char *)v20 - 120);
        while ( v20[6].m128i_i64[1] < k );
      }
      if ( v10 >= v20 )
        break;
      v21 = v10;
      v10 = (const __m128i *)((char *)v10 + 120);
      sub_35F290(v21, v20);
    }
    sub_35F6A0(
      (_DWORD)v10,
      i,
      a3,
      v15,
      v16,
      v17,
      v98.m128i_i32[0],
      v98.m128i_i32[2],
      v99,
      (_DWORD)v100,
      v101.m128i_i32[0],
      v101.m128i_i32[2],
      v102.m128i_i32[0],
      v102.m128i_i8[8],
      v103,
      v104,
      v105.m128i_i32[0],
      v105.m128i_i32[2],
      v106.m128i_i32[0],
      v106.m128i_i32[2],
      v107.m128i_i32[0],
      v107.m128i_i32[2],
      v108.m128i_i32[0],
      v108.m128i_i32[2],
      v109.m128i_i32[0],
      v109.m128i_i32[2],
      v110,
      v112,
      v113,
      v114,
      v115.m128_i32[0],
      v115.m128_i32[2],
      v116.m128i_i32[0],
      v116.m128i_i32[2],
      v117.m128i_i32[0],
      v117.m128i_i32[2],
      v118.m128i_i32[0],
      v118.m128i_i32[2],
      v119.m128i_i32[0],
      v119.m128i_i32[2],
      v120.m128i_i32[0],
      v120.m128i_i32[2],
      v121,
      v123,
      v124);
    v3 = (__int64)v10->m128i_i64 - a1;
    if ( (__int64)v10->m128i_i64 - a1 <= 1920 )
      return v125 - __readfsqword(0x28u);
  }
  v98.m128i_i64[0] = v8 - 1;
  v66 = a1 + 120 * v8;
  v100 = &v115;
  while ( 1 )
  {
    v67 = *(_QWORD *)(v66 - 120);
    v103 = v67;
    if ( v67 )
      ++*(_DWORD *)(v67 + 104);
    v68 = *(_DWORD *)(v66 - 24);
    v69 = *(_DWORD *)(v66 - 20);
    v70 = _mm_loadu_si128((const __m128i *)(v66 - 72));
    v71 = _mm_loadu_si128((const __m128i *)(v66 - 88));
    v72 = _mm_loadh_ps((const double *)(v66 - 112));
    *(_QWORD *)(v66 - 112) = 0;
    v73 = *(_QWORD *)(v66 - 16);
    v110 = v68;
    v107 = v70;
    v74 = _mm_loadu_si128((const __m128i *)(v66 - 56));
    v75 = *(_DWORD *)(v66 - 8);
    v76 = _mm_loadu_si128((const __m128i *)(v66 - 104));
    v111 = v69;
    v108 = v74;
    v77 = _mm_loadu_si128((const __m128i *)(v66 - 40));
    v112 = v73;
    v113 = v75;
    *(_OWORD *)(v66 - 104) = 0;
    v106 = v71;
    v109 = v77;
    if ( v67 )
      ++*(_DWORD *)(v67 + 104);
    v117 = v71;
    v78 = _mm_load_si128(&v107);
    v122 = v69;
    v118 = v78;
    v79 = _mm_load_si128(&v108);
    v121 = v110;
    v119 = v79;
    v80 = _mm_load_si128(&v109);
    v123 = v73;
    v104 = 0;
    LODWORD(v124) = v75;
    v105 = 0;
    v116 = v76;
    v120 = v80;
    v115 = v72;
    sub_358F00(a1, v98.m128i_i64[0], v7, (__int64)v100);
    v81 = v115.m128_u64[0];
    if ( v115.m128_u64[1] )
      qfree();
    if ( v81 )
    {
      v22 = (*(_DWORD *)(v81 + 104))-- == 1;
      if ( v22 )
      {
        sub_2535B0((__int64 *)v81);
        v82 = *(_QWORD *)(v81 + 184);
        if ( v82 )
        {
          v83 = *(_QWORD *)(v81 + 192);
          if ( v83 )
          {
            for ( m = 0; m != v83; ++m )
            {
              v85 = (_QWORD *)(v82 + 24 * m);
              if ( *v85 )
              {
                v85[1] = 0;
                v102.m128i_i64[0] = m;
                v101.m128i_i64[0] = v83;
                qfree();
                m = v102.m128i_i64[0];
                v83 = v101.m128i_i64[0];
                v82 = *(_QWORD *)(v81 + 184);
              }
            }
          }
          *(_QWORD *)(v81 + 192) = 0;
          qfree();
        }
        if ( *(_QWORD *)(v81 + 160) )
        {
          *(_QWORD *)(v81 + 168) = 0;
          qfree();
        }
        v86 = *(_QWORD *)(v81 + 128);
        if ( v86 )
        {
          v87 = *(_QWORD *)(v81 + 136);
          if ( v87 )
          {
            for ( n = 0; n != v87; ++n )
            {
              v89 = (_QWORD *)(v86 + 32 * n);
              if ( *v89 )
              {
                v89[1] = 0;
                v102.m128i_i64[0] = n;
                v101.m128i_i64[0] = v87;
                qfree();
                n = v102.m128i_i64[0];
                v87 = v101.m128i_i64[0];
                v86 = *(_QWORD *)(v81 + 128);
              }
            }
          }
          *(_QWORD *)(v81 + 136) = 0;
          qfree();
        }
        sub_24FC90(v81 + 16);
        j__qfree();
      }
    }
    if ( !v98.m128i_i64[0] )
      break;
    --v98.m128i_i64[0];
    if ( v67 )
    {
      v22 = (*(_DWORD *)(v67 + 104))-- == 1;
      if ( v22 )
      {
        sub_2535B0((__int64 *)v67);
        v90 = *(_QWORD *)(v67 + 184);
        if ( v90 )
        {
          v91 = *(_QWORD *)(v67 + 192);
          if ( v91 )
          {
            for ( ii = 0; ii != v91; ++ii )
            {
              v93 = (_QWORD *)(v90 + 24 * ii);
              if ( *v93 )
              {
                v93[1] = 0;
                v102.m128i_i64[0] = ii;
                v101.m128i_i64[0] = v91;
                qfree();
                ii = v102.m128i_i64[0];
                v90 = *(_QWORD *)(v67 + 184);
              }
            }
          }
          *(_QWORD *)(v67 + 192) = 0;
          qfree();
        }
        if ( *(_QWORD *)(v67 + 160) )
        {
          *(_QWORD *)(v67 + 168) = 0;
          qfree();
        }
        v94 = *(_QWORD *)(v67 + 128);
        if ( v94 )
        {
          v95 = *(_QWORD *)(v67 + 136);
          if ( v95 )
          {
            for ( jj = 0; jj != v95; ++jj )
            {
              v97 = (_QWORD *)(v94 + 32 * jj);
              if ( *v97 )
              {
                v97[1] = 0;
                v102.m128i_i64[0] = v95;
                v101.m128i_i64[0] = jj;
                qfree();
                jj = v101.m128i_i64[0];
                v94 = *(_QWORD *)(v67 + 128);
              }
            }
          }
          *(_QWORD *)(v67 + 136) = 0;
          qfree();
        }
        sub_24FC90(v67 + 16);
        j__qfree();
      }
    }
    v66 -= 120;
  }
  if ( v67 )
  {
    v22 = (*(_DWORD *)(v67 + 104))-- == 1;
    if ( v22 )
    {
      sub_2535B0((__int64 *)v67);
      v23 = *(_QWORD *)(v67 + 184);
      if ( v23 )
      {
        v24 = *(_QWORD *)(v67 + 192);
        if ( v24 )
        {
          for ( kk = 0; kk != v24; ++kk )
          {
            v26 = (_QWORD *)(v23 + 24 * kk);
            if ( *v26 )
            {
              v26[1] = 0;
              qfree();
              v23 = *(_QWORD *)(v67 + 184);
            }
          }
        }
        *(_QWORD *)(v67 + 192) = 0;
        qfree();
      }
      if ( *(_QWORD *)(v67 + 160) )
      {
        *(_QWORD *)(v67 + 168) = 0;
        qfree();
      }
      v27 = *(_QWORD *)(v67 + 128);
      if ( v27 )
      {
        v28 = *(_QWORD *)(v67 + 136);
        if ( v28 )
        {
          for ( mm = 0; mm != v28; ++mm )
          {
            v30 = (_QWORD *)(v27 + 32 * mm);
            if ( *v30 )
            {
              v30[1] = 0;
              qfree();
              v27 = *(_QWORD *)(v67 + 128);
            }
          }
        }
        *(_QWORD *)(v67 + 136) = 0;
        qfree();
      }
      sub_24FC90(v67 + 16);
      j__qfree();
    }
  }
  while ( i - a1 > 120 )
  {
    v31 = *(_QWORD *)(i - 120);
    i -= 120;
    v103 = v31;
    if ( v31 )
      ++*(_DWORD *)(v31 + 104);
    v32 = _mm_loadu_si128((const __m128i *)(i + 16));
    v33 = *(_QWORD *)(i + 8);
    *(_OWORD *)(i + 16) = 0;
    v34 = _mm_loadu_si128((const __m128i *)(i + 48));
    v35 = _mm_loadu_si128((const __m128i *)(i + 32));
    v36 = _mm_loadh_ps((const double *)(i + 8));
    v104 = v33;
    v37 = *(_DWORD *)(i + 100);
    v107 = v34;
    LODWORD(v33) = *(_DWORD *)(i + 96);
    v38 = *(_QWORD *)(i + 104);
    v39 = _mm_loadu_si128((const __m128i *)(i + 64));
    v40 = *(_DWORD *)(i + 112);
    *(_QWORD *)(i + 8) = 0;
    v110 = v33;
    v108 = v39;
    v41 = _mm_loadu_si128((const __m128i *)(i + 80));
    v111 = v37;
    v112 = v38;
    v113 = v40;
    v102 = (__m128i)v36;
    v105 = v32;
    v101 = v32;
    v106 = v35;
    v98 = v35;
    v109 = v41;
    sub_3584C0(i, (const __m128i *)a1);
    v42 = _mm_load_si128(&v98);
    v43 = _mm_load_si128(&v101);
    v44 = (__m128)_mm_load_si128(&v102);
    if ( v31 )
      ++*(_DWORD *)(v31 + 104);
    LODWORD(v124) = v40;
    v105 = 0;
    v117 = v42;
    v45 = _mm_load_si128(&v107);
    v122 = v37;
    v121 = v110;
    v118 = v45;
    v46 = _mm_load_si128(&v108);
    v104 = 0;
    v119 = v46;
    v47 = _mm_load_si128(&v109);
    v123 = v38;
    v116 = v43;
    v120 = v47;
    v115 = v44;
    sub_358F00(a1, 0, 0xEEEEEEEEEEEEEEEFLL * ((i - a1) >> 3), (__int64)v100);
    v48 = v115.m128_u64[0];
    if ( v115.m128_u64[1] )
      qfree();
    if ( v48 )
    {
      v22 = (*(_DWORD *)(v48 + 104))-- == 1;
      if ( v22 )
      {
        sub_2535B0((__int64 *)v48);
        v49 = *(_QWORD *)(v48 + 184);
        if ( v49 )
        {
          v50 = *(_QWORD *)(v48 + 192);
          if ( v50 )
          {
            for ( nn = 0; nn != v50; ++nn )
            {
              v52 = (_QWORD *)(v49 + 24 * nn);
              if ( *v52 )
              {
                v52[1] = 0;
                v101.m128i_i64[0] = nn;
                v98.m128i_i64[0] = v50;
                qfree();
                v49 = *(_QWORD *)(v48 + 184);
                nn = v101.m128i_i64[0];
                v50 = v98.m128i_i64[0];
              }
            }
          }
          *(_QWORD *)(v48 + 192) = 0;
          qfree();
        }
        if ( *(_QWORD *)(v48 + 160) )
        {
          *(_QWORD *)(v48 + 168) = 0;
          qfree();
        }
        v53 = *(_QWORD *)(v48 + 128);
        if ( v53 )
        {
          v54 = *(_QWORD *)(v48 + 136);
          if ( v54 )
          {
            for ( i1 = 0; i1 != v54; ++i1 )
            {
              v56 = (_QWORD *)(v53 + 32 * i1);
              if ( *v56 )
              {
                v56[1] = 0;
                v101.m128i_i64[0] = i1;
                v98.m128i_i64[0] = v54;
                qfree();
                v53 = *(_QWORD *)(v48 + 128);
                i1 = v101.m128i_i64[0];
                v54 = v98.m128i_i64[0];
              }
            }
          }
          *(_QWORD *)(v48 + 136) = 0;
          qfree();
        }
        sub_24FC90(v48 + 16);
        j__qfree();
      }
    }
    if ( v31 )
    {
      v22 = (*(_DWORD *)(v31 + 104))-- == 1;
      if ( v22 )
      {
        sub_2535B0((__int64 *)v31);
        v57 = *(_QWORD *)(v31 + 184);
        if ( v57 )
        {
          v58 = *(_QWORD *)(v31 + 192);
          if ( v58 )
          {
            for ( i2 = 0; i2 != v58; ++i2 )
            {
              v60 = (_QWORD *)(v57 + 24 * i2);
              if ( *v60 )
              {
                v60[1] = 0;
                v98.m128i_i64[0] = v58;
                qfree();
                v57 = *(_QWORD *)(v31 + 184);
                v58 = v98.m128i_i64[0];
              }
            }
          }
          *(_QWORD *)(v31 + 192) = 0;
          qfree();
        }
        if ( *(_QWORD *)(v31 + 160) )
        {
          *(_QWORD *)(v31 + 168) = 0;
          qfree();
        }
        v61 = *(_QWORD *)(v31 + 128);
        if ( v61 )
        {
          v62 = *(_QWORD *)(v31 + 136);
          if ( v62 )
          {
            for ( i3 = 0; i3 != v62; ++i3 )
            {
              v64 = (_QWORD *)(v61 + 32 * i3);
              if ( *v64 )
              {
                v64[1] = 0;
                v98.m128i_i64[0] = v62;
                qfree();
                v61 = *(_QWORD *)(v31 + 128);
                v62 = v98.m128i_i64[0];
              }
            }
          }
          *(_QWORD *)(v31 + 136) = 0;
          qfree();
        }
        sub_24FC90(v31 + 16);
        j__qfree();
      }
    }
  }
  return v125 - __readfsqword(0x28u);
}

