__int64 __fastcall sub_1CB4C0(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  _QWORD *exception; // rdi
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v15; // rax
  __m128i v16; // xmm0
  unsigned int v17; // ebx
  char v18; // bl
  __m128i v19; // xmm0
  int v20; // r14d
  int v21; // r9d
  _QWORD *v22; // r14
  _QWORD *v23; // rbx
  char v24; // al
  unsigned __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rsi
  int v30; // eax
  int v31; // ecx
  size_t v32; // rdx
  char v33; // al
  char v34; // dl
  __m128i *v35; // r12
  unsigned __int64 *v36; // rsi
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // rcx
  char v40; // si
  unsigned __int64 v41; // rcx
  char v42; // dl
  __int64 v43; // rax
  __m128i v44; // xmm0
  __int64 v45; // rax
  __int64 v46; // r13
  __int64 v47; // r12
  __int64 *v48; // rsi
  __int64 v49; // rax
  __int64 *v50; // rcx
  __int64 v51; // r14
  unsigned __int64 v52; // rdi
  unsigned __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // r12
  __int64 v56; // rbx
  _QWORD *v57; // rdi
  _QWORD *v58; // r14
  __m128i si128; // xmm1
  unsigned __int8 *v60; // r12
  unsigned __int8 *v61; // rax
  size_t v62; // rax
  int tinfo_size; // eax
  __int64 v64; // r14
  __int64 v65; // rax
  __int64 v66; // rsi
  _QWORD *v67; // rdx
  __int64 v68; // rbx
  _QWORD **v69; // rax
  _QWORD **v70; // r14
  int v71; // eax
  int v72; // edx
  void *v73; // rdi
  __int64 *v74; // rbx
  _DWORD *v75; // r14
  _QWORD *v76; // rbx
  __int64 v77; // rsi
  __int64 v78; // rdx
  __int64 v79; // [rsp-8h] [rbp-2B8h]
  int v80; // [rsp+0h] [rbp-2B0h]
  __int64 *v81; // [rsp+8h] [rbp-2A8h]
  _QWORD *v82; // [rsp+10h] [rbp-2A0h]
  __int64 *v83; // [rsp+18h] [rbp-298h]
  _QWORD *v84; // [rsp+28h] [rbp-288h]
  unsigned __int8 v85; // [rsp+3Ah] [rbp-276h]
  char v86; // [rsp+3Bh] [rbp-275h]
  unsigned int i; // [rsp+3Ch] [rbp-274h]
  int v89; // [rsp+58h] [rbp-258h]
  unsigned __int8 v90; // [rsp+5Fh] [rbp-251h]
  unsigned int v91; // [rsp+60h] [rbp-250h]
  int v92; // [rsp+64h] [rbp-24Ch]
  int v94; // [rsp+78h] [rbp-238h]
  char v95; // [rsp+78h] [rbp-238h]
  char *src; // [rsp+80h] [rbp-230h]
  int srcb; // [rsp+80h] [rbp-230h]
  void *srca; // [rsp+80h] [rbp-230h]
  unsigned __int64 v99; // [rsp+88h] [rbp-228h] BYREF
  size_t n; // [rsp+90h] [rbp-220h]
  unsigned __int64 v101; // [rsp+98h] [rbp-218h]
  __int64 v102; // [rsp+A0h] [rbp-210h] BYREF
  __int64 v103; // [rsp+A8h] [rbp-208h] BYREF
  __int64 v104; // [rsp+B0h] [rbp-200h] BYREF
  __int64 v105; // [rsp+B8h] [rbp-1F8h]
  _QWORD v106[2]; // [rsp+C0h] [rbp-1F0h] BYREF
  __int64 v107; // [rsp+D0h] [rbp-1E0h] BYREF
  __int64 v108; // [rsp+D8h] [rbp-1D8h]
  __m128i v109; // [rsp+E0h] [rbp-1D0h] BYREF
  _DWORD v110[2]; // [rsp+F0h] [rbp-1C0h] BYREF
  __int64 v111; // [rsp+F8h] [rbp-1B8h]
  __int64 v112; // [rsp+100h] [rbp-1B0h] BYREF
  __int128 v113; // [rsp+108h] [rbp-1A8h]
  _QWORD *v114; // [rsp+120h] [rbp-190h] BYREF
  __int128 v115; // [rsp+128h] [rbp-188h]
  _QWORD v116[2]; // [rsp+140h] [rbp-170h] BYREF
  __int64 v117; // [rsp+150h] [rbp-160h] BYREF
  __int64 v118; // [rsp+158h] [rbp-158h]
  __int64 v119; // [rsp+160h] [rbp-150h] BYREF
  __int128 v120; // [rsp+168h] [rbp-148h]
  char v121[8]; // [rsp+180h] [rbp-130h] BYREF
  _QWORD v122[2]; // [rsp+188h] [rbp-128h]
  char v123; // [rsp+198h] [rbp-118h] BYREF
  void *v124; // [rsp+1A0h] [rbp-110h]
  unsigned __int64 v125; // [rsp+1A8h] [rbp-108h]
  int v126; // [rsp+1C8h] [rbp-E8h]
  char v127[8]; // [rsp+1D0h] [rbp-E0h] BYREF
  __int64 v128; // [rsp+1D8h] [rbp-D8h]
  __int64 v129; // [rsp+1E0h] [rbp-D0h]
  void *dest; // [rsp+1F0h] [rbp-C0h]
  unsigned __int64 v131; // [rsp+1F8h] [rbp-B8h]
  unsigned __int64 v132; // [rsp+200h] [rbp-B0h]
  int v133; // [rsp+218h] [rbp-98h]
  char v134[24]; // [rsp+220h] [rbp-90h] BYREF
  char v135; // [rsp+270h] [rbp-40h] BYREF
  unsigned __int64 v136; // [rsp+278h] [rbp-38h]

  LODWORD(n) = a4;
  v86 = a4;
  v136 = __readfsqword(0x28u);
  v6 = *(_BYTE *)a3 == 15;
  v106[0] = 0;
  v106[1] = 0;
  v102 = 0;
  if ( v6 )
  {
    v84 = *(_QWORD **)(a3 + 8);
    v83 = v84 + 6;
  }
  else
  {
    v13 = sub_1C4A70((char *)a3, (__int64)v106);
    if ( !(_BYTE)v13 )
      goto LABEL_8;
    v84 = v106;
    v83 = &v102;
  }
  v7 = *(_QWORD *)(a1 + 64);
  v117 = 0;
  v116[1] = v7;
  v116[0] = off_4D8F78;
  v118 = 0;
  v119 = 0;
  v110[0] = 0;
  v120 = 0;
  copy_argloc();
  sub_1C7120(&v112, (__int64)v110, *(_DWORD *)(a3 + 4), 0);
  v82 = v116;
  for_all_arglocs();
  v8 = *(int *)(a3 + 4);
  v114 = nullptr;
  *(_QWORD *)&v115 = v8;
  sub_316F70(&v119, &v114, v9, v10, v11, v12);
  LODWORD(v101) = *(_DWORD *)(a3 + 4);
  v85 = sub_1C8820((__int64)v116, (__int64)v83, 8 * (int)v101, 0);
  cleanup_argloc();
  cleanup_argloc();
  if ( !v85 )
    goto LABEL_4;
  if ( (unsigned int)sub_64520((__int64)&v117) == 2 )
  {
    if ( !sub_64330(&v117, 0) || !sub_64330(&v117, *(_DWORD *)(a3 + 4)) )
    {
      if ( !under_debugger )
        sub_3835A0(52939);
LABEL_153:
      BUG();
    }
    goto LABEL_4;
  }
  v90 = sub_11E300((unsigned int *)a2);
  if ( v90 )
    v90 = a3 == a2 + 64;
  if ( (*(_BYTE *)(a3 + 1) & 0x40) != 0
    && ((get_tinfo_property() & 0x2F) != 0xD
     || (unsigned __int8)sub_1C2B50((__int64)v84, 0, 0)
     || (*(_BYTE *)(a2 + 5) & 8) != 0
     || !v90 && sub_11FDC0((_BYTE *)a2, 1)) )
  {
    if ( !(_BYTE)n )
      goto LABEL_4;
  }
  else
  {
    v86 = 0;
  }
  v91 = sub_137B80(*(_QWORD **)(a1 + 64), *(int *)(a3 + 4), 0);
  if ( v91 == -1 )
  {
LABEL_4:
    v13 = 0;
    goto LABEL_5;
  }
  v15 = *(_QWORD *)(a1 + 64);
  v16.m128i_i64[0] = 0;
  v107 = 0;
  v108 = 0;
  LODWORD(v15) = *(_DWORD *)(*(_QWORD *)(v15 + 1504) + 80LL);
  v113 = 0;
  v112 = 0;
  v89 = v15;
  v81 = &v107;
  cleanup_argloc();
  LODWORD(v108) = v91;
  LODWORD(v107) = 3;
  v17 = sub_64360(&v117, 0);
  for ( i = sub_64360(&v117, v17 + 1); ; i = sub_64360(&v117, i + 1) )
  {
    if ( i == (_DWORD)v118 )
    {
      if ( v86 )
        *(_DWORD *)(*(_QWORD *)v112 + 4LL) |= 0x40000u;
      if ( v90 )
      {
        v67 = (_QWORD *)a2;
      }
      else
      {
        v67 = *(_QWORD **)(a2 + 16);
        if ( (_QWORD)v120 )
        {
          v101 = *(_QWORD *)(a2 + 16);
          v76 = (_QWORD *)j__qalloc_or_throw();
          v77 = *(_QWORD *)(a2 + 24);
          v76[5] = 0;
          v76[4] = 0xFFFFFFFF00000000LL;
          v76[6] = 0xFFFFFFFF00000000LL;
          v76[7] = 0;
          v76[8] = 0xFFFFFFFF00000000LL;
          v76[9] = 0;
          sub_330C90(v76, v77);
          v78 = v101;
          v16 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 4));
          *((_BYTE *)v76 + 64) = 1;
          *(_DWORD *)v76 = 61;
          v16.m128i_i64[0] = _mm_unpacklo_epi32(v16, _mm_cvtsi32_si128(v91)).m128i_u64[0];
          *(_QWORD *)((char *)v76 + 68) = v16.m128i_i64[0];
          v67 = sub_A2BA0(a1, v76, v78);
        }
      }
      v68 = v112 + 8 * v113;
      v69 = (_QWORD **)v112;
      if ( v68 != v112 )
      {
        do
        {
          v70 = v69;
          v67 = sub_A2BA0(a1, *v69, (__int64)v67);
          v69 = v70 + 1;
        }
        while ( (_QWORD **)v68 != v70 + 1 );
      }
      if ( *(_BYTE *)a3 == 15 )
      {
        v74 = *(__int64 **)(*(_QWORD *)(a3 + 8) + 8LL);
        sub_1CA4C0(v74, 1u);
        v75 = (_DWORD *)*v74;
        cleanup_argloc();
        *v75 = 3;
        v75[2] = v91;
        *(_WORD *)(*v74 + 16) = 0;
        *(_WORD *)(*v74 + 18) = *(_DWORD *)(a3 + 4);
      }
      else
      {
        *(_BYTE *)a3 = 1;
        *(_DWORD *)(a3 + 8) = v91;
      }
      *(_BYTE *)(a3 + 1) |= 0x40u;
      **(_DWORD **)(a1 + 64) &= ~0x10000u;
      v71 = *(_DWORD *)(a1 + 24);
      BYTE1(v71) &= ~2u;
      LOBYTE(v71) = v71 | 0x80;
      *(_DWORD *)(a1 + 24) = v71;
      sub_1B2120(a3);
      sub_A1F60(a1, (__int64)"replace_mop_by_kreg at %a: %s", *(double *)v16.m128i_i64, *(const char **)(a2 + 24));
      v13 = v85;
      goto LABEL_141;
    }
    v19 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v17), _mm_cvtsi32_si128(i - v17));
    v16 = _mm_unpacklo_epi32(v19, _mm_cmpgt_epi32((__m128i)0LL, v19));
    v109 = v16;
    v13 = sub_318230(&v119, &v109, 0);
    v99 = v109.m128i_u64[1];
    if ( !(_BYTE)v13 )
      break;
    v16.m128i_i64[0] = 0;
    v114 = nullptr;
    v115 = 0;
    if ( v99 + v109.m128i_i64[0] - 1 >= v109.m128i_i64[0] )
    {
      v114 = (_QWORD *)qvector_reserve();
      v16 = (__m128i)_mm_loadh_ps((const double *)&v99);
      *(__m128i *)&v114[2 * v115] = v16;
      *(_QWORD *)&v115 = v115 + 1;
    }
    v18 = sub_318300(&v119, &v114);
    if ( v114 )
    {
      *(_QWORD *)&v115 = 0;
      qfree();
    }
    if ( !v18 )
    {
      if ( !under_debugger )
        sub_3835A0(52907);
      goto LABEL_153;
    }
