unsigned __int64 __fastcall sub_1B0D60(unsigned __int64 a1, char *a2, __int64 a3, unsigned int a4, double a5)
{
  __int64 v7; // rax
  int v8; // r14d
  __int64 v9; // rbp
  __int64 v10; // r14
  unsigned __int64 v11; // r15
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // r14
  unsigned __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // r12
  unsigned __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // r15
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rsi
  __int64 v24; // r12
  unsigned __int64 v25; // r15
  __int64 v26; // rsi
  __int64 v27; // r12
  unsigned __int64 v28; // r15
  __int64 v29; // rsi
  unsigned int v30; // r15d
  int v31; // r12d
  _DWORD *v32; // rax
  const char *v33; // r12
  size_t v34; // rax
  __int64 v35; // r15
  size_t v36; // r8
  size_t v37; // r9
  __int64 v38; // rsi
  __int64 v39; // rdx
  char v40; // si
  unsigned __int64 v41; // rdx
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 v44; // r12
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // r8
  __int64 v47; // rsi
  char v48; // r12
  int v49; // r15d
  unsigned __int64 v50; // r15
  __int64 v51; // rax
  __int64 v52; // r14
  __int64 v53; // r12
  unsigned __int64 v54; // r15
  __int64 v55; // rsi
  const void *v56; // r15
  __int64 v57; // r12
  size_t v58; // rax
  size_t v59; // r8
  size_t v60; // r9
  __int64 v61; // rsi
  __int64 v62; // rdx
  __int64 v63; // r12
  unsigned __int64 v64; // r15
  __int64 v65; // rsi
  __int64 v66; // r12
  unsigned __int64 v67; // r15
  __int64 v68; // rsi
  __int64 v69; // rax
  char *v70; // rsi
  __int64 v71; // r12
  unsigned __int64 v72; // r15
  __int64 v73; // rsi
  __int64 not_tail; // r12
  __int64 v75; // r15
  unsigned __int64 v76; // rdx
  __int64 v77; // rsi
  unsigned __int64 v78; // rdx
  __int64 v79; // r15
  __int64 v80; // rsi
  __int64 v81; // r12
  unsigned __int64 v82; // r15
  __int64 v83; // rsi
  __int64 v84; // r12
  unsigned __int64 v85; // r15
  __int64 v86; // rsi
  __int64 v87; // r12
  unsigned __int64 v88; // r15
  __int64 v89; // rsi
  int v90; // ebp
  __int64 v92; // r12
  unsigned __int64 v93; // r15
  __int64 v94; // rsi
  unsigned __int64 v95; // r15
  __int64 v96; // r12
  __int64 v97; // rsi
  __int64 v98; // r12
  unsigned __int64 v99; // r15
  __int64 v100; // rsi
  __int64 v101; // r15
  unsigned __int64 v102; // rdx
  __int64 v103; // rsi
  char v104; // si
  __int64 *v105; // rdx
  __int64 v106; // rax
  int v107; // edx
  __int64 v108; // r12
  __int64 v109; // r8
  unsigned __int64 v110; // r15
  __int64 v111; // rsi
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // r12
  unsigned __int64 v122; // rdx
  __int64 v123; // rsi
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  int v127; // r14d
  __int64 v128; // r12
  __int64 v129; // r8
  unsigned __int64 v130; // r15
  __int64 v131; // rsi
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  unsigned __int64 v147; // [rsp+8h] [rbp-130h]
  unsigned __int64 v148; // [rsp+8h] [rbp-130h]
  unsigned __int64 v149; // [rsp+8h] [rbp-130h]
  unsigned __int64 v150; // [rsp+8h] [rbp-130h]
  unsigned __int64 v151; // [rsp+8h] [rbp-130h]
  __int64 v152; // [rsp+8h] [rbp-130h]
  __int64 v153; // [rsp+8h] [rbp-130h]
  __int64 v154; // [rsp+8h] [rbp-130h]
  __int64 v155; // [rsp+8h] [rbp-130h]
  __int64 v156; // [rsp+8h] [rbp-130h]
  unsigned __int64 v157; // [rsp+8h] [rbp-130h]
  unsigned __int64 v158; // [rsp+10h] [rbp-128h]
  __int64 v159; // [rsp+10h] [rbp-128h]
  size_t v160; // [rsp+10h] [rbp-128h]
  size_t v161; // [rsp+10h] [rbp-128h]
  size_t v162; // [rsp+18h] [rbp-120h]
  size_t v163; // [rsp+18h] [rbp-120h]
  __int64 v164; // [rsp+40h] [rbp-F8h] BYREF
  __int128 v165; // [rsp+48h] [rbp-F0h]
  _BYTE v166[24]; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v167; // [rsp+78h] [rbp-C0h]
  __int64 v168; // [rsp+88h] [rbp-B0h]
  __int128 v169; // [rsp+90h] [rbp-A8h]
  __int128 v170; // [rsp+A0h] [rbp-98h]
  __int64 v171; // [rsp+D0h] [rbp-68h]
  int v172; // [rsp+D8h] [rbp-60h]
  __int64 v173; // [rsp+E0h] [rbp-58h]
  char v174; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v175; // [rsp+F8h] [rbp-40h]

  v175 = __readfsqword(0x28u);
  v7 = sub_1AE730(a3, (__int64 *)a2, a1, a5);
  v8 = *(_DWORD *)(a1 + 4);
  v9 = v7;
  switch ( *(_BYTE *)a1 )
  {
    case 0:
      if ( v8 != -1 )
        goto LABEL_34;
      goto LABEL_138;
    case 1:
      sub_32AA00((__int64 *)a2, 24);
      a5 = 0.0;
      v30 = *(_DWORD *)(a1 + 4);
      v31 = *(_DWORD *)(a1 + 8);
      memset(v166, 0, sizeof(v166));
      v32 = (_DWORD *)sub_339CA0();
      sub_1338F0(v32, (__int64 *)v166, v31, v30);
      v33 = s1;
      if ( *(_QWORD *)&v166[8] )
        v33 = *(const char **)v166;
      if ( v33 )
      {
        v34 = strlen(v33);
        v35 = *((_QWORD *)a2 + 1);
        v36 = v34;
        v37 = v34;
        if ( v35 )
        {
          --v35;
          v37 = v34 + v35;
        }
        v38 = *(_QWORD *)a2;
        v39 = v37 + 1;
        if ( *((_QWORD *)a2 + 2) < v37 + 1 )
        {
          v162 = v34;
          v160 = v37;
          v154 = v37 + 1;
          v140 = qvector_reserve((__int64)a2, v38, v39, 1);
          *(_QWORD *)a2 = v140;
          v36 = v162;
          v38 = v140;
          v37 = v160;
          v39 = v154;
        }
        *((_QWORD *)a2 + 1) = v39;
        *(_BYTE *)(v38 + v37) = 0;
        memmove((void *)(v35 + *(_QWORD *)a2), v33, v36);
      }
      if ( *(_QWORD *)v166 )
      {
        *(_QWORD *)&v166[8] = 0;
        qfree(*(__int64 *)v166);
      }
      if ( v8 != -1 )
        sub_FAAD0((__int64 *)a2);
      v40 = 24;
      goto LABEL_137;
    case 2:
      v41 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)v166 = a2;
      *(_QWORD *)&v166[8] = sub_1AE730(a3, (__int64 *)a2, v41, a5);
      v42 = *(_QWORD *)&v166[8];
      sub_32AA00((__int64 *)a2, 32);
      v43 = *(_QWORD *)(a1 + 8);
      v44 = *((_QWORD *)a2 + 1);
      v45 = 2;
      v46 = *(_QWORD *)(v43 + 16);
      if ( v44 )
        v45 = v44-- + 1;
      v47 = *(_QWORD *)a2;
      if ( *((_QWORD *)a2 + 2) < v45 )
      {
        v158 = *(_QWORD *)(v43 + 16);
        v149 = v45;
        v124 = qvector_reserve((__int64)a2, v47, v45, 1);
        *(_QWORD *)a2 = v124;
        v46 = v158;
        v47 = v124;
        v45 = v149;
      }
      *((_QWORD *)a2 + 1) = v45;
      *(_BYTE *)(v47 + v44) = 35;
      *(_BYTE *)(*(_QWORD *)a2 + v44 + 1) = 0;
      if ( v46 >= 0x8000000000000001LL )
      {
        v121 = *((_QWORD *)a2 + 1);
        v122 = 2;
        if ( v121 )
          v122 = v121-- + 1;
        v123 = *(_QWORD *)a2;
        if ( *((_QWORD *)a2 + 2) < v122 )
        {
          v157 = v122;
          v145 = qvector_reserve((__int64)a2, v123, v122, 1);
          *(_QWORD *)a2 = v145;
          v123 = v145;
          v122 = v157;
        }
        *((_QWORD *)a2 + 1) = v122;
        *(_BYTE *)(v123 + v121) = 45;
        *(_BYTE *)(*(_QWORD *)a2 + v121 + 1) = 0;
      }
      sub_FAAD0((__int64 *)a2);
      v48 = 32;
      if ( **(_QWORD **)(a1 + 8) != -1 && (a4 & 1) != 0 )
      {
        sub_32AAE0((__int64 *)a2, 32);
        sub_32AA00((__int64 *)a2, 4);
        if ( **(_QWORD **)(a1 + 8) == -1 )
          get_module_data();
        sub_FAAD0((__int64 *)a2);
        v48 = 4;
      }
      if ( v42 != -1 )
      {
        v49 = v42 & 7;
        if ( v49 > 2 )
          sub_1ADFD0(a5);
        sub_32AAE0((__int64 *)a2, v49 + 41);
      }
      goto LABEL_61;
    case 3:
      sub_32AA00((__int64 *)a2, 25);
      v53 = *((_QWORD *)a2 + 1);
      v54 = 2;
      if ( v53 )
        v54 = v53-- + 1;
      v55 = *(_QWORD *)a2;
      if ( *((_QWORD *)a2 + 2) < v54 )
      {
        v114 = qvector_reserve((__int64)a2, v55, v54, 1);
        *(_QWORD *)a2 = v114;
        v55 = v114;
      }
      *((_QWORD *)a2 + 1) = v54;
      *(_BYTE *)(v55 + v53) = 34;
      *(_BYTE *)(*(_QWORD *)a2 + v53 + 1) = 0;
      v56 = *(const void **)(a1 + 8);
      if ( v56 )
      {
        v57 = *((_QWORD *)a2 + 1);
        v58 = strlen(*(const char **)(a1 + 8));
        v59 = v58;
        v60 = v58;
        if ( v57 )
        {
          --v57;
          v60 = v58 + v57;
        }
        v61 = *(_QWORD *)a2;
        v62 = v60 + 1;
        if ( *((_QWORD *)a2 + 2) < v60 + 1 )
        {
          v163 = v58;
          v161 = v60;
          v155 = v60 + 1;
          v141 = qvector_reserve((__int64)a2, v61, v62, 1);
          *(_QWORD *)a2 = v141;
          v59 = v163;
          v61 = v141;
          v60 = v161;
          v62 = v155;
        }
        *((_QWORD *)a2 + 1) = v62;
        *(_BYTE *)(v61 + v60) = 0;
        memmove((void *)(v57 + *(_QWORD *)a2), v56, v59);
      }
      v63 = *((_QWORD *)a2 + 1);
      v64 = 2;
      if ( v63 )
        v64 = v63-- + 1;
      v65 = *(_QWORD *)a2;
      if ( *((_QWORD *)a2 + 2) < v64 )
      {
        v115 = qvector_reserve((__int64)a2, v65, v64, 1);
        *(_QWORD *)a2 = v115;
        v65 = v115;
      }
      *((_QWORD *)a2 + 1) = v64;
      *(_BYTE *)(v65 + v63) = 34;
      *(_BYTE *)(*(_QWORD *)a2 + v63 + 1) = 0;
      if ( v8 != -1 )
        sub_FAAD0((__int64 *)a2);
      v40 = 25;
      goto LABEL_137;
    case 4:
      sub_32AA00((__int64 *)a2, 32);
      v50 = *(_QWORD *)(a1 + 8);
      v51 = sub_1AE730(a3, (__int64 *)a2, v50, a5);
      a5 = 0.0;
      v52 = v51;
      v164 = 0;
      memset(v166, 0, sizeof(v166));
      v165 = 0;
      sub_1B0D60(v50 + 32, (char *)&v164, a3, a4);
      sub_1B0D60(v50 + 48, v166, a3, a4);
      switch ( *(_DWORD *)v50 )
      {
        case 2:
          sub_FAAD0((__int64 *)a2);
          if ( (a4 & 8) != 0 && *(_QWORD *)(v50 + 24) != -1 )
            goto LABEL_200;
          break;
        case 0x38:
        case 0x39:
          sub_FAAD0((__int64 *)a2);
          sub_1B0D60(v50 + 64, a2, a3, a4);
          break;
        default:
LABEL_200:
          sub_FAAD0((__int64 *)a2);
          break;
      }
      if ( *(_QWORD *)v166 )
      {
        *(_QWORD *)&v166[8] = 0;
        qfree(*(__int64 *)v166);
      }
      if ( v164 )
      {
        *(_QWORD *)&v165 = 0;
        qfree(v164);
      }
      if ( v52 != -1 )
      {
        v127 = v52 & 7;
        if ( v127 > 2 )
          sub_1ADFD0(0.0);
        sub_32AAE0((__int64 *)a2, v127 + 41);
      }
      v40 = 32;
      goto LABEL_137;
    case 5:
      sub_32AA00((__int64 *)a2, 17);
      v66 = *((_QWORD *)a2 + 1);
      v67 = 2;
      if ( v66 )
        v67 = v66-- + 1;
      v68 = *(_QWORD *)a2;
      if ( *((_QWORD *)a2 + 2) < v67 )
      {
        v125 = qvector_reserve((__int64)a2, v68, v67, 1);
        *(_QWORD *)a2 = v125;
        v68 = v125;
      }
      *((_QWORD *)a2 + 1) = v67;
      a5 = 0.0;
      *(_BYTE *)(v68 + v66) = 37;
      *(_BYTE *)(*(_QWORD *)a2 + v66 + 1) = 0;
      v69 = *(_QWORD *)(a1 + 8);
      v168 = 0;
      v171 = 1;
      v172 = -1;
      v173 = 0;
      v174 = 0;
      memset(v166, 0, sizeof(v166));
      v167 = 0;
      v169 = 0;
      v170 = 0;
      if ( sub_1D0250(*(_QWORD **)v69, (__m128i *)v166, *(_QWORD *)(v69 + 8), &v164, nullptr) == -1 )
        goto LABEL_90;
      v70 = (char *)s1;
      if ( (_QWORD)v167 )
        v70 = *(char **)&v166[16];
      sub_1AE020((__int64 *)a2, v70);
      if ( v164 != *(_QWORD *)v166 >> 3 )
LABEL_90:
        sub_FAAD0((__int64 *)a2);
      clear_tinfo_t();
      if ( v168 )
      {
        *(_QWORD *)&v169 = 0;
        qfree(v168);
      }
      if ( *(_QWORD *)&v166[16] )
      {
        *(_QWORD *)&v167 = 0;
        qfree(*(__int64 *)&v166[16]);
      }
      goto LABEL_161;
    case 6:
      sub_32AA00((__int64 *)a2, 7);
      v71 = *((_QWORD *)a2 + 1);
      v72 = 2;
      if ( v71 )
        v72 = v71-- + 1;
      v73 = *(_QWORD *)a2;
      if ( *((_QWORD *)a2 + 2) < v72 )
      {
        v112 = qvector_reserve((__int64)a2, v73, v72, 1);
        *(_QWORD *)a2 = v112;
        v73 = v112;
      }
      *((_QWORD *)a2 + 1) = v72;
      *(_BYTE *)(v73 + v71) = 36;
      *(_BYTE *)(*(_QWORD *)a2 + v71 + 1) = 0;
      not_tail = *(_QWORD *)(a1 + 8);
      if ( (get_flags_ex() & 0x600) == 0x200 )
        not_tail = prev_not_tail();
      if ( (get_flags_ex() & 0xC000) == 0 )
        set_dummy_name();
      a5 = 0.0;
      memset(v166, 0, sizeof(v166));
      if ( get_ea_name() <= 0 )
      {
        if ( *(_QWORD *)(a1 + 8) == -1 )
          get_module_data();
        goto LABEL_106;
      }
      sub_1AE020((__int64 *)a2, *(char **)v166);
      if ( *(_QWORD *)(a1 + 8) != not_tail )
LABEL_106:
        sub_FAAD0((__int64 *)a2);
      if ( v8 != -1 )
        sub_FAAD0((__int64 *)a2);
      v40 = 7;
LABEL_137:
      sub_32AAE0((__int64 *)a2, v40);
LABEL_138:
      if ( (a4 & 2) != 0 && *(_WORD *)(a1 + 2) )
      {
        sub_32AA00((__int64 *)a2, 4);
        sub_FAAD0((__int64 *)a2);
        sub_32AAE0((__int64 *)a2, 4);
      }
      if ( v9 != -1 )
      {
        v90 = v9 & 7;
        if ( v90 > 2 )
          sub_1ADFD0(a5);
        sub_32AAE0((__int64 *)a2, v90 + 41);
      }
      return v175 - __readfsqword(0x28u);
    case 7:
      sub_32AA00((__int64 *)a2, 28);
      v101 = *((_QWORD *)a2 + 1);
      v102 = 2;
      if ( v101 )
        v102 = v101-- + 1;
      v103 = *(_QWORD *)a2;
      if ( *((_QWORD *)a2 + 2) < v102 )
      {
        v147 = v102;
        v118 = qvector_reserve((__int64)a2, v103, v102, 1);
        *(_QWORD *)a2 = v118;
        v102 = v147;
        v103 = v118;
      }
      *((_QWORD *)a2 + 1) = v102;
      *(_BYTE *)(v103 + v101) = 64;
      *(_BYTE *)(*(_QWORD *)a2 + v101 + 1) = 0;
      sub_1AF700(a3, (__int64 *)a2);
      if ( v8 != -1 )
        sub_FAAD0((__int64 *)a2);
      v40 = 28;
      goto LABEL_137;
    case 8:
      sub_32AA00((__int64 *)a2, 9);
      sub_1B2A80(*(_QWORD *)(a1 + 8), (__int64 *)a2, a3, v8, a4);
      goto LABEL_136;
    case 9:
      if ( **(_QWORD **)(a1 + 8) )
      {
        v104 = 34;
        v48 = 34;
      }
      else
      {
        v104 = 18;
        v48 = 18;
      }
      sub_32AA00((__int64 *)a2, v104);
      v105 = *(__int64 **)(a1 + 8);
      v106 = *v105;
      v107 = *((_DWORD *)v105 + 4);
      if ( v106
        && (unsigned __int64)v107 < *(_QWORD *)(v106 + 440)
        && (v139 = *(_QWORD *)(v106 + 432) + 104LL * v107, *(_QWORD *)(v139 + 40) > 1u) )
      {
        sub_1AE020((__int64 *)a2, *(char **)(v139 + 32));
      }
      else
      {
        sub_FAAD0((__int64 *)a2);
      }
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) )
        sub_FAAD0((__int64 *)a2);
