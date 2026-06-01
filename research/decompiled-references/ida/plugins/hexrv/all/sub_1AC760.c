unsigned __int64 __fastcall sub_1AC760(unsigned __int64 a1, char *a2, __int64 a3, unsigned int a4)
{
  __int64 *v4; // r13
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r14d
  __int64 v13; // rbp
  __int64 v14; // r14
  unsigned __int64 v15; // r15
  __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v18; // r14
  unsigned __int64 v19; // r15
  __int64 v20; // rsi
  __int64 v21; // r12
  unsigned __int64 v22; // r14
  __int64 v23; // rsi
  __int64 v24; // r15
  unsigned __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rsi
  __int64 v28; // r12
  unsigned __int64 v29; // r15
  __int64 v30; // rsi
  __int64 v31; // r12
  unsigned __int64 v32; // r15
  __int64 v33; // rsi
  unsigned int v34; // r15d
  int v35; // r12d
  _DWORD *v36; // rax
  const char *v37; // r12
  size_t v38; // rax
  __int64 v39; // r15
  size_t v40; // r8
  size_t v41; // r9
  __int64 v42; // rsi
  __int64 v43; // rdx
  unsigned __int64 v44; // rdx
  __int64 v45; // r15
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // r12
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // r8
  __int64 v52; // rsi
  char *v53; // rsi
  __int64 *v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned __int8 v57; // r12
  __int64 v58; // rdx
  __int64 v59; // rcx
  int v60; // r15d
  unsigned __int64 v61; // r15
  __int64 v62; // r14
  __int64 v63; // r12
  unsigned __int64 v64; // r15
  __int64 v65; // rsi
  const void *v66; // r15
  __int64 v67; // r12
  size_t v68; // rax
  size_t v69; // r8
  size_t v70; // r9
  __int64 v71; // rsi
  __int64 v72; // rdx
  __int64 v73; // r12
  unsigned __int64 v74; // r15
  __int64 v75; // rsi
  __int64 v76; // r12
  unsigned __int64 v77; // r15
  __int64 v78; // rsi
  _QWORD *v79; // rax
  const char *v80; // rsi
  __int64 v81; // r12
  unsigned __int64 v82; // r15
  __int64 v83; // rsi
  __int64 not_tail; // r12
  __int64 v85; // r15
  unsigned __int64 v86; // rdx
  __int64 v87; // rsi
  unsigned __int64 v88; // rdx
  __int64 v89; // r15
  __int64 v90; // rsi
  __int64 v91; // r12
  unsigned __int64 v92; // r15
  __int64 v93; // rsi
  __int64 v94; // r12
  unsigned __int64 v95; // r15
  __int64 v96; // rsi
  __int64 v97; // r12
  unsigned __int64 v98; // r15
  __int64 v99; // rsi
  int v100; // ebp
  __int64 v102; // r12
  unsigned __int64 v103; // r15
  __int64 v104; // rsi
  unsigned __int64 v105; // r15
  __int64 v106; // r12
  __int64 v107; // rsi
  __int64 v108; // r12
  unsigned __int64 v109; // r15
  __int64 v110; // rsi
  __int64 v111; // rcx
  __int64 v112; // r15
  unsigned __int64 v113; // rdx
  __int64 v114; // rsi
  __int64 v115; // rsi
  __int64 *v116; // rdx
  __int64 v117; // rax
  int v118; // edx
  __int64 v119; // r12
  __int64 v120; // r8
  unsigned __int64 v121; // r15
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // r12
  unsigned __int64 v132; // rdx
  __int64 v133; // rsi
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // rdi
  int v140; // r14d
  __int64 v141; // r12
  __int64 v142; // r8
  unsigned __int64 v143; // r15
  __int64 v144; // rsi
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  unsigned __int64 v160; // [rsp+8h] [rbp-130h]
  unsigned __int64 v161; // [rsp+8h] [rbp-130h]
  unsigned __int64 v162; // [rsp+8h] [rbp-130h]
  unsigned __int64 v163; // [rsp+8h] [rbp-130h]
  unsigned __int64 v164; // [rsp+8h] [rbp-130h]
  __int64 v165; // [rsp+8h] [rbp-130h]
  __int64 v166; // [rsp+8h] [rbp-130h]
  __int64 v167; // [rsp+8h] [rbp-130h]
  __int64 v168; // [rsp+8h] [rbp-130h]
  __int64 v169; // [rsp+8h] [rbp-130h]
  unsigned __int64 v170; // [rsp+8h] [rbp-130h]
  unsigned __int64 v171; // [rsp+10h] [rbp-128h]
  __int64 v172; // [rsp+10h] [rbp-128h]
  size_t v173; // [rsp+10h] [rbp-128h]
  size_t v174; // [rsp+10h] [rbp-128h]
  unsigned __int64 v175; // [rsp+10h] [rbp-128h]
  size_t v176; // [rsp+18h] [rbp-120h]
  size_t v177; // [rsp+18h] [rbp-120h]
  __int64 v178; // [rsp+40h] [rbp-F8h] BYREF
  __int128 v179; // [rsp+48h] [rbp-F0h]
  _BYTE v180[24]; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v181; // [rsp+78h] [rbp-C0h]
  __int64 v182; // [rsp+88h] [rbp-B0h]
  __int128 v183; // [rsp+90h] [rbp-A8h]
  __int128 v184; // [rsp+A0h] [rbp-98h]
  __int64 v185; // [rsp+D0h] [rbp-68h]
  int v186; // [rsp+D8h] [rbp-60h]
  __int64 v187; // [rsp+E0h] [rbp-58h]
  char v188; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v189; // [rsp+F8h] [rbp-40h]

  v4 = (__int64 *)a2;
  v8 = a3;
  v189 = __readfsqword(0x28u);
  v9 = sub_1AA130(a3, (__int64)a2, a1);
  v12 = *(_DWORD *)(a1 + 4);
  v13 = v9;
  switch ( *(_BYTE *)a1 )
  {
    case 0:
      if ( v12 != -1 )
        goto LABEL_34;
      goto LABEL_140;
    case 1:
      sub_325750(a2, 24, v10, v11);
      v34 = *(_DWORD *)(a1 + 4);
      v35 = *(_DWORD *)(a1 + 8);
      memset(v180, 0, sizeof(v180));
      v36 = (_DWORD *)sub_3346E0(a2);
      sub_12F430(v36, (__int64 *)v180, v35, v34);
      v37 = s1;
      if ( *(_QWORD *)&v180[8] )
        v37 = *(const char **)v180;
      if ( v37 )
      {
        v38 = strlen(v37);
        v39 = *((_QWORD *)a2 + 1);
        v40 = v38;
        v41 = v38;
        if ( v39 )
        {
          --v39;
          v41 = v38 + v39;
        }
        v42 = *(_QWORD *)a2;
        v43 = v41 + 1;
        if ( v4[2] < v41 + 1 )
        {
          v176 = v38;
          v173 = v41;
          v167 = v41 + 1;
          v153 = qvector_reserve();
          *v4 = v153;
          v40 = v176;
          v42 = v153;
          v41 = v173;
          v43 = v167;
        }
        v4[1] = v43;
        *(_BYTE *)(v42 + v41) = 0;
        memmove((void *)(v39 + *v4), v37, v40);
      }
      if ( *(_QWORD *)v180 )
      {
        *(_QWORD *)&v180[8] = 0;
        qfree();
      }
      if ( v12 != -1 )
        sub_F6610(v4);
      a2 = (char *)&qword_18;
      goto LABEL_139;
    case 2:
      v44 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)v180 = a2;
      *(_QWORD *)&v180[8] = sub_1AA130(a3, (__int64)a2, v44);
      v45 = *(_QWORD *)&v180[8];
      sub_325750(a2, 32, v46, v47);
      v48 = *(_QWORD *)(a1 + 8);
      v49 = *((_QWORD *)a2 + 1);
      v50 = 2;
      v51 = *(_QWORD *)(v48 + 16);
      if ( v49 )
        v50 = v49-- + 1;
      v52 = *(_QWORD *)a2;
      if ( v4[2] < v50 )
      {
        v171 = *(_QWORD *)(v48 + 16);
        v162 = v50;
        v134 = qvector_reserve();
        *v4 = v134;
        v51 = v171;
        v52 = v134;
        v50 = v162;
      }
      v4[1] = v50;
      *(_BYTE *)(v52 + v49) = 35;
      *(_BYTE *)(*v4 + v49 + 1) = 0;
      if ( v51 >= 0x8000000000000001LL )
      {
        v131 = v4[1];
        v132 = 2;
        if ( v131 )
          v132 = v131-- + 1;
        v133 = *v4;
        if ( v4[2] < v132 )
        {
          v175 = v51;
          v170 = v132;
          v158 = qvector_reserve();
          *v4 = v158;
          v51 = v175;
          v133 = v158;
          v132 = v170;
        }
        v4[1] = v132;
        *(_BYTE *)(v133 + v131) = 45;
        v51 = -(__int64)v51;
        *(_BYTE *)(*v4 + v131 + 1) = 0;
      }
      v53 = "0x%llX";
      v54 = v4;
      if ( v51 <= 9 )
        v53 = "%lld";
      sub_F6610(v4);
      v57 = 32;
      if ( **(_QWORD **)(a1 + 8) != -1 && (a4 & 1) != 0 )
      {
        sub_325830(v4, 32);
        sub_325750(v4, 4, v58, v59);
        if ( **(_QWORD **)(a1 + 8) == -1 )
          get_module_data();
        v53 = "@%a";
        v54 = v4;
        sub_F6610(v4);
        v57 = 4;
      }
      if ( v45 != -1 )
      {
        v60 = v45 & 7;
        if ( v60 > 2 )
          sub_1A99D0(v54, v53, v55, v56);
        sub_325830(v4, (unsigned int)(v60 + 41));
      }
      goto LABEL_63;
    case 3:
      sub_325750(a2, 25, v10, v11);
      v63 = *((_QWORD *)a2 + 1);
      v64 = 2;
      if ( v63 )
        v64 = v63-- + 1;
      v65 = *(_QWORD *)a2;
      if ( v4[2] < v64 )
      {
        v124 = qvector_reserve();
        *v4 = v124;
        v65 = v124;
      }
      v4[1] = v64;
      *(_BYTE *)(v65 + v63) = 34;
      *(_BYTE *)(*v4 + v63 + 1) = 0;
      v66 = *(const void **)(a1 + 8);
      if ( v66 )
      {
        v67 = v4[1];
        v68 = strlen(*(const char **)(a1 + 8));
        v69 = v68;
        v70 = v68;
        if ( v67 )
        {
          --v67;
          v70 = v68 + v67;
        }
        v71 = *v4;
        v72 = v70 + 1;
        if ( v4[2] < v70 + 1 )
        {
          v177 = v68;
          v174 = v70;
          v168 = v70 + 1;
          v154 = qvector_reserve();
          *v4 = v154;
          v69 = v177;
          v71 = v154;
          v70 = v174;
          v72 = v168;
        }
        v4[1] = v72;
        *(_BYTE *)(v71 + v70) = 0;
        memmove((void *)(v67 + *v4), v66, v69);
      }
      v73 = v4[1];
      v74 = 2;
      if ( v73 )
        v74 = v73-- + 1;
      v75 = *v4;
      if ( v4[2] < v74 )
      {
        v125 = qvector_reserve();
        *v4 = v125;
        v75 = v125;
      }
      v4[1] = v74;
      *(_BYTE *)(v75 + v73) = 34;
      *(_BYTE *)(*v4 + v73 + 1) = 0;
      if ( v12 != -1 )
        sub_F6610(v4);
      a2 = (_BYTE *)(&qword_18 + 1);
      goto LABEL_139;
    case 4:
      sub_325750(a2, 32, v10, v11);
      v61 = *(_QWORD *)(a1 + 8);
      v62 = sub_1AA130(a3, (__int64)a2, v61);
      v178 = 0;
      memset(v180, 0, sizeof(v180));
      v179 = 0;
      sub_1AC760(v61 + 32, &v178, a3, a4);
      sub_1AC760(v61 + 48, v180, a3, a4);
      switch ( *(_DWORD *)v61 )
      {
        case 2:
          a2 = "[%s:%s]%s.%d";
          sub_F6610(v4);
          if ( (a4 & 8) != 0 )
          {
            v137 = *(_QWORD *)(v61 + 24);
            if ( v137 != -1 )
            {
              a2 = (char *)&unk_3F3614;
              sub_F6610(v4);
            }
          }
          break;
        case 3:
        case 4:
          a2 = "mov(%s)";
          goto LABEL_213;
        case 5:
          a2 = "-(%s)";
          goto LABEL_213;
        case 6:
          a2 = "lnot(%s)";
          goto LABEL_213;
        case 7:
          a2 = "bnot(%s)";
          goto LABEL_213;
        case 8:
        case 9:
        case 0xA:
        case 0xB:
        case 0x3F:
        case 0x40:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
          a2 = "%s.%d(%s)";
          sub_F6610(v4);
          break;
        case 0xC:
          a2 = "(%s+%s)";
          goto LABEL_213;
        case 0xD:
          a2 = "(%s-%s)";
          goto LABEL_213;
        case 0xE:
          a2 = "(%s*%s)";
          goto LABEL_213;
        case 0xF:
          a2 = "(%s /u %s)";
          goto LABEL_213;
        case 0x10:
          a2 = "(%s /s %s)";
          goto LABEL_213;
        case 0x11:
          a2 = "(%s %%u %s)";
          goto LABEL_213;
        case 0x12:
          a2 = "(%s %%s %s)";
          goto LABEL_213;
        case 0x13:
          a2 = "(%s | %s)";
          goto LABEL_213;
        case 0x14:
          a2 = "(%s & %s)";
          goto LABEL_213;
        case 0x15:
          a2 = "(%s ^ %s)";
          goto LABEL_213;
        case 0x16:
          a2 = "(%s <<l %s)";
          goto LABEL_213;
        case 0x17:
          a2 = "(%s >>l %s)";
          goto LABEL_213;
        case 0x18:
          a2 = "(%s >>a %s)";
          goto LABEL_213;
        case 0x19:
          a2 = "CF(%s+%s)";
          goto LABEL_213;
        case 0x1A:
          a2 = "OF(%s+%s)";
          goto LABEL_213;
        case 0x1B:
          a2 = "CF(%s << %s)";
          goto LABEL_213;
        case 0x1C:
          a2 = "CF(%s >> %s)";
          goto LABEL_213;
        case 0x1D:
          a2 = "SF(%s)";
          goto LABEL_213;
        case 0x1E:
          a2 = "OF(%s-%s)";
          goto LABEL_213;
        case 0x1F:
          a2 = "(%s ?p %s)";
          if ( (*(_BYTE *)(v61 + 4) & 0x10) != 0 )
            a2 = "(%s <> %s)";
          goto LABEL_213;
        case 0x20:
          a2 = "(%s != %s)";
          if ( (*(_BYTE *)(v61 + 4) & 0x10) != 0 )
            a2 = "(%s !=f %s)";
          goto LABEL_213;
        case 0x21:
          a2 = "(%s == %s)";
          if ( (*(_BYTE *)(v61 + 4) & 0x10) != 0 )
            a2 = "(%s ==f %s)";
          goto LABEL_213;
        case 0x22:
          a2 = "(%s >=u %s)";
          if ( (*(_BYTE *)(v61 + 4) & 0x10) != 0 )
            a2 = "(%s >=f %s)";
          goto LABEL_213;
        case 0x23:
          a2 = "(%s <u %s)";
          if ( (*(_BYTE *)(v61 + 4) & 0x10) != 0 )
            a2 = "(%s <f %s)";
          goto LABEL_213;
        case 0x24:
          a2 = "(%s >u %s)";
          if ( (*(_BYTE *)(v61 + 4) & 0x10) != 0 )
            a2 = "(%s >f %s)";
          goto LABEL_213;
        case 0x25:
          a2 = "(%s <=u %s)";
          if ( (*(_BYTE *)(v61 + 4) & 0x10) != 0 )
            a2 = "(%s <=f %s)";
          goto LABEL_213;
        case 0x26:
          a2 = "(%s >s %s)";
          goto LABEL_213;
        case 0x27:
          a2 = "(%s >=s %s)";
          goto LABEL_213;
        case 0x28:
          a2 = "(%s <s %s)";
          goto LABEL_213;
        case 0x29:
          a2 = "(%s <=s %s)";
          goto LABEL_213;
        case 0x38:
        case 0x39:
          sub_F6610((__int64 *)a2);
          sub_1AC760(v61 + 64, a2, a3, a4);
          break;
        case 0x45:
          a2 = "(%s +f %s)";
          goto LABEL_213;
        case 0x46:
          a2 = "(%s -f %s)";
          goto LABEL_213;
        case 0x47:
          a2 = "(%s *f %s)";
          goto LABEL_213;
        case 0x48:
          a2 = "(%s /f %s)";
LABEL_213:
          sub_F6610(v4);
          break;
        default:
          a2 = "?%s?";
          sub_F6610(v4);
          break;
      }
      if ( *(_QWORD *)v180 )
      {
        *(_QWORD *)&v180[8] = 0;
        qfree();
      }
      v139 = v178;
      if ( v178 )
      {
        *(_QWORD *)&v179 = 0;
        qfree();
      }
      if ( v62 != -1 )
      {
        v140 = v62 & 7;
        if ( v140 > 2 )
          sub_1A99D0(v139, a2, v137, v138);
        sub_325830(v4, (unsigned int)(v140 + 41));
      }
      a2 = (char *)&qword_20;
      goto LABEL_139;
    case 5:
      sub_325750(a2, 17, v10, v11);
      v76 = *((_QWORD *)a2 + 1);
      v77 = 2;
      if ( v76 )
        v77 = v76-- + 1;
      v78 = *(_QWORD *)a2;
      if ( v4[2] < v77 )
      {
        v135 = qvector_reserve();
        *v4 = v135;
        v78 = v135;
      }
      v4[1] = v77;
      *(_BYTE *)(v78 + v76) = 37;
      *(_BYTE *)(*v4 + v76 + 1) = 0;
      v79 = *(_QWORD **)(a1 + 8);
      v182 = 0;
      v185 = 1;
      v186 = -1;
      v187 = 0;
      v188 = 0;
      memset(v180, 0, sizeof(v180));
      v181 = 0;
      v183 = 0;
      v184 = 0;
      if ( sub_1CBBD0(*v79, v180, v79[1], &v178, 0) == -1 )
        goto LABEL_92;
      v80 = s1;
      if ( (_QWORD)v181 )
        v80 = *(const char **)&v180[16];
      sub_1A9A20(v4, v80);
      if ( v178 != *(_QWORD *)v180 >> 3 )
LABEL_92:
        sub_F6610(v4);
      clear_tinfo_t();
      if ( v182 )
      {
        *(_QWORD *)&v183 = 0;
        qfree();
      }
      if ( *(_QWORD *)&v180[16] )
      {
        *(_QWORD *)&v181 = 0;
        qfree();
      }
      goto LABEL_163;
    case 6:
      sub_325750(a2, 7, v10, v11);
      v81 = *((_QWORD *)a2 + 1);
      v82 = 2;
      if ( v81 )
        v82 = v81-- + 1;
      v83 = *(_QWORD *)a2;
      if ( v4[2] < v82 )
      {
        v122 = qvector_reserve();
        *v4 = v122;
        v83 = v122;
      }
      v4[1] = v82;
      *(_BYTE *)(v83 + v81) = 36;
      *(_BYTE *)(*v4 + v81 + 1) = 0;
      not_tail = *(_QWORD *)(a1 + 8);
      if ( (get_flags_ex() & 0x600) == 0x200 )
        not_tail = prev_not_tail();
      if ( (get_flags_ex() & 0xC000) == 0 )
        set_dummy_name();
      memset(v180, 0, sizeof(v180));
      if ( get_ea_name() <= 0 )
      {
        if ( *(_QWORD *)(a1 + 8) == -1 )
          get_module_data();
        goto LABEL_108;
      }
      sub_1A9A20(v4, *(const char **)v180);
      if ( *(_QWORD *)(a1 + 8) != not_tail )
LABEL_108:
        sub_F6610(v4);
      if ( v12 != -1 )
        sub_F6610(v4);
      a2 = &byte_7;
LABEL_139:
      v8 = (__int64)v4;
      sub_325830(v4, a2);
LABEL_140:
      if ( (a4 & 2) != 0 && *(_WORD *)(a1 + 2) )
      {
        sub_325750(v4, 4, v10, v11);
        sub_F6610(v4);
        a2 = &byte_4;
        v8 = (__int64)v4;
        sub_325830(v4, 4);
      }
      if ( v13 != -1 )
      {
        v100 = v13 & 7;
        if ( v100 > 2 )
          sub_1A99D0(v8, a2, v10, v11);
        sub_325830(v4, (unsigned int)(v100 + 41));
      }
      return v189 - __readfsqword(0x28u);
    case 7:
      sub_325750(a2, 28, v10, v11);
      v112 = *((_QWORD *)a2 + 1);
      v113 = 2;
      if ( v112 )
        v113 = v112-- + 1;
      v114 = *(_QWORD *)a2;
      if ( v4[2] < v113 )
      {
        v160 = v113;
        v128 = qvector_reserve();
        *v4 = v128;
        v113 = v160;
        v114 = v128;
      }
      v4[1] = v113;
      *(_BYTE *)(v114 + v112) = 64;
      *(_BYTE *)(*v4 + v112 + 1) = 0;
      sub_1AB100(a3, v4, *(unsigned int *)(a1 + 8), v111);
      if ( v12 != -1 )
        sub_F6610(v4);
      a2 = (_BYTE *)(&qword_18 + 4);
      goto LABEL_139;
    case 8:
      sub_325750(a2, 9, v10, v11);
      sub_1AE480(*(_QWORD *)(a1 + 8), a2, a3, v12, a4);
      goto LABEL_138;
    case 9:
      if ( **(_QWORD **)(a1 + 8) )
      {
        v115 = 34;
        v57 = 34;
      }
      else
      {
        v115 = 18;
        v57 = 18;
      }
      sub_325750(v4, v115, v10, v11);
      v116 = *(__int64 **)(a1 + 8);
      v117 = *v116;
      v118 = *((_DWORD *)v116 + 4);
      if ( v117
        && (unsigned __int64)v118 < *(_QWORD *)(v117 + 440)
        && (v152 = *(_QWORD *)(v117 + 432) + 104LL * v118, *(_QWORD *)(v152 + 40) > 1u) )
      {
        sub_1A9A20(v4, *(const char **)(v152 + 32));
      }
      else
      {
        sub_F6610(v4);
      }
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) )
        sub_F6610(v4);
