__int64 __fastcall sub_173E80(__int64 a1, __int64 a2, const char *a3, const __m128i *a4)
{
  __int64 v5; // r14
  const char *v6; // rbp
  __int64 v7; // r13
  _QWORD *v8; // rax
  __int64 v9; // r13
  __int64 v10; // rax
  unsigned int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdi
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rsi
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rdi
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdi
  int v32; // r8d
  int v33; // r9d
  int v34; // ecx
  __int64 *v35; // r13
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // r10
  __int32 v39; // r11d
  int v40; // ebp
  int v41; // eax
  unsigned __int8 (*v42)(void); // rdx
  char v43; // al
  __int128 *v44; // rcx
  char v45; // al
  __int64 v46; // rdx
  __int64 v47; // rax
  int v48; // eax
  int v49; // eax
  __int64 v50; // rdi
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rax
  __m128i v56; // xmm1
  __int64 v57; // rdx
  unsigned __int8 v58; // bp
  __int64 v59; // rax
  unsigned int v60; // ebp
  __int64 result; // rax
  int v62; // eax
  unsigned int v63; // eax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  int v67; // eax
  char v68; // di
  int v69; // eax
  int v70; // eax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rsi
  __int64 v74; // rdi
  int v75; // eax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rsi
  __int64 v79; // rdi
  int v80; // eax
  int v81; // eax
  unsigned __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rax
  int v87; // eax
  unsigned __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rax
  int v91; // eax
  int v92; // eax
  unsigned __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rax
  int v98; // eax
  unsigned __int64 v99; // rcx
  __int64 v100; // rax
  int v101; // r13d
  __int64 v102; // rax
  unsigned int v103; // r13d
  __int64 v104; // rax
  __int64 v105; // rbp
  __int64 v106; // rax
  __int64 v107; // r13
  __m128i v108; // xmm0
  __int64 v109; // rbp
  __int64 v110; // rbp
  char *v111; // r9
  __int64 v112; // rbp
  __int64 v113; // rbp
  char *v114; // rdx
  __int64 v115; // rax
  unsigned int v116; // eax
  __int64 v117; // rbp
  __int64 v118; // rax
  __int64 v119; // rbp
  __int64 v120; // rbp
  __int64 v121; // rbp
  __int64 v122; // rbp
  char *v123; // r9
  int v124; // ebp
  __int64 v125; // rax
  unsigned __int16 v126; // ax
  int v127; // edx
  __int64 v128; // rax
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // rax
  __int128 *v132; // rdi
  __int64 v133; // rax
  __int64 v134; // r13
  __int64 v135; // rsi
  __int64 v136; // rax
  char *v137; // r10
  char *v138; // r8
  char *v139; // r13
  __int64 v140; // rcx
  _DWORD *v141; // rdi
  __int128 *v142; // rdi
  __int64 v143; // rcx
  __int64 v144; // rdx
  unsigned int v145; // eax
  int v146; // esi
  __int64 v147; // rax
  __int64 v148; // rbp
  int v149; // eax
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // rcx
  char *v153; // rdi
  __int64 v154; // rax
  int v155; // eax
  __int64 v156; // rax
  __int64 v157; // rsi
  __int64 v158; // rdi
  __int64 v159; // rax
  __int64 v160; // rsi
  __int64 v161; // rdi
  __int64 v162; // rbp
  unsigned __int16 v163; // ax
  __int64 v164; // rax
  char v165; // al
  __int64 v166; // rbp
  unsigned __int8 v167; // al
  __int64 v168; // rbp
  unsigned __int16 v169; // ax
  __int64 v170; // rax
  __int64 v171; // rbp
  unsigned __int8 v172; // al
  unsigned __int16 v173; // ax
  __int64 v174; // rbx
  int v175; // eax
  unsigned __int16 v176; // ax
  unsigned __int8 v177; // al
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // rsi
  __int64 v181; // rcx
  char *v182; // rdi
  __int64 v183; // rax
  __int64 v184; // r13
  __int64 (__fastcall ***v185)(_QWORD, const char *); // rdi
  unsigned __int16 v186; // ax
  unsigned __int8 v187; // al
  unsigned __int16 v188; // ax
  unsigned __int8 v189; // al
  unsigned __int16 v190; // ax
  unsigned __int8 v191; // al
  __int64 v192; // rcx
  int v193; // eax
  __int64 v194; // rax
  time_t v195; // rax
  unsigned __int8 v196; // al
  __int64 v197; // rax
  __int64 v198; // rax
  __int64 v199; // rax
  __int64 v200; // rax
  __int64 v201; // rax
  __int64 v202; // rax
  __int64 v203; // rcx
  __int128 *v204; // rdi
  __int64 v205; // rdx
  __int64 v206; // rax
  __int64 v207; // rdx
  __int64 v208; // rax
  __int64 i; // r13
  int v210; // eax
  int v211; // eax
  __int64 v212; // rax
  __int64 v213; // rax
  __int64 v214; // rax
  int v215; // [rsp-8h] [rbp-178h]
  int v216; // [rsp+0h] [rbp-170h]
  int v217; // [rsp+4h] [rbp-16Ch]
  int v218; // [rsp+4h] [rbp-16Ch]
  int v219[2]; // [rsp+8h] [rbp-168h]
  __m128i v220; // [rsp+10h] [rbp-160h] BYREF
  __int128 *v221; // [rsp+20h] [rbp-150h]
  char *v222; // [rsp+28h] [rbp-148h]
  char *v223; // [rsp+30h] [rbp-140h]
  __int64 v224; // [rsp+38h] [rbp-138h] BYREF
  char *v225; // [rsp+40h] [rbp-130h] BYREF
  char v226[4]; // [rsp+48h] [rbp-128h] BYREF
  unsigned int v227; // [rsp+4Ch] [rbp-124h]
  int v228; // [rsp+50h] [rbp-120h]
  int v229; // [rsp+54h] [rbp-11Ch]
  char v230[8]; // [rsp+58h] [rbp-118h] BYREF
  _BYTE v231[24]; // [rsp+60h] [rbp-110h] BYREF
  char v232[8]; // [rsp+78h] [rbp-F8h] BYREF
  __int128 v233; // [rsp+80h] [rbp-F0h]
  __int64 v234; // [rsp+90h] [rbp-E0h]
  char v235[8]; // [rsp+98h] [rbp-D8h] BYREF
  char v236; // [rsp+A0h] [rbp-D0h] BYREF
  char v237[8]; // [rsp+B8h] [rbp-B8h] BYREF
  __int128 v238; // [rsp+C0h] [rbp-B0h]
  __int64 v239; // [rsp+D0h] [rbp-A0h]
  char v240[8]; // [rsp+D8h] [rbp-98h] BYREF
  char v241; // [rsp+E0h] [rbp-90h] BYREF
  char v242[8]; // [rsp+F8h] [rbp-78h] BYREF
  __int128 v243; // [rsp+100h] [rbp-70h] BYREF
  __int64 v244; // [rsp+110h] [rbp-60h]
  _BYTE v245[24]; // [rsp+118h] [rbp-58h] BYREF
  unsigned __int64 v246; // [rsp+130h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)v219 = a2;
  v246 = __readfsqword(0x28u);
  v230[0] = 2;
  *(_QWORD *)&v231[16] = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_OWORD *)v231 = 0;
  if ( !a3
    || (v6 = a3,
        v7 = qword_242890,
        sub_19A520(qword_242890),
        a2 = (__int64)v6,
        v217 = sub_1872A0(*(_QWORD *)(a1 + 8), v6),
        sub_19A570(v7),
        LODWORD(a4) = v217,
        v217 != 0x7FFFFFFF) )
  {
    *(_DWORD *)(a1 + 120) = (_DWORD)a4;
    v218 = 0;
    goto LABEL_4;
  }
