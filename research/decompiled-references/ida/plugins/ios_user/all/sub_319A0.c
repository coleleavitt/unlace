unsigned __int64 __fastcall sub_319A0(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, unsigned int i, char a6)
{
  __int64 v8; // rax
  _QWORD *v9; // r13
  __int64 v10; // rdx
  _DWORD *v12; // rdi
  int v13; // esi
  int *v14; // rcx
  int *v15; // rdi
  int v16; // edx
  _DWORD *v17; // r14
  int v18; // ecx
  int *v19; // rdx
  int v20; // eax
  int *v21; // r14
  int v22; // eax
  _DWORD *v23; // r9
  int v24; // r14d
  int *v25; // rsi
  int *v26; // r9
  int v27; // edi
  int v28; // edx
  int v29; // r15d
  __int64 v30; // rdx
  unsigned int v31; // ebp
  _QWORD *j; // r13
  __int64 v33; // r12
  bool v34; // cc
  __int64 v35; // rsi
  _DWORD *v36; // rsi
  __int64 v37; // rsi
  int v38; // ebx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r15
  __int64 v42; // rbx
  __int64 v43; // r13
  _QWORD *v44; // rax
  unsigned __int64 v45; // r11
  size_t v46; // r9
  unsigned __int64 v47; // r13
  size_t v48; // r11
  __int64 v49; // rsi
  int v50; // r14d
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // r14
  unsigned int v54; // r15d
  __int64 v55; // r12
  __int64 v56; // rsi
  __int64 v57; // rsi
  int v58; // ebx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // r14
  unsigned int v63; // r15d
  __int64 v64; // rbp
  __int64 v65; // rsi
  __int64 v66; // rsi
  int v67; // ebx
  __int64 v68; // rax
  __int64 v69; // rdx
  int v70; // ebx
  __int64 v71; // r14
  __m128i v72; // xmm0
  __int64 v73; // r10
  unsigned __int64 v74; // rdi
  __int64 v75; // rax
  __int64 v76; // r14
  char *v77; // r12
  __int64 v78; // rbx
  __int64 v79; // rdi
  __int64 v80; // r15
  __int64 v81; // r14
  __int64 v82; // r12
  _QWORD *v83; // rbx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  const void *v87; // r8
  void *v88; // rax
  const void *v89; // r8
  void *v90; // rax
  __int64 v91; // rax
  unsigned int v92; // r8d
  int v93; // r15d
  unsigned int v94; // r14d
  int v95; // ebx
  __int64 k; // rdx
  __int64 v97; // r13
  __int64 v98; // rsi
  _DWORD *v99; // rsi
  __int64 v100; // rsi
  int v101; // r12d
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // r14
  _QWORD *v106; // r15
  unsigned int v107; // ebp
  __int64 v108; // r12
  __int64 v109; // rsi
  _DWORD *v110; // rsi
  __int64 v111; // rsi
  int v112; // ebx
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  unsigned int v116; // r8d
  __int64 v117; // rax
  __int64 v118; // r15
  _QWORD *v119; // r14
  unsigned int v120; // r12d
  __int64 v121; // rbp
  __int64 v122; // rsi
  _DWORD *v123; // rsi
  __int64 v124; // rsi
  int v125; // ebx
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  unsigned int v129; // [rsp+0h] [rbp-128h]
  unsigned int v130; // [rsp+0h] [rbp-128h]
  unsigned int v131; // [rsp+0h] [rbp-128h]
  unsigned int v132; // [rsp+0h] [rbp-128h]
  unsigned int v133; // [rsp+0h] [rbp-128h]
  unsigned int v134; // [rsp+0h] [rbp-128h]
  unsigned int v135; // [rsp+0h] [rbp-128h]
  unsigned int v136; // [rsp+0h] [rbp-128h]
  unsigned int v137; // [rsp+0h] [rbp-128h]
  unsigned int v138; // [rsp+0h] [rbp-128h]
  unsigned int v139; // [rsp+0h] [rbp-128h]
  unsigned int v140; // [rsp+0h] [rbp-128h]
  _QWORD *v141; // [rsp+8h] [rbp-120h]
  _QWORD *v142; // [rsp+8h] [rbp-120h]
  __int64 v143; // [rsp+8h] [rbp-120h]
  unsigned int v144; // [rsp+10h] [rbp-118h]
  _QWORD *v145; // [rsp+18h] [rbp-110h]
  __int64 v146; // [rsp+18h] [rbp-110h]
  unsigned __int64 v148; // [rsp+20h] [rbp-108h]
  unsigned __int64 v149; // [rsp+20h] [rbp-108h]
  _QWORD *v150; // [rsp+20h] [rbp-108h]
  const void *v151; // [rsp+28h] [rbp-100h]
  size_t v152; // [rsp+28h] [rbp-100h]
  const void *v153; // [rsp+30h] [rbp-F8h]
  _QWORD *v154; // [rsp+38h] [rbp-F0h]
  __int64 v155; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v156; // [rsp+48h] [rbp-E0h]
  __int64 v157[17]; // [rsp+60h] [rbp-C8h] BYREF
  unsigned __int64 v158; // [rsp+E8h] [rbp-40h]

  v8 = a2[4];
  v158 = __readfsqword(0x28u);
  v9 = a4;
  if ( v8 == 32 )
  {
    v17 = (_DWORD *)a2[3];
    v18 = v17[8];
    v19 = v17 + 42;
    if ( a6 )
    {
      v21 = v17 + 1096;
      while ( 1 )
      {
        v22 = v18;
        v18 = *v19;
        if ( *v19 != v22 + 16 )
          break;
        v19 += 34;
        if ( v21 == v19 )
        {
          v40 = a3[4];
          if ( !v40 )
          {
            v154 = v9;
            v41 = 0;
            v144 = i;
            while ( 1 )
            {
              v49 = a3[3];
              v50 = v144 + v41;
              if ( a3[5] < (unsigned __int64)(v40 + 1) )
              {
                v51 = qvector_reserve();
                a3[3] = v51;
                v49 = v51;
                v40 = a3[4];
              }
              v42 = v49 + 136 * v40;
              *(_QWORD *)v42 = 0;
              *(_QWORD *)(v42 + 24) = -1;
              v43 = 136 * v41;
              *(_QWORD *)(v42 + 32) = 0xFFFFFFFFLL;
              *(_QWORD *)(v42 + 40) = 0;
              *(_QWORD *)(v42 + 64) = 0;
              *(_QWORD *)(v42 + 88) = 0;
              *(_QWORD *)(v42 + 112) = 0;
              *(_OWORD *)(v42 + 8) = 0;
              *(_OWORD *)(v42 + 48) = 0;
              *(_OWORD *)(v42 + 72) = 0;
              *(_OWORD *)(v42 + 96) = 0;
              *(_OWORD *)(v42 + 120) = 0;
              ++a3[4];
              sub_15620((__int64 *)v42);
              *(_DWORD *)(v42 + 24) = 64;
              *(_DWORD *)(v42 + 32) = *(_DWORD *)(a2[3] + 136 * v41 + 32);
              v44 = (_QWORD *)(136 * v41 + a2[3]);
              if ( (_QWORD *)(v42 + 64) != v44 + 8 )
              {
                v45 = v44[9];
                if ( v45 && (v46 = v45 - 1, v45 != 1) )
                {
                  v89 = (const void *)v44[8];
                  v90 = *(void **)(v42 + 64);
                  if ( *(_QWORD *)(v42 + 80) < v45 )
                  {
                    v153 = v89;
                    v152 = v45 - 1;
                    v149 = v45;
                    v90 = (void *)qvector_reserve();
                    v89 = v153;
                    v46 = v152;
                    *(_QWORD *)(v42 + 64) = v90;
                    v45 = v149;
                  }
                  *(_QWORD *)(v42 + 72) = v45;
                  v148 = v45;
                  memmove(v90, v89, v46);
                  *(_BYTE *)(*(_QWORD *)(v42 + 64) + v148 - 1) = 0;
                  v44 = (_QWORD *)(v43 + a2[3]);
                }
                else
                {
                  *(_QWORD *)(v42 + 72) = 0;
                  v44 = (_QWORD *)(v43 + a2[3]);
                }
              }
              if ( (_QWORD *)(v42 + 88) != v44 + 11 )
              {
                v47 = v44[12];
                if ( v47 && (v48 = v47 - 1, v47 != 1) )
                {
                  v87 = (const void *)v44[11];
                  v88 = *(void **)(v42 + 88);
                  if ( *(_QWORD *)(v42 + 104) < v47 )
                  {
                    v151 = v87;
                    v88 = (void *)qvector_reserve();
                    v87 = v151;
                    v48 = v47 - 1;
                    *(_QWORD *)(v42 + 88) = v88;
                  }
                  *(_QWORD *)(v42 + 96) = v47;
                  memmove(v88, v87, v48);
                  *(_BYTE *)(*(_QWORD *)(v42 + 88) + v47 - 1) = 0;
                }
                else
                {
                  *(_QWORD *)(v42 + 96) = 0;
                }
              }
              ++v41;
              *(_DWORD *)(v42 + 28) = v50;
              if ( v41 == 31 )
                break;
              v40 = a3[4];
            }
            v9 = v154;
            i = v144 + 31;
          }
          v52 = v9[4];
          if ( !v52 )
          {
            v141 = a2;
            v53 = 0;
            v54 = i;
            while ( 1 )
            {
              v57 = v9[3];
              v58 = v54 + v53;
              if ( v9[5] < (unsigned __int64)(v52 + 1) )
              {
                v59 = qvector_reserve();
                v9[3] = v59;
                v57 = v59;
                v52 = v9[4];
              }
              v55 = v57 + 136 * v52;
              *(_QWORD *)v55 = 0;
              *(_QWORD *)(v55 + 24) = -1;
              *(_QWORD *)(v55 + 32) = 0xFFFFFFFFLL;
              *(_QWORD *)(v55 + 40) = 0;
              *(_QWORD *)(v55 + 64) = 0;
              *(_QWORD *)(v55 + 88) = 0;
              *(_QWORD *)(v55 + 112) = 0;
              *(_OWORD *)(v55 + 8) = 0;
              *(_OWORD *)(v55 + 48) = 0;
              *(_OWORD *)(v55 + 72) = 0;
              *(_OWORD *)(v55 + 96) = 0;
              *(_OWORD *)(v55 + 120) = 0;
              ++v9[4];
              sub_15620((__int64 *)v55);
              *(_DWORD *)(v55 + 24) = 128;
              v56 = *(_QWORD *)(v55 + 64);
              v34 = *(_QWORD *)(v55 + 80) <= 6u;
              *(_DWORD *)(v55 + 32) = *(_DWORD *)(v141[3] + 136 * v53 + 32);
              if ( v34 )
              {
                v84 = qvector_reserve();
                *(_QWORD *)(v55 + 64) = v84;
                v56 = v84;
              }
              ++v53;
              *(_QWORD *)(v55 + 72) = 7;
              *(_DWORD *)v56 = 1952671094;
              *(_WORD *)(v56 + 4) = 29295;
              *(_BYTE *)(*(_QWORD *)(v55 + 64) + 6LL) = 0;
              *(_DWORD *)(v55 + 28) = v58;
              if ( v53 == 31 )
                break;
              v52 = v9[4];
            }
          }
          return v158 - __readfsqword(0x28u);
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v20 = v18;
        v18 = *v19;
        if ( *v19 != v20 + 4 )
          break;
        v19 += 34;
        if ( v17 + 1096 == v19 )
        {
          v60 = a3[4];
          if ( v60 == 16 )
          {
            v69 = a3[3];
            v129 = i;
            if ( !*(_QWORD *)(v69 + 8) )
              return v158 - __readfsqword(0x28u);
            v143 = a3[3];
            v70 = strcmp(*(const char **)v69, "d16");
            if ( v70 || *(_DWORD *)(v143 + 32) <= v17[1062] )
              return v158 - __readfsqword(0x28u);
            v155 = 0;
            v156 = 0;
            sub_2A5F0((__int64)v157, v143);
            i = v129;
            v71 = 0;
            do
            {
              v130 = i;
              sub_15620(v157);
              v72 = _mm_cvtsi32_si128(v130);
              v131 = v130 + 1;
              *(__int64 *)((char *)&v157[3] + 4) = _mm_unpacklo_epi32(
                                                     v72,
                                                     _mm_cvtsi32_si128(*(_DWORD *)(a2[3] + v71 + 32))).m128i_u64[0];
              sub_31620(&v155, (__int64)v157);
              ++v70;
              v71 += 272;
              i = v131;
            }
            while ( v70 != 16 );
            v73 = 136 * v156;
            v74 = 0xF0F0F0F0F0F0F0F1LL * ((136 * (__int64)v156) >> 3);
            if ( v74 )
            {
              v75 = a3[4];
              v76 = v155;
              v77 = (char *)a3[3];
              if ( a3[5] < v74 + v75 )
              {
                v146 = 136 * v156;
                v77 = (char *)qvector_reserve();
                v73 = v146;
                i = v131;
                a3[3] = v77;
                v75 = a3[4];
              }
              v78 = v76 + v73;
              v132 = i;
              memmove(&v77[v73], v77, 136 * v75);
              for ( i = v132; v78 != v76; i = v133 )
              {
                v133 = i;
                sub_2A5F0((__int64)v77, v76);
                v76 += 136;
                v77 += 136;
              }
              a3[4] += v74;
            }
            if ( v157[14] )
            {
              v134 = i;
              v157[15] = 0;
              qfree();
              i = v134;
            }
            if ( v157[11] )
            {
              v135 = i;
              v157[12] = 0;
              qfree();
              i = v135;
            }
            if ( v157[8] )
            {
              v136 = i;
              v157[9] = 0;
              qfree();
              i = v136;
            }
            if ( v157[5] )
            {
              v137 = i;
              v157[6] = 0;
              qfree();
              i = v137;
            }
            if ( v157[0] )
            {
              v138 = i;
              v157[1] = 0;
              qfree();
              i = v138;
            }
            v79 = v155;
            if ( v155 )
            {
              v80 = v156;
              v81 = 0;
              v82 = 0;
              if ( (_QWORD)v156 )
              {
                v139 = i;
                do
                {
                  v83 = (_QWORD *)(v79 + v81);
                  if ( *(_QWORD *)(v79 + v81 + 112) )
                  {
                    v83[15] = 0;
                    qfree();
                  }
                  if ( v83[11] )
                  {
                    v83[12] = 0;
                    qfree();
                  }
                  if ( v83[8] )
                  {
                    v83[9] = 0;
                    qfree();
                  }
                  if ( v83[5] )
                  {
                    v83[6] = 0;
                    qfree();
                  }
                  if ( *v83 )
                  {
                    v83[1] = 0;
                    qfree();
                  }
                  ++v82;
                  v79 = v155;
                  v81 += 136;
                }
                while ( v80 != v82 );
                i = v139;
              }
              v140 = i;
              *(_QWORD *)&v156 = 0;
              qfree();
              i = v140;
            }
            v60 = a3[4];
          }
          if ( v60 == 32 )
          {
            v61 = v9[4];
            if ( !v61 )
            {
              v142 = a3;
              v62 = 0;
              v63 = i;
              while ( 1 )
              {
                v66 = v9[3];
                v67 = v63 + v62;
                if ( v9[5] < (unsigned __int64)(v61 + 1) )
                {
                  v68 = qvector_reserve();
                  v9[3] = v68;
                  v66 = v68;
                  v61 = v9[4];
                }
                v64 = v66 + 136 * v61;
                *(_QWORD *)v64 = 0;
                *(_QWORD *)(v64 + 24) = -1;
                *(_QWORD *)(v64 + 32) = 0xFFFFFFFFLL;
                *(_QWORD *)(v64 + 40) = 0;
                *(_QWORD *)(v64 + 64) = 0;
                *(_QWORD *)(v64 + 88) = 0;
                *(_QWORD *)(v64 + 112) = 0;
                *(_OWORD *)(v64 + 8) = 0;
                *(_OWORD *)(v64 + 48) = 0;
                *(_OWORD *)(v64 + 72) = 0;
                *(_OWORD *)(v64 + 96) = 0;
                *(_OWORD *)(v64 + 120) = 0;
                ++v9[4];
                sub_15620((__int64 *)v64);
                *(_DWORD *)(v64 + 24) = 128;
                v65 = *(_QWORD *)(v64 + 64);
                v34 = *(_QWORD *)(v64 + 80) <= 6u;
                *(_DWORD *)(v64 + 32) = *(_DWORD *)(v142[3] + 272 * v62 + 32);
                if ( v34 )
                {
                  v91 = qvector_reserve();
                  *(_QWORD *)(v64 + 64) = v91;
                  v65 = v91;
                }
                *(_QWORD *)(v64 + 72) = 7;
                ++v62;
                *(_DWORD *)v65 = 1952671094;
                *(_WORD *)(v65 + 4) = 29295;
                *(_BYTE *)(*(_QWORD *)(v64 + 64) + 6LL) = 0;
                *(_DWORD *)(v64 + 28) = v67;
                if ( v62 == 16 )
                  break;
                v61 = v9[4];
              }
            }
          }
          return v158 - __readfsqword(0x28u);
        }
      }
    }
  }
  else
  {
    v10 = a4[4];
    if ( v10 )
    {
      if ( a6 )
      {
        if ( v10 == 32 )
        {
          v12 = (_DWORD *)a4[3];
          v13 = v12[8];
          v14 = v12 + 42;
          v15 = v12 + 1096;
          while ( 1 )
          {
            v16 = v13;
            v13 = *v14;
            if ( *v14 != v16 + 16 )
              break;
            v14 += 34;
            if ( v15 == v14 )
            {
              if ( !v8 )
              {
                v150 = a3;
                v105 = 0;
                v106 = a2;
                v107 = i;
                while ( 1 )
                {
                  v111 = v106[3];
                  v112 = v107 + v105;
                  if ( v106[5] < (unsigned __int64)(v8 + 1) )
                  {
                    v113 = qvector_reserve();
                    v106[3] = v113;
                    v111 = v113;
                    v8 = v106[4];
                  }
                  v108 = v111 + 136 * v8;
                  *(_QWORD *)v108 = 0;
                  *(_QWORD *)(v108 + 24) = -1;
                  *(_QWORD *)(v108 + 32) = 0xFFFFFFFFLL;
                  *(_QWORD *)(v108 + 40) = 0;
                  *(_QWORD *)(v108 + 64) = 0;
                  *(_QWORD *)(v108 + 88) = 0;
                  *(_QWORD *)(v108 + 112) = 0;
                  *(_OWORD *)(v108 + 8) = 0;
                  *(_OWORD *)(v108 + 48) = 0;
                  *(_OWORD *)(v108 + 72) = 0;
                  *(_OWORD *)(v108 + 96) = 0;
                  *(_OWORD *)(v108 + 120) = 0;
                  ++v106[4];
                  sub_15620((__int64 *)v108);
                  v109 = *(_QWORD *)(v108 + 64);
                  *(_DWORD *)(v108 + 24) = 32;
                  v34 = *(_QWORD *)(v108 + 80) <= 5u;
                  *(_DWORD *)(v108 + 32) = *(_DWORD *)(v9[3] + 136 * v105 + 32);
                  if ( v34 )
                  {
                    v115 = qvector_reserve();
                    *(_QWORD *)(v108 + 64) = v115;
                    v109 = v115;
                  }
                  *(_QWORD *)(v108 + 72) = 6;
                  *(_DWORD *)v109 = 1634692198;
                  *(_BYTE *)(v109 + 4) = 116;
                  *(_BYTE *)(*(_QWORD *)(v108 + 64) + 5LL) = 0;
                  v110 = *(_DWORD **)(v108 + 88);
                  if ( *(_QWORD *)(v108 + 104) <= 7u )
                  {
                    v114 = qvector_reserve();
                    *(_QWORD *)(v108 + 88) = v114;
                    v110 = (_DWORD *)v114;
                  }
                  *(_QWORD *)(v108 + 96) = 8;
                  ++v105;
                  *v110 = 1701143913;
                  *(_DWORD *)((char *)v110 + 3) = 875902821;
                  *(_BYTE *)(*(_QWORD *)(v108 + 88) + 7LL) = 0;
                  *(_DWORD *)(v108 + 28) = v112;
                  if ( v105 == 32 )
                    break;
                  v8 = v106[4];
                }
                v116 = v107;
                a3 = v150;
                i = v116 + 32;
              }
              v117 = a3[4];
              if ( !v117 )
              {
                v118 = 0;
                v119 = a3;
                v120 = i;
                while ( 1 )
                {
                  v124 = v119[3];
                  v125 = v120 + v118;
                  if ( v119[5] < (unsigned __int64)(v117 + 1) )
                  {
                    v126 = qvector_reserve();
                    v119[3] = v126;
                    v124 = v126;
                    v117 = v119[4];
                  }
                  v121 = v124 + 136 * v117;
                  *(_QWORD *)v121 = 0;
                  *(_QWORD *)(v121 + 24) = -1;
                  *(_QWORD *)(v121 + 32) = 0xFFFFFFFFLL;
                  *(_QWORD *)(v121 + 40) = 0;
                  *(_QWORD *)(v121 + 64) = 0;
                  *(_QWORD *)(v121 + 88) = 0;
                  *(_QWORD *)(v121 + 112) = 0;
                  *(_OWORD *)(v121 + 8) = 0;
                  *(_OWORD *)(v121 + 48) = 0;
                  *(_OWORD *)(v121 + 72) = 0;
                  *(_OWORD *)(v121 + 96) = 0;
                  *(_OWORD *)(v121 + 120) = 0;
                  ++v119[4];
                  sub_15620((__int64 *)v121);
                  *(_DWORD *)(v121 + 24) = 64;
                  v122 = *(_QWORD *)(v121 + 64);
                  v34 = *(_QWORD *)(v121 + 80) <= 5u;
                  *(_DWORD *)(v121 + 32) = *(_DWORD *)(v9[3] + 136 * v118 + 32);
                  if ( v34 )
                  {
                    v128 = qvector_reserve();
                    *(_QWORD *)(v121 + 64) = v128;
                    v122 = v128;
                  }
                  *(_QWORD *)(v121 + 72) = 6;
                  *(_DWORD *)v122 = 1634692198;
                  *(_BYTE *)(v122 + 4) = 116;
                  *(_BYTE *)(*(_QWORD *)(v121 + 64) + 5LL) = 0;
                  v123 = *(_DWORD **)(v121 + 88);
                  if ( *(_QWORD *)(v121 + 104) <= 7u )
                  {
                    v127 = qvector_reserve();
                    *(_QWORD *)(v121 + 88) = v127;
                    v123 = (_DWORD *)v127;
                  }
                  *(_QWORD *)(v121 + 96) = 8;
                  ++v118;
                  *v123 = 1701143913;
                  *(_DWORD *)((char *)v123 + 3) = 875902821;
                  *(_BYTE *)(*(_QWORD *)(v121 + 88) + 7LL) = 0;
                  *(_DWORD *)(v121 + 28) = v125;
                  if ( v118 == 32 )
                    break;
                  v117 = v119[4];
                }
              }
              return v158 - __readfsqword(0x28u);
            }
          }
        }
      }
      else if ( v10 == 16 )
      {
        v23 = (_DWORD *)a4[3];
        v24 = v23[8];
        v25 = v23 + 42;
        v26 = v23 + 552;
        v27 = v24;
        while ( 1 )
        {
          v28 = v27;
          v27 = *v25;
          if ( *v25 != v28 + 16 )
            break;
          v25 += 34;
          if ( v26 == v25 )
          {
            if ( !v8 )
            {
              v145 = a3;
              v29 = 0;
              v30 = 0;
              v31 = i;
              for ( j = a2; ; v30 = j[4] )
              {
                v37 = j[3];
                v38 = v31 + v29;
                if ( j[5] < (unsigned __int64)(v30 + 1) )
                {
                  v39 = qvector_reserve();
                  v30 = j[4];
                  j[3] = v39;
                  v37 = v39;
                }
                v33 = v37 + 136 * v30;
                *(_QWORD *)(v33 + 24) = -1;
                *(_QWORD *)(v33 + 32) = 0xFFFFFFFFLL;
                *(_QWORD *)v33 = 0;
                *(_QWORD *)(v33 + 40) = 0;
                *(_QWORD *)(v33 + 64) = 0;
                *(_QWORD *)(v33 + 88) = 0;
                *(_QWORD *)(v33 + 112) = 0;
                *(_OWORD *)(v33 + 8) = 0;
                *(_OWORD *)(v33 + 48) = 0;
                *(_OWORD *)(v33 + 72) = 0;
                *(_OWORD *)(v33 + 96) = 0;
                *(_OWORD *)(v33 + 120) = 0;
                ++j[4];
                sub_15620((__int64 *)v33);
                v34 = *(_QWORD *)(v33 + 80) <= 5u;
                *(_DWORD *)(v33 + 32) = v24;
                *(_DWORD *)(v33 + 24) = 32;
                v35 = *(_QWORD *)(v33 + 64);
                if ( v34 )
                {
                  v86 = qvector_reserve();
                  *(_QWORD *)(v33 + 64) = v86;
                  v35 = v86;
                }
                *(_QWORD *)(v33 + 72) = 6;
                *(_DWORD *)v35 = 1634692198;
                *(_BYTE *)(v35 + 4) = 116;
                *(_BYTE *)(*(_QWORD *)(v33 + 64) + 5LL) = 0;
                v36 = *(_DWORD **)(v33 + 88);
                if ( *(_QWORD *)(v33 + 104) <= 7u )
                {
                  v85 = qvector_reserve();
                  *(_QWORD *)(v33 + 88) = v85;
                  v36 = (_DWORD *)v85;
                }
                *(_QWORD *)(v33 + 96) = 8;
                ++v29;
                v24 += 4;
                *v36 = 1701143913;
                *(_DWORD *)((char *)v36 + 3) = 875902821;
                *(_BYTE *)(*(_QWORD *)(v33 + 88) + 7LL) = 0;
                *(_DWORD *)(v33 + 28) = v38;
                if ( v29 == 32 )
                  break;
              }
              v92 = v31;
              v9 = a4;
              a3 = v145;
              i = v92 + 32;
            }
            if ( !a3[4] )
            {
              v93 = 0;
              v94 = i;
              v95 = *(_DWORD *)(v9[3] + 32LL);
              for ( k = 0; ; k = a3[4] )
              {
                v100 = a3[3];
                v101 = v93 + v94;
                if ( a3[5] < (unsigned __int64)(k + 1) )
                {
                  v102 = qvector_reserve();
                  k = a3[4];
                  a3[3] = v102;
                  v100 = v102;
                }
                v97 = v100 + 136 * k;
                *(_QWORD *)(v97 + 24) = -1;
                *(_QWORD *)(v97 + 32) = 0xFFFFFFFFLL;
                *(_QWORD *)v97 = 0;
                *(_QWORD *)(v97 + 40) = 0;
                *(_QWORD *)(v97 + 64) = 0;
                *(_QWORD *)(v97 + 88) = 0;
                *(_QWORD *)(v97 + 112) = 0;
                *(_OWORD *)(v97 + 8) = 0;
                *(_OWORD *)(v97 + 48) = 0;
                *(_OWORD *)(v97 + 72) = 0;
                *(_OWORD *)(v97 + 96) = 0;
                *(_OWORD *)(v97 + 120) = 0;
                ++a3[4];
                sub_15620((__int64 *)v97);
                v34 = *(_QWORD *)(v97 + 80) <= 5u;
                *(_DWORD *)(v97 + 32) = v95;
                *(_DWORD *)(v97 + 24) = 64;
                v98 = *(_QWORD *)(v97 + 64);
                if ( v34 )
                {
                  v104 = qvector_reserve();
                  *(_QWORD *)(v97 + 64) = v104;
                  v98 = v104;
                }
                *(_QWORD *)(v97 + 72) = 6;
                *(_DWORD *)v98 = 1634692198;
                *(_BYTE *)(v98 + 4) = 116;
                *(_BYTE *)(*(_QWORD *)(v97 + 64) + 5LL) = 0;
                v99 = *(_DWORD **)(v97 + 88);
                if ( *(_QWORD *)(v97 + 104) <= 7u )
                {
                  v103 = qvector_reserve();
                  *(_QWORD *)(v97 + 88) = v103;
                  v99 = (_DWORD *)v103;
                }
                *(_QWORD *)(v97 + 96) = 8;
                ++v93;
                v95 += 8;
                *v99 = 1701143913;
                *(_DWORD *)((char *)v99 + 3) = 875902821;
                *(_BYTE *)(*(_QWORD *)(v97 + 88) + 7LL) = 0;
                *(_DWORD *)(v97 + 28) = v101;
                if ( v93 == 32 )
                  break;
              }
            }
            return v158 - __readfsqword(0x28u);
          }
        }
      }
    }
  }
  return v158 - __readfsqword(0x28u);
}

