__int64 __fastcall sub_13DB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  __int64 v7; // r14
  __int64 result; // rax
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 (__fastcall *v17)(__int64, __int64); // rsi
  __int64 *v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rdi
  unsigned int v25; // r11d
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 (__fastcall *v28)(__int64, __int64); // r8
  __int64 *v29; // rdx
  unsigned int v30; // edx
  __int64 v31; // rax
  __int64 v32; // rsi
  __int16 *v33; // rbp
  __int64 v34; // rcx
  __int64 v35; // rsi
  int *v36; // rax
  int v37; // eax
  __int64 v38; // rdx
  bool v39; // bl
  unsigned int v40; // eax
  __int64 **v41; // rdx
  unsigned int v42; // eax
  __int64 *v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // rdx
  unsigned int v46; // edx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rdi
  __int64 *v50; // rax
  unsigned int v51; // edx
  __int64 v52; // rax
  __int64 v53; // rsi
  const char *v54; // rdi
  __int64 v55; // rcx
  int v56; // r9d
  __int64 v57; // rsi
  _DWORD *v58; // r11
  __int64 v59; // rcx
  __int64 *v60; // rbp
  _DWORD *v61; // rax
  __int64 v62; // rax
  unsigned int v63; // eax
  __int64 *v64; // rdx
  unsigned int v65; // edx
  __int64 v66; // rax
  __int64 *v67; // rdi
  __int64 v68; // rdx
  unsigned __int8 **v69; // rax
  unsigned int v70; // eax
  __int64 *v71; // rdx
  unsigned int v72; // edx
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rsi
  __int64 *v76; // rax
  unsigned int v77; // eax
  __int64 *v78; // rdx
  unsigned int v79; // eax
  _QWORD **v80; // rdx
  unsigned int v81; // eax
  __int64 *v82; // rdx
  __int64 v83; // rdi
  __int64 v84; // r12
  __int64 v85; // r13
  _QWORD *v86; // rbx
  __int64 v87; // rdi
  __int64 v88; // rbp
  __int64 i; // r15
  __int64 *v90; // r14
  __int64 v91; // rdi
  __int64 v92; // rdi
  __int64 v93; // rdi
  __int64 v94; // rdi
  unsigned int v95; // eax
  __int64 *v96; // rdx
  unsigned int v97; // edx
  __int64 v98; // rax
  __int64 v99; // rsi
  _DWORD *v100; // rbp
  __int64 v101; // rcx
  __int64 v102; // rdi
  __int64 *v103; // rax
  unsigned int v104; // eax
  __int64 *v105; // rdx
  unsigned __int64 v106; // rax
  __int64 v107; // rdx
  __int64 *v108; // rdi
  __int64 *v109; // rbx
  __int64 *v110; // r15
  __int64 v111; // r12
  __int64 dword; // r13
  unsigned int v113; // ebp
  void *v114; // rsi
  unsigned int v115; // eax
  __int64 v116; // rdx
  unsigned int v117; // edx
  __int64 v118; // rax
  __int64 v119; // rcx
  _QWORD *v120; // rsi
  _DWORD *v121; // rax
  unsigned int v122; // eax
  _QWORD *v123; // rdx
  unsigned int v124; // eax
  int *v125; // rdx
  int v126; // eax
  __int64 v127; // rdx
  bool v128; // zf
  _UNKNOWN **v129; // rax
  __int64 v130; // r13
  __int64 v131; // r12
  __int64 *v132; // rbx
  __int64 v133; // rdi
  __int64 v134; // rbp
  __int64 j; // r14
  __int64 *v136; // r15
  __int64 v137; // rdi
  __int64 v138; // rdi
  __int64 v139; // rdi
  __int64 v140; // rdi
  __int64 v141; // rdi
  unsigned int v142; // edx
  __int64 v143; // rax
  __int64 v144; // rcx
  __int64 *v145; // rbp
  __int64 *v146; // rax
  __int64 v147; // r8
  __int64 v148; // r9
  _WORD *v149; // rax
  size_t v150; // r9
  size_t v151; // rdx
  __int64 v152; // r8
  size_t v153; // r11
  void *v154; // rdx
  _QWORD *v155; // rax
  _QWORD *v156; // rdx
  __int64 *v157; // rdx
  __int64 *v158; // rax
  unsigned int *v159; // rdx
  unsigned int *v160; // rax
  __int64 (__fastcall **v161)(__int64, __int64); // rax
  const char **v162; // rax
  int *v163; // rdx
  _DWORD **v164; // rax
  _QWORD **v165; // rdx
  __int64 *v166; // rdx
  __int64 **v167; // rdx
  __int64 *v168; // rdx
  _QWORD **v169; // rax
  __int64 *v170; // rdx
  __int64 *v171; // rax
  __int64 (__fastcall **v172)(__int64, __int64); // rax
  _DWORD **v173; // rax
  __int64 *v174; // rdx
  _QWORD **v175; // rdx
  _QWORD **v176; // rdx
  __int64 v177; // rdx
  char *v178; // rax
  __int64 v179; // [rsp+8h] [rbp-D0h]
  __int64 v180; // [rsp+8h] [rbp-D0h]
  size_t n; // [rsp+10h] [rbp-C8h]
  size_t na; // [rsp+10h] [rbp-C8h]
  size_t nb; // [rsp+10h] [rbp-C8h]
  size_t nc; // [rsp+10h] [rbp-C8h]
  size_t v185; // [rsp+18h] [rbp-C0h]
  __int64 v186; // [rsp+20h] [rbp-B8h]
  size_t v187; // [rsp+28h] [rbp-B0h]
  __int64 *v188; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v189; // [rsp+38h] [rbp-A0h]
  char *v190; // [rsp+50h] [rbp-88h] BYREF
  __int128 v191; // [rsp+58h] [rbp-80h]
  void *src; // [rsp+70h] [rbp-68h] BYREF
  __int128 v193; // [rsp+78h] [rbp-60h]
  __int16 v194; // [rsp+8Eh] [rbp-4Ah] BYREF
  __int64 v195; // [rsp+90h] [rbp-48h]
  unsigned __int64 v196; // [rsp+98h] [rbp-40h]

  v7 = a1;
  v196 = __readfsqword(0x28u);
  if ( a2 > 96 )
  {
    if ( a2 != 1001 )
    {
      if ( a2 != 1007 )
      {
        if ( a2 != 1000 )
          return 0;
        v10 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v169 = *(_QWORD ***)(a3 + 8);
          v170 = (__int64 *)(v169 + 1);
          *(_QWORD *)(a3 + 8) = v169 + 1;
          v13 = *v169;
        }
        else
        {
          v11 = *(_QWORD *)(a3 + 16);
          v12 = v10 + 8;
          *(_DWORD *)a3 = v12;
          v13 = *(__int64 **)(v11 + v10);
          if ( (unsigned int)v12 <= 0x2F )
          {
            *(_DWORD *)a3 = v10 + 16;
            v14 = *(_QWORD *)(v11 + v12);
            if ( v10 + 16 <= 0x2F )
            {
              v15 = v10 + 24;
              *(_DWORD *)a3 = v15;
              if ( (unsigned int)v15 <= 0x2F )
              {
                v16 = v10 + 32;
                *(_DWORD *)a3 = v16;
                v17 = *(__int64 (__fastcall **)(__int64, __int64))(v11 + v15);
                if ( (unsigned int)v16 <= 0x2F )
                {
                  v18 = (__int64 *)(v16 + v11);
                  *(_DWORD *)a3 = v10 + 40;
LABEL_16:
                  *v13 = sub_EB00(v7, v14, v17, *v18);
                  return 1;
                }
                v18 = *(__int64 **)(a3 + 8);
LABEL_225:
                *(_QWORD *)(a3 + 8) = v18 + 1;
                goto LABEL_16;
              }
              v172 = *(__int64 (__fastcall ***)(__int64, __int64))(a3 + 8);
LABEL_224:
              v18 = (__int64 *)(v172 + 1);
              *(_QWORD *)(a3 + 8) = v172 + 1;
              v17 = *v172;
              goto LABEL_225;
            }
            v171 = *(__int64 **)(a3 + 8);
LABEL_223:
            v172 = (__int64 (__fastcall **)(__int64, __int64))(v171 + 1);
            goto LABEL_224;
          }
          v170 = *(__int64 **)(a3 + 8);
        }
        v171 = v170 + 1;
        *(_QWORD *)(a3 + 8) = v170 + 1;
        v14 = *v170;
        goto LABEL_223;
      }
      v19 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v157 = *(__int64 **)(a3 + 8);
        v158 = v157 + 1;
        *(_QWORD *)(a3 + 8) = v157 + 1;
        v22 = *v157;
      }
      else
      {
        v20 = *(_QWORD *)(a3 + 16);
        v21 = v19 + 8;
        *(_DWORD *)a3 = v21;
        v22 = *(_QWORD *)(v20 + v19);
        if ( (unsigned int)v21 <= 0x2F )
        {
          v23 = v19 + 16;
          *(_DWORD *)a3 = v23;
          v24 = *(_QWORD *)(v20 + v21);
          if ( (unsigned int)v23 <= 0x2F )
          {
            *(_DWORD *)a3 = v19 + 24;
            v25 = *(_DWORD *)(v20 + v23);
            if ( v19 + 24 <= 0x2F )
            {
              v26 = v19 + 32;
              *(_DWORD *)a3 = v26;
              if ( (unsigned int)v26 <= 0x2F )
              {
                v27 = v19 + 40;
                *(_DWORD *)a3 = v27;
                v28 = *(__int64 (__fastcall **)(__int64, __int64))(v20 + v26);
                if ( (unsigned int)v27 <= 0x2F )
                {
                  v29 = (__int64 *)(v27 + v20);
                  *(_DWORD *)a3 = v19 + 48;
                  return (unsigned __int8)sub_EF80(v7, v22, v24, v25, v28, *v29);
                }
                v29 = *(__int64 **)(a3 + 8);
LABEL_203:
                *(_QWORD *)(a3 + 8) = v29 + 1;
                return (unsigned __int8)sub_EF80(v7, v22, v24, v25, v28, *v29);
              }
              v161 = *(__int64 (__fastcall ***)(__int64, __int64))(a3 + 8);
LABEL_202:
              v29 = (__int64 *)(v161 + 1);
              *(_QWORD *)(a3 + 8) = v161 + 1;
              v28 = *v161;
              goto LABEL_203;
            }
            v160 = *(unsigned int **)(a3 + 8);
LABEL_201:
            v161 = (__int64 (__fastcall **)(__int64, __int64))(v160 + 2);
            goto LABEL_202;
          }
          v159 = *(unsigned int **)(a3 + 8);
LABEL_200:
          v160 = v159 + 2;
          *(_QWORD *)(a3 + 8) = v159 + 2;
          v25 = *v159;
          goto LABEL_201;
        }
        v158 = *(__int64 **)(a3 + 8);
      }
      v159 = (unsigned int *)(v158 + 1);
      *(_QWORD *)(a3 + 8) = v158 + 1;
      v24 = *v158;
      goto LABEL_200;
    }
    v142 = *(_DWORD *)a3;
    if ( v142 > 0x2F )
    {
      v176 = *(_QWORD ***)(a3 + 8);
      v146 = (__int64 *)(v176 + 1);
      *(_QWORD *)(a3 + 8) = v176 + 1;
      v145 = *v176;
    }
    else
    {
      v143 = *(_QWORD *)(a3 + 16);
      v144 = v142 + 8;
      *(_DWORD *)a3 = v144;
      v145 = *(__int64 **)(v143 + v142);
      if ( (unsigned int)v144 <= 0x2F )
      {
        v146 = (__int64 *)(v144 + v143);
        *(_DWORD *)a3 = v142 + 16;
LABEL_174:
        *v145 = sub_EE40(a1, *v146);
        return 1;
      }
      v146 = *(__int64 **)(a3 + 8);
    }
    *(_QWORD *)(a3 + 8) = v146 + 1;
    goto LABEL_174;
  }
  if ( a2 < 0 )
    return 0;
  switch ( a2 )
  {
    case 0LL:
      netnode_check(a1 + 120, "$ mc68k", 0, 1);
      netnode_check(a1 + 128, "$ frame pointers", 0, 1);
      hook_event_listener(3, a1 + 136, &LPH, 0);
      setinf_flag(3, 32, 1);
      read_ioports(a1 + 160, 0, "atrap.cfg", 0);
      return 0;
    case 1LL:
      v83 = *(_QWORD *)(a1 + 160);
      if ( v83 )
      {
        if ( *(_QWORD *)(v7 + 168) )
        {
          n = *(_QWORD *)(v7 + 168);
          v84 = 0;
          v85 = 0;
          v179 = v7;
          do
          {
            v86 = (_QWORD *)(v83 + v84);
            v87 = *(_QWORD *)(v83 + v84 + 56);
            if ( v87 )
            {
              v88 = v86[8];
              if ( v88 )
              {
                for ( i = 0; i != v88; ++i )
                {
                  v90 = (__int64 *)(v87 + 48 * i);
                  v91 = v90[3];
                  if ( v91 )
                  {
                    v90[4] = 0;
                    qfree(v91);
                  }
                  v92 = *v90;
                  if ( *v90 )
                  {
                    v90[1] = 0;
                    qfree(v92);
                  }
                  v87 = v86[7];
                }
              }
              v86[8] = 0;
              qfree(v87);
            }
            v93 = v86[4];
            if ( v93 )
            {
              v86[5] = 0;
              qfree(v93);
            }
            v94 = v86[1];
            if ( v94 )
            {
              v86[2] = 0;
              qfree(v94);
            }
            ++v85;
            v84 += 88;
            v83 = *(_QWORD *)(v179 + 160);
          }
          while ( n != v85 );
          v7 = v179;
        }
        *(_QWORD *)(v7 + 168) = 0;
        qfree(v83);
        *(_QWORD *)(v7 + 160) = 0;
        *(_QWORD *)(v7 + 176) = 0;
      }
      unhook_event_listener(3, v7 + 136);
      clr_module_data((unsigned int)dword_1D4B0);
      return 0;
    case 2LL:
      v124 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v125 = *(int **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v125 + 2;
      }
      else
      {
        v125 = (int *)(*(_QWORD *)(a3 + 16) + v124);
        *(_DWORD *)a3 = v124 + 8;
      }
      v126 = *v125;
      v127 = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 188) = v126;
      v128 = v126 == 0;
      v129 = &off_1BF00;
      if ( v128 )
        v129 = &off_1BEC0;
      *(_QWORD *)(v127 + 40) = v129;
      return 0;
    case 4LL:
      *(_QWORD *)(a1 + 192) = get_name_ea(-1, "A5BASE");
      *(_QWORD *)(a1 + 200) = get_name_ea(-1, "A4BASE");
      v106 = getinf(5);
      if ( (unsigned int)v106 <= 0xD )
      {
        v107 = -8293;
        if ( !_bittest64(&v107, v106) )
        {
          v188 = nullptr;
          v189 = 0;
          read_ioports(&v188, 0, "mc68kvec.cfg", 0);
          v108 = v188;
          v109 = v188;
          v110 = &v188[11 * v189];
          if ( v188 != v110 )
          {
            do
            {
              v111 = *v109;
              if ( !(unsigned __int8)create_data(*v109, 0x20000000, 4, -1) )
                break;
              dword = (unsigned int)get_dword(v111);
              v113 = dword;
              if ( (unsigned __int8)is_mapped(dword) )
              {
                op_offset(v111, 0, 2, -1, 0, 0);
                if ( v111 )
                {
                  v193 = 0;
                  src = nullptr;
                  v149 = (_WORD *)qvector_reserve(&src, 0, 7, 1, v147, v148);
                  src = v149;
                  *(_QWORD *)&v193 = 7;
                  *(_DWORD *)v149 = 1953391967;
                  v149[2] = 31090;
                  *((_BYTE *)src + 6) = 0;
                  v190 = nullptr;
                  v191 = 0;
                  if ( v109[2] )
                  {
                    nb = v109[2];
                    v190 = (char *)qalloc_or_throw(nb);
                    *((_QWORD *)&v191 + 1) = nb;
                    memcpy(v190, (const void *)v109[1], nb);
                    *(_QWORD *)&v191 = nb;
                  }
                  v151 = v193;
                  if ( (_QWORD)v193 )
                  {
                    v150 = v193 - 1;
                    if ( (_QWORD)v193 != 1 )
                    {
                      v152 = v191;
                      v153 = v193 - 1;
                      if ( (_QWORD)v191 )
                      {
                        v152 = v191 - 1;
                        v153 = v150 + v191 - 1;
                        v151 = v193 + v191 - 1;
                      }
                      if ( *((_QWORD *)&v191 + 1) < v151 )
                      {
                        v187 = v153;
                        v186 = v152;
                        v185 = v193 - 1;
                        nc = v151;
                        v178 = (char *)qvector_reserve(&v190, v190, v151, 1, v152, v150);
                        v153 = v187;
                        v152 = v186;
                        v190 = v178;
                        v150 = v185;
                        v151 = nc;
                      }
                      *(_QWORD *)&v191 = v151;
                      v190[v153] = 0;
                      memcpy(&v190[v152], src, v150);
                    }
                  }
                  if ( src )
                  {
                    *(_QWORD *)&v193 = 0;
                    qfree(src);
                  }
                  v154 = &unk_16EE8;
                  if ( (_QWORD)v191 )
                    v154 = v190;
                  add_entry(dword, dword, v154, 1, 0, v150);
                  auto_mark_range(dword, dword + 1, 30);
                  if ( v111 == 4 && getinf(16) == -1 )
                  {
                    setinf(16, dword);
                    setinf(15, dword);
                    setinf(14, 1);
                  }
                  if ( v190 )
                  {
                    *(_QWORD *)&v191 = 0;
                    qfree(v190);
                  }
                }
              }
              else
              {
                v113 = v111;
              }
              v114 = &unk_16EE8;
              if ( v109[2] )
                v114 = (void *)v109[1];
              set_name(v111, v114, 0);
              if ( (unsigned __int64)v109[5] > 1 )
                set_cmt(v113, v109[4], 1);
              v109 += 11;
            }
            while ( v110 != v109 );
            v108 = v188;
          }
          if ( v108 )
          {
            v130 = 0;
            if ( (_QWORD)v189 )
            {
              v180 = v189;
              v131 = 0;
              na = v7;
              do
              {
                v132 = &v108[v131];
                v133 = v108[v131 + 7];
                if ( v133 )
                {
                  v134 = v132[8];
                  if ( v134 )
                  {
                    for ( j = 0; j != v134; ++j )
                    {
                      v136 = (__int64 *)(v133 + 48 * j);
                      v137 = v136[3];
                      if ( v137 )
                      {
                        v136[4] = 0;
                        qfree(v137);
                      }
                      v138 = *v136;
                      if ( *v136 )
                      {
                        v136[1] = 0;
                        qfree(v138);
                      }
                      v133 = v132[7];
                    }
                  }
                  v132[8] = 0;
                  qfree(v133);
                }
                v139 = v132[4];
                if ( v139 )
                {
                  v132[5] = 0;
                  qfree(v139);
                }
                v140 = v132[1];
                if ( v140 )
                {
                  v132[2] = 0;
                  qfree(v140);
                }
                v108 = v188;
                ++v130;
                v131 += 11;
              }
              while ( v180 != v130 );
              v7 = na;
            }
            *(_QWORD *)&v189 = 0;
            qfree(v108);
          }
        }
      }
      v141 = *(_QWORD *)(v7 + 120);
      src = (void *)*(unsigned __int16 *)(v7 + 184);
      netnode_supset(v141, -1, &src, 8, 65);
      return 0;
    case 5LL:
      goto LABEL_5;
    case 8LL:
      v51 = *(_DWORD *)a3;
      if ( v51 > 0x2F )
      {
        v162 = *(const char ***)(a3 + 8);
        v163 = (int *)(v162 + 1);
        *(_QWORD *)(a3 + 8) = v162 + 1;
        v54 = *v162;
      }
      else
      {
        v52 = *(_QWORD *)(a3 + 16);
        v53 = v51 + 8;
        *(_DWORD *)a3 = v53;
        v54 = *(const char **)(v52 + v51);
        if ( (unsigned int)v53 <= 0x2F )
        {
          v55 = v51 + 16;
          *(_DWORD *)a3 = v55;
          v56 = *(_DWORD *)(v52 + v53);
          if ( (unsigned int)v55 <= 0x2F )
          {
            v57 = v51 + 24;
            *(_DWORD *)a3 = v57;
            v58 = *(_DWORD **)(v52 + v55);
            if ( (unsigned int)v57 <= 0x2F )
            {
              v59 = v51 + 32;
              *(_DWORD *)a3 = v59;
              v60 = *(__int64 **)(v52 + v57);
              if ( (unsigned int)v59 <= 0x2F )
              {
                v61 = (_DWORD *)(v59 + v52);
                *(_DWORD *)a3 = v51 + 40;
                goto LABEL_61;
              }
              v61 = *(_DWORD **)(a3 + 8);
LABEL_208:
              *(_QWORD *)(a3 + 8) = v61 + 2;
LABEL_61:
              v62 = sub_13B80(v7, v54, v56, v58, *v61 != 0);
              if ( v62 )
              {
                if ( v60 )
                  *v60 = v62;
                return -1;
              }
              return 1;
            }
            v165 = *(_QWORD ***)(a3 + 8);
LABEL_207:
            v61 = v165 + 1;
            *(_QWORD *)(a3 + 8) = v165 + 1;
            v60 = *v165;
            goto LABEL_208;
          }
          v164 = *(_DWORD ***)(a3 + 8);
LABEL_206:
          v165 = (_QWORD **)(v164 + 1);
          *(_QWORD *)(a3 + 8) = v164 + 1;
          v58 = *v164;
          goto LABEL_207;
        }
        v163 = *(int **)(a3 + 8);
      }
      v164 = (_DWORD **)(v163 + 2);
      *(_QWORD *)(a3 + 8) = v163 + 2;
      v56 = *v163;
      goto LABEL_206;
    case 10LL:
      v95 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v96 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v96 + 1;
      }
      else
      {
        v96 = (__int64 *)(*(_QWORD *)(a3 + 16) + v95);
        *(_DWORD *)a3 = v95 + 8;
      }
      return (int)sub_74F0(a1, *v96, a7);
    case 11LL:
      v63 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v64 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v64 + 1;
      }
      else
      {
        v64 = (__int64 *)(*(_QWORD *)(a3 + 16) + v63);
        *(_DWORD *)a3 = v63 + 8;
      }
      if ( (unsigned int)sub_DC10(a1, *v64, a7) )
        return 1;
      return -1;
    case 12LL:
      v104 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v105 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v105 + 1;
      }
      else
      {
        v105 = (__int64 *)(*(_QWORD *)(a3 + 16) + v104);
        *(_DWORD *)a3 = v104 + 8;
      }
      sub_12C70(*v105);
      return 1;
    case 13LL:
      v79 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v80 = *(_QWORD ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v80 + 1;
      }
      else
      {
        v80 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v79);
        *(_DWORD *)a3 = v79 + 8;
      }
      sub_12EB0(a1, *v80);
      return 1;
    case 14LL:
      v72 = *(_DWORD *)a3;
      if ( v72 > 0x2F )
      {
        v168 = *(__int64 **)(a3 + 8);
        v76 = v168 + 1;
        *(_QWORD *)(a3 + 8) = v168 + 1;
        v75 = *v168;
      }
      else
      {
        v73 = *(_QWORD *)(a3 + 16);
        v74 = v72 + 8;
        *(_DWORD *)a3 = v74;
        v75 = *(_QWORD *)(v73 + v72);
        if ( (unsigned int)v74 <= 0x2F )
        {
          v76 = (__int64 *)(v74 + v73);
          *(_DWORD *)a3 = v72 + 16;
          goto LABEL_79;
        }
        v76 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v76 + 1;
LABEL_79:
      sub_12C90(a1, v75, *v76);
      return 1;
    case 17LL:
      v70 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v71 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v71 + 1;
      }
      else
      {
        v71 = (__int64 *)(*(_QWORD *)(a3 + 16) + v70);
        *(_DWORD *)a3 = v70 + 8;
      }
      sub_12C60(*v71);
      return 1;
    case 18LL:
      v77 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v78 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v78 + 1;
      }
      else
      {
        v78 = (__int64 *)(*(_QWORD *)(a3 + 16) + v77);
        *(_DWORD *)a3 = v77 + 8;
      }
      sub_125F0(*v78);
      return 1;
    case 19LL:
      v65 = *(_DWORD *)a3;
      if ( v65 > 0x2F )
      {
        v167 = *(__int64 ***)(a3 + 8);
        v69 = (unsigned __int8 **)(v167 + 1);
        *(_QWORD *)(a3 + 8) = v167 + 1;
        v67 = *v167;
      }
      else
      {
        v66 = *(_QWORD *)(a3 + 16);
        a4 = v65 + 8;
        *(_DWORD *)a3 = a4;
        v67 = *(__int64 **)(v66 + v65);
        if ( (unsigned int)a4 <= 0x2F )
        {
          v68 = v65 + 16;
          v69 = (unsigned __int8 **)(a4 + v66);
          *(_DWORD *)a3 = v68;
          goto LABEL_71;
        }
        v69 = *(unsigned __int8 ***)(a3 + 8);
      }
      v68 = (__int64)(v69 + 1);
      *(_QWORD *)(a3 + 8) = v69 + 1;
