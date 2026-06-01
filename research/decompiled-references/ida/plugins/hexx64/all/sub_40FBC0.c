__int64 __fastcall sub_40FBC0(__int64 a1, __m128i a2, __m128 a3, __m128 a4)
{
  char v4; // al
  __int64 result; // rax
  int v7; // r12d
  bool v8; // bl
  bool v9; // cl
  char v10; // bl
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // eax
  int v14; // r12d
  __int64 v15; // rax
  char v16; // dl
  unsigned __int16 v17; // ax
  int *v18; // rax
  __int64 v19; // r14
  char v20; // al
  char v21; // al
  int v22; // eax
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  _QWORD *v25; // r12
  unsigned __int64 v26; // r14
  _QWORD *v27; // rbx
  unsigned __int64 v28; // rdx
  char v29; // cl
  _QWORD *v30; // rax
  int v31; // ebx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  char v35; // al
  __int64 v36; // rcx
  __int16 v37; // dx
  __int64 v38; // r8
  unsigned __int64 v39; // rcx
  _QWORD *v40; // r14
  unsigned __int64 v41; // rdx
  char v42; // si
  _QWORD *v43; // rax
  int v44; // eax
  _QWORD *v45; // r12
  _QWORD *v46; // rbx
  unsigned __int64 v47; // rdx
  char v48; // cl
  _QWORD *v49; // rax
  __int64 v50; // rax
  char *v51; // rcx
  int v52; // ebx
  int v53; // eax
  __int64 v54; // rax
  unsigned int v55; // eax
  int v56; // eax
  __int64 v57; // rbx
  __int64 v58; // r14
  int v59; // eax
  char v60; // bl
  int dtype_size; // eax
  int v62; // r13d
  int v63; // eax
  int v64; // eax
  int v65; // r13d
  int v66; // eax
  int v67; // r13d
  int v68; // eax
  int v69; // r12d
  int v70; // eax
  __int64 v71; // rax
  __int64 v72; // rdi
  _QWORD *v73; // r14
  unsigned __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rdi
  unsigned __int64 v77; // r14
  __int64 v78; // rsi
  __int64 (*v79)(); // rax
  unsigned __int64 *v80; // rax
  int v81; // ebx
  int v82; // eax
  __int64 v83; // rdx
  __int64 v84; // rcx
  int v85; // eax
  unsigned __int8 v86; // al
  __int64 v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rax
  int v91; // ecx
  __int64 v92; // rax
  int v93; // ecx
  int v94; // r12d
  int v95; // ebx
  int v96; // eax
  int v97; // r13d
  int v98; // ebx
  int v99; // eax
  unsigned int v100; // eax
  int v101; // eax
  __int64 v102; // r8
  int v103; // r9d
  int v104; // r11d
  unsigned int v105; // eax
  unsigned __int8 v106; // bl
  int v107; // r12d
  int v108; // eax
  int v109; // eax
  int v110; // eax
  int v111; // eax
  int v112; // eax
  int v113; // eax
  __int64 v114; // rbx
  int v115; // eax
  int v116; // eax
  int v117; // eax
  int v118; // ebx
  int v119; // r12d
  int v120; // eax
  int v121; // ebx
  int v122; // eax
  int v123; // ebx
  int v124; // r12d
  unsigned int v125; // eax
  int v126; // ebx
  int v127; // eax
  int v128; // r12d
  int v129; // ebx
  int v130; // eax
  __int64 v131; // rbx
  __int64 v132; // rcx
  __int64 v133; // r9
  int v134; // ebx
  int v135; // r13d
  __int16 v136; // ax
  unsigned int v137; // r12d
  int v138; // eax
  int v139; // eax
  int v140; // eax
  int v141; // ebx
  int v142; // eax
  int v143; // ebx
  int v144; // eax
  int v145; // ebx
  int v146; // r12d
  int v147; // eax
  int v148; // ebx
  int v149; // eax
  __int64 v150; // rbx
  int v151; // eax
  int v152; // ebx
  int v153; // eax
  int v154; // eax
  int v155; // ebx
  int v156; // eax
  int v157; // r12d
  int v158; // ebx
  int v159; // eax
  int v160; // ebx
  int v161; // eax
  unsigned int v162; // eax
  int v163; // ebx
  int v164; // eax
  int v165; // ebx
  signed int v166; // eax
  int v167; // ebx
  signed int v168; // eax
  int v169; // eax
  __int64 v170; // r9
  int v171; // ebx
  int v172; // ecx
  char v173; // al
  unsigned int v174; // ebx
  __int64 v175; // r9
  int v176; // eax
  __int64 v177; // rsi
  int v178; // edx
  __m128i v179; // xmm3
  unsigned int v180; // eax
  int v181; // eax
  int v182; // eax
  __int64 v183; // r9
  int v184; // ebx
  int v185; // eax
  unsigned int v186; // ebx
  int v187; // eax
  unsigned int v188; // ebx
  int v189; // eax
  int v190; // eax
  char *v191; // rbx
  unsigned int v192; // r14d
  unsigned int v193; // eax
  unsigned int v194; // r14d
  unsigned int v195; // ebx
  unsigned int v196; // eax
  int v197; // r14d
  __m128i *v198; // rdi
  int v199; // ebx
  int v200; // r14d
  int v201; // ebx
  int v202; // eax
  int v203; // r14d
  __m128i *v204; // rdi
  int v205; // ebx
  int v206; // eax
  int v207; // r14d
  int v208; // ebx
  int v209; // eax
  unsigned int v210; // ebx
  unsigned int v211; // eax
  int v212; // eax
  unsigned int v213; // r14d
  unsigned int v214; // ebx
  int v215; // eax
  int v216; // ebx
  int v217; // ecx
  unsigned __int8 v218; // al
  __int64 v219; // rdx
  unsigned __int64 v220; // rcx
  int v221; // eax
  __int32 v222; // ebx
  int v223; // eax
  char v224; // al
  int v225; // ebx
  int v226; // ecx
  unsigned __int8 v227; // al
  int v228; // ebx
  int v229; // eax
  int v230; // ebx
  int v231; // eax
  int v232; // r12d
  int v233; // ebx
  __int64 v234; // rdx
  unsigned __int64 v235; // rcx
  int v236; // eax
  __int64 v237; // rbx
  int v238; // eax
  int v239; // r12d
  int v240; // eax
  int v241; // eax
  int v242; // eax
  int v243; // r12d
  int v244; // ebx
  int v245; // eax
  int v246; // eax
  int v247; // ebx
  int v248; // eax
  __int32 v249; // eax
  int v250; // ebx
  int v251; // eax
  int v252; // eax
  int v253; // eax
  int v254; // eax
  int v255; // eax
  int v256; // eax
  int v257; // eax
  int v258; // eax
  int v259; // eax
  int v260; // eax
  int v261; // eax
  int v262; // eax
  int v263; // eax
  int v264; // eax
  char v265; // al
  int v266; // eax
  int v267; // eax
  int v268; // eax
  int v269; // ebx
  int v270; // eax
  int v271; // ebx
  int v272; // eax
  int v273; // ebx
  int v274; // eax
  int v275; // r12d
  int v276; // eax
  int v277; // r12d
  int v278; // eax
  int v279; // r12d
  int v280; // r14d
  int v281; // eax
  int v282; // eax
  int v283; // eax
  const char *v284; // r13
  unsigned int v285; // r12d
  unsigned int v286; // r14d
  unsigned int v287; // eax
  unsigned int v288; // r12d
  int v289; // ebx
  int v290; // eax
  int v291; // [rsp+8h] [rbp-248h]
  int v292; // [rsp+8h] [rbp-248h]
  int v293; // [rsp+8h] [rbp-248h]
  int v294; // [rsp+8h] [rbp-248h]
  int v295; // [rsp+10h] [rbp-240h]
  int v296; // [rsp+10h] [rbp-240h]
  int v297; // [rsp+10h] [rbp-240h]
  int v298; // [rsp+18h] [rbp-238h]
  __int64 v299; // [rsp+18h] [rbp-238h]
  unsigned __int64 v300; // [rsp+18h] [rbp-238h]
  __int64 v301; // [rsp+18h] [rbp-238h]
  __int64 v302; // [rsp+18h] [rbp-238h]
  __int64 v303; // [rsp+20h] [rbp-230h]
  signed int v304; // [rsp+28h] [rbp-228h]
  __int64 v305; // [rsp+28h] [rbp-228h]
  unsigned __int64 v306; // [rsp+28h] [rbp-228h]
  unsigned __int8 v307; // [rsp+28h] [rbp-228h]
  unsigned int v308; // [rsp+28h] [rbp-228h]
  signed int v309; // [rsp+30h] [rbp-220h]
  unsigned __int8 dtype_by_size; // [rsp+30h] [rbp-220h]
  __int16 v311; // [rsp+34h] [rbp-21Ch]
  unsigned int v312; // [rsp+38h] [rbp-218h]
  unsigned __int64 v313; // [rsp+38h] [rbp-218h]
  __int128 v314; // [rsp+40h] [rbp-210h] BYREF
  _BYTE v315[12]; // [rsp+50h] [rbp-200h] BYREF
  __int64 tinfo_property; // [rsp+60h] [rbp-1F0h] BYREF
  __int64 v317; // [rsp+68h] [rbp-1E8h]
  __m128i v318; // [rsp+70h] [rbp-1E0h] BYREF
  char v319; // [rsp+80h] [rbp-1D0h]
  __m128i v320; // [rsp+90h] [rbp-1C0h] BYREF
  char v321; // [rsp+A0h] [rbp-1B0h]
  __int128 v322; // [rsp+B0h] [rbp-1A0h]
  __int64 v323; // [rsp+C0h] [rbp-190h]
  __int64 v324; // [rsp+C8h] [rbp-188h]
  __int64 v325; // [rsp+D0h] [rbp-180h]
  _BYTE v326[6]; // [rsp+D8h] [rbp-178h] BYREF
  __int16 v327; // [rsp+DEh] [rbp-172h]
  char v328; // [rsp+101h] [rbp-14Fh]
  __int16 v329; // [rsp+106h] [rbp-14Ah]
  unsigned __int64 v330; // [rsp+218h] [rbp-38h] BYREF

  v4 = *(_BYTE *)(a1 + 384);
  v330 = __readfsqword(0x28u);
  if ( v4 )
  {
    if ( v4 != 1 )
      return 0;
    if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double, double))(**(_QWORD **)(a1 + 832) + 240LL))(
            *(_QWORD *)(a1 + 832),
            5,
            *(_QWORD *)(a1 + 40),
            *(double *)a2.m128i_i64,
            *(double *)a3.m128_u64)
        & 1) == 0 )
    {
      sub_409E20(a1, *(double *)a2.m128i_i64);
      return 0;
    }
  }
  v7 = *(unsigned __int16 *)(a1 + 48);
  v8 = (_WORD)v7 == 28;
  v9 = (_WORD)v7 == 207;
  if ( (unsigned __int16)(v7 - 107) <= 0x3Cu )
  {
    v11 = 0xEFFFFFFFFFFDFFFELL;
    v10 = !_bittest64((const __int64 *)&v11, (unsigned int)(v7 - 107)) || v9 || v8;
    if ( v10 )
      return sub_406A00(a1, *(double *)a2.m128i_i64, *(double *)a3.m128_u64, a4);
  }
  else
  {
    v10 = v9 || v8;
    if ( v10 )
      return sub_406A00(a1, *(double *)a2.m128i_i64, *(double *)a3.m128_u64, a4);
  }
  if ( (_WORD)v7 == 5 || (_WORD)v7 == 166 )
  {
    v23 = *(_QWORD **)(a1 + 856);
    v24 = &v23[*(_QWORD *)(a1 + 864)];
    if ( v23 != v24 )
    {
      while ( *(_QWORD *)(a1 + 40) != *v23 )
      {
        if ( v24 == ++v23 )
          goto LABEL_11;
      }
      if ( v24 != v23 )
        return 0;
    }
  }