LABEL_61:
      if ( v8 != -1 )
        sub_FAAD0((__int64 *)a2);
      v40 = v48;
      goto LABEL_137;
    case 0xA:
      sub_32AA00((__int64 *)a2, 9);
      v75 = *((_QWORD *)a2 + 1);
      v76 = 2;
      if ( v75 )
        v76 = v75-- + 1;
      v77 = *(_QWORD *)a2;
      if ( *((_QWORD *)a2 + 2) < v76 )
      {
        v150 = v76;
        v126 = qvector_reserve((__int64)a2, v77, v76, 1);
        *(_QWORD *)a2 = v126;
        v76 = v150;
        v77 = v126;
      }
      *((_QWORD *)a2 + 1) = v76;
      v78 = 2;
      *(_BYTE *)(v77 + v75) = 38;
      *(_BYTE *)(*(_QWORD *)a2 + v75 + 1) = 0;
      v79 = *((_QWORD *)a2 + 1);
      if ( v79 )
        v78 = v79-- + 1;
      v80 = *(_QWORD *)a2;
      if ( *((_QWORD *)a2 + 2) < v78 )
      {
        v148 = v78;
        v119 = qvector_reserve((__int64)a2, v80, v78, 1);
        *(_QWORD *)a2 = v119;
        v78 = v148;
        v80 = v119;
      }
      *((_QWORD *)a2 + 1) = v78;
      *(_BYTE *)(v80 + v79) = 40;
      *(_BYTE *)(*(_QWORD *)a2 + v79 + 1) = 0;
      sub_1B0D60(*(_QWORD *)(a1 + 8), a2, a3, a4);
      v81 = *((_QWORD *)a2 + 1);
      v82 = 2;
      if ( v81 )
        v82 = v81-- + 1;
      v83 = *(_QWORD *)a2;
      if ( *((_QWORD *)a2 + 2) < v82 )
      {
        v113 = qvector_reserve((__int64)a2, v83, v82, 1);
        *(_QWORD *)a2 = v113;
        v83 = v113;
      }
      *((_QWORD *)a2 + 1) = v82;
      *(_BYTE *)(v83 + v81) = 41;
      *(_BYTE *)(*(_QWORD *)a2 + v81 + 1) = 0;
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) == -1 )
        goto LABEL_146;
      v84 = *((_QWORD *)a2 + 1);
      v85 = 2;
      if ( v84 )
        v85 = v84-- + 1;
      v86 = *(_QWORD *)a2;
      if ( *((_QWORD *)a2 + 2) < v85 )
      {
        v143 = qvector_reserve((__int64)a2, v86, v85, 1);
        *(_QWORD *)a2 = v143;
        v86 = v143;
      }
      *((_QWORD *)a2 + 1) = v85;
      *(_BYTE *)(v86 + v84) = 60;
      *(_BYTE *)(*(_QWORD *)a2 + v84 + 1) = 0;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 16LL) != -1 )
        sub_FAAD0((__int64 *)a2);
      v87 = *((_QWORD *)a2 + 1);
      v88 = 2;
      if ( v87 )
        v88 = v87-- + 1;
      v89 = *(_QWORD *)a2;
      if ( *((_QWORD *)a2 + 2) < v88 )
      {
        v144 = qvector_reserve((__int64)a2, v89, v88, 1);
        *(_QWORD *)a2 = v144;
        v89 = v144;
      }
      *((_QWORD *)a2 + 1) = v88;
      *(_BYTE *)(v89 + v87) = 47;
      *(_BYTE *)(*(_QWORD *)a2 + v87 + 1) = 0;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL) != -1 )
        sub_FAAD0((__int64 *)a2);
      goto LABEL_27;
    case 0xB:
      sub_32AA00((__int64 *)a2, 26);
      sub_FAAD0((__int64 *)a2);
      if ( v8 != -1 )
        sub_FAAD0((__int64 *)a2);
      v40 = 26;
      goto LABEL_137;
    case 0xC:
      sub_32AA00((__int64 *)a2, 9);
      sub_1B0860(*(_QWORD **)(a1 + 8), (__int64 *)a2, a3, a5);