LABEL_14:
  sub_18FA40(88);
  a2 = (__int64)v6;
  v14 = 0;
  sub_18FAC0(0, v6);
  while ( 1 )
  {
    if ( (unsigned int)sub_18FA20(v14, a2) != 90 )
      sub_1793A0(v230);
    v15 = *(_QWORD *)(a1 + 32);
    v16 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v15 + 1) )
    {
      v47 = sub_1987B0(a1 + 24, v16, v15 + 1, 32);
      *(_QWORD *)(a1 + 24) = v47;
      v16 = v47;
      v15 = *(_QWORD *)(a1 + 32);
    }
    v17 = v16 + 32 * v15;
    *(_BYTE *)v17 = 2;
    *(_QWORD *)(v17 + 24) = 0;
    *(_OWORD *)(v17 + 8) = 0;
    ++*(_QWORD *)(a1 + 32);
    sub_1770A0(v17, v230);
LABEL_20:
    v21 = *(_QWORD *)(a1 + 24);
    v225 = (char *)(v21 + 32LL * *(_QWORD *)(a1 + 32) - 32);
    sub_1790B0(
      a1,
      (int)v225,
      v21,
      v18,
      v19,
      v20,
      v215,
      v216,
      v219[0],
      v220.m128i_i32[0],
      (void *)v220.m128i_i64[1],
      (__int64)v221,
      (int)v222,
      (int)v223,
      v224);
LABEL_21:
    v22 = *(_QWORD *)(a1 + 128);
    if ( !v22 )
      break;
    while ( 1 )
    {
      v23 = *(_QWORD *)(a1 + 112) - 1LL;
      if ( (unsigned __int8)sub_186E10(v22, v23, v226) )
        break;
      if ( (unsigned __int64)(int)v5 >= *(_QWORD *)(a1 + 56) )
        goto LABEL_71;
      if ( !(unsigned __int8)sub_178380(
                               a1,
                               v23,
                               v24,
                               v25,
                               v26,
                               v27,
                               v215,
                               v216,
                               v219[0],
                               v220.m128i_i32[0],
                               v220.m128i_i32[2],
                               (_DWORD)v221,
                               (_DWORD)v222,
                               (_DWORD)v223,
                               v224) )
      {
        if ( !unk_2439A0 )
          sub_198E10(301);
LABEL_389:
        BUG();
      }
      v22 = *(_QWORD *)(a1 + 128);
      if ( !v22 )
        goto LABEL_71;
    }
    *(_QWORD *)(a1 + 112) = v227;
    switch ( v228 )
    {
      case 2:
        LODWORD(v28) = v229 + *(_DWORD *)(a1 + 96);
        if ( (int)v28 < 0 || (v29 = *(_QWORD *)(a1 + 32), v28 = (int)v28, (int)v28 >= v29) )
        {
          if ( !unk_2439A0 )
            sub_198E10(287);
          goto LABEL_389;
        }
        break;
      case 3:
        v225 = (char *)sub_172630(*(_QWORD *)(a1 + 8), v229);
        v31 = (__int64)v225;
        v30 = *(_QWORD *)(a1 + 24);
        v29 = *(_QWORD *)(a1 + 32);
        goto LABEL_82;
      case 1:
        LODWORD(v28) = v229 + *(_DWORD *)(a1 + 100);
        if ( (int)v28 < 0 || (v29 = *(_QWORD *)(a1 + 32), v28 = (int)v28, (int)v28 >= v29) )
        {
          if ( !unk_2439A0 )
            sub_198E10(286);
          goto LABEL_389;
        }
        break;
      default:
        if ( !unk_2439A0 )
          sub_198E10(300);
        goto LABEL_389;
    }
    v30 = *(_QWORD *)(a1 + 24);
    v31 = v30 + 32 * v28;
    v225 = (char *)v31;
LABEL_82:
    a2 = v30 + 32 * v29 - 32;
    if ( !(unsigned int)sub_1770A0(v31, a2) )
    {
      v64 = *(_QWORD *)(a1 + 32);
      v65 = *(_QWORD *)(a1 + 24);
      v242[0] = 2;
      v243 = 0;
      a2 = v65 + 32 * v64 - 32;
      v244 = 0;
      sub_176730(v242, a2);
      v66 = *(_QWORD *)(a1 + 32);
      if ( v66 )
      {
        v194 = v66 - 1;
        *(_QWORD *)(a1 + 32) = v194;
        sub_176520(*(_QWORD *)(a1 + 24) + 32 * v194);
      }
      sub_176520(v242);
    }
LABEL_64:
    if ( !*(_BYTE *)(a1 + 144)
      && (unsigned __int8)interr_exc_t___vtable_at_1764016(
                            0x1Bu,
                            (__int64 (__fastcall ***)(_QWORD))a2,
                            (const __m128i *)&interr_exc_t___vtable_at_1764016,
                            a4,
                            v51,
                            v52) )
    {
      v14 = 1487;
      sub_18FA40(1487);
      continue;
    }
    a2 = *(_QWORD *)(a1 + 112);
    v58 = sub_186D80(*(_QWORD *)(a1 + 128), a2);
    v59 = *(_QWORD *)(a1 + 8);
    ++*(_QWORD *)(a1 + 112);
    if ( !*(_BYTE *)(v59 + 124) && ++v218 > 100 )
    {
      if ( *(_QWORD *)(v59 + 112) != -1 )
      {
        v218 = 0;
        if ( !(unsigned __int8)sub_19A430() )
          goto LABEL_70;
        v195 = time(nullptr);
        v57 = *(_QWORD *)(a1 + 8);
        if ( v195 - *(_QWORD *)(v57 + 112) > 2 )
        {
          sub_4BB70((const __m128i *)"Running IDC script");
          *(_BYTE *)(*(_QWORD *)(a1 + 8) + 124LL) = 1;
        }
      }
      v218 = 0;
    }
