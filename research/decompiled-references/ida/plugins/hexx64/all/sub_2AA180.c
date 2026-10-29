__int64 __fastcall sub_2AA180(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 *a5,
        int a6,
        __m128 a7)
{
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // r12
  int v12; // eax
  unsigned int v13; // r13d
  int v14; // r15d
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // rsi
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rdx
  __int64 *v31; // r14
  unsigned int v32; // edx
  __int64 v33; // rax
  __int64 v34; // r12
  int v35; // ecx
  __int64 v36; // rax
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  int v40; // eax
  int v41; // eax
  __int64 v42; // rdi
  __int64 v43; // rax
  int v44; // ecx
  int v45; // r8d
  int v46; // r9d
  __int64 v47; // rdi
  __int64 v48; // rax
  int v49; // ecx
  int v50; // r8d
  int v51; // r9d
  __int64 *v52; // r14
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // r12
  int v56; // ecx
  __int64 v57; // rax
  int v58; // ecx
  int v59; // r8d
  int v60; // r9d
  __int64 v61; // rax
  int v62; // ecx
  int v63; // r8d
  int v64; // r9d
  const char *v65; // rdi
  int v66; // eax
  _QWORD *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdi
  __int64 v70; // r12
  unsigned int v71; // eax
  __int64 v72; // rdx
  int v73; // eax
  __int64 v74; // rax
  int v75; // edx
  unsigned int v76; // edx
  __int64 v77; // rax
  __int64 v78; // r12
  int v79; // ecx
  __int64 v80; // rax
  int v81; // ecx
  int v82; // r8d
  int v83; // r9d
  __int64 v84; // rax
  int v85; // ecx
  int v86; // r8d
  int v87; // r9d
  __int64 v88; // rax
  __int64 v90; // rdi
  __int64 v91; // rax
  int v92; // ecx
  int v93; // r8d
  int v94; // r9d
  __int64 v95; // rdi
  __int64 v96; // rax
  int v97; // ecx
  int v98; // r8d
  int v99; // r9d
  int v100; // eax
  __int64 v101; // rdx
  __int64 v102; // r12
  __int64 v103; // rax
  int v104; // ecx
  int v105; // r8d
  int v106; // r9d
  __int64 v107; // rax
  int v108; // ecx
  int v109; // r8d
  int v110; // r9d
  char tinfo_property; // r12
  __int64 v112; // rdx
  int v113; // ecx
  int v114; // r8d
  int v115; // r9d
  __int64 v116; // rsi
  unsigned int v117; // edx
  __int64 *v118; // rax
  __int64 v119; // rdi
  __int64 v120; // rax
  int v121; // ecx
  int v122; // r8d
  int v123; // r9d
  __int64 v124; // rsi
  int v125; // eax
  __int64 v126; // rdi
  int v127; // eax
  __int64 v128; // rax
  __int64 i; // r13
  unsigned int v130; // eax
  __int64 v131; // rdx
  int v132; // eax
  int v133; // edx
  __int64 v134; // rdx
  __int64 v135; // rax
  __int64 v136; // r13
  __int64 *v137; // rdx
  __int64 *v138; // rax
  unsigned __int64 v139; // rdx
  __int64 v140; // rsi
  __int64 v141; // rdx
  int v142; // ecx
  int v143; // r8d
  int v144; // r9d
  int v145; // ecx
  int v146; // r8d
  int v147; // r9d
  __int64 v148; // rdx
  int v149; // ecx
  int v150; // r8d
  int v151; // r9d
  __int64 v152; // rax
  unsigned __int64 *v153; // r13
  __int64 v154; // rax
  char v155; // r13
  __int64 *v156; // r13
  __int64 v157; // rax
  int v158; // ecx
  int v159; // r8d
  int v160; // r9d
  __int64 v161; // rdx
  __int64 v162; // rax
  __int64 v163; // rax
  int v164; // ecx
  int v165; // r8d
  int v166; // r9d
  __int64 v167; // rax
  int v168; // ecx
  int v169; // r8d
  int v170; // r9d
  __int64 v171; // rax
  __int64 v172; // rsi
  __int64 v173; // r12
  __int64 v174; // rsi
  __int64 v175; // rdx
  int v176; // ecx
  int v177; // r8d
  int v178; // r9d
  int v179; // ecx
  int v180; // r8d
  int v181; // r9d
  int v182; // r12d
  __int64 tinfo_size; // r13
  __int64 v184; // rax
  unsigned int v185; // r12d
  int v186; // eax
  __int64 v187; // rdx
  __int64 v188; // rsi
  int v189; // ecx
  __int64 v190; // r13
  __int64 v191; // rsi
  __int64 v192; // r12
  int v193; // ecx
  int v194; // r8d
  int v195; // r9d
  __int64 v196; // rax
  __int64 v197; // rdx
  char v198; // al
  __int64 *v199; // [rsp+0h] [rbp-A8h]
  __int64 v200; // [rsp+8h] [rbp-A0h]
  __int64 *v201; // [rsp+8h] [rbp-A0h]
  int v202; // [rsp+14h] [rbp-94h] BYREF
  __int64 v203; // [rsp+18h] [rbp-90h]
  __int64 v204; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v205; // [rsp+28h] [rbp-80h] BYREF
  __int64 v206; // [rsp+30h] [rbp-78h] BYREF
  __int64 v207; // [rsp+38h] [rbp-70h]
  _DWORD v208[4]; // [rsp+40h] [rbp-68h] BYREF
  _DWORD v209[4]; // [rsp+50h] [rbp-58h] BYREF
  int v210; // [rsp+60h] [rbp-48h]
  unsigned __int64 v211; // [rsp+68h] [rbp-40h]

  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(a1 + 24);
  v211 = __readfsqword(0x28u);
  v10 = a2;
  v11 = *(_QWORD *)(v8 + 8 * v9 - 8);
  v12 = *(_DWORD *)(v11 + 8);
  if ( v12 == 2 )
  {
    v30 = *(_QWORD *)(v11 + 32);
    if ( *(_DWORD *)(v30 + 8) == 61 )
    {
      a2 = v30 + 48;
      if ( !sub_255A30(*(__int64 **)(v30 + 24)) )
        goto LABEL_4;
      v30 = *(_QWORD *)(v11 + 32);
    }
    a2 = *(_QWORD *)(v11 + 24);
    sub_2A9A40(*(__int64 **)(a1 + 72), a2, v30, a7);
    goto LABEL_4;
  }
  if ( v12 == 57 )
  {
    if ( *(_QWORD *)(v11 + 24) == a2 )
    {
      a5 = *(__int64 **)(a1 + 72);
      v13 = *(_DWORD *)(a2 + 8);
      v31 = a5;
      if ( v13 == 68 )
      {
        v65 = *(const char **)(a2 + 24);
        a2 = (unsigned __int64)"memcpy";
        v66 = strcmp(v65, "memcpy");
        a5 = v31;
        if ( !v66 )
        {
          v153 = *(unsigned __int64 **)(v11 + 32);
          a2 = *v153 + 72;
          if ( !(unsigned __int8)sub_2A8B40() )
          {
            a2 = *v153;
            sub_2A8B40();
          }
          goto LABEL_4;
        }
        v67 = *(_QWORD **)(*(_QWORD *)(v31[1] + 8) + 1376LL);
        if ( !v67 )
        {
LABEL_50:
          if ( v13 - 53 <= 3 )
          {
LABEL_29:
            a2 = *(_QWORD *)(v10 + 24);
            sub_299AE0(a1, a2);
          }
LABEL_30:
          if ( (*(_BYTE *)(v10 + 56) & 4) == 0 )
          {
LABEL_89:
            if ( v13 > 0x32 )
              return 0;
LABEL_90:
            v88 = 1LL << v13;
            if ( ((1LL << v13) & 0x3FC7FF00FFC0LL) != 0 )
            {
              sub_299AE0(a1, *(_QWORD *)(v10 + 32));
            }
            else
            {
LABEL_91:
              if ( (v88 & 0x4C00000000000LL) == 0 )
              {
                if ( (v88 & 0xC00000) != 0 )
                {
                  if ( !(unsigned __int8)sub_29D090(*(_QWORD *)(v10 + 32), a2, *(double *)a7.m128_u64) )
                  {
                    a2 = *(_QWORD *)(v10 + 24);
                    sub_299AE0(a1, a2);
                  }
                  if ( !(unsigned __int8)sub_29D090(*(_QWORD *)(v10 + 24), a2, *(double *)a7.m128_u64) )
                    sub_299AE0(a1, *(_QWORD *)(v10 + 32));
                }
                return 0;
              }
            }
LABEL_145:
            sub_299AE0(a1, *(_QWORD *)(v10 + 24));
            return 0;
          }
LABEL_88:
          a2 = v10;
          sub_299AE0(a1, v10);
          goto LABEL_89;
        }
      }
      else
      {
        v67 = *(_QWORD **)(*(_QWORD *)(a5[1] + 8) + 1376LL);
        if ( !v67 )
          goto LABEL_196;
      }
      a2 = *v67 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !a2 )
        goto LABEL_198;
      if ( (*(_BYTE *)a2 & 2) != 0 )
        goto LABEL_196;
      a4 = *(_QWORD *)v11;
      while ( 1 )
      {
        v139 = *(_QWORD *)(a2 + 24);
        if ( a4 >= v139 )
        {
          if ( v139 >= a4 )
          {
            if ( (_QWORD *)a2 != v67 )
            {
LABEL_198:
              v201 = a5;
              v206 = 1;
              v207 = 0;
              copy_tinfo_t();
              v140 = *(_QWORD *)(a1 + 64);
              v204 = 6;
              v205 = v10;
              sub_2A0060((__int64)&v204, v140, v141, v142, v143, v144, *(double *)a7.m128_u64);
              v208[0] = 0;
              sub_29F770((__int64)v208, (unsigned int *)&v204, *(double *)a7.m128_u64);
              v209[0] = 0;
              sub_29F770((__int64)v209, (unsigned int *)&v206, *(double *)a7.m128_u64);
              a2 = (unsigned __int64)v208;
              v210 = 1;
              sub_2A8310((__int64)v201, (__int64)v208, 0, v145, v146, v147, a7);
              v210 = -1;
              sub_29EC30((__int64)v209, *(double *)a7.m128_u64);
              sub_29EC30((__int64)v208, *(double *)a7.m128_u64);
              sub_29EC30((__int64)&v204, *(double *)a7.m128_u64);
              sub_29EC30((__int64)&v206, *(double *)a7.m128_u64);
              goto LABEL_4;
            }
LABEL_196:
            switch ( v13 )
            {
              case 3u:
              case 4u:
              case 5u:
              case 8u:
              case 9u:
              case 0xAu:
              case 0xBu:
              case 0xCu:
              case 0xDu:
              case 0xEu:
              case 0xFu:
              case 0x13u:
              case 0x14u:
              case 0x15u:
              case 0x20u:
              case 0x21u:
              case 0x22u:
              case 0x25u:
              case 0x26u:
              case 0x27u:
              case 0x28u:
              case 0x29u:
LABEL_13:
                v32 = v9 - 1;
                if ( (int)v9 - 1 < 0 )
                  goto LABEL_262;
                v33 = *(_QWORD *)(a1 + 16) + 8LL * v32;
                while ( 1 )
                {
                  v34 = *(_QWORD *)v33;
                  v35 = *(_DWORD *)(*(_QWORD *)v33 + 8LL);
                  if ( v35 != 48 )
                    break;
                  --v32;
                  v33 -= 8;
                  if ( v32 == -1 )
                  {
LABEL_262:
                    if ( under_debugger )
                      goto LABEL_277;
LABEL_261:
                    sub_383060(0xC9A2u, *(double *)a7.m128_u64);
                  }
                }
                if ( !v10 )
                {
                  if ( !v34 || v35 != 2 && (unsigned int)(v35 - 22) > 9 )
                  {
                    v42 = 0;
                    goto LABEL_24;
                  }
                  goto LABEL_237;
                }
                v36 = sub_254FE0(v10);
                sub_2A8690(v31, v36, 0, v37, v38, v39, a7);
                if ( v34 )
                {
                  v40 = *(_DWORD *)(v34 + 8);
                  if ( v40 == 2 || (unsigned int)(v40 - 22) <= 9 )
                  {
                    v41 = *(_DWORD *)(v10 + 8);
                    if ( (unsigned int)(v41 - 19) <= 2 )
                    {
                      v42 = *(_QWORD *)(v10 + 24);
LABEL_23:
                      v31 = *(__int64 **)(a1 + 72);
                      goto LABEL_24;
                    }
                    if ( (unsigned int)(v41 - 1) > 0x2C && v41 != 58 )
                      goto LABEL_237;
                    v42 = *(_QWORD *)(v10 + 24);
                    v161 = v42;
                    if ( *(_DWORD *)(v42 + 8) != 61 )
                    {
                      v161 = *(_QWORD *)(v10 + 32);
                      if ( *(_DWORD *)(v161 + 8) != 61 )
                        goto LABEL_237;
                    }
                    if ( !v161 )
                      goto LABEL_237;
                    if ( (unsigned int)(v41 - 33) <= 1 )
                      goto LABEL_23;
                    if ( (v41 & 0xFFFFFFFD) != 0x25
                      || *(_DWORD *)(v161 + 8) != 61
                      || (v162 = sub_255A30(*(__int64 **)(v161 + 24)), (v162 & (v162 - 1)) != 0) )
                    {
LABEL_237:
                      v163 = sub_254FE0(*(_QWORD *)(v34 + 24));
                      if ( v10 != v163 )
                        sub_2A8690(v31, v163, 0, v164, v165, v166, a7);
                      v167 = sub_254FE0(*(_QWORD *)(v34 + 32));
                      if ( v10 != *(_QWORD *)(v34 + 32) )
                        sub_2A8690(v31, v167, 0, v168, v169, v170, a7);
                    }
                  }
                }
                v31 = *(__int64 **)(a1 + 72);
                v42 = *(_QWORD *)(v10 + 24);
LABEL_24:
                if ( v42 )
                {
                  v43 = sub_254FE0(v42);
                  sub_2A8690(v31, v43, 0, v44, v45, v46, a7);
                  v31 = *(__int64 **)(a1 + 72);
                }
                v47 = *(_QWORD *)(v10 + 32);
                if ( v47 )
                {
                  v48 = sub_254FE0(v47);
                  sub_2A8690(v31, v48, 0, v49, v50, v51, a7);
                  v31 = *(__int64 **)(a1 + 72);
                }
                a2 = v10;
                sub_2A8960(v31, v10, a7);
                if ( v13 <= 0xF )
                  goto LABEL_29;
                goto LABEL_30;
              case 6u:
              case 7u:
LABEL_99:
                v90 = *(_QWORD *)(v10 + 32);
                if ( v90 )
                {
                  v91 = sub_254FE0(v90);
                  sub_2A8690(v31, v91, 0, v92, v93, v94, a7);
                }
                goto LABEL_29;
              case 0x10u:
LABEL_143:
                v13 = 16;
                sub_2A8DC0(v31, *(_QWORD *)(v10 + 32), *(_QWORD *)(v10 + 40), 16, (int)a5, a6, a7);
                goto LABEL_87;
              case 0x11u:
              case 0x12u:
              case 0x31u:
              case 0x3Eu:
LABEL_74:
                v76 = v9 - 1;
                if ( (int)v9 - 1 < 0 )
                  goto LABEL_266;
                v77 = *(_QWORD *)(a1 + 16) + 8LL * v76;
                while ( 1 )
                {
                  v78 = *(_QWORD *)v77;
                  v79 = *(_DWORD *)(*(_QWORD *)v77 + 8LL);
                  if ( v79 != 48 )
                    break;
                  --v76;
                  v77 -= 8;
                  if ( v76 == -1 )
                  {
LABEL_266:
                    if ( !under_debugger )
                      goto LABEL_261;
                    goto LABEL_277;
                  }
                }
                if ( v78 && (v79 == 2 || (unsigned int)(v79 - 22) <= 9) )
                {
                  v80 = sub_254FE0(*(_QWORD *)(v78 + 24));
                  if ( v80 )
                  {
                    a2 = v80;
                    sub_2A8690(v31, v80, 0, v81, v82, v83, a7);
                  }
                  v84 = sub_254FE0(*(_QWORD *)(v78 + 32));
                  if ( *(_QWORD *)(v78 + 32) )
                  {
                    a2 = v84;
                    sub_2A8690(v31, v84, 0, v85, v86, v87, a7);
                  }
                }
                goto LABEL_30;
              case 0x16u:
              case 0x17u:
              case 0x18u:
              case 0x19u:
              case 0x1Au:
              case 0x1Bu:
              case 0x1Cu:
              case 0x1Du:
              case 0x1Eu:
              case 0x1Fu:
LABEL_33:
                sub_2A8DC0(v31, *(_QWORD *)(v10 + 24), *(_QWORD *)(v10 + 32), v13, (int)a5, a6, a7);
                v52 = *(__int64 **)(a1 + 72);
                v53 = *(_DWORD *)(a1 + 24) - 1;
                if ( v53 < 0 )
                  goto LABEL_268;
                v54 = *(_QWORD *)(a1 + 16) + 8LL * (unsigned int)v53;
                while ( 1 )
                {
                  v55 = *(_QWORD *)v54;
                  v56 = *(_DWORD *)(*(_QWORD *)v54 + 8LL);
                  if ( v56 != 48 )
                    break;
                  --v53;
                  v54 -= 8;
                  if ( v53 == -1 )
                  {
LABEL_268:
                    if ( !under_debugger )
                      goto LABEL_261;
LABEL_277:
                    BUG();
                  }
                }
                if ( v55 && (v56 == 2 || (unsigned int)(v56 - 22) <= 9) )
                {
                  v57 = sub_254FE0(*(_QWORD *)(v55 + 24));
                  if ( v57 )
                    sub_2A8690(v52, v57, 0, v58, v59, v60, a7);
                  v61 = sub_254FE0(*(_QWORD *)(v55 + 32));
                  if ( *(_QWORD *)(v55 + 32) )
                    sub_2A8690(v52, v61, 0, v62, v63, v64, a7);
                  v52 = *(__int64 **)(a1 + 72);
                }
                a2 = v10;
                sub_2A8960(v52, v10, a7);
                if ( (*(_BYTE *)(v10 + 56) & 4) != 0 )
                  goto LABEL_88;
                goto LABEL_90;
              case 0x23u:
              case 0x24u:
LABEL_86:
                sub_2A94E0((__int64)v31, *(_QWORD *)(v10 + 24), *(_QWORD *)(v10 + 32), a4, (int)a5, a6, a7);
                goto LABEL_87;
              case 0x2Fu:
                goto LABEL_126;
              case 0x30u:
LABEL_117:
                tinfo_property = get_tinfo_property();
                LOBYTE(v112) = (get_tinfo_property() & 0xF) == 9;
                if ( (_BYTE)v112 != ((tinfo_property & 0xF) == 9) )
                  goto LABEL_118;
                v171 = *(_QWORD *)(v10 + 24);
                v172 = *(_QWORD *)(a1 + 64);
                v206 = 6;
                v173 = *(_QWORD *)(a1 + 72);
                v207 = v171;
                sub_2A0060((__int64)&v206, v172, v112, v113, v114, v115, *(double *)a7.m128_u64);
                v174 = *(_QWORD *)(a1 + 64);
                v204 = 6;
                v205 = v10;
                sub_2A0060((__int64)&v204, v174, v175, v176, v177, v178, *(double *)a7.m128_u64);
                v208[0] = 0;
                sub_29F770((__int64)v208, (unsigned int *)&v204, *(double *)a7.m128_u64);
                v209[0] = 0;
                sub_29F770((__int64)v209, (unsigned int *)&v206, *(double *)a7.m128_u64);
                v210 = 1;
                sub_2A8310(v173, (__int64)v208, 0, v179, v180, v181, a7);
                v210 = -1;
                sub_29EC30((__int64)v209, *(double *)a7.m128_u64);
                sub_29EC30((__int64)v208, *(double *)a7.m128_u64);
                sub_29EC30((__int64)&v204, *(double *)a7.m128_u64);
                sub_29EC30((__int64)&v206, *(double *)a7.m128_u64);
                v182 = get_tinfo_property();
                if ( !v182 )
                  goto LABEL_118;
                tinfo_size = get_tinfo_size();
                v184 = get_tinfo_size();
                if ( v184 != tinfo_size
                  || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 112LL) + 80LL) == v184 && v182 == 2 )
                {
                  goto LABEL_118;
                }
                v185 = (v182 == 1) + 1;
                v186 = *(_DWORD *)(a1 + 24) - 1;
                if ( v186 < 0 )
                  goto LABEL_264;
                v187 = *(_QWORD *)(a1 + 16) + 8LL * (unsigned int)v186;
                while ( 1 )
                {
                  v188 = *(_QWORD *)v187;
                  v189 = *(_DWORD *)(*(_QWORD *)v187 + 8LL);
                  if ( v189 != 48 )
                    break;
                  --v186;
                  v187 -= 8;
                  if ( v186 == -1 )
                    goto LABEL_264;
                }
                if ( (unsigned int)(v189 - 22) <= 9 )
                {
                  v190 = *(_QWORD *)(v188 + 24);
                  if ( v10 == v190 )
                    v190 = *(_QWORD *)(v188 + 32);
                  if ( *(_DWORD *)(v190 + 8) == 61 )
                  {
                    v198 = get_tinfo_property();
                    if ( (v198 & 0x3E) != 0
                      && (v198 & 0xFu) <= 8
                      && (get_tinfo_property() & 0xF) != 8
                      && !(unsigned __int8)sub_2993E0(*(_QWORD *)(a1 + 64), v190, nullptr) )
                    {
                      v185 |= 8u;
                    }
                  }
                }
                sub_2A8780(*(__int64 **)(a1 + 72), *(_QWORD *)(v10 + 24), v185, 1u, a7);
LABEL_118:
                v13 = 48;
                goto LABEL_87;
              case 0x32u:
                goto LABEL_102;
              case 0x33u:
LABEL_138:
                sub_2A9000(v31, *(_QWORD *)(v10 + 24), 0, a7);
                v124 = *(_QWORD *)(v10 + 24);
                v125 = *(_DWORD *)(v124 + 8);
                if ( v125 == 48 )
                  goto LABEL_139;
                while ( (unsigned int)(v125 - 35) <= 1 )
                {
LABEL_139:
                  v124 = *(_QWORD *)(v124 + 24);
                  v125 = *(_DWORD *)(v124 + 8);
                }
                sub_299AE0(a1, v124);
                goto LABEL_55;
              case 0x34u:
LABEL_128:
                v117 = v9 - 1;
                if ( (int)v9 - 1 < 0 )
                  goto LABEL_264;
                v118 = (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL * v117);
                while ( *(_DWORD *)(*v118 + 8) == 48 )
                {
                  --v117;
                  --v118;
                  if ( v117 == -1 )
                  {
LABEL_264:
                    if ( !under_debugger )
                      goto LABEL_261;
                    goto LABEL_277;
                  }
                }
                v13 = 52;
                sub_2A9000(v31, 0, *v118, a7);
                goto LABEL_87;
              case 0x3Au:
LABEL_134:
                v119 = *(_QWORD *)(v10 + 32);
                if ( v119 )
                {
                  v120 = sub_254FE0(v119);
                  sub_2A8690(v31, v120, 1, v121, v122, v123, a7);
                }
                v13 = 58;
                goto LABEL_87;
              case 0x3Du:
                goto LABEL_55;
              case 0x41u:
                goto LABEL_201;
              default:
                if ( v13 > 0xF )
                  goto LABEL_50;
                if ( v13 != 2 )
                  goto LABEL_115;
LABEL_59:
                v69 = *(_QWORD *)(v10 + 32);
                if ( (unsigned int)(*(_DWORD *)(v69 + 8) - 19) > 2 )
                  goto LABEL_152;
                v70 = *(_QWORD *)(v10 + 24);
                while ( 2 )
                {
                  v71 = *(_DWORD *)(v70 + 8);
                  if ( v71 == 57 )
                  {
                    if ( (unsigned int)sub_28DD30(*(_QWORD *)(v70 + 24)) != -1 )
                    {
                      v70 = **(_QWORD **)(v70 + 32);
                      continue;
                    }
                  }
                  else if ( v71 > 0x39 )
                  {
                    if ( v71 == 65 )
                      goto LABEL_157;
                  }
                  else
                  {
                    if ( v71 == 1 )
                    {
                      v70 = *(_QWORD *)(v70 + 32);
                      continue;
                    }
                    if ( v71 == 51 )
                    {
                      v72 = *(_QWORD *)(v70 + 24);
                      v73 = *(_DWORD *)(v72 + 8);
                      if ( (unsigned int)(v73 - 64) > 1 )
                      {
                        if ( (unsigned int)(v73 - 35) <= 1 )
                        {
                          v72 = *(_QWORD *)(v72 + 24);
                          v73 = *(_DWORD *)(v72 + 8);
                        }
                        if ( v73 == 48 )
                        {
                          v74 = *(_QWORD *)(v72 + 24);
                          v75 = *(_DWORD *)(v74 + 8);
                          if ( (unsigned int)(v75 - 35) <= 1 )
                          {
                            v74 = *(_QWORD *)(v74 + 24);
                            v75 = *(_DWORD *)(v74 + 8);
                          }
                          if ( v75 == 52 )
                          {
                            v70 = *(_QWORD *)(v74 + 24);
                            continue;
                          }
                        }
                      }
                    }
                  }
                  break;
                }
                v70 = 0;
LABEL_157:
                v128 = *(_QWORD *)(v10 + 32);
LABEL_158:
                for ( i = *(_QWORD *)(v128 + 24); ; i = *(_QWORD *)(i + 32) )
                {
                  while ( 1 )
                  {
                    v130 = *(_DWORD *)(i + 8);
                    if ( v130 != 57 )
                      break;
                    if ( (unsigned int)sub_28DD30(*(_QWORD *)(i + 24)) == -1 )
                      goto LABEL_151;
                    i = **(_QWORD **)(i + 32);
                  }
                  if ( v130 > 0x39 )
                    break;
                  if ( v130 != 1 )
                  {
                    if ( v130 != 51 )
                      goto LABEL_151;
                    v131 = *(_QWORD *)(i + 24);
                    v132 = *(_DWORD *)(v131 + 8);
                    if ( (unsigned int)(v132 - 64) <= 1 )
                      goto LABEL_151;
                    if ( (unsigned int)(v132 - 35) <= 1 )
                    {
                      v131 = *(_QWORD *)(v131 + 24);
                      v132 = *(_DWORD *)(v131 + 8);
                    }
                    if ( v132 != 48 )
                      goto LABEL_151;
                    v128 = *(_QWORD *)(v131 + 24);
                    v133 = *(_DWORD *)(v128 + 8);
                    if ( (unsigned int)(v133 - 35) <= 1 )
                    {
                      v128 = *(_QWORD *)(v128 + 24);
                      v133 = *(_DWORD *)(v128 + 8);
                    }
                    if ( v133 != 52 )
                      goto LABEL_151;
                    goto LABEL_158;
                  }
                }
                if ( v130 != 65 )
                {
LABEL_151:
                  v69 = *(_QWORD *)(v10 + 32);
                  goto LABEL_152;
                }
                v69 = *(_QWORD *)(v10 + 32);
                if ( v70 && i && *(_DWORD *)(v70 + 32) == *(_DWORD *)(i + 32) )
                {
                  if ( (unsigned __int8)sub_29D090(*(_QWORD *)(v69 + 32), a2, *(double *)a7.m128_u64) )
                    goto LABEL_55;
                  goto LABEL_151;
                }
LABEL_152:
                if ( (unsigned __int8)sub_29D090(v69, a2, *(double *)a7.m128_u64) )
                  goto LABEL_55;
                v126 = *(_QWORD *)(v10 + 32);
                v127 = *(_DWORD *)(v126 + 8);
                if ( v127 != 65 )
                  goto LABEL_154;
                if ( !sub_29A1B0((__int64 *)(v126 + 48)) )
                  goto LABEL_55;
                v126 = *(_QWORD *)(v10 + 32);
                v127 = *(_DWORD *)(v126 + 8);
LABEL_154:
                if ( v127 == 61 && !sub_255A30(*(__int64 **)(v126 + 24)) )
                  goto LABEL_55;
                v13 = 2;
                goto LABEL_29;
            }
          }
          a2 = *(_QWORD *)(a2 + 16);
        }
        else
        {
          a2 = *(_QWORD *)(a2 + 8);
        }
        if ( (*(_BYTE *)a2 & 2) != 0 )
          goto LABEL_196;
      }
    }
    sub_284360(v11, a2, &v202, *(double *)a7.m128_u64);
    if ( (get_tinfo_property() & 0xF) == 0xA )
    {
      v203 = 0;
      v154 = get_tinfo_property();
      v155 = v154;
      v203 = v154;
      clear_tinfo_t();
      if ( (v155 & 0x40) == 0 )
      {
        v156 = *(__int64 **)(a1 + 72);
        v157 = sub_254FE0(a2);
        sub_2A8440(v156, v157, 64, v158, v159, v160, a7);
      }
    }
    v14 = v202;
    v15 = *(_QWORD *)(a1 + 64);
    v204 = 8;
    v205 = 0;
    v16 = operator new(0x10u);
    *(_QWORD *)v16 = v11;
    a2 = v15;
    *(_DWORD *)(v16 + 8) = v14;
    v205 = v16;
    sub_2A0060((__int64)&v204, v15, v17, v18, v19, v20, *(double *)a7.m128_u64);
    if ( (_DWORD)v204 == 1 )
    {
      if ( (unsigned int)verify_tinfo() )
        goto LABEL_9;
      if ( (get_tinfo_property() & 0xF) == 0xD )
      {
        a2 = v205;
        if ( (v205 & 0x100) == 0 || !get_tinfo_pdata() )
          goto LABEL_9;
      }
      if ( (_DWORD)v204 == 1 && (*(_BYTE *)(*(_QWORD *)(v11 + 32) + 32LL) & 3) == 0 )
        sub_2A7000(*(_QWORD *)(a1 + 72), *(_QWORD *)v11, v202, (__int64 *)&v205, *(double *)a7.m128_u64);
    }
    v25 = *(_QWORD *)(a1 + 72);
    v26 = *(_QWORD *)(a1 + 64);
    v206 = 6;
    v207 = v10;
    v200 = v25;
    sub_2A0060((__int64)&v206, v26, v21, v22, v23, v24, *(double *)a7.m128_u64);
    v208[0] = 0;
    sub_29F770((__int64)v208, (unsigned int *)&v204, *(double *)a7.m128_u64);
    v209[0] = 0;
    sub_29F770((__int64)v209, (unsigned int *)&v206, *(double *)a7.m128_u64);
    a2 = (unsigned __int64)v208;
    v210 = 1;
    sub_2A8310(v200, (__int64)v208, 0, v27, v28, v29, a7);
    v210 = -1;
    sub_29EC30((__int64)v209, *(double *)a7.m128_u64);
    sub_29EC30((__int64)v208, *(double *)a7.m128_u64);
    sub_29EC30((__int64)&v206, *(double *)a7.m128_u64);
