__int64 __fastcall sub_9490(__int64 a1, __int64 *a2, int a3, unsigned int a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  float **v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  char *v10; // r8
  __int64 v11; // r9
  float *v12; // r12
  int v13; // r13d
  __int64 v14; // rbp
  __int64 v15; // r15
  unsigned __int64 v16; // r14
  __int64 v17; // rsi
  double v18; // rsi
  __int64 v19; // rdx
  unsigned __int64 v20; // rbp
  size_t v21; // r13
  __int64 v22; // r12
  size_t v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rbp
  __int64 v26; // r13
  unsigned __int64 v27; // r12
  __int64 v29; // rbp
  __int64 v30; // r13
  unsigned __int64 v31; // r12
  _DWORD *v32; // rbp
  __int64 v33; // r14
  __int64 v34; // rbp
  __int64 v35; // r15
  __int64 v36; // rdx
  _DWORD *v37; // rbp
  __int64 v38; // r14
  char v39; // r12
  __int64 v40; // rbp
  unsigned __int64 v41; // r13
  __int64 v42; // r15
  __int64 v43; // rsi
  int v44; // ecx
  size_t v45; // rax
  __int64 v46; // rbp
  size_t v47; // r12
  size_t v48; // r14
  __int64 v49; // rsi
  __int64 v50; // rbp
  unsigned __int64 v51; // r12
  __int64 v52; // r13
  void *v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  unsigned __int64 v58; // rbp
  size_t v59; // r14
  __int64 v60; // r13
  size_t v61; // r15
  __int64 v62; // rsi
  void *v63; // rdi
  __int64 v64; // rax
  void *v65; // rsi
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  unsigned __int64 v70; // rbp
  size_t v71; // r14
  __int64 v72; // r13
  size_t v73; // r15
  __int64 v74; // rsi
  void *v75; // rdi
  unsigned __int64 v76; // rbp
  size_t v77; // r14
  __int64 v78; // r13
  size_t v79; // r15
  __int64 v80; // rsi
  double v81; // xmm0_8
  void *p_src; // rsi
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  unsigned __int64 v87; // rbp
  size_t v88; // r14
  __int64 v89; // r13
  size_t v90; // r15
  __int64 v91; // rsi
  void *v92; // rdi
  unsigned __int64 v93; // rbp
  size_t v94; // r14
  __int64 v95; // r13
  size_t v96; // r15
  __int64 v97; // rsi
  unsigned __int64 v98; // rbp
  size_t v99; // r14
  __int64 v100; // r13
  size_t v101; // r15
  __int64 v102; // rsi
  __int64 v103; // rbp
  unsigned __int64 v104; // r13
  __int64 v105; // r14
  __int64 v106; // rsi
  __int64 v107; // r13
  char *v108; // r14
  __int64 v109; // rbp
  __int64 v110; // r12
  __int64 v111; // rsi
  _DWORD *v112; // rbp
  __int64 v113; // rbp
  unsigned __int64 v114; // r12
  __int64 v115; // r13
  __int64 v116; // rax
  unsigned __int64 v117; // rbp
  size_t v118; // r14
  __int64 v119; // r13
  size_t v120; // r15
  __int64 v121; // rsi
  void *v122; // rsi
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  unsigned __int64 v127; // rbp
  size_t v128; // r14
  __int64 v129; // r13
  size_t v130; // r15
  __int64 v131; // rsi
  void *v132; // rdi
  unsigned __int64 v133; // rbp
  size_t v134; // r14
  __int64 v135; // r13
  size_t v136; // r15
  __int64 v137; // rsi
  __int64 v138; // rax
  __int64 v139; // rax
  unsigned __int64 v140; // rbp
  size_t v141; // r13
  __int64 v142; // r12
  size_t v143; // r14
  __int64 v144; // rsi
  __int64 v145; // rbp
  unsigned __int64 v146; // r12
  __int64 v147; // rsi
  size_t v148; // rax
  __int64 v149; // rbp
  size_t v150; // r12
  size_t v151; // r14
  __int64 v152; // rsi
  size_t v153; // rdx
  unsigned __int64 v154; // r12
  __int64 v155; // rbp
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rax
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rax
  char *v176; // [rsp+8h] [rbp-108h]
  int v177; // [rsp+14h] [rbp-FCh] BYREF
  unsigned __int8 *v178; // [rsp+20h] [rbp-F0h] BYREF
  float *v179; // [rsp+28h] [rbp-E8h] BYREF
  __int128 v180; // [rsp+30h] [rbp-E0h]
  double v181; // [rsp+48h] [rbp-C8h] BYREF
  __int128 v182; // [rsp+50h] [rbp-C0h]
  void *src; // [rsp+68h] [rbp-A8h] BYREF
  __int128 v184; // [rsp+70h] [rbp-A0h]
  char s[72]; // [rsp+88h] [rbp-88h] BYREF
  unsigned __int64 v186; // [rsp+D0h] [rbp-40h]

  v177 = a3;
  v186 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 616);
  v178 = (unsigned __int8 *)&v177;
  v179 = nullptr;
  v180 = 0;
  v6 = netnode_altval(*(_QWORD *)(v5 + 144), a4, 99);
  v7 = &v179;
  v8 = netnode_qgetblob(v6, &v179, 1, 0, 99);
  v12 = v179;
  if ( v8 > 0 )
  {
    v13 = v180;
    switch ( v177 )
    {
      case 2:
        v7 = (float **)a2;
        if ( !(unsigned __int8)sub_65F0(a1, a2, &v178, (unsigned __int64)(v178 + 4), (int)v10) )
          goto LABEL_27;
        v103 = a2[1];
        if ( v103 )
        {
          v104 = v103 + 1;
          v105 = a2[1];
          --v103;
        }
        else
        {
          v104 = 2;
          v105 = 1;
        }
        v106 = *a2;
        if ( a2[2] < v104 )
        {
          v164 = qvector_reserve(a2, v106, v104, 1);
          *a2 = v164;
          v106 = v164;
        }
        a2[1] = v104;
        v107 = 4;
        *(_BYTE *)(v106 + v105) = 0;
        v108 = "true";
        *(_BYTE *)(*a2 + v103) = 40;
        if ( !*(_BYTE *)v12 )
        {
          v107 = 5;
          v108 = "false";
        }
        v109 = a2[1];
        v110 = v107;
        if ( v109 )
          v110 = --v109 + v107;
        v111 = *a2;
        if ( a2[2] < (unsigned __int64)(v110 + 1) )
        {
          v163 = qvector_reserve(a2, v111, v110 + 1, 1);
          *a2 = v163;
          v111 = v163;
        }
        a2[1] = v110 + 1;
        *(_BYTE *)(v111 + v110) = 0;
        v112 = (_DWORD *)(*a2 + v109);
        *v112 = *(_DWORD *)v108;
        v8 = *(unsigned int *)&v108[(unsigned int)v107 - 4];
        *(_DWORD *)((char *)v112 + (unsigned int)v107 - 4) = v8;
        v7 = (float **)*a2;
        v113 = a2[1];
        if ( v113 )
        {
          v114 = v113 + 1;
          v115 = a2[1];
          --v113;
        }
        else
        {
          v114 = 2;
          v115 = 1;
        }
        v116 = *a2;
        if ( a2[2] < v114 )
        {
          v116 = qvector_reserve(a2, v7, v114, 1);
          *a2 = v116;
        }
        a2[1] = v114;
        *(_BYTE *)(v116 + v115) = 0;
        *(_BYTE *)(*a2 + v113) = 41;
        v12 = v179;
        goto LABEL_28;
      case 3:
        p_src = &src;
        v184 = 0;
        src = nullptr;
        sub_65F0(a1, (__int64 *)&src, &v178, (unsigned __int64)(v178 + 4), (int)v10);
        v98 = v184;
        if ( (_QWORD)v184 )
        {
          v99 = v184 - 1;
          if ( (_QWORD)v184 != 1 )
          {
            v100 = a2[1];
            v101 = v184 - 1;
            if ( v100 )
            {
              --v100;
              v101 = v99 + v100;
              v98 = v184 + v100;
            }
            v102 = *a2;
            if ( a2[2] < v98 )
            {
              v172 = qvector_reserve(a2, v102, v98, 1);
              *a2 = v172;
              v102 = v172;
            }
            a2[1] = v98;
            *(_BYTE *)(v102 + v101) = 0;
            p_src = src;
            memcpy((void *)(v100 + *a2), src, v99);
          }
        }
        v92 = src;
        LODWORD(v38) = *(unsigned __int8 *)v12;
        if ( src )
          goto LABEL_108;
        goto LABEL_109;
      case 4:
        p_src = &src;
        v184 = 0;
        src = nullptr;
        sub_65F0(a1, (__int64 *)&src, &v178, (unsigned __int64)(v178 + 4), (int)v10);
        v93 = v184;
        if ( (_QWORD)v184 )
        {
          v94 = v184 - 1;
          if ( (_QWORD)v184 != 1 )
          {
            v95 = a2[1];
            v96 = v184 - 1;
            if ( v95 )
            {
              --v95;
              v96 = v94 + v95;
              v93 = v184 + v95;
            }
            v97 = *a2;
            if ( a2[2] < v93 )
            {
              v165 = qvector_reserve(a2, v97, v93, 1);
              *a2 = v165;
              v97 = v165;
            }
            a2[1] = v93;
            *(_BYTE *)(v97 + v96) = 0;
            p_src = src;
            memcpy((void *)(v95 + *a2), src, v94);
          }
        }
        v92 = src;
        LODWORD(v38) = *(unsigned __int8 *)v12;
        if ( src )
          goto LABEL_108;
        goto LABEL_109;
      case 5:
        p_src = &src;
        v184 = 0;
        src = nullptr;
        sub_65F0(a1, (__int64 *)&src, &v178, (unsigned __int64)(v178 + 4), (int)v10);
        v87 = v184;
        if ( (_QWORD)v184 )
        {
          v88 = v184 - 1;
          if ( (_QWORD)v184 != 1 )
          {
            v89 = a2[1];
            v90 = v184 - 1;
            if ( v89 )
            {
              --v89;
              v90 = v88 + v89;
              v87 = v184 + v89;
            }
            v91 = *a2;
            if ( a2[2] < v87 )
            {
              v171 = qvector_reserve(a2, v91, v87, 1);
              *a2 = v171;
              v91 = v171;
            }
            a2[1] = v87;
            *(_BYTE *)(v91 + v90) = 0;
            p_src = src;
            memcpy((void *)(v89 + *a2), src, v88);
          }
        }
        v92 = src;
        LODWORD(v38) = *(unsigned __int8 *)v12;
        if ( src )
        {
LABEL_108:
          *(_QWORD *)&v184 = 0;
          qfree(v92, p_src, v83, v84, v85, v86);
        }
        goto LABEL_109;
      case 6:
        v65 = &src;
        v184 = 0;
        src = nullptr;
        sub_65F0(a1, (__int64 *)&src, &v178, (unsigned __int64)(v178 + 4), (int)v10);
        v76 = v184;
        if ( (_QWORD)v184 )
        {
          v77 = v184 - 1;
          if ( (_QWORD)v184 != 1 )
          {
            v78 = a2[1];
            v79 = v184 - 1;
            if ( v78 )
            {
              --v78;
              v79 = v77 + v78;
              v76 = v184 + v78;
            }
            v80 = *a2;
            if ( a2[2] < v76 )
            {
              v173 = qvector_reserve(a2, v80, v76, 1);
              *a2 = v173;
              v80 = v173;
            }
            a2[1] = v76;
            *(_BYTE *)(v80 + v79) = 0;
            v65 = src;
            memcpy((void *)(v78 + *a2), src, v77);
          }
        }
        v75 = src;
        LODWORD(v38) = *(unsigned __int16 *)v12;
        if ( src )
          goto LABEL_85;
        goto LABEL_50;
      case 7:
        v65 = &src;
        v184 = 0;
        src = nullptr;
        sub_65F0(a1, (__int64 *)&src, &v178, (unsigned __int64)(v178 + 4), (int)v10);
        v70 = v184;
        if ( (_QWORD)v184 )
        {
          v71 = v184 - 1;
          if ( (_QWORD)v184 != 1 )
          {
            v72 = a2[1];
            v73 = v184 - 1;
            if ( v72 )
            {
              --v72;
              v73 = v71 + v72;
              v70 = v184 + v72;
            }
            v74 = *a2;
            if ( a2[2] < v70 )
            {
              v168 = qvector_reserve(a2, v74, v70, 1);
              *a2 = v168;
              v74 = v168;
            }
            a2[1] = v70;
            *(_BYTE *)(v74 + v73) = 0;
            v65 = src;
            memcpy((void *)(v72 + *a2), src, v71);
          }
        }
        v75 = src;
        LODWORD(v38) = *(unsigned __int16 *)v12;
        if ( src )
        {
LABEL_85:
          *(_QWORD *)&v184 = 0;
          qfree(v75, v65, v66, v67, v68, v69);
        }
        goto LABEL_50;
      case 8:
        v53 = &src;
        v184 = 0;
        src = nullptr;
        sub_65F0(a1, (__int64 *)&src, &v178, (unsigned __int64)(v178 + 4), (int)v10);
        v117 = v184;
        if ( (_QWORD)v184 )
        {
          v118 = v184 - 1;
          if ( (_QWORD)v184 != 1 )
          {
            v119 = a2[1];
            v120 = v184 - 1;
            if ( v119 )
            {
              --v119;
              v120 = v118 + v119;
              v117 = v184 + v119;
            }
            v121 = *a2;
            if ( a2[2] < v117 )
            {
              v169 = qvector_reserve(a2, v121, v117, 1);
              *a2 = v169;
              v121 = v169;
            }
            a2[1] = v117;
            *(_BYTE *)(v121 + v120) = 0;
            v53 = src;
            memcpy((void *)(v119 + *a2), src, v118);
          }
        }
        v63 = src;
        *(float *)&v38 = *v12;
        if ( src )
          goto LABEL_73;
        goto LABEL_74;
      case 9:
        v53 = &src;
        v184 = 0;
        src = nullptr;
        sub_65F0(a1, (__int64 *)&src, &v178, (unsigned __int64)(v178 + 4), (int)v10);
        v58 = v184;
        if ( (_QWORD)v184 )
        {
          v59 = v184 - 1;
          if ( (_QWORD)v184 != 1 )
          {
            v60 = a2[1];
            v61 = v184 - 1;
            if ( v60 )
            {
              --v60;
              v61 = v59 + v60;
              v58 = v184 + v60;
            }
            v62 = *a2;
            if ( a2[2] < v58 )
            {
              v170 = qvector_reserve(a2, v62, v58, 1);
              *a2 = v170;
              v62 = v170;
            }
            a2[1] = v58;
            *(_BYTE *)(v62 + v61) = 0;
            v53 = src;
            memcpy((void *)(v60 + *a2), src, v59);
          }
        }
        v63 = src;
        *(float *)&v38 = *v12;
        if ( src )
        {
LABEL_73:
          *(_QWORD *)&v184 = 0;
          qfree(v63, v53, v54, v55, v56, v57);
        }
        goto LABEL_74;
      case 10:
        v122 = &src;
        v184 = 0;
        src = nullptr;
        sub_65F0(a1, (__int64 *)&src, &v178, (unsigned __int64)(v178 + 4), (int)v10);
        v133 = v184;
        if ( (_QWORD)v184 )
        {
          v134 = v184 - 1;
          if ( (_QWORD)v184 != 1 )
          {
            v135 = a2[1];
            v136 = v184 - 1;
            if ( v135 )
            {
              --v135;
              v136 = v134 + v135;
              v133 = v184 + v135;
            }
            v137 = *a2;
            if ( a2[2] < v133 )
            {
              v167 = qvector_reserve(a2, v137, v133, 1);
              *a2 = v167;
              v137 = v167;
            }
            a2[1] = v133;
            *(_BYTE *)(v137 + v136) = 0;
            v122 = src;
            memcpy((void *)(v135 + *a2), src, v134);
          }
        }
        v132 = src;
        v38 = *(_QWORD *)v12;
        if ( src )
          goto LABEL_161;
        goto LABEL_162;
      case 11:
        v122 = &src;
        v184 = 0;
        src = nullptr;
        sub_65F0(a1, (__int64 *)&src, &v178, (unsigned __int64)(v178 + 4), (int)v10);
        v127 = v184;
        if ( (_QWORD)v184 )
        {
          v128 = v184 - 1;
          if ( (_QWORD)v184 != 1 )
          {
            v129 = a2[1];
            v130 = v184 - 1;
            if ( v129 )
            {
              --v129;
              v130 = v128 + v129;
              v127 = v184 + v129;
            }
            v131 = *a2;
            if ( a2[2] < v127 )
            {
              v174 = qvector_reserve(a2, v131, v127, 1);
              *a2 = v174;
              v131 = v174;
            }
            a2[1] = v127;
            *(_BYTE *)(v131 + v130) = 0;
            v122 = src;
            memcpy((void *)(v129 + *a2), src, v128);
          }
        }
        v132 = src;
        v38 = *(_QWORD *)v12;
        if ( src )
        {
LABEL_161:
          *(_QWORD *)&v184 = 0;
          qfree(v132, v122, v123, v124, v125, v126);
        }
        goto LABEL_162;
      case 12:
        v81 = *v179;
        goto LABEL_96;
      case 13:
        v81 = *(double *)v179;
LABEL_96:
        v181 = v81;
        v7 = (float **)&src;
        src = nullptr;
        v184 = 0;
        if ( !(unsigned __int8)sub_65F0(a1, (__int64 *)&src, &v178, (unsigned __int64)(v178 + 4), (int)v10) )
        {
          if ( src )
          {
            *(_QWORD *)&v184 = 0;
            qfree(src, &src, v8, v9, v10, v11);
          }
          goto LABEL_27;
        }
        v140 = v184;
        if ( (_QWORD)v184 )
        {
          v141 = v184 - 1;
          if ( (_QWORD)v184 != 1 )
          {
            v142 = a2[1];
            v143 = v184 - 1;
            if ( v142 )
            {
              --v142;
              v143 = v141 + v142;
              v140 = v184 + v142;
            }
            v144 = *a2;
            if ( a2[2] < v140 )
            {
              v175 = qvector_reserve(a2, v144, v140, 1);
              *a2 = v175;
              v144 = v175;
            }
            a2[1] = v140;
            *(_BYTE *)(v144 + v143) = 0;
            v7 = (float **)src;
            memcpy((void *)(v142 + *a2), src, v141);
          }
        }
        if ( src )
        {
          *(_QWORD *)&v184 = 0;
          qfree(src, v7, v8, v9, v10, v11);
        }
        v145 = a2[1];
        v146 = 2;
        if ( v145 )
          v146 = v145-- + 1;
        v147 = *a2;
        if ( a2[2] < v146 )
        {
          v160 = qvector_reserve(a2, v147, v146, 1);
          *a2 = v160;
          v147 = v160;
        }
        a2[1] = v146;
        *(_BYTE *)(v147 + v145) = 40;
        *(_BYTE *)(*a2 + v145 + 1) = 0;
        print_fpval(s, 64, &v181, 8);
        v148 = strlen(s);
        v149 = a2[1];
        v150 = v148;
        v151 = v148;
        if ( v149 )
        {
          --v149;
          v151 = v148 + v149;
        }
        v152 = *a2;
        if ( a2[2] < v151 + 1 )
        {
          v159 = qvector_reserve(a2, v152, v151 + 1, 1);
          *a2 = v159;
          v152 = v159;
        }
        a2[1] = v151 + 1;
        v153 = v150;
        v154 = 2;
        *(_BYTE *)(v152 + v151) = 0;
        memmove((void *)(v149 + *a2), s, v153);
        v155 = a2[1];
        if ( v155 )
          v154 = v155-- + 1;
        v7 = (float **)*a2;
        if ( a2[2] < v154 )
        {
          v161 = qvector_reserve(a2, v7, v154, 1);
          *a2 = v161;
          v7 = (float **)v161;
        }
        a2[1] = v154;
        *((_BYTE *)v7 + v155) = 41;
        *(_BYTE *)(*a2 + v155 + 1) = 0;
        v12 = v179;
        goto LABEL_28;
      case 14:
        goto LABEL_5;
      case 17:
        v33 = 5;
        v10 = "int16";
        if ( (_QWORD)v180 != 2 )
        {
          v10 = "int32";
          if ( (_QWORD)v180 != 4 )
          {
            v33 = 4;
            v10 = "int8";
            if ( (_QWORD)v180 != 1 )
            {
              v33 = 5;
              v10 = "int64";
            }
          }
        }
        v34 = a2[1];
        v35 = v33;
        if ( v34 )
          v35 = --v34 + v33;
        v7 = (float **)*a2;
        v36 = v35 + 1;
        if ( a2[2] < (unsigned __int64)(v35 + 1) )
        {
          v176 = v10;
          v157 = qvector_reserve(a2, v7, v36, 1);
          v10 = v176;
          v36 = v35 + 1;
          *a2 = v157;
          v7 = (float **)v157;
        }
        a2[1] = v36;
        *((_BYTE *)v7 + v35) = 0;
        v37 = (_DWORD *)(*a2 + v34);
        *v37 = *(_DWORD *)v10;
        v8 = *(unsigned int *)&v10[(unsigned int)v33 - 4];
        *(_DWORD *)((char *)v37 + (unsigned int)v33 - 4) = v8;
        if ( (unsigned __int8)v13 == 4 )
        {
          *(float *)&v38 = *v12;
LABEL_74:
          v40 = a2[1];
          v39 = 4;
          if ( v40 )
          {
LABEL_52:
            v41 = v40 + 1;
            v42 = v40;
            v43 = *a2;
            --v40;
            if ( a2[2] >= v41 )
              goto LABEL_53;
LABEL_76:
            v64 = qvector_reserve(a2, v43, v41, 1);
            *a2 = v64;
            v43 = v64;
LABEL_53:
            a2[1] = v41;
            *(_BYTE *)(v43 + v42) = 0;
            *(_BYTE *)(*a2 + v40) = 40;
            if ( v39 == 4 )
            {
              v44 = v38;
              goto LABEL_57;
            }
            if ( (unsigned __int8)v39 > 4u )
            {
              if ( v39 == 8 )
              {
                sub_4BE0((__int64)s, 64, (__int64)"0x%x", v38);
                goto LABEL_58;
              }
            }
            else
            {
              if ( v39 == 1 )
              {
                v44 = (unsigned __int8)v38;
                goto LABEL_57;
              }
              v44 = (unsigned __int16)v38;
              if ( v39 == 2 )
              {
LABEL_57:
                sub_4BE0((__int64)s, 64, (__int64)"0x%x", v44);
                goto LABEL_58;
              }
            }
            s[0] = 0;
LABEL_58:
            v45 = strlen(s);
            v46 = a2[1];
            v47 = v45;
            v48 = v45;
            if ( v46 )
            {
              --v46;
              v48 = v45 + v46;
            }
            v49 = *a2;
            if ( a2[2] < v48 + 1 )
            {
              v139 = qvector_reserve(a2, v49, v48 + 1, 1);
              *a2 = v139;
              v49 = v139;
            }
            a2[1] = v48 + 1;
            *(_BYTE *)(v49 + v48) = 0;
            memmove((void *)(v46 + *a2), s, v47);
            v50 = a2[1];
            if ( v50 )
            {
              v51 = v50 + 1;
              v52 = a2[1];
              v7 = (float **)*a2;
              --v50;
              if ( a2[2] >= v51 )
              {
LABEL_64:
                a2[1] = v51;
                *((_BYTE *)v7 + v52) = 0;
                *(_BYTE *)(*a2 + v50) = 41;
                goto LABEL_27;
              }
            }
            else
            {
              v7 = (float **)*a2;
              v51 = 2;
              v52 = 1;
              if ( (unsigned __int64)a2[2] >= 2 )
                goto LABEL_64;
            }
            v138 = qvector_reserve(a2, v7, v51, 1);
            *a2 = v138;
            v7 = (float **)v138;
            goto LABEL_64;
          }
LABEL_75:
          v43 = *a2;
          v41 = 2;
          v42 = 1;
          if ( (unsigned __int64)a2[2] >= 2 )
            goto LABEL_53;
          goto LABEL_76;
        }
        if ( (unsigned __int8)v13 > 4uLL )
        {
          if ( (unsigned __int8)v13 == 8 )
          {
            v38 = *(_QWORD *)v12;
LABEL_162:
            v39 = 8;
LABEL_51:
            v40 = a2[1];
            if ( v40 )
              goto LABEL_52;
            goto LABEL_75;
          }
        }
        else
        {
          if ( (unsigned __int8)v13 == 1 )
          {
            LODWORD(v38) = *(unsigned __int8 *)v12;
LABEL_109:
            v39 = 1;
            goto LABEL_51;
          }
          if ( (unsigned __int8)v13 == 2 )
          {
            LODWORD(v38) = *(unsigned __int16 *)v12;
LABEL_50:
            v39 = 2;
            goto LABEL_51;
          }
        }
        v39 = v13;
        if ( (_BYTE)v13 )
        {
          LODWORD(v38) = -1515870811;
          goto LABEL_51;
        }
        break;
      case 18:
        if ( !*(_DWORD *)v179 )
        {
          v29 = a2[1];
          if ( v29 )
          {
            v30 = v29 + 6;
            v31 = v29 + 7;
            --v29;
          }
          else
          {
            v31 = 8;
            v30 = 7;
          }
          v7 = (float **)*a2;
          if ( a2[2] < v31 )
          {
            v162 = qvector_reserve(a2, v7, v31, 1);
            *a2 = v162;
            v7 = (float **)v162;
          }
          a2[1] = v31;
          *((_BYTE *)v7 + v30) = 0;
          v32 = (_DWORD *)(*a2 + v29);
          *v32 = 1819047278;
          *(_DWORD *)((char *)v32 + 3) = 1717924460;
          v12 = v179;
        }
        goto LABEL_28;
      default:
        goto LABEL_28;
    }
    goto LABEL_27;
  }
  if ( v177 != 14 )
    goto LABEL_28;
  v13 = v180;
