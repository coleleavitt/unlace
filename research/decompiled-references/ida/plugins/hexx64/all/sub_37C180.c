unsigned __int64 __fastcall sub_37C180(__int64 *a1, double a2, __m128 a3)
{
  __int64 v3; // rax
  __int64 v5; // r14
  unsigned int v6; // r15d
  int v7; // eax
  bool v8; // r12
  int v9; // ebp
  int v10; // r15d
  __int64 v11; // r13
  int v12; // r11d
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // r15
  __int64 v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // r15
  int v21; // eax
  __int64 v23; // rdi
  __int64 v24; // r12
  unsigned int v25; // ebp
  __m128 v26; // xmm0
  char v27; // al
  __int64 v28; // rdx
  char tinfo_details; // r12
  __int64 v30; // rdi
  __int64 v31; // r14
  __int64 v32; // rbp
  _QWORD *v33; // r13
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // r15
  __int64 v37; // rax
  __int64 v38; // rdi
  int v39; // r14d
  int v40; // ebp
  __int64 v41; // r15
  __int64 v42; // r13
  __int64 v43; // r12
  unsigned __int64 v44; // rax
  __int64 v45; // rdx
  bool v46; // al
  unsigned int v47; // eax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 *v51; // rcx
  __int64 v52; // rcx
  int v53; // r13d
  __int64 v54; // rax
  int v55; // r15d
  __int64 v56; // rax
  __int64 v57; // rsi
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rsi
  unsigned int v61; // eax
  int *v62; // rbp
  int *v63; // r13
  _DWORD *v64; // r15
  char v65; // cl
  int v66; // edx
  bool v67; // al
  int v68; // eax
  signed int v69; // edi
  bool v70; // al
  int v71; // eax
  __int64 v72; // rax
  __int64 v73; // rbp
  unsigned __int64 v74; // r13
  char v75; // al
  int v76; // edx
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // r14
  unsigned int v79; // r8d
  int v80; // r10d
  char v81; // al
  unsigned int v82; // eax
  int v83; // eax
  int v84; // r14d
  __int64 v85; // rax
  __int64 v86; // r8
  int v87; // ecx
  _DWORD *v88; // rdi
  _DWORD *v89; // rsi
  _DWORD *v90; // rax
  __int64 v91; // rax
  __int64 v92; // r12
  __int64 v93; // rax
  __int64 v94; // rsi
  unsigned __int64 v95; // rdi
  int *v96; // r14
  int *v97; // r13
  _DWORD *v98; // rdx
  int v99; // r12d
  _DWORD *v100; // rax
  __int64 v101; // rdi
  unsigned __int64 v102; // rdi
  int v103; // r13d
  __int64 v104; // rbp
  __int64 v105; // rax
  char v106; // al
  __int64 v107; // rbp
  unsigned __int64 v108; // r13
  _DWORD *v109; // rsi
  _DWORD *v110; // rax
  _DWORD *v111; // r12
  char v112; // al
  int v113; // edx
  char v114; // al
  int v115; // ecx
  __int64 v116; // rax
  int v117; // edx
  __int64 v118; // rdi
  __int64 v119; // r14
  __int64 v120; // rbp
  _QWORD *v121; // r12
  __int64 v122; // rdi
  __int64 v123; // rdi
  int *v124; // rbp
  int *v125; // r13
  _DWORD *v126; // rsi
  int v127; // edx
  _DWORD *v128; // r8
  _DWORD *v129; // rdi
  _DWORD *v130; // rax
  int v131; // edi
  int v132; // eax
  char v133; // al
  unsigned __int64 v134; // rcx
  unsigned __int64 v135; // rdx
  __int64 *v136; // r12
  int v137; // ebp
  __int64 v138; // rdx
  _DWORD *v139; // rcx
  int v140; // r14d
  _DWORD *v141; // rdx
  _DWORD *v142; // r8
  _DWORD *v143; // rdi
  _DWORD *v144; // rax
  int v145; // edx
  char v146; // al
  unsigned int v147; // eax
  __int64 v148; // rsi
  __int64 v149; // rdx
  __int64 v150; // rdi
  __int64 v151; // rax
  int v152; // eax
  int v153; // eax
  unsigned int v154; // ebp
  int v155; // ebp
  int v156; // eax
  char v157; // al
  _DWORD *v158; // rdi
  __int64 v159; // rcx
  _DWORD *v160; // r10
  _DWORD *v161; // rax
  int v162; // r10d
  int v163; // eax
  int v164; // r10d
  int v165; // eax
  int v166; // eax
  unsigned __int64 v167; // rax
  __int64 v168; // rdx
  unsigned int v169; // eax
  int v170; // [rsp+8h] [rbp-2C0h]
  int v171; // [rsp+8h] [rbp-2C0h]
  int v172; // [rsp+10h] [rbp-2B8h]
  int v173; // [rsp+10h] [rbp-2B8h]
  bool v174; // [rsp+18h] [rbp-2B0h]
  int v175; // [rsp+18h] [rbp-2B0h]
  int v176; // [rsp+18h] [rbp-2B0h]
  unsigned int v177; // [rsp+18h] [rbp-2B0h]
  int v178; // [rsp+18h] [rbp-2B0h]
  int v179; // [rsp+18h] [rbp-2B0h]
  int v180; // [rsp+18h] [rbp-2B0h]
  int v181; // [rsp+18h] [rbp-2B0h]
  __int64 *v182; // [rsp+20h] [rbp-2A8h]
  _QWORD *v183; // [rsp+28h] [rbp-2A0h]
  unsigned __int8 v184; // [rsp+28h] [rbp-2A0h]
  __int64 v185; // [rsp+28h] [rbp-2A0h]
  __int64 v186; // [rsp+28h] [rbp-2A0h]
  __int64 v187; // [rsp+28h] [rbp-2A0h]
  bool v188; // [rsp+28h] [rbp-2A0h]
  __int64 v189; // [rsp+28h] [rbp-2A0h]
  int v190; // [rsp+30h] [rbp-298h]
  char v191; // [rsp+30h] [rbp-298h]
  int v192; // [rsp+30h] [rbp-298h]
  __int64 v193; // [rsp+30h] [rbp-298h]
  __int64 v194; // [rsp+38h] [rbp-290h]
  unsigned int v195; // [rsp+38h] [rbp-290h]
  int v196; // [rsp+38h] [rbp-290h]
  char v197; // [rsp+43h] [rbp-285h]
  unsigned int v198; // [rsp+44h] [rbp-284h]
  int v199; // [rsp+44h] [rbp-284h]
  __int64 v200; // [rsp+48h] [rbp-280h]
  int v201; // [rsp+58h] [rbp-270h]
  int v202; // [rsp+5Ch] [rbp-26Ch]
  __int64 *v203; // [rsp+60h] [rbp-268h] BYREF
  __int64 v204; // [rsp+68h] [rbp-260h] BYREF
  __m128 v205; // [rsp+70h] [rbp-258h] BYREF
  __int64 v206; // [rsp+80h] [rbp-248h]
  int v207; // [rsp+88h] [rbp-240h]
  __int64 v208; // [rsp+90h] [rbp-238h] BYREF
  __int128 v209; // [rsp+98h] [rbp-230h]
  __int64 v210; // [rsp+A8h] [rbp-220h]
  __int64 v211; // [rsp+B0h] [rbp-218h]
  __int64 v212; // [rsp+B8h] [rbp-210h]
  __int128 v213; // [rsp+C0h] [rbp-208h]
  __int64 v214; // [rsp+D0h] [rbp-1F8h]
  __int128 v215; // [rsp+D8h] [rbp-1F0h]
  char v216; // [rsp+E8h] [rbp-1E0h]
  __int64 (__fastcall **v217)(); // [rsp+F0h] [rbp-1D8h] BYREF
  int v218; // [rsp+F8h] [rbp-1D0h]
  __int64 v219; // [rsp+100h] [rbp-1C8h]
  __int128 v220; // [rsp+108h] [rbp-1C0h]
  __int64 v221; // [rsp+118h] [rbp-1B0h]
  __int128 v222; // [rsp+120h] [rbp-1A8h]
  __int64 v223[2]; // [rsp+130h] [rbp-198h] BYREF
  __int64 v224; // [rsp+140h] [rbp-188h]
  __int128 v225; // [rsp+148h] [rbp-180h]
  char v226; // [rsp+158h] [rbp-170h]
  int *v227; // [rsp+160h] [rbp-168h] BYREF
  __int128 v228; // [rsp+168h] [rbp-160h]
  __int64 v229; // [rsp+180h] [rbp-148h]
  __int64 v230; // [rsp+188h] [rbp-140h]
  __int64 v231; // [rsp+1B8h] [rbp-110h]
  __int64 v232; // [rsp+1C0h] [rbp-108h]
  __int64 v233; // [rsp+1D0h] [rbp-F8h]
  __int64 v234; // [rsp+1D8h] [rbp-F0h]
  __int64 v235[6]; // [rsp+1E8h] [rbp-E0h] BYREF
  __int64 v236; // [rsp+218h] [rbp-B0h] BYREF
  __int128 v237; // [rsp+220h] [rbp-A8h]
  __int64 v238; // [rsp+230h] [rbp-98h] BYREF
  __int128 v239; // [rsp+238h] [rbp-90h]
  __int64 v240; // [rsp+248h] [rbp-80h]
  __int128 v241; // [rsp+250h] [rbp-78h]
  __int64 v242; // [rsp+260h] [rbp-68h]
  __int64 v243; // [rsp+268h] [rbp-60h]
  __int64 v244; // [rsp+270h] [rbp-58h]
  __int64 v245; // [rsp+278h] [rbp-50h]
  char v246; // [rsp+280h] [rbp-48h]
  unsigned __int64 v247; // [rsp+288h] [rbp-40h]

  v247 = __readfsqword(0x28u);
  v3 = a1[1];
  v197 = *(_BYTE *)(v3 + 320);
  if ( v197 || (*(_BYTE *)(v3 + 5) & 4) != 0 )
    return v247 - __readfsqword(0x28u);
  v200 = *(_QWORD *)(v3 + 1504);
  if ( *(_DWORD *)(v3 + 72) == 48 && (*(_BYTE *)(*(_QWORD *)(v3 + 1504) + 48LL) & 8) == 0 )
  {
    if ( !under_debugger )
      sub_383060(0xCA5Au, a2);
    goto LABEL_442;
  }
  v201 = sub_19F880(*(_QWORD *)(v3 + 936), a2);
  v217 = off_4E62C8;
  v218 = 0;
  v219 = 0;
  v221 = 0;
  v223[0] = 0;
  v223[1] = 0;
  v224 = 0;
  v226 = 0;
  v220 = 0;
  v222 = 0;
  v225 = 0;
  sub_255A80((__int64 *)&v217, (__int64)(a1 + 2), 0, 0.0);
  v182 = v223;
  if ( v226 )
    v182 = nullptr;
  v5 = a1[1];
  v6 = *(_DWORD *)(v5 + 72);
  v183 = *(_QWORD **)(v5 + 1504);
  v198 = v6;
  if ( sub_36F620((__int64)v183, v6, 0.0) )
    goto LABEL_56;
  v202 = *(_DWORD *)(*(_QWORD *)(v5 + 1504) + 80LL);
  v7 = *(_DWORD *)(v5 + 68);
  if ( v6 == 48 )
  {
    v8 = 0;
    v227 = nullptr;
    v228 = 0;
    if ( v7 > 0 )
    {
      v174 = 0;
      goto LABEL_10;
    }
LABEL_169:
    v174 = v6 == 48 || v6 == 144;
    goto LABEL_10;
  }
  v174 = 0;
  v228 = 0;
  v227 = nullptr;
  v8 = v6 - 208 > 0x2F;
  if ( v7 <= 0 )
  {
    if ( ((v6 - 112) & 0xFFFFFFEF) == 0 )
    {
      v174 = 1;
      v8 = 1;
      goto LABEL_10;
    }
    goto LABEL_169;
  }
LABEL_10:
  v9 = *(_DWORD *)(v5 + 464) - 1;
  if ( v9 < 0 )
    goto LABEL_56;
  v172 = -1;
  v10 = *(_DWORD *)(v5 + 464) - 1;
  v11 = 4LL * (unsigned int)v9;
  do
  {
    if ( !v10 )
    {
      if ( (unsigned __int8)sub_36E1B0(v5, 0.0) )
        break;
      v61 = *(_DWORD *)(v5 + 72) & 0xFFFFFFF0;
      if ( (v61 == 64 || v61 == 208) && *(_QWORD *)(v5 + 464) == 1 )
        break;
    }
    v12 = *(_DWORD *)(*(_QWORD *)(v5 + 456) + v11);
    v13 = *(_QWORD *)(v5 + 432) + 104LL * v12;
    if ( (*(_BYTE *)(v13 + 26) & 8) != 0
      || v182 != nullptr
      && v198 - 208 <= 0x2F
      && (v194 = *(_QWORD *)(v5 + 432) + 104LL * *(int *)(*(_QWORD *)(v5 + 456) + v11),
          v190 = *(_DWORD *)(*(_QWORD *)(v5 + 456) + v11),
          v70 = sub_64930(v182, v12),
          v12 = v190,
          v13 = v194,
          !v70) )
    {
      if ( (unsigned int)(*(_DWORD *)v13 - 3) <= 1 || v9 == v10 && v174 )
      {
        v14 = *(_DWORD *)(v13 + 24);
        --v9;
        BYTE1(v14) &= 0x7Eu;
        *(_DWORD *)(v13 + 24) = v14 | 0x100000;
        memmove(
          (void *)(v11 + *(_QWORD *)(v5 + 456)),
          (const void *)(v11 + *(_QWORD *)(v5 + 456) + 4),
          4LL * *(_QWORD *)(v5 + 464) - 4 - v11);
        --*(_QWORD *)(v5 + 464);
        goto LABEL_16;
      }
      if ( v8 )
      {
        if ( *(_DWORD *)v13 == 1 )
        {
          v59 = v228;
          v60 = (__int64)v227;
          if ( *((_QWORD *)&v228 + 1) < (unsigned __int64)(v228 + 1) )
          {
            v192 = v12;
            v227 = (int *)qvector_reserve((__int64)&v227, (__int64)v227, v228 + 1, 4);
            v60 = (__int64)v227;
            v12 = v192;
            v59 = v228;
          }
          *(_DWORD *)(v60 + 4 * v59) = v12;
          *(_QWORD *)&v228 = v228 + 1;
        }
        goto LABEL_16;
      }
      goto LABEL_15;
    }
    if ( *(_DWORD *)v13 == 1 )
    {
      if ( v8 )
      {
        v71 = (get_tinfo_property() & 0xF) == 9;
        if ( v172 == -1 )
          v172 = v71;
        else
          v8 = v71 == v172;
        goto LABEL_16;
      }
LABEL_15:
      v8 = 0;
    }
LABEL_16:
    --v10;
    v11 -= 4;
  }
  while ( v10 != -1 );
  v23 = (__int64)v227;
  if ( v172 == -1 )
    goto LABEL_54;
  if ( !v8 )
    goto LABEL_54;
  v62 = &v227[v228];
  if ( v62 == v227 )
    goto LABEL_54;
  v63 = v227;
  while ( 2 )
  {
    v64 = (_DWORD *)(*(_QWORD *)(v5 + 432) + 104LL * *v63);
    if ( (v172 & 1) != ((get_tinfo_property() & 0xF) == 9) )
    {
      v65 = 0;
      v66 = v64[22];
      if ( v172 != 1 || (v170 = v64[22], v67 = sub_11CB40(v66), v66 = v170, v65 = 1, v67) )
      {
LABEL_137:
        sub_1EF680(v64, v183, v66, v65, 0.0);
      }
      else
      {
        v68 = v198;
        if ( v198 <= 0x10 )
        {
          v68 = getinf();
          v66 = v170;
        }
        v171 = v66;
        if ( v68 != 176 && v68 != 256 && !(unsigned __int8)getinf_flag() )
        {
          v69 = v171 & -v202;
          if ( v69 <= 0 )
            v69 = 1;
          v66 = sub_11CB60(v69, -v202 & (unsigned int)(v202 + v171 - 1));
          if ( v66 != -1 )
          {
            v65 = 1;
            goto LABEL_137;
          }
        }
      }
    }
    if ( v62 != ++v63 )
      continue;
    break;
  }
  v23 = (__int64)v227;
LABEL_54:
  if ( v23 )
  {
    *(_QWORD *)&v228 = 0;
    qfree(v23);
  }
LABEL_56:
  sub_1A5BE0(*(_QWORD **)(a1[1] + 936));
  sub_37BF90(a1[1], ((*(_BYTE *)(a1[27] + 606) & 0x10) != 0) + 2, 0.0, a3);
  v24 = a1[1];
  v25 = *(_DWORD *)(v24 + 72);
  sub_D10B0((__int64)&v227, *(_QWORD *)(v24 + 1496), 0x10u);
  v26 = 0;
  memset(v235, 0, sizeof(v235));
  v236 = 0;
  v238 = 0;
  v240 = 0;
  v242 = 0;
  v243 = 0;
  v244 = 0;
  v237 = 0;
  v239 = 0;
  v241 = 0;
  v245 = sub_369E90((__int64)&v227, v24, v25);
  v27 = sub_D81C0(v245, v235, v24, (__m128)0LL, a3);
  v20 = a1[1];
  v246 = v27;
  if ( (unsigned int)(*(_DWORD *)(v20 + 72) - 208) <= 0x2F )
  {
    if ( v27 )
    {
      v28 = v245;
      goto LABEL_59;
    }
LABEL_36:
    v21 = sub_13D300((_QWORD *)v20, 3);
    goto LABEL_37;
  }
  v28 = v245;
  if ( !*(_DWORD *)(v245 + 4) )
  {
    sub_1990E0(v235);
    if ( v233 )
    {
      v234 = 0;
      qfree(v233);
    }
    if ( v231 )
    {
      v232 = 0;
      qfree(v231);
    }
    if ( v229 )
    {
      v230 = 0;
      qfree(v229);
    }
    if ( (_QWORD)v228 )
    {
      *((_QWORD *)&v228 + 1) = 0;
      qfree(v228);
    }
    v217 = off_4E62C8;
    if ( v224 )
    {
      *(_QWORD *)&v225 = 0;
      qfree(v224);
    }
    qfree(v223[0]);
    v217 = off_4DBCF8;
    if ( v221 )
    {
      *(_QWORD *)&v222 = 0;
      qfree(v221);
    }
    if ( v219 )
    {
      *(_QWORD *)&v220 = 0;
      qfree(v219);
    }
    return v247 - __readfsqword(0x28u);
  }
  if ( !v27 )
  {
    if ( !under_debugger )
      sub_383060(0xCB70u, 0.0);
    goto LABEL_442;
  }
LABEL_59:
  tinfo_details = sub_36F620(*(_QWORD *)(v20 + 1504), *(_DWORD *)(v28 + 72), 0.0);
  if ( tinfo_details )
  {
    tinfo_details = 0;
    goto LABEL_74;
  }
  if ( *(_QWORD *)(v245 + 96) && *(_QWORD *)(v245 + 120) )
  {
    v26 = 0;
    v204 = 0;
    v206 = 0;
    v203 = (__int64 *)&v227;
    v207 = 0;
    v208 = 0;
    v210 = 0;
    v211 = 0;
    v212 = 0;
    v214 = 0;
    v216 = 16;
    v205 = 0;
    v209 = 0;
    v213 = 0;
    v215 = 0;
    if ( *(_DWORD *)v245 == 5 )
      goto LABEL_63;
    tinfo_details = get_tinfo_details();
    if ( tinfo_details )
    {
      if ( (_QWORD)v209 )
      {
        v84 = 0;
        v85 = 0;
        while ( 1 )
        {
          v86 = v208 + 80 * v85;
          if ( (unsigned int)(*(_DWORD *)v86 - 3) > 1 )
            goto LABEL_233;
          v87 = *(unsigned __int16 *)(v86 + 8);
          v88 = *(_DWORD **)(v245 + 8);
          v89 = &v88[*(_QWORD *)(v245 + 16)];
          if ( v88 == v89 )
            break;
          v90 = *(_DWORD **)(v245 + 8);
          while ( v87 != *v90 )
          {
            if ( v89 == ++v90 )
              goto LABEL_263;
          }
          if ( v89 == v90 )
            break;
          v91 = v90 - v88;
          LODWORD(v92) = v91;
          if ( (_DWORD)v91 == -1 )
            break;
          if ( *(_DWORD *)v245 == 3 )
          {
            v103 = v91;
            goto LABEL_250;
          }
          if ( (int)v91 < (unsigned __int64)v237
            && !(unsigned __int8)sub_36B7F0((__int64)&v203, (_QWORD *)v20, v91, 0, (_DWORD *)v86, 0.0) )
          {
            goto LABEL_233;
          }
LABEL_232:
          v85 = ++v84;
          if ( v84 >= (unsigned __int64)v209 )
            goto LABEL_233;
        }
LABEL_263:
        v109 = *(_DWORD **)(v245 + 32);
        v110 = &v109[*(_QWORD *)(v245 + 40)];
        if ( v109 == v110 )
          goto LABEL_233;
        v111 = *(_DWORD **)(v245 + 32);
        while ( v87 != *v111 )
        {
          if ( v110 == ++v111 )
            goto LABEL_233;
        }
        if ( v110 == v111 )
          goto LABEL_233;
        v92 = v111 - v109;
        v103 = v92;
        if ( (_DWORD)v92 == -1 )
          goto LABEL_233;
        if ( *(_DWORD *)v245 != 3 )
          LODWORD(v92) = -1;
LABEL_250:
        v104 = v203[35];
        v105 = *(_QWORD *)(v104 + 80);
        if ( *(_DWORD *)(*(_QWORD *)(v105 + 8) + 4LL) != 13 && *(_QWORD *)(v104 + 120) )
        {
          v185 = v86;
          v106 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v105 + 112) + 200LL))(
                   *(_QWORD *)(v105 + 112),
                   **(unsigned int **)(v104 + 112));
          v86 = v185;
          if ( v106 )
          {
            v156 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v104 + 80) + 112LL) + 32LL))(
                     *(_QWORD *)(*(_QWORD *)(v104 + 80) + 112LL),
                     **(unsigned int **)(v104 + 112));
            v86 = v185;
            if ( *(_QWORD *)(v104 + 120) > 1u
              && *(_DWORD *)(*(_QWORD *)(v104 + 112) + 4LL) - **(_DWORD **)(v104 + 112) < (unsigned int)v156 )
            {
              goto LABEL_377;
            }
          }
          else
          {
            if ( *(_QWORD *)(v104 + 120) <= 1u
              || (unsigned int)(*(_DWORD *)(*(_QWORD *)(v104 + 112) + 4LL) - **(_DWORD **)(v104 + 112)) > 7 )
            {
              goto LABEL_255;
            }
LABEL_377:
            v189 = v86;
            v156 = round_down_power2();
            v86 = v189;
          }
          if ( v156 <= 7 && (v206 & 0x100000000LL) != 0 )
            ++HIDWORD(v206);
        }