LABEL_63:
      if ( v12 != -1 )
        sub_F6610(v4);
      a2 = (char *)v57;
      goto LABEL_139;
    case 0xA:
      sub_325750(a2, 9, v10, v11);
      v85 = *((_QWORD *)a2 + 1);
      v86 = 2;
      if ( v85 )
        v86 = v85-- + 1;
      v87 = *(_QWORD *)a2;
      if ( v4[2] < v86 )
      {
        v163 = v86;
        v136 = qvector_reserve();
        *v4 = v136;
        v86 = v163;
        v87 = v136;
      }
      v4[1] = v86;
      v88 = 2;
      *(_BYTE *)(v87 + v85) = 38;
      *(_BYTE *)(*v4 + v85 + 1) = 0;
      v89 = v4[1];
      if ( v89 )
        v88 = v89-- + 1;
      v90 = *v4;
      if ( v4[2] < v88 )
      {
        v161 = v88;
        v129 = qvector_reserve();
        *v4 = v129;
        v88 = v161;
        v90 = v129;
      }
      v4[1] = v88;
      *(_BYTE *)(v90 + v89) = 40;
      *(_BYTE *)(*v4 + v89 + 1) = 0;
      sub_1AC760(*(_QWORD *)(a1 + 8), v4, a3, a4);
      v91 = v4[1];
      v92 = 2;
      if ( v91 )
        v92 = v91-- + 1;
      v93 = *v4;
      if ( v4[2] < v92 )
      {
        v123 = qvector_reserve();
        *v4 = v123;
        v93 = v123;
      }
      v4[1] = v92;
      *(_BYTE *)(v93 + v91) = 41;
      *(_BYTE *)(*v4 + v91 + 1) = 0;
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) == -1 )
        goto LABEL_148;
      v94 = v4[1];
      v95 = 2;
      if ( v94 )
        v95 = v94-- + 1;
      v96 = *v4;
      if ( v4[2] < v95 )
      {
        v156 = qvector_reserve();
        *v4 = v156;
        v96 = v156;
      }
      v4[1] = v95;
      *(_BYTE *)(v96 + v94) = 60;
      *(_BYTE *)(*v4 + v94 + 1) = 0;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 16LL) != -1 )
        sub_F6610(v4);
      v97 = v4[1];
      v98 = 2;
      if ( v97 )
        v98 = v97-- + 1;
      v99 = *v4;
      if ( v4[2] < v98 )
      {
        v157 = qvector_reserve();
        *v4 = v157;
        v99 = v157;
      }
      v4[1] = v98;
      *(_BYTE *)(v99 + v97) = 47;
      *(_BYTE *)(*v4 + v97 + 1) = 0;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL) != -1 )
        sub_F6610(v4);
      goto LABEL_27;
    case 0xB:
      sub_325750(a2, 26, v10, v11);
      sub_F6610((__int64 *)a2);
      if ( v12 != -1 )
        sub_F6610((__int64 *)a2);
      a2 = (_BYTE *)(&qword_18 + 2);
      goto LABEL_139;
    case 0xC:
      sub_325750(a2, 9, v10, v11);
      sub_1AC260(*(_QWORD **)(a1 + 8), (__int64 *)a2, a3);