LABEL_11:
  v318.m128i_i64[0] = a1;
  v319 = 0;
  v318.m128i_i64[1] = 0xFFFFFFFF00000000LL;
  v320.m128i_i64[0] = a1;
  v320.m128i_i64[1] = 0xFFFFFFFF00000001LL;
  v321 = 0;
  LOBYTE(v312) = sub_3FA390(a1, a1 + 64);
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 8LL);
  v13 = *(_DWORD *)(v12 + 104);
  if ( v7 >= v13 && v7 < *(_DWORD *)(v12 + 108) )
  {
    v14 = *(_DWORD *)(*(_QWORD *)(v12 + 112) + 16LL * (v7 - v13) + 8);
    v311 = v14;
  }
  else
  {
    v311 = 0;
    v14 = 0;
  }
  v15 = getseg();
  if ( v15 && !*(_BYTE *)(v15 + 43) )
  {
    v45 = *(_QWORD **)(a1 + 8);
    v46 = (_QWORD *)v45[127];
    v313 = *(_QWORD *)(a1 + 40);
    if ( !v46 )
    {
      if ( (_QWORD *)v45[128] != v45 + 126 && *(_QWORD *)(std::_Rb_tree_decrement() + 32) >= v313 )
        return sub_407720(a1, v311, (__int64)&v318, (__int64)&v320, a2, a3, a4);
      goto LABEL_123;
    }
    while ( 1 )
    {
      v47 = v46[4];
      v48 = 0;
      v49 = (_QWORD *)v46[3];
      if ( v313 < v47 )
      {
        v49 = (_QWORD *)v46[2];
        v48 = 1;
      }
      if ( !v49 )
        break;
      v46 = v49;
    }
    if ( v48 )
    {
      if ( (_QWORD *)v45[128] == v46 )
        goto LABEL_123;
      v47 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
    }
    if ( v47 >= v313 )
      return sub_407720(a1, v311, (__int64)&v318, (__int64)&v320, a2, a3, a4);
LABEL_123:
    *(_QWORD *)(operator new(0x28u) + 32) = *(_QWORD *)(a1 + 40);
    std::_Rb_tree_insert_and_rebalance();
    ++v45[130];
    return sub_407720(a1, v311, (__int64)&v318, (__int64)&v320, a2, a3, a4);
  }
  if ( *(_BYTE *)(a1 + 56) != 33 || *(_BYTE *)(*(_QWORD *)(a1 + 800) + 144LL) )
  {
    v16 = *(_BYTE *)(a1 + 65);
  }
  else
  {
    v35 = getinf();
    v36 = 262;
    v16 = *(_BYTE *)(a1 + 65);
    if ( _bittest64(&v36, v35 & 0xF)
      && (dword_42EDA0[v16 != 2] & v14) != 0
      && *(_BYTE *)(a1 + 40LL * (v16 != 2) + 65) == 2
      && !*(_QWORD *)(a1 + 40LL * (v16 != 2) + 80) )
    {
      return 0;
    }
  }
  v17 = *(_WORD *)(a1 + 48);
  if ( v16 != 1 || *(_WORD *)(a1 + 70) != 5 || (v14 & 4) == 0 )
    goto LABEL_19;
  if ( v17 == 122 )
  {
    if ( *(_BYTE *)(a1 + 105) == 1 )
      goto LABEL_97;
    goto LABEL_174;
  }
  if ( v17 != 92 )
  {
    HIBYTE(v37) = HIBYTE(*(_WORD *)(a1 + 48));
    LOBYTE(v37) = v17 & 0x7F;
    if ( v37 != 6 && v17 != 209 )
    {
LABEL_174:
      v72 = *(_QWORD *)(a1 + 8);
      if ( (*(_BYTE *)(v72 + 112) & 0x10) != 0 )
      {
        v73 = sub_1CE9E0(v72);
        if ( !v73 )
        {
          if ( !under_debugger )
            sub_383060(0xC557u, *(double *)a2.m128i_i64);
          goto LABEL_412;
        }
        get_func();
        v74 = v73[2] & 0xFFFFFFFFFFFFFFEFLL;
        v73[2] = v74;
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 112LL) = v74;
        update_func();
        v17 = *(_WORD *)(a1 + 48);
      }
LABEL_19:
      v303 = a1 + 24;
      if ( (*(_BYTE *)(a1 + 52) & 7) != 0 )
      {
        if ( v17 != 159 )
          goto LABEL_108;
        if ( (v14 & 0x10000) == 0 )
          goto LABEL_99;
      }
      else if ( v17 != 752 )
      {
        if ( (v14 & 0x10000) != 0 )
        {
          if ( (unsigned __int16)(v17 - 152) <= 1u )
            goto LABEL_99;
          goto LABEL_23;
        }
LABEL_108:
        if ( v17 != 515 )
        {
          if ( v17 > 0x203u )
          {
            if ( v17 != 604 )
              goto LABEL_99;
          }
          else if ( v17 > 0x100u )
          {
            if ( (unsigned __int16)(v17 - 258) > 0x53u )
              goto LABEL_99;
          }
          else if ( v17 <= 0xF4u )
          {
            goto LABEL_99;
          }
        }
        v44 = sub_40FAA0((_QWORD *)a1, *(double *)a2.m128i_i64, a3);
        *(_DWORD *)(a1 + 892) = v44;
        if ( v44 >= 0 && (unsigned __int16)(*(_WORD *)(a1 + 48) - 314) <= 2u )
          return 0;
        goto LABEL_32;
      }
      if ( (v14 & 2) == 0 )
      {
LABEL_31:
        v10 = 1;
        goto LABEL_32;
      }
      goto LABEL_29;
    }
  }