LABEL_255:
        v107 = v103;
        if ( v103 < (unsigned __int64)v239 )
        {
          if ( *(_DWORD *)v245 != 4
            || (v187 = v86, v146 = sub_369A00((__int64)&v203, (_QWORD *)v20, v103, 0.0), v86 = v187, v146) )
          {
            v186 = v86;
            if ( !(unsigned __int8)sub_36B7F0((__int64)&v203, (_QWORD *)v20, v103, 1, (_DWORD *)v86, 0.0) )
              goto LABEL_233;
            if ( (_DWORD)v92 != -1 )
            {
              if ( *(_DWORD *)v245 != 3 || v103 != (_DWORD)v92 )
              {
                if ( !under_debugger )
                  sub_383060(0xCB62u, 0.0);
                goto LABEL_442;
              }
              v108 = sub_13D280((_QWORD *)v20, *(_DWORD *)(v236 + 4LL * (int)v92), 0.0);
              if ( (*(_BYTE *)(v108 + 26) & 8) != 0 )
              {
                v193 = v186;
                v188 = (get_tinfo_property() & 0xF) == 9;
                if ( v188 != ((get_tinfo_property() & 0xF) == 9) )
                {
                  if ( *(_DWORD *)v108 != 3 )
                  {
                    if ( !under_debugger )
                      sub_383060(0xCB63u, 0.0);
                    goto LABEL_442;
                  }
                  if ( *(_DWORD *)v193 != 3 )
                  {
                    if ( !under_debugger )
                      sub_383060(0xCB64u, 0.0);
                    goto LABEL_442;
                  }
                  if ( *(_DWORD *)(v238 + 4LL * (int)v92) != *(_DWORD *)(v236 + 4 * v107) )
                  {
                    if ( !under_debugger )
                      sub_383060(0xCB65u, 0.0);
                    goto LABEL_442;
                  }
                  v155 = *(_DWORD *)(*(_QWORD *)(v245 + 88) + 4LL * (int)v92);
                  cleanup_argloc();
                  *(_DWORD *)(v108 + 8) = v155;
                  *(_DWORD *)v108 = 3;
                  sub_1EF8F0(v108, *(_QWORD *)(v20 + 1504), (_BYTE *)(v193 + 64), 0, 0.0);
                }
              }
              LODWORD(v206) = HIDWORD(v206);
            }
          }
        }
        goto LABEL_232;
      }
