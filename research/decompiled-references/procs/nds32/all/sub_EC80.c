__int64 __fastcall sub_EC80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // ebp
  int v7; // eax
  __int64 v9; // rdx
  int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rsi
  __int16 v19; // ax
  int v21; // r13d
  __int16 v22; // r12
  _QWORD *v23; // rax
  int v24; // eax
  char v25; // al
  unsigned __int64 v26; // r12
  __int16 v27; // ax
  __int16 v28; // r13
  char v29; // r14
  char v30; // al
  __int16 v31; // ax
  int v32; // r14d
  __int64 v33; // rax
  int v34; // r12d
  __int64 v35; // rdx
  __int64 v36; // rsi
  _QWORD *v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rbx
  char v43; // al
  __int64 v44; // r13
  __int64 v45; // r12
  __int64 sreg; // rax
  __int64 v47; // rdx
  __int64 v48; // r12
  __int64 v49; // r13
  __int64 v50; // rdx
  __int64 v51; // rcx
  _QWORD *v52; // rax
  char *v53; // rax
  __int64 v54; // rax
  int v55; // ecx
  const char *v56; // rdx
  void *v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rcx
  char *v61; // rax
  unsigned __int64 v62; // rsi
  __int64 v63; // rax
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // rcx
  unsigned __int64 v66; // r12
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  char *v70; // rax
  __int64 v71; // rsi
  __int64 v72; // rdi
  char v73; // al
  __int64 v74; // rdi
  __int16 v75; // ax
  char *v76; // rax
  __int64 v77; // rsi
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r13
  _QWORD *v81; // rax
  __int16 v82; // ax
  const char *v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // r9
  char v87; // al
  _BYTE *v88; // rsi
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rdx
  __int64 flags; // rax
  unsigned __int64 v93; // r13
  unsigned __int64 dword; // r13
  __int64 v95; // r13
  __int64 v96; // r12
  __int64 v97; // rsi
  __int64 v98; // rdi
  __int64 v99; // rdx
  char *v100; // rax
  __int64 v101; // r13
  __int16 v102; // ax
  _QWORD *func; // rax
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rax
  __int64 v107; // xmm0_8^8
  __int64 v108; // rax
  __int64 v109; // rax
  _DWORD *v110; // rdi
  _DWORD *v111; // rsi
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // r13
  __int64 v117; // r12
  __int64 v118; // r12
  char v119; // al
  char v120; // [rsp+8h] [rbp-3D0h]
  unsigned __int8 v121; // [rsp+8h] [rbp-3D0h]
  __int64 v122; // [rsp+10h] [rbp-3C8h]
  __int64 v123; // [rsp+18h] [rbp-3C0h]
  void *v124; // [rsp+20h] [rbp-3B8h] BYREF
  __int128 v125; // [rsp+28h] [rbp-3B0h]
  _BYTE v126[24]; // [rsp+40h] [rbp-398h] BYREF
  __int128 v127; // [rsp+58h] [rbp-380h]
  __int64 v128; // [rsp+68h] [rbp-370h]
  __int64 v129; // [rsp+70h] [rbp-368h]
  __int64 v130; // [rsp+78h] [rbp-360h]
  __int64 v131; // [rsp+80h] [rbp-358h]
  __int64 v132; // [rsp+88h] [rbp-350h]
  __int64 v133; // [rsp+90h] [rbp-348h]
  __int64 v134; // [rsp+98h] [rbp-340h]
  __int64 v135; // [rsp+A0h] [rbp-338h]
  __int128 v136; // [rsp+A8h] [rbp-330h]
  __int128 v137; // [rsp+C0h] [rbp-318h] BYREF
  __int64 v138; // [rsp+D0h] [rbp-308h]
  __int64 v139; // [rsp+D8h] [rbp-300h]
  __int64 v140; // [rsp+E0h] [rbp-2F8h]
  char v141; // [rsp+E8h] [rbp-2F0h] BYREF
  char v142; // [rsp+E9h] [rbp-2EFh]
  __int16 v143; // [rsp+EEh] [rbp-2EAh]
  __int64 v144; // [rsp+110h] [rbp-2C8h]
  unsigned __int64 v145; // [rsp+118h] [rbp-2C0h]
  unsigned __int64 v146; // [rsp+120h] [rbp-2B8h]
  char v147; // [rsp+139h] [rbp-29Fh]
  int v148; // [rsp+140h] [rbp-298h]
  char v149[8]; // [rsp+228h] [rbp-1B0h] BYREF
  __int128 v150; // [rsp+230h] [rbp-1A8h] BYREF
  __int64 v151; // [rsp+240h] [rbp-198h]
  __int64 v152; // [rsp+248h] [rbp-190h]
  __int64 v153; // [rsp+250h] [rbp-188h]
  char v154; // [rsp+258h] [rbp-180h] BYREF
  char v155; // [rsp+259h] [rbp-17Fh]
  __int16 v156; // [rsp+25Eh] [rbp-17Ah]
  char v157; // [rsp+281h] [rbp-157h]
  __int16 v158; // [rsp+286h] [rbp-152h]
  int v159; // [rsp+288h] [rbp-150h]
  _QWORD v160[8]; // [rsp+398h] [rbp-40h] BYREF

  v5 = 0;
  v7 = *(unsigned __int16 *)(a2 + 24);
  v160[0] = __readfsqword(0x28u);
  v9 = (unsigned int)v7;
  if ( v7 >= unk_2A4A8 )
  {
    a4 = (unsigned int)v7;
    if ( v7 < unk_2A4AC )
    {
      v10 = (int)off_2A4B0[2 * (v7 - unk_2A4A8) + 1];
      v5 = v10 & 1;
      if ( (v10 & 0x100) != 0 )
        sub_DDD0(a1, a2, (unsigned __int8 *)(a2 + 40), 1, a5);
      if ( (v10 & 0x200) != 0 )
        sub_DDD0(a1, a2, (unsigned __int8 *)(a2 + 80), 1, a5);
      if ( (v10 & 0x400) != 0 )
        sub_DDD0(a1, a2, (unsigned __int8 *)(a2 + 120), 1, a5);
      if ( (v10 & 4) != 0 )
        sub_DDD0(a1, a2, (unsigned __int8 *)(a2 + 40), 0, a5);
      if ( (v10 & 8) != 0 )
      {
        sub_DDD0(a1, a2, (unsigned __int8 *)(a2 + 80), 0, a5);
        v9 = *(unsigned __int16 *)(a2 + 24);
        goto LABEL_13;
      }
      a4 = *(unsigned __int16 *)(a2 + 24);
    }
    v9 = (unsigned int)a4;
    if ( (_WORD)a4 != 93 )
      goto LABEL_14;
    goto LABEL_38;
  }
