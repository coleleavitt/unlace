__int64 __fastcall sub_3A580(__int64 *a1)
{
  bool v1; // zf
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // r12
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  __int64 *v12; // rdi
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  __int64 result; // rax
  unsigned __int64 v16; // rcx
  _BOOL8 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdi
  char v22; // dl
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 *v28; // rdi
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rdx
  unsigned int v31; // r9d
  __int64 *v32; // rdi
  unsigned __int64 v33; // r10
  unsigned int v34; // r8d
  unsigned __int64 v35; // rdx
  unsigned int *v36; // rax
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rsi
  bool v45; // cf
  int v46; // ebp
  __int64 *v47; // rax
  int v48; // ecx
  int v49; // r8d
  int v50; // r9d
  const char *v51; // rsi
  char v52; // al
  unsigned __int64 v53; // r8
  __int64 *v54; // rdi
  char v55; // si
  unsigned __int64 v56; // rdx
  int v57; // r9d
  _DWORD *v58; // rax
  __int64 *v59; // rax
  int v60; // edx
  int v61; // ecx
  int v62; // r8d
  int v63; // r9d
  const char *v64; // rsi
  __int64 v65; // rax
  __int64 v66; // r9
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 *v69; // rdi
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rsi
  __int64 v73; // rax
  __int64 v74; // r8
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 *v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rsi
  __int64 v81; // rax
  __int64 v82; // r9
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 *v85; // rdi
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rsi
  __int64 v89; // rdi
  __int64 *v90; // rax
  const char *v91; // rbp
  __int64 *v92; // rax
  int v93; // ecx
  int v94; // r8d
  int v95; // r9d
  const char *v96; // rsi
  __int64 v97; // rax
  __int64 v98; // r9
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 *v101; // rdi
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rsi
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rsi
  __int64 v110; // rax
  __int64 v111; // r9
  __int64 v112; // rax
  __int64 *v113; // rdi
  __int64 v114; // rax
  unsigned __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // r9
  __int64 v119; // rax
  __int64 *v120; // rdi
  __int64 v121; // rax
  unsigned __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 *v124; // rax
  int v125; // edx
  int v126; // ecx
  int v127; // r8d
  int v128; // r9d
  const char *v129; // rsi
  __int64 v130; // rax
  __int64 v131; // rsi
  __int64 v132; // rcx
  __int64 v133; // rax
  __int64 *v134; // rdi
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // r10
  __int64 v138; // rcx
  __int64 v139; // rax
  __int64 v140; // r10
  __int64 *v141; // rdi
  __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rsi
  __int64 v145; // [rsp+0h] [rbp-98h]
  __int64 v146; // [rsp+0h] [rbp-98h]
  __int64 v147; // [rsp+0h] [rbp-98h]
  __int64 v148; // [rsp+0h] [rbp-98h]
  __int64 v149; // [rsp+0h] [rbp-98h]
  __int64 v150; // [rsp+0h] [rbp-98h]
  __int64 v151; // [rsp+0h] [rbp-98h]
  __int64 v152; // [rsp+0h] [rbp-98h]
  __int64 v153; // [rsp+0h] [rbp-98h]
  __int64 v154; // [rsp+0h] [rbp-98h]
  __int64 v155; // [rsp+0h] [rbp-98h]
  __int64 v156; // [rsp+0h] [rbp-98h]
  __int64 v157; // [rsp+0h] [rbp-98h]
  unsigned int v158; // [rsp+0h] [rbp-98h]
  __int64 v159; // [rsp+0h] [rbp-98h]
  __int64 v160; // [rsp+0h] [rbp-98h]
  __int64 v161; // [rsp+8h] [rbp-90h]
  __int64 v162; // [rsp+8h] [rbp-90h]
  __int64 v163; // [rsp+8h] [rbp-90h]
  __int64 v164; // [rsp+8h] [rbp-90h]
  __int64 v165; // [rsp+8h] [rbp-90h]
  __int64 v166; // [rsp+8h] [rbp-90h]
  __int64 v167; // [rsp+8h] [rbp-90h]
  unsigned int v168; // [rsp+8h] [rbp-90h]
  int v169; // [rsp+8h] [rbp-90h]
  __int64 v170; // [rsp+8h] [rbp-90h]
  __int64 v171; // [rsp+10h] [rbp-88h]
  int v172; // [rsp+10h] [rbp-88h]
  __int64 v173; // [rsp+18h] [rbp-80h]
  int v174; // [rsp+2Ch] [rbp-6Ch] BYREF
  __int64 v175; // [rsp+30h] [rbp-68h] BYREF
  __int64 v176; // [rsp+38h] [rbp-60h] BYREF
  __int64 v177; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v178; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v179[9]; // [rsp+50h] [rbp-48h] BYREF

  v1 = a1[11] == 0;
  v179[1] = __readfsqword(0x28u);
  if ( v1 )
  {
    sub_39C30((__int64)a1);
    v89 = a1[11];
    if ( !v89 || a1 == (__int64 *)v89 )
    {
      if ( (debug & 0x400000) != 0 )
      {
        v124 = sub_34340((__int64)a1);
        v129 = src;
        if ( v124[1] )
          v129 = (const char *)*v124;
        sub_88B80((unsigned int)"Error array DIE %s resolving type\n", (_DWORD)v129, v125, v126, v127, v128);
      }
      return 5;
    }
    if ( *(_BYTE *)(v89 + 142) == 5 )
    {
      if ( (debug & 0x400000) != 0 )
      {
        v90 = sub_34340(v89);
        v91 = src;
        if ( v90[1] )
          v91 = (const char *)*v90;
        v92 = sub_34340((__int64)a1);
        v96 = src;
        if ( v92[1] )
          v96 = (const char *)*v92;
        sub_88B80(
          (unsigned int)"Error array DIE %s dependency DIE %s processing error\n",
          (_DWORD)v96,
          (_DWORD)v91,
          v93,
          v94,
          v95);
      }
      return 5;
    }
  }
  v3 = a1[10];
  v175 = 0;
  v4 = *(_QWORD *)(v3 + 144);
  v5 = *(_QWORD *)(v4 + 88);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(v5 + 32))(a1[13], &v176, &v175);
  if ( !v6 )
  {
    while ( 1 )
    {
      v7 = a1[10];
      v177 = 0;
      v178 = 0;
      if ( (unsigned __int16)sub_290B0(v4, v7, v176) == 33 )
        break;
LABEL_4:
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *, __int64 *))(v5 + 24))(
             *(_QWORD *)(v4 + 160),
             v176,
             *(_QWORD *)(a1[10] + 112) >> 63,
             &v176,
             &v175);
      if ( v6 )
        goto LABEL_12;
    }
    v8 = *(_QWORD *)(v4 + 88);
    v174 = 0;
    if ( !(*(unsigned int (__fastcall **)(__int64, __int64, int *, _QWORD *))(v8 + 112))(v176, 47, &v174, v179) && v174 )
    {
      v16 = *(unsigned int *)(a1[10] + 164);
      v17 = 0;
      if ( (unsigned int)v16 <= 0xE )
      {
        v18 = -24969;
        v17 = !_bittest64(&v18, v16);
      }
      v178 = v17;
      v19 = *(_QWORD *)(v4 + 88);
      v174 = 0;
      v20 = (*(__int64 (__fastcall **)(__int64, __int64, int *, _QWORD *))(v19 + 112))(v176, 34, &v174, v179);
      v21 = a1[10];
      if ( v20 || !v174 )
      {
        v22 = sub_2C6A0(v21, v176, 0x2Fu, &v177);
        v23 = v177;
        if ( !v177 )
        {
          v178 = 0;
          v177 = -(__int64)(*(_DWORD *)(a1[10] + 164) == 22);
          goto LABEL_32;
        }
      }
      else
      {
        sub_2C6A0(v21, v176, 0x22u, &v178);
        v22 = sub_2C6A0(a1[10], v176, 0x2Fu, &v177);
        v23 = v177;
        if ( !v177 )
          goto LABEL_22;
      }
      if ( v23 == 0xFFFFFFFFLL || v23 == -1 )
        goto LABEL_24;
LABEL_22:
      v24 = v178;
      v25 = v23 - (*(_DWORD *)(a1[10] + 164) == 22);
      v177 = v25;
      if ( v25 < v178 )
      {
        v178 = v25;
        v177 = v24;
        if ( !v22 )
          goto LABEL_24;
        goto LABEL_33;
      }
LABEL_32:
      if ( !v22 )
      {
LABEL_24:
        v26 = a1[19];
        v27 = a1[18];
        v179[0] = 0;
        v28 = a1 + 18;
        v29 = a1[20];
        v30 = v26 + 1;
        if ( (unsigned __int64)v179 >= v27 && (unsigned __int64)v179 < v27 + 8 * v29 )
        {
          if ( v29 < v30 )
          {
            v147 = a1[20];
            v65 = qvector_reserve(v28, 0, v30, 8);
            v66 = a1[20];
            v67 = v65;
            v68 = a1[19];
            v69 = (__int64 *)a1[18];
            a1[20] = v147;
            v70 = v68 - 1;
            if ( v70 >= 0 )
            {
              v71 = v67;
              do
              {
                v72 = *v69;
                v71 += 8;
                ++v69;
                *(_QWORD *)(v71 - 8) = v72;
                v45 = v70-- == 0;
              }
              while ( !v45 );
              v69 = (__int64 *)a1[18];
            }
            v162 = v66;
            v148 = v67;
            qfree(v69);
            v27 = v148;
            v26 = a1[19];
            a1[18] = v148;
            a1[20] = v162;
          }
LABEL_27:
          *(_QWORD *)(v27 + 8 * v26) = 0;
LABEL_30:
          ++a1[19];
          goto LABEL_4;
        }
        if ( v29 < v30 )
        {
          v145 = a1[20];
          v37 = qvector_reserve(v28, 0, v30, 8);
          v38 = a1[20];
          v39 = v37;
          v40 = a1[19];
          v41 = (__int64 *)a1[18];
          a1[20] = v145;
          v42 = v40 - 1;
          if ( v42 >= 0 )
          {
            v43 = v39;
            do
            {
              v44 = *v41;
              v43 += 8;
              ++v41;
              *(_QWORD *)(v43 - 8) = v44;
              v45 = v42-- == 0;
            }
            while ( !v45 );
            v41 = (__int64 *)a1[18];
          }
          v161 = v38;
          v146 = v39;
          qfree(v41);
          v27 = v146;
          v26 = a1[19];
          a1[18] = v146;
          a1[20] = v161;
        }
        goto LABEL_29;
      }
LABEL_33:
      v31 = v178;
      v32 = a1 + 18;
      v26 = a1[19];
      v27 = a1[18];
      v33 = a1[20];
      v34 = v177 + 1 - v178;
      v35 = v26 + 1;
      v179[0] = __PAIR64__(v178, v34);
      if ( (unsigned __int64)v179 >= v27 && (unsigned __int64)v179 < v27 + 8 * v33 )
      {
        if ( v33 < v35 )
        {
          v171 = v33;
          v168 = v177 + 1 - v178;
          v158 = v178;
          v130 = qvector_reserve(v32, 0, v35, 8);
          v131 = a1[20];
          v132 = v130;
          v133 = a1[19];
          a1[20] = v171;
          v134 = (__int64 *)a1[18];
          v135 = v133 - 1;
          if ( v135 >= 0 )
          {
            v136 = v132;
            do
            {
              v137 = *v134;
              v136 += 8;
              ++v134;
              *(_QWORD *)(v136 - 8) = v137;
              v45 = v135-- == 0;
            }
            while ( !v45 );
            v134 = (__int64 *)a1[18];
          }
          v173 = v132;
          qfree(v134);
          v27 = v173;
          v26 = a1[19];
          v34 = v168;
          a1[18] = v173;
          v31 = v158;
          a1[20] = v131;
        }
        v36 = (unsigned int *)(v27 + 8 * v26);
        *v36 = v34;
        v36[1] = v31;
        goto LABEL_30;
      }
      if ( v33 < v35 )
      {
        v149 = v33;
        v73 = qvector_reserve(v32, 0, v35, 8);
        v74 = a1[20];
        v75 = v73;
        v76 = a1[19];
        v77 = (__int64 *)a1[18];
        a1[20] = v149;
        v78 = v76 - 1;
        if ( v78 >= 0 )
        {
          v79 = v75;
          do
          {
            v80 = *v77;
            v79 += 8;
            ++v77;
            *(_QWORD *)(v79 - 8) = v80;
            v45 = v78-- == 0;
          }
          while ( !v45 );
          v77 = (__int64 *)a1[18];
        }
        v163 = v75;
        v150 = v74;
        qfree(v77);
        v27 = v163;
        v26 = a1[19];
        a1[18] = v163;
        a1[20] = v150;
      }
      goto LABEL_29;
    }
    v9 = *(_QWORD *)(v4 + 88);
    v174 = 0;
    if ( (*(unsigned int (__fastcall **)(__int64, __int64, int *, _QWORD *))(v9 + 112))(v176, 55, &v174, v179) || !v174 )
    {
      v10 = a1[19];
      v11 = a1[18];
      v179[0] = 0;
      v12 = a1 + 18;
      v13 = a1[20];
      v14 = v10 + 1;
      if ( (unsigned __int64)v179 < v11 || (unsigned __int64)v179 >= v11 + 8 * v13 )
      {
        if ( v13 < v14 )
        {
          v156 = a1[20];
          v110 = qvector_reserve(v12, 0, v14, 8);
          v111 = a1[20];
          v11 = v110;
          v112 = a1[19];
          v113 = (__int64 *)a1[18];
          a1[20] = v156;
          v114 = v112 - 1;
          if ( v114 >= 0 )
          {
            v115 = v11;
            do
            {
              v116 = *v113;
              v115 += 8LL;
              ++v113;
              *(_QWORD *)(v115 - 8) = v116;
              v45 = v114-- == 0;
            }
            while ( !v45 );
            v113 = (__int64 *)a1[18];
          }
          v166 = v111;
          qfree(v113);
          v10 = a1[19];
          a1[18] = v11;
          a1[20] = v166;
        }
        *(_QWORD *)(v11 + 8 * v10) = v179[0];
      }
      else
      {
        if ( v13 < v14 )
        {
          v157 = a1[20];
          v117 = qvector_reserve(v12, 0, v14, 8);
          v118 = a1[20];
          v11 = v117;
          v119 = a1[19];
          v120 = (__int64 *)a1[18];
          a1[20] = v157;
          v121 = v119 - 1;
          if ( v121 >= 0 )
          {
            v122 = v11;
            do
            {
              v123 = *v120;
              v122 += 8LL;
              ++v120;
              *(_QWORD *)(v122 - 8) = v123;
              v45 = v121-- == 0;
            }
            while ( !v45 );
            v120 = (__int64 *)a1[18];
          }
          v167 = v118;
          qfree(v120);
          v10 = a1[19];
          a1[18] = v11;
          a1[20] = v167;
        }
        *(_QWORD *)(v11 + 8 * v10) = 0;
      }
      goto LABEL_30;
    }
    v52 = sub_2C6A0(a1[10], v176, 0x37u, &v177);
    v27 = a1[18];
    v53 = a1[20];
    v54 = a1 + 18;
    v55 = v52;
    v26 = a1[19];
    v56 = v26 + 1;
    if ( v55 )
    {
      v57 = v177;
      v179[0] = (unsigned int)v177;
      if ( (unsigned __int64)v179 >= v27 && (unsigned __int64)v179 < v27 + 8 * v53 )
      {
        if ( v53 < v56 )
        {
          v169 = v177;
          v159 = v53;
          v138 = qvector_reserve(v54, 0, v56, 8);
          v139 = a1[19];
          v140 = a1[20];
          v141 = (__int64 *)a1[18];
          a1[20] = v159;
          v142 = v139 - 1;
          if ( v142 >= 0 )
          {
            v143 = v138;
            do
            {
              v144 = *v141;
              v143 += 8;
              ++v141;
              *(_QWORD *)(v143 - 8) = v144;
              v45 = v142-- == 0;
            }
            while ( !v45 );
            v141 = (__int64 *)a1[18];
          }
          v172 = v169;
          v170 = v138;
          v160 = v140;
          qfree(v141);
          v27 = v170;
          v26 = a1[19];
          v57 = v172;
          a1[18] = v170;
          a1[20] = v160;
        }
        v58 = (_DWORD *)(v27 + 8 * v26);
        *v58 = v57;
        v58[1] = 0;
        goto LABEL_30;
      }
      if ( v53 >= v56 )
        goto LABEL_29;
      v151 = v53;
      v81 = qvector_reserve(v54, 0, v56, 8);
      v82 = a1[20];
      v83 = v81;
      v84 = a1[19];
      v85 = (__int64 *)a1[18];
      a1[20] = v151;
      v86 = v84 - 1;
      if ( v86 < 0 )
        goto LABEL_78;
      v87 = v83;
      do
      {
        v88 = *v85;
        v87 += 8;
        ++v85;
        *(_QWORD *)(v87 - 8) = v88;
        v45 = v86-- == 0;
      }
      while ( !v45 );
    }
    else
    {
      v179[0] = 0;
      if ( (unsigned __int64)v179 >= v27 && (unsigned __int64)v179 < v27 + 8 * v53 )
      {
        if ( v53 < v56 )
        {
          v153 = v53;
          v97 = qvector_reserve(v54, 0, v56, 8);
          v98 = a1[20];
          v99 = v97;
          v100 = a1[19];
          v101 = (__int64 *)a1[18];
          a1[20] = v153;
          v102 = v100 - 1;
          if ( v102 >= 0 )
          {
            v103 = v99;
            do
            {
              v104 = *v101;
              v103 += 8;
              ++v101;
              *(_QWORD *)(v103 - 8) = v104;
              v45 = v102-- == 0;
            }
            while ( !v45 );
            v101 = (__int64 *)a1[18];
          }
          v165 = v99;
          v154 = v98;
          qfree(v101);
          v27 = v165;
          v26 = a1[19];
          a1[18] = v165;
          a1[20] = v154;
        }
        goto LABEL_27;
      }
      if ( v53 >= v56 )
      {
LABEL_29:
        *(_QWORD *)(v27 + 8 * v26) = v179[0];
        goto LABEL_30;
      }
      v155 = v53;
      v105 = qvector_reserve(v54, 0, v56, 8);
      v82 = a1[20];
      v83 = v105;
      v106 = a1[19];
      v85 = (__int64 *)a1[18];
      a1[20] = v155;
      v107 = v106 - 1;
      if ( v107 < 0 )
      {
LABEL_78:
        v164 = v83;
        v152 = v82;
        qfree(v85);
        v27 = v164;
        v26 = a1[19];
        a1[18] = v164;
        a1[20] = v152;
        goto LABEL_29;
      }
      v108 = v83;
      do
      {
        v109 = *v85;
        v108 += 8;
        ++v85;
        *(_QWORD *)(v108 - 8) = v109;
        v45 = v107-- == 0;
      }
      while ( !v45 );
    }
    v85 = (__int64 *)a1[18];
    goto LABEL_78;
  }
LABEL_12:
  if ( v6 != -1 )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v46 = (*(__int64 (__fastcall **)(__int64))(v5 + 464))(v175);
      v47 = sub_34340((__int64)a1);
      v51 = src;
      if ( v47[1] )
        v51 = (const char *)*v47;
      sub_88B80((unsigned int)"Error array DIE %s child enumeration : %s\n", (_DWORD)v51, v46, v48, v49, v50);
    }
    return 5;
  }
  result = 0;
  if ( !a1[19] )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v59 = sub_34340((__int64)a1);
      v64 = src;
      if ( v59[1] )
        v64 = (const char *)*v59;
      sub_88B80((unsigned int)"Error array DIE %s no dimension information\n", (_DWORD)v64, v60, v61, v62, v63);
    }
    return 5;
  }
  return result;
}