LABEL_233:
      v93 = *(_QWORD *)(v20 + 456);
      v94 = v204;
      v95 = v205.m128_u64[0];
LABEL_234:
      v96 = (int *)(v93 + 4LL * *(_QWORD *)(v20 + 464));
      if ( v96 != (int *)v93 )
      {
        v97 = (int *)v93;
        do
        {
          v98 = (_DWORD *)(v94 + 4 * v95);
          v99 = *v97;
          if ( (_DWORD *)v94 == v98 )
            goto LABEL_246;
          v100 = (_DWORD *)v94;
          while ( v99 != *v100 )
          {
            if ( v98 == ++v100 )
              goto LABEL_246;
          }
          if ( v98 == v100 )
          {
LABEL_246:
            v102 = v95 + 1;
            if ( v205.m128_u64[1] < v102 )
            {
              v204 = qvector_reserve((__int64)&v204, v94, v102, 4);
              v98 = (_DWORD *)(v204 + 4 * v205.m128_u64[0]);
            }
            *v98 = v99;
            v94 = v204;
            v95 = ++v205.m128_u64[0];
          }
          ++v97;
        }
        while ( v96 != v97 );
        v93 = *(_QWORD *)(v20 + 456);
      }
      *(_QWORD *)(v20 + 456) = v94;
      tinfo_details = 1;
      a3 = _mm_loadh_ps((const double *)(v20 + 472));
      v26 = _mm_loadh_ps((const double *)&v205.m128_u64[1]);
      *(__m128 *)(v20 + 464) = v26;
      v101 = v214;
      v204 = v93;
      v205 = a3;