LABEL_9:
    sub_29EC30((__int64)&v204, *(double *)a7.m128_u64);
    goto LABEL_4;
  }
  if ( v12 != 80 )
    goto LABEL_4;
  sub_2A8CB0(*(__int64 **)(a1 + 72), a2, a3, a4, (int)a5, a6, a7);
  if ( *(_DWORD *)(a2 + 8) != 65 )
  {
LABEL_172:
    if ( !(unsigned __int8)sub_29D090(a2, a2, *(double *)a7.m128_u64) )
    {
      a5 = *(__int64 **)(a1 + 72);
      v134 = *(_QWORD *)(a5[1] + 8);
      v135 = *(int *)(v134 + 480);
      if ( (_DWORD)v135 != -1 )
      {
        a2 = a5[6];
        v136 = *(_QWORD *)(v134 + 432) + 104 * v135;
        a4 = a5[7];
        v137 = (__int64 *)(a2 + 8 * a4);
        if ( (__int64 *)a2 == v137 )
          goto LABEL_179;
        v138 = (__int64 *)a5[6];
        while ( v136 != *v138 )
        {
          if ( v137 == ++v138 )
            goto LABEL_179;
        }
        if ( v137 == v138 )
        {
LABEL_179:
          if ( a5[8] < a4 + 1 )
          {
            v199 = *(__int64 **)(a1 + 72);
            v196 = qvector_reserve((__int64)(a5 + 6), a2, a4 + 1, 8);
            a5 = v199;
            v197 = v199[7];
            v199[6] = v196;
            v137 = (__int64 *)(v196 + 8 * v197);
          }
          *v137 = v136;
          ++a5[7];
        }
      }
    }
    goto LABEL_4;
  }
  v68 = *(int *)(a2 + 32);
  if ( (_DWORD)v68 != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 8LL) + 8LL) + 480LL) )
  {
    if ( sub_29A1B0((__int64 *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 432LL) + 104 * v68 + 80)) )
      goto LABEL_172;
