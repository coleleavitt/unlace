__int64 *__fastcall sub_149160(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        double a7,
        unsigned int a8,
        unsigned __int8 a9,
        unsigned __int8 a10,
        unsigned int a11,
        __int64 *a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // rbp
  __int64 v15; // r14
  __int64 v16; // r8
  int v17; // edx
  __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // r12d
  __int64 v21; // r15
  __int64 v22; // rbx
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r15
  __int64 v27; // r12
  signed int v28; // ebp
  int v29; // esi
  unsigned int v30; // r10d
  unsigned int v31; // r10d
  int v32; // ebp
  int v33; // eax
  __int64 v34; // rsi
  int v35; // eax
  _BYTE *v36; // rdx
  __int64 v37; // rax
  int v38; // eax
  unsigned int v39; // ebp
  __int64 v40; // rax
  __int64 v41; // r12
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  _DWORD *v46; // r13
  char v47; // r15
  unsigned int v48; // ebx
  int v49; // r12d
  char v50; // bp
  __m128i *v51; // rax
  int v52; // esi
  _DWORD *v53; // r14
  _BOOL4 v54; // eax
  unsigned int v55; // ebp
  __int64 v56; // rax
  int v57; // edx
  __int64 v58; // rbx
  __int64 *result; // rax
  __int64 *v60; // r10
  __int64 *v61; // rdi
  _QWORD *v62; // rsi
  __int64 v63; // rax
  int v64; // edx
  __int64 v65; // rcx
  int v66; // edx
  __int64 v67; // rax
  __int64 *v68; // rax
  __int64 v69; // rax
  int v70; // ebx
  unsigned int v71; // r12d
  __int64 v72; // r13
  __int64 v73; // rax
  unsigned int v74; // r10d
  _DWORD *v75; // rdx
  __int64 v76; // rbx
  __int64 v77; // r12
  unsigned int *v78; // rbp
  __int64 v79; // rbp
  __int64 v80; // r13
  signed int v81; // r12d
  unsigned int v82; // r15d
  __int16 v83; // ax
  unsigned int v84; // ecx
  int v85; // esi
  signed int v86; // ecx
  unsigned int v87; // r8d
  bool v88; // bp
  signed int v89; // r15d
  unsigned __int16 v90; // bx
  __int64 v91; // rax
  _QWORD *v92; // rax
  int v93; // eax
  int v94; // edx
  int v95; // esi
  _BYTE *v96; // rdx
  __int64 *v97; // rax
  int v98; // edx
  int v99; // eax
  int v100; // ebx
  _BYTE *v101; // rax
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // r13
  __int64 v106; // r12
  unsigned int v107; // ecx
  __int16 v108; // si
  _WORD *v109; // rax
  _WORD *v110; // rax
  unsigned int v111; // r8d
  int v112; // ebp
  unsigned int v113; // eax
  __int64 v114; // rbx
  unsigned int v115; // r12d
  char v116; // r13
  int v117; // esi
  int v118; // ebp
  int v119; // eax
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rax
  _BYTE *v123; // rdx
  int v124; // eax
  __int64 v125; // rax
  int v126; // ebp
  __int64 v127; // rax
  unsigned int v128; // eax
  int v129; // ebx
  int v130; // ebp
  int v131; // r15d
  __int64 v132; // r13
  int v133; // edx
  const __m128i *v134; // rax
  unsigned __int8 v135; // dl
  __int64 v136; // r14
  __int8 v137; // r12
  unsigned int v138; // ecx
  __int16 v139; // bp
  int v140; // eax
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rax
  int v144; // eax
  int v145; // edx
  int v146; // ebx
  _BYTE *v147; // rdx
  __int64 v148; // rax
  int v149; // eax
  int v150; // edx
  signed int v151; // eax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  int v156; // [rsp+10h] [rbp-148h]
  __int64 v157; // [rsp+10h] [rbp-148h]
  bool v158; // [rsp+10h] [rbp-148h]
  int v159; // [rsp+10h] [rbp-148h]
  char v160; // [rsp+18h] [rbp-140h]
  __int64 v161; // [rsp+18h] [rbp-140h]
  __int64 v162; // [rsp+18h] [rbp-140h]
  unsigned int v163; // [rsp+18h] [rbp-140h]
  __m128i *v164; // [rsp+18h] [rbp-140h]
  unsigned int v165; // [rsp+20h] [rbp-138h]
  __int64 v166; // [rsp+24h] [rbp-134h]
  unsigned int v167; // [rsp+24h] [rbp-134h]
  __int64 v168; // [rsp+28h] [rbp-130h]
  int v169; // [rsp+28h] [rbp-130h]
  __int64 v170; // [rsp+30h] [rbp-128h]
  __int16 v171; // [rsp+38h] [rbp-120h]
  __int64 v172; // [rsp+38h] [rbp-120h]
  __int64 v173; // [rsp+40h] [rbp-118h]
  unsigned int v174; // [rsp+48h] [rbp-110h]
  __int64 v175; // [rsp+48h] [rbp-110h]
  unsigned int v176; // [rsp+50h] [rbp-108h]
  __int64 v177; // [rsp+50h] [rbp-108h]
  unsigned int v178; // [rsp+58h] [rbp-100h]
  unsigned int v179; // [rsp+58h] [rbp-100h]
  bool v180; // [rsp+58h] [rbp-100h]
  int v181; // [rsp+58h] [rbp-100h]
  int v182; // [rsp+5Ch] [rbp-FCh]
  __int64 v183; // [rsp+60h] [rbp-F8h]
  unsigned int v184; // [rsp+60h] [rbp-F8h]
  int v186; // [rsp+70h] [rbp-E8h]
  int v187; // [rsp+74h] [rbp-E4h]
  unsigned __int8 v188; // [rsp+79h] [rbp-DFh]
  __int64 *v190; // [rsp+80h] [rbp-D8h]
  int v191; // [rsp+88h] [rbp-D0h]
  unsigned int v192; // [rsp+8Ch] [rbp-CCh]
  __int64 v193; // [rsp+90h] [rbp-C8h]
  unsigned int v194; // [rsp+98h] [rbp-C0h]
  int v195; // [rsp+9Ch] [rbp-BCh]
  unsigned int v196; // [rsp+A0h] [rbp-B8h]
  unsigned int v197; // [rsp+A4h] [rbp-B4h]
  int v198; // [rsp+A8h] [rbp-B0h]
  unsigned int v199; // [rsp+ACh] [rbp-ACh]
  unsigned __int8 *v200; // [rsp+B0h] [rbp-A8h]
  __int64 v201; // [rsp+B8h] [rbp-A0h]
  unsigned int v202; // [rsp+B8h] [rbp-A0h]
  int v203; // [rsp+C0h] [rbp-98h]
  int v204; // [rsp+C8h] [rbp-90h]
  __int64 v205; // [rsp+D0h] [rbp-88h]
  __int64 v206; // [rsp+D8h] [rbp-80h]
  __int64 v207; // [rsp+E8h] [rbp-70h]

  v14 = a2;
  v15 = *(_QWORD *)(a1 + 16);
  v16 = a8;
  v17 = *(_DWORD *)(a2 + 48);
  v196 = a4;
  v165 = a6;
  v188 = a10;
  v170 = *(_QWORD *)a1;
  if ( (v17 & 0x80u) == 0 )
  {
    v186 = 1;
    v173 = 0;
  }
  else
  {
    v18 = *(_QWORD *)(a2 + 16);
    v173 = v18;
    if ( v18 && (*(_BYTE *)(v18 + 99) & 3) != 2 )
    {
      v19 = *(_QWORD *)(a2 + 16);
      do
      {
        v19 = *(_QWORD *)(v19 + 40);
        if ( !v19 )
          break;
        a4 = *(_BYTE *)(v19 + 99) & 3;
      }
      while ( (_BYTE)a4 != 2 );
      v173 = v19;
    }
    v186 = *(unsigned __int16 *)(v173 + 94);
  }
  if ( (v17 & 0x800) != 0 )
  {
    v166 = 0;
    v20 = 0;
    v21 = a2;
    v171 = *(_WORD *)(a2 + 54);
    v22 = (unsigned int)(v171 - 1) + 1LL;
    while ( v171 <= 0 )
    {
LABEL_42:
      if ( !v166 || v20 )
      {
        v14 = v21;
        goto LABEL_63;
      }
      if ( SHIDWORD(v166) > 0 && (*(_BYTE *)(v21 + 48) & 0x60) != 0 )
        sub_1277E0(a1, v165 + 1, v21, a4, v16, a6, a7);
      v20 = 1;
    }
    v23 = 0;
    v156 = v20;
    v160 = v20 ^ 1;
    v24 = v22;
    v25 = v21;
    v26 = v24;
    while ( 1 )
    {
      v27 = *(_QWORD *)(v25 + 8) + 16 * v23;
      v28 = *(_BYTE *)(v27 + 8) & 0xF;
      if ( (*(_BYTE *)(v27 + 8) & 0xF) == 0 || *(__int16 *)(v25 + 52) == (_DWORD)v23 )
        goto LABEL_15;
      if ( (*(_WORD *)(v27 + 14) & 0x60) != 0 && v160 )
      {
        LODWORD(v166) = v166 + 1;
        goto LABEL_15;
      }
      if ( a13 && *(int *)(a13 + 4 * v23) < 0 && (*(_WORD *)(v27 + 14) & 0x60) == 0 )
        goto LABEL_15;
      if ( a10 == 11 )
      {
        if ( v28 == 11 )
        {
          v28 = 2;
          goto LABEL_25;
        }
      }
      else
      {
        v28 = a10;
      }
      if ( v28 == 5 )
      {
        v38 = *(_DWORD *)(v25 + 48) & 0x20;
        v39 = v165 + 1;
        if ( v156 || !*(_WORD *)(v27 + 12) )
        {
          v31 = (__int16)v23 + v39;
          if ( v38 && (v23 & 0x8000u) == 0LL )
            v31 = v39 + sub_CF5E0(v25, v23);
LABEL_53:
          v28 = 2;
          v40 = *(_QWORD *)(a1 + 160);
          if ( !v40 )
            v40 = a1;
          *(_BYTE *)(v40 + 33) = 1;
LABEL_56:
          v179 = v31;
          v41 = sub_E8280(v170, "%s.%s", *(const char **)v25, *(const char **)v27);
          sub_E1710(v15, 69, 0x513u, v28, v179);
          sub_D04B0(v15, v41, 0xFFFFFFFA, v42, v43, v44);
          v45 = *(int *)(v15 + 144);
          if ( (int)v45 > 0 )
          {
            a6 = *(_QWORD *)(v15 + 136);
            *(_WORD *)(a6 + 24 * v45 - 22) = 1;
          }
          goto LABEL_15;
        }
        v74 = (__int16)v23 + v39;
        if ( v38 && (v23 & 0x8000u) == 0LL )
          v74 = v39 + sub_CF5E0(v25, v23);
        v178 = v74;
        v32 = sub_E1710(v15, 51, v74, 0, 0);
        v33 = *(unsigned __int16 *)(v27 + 12);
        ++HIDWORD(v166);
        v34 = 0;
        if ( (_WORD)v33 )
        {
          if ( !*(_BYTE *)(v25 + 63) )
          {
            v75 = *(_DWORD **)(v25 + 80);
            if ( v75 )
            {
              if ( *v75 >= v33 )
                v34 = *(_QWORD *)&v75[6 * v33 - 4];
            }
          }
        }
        sub_127370((__int64 *)a1, v34, v178, a7);
        v35 = *(_DWORD *)(v15 + 144);
        a4 = *(_QWORD *)v15;
        if ( v32 < 0 )
          v32 = v35 - 1;
        v36 = byte_241F50;
        if ( !*(_BYTE *)(a4 + 103) )
        {
          a4 = 3LL * v32;
          v36 = (_BYTE *)(*(_QWORD *)(v15 + 136) + 24LL * v32);
        }
        ++v23;
        *((_DWORD *)v36 + 2) = v35;
        if ( v26 == v23 )
        {
LABEL_41:
          v20 = v156;
          v37 = v26;
          v21 = v25;
          v22 = v37;
          goto LABEL_42;
        }
      }
      else
      {
LABEL_25:
        if ( (*(_WORD *)(v27 + 14) & 0x60) != 0 || !v156 )
        {
          v29 = (__int16)v23;
          v30 = v165 + 1;
          if ( (*(_BYTE *)(v25 + 48) & 0x20) != 0 && (v23 & 0x8000u) == 0LL )
            v29 = sub_CF5E0(v25, v23);
          v31 = v29 + v30;
          if ( v28 == 2 )
            goto LABEL_53;
          if ( v28 <= 2 )
          {
            if ( v28 == 1 )
              goto LABEL_56;
          }
          else if ( v28 == 3 )
          {
            goto LABEL_56;
          }
          sub_E1710(v15, 50, v31, a11, 0);
        }
LABEL_15:
        if ( v26 == ++v23 )
          goto LABEL_41;
      }
    }
  }
LABEL_63:
  v46 = *(_DWORD **)(v14 + 32);
  v47 = 0;
  if ( v46 && (*(_BYTE *)(v170 + 49) & 2) == 0 )
  {
    LOBYTE(v48) = 2;
    *(_DWORD *)(a1 + 64) = ~v165;
    v16 = (unsigned int)*v46;
    if ( a10 != 11 )
      LOBYTE(v48) = a10;
    v48 = (unsigned __int8)v48;
    if ( (int)v16 > 0 )
    {
      v168 = v14;
      v49 = 0;
      v50 = 0;
      v157 = v15;
      while ( 1 )
      {
        v53 = &v46[6 * v49];
        v16 = *((_QWORD *)v53 + 1);
        if ( a13 )
        {
          v161 = *((_QWORD *)v53 + 1);
          v54 = sub_CE2B0(v161, a13, a9);
          v16 = v161;
          if ( !v54 )
            goto LABEL_78;
        }
        if ( !v50 )
        {
          v162 = v16;
          sub_E3840(v157, v168, v165 + 1, a4, v16, a6);
          v16 = v162;
        }
        v55 = *(_DWORD *)(a1 + 68) - 1;
        *(_DWORD *)(a1 + 68) = v55;
        if ( v16 )
          break;
        if ( *(_BYTE *)(v170 + 103) )
          goto LABEL_73;
        sub_124FC0(a1, nullptr, v55, 16, a7);
        if ( v48 != 4 )
        {
LABEL_74:
          if ( v48 == 5 )
            v48 = 2;
          sub_E2080((__int64 *)a1, 0x113u, v48, *((_QWORD *)v53 + 2), 0, 3u);
          goto LABEL_77;
        }
LABEL_86:
        sub_E1710(v157, 8, 0, a11, 0);
LABEL_77:
        v52 = v55;
        v50 = 1;
        sub_E0BB0(v157, v52);
LABEL_78:
        if ( *v46 <= ++v49 )
        {
          v47 = v50;
          v15 = v157;
          v14 = v168;
          goto LABEL_88;
        }
      }
      v51 = sub_DD6E0(v170, v16, 0, nullptr);
      if ( !*(_BYTE *)(v170 + 103) )
      {
        v164 = v51;
        sub_124FC0(a1, (unsigned __int8 *)v51, v55, 16, a7);
        v51 = v164;
      }
      if ( v51 )
        sub_D7720(v170, (__int64)v51);
LABEL_73:
      if ( v48 != 4 )
        goto LABEL_74;
      goto LABEL_86;
    }
LABEL_88:
    *(_DWORD *)(a1 + 64) = 0;
  }
  v56 = *(_QWORD *)(v14 + 16);
  v207 = v56;
  if ( a14 )
  {
    if ( !*(_QWORD *)a14 )
    {
      v190 = nullptr;
      v182 = 0;
      if ( *(_BYTE *)(a14 + 40) )
      {
        v188 = 6;
      }
      else
      {
        a14 = 0;
        v188 = 4;
      }
      goto LABEL_113;
    }
    if ( v56 )
    {
      v57 = 0;
      do
      {
        v56 = *(_QWORD *)(v56 + 40);
        ++v57;
      }
      while ( v56 );
      v58 = v57;
      LODWORD(v207) = v57;
      result = sub_DC1C0(v170, 18LL * v57);
      v190 = result;
      v60 = result;
      if ( !result )
        return result;
      a6 = 0;
      v61 = &result[2 * v58];
      *(_QWORD *)(a14 + 48) = result;
      v16 = *(_QWORD *)(v14 + 16);
      v62 = (_QWORD *)a14;
      do
      {
        if ( !*v62 )
          break;
        a4 = v62[7];
        if ( a4 )
        {
          if ( v16 )
          {
            if ( a4 == v16 )
            {
              a4 = (__int64)v61;
              v63 = v16;
              v64 = 0;
            }
            else
            {
              v63 = v16;
              v64 = 0;
              do
              {
                v63 = *(_QWORD *)(v63 + 40);
                ++v64;
              }
              while ( v63 && a4 != v63 );
              a4 = (__int64)v61 + v64;
            }
          }
          else
          {
            a4 = (__int64)v61;
            v63 = 0;
            v64 = 0;
          }
          if ( !*(_BYTE *)a4 )
          {
            *(_BYTE *)a4 = 1;
            v65 = (int)a6;
            a6 = (unsigned int)(a6 + 1);
            a4 = (__int64)&v60[2 * v65];
            *(_QWORD *)a4 = v63;
            *(_DWORD *)(a4 + 8) = v64;
            v16 = *(_QWORD *)(v14 + 16);
          }
        }
        v62 = (_QWORD *)v62[4];
      }
      while ( v62 );
      if ( v16 )
      {
        a4 = (__int64)v190;
        v66 = 0;
        do
        {
          if ( !*((_BYTE *)v61 + v66) )
          {
            v67 = (int)a6;
            a6 = (unsigned int)(a6 + 1);
            v68 = &v190[2 * v67];
            *v68 = v16;
            *((_DWORD *)v68 + 2) = v66;
          }
          v16 = *(_QWORD *)(v16 + 40);
          ++v66;
        }
        while ( v16 );
      }
      v182 = 1;
      goto LABEL_113;
    }
  }
  v190 = nullptr;
  v182 = 0;
LABEL_113:
  v69 = *(_QWORD *)(v170 + 48);
  if ( (v69 & 0x6000) == 0 )
    goto LABEL_116;
  if ( (v69 & 0x2000) != 0 )
  {
    v200 = sub_E60E0((__int64 *)a1, v14, 128, nullptr, nullptr);
    if ( v200 )
      goto LABEL_353;
  }
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 49LL) & 0x40) == 0 || *(_BYTE *)(v14 + 63) || !(unsigned int)sub_CF7D0(v14, 0, 0) )
  {
LABEL_116:
    v200 = nullptr;
    v197 = 0;
    v194 = 0;
    goto LABEL_117;
  }
  v200 = nullptr;
