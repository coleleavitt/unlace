__int64 __fastcall sub_1BE50(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // rax
  const char *v5; // rbp
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // r15
  __int64 v10; // rbp
  const char *v11; // rcx
  __int64 v12; // rax
  const char *v13; // rdi
  __m128i *v14; // r14
  _DWORD *v15; // rcx
  int v16; // eax
  int v17; // esi
  __int64 v18; // rsi
  __int64 v19; // rax
  void (__fastcall *hexdsp)(__int64, __int64 *); // rax
  void (__fastcall *v21)(__int64, __int64 *); // rax
  __int64 v22; // rax
  __m128i *v23; // rbx
  __m128i v24; // xmm0
  unsigned __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 m128i_i64; // rsi
  _QWORD *v30; // rdi
  __int64 v31; // rbp
  char *v32; // rbx
  void (__fastcall *v33)(__int64, char *); // rax
  void (__fastcall *v34)(__int64, char *); // rax
  void (__fastcall *v35)(__int64, char *); // rax
  char *v36; // rbx
  void (__fastcall *v37)(__int64, char *); // rax
  void (__fastcall *v38)(__int64, char *); // rax
  void (__fastcall *v39)(__int64, char *); // rax
  void (__fastcall *v40)(__int64, __int64); // rax
  void (__fastcall *v41)(__int64, __int64); // rax
  void (__fastcall *v42)(__int64, __int64); // rax
  __int64 v43; // rax
  bool v44; // zf
  __m128i *v45; // rax
  __m128i v46; // xmm0
  _QWORD *v47; // rcx
  _QWORD *v48; // rdx
  __int64 v49; // rax
  __int64 v50; // r12
  __int64 *v51; // rbp
  __int64 v52; // r13
  void (__fastcall *v53)(__int64, __int64 *); // rax
  __m128i *v54; // rbp
  __m128i *v55; // rbx
  void (__fastcall *v56)(__int64, __m128i *); // rax
  void (__fastcall *v57)(__int64, __m128i *); // rax
  __int64 v58; // rbx
  char *v59; // rdx
  __m128i v60; // xmm2
  unsigned __int64 v61; // r12
  int v62; // eax
  __int64 v63; // rax
  const char *v64; // rdi
  const char *v65; // rsi
  void (__fastcall *v66)(__int64, __int64); // rax
  void (__fastcall *v67)(__int64, __int64); // rax
  void (__fastcall *v68)(__int64, __int64); // rax
  __int64 v69; // r12
  void (__fastcall *v70)(__int64, __int64, __int64); // rax
  __int64 v71; // rax
  __int64 *v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // r12
  __int64 v78; // rax
  __int64 v79; // rbp
  void (__fastcall *v80)(__int64, __int64); // rax
  void (__fastcall *v81)(__int64, __int64); // rax
  __m128i *v82; // rax
  __int64 v83; // rdx
  __m128i v84; // xmm1
  __m128i v85; // xmm0
  __int64 v86; // rdx
  __int64 v87; // r15
  __int64 v88; // r12
  __int64 v89; // rbp
  _QWORD *v90; // rbx
  __int64 v91; // rdi
  void (__fastcall *v92)(__int64, _QWORD *); // rax
  void (__fastcall *v93)(__int64, _QWORD *); // rax
  __m128i *k; // r12
  __m128i *v95; // rbx
  void (__fastcall *v96)(__int64, __m128i *); // rax
  void (__fastcall *v97)(__int64, __m128i *); // rax
  __int64 v98; // r12
  __int64 v99; // rax
  char *v100; // rdi
  const char *v101; // rsi
  int v102; // eax
  char *v103; // rdi
  int v104; // eax
  unsigned __int8 (__fastcall *v105)(__int64, char *); // rax
  __m128i **v106; // r15
  unsigned __int8 (__fastcall *v107)(__int64, char *); // rax
  __m128i **v108; // rsi
  __m128i **v109; // rax
  __int64 i; // rdx
  __m128i *v111; // rax
  __int64 *v112; // rdi
  __m128i ***v113; // rax
  __int64 v114; // rax
  __m128i v115; // xmm1
  unsigned __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rsi
  void (__fastcall *v119)(__int64, __int64, __int64); // rax
  __m128i *v120; // r12
  __m128i *j; // r15
  __int64 *v122; // rbx
  void (__fastcall *v123)(__int64, __int64 *); // rax
  void (__fastcall *v124)(__int64, __int64 *); // rax
  __int64 v125; // rax
  __m128i *v126; // rdi
  int v127; // r10d
  __int32 v128; // r11d
  int v129; // eax
  __int8 *v130; // rdx
  _QWORD *v131; // rax
  __int64 v132; // rcx
  int v133; // r8d
  int v134; // r8d
  __int64 v135; // r8
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // rcx
  __int64 v143; // rcx
  __m128i v144; // xmm0
  __m128i v145; // xmm0
  __int64 v146; // rax
  __int32 v147; // eax
  __int64 v148; // r12
  __int64 v149; // rax
  __int64 v150; // rbp
  void (__fastcall *v151)(__int64, __int64); // rax
  void (__fastcall *v152)(__int64, __int64); // rax
  int v153; // eax
  __int64 v154; // rsi
  __m128i *v155; // rcx
  __int64 v156; // rax
  __m128i **v157; // rdx
  __int64 v158; // rdi
  __int64 v159; // rbx
  __int64 v160; // r15
  __int64 v161; // r12
  _QWORD *v162; // rbp
  __int64 v163; // rdi
  void (__fastcall *v164)(__int64, _QWORD *); // rax
  void (__fastcall *v165)(__int64, _QWORD *); // rax
  __m128i *m; // r12
  __m128i *v167; // rbx
  void (__fastcall *v168)(__int64, __m128i *); // rax
  void (__fastcall *v169)(__int64, __m128i *); // rax
  __int64 v170; // rax
  __int64 *v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // rbx
  __int64 v174; // rsi
  __int64 *v175; // rax
  __int64 v176; // r15
  __int64 v177; // r8
  __int64 v178; // rax
  char *v179; // rsi
  __m128i *v180; // rdi
  char *v181; // rbp
  void (__fastcall *v182)(__int64, char *); // rax
  void (__fastcall *v183)(__int64, char *); // rax
  void (__fastcall *v184)(__int64, char *); // rax
  __int64 v185; // rbp
  void (__fastcall *v186)(__int64, __int64, __int64); // rax
  __int64 v187; // rax
  void (__fastcall *v188)(__int64, __int64 *); // rax
  void (__fastcall *v189)(__int64, __int64 *); // rax
  __m128i v190; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v191; // [rsp+18h] [rbp-E0h]
  __int64 v192; // [rsp+20h] [rbp-D8h]
  char *s1; // [rsp+28h] [rbp-D0h]
  __int64 *v194; // [rsp+30h] [rbp-C8h]
  __m128i *v195; // [rsp+38h] [rbp-C0h]
  char *v196; // [rsp+40h] [rbp-B8h]
  __int64 v197; // [rsp+48h] [rbp-B0h]
  __m128i v198; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v199; // [rsp+60h] [rbp-98h] BYREF
  __int64 v200; // [rsp+70h] [rbp-88h]
  __m128i v201; // [rsp+80h] [rbp-78h] BYREF
  __int64 v202; // [rsp+90h] [rbp-68h]
  __int64 v203; // [rsp+98h] [rbp-60h]
  __m128i v204; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v205; // [rsp+B8h] [rbp-40h]

  v192 = a1;
  v205 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_QWORD *)(v2 + 72) )
    return 0;
  if ( *(_DWORD *)(v2 + 8) != 57 )
    return 0;
  v4 = *(_QWORD *)(v2 + 24);
  if ( *(_DWORD *)(v4 + 8) != 68 )
    return 0;
  v5 = *(const char **)(v4 + 24);
  if ( !strcmp(v5, "__eh34_wind") )
  {
    LOBYTE(s1) = 1;
  }
  else
  {
    LOBYTE(s1) = 0;
    if ( strcmp(v5, "__eh34_try") )
      return 0;
  }
  v7 = *(_QWORD *)(v192 + 40);
  v190.m128i_i64[0] = *(_QWORD *)(v192 + 48);
  v8 = v7 + 16 * v190.m128i_i64[0] - 16;
  v9 = **(__int64 ***)(v8 + 8);
  v194 = *(__int64 **)v8;
  if ( v194 == v9 )
    return 0;
  if ( *((_DWORD *)v9 + 6) != 73 )
    return 0;
  v10 = v9[5];
  if ( *(_QWORD *)(v10 + 72) )
    return 0;
  v11 = "__eh34_unwind";
  if ( !(_BYTE)s1 )
    v11 = "__eh34_catch";
  if ( *(_DWORD *)(v10 + 8) != 57 )
    return 0;
  v12 = *(_QWORD *)(v10 + 24);
  if ( *(_DWORD *)(v12 + 8) != 68 )
    return 0;
  v13 = *(const char **)(v12 + 24);
  if ( strcmp(v13, v11) )
    return 0;
  v14 = *(__m128i **)(*(_QWORD *)(v10 + 64) + 24LL);
  if ( !v14[1].m128i_i64[0] )
    return 0;
  v15 = (_DWORD *)v14->m128i_i64[0];
  v16 = *((_DWORD *)v9 + 7);
  v17 = *(_DWORD *)(v14->m128i_i64[0] + 28);
  if ( v16 == -1 )
  {
    v15[7] = -1;
    v16 = v17;
    goto LABEL_19;
  }
  if ( v17 != -1 )
    return 0;
  *((_DWORD *)v9 + 7) = -1;
