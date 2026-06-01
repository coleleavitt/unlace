__int64 __fastcall sub_B700(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, char a5)
{
  int v5; // r12d
  unsigned __int16 *v7; // r9
  unsigned __int16 *v8; // r14
  char v9; // bp
  int v10; // ebx
  unsigned __int16 *v11; // rax
  unsigned __int16 *v12; // r13
  unsigned int v13; // ebp
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  int v16; // ebp
  unsigned __int16 *v17; // r12
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // r15
  char v21; // bl
  unsigned __int16 v22; // dx
  unsigned __int16 v23; // ax
  unsigned __int64 v24; // rax
  bool v25; // zf
  unsigned int v26; // ebx
  int v28; // edx
  __int16 v29; // ax
  unsigned int v30; // eax
  __int64 v31; // rbx
  unsigned __int64 v32; // rbx
  __int64 v33; // rax
  unsigned int v34; // edx
  __int64 v35; // rdi
  __int64 qword; // rax
  __int64 v37; // rbx
  int v38; // ecx
  unsigned __int64 v39; // rsi
  __int64 v40; // rcx
  unsigned __int64 v41; // r9
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int16 v44; // ax
  _QWORD *v45; // rdx
  int *v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rcx
  unsigned __int64 v49; // rbp
  unsigned __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rdi
  unsigned __int64 v53; // rbp
  unsigned __int16 *v54; // r9
  unsigned __int64 v55; // rax
  __int64 v56; // rdx
  char v57; // al
  int v58; // eax
  int *v59; // r11
  unsigned __int16 *v60; // r9
  unsigned __int64 v61; // r12
  _QWORD *v62; // rax
  __int64 v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // rax
  unsigned __int16 v66; // cx
  void *v67; // r10
  unsigned __int16 v68; // si
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdx
  unsigned __int64 v72; // rax
  __int64 v73; // r13
  __int64 v74; // rax
  __int64 v75; // rdi
  __int16 custom_fixup; // ax
  unsigned __int16 v77; // ax
  unsigned __int64 v78; // rsi
  __int64 v79; // rcx
  unsigned __int16 word; // bx
  __int16 v81; // ax
  int v82; // ebx
  unsigned __int16 v83; // bp
  __int16 v84; // ax
  int v85; // eax
  unsigned __int64 v86; // rbx
  __int64 v87; // rax
  __int64 v88; // rdi
  unsigned __int8 v89; // r15
  unsigned __int8 v90; // r13
  unsigned int v91; // eax
  unsigned __int8 v92; // bp
  unsigned __int8 v93; // r13
  unsigned __int8 v94; // al
  __int64 v95; // rbx
  unsigned __int64 v96; // rdx
  unsigned __int64 v97; // rbx
  __int64 v98; // rax
  __int64 v99; // rdi
  unsigned int v100; // eax
  unsigned int v101; // eax
  __int64 v102; // [rsp-8h] [rbp-188h]
  __int64 v103; // [rsp+0h] [rbp-180h]
  unsigned __int64 v104; // [rsp+8h] [rbp-178h]
  unsigned __int64 v105; // [rsp+10h] [rbp-170h]
  unsigned __int8 byte; // [rsp+10h] [rbp-170h]
  int v107; // [rsp+18h] [rbp-168h]
  unsigned __int16 *v108; // [rsp+18h] [rbp-168h]
  int *v109; // [rsp+18h] [rbp-168h]
  unsigned __int16 *v110; // [rsp+18h] [rbp-168h]
  unsigned __int64 v112; // [rsp+28h] [rbp-158h]
  __int64 v113; // [rsp+30h] [rbp-150h]
  unsigned __int64 v114; // [rsp+38h] [rbp-148h]
  unsigned __int64 v118; // [rsp+70h] [rbp-110h]
  unsigned __int64 v119; // [rsp+78h] [rbp-108h]
  char v120; // [rsp+86h] [rbp-FAh]
  bool v121; // [rsp+87h] [rbp-F9h]
  unsigned __int64 v122; // [rsp+88h] [rbp-F8h]
  unsigned __int16 *v123; // [rsp+90h] [rbp-F0h]
  unsigned __int8 v124; // [rsp+90h] [rbp-F0h]
  unsigned __int8 v125; // [rsp+90h] [rbp-F0h]
  unsigned __int16 v126; // [rsp+98h] [rbp-E8h]
  void *v127; // [rsp+98h] [rbp-E8h]
  unsigned __int16 *v128; // [rsp+98h] [rbp-E8h]
  unsigned __int16 *v129; // [rsp+98h] [rbp-E8h]
  void *v130; // [rsp+98h] [rbp-E8h]
  int *v131; // [rsp+98h] [rbp-E8h]
  unsigned __int8 v132; // [rsp+98h] [rbp-E8h]
  unsigned __int8 v133; // [rsp+98h] [rbp-E8h]
  int *v134; // [rsp+A0h] [rbp-E0h]
  unsigned __int16 v135; // [rsp+A0h] [rbp-E0h]
  void *v136; // [rsp+A0h] [rbp-E0h]
  unsigned __int16 v137; // [rsp+A0h] [rbp-E0h]
  unsigned __int8 v138; // [rsp+A0h] [rbp-E0h]
  int *v139; // [rsp+A8h] [rbp-D8h]
  int *v140; // [rsp+A8h] [rbp-D8h]
  int v141; // [rsp+B0h] [rbp-D0h]
  unsigned __int16 *v142; // [rsp+B8h] [rbp-C8h] BYREF
  __int128 v143; // [rsp+C0h] [rbp-C0h]
  __int64 v144; // [rsp+D8h] [rbp-A8h]
  __m128i si128; // [rsp+E0h] [rbp-A0h]
  unsigned __int64 dword; // [rsp+F0h] [rbp-90h]
  __int64 v147; // [rsp+F8h] [rbp-88h]
  char v148[8]; // [rsp+108h] [rbp-78h] BYREF
  int v149; // [rsp+110h] [rbp-70h] BYREF
  _QWORD *v150; // [rsp+118h] [rbp-68h]
  int *v151; // [rsp+120h] [rbp-60h]
  int *v152; // [rsp+128h] [rbp-58h]
  __int64 v153; // [rsp+130h] [rbp-50h]
  unsigned __int64 v154; // [rsp+140h] [rbp-40h]

  v5 = *(_DWORD *)(a1 + 160);
  v154 = __readfsqword(0x28u);
  v143 = 0;
  v142 = nullptr;
  if ( v5 && *(_DWORD *)(a1 + 164) )
  {
    if ( netnode_qgetblob() <= 0 )
    {
      v26 = 1;
    }
    else
    {
      v149 = 0;
      v150 = nullptr;
      v8 = v142;
      v119 = v143;
      v151 = &v149;
      v152 = &v149;
      v153 = 0;
      v9 = a5 & 2;
      if ( (a5 & 2) != 0 )
        sub_70E0((__int64)"Applying fixups...\n", &v142);
      v10 = a5 & 1;
      v141 = v10;
      v112 = (unsigned __int64)v8 + v119;
      v103 = *(_QWORD *)(a2 + 16);
      v104 = v103 & (a3 + *(unsigned int *)(a1 + 160));
      v114 = v103 & (v119 + v104);
      if ( v119 )
      {
        LODWORD(v103) = 0;
        v120 = v10 ^ 1;
        v121 = (v9 & 2) != 0;
        v118 = v119;
        v11 = v8;
        while ( 1 )
        {
          v12 = v11 + 4;
          if ( v11 < v8 || v112 < (unsigned __int64)v12 )
            break;
          if ( (unsigned __int16 *)v112 == v12 )
            goto LABEL_36;
          v13 = *((_DWORD *)v11 + 1);
          if ( !v13 )
            goto LABEL_36;
          v14 = v118;
          v113 = *(_QWORD *)(a2 + 16) & (a3 + *(unsigned int *)v11);
          v15 = v13;
          if ( v118 < v13 )
          {
            v13 = v118;
            v15 = v118;
          }
          v16 = v13 - 8;
          v122 = v15;
          while ( v16 > 0 )
          {
            while ( 1 )
            {
              v17 = v12 + 1;
              if ( v12 < v8 || v112 < (unsigned __int64)v17 )
                goto LABEL_40;
              v18 = *v12;
              v107 = v16 - 2;
              v19 = v113 + (v18 & 0xFFF);
              v20 = v19 & *(_QWORD *)(a2 + 16);
              v21 = v120 & (v20 >= v104 && v20 < v114);
              if ( !v21 && v20 == -1 )
                goto LABEL_16;
              LODWORD(v105) = *v12;
              if ( (unsigned __int8)callui(27, &callui, v18, v14, v19, v7, v102, v103, v104, v105) )
                goto LABEL_36;
              LODWORD(v103) = v103 + 1;
              v22 = v105;
              if ( __ROR4__(-1030792151 * v103 + 85899344, 2) <= 0x28F5C28u )
              {
                show_auto();
                v22 = v105;
              }
              v144 = 0;
              dword = 0;
              v147 = 0;
              v23 = v22 & 0xF000;
              si128 = _mm_load_si128((const __m128i *)&xmmword_2F000);
              v7 = (unsigned __int16 *)((char *)v8 + v20 - v104);
              if ( (v22 & 0xF000) == 0x4000 )
                break;
              if ( (v22 & 0xF000u) > 0x4000 )
              {
                if ( v23 == 0x9000 )
                  goto LABEL_75;
                if ( v23 > 0x9000u )
                {
                  if ( v23 == 0xA000 )
                  {
                    if ( v21 )
                    {
                      if ( v112 < (unsigned __int64)(v7 + 4) || v7 < v8 )
                        goto LABEL_40;
                      *(_QWORD *)v7 += a4;
                    }
                    HIDWORD(v144) = 0;
                    LOWORD(v144) = 12;
                    qword = get_qword();
                    if ( a4 )
                    {
                      dword = a4 + qword;
                      put_qword();
                    }
                    else
                    {
                      dword = qword;
                    }
                    if ( (v144 & 0x100000000LL) != 0 )
                    {
                      v37 = si128.m128i_i64[0];
                    }
                    else
                    {
                      v37 = 0;
                      if ( si128.m128i_i64[1] != -1 )
                        v37 = 16 * sel2para();
                    }
                    v32 = dword + v37;
                    v33 = getseg();
                    v34 = HIDWORD(v144) & 0xFFFFFFFE;
                    if ( !v33 )
                    {
LABEL_73:
                      HIDWORD(v144) &= ~1u;
                      si128 = _mm_load_si128((const __m128i *)&xmmword_2F000);
LABEL_65:
                      dword = v32;
                      goto LABEL_33;
                    }
LABEL_63:
                    v35 = *(_QWORD *)(v33 + 48);
                    HIDWORD(v144) = v34;
                    si128.m128i_i64[0] = 0;
                    si128.m128i_i64[1] = v35;
                    if ( v35 != -1 )
                      v32 -= 16 * sel2para();
                    goto LABEL_65;
                  }
                  goto LABEL_50;
                }
                if ( v23 != 24576 )
                {
                  if ( v23 <= 0x6000u )
                  {
                    if ( v23 != 20480 )
                    {
LABEL_50:
                      v28 = v22 >> 12;
                      if ( byte_37588 != 1 && v121 )
                      {
                        byte_37588 = 1;
                        sub_A980((__int64)"AUTOHIDE REGISTRY\nUnknown fixup type %#x is ignored", v28);
                      }
                      sub_70E0((__int64)"%a: unknown fixup type %#x is ignored\n", 0.0, v20);
                      goto LABEL_16;
                    }
LABEL_75:
                    v38 = *(unsigned __int16 *)(a1 + 4);
                    if ( (_WORD)v38 == 614 )
                      goto LABEL_80;
                  }
                  else
                  {
                    if ( ((v23 - 28672) & 0xE000) != 0 )
                      goto LABEL_50;
                    v38 = *(unsigned __int16 *)(a1 + 4);
                    if ( (_WORD)v38 == 614 )
                      goto LABEL_50;
                  }
                  if ( (unsigned __int16)v38 > 0x266u )
                  {
                    if ( (((_WORD)v38 - 870) & 0xFEFF) == 0 )
                    {
LABEL_79:
                      if ( ((v23 - 20480) & 0xB000) == 0 )
                      {
LABEL_80:
                        auto_mark_range();
                        HIDWORD(v144) = 4;
                        LOWORD(v144) = 4;
                        dword = (unsigned int)get_dword();
LABEL_32:
                        si128.m128i_i64[1] = 1;
                        goto LABEL_33;
                      }
                      goto LABEL_50;
                    }
                  }
                  else
                  {
                    v39 = (unsigned int)(v38 - 354);
                    if ( (unsigned __int16)(v38 - 354) > 7u )
                    {
                      v78 = (unsigned int)(v38 - 448);
                      if ( (unsigned __int16)(v38 - 448) > 4u )
                      {
                        if ( (_WORD)v38 == 512 )
                        {
                          if ( v23 == 0x9000 )
                          {
                            get_byte();
                            get_byte();
                            get_byte();
                            get_byte();
                            get_byte();
                            byte = get_byte();
                            v124 = get_byte();
                            v132 = get_byte();
                            v89 = get_byte();
                            v90 = get_byte();
                            v91 = get_byte();
                            v92 = v91;
                            v105 = ((unsigned __int64)v91 << 34) & 0x1FC00000000LL
                                 | ((unsigned __int64)v90 << 26)
                                 | ((unsigned __int64)v89 << 18)
                                 | ((unsigned __int64)v132 << 10)
                                 | (4LL * v124)
                                 | (byte >> 6);
                            v125 = get_byte();
                            v133 = get_byte();
                            v138 = get_byte();
                            v93 = get_byte();
                            v94 = get_byte();
                            v92 >>= 7;
                            v95 = 0;
                            LOWORD(v144) = 12;
                            HIDWORD(v144) = 0;
                            v96 = ((unsigned __int64)v93 << 25)
                                | ((unsigned __int64)v138 << 17)
                                | ((unsigned __int64)v133 << 9)
                                | (2LL * v125)
                                | v92
                                | ((unsigned __int64)v94 << 33);
                            dword = a4
                                  + ((v96 >> 6) & 0x1F0000
                                   | (v96 >> 20) & 0xFF80
                                   | (v96 >> 36 << 63)
                                   | (v96 >> 13) & 0x7F
                                   | (v105 << 22)
                                   | ((v138 << 17) | (v133 << 9) | (2 * v125) | v92) & 0x200000);
                            if ( si128.m128i_i64[1] != -1 )
                              v95 = 16 * sel2para();
                            v97 = dword + v95;
                            v98 = getseg();
                            if ( v98 )
                            {
                              v99 = *(_QWORD *)(v98 + 48);
                              HIDWORD(v144) &= ~1u;
                              si128.m128i_i64[0] = 0;
                              si128.m128i_i64[1] = v99;
                              if ( v99 != -1 )
                                v97 -= 16 * sel2para();
                            }
                            else
                            {
                              HIDWORD(v144) &= ~1u;
                              si128 = _mm_load_si128((const __m128i *)&xmmword_2F000);
                            }
                            dword = v97;
                            v16 = v107;
                            v12 = v17;
                            goto LABEL_34;
                          }
                          goto LABEL_50;
                        }
                      }
                      else
                      {
                        v79 = 21;
                        if ( _bittest64(&v79, v78) )
                        {
                          if ( v23 == 20480 )
                          {
                            v100 = get_dword();
                            v82 = v100 & 0xFFF | (v100 >> 4) & 0xF000;
                            v101 = get_dword();
                            v85 = v101 & 0xFFF | (v101 >> 4) & 0xF000;
LABEL_195:
                            HIDWORD(v144) = 0;
                            LOWORD(v144) = 4;
                            v86 = (v85 << 16) | (unsigned int)v82;
                            dword = v86;
                            if ( si128.m128i_i64[1] != -1 )
                              v86 = 16 * sel2para() + dword;
                            v87 = getseg();
                            if ( v87 )
                            {
                              v88 = *(_QWORD *)(v87 + 48);
                              HIDWORD(v144) &= ~1u;
                              si128.m128i_i64[0] = 0;
                              si128.m128i_i64[1] = v88;
                              if ( v88 != -1 )
                                v86 -= 16 * sel2para();
                            }
                            else
                            {
                              HIDWORD(v144) &= ~1u;
                              si128 = _mm_load_si128((const __m128i *)&xmmword_2F000);
                            }
                            dword = v86;
                            auto_mark_range();
LABEL_33:
                            v16 = v107;
                            ++v12;
                            goto LABEL_34;
                          }
                          if ( v23 == 28672 )
                          {
                            word = get_word();
                            v81 = get_word();
                            v82 = (unsigned __int8)word
                                | (word >> 4) & 0x700
                                | (unsigned __int16)(v81 << 12)
                                | (2 * v81) & 0x800;
                            v83 = get_word();
                            v84 = get_word();
                            v85 = (unsigned __int8)v83
                                | (v83 >> 4) & 0x700
                                | (unsigned __int16)(v84 << 12)
                                | (2 * v84) & 0x800;
                            goto LABEL_195;
                          }
                          goto LABEL_50;
                        }
                      }
                    }
                    else
                    {
                      v40 = 211;
                      if ( _bittest64(&v40, v39) )
                        goto LABEL_79;
                    }
                  }
                  if ( v23 == 28672 )
                    goto LABEL_33;
                  goto LABEL_50;
                }
              }
              else
              {
                if ( v23 == 0x2000 )
                {
                  auto_mark_range();
                  v41 = (unsigned __int64)v8 + v20 - v104;
                  v42 = *(unsigned __int16 *)(a1 + 4);
                  if ( (_WORD)v42 != 498 )
                  {
                    if ( (_WORD)v42 == 614 )
                      goto LABEL_93;
                    if ( (unsigned __int16)v42 > 0x266u )
                    {
                      if ( (((_WORD)v42 - 870) & 0xFEFF) == 0 )
                        goto LABEL_93;
                    }
                    else
                    {
                      LOWORD(v42) = v42 - 354;
                      if ( (unsigned __int16)v42 <= 7u )
                      {
                        v43 = 211;
                        if ( _bittest64(&v43, v42) )
                        {
LABEL_93:
                          getinf_flag();
                          v41 = (unsigned __int64)v8 + v20 - v104;
                        }
                      }
                    }
                  }
                  v105 = v41;
                  v44 = get_word();
                  v45 = v150;
                  if ( !v150 )
                    goto LABEL_101;
                  v46 = &v149;
                  do
                  {
                    while ( 1 )
                    {
                      v47 = v45[2];
                      v48 = v45[3];
                      if ( *((_WORD *)v45 + 16) < v44 )
                        break;
                      v46 = (int *)v45;
                      v45 = (_QWORD *)v45[2];
                      if ( !v47 )
                        goto LABEL_99;
                    }
                    v45 = (_QWORD *)v45[3];
                  }
                  while ( v48 );
LABEL_99:
                  if ( v46 != &v149 && v44 >= *((_WORD *)v46 + 16) )
                  {
                    v49 = *((_QWORD *)v46 + 5);
                    v50 = v49 >> 16;
                    if ( v21 )
                      goto LABEL_112;
                  }
                  else
                  {
LABEL_101:
                    v49 = *(_QWORD *)(a2 + 16) & (a4 + v44);
                    v50 = v49 >> 16;
                    if ( !v21 )
                      goto LABEL_102;
LABEL_112:
                    if ( v112 < v105 + 2 || v105 < (unsigned __int64)v8 )
                      goto LABEL_40;
                    *(_WORD *)v105 = v50;
                  }
LABEL_102:
                  if ( (_WORD)a4 )
                    put_word();
                  HIDWORD(v144) = 0;
                  LOWORD(v144) = 9;
                  dword = v49;
                  if ( si128.m128i_i64[1] != -1 )
                    v49 = 16 * sel2para() + dword;
                  v51 = getseg();
                  if ( !v51 )
                  {
                    HIDWORD(v144) &= ~1u;
                    dword = v49;
                    si128 = _mm_load_si128((const __m128i *)&xmmword_2F000);
                    goto LABEL_33;
                  }
                  v52 = *(_QWORD *)(v51 + 48);
                  HIDWORD(v144) &= ~1u;
                  si128.m128i_i64[0] = 0;
                  si128.m128i_i64[1] = v52;
                  if ( v52 != -1 )
                  {
                    v53 = v49 - 16 * sel2para();
                    dword = v53;
                    if ( si128.m128i_i64[1] == -1 )
                      goto LABEL_33;
                    v49 = *(_QWORD *)(a2 + 16) & (v53 - 16 * sel2para());
                  }
                  dword = v49;
                  goto LABEL_33;
                }
                if ( v23 > 0x2000u )
                {
                  if ( v23 == 12288 )
                  {
                    if ( v21 )
                    {
                      if ( v112 < (unsigned __int64)(v7 + 2) || v7 < v8 )
                        goto LABEL_40;
                      *(_DWORD *)v7 += a4;
                    }
                    HIDWORD(v144) = 0;
                    LOWORD(v144) = 4;
                    v29 = *(_WORD *)(a1 + 4);
                    if ( ((unsigned __int16)(v29 - 354) <= 1u || v29 == 358) && (unsigned __int8)segtype() == 2 )
                      HIDWORD(v144) |= 4u;
                    v30 = get_dword();
                    dword = v30;
                    if ( a4 )
                    {
                      dword = *(_QWORD *)(a2 + 16) & (a4 + v30);
                      put_dword();
                    }
                    if ( (v144 & 0x100000000LL) != 0 )
                    {
                      v31 = si128.m128i_i64[0];
                    }
                    else
                    {
                      v31 = 0;
                      if ( si128.m128i_i64[1] != -1 )
                        v31 = 16 * sel2para();
                    }
                    v32 = dword + v31;
                    v33 = getseg();
                    v34 = HIDWORD(v144) & 0xFFFFFFFE;
                    if ( !v33 )
                      goto LABEL_73;
                    goto LABEL_63;
                  }
                  goto LABEL_50;
                }
                if ( v23 )
                {
                  if ( v21 )
                  {
                    if ( v112 < (unsigned __int64)(v7 + 1) || v7 < v8 )
                      goto LABEL_40;
                    *v7 += WORD1(a4);
                  }
                  auto_mark_range();
                  HIDWORD(v144) = 0;
                  LOWORD(v144) = 7;
                  v24 = (int)((unsigned int)get_word() << 16);
                  dword = v24;
                  if ( a4 >> 16 )
                  {
                    dword = *(_QWORD *)(a2 + 16) & (a4 + v24);
                    put_word();
                  }
                  goto LABEL_32;
                }
              }
LABEL_16:
              v16 -= 2;
              ++v12;
              if ( v107 <= 0 )
                goto LABEL_35;
            }
            auto_mark_range();
            v54 = (unsigned __int16 *)((char *)v8 + v20 - v104);
            v55 = *(unsigned __int16 *)(a1 + 4);
            if ( (_WORD)v55 == 498 )
            {
              if ( (v20 & 3) == 0 )
              {
LABEL_158:
                v105 = v20 + 2;
                goto LABEL_123;
              }
            }
            else
            {
              if ( (_WORD)v55 != 614 )
              {
                if ( (unsigned __int16)v55 > 0x266u )
                {
                  if ( (((_WORD)v55 - 870) & 0xFEFF) != 0 )
                    goto LABEL_122;
                }
                else
                {
                  LOWORD(v55) = v55 - 354;
                  if ( (unsigned __int16)v55 > 7u )
                    goto LABEL_122;
                  v56 = 211;
                  if ( !_bittest64(&v56, v55) )
                    goto LABEL_122;
                }
              }
              v57 = getinf_flag();
              v54 = (unsigned __int16 *)((char *)v8 + v20 - v104);
              if ( v57 )
                goto LABEL_158;
            }
LABEL_122:
            HIDWORD(v105) = HIDWORD(v20);
LABEL_123:
            v108 = v54;
            v123 = v12 + 2;
            if ( v17 < v8 || v112 < (unsigned __int64)(v12 + 2) )
              goto LABEL_40;
            v16 -= 4;
            v126 = v12[1];
            v58 = get_word();
            v59 = &v149;
            v60 = v108;
            v61 = *(_QWORD *)(a2 + 16) & (a4 + (__int16)v126 + (v58 << 16));
            v62 = v150;
            if ( v150 )
            {
              do
              {
                while ( 1 )
                {
                  v63 = v62[2];
                  v64 = v62[3];
                  if ( *((_WORD *)v62 + 16) < v126 )
                    break;
                  v59 = (int *)v62;
                  v62 = (_QWORD *)v62[2];
                  if ( !v63 )
                    goto LABEL_130;
                }
                v62 = (_QWORD *)v62[3];
              }
              while ( v64 );
LABEL_130:
              if ( v59 != &v149 && v126 >= *((_WORD *)v59 + 16) )
                goto LABEL_139;
            }
            else
            {
              v59 = &v149;
            }
            v134 = v59;
            v65 = operator new(0x30u);
            v66 = v126;
            *(_QWORD *)(v65 + 40) = 0;
            v67 = (void *)v65;
            v59 = v134;
            v60 = v108;
            *(_WORD *)(v65 + 32) = v126;
            if ( v134 == &v149 )
            {
              if ( !v153 || (v69 = (__int64)v152, v59 = nullptr, *((_WORD *)v152 + 16) >= v126) )
              {
LABEL_136:
                v136 = v67;
                v128 = v60;
                v70 = sub_7B80((__int64)v148, v66);
                v60 = v128;
                v67 = v136;
                v59 = (int *)v70;
                v69 = v71;
              }
LABEL_137:
              if ( !v69 )
                goto LABEL_188;
              goto LABEL_138;
            }
            v68 = *((_WORD *)v134 + 16);
            if ( v126 < v68 )
            {
              v69 = (__int64)v134;
              if ( v151 == v134 )
                goto LABEL_137;
              v135 = v126;
              v127 = v67;
              v139 = v59;
              v69 = std::_Rb_tree_decrement();
              v66 = v135;
              v60 = v108;
              v67 = v127;
              if ( *(_WORD *)(v69 + 32) >= v135 )
                goto LABEL_136;
              v59 = nullptr;
              if ( *(_QWORD *)(v69 + 24) )
              {
                v59 = v139;
                v69 = (__int64)v139;
              }
              goto LABEL_137;
            }
            if ( v68 >= v126 )
              goto LABEL_188;
            if ( v152 != v134 )
            {
              v137 = v126;
              v130 = (void *)v65;
              v140 = v59;
              v69 = std::_Rb_tree_increment();
              v66 = v137;
              v60 = v108;
              v67 = v130;
              if ( v137 >= *(_WORD *)(v69 + 32) )
                goto LABEL_136;
              v59 = v140;
              if ( *((_QWORD *)v140 + 3) )
              {
                v59 = (int *)v69;
                goto LABEL_137;
              }
            }
            if ( !v59 )
            {
LABEL_188:
              if ( v67 )
              {
                v110 = v60;
                v131 = v59;
                operator delete(v67, 0x30u);
                v59 = v131;
                v60 = v110;
              }
              goto LABEL_139;
            }
LABEL_138:
            v109 = (int *)v67;
            v129 = v60;
            std::_Rb_tree_insert_and_rebalance();
            v59 = v109;
            ++v153;
            v60 = v129;
LABEL_139:
            *((_QWORD *)v59 + 5) = v61;
            v72 = v61 >> 16;
            v73 = (unsigned __int16)v61 & 0x8000;
            if ( (v61 & 0x8000) != 0 )
              LOWORD(v72) = WORD1(v61) + 1;
            if ( v21 )
            {
              if ( v112 < (unsigned __int64)(v60 + 1) || v60 < v8 )
                goto LABEL_40;
              *v60 = v72;
            }
            put_word();
            dword = v61;
            if ( (v144 & 0x100000000LL) != 0 )
            {
              v61 += si128.m128i_i64[0];
            }
            else if ( si128.m128i_i64[1] != -1 )
            {
              v61 = dword + 16 * sel2para();
            }
            v74 = getseg();
            if ( v74 )
            {
              v75 = *(_QWORD *)(v74 + 48);
              HIDWORD(v144) &= ~1u;
              si128.m128i_i64[0] = 0;
              si128.m128i_i64[1] = v75;
              if ( v75 == -1 )
              {
                dword = v61;
              }
              else
              {
                dword = v61 - 16 * sel2para();
                if ( si128.m128i_i64[1] != -1 )
                  dword -= 16 * sel2para();
              }
            }
            else
            {
              HIDWORD(v144) &= ~1u;
              dword = v61;
              si128 = _mm_load_si128((const __m128i *)&xmmword_2F000);
            }
            custom_fixup = word_37550;
            if ( word_37550 == (__int16)0x8000 )
            {
              custom_fixup = find_custom_fixup();
              word_37550 = custom_fixup;
            }
            if ( custom_fixup )
            {
              LOWORD(v144) = custom_fixup;
              HIDWORD(v144) = 0;
            }
            else
            {
              HIDWORD(v144) = 0;
              LOWORD(v144) = 7;
              if ( v73 )
                v147 = 0x10000;
            }
            v77 = *(_WORD *)(a1 + 4);
            if ( v77 == 614 )
            {
LABEL_223:
              v12 = v123;
              goto LABEL_34;
            }
            if ( v77 > 0x266u )
            {
              v12 = v123;
            }
            else
            {
              if ( (unsigned __int16)(v77 - 354) > 7u )
                goto LABEL_223;
              v12 = v123;
            }
LABEL_34:
            set_fixup();
          }
LABEL_35:
          v25 = v118 == v122;
          v118 -= v122;
          v11 = v12;
          if ( v25 )
            goto LABEL_36;
        }
LABEL_40:
        sub_A980((__int64)"Corrupted fixup table");
        v26 = 0;
      }
      else
      {
LABEL_36:
        if ( !v141 )
          netnode_setblob();
        v26 = 1;
      }
      sub_8840(v150);
    }
    if ( v142 )
    {
      *(_QWORD *)&v143 = 0;
      qfree();
    }
  }
  else
  {
    return 1;
  }
  return v26;
}

