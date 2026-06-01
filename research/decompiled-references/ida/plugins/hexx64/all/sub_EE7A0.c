unsigned __int64 __fastcall sub_EE7A0(__int64 a1, _BYTE *a2, __int64 a3, _BYTE *a4)
{
  _BYTE *v4; // rax
  __int64 v5; // r15
  __int64 v7; // rax
  __int64 v8; // rax
  _BYTE *v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // r12
  __int64 v13; // rbp
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rbx
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned __int64 v20; // r13
  __int64 v21; // r12
  __int64 v22; // rsi
  int v23; // eax
  __m128 v24; // xmm0
  int v25; // eax
  __int64 v26; // r13
  __int64 v27; // rbp
  __int64 v28; // r12
  __int64 v29; // rdi
  unsigned __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __m128i v34; // xmm0
  __int64 v35; // rdi
  __int64 v36; // r13
  __int64 v37; // r12
  _QWORD *v38; // rbp
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // r12
  __int64 v43; // rbp
  __int64 *v44; // rbx
  __int64 v45; // rdi
  __int64 v46; // rdi
  __m128i *v47; // rax
  unsigned __int8 v48; // r12
  __int64 v49; // rdi
  __int64 v50; // r13
  __int64 v51; // r12
  _QWORD *v52; // rbp
  __int64 v53; // rdi
  __int64 v54; // rdi
  __int64 v55; // rdi
  __int64 v56; // r12
  __int64 v57; // rbp
  __int64 *v58; // rbx
  __int64 v59; // rdi
  __int64 v60; // rdi
  __int64 v61; // r12
  __int64 v62; // rbp
  _QWORD *v63; // rbx
  __int64 v64; // rdi
  __int64 v65; // rdi
  int v66; // r12d
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rbp
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  size_t v73; // r13
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rsi
  __int64 v77; // rdx
  __int64 v78; // rbp
  __int64 v79; // rax
  __m128i v80; // xmm0
  __int64 v81; // rax
  unsigned __int64 v82; // r14
  __int64 v83; // r8
  unsigned __int64 v84; // rcx
  size_t v85; // rdx
  __int64 v86; // rbp
  __int64 v87; // rbp
  __int64 v88; // r13
  __int64 v89; // r14
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r13
  __int64 v93; // r14
  int v94; // eax
  __int64 v95; // rax
  __int64 v96; // rcx
  __int64 v97; // rdx
  void *v98; // rax
  bool v99; // al
  int v100; // [rsp+8h] [rbp-300h]
  unsigned __int64 v101; // [rsp+10h] [rbp-2F8h]
  size_t n; // [rsp+40h] [rbp-2C8h]
  size_t na; // [rsp+40h] [rbp-2C8h]
  unsigned __int64 v108; // [rsp+48h] [rbp-2C0h]
  __int64 v109; // [rsp+58h] [rbp-2B0h]
  __int64 v110; // [rsp+68h] [rbp-2A0h]
  unsigned __int8 tinfo_details; // [rsp+7Fh] [rbp-289h]
  __int64 v112; // [rsp+90h] [rbp-278h] BYREF
  __int128 v113; // [rsp+98h] [rbp-270h]
  __int64 v114; // [rsp+A8h] [rbp-260h]
  __int64 v115; // [rsp+B0h] [rbp-258h]
  __int64 v116; // [rsp+B8h] [rbp-250h]
  __int128 v117; // [rsp+C0h] [rbp-248h]
  __int64 v118; // [rsp+D0h] [rbp-238h]
  __int128 v119; // [rsp+D8h] [rbp-230h]
  char v120; // [rsp+E8h] [rbp-220h]
  __int64 v121; // [rsp+F0h] [rbp-218h] BYREF
  __m128i v122; // [rsp+F8h] [rbp-210h] BYREF
  __int64 v123; // [rsp+108h] [rbp-200h]
  __int64 v124; // [rsp+110h] [rbp-1F8h]
  __int64 v125; // [rsp+118h] [rbp-1F0h]
  __int128 v126; // [rsp+120h] [rbp-1E8h]
  __int64 v127; // [rsp+130h] [rbp-1D8h]
  __int128 v128; // [rsp+138h] [rbp-1D0h]
  char v129; // [rsp+148h] [rbp-1C0h]
  __m128i v130; // [rsp+150h] [rbp-1B8h] BYREF
  __int64 v131; // [rsp+160h] [rbp-1A8h]
  __int64 v132; // [rsp+168h] [rbp-1A0h]
  _BYTE v133[24]; // [rsp+170h] [rbp-198h] BYREF
  __int128 v134; // [rsp+188h] [rbp-180h]
  __int64 v135; // [rsp+198h] [rbp-170h]
  __int64 v136; // [rsp+1A0h] [rbp-168h]
  _BYTE v137[8]; // [rsp+1A8h] [rbp-160h] BYREF
  __int64 v138; // [rsp+1B0h] [rbp-158h]
  __int64 v139; // [rsp+1B8h] [rbp-150h]
  __int64 v140; // [rsp+1C8h] [rbp-140h]
  __int64 v141; // [rsp+1D0h] [rbp-138h]
  __int64 v142; // [rsp+200h] [rbp-108h]
  __int64 v143; // [rsp+208h] [rbp-100h]
  __int64 v144; // [rsp+218h] [rbp-F0h]
  __int64 v145; // [rsp+220h] [rbp-E8h]
  __int64 v146; // [rsp+230h] [rbp-D8h]
  __int64 v147; // [rsp+238h] [rbp-D0h]
  __int64 v148; // [rsp+240h] [rbp-C8h]
  __int64 v149; // [rsp+248h] [rbp-C0h]
  __int64 v150; // [rsp+250h] [rbp-B8h]
  __int64 v151; // [rsp+258h] [rbp-B0h]
  __int128 v152; // [rsp+260h] [rbp-A8h]
  int v153; // [rsp+270h] [rbp-98h]
  __int16 v154; // [rsp+274h] [rbp-94h]
  __m128i si128; // [rsp+278h] [rbp-90h]
  __int128 v156; // [rsp+288h] [rbp-80h]
  __m128i v157; // [rsp+298h] [rbp-70h]
  __int128 v158; // [rsp+2A8h] [rbp-60h]
  int v159; // [rsp+2B8h] [rbp-50h]
  __int16 v160; // [rsp+2BCh] [rbp-4Ch]
  char v161; // [rsp+2BEh] [rbp-4Ah]
  unsigned __int64 v162; // [rsp+2C8h] [rbp-40h]

  v162 = __readfsqword(0x28u);
  v4 = sub_120380(a4, 0);
  if ( !v4 )
    return v162 - __readfsqword(0x28u);
  v5 = (__int64)v4;
  if ( v4[64] != 8 )
    return v162 - __readfsqword(0x28u);
  v7 = *((_QWORD *)v4 + 9);
  v112 = 0;
  v109 = v7;
  v114 = 0;
  v8 = *(_QWORD *)(a1 + 64);
  v115 = 0;
  v116 = 0;
  v110 = v8;
  v118 = 0;
  v120 = 16;
  v113 = 0;
  v117 = 0;
  v119 = 0;
  v9 = sub_120380(a2, 0);
  n = (size_t)v9;
  if ( !v9 || v9[64] != 8 )
  {
    if ( !under_debugger )
      sub_383060(0xCD3Du, 0.0);
LABEL_161:
    BUG();
  }
  if ( (unsigned __int8)get_op_tinfo()
    && (v130.m128i_i64[0] = get_tinfo_property(),
        copy_tinfo_t(),
        clear_tinfo_t(),
        (tinfo_details = get_tinfo_details()) != 0) )
  {
    v17 = *(_QWORD *)(n + 72);
    v108 = v113;
    if ( (_QWORD)v113 == *(_QWORD *)(v17 + 32) && (v99 = sub_E3B70(v110, v17, &v112, v113, 0.0)) )
    {
      tinfo_details = v99;
    }
    else
    {
      v121 = 0;
      v122 = 0;
      if ( v108 )
      {
        v100 = 0;
        v121 = qvector_reserve((__int64)&v121, 0, v108, 80);
        while ( *(_QWORD *)(v17 + 32) )
        {
          v66 = 0;
          while ( (unsigned int)compare_arglocs() )
          {
            if ( (unsigned __int64)++v66 >= *(_QWORD *)(v17 + 32) )
              goto LABEL_137;
          }
          v69 = *(_QWORD *)(v17 + 24) + 80LL * v66;
          sub_123A40((__int64)&v130, (unsigned __int8 *)v69, v67, v68);
          v70 = *(_QWORD *)(v69 + 16);
          v132 = 0;
          v131 = v70;
          copy_tinfo_t();
          memset(v133, 0, sizeof(v133));
          v73 = *(_QWORD *)(v69 + 40);
          if ( v73 )
          {
            *(_QWORD *)v133 = qalloc_or_throw(*(_QWORD *)(v69 + 40), v69 + 24, v71, v72);
            *(_QWORD *)&v133[16] = v73;
            memcpy(*(void **)v133, *(const void **)(v69 + 32), v73);
            *(_QWORD *)&v133[8] = v73;
          }
          LODWORD(v134) = 0;
          copy_argloc();
          v75 = v122.m128i_i64[0];
          v76 = v121;
          LODWORD(v135) = *(_DWORD *)(v69 + 72);
          if ( v122.m128i_i64[1] < (unsigned __int64)(v122.m128i_i64[0] + 1) )
          {
            v121 = qvector_reserve((__int64)&v121, v121, v122.m128i_i64[0] + 1, 80);
            v75 = v122.m128i_i64[0];
            v76 = v121;
          }
          v77 = 80 * v75;
          v78 = v76 + v77;
          sub_123A40(v76 + v77, (unsigned __int8 *)&v130, v77, v74);
          v79 = v131;
          *(_QWORD *)(v78 + 24) = 0;
          *(_QWORD *)(v78 + 16) = v79;
          copy_tinfo_t();
          v80 = _mm_loadu_si128((const __m128i *)&v133[8]);
          v81 = *(_QWORD *)v133;
          *(_QWORD *)v133 = 0;
          *(__m128i *)(v78 + 40) = v80;
          *(_OWORD *)&v133[8] = 0;
          *(_QWORD *)(v78 + 32) = v81;
          *(_DWORD *)(v78 + 56) = 0;
          copy_argloc();
          *(_DWORD *)(v78 + 72) = v135;
          ++v122.m128i_i64[0];
          cleanup_argloc();
          if ( *(_QWORD *)v133 )
          {
            *(_QWORD *)&v133[8] = 0;
            qfree(*(__int64 *)v133);
          }
          clear_tinfo_t();
          sub_11CDA0((__int64)&v130);
          if ( ++v100 >= v108 )
            goto LABEL_24;
        }
LABEL_137:
        dstr_tinfo();
        sub_6D0A0(
          (__int64)"%a: argument #%d in a user-defined function type can not be applied to unmerged function: user-define"
                   "d type '%s' will be ignored\n",
          0.0,
          *(_QWORD *)(n + 24),
          (const char *)(unsigned int)(v100 + 1));
        tinfo_details = 0;
        v21 = v121;
      }
      else
      {
LABEL_24:
        v18 = v120 & 0xF0;
        if ( (v120 & 0xF0) == 0xC0 )
          v18 = HIDWORD(v114);
        if ( v18 <= 0x10 )
          v18 = getinf();
        v19 = v18 & 0xFFFFFFF0;
        v20 = *(_QWORD *)(v17 + 32);
        v21 = *(_QWORD *)(v17 + 24);
        v22 = v121;
        if ( v19 == 64 || v19 == 208 )
        {
          v82 = *(int *)(v17 + 8);
          if ( v82 < v20 )
          {
            v83 = 80 * (v20 - v82);
            v84 = 0xCCCCCCCCCCCCCCCDLL * (v83 >> 4);
            v101 = v84;
            if ( v84 )
            {
              v85 = 0;
              v86 = 80 * v122.m128i_i64[0];
              if ( v122.m128i_i64[1] < v84 + v122.m128i_i64[0] )
              {
                v121 = qvector_reserve((__int64)&v121, v121, v84 + v122.m128i_i64[0], 80);
                v22 = v121;
                v83 = 80 * (v20 - v82);
                v85 = 80 * v122.m128i_i64[0] - v86;
              }
              v87 = v22 + v86;
              v88 = 80 * v20;
              v89 = 80 * v82;
              memmove((void *)(v87 + v83), (const void *)v87, v85);
              if ( v88 != v89 )
              {
                v92 = v21 + v88;
                v93 = v21 + v89;
                do
                {
                  sub_123A40(v87, (unsigned __int8 *)v93, v90, v91);
                  v95 = *(_QWORD *)(v93 + 16);
                  *(_QWORD *)(v87 + 24) = 0;
                  *(_QWORD *)(v87 + 16) = v95;
                  copy_tinfo_t();
                  *(_QWORD *)(v87 + 32) = 0;
                  *(_OWORD *)(v87 + 40) = 0;
                  v97 = *(_QWORD *)(v93 + 40);
                  if ( v97 )
                  {
                    na = *(_QWORD *)(v93 + 40);
                    v98 = (void *)qalloc_or_throw(na, v93 + 24, v97, v96);
                    *(_QWORD *)(v87 + 32) = v98;
                    *(_QWORD *)(v87 + 48) = na;
                    memcpy(v98, *(const void **)(v93 + 32), na);
                    *(_QWORD *)(v87 + 40) = na;
                  }
                  *(_DWORD *)(v87 + 56) = 0;
                  copy_argloc();
                  v94 = *(_DWORD *)(v93 + 72);
                  v93 += 80;
                  v87 += 80;
                  *(_DWORD *)(v87 - 8) = v94;
                }
                while ( v92 != v93 );
              }
              v22 = v121;
              v122.m128i_i64[0] += v101;
              v21 = *(_QWORD *)(v17 + 24);
            }
          }
        }
        v23 = v113;
        *(_QWORD *)(v17 + 24) = v22;
        v24 = _mm_loadh_ps((const double *)(v17 + 40));
        *(_DWORD *)(v17 + 8) = v23;
        *(__m128i *)(v17 + 32) = _mm_loadu_si128(&v122);
        v121 = v21;
        v122 = (__m128i)v24;
        v25 = v120 & 0xF0;
        if ( (v120 & 0xF0) == 0xC0 )
          v25 = HIDWORD(v114);
        *(_DWORD *)(v17 + 20) = v25;
      }
      if ( v21 )
      {
        v26 = v122.m128i_i64[0];
        if ( v122.m128i_i64[0] )
        {
          v27 = 0;
          do
          {
            v28 = 80 * v27 + v21;
            cleanup_argloc();
            v29 = *(_QWORD *)(v28 + 32);
            if ( v29 )
            {
              *(_QWORD *)(v28 + 40) = 0;
              qfree(v29);
            }
            ++v27;
            clear_tinfo_t();
            sub_11CDA0(v28);
            v21 = v121;
          }
          while ( v26 != v27 );
        }
        v122.m128i_i64[0] = 0;
        qfree(v21);
      }
    }
  }
  else
  {
    tinfo_details = 0;
  }
  clear_tinfo_t();
  v10 = *(_DWORD *)(v109 + 20) & 0xFFFFFFF0;
  if ( v10 != 64 && v10 != 208 || sub_2B7C10(v110) )
  {
LABEL_10:
    if ( v118 )
    {
      *(_QWORD *)&v119 = 0;
      qfree(v118);
    }
    cleanup_argloc();
    clear_tinfo_t();
    v11 = v112;
    if ( v112 )
    {
      v12 = v113;
      if ( (_QWORD)v113 )
      {
        v13 = 0;
        do
        {
          v14 = (_QWORD *)(v11 + 80 * v13);
          clear_tinfo_t();
          v15 = v14[5];
          if ( v15 )
          {
            v14[6] = 0;
            qfree(v15);
          }
          v16 = v14[2];
          if ( v16 )
          {
            v14[3] = 0;
            qfree(v16);
          }
          ++v13;
          cleanup_argloc();
          v11 = v112;
        }
        while ( v12 != v13 );
      }
LABEL_20:
      *(_QWORD *)&v113 = 0;
      qfree(v11);
      return v162 - __readfsqword(0x28u);
    }
    return v162 - __readfsqword(0x28u);
  }
  v30 = *(_QWORD *)(a1 + 64);
  v31 = *(_QWORD *)(a1 + 480);
  v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, (__m128i)v30);
  v32 = *(_QWORD *)(v30 + 1496);
  v132 = 0;
  v131 = v32;
  v135 = 0;
  v136 = 0;
  memset(v133, 0, sizeof(v133));
  v134 = 0;
  sub_D10B0((__int64)v137, v31, 0);
  v154 = 0;
  v152 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
  v157 = 0;
  v146 = a1;
  v147 = 0;
  v148 = 0;
  v149 = 0;
  v150 = 0;
  v151 = 0;
  v153 = -1;
  v159 = 0;
  v160 = 0;
  v161 = 0;
  v156 = -1;
  v158 = 0;
  v33 = sub_D7360(v130.m128i_i64[0], *(_QWORD *)(v130.m128i_i64[0] + 56));
  v34 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v33, (__m128i)(unsigned __int64)v33);
  v157 = v34;
  v157.m128i_i64[0] = *(int *)(v109 + 12);
  sub_E9680(&v130, v5, 0, *(double *)v34.m128i_i64);
  v121 = 0;
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v127 = 0;
  v129 = 16;
  v122 = 0;
  v126 = 0;
  v128 = 0;
  if ( !si128.m128i_i8[0] )
  {
LABEL_42:
    cleanup_argloc();
    clear_tinfo_t();
    v35 = v121;
    if ( v121 )
    {
      v36 = v122.m128i_i64[0];
      if ( v122.m128i_i64[0] )
      {
        v37 = 0;
        do
        {
          v38 = (_QWORD *)(v35 + 80 * v37);
          clear_tinfo_t();
          v39 = v38[5];
          if ( v39 )
          {
            v38[6] = 0;
            qfree(v39);
          }
          v40 = v38[2];
          if ( v40 )
          {
            v38[3] = 0;
            qfree(v40);
          }
          ++v37;
          cleanup_argloc();
          v35 = v121;
        }
        while ( v36 != v37 );
      }
      v122.m128i_i64[0] = 0;
      qfree(v35);
    }
    clear_tinfo_t();
    if ( v151 )
    {
      *(_QWORD *)&v152 = 0;
      qfree(v151);
    }
    qfree(v149);
    qfree(v147);
    if ( v144 )
    {
      v145 = 0;
      qfree(v144);
    }
    if ( v142 )
    {
      v143 = 0;
      qfree(v142);
    }
    if ( v140 )
    {
      v141 = 0;
      qfree(v140);
    }
    if ( v138 )
    {
      v139 = 0;
      qfree(v138);
    }
    qfree(v135);
    v41 = *(_QWORD *)&v133[16];
    if ( *(_QWORD *)&v133[16] )
    {
      v42 = v134;
      if ( (_QWORD)v134 )
      {
        v43 = 0;
        do
        {
          v44 = (__int64 *)(v41 + 48 * v43);
          v45 = v44[3];
          if ( v45 )
          {
            v44[4] = 0;
            qfree(v45);
          }
          v46 = *v44;
          if ( *v44 )
          {
            v44[1] = 0;
            qfree(v46);
          }
          ++v43;
          v41 = *(_QWORD *)&v133[16];
        }
        while ( v42 != v43 );
      }
      *(_QWORD *)&v134 = 0;
      qfree(v41);
    }
    if ( v132 )
    {
      *(_QWORD *)v133 = 0;
      qfree(v132);
    }
    goto LABEL_10;
  }
  if ( !(unsigned __int8)get_tinfo_details() || v122.m128i_i32[0] < 0 )
  {
LABEL_143:
    if ( v127 )
    {
      *(_QWORD *)&v128 = 0;
      qfree(v127);
    }
    goto LABEL_42;
  }
  if ( sub_E3B70(v130.m128i_i64[1], v109, &v121, SDWORD1(v158), 0.0) )
    goto LABEL_79;
  copy_tinfo_t();
  sub_E9680(&v130, v5, 1, 0.0);
  if ( si128.m128i_i8[0] )
  {
    if ( (unsigned int)lexcompare_tinfo()
      && (unsigned __int8)get_tinfo_details()
      && v122.m128i_i32[0] >= 0
      && sub_E3B70(v130.m128i_i64[1], v109, &v121, SDWORD1(v158), 0.0) )
    {
      goto LABEL_78;
    }
    clear_tinfo_t();
    goto LABEL_143;
  }
  if ( *((_QWORD *)&v156 + 1) != -1 && (*(_BYTE *)(v5 + 6) & 0x10) == 0 )
  {
    if ( !under_debugger )
      sub_383060(0xCE2Du, 0.0);
    goto LABEL_161;
  }