LABEL_19:
  if ( v16 == -2 )
    return 0;
  v15[7] = v16;
  *(_QWORD *)(*(_QWORD *)(v9[5] + 64) + 24LL) = 0;
  if ( !v14 )
    return 0;
  v18 = *v9;
  *(_QWORD *)v9[1] = *v9;
  v19 = v9[1];
  v197 = v18;
  *(_QWORD *)(v18 + 8) = v19;
  hexdsp = (void (__fastcall *)(__int64, __int64 *))get_hexdsp(v13, v18);
  hexdsp(493, v9 + 2);
  v21 = (void (__fastcall *)(__int64, __int64 *))get_hexdsp(493, v9 + 2);
  v21(444, v9 + 2);
  qfree(v9);
  --v194[2];
  v22 = qalloc_or_throw(72);
  *(_QWORD *)(v22 + 16) = 0;
  v23 = (__m128i *)v22;
  v24 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, (__m128i)(unsigned __int64)v22);
  *(_QWORD *)(v22 + 24) = 0;
  *(__m128i *)v22 = v24;
  *(_BYTE *)(v22 + 64) = 0;
  *(_OWORD *)(v22 + 32) = 0;
  *(_OWORD *)(v22 + 48) = 0;
  v191 = v22;
  v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL) + 24LL);
  *v23 = _mm_loadu_si128((const __m128i *)v25);
  v26 = *(_QWORD *)(v25 + 16);
  *(__m128i *)v25 = v24;
  v27 = v23[1].m128i_i64[0];
  v23[1].m128i_i64[0] = v26;
  *(_QWORD *)(v25 + 16) = v27;
  if ( v23[1].m128i_i64[0] )
  {
    v154 = v191;
    *(_QWORD *)(*(_QWORD *)v191 + 8LL) = v191;
    **(_QWORD **)(v154 + 8) = v154;
  }
  else
  {
    *v23 = v24;
  }
  if ( *(_QWORD *)(v25 + 16) )
  {
    *(_QWORD *)(*(_QWORD *)v25 + 8LL) = v25;
    **(_QWORD **)(v25 + 8) = v25;
  }
  else
  {
    v24 = _mm_unpacklo_epi64((__m128i)v25, (__m128i)v25);
    *(__m128i *)v25 = v24;
  }
  v28 = v191;
  *(_BYTE *)(v191 + 64) = (_BYTE)s1;
  m128i_i64 = 1;
  *(_QWORD *)(v28 + 48) = (int)sub_19DE0(*(_QWORD **)(v2 + 32), 0);
  v30 = *(_QWORD **)(v2 + 32);
  *(_QWORD *)(v28 + 56) = (int)sub_19DE0(v30, 1);
  v31 = *(_QWORD *)(a2 + 24);
  if ( v31 )
  {
    v32 = *(char **)(v31 + 64);
    if ( v32 )
    {
      v33 = (void (__fastcall *)(__int64, char *))get_hexdsp(v30, 1);
      v33(493, v32);
      v34 = (void (__fastcall *)(__int64, char *))get_hexdsp(493, v32);
      v34(444, v32);
      v35 = (void (__fastcall *)(__int64, char *))get_hexdsp(444, v32);
      m128i_i64 = (__int64)v32;
      v30 = &qword_80 + 2;
      v35(130, v32);
    }
    v36 = *(char **)(v31 + 72);
    if ( v36 )
    {
      v37 = (void (__fastcall *)(__int64, char *))get_hexdsp(v30, m128i_i64);
      v37(493, v36);
      v38 = (void (__fastcall *)(__int64, char *))get_hexdsp(493, v36);
      v38(444, v36);
      v39 = (void (__fastcall *)(__int64, char *))get_hexdsp(444, v36);
      m128i_i64 = (__int64)v36;
      v30 = &qword_80 + 2;
      v39(130, v36);
    }
    v40 = (void (__fastcall *)(__int64, __int64))get_hexdsp(v30, m128i_i64);
    v40(467, v31);
    clear_tinfo_t(v31 + 48);
    v41 = (void (__fastcall *)(__int64, __int64))get_hexdsp(v31 + 48, v31);
    v41(444, v31);
    v42 = (void (__fastcall *)(__int64, __int64))get_hexdsp(444, v31);
    m128i_i64 = v31;
    v30 = &qword_80 + 2;
    v42(130, v31);
  }
  v43 = v191;
  v44 = (_BYTE)s1 == 0;
  *(_DWORD *)(a2 + 8) = 83;
  *(_QWORD *)(a2 + 24) = v43;
  if ( !v44 )
  {
    v30 = (_QWORD *)(v43 + 24);
    v45 = sub_1BBF0((const __m128i *)(v43 + 24));
    v46 = _mm_loadu_si128(v14);
    *v14 = _mm_loadu_si128(v45);
    v47 = (_QWORD *)v45[1].m128i_i64[0];
    *v45 = v46;
    v48 = (_QWORD *)v14[1].m128i_i64[0];
    v14[1].m128i_i64[0] = (__int64)v47;
    v45[1].m128i_i64[0] = (__int64)v48;
    if ( v14[1].m128i_i64[0] )
    {
      *(_QWORD *)(v14->m128i_i64[0] + 8) = v14;
      *(_QWORD *)v14->m128i_i64[1] = v14;
    }
    else
    {
      *v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)v14);
    }
    if ( v45[1].m128i_i64[0] )
    {
      *(_QWORD *)(v45->m128i_i64[0] + 8) = v45;
      *(_QWORD *)v45->m128i_i64[1] = v45;
    }
    else
    {
      *v45 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v45, (__m128i)(unsigned __int64)v45);
    }
    if ( *(_BYTE *)(v191 + 64)
      && (v49 = *(_QWORD *)(v191 + 32)) != 0
      && (m128i_i64 = v191, v50 = *(_QWORD *)(v191 + 24) + 48 * v49 - 48, *(_QWORD *)(v50 + 16))
      && (v51 = *(__int64 **)(v50 + 8), *((_DWORD *)v51 + 6) == 72)
      && ((v52 = v51[5],
           m128i_i64 = (__int64)"__eh34_propagate_exception_into_caller",
           v30 = (_QWORD *)v52,
           sub_19D30(v52, "__eh34_propagate_exception_into_caller"))
       || (m128i_i64 = (__int64)"__eh34_continue_unwinding",
           v30 = (_QWORD *)v52,
           sub_19D30(v52, "__eh34_continue_unwinding"))) )
    {
      if ( *((_DWORD *)v51 + 7) == -1 )
      {
        v187 = *v51;
        *(_QWORD *)v51[1] = *v51;
        *(_QWORD *)(v187 + 8) = v51[1];
        v188 = (void (__fastcall *)(__int64, __int64 *))get_hexdsp(v30, m128i_i64);
        v188(493, v51 + 2);
        v189 = (void (__fastcall *)(__int64, __int64 *))get_hexdsp(493, v51 + 2);
        m128i_i64 = (__int64)(v51 + 2);
        v189(444, v51 + 2);
        v30 = v51;
        qfree(v51);
        --*(_QWORD *)(v50 + 16);
      }
      else
      {
        v53 = (void (__fastcall *)(__int64, __int64 *))get_hexdsp(v30, m128i_i64);
        m128i_i64 = (__int64)(v51 + 2);
        v30 = &qword_1E8 + 5;
        v53(493, v51 + 2);
      }
      v54 = (__m128i *)v14->m128i_i64[0];
    }
    else
    {
LABEL_79:
      v54 = (__m128i *)v14->m128i_i64[0];
    }
    goto LABEL_45;
  }
  if ( !v14[1].m128i_i64[0] )
  {
    if ( !under_debugger )
    {
      interr(30782);
LABEL_158:
      if ( !under_debugger )
        interr(30784);
    }
LABEL_160:
    BUG();
  }
  v195 = &v199;
  v198 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v199, (__m128i)(unsigned __int64)&v199);
  v190 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v201, (__m128i)(unsigned __int64)&v201);
  while ( 1 )
  {
    v54 = (__m128i *)v14->m128i_i64[0];
    if ( *(_DWORD *)(v14->m128i_i64[0] + 24) != 73 )
      goto LABEL_136;
    v58 = v54[2].m128i_i64[1];
    v59 = *(char **)(v58 + 64);
    if ( *((_DWORD *)v59 + 2) != 71 )
    {
      if ( !under_debugger )
      {
        interr(30783);
LABEL_154:
        if ( !under_debugger )
          interr(30785);
      }
      goto LABEL_160;
    }
    if ( *(_QWORD *)(v58 + 72) )
      goto LABEL_55;
    if ( *(_DWORD *)(v58 + 8) != 49 )
      goto LABEL_55;
    v98 = *(_QWORD *)(v58 + 24);
    if ( *(_DWORD *)(v98 + 8) != 57 )
      goto LABEL_55;
    v99 = *(_QWORD *)(v98 + 24);
    if ( *(_DWORD *)(v99 + 8) != 68 )
      goto LABEL_55;
    v100 = *(char **)(v99 + 24);
    v101 = "__eh34_catch_type";
    v196 = *(char **)(v58 + 64);
    s1 = v100;
    v102 = strcmp(v100, "__eh34_catch_type");
    v103 = s1;
    v59 = v196;
    if ( v102 )
    {
      v101 = "__eh34_catch_ellipsis";
      s1 = v196;
      v104 = strcmp(v103, "__eh34_catch_ellipsis");
      v59 = s1;
      if ( v104 )
        goto LABEL_55;
    }
    s1 = v59;
    v105 = (unsigned __int8 (__fastcall *)(__int64, char *))get_hexdsp(v103, v101);
    if ( v105(498, s1) )
      break;
    v106 = *(__m128i ***)v14->m128i_i64[0];
    if ( v14 == (__m128i *)v106 )
      break;
    s1 = (char *)(v14->m128i_i64[1] + 16);
    v107 = (unsigned __int8 (__fastcall *)(__int64, char *))get_hexdsp(498, s1);
    if ( v107(498, s1) )
      break;
    v200 = 0;
    v199 = _mm_load_si128(&v198);
    v108 = (__m128i **)v14->m128i_i64[1];
    if ( v106 == (__m128i **)v14->m128i_i64[0] )
    {
      i = v14[1].m128i_i64[0];
    }
    else
    {
      v109 = v106;
      for ( i = 1; v108 != v109; ++i )
        v109 = (__m128i **)*v109;
    }
    v111 = *v108;
    v106[1]->m128i_i64[0] = (__int64)*v108;
    v112 = (__int64 *)v106[1];
    v111->m128i_i64[1] = (__int64)v112;
    v113 = (__m128i ***)v199.m128i_i64[1];
    v14[1].m128i_i64[0] -= i;
    *v113 = v106;
    v106[1] = (__m128i *)v113;
    *v108 = v195;
    v114 = *(_QWORD *)(v58 + 64);
    v199.m128i_i64[1] = (__int64)v108;
    v115 = _mm_load_si128(&v199);
    v116 = *(_QWORD *)(v114 + 24);
    v200 += i;
    v24 = _mm_loadu_si128((const __m128i *)v116);
    v117 = *(_QWORD *)(v116 + 16);
    *(__m128i *)v116 = v115;
    v118 = v200;
    v199 = v24;
    *(_QWORD *)(v116 + 16) = v200;
    v200 = v117;
    if ( *(_QWORD *)(v116 + 16) )
    {
      *(_QWORD *)(*(_QWORD *)v116 + 8LL) = v116;
      **(_QWORD **)(v116 + 8) = v116;
    }
    else
    {
      v24 = _mm_unpacklo_epi64((__m128i)v116, (__m128i)v116);
      *(__m128i *)v116 = v24;
    }
    if ( v200 )
    {
      v155 = v195;
      *(_QWORD *)(v199.m128i_i64[0] + 8) = v195;
      *(_QWORD *)v199.m128i_i64[1] = v155;
      v156 = v199.m128i_i64[0];
      if ( (__m128i *)v199.m128i_i64[0] != v155 )
      {
        v157 = (__m128i **)v199.m128i_i64[1];
        v118 = v200;
        v158 = *(_QWORD *)v199.m128i_i64[1];
        **(_QWORD **)(v199.m128i_i64[0] + 8) = *(_QWORD *)v199.m128i_i64[1];
        *(_QWORD *)(v158 + 8) = *(_QWORD *)(v156 + 8);
        v200 -= v118;
        v112 = (__int64 *)v14->m128i_i64[1];
        *v112 = v156;
        *(_QWORD *)(v156 + 8) = v112;
        *v157 = v14;
        v14->m128i_i64[1] = (__int64)v157;
        v14[1].m128i_i64[0] += v118;
      }
    }
    else
    {
      v199 = _mm_load_si128(&v198);
    }
    v119 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(v112, v118);
    m128i_i64 = v58;
    v30 = &qword_1D0 + 2;
    v119(466, v58, v98);
    v120 = (__m128i *)v199.m128i_i64[0];
    for ( j = v195; v120 != j; --v200 )
    {
      v122 = (__int64 *)v120;
      v120 = (__m128i *)v120->m128i_i64[0];
      *(_QWORD *)v122[1] = v120;
      v120->m128i_i64[1] = v122[1];
      v123 = (void (__fastcall *)(__int64, __int64 *))get_hexdsp(v30, m128i_i64);
      v123(493, v122 + 2);
      v124 = (void (__fastcall *)(__int64, __int64 *))get_hexdsp(493, v122 + 2);
      m128i_i64 = (__int64)(v122 + 2);
      v124(444, v122 + 2);
      v30 = v122;
      qfree(v122);
    }
LABEL_78:
    if ( !v14[1].m128i_i64[0] )
      goto LABEL_79;
  }
  v59 = *(char **)(v58 + 64);
