__int64 __fastcall sub_43F0(__int64 a1, unsigned __int16 *a2, unsigned int a3, double a4, __m128i si128)
{
  unsigned int v5; // r15d
  unsigned int v7; // ebx
  __int64 v8; // r11
  const char *v9; // r14
  unsigned int v10; // r10d
  int v11; // eax
  unsigned int v12; // r12d
  unsigned __int16 v13; // cx
  __int64 v14; // r8
  const char *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // r11d
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rax
  int func_chunknum; // eax
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rax
  char v28; // al
  __int64 name_ea; // rax
  char v30; // al
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int v35; // eax
  char v36; // si
  __int64 v37; // rdx
  __int64 v38; // rdx
  unsigned int v39; // r12d
  const char *v40; // rax
  __int64 v41; // rax
  unsigned int v42; // ecx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int16 v45; // cx
  __int64 v46; // rax
  __int64 func; // rax
  unsigned int v48; // r8d
  __int64 v49; // r9
  int v50; // eax
  unsigned __int16 *v51; // rcx
  unsigned __int16 v52; // r15
  __int64 v53; // rax
  const char *v54; // r13
  unsigned int v55; // r14d
  unsigned int *v56; // r12
  __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  char v63; // al
  int v64; // ecx
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // r9
  __int64 v68; // r8
  int v69; // eax
  unsigned int v70; // r10d
  int v71; // r11d
  __int64 v72; // rax
  __int64 v73; // rax
  int v74; // eax
  __int64 tinfo_size; // rax
  char v76; // r14
  __int64 v77; // rax
  __int64 v78; // rax
  char v79; // al
  unsigned int v80; // r10d
  int v81; // r11d
  char tinfo_property; // al
  int v83; // eax
  __int64 v84; // rax
  __int64 v85; // rax
  unsigned __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // [rsp+8h] [rbp-1278h]
  int v92; // [rsp+14h] [rbp-126Ch]
  __int64 v93; // [rsp+28h] [rbp-1258h]
  unsigned int v94; // [rsp+28h] [rbp-1258h]
  unsigned int v95; // [rsp+28h] [rbp-1258h]
  unsigned int v96; // [rsp+30h] [rbp-1250h]
  int v97; // [rsp+30h] [rbp-1250h]
  int v98; // [rsp+38h] [rbp-1248h]
  _QWORD *v99; // [rsp+38h] [rbp-1248h]
  int v100; // [rsp+38h] [rbp-1248h]
  unsigned int v101; // [rsp+38h] [rbp-1248h]
  int v102; // [rsp+38h] [rbp-1248h]
  unsigned int v103; // [rsp+38h] [rbp-1248h]
  unsigned int v104; // [rsp+38h] [rbp-1248h]
  int v105; // [rsp+40h] [rbp-1240h]
  unsigned int v106; // [rsp+40h] [rbp-1240h]
  unsigned int v107; // [rsp+40h] [rbp-1240h]
  int v108; // [rsp+40h] [rbp-1240h]
  int v109; // [rsp+40h] [rbp-1240h]
  int v110; // [rsp+40h] [rbp-1240h]
  int v111; // [rsp+40h] [rbp-1240h]
  int v112; // [rsp+40h] [rbp-1240h]
  int v113; // [rsp+40h] [rbp-1240h]
  unsigned int v114; // [rsp+40h] [rbp-1240h]
  int v115; // [rsp+40h] [rbp-1240h]
  unsigned int v116; // [rsp+40h] [rbp-1240h]
  __int64 v117; // [rsp+40h] [rbp-1240h]
  unsigned int v118; // [rsp+40h] [rbp-1240h]
  int v119; // [rsp+40h] [rbp-1240h]
  int v120; // [rsp+40h] [rbp-1240h]
  unsigned int v121; // [rsp+40h] [rbp-1240h]
  unsigned int v122; // [rsp+40h] [rbp-1240h]
  int v123; // [rsp+40h] [rbp-1240h]
  int v124; // [rsp+40h] [rbp-1240h]
  int v125; // [rsp+40h] [rbp-1240h]
  unsigned __int16 v126; // [rsp+40h] [rbp-1240h]
  unsigned int v127; // [rsp+40h] [rbp-1240h]
  int v128; // [rsp+40h] [rbp-1240h]
  int v129; // [rsp+40h] [rbp-1240h]
  unsigned int v130; // [rsp+48h] [rbp-1238h]
  unsigned __int16 v131; // [rsp+48h] [rbp-1238h]
  int v132; // [rsp+48h] [rbp-1238h]
  unsigned int v133; // [rsp+48h] [rbp-1238h]
  unsigned int v134; // [rsp+48h] [rbp-1238h]
  unsigned int v135; // [rsp+48h] [rbp-1238h]
  unsigned int v136; // [rsp+48h] [rbp-1238h]
  unsigned int v137; // [rsp+48h] [rbp-1238h]
  unsigned int v138; // [rsp+48h] [rbp-1238h]
  unsigned int v139; // [rsp+48h] [rbp-1238h]
  unsigned int v140; // [rsp+48h] [rbp-1238h]
  int v141; // [rsp+48h] [rbp-1238h]
  unsigned __int16 v142; // [rsp+48h] [rbp-1238h]
  unsigned __int16 *v143; // [rsp+48h] [rbp-1238h]
  int v144; // [rsp+48h] [rbp-1238h]
  unsigned int v145; // [rsp+48h] [rbp-1238h]
  unsigned int v146; // [rsp+48h] [rbp-1238h]
  unsigned int v147; // [rsp+48h] [rbp-1238h]
  unsigned int v148; // [rsp+48h] [rbp-1238h]
  unsigned int v149; // [rsp+48h] [rbp-1238h]
  unsigned int v150; // [rsp+48h] [rbp-1238h]
  unsigned int v151; // [rsp+48h] [rbp-1238h]
  unsigned int v152; // [rsp+48h] [rbp-1238h]
  unsigned int v153; // [rsp+48h] [rbp-1238h]
  unsigned int v154; // [rsp+48h] [rbp-1238h]
  unsigned __int16 v155; // [rsp+50h] [rbp-1230h]
  __int64 v156; // [rsp+58h] [rbp-1228h]
  const char *v157; // [rsp+60h] [rbp-1220h]
  char v158; // [rsp+72h] [rbp-120Eh]
  unsigned __int8 v159; // [rsp+73h] [rbp-120Dh]
  unsigned int v160; // [rsp+74h] [rbp-120Ch]
  __int64 v161; // [rsp+78h] [rbp-1208h]
  int v162; // [rsp+78h] [rbp-1208h]
  unsigned int v163; // [rsp+78h] [rbp-1208h]
  unsigned int v164; // [rsp+78h] [rbp-1208h]
  unsigned int *v165; // [rsp+78h] [rbp-1208h]
  unsigned int v166; // [rsp+78h] [rbp-1208h]
  __int64 v167; // [rsp+88h] [rbp-11F8h] BYREF
  __int64 v168; // [rsp+90h] [rbp-11F0h] BYREF
  __int64 v169; // [rsp+98h] [rbp-11E8h] BYREF
  _QWORD v170[5]; // [rsp+A0h] [rbp-11E0h] BYREF
  __int16 v171; // [rsp+C8h] [rbp-11B8h]
  __int128 v172; // [rsp+D0h] [rbp-11B0h]
  __int64 v173; // [rsp+E0h] [rbp-11A0h]
  __int64 v174; // [rsp+E8h] [rbp-1198h]
  int v175; // [rsp+F0h] [rbp-1190h]
  __int64 v176; // [rsp+F8h] [rbp-1188h]
  int v177; // [rsp+100h] [rbp-1180h]
  __int64 v178; // [rsp+108h] [rbp-1178h]
  int v179; // [rsp+110h] [rbp-1170h]
  __int64 v180; // [rsp+118h] [rbp-1168h]
  int v181; // [rsp+120h] [rbp-1160h]
  __int64 v182; // [rsp+128h] [rbp-1158h]
  __int128 v183; // [rsp+130h] [rbp-1150h] BYREF
  __m128 v184; // [rsp+140h] [rbp-1140h] BYREF
  __int64 v185; // [rsp+150h] [rbp-1130h]
  __int16 v186; // [rsp+158h] [rbp-1128h]
  __int128 v187; // [rsp+160h] [rbp-1120h]
  __int64 v188; // [rsp+170h] [rbp-1110h]
  __int64 v189; // [rsp+178h] [rbp-1108h]
  int v190; // [rsp+180h] [rbp-1100h]
  __int64 v191; // [rsp+188h] [rbp-10F8h]
  int v192; // [rsp+190h] [rbp-10F0h]
  __int64 v193; // [rsp+198h] [rbp-10E8h]
  int v194; // [rsp+1A0h] [rbp-10E0h]
  __int64 v195; // [rsp+1A8h] [rbp-10D8h]
  int v196; // [rsp+1B0h] [rbp-10D0h]
  __int64 v197; // [rsp+1B8h] [rbp-10C8h]
  _QWORD v198[400]; // [rsp+1C0h] [rbp-10C0h]
  char v199[1032]; // [rsp+E40h] [rbp-440h] BYREF
  unsigned __int64 v200; // [rsp+1248h] [rbp-38h]

  v5 = 1024;
  v200 = __readfsqword(0x28u);
  v7 = a3;
  v158 = 0;
  v156 = 0;
  v155 = 0;
  v157 = nullptr;
  v160 = 0;
  v159 = 1;
  LODWORD(v8) = 0;
  v9 = nullptr;
  v10 = -(a3 > 0x400);
  while ( v7 >= v10 )
  {
    v11 = *a2;
    v12 = v11 + 2;
    if ( v7 < v11 + 2 )
      return 0;
LABEL_3:
    v13 = a2[1];
    v7 -= v12;
    if ( v9 && v13 == 529 && v12 > 0xF )
    {
      v14 = (unsigned int)(v11 - 4);
      if ( __ROR8__(0xCCCCCCCCCCCCCCCDLL * v14, 1) <= 0x1999999999999999uLL
        && (unsigned int)v14 > 9
        && a2[2] == (v11 - 4) / 0xAu
        && (unsigned int)v8 >= *(_DWORD *)(a2 + 3) + *(_DWORD *)(a2 + 5) )
      {
        v116 = (v11 - 4) / 0xAu;
        v141 = v8;
        v164 = v10;
        func = get_func(v156);
        v10 = v164;
        LODWORD(v8) = v141;
        v48 = v116;
        v49 = func;
        if ( func )
        {
          v142 = a2[7];
          if ( v9 == (_BYTE *)&dword_0 + 1 )
          {
            v155 = a2[7];
            if ( v155 > 0x21u )
            {
LABEL_39:
              v159 = 0;
              v9 = nullptr;
              v161 = v12;
              goto LABEL_11;
            }
            if ( ((v142 - 13) & 0xFFF7) == 0 || (unsigned __int16)(v142 - 1) > 0x17u )
              goto LABEL_9;
            v9 = &asc_78A0[4 * v142];
            goto LABEL_125;
          }
          if ( v142 == v155 )
          {
            v94 = v116;
            v102 = v8;
            v117 = func;
            v50 = del_regvar(func, v156, v156 + (unsigned int)v8, v9);
            v49 = v117;
            LODWORD(v8) = v102;
            v10 = v164;
            v48 = v94;
            if ( v50 && (debug & 0x400000) != 0 )
            {
              sub_2AE0((__int64)"TDS: cannot del %s at 0x%a-0x%a\n", v9, a4, *(double *)si128.m128i_i64);
              v49 = v117;
              v48 = v94;
              LODWORD(v8) = v102;
              v10 = v164;
            }
LABEL_125:
            v51 = a2 + 3;
            v103 = v5;
            v52 = v142;
            v96 = v12;
            v53 = (__int64)&a2[5 * v48 + 3];
            v143 = a2;
            v54 = v9;
            v55 = v8;
            v95 = v7;
            v56 = (unsigned int *)v53;
            v57 = v49;
            v118 = v10;
            v165 = (unsigned int *)v51;
            do
            {
              if ( *((_WORD *)v165 + 4) == v52 )
              {
                v58 = *v165;
                v59 = v165[1];
                if ( v55 >= (int)v58 + (int)v59
                  && (unsigned int)add_regvar(v57, v58 + v156, v59 + v58 + v156, v54, v54, v157)
                  && (debug & 0x400000) != 0 )
                {
                  sub_2AE0((__int64)"TDS: cannot set %s=>%s at 0x%a-0x%a\n", v54, v157, a4, *(double *)si128.m128i_i64);
                }
              }
              v165 = (unsigned int *)((char *)v165 + 10);
            }
            while ( v165 != v56 );
            v10 = v118;
            v7 = v95;
            LODWORD(v8) = v55;
            v5 = v103;
            v12 = v96;
            a2 = v143;
          }
        }
      }
LABEL_9:
      v161 = v12;
      goto LABEL_10;
    }
    if ( v13 <= 0x27u )
    {
      if ( v13 )
      {
        switch ( v13 )
        {
          case 1u:
          case 3u:
          case 4u:
          case 5u:
          case 0x24u:
          case 0x25u:
          case 0x26u:
          case 0x27u:
            goto LABEL_9;
          case 2u:
            v161 = v12;
            if ( v12 <= 0xD )
              goto LABEL_97;
            LODWORD(v8) = *(_DWORD *)(a2 + 5);
            v9 = nullptr;
            if ( !(_DWORD)v8 )
              goto LABEL_11;
            if ( *(_DWORD *)(a1 + 160) < (unsigned int)v8 )
              goto LABEL_117;
            v157 = (const char *)(*(_QWORD *)(a1 + 128)
                                + *(unsigned int *)(*(_QWORD *)(a1 + 136) + 4LL * (unsigned int)(v8 - 1)));
            if ( v157 == nullptr || *v157 == 0 )
              goto LABEL_117;
            v8 = a2[4];
            if ( (unsigned __int16)v8 > 0x21u )
              goto LABEL_83;
            if ( (unsigned __int16)(v8 - 1) > 0x17u || (((_WORD)v8 - 13) & 0xFFF7) == 0 )
              goto LABEL_11;
            v37 = v160 - 1;
            if ( (unsigned int)v37 > 0xC7 )
              goto LABEL_83;
            v38 = 2 * v37;
            v39 = v198[v38 + 1];
            if ( v39 )
            {
              v126 = a2[4];
              v9 = &asc_78A0[4 * v8];
              v152 = v10;
              v156 = v198[v38];
              v73 = get_func(v156);
              v74 = add_regvar(v73, v156, v156 + v39, v9, v9, v157);
              v10 = v152;
              if ( v74 && (debug & 0x400000) != 0 )
              {
                sub_2AE0((__int64)"TDS: cannot set %s=>%s at 0x%a-0x%a\n", v9, v157, a4, *(double *)si128.m128i_i64);
                v10 = v152;
                v155 = v126;
                LODWORD(v8) = v39;
              }
              else
              {
                v155 = v126;
                LODWORD(v8) = v39;
              }
            }
            else
            {
              v155 = a2[4];
              LODWORD(v8) = 0;
            }
            goto LABEL_11;
          case 6u:
            v9 = nullptr;
            v161 = v12;
            v35 = v160;
            if ( !v160 )
              goto LABEL_83;
            v36 = v158;
            --v160;
            if ( v35 == 1 )
              v36 = 0;
            v158 = v36;
            goto LABEL_11;
          case 0x20u:
          case 0x21u:
            v161 = v12;
            if ( v12 <= 0x19 )
            {
LABEL_97:
              v159 = 0;
              v9 = nullptr;
              goto LABEL_11;
            }
            LODWORD(v8) = *((_DWORD *)a2 + 3);
            v9 = nullptr;
            if ( !(_DWORD)v8 || a2[12] == 0xFFFF )
              goto LABEL_11;
            if ( *(_DWORD *)(a1 + 160) < (unsigned int)v8
              || (v157 = (const char *)(*(_QWORD *)(a1 + 128)
                                      + *(unsigned int *)(*(_QWORD *)(a1 + 136) + 4LL * (unsigned int)(v8 - 1))),
                  v157 == nullptr || *v157 == 0) )
            {
LABEL_117:
              v157 = nullptr;
              v159 = 0;
              goto LABEL_11;
            }
            v113 = *((_DWORD *)a2 + 3);
            v138 = v10;
            v34 = sub_4360(a1, (unsigned int *)a2 + 5);
            v10 = v138;
            LODWORD(v8) = v113;
            v156 = v34;
            if ( v34 == -1 )
            {
LABEL_83:
              v159 = 0;
              goto LABEL_11;
            }
LABEL_116:
            v18 = 259;
            v19 = 2;
            break;
          default:
            goto LABEL_21;
        }
        goto LABEL_63;
      }
LABEL_21:
      v9 = nullptr;
      v161 = v12;
      if ( (debug & 0x400000) == 0 )
        goto LABEL_11;
      v105 = v8;
      v130 = v10;
      sub_2AE0((__int64)"TDS: unknown cv-rec %X\n", v13);
      v10 = v130;
      LODWORD(v8) = v105;
      a2 = (unsigned __int16 *)((char *)a2 + v12);
      if ( !v7 )
      {
LABEL_23:
        v159 &= v160 == 0;
        return v159;
      }
    }
    else
    {
      switch ( a2[1] )
      {
        case 0x200u:
          if ( v12 <= 0xF )
            goto LABEL_39;
          LODWORD(v8) = *((_DWORD *)a2 + 3);
          if ( !(_DWORD)v8 )
            goto LABEL_9;
          if ( *(_DWORD *)(a1 + 160) < (unsigned int)v8
            || (v157 = (const char *)(*(_QWORD *)(a1 + 128)
                                    + *(unsigned int *)(*(_QWORD *)(a1 + 136) + 4LL * (unsigned int)(v8 - 1))),
                v157 == nullptr || *v157 == 0) )
          {
            v159 = 0;
            v9 = nullptr;
            v161 = v12;
            v157 = nullptr;
            goto LABEL_11;
          }
          v20 = v160 - 1;
          if ( (unsigned int)v20 > 0xC7 )
          {
            v159 = 0;
            v9 = nullptr;
            v161 = v12;
            goto LABEL_11;
          }
          v21 = 2 * v20;
          LODWORD(v8) = v198[v21 + 1];
          if ( !(_DWORD)v8 )
            goto LABEL_9;
          v22 = v198[v21];
          v107 = v10;
          v132 = v198[v21 + 1];
          v163 = *((_DWORD *)a2 + 2);
          v92 = *((_DWORD *)a2 + 1);
          v93 = (unsigned int)v8;
          v23 = get_func(v22);
          LODWORD(v8) = v132;
          v10 = v107;
          v99 = (_QWORD *)v23;
          if ( !v23 )
            goto LABEL_144;
          v108 = v132;
          v133 = v10;
          v91 = v93 + v22;
          func_chunknum = get_func_chunknum(v23, v93 + v22 - 1);
          v10 = v133;
          LODWORD(v8) = v108;
          if ( func_chunknum < 0 )
            goto LABEL_144;
          v167 = 0;
          if ( v163 <= 0x77 )
          {
            if ( v163 > 1 )
            {
              switch ( v163 )
              {
                case 2u:
                case 0x11u:
                case 0x21u:
                case 0x31u:
                case 0x71u:
                case 0x72u:
                case 0x73u:
                  v72 = 3;
                  goto LABEL_157;
                case 4u:
                case 0x10u:
                case 0x20u:
                case 0x30u:
                case 0x61u:
                case 0x70u:
                  v72 = 50;
                  goto LABEL_157;
                case 0x12u:
                case 0x22u:
                case 0x32u:
                case 0x50u:
                case 0x74u:
                case 0x75u:
                  v72 = 4;
                  goto LABEL_157;
                case 0x13u:
                case 0x23u:
                case 0x33u:
                case 0x51u:
                case 0x76u:
                case 0x77u:
                  v72 = 5;
                  goto LABEL_157;
                case 0x40u:
                  v72 = 9;
                  goto LABEL_157;
                case 0x41u:
                  v72 = 25;
                  goto LABEL_157;
                case 0x42u:
                case 0x52u:
                  v72 = 57;
                  goto LABEL_157;
                case 0x43u:
                  *((_QWORD *)&v183 + 1) = 0x1000000000LL;
                  v170[0] = 50;
                  *(_QWORD *)&v183 = 0;
                  copy_tinfo_t(&v183, v170);
                  create_tinfo(&v167, 11, 11, &v183);
                  clear_tinfo_t(&v183);
                  clear_tinfo_t(v170);
                  v10 = v133;
                  LODWORD(v8) = v108;
                  break;
                case 0x44u:
                  goto LABEL_198;
                case 0x53u:
                  v184.m128_i16[0] = 256;
                  *((_QWORD *)&v183 + 1) = "complex128";
                  *(_QWORD *)&v183 = get_idati();
                  v79 = create_tinfo(&v167, 61, 61, &v183);
                  v80 = v133;
                  v81 = v108;
                  if ( !v79
                    || (tinfo_property = get_tinfo_property(v167, 2),
                        v80 = v133,
                        v81 = v108,
                        (tinfo_property & 0x3F) != 0xD) )
                  {
                    v128 = v81;
                    v153 = v80;
                    v83 = parse_decls(0, "struct complex128 { double real, imag; };", 0, 0);
                    v80 = v153;
                    v81 = v128;
                    if ( !v83 )
                    {
                      v184.m128_i16[0] = 256;
                      *((_QWORD *)&v183 + 1) = "complex128";
                      *(_QWORD *)&v183 = get_idati();
                      create_tinfo(&v167, 61, 61, &v183);
                      v81 = v128;
                      v80 = v153;
                    }
                  }
                  v129 = v81;
                  v154 = v80;
                  get_tinfo_property(v167, 2);
                  v10 = v154;
                  LODWORD(v8) = v129;
                  break;
                default:
                  goto LABEL_150;
              }
            }
            goto LABEL_150;
          }
          if ( v163 > 0x377 )
          {
            if ( v163 > 0x477 )
            {
              if ( v163 > 0x533 )
              {
                if ( v163 - 1344 <= 0x37 )
                {
                  v90 = 0xFF0000000F001FLL;
                  if ( _bittest64(&v90, v163 - 1344) )
                    goto LABEL_198;
                }
              }
              else if ( v163 > 0x502 )
              {
                v84 = 0x1E001E001E001LL;
                if ( _bittest64(&v84, v163 - 1283) )
                  goto LABEL_198;
              }
            }
            else
            {
              if ( v163 > 0x43F )
              {
                v66 = 0xFF0000000B001FLL;
                if ( _bittest64(&v66, v163 - 1088) )
                  goto LABEL_188;
                if ( v163 != 1106 )
                  goto LABEL_150;
LABEL_198:
                *((_QWORD *)&v183 + 1) = 0x600000000LL;
                v168 = 0;
                v170[0] = 50;
                *(_QWORD *)&v183 = 0;
                copy_tinfo_t(&v183, v170);
                create_tinfo(&v168, 11, 11, &v183);
                clear_tinfo_t(&v183);
                clear_tinfo_t(v170);
                a4 = 0.0;
                v169 = 0;
                v170[0] = 0;
                v183 = 0;
                copy_tinfo_t((char *)&v183 + 8, v170);
                v184.m128_u64[0] = 0;
                copy_tinfo_t(&v184, &v169);
                v184.m128_i32[2] = 0;
                v184.m128_i16[6] = 0;
                clear_tinfo_t(v170);
                clear_tinfo_t(&v169);
                copy_tinfo_t(&v183, &v168);
                create_tinfo(&v167, 10, 10, &v183);
                clear_tinfo_t(&v184);
                clear_tinfo_t((char *)&v183 + 8);
                clear_tinfo_t(&v183);
                clear_tinfo_t(&v168);
                v10 = v133;
                LODWORD(v8) = v108;
                goto LABEL_150;
              }
              if ( v163 - 1027 <= 0x30 )
              {
                v78 = 0x1E001E001E001LL;
                if ( _bittest64(&v78, v163 - 1027) )
                {
LABEL_188:
                  a4 = 0.0;
                  v168 = 4;
                  v169 = 0;
                  v170[0] = 0;
                  v183 = 0;
                  copy_tinfo_t((char *)&v183 + 8, v170);
                  v184.m128_u64[0] = 0;
                  copy_tinfo_t(&v184, &v169);
                  v184.m128_i32[2] = 0;
                  v184.m128_i16[6] = 0;
                  clear_tinfo_t(v170);
                  clear_tinfo_t(&v169);
                  copy_tinfo_t(&v183, &v168);
                  create_tinfo(&v167, 10, 10, &v183);
                  clear_tinfo_t(&v184);
                  clear_tinfo_t((char *)&v183 + 8);
                  clear_tinfo_t(&v183);
                  clear_tinfo_t(&v168);
                  v10 = v133;
                  LODWORD(v8) = v108;
                  goto LABEL_150;
                }
              }
            }
            goto LABEL_150;
          }
          if ( v163 > 0x33F )
          {
            v89 = 0xFF0000000F001FLL;
            if ( _bittest64(&v89, v163 - 832) )
            {
LABEL_211:
              v72 = 33;
LABEL_157:
              *(_QWORD *)&v183 = v72;
              copy_tinfo_t(&v167, &v183);
              clear_tinfo_t(&v183);
              LODWORD(v8) = v108;
              v10 = v133;
            }
          }
          else
          {
            if ( v163 <= 0x177 )
            {
              if ( v163 > 0x13F )
              {
                v85 = 0xFF0000000F001FLL;
                if ( _bittest64(&v85, v163 - 320) )
                  goto LABEL_183;
              }
              else if ( v163 - 259 <= 0x30 )
              {
                v77 = 0x1E001E001E001LL;
                if ( _bittest64(&v77, v163 - 259) )
                {
LABEL_183:
                  a4 = 0.0;
                  v168 = 3;
                  v169 = 0;
                  v170[0] = 0;
                  v183 = 0;
                  copy_tinfo_t((char *)&v183 + 8, v170);
                  v184.m128_u64[0] = 0;
                  copy_tinfo_t(&v184, &v169);
                  v184.m128_i32[2] = 0;
                  v184.m128_i16[6] = 0;
                  clear_tinfo_t(v170);
                  clear_tinfo_t(&v169);
                  copy_tinfo_t(&v183, &v168);
                  create_tinfo(&v167, 10, 10, &v183);
                  clear_tinfo_t(&v184);
                  clear_tinfo_t((char *)&v183 + 8);
                  clear_tinfo_t(&v183);
                  clear_tinfo_t(&v168);
                  v10 = v133;
                  LODWORD(v8) = v108;
                  goto LABEL_150;
                }
              }
              goto LABEL_150;
            }
            if ( v163 > 0x277 )
            {
              v86 = v163 - 771;
              if ( v163 - 771 > 0x30 )
                goto LABEL_150;
              goto LABEL_206;
            }
            if ( v163 <= 0x23F )
            {
              v86 = v163 - 515;
              if ( v163 - 515 > 0x30 )
                goto LABEL_150;
LABEL_206:
              v87 = 0x1E001E001E001LL;
              v72 = 33;
              if ( _bittest64(&v87, v86) )
                goto LABEL_157;
              goto LABEL_150;
            }
            v88 = 0xFF0000000F001FLL;
            if ( _bittest64(&v88, v163 - 576) )
              goto LABEL_211;
          }
LABEL_150:
          v67 = v92;
          if ( v22 == *v99
            && v91 == v99[1]
            && (v97 = v8,
                v127 = v10,
                tinfo_size = get_tinfo_size(0, v167, 0, v22, v25, v92),
                v67 = v92,
                v10 = v127,
                LODWORD(v8) = v97,
                tinfo_size != -1) )
          {
            if ( v158 )
              v67 = v92 + v99[7] - v99[4];
            v76 = define_stkvar(v99, v157, v67, &v167, 0);
            clear_tinfo_t(&v167);
            v10 = v127;
            LODWORD(v8) = v97;
            if ( v76 )
            {
              v9 = (_BYTE *)(&dword_0 + 1);
              v161 = v12;
            }
            else
            {
LABEL_144:
              v64 = *((_DWORD *)a2 + 1);
              v65 = 43;
              if ( v64 < 0 )
              {
                v64 = -v64;
                v65 = 45;
              }
              v9 = nullptr;
              v161 = v12;
              if ( (debug & 0x400000) != 0 )
              {
                v123 = v8;
                v149 = v10;
                sub_2AE0(
                  (__int64)"TDS: cannot set e%cp%c%Xh=>%s at 0x%a-0x%a\n",
                  v158 == 0 ? 98 : 115,
                  v65,
                  v64,
                  v157,
                  a4,
                  *(double *)si128.m128i_i64);
                v10 = v149;
                LODWORD(v8) = v123;
              }
            }
          }
          else
          {
            v68 = 43;
            if ( v92 < 0LL )
            {
              v68 = 45;
              v67 = -(__int64)v92;
            }
            v124 = v8;
            v150 = v10;
            v69 = qsnprintf(v199, 1024, ";E%cP%c%ah=>%s", v158 == 0 ? 66 : 83, v68, a4, (const char *)v67);
            v70 = v150;
            v71 = v124;
            if ( v91 != v99[1] )
            {
              qsnprintf(&v199[v69], 1024LL - v69, " to %a", a4);
              v71 = v124;
              v70 = v150;
            }
            v125 = v71;
            v151 = v70;
            sub_2A20(v22, *v99 != v22, (__int64)"%s", v199);
            v9 = (_BYTE *)(&dword_0 + 1);
            clear_tinfo_t(&v167);
            v10 = v151;
            LODWORD(v8) = v125;
            v161 = v12;
          }
          goto LABEL_11;
        case 0x201u:
        case 0x202u:
          v131 = a2[1];
          v161 = v12;
          if ( v12 <= 0x13 )
            goto LABEL_97;
          LODWORD(v8) = *((_DWORD *)a2 + 4);
          v9 = nullptr;
          if ( !(_DWORD)v8 || a2[4] == 0xFFFF )
            goto LABEL_11;
          if ( *(_DWORD *)(a1 + 160) < (unsigned int)v8 )
            goto LABEL_117;
          v157 = (const char *)(*(_QWORD *)(a1 + 128)
                              + *(unsigned int *)(*(_QWORD *)(a1 + 136) + 4LL * (unsigned int)(v8 - 1)));
          if ( v157 == nullptr || *v157 == 0 )
            goto LABEL_117;
          v98 = *((_DWORD *)a2 + 4);
          v106 = v10;
          v17 = sub_4360(a1, (unsigned int *)a2 + 1);
          v10 = v106;
          LODWORD(v8) = v98;
          v156 = v17;
          if ( v17 == -1 )
            goto LABEL_83;
          v18 = 261;
          v19 = 4;
          if ( v131 == 514 )
            goto LABEL_116;
          goto LABEL_63;
        case 0x204u:
        case 0x205u:
          if ( v12 <= 0x2B )
            goto LABEL_41;
          LODWORD(v8) = *((_DWORD *)a2 + 10);
          if ( (_DWORD)v8 )
          {
            v161 = v12;
            if ( *(_DWORD *)(a1 + 160) < (unsigned int)v8
              || (v16 = (const char *)(*(_QWORD *)(a1 + 128)
                                     + *(unsigned int *)(*(_QWORD *)(a1 + 136) + 4LL * (unsigned int)(v8 - 1))),
                  v157 = v16,
                  !*v16)
              || !v16 )
            {
              v157 = nullptr;
              goto LABEL_42;
            }
          }
          else if ( v11 - 46 > 1 && *((_BYTE *)a2 + 48) )
          {
            v157 = (const char *)(a2 + 24);
            v161 = (unsigned int)(v11 + 1);
            if ( *((_BYTE *)a2 + v161 + 48) )
              v157 = nullptr;
          }
          else
          {
            v157 = nullptr;
            v161 = v12;
          }
          LODWORD(v8) = *((_DWORD *)a2 + 4);
          v139 = a2[1];
          if ( !(_DWORD)v8 )
            goto LABEL_42;
          v100 = *((_DWORD *)a2 + 4);
          v114 = v10;
          v41 = sub_4360(a1, (unsigned int *)a2 + 7);
          v42 = v139;
          LODWORD(v8) = v100;
          v156 = v41;
          v10 = v114;
          v158 = a2[17] & 2;
          goto LABEL_110;
        case 0x206u:
          if ( v12 != 37 )
          {
LABEL_41:
            v161 = v12;
LABEL_42:
            if ( v160 <= 0xC7 )
              LODWORD(v198[2 * v160 + 1]) = 0;
            ++v160;
            v9 = nullptr;
            v159 = 0;
            goto LABEL_11;
          }
          LODWORD(v8) = *(_DWORD *)((char *)a2 + 25);
          if ( (_DWORD)v8 )
          {
            if ( *(_DWORD *)(a1 + 160) < (unsigned int)v8
              || (v40 = (const char *)(*(_QWORD *)(a1 + 128)
                                     + *(unsigned int *)(*(_QWORD *)(a1 + 136) + 4LL * (unsigned int)(v8 - 1))),
                  v157 = v40,
                  !*v40)
              || !v40 )
            {
              v161 = 37;
              v157 = nullptr;
              goto LABEL_42;
            }
          }
          else
          {
            v157 = nullptr;
          }
          v161 = 37;
          LODWORD(v8) = a2[11];
          if ( !a2[11] )
            goto LABEL_42;
          v104 = a2[1];
          v120 = a2[11];
          v146 = v10;
          v62 = sub_4360(a1, (unsigned int *)a2 + 4);
          v10 = v146;
          LODWORD(v8) = v120;
          v156 = v62;
          v42 = v104;
LABEL_110:
          if ( v156 == -1 )
            goto LABEL_42;
          v101 = v42;
          v115 = v8;
          v140 = v10;
          v43 = get_func(v156);
          v10 = v140;
          LODWORD(v8) = v115;
          v45 = v101;
          if ( !v43 )
          {
            v121 = v140;
            v147 = v8;
            create_insn(v156, 0, v44, v101);
            v170[0] = v156;
            v171 = 0;
            v172 = 0;
            v170[1] = 0;
            v170[2] = 512;
            v170[3] = -1;
            v170[4] = 0;
            v173 = 0xFFFFFFFFLL;
            v174 = 0;
            v175 = 0;
            v176 = 0;
            v177 = 0;
            v178 = 0;
            v179 = 0;
            v180 = 0;
            v181 = 0;
            v182 = 0;
            find_func_bounds(v170, 1);
            a4 = 0.0;
            si128 = _mm_load_si128((const __m128i *)&xmmword_79A0);
            v185 = 0;
            *(_QWORD *)&v183 = v156;
            *((_QWORD *)&v183 + 1) = v156 + v147;
            v186 = 0;
            v188 = 0xFFFFFFFFLL;
            v189 = 0;
            v190 = 0;
            v191 = 0;
            v192 = 0;
            v193 = 0;
            v194 = 0;
            v195 = 0;
            v196 = 0;
            v197 = 0;
            v184 = (__m128)si128;
            v187 = 0;
            v63 = add_func_ex(&v183);
            LODWORD(v8) = v147;
            v10 = v121;
            v45 = v101;
            if ( !v63 && (debug & 0x400000) != 0 )
            {
              v122 = v147;
              v148 = v10;
              sub_2AE0((__int64)"TDS: cannot create function at 0x%a-0x%a\n", 0.0, *(double *)si128.m128i_i64);
              v45 = v101;
              LODWORD(v8) = v122;
              v10 = v148;
            }
          }
          if ( v160 <= 0xC7 )
          {
            v46 = 2LL * v160;
            LODWORD(v198[v46 + 1]) = v8;
            v198[v46] = v156;
          }
          ++v160;
          v9 = nullptr;
          if ( v157 )
          {
            if ( v45 == 517 )
              goto LABEL_116;
            v18 = 261;
            v19 = 4;
LABEL_63:
            v110 = v19;
            v135 = v10;
            v28 = set_name(v156, v157, v18);
            v10 = v135;
            LODWORD(v8) = v110;
            if ( !v28 )
            {
              if ( *(_WORD *)v157 != 16448 )
              {
                name_ea = get_name_ea(-1, v157);
                v10 = v135;
                LODWORD(v8) = v110;
                if ( name_ea != -1 )
                {
                  v9 = nullptr;
                  v30 = set_name(v156, v157, 6144);
                  v10 = v135;
                  LODWORD(v8) = v110;
                  if ( v30 )
                    goto LABEL_11;
                }
              }
              if ( (debug & 0x400000) != 0 )
              {
                v111 = v8;
                v136 = v10;
                sub_2AE0((__int64)"TDS: cannot set name '%s' at 0x%a\n", v157, a4);
                v10 = v136;
                LODWORD(v8) = v111;
              }
            }
LABEL_10:
            v9 = nullptr;
          }
LABEL_11:
          a2 = (unsigned __int16 *)((char *)a2 + v161);
          if ( !v7 )
            goto LABEL_23;
          break;
        case 0x207u:
          v161 = v12;
          if ( v12 <= 0x15 )
            goto LABEL_42;
          LODWORD(v8) = *((_DWORD *)a2 + 3);
          if ( !(_DWORD)v8 )
            goto LABEL_42;
          v112 = *((_DWORD *)a2 + 3);
          v137 = v10;
          v31 = sub_4360(a1, (unsigned int *)a2 + 4);
          v10 = v137;
          LODWORD(v8) = v112;
          v156 = v31;
          v32 = v31;
          if ( v31 == -1 )
            goto LABEL_42;
          if ( v160 <= 0xC7 )
          {
            v33 = 2LL * v160;
            LODWORD(v198[v33 + 1]) = v112;
            v198[v33] = v32;
          }
          ++v160;
          v9 = nullptr;
          v157 = nullptr;
          goto LABEL_11;
        case 0x208u:
        case 0x211u:
        case 0x212u:
        case 0x213u:
        case 0x230u:
          goto LABEL_9;
        case 0x209u:
          v161 = v12;
          if ( v12 <= 0xE )
            goto LABEL_97;
          LODWORD(v8) = *(_DWORD *)((char *)a2 + 11);
          v9 = nullptr;
          if ( !(_DWORD)v8 )
            goto LABEL_11;
          if ( *(_DWORD *)(a1 + 160) < (unsigned int)v8 )
            goto LABEL_117;
          v157 = (const char *)(*(_QWORD *)(a1 + 128)
                              + *(unsigned int *)(*(_QWORD *)(a1 + 136) + 4LL * (unsigned int)(v8 - 1)));
          if ( v157 == nullptr || *v157 == 0 )
            goto LABEL_117;
          v109 = *(_DWORD *)((char *)a2 + 11);
          v134 = v10;
          v26 = sub_4360(a1, (unsigned int *)a2 + 1);
          v10 = v134;
          LODWORD(v8) = v109;
          v156 = v26;
          if ( v26 == -1 )
            goto LABEL_83;
          v27 = get_func(v26);
          v10 = v134;
          if ( v27 )
          {
            v18 = 769;
            v19 = 512;
          }
          else
          {
            v18 = 389;
            v19 = 132;
          }
          goto LABEL_63;
        case 0x210u:
          if ( v12 != 10 )
            goto LABEL_39;
          v144 = v8;
          v166 = v10;
          v60 = sub_4360(a1, (unsigned int *)a2 + 1);
          v10 = v166;
          LODWORD(v8) = v144;
          v156 = v60;
          if ( v60 == -1 )
          {
            v161 = 10;
            v9 = nullptr;
            v159 = 0;
          }
          else
          {
            v119 = v144;
            v9 = nullptr;
            v145 = v166;
            v61 = getinf(18);
            v10 = v166;
            v161 = 10;
            LODWORD(v8) = v119;
            if ( v61 == -1 )
            {
              setinf(18, v156);
              v10 = v145;
              LODWORD(v8) = v119;
            }
          }
          goto LABEL_11;
        default:
          goto LABEL_21;
      }
    }
  }
  v162 = v8;
  if ( (unsigned __int8)sub_3180(a1, v7) )
    return v159;
  v11 = *a2;
  LODWORD(v8) = v162;
  if ( v5 > v7 )
    v5 = v7;
  v12 = v11 + 2;
  v10 = v7 - v5;
  if ( v7 >= v11 + 2 )
    goto LABEL_3;
  return 0;
}
