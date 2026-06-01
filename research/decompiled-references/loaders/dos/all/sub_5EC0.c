__int64 __fastcall sub_5EC0(__int64 a1, char a2)
{
  unsigned int v3; // ebp
  unsigned int v4; // esi
  unsigned int v5; // ebx
  unsigned int v6; // edx
  unsigned int v7; // r9d
  unsigned int v8; // r13d
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // eax
  __int64 v12; // r14
  __int64 v14; // rax
  unsigned int *v15; // r15
  unsigned __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbp
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r13
  unsigned __int64 v32; // r14
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdi
  unsigned __int64 v39; // r13
  __int64 v40; // r14
  __int64 v41; // r12
  __int64 *v42; // rbp
  __int64 v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // rdi
  _QWORD *v46; // rax
  _QWORD *v47; // r11
  int v48; // ebp
  __int64 v49; // r13
  _QWORD *v50; // r14
  int v51; // r15d
  int dword; // r12d
  int v53; // r9d
  __int64 v54; // rbp
  _QWORD *v55; // r11
  __int64 v56; // rbp
  unsigned __int64 v57; // r14
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r10
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rbx
  __int64 v65; // r14
  __int64 *v66; // rbp
  __int64 v67; // rdi
  __int64 v68; // rdi
  __int64 v69; // rdi
  __int64 v70; // r14
  unsigned int v71; // ebp
  unsigned __int64 v72; // r12
  __int64 v73; // r14
  unsigned __int16 word; // ax
  unsigned int v75; // r14d
  unsigned int v76; // r12d
  unsigned __int64 v77; // rbx
  __int64 v78; // r13
  unsigned __int64 v79; // rbp
  __int64 v80; // r8
  unsigned int v81; // ebx
  _QWORD *v82; // r11
  _QWORD *v83; // r12
  __int64 v84; // rbx
  __int64 v85; // rbp
  __int64 v86; // rsi
  unsigned __int64 v87; // rbx
  unsigned __int64 v88; // r12
  __int64 v89; // r14
  unsigned __int64 v90; // rbp
  char v91; // bp
  __int64 v92; // r13
  int segm_qty; // eax
  unsigned int v94; // r12d
  int v95; // r15d
  unsigned __int64 *v96; // rax
  unsigned __int64 *v97; // rbp
  unsigned __int64 v98; // rbx
  unsigned int v99; // r13d
  unsigned __int16 v100; // ax
  char byte; // al
  unsigned __int64 v102; // rbx
  __int64 v103; // r15
  __int64 v104; // r13
  __int64 v105; // r12
  int v106; // ebx
  int v107; // ebp
  __int64 v108; // rsi
  unsigned __int16 v109; // r12
  __int64 v110; // rbp
  __int64 v111; // rbx
  unsigned __int16 v112; // ax
  unsigned int v113; // r12d
  unsigned __int64 v114; // rbp
  unsigned int v115; // ebx
  int v116; // r14d
  unsigned int v117; // r13d
  __int64 v118; // rsi
  __int64 v119; // r14
  __int64 prev_fixup_ea; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  _QWORD *v123; // r11
  __int64 v124; // r8
  unsigned int v125; // r12d
  unsigned int v126; // r14d
  __int64 v127; // rbx
  __int64 v128; // rbp
  unsigned int v129; // eax
  unsigned __int64 v130; // rbp
  unsigned int v131; // r14d
  unsigned int v132; // r13d
  _QWORD *v133; // r14
  unsigned __int64 v134; // rbx
  __int64 v135; // rbx
  unsigned __int64 v136; // rbx
  _QWORD *v137; // r12
  __int64 v138; // rbx
  __int64 v139; // rbp
  __int64 v140; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v141; // [rsp+10h] [rbp-C8h]
  unsigned int *v142; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v143; // [rsp+10h] [rbp-C8h]
  __int64 v144; // [rsp+10h] [rbp-C8h]
  _QWORD *v145; // [rsp+10h] [rbp-C8h]
  _QWORD *v146; // [rsp+10h] [rbp-C8h]
  unsigned int v147; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v148; // [rsp+10h] [rbp-C8h]
  unsigned __int64 *v149; // [rsp+10h] [rbp-C8h]
  unsigned int v150; // [rsp+10h] [rbp-C8h]
  _QWORD *v151; // [rsp+10h] [rbp-C8h]
  unsigned int v152; // [rsp+10h] [rbp-C8h]
  unsigned int v154; // [rsp+18h] [rbp-C0h]
  unsigned __int64 v155; // [rsp+20h] [rbp-B8h]
  __int64 v156; // [rsp+20h] [rbp-B8h]
  unsigned int v157; // [rsp+20h] [rbp-B8h]
  unsigned int v158; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v159; // [rsp+20h] [rbp-B8h]
  _QWORD *v160; // [rsp+20h] [rbp-B8h]
  __int64 v161; // [rsp+20h] [rbp-B8h]
  unsigned int v162; // [rsp+20h] [rbp-B8h]
  _QWORD *v163; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v164; // [rsp+28h] [rbp-B0h]
  _QWORD *v165; // [rsp+28h] [rbp-B0h]
  _QWORD *v166; // [rsp+28h] [rbp-B0h]
  unsigned int v167; // [rsp+28h] [rbp-B0h]
  unsigned int v168; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v169; // [rsp+28h] [rbp-B0h]
  _QWORD *v170; // [rsp+28h] [rbp-B0h]
  __int64 v171; // [rsp+28h] [rbp-B0h]
  _QWORD *v172; // [rsp+30h] [rbp-A8h]
  __int64 v173; // [rsp+30h] [rbp-A8h]
  _QWORD *v174; // [rsp+30h] [rbp-A8h]
  _QWORD *v175; // [rsp+30h] [rbp-A8h]
  __int64 v176; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v177; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v178; // [rsp+40h] [rbp-98h]
  unsigned int v179; // [rsp+40h] [rbp-98h]
  char v180; // [rsp+4Fh] [rbp-89h]
  __int64 v181; // [rsp+50h] [rbp-88h]
  __int64 v182; // [rsp+50h] [rbp-88h]
  unsigned int v183; // [rsp+58h] [rbp-80h]
  unsigned int v184; // [rsp+60h] [rbp-78h] BYREF
  unsigned int v185; // [rsp+64h] [rbp-74h]
  unsigned __int64 v186; // [rsp+68h] [rbp-70h]
  __int64 v187; // [rsp+70h] [rbp-68h] BYREF
  __int128 v188; // [rsp+78h] [rbp-60h]
  unsigned __int16 v189; // [rsp+88h] [rbp-50h]
  unsigned __int16 v190; // [rsp+8Ah] [rbp-4Eh]
  unsigned int v191; // [rsp+92h] [rbp-46h] BYREF
  __int16 v192; // [rsp+96h] [rbp-42h]
  unsigned __int64 v193; // [rsp+98h] [rbp-40h]

  v193 = __readfsqword(0x28u);
  v3 = qlsize(a1);
  v184 = dword_B490;
  netnode_check(&qword_B480, 0, 0, 1);
  sub_31F0((__int64)"Searching for the overlays in the file...\n");
  v4 = v184;
  if ( (unsigned __int64)v184 + 28 >= v3 )
  {
    dword_B490 = 0;
    goto LABEL_15;
  }
  v5 = 0;
  do
  {
    if ( sub_4EE0(a1, v4, (__int64)&v187, 28) )
      sub_3450();
    v6 = 16 * (32 * WORD2(v187) - (unsigned __int16)v188);
    if ( WORD1(v187) )
      v6 = v6 + WORD1(v187) - 512;
    v7 = 16 * (unsigned __int16)v188;
    v185 = v6;
    v8 = v7;
    v186 = v189
         | (((unsigned __int16)v188
           | ((HIWORD(v187) | ((unsigned __int64)(unsigned __int16)((v6 + 15) >> 4) << 16)) << 16)) << 16);
    v9 = v3 - v184;
    if ( (_WORD)v187 != 23117 || v9 < v7 )
      goto LABEL_13;
    v10 = v189 + 4 * HIWORD(v187);
    v11 = v9 - v7;
    if ( v10 < v6 )
      v10 = v6;
    if ( v11 < v10 )
    {
LABEL_13:
      v180 = a2;
      if ( !dword_B490 )
        goto LABEL_14;
      v14 = qlsize(a1);
      sub_3120((__int64)&unk_8680, (unsigned int)dword_B490, v14);
      if ( !v5 )
        goto LABEL_15;
      goto LABEL_18;
    }
    sub_3490();
    netnode_supset(qword_B480, ++v5, &v184, 16, 83);
    dword_B490 = v8 + v184 + v185;
    v4 = (dword_B490 + 511) & 0xFFFFFE00;
    if ( v184 == v4 )
    {
      v180 = a2;
      sub_3120((__int64)"Too small overflay size %u, stopped processing them", v8 + v185);
      goto LABEL_127;
    }
    v184 = (dword_B490 + 511) & 0xFFFFFE00;
    a2 &= v190 == v5;
  }
  while ( v4 + 28 < (unsigned __int64)v3 );
  v180 = a2;
LABEL_127:
  dword_B490 = 0;
LABEL_14:
  if ( !v5 )
  {
LABEL_15:
    v12 = -1;
    goto LABEL_16;
  }
LABEL_18:
  v15 = &v184;
  v16 = 1;
  if ( netnode_supval(qword_B480, 1, &v184, 16, 83) != 16 )
    goto LABEL_138;
  v155 = (unsigned __int64)v184 << 32;
  v21 = getinf(19, 1, v17, v18, v19, v20);
  sub_31F0((__int64)"Searching the overlay reference data table...\n");
LABEL_20:
  while ( 1 )
  {
    v26 = getinf(20, v16, v22, v23, v24, v25);
    v30 = v21 + 8;
    if ( v21 + 8 >= v26 )
      break;
    v140 = getinf(20, v16, v30, v27, v28, v29);
    v187 = 0;
    v188 = 0;
    v187 = qvector_reserve(&v187, 0, 1, 80);
    v31 = v187 + 80 * v188;
    *(_OWORD *)(v31 + 8) = 0;
    *(_QWORD *)v31 = 0;
    *(_QWORD *)(v31 + 24) = 0;
    *(_QWORD *)(v31 + 48) = 0;
    *(_DWORD *)(v31 + 72) = -1;
    *(_OWORD *)(v31 + 32) = 0;
    *(_OWORD *)(v31 + 56) = 0;
    *(_QWORD *)&v188 = v188 + 1;
    v32 = *(_QWORD *)(v31 + 8);
    v33 = v32 + 8;
    if ( v32 >= 0xFFFFFFFFFFFFFFF8LL )
    {
      v33 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      v34 = qvector_reserve(v31, *(_QWORD *)v31, v32 + 8, 1);
      v35 = *(_QWORD *)(v31 + 8);
      *(_QWORD *)v31 = v34;
      memset((void *)(v34 + v35), 0, v32 + 8 - v35);
    }
    v36 = *(_QWORD *)v31;
    *(_QWORD *)(v31 + 8) = v33;
    v16 = v140;
    *(_QWORD *)(v36 + v32) = v155;
    v37 = bin_search(v21, v140, &v187, 3, 0);
    v38 = v187;
    v39 = v37;
    if ( v187 )
    {
      v40 = v188;
      if ( (_QWORD)v188 )
      {
        v41 = 0;
        do
        {
          v42 = (__int64 *)(v38 + 80 * v41);
          v43 = v42[6];
          if ( v43 )
          {
            v42[7] = 0;
            qfree(v43);
          }
          v44 = v42[3];
          if ( v44 )
          {
            v42[4] = 0;
            qfree(v44);
          }
          v45 = *v42;
          if ( *v42 )
          {
            v42[1] = 0;
            qfree(v45);
          }
          ++v41;
          v38 = v187;
        }
        while ( v40 != v41 );
      }
      *(_QWORD *)&v188 = 0;
      qfree(v38);
    }
    if ( v39 == -1 )
      break;
    v141 = v39 + 4;
    v46 = (_QWORD *)getseg(v39 + 4);
    v23 = v39 + 4;
    v47 = v46;
    if ( v46 )
    {
      v16 = 4LL * (v5 + 1);
      if ( v141 - *v46 >= v16 && v46[1] >= v141 + 8LL * v5 )
      {
        if ( v5 == 1 )
        {
          v179 = 1;
          goto LABEL_47;
        }
        v164 = v39 + 4;
        v178 = v39;
        v48 = 2;
        v49 = v39 + 4;
        v50 = v46;
        v142 = v15;
        v51 = 0;
        while ( 1 )
        {
          v49 += 4;
          dword = get_dword(v49);
          if ( dword )
          {
            v16 = (unsigned int)(v48 - v51);
            if ( netnode_supval(qword_B480, v16, v142, 16, 83) != 16 )
              goto LABEL_138;
            if ( dword != v184 )
            {
              v15 = v142;
              v23 = v49;
              break;
            }
          }
          else if ( v50[1] < v49 + 8 * (unsigned __int64)(v5 + ++v51 - v48) )
          {
            v15 = v142;
            v21 = v49;
            goto LABEL_20;
          }
          if ( v51 + v5 < ++v48 )
          {
            v53 = v51;
            v39 = v178;
            v47 = v50;
            v15 = v142;
            if ( v53 )
            {
              v150 = v5;
              v113 = v5;
              v114 = v164;
              v115 = 2;
              v160 = v50;
              v116 = v53;
              v169 = v178;
              do
              {
                v114 += 4LL;
                if ( !(unsigned int)get_dword(v114) )
                {
                  if ( !v116 )
                    goto LABEL_138;
                  --v116;
                  v117 = v113;
                  if ( v113 >= v115 )
                  {
                    while ( netnode_supval(qword_B480, v117, v15, 16, 83) == 16 )
                    {
                      v118 = v117-- + 1;
                      netnode_supset(qword_B480, v118, v15, 16, 83);
                      if ( v117 < v115 )
                        goto LABEL_136;
                    }
LABEL_138:
                    sub_5080((__int64)"Internal error");
                  }
LABEL_136:
                  ++v113;
                  netnode_supdel(qword_B480, v115, 83);
                  sub_3490();
                }
                ++v115;
              }
              while ( v113 >= v115 );
              v5 = v150;
              v47 = v160;
              v179 = v113;
              v39 = v169;
              if ( v116 )
                goto LABEL_138;
            }
            else
            {
              v179 = v5;
            }
LABEL_47:
            v54 = v39 - 1 - 2LL * (v179 - 1);
            do
            {
              v143 = v54 + 1;
              v165 = v47;
              v156 = *v47;
              v187 = 0;
              v188 = 0;
              v187 = qvector_reserve(&v187, 0, 1, 80);
              v55 = v165;
              v56 = v187 + 80 * v188;
              *(_OWORD *)(v56 + 8) = 0;
              *(_QWORD *)v56 = 0;
              *(_QWORD *)(v56 + 24) = 0;
              *(_QWORD *)(v56 + 48) = 0;
              *(_DWORD *)(v56 + 72) = -1;
              *(_OWORD *)(v56 + 32) = 0;
              *(_OWORD *)(v56 + 56) = 0;
              *(_QWORD *)&v188 = v188 + 1;
              v57 = *(_QWORD *)(v56 + 8);
              if ( v57 >= 0xFFFFFFFFFFFFFFFELL )
              {
                v60 = 0x7FFFFFFFFFFFFFFFLL;
              }
              else
              {
                v58 = qvector_reserve(v56, *(_QWORD *)v56, v57 + 2, 1);
                v59 = *(_QWORD *)(v56 + 8);
                *(_QWORD *)v56 = v58;
                memset((void *)(v58 + v59), 0, v57 + 2 - v59);
                v55 = v165;
                v60 = v57 + 2;
              }
              v61 = *(_QWORD *)v56;
              *(_QWORD *)(v56 + 8) = v60;
              v16 = v143;
              v166 = v55;
              *(_WORD *)(v61 + v57) = 0;
              v62 = bin_search(v156, v143, &v187, 19, 0);
              v63 = v187;
              v47 = v166;
              v54 = v62;
              if ( v187 )
              {
                if ( (_QWORD)v188 )
                {
                  v144 = v62;
                  v157 = v5;
                  v64 = 0;
                  v65 = v188;
                  do
                  {
                    v66 = (__int64 *)(v63 + 80 * v64);
                    v67 = v66[6];
                    if ( v67 )
                    {
                      v66[7] = 0;
                      qfree(v67);
                    }
                    v68 = v66[3];
                    if ( v68 )
                    {
                      v66[4] = 0;
                      qfree(v68);
                    }
                    v69 = *v66;
                    if ( *v66 )
                    {
                      v66[1] = 0;
                      qfree(v69);
                    }
                    ++v64;
                    v63 = v187;
                  }
                  while ( v65 != v64 );
                  v54 = v144;
                  v5 = v157;
                  v47 = v166;
                }
                v145 = v47;
                *(_QWORD *)&v188 = 0;
                qfree(v63);
                v47 = v145;
              }
              if ( v54 == -1 )
                goto LABEL_91;
              v28 = ((_BYTE)v39 - (_BYTE)v54) & 1;
            }
            while ( (((_BYTE)v39 - (_BYTE)v54) & 1) != 0 );
            dword_B468 = (v39 - v54) >> 1;
            v30 = (unsigned int)dword_B468;
            if ( (unsigned int)dword_B468 <= 1 )
              goto LABEL_91;
            v70 = v54 + 2;
            qword_B470 = v54;
            if ( v54 + 2 < v39 )
            {
              v146 = v47;
              v71 = v179;
              v72 = v70;
              v73 = v28;
              do
              {
                word = get_word(v72);
                if ( v71 < word )
                {
                  if ( v71 == v5 )
                    goto LABEL_91;
                  v71 = word;
                }
                v72 += 2LL;
              }
              while ( v72 < v39 );
              v28 = v73;
              v47 = v146;
              v158 = v71;
              v75 = v71 - v179;
              if ( v71 != v179 )
              {
                v167 = v5;
                v76 = v71 - v179;
                v77 = v39;
                v78 = v28;
                v172 = v146;
                do
                {
                  v79 = v77;
                  v77 -= 4LL;
                  if ( (unsigned int)get_dword(v77) )
                  {
                    v75 -= v76;
                    v147 = v76;
                    v80 = v78;
                    v81 = v167;
                    v82 = v172;
                    v39 = v79;
                    v158 = v75 + v179;
                    goto LABEL_77;
                  }
                  dword_B468 -= 2;
                  if ( (unsigned int)dword_B468 <= 1 )
                  {
LABEL_90:
                    v5 = v167;
                    goto LABEL_91;
                  }
                  --v76;
                }
                while ( v76 );
                v80 = v78;
                v147 = 0;
                v39 = v77;
                v82 = v172;
                v81 = v167;
LABEL_77:
                if ( v179 )
                {
                  v168 = v81;
                  v83 = v82;
                  v84 = v179;
                  v85 = v80;
                  do
                  {
                    v86 = v75 + (unsigned int)v84;
                    if ( netnode_supval(qword_B480, v84, v15, 16, 83) == 16 )
                      netnode_supset(qword_B480, v86, v15, 16, 83);
                    else
                      netnode_supdel(qword_B480, v86, 83);
                    --v84;
                  }
                  while ( v84 );
                  v81 = v168;
                  v82 = v83;
                  v80 = v85;
                }
                v167 = v81;
                v137 = v82;
                v138 = 0;
                v139 = v80;
                do
                  netnode_supdel(qword_B480, ++v138, 83);
                while ( (unsigned int)v138 < v75 );
                v5 = v167;
                v175 = v137;
                sub_3490();
                v16 = v147;
                v28 = v139;
                v47 = v137;
                if ( !v147 )
                {
                  v54 = qword_B470;
                  LODWORD(v30) = dword_B468;
                  v179 = v158;
                  goto LABEL_142;
                }
                v87 = v39 + 4LL * v158;
                v88 = v87 + 4LL * (v147 - 1);
                v89 = v139;
                do
                {
                  v90 = v87;
                  v87 += 4LL;
                  if ( (unsigned int)get_dword(v87) )
                    goto LABEL_90;
                }
                while ( v90 != v88 );
                v28 = v89;
                v5 = v167;
                v47 = v175;
                v179 = v158 + v147;
              }
              v54 = qword_B470;
              LODWORD(v30) = dword_B468;
            }
LABEL_142:
            v161 = v28;
            v151 = v47;
            v119 = v54 - 2LL * (unsigned int)v30;
            v176 = v119;
            prev_fixup_ea = get_prev_fixup_ea(v119 + 1);
            v123 = v151;
            v124 = v161;
            if ( v119 != prev_fixup_ea )
            {
              sub_3050((__int64)"Absent relocation at start of offset table", v16, v121, v122, v161);
              v124 = v161;
              v123 = v151;
            }
            qword_B478 = v119;
            v181 = qword_B470;
            v125 = v179 + 1;
            if ( (unsigned int)dword_B468 <= 1 )
            {
              v152 = 0;
              v130 = v39 + 4LL * v125;
              if ( v179 )
                goto LABEL_149;
LABEL_182:
              v152 = 0;
            }
            else
            {
              v152 = 0;
              v126 = 1;
              v170 = v123;
              v173 = v124;
              v162 = v5;
              v127 = qword_B470;
              do
              {
                v128 = v127;
                v127 += 2;
                v129 = get_word(v127);
                v16 = v129;
                if ( (_WORD)v129 )
                {
                  v16 = (unsigned __int16)v129;
                  v183 = (unsigned __int16)get_word(v128 + v176 - v181 + 2);
                  if ( netnode_supval(qword_B480, v16, v15, 16, 83) == 16 )
                  {
                    if ( v183 >= v185 )
                    {
LABEL_181:
                      v5 = v162;
                      sub_3050((__int64)"Incompatible offset table");
                      v152 = 0;
                      v123 = v170;
                      v130 = v39 + 4LL * v125;
                      v124 = v173;
                      if ( !v179 )
                        goto LABEL_182;
LABEL_149:
                      v131 = 1;
                      v174 = v123;
                      v177 = v39;
                      v182 = v124;
                      while ( 2 )
                      {
                        v130 += 4LL;
                        v16 = v131;
                        v132 = get_dword(v130);
                        if ( netnode_supval(qword_B480, v131, v15, 16, 83) == 16 )
                        {
                          if ( !v132 )
                          {
                            sub_3050((__int64)"Zero overlay memory size in description table");
                            goto LABEL_91;
                          }
                          if ( v132 >= HIWORD(v186) && v132 <= 0xFFF )
                          {
                            if ( HIWORD(v186) < v132 )
                            {
                              v16 = v131;
                              HIWORD(v186) = v132;
                              netnode_supset(qword_B480, v131, v15, 16, 83);
                            }
LABEL_152:
                            if ( v179 < ++v131 )
                            {
                              v125 = v179 + 1;
                              v123 = v174;
                              v39 = v177;
                              v124 = v182;
                              goto LABEL_162;
                            }
                            continue;
                          }
                        }
                        else if ( !v132 )
                        {
                          goto LABEL_152;
                        }
                        break;
                      }
                      sub_3050((__int64)"Incompatible mem-size table");
                      goto LABEL_152;
                    }
                  }
                  else
                  {
                    if ( v183 )
                      goto LABEL_181;
                    v16 = v126;
                    sub_31F0((__int64)"An overlay index %u in the table of indexes points to a missing overlay\n", v126);
                  }
                }
                else
                {
                  if ( v179 >= v126 )
                  {
                    v5 = v162;
                    sub_3050((__int64)"Incompatible offset table", v129);
                    v152 = 0;
                    v124 = v173;
                    v123 = v170;
                    v130 = v39 + 4LL * v125;
                    goto LABEL_149;
                  }
                  ++v152;
                }
                ++v126;
              }
              while ( v126 < dword_B468 );
              v5 = v162;
              v123 = v170;
              v124 = v173;
              v130 = v39 + 4LL * (v125 + v152);
              if ( v179 )
                goto LABEL_149;
LABEL_162:
              if ( !v152 )
                goto LABEL_182;
              v133 = v123;
              v134 = 4LL * v152 + v130;
              do
              {
                v130 += 4LL;
                if ( (unsigned int)get_dword(v130) )
                {
                  sub_3050((__int64)"Incompatible extension in overlay tables", v16);
                  v124 = 4LL * v152;
                  v123 = v133;
                  goto LABEL_167;
                }
              }
              while ( v130 != v134 );
              v123 = v133;
              v124 = 4LL * v152;
            }
LABEL_167:
            v163 = v123;
            v171 = v124;
            sub_31F0((__int64)"All tables OK\n");
            v135 = 2 * (dword_B468 - v152);
            create_data(qword_B478, 0x10000000, v135, -1);
            set_name(qword_B478, "ovr_off_tbl", 6144);
            create_data(qword_B470, 0x10000000, v135, -1);
            set_name(qword_B470, "ovr_index_tbl", 6144);
            create_data(v39, 0x20000000, 4 * v125, -1);
            set_name(v39, "ovr_start_tbl", 6144);
            v91 = 0;
            v136 = v171 + v39 + 4 * v125;
            create_data(v136, 0x20000000, 4 * v125, -1);
            v16 = (unsigned __int64)"ovr_memsiz_tbl";
            set_name(v136, "ovr_memsiz_tbl", 6144);
            v5 = v179;
            v12 = v163[6];
            if ( v12 != -1 )
              goto LABEL_94;
            goto LABEL_92;
          }
        }
      }
    }
    v21 = v23 + 4;
  }
LABEL_91:
  dword_B468 = -1;
LABEL_92:
  v91 = 1;
  v12 = -1;
  if ( !v180 )
  {
    v91 = 0;
    sub_3050((__int64)"Cannot find the overlay call data table");
  }
LABEL_94:
  v92 = getinf(20, v16, v30, v27, v28, v29);
  sub_53A0(a1, v5, v91);
  if ( dword_B468 == -1 )
    goto LABEL_16;
  sub_31F0((__int64)"Searching for the stub segment...\n");
  segm_qty = get_segm_qty();
  if ( segm_qty <= 0 )
  {
LABEL_104:
    sub_3050((__int64)"The overlay-manager segment not found");
    goto LABEL_16;
  }
  v148 = v92;
  v94 = 0;
  v95 = segm_qty;
  while ( 1 )
  {
    while ( 1 )
    {
      v96 = (unsigned __int64 *)getnseg(v94);
      v97 = v96;
      if ( v96[6] != v12 )
      {
        v98 = *v96;
        if ( *v96 >= v148 )
          goto LABEL_104;
        if ( get_bytes(&v191, 6, v98, 0, 0) == 6 )
        {
          v99 = v191;
          if ( !v191 )
            break;
        }
      }
LABEL_97:
      if ( v95 == ++v94 )
        goto LABEL_104;
    }
    if ( !v192 )
      break;
    if ( v95 == ++v94 )
      goto LABEL_104;
  }
  while ( 1 )
  {
    v98 += 6LL;
    if ( v98 >= v97[1] - 6 )
      goto LABEL_97;
    byte = get_byte(v98);
    if ( byte != -51 )
      break;
    if ( (unsigned __int8)get_byte(v98 + 1) != 63 )
      goto LABEL_97;
    v100 = get_word(v98 + 2);
    if ( !v100 || dword_B468 < (unsigned int)v100 )
      goto LABEL_97;
    ++v99;
    sub_3490();
  }
  if ( byte || v99 < dword_B468 )
    goto LABEL_97;
  v154 = v99;
  v149 = v97;
  if ( !v97 )
    goto LABEL_104;
  v102 = *v97;
  set_segm_name(v97, "STUB", 0);
  set_segm_class(v97, "CODE", 0);
  v103 = v102 + 6;
  create_data(v102, 0, 6, -1);
  sub_31F0((__int64)"Patching the overlay stub-segment...\n");
  if ( !v99 )
    goto LABEL_124;
  v159 = v102;
  v104 = v103 + 6LL * v99;
  while ( 2 )
  {
    while ( 2 )
    {
      v112 = get_word(v103 + 2);
      if ( !v112 )
      {
LABEL_119:
        v103 += 6;
        if ( v104 == v103 )
          goto LABEL_123;
        continue;
      }
      break;
    }
    if ( v112 < (unsigned int)dword_B468 )
    {
      v105 = 2 * (unsigned int)v112;
      v106 = (unsigned __int16)get_word(v103 + 4);
      v107 = (unsigned __int16)get_word(v105 + qword_B478);
      v108 = (unsigned __int16)get_word(v105 + qword_B470);
      v109 = netnode_altval(qword_B480, v108, 65);
      if ( netnode_supval(qword_B480, v108, &v187, 16, 83) == 16 )
      {
        v110 = (unsigned int)(v106 + v107);
        if ( (unsigned int)v110 < HIDWORD(v187) )
        {
          show_auto(v103, 0);
          put_byte(v103, 234);
          put_word(v103 + 1, v110);
          put_word(v103 + 3, v109);
          put_byte(v103 + 5, 144);
          auto_mark_range(v103, v103 + 1, 20);
          auto_mark_range(v103, v103 + 1, 30);
          v111 = 16 * sel2para(v109) + v110;
          auto_mark_range(v111, v111 + 1, 20);
          auto_mark_range(v111, v111 + 1, 30);
          sub_3490();
          goto LABEL_119;
        }
      }
    }
    v103 += 6;
    sub_3050((__int64)"Illegal reference in overlay call interrupt");
    if ( v104 != v103 )
      continue;
    break;
  }
LABEL_123:
  v103 = v159 + 6LL * (v154 - 1) + 12;
LABEL_124:
  create_align(v103, v149[1] - v103, 0);
LABEL_16:
  netnode_kill(&qword_B480);
  return v12;
}