LABEL_4:
    v13 = *(_DWORD *)(v10 + 8);
    switch ( v13 )
    {
      case 3u:
      case 4u:
      case 5u:
      case 8u:
      case 9u:
      case 0xAu:
      case 0xBu:
      case 0xCu:
      case 0xDu:
      case 0xEu:
      case 0xFu:
      case 0x13u:
      case 0x14u:
      case 0x15u:
      case 0x20u:
      case 0x21u:
      case 0x22u:
      case 0x25u:
      case 0x26u:
      case 0x27u:
      case 0x28u:
      case 0x29u:
        v31 = *(__int64 **)(a1 + 72);
        v9 = *(_QWORD *)(a1 + 24);
        goto LABEL_13;
      case 6u:
      case 7u:
        v31 = *(__int64 **)(a1 + 72);
        goto LABEL_99;
      case 0x10u:
        v31 = *(__int64 **)(a1 + 72);
        goto LABEL_143;
      case 0x11u:
      case 0x12u:
      case 0x31u:
      case 0x3Eu:
        v31 = *(__int64 **)(a1 + 72);
        v9 = *(_QWORD *)(a1 + 24);
        goto LABEL_74;
      case 0x16u:
      case 0x17u:
      case 0x18u:
      case 0x19u:
      case 0x1Au:
      case 0x1Bu:
      case 0x1Cu:
      case 0x1Du:
      case 0x1Eu:
      case 0x1Fu:
        v31 = *(__int64 **)(a1 + 72);
        goto LABEL_33;
      case 0x23u:
      case 0x24u:
        v31 = *(__int64 **)(a1 + 72);
        goto LABEL_86;
      case 0x2Fu:
        if ( *(_DWORD *)(v11 + 8) == 58 )
        {
          v152 = *(_QWORD *)(a1 + 24);
          if ( (int)v152 > 1 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * ((int)v152 - 2)) + 8LL) == 52 )
          {
            if ( (*(_BYTE *)(v10 + 56) & 4) == 0 )
              goto LABEL_145;
LABEL_211:
            a2 = v10;
            sub_299AE0(a1, v10);
            goto LABEL_90;
          }