LABEL_244:
      if ( v101 )
      {
        *(_QWORD *)&v215 = 0;
        qfree(v101);
      }
LABEL_63:
      cleanup_argloc();
      clear_tinfo_t();
      v30 = v208;
      if ( v208 )
      {
        v31 = v209;
        if ( (_QWORD)v209 )
        {
          v32 = 0;
          do
          {
            v33 = (_QWORD *)(v30 + 80 * v32);
            clear_tinfo_t();
            v34 = v33[5];
            if ( v34 )
            {
              v33[6] = 0;
              qfree(v34);
            }
            v35 = v33[2];
            if ( v35 )
            {
              v33[3] = 0;
              qfree(v35);
            }
            ++v32;
            cleanup_argloc();
            v30 = v208;
          }
          while ( v31 != v32 );
        }
        *(_QWORD *)&v209 = 0;
        qfree(v30);
      }
      if ( v204 )
      {
        v205.m128_u64[0] = 0;
        qfree(v204);
      }
      goto LABEL_74;
    }
    if ( ((*(_DWORD *)v245 - 3) & 0xFFFFFFFD) == 0 )
    {
      v101 = v214;
      goto LABEL_244;
    }
    v93 = *(_QWORD *)(v20 + 456);
    v124 = (int *)(v93 + 4LL * *(_QWORD *)(v20 + 464));
    if ( (int *)v93 == v124 )
    {
LABEL_320:
      v134 = v237;
      v135 = (int)v206;
      v136 = &v236;
      v137 = v206;
      if ( (__int64)v237 - SHIDWORD(v206) < (unsigned __int64)(v237 - (int)v206) )
      {
        v134 = v239;
        v135 = SHIDWORD(v206);
        v137 = HIDWORD(v206);
        v136 = &v238;
      }
      v94 = v204;
      v95 = v205.m128_u64[0];
      if ( v135 < v134 )
      {
        do
        {
          v138 = *(int *)(*v136 + 4 * v135);
          if ( (_DWORD)v138 == -1 )
            break;
          v139 = (_DWORD *)(v94 + 4 * v95);
          v140 = *(_DWORD *)(v93 + 4 * v138);
          if ( v139 == (_DWORD *)v94 )
            goto LABEL_334;
          v141 = (_DWORD *)v94;
          while ( v140 != *v141 )
          {
            if ( v139 == ++v141 )
              goto LABEL_334;
          }
          if ( v139 == v141 )
          {
LABEL_334:
            if ( v205.m128_u64[1] < v95 + 1 )
            {
              v204 = qvector_reserve((__int64)&v204, v94, v95 + 1, 4);
              v139 = (_DWORD *)(v204 + 4 * v205.m128_u64[0]);
            }
            *v139 = v140;
            v94 = v204;
            v95 = ++v205.m128_u64[0];
            v93 = *(_QWORD *)(v20 + 456);
          }
          v135 = ++v137;
        }
        while ( v137 < (unsigned __int64)v136[1] );
      }
      goto LABEL_234;
    }
    v125 = *(int **)(v20 + 456);
    while ( 2 )
    {
      v126 = (_DWORD *)(*(_QWORD *)(v20 + 432) + 104LL * *v125);
      if ( (unsigned int)(*v126 - 3) > 1 )
      {
LABEL_319:
        v93 = *(_QWORD *)(v20 + 456);
        goto LABEL_320;
      }
      v127 = v126[2];
      v128 = *(_DWORD **)(v245 + 88);
      if ( *v126 == 4 )
        v127 = (unsigned __int16)v127;
      v129 = &v128[*(_QWORD *)(v245 + 96)];
      if ( v128 == v129 )
        goto LABEL_337;
      v130 = *(_DWORD **)(v245 + 88);
      while ( v127 != *v130 )
      {
        if ( v129 == ++v130 )
          goto LABEL_337;
      }
      if ( v130 == v129 || (v131 = v130 - v128, v131 == -1) )
      {
LABEL_337:
        v142 = *(_DWORD **)(v245 + 112);
        v143 = &v142[*(_QWORD *)(v245 + 120)];
        if ( v142 == v143 )
          goto LABEL_319;
        v144 = *(_DWORD **)(v245 + 112);
        while ( v127 != *v144 )
        {
          if ( v143 == ++v144 )
            goto LABEL_319;
        }
        if ( v143 == v144 )
          goto LABEL_319;
        v145 = v144 - v142;
        if ( v145 == -1 )
          goto LABEL_319;
        v132 = v126[6] & 0x80000;
        if ( *(_DWORD *)v245 != 3 )
        {
          if ( !v132 )
          {
            if ( *(_DWORD *)v245 != 4
              || (v181 = v145, v157 = sub_369A00((__int64)&v203, (_QWORD *)v20, v145, 0.0), v145 = v181, v157) )
            {
              v133 = sub_36B7F0((__int64)&v203, (_QWORD *)v20, v145, 1, nullptr, 0.0);
              goto LABEL_317;
            }
          }
LABEL_318:
          if ( v124 == ++v125 )
            goto LABEL_319;
          continue;
        }
      }
      else
      {
        v132 = v126[6] & 0x80000;
        if ( *(_DWORD *)v245 != 3 )
        {
          if ( !v132 )
          {
            v133 = sub_36B7F0((__int64)&v203, (_QWORD *)v20, v131, 0, nullptr, 0.0);
LABEL_317:
            if ( !v133 )
            {
              if ( !under_debugger )
                sub_383060(0xCB67u, 0.0);
              goto LABEL_442;
            }
          }
          goto LABEL_318;
        }
      }
      break;
    }
    if ( !v132 )
    {
      if ( !under_debugger )
        sub_383060(0xCB66u, 0.0);
      goto LABEL_442;
    }
    goto LABEL_318;
  }
