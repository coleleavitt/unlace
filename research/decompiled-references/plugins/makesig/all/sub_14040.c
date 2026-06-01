unsigned __int64 __fastcall sub_14040(size_t a1, __int64 *a2)
{
  char **v2; // rbp
  bool v3; // zf
  char *v4; // r13
  char *v5; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbp
  int v10; // r15d
  int v11; // r8d
  unsigned __int64 v12; // r10
  __int64 v13; // r12
  size_t v14; // r8
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rsi
  unsigned __int64 v20; // rcx
  int v21; // ebx
  __int64 i; // rax
  char *v23; // rdi
  int v24; // eax
  __int64 v25; // rdx
  size_t v26; // rbx
  __int64 v27; // r14
  __int64 v28; // rcx
  __int64 v29; // rdi
  _QWORD *v30; // r13
  __int64 v31; // rsi
  __int64 v32; // r12
  __int64 *v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // r14
  __int64 j; // rbp
  __int64 *v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // rdi
  _BYTE *v42; // rsi
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdi
  int v45; // edx
  __int64 v46; // rax
  char v47; // cl
  size_t v48; // r8
  __int64 v49; // rsi
  __int64 v50; // rbx
  char *v51; // r12
  __int64 v52; // rdx
  unsigned __int64 v53; // rax
  __int64 *v54; // r15
  unsigned int *v55; // rbx
  unsigned int *v56; // rdi
  int v57; // ebx
  __int128 v58; // rax
  char *v59; // rsi
  unsigned __int64 v60; // r8
  int v61; // r12d
  unsigned __int64 v62; // rdi
  int v63; // edx
  __int64 v64; // rsi
  __int64 v65; // rax
  __int64 v66; // rdi
  __int64 v67; // rax
  __int64 v68; // r15
  int v69; // r13d
  char *v70; // rcx
  char *v71; // r12
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rdi
  _BYTE *v75; // rdi
  __int64 v76; // rax
  int v77; // r11d
  __int64 v78; // rsi
  unsigned __int64 v79; // rax
  __int64 v80; // rdx
  int v81; // r8d
  __int64 v82; // rax
  __int64 v83; // rsi
  int v84; // r10d
  __int64 v85; // rax
  __int64 v86; // r8
  __int64 v87; // r8
  __int64 v88; // rdi
  __int64 v89; // rbx
  __int64 v90; // rax
  char *v91; // r12
  char *v92; // r15
  const char *v93; // r13
  size_t v94; // rax
  size_t v95; // r8
  void *v96; // rdi
  size_t v97; // rdx
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rdx
  _BYTE *v102; // rax
  int v103; // ebx
  __int64 v104; // rdx
  int v105; // esi
  __int64 v106; // r12
  __int64 v107; // r13
  __int64 v108; // r15
  __int64 v109; // rax
  unsigned __int64 v110; // r14
  __int64 v111; // r9
  __int64 v112; // r15
  __int64 v113; // rax
  _QWORD *v114; // r8
  __int64 v115; // rsi
  __int64 v116; // r9
  __int64 v117; // r10
  _BYTE *v118; // rax
  _BYTE *v119; // rdx
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rax
  __int64 v123; // rcx
  __int64 v124; // r13
  __int64 v125; // rax
  __int64 v126; // rax
  const char *v127; // rdx
  __int64 v128; // rax
  __int64 v129; // r8
  __int64 v130; // rsi
  const __m128i *v131; // rdi
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // rcx
  __m128i v135; // xmm0
  __int64 v137; // rax
  void *v138; // rdi
  __int64 v139; // rax
  int v140; // [rsp+0h] [rbp-C8h]
  size_t n; // [rsp+8h] [rbp-C0h]
  size_t na; // [rsp+8h] [rbp-C0h]
  size_t nb; // [rsp+8h] [rbp-C0h]
  size_t nc; // [rsp+8h] [rbp-C0h]
  size_t nd; // [rsp+8h] [rbp-C0h]
  int src; // [rsp+10h] [rbp-B8h]
  void *srca; // [rsp+10h] [rbp-B8h]
  char *srcb; // [rsp+10h] [rbp-B8h]
  void *srcc; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v150; // [rsp+18h] [rbp-B0h]
  char **v151; // [rsp+18h] [rbp-B0h]
  __int64 v152; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v153; // [rsp+18h] [rbp-B0h]
  int v154; // [rsp+20h] [rbp-A8h]
  int v155; // [rsp+20h] [rbp-A8h]
  __int64 v156; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v157; // [rsp+20h] [rbp-A8h]
  int v158; // [rsp+20h] [rbp-A8h]
  size_t v159; // [rsp+20h] [rbp-A8h]
  size_t v160; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v161; // [rsp+20h] [rbp-A8h]
  _QWORD *v162; // [rsp+20h] [rbp-A8h]
  _QWORD *v163; // [rsp+20h] [rbp-A8h]
  __int64 v164; // [rsp+20h] [rbp-A8h]
  __int64 v165; // [rsp+20h] [rbp-A8h]
  int v166; // [rsp+28h] [rbp-A0h]
  int v167; // [rsp+28h] [rbp-A0h]
  size_t v168; // [rsp+28h] [rbp-A0h]
  int v169; // [rsp+28h] [rbp-A0h]
  __int64 v170; // [rsp+28h] [rbp-A0h]
  __int64 v171; // [rsp+28h] [rbp-A0h]
  int v172; // [rsp+30h] [rbp-98h]
  int v173; // [rsp+38h] [rbp-90h]
  __int64 v174; // [rsp+38h] [rbp-90h]
  int v175; // [rsp+40h] [rbp-88h]
  __int64 v176; // [rsp+48h] [rbp-80h] BYREF
  void *dest; // [rsp+50h] [rbp-78h] BYREF
  __int128 v178; // [rsp+58h] [rbp-70h]
  __int64 v179; // [rsp+68h] [rbp-60h]
  __int64 v180; // [rsp+70h] [rbp-58h] BYREF
  __int128 v181; // [rsp+78h] [rbp-50h]
  unsigned __int64 v182; // [rsp+88h] [rbp-40h]

  v2 = *(char ***)(a1 + 8);
  v3 = *(_BYTE *)a1 == 0;
  n = a1;
  v4 = *v2;
  v5 = v2[1];
  v182 = __readfsqword(0x28u);
  if ( v3 )
  {
    v7 = a2[1];
    if ( !v5 )
      return v182 - __readfsqword(0x28u);
    v8 = (int)v7;
    src = a2[1];
    v10 = 0;
    v154 = src;
    if ( v7 < (int)v7 )
      goto LABEL_12;
    do
    {
      if ( v8 != v7 )
        goto LABEL_5;
      v11 = v154;
      v12 = (int)v8;
LABEL_6:
      v13 = *((_QWORD *)v4 + 3);
      v14 = (int)v13 + v11;
      if ( v8 < v14 )
      {
        v42 = (_BYTE *)*a2;
        v43 = v8;
        if ( a2[2] < v14 )
        {
          v153 = v12;
          nc = v14;
          v100 = qvector_reserve(a2, v42, v14, 2);
          v12 = v153;
          v14 = nc;
          *a2 = v100;
          v42 = (_BYTE *)v100;
          v43 = a2[1];
        }
        v150 = v12;
        n = v14;
        memset(&v42[2 * v43], 0, 2 * (v14 - v43));
        v12 = v150;
        a2[1] = n;
      }
      else if ( v14 != v8 )
      {
        a2[1] = v14;
      }
      memcpy((void *)(*a2 + 2 * v12), *((const void **)v4 + 2), 2LL * (int)v13);
      sub_14040(
        (_DWORD)v4,
        (_DWORD)a2,
        v15,
        v16,
        v17,
        v18,
        v140,
        n,
        src,
        v150,
        v154,
        v166,
        v172,
        v173,
        v175,
        v176,
        (__int64)dest,
        v178,
        DWORD2(v178),
        v179,
        v180,
        v181,
        *((__int64 *)&v181 + 1));
      if ( *v4 )
      {
        v44 = *((_QWORD *)v4 + 3);
        v45 = v44;
        v46 = 2LL * ((int)v44 - 1);
        while ( v45 > 1 )
        {
          v47 = *(_BYTE *)(*((_QWORD *)v4 + 2) + v46);
          v46 -= 2;
          if ( v47 )
            break;
          --v45;
        }
        v48 = v45;
        if ( v44 < v45 )
        {
          v49 = *((_QWORD *)v4 + 2);
          if ( *((_QWORD *)v4 + 4) < (unsigned __int64)v45 )
          {
            nd = v45;
            v137 = qvector_reserve(v4 + 16, v49, v45, 2);
            v44 = *((_QWORD *)v4 + 3);
            v48 = nd;
            *((_QWORD *)v4 + 2) = v137;
            v49 = v137;
          }
          n = v48;
          memset((void *)(v49 + 2 * v44), 0, 2 * (v48 - v44));
          *((_QWORD *)v4 + 3) = n;
        }
        else if ( v45 != v44 )
        {
          *((_QWORD *)v4 + 3) = v45;
        }
      }
      ++v10;
      v4 += 40;
      if ( (unsigned __int64)v10 >= *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) )
        return v182 - __readfsqword(0x28u);
      v7 = a2[1];
    }
    while ( v7 >= v8 );
LABEL_12:
    v19 = *a2;
    if ( a2[2] < v8 )
    {
      v99 = qvector_reserve(a2, v19, v8, 2);
      *a2 = v99;
      v19 = v99;
      v7 = a2[1];
    }
    memset((void *)(v19 + 2 * v7), 0, 2 * (v8 - v7));
LABEL_5:
    a2[1] = v8;
    v11 = src;
    v12 = v8;
    goto LABEL_6;
  }
  v50 = 4LL * (_QWORD)v5;
  v51 = &v4[4 * (_QWORD)v5];
  if ( v51 != v4 )
  {
    v52 = -2;
    if ( v50 >> 2 )
    {
      _BitScanReverse64(&v53, v50 >> 2);
      v52 = 2LL * (int)v53;
    }
    v54 = (__int64 *)v2[3];
    sub_13D10((unsigned int *)v4, v51, v52, v54);
    if ( v50 <= 64 )
    {
      sub_13A40((unsigned int *)v4, (unsigned int *)v51, v54);
    }
    else
    {
      v55 = (unsigned int *)(v4 + 64);
      sub_13A40((unsigned int *)v4, (unsigned int *)v4 + 16, v54);
      do
      {
        v56 = v55++;
        sub_139D0(v56, v54);
      }
      while ( v51 != (char *)v55 );
    }
  }
  dest = nullptr;
  v178 = 0;
  v181 = 0;
  v20 = (unsigned __int64)v2[1];
  v180 = 0;
  if ( !v20 )
  {
    if ( !byte_204E0 )
      goto LABEL_47;
    v101 = a2[1];
    v102 = (_BYTE *)*a2;
    if ( (int)v101 <= 0 )
      goto LABEL_17;
    goto LABEL_128;
  }
  v57 = 1;
  v58 = 0u;
  v59 = nullptr;
  v60 = 0;
  while ( 1 )
  {
    v61 = v57 - 1;
    v62 = v58 + 1;
    HIDWORD(v176) = v57 - 1;
    if ( (char *)&v176 + 4 < v59 || (char *)&v176 + 4 >= &v59[4 * *((_QWORD *)&v58 + 1)] )
    {
      if ( *((_QWORD *)&v58 + 1) < v62 )
      {
        v157 = v60;
        dest = (void *)qvector_reserve(&dest, v59, v58 + 1, 4);
        v59 = (char *)dest;
        v61 = HIDWORD(v176);
        *(_QWORD *)&v58 = v178;
        v60 = v157;
      }
    }
    else if ( *((_QWORD *)&v58 + 1) < v62 )
    {
      v161 = v60;
      dest = (void *)qvector_reserve(&dest, v59, v62, 4);
      v59 = (char *)dest;
      v60 = v161;
      *(_QWORD *)&v58 = v178;
    }
    *(_DWORD *)&v59[4 * v58] = v61;
    v63 = v178 + 1;
    *(_QWORD *)&v178 = v178 + 1;
    v20 = (unsigned __int64)v2[1];
    if ( v60 >= v20 - 1 )
      break;
    v64 = *(unsigned int *)&(*v2)[4 * v60];
    v65 = *(_QWORD *)v2[3];
    v60 = v57;
    v66 = v65 + 208 * v64;
    v67 = 208LL * *(unsigned int *)&(*v2)[4 * v57] + v65;
    if ( *(_WORD *)(v66 + 96) != *(_WORD *)(v67 + 96) || *(_BYTE *)(v66 + 188) != *(_BYTE *)(v67 + 188) )
      break;
    ++v57;
    if ( v60 >= v20 )
      goto LABEL_111;
LABEL_103:
    v59 = (char *)dest;
    v58 = v178;
  }
  if ( v63 > 1 )
  {
    if ( v63 > 0x10000 )
      sub_E890((__int64)"too many leaves (%d)", v63);
    v68 = *(_QWORD *)(n + 8);
    if ( !(unsigned __int8)sub_A740(v68, (__int64 *)&dest) )
    {
      v69 = dword_21854;
      if ( dword_21854 )
        goto LABEL_93;
      v70 = (char *)dest;
      v71 = (char *)dest;
      do
      {
        v72 = *(int *)v71;
        v73 = **(_QWORD **)(v68 + 24) + 208LL * *(unsigned int *)(*(_QWORD *)v68 + 4 * v72);
        v74 = *(_QWORD *)(v73 + 8);
        if ( *(_QWORD *)(v74 + 8) && (v75 = *(_BYTE **)v74, *v75 == 63) && !v75[1] )
        {
          v76 = v181;
          v77 = *(_DWORD *)(*(_QWORD *)v68 + 4LL * (unsigned int)v72);
          v78 = v180;
          if ( *((_QWORD *)&v181 + 1) < (unsigned __int64)(v181 + 1) )
          {
            v158 = *(_DWORD *)(*(_QWORD *)v68 + 4LL * (unsigned int)v72);
            v180 = qvector_reserve(&v180, v180, v181 + 1, 4);
            v78 = v180;
            v77 = v158;
            v76 = v181;
          }
          *(_DWORD *)(v78 + 4 * v76) = v77;
          ++v69;
          *(_QWORD *)&v181 = v181 + 1;
          memmove(v71, v71 + 4, (_BYTE *)dest + 4 * v178 - v71 - 4);
          v70 = (char *)dest;
          v79 = v178 - 1;
          *(_QWORD *)&v178 = v178 - 1;
        }
        else
        {
          v88 = *(_QWORD *)(v73 + 32);
          *(_QWORD *)(v73 + 112) = 0;
          if ( v88 )
          {
            *(_QWORD *)(v73 + 40) = 0;
            v156 = v73;
            qfree(v88);
            v73 = v156;
            v70 = (char *)dest;
            *(_QWORD *)(v156 + 32) = 0;
            *(_QWORD *)(v156 + 48) = 0;
          }
          *(_DWORD *)(v73 + 56) = 0;
          v71 += 4;
          v79 = v178;
        }
      }
      while ( v71 != &v70[4 * v79] && v79 > 1 );
      HIDWORD(qword_218C0) += v69;
      if ( !v69 || !(unsigned __int8)sub_A740(v68, (__int64 *)&dest) )
      {
LABEL_93:
        if ( byte_21851 )
        {
          if ( (unsigned __int64)v178 > 1 )
          {
            v80 = v181;
            v81 = 1;
            v82 = 1;
            do
            {
              v83 = v180;
              v84 = *(_DWORD *)(*(_QWORD *)v68 + 4LL * *((unsigned int *)dest + v82));
              if ( *((_QWORD *)&v181 + 1) < (unsigned __int64)(v80 + 1) )
              {
                v167 = *(_DWORD *)(*(_QWORD *)v68 + 4LL * *((unsigned int *)dest + v82));
                v155 = v81;
                v180 = qvector_reserve(&v180, v180, v80 + 1, 4);
                v80 = v181;
                v83 = v180;
                v84 = v167;
                v81 = v155;
              }
              *(_DWORD *)(v83 + 4 * v80) = v84;
              ++v81;
              v80 = v181 + 1;
              v82 = v81;
              *(_QWORD *)&v181 = v181 + 1;
            }
            while ( v81 < (unsigned __int64)v178 );
          }
        }
        else
        {
          sub_E9C0((__int64 *)v68, &dest, a2);
          if ( dword_2185C > 0 )
          {
            __printf_chk(1, "COLLISION:\n");
            if ( (int)v178 > 0 )
            {
              v123 = 0;
              v124 = 4LL * (unsigned int)(v178 - 1) + 4;
              do
              {
                v125 = **(_QWORD **)(v68 + 24)
                     + 208LL * *(unsigned int *)(*(_QWORD *)v68 + 4LL * *(int *)((char *)dest + v123));
                if ( (*(_BYTE *)(v125 + 200) & 1) != 0 )
                {
                  v126 = *(_QWORD *)(v125 + 8);
                  v127 = s1;
                  if ( *(_QWORD *)(v126 + 8) )
                    v127 = *(const char **)v126;
                  v164 = v123;
                  __printf_chk(1, "\t%s\n", v127);
                  v123 = v164;
                }
                v123 += 4;
              }
              while ( v124 != v123 );
            }
          }
          v85 = xmmword_218D0;
          v86 = qword_218C8;
          if ( *((_QWORD *)&xmmword_218D0 + 1) < (unsigned __int64)(xmmword_218D0 + 1) )
          {
            v165 = *((_QWORD *)&xmmword_218D0 + 1);
            v128 = qvector_reserve(&qword_218C8, 0, xmmword_218D0 + 1, 32);
            v129 = v128;
            v130 = *((_QWORD *)&xmmword_218D0 + 1);
            v131 = (const __m128i *)qword_218C8;
            *((_QWORD *)&xmmword_218D0 + 1) = v165;
            v132 = xmmword_218D0 - 1;
            if ( (__int64)xmmword_218D0 - 1 >= 0 )
            {
              do
              {
                v133 = v131->m128i_i64[0];
                v128 += 32;
                v131 += 2;
                *(_QWORD *)(v128 - 32) = v133;
                v134 = v131[-2].m128i_i64[1];
                v135 = _mm_loadu_si128(v131 - 1);
                v131[-2].m128i_i64[1] = 0;
                *(_QWORD *)(v128 - 24) = v134;
                *(__m128i *)(v128 - 16) = v135;
                v131[-1].m128i_i64[1] = 0;
              }
              while ( v132-- != 0 );
              v131 = (const __m128i *)qword_218C8;
            }
            v171 = v129;
            qfree(v131);
            v86 = v171;
            v85 = xmmword_218D0;
            qword_218C8 = v171;
            *((_QWORD *)&xmmword_218D0 + 1) = v130;
          }
          v87 = 32 * v85 + v86;
          *(_OWORD *)v87 = 0;
          *(_OWORD *)(v87 + 16) = 0;
          *(_QWORD *)&xmmword_218D0 = xmmword_218D0 + 1;
          if ( dword_2185C > 1 )
          {
            *(_QWORD *)v87 = n;
            v111 = a2[1];
            *(_QWORD *)(v87 + 16) = 0;
            if ( (_DWORD)v111 )
            {
              v169 = v111;
              v162 = (_QWORD *)v87;
              v112 = v87 + 8;
              v113 = qvector_reserve(v87 + 8, *(_QWORD *)(v87 + 8), (int)v111, 2);
              v114 = v162;
              v115 = v113;
              v162[1] = v113;
              if ( v169 > 0 )
              {
                v116 = 0;
                v117 = 2LL * (unsigned int)(v169 - 1);
                while ( 1 )
                {
                  v120 = v114[2];
                  v121 = v120 + 1;
                  if ( v114[3] < (unsigned __int64)(v120 + 1) )
                  {
                    v174 = v116;
                    v170 = v117;
                    v163 = v114;
                    v122 = qvector_reserve(v112, v115, v121, 2);
                    v114 = v163;
                    v115 = v122;
                    v116 = v174;
                    v117 = v170;
                    v163[1] = v122;
                    v120 = v163[2];
                    v121 = v120 + 1;
                  }
                  v114[2] = v121;
                  v118 = (_BYTE *)(v115 + 2 * v120);
                  v119 = (_BYTE *)(v116 + *a2);
                  *v118 = *v119;
                  v118[1] = v119[1];
                  if ( v117 == v116 )
                    break;
                  v115 = v114[1];
                  v116 += 2;
                }
              }
            }
          }
        }
      }
    }
  }
  *(_QWORD *)&v178 = 0;
  v20 = (unsigned __int64)v2[1];
  v60 = v57++;
  if ( v60 < v20 )
    goto LABEL_103;