LABEL_70:
    switch ( v58 )
    {
      case 0u:
      case 1u:
      case 2u:
      case 3u:
      case 4u:
      case 5u:
      case 6u:
      case 7u:
      case 8u:
      case 9u:
      case 0xAu:
      case 0xBu:
      case 0xCu:
      case 0xDu:
      case 0xEu:
      case 0xFu:
        v34 = v58;
        goto LABEL_37;
      case 0x10u:
      case 0x11u:
      case 0x12u:
      case 0x13u:
      case 0x14u:
      case 0x15u:
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
        LODWORD(a4) = v58 - 16;
        *(_DWORD *)(a1 + 120) = (_DWORD)a4;
        goto LABEL_4;
      case 0x20u:
      case 0x21u:
      case 0x22u:
      case 0x23u:
      case 0x24u:
      case 0x25u:
      case 0x26u:
      case 0x27u:
      case 0x28u:
      case 0x29u:
      case 0x2Au:
      case 0x2Bu:
      case 0x2Cu:
      case 0x2Du:
      case 0x2Eu:
      case 0x2Fu:
        v80 = v58 - 32;
        goto LABEL_125;
      case 0x30u:
      case 0x31u:
      case 0x32u:
      case 0x33u:
      case 0x34u:
      case 0x35u:
      case 0x36u:
      case 0x37u:
      case 0x38u:
      case 0x39u:
      case 0x3Au:
      case 0x3Bu:
      case 0x3Cu:
      case 0x3Du:
      case 0x3Eu:
      case 0x3Fu:
        v91 = v58 - 48;
        goto LABEL_136;
      case 0x40u:
      case 0x41u:
      case 0x42u:
      case 0x43u:
      case 0x44u:
      case 0x45u:
      case 0x46u:
      case 0x47u:
      case 0x48u:
      case 0x49u:
      case 0x4Au:
      case 0x4Bu:
      case 0x4Cu:
      case 0x4Du:
      case 0x4Eu:
      case 0x4Fu:
        v87 = v58 - 64;
        goto LABEL_132;
      case 0x50u:
      case 0x51u:
      case 0x52u:
      case 0x53u:
      case 0x54u:
      case 0x55u:
      case 0x56u:
      case 0x57u:
      case 0x58u:
      case 0x59u:
      case 0x5Au:
      case 0x5Bu:
      case 0x5Cu:
      case 0x5Du:
      case 0x5Eu:
      case 0x5Fu:
        v98 = v58 - 80;
        goto LABEL_144;
      case 0x60u:
      case 0x61u:
      case 0x62u:
      case 0x63u:
      case 0x64u:
      case 0x65u:
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
        v75 = v58 - 96;
        goto LABEL_115;
      case 0x70u:
      case 0x71u:
      case 0x72u:
      case 0x73u:
      case 0x74u:
      case 0x75u:
      case 0x76u:
      case 0x77u:
      case 0x78u:
      case 0x79u:
      case 0x7Au:
      case 0x7Bu:
      case 0x7Cu:
      case 0x7Du:
      case 0x7Eu:
      case 0x7Fu:
        v70 = v58 - 112;
        goto LABEL_106;
      case 0x80u:
        v34 = (unsigned __int8)sub_172390(a1);
        goto LABEL_37;
      case 0x81u:
        v34 = (unsigned __int16)sub_1723B0(a1);
        goto LABEL_37;
      case 0x82u:
        LODWORD(a4) = (unsigned __int8)sub_172390(a1);
        goto LABEL_247;
      case 0x83u:
        LODWORD(a4) = (unsigned __int16)sub_1723B0(a1);
LABEL_247:
        *(_DWORD *)(a1 + 120) = (_DWORD)a4;
        goto LABEL_5;
      case 0x84u:
        v80 = (unsigned __int8)sub_172390(a1);
        goto LABEL_125;
      case 0x85u:
        v80 = (unsigned __int16)sub_1723B0(a1);
LABEL_125:
        *(_DWORD *)(a1 + 120) = v80;
        v81 = *(_DWORD *)(a1 + 100) + v80;
        if ( v81 < 0 || (v82 = *(_QWORD *)(a1 + 32), v81 >= v82) )
        {
          if ( !unk_2439A0 )
            sub_198E10(286);
          goto LABEL_389;
        }
        v83 = *(_QWORD *)(a1 + 24);
        a2 = v83 + 32 * v82 - 32;
        v14 = v83 + 32LL * v81;
        if ( (unsigned int)sub_1770A0(v14, a2) )
          continue;
        v84 = *(_QWORD *)(a1 + 32);
        v85 = *(_QWORD *)(a1 + 24);
        v232[0] = 2;
        v233 = 0;
        a2 = v85 + 32 * v84 - 32;
        v234 = 0;
        sub_176730(v232, a2);
        v86 = *(_QWORD *)(a1 + 32);
        if ( v86 )
        {
          v208 = v86 - 1;
          *(_QWORD *)(a1 + 32) = v208;
          sub_176520(*(_QWORD *)(a1 + 24) + 32 * v208);
        }
        sub_176520(v232);
        goto LABEL_64;
      case 0x86u:
        v91 = (unsigned __int8)sub_172390(a1);
        goto LABEL_136;
      case 0x87u:
        v91 = (unsigned __int16)sub_1723B0(a1);
LABEL_136:
        *(_DWORD *)(a1 + 120) = v91;
        v92 = *(_DWORD *)(a1 + 96) + v91;
        if ( v92 < 0 || (v93 = *(_QWORD *)(a1 + 32), v92 >= v93) )
        {
          if ( !unk_2439A0 )
            sub_198E10(287);
          goto LABEL_389;
        }
        v94 = *(_QWORD *)(a1 + 24);
        a2 = v94 + 32 * v93 - 32;
        v14 = v94 + 32LL * v92;
        if ( (unsigned int)sub_1770A0(v14, a2) )
          continue;
        v95 = *(_QWORD *)(a1 + 32);
        v96 = *(_QWORD *)(a1 + 24);
        v237[0] = 2;
        v238 = 0;
        a2 = v96 + 32 * v95 - 32;
        v239 = 0;
        sub_176730(v237, a2);
        v97 = *(_QWORD *)(a1 + 32);
        if ( v97 )
        {
          v202 = v97 - 1;
          *(_QWORD *)(a1 + 32) = v202;
          sub_176520(*(_QWORD *)(a1 + 24) + 32 * v202);
        }
        sub_176520(v237);
        goto LABEL_64;
      case 0x88u:
        v87 = (unsigned __int8)sub_172390(a1);
        goto LABEL_132;
      case 0x89u:
        v87 = (unsigned __int16)sub_1723B0(a1);
LABEL_132:
        v88 = *(_QWORD *)(a1 + 32);
        v89 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 120) = v87;
        a2 = v89 + 32 * v88 - 32;
        LODWORD(v90) = *(_DWORD *)(a1 + 100) + v87;
        if ( (int)v90 >= 0 )
        {
          v90 = (int)v90;
          if ( (int)v90 < v88 )
            goto LABEL_134;
        }
        if ( !unk_2439A0 )
          sub_198E10(286);
        goto LABEL_389;
      case 0x8Au:
        v98 = (unsigned __int8)sub_172390(a1);
        goto LABEL_144;
      case 0x8Bu:
        v98 = (unsigned __int16)sub_1723B0(a1);
LABEL_144:
        v99 = *(_QWORD *)(a1 + 32);
        v89 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 120) = v98;
        a2 = v89 + 32 * v99 - 32;
        LODWORD(v90) = *(_DWORD *)(a1 + 96) + v98;
        if ( (int)v90 < 0 || (v90 = (int)v90, (int)v90 >= v99) )
        {
          if ( !unk_2439A0 )
            sub_198E10(287);
          goto LABEL_389;
        }
LABEL_134:
        v14 = v89 + 32 * v90;
        v69 = sub_176730(v14, a2);
LABEL_103:
        if ( v69 )
          continue;
        goto LABEL_64;
      case 0x8Cu:
        v75 = (unsigned __int8)sub_172390(a1);
        goto LABEL_115;
      case 0x8Du:
        v75 = (unsigned __int16)sub_1723B0(a1);
LABEL_115:
        *(_DWORD *)(a1 + 120) = v75;
        LODWORD(v71) = *(_DWORD *)(a1 + 100) + v75;
        if ( (int)v71 >= 0 )
        {
          v71 = (int)v71;
          if ( (unsigned __int64)(int)v71 < *(_QWORD *)(a1 + 32) )
            goto LABEL_108;
        }
        if ( !unk_2439A0 )
          sub_198E10(286);
        goto LABEL_389;
      case 0x8Eu:
        v70 = (unsigned __int8)sub_172390(a1);
        goto LABEL_106;
      case 0x8Fu:
        v70 = (unsigned __int16)sub_1723B0(a1);
LABEL_106:
        *(_DWORD *)(a1 + 120) = v70;
        LODWORD(v71) = *(_DWORD *)(a1 + 96) + v70;
        if ( (int)v71 < 0 || (v71 = (int)v71, (unsigned __int64)(int)v71 >= *(_QWORD *)(a1 + 32)) )
        {
          if ( !unk_2439A0 )
            sub_198E10(287);
          goto LABEL_389;
        }
LABEL_108:
        sub_176730(v230, *(_QWORD *)(a1 + 24) + 32 * v71);
