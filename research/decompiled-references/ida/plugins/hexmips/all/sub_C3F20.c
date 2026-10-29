__int64 __fastcall sub_C3F20(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned int v4; // eax
  unsigned int v5; // r12d
  unsigned int v6; // eax
  char v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r15
  bool v11; // zf
  __int64 v12; // rdi
  char v13; // al
  unsigned __int8 v14; // r14
  char v15; // al
  unsigned __int8 v16; // r13
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdi
  __int32 v21; // ecx
  __int32 v22; // eax
  __int64 *v23; // r14
  int tinfo_property; // r14d
  char *v25; // rsi
  char *v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rsi
  __int64 v30; // r13
  __int64 v31; // rax
  _QWORD *v32; // r14
  __int64 v33; // rcx
  char v34; // al
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // rcx
  int v38; // eax
  int v39; // r14d
  unsigned __int64 v40; // r13
  int v41; // eax
  __int64 v42; // r14
  __int64 v43; // rdx
  __int64 *v44; // r13
  __int64 v45; // rax
  __m128i v46; // xmm0
  __int64 v47; // rdx
  __int64 v48; // r13
  __int64 v49; // rax
  __m128i v50; // xmm0
  __int64 *v51; // r13
  __int64 v52; // r9
  unsigned __int64 v53; // r8
  __m128i v54; // xmm0
  __int64 v55; // rax
  __int64 *v56; // r13
  __int64 v57; // r9
  size_t v58; // r8
  __m128i v59; // xmm0
  __int64 v60; // rdx
  __int64 v61; // r13
  __int64 v62; // r14
  __int64 v63; // rbx
  __int64 v64; // r13
  __int64 v65; // r14
  __int64 v66; // rbx
  __int64 v67; // r13
  __int64 v68; // r14
  __int64 v69; // rbx
  __int64 v70; // r13
  __int64 v71; // r14
  __int64 v72; // rbx
  __int64 v73; // r12
  __m128i *v74; // rbx
  char v75; // al
  __m128i *v76; // rdi
  __int64 v77; // rdx
  __int64 v78; // r14
  char *v79; // rbx
  char v80; // dl
  int v81; // eax
  __int64 v82; // rax
  __int64 v83; // rcx
  int v84; // eax
  __int64 v85; // rdi
  __int64 v86; // rax
  __int64 *v87; // rdx
  __int64 v88; // rax
  int v89; // ecx
  __int64 v90; // rsi
  __int64 v91; // rax
  __int64 v92; // rax
  void *v93; // rax
  void *v94; // rax
  void *v95; // rax
  void *v96; // rax
  __int64 v97; // rdx
  unsigned __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // r14
  size_t v101; // r13
  __int64 v102; // r13
  __int64 v103; // rsi
  __int64 *v104; // r13
  size_t v105; // r13
  size_t v106; // r13
  size_t v107; // r13
  unsigned int v108; // r14d
  char *v109; // rdi
  int v110; // eax
  __int64 v111; // rdx
  unsigned __int64 v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rdx
  __int64 v115; // r14
  _QWORD *v116; // r14
  _QWORD *v117; // rcx
  __int64 v118; // rax
  int v119; // edx
  char v120; // r13
  __int64 v121; // rax
  __int64 v122; // r13
  int v123; // r9d
  __int64 v124; // [rsp+0h] [rbp-3C0h]
  __int64 v125; // [rsp+10h] [rbp-3B0h]
  __int64 v126; // [rsp+20h] [rbp-3A0h]
  __int64 v127; // [rsp+28h] [rbp-398h]
  size_t v128; // [rsp+30h] [rbp-390h]
  __int64 *v129; // [rsp+38h] [rbp-388h]
  char *v130; // [rsp+40h] [rbp-380h]
  __int64 *v131; // [rsp+48h] [rbp-378h]
  char v132; // [rsp+50h] [rbp-370h]
  __int64 v133; // [rsp+50h] [rbp-370h]
  int v134; // [rsp+58h] [rbp-368h]
  size_t v135; // [rsp+58h] [rbp-368h]
  unsigned __int8 v136; // [rsp+67h] [rbp-359h]
  size_t v137; // [rsp+68h] [rbp-358h]
  unsigned __int64 v138; // [rsp+68h] [rbp-358h]
  __int64 *v139; // [rsp+78h] [rbp-348h]
  size_t v140; // [rsp+80h] [rbp-340h]
  size_t v141; // [rsp+80h] [rbp-340h]
  __int64 v142; // [rsp+80h] [rbp-340h]
  int v143; // [rsp+80h] [rbp-340h]
  int v144; // [rsp+90h] [rbp-330h]
  __int64 v145; // [rsp+90h] [rbp-330h]
  size_t n; // [rsp+98h] [rbp-328h]
  __int64 *na; // [rsp+98h] [rbp-328h]
  size_t nb; // [rsp+98h] [rbp-328h]
  __int64 nd; // [rsp+98h] [rbp-328h]
  size_t nc; // [rsp+98h] [rbp-328h]
  char *v151; // [rsp+A8h] [rbp-318h]
  __int64 v152; // [rsp+B0h] [rbp-310h]
  __int64 *v153; // [rsp+B0h] [rbp-310h]
  int v154; // [rsp+B0h] [rbp-310h]
  __int64 v155; // [rsp+B8h] [rbp-308h]
  __int64 v156; // [rsp+B8h] [rbp-308h]
  int v157; // [rsp+B8h] [rbp-308h]
  int v158; // [rsp+C8h] [rbp-2F8h]
  __m128i v159; // [rsp+D0h] [rbp-2F0h] BYREF
  __int64 *v160; // [rsp+E0h] [rbp-2E0h]
  int tinfo_size; // [rsp+E8h] [rbp-2D8h]
  int v162; // [rsp+ECh] [rbp-2D4h]
  _DWORD *v163; // [rsp+F0h] [rbp-2D0h]
  char *v164; // [rsp+F8h] [rbp-2C8h]
  __m128i v165; // [rsp+100h] [rbp-2C0h] BYREF
  char *v166; // [rsp+110h] [rbp-2B0h]
  __int64 v167; // [rsp+118h] [rbp-2A8h]
  __int64 v168; // [rsp+120h] [rbp-2A0h] BYREF
  __int64 v169; // [rsp+128h] [rbp-298h] BYREF
  __int64 v170; // [rsp+130h] [rbp-290h] BYREF
  __int64 v171; // [rsp+138h] [rbp-288h] BYREF
  __int64 *v172; // [rsp+140h] [rbp-280h] BYREF
  __int64 v173; // [rsp+148h] [rbp-278h] BYREF
  char v174; // [rsp+150h] [rbp-270h] BYREF
  char v175; // [rsp+151h] [rbp-26Fh]
  unsigned int v176; // [rsp+154h] [rbp-26Ch]
  __int64 v177; // [rsp+158h] [rbp-268h]
  char v178; // [rsp+160h] [rbp-260h] BYREF
  char v179; // [rsp+161h] [rbp-25Fh]
  int v180; // [rsp+164h] [rbp-25Ch]
  __int64 v181[2]; // [rsp+170h] [rbp-250h] BYREF
  __int64 v182; // [rsp+180h] [rbp-240h] BYREF
  __int128 v183; // [rsp+188h] [rbp-238h]
  __int64 v184; // [rsp+1A0h] [rbp-220h] BYREF
  __int128 v185; // [rsp+1A8h] [rbp-218h]
  __int64 v186; // [rsp+1C0h] [rbp-200h] BYREF
  __int128 v187; // [rsp+1C8h] [rbp-1F8h]
  __int64 v188; // [rsp+1E0h] [rbp-1E0h] BYREF
  __int128 v189; // [rsp+1E8h] [rbp-1D8h]
  __int64 v190; // [rsp+200h] [rbp-1C0h] BYREF
  __int128 v191; // [rsp+208h] [rbp-1B8h]
  __int64 v192[2]; // [rsp+220h] [rbp-1A0h] BYREF
  __int64 v193; // [rsp+230h] [rbp-190h] BYREF
  __int128 v194; // [rsp+238h] [rbp-188h]
  _QWORD v195[2]; // [rsp+250h] [rbp-170h] BYREF
  __int64 v196; // [rsp+260h] [rbp-160h] BYREF
  __int128 v197; // [rsp+268h] [rbp-158h]
  _QWORD *v198[2]; // [rsp+280h] [rbp-140h] BYREF
  __int64 v199; // [rsp+290h] [rbp-130h] BYREF
  __int64 v200; // [rsp+298h] [rbp-128h]
  _QWORD *v201; // [rsp+2B0h] [rbp-110h] BYREF
  __int128 v202; // [rsp+2B8h] [rbp-108h] BYREF
  __m128i v203; // [rsp+2C8h] [rbp-F8h] BYREF
  _DWORD v204[8]; // [rsp+2E0h] [rbp-E0h] BYREF
  _QWORD v205[2]; // [rsp+300h] [rbp-C0h] BYREF
  _QWORD v206[2]; // [rsp+310h] [rbp-B0h] BYREF
  _QWORD v207[2]; // [rsp+320h] [rbp-A0h] BYREF
  _QWORD v208[4]; // [rsp+330h] [rbp-90h] BYREF
  _QWORD v209[2]; // [rsp+350h] [rbp-70h] BYREF
  _QWORD v210[2]; // [rsp+360h] [rbp-60h] BYREF
  _QWORD v211[10]; // [rsp+370h] [rbp-50h] BYREF

  v167 = a1;
  v2 = *(_QWORD *)(a1 + 64);
  v211[3] = __readfsqword(0x28u);
  v3 = a2;
  LOBYTE(v4) = sub_9E450(v2, a2);
  if ( (_BYTE)v4 )
    return 0;
  v5 = v4;
  v162 = *(_DWORD *)(a2 + 4) & 0x80;
  if ( !v162 )
  {
    v6 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 != 4 )
    {
      if ( v6 > 4 )
      {
        v7 = 0;
        if ( v6 == 56 )
          goto LABEL_6;
        v7 = 0;
        if ( v6 - 8 <= 1 )
          goto LABEL_7;
LABEL_8:
        v8 = *(_QWORD *)(a2 + 24);
        v205[1] = 0;
        v206[1] = 0;
        v9 = *(_QWORD *)(v167 + 480);
        v207[1] = 0;
        v166 = *(char **)(v9 + 112);
        v205[0] = 0xFFFFFFFF00000000LL;
        v206[0] = 0xFFFFFFFF00000000LL;
        v207[0] = 0xFFFFFFFF00000000LL;
        v163 = v204;
        sub_32B920(v204, v8);
        if ( (unsigned __int8)sub_B3AB0((__int64)v166, v204, v3) )
        {
          v10 = (__int64)v163;
        }
        else
        {
          v10 = v3;
          if ( !v7 )
          {
LABEL_26:
            sub_118BA0(v207);
            sub_118BA0(v206);
            sub_118BA0(v205);
            return v5;
          }
        }
        if ( *(_DWORD *)v10 == 2 )
        {
          v164 = (char *)(v10 + 48);
          v151 = (char *)(v10 + 64);
          LODWORD(v160) = *(_DWORD *)(v10 + 68);
        }
        else
        {
          v164 = (char *)(v10 + 32);
          v151 = (char *)(v10 + 64);
          LODWORD(v160) = *(_DWORD *)(v10 + 36);
        }
        if ( *v164 == 1 && (unsigned __int8)sub_118AD0(v166, *((unsigned int *)v164 + 2))
          || *(_BYTE *)(v10 + 64) == 1 && (unsigned __int8)sub_118AD0(v166, *(unsigned int *)(v10 + 72))
          || ((v164[1] & 0x40) != 0 || (*(_BYTE *)(v10 + 65) & 0x40) != 0) && (*(_BYTE *)(v10 + 6) & 4) != 0 )
        {
          goto LABEL_26;
        }
        v11 = *(_DWORD *)v10 == 2;
        v168 = 0;
        v169 = 0;
        v12 = *(_QWORD *)(v167 + 64);
        n = *(_QWORD *)(v12 + 800);
        v13 = 1;
        if ( !v11 )
        {
          v13 = 0;
          if ( *v164 == 4 )
            v13 = **((_DWORD **)v164 + 1) == 2;
        }
        v14 = sub_B6470(v12, &v168, v167, v10, v164, n, v13, 1, nullptr);
        v15 = 1;
        if ( *(_DWORD *)v10 != 1 )
        {
          v15 = 0;
          if ( *(_BYTE *)(v10 + 64) == 4 )
            v15 = **(_DWORD **)(v10 + 72) == 2;
        }
        v16 = sub_B6470(*(_QWORD *)(v167 + 64), &v169, v167, v3, v151, n, v15, 1, nullptr);
        if ( v10 == v3 || (unsigned int)(*(_DWORD *)v3 - 56) <= 1 )
          goto LABEL_36;
        if ( *(_DWORD *)v3 != 10 )
        {
          if ( !under_debugger )
            sub_37E160(52920);
LABEL_348:
          BUG();
        }
        if ( v16 && ((get_tinfo_property() & 0x2F) == 0xD || (get_tinfo_property() & 0xF) == 9)
          || (unsigned __int8)sub_B6470(
                                *(_QWORD *)(v167 + 64),
                                &v168,
                                v167,
                                v3,
                                (char *)(*(_QWORD *)(v3 + 40) + 32LL),
                                n,
                                0,
                                0,
                                nullptr)
          && ((get_tinfo_property() & 0x2F) == 0xD || (get_tinfo_property() & 0xF) == 9) )
        {
          sub_119690(v3, v10);
          v17 = v167;
          v18 = *(_DWORD *)(v167 + 24);
          v19 = *(_QWORD *)(v167 + 64);
          LODWORD(v167) = v18;
          BYTE1(v18) &= ~2u;
          LOBYTE(v18) = v18 | 0x80;
          *(_DWORD *)(v17 + 24) = v18;
          sub_62DA0(v19, 1u, (__int64)"recognized structure copy: flatten low(shr)");
          v5 = 1;
        }
        else
        {
LABEL_36:
          v159.m128i_i8[0] = v16 | v14;
          if ( v16 | v14 )
          {
            if ( sub_B5220((__int64)v166) )
              v165.m128i_i32[0] = get_tinfo_size();
            else
              v165.m128i_i32[0] = 0;
            tinfo_size = 0;
            if ( sub_B5220((__int64)v166) )
              tinfo_size = get_tinfo_size();
            if ( v14 == 1 && (int)v160 < v165.m128i_i32[0] )
            {
              if ( (int)v160 >= tinfo_size )
              {
                v22 = tinfo_size;
                v21 = v165.m128i_i32[0];
                goto LABEL_47;
              }
            }
            else
            {
              if ( v16 != 1 || (int)v160 >= tinfo_size )
                goto LABEL_25;
              if ( (int)v160 >= v165.m128i_i32[0] )
                goto LABEL_216;
            }
            v21 = v165.m128i_i32[0];
            v22 = tinfo_size;
            if ( v165.m128i_i32[0] <= tinfo_size )
            {
LABEL_47:
              v165.m128i_i32[0] = v22;
              tinfo_size = v21;
              v23 = &v169;
              v139 = &v168;
LABEL_48:
              v170 = 0;
              if ( (get_tinfo_property() & 0x2F) == 0xD
                && (get_tinfo_property() & 0x2F) == 0xD
                && !(unsigned __int8)sub_B3EA0(v23, 0, 0, (unsigned int)tinfo_size, &v170) )
              {
                v136 = sub_B3EA0(v139, 0, 0, (unsigned int)v160, 0) ^ 1;
              }
              else if ( (_BYTE)v170 )
              {
                v86 = get_tinfo_size();
                v87 = v139;
                if ( tinfo_size == v86 )
                  v87 = &v170;
                v136 = v159.m128i_i8[0];
                v139 = v87;
              }
              else
              {
                v136 = v159.m128i_i8[0];
              }
              if ( *v164 == 2 && (get_tinfo_property() & 0xF) != 9 && !(unsigned __int8)sub_B3E30(*v139, 2) )
              {
                v208[0] = 0;
                tinfo_get_innermost_udm();
                if ( !LOBYTE(v208[0])
                  || v201
                  || (get_tinfo_property() & 0xF) != 9 && !(unsigned __int8)sub_B3E30(v208[0], 2)
                  || (tinfo_size = get_tinfo_size(), tinfo_size <= v165.m128i_i32[0]) )
                {
                  clear_tinfo_t();
                  goto LABEL_215;
                }
                copy_tinfo_t();
                clear_tinfo_t();
              }
              tinfo_property = get_tinfo_property();
              if ( *v164 == 5
                && *(_QWORD *)(*((_QWORD *)v164 + 1) + 8LL) >= *(_QWORD *)(*(_QWORD *)(v167 + 64) + 144LL)
                && (!sub_B5220((__int64)v166) || get_tinfo_size() < (unsigned __int64)tinfo_size) )
              {
LABEL_215:
                clear_tinfo_t();
                goto LABEL_25;
              }
              sub_11F840(&v174, v164);
              v171 = 0;
              if ( *(_DWORD *)v10 != 2
                && !(unsigned __int8)sub_B4A10((__int64)v166, &v174, &v171, n, v164, tinfo_size, (__int64)v139) )
              {
                v5 = 0;
                goto LABEL_214;
              }
              if ( v174 == 2 && (unsigned __int8)sub_118A50(v151, *(_QWORD *)(v167 + 480), 0) )
              {
                v88 = 0;
                v89 = 8 * (tinfo_size - *((_DWORD *)v164 + 1));
                if ( (unsigned __int64)v89 <= 0x3F )
                  v88 = *(_QWORD *)(v177 + 16) << v89;
                *(_QWORD *)(v177 + 16) = v88;
              }
              v25 = v151;
              v26 = &v178;
              v130 = &v178;
              sub_11F840(&v178, v151);
              v172 = nullptr;
              if ( *(_DWORD *)v10 == 1 )
              {
                v155 = v171;
                if ( !v171 )
                  goto LABEL_64;
              }
              else
              {
                v25 = &v178;
                v26 = v166;
                if ( !(unsigned __int8)sub_B4A10((__int64)v166, &v178, &v172, n, v151, tinfo_size, (__int64)v139) )
                {
                  v5 = 0;
                  goto LABEL_213;
                }
                v155 = v171;
                if ( !v171 )
                {
LABEL_62:
                  if ( v172 && !v172[1] )
                  {
                    v111 = *v172;
                    v112 = *((int *)v172 + 4);
                    if ( *(_QWORD *)(*v172 + 440) < v112 )
                      sub_B39C0(v26, v25, v111, v27, v28);
                    v136 |= *(_DWORD *)(*(_QWORD *)(v111 + 432) + 104 * v112 + 88) == tinfo_size;
                  }
LABEL_64:
                  v181[0] = 0;
                  v181[1] = 0;
                  sub_5FC80(v181, 0, (int)v160);
                  v183 = 0;
                  v129 = &v182;
                  v182 = 0;
                  v182 = qvector_reserve();
                  *(_QWORD *)(v182 + 8 * v183) = v10;
                  *(_QWORD *)&v183 = v183 + 1;
                  v29 = *(_QWORD *)(v10 + 24);
                  v132 = v174;
                  v209[0] = 0xFFFFFFFF00000000LL;
                  v210[0] = 0xFFFFFFFF00000000LL;
                  v211[0] = 0xFFFFFFFF00000000LL;
                  v209[1] = 0;
                  v210[1] = 0;
                  v211[1] = 0;
                  LOBYTE(v131) = v174 == 2;
                  sub_32B920(v208, v29);
                  v144 = tinfo_property;
                  v134 = 2;
LABEL_65:
                  v30 = v10;
                  while ( 1 )
                  {
                    do
                    {
                      v31 = *(_QWORD *)(v30 + 16);
                      if ( v159.m128i_i8[0] )
                        v31 = *(_QWORD *)(v30 + 8);
                      v30 = v31;
                      if ( !v31 || (v165.m128i_i32[0] = *(_DWORD *)(v31 + 4) & 0x80) != 0 )
                      {
LABEL_140:
                        if ( (_DWORD)v160 != tinfo_size && v134 != 1 )
                        {
                          v134 = 1;
                          v159.m128i_i8[0] = 0;
                          goto LABEL_65;
                        }
LABEL_97:
                        if ( v136 )
                        {
                          if ( (_QWORD)v183 != 1 )
                          {
                            sub_609A0(v181, 0);
                            if ( (unsigned __int8)sub_60810(v181, 0, v144) )
                            {
                              v173 = 0;
                              goto LABEL_101;
                            }
                            if ( (get_tinfo_property() & 0x2F) == 0xD )
                            {
                              v201 = nullptr;
                              v203.m128i_i64[0] = 0;
                              v203.m128i_i32[2] = -1;
                              v202 = 0;
                              if ( !(unsigned __int8)calc_tinfo_gaps() )
                              {
                                if ( v201 )
                                {
                                  *(_QWORD *)&v202 = 0;
                                  qfree();
                                }
                                goto LABEL_292;
                              }
                              v198[0] = nullptr;
                              v198[1] = nullptr;
                              sub_5FC80((__int64 *)v198, 0, v144);
                              v116 = v201;
                              v117 = &v201[2 * v202];
                              if ( v117 != v201 )
                              {
                                do
                                {
                                  v118 = *v116;
                                  v119 = *((_DWORD *)v116 + 2);
                                  v165.m128i_i64[0] = (__int64)v117;
                                  sub_60240((__int64 *)v198, v118, v119 - v118);
                                  v117 = (_QWORD *)v165.m128i_i64[0];
                                  v116 += 2;
                                }
                                while ( (_QWORD *)v165.m128i_i64[0] != v116 );
                              }
                              v120 = sub_60620(v198, v181);
                              qfree();
                              if ( v201 )
                              {
                                *(_QWORD *)&v202 = 0;
                                qfree();
                              }
                              v173 = 0;
                              if ( v120 )
                              {
LABEL_101:
                                v39 = v183;
                                v40 = (int)v183;
                                v184 = 0;
                                v186 = 0;
                                v188 = 0;
                                v190 = 0;
                                v133 = v183;
                                v185 = 0;
                                v187 = 0;
                                v189 = 0;
                                v191 = 0;
                                sub_BF640(&v184, (int)v183);
                                sub_BF640(&v186, v40);
                                sub_BF640(&v188, v40);
                                sub_BF640(&v190, v40);
                                v192[0] = 0;
                                v192[1] = 0;
                                v193 = 0;
                                v195[0] = 0;
                                v195[1] = 0;
                                v196 = 0;
                                v194 = 0;
                                v197 = 0;
                                if ( v39 <= 0 )
                                {
                                  v154 = 0;
                                }
                                else
                                {
                                  v152 = -40;
                                  v41 = v39;
                                  v42 = 0;
                                  LODWORD(v131) = v41 - 1;
                                  v145 = (unsigned int)(v41 - 1);
                                  v160 = (__int64 *)&v201;
                                  while ( 1 )
                                  {
                                    v43 = *(_QWORD *)(v182 + 8 * v42);
                                    v159.m128i_i64[0] = (__int64)v192;
                                    v165.m128i_i64[0] = (__int64)v195;
                                    sub_120480(v160, v167, v43, 1);
                                    v44 = (__int64 *)(v152 + 40 + v184);
                                    v156 = v152 + 40;
                                    sub_606D0(v44, v160);
                                    v45 = *((_QWORD *)&v202 + 1);
                                    v46 = _mm_loadu_si128(&v203);
                                    *((_QWORD *)&v202 + 1) = 0;
                                    v203 = 0;
                                    if ( v44[2] )
                                    {
                                      v44[3] = 0;
                                      v159.m128i_i64[0] = v45;
                                      v165 = v46;
                                      qfree();
                                      v45 = v159.m128i_i64[0];
                                      v46 = _mm_load_si128(&v165);
                                    }
                                    v44[2] = v45;
                                    *(__m128i *)(v44 + 3) = v46;
                                    if ( *((_QWORD *)&v202 + 1) )
                                    {
                                      v203.m128i_i64[0] = 0;
                                      qfree();
                                    }
                                    qfree();
                                    v47 = *(_QWORD *)(v182 + 8 * v42);
                                    v159.m128i_i64[0] = (__int64)v192;
                                    v165.m128i_i64[0] = (__int64)v195;
                                    sub_123820(v160, v167, v47, 1);
                                    v48 = v186 + v156;
                                    sub_606D0((__int64 *)(v186 + v156), v160);
                                    v49 = *((_QWORD *)&v202 + 1);
                                    v50 = _mm_loadu_si128(&v203);
                                    *((_QWORD *)&v202 + 1) = 0;
                                    v203 = 0;
                                    if ( *(_QWORD *)(v48 + 16) )
                                    {
                                      *(_QWORD *)(v48 + 24) = 0;
                                      v159.m128i_i64[0] = v49;
                                      v165 = v50;
                                      qfree();
                                      v49 = v159.m128i_i64[0];
                                      v50 = _mm_load_si128(&v165);
                                    }
                                    *(_QWORD *)(v48 + 16) = v49;
                                    *(__m128i *)(v48 + 24) = v50;
                                    if ( *((_QWORD *)&v202 + 1) )
                                    {
                                      v203.m128i_i64[0] = 0;
                                      qfree();
                                    }
                                    qfree();
                                    if ( v42 )
                                    {
                                      na = (__int64 *)(v152 + v184);
                                      v140 = v188 + v152;
                                      v51 = (__int64 *)(v188 + v156);
                                      v159.m128i_i64[0] = (__int64)v192;
                                      v165.m128i_i64[0] = (__int64)v195;
                                      sub_606D0((__int64 *)(v188 + v156), (__int64 *)(v188 + v152));
                                      v52 = 0;
                                      v53 = *(_QWORD *)(v140 + 24);
                                      if ( v53 )
                                      {
                                        v135 = v140;
                                        v138 = *(_QWORD *)(v140 + 24);
                                        v159.m128i_i64[0] = (__int64)v192;
                                        v165.m128i_i64[0] = (__int64)v195;
                                        v142 = 16 * v53;
                                        v95 = (void *)qalloc_or_throw();
                                        v96 = memcpy(v95, *(const void **)(v135 + 16), v142);
                                        v53 = v138;
                                        v52 = (__int64)v96;
                                      }
                                      v54 = _mm_unpacklo_epi64((__m128i)v53, (__m128i)v53);
                                      if ( v51[2] )
                                      {
                                        v51[3] = 0;
                                        v165.m128i_i64[0] = v52;
                                        v159 = v54;
                                        qfree();
                                        v54 = _mm_load_si128(&v159);
                                        v52 = v165.m128i_i64[0];
                                      }
                                      v51[2] = v52;
                                      *(__m128i *)(v51 + 3) = v54;
                                      v159.m128i_i64[0] = (__int64)v192;
                                      v165.m128i_i64[0] = (__int64)v195;
                                      sub_60080(v51, na);
                                      v165.m128i_i64[0] = (__int64)v195;
                                      v159.m128i_i64[0] = (__int64)v192;
                                      sub_311F30(v51 + 2, na + 2);
                                      v55 = v152;
                                      v153 = (__int64 *)(v152 + v186);
                                      v56 = (__int64 *)(v190 + v156);
                                      nb = v190 + v55;
                                      v159.m128i_i64[0] = (__int64)v192;
                                      v165.m128i_i64[0] = (__int64)v195;
                                      sub_606D0((__int64 *)(v190 + v156), (__int64 *)(v190 + v55));
                                      v57 = 0;
                                      v58 = *(_QWORD *)(nb + 24);
                                      if ( v58 )
                                      {
                                        v137 = nb;
                                        v141 = *(_QWORD *)(nb + 24);
                                        v159.m128i_i64[0] = (__int64)v192;
                                        v165.m128i_i64[0] = (__int64)v195;
                                        nd = 16 * v58;
                                        v93 = (void *)qalloc_or_throw();
                                        v94 = memcpy(v93, *(const void **)(v137 + 16), nd);
                                        v58 = v141;
                                        v57 = (__int64)v94;
                                      }
                                      v59 = _mm_unpacklo_epi64((__m128i)v58, (__m128i)v58);
                                      if ( v56[2] )
                                      {
                                        v56[3] = 0;
                                        v165.m128i_i64[0] = v57;
                                        v159 = v59;
                                        qfree();
                                        v59 = _mm_load_si128(&v159);
                                        v57 = v165.m128i_i64[0];
                                      }
                                      v56[2] = v57;
                                      *(__m128i *)(v56 + 3) = v59;
                                      v159.m128i_i64[0] = (__int64)v192;
                                      v165.m128i_i64[0] = (__int64)v195;
                                      sub_60080(v56, v153);
                                      v159.m128i_i64[0] = (__int64)v192;
                                      v165.m128i_i64[0] = (__int64)v195;
                                      sub_311F30(v56 + 2, v153 + 2);
                                    }
                                    if ( v145 == v42 )
                                      break;
                                    ++v42;
                                    v152 = v156;
                                  }
                                  v157 = (int)v131;
                                  if ( (_DWORD)v133 == 1 )
                                  {
                                    v154 = 0;
                                  }
                                  else
                                  {
                                    v124 = (unsigned int)v131;
                                    v99 = v182;
                                    v60 = 0;
                                    v154 = 0;
                                    while ( 1 )
                                    {
                                      v143 = v60;
                                      LODWORD(v129) = v60 + 1;
                                      v100 = *(_QWORD *)(*(_QWORD *)(v99 + 8 * v60) + 8LL);
                                      v133 = 8 * v60 + 8;
                                      if ( *(_QWORD *)(v99 + 8 * v60 + 8) != v100 )
                                        break;
                                      v125 = v60 + 1;
LABEL_147:
                                      v60 = v125;
                                      if ( v124 == v125 )
                                        goto LABEL_148;
                                    }
                                    v125 = v60 + 1;
                                    nc = 40 * (v60 + 1);
                                    v159.m128i_i64[0] = (__int64)v192;
                                    v165.m128i_i64[0] = (__int64)v195;
                                    while ( 1 )
                                    {
                                      v102 = v167;
                                      sub_123820(v198, v167, v100, 1);
                                      v103 = v102;
                                      v104 = v160;
                                      sub_120480(v160, v103, v100, 1);
                                      sub_60080(v192, v104);
                                      v131 = &v193;
                                      sub_311F30(&v193, (char *)&v202 + 8);
                                      sub_60080((__int64 *)v165.m128i_i64[0], (__int64 *)v198);
                                      sub_311F30(&v196, &v199);
                                      if ( v143 < v157 )
                                      {
                                        v128 = v188 + nc;
                                        if ( (unsigned __int8)sub_60580(v198, (_QWORD *)(v188 + nc))
                                          || (unsigned __int8)sub_3136F0(&v199, v128 + 16)
                                          || (v128 = v190 + nc, (unsigned __int8)sub_60580(v198, (_QWORD *)(v190 + nc)))
                                          || (unsigned __int8)sub_3136F0(&v199, v128 + 16)
                                          || (v107 = v190 + nc, (unsigned __int8)sub_60580(v160, (_QWORD *)(v190 + nc)))
                                          || (unsigned __int8)sub_3136F0((char *)&v202 + 8, v107 + 16) )
                                        {
                                          v157 = v143;
                                        }
                                      }
                                      v101 = v184 + nc;
                                      if ( (unsigned __int8)sub_60580(v165.m128i_i64[0], (_QWORD *)(v184 + nc))
                                        || (unsigned __int8)sub_3136F0(&v196, v101 + 16)
                                        || (v105 = v186 + nc,
                                            (unsigned __int8)sub_60580(v165.m128i_i64[0], (_QWORD *)(v186 + nc)))
                                        || (unsigned __int8)sub_3136F0(&v196, v105 + 16)
                                        || (v106 = v186 + nc, (unsigned __int8)sub_60580(v192, (_QWORD *)(v186 + nc)))
                                        || (unsigned __int8)sub_3136F0(&v193, v106 + 16) )
                                      {
                                        v154 = (int)v129;
                                      }
                                      if ( v154 > v157 )
                                        break;
                                      if ( *((_QWORD *)&v202 + 1) )
                                      {
                                        v203.m128i_i64[0] = 0;
                                        qfree();
                                      }
                                      qfree();
                                      if ( v199 )
                                      {
                                        v200 = 0;
                                        qfree();
                                      }
                                      qfree();
                                      v99 = v182;
                                      v100 = *(_QWORD *)(v100 + 8);
                                      if ( v100 == *(_QWORD *)(v182 + v133) )
                                        goto LABEL_147;
                                    }
                                    if ( *((_QWORD *)&v202 + 1) )
                                    {
                                      v203.m128i_i64[0] = 0;
                                      qfree();
                                    }
                                    qfree();
                                    if ( v199 )
                                    {
                                      v200 = 0;
                                      qfree();
                                    }
                                    qfree();
                                    v154 = -1;
                                  }
LABEL_148:
                                  if ( v196 )
                                  {
                                    *(_QWORD *)&v197 = 0;
                                    qfree();
                                  }
                                }
                                qfree();
                                if ( v193 )
                                {
                                  *(_QWORD *)&v194 = 0;
                                  qfree();
                                }
                                qfree();
                                if ( v190 )
                                {
                                  v61 = 0;
                                  if ( (_QWORD)v191 )
                                  {
                                    v165.m128i_i64[0] = v3;
                                    v62 = v191;
                                    do
                                    {
                                      v63 = v190 + 40 * v61;
                                      if ( *(_QWORD *)(v63 + 16) )
                                      {
                                        *(_QWORD *)(v63 + 24) = 0;
                                        qfree();
                                      }
                                      ++v61;
                                      qfree();
                                    }
                                    while ( v62 != v61 );
                                    v3 = v165.m128i_i64[0];
                                  }
                                  *(_QWORD *)&v191 = 0;
                                  qfree();
                                }
                                if ( v188 )
                                {
                                  v64 = 0;
                                  if ( (_QWORD)v189 )
                                  {
                                    v165.m128i_i64[0] = v3;
                                    v65 = v189;
                                    do
                                    {
                                      v66 = v188 + 40 * v64;
                                      if ( *(_QWORD *)(v66 + 16) )
                                      {
                                        *(_QWORD *)(v66 + 24) = 0;
                                        qfree();
                                      }
                                      ++v64;
                                      qfree();
                                    }
                                    while ( v65 != v64 );
                                    v3 = v165.m128i_i64[0];
                                  }
                                  *(_QWORD *)&v189 = 0;
                                  qfree();
                                }
                                if ( v186 )
                                {
                                  v67 = 0;
                                  if ( (_QWORD)v187 )
                                  {
                                    v165.m128i_i64[0] = v3;
                                    v68 = v187;
                                    do
                                    {
                                      v69 = v186 + 40 * v67;
                                      if ( *(_QWORD *)(v69 + 16) )
                                      {
                                        *(_QWORD *)(v69 + 24) = 0;
                                        qfree();
                                      }
                                      ++v67;
                                      qfree();
                                    }
                                    while ( v68 != v67 );
                                    v3 = v165.m128i_i64[0];
                                  }
                                  *(_QWORD *)&v187 = 0;
                                  qfree();
                                }
                                if ( v184 )
                                {
                                  v70 = 0;
                                  if ( (_QWORD)v185 )
                                  {
                                    v165.m128i_i64[0] = v3;
                                    v71 = v185;
                                    do
                                    {
                                      v72 = v184 + 40 * v70;
                                      if ( *(_QWORD *)(v72 + 16) )
                                      {
                                        *(_QWORD *)(v72 + 24) = 0;
                                        qfree();
                                      }
                                      ++v70;
                                      qfree();
                                    }
                                    while ( v71 != v70 );
                                    v3 = v165.m128i_i64[0];
                                  }
                                  *(_QWORD *)&v185 = 0;
                                  qfree();
                                }
                                if ( v154 == -1 )
                                  goto LABEL_209;
                                v73 = *(_QWORD *)(v182 + 8LL * v154);
                                if ( v10 != v3 )
                                  sub_119690(v10, v3);
                                if ( (get_tinfo_property() & 0x2F) == 0xD )
                                {
                                  if ( *(_DWORD *)v10 == 2 )
                                    goto LABEL_310;
                                  v74 = *(__m128i **)(v167 + 64);
                                  v75 = v174;
                                  if ( (v174 & 0xFB) == 1 )
                                  {
                                    sub_1C4E50(&v174, *(_QWORD *)(v167 + 64), v139);
                                    v75 = v174;
                                  }
                                  v175 |= 2u;
                                  if ( v75 == 15 )
                                  {
                                    if ( *(_DWORD *)v10 == 1 )
                                      goto LABEL_193;
LABEL_310:
                                    if ( (v178 & 0xFB) == 1 )
                                      sub_1C4E50(v130, *(_QWORD *)(v167 + 64), v139);
                                    v179 |= 2u;
                                    if ( v178 != 15 || v174 != 15 )
                                      goto LABEL_194;
LABEL_199:
                                    v77 = v176;
LABEL_200:
                                    v78 = (__int64)v166;
                                    sub_126950(&v174, v166, v77, 2);
                                    sub_126950(v130, v78, (unsigned int)v180, 2);
                                    v79 = v164;
                                    sub_118810(v164, &v174);
                                    sub_118810(v151, v130);
                                    v80 = get_tinfo_property();
                                    v81 = *(_DWORD *)(v10 + 4);
                                    if ( (v80 & 0xF) == 9 )
                                    {
                                      *(_DWORD *)(v10 + 4) = v81 | 0x10;
                                      if ( *v79 == 2 )
                                      {
                                        v113 = *((int *)v164 + 1);
                                        v114 = *((_QWORD *)v164 + 1) + 16LL;
                                        v165.m128i_i64[0] = *((_QWORD *)v164 + 1);
                                        if ( (unsigned __int8)sub_119160(&v174, v166, v114, v113) )
                                          sub_118810(v164, &v174);
                                      }
                                    }
                                    else
                                    {
                                      *(_BYTE *)(v10 + 33) &= ~4u;
                                      *(_BYTE *)(v10 + 65) &= ~4u;
                                      *(_DWORD *)(v10 + 4) = v81 & 0xFFFFFFEF;
                                    }
                                    sub_1193D0(v10, v166);
                                    if ( v73 != v10 )
                                    {
                                      sub_119690(v73, v10);
                                      *(_QWORD *)(v73 + 24) = *(_QWORD *)(v10 + 24);
                                    }
                                    v82 = 0;
                                    if ( (_QWORD)v183 )
                                    {
                                      do
                                      {
                                        if ( v154 != v162 )
                                          sub_1193A0(*(_QWORD *)(v182 + 8 * v82));
                                        v82 = ++v162;
                                      }
                                      while ( v162 < (unsigned __int64)v183 );
                                    }
                                    v83 = v167;
                                    v84 = *(_DWORD *)(v167 + 24);
                                    v85 = *(_QWORD *)(v167 + 64);
                                    LODWORD(v167) = v84;
                                    BYTE1(v84) &= ~2u;
                                    *(_DWORD *)(v83 + 24) = v84 | 0x180;
                                    sub_62DA0(v85, 1u, (__int64)"recognized structure copy");
                                    v5 = v136;
                                    goto LABEL_209;
                                  }
                                  if ( v75 != 4 || (v115 = v177, *(_DWORD *)v177 != 2) || !v177 )
                                  {
                                    if ( *(_DWORD *)v10 != 1 )
                                      goto LABEL_310;
                                    goto LABEL_194;
                                  }
                                  v201 = (_QWORD *)(v177 + 24);
                                  v160 = (__int64 *)&v201;
                                  sub_C3DB0(v74 + 87, (unsigned __int64 *)(v177 + 24), &v201);
                                  copy_tinfo_t();
                                  *(_BYTE *)(v115 + 65) |= 2u;
                                  *(_DWORD *)(v115 + 4) &= ~0x10u;
                                  if ( *(_BYTE *)(v115 + 48) == 10 )
                                  {
                                    v121 = *(_QWORD *)(v115 + 56);
                                    if ( *(_BYTE *)v121 == 6 )
                                    {
                                      v201 = nullptr;
                                      v122 = *(_QWORD *)(v121 + 8);
                                      if ( !(unsigned __int8)sub_37C1A0(v74[93].m128i_i64[1], v122, v160, 3)
                                        || (get_tinfo_property() & 0x2F) != 0xD )
                                      {
                                        sub_37CF90(
                                          v74[93].m128i_i64[1],
                                          v122,
                                          (_DWORD)v139,
                                          3,
                                          0,
                                          v123,
                                          v124,
                                          (unsigned int)&v184,
                                          v125,
                                          (__int64)&v186,
                                          (unsigned int)&v188,
                                          (unsigned int)&v190,
                                          v128,
                                          (_DWORD)v129,
                                          (unsigned int)&v178,
                                          (_DWORD)v131,
                                          v133);
                                      }
                                      clear_tinfo_t();
                                    }
                                  }
                                  if ( *(_DWORD *)v10 != 1 )
                                    goto LABEL_310;
                                  if ( v174 == 15 )
                                  {
LABEL_193:
                                    if ( v178 != 15 )
                                      goto LABEL_194;
                                    goto LABEL_199;
                                  }
LABEL_194:
                                  v198[0] = (_QWORD *)(v73 + 24);
                                  v76 = (__m128i *)(*(_QWORD *)(v167 + 64) + 1392LL);
                                  v165.m128i_i64[0] = *(_QWORD *)(v167 + 64);
                                  sub_C3DB0(v76, (unsigned __int64 *)(v73 + 24), v198);
                                  copy_tinfo_t();
                                }
                                v77 = v176;
                                if ( v174 == 2 && tinfo_size > (int)v176 )
                                {
                                  if ( v176 != 8 )
                                  {
                                    if ( !under_debugger )
                                      sub_37E160(51791);
                                    goto LABEL_348;
                                  }
                                  sub_11C5E0(&v174, v166, 9, *(_QWORD *)(v10 + 24), (unsigned int)tinfo_size);
                                  goto LABEL_199;
                                }
                                goto LABEL_200;
                              }
                            }
                            else
                            {
LABEL_292:
                              v173 = 0;
                            }
                            v108 = sub_609A0(v181, 0);
                            if ( v108 == (unsigned int)sub_60920((__int64)v181) )
                            {
                              v109 = &v178;
                              if ( v139 != &v169 )
                                v109 = &v174;
                              if ( *v109 == 4
                                || (v165.m128i_i64[0] = *(_QWORD *)(v167 + 480),
                                    (unsigned __int8)sub_118A50(v109, v165.m128i_i64[0], 0) == *(_BYTE *)(v165.m128i_i64[0] + 145)) )
                              {
                                v110 = 0;
                              }
                              else
                              {
                                v110 = tinfo_size - v108;
                              }
                              if ( (unsigned __int8)sub_B3EA0(v139, v110, 0, v108, &v173)
                                && (get_tinfo_property() & 0xF) != 0xB )
                              {
                                if ( *(_DWORD *)v10 == 2 )
                                  goto LABEL_302;
                                sub_120F80(&v174);
                                if ( !(unsigned __int8)sub_B4A10(
                                                         (__int64)v166,
                                                         &v174,
                                                         &v171,
                                                         n,
                                                         v164,
                                                         v108,
                                                         (__int64)&v173) )
                                  goto LABEL_209;
                                if ( *(_DWORD *)v10 != 1 )
                                {
LABEL_302:
                                  sub_120F80(&v178);
                                  if ( !(unsigned __int8)sub_B4A10(
                                                           (__int64)v166,
                                                           &v178,
                                                           &v172,
                                                           n,
                                                           v151,
                                                           v108,
                                                           (__int64)&v173) )
                                    goto LABEL_209;
                                }
                                tinfo_size = v108;
                                v139 = &v173;
                                goto LABEL_101;
                              }
                            }
LABEL_209:
                            clear_tinfo_t();
                          }
                        }
                        else
                        {
                          v5 = 0;
                        }
                        sub_118BA0(v211);
                        sub_118BA0(v210);
                        sub_118BA0(v209);
                        if ( v182 )
                        {
                          *(_QWORD *)&v183 = 0;
                          qfree();
                        }
                        qfree();
LABEL_213:
                        sub_118BA0(v130);
LABEL_214:
                        sub_118BA0(&v174);
                        goto LABEL_215;
                      }
                      v32 = v208;
                      if ( !(unsigned __int8)sub_B3AB0((__int64)v166, v208, v31) )
                        v32 = (_QWORD *)v30;
                      if ( *(_DWORD *)v32 == 2 || (unsigned int)(*(_DWORD *)v32 - 8) <= 1 )
                        v158 = *((_DWORD *)v32 + 17);
                      else
                        v158 = *((_DWORD *)v32 + 9);
                      if ( !(unsigned __int8)sub_118A50(v32 + 8, *(_QWORD *)(v167 + 480), 0) )
                        v165.m128i_i32[0] = *((_DWORD *)v32 + 9) + (int)v160 >= v144;
                    }
                    while ( !(unsigned __int8)sub_B5740(v198, v167, v155, (int *)v10, (int *)v32, 0, v165.m128i_i8[0])
                         || !(unsigned __int8)sub_B5740(
                                                &v201,
                                                v167,
                                                (__int64)v172,
                                                (int *)v10,
                                                (int *)v32,
                                                1u,
                                                v165.m128i_i8[0]) );
                    if ( v198[0] == v201 )
                    {
                      v33 = tinfo_size;
LABEL_83:
                      if ( (__int64)v201 + v158 <= v33 )
                      {
                        if ( sub_9E450(*(_QWORD *)(v167 + 64), v30) || (*((_BYTE *)v32 + 32) == 2) != (_BYTE)v131 )
                          goto LABEL_140;
                        if ( v132 == 2 )
                        {
                          if ( (unsigned __int8)sub_60860(v181, (int)v201, v158) || v198[0] )
                            goto LABEL_140;
                          v90 = *((unsigned int *)v32 + 9);
                          LODWORD(v128) = (_DWORD)v201;
                          v91 = v32[5];
                          v165.m128i_i32[0] = (int)v201;
                          v127 = *(_QWORD *)(v167 + 480);
                          v126 = sub_325C90(*(_QWORD *)(v91 + 16), v90, 0);
                          if ( (unsigned __int8)sub_118A50(&v178, v127, 0) )
                            v165.m128i_i32[0] = v180 - v128 - *((_DWORD *)v32 + 9);
                          if ( v180 > 8 && *((_DWORD *)v32 + 9) + v165.m128i_i32[0] > 7 && v126 )
                            goto LABEL_140;
                          v92 = 0;
                          if ( (unsigned __int64)(8 * v165.m128i_i32[0]) < 0x40 )
                            v92 = v126 << (8 * v165.m128i_i8[0]);
                          *(_QWORD *)(v177 + 16) |= v92;
                        }
                        else
                        {
                          v34 = sub_60810(v181, (int)v201, v158);
                          if ( v158 == tinfo_size || v34 )
                            goto LABEL_140;
                        }
                        if ( !v136 )
                          v136 = sub_B3EA0(v139, v201, 0, (unsigned int)v158, 0) ^ 1;
                        sub_5FC80(v181, (int)v201, v158);
                        v35 = v183;
                        if ( v159.m128i_i8[0] )
                        {
                          v36 = 8 * v183;
                          v37 = v182 + 8 * v183;
                        }
                        else
                        {
                          v37 = v182;
                          v36 = 0;
                        }
                        if ( *((_QWORD *)&v183 + 1) < (unsigned __int64)(v183 + 1) )
                        {
                          v182 = qvector_reserve();
                          v37 = v182 + v36;
                          v35 = v183;
                        }
                        v165.m128i_i64[0] = v37;
                        memmove((void *)(v37 + 8), (const void *)v37, 8 * v35 - v36);
                        *(_QWORD *)v165.m128i_i64[0] = v30;
                        *(_QWORD *)&v183 = v183 + 1;
                        v38 = sub_60920((__int64)v181);
                        LODWORD(v160) = v38;
                        if ( v38 > tinfo_size )
                        {
                          if ( !under_debugger )
                            sub_37E160(52796);
                          goto LABEL_348;
                        }
                        if ( v38 == tinfo_size )
                          goto LABEL_97;
                      }
                    }
                    else if ( !v198[0] && v174 == 2 )
                    {
                      v33 = tinfo_size;
                      if ( (__int64)v201 < tinfo_size )
                        goto LABEL_83;
                    }
                  }
                }
              }
              if ( !*(_QWORD *)(v155 + 8) )
              {
                v97 = *(_QWORD *)v155;
                v98 = *(int *)(v155 + 16);
                if ( *(_QWORD *)(*(_QWORD *)v155 + 440LL) < v98 )
                  sub_B39C0(v26, v25, v97, v27, v28);
                v28 = *(_QWORD *)(v97 + 432);
                v27 = (unsigned int)tinfo_size;
                if ( tinfo_size == *(_DWORD *)(v28 + 104 * v98 + 88) )
                {
                  v136 = v159.m128i_i8[0];
                  goto LABEL_64;
                }
              }
              goto LABEL_62;
            }
LABEL_216:
            v23 = &v168;
            v139 = &v169;
            goto LABEL_48;
          }
        }
LABEL_25:
        clear_tinfo_t();
        clear_tinfo_t();
        goto LABEL_26;
      }
      if ( v6 - 1 > 1 )
      {
        v7 = 0;
        goto LABEL_8;
      }
    }
    v7 = 1;
LABEL_6:
    if ( (unsigned __int8)sub_182D90(v167, a2) )
    {
      sub_62DA0(*(_QWORD *)(v167 + 64), 1u, (__int64)"handle_inlined_memcpy_strcpy33");
      return 1;
    }
LABEL_7:
    if ( !(unsigned __int8)sub_184D40(v167, a2) )
      goto LABEL_8;
    sub_62DA0(*(_QWORD *)(v167 + 64), 1u, (__int64)"handle_inlined_memset58");
    return 1;
  }
  return v5;
}

