__int64 __fastcall sub_27D00(_QWORD *a1, _QWORD *a2, unsigned __int64 a3, __int64 a4, char a5)
{
  __int64 func; // r13
  unsigned __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rax
  int i; // ebx
  int v12; // r8d
  int v13; // eax
  __int64 v14; // rdx
  __int16 v15; // cx
  int v16; // r9d
  char *v17; // rax
  signed __int64 v18; // xmm0_8
  int v19; // r14d
  signed __int64 v20; // r12
  unsigned __int64 v21; // rsi
  __int16 v22; // ax
  __int64 v23; // rsi
  unsigned __int64 v24; // r15
  bool v25; // al
  unsigned __int64 v26; // rdi
  bool v27; // r10
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rsi
  __m128i v30; // xmm0
  char v31; // al
  char v32; // r10
  __int16 v33; // r8
  __int64 v34; // rax
  char v35; // al
  unsigned __int8 v36; // al
  char v37; // al
  __int64 v38; // rax
  int v39; // eax
  const char *v40; // rsi
  bool v41; // di
  __int64 v42; // rcx
  __m128i v43; // xmm0
  __int64 v45; // rax
  unsigned __int8 v46; // al
  __int64 ea_name; // rax
  char *v48; // r15
  __int64 v49; // r15
  int v50; // edx
  unsigned int v51; // eax
  bool v52; // al
  __int64 v53; // rax
  __int64 v54; // rax
  __int16 v55; // ax
  char v56; // al
  __int16 v57; // cx
  signed __int64 v58; // rax
  unsigned __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // r8
  unsigned __int64 *v62; // rax
  char v63; // al
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rax
  __int64 v68; // rax
  int v69; // eax
  __int64 v70; // rcx
  int v71; // edi
  int v72; // eax
  unsigned __int64 v73; // rdx
  unsigned __int64 v74; // r15
  __int64 v75; // rcx
  __int64 v76; // rax
  char v77; // al
  char v78; // dl
  __int64 v79; // rax
  int v80; // eax
  int v81; // eax
  __int64 v82; // rax
  int v83; // ecx
  unsigned int v84; // edx
  __int64 v85; // rax
  __int64 v86; // r8
  __int64 v87; // rax
  __int64 v88; // rsi
  __int64 v89; // rcx
  __int64 v90; // r12
  int v91; // eax
  unsigned __int64 v92; // rdx
  _QWORD *v93; // rax
  __int64 v94; // rdx
  unsigned __int64 v95; // rcx
  signed __int64 v96; // rcx
  __int16 v97; // r8
  int v98; // edx
  __int64 v99; // rax
  __int64 v100; // rax
  char v101; // si
  __int16 v102; // dx
  char v103; // cl
  unsigned int v104; // eax
  __int64 v105; // rax
  __int16 v106; // dx
  int v107; // ecx
  unsigned int v108; // ecx
  char v109; // al
  int func_chunknum; // eax
  unsigned int v111; // edx
  bool v112; // zf
  unsigned int v113; // ecx
  char v114; // al
  unsigned int v115; // edx
  unsigned __int64 v116; // rdi
  signed __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // rdx
  unsigned __int64 v121; // rdi
  signed __int64 v122; // r8
  signed __int64 v123; // rax
  unsigned __int64 v124; // rdx
  __m128i v125; // xmm0
  __int64 v126; // rcx
  int v127; // edi
  unsigned __int64 v128; // rax
  signed __int64 v129; // rax
  signed __int64 v130; // rdx
  __int64 v131; // rsi
  __m128i v132; // xmm0
  signed __int64 v133; // rax
  __int16 v134; // ax
  signed __int64 v135; // rdx
  signed __int64 v136; // rax
  __int64 v137; // r8
  int v138; // r9d
  unsigned __int64 v139; // rdi
  signed __int64 v140; // rdx
  unsigned __int64 v141; // rax
  __int64 v142; // rcx
  __int64 v143; // rdx
  __int64 v144; // rax
  unsigned __int64 v145; // rcx
  char v146; // dl
  __int64 v147; // rax
  unsigned __int64 v148; // rsi
  signed __int64 v149; // rdx
  signed __int64 v150; // rax
  unsigned __int64 v151; // rax
  signed __int64 v152; // rax
  __int64 v153; // r8
  unsigned __int64 v154; // rax
  signed __int64 v155; // rax
  signed __int64 v156; // r11
  char *v157; // r12
  unsigned __int64 v158; // rax
  __int16 v159; // ax
  char v160; // al
  char *v161; // r15
  int v162; // edx
  __int64 v163; // rcx
  __int64 v164; // rax
  __m128i v165; // xmm0
  __int64 v166; // rax
  unsigned __int64 v167; // r8
  int v168; // edi
  int v169; // r10d
  __int64 v170; // rax
  char func_bitness; // al
  int v172; // [rsp+0h] [rbp-3D8h]
  __int64 v173; // [rsp+0h] [rbp-3D8h]
  unsigned int v174; // [rsp+0h] [rbp-3D8h]
  char v175; // [rsp+0h] [rbp-3D8h]
  unsigned int v176; // [rsp+0h] [rbp-3D8h]
  int v177; // [rsp+0h] [rbp-3D8h]
  signed __int64 v178; // [rsp+0h] [rbp-3D8h]
  __int64 v179; // [rsp+0h] [rbp-3D8h]
  signed __int64 v180; // [rsp+0h] [rbp-3D8h]
  char v181; // [rsp+0h] [rbp-3D8h]
  unsigned int v182; // [rsp+0h] [rbp-3D8h]
  signed __int64 v183; // [rsp+0h] [rbp-3D8h]
  _QWORD *v184; // [rsp+8h] [rbp-3D0h]
  __int64 v185; // [rsp+10h] [rbp-3C8h]
  char v186; // [rsp+10h] [rbp-3C8h]
  unsigned int v187; // [rsp+10h] [rbp-3C8h]
  int v188; // [rsp+24h] [rbp-3B4h]
  int v189; // [rsp+28h] [rbp-3B0h]
  int v190; // [rsp+2Ch] [rbp-3ACh]
  __int64 v192; // [rsp+38h] [rbp-3A0h]
  char v193; // [rsp+41h] [rbp-397h]
  char v194; // [rsp+42h] [rbp-396h]
  unsigned __int8 v195; // [rsp+43h] [rbp-395h]
  int v196; // [rsp+44h] [rbp-394h]
  unsigned __int64 v197; // [rsp+50h] [rbp-388h]
  __int64 v198; // [rsp+58h] [rbp-380h]
  unsigned __int64 v200; // [rsp+68h] [rbp-370h]
  unsigned int v201; // [rsp+68h] [rbp-370h]
  char v202; // [rsp+68h] [rbp-370h]
  char v203; // [rsp+70h] [rbp-368h]
  char v204; // [rsp+70h] [rbp-368h]
  char v205; // [rsp+70h] [rbp-368h]
  __int64 v206; // [rsp+70h] [rbp-368h]
  __int64 v207; // [rsp+78h] [rbp-360h]
  char v208; // [rsp+80h] [rbp-358h]
  char v211; // [rsp+8Fh] [rbp-349h]
  char v212; // [rsp+93h] [rbp-345h]
  unsigned int v213; // [rsp+94h] [rbp-344h] BYREF
  __int64 v214; // [rsp+98h] [rbp-340h] BYREF
  char *haystack; // [rsp+A0h] [rbp-338h] BYREF
  __int128 v216; // [rsp+A8h] [rbp-330h]
  _BYTE v217[360]; // [rsp+C0h] [rbp-318h] BYREF
  char v218; // [rsp+228h] [rbp-1B0h] BYREF
  _BYTE v219[360]; // [rsp+230h] [rbp-1A8h] BYREF
  unsigned __int64 v220; // [rsp+398h] [rbp-40h] BYREF

  func = a4;
  v184 = a2;
  v220 = __readfsqword(0x28u);
  if ( !a4 )
    func = get_func();
  v7 = a1[2];
  v8 = a1[4];
  if ( v7 )
  {
    v9 = a1[1];
    v10 = 0;
    for ( i = 0; i < v7; v10 = ++i )
    {
      if ( (*(_BYTE *)(v9 + 32 * v10 + 26) & 1) == 0 )
        break;
    }
    v196 = v7;
    v12 = v7;
    if ( v8 != -1 )
    {
      if ( (int)v7 - 2 > i && *(_WORD *)(v9 + 32LL * ((int)v7 - 1) + 24) == 0xFFFF )
      {
        v55 = *(_WORD *)(v9 + 32LL * ((int)v7 - 2) + 24);
        v12 = v7 - (v55 != -1 && v55 != 5);
      }
      goto LABEL_11;
    }
  }
  else
  {
    i = 0;
    v12 = 0;
    if ( v8 != -1 )
    {
LABEL_11:
      v13 = v12 - 1;
      v14 = 32LL * (v12 - 1);
      while ( 1 )
      {
        v16 = v12;
        v12 = v13;
        if ( v13 <= i )
          break;
        v15 = *(_WORD *)(a1[1] + v14 + 24);
        v14 -= 32;
        if ( v15 == -1 )
          break;
        --v13;
      }
      v196 = v16;
      if ( v16 > v8 && v16 < v7 && *(_WORD *)(a1[1] + 32LL * v16 + 24) == 5 )
        v196 = v16 + 1;
      goto LABEL_16;
    }
    v196 = 0;
  }
LABEL_16:
  v17 = &v217[40];
  *(_QWORD *)&v217[24] = 0;
  *(_QWORD *)&v217[32] = 0;
  *(_OWORD *)v217 = -1;
  v18 = 0;
  do
  {
    *(_WORD *)v17 = 0;
    v17 += 40;
    *((_WORD *)v17 - 19) = 0;
    *((_WORD *)v17 - 18) = 0;
    *((_DWORD *)v17 - 2) = 0;
    *((_WORD *)v17 - 17) = 0;
    *((_OWORD *)v17 - 2) = 0;
    *((_QWORD *)v17 - 2) = 0;
  }
  while ( v17 != &v218 );
  v193 = 0;
  v19 = i;
  v20 = 0;
  v189 = 0;
  *(_QWORD *)&v217[16] = a3;
  v21 = a3;
  LODWORD(v185) = 0;
  v188 = 0;
  v192 = 0;
  v195 = 0;
  v190 = -1;
  v198 = -1;
  v197 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    do
                    {
LABEL_19:
                      if ( func && *(_QWORD *)func == v21 || decode_preceding_insn() == -1 )
                      {
LABEL_83:
                        v28 = a1[2];
                        v24 = v19;
                        goto LABEL_84;
                      }
                      v21 = *(_QWORD *)&v217[16];
                    }
                    while ( v212 );
                    v194 = sub_6C050(func, *(_QWORD *)&v217[16], *(double *)&v18);
                    if ( !v194 || sub_24180(a1, (__int64)v184, *(__int64 *)&v217[16]) )
                      goto LABEL_83;
                    v22 = *(_WORD *)&v217[24];
                    if ( *(_WORD *)&v217[24] != 16 )
                      break;
                    v38 = sub_80350(v184, v217, &v217[40]);
                    v39 = sub_24DD0(v184, (__int64)v217, v38, (__int64 *)&haystack);
                    if ( (v39 & 0xFFFFFFFB) == 3 )
                    {
                      v172 = v39;
                      sub_242C0(a1, -1, *(__int64 *)&v217[16]);
                      if ( !v193 )
                      {
                        v73 = a1[2];
                        v74 = v19;
                        if ( a1[4] != -1 && v172 == 7 && v19 < v73 )
                        {
                          v75 = a1[1];
                          v76 = v75 + 32LL * v19;
                          if ( *(_WORD *)(v76 + 24) == 5 )
                          {
                            do
                            {
                              ++v19;
                              v20 += *(_QWORD *)(v76 + 16);
                              v74 = v19;
                              if ( v19 >= v73 )
                                break;
                              v76 = v75 + 32LL * v19;
                            }
                            while ( *(_WORD *)(v76 + 24) == 0xFFFF );
                          }
                        }
                        v193 = v74 >= v73;
                      }
                      v189 = 0;
                      v21 = *(_QWORD *)&v217[16];
                    }
                    else
                    {
                      v22 = *(_WORD *)&v217[24];
                      if ( (unsigned int)v185 | v188 )
                      {
                        if ( *(_WORD *)&v217[24] != 16 )
                          goto LABEL_59;
                      }
                      else if ( *(_WORD *)&v217[24] != 16 )
                      {
                        goto LABEL_27;
                      }
                      v40 = byte_4;
                      v185 = *(_QWORD *)&v217[56];
                      if ( (unsigned __int8)getinf_flag() )
                      {
LABEL_122:
                        v22 = *(_WORD *)&v217[24];
                        if ( *(_WORD *)&v217[24] != 16 )
                        {
LABEL_27:
                          v188 = 0;
                          goto LABEL_28;
                        }
                        v49 = *(_QWORD *)&v217[56];
                        if ( !(unsigned __int8)sub_22360(*(_QWORD *)&v217[56], v40) )
                        {
                          v53 = sub_27800((__int64)v184, v49);
                          if ( v49 == v53 || !(unsigned __int8)sub_22360(v53, v49) )
                          {
                            v188 = 0;
                            v22 = *(_WORD *)&v217[24];
LABEL_28:
                            v23 = *(_QWORD *)&v217[16];
                            if ( v22 != 122 )
                              goto LABEL_29;
                            goto LABEL_62;
                          }
                        }
                        sub_242C0(a1, -1, *(__int64 *)&v217[16]);
                        v189 = 0;
                        v21 = *(_QWORD *)&v217[16];
                        LODWORD(v185) = 0;
                        v188 = 1;
                      }
                      else
                      {
                        v185 = sub_27800((__int64)v184, v185);
                        if ( (unsigned __int8)equal_bytes() )
                          goto LABEL_82;
                        v40 = (const char *)v185;
                        v18 = 0;
                        v216 = 0;
                        haystack = nullptr;
                        ea_name = get_ea_name();
                        v48 = haystack;
                        if ( ea_name <= 0 || (v40 = "__RTC_CheckEsp", !strstr(haystack, "__RTC_CheckEsp")) )
                        {
                          if ( v48 )
                          {
                            *(_QWORD *)&v216 = 0;
                            qfree();
                          }
                          goto LABEL_122;
                        }
                        if ( v48 )
                        {
                          *(_QWORD *)&v216 = 0;
                          qfree();
                        }
LABEL_82:
                        sub_242C0(a1, -1, *(__int64 *)&v217[16]);
                        v189 = 0;
                        v21 = *(_QWORD *)&v217[16];
                        LODWORD(v185) = 1;
                        v188 = 0;
                      }
                    }
                  }
                  if ( !((unsigned int)v185 | v188) )
                    goto LABEL_27;