LABEL_101:
          v31 = *(__int64 **)(a1 + 72);
        }
        else
        {
          a5 = *(__int64 **)(a1 + 72);
LABEL_126:
          v31 = a5;
          v13 = 47;
        }
LABEL_102:
        v95 = *(_QWORD *)(v10 + 24);
        if ( v95 )
        {
          v96 = sub_254FE0(v95);
          sub_2A8690(v31, v96, 0, v97, v98, v99, a7);
          v31 = *(__int64 **)(a1 + 72);
        }
        v100 = *(_DWORD *)(a1 + 24) - 1;
        if ( v100 < 0 )
        {
LABEL_260:
          if ( under_debugger )
            goto LABEL_277;
          goto LABEL_261;
        }
        v101 = *(_QWORD *)(a1 + 16) + 8LL * (unsigned int)v100;
        while ( 1 )
        {
          v102 = *(_QWORD *)v101;
          a2 = *(unsigned int *)(*(_QWORD *)v101 + 8LL);
          if ( (_DWORD)a2 != 48 )
            break;
          --v100;
          v101 -= 8;
          if ( v100 == -1 )
            goto LABEL_260;
        }
        if ( v102 )
        {
          if ( (_DWORD)a2 == 2 || (a2 = (unsigned int)(a2 - 22), (unsigned int)a2 <= 9) )
          {
            v103 = sub_254FE0(*(_QWORD *)(v102 + 24));
            if ( v103 )
            {
              a2 = v103;
              sub_2A8690(v31, v103, 0, v104, v105, v106, a7);
            }
            v107 = sub_254FE0(*(_QWORD *)(v102 + 32));
            if ( *(_QWORD *)(v102 + 32) )
            {
              a2 = v107;
              sub_2A8690(v31, v107, 0, v108, v109, v110, a7);
            }
          }
        }