LABEL_97:
  v303 = a1 + 24;
  if ( (*(_BYTE *)(a1 + 52) & 7) != 0 || (v14 & 0x10000) == 0 )
  {
LABEL_99:
    v38 = *(_QWORD *)(a1 + 8);
    v39 = *(_QWORD *)(a1 + 40);
    v40 = *(_QWORD **)(v38 + 1016);
    if ( !v40 )
    {
      v306 = *(_QWORD *)(a1 + 40);
      if ( v38 + 1008 == *(_QWORD *)(v38 + 1024) )
        goto LABEL_107;
      v301 = *(_QWORD *)(a1 + 8);
      v71 = std::_Rb_tree_decrement();
      v38 = v301;
      if ( *(_QWORD *)(v71 + 32) < v306 )
        goto LABEL_107;
LABEL_32:
      v18 = *(int **)(a1 + 832);
      v19 = v18[113];
      v298 = v18[116];
      v304 = v18[114];
      v295 = v18[115];
      v309 = v18[117];
      if ( (v14 & 0x100) != 0 || (v20 = *(_BYTE *)(a1 + 65), v20 == 1) || v20 == 11 )
      {
        sub_3FA580(v318.m128i_i32, 1, 0, a2, a3, a4);
      }
      else
      {
        v318.m128i_i32[3] = v19;
        v319 = 1;
      }
      if ( (v14 & 0x200) != 0 || (v21 = *(_BYTE *)(a1 + 105), v21 == 1) || v21 == 11 )
      {
        sub_3FA580(v320.m128i_i32, 1, 0, a2, a3, a4);
      }
      else
      {
        v321 = 1;
        v320.m128i_i32[3] = v304;
      }
      if ( !v10 && *(int *)(a1 + 892) < 0 || v318.m128i_i32[3] == -1 || v320.m128i_i32[3] == -1 )
        goto LABEL_63;
      v22 = *(unsigned __int16 *)(a1 + 48);
      if ( (unsigned __int16)v22 > 0x8Fu )
      {
        if ( (unsigned __int16)v22 <= 0x2F6u )
          goto LABEL_49;
        if ( (unsigned __int16)(v22 - 1775) > 1u )
          goto LABEL_63;
      }
      else
      {
        if ( (unsigned __int16)v22 <= 0x79u )
        {
          if ( (_WORD)v22 == 6 )
          {
            if ( (unsigned __int8)(*(_BYTE *)(a1 + 56) - 33) > 1u )
            {
LABEL_167:
              v62 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              v63 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v64 = sub_409840(a1, v312, v63, v62, *(double *)a2.m128i_i64, a3, a4);
              if ( v64 == 1 )
                return 0;
              if ( v64 == -1 )
                return 4294967294LL;
              v65 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v66 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              sub_3F7E20(a1, 0x19u, (unsigned __int8)v312, v66, v65, 0, a2, a3, a4, 0);
              v67 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v68 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              sub_3F7E20(a1, 0x1Au, (unsigned __int8)v312, v68, v67, 3, a2, a3, a4, 0);
              v69 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v70 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              sub_3F7E20(a1, 0xCu, (unsigned __int8)v312, v70, v69, v298, a2, a3, a4, 0);
              v318.m128i_i32[3] = v298;
              v319 = 1;
LABEL_165:
              sub_3FD520(a1, v318.m128i_i32[3], v312, a2, a3, a4);
              goto LABEL_75;
            }
          }
          else
          {
            if ( (_WORD)v22 != 44 )
            {
              if ( (unsigned __int16)v22 > 4u )
                goto LABEL_49;
LABEL_63:
              if ( (unsigned __int8)sub_3FD5C0(
                                      a1,
                                      (__int64)&v318,
                                      &v320,
                                      v312,
                                      *(double *)a2.m128i_i64,
                                      *(double *)a3.m128_u64,
                                      a4) )
                return 0;
              v25 = *(_QWORD **)(a1 + 8);
              v26 = *(_QWORD *)(a1 + 40);
              v27 = (_QWORD *)v25[127];
              if ( v27 )
              {
                while ( 1 )
                {
                  v28 = v27[4];
                  v29 = 0;
                  v30 = (_QWORD *)v27[3];
                  if ( v26 < v28 )
                  {
                    v30 = (_QWORD *)v27[2];
                    v29 = 1;
                  }
                  if ( !v30 )
                    break;
                  v27 = v30;
                }
                if ( !v29 )
                  goto LABEL_71;
              }
              else
              {
                v27 = v25 + 126;
              }
              if ( v27 == (_QWORD *)v25[128] )
                goto LABEL_72;
              v28 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
LABEL_71:
              if ( v28 >= v26 )
                return sub_407720(a1, v311, (__int64)&v318, (__int64)&v320, a2, a3, a4);
LABEL_72:
              *(_QWORD *)(operator new(0x28u) + 32) = *(_QWORD *)(a1 + 40);
              std::_Rb_tree_insert_and_rebalance();
              ++v25[130];
              return sub_407720(a1, v311, (__int64)&v318, (__int64)&v320, a2, a3, a4);
            }
            if ( (unsigned __int8)(*(_BYTE *)(a1 + 56) - 33) > 1u )
            {
LABEL_163:
              v314 = 0xFFFFFFFF00000000LL;
              dtype_size = get_dtype_size();
              sub_120A10((__int64)&v314, *(unsigned __int64 **)(a1 + 832), 1, dtype_size, -1, 0);
              a2 = _mm_unpacklo_epi32(
                     _mm_cvtsi32_si128(DWORD1(v314)),
                     _mm_cvtsi32_si128(sub_3FAE20((__int64)&v318, a2, a3, a4)));
              *(_DWORD *)v315 = 1;
              tinfo_property = 0x100000001LL;
              v317 = 3;
              *(_QWORD *)&v315[4] = a2.m128i_i64[0];
              sub_1D6450(a1, 26, (unsigned __int8 *)&v314, v315, (unsigned __int8 *)&tinfo_property, a2, a3, a4);
              sub_1D6450(a1, 12, (unsigned __int8 *)&v314, v315, v315, a2, a3, a4);
              sub_11CDA0((__int64)&tinfo_property);
              sub_11CDA0((__int64)v315);
              sub_11CDA0((__int64)&v314);
LABEL_164:
              if ( !v319 && !(unsigned __int8)sub_3FACB0((__int64)&v318, a2, a3, a4) )
                goto LABEL_178;
              goto LABEL_165;
            }
          }
          if ( (unsigned __int8)(*(_BYTE *)(a1 + 65) - 2) <= 2u )
            goto LABEL_63;
LABEL_49:
          switch ( *(_WORD *)(a1 + 48) )
          {
            case 5:
              v118 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v119 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              v120 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_1D6910(a1, v312, v120, v119, v118, v298, a2, a3, a4, v295);
              goto LABEL_164;
            case 6:
              goto LABEL_167;
            case 7:
              v94 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v95 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v96 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              sub_3F7E20(a1, 0x14u, (unsigned __int8)v312, v96, v95, v94, a2, a3, a4, 0);
              goto LABEL_218;
            case 0x10:
            case 0x56:
            case 0x59:
              if ( !(unsigned __int8)sub_1D61C0(a1) )
              {
                if ( *(_BYTE *)(a1 + 65) == 7 )
                {
                  v87 = *(_QWORD *)(a1 + 800);
                  tinfo_property = 0xFFFFFFFF00000000LL;
                  v88 = *(_QWORD *)(*(_QWORD *)(v87 + 24) + 16LL);
                  v89 = *(_QWORD *)(a1 + 80) + 16LL * *(_QWORD *)(a1 + 24);
                  if ( v89 != v88 )
                  {
                    if ( v89 == -1 )
                      v88 = -1;
                    else
                      v88 &= v89;
                  }
                  v90 = *(_QWORD *)(a1 + 832);
                  LOBYTE(tinfo_property) = 6;
                  v91 = *(_DWORD *)(v90 + 84);
                  v92 = 0;
                  v93 = 8 * v91;
                  if ( (unsigned __int64)v93 <= 0x3F )
                    v92 = 1LL << v93;
                  v317 = v88 & (v92 - 1);
                  sub_1D6450(a1, 55, (unsigned __int8 *)&tinfo_property, nullptr, nullptr, a2, a3, a4);
                  sub_11CDA0((__int64)&tinfo_property);
                }
                else
                {
                  v288 = sub_3EBC60(*(_DWORD *)(a1 + 52));
                  v289 = sub_3FAE20((__int64)&v318, a2, a3, a4);
                  v290 = sub_3FAE20((__int64)&v318, a2, a3, a4);
                  sub_3F7E20(
                    a1,
                    0x36u,
                    (unsigned __int8)v312,
                    0x3BEA45E214ADDC55LL,
                    *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) + v290,
                    v289,
                    a2,
                    a3,
                    a4,
                    v288);
                }
              }
              goto LABEL_75;
            case 0x11:
            case 0x57:
              if ( !v319 )
                sub_3FA580(v318.m128i_i32, 0, 0, a2, a3, a4);
              v176 = get_dtype_size();
              v177 = *(_QWORD *)(a1 + 832);
              a4 = (__m128)_mm_cvtsi32_si128(v309);
              v178 = 4;
              v179 = _mm_cvtsi32_si128(v304);
              v296 = v176;
              a2 = _mm_cvtsi32_si128(*(_DWORD *)(v177 + 80));
              if ( v176 != 6 )
                v178 = v176;
              LODWORD(v314) = 1;
              tinfo_property = 0xFFFFFFFF00000000LL;
              v317 = 0;
              *(_DWORD *)v315 = 1;
              *(_QWORD *)((char *)&v314 + 4) = _mm_unpacklo_epi32(a2, (__m128i)a4).m128i_u64[0];
              a3 = (__m128)_mm_unpacklo_epi32(a2, v179);
              *(_QWORD *)&v315[4] = a3.m128_u64[0];
              sub_120A10((__int64)&tinfo_property, (unsigned __int64 *)v177, v178, _mm_cvtsi128_si32(a2), -1, 0);
              sub_1D6450(a1, 12, (unsigned __int8 *)&tinfo_property, (unsigned __int8 *)&v314, v315, a2, a3, a4);
              v180 = sub_3EBC60(*(_DWORD *)(a1 + 52));
              v302 = v304;
              sub_3F7E20(a1, 2u, 1, *(int *)(*(_QWORD *)(a1 + 832) + 472LL), v304, v304, a2, a3, a4, v180);
              if ( v304 != (unsigned int)sub_3FAE20((__int64)&v318, a2, a3, a4) )
              {
                if ( (int)sub_3ECD50(v303) > v296 )
                {
                  v307 = *(_BYTE *)(a1 + 69);
                  dtype_by_size = get_dtype_by_size();
                  v297 = sub_3FAE20((__int64)&v318, a2, a3, a4);
                  v181 = sub_3FAE20((__int64)&v318, a2, a3, a4);
                  sub_1D6840(a1, v307, dtype_by_size, v181, v297, 0, a2, a3, a4);
                }
                v308 = sub_3ECD50(v303);
                v182 = sub_3FAE20((__int64)&v318, a2, a3, a4);
                sub_3F7E20(a1, 0x36u, (unsigned __int8)v312, 0x3BEA45E214ADDC55LL, v302, v182, a2, a3, a4, v308);
                sub_11CDA0((__int64)&tinfo_property);
                sub_11CDA0((__int64)v315);
                sub_11CDA0((__int64)&v314);
                goto LABEL_75;
              }
              if ( !under_debugger )
                sub_383060(0xC7C6u, *(double *)a2.m128i_i64);
              return result;
            case 0x12:
            case 0x58:
              v174 = sub_3ECD50(v303);
              v175 = (int)sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F7E20(
                a1,
                0x36u,
                (unsigned __int8)v312,
                0x3BEA45E214ADDC55LL,
                *(int *)(*(_QWORD *)(a1 + 832) + 64LL),
                v175,
                a2,
                a3,
                a4,
                v174);
              goto LABEL_75;
            case 0x13:
            case 0x14:
            case 0x15:
              v171 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v172 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              if ( (_BYTE)v312 )
              {
                if ( (_BYTE)v312 == 1 )
                  v173 = 2;
                else
                  v173 = ((_BYTE)v312 != 2) + 7;
              }
              else
              {
                v173 = 1;
              }
              sub_1D6840(a1, (unsigned __int8)v312, (unsigned int)v173, v172, v171, 1u, a2, a3, a4);
              goto LABEL_75;
            case 0x16:
              v170 = 0;
              goto LABEL_283;
            case 0x17:
              v170 = *(int *)(*(_QWORD *)(a1 + 832) + 700LL);
LABEL_283:
              sub_3F7E20(a1, 3u, 0, 0, 0x3BEA45E214ADDC55LL, v170, a2, a3, a4, 0);
              goto LABEL_75;
            case 0x1A:
              v183 = 0;
              goto LABEL_299;
            case 0x1B:
              v140 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v312 = (unsigned __int8)v312;
              sub_3F7E20(a1, 4u, (unsigned __int8)v312, v140, 0x3BEA45E214ADDC55LL, (int)v19, a2, a3, a4, 0);
              v318.m128i_i32[3] = v19;
              v319 = 1;
              goto LABEL_261;
            case 0x1D:
            case 0x1E:
            case 0x1F:
              v139 = get_dtype_size();
              *(_DWORD *)v315 = 1;
              *(_DWORD *)&v315[4] = v139;
              *(_DWORD *)&v315[8] = 8;
              tinfo_property = 0xFFFFFFFF00000000LL;
              v317 = 0;
              sub_1252A0((__int64)&tinfo_property, 8, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 380LL), v139);
              sub_1D6450(a1, 8, v315, nullptr, (unsigned __int8 *)&tinfo_property, a2, a3, a4);
              sub_11CDA0((__int64)&tinfo_property);
              sub_11CDA0((__int64)v315);
              goto LABEL_75;
            case 0x22:
              v314 = 0xFFFFFFFF00000000LL;
              v117 = get_dtype_size();
              sub_120A10((__int64)&v314, *(unsigned __int64 **)(a1 + 832), 1, v117, -1, 0);
              a2 = _mm_unpacklo_epi32(
                     _mm_cvtsi32_si128(DWORD1(v314)),
                     _mm_cvtsi32_si128(sub_3FAE20((__int64)&v318, a2, a3, a4)));
              *(_DWORD *)v315 = 1;
              tinfo_property = 0x100000001LL;
              v317 = 3;
              *(_QWORD *)&v315[4] = a2.m128i_i64[0];
              sub_1D6450(a1, 30, v315, (unsigned __int8 *)&v314, (unsigned __int8 *)&tinfo_property, a2, a3, a4);
              sub_1D6450(a1, 13, v315, (unsigned __int8 *)&v314, v315, a2, a3, a4);
              sub_11CDA0((__int64)&tinfo_property);
              sub_11CDA0((__int64)v315);
              sub_11CDA0((__int64)&v314);
              goto LABEL_164;
            case 0x23:
              v116 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              sub_3FB450(a1, v116, v312, 0, a2, a3, a4);
              goto LABEL_75;
            case 0x24:
            case 0x25:
            case 0x26:
              sub_3F8D40(a1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 400LL), v312, a2, a3, a4);
              if ( *(_QWORD *)(a1 + 112) )
                return 4294967294LL;
              sub_3F7E20(
                a1,
                4u,
                (unsigned __int8)v312,
                *(int *)(*(_QWORD *)(a1 + 832) + 400LL),
                0x3BEA45E214ADDC55LL,
                *(int *)(*(_QWORD *)(a1 + 832) + 60LL),
                a2,
                a3,
                a4,
                0);
              v114 = *(int *)(*(_QWORD *)(a1 + 832) + 60LL);
              v115 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F7E20(
                a1,
                0xDu,
                (unsigned __int8)v312,
                *(int *)(*(_QWORD *)(a1 + 832) + 60LL),
                v115,
                v114,
                a2,
                a3,
                a4,
                0);
              goto LABEL_75;
            case 0x29:
              v113 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              sub_3FB450(a1, v113, v312, 1u, a2, a3, a4);
              goto LABEL_75;
            case 0x2A:
              v121 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              v122 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3FB8C0(a1, 1u, v122, v121, v312, a2, a3, a4);
              goto LABEL_75;
            case 0x2C:
              goto LABEL_163;
            case 0x35:
            case 0x45:
            case 0xE5:
            case 0xFB:
              v131 = v298;
              v132 = 0;
              v133 = v298;
              goto LABEL_249;
            case 0x36:
            case 0x44:
            case 0x46:
            case 0xEC:
            case 0xF9:
              sub_3F7E20(a1, 6u, 0, 0, 0x3BEA45E214ADDC55LL, v298, a2, a3, a4, 0);
              goto LABEL_81;
            case 0x37:
            case 0x39:
            case 0x43:
            case 0xE6:
            case 0xF5:
              v34 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3FC4D0(a1, 0, v34, a2, a3, a4);
              goto LABEL_75;
            case 0x38:
            case 0x42:
            case 0xE7:
            case 0xF7:
              sub_3F7E20(a1, 0x13u, 0, 0, 1, v298, a2, a3, a4, 0);
              goto LABEL_81;
            case 0x3A:
            case 0x3B:
            case 0x3C:
              v86 = sub_3EBDA0(*(_DWORD *)(a1 + 52));
              sub_3FB720(a1, 0x21u, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 388LL), v86, v298, a2, a3, a4);
              goto LABEL_81;
            case 0x3D:
            case 0x55:
            case 0xF4:
            case 0xF6:
              v85 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3FC4D0(a1, 1, v85, a2, a3, a4);
              goto LABEL_75;
            case 0x3E:
            case 0x4B:
            case 0xE8:
              v131 = v298;
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v298, a2, a3, a4, 0);
              v133 = v298;
              v132 = v298;