LABEL_111:
  if ( (int)v20 > 0 )
  {
    nb = 0;
    v152 = 4LL * (unsigned int)(v20 - 1) + 4;
    do
    {
      v89 = *(_QWORD *)v2[3] + 208LL * *(unsigned int *)&(*v2)[nb];
      if ( *(_QWORD *)(v89 + 40) <= 1u )
      {
        v90 = *(_QWORD *)(v89 + 136);
        if ( (int)v90 > 0 )
        {
          v91 = nullptr;
          srcb = (char *)(((unsigned int)(v90 - 1) + 1LL) << 6);
          do
          {
            v92 = &v91[*(_QWORD *)(v89 + 128)];
            v93 = *(const char **)v92;
            if ( xmmword_20790 && !strcmp(*(const char **)v92, xmmword_20790) || !strcmp(v93, &byte_203B6) )
            {
              *(_DWORD *)(v89 + 56) = *((_DWORD *)v92 + 6);
              if ( v93 && (v94 = strlen(v93), (v95 = v94) != 0) )
              {
                v96 = *(void **)(v89 + 32);
                v97 = v94 + 1;
                if ( *(_QWORD *)(v89 + 48) < v94 + 1 )
                {
                  v168 = v94;
                  v160 = v94 + 1;
                  v98 = qvector_reserve(v89 + 32, v96, v97, 1);
                  *(_QWORD *)(v89 + 32) = v98;
                  v95 = v168;
                  v96 = (void *)v98;
                  v97 = v160;
                }
                *(_QWORD *)(v89 + 40) = v97;
                v159 = v95;
                memmove(v96, v93, v95);
                *(_BYTE *)(*(_QWORD *)(v89 + 32) + v159) = 0;
              }
              else
              {
                *(_QWORD *)(v89 + 40) = 0;
              }
            }
            v91 += 64;
          }
          while ( srcb != v91 );
        }
      }
      nb += 4LL;
    }
    while ( v152 != nb );
    v20 = (unsigned __int64)v2[1];
  }
  if ( byte_204E0 )
  {
    v101 = a2[1];
    v102 = (_BYTE *)*a2;
    if ( (int)v101 <= 0 )
    {
      v103 = 0;
      goto LABEL_130;
    }
LABEL_128:
    v103 = 0;
    v104 = (__int64)&v102[2 * (unsigned int)(v101 - 1) + 2];
    do
    {
      v103 -= (*v102 == 0) - 1;
      v102 += 2;
    }
    while ( v102 != (_BYTE *)v104 );
LABEL_130:
    v105 = dword_204E4;
    if ( dword_204E4 > v103 && (int)v20 > 0 )
    {
      v106 = 0;
      v107 = 4LL * (unsigned int)(v20 - 1);
      while ( 1 )
      {
        v108 = *(_QWORD *)v2[3] + 208LL * *(unsigned int *)&(*v2)[v106];
        if ( v103 + *(unsigned __int8 *)(v108 + 188) < v105 && *(_QWORD *)(v108 + 40) <= 1u )
        {
          if ( *(_QWORD *)(v108 + 136) )
          {
            v109 = *(_QWORD *)(v108 + 128);
            *(_DWORD *)(v108 + 56) = *(_DWORD *)(v109 + 24);
            if ( v109 != v108 + 32 )
            {
              v110 = *(_QWORD *)(v109 + 8);
              if ( v110 > 1 )
              {
                v138 = *(void **)(v108 + 32);
                srcc = *(void **)v109;
                if ( *(_QWORD *)(v108 + 48) < v110 )
                {
                  v139 = qvector_reserve(v108 + 32, v138, v110, 1);
                  *(_QWORD *)(v108 + 32) = v139;
                  v138 = (void *)v139;
                }
                *(_QWORD *)(v108 + 40) = v110;
                memmove(v138, srcc, v110 - 1);
                *(_BYTE *)(*(_QWORD *)(v108 + 32) + v110 - 1) = 0;
              }
              else
              {
                *(_QWORD *)(v108 + 40) = 0;
              }
            }
          }
        }
        if ( v106 == v107 )
          break;
        v105 = dword_204E4;
        v106 += 4;
      }
      v20 = (unsigned __int64)v2[1];
    }
  }