LABEL_59:
                  if ( !(_DWORD)v185 )
                    goto LABEL_60;
                  if ( v22 != 27 )
                    break;
                  sub_242C0(a1, -1, *(__int64 *)&v217[16]);
                  v189 = 0;
                  v21 = *(_QWORD *)&v217[16];
                  LODWORD(v185) = 0;
                }
                if ( !v188 )
                  goto LABEL_27;
LABEL_60:
                if ( !(unsigned __int8)sub_679F0(v184, v217, 1, *(double *)&v18) )
                  break;
                sub_242C0(a1, -1, *(__int64 *)&v217[16]);
                v46 = sub_6C2B0(v217, 1);
                v189 = 0;
                v21 = *(_QWORD *)&v217[16];
                LODWORD(v185) = 0;
                v188 = v46 ^ 1;
              }
              v36 = sub_679E0(v184, v217, 1);
              v23 = *(_QWORD *)&v217[16];
              v188 = v36 ^ 1;
              if ( *(_WORD *)&v217[24] != 122 )
                goto LABEL_29;
LABEL_62:
              if ( v217[81] == 1 && v190 == -1 )
                break;
              if ( v217[41] != 1 || ((v195 ^ 1) & (v190 != -1)) == 0 || v190 != *(unsigned __int16 *)&v217[46] )
                goto LABEL_29;
              sub_242C0(a1, -1, v23);
              v195 = (v195 ^ 1) & (v190 != -1);
              v21 = *(_QWORD *)&v217[16];
              LODWORD(v185) = 0;
            }
            if ( v217[32] != 33 || v217[41] != 2 || *(_QWORD *)&v217[56] )
              break;
            v190 = *(unsigned __int16 *)&v217[86];
            sub_242C0(a1, -1, v23);
            v195 = 0;
            v21 = *(_QWORD *)&v217[16];
            LODWORD(v185) = 0;
          }
