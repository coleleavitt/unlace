__int64 __fastcall sub_54C80(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  __int64 v6; // rbp
  __int16 v7; // dx
  char *v8; // rbx
  char v9; // al
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // r13d
  int v18; // ecx
  _DWORD *v19; // r12
  _WORD *i; // rbp
  __int64 result; // rax
  __int16 v22; // ax
  char *v23; // r12
  char v24; // al
  __int64 v25; // rdi
  __int64 v26; // rbp
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int16 v30; // r15
  int v31; // eax
  __int64 v32; // rcx
  _WORD *v33; // rdx
  _WORD *v34; // rax
  __int16 v35; // ax
  int v36; // r12d
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // r12
  char v40; // al
  __int64 v41; // r13
  __int16 v42; // ax
  __int64 v43; // rdx
  __int64 v44; // rax
  const char *v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 *v49; // r12
  __int64 *v50; // r13
  int v51; // r12d
  __int16 v52; // ax
  __int64 v53; // rax
  __int64 v54; // rbp
  __int64 v55; // rsi
  __int16 v56; // dx
  char v57; // al
  char v58; // al
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int16 v61; // ax
  char *v62; // r12
  char v63; // al
  __int64 v64; // rdi
  __int64 v65; // rbp
  unsigned __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rax
  char v69; // dl
  __int16 v70; // r12
  __int64 v71; // rcx
  __int16 v72; // dx
  _QWORD *v73; // rax
  __int64 v74; // rax
  __int64 v75; // r13
  bool v76; // r12
  int v77; // r12d
  __int64 v78; // rdx
  __int64 v79; // rsi
  __int64 v80; // rax
  int v81; // ecx
  bool v82; // di
  __int16 v83; // dx
  char *v84; // rbx
  __int64 v85; // rdi
  char v86; // al
  unsigned __int64 v87; // rcx
  char v88; // al
  __int64 v89; // r12
  __int64 v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 *v93; // rdx
  __int64 *v94; // r15
  __int64 v95; // rdi
  __int16 v96; // ax
  __int64 v97; // rdx
  __int64 v98; // rsi
  __int64 v99; // rax
  __int64 v100; // rax
  _WORD *v101; // rsi
  __int64 v102; // rdi
  _WORD *v103; // rdx
  _WORD *v104; // rax
  _WORD *v105; // rax
  _WORD *v106; // rcx
  unsigned __int64 v107; // rdi
  __int64 v108; // rax
  _QWORD *v109; // rax
  __int64 v110; // rax
  __int16 v111; // r13
  const char *v112; // rsi
  __int64 v113; // rdx
  __int64 v114; // r15
  __int64 v115; // r13
  __int64 v116; // r8
  __int64 v117; // rax
  __int64 v118; // rsi
  __int64 v119; // r14
  unsigned __int64 v120; // rdx
  size_t v121; // rax
  const char *v122; // r14
  __int64 v123; // rax
  __int64 v124; // r8
  __int64 v125; // r14
  __int64 v126; // r8
  __int64 v127; // rax
  __int64 v128; // rsi
  __int64 v129; // r15
  unsigned __int64 v130; // rdx
  size_t v131; // rax
  const char *v132; // r15
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rdi
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  _WORD *v142; // rax
  _WORD *v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // rsi
  __int64 v146; // rdx
  __int64 v147; // rax
  __int64 v148; // rsi
  __int64 v149; // rax
  __int64 v150; // [rsp+8h] [rbp-1C0h]
  __int64 v151; // [rsp+8h] [rbp-1C0h]
  unsigned __int16 v152; // [rsp+1Ah] [rbp-1AEh] BYREF
  unsigned __int16 v153; // [rsp+1Ch] [rbp-1ACh]
  __int128 v154; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v155; // [rsp+30h] [rbp-198h]
  __int64 v156; // [rsp+38h] [rbp-190h]
  __int64 v157; // [rsp+40h] [rbp-188h]
  _BYTE v158[6]; // [rsp+48h] [rbp-180h] BYREF
  __int16 v159; // [rsp+4Eh] [rbp-17Ah]
  __int16 v160; // [rsp+76h] [rbp-152h]
  _QWORD v161[8]; // [rsp+188h] [rbp-40h] BYREF

  v5 = *(unsigned __int16 *)(a2 + 24);
  v161[0] = __readfsqword(0x28u);
  v6 = a2;
  if ( (unsigned __int16)v5 <= 0xECu )
  {
    if ( (unsigned __int16)v5 > 0x9Bu )
    {
      switch ( v5 )
      {
        case 156:
          v56 = *(_WORD *)(a2 + 46);
          if ( !v56 || v56 == 11 )
          {
            v8 = (char *)(a1 + 27);
            if ( v56 )
              v8 = (char *)(a1 + 32);
          }
          else
          {
            if ( v56 != 12 )
              goto LABEL_27;
            v8 = (char *)(a1 + 37);
          }
          v57 = *(_BYTE *)(a2 + 81);
          if ( v57 == 1 )
          {
            if ( v56 == *(_WORD *)(a2 + 86) )
            {
              v58 = *v8;
              if ( (*v8 & 3) == 1 )
              {
                if ( *(_BYTE *)(a2 + 121) )
                {
                  v59 = 2;
                  goto LABEL_128;
                }
LABEL_127:
                v59 = 1;
LABEL_128:
                v12 = *(_QWORD *)(a2 + 16);
                v60 = *(_QWORD *)(a2 + 40 * v59 + 48) | *((_QWORD *)v8 + 1);
                *v8 = v58 & 0xFC | 1;
                *((_QWORD *)v8 + 1) = v60;
                goto LABEL_19;
              }
            }
          }
          else if ( v57 == 5 && !*(_BYTE *)(a2 + 121) )
          {
            v58 = *v8;
            if ( (*v8 & 3) == 1 )
              goto LABEL_127;
          }
          return 1;
        case 184:
        case 189:
        case 206:
          v35 = *(_WORD *)(a2 + 86);
          if ( v35 != 1 && v35 != *((_WORD *)a1 + 85) )
            return 1;
          v36 = *(unsigned __int16 *)(a2 + 46);
          v37 = *(_DWORD *)(*a1 + 288);
          LOBYTE(a4) = (unsigned int)(v37 - 5) > 1;
          if ( (((_WORD)v36 == 2) & (unsigned __int8)a4) != 0
            || (unsigned __int16)(v36 - 13) <= 0x12u
            || (v38 = (unsigned int)(v36 - 49), (unsigned __int16)(v36 - 49) <= 0x11u) )
          {
            v101 = (_WORD *)a1[2];
            v102 = a1[3];
            v103 = &v101[v102];
            if ( v101 != v103 )
            {
              v104 = (_WORD *)a1[2];
              while ( (_WORD)v36 != *v104 )
              {
                if ( v103 == ++v104 )
                  goto LABEL_219;
              }
              if ( v103 != v104 )
                return 1;
            }
LABEL_219:
            v105 = (_WORD *)a1[9];
            v106 = &v105[a1[10]];
            if ( v105 != v106 )
            {
              while ( (_WORD)v36 != *v105 )
              {
                if ( v106 == ++v105 )
                  goto LABEL_224;
              }
              if ( v106 != v105 )
                return 1;
            }
LABEL_224:
            v107 = v102 + 1;
            if ( a1[4] < v107 )
            {
              v141 = qvector_reserve(a1 + 2, v101, v107, 2);
              a1[2] = v141;
              v103 = (_WORD *)(2 * a1[3] + v141);
            }
            *v103 = v36;
            ++a1[3];
            goto LABEL_116;
          }
          if ( !(_WORD)v36 || (_WORD)v36 == 11 )
          {
            v108 = (__int64)(a1 + 32);
            v38 = (__int64)(a1 + 27);
            if ( !(_WORD)v36 )
              v108 = (__int64)(a1 + 27);
            v39 = v108;
          }
          else
          {
            if ( (_WORD)v36 != 12 )
            {
              if ( (unsigned int)(v37 - 1) <= 1 || (unsigned __int16)(v36 - 3) > 7u && (unsigned __int16)(v36 - 36) > 7u )
                return 1;
              v142 = (_WORD *)a1[9];
              v143 = &v142[a1[10]];
              if ( v142 != v143 )
              {
                while ( (_WORD)v36 != *v142 )
                {
                  if ( v143 == ++v142 )
                    goto LABEL_298;
                }
                if ( v142 != v143 )
                  return 1;
              }
LABEL_298:
              v144 = a1[23];
              v145 = a1[22];
              v146 = v145 + 24 * v144;
              if ( v145 != v146 )
              {
                v147 = a1[22];
                while ( (_WORD)v36 != *(_WORD *)(v147 + 16) )
                {
                  v147 += 24;
                  if ( v146 == v147 )
                    goto LABEL_303;
                }
                if ( v146 != v147 )
                  return 1;
              }
LABEL_303:
              if ( a1[24] < (unsigned __int64)(v144 + 1) )
              {
                v149 = qvector_reserve(a1 + 22, v145, v144 + 1, 24);
                v144 = a1[23];
                a1[22] = v149;
                v145 = v149;
              }
              a1[23] = v144 + 1;
              v148 = 24 * v144 + v145;
              *(_WORD *)(v148 + 16) = v36;
              *(_QWORD *)v148 = *(_QWORD *)(v6 + 96);
              *(_QWORD *)(v148 + 8) = *(_QWORD *)(v6 + 16);
              return 1;
            }
            v39 = (__int64)(a1 + 37);
          }
          v40 = *(_BYTE *)v39 & 3;
          if ( v40 == 2 )
          {
            v110 = a1[3];
            v111 = *(_WORD *)(v39 + 8);
            v112 = (const char *)a1[2];
            v113 = v110 + 1;
            if ( a1[4] < (unsigned __int64)(v110 + 1) )
            {
              v137 = qvector_reserve(a1 + 2, v112, v113, 2);
              a1[2] = v137;
              v112 = (const char *)v137;
              v110 = a1[3];
            }
            *(_WORD *)&v112[2 * v110] = v111;
            ++a1[3];
            if ( *(_WORD *)(v39 + 8) == 280 )
              a1[5] = *(_QWORD *)(v6 + 96);
            v114 = *(_QWORD *)(v39 + 16);
            v115 = 8LL * *(_QWORD *)(v39 + 24);
            v116 = v115 >> 3;
            if ( !(v115 >> 3) )
            {
              *(_BYTE *)v39 = 0;
              if ( v114 )
              {
                *(_QWORD *)(v39 + 24) = 0;
                qfree(v114, v112, v113, a4, 0);
                *(_QWORD *)(v39 + 16) = 0;
                *(_QWORD *)(v39 + 32) = 0;
              }
              goto LABEL_116;
            }
            v117 = a1[16];
            v118 = a1[15];
            v119 = 8 * v117;
            v120 = v117 + v116;
            v121 = 0;
            if ( a1[17] < v120 )
            {
              v139 = qvector_reserve(a1 + 15, v118, v120, 8);
              v116 = v115 >> 3;
              a1[15] = v139;
              v118 = v139;
              v121 = 8 * a1[16] - v119;
            }
            v122 = (const char *)(v118 + v119);
            v150 = v116;
            v45 = v122;
            memmove((void *)&v122[v115], v122, v121);
            v123 = 0;
            v124 = v150;
            if ( v115 )
            {
              do
              {
                *(_QWORD *)&v122[v123] = *(_QWORD *)(v114 + v123);
                v123 += 8;
              }
              while ( v115 != v123 );
            }
          }
          else
          {
            v41 = *(_QWORD *)(v39 + 16);
            if ( v40 != 1 )
            {
              *(_BYTE *)v39 = 0;
              if ( v41 )
              {
                *(_QWORD *)(v39 + 24) = 0;
                qfree(v41, (const char *)a2);
                *(_QWORD *)(v39 + 16) = 0;
                *(_QWORD *)(v39 + 32) = 0;
              }
              return 1;
            }
            v125 = 8LL * *(_QWORD *)(v39 + 24);
            v126 = v125 >> 3;
            if ( !(v125 >> 3) )
            {
              *(_BYTE *)v39 = 0;
              if ( v41 )
              {
                *(_QWORD *)(v39 + 24) = 0;
                qfree(v41, (const char *)a2, v38, a4, 0);
                *(_QWORD *)(v39 + 16) = 0;
                *(_QWORD *)(v39 + 32) = 0;
              }
              goto LABEL_116;
            }
            v127 = a1[16];
            v128 = a1[15];
            v129 = 8 * v127;
            v130 = v127 + v126;
            v131 = 0;
            if ( a1[17] < v130 )
            {
              v140 = qvector_reserve(a1 + 15, v128, v130, 8);
              v126 = v125 >> 3;
              a1[15] = v140;
              v128 = v140;
              v131 = 8 * a1[16] - v129;
            }
            v132 = (const char *)(v128 + v129);
            v151 = v126;
            v45 = v132;
            memmove((void *)&v132[v125], v132, v131);
            v133 = 0;
            v124 = v151;
            if ( v125 )
            {
              do
              {
                *(_QWORD *)&v132[v133] = *(_QWORD *)(v41 + v133);
                v133 += 8;
              }
              while ( v125 != v133 );
            }
          }
          a1[16] += v124;
          v46 = *(_QWORD *)(v39 + 16);
          *(_BYTE *)v39 = 0;
          if ( v46 )
            goto LABEL_98;
          goto LABEL_116;
        case 186:
        case 209:
          if ( *(_BYTE *)(a2 + 41) != 1
            || *(_WORD *)(a2 + 46) != 1
            || (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) != 0x1000000000400LL )
          {
            return 1;
          }
          v47 = *(int *)(a2 + 96);
          a1[8] = -v47;
          v48 = a1[5];
          if ( v48 != -1 )
            a1[5] = v48 - v47;
          v49 = a1 + 27;
          v50 = a1 + 42;
          do
          {
            if ( (*(_BYTE *)v49 & 3) == 1 )
            {
              v138 = v49[2];
              *(_BYTE *)v49 = 0;
              if ( v138 )
              {
                v49[3] = 0;
                qfree(v138, (const char *)a2);
                v49[2] = 0;
                v49[4] = 0;
              }
            }
            v49 += 5;
          }
          while ( v50 != v49 );
          goto LABEL_116;
        case 187:
        case 210:
          if ( *(_BYTE *)(a2 + 41) != 1
            || *(_WORD *)(a2 + 46) != 1
            || *(_BYTE *)(a2 + 81) != 1
            || *(_WORD *)(a2 + 86) != 1 )
          {
            return 1;
          }
          v42 = *(_WORD *)(a2 + 126);
          if ( v42 )
          {
            if ( v42 == 11 )
            {
              v39 = (__int64)(a1 + 32);
            }
            else
            {
              if ( v42 != 12 )
                return 1;
              v39 = (__int64)(a1 + 37);
            }
          }
          else
          {
            v39 = (__int64)(a1 + 27);
          }
          if ( (*(_BYTE *)v39 & 3) != 1 )
            return 1;
          v43 = *(_QWORD *)(v39 + 8);
          a1[8] = -v43;
          v44 = a1[5];
          if ( v44 != -1 )
            a1[5] = v44 - v43;
          v45 = (const char *)(a1 + 15);
          sub_54BA0(v39, a1 + 15);
          v46 = *(_QWORD *)(v39 + 16);
          *(_BYTE *)v39 = 0;
          if ( v46 )
          {
LABEL_98:
            *(_QWORD *)(v39 + 24) = 0;
            qfree(v46, v45);
            *(_QWORD *)(v39 + 16) = 0;
            *(_QWORD *)(v39 + 32) = 0;
          }
          goto LABEL_116;
        case 203:
          v51 = *(unsigned __int16 *)(a2 + 46);
          if ( (_WORD)v51 == 2 && (unsigned int)(*(_DWORD *)(*a1 + 288) - 5) > 1 || (_WORD)v51 == 13 )
          {
            v96 = *(_WORD *)(a2 + 86);
            if ( v96 == 1 || v96 == *((_WORD *)a1 + 85) )
              goto LABEL_196;
          }
          else
          {
            if ( (unsigned __int16)(v51 - 14) > 0x11u )
            {
              if ( (unsigned __int16)(v51 - 49) > 0x11u )
                return 1;
              v52 = *(_WORD *)(a2 + 86);
              if ( v52 != 1 && *((_WORD *)a1 + 85) != v52 && (unsigned __int16)(v52 - 11) > 1u && v52 )
                return 1;
              goto LABEL_116;
            }
            v96 = *(_WORD *)(a2 + 86);
            if ( v96 == 1 || *((_WORD *)a1 + 85) == v96 )
            {
LABEL_196:
              v97 = a1[3];
              do
              {
                v98 = a1[2];
                if ( a1[4] < (unsigned __int64)(v97 + 1) )
                {
                  v99 = qvector_reserve(a1 + 2, v98, v97 + 1, 2);
                  v97 = a1[3];
                  a1[2] = v99;
                  v98 = v99;
                }
                *(_WORD *)(v98 + 2 * v97) = v51++;
                v97 = a1[3] + 1;
                a1[3] = v97;
              }
              while ( (_WORD)v51 != 32 );
              goto LABEL_116;
            }
          }
          if ( (unsigned __int16)(v96 - 11) > 1u && v96 )
            return 1;
          goto LABEL_196;
        case 229:
        case 230:
        case 231:
        case 232:
        case 233:
        case 234:
        case 235:
        case 236:
          goto LABEL_71;
        default:
          goto LABEL_27;
      }
    }
    if ( (_WORD)v5 != 88 )
    {
      if ( (unsigned __int16)v5 <= 0x58u )
      {
        if ( (_WORD)v5 == 13 )
        {
          if ( (*(_BYTE *)(a2 + 28) & 8) != 0 && *(_BYTE *)(a2 + 41) == 7 )
          {
            v74 = *(_QWORD *)(a2 + 56) + 16LL * *(_QWORD *)a2;
            v75 = *(_QWORD *)(*(_QWORD *)(*a1 + 32) + 16LL);
            if ( v74 != v75 )
            {
              v75 &= v74;
              if ( v74 == -1 )
                v75 = -1;
            }
            v76 = sub_34520((const char *)v75);
            if ( (unsigned __int8)sub_421C0((__int64)&v152, (const char *)v75) )
            {
              v77 = v152;
              if ( v153 >= v152 )
              {
                v78 = a1[3];
                do
                {
                  v79 = a1[2];
                  if ( a1[4] < (unsigned __int64)(v78 + 1) )
                  {
                    v80 = qvector_reserve(a1 + 2, v79, v78 + 1, 2);
                    v78 = a1[3];
                    a1[2] = v80;
                    v79 = v80;
                  }
                  *(_WORD *)(v79 + 2 * v78) = v77++;
                  v78 = a1[3] + 1;
                  a1[3] = v78;
                }
                while ( v153 >= (unsigned __int16)v77 );
              }
              v155 = -1;
              v109 = v158;
              v156 = 0;
              v157 = 0;
              v154 = -1;
              do
              {
                *(_WORD *)v109 = 0;
                v109 += 5;
                *((_WORD *)v109 - 19) = 0;
                *((_WORD *)v109 - 18) = 0;
                *((_DWORD *)v109 - 2) = 0;
                *((_WORD *)v109 - 17) = 0;
                *((_OWORD *)v109 - 2) = 0;
                *(v109 - 2) = 0;
              }
              while ( v161 != v109 );
              if ( decode_prev_insn(&v154, *(_QWORD *)(v6 + 16), 0.0) != -1
                && ((_WORD)v156 == 4 || (_WORD)v156 == 1155)
                && v158[1] == 1
                && v159 == 11
                && (v160 == 1 || v160 == *((_WORD *)a1 + 85)) )
              {
                sub_54430(a1 + 15, v155);
              }
              goto LABEL_116;
            }
            if ( v76 )
            {
LABEL_116:
              v53 = a1[16];
              v54 = *(_QWORD *)(v6 + 16);
              v55 = a1[15];
              if ( a1[17] < (unsigned __int64)(v53 + 1) )
              {
                v100 = qvector_reserve(a1 + 15, v55, v53 + 1, 8);
                a1[15] = v100;
                v55 = v100;
                v53 = a1[16];
              }
              *(_QWORD *)(v55 + 8 * v53) = v54;
              ++a1[16];
              return 1;
            }
          }
          return 1;
        }
        if ( (unsigned __int16)v5 <= 0xDu )
        {
          if ( (unsigned __int16)(v5 - 4) <= 1u )
            goto LABEL_9;
          goto LABEL_27;
        }
        if ( (unsigned __int16)v5 > 0x14u )
        {
          if ( (unsigned __int16)(v5 - 53) > 1u )
            goto LABEL_27;
        }
        else if ( (unsigned __int16)v5 <= 0x10u )
        {
          goto LABEL_27;
        }
LABEL_71:
        if ( (*(_QWORD *)(a2 + 40) & 0xFFFF00000000FF00LL) == 0x1000000000B00LL )
          *((_BYTE *)a1 + 208) = 1;
        return 1;
      }
      if ( (_WORD)v5 != 118 )
      {
        if ( (_WORD)v5 != 125 )
          goto LABEL_27;
        if ( !*((_BYTE *)a1 + 169) )
        {
          v22 = *(_WORD *)(a2 + 46);
          if ( !v22 || v22 == 11 )
          {
            v23 = (char *)(a1 + 27);
            if ( v22 )
              v23 = (char *)(a1 + 32);
          }
          else
          {
            if ( v22 != 12 )
              return 1;
            v23 = (char *)(a1 + 37);
          }
          v24 = *v23;
          v25 = *((_QWORD *)v23 + 2);
          v26 = *(_QWORD *)(a2 + 16);
          *((_WORD *)v23 + 4) = 83;
          *v23 = v24 & 0xFC | 2;
          if ( v25 )
          {
            *((_QWORD *)v23 + 3) = 0;
            qfree(v25, (const char *)a2);
            v27 = 0;
            *((_QWORD *)v23 + 2) = 0;
            *((_QWORD *)v23 + 4) = 0;
          }
          else
          {
            v27 = *((_QWORD *)v23 + 4);
          }
          v28 = *((_QWORD *)v23 + 3);
          v29 = 0;
          if ( v27 < v28 + 1 )
          {
            v29 = qvector_reserve(v23 + 16, 0, v28 + 1, 8);
            v28 = *((_QWORD *)v23 + 3);
            *((_QWORD *)v23 + 2) = v29;
          }
          *(_QWORD *)(v29 + 8 * v28) = v26;
          ++*((_QWORD *)v23 + 3);
          *((_BYTE *)a1 + 169) = 1;
        }
        return 1;
      }
    }
    a2 = 4;
    v69 = getinf_flag(3, 4);
    v5 = *(unsigned __int16 *)(v6 + 24);
    if ( v69 )
    {
      if ( (_WORD)v5 == 118 )
        goto LABEL_27;
      v70 = 184;
      v71 = -28688;
      v72 = 13;
    }
    else
    {
      if ( (_WORD)v5 == 88 )
        goto LABEL_27;
      v70 = 206;
      v71 = -28680;
      v72 = 2;
    }
    if ( *(_WORD *)(v6 + 86) == v72 && *(_QWORD *)(v6 + 96) == v71 )
    {
      v155 = -1;
      v73 = v158;
      v156 = 0;
      v157 = 0;
      v154 = -1;
      do
      {
        *(_WORD *)v73 = 0;
        v73 += 5;
        *((_WORD *)v73 - 19) = 0;
        *((_WORD *)v73 - 18) = 0;
        *((_DWORD *)v73 - 2) = 0;
        *((_WORD *)v73 - 17) = 0;
        *((_OWORD *)v73 - 2) = 0;
        *(v73 - 2) = 0;
      }
      while ( v73 != v161 );
      a2 = *(_QWORD *)(v6 + 16) + *(unsigned __int16 *)(v6 + 26);
      if ( (unsigned int)decode_insn(&v154, a2, v161, 0.0)
        && (_WORD)v156 == v70
        && *(_WORD *)(v6 + 46) == v159
        && (v160 == 1 || v160 == *((_WORD *)a1 + 85)) )
      {
        sub_54430(a1 + 15, *(_QWORD *)(v6 + 16));
        a2 = v155;
        sub_54430(a1 + 15, v155);
      }
      v15 = *a1;
      v5 = *(unsigned __int16 *)(v6 + 24);
      goto LABEL_28;
    }
LABEL_27:
    v15 = *a1;
LABEL_28:
    v16 = *(_QWORD *)(v15 + 16);
    v17 = 0;
    v18 = *(_DWORD *)(v16 + 104);
    if ( v5 >= v18 && v5 < *(_DWORD *)(v16 + 108) )
      v17 = *(_DWORD *)(*(_QWORD *)(v16 + 112) + 16LL * (v5 - v18) + 8);
    v19 = dword_7A240;
    for ( i = (_WORD *)(v6 + 46); ; i += 20 )
    {
      if ( (*v19 & v17) != 0 && *((_BYTE *)i - 5) == 1 )
      {
        v30 = *i;
        if ( !*i || v30 == 11 )
        {
          v93 = a1 + 32;
          if ( !v30 )
            v93 = a1 + 27;
          v94 = v93;
        }
        else
        {
          if ( v30 != 12 )
          {
            v31 = *(_DWORD *)(*a1 + 288);
            if ( v30 == 2 && (unsigned int)(v31 - 5) > 1
              || (unsigned __int16)(v30 - 13) <= 0x12u
              || (unsigned __int16)(v30 - 49) <= 0x11u
              || (unsigned int)(v31 - 1) > 1
              && ((unsigned __int16)(v30 - 3) <= 7u || (unsigned __int16)(v30 - 36) <= 7u) )
            {
              a2 = a1[9];
              v32 = a1[10];
              v33 = (_WORD *)(a2 + 2 * v32);
              if ( (_WORD *)a2 == v33 )
                goto LABEL_67;
              v34 = (_WORD *)a1[9];
              while ( v30 != *v34 )
              {
                if ( v33 == ++v34 )
                  goto LABEL_67;
              }
              if ( v34 == v33 )
              {
LABEL_67:
                if ( a1[11] < (unsigned __int64)(v32 + 1) )
                {
                  v134 = qvector_reserve(a1 + 9, a2, v32 + 1, 2);
                  v135 = a1[10];
                  a1[9] = v134;
                  v33 = (_WORD *)(v134 + 2 * v135);
                }
                *v33 = v30;
                ++a1[10];
              }
            }
            goto LABEL_32;
          }
          v94 = a1 + 37;
        }
        v95 = v94[2];
        *(_BYTE *)v94 = 0;
        if ( v95 )
        {
          v94[3] = 0;
          qfree(v95, (const char *)a2);
          v94[2] = 0;
          v94[4] = 0;
        }
      }
LABEL_32:
      if ( &dword_7A240[2] == ++v19 )
        return 1;
    }
  }
  if ( (_WORD)v5 == 306 )
  {
    if ( !*((_BYTE *)a1 + 168) )
    {
      v61 = *(_WORD *)(a2 + 46);
      if ( !v61 || v61 == 11 )
      {
        v62 = (char *)(a1 + 27);
        if ( v61 )
          v62 = (char *)(a1 + 32);
      }
      else
      {
        if ( v61 != 12 )
          return 1;
        v62 = (char *)(a1 + 37);
      }
      v63 = *v62;
      v64 = *((_QWORD *)v62 + 2);
      v65 = *(_QWORD *)(a2 + 16);
      *((_WORD *)v62 + 4) = 280;
      *v62 = v63 & 0xFC | 2;
      if ( v64 )
      {
        *((_QWORD *)v62 + 3) = 0;
        qfree(v64, (const char *)a2);
        v66 = 0;
        *((_QWORD *)v62 + 2) = 0;
        *((_QWORD *)v62 + 4) = 0;
      }
      else
      {
        v66 = *((_QWORD *)v62 + 4);
      }
      v67 = *((_QWORD *)v62 + 3);
      v68 = 0;
      if ( v66 < v67 + 1 )
      {
        v68 = qvector_reserve(v62 + 16, 0, v67 + 1, 8);
        v67 = *((_QWORD *)v62 + 3);
        *((_QWORD *)v62 + 2) = v68;
      }
      *(_QWORD *)(v68 + 8 * v67) = v65;
      ++*((_QWORD *)v62 + 3);
      *((_BYTE *)a1 + 168) = 1;
      return 1;
    }
    return 1;
  }
  if ( (unsigned __int16)v5 <= 0x132u )
  {
    if ( (_WORD)v5 == 281 )
    {
      v15 = *a1;
      if ( *(_BYTE *)(a2 + 81) == 1 && *(_WORD *)(a2 + 86) == 1 )
      {
        v81 = *(unsigned __int16 *)(a2 + 46);
        a2 = (unsigned int)(*(_DWORD *)(v15 + 288) - 5);
        v82 = (unsigned int)a2 > 1;
        LOBYTE(a2) = (_WORD)v81 == 2;
        if ( (_WORD)v81 == 2 && v82
          || (a2 = (unsigned int)(v81 - 13), (unsigned __int16)(v81 - 13) <= 0x12u)
          || (a2 = (unsigned int)(v81 - 49), (unsigned __int16)(v81 - 49) <= 0x11u) )
        {
          *((_WORD *)a1 + 85) = v81;
          v5 = *(unsigned __int16 *)(v6 + 24);
        }
      }
      goto LABEL_28;
    }
    if ( (unsigned __int16)(v5 - 285) > 1u || a1[8] )
      goto LABEL_27;
    v83 = *(_WORD *)(a2 + 46);
    if ( v83 == 11 || !v83 )
    {
      v84 = (char *)(a1 + 32);
      if ( !v83 )
        v84 = (char *)(a1 + 27);
    }
    else
    {
      if ( v83 != 12 )
        goto LABEL_27;
      v84 = (char *)(a1 + 37);
    }
    v85 = *((_QWORD *)v84 + 2);
    *v84 = 0;
    if ( v85 )
    {
      *((_QWORD *)v84 + 3) = 0;
      qfree(v85, (const char *)a2);
      v86 = *v84;
      *((_QWORD *)v84 + 2) = 0;
      v87 = 0;
      *((_QWORD *)v84 + 4) = 0;
      v88 = v86 & 0xFC | 1;
    }
    else
    {
      v87 = *((_QWORD *)v84 + 4);
      v88 = 1;
    }
    v89 = *(_QWORD *)(a2 + 16);
    v90 = *(_QWORD *)(a2 + 88);
    if ( *(_WORD *)(a2 + 24) == 286 )
      v90 <<= 16;
    *((_QWORD *)v84 + 1) = v90;
    v91 = *((_QWORD *)v84 + 3);
    *v84 = v88;
    v92 = 0;
    if ( v87 < v91 + 1 )
    {
      v92 = qvector_reserve(v84 + 16, 0, v91 + 1, 8);
      v91 = *((_QWORD *)v84 + 3);
      *((_QWORD *)v84 + 2) = v92;
    }
    *(_QWORD *)(v92 + 8 * v91) = v89;
    ++*((_QWORD *)v84 + 3);
    return 1;
  }
  if ( (_WORD)v5 != 334 )
  {
    if ( (unsigned __int16)v5 <= 0x14Du )
      goto LABEL_27;
    if ( (unsigned __int16)v5 > 0x484u )
    {
      if ( (unsigned __int16)(v5 - 1160) > 5u )
        goto LABEL_27;
      goto LABEL_71;
    }
    if ( (unsigned __int16)v5 > 0x482u )
    {
LABEL_9:
      v7 = *(_WORD *)(a2 + 46);
      if ( v7 == 11 || !v7 )
      {
        v8 = (char *)(a1 + 27);
        if ( v7 )
          v8 = (char *)(a1 + 32);
LABEL_13:
        v9 = *(_BYTE *)(a2 + 81);
        if ( v9 == 1 )
        {
          if ( v7 == *(_WORD *)(a2 + 86) )
          {
            v10 = *v8;
            if ( (*v8 & 3) == 1 )
            {
              if ( *(_BYTE *)(a2 + 121) )
              {
                v11 = 2;
LABEL_18:
                v12 = *(_QWORD *)(a2 + 16);
                *((_QWORD *)v8 + 1) += *(int *)(a2 + 40 * v11 + 48);
                *v8 = v10 & 0xFC | 1;
LABEL_19:
                v13 = *((_QWORD *)v8 + 3);
                v14 = *((_QWORD *)v8 + 2);
                if ( *((_QWORD *)v8 + 4) < (unsigned __int64)(v13 + 1) )
                {
                  v136 = qvector_reserve(v8 + 16, v14, v13 + 1, 8);
                  *((_QWORD *)v8 + 2) = v136;
                  v14 = v136;
                  v13 = *((_QWORD *)v8 + 3);
                }
                *(_QWORD *)(v14 + 8 * v13) = v12;
                ++*((_QWORD *)v8 + 3);
                return 1;
              }
LABEL_17:
              v11 = 1;
              goto LABEL_18;
            }
          }
        }
        else if ( v9 == 5 && !*(_BYTE *)(a2 + 121) )
        {
          v10 = *v8;
          if ( (*v8 & 3) == 1 )
            goto LABEL_17;
        }
        return 1;
      }
      if ( v7 == 12 )
      {
        v8 = (char *)(a1 + 37);
        goto LABEL_13;
      }
      goto LABEL_27;
    }
    goto LABEL_27;
  }
  result = *((unsigned __int8 *)a1 + 208);
  if ( (_BYTE)result )
    return 0;
  if ( a1[25] == -1 && (*(_QWORD *)(a2 + 40) & 0xFFFF00000000FF00LL) == 0x1000000000B00LL )
  {
    a1[25] = *(_QWORD *)(a2 + 16);
    return 1;
  }
  return result;
}