LABEL_109:
        if ( v230[0] == 10 )
        {
          a2 = 2;
          v14 = (__int64)v230;
          if ( !sub_176840(v230, 2) )
            continue;
        }
        v72 = *(_QWORD *)(a1 + 32);
        v73 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v72 + 1) )
        {
          v200 = sub_1987B0(a1 + 24, v73, v72 + 1, 32);
          *(_QWORD *)(a1 + 24) = v200;
          v73 = v200;
          v72 = *(_QWORD *)(a1 + 32);
        }
        v74 = v73 + 32 * v72;
        a2 = (__int64)v230;
        *(_BYTE *)v74 = 2;
        *(_QWORD *)(v74 + 24) = 0;
        *(_OWORD *)(v74 + 8) = 0;
        ++*(_QWORD *)(a1 + 32);
        sub_1770A0(v74, v230);
        goto LABEL_64;
      case 0x90u:
      case 0x91u:
      case 0x92u:
      case 0x93u:
      case 0x94u:
      case 0x95u:
      case 0x96u:
      case 0x97u:
      case 0x98u:
      case 0x99u:
      case 0x9Au:
      case 0x9Bu:
      case 0x9Cu:
      case 0x9Du:
      case 0x9Eu:
      case 0x9Fu:
      case 0xCFu:
        if ( !unk_2439A0 )
          sub_198E10(299);
        goto LABEL_389;
      case 0xA0u:
        v76 = (char)sub_172390(a1);
        goto LABEL_121;
      case 0xA1u:
        v76 = (__int16)sub_1723B0(a1);
        goto LABEL_121;
      case 0xA2u:
        v145 = (unsigned __int8)sub_172390(a1);
        goto LABEL_232;
      case 0xA3u:
        v145 = (unsigned __int16)sub_1723B0(a1);
LABEL_232:
        *(_DWORD *)(a1 + 120) = v145;
        a2 = v145;
        sub_177FB0(a1, v145);
        goto LABEL_64;
      case 0xA4u:
        v14 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32;
        v225 = (char *)v14;
        if ( *(_BYTE *)v14 == 10 )
        {
          a2 = 2;
          if ( !sub_176840(v14, 2) )
            continue;
        }
        v125 = (__int64)v225;
        if ( *v225 != 2 && *v225 != 9 )
          goto LABEL_207;
        if ( *((_QWORD *)v225 + 1) == -1 || SLODWORD(qword_241EE0[10]) <= 0 )
          goto LABEL_208;
        v222 = (char *)qword_241EE0;
        sub_1781A0(a1, v230);
        v129 = *(_QWORD *)(a1 + 80);
        v130 = 6;
        v220.m128i_i64[0] = a1 + 24;
        v131 = *(_QWORD *)(a1 + 72);
        v132 = &v243;
        v221 = &v243;
        v133 = *(int *)(v131 + 4 * v129 - 4);
        v242[0] = 2;
        v220.m128i_i64[1] = 32 * v133;
        v134 = *(_QWORD *)(a1 + 24) + 32 * v133;
        while ( v130 )
        {
          *(_DWORD *)v132 = 0;
          v132 = (__int128 *)((char *)v132 + 4);
          --v130;
        }
        sub_176730(v242, v230);
        v135 = *(_QWORD *)(a1 + 24);
        v136 = *(_QWORD *)(a1 + 32);
        v137 = v222;
        v138 = (char *)(v134 - v135);
        if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v136 + 1) )
        {
          v223 = v222;
          v222 = (char *)(v134 - v135);
          v213 = sub_1987B0(v220.m128i_i64[0], v135, v136 + 1, 32);
          *(_QWORD *)(a1 + 24) = v213;
          v135 = v213;
          v137 = v223;
          v136 = *(_QWORD *)(a1 + 32);
          v138 = v222;
        }
        v139 = &v138[v135];
        v222 = v137;
        memmove(&v138[v135 + 32], &v138[v135], 32 * v136 - (_QWORD)v138);
        v140 = 6;
        v141 = v139 + 8;
        *v139 = 2;
        while ( v140 )
        {
          *v141++ = 0;
          --v140;
        }
        sub_176730(v139, v242);
        ++*(_QWORD *)(a1 + 32);
        sub_176520(v242);
        v142 = v221;
        v143 = 6;
        v242[0] = 2;
        v144 = v220.m128i_i64[1];
        while ( v143 )
        {
          *(_DWORD *)v142 = 0;
          v142 = (__int128 *)((char *)v142 + 4);
          --v143;
        }
        a2 = *(_QWORD *)(a1 + 24) + v144 + 32;
        sub_176F90(v220.m128i_i64[0], a2, v242);
        v220.m128i_i64[0] = (__int64)v222;
        sub_176520(v242);
        LODWORD(a4) = -*(_DWORD *)(v220.m128i_i64[0] + 80);
        *(_DWORD *)(a1 + 120) = (_DWORD)a4;
        goto LABEL_4;
      case 0xA5u:
        v126 = sub_1723B0(a1);
        v127 = v126;
        v128 = *(_QWORD *)(a1 + 32) + v126;
        v230[0] = 2;
        *(_DWORD *)(a1 + 120) = v127;
        a2 = v128;
        *(_QWORD *)v231 = 0;
        sub_177BC0(a1 + 24, v128, v230);
        goto LABEL_64;
      case 0xA6u:
        goto LABEL_64;
      case 0xA7u:
        LODWORD(v76) = sub_1723D0(a1);
        goto LABEL_120;
      case 0xA8u:
        v105 = (int)sub_1723D0(a1);
        v14 = v105 + 1;
        v220.m128i_i64[0] = v105 + 1;
        v106 = sub_198620(v105 + 1);
        v107 = v106;
        if ( !v106 )
          continue;
        sub_186D50(*(_QWORD *)(a1 + 128), *(_QWORD *)(a1 + 112), v106, v105);
        *(_QWORD *)(a1 + 112) += v105;
        v108 = _mm_loadl_epi64(&v220);
        a2 = (__int64)v230;
        *(_BYTE *)(v107 + v105) = 0;
        v230[0] = 7;
        *(_QWORD *)v231 = v107;
        *(__m128i *)&v231[8] = _mm_unpacklo_epi64(v108, v108);
        sub_177190(a1 + 24, v230);
        goto LABEL_64;
      case 0xA9u:
        goto LABEL_167;
      case 0xAAu:
      case 0xD4u:
        v100 = *(_QWORD *)(a1 + 32);
        v101 = v100;
        if ( v58 == 0xD4 )
          v101 = v100 - 1;
        v102 = *(_QWORD *)(a1 + 80);
        if ( *(_QWORD *)(a1 + 88) < (unsigned __int64)(v102 + 1) )
        {
          a2 = *(_QWORD *)(a1 + 72);
          *(_QWORD *)(a1 + 72) = sub_1987B0(a1 + 72, a2, v102 + 1, 4);
          v102 = *(_QWORD *)(a1 + 80);
        }
        *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4 * v102) = v101;
        ++*(_QWORD *)(a1 + 80);
        goto LABEL_64;
      case 0xABu:
        a2 = (unsigned int)sub_1723D0(a1);
        sub_186FE0(a1, a2);
        goto LABEL_64;
      case 0xACu:
      case 0xADu:
        v103 = sub_1723D0(a1);
        v14 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32;
        v225 = (char *)v14;
        if ( !(unsigned __int8)sub_1778F0() )
          continue;
        v104 = (__int64)v225;
        if ( v58 == 0xAD )
          *((_QWORD *)v225 + 1) = *((_QWORD *)v225 + 1) == 0;
        if ( *(_QWORD *)(v104 + 8) )
        {
          a2 = v103;
          sub_186FE0(a1, v103);
        }
        goto LABEL_167;
      case 0xAEu:
        v14 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32;
        v225 = (char *)v14;
        if ( (unsigned int)sub_176BC0(v14) )
          continue;
        v6 = s1;
        if ( *((_QWORD *)v225 + 2) )
          v6 = *((const char **)v225 + 1);
        v184 = qword_242890;
        sub_19A520(qword_242890);
        a2 = (__int64)v6;
        *(_DWORD *)(a1 + 120) = sub_1872A0(*(_QWORD *)(a1 + 8), v6);
        sub_19A570(v184);
        if ( *(_DWORD *)(a1 + 120) == 0x7FFFFFFF )
        {
          v185 = *(__int64 (__fastcall ****)(_QWORD, const char *))(a1 + 136);
          if ( !v185 )
            goto LABEL_14;
          *(_QWORD *)v231 = (**v185)(v185, v6);
          if ( *(_QWORD *)v231 == -1 )
            goto LABEL_14;
          a2 = (__int64)v230;
          sub_176730(v225, v230);
        }
        else
        {
          sub_176520(v225);
          *v225 = 6;
          *((_DWORD *)v225 + 2) = *(_DWORD *)(a1 + 120);
        }
        goto LABEL_64;
      case 0xAFu:
        v14 = a1;
        if ( !(unsigned __int8)sub_178380(
                                 a1,
                                 a2,
                                 v57,
                                 (_DWORD)a4,
                                 v51,
                                 v52,
                                 v215,
                                 v216,
                                 v219[0],
                                 v220.m128i_i32[0],
                                 v220.m128i_i32[2],
                                 (_DWORD)v221,
                                 (_DWORD)v222,
                                 (_DWORD)v223,
                                 v224) )
          continue;
        if ( (unsigned __int64)(int)v5 < *(_QWORD *)(a1 + 56) )
          goto LABEL_64;
        v14 = *(_QWORD *)v219;
        if ( !*(_QWORD *)v219 )
        {
          sub_176E10(a1);
          goto LABEL_298;
        }
        a2 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32;
        if ( (unsigned int)sub_1770A0(*(_QWORD *)v219, a2) )
          continue;
        v178 = *(_QWORD *)(a1 + 32);
        v179 = *(_QWORD *)(a1 + 24);
        v240[0] = 2;
        v180 = v179 + 32 * v178 - 32;
        v181 = 6;
        v182 = &v241;
        while ( v181 )
        {
          *(_DWORD *)v182 = 0;
          v182 += 4;
          --v181;
        }
        sub_176730(v240, v180);
        v183 = *(_QWORD *)(a1 + 32);
        if ( v183 )
        {
          v214 = v183 - 1;
          *(_QWORD *)(a1 + 32) = v214;
          sub_176520(*(_QWORD *)(a1 + 24) + 32 * v214);
        }
        sub_176520(v240);
        goto LABEL_298;
      case 0xB0u:
      case 0xB1u:
      case 0xB2u:
      case 0xB3u:
      case 0xB4u:
      case 0xB5u:
      case 0xB6u:
      case 0xB7u:
      case 0xB8u:
      case 0xB9u:
      case 0xBAu:
      case 0xBBu:
      case 0xBCu:
      case 0xBDu:
      case 0xBEu:
      case 0xBFu:
      case 0xC8u:
      case 0xC9u:
      case 0xCAu:
      case 0xCBu:
      case 0xCCu:
      case 0xCDu:
      case 0xCEu:
      case 0xD0u:
      case 0xD1u:
        a2 = v58;
        v14 = a1 + 24;
        v69 = sub_17B080(a1 + 24, v58);
        goto LABEL_103;
      case 0xC0u:
        v191 = sub_172390(a1);
        v170 = sub_1725B0(a1, v191);
        goto LABEL_279;
      case 0xC1u:
        v190 = sub_1723B0(a1);
        v170 = sub_1725B0(a1, v190);
        goto LABEL_279;
      case 0xC2u:
        v187 = sub_172390(a1);
        v170 = sub_1725F0(a1, v187);
        goto LABEL_279;
      case 0xC3u:
        v186 = sub_1723B0(a1);
        v170 = sub_1725F0(a1, v186);
        goto LABEL_279;
      case 0xC4u:
        v189 = sub_172390(a1);
        v164 = sub_1725B0(a1, v189);
        goto LABEL_274;
      case 0xC5u:
        v188 = sub_1723B0(a1);
        v164 = sub_1725B0(a1, v188);
        goto LABEL_274;
      case 0xC6u:
        v177 = sub_172390(a1);
        v164 = sub_1725F0(a1, v177);
        goto LABEL_274;
      case 0xC7u:
        v176 = sub_1723B0(a1);
        v164 = sub_1725F0(a1, v176);
        goto LABEL_274;
      case 0xD2u:
        v160 = *(_QWORD *)(a1 + 112);
        v161 = *(_QWORD *)(a1 + 128);
        v230[0] = 3;
        sub_186D50(v161, v160, v231, 16);
        *(_QWORD *)(a1 + 112) += 16LL;
        a2 = (__int64)v230;
        sub_176EB0(a1 + 24, v230);
        goto LABEL_64;
      case 0xD3u:
        v157 = *(_QWORD *)(a1 + 112);
        v158 = *(_QWORD *)(a1 + 128);
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) == 4 )
        {
          v159 = sub_186DE0(v158, v157);
          *(_QWORD *)(a1 + 112) += 8LL;
          v230[0] = 9;
        }
        else
        {
          v159 = sub_186DE0(v158, v157);
          *(_QWORD *)(a1 + 112) += 8LL;
          v230[0] = 2;
        }
        *(_QWORD *)v231 = v159;
        a2 = (__int64)v230;
        sub_176EB0(a1 + 24, v230);
        goto LABEL_64;
      case 0xD5u:
        v155 = (unsigned __int8)sub_172390(a1);
        goto LABEL_267;
      case 0xD6u:
        v155 = (unsigned __int16)sub_1723B0(a1);