LABEL_249:
              sub_3F7E20(a1, 0x13u, 0, v132, 1, v133, a2, a3, a4, 0);
              goto LABEL_250;
            case 0x3F:
            case 0x4A:
            case 0xE9:
              v131 = v298;
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v298, a2, a3, a4, 0);
LABEL_250:
              sub_3F7E20(a1, 6u, 0, v131, 0x3BEA45E214ADDC55LL, v131, a2, a3, a4, 0);
              goto LABEL_81;
            case 0x40:
            case 0x49:
            case 0xEA:
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v298, a2, a3, a4, 0);
              goto LABEL_81;
            case 0x41:
            case 0x48:
            case 0xEB:
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v298, a2, a3, a4, 0);
              sub_3F7E20(a1, 0x13u, 0, v298, 1, v298, a2, a3, a4, 0);
              goto LABEL_81;
            case 0x47:
            case 0x4F:
            case 0xF0:
            case 0xFA:
              sub_3F7E20(a1, 6u, 0, 1, 0x3BEA45E214ADDC55LL, v298, a2, a3, a4, 0);
              goto LABEL_81;
            case 0x4C:
            case 0xED:
              sub_3F7E20(a1, 6u, 0, 3, 0x3BEA45E214ADDC55LL, v298, a2, a3, a4, 0);
              goto LABEL_81;
            case 0x4D:
            case 0x53:
            case 0xEE:
            case 0xFC:
              sub_3F7E20(a1, 6u, 0, 4, 0x3BEA45E214ADDC55LL, v298, a2, a3, a4, 0);
              goto LABEL_81;
            case 0x4E:
            case 0xEF:
              sub_3F7E20(a1, 6u, 0, 2, 0x3BEA45E214ADDC55LL, v298, a2, a3, a4, 0);