LABEL_74:
  v36 = a1[1];
  v19 = *(_DWORD *)(v36 + 72);
  v18 = v36;
  if ( v19 <= 0x10 )
  {
    v15 = getinf();
    if ( v15 != 256 && v15 != 176 )
    {
      if ( (unsigned __int8)getinf_flag() )
      {
        v16 = getinf();
        if ( v16 != 176 && v16 != 256 )
          goto LABEL_185;
      }
    }
LABEL_28:
    v17 = a1[1];
    goto LABEL_29;
  }
  if ( v19 == 176 || v19 == 256 )
  {
    if ( tinfo_details )
      goto LABEL_30;
    goto LABEL_34;
  }
  if ( !(unsigned __int8)getinf_flag() )
    goto LABEL_28;
LABEL_185:
  v191 = getinf_flag();
  if ( v191 )
    goto LABEL_28;
  v73 = *(_QWORD *)(v36 + 464);
  if ( !v73 )
    goto LABEL_28;
  v74 = sub_13D280((_QWORD *)v36, (int)v73 - 1, *(double *)v26.m128_u64);
  LODWORD(v73) = v73 - 2;
  if ( (int)v73 < 0 )
    goto LABEL_28;
  v73 = (int)v73;
  while ( 2 )
  {
    v77 = sub_13D280((_QWORD *)v36, v73, *(double *)v26.m128_u64);
    v78 = v77;
    if ( !v74 || (*(_BYTE *)(v77 + 26) & 8) == 0 && sub_64930(v223, *(_DWORD *)(*(_QWORD *)(v36 + 456) + 4 * v73)) )
      goto LABEL_199;
    v177 = *(_DWORD *)(v245 + 72);
    v173 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v245 + 80) + 112LL) + 80LL);
    LODWORD(v203) = 0;
    get_tinfo_size();
    v76 = (int)v203;
    v79 = v177;
    if ( ((unsigned int)v203 & ((_DWORD)v203 - 1)) != 0 )
    {
      sub_369DE0();
LABEL_427:
      if ( !under_debugger )
        sub_383060(0xCB7Fu, *(double *)v26.m128_u64);
      goto LABEL_442;
    }
    v80 = 2 * v173;
    if ( (int)v203 <= 2 * v173 )
    {
      if ( v173 <= (int)v203 )
      {
        if ( v177 > 0x10 )
        {
LABEL_273:
          if ( v79 != 176 && v79 != 256 )
            goto LABEL_193;
          goto LABEL_199;
        }
LABEL_355:
        v180 = v76;
        v147 = getinf();
        v76 = v180;
        v79 = v147;
        goto LABEL_273;
      }
      if ( v177 > 0x10 )
      {
LABEL_191:
        if ( v79 != 176 && v79 != 256 )
          goto LABEL_193;
        goto LABEL_194;
      }
LABEL_213:
      v179 = v76;
      v82 = getinf();
      v76 = v179;
      v79 = v82;
      goto LABEL_191;
    }
    if ( v177 <= 0x10 )
    {
      v196 = (int)v203;
      v153 = getinf();
      v80 = 2 * v173;
      if ( v153 != 176 && v153 != 256 )
      {
        v76 = v196;
        v79 = v177;
        goto LABEL_209;
      }
      if ( v173 <= v80 )
      {
LABEL_354:
        v76 = v80;
        goto LABEL_355;
      }
LABEL_212:
      v76 = v80;
      goto LABEL_213;
    }
    if ( v177 == 176 || v177 == 256 )
      goto LABEL_199;
