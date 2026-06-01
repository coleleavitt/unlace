__int64 __fastcall sub_12350(
        char *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int128 a9,
        __int128 a10)
{
  __int64 v10; // rax
  char *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r12d
  int v16; // eax
  const char *v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // esi
  _BYTE *v22; // rax
  size_t v23; // rbx
  char v24; // al
  unsigned __int8 v25; // r15
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 v32; // r9
  __int128 v33; // xmm0
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v39; // r15d
  __m128i v41; // xmm0
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  const char *v51; // rdx
  __int64 v52; // rax
  const char *v53; // rdx
  const char *v54; // rsi
  const char *v55; // rsi
  const char *v56; // rdx
  const char *v57; // rsi
  __int64 v58; // rax
  int v59; // esi
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rax
  const char *v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  char *v75; // rdx
  __int128 v76; // xmm0
  char *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rsi
  __int64 v80; // r8
  __int64 v81; // rsi
  __int64 v82; // rax
  __int128 v83; // [rsp+10h] [rbp-350h]
  __int64 v84; // [rsp+20h] [rbp-340h]
  __int64 v85; // [rsp+30h] [rbp-330h]
  __int64 v86; // [rsp+48h] [rbp-318h]
  __int64 v87; // [rsp+48h] [rbp-318h]
  __int64 v89; // [rsp+78h] [rbp-2E8h] BYREF
  __int64 v90; // [rsp+80h] [rbp-2E0h] BYREF
  __int64 v91; // [rsp+88h] [rbp-2D8h] BYREF
  char *v92; // [rsp+90h] [rbp-2D0h] BYREF
  __int64 v93; // [rsp+98h] [rbp-2C8h]
  _QWORD v94[2]; // [rsp+B0h] [rbp-2B0h] BYREF
  char v95; // [rsp+C0h] [rbp-2A0h]
  const char *v96; // [rsp+D0h] [rbp-290h] BYREF
  unsigned __int64 v97; // [rsp+D8h] [rbp-288h]
  const char *v98; // [rsp+F0h] [rbp-270h] BYREF
  __int128 v99; // [rsp+F8h] [rbp-268h]
  size_t n[3]; // [rsp+110h] [rbp-250h] BYREF
  int v101; // [rsp+128h] [rbp-238h]
  __int16 v102; // [rsp+12Ch] [rbp-234h]
  const char *v103; // [rsp+130h] [rbp-230h] BYREF
  const char *v104; // [rsp+138h] [rbp-228h] BYREF
  __int128 v105; // [rsp+140h] [rbp-220h]
  __int64 v106; // [rsp+150h] [rbp-210h] BYREF
  __int128 v107; // [rsp+158h] [rbp-208h]
  __int128 v108; // [rsp+168h] [rbp-1F8h]
  __int64 v109; // [rsp+178h] [rbp-1E8h]
  int v110; // [rsp+180h] [rbp-1E0h]
  __int64 v111; // [rsp+188h] [rbp-1D8h]
  __int128 v112; // [rsp+190h] [rbp-1D0h]
  __int64 v113; // [rsp+1A0h] [rbp-1C0h] BYREF
  __int128 v114; // [rsp+1A8h] [rbp-1B8h]
  __int128 v115; // [rsp+1B8h] [rbp-1A8h]
  __int64 v116; // [rsp+1C8h] [rbp-198h]
  int v117; // [rsp+1D0h] [rbp-190h]
  int v118; // [rsp+1E0h] [rbp-180h] BYREF
  __int64 v119; // [rsp+1E8h] [rbp-178h]
  int *v120; // [rsp+1F0h] [rbp-170h]
  int *v121; // [rsp+1F8h] [rbp-168h]
  __int64 v122; // [rsp+200h] [rbp-160h]
  __int64 v123; // [rsp+208h] [rbp-158h] BYREF
  __int128 v124; // [rsp+210h] [rbp-150h]
  __int128 v125; // [rsp+220h] [rbp-140h]
  __int64 v126; // [rsp+230h] [rbp-130h]
  int v127; // [rsp+238h] [rbp-128h]
  int v128; // [rsp+248h] [rbp-118h] BYREF
  __int64 v129; // [rsp+250h] [rbp-110h]
  int *v130; // [rsp+258h] [rbp-108h]
  int *v131; // [rsp+260h] [rbp-100h]
  __int64 v132; // [rsp+268h] [rbp-F8h]
  __int64 v133; // [rsp+270h] [rbp-F0h]
  __int64 v134; // [rsp+278h] [rbp-E8h]
  __m128i v135; // [rsp+280h] [rbp-E0h] BYREF
  __int64 v136; // [rsp+290h] [rbp-D0h]
  __m128i v137; // [rsp+2A0h] [rbp-C0h] BYREF
  __int64 v138; // [rsp+2B0h] [rbp-B0h]
  __m128i v139; // [rsp+2C0h] [rbp-A0h]
  __m128i v140; // [rsp+2D0h] [rbp-90h]
  __m128i v141; // [rsp+2E0h] [rbp-80h]
  __m128i v142; // [rsp+2F0h] [rbp-70h] BYREF
  __m128i v143; // [rsp+300h] [rbp-60h] BYREF
  __m128i v144; // [rsp+310h] [rbp-50h] BYREF
  unsigned __int64 v145; // [rsp+328h] [rbp-38h]

  v145 = __readfsqword(0x28u);
  v10 = sub_BB20();
  v15 = sub_A170(v10);
  v16 = *(_DWORD *)(a2 + 108);
  if ( (v16 & 0x202) != 0 )
  {
    v17 = "union";
    if ( v15 != 3 )
    {
      v17 = "struct";
      v11 = "class";
      if ( v15 == 4 )
        v17 = "class";
    }
    if ( (v16 & 2) == 0 )
    {
      if ( (v16 & 0x200) == 0 )
        goto LABEL_7;
      goto LABEL_53;
    }
    sub_10160(
      (__int64)&v103,
      a2,
      (__int64)v11,
      v12,
      v13,
      v14,
      (__int128)_mm_loadu_si128((const __m128i *)&a9),
      (__int128)_mm_loadu_si128((const __m128i *)&a10));
    v71 = s1;
    if ( v104 )
      v71 = v103;
    sub_7470((__int64)"%-12s %s\n", v17, v71);
    if ( v103 )
    {
      v104 = nullptr;
      qfree(v103);
    }
    if ( (*(_DWORD *)(a2 + 108) & 0x200) != 0 )
LABEL_53:
      sub_7470((__int64)"%-12s udt counter %zu\n", v17, ++qword_29378);
  }
LABEL_7:
  v18 = sub_BB20();
  sub_A290((__int64)&v135, v18, v19, v20);
  v21 = 0;
  memset(n, 0, sizeof(n));
  v22 = (_BYTE *)qvector_reserve(n, 0, 1, 1);
  n[1] = 1;
  n[0] = (size_t)v22;
  *v22 = 0;
  v23 = n[1];
  v103 = a1;
  v104 = nullptr;
  v105 = 0;
  if ( n[1] )
  {
    v77 = (char *)qalloc_or_throw(n[1]);
    v21 = n[0];
    v104 = v77;
    *((_QWORD *)&v105 + 1) = v23;
    memcpy(v77, (const void *)n[0], v23);
    *(_QWORD *)&v105 = v23;
  }
  v106 = 0;
  v120 = &v118;
  v121 = &v118;
  v109 = 0;
  v110 = 1;
  v111 = 0;
  v113 = 0;
  v116 = 0;
  v117 = 1;
  v118 = 0;
  v119 = 0;
  v122 = 0;
  v123 = 0;
  v126 = 0;
  v127 = 1;
  v128 = 0;
  v129 = 0;
  v130 = &v128;
  v131 = &v128;
  v132 = 0;
  v133 = 0;
  v134 = 0;
  v107 = 0;
  v108 = 0;
  v112 = 0;
  v114 = 0;
  v115 = 0;
  v124 = 0;
  v125 = 0;
  if ( n[0] )
  {
    n[1] = 0;
    qfree(n[0]);
  }
  v24 = 29;
  HIBYTE(v110) = v15 == 3;
  if ( v15 != 3 )
    v24 = 13;
  v25 = v24;
  sub_C420((__int64)&v92);
  v26 = sub_BB20();
  if ( !(unsigned int)sub_AB00(
                        v26,
                        v21,
                        v27,
                        v28,
                        v29,
                        v30,
                        (__int128)_mm_loadu_si128((const __m128i *)&a9),
                        _mm_loadu_si128((const __m128i *)&a10).m128i_i64[0]) )
  {
    v33 = (__int128)_mm_load_si128(&v135);
    v21 = (int)a1;
    if ( !(unsigned __int8)sub_FFD0((__int64)&v104, a1, v25, (__int64 *)a2, v31, v32, *(double *)&v33, a4, v33, v136) )
      goto LABEL_52;
  }
  v34 = sub_BB20();
  if ( !(unsigned int)sub_B160(v34) )
  {
    v39 = 1;
    goto LABEL_17;
  }
  sub_D8F0((__int64)&v106, v21, v35, v36, v37, v38, (__int128)_mm_load_si128(&v135), v136);
  if ( ((v15 - 2) & 0xFFFFFFFD) != 0 )
    goto LABEL_50;
  a4 = _mm_loadu_si128((const __m128i *)&a9);
  v41 = _mm_loadu_si128((const __m128i *)&a10);
  v139 = a4;
  v140 = v41;
  v141 = a4;
  v142 = v41;
  v42 = sub_BB20();
  sub_B4C0((__int64)&v143, v42, v43, v44);
  v45 = sub_BB20();
  v46 = v143.m128i_u32[0];
  if ( !(unsigned int)sub_B610(v45, v143.m128i_u32[0]) )
  {
    if ( (*(_BYTE *)(a2 + 108) & 2) != 0 )
    {
      sub_10160((__int64)n, v46, v47, v48, v49, v50, (__int128)_mm_load_si128(&v143), (__int128)_mm_load_si128(&v144));
      v51 = s1;
      if ( n[1] )
        v51 = (const char *)n[0];
      sub_7470((__int64)"%-12s %s\n", "vtbl-layout", v51);
      if ( n[0] )
      {
        n[1] = 0;
        qfree(n[0]);
      }
    }
    HIDWORD(v109) |= 0x80u;
    v94[1] = &v103;
    v94[0] = a2;
    v95 = 1;
    v52 = sub_BB20();
    if ( !(unsigned int)sub_B5B0(v52, (__int64)sub_1BFB0, (__int64)v94) )
    {
      sub_C7C0((__int64)&v96);
      if ( v97 > 1 )
      {
        memset(n, 0, sizeof(n));
        v53 = s1;
        if ( (_QWORD)v105 )
          v53 = v104;
        sub_67C0((__int64 *)n, (__int64)"%s_vtbl_layout", v53);
        v98 = nullptr;
        create_tinfo(&v98, 13, 13, &v113);
        v54 = s1;
        if ( n[1] )
          v54 = (const char *)n[0];
        if ( (unsigned int)sub_EB50(&v98, v54, (_QWORD *)a2, 1u, nullptr) )
          goto LABEL_71;
        v55 = s1;
        if ( v97 )
          v55 = v96;
        if ( (unsigned int)sub_EB50(&v98, v55, (_QWORD *)a2, 0, nullptr) )
        {
LABEL_71:
          clear_tinfo_t(&v98);
          if ( n[0] )
          {
            n[1] = 0;
            qfree(n[0]);
          }
          goto LABEL_47;
        }
        clear_tinfo_t(&v98);
        if ( n[0] )
        {
          n[1] = 0;
          qfree(n[0]);
        }
      }
      HIDWORD(v126) |= 0x100u;
      v99 = 0;
      v56 = s1;
      v98 = nullptr;
      if ( (_QWORD)v105 )
        v56 = v104;
      sub_67C0((__int64 *)&v98, (__int64)"%s_vtbl", v56);
      v89 = 0;
      create_tinfo(&v89, 13, 13, &v123);
      v57 = s1;
      if ( (_QWORD)v99 )
        v57 = v98;
      if ( !(unsigned int)sub_EB50(&v89, v57, (_QWORD *)a2, 1u, nullptr) )
      {
        v86 = sub_BB20();
        v58 = sub_BB20();
        v59 = v58;
        *((_QWORD *)&v83 + 1) = _mm_load_si128(&v142).m128i_i64[1];
        sub_A290((__int64)&v137, v58, v60, v61);
        *(_QWORD *)&v83 = v138;
        if ( (unsigned int)sub_B490(v86, v59, v62, v63, v64, v65, (__int128)_mm_load_si128(&v137), v83) )
        {
          v78 = v107;
          v79 = v106;
          if ( *((_QWORD *)&v107 + 1) < (unsigned __int64)(v107 + 1) )
          {
            v106 = qvector_reserve(&v106, v106, v107 + 1, 144);
            v78 = v107;
            v79 = v106;
          }
          v80 = v79 + 144 * v78;
          *(_QWORD *)(v80 + 16) = 0;
          *(_OWORD *)(v80 + 24) = 0;
          *(_QWORD *)(v80 + 40) = 0;
          *(_QWORD *)(v80 + 112) = 1;
          *(_DWORD *)(v80 + 120) = -1;
          *(_QWORD *)(v80 + 128) = 0;
          *(_BYTE *)(v80 + 136) = 0;
          *(_OWORD *)v80 = 0;
          *(_OWORD *)(v80 + 48) = 0;
          *(_OWORD *)(v80 + 64) = 0;
          *(_QWORD *)&v107 = v107 + 1;
          v81 = *(_QWORD *)(v80 + 16);
          if ( *(_QWORD *)(v80 + 32) <= 9u )
          {
            v87 = v80;
            v82 = qvector_reserve(v80 + 16, v81, 10, 1);
            v80 = v87;
            v81 = v82;
            *(_QWORD *)(v87 + 16) = v82;
          }
          *(_QWORD *)(v80 + 24) = 10;
          *(_QWORD *)v81 = 0x6C62617466765F5FLL;
          *(_BYTE *)(v81 + 8) = 101;
          v84 = v80;
          *(_BYTE *)(*(_QWORD *)(v80 + 16) + 9LL) = 0;
          *(_DWORD *)(v80 + 132) |= 0x100u;
          v85 = v80 + 64;
          v91 = 0;
          v90 = 0;
          *(_OWORD *)n = 0;
          copy_tinfo_t(&n[1], &v90);
          n[2] = 0;
          copy_tinfo_t(&n[2], &v91);
          v101 = 0;
          v102 = 0;
          clear_tinfo_t(&v90);
          clear_tinfo_t(&v91);
          copy_tinfo_t(n, &v89);
          create_tinfo(v85, 10, 10, n);
          clear_tinfo_t(&n[2]);
          clear_tinfo_t(&n[1]);
          clear_tinfo_t(n);
          *(_QWORD *)(v84 + 8) = 8 * get_tinfo_size(0, *(_QWORD *)(v84 + 64), 0);
        }
      }
      clear_tinfo_t(&v89);
      if ( v98 )
      {
        *(_QWORD *)&v99 = 0;
        qfree(v98);
      }
LABEL_47:
      if ( v96 )
      {
        v97 = 0;
        qfree(v96);
      }
    }
  }
  n[1] = (size_t)&v103;
  LOBYTE(n[2]) = 1;
  n[0] = a2;
  v66 = sub_BB20();
  if ( (unsigned int)sub_A020(v66, (__int64)sub_173C0, (__int64)n) )
  {
LABEL_52:
    v39 = 0;
    goto LABEL_17;
  }
LABEL_50:
  v143 = _mm_load_si128(&v135);
  v144.m128i_i64[0] = v136;
  v67 = sub_BB20();
  if ( sub_AD40(v67) > 0 )
  {
    n[1] = (size_t)&v103;
    LOBYTE(n[2]) = 1;
    n[0] = a2;
    v70 = sub_BB20();
    sub_B2B0(v70, (__int64)sub_177B0, (__int64)n);
    if ( !LOBYTE(n[2]) )
      goto LABEL_52;
  }
  if ( v15 == 4 )
  {
    if ( (v134 & 7) != 1 )
LABEL_63:
      HIDWORD(v109) |= 0x80u;
  }
  else if ( ((v15 - 2) & 0xFFFFFFFD) == 0 && (v134 & 6) != 0 )
  {
    goto LABEL_63;
  }
  if ( !(unsigned __int8)sub_FB60(a1, (__int64)&v106, v25, a2, v68, v69, (__int128)_mm_load_si128(&v135)) )
    goto LABEL_52;
  v75 = (char *)s1;
  if ( v93 )
    v75 = v92;
  v76 = (__int128)_mm_load_si128(&v135);
  v39 = sub_EE80(a1, (_QWORD *)a2, v75, v72, v73, v74, *(double *)&v76, a4, v76, v136);
LABEL_17:
  if ( v92 )
  {
    v93 = 0;
    qfree(v92);
  }
  sub_DA20(&v103);
  return v39;
}