LABEL_55:
  v60 = _mm_load_si128(&v190);
  v24.m128i_i64[0] = 0;
  v203 = 0;
  v204 = 0;
  v61 = *((_QWORD *)v59 + 3);
  v202 = 0;
  v201 = v60;
  v62 = *(_DWORD *)(v58 + 8);
  if ( v62 == 57 )
  {
    v125 = *(_QWORD *)(v58 + 24);
    if ( *(_DWORD *)(v125 + 8) != 68 )
      goto LABEL_99;
    s1 = *(char **)(v125 + 24);
    v153 = strcmp(s1, "__eh34_catch_type");
    v126 = (__m128i *)s1;
    if ( v153 )
    {
      m128i_i64 = (__int64)"__eh34_catch_ellipsis";
      if ( strcmp(s1, "__eh34_catch_ellipsis") )
        goto LABEL_99;
    }
    else
    {
      m128i_i64 = v58;
      v126 = &v201;
      sub_1B3E0((__int64)&v201, v58);
    }
LABEL_103:
    if ( !v61 )
    {
LABEL_66:
      v82 = sub_1BBF0((const __m128i *)(v191 + 24));
      v83 = v82[1].m128i_i64[1];
      v84 = _mm_load_si128(&v201);
      v85 = _mm_loadu_si128(v82 + 2);
      v82[1].m128i_i64[1] = v203;
      v203 = v83;
      v82[2] = v204;
      v204 = v85;
      v24 = _mm_loadu_si128(v82);
      v86 = v82[1].m128i_i64[0];
      *v82 = v84;
      v201 = v24;
      v82[1].m128i_i64[0] = v202;
      v202 = v86;
      if ( v82[1].m128i_i64[0] )
      {
        *(_QWORD *)(v82->m128i_i64[0] + 8) = v82;
        *(_QWORD *)v82->m128i_i64[1] = v82;
        if ( !v202 )
          goto LABEL_68;
      }
      else
      {
        v24 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v82, (__m128i)(unsigned __int64)v82);
        *v82 = v24;
        if ( !v202 )
        {
LABEL_68:
          v201 = _mm_load_si128(&v190);
LABEL_69:
          v30 = (_QWORD *)v203;
          if ( v203 )
          {
            v87 = v204.m128i_i64[0];
            if ( v204.m128i_i64[0] )
            {
              v88 = 0;
              v89 = 0;
              do
              {
                v90 = &v30[v88];
                v91 = v30[v88 + 8];
                if ( v91 )
                {
                  v90[9] = 0;
                  qfree(v91);
                }
                v92 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(v91, m128i_i64);
                ++v89;
                v88 += 11;
                v92(467, v90);
                clear_tinfo_t(v90 + 6);
                v93 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(v90 + 6, v90);
                m128i_i64 = (__int64)v90;
                v93(444, v90);
                v30 = (_QWORD *)v203;
              }
              while ( v87 != v89 );
            }
            v204.m128i_i64[0] = 0;
            qfree(v30);
          }
          for ( k = (__m128i *)v201.m128i_i64[0]; k != &v201; --v202 )
          {
            v95 = k;
            k = (__m128i *)k->m128i_i64[0];
            *(_QWORD *)v95->m128i_i64[1] = k;
            k->m128i_i64[1] = v95->m128i_i64[1];
            v96 = (void (__fastcall *)(__int64, __m128i *))get_hexdsp(v30, m128i_i64);
            v96(493, v95 + 1);
            v97 = (void (__fastcall *)(__int64, __m128i *))get_hexdsp(493, &v95[1]);
            m128i_i64 = (__int64)v95[1].m128i_i64;
            v97(444, v95 + 1);
            v30 = v95->m128i_i64;
            qfree(v95);
          }
          goto LABEL_78;
        }
      }
      *(_QWORD *)(v201.m128i_i64[0] + 8) = &v201;
      *(_QWORD *)v201.m128i_i64[1] = &v201;
      goto LABEL_69;
    }
    v145 = _mm_loadu_si128((const __m128i *)v61);
    v146 = *(_QWORD *)(v61 + 16);
    *(__m128i *)v61 = _mm_load_si128(&v201);
    v201 = v145;
    *(_QWORD *)(v61 + 16) = v202;
    v202 = v146;
    if ( *(_QWORD *)(v61 + 16) )
    {
      *(_QWORD *)(*(_QWORD *)v61 + 8LL) = v61;
      **(_QWORD **)(v61 + 8) = v61;
    }
    else
    {
      *(__m128i *)v61 = _mm_unpacklo_epi64((__m128i)v61, (__m128i)v61);
    }
    if ( v202 )
    {
      *(_QWORD *)(v201.m128i_i64[0] + 8) = &v201;
      *(_QWORD *)v201.m128i_i64[1] = &v201;
    }
    else
    {
      v201 = _mm_load_si128(&v190);
    }
    if ( *(_QWORD *)(v58 + 72) )
      goto LABEL_158;
    v147 = v54[1].m128i_i32[3];
    if ( v147 != -1 )
    {
      if ( !v202 || *(_DWORD *)(v201.m128i_i64[0] + 28) != -1 )
        goto LABEL_154;
      *(_DWORD *)(v201.m128i_i64[0] + 28) = v147;
    }
    v148 = v14->m128i_i64[0];
    v149 = *(_QWORD *)v14->m128i_i64[0];
    v150 = v14->m128i_i64[0] + 16;
    **(_QWORD **)(v14->m128i_i64[0] + 8) = v149;
    *(_QWORD *)(v149 + 8) = *(_QWORD *)(v148 + 8);
    v151 = (void (__fastcall *)(__int64, __int64))get_hexdsp(v126, m128i_i64);
    v151(493, v150);
    v152 = (void (__fastcall *)(__int64, __int64))get_hexdsp(493, v150);
    m128i_i64 = v150;
    v152(444, v150);
    qfree(v148);
