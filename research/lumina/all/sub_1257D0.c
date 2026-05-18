__int64 __fastcall sub_1257D0(__int64 a1, unsigned __int8 *a2, unsigned int a3, double a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rbp
  __int64 v6; // r14
  unsigned __int8 *v7; // r15
  int v8; // r13d
  unsigned int v9; // r12d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r11
  int v14; // r12d
  unsigned __int8 v15; // r12
  __int64 v16; // rax
  _WORD *v17; // rdx
  __int64 v18; // r12
  char v19; // al
  __int64 v20; // r13
  int v21; // r9d
  __int64 v22; // r12
  int v23; // r11d
  int v24; // eax
  const char *v25; // rsi
  int v26; // edx
  unsigned int v27; // r13d
  __int64 *v28; // r12
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int v33; // eax
  char v34; // al
  int v35; // edx
  unsigned int v36; // eax
  unsigned int v37; // r8d
  unsigned int v38; // ecx
  unsigned int v39; // eax
  __int64 i; // rcx
  __int64 v41; // rsi
  unsigned int v42; // r12d
  unsigned int v43; // eax
  unsigned int v44; // ecx
  __int64 v45; // r12
  unsigned __int8 v46; // r13
  int *v47; // r11
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  const __m128i *v51; // r9
  __int64 v52; // r11
  unsigned int v53; // eax
  int v54; // r12d
  int v55; // eax
  _DWORD *v56; // rdx
  unsigned int v57; // r12d
  unsigned int v58; // r13d
  int v59; // esi
  unsigned int v60; // r12d
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // r12
  __int64 v64; // r13
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rax
  int v68; // eax
  int v69; // r13d
  int v70; // eax
  _DWORD *v71; // rax
  char *v72; // rbx
  char v73; // al
  int v74; // ecx
  int v75; // edx
  unsigned int v76; // edx
  __int64 v77; // rax
  __int64 v78; // r12
  __int64 v79; // rdi
  __int64 v80; // rax
  __m128i *v81; // rax
  __int64 v82; // r8
  __int64 v83; // r9
  _DWORD *v84; // rcx
  __int64 v85; // rsi
  int v86; // eax
  int v87; // r9d
  char v88; // al
  char v89; // dl
  int v90; // edx
  char v91; // dl
  unsigned int v92; // r15d
  int v93; // r9d
  char v94; // r12
  unsigned int v95; // r13d
  int v96; // r15d
  int v97; // eax
  _DWORD *v98; // rdx
  int v99; // ebx
  __int64 v100; // r15
  _DWORD *v101; // r13
  unsigned int v102; // r12d
  __int64 v103; // r14
  __int64 v104; // r13
  __int16 v105; // ax
  __int16 v106; // dx
  unsigned int v107; // eax
  __int64 v108; // rdx
  int v109; // ecx
  int v110; // ebx
  int v111; // eax
  __int64 v112; // r8
  __int64 v113; // r9
  int v114; // eax
  __int64 v115; // rdx
  __int64 v116; // r8
  __int64 v117; // r9
  int v118; // eax
  int v119; // edx
  _DWORD *v120; // rax
  __int32 v121; // eax
  unsigned __int64 v122; // r13
  __int64 v123; // r10
  char v124; // cl
  unsigned int v125; // r13d
  int v126; // eax
  __int32 v127; // eax
  _BYTE *v128; // rcx
  __int64 v129; // rax
  int v130; // eax
  __int64 v131; // r8
  __int64 v132; // r9
  unsigned __int8 *v133; // rdi
  char v134; // al
  char *v135; // rdx
  unsigned int v136; // eax
  __int64 v137; // rax
  int v138; // r15d
  unsigned int v139; // r12d
  _QWORD *v140; // r13
  __int64 v141; // r15
  int v142; // esi
  __int64 v143; // rcx
  __int128 *v144; // rdi
  unsigned int v145; // eax
  const __m128i *v146; // rax
  __int64 v147; // rsi
  int v148; // [rsp+8h] [rbp-150h]
  int v149; // [rsp+8h] [rbp-150h]
  int v150; // [rsp+8h] [rbp-150h]
  int v151; // [rsp+8h] [rbp-150h]
  char v152; // [rsp+8h] [rbp-150h]
  __int128 *v153; // [rsp+8h] [rbp-150h]
  unsigned int v154; // [rsp+10h] [rbp-148h]
  __int64 v155; // [rsp+10h] [rbp-148h]
  int v156; // [rsp+10h] [rbp-148h]
  unsigned int v157; // [rsp+10h] [rbp-148h]
  unsigned int v158; // [rsp+10h] [rbp-148h]
  const __m128i *v159; // [rsp+10h] [rbp-148h]
  unsigned int v160; // [rsp+18h] [rbp-140h]
  char v161; // [rsp+18h] [rbp-140h]
  unsigned int v162; // [rsp+18h] [rbp-140h]
  unsigned int v163; // [rsp+18h] [rbp-140h]
  __int64 v164; // [rsp+18h] [rbp-140h]
  __int64 v165; // [rsp+18h] [rbp-140h]
  const __m128i *v166; // [rsp+18h] [rbp-140h]
  __int64 v167; // [rsp+18h] [rbp-140h]
  const __m128i *v168; // [rsp+18h] [rbp-140h]
  __int64 v169; // [rsp+18h] [rbp-140h]
  __int64 v170; // [rsp+20h] [rbp-138h]
  int v171; // [rsp+20h] [rbp-138h]
  const __m128i *v172; // [rsp+20h] [rbp-138h]
  __int64 v173; // [rsp+20h] [rbp-138h]
  __int64 v174; // [rsp+20h] [rbp-138h]
  __int64 v175; // [rsp+28h] [rbp-130h]
  int v176; // [rsp+28h] [rbp-130h]
  __int64 v177; // [rsp+28h] [rbp-130h]
  __int64 v178; // [rsp+28h] [rbp-130h]
  __int64 v179; // [rsp+28h] [rbp-130h]
  int v180; // [rsp+30h] [rbp-128h]
  int v181; // [rsp+30h] [rbp-128h]
  int v182; // [rsp+30h] [rbp-128h]
  const __m128i *v183; // [rsp+30h] [rbp-128h]
  int v184; // [rsp+30h] [rbp-128h]
  int v185; // [rsp+30h] [rbp-128h]
  const __m128i *v186; // [rsp+30h] [rbp-128h]
  int *v187; // [rsp+38h] [rbp-120h]
  unsigned int v188; // [rsp+38h] [rbp-120h]
  __int64 v189; // [rsp+38h] [rbp-120h]
  char *v190; // [rsp+40h] [rbp-118h]
  unsigned int v191; // [rsp+40h] [rbp-118h]
  __int64 v192; // [rsp+40h] [rbp-118h]
  __int64 v193; // [rsp+68h] [rbp-F0h]
  char v194; // [rsp+73h] [rbp-E5h]
  int v195; // [rsp+74h] [rbp-E4h]
  int v196; // [rsp+78h] [rbp-E0h]
  int v197; // [rsp+7Ch] [rbp-DCh]
  int v198; // [rsp+88h] [rbp-D0h] BYREF
  int v199; // [rsp+8Ch] [rbp-CCh] BYREF
  int v200; // [rsp+90h] [rbp-C8h] BYREF
  int v201; // [rsp+94h] [rbp-C4h] BYREF
  unsigned __int8 *v202; // [rsp+98h] [rbp-C0h] BYREF
  __int128 v203; // [rsp+A0h] [rbp-B8h] BYREF
  __int128 v204; // [rsp+B0h] [rbp-A8h]
  __int128 v205; // [rsp+C0h] [rbp-98h]
  __int128 v206; // [rsp+D0h] [rbp-88h]
  __int64 v207; // [rsp+E0h] [rbp-78h]
  _QWORD v208[13]; // [rsp+F0h] [rbp-68h]

  v4 = a3;
  v5 = *(_QWORD *)(a1 + 16);
  v208[5] = __readfsqword(0x28u);
  v198 = 0;
  v199 = 0;
  if ( !a2 )
  {
LABEL_8:
    v9 = v4;
    sub_E1710(v5, 75, 0, v4, 0);
    return v9;
  }
  v6 = a1;
  v7 = a2;
  while ( 2 )
  {
    v8 = *v7;
    switch ( *v7 )
    {
      case 0x13u:
      case 0x72u:
        v36 = sub_1289B0(a1, *((_QWORD *)v7 + 2), &v198);
        v37 = 0;
        v38 = v4;
        goto LABEL_55;
      case 0x14u:
      case 0x8Au:
        v9 = 0;
        if ( *(_BYTE *)(*(_QWORD *)a1 + 103LL) )
          return v9;
        if ( v8 != 138 )
          return (unsigned int)sub_123390(a1, (char *)v7);
        if ( (v7[5] & 8) == 0 )
          return (unsigned int)sub_123390(a1, (char *)v7);
        v35 = **(_DWORD **)(*((_QWORD *)v7 + 4) + 32LL);
        if ( v35 == 1 )
          return (unsigned int)sub_123390(a1, (char *)v7);
        if ( *(_DWORD *)(a1 + 48) )
          return v4;
        v9 = v4;
        sub_DBD10(a1, "sub-select returns %d columns - expected %d", v35, 1);
        goto LABEL_21;
      case 0x24u:
        v33 = sub_1257D0(a1, *((_QWORD *)v7 + 2), a3);
        if ( v4 != v33 )
          sub_E1710(v5, 81, v33, v4, 0);
        v9 = v4;
        v34 = sub_C6620(*((unsigned __int8 **)v7 + 1), 0);
        sub_E1710(v5, 88, v4, v34, 0);
        return v9;
      case 0x2Bu:
      case 0x2Cu:
      case 0x66u:
      case 0x67u:
      case 0x68u:
      case 0x69u:
      case 0x6Au:
      case 0x6Bu:
      case 0x6Cu:
      case 0x6Du:
      case 0x6Eu:
      case 0x6Fu:
        v60 = sub_1289B0(a1, *((_QWORD *)v7 + 2), &v198);
        v36 = sub_1289B0(a1, *((_QWORD *)v7 + 3), &v199);
        v37 = v4;
        v38 = v60;
LABEL_55:
        sub_E1710(v5, v8, v36, v38, v37);
        v9 = v4;
        goto LABEL_21;
      case 0x2Du:
      case 0xABu:
        v148 = 128;
        if ( v8 == 45 )
          v8 = 53;
        else
          v8 = 52;
        goto LABEL_26;
      case 0x30u:
        sub_12A140(a1, v7 + 16, v7 + 32, a3, 0, 0);
        return v4;
      case 0x31u:
        v57 = *(_DWORD *)(a1 + 68);
        v58 = v57 - 1;
        v57 -= 2;
        *(_DWORD *)(a1 + 68) = v57;
        sub_E1710(v5, 75, 0, a3, 0);
        sub_124690(a1, (__int64)v7, v58, v57, a4);
        sub_E1710(v5, 71, 1u, v4, 0);
        sub_E0BB0(v5, v58);
        sub_E1710(v5, 86, v4, 0, 0);
        v59 = v57;
        v9 = v4;
        sub_E0BB0(v5, v59);
        return v9;
      case 0x32u:
      case 0x33u:
        sub_E1710(v5, 71, 1u, a3, 0);
        v53 = sub_1289B0(a1, *((_QWORD *)v7 + 2), &v198);
        v54 = sub_E1710(v5, v8, v53, 0, 0);
        sub_E1710(v5, 71, 0, v4, 0);
        v55 = *(_DWORD *)(v5 + 144);
        if ( v54 < 0 )
          v54 = v55 - 1;
        v56 = &unk_241F50;
        if ( !*(_BYTE *)(*(_QWORD *)v5 + 103LL) )
          v56 = (_DWORD *)(*(_QWORD *)(v5 + 136) + 24LL * v54);
        v56[2] = v55;
        v9 = v4;
        goto LABEL_21;
      case 0x34u:
      case 0x35u:
      case 0x36u:
      case 0x37u:
      case 0x38u:
      case 0x39u:
        v148 = 0;
LABEL_26:
        v18 = *((_QWORD *)v7 + 2);
        v19 = *(_BYTE *)v18;
        if ( *(_BYTE *)v18 == 0xB0 )
          v19 = *(_BYTE *)(v18 + 2);
        if ( v19 == -79 )
        {
          v87 = **(_DWORD **)(v18 + 32);
          if ( v87 > 1 )
            goto LABEL_129;
        }
        else if ( v19 == -118 )
        {
          v87 = **(_DWORD **)(*(_QWORD *)(v18 + 32) + 32LL);
          if ( v87 > 1 )
          {
LABEL_129:
            v194 = v8;
            v175 = *((_QWORD *)v7 + 3);
            v171 = *(_DWORD *)(a1 + 68) - 1;
            *(_DWORD *)(a1 + 68) = v171;
            if ( !*(_DWORD *)(a1 + 48) )
            {
              v88 = *(_BYTE *)v175;
              v89 = *(_BYTE *)v175;
              if ( *(_BYTE *)v175 == 0xB0 )
                v89 = *(_BYTE *)(v175 + 2);
              if ( v89 == -79 )
              {
                v90 = **(_DWORD **)(v175 + 32);
              }
              else
              {
                if ( v89 != -118 )
                  goto LABEL_20;
                v90 = **(_DWORD **)(*(_QWORD *)(v175 + 32) + 32LL);
              }
              if ( v87 == v90 )
              {
                v161 = 56;
                if ( v8 != 55 )
                {
                  v161 = 54;
                  if ( v8 != 57 )
                  {
                    v91 = 53;
                    if ( v8 != 52 )
                      v91 = v8;
                    v161 = v91;
                  }
                }
                v92 = *((_DWORD *)v7 + 1);
                v188 = 0;
                if ( *(_BYTE *)v18 == 0x8A )
                {
                  v185 = v87;
                  v188 = sub_123390(a1, (char *)v18);
                  v87 = v185;
                  v88 = *(_BYTE *)v175;
                }
                v191 = 0;
                if ( v88 == -118 )
                {
                  v184 = v87;
                  v145 = sub_123390(a1, (char *)v175);
                  v87 = v184;
                  v191 = v145;
                }
                v181 = v87;
                sub_E1710(v5, 71, 1u, v4, 0);
                v93 = v181;
                v193 = v18;
                v94 = v161;
                v197 = v8;
                v95 = 0;
                v200 = 0;
                v201 = 0;
                v202 = nullptr;
                *(_QWORD *)&v203 = 0;
                v196 = (v92 >> 9) & 1;
                v182 = v181 - 1;
                v195 = v93 - 2;
                while ( 1 )
                {
                  v157 = sub_128B20(a1, v193, v95, v188, &v202, &v200);
                  v162 = sub_128B20(a1, v175, v95, v191, &v203, &v201);
                  v96 = *(_DWORD *)(v5 + 144);
                  if ( !*(_DWORD *)(a1 + 48) )
                    sub_F3B90(a1, v202, (unsigned __int8 *)v203, v94, v157, v162, a4, v171, v148, v196);
                  if ( v200 )
                    sub_CEFE0(a1, v200);
                  if ( v201 )
                    sub_CEFE0(a1, v201);
                  if ( ((v94 - 54) & 0xFD) == 0 && (int)v95 < v182 )
                    v96 = sub_E1710(v5, 58, 0, 0, 0);
                  if ( v148 == 128 )
                    sub_E1710(v5, 71, 0, v4, 0);
                  else
                    sub_E1710(v5, 92, v157, v4, v162);
                  if ( v95 == v182 )
                    break;
                  if ( v94 == 53 )
                  {
                    sub_E1710(v5, 51, v4, v171, 0);
                  }
                  else
                  {
                    sub_E1710(v5, 8, 0, v171, 0);
                    if ( v95 == v195 )
                      v94 = v194;
                  }
                  ++v95;
                  v200 = 0;
                  v201 = 0;
                  v202 = nullptr;
                  *(_QWORD *)&v203 = 0;
                  if ( v96 )
                  {
                    v97 = *(_DWORD *)(v5 + 144);
                    if ( v96 < 0 )
                      v96 = v97 - 1;
                    v98 = &unk_241F50;
                    if ( !*(_BYTE *)(*(_QWORD *)v5 + 103LL) )
                      v98 = (_DWORD *)(*(_QWORD *)(v5 + 136) + 24LL * v96);
                    v98[2] = v97;
                  }
                }
                v119 = *(_DWORD *)(v5 + 144);
                if ( v96 < 0 )
                  v96 = v119 - 1;
                v120 = &unk_241F50;
                if ( !*(_BYTE *)(*(_QWORD *)v5 + 103LL) )
                  v120 = (_DWORD *)(*(_QWORD *)(v5 + 136) + 24LL * v96);
                v120[2] = v119;
                sub_E0BB0(v5, v171);
                if ( v197 == 52 )
                {
                  v9 = v4;
                  sub_E1710(v5, 19, v4, v4, 0);
                }
                else
                {
LABEL_39:
                  v9 = v4;
                }
                goto LABEL_21;
              }
LABEL_20:
              v9 = v4;
              sub_DBD10(a1, "row value misused");
              goto LABEL_21;
            }
            return v4;
          }
        }
        v154 = sub_1289B0(a1, *((_QWORD *)v7 + 2), &v198);
        v160 = sub_1289B0(a1, *((_QWORD *)v7 + 3), &v199);
        sub_E1710(v5, 71, 1u, v4, 0);
        if ( !*(_DWORD *)(a1 + 48) )
          sub_F3B90(
            a1,
            (unsigned __int8 *)v18,
            *((unsigned __int8 **)v7 + 3),
            v8,
            v154,
            v160,
            a4,
            *(_DWORD *)(v5 + 144) + 2,
            v148,
            (*((_DWORD *)v7 + 1) >> 9) & 1);
        v9 = v4;
        if ( v148 == 128 )
          sub_E1710(v5, 71, 0, v4, 0);
        else
          sub_E1710(v5, 92, v154, v4, v160);
LABEL_21:
        if ( v198 )
          sub_CEFE0(v6, v198);
        if ( v199 )
          sub_CEFE0(v6, v199);
        return v9;
      case 0x47u:
        if ( !*(_QWORD *)(a1 + 168) && !*(_BYTE *)(a1 + 30) )
        {
          v9 = 0;
          sub_DBD10(a1, "RAISE() may only be used within a trigger-program");
          return v9;
        }
        v76 = (char)v7[1];
        if ( v7[1] == 2 )
        {
          v77 = *(_QWORD *)(a1 + 160);
          if ( !v77 )
            v77 = a1;
          *(_BYTE *)(v77 + 33) = 1;
          v76 = (char)v7[1];
        }
        v78 = *((_QWORD *)v7 + 1);
        if ( (_BYTE)v76 != 4 )
        {
          sub_E2080((__int64 *)a1, *(_QWORD *)(a1 + 168) == 0 ? 1 : 1811, v76, *((_QWORD *)v7 + 1), 0, 0);
          goto LABEL_39;
        }
        v114 = sub_E1710(v5, 70, 0, 4u, 0);
        v115 = v78;
        v9 = v4;
        sub_DCC50(v5, v114, v115, 0, v116, v117);
        goto LABEL_21;
      case 0x4Du:
        v20 = *((_QWORD *)v7 + 8);
        v21 = *((__int16 *)v7 + 24);
        v22 = *((__int16 *)v7 + 24);
        v23 = *((_DWORD *)v7 + 11) * (*(__int16 *)(v20 + 54) + 1);
        if ( (*(_BYTE *)(v20 + 48) & 0x20) != 0 && (v21 & 0x8000u) == 0 )
        {
          v149 = *((__int16 *)v7 + 24);
          LOWORD(v24) = sub_CF5E0(*((_QWORD *)v7 + 8), v21);
          v21 = v149;
          v24 = (__int16)v24;
        }
        else
        {
          v24 = *((__int16 *)v7 + 24);
        }
        v150 = v21;
        sub_E1710(v5, 157, v23 + v24 + 1, v4, 0);
        if ( v150 < 0 || *(_BYTE *)(16 * v22 + *(_QWORD *)(v20 + 8) + 9) != 69 )
          goto LABEL_39;
        v9 = v4;
        sub_E1710(v5, 87, v4, 0, 0);
        goto LABEL_21;
      case 0x71u:
      case 0xAEu:
      case 0xB5u:
        v7 = *((unsigned __int8 **)v7 + 2);
        if ( !v7 )
          goto LABEL_8;
        continue;
      case 0x75u:
        v9 = a3;
        sub_E17B0(v5, a3, *((_QWORD *)v7 + 1));
        return v9;
      case 0x99u:
        v9 = a3;
        sub_E2E50((__int64 *)v5, *((char **)v7 + 1), 0, a3);
        return v9;
      case 0x9Au:
        v25 = (const char *)(*((_QWORD *)v7 + 1) + 2LL);
        if ( *((_QWORD *)v7 + 1) == -2 )
        {
          v26 = -1;
          v27 = 0;
        }
        else
        {
          v26 = (strlen(v25) & 0x3FFFFFFF) - 1;
          v27 = v26 / 2;
        }
        v28 = sub_DD010(*(_QWORD *)v5, (__int64)v25, v26);
        v29 = sub_E1710(v5, 77, v27, v4, 0);
        v30 = (__int64)v28;
        v9 = v4;
        sub_DCC50(v5, v29, v30, 4294967290LL, v31, v32);
        return v9;
      case 0x9Bu:
        v9 = a3;
        sub_E3DB0(a1, (__int64)v7, 0, a3);
        return v9;
      case 0x9Cu:
        sub_E1710(v5, 78, *((__int16 *)v7 + 24), a3, 0);
        if ( !*(_BYTE *)(*((_QWORD *)v7 + 1) + 1LL) )
          return v4;
        v84 = *(_DWORD **)(a1 + 312);
        v85 = 0;
        if ( !v84 )
          goto LABEL_126;
        v82 = (unsigned int)v84[1];
        v86 = 2;
        do
        {
          if ( *((__int16 *)v7 + 24) == v84[v86] )
          {
            v85 = (__int64)&v84[v86 + 2];
            goto LABEL_126;
          }
          v86 += v84[v86 + 1];
        }
        while ( (int)v82 > v86 );
        v85 = 0;
LABEL_126:
        *v84 = 0;
        sub_D04B0(v5, v85, 0xFFFFFFFF, (__int64)v84, v82, v83);
        return v4;
      case 0x9Du:
        v79 = *(_QWORD *)a1;
        v187 = *((int **)v7 + 4);
        v180 = *v187;
        v156 = *(_DWORD *)(v6 + 68) - 1;
        *(_DWORD *)(v6 + 68) = v156;
        v80 = *((_QWORD *)v7 + 2);
        v170 = v80;
        if ( v80 )
        {
          v81 = sub_DD6E0(v79, v80, 0, nullptr);
          v190 = (char *)v81;
          if ( *(_BYTE *)(v79 + 103) )
          {
            if ( v81 )
              sub_D7720(v79, (__int64)v81);
            goto LABEL_39;
          }
          v118 = sub_128BB0(v6, v81, &v198);
          sub_C4470(v190, v118);
          a4 = 0.0;
          v207 = 0;
          v198 = 0;
          v153 = &v203;
          v203 = 0;
          LOBYTE(v203) = 53;
          v205 = 0;
          v206 = 0;
          v204 = (unsigned __int64)v190;
        }
        else
        {
          v190 = nullptr;
          v153 = nullptr;
        }
        v176 = v180 - 1;
        if ( v180 - 1 > 0 )
        {
          v163 = v4;
          v99 = 0;
          v100 = v6;
          v101 = v187 + 2;
          do
          {
            v103 = 6LL * v99;
            if ( v170 )
              *((_QWORD *)&v204 + 1) = *(_QWORD *)&v101[6 * v99];
            else
              v153 = *(__int128 **)&v101[6 * v99];
            v99 += 2;
            v102 = *(_DWORD *)(v100 + 68) - 1;
            *(_DWORD *)(v100 + 68) = v102;
            sub_1253C0(v100, (__int64)v153, v102, 16, a4);
            sub_127350(v100, *(_QWORD *)&v101[v103 + 6], v163);
            sub_E1710(v5, 8, 0, v156, 0);
            sub_E0BB0(v5, v102);
          }
          while ( v176 > v99 );
          v4 = v163;
          v6 = v100;
        }
        if ( (v180 & 1) != 0 )
          sub_127350(v6, *(_QWORD *)&v187[6 * v176 + 2], v4);
        else
          sub_E1710(v5, 75, 0, v4, 0);
        if ( v190 )
          sub_D7720(v79, (__int64)v190);
        sub_C44C0(v5);
        sub_E0BB0(v5, v156);
        goto LABEL_39;
      case 0xA7u:
        goto LABEL_10;
      case 0xA8u:
        v66 = *((_QWORD *)v7 + 7);
        if ( !v66 || (v67 = *((__int16 *)v7 + 25), (v67 & 0x8000u) != 0LL) || (__int16)v67 >= *(_DWORD *)(v66 + 56) )
        {
          v9 = v4;
          sub_DBD10(a1, "misuse of aggregate: %#T()", v7);
          goto LABEL_21;
        }
        return *(unsigned int *)(*(_QWORD *)(v66 + 48) + 32 * v67 + 16);
      case 0xA9u:
        v61 = *((_QWORD *)v7 + 7);
        v62 = *(_QWORD *)(v61 + 32) + 32LL * *((__int16 *)v7 + 25);
        v63 = v62;
        if ( !*(_BYTE *)v61 )
          return *(unsigned int *)(v62 + 20);
        if ( *(_BYTE *)(v61 + 1) )
        {
          v64 = *(_QWORD *)v62;
          sub_E1710(v5, 94, *(_DWORD *)(v61 + 8), *(__int16 *)(v62 + 26), v4);
          v65 = *(__int16 *)(v63 + 24);
          if ( (v65 & 0x8000u) != 0LL || *(_BYTE *)(*(_QWORD *)(v64 + 8) + 16 * v65 + 9) != 69 )
            return v4;
LABEL_85:
          sub_E1710(v5, 87, v4, 0, 0);
          return v4;
        }
LABEL_10:
        v11 = *((unsigned int *)v7 + 11);
        if ( (v7[4] & 8) != 0 )
        {
          v107 = sub_1257D0(a1, *((_QWORD *)v7 + 2), v4);
          v108 = *((_QWORD *)v7 + 8);
          v9 = v107;
          if ( v108 )
          {
            v109 = *((__int16 *)v7 + 24);
            if ( v109 < 0 || v109 >= *(__int16 *)(v108 + 54) )
            {
              v110 = 68;
              goto LABEL_215;
            }
            v110 = *(char *)(*(_QWORD *)(v108 + 8) + 16LL * *((__int16 *)v7 + 24) + 9);
          }
          else
          {
            v110 = (char)v7[1];
          }
          if ( v110 <= 65 )
            return v9;
LABEL_215:
          v111 = sub_E1710(v5, 96, v107, 1u, 0);
          sub_DCC50(v5, v111, (__int64)&aBcde[v110 - 66], 0xFFFFFFFFLL, v112, v113);
          return v9;
        }
        v12 = (unsigned int)*((__int16 *)v7 + 24);
        v13 = *((_QWORD *)v7 + 8);
        if ( (int)v11 >= 0 || (v14 = *(_DWORD *)(a1 + 64), v11 = (unsigned int)(v14 - 1), v14 >= 0) )
        {
          v15 = v7[2];
          sub_127530(v5, *((_QWORD *)v7 + 8), v11, v12, v4);
          if ( v15 )
          {
            v16 = *(_QWORD *)(a1 + 16);
            v17 = &unk_241F50;
            if ( !*(_BYTE *)(*(_QWORD *)v16 + 103LL) )
              v17 = (_WORD *)(*(_QWORD *)(v16 + 136) + 24LL * (*(_DWORD *)(v16 + 144) - 1));
            if ( *(_BYTE *)v17 == 94 )
              v17[1] = v15;
          }
          if ( *((_QWORD *)v7 + 8) || v7[1] != 69 )
            return v4;
          goto LABEL_85;
        }
        if ( (int)v12 < 0 )
          return (unsigned int)~v14;
        v104 = *(_QWORD *)(v13 + 8) + 16LL * *((__int16 *)v7 + 24);
        if ( (*(_BYTE *)(v13 + 48) & 0x20) != 0 && *((__int16 *)v7 + 24) >= 0 )
          LODWORD(v12) = sub_CF5E0(*((_QWORD *)v7 + 8), *((_WORD *)v7 + 24));
        v105 = *(_WORD *)(v104 + 14);
        v9 = v12 - v14;
        if ( (v105 & 0x60) == 0 )
        {
          if ( *(_BYTE *)(v104 + 9) != 69 )
            return v9;
          sub_E1710(v5, 81, v9, v4, 0);
          goto LABEL_85;
        }
        if ( (v105 & 0x100) != 0 )
        {
          v9 = 0;
          sub_DBD10(a1, "generated column loop on \"%s\"", *(const char **)v104);
        }
        else
        {
          LOBYTE(v106) = *(_WORD *)(v104 + 14);
          HIBYTE(v106) = HIBYTE(v105) | 1;
          *(_WORD *)(v104 + 14) = v106;
          if ( (v105 & 0x80u) != 0 )
          {
            sub_127410(a1, v13, v104);
            v106 = *(_WORD *)(v104 + 14);
          }
          *(_WORD *)(v104 + 14) = v106 & 0xFE7F;
        }
        return v9;
      case 0xAAu:
        do
        {
          if ( (v7[5] & 0x10) == 0 )
            break;
          v7 = *((unsigned __int8 **)v7 + 2);
        }
        while ( v7 );
        v9 = a3;
        sub_E1710(v5, 71, *(_BYTE *)(*((_QWORD *)v7 + 1) + 4LL) == 0, a3, 0);
        return v9;
      case 0xACu:
        if ( (v7[7] & 1) != 0 )
          return *(unsigned int *)(*((_QWORD *)v7 + 8) + 96LL);
        v45 = *(_QWORD *)a1;
        v46 = *(_BYTE *)(*(_QWORD *)a1 + 100LL);
        if ( *(_BYTE *)(a1 + 35) )
        {
          WORD2(v205) = 2;
          DWORD2(v205) = 0;
          *((_QWORD *)&v203 + 1) = sub_CE7B0;
          *(_QWORD *)&v204 = sub_C43E0;
          sub_CDCD0((__int64)&v203, (__int64)v7);
          if ( WORD2(v205) )
            return (unsigned int)sub_127A90(a1, v7, 0xFFFFFFFFLL);
        }
        v47 = *((int **)v7 + 4);
        v151 = 0;
        if ( v47 )
          v151 = *v47;
        v155 = *((_QWORD *)v7 + 4);
        v48 = sub_E32F0((_BYTE *)v45, *((char **)v7 + 1), v151, v46, 0);
        v51 = (const __m128i *)v48;
        if ( !v48 || (v52 = v155, *(_QWORD *)(v48 + 32)) )
        {
          v9 = v4;
          sub_DBD10(a1, "unknown function: %#T()", v7, v49, v50, v48);
          goto LABEL_21;
        }
        v121 = *(_DWORD *)(v48 + 4);
        if ( (v121 & 0x400000) != 0 )
        {
          v5 = *(_QWORD *)(a1 + 16);
          switch ( v51->m128i_i64[1] )
          {
            case 0LL:
              v138 = *(_DWORD *)v155;
              v139 = *(_DWORD *)(a1 + 68) - 1;
              *(_DWORD *)(a1 + 68) = v139;
              if ( v5 )
              {
                sub_127300(a1, *(_QWORD *)(v155 + 8), v4);
                v52 = v155;
              }
              if ( v138 > 1 )
              {
                v140 = (_QWORD *)(v52 + 32);
                v141 = v52 + 24LL * (unsigned int)(v138 - 2) + 56;
                do
                {
                  sub_E1710(v5, 51, v4, v139, 0);
                  if ( *(_QWORD *)(a1 + 16) )
                    sub_127300(a1, *v140, v4);
                  v140 += 3;
                }
                while ( (_QWORD *)v141 != v140 );
              }
              sub_C44C0(v5);
              v142 = v139;
              v9 = v4;
              sub_E0BB0(v5, v142);
              return v9;
            case 1LL:
              v137 = *(_QWORD *)(v155 + 32);
              if ( *(_BYTE *)v137 != 0xA7 )
                goto LABEL_8;
              v136 = sub_CDF80(*(_QWORD *)(v155 + 8), *(_DWORD *)(v137 + 44));
              goto LABEL_272;
            case 2LL:
              v136 = sub_F8920(a1, *(char **)(v155 + 8), *(_QWORD *)(v155 + 32), 0xFFFFFFFF, a4);
              goto LABEL_272;
            case 3LL:
              v136 = sub_F80F0(0, *(char **)(v155 + 8), *(_QWORD *)(v155 + 32), 0xFFFFFFFF, a4);
LABEL_272:
              v9 = v4;
              sub_E1710(v5, 71, v136, v4, 0);
              break;
            case 4LL:
              v133 = *(unsigned __int8 **)(v155 + 8);
              v208[0] = "blob";
              v208[1] = "text";
              v208[2] = "numeric";
              v208[3] = "integer";
              v208[4] = "real";
              v134 = sub_C6820(v133);
              v135 = "none";
              if ( v134 > 64 )
                v135 = (char *)v208[v134 - 65];
              v9 = v4;
              sub_E17B0(v5, v4, (__int64)v135);
              break;
            case 5LL:
              v143 = 18;
              v144 = &v203;
              while ( v143 )
              {
                *(_DWORD *)v144 = 0;
                v144 = (__int128 *)((char *)v144 + 4);
                --v143;
              }
              LOBYTE(v203) = -99;
              *(_QWORD *)&v205 = v155;
              v9 = sub_1257D0(v6, &v203, v4);
              break;
            default:
              v9 = sub_1257D0(a1, *(_QWORD *)(v155 + 8), v4);
              break;
          }
          return v9;
        }
        if ( (v121 & 0x280000) != 0
          && (v7[7] & 0x40) != 0
          && ((v121 & 0x80000) != 0 || *(char *)(*(_QWORD *)a1 + 48LL) >= 0) )
        {
          v167 = v155;
          v159 = v51;
          sub_DBD10(a1, "unsafe use of %#T()", v7);
          v51 = v159;
          v52 = v167;
          if ( v151 <= 0 )
          {
            if ( v167 )
            {
LABEL_293:
              v123 = 0;
              goto LABEL_294;
            }
            v121 = v159->m128i_i32[1];
LABEL_302:
            v158 = v121 & 0x20;
            if ( (v121 & 0x20) == 0 )
            {
              v125 = 0;
LABEL_265:
              sub_E17F0((__int64 *)a1, *(_QWORD *)(a1 + 16), v158, v125, v4, v151, (__int64)v51, v7[2]);
              if ( !v151 )
                return v4;
LABEL_251:
              if ( v158 )
                return v4;
              if ( v151 == 1 )
              {
                v9 = v4;
                sub_CF060(a1, v125);
              }
              else
              {
                if ( v151 <= *(_DWORD *)(a1 + 40) )
                  return v4;
                *(_DWORD *)(a1 + 40) = v151;
                *(_DWORD *)(a1 + 44) = v125;
                return v4;
              }
              return v9;
            }
            v158 = 0;
            v125 = 0;
            goto LABEL_297;
          }
        }
        else if ( v151 <= 0 )
        {
          if ( v155 )
            goto LABEL_293;
          goto LABEL_302;
        }
        v158 = 0;
        v122 = 0;
        v123 = 0;
        do
        {
          v124 = v122;
          if ( v122 <= 0x1F )
          {
            v147 = *(_QWORD *)(v52 + 24 * v122 + 8);
            WORD2(v205) = 1;
            DWORD2(v205) = 0;
            *((_QWORD *)&v203 + 1) = sub_CE7B0;
            *(_QWORD *)&v204 = sub_C43E0;
            if ( !v147
              || (v192 = v52,
                  v189 = v123,
                  v186 = v51,
                  sub_CDCD0((__int64)&v203, v147),
                  v124 = v122,
                  v51 = v186,
                  v123 = v189,
                  v52 = v192,
                  WORD2(v205)) )
            {
              v158 |= 1 << v124;
            }
          }
          if ( (v51->m128i_i8[4] & 0x20) != 0 && !v123 )
          {
            v183 = v51;
            v178 = v52;
            v129 = sub_F3950(a1, *(unsigned __int8 **)(v52 + 24 * v122 + 8), a4);
            v51 = v183;
            v123 = v129;
            v52 = v178;
          }
          ++v122;
        }
        while ( v151 > (int)v122 );
        v125 = 0;
        if ( !v52 )
        {
LABEL_247:
          if ( v151 <= 1 )
          {
            if ( v151 == 1 )
            {
LABEL_249:
              v165 = v123;
              v51 = sub_DC280(v45, v51, v151, *(_QWORD *)(v52 + 8));
              v123 = v165;
              if ( (v51->m128i_i8[4] & 0x20) == 0 )
              {
                sub_E17F0((__int64 *)a1, *(_QWORD *)(a1 + 16), v158, v125, v4, v151, (__int64)v51, v7[2]);
                goto LABEL_251;
              }
              goto LABEL_263;
            }
          }
          else
          {
            if ( (v7[4] & 0x80u) == 0 )
              goto LABEL_249;
            v169 = v123;
            v146 = sub_DC280(v45, v51, v151, *(_QWORD *)(v52 + 32));
            v123 = v169;
            v51 = v146;
          }
          if ( (v51->m128i_i8[4] & 0x20) == 0 )
            goto LABEL_265;
LABEL_263:
          if ( v123 )
          {
LABEL_264:
            v166 = v51;
            v173 = v123;
            v130 = sub_E1710(v5, 85, 0, 0, 0);
            sub_DCC50(v5, v130, v173, 4294967294LL, v131, v132);
            v51 = v166;
            goto LABEL_265;
          }
LABEL_297:
          v123 = *(_QWORD *)(v45 + 16);
          goto LABEL_264;
        }
        if ( v158 )
        {
          v126 = *(_DWORD *)(a1 + 56);
          v125 = v126 + 1;
          *(_DWORD *)(a1 + 56) = v151 + v126;
          goto LABEL_243;
        }
LABEL_294:
        v179 = v52;
        v174 = v123;
        v168 = v51;
        v158 = 0;
        v125 = sub_CF000(a1, v151);
        v52 = v179;
        v123 = v174;
        v51 = v168;
LABEL_243:
        v127 = v51->m128i_i32[1];
        if ( (v127 & 0xC0) != 0 )
        {
          v128 = *(_BYTE **)(v52 + 8);
          if ( ((*v128 + 89) & 0xFD) == 0 )
            v128[2] = v127 & 0xC0;
        }
        v177 = v123;
        v172 = v51;
        v164 = v52;
        sub_128C80(a1, v52, v125, 0, 3);
        v123 = v177;
        v51 = v172;
        v52 = v164;
        goto LABEL_247;
      case 0xADu:
        v41 = *((_QWORD *)v7 + 2);
        if ( *(_BYTE *)v41 == 0x9B )
        {
          sub_E3DB0(a1, v41, 1, a3);
          return v4;
        }
        else
        {
          if ( *(_BYTE *)v41 != 0x99 )
          {
            LOBYTE(v203) = -101;
            *(_QWORD *)((char *)&v203 + 4) = 17408;
            v42 = sub_1289B0(a1, &v203, &v198);
            v43 = sub_1289B0(a1, *((_QWORD *)v7 + 2), &v199);
            v44 = v42;
            v9 = v4;
            sub_E1710(v5, 107, v43, v44, v4);
            goto LABEL_21;
          }
          v9 = a3;
          sub_E2E50((__int64 *)v5, *(char **)(v41 + 8), 1, a3);
        }
        return v9;
      case 0xAFu:
        v39 = sub_1289B0(a1, *((_QWORD *)v7 + 2), &v198);
        for ( i = *((_QWORD *)v7 + 3); i; i = *(_QWORD *)(i + 16) )
        {
          if ( (*(_BYTE *)(i + 5) & 0x10) == 0 )
            break;
        }
        v9 = v4;
        sub_E1770(
          (_QWORD *)v5,
          91,
          v39,
          v4,
          *(_BYTE *)(*(_QWORD *)(i + 8) + 4LL) != 0,
          (*(_BYTE *)(*(_QWORD *)(i + 8) + 4LL) == 0) ^ (v7[2] == 45));
        goto LABEL_21;
      case 0xB0u:
        return *((unsigned int *)v7 + 11);
      case 0xB1u:
        goto LABEL_20;
      case 0xB2u:
        v72 = *((char **)v7 + 2);
        if ( !*((_DWORD *)v72 + 11) || *(_BYTE *)(a1 + 38) > (unsigned __int8)v72[2] )
        {
          *((_DWORD *)v72 + 11) = sub_123390(a1, *((char **)v7 + 2));
          v72[2] = *(_BYTE *)(a1 + 38);
        }
        v73 = *v72;
        if ( *v72 == -80 )
          v73 = v72[2];
        if ( v73 == -79 )
        {
          v74 = **((_DWORD **)v72 + 4);
        }
        else
        {
          v74 = 1;
          if ( v73 == -118 )
            v74 = **(_DWORD **)(*((_QWORD *)v72 + 4) + 32LL);
        }
        v75 = *((_DWORD *)v7 + 11);
        if ( v75 != v74 )
          sub_DBD10(a1, "%d columns assigned %d values", v75, v74);
        return (unsigned int)(*((_DWORD *)v72 + 11) + *((__int16 *)v7 + 24));
      case 0xB3u:
        v152 = *(_BYTE *)(a1 + 35);
        v68 = sub_E1710(v5, 18, *((_DWORD *)v7 + 11), 0, 0);
        *(_BYTE *)(a1 + 35) = 0;
        v69 = v68;
        v9 = sub_1257D0(a1, *((_QWORD *)v7 + 2), v4);
        *(_BYTE *)(a1 + 35) = v152;
        v70 = *(_DWORD *)(v5 + 144);
        if ( v69 < 0 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v5 + 103LL) )
          {
            dword_241F58 = *(_DWORD *)(v5 + 144);
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)(v5 + 136) + 24LL * (v70 - 1) + 8) = v70;
            v70 = *(_DWORD *)(v5 + 144);
          }
          v69 = v70 - 1;
        }
        else if ( *(_BYTE *)(*(_QWORD *)v5 + 103LL) )
        {
          dword_241F58 = *(_DWORD *)(v5 + 144);
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)(v5 + 136) + 24LL * v69 + 8) = v70;
        }
        v71 = &unk_241F50;
        if ( !*(_BYTE *)(*(_QWORD *)v5 + 103LL) )
          v71 = (_DWORD *)(*(_QWORD *)(v5 + 136) + 24LL * v69);
        v71[3] = v9;
        goto LABEL_21;
      default:
        goto LABEL_8;
    }
  }
}