LABEL_78:
  clear_tinfo_t();
LABEL_79:
  copy_tinfo_t();
  v47 = (__m128i *)&v112;
  if ( !tinfo_details )
    v47 = (__m128i *)&v121;
  v48 = sub_EDF20((__int64)&v130, a1, a2, v47, 0, 0.0);
  if ( (unsigned __int8)sub_EDF20((__int64)&v130, a3, a4, (__m128i *)&v121, v48, 0.0) == 1 && !(tinfo_details | v48) )
    sub_EDF20((__int64)&v130, a1, a2, (__m128i *)&v121, 1u, 0.0);
  if ( v127 )
  {
    *(_QWORD *)&v128 = 0;
    qfree(v127);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v49 = v121;
  if ( v121 )
  {
    v50 = v122.m128i_i64[0];
    v51 = 0;
    if ( v122.m128i_i64[0] )
    {
      do
      {
        v52 = (_QWORD *)(v49 + 80 * v51);
        clear_tinfo_t();
        v53 = v52[5];
        if ( v53 )
        {
          v52[6] = 0;
          qfree(v53);
        }
        v54 = v52[2];
        if ( v54 )
        {
          v52[3] = 0;
          qfree(v54);
        }
        ++v51;
        cleanup_argloc();
        v49 = v121;
      }
      while ( v50 != v51 );
    }
    v122.m128i_i64[0] = 0;
    qfree(v49);
  }
  clear_tinfo_t();
  if ( v151 )
  {
    *(_QWORD *)&v152 = 0;
    qfree(v151);
  }
  qfree(v149);
  qfree(v147);
  if ( v144 )
  {
    v145 = 0;
    qfree(v144);
  }
  if ( v142 )
  {
    v143 = 0;
    qfree(v142);
  }
  if ( v140 )
  {
    v141 = 0;
    qfree(v140);
  }
  if ( v138 )
  {
    v139 = 0;
    qfree(v138);
  }
  qfree(v135);
  v55 = *(_QWORD *)&v133[16];
  if ( *(_QWORD *)&v133[16] )
  {
    v56 = v134;
    v57 = 0;
    if ( (_QWORD)v134 )
    {
      do
      {
        v58 = (__int64 *)(v55 + 48 * v57);
        v59 = v58[3];
        if ( v59 )
        {
          v58[4] = 0;
          qfree(v59);
        }
        v60 = *v58;
        if ( *v58 )
        {
          v58[1] = 0;
          qfree(v60);
        }
        ++v57;
        v55 = *(_QWORD *)&v133[16];
      }
      while ( v56 != v57 );
    }
    *(_QWORD *)&v134 = 0;
    qfree(v55);
  }
  if ( v132 )
  {
    *(_QWORD *)v133 = 0;
    qfree(v132);
  }
  if ( v118 )
  {
    *(_QWORD *)&v119 = 0;
    qfree(v118);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v11 = v112;
  if ( v112 )
  {
    v61 = v113;
    v62 = 0;
    if ( (_QWORD)v113 )
    {
      do
      {
        v63 = (_QWORD *)(v11 + 80 * v62);
        clear_tinfo_t();
        v64 = v63[5];
        if ( v64 )
        {
          v63[6] = 0;
          qfree(v64);
        }
        v65 = v63[2];
        if ( v65 )
        {
          v63[3] = 0;
          qfree(v65);
        }
        ++v62;
        cleanup_argloc();
        v11 = v112;
      }
      while ( v61 != v62 );
    }
    goto LABEL_20;
  }
  return v162 - __readfsqword(0x28u);
}