LABEL_65:
    --v14[1].m128i_i64[0];
    goto LABEL_66;
  }
  if ( !*(_QWORD *)(v58 + 72) && v62 == 18 )
  {
    v176 = *(_QWORD *)(v58 + 24);
    if ( *(_DWORD *)(v176 + 8) == 49 )
    {
      v177 = *(_QWORD *)(v176 + 24);
      if ( *(_DWORD *)(v177 + 8) == 57 )
      {
        v178 = *(_QWORD *)(v177 + 24);
        s1 = *(char **)(v176 + 24);
        if ( *(_DWORD *)(v178 + 8) == 68 && !strcmp(*(const char **)(v178 + 24), "__eh34_catch_type") )
        {
          v179 = s1;
          v180 = &v201;
          sub_1B3E0((__int64)&v201, (__int64)s1);
          v181 = *(char **)(v58 + 24);
          if ( v181 )
          {
            v182 = (void (__fastcall *)(__int64, char *))get_hexdsp(&v201, v179);
            v182(467, v181);
            clear_tinfo_t(v181 + 48);
            v183 = (void (__fastcall *)(__int64, char *))get_hexdsp(v181 + 48, v181);
            v183(444, v181);
            v184 = (void (__fastcall *)(__int64, char *))get_hexdsp(444, v181);
            v179 = v181;
            v180 = (__m128i *)(&qword_80 + 2);
            v184(130, v181);
          }
          v185 = *(_QWORD *)(v58 + 32);
          v186 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(v180, v179);
          m128i_i64 = v58;
          v186(466, v58, v185);
          goto LABEL_66;
        }
      }
    }
    if ( *(_DWORD *)(v176 + 8) != 57 )
      goto LABEL_99;
    v63 = *(_QWORD *)(v176 + 24);
    if ( *(_DWORD *)(v63 + 8) != 68 )
      goto LABEL_99;
    v64 = *(const char **)(v63 + 24);
    v65 = "__eh34_catch_ellipsis";
    if ( strcmp(v64, "__eh34_catch_ellipsis") )
      goto LABEL_99;
    if ( v176 )
    {
      v66 = (void (__fastcall *)(__int64, __int64))get_hexdsp(v64, "__eh34_catch_ellipsis");
      v66(467, v176);
      clear_tinfo_t(v176 + 48);
      v67 = (void (__fastcall *)(__int64, __int64))get_hexdsp(v176 + 48, v176);
      v67(444, v176);
      v68 = (void (__fastcall *)(__int64, __int64))get_hexdsp(444, v176);
      v65 = (const char *)v176;
      v64 = (_BYTE *)(&qword_80 + 2);
      v68(130, v176);
    }
    v69 = *(_QWORD *)(v58 + 32);
    v70 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(v64, v65);
    v70(466, v58, v69);
    v71 = qalloc_or_throw(48);
    *(_QWORD *)v71 = &v201;
    v72 = (__int64 *)v201.m128i_i64[1];
    *(_QWORD *)(v71 + 24) = -4294967226LL;
    *(_QWORD *)(v71 + 16) = -1;
    *(_QWORD *)(v71 + 8) = v72;
    *(_QWORD *)(v71 + 40) = 0;
    *(_QWORD *)(v71 + 32) = 0xFFFFFFFFLL;
    *v72 = v71;
    ++v202;
    v73 = *(_QWORD *)(v71 + 16);
    v74 = v54[1].m128i_i64[0];
    v201.m128i_i64[1] = v71;
    *(_QWORD *)(v71 + 16) = v74;
    LODWORD(v74) = v54[1].m128i_i32[2];
    v54[1].m128i_i64[0] = v73;
    LODWORD(v73) = *(_DWORD *)(v71 + 24);
    *(_DWORD *)(v71 + 24) = v74;
    LODWORD(v74) = v54[1].m128i_i32[3];
    v54[1].m128i_i32[2] = v73;
    LODWORD(v73) = *(_DWORD *)(v71 + 28);
    *(_DWORD *)(v71 + 28) = v74;
    v75 = v54[2].m128i_i64[1];
    v54[1].m128i_i32[3] = v73;
    v76 = *(_QWORD *)(v71 + 40);
    *(_QWORD *)(v71 + 40) = v75;
    v54[2].m128i_i64[1] = v76;
    v77 = v14->m128i_i64[0];
    v78 = *(_QWORD *)v14->m128i_i64[0];
    v79 = v14->m128i_i64[0] + 16;
    **(_QWORD **)(v14->m128i_i64[0] + 8) = v78;
    *(_QWORD *)(v78 + 8) = *(_QWORD *)(v77 + 8);
    v80 = (void (__fastcall *)(__int64, __int64))get_hexdsp(48, v58);
    v80(493, v79);
    v81 = (void (__fastcall *)(__int64, __int64))get_hexdsp(493, v79);
    m128i_i64 = v79;
    v81(444, v79);
    qfree(v77);
    goto LABEL_65;
  }
