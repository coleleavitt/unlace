unsigned __int64 __fastcall sub_5E00(
        __int64 a1,
        __int16 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  double v10; // xmm4_8
  double v11; // xmm5_8
  __int64 v12; // rax
  __int64 v13; // rax
  const char *v14; // rbp
  int v16; // ebx
  int v17; // r12d
  unsigned __int16 v18; // r15
  __int64 v19; // rax
  int v20; // r12d
  unsigned __int16 v21; // r15
  __int64 v22; // rax
  int v23; // eax
  __m128i si128; // xmm0
  unsigned __int8 v25; // r12
  unsigned __int8 v26; // al
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // r14d
  __int64 v30; // rsi
  __int64 v31; // rax
  int *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rax
  char v36; // r12
  __int64 v37; // rbp
  unsigned __int64 v38; // rbx
  int *i; // r15
  unsigned __int64 v40; // rax
  unsigned int v41; // eax
  int v42; // ebp
  int dword; // r15d
  void *v44; // rdi
  bool v45; // bp
  __int64 v46; // rax
  __int16 v47; // ax
  __int16 v48; // cx
  __int16 v49; // bp
  __int64 v50; // r15
  __int16 v51; // ax
  __int64 v52; // rbp
  __int16 v53; // ax
  __int16 v54; // cx
  __int16 v55; // bp
  __int16 v56; // r15
  __int16 v57; // bp
  __int64 v58; // rax
  __int16 v59; // dx
  unsigned __int8 v60; // r15
  char byte; // bp
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned __int64 v65; // rax
  __int64 v66; // rsi
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rsi
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rbx
  unsigned int v82; // ebp
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rdi
  int v91; // eax
  unsigned __int64 v92; // rax
  __int64 v93; // rbx
  __int64 v94; // rax
  __int64 v95; // rax
  _QWORD *segm_by_sel; // rax
  _QWORD *first_seg; // rax
  _QWORD *v98; // rbp
  __int64 v99; // rbx
  __int64 v100; // r12
  __int64 v101; // r13
  unsigned int _32bit; // r14d
  __int64 v103; // r13
  __int64 v104; // r12
  __int64 v105; // rdi
  __int64 v106; // rbx
  __int64 v107; // rsi
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  int v112; // [rsp+4h] [rbp-164h]
  unsigned int v113; // [rsp+4h] [rbp-164h]
  unsigned int v114; // [rsp+4h] [rbp-164h]
  __int64 v115; // [rsp+8h] [rbp-160h]
  __int16 v117; // [rsp+18h] [rbp-150h]
  __int16 v118; // [rsp+18h] [rbp-150h]
  __int64 entry; // [rsp+20h] [rbp-148h]
  int v120; // [rsp+30h] [rbp-138h]
  __int64 v121; // [rsp+38h] [rbp-130h]
  int v122; // [rsp+40h] [rbp-128h]
  unsigned __int16 v123; // [rsp+46h] [rbp-122h]
  unsigned __int64 v124; // [rsp+48h] [rbp-120h]
  __int16 v125; // [rsp+60h] [rbp-108h] BYREF
  unsigned __int16 v126; // [rsp+62h] [rbp-106h] BYREF
  unsigned int v127; // [rsp+64h] [rbp-104h] BYREF
  __int64 v128; // [rsp+68h] [rbp-100h] BYREF
  unsigned __int16 v129; // [rsp+70h] [rbp-F8h] BYREF
  unsigned __int16 v130; // [rsp+72h] [rbp-F6h]
  char v131; // [rsp+75h] [rbp-F3h]
  unsigned __int8 v132; // [rsp+78h] [rbp-F0h] BYREF
  unsigned __int8 v133; // [rsp+79h] [rbp-EFh]
  unsigned __int16 word; // [rsp+7Ah] [rbp-EEh]
  unsigned __int16 v135; // [rsp+7Ch] [rbp-ECh]
  unsigned __int16 v136; // [rsp+7Eh] [rbp-EAh]
  __int64 v137; // [rsp+80h] [rbp-E8h] BYREF
  __m128i v138; // [rsp+88h] [rbp-E0h]
  __int64 v139; // [rsp+98h] [rbp-D0h]
  __int64 v140; // [rsp+A0h] [rbp-C8h]
  unsigned __int8 v141; // [rsp+B0h] [rbp-B8h] BYREF
  unsigned __int16 v142; // [rsp+B1h] [rbp-B7h]
  unsigned __int8 v143; // [rsp+B3h] [rbp-B5h]
  unsigned __int16 v144; // [rsp+B4h] [rbp-B4h]
  int v145; // [rsp+B8h] [rbp-B0h] BYREF
  __int64 v146; // [rsp+C0h] [rbp-A8h]
  int *v147; // [rsp+C8h] [rbp-A0h]
  int *v148; // [rsp+D0h] [rbp-98h]
  __int64 v149; // [rsp+D8h] [rbp-90h]
  _WORD v150[6]; // [rsp+E0h] [rbp-88h] BYREF
  char v151; // [rsp+EDh] [rbp-7Bh]
  unsigned __int16 v152; // [rsp+EEh] [rbp-7Ah]
  unsigned __int16 v153; // [rsp+F2h] [rbp-76h]
  unsigned __int16 v154; // [rsp+F4h] [rbp-74h]
  unsigned __int16 v155; // [rsp+F6h] [rbp-72h]
  unsigned __int16 v156; // [rsp+F8h] [rbp-70h]
  unsigned __int16 v157; // [rsp+FAh] [rbp-6Eh]
  unsigned __int16 v158; // [rsp+FCh] [rbp-6Ch]
  unsigned __int16 v159; // [rsp+102h] [rbp-66h]
  unsigned __int16 v160; // [rsp+104h] [rbp-64h]
  unsigned __int16 v161; // [rsp+106h] [rbp-62h]
  int v162; // [rsp+10Ch] [rbp-5Ch]
  __int16 v163; // [rsp+112h] [rbp-56h]
  char v164; // [rsp+116h] [rbp-52h]
  unsigned __int64 v165; // [rsp+128h] [rbp-40h]

  v165 = __readfsqword(0x28u);
  setinf_flag(3, 2, 0);
  set_processor_type("metapc", 1);
  word_B290 = a2;
  if ( (a2 & 0x10) != 0 )
    dword_B270 |= 0x10u;
  v127 = 0;
  qlseek(a1, 0, 0);
  lread(a1, &v125, 2);
  if ( v125 != 17742 )
  {
    qlseek(a1, 60, 0);
    qlread(a1, &v127, 4);
  }
  qlseek(a1, v127, 0);
  lread(a1, v150, 64);
  dword_B294 = v164 == 1;
  netnode_check(&qword_B288, "$ NE header", 0, 1);
  netnode_set(qword_B288, v150, 64);
  setinf(12, 0);
  if ( v164 == 2 && (v151 & 8) != 0 )
    sub_32E0((__int64)"The file is self-loading.\n");
  if ( (unsigned int)sub_4360((__int64)v150, a1, v159 + (unsigned __int64)v127, v158, a3, a4, a5, a6, v10, v11, a9, a10) )
  {
    if ( v152 )
    {
      v88 = netnode_altval(qword_B288, v152, 65);
      v89 = getseg(v88);
      if ( v89 )
        v90 = *(_QWORD *)(v89 + 48);
      else
        v90 = -1;
      set_default_dataseg(v90);
    }
    v12 = v161;
    if ( (word_B290 & 2) != 0 && v160 != v161 )
    {
      sub_32E0((__int64)"Loading resources...\n");
      if ( !(unsigned int)sub_5520(a1, v160 + (unsigned __int64)v127) )
        return v165 - __readfsqword(0x28u);
      v12 = v161;
    }
    v13 = sub_2B70(a1, v12 + v127);
    v128 = -1;
    v14 = (const char *)v13;
    netnode_check(&v128, 0, 0, 1);
    v120 = sub_3640(a1, v127, v150, v128);
    if ( !v120 )
      return v165 - __readfsqword(0x28u);
    v16 = 0;
    sub_32E0((__int64)"Renaming entry points...\n");
    qlseek(a1, v150[2] + (unsigned __int64)v127, 0);
    while ( 1 )
    {
      lread(a1, &v132, 1);
      if ( !v132 )
        break;
      lread(a1, &v137, 1);
      if ( (_BYTE)v137 == 0xFF )
      {
        if ( v132 )
        {
          v20 = 0;
          do
          {
            ++v16;
            ++v20;
            lread(a1, &v141, 6);
            v21 = v141;
            v22 = netnode_altval(qword_B288, v143, 65);
            sub_2E40(0, v22 + v144, v21, v14, v16);
          }
          while ( (unsigned __int16)v20 < v132 );
        }
      }
      else if ( (_BYTE)v137 )
      {
        v17 = 0;
        while ( (unsigned __int16)v17 < v132 )
        {
          ++v16;
          ++v17;
          lread(a1, &v141, 3);
          v18 = v141;
          v19 = netnode_altval(qword_B288, (unsigned __int8)v137, 65);
          sub_2E40(1, v19 + v142, v18, v14, v16);
        }
      }
      else
      {
        v16 += v132;
      }
    }
    sub_27D0(a1, v161 + (unsigned __int64)v127);
    sub_27D0(a1, v162);
    qfree(v14);
    sub_32E0((__int64)"Fixing relocations...\n");
    v121 = v128;
    if ( v158 )
    {
      v124 = v159 + (unsigned __int64)v127;
      v123 = 1;
      v122 = 0;
      while ( 1 )
      {
        qlseek(a1, v124, 0);
        lread(a1, &v129, 8);
        if ( (v131 & 1) == 0 )
          goto LABEL_65;
        if ( v123 != 1 && v164 == 2 && (v151 & 8) != 0 )
        {
          if ( byte_B282 )
          {
            if ( byte_B281 )
              goto LABEL_130;
          }
          else
          {
            v91 = sub_3560(
                    0,
                    (__int64)"HIDECANCEL\n"
                             "This file is self-loading and possibly compressed.\n"
                             "Do you want to apply relocations to non-selfload segments?");
            byte_B282 = 1;
            byte_B281 = v91 <= 0;
            if ( v91 <= 0 )
              goto LABEL_130;
          }
        }
        v115 = netnode_altval(qword_B288, v123, 65);
        v23 = v130;
        if ( !v130 )
          v23 = (v129 != 0) << 16;
        qlseek(a1, v23 + ((unsigned __int64)v129 << v163), 0);
        lread(a1, &v126, 2);
        si128 = _mm_load_si128((const __m128i *)&xmmword_8D70);
        v137 = 0;
        v139 = 0;
        v140 = 0;
        v138 = si128;
        if ( !v126 )
          goto LABEL_65;
        v112 = 0;
LABEL_37:
        while ( 2 )
        {
          lread(a1, &v132, 8);
          v25 = v133;
          v26 = v133 & 0xFB;
          v133 = v26;
          if ( v26 == 2 )
          {
            v63 = netnode_altval(v121, v135, 65);
            v64 = netnode_altval(v63, v136 + 0x10000LL, 110);
            v29 = v120;
            entry = node2ea(v64);
            if ( !entry )
            {
              sub_3210(
                (__int64)"Bad target of relocation for segment %d (module %d, function name offset 0x%X)",
                v123,
                v135,
                v136);
              if ( (unsigned __int16)++v112 >= v126 )
                goto LABEL_65;
              continue;
            }
            goto LABEL_41;
          }
          break;
        }
        if ( v26 <= 2u )
          break;
        if ( v26 == 3 )
          goto LABEL_64;
        if ( !v122 )
          sub_3210((__int64)"Unknown relocation type %Xh (segment %d, rel #%d)", v26, v123, v112);
        ++v112;
        v122 = v120;
        if ( (unsigned __int16)v112 < v126 )
          goto LABEL_37;
LABEL_65:
        v124 += 8LL;
        if ( v123 >= v158 )
          goto LABEL_130;
        ++v123;
      }
      if ( v26 )
      {
        v27 = netnode_altval(v121, v135, 65);
        v28 = netnode_altval(v27, v136, 65);
        v29 = v120;
        entry = node2ea(v28);
        if ( !entry )
        {
          sub_3210((__int64)"Bad target of relocation for segment %d (module %d, function %d)", v123, v135, v136);
          if ( (unsigned __int16)++v112 >= v126 )
            goto LABEL_65;
          goto LABEL_37;
        }
      }
      else if ( (_BYTE)v135 == 0xFF )
      {
        v29 = v120;
        entry = get_entry(v136);
        if ( entry == -1 )
        {
          sub_3210((__int64)"Bad target of relocation for segment %d (entry %d)", v123, v136);
          if ( (unsigned __int16)++v112 >= v126 )
            goto LABEL_65;
          goto LABEL_37;
        }
      }
      else
      {
        v29 = 0;
        v62 = netnode_altval(qword_B288, (unsigned __int8)v135, 65);
        entry = v136 + v62;
        if ( entry == -1 )
        {
          sub_3210(
            (__int64)"Bad target of relocation for segment %d (segment %d, offset %d)",
            v123,
            (unsigned __int8)v135,
            v136);
          if ( (unsigned __int16)++v112 >= v126 )
            goto LABEL_65;
          goto LABEL_37;
        }
      }
LABEL_41:
      v30 = 0;
      show_auto(entry, 0);
      v31 = getseg(entry);
      if ( v31 )
      {
        v34 = *(_QWORD *)(v31 + 48);
        v138.m128i_i64[1] = v34;
        if ( v34 != -1 )
          v34 = 16 * ((__int64 (*)(void))sel2para)();
        v35 = entry - v34;
      }
      else
      {
        v30 = v123;
        sub_32E0(
          (__int64)"Target of relocation entry is illegal (segment %d, target %a)\n",
          v123,
          *(double *)si128.m128i_i64);
        v35 = entry;
        v138.m128i_i64[1] = -1;
      }
      v36 = v25 & 4;
      v37 = 0;
      v139 = v35;
      v145 = 0;
      v146 = 0;
      v147 = &v145;
      v148 = &v145;
      v149 = 0;
      while ( 1 )
      {
        if ( word == 0xFFFF )
          goto LABEL_62;
        v38 = v115 + word;
        if ( v37 )
          break;
        i = &v145;
        if ( v147 != &v145 )
          goto LABEL_98;
        v45 = 1;
LABEL_69:
        v46 = operator new(0x28u);
        *(_QWORD *)(v46 + 32) = v38;
        std::_Rb_tree_insert_and_rebalance(v45, v46, i, &v145);
        ++v149;
        switch ( v132 )
        {
          case 0u:
            v60 = v139;
            word = -1;
            if ( v36 )
            {
              byte = get_byte(v38);
              if ( byte < 0 )
                append_cmt(v38, "(negative value added)", 0);
              put_byte(v38, v60 + byte);
              v58 = byte;
            }
            else
            {
              put_byte(v38, (unsigned __int8)v139);
              v58 = 0;
            }
            v59 = 13;
            goto LABEL_88;
          case 2u:
            word = get_word(v38);
            v56 = v138.m128i_i16[4];
            if ( v36 )
            {
              v57 = get_word(v38);
              if ( v57 < 0 )
                append_cmt(v38, "(negative value added)", 0);
              put_word(v38, (unsigned __int16)(v57 + v56));
              v58 = v57;
            }
            else
            {
              put_word(v38, v138.m128i_i64[1]);
              v58 = 0;
            }
            v59 = 2;
LABEL_88:
            v140 = v58;
            LOWORD(v137) = v59;
            HIDWORD(v137) = 0;
            if ( v29 )
              goto LABEL_89;
            goto LABEL_90;
          case 3u:
            if ( v36 )
            {
              v118 = v138.m128i_i16[4];
              v53 = get_word(v38 + 2);
              v54 = v118;
              v55 = v53;
              if ( v53 < 0 )
              {
                append_cmt(v38 + 2, "(negative value added)", 0);
                v54 = v118;
              }
              put_word(v38 + 2, (unsigned __int16)(v55 + v54));
              HIDWORD(v137) = 0;
              LOWORD(v137) = 3;
              word = get_word(v38);
              LOWORD(v50) = v139;
LABEL_75:
              v51 = get_word(v38);
              v52 = v51;
              if ( v51 < 0 )
                append_cmt(v38, "(negative value added)", 0);
              put_word(v38, (unsigned __int16)(v52 + v50));
              v140 = v52;
              if ( v29 )
              {
                HIDWORD(v137) |= 2u;
                set_fixup(v38, &v137);
              }
              else
              {
LABEL_60:
                set_fixup(v38, &v137);
              }
              v37 = v146;
LABEL_62:
              while ( v37 )
              {
                sub_29A0(*(_QWORD **)(v37 + 24));
                v44 = (void *)v37;
                v37 = *(_QWORD *)(v37 + 16);
                operator delete(v44, 0x28u);
              }
LABEL_64:
              if ( (unsigned __int16)++v112 >= v126 )
                goto LABEL_65;
              goto LABEL_37;
            }
            put_word(v38 + 2, v138.m128i_i64[1]);
            HIDWORD(v137) = 0;
            LOWORD(v137) = 3;
            word = get_word(v38);
            v50 = v139;
LABEL_100:
            put_word(v38, v50);
LABEL_101:
            v140 = 0;
            if ( v29 )
            {
LABEL_89:
              HIDWORD(v137) |= 2u;
LABEL_90:
              v30 = (__int64)&v137;
              set_fixup(v38, &v137);
              v37 = v146;
              if ( v36 )
                goto LABEL_62;
            }
            else
            {
              v30 = (__int64)&v137;
              set_fixup(v38, &v137);
              v37 = v146;
            }
            break;
          case 5u:
            HIDWORD(v137) = 0;
            LOWORD(v137) = 1;
            word = get_word(v38);
            v50 = v139;
            if ( v36 )
              goto LABEL_75;
            goto LABEL_100;
          case 0xBu:
            if ( !v36 )
            {
              put_word(v38 + 4, v138.m128i_i64[1]);
              HIDWORD(v137) = 0;
              LOWORD(v137) = 5;
              word = get_dword(v38);
              v41 = v139;
LABEL_104:
              put_dword(v38, v41);
              goto LABEL_101;
            }
            v117 = v138.m128i_i16[4];
            v47 = get_word(v38 + 4);
            v48 = v117;
            v49 = v47;
            if ( v47 < 0 )
            {
              append_cmt(v38 + 4, "(negative value added)", 0);
              v48 = v117;
            }
            put_word(v38 + 4, (unsigned __int16)(v49 + v48));
            HIDWORD(v137) = 0;
            LOWORD(v137) = 5;
            word = get_dword(v38);
            v42 = v139;
LABEL_57:
            dword = get_dword(v38);
            if ( dword < 0 )
              append_cmt(v38, "(negative value added)", 0);
            put_dword(v38, (unsigned int)(dword + v42));
            v140 = dword;
            if ( !v29 )
              goto LABEL_60;
            goto LABEL_89;
          case 0xDu:
            HIDWORD(v137) = 0;
            LOWORD(v137) = 4;
            word = get_dword(v38);
            v41 = v139;
            v42 = v139;
            if ( v36 )
              goto LABEL_57;
            goto LABEL_104;
          default:
            word = -1;
            sub_3210(
              (__int64)"Unknown relocation address type %Xh (segment %d, rel #%d, target: %a)",
              v132,
              v123,
              (unsigned __int16)v112,
              *(double *)si128.m128i_i64);
            v37 = v146;
            goto LABEL_55;
        }
      }
      for ( i = (int *)v37; ; i = v32 )
      {
        v40 = *((_QWORD *)i + 4);
        v33 = *((_QWORD *)i + 2);
        v30 = 0;
        v32 = *((int **)i + 3);
        if ( v38 < v40 )
        {
          v32 = *((int **)i + 2);
          v30 = 1;
        }
        if ( !v32 )
          break;
      }
      if ( (_BYTE)v30 )
      {
        if ( v147 == i )
        {
LABEL_67:
          v45 = 1;
          if ( i != &v145 )
            v45 = v38 < *((_QWORD *)i + 4);
          goto LABEL_69;
        }
LABEL_98:
        v40 = *(_QWORD *)(std::_Rb_tree_decrement(i, v30, v32, v33) + 32);
      }
      if ( v40 >= v38 )
      {
LABEL_55:
        sub_29A0((_QWORD *)v37);
        v147 = &v145;
        v146 = 0;
        v148 = &v145;
        v149 = 0;
        sub_4040((__int64)"Bad relocation chain");
      }
      goto LABEL_67;
    }
LABEL_130:
    netnode_kill(&v128);
    if ( v155 )
    {
      v65 = netnode_altval(qword_B288, v155, 65);
      setinf(14, v65 >> 4);
      v66 = v154;
      setinf(15, v154);
      v71 = getinf(15, v66, v67, v68, v69, v70);
      v76 = getinf(14, v66, v72, v73, v74, v75);
      v77 = 16 * sel2para(v76);
      v78 = v71 + v77;
      if ( v164 == 2 && (v151 & 8) != 0 )
      {
        add_entry(v71 + v77, v78, "start", 0, 0);
        first_seg = (_QWORD *)get_first_seg();
        v98 = first_seg;
        if ( first_seg )
        {
          v99 = *first_seg;
          v100 = *first_seg + 2LL;
          v101 = *first_seg + 4LL;
          create_data(*first_seg, 0x10000000, 2, -1);
          set_op_type(v99, 0x33333303300000LL, 0);
          set_cmt(v99, "version (must be \"A0\")", 0);
          create_data(v100, 0x10000000, 2, -1);
          set_cmt(v100, "reserved", 0);
          create_data(v101, 0x20000000, 4, -1);
          set_cmt(v101, "startup procedure", 0);
          _32bit = get_32bit(v101);
          if ( (unsigned __int8)get_refinfo(&v141, v101, 0)
            && (unsigned __int8)calc_reference_data(&v137, 0, -1, &v141, _32bit) )
          {
            v103 = v137;
            if ( v137 != -1 )
              add_entry(v137, v137, "BootApp", 1, 0);
          }
          else
          {
            v103 = -1;
          }
          create_data(v99 + 8, 0x20000000, 4, -1);
          set_cmt(v99 + 8, "procedure to load a segment", 0);
          v113 = get_32bit(v99 + 8);
          if ( (unsigned __int8)get_refinfo(&v141, v99 + 8, 0)
            && (unsigned __int8)calc_reference_data(&v137, 0, -1, &v141, v113)
            && v137 != -1 )
          {
            add_entry(v137, v137, "LoadAppSeg", 1, 0);
          }
          create_data(v99 + 12, 0x20000000, 4, -1);
          set_cmt(v99 + 12, "reserved", 0);
          create_data(v99 + 16, 0x20000000, 4, -1);
          set_cmt(v99 + 16, "memory allocation procedure (kernel-provided)", 0);
          set_name(v99 + 16, "MyAlloc", 257);
          create_data(v99 + 20, 0x20000000, 4, -1);
          set_cmt(v99 + 20, "ordinal resolve procedure (kernel-provided)", 0);
          set_name(v99 + 20, "EntryAddrProc", 257);
          create_data(v99 + 24, 0x20000000, 4, -1);
          set_cmt(v99 + 24, "exit procedure", 0);
          v114 = get_32bit(v99 + 24);
          if ( (unsigned __int8)get_refinfo(&v141, v99 + 24, 0)
            && (unsigned __int8)calc_reference_data(&v137, 0, -1, &v141, v114)
            && v137 != -1 )
          {
            add_entry(v137, v137, "ExitProc", 1, 0);
          }
          v104 = v99 + 28;
          v105 = v99 + 28;
          v106 = v99 + 36;
          create_data(v105, 0x10000000, 8, -1);
          set_cmt(v104, "reserved", 0);
          create_data(v106, 0x20000000, 4, -1);
          set_cmt(v106, "set-owner procedure (kernel-provided)", 0);
          set_name(v106, "SetOwner", 257);
          setinf(16, v103);
          v107 = v98[6];
          setinf(14, v107);
          v78 = getinf(16, v107, v108, v109, v110, v111) - *v98;
          setinf(15, v78);
        }
      }
      else
      {
        setinf(16, v78);
      }
      if ( v152 && (v78 = v152, v79 = netnode_altval(qword_B288, v152, 65), (v80 = getseg(v79)) != 0) )
        v81 = *(_QWORD *)(v80 + 48);
      else
        v81 = -1;
      v82 = *(_DWORD *)(get_ph() + 84);
      v87 = getinf(16, v78, v83, v84, v85, v86);
      split_sreg_range(v87, v82, v81, 4, 1);
    }
    else
    {
      setinf(14, -1);
      setinf(15, -1);
    }
    v92 = netnode_altval(qword_B288, v157, 65);
    setinf(13, v92 >> 4);
    v93 = v156;
    if ( !v156 )
    {
      v93 = v153;
      if ( v152 )
      {
        v94 = netnode_altval(qword_B288, v152, 65);
        v95 = getseg(v94);
        if ( v95 )
        {
          if ( *(_QWORD *)(v95 + 48) != -1 )
          {
            segm_by_sel = (_QWORD *)get_segm_by_sel();
            if ( segm_by_sel )
              v93 = segm_by_sel[1] + v93 - *segm_by_sel;
          }
        }
      }
    }
    setinf(17, v93);
  }
  return v165 - __readfsqword(0x28u);
}