LABEL_71:
      if ( !(unsigned __int8)sub_12490(v67, *v69, a7, v68, a4, a5, a6) )
        return -1;
      return 1;
    case 20LL:
      v117 = *(_DWORD *)a3;
      if ( v117 > 0x2F )
      {
        v175 = *(_QWORD ***)(a3 + 8);
        v121 = v175 + 1;
        *(_QWORD *)(a3 + 8) = v175 + 1;
        v120 = *v175;
      }
      else
      {
        v118 = *(_QWORD *)(a3 + 16);
        v119 = v117 + 8;
        *(_DWORD *)a3 = v119;
        v120 = *(_QWORD **)(v118 + v117);
        if ( (unsigned int)v119 <= 0x2F )
        {
          v121 = (_DWORD *)(v119 + v118);
          *(_DWORD *)a3 = v117 + 16;
          goto LABEL_140;
        }
        v121 = *(_DWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v121 + 2;
LABEL_140:
      sub_13060(a1, v120, *v121 != 0);
      return 1;
    case 36LL:
      v115 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v116 = *(_QWORD *)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v116 + 8;
      }
      else
      {
        v116 = *(_QWORD *)(a3 + 16) + v115;
        *(_DWORD *)a3 = v115 + 8;
      }
      if ( *(_WORD *)(*(_QWORD *)v116 + 24LL) != 119 )
        return 0;
      return 100;
    case 38LL:
      v44 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v45 = *(_QWORD *)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v45 + 8;
      }
      else
      {
        v45 = *(_QWORD *)(a3 + 16) + v44;
        *(_DWORD *)a3 = v44 + 8;
      }
      if ( *(_WORD *)(*(_QWORD *)v45 + 24LL) != 116 )
        return 0;
      return 2LL * (*(_BYTE *)(*(_QWORD *)v45 + 41LL) != 7);
    case 40LL:
      v46 = *(_DWORD *)a3;
      if ( v46 > 0x2F )
      {
        v166 = *(__int64 **)(a3 + 8);
        v50 = v166 + 1;
        *(_QWORD *)(a3 + 8) = v166 + 1;
        v49 = *v166;
      }
      else
      {
        v47 = *(_QWORD *)(a3 + 16);
        v48 = v46 + 8;
        *(_DWORD *)a3 = v48;
        v49 = *(_QWORD *)(v47 + v46);
        if ( (unsigned int)v48 <= 0x2F )
        {
          v50 = (__int64 *)(v48 + v47);
          *(_DWORD *)a3 = v46 + 16;
          goto LABEL_50;
        }
        v50 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v50 + 1;
LABEL_50:
      if ( !(unsigned __int8)sub_E870(v49, *v50) )
        return -1;
      return 1;
    case 43LL:
      v42 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v43 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v43 + 1;
      }
      else
      {
        v43 = (__int64 *)(*(_QWORD *)(a3 + 16) + v42);
        *(_DWORD *)a3 = v42 + 8;
      }
      return (int)sub_E740(*v43);
    case 46LL:
      v97 = *(_DWORD *)a3;
      if ( v97 > 0x2F )
      {
        v173 = *(_DWORD ***)(a3 + 8);
        v174 = (__int64 *)(v173 + 1);
        *(_QWORD *)(a3 + 8) = v173 + 1;
        v100 = *v173;
      }
      else
      {
        v98 = *(_QWORD *)(a3 + 16);
        v99 = v97 + 8;
        *(_DWORD *)a3 = v99;
        v100 = *(_DWORD **)(v98 + v97);
        if ( (unsigned int)v99 <= 0x2F )
        {
          v101 = v97 + 16;
          *(_DWORD *)a3 = v101;
          v102 = *(_QWORD *)(v98 + v99);
          if ( (unsigned int)v101 <= 0x2F )
          {
            v103 = (__int64 *)(v101 + v98);
            *(_DWORD *)a3 = v97 + 24;
            goto LABEL_117;
          }
          v103 = *(__int64 **)(a3 + 8);
LABEL_229:
          *(_QWORD *)(a3 + 8) = v103 + 1;
LABEL_117:
          *v100 = sub_CCD0(v102, *v103);
          return 1;
        }
        v174 = *(__int64 **)(a3 + 8);
      }
      v103 = v174 + 1;
      *(_QWORD *)(a3 + 8) = v174 + 1;
      v102 = *v174;
      goto LABEL_229;
    case 47LL:
      v81 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v82 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v82 + 1;
      }
      else
      {
        v82 = (__int64 *)(*(_QWORD *)(a3 + 16) + v81);
        *(_DWORD *)a3 = v81 + 8;
      }
      if ( sub_E790(*v82) )
        return 1;
      return -1;
    case 59LL:
      v40 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v41 = *(__int64 ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v41 + 1;
      }
      else
      {
        v41 = (__int64 **)(*(_QWORD *)(a3 + 16) + v40);
        *(_DWORD *)a3 = v40 + 8;
      }
      sub_E580(a1, *v41);
      return 1;
    case 75LL:
      v30 = *(_DWORD *)a3;
      if ( v30 > 0x2F )
      {
        v155 = *(_QWORD **)(a3 + 8);
        v156 = v155 + 1;
        *(_QWORD *)(a3 + 8) = v155 + 1;
        v33 = (__int16 *)*v155;
LABEL_193:
        v36 = (int *)(v156 + 1);
        *(_QWORD *)(a3 + 8) = v156 + 1;
        v35 = *v156;
        goto LABEL_194;
      }
      v31 = *(_QWORD *)(a3 + 16);
      v32 = v30 + 8;
      *(_DWORD *)a3 = v32;
      v33 = *(__int16 **)(v31 + v30);
      if ( (unsigned int)v32 > 0x2F )
      {
        v156 = *(_QWORD **)(a3 + 8);
        goto LABEL_193;
      }
      v34 = v30 + 16;
      *(_DWORD *)a3 = v34;
      v35 = *(_QWORD *)(v31 + v32);
      if ( (unsigned int)v34 <= 0x2F )
      {
        v36 = (int *)(v34 + v31);
        *(_DWORD *)a3 = v30 + 24;
        goto LABEL_30;
      }
      v36 = *(int **)(a3 + 8);