LABEL_209:
    v199 = v80;
    v195 = v79;
    v178 = v76;
    v81 = getinf_flag();
    v76 = v178;
    if ( v81 )
      goto LABEL_194;
    v80 = v199;
    if ( v173 <= v199 )
    {
      v76 = v199;
      if ( v195 > 0x10 )
        goto LABEL_193;
      goto LABEL_354;
    }
    v76 = v199;
    if ( v195 <= 0x10 )
      goto LABEL_212;
LABEL_193:
    v176 = v76;
    v75 = getinf_flag();
    v76 = v176;
    if ( !v75 )
      goto LABEL_199;
LABEL_194:
    if ( v173 != *(_DWORD *)(v78 + 88) || v173 >= v76 )
      goto LABEL_199;
    if ( *(_DWORD *)v78 == 1 )
    {
      if ( *(_DWORD *)v74 != 1 )
        goto LABEL_199;
      v148 = v76;
      v149 = *(_QWORD *)(v78 + 8) % v76;
      if ( (*(_BYTE *)(v78 + 26) & 8) == 0 )
      {
        if ( v149 && !(*(_QWORD *)(v74 + 8) % v148) )
          goto LABEL_360;
        goto LABEL_199;
      }
      if ( !v149 )
        goto LABEL_427;
      if ( *(_QWORD *)(v74 + 8) % v148 )
      {
        if ( !under_debugger )
          sub_383060(0xCB80u, *(double *)v26.m128_u64);
        goto LABEL_442;
      }
LABEL_360:
      v150 = *(_QWORD *)(v36 + 456) + 4 * v73;
      v151 = *(_QWORD *)(v36 + 464) - v73--;
      memmove((void *)v150, (const void *)(v150 + 4), 4 * v151 - 4);
      --*(_QWORD *)(v36 + 464);
      v152 = *(_DWORD *)(v78 + 24);
      BYTE1(v152) &= 0x7Eu;
      *(_DWORD *)(v78 + 24) = v152 | 0x100000;
      if ( (int)v73 < 0 )
      {
        v18 = a1[1];
        goto LABEL_30;
      }
      v191 = 1;
      v74 = sub_13D280((_QWORD *)v36, v73, *(double *)v26.m128_u64);
    }
    else
    {
      if ( *(_DWORD *)v78 == 3 && (unsigned int)(*(_DWORD *)v74 - 3) <= 1 )
      {
        v158 = *(_DWORD **)(v245 + 88);
        v159 = *(_QWORD *)(v245 + 96);
        v160 = &v158[v159];
        if ( v158 != v160 )
        {
          v161 = *(_DWORD **)(v245 + 88);
          while ( *(_DWORD *)(v78 + 8) != *v161 )
          {
            if ( v160 == ++v161 )
              goto LABEL_199;
          }
          if ( v160 != v161 )
          {
            v162 = v161 - v158;
            if ( v162 != -1 && *(_DWORD *)v245 != 3 && v162 % (v76 / v173) )
            {
              v163 = v159 - 1;
              if ( (_DWORD)v159 - 1 == v162 )
              {
                if ( (v163 & 1) != 0 )
                {
                  v169 = *(_DWORD *)(v245 + 72) & 0xFFFFFFF0;
                  if ( v169 != 64 && v169 != 208 && (unsigned __int8)sub_64880(v235) )
                    goto LABEL_360;
                }
              }
              else
              {
                if ( v163 <= v162 )
                {
                  if ( !under_debugger )
                    sub_383060(0xCCF9u, *(double *)v26.m128_u64);
                  goto LABEL_442;
                }
                v164 = v162 + 1;
                if ( !(v164 % (v76 / v173)) )
                {
                  v165 = *(_DWORD *)(v74 + 8);
                  if ( *(_DWORD *)v74 == 4 )
                    v165 = (unsigned __int16)v165;
                  if ( v165 == v158[v164] )
                    goto LABEL_360;
                }
              }
            }
          }
        }
      }
LABEL_199:
      v74 = v78;
    }
    if ( (int)--v73 >= 0 )
      continue;
    break;
  }
  v17 = a1[1];
  v18 = v17;
  if ( v191 )
    goto LABEL_30;
