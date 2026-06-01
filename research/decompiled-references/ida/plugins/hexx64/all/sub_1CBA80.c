__int64 __fastcall sub_1CBA80(__int64 a1, __int64 a2, unsigned __int64 a3, int a4, double a5, __m128 a6)
{
  _QWORD *exception; // rdi
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v13; // rax
  __m128i v14; // xmm0
  unsigned int v15; // eax
  __int64 v16; // rsi
  unsigned int v17; // ebx
  __int64 v18; // rcx
  char v19; // bl
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // r14d
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rcx
  _QWORD *v28; // r14
  _QWORD *v29; // rbx
  char v30; // al
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rsi
  int v37; // eax
  int v38; // ecx
  size_t v39; // rdx
  char v40; // al
  char v41; // dl
  __m128i *v42; // r12
  unsigned __int64 *v43; // rsi
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rdi
  unsigned __int64 v46; // rcx
  char v47; // si
  unsigned __int64 v48; // rcx
  char v49; // dl
  __int64 v50; // rax
  __m128i v51; // xmm0
  __int64 v52; // rax
  __int64 v53; // r13
  _QWORD **v54; // r12
  __int64 *v55; // rsi
  __int64 v56; // rax
  __int64 *v57; // rcx
  __int64 v58; // r14
  unsigned __int64 v59; // rdi
  unsigned __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // r12
  __int64 v63; // rbx
  _QWORD *v64; // rdi
  _QWORD *v65; // r14
  __int64 v66; // rdi
  __int64 v67; // rdi
  __m128i si128; // xmm1
  char *v69; // r12
  char *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  size_t v73; // rax
  int tinfo_size; // eax
  __int64 v75; // r14
  __int64 v76; // rax
  __int64 v77; // rsi
  __int64 v78; // rdi
  _QWORD *v79; // rdx
  _QWORD **v80; // rbx
  _QWORD **v81; // rax
  _QWORD **v82; // r14
  int v83; // eax
  int v84; // edx
  void *v85; // rdi
  __int64 *v86; // rbx
  _DWORD *v87; // r14
  _QWORD *v88; // rbx
  __int64 v89; // rsi
  __int64 v90; // rdx
  __int64 *v91; // [rsp+18h] [rbp-298h]
  _QWORD *v92; // [rsp+28h] [rbp-288h]
  unsigned __int8 v93; // [rsp+3Ah] [rbp-276h]
  char v94; // [rsp+3Bh] [rbp-275h]
  unsigned int i; // [rsp+3Ch] [rbp-274h]
  int v97; // [rsp+58h] [rbp-258h]
  bool v98; // [rsp+5Fh] [rbp-251h]
  unsigned int v99; // [rsp+60h] [rbp-250h]
  int v100; // [rsp+64h] [rbp-24Ch]
  int v102; // [rsp+78h] [rbp-238h]
  char v103; // [rsp+78h] [rbp-238h]
  char *src; // [rsp+80h] [rbp-230h]
  int srcb; // [rsp+80h] [rbp-230h]
  void *srca; // [rsp+80h] [rbp-230h]
  unsigned __int64 v107; // [rsp+88h] [rbp-228h] BYREF
  size_t n; // [rsp+90h] [rbp-220h]
  unsigned __int64 v109; // [rsp+98h] [rbp-218h]
  __int64 v110; // [rsp+A0h] [rbp-210h] BYREF
  __int64 v111; // [rsp+A8h] [rbp-208h] BYREF
  __int64 v112; // [rsp+B0h] [rbp-200h] BYREF
  __int64 v113; // [rsp+B8h] [rbp-1F8h] BYREF
  _QWORD v114[2]; // [rsp+C0h] [rbp-1F0h] BYREF
  __int64 v115; // [rsp+D0h] [rbp-1E0h] BYREF
  __int64 v116; // [rsp+D8h] [rbp-1D8h]
  __m128i v117; // [rsp+E0h] [rbp-1D0h] BYREF
  int v118[2]; // [rsp+F0h] [rbp-1C0h] BYREF
  __int64 v119; // [rsp+F8h] [rbp-1B8h]
  _QWORD **v120; // [rsp+100h] [rbp-1B0h] BYREF
  __int128 v121; // [rsp+108h] [rbp-1A8h]
  _QWORD *v122; // [rsp+120h] [rbp-190h] BYREF
  __int128 v123; // [rsp+128h] [rbp-188h]
  _QWORD v124[2]; // [rsp+140h] [rbp-170h] BYREF
  __int64 v125; // [rsp+150h] [rbp-160h] BYREF
  __int64 v126; // [rsp+158h] [rbp-158h]
  __int64 v127; // [rsp+160h] [rbp-150h] BYREF
  __int128 v128; // [rsp+168h] [rbp-148h]
  char v129[8]; // [rsp+180h] [rbp-130h] BYREF
  _QWORD v130[2]; // [rsp+188h] [rbp-128h]
  char v131[8]; // [rsp+198h] [rbp-118h] BYREF
  void *v132; // [rsp+1A0h] [rbp-110h]
  unsigned __int64 v133; // [rsp+1A8h] [rbp-108h]
  int v134; // [rsp+1C8h] [rbp-E8h]
  char v135[8]; // [rsp+1D0h] [rbp-E0h] BYREF
  __int64 v136; // [rsp+1D8h] [rbp-D8h]
  __int64 v137; // [rsp+1E0h] [rbp-D0h]
  void *dest; // [rsp+1F0h] [rbp-C0h] BYREF
  unsigned __int64 v139; // [rsp+1F8h] [rbp-B8h]
  unsigned __int64 v140; // [rsp+200h] [rbp-B0h]
  int v141; // [rsp+218h] [rbp-98h]
  char v142[24]; // [rsp+220h] [rbp-90h] BYREF
  char v143; // [rsp+270h] [rbp-40h] BYREF
  unsigned __int64 v144; // [rsp+278h] [rbp-38h]

  LODWORD(n) = a4;
  v94 = a4;
  v144 = __readfsqword(0x28u);
  v8 = *(_BYTE *)a3 == 15;
  v114[0] = 0;
  v114[1] = 0;
  v110 = 0;
  if ( v8 )
  {
    v92 = *(_QWORD **)(a3 + 8);
    v91 = v92 + 6;
  }
  else
  {
    v11 = sub_1C5030((char *)a3, (__int64)v114);
    if ( !(_BYTE)v11 )
      goto LABEL_8;
    v92 = v114;
    v91 = &v110;
  }
  v9 = *(_QWORD *)(a1 + 64);
  v125 = 0;
  v124[1] = v9;
  v124[0] = off_4DE8B8;
  v126 = 0;
  v127 = 0;
  v118[0] = 0;
  v128 = 0;
  copy_argloc();
  sub_1C76E0(&v120, (__int64)v118, *(_DWORD *)(a3 + 4), 0, 0.0);
  for_all_arglocs();
  v10 = *(int *)(a3 + 4);
  v122 = nullptr;
  *(_QWORD *)&v123 = v10;
  sub_316BB0(&v127, (__m128i *)&v122, 0.0, a6);
  LODWORD(v109) = *(_DWORD *)(a3 + 4);
  v93 = sub_1C8DE0((__int64)v124, (__int64)v91, 8 * (int)v109, 0, 0.0);
  cleanup_argloc();
  cleanup_argloc();
  if ( !v93 )
    goto LABEL_4;
  if ( (unsigned int)sub_64B20((__int64)&v125) == 2 )
  {
    if ( !sub_64930(&v125, 0) || !sub_64930(&v125, *(_DWORD *)(a3 + 4)) )
    {
      if ( !under_debugger )
        sub_383060(0xCECBu, 0.0);
LABEL_154:
      BUG();
    }
    goto LABEL_4;
  }
  v98 = sub_11E8C0((unsigned int *)a2);
  if ( v98 )
    v98 = a3 == a2 + 64;
  if ( (*(_BYTE *)(a3 + 1) & 0x40) != 0
    && ((get_tinfo_property() & 0x2F) != 0xD
     || (unsigned __int8)sub_1C3110((__int64)v92, 0, 0, 0.0)
     || (*(_BYTE *)(a2 + 5) & 8) != 0
     || !v98 && sub_120380((_BYTE *)a2, 1)) )
  {
    if ( !(_BYTE)n )
      goto LABEL_4;
  }
  else
  {
    v94 = 0;
  }
  v99 = sub_138140(*(_QWORD **)(a1 + 64), *(int *)(a3 + 4), 0, 0.0);
  if ( v99 == -1 )
  {
LABEL_4:
    v11 = 0;
    goto LABEL_5;
  }
  v13 = *(_QWORD *)(a1 + 64);
  v14.m128i_i64[0] = 0;
  v115 = 0;
  v116 = 0;
  LODWORD(v13) = *(_DWORD *)(*(_QWORD *)(v13 + 1504) + 80LL);
  v121 = 0;
  v120 = nullptr;
  v97 = v13;
  cleanup_argloc();
  LODWORD(v116) = v99;
  LODWORD(v115) = 3;
  v15 = sub_64960(&v125, 0);
  v16 = v15 + 1;
  v17 = v15;
  for ( i = sub_64960(&v125, v16); ; i = sub_64960(&v125, v16) )
  {
    if ( i == (_DWORD)v126 )
    {
      if ( v94 )
        *((_DWORD *)*v120 + 1) |= 0x40000u;
      if ( v98 )
      {
        v79 = (_QWORD *)a2;
      }
      else
      {
        v79 = *(_QWORD **)(a2 + 16);
        if ( (_QWORD)v128 )
        {
          v109 = *(_QWORD *)(a2 + 16);
          v88 = (_QWORD *)j__qalloc_or_throw(80, v16, (__int64)v79, v18);
          v89 = *(_QWORD *)(a2 + 24);
          v88[5] = 0;
          v88[4] = 0xFFFFFFFF00000000LL;
          v88[6] = 0xFFFFFFFF00000000LL;
          v88[7] = 0;
          v88[8] = 0xFFFFFFFF00000000LL;
          v88[9] = 0;
          sub_330970((__int64)v88, v89);
          v90 = v109;
          v14 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 4));
          *((_BYTE *)v88 + 64) = 1;
          *(_DWORD *)v88 = 61;
          v14.m128i_i64[0] = _mm_unpacklo_epi32(v14, _mm_cvtsi32_si128(v99)).m128i_u64[0];
          *(_QWORD *)((char *)v88 + 68) = v14.m128i_i64[0];
          v79 = sub_A3160(a1, v88, v90, *(double *)v14.m128i_i64);
        }
      }
      v80 = &v120[v121];
      v81 = v120;
      if ( v80 != v120 )
      {
        do
        {
          v82 = v81;
          v79 = sub_A3160(a1, *v81, (__int64)v79, *(double *)v14.m128i_i64);
          v81 = v82 + 1;
        }
        while ( v80 != v82 + 1 );
      }
      if ( *(_BYTE *)a3 == 15 )
      {
        v86 = *(__int64 **)(*(_QWORD *)(a3 + 8) + 8LL);
        sub_1CAA80(v86, 1u);
        v87 = (_DWORD *)*v86;
        cleanup_argloc();
        *v87 = 3;
        v87[2] = v99;
        *(_WORD *)(*v86 + 16) = 0;
        *(_WORD *)(*v86 + 18) = *(_DWORD *)(a3 + 4);
      }
      else
      {
        *(_BYTE *)a3 = 1;
        *(_DWORD *)(a3 + 8) = v99;
      }
      *(_BYTE *)(a3 + 1) |= 0x40u;
      **(_DWORD **)(a1 + 64) &= ~0x10000u;
      v83 = *(_DWORD *)(a1 + 24);
      BYTE1(v83) &= ~2u;
      LOBYTE(v83) = v83 | 0x80;
      *(_DWORD *)(a1 + 24) = v83;
      sub_1B26E0(a3);
      sub_A2520(a1, "replace_mop_by_kreg at %a: %s");
      v11 = v93;
      goto LABEL_142;
    }
    v20 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v17), _mm_cvtsi32_si128(i - v17));
    v21 = _mm_cmpgt_epi32((__m128i)0LL, v20);
    v14 = _mm_unpacklo_epi32(v20, v21);
    v117 = v14;
    v11 = sub_317E70(&v127, &v117, 0);
    v107 = v117.m128i_u64[1];
    if ( !(_BYTE)v11 )
      break;
    v14.m128i_i64[0] = 0;
    v122 = nullptr;
    v123 = 0;
    if ( v107 + v117.m128i_i64[0] - 1 >= v117.m128i_i64[0] )
    {
      v122 = (_QWORD *)qvector_reserve((__int64)&v122, 0, 1, 16);
      v14 = (__m128i)_mm_loadh_ps((const double *)&v107);
      *(__m128i *)&v122[2 * v123] = v14;
      *(_QWORD *)&v123 = v123 + 1;
    }
    v19 = sub_317F40(&v127, (__int64)&v122);
    if ( v122 )
    {
      *(_QWORD *)&v123 = 0;
      qfree((__int64)v122);
    }
    if ( !v19 )
    {
      if ( !under_debugger )
        sub_383060(0xCEABu, *(double *)v14.m128i_i64);
      goto LABEL_154;
    }