LABEL_29:
          v24 = v19;
          v25 = sub_24180(a1, (__int64)v184, v23);
          v26 = a1[2];
          v27 = v25;
          v28 = v26;
          if ( v25 )
            goto LABEL_84;
          v29 = *(unsigned __int16 *)&v217[24];
          if ( v19 >= v26 )
            break;
          do
          {
            v30 = _mm_loadu_si128((const __m128i *)(a1[1] + 32 * v24 + 8));
            v18 = _mm_add_epi64(v30, _mm_srli_si128(v30, 8)).m128i_u64[0];
            if ( v20 < v18 )
              break;
            v24 = ++v19;
          }
          while ( v19 < v26 );
          v193 |= v24 >= v26;
          if ( *(_WORD *)&v217[24] > 0x83u )
          {
            if ( *(_WORD *)&v217[24] == 132 )
              goto LABEL_52;
            if ( (unsigned __int16)(*(_WORD *)&v217[24] - 166) > 0x32u )
              goto LABEL_41;
            v34 = 0x40800FFFFFFFDLL;
            LOWORD(v29) = *(_WORD *)&v217[24] - 166;
            if ( !_bittest64(&v34, v29) )
              goto LABEL_41;
          }
          else if ( *(_WORD *)&v217[24] <= 0x81u )
          {
            if ( *(_WORD *)&v217[24] == 43 )
              goto LABEL_52;
            if ( *(_WORD *)&v217[24] > 0x2Bu )
            {
              if ( *(_WORD *)&v217[24] != 92 && *(_WORD *)&v217[24] != 128 && *(_WORD *)&v217[24] != 44 )
                goto LABEL_41;
              goto LABEL_51;
            }
            if ( *(_WORD *)&v217[24] <= 7u )
            {
              if ( *(_WORD *)&v217[24] <= 4u )
                goto LABEL_41;
            }
            else if ( *(_WORD *)&v217[24] != 34 )
            {
              goto LABEL_96;
            }
          }
LABEL_51:
          if ( v217[41] == 1 && *(_WORD *)&v217[46] == 4 )
            goto LABEL_41;
