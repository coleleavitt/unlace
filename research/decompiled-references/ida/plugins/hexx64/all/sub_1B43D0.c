unsigned __int64 __fastcall sub_1B43D0(int *a1, __int64 *a2, __int64 a3, unsigned int a4, __m128 si128)
{
  int v8; // eax
  __int64 v9; // rax
  size_t v10; // r9
  const char *v11; // r12
  size_t v12; // r15
  __int64 v13; // rbp
  size_t v14; // r10
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rbp
  unsigned __int64 v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rax
  _QWORD *v21; // rbp
  char v22; // al
  _BYTE *v23; // r15
  __int64 v24; // r9
  unsigned __int64 v25; // rdx
  __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  __int64 v28; // r9
  __int64 v29; // rsi
  __int64 v30; // r9
  unsigned __int64 v31; // rdx
  __int64 v32; // r10
  __int64 v33; // rsi
  unsigned __int64 v34; // rdx
  __int64 v35; // r9
  __int64 v36; // rsi
  unsigned __int64 v37; // rdx
  __int64 v38; // r9
  __int64 v39; // rsi
  unsigned __int64 v40; // rdx
  __int64 v41; // r9
  __int64 v42; // rsi
  __int64 v43; // rax
  size_t v44; // rbp
  unsigned __int64 v45; // rdx
  size_t v46; // r8
  unsigned __int64 v47; // r12
  unsigned __int64 v48; // r15
  __int64 v49; // rsi
  int v50; // ecx
  __int64 v51; // rdi
  __m128i v52; // xmm0
  __int64 v54; // rax
  __int64 v55; // rbp
  unsigned __int64 v56; // r12
  __int64 v57; // r9
  __int64 v58; // rsi
  __int64 v59; // rbp
  unsigned __int64 v60; // r12
  __int64 v61; // r15
  __int64 v62; // rsi
  __int64 v63; // rbp
  __int64 v64; // rbp
  unsigned __int64 v65; // r12
  __int64 v66; // r15
  __int64 v67; // rsi
  __int64 v68; // rbp
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
  unsigned __int64 v79; // r12
  __int64 v80; // r15
  __int64 v81; // rsi
  __int64 v82; // rbp
  unsigned __int64 v83; // r12
  __int64 v84; // r15
  __int64 v85; // rsi
  __int64 v86; // rbp
  __int64 v87; // rbp
  unsigned __int64 v88; // r12
  __int64 v89; // r15
  __int64 v90; // rsi
  __int64 v91; // rbp
  __int64 v92; // rbp
  unsigned __int64 v93; // r12
  __int64 v94; // r15
  __int64 v95; // rsi
  __int64 v96; // rbp
  unsigned __int64 v97; // r12
  __int64 v98; // r15
  __int64 v99; // rsi
  __int64 v100; // rbp
  unsigned __int64 v101; // r12
  __int64 v102; // r15
  __int64 v103; // rsi
  __int64 v104; // rbp
  __int64 v105; // rbp
  unsigned __int64 v106; // r12
  __int64 v107; // r15
  __int64 v108; // rsi
  _DWORD *v109; // rbp
  __int64 v110; // rbp
  unsigned __int64 v111; // r12
  __int64 v112; // r15
  __int64 v113; // rsi
  __int64 v114; // rbp
  __int64 v115; // rbp
  unsigned __int64 v116; // r12
  __int64 v117; // r15
  __int64 v118; // rsi
  _DWORD *v119; // rbp
  __int64 v120; // rbp
  unsigned __int64 v121; // r12
  __int64 v122; // r15
  __int64 v123; // rsi
  _DWORD *v124; // rbp
  __int64 v125; // rbp
  unsigned __int64 v126; // r12
  __int64 v127; // r15
  __int64 v128; // rsi
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rbp
  unsigned __int64 v135; // r12
  __int64 v136; // rsi
  __int64 v137; // rbp
  __int64 v138; // rsi
  unsigned __int64 v139; // r12
  __int64 v140; // r15
  __int64 v141; // rbp
  __int64 v142; // rbp
  __int64 v143; // rsi
  unsigned __int64 v144; // r12
  __int64 v145; // r15
  __int64 v146; // rbp
  __int64 v147; // rbp
  __int64 v148; // rsi
  unsigned __int64 v149; // r12
  __int64 v150; // r15
  __int64 v151; // rbp
  __int64 v152; // rbp
  __int64 v153; // rsi
  unsigned __int64 v154; // r12
  __int64 v155; // r15
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // rax
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
  size_t v180; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v181; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v182; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v183; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v184; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v185; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v186; // [rsp+8h] [rbp-A0h]
  __int64 v187; // [rsp+8h] [rbp-A0h]
  __int64 v188; // [rsp+8h] [rbp-A0h]
  __int64 v189; // [rsp+10h] [rbp-98h]
  __int64 v190; // [rsp+10h] [rbp-98h]
  __int64 v191; // [rsp+10h] [rbp-98h]
  __int64 v192; // [rsp+10h] [rbp-98h]
  __int64 v193; // [rsp+10h] [rbp-98h]
  __int64 v194; // [rsp+10h] [rbp-98h]
  size_t v195; // [rsp+10h] [rbp-98h]
  __int64 v196; // [rsp+18h] [rbp-90h]
  size_t v197; // [rsp+18h] [rbp-90h]
  __int64 v199; // [rsp+28h] [rbp-80h]
  __m128 v200; // [rsp+30h] [rbp-78h] BYREF
  __int64 v201; // [rsp+40h] [rbp-68h]
  _QWORD v202[3]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v203[8]; // [rsp+68h] [rbp-40h] BYREF

  v203[0] = __readfsqword(0x28u);
  v199 = sub_1AE730(a3, a2, (unsigned __int64)a1, *(double *)si128.m128_u64);
  v8 = a1[1];
  if ( (v8 & 1) != 0 )
  {
    v152 = a2[1];
    if ( v152 )
    {
      v155 = v152 + 7;
      v154 = v152 + 8;
      v153 = *a2;
      --v152;
      if ( a2[2] >= v154 )
        goto LABEL_208;
    }
    else
    {
      v153 = *a2;
      v154 = 9;
      v155 = 8;
      if ( (unsigned __int64)a2[2] >= 9 )
      {
LABEL_208:
        a2[1] = v154;
        *(_BYTE *)(v153 + v155) = 0;
        *(_QWORD *)(*a2 + v152) = 0x20200274706F2001LL;
        v8 = a1[1];
        goto LABEL_2;
      }
    }
    v159 = qvector_reserve((__int64)a2, v153, v154, 1);
    *a2 = v159;
    v153 = v159;
    goto LABEL_208;
  }
LABEL_2:
  if ( (v8 & 2) == 0 )
    goto LABEL_3;
  v147 = a2[1];
  if ( v147 )
  {
    v150 = v147 + 8;
    v149 = v147 + 9;
    v148 = *a2;
    --v147;
    if ( a2[2] >= v149 )
      goto LABEL_205;
LABEL_218:
    v160 = qvector_reserve((__int64)a2, v148, v149, 1);
    *a2 = v160;
    v148 = v160;
    goto LABEL_205;
  }
  v148 = *a2;
  v149 = 10;
  v150 = 9;
  if ( (unsigned __int64)a2[2] < 0xA )
    goto LABEL_218;
LABEL_205:
  a2[1] = v149;
  *(_BYTE *)(v148 + v150) = 0;
  v151 = *a2 + v147;
  *(_QWORD *)v151 = 0x20027065656B2001LL;
  *(_BYTE *)(v151 + 8) = 32;
  v8 = a1[1];
LABEL_3:
  if ( (v8 & 4) == 0 )
    goto LABEL_4;
  v142 = a2[1];
  if ( v142 )
  {
    v145 = v142 + 8;
    v144 = v142 + 9;
    v143 = *a2;
    --v142;
    if ( a2[2] >= v144 )
      goto LABEL_202;
LABEL_212:
    v157 = qvector_reserve((__int64)a2, v143, v144, 1);
    *a2 = v157;
    v143 = v157;
    goto LABEL_202;
  }
  v143 = *a2;
  v144 = 10;
  v145 = 9;
  if ( (unsigned __int64)a2[2] < 0xA )
    goto LABEL_212;
LABEL_202:
  a2[1] = v144;
  *(_BYTE *)(v143 + v145) = 0;
  v146 = *a2 + v142;
  *(_QWORD *)v146 = 0x2002796E616D2001LL;
  *(_BYTE *)(v146 + 8) = 32;
  v8 = a1[1];
LABEL_4:
  if ( (v8 & 8) == 0 )
    goto LABEL_5;
  v137 = a2[1];
  if ( v137 )
  {
    v140 = v137 + 10;
    v139 = v137 + 11;
    v138 = *a2;
    --v137;
    if ( a2[2] >= v139 )
      goto LABEL_199;
LABEL_214:
    v158 = qvector_reserve((__int64)a2, v138, v139, 1);
    *a2 = v158;
    v138 = v158;
    goto LABEL_199;
  }
  v138 = *a2;
  v139 = 12;
  v140 = 11;
  if ( (unsigned __int64)a2[2] < 0xC )
    goto LABEL_214;
LABEL_199:
  a2[1] = v139;
  *(_BYTE *)(v138 + v140) = 0;
  v141 = *a2 + v137;
  *(_QWORD *)v141 = 0x7466656469732001LL;
  *(_DWORD *)(v141 + 7) = 538968692;
LABEL_5:
  v9 = *a1;
  if ( (unsigned int)v9 <= 0x48 )
  {
    v11 = (&off_4DE480)[v9];
    v12 = strlen(v11);
    sub_32AA00(a2, 32);
    if ( !v11 )
      goto LABEL_12;
    v10 = strlen(v11);
  }
  else
  {
    sub_32AA00(a2, 32);
    v10 = 3;
    v11 = "???";
    v12 = 3;
  }
  v13 = a2[1];
  v14 = v10;
  if ( v13 )
  {
    --v13;
    v14 = v10 + v13;
  }
  v15 = *a2;
  v16 = v14 + 1;
  if ( a2[2] < v14 + 1 )
  {
    v197 = v10;
    v195 = v14;
    v187 = v14 + 1;
    v156 = qvector_reserve((__int64)a2, v15, v16, 1);
    v10 = v197;
    v14 = v195;
    *a2 = v156;
    v15 = v156;
    v16 = v187;
  }
  a2[1] = v16;
  *(_BYTE *)(v15 + v14) = 0;
  memmove((void *)(v13 + *a2), v11, v10);
LABEL_12:
  if ( (a1[1] & 0x10) != 0 && *a1 <= 62 )
  {
    v55 = a2[1];
    if ( v55 )
    {
      v57 = v55 + 3;
      v56 = v55 + 4;
      --v55;
    }
    else
    {
      v56 = 5;
      v57 = 4;
    }
    v58 = *a2;
    if ( a2[2] < v56 )
    {
      v188 = v57;
      v161 = qvector_reserve((__int64)a2, v58, v56, 1);
      *a2 = v161;
      v57 = v188;
      v58 = v161;
    }
    a2[1] = v56;
    v12 += 4LL;
    *(_BYTE *)(v58 + v57) = 0;
    *(_DWORD *)(*a2 + v55) = 1970300462;
  }
  sub_32AAE0(a2, 32);
  do
  {
    v17 = a2[1];
    v18 = 2;
    if ( v17 )
      v18 = v17-- + 1;
    v19 = *a2;
    if ( a2[2] < v18 )
    {
      v20 = qvector_reserve((__int64)a2, v19, v18, 1);
      *a2 = v20;
      v19 = v20;
    }
    a2[1] = v18;
    ++v12;
    *(_BYTE *)(v19 + v17) = 32;
    *(_BYTE *)(*a2 + v17 + 1) = 0;
  }
  while ( v12 <= 6 );
  if ( *a1 != 56 || *((_BYTE *)a1 + 64) != 8 )
  {
    v21 = v202;
    v202[0] = a1 + 8;
    v202[1] = a1 + 12;
    v202[2] = a1 + 16;
    v22 = 0;
    while ( 1 )
    {
      v23 = (_BYTE *)*v21;
      if ( !*(_BYTE *)*v21 && *((_DWORD *)v23 + 1) == -1 )
        goto LABEL_51;
      if ( v22 )
      {
LABEL_27:
        v24 = a2[1];
        v25 = 2;
        if ( v24 )
          v25 = v24-- + 1;
        v26 = *a2;
        if ( a2[2] < v25 )
        {
          v194 = v24;
          v186 = v25;
          v133 = qvector_reserve((__int64)a2, v26, v25, 1);
          v24 = v194;
          v25 = v186;
          *a2 = v133;
          v26 = v133;
        }
        a2[1] = v25;
        v27 = 2;
        *(_BYTE *)(v26 + v24) = 1;
        *(_BYTE *)(*a2 + v24 + 1) = 0;
        v28 = a2[1];
        if ( v28 )
          v27 = v28-- + 1;
        v29 = *a2;
        if ( a2[2] < v27 )
        {
          v193 = v28;
          v185 = v27;
          v132 = qvector_reserve((__int64)a2, v29, v27, 1);
          v28 = v193;
          v27 = v185;
          *a2 = v132;
          v29 = v132;
        }
        a2[1] = v27;
        *(_BYTE *)(v29 + v28) = 9;
        *(_BYTE *)(*a2 + v28 + 1) = 0;
        v30 = a2[1];
        if ( v30 )
        {
          v31 = v30 + 1;
          v32 = a2[1];
          v33 = *a2;
          --v30;
          if ( a2[2] >= v31 )
            goto LABEL_37;
        }
        else
        {
          v33 = *a2;
          v31 = 2;
          v32 = 1;
          if ( (unsigned __int64)a2[2] >= 2 )
            goto LABEL_37;
        }
        v196 = v32;
        v189 = v30;
        v181 = v31;
        v54 = qvector_reserve((__int64)a2, v33, v31, 1);
        v32 = v196;
        v30 = v189;
        *a2 = v54;
        v33 = v54;
        v31 = v181;
LABEL_37:
        a2[1] = v31;
        v34 = 2;
        *(_BYTE *)(v33 + v32) = 0;
        *(_BYTE *)(*a2 + v30) = 44;
        v35 = a2[1];
        if ( v35 )
          v34 = v35-- + 1;
        v36 = *a2;
        if ( a2[2] < v34 )
        {
          v192 = v35;
          v184 = v34;
          v131 = qvector_reserve((__int64)a2, v36, v34, 1);
          v35 = v192;
          v34 = v184;
          *a2 = v131;
          v36 = v131;
        }
        a2[1] = v34;
        v37 = 2;
        *(_BYTE *)(v36 + v35) = 2;
        *(_BYTE *)(*a2 + v35 + 1) = 0;
        v38 = a2[1];
        if ( v38 )
          v37 = v38-- + 1;
        v39 = *a2;
        if ( a2[2] < v37 )
        {
          v191 = v38;
          v183 = v37;
          v130 = qvector_reserve((__int64)a2, v39, v37, 1);
          v38 = v191;
          v37 = v183;
          *a2 = v130;
          v39 = v130;
        }
        a2[1] = v37;
        v40 = 2;
        *(_BYTE *)(v39 + v38) = 9;
        *(_BYTE *)(*a2 + v38 + 1) = 0;
        v41 = a2[1];
        if ( v41 )
          v40 = v41-- + 1;
        v42 = *a2;
        if ( a2[2] < v40 )
        {
          v190 = v41;
          v182 = v40;
          v129 = qvector_reserve((__int64)a2, v42, v40, 1);
          v41 = v190;
          v40 = v182;
          *a2 = v129;
          v42 = v129;
        }
        a2[1] = v40;
        *(_BYTE *)(v42 + v41) = 32;
        *(_BYTE *)(*a2 + v41 + 1) = 0;
      }
      sub_1B0D60((unsigned __int64)v23, (char *)a2, a3, a4, *(double *)si128.m128_u64);
      if ( ++v21 == v203 )
        goto LABEL_52;
      v23 = (_BYTE *)*v21;
      if ( *(_BYTE *)*v21 || *((_DWORD *)v23 + 1) != -1 )
        goto LABEL_27;
      v22 = 1;
LABEL_51:
      if ( v203 == ++v21 )
        goto LABEL_52;
    }
  }
  sub_1B0D60((unsigned __int64)(a1 + 8), (char *)a2, a3, a4, *(double *)si128.m128_u64);
  v134 = a2[1];
  v135 = 2;
  if ( v134 )
    v135 = v134-- + 1;
  v136 = *a2;
  if ( a2[2] < v135 )
  {
    v178 = qvector_reserve((__int64)a2, v136, v135, 1);
    *a2 = v178;
    v136 = v178;
  }
  a2[1] = v135;
  *(_BYTE *)(v136 + v134) = 32;
  *(_BYTE *)(*a2 + v134 + 1) = 0;
  sub_1B0D60((unsigned __int64)(a1 + 16), (char *)a2, a3, a4, *(double *)si128.m128_u64);
LABEL_52:
  if ( (a4 & 4) == 0 )
  {
    v43 = tag_strlen();
    v44 = 30 - v43;
    if ( 30 - v43 <= 0 )
      goto LABEL_60;
    v45 = a2[1];
    if ( v45 )
    {
      v47 = v45 - 1;
      v46 = v44 + v45 - 1;
      v48 = v44 + v45;
      if ( v45 >= v44 + v45 )
      {
LABEL_59:
        memset((void *)(v47 + *a2), 32, v44);
LABEL_60:
        sub_32AA00(a2, 4);
        if ( *((_QWORD *)a1 + 3) == -1 )
          get_module_data();
        sub_FAAD0(a2);
        v50 = a1[1];
        if ( (v50 & 0x4000) != 0 )
        {
          v78 = a2[1];
          if ( v78 )
          {
            v80 = v78 + 11;
            v79 = v78 + 12;
            --v78;
          }
          else
          {
            v79 = 13;
            v80 = 12;
          }
          v81 = *a2;
          if ( a2[2] < v79 )
          {
            v167 = qvector_reserve((__int64)a2, v81, v79, 1);
            *a2 = v167;
            v81 = v167;
          }
          a2[1] = v79;
          *(_BYTE *)(v81 + v80) = 0;
          qmemcpy((void *)(*a2 + v78), "inverted_jx ", 12);
          v50 = a1[1];
          if ( (v50 & 0x2000) == 0 )
          {
LABEL_64:
            if ( (v50 & 0x20000) == 0 )
              goto LABEL_65;
            goto LABEL_110;
          }
        }
        else if ( (v50 & 0x2000) == 0 )
        {
          goto LABEL_64;
        }
        v74 = a2[1];
        if ( v74 )
        {
          v76 = v74 + 9;
          v75 = v74 + 10;
          --v74;
        }
        else
        {
          v75 = 11;
          v76 = 10;
        }
        v77 = *a2;
        if ( a2[2] < v75 )
        {
          v168 = qvector_reserve((__int64)a2, v77, v75, 1);
          *a2 = v168;
          v77 = v168;
        }
        a2[1] = v75;
        *(_BYTE *)(v77 + v76) = 0;
        qmemcpy((void *)(*a2 + v74), "ignlowsrc ", 10);
        v50 = a1[1];
        if ( (v50 & 0x20000) == 0 )
        {
LABEL_65:
          if ( (v50 & 0x800) == 0 )
            goto LABEL_66;
          goto LABEL_104;
        }
LABEL_110:
        v69 = a2[1];
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
        v72 = *a2;
        if ( a2[2] < v70 )
        {
          v169 = qvector_reserve((__int64)a2, v72, v70, 1);
          *a2 = v169;
          v72 = v169;
        }
        a2[1] = v70;
        *(_BYTE *)(v72 + v71) = 0;
        v73 = *a2 + v69;
        *(_QWORD *)v73 = 0x706F7270746E6F64LL;
        *(_BYTE *)(v73 + 8) = 32;
        v50 = a1[1];
        if ( (v50 & 0x800) == 0 )
        {
LABEL_66:
          if ( (v50 & 0x200000) == 0 )
            goto LABEL_67;
          goto LABEL_98;
        }
LABEL_104:
        v64 = a2[1];
        if ( v64 )
        {
          v66 = v64 + 8;
          v65 = v64 + 9;
          --v64;
        }
        else
        {
          v65 = 10;
          v66 = 9;
        }
        v67 = *a2;
        if ( a2[2] < v65 )
        {
          v170 = qvector_reserve((__int64)a2, v67, v65, 1);
          *a2 = v170;
          v67 = v170;
        }
        a2[1] = v65;
        *(_BYTE *)(v67 + v66) = 0;
        v68 = *a2 + v64;
        *(_QWORD *)v68 = 0x64656E69626D6F63LL;
        *(_BYTE *)(v68 + 8) = 32;
        v50 = a1[1];
        if ( (v50 & 0x200000) == 0 )
        {
LABEL_67:
          if ( (v50 & 0x20) == 0 )
            goto LABEL_68;
          goto LABEL_182;
        }
LABEL_98:
        v59 = a2[1];
        if ( v59 )
        {
          v61 = v59 + 8;
          v60 = v59 + 9;
          --v59;
        }
        else
        {
          v60 = 10;
          v61 = 9;
        }
        v62 = *a2;
        if ( a2[2] < v60 )
        {
          v164 = qvector_reserve((__int64)a2, v62, v60, 1);
          *a2 = v164;
          v62 = v164;
        }
        a2[1] = v60;
        *(_BYTE *)(v62 + v61) = 0;
        v63 = *a2 + v59;
        *(_QWORD *)v63 = 0x6465726961706E75LL;
        *(_BYTE *)(v63 + 8) = 32;
        v50 = a1[1];
        if ( (v50 & 0x20) == 0 )
        {
LABEL_68:
          if ( (v50 & 8) == 0 )
            goto LABEL_69;
          goto LABEL_176;
        }
LABEL_182:
        v125 = a2[1];
        if ( v125 )
        {
          v127 = v125 + 7;
          v126 = v125 + 8;
          --v125;
        }
        else
        {
          v126 = 9;
          v127 = 8;
        }
        v128 = *a2;
        if ( a2[2] < v126 )
        {
          v173 = qvector_reserve((__int64)a2, v128, v126, 1);
          *a2 = v173;
          v128 = v173;
        }
        a2[1] = v126;
        *(_BYTE *)(v128 + v127) = 0;
        *(_QWORD *)(*a2 + v125) = 0x206C6C6163726166LL;
        v50 = a1[1];
        if ( (v50 & 8) == 0 )
        {
LABEL_69:
          if ( (v50 & 0x1000) == 0 )
            goto LABEL_70;
          goto LABEL_170;
        }
LABEL_176:
        v120 = a2[1];
        if ( v120 )
        {
          v122 = v120 + 6;
          v121 = v120 + 7;
          --v120;
        }
        else
        {
          v121 = 8;
          v122 = 7;
        }
        v123 = *a2;
        if ( a2[2] < v121 )
        {
          v174 = qvector_reserve((__int64)a2, v123, v121, 1);
          *a2 = v174;
          v123 = v174;
        }
        a2[1] = v121;
        *(_BYTE *)(v123 + v122) = 0;
        v124 = (_DWORD *)(*a2 + v120);
        *v124 = 1701867376;
        *(_DWORD *)((char *)v124 + 3) = 544760677;
        v50 = a1[1];
        if ( (v50 & 0x1000) == 0 )
        {
LABEL_70:
          if ( (v50 & 0x40) == 0 )
            goto LABEL_71;
          goto LABEL_164;
        }
LABEL_170:
        v115 = a2[1];
        if ( v115 )
        {
          v117 = v115 + 6;
          v116 = v115 + 7;
          --v115;
        }
        else
        {
          v116 = 8;
          v117 = 7;
        }
        v118 = *a2;
        if ( a2[2] < v116 )
        {
          v175 = qvector_reserve((__int64)a2, v118, v116, 1);
          *a2 = v175;
          v118 = v175;
        }
        a2[1] = v116;
        *(_BYTE *)(v118 + v117) = 0;
        v119 = (_DWORD *)(*a2 + v115);
        *v119 = 1937012837;
        *(_DWORD *)((char *)v119 + 3) = 544765043;
        v50 = a1[1];
        if ( (v50 & 0x40) == 0 )
        {
LABEL_71:
          if ( (v50 & 0x80u) == 0 )
            goto LABEL_72;
          goto LABEL_158;
        }
LABEL_164:
        v110 = a2[1];
        if ( v110 )
        {
          v112 = v110 + 8;
          v111 = v110 + 9;
          --v110;
        }
        else
        {
          v111 = 10;
          v112 = 9;
        }
        v113 = *a2;
        if ( a2[2] < v111 )
        {
          v176 = qvector_reserve((__int64)a2, v113, v111, 1);
          *a2 = v176;
          v113 = v176;
        }
        a2[1] = v111;
        *(_BYTE *)(v113 + v112) = 0;
        v114 = *a2 + v110;
        *(_QWORD *)v114 = 0x6C6C61636C696174LL;
        *(_BYTE *)(v114 + 8) = 32;
        v50 = a1[1];
        if ( (v50 & 0x80u) == 0 )
        {
LABEL_72:
          if ( (v50 & 0x10000) == 0 )
            goto LABEL_73;
          goto LABEL_152;
        }
LABEL_158:
        v105 = a2[1];
        if ( v105 )
        {
          v107 = v105 + 6;
          v106 = v105 + 7;
          --v105;
        }
        else
        {
          v106 = 8;
          v107 = 7;
        }
        v108 = *a2;
        if ( a2[2] < v106 )
        {
          v171 = qvector_reserve((__int64)a2, v108, v106, 1);
          *a2 = v171;
          v108 = v171;
        }
        a2[1] = v106;
        *(_BYTE *)(v108 + v107) = 0;
        v109 = (_DWORD *)(*a2 + v105);
        *v109 = 1702064993;
        *(_DWORD *)((char *)v109 + 3) = 544502373;
        v50 = a1[1];
        if ( (v50 & 0x10000) == 0 )
        {
LABEL_73:
          if ( (v50 & 0x40000) == 0 )
            goto LABEL_74;
          goto LABEL_146;
        }
LABEL_152:
        v100 = a2[1];
        if ( v100 )
        {
          v102 = v100 + 8;
          v101 = v100 + 9;
          --v100;
        }
        else
        {
          v101 = 10;
          v102 = 9;
        }
        v103 = *a2;
        if ( a2[2] < v101 )
        {
          v172 = qvector_reserve((__int64)a2, v103, v101, 1);
          *a2 = v172;
          v103 = v172;
        }
        a2[1] = v101;
        *(_BYTE *)(v103 + v102) = 0;
        v104 = *a2 + v100;
        *(_QWORD *)v104 = 0x766F6D69746C756DLL;
        *(_BYTE *)(v104 + 8) = 32;
        v50 = a1[1];
        if ( (v50 & 0x40000) == 0 )
        {
LABEL_74:
          if ( (v50 & 0x8000) == 0 )
            goto LABEL_75;
          goto LABEL_140;
        }
LABEL_146:
        v96 = a2[1];
        if ( v96 )
        {
          v98 = v96 + 14;
          v97 = v96 + 15;
          --v96;
        }
        else
        {
          v97 = 16;
          v98 = 15;
        }
        v99 = *a2;
        if ( a2[2] < v97 )
        {
          v162 = qvector_reserve((__int64)a2, v99, v97, 1);
          *a2 = v162;
          v99 = v162;
        }
        a2[1] = v97;
        *(_BYTE *)(v99 + v98) = 0;
        qmemcpy((void *)(*a2 + v96), "not_combinable ", 15);
        v50 = a1[1];
        if ( (v50 & 0x8000) == 0 )
        {
LABEL_75:
          if ( (v50 & 0x80000) == 0 )
            goto LABEL_76;
          goto LABEL_134;
        }
LABEL_140:
        v92 = a2[1];
        if ( v92 )
        {
          v94 = v92 + 15;
          v93 = v92 + 16;
          --v92;
        }
        else
        {
          v93 = 17;
          v94 = 16;
        }
        v95 = *a2;
        if ( a2[2] < v93 )
        {
          v163 = qvector_reserve((__int64)a2, v95, v93, 1);
          *a2 = v163;
          v95 = v163;
        }
        si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_424820);
        a2[1] = v93;
        *(_BYTE *)(v95 + v94) = 0;
        *(__m128 *)(*a2 + v92) = si128;
        v50 = a1[1];
        if ( (v50 & 0x80000) == 0 )
        {
LABEL_76:
          if ( (v50 & 0x100000) == 0 )
            goto LABEL_77;
          goto LABEL_128;
        }
LABEL_134:
        v87 = a2[1];
        if ( v87 )
        {
          v89 = v87 + 8;
          v88 = v87 + 9;
          --v87;
        }
        else
        {
          v88 = 10;
          v89 = 9;
        }
        v90 = *a2;
        if ( a2[2] < v88 )
        {
          v165 = qvector_reserve((__int64)a2, v90, v88, 1);
          *a2 = v165;
          v90 = v165;
        }
        a2[1] = v88;
        *(_BYTE *)(v90 + v89) = 0;
        v91 = *a2 + v87;
        *(_QWORD *)v91 = 0x726569727261626DLL;
        *(_BYTE *)(v91 + 8) = 32;
        v50 = a1[1];
        if ( (v50 & 0x100000) == 0 )
        {
LABEL_77:
          if ( ((v50 >> 8) & 7) == 0 )
          {
LABEL_78:
            sub_1AEF20((unsigned __int8 *)a1, a2, 2, *(double *)si128.m128_u64);
            if ( (a1[1] & 0x10) == 0 )
              sub_1AEF20((unsigned __int8 *)a1, a2, 4, *(double *)si128.m128_u64);
            sub_1AEF20((unsigned __int8 *)a1, a2, 32, *(double *)si128.m128_u64);
            v51 = *(_QWORD *)(a3 + 8);
            if ( v51 || (v51 = *(_QWORD *)(get_module_data() + 1344)) != 0 )
            {
              v52 = _mm_loadl_epi64((const __m128i *)(v51 + 1496));
              v201 = 0;
              si128 = (__m128)_mm_unpacklo_epi64(v52, (__m128i)(unsigned __int64)v51);
              v200 = si128;
              sub_1B3D20(v51, a2, (__int64)&v200, (__int64)a1, *(double *)si128.m128_u64, (__m128)(unsigned __int64)v51);
            }
            sub_32AAE0(a2, 4);
            if ( v199 != -1 )
            {
              if ( ((unsigned __int8)v199 & 7u) > 2 )
                sub_1ADFD0(*(double *)si128.m128_u64);
              sub_32AAE0(a2, (v199 & 7) + 41);
            }
            return v203[0] - __readfsqword(0x28u);
          }
LABEL_92:
          sub_FAAD0(a2);
          goto LABEL_78;
        }
LABEL_128:
        v82 = a2[1];
        if ( v82 )
        {
          v84 = v82 + 8;
          v83 = v82 + 9;
          --v82;
        }
        else
        {
          v83 = 10;
          v84 = 9;
        }
        v85 = *a2;
        if ( a2[2] < v83 )
        {
          v166 = qvector_reserve((__int64)a2, v85, v83, 1);
          *a2 = v166;
          v85 = v166;
        }
        a2[1] = v83;
        *(_BYTE *)(v85 + v84) = 0;
        v86 = *a2 + v82;
        *(_QWORD *)v86 = 0x64656772656D6E75LL;
        *(_BYTE *)(v86 + 8) = 32;
        if ( ((a1[1] >> 8) & 7) == 0 )
          goto LABEL_78;
        goto LABEL_92;
      }
    }
    else
    {
      v46 = 30 - v43;
      v47 = 0;
      v48 = 31 - v43;
    }
    v49 = *a2;
    if ( a2[2] < v48 )
    {
      v180 = v46;
      v177 = qvector_reserve((__int64)a2, v49, v48, 1);
      *a2 = v177;
      v46 = v180;
      v49 = v177;
    }
    a2[1] = v48;
    *(_BYTE *)(v49 + v46) = 0;
    goto LABEL_59;
  }
  if ( v199 != -1 )
  {
    if ( ((unsigned __int8)v199 & 7u) > 2 )
      sub_1ADFD0(*(double *)si128.m128_u64);
    sub_32AAE0(a2, (v199 & 7) + 41);
  }
  return v203[0] - __readfsqword(0x28u);
}