LABEL_267:
        *(_DWORD *)(a1 + 120) = v155;
        v156 = sub_172630(*(_QWORD *)(a1 + 8), v155);
        sub_176730(v230, v156);
        goto LABEL_109;
      case 0xD7u:
        v149 = (unsigned __int8)sub_172390(a1);
        goto LABEL_258;
      case 0xD8u:
        v149 = (unsigned __int16)sub_1723B0(a1);
LABEL_258:
        *(_DWORD *)(a1 + 120) = v149;
        v14 = sub_172630(*(_QWORD *)(a1 + 8), v149);
        a2 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32;
        if ( (unsigned int)sub_1770A0(v14, a2) )
          continue;
        v150 = *(_QWORD *)(a1 + 32);
        v151 = *(_QWORD *)(a1 + 24);
        v235[0] = 2;
        a2 = v151 + 32 * v150 - 32;
        v152 = 6;
        v153 = &v236;
        while ( v152 )
        {
          *(_DWORD *)v153 = 0;
          v153 += 4;
          --v152;
        }
        sub_176730(v235, a2);
        v154 = *(_QWORD *)(a1 + 32);
        if ( v154 )
        {
          v212 = v154 - 1;
          *(_QWORD *)(a1 + 32) = v212;
          sub_176520(*(_QWORD *)(a1 + 24) + 32 * v212);
        }
        sub_176520(v235);
        goto LABEL_64;
      case 0xD9u:
        v146 = (unsigned __int8)sub_172390(a1);
        goto LABEL_255;
      case 0xDAu:
        v146 = (unsigned __int16)sub_1723B0(a1);
LABEL_255:
        v147 = *(_QWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 120) = v146;
        v148 = *(_QWORD *)(a1 + 24) + 32 * v147 - 32;
        v14 = sub_172630(*(_QWORD *)(a1 + 8), v146);
        a2 = v148;
        v69 = sub_176730(v14, v148);
        goto LABEL_103;
      case 0xDBu:
        v171 = *(_QWORD *)(a1 + 8);
        v172 = sub_172390(a1);
        v170 = sub_172630(v171, v172);
        goto LABEL_279;
      case 0xDCu:
        v168 = *(_QWORD *)(a1 + 8);
        v169 = sub_1723B0(a1);
        v170 = sub_172630(v168, v169);