LABEL_52:
          if ( v193 )
            goto LABEL_72;
          LOBYTE(v185) = v27;
          v35 = sub_6C2B0(v217, 2);
          v32 = v185;
          if ( v35 )
          {
LABEL_54:
            v33 = *(_WORD *)&v217[24];
            if ( *(_WORD *)&v217[24] > 0x86u )
            {
              if ( *(_WORD *)&v217[24] == 214 )
                goto LABEL_213;
              if ( *(_WORD *)&v217[24] > 0xD6u )
              {
                if ( *(_WORD *)&v217[24] != 451 )
                {
                  if ( *(_WORD *)&v217[24] <= 0x1C3u )
                  {
                    if ( *(_WORD *)&v217[24] == 216 )
                      goto LABEL_175;
                    if ( *(_WORD *)&v217[24] != 444 )
                      goto LABEL_166;
                  }
                  else
                  {
                    if ( *(_WORD *)&v217[24] > 0x22Bu )
                    {
                      if ( *(_WORD *)&v217[24] == 569 )
                        goto LABEL_116;
LABEL_338:
                      if ( v33 == 594 )
                        goto LABEL_175;
                      goto LABEL_166;
                    }
                    if ( *(_WORD *)&v217[24] <= 0x229u )
                      goto LABEL_166;
                  }
                }
                if ( v217[41] != 1 )
                  goto LABEL_158;
LABEL_272:
                if ( *(_WORD *)&v217[46] == 4 )
                  goto LABEL_168;
LABEL_273:
                if ( v217[81] == 4 )
                  goto LABEL_276;
                if ( v217[81] == 2 )
                {
                  if ( !v217[112] )
                    goto LABEL_168;
                  if ( *(_DWORD *)(v184[4] + 24LL) == 8 )
                  {
                    v185 = *(_QWORD *)&v217[96];
                    v101 = v217[28];
                  }
                  else
                  {
                    v101 = v217[28];
                    v185 = *(int *)&v217[96];
                  }
                  v214 = -1;
                  v102 = (v217[113] >> 3) & 7;
                  v103 = (v217[113] >> 3) & 7;
                  if ( (v101 & 0x10) != 0 && (v217[33] & 2) != 0 )
                  {
                    if ( *(_WORD *)&v217[24] > 0x5C0u )
                    {
                      if ( *(_WORD *)&v217[24] > 0x5F1u )
                      {
                        if ( (unsigned __int16)(*(_WORD *)&v217[24] - 1532) > 0xFu )
                          goto LABEL_349;
                      }
                      else if ( *(_WORD *)&v217[24] <= 0x5EDu )
                      {
                        goto LABEL_349;
                      }
                    }
                    else if ( *(_WORD *)&v217[24] <= 0x5BCu )
                    {
                      if ( *(_WORD *)&v217[24] > 0x378u )
                      {
                        if ( (unsigned __int16)(*(_WORD *)&v217[24] - 993) > 3u )
                          goto LABEL_349;
                      }
                      else if ( *(_WORD *)&v217[24] <= 0x374u )
                      {
                        goto LABEL_349;
                      }
                    }
                    v102 = v103 | 8;
LABEL_585:
                    v202 = v32;
                    if ( (v217[273] & 0x10) != 0 )
                      v102 |= 0x10u;
                    v159 = sub_23710((__int64)v217, v102);
                    v32 = v202;
                    if ( v159 == 4 || v159 == -1 )
                    {
LABEL_579:
                      v201 = -1;
                      v85 = a1[4];
                      v84 = -1;
                      goto LABEL_396;
                    }
LABEL_349:
                    v203 = v32;
                    v104 = sub_23A40((__int64)v217, (__int64)&v217[80]);
                    v201 = -1;
                    v32 = v203;
                    v84 = v104;
                    goto LABEL_283;
                  }
                  if ( *(_WORD *)&v217[24] > 0x5C0u )
                  {
                    if ( *(_WORD *)&v217[24] > 0x5F1u )
                    {
                      if ( (unsigned __int16)(*(_WORD *)&v217[24] - 1532) <= 0xFu )
                        goto LABEL_585;
                    }
                    else if ( *(_WORD *)&v217[24] > 0x5EDu )
                    {
                      goto LABEL_585;
                    }
                  }
                  else
                  {
                    if ( *(_WORD *)&v217[24] > 0x5BCu )
                      goto LABEL_585;
                    if ( *(_WORD *)&v217[24] > 0x378u )
                    {
                      if ( (unsigned __int16)(*(_WORD *)&v217[24] - 993) <= 3u )
                        goto LABEL_585;
                    }
                    else if ( *(_WORD *)&v217[24] > 0x374u )
                    {
                      goto LABEL_585;
                    }
                  }
                  if ( v103 == 4 )
                    goto LABEL_579;
                  goto LABEL_349;
                }
                if ( v217[81] != 3 )
                  goto LABEL_168;
LABEL_276:
                v82 = *(_QWORD *)&v217[96];
                if ( *(_DWORD *)(v184[4] + 24LL) != 8 )
                  v82 = *(int *)&v217[96];
                v185 = v82;
                if ( v217[112] )
                {
                  LOBYTE(v106) = (v217[113] >> 3) & 7;
                  v201 = v217[113] & 7;
                  if ( (v217[28] & 0x10) != 0 )
                  {
                    v214 = -1;
                    v107 = v217[113] & 7 | 8;
                    if ( (v217[33] & 1) == 0 )
                      v107 = v217[113] & 7;
                    v201 = v107;
                    if ( (v217[33] & 2) != 0 )
                    {
                      v106 = (char)(v106 | 8);
                      if ( *(_WORD *)&v217[24] > 0x5C0u )
                      {
                        if ( *(_WORD *)&v217[24] > 0x5F1u )
                        {
                          if ( (unsigned __int16)(*(_WORD *)&v217[24] - 1532) > 0xFu )
                            goto LABEL_395;
                        }
                        else if ( *(_WORD *)&v217[24] <= 0x5EDu )
                        {
                          goto LABEL_395;
                        }
                      }
                      else if ( *(_WORD *)&v217[24] <= 0x5BCu )
                      {
                        if ( *(_WORD *)&v217[24] > 0x378u )
                        {
                          if ( (unsigned __int16)(*(_WORD *)&v217[24] - 993) > 3u )
                            goto LABEL_395;
                        }
                        else if ( *(_WORD *)&v217[24] <= 0x374u )
                        {
                          goto LABEL_395;
                        }
                      }
LABEL_491:
                      v205 = v32;
                      if ( (v217[273] & 0x10) != 0 )
                        v106 |= 0x10u;
                      v134 = sub_23710((__int64)v217, v106);
                      v32 = v205;
                      if ( v134 == 4 || v134 == -1 )
                        goto LABEL_447;
LABEL_395:
                      v85 = a1[4];
                      v84 = -1;
LABEL_396:
                      v108 = (v85 != -1) + 4;
                      goto LABEL_397;
                    }
                  }
                  else
                  {
                    v214 = -1;
                  }
                  v106 = (char)v106;
                  if ( *(_WORD *)&v217[24] > 0x5C0u )
                  {
                    if ( *(_WORD *)&v217[24] > 0x5F1u )
                    {
                      if ( (unsigned __int16)(*(_WORD *)&v217[24] - 1532) > 0xFu )
                      {
LABEL_446:
                        if ( (char)v106 != 4 )
                          goto LABEL_395;
                        goto LABEL_447;
                      }
                    }
                    else if ( *(_WORD *)&v217[24] <= 0x5EDu )
                    {
                      goto LABEL_446;
                    }
                  }
                  else if ( *(_WORD *)&v217[24] <= 0x5BCu )
                  {
                    if ( *(_WORD *)&v217[24] > 0x378u )
                    {
                      if ( (unsigned __int16)(*(_WORD *)&v217[24] - 993) > 3u )
                        goto LABEL_446;
                    }
                    else if ( *(_WORD *)&v217[24] <= 0x374u )
                    {
                      goto LABEL_446;
                    }
                  }
                  goto LABEL_491;
                }
                v83 = *(_WORD *)&v217[28] & 0x1018;
                v84 = *(unsigned __int16 *)&v217[86];
                if ( v83 != 4096 && v83 != 8 )
                {
                  v214 = -1;
                  goto LABEL_282;
                }
                if ( *(_WORD *)&v217[86] == 0xFFFF )
                  goto LABEL_597;
                if ( *(_WORD *)&v217[86] > 7u )
                {
                  sub_22470(*(int *)&v217[96]);
LABEL_597:
                  sub_22490();
                }
                v214 = -1;
                v201 = dword_95FE0[*(unsigned __int16 *)&v217[86]];
                if ( v201 == -1 )
                {
                  if ( *(_WORD *)&v217[86] > 3u )
                    goto LABEL_395;
                  goto LABEL_349;
                }
                if ( *(_WORD *)&v217[86] <= 3u )
                  goto LABEL_395;
LABEL_447:
                v84 = v201;
LABEL_282:
                v201 = v84;
                if ( v84 == 4 )
                  goto LABEL_285;
LABEL_283:
                v85 = a1[4];
                if ( v84 != 5 )
                  goto LABEL_396;
                if ( v85 != -1 )
                  goto LABEL_285;
                v108 = 4;
LABEL_397:
                v204 = v32;
                haystack = nullptr;
                v213 = -1;
                v174 = v84;
                v109 = sub_27940((__int64)v184, *(__int64 *)&v217[16], v84, v108, (int *)&v213, &v214, &haystack);
                v84 = v174;
                v32 = v204;
                if ( !v109 )
                  goto LABEL_402;
                v185 += (__int64)haystack;
                v84 = v213;
                if ( *(_DWORD *)(v184[4] + 24LL) != 8 )
                  v185 = (int)v185;
                if ( v213 != 4 )
                {
LABEL_402:
                  if ( a1[4] == -1 || v84 != 5 )
                    goto LABEL_168;
                }
LABEL_285:
                v86 = a1[2];
                if ( !v86 )
                  goto LABEL_168;
                v87 = a1[2];
                while ( 1 )
                {
                  v88 = v87--;
                  if ( v217[41] == 1 )
                    break;
                  if ( !v87 )
                    goto LABEL_168;
                }
                v126 = a1[1];
                if ( *(__int16 *)(v126 + 32 * v87 + 24) != *(unsigned __int16 *)&v217[46] )
                {
                  while ( v87 )
                  {
                    v127 = *(__int16 *)(v126 + 32 * (v87 - 1) + 24);
                    v88 = v87--;
                    if ( v127 == *(unsigned __int16 *)&v217[46] )
                      goto LABEL_467;
                  }
                  goto LABEL_168;
                }
LABEL_467:
                v207 = v88 - 1;
                v179 = v126 + 32 * (v88 - 1);
                if ( v84 == 5 )
                {
                  if ( func )
                  {
                    v206 = *(_QWORD *)(func + 56);
                    if ( v206 )
                    {
                      v148 = *(unsigned __int16 *)(func + 40);
                      if ( !*(_WORD *)(func + 40) )
                      {
                        v208 = v32;
                        func_bitness = get_func_bitness();
                        v32 = v208;
                        v148 = (1 << (func_bitness + 4)) / 8;
                      }
                    }
                    else
                    {
                      v147 = a1[4];
                      if ( v147 == v86 )
                        v148 = sub_23F00((__int64)a1);
                      else
                        v148 = *(_QWORD *)(v126 + 32 * v147 + 8);
                      if ( v148 )
                      {
                        v211 = v32;
                        v160 = get_func_bitness();
                        v32 = v211;
                        v148 -= (1 << (v160 + 4)) / 8;
                      }
                      else
                      {
                        v206 = 0;
                      }
                    }
                  }
                  else
                  {
                    v148 = 0;
                    v206 = 0;
                  }
                  v149 = (int)v148 + (int)v206 - (int)v185;
                  if ( *(_DWORD *)(v184[4] + 24LL) == 8 )
                    v149 = v148 + v206 - v185;
                  v150 = *(_QWORD *)(v179 + 8);
                  if ( v150 > v149 || *(_QWORD *)(v179 + 16) + v150 <= v149 )
                    goto LABEL_168;
                  v193 |= v196 <= v19;
                }
                else
                {
                  v128 = v20;
                  if ( (*(_BYTE *)(v179 + 26) & 1) != 0 )
                    v128 = sub_23F00((__int64)a1);
                  v129 = v128 - v185;
                  if ( *(_DWORD *)(v184[4] + 24LL) != 8 )
                    v129 = (int)v129;
                  v130 = *(_QWORD *)(v179 + 8);
                  if ( v130 > v129 || *(_QWORD *)(v179 + 16) + v130 <= v129 )
                    goto LABEL_168;
                }
                if ( v214 != -1 )
                {
                  v185 = v214;
                  if ( (unsigned __int8)sub_24540((__int64)a1, (__int64)v184, v201, v214, a3, *(__int64 *)&v217[16]) )
                    sub_242C0(a1, -1, v185);
                }
                v131 = -1;
                if ( v207 == v24 )
                  v131 = v24;
                sub_242C0(a1, v131, *(__int64 *)&v217[16]);
                v189 = 0;
                LODWORD(v185) = 0;
                v21 = *(_QWORD *)&v217[16];
                v132 = _mm_loadu_si128((const __m128i *)(v179 + 8));
                v18 = _mm_add_epi64(v132, _mm_srli_si128(v132, 8)).m128i_u64[0];
                v133 = v18;
                if ( v192 >= v18 )
                  v133 = v192;
                v192 = v133;
              }
              else
              {
                if ( *(_WORD *)&v217[24] <= 0xD1u )
                {
                  if ( *(_WORD *)&v217[24] <= 0x97u )
                    goto LABEL_166;
                  v45 = 1LL << (v217[24] + 104);
                  if ( (v45 & 0x833FFFFFFF7C0FLL) != 0 )
                    goto LABEL_175;
                  if ( (v45 & 0x70000000008000LL) != 0 )
                    goto LABEL_116;
                  goto LABEL_114;
                }
                if ( *(_WORD *)&v217[24] == 210 || *(_WORD *)&v217[24] == 213 )
                  goto LABEL_116;
LABEL_166:
                v186 = v32;
                v56 = sub_6C2B0(v217, 2);
                v32 = v186;
                if ( !v56 )
                  goto LABEL_177;
LABEL_167:
                if ( v217[41] == 1 )
                  goto LABEL_272;
LABEL_168:
                if ( *(_WORD *)&v217[24] != 122 )
                {
LABEL_158:
                  if ( !v193 )
                    goto LABEL_171;
LABEL_159:
                  ++v189;
                  v21 = *(_QWORD *)&v217[16];
LABEL_137:
                  v52 = v194;
                  goto LABEL_138;
                }
                if ( v193 )
                  goto LABEL_159;
LABEL_170:
                if ( v217[41] != 1 )
                  goto LABEL_171;
                if ( *(_WORD *)&v217[46] == 4 )
                {
                  v111 = -1;
                  if ( v217[81] == 1 )
                    v111 = *(unsigned __int16 *)&v217[86];
                  v112 = a1[4] == -1;
                  v214 = 0;
                  v113 = 4;
                  v213 = -1;
                  haystack = (char *)-1LL;
                  if ( !v112 )
                    v113 = 5;
                  v176 = v111;
                  v114 = sub_27940(
                           (__int64)v184,
                           *(__int64 *)&v217[16],
                           v111,
                           v113,
                           (int *)&v213,
                           (__int64 *)&haystack,
                           &v214);
                  v115 = v176;
                  if ( !v114 )
                    goto LABEL_433;
                  v177 = v213;
                  if ( v213 == 4 )
                  {
                    if ( !v214 )
                      goto LABEL_618;
                    v182 = v115;
                    v152 = sub_23F00((__int64)a1);
                    v115 = v182;
                    if ( v20 < v152 )
                    {
                      if ( v153 < 0 )
                        goto LABEL_177;
                      if ( a1[4] != -1 )
                        goto LABEL_559;
                    }
                    else
                    {
                      if ( a1[4] == -1 || !v197 || v196 < v19 || v153 < 0 )
                        goto LABEL_177;
LABEL_559:
                      if ( v196 == v19 && v197 )
                      {
                        if ( v197 < v153 )
                        {
                          v154 = v197;
                          v197 = 0;
                          v153 -= v154;
                          v214 = v153;
                          goto LABEL_563;
                        }
                        v197 -= v153;
LABEL_618:
                        v161 = haystack;
                        if ( (unsigned __int8)sub_24540(
                                                (__int64)a1,
                                                (__int64)v184,
                                                v115,
                                                (__int64)haystack,
                                                a3,
                                                *(__int64 *)&v217[16]) )
                          sub_242C0(a1, -1, (__int64)v161);
                        v120 = *(_QWORD *)&v217[16];
LABEL_440:
                        sub_242C0(a1, -1, v120);
                        v194 = 0;
                        v21 = *(_QWORD *)&v217[16];
                        goto LABEL_137;
                      }
                    }
LABEL_563:
                    v187 = v182;
                    v183 = v153 + v20;
                    v155 = sub_23F00((__int64)a1);
                    if ( v156 > v155 )
                      goto LABEL_177;
                    v157 = haystack;
                    if ( (unsigned __int8)sub_24540(
                                            (__int64)a1,
                                            (__int64)v184,
                                            v187,
                                            (__int64)haystack,
                                            a3,
                                            *(__int64 *)&v217[16]) )
                      sub_242C0(a1, -1, (__int64)v157);
                    sub_242C0(a1, -1, *(__int64 *)&v217[16]);
                    v158 = sub_23F00((__int64)a1);
                    v20 = v183;
                    v21 = *(_QWORD *)&v217[16];
                    v194 = v183 == v158;
                    goto LABEL_137;
                  }
                  if ( v214 )
                  {
                    v181 = v114;
                    sub_242C0(a1, a1[4], *(__int64 *)&v217[16]);
                    v19 = *((_DWORD *)a1 + 4);
                    if ( v192 >= v20 )
                      v20 = v192;
                    v192 = v20;
                    v151 = sub_23F00((__int64)a1);
                    v21 = *(_QWORD *)&v217[16];
                    v20 = v151;
                    v194 = v181;
                    goto LABEL_137;
                  }
                  v185 = (__int64)haystack;
                  if ( (unsigned __int8)sub_24540(
                                          (__int64)a1,
                                          (__int64)v184,
                                          v115,
                                          (__int64)haystack,
                                          a3,
                                          *(__int64 *)&v217[16]) )
                    sub_242C0(a1, -1, v185);
                  v115 = v177;
LABEL_433:
                  v116 = a1[2];
                  v117 = a1[4];
                  v21 = *(_QWORD *)&v217[16];
                  if ( v24 < v116 )
                  {
                    v118 = a1[1];
                    v119 = v118 + 32 * v24;
                    if ( *(_WORD *)(v119 + 24) != 0xFFFF )
                    {
                      if ( v115 != 5 || v117 == -1 )
                      {
                        if ( (*(_BYTE *)a1 & 8) == 0 || v217[81] != 1 || *(_WORD *)&v217[86] != 3 )
                          goto LABEL_137;
                        v120 = *(_QWORD *)&v217[16];
                        goto LABEL_440;
                      }
                      if ( *(_WORD *)(v119 + 24) != 5 && i < v117 )
                      {
                        v135 = v117 - 1;
LABEL_601:
                        if ( *(_WORD *)(v118 + 32 * v135 + 24) == 5 )
                        {
                          v19 = v117 - 1;
                          v24 = (int)v117 - 1;
                        }
                      }
LABEL_501:
                      if ( v24 < v116 && *(_WORD *)(v118 + 32 * v24 + 24) == 5 )
                      {
                        sub_242C0(a1, -1, *(__int64 *)&v217[16]);
                        v162 = v19 + 1;
                        v21 = *(_QWORD *)&v217[16];
                        v163 = v19 + 1;
                        v198 = *(_QWORD *)&v217[16] + *(unsigned __int16 *)&v217[26];
                        if ( v192 >= v20 )
                          v20 = v192;
                        v164 = a1[1];
                        v165 = _mm_loadu_si128((const __m128i *)(v164 + 32 * v24 + 8));
                        v192 = v20;
                        v166 = 32LL * v162 + v164;
                        v167 = 0;
                        v168 = v19 + 1;
                        v18 = _mm_add_epi64(v165, _mm_srli_si128(v165, 8)).m128i_u64[0];
                        while ( 1 )
                        {
                          v166 += 32;
                          if ( v168 >= v196 )
                            break;
                          ++v168;
                          v167 += *(_QWORD *)(v166 - 16);
                        }
                        v169 = 0;
                        v197 = v167;
                        v170 = (unsigned int)(v196 - 1 - v19);
                        if ( v196 >= v162 )
                          v169 = v196 - 1 - v19;
                        v20 = v167 + v18;
                        v19 = v169 + v162;
                        if ( v196 < v162 )
                          v170 = 0;
                        v194 = (unsigned __int64)(v163 + v170) >= a1[2];
                      }
                      else
                      {
                        if ( (__int64)v24 < v117 )
                          v19 = a1[4];
                        sub_242C0(a1, -1, *(__int64 *)&v217[16]);
                        v21 = *(_QWORD *)&v217[16];
                      }
                      goto LABEL_137;
                    }
                  }
                  if ( v117 != -1 && i < v117 && v115 == 5 )
                  {
                    v135 = v117 - 1;
                    v118 = a1[1];
                    if ( *(_WORD *)(v118 + 32 * (v117 - 1) + 24) == 5 )
                    {
                      if ( *(_WORD *)(v118 + 32 * v24 + 24) != 5 )
                        goto LABEL_601;
                      goto LABEL_501;
                    }
                  }
                  sub_242C0(a1, -1, *(__int64 *)&v217[16]);
                  v21 = *(_QWORD *)&v217[16];
                  v198 = *(_QWORD *)&v217[16] + *(unsigned __int16 *)&v217[26];
                  if ( v196 <= v19 )
                  {
                    v197 = 0;
                  }
                  else
                  {
                    v142 = a1[1];
                    v143 = v142 + 32 * v24;
                    v144 = v142 + 32 * (v24 + (unsigned int)(v196 - v19));
                    v145 = 0;
                    do
                    {
                      v145 += *(_QWORD *)(v143 + 16);
                      v143 += 32;
                    }
                    while ( v144 != v143 );
                    v24 = v196;
                    v197 = v145;
                    v19 = v196;
                  }
                  v20 += v197;
                  v52 = v24 >= a1[2];
                  v32 = v52;
                  if ( v217[41] == 1 )
                    goto LABEL_385;
LABEL_138:
                  v193 = v52;
                  LODWORD(v185) = 0;
                }
                else
                {
LABEL_385:
                  if ( v217[81] == 5 )
                  {
                    v175 = v32;
                    func_chunknum = get_func_chunknum();
                    v32 = v175;
                    if ( func_chunknum >= 0 )
                      goto LABEL_177;
                  }
                  v193 = v32;
                  v21 = *(_QWORD *)&v217[16];
                  LODWORD(v185) = 0;
                }
              }
            }
            else
            {
              if ( *(_WORD *)&v217[24] > 0x5Du )
              {
                switch ( *(_WORD *)&v217[24] )
                {
                  case 0x5E:
                    goto LABEL_194;
                  case 0x63:
                  case 0x65:
                  case 0x66:
                  case 0x67:
                  case 0x6B:
                  case 0x7C:
                  case 0x7D:
                  case 0x7E:
                  case 0x7F:
                  case 0x80:
                  case 0x82:
                  case 0x83:
                    goto LABEL_175;
                  case 0x7A:
                    goto LABEL_167;
                  case 0x81:
                    goto LABEL_116;
                  case 0x86:
                    goto LABEL_203;
                  default:
                    goto LABEL_166;
                }
              }
              if ( *(_WORD *)&v217[24] <= 0x1Eu )
              {
                if ( *(_WORD *)&v217[24] > 4u )
                {
                  switch ( *(_WORD *)&v217[24] )
                  {
                    case 5:
                    case 7:
                      goto LABEL_175;
                    case 6:
                      goto LABEL_115;
                    case 0x10:
                      v28 = a1[2];
                      goto LABEL_217;
                    case 0x11:
                    case 0x12:
                      goto LABEL_187;
                    case 0x13:
                    case 0x14:
                    case 0x16:
                    case 0x17:
                    case 0x18:
                    case 0x1A:
                    case 0x1B:
                    case 0x1C:
                    case 0x1D:
                    case 0x1E:
                      goto LABEL_116;
                    default:
                      goto LABEL_166;
                  }
                }
                goto LABEL_166;
              }
              v57 = *(_WORD *)&v217[24] - 34;
              if ( (unsigned __int16)(*(_WORD *)&v217[24] - 34) > 0x3Au )
                goto LABEL_166;
              v68 = 1LL << v57;
              if ( ((1LL << v57) & 0xC33FFFBF80000LL) != 0 )
                goto LABEL_116;
LABEL_227:
              if ( (v68 & 0x583) != 0 )
                goto LABEL_175;
LABEL_182:
              if ( v57 != 58 )
                goto LABEL_166;
              if ( v217[41] != 1 || *(_WORD *)&v217[46] != 4 )
                goto LABEL_116;
              if ( v217[81] != 4 )
                goto LABEL_177;
              if ( v217[112] )
              {
                v146 = (v217[113] >> 3) & 7;
                if ( (v217[28] & 0x10) != 0 )
                {
                  if ( (v217[33] & 2) != 0 || v146 != 4 || (v217[33] & 1) != 0 )
                    goto LABEL_177;
                }
                else if ( v146 != 4 )
                {
                  goto LABEL_177;
                }
                if ( (v217[113] & 7) != 4 )
                {
                  if ( a1[4] == -1 || (v217[113] & 7) != 5 )
                    goto LABEL_177;
LABEL_133:
                  sub_242C0(a1, -1, *(__int64 *)&v217[16]);
                  v19 = *((_DWORD *)a1 + 4);
                  if ( v192 >= v20 )
                    v20 = v192;
                  v192 = v20;
                  v20 = sub_23F00((__int64)a1);
LABEL_136:
                  v21 = *(_QWORD *)&v217[16];
                  goto LABEL_137;
                }
              }
              else
              {
                v50 = *(_WORD *)&v217[28] & 0x1018;
                if ( v50 == 4096 || v50 == 8 )
                {
                  if ( *(_WORD *)&v217[86] <= 3u )
                    goto LABEL_177;
                  if ( (unsigned __int16)(*(_WORD *)&v217[86] - 4) > 3u )
                    goto LABEL_597;
                  v51 = dword_95FE0[*(unsigned __int16 *)&v217[86]];
                  if ( v51 != 4 )
                  {
                    if ( a1[4] == -1 || v51 != 5 )
                      goto LABEL_177;
                    goto LABEL_133;
                  }
                  goto LABEL_508;
                }
                if ( *(_WORD *)&v217[86] != 4 )
                {
                  if ( a1[4] == -1 || *(_WORD *)&v217[86] != 5 )
                    goto LABEL_177;
                  goto LABEL_133;
                }
              }
LABEL_508:
              v136 = sub_23F00((__int64)a1);
              if ( v20 >= v136 || v137 < 0 )
                goto LABEL_177;
              if ( a1[4] != -1 && v196 == v19 && v197 )
              {
                if ( v197 < v137 )
                {
                  v139 = v197;
                  v197 = 0;
                  v137 -= v139;
                  goto LABEL_515;
                }
                v197 -= v137;
                sub_242C0(a1, -1, *(__int64 *)&v217[16]);
                v21 = *(_QWORD *)&v217[16];
                LODWORD(v185) = 0;
              }
              else
              {
LABEL_515:
                v140 = (int)v20 + (int)v137;
                if ( v138 == 8 )
                  v140 = v20 + v137;
                if ( v136 < v140 )
                {
LABEL_177:
                  v28 = a1[2];
LABEL_84:
                  v41 = 0;
                  if ( v24 < v28 )
                    goto LABEL_87;
                  return (unsigned int)v28;
                }
                v180 = v20 + v137;
                sub_242C0(a1, -1, *(__int64 *)&v217[16]);
                v141 = sub_23F00((__int64)a1);
                LODWORD(v185) = 0;
                v21 = *(_QWORD *)&v217[16];
                v20 = v180;
                v193 |= v180 == v141;
              }
            }
          }
          else
          {
LABEL_43:
            v33 = *(_WORD *)&v217[24];
            if ( *(_WORD *)&v217[24] <= 0x86u )
            {
              if ( *(_WORD *)&v217[24] > 0x5Du )
              {
                switch ( *(_WORD *)&v217[24] )
                {
                  case 0x5E:
                    v189 = 0;
                    goto LABEL_194;
                  case 0x63:
                  case 0x65:
                  case 0x66:
                  case 0x67:
                  case 0x6B:
                  case 0x7C:
                  case 0x7D:
                  case 0x7E:
                  case 0x7F:
                  case 0x80:
                  case 0x82:
                  case 0x83:
                    goto LABEL_174;
                  case 0x7A:
                    if ( v217[41] == 1 )
                    {
                      v193 = 0;
                      v189 = 0;
                      goto LABEL_272;
                    }
                    v189 = 0;
                    if ( *(_WORD *)&v217[24] != 122 )
                      goto LABEL_171;
                    goto LABEL_170;
                  case 0x81:
                    goto LABEL_326;
                  case 0x86:
                    v193 = 0;
                    v189 = 0;
                    goto LABEL_203;
                  default:
                    goto LABEL_165;
                }
              }
              if ( *(_WORD *)&v217[24] <= 0x1Eu )
              {
                if ( *(_WORD *)&v217[24] > 4u )
                {
                  switch ( *(_WORD *)&v217[24] )
                  {
                    case 5:
                    case 7:
                      goto LABEL_174;
                    case 6:
                      v193 = 0;
                      v189 = 0;
                      goto LABEL_115;
                    case 0x10:
                      v189 = 0;
                      v28 = a1[2];
                      goto LABEL_218;
                    case 0x11:
                    case 0x12:
                      goto LABEL_187;
                    case 0x13:
                    case 0x14:
                    case 0x16:
                    case 0x17:
                    case 0x18:
                    case 0x1A:
                    case 0x1B:
                    case 0x1C:
                    case 0x1D:
                    case 0x1E:
                      goto LABEL_326;
                    default:
                      break;
                  }
                }
LABEL_165:
                v193 = 0;
                v189 = 0;
                goto LABEL_166;
              }
              v57 = *(_WORD *)&v217[24] - 34;
              if ( (unsigned __int16)(*(_WORD *)&v217[24] - 34) > 0x3Au )
                goto LABEL_165;
              if ( ((1LL << v57) & 0xC33FFFBF80000LL) == 0 )
              {
                if ( ((1LL << v57) & 0x583) == 0 )
                {
                  v193 = 0;
                  v189 = 0;
                  goto LABEL_182;
                }
LABEL_174:
                v193 = 0;
                v189 = 0;
LABEL_175:
                if ( v217[41] == 1 && *(_WORD *)&v217[46] == 4 )
                  goto LABEL_177;
                goto LABEL_116;
              }
              goto LABEL_326;
            }
            if ( *(_WORD *)&v217[24] == 214 )
            {
              v193 = 0;
              v189 = 0;
LABEL_213:
              if ( v217[81] == 1 && *(_WORD *)&v217[86] == 4 )
                goto LABEL_177;
              goto LABEL_175;
            }
            if ( *(_WORD *)&v217[24] > 0xD6u )
            {
              if ( *(_WORD *)&v217[24] != 451 )
              {
                if ( *(_WORD *)&v217[24] <= 0x1C3u )
                {
                  if ( *(_WORD *)&v217[24] == 216 )
                    goto LABEL_174;
                  if ( *(_WORD *)&v217[24] != 444 )
                    goto LABEL_165;
                }
                else
                {
                  if ( *(_WORD *)&v217[24] > 0x22Bu )
                  {
                    if ( *(_WORD *)&v217[24] != 569 )
                    {
                      if ( *(_WORD *)&v217[24] != 594 )
                        goto LABEL_165;
                      goto LABEL_174;
                    }
                    goto LABEL_326;
                  }
                  if ( *(_WORD *)&v217[24] <= 0x229u )
                    goto LABEL_165;
                }
              }
              v189 = 0;
              if ( v217[41] == 1 )
              {
                v193 = 0;
                if ( *(_WORD *)&v217[46] != 4 )
                  goto LABEL_273;
              }
LABEL_171:
              v193 = 0;
              v21 = *(_QWORD *)&v217[16];
              LODWORD(v185) = 0;
            }
            else
            {
              if ( *(_WORD *)&v217[24] > 0xD1u )
              {
                if ( *(_WORD *)&v217[24] != 210 && *(_WORD *)&v217[24] != 213 )
                  goto LABEL_165;
                goto LABEL_326;
              }
              if ( *(_WORD *)&v217[24] <= 0x97u )
                goto LABEL_165;
              v54 = 1LL << (v217[24] + 104);
              if ( (v54 & 0x833FFFFFFF7C0FLL) != 0 )
                goto LABEL_174;
              if ( (v54 & 0x70000000008000LL) != 0 )
              {
LABEL_326:
                v193 = 0;
                v21 = *(_QWORD *)&v217[16];
                v189 = 0;
                LODWORD(v185) = 0;
              }
              else
              {
                v193 = 0;
                v189 = 0;
LABEL_114:
                if ( v33 != 209 )
                  goto LABEL_166;
LABEL_115:
                if ( v217[41] == 1 && *(_WORD *)&v217[46] == 4 )
                {
                  v96 = sub_23F00((__int64)a1);
                  if ( v20 < v96 )
                  {
                    if ( v217[81] != 5 )
                      goto LABEL_177;
                    if ( !v197 )
                    {
                      v28 = a1[2];
                      if ( v24 >= v28 || *(_WORD *)(a1[1] + 32 * v24 + 24) != 0xFFFF )
                        goto LABEL_84;
                    }
                  }
                  else if ( a1[4] == -1 || !v197 || v196 < v19 || v217[81] != 5 )
                  {
                    goto LABEL_177;
                  }
                  v98 = *(_DWORD *)(v184[4] + 24LL);
                  v99 = *(int *)&v217[88];
                  if ( v98 == 8 )
                    v99 = *(_QWORD *)&v217[88];
                  if ( v97 == 209 )
                    v99 = -v99;
                  if ( v99 < 0 )
                    goto LABEL_177;
                  if ( a1[4] == -1 )
                  {
LABEL_451:
                    v122 = v20 + v99;
                    v123 = (int)v20 + (int)v99;
                    if ( v98 == 8 )
                      v123 = v122;
                    if ( v123 > v96 )
                      goto LABEL_177;
                    v178 = v122;
                    sub_242C0(a1, -1, *(__int64 *)&v217[16]);
                    v124 = a1[2];
                    if ( v24 < v124 )
                    {
                      do
                      {
                        v125 = _mm_loadu_si128((const __m128i *)(a1[1] + 32 * v24 + 8));
                        v18 = _mm_add_epi64(v125, _mm_srli_si128(v125, 8)).m128i_u64[0];
                        if ( v178 < v18 )
                          break;
                        v24 = ++v19;
                      }
                      while ( v19 < v124 );
                    }
                    LODWORD(v185) = 0;
                    v21 = *(_QWORD *)&v217[16];
                    v20 = v178;
                    v193 |= v24 >= v124;
                  }
                  else
                  {
                    if ( v197 < v99 )
                      goto LABEL_449;
                    if ( v196 != v19 )
                    {
                      if ( v197 >= v99 )
                        goto LABEL_451;
LABEL_449:
                      if ( v196 == v19 )
                      {
                        v121 = v197;
                        v197 = 0;
                        v99 -= v121;
                      }
                      goto LABEL_451;
                    }
                    v197 -= v99;
                    sub_242C0(a1, -1, *(__int64 *)&v217[16]);
                    LODWORD(v185) = 0;
                    v21 = *(_QWORD *)&v217[16];
                    v193 |= v24 >= a1[2];
                  }
                }
                else
                {
LABEL_116:
                  LODWORD(v185) = 0;
                  v21 = *(_QWORD *)&v217[16];
                }
              }
            }
          }
        }
        if ( *(_WORD *)&v217[24] > 0x83u )
        {
          if ( *(_WORD *)&v217[24] == 132 )
            goto LABEL_72;
          if ( (unsigned __int16)(*(_WORD *)&v217[24] - 166) > 0x32u )
            goto LABEL_258;
          v100 = 0x40800FFFFFFFDLL;
          LOWORD(v29) = *(_WORD *)&v217[24] - 166;
          if ( !_bittest64(&v100, v29) )
            goto LABEL_258;
LABEL_331:
          if ( v217[41] == 1 && *(_WORD *)&v217[46] == 4 )
            goto LABEL_258;
          goto LABEL_72;
        }
        if ( *(_WORD *)&v217[24] > 0x81u )
          goto LABEL_331;
        if ( *(_WORD *)&v217[24] == 43 )
          goto LABEL_72;
        if ( *(_WORD *)&v217[24] <= 0x2Bu )
          break;
        if ( *(_WORD *)&v217[24] != 92 && *(_WORD *)&v217[24] != 128 && *(_WORD *)&v217[24] != 44 )
          goto LABEL_258;
        if ( v217[41] == 1 && *(_WORD *)&v217[46] == 4 )
        {
          v193 = v194;
LABEL_41:
          LOBYTE(v185) = v27;
          v31 = sub_6C2B0(v217, 2);
          v32 = v185;
          if ( !v31 )
          {
            if ( v193 )
              goto LABEL_177;
            goto LABEL_43;
          }
          v78 = v193;
          goto LABEL_260;
        }