LABEL_21:
    v17 = i;
    v16 = i + 1;
  }
  v111 = v117.m128i_i64[0];
  v112 = v117.m128i_i64[0];
  sub_123A40((__int64)v118, (unsigned __int8 *)a3, v22, v23);
  if ( (unsigned __int8)sub_1C50C0(
                          (__int64)&v115,
                          *(_QWORD *)(a1 + 480),
                          (unsigned __int64 *)&v111,
                          v107,
                          *(int *)(a3 + 4)) )
  {
    v24 = v107;
    if ( (unsigned __int8)sub_1C50C0(
                            (__int64)v92,
                            *(_QWORD *)(a1 + 480),
                            (unsigned __int64 *)&v112,
                            v107,
                            *(int *)(a3 + 4)) )
    {
      v100 = v24;
      v26 = (unsigned int)v112;
      if ( LOBYTE(v118[0]) == 15 )
      {
        if ( !(unsigned __int8)sub_126980((__int64)v118, v112, v24, 3, *(double *)v14.m128i_i64) )
          goto LABEL_85;
      }
      else
      {
        v26 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL);
        if ( !(unsigned __int8)sub_126F10(v118, (unsigned __int64 *)v26, v112, v25, *(double *)v14.m128i_i64) )
          goto LABEL_85;
        v118[1] = v107;
      }
      v113 = 0;
      if ( LOBYTE(v118[0]) != 5 || v107 <= 0x10 )
      {
        v30 = 0;
        if ( v107 )
          goto LABEL_49;
LABEL_126:
        clear_tinfo_t();
        sub_11CDA0((__int64)v118);
        goto LABEL_21;
      }
      if ( *(_QWORD *)(v119 + 8) < *(_QWORD *)(*(_QWORD *)(a1 + 64) + 144LL) )
      {
        v26 = 2;
        if ( (get_tinfo_property() & 0x2F) == 0xD )
        {
          v14.m128i_i64[0] = 0;
          v26 = (__int64)v91;
          v122 = nullptr;
          v123 = 0;
          sub_3349B0((__int64)&v122, v91, v117.m128i_i64[0], nullptr, 3);
          v28 = v122;
          v29 = &v122[8 * (_QWORD)v123];
          if ( v29 != v122 )
          {
            do
            {
              v26 = v28[7];
              if ( v107 == get_tinfo_size() )
              {
                v26 = 2;
                if ( (get_tinfo_property() & 0x2F) == 0xD )
                {
                  v61 = v113;
                  v113 = v28[7];
                  v28[7] = v61;
                  v28 = v122;
                  goto LABEL_102;
                }
              }
              v28 += 8;
            }
            while ( v28 != v29 );
            v28 = v122;
          }
LABEL_102:
          if ( v28 )
          {
            v62 = v123;
            if ( (_QWORD)v123 )
            {
              v63 = 0;
              v64 = v28;
              do
              {
                v65 = &v64[8 * v63];
                clear_tinfo_t();
                v66 = v65[4];
                if ( v66 )
                {
                  v65[5] = 0;
                  qfree(v66);
                }
                v67 = v65[1];
                if ( v67 )
                {
                  v65[2] = 0;
                  qfree(v67);
                }
                ++v63;
                v64 = v122;
              }
              while ( v62 != v63 );
              v28 = v122;
            }
            *(_QWORD *)&v123 = 0;
            qfree((__int64)v28);
          }
        }
        v30 = v113;
        if ( (_BYTE)v113 )
          goto LABEL_49;
        si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
        v69 = &v143;
        v14.m128i_i64[0] = 0;
        v70 = v129;
        do
        {
          *((_DWORD *)v70 + 1) = -1;
          v70 += 80;
          *((_WORD *)v70 - 40) = 0;
          *((_WORD *)v70 - 39) = 0;
          *((_QWORD *)v70 - 9) = 0;
          *((__m128i *)v70 - 4) = si128;
          *((_QWORD *)v70 - 6) = 0;
          *(_OWORD *)(v70 - 40) = 0;
          *((_DWORD *)v70 - 6) = 0;
          *((_QWORD *)v70 - 2) = 0;
          *((_DWORD *)v70 - 2) = 0;
        }
        while ( &v143 != v70 );
        sub_11CA10(v129, (char *)v118);
        sub_11C950((unsigned __int8 *)v129, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL), v71, v72, 0.0);
        sub_125180((unsigned __int8 *)v135, (unsigned __int8 *)v129);
        v137 = v130[1];
        copy_tinfo_t();
        v109 = v133;
        if ( v133 && (n = v133 - 1, v133 != 1) )
        {
          v85 = dest;
          srca = v132;
          if ( v140 < v109 )
          {
            dest = (void *)qvector_reserve((__int64)&dest, (__int64)dest, v109, 1);
            v85 = dest;
          }
          v139 = v109;
          memmove(v85, srca, n);
          *((char *)dest + v109 - 1) = 0;
        }
        else
        {
          v139 = 0;
        }
        copy_argloc();
        v141 = v134;
        srcb = v111 + v99;
        v109 = v98;
        n = v130[10 * v98];
        sub_11CDA0(n);
        v73 = n;
        *(_DWORD *)(n + 8) = srcb;
        *(_BYTE *)v73 = 1;
        *(_DWORD *)(v73 + 4) = v100;
        copy_tinfo_t();
        copy_tinfo_t();
        v122 = (_QWORD *)&byte_7;
        copy_tinfo_t();
        clear_tinfo_t();
        if ( v98 )
        {
          v84 = v100;
          v100 = 0;
          *(_DWORD *)(v136 + 16) = v84;
        }
        else
        {
          *(_DWORD *)(v130[0] + 16LL) = 0;
        }
        *(_DWORD *)(v130[10 * v109] + 20LL) = v100;
        v109 = *(_QWORD *)(a2 + 24);
        tinfo_size = get_tinfo_size();
        sub_120A10((__int64)v142, *(unsigned __int64 **)(*(_QWORD *)(a1 + 64) + 1504LL), v107, tinfo_size, v109, 2);
        v75 = sub_335B10(
                *(_QWORD *)(a1 + 64),
                *(_QWORD *)(a2 + 24),
                (__int64)"memcpy",
                (__int64)v131,
                3,
                (__int64)v129,
                1);
        *(_DWORD *)(*(_QWORD *)(v75 + 72) + 284LL) = 5;
        v76 = v121;
        v77 = (__int64)v120;
        if ( *((_QWORD *)&v121 + 1) < (unsigned __int64)(v121 + 1) )
        {
          v120 = (_QWORD **)qvector_reserve((__int64)&v120, (__int64)v120, v121 + 1, 8);
          v77 = (__int64)v120;
          v76 = v121;
        }
        *(_QWORD *)(v77 + 8 * v76) = v75;
        *(_QWORD *)&v121 = v121 + 1;
        do
        {
          v69 -= 80;
          cleanup_argloc();
          v78 = *((_QWORD *)v69 + 4);
          if ( v78 )
          {
            *((_QWORD *)v69 + 5) = 0;
            qfree(v78);
          }
          clear_tinfo_t();
          sub_11CDA0((__int64)v69);
        }
        while ( v69 != v129 );
        goto LABEL_126;
      }
      v30 = 0;