LABEL_115:
        if ( (*(_BYTE *)(v10 + 56) & 4) == 0 )
          goto LABEL_90;
        break;
      case 0x30u:
        goto LABEL_117;
      case 0x32u:
        goto LABEL_101;
      case 0x33u:
        v31 = *(__int64 **)(a1 + 72);
        goto LABEL_138;
      case 0x34u:
        v31 = *(__int64 **)(a1 + 72);
        v9 = *(_QWORD *)(a1 + 24);
        goto LABEL_128;
      case 0x3Au:
        v31 = *(__int64 **)(a1 + 72);
        goto LABEL_134;
      case 0x3Du:
        if ( *(_DWORD *)(v11 + 8) != 35 )
          goto LABEL_55;
        if ( (unsigned __int8)is_stroff() )
        {
          v116 = *(_QWORD *)(v11 + 24);
          if ( v10 == v116 )
            v116 = *(_QWORD *)(v11 + 32);
          sub_2A9670(*(_QWORD *)(a1 + 72), v116, v10, a7);
        }
        goto LABEL_87;
      case 0x41u:
        goto LABEL_54;
      default:
        if ( v13 > 0xF )
          goto LABEL_50;
        if ( v13 == 2 )
          goto LABEL_59;
        v88 = 1LL << v13;
        if ( (*(_BYTE *)(v10 + 56) & 4) != 0 )
          goto LABEL_211;
        goto LABEL_91;
    }
    goto LABEL_88;
  }