LABEL_21:
    v17 = i;
  }
  v103 = v109.m128i_i64[0];
  v104 = v109.m128i_i64[0];
  sub_123480((__int64)v110, (unsigned __int8 *)a3);
  if ( (unsigned __int8)sub_1C4B00((__int64)v81, *(_QWORD *)(a1 + 480), &v103, v99, *(int *)(a3 + 4)) )
  {
    v20 = v99;
    if ( (unsigned __int8)sub_1C4B00((__int64)v84, *(_QWORD *)(a1 + 480), &v104, v99, *(int *)(a3 + 4)) )
    {
      v92 = v20;
      if ( LOBYTE(v110[0]) == 15 )
      {
        if ( !(unsigned __int8)sub_1263C0((__int64)v110, v104, v20, 3) )
          goto LABEL_85;
      }
      else
      {
        if ( !(unsigned __int8)sub_126950((unsigned __int64)v110, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL), v104) )
          goto LABEL_85;
        v110[1] = v99;
      }
      v105 = 0;
      if ( LOBYTE(v110[0]) != 5 || v99 <= 0x10 )
      {
        v24 = 0;
        if ( v99 )
          goto LABEL_49;
LABEL_125:
        clear_tinfo_t();
        sub_11C7E0((__int64)v110);
        goto LABEL_21;
      }
      if ( *(_QWORD *)(v111 + 8) < *(_QWORD *)(*(_QWORD *)(a1 + 64) + 144LL) )
      {
        if ( (get_tinfo_property() & 0x2F) == 0xD )
        {
          v16.m128i_i64[0] = 0;
          v114 = nullptr;
          v115 = 0;
          sub_334B10((unsigned int)&v114, (_DWORD)v83, v109.m128i_i32[0], 0, 3, v21);
          v22 = v114;
          v23 = &v114[8 * (_QWORD)v115];
          if ( v23 != v114 )
          {
            do
            {
              if ( v99 == get_tinfo_size() && (get_tinfo_property() & 0x2F) == 0xD )
              {
                v54 = v105;
                v105 = v22[7];
                v22[7] = v54;
                v22 = v114;
                goto LABEL_102;
              }
              v22 += 8;
            }
            while ( v22 != v23 );
            v22 = v114;
          }
LABEL_102:
          if ( v22 )
          {
            v55 = v115;
            if ( (_QWORD)v115 )
            {
              v56 = 0;
              v57 = v22;
              do
              {
                v58 = &v57[8 * v56];
                clear_tinfo_t();
                if ( v58[4] )
                {
                  v58[5] = 0;
                  qfree();
                }
                if ( v58[1] )
                {
                  v58[2] = 0;
                  qfree();
                }
                ++v56;
                v57 = v114;
              }
              while ( v55 != v56 );
            }
            *(_QWORD *)&v115 = 0;
            qfree();
          }
        }
        v24 = v105;
        if ( (_BYTE)v105 )
          goto LABEL_49;
        si128 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
        v60 = (unsigned __int8 *)&v135;
        v16.m128i_i64[0] = 0;
        v61 = (unsigned __int8 *)v121;
        do
        {
          *((_DWORD *)v61 + 1) = -1;
          v61 += 80;
          *((_WORD *)v61 - 40) = 0;
          *((_WORD *)v61 - 39) = 0;
          *((_QWORD *)v61 - 9) = 0;
          *((__m128i *)v61 - 4) = si128;
          *((_QWORD *)v61 - 6) = 0;
          *(_OWORD *)(v61 - 40) = 0;
          *((_DWORD *)v61 - 6) = 0;
          *((_QWORD *)v61 - 2) = 0;
          *((_DWORD *)v61 - 2) = 0;
        }
        while ( &v135 != (char *)v61 );
        sub_11C450(v121, (char *)v110);
        sub_11C390(v121, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL));
        sub_124BC0((__int64)v127, (unsigned __int8 *)v121);
        v129 = v122[1];
        copy_tinfo_t();
        v101 = v125;
        if ( v125 && (n = v125 - 1, v125 != 1) )
        {
          v73 = dest;
          srca = v124;
          if ( v132 < v101 )
          {
            dest = (void *)qvector_reserve();
            v73 = dest;
          }
          v131 = v101;
          memmove(v73, srca, n);
          *((char *)dest + v101 - 1) = 0;
        }
        else
        {
          v131 = 0;
        }
        copy_argloc();
        v133 = v126;
        srcb = v103 + v91;
        v101 = v90;
        n = v122[10 * v90];
        sub_11C7E0(n);
        v62 = n;
        *(_DWORD *)(n + 8) = srcb;
        *(_BYTE *)v62 = 1;
        *(_DWORD *)(v62 + 4) = v92;
        copy_tinfo_t();
        copy_tinfo_t();
        v114 = (_QWORD *)&byte_7;
        copy_tinfo_t();
        clear_tinfo_t();
        if ( v90 )
        {
          v72 = v92;
          v92 = 0;
          *(_DWORD *)(v128 + 16) = v72;
        }
        else
        {
          *(_DWORD *)(v122[0] + 16LL) = 0;
        }
        *(_DWORD *)(v122[10 * v101] + 20LL) = v92;
        v101 = *(_QWORD *)(a2 + 24);
        tinfo_size = get_tinfo_size();
        sub_120450((__int64)v134, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL), v99, tinfo_size, v101, 2);
        v64 = sub_335C70(
                *(_QWORD *)(a1 + 64),
                *(_QWORD *)(a2 + 24),
                (unsigned int)"memcpy",
                (unsigned int)&v123,
                3,
                (unsigned int)v121,
                1,
                v79,
                v80,
                (_DWORD)v81,
                (_DWORD)v82,
                (_DWORD)v83);
        *(_DWORD *)(*(_QWORD *)(v64 + 72) + 284LL) = 5;
        v65 = v113;
        v66 = v112;
        if ( *((_QWORD *)&v113 + 1) < (unsigned __int64)(v113 + 1) )
        {
          v112 = qvector_reserve();
          v66 = v112;
          v65 = v113;
        }
        *(_QWORD *)(v66 + 8 * v65) = v64;
        *(_QWORD *)&v113 = v113 + 1;
        do
        {
          v60 -= 80;
          cleanup_argloc();
          if ( *((_QWORD *)v60 + 4) )
          {
            *((_QWORD *)v60 + 5) = 0;
            qfree();
          }
          clear_tinfo_t();
          sub_11C7E0((__int64)v60);
        }
        while ( v60 != (unsigned __int8 *)v121 );
        goto LABEL_125;
      }
      v24 = 0;