LABEL_146:
      if ( v8 != -1 )
        goto LABEL_32;
      goto LABEL_136;
    case 0xD:
      sub_32AA00((__int64 *)a2, 17);
      v92 = *((_QWORD *)a2 + 1);
      v93 = 2;
      if ( v92 )
        v93 = v92-- + 1;
      v94 = *(_QWORD *)a2;
      if ( *((_QWORD *)a2 + 2) < v93 )
      {
        v117 = qvector_reserve((__int64)a2, v94, v93, 1);
        *(_QWORD *)a2 = v117;
        v94 = v117;
      }
      *((_QWORD *)a2 + 1) = v93;
      v95 = 2;
      *(_BYTE *)(v94 + v92) = 35;
      *(_BYTE *)(*(_QWORD *)a2 + v92 + 1) = 0;
      v96 = *((_QWORD *)a2 + 1);
      if ( v96 )
        v95 = v96-- + 1;
      v97 = *(_QWORD *)a2;
      if ( *((_QWORD *)a2 + 2) < v95 )
      {
        v120 = qvector_reserve((__int64)a2, v97, v95, 1);
        *(_QWORD *)a2 = v120;
        v97 = v120;
      }
      *((_QWORD *)a2 + 1) = v95;
      *(_BYTE *)(v97 + v96) = 40;
      *(_BYTE *)(*(_QWORD *)a2 + v96 + 1) = 0;
      sub_11C210(*(_QWORD *)(a1 + 8), (__int64 *)a2, a5);
      v98 = *((_QWORD *)a2 + 1);
      v99 = 2;
      if ( v98 )
        v99 = v98-- + 1;
      v100 = *(_QWORD *)a2;
      if ( *((_QWORD *)a2 + 2) < v99 )
      {
        v116 = qvector_reserve((__int64)a2, v100, v99, 1);
        *(_QWORD *)a2 = v116;
        v100 = v116;
      }
      *((_QWORD *)a2 + 1) = v99;
      *(_BYTE *)(v100 + v98) = 41;
      *(_BYTE *)(*(_QWORD *)a2 + v98 + 1) = 0;