LABEL_81:
              if ( !v319 && !(unsigned __int8)sub_3FACB0((__int64)&v318, a2, a3, a4) )
                goto LABEL_178;
              sub_3FC4D0(a1, v298, v318.m128i_i32[3], a2, a3, a4);
              goto LABEL_75;
            case 0x50:
            case 0xF1:
              v110 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3FC4D0(a1, 3, v110, a2, a3, a4);
              goto LABEL_75;
            case 0x51:
            case 0x52:
            case 0xF2:
            case 0xF8:
              v109 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3FC4D0(a1, 4, v109, a2, a3, a4);
              goto LABEL_75;
            case 0x54:
            case 0xF3:
              v111 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3FC4D0(a1, 2, v111, a2, a3, a4);
              goto LABEL_75;
            case 0x5A:
              sub_3F7E20(a1, 4u, 0, *(int *)(*(_QWORD *)(a1 + 832) + 524LL), 0x3BEA45E214ADDC55LL, 9, a2, a3, a4, 0);
              goto LABEL_75;
            case 0x5C:
              v106 = sub_3EBDA0(*(_DWORD *)(a1 + 52));
              if ( v106 < (unsigned __int8)v312 )
              {
                v107 = sub_3FAE20((__int64)&v318, a2, a3, a4);
                v108 = sub_3FAE20((__int64)&v320, a2, a3, a4);
                sub_1D6840(a1, v106, (unsigned __int8)v312, v108, v107, 0, a2, a3, a4);
                goto LABEL_75;
              }
              v81 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v112 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              v83 = (unsigned int)(char)v312;
              v84 = v112;
              goto LABEL_191;
            case 0x5D:
            case 0x5E:
            case 0x5F:
              sub_3F7E20(
                a1,
                4u,
                (unsigned __int8)v312,
                *(int *)(*(_QWORD *)(a1 + 832) + 400LL),
                0x3BEA45E214ADDC55LL,
                *(int *)(*(_QWORD *)(a1 + 832) + 60LL),
                a2,
                a3,
                a4,
                0);
              sub_3F8EE0(a1, *(double *)a2.m128i_i64, *(double *)a3.m128_u64, a4);
              goto LABEL_75;
            case 0x63:
              v97 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 488LL);
              goto LABEL_220;
            case 0x65:
              v97 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 52LL);
              goto LABEL_220;
            case 0x66:
              v97 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 480LL);
              goto LABEL_220;
            case 0x67:
              v97 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 484LL);
LABEL_220:
              v98 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v99 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              sub_3F7E20(a1, 4u, (unsigned __int8)v312, v99, 0x3BEA45E214ADDC55LL, v98, a2, a3, a4, 0);
              v100 = sub_3EBC60(*(_DWORD *)(a1 + 52));
              *(_DWORD *)v315 = 1;
              v317 = 0;
              a2 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v100), _mm_cvtsi32_si128(v309));
              tinfo_property = 0xFFFFFFFF00000000LL;
              *(_QWORD *)&v315[4] = a2.m128i_i64[0];
              v101 = sub_3ECD50(v303);
              sub_120A10((__int64)&tinfo_property, *(unsigned __int64 **)(a1 + 832), v101, v104, v102, v103);
              sub_1D6450(a1, 12, (unsigned __int8 *)&tinfo_property, v315, v315, a2, a3, a4);
              sub_11CDA0((__int64)&tinfo_property);
              sub_11CDA0((__int64)v315);
              v105 = sub_3EBC60(*(_DWORD *)(a1 + 52));
              sub_3F7E20(a1, 2u, 1, *(int *)(*(_QWORD *)(a1 + 832) + 472LL), v309, v97, a2, a3, a4, v105);
              goto LABEL_75;
            case 0x6C:
            case 0x6D:
            case 0x6E:
            case 0x6F:
            case 0x70:
            case 0x71:
            case 0x72:
            case 0x73:
            case 0x74:
            case 0x75:
            case 0x76:
            case 0x77:
              v33 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3FC800(a1, v33, a2, a3, a4);
              goto LABEL_75;
            case 0x7A:
              goto LABEL_190;
            case 0x7D:
            case 0x252:
              v184 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v185 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              sub_1D6840(a1, *(unsigned __int8 *)(a1 + 109), (unsigned __int8)v312, v185, v184, 1u, a2, a3, a4);
              goto LABEL_75;
            case 0x7E:
              goto LABEL_138;
            case 0x7F:
              v155 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              v156 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3FB8C0(a1, 0, v156, v155, v312, a2, a3, a4);
              goto LABEL_75;
            case 0x80:
              v152 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v291 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F7E20(a1, 5u, (unsigned __int8)v312, v291, 0x3BEA45E214ADDC55LL, v152, a2, a3, a4, 0);
              v314 = 0xFFFFFFFF00000000LL;
              v153 = get_dtype_size();
              sub_120A10((__int64)&v314, *(unsigned __int64 **)(a1 + 832), 1, v153, -1, 0);
              a2 = _mm_unpacklo_epi32(
                     _mm_cvtsi32_si128(DWORD1(v314)),
                     _mm_cvtsi32_si128(sub_3FAE20((__int64)&v318, a2, a3, a4)));
              *(_DWORD *)v315 = 1;
              tinfo_property = 0x100000001LL;
              v317 = 3;
              *(_QWORD *)&v315[4] = a2.m128i_i64[0];
              sub_1D6450(a1, 30, v315, (unsigned __int8 *)&v314, (unsigned __int8 *)&tinfo_property, a2, a3, a4);
              sub_11CDA0((__int64)&tinfo_property);
              sub_11CDA0((__int64)v315);
              sub_11CDA0((__int64)&v314);
              v154 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3FB720(a1, 0x20u, v154, (unsigned __int8)v312, 0, a2, a3, a4);
              goto LABEL_164;
            case 0x81:
            case 0xD5:
            case 0x14A:
              goto LABEL_75;
            case 0x82:
              v160 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v161 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F7E20(a1, 7u, (unsigned __int8)v312, v161, 0x3BEA45E214ADDC55LL, v160, a2, a3, a4, 0);
              goto LABEL_75;
            case 0x83:
              v157 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v158 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v159 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              sub_3F7E20(a1, 0x13u, (unsigned __int8)v312, v159, v158, v157, a2, a3, a4, 0);
              goto LABEL_218;
            case 0x86:
              sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F8EE0(a1, *(double *)a2.m128i_i64, *(double *)a3.m128_u64, a4);
              goto LABEL_75;
            case 0x88:
              sub_3F92A0(a1, v312);
              goto LABEL_75;
            case 0x8F:
              v169 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F8D40(a1, v169, v312, a2, a3, a4);
              goto LABEL_75;
            case 0x91:
              sub_3F9020(a1, v312, *(double *)a2.m128i_i64);
              goto LABEL_75;
            case 0x9A:
              v167 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              v168 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_4072A0(a1, 0x1Bu, v312, v168, v167, *(double *)a2.m128i_i64);
              goto LABEL_75;
            case 0x9B:
              v165 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              v166 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_4072A0(a1, 0x1Cu, v312, v166, v165, *(double *)a2.m128i_i64);
              goto LABEL_75;
            case 0x9F:
            case 0xA0:
              sub_3FD260(a1, a2, a3, a4);
              goto LABEL_75;
            case 0xA1:
              sub_3FB820(a1, 0, 1, 9, a2, a3, a4);
              sub_3FB820(a1, 4, 4, 9, a2, a3, a4);
              sub_3FB820(a1, 1, 64, 9, a2, a3, a4);
              sub_3FB820(a1, 2, 128, 9, a2, a3, a4);
              goto LABEL_75;
            case 0xA2:
            case 0xA4:
              v163 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              v164 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_407390(a1, 0x16u, v312, v164, v163, a2, a3, a4);
              goto LABEL_75;
            case 0xA3:
              v273 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              v274 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_407390(a1, 0x18u, v312, v274, v273, a2, a3, a4);
              goto LABEL_75;
            case 0xA5:
              v271 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              v272 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_407390(a1, 0x17u, v312, v272, v271, a2, a3, a4);
              goto LABEL_75;
            case 0xA6:
              sub_1D6840(a1, 0, (unsigned __int8)v312, 0, v298, 0, a2, a3, a4);
              v265 = *(_BYTE *)(a1 + 65);
              if ( *(_BYTE *)(a1 + 105) == v265 && v265 == 1 && *(_WORD *)(a1 + 70) == *(_WORD *)(a1 + 110) )
              {
                sub_3F7E20(a1, 3u, 0, 0, 0x3BEA45E214ADDC55LL, 3, a2, a3, a4, 0);
                v283 = sub_3FAE20((__int64)&v318, a2, a3, a4);
                sub_3F7E20(a1, 5u, (unsigned __int8)v312, v298, 0x3BEA45E214ADDC55LL, v283, a2, a3, a4, 0);
              }
              else
              {
                v266 = sub_3FAE20((__int64)&v320, a2, a3, a4);
                sub_3F7E20(a1, 0xCu, (unsigned __int8)v312, v298, v266, v298, a2, a3, a4, 0);
                v267 = sub_3FAE20((__int64)&v318, a2, a3, a4);
                sub_3F7E20(a1, 0x23u, (unsigned __int8)v312, v267, v298, 0, a2, a3, a4, 0);
                v268 = sub_3FAE20((__int64)&v318, a2, a3, a4);
                sub_3F7E20(a1, 0x1Eu, (unsigned __int8)v312, v268, v298, 3, a2, a3, a4, 0);
                v269 = sub_3FAE20((__int64)&v318, a2, a3, a4);
                v270 = sub_3FAE20((__int64)&v318, a2, a3, a4);
                sub_3F7E20(a1, 0xDu, (unsigned __int8)v312, v270, v298, v269, a2, a3, a4, 0);
              }
              goto LABEL_164;
            case 0xA8:
            case 0xB5:
              sub_3F7E20(a1, 0x13u, 0, 0, 1, v19, a2, a3, a4, 0);
              goto LABEL_377;
            case 0xA9:
            case 0xB4:
            case 0xB6:
              v183 = (int)sub_3FAE20((__int64)&v318, a2, a3, a4);