LABEL_72:
        v193 = (v188 ^ 1) & (++v189 > 8);
        if ( !v193 )
          goto LABEL_136;
        if ( v195 | (v190 == -1) )
        {
          LOBYTE(v185) = v27;
          v37 = sub_6C2B0(v217, 2);
          v32 = v185;
          v193 = v37;
          if ( !v37 )
            goto LABEL_177;
          if ( (((unsigned __int8)v188 ^ 1) & 1) != 0 )
          {
LABEL_76:
            v26 = a1[2];
LABEL_99:
            v28 = v26;
            goto LABEL_84;
          }
          goto LABEL_54;
        }
        v195 = 0;
        v21 = *(_QWORD *)&v217[16];
        LODWORD(v185) = 0;
      }
      if ( *(_WORD *)&v217[24] > 7u )
        break;
      if ( *(_WORD *)&v217[24] > 4u )
        goto LABEL_331;
LABEL_258:
      LOBYTE(v185) = v27;
      v77 = sub_6C2B0(v217, 2);
      v32 = v185;
      if ( !v77 )
        goto LABEL_177;
      v78 = v194;
LABEL_260:
      v193 = (v188 ^ 1) & v78 & (v189 > 8);
      if ( !v193 )
      {
        v193 = v78;
        goto LABEL_54;
      }
      if ( v195 | (v190 == -1) )
        goto LABEL_76;
      v33 = *(_WORD *)&v217[24];
      if ( *(_WORD *)&v217[24] > 0x86u )
      {
        if ( *(_WORD *)&v217[24] == 214 )
          goto LABEL_213;
        if ( *(_WORD *)&v217[24] > 0xD6u )
        {
          if ( *(_WORD *)&v217[24] == 451 )
            goto LABEL_381;
          if ( *(_WORD *)&v217[24] <= 0x1C3u )
          {
            if ( *(_WORD *)&v217[24] == 216 )
              goto LABEL_175;
            if ( *(_WORD *)&v217[24] == 444 )
            {
LABEL_381:
              if ( v217[41] != 1 || *(_WORD *)&v217[46] == 4 )
                goto LABEL_159;
              goto LABEL_273;
            }
            goto LABEL_166;
          }
          if ( *(_WORD *)&v217[24] <= 0x22Bu )
          {
            if ( *(_WORD *)&v217[24] > 0x229u )
              goto LABEL_381;
            goto LABEL_166;
          }
          if ( *(_WORD *)&v217[24] != 569 )
            goto LABEL_338;
        }
        else if ( *(_WORD *)&v217[24] > 0xD1u )
        {
          if ( *(_WORD *)&v217[24] != 210 && *(_WORD *)&v217[24] != 213 )
            goto LABEL_166;
        }
        else
        {
          if ( *(_WORD *)&v217[24] <= 0x97u )
            goto LABEL_166;
          v105 = 1LL << (v217[24] + 104);
          if ( (v105 & 0x833FFFFFFF7C0FLL) != 0 )
            goto LABEL_175;
          if ( (v105 & 0x70000000008000LL) == 0 )
            goto LABEL_114;
        }
LABEL_363:
        v195 = 0;
        v21 = *(_QWORD *)&v217[16];
        LODWORD(v185) = 0;
        v188 = 0;
      }
      else
      {
        if ( *(_WORD *)&v217[24] <= 0x5Du )
        {
          if ( *(_WORD *)&v217[24] <= 0x1Eu )
          {
            if ( *(_WORD *)&v217[24] > 4u )
            {
              switch ( *(_WORD *)&v217[24] )
              {
                case 5:
                case 7:
                  goto LABEL_175;
                case 6:
                  goto LABEL_115;
                case 0x10:
                  goto LABEL_76;
                case 0x11:
                case 0x12:
                  goto LABEL_187;
                case 0x13:
                case 0x14:
                case 0x16:
                case 0x17:
                case 0x18:
                case 0x1A:
                case 0x1B:
                case 0x1C:
                case 0x1D:
                case 0x1E:
                  goto LABEL_363;
                default:
                  goto LABEL_166;
              }
            }
            goto LABEL_166;
          }
          v57 = *(_WORD *)&v217[24] - 34;
          if ( (unsigned __int16)(*(_WORD *)&v217[24] - 34) > 0x3Au )
            goto LABEL_166;
          v68 = 1LL << v57;
          if ( ((1LL << v57) & 0xC33FFFBF80000LL) == 0 )
            goto LABEL_227;
          goto LABEL_363;
        }
        switch ( *(_WORD *)&v217[24] )
        {
          case 0x5E:
LABEL_194:
            v58 = a1[4];
            v21 = *(_QWORD *)&v217[16];
            v59 = a1[2];
            if ( v58 == -1 )
            {
              if ( v24 >= v59 )
                goto LABEL_137;
              v61 = 32 * v24;
              if ( *(_WORD *)(a1[1] + 32 * v24 + 24) != 5 )
                goto LABEL_137;
            }
            else
            {
              v60 = a1[1];
              if ( *(_WORD *)(v60 + 32 * v24 + 24) != 5 && v58 > i && *(_WORD *)(32 * v58 + v60 - 8) == 5 )
              {
                v19 = v58 - 1;
                v24 = (int)v58 - 1;
              }
              if ( v24 >= v59 || (v61 = 32 * v24, *(_WORD *)(v60 + 32 * v24 + 24) != 5) )
              {
                LODWORD(v185) = 0;
                if ( v58 > (__int64)v24 )
                  v19 = a1[4];
                v193 = v194;
                goto LABEL_19;
              }
            }
            v173 = v61;
            sub_242C0(a1, v24, *(__int64 *)&v217[16]);
            v89 = a1[1];
            v21 = *(_QWORD *)&v217[16];
            v198 = *(_QWORD *)&v217[16] + *(unsigned __int16 *)&v217[26];
            if ( v192 >= v20 )
              v20 = v192;
            v192 = v20;
            v90 = *(_QWORD *)(v89 + v173 + 8);
            v91 = v19 + 1;
            v197 = *(_QWORD *)(v89 + v173 + 16);
            if ( v196 <= v19 + 1 )
            {
              ++v19;
            }
            else
            {
              v92 = 32 * (v91 + (unsigned __int64)(unsigned int)(v196 - 2 - v19));
              v93 = (_QWORD *)(v89 + 32LL * v91 + 16);
              v94 = v89 + v92 + 48;
              v95 = *(_QWORD *)(v89 + v173 + 16);
              do
              {
                v95 += *v93;
                v93 += 4;
              }
              while ( (_QWORD *)v94 != v93 );
              v197 = v95;
              v19 = v196;
            }
            LODWORD(v185) = 0;
            v20 = v197 + v90;
            v193 = (unsigned __int64)v19 >= a1[2];
            goto LABEL_19;
          case 0x63:
          case 0x65:
          case 0x66:
          case 0x67:
          case 0x6B:
          case 0x7C:
          case 0x7D:
          case 0x7E:
          case 0x7F:
          case 0x80:
          case 0x82:
          case 0x83:
            goto LABEL_175;
          case 0x7A:
            if ( v217[41] == 1 )
              goto LABEL_272;
            goto LABEL_159;
          case 0x81:
            goto LABEL_363;
          case 0x86:
LABEL_203:
            if ( v20 >= (__int64)sub_23F00((__int64)a1) )
              goto LABEL_177;
            v62 = (unsigned __int64 *)&v219[40];
            *(_QWORD *)&v219[24] = 0;
            *(_QWORD *)&v219[32] = 0;
            memset(v219, 255, 24);
            v18 = 0;
            do
            {
              *(_WORD *)v62 = 0;
              v62 += 5;
              *((_WORD *)v62 - 19) = 0;
              *((_WORD *)v62 - 18) = 0;
              *((_DWORD *)v62 - 2) = 0;
              *((_WORD *)v62 - 17) = 0;
              *((_OWORD *)v62 - 2) = 0;
              *(v62 - 2) = 0;
            }
            while ( &v220 != v62 );
            v185 = (__int64)v219;
            if ( decode_preceding_insn() != -1
              && !(_BYTE)haystack
              && !sub_24180(a1, (__int64)v184, *(__int64 *)&v219[16])
              && ((unsigned __int8)sub_6C3E0(v184, v219, 0.0) || *(_WORD *)&v219[24] == 143) )
            {
              qmemcpy(v217, v219, sizeof(v217));
              goto LABEL_116;
            }
            v28 = a1[2];
            if ( v217[41] != 1 )
              goto LABEL_84;
            v69 = a1[2];
            if ( (int)v28 > 0 )
            {
              v70 = a1[1] + 32LL * ((int)v28 - 1) + 8;
              while ( 1 )
              {
                v71 = v69--;
                if ( *(__int16 *)(v70 + 16) == *(unsigned __int16 *)&v217[46]
                  && *(_QWORD *)v70 <= v20
                  && *(_QWORD *)(v70 + 8) + *(_QWORD *)v70 > v20 )
                {
                  goto LABEL_236;
                }
                v70 -= 32;
                if ( !v69 )
                  goto LABEL_263;
              }
            }
            if ( (_DWORD)v28 )
            {
              v71 = a1[2];
LABEL_236:
              sub_242C0(a1, v71 - 1, *(__int64 *)&v217[16]);
              if ( v198 != -1 && a4 && a5 )
              {
                add_auto_stkpnt();
                set_abits();
              }
              v72 = sub_23C00((__int64)v217);
              LODWORD(v185) = 0;
              v21 = *(_QWORD *)&v217[16];
              v198 = -1;
              v20 += v72;
              goto LABEL_19;
            }
LABEL_263:
            if ( v24 >= v28 )
              goto LABEL_84;
            if ( *(_WORD *)&v217[46] > 1u )
              goto LABEL_84;
            v79 = a1[1] + 32 * v24;
            if ( *(_WORD *)(v79 + 24) != 0xFFFF )
              goto LABEL_84;
            v200 = a1[2];
            v185 = *(_QWORD *)(v79 + 16);
            v80 = sub_23C00((__int64)v217);
            v28 = v200;
            if ( v185 != v80 )
              goto LABEL_84;
            v21 = *(_QWORD *)&v217[16];
            if ( v19 + 1 == v200 && (LODWORD(v185) = *(_DWORD *)a1 & 3, !(_DWORD)v185) )
            {
              v193 = v194;
            }
            else
            {
              sub_242C0(a1, v24, *(__int64 *)&v217[16]);
              v81 = sub_23C00((__int64)v217);
              ++v19;
              v21 = *(_QWORD *)&v217[16];
              LODWORD(v185) = 0;
              v20 += v81;
            }
            break;
          default:
            goto LABEL_166;
        }
      }
    }
    if ( *(_WORD *)&v217[24] == 34 )
      goto LABEL_331;
    v193 = v194;