LABEL_353:
  v194 = *(_DWORD *)(a1 + 56) + 1;
  *(_DWORD *)(a1 + 56) = v194;
  sub_E1710(v15, 71, 0, v194, 0);
  v197 = *(_DWORD *)(a1 + 68) - 1;
  *(_DWORD *)(a1 + 68) = v197;
LABEL_117:
  v158 = v173 == 0 && a9 != 0;
  if ( v158 )
  {
    v70 = *(_DWORD *)(a1 + 68) - 1;
    *(_DWORD *)(a1 + 68) = v70;
    v71 = v188;
    if ( v188 == 11 && (v71 = *(unsigned __int8 *)(v14 + 62), v71 == 11) )
    {
      v71 = 2;
      if ( !a14 )
      {
        if ( !a8 )
        {
          v72 = 0;
          sub_E1710(v15, 30, v196, v70, v165);
          v198 = 0;
          v192 = 0;
          v158 = 0;
LABEL_331:
          sub_E8780((__int64 *)a1, v71, v14);
          v203 = 0;
          v195 = 0;
          goto LABEL_332;
        }
        v72 = 0;
        v158 = 0;
        v198 = 0;
        v192 = 0;
        goto LABEL_350;
      }
    }
    else if ( !a14 )
    {
      v72 = 0;
      v158 = 0;
      v198 = 0;
      goto LABEL_127;
    }
    if ( !*(_QWORD *)a14 || (v72 = a14, !*(_QWORD *)(a14 + 56)) )
    {
      v158 = 0;
      if ( *(_BYTE *)(a14 + 40) )
      {
LABEL_340:
        if ( !a8 )
        {
          sub_E1710(v15, 30, v196, v70, v165);
          v72 = a14;
          v198 = 0;
          v192 = 0;
LABEL_342:
          sub_148DA0(a1, a14, v14, 0, v196);
          goto LABEL_343;
        }
        v72 = a14;
        v198 = 0;
        v71 = 6;
        v192 = 0;
        goto LABEL_350;
      }
LABEL_360:
      if ( !a8 )
      {
        sub_E1710(v15, 30, v196, v70, v165);
        v198 = 0;
        v72 = a14;
        v192 = 0;
LABEL_343:
        sub_E1710(v15, 8, 0, a11, 0);
        v203 = 0;
        v195 = 0;
LABEL_332:
        sub_E0BB0(v15, v70);
        if ( v158 )
        {
          v204 = 0;
          v191 = sub_E1710(v15, 8, 0, 0, 0);
        }
        else
        {
          v204 = 0;
          v191 = 0;
          if ( v192 )
          {
            v149 = sub_E1710(v15, 8, 0, 0, 0);
            v150 = *(_DWORD *)(v15 + 144);
            v204 = v149;
            v151 = v192 - 1;
            if ( (int)(v192 - 1) < 0 )
              v151 = v150 - 1;
            a4 = (__int64)byte_241F50;
            if ( !*(_BYTE *)(*(_QWORD *)v15 + 103LL) )
              a4 = *(_QWORD *)(v15 + 136) + 24LL * v151;
            *(_DWORD *)(a4 + 8) = v150;
            v191 = 0;
          }
        }
        goto LABEL_154;
      }
      v72 = a14;
      v198 = 0;
      v71 = 4;
      v192 = 0;
LABEL_350:
      sub_E1710(v15, 53, v165, v70, a8);
      v152 = *(int *)(v15 + 144);
      if ( (int)v152 > 0 )
        *(_WORD *)(*(_QWORD *)(v15 + 136) + 24 * v152 - 22) = 144;
LABEL_326:
      sub_E1710(v15, 30, v196, v70, v165);
      switch ( v71 )
      {
        case 1u:
        case 2u:
        case 3u:
          goto LABEL_331;
        case 4u:
          goto LABEL_343;
        case 5u:
          goto LABEL_134;
        case 6u:
          goto LABEL_342;
        default:
          v71 = 2;
          goto LABEL_331;
      }
    }
    do
    {
      v72 = *(_QWORD *)(v72 + 32);
      if ( !v72 )
        goto LABEL_126;
    }
    while ( *(_QWORD *)v72 && *(_QWORD *)(v72 + 56) );
    v158 = a14 != v72;
    if ( *(_BYTE *)(v72 + 40) )
    {
      v71 = 6;
      if ( a14 == v72 )
        goto LABEL_340;
    }
    else
    {
      if ( a14 == v72 )
        goto LABEL_360;
      v71 = 4;
    }
LABEL_126:
    v198 = sub_E1710(v15, 8, 0, 0, 0);
LABEL_127:
    v192 = 0;
    if ( v71 != 5 )
    {
      if ( !a8 )
        goto LABEL_326;
      goto LABEL_350;
    }
    if ( v188 != 5 )
    {
      if ( *(_QWORD *)(v14 + 16) && !v198 )
        v192 = sub_E1710(v15, 8, 0, 0, 0) + 1;
      else
        v192 = 0;
    }
    if ( !a8 )
    {
      sub_E1710(v15, 30, v196, v70, v165);
LABEL_134:
      if ( v194 )
      {
        v153 = *(_QWORD *)(a1 + 160);
        if ( !v153 )
          v153 = a1;
        *(_BYTE *)(v153 + 32) = 1;
        sub_14EB50(a1, v14, (_DWORD)v200, v196, a5, v165, 1, 0, 5, 1, -1);
        sub_E1710(v15, 86, v194, 1u, 0);
        v203 = 1;
        v195 = 1;
      }
      else if ( *(_QWORD *)(v14 + 16) )
      {
        v73 = *(_QWORD *)(a1 + 160);
        if ( !v73 )
          v73 = a1;
        *(_BYTE *)(v73 + 32) = 1;
        sub_12CFE0(a1, v14, v196, a5, 0, -1, a7);
        v203 = 0;
        v195 = 1;
      }
      else
      {
        v203 = 0;
        v195 = 1;
      }
      goto LABEL_332;
    }
    goto LABEL_350;
  }
  v203 = 0;
  v204 = 0;
  v72 = 0;
  v192 = 0;
  v198 = 0;
  v191 = 0;
  v195 = 0;