LABEL_279:
        a2 = 1;
        v14 = v170;
        v225 = (char *)v170;
        v165 = sub_176BE0(v170, 1);
        goto LABEL_275;
      case 0xDDu:
        v166 = *(_QWORD *)(a1 + 8);
        v167 = sub_172390(a1);
        v164 = sub_172630(v166, v167);
        goto LABEL_274;
      case 0xDEu:
        v162 = *(_QWORD *)(a1 + 8);
        v163 = sub_1723B0(a1);
        v164 = sub_172630(v162, v163);
LABEL_274:
        a2 = 0xFFFFFFFFLL;
        v14 = v164;
        v225 = (char *)v164;
        v165 = sub_176BE0(v164, 0xFFFFFFFFLL);
LABEL_275:
        if ( v165 )
          goto LABEL_64;
        continue;
      case 0xDFu:
        sub_18FA40(90);
        goto LABEL_20;
      case 0xE0u:
      case 0xE1u:
      case 0xE2u:
      case 0xE3u:
      case 0xE4u:
      case 0xE5u:
      case 0xE6u:
      case 0xE7u:
      case 0xE8u:
      case 0xE9u:
      case 0xEAu:
      case 0xEBu:
      case 0xECu:
      case 0xEDu:
      case 0xEEu:
      case 0xEFu:
        LODWORD(v76) = v58 - 224;
LABEL_120:
        v76 = (int)v76;
LABEL_121:
        *(_QWORD *)v231 = v76;
        v230[0] = 2;
        v242[0] = 2;
        v244 = 0;
        v243 = 0;
        sub_176730(v242, v230);
        v77 = *(_QWORD *)(a1 + 32);
        v78 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v77 + 1) )
        {
          v201 = sub_1987B0(a1 + 24, v78, v77 + 1, 32);
          *(_QWORD *)(a1 + 24) = v201;
          v78 = v201;
          v77 = *(_QWORD *)(a1 + 32);
        }
        v79 = v78 + 32 * v77;
        a2 = (__int64)v242;
        *(_BYTE *)v79 = 2;
        *(_QWORD *)(v79 + 24) = 0;
        *(_OWORD *)(v79 + 8) = 0;
        sub_176730(v79, v242);
        ++*(_QWORD *)(a1 + 32);
        sub_176520(v242);
        goto LABEL_64;
      case 0xF0u:
        v173 = sub_1723B0(a1);
        v230[0] = 5;
        *(_DWORD *)(a1 + 120) = v173;
        v174 = operator new(0x38u);
        sub_186A20(v174, *(unsigned int *)(a1 + 120));
        *(_QWORD *)v231 = v174;
        v175 = *(_DWORD *)(a1 + 120);
        if ( v175 != *(_DWORD *)(v174 + 52) )
        {
          a2 = v175;
          sub_18FA70(0, v175);
          v14 = 1535;
          sub_18FA40(1535);
          continue;
        }
        for ( i = sub_1871B0(v175); ; i = sub_187150(*(_QWORD *)(a1 + 8), v210) )
        {
          v211 = sub_172480(i, i + 56);
          *(_DWORD *)(a1 + 120) = v211;
          if ( v211 != -1 )
            break;
          v210 = *(_DWORD *)(i + 48);
          if ( !v210 )
            break;
        }
        goto LABEL_342;
      case 0xF1u:
        v14 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32;
        a2 = v14;
        v225 = (char *)v14;
        v69 = sub_17AEA0(v14, v14);
        goto LABEL_103;
      case 0xF2u:
        v225 = v230;
        if ( (unsigned __int8)sub_17A3C0(a1) )
          goto LABEL_156;
        goto LABEL_21;
      case 0xF3u:
        if ( (unsigned __int8)sub_1795B0(a1) )
          goto LABEL_64;
        goto LABEL_21;
      case 0xF4u:
        if ( (unsigned __int8)sub_1795B0(a1) )
          goto LABEL_167;
        goto LABEL_21;
      case 0xF5u:
      case 0xF6u:
        a2 = (__int64)&v225;
        v225 = v230;
        if ( !(unsigned __int8)sub_17A3C0(a1) )
          goto LABEL_21;
        v14 = (__int64)v225;
        if ( !v225 )
        {
          v14 = 1534;
          sub_18FA40(1534);
          continue;
        }
        a2 = 0xFFFFFFFFLL;
        if ( v58 == 0xF5 )
          a2 = 1;
        if ( !(unsigned __int8)sub_176BE0(v225, a2) )
          continue;
LABEL_156:
        a2 = (__int64)v230;
        v14 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32;
        v69 = sub_1770A0(v14, v230);
        goto LABEL_103;
      case 0xF7u:
        v14 = a1;
        a2 = a1 + 120;
        v225 = v230;
        if ( !(unsigned __int8)sub_17A700(a1) )
          continue;
        if ( *(_DWORD *)(a1 + 120) == -1 )
        {
          v125 = (__int64)v225;
LABEL_207:
          if ( *(_BYTE *)v125 != 6 )
          {
LABEL_208:
            v14 = 1541;
            sub_18FA40(1541);
            continue;
          }
          *(_DWORD *)(a1 + 120) = *(_DWORD *)(v125 + 8);
          sub_176E10(a1);
          LODWORD(a4) = *(_DWORD *)(a1 + 120);
        }
        else
        {
          sub_1781A0(a1, v230);
LABEL_342:
          v203 = 6;
          v242[0] = 2;
          v204 = &v243;
          v205 = *(_QWORD *)(a1 + 80);
          while ( v203 )
          {
            *(_DWORD *)v204 = 0;
            v204 = (__int128 *)((char *)v204 + 4);
            --v203;
          }
          v225 = (char *)sub_176F90(
                           a1 + 24,
                           *(_QWORD *)(a1 + 24) + 32LL * *(int *)(*(_QWORD *)(a1 + 72) + 4 * v205 - 4),
                           v242);
          sub_176520(v242);
          v14 = (__int64)v225;
          a2 = (__int64)v230;
          if ( (unsigned int)sub_1770A0(v225, v230) )
            continue;
          a4 = (const __m128i *)*(unsigned int *)(a1 + 120);
          if ( (_DWORD)a4 == -1 )
          {
            v206 = *(_QWORD *)(a1 + 80);
            v207 = *(int *)(*(_QWORD *)(a1 + 72) + 4 * v206 - 4);
            if ( v206 )
              *(_QWORD *)(a1 + 80) = v206 - 1;
            if ( v207 == *(_QWORD *)(a1 + 32) - 1LL )
              goto LABEL_64;
LABEL_75:
            v14 = 56;
            sub_18FA40(56);
            continue;
          }
        }