LABEL_148:
      if ( v12 != -1 )
        goto LABEL_32;
      goto LABEL_138;
    case 0xD:
      sub_325750(a2, 17, v10, v11);
      v102 = *((_QWORD *)a2 + 1);
      v103 = 2;
      if ( v102 )
        v103 = v102-- + 1;
      v104 = *(_QWORD *)a2;
      if ( v4[2] < v103 )
      {
        v127 = qvector_reserve();
        *v4 = v127;
        v104 = v127;
      }
      v4[1] = v103;
      v105 = 2;
      *(_BYTE *)(v104 + v102) = 35;
      *(_BYTE *)(*v4 + v102 + 1) = 0;
      v106 = v4[1];
      if ( v106 )
        v105 = v106-- + 1;
      v107 = *v4;
      if ( v4[2] < v105 )
      {
        v130 = qvector_reserve();
        *v4 = v130;
        v107 = v130;
      }
      v4[1] = v105;
      *(_BYTE *)(v107 + v106) = 40;
      *(_BYTE *)(*v4 + v106 + 1) = 0;
      sub_117D50(*(_QWORD *)(a1 + 8), v4);
      v108 = v4[1];
      v109 = 2;
      if ( v108 )
        v109 = v108-- + 1;
      v110 = *v4;
      if ( v4[2] < v109 )
      {
        v126 = qvector_reserve();
        *v4 = v126;
        v110 = v126;
      }
      v4[1] = v109;
      *(_BYTE *)(v110 + v108) = 41;
      *(_BYTE *)(*v4 + v108 + 1) = 0;
