unsigned __int64 __fastcall sub_1890(
        __int64 a1,
        __m128 si128,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 eah; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  __m128 v13; // xmm4
  __m128 v14; // xmm5
  __int64 v15; // r8
  int v16; // r14d
  unsigned int v17; // r13d
  __int64 v18; // rbx
  char *v19; // rbp
  __int64 v20; // r15
  int v21; // eax
  __int64 v22; // r15
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 free_chunk; // rax
  unsigned int v27; // r15d
  unsigned int v28; // ebx
  __int64 *segm_by_sel; // rax
  __int64 v30; // rax
  char v31; // al
  unsigned int v32; // r13d
  unsigned __int64 v33; // rsi
  __int16 v34; // bx
  _TBYTE *v35; // rsi
  int v36; // ebp
  __int16 v37; // bx
  __int64 v38; // rdx
  __int64 v39; // rbp
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdi
  int v47; // ebp
  __int64 v48; // rdx
  unsigned int v49; // ebx
  __int64 v50; // r15
  int v51; // ebp
  unsigned int v52; // ebx
  unsigned __int64 v54; // rax
  bool v55; // cf
  unsigned int v56; // ebp
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // r15
  unsigned __int64 v59; // r12
  unsigned __int64 *v60; // rax
  unsigned __int64 v61; // rdx
  __int64 v62; // rax
  unsigned __int64 v63; // rbx
  unsigned __int64 v64; // rbp
  unsigned __int64 v65; // r13
  __int64 v66; // rax
  __int64 v67; // r13
  __int64 *v68; // rax
  __int16 v69; // bx
  __int64 v70; // rbp
  unsigned __int64 v71; // rax
  __int64 v72; // r8
  __int16 v73; // dx
  __int64 v74; // rdi
  __int64 v75; // rax
  unsigned __int64 v76; // rbx
  _BYTE *v77; // rsi
  unsigned __int8 *v78; // r12
  _BYTE *v79; // rsi
  __int64 v80; // rdx
  __int64 v81; // rcx
  unsigned __int64 v82; // rbp
  unsigned __int64 *v83; // rax
  unsigned __int64 v84; // r12
  unsigned __int64 v85; // r13
  unsigned __int64 v86; // rbx
  __int64 v87; // rdi
  int v88; // r12d
  unsigned __int64 v89; // rdx
  unsigned int v90; // r13d
  __int64 v91; // rsi
  __int64 v92; // rbx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __m128 v97; // xmm4
  __m128 v98; // xmm5
  __int64 v99; // rbp
  __int64 v100; // r15
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __m128 v105; // xmm4
  __m128 v106; // xmm5
  __int64 v107; // rdx
  char v108; // cl
  __int64 v109; // rcx
  __int64 v110; // r13
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rsi
  __int64 v115; // rdi
  __int64 v116; // rax
  __int64 v117; // rcx
  __int64 v118; // rsi
  __int64 v119; // rax
  __int64 v120; // rbx
  __int64 v121; // rax
  __int64 v122; // rbp
  unsigned __int16 v123; // di
  __int64 v124; // rbx
  __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 *v128; // rax
  __int64 v129; // rbp
  __int64 v130; // [rsp+0h] [rbp-358h]
  _TBYTE *v131; // [rsp+8h] [rbp-350h]
  char v132; // [rsp+8h] [rbp-350h]
  __int64 v133; // [rsp+10h] [rbp-348h]
  unsigned __int64 v134; // [rsp+10h] [rbp-348h]
  char v135; // [rsp+10h] [rbp-348h]
  __int64 v136; // [rsp+18h] [rbp-340h]
  unsigned int v137; // [rsp+18h] [rbp-340h]
  __int64 v138; // [rsp+18h] [rbp-340h]
  __int64 v139; // [rsp+28h] [rbp-330h]
  __int64 v141; // [rsp+38h] [rbp-320h]
  unsigned __int64 v142; // [rsp+40h] [rbp-318h]
  unsigned __int64 v143; // [rsp+48h] [rbp-310h]
  __int64 v144; // [rsp+50h] [rbp-308h]
  unsigned __int64 v145; // [rsp+58h] [rbp-300h]
  char v146; // [rsp+6Fh] [rbp-2E9h] BYREF
  unsigned __int16 v147; // [rsp+70h] [rbp-2E8h] BYREF
  __int16 v148; // [rsp+72h] [rbp-2E6h]
  _BYTE v149[24]; // [rsp+90h] [rbp-2C8h] BYREF
  __int64 v150; // [rsp+A8h] [rbp-2B0h]
  __int64 v151; // [rsp+B0h] [rbp-2A8h]
  int v152; // [rsp+C0h] [rbp-298h] BYREF
  unsigned int v153; // [rsp+C4h] [rbp-294h]
  int v154; // [rsp+D8h] [rbp-280h]
  unsigned int v155; // [rsp+DCh] [rbp-27Ch]
  int v156; // [rsp+E0h] [rbp-278h]
  unsigned int v157; // [rsp+E4h] [rbp-274h]
  int v158; // [rsp+E8h] [rbp-270h]
  int v159; // [rsp+ECh] [rbp-26Ch]
  _TBYTE v160; // [rsp+100h] [rbp-258h] BYREF
  char v161; // [rsp+110h] [rbp-248h]
  char s1[4]; // [rsp+111h] [rbp-247h] BYREF
  char v163; // [rsp+115h] [rbp-243h]
  _BYTE v164[264]; // [rsp+210h] [rbp-148h] BYREF
  unsigned __int64 v165; // [rsp+318h] [rbp-40h]

  v165 = __readfsqword(0x28u);
  set_processor_type("metapc", 1);
  setinf_flag(3, 4, 0);
  setinf_flag(3, 2, 1);
  qlseek(a1, 1, 0);
  lread(a1, &unk_51A0, 163);
  lread(a1, &v152, 64);
  eah = get_eah();
  v15 = v153;
  v139 = eah;
  if ( v152 != -1 && v153 )
  {
    LODWORD(v131) = v153;
    v16 = 0;
    v17 = 0;
    qlseek(a1, (unsigned int)(v152 + 1), 0);
    do
    {
      while ( 1 )
      {
        v18 = qlseek(a1, 0, 1);
        if ( v18 >= qlsize(a1) )
LABEL_150:
          sub_16B0((__int64)"Corrupted segmentation info");
        ++v16;
        lread(a1, &v160, 17);
        lread(a1, v149, 1);
        lread(a1, v164, v149[0]);
        v19 = "CODE";
        v164[v149[0]] = 0;
        qstrncpy(s1, v164, 41);
        v17 += v149[0] + 18;
        if ( strncasecmp(s1, "CODE", 4u) )
          v19 = s1;
        if ( !strncasecmp(s1, "DATA", 4u) )
          v19 = "DATA";
        if ( !strncasecmp(s1, "CONST", 5u) )
          v19 = "CONST";
        if ( !strcasecmp(s1, "STACK") )
          v19 = "STACK";
        if ( !strchr(s1, 58) )
          break;
        if ( v17 >= (unsigned int)v131 )
          goto LABEL_22;
      }
      LODWORD(v133) = *(_DWORD *)((char *)&v160 + 2) + 1;
      if ( *(_DWORD *)((char *)&v160 + 2) + 1 < 0 )
        goto LABEL_150;
      v20 = qlseek(a1, 0, 1);
      if ( v20 >= qlsize(a1) )
        goto LABEL_150;
      if ( *(_DWORD *)s1 != 1096040772 || (v21 = 0, v163) )
        v21 = 1;
      if ( !v21 )
        qword_5170 = v16;
      set_selector(v16, 0);
      v22 = (int)v133;
      v25 = getinf(20, 0, (1 << v161) - 1, (unsigned int)v161, v23, v24, v130, v131, v133, (1 << v161) - 1);
      free_chunk = find_free_chunk(v25, v22, v136);
      sub_1760(v16, free_chunk, v22 + free_chunk, (__int64)s1, v19);
    }
    while ( v17 < (unsigned int)v131 );
  }
LABEL_22:
  v27 = v155;
  if ( v154 != -1 && v155 )
  {
    v28 = 0;
    qlseek(a1, (unsigned int)(v154 + 1), 0);
    v131 = &v160;
    do
    {
      if ( qlread(a1, &v160, 9) != 9 )
        sub_16B0((__int64)"Corrupted pubdefs");
      lread(a1, v149, 1);
      lread(a1, v164, v149[0]);
      v164[v149[0]] = 0;
      qstrncpy((char *)&v160 + 9, v164, 256);
      v28 += v149[0] + 10;
      segm_by_sel = (__int64 *)get_segm_by_sel(BYTE4(v160));
      if ( segm_by_sel )
      {
        v30 = *segm_by_sel;
        if ( v30 != -1 )
        {
          v133 = *(_QWORD *)(v139 + 16) & (v30 + SLODWORD(v160));
          v31 = segtype();
          add_entry(v133, v133, (char *)&v160 + 9, v31 == 2, 1);
        }
      }
    }
    while ( v28 < v27 );
  }
  v32 = v157;
  v33 = (unsigned int)(v156 + 1);
  if ( v156 != -1 && v157 )
  {
    qlseek(a1, v33, 0);
    if ( (unsigned __int8)getinf_flag(3, 4) )
    {
      v34 = 8;
      v35 = (_TBYTE *)&byte_8;
      v36 = 8;
    }
    else
    {
      v34 = 4;
      v35 = (_TBYTE *)&byte_4;
      v36 = 4;
    }
    setinf(9, v35);
    v37 = word_51AA * v34;
    if ( !word_51AA )
      goto LABEL_39;
    v38 = 0;
    if ( word_51AA >= 0 )
      v38 = (unsigned __int16)word_51AA;
    if ( v37 >= (__int16)v38 )
    {
      v38 = 0xFFFF % (unsigned __int16)word_51AA;
      if ( v36 <= 0xFFFF / (unsigned __int16)word_51AA )
      {
LABEL_39:
        v39 = word_51A4 + 1;
        set_selector(v39, 0);
        v44 = getinf(20, 0, v40, v41, v42, v43, v130, v131, v133, v136);
        v45 = find_free_chunk(v44, v37, 15);
        v46 = v39;
        v47 = 0;
        v48 = v37 + v45;
        v49 = 0;
        qword_5188 = v45;
        sub_1760(v46, v45, v48, (__int64)"XTRN", "XTRN");
        while ( 1 )
        {
          v35 = &v160;
          if ( qlread(a1, &v160, 5) != 5 )
            break;
          *(_DWORD *)((char *)&v160 + 5) = 0;
          if ( BYTE4(v160) )
          {
            sub_1440((__int64)"extdef.allocate\n");
            lread(a1, (char *)&v160 + 5, 4);
          }
          lread(a1, v149, 1);
          lread(a1, v164, v149[0]);
          v164[v149[0]] = 0;
          qstrncpy((char *)&v160 + 9, v164, 256);
          v33 = (unsigned __int64)&v160 + 9;
          v49 += v149[0] + 6;
          v50 = *(_QWORD *)(v139 + 16) & (qword_5188 + v47);
          set_name(v50, (char *)&v160 + 9, 1024);
          if ( BYTE4(v160) )
          {
            v33 = *(int *)((char *)&v160 + 5);
            put_dword(v50, *(int *)((char *)&v160 + 5));
          }
          v47 += 4;
          if ( v49 >= v32 )
            goto LABEL_46;
        }
      }
    }
    sub_16B0((__int64)"Corrupted extdefs", v35, v38);
  }
LABEL_46:
  v51 = v159;
  v52 = v158 + 1;
  LOBYTE(v10) = v159 == 0;
  if ( v159 == 0 || v158 == -1 )
    goto LABEL_47;
  v54 = qlsize(a1);
  v55 = __CFADD__(v52, v51);
  v56 = v52 + v51;
  if ( v55 )
    goto LABEL_153;
  v33 = v52;
  v57 = v56;
  if ( v52 >= (unsigned __int64)v56 )
    v57 = v52;
  if ( v54 < v57 )
LABEL_153:
    sub_16B0((__int64)"Corrupted fixups", v33);
  v58 = v56;
  qlseek(a1, v52, 0);
  while ( 1 )
  {
LABEL_57:
    v33 = 0;
    if ( qlseek(a1, 0, 1) >= v58 )
      goto LABEL_47;
    lread(a1, &v146, 1);
    v33 = (unsigned int)v146;
    if ( v146 == 1 )
    {
      v33 = (unsigned __int64)&v147;
      if ( qlread(a1, &v147, 4) != 4 || v148 < 0 )
        goto LABEL_153;
      v67 = qlseek(a1, 0, 1);
      v68 = (__int64 *)get_segm_by_sel((unsigned __int8)v147);
      if ( !v68 )
        goto LABEL_123;
      v141 = *v68;
      if ( *v68 == -1 )
        goto LABEL_123;
      v69 = v148;
      v70 = qlseek(a1, 0, 1);
      v71 = qlsize(a1) - v70;
      if ( ((v71 | v70) & 0x8000000000000000LL) == 0LL )
      {
        v74 = v148;
        if ( v71 >= v148 )
        {
LABEL_83:
          v75 = qalloc(v74);
          v76 = v75;
          if ( !v75 )
            goto LABEL_156;
          lread(a1, v75, v148);
          if ( v76 >= v76 + v148 )
            goto LABEL_122;
          v77 = v149;
          v143 = v58;
          v78 = (unsigned __int8 *)v76;
          v144 = v67;
          v145 = v76;
          v142 = v76 + v148;
          while ( 1 )
          {
            si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_3250);
            *(_QWORD *)v149 = 4;
            v150 = 0;
            v151 = 0;
            *(__m128 *)&v149[8] = si128;
            switch ( *v78 )
            {
              case '$':
                v135 = 0;
                goto LABEL_126;
              case '%':
                v135 = 0;
                goto LABEL_134;
              case '&':
                v135 = 0;
                goto LABEL_136;
              case '*':
                v122 = *(unsigned __int16 *)(v78 + 1);
                v123 = *(_WORD *)(v78 + 3);
                v124 = 0;
                v135 = 0;
                v137 = 0;
                v78 += 5;
                v132 = 1;
                goto LABEL_127;
              case ',':
                sub_1440((__int64)"Untested relocation type");
                v135 = 1;
LABEL_126:
                v121 = *(unsigned __int16 *)(v78 + 3);
                v132 = 0;
                v78 += 7;
                v122 = *((unsigned __int16 *)v78 - 3);
                v123 = *((_WORD *)v78 - 1);
                v137 = v121;
                v124 = v121;
                goto LABEL_127;
              case '-':
                v135 = 1;
LABEL_134:
                v126 = *(unsigned __int16 *)(v78 + 3);
                v122 = *(unsigned __int16 *)(v78 + 1);
                v132 = 0;
                v78 += 5;
                v123 = v147;
                v137 = v126;
                v124 = v126;
                goto LABEL_127;
              case '.':
                v135 = 1;
LABEL_136:
                v122 = *(unsigned __int16 *)(v78 + 1);
                v123 = *(_WORD *)(v78 + 3);
                v124 = 0;
                v78 += 5;
                v132 = 0;
                v137 = 0;
LABEL_127:
                v125 = *(_QWORD *)(v139 + 16);
                v99 = v125 & (v141 + v122);
                if ( v123 >> 12 == 2 )
                {
                  v128 = (__int64 *)get_segm_by_sel((unsigned __int8)v123);
                  v108 = v149[4];
                  if ( v128 )
                  {
                    v100 = *v128;
                    v92 = *v128 + v124;
                  }
                  else
                  {
                    v92 = v124 - 1;
                    v100 = -1;
                  }
                  goto LABEL_107;
                }
                if ( v123 >> 12 != 6 )
                {
                  v90 = v123;
                  v92 = v124 - 1;
LABEL_106:
                  v100 = -1;
                  sub_1440((__int64)"Unknown relocation target %04X", v90);
                  v77 = (_BYTE *)v90;
                  sub_1370(
                    (__int64)"!!! Unknown relocation target %04X",
                    v90,
                    v101,
                    v102,
                    v103,
                    v104,
                    si128,
                    a3,
                    a4,
                    a5,
                    v105,
                    v106,
                    a8,
                    a9,
                    v130);
                  v108 = v149[4];
LABEL_107:
                  if ( (v108 & 1) != 0 )
                    goto LABEL_108;
                  goto LABEL_130;
                }
                v107 = v125 & (qword_5188 + 4 * (v123 & 0xFFF) - 4);
                v92 = v107 + v124;
                v100 = v107;
                *(_DWORD *)&v149[4] |= 2u;
                if ( (v149[4] & 1) != 0 )
                {
LABEL_108:
                  v109 = *(_QWORD *)&v149[8];
                  goto LABEL_109;
                }
LABEL_130:
                v109 = 0;
                if ( *(_QWORD *)&v149[16] != -1 )
                  v109 = 16 * sel2para(*(_QWORD *)&v149[16], v77, v107, 0);
LABEL_109:
                v110 = v150 + v109;
                v111 = getseg(v150 + v109);
                v114 = *(_DWORD *)&v149[4] & 0xFFFFFFFE;
                if ( v111 )
                {
                  v115 = *(_QWORD *)(v111 + 48);
                  *(_DWORD *)&v149[4] &= ~1u;
                  *(_QWORD *)&v149[8] = 0;
                  *(_QWORD *)&v149[16] = v115;
                  if ( v115 != -1 )
                  {
                    v116 = sel2para(v115, v114, v112, v113);
                    LOBYTE(v114) = v149[4];
                    v110 -= 16 * v116;
                  }
                }
                else
                {
                  a3 = (__m128)_mm_load_si128((const __m128i *)&xmmword_3250);
                  *(_DWORD *)&v149[4] &= ~1u;
                  *(__m128 *)&v149[8] = a3;
                }
                v150 = v110;
                if ( (v114 & 2) != 0 )
                {
                  v117 = v137;
                }
                else
                {
                  v92 &= *(_QWORD *)(v139 + 16);
                  v117 = 0;
                  v100 = v92;
                }
                v118 = v114 & 1;
                if ( (_DWORD)v118 )
                {
                  v100 -= *(_QWORD *)&v149[8];
                }
                else if ( *(_QWORD *)&v149[16] != -1 )
                {
                  v138 = v117;
                  v127 = sel2para(*(_QWORD *)&v149[16], v118, v112, v117);
                  v117 = v138;
                  v100 -= 16 * v127;
                }
                v119 = *(_QWORD *)(v139 + 16);
                v151 = v117;
                v120 = v119 & v92;
                v150 = v119 & v100;
                if ( v132 )
                  v120 = v119 & (v120 - v99 - 4);
                set_fixup(v99, v149);
                v77 = (_BYTE *)v120;
                put_dword(v99, v120);
                if ( v135 )
                {
                  v129 = v99 + 4;
                  *(_DWORD *)&v149[4] = 0;
                  *(_WORD *)v149 = 2;
                  set_fixup(v129 & *(_QWORD *)(v139 + 16), v149);
                  v77 = *(_BYTE **)&v149[16];
                  put_word(v129 & *(_QWORD *)(v139 + 16), *(_QWORD *)&v149[16]);
                }
                if ( (unsigned __int64)v78 >= v142 )
                {
                  v58 = v143;
                  v67 = v144;
                  v76 = v145;
LABEL_122:
                  qfree(v76);
LABEL_123:
                  qlseek(a1, v67 + v148, 0);
                  goto LABEL_57;
                }
                break;
              default:
                v90 = 9;
                sub_1440((__int64)"Unknown relocation type %02X", *v78);
                v91 = *v78++;
                v92 = -1;
                sub_1370(
                  (__int64)"!!! Unknown relocation type %02X",
                  v91,
                  v93,
                  v94,
                  v95,
                  v96,
                  si128,
                  a3,
                  a4,
                  a5,
                  v97,
                  v98,
                  a8,
                  a9,
                  v130);
                v135 = 0;
                v132 = 0;
                v99 = *(_QWORD *)(v139 + 16) & v141;
                v137 = 0;
                goto LABEL_106;
            }
          }
        }
        v73 = v71;
        v72 = (__int16)v71;
      }
      else
      {
        v72 = 0;
        v73 = 0;
      }
      v148 = v73;
      if ( (unsigned int)sub_15D0(
                           1u,
                           (__int64)"AUTOHIDE SESSION\n"
                                    "HIDECANCEL\n"
                                    "%s %llu is incorrect, maximum possible value is %llu%s",
                           "Fixup count",
                           v69,
                           v72,
                           ". Do you want to continue with the new value?") != 1 )
        sub_16B0(0);
      v74 = v148;
      goto LABEL_83;
    }
    if ( v146 == 2 )
    {
      v79 = v149;
      lread(a1, v149, 14);
      *(_QWORD *)&v149[14] = 0;
      if ( !*(_DWORD *)&v149[10] )
        continue;
      if ( (*(_DWORD *)&v149[6] | *(_DWORD *)&v149[10]) < 0 )
        goto LABEL_160;
      v79 = nullptr;
      v82 = qlseek(a1, 0, 1);
      v83 = (unsigned __int64 *)get_segm_by_sel(v149[4]);
      if ( !v83 )
        goto LABEL_104;
      v84 = *v83;
      if ( *v83 == -1 )
        goto LABEL_104;
      v85 = qlsize(a1);
      v86 = *(_QWORD *)(v139 + 16) & (v84 + *(int *)v149);
      v87 = getseg(v86);
      if ( v86 >= v84 && v85 >= v82 )
      {
        v81 = *(int *)&v149[10];
        if ( v85 - v82 >= *(int *)&v149[10] )
        {
          v79 = (_BYTE *)*(unsigned int *)&v149[6];
          if ( !*(_DWORD *)&v149[6]
            || !*(_DWORD *)&v149[10]
            || (LODWORD(v80) = (*(unsigned int *)&v149[10] * (unsigned __int64)*(unsigned int *)&v149[6]) >> 32,
                is_mul_ok(*(unsigned int *)&v149[10], *(unsigned int *)&v149[6])) )
          {
            if ( v87 )
            {
              v81 = (unsigned int)(*(_DWORD *)&v149[6] * *(_DWORD *)&v149[10]);
              v79 = (_BYTE *)(*(_QWORD *)(v139 + 16) & (v81 + v86));
              if ( (unsigned __int64)v79 >= v86 && *(_QWORD *)(v87 + 8) >= (unsigned __int64)v79 )
              {
                v88 = change_storage_type(v86, v79, 0);
                if ( !v88 )
                {
                  if ( *(int *)&v149[6] > 0 )
                  {
                    do
                    {
                      v89 = v86;
                      ++v88;
                      v86 = *(_QWORD *)(v139 + 16) & (v86 + *(int *)&v149[10]);
                      file2base(a1, v82, v89, v86, 1);
                    }
                    while ( v88 < *(int *)&v149[6] );
                  }
LABEL_104:
                  qlseek(a1, v82 + *(int *)&v149[10], 0);
                  continue;
                }
                if ( under_debugger )
                  goto LABEL_162;
                interr(20061);
              }
            }
          }
        }
      }
LABEL_160:
      sub_16B0((__int64)"Corrupted iterated data", v79, v80, v81);
    }
    if ( v146 )
      break;
    if ( qlread(a1, &v160, 10) != 10 || *(int *)((char *)&v160 + 6) < 0 )
LABEL_161:
      sub_16B0((__int64)"Corrupted text data");
    if ( *(_DWORD *)((char *)&v160 + 6) )
    {
      v59 = qlseek(a1, 0, 1);
      v60 = (unsigned __int64 *)get_segm_by_sel(BYTE4(v160));
      if ( !v60 )
        goto LABEL_74;
      v61 = *v60;
      if ( *v60 == -1 )
        goto LABEL_74;
      v134 = *v60;
      v62 = *(_QWORD *)(v139 + 16);
      v63 = v62 & (v61 + SLODWORD(v160));
      v64 = v62 & (v63 + *(int *)((char *)&v160 + 6));
      v65 = qlsize(a1);
      v66 = getseg(v63);
      if ( v63 < v134
        || v64 < v63
        || v65 < v59
        || v65 - v59 < *(int *)((char *)&v160 + 6)
        || !v66
        || *(_QWORD *)(v66 + 8) < v64 )
      {
        goto LABEL_161;
      }
      if ( !(unsigned int)change_storage_type(v63, v64, 0) )
      {
        file2base(a1, v59, v63, v64, 1);
LABEL_74:
        qlseek(a1, v59 + *(int *)((char *)&v160 + 6), 0);
        continue;
      }
      if ( !under_debugger )
      {
        interr(20060);
LABEL_156:
        sub_1510((__int64)"read_fixup");
      }
LABEL_162:
      BUG();
    }
  }
  sub_1440((__int64)"txtfix.blk_type == %d!\n", v33);
LABEL_47:
  if ( qword_5170 != -1 )
    set_default_dataseg(qword_5170, v33, v10, v11, v15);
  sub_1370(
    (__int64)"Module: %*.*s",
    (unsigned int)byte_51BD,
    (unsigned __int8)byte_51BD,
    (__int64)&unk_51BE,
    v15,
    v12,
    si128,
    a3,
    a4,
    a5,
    v13,
    v14,
    a8,
    a9,
    v130);
  return v165 - __readfsqword(0x28u);
}
