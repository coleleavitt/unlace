__int64 __fastcall sub_545A0(__int64 a1, __int64 a2, int a3, char a4, double a5)
{
  _DWORD *exception; // rax
  unsigned __int64 v6; // rbx
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned __int64 v11; // rbp
  char v12; // al
  unsigned __int64 v13; // r15
  __int64 v15; // r9
  __int64 v16; // r10
  __int64 v17; // rbx
  __int64 v18; // r8
  char fixups; // al
  unsigned __int8 v20; // al
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int8 v23; // cl
  __int64 v24; // r12
  __int64 v25; // r11
  __int64 v26; // rax
  unsigned __int64 v27; // r12
  unsigned int v28; // eax
  __int64 v29; // rbp
  __int64 v30; // rax
  unsigned __int8 v31; // r12
  __int64 v32; // rbx
  char v33; // al
  __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // r12
  char v38; // al
  __int64 v39; // rax
  __int64 v40; // r9
  bool v41; // zf
  unsigned int v42; // eax
  __int64 v43; // r12
  unsigned __int64 v44; // rax
  __int64 v45; // rdx
  unsigned __int8 v46; // al
  unsigned __int64 v47; // rbp
  __int64 v48; // r13
  unsigned __int64 v49; // rbp
  unsigned __int64 v50; // rbp
  __int64 v51; // rax
  __int64 v52; // rsi
  char v53; // al
  unsigned __int8 v54; // al
  char v55; // al
  __int64 v56; // r12
  __int64 v57; // rax
  __int64 v58; // r9
  __int64 v59; // r10
  __int64 v60; // r12
  char v61; // al
  unsigned __int16 v62; // ax
  __int64 v63; // r12
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rbx
  char v67; // al
  __int64 v68; // r11
  __int64 v69; // rax
  __int64 v70; // rbx
  unsigned __int64 v71; // r12
  __int64 v72; // r12
  __int64 i; // rbx
  __int64 v74; // rbx
  __int64 v75; // rbx
  __int64 v76; // rbx
  __int64 j; // r12
  __int64 v78; // rbx
  __int64 v79; // rbx
  __int64 v80; // r12
  __int64 v81; // rbx
  __int64 v82; // rbp
  __int64 v83; // rbx
  __int64 v84; // rbx
  char v85; // al
  __int64 word; // rax
  __int64 v87; // rbx
  __int64 v88; // rbx
  char v89; // al
  char v90; // al
  __int64 v91; // rax
  __int64 v92; // r9
  __int64 v93; // r9
  int v94; // eax
  __int64 v95; // rbx
  __int64 v96; // r13
  __int64 v97; // rax
  __int64 v98; // r15
  char v99; // dl
  __int64 v100; // rax
  char v101; // al
  char v102; // al
  __int64 v103; // r15
  __int64 v104; // rax
  __int64 v105; // r12
  __int64 v106; // rax
  __int64 v107; // r12
  __int64 v108; // rbx
  __int64 v109; // rdi
  __int64 v110; // rbx
  unsigned __int64 v111; // r13
  unsigned int v112; // r12d
  __int64 v113; // rbx
  __int64 v114; // rbx
  __int64 v115; // r13
  __int64 v116; // rdi
  char v117; // al
  __int64 v118; // r9
  __int64 v119; // rax
  __int64 v120; // r9
  __int64 *v121; // r10
  char v122; // al
  __int64 v123; // r10
  char v124; // al
  unsigned __int16 v125; // ax
  char v126; // al
  char v127; // al
  __int64 v128; // rax
  char v129; // al
  __int64 v131; // [rsp+8h] [rbp-120h]
  char v132; // [rsp+8h] [rbp-120h]
  __int64 v133; // [rsp+8h] [rbp-120h]
  unsigned int v134; // [rsp+8h] [rbp-120h]
  unsigned __int8 v135; // [rsp+8h] [rbp-120h]
  bool v136; // [rsp+8h] [rbp-120h]
  __int64 v137; // [rsp+8h] [rbp-120h]
  __int64 v138; // [rsp+8h] [rbp-120h]
  unsigned int v139; // [rsp+8h] [rbp-120h]
  __int64 v140; // [rsp+8h] [rbp-120h]
  __int64 v141; // [rsp+8h] [rbp-120h]
  __int64 v142; // [rsp+8h] [rbp-120h]
  char v143; // [rsp+15h] [rbp-113h]
  char v144; // [rsp+16h] [rbp-112h]
  unsigned __int8 byte; // [rsp+17h] [rbp-111h]
  __int64 *v146; // [rsp+20h] [rbp-108h]
  __int64 v147; // [rsp+20h] [rbp-108h]
  __int64 v148; // [rsp+30h] [rbp-F8h]
  __int64 v149; // [rsp+30h] [rbp-F8h]
  unsigned __int8 v150; // [rsp+30h] [rbp-F8h]
  __int64 v151; // [rsp+30h] [rbp-F8h]
  __int64 v152; // [rsp+30h] [rbp-F8h]
  __int64 v153; // [rsp+30h] [rbp-F8h]
  bool v154; // [rsp+30h] [rbp-F8h]
  __int64 v155; // [rsp+30h] [rbp-F8h]
  __int64 v156; // [rsp+30h] [rbp-F8h]
  bool v157; // [rsp+30h] [rbp-F8h]
  __int64 v158; // [rsp+30h] [rbp-F8h]
  __int64 v159; // [rsp+30h] [rbp-F8h]
  __int64 v160; // [rsp+30h] [rbp-F8h]
  __int64 v161; // [rsp+30h] [rbp-F8h]
  unsigned int v162; // [rsp+30h] [rbp-F8h]
  __int64 v163; // [rsp+30h] [rbp-F8h]
  __int64 v164; // [rsp+30h] [rbp-F8h]
  __int64 v165; // [rsp+30h] [rbp-F8h]
  __int64 v166; // [rsp+30h] [rbp-F8h]
  __int64 v167; // [rsp+30h] [rbp-F8h]
  __int64 v168; // [rsp+30h] [rbp-F8h]
  char *v169; // [rsp+38h] [rbp-F0h]
  __int64 v170; // [rsp+38h] [rbp-F0h]
  char v171; // [rsp+38h] [rbp-F0h]
  __int64 v172; // [rsp+38h] [rbp-F0h]
  __int64 v173; // [rsp+38h] [rbp-F0h]
  __int64 v174; // [rsp+38h] [rbp-F0h]
  _QWORD *v175; // [rsp+38h] [rbp-F0h]
  unsigned __int8 v176; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v177; // [rsp+38h] [rbp-F0h]
  unsigned __int8 v178; // [rsp+38h] [rbp-F0h]
  __int64 v179; // [rsp+38h] [rbp-F0h]
  unsigned int dword; // [rsp+40h] [rbp-E8h]
  __int64 v181; // [rsp+40h] [rbp-E8h]
  __int64 v182; // [rsp+40h] [rbp-E8h]
  __int64 v183; // [rsp+40h] [rbp-E8h]
  __int64 v184; // [rsp+40h] [rbp-E8h]
  __int64 v185; // [rsp+40h] [rbp-E8h]
  __int64 v186; // [rsp+40h] [rbp-E8h]
  __int64 v187; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v188; // [rsp+48h] [rbp-E0h]
  __int64 v189; // [rsp+48h] [rbp-E0h]
  __int64 v190; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v191; // [rsp+50h] [rbp-D8h]
  _QWORD *v192; // [rsp+58h] [rbp-D0h]
  __int64 v193; // [rsp+60h] [rbp-C8h]
  __int64 v194[2]; // [rsp+68h] [rbp-C0h] BYREF
  __int64 *v195; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v196; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v197; // [rsp+88h] [rbp-A0h] BYREF
  char v198[88]; // [rsp+90h] [rbp-98h] BYREF
  unsigned __int64 v199; // [rsp+E8h] [rbp-40h]

  v194[0] = a2;
  v199 = __readfsqword(0x28u);
  if ( a3 > 1023 )
  {
    exception = __cxa_allocate_exception(4u);
    *exception = 777;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, nullptr);
  }
  v6 = v194[0];
  v9 = getseg();
  v10 = v9;
  if ( !v9 )
    return 0;
  v11 = *(_QWORD *)(v9 + 8);
  if ( v194[0] + 4 < v11 && v194[0] + 4 == sub_52C60(a1, v194[0], 0, 0, 0) )
  {
    v194[0] += 4;
    v6 += 4LL;
    v143 = 1;
  }
  else
  {
    v143 = 0;
  }
  v12 = netnode_charval();
  if ( (v12 & 2) != 0 )
  {
    if ( !a4 )
      return 1;
  }
  else
  {
    if ( (v12 & 1) != 0 )
      return 0;
    if ( !a4 && (v12 & 8) != 0 )
      return 0;
  }
  v13 = v6 + 1;
  v144 = v12 | (16 * v143);
  LOBYTE(v197) = v144 | 1;
  netnode_supset();
  show_auto();
  v195 = (__int64 *)(v6 + 1);
  if ( v6 + 1 >= v11 || *(_BYTE *)(a1 + 5504) && (unsigned __int8)get_fixups() )
    return 0;
  byte = get_byte();
  if ( byte > 0x15u )
    return 0;
  v146 = (__int64 *)&v195;
  if ( !(unsigned __int8)sub_520F0(&v195, byte) )
    return 0;
  v15 = (__int64)v195;
  v196 = 1;
  v16 = (__int64)v195;
  switch ( byte )
  {
    case 0u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0x12u:
      v171 = 0;
      v11 = 0;
      v25 = 0;
      v150 = 0;
      dword = 0;
      goto LABEL_36;
    case 1u:
    case 2u:
    case 3u:
    case 6u:
    case 9u:
      v18 = (__int64)v195 + 1;
      if ( v11 < (unsigned __int64)v195 + 1 )
        return 0;
      if ( *(_BYTE *)(a1 + 5504) )
      {
        v169 = (char *)v195 + 1;
        v148 = (__int64)v195;
        fixups = get_fixups();
        v15 = v148;
        v18 = (__int64)v169;
        if ( fixups )
          return 0;
      }
      v170 = v18;
      v149 = v15;
      v20 = get_byte();
      v21 = v170;
      v22 = v149;
      v23 = v20;
      v195 = (__int64 *)v170;
      if ( byte == 6 )
      {
        if ( v11 >= v149 + 5 )
        {
          v68 = 4;
          v15 = v170;
LABEL_146:
          v146 = (__int64 *)v68;
          v69 = sub_52C60(a1, v15, 0, 0, 1);
          v25 = (__int64)v146;
          v52 = v69;
LABEL_101:
          if ( v52 != -1 )
          {
            v16 = (__int64)v195;
            v171 = 0;
            dword = 0;
            LOBYTE(v11) = byte == 14;
            v150 = v52 != 0 && a3 != 0;
            if ( v150 )
            {
              v187 = v25;
              v146 = v195;
              sub_545A0(a1, v52, (unsigned int)(a3 + 1), 0);
              v150 = 0;
              v16 = (__int64)v146;
              v25 = v187;
            }
            goto LABEL_36;
          }
        }
      }
      else
      {
        if ( v20 > 5u )
          return 0;
        v24 = v149 + 9;
        if ( v11 < v149 + 9 )
          return 0;
        if ( *(_BYTE *)(a1 + 5504) )
        {
          v184 = v149;
          v166 = v170;
          v178 = v20;
          v122 = get_fixups();
          v21 = v166;
          v23 = v178;
          v22 = v184;
          if ( v122 )
            return 0;
        }
        if ( byte != 3 )
        {
          v131 = v21;
          if ( (unsigned __int8)sub_51E80(v23, v21, nullptr) )
          {
            v171 = 0;
            v16 = v131;
            v11 = 0;
            v150 = 0;
            v25 = 8;
            dword = 0;
            goto LABEL_36;
          }
          return 0;
        }
        v164 = v22;
        v117 = sub_51E80(v23, v21, &v196);
        v118 = v164;
        if ( !v117 )
          return 0;
        v195 = (__int64 *)v24;
        v165 = v164 + 13;
        if ( v11 < v118 + 13 )
          return 0;
        v119 = sub_52C60(a1, v24, 0, 0, 1);
        v120 = v119;
        if ( v119 == -1 )
          return 0;
        v121 = (__int64 *)v165;
        v195 = (__int64 *)v165;
        if ( !v119
          || v119 == v6
          || v119 + 4 == v6
          && (v143
           || v6 >= *(_QWORD *)v10 + 4LL
           && (v179 = v165,
               v168 = v119,
               v128 = sub_52C60(a1, v119, 0, 0, 0),
               v120 = v168,
               v121 = (__int64 *)v179,
               v128 == v6)) )
        {
          v43 = (__int64)v121;
          while ( v11 >= v43 + 1 )
          {
            v150 = sub_520F0(&v195, 0);
            if ( !v150 )
              return 0;
            v43 = (__int64)v195;
            show_auto();
            v25 = v196 - 1;
            v196 = v25;
            if ( !v25 )
            {
LABEL_258:
              v171 = 0;
              v16 = v43;
              v11 = 0;
              dword = 0;
              goto LABEL_36;
            }
          }
          return 0;
        }
        v146 = v121;
        if ( (unsigned __int8)sub_545A0(a1, v120, a3 - ((unsigned int)(a3 == 0) - 1), 0) )
        {
          get_flags_ex();
          if ( (netnode_charval() & 2) != 0 && (unsigned __int8)get_byte() == 3 )
          {
            v171 = 0;
            v16 = (__int64)v146;
            v11 = 0;
            v150 = 0;
            v25 = 0;
            dword = 0;
            goto LABEL_36;
          }
        }
      }
      return 0;
    case 4u:
      if ( v11 >= (unsigned __int64)v195 + 1 )
      {
        if ( !*(_BYTE *)(a1 + 5504) || (v146 = v195, v53 = get_fixups(), v16 = (__int64)v146, !v53) )
        {
          v133 = v16;
          v54 = get_byte();
          v16 = v133;
          if ( v54 <= 4u )
            goto LABEL_108;
        }
      }
      return 0;
    case 5u:
      if ( v11 < (unsigned __int64)v195 + 1 )
        return 0;
      v150 = *(_BYTE *)(a1 + 5504);
      if ( !v150 )
      {
        v171 = 0;
        v11 = 0;
        v25 = 1;
        dword = 0;
        goto LABEL_36;
      }
      v138 = (__int64)v195;
      v102 = get_fixups();
      v16 = v138;
      if ( !v102 )
      {
LABEL_108:
        v171 = 0;
        v11 = 0;
        v25 = 1;
        v150 = 0;
        dword = 0;
        goto LABEL_36;
      }
      return 0;
    case 7u:
      if ( v11 < (unsigned __int64)v195 + 11 )
        return 0;
      if ( *(_BYTE *)(a1 + 5504) )
      {
        v155 = (__int64)v195;
        v55 = get_fixups();
        v15 = v155;
        if ( v55 )
          return 0;
      }
      v156 = v15;
      if ( sub_52C60(a1, v15, 0, 0, 0) == -1 )
        return 0;
      v56 = 11;
      v57 = sub_52C60(a1, v156 + 4, 0, 1u, 1);
      v176 = 0;
      v58 = v156;
      goto LABEL_114;
    case 8u:
      v43 = (__int64)v195 + 2;
      if ( v11 < (unsigned __int64)v195 + 2 || *(_BYTE *)(a1 + 5504) && (unsigned __int8)get_fixups() )
        return 0;
      v44 = get_byte();
      if ( (unsigned __int8)v44 > 0xAu )
        return 0;
      v45 = 1194;
      v150 = _bittest64(&v45, v44);
      v46 = get_byte();
      v195 = (__int64 *)v43;
      v25 = v46;
      v196 = v46;
      if ( !v46 )
        goto LABEL_258;
      v47 = 3;
      v175 = (_QWORD *)v10;
      while ( 2 )
      {
        v48 = (__int64)v195;
        if ( (unsigned __int8)get_byte() > 0x3Fu )
          return 0;
        v195 = (__int64 *)(v48 + 1);
        v49 = (unsigned __int8)get_byte() + v47;
        if ( v49 > 0x3FF )
          return 0;
        if ( !(unsigned __int8)sub_520F0(&v195, 0) )
          return 0;
        v50 = (unsigned __int8)get_byte() + v49;
        if ( v50 > 0x3FF || !(unsigned __int8)sub_520F0(&v195, 8u) )
          return 0;
        if ( __ROR8__(0xCCCCCCCCCCCCCCCDLL * v50, 1) <= 0x1999999999999999uLL )
          show_auto();
        if ( --v196 )
        {
          v47 = v50 + 3;
          if ( v47 > 0x3FF )
            return 0;
          continue;
        }
        break;
      }
      v10 = (__int64)v175;
      v140 = (__int64)v195;
      if ( v50 + (unsigned __int8)get_byte() > 0x3FF )
        return 0;
      v16 = v140;
      v25 = 0;
      if ( v150 )
        goto LABEL_325;
      v171 = 0;
      v11 = 0;
      dword = 0;
LABEL_36:
      while ( 2 )
      {
        while ( 2 )
        {
          v195 = (__int64 *)v6;
          v26 = v16 + v25 - v6;
          *(_QWORD *)(a1 + 5480) = v26;
          v27 = v26;
          if ( v143 )
          {
            v132 = 1;
            *(_QWORD *)(a1 + 5480) = v26 + 4;
            sub_539D0(a1, v6, v26, v144 | 2, 1);
          }
          else
          {
            if ( v6 >= *(_QWORD *)v10 + 4LL && sub_52C60(a1, v6 - 4, 0, 0, 0) == v6 )
            {
              v144 |= 0x10u;
              v132 = 1;
            }
            else
            {
              v132 = 0;
            }
            sub_539D0(a1, v6, v27, v144 | 2, v132);
          }
          if ( (_BYTE)v11 && (get_flags_ex() & 0x800) == 0 )
            set_cmt();
          v28 = get_byte();
          v10 = v28;
          if ( (unsigned __int8)v28 > 0x15u )
          {
            if ( under_debugger )
LABEL_331:
              BUG();
            interr();
LABEL_329:
            set_cmt();
LABEL_185:
            v41 = *(_BYTE *)(a1 + 5504) == 0;
            v194[0] = v27 + 2;
            if ( !v41 && (unsigned __int8)get_fixups() )
              goto LABEL_174;
            word = (unsigned __int16)get_word();
            v196 = word;
            if ( (unsigned __int16)word == 0xFFFF )
            {
              create_data();
              toggle_sign();
              return 1;
            }
            if ( (unsigned __int16)word != v6 || (v10 & 8) == 0 )
            {
LABEL_174:
              while ( v6 )
              {
                sub_53C30(a1, (__int64 *)v11);
                if ( __ROR8__(0xCCCCCCCCCCCCCCCDLL * v6, 1) <= 0x1999999999999999uLL )
                  show_auto();
                --v6;
              }
              return 1;
            }
LABEL_190:
            create_data();
            return 1;
          }
          create_data();
          set_op_type();
          v194[0] = v13;
          if ( (get_flags_ex() & 0x800) == 0 )
            set_cmt();
          v11 = (unsigned __int64)v194;
          sub_52800(v194, a5);
          if ( byte != (_BYTE)v10 )
          {
            if ( under_debugger )
              goto LABEL_331;
            interr();
LABEL_325:
            v142 = v25;
            v150 = sub_520F0(v146, 0);
            if ( !v150 )
              return 0;
            v171 = 0;
            v16 = (__int64)v195;
            v11 = 0;
            dword = 0;
            v25 = v142;
            continue;
          }
          break;
        }
        switch ( byte )
        {
          case 1u:
          case 2u:
          case 3u:
          case 9u:
            v6 = v194[0];
            v31 = get_byte();
            create_data();
            set_op_type();
            if ( v31 <= 5u )
            {
              qstrncpy();
              qstrncat();
              sub_51F80(v6, v198);
            }
            v10 = v6 + 1;
            v194[0] = v6 + 1;
            create_data();
            num_flag();
            set_op_type();
            if ( byte != 3 )
              return 1;
            if ( (unsigned __int8)sub_51E80(v31, v6 + 1, &v196) )
            {
              v194[0] = v6 + 9;
              sub_52CE0(a1, v194, v132);
              if ( v150 )
              {
                v32 = v196;
                do
                {
                  sub_52800(v194, a5);
                  v196 = --v32;
                }
                while ( v32 );
              }
              return 1;
            }
            if ( under_debugger )
              goto LABEL_331;
            interr();
LABEL_321:
            v141 = v25;
            v129 = get_fixups();
            v25 = v141;
            if ( !v129 )
            {
LABEL_318:
              v150 = 0;
              v16 = v11 + 4;
              v11 = ((unsigned __int8)v171 ^ 1) & 1;
              continue;
            }
            return 0;
          case 4u:
            v82 = v194[0];
            v83 = (unsigned __int8)get_byte();
            create_data();
            set_op_type();
            if ( (unsigned __int8)v83 <= 4u )
              sub_51F80(v82, off_1817A0[v83]);
            return 1;
          case 5u:
            create_data();
            set_op_type();
            if ( (get_flags_ex() & 0x800) == 0 )
              set_cmt();
            return 1;
          case 6u:
            v81 = v194[0];
            create_data();
            set_op_type();
            v194[0] = v81 + 1;
            sub_52CE0(a1, v194, v132);
            return 1;
          case 7u:
            if ( !v6 || (v107 = sub_52250(v194[0], 0, 0), v107 == -1) )
            {
              sub_52CE0(a1, v194, 0);
              sub_52CE0(a1, v194, v132);
              v79 = v194[0];
              create_data();
              set_op_type();
              v194[0] = v79 + 2;
            }
            else
            {
              sub_52CE0(a1, v194, 0);
              sub_52CE0(a1, v194, v132);
              v108 = v194[0];
              create_data();
              set_op_type();
              v194[0] = v108 + 2;
              if ( v107 )
                sub_52E00(a1, v107, v13, a5);
            }
            sub_52800(v194, a5);
            v80 = v194[0];
            v6 = (unsigned __int16)get_word();
            create_data();
            set_op_type();
            if ( (get_flags_ex() & 0x800) == 0 )
              set_cmt();
            v194[0] = v80 + 2;
            goto LABEL_174;
          case 8u:
            v70 = v194[0];
            v71 = (unsigned int)get_byte();
            create_data();
            set_op_type();
            if ( (unsigned __int8)v71 > 0xAu
              || (sub_51F80(v70, *(&off_1816A0 + (unsigned __int8)v71)),
                  v106 = 1194,
                  (v135 = _bittest64(&v106, v71)) == 0) )
            {
              v135 = 0;
            }
            v72 = (unsigned __int8)get_byte();
            create_data();
            set_op_type();
            if ( v72 )
            {
              for ( i = v70 + 2; ; i = v194[0] )
              {
                sub_52380(i, off_181700, 6);
                create_data();
                set_op_type();
                v194[0] = i + 1;
                if ( (get_flags_ex() & 0x800) == 0 )
                  set_cmt();
                sub_52800(v194, a5);
                if ( (get_flags_ex() & 0x800) == 0 )
                  set_cmt();
                sub_52800(v194, a5);
                if ( __ROR8__(0xCCCCCCCCCCCCCCCDLL * v72, 1) <= 0x1999999999999999uLL )
                  show_auto();
                if ( !--v72 )
                  break;
              }
              if ( v135 )
              {
                v197 = v194[0];
                if ( (get_flags_ex() & 0x800) == 0 )
                  set_cmt();
                sub_52800(&v197, a5);
              }
            }
            return 1;
          case 0xDu:
          case 0x11u:
            v17 = v194[0];
            create_data();
            num_flag();
            set_op_type();
            if ( (get_flags_ex() & 0x800) == 0 )
              set_cmt();
            v194[0] = v17 + 4;
            if ( byte != 13 )
            {
              sub_52CE0(a1, v194, v132);
              goto LABEL_24;
            }
            create_data();
            sub_51FC0(v17 + 4, 0);
            v194[0] = v17 + 8;
            sub_52CE0(a1, v194, v132);
            return 1;
          case 0xEu:
            v87 = v194[0];
            if ( v171 == 1 )
            {
              create_data();
              v109 = v87;
              v110 = v87 + 9;
              sub_51FC0(v109, 0);
              create_data();
              num_flag();
              set_op_type();
            }
            else
            {
              create_data();
              num_flag();
              set_op_type();
              v194[0] = v87 + 8;
              sub_52CE0(a1, v194, 0);
              v88 = v194[0];
              if ( v171 )
              {
                create_data();
                set_op_type();
                return 1;
              }
              v115 = v194[0] + 4;
              create_data();
              v116 = v88;
              v110 = v88 + 5;
              sub_51FC0(v116, 0);
              create_data();
              sub_51FC0(v115, 0);
            }
            create_data();
            set_op_type();
            if ( (get_flags_ex() & 0x800) == 0 )
              set_cmt();
            v194[0] = v110 + 4;
            v111 = v27 % 0xA;
            v112 = dword;
            do
            {
              sub_52CE0(a1, v194, 0);
              v113 = v194[0];
              create_data();
              num_flag();
              set_op_type();
              create_data();
              v194[0] = v113 + 5;
              sub_52800(v194, a5);
              v114 = v194[0];
              create_data();
              num_flag();
              set_op_type();
              v194[0] = v114 + 2;
              if ( !v111 )
                show_auto();
              --v112;
            }
            while ( v112 );
LABEL_24:
            create_data();
            num_flag();
            set_op_type();
            return 1;
          case 0xFu:
            sub_52CE0(a1, v194, 0);
            v84 = v194[0];
            sub_52380(v194[0], off_181740, 4);
            v85 = get_byte();
            v194[0] = v84 + 1;
            LOBYTE(v10) = v85;
            sub_54510(a1, v194);
            sub_52800(v194, a5);
            v27 = v194[0];
            v6 = (unsigned __int16)get_word();
            create_data();
            set_op_type();
            if ( (get_flags_ex() & 0x800) != 0 )
              goto LABEL_185;
            goto LABEL_329;
          case 0x10u:
            goto LABEL_190;
          case 0x13u:
          case 0x14u:
            sub_52CE0(a1, v194, 1);
            return 1;
          case 0x15u:
            v74 = v194[0];
            create_data();
            num_flag();
            set_op_type();
            v194[0] = v74 + 8;
            sub_52CE0(a1, v194, 0);
            v75 = v194[0];
            create_data();
            set_op_type();
            if ( (get_flags_ex() & 0x800) == 0 )
              set_cmt();
            v76 = v75 + 1;
            v194[0] = v76;
            if ( dword )
            {
              for ( j = 0; j != dword; ++j )
              {
                create_data();
                num_flag();
                set_op_type();
                if ( (get_flags_ex() & 0x800) == 0 )
                  set_cmt();
                v194[0] = v76 + 1;
                sub_52CE0(a1, v194, 0);
                sub_52800(v194, a5);
                v78 = v194[0];
                create_data();
                num_flag();
                v76 = v78 + 2;
                set_op_type();
                v194[0] = v76;
                if ( __ROR8__(0xCCCCCCCCCCCCCCCDLL * j, 1) <= 0x1999999999999999uLL )
                  show_auto();
              }
            }
            return 1;
          default:
            return 1;
        }
      }
    case 0xDu:
    case 0x11u:
      if ( v11 < (unsigned __int64)v195 + 12 )
        return 0;
      if ( *(_BYTE *)(a1 + 5504) )
      {
        v163 = (__int64)v195;
        v147 = (__int64)v195;
        if ( (unsigned __int8)get_fixups() )
          return 0;
        v99 = *(_BYTE *)(a1 + 5504);
        v16 = v163;
        if ( byte == 13 )
        {
          v29 = v147 + 8;
          v100 = 4;
        }
        else
        {
          v29 = v147 + 4;
          v100 = 8;
        }
        v196 = v100;
        if ( v99 )
        {
          v101 = get_fixups();
          v16 = v163;
          if ( v101 )
            return 0;
        }
      }
      else if ( byte == 13 )
      {
        v196 = 4;
        v29 = (__int64)(v195 + 1);
      }
      else
      {
        v196 = 8;
        v29 = (__int64)v195 + 4;
      }
      v146 = (__int64 *)v16;
      v30 = sub_52C60(a1, v29, 0, 1u, 1);
      v16 = (__int64)v146;
      if ( v30 != -1 )
      {
        v150 = v30 != 0 && a3 != 0;
        if ( v150 )
        {
          v11 = 0;
          sub_545A0(a1, v30, (unsigned int)(a3 + 1), 0);
          v171 = 0;
          v16 = (__int64)v146;
          v150 = 0;
        }
        else
        {
          v171 = 0;
          v11 = 0;
        }
        v25 = 12;
        dword = 0;
        goto LABEL_36;
      }
      return 0;
    case 0xEu:
      v151 = (__int64)(v195 + 2);
      if ( v11 < (unsigned __int64)(v195 + 2) )
        return 0;
      if ( *(_BYTE *)(a1 + 5504) )
      {
        v172 = (__int64)v195;
        v33 = get_fixups();
        v15 = v172;
        if ( v33 )
          return 0;
      }
      v34 = v15 + 8;
      v173 = v15;
      v35 = sub_52C60(a1, v15 + 8, 0, 0, 0);
      v36 = v173;
      if ( v35 == -1 )
        goto LABEL_200;
      if ( v35 )
      {
        if ( a3 )
          sub_545A0(a1, v35, (unsigned int)(a3 + 1), 0);
        goto LABEL_70;
      }
      can_be_off32();
      v89 = segtype();
      v36 = v173;
      if ( v89 == 1 )
      {
LABEL_70:
        v16 = v151;
        v171 = -1;
        v11 = 0;
        v25 = 0;
        v150 = 0;
        dword = 0;
        goto LABEL_36;
      }
LABEL_200:
      if ( v11 < v36 + 31 )
        return 0;
      if ( *(_BYTE *)(a1 + 5504) )
      {
        v160 = v36;
        v90 = get_fixups();
        v36 = v160;
        if ( v90 )
          return 0;
      }
      v161 = v36;
      v91 = sub_52C60(a1, v34, 0, 0, 1);
      v92 = v161;
      if ( v91 == -1 )
      {
        if ( v11 < v161 + 23 )
          return 0;
        if ( *(_BYTE *)(a1 + 5504) )
        {
          v127 = get_fixups();
          v92 = v161;
          if ( v127 )
            return 0;
        }
        v171 = 1;
        v93 = v92 + 13;
      }
      else
      {
        if ( a3 && v91 )
        {
          sub_545A0(a1, v91, (unsigned int)(a3 + 1), 0);
          v92 = v161;
        }
        v41 = *(_BYTE *)(a1 + 5504) == 0;
        v195 = (__int64 *)(v92 + 12);
        if ( !v41 )
        {
          v167 = v92;
          v126 = get_fixups();
          v92 = v167;
          if ( v126 )
            return 0;
        }
        v171 = 0;
        v93 = v92 + 21;
      }
      v195 = (__int64 *)v93;
      v193 = v93;
      dword = get_dword();
      if ( dword - 1 <= 0xFE )
      {
        v94 = a3;
        v188 = v6;
        v192 = (_QWORD *)v10;
        v95 = dword;
        v96 = v193;
        v191 = v13;
        v136 = a3 != 0;
        v162 = v94 + 1;
        while ( v11 >= v96 + 10 )
        {
          v97 = sub_52C60(a1, v96, 0, 1u, 1);
          if ( v97 == -1 )
            break;
          if ( v97 && v136 )
            sub_545A0(a1, v97, v162, 0);
          if ( *(_BYTE *)(a1 + 5504) && (unsigned __int8)get_fixups() )
            break;
          v195 = (__int64 *)(v96 + 9);
          if ( !(unsigned __int8)sub_520F0(&v195, 0) )
            break;
          v98 = (__int64)v195;
          if ( *(_BYTE *)(a1 + 5504) && (unsigned __int8)get_fixups() )
            return 0;
          v96 = v98 + 2;
          v195 = (__int64 *)(v98 + 2);
          if ( __ROR8__(0xCCCCCCCCCCCCCCCDLL * v95, 1) <= 0x1999999999999999uLL )
            show_auto();
          if ( !--v95 )
          {
            v25 = 0;
            v11 = v98;
            v6 = v188;
            v10 = (__int64)v192;
            v13 = v191;
            if ( *(_BYTE *)(a1 + 5504) )
              goto LABEL_321;
            goto LABEL_318;
          }
        }
      }
      break;
    case 0xFu:
      if ( v11 < (unsigned __int64)v195 + 22 )
        return 0;
      if ( *(_BYTE *)(a1 + 5504) )
      {
        v158 = (__int64)v195;
        v67 = get_fixups();
        v15 = v158;
        if ( v67 )
          return 0;
      }
      v159 = v15;
      v176 = get_byte();
      if ( v176 > 0xFu )
        return 0;
      v56 = 22;
      v57 = sub_52C60(a1, v159, 0, 1u, 0);
      v58 = v159;
LABEL_114:
      if ( v57 == -1 )
        return 0;
      v157 = a3 != 0;
      if ( v57 && a3 )
      {
        v181 = v58;
        sub_545A0(a1, v57, (unsigned int)(a3 + 1), 0);
        v58 = v181;
      }
      v195 = (__int64 *)(v56 + v58 - 1);
      if ( !(unsigned __int8)sub_520F0(&v195, 0) )
        return 0;
      v59 = (__int64)v195;
      v60 = (__int64)v195 + 2;
      if ( v11 < (unsigned __int64)v195 + 2 )
        return 0;
      if ( *(_BYTE *)(a1 + 5504) )
      {
        v182 = (__int64)v195;
        v61 = get_fixups();
        v59 = v182;
        if ( v61 )
          return 0;
      }
      v183 = v59;
      v62 = get_word();
      v25 = v62;
      if ( v62 > 0x3FFCu )
        return 0;
      v195 = (__int64 *)v60;
      if ( byte != 15 )
        goto LABEL_124;
      v123 = v183 + 4;
      if ( v11 < v183 + 4 )
        return 0;
      if ( !*(_BYTE *)(a1 + 5504) )
        goto LABEL_296;
      v189 = v62;
      v185 = v183 + 4;
      v124 = get_fixups();
      v25 = v189;
      if ( !v124 )
      {
        v123 = v185;
LABEL_296:
        v190 = v25;
        v186 = v123;
        v125 = get_word();
        v16 = v186;
        v25 = v190;
        v196 = v125;
        if ( v125 == 0xFFFF || v125 == v190 && (v176 & 8) != 0 )
          goto LABEL_275;
      }
LABEL_124:
      if ( !v25 )
      {
        v16 = v60;
LABEL_275:
        v171 = 0;
        v11 = 0;
        v150 = 0;
        dword = 0;
        goto LABEL_36;
      }
      v177 = v6;
      v63 = v25;
      v134 = a3 + 1;
      while ( 1 )
      {
        v64 = (__int64)v195;
        if ( v11 < (unsigned __int64)v195 + 27 || *(_BYTE *)(a1 + 5504) && (unsigned __int8)get_fixups() )
          return 0;
        v65 = sub_52C60(a1, v64, 0, 0, 0);
        if ( v65 == -1 )
          return 0;
        if ( v65 && v157 )
          sub_545A0(a1, v65, v134, 0);
        v195 = (__int64 *)(v64 + 26);
        if ( !(unsigned __int8)sub_520F0(&v195, 0) )
          return 0;
        v66 = (__int64)v195;
        if ( __ROR8__(0xCCCCCCCCCCCCCCCDLL * v63, 1) <= 0x1999999999999999uLL )
          show_auto();
        if ( !--v63 )
        {
          v25 = 0;
          v16 = v66;
          v150 = 0;
          v6 = v177;
          dword = 0;
          v11 = 0;
          v171 = 0;
          goto LABEL_36;
        }
      }
    case 0x10u:
      if ( v11 < (unsigned __int64)(v195 + 2) )
        return 0;
      v150 = *(_BYTE *)(a1 + 5504);
      if ( !v150 )
      {
        v171 = 0;
        v11 = 0;
        v25 = 16;
        dword = 0;
        goto LABEL_36;
      }
      v137 = (__int64)v195;
      v150 = get_fixups();
      if ( v150 )
        return 0;
      v171 = 0;
      v16 = v137;
      v11 = 0;
      dword = 0;
      v25 = 16;
      goto LABEL_36;
    case 0x13u:
      v68 = 0;
      goto LABEL_146;
    case 0x14u:
      v51 = sub_52C60(a1, (__int64)v195, 0, 1u, 1);
      v25 = 0;
      v52 = v51;
      goto LABEL_101;
    case 0x15u:
      v37 = (__int64)v195 + 13;
      if ( v11 < (unsigned __int64)v195 + 13 )
        return 0;
      if ( *(_BYTE *)(a1 + 5504) )
      {
        v152 = (__int64)v195;
        v38 = get_fixups();
        v15 = v152;
        if ( v38 )
          return 0;
      }
      v153 = v15;
      v195 = (__int64 *)(v15 + 8);
      v39 = sub_52C60(a1, v15 + 8, 0, 1u, 1);
      v40 = v153;
      if ( v39 == -1 )
        return 0;
      v154 = a3 != 0;
      if ( v39 && a3 )
      {
        v174 = v40;
        sub_545A0(a1, v39, (unsigned int)(a3 + 1), 0);
        v40 = v174;
      }
      v41 = *(_BYTE *)(a1 + 5504) == 0;
      v195 = (__int64 *)(v40 + 12);
      if ( !v41 )
      {
        if ( (unsigned __int8)get_fixups() )
          return 0;
      }
      LOBYTE(v42) = get_byte();
      v195 = (__int64 *)v37;
      v42 = (unsigned __int8)v42;
      dword = v42;
      if ( !(_BYTE)v42 )
      {
        v171 = 0;
        v16 = v37;
        v11 = 0;
        v25 = 0;
        v150 = 0;
        goto LABEL_36;
      }
      v103 = (unsigned __int8)v42;
      v139 = a3 + 1;
      while ( 2 )
      {
        if ( *(_BYTE *)(a1 + 5504) && (unsigned __int8)get_fixups() )
          return 0;
        v195 = (__int64 *)(v37 + 1);
        v104 = sub_52C60(a1, v37 + 1, 0, 0, 1);
        if ( v104 == -1 )
          return 0;
        if ( v104 && v154 )
          sub_545A0(a1, v104, v139, 0);
        v195 = (__int64 *)(v37 + 5);
        if ( !(unsigned __int8)sub_520F0(&v195, 0) )
          return 0;
        v105 = (__int64)v195;
        if ( !*(_BYTE *)(a1 + 5504) || !(unsigned __int8)get_fixups() )
        {
          v37 = v105 + 2;
          v195 = (__int64 *)v37;
          if ( __ROR8__(0xCCCCCCCCCCCCCCCDLL * v103, 1) <= 0x1999999999999999uLL )
            show_auto();
          if ( !--v103 )
          {
            v25 = 0;
            v150 = 0;
            v13 = v6 + 1;
            v16 = v37;
            v171 = 0;
            v11 = 0;
            goto LABEL_36;
          }
          continue;
        }
        return 0;
      }
  }
  return 0;
}