LABEL_99:
  m128i_i64 = v58;
  v126 = &v201;
  if ( (unsigned __int8)sub_1BAF0((__int64)&v201, v58) )
  {
    v127 = v204.m128i_i32[0] / 2;
    if ( v204.m128i_i32[0] > 1 )
    {
      LODWORD(m128i_i64) = 0;
      v126 = nullptr;
      v128 = v204.m128i_i32[0] - 1;
      do
      {
        v129 = v128 - m128i_i64;
        m128i_i64 = (unsigned int)(m128i_i64 + 1);
        v130 = &v126->m128i_i8[v203];
        v126 = (__m128i *)((char *)v126 + 88);
        v131 = (_QWORD *)(v203 + 88LL * v129);
        v132 = *(_QWORD *)v130;
        *(_QWORD *)v130 = *v131;
        v133 = *((_DWORD *)v131 + 2);
        *v131 = v132;
        LODWORD(v132) = *((_DWORD *)v130 + 2);
        *((_DWORD *)v130 + 2) = v133;
        v134 = *((_DWORD *)v131 + 3);
        *((_DWORD *)v131 + 2) = v132;
        LODWORD(v132) = *((_DWORD *)v130 + 3);
        *((_DWORD *)v130 + 3) = v134;
        v135 = v131[3];
        *((_DWORD *)v131 + 3) = v132;
        v136 = *((_QWORD *)v130 + 3);
        *((_QWORD *)v130 + 3) = v135;
        v137 = v131[4];
        v131[3] = v136;
        v138 = *((_QWORD *)v130 + 4);
        *((_QWORD *)v130 + 4) = v137;
        v139 = v131[5];
        v131[4] = v138;
        v140 = *((_QWORD *)v130 + 5);
        *((_QWORD *)v130 + 5) = v139;
        v141 = v131[6];
        v131[5] = v140;
        v142 = *((_QWORD *)v130 + 6);
        *((_QWORD *)v130 + 6) = v141;
        LODWORD(v141) = *((_DWORD *)v131 + 14);
        v131[6] = v142;
        LODWORD(v142) = *((_DWORD *)v130 + 14);
        *((_DWORD *)v130 + 14) = v141;
        *((_DWORD *)v131 + 14) = v142;
        v143 = *((_QWORD *)v130 + 8);
        v144 = _mm_loadu_si128((const __m128i *)(v130 + 72));
        *((_QWORD *)v130 + 8) = v131[8];
        *((_QWORD *)v130 + 9) = v131[9];
        *((_QWORD *)v130 + 10) = v131[10];
        v131[8] = v143;
        *(__m128i *)(v131 + 9) = v144;
      }
      while ( (int)m128i_i64 < v127 );
    }
    goto LABEL_103;
  }
  v30 = (_QWORD *)v203;
  if ( v203 )
  {
    v159 = v204.m128i_i64[0];
    v160 = 0;
    v161 = 0;
    if ( v204.m128i_i64[0] )
    {
      do
      {
        v162 = &v30[v160];
        v163 = v30[v160 + 8];
        if ( v163 )
        {
          v162[9] = 0;
          qfree(v163);
        }
        v164 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(v163, m128i_i64);
        ++v161;
        v160 += 11;
        v164(467, v162);
        clear_tinfo_t(v162 + 6);
        v165 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(v162 + 6, v162);
        m128i_i64 = (__int64)v162;
        v165(444, v162);
        v30 = (_QWORD *)v203;
      }
      while ( v159 != v161 );
    }
    v204.m128i_i64[0] = 0;
    qfree(v30);
  }
  for ( m = (__m128i *)v201.m128i_i64[0]; m != &v201; --v202 )
  {
    v167 = m;
    m = (__m128i *)m->m128i_i64[0];
    *(_QWORD *)v167->m128i_i64[1] = m;
    m->m128i_i64[1] = v167->m128i_i64[1];
    v168 = (void (__fastcall *)(__int64, __m128i *))get_hexdsp(v30, m128i_i64);
    v168(493, v167 + 1);
    v169 = (void (__fastcall *)(__int64, __m128i *))get_hexdsp(493, &v167[1]);
    m128i_i64 = (__int64)v167[1].m128i_i64;
    v169(444, v167 + 1);
    v30 = v167->m128i_i64;
    qfree(v167);
  }
  v54 = (__m128i *)v14->m128i_i64[0];