LABEL_299:
              sub_3F7E20(a1, 6u, 0, 0, 0x3BEA45E214ADDC55LL, v183, a2, a3, a4, 0);
              goto LABEL_75;
            case 0xAA:
            case 0xAC:
            case 0xB3:
              v264 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F7E20(a1, 4u, 0, 0, 0x3BEA45E214ADDC55LL, v264, a2, a3, a4, 0);
              goto LABEL_75;
            case 0xAB:
            case 0xB2:
              v263 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F7E20(a1, 0x13u, 0, 0, 1, v263, a2, a3, a4, 0);
              goto LABEL_75;
            case 0xAD:
            case 0xC5:
              v262 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F7E20(a1, 4u, 0, 1, 0x3BEA45E214ADDC55LL, v262, a2, a3, a4, 0);
              goto LABEL_75;
            case 0xAE:
            case 0xBB:
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v19, a2, a3, a4, 0);
              sub_3F7E20(a1, 0x13u, 0, v19, 1, v19, a2, a3, a4, 0);
              goto LABEL_377;
            case 0xAF:
            case 0xBA:
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v19, a2, a3, a4, 0);
LABEL_377:
              v261 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F7E20(a1, 6u, 0, v19, 0x3BEA45E214ADDC55LL, v261, a2, a3, a4, 0);
              goto LABEL_75;
            case 0xB0:
            case 0xB9:
              v260 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v260, a2, a3, a4, 0);
              goto LABEL_75;
            case 0xB1:
            case 0xB8:
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v19, a2, a3, a4, 0);
              v259 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F7E20(a1, 0x13u, 0, v19, 1, v259, a2, a3, a4, 0);
              goto LABEL_75;
            case 0xB7:
            case 0xBF:
              v258 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F7E20(a1, 6u, 0, 1, 0x3BEA45E214ADDC55LL, v258, a2, a3, a4, 0);
              goto LABEL_75;
            case 0xBC:
              v257 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F7E20(a1, 6u, 0, 3, 0x3BEA45E214ADDC55LL, v257, a2, a3, a4, 0);
              goto LABEL_75;
            case 0xBD:
            case 0xC3:
              v256 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F7E20(a1, 6u, 0, 4, 0x3BEA45E214ADDC55LL, v256, a2, a3, a4, 0);
              goto LABEL_75;
            case 0xBE:
              v255 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F7E20(a1, 6u, 0, 2, 0x3BEA45E214ADDC55LL, v255, a2, a3, a4, 0);
              goto LABEL_75;
            case 0xC0:
              v254 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F7E20(a1, 4u, 0, 3, 0x3BEA45E214ADDC55LL, v254, a2, a3, a4, 0);
              goto LABEL_75;
            case 0xC1:
            case 0xC2:
              v253 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F7E20(a1, 4u, 0, 4, 0x3BEA45E214ADDC55LL, v253, a2, a3, a4, 0);
              goto LABEL_75;
            case 0xC4:
              v252 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F7E20(a1, 4u, 0, 2, 0x3BEA45E214ADDC55LL, v252, a2, a3, a4, 0);
              goto LABEL_75;
            case 0xC8:
              v250 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              v251 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v249 = sub_3FBF90(a1, (unsigned __int8)v312, v251, v250, 0, *(double *)a2.m128i_i64);
              goto LABEL_363;
            case 0xC9:
              v247 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              v248 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v249 = sub_3FBF90(a1, (unsigned __int8)v312, v248, v247, 1u, *(double *)a2.m128i_i64);
LABEL_363:
              v318.m128i_i32[3] = v249;
              v319 = 1;
              if ( (v14 & 4) != 0 )
                goto LABEL_153;
              goto LABEL_76;
            case 0xCC:
              sub_3F7E20(a1, 3u, 0, 1, 0x3BEA45E214ADDC55LL, 0, a2, a3, a4, 0);
              goto LABEL_75;
            case 0xCD:
              sub_3F7E20(a1, 3u, 0, 1, 0x3BEA45E214ADDC55LL, *(int *)(*(_QWORD *)(a1 + 832) + 700LL), a2, a3, a4, 0);
              goto LABEL_75;
            case 0xD1:
              v244 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              v245 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v312 = (unsigned __int8)v312;
              v246 = sub_409840(a1, v312, v245, v244, *(double *)a2.m128i_i64, a3, a4);
              if ( v246 == 1 )
                return 0;
              if ( v246 == -1 )
                return 4294967294LL;
LABEL_261:
              v141 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              v142 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F7E20(a1, 0x23u, v312, v142, v141, 0, a2, a3, a4, 0);
              v143 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              v144 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F7E20(a1, 0x1Eu, v312, v144, v143, 3, a2, a3, a4, 0);
              if ( *(_WORD *)(a1 + 48) == 209
                && *(_BYTE *)(a1 + 65) == 1
                && *(_WORD *)(a1 + 70) == 4
                && *(_BYTE *)(a1 + 105) == 1 )
              {
                v162 = sub_3FAE20((__int64)&v320, a2, a3, a4);
                sub_408540(a1, v162);
              }
              else
              {
                v145 = sub_3FAE20((__int64)&v318, a2, a3, a4);
                v146 = sub_3FAE20((__int64)&v320, a2, a3, a4);
                v147 = sub_3FAE20((__int64)&v318, a2, a3, a4);
                sub_3F7E20(a1, 0xDu, v312, v147, v146, v145, a2, a3, a4, 0);
              }
              goto LABEL_164;
            case 0xD2:
              v242 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F7E20(a1, 4u, (unsigned __int8)v312, v242, 0x3BEA45E214ADDC55LL, (int)v19, a2, a3, a4, 0);
              v318.m128i_i32[3] = v19;
              v319 = 1;
              v243 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v294 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              sub_3F7E20(a1, 0x14u, (unsigned __int8)v312, v294, v243, (int)v19, a2, a3, a4, 0);
              goto LABEL_218;
            case 0xD6:
            case 0xDB:
              if ( *(_BYTE *)(a1 + 105) != 1 && (unsigned __int8)v312 > 1u )
                goto LABEL_63;
              sub_16EFC0((_QWORD *)(*(_QWORD *)(a1 + 8) + 1048LL), (unsigned __int64 *)(a1 + 40));
              do
              {
                v234 = *(_QWORD *)(a1 + 832);
                v235 = *(int *)(v234 + 3776);
                v236 = *(_DWORD *)(v234 + 3776);
                if ( v235 > 3 )
                {
                  v236 = 0;
                  v235 = 0;
                }
                *(_DWORD *)(v234 + 3776) = v236 + 1;
                v237 = *(int *)(v234 + 4 * v235 + 3760);
              }
              while ( (unsigned int)sub_3FAE20((__int64)&v318, a2, a3, a4) == (_DWORD)v237
                   || (_DWORD)v237 == (unsigned int)sub_3FAE20((__int64)&v320, a2, a3, a4) );
              v238 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F7E20(a1, 4u, (unsigned __int8)v312, v238, 0x3BEA45E214ADDC55LL, v237, a2, a3, a4, 0);
              if ( *(_WORD *)(a1 + 48) == 219 )
              {
                v275 = sub_3FAE20((__int64)&v320, a2, a3, a4);
                v276 = sub_3FAE20((__int64)&v318, a2, a3, a4);
                sub_3F7E20(a1, 0x19u, (unsigned __int8)v312, v276, v275, 0, a2, a3, a4, 0);
                v277 = sub_3FAE20((__int64)&v320, a2, a3, a4);
                v278 = sub_3FAE20((__int64)&v318, a2, a3, a4);
                sub_3F7E20(a1, 0x1Au, (unsigned __int8)v312, v278, v277, 3, a2, a3, a4, 0);
                v279 = sub_3FAE20((__int64)&v318, a2, a3, a4);
                v280 = sub_3FAE20((__int64)&v320, a2, a3, a4);
                v281 = sub_3FAE20((__int64)&v318, a2, a3, a4);
                sub_3F7E20(a1, 0xCu, (unsigned __int8)v312, v281, v280, v279, a2, a3, a4, 0);
                v282 = sub_3FAE20((__int64)&v318, a2, a3, a4);
                sub_3FD520(a1, v282, v312, a2, a3, a4);
              }
              else
              {
                v239 = sub_3FAE20((__int64)&v318, a2, a3, a4);
                v240 = sub_3FAE20((__int64)&v320, a2, a3, a4);
                sub_3F7E20(a1, 4u, (unsigned __int8)v312, v240, 0x3BEA45E214ADDC55LL, v239, a2, a3, a4, 0);
              }
              v241 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              sub_3F7E20(a1, 4u, (unsigned __int8)v312, v237, 0x3BEA45E214ADDC55LL, v241, a2, a3, a4, 0);
              goto LABEL_75;
            case 0xD8:
              v232 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v233 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v293 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              sub_3F7E20(a1, 0x15u, (unsigned __int8)v312, v293, v233, v232, a2, a3, a4, 0);
              goto LABEL_218;
            case 0xFD:
            case 0xFE:
            case 0xFF:
            case 0x100:
              v230 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              v231 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3FA190(a1, v231, v230, *(double *)a2.m128i_i64);
              goto LABEL_75;
            case 0x102:
            case 0x106:
              v228 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v229 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              sub_1D6740(a1, 15, 15, v229, v228, 0x43u, a2, a3, a4);
              goto LABEL_264;
            case 0x103:
            case 0x104:
              v225 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              v226 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v227 = *(_BYTE *)(a1 + 109);
              if ( v227 == 5 )
                v227 = 15;
              sub_1D6740(a1, 15, v227, v226, v225, 0x43u, a2, a3, a4);
              goto LABEL_264;
            case 0x105:
              sub_16EFC0((_QWORD *)(*(_QWORD *)(a1 + 8) + 1048LL), (unsigned __int64 *)(a1 + 40));
              v219 = *(_QWORD *)(a1 + 832);
              v220 = *(int *)(v219 + 3776);
              v221 = *(_DWORD *)(v219 + 3776);
              if ( v220 > 3 )
              {
                v221 = 0;
                v220 = 0;
              }
              *(_DWORD *)(v219 + 3776) = v221 + 1;
              v222 = *(_DWORD *)(v219 + 4 * v220 + 3760);
              v223 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F7E20(a1, 0x43u, 15, v223, 0x3BEA45E214ADDC55LL, v222, a2, a3, a4, 0);
              a2 = _mm_load_si128(&v320);
              v224 = v321;
              v320.m128i_i32[3] = v222;
              v321 = 1;
              v319 = v224;
              v318 = a2;
              goto LABEL_264;
            case 0x107:
            case 0x108:
            case 0x25C:
              v216 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              v217 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v218 = *(_BYTE *)(a1 + 109);
              if ( v218 == 5 )
                v218 = 15;
              sub_1D6740(a1, 15, v218, v217, v216, 0x3Fu, a2, a3, a4);
              goto LABEL_264;
            case 0x109:
              a2 = _mm_load_si128(&v320);
              v191 = "__FBLD__";
              v319 = v321;
              v318 = a2;
              goto LABEL_313;
            case 0x10A:
              sub_408CD0(a1, (__int64)&v318, (__int64)&v320, *(double *)a2.m128i_i64, *(double *)a3.m128_u64, a4);
              LOBYTE(v311) = v14 & 0xF7;
              goto LABEL_264;
            case 0x10B:
            case 0x10C:
            case 0x10D:
              v207 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v208 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              v209 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F7E20(a1, 0x45u, 15, v209, v208, v207, a2, a3, a4, 0);
              goto LABEL_264;
            case 0x10E:
            case 0x10F:
            case 0x110:
              v203 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v204 = &v318;
              v205 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              goto LABEL_321;
            case 0x111:
            case 0x112:
            case 0x113:
              v203 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v204 = &v320;
              v205 = sub_3FAE20((__int64)&v318, a2, a3, a4);
