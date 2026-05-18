unsigned __int64 __fastcall sub_15C470(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 *a5,
        int a6,
        double a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int a11,
        char a12)
{
  int v14; // ecx
  __int64 *v15; // rbp
  __int64 v16; // r9
  __m128i *v17; // rbx
  unsigned __int8 *v19; // r13
  int v21; // eax
  int v22; // eax
  bool v23; // dl
  __int64 *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // r15
  char *v29; // r11
  __int64 i; // r10
  __int64 v31; // rsi
  __int64 v32; // r8
  int v33; // eax
  char v34; // al
  unsigned __int8 *v35; // rax
  int v36; // eax
  __int64 v37; // r10
  int v38; // ebx
  __int64 v39; // rsi
  _QWORD *v40; // r12
  const char *v41; // rdi
  int v42; // eax
  int v43; // ecx
  int v44; // edx
  int v45; // eax
  int v46; // edx
  int v47; // r8d
  __int16 v48; // ax
  void **v49; // rax
  __int64 v50; // r11
  __int64 v51; // rdx
  _QWORD *v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  int j; // ecx
  __int64 v57; // rax
  int v58; // eax
  __int64 v59; // r10
  __int64 v60; // rsi
  int v61; // eax
  __int64 v62; // rax
  char *v63; // rsi
  __int64 v64; // rax
  const char *v65; // rdi
  int v66; // eax
  int v67; // eax
  __int64 *v68; // rax
  __int64 *v69; // rax
  char v70; // dl
  int v71; // eax
  __int64 v72; // r11
  __int64 v73; // r10
  char **v74; // r9
  __int64 v75; // r13
  char **v76; // r14
  __int64 v77; // r12
  char *v78; // rcx
  char v79; // al
  char *k; // rax
  char *v81; // rdx
  unsigned __int8 *v82; // rdx
  int v83; // eax
  __int64 v84; // rbx
  __int64 v85; // rbp
  int v86; // eax
  __int64 v87; // rax
  int v88; // eax
  _WORD *v89; // rdi
  __int64 v90; // rdx
  __int64 v91; // rsi
  __int64 v92; // rax
  __int16 v93; // cx
  _BYTE *m; // rdx
  __int64 v95; // rax
  const char *v96; // rsi
  size_t v97; // rcx
  __int64 *v98; // rax
  _BYTE *v99; // rax
  __int64 v100; // rax
  int v101; // eax
  __int64 v102; // rax
  __int64 v103; // r11
  unsigned __int64 ii; // rcx
  int v105; // r9d
  __int64 v106; // r10
  char v107; // al
  _WORD *v108; // rsi
  __int64 v109; // rdx
  char v110; // al
  int v111; // edx
  __int64 v112; // rax
  __int64 n; // rax
  __int64 v114; // rax
  __int64 v115; // r8
  int v116; // r10d
  __int64 v117; // rdi
  _BYTE *v118; // rsi
  __int64 v119; // rax
  __int64 v120; // rdx
  char v121; // al
  char v122; // dl
  char *v123; // rdx
  __int64 v124; // rax
  int v125; // eax
  int v126; // ecx
  _BYTE *v127; // rdx
  __int64 v129; // [rsp+0h] [rbp-138h]
  __int64 v130; // [rsp+0h] [rbp-138h]
  __int64 v131; // [rsp+0h] [rbp-138h]
  __int64 v132; // [rsp+0h] [rbp-138h]
  __int64 v133; // [rsp+0h] [rbp-138h]
  __int64 v134; // [rsp+0h] [rbp-138h]
  _QWORD *v135; // [rsp+0h] [rbp-138h]
  __int64 v136; // [rsp+0h] [rbp-138h]
  __int64 *v137; // [rsp+8h] [rbp-130h]
  __int64 v138; // [rsp+10h] [rbp-128h]
  _QWORD *v139; // [rsp+10h] [rbp-128h]
  int v140; // [rsp+18h] [rbp-120h]
  int v141; // [rsp+24h] [rbp-114h]
  int v142; // [rsp+24h] [rbp-114h]
  unsigned int v143; // [rsp+24h] [rbp-114h]
  __int64 v144; // [rsp+28h] [rbp-110h]
  __int64 v145; // [rsp+28h] [rbp-110h]
  __int64 v146; // [rsp+30h] [rbp-108h]
  __int64 v147; // [rsp+30h] [rbp-108h]
  __int64 *v148; // [rsp+30h] [rbp-108h]
  _QWORD *v149; // [rsp+30h] [rbp-108h]
  __int64 v150; // [rsp+30h] [rbp-108h]
  __int64 v151; // [rsp+30h] [rbp-108h]
  unsigned int v152; // [rsp+30h] [rbp-108h]
  __int64 v153; // [rsp+30h] [rbp-108h]
  _QWORD *v154; // [rsp+30h] [rbp-108h]
  __int64 v155; // [rsp+38h] [rbp-100h]
  __int64 v156; // [rsp+38h] [rbp-100h]
  __int64 v157; // [rsp+38h] [rbp-100h]
  int v158; // [rsp+38h] [rbp-100h]
  __int64 v159; // [rsp+38h] [rbp-100h]
  unsigned __int8 *v160; // [rsp+38h] [rbp-100h]
  __int64 v161; // [rsp+38h] [rbp-100h]
  __int64 v162; // [rsp+38h] [rbp-100h]
  __int64 v163; // [rsp+38h] [rbp-100h]
  void **v164; // [rsp+38h] [rbp-100h]
  int v165; // [rsp+38h] [rbp-100h]
  int v166; // [rsp+38h] [rbp-100h]
  __int64 v167; // [rsp+38h] [rbp-100h]
  __int64 v168; // [rsp+38h] [rbp-100h]
  __int64 v169; // [rsp+40h] [rbp-F8h]
  __int64 v170; // [rsp+40h] [rbp-F8h]
  __int64 v171; // [rsp+40h] [rbp-F8h]
  int v172; // [rsp+40h] [rbp-F8h]
  __int64 v173; // [rsp+40h] [rbp-F8h]
  __int64 v174; // [rsp+40h] [rbp-F8h]
  __int64 v175; // [rsp+40h] [rbp-F8h]
  __int64 v176; // [rsp+40h] [rbp-F8h]
  __int64 v177; // [rsp+40h] [rbp-F8h]
  __int64 v178; // [rsp+40h] [rbp-F8h]
  unsigned __int8 *v179; // [rsp+40h] [rbp-F8h]
  __int64 *v180; // [rsp+40h] [rbp-F8h]
  __int64 v181; // [rsp+40h] [rbp-F8h]
  __int64 v182; // [rsp+40h] [rbp-F8h]
  __int64 v183; // [rsp+40h] [rbp-F8h]
  __int64 v184; // [rsp+48h] [rbp-F0h]
  int v185; // [rsp+48h] [rbp-F0h]
  __int64 v186; // [rsp+48h] [rbp-F0h]
  __int64 v187; // [rsp+48h] [rbp-F0h]
  __int64 v188; // [rsp+48h] [rbp-F0h]
  _QWORD *v189; // [rsp+48h] [rbp-F0h]
  _QWORD *v190; // [rsp+48h] [rbp-F0h]
  __int64 v191; // [rsp+48h] [rbp-F0h]
  _WORD *v192; // [rsp+48h] [rbp-F0h]
  __m128i *v193; // [rsp+50h] [rbp-E8h]
  __int64 v194; // [rsp+50h] [rbp-E8h]
  __int64 v195; // [rsp+50h] [rbp-E8h]
  __int64 *v196; // [rsp+50h] [rbp-E8h]
  __int64 *src; // [rsp+58h] [rbp-E0h]
  __m128i *srca; // [rsp+58h] [rbp-E0h]
  unsigned __int8 *srcb; // [rsp+58h] [rbp-E0h]
  char *srcc; // [rsp+58h] [rbp-E0h]
  __int64 v201; // [rsp+60h] [rbp-D8h]
  __int64 v202; // [rsp+60h] [rbp-D8h]
  __int64 v203; // [rsp+68h] [rbp-D0h]
  __int64 v204; // [rsp+70h] [rbp-C8h] BYREF
  void *dest; // [rsp+78h] [rbp-C0h] BYREF
  const char *v206; // [rsp+80h] [rbp-B8h] BYREF
  int v207; // [rsp+88h] [rbp-B0h]
  _QWORD v208[5]; // [rsp+90h] [rbp-A8h] BYREF
  int v209; // [rsp+B8h] [rbp-80h]
  __int16 v210; // [rsp+BCh] [rbp-7Ch]
  _QWORD *v211; // [rsp+C0h] [rbp-78h]
  __int64 v212; // [rsp+C8h] [rbp-70h]
  bool v213; // [rsp+D0h] [rbp-68h]
  __int64 v214; // [rsp+D8h] [rbp-60h]
  char *v215; // [rsp+E0h] [rbp-58h]
  __int64 v216; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v217; // [rsp+F8h] [rbp-40h]

  v14 = *(_DWORD *)(a1 + 48);
  v15 = *(__int64 **)a1;
  v217 = __readfsqword(0x28u);
  v16 = a9;
  v204 = 0;
  dest = nullptr;
  if ( v14 )
    goto LABEL_4;
  v17 = (__m128i *)a1;
  if ( *(_BYTE *)(a1 + 292) == 1 && a12 != 2 )
    goto LABEL_4;
  v141 = sub_143A40((__int64 **)a1, a7);
  v16 = a9;
  if ( v141 )
    goto LABEL_4;
  if ( a5 )
  {
    v21 = sub_E4D20(a1, (__int64)a5);
    v16 = a9;
    if ( v21 )
    {
      v19 = nullptr;
      if ( a9 )
        goto LABEL_6;
      sub_D7810((__int64)v15, a5);
      sub_D8260((__int64)v15, a4);
      return __readfsqword(0x28u) ^ v217;
    }
  }
  if ( !a4 )
  {
    v28 = *(_QWORD **)(a1 + 336);
    if ( v28 )
    {
      v31 = v28[12];
      v29 = (char *)*v28;
      if ( v31 )
      {
        v155 = v16;
        v140 = sub_CFB20((__int64)v15, v31);
        v16 = v155;
        i = 0;
        v145 = 32LL * v140;
        v147 = v145 + v32;
      }
      else
      {
        v145 = -1048576;
        i = 0;
        v140 = -32768;
        v147 = v15[4] - 0x100000;
      }
      goto LABEL_32;
    }
LABEL_4:
    v19 = nullptr;
    goto LABEL_5;
  }
  v144 = v16;
  v22 = sub_E4190((__int64 *)a1, a2, a3, &v204);
  v140 = v22;
  v16 = v144;
  if ( v22 < 0 )
    goto LABEL_4;
  if ( *((_BYTE *)v15 + 197) )
  {
    v145 = 32LL * v22;
    v23 = v22 == 1;
  }
  else
  {
    v62 = sub_145BE0((__int64 *)a1, (__int64)a4, a7);
    v16 = v144;
    if ( *(_DWORD *)(a3 + 8) || !v62 )
    {
      v145 = 32LL * v140;
      v23 = v140 == 1;
    }
    else if ( *(_QWORD *)(v62 + 96) == *(_QWORD *)(v15[4] + 56) )
    {
      v23 = 1;
      v145 = 32;
      v140 = 1;
    }
    else
    {
      v145 = 32LL * v140;
      v23 = v140 == 1;
    }
  }
  v24 = *(__int64 **)a1;
  v208[0] = a1;
  v146 = v16;
  v25 = *(_QWORD *)(v24[4] + v145);
  v208[1] = a1;
  v214 = v25;
  v26 = *(_QWORD *)(v24[4] + v145 + 24);
  v213 = v23;
  v210 = 0;
  v211 = v208;
  v209 = 0;
  v212 = v26;
  v215 = "index";
  v216 = v204;
  v208[2] = sub_E5490;
  v208[3] = sub_E52F0;
  v208[4] = nullsub_59;
  sub_CF3F0((__int64)v208, (__int64)a4);
  v27 = sub_144470((__int64 *)a1, 0, (__int64)(a4 + 1), a7);
  v28 = (_QWORD *)v27;
  v16 = v146;
  if ( !v27 )
    goto LABEL_4;
  v29 = *(char **)v27;
  v147 = v15[4] + v145;
  if ( v140 == 1 && *(_QWORD *)(v15[4] + v145 + 24) != *(_QWORD *)(v27 + 96) )
  {
    v131 = v16;
    v19 = nullptr;
    sub_DBD10(a1, "cannot create a TEMP index on non-TEMP table \"%s\"", v29);
    v16 = v131;
    goto LABEL_59;
  }
  i = 0;
  if ( *(char *)(v27 + 48) < 0 )
  {
    for ( i = *(_QWORD *)(v27 + 16); i; i = *(_QWORD *)(i + 40) )
    {
      if ( (*(_BYTE *)(i + 99) & 3) == 2 )
        break;
    }
  }
LABEL_32:
  if ( v29 )
  {
    v169 = v16;
    v156 = i;
    v33 = sub_CA590((unsigned __int8 *)v29, "sqlite_", 7);
    i = v156;
    v16 = v169;
    if ( !v33 && !*((_BYTE *)v15 + 197) && a4 )
    {
      v19 = nullptr;
      sub_DBD10(a1, "table %s may not be indexed", v29);
      v16 = v169;
      goto LABEL_59;
    }
  }
  v34 = *((_BYTE *)v28 + 63);
  if ( v34 == 2 )
  {
    v63 = "views may not be indexed";
    v130 = v16;
LABEL_86:
    v19 = nullptr;
    sub_DBD10(a1, v63);
    v16 = v130;
    goto LABEL_59;
  }
  if ( v34 == 1 )
  {
    v130 = v16;
    v63 = "virtual tables may not be indexed";
    goto LABEL_86;
  }
  if ( !v204 )
  {
    v55 = v28[2];
    for ( j = 1; v55; ++j )
      v55 = *(_QWORD *)(v55 + 40);
    v159 = v16;
    v173 = i;
    v57 = sub_E8280((__int64)v15, "sqlite_autoindex_%s_%d", v29, j);
    v19 = (unsigned __int8 *)v57;
    v16 = v159;
    if ( !v57 )
      goto LABEL_59;
    v37 = v173;
    if ( !*(_BYTE *)(a1 + 292) )
    {
LABEL_76:
      v160 = *(unsigned __int8 **)v147;
      if ( v140 == 1 )
      {
        v191 = v16;
        v182 = v37;
        v101 = sub_E4020(a1, 18, (__int64)"sqlite_temp_master", 0, (__int64)v160);
        v16 = v191;
        if ( v101 )
          goto LABEL_59;
        v60 = 3;
        v59 = v182;
      }
      else
      {
        v187 = v16;
        v174 = v37;
        v58 = sub_E4020(a1, 18, (__int64)"sqlite_master", 0, (__int64)v160);
        v16 = v187;
        if ( v58 )
          goto LABEL_59;
        v59 = v174;
        v60 = 1;
      }
      v188 = v16;
      v175 = v59;
      v61 = sub_E4020(a1, v60, (__int64)v19, *v28, (__int64)v160);
      v37 = v175;
      v16 = v188;
      if ( v61 )
        goto LABEL_59;
      goto LABEL_42;
    }
    ++*(_BYTE *)(v57 + 7);
LABEL_75:
    if ( *(_BYTE *)(a1 + 292) > 1u )
      goto LABEL_42;
    goto LABEL_76;
  }
  v157 = v16;
  v170 = i;
  v35 = (unsigned __int8 *)sub_DCE50((__int64)v15, v204);
  v19 = v35;
  v16 = v157;
  if ( !v35 )
    goto LABEL_59;
  v36 = sub_E6FB0((_BYTE *)a1, v35, "index", (_BYTE *)*v28);
  v16 = v157;
  if ( v36 )
    goto LABEL_59;
  v37 = v170;
  if ( *(_BYTE *)(a1 + 292) <= 1u )
  {
    if ( !*((_BYTE *)v15 + 197) )
    {
      v181 = v157;
      v167 = v37;
      v100 = sub_CA640((__int64)v15, v19, nullptr);
      v37 = v167;
      v16 = v181;
      if ( v100 )
      {
        sub_DBD10(a1, "there is already a table named %s", (const char *)v19);
        v16 = v181;
        goto LABEL_59;
      }
    }
    v183 = v16;
    v168 = v37;
    v102 = sub_CF360((__int64)v15, v19, *(unsigned __int8 **)v147);
    v37 = v168;
    v16 = v183;
    if ( v102 )
    {
      if ( a11 )
      {
        sub_11C860(a1, v140);
        sub_E23E0(a1);
      }
      else
      {
        sub_DBD10(a1, "index %s already exists", (const char *)v19);
      }
      v16 = v183;
      goto LABEL_59;
    }
    goto LABEL_75;
  }
LABEL_42:
  if ( a5 )
  {
    if ( *(_DWORD *)(*(_QWORD *)a1 + 144LL) < *(_DWORD *)a5 )
    {
      v178 = v16;
      v163 = v37;
      sub_DBD10(a1, "too many columns in %s", "index");
      v16 = v178;
      v37 = v163;
    }
    if ( *(_DWORD *)(a1 + 48) )
      goto LABEL_59;
  }
  else
  {
    v64 = v28[1] + 16LL * *((__int16 *)v28 + 27) - 16;
    v65 = *(const char **)v64;
    *(_WORD *)(v64 + 14) |= 8u;
    v66 = 0;
    v206 = v65;
    if ( v65 )
    {
      v176 = v16;
      v161 = v37;
      v67 = strlen(v65);
      v16 = v176;
      v37 = v161;
      v66 = v67 & 0x3FFFFFFF;
    }
    v177 = v16;
    v162 = v37;
    v207 = v66;
    v68 = sub_DEC00((__int64)v15, 59, (__int64)&v206, 0);
    v69 = sub_DEBF0(v17->m128i_i64, (__int64)v68);
    a5 = v69;
    v16 = v177;
    if ( !v69 )
      goto LABEL_59;
    v70 = 0;
    v37 = v162;
    v71 = *(_DWORD *)v69 - 1;
    if ( a10 != -1 )
      v70 = a10;
    LOBYTE(a5[3 * v71 + 3]) = v70;
  }
  v158 = *(_DWORD *)a5;
  if ( *(int *)a5 <= 0 )
  {
    v44 = 1;
  }
  else
  {
    v193 = v17;
    src = a5;
    v184 = v37;
    v38 = 0;
    v39 = (__int64)&a5[3 * (unsigned int)(*(_DWORD *)a5 - 1) + 4];
    v201 = v16;
    v40 = a5 + 1;
    do
    {
      if ( *(_BYTE *)*v40 == 113 )
      {
        v41 = *(const char **)(*v40 + 8LL);
        v42 = 0;
        if ( v41 )
          v42 = strlen(v41) & 0x3FFFFFFF;
        v38 += v42 + 1;
      }
      v40 += 3;
    }
    while ( (_QWORD *)v39 != v40 );
    v43 = v38;
    v37 = v184;
    v17 = v193;
    a5 = src;
    v44 = v43 + 1;
    v16 = v201;
  }
  v194 = v16;
  v185 = v44;
  v171 = v37;
  v45 = strlen((const char *)v19);
  v46 = v185;
  v47 = v45 & 0x3FFFFFFF;
  v48 = 1;
  if ( v171 )
    v48 = *(_WORD *)(v171 + 94);
  v186 = v171;
  v172 = v47;
  v49 = (void **)sub_DC4A0((__int64)v15, (unsigned __int16)v158 + v48, v47 + v46, &dest);
  v50 = (__int64)v49;
  v16 = v194;
  if ( *((_BYTE *)v15 + 103) )
    goto LABEL_57;
  v164 = v49;
  *v49 = dest;
  dest = (char *)dest + v172 + 1;
  memcpy(*v49, v19, v172 + 1);
  v72 = (__int64)v164;
  v73 = v186;
  *((_BYTE *)v164 + 98) = a6;
  v164[3] = v28;
  *((_BYTE *)v164 + 99) = a12 & 3 | (8 * (a6 != 0)) | *((_BYTE *)v164 + 99) & 0xF4;
  v164[6] = *(void **)(v15[4] + v145 + 24);
  *((_WORD *)v164 + 47) = *(_DWORD *)a5;
  if ( v194 )
  {
    sub_E4860((__int64)v17, v28, 2, v194, nullptr);
    v72 = (__int64)v164;
    v73 = v186;
    v164[9] = (void *)v194;
  }
  v74 = (char **)(a5 + 1);
  v165 = -(*(_BYTE *)(*(_QWORD *)(v147 + 24) + 112LL) > 3u);
  if ( v17[18].m128i_i8[4] > 1u )
  {
    *(_QWORD *)(v72 + 80) = a5;
    a5 = nullptr;
  }
  if ( *(_WORD *)(v72 + 94) )
  {
    v179 = v19;
    v189 = a4;
    v75 = v72;
    v148 = a5;
    v195 = v73;
    v76 = v74;
    v77 = 0;
    while ( 1 )
    {
      v78 = *v76;
      v79 = **v76;
      if ( v79 == 117 )
      {
        *v78 = 59;
        v78 = *v76;
      }
      else if ( v79 == 113 )
      {
        v99 = *((_BYTE **)v78 + 2);
        if ( *v99 == 117 )
        {
          *v99 = 59;
          v78 = *v76;
        }
      }
      sub_E4860((__int64)v17, v28, 32, (__int64)v78, nullptr);
      if ( v17[3].m128i_i32[0] )
      {
LABEL_145:
        v50 = v75;
        a4 = v189;
        v19 = v179;
        a5 = v148;
        v16 = 0;
        goto LABEL_57;
      }
      for ( k = *v76; k; k = *((char **)k + 2) )
      {
        if ( (k[5] & 0x10) == 0 )
          break;
      }
      if ( *k == -89 )
      {
        v88 = *((__int16 *)k + 24);
        v89 = (_WORD *)(*(_QWORD *)(v75 + 8) + 2 * v77);
        if ( v88 < 0 )
        {
          v88 = *((__int16 *)v28 + 26);
          *v89 = *((_WORD *)v28 + 26);
          v81 = *v76;
          if ( **v76 == 113 )
            goto LABEL_146;
          v82 = "BINARY";
          if ( v88 < 0 )
            goto LABEL_117;
        }
        else
        {
          v90 = 16LL * (__int16)v88;
          v91 = v90 + v28[1];
          if ( (*(_BYTE *)(v91 + 8) & 0xF) == 0 )
          {
            *(_BYTE *)(v75 + 99) &= ~8u;
            v91 = v90 + v28[1];
          }
          if ( (*(_BYTE *)(v91 + 14) & 0x20) != 0 )
            *(_BYTE *)(v75 + 100) |= 4u;
          *v89 = v88;
          v81 = *v76;
          if ( **v76 == 113 )
            goto LABEL_146;
        }
        v82 = "BINARY";
        v92 = v28[1] + 16LL * v88;
        v93 = *(_WORD *)(v92 + 14);
        if ( (v93 & 0x200) != 0 )
        {
          for ( m = *(_BYTE **)v92; *m; ++m )
            ;
          if ( (v93 & 4) != 0 )
          {
            do
              ++m;
            while ( *m );
          }
          v82 = m + 1;
          goto LABEL_138;
        }
      }
      else
      {
        if ( (_QWORD *)v17[21].m128i_i64[0] == v28 )
        {
          v134 = v75;
          a4 = v189;
          v19 = v179;
          a5 = v148;
          sub_DBD10((__int64)v17, "expressions prohibited in PRIMARY KEY and UNIQUE constraints");
          v16 = 0;
          v50 = v134;
          goto LABEL_57;
        }
        if ( !*(_QWORD *)(v75 + 80) )
        {
          v98 = v148;
          v148 = nullptr;
          *(_QWORD *)(v75 + 80) = v98;
        }
        *(_WORD *)(*(_QWORD *)(v75 + 8) + 2 * v77) = -2;
        *(_BYTE *)(v75 + 99) &= ~8u;
        v81 = *v76;
        if ( **v76 == 113 )
        {
LABEL_146:
          v96 = *((const char **)v81 + 1);
          v97 = 1;
          if ( v96 )
          {
            v96 = *((const char **)v81 + 1);
            v97 = (strlen(v96) & 0x3FFFFFFF) + 1;
          }
          srcc = (char *)v97;
          memcpy(dest, v96, v97);
          v82 = (unsigned __int8 *)dest;
          dest = &srcc[(_QWORD)dest];
LABEL_138:
          if ( !v82 )
            v82 = "BINARY";
          goto LABEL_117;
        }
        v82 = "BINARY";
      }
LABEL_117:
      if ( !*((_BYTE *)v15 + 197) )
      {
        srcb = v82;
        v95 = sub_F2480(v17->m128i_i64, v82, a7);
        v82 = srcb;
        if ( !v95 )
          goto LABEL_145;
      }
      v76 += 3;
      *(_QWORD *)(*(_QWORD *)(v75 + 64) + 8 * v77) = v82;
      *(_BYTE *)(*(_QWORD *)(v75 + 56) + v77++) = v165 & *(_BYTE *)(v76 - 1);
      v83 = v77;
      if ( *(unsigned __int16 *)(v75 + 94) <= (int)v77 )
      {
        v72 = v75;
        v73 = v195;
        v19 = v179;
        a4 = v189;
        a5 = v148;
        v166 = v83;
        goto LABEL_120;
      }
    }
  }
  v166 = 0;
LABEL_120:
  if ( v73 )
  {
    if ( *(_WORD *)(v73 + 94) )
    {
      srca = v17;
      v196 = v15;
      v180 = (__int64 *)(v72 + 8);
      v149 = (_QWORD *)(v72 + 64);
      v190 = (_QWORD *)(v73 + 64);
      v84 = 0;
      do
      {
        v85 = *(_QWORD *)(v73 + 8);
        v203 = v73;
        v202 = v72;
        v86 = sub_CF650(v180, v149, *(unsigned __int16 *)(v72 + 94), v85, v190, v84);
        v72 = v202;
        v73 = v203;
        if ( v86 )
        {
          --*(_WORD *)(v202 + 96);
        }
        else
        {
          v87 = v166;
          *(_WORD *)(*(_QWORD *)(v202 + 8) + 2LL * v166++) = *(_WORD *)(v85 + 2 * v84);
          *(_QWORD *)(*(_QWORD *)(v202 + 64) + 8 * v87) = *(_QWORD *)(*(_QWORD *)(v203 + 64) + 8 * v84);
          *(_BYTE *)(*(_QWORD *)(v202 + 56) + v87) = *(_BYTE *)(*(_QWORD *)(v203 + 56) + v84);
        }
        ++v84;
      }
      while ( *(unsigned __int16 *)(v203 + 94) > (int)v84 );
      v15 = v196;
      v17 = srca;
    }
  }
  else
  {
    *(_WORD *)(*(_QWORD *)(v72 + 8) + 2LL * v166) = -1;
    *(_QWORD *)(*(_QWORD *)(v72 + 64) + 8LL * v166) = "BINARY";
  }
  v150 = v72;
  sub_C7180(v72);
  v103 = v150;
  if ( !v17[21].m128i_i64[0] )
  {
    sub_C8260(v150);
    v103 = v150;
  }
  v151 = v103;
  sub_C47F0(v103);
  v50 = v151;
  if ( a4 )
  {
    ii = *(unsigned __int16 *)(v151 + 96);
    if ( (int)ii >= *((__int16 *)v28 + 27) )
    {
      v105 = 0;
      v106 = (unsigned int)(ii - 1) + 1LL;
      v107 = *(_BYTE *)(v151 + 99) | 0x20;
      *(_BYTE *)(v151 + 99) = v107;
      while ( *((__int16 *)v28 + 27) > v105 )
      {
        if ( *((__int16 *)v28 + 26) != v105 )
        {
          if ( !(_DWORD)ii )
            goto LABEL_179;
          v108 = *(_WORD **)(v50 + 8);
          if ( (_WORD)v105 != *v108 )
          {
            v109 = 1;
            v152 = ii;
            while ( v109 != v106 )
            {
              ii = (unsigned __int16)v105;
              if ( (_WORD)v105 == v108[v109] )
              {
                ii = v152;
                if ( (v109 & 0x8000u) != 0LL )
                  break;
                goto LABEL_227;
              }
              ++v109;
            }
LABEL_179:
            *(_BYTE *)(v50 + 99) = v107 & 0xDF;
            break;
          }
        }
LABEL_227:
        ++v105;
      }
    }
  }
  if ( (_QWORD *)v17[21].m128i_i64[0] != v28 || (v115 = v28[2]) == 0 )
  {
LABEL_181:
    v110 = *((_BYTE *)v15 + 197);
    if ( v17[18].m128i_i8[4] <= 1u )
    {
      if ( v110 )
      {
        if ( a4 )
        {
          v111 = *((_DWORD *)v15 + 48);
          v112 = *(_QWORD *)(v50 + 24);
          *(_DWORD *)(v50 + 88) = v111;
          for ( n = *(_QWORD *)(v112 + 16); n; n = *(_QWORD *)(n + 40) )
          {
            if ( *(_DWORD *)(n + 88) == v111 && v50 != n )
            {
              v136 = v50;
              sub_DBD10((__int64)v17, "invalid rootpage");
              sub_E8BB0(
                0xBu,
                "%s at line %d of [%.10s]",
                "database corruption",
                119189,
                "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
              v17[1].m128i_i32[2] = 11;
              v16 = 0;
              v50 = v136;
              goto LABEL_57;
            }
          }
        }
        v132 = v50;
        v114 = sub_D1F90(*(_QWORD *)(v50 + 48) + 32LL, *(unsigned __int8 **)v50, v50);
        v50 = v132;
        if ( v114 )
        {
          v16 = 0;
          if ( !*((_BYTE *)v15 + 103) && !*((_BYTE *)v15 + 104) )
          {
            sub_DBE60((__int64)v15);
            v50 = v132;
            v16 = 0;
          }
          goto LABEL_57;
        }
        *((_DWORD *)v15 + 11) |= 1u;
      }
      else
      {
        if ( *((char *)v28 + 48) < 0 && !a4 )
          goto LABEL_184;
        v143 = v17[3].m128i_i32[2] + 1;
        v17[3].m128i_i32[2] = v143;
        v137 = (__int64 *)v17[1].m128i_i64[0];
        if ( !v137 )
        {
          v153 = v50;
          v137 = sub_E2050(v17->m128i_i64);
          v50 = v153;
          if ( !v137 )
            goto LABEL_232;
        }
        v154 = (_QWORD *)v50;
        sub_11C930((__int64)v17, 1, v140);
        *((_DWORD *)v154 + 22) = sub_E1710((__int64)v137, 183, 0, 0, 0);
        sub_E1710((__int64)v137, 147, v140, v143, 2u);
        if ( a8 )
        {
          v123 = " UNIQUE";
          if ( !a6 )
            v123 = "";
          v139 = (_QWORD *)sub_E8280((__int64)v15, "CREATE%s INDEX %.*s", v123);
          sub_15B750(
            v17,
            "INSERT INTO %Q.sqlite_master VALUES('index',%Q,%Q,#%d,%Q);",
            *(_QWORD *)(v15[4] + v145),
            *v154,
            *v28,
            v143,
            v139);
          v50 = (__int64)v154;
          if ( v139 )
          {
            sub_C9250((__int64)v15, v139);
            v50 = (__int64)v154;
          }
        }
        else
        {
          sub_15B750(
            v17,
            "INSERT INTO %Q.sqlite_master VALUES('index',%Q,%Q,#%d,%Q);",
            *(_QWORD *)(v15[4] + v145),
            *v154,
            *v28,
            v143,
            0);
          v50 = (__int64)v154;
        }
        if ( a4 )
        {
          v135 = (_QWORD *)v50;
          sub_12D190((__int64)v17, v50, v143, a7);
          sub_E2460(v17->m128i_i64[0], v17[1].m128i_i64[0], v140);
          v124 = sub_E8280((__int64)v15, "name='%q' AND type='index'", *v135);
          sub_E18F0((__int64)v137, v140, v124, 0);
          sub_E1710((__int64)v137, 166, 0, 1u, 0);
          v50 = (__int64)v135;
        }
        v125 = *(_DWORD *)(v50 + 88);
        v126 = *((_DWORD *)v137 + 36);
        if ( v125 < 0 )
          v125 = v126 - 1;
        v127 = byte_241F50;
        if ( !*(_BYTE *)(*v137 + 103) )
          v127 = (_BYTE *)(v137[17] + 24LL * v125);
        *((_DWORD *)v127 + 2) = v126;
      }
      if ( *((_BYTE *)v15 + 197) || !a4 )
      {
LABEL_184:
        *(_QWORD *)(v50 + 40) = v28[2];
        v28[2] = v50;
        goto LABEL_185;
      }
      if ( v17[18].m128i_i8[4] <= 1u )
        goto LABEL_232;
    }
    else if ( v110 || !a4 )
    {
      goto LABEL_184;
    }
    v17[21].m128i_i64[1] = v50;
LABEL_185:
    v51 = v28[2];
    v16 = 0;
    v52 = v28 + 2;
    if ( v51 )
      goto LABEL_60;
    if ( a5 )
      goto LABEL_8;
    sub_D8260((__int64)v15, a4);
    goto LABEL_10;
  }
  v116 = *(unsigned __int16 *)(v50 + 94);
  while ( 1 )
  {
    if ( *(_WORD *)(v115 + 94) == *(_WORD *)(v50 + 94) )
    {
      if ( !*(_WORD *)(v50 + 94) )
        goto LABEL_215;
      v192 = *(_WORD **)(v50 + 8);
      if ( **(_WORD **)(v115 + 8) == *v192 )
        break;
    }
LABEL_201:
    v115 = *(_QWORD *)(v115 + 40);
    if ( !v115 )
      goto LABEL_181;
  }
  v117 = 0;
  while ( 2 )
  {
    v142 = v117;
    v118 = *(_BYTE **)(*(_QWORD *)(v115 + 64) + 8 * v117);
    for ( ii = *(_QWORD *)(*(_QWORD *)(v50 + 64) + 8 * v117); ; ++ii )
    {
      v119 = (unsigned __int8)*v118;
      v120 = *(unsigned __int8 *)ii;
      if ( (_DWORD)v119 == (_DWORD)v120 )
        break;
      if ( byte_1BF000[v119] != byte_1BF000[v120] )
        goto LABEL_214;
LABEL_208:
      ++v118;
    }
    if ( *v118 )
      goto LABEL_208;
    v142 = v117 + 1;
    if ( v117 != v116 - 1 )
    {
      ++v117;
      if ( *(_WORD *)(*(_QWORD *)(v115 + 8) + 2 * v117) == v192[v117] )
        continue;
      goto LABEL_201;
    }
    break;
  }
LABEL_214:
  if ( v116 != v142 )
    goto LABEL_201;
LABEL_215:
  v121 = *(_BYTE *)(v115 + 98);
  v122 = *(_BYTE *)(v50 + 98);
  if ( v121 != v122 )
  {
    if ( v122 != 11 && v121 != 11 )
    {
      v138 = v115;
      v133 = v50;
      sub_DBD10((__int64)v17, "conflicting ON CONFLICT clauses specified", 0, ii, v115, byte_1BF000);
      v115 = v138;
      v50 = v133;
    }
    if ( *(_BYTE *)(v115 + 98) == 11 )
      *(_BYTE *)(v115 + 98) = *(_BYTE *)(v50 + 98);
  }
  if ( a12 == 2 )
    *(_BYTE *)(v115 + 99) = *(_BYTE *)(v115 + 99) & 0xFC | 2;
  if ( v17[18].m128i_i8[4] > 1u )
  {
    *(_QWORD *)(v50 + 40) = v17[21].m128i_i64[1];
    v17[21].m128i_i64[1] = v50;
    goto LABEL_185;
  }
LABEL_232:
  v16 = 0;
LABEL_57:
  if ( v50 )
  {
    v129 = v16;
    sub_D7C50((__int64)v15, v50);
    v16 = v129;
  }
LABEL_59:
  v51 = v28[2];
  v52 = v28 + 2;
  if ( v51 )
  {
LABEL_60:
    if ( *(_BYTE *)(v51 + 98) == 5 )
    {
LABEL_66:
      while ( 1 )
      {
        v54 = *(_QWORD *)(v51 + 40);
        if ( !v54 || *(_BYTE *)(v54 + 98) == 5 )
          break;
        *v52 = v54;
        *(_QWORD *)(v51 + 40) = *(_QWORD *)(v54 + 40);
        v52 = (_QWORD *)(v54 + 40);
        *(_QWORD *)(v54 + 40) = v51;
      }
    }
    else
    {
      while ( 1 )
      {
        v53 = *(_QWORD *)(v51 + 40);
        if ( !v53 )
          break;
        if ( *(_BYTE *)(v53 + 98) == 5 )
        {
          v52 = (_QWORD *)(v51 + 40);
          v51 = *(_QWORD *)(v51 + 40);
          goto LABEL_66;
        }
        v51 = *(_QWORD *)(v51 + 40);
      }
    }
  }
LABEL_5:
  if ( v16 )
LABEL_6:
    sub_D7720((__int64)v15, v16);
  if ( a5 )
LABEL_8:
    sub_D7810((__int64)v15, a5);
  sub_D8260((__int64)v15, a4);
  if ( v19 )
LABEL_10:
    sub_C9250((__int64)v15, v19);
  return __readfsqword(0x28u) ^ v217;
}