LABEL_163:
      if ( v12 != -1 )
        sub_F6610(v4);
      a2 = (_BYTE *)(&word_10 + 1);
      goto LABEL_139;
    case 0xE:
      sub_325750(a2, 9, v10, v11);
      v14 = *((_QWORD *)a2 + 1);
      if ( v14 )
      {
        v16 = v14 + 1;
        v15 = v14 + 2;
        --v14;
      }
      else
      {
        v15 = 3;
        v16 = 2;
      }
      v17 = *(_QWORD *)a2;
      if ( v4[2] < v15 )
      {
        v166 = v16;
        v150 = qvector_reserve();
        *v4 = v150;
        v16 = v166;
        v17 = v150;
      }
      v4[1] = v15;
      *(_BYTE *)(v17 + v16) = 0;
      *(_WORD *)(*v4 + v14) = 10298;
      sub_1AC760(*(_QWORD *)(a1 + 8) + 16LL, v4, a3, a4);
      v18 = v4[1];
      v19 = 2;
      if ( v18 )
        v19 = v18-- + 1;
      v20 = *v4;
      if ( v4[2] < v19 )
      {
        v147 = qvector_reserve();
        *v4 = v147;
        v20 = v147;
      }
      v4[1] = v19;
      *(_BYTE *)(v20 + v18) = 44;
      *(_BYTE *)(*v4 + v18 + 1) = 0;
      sub_1AC760(*(_QWORD *)(a1 + 8), v4, a3, a4);
      v21 = v4[1];
      v22 = 2;
      if ( v21 )
        v22 = v21-- + 1;
      v23 = *v4;
      if ( v4[2] < v22 )
      {
        v151 = qvector_reserve();
        *v4 = v151;
        v23 = v151;
      }
      v4[1] = v22;
      *(_BYTE *)(v23 + v21) = 41;
      *(_BYTE *)(*v4 + v21 + 1) = 0;
      goto LABEL_138;
    case 0xF:
      sub_325750(a2, 9, v10, v11);
      v24 = *((_QWORD *)a2 + 1);
      if ( v24 )
      {
        v26 = v24 + 1;
        v25 = v24 + 2;
        --v24;
      }
      else
      {
        v25 = 3;
        v26 = 2;
      }
      v27 = *(_QWORD *)a2;
      if ( v4[2] < v25 )
      {
        v172 = v26;
        v164 = v25;
        v146 = qvector_reserve();
        *v4 = v146;
        v26 = v172;
        v27 = v146;
        v25 = v164;
      }
      v4[1] = v25;
      *(_BYTE *)(v27 + v26) = 0;
      *(_WORD *)(*v4 + v24) = 15424;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 48LL) )
      {
        *(_OWORD *)&v180[8] = 0;
        *(_QWORD *)v180 = qvector_reserve();
        *(_QWORD *)&v180[8] = 1;
        **(_BYTE **)v180 = 0;
        sub_1AA1F0(v4, a3, *(_QWORD *)(a1 + 8) + 48LL, (__int64 *)v180);
        if ( *(_QWORD *)v180 )
        {
          *(_QWORD *)&v180[8] = 0;
          qfree();
        }
      }
      else
      {
        v141 = v4[1];
        if ( v141 )
        {
          v142 = v141 + 1;
          v143 = v141 + 2;
          --v141;
        }
        else
        {
          v143 = 3;
          v142 = 2;
        }
        v144 = *v4;
        if ( v4[2] < v143 )
        {
          v169 = v142;
          v155 = qvector_reserve();
          *v4 = v155;
          v142 = v169;
          v144 = v155;
        }
        v4[1] = v143;
        *(_BYTE *)(v144 + v142) = 0;
        *(_WORD *)(*v4 + v141) = 8738;
      }
      v28 = v4[1];
      v29 = 2;
      if ( v28 )
        v29 = v28-- + 1;
      v30 = *v4;
      if ( v4[2] < v29 )
      {
        v148 = qvector_reserve();
        *v4 = v148;
        v30 = v148;
      }
      v4[1] = v29;
      *(_BYTE *)(v30 + v28) = 32;
      *(_BYTE *)(*v4 + v28 + 1) = 0;
      sub_1C3AC0(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 1504LL),
        v4,
        *(_QWORD *)(a1 + 8),
        *(unsigned int *)(a1 + 4));