LABEL_136:
  if ( !v14[1].m128i_i64[0] )
  {
LABEL_45:
    while ( v14 != v54 )
    {
      v55 = v54;
      v54 = (__m128i *)v54->m128i_i64[0];
      *(_QWORD *)v55->m128i_i64[1] = v54;
      v54->m128i_i64[1] = v55->m128i_i64[1];
      v56 = (void (__fastcall *)(__int64, __m128i *))get_hexdsp(v30, m128i_i64);
      v56(493, v55 + 1);
      v57 = (void (__fastcall *)(__int64, __m128i *))get_hexdsp(493, &v55[1]);
      m128i_i64 = (__int64)v55[1].m128i_i64;
      v57(444, v55 + 1);
      v30 = v55->m128i_i64;
      qfree(v55);
      --v14[1].m128i_i64[0];
    }
    goto LABEL_47;
  }
  sub_BD80(
    (__int64)"%a: moved unrecognized code in the catch handler past the try-statement\n",
    *(double *)v24.m128i_i64);
  v170 = v14->m128i_i64[0];
  if ( (__m128i *)v14->m128i_i64[0] != v14 )
  {
    v171 = (__int64 *)v14->m128i_i64[1];
    v172 = v14[1].m128i_i64[0];
    v173 = v197;
    v174 = *v171;
    **(_QWORD **)(v170 + 8) = *v171;
    v30 = *(_QWORD **)(v170 + 8);
    *(_QWORD *)(v174 + 8) = v30;
    v14[1].m128i_i64[0] -= v172;
    m128i_i64 = *(_QWORD *)(v173 + 8);
    *(_QWORD *)m128i_i64 = v170;
    *(_QWORD *)(v170 + 8) = m128i_i64;
    v175 = v194;
    *v171 = v173;
    *(_QWORD *)(v173 + 8) = v171;
    v175[2] += v172;
    goto LABEL_79;
  }
LABEL_47:
  qfree(v14);
  ++*(_DWORD *)(v192 + 72);
  return 1;
}