LABEL_4:
        if ( (int)a4 >= 0 )
        {
LABEL_5:
          v8 = *(_QWORD **)(a1 + 8);
          if ( (unsigned __int64)(int)a4 >= v8[1] || (v9 = *(_QWORD *)(*v8 + 8LL * (int)a4)) == 0 )
          {
            sub_18FA40(88);
LABEL_34:
            sub_19D9D0((unsigned int)v245, 20, (unsigned int)"#%d", *(_DWORD *)(a1 + 120), v32, v33);
            a2 = (__int64)v245;
            goto LABEL_35;
          }
          if ( !*(_QWORD *)(v9 + 40) )
          {
            sub_18FA40(88);
            if ( *(_QWORD *)(v9 + 8) > 1u )
              goto LABEL_56;
            goto LABEL_34;
          }
          v10 = *(_QWORD *)(a1 + 80);
          v11 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4 * v10 - 4);
          if ( v10 )
            *(_QWORD *)(a1 + 80) = v10 - 1;
          v12 = *(unsigned int *)(v9 + 24);
          v13 = *(_DWORD *)(a1 + 32) - v11;
          if ( (int)v12 > (int)v13 )
          {
            if ( !*(_QWORD *)(v9 + 72) )
              goto LABEL_12;
            v48 = sub_178060(a1, v13, v12, *(_QWORD *)(v9 + 64));
            LODWORD(v12) = *(_DWORD *)(v9 + 24);
            LODWORD(v13) = v48;
          }
          if ( (_DWORD)v13 != (_DWORD)v12 )
          {
LABEL_12:
            sub_18FA40(56);
            a2 = (__int64)s1;
            if ( *(_QWORD *)(v9 + 8) )
LABEL_56:
              a2 = *(_QWORD *)v9;
LABEL_35:
            v14 = 0;
            sub_18FAC0(0, a2);
            continue;
          }
          v220.m128i_i64[0] = qword_242890;
          sub_19A520(qword_242890);
          v49 = *(_DWORD *)(v9 + 136);
          if ( v49 == -1 )
          {
            a2 = (__int64)s1;
            if ( *(_QWORD *)(v9 + 8) )
              a2 = *(_QWORD *)v9;
            sub_18FAC0(0, a2);
            sub_18FA40(40);
            v14 = v220.m128i_i64[0];
            sub_19A570(v220.m128i_i64[0]);
            continue;
          }
          v50 = v220.m128i_i64[0];
          *(_DWORD *)(v9 + 136) = v49 + 1;
          sub_19A570(v50);
          v53 = *(_QWORD *)(a1 + 56);
          a2 = *(_QWORD *)(a1 + 48);
          v54 = v53 + 1;
          if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v53 + 1) )
          {
            v199 = sub_1987B0(a1 + 48, a2, v54, 24);
            *(_QWORD *)(a1 + 48) = v199;
            a2 = v199;
            v53 = *(_QWORD *)(a1 + 56);
            v54 = v53 + 1;
          }
          *(_QWORD *)(a1 + 56) = v54;
          v55 = a2 + 24 * v53;
          *(_DWORD *)(v55 + 8) = *(_QWORD *)(a1 + 112);
          *(_QWORD *)v55 = *(_QWORD *)(a1 + 104);
          *(_DWORD *)(v55 + 12) = *(_DWORD *)(a1 + 96);
          *(_DWORD *)(v55 + 16) = *(_DWORD *)(a1 + 100);
          v56 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 32));
          *(_QWORD *)(a1 + 128) = v9 + 32;
          *(_QWORD *)(a1 + 104) = v9;
          *(_QWORD *)(a1 + 112) = 0;
          *(_QWORD *)(a1 + 96) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v11), v56).m128i_u64[0];
          goto LABEL_64;
        }
        v34 = -(int)a4;
LABEL_37:
        *(_DWORD *)(a1 + 120) = v34;
        v218 += 200;
        if ( (unsigned __int64)v34 >= qword_241EE0[0]
          || (v230[0] = 2,
              *(_QWORD *)v231 = 0,
              v35 = (__int64 *)(qword_241EE0[1] + 40LL * v34),
              v220.m128i_i64[0] = (__int64)qword_241EE0,
              !v35) )
        {
          v14 = 87;
          sub_18FA40(87);
          continue;
        }
        a2 = (__int64)&v224 + 7;
        v36 = (unsigned int)sub_187340(v35[2], (char *)&v224 + 7);
        v37 = *(_QWORD *)(a1 + 80);
        v38 = v220.m128i_i64[0];
        v39 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4 * v37 - 4);
        if ( v37 )
          *(_QWORD *)(a1 + 80) = v37 - 1;
        v40 = *(_DWORD *)(a1 + 32) - v39;
        if ( (int)v36 > v40 )
        {
          v192 = v35[3];
          a2 = (unsigned int)v40;
          v221 = (__int128 *)v38;
          v220.m128i_i32[2] = v39;
          v220.m128i_i32[0] = v36;
          v193 = sub_178060(a1, (unsigned int)v40, v36, v192);
          v38 = (__int64)v221;
          v39 = v220.m128i_i32[2];
          v40 = v193;
          LODWORD(v36) = v220.m128i_i32[0];
        }
        if ( HIBYTE(v224) )
        {
          *(_QWORD *)v231 = v40;
        }
        else if ( v40 != (_DWORD)v36 )
        {
          a2 = *v35;
          sub_18FAC0(0, *v35);
          goto LABEL_75;
        }
        v41 = *((_DWORD *)v35 + 9);
        if ( (v41 & 1) != 0 )
        {
          v42 = *(unsigned __int8 (**)(void))(v38 + 48);
          if ( v42 )
          {
            v220.m128i_i32[0] = v39;
            if ( !v42() )
            {
              v14 = 1489;
              sub_18FA40(1489);
              continue;
            }
            v41 = *((_DWORD *)v35 + 9);
            v39 = v220.m128i_i32[0];
          }
        }
        if ( (v41 & 4) == 0 )
        {
          v220.m128i_i32[0] = v39;
          v43 = sub_19A430();
          v39 = v220.m128i_i32[0];
          if ( !v43 )
          {
            a2 = *v35;
            sub_18FAC0(0, *v35);
            v14 = 143;
            sub_18FA40(143);
            continue;
          }
        }
        v44 = (__int128 *)v35[2];
        v220.m128i_i64[0] = *(_QWORD *)(a1 + 24) + 32LL * v39;
        v45 = *(_BYTE *)v44;
        if ( v40 <= 0 )
          goto LABEL_90;
        v46 = v220.m128i_i64[0];
        a2 = v220.m128i_i64[0] + 32LL * v40;
        while ( *(_BYTE *)v46 == v45 )
        {
LABEL_88:
          v45 = *((_BYTE *)v44 + 1);
          v44 = (__int128 *)((char *)v44 + 1);
LABEL_89:
          v46 += 32;
          if ( a2 == v46 )
            goto LABEL_90;
        }
        switch ( v45 )
        {
          case 2:
            v14 = v46;
            v222 = (char *)a2;
            v221 = v44;
            v220.m128i_i64[1] = v46;
            v67 = sub_177200(v46);
            goto LABEL_87;
          case 3:
            v14 = v46;
            v222 = (char *)a2;
            v221 = v44;
            v220.m128i_i64[1] = v46;
            v67 = sub_1774B0(v46);
            goto LABEL_87;
          case 4:
            v68 = *((_BYTE *)v44 + 1);
            if ( v68 )
            {
              v44 = (__int128 *)((char *)v44 + 1);
              v45 = v68;
              goto LABEL_89;
            }
            while ( 1 )
            {
              v46 += 32;
              if ( v46 == a2 )
                break;
              if ( *(_BYTE *)v46 == 4 )
                goto LABEL_88;
            }
LABEL_90:
            if ( (v45 & 0xFB) != 0 )
            {
              v14 = 56;
              v62 = sub_18FA40(56);
LABEL_77:
              if ( v62 )
                continue;
            }
            if ( (*((_BYTE *)v35 + 36) & 2) != 0 )
              sub_177DA0(a1, v35, v220.m128i_i64[0], (unsigned int)v40);
            a2 = (__int64)v230;
            v63 = ((__int64 (__fastcall *)(__int64, char *))v35[1])(v220.m128i_i64[0], v230);
            if ( v63 )
            {
              v14 = v63;
              sub_18FA40(v63);
              continue;
            }
            sub_177FB0(a1, (unsigned int)v40);
            if ( (unsigned __int64)(int)v5 < *(_QWORD *)(a1 + 56) )
            {
              sub_18FA40(0);
              a2 = *(_QWORD *)(a1 + 112);
              v196 = sub_186D80(*(_QWORD *)(a1 + 128), a2);
              ++*(_QWORD *)(a1 + 112);
              v58 = v196;
              if ( v196 == 0xA9 )
              {
                sub_176520(v230);
                goto LABEL_64;
              }
              v197 = *(_QWORD *)(a1 + 32);
              if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v197 + 1) )
              {
                *(_QWORD *)(a1 + 24) = sub_1987B0(a1 + 24, *(_QWORD *)(a1 + 24), v197 + 1, 32);
                v197 = *(_QWORD *)(a1 + 32);
              }
              v198 = *(_QWORD *)(a1 + 24) + 32 * v197;
              a2 = (__int64)v230;
              *(_BYTE *)v198 = 2;
              *(_QWORD *)(v198 + 24) = 0;
              *(_OWORD *)(v198 + 8) = 0;
              ++*(_QWORD *)(a1 + 32);
              sub_1770A0(v198, v230);
              goto LABEL_70;
            }
            if ( !*(_QWORD *)v219
              || (a2 = (__int64)v230, v14 = *(_QWORD *)v219, !(unsigned int)sub_1770A0(*(_QWORD *)v219, v230)) )
            {
LABEL_298:
              v60 = 1;
              goto LABEL_72;
            }
            break;
          case 5:
          case 8:
            v14 = 1532;
            v62 = sub_18FA40(1532);
            goto LABEL_77;
          case 6:
            v14 = 1554;
            v62 = sub_18FA40(1554);
            goto LABEL_77;
          case 7:
            v14 = v46;
            v222 = (char *)a2;
            v221 = v44;
            v220.m128i_i64[1] = v46;
            v67 = sub_176BC0(v46);
            goto LABEL_87;
          case 9:
            v14 = v46;
            v222 = (char *)a2;
            v221 = v44;
            v220.m128i_i64[1] = v46;
            v67 = sub_177360(v46);