LABEL_5:
  v14 = a2[1];
  if ( v14 )
  {
    v15 = v14 + 7;
    v16 = v14 + 8;
    --v14;
  }
  else
  {
    v16 = 9;
    v15 = 8;
  }
  v17 = *a2;
  if ( a2[2] < v16 )
  {
    v156 = qvector_reserve(a2, v17, v16, 1);
    *a2 = v156;
    v17 = v156;
  }
  a2[1] = v16;
  *(_BYTE *)(v17 + v15) = 0;
  *(_QWORD *)(*a2 + v14) = 0x2228676E69727473LL;
  v181 = 0.0;
  v182 = 0;
  if ( v12 )
  {
    utf16_utf8(&v181, v12, (unsigned int)(v13 >> 1));
    src = nullptr;
    v184 = 0;
    if ( (_QWORD)v182 )
    {
      v18 = v181;
      v19 = (unsigned int)(v182 - 1);
      goto LABEL_12;
    }
  }
  else
  {
    src = nullptr;
    v184 = 0;
  }
  v19 = 0;
  v18 = COERCE_DOUBLE(&unk_15584);
LABEL_12:
  idb_utf8(&src, *(_QWORD *)&v18, v19, 1);
  v20 = v184;
  if ( (_QWORD)v184 )
  {
    v21 = v184 - 1;
    if ( (_QWORD)v184 != 1 )
    {
      v22 = a2[1];
      v23 = v184 - 1;
      if ( v22 )
      {
        --v22;
        v23 = v21 + v22;
        v20 = v184 + v22;
      }
      v24 = *a2;
      if ( a2[2] < v20 )
      {
        v166 = qvector_reserve(a2, v24, v20, 1);
        *a2 = v166;
        v24 = v166;
      }
      a2[1] = v20;
      *(_BYTE *)(v24 + v23) = 0;
      memcpy((void *)(v22 + *a2), src, v21);
    }
  }
  v25 = a2[1];
  if ( v25 )
  {
    v26 = v25 + 1;
    v27 = v25 + 2;
    --v25;
  }
  else
  {
    v27 = 3;
    v26 = 2;
  }
  v7 = (float **)*a2;
  if ( a2[2] < v27 )
  {
    v158 = qvector_reserve(a2, v7, v27, 1);
    *a2 = v158;
    v7 = (float **)v158;
  }
  a2[1] = v27;
  *((_BYTE *)v7 + v26) = 0;
  *(_WORD *)(*a2 + v25) = 10530;
  if ( src )
  {
    *(_QWORD *)&v184 = 0;
    qfree(src, v7, v8, v9, v10, v11);
  }
  if ( v181 != 0.0 )
  {
    *(_QWORD *)&v182 = 0;
    qfree(*(_QWORD *)&v181, v7, v8, v9, v10, v11);
  }
LABEL_27:
  v12 = v179;
LABEL_28:
  if ( v12 )
  {
    *(_QWORD *)&v180 = 0;
    qfree(v12, v7, v8, v9, v10, v11);
  }
  return 1;
}