LABEL_13:
  if ( (_WORD)v9 == 93 )
  {
LABEL_38:
    v25 = *(_BYTE *)(a2 + 81);
    if ( v25 != 5 && v25 != 2 )
      goto LABEL_17;
    if ( (*(_QWORD *)(a2 + 40) & 0xFFFF00000000FF00LL) == 0x1D000000000100LL )
    {
      flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
      if ( (unsigned __int8)is_off(flags, 1) )
      {
        clr_op_type(*(_QWORD *)(a2 + 16), 1);
        v9 = *(unsigned __int16 *)(a2 + 24);
        goto LABEL_14;
      }
      goto LABEL_45;
    }
    if ( v25 == 5 )
      v26 = *(_QWORD *)(a2 + 88);
    else
      v26 = *(_QWORD *)(a2 + 96);
    if ( v26 <= 0x20 )
      goto LABEL_17;
    if ( (unsigned __int8)is_mapped(v26) )
    {
      v84 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
      if ( !(unsigned __int8)is_defarg(v84, 1) )
      {
        v85 = getseg(v26);
        if ( v85 )
        {
          v87 = *(_BYTE *)(v85 + 184);
          LOBYTE(a4) = v87 == 9;
          if ( v87 != 2 )
          {
            if ( v87 == 9 || v87 == 3 )
            {
              op_offset(*(_QWORD *)(a2 + 16), 1, 130, v26, 0, 0);
              insn_add_dref(a2, v26, (unsigned int)*(char *)(a2 + 82), 1);
            }
            goto LABEL_45;
          }
          v151 = -1;
          v100 = &v154;
          v152 = 0;
          v153 = 0;
          v150 = -1;
          do
          {
            *(_WORD *)v100 = 0;
            v100 += 40;
            *((_WORD *)v100 - 19) = 0;
            *((_WORD *)v100 - 18) = 0;
            *((_DWORD *)v100 - 2) = 0;
            *((_WORD *)v100 - 17) = 0;
            *((_OWORD *)v100 - 2) = 0;
            *((_QWORD *)v100 - 2) = 0;
          }
          while ( v160 != (_QWORD *)v100 );
          v101 = *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26);
          if ( (int)decode_insn(&v150, v101, &v150, 0, a5, v86, 0.0) > 0 )
          {
            a4 = (unsigned __int16)v152;
            if ( (v152 & 0xFFFD) == 0x61 && v155 == 1 )
            {
              v102 = *(_WORD *)(a2 + 46);
              if ( (_WORD)v152 == 99 && v156 == 30 )
              {
                if ( v157 == 1 && v158 == (unsigned __int8)v102 )
                  goto LABEL_244;
              }
              else if ( (unsigned __int8)v102 == v156 )
              {
LABEL_244:
                op_offset(*(_QWORD *)(a2 + 16), 1, 130, v26, 0, 0);
                func = (_QWORD *)get_func(*(_QWORD *)(a2 + 16));
                if ( func && v101 + (unsigned __int64)WORD1(v152) >= func[1] )
                  set_func_end(*func);
                add_cref(*(_QWORD *)(a2 + 16), v101, 21);
                auto_mark_range(v101, v101 + 1, 20);
                v9 = *(unsigned __int16 *)(a2 + 24);
                goto LABEL_14;
              }
            }
          }
        }
      }
    }
