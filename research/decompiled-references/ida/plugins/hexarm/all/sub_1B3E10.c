unsigned __int64 __fastcall sub_1B3E10(int *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rax
  size_t v11; // r9
  const char *v12; // r12
  size_t v13; // r15
  __int64 v14; // rbp
  size_t v15; // r10
  __int64 v16; // rsi
  size_t v17; // rdx
  int *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbp
  unsigned __int64 v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rax
  _QWORD *v25; // rbp
  char v26; // al
  _BYTE *v27; // r15
  __int64 v28; // r9
  unsigned __int64 v29; // rdx
  __int64 v30; // rsi
  unsigned __int64 v31; // rdx
  __int64 v32; // r9
  __int64 v33; // rsi
  __int64 v34; // r9
  unsigned __int64 v35; // rdx
  __int64 v36; // r10
  __int64 v37; // rsi
  unsigned __int64 v38; // rdx
  __int64 v39; // r9
  __int64 v40; // rsi
  unsigned __int64 v41; // rdx
  __int64 v42; // r9
  __int64 v43; // rsi
  unsigned __int64 v44; // rdx
  __int64 v45; // r9
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  size_t v50; // rbp
  size_t v51; // rdx
  size_t v52; // r8
  size_t v53; // r12
  unsigned __int64 v54; // r15
  __int64 v55; // rsi
  int v56; // ecx
  __int64 v57; // rdi
  __m128i v58; // xmm0
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rbp
  unsigned __int64 v66; // r12
  __int64 v67; // r9
  __int64 v68; // rsi
  __int64 v69; // rbp
  unsigned __int64 v70; // r12
  __int64 v71; // r15
  __int64 v72; // rsi
  __int64 v73; // rbp
  __int64 v74; // rbp
  unsigned __int64 v75; // r12
  __int64 v76; // r15
  __int64 v77; // rsi
  __int64 v78; // rbp
  __int64 v79; // rbp
  unsigned __int64 v80; // r12
  __int64 v81; // r15
  __int64 v82; // rsi
  __int64 v83; // rbp
  __int64 v84; // rbp
  unsigned __int64 v85; // r12
  __int64 v86; // r15
  __int64 v87; // rsi
  __int64 v88; // rbp
  unsigned __int64 v89; // r12
  __int64 v90; // r15
  __int64 v91; // rsi
  __int64 v92; // rbp
  unsigned __int64 v93; // r12
  __int64 v94; // r15
  __int64 v95; // rsi
  __int64 v96; // rbp
  __int64 v97; // rbp
  unsigned __int64 v98; // r12
  __int64 v99; // r15
  __int64 v100; // rsi
  __int64 v101; // rbp
  __int64 v102; // rbp
  unsigned __int64 v103; // r12
  __int64 v104; // r15
  __int64 v105; // rsi
  __m128i si128; // xmm0
  __int64 v107; // rbp
  unsigned __int64 v108; // r12
  __int64 v109; // r15
  __int64 v110; // rsi
  __int64 v111; // rbp
  unsigned __int64 v112; // r12
  __int64 v113; // r15
  __int64 v114; // rsi
  __int64 v115; // rbp
  __int64 v116; // rbp
  unsigned __int64 v117; // r12
  __int64 v118; // r15
  __int64 v119; // rsi
  _DWORD *v120; // rbp
  __int64 v121; // rbp
  unsigned __int64 v122; // r12
  __int64 v123; // r15
  __int64 v124; // rsi
  __int64 v125; // rbp
  __int64 v126; // rbp
  unsigned __int64 v127; // r12
  __int64 v128; // r15
  __int64 v129; // rsi
  _DWORD *v130; // rbp
  __int64 v131; // rbp
  unsigned __int64 v132; // r12
  __int64 v133; // r15
  __int64 v134; // rsi
  _DWORD *v135; // rbp
  __int64 v136; // rbp
  unsigned __int64 v137; // r12
  __int64 v138; // r15
  __int64 v139; // rsi
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rbp
  unsigned __int64 v146; // r12
  __int64 v147; // rsi
  __int64 v148; // rbp
  __int64 v149; // rsi
  unsigned __int64 v150; // r12
  __int64 v151; // r15
  __int64 v152; // rbp
  __int64 v153; // rbp
  __int64 v154; // rsi
  unsigned __int64 v155; // r12
  __int64 v156; // r15
  __int64 v157; // rbp
  __int64 v158; // rbp
  __int64 v159; // rsi
  unsigned __int64 v160; // r12
  __int64 v161; // r15
  __int64 v162; // rbp
  __int64 v163; // rbp
  __int64 v164; // rsi
  unsigned __int64 v165; // r12
  __int64 v166; // r15
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rax
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rax
  __int64 v176; // rax
  __int64 v177; // rax
  __int64 v178; // rax
  __int64 v179; // rax
  __int64 v180; // rax
  __int64 v181; // rax
  __int64 v182; // rax
  __int64 v183; // rax
  __int64 v184; // rax
  __int64 v185; // rax
  __int64 v186; // rax
  __int64 v187; // rax
  __int64 v188; // rax
  __int64 v189; // rax
  size_t v191; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v192; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v193; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v194; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v195; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v196; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v197; // [rsp+8h] [rbp-A0h]
  size_t v198; // [rsp+8h] [rbp-A0h]
  __int64 v199; // [rsp+8h] [rbp-A0h]
  __int64 v200; // [rsp+10h] [rbp-98h]
  __int64 v201; // [rsp+10h] [rbp-98h]
  __int64 v202; // [rsp+10h] [rbp-98h]
  __int64 v203; // [rsp+10h] [rbp-98h]
  __int64 v204; // [rsp+10h] [rbp-98h]
  __int64 v205; // [rsp+10h] [rbp-98h]
  size_t v206; // [rsp+10h] [rbp-98h]
  __int64 v207; // [rsp+18h] [rbp-90h]
  size_t v208; // [rsp+18h] [rbp-90h]
  __int64 v210; // [rsp+28h] [rbp-80h]
  __m128i v211; // [rsp+30h] [rbp-78h] BYREF
  __int64 v212; // [rsp+40h] [rbp-68h]
  _QWORD v213[3]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v214[8]; // [rsp+68h] [rbp-40h] BYREF

  v214[0] = __readfsqword(0x28u);
  v210 = sub_1AE170(a3, a2, (unsigned __int64)a1);
  v9 = a1[1];
  if ( (v9 & 1) != 0 )
  {
    v163 = *(_QWORD *)(a2 + 8);
    if ( v163 )
    {
      v166 = v163 + 7;
      v165 = v163 + 8;
      v164 = *(_QWORD *)a2;
      --v163;
      if ( *(_QWORD *)(a2 + 16) >= v165 )
        goto LABEL_208;
    }
    else
    {
      v164 = *(_QWORD *)a2;
      v165 = 9;
      v166 = 8;
      if ( *(_QWORD *)(a2 + 16) >= 9u )
      {
LABEL_208:
        *(_QWORD *)(a2 + 8) = v165;
        *(_BYTE *)(v164 + v166) = 0;
        *(_QWORD *)(*(_QWORD *)a2 + v163) = 0x20200274706F2001LL;
        v9 = a1[1];
        goto LABEL_2;
      }
    }
    v170 = qvector_reserve();
    *(_QWORD *)a2 = v170;
    v164 = v170;
    goto LABEL_208;
  }
LABEL_2:
  if ( (v9 & 2) == 0 )
    goto LABEL_3;
  v158 = *(_QWORD *)(a2 + 8);
  if ( v158 )
  {
    v161 = v158 + 8;
    v160 = v158 + 9;
    v159 = *(_QWORD *)a2;
    --v158;
    if ( *(_QWORD *)(a2 + 16) >= v160 )
      goto LABEL_205;
LABEL_218:
    v171 = qvector_reserve();
    *(_QWORD *)a2 = v171;
    v159 = v171;
    goto LABEL_205;
  }
  v159 = *(_QWORD *)a2;
  v160 = 10;
  v161 = 9;
  if ( *(_QWORD *)(a2 + 16) < 0xAu )
    goto LABEL_218;
LABEL_205:
  *(_QWORD *)(a2 + 8) = v160;
  *(_BYTE *)(v159 + v161) = 0;
  v162 = *(_QWORD *)a2 + v158;
  *(_QWORD *)v162 = 0x20027065656B2001LL;
  *(_BYTE *)(v162 + 8) = 32;
  v9 = a1[1];
LABEL_3:
  if ( (v9 & 4) == 0 )
    goto LABEL_4;
  v153 = *(_QWORD *)(a2 + 8);
  if ( v153 )
  {
    v156 = v153 + 8;
    v155 = v153 + 9;
    v154 = *(_QWORD *)a2;
    --v153;
    if ( *(_QWORD *)(a2 + 16) >= v155 )
      goto LABEL_202;
LABEL_212:
    v168 = qvector_reserve();
    *(_QWORD *)a2 = v168;
    v154 = v168;
    goto LABEL_202;
  }
  v154 = *(_QWORD *)a2;
  v155 = 10;
  v156 = 9;
  if ( *(_QWORD *)(a2 + 16) < 0xAu )
    goto LABEL_212;
LABEL_202:
  *(_QWORD *)(a2 + 8) = v155;
  *(_BYTE *)(v154 + v156) = 0;
  v157 = *(_QWORD *)a2 + v153;
  *(_QWORD *)v157 = 0x2002796E616D2001LL;
  *(_BYTE *)(v157 + 8) = 32;
  v9 = a1[1];
LABEL_4:
  if ( (v9 & 8) == 0 )
    goto LABEL_5;
  v148 = *(_QWORD *)(a2 + 8);
  if ( v148 )
  {
    v151 = v148 + 10;
    v150 = v148 + 11;
    v149 = *(_QWORD *)a2;
    --v148;
    if ( *(_QWORD *)(a2 + 16) >= v150 )
      goto LABEL_199;
LABEL_214:
    v169 = qvector_reserve();
    *(_QWORD *)a2 = v169;
    v149 = v169;
    goto LABEL_199;
  }
  v149 = *(_QWORD *)a2;
  v150 = 12;
  v151 = 11;
  if ( *(_QWORD *)(a2 + 16) < 0xCu )
    goto LABEL_214;
LABEL_199:
  *(_QWORD *)(a2 + 8) = v150;
  *(_BYTE *)(v149 + v151) = 0;
  v152 = *(_QWORD *)a2 + v148;
  *(_QWORD *)v152 = 0x7466656469732001LL;
  *(_DWORD *)(v152 + 7) = 538968692;
LABEL_5:
  v10 = *a1;
  if ( (unsigned int)v10 <= 0x48 )
  {
    v12 = (&off_4D8B40)[v10];
    v13 = strlen(v12);
    sub_32AD30(a2, 32, v63, v64);
    if ( !v12 )
      goto LABEL_12;
    v11 = strlen(v12);
  }
  else
  {
    sub_32AD30(a2, 32, v7, v8);
    v11 = 3;
    v12 = "???";
    v13 = 3;
  }
  v14 = *(_QWORD *)(a2 + 8);
  v15 = v11;
  if ( v14 )
  {
    --v14;
    v15 = v11 + v14;
  }
  v16 = *(_QWORD *)a2;
  v17 = v15 + 1;
  if ( *(_QWORD *)(a2 + 16) < v15 + 1 )
  {
    v208 = v11;
    v206 = v15;
    v198 = v15 + 1;
    v167 = qvector_reserve();
    v11 = v208;
    v15 = v206;
    *(_QWORD *)a2 = v167;
    v16 = v167;
    v17 = v198;
  }
  *(_QWORD *)(a2 + 8) = v17;
  *(_BYTE *)(v16 + v15) = 0;
  memmove((void *)(v14 + *(_QWORD *)a2), v12, v11);
LABEL_12:
  if ( (a1[1] & 0x10) != 0 && *a1 <= 62 )
  {
    v65 = *(_QWORD *)(a2 + 8);
    if ( v65 )
    {
      v67 = v65 + 3;
      v66 = v65 + 4;
      --v65;
    }
    else
    {
      v66 = 5;
      v67 = 4;
    }
    v68 = *(_QWORD *)a2;
    if ( *(_QWORD *)(a2 + 16) < v66 )
    {
      v199 = v67;
      v172 = qvector_reserve();
      *(_QWORD *)a2 = v172;
      v67 = v199;
      v68 = v172;
    }
    *(_QWORD *)(a2 + 8) = v66;
    v13 += 4LL;
    *(_BYTE *)(v68 + v67) = 0;
    *(_DWORD *)(*(_QWORD *)a2 + v65) = 1970300462;
  }
  v18 = (int *)a2;
  sub_32AE10(a2, 32);
  do
  {
    v21 = *(_QWORD *)(a2 + 8);
    v22 = 2;
    if ( v21 )
      v22 = v21-- + 1;
    v23 = *(_QWORD *)a2;
    if ( *(_QWORD *)(a2 + 16) < v22 )
    {
      v18 = (int *)a2;
      v24 = qvector_reserve();
      *(_QWORD *)a2 = v24;
      v23 = v24;
    }
    *(_QWORD *)(a2 + 8) = v22;
    ++v13;
    *(_BYTE *)(v23 + v21) = 32;
    *(_BYTE *)(*(_QWORD *)a2 + v21 + 1) = 0;
  }
  while ( v13 <= 6 );
  if ( *a1 != 56 || *((_BYTE *)a1 + 64) != 8 )
  {
    v25 = v213;
    v213[0] = a1 + 8;
    v213[1] = a1 + 12;
    v213[2] = a1 + 16;
    v26 = 0;
    while ( 1 )
    {
      v27 = (_BYTE *)*v25;
      if ( !*(_BYTE *)*v25 && *((_DWORD *)v27 + 1) == -1 )
        goto LABEL_51;
      if ( v26 )
      {
LABEL_27:
        v28 = *(_QWORD *)(a2 + 8);
        v29 = 2;
        if ( v28 )
          v29 = v28-- + 1;
        v30 = *(_QWORD *)a2;
        if ( *(_QWORD *)(a2 + 16) < v29 )
        {
          v205 = v28;
          v197 = v29;
          v144 = qvector_reserve();
          v28 = v205;
          v29 = v197;
          *(_QWORD *)a2 = v144;
          v30 = v144;
        }
        *(_QWORD *)(a2 + 8) = v29;
        v31 = 2;
        *(_BYTE *)(v30 + v28) = 1;
        *(_BYTE *)(*(_QWORD *)a2 + v28 + 1) = 0;
        v32 = *(_QWORD *)(a2 + 8);
        if ( v32 )
          v31 = v32-- + 1;
        v33 = *(_QWORD *)a2;
        if ( *(_QWORD *)(a2 + 16) < v31 )
        {
          v204 = v32;
          v196 = v31;
          v143 = qvector_reserve();
          v32 = v204;
          v31 = v196;
          *(_QWORD *)a2 = v143;
          v33 = v143;
        }
        *(_QWORD *)(a2 + 8) = v31;
        *(_BYTE *)(v33 + v32) = 9;
        *(_BYTE *)(*(_QWORD *)a2 + v32 + 1) = 0;
        v34 = *(_QWORD *)(a2 + 8);
        if ( v34 )
        {
          v35 = v34 + 1;
          v36 = *(_QWORD *)(a2 + 8);
          v37 = *(_QWORD *)a2;
          --v34;
          if ( *(_QWORD *)(a2 + 16) >= v35 )
            goto LABEL_37;
        }
        else
        {
          v37 = *(_QWORD *)a2;
          v35 = 2;
          v36 = 1;
          if ( *(_QWORD *)(a2 + 16) >= 2u )
            goto LABEL_37;
        }
        v207 = v36;
        v200 = v34;
        v192 = v35;
        v62 = qvector_reserve();
        v36 = v207;
        v34 = v200;
        *(_QWORD *)a2 = v62;
        v37 = v62;
        v35 = v192;
LABEL_37:
        *(_QWORD *)(a2 + 8) = v35;
        v38 = 2;
        *(_BYTE *)(v37 + v36) = 0;
        *(_BYTE *)(*(_QWORD *)a2 + v34) = 44;
        v39 = *(_QWORD *)(a2 + 8);
        if ( v39 )
          v38 = v39-- + 1;
        v40 = *(_QWORD *)a2;
        if ( *(_QWORD *)(a2 + 16) < v38 )
        {
          v203 = v39;
          v195 = v38;
          v142 = qvector_reserve();
          v39 = v203;
          v38 = v195;
          *(_QWORD *)a2 = v142;
          v40 = v142;
        }
        *(_QWORD *)(a2 + 8) = v38;
        v41 = 2;
        *(_BYTE *)(v40 + v39) = 2;
        *(_BYTE *)(*(_QWORD *)a2 + v39 + 1) = 0;
        v42 = *(_QWORD *)(a2 + 8);
        if ( v42 )
          v41 = v42-- + 1;
        v43 = *(_QWORD *)a2;
        if ( *(_QWORD *)(a2 + 16) < v41 )
        {
          v202 = v42;
          v194 = v41;
          v141 = qvector_reserve();
          v42 = v202;
          v41 = v194;
          *(_QWORD *)a2 = v141;
          v43 = v141;
        }
        *(_QWORD *)(a2 + 8) = v41;
        v44 = 2;
        *(_BYTE *)(v43 + v42) = 9;
        *(_BYTE *)(*(_QWORD *)a2 + v42 + 1) = 0;
        v45 = *(_QWORD *)(a2 + 8);
        if ( v45 )
          v44 = v45-- + 1;
        v46 = *(_QWORD *)a2;
        if ( *(_QWORD *)(a2 + 16) < v44 )
        {
          v201 = v45;
          v193 = v44;
          v140 = qvector_reserve();
          v45 = v201;
          v44 = v193;
          *(_QWORD *)a2 = v140;
          v46 = v140;
        }
        *(_QWORD *)(a2 + 8) = v44;
        *(_BYTE *)(v46 + v45) = 32;
        *(_BYTE *)(*(_QWORD *)a2 + v45 + 1) = 0;
      }
      v23 = a2;
      v18 = (int *)v27;
      sub_1B07A0((unsigned __int64)v27, (char *)a2, a3, a4);
      if ( ++v25 == v214 )
        goto LABEL_52;
      v27 = (_BYTE *)*v25;
      if ( *(_BYTE *)*v25 || *((_DWORD *)v27 + 1) != -1 )
        goto LABEL_27;
      v26 = 1;
LABEL_51:
      if ( v214 == ++v25 )
        goto LABEL_52;
    }
  }
  sub_1B07A0((unsigned __int64)(a1 + 8), (char *)a2, a3, a4);
  v145 = *(_QWORD *)(a2 + 8);
  v146 = 2;
  if ( v145 )
    v146 = v145-- + 1;
  v147 = *(_QWORD *)a2;
  if ( *(_QWORD *)(a2 + 16) < v146 )
  {
    v189 = qvector_reserve();
    *(_QWORD *)a2 = v189;
    v147 = v189;
  }
  *(_QWORD *)(a2 + 8) = v146;
  v18 = a1 + 16;
  *(_BYTE *)(v147 + v145) = 32;
  v23 = a2;
  *(_BYTE *)(*(_QWORD *)a2 + v145 + 1) = 0;
  sub_1B07A0((unsigned __int64)(a1 + 16), (char *)a2, a3, a4);
LABEL_52:
  if ( (a4 & 4) == 0 )
  {
    v47 = tag_strlen();
    v50 = 30 - v47;
    if ( 30 - v47 <= 0 )
      goto LABEL_60;
    v51 = *(_QWORD *)(a2 + 8);
    if ( v51 )
    {
      v53 = v51 - 1;
      v52 = v50 + v51 - 1;
      v54 = v50 + v51;
      if ( v51 >= v50 + v51 )
      {
LABEL_59:
        memset((void *)(v53 + *(_QWORD *)a2), 32, v50);
LABEL_60:
        sub_32AD30(a2, 4, v48, v49);
        if ( *((_QWORD *)a1 + 3) == -1 )
          get_module_data();
        sub_FA510((__int64 *)a2);
        v56 = a1[1];
        if ( (v56 & 0x4000) != 0 )
        {
          v88 = *(_QWORD *)(a2 + 8);
          if ( v88 )
          {
            v90 = v88 + 11;
            v89 = v88 + 12;
            --v88;
          }
          else
          {
            v89 = 13;
            v90 = 12;
          }
          v91 = *(_QWORD *)a2;
          if ( *(_QWORD *)(a2 + 16) < v89 )
          {
            v178 = qvector_reserve();
            *(_QWORD *)a2 = v178;
            v91 = v178;
          }
          *(_QWORD *)(a2 + 8) = v89;
          *(_BYTE *)(v91 + v90) = 0;
          qmemcpy((void *)(*(_QWORD *)a2 + v88), "inverted_jx ", 12);
          v56 = a1[1];
          if ( (v56 & 0x2000) == 0 )
          {
LABEL_64:
            if ( (v56 & 0x20000) == 0 )
              goto LABEL_65;
            goto LABEL_110;
          }
        }
        else if ( (v56 & 0x2000) == 0 )
        {
          goto LABEL_64;
        }
        v84 = *(_QWORD *)(a2 + 8);
        if ( v84 )
        {
          v86 = v84 + 9;
          v85 = v84 + 10;
          --v84;
        }
        else
        {
          v85 = 11;
          v86 = 10;
        }
        v87 = *(_QWORD *)a2;
        if ( *(_QWORD *)(a2 + 16) < v85 )
        {
          v179 = qvector_reserve();
          *(_QWORD *)a2 = v179;
          v87 = v179;
        }
        *(_QWORD *)(a2 + 8) = v85;
        *(_BYTE *)(v87 + v86) = 0;
        qmemcpy((void *)(*(_QWORD *)a2 + v84), "ignlowsrc ", 10);
        v56 = a1[1];
        if ( (v56 & 0x20000) == 0 )
        {
LABEL_65:
          if ( (v56 & 0x800) == 0 )
            goto LABEL_66;
          goto LABEL_104;
        }
LABEL_110:
        v79 = *(_QWORD *)(a2 + 8);
        if ( v79 )
        {
          v81 = v79 + 8;
          v80 = v79 + 9;
          --v79;
        }
        else
        {
          v80 = 10;
          v81 = 9;
        }
        v82 = *(_QWORD *)a2;
        if ( *(_QWORD *)(a2 + 16) < v80 )
        {
          v180 = qvector_reserve();
          *(_QWORD *)a2 = v180;
          v82 = v180;
        }
        *(_QWORD *)(a2 + 8) = v80;
        *(_BYTE *)(v82 + v81) = 0;
        v83 = *(_QWORD *)a2 + v79;
        *(_QWORD *)v83 = 0x706F7270746E6F64LL;
        *(_BYTE *)(v83 + 8) = 32;
        v56 = a1[1];
        if ( (v56 & 0x800) == 0 )
        {
LABEL_66:
          if ( (v56 & 0x200000) == 0 )
            goto LABEL_67;
          goto LABEL_98;
        }
LABEL_104:
        v74 = *(_QWORD *)(a2 + 8);
        if ( v74 )
        {
          v76 = v74 + 8;
          v75 = v74 + 9;
          --v74;
        }
        else
        {
          v75 = 10;
          v76 = 9;
        }
        v77 = *(_QWORD *)a2;
        if ( *(_QWORD *)(a2 + 16) < v75 )
        {
          v181 = qvector_reserve();
          *(_QWORD *)a2 = v181;
          v77 = v181;
        }
        *(_QWORD *)(a2 + 8) = v75;
        *(_BYTE *)(v77 + v76) = 0;
        v78 = *(_QWORD *)a2 + v74;
        *(_QWORD *)v78 = 0x64656E69626D6F63LL;
        *(_BYTE *)(v78 + 8) = 32;
        v56 = a1[1];
        if ( (v56 & 0x200000) == 0 )
        {
LABEL_67:
          if ( (v56 & 0x20) == 0 )
            goto LABEL_68;
          goto LABEL_182;
        }
LABEL_98:
        v69 = *(_QWORD *)(a2 + 8);
        if ( v69 )
        {
          v71 = v69 + 8;
          v70 = v69 + 9;
          --v69;
        }
        else
        {
          v70 = 10;
          v71 = 9;
        }
        v72 = *(_QWORD *)a2;
        if ( *(_QWORD *)(a2 + 16) < v70 )
        {
          v175 = qvector_reserve();
          *(_QWORD *)a2 = v175;
          v72 = v175;
        }
        *(_QWORD *)(a2 + 8) = v70;
        *(_BYTE *)(v72 + v71) = 0;
        v73 = *(_QWORD *)a2 + v69;
        *(_QWORD *)v73 = 0x6465726961706E75LL;
        *(_BYTE *)(v73 + 8) = 32;
        v56 = a1[1];
        if ( (v56 & 0x20) == 0 )
        {
LABEL_68:
          if ( (v56 & 8) == 0 )
            goto LABEL_69;
          goto LABEL_176;
        }
LABEL_182:
        v136 = *(_QWORD *)(a2 + 8);
        if ( v136 )
        {
          v138 = v136 + 7;
          v137 = v136 + 8;
          --v136;
        }
        else
        {
          v137 = 9;
          v138 = 8;
        }
        v139 = *(_QWORD *)a2;
        if ( *(_QWORD *)(a2 + 16) < v137 )
        {
          v184 = qvector_reserve();
          *(_QWORD *)a2 = v184;
          v139 = v184;
        }
        *(_QWORD *)(a2 + 8) = v137;
        *(_BYTE *)(v139 + v138) = 0;
        *(_QWORD *)(*(_QWORD *)a2 + v136) = 0x206C6C6163726166LL;
        v56 = a1[1];
        if ( (v56 & 8) == 0 )
        {
LABEL_69:
          if ( (v56 & 0x1000) == 0 )
            goto LABEL_70;
          goto LABEL_170;
        }
LABEL_176:
        v131 = *(_QWORD *)(a2 + 8);
        if ( v131 )
        {
          v133 = v131 + 6;
          v132 = v131 + 7;
          --v131;
        }
        else
        {
          v132 = 8;
          v133 = 7;
        }
        v134 = *(_QWORD *)a2;
        if ( *(_QWORD *)(a2 + 16) < v132 )
        {
          v185 = qvector_reserve();
          *(_QWORD *)a2 = v185;
          v134 = v185;
        }
        *(_QWORD *)(a2 + 8) = v132;
        *(_BYTE *)(v134 + v133) = 0;
        v135 = (_DWORD *)(*(_QWORD *)a2 + v131);
        *v135 = 1701867376;
        *(_DWORD *)((char *)v135 + 3) = 544760677;
        v56 = a1[1];
        if ( (v56 & 0x1000) == 0 )
        {
LABEL_70:
          if ( (v56 & 0x40) == 0 )
            goto LABEL_71;
          goto LABEL_164;
        }
LABEL_170:
        v126 = *(_QWORD *)(a2 + 8);
        if ( v126 )
        {
          v128 = v126 + 6;
          v127 = v126 + 7;
          --v126;
        }
        else
        {
          v127 = 8;
          v128 = 7;
        }
        v129 = *(_QWORD *)a2;
        if ( *(_QWORD *)(a2 + 16) < v127 )
        {
          v186 = qvector_reserve();
          *(_QWORD *)a2 = v186;
          v129 = v186;
        }
        *(_QWORD *)(a2 + 8) = v127;
        *(_BYTE *)(v129 + v128) = 0;
        v130 = (_DWORD *)(*(_QWORD *)a2 + v126);
        *v130 = 1937012837;
        *(_DWORD *)((char *)v130 + 3) = 544765043;
        v56 = a1[1];
        if ( (v56 & 0x40) == 0 )
        {
LABEL_71:
          if ( (v56 & 0x80u) == 0 )
            goto LABEL_72;
          goto LABEL_158;
        }
LABEL_164:
        v121 = *(_QWORD *)(a2 + 8);
        if ( v121 )
        {
          v123 = v121 + 8;
          v122 = v121 + 9;
          --v121;
        }
        else
        {
          v122 = 10;
          v123 = 9;
        }
        v124 = *(_QWORD *)a2;
        if ( *(_QWORD *)(a2 + 16) < v122 )
        {
          v187 = qvector_reserve();
          *(_QWORD *)a2 = v187;
          v124 = v187;
        }
        *(_QWORD *)(a2 + 8) = v122;
        *(_BYTE *)(v124 + v123) = 0;
        v125 = *(_QWORD *)a2 + v121;
        *(_QWORD *)v125 = 0x6C6C61636C696174LL;
        *(_BYTE *)(v125 + 8) = 32;
        v56 = a1[1];
        if ( (v56 & 0x80u) == 0 )
        {
LABEL_72:
          if ( (v56 & 0x10000) == 0 )
            goto LABEL_73;
          goto LABEL_152;
        }
LABEL_158:
        v116 = *(_QWORD *)(a2 + 8);
        if ( v116 )
        {
          v118 = v116 + 6;
          v117 = v116 + 7;
          --v116;
        }
        else
        {
          v117 = 8;
          v118 = 7;
        }
        v119 = *(_QWORD *)a2;
        if ( *(_QWORD *)(a2 + 16) < v117 )
        {
          v182 = qvector_reserve();
          *(_QWORD *)a2 = v182;
          v119 = v182;
        }
        *(_QWORD *)(a2 + 8) = v117;
        *(_BYTE *)(v119 + v118) = 0;
        v120 = (_DWORD *)(*(_QWORD *)a2 + v116);
        *v120 = 1702064993;
        *(_DWORD *)((char *)v120 + 3) = 544502373;
        v56 = a1[1];
        if ( (v56 & 0x10000) == 0 )
        {
LABEL_73:
          if ( (v56 & 0x40000) == 0 )
            goto LABEL_74;
          goto LABEL_146;
        }
LABEL_152:
        v111 = *(_QWORD *)(a2 + 8);
        if ( v111 )
        {
          v113 = v111 + 8;
          v112 = v111 + 9;
          --v111;
        }
        else
        {
          v112 = 10;
          v113 = 9;
        }
        v114 = *(_QWORD *)a2;
        if ( *(_QWORD *)(a2 + 16) < v112 )
        {
          v183 = qvector_reserve();
          *(_QWORD *)a2 = v183;
          v114 = v183;
        }
        *(_QWORD *)(a2 + 8) = v112;
        *(_BYTE *)(v114 + v113) = 0;
        v115 = *(_QWORD *)a2 + v111;
        *(_QWORD *)v115 = 0x766F6D69746C756DLL;
        *(_BYTE *)(v115 + 8) = 32;
        v56 = a1[1];
        if ( (v56 & 0x40000) == 0 )
        {
LABEL_74:
          if ( (v56 & 0x8000) == 0 )
            goto LABEL_75;
          goto LABEL_140;
        }
LABEL_146:
        v107 = *(_QWORD *)(a2 + 8);
        if ( v107 )
        {
          v109 = v107 + 14;
          v108 = v107 + 15;
          --v107;
        }
        else
        {
          v108 = 16;
          v109 = 15;
        }
        v110 = *(_QWORD *)a2;
        if ( *(_QWORD *)(a2 + 16) < v108 )
        {
          v173 = qvector_reserve();
          *(_QWORD *)a2 = v173;
          v110 = v173;
        }
        *(_QWORD *)(a2 + 8) = v108;
        *(_BYTE *)(v110 + v109) = 0;
        qmemcpy((void *)(*(_QWORD *)a2 + v107), "not_combinable ", 15);
        v56 = a1[1];
        if ( (v56 & 0x8000) == 0 )
        {
LABEL_75:
          if ( (v56 & 0x80000) == 0 )
            goto LABEL_76;
          goto LABEL_134;
        }
LABEL_140:
        v102 = *(_QWORD *)(a2 + 8);
        if ( v102 )
        {
          v104 = v102 + 15;
          v103 = v102 + 16;
          --v102;
        }
        else
        {
          v103 = 17;
          v104 = 16;
        }
        v105 = *(_QWORD *)a2;
        if ( *(_QWORD *)(a2 + 16) < v103 )
        {
          v174 = qvector_reserve();
          *(_QWORD *)a2 = v174;
          v105 = v174;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_41F920);
        *(_QWORD *)(a2 + 8) = v103;
        *(_BYTE *)(v105 + v104) = 0;
        *(__m128i *)(*(_QWORD *)a2 + v102) = si128;
        v56 = a1[1];
        if ( (v56 & 0x80000) == 0 )
        {
LABEL_76:
          if ( (v56 & 0x100000) == 0 )
            goto LABEL_77;
          goto LABEL_128;
        }
LABEL_134:
        v97 = *(_QWORD *)(a2 + 8);
        if ( v97 )
        {
          v99 = v97 + 8;
          v98 = v97 + 9;
          --v97;
        }
        else
        {
          v98 = 10;
          v99 = 9;
        }
        v100 = *(_QWORD *)a2;
        if ( *(_QWORD *)(a2 + 16) < v98 )
        {
          v176 = qvector_reserve();
          *(_QWORD *)a2 = v176;
          v100 = v176;
        }
        *(_QWORD *)(a2 + 8) = v98;
        *(_BYTE *)(v100 + v99) = 0;
        v101 = *(_QWORD *)a2 + v97;
        *(_QWORD *)v101 = 0x726569727261626DLL;
        *(_BYTE *)(v101 + 8) = 32;
        v56 = a1[1];
        if ( (v56 & 0x100000) == 0 )
        {
LABEL_77:
          if ( ((v56 >> 8) & 7) == 0 )
          {
LABEL_78:
            sub_1AE960((unsigned __int8 *)a1, (__int64 *)a2, 2);
            if ( (a1[1] & 0x10) == 0 )
              sub_1AE960((unsigned __int8 *)a1, (__int64 *)a2, 4);
            sub_1AE960((unsigned __int8 *)a1, (__int64 *)a2, 32);
            v57 = *(_QWORD *)(a3 + 8);
            if ( v57 || (v57 = *(_QWORD *)(get_module_data() + 1344)) != 0 )
            {
              v58 = _mm_loadl_epi64((const __m128i *)(v57 + 1496));
              v212 = 0;
              v211 = _mm_unpacklo_epi64(v58, (__m128i)(unsigned __int64)v57);
              sub_1B3760(v57, (__int64 *)a2, (__int64)&v211, (__int64)a1);
            }
            sub_32AE10(a2, 4);
            if ( v210 != -1 )
            {
              if ( ((unsigned __int8)v210 & 7u) > 2 )
                sub_1ADA10(a2, 4, v59, v60);
              sub_32AE10(a2, (unsigned int)(v210 & 7) + 41);
            }
            return v214[0] - __readfsqword(0x28u);
          }
LABEL_92:
          sub_FA510((__int64 *)a2);
          goto LABEL_78;
        }
LABEL_128:
        v92 = *(_QWORD *)(a2 + 8);
        if ( v92 )
        {
          v94 = v92 + 8;
          v93 = v92 + 9;
          --v92;
        }
        else
        {
          v93 = 10;
          v94 = 9;
        }
        v95 = *(_QWORD *)a2;
        if ( *(_QWORD *)(a2 + 16) < v93 )
        {
          v177 = qvector_reserve();
          *(_QWORD *)a2 = v177;
          v95 = v177;
        }
        *(_QWORD *)(a2 + 8) = v93;
        *(_BYTE *)(v95 + v94) = 0;
        v96 = *(_QWORD *)a2 + v92;
        *(_QWORD *)v96 = 0x64656772656D6E75LL;
        *(_BYTE *)(v96 + 8) = 32;
        if ( ((a1[1] >> 8) & 7) == 0 )
          goto LABEL_78;
        goto LABEL_92;
      }
    }
    else
    {
      v52 = 30 - v47;
      v53 = 0;
      v54 = 31 - v47;
    }
    v55 = *(_QWORD *)a2;
    if ( *(_QWORD *)(a2 + 16) < v54 )
    {
      v191 = v52;
      v188 = qvector_reserve();
      *(_QWORD *)a2 = v188;
      v52 = v191;
      v55 = v188;
    }
    *(_QWORD *)(a2 + 8) = v54;
    *(_BYTE *)(v55 + v52) = 0;
    goto LABEL_59;
  }
  if ( v210 != -1 )
  {
    if ( ((unsigned __int8)v210 & 7u) > 2 )
      sub_1ADA10(v18, v23, v19, v20);
    sub_32AE10(a2, (unsigned int)(v210 & 7) + 41);
  }
  return v214[0] - __readfsqword(0x28u);
}