LABEL_29:
  v18 = v17;
  if ( tinfo_details )
  {
LABEL_30:
    if ( !(unsigned __int8)sub_D81C0(v245, v235, v18, v26, a3) )
    {
      if ( !under_debugger )
        sub_383060(0xCB6Bu, *(double *)v26.m128_u64);
      goto LABEL_442;
    }
    v17 = a1[1];
  }
  v19 = *(_DWORD *)(v17 + 72);
  if ( v19 <= 0x10 )
    v19 = getinf();
LABEL_34:
  if ( v19 != 176 )
  {
    v20 = a1[1];
    goto LABEL_36;
  }
  if ( (unsigned __int64)getinf() > 0x397 )
  {
    v20 = a1[1];
    goto LABEL_158;
  }
  v184 = getinf_flag();
  if ( v184 )
  {
    netnode_check();
    v154 = netnode_altval();
    if ( v154 > 0x74 )
    {
      v166 = *(_DWORD *)(get_ph() + 4);
      v20 = a1[1];
      if ( !v166 )
        goto LABEL_158;
      v167 = (unsigned int)(v166 - 13);
      if ( (unsigned int)v167 <= 0x3B )
      {
        v168 = 0x800000000000005LL;
        v184 = _bittest64(&v168, v167);
        if ( !v184 )
        {
          v83 = sub_13D300((_QWORD *)v20, 3);
          goto LABEL_217;
        }
        if ( v154 != 117 )
        {
LABEL_158:
          v72 = *(int *)(v20 + 480);
          if ( (_DWORD)v72 != -1 )
          {
            v184 = sub_369E00(*(_QWORD *)(v20 + 432) + 104 * v72, *(double *)v26.m128_u64);
            v175 = sub_13D300((_QWORD *)a1[1], 3);
            if ( !v175 )
            {
              if ( v184 )
                goto LABEL_106;
              goto LABEL_38;
            }
            goto LABEL_84;
          }
        }
      }
      goto LABEL_36;
    }
    v21 = sub_13D300((_QWORD *)a1[1], 3);
LABEL_37:
    v175 = v21;
    if ( !v21 )
      goto LABEL_38;
    v184 = 0;
    goto LABEL_84;
  }
  v83 = sub_13D300((_QWORD *)a1[1], 3);
LABEL_217:
  v175 = v83;
  if ( !v83 )
    goto LABEL_38;
LABEL_84:
  v37 = a1[6];
  v38 = a1[1];
  v39 = *(_DWORD *)(v37 + 8) - 1;
  if ( v39 < 0 )
    goto LABEL_107;
  v40 = v175;
  v41 = 4LL * (unsigned int)v39;
  while ( 2 )
  {
    v42 = *(int *)(*(_QWORD *)v37 + v41);
    v43 = *(_QWORD *)(v38 + 432) + 104 * v42;
    if ( (unsigned int)(*(_DWORD *)v43 - 3) > 1 )
    {
LABEL_88:
      --v39;
      v41 -= 4;
      if ( v39 == -1 )
        goto LABEL_94;
      v37 = a1[6];
      continue;
    }
    break;
  }
  if ( !v39 && (unsigned __int8)sub_36E1B0(v38, *(double *)v26.m128_u64) )
    goto LABEL_93;
  if ( !sub_64930(v223, v42) )
  {
    v38 = a1[1];
    --v40;
    goto LABEL_88;
  }
  if ( (*(_BYTE *)(v43 + 26) & 8) != 0 && v201 != (_DWORD)v42 )
  {
    if ( !under_debugger )
      sub_383060(0xCB71u, *(double *)v26.m128_u64);
    goto LABEL_442;
  }
LABEL_93:
  v38 = a1[1];
