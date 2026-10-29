__int64 __fastcall sub_C8120(const __m128i *a1, __int64 a2, double a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  unsigned int v5; // eax
  unsigned int v6; // r12d
  unsigned int v7; // eax
  char v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r15
  bool v12; // zf
  __int64 v13; // rdi
  char v14; // al
  unsigned __int8 v15; // r14
  char v16; // al
  unsigned __int8 v17; // r13
  const __m128i *v18; // rcx
  __int32 v19; // eax
  __int64 v20; // rdi
  __int32 v22; // ecx
  __int32 v23; // eax
  __int64 *v24; // r14
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  int tinfo_property; // r14d
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // r13
  __int64 v32; // rax
  _QWORD *v33; // r14
  __int64 v34; // rcx
  char v35; // al
  __int64 v36; // rax
  __int64 v37; // r14
  __int64 v38; // rcx
  int v39; // eax
  int v40; // r14d
  unsigned __int64 v41; // r13
  __m128i v42; // xmm0
  int v43; // eax
  __int64 v44; // r14
  __int64 v45; // rdx
  __int64 *v46; // r13
  __int64 v47; // rax
  __m128i v48; // xmm0
  __int64 v49; // rdi
  __int64 v50; // rdx
  int v51; // r8d
  int v52; // r9d
  __int64 v53; // r13
  __int64 v54; // rax
  __int64 v55; // rdi
  int v56; // r8d
  int v57; // r9d
  __int64 v58; // rsi
  __int64 *v59; // r13
  __int64 v60; // rdx
  __int64 v61; // r9
  unsigned __int64 v62; // r8
  __int64 v63; // rdi
  __m128i v64; // xmm0
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 *v67; // r13
  __int64 v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // r9
  size_t v71; // r8
  __int64 v72; // rdi
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // r13
  __int64 v77; // r14
  __int64 *v78; // rbx
  __int64 v79; // rdi
  __int64 v80; // r13
  __int64 v81; // r14
  __int64 *v82; // rbx
  __int64 v83; // rdi
  __int64 v84; // r13
  __int64 v85; // r14
  __int64 *v86; // rbx
  __int64 v87; // rdi
  __int64 v88; // r13
  __int64 v89; // r14
  __int64 *v90; // rbx
  __int64 v91; // rdi
  __int64 v92; // r12
  __m128i *v93; // rbx
  unsigned __int8 v94; // al
  __m128i *v95; // rdi
  int v96; // edx
  __int64 v97; // r14
  unsigned __int8 *v98; // rbx
  char v99; // dl
  int v100; // eax
  __int64 v101; // rax
  const __m128i *v102; // rcx
  __int32 v103; // eax
  __int64 v104; // rdi
  __int64 v105; // rax
  __int64 *v106; // rdx
  __int64 v107; // rax
  int v108; // esi
  __int64 v109; // rax
  __int64 v110; // rax
  void *v111; // rax
  void *v112; // rax
  void *v113; // rax
  void *v114; // rax
  unsigned __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // r14
  size_t v118; // r13
  const __m128i *v119; // r13
  __int64 v120; // rsi
  __int64 *v121; // r13
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rdx
  __int64 v125; // rcx
  size_t v126; // r13
  size_t v127; // r13
  size_t v128; // r13
  int v129; // r14d
  unsigned __int8 *v130; // rdi
  int v131; // eax
  unsigned __int64 v132; // rax
  __int64 v133; // rcx
  _BYTE *v134; // rdx
  __int64 v135; // r14
  _QWORD *v136; // r14
  _QWORD *v137; // rcx
  __int64 v138; // rax
  int v139; // edx
  char v140; // r13
  __int64 v141; // rax
  unsigned __int64 v142; // r13
  __int64 v143; // [rsp+10h] [rbp-3B0h]
  __int64 v144; // [rsp+20h] [rbp-3A0h]
  __int64 v145; // [rsp+28h] [rbp-398h]
  int v146; // [rsp+30h] [rbp-390h]
  size_t v147; // [rsp+30h] [rbp-390h]
  size_t v148; // [rsp+30h] [rbp-390h]
  int v149; // [rsp+38h] [rbp-388h]
  bool v150; // [rsp+48h] [rbp-378h]
  int v151; // [rsp+48h] [rbp-378h]
  unsigned __int8 v152; // [rsp+50h] [rbp-370h]
  int v153; // [rsp+50h] [rbp-370h]
  __int64 v154; // [rsp+50h] [rbp-370h]
  int v155; // [rsp+58h] [rbp-368h]
  size_t v156; // [rsp+58h] [rbp-368h]
  unsigned __int8 v157; // [rsp+67h] [rbp-359h]
  size_t v158; // [rsp+68h] [rbp-358h]
  unsigned __int64 v159; // [rsp+68h] [rbp-358h]
  __int64 *v160; // [rsp+78h] [rbp-348h]
  size_t v161; // [rsp+80h] [rbp-340h]
  size_t v162; // [rsp+80h] [rbp-340h]
  __int64 v163; // [rsp+80h] [rbp-340h]
  int v164; // [rsp+80h] [rbp-340h]
  int v165; // [rsp+90h] [rbp-330h]
  __int64 v166; // [rsp+90h] [rbp-330h]
  _QWORD **n; // [rsp+98h] [rbp-328h]
  size_t na; // [rsp+98h] [rbp-328h]
  size_t nb; // [rsp+98h] [rbp-328h]
  __int64 nd; // [rsp+98h] [rbp-328h]
  size_t nc; // [rsp+98h] [rbp-328h]
  char *v172; // [rsp+A8h] [rbp-318h]
  __int64 v173; // [rsp+B0h] [rbp-310h]
  __int64 v174; // [rsp+B0h] [rbp-310h]
  int v175; // [rsp+B0h] [rbp-310h]
  int *v176; // [rsp+B8h] [rbp-308h]
  __int64 v177; // [rsp+B8h] [rbp-308h]
  int v178; // [rsp+B8h] [rbp-308h]
  int v179; // [rsp+C8h] [rbp-2F8h]
  __m128i v180; // [rsp+D0h] [rbp-2F0h] BYREF
  const void **v181; // [rsp+E0h] [rbp-2E0h]
  int tinfo_size; // [rsp+E8h] [rbp-2D8h]
  int v183; // [rsp+ECh] [rbp-2D4h]
  _DWORD *v184; // [rsp+F0h] [rbp-2D0h]
  unsigned __int8 *v185; // [rsp+F8h] [rbp-2C8h]
  __m128i v186; // [rsp+100h] [rbp-2C0h] BYREF
  __int64 v187; // [rsp+110h] [rbp-2B0h]
  const __m128i *v188; // [rsp+118h] [rbp-2A8h]
  __int64 v189; // [rsp+120h] [rbp-2A0h] BYREF
  __int64 v190; // [rsp+128h] [rbp-298h] BYREF
  __int64 v191; // [rsp+130h] [rbp-290h] BYREF
  __int64 *v192; // [rsp+138h] [rbp-288h] BYREF
  __int64 *v193; // [rsp+140h] [rbp-280h] BYREF
  __int64 v194; // [rsp+148h] [rbp-278h] BYREF
  unsigned __int8 v195; // [rsp+150h] [rbp-270h] BYREF
  char v196; // [rsp+151h] [rbp-26Fh]
  int v197; // [rsp+154h] [rbp-26Ch]
  __int64 v198; // [rsp+158h] [rbp-268h]
  unsigned __int8 v199; // [rsp+160h] [rbp-260h] BYREF
  char v200; // [rsp+161h] [rbp-25Fh]
  int v201; // [rsp+164h] [rbp-25Ch]
  __int64 v202[2]; // [rsp+170h] [rbp-250h] BYREF
  __int64 v203; // [rsp+180h] [rbp-240h] BYREF
  __int128 v204; // [rsp+188h] [rbp-238h]
  __int64 v205; // [rsp+1A0h] [rbp-220h] BYREF
  __int128 v206; // [rsp+1A8h] [rbp-218h]
  __int64 v207; // [rsp+1C0h] [rbp-200h] BYREF
  __int128 v208; // [rsp+1C8h] [rbp-1F8h]
  __int64 v209; // [rsp+1E0h] [rbp-1E0h] BYREF
  __int128 v210; // [rsp+1E8h] [rbp-1D8h]
  __int64 v211; // [rsp+200h] [rbp-1C0h] BYREF
  __int128 v212; // [rsp+208h] [rbp-1B8h]
  __int64 v213[2]; // [rsp+220h] [rbp-1A0h] BYREF
  unsigned __int64 *v214; // [rsp+230h] [rbp-190h] BYREF
  __int128 v215; // [rsp+238h] [rbp-188h]
  __int64 v216[2]; // [rsp+250h] [rbp-170h] BYREF
  unsigned __int64 *v217; // [rsp+260h] [rbp-160h] BYREF
  __int128 v218; // [rsp+268h] [rbp-158h]
  _QWORD *v219[2]; // [rsp+280h] [rbp-140h] BYREF
  __int64 *v220; // [rsp+290h] [rbp-130h] BYREF
  __int64 v221; // [rsp+298h] [rbp-128h]
  _QWORD *v222; // [rsp+2B0h] [rbp-110h] BYREF
  __int128 v223; // [rsp+2B8h] [rbp-108h] BYREF
  __m128i v224; // [rsp+2C8h] [rbp-F8h] BYREF
  _DWORD v225[8]; // [rsp+2E0h] [rbp-E0h] BYREF
  _QWORD v226[2]; // [rsp+300h] [rbp-C0h] BYREF
  _QWORD v227[2]; // [rsp+310h] [rbp-B0h] BYREF
  _QWORD v228[2]; // [rsp+320h] [rbp-A0h] BYREF
  _QWORD v229[4]; // [rsp+330h] [rbp-90h] BYREF
  _QWORD v230[2]; // [rsp+350h] [rbp-70h] BYREF
  _QWORD v231[2]; // [rsp+360h] [rbp-60h] BYREF
  _QWORD v232[10]; // [rsp+370h] [rbp-50h] BYREF

  v188 = a1;
  v3 = a1[4].m128i_i64[0];
  v232[3] = __readfsqword(0x28u);
  v4 = a2;
  LOBYTE(v5) = sub_A2650(v3, a2);
  if ( (_BYTE)v5 )
    return 0;
  v6 = v5;
  v183 = *(_DWORD *)(a2 + 4) & 0x80;
  if ( !v183 )
  {
    v7 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 != 4 )
    {
      if ( v7 > 4 )
      {
        v8 = 0;
        if ( v7 == 56 )
          goto LABEL_6;
        v8 = 0;
        if ( v7 - 8 <= 1 )
        {
LABEL_7:
          if ( !(unsigned __int8)sub_188F40((__int64)v188, a2) )
            goto LABEL_8;
LABEL_127:
          sub_66FA0(v188[4].m128i_i64[0], 1);
          return 1;
        }
LABEL_8:
        v9 = *(_QWORD *)(a2 + 24);
        v226[1] = 0;
        v227[1] = 0;
        v10 = v188[30].m128i_i64[0];
        v228[1] = 0;
        v187 = *(_QWORD *)(v10 + 112);
        v226[0] = 0xFFFFFFFF00000000LL;
        v227[0] = 0xFFFFFFFF00000000LL;
        v228[0] = 0xFFFFFFFF00000000LL;
        v184 = v225;
        sub_330970((__int64)v225, v9);
        if ( (unsigned __int8)sub_B7CB0(v187, v225, v4) )
        {
          v11 = (__int64)v184;
        }
        else
        {
          v11 = v4;
          if ( !v8 )
          {
LABEL_26:
            sub_11CDA0((__int64)v228);
            sub_11CDA0((__int64)v227);
            sub_11CDA0((__int64)v226);
            return v6;
          }
        }
        if ( *(_DWORD *)v11 == 2 )
        {
          v185 = (unsigned __int8 *)(v11 + 48);
          v172 = (char *)(v11 + 64);
          LODWORD(v181) = *(_DWORD *)(v11 + 68);
        }
        else
        {
          v185 = (unsigned __int8 *)(v11 + 32);
          v172 = (char *)(v11 + 64);
          LODWORD(v181) = *(_DWORD *)(v11 + 36);
        }
        if ( *v185 == 1 && (unsigned __int8)sub_11CCD0(v187, *((_DWORD *)v185 + 2))
          || *(_BYTE *)(v11 + 64) == 1 && (unsigned __int8)sub_11CCD0(v187, *(_DWORD *)(v11 + 72))
          || ((v185[1] & 0x40) != 0 || (*(_BYTE *)(v11 + 65) & 0x40) != 0) && (*(_BYTE *)(v11 + 6) & 4) != 0 )
        {
          goto LABEL_26;
        }
        v12 = *(_DWORD *)v11 == 2;
        v189 = 0;
        v190 = 0;
        v13 = v188[4].m128i_i64[0];
        n = *(_QWORD ***)(v13 + 800);
        v14 = 1;
        if ( !v12 )
        {
          v14 = 0;
          if ( *v185 == 4 )
            v14 = **((_DWORD **)v185 + 1) == 2;
        }
        v15 = sub_BA670(v13, &v189, (__int64)v188, v11, (char *)v185, n, v14, 1, nullptr);
        v16 = 1;
        if ( *(_DWORD *)v11 != 1 )
        {
          v16 = 0;
          if ( *(_BYTE *)(v11 + 64) == 4 )
            v16 = **(_DWORD **)(v11 + 72) == 2;
        }
        v17 = sub_BA670(v188[4].m128i_i64[0], &v190, (__int64)v188, v4, v172, n, v16, 1, nullptr);
        if ( v11 == v4 || (unsigned int)(*(_DWORD *)v4 - 56) <= 1 )
          goto LABEL_36;
        if ( *(_DWORD *)v4 != 10 )
        {
          if ( !under_debugger )
            sub_383060(0xCEB8u, a3);
LABEL_347:
          BUG();
        }
        if ( v17 && ((get_tinfo_property() & 0x2F) == 0xD || (get_tinfo_property() & 0xF) == 9)
          || (unsigned __int8)sub_BA670(
                                v188[4].m128i_i64[0],
                                &v189,
                                (__int64)v188,
                                v4,
                                (char *)(*(_QWORD *)(v4 + 40) + 32LL),
                                n,
                                0,
                                0,
                                nullptr)
          && ((get_tinfo_property() & 0x2F) == 0xD || (get_tinfo_property() & 0xF) == 9) )
        {
          sub_11D890(v4, v11);
          v18 = v188;
          v19 = v188[1].m128i_i32[2];
          v20 = v188[4].m128i_i64[0];
          LODWORD(v188) = v19;
          BYTE1(v19) &= ~2u;
          LOBYTE(v19) = v19 | 0x80;
          v18[1].m128i_i32[2] = v19;
          sub_66FA0(v20, 1);
          v6 = 1;
        }
        else
        {
LABEL_36:
          v180.m128i_i8[0] = v17 | v15;
          if ( v17 | v15 )
          {
            if ( sub_B9420(v187) )
              v186.m128i_i32[0] = get_tinfo_size();
            else
              v186.m128i_i32[0] = 0;
            tinfo_size = 0;
            if ( sub_B9420(v187) )
              tinfo_size = get_tinfo_size();
            if ( v15 == 1 && (int)v181 < v186.m128i_i32[0] )
            {
              if ( (int)v181 >= tinfo_size )
              {
                v23 = tinfo_size;
                v22 = v186.m128i_i32[0];
                goto LABEL_47;
              }
            }
            else
            {
              if ( v17 != 1 || (int)v181 >= tinfo_size )
                goto LABEL_25;
              if ( (int)v181 >= v186.m128i_i32[0] )
                goto LABEL_215;
            }
            v22 = v186.m128i_i32[0];
            v23 = tinfo_size;
            if ( v186.m128i_i32[0] <= tinfo_size )
            {
LABEL_47:
              v186.m128i_i32[0] = v23;
              tinfo_size = v22;
              v24 = &v190;
              v160 = &v189;
LABEL_48:
              v191 = 0;
              if ( (get_tinfo_property() & 0x2F) == 0xD
                && (get_tinfo_property() & 0x2F) == 0xD
                && !(unsigned __int8)sub_B80A0(v24, 0, 0, tinfo_size, &v191) )
              {
                v157 = sub_B80A0(v160, 0, 0, (int)v181, nullptr) ^ 1;
              }
              else if ( (_BYTE)v191 )
              {
                v105 = get_tinfo_size();
                v106 = v160;
                if ( tinfo_size == v105 )
                  v106 = &v191;
                v157 = v180.m128i_i8[0];
                v160 = v106;
              }
              else
              {
                v157 = v180.m128i_i8[0];
              }
              if ( *v185 == 2 && (get_tinfo_property() & 0xF) != 9 && !(unsigned __int8)sub_B8030() )
              {
                v229[0] = 0;
                tinfo_get_innermost_udm();
                if ( !LOBYTE(v229[0])
                  || v222
                  || (get_tinfo_property() & 0xF) != 9 && !(unsigned __int8)sub_B8030()
                  || (tinfo_size = get_tinfo_size(), tinfo_size <= v186.m128i_i32[0]) )
                {
                  clear_tinfo_t();
                  goto LABEL_214;
                }
                copy_tinfo_t();
                clear_tinfo_t();
              }
              tinfo_property = get_tinfo_property();
              if ( *v185 == 5 )
              {
                v25 = *((_QWORD *)v185 + 1);
                if ( *(_QWORD *)(v25 + 8) >= *(_QWORD *)(v188[4].m128i_i64[0] + 144) )
                {
                  if ( !sub_B9420(v187) || (v25 = get_tinfo_size(), v25 < tinfo_size) )
                  {
LABEL_214:
                    clear_tinfo_t();
                    goto LABEL_25;
                  }
                }
              }
              sub_123A40((__int64)&v195, v185, v25, v26);
              v192 = nullptr;
              if ( *(_DWORD *)v11 != 2
                && !(unsigned __int8)sub_B8C10(v187, &v195, &v192, n, (char *)v185, tinfo_size, a3, (__int64)v160) )
              {
                v6 = 0;
                goto LABEL_213;
              }
              if ( v195 == 2 && sub_11CC50((unsigned __int8 *)v172, v188[30].m128i_i64[0]) )
              {
                v28 = v198;
                v107 = 0;
                v29 = (unsigned int)(8 * (tinfo_size - *((_DWORD *)v185 + 1)));
                if ( (unsigned __int64)(int)v29 <= 0x3F )
                  v107 = *(_QWORD *)(v198 + 16) << (8 * ((unsigned __int8)tinfo_size - v185[4]));
                *(_QWORD *)(v198 + 16) = v107;
              }
              sub_123A40((__int64)&v199, (unsigned __int8 *)v172, v28, v29);
              v193 = nullptr;
              if ( *(_DWORD *)v11 == 1 )
              {
                v176 = (int *)v192;
                if ( !v192 )
                  goto LABEL_64;
              }
              else
              {
                if ( !(unsigned __int8)sub_B8C10(v187, &v199, &v193, n, v172, tinfo_size, a3, (__int64)v160) )
                {
                  v6 = 0;
                  goto LABEL_212;
                }
                v176 = (int *)v192;
                if ( !v192 )
                {
LABEL_62:
                  if ( v193 && !v193[1] )
                  {
                    v132 = *((int *)v193 + 4);
                    if ( *(_QWORD *)(*v193 + 440) < v132 )
                      sub_B7BC0(a3);
                    v157 |= *(_DWORD *)(*(_QWORD *)(*v193 + 432) + 104 * v132 + 88) == tinfo_size;
                  }
LABEL_64:
                  v202[0] = 0;
                  v202[1] = 0;
                  sub_63E80(v202, 0, (int)v181, a3);
                  v204 = 0;
                  v203 = 0;
                  v203 = qvector_reserve((__int64)&v203, 0, 1, 8);
                  *(_QWORD *)(v203 + 8 * v204) = v11;
                  *(_QWORD *)&v204 = v204 + 1;
                  v30 = *(_QWORD *)(v11 + 24);
                  v152 = v195;
                  v230[0] = 0xFFFFFFFF00000000LL;
                  v231[0] = 0xFFFFFFFF00000000LL;
                  v232[0] = 0xFFFFFFFF00000000LL;
                  v230[1] = 0;
                  v231[1] = 0;
                  v232[1] = 0;
                  v150 = v195 == 2;
                  sub_330970((__int64)v229, v30);
                  v165 = tinfo_property;
                  v155 = 2;
LABEL_65:
                  v31 = v11;
                  while ( 1 )
                  {
                    do
                    {
                      v32 = *(_QWORD *)(v31 + 16);
                      if ( v180.m128i_i8[0] )
                        v32 = *(_QWORD *)(v31 + 8);
                      v31 = v32;
                      if ( !v32 || (v186.m128i_i32[0] = *(_DWORD *)(v32 + 4) & 0x80) != 0 )
                      {
LABEL_139:
                        if ( (_DWORD)v181 != tinfo_size && v155 != 1 )
                        {
                          v155 = 1;
                          v180.m128i_i8[0] = 0;
                          goto LABEL_65;
                        }
LABEL_97:
                        if ( v157 )
                        {
                          if ( (_QWORD)v204 != 1 )
                          {
                            sub_64BA0(v202, 0);
                            if ( (unsigned __int8)sub_64A10(v202, 0, v165) )
                            {
                              v194 = 0;
                              goto LABEL_101;
                            }
                            if ( (get_tinfo_property() & 0x2F) == 0xD )
                            {
                              v222 = nullptr;
                              v224.m128i_i64[0] = 0;
                              v224.m128i_i32[2] = -1;
                              v223 = 0;
                              if ( !(unsigned __int8)calc_tinfo_gaps() )
                              {
                                if ( v222 )
                                {
                                  *(_QWORD *)&v223 = 0;
                                  qfree((__int64)v222);
                                }
                                goto LABEL_291;
                              }
                              v219[0] = nullptr;
                              v219[1] = nullptr;
                              sub_63E80((__int64 *)v219, 0, v165, 0.0);
                              v136 = v222;
                              v137 = &v222[2 * v223];
                              if ( v137 != v222 )
                              {
                                do
                                {
                                  v138 = *v136;
                                  v139 = *((_DWORD *)v136 + 2);
                                  v186.m128i_i64[0] = (__int64)v137;
                                  sub_64440((__int64 *)v219, v138, v139 - v138, 0.0);
                                  v137 = (_QWORD *)v186.m128i_i64[0];
                                  v136 += 2;
                                }
                                while ( (_QWORD *)v186.m128i_i64[0] != v136 );
                              }
                              v140 = sub_64820(v219, v202);
                              qfree((__int64)v219[0]);
                              if ( v222 )
                              {
                                *(_QWORD *)&v223 = 0;
                                qfree((__int64)v222);
                              }
                              v194 = 0;
                              if ( v140 )
                              {
LABEL_101:
                                v40 = v204;
                                v41 = (int)v204;
                                v205 = 0;
                                v207 = 0;
                                v209 = 0;
                                v211 = 0;
                                v153 = v204;
                                v206 = 0;
                                v208 = 0;
                                v210 = 0;
                                v212 = 0;
                                sub_C3840(&v205, (int)v204);
                                sub_C3840(&v207, v41);
                                sub_C3840(&v209, v41);
                                sub_C3840(&v211, v41);
                                v213[0] = 0;
                                v42.m128i_i64[0] = 0;
                                v213[1] = 0;
                                v214 = nullptr;
                                v216[0] = 0;
                                v216[1] = 0;
                                v217 = nullptr;
                                v215 = 0;
                                v218 = 0;
                                if ( v40 <= 0 )
                                {
                                  v175 = 0;
                                }
                                else
                                {
                                  v173 = -40;
                                  v43 = v40;
                                  v44 = 0;
                                  v151 = v43 - 1;
                                  v166 = (unsigned int)(v43 - 1);
                                  v181 = (const void **)&v222;
                                  while ( 1 )
                                  {
                                    v45 = *(_QWORD *)(v203 + 8 * v44);
                                    v180.m128i_i64[0] = (__int64)v213;
                                    v186.m128i_i64[0] = (__int64)v216;
                                    sub_124680((__int64)v181, (__int64)v188, v45, 1u);
                                    v46 = (__int64 *)(v173 + 40 + v205);
                                    v177 = v173 + 40;
                                    sub_648D0(v46, v181, *(double *)v42.m128i_i64);
                                    v47 = *((_QWORD *)&v223 + 1);
                                    v48 = _mm_loadu_si128(&v224);
                                    *((_QWORD *)&v223 + 1) = 0;
                                    v224 = 0;
                                    v49 = v46[2];
                                    if ( v49 )
                                    {
                                      v46[3] = 0;
                                      v180.m128i_i64[0] = v47;
                                      v186 = v48;
                                      qfree(v49);
                                      v47 = v180.m128i_i64[0];
                                      v48 = _mm_load_si128(&v186);
                                    }
                                    v46[2] = v47;
                                    *(__m128i *)(v46 + 3) = v48;
                                    if ( *((_QWORD *)&v223 + 1) )
                                    {
                                      v224.m128i_i64[0] = 0;
                                      qfree(*((__int64 *)&v223 + 1));
                                    }
                                    qfree((__int64)v222);
                                    v50 = *(_QWORD *)(v203 + 8 * v44);
                                    v180.m128i_i64[0] = (__int64)v213;
                                    v186.m128i_i64[0] = (__int64)v216;
                                    sub_127A20((__int64)v181, (__int64)v188, v50, 1, v51, v52);
                                    v53 = v207 + v177;
                                    sub_648D0((__int64 *)(v207 + v177), v181, *(double *)v48.m128i_i64);
                                    v54 = *((_QWORD *)&v223 + 1);
                                    v42 = _mm_loadu_si128(&v224);
                                    *((_QWORD *)&v223 + 1) = 0;
                                    v224 = 0;
                                    v55 = *(_QWORD *)(v53 + 16);
                                    if ( v55 )
                                    {
                                      *(_QWORD *)(v53 + 24) = 0;
                                      v180.m128i_i64[0] = v54;
                                      v186 = v42;
                                      qfree(v55);
                                      v54 = v180.m128i_i64[0];
                                      v42 = _mm_load_si128(&v186);
                                    }
                                    *(_QWORD *)(v53 + 16) = v54;
                                    *(__m128i *)(v53 + 24) = v42;
                                    if ( *((_QWORD *)&v223 + 1) )
                                    {
                                      v224.m128i_i64[0] = 0;
                                      qfree(*((__int64 *)&v223 + 1));
                                    }
                                    qfree((__int64)v222);
                                    if ( v44 )
                                    {
                                      na = v173 + v205;
                                      v58 = v209 + v173;
                                      v161 = v209 + v173;
                                      v59 = (__int64 *)(v209 + v177);
                                      v180.m128i_i64[0] = (__int64)v213;
                                      v186.m128i_i64[0] = (__int64)v216;
                                      sub_648D0(
                                        (__int64 *)(v209 + v177),
                                        (const void **)(v209 + v173),
                                        *(double *)v42.m128i_i64);
                                      v60 = v161;
                                      v61 = 0;
                                      v62 = *(_QWORD *)(v161 + 24);
                                      if ( v62 )
                                      {
                                        v156 = v161;
                                        v159 = *(_QWORD *)(v161 + 24);
                                        v180.m128i_i64[0] = (__int64)v213;
                                        v186.m128i_i64[0] = (__int64)v216;
                                        v163 = 16 * v62;
                                        v113 = (void *)qalloc_or_throw(16 * v62, v58, v60, 16 * v62);
                                        v114 = memcpy(v113, *(const void **)(v156 + 16), v163);
                                        v62 = v159;
                                        v61 = (__int64)v114;
                                      }
                                      v63 = v59[2];
                                      v64 = _mm_unpacklo_epi64((__m128i)v62, (__m128i)v62);
                                      if ( v63 )
                                      {
                                        v59[3] = 0;
                                        v186.m128i_i64[0] = v61;
                                        v180 = v64;
                                        qfree(v63);
                                        v64 = _mm_load_si128(&v180);
                                        v61 = v186.m128i_i64[0];
                                      }
                                      v59[2] = v61;
                                      *(__m128i *)(v59 + 3) = v64;
                                      v180.m128i_i64[0] = (__int64)v213;
                                      v186.m128i_i64[0] = (__int64)v216;
                                      sub_64280(v59, (__int64 *)na, *(double *)v64.m128i_i64);
                                      v186.m128i_i64[0] = (__int64)v216;
                                      v180.m128i_i64[0] = (__int64)v213;
                                      sub_316CB0(v59 + 2, (__int64 **)(na + 16), v65, (__int64)v216);
                                      v66 = v173;
                                      v174 = v173 + v207;
                                      v67 = (__int64 *)(v211 + v177);
                                      v68 = v211 + v66;
                                      nb = v211 + v66;
                                      v180.m128i_i64[0] = (__int64)v213;
                                      v186.m128i_i64[0] = (__int64)v216;
                                      sub_648D0(
                                        (__int64 *)(v211 + v177),
                                        (const void **)(v211 + v66),
                                        *(double *)v64.m128i_i64);
                                      v69 = nb;
                                      v70 = 0;
                                      v71 = *(_QWORD *)(nb + 24);
                                      if ( v71 )
                                      {
                                        v158 = nb;
                                        v162 = *(_QWORD *)(nb + 24);
                                        v180.m128i_i64[0] = (__int64)v213;
                                        v186.m128i_i64[0] = (__int64)v216;
                                        nd = 16 * v71;
                                        v111 = (void *)qalloc_or_throw(16 * v71, v68, v69, 16 * v71);
                                        v112 = memcpy(v111, *(const void **)(v158 + 16), nd);
                                        v71 = v162;
                                        v70 = (__int64)v112;
                                      }
                                      v72 = v67[2];
                                      v42 = _mm_unpacklo_epi64((__m128i)v71, (__m128i)v71);
                                      if ( v72 )
                                      {
                                        v67[3] = 0;
                                        v186.m128i_i64[0] = v70;
                                        v180 = v42;
                                        qfree(v72);
                                        v42 = _mm_load_si128(&v180);
                                        v70 = v186.m128i_i64[0];
                                      }
                                      v67[2] = v70;
                                      *(__m128i *)(v67 + 3) = v42;
                                      v180.m128i_i64[0] = (__int64)v213;
                                      v186.m128i_i64[0] = (__int64)v216;
                                      sub_64280(v67, (__int64 *)v174, *(double *)v42.m128i_i64);
                                      v180.m128i_i64[0] = (__int64)v213;
                                      v186.m128i_i64[0] = (__int64)v216;
                                      sub_316CB0(v67 + 2, (__int64 **)(v174 + 16), v73, v74);
                                    }
                                    if ( v166 == v44 )
                                      break;
                                    ++v44;
                                    v173 = v177;
                                  }
                                  v178 = v151;
                                  if ( v153 == 1 )
                                  {
                                    v175 = 0;
                                  }
                                  else
                                  {
                                    v116 = v203;
                                    v75 = 0;
                                    v175 = 0;
                                    while ( 1 )
                                    {
                                      v164 = v75;
                                      v149 = v75 + 1;
                                      v117 = *(_QWORD *)(*(_QWORD *)(v116 + 8 * v75) + 8LL);
                                      v154 = 8 * v75 + 8;
                                      if ( *(_QWORD *)(v116 + 8 * v75 + 8) != v117 )
                                        break;
                                      v143 = v75 + 1;
LABEL_146:
                                      v75 = v143;
                                      if ( v151 == v143 )
                                        goto LABEL_147;
                                    }
                                    v143 = v75 + 1;
                                    nc = 40 * (v75 + 1);
                                    v180.m128i_i64[0] = (__int64)v213;
                                    v186.m128i_i64[0] = (__int64)v216;
                                    while ( 1 )
                                    {
                                      v119 = v188;
                                      sub_127A20((__int64)v219, (__int64)v188, v117, 1, v56, v57);
                                      v120 = (__int64)v119;
                                      v121 = (__int64 *)v181;
                                      sub_124680((__int64)v181, v120, v117, 1u);
                                      sub_64280(v213, v121, *(double *)v42.m128i_i64);
                                      sub_316CB0((__int64 *)&v214, (__int64 **)&v223 + 1, v122, v123);
                                      sub_64280((__int64 *)v186.m128i_i64[0], (__int64 *)v219, *(double *)v42.m128i_i64);
                                      sub_316CB0((__int64 *)&v217, &v220, v124, v125);
                                      if ( v164 < v178 )
                                      {
                                        v147 = v209 + nc;
                                        if ( (unsigned __int8)sub_64780(v219, (_QWORD *)(v209 + nc))
                                          || (unsigned __int8)sub_318470((unsigned __int64 **)&v220, v147 + 16)
                                          || (v148 = v211 + nc, (unsigned __int8)sub_64780(v219, (_QWORD *)(v211 + nc)))
                                          || (unsigned __int8)sub_318470((unsigned __int64 **)&v220, v148 + 16)
                                          || (v128 = v211 + nc, (unsigned __int8)sub_64780(v181, (_QWORD *)(v211 + nc)))
                                          || (unsigned __int8)sub_318470((unsigned __int64 **)&v223 + 1, v128 + 16) )
                                        {
                                          v178 = v164;
                                        }
                                      }
                                      v118 = v205 + nc;
                                      if ( (unsigned __int8)sub_64780(v186.m128i_i64[0], (_QWORD *)(v205 + nc))
                                        || (unsigned __int8)sub_318470(&v217, v118 + 16)
                                        || (v126 = v207 + nc,
                                            (unsigned __int8)sub_64780(v186.m128i_i64[0], (_QWORD *)(v207 + nc)))
                                        || (unsigned __int8)sub_318470(&v217, v126 + 16)
                                        || (v127 = v207 + nc, (unsigned __int8)sub_64780(v213, (_QWORD *)(v207 + nc)))
                                        || (unsigned __int8)sub_318470(&v214, v127 + 16) )
                                      {
                                        v175 = v149;
                                      }
                                      if ( v175 > v178 )
                                        break;
                                      if ( *((_QWORD *)&v223 + 1) )
                                      {
                                        v224.m128i_i64[0] = 0;
                                        qfree(*((__int64 *)&v223 + 1));
                                      }
                                      qfree((__int64)v222);
                                      if ( v220 )
                                      {
                                        v221 = 0;
                                        qfree((__int64)v220);
                                      }
                                      qfree((__int64)v219[0]);
                                      v116 = v203;
                                      v117 = *(_QWORD *)(v117 + 8);
                                      if ( v117 == *(_QWORD *)(v203 + v154) )
                                        goto LABEL_146;
                                    }
                                    if ( *((_QWORD *)&v223 + 1) )
                                    {
                                      v224.m128i_i64[0] = 0;
                                      qfree(*((__int64 *)&v223 + 1));
                                    }
                                    qfree((__int64)v222);
                                    if ( v220 )
                                    {
                                      v221 = 0;
                                      qfree((__int64)v220);
                                    }
                                    qfree((__int64)v219[0]);
                                    v175 = -1;
                                  }
LABEL_147:
                                  if ( v217 )
                                  {
                                    *(_QWORD *)&v218 = 0;
                                    qfree((__int64)v217);
                                  }
                                }
                                qfree(v216[0]);
                                if ( v214 )
                                {
                                  *(_QWORD *)&v215 = 0;
                                  qfree((__int64)v214);
                                }
                                qfree(v213[0]);
                                if ( v211 )
                                {
                                  v76 = 0;
                                  if ( (_QWORD)v212 )
                                  {
                                    v186.m128i_i64[0] = v4;
                                    v77 = v212;
                                    do
                                    {
                                      v78 = (__int64 *)(v211 + 40 * v76);
                                      v79 = v78[2];
                                      if ( v79 )
                                      {
                                        v78[3] = 0;
                                        qfree(v79);
                                      }
                                      ++v76;
                                      qfree(*v78);
                                    }
                                    while ( v77 != v76 );
                                    v4 = v186.m128i_i64[0];
                                  }
                                  *(_QWORD *)&v212 = 0;
                                  qfree(v211);
                                }
                                if ( v209 )
                                {
                                  v80 = 0;
                                  if ( (_QWORD)v210 )
                                  {
                                    v186.m128i_i64[0] = v4;
                                    v81 = v210;
                                    do
                                    {
                                      v82 = (__int64 *)(v209 + 40 * v80);
                                      v83 = v82[2];
                                      if ( v83 )
                                      {
                                        v82[3] = 0;
                                        qfree(v83);
                                      }
                                      ++v80;
                                      qfree(*v82);
                                    }
                                    while ( v81 != v80 );
                                    v4 = v186.m128i_i64[0];
                                  }
                                  *(_QWORD *)&v210 = 0;
                                  qfree(v209);
                                }
                                if ( v207 )
                                {
                                  v84 = 0;
                                  if ( (_QWORD)v208 )
                                  {
                                    v186.m128i_i64[0] = v4;
                                    v85 = v208;
                                    do
                                    {
                                      v86 = (__int64 *)(v207 + 40 * v84);
                                      v87 = v86[2];
                                      if ( v87 )
                                      {
                                        v86[3] = 0;
                                        qfree(v87);
                                      }
                                      ++v84;
                                      qfree(*v86);
                                    }
                                    while ( v85 != v84 );
                                    v4 = v186.m128i_i64[0];
                                  }
                                  *(_QWORD *)&v208 = 0;
                                  qfree(v207);
                                }
                                if ( v205 )
                                {
                                  v88 = 0;
                                  if ( (_QWORD)v206 )
                                  {
                                    v186.m128i_i64[0] = v4;
                                    v89 = v206;
                                    do
                                    {
                                      v90 = (__int64 *)(v205 + 40 * v88);
                                      v91 = v90[2];
                                      if ( v91 )
                                      {
                                        v90[3] = 0;
                                        qfree(v91);
                                      }
                                      ++v88;
                                      qfree(*v90);
                                    }
                                    while ( v89 != v88 );
                                    v4 = v186.m128i_i64[0];
                                  }
                                  *(_QWORD *)&v206 = 0;
                                  qfree(v205);
                                }
                                if ( v175 == -1 )
                                  goto LABEL_208;
                                v92 = *(_QWORD *)(v203 + 8LL * v175);
                                if ( v11 != v4 )
                                  sub_11D890(v11, v4);
                                if ( (get_tinfo_property() & 0x2F) == 0xD )
                                {
                                  if ( *(_DWORD *)v11 == 2 )
                                    goto LABEL_309;
                                  v93 = (__m128i *)v188[4].m128i_i64[0];
                                  v94 = v195;
                                  if ( (v195 & 0xFB) == 1 )
                                  {
                                    sub_1C9210((char *)&v195, v188[4].m128i_i64[0]);
                                    v94 = v195;
                                  }
                                  v196 |= 2u;
                                  if ( v94 == 15 )
                                  {
                                    if ( *(_DWORD *)v11 == 1 )
                                      goto LABEL_192;
LABEL_309:
                                    if ( (v199 & 0xFB) == 1 )
                                      sub_1C9210((char *)&v199, v188[4].m128i_i64[0]);
                                    v200 |= 2u;
                                    if ( v199 != 15 || v195 != 15 )
                                      goto LABEL_193;
LABEL_198:
                                    v96 = v197;
LABEL_199:
                                    v97 = v187;
                                    sub_12AB50(&v195, v187, v96, 2);
                                    sub_12AB50(&v199, v97, v201, 2);
                                    v98 = v185;
                                    sub_11CA10((char *)v185, (char *)&v195);
                                    sub_11CA10(v172, (char *)&v199);
                                    v99 = get_tinfo_property();
                                    v100 = *(_DWORD *)(v11 + 4);
                                    if ( (v99 & 0xF) == 9 )
                                    {
                                      *(_DWORD *)(v11 + 4) = v100 | 0x10;
                                      if ( *v98 == 2 )
                                      {
                                        v133 = *((int *)v185 + 1);
                                        v134 = (_BYTE *)(*((_QWORD *)v185 + 1) + 16LL);
                                        v186.m128i_i64[0] = *((_QWORD *)v185 + 1);
                                        if ( (unsigned __int8)sub_11D360((__int64)&v195, v187, v134, v133) )
                                          sub_11CA10((char *)v185, (char *)&v195);
                                      }
                                    }
                                    else
                                    {
                                      *(_BYTE *)(v11 + 33) &= ~4u;
                                      *(_BYTE *)(v11 + 65) &= ~4u;
                                      *(_DWORD *)(v11 + 4) = v100 & 0xFFFFFFEF;
                                    }
                                    sub_11D5D0(v11, v187);
                                    if ( v92 != v11 )
                                    {
                                      sub_11D890(v92, v11);
                                      *(_QWORD *)(v92 + 24) = *(_QWORD *)(v11 + 24);
                                    }
                                    v101 = 0;
                                    if ( (_QWORD)v204 )
                                    {
                                      do
                                      {
                                        if ( v175 != v183 )
                                          sub_11D5A0(*(_QWORD *)(v203 + 8 * v101));
                                        v101 = ++v183;
                                      }
                                      while ( v183 < (unsigned __int64)v204 );
                                    }
                                    v102 = v188;
                                    v103 = v188[1].m128i_i32[2];
                                    v104 = v188[4].m128i_i64[0];
                                    LODWORD(v188) = v103;
                                    BYTE1(v103) &= ~2u;
                                    v102[1].m128i_i32[2] = v103 | 0x180;
                                    sub_66FA0(v104, 1);
                                    v6 = v157;
                                    goto LABEL_208;
                                  }
                                  if ( v94 != 4 || (v135 = v198, *(_DWORD *)v198 != 2) || !v198 )
                                  {
                                    if ( *(_DWORD *)v11 != 1 )
                                      goto LABEL_309;
                                    goto LABEL_193;
                                  }
                                  v222 = (_QWORD *)(v198 + 24);
                                  v181 = (const void **)&v222;
                                  sub_C7FB0(v93 + 87, (unsigned __int64 *)(v198 + 24), &v222);
                                  copy_tinfo_t();
                                  *(_BYTE *)(v135 + 65) |= 2u;
                                  *(_DWORD *)(v135 + 4) &= ~0x10u;
                                  if ( *(_BYTE *)(v135 + 48) == 10 )
                                  {
                                    v141 = *(_QWORD *)(v135 + 56);
                                    if ( *(_BYTE *)v141 == 6 )
                                    {
                                      v222 = nullptr;
                                      v142 = *(_QWORD *)(v141 + 8);
                                      if ( !(unsigned __int8)sub_3810A0(v93[93].m128i_i64[1], v142, (__int64)v181, 3)
                                        || (get_tinfo_property() & 0x2F) != 0xD )
                                      {
                                        sub_381E90(v93[93].m128i_i64[1], v142, v160, 3u, 0);
                                      }
                                      clear_tinfo_t();
                                    }
                                  }
                                  if ( *(_DWORD *)v11 != 1 )
                                    goto LABEL_309;
                                  if ( v195 == 15 )
                                  {
LABEL_192:
                                    if ( v199 != 15 )
                                      goto LABEL_193;
                                    goto LABEL_198;
                                  }
LABEL_193:
                                  v219[0] = (_QWORD *)(v92 + 24);
                                  v95 = (__m128i *)(v188[4].m128i_i64[0] + 1392);
                                  v186.m128i_i64[0] = v188[4].m128i_i64[0];
                                  sub_C7FB0(v95, (unsigned __int64 *)(v92 + 24), v219);
                                  copy_tinfo_t();
                                }
                                v96 = v197;
                                if ( v195 == 2 && tinfo_size > v197 )
                                {
                                  if ( v197 != 8 )
                                  {
                                    if ( !under_debugger )
                                      sub_383060(0xCA4Fu, *(double *)v42.m128i_i64);
                                    goto LABEL_347;
                                  }
                                  sub_1207E0((char *)&v195, v187, 9, *(_QWORD *)(v11 + 24), tinfo_size);
                                  goto LABEL_198;
                                }
                                goto LABEL_199;
                              }
                            }
                            else
                            {
LABEL_291:
                              v194 = 0;
                            }
                            v129 = sub_64BA0(v202, 0);
                            if ( v129 == (unsigned int)sub_64B20((__int64)v202) )
                            {
                              v130 = &v199;
                              if ( v160 != &v190 )
                                v130 = &v195;
                              if ( *v130 == 4
                                || (v186.m128i_i64[0] = v188[30].m128i_i64[0],
                                    sub_11CC50(v130, v186.m128i_i64[0]) == *(_BYTE *)(v186.m128i_i64[0] + 145)) )
                              {
                                v131 = 0;
                              }
                              else
                              {
                                v131 = tinfo_size - v129;
                              }
                              if ( (unsigned __int8)sub_B80A0(v160, v131, 0, v129, &v194)
                                && (get_tinfo_property() & 0xF) != 0xB )
                              {
                                if ( *(_DWORD *)v11 == 2 )
                                  goto LABEL_301;
                                sub_125180((__int64)&v195, v185);
                                if ( !(unsigned __int8)sub_B8C10(
                                                         v187,
                                                         &v195,
                                                         &v192,
                                                         n,
                                                         (char *)v185,
                                                         v129,
                                                         0.0,
                                                         (__int64)&v194) )
                                  goto LABEL_208;
                                if ( *(_DWORD *)v11 != 1 )
                                {
LABEL_301:
                                  sub_125180((__int64)&v199, (unsigned __int8 *)v172);
                                  if ( !(unsigned __int8)sub_B8C10(
                                                           v187,
                                                           &v199,
                                                           &v193,
                                                           n,
                                                           v172,
                                                           v129,
                                                           0.0,
                                                           (__int64)&v194) )
                                    goto LABEL_208;
                                }
                                tinfo_size = v129;
                                v160 = &v194;
                                goto LABEL_101;
                              }
                            }
LABEL_208:
                            clear_tinfo_t();
                          }
                        }
                        else
                        {
                          v6 = 0;
                        }
                        sub_11CDA0((__int64)v232);
                        sub_11CDA0((__int64)v231);
                        sub_11CDA0((__int64)v230);
                        if ( v203 )
                        {
                          *(_QWORD *)&v204 = 0;
                          qfree(v203);
                        }
                        qfree(v202[0]);
LABEL_212:
                        sub_11CDA0((__int64)&v199);
LABEL_213:
                        sub_11CDA0((__int64)&v195);
                        goto LABEL_214;
                      }
                      v33 = v229;
                      if ( !(unsigned __int8)sub_B7CB0(v187, v229, v32) )
                        v33 = (_QWORD *)v31;
                      if ( *(_DWORD *)v33 == 2 || (unsigned int)(*(_DWORD *)v33 - 8) <= 1 )
                        v179 = *((_DWORD *)v33 + 17);
                      else
                        v179 = *((_DWORD *)v33 + 9);
                      if ( !sub_11CC50((unsigned __int8 *)v33 + 64, v188[30].m128i_i64[0]) )
                        v186.m128i_i32[0] = *((_DWORD *)v33 + 9) + (int)v181 >= v165;
                    }
                    while ( !sub_B9940(
                               (__int64 *)v219,
                               v188,
                               (__int64)v176,
                               (int *)v11,
                               (int *)v33,
                               0,
                               0.0,
                               v186.m128i_i8[0])
                         || !sub_B9940(
                               (__int64 *)&v222,
                               v188,
                               (__int64)v193,
                               (int *)v11,
                               (int *)v33,
                               1u,
                               0.0,
                               v186.m128i_i8[0]) );
                    if ( v219[0] == v222 )
                    {
                      v34 = tinfo_size;
LABEL_83:
                      if ( (__int64)v222 + v179 <= v34 )
                      {
                        if ( sub_A2650(v188[4].m128i_i64[0], v31) || (*((_BYTE *)v33 + 32) == 2) != v150 )
                          goto LABEL_139;
                        if ( v152 == 2 )
                        {
                          if ( (unsigned __int8)sub_64A60(v202, (int)v222, v179) || v219[0] )
                            goto LABEL_139;
                          v108 = *((_DWORD *)v33 + 9);
                          v146 = (int)v222;
                          v109 = v33[5];
                          v186.m128i_i32[0] = (int)v222;
                          v145 = v188[30].m128i_i64[0];
                          v144 = sub_32ABC0(*(_QWORD *)(v109 + 16), v108, 0);
                          if ( sub_11CC50(&v199, v145) )
                            v186.m128i_i32[0] = v201 - v146 - *((_DWORD *)v33 + 9);
                          if ( v201 > 8 && *((_DWORD *)v33 + 9) + v186.m128i_i32[0] > 7 && v144 )
                            goto LABEL_139;
                          v110 = 0;
                          if ( (unsigned __int64)(8 * v186.m128i_i32[0]) < 0x40 )
                            v110 = v144 << (8 * v186.m128i_i8[0]);
                          *(_QWORD *)(v198 + 16) |= v110;
                        }
                        else
                        {
                          v35 = sub_64A10(v202, (int)v222, v179);
                          if ( v179 == tinfo_size || v35 )
                            goto LABEL_139;
                        }
                        if ( !v157 )
                          v157 = sub_B80A0(v160, (__int64)v222, 0, v179, nullptr) ^ 1;
                        sub_63E80(v202, (int)v222, v179, 0.0);
                        v36 = v204;
                        if ( v180.m128i_i8[0] )
                        {
                          v37 = 8 * v204;
                          v38 = v203 + 8 * v204;
                        }
                        else
                        {
                          v38 = v203;
                          v37 = 0;
                        }
                        if ( *((_QWORD *)&v204 + 1) < (unsigned __int64)(v204 + 1) )
                        {
                          v203 = qvector_reserve((__int64)&v203, v203, v204 + 1, 8);
                          v38 = v203 + v37;
                          v36 = v204;
                        }
                        v186.m128i_i64[0] = v38;
                        memmove((void *)(v38 + 8), (const void *)v38, 8 * v36 - v37);
                        *(_QWORD *)v186.m128i_i64[0] = v31;
                        *(_QWORD *)&v204 = v204 + 1;
                        v39 = sub_64B20((__int64)v202);
                        LODWORD(v181) = v39;
                        if ( v39 > tinfo_size )
                        {
                          if ( !under_debugger )
                            sub_383060(0xCE3Cu, 0.0);
                          goto LABEL_347;
                        }
                        if ( v39 == tinfo_size )
                          goto LABEL_97;
                      }
                    }
                    else if ( !v219[0] && v195 == 2 )
                    {
                      v34 = tinfo_size;
                      if ( (__int64)v222 < tinfo_size )
                        goto LABEL_83;
                    }
                  }
                }
              }
              if ( !*((_QWORD *)v176 + 1) )
              {
                v115 = v176[4];
                if ( *(_QWORD *)(*(_QWORD *)v176 + 440LL) < v115 )
                  sub_B7BC0(a3);
                if ( tinfo_size == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v176 + 432LL) + 104 * v115 + 88) )
                {
                  v157 = v180.m128i_i8[0];
                  goto LABEL_64;
                }
              }
              goto LABEL_62;
            }
LABEL_215:
            v24 = &v189;
            v160 = &v190;
            goto LABEL_48;
          }
        }
LABEL_25:
        clear_tinfo_t();
        clear_tinfo_t();
        goto LABEL_26;
      }
      if ( v7 - 1 > 1 )
      {
        v8 = 0;
        goto LABEL_8;
      }
    }
    v8 = 1;
LABEL_6:
    if ( (unsigned __int8)sub_186F90((__int64)v188, a2) )
      goto LABEL_127;
    goto LABEL_7;
  }
  return v6;
}