LABEL_161:
      if ( v8 != -1 )
        sub_FAAD0((__int64 *)a2);
      v40 = 17;
      goto LABEL_137;
    case 0xE:
      sub_32AA00((__int64 *)a2, 9);
      v10 = *((_QWORD *)a2 + 1);
      if ( v10 )
      {
        v12 = v10 + 1;
        v11 = v10 + 2;
        --v10;
      }
      else
      {
        v11 = 3;
        v12 = 2;
      }
      v13 = *(_QWORD *)a2;
      if ( *((_QWORD *)a2 + 2) < v11 )
      {
        v153 = v12;
        v137 = qvector_reserve((__int64)a2, v13, v11, 1);
        *(_QWORD *)a2 = v137;
        v12 = v153;
        v13 = v137;
      }
      *((_QWORD *)a2 + 1) = v11;
      *(_BYTE *)(v13 + v12) = 0;
      *(_WORD *)(*(_QWORD *)a2 + v10) = 10298;
      sub_1B0D60(*(_QWORD *)(a1 + 8) + 16LL, a2, a3, a4);
      v14 = *((_QWORD *)a2 + 1);
      v15 = 2;
      if ( v14 )
        v15 = v14-- + 1;
      v16 = *(_QWORD *)a2;
      if ( *((_QWORD *)a2 + 2) < v15 )
      {
        v134 = qvector_reserve((__int64)a2, v16, v15, 1);
        *(_QWORD *)a2 = v134;
        v16 = v134;
      }
      *((_QWORD *)a2 + 1) = v15;
      *(_BYTE *)(v16 + v14) = 44;
      *(_BYTE *)(*(_QWORD *)a2 + v14 + 1) = 0;
      sub_1B0D60(*(_QWORD *)(a1 + 8), a2, a3, a4);
      v17 = *((_QWORD *)a2 + 1);
      v18 = 2;
      if ( v17 )
        v18 = v17-- + 1;
      v19 = *(_QWORD *)a2;
      if ( *((_QWORD *)a2 + 2) < v18 )
      {
        v138 = qvector_reserve((__int64)a2, v19, v18, 1);
        *(_QWORD *)a2 = v138;
        v19 = v138;
      }
      *((_QWORD *)a2 + 1) = v18;
      *(_BYTE *)(v19 + v17) = 41;
      *(_BYTE *)(*(_QWORD *)a2 + v17 + 1) = 0;
      goto LABEL_136;
    case 0xF:
      sub_32AA00((__int64 *)a2, 9);
      v20 = *((_QWORD *)a2 + 1);
      if ( v20 )
      {
        v22 = v20 + 1;
        v21 = v20 + 2;
        --v20;
      }
      else
      {
        v21 = 3;
        v22 = 2;
      }
      v23 = *(_QWORD *)a2;
      if ( *((_QWORD *)a2 + 2) < v21 )
      {
        v159 = v22;
        v151 = v21;
        v133 = qvector_reserve((__int64)a2, v23, v21, 1);
        *(_QWORD *)a2 = v133;
        v22 = v159;
        v23 = v133;
        v21 = v151;
      }
      *((_QWORD *)a2 + 1) = v21;
      *(_BYTE *)(v23 + v22) = 0;
      *(_WORD *)(*(_QWORD *)a2 + v20) = 15424;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 48LL) )
      {
        a5 = 0.0;
        memset(v166, 0, sizeof(v166));
        *(_QWORD *)v166 = qvector_reserve((__int64)v166, 0, 1, 1);
        *(_QWORD *)&v166[8] = 1;
        **(_BYTE **)v166 = 0;
        sub_1AE7F0((__int64 *)a2, a3, *(_QWORD *)(a1 + 8) + 48LL, (const char **)v166);
        if ( *(_QWORD *)v166 )
        {
          *(_QWORD *)&v166[8] = 0;
          qfree(*(__int64 *)v166);
        }
      }
      else
      {
        v128 = *((_QWORD *)a2 + 1);
        if ( v128 )
        {
          v129 = v128 + 1;
          v130 = v128 + 2;
          --v128;
        }
        else
        {
          v130 = 3;
          v129 = 2;
        }
        v131 = *(_QWORD *)a2;
        if ( *((_QWORD *)a2 + 2) < v130 )
        {
          v156 = v129;
          v142 = qvector_reserve((__int64)a2, v131, v130, 1);
          *(_QWORD *)a2 = v142;
          v129 = v156;
          v131 = v142;
        }
        *((_QWORD *)a2 + 1) = v130;
        *(_BYTE *)(v131 + v129) = 0;
        *(_WORD *)(*(_QWORD *)a2 + v128) = 8738;
      }
      v24 = *((_QWORD *)a2 + 1);
      v25 = 2;
      if ( v24 )
        v25 = v24-- + 1;
      v26 = *(_QWORD *)a2;
      if ( *((_QWORD *)a2 + 2) < v25 )
      {
        v135 = qvector_reserve((__int64)a2, v26, v25, 1);
        *(_QWORD *)a2 = v135;
        v26 = v135;
      }
      *((_QWORD *)a2 + 1) = v25;
      *(_BYTE *)(v26 + v24) = 32;
      *(_BYTE *)(*(_QWORD *)a2 + v24 + 1) = 0;
      sub_1C8140(
        *(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 1504LL),
        (__int64 *)a2,
        *(_QWORD *)(a1 + 8),
        *(_DWORD *)(a1 + 4));