LABEL_27:
      v31 = v4[1];
      v32 = 2;
      if ( v31 )
        v32 = v31-- + 1;
      v33 = *v4;
      if ( v4[2] < v32 )
      {
        v145 = qvector_reserve();
        *v4 = v145;
        v33 = v145;
      }
      v4[1] = v32;
      *(_BYTE *)(v33 + v31) = 62;
      *(_BYTE *)(*v4 + v31 + 1) = 0;
      if ( v12 != -1 )
LABEL_32:
        sub_F6610(v4);
LABEL_138:
      a2 = byte_9;
      goto LABEL_139;
    default:
      if ( !under_debugger )
        sub_37DDE0(50581);
      v119 = *((_QWORD *)a2 + 1);
      if ( v119 )
      {
        v120 = v119 + 10;
        v121 = v119 + 11;
        --v119;
      }
      else
      {
        v121 = 12;
        v120 = 11;
      }
      a2 = *(char **)a2;
      if ( v4[2] < v121 )
      {
        v8 = (__int64)v4;
        v165 = v120;
        v149 = qvector_reserve();
        *v4 = v149;
        v120 = v165;
        a2 = (char *)v149;
      }
      v4[1] = v121;
      a2[v120] = 0;
      qmemcpy((void *)(*v4 + v119), "ILLEGAL_MOP", 11);
      if ( v12 != -1 )
      {
LABEL_34:
        a2 = ".%d";
        v8 = (__int64)v4;
        sub_F6610(v4);
      }
      goto LABEL_140;
  }
}