LABEL_17:
  v21 = 0;
  for ( i = 0; v21 < (unsigned __int64)v181; i = v21 )
  {
    v23 = *v2;
    v24 = *(_DWORD *)(v180 + 4 * i);
    v25 = (__int64)&(*v2)[4 * v20];
    if ( *v2 != (char *)v25 )
    {
      while ( v24 != *(_DWORD *)v23 )
      {
        v23 += 4;
        if ( (char *)v25 == v23 )
          goto LABEL_24;
      }
      if ( (char *)v25 != v23 )
      {
        memmove(v23, v23 + 4, v25 - (_QWORD)v23 - 4);
        v20 = (unsigned __int64)(v2[1] - 1);
        v2[1] = (char *)v20;
      }
    }
LABEL_24:
    ++v21;
  }
  if ( (int)v20 > 0 )
  {
    v26 = 0;
    v27 = 4LL * (unsigned int)(v20 - 1) + 4;
    do
    {
      v28 = *(_QWORD *)v2[3] + 208LL * *(unsigned int *)&(*v2)[v26];
      v29 = *(_QWORD *)(v28 + 128);
      v30 = (_QWORD *)v28;
      if ( v29 )
      {
        v31 = *(_QWORD *)(v28 + 136);
        if ( v31 )
        {
          na = v26;
          v32 = 0;
          srca = (void *)v27;
          v151 = v2;
          do
          {
            v33 = (__int64 *)(v29 + (v32 << 6));
            v34 = v33[4];
            if ( v34 )
            {
              v35 = v33[5];
              if ( v35 )
              {
                for ( j = 0; j != v35; ++j )
                {
                  v37 = (__int64 *)(v34 + 32 * j);
                  v38 = *v37;
                  if ( *v37 )
                  {
                    v37[1] = 0;
                    qfree(v38);
                    v34 = v33[4];
                  }
                }
              }
              v33[5] = 0;
              qfree(v34);
            }
            v39 = *v33;
            if ( *v33 )
            {
              v33[1] = 0;
              qfree(v39);
            }
            ++v32;
            v29 = v30[16];
          }
          while ( v31 != v32 );
          v26 = na;
          v27 = (__int64)srca;
          v2 = v151;
        }
        v30[17] = 0;
        qfree(v29);
        v30[16] = 0;
        v30[18] = 0;
      }
      v40 = v30[19];
      if ( v40 )
      {
        v30[20] = 0;
        qfree(v40);
        v30[19] = 0;
        v30[21] = 0;
      }
      v26 += 4LL;
    }
    while ( v26 != v27 );
  }
  if ( v180 )
  {
    *(_QWORD *)&v181 = 0;
    qfree(v180);
  }
LABEL_47:
  if ( dest )
  {
    *(_QWORD *)&v178 = 0;
    qfree(dest);
  }
  return v182 - __readfsqword(0x28u);
}