LABEL_49:
      n = 0;
      while ( 1 )
      {
        v101 = v99;
        if ( !v24 )
          v101 = (unsigned int)round_down_power2();
        if ( LOBYTE(v110[0]) == 5 )
        {
          v25 = v89;
          if ( v101 <= v89 )
            v25 = v101;
          v101 = v25;
        }
        v26 = j__qalloc_or_throw();
        v27 = sub_332DF0(*(_QWORD *)(a1 + 64), *(_QWORD *)(a2 + 24));
        *(_QWORD *)(v26 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v26 + 40) = 0;
        *(_QWORD *)(v26 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v26 + 56) = 0;
        *(_QWORD *)(v26 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v26 + 72) = 0;
        src = (char *)(v26 + 32);
        sub_330C90(v26, v27);
        v28 = v113;
        v29 = v112;
        if ( *((_QWORD *)&v113 + 1) < (unsigned __int64)(v113 + 1) )
        {
          v112 = qvector_reserve();
          v29 = v112;
          v28 = v113;
        }
        *(_QWORD *)(v29 + 8 * v28) = v26;
        *(_QWORD *)&v113 = v113 + 1;
        *(_DWORD *)v26 = 4;
        sub_124BC0(v26 + 64, (unsigned __int8 *)v110);
        v30 = v103 + v91;
        *(_BYTE *)(v26 + 32) = 1;
        v31 = v101;
        v32 = n;
        *(_DWORD *)(v26 + 40) = v30;
        v94 = v31;
        *(_DWORD *)(v26 + 36) = v92;
        if ( !(unsigned __int8)sub_1C7C10(*(_QWORD *)(a1 + 480), v26 + 64, v32, v31)
          || (v33 = sub_1C7C10(*(_QWORD *)(a1 + 480), (unsigned __int64)src, n, v94), (v34 = v33) == 0) )
        {
          v24 = v105;
          goto LABEL_49;
        }
        *(_BYTE *)(v26 + 33) |= 0x40u;
        *(_BYTE *)(v26 + 65) |= 0x40u;
        if ( !v90 )
        {
          v95 = v33;
          sub_11C450(src, (char *)(v26 + 64));
          v34 = v95;
        }
        if ( (_BYTE)v105 )
          break;
LABEL_61:
        n += v101;
        v99 -= v101;
        if ( !v99 )
          goto LABEL_125;
        v24 = v105;
      }
      *(_BYTE *)(v26 + 33) |= 2u;
      *(_BYTE *)(v26 + 65) |= 2u;
      v35 = *(__m128i **)(a1 + 64);
      v114 = (_QWORD *)(v26 + 24);
      v36 = (unsigned __int64 *)v35[87].m128i_i64[0];
      if ( v36 )
      {
        if ( v35[87].m128i_i64[1] )
        {
          v37 = *v36 & 0xFFFFFFFFFFFFFFFCLL;
          if ( (*(_BYTE *)v37 & 2) != 0 )
          {
            v42 = 1;
          }
          else
          {
            v38 = *(_QWORD *)(v26 + 24);
            v39 = *(_QWORD *)(v37 + 24);
            v40 = v34;
            if ( v38 >= v39 )
              goto LABEL_74;
LABEL_72:
            v41 = *(_QWORD *)(v37 + 8);
            v40 = v34;
            if ( (*(_BYTE *)v41 & 2) == 0 )
            {
              while ( 1 )
              {
                v37 = v41;
                v39 = *(_QWORD *)(v41 + 24);
                if ( v38 < v39 )
                  goto LABEL_72;
LABEL_74:
                if ( v39 >= v38 )
                  break;
                v41 = *(_QWORD *)(v37 + 16);
                v40 = 0;
                if ( (*(_BYTE *)v41 & 2) != 0 )
                  goto LABEL_76;
              }
              if ( v37 )
              {
LABEL_68:
                copy_tinfo_t();
                goto LABEL_61;
              }
            }
LABEL_76:
            v42 = v40;
            v36 = (unsigned __int64 *)v37;
          }
          sub_C77F0(v35 + 87, v36, v42, &v114);
          goto LABEL_68;
        }
      }
      else
      {
        v43 = qalloc();
        v44 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v43, (__m128i)(unsigned __int64)v43);
        if ( !v43 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v43 + 32) = 0;
        *(_OWORD *)(v43 + 16) = 0;
        *(__m128i *)(v43 + 8) = v44;
        *(_QWORD *)v43 = v43 & 0xFFFFFFFFFFFFFFFCLL | 2;
        v35[87].m128i_i64[0] = v43;
        *(_QWORD *)v43 = v43 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v43 & 3LL;
        v45 = v35[87].m128i_i64[0];
        v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v45, (__m128i)(unsigned __int64)v45);
        *(__m128i *)(v45 + 8) = v16;
        *(_QWORD *)v35[87].m128i_i64[0] &= ~1uLL;
        *(_QWORD *)v35[87].m128i_i64[0] |= 2uLL;
        v36 = (unsigned __int64 *)v35[87].m128i_i64[0];
      }
      sub_C77F0(v35 + 87, v36, 1, &v114);
      goto LABEL_68;
    }
  }