LABEL_96:
    if ( *(_WORD *)&v217[24] != 16 )
      goto LABEL_41;
    if ( (((unsigned __int8)v188 ^ 1) & (v189 > 8)) != 0 )
    {
      if ( v193 )
        goto LABEL_99;
    }
    else
    {
LABEL_217:
      if ( v193 )
        goto LABEL_84;
    }
LABEL_218:
    if ( v24 >= v28 )
      goto LABEL_84;
    if ( i != v19 )
      goto LABEL_188;
    v63 = getinf_flag();
    if ( v20 || !v63 )
      break;
    sub_74080(v184, v217, 0, v64, v65, v66, v217, v184, v185);
    v67 = get_func();
    if ( !v67 || (*(_BYTE *)(v67 + 16) & 3) != 0 )
    {
      v28 = a1[2];
      v20 = 0;
      goto LABEL_188;
    }
    v193 = 0;
    v21 = *(_QWORD *)&v217[16];
    v20 = 0;
    LODWORD(v185) = 0;
  }
LABEL_187:
  v28 = a1[2];
LABEL_188:
  if ( v198 != -1 || !a4 || !a5 )
    goto LABEL_84;
  v41 = (*(_BYTE *)a1 & 0x10) == 0;
  if ( v24 < v28 )
  {
LABEL_87:
    while ( 1 )
    {
      v42 = a1[1] + 32 * v24;
      v43 = _mm_loadu_si128((const __m128i *)(v42 + 8));
      if ( v192 < _mm_add_epi64(v43, _mm_srli_si128(v43, 8)).m128i_i64[0] )
        break;
      v24 = ++v19;
      if ( v19 >= v28 )
        goto LABEL_91;
    }
    if ( v24 < v28 && *(_QWORD *)(v42 + 8) < v20 )
      ++v19;
  }
LABEL_91:
  if ( !v41 )
    return (unsigned int)v28;
  return (unsigned int)v19;
}