LABEL_154:
  if ( v182 )
  {
    v159 = *((_DWORD *)v190 + 2);
    v76 = *v190;
  }
  else
  {
    v76 = v207;
    v159 = 0;
  }
  v169 = 0;
  v199 = v197;
  if ( v76 )
  {
    v77 = v76;
    v172 = v14;
    while ( 1 )
    {
      v78 = (unsigned int *)(a3 + 4LL * v159);
      if ( !*v78 )
        goto LABEL_212;
      if ( a14 )
      {
        v72 = a14;
        while ( *(_QWORD *)v72 && *(_QWORD *)(v72 + 56) != v77 )
        {
          v72 = *(_QWORD *)(v72 + 32);
          if ( !v72 )
            goto LABEL_164;
        }
        if ( v198 && a14 == v72 )
        {
          a4 = *(unsigned int *)(v15 + 144);
          v123 = byte_241F50;
          v124 = a4 - 1;
          if ( v198 >= 0 )
            v124 = v198;
          if ( !*(_BYTE *)(*(_QWORD *)v15 + 103LL) )
            v123 = (_BYTE *)(*(_QWORD *)(v15 + 136) + 24LL * v124);
          *((_DWORD *)v123 + 2) = a4;
        }
      }
LABEL_164:
      v167 = *(_DWORD *)(a1 + 68) - 1;
      *(_DWORD *)(a1 + 68) = v167;
      if ( !v47 )
        sub_E3840(v15, v172, v165 + 1, a4, v16, a6);
      v174 = *v78;
      if ( *(_QWORD *)(v77 + 72) )
      {
        sub_E1710(v15, 75, 0, *v78, 0);
        *(_DWORD *)(a1 + 64) = ~v165;
        sub_12CCC0((__int64 *)a1, *(_QWORD *)(v77 + 72), v167, a7);
        *(_DWORD *)(a1 + 64) = 0;
        v174 = *v78;
      }
      v163 = v174 + 1;
      if ( *(_WORD *)(v77 + 96) )
      {
        v183 = v72;
        v79 = v77;
        v80 = 0;
        v81 = 0;
        v82 = v174 + 1;
        do
        {
          v84 = v82 + v81;
          v85 = *(__int16 *)(*(_QWORD *)(v79 + 8) + v80);
          if ( v85 == -2 )
          {
            *(_DWORD *)(a1 + 64) = ~v165;
            sub_127370((__int64 *)a1, *(_QWORD *)(*(_QWORD *)(v79 + 80) + 24LL * v81 + 8), v84, a7);
            *(_DWORD *)(a1 + 64) = 0;
          }
          else if ( v85 == -1 || (_WORD)v85 == *(_WORD *)(v172 + 52) )
          {
            sub_E1710(v15, 82, v165, v84, 0);
          }
          else
          {
            if ( (*(_BYTE *)(v172 + 48) & 0x20) != 0 && (v85 & 0x8000u) == 0 )
            {
              v83 = sub_CF5E0(v172, v85);
              v84 = v82 + v81;
              v85 = v83;
            }
            sub_E1710(v15, 81, v165 + 1 + v85, v84, 0);
          }
          v86 = *(unsigned __int16 *)(v79 + 96);
          ++v81;
          v80 += 2;
        }
        while ( v86 > v81 );
        v77 = v79;
        v72 = v183;
        v87 = *(_DWORD *)(a3 + 4LL * v159);
      }
      else
      {
        v87 = v174;
        v86 = 0;
      }
      sub_E1710(v15, 97, v163, v86, v87);
      v180 = v173 == v77;
      v88 = v173 == v77 && a8 != 0 && a9 == 0;
      if ( v88 || (v89 = *(unsigned __int8 *)(v77 + 98), !*(_BYTE *)(v77 + 98)) )
      {
LABEL_276:
        v47 = 1;
        sub_E0BB0(v15, v167);
        goto LABEL_212;
      }
      if ( v188 == 11 )
      {
        if ( v89 == 11 )
          v89 = 2;
        if ( !v72 )
        {
LABEL_280:
          v88 = v89 == 5;
          goto LABEL_185;
        }
      }
      else
      {
        v89 = v188;
        if ( !v72 )
          goto LABEL_280;
      }
      v89 = *(_BYTE *)(v72 + 40) == 0 ? 4 : 6;
LABEL_185:
      v176 = v159 + a5;
      if ( v159 || *(_QWORD *)(v77 + 40) || v173 != v77 || !v88 )
        goto LABEL_187;
      v125 = *(_QWORD *)(v170 + 48);
      if ( (v125 & 0x2000) == 0 )
        goto LABEL_273;
      if ( !sub_E60E0((__int64 *)a1, v172, 128, nullptr, nullptr) )
      {
        v125 = *(_QWORD *)(v170 + 48);
LABEL_273:
        if ( (v125 & 0x4000) == 0
          || !*(_QWORD *)(v172 + 72) && !sub_C2AB0(*(_QWORD *)(v172 + 96) + 80LL, *(unsigned __int8 **)v172, nullptr)[2] )
        {
          goto LABEL_276;
        }
LABEL_187:
        v90 = *(_WORD *)(v77 + 94);
        v187 = sub_E1710(v15, 26, v176, v167, v163);
        if ( !*(_BYTE *)(*(_QWORD *)v15 + 103LL) )
        {
LABEL_188:
          v91 = *(_QWORD *)(v15 + 136) + 24LL * v187;
          *(_BYTE *)(v91 + 1) = -3;
          *(_DWORD *)(v91 + 16) = v90;
        }
        v184 = v174 + 1;
        if ( v173 != v77 )
          v184 = sub_CF000(a1, v186);
        if ( !a8 && !v88 )
          goto LABEL_193;
        goto LABEL_236;
      }
      v90 = *(_WORD *)(v77 + 94);
      v187 = sub_E1710(v15, 26, v176, v167, v163);
      if ( !*(_BYTE *)(*(_QWORD *)v15 + 103LL) )
        goto LABEL_188;
      v184 = v174 + 1;
LABEL_236:
      if ( *(char *)(v172 + 48) >= 0 )
      {
        sub_E1710(v15, 142, v176, v184, 0);
        if ( a8 )
        {
          sub_E1710(v15, 53, v184, v167, a8);
          v148 = *(int *)(v15 + 144);
          if ( (int)v148 > 0 )
            *(_WORD *)(*(_QWORD *)(v15 + 136) + 24 * v148 - 22) = 144;
        }
      }
      else
      {
        if ( v173 != v77 && *(_WORD *)(v173 + 94) )
        {
          v201 = v72;
          v105 = v77;
          v106 = 0;
          do
          {
            v107 = -1;
            v108 = *(_WORD *)(*(_QWORD *)(v173 + 8) + 2 * v106);
            if ( *(_WORD *)(v105 + 96) )
            {
              v109 = *(_WORD **)(v105 + 8);
              if ( v108 == *v109 )
              {
                v107 = 0;
              }
              else
              {
                v110 = v109 + 1;
                v107 = 0;
                do
                {
                  if ( ++v107 == *(unsigned __int16 *)(v105 + 96) )
                  {
                    v107 = -1;
                    goto LABEL_246;
                  }
                  ++v110;
                }
                while ( v108 != *(v110 - 1) );
                v107 = (__int16)v107;
              }
            }
LABEL_246:
            v111 = v184 + v106;
            v112 = v106++;
            sub_E1710(v15, 94, v176, v107, v111);
          }
          while ( *(unsigned __int16 *)(v173 + 94) > v112 + 1 );
          v77 = v105;
          v72 = v201;
        }
        if ( a8 )
        {
          v113 = v174 + 1;
          if ( (*(_BYTE *)(v77 + 99) & 3) != 2 )
            v113 = v184;
          v202 = v113;
          if ( *(_WORD *)(v173 + 94) )
          {
            v114 = 0;
            v205 = v72;
            v206 = v77;
            v115 = *(unsigned __int16 *)(v173 + 94) + *(_DWORD *)(v15 + 144);
            v116 = 52;
            do
            {
              v193 = sub_F2480((__int64 *)a1, *(unsigned __int8 **)(*(_QWORD *)(v173 + 64) + 8 * v114), a7);
              v117 = *(__int16 *)(*(_QWORD *)(v173 + 8) + 2 * v114);
              if ( *(unsigned __int16 *)(v173 + 94) - 1 == (_DWORD)v114 )
              {
                v115 = v167;
                v116 = 53;
              }
              if ( (*(_BYTE *)(v172 + 48) & 0x20) != 0 && (v117 & 0x8000u) == 0 )
                v117 = sub_CF5E0(v172, v117);
              v118 = v114;
              v119 = sub_E1710(v15, v116, v117 + a8 + 1, v115, v202 + (unsigned int)v114);
              sub_DCC50(v15, v119, v193, 4294967294LL, v120, v121);
              v122 = *(int *)(v15 + 144);
              if ( (int)v122 > 0 )
                *(_WORD *)(*(_QWORD *)(v15 + 136) + 24 * v122 - 22) = 144;
              ++v114;
            }
            while ( *(unsigned __int16 *)(v173 + 94) > v118 + 1 );
            v72 = v205;
            v77 = v206;
          }
        }
      }
LABEL_193:
      if ( v89 == 4 )
        goto LABEL_232;
      if ( v89 > 4 )
      {
        if ( v89 == 6 )
        {
          sub_148DA0(a1, a14, v172, v77, v176);
LABEL_232:
          sub_E1710(v15, 8, 0, a11, 0);
          goto LABEL_197;
        }
      }
      else if ( v89 >= 1 )
      {
        sub_E2130((__int64 *)a1, v89, v77);
        goto LABEL_197;
      }
      v126 = *(_DWORD *)(v15 + 144);
      if ( v194 )
      {
        v127 = *(_QWORD *)(a1 + 160);
        if ( !v127 )
          v127 = a1;
        ++v203;
        *(_BYTE *)(v127 + 32) = 1;
      }
      if ( v200 && a8 )
      {
        sub_E1710(v15, 167, v196, 0, 0);
        sub_14EB50(a1, v172, (_DWORD)v200, v196, a5, v184, (__int16)v186, 0, 5, v180, v176);
        sub_E1710(v15, 168, v196, 0, 0);
      }
      else
      {
        sub_14EB50(a1, v172, (_DWORD)v200, v196, a5, v184, (__int16)v186, 0, 5, v180, v176);
      }
      v195 = 1;
      if ( v194 )
      {
        sub_E1710(v15, 86, v194, 1u, 0);
        v181 = sub_E1710(v15, 8, 0, 0, 0);
        sub_E0BB0(v15, v199);
        v128 = *(_DWORD *)(a1 + 68) - 1;
        *(_DWORD *)(a1 + 68) = v128;
        v199 = v128;
        if ( *(_QWORD *)(v77 + 72) )
          sub_E1710(v15, 50, v174, v128, 0);
        v129 = v187;
        v130 = v126 - v187;
        if ( v130 > 0 )
        {
          v175 = v72;
          v177 = v77;
          v131 = v187 + v130;
          v132 = v15;
          do
          {
            v133 = v129;
            if ( v129 < 0 )
              v133 = *(_DWORD *)(v132 + 144) - 1;
            v134 = (const __m128i *)byte_241F50;
            if ( !*(_BYTE *)(*(_QWORD *)v132 + 103LL) )
              v134 = (const __m128i *)(*(_QWORD *)(v132 + 136) + 24LL * v133);
            v135 = v134->m128i_i8[0];
            *(_QWORD *)&a7 = _mm_loadu_si128(v134).m128i_u64[0];
            if ( v134->m128i_i8[0] != -114 )
            {
              v136 = v134[1].m128i_i64[0];
              v137 = v134->m128i_i8[1];
              v138 = v199;
              if ( (byte_1BEE40[v135] & 1) == 0 )
                v138 = v134->m128i_u32[2];
              if ( v137 == -3 )
                v136 = (int)v134[1].m128i_i64[0];
              v139 = v134->m128i_i16[1];
              v140 = sub_E1710(v132, v135, v134->m128i_u32[1], v138, v134->m128i_u32[3]);
              sub_DCC50(v132, v140, v136, (unsigned int)v137, v141, v142);
              v143 = *(int *)(v132 + 144);
              if ( (int)v143 > 0 )
                *(_WORD *)(*(_QWORD *)(v132 + 136) + 24 * v143 - 22) = v139;
            }
            ++v129;
          }
          while ( v129 != v131 );
          v15 = v132;
          v77 = v177;
          v72 = v175;
        }
        sub_E2130((__int64 *)a1, 2u, v77);
        v144 = *(_DWORD *)(v15 + 144);
        v145 = v144 - 1;
        if ( v181 >= 0 )
          v145 = v181;
        v146 = v145;
        v147 = byte_241F50;
        if ( !*(_BYTE *)(*(_QWORD *)v15 + 103LL) )
          v147 = (_BYTE *)(*(_QWORD *)(v15 + 136) + 24LL * v146);
        *((_DWORD *)v147 + 2) = v144;
        v195 = 1;
      }
LABEL_197:
      sub_E0BB0(v15, v167);
      if ( v163 != v184 )
      {
        if ( v186 == 1 )
        {
          sub_CF060(a1, v184);
        }
        else if ( v186 > *(_DWORD *)(a1 + 40) )
        {
          *(_DWORD *)(a1 + 40) = v186;
          *(_DWORD *)(a1 + 44) = v184;
        }
      }
      if ( !v72 || !v191 )
        goto LABEL_211;
      v92 = *(_QWORD **)(v72 + 32);
      if ( !v92 || !*v92 || (v47 = 1, !v92[7]) )
      {
        sub_E1710(v15, 8, 0, v198 + 1, 0);
        v93 = *(_DWORD *)(v15 + 144);
        a4 = *(_QWORD *)v15;
        v94 = v93 - 1;
        if ( v191 >= 0 )
          v94 = v191;
        v95 = v94;
        v96 = byte_241F50;
        if ( !*(_BYTE *)(a4 + 103) )
        {
          a4 = 3LL * v95;
          v96 = (_BYTE *)(*(_QWORD *)(v15 + 136) + 24LL * v95);
        }
        *((_DWORD *)v96 + 2) = v93;
        v191 = 0;
LABEL_211:
        v47 = 1;
      }
LABEL_212:
      if ( v182 )
      {
        if ( ++v169 >= (int)v207 )
        {
          v14 = v172;
          if ( v192 )
            goto LABEL_218;
LABEL_149:
          if ( !v203 )
            goto LABEL_150;
LABEL_223:
          sub_E1710(v15, 16, v194, v199, 0);
          if ( v173 )
          {
            sub_E1710(v15, 8, 0, v197, 0);
          }
          else
          {
            if ( a8 )
            {
              sub_E1710(v15, 53, v165, v197, a8);
              v154 = *(int *)(v15 + 144);
              if ( (int)v154 > 0 )
                *(_WORD *)(*(_QWORD *)(v15 + 136) + 24 * v154 - 22) = 144;
            }
            sub_E1710(v15, 30, v196, v197, v165);
            sub_E8780((__int64 *)a1, 2u, v14);
          }
          sub_E0BB0(v15, v199);
          if ( *(char *)(v14 + 48) >= 0 )
            goto LABEL_226;
          goto LABEL_151;
        }
        v97 = &v190[2 * v169];
        v77 = *v97;
        v159 = *((_DWORD *)v97 + 2);
      }
      else
      {
        ++v159;
        v77 = *(_QWORD *)(v207 + 40);
        v207 = v77;
      }
      if ( !v77 )
      {
        v14 = v172;
        break;
      }
    }
  }
  v169 = v159;
  if ( !v192 )
    goto LABEL_149;
LABEL_218:
  sub_E1710(v15, 8, 0, v192, 0);
  v98 = *(_DWORD *)(v15 + 144);
  v99 = v98 - 1;
  if ( v204 >= 0 )
    v99 = v204;
  v100 = v99;
  v101 = byte_241F50;
  if ( !*(_BYTE *)(*(_QWORD *)v15 + 103LL) )
    v101 = (_BYTE *)(*(_QWORD *)(v15 + 136) + 24LL * v100);
  *((_DWORD *)v101 + 2) = v98;
  if ( v203 )
    goto LABEL_223;
LABEL_150:
  if ( *(char *)(v14 + 48) >= 0 )
  {
LABEL_226:
    sub_E1710(v15, 97, v165 + 1, *(__int16 *)(v14 + 56), *(_DWORD *)(a3 + 4LL * v169));
    if ( !v47 )
      sub_E3840(v15, v14, 0, v102, v103, v104);
  }
LABEL_151:
  result = a12;
  *(_DWORD *)a12 = v195;
  return result;
}