LABEL_49:
      n = 0;
      while ( 1 )
      {
        v31 = v107;
        v109 = v107;
        if ( !v30 )
          v109 = (unsigned int)round_down_power2();
        if ( LOBYTE(v118[0]) == 5 )
        {
          v31 = v109;
          v32 = v97;
          if ( v109 <= v97 )
            v32 = v109;
          v109 = v32;
        }
        v33 = j__qalloc_or_throw(80, v26, v31, v27);
        v34 = sub_332AB0(*(_QWORD **)(a1 + 64), *(_QWORD *)(a2 + 24));
        *(_QWORD *)(v33 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v33 + 40) = 0;
        *(_QWORD *)(v33 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v33 + 56) = 0;
        *(_QWORD *)(v33 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v33 + 72) = 0;
        src = (char *)(v33 + 32);
        sub_330970(v33, v34);
        v35 = v121;
        v36 = (__int64)v120;
        if ( *((_QWORD *)&v121 + 1) < (unsigned __int64)(v121 + 1) )
        {
          v120 = (_QWORD **)qvector_reserve((__int64)&v120, (__int64)v120, v121 + 1, 8);
          v36 = (__int64)v120;
          v35 = v121;
        }
        *(_QWORD *)(v36 + 8 * v35) = v33;
        *(_QWORD *)&v121 = v121 + 1;
        *(_DWORD *)v33 = 4;
        sub_125180((unsigned __int8 *)(v33 + 64), (unsigned __int8 *)v118);
        v37 = v111 + v99;
        *(_BYTE *)(v33 + 32) = 1;
        v26 = v33 + 64;
        v38 = v109;
        v39 = n;
        *(_DWORD *)(v33 + 40) = v37;
        v102 = v38;
        *(_DWORD *)(v33 + 36) = v100;
        if ( !(unsigned __int8)sub_1C81D0(*(_QWORD *)(a1 + 480), v33 + 64, v39, v38, *(double *)v14.m128i_i64)
          || (v26 = v33 + 32,
              v40 = sub_1C81D0(*(_QWORD *)(a1 + 480), (__int64)src, n, v102, *(double *)v14.m128i_i64),
              (v41 = v40) == 0) )
        {
          v30 = v113;
          goto LABEL_49;
        }
        *(_BYTE *)(v33 + 33) |= 0x40u;
        *(_BYTE *)(v33 + 65) |= 0x40u;
        if ( !v98 )
        {
          v26 = v33 + 64;
          v103 = v40;
          sub_11CA10(src, (char *)(v33 + 64));
          v41 = v103;
        }
        if ( (_BYTE)v113 )
          break;
LABEL_61:
        v27 = v109;
        n += v109;
        v107 -= v109;
        if ( !v107 )
          goto LABEL_126;
        v30 = v113;
      }
      *(_BYTE *)(v33 + 33) |= 2u;
      *(_BYTE *)(v33 + 65) |= 2u;
      v42 = *(__m128i **)(a1 + 64);
      v122 = (_QWORD *)(v33 + 24);
      v43 = (unsigned __int64 *)v42[87].m128i_i64[0];
      if ( v43 )
      {
        if ( v42[87].m128i_i64[1] )
        {
          v44 = *v43 & 0xFFFFFFFFFFFFFFFCLL;
          if ( (*(_BYTE *)v44 & 2) != 0 )
          {
            v49 = 1;
          }
          else
          {
            v45 = *(_QWORD *)(v33 + 24);
            v46 = *(_QWORD *)(v44 + 24);
            v47 = v41;
            if ( v45 >= v46 )
              goto LABEL_74;
LABEL_72:
            v48 = *(_QWORD *)(v44 + 8);
            v47 = v41;
            if ( (*(_BYTE *)v48 & 2) == 0 )
            {
              while ( 1 )
              {
                v44 = v48;
                v46 = *(_QWORD *)(v48 + 24);
                if ( v45 < v46 )
                  goto LABEL_72;
LABEL_74:
                if ( v46 >= v45 )
                  break;
                v48 = *(_QWORD *)(v44 + 16);
                v47 = 0;
                if ( (*(_BYTE *)v48 & 2) != 0 )
                  goto LABEL_76;
              }
              if ( v44 )
              {
LABEL_68:
                v26 = (__int64)&v113;
                copy_tinfo_t();
                goto LABEL_61;
              }
            }
LABEL_76:
            v49 = v47;
            v43 = (unsigned __int64 *)v44;
          }
          sub_C7DB0(v42 + 87, v43, v49, &v122);
          goto LABEL_68;
        }
      }
      else
      {
        v50 = qalloc();
        v51 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v50, (__m128i)(unsigned __int64)v50);
        if ( !v50 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v50 + 32) = 0;
        *(_OWORD *)(v50 + 16) = 0;
        *(__m128i *)(v50 + 8) = v51;
        *(_QWORD *)v50 = v50 & 0xFFFFFFFFFFFFFFFCLL | 2;
        v42[87].m128i_i64[0] = v50;
        *(_QWORD *)v50 = v50 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v50 & 3LL;
        v52 = v42[87].m128i_i64[0];
        v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v52, (__m128i)(unsigned __int64)v52);
        *(__m128i *)(v52 + 8) = v14;
        *(_QWORD *)v42[87].m128i_i64[0] &= ~1uLL;
        *(_QWORD *)v42[87].m128i_i64[0] |= 2uLL;
        v43 = (unsigned __int64 *)v42[87].m128i_i64[0];
      }
      sub_C7DB0(v42 + 87, v43, 1, &v122);
      goto LABEL_68;
    }
  }