LABEL_321:
              v206 = sub_3FAE20((__int64)v204, a2, a3, a4);
              sub_3F7E20(a1, 0x46u, 15, v206, v205, v203, a2, a3, a4, 0);
              goto LABEL_264;
            case 0x114:
            case 0x115:
            case 0x116:
              v200 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v201 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              v202 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F7E20(a1, 0x47u, 15, v202, v201, v200, a2, a3, a4, 0);
              goto LABEL_264;
            case 0x117:
            case 0x118:
            case 0x119:
              v197 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v198 = &v318;
              v199 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              goto LABEL_317;
            case 0x11A:
            case 0x11B:
            case 0x11C:
              v197 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v198 = &v320;
              v199 = sub_3FAE20((__int64)&v318, a2, a3, a4);
LABEL_317:
              v292 = sub_3FAE20((__int64)v198, a2, a3, a4);
              sub_3F7E20(a1, 0x48u, 15, v292, v199, v197, a2, a3, a4, 0);
              goto LABEL_264;
            case 0x11D:
              v191 = "sqrt";
              goto LABEL_313;
            case 0x11E:
              v194 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) + sub_3FAE20((__int64)&v318, a2, a3, a4);
              v195 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v196 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_408A10((_QWORD *)a1, (__int64)"__FSCALE__", v196, v195, v194);
              goto LABEL_264;
            case 0x11F:
              v284 = "__FPREM__";
              goto LABEL_397;
            case 0x122:
              v191 = "fabs";
              goto LABEL_313;
            case 0x123:
              v148 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v149 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F7E20(a1, 0x44u, 15, v149, 0x3BEA45E214ADDC55LL, v148, a2, a3, a4, 0);
              goto LABEL_264;
            case 0x124:
            case 0x125:
            case 0x126:
            case 0x127:
            case 0x128:
            case 0x153:
            case 0x154:
            case 0x155:
              goto LABEL_74;
            case 0x129:
              v190 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              sub_3FA230(a1, 0, v190, *(double *)a2.m128i_i64, a3, a4);
LABEL_74:
              v31 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              v32 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3FA0C0(a1, v32, v31, *(double *)a2.m128i_i64);
              goto LABEL_75;
            case 0x12B:
              v186 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) + sub_3FAE20((__int64)&v318, a2, a3, a4);
              v187 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_408A10(
                (_QWORD *)a1,
                (__int64)"tan",
                *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) + v187,
                v186,
                0xFFFFFFFF);
              goto LABEL_309;
            case 0x12C:
              v213 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v214 = sub_3FAE20((__int64)&v318, a2, a3, a4) + *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL);
              v215 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_408A10((_QWORD *)a1, (__int64)"atan2", *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) + v215, v214, v213);
              goto LABEL_264;
            case 0x12D:
              v191 = "__F2XM1__";
              goto LABEL_313;
            case 0x12E:
              v284 = "__FYL2X__";
              goto LABEL_393;
            case 0x12F:
              v284 = "__FYL2XP1__";
LABEL_393:
              v285 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) + sub_3FAE20((__int64)&v318, a2, a3, a4);
              v286 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v287 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) + sub_3FAE20((__int64)&v318, a2, a3, a4);
              goto LABEL_394;
            case 0x130:
              v188 = 0;
              goto LABEL_310;
            case 0x131:
LABEL_309:
              v188 = 1;
              goto LABEL_310;
            case 0x132:
              v188 = 9;
              goto LABEL_310;
            case 0x133:
              v188 = 3;
              goto LABEL_310;
            case 0x134:
              v188 = 5;
              goto LABEL_310;
            case 0x135:
              v188 = 4;
              goto LABEL_310;
            case 0x136:
              v188 = 7;
LABEL_310:
              v189 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3FA230(a1, v188, v189, *(double *)a2.m128i_i64, a3, a4);
              goto LABEL_264;
            case 0x13D:
            case 0x13E:
              v212 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F7E20(a1, 4u, 1, *(int *)(*(_QWORD *)(a1 + 832) + 444LL), 0x3BEA45E214ADDC55LL, v212, a2, a3, a4, 0);
              goto LABEL_75;
            case 0x14F:
              v284 = "__FPREM1__";
LABEL_397:
              v285 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) + sub_3FAE20((__int64)&v318, a2, a3, a4);
              v286 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v287 = sub_3FAE20((__int64)&v318, a2, a3, a4);
LABEL_394:
              sub_408A10((_QWORD *)a1, (__int64)v284, v287, v286, v285);
              goto LABEL_264;
            case 0x150:
              v210 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) + sub_3FAE20((__int64)&v318, a2, a3, a4);
              v211 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_408A10((_QWORD *)a1, (__int64)"cos", v211, v210, 0xFFFFFFFF);
              sub_408A10((_QWORD *)a1, (__int64)"sin", v210, v210, 0xFFFFFFFF);
              LOBYTE(v311) = 0;
              goto LABEL_264;
            case 0x151:
              v191 = "sin";
              goto LABEL_313;
            case 0x152:
              v191 = "cos";
LABEL_313:
              v192 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              v193 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_408A10((_QWORD *)a1, (__int64)v191, v193, v192, 0xFFFFFFFF);
LABEL_264:
              v150 = *(int *)(*(_QWORD *)(a1 + 832) + 444LL);
              v151 = get_dtype_size();
              sub_1D6310(a1, 0x3Du, v151, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, v150, *(double *)a2.m128i_i64, 0);
              goto LABEL_75;
            case 0x156:
              sub_3F7E20(a1, 4u, 0, 0, 0x3BEA45E214ADDC55LL, 8, a2, a3, a4, 0);
              goto LABEL_75;
            case 0x2E9:
              v128 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              v129 = sub_3FAE40(a1, 2, 0, a2, a3, a4);
              sub_3F7E20(a1, 7u, (unsigned __int8)v312, v128, 0x3BEA45E214ADDC55LL, v298, a2, a3, a4, 0);
              v130 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F7E20(a1, 0x14u, (unsigned __int8)v312, v129, v298, v130, a2, a3, a4, 0);