LABEL_87:
            v46 = v220.m128i_i64[1];
            v44 = v221;
            a2 = (__int64)v222;
            if ( !v67 )
              goto LABEL_88;
            continue;
          case 10:
            if ( *(_BYTE *)v46 == 2 && !*(_QWORD *)(v46 + 8) )
              goto LABEL_88;
            v14 = 1566;
            v62 = sub_18FA40(1566);
            goto LABEL_77;
          default:
            if ( !unk_2439A0 )
              sub_198E10(289);
            goto LABEL_389;
        }
        return result;
      case 0xF8u:
        v124 = *(_DWORD *)(a1 + 96);
        goto LABEL_200;
      case 0xF9u:
        v124 = *(_DWORD *)(a1 + 100);
LABEL_200:
        v14 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32;
        v225 = (char *)v14;
        if ( (unsigned int)((__int64 (*)(void))sub_177200)() )
          continue;
        v114 = v225;
        v116 = v124 + *((_DWORD *)v225 + 2);
        if ( (unsigned __int64)v116 < *(_QWORD *)(a1 + 32) )
          goto LABEL_183;
        if ( !unk_2439A0 )
          sub_198E10(292);
        goto LABEL_389;
      case 0xFAu:
        v14 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32;
        v225 = (char *)v14;
        if ( (unsigned int)sub_177200(v14) )
          continue;
        v114 = v225;
        v115 = *((_QWORD *)v225 + 1);
        if ( v115 < 0 || (unsigned __int64)v115 >= *(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL) )
        {
          if ( !unk_2439A0 )
            sub_198E10(294);
        }
        else
        {
          v116 = ~(_DWORD)v115;
LABEL_183:
          *v114 = 10;
          v117 = (__int64)v225;
          *((_QWORD *)v225 + 1) = a1;
          *(_DWORD *)(v117 + 16) = v116;
          a2 = *(_QWORD *)(a1 + 8);
          v118 = sub_1726A0(v117 + 8, a2);
          if ( v118 )
          {
            if ( *(_BYTE *)v118 == 10 )
              *(__m128i *)(v117 + 8) = _mm_loadu_si128((const __m128i *)(v118 + 8));
            goto LABEL_64;
          }
          if ( !unk_2439A0 )
            sub_198E10(293);
        }
        goto LABEL_389;
      case 0xFBu:
        v121 = *(_QWORD *)(a1 + 32) - 4LL;
        if ( v121 < 0 )
        {
          if ( !unk_2439A0 )
            sub_198E10(296);
          goto LABEL_389;
        }
        v122 = *(_QWORD *)(a1 + 24) + 32 * v121;
        v14 = v122 + 64;
        v225 = (char *)(v122 + 32);
        if ( (unsigned int)sub_177200(v122 + 64) )
          continue;
        v14 = v122 + 96;
        if ( (unsigned int)sub_177200(v122 + 96) )
          continue;
        a2 = *(_QWORD *)(v122 + 72);
        v14 = (__int64)v225;
        if ( (unsigned int)sub_172EE0((__int64)v225, a2, *(_QWORD *)(v122 + 104), (char *)v122, 0, v123) )
          continue;
        sub_176E10(a1);
        goto LABEL_174;
      case 0xFCu:
        v119 = *(_QWORD *)(a1 + 32) - 3LL;
        if ( v119 < 0 )
        {
          if ( !unk_2439A0 )
            sub_198E10(295);
          goto LABEL_389;
        }
        v120 = *(_QWORD *)(a1 + 24) + 32 * v119;
        v14 = v120 + 32;
        v225 = (char *)v120;
        if ( (unsigned int)sub_177200(v120 + 32) )
          continue;
        v14 = v120 + 64;
        if ( (unsigned int)sub_177200(v120 + 64) )
          continue;
        v14 = (__int64)v225;
        a2 = (__int64)v225;
        if ( (unsigned int)sub_179DC0(v225, v225, *(_QWORD *)(v120 + 40), *(_QWORD *)(v120 + 72), 0) )
          continue;
        sub_176E10(a1);
        goto LABEL_167;
      case 0xFDu:
        sub_176730(v230, *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        goto LABEL_109;
      case 0xFEu:
        v112 = *(_QWORD *)(a1 + 32) - 2LL;
        if ( v112 >= 0 )
        {
          v113 = *(_QWORD *)(a1 + 24) + 32 * v112;
          v14 = v113 + 32;
          v225 = (char *)v113;
          if ( (unsigned int)sub_177200(v113 + 32) )
            continue;
          v14 = (__int64)v225;
          a2 = (__int64)v225;
          if ( (unsigned int)sub_179DC0(v225, v225, *(_QWORD *)(v113 + 40), 0, 1) )
            continue;
LABEL_167:
          sub_176E10(a1);
          goto LABEL_64;
        }
        if ( !unk_2439A0 )
          sub_198E10(297);
        goto LABEL_389;
      case 0xFFu:
        v109 = *(_QWORD *)(a1 + 32) - 3LL;
        if ( v109 >= 0 )
        {
          v110 = *(_QWORD *)(a1 + 24) + 32 * v109;
          v14 = v110 + 64;
          v225 = (char *)(v110 + 32);
          if ( (unsigned int)sub_177200(v110 + 64) )
            continue;
          a2 = *(_QWORD *)(v110 + 72);
          v14 = (__int64)v225;
          if ( (unsigned int)sub_172EE0((__int64)v225, a2, 0, (char *)v110, 1u, v111) )
            continue;
LABEL_174:
          sub_176E10(a1);
          sub_1781A0(a1, v230);
          sub_176E10(a1);
          a2 = (__int64)v230;
          sub_177190(a1 + 24, v230);
          goto LABEL_64;
        }
        if ( !unk_2439A0 )
          sub_198E10(298);
        goto LABEL_389;
    }
  }
LABEL_71:
  v60 = 0;
LABEL_72:
  sub_176520(v230);
  return v60;
}