LABEL_94:
  if ( v175 != v40 )
  {
    v44 = (unsigned int)(*(_DWORD *)(v38 + 72) - 112);
    if ( (unsigned int)v44 > 0x20 || (v45 = 0x100010001LL, !_bittest64(&v45, v44)) )
    {
      if ( !v184 )
      {
        v46 = v40 == 0;
        goto LABEL_99;
      }
    }
    v53 = sub_13D300((_QWORD *)v38, 1);
    if ( v53 )
    {
      v54 = a1[6];
      v26.m128_u64[0] = 0;
      v208 = 0;
      v210 = 0;
      v211 = 0;
      v212 = 0;
      v214 = 0;
      v216 = 16;
      v209 = 0;
      v213 = 0;
      v215 = 0;
      if ( *(_QWORD *)(v54 + 8) )
      {
        v55 = 0;
        do
        {
          if ( (unsigned int)(*(_DWORD *)sub_13D280((_QWORD *)a1[1], v55, 0.0) - 3) > 1 )
          {
            v56 = v209;
            v57 = v208;
            if ( *((_QWORD *)&v209 + 1) < (unsigned __int64)(v209 + 1) )
            {
              v208 = qvector_reserve((__int64)&v208, v208, v209 + 1, 80);
              v57 = v208;
              v56 = v209;
            }
            v58 = 80 * v56 + v57;
            *(_DWORD *)v58 = 0;
            *(_QWORD *)(v58 + 8) = 0;
            *(_QWORD *)(v58 + 16) = 0;
            *(_QWORD *)(v58 + 40) = 0;
            *(_QWORD *)(v58 + 64) = 0;
            *(_DWORD *)(v58 + 72) = 0;
            *(_OWORD *)(v58 + 24) = 0;
            *(_OWORD *)(v58 + 48) = 0;
            *(_QWORD *)&v209 = v209 + 1;
            copy_tinfo_t();
          }
          ++v55;
        }
        while ( (unsigned __int64)v55 < *(_QWORD *)(a1[6] + 8) );
        v112 = v216 & 0xF;
      }
      else
      {
        v112 = 0;
      }
      v113 = *(_DWORD *)(a1[1] + 72);
      if ( (v113 & 0xFFFFFF0F) != 0 || v113 == 192 )
      {
        v114 = v112 | 0xC0;
      }
      else
      {
        v114 = v113 | v112;
        v113 = 0;
      }
      HIDWORD(v210) = v113;
      v216 = v114;
      v203 = (_QWORD *)&byte_1;
      copy_tinfo_t();
      clear_tinfo_t();
      if ( !(unsigned __int8)calc_arglocs() || !(_QWORD)v209 )
        goto LABEL_287;
      v115 = 0;
      v116 = 0;
      do
      {
        v117 = *(_DWORD *)(v208 + 80 * v116);
        if ( (unsigned int)(v117 - 3) <= 1 )
          break;
        ++v115;
        v53 -= v117 == 1;
        v116 = v115;
      }
      while ( v115 < (unsigned __int64)v209 );
      if ( (_QWORD)v209 == v116 && !v53 )
        sub_D6C60((_QWORD *)a1[1], v40, 0.0);
      else
LABEL_287:
        v197 = v40 == 0;
      if ( v214 )
      {
        *(_QWORD *)&v215 = 0;
        qfree(v214);
      }
      cleanup_argloc();
      clear_tinfo_t();
      v118 = v208;
      if ( v208 )
      {
        v119 = v209;
        if ( (_QWORD)v209 )
        {
          v120 = 0;
          do
          {
            v121 = (_QWORD *)(v118 + 80 * v120);
            clear_tinfo_t();
            v122 = v121[5];
            if ( v122 )
            {
              v121[6] = 0;
              qfree(v122);
            }
            v123 = v121[2];
            if ( v123 )
            {
              v121[3] = 0;
              qfree(v123);
            }
            ++v120;
            cleanup_argloc();
            v118 = v208;
          }
          while ( v119 != v120 );
        }
        *(_QWORD *)&v209 = 0;
        qfree(v118);
      }
      v38 = a1[1];
      if ( !v197 )
        goto LABEL_107;
LABEL_100:
      if ( (*(_BYTE *)(v200 + 48) & 8) == 0 && !v184 )
        goto LABEL_107;
      if ( (unsigned __int8)sub_36E1B0(v38, *(double *)v26.m128_u64)
        || ((v47 = *(_DWORD *)(v38 + 72) & 0xFFFFFFF0, v47 == 64) || v47 == 208) && *(_QWORD *)(v38 + 464) == v175 )
      {
        v38 = a1[1];
        goto LABEL_107;
      }
      sub_D6C60((_QWORD *)a1[1], 0, *(double *)v26.m128_u64);
LABEL_106:
      *(_DWORD *)(a1[1] + 72) = 0;
      sub_37BF90(a1[1], (*(_BYTE *)(a1[27] + 606) & 0x10) != 0, *(double *)v26.m128_u64, a3);
      v38 = a1[1];
      goto LABEL_107;
    }
    v38 = a1[1];
    v46 = v40 == 0;
LABEL_99:
    if ( v46 )
      goto LABEL_100;
  }
LABEL_107:
  v48 = sub_19F880(*(_QWORD *)(v38 + 936), *(double *)v26.m128_u64);
  if ( v201 != v48 )
  {
    v49 = v224;
    v50 = v224 + 8 * v225;
    if ( v50 != v224 )
    {
      while ( 1 )
      {
        v51 = *(__int64 **)(*(_QWORD *)v49 + 32LL);
        if ( v51[1] != 2 )
          break;
        v52 = *v51;
        if ( *(_DWORD *)(v52 + 80) != 65 )
        {
          if ( !under_debugger )
            sub_383060(0xCB73u, *(double *)v26.m128_u64);
          goto LABEL_442;
        }
        if ( *(_DWORD *)(v52 + 104) != v201 )
        {
          if ( !under_debugger )
            sub_383060(0xCB74u, *(double *)v26.m128_u64);
          goto LABEL_442;
        }
        v49 += 8;
        *(_DWORD *)(v52 + 104) = v48;
        if ( v50 == v49 )
          goto LABEL_38;
      }
      if ( !under_debugger )
        sub_383060(0xCB72u, *(double *)v26.m128_u64);
LABEL_442:
      BUG();
    }
  }
LABEL_38:
  sub_1990E0(v235);
  if ( v233 )
  {
    v234 = 0;
    qfree(v233);
  }
  if ( v231 )
  {
    v232 = 0;
    qfree(v231);
  }
  if ( v229 )
  {
    v230 = 0;
    qfree(v229);
  }
  if ( (_QWORD)v228 )
  {
    *((_QWORD *)&v228 + 1) = 0;
    qfree(v228);
  }
  v217 = off_4E62C8;
  if ( v224 )
  {
    *(_QWORD *)&v225 = 0;
    qfree(v224);
  }
  qfree(v223[0]);
  v217 = off_4DBCF8;
  if ( v221 )
  {
    *(_QWORD *)&v222 = 0;
    qfree(v221);
  }
  if ( v219 )
  {
    *(_QWORD *)&v220 = 0;
    qfree(v219);
  }
  return v247 - __readfsqword(0x28u);
}