LABEL_85:
  sub_11CDA0((__int64)v118);
  v53 = (__int64)v120;
  v54 = &v120[v121];
  if ( v54 == v120 )
    goto LABEL_144;
  while ( 2 )
  {
    v56 = *(_QWORD *)(a1 + 64);
    v57 = *(__int64 **)(v56 + 1392);
    v58 = *(_QWORD *)v53;
    if ( v57 )
    {
      v55 = (__int64 *)(*v57 & 0xFFFFFFFFFFFFFFFCLL);
      if ( !v55 )
        goto LABEL_100;
      if ( (*(_BYTE *)(*v57 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
      {
        v59 = *(_QWORD *)(*(_QWORD *)v53 + 24LL);
        while ( 2 )
        {
          v60 = v55[3];
          if ( v59 < v60 )
          {
            v55 = (__int64 *)v55[1];
LABEL_88:
            if ( (*(_BYTE *)v55 & 2) == 0 )
              continue;
          }
          else
          {
            if ( v60 < v59 )
            {
              v55 = (__int64 *)v55[2];
              goto LABEL_88;
            }
            if ( v55 != v57 )
LABEL_100:
              sub_1CB6E0((unsigned __int64 **)(v56 + 1392), v55);
          }
          break;
        }
      }
    }
    if ( v58 )
    {
      sub_11CDA0(v58 + 64);
      sub_11CDA0(v58 + 48);
      sub_11CDA0(v58 + 32);
      j__qfree(v58);
    }
    v53 += 8;
    if ( v54 != (_QWORD **)v53 )
      continue;
    break;
  }
LABEL_144:
  sub_137FB0(*(_QWORD *)(a1 + 64), v99, *(int *)(a3 + 4), *(double *)v14.m128i_i64, (__m128)v21);
  sub_A2520(a1, "replace_mop_by_kreg at %a: failed");
LABEL_142:
  cleanup_argloc();
  if ( v120 )
  {
    *(_QWORD *)&v121 = 0;
    qfree((__int64)v120);
  }
LABEL_5:
  v124[0] = off_4DE8B8;
  if ( v127 )
  {
    *(_QWORD *)&v128 = 0;
    qfree(v127);
  }
  qfree(v125);
LABEL_8:
  clear_tinfo_t();
  cleanup_argloc();
  return v11;
}