LABEL_45:
    v9 = *(unsigned __int16 *)(a2 + 24);
  }
LABEL_14:
  if ( (_WORD)v9 == 479 )
  {
    if ( *(_BYTE *)(a2 + 33) != 3 || *(_BYTE *)(a2 + 81) != 1 || *(_BYTE *)(a2 + 121) != 5 )
      goto LABEL_17;
    v21 = *(unsigned __int16 *)(a2 + 86);
    v22 = *(_WORD *)(a2 + 86);
    if ( (_WORD)v21 == 31
      || v21 == 28
      || (v23 = (_QWORD *)get_func(*(_QWORD *)(a2 + 16))) != nullptr
      && (v24 = sub_13410(a1, *v23), v24 >= 0)
      && v21 == v24 )
    {
      if ( (unsigned __int8)getinf_flag(10, 512, v9, a4, a5) )
      {
        if ( (unsigned int)get_auto_state() == 40 )
        {
          v104 = get_func(*(_QWORD *)(a2 + 16));
          if ( v104 )
          {
            if ( *(_QWORD *)(v104 + 32) || *(_WORD *)(v104 + 40) )
            {
              v105 = *(_QWORD *)(a2 + 128);
              v106 = *(_QWORD *)(a2 + 152);
              *(__m128i *)v126 = _mm_loadu_si128((const __m128i *)(a2 + 120));
              v107 = _mm_loadu_si128((const __m128i *)(a2 + 136)).m128i_i64[1];
              *(_WORD *)&v126[6] = v22;
              *(_QWORD *)&v127 = v107;
              *((_QWORD *)&v127 + 1) = v106;
              v126[1] = 4;
              *(_QWORD *)&v126[16] = v105;
              if ( (unsigned __int8)insn_create_stkvar(a2, v126, v105, 1) )
              {
                v108 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
                if ( !(unsigned __int8)is_stkvar(v108, 2) )
                  op_stkvar(*(_QWORD *)(a2 + 16), 2);
              }
            }
          }
        }
      }
    }
    LOWORD(v9) = *(_WORD *)(a2 + 24);
  }
  if ( (_WORD)v9 == 114 )
  {
    if ( *(_BYTE *)(a2 + 41) != 1 )
      goto LABEL_17;
    if ( (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) != 0x1F000000000100LL )
      goto LABEL_17;
    if ( *(_BYTE *)(a2 + 121) != 5 )
      goto LABEL_17;
    v27 = *(_WORD *)(a2 + 46);
    if ( v27 == 31 || v27 == 28 )
      goto LABEL_17;
    if ( (unsigned __int8)getinf_flag(10, 512, 0x1F000000000100LL, a4, a5) )
    {
      if ( (unsigned int)get_auto_state() == 40 )
      {
        v109 = get_func(*(_QWORD *)(a2 + 16));
        if ( v109 )
        {
          if ( *(_QWORD *)(v109 + 32) || *(_WORD *)(v109 + 40) )
          {
            v110 = v126;
            v111 = (_DWORD *)(a2 + 120);
            v112 = 10;
            v113 = *(_QWORD *)(a2 + 128);
            while ( v112 )
            {
              *v110++ = *v111++;
              --v112;
            }
            v126[1] = 4;
            *(_WORD *)&v126[6] = 31;
            *(_QWORD *)&v126[16] = v113;
            if ( (unsigned __int8)insn_create_stkvar(a2, v126, v113, 1) )
            {
              v114 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
              if ( !(unsigned __int8)is_stkvar(v114, 2) )
                op_stkvar(*(_QWORD *)(a2 + 16), 2);
            }
          }
        }
      }
    }
    LOWORD(v9) = *(_WORD *)(a2 + 24);
  }
  if ( (_WORD)v9 == 99 )
  {
    if ( (*(_QWORD *)(a2 + 40) & 0xFFFF00000000FF00LL) == 0x1E000000000100LL && *(_BYTE *)(a2 + 81) == 1 )
    {
      v120 = 1;
      v28 = *(_WORD *)(a2 + 86);
      v29 = 1;
LABEL_113:
      v50 = *(_QWORD *)(a2 + 16);
      LOBYTE(v127) = 0;
      memset(v126, 0, sizeof(v126));
      if ( (unsigned __int8)sub_1D1E0(v126, (unsigned __int8)v28, v50, a1, 0) && (unsigned __int8)(v127 - 10) <= 1u )
      {
        v51 = **(_QWORD **)v126;
        if ( *(_QWORD *)&v126[8] == 1 || (v52 = (_QWORD *)(*(_QWORD *)v126 + 24LL), 24LL * *(_QWORD *)&v126[8] == 24) )
        {
LABEL_147:
          v66 = (unsigned int)v51;
          v122 = **(_QWORD **)v126;
          if ( (unsigned __int8)is_mapped((unsigned int)v51) )
          {
            if ( (v122 & 1) == 0 && ((get_flags_ex(v66, 4) & 0x600) != 0x200 || v66 == prev_not_tail(v66)) )
              goto LABEL_150;
          }
          else
          {
            v83 = "Jump near";
            if ( v29 )
              v83 = "Call near";
            sub_DCF0(*(_QWORD *)(a2 + 16), v66, v83);
          }
        }
        else
        {
          while ( *v52 == v51 )
          {
            v52 += 3;
            if ( v52 == (_QWORD *)(24LL * *(_QWORD *)&v126[8] + *(_QWORD *)v126) )
              goto LABEL_147;
          }
        }
      }
      v138 = -1;
      v53 = &v141;
      v139 = 0;
      v140 = 0;
      v137 = -1;
      do
      {
        *(_WORD *)v53 = 0;
        v53 += 40;
        *((_WORD *)v53 - 19) = 0;
        *((_WORD *)v53 - 18) = 0;
        *((_DWORD *)v53 - 2) = 0;
        *((_WORD *)v53 - 17) = 0;
        *((_OWORD *)v53 - 2) = 0;
        *((_QWORD *)v53 - 2) = 0;
      }
      while ( v149 != v53 );
      v54 = decode_prev_insn(&v137, *(_QWORD *)(a2 + 16), v149, 0.0);
      if ( v54 != -1 )
      {
        if ( (_WORD)v139 == 93 )
        {
          if ( v142 == 1 && v143 == (unsigned __int8)v28 && (BYTE1(v144) == 5 || BYTE1(v144) == 2) )
          {
            v66 = v146;
            if ( BYTE1(v144) == 5 )
              v66 = v145;
            if ( v66 != -1 )
            {
LABEL_150:
              if ( !(unsigned __int8)is_loaded(v66) )
                goto LABEL_133;
              if ( (~((unsigned __int16)get_flags_ex(v66, 0) >> 8) & 6) != 0 )
              {
                v151 = -1;
                v150 = -1;
                v70 = &v154;
                v152 = 0;
                v153 = 0;
                if ( v29 )
                {
                  do
                  {
                    *(_WORD *)v70 = 0;
                    v70 += 40;
                    *((_WORD *)v70 - 19) = 0;
                    *((_WORD *)v70 - 18) = 0;
                    *((_DWORD *)v70 - 2) = 0;
                    *((_WORD *)v70 - 17) = 0;
                    *((_OWORD *)v70 - 2) = 0;
                    *((_QWORD *)v70 - 2) = 0;
                  }
                  while ( v160 != (_QWORD *)v70 );
                  if ( (int)decode_insn(&v150, v66, &v150, v67, 0, 0, 0.0) > 0 )
                    goto LABEL_155;
LABEL_133:
                  v151 = -1;
                  v61 = &v154;
                  v152 = 0;
                  v153 = 0;
                  v150 = -1;
                  do
                  {
                    *(_WORD *)v61 = 0;
                    v61 += 40;
                    *((_WORD *)v61 - 19) = 0;
                    *((_WORD *)v61 - 18) = 0;
                    *((_DWORD *)v61 - 2) = 0;
                    *((_WORD *)v61 - 17) = 0;
                    *((_OWORD *)v61 - 2) = 0;
                    *((_QWORD *)v61 - 2) = 0;
                  }
                  while ( v61 != (char *)v160 );
                  v62 = *(_QWORD *)(a2 + 16);
                  v63 = decode_prev_insn(&v150, v62, &v150, 0.0);
                  if ( v63 != -1 && (_WORD)v152 == 93 )
                  {
                    v81 = (_QWORD *)get_func(v63);
                    if ( v81 )
                    {
                      v64 = *(_QWORD *)(a2 + 16);
                      v65 = v81[1];
                      v62 = v64 + *(unsigned __int16 *)(a2 + 26);
                      if ( v64 >= v65 || v65 < v62 )
                        set_func_end(*v81);
                    }
                  }
                  if ( *(_QWORD *)v126 )
                  {
                    *(_QWORD *)&v126[8] = 0;
                    qfree(*(_QWORD *)v126, v62, v64, v65);
                  }
                  goto LABEL_17;
                }
                do
                {
                  *(_WORD *)v70 = 0;
                  v70 += 40;
                  *((_WORD *)v70 - 19) = 0;
                  *((_WORD *)v70 - 18) = 0;
                  *((_DWORD *)v70 - 2) = 0;
                  *((_WORD *)v70 - 17) = 0;
                  *((_OWORD *)v70 - 2) = 0;
                  *((_QWORD *)v70 - 2) = 0;
                }
                while ( v70 != (char *)v160 );
                if ( (int)decode_insn(&v150, v66, &v150, 0, v68, v69, 0.0) <= 0
                  || (int)sub_D8F0(a1, (__int64)&v150) <= 49 )
                {
                  goto LABEL_133;
                }
              }
              else if ( v29 )
              {
LABEL_155:
                insn_add_cref(a2, v66, 0, 17);
                auto_mark_range(v66, v66 + 1, 20);
                auto_mark_range(v66, v66 + 1, 30);
LABEL_156:
                if ( (~((unsigned __int16)get_flags_ex(v66, 0) >> 8) & 6) != 0 )
                {
                  del_items(v66, 0, 1, 0);
                  create_insn(v66, 0);
                }
                auto_mark_range(v66, v66 + 1, 20);
                v71 = *(_QWORD *)(a2 + 16);
                v72 = *(_QWORD *)(a1 + 120);
                v124 = (void *)v66;
                netnode_supset(v72, v71, &v124, 8, 868);
                goto LABEL_133;
              }
              insn_add_cref(a2, v66, 0, 19);
              goto LABEL_156;
            }
          }
        }
        else if ( (_WORD)v139 == 118
               && v142 == 1
               && v143 == (unsigned __int8)v28
               && BYTE1(v144) == 1
               && HIWORD(v144) == (unsigned __int8)v28
               && v147 == 5 )
        {
          v123 = v54;
          sub_CEC0((__int64)&v150);
          if ( decode_prev_insn(&v150, v123, v91, 0.0) != -1
            && (_WORD)v152 == 94
            && v155 == 1
            && v156 == (unsigned __int8)v28
            && v157 == 5 )
          {
            v66 = v148 | (unsigned int)(v159 << 12);
            goto LABEL_150;
          }
        }
      }
      if ( !(unsigned __int8)is_problem_present(12, *(_QWORD *)(a2 + 16)) )
      {
        v124 = nullptr;
        v125 = 0;
        if ( v120 )
        {
          v55 = *(unsigned __int16 *)(a2 + 86);
          v56 = "call";
        }
        else
        {
          v55 = *(unsigned __int16 *)(a2 + 46);
          if ( v29 )
            v56 = "call";
          else
            v56 = "jump";
        }
        sub_DC30((__int64 *)&v124, (__int64)"Unresolved indirect %s via $r%d", v56, v55);
        v57 = &unk_21435;
        if ( (_QWORD)v125 )
          v57 = v124;
        v58 = *(_QWORD *)(a2 + 16);
        remember_problem(12, v58, v57);
        if ( v124 )
        {
          *(_QWORD *)&v125 = 0;
          qfree(v124, v58, v59, v60);
        }
      }
      goto LABEL_133;
    }
    if ( *(_BYTE *)(a2 + 41) != 1 )
      goto LABEL_17;
    v28 = *(_WORD *)(a2 + 46);
    if ( v28 == 30 || *(_BYTE *)(a2 + 81) )
      goto LABEL_17;
    v29 = 1;
LABEL_171:
    v120 = 0;
    goto LABEL_113;
  }
  if ( (_WORD)v9 != 97 || *(_BYTE *)(a2 + 41) != 1 )
    goto LABEL_17;
  *(_QWORD *)v126 = 0x800000;
  v128 = 0;
  *(__m128i *)&v126[8] = _mm_load_si128((const __m128i *)&xmmword_21440);
  v127 = -1;
  v129 = 0;
  v130 = 0;
  v131 = 0xFFFFFFFFLL;
  v132 = 0;
  v133 = 2;
  v134 = -1;
  v135 = 0;
  v136 = 0;
  v73 = sub_176D0(a1, v126, a2);
  v74 = *(_QWORD *)(a2 + 16);
  v29 = v73;
  if ( v73 )
  {
    set_switch_info(v74, v126);
    v88 = v126;
    create_switch_table(*(_QWORD *)(a2 + 16), v126);
    goto LABEL_198;
  }
  v75 = *(_WORD *)(a2 + 46);
  v138 = -1;
  v139 = 0;
  v140 = 0;
  v121 = v75;
  v76 = &v141;
  v137 = -1;
  do
  {
    *(_WORD *)v76 = 0;
    v76 += 40;
    *((_WORD *)v76 - 19) = 0;
    *((_WORD *)v76 - 18) = 0;
    *((_DWORD *)v76 - 2) = 0;
    *((_WORD *)v76 - 17) = 0;
    *((_OWORD *)v76 - 2) = 0;
    *((_QWORD *)v76 - 2) = 0;
  }
  while ( v149 != v76 );
  v77 = v74;
  v80 = decode_prev_insn(&v137, v74, v149, 0.0);
  if ( v80 == -1 )
    goto LABEL_168;
  if ( (_WORD)v139 == 94 )
  {
    if ( v142 != 1 )
      goto LABEL_168;
    if ( v143 != v121 )
      goto LABEL_168;
    if ( (v144 & 0xFFFF00000000FF00LL) != 0x400 )
      goto LABEL_168;
    v93 = v146;
    if ( v146 - 1 > 0xFFFFFFFFFFFFFFFDLL )
      goto LABEL_168;
  }
  else
  {
    if ( (_WORD)v139 != 5 )
      goto LABEL_168;
    if ( v142 != 1 )
      goto LABEL_168;
    v79 = v121;
    if ( v143 != v121 )
      goto LABEL_168;
    if ( BYTE1(v144) != 4 )
      goto LABEL_168;
    if ( HIWORD(v144) != v121 )
      goto LABEL_168;
    sub_CEC0((__int64)&v150);
    v77 = v80;
    if ( decode_prev_insn(&v150, v80, v99, 0.0) == -1 )
      goto LABEL_168;
    v79 = v121;
    if ( (_WORD)v152 != 94 || v155 != 1 || v156 != v121 || v157 != 5 )
      goto LABEL_168;
    v93 = (unsigned int)(v146 + (v159 << 12));
  }
  if ( !(unsigned __int8)is_mapped(v93)
    || (dword = (unsigned int)get_dword(v93), dword - 1 > 0xFFFFFFFFFFFFFFFDLL)
    || !(unsigned __int8)is_mapped(dword) )
  {
LABEL_168:
    if ( v135 )
    {
      *(_QWORD *)&v136 = 0;
      qfree(v135, v77, v78, v79);
    }
    v28 = *(_WORD *)(a2 + 46);
    goto LABEL_171;
  }
  v88 = (_BYTE *)dword;
  insn_add_cref(a2, dword, 0, 19);