LABEL_85:
  sub_11C7E0((__int64)v110);
  v46 = v112;
  v47 = v112 + 8 * v113;
  if ( v47 == v112 )
    goto LABEL_143;
  while ( 2 )
  {
    v49 = *(_QWORD *)(a1 + 64);
    v50 = *(__int64 **)(v49 + 1392);
    v51 = *(_QWORD *)v46;
    if ( v50 )
    {
      v48 = (__int64 *)(*v50 & 0xFFFFFFFFFFFFFFFCLL);
      if ( !v48 )
        goto LABEL_100;
      if ( (*(_BYTE *)(*v50 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
      {
        v52 = *(_QWORD *)(*(_QWORD *)v46 + 24LL);
        while ( 2 )
        {
          v53 = v48[3];
          if ( v52 < v53 )
          {
            v48 = (__int64 *)v48[1];
LABEL_88:
            if ( (*(_BYTE *)v48 & 2) == 0 )
              continue;
          }
          else
          {
            if ( v53 < v52 )
            {
              v48 = (__int64 *)v48[2];
              goto LABEL_88;
            }
            if ( v48 != v50 )
LABEL_100:
              sub_1CB120((unsigned __int64 **)(v49 + 1392), v48);
          }
          break;
        }
      }
    }
    if ( v51 )
    {
      sub_11C7E0(v51 + 64);
      sub_11C7E0(v51 + 48);
      sub_11C7E0(v51 + 32);
      j__qfree();
    }
    v46 += 8;
    if ( v47 != v46 )
      continue;
    break;
  }
LABEL_143:
  sub_1379F0(*(_QWORD *)(a1 + 64), v91, *(int *)(a3 + 4));
  sub_A1F60(a1, (__int64)"replace_mop_by_kreg at %a: failed", *(double *)v16.m128i_i64);
LABEL_141:
  cleanup_argloc();
  if ( v112 )
  {
    *(_QWORD *)&v113 = 0;
    qfree();
  }
LABEL_5:
  v116[0] = off_4D8F78;
  if ( v119 )
  {
    *(_QWORD *)&v120 = 0;
    qfree();
  }
  qfree();
LABEL_8:
  clear_tinfo_t();
  cleanup_argloc();
  return v13;
}