LABEL_218:
              sub_3FB3E0(a1, 9, *(double *)a2.m128i_i64);
              goto LABEL_164;
            case 0x2F0:
              v126 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              v127 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3FBD20(a1, v127, v126, v312, a2, a3, a4);
              goto LABEL_75;
            case 0x2F3:
              v123 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              v124 = sub_3FAE40(a1, 2, 0, a2, a3, a4);
              v125 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_1D6C50(a1, 1u, (unsigned __int8)v312, v123, v124, v125);
              goto LABEL_75;
            case 0x2F4:
            case 0x2F5:
            case 0x2F6:
              v134 = sub_3FAE20((__int64)&v320, a2, a3, a4);
              v135 = sub_3FAE40(a1, 2, 0, a2, a3, a4);
              v136 = *(_WORD *)(a1 + 48);
              if ( v136 == 756 )
              {
                v137 = 24;
              }
              else
              {
                v137 = 22;
                if ( v136 == 758 )
                  v137 = 23;
              }
              v138 = sub_3FAE20((__int64)&v318, a2, a3, a4);
              sub_3F7E20(a1, v137, (unsigned __int8)v312, v134, v135, v138, a2, a3, a4, 0);
              goto LABEL_75;
            default:
              goto LABEL_63;
          }
LABEL_412:
          BUG();
        }
        v51 = byte_201011;
        if ( !_bittest64((const __int64 *)&v51, (unsigned int)(v22 - 122))
          || (unsigned __int8)(*(_BYTE *)(a1 + 56) - 33) > 1u )
        {
          goto LABEL_49;
        }
        if ( (unsigned __int8)(*(_BYTE *)(a1 + 65) - 2) <= 2u )
          goto LABEL_63;
        if ( (_WORD)v22 == 122 )
        {
          if ( (unsigned __int8)(*(_BYTE *)(a1 + 105) - 2) > 2u )
          {
LABEL_190:
            v81 = sub_3FAE20((__int64)&v318, a2, a3, a4);
            v82 = sub_3FAE20((__int64)&v320, a2, a3, a4);
            v83 = (unsigned __int8)v312;
            v84 = v82;
LABEL_191:
            sub_3F7E20(a1, 4u, v83, v84, 0x3BEA45E214ADDC55LL, v81, a2, a3, a4, 0);
            goto LABEL_75;
          }
          goto LABEL_63;
        }
        if ( (_WORD)v22 != 126 )
          goto LABEL_49;
        if ( (unsigned __int8)(*(_BYTE *)(a1 + 105) - 2) <= 2u )
          goto LABEL_63;
LABEL_138:
        v52 = sub_3FAE20((__int64)&v318, a2, a3, a4);
        v53 = sub_3FAE20((__int64)&v320, a2, a3, a4);
        sub_1D6840(a1, *(unsigned __int8 *)(a1 + 109), (unsigned __int8)v312, v53, v52, 0, a2, a3, a4);
      }
LABEL_75:
      if ( (v311 & 4) == 0 )
      {
LABEL_76:
        if ( (v311 & 8) == 0 )
          return *(unsigned __int8 *)(a1 + 896);
        v60 = 1;
        goto LABEL_157;
      }
      if ( v319 || (unsigned __int8)sub_3FACB0((__int64)&v318, a2, a3, a4) )
      {
LABEL_153:
        v60 = sub_3FB270(a1, 0, v318.m128i_i32[3], 1, a2, a3, a4);
        if ( (v311 & 8) == 0 )
        {
LABEL_154:
          if ( v60 )
            return *(unsigned __int8 *)(a1 + 896);
          return 4294967294LL;
        }
LABEL_157:
        if ( !v321 && !(unsigned __int8)sub_3FACB0((__int64)&v320, a2, a3, a4) )
          goto LABEL_178;
        v60 &= sub_3FB270(a1, 1, v320.m128i_i32[3], 1, a2, a3, a4);
        goto LABEL_154;
      }
LABEL_178:
      sub_3EB430(*(double *)a2.m128i_i64);
    }
    while ( 1 )
    {
      v41 = v40[4];
      v42 = 0;
      v43 = (_QWORD *)v40[3];
      if ( v39 < v41 )
      {
        v43 = (_QWORD *)v40[2];
        v42 = 1;
      }
      if ( !v43 )
        break;
      v40 = v43;
    }
    if ( v42 )
    {
      if ( *(_QWORD **)(v38 + 1024) == v40 )
        goto LABEL_107;
      v300 = *(_QWORD *)(a1 + 40);
      v305 = *(_QWORD *)(a1 + 8);
      v54 = std::_Rb_tree_decrement();
      v39 = v300;
      v38 = v305;
      v41 = *(_QWORD *)(v54 + 32);
    }
    if ( v41 >= v39 )
      goto LABEL_32;
LABEL_107:
    v299 = v38;
    *(_QWORD *)(operator new(0x28u) + 32) = *(_QWORD *)(a1 + 40);
    std::_Rb_tree_insert_and_rebalance();
    ++*(_QWORD *)(v299 + 1040);
    goto LABEL_32;
  }
LABEL_23:
  if ( (v14 & 2) != 0 )
  {
    if ( v17 != 16 )
    {
      if ( v17 == 18
        && *(_BYTE *)(a1 + 56) == 34
        && *(_BYTE *)(a1 + 65) == 2
        && *(_QWORD *)(a1 + 80) == 16
        && (unsigned __int8)sub_3F8CD0(a1, *(double *)a2.m128i_i64, a3, a4) )
      {
        return 0;
      }
LABEL_29:
      sub_3FC1F0(a1, a2, a3, a4);
      v17 = *(_WORD *)(a1 + 48);
      goto LABEL_30;
    }
    v55 = sub_3FD1A0(a1, v303);
    if ( v55 != -1 )
    {
      v56 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, double, double))(**(_QWORD **)(a1 + 832) + 168LL))(
              *(_QWORD *)(a1 + 832),
              v55,
              *(double *)a2.m128i_i64,
              *(double *)a3.m128_u64);
      v57 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50);
      v58 = v56;
      v59 = get_dtype_size();
      sub_1D6310(a1, 3u, v59, v57, 0x3BEA45E214ADDC55LL, v58, *(double *)a2.m128i_i64, 0);
      return *(unsigned __int8 *)(a1 + 896);
    }
    v75 = sub_3FD0D0();
    v76 = *(_QWORD *)(a1 + 832);
    v77 = v75;
    v78 = v75;
    v79 = *(__int64 (**)())(*(_QWORD *)v76 + 232LL);
    if ( v79 == sub_3F03B0 )
    {
      if ( sub_CFF70() == 1 )
      {
LABEL_183:
        if ( !*(_BYTE *)(*(_QWORD *)(a1 + 800) + 144LL) )
          goto LABEL_188;
        v323 = -1;
        v324 = 0;
        v80 = (unsigned __int64 *)v326;
        v325 = 0;
        v322 = -1;
        do
        {
          *(_WORD *)v80 = 0;
          v80 += 5;
          *((_WORD *)v80 - 19) = 0;
          *((_WORD *)v80 - 18) = 0;
          *((_DWORD *)v80 - 2) = 0;
          *((_WORD *)v80 - 17) = 0;
          *((_OWORD *)v80 - 2) = 0;
          *(v80 - 2) = 0;
        }
        while ( v80 != &v330 );
        if ( !(unsigned int)decode_insn() || (_WORD)v324 != 209 || v326[1] != 1 || v327 != 4 || v328 != 1 || v329 )
LABEL_188:
          sub_408540(a1, 8u);
        return 0;
      }
    }
    else if ( ((unsigned int (__fastcall *)(__int64, __int64, double, double))v79)(
                v76,
                v78,
                *(double *)a2.m128i_i64,
                *(double *)a3.m128_u64) != -1 )
    {
      goto LABEL_183;
    }
    if ( (unsigned __int8)sub_409490(a1, v77, *(double *)a2.m128i_i64, a3, a4) )
      return *(unsigned __int8 *)(a1 + 896);
    *(_QWORD *)v315 = 0;
    if ( (unsigned __int8)sub_381D00(*(_QWORD *)(a1 + 832), v77, (__int64)v315, 0, *(double *)a2.m128i_i64, a3) )
    {
      tinfo_property = 0;
      tinfo_property = get_tinfo_property();
      if ( (get_tinfo_property() & 0xF) == 9 )
        *(_DWORD *)(a1 + 892) = sub_40FAA0((_QWORD *)a1, *(double *)a2.m128i_i64, a3);
      clear_tinfo_t();
    }
    clear_tinfo_t();
    goto LABEL_29;
  }
LABEL_30:
  if ( v17 != 86 )
    goto LABEL_31;
  if ( *(_BYTE *)(a1 + 65) != 7 )
    goto LABEL_31;
  v50 = sub_3FD0D0();
  if ( !(unsigned __int8)sub_409490(a1, v50, *(double *)a2.m128i_i64, a3, a4) )
    goto LABEL_31;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 25LL) & 0x20) == 0 )
    sub_3FD260(a1, a2, a3, a4);
  return 1;
}