LABEL_198:
  if ( v135 )
  {
    *(_QWORD *)&v136 = 0;
    qfree(v135, v88, v89, v90);
  }
LABEL_17:
  v14 = (_QWORD *)get_func(*(_QWORD *)(a2 + 16));
  if ( !v14 )
    goto LABEL_60;
  if ( (unsigned __int8)getinf_flag(10, "insn_get_next_word", v11, v12, v13) && (unsigned int)get_auto_state() == 40 )
  {
    if ( (unsigned __int8)recalc_spd_for_basic_block(v14, *(_QWORD *)(a2 + 16)) )
      goto LABEL_20;
  }
  else if ( !(unsigned __int8)getinf_flag(10, "insn_get_next_word", v15, v16, v17) )
  {
    goto LABEL_20;
  }
  sub_D340(a1, (__int64)v14, a2);
LABEL_20:
  v18 = *(_QWORD *)(a2 + 16);
  v19 = *(_WORD *)(a2 + 24);
  if ( v18 != *v14 || ((v19 - 26) & 0xFFFD) != 0 )
  {
    if ( (v19 & 0xFFFD) != 0x19 )
      goto LABEL_61;
    if ( (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) != 0x1F000000000300LL )
      goto LABEL_23;
    v126[0] = 2;
  }
  else
  {
    if ( (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) != 0x1F000000000300LL )
      goto LABEL_77;
    v126[0] = 1;
  }
  netnode_supset(*(_QWORD *)(a1 + 104), v18, v126, 1, 256);