LABEL_27:
      v27 = *((_QWORD *)a2 + 1);
      v28 = 2;
      if ( v27 )
        v28 = v27-- + 1;
      v29 = *(_QWORD *)a2;
      if ( *((_QWORD *)a2 + 2) < v28 )
      {
        v132 = qvector_reserve((__int64)a2, v29, v28, 1);
        *(_QWORD *)a2 = v132;
        v29 = v132;
      }
      *((_QWORD *)a2 + 1) = v28;
      *(_BYTE *)(v29 + v27) = 62;
      *(_BYTE *)(*(_QWORD *)a2 + v27 + 1) = 0;
      if ( v8 != -1 )
LABEL_32:
        sub_FAAD0((__int64 *)a2);
LABEL_136:
      v40 = 9;
      goto LABEL_137;
    default:
      if ( !under_debugger )
        sub_383060(0xC595u, a5);
      v108 = *((_QWORD *)a2 + 1);
      if ( v108 )
      {
        v109 = v108 + 10;
        v110 = v108 + 11;
        --v108;
      }
      else
      {
        v110 = 12;
        v109 = 11;
      }
      v111 = *(_QWORD *)a2;
      if ( *((_QWORD *)a2 + 2) < v110 )
      {
        v152 = v109;
        v136 = qvector_reserve((__int64)a2, v111, v110, 1);
        *(_QWORD *)a2 = v136;
        v109 = v152;
        v111 = v136;
      }
      *((_QWORD *)a2 + 1) = v110;
      *(_BYTE *)(v111 + v109) = 0;
      qmemcpy((void *)(*(_QWORD *)a2 + v108), "ILLEGAL_MOP", 11);
      if ( v8 != -1 )
LABEL_34:
        sub_FAAD0((__int64 *)a2);
      goto LABEL_138;
  }
}

