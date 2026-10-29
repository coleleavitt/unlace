__int64 __fastcall sub_65F0(__int64 a1, __int64 *a2, unsigned __int8 **a3, unsigned __int64 a4, int a5)
{
  __int64 v5; // r9
  int v6; // eax
  unsigned __int8 *v7; // rax
  int v11; // edx
  _DWORD *v12; // rsi
  unsigned __int8 *v13; // rax
  int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // r13d
  __int64 v17; // rsi
  unsigned int v18; // r13d
  void **v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // r14
  void *v25; // r13
  char v26; // al
  __int64 v28; // r12
  char *v29; // r13
  __int64 v30; // rbp
  __int64 v31; // r14
  __int64 v32; // rsi
  _QWORD *v33; // rbp
  char v34; // al
  char v35; // al
  __int64 v36; // rsi
  unsigned __int8 *v37; // rax
  int v38; // edx
  unsigned int v39; // r8d
  unsigned int v40; // r13d
  __int64 v41; // rsi
  __int64 v42; // rbp
  unsigned int v43; // r13d
  unsigned __int64 v44; // r14
  __int64 v45; // r15
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  unsigned __int64 v50; // r12
  void *v51; // rbp
  __int64 v52; // r9
  unsigned __int64 v53; // rax
  size_t v54; // r13
  __int64 v55; // r14
  unsigned __int64 v56; // r8
  unsigned __int64 v57; // r15
  __int64 v58; // rax
  __int64 v59; // r13
  size_t v60; // r14
  size_t v61; // r15
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rsi
  __int64 v67; // r13
  __int64 v68; // r8
  unsigned __int64 v69; // r14
  __int64 v70; // rsi
  _DWORD *v71; // r13
  unsigned __int8 *v72; // rax
  int v73; // edx
  unsigned int v74; // ecx
  int v75; // r14d
  __int64 v76; // rdx
  __int64 v77; // r13
  unsigned __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // rsi
  int v81; // r13d
  void *v82; // rsi
  char v83; // al
  __int64 v84; // rdx
  __int64 v85; // rcx
  unsigned __int64 v86; // rdx
  size_t v87; // r11
  __int64 v88; // r10
  size_t v89; // r8
  __int64 v90; // rsi
  __int64 v91; // r10
  __int64 v92; // r11
  unsigned __int64 v93; // rdx
  __int64 v94; // rsi
  char v95; // al
  unsigned __int64 v96; // rdx
  char *v97; // rbp
  char *v98; // r13
  unsigned int v99; // ecx
  __int64 v100; // rsi
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  size_t v108; // r15
  __int64 v109; // rbp
  __int64 v110; // r8
  unsigned __int64 v111; // r12
  __int64 v112; // rax
  __int64 v113; // rbp
  size_t v114; // r14
  size_t v115; // r12
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // rbp
  __int64 v121; // r14
  unsigned __int64 v122; // r12
  __int64 v123; // rsi
  __int64 v124; // rax
  size_t v125; // rbp
  __int64 v126; // r12
  __int64 v127; // r15
  unsigned __int64 v128; // r14
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rbp
  __int64 v132; // r13
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // [rsp+0h] [rbp-C8h]
  __int64 v141; // [rsp+0h] [rbp-C8h]
  __int64 v142; // [rsp+0h] [rbp-C8h]
  __int64 v143; // [rsp+0h] [rbp-C8h]
  __int64 v144; // [rsp+0h] [rbp-C8h]
  __int64 v145; // [rsp+0h] [rbp-C8h]
  __int64 v146; // [rsp+0h] [rbp-C8h]
  __int64 v147; // [rsp+0h] [rbp-C8h]
  __int64 v148; // [rsp+0h] [rbp-C8h]
  __int64 v149; // [rsp+0h] [rbp-C8h]
  __int64 v150; // [rsp+0h] [rbp-C8h]
  __int64 v151; // [rsp+0h] [rbp-C8h]
  __int64 v152; // [rsp+0h] [rbp-C8h]
  __int64 v153; // [rsp+0h] [rbp-C8h]
  __int64 v154; // [rsp+0h] [rbp-C8h]
  __int64 v155; // [rsp+0h] [rbp-C8h]
  __int64 v156; // [rsp+0h] [rbp-C8h]
  __int64 v157; // [rsp+0h] [rbp-C8h]
  __int64 v158; // [rsp+0h] [rbp-C8h]
  __int64 v159; // [rsp+0h] [rbp-C8h]
  __int64 v160; // [rsp+0h] [rbp-C8h]
  __int64 v161; // [rsp+0h] [rbp-C8h]
  __int64 v162; // [rsp+0h] [rbp-C8h]
  __int64 v163; // [rsp+0h] [rbp-C8h]
  __int64 v164; // [rsp+0h] [rbp-C8h]
  __int64 v165; // [rsp+0h] [rbp-C8h]
  __int64 v166; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v167; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v168; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v169; // [rsp+0h] [rbp-C8h]
  __int64 v170; // [rsp+0h] [rbp-C8h]
  __int64 v171; // [rsp+0h] [rbp-C8h]
  __int64 v172; // [rsp+0h] [rbp-C8h]
  __int64 v173; // [rsp+0h] [rbp-C8h]
  __int64 v174; // [rsp+8h] [rbp-C0h]
  __int64 v175; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v176; // [rsp+8h] [rbp-C0h]
  __int64 v177; // [rsp+8h] [rbp-C0h]
  __int64 v178; // [rsp+10h] [rbp-B8h]
  __int64 v179; // [rsp+10h] [rbp-B8h]
  __int64 v180; // [rsp+10h] [rbp-B8h]
  __int64 v181; // [rsp+18h] [rbp-B0h]
  size_t v182; // [rsp+18h] [rbp-B0h]
  __int64 v183; // [rsp+20h] [rbp-A8h]
  __int64 v184; // [rsp+20h] [rbp-A8h]
  size_t v185; // [rsp+28h] [rbp-A0h]
  void *v186; // [rsp+30h] [rbp-98h] BYREF
  __int64 v187; // [rsp+38h] [rbp-90h]
  void *src; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v189; // [rsp+58h] [rbp-70h]
  void *v190; // [rsp+70h] [rbp-58h] BYREF
  __int128 v191; // [rsp+78h] [rbp-50h]
  unsigned __int64 v192; // [rsp+88h] [rbp-40h]

  v192 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 616);
  v6 = *(_DWORD *)(v5 + 10392) + 1;
  *(_DWORD *)(v5 + 10392) = v6;
  if ( v6 <= 1024 )
  {
    v7 = *a3;
    if ( (unsigned __int64)*a3 < a4 )
    {
      *a3 = v7 + 1;
      v11 = *v7;
      switch ( (char)v11 )
      {
        case 1:
          v28 = 4;
          v29 = "void";
          goto LABEL_21;
        case 2:
          v28 = 4;
          v29 = "bool";
          goto LABEL_21;
        case 3:
          v28 = 4;
          v29 = "char";
          goto LABEL_21;
        case 4:
          v28 = 4;
          v29 = "int8";
          goto LABEL_21;
        case 5:
          v28 = 13;
          v29 = "unsigned int8";
          goto LABEL_21;
        case 6:
          v28 = 5;
          v29 = "int16";
          goto LABEL_21;
        case 7:
          v28 = 14;
          v29 = "unsigned int16";
          goto LABEL_21;
        case 8:
          v28 = 5;
          v29 = "int32";
          goto LABEL_21;
        case 9:
          v28 = 14;
          v29 = "unsigned int32";
          goto LABEL_21;
        case 10:
          v28 = 5;
          v29 = "int64";
          goto LABEL_21;
        case 11:
          v28 = 14;
          v29 = "unsigned int64";
          goto LABEL_21;
        case 12:
          v28 = 7;
          v29 = "float32";
          goto LABEL_21;
        case 13:
          v28 = 7;
          v29 = "float64";
          goto LABEL_21;
        case 14:
          v28 = 6;
          v29 = "string";
          goto LABEL_21;
        case 15:
          v142 = v5;
          v28 = 1;
          v34 = sub_65F0(a1, (_DWORD)a2, (_DWORD)a3, a4, a5, v5);
          v29 = "*";
          v5 = v142;
          if ( !v34 )
            return 0;
          goto LABEL_21;
        case 16:
          v143 = v5;
          v28 = 1;
          v35 = sub_65F0(a1, (_DWORD)a2, (_DWORD)a3, a4, a5, v5);
          v29 = "&";
          v5 = v143;
          if ( !v35 )
            return 0;
          goto LABEL_21;
        case 17:
          v36 = *a2;
          if ( (unsigned __int64)a2[2] <= 9 )
          {
            v156 = v5;
            v102 = qvector_reserve(a2, v36, 10, 1);
            v5 = v156;
            *a2 = v102;
            v36 = v102;
          }
          a2[1] = 10;
          *(_QWORD *)v36 = 0x70797465756C6176LL;
          *(_BYTE *)(v36 + 8) = 101;
          *(_BYTE *)(*a2 + 9) = 0;
          goto LABEL_50;
        case 18:
          v66 = *a2;
          if ( (unsigned __int64)a2[2] <= 5 )
          {
            v158 = v5;
            v104 = qvector_reserve(a2, v66, 6, 1);
            v5 = v158;
            *a2 = v104;
            v66 = v104;
          }
          a2[1] = 6;
          *(_DWORD *)v66 = 1935764579;
          *(_BYTE *)(v66 + 4) = 115;
          *(_BYTE *)(*a2 + 5) = 0;
LABEL_50:
          v37 = *a3;
          if ( (unsigned __int64)*a3 >= a4 )
            return 0;
          v38 = *v37;
          v39 = a4 - (_DWORD)v37;
          if ( (v38 & 0x80u) != 0 )
          {
            if ( (v38 & 0xC0) == 0x80 )
            {
              if ( v39 <= 1 )
                return 0;
              v41 = 2;
              v40 = v37[1] | ((_WORD)v38 << 8) & 0x3F00;
            }
            else
            {
              if ( (v38 & 0xE0) != 0xC0 || v39 <= 3 )
                return 0;
              v41 = 4;
              v40 = (v38 << 24) & 0x1F000000 | v37[3] | (v37[2] << 8) | (v37[1] << 16);
            }
          }
          else
          {
            if ( !v39 )
              return 0;
            v40 = (unsigned __int8)v38;
            v41 = 1;
          }
          *a3 = &v37[v41];
          v42 = a2[1];
          v43 = dword_15590[v40 & 3] | (v40 >> 2);
          if ( v42 )
          {
            v44 = v42 + 1;
            v45 = a2[1];
            --v42;
          }
          else
          {
            v44 = 2;
            v45 = 1;
          }
          v46 = *a2;
          if ( a2[2] < v44 )
          {
            v160 = v5;
            v106 = qvector_reserve(a2, v46, v44, 1);
            v5 = v160;
            *a2 = v106;
            v46 = v106;
          }
          a2[1] = v44;
          *(_BYTE *)(v46 + v45) = 0;
          *(_BYTE *)(*a2 + v42) = 32;
          v144 = v5;
          sub_7AB0(&src, a1, v43);
          sub_7A10(&v190, a1, v43);
          v50 = v191;
          v51 = v190;
          v52 = v144;
          if ( (unsigned __int64)v191 > 1 )
          {
            if ( v189 )
            {
              v53 = v189 - 1;
              v54 = v189 - 1;
              if ( v189 != 1 )
              {
                v55 = (a2[1] == 0) + a2[1] - 1;
                v56 = v53 + v55;
                v57 = v53 + (a2[1] == 0) + a2[1];
                if ( a2[2] < v57 )
                {
                  v176 = v53 + v55;
                  v138 = qvector_reserve(a2, *a2, v53 + (a2[1] == 0) + a2[1], 1);
                  v56 = v176;
                  v52 = v144;
                  *a2 = v138;
                }
                v58 = *a2;
                a2[1] = v57;
                v145 = v52;
                *(_BYTE *)(v58 + v56) = 0;
                memcpy((void *)(v55 + *a2), src, v54);
                v52 = v145;
              }
            }
            v59 = a2[1];
            v60 = v50 - 1;
            v61 = v50 - 1;
            if ( v59 )
            {
              v61 = --v59 + v60;
              v50 += v59;
            }
            if ( a2[2] < v50 )
            {
              v171 = v52;
              *a2 = qvector_reserve(a2, *a2, v50, 1);
              v52 = v171;
            }
            v62 = *a2;
            a2[1] = v50;
            v146 = v52;
            *(_BYTE *)(v62 + v61) = 0;
            memcpy((void *)(v59 + *a2), v51, v60);
            v5 = v146;
            if ( v51 )
            {
              qfree(v51, v51, v63, v64, v65, v146);
              v5 = v146;
            }
            if ( src )
            {
              v147 = v5;
              v189 = 0;
              qfree(src, v51, v63, v64, v65, v5);
              v5 = v147;
            }
            goto LABEL_29;
          }
          if ( v190 )
            qfree(v190, a1, v47, v48, v49, v144);
          if ( src )
          {
            v189 = 0;
            qfree(src, a1, v47, v48, v49, v52);
          }
          return 0;
        case 19:
          v28 = 7;
          v29 = "var<u1>";
          goto LABEL_21;
        case 20:
          v154 = v5;
          v95 = sub_5E40(a1, a2, a3, a4, a5, v5);
          v5 = v154;
          if ( !v95 )
            return 0;
          goto LABEL_29;
        case 21:
          v150 = v5;
          if ( !(unsigned __int8)sub_65F0(a1, (_DWORD)a2, (_DWORD)a3, a4, a5, v5) )
            return 0;
          v72 = *a3;
          if ( (unsigned __int64)*a3 >= a4 )
            return 0;
          v73 = *v72;
          v5 = v150;
          v74 = a4 - (_DWORD)v72;
          if ( (v73 & 0x80u) != 0 )
          {
            if ( (v73 & 0xC0) == 0x80 )
            {
              if ( v74 <= 1 )
                return 0;
              v75 = ((_WORD)v73 << 8) & 0x3F00 | v72[1];
              v76 = 2;
            }
            else
            {
              if ( (v73 & 0xE0) != 0xC0 || v74 <= 3 )
                return 0;
              v75 = (v73 << 24) & 0x1F000000 | v72[3] | (v72[2] << 8) | (v72[1] << 16);
              v76 = 4;
            }
          }
          else
          {
            if ( !v74 )
              return 0;
            v75 = (unsigned __int8)v73;
            v76 = 1;
          }
          *a3 = &v72[v76];
          v77 = a2[1];
          if ( v77 )
          {
            v78 = v77 + 1;
            v79 = a2[1];
            --v77;
          }
          else
          {
            v78 = 2;
            v79 = 1;
          }
          v80 = *a2;
          if ( a2[2] < v78 )
          {
            v179 = v79;
            v175 = v150;
            v168 = v78;
            v135 = qvector_reserve(a2, v80, v78, 1);
            v79 = v179;
            v5 = v175;
            *a2 = v135;
            v78 = v168;
            v80 = v135;
          }
          a2[1] = v78;
          *(_BYTE *)(v80 + v79) = 0;
          *(_BYTE *)(*a2 + v77) = 60;
          v81 = 0;
          if ( !v75 )
            goto LABEL_164;
          while ( 2 )
          {
            v82 = &v190;
            v151 = v5;
            v190 = nullptr;
            v191 = 0;
            v83 = sub_65F0(a1, (unsigned int)&v190, (_DWORD)a3, a4, v79, v5);
            v5 = v151;
            if ( !v83 )
            {
              if ( v190 )
              {
                *(_QWORD *)&v191 = 0;
                qfree(v190, &v190, v84, v85, 0, v151);
              }
              return 0;
            }
            v86 = v191;
            if ( (_QWORD)v191 )
            {
              v87 = v191 - 1;
              if ( (_QWORD)v191 != 1 )
              {
                v88 = a2[1];
                v89 = v191 - 1;
                if ( v88 )
                {
                  --v88;
                  v89 = v87 + v88;
                  v86 = v191 + v88;
                }
                v90 = *a2;
                if ( a2[2] < v86 )
                {
                  v185 = v89;
                  v184 = v88;
                  v182 = v191 - 1;
                  v180 = v151;
                  v169 = v86;
                  v136 = qvector_reserve(a2, v90, v86, 1);
                  v89 = v185;
                  v88 = v184;
                  *a2 = v136;
                  v90 = v136;
                  v87 = v182;
                  v5 = v180;
                  v86 = v169;
                }
                a2[1] = v86;
                *(_BYTE *)(v90 + v89) = 0;
                v82 = v190;
                v152 = v5;
                memcpy((void *)(v88 + *a2), v190, v87);
                v5 = v152;
              }
            }
            if ( v190 )
            {
              v153 = v5;
              *(_QWORD *)&v191 = 0;
              qfree(v190, v82, v86, v85, v79, v5);
              v5 = v153;
            }
            if ( ++v81 != v75 )
            {
              v91 = a2[1];
              if ( v91 )
              {
                v92 = v91 + 1;
                v93 = v91 + 2;
                --v91;
              }
              else
              {
                v93 = 3;
                v92 = 2;
              }
              v94 = *a2;
              if ( a2[2] < v93 )
              {
                v183 = v91;
                v181 = v92;
                v178 = v5;
                v167 = v93;
                v130 = qvector_reserve(a2, v94, v93, 1);
                v91 = v183;
                v92 = v181;
                v5 = v178;
                v93 = v167;
                *a2 = v130;
                v94 = v130;
              }
              a2[1] = v93;
              *(_BYTE *)(v94 + v92) = 0;
              *(_WORD *)(*a2 + v91) = 8236;
              continue;
            }
            break;
          }
LABEL_164:
          v131 = a2[1];
          v132 = 1;
          if ( v131 )
          {
            v132 = a2[1];
            --v131;
          }
          if ( a2[2] < (unsigned __int64)(v131 + 2) )
          {
            v170 = v5;
            v137 = qvector_reserve(a2, *a2, v131 + 2, 1);
            v5 = v170;
            *a2 = v137;
          }
          v133 = *a2;
          a2[1] = v131 + 2;
          *(_BYTE *)(v133 + v132) = 0;
          *(_BYTE *)(*a2 + v131) = 62;
          goto LABEL_29;
        case 22:
          v28 = 10;
          v29 = "typedbyref";
          goto LABEL_21;
        case 24:
          v28 = 10;
          v29 = "native int";
          goto LABEL_21;
        case 25:
          v28 = 19;
          v29 = "native unsigned int";
          goto LABEL_21;
        case 27:
          v148 = v5;
          sub_CBC0(a1, a2, a3, a4);
          v5 = v148;
          goto LABEL_29;
        case 28:
          v28 = 6;
          v29 = "object";
          goto LABEL_21;
        case 29:
          v149 = v5;
          v28 = 2;
          sub_65F0(a1, (_DWORD)a2, (_DWORD)a3, a4, a5, v5);
          v29 = "[]";
          v5 = v149;
          goto LABEL_21;
        case 30:
          v28 = 8;
          v29 = "mvar<u1>";
          goto LABEL_21;
        case 31:
          v12 = (_DWORD *)*a2;
          if ( (unsigned __int64)a2[2] <= 7 )
          {
            v159 = v5;
            v105 = qvector_reserve(a2, v12, 8, 1);
            v5 = v159;
            *a2 = v105;
            v12 = (_DWORD *)v105;
          }
          a2[1] = 8;
          *v12 = 1919184749;
          *(_DWORD *)((char *)v12 + 3) = 678520178;
          *(_BYTE *)(*a2 + 7) = 0;
          goto LABEL_7;
        case 32:
          v67 = a2[1];
          if ( v67 )
          {
            v68 = v67 + 6;
            v69 = v67 + 7;
            --v67;
          }
          else
          {
            v69 = 8;
            v68 = 7;
          }
          v70 = *a2;
          if ( a2[2] < v69 )
          {
            v174 = v68;
            v157 = v5;
            v103 = qvector_reserve(a2, v70, v69, 1);
            v68 = v174;
            v5 = v157;
            *a2 = v103;
            v70 = v103;
          }
          a2[1] = v69;
          *(_BYTE *)(v70 + v68) = 0;
          v71 = (_DWORD *)(*a2 + v67);
          *v71 = 1868853101;
          *(_DWORD *)((char *)v71 + 3) = 678719599;
LABEL_7:
          v13 = *a3;
          if ( (unsigned __int64)*a3 >= a4 )
            return 0;
          v14 = *v13;
          v15 = a4 - (_DWORD)v13;
          if ( (v14 & 0x80u) != 0 )
          {
            if ( (v14 & 0xC0) == 0x80 )
            {
              if ( v15 <= 1 )
                return 0;
              v17 = 2;
              v16 = v13[1] | ((_WORD)v14 << 8) & 0x3F00;
            }
            else
            {
              if ( (v14 & 0xE0) != 0xC0 || v15 <= 3 )
                return 0;
              v17 = 4;
              v16 = (v14 << 24) & 0x1F000000 | v13[3] | (v13[2] << 8) | (v13[1] << 16);
            }
          }
          else
          {
            if ( !v15 )
              return 0;
            v16 = (unsigned __int8)v14;
            v17 = 1;
          }
          *a3 = &v13[v17];
          v18 = dword_15590[v16 & 3] | (v16 >> 2);
          v140 = v5;
          sub_7AB0(&v186, a1, v18);
          v19 = (void **)a1;
          sub_7A10(&src, a1, v18);
          v24 = v189;
          v25 = src;
          if ( v189 <= 1 )
            goto LABEL_15;
          v19 = &v190;
          v191 = 0;
          v190 = nullptr;
          v26 = sub_65F0(a1, (unsigned int)&v190, (_DWORD)a3, a4, v22, v23);
          v23 = v140;
          if ( v26 )
          {
            if ( v187 )
            {
              v107 = v187 - 1;
              v108 = v187 - 1;
              if ( v187 != 1 )
              {
                v109 = (a2[1] == 0) + a2[1] - 1;
                v110 = v107 + v109;
                v111 = v107 + (a2[1] == 0) + a2[1];
                if ( a2[2] < v111 )
                {
                  v177 = v107 + v109;
                  v139 = qvector_reserve(a2, *a2, v107 + (a2[1] == 0) + a2[1], 1);
                  v110 = v177;
                  v23 = v140;
                  *a2 = v139;
                }
                v112 = *a2;
                a2[1] = v111;
                v161 = v23;
                *(_BYTE *)(v112 + v110) = 0;
                memcpy((void *)(v109 + *a2), v186, v108);
                v23 = v161;
              }
            }
            v113 = (a2[1] == 0) + a2[1] - 1;
            v114 = v24 - 1;
            v115 = (a2[1] == 0) + a2[1] + v114;
            if ( a2[2] < v115 )
            {
              v172 = v23;
              *a2 = qvector_reserve(a2, *a2, (a2[1] == 0) + a2[1] + v114, 1);
              v23 = v172;
            }
            v116 = *a2;
            a2[1] = v115;
            v162 = v23;
            *(_BYTE *)(v116 + v113 + v114) = 0;
            memcpy((void *)(v113 + *a2), v25, v114);
            v120 = a2[1];
            v5 = v162;
            if ( v120 )
            {
              v121 = v120 + 1;
              v122 = v120 + 2;
              --v120;
            }
            else
            {
              v122 = 3;
              v121 = 2;
            }
            v123 = *a2;
            if ( a2[2] < v122 )
            {
              v134 = qvector_reserve(a2, v123, v122, 1);
              *a2 = v134;
              v5 = v162;
              v123 = v134;
            }
            a2[1] = v122;
            *(_BYTE *)(v123 + v121) = 0;
            *(_WORD *)(*a2 + v120) = 8233;
            if ( (_QWORD)v191 )
            {
              v124 = v191 - 1;
              v125 = v191 - 1;
              if ( (_QWORD)v191 != 1 )
              {
                v126 = (a2[1] == 0) + a2[1] - 1;
                v127 = v124 + v126;
                v128 = v124 + (a2[1] == 0) + a2[1];
                if ( a2[2] < v128 )
                {
                  v173 = v5;
                  *a2 = qvector_reserve(a2, *a2, v124 + (a2[1] == 0) + a2[1], 1);
                  v5 = v173;
                }
                v129 = *a2;
                a2[1] = v128;
                v163 = v5;
                *(_BYTE *)(v129 + v127) = 0;
                v123 = (__int64)v190;
                memcpy((void *)(v126 + *a2), v190, v125);
                v5 = v163;
              }
            }
            if ( v190 )
            {
              v164 = v5;
              *(_QWORD *)&v191 = 0;
              qfree(v190, v123, v117, v118, v119, v5);
              v5 = v164;
            }
            if ( v25 )
            {
              v165 = v5;
              qfree(v25, v123, v117, v118, v119, v5);
              v5 = v165;
            }
            if ( v186 )
            {
              v166 = v5;
              v187 = 0;
              qfree(v186, v123, v117, v118, v119, v5);
              v5 = v166;
            }
LABEL_29:
            --*(_DWORD *)(v5 + 10392);
            return 1;
          }
          if ( v190 )
          {
            *(_QWORD *)&v191 = 0;
            qfree(v190, &v190, v20, v21, v22, v140);
          }
LABEL_15:
          if ( v25 )
            qfree(v25, v19, v20, v21, v22, v23);
          if ( v186 )
          {
            v187 = 0;
            qfree(v186, v19, v20, v21, v22, v23);
          }
          break;
        case 33:
          v28 = 10;
          v29 = "<internal>";
LABEL_21:
          v30 = a2[1];
          v31 = v28;
          if ( v30 )
            v31 = --v30 + v28;
          v32 = *a2;
          if ( a2[2] < (unsigned __int64)(v31 + 1) )
          {
            v155 = v5;
            v101 = qvector_reserve(a2, v32, v31 + 1, 1);
            v5 = v155;
            *a2 = v101;
            v32 = v101;
          }
          a2[1] = v31 + 1;
          *(_BYTE *)(v32 + v31) = 0;
          v33 = (_QWORD *)(*a2 + v30);
          if ( (unsigned int)v28 >= 8 )
          {
            v96 = (unsigned __int64)(v33 + 1) & 0xFFFFFFFFFFFFFFF8LL;
            *v33 = *(_QWORD *)v29;
            *(_QWORD *)((char *)v33 + v28 - 8) = *(_QWORD *)&v29[v28 - 8];
            v97 = (char *)v33 - v96;
            v98 = (char *)(v29 - v97);
            if ( (((_DWORD)v28 + (_DWORD)v97) & 0xFFFFFFF8) >= 8 )
            {
              v99 = 0;
              do
              {
                v100 = v99;
                v99 += 8;
                *(_QWORD *)(v96 + v100) = *(_QWORD *)&v98[v100];
              }
              while ( v99 < (((_DWORD)v28 + (_DWORD)v97) & 0xFFFFFFF8) );
            }
          }
          else if ( (v28 & 4) != 0 )
          {
            *(_DWORD *)v33 = *(_DWORD *)v29;
            *(_DWORD *)((char *)v33 + (unsigned int)v28 - 4) = *(_DWORD *)&v29[(unsigned int)v28 - 4];
          }
          else
          {
            *(_BYTE *)v33 = *v29;
            if ( (v28 & 2) != 0 )
              *(_WORD *)((char *)v33 + v28 - 2) = *(_WORD *)&v29[v28 - 2];
          }
          goto LABEL_29;
        default:
          v141 = v5;
          sub_5C00(a2, (__int64)"!!T%X", v11);
          v5 = v141;
          goto LABEL_29;
      }
    }
  }
  return 0;
}