LABEL_60:
  v19 = *(_WORD *)(a2 + 24);
LABEL_61:
  if ( v19 == 93 )
  {
    if ( (*(_QWORD *)(a2 + 40) & 0xFFFF00000000FF00LL) != 0x1D000000000100LL )
      goto LABEL_23;
    v43 = *(_BYTE *)(a2 + 81);
    if ( v43 == 5 )
    {
      v44 = *(_QWORD *)(a2 + 88);
    }
    else
    {
      if ( v43 != 2 )
        goto LABEL_23;
      v44 = *(_QWORD *)(a2 + 96);
    }
    v45 = *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26);
    if ( v44 != get_sreg(v45, 34) )
      sub_13790(a1, v45, v44);
    v19 = *(_WORD *)(a2 + 24);
  }
  if ( v19 != 31 )
    goto LABEL_77;
  v30 = *(_BYTE *)(a2 + 33);
  if ( v30 == 2 )
  {
    if ( (*(_QWORD *)(a2 + 40) & 0xFFFF00000000FF00LL) != 0x1D000000000100LL )
      goto LABEL_23;
    sreg = get_sreg(*(_QWORD *)(a2 + 16), 34);
    if ( sreg != -1 )
    {
      v47 = *(_QWORD *)(a2 + 16);
      v48 = v47 + *(unsigned __int16 *)(a2 + 26);
      v49 = (unsigned int)(sreg + v47);
      if ( v49 != get_sreg(v48, 34) )
        sub_13790(a1, v48, v49);
    }
    v19 = *(_WORD *)(a2 + 24);
    if ( v19 != 31 )
      goto LABEL_77;
    v30 = *(_BYTE *)(a2 + 33);
  }
  if ( v30 )
    goto LABEL_23;
  if ( (*(_QWORD *)(a2 + 40) & 0xFFFF00000000FF00LL) != 0x1D000000000100LL
    || *(_BYTE *)(a2 + 81) != 1
    || *(_BYTE *)(a2 + 121) != 1 )
  {
    goto LABEL_66;
  }
  v82 = *(_WORD *)(a2 + 126);
  if ( *(_WORD *)(a2 + 86) == 29 )
  {
    if ( v82 == 29 )
      goto LABEL_66;
  }
  else if ( v82 != 29 )
  {
    goto LABEL_66;
  }
  if ( (unsigned int)find_reg_value(v126, *(_QWORD *)(a2 + 16)) == 1 )
  {
    v115 = get_sreg(*(_QWORD *)(a2 + 16), 34);
    if ( v115 != -1 )
    {
      v116 = *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26);
      v117 = (unsigned int)(*(_DWORD *)v126 + v115);
      if ( v117 != get_sreg(v116, 34) )
        sub_13790(a1, v116, v117);
    }
  }
  v19 = *(_WORD *)(a2 + 24);
  if ( v19 != 31 )
    goto LABEL_77;
  if ( *(_BYTE *)(a2 + 33) )
    goto LABEL_23;
