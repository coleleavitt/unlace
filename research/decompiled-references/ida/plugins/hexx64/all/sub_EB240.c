__int64 __fastcall sub_EB240(_QWORD *a1, __m128i *a2, unsigned __int64 a3, unsigned __int8 a4, _QWORD *a5)
{
  __int64 v6; // r13
  const char *v9; // rdx
  int v10; // r12d
  int v11; // eax
  const char *v13; // rdx
  int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  int v18; // ecx
  int v19; // r15d
  int v20; // eax
  unsigned __int64 v21; // rax
  int v22; // r14d
  int v23; // r15d
  int v24; // esi
  char v25; // al
  int v26; // edx
  __int64 v27; // rcx
  unsigned int v28; // edx
  int v29; // r12d
  char v30; // al
  __int64 v31; // r12
  unsigned int v32; // r8d
  int v33; // edx
  int v34; // eax
  char v35; // al
  int v36; // r8d
  int v37; // r9d
  __int64 v38; // rdi
  __int64 v39; // r12
  __int64 v40; // r15
  _QWORD *v41; // rbx
  __int64 v42; // rdi
  __int64 v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // rbx
  __int64 v46; // r14
  int v47; // eax
  char v48; // al
  unsigned int v49; // eax
  unsigned int v50; // eax
  __int64 v51; // rax
  __int64 v52; // r15
  __m128i v53; // xmm5
  __m128i v54; // xmm4
  __m128i v55; // xmm6
  __m128i v56; // xmm3
  __m128i v57; // xmm2
  __m128i v58; // xmm1
  __m128i v59; // xmm6
  __m128i v60; // xmm0
  __m128i v61; // xmm6
  __m128i v62; // xmm6
  __m128i v63; // xmm6
  unsigned __int64 v64; // r14
  double v65; // xmm0_8
  int v66; // eax
  int v67; // r15d
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  unsigned int *i; // r14
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  int v76; // r9d
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  int v80; // r9d
  unsigned int v81; // edx
  const char *v82; // rdx
  char v83; // al
  __int64 v84; // rdi
  char v85; // r14
  __int64 v86; // r13
  __int64 v87; // r12
  __int64 v88; // r14
  __int64 v89; // r12
  double v90; // xmm0_8
  int v91; // eax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rcx
  char *v96; // rax
  int v97; // [rsp+Ch] [rbp-314h]
  unsigned int v98; // [rsp+Ch] [rbp-314h]
  unsigned int v99; // [rsp+10h] [rbp-310h]
  int v100; // [rsp+10h] [rbp-310h]
  unsigned int v101; // [rsp+10h] [rbp-310h]
  unsigned int v102; // [rsp+10h] [rbp-310h]
  unsigned __int8 v103; // [rsp+33h] [rbp-2EDh]
  int v104; // [rsp+34h] [rbp-2ECh]
  char v105; // [rsp+38h] [rbp-2E8h]
  __int64 v107; // [rsp+48h] [rbp-2D8h]
  int tinfo_size; // [rsp+48h] [rbp-2D8h]
  __int64 v109; // [rsp+48h] [rbp-2D8h]
  __int64 v110; // [rsp+48h] [rbp-2D8h]
  __int64 v111; // [rsp+48h] [rbp-2D8h]
  __int64 v113; // [rsp+58h] [rbp-2C8h]
  int v114; // [rsp+60h] [rbp-2C0h]
  unsigned __int8 v115; // [rsp+67h] [rbp-2B9h]
  int v116; // [rsp+68h] [rbp-2B8h]
  unsigned __int64 v117; // [rsp+68h] [rbp-2B8h]
  int v118; // [rsp+68h] [rbp-2B8h]
  unsigned int *v119; // [rsp+68h] [rbp-2B8h]
  int v120; // [rsp+68h] [rbp-2B8h]
  int v121; // [rsp+78h] [rbp-2A8h] BYREF
  int v122; // [rsp+7Ch] [rbp-2A4h] BYREF
  char *v123; // [rsp+80h] [rbp-2A0h] BYREF
  __int128 v124; // [rsp+88h] [rbp-298h]
  const char *v125; // [rsp+A0h] [rbp-280h] BYREF
  __int128 v126; // [rsp+A8h] [rbp-278h]
  __int64 v127; // [rsp+C0h] [rbp-260h] BYREF
  __int128 v128; // [rsp+C8h] [rbp-258h]
  __int64 v129[2]; // [rsp+E0h] [rbp-240h] BYREF
  __int64 v130; // [rsp+F0h] [rbp-230h] BYREF
  __int128 v131; // [rsp+F8h] [rbp-228h]
  __int64 v132[2]; // [rsp+110h] [rbp-210h] BYREF
  __int64 v133; // [rsp+120h] [rbp-200h] BYREF
  __int128 v134; // [rsp+128h] [rbp-1F8h]
  _QWORD v135[2]; // [rsp+140h] [rbp-1E0h] BYREF
  __m128i si128; // [rsp+150h] [rbp-1D0h]
  __int64 v137; // [rsp+160h] [rbp-1C0h]
  __int128 v138; // [rsp+168h] [rbp-1B8h]
  __int64 v139; // [rsp+178h] [rbp-1A8h]
  __int64 v140; // [rsp+180h] [rbp-1A0h]
  int v141; // [rsp+188h] [rbp-198h]
  __m128i v142; // [rsp+190h] [rbp-190h] BYREF
  __m128i v143; // [rsp+1A0h] [rbp-180h] BYREF
  __m128i v144; // [rsp+1B0h] [rbp-170h] BYREF
  __m128i v145; // [rsp+1C0h] [rbp-160h] BYREF
  __m128i v146; // [rsp+1D0h] [rbp-150h] BYREF
  __m128i v147; // [rsp+1E0h] [rbp-140h] BYREF
  __int64 v148; // [rsp+1F0h] [rbp-130h] BYREF
  __int128 v149; // [rsp+1F8h] [rbp-128h] BYREF
  __int128 v150; // [rsp+208h] [rbp-118h]
  __int64 v151; // [rsp+218h] [rbp-108h]
  __int64 v152; // [rsp+248h] [rbp-D8h]
  __int64 v153; // [rsp+250h] [rbp-D0h]
  __int64 v154; // [rsp+260h] [rbp-C0h]
  __int64 v155; // [rsp+268h] [rbp-B8h]
  __m128i v156; // [rsp+280h] [rbp-A0h]
  __m128i v157; // [rsp+290h] [rbp-90h]
  __m128i v158; // [rsp+2A0h] [rbp-80h]
  __m128i v159; // [rsp+2B0h] [rbp-70h]
  __m128i v160; // [rsp+2C0h] [rbp-60h]
  __m128i v161; // [rsp+2D0h] [rbp-50h]
  unsigned __int64 v162; // [rsp+2E8h] [rbp-38h]

  v162 = __readfsqword(0x28u);
  v115 = *((_BYTE *)a1 + 365);
  if ( v115 )
    return 0;
  if ( *(_BYTE *)(a1[2] + 712LL) )
  {
    v6 = a1[39];
    if ( v6 == -1 )
      v6 = a1[40];
    v124 = 0;
    v123 = nullptr;
    sub_1D2AB0((__int64 *)&v123, v6, 0);
    v9 = s1;
    if ( (_QWORD)v124 )
      v9 = v123;
    v10 = sub_E7590((unsigned int *)&v122, &v121, v9, a1 + 6, *((_DWORD *)a1 + 87));
    if ( v10 )
    {
      v105 = 1;
    }
    else
    {
      if ( *(_BYTE *)(a1[2] + 712LL) == 1 )
      {
LABEL_20:
        if ( v123 )
        {
          *(_QWORD *)&v124 = 0;
          qfree((__int64)v123);
        }
        return v115;
      }
      v11 = *((_DWORD *)a1 + 87);
      v105 = 0;
      v122 = 0;
      v121 = v11 - 1;
    }
    v135[1] = 0;
    v135[0] = 0xFFFFFFFF00000000LL;
    si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    v137 = 0;
    v139 = 0;
    v140 = 0;
    v141 = 0;
    v138 = 0;
    if ( !a5 )
    {
      a5 = v135;
      if ( !(unsigned __int8)sub_E5020(
                               (__int64)v135,
                               *a1,
                               a2->m128i_i64[0] + 80LL * v121,
                               a1[41],
                               *((_DWORD *)a1 + 90),
                               0,
                               0.0) )
      {
        v115 = 0;
LABEL_17:
        cleanup_argloc();
        if ( v137 )
        {
          *(_QWORD *)&v138 = 0;
          qfree(v137);
        }
        clear_tinfo_t();
        sub_11CDA0((__int64)v135);
        goto LABEL_20;
      }
    }
    v125 = nullptr;
    v126 = 0;
    if ( (unsigned int)sub_E8020(a1, (__int64 *)&v125, a3, (__int64)a5, v105 & 1) != 1 )
    {
LABEL_15:
      if ( v125 )
      {
        *(_QWORD *)&v126 = 0;
        qfree((__int64)v125);
      }
      goto LABEL_17;
    }
    v127 = 0;
    v13 = s1;
    v14 = v122;
    v128 = 0;
    if ( (_QWORD)v126 )
      v13 = v125;
    v103 = sub_E4160(a1[2], &v127, v13, v122);
    if ( !v103 )
      goto LABEL_91;
    v17 = a1[2];
    v114 = *(_DWORD *)(*(_QWORD *)(v17 + 112) + 80LL);
    if ( a4 | ((_QWORD)v128 != 0) )
    {
      if ( !(v10 | v14) && v6 == -1 )
      {
        v82 = s1;
        if ( (_QWORD)v126 )
          v82 = v125;
        v148 = 0;
        v149 = 0;
        v83 = sub_E4160(v17, &v148, v82, 1);
        v84 = v148;
        v85 = v83;
        if ( v148 )
        {
          v86 = v149;
          if ( (_QWORD)v149 )
          {
            v87 = 0;
            do
            {
              ++v87;
              clear_tinfo_t();
              v84 = v148;
            }
            while ( v86 != v87 );
          }
          *(_QWORD *)&v149 = 0;
          qfree(v84);
        }
        if ( v85 )
        {
          v88 = v127;
          v89 = v127 + 8 * v128;
          if ( v127 != v89 )
          {
            while ( (get_tinfo_property() & 0xF) != 9 && v114 >= (unsigned __int64)get_tinfo_size() )
            {
              v88 += 8;
              if ( v89 == v88 )
                goto LABEL_28;
            }
            goto LABEL_91;
          }
        }
      }
LABEL_28:
      sub_E8500((__int64)&v142, (__int64)a2, v15, v16);
      if ( a4 )
        copy_tinfo_t();
    }
    else
    {
      if ( (v10 & 0xFFFFFEFF) == 0 )
        goto LABEL_197;
      if ( v10 == 512 )
      {
        if ( v14 )
          goto LABEL_197;
        v96 = &byte_4EEA70;
        if ( (_QWORD)v124 )
          v96 = v123;
        if ( *v96 == 115 )
        {
LABEL_197:
          v44 = v127;
          v115 = 0;
          if ( !v127 )
            goto LABEL_15;
LABEL_95:
          *(_QWORD *)&v128 = 0;
          qfree(v44);
          goto LABEL_15;
        }
      }
      sub_E8500((__int64)&v142, (__int64)a2, v15, v16);
    }
    sub_EABB0(v142.m128i_i64, v128 + *((int *)a1 + 87));
    v18 = 0;
    if ( (_QWORD)v128 )
    {
      do
      {
        v19 = v18;
        copy_tinfo_t();
        v18 = v19 + 1;
      }
      while ( v19 + 1 < (unsigned __int64)v128 );
    }
    v20 = v147.m128i_i8[8] & 0xF0;
    if ( (v147.m128i_i8[8] & 0xF0) == 0xC0 )
      v20 = v143.m128i_i32[3];
    if ( (unsigned int)(v20 - 208) <= 0x2F || !(unsigned __int8)calc_varglocs() )
    {
      if ( !(unsigned __int8)getinf_flag() )
      {
        v81 = v147.m128i_i8[8] & 0xF0;
        if ( (v147.m128i_i8[8] & 0xF0) == 0xC0 )
          v81 = v143.m128i_u32[3];
        sub_D10B0((__int64)&v148, a1[2], v81);
        if ( (_DWORD)v148 )
        {
          if ( v154 )
          {
            v155 = 0;
            qfree(v154);
          }
          if ( v152 )
          {
            v153 = 0;
            qfree(v152);
          }
          if ( *((_QWORD *)&v150 + 1) )
          {
            v151 = 0;
            qfree(*((__int64 *)&v150 + 1));
          }
          if ( (_QWORD)v149 )
          {
            *((_QWORD *)&v149 + 1) = 0;
            qfree(v149);
          }
LABEL_80:
          if ( v146.m128i_i64[0] )
          {
            v146.m128i_i64[1] = 0;
            qfree(v146.m128i_i64[0]);
          }
          cleanup_argloc();
          clear_tinfo_t();
          v38 = v142.m128i_i64[0];
          if ( v142.m128i_i64[0] )
          {
            v39 = v142.m128i_i64[1];
            if ( v142.m128i_i64[1] )
            {
              v40 = 0;
              do
              {
                v41 = (_QWORD *)(v38 + 80 * v40);
                clear_tinfo_t();
                v42 = v41[5];
                if ( v42 )
                {
                  v41[6] = 0;
                  qfree(v42);
                }
                v43 = v41[2];
                if ( v43 )
                {
                  v41[3] = 0;
                  qfree(v43);
                }
                cleanup_argloc();
                v38 = v142.m128i_i64[0];
                ++v40;
              }
              while ( v39 != v40 );
            }
            v142.m128i_i64[1] = 0;
            qfree(v38);
          }
LABEL_91:
          v44 = v127;
          if ( !v127 )
            goto LABEL_15;
          if ( (_QWORD)v128 )
          {
            v45 = 0;
            v46 = v128;
            do
            {
              ++v45;
              clear_tinfo_t();
              v44 = v127;
            }
            while ( v46 != v45 );
          }
          goto LABEL_95;
        }
        if ( v154 )
        {
          v155 = 0;
          qfree(v154);
        }
        if ( v152 )
        {
          v153 = 0;
          qfree(v152);
        }
        if ( *((_QWORD *)&v150 + 1) )
        {
          v151 = 0;
          qfree(*((__int64 *)&v150 + 1));
        }
        if ( (_QWORD)v149 )
        {
          *((_QWORD *)&v149 + 1) = 0;
          qfree(v149);
        }
      }
      v113 = v145.m128i_i64[1];
      v21 = *((int *)a1 + 87);
      v22 = *((_DWORD *)a1 + 87);
      if ( v21 < v142.m128i_i64[1] )
      {
        v23 = 2 * v114;
        v24 = v114;
        if ( v114 > 2 * v114 )
          v24 = 2 * v114;
        while ( 1 )
        {
          v31 = v142.m128i_i64[0] + 80 * v21;
          tinfo_size = get_tinfo_size();
          v32 = *((_DWORD *)a1 + 90);
          v33 = v148 - 1;
          v116 = v148;
          if ( (((_DWORD)v148 - 1) & (unsigned int)v148) != 0 )
            sub_E3A00();
          if ( (int)v148 <= v23 )
            break;
          if ( v32 <= 0x10 )
          {
            v97 = v148 - 1;
            v99 = *((_DWORD *)a1 + 90);
            v34 = getinf();
            if ( v34 == 176 || v34 == 256 )
            {
              if ( v114 > v23 )
              {
LABEL_123:
                v116 = 2 * v114;
LABEL_124:
                v32 = getinf();
LABEL_43:
                if ( v32 == 176 || v32 == 256 )
                {
                  v26 = v116 - 1;
                  goto LABEL_47;
                }
                goto LABEL_45;
              }
              goto LABEL_126;
            }
            v32 = v99;
            v33 = v97;
          }
          else if ( v32 == 176 || v32 == 256 )
          {
            v116 = v24;
            v26 = v24 - 1;
            goto LABEL_47;
          }
          v100 = v33;
          v98 = v32;
          v35 = getinf_flag();
          v26 = v100;
          if ( v35 )
            goto LABEL_47;
          if ( v114 <= v23 )
          {
            if ( v98 > 0x10 )
            {
              v116 = 2 * v114;
              goto LABEL_45;
            }
LABEL_126:
            v116 = 2 * v114;
LABEL_127:
            v32 = getinf();
LABEL_108:
            if ( v32 == 176 || v32 == 256 )
            {
              v26 = v114 - 1;
              v116 = v114;
              goto LABEL_47;
            }
            goto LABEL_45;
          }
          if ( v98 <= 0x10 )
            goto LABEL_123;
          v116 = 2 * v114;
LABEL_45:
          v25 = getinf_flag();
          v26 = v116 - 1;
          if ( !v25 )
          {
            v116 = v114;
            v26 = v114 - 1;
          }
LABEL_47:
          v117 = -v116 & (unsigned __int64)(v113 + v26);
          cleanup_argloc();
          *(_DWORD *)v31 = 1;
          v27 = tinfo_size;
          *(_QWORD *)(v31 + 8) = v117;
          v28 = *((_DWORD *)a1 + 90);
          v29 = v148 - 1;
          v118 = v148;
          if ( (((_DWORD)v148 - 1) & (unsigned int)v148) != 0 )
            sub_E3A00();
          if ( (int)v148 > v23 )
          {
            if ( v28 <= 0x10 )
            {
              v101 = *((_DWORD *)a1 + 90);
              v47 = getinf();
              v27 = tinfo_size;
              if ( v47 != 176 && v47 != 256 )
              {
                v28 = v101;
                goto LABEL_103;
              }
              if ( v114 > v23 )
                goto LABEL_121;
            }
            else
            {
              if ( v28 == 256 || v28 == 176 )
              {
                v118 = v24;
                v29 = v24 - 1;
                goto LABEL_55;
              }
LABEL_103:
              v109 = v27;
              v102 = v28;
              v48 = getinf_flag();
              v27 = v109;
              if ( v48 )
                goto LABEL_55;
              if ( v114 > v23 )
              {
                if ( v102 > 0x10 )
                {
                  v118 = 2 * v114;
                  goto LABEL_53;
                }
LABEL_121:
                v118 = 2 * v114;
LABEL_122:
                v110 = v27;
                v49 = getinf();
                v27 = v110;
                v28 = v49;
LABEL_51:
                if ( v28 != 176 && v28 != 256 )
                  goto LABEL_53;
                v29 = v118 - 1;
                goto LABEL_55;
              }
              if ( v102 > 0x10 )
              {
                v118 = 2 * v114;
LABEL_53:
                v107 = v27;
                v30 = getinf_flag();
                v29 = v118 - 1;
                v27 = v107;
                if ( !v30 )
                {
                  v118 = v114;
                  v29 = v114 - 1;
                }
                goto LABEL_55;
              }
            }
            v118 = 2 * v114;
LABEL_130:
            v111 = v27;
            v50 = getinf();
            v27 = v111;
            v28 = v50;
            goto LABEL_112;
          }
          if ( (int)v148 < v114 )
          {
            if ( v28 <= 0x10 )
              goto LABEL_122;
            goto LABEL_51;
          }
          if ( v28 <= 0x10 )
            goto LABEL_130;
LABEL_112:
          if ( v28 != 176 && v28 != 256 )
            goto LABEL_53;
          v29 = v114 - 1;
          v118 = v114;
LABEL_55:
          ++v22;
          v113 += -v118 & (unsigned __int64)(v27 + v29);
          v21 = v22;
          if ( (unsigned __int64)v22 >= v142.m128i_i64[1] )
            goto LABEL_131;
        }
        if ( (int)v148 < v114 )
        {
          if ( v32 <= 0x10 )
            goto LABEL_124;
          goto LABEL_43;
        }
        if ( v32 <= 0x10 )
          goto LABEL_127;
        goto LABEL_108;
      }
LABEL_131:
      v145.m128i_i64[1] = v113;
    }
    if ( v105 || (v104 = *((_DWORD *)a1 + 87), v51 = v104, (unsigned __int64)v104 >= v142.m128i_i64[1]) )
    {
LABEL_136:
      v53 = _mm_loadu_si128(a2);
      *a2 = _mm_load_si128(&v142);
      v54 = _mm_loadu_si128(a2 + 1);
      v55 = _mm_load_si128(&v143);
      v56 = _mm_loadu_si128(a2 + 2);
      v57 = _mm_loadu_si128(a2 + 3);
      v58 = _mm_loadu_si128(a2 + 4);
      v156 = v53;
      a2[1] = v55;
      v59 = _mm_load_si128(&v144);
      v60 = _mm_loadu_si128(a2 + 5);
      v157 = v54;
      a2[2] = v59;
      v61 = _mm_load_si128(&v145);
      v158 = v56;
      a2[3] = v61;
      v62 = _mm_load_si128(&v146);
      v159 = v57;
      a2[4] = v62;
      v63 = _mm_load_si128(&v147);
      v160 = v58;
      a2[5] = v63;
      v161 = v60;
      v142 = v53;
      v143 = v54;
      v144 = v56;
      v145 = v57;
      v146 = v58;
      v147 = v60;
      *((_DWORD *)a1 + 88) |= 0x100u;
      v115 = v103;
    }
    else
    {
      while ( 1 )
      {
        v52 = v142.m128i_i64[0] + 80 * v51;
        if ( (unsigned int)(*(_DWORD *)v52 - 3) <= 1 )
          break;
LABEL_135:
        v51 = ++v104;
        if ( (unsigned __int64)v104 >= v142.m128i_i64[1] )
          goto LABEL_136;
      }
      v64 = get_tinfo_size();
      v129[0] = 0;
      v129[1] = 0;
      v130 = 0;
      v132[0] = 0;
      v132[1] = 0;
      v133 = 0;
      v131 = 0;
      v134 = 0;
      if ( *(_DWORD *)v52 == 4 )
      {
        v64 >>= 1;
        v90 = (*(double (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[2] + 112LL) + 168LL))(
                *(_QWORD *)(a1[2] + 112LL),
                *(unsigned __int16 *)(v52 + 10));
        v120 = v91;
        v148 = 0;
        *(_QWORD *)&v149 = 0;
        sub_63E80(&v148, v91, v64, v90);
        *((_QWORD *)&v149 + 1) = 0;
        v150 = 0;
        sub_64280(v129, &v148, 0.0);
        sub_316CB0(&v130, (__int64 **)&v149 + 1, v92, v93);
        if ( *((_QWORD *)&v149 + 1) )
        {
          *(_QWORD *)&v150 = 0;
          qfree(*((__int64 *)&v149 + 1));
        }
        qfree(v148);
        v148 = 0;
        *(_QWORD *)&v149 = 0;
        sub_63E80(&v148, v120, v114, 0.0);
        *((_QWORD *)&v149 + 1) = 0;
        v150 = 0;
        sub_64280(v132, &v148, 0.0);
        sub_316CB0(&v133, (__int64 **)&v149 + 1, v94, v95);
        if ( *((_QWORD *)&v149 + 1) )
        {
          *(_QWORD *)&v150 = 0;
          qfree(*((__int64 *)&v149 + 1));
        }
        qfree(v148);
      }
      v65 = (*(double (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[2] + 112LL) + 168LL))(
              *(_QWORD *)(a1[2] + 112LL),
              *(unsigned __int16 *)(v52 + 8));
      v67 = v66;
      v148 = 0;
      *(_QWORD *)&v149 = 0;
      sub_63E80(&v148, v66, v64, v65);
      *((_QWORD *)&v149 + 1) = 0;
      v150 = 0;
      sub_64280(v129, &v148, v65);
      sub_316CB0(&v130, (__int64 **)&v149 + 1, v68, v69);
      if ( *((_QWORD *)&v149 + 1) )
      {
        *(_QWORD *)&v150 = 0;
        qfree(*((__int64 *)&v149 + 1));
      }
      qfree(v148);
      v148 = 0;
      *(_QWORD *)&v149 = 0;
      sub_63E80(&v148, v67, (v114 - 1 + v64) & -v114, v65);
      *((_QWORD *)&v149 + 1) = 0;
      v150 = 0;
      sub_64280(v132, &v148, v65);
      sub_316CB0(&v133, (__int64 **)&v149 + 1, v70, v71);
      if ( *((_QWORD *)&v149 + 1) )
      {
        *(_QWORD *)&v150 = 0;
        qfree(*((__int64 *)&v149 + 1));
      }
      qfree(v148);
      for ( i = (unsigned int *)a3; ; i = v119 )
      {
        if ( (unsigned __int8)sub_64880(v129) && !(_QWORD)v131 )
          goto LABEL_145;
        v119 = (unsigned int *)sub_129150(*a1, v129, *((_QWORD *)i + 2), 0, 0, 0, 0x101u);
        if ( !v119 )
          break;
        if ( !sub_11E8A0(*v119) )
          goto LABEL_75;
        sub_127A20((__int64)&v148, *a1, (__int64)v119, 1, v36, v37);
        if ( !(unsigned __int8)sub_64820(&v148, v132) || !(unsigned __int8)sub_317F40(&v133, (__int64)&v149 + 8) )
        {
          if ( *((_QWORD *)&v149 + 1) )
          {
            *(_QWORD *)&v150 = 0;
            qfree(*((__int64 *)&v149 + 1));
          }
          qfree(v148);
          goto LABEL_75;
        }
        sub_64640(v129, &v148, v73, v74, v75, v76);
        sub_317C60(&v130, (__int64)&v149 + 8);
        sub_64640(v132, &v148, v77, v78, v79, v80);
        sub_317C60(&v133, (__int64)&v149 + 8);
        if ( *((_QWORD *)&v149 + 1) )
        {
          *(_QWORD *)&v150 = 0;
          qfree(*((__int64 *)&v149 + 1));
        }
        qfree(v148);
      }
      if ( i == (unsigned int *)a3 )
      {
LABEL_145:
        if ( v133 )
        {
          *(_QWORD *)&v134 = 0;
          qfree(v133);
        }
        qfree(v132[0]);
        if ( v130 )
        {
          *(_QWORD *)&v131 = 0;
          qfree(v130);
        }
        qfree(v129[0]);
        goto LABEL_135;
      }
LABEL_75:
      if ( v133 )
      {
        *(_QWORD *)&v134 = 0;
        qfree(v133);
      }
      qfree(v132[0]);
      if ( v130 )
      {
        *(_QWORD *)&v131 = 0;
        qfree(v130);
      }
      qfree(v129[0]);
    }
    goto LABEL_80;
  }
  return v115;
}