LABEL_194:
      *(_QWORD *)(a3 + 8) = v36 + 2;
LABEL_30:
      v37 = *v36;
      if ( (_WORD)v37 == 5 )
      {
        v177 = *(_QWORD *)(v33 + 2);
        v194 = *v33;
        v195 = v177;
        if ( (~v194 & 0xFF7F) == 0 )
        {
          LOBYTE(v177) = v177 | 0x80;
          LOWORD(v195) = v177;
        }
        return (int)ieee_realcvt(&v194, v35, 4);
      }
      else
      {
        if ( (_WORD)v37 == 13 )
        {
          v39 = 1;
          v38 = 12;
        }
        else
        {
          v38 = (unsigned __int16)v37;
          v39 = (_WORD)v37 == 12;
        }
        LODWORD(result) = ieee_realcvt(v33, v35, v38);
        if ( (_DWORD)result == 1 && v39 )
        {
          *(_QWORD *)(v33 + 2) = *(_QWORD *)(v33 + 1);
          v33[1] = 0;
        }
        return (int)result;
      }
    case 86LL:
      *(_DWORD *)(a1 + 188) = sub_13970(*(_QWORD *)(a1 + 16));
LABEL_5:
      *(_WORD *)(a1 + 184) = netnode_altval(*(_QWORD *)(a1 + 120), -1, 65);
      *(_QWORD *)(a1 + 192) = get_name_ea(-1, "A5BASE");
      *(_QWORD *)(a1 + 200) = get_name_ea(-1, "A4BASE");
      return 0;
    case 94LL:
      v122 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v123 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v123 + 1;
      }
      else
      {
        v123 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v122);
        *(_DWORD *)a3 = v122 + 8;
      }
      sub_154C0(*v123);
      return 0;
    case 95LL:
      netnode_check(a1 + 120, "$ mc68k", 0, 1);
      netnode_check(a1 + 128, "$ frame pointers", 0, 1);
      return 0;
    case 96LL:
      if ( !(_BYTE)byte_1D4A8 && __cxa_guard_acquire(&byte_1D4A8) )
      {
        qword_1D460 = *(_QWORD *)(a1 + 120);
        qword_1D478 = *(_QWORD *)(a1 + 128);
        __cxa_guard_release(&byte_1D4A8);
      }
      return (int)cvt64_node_supval_for_event(a3, &qword_1D460, 2);
    default:
      return 0;
  }
}