LABEL_66:
  if ( *(_BYTE *)(a2 + 41) != 1
    || *(_WORD *)(a2 + 46) == 29
    || *(_BYTE *)(a2 + 81) != 1
    || *(_BYTE *)(a2 + 121) != 1
    || (*(_BYTE *)(a1 + 168) & 8) == 0 )
  {
    goto LABEL_23;
  }
  v31 = *(_WORD *)(a2 + 126);
  if ( *(_WORD *)(a2 + 86) == 29 )
  {
    if ( v31 == 29 )
      goto LABEL_23;
    v32 = 1;
  }
  else
  {
    if ( v31 != 29 )
      goto LABEL_23;
    v32 = 2;
  }
  v33 = get_sreg(*(_QWORD *)(a2 + 16), 34);
  v34 = v33;
  if ( v33 != -1 && (unsigned int)find_reg_value(v126, *(_QWORD *)(a2 + 16)) == 1 )
  {
    v118 = (unsigned int)(*(_DWORD *)v126 + v34);
    if ( (unsigned __int8)is_mapped(v118) )
    {
      if ( v32 == 1 )
        v119 = *(_BYTE *)(a2 + 82);
      else
        v119 = *(_BYTE *)(a2 + 122);
      insn_add_dref(a2, v118, (unsigned int)v119, 1);
      sub_CFF0(a1, *(_QWORD *)(a2 + 16), v118);
    }
  }
  v19 = *(_WORD *)(a2 + 24);