LABEL_54:
  if ( *(_DWORD *)(v11 + 8) == 48 )
  {
LABEL_55:
    if ( (*(_BYTE *)(v10 + 56) & 4) != 0 )
      sub_299AE0(a1, v10);
  }
  else
  {
LABEL_201:
    if ( (unsigned int)lexcompare_tinfo() )
    {
      v191 = *(_QWORD *)(a1 + 64);
      v205 = v10;
      v204 = 6;
      v192 = *(_QWORD *)(a1 + 72);
      sub_2A0060((__int64)&v204, v191, v148, v149, v150, v151, *(double *)a7.m128_u64);
      v206 = 1;
      v207 = 0;
      copy_tinfo_t();
      v208[0] = 0;
      sub_29F770((__int64)v208, (unsigned int *)&v206, *(double *)a7.m128_u64);
      v209[0] = 0;
      sub_29F770((__int64)v209, (unsigned int *)&v204, *(double *)a7.m128_u64);
      v210 = 1;
      sub_2A8310(v192, (__int64)v208, 0, v193, v194, v195, a7);
      v210 = -1;
      sub_29EC30((__int64)v209, *(double *)a7.m128_u64);
      sub_29EC30((__int64)v208, *(double *)a7.m128_u64);
      sub_29EC30((__int64)&v206, *(double *)a7.m128_u64);
      sub_29EC30((__int64)&v204, *(double *)a7.m128_u64);
    }
    v13 = 65;
LABEL_87:
    if ( (*(_BYTE *)(v10 + 56) & 4) != 0 )
      goto LABEL_88;
  }
  return 0;
}