LABEL_77:
  if ( v19 == 71 && *(_BYTE *)(a2 + 81) == 5 && *(_QWORD *)(a2 + 88) == 896 )
  {
    v35 = *(_QWORD *)(a2 + 16);
    v36 = *(unsigned __int16 *)(a2 + 46);
    LOBYTE(v127) = 0;
    memset(v126, 0, sizeof(v126));
    if ( (unsigned __int8)sub_1D1E0(v126, v36, v35, a1, 0) && (unsigned __int8)(v127 - 10) <= 1u )
    {
      if ( *(_QWORD *)&v126[8] == 1 || (v37 = (_QWORD *)(*(_QWORD *)v126 + 24LL), 24LL * *(_QWORD *)&v126[8] == 24) )
      {
LABEL_225:
        v95 = *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26);
        v96 = **(_QWORD **)v126 & 0xFFFFFFFCLL;
        if ( get_sreg(v95, 35) == -1 && *(_QWORD *)(a1 + 176) == -1 )
          sub_138C0(a1, v95, v96);
        if ( (unsigned __int8)is_mapped(v96) )
        {
          v97 = *(_QWORD *)(a2 + 16);
          v98 = *(_QWORD *)(a1 + 120);
          v124 = (void *)v96;
          netnode_supset(v98, v97, &v124, 8, 868);
        }
      }
      else
      {
        while ( *v37 == **(_QWORD **)v126 )
        {
          v37 += 3;
          if ( (_QWORD *)(24LL * *(_QWORD *)&v126[8] + *(_QWORD *)v126) == v37 )
            goto LABEL_225;
        }
      }
    }
    v38 = *(_QWORD *)(a2 + 16);
    v39 = netnode_altval(*(_QWORD *)(a1 + 120), v38, 868);
    v42 = v39;
    if ( v39 != -1 && (unsigned __int8)is_mapped(v39) )
    {
      v38 = v42;
      add_dref(*(_QWORD *)(a2 + 16), v42, 1);
    }
    if ( *(_QWORD *)v126 )
    {
      *(_QWORD *)&v126[8] = 0;
      qfree(*(_QWORD *)v126, v38, v40, v41);
    }
  }
LABEL_23:
  if ( !v5 )
    add_cref(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), 21);
  return 1;
}
