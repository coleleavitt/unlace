__int64 __fastcall sub_B600(__int64 a1, __int64 a2, int *a3, double a4, double a5, double a6)
{
  __int64 v6; // r15
  int v7; // ecx
  _BYTE *v9; // rbx
  __int64 (*v10)(void); // rax
  __int64 v11; // rdi
  unsigned int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 *v15; // r13
  __int64 v16; // rsi
  __int64 v17; // r12
  __int64 v18; // rdi
  __int64 v19; // rsi
  unsigned int v20; // r14d
  __int64 *v21; // rax
  __int64 v22; // r15
  __int64 (*v23)(); // r9
  __int64 v24; // rax
  __int64 (*v25)(); // rax
  unsigned int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // r13
  __int64 v30; // r8
  __int64 v31; // rbx
  __int64 v32; // rsi
  const char *v33; // r12
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // rsi
  __int64 v37; // r9
  _QWORD *v38; // rax
  unsigned int v39; // ecx
  __int64 v40; // rax
  __int64 v41; // r8
  unsigned int v42; // r10d
  __int64 v43; // rsi
  __int64 v44; // r11
  __int64 v45; // r8
  __int64 v46; // rsi
  __int64 v47; // r8
  _QWORD *v48; // rax
  __int64 (*v49)(); // r14
  unsigned int v50; // ecx
  __int64 v51; // rax
  __int64 v52; // r8
  unsigned int v53; // r9d
  __int64 v54; // rsi
  __int64 v55; // r8
  _QWORD *v56; // rax
  unsigned int v57; // ecx
  unsigned int *v58; // rax
  unsigned int v59; // eax
  unsigned int *v60; // rcx
  void (*v61)(); // rax
  unsigned int v62; // ecx
  __int64 v63; // rax
  __int64 v64; // rsi
  __int64 v65; // r8
  _QWORD *v66; // rax
  __int64 (*v67)(); // rcx
  unsigned int v68; // eax
  _DWORD *v69; // rcx
  __int64 (*v70)(); // rax
  unsigned int v71; // eax
  _QWORD *v72; // rcx
  unsigned int v73; // ecx
  __int64 v74; // rax
  __int64 v75; // rsi
  unsigned int v76; // r9d
  _QWORD *v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 (*v80)(); // r8
  unsigned int v81; // ecx
  __int64 v82; // rax
  __int64 v83; // rsi
  __int64 v84; // r9
  __int64 v85; // r8
  unsigned int v86; // r10d
  __int64 v87; // rsi
  unsigned int v88; // ebx
  _QWORD *v89; // rax
  unsigned int v90; // ecx
  __int64 v91; // rax
  __int64 v92; // rsi
  unsigned int v93; // r9d
  __int64 v94; // r8
  unsigned int v95; // r10d
  __int64 v96; // rsi
  __int64 v97; // rbx
  _QWORD *v98; // rax
  unsigned int v99; // ecx
  __int64 v100; // rax
  __int64 v101; // rsi
  unsigned int v102; // r8d
  unsigned int *v103; // rax
  unsigned int v104; // ecx
  __int64 v105; // rax
  __int64 v106; // rsi
  unsigned int v107; // r8d
  unsigned int *v108; // rax
  __int64 (*v109)(); // rcx
  unsigned int v110; // ecx
  __int64 v111; // rax
  __int64 v112; // r8
  unsigned int v113; // r10d
  __int64 v114; // rsi
  bool v115; // r9
  unsigned int *v116; // rax
  __int64 (*v117)(); // r8
  unsigned int v118; // ecx
  __int64 v119; // rax
  __int64 v120; // rsi
  unsigned int v121; // r9d
  __int64 v122; // r8
  unsigned int v123; // r10d
  __int64 v124; // rsi
  unsigned int v125; // ebx
  _QWORD *v126; // rax
  unsigned int v127; // eax
  __int64 v128; // rsi
  __int64 v129; // rcx
  _QWORD *v130; // rbx
  __int64 v131; // r8
  __int64 v132; // r10
  __int64 v133; // rcx
  unsigned int v134; // r11d
  __int64 v135; // r14
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 *v138; // rax
  __int64 v139; // r9
  __int64 v140; // rcx
  __int64 v141; // rsi
  __int64 v142; // r12
  unsigned int v143; // ecx
  __int64 v144; // rax
  __int64 v145; // rsi
  _DWORD *v146; // r14
  __int64 v147; // r9
  __int64 v148; // rsi
  __int64 v149; // r8
  __int64 v150; // r9
  unsigned int *v151; // rax
  __int64 v152; // rcx
  unsigned int v153; // ecx
  __int64 v154; // rax
  __int64 v155; // r8
  __int64 *v156; // rbx
  __int64 v157; // rsi
  __int64 v158; // r9
  __int64 v159; // r8
  __int64 v160; // r10
  __int64 v161; // rsi
  __int64 v162; // r14
  _QWORD *v163; // rax
  __int64 v164; // rax
  __int64 v165; // rdx
  unsigned int v166; // ecx
  __int64 v167; // rax
  __int64 v168; // rsi
  __int64 v169; // r9
  __int64 v170; // r8
  __int64 v171; // r10
  __int64 v172; // rsi
  unsigned int v173; // ebx
  _QWORD *v174; // rax
  unsigned int v175; // ecx
  __int64 v176; // rax
  __int64 v177; // r8
  __int64 v178; // r9
  __int64 v179; // rsi
  __int64 v180; // r10
  _DWORD *v181; // rax
  __int64 (*v182)(); // r8
  unsigned int v183; // ecx
  __int64 v184; // rax
  __int64 v185; // rdi
  _DWORD *v186; // r10
  __int64 v187; // rsi
  __int64 v188; // r11
  __int64 v189; // rdi
  unsigned int v190; // r14d
  int v191; // r8d
  unsigned int v192; // eax
  _QWORD *v193; // rcx
  unsigned int v194; // eax
  _QWORD *v195; // rcx
  unsigned int v196; // ecx
  __int64 v197; // rax
  __int64 v198; // rsi
  unsigned int v199; // r9d
  __int64 v200; // r8
  __int64 v201; // r10
  __int64 v202; // rsi
  __int64 v203; // rbx
  _QWORD *v204; // rax
  __int64 (*v205)(); // r11
  unsigned int v206; // eax
  unsigned int *v207; // rcx
  unsigned int v208; // eax
  unsigned int *v209; // rcx
  unsigned int v210; // ecx
  __int64 v211; // rax
  __int64 v212; // rsi
  bool v213; // bl
  _QWORD *v214; // rax
  unsigned int v215; // ecx
  __int64 v216; // rax
  __int64 v217; // rsi
  __int64 v218; // r8
  unsigned int *v219; // rax
  unsigned int v220; // ecx
  __int64 v221; // rax
  __int64 v222; // rsi
  __int64 *v223; // rbx
  __int64 v224; // r9
  __int64 v225; // rsi
  __int64 v226; // r8
  __int64 v227; // r9
  unsigned int *v228; // rax
  __int64 (__fastcall *v229)(__int64, __int64); // r8
  unsigned int v230; // ecx
  __int64 v231; // rax
  __int64 v232; // rsi
  __int64 v233; // rdi
  unsigned int v234; // r12d
  __int64 v235; // rsi
  __int64 v236; // r13
  __int64 *v237; // rax
  __int64 v238; // r14
  const char *v239; // rsi
  unsigned int v240; // eax
  __int64 v241; // rcx
  __int64 v242; // rsi
  __int64 v243; // r11
  __int64 v244; // r8
  __int64 v245; // rbx
  __int64 v246; // rsi
  __int64 v247; // r8
  __int64 v248; // r10
  __int64 v249; // r9
  __int64 v250; // rsi
  __int64 v251; // r10
  __int64 *v252; // rax
  __int64 v253; // rsi
  __int64 v254; // r15
  unsigned int v255; // ecx
  __int64 v256; // rax
  __int64 v257; // rsi
  __int64 v258; // r8
  __int64 v259; // rsi
  unsigned int v260; // ecx
  __int64 v261; // rax
  __int64 v262; // r8
  __int64 v263; // rsi
  __int64 v264; // r9
  __int64 v265; // r8
  __int64 v266; // r10
  __int64 v267; // rsi
  __int64 v268; // r14
  _QWORD *v269; // rax
  unsigned int v270; // ecx
  __int64 v271; // rax
  __int64 v272; // rsi
  __int64 v273; // r8
  _QWORD *v274; // rax
  unsigned int v275; // ecx
  __int64 v276; // rax
  __int64 v277; // r8
  _DWORD *v278; // rbx
  __int64 v279; // rsi
  __int64 v280; // r8
  unsigned int *v281; // rax
  unsigned int v282; // eax
  _QWORD *v283; // rcx
  unsigned int v284; // ecx
  __int64 v285; // rax
  __int64 v286; // rsi
  unsigned int v287; // r9d
  __int64 v288; // r8
  unsigned int v289; // r10d
  __int64 v290; // rsi
  __int64 v291; // rbx
  _QWORD *v292; // rax
  unsigned int v293; // ecx
  __int64 v294; // rax
  __int64 v295; // rsi
  __int64 v296; // r8
  _QWORD *v297; // rax
  const char *v298; // rsi
  unsigned int v299; // eax
  _QWORD *v300; // rcx
  unsigned int v301; // eax
  __int64 *v302; // rcx
  __int64 v303; // rax
  __int64 *v304; // rcx
  _DWORD **v305; // rax
  _QWORD *v306; // rcx
  unsigned int *v307; // rcx
  unsigned int *v308; // rax
  _DWORD *v309; // rcx
  __int64 *v310; // rcx
  __int64 *v311; // rcx
  _QWORD **v312; // rcx
  __int64 *v313; // rax
  _QWORD *v314; // rcx
  unsigned int *v315; // rcx
  _DWORD *v316; // rax
  __int64 *v317; // rcx
  _DWORD *v318; // rcx
  __int64 *v319; // rax
  __int64 *v320; // rcx
  _DWORD *v321; // rcx
  __int64 *v322; // rax
  __int64 *v323; // rcx
  _DWORD *v324; // rcx
  _DWORD *v325; // rax
  _QWORD *v326; // rcx
  _BYTE **v327; // rax
  __int64 *v328; // rcx
  __int64 *v329; // rcx
  _QWORD *v330; // rax
  const char **v331; // rcx
  _QWORD *v332; // rax
  unsigned int *v333; // rcx
  _QWORD **v334; // rax
  _QWORD *v335; // rcx
  unsigned int *v336; // rax
  _DWORD *v337; // rcx
  unsigned int *v338; // rcx
  _DWORD **v339; // rax
  __int64 *v340; // rcx
  unsigned int *v341; // rax
  int *v342; // rcx
  int *v343; // rax
  _QWORD *v344; // rcx
  __int64 *v345; // rax
  __int64 *v346; // rcx
  _QWORD *v347; // rax
  unsigned int *v348; // rcx
  _QWORD *v349; // rax
  unsigned int *v350; // rcx
  _QWORD *v351; // rcx
  unsigned int *v352; // rax
  _DWORD *v353; // rcx
  unsigned int *v354; // rcx
  _DWORD *v355; // rax
  __int64 *v356; // rcx
  unsigned int *v357; // rcx
  _DWORD *v358; // rax
  __int64 *v359; // rcx
  _DWORD **v360; // rcx
  unsigned int *v361; // rax
  _QWORD *v362; // rcx
  _QWORD **v363; // rax
  __int64 *v364; // rcx
  __int64 *v365; // rax
  __int64 *v366; // rcx
  __int64 *v367; // rcx
  _QWORD *v368; // rax
  _DWORD *v369; // rcx
  unsigned int *v370; // rax
  _DWORD *v371; // rcx
  __int64 *v372; // rax
  _QWORD *v373; // rcx
  const char **v374; // rcx
  unsigned int *v375; // rax
  __int64 *v376; // rcx
  _DWORD *v377; // rcx
  _QWORD **v378; // rax
  __int64 *v379; // rcx
  __int64 *v380; // rax
  __int64 *v381; // rcx
  _QWORD **v382; // rax
  __int64 *v383; // rax
  unsigned int *v384; // rax
  __int64 *v385; // rax
  __int64 *v386; // rax
  int v387; // eax
  int v388; // ebx
  int *v389; // [rsp+10h] [rbp-70h]
  unsigned int v390; // [rsp+18h] [rbp-68h]
  const char *v391; // [rsp+18h] [rbp-68h]
  const char *v392; // [rsp+30h] [rbp-50h] BYREF
  __int128 v393; // [rsp+38h] [rbp-48h]
  unsigned __int64 v394; // [rsp+48h] [rbp-38h]

  v6 = 0;
  v7 = *(_DWORD *)(a1 + 136);
  v394 = __readfsqword(0x28u);
  if ( *(_DWORD *)(dbg + 16LL) != v7 )
    return v6;
  v9 = (_BYTE *)a1;
  if ( *(_QWORD *)(dbg + 32LL) != *(_QWORD *)(a1 + 152) )
    return v6;
  v10 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
  if ( (char *)v10 == (char *)sub_9510 )
  {
    v11 = a1 + 224;
  }
  else
  {
    v389 = a3;
    v303 = v10();
    a3 = v389;
    v11 = v303;
  }
  switch ( a2 )
  {
    case 0LL:
      v230 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v374 = *((const char ***)a3 + 1);
        v375 = (unsigned int *)(v374 + 1);
        *((_QWORD *)a3 + 1) = v374 + 1;
        v391 = *v374;
      }
      else
      {
        v231 = *((_QWORD *)a3 + 2);
        v232 = v230 + 8;
        *a3 = v232;
        v391 = *(const char **)(v231 + v230);
        if ( (unsigned int)v232 <= 0x2F )
        {
          v233 = v230 + 16;
          *a3 = v233;
          v234 = *(_DWORD *)(v231 + v232);
          if ( (unsigned int)v233 <= 0x2F )
          {
            v235 = v230 + 24;
            *a3 = v235;
            v236 = *(_QWORD *)(v231 + v233);
            if ( (unsigned int)v235 <= 0x2F )
            {
              v237 = (__int64 *)(v235 + v231);
              *a3 = v230 + 32;
              goto LABEL_205;
            }
            v237 = *((__int64 **)a3 + 1);
LABEL_376:
            *((_QWORD *)a3 + 1) = v237 + 1;
LABEL_205:
            v238 = *v237;
            if ( !*v237 )
            {
              if ( under_debugger )
                BUG();
              v11 = 1522;
              interr();
              goto LABEL_423;
            }
            if ( (*(_DWORD *)debug & 0x10000) != 0 )
            {
              v392 = nullptr;
              v393 = 0;
              get_dbctx_id();
              sub_AFF0((__int64 *)&v392);
              v239 = s;
              if ( (_QWORD)v393 )
                v239 = v392;
              sub_9D40((__int64)"%s: debugger_t::ev_init_debugger (%s,%d,)\n", v239, v391, v234);
              if ( v392 )
              {
                *(_QWORD *)&v393 = 0;
                qfree();
              }
            }
            return (int)sub_ABB0((__int64)v9, (__int64)v391, v234, v236, v238);
          }
          v376 = *((__int64 **)a3 + 1);
LABEL_375:
          v237 = v376 + 1;
          *((_QWORD *)a3 + 1) = v376 + 1;
          v236 = *v376;
          goto LABEL_376;
        }
        v375 = *((unsigned int **)a3 + 1);
      }
      v376 = (__int64 *)(v375 + 2);
      *((_QWORD *)a3 + 1) = v375 + 2;
      v234 = *v375;
      goto LABEL_375;
    case 1LL:
      if ( (*(_DWORD *)debug & 0x10000) != 0 )
      {
        v392 = nullptr;
        v393 = 0;
        get_dbctx_id();
        sub_AFF0((__int64 *)&v392);
        v298 = s;
        if ( (_QWORD)v393 )
          v298 = v392;
        sub_9D40((__int64)"%s: debugger_t::ev_term_debugger\n", v298);
        if ( v392 )
        {
          *(_QWORD *)&v393 = 0;
          qfree();
        }
      }
      return (int)sub_AE90(v9);
    case 2LL:
      v293 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v304 = *((__int64 **)a3 + 1);
        v297 = v304 + 1;
        *((_QWORD *)a3 + 1) = v304 + 1;
        v296 = *v304;
      }
      else
      {
        v294 = *((_QWORD *)a3 + 2);
        v295 = v293 + 8;
        *a3 = v295;
        v296 = *(_QWORD *)(v294 + v293);
        if ( (unsigned int)v295 <= 0x2F )
        {
          v297 = (_QWORD *)(v295 + v294);
          *a3 = v293 + 16;
          return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 72LL))(v11, v296, *v297);
        }
        v297 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v297 + 1;
      return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 72LL))(v11, v296, *v297);
    case 3LL:
      v240 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v345 = *((__int64 **)a3 + 1);
        v346 = v345 + 1;
        *((_QWORD *)a3 + 1) = v345 + 1;
        v243 = *v345;
      }
      else
      {
        v241 = *((_QWORD *)a3 + 2);
        v242 = v240 + 8;
        *a3 = v242;
        v243 = *(_QWORD *)(v241 + v240);
        if ( (unsigned int)v242 <= 0x2F )
        {
          v244 = v240 + 16;
          *a3 = v244;
          v245 = *(_QWORD *)(v241 + v242);
          if ( (unsigned int)v244 <= 0x2F )
          {
            v246 = v240 + 24;
            *a3 = v246;
            v247 = *(_QWORD *)(v241 + v244);
            if ( (unsigned int)v246 <= 0x2F )
            {
              v248 = v240 + 32;
              *a3 = v248;
              v249 = *(unsigned int *)(v241 + v246);
              if ( (unsigned int)v248 <= 0x2F )
              {
                v250 = v240 + 40;
                *a3 = v250;
                v251 = *(_QWORD *)(v241 + v248);
                if ( (unsigned int)v250 <= 0x2F )
                {
                  *a3 = v240 + 48;
                  v252 = *((__int64 **)a3 + 1);
                  v253 = *(unsigned int *)(v241 + v250);
                  goto LABEL_219;
                }
                v350 = *((unsigned int **)a3 + 1);
LABEL_336:
                v252 = (__int64 *)(v350 + 2);
                *((_QWORD *)a3 + 1) = v350 + 2;
                v253 = *v350;
LABEL_219:
                *((_QWORD *)a3 + 1) = v252 + 1;
                v254 = *v252;
                *((_QWORD *)a3 + 1) = v252 + 2;
                return (*(int (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v11 + 128LL))(
                         v11,
                         v243,
                         v245,
                         v252[1],
                         v247,
                         v249,
                         v251,
                         v253,
                         v254);
              }
              v349 = *((_QWORD **)a3 + 1);
LABEL_335:
              v350 = (unsigned int *)(v349 + 1);
              *((_QWORD *)a3 + 1) = v349 + 1;
              v251 = *v349;
              goto LABEL_336;
            }
            v348 = *((unsigned int **)a3 + 1);
LABEL_334:
            v349 = v348 + 2;
            *((_QWORD *)a3 + 1) = v348 + 2;
            v249 = *v348;
            goto LABEL_335;
          }
          v347 = *((_QWORD **)a3 + 1);
LABEL_333:
          v348 = (unsigned int *)(v347 + 1);
          *((_QWORD *)a3 + 1) = v347 + 1;
          v247 = *v347;
          goto LABEL_334;
        }
        v346 = *((__int64 **)a3 + 1);
      }
      v347 = v346 + 1;
      *((_QWORD *)a3 + 1) = v346 + 1;
      v245 = *v346;
      goto LABEL_333;
    case 4LL:
      v118 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v307 = *((unsigned int **)a3 + 1);
        v308 = v307 + 2;
        *((_QWORD *)a3 + 1) = v307 + 2;
        v121 = *v307;
      }
      else
      {
        v119 = *((_QWORD *)a3 + 2);
        v120 = v118 + 8;
        *a3 = v120;
        v121 = *(_DWORD *)(v119 + v118);
        if ( (unsigned int)v120 <= 0x2F )
        {
          v122 = v118 + 16;
          *a3 = v122;
          v123 = *(_DWORD *)(v119 + v120);
          if ( (unsigned int)v122 <= 0x2F )
          {
            v124 = v118 + 24;
            *a3 = v124;
            v125 = *(_DWORD *)(v119 + v122);
            if ( (unsigned int)v124 <= 0x2F )
            {
              v126 = (_QWORD *)(v124 + v119);
              *a3 = v118 + 32;
              return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v11 + 144LL))(
                       v11,
                       v121,
                       v123,
                       v125,
                       *v126);
            }
            v126 = *((_QWORD **)a3 + 1);
LABEL_280:
            *((_QWORD *)a3 + 1) = v126 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v11 + 144LL))(
                     v11,
                     v121,
                     v123,
                     v125,
                     *v126);
          }
          v309 = *((_DWORD **)a3 + 1);
LABEL_279:
          v126 = v309 + 2;
          *((_QWORD *)a3 + 1) = v309 + 2;
          v125 = *v309;
          goto LABEL_280;
        }
        v308 = *((unsigned int **)a3 + 1);
      }
      v309 = v308 + 2;
      *((_QWORD *)a3 + 1) = v308 + 2;
      v123 = *v308;
      goto LABEL_279;
    case 5LL:
      return (*(int (__fastcall **)(__int64))(*(_QWORD *)v11 + 120LL))(v11);
    case 6LL:
      v299 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v300 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v300 + 1;
      }
      else
      {
        v300 = (_QWORD *)(*((_QWORD *)a3 + 2) + v299);
        *a3 = v299 + 8;
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 552LL))(v11, *v300);
      return 1;
    case 7LL:
      v301 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v302 = *((__int64 **)a3 + 1);
        *((_QWORD *)a3 + 1) = v302 + 1;
      }
      else
      {
        v302 = (__int64 *)(*((_QWORD *)a3 + 2) + v301);
        *a3 = v301 + 8;
      }
      sub_A660(*v302, a4);
      return 1;
    case 8LL:
      v194 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v195 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v195 + 1;
      }
      else
      {
        v195 = (_QWORD *)(*((_QWORD *)a3 + 2) + v194);
        *a3 = v194 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 152LL))(v11, *v195);
    case 9LL:
      v282 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v283 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v283 + 1;
      }
      else
      {
        v283 = (_QWORD *)(*((_QWORD *)a3 + 2) + v282);
        *a3 = v282 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 160LL))(v11, *v283);
    case 10LL:
      v275 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v305 = *((_DWORD ***)a3 + 1);
        v306 = v305 + 1;
        *((_QWORD *)a3 + 1) = v305 + 1;
        v278 = *v305;
      }
      else
      {
        v276 = *((_QWORD *)a3 + 2);
        v277 = v275 + 8;
        *a3 = v277;
        v278 = *(_DWORD **)(v276 + v275);
        if ( (unsigned int)v277 <= 0x2F )
        {
          v279 = v275 + 16;
          *a3 = v279;
          v280 = *(_QWORD *)(v276 + v277);
          if ( (unsigned int)v279 <= 0x2F )
          {
            v281 = (unsigned int *)(v279 + v276);
            *a3 = v275 + 24;
            goto LABEL_242;
          }
          v281 = *((unsigned int **)a3 + 1);
LABEL_276:
          *((_QWORD *)a3 + 1) = v281 + 2;
LABEL_242:
          *v278 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 136LL))(v11, v280, *v281);
          return 1;
        }
        v306 = *((_QWORD **)a3 + 1);
      }
      v281 = (unsigned int *)(v306 + 1);
      *((_QWORD *)a3 + 1) = v306 + 1;
      v280 = *v306;
      goto LABEL_276;
    case 11LL:
      v71 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v72 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v72 + 1;
      }
      else
      {
        v72 = (_QWORD *)(*((_QWORD *)a3 + 2) + v71);
        *a3 = v71 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 168LL))(v11, *v72);
    case 12LL:
      v68 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v69 = *((_DWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v69 + 2;
      }
      else
      {
        v69 = (_DWORD *)(*((_QWORD *)a3 + 2) + v68);
        *a3 = v68 + 8;
      }
      v70 = *(__int64 (**)())(*(_QWORD *)v11 + 176LL);
      if ( v70 == sub_9440 )
        return 0;
      return ((int (__fastcall *)(__int64, bool))v70)(v11, *v69 != 0);
    case 13LL:
      v215 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v344 = *((_QWORD **)a3 + 1);
        v219 = (unsigned int *)(v344 + 1);
        *((_QWORD *)a3 + 1) = v344 + 1;
        v218 = *v344;
      }
      else
      {
        v216 = *((_QWORD *)a3 + 2);
        v217 = v215 + 8;
        *a3 = v217;
        v218 = *(_QWORD *)(v216 + v215);
        if ( (unsigned int)v217 <= 0x2F )
        {
          v219 = (unsigned int *)(v217 + v216);
          *a3 = v215 + 16;
          goto LABEL_191;
        }
        v219 = *((unsigned int **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v219 + 2;
LABEL_191:
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 184LL))(v11, v218, *v219);
      return 1;
    case 14LL:
      v210 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v377 = *((_DWORD **)a3 + 1);
        v214 = v377 + 2;
        *((_QWORD *)a3 + 1) = v377 + 2;
        v213 = *v377 != 0;
      }
      else
      {
        v211 = *((_QWORD *)a3 + 2);
        v212 = v210 + 8;
        *a3 = v212;
        v213 = *(_DWORD *)(v211 + v210) != 0;
        if ( (unsigned int)v212 <= 0x2F )
        {
          v214 = (_QWORD *)(v212 + v211);
          *a3 = v210 + 16;
          goto LABEL_186;
        }
        v214 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v214 + 1;
LABEL_186:
      (*(void (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)v11 + 192LL))(v11, 0, v213, *v214);
      if ( v213 )
        sub_15CE0(v11);
      return 1;
    case 15LL:
      v208 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v209 = *((unsigned int **)a3 + 1);
        *((_QWORD *)a3 + 1) = v209 + 2;
      }
      else
      {
        v209 = (unsigned int *)(*((_QWORD *)a3 + 2) + v208);
        *a3 = v208 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 200LL))(v11, *v209);
    case 16LL:
      v206 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v207 = *((unsigned int **)a3 + 1);
        *((_QWORD *)a3 + 1) = v207 + 2;
      }
      else
      {
        v207 = (unsigned int *)(*((_QWORD *)a3 + 2) + v206);
        *a3 = v206 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 208LL))(v11, *v207);
    case 17LL:
      v99 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v338 = *((unsigned int **)a3 + 1);
        v103 = v338 + 2;
        *((_QWORD *)a3 + 1) = v338 + 2;
        v102 = *v338;
      }
      else
      {
        v100 = *((_QWORD *)a3 + 2);
        v101 = v99 + 8;
        *a3 = v101;
        v102 = *(_DWORD *)(v100 + v99);
        if ( (unsigned int)v101 <= 0x2F )
        {
          v103 = (unsigned int *)(v101 + v100);
          *a3 = v99 + 16;
          return (*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 216LL))(v11, v102, *v103);
        }
        v103 = *((unsigned int **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v103 + 2;
      return (*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 216LL))(v11, v102, *v103);
    case 18LL:
      v90 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v354 = *((unsigned int **)a3 + 1);
        v355 = v354 + 2;
        *((_QWORD *)a3 + 1) = v354 + 2;
        v93 = *v354;
      }
      else
      {
        v91 = *((_QWORD *)a3 + 2);
        v92 = v90 + 8;
        *a3 = v92;
        v93 = *(_DWORD *)(v91 + v90);
        if ( (unsigned int)v92 <= 0x2F )
        {
          v94 = v90 + 16;
          *a3 = v94;
          v95 = *(_DWORD *)(v91 + v92);
          if ( (unsigned int)v94 <= 0x2F )
          {
            v96 = v90 + 24;
            *a3 = v96;
            v97 = *(_QWORD *)(v91 + v94);
            if ( (unsigned int)v96 <= 0x2F )
            {
              v98 = (_QWORD *)(v96 + v91);
              *a3 = v90 + 32;
              return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 224LL))(
                       v11,
                       v93,
                       v95,
                       v97,
                       *v98);
            }
            v98 = *((_QWORD **)a3 + 1);
LABEL_345:
            *((_QWORD *)a3 + 1) = v98 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 224LL))(
                     v11,
                     v93,
                     v95,
                     v97,
                     *v98);
          }
          v356 = *((__int64 **)a3 + 1);
LABEL_344:
          v98 = v356 + 1;
          *((_QWORD *)a3 + 1) = v356 + 1;
          v97 = *v356;
          goto LABEL_345;
        }
        v355 = *((_DWORD **)a3 + 1);
      }
      v356 = (__int64 *)(v355 + 2);
      *((_QWORD *)a3 + 1) = v355 + 2;
      v95 = *v355;
      goto LABEL_344;
    case 19LL:
      v284 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v315 = *((unsigned int **)a3 + 1);
        v316 = v315 + 2;
        *((_QWORD *)a3 + 1) = v315 + 2;
        v287 = *v315;
      }
      else
      {
        v285 = *((_QWORD *)a3 + 2);
        v286 = v284 + 8;
        *a3 = v286;
        v287 = *(_DWORD *)(v285 + v284);
        if ( (unsigned int)v286 <= 0x2F )
        {
          v288 = v284 + 16;
          *a3 = v288;
          v289 = *(_DWORD *)(v285 + v286);
          if ( (unsigned int)v288 <= 0x2F )
          {
            v290 = v284 + 24;
            *a3 = v290;
            v291 = *(_QWORD *)(v285 + v288);
            if ( (unsigned int)v290 <= 0x2F )
            {
              v292 = (_QWORD *)(v290 + v285);
              *a3 = v284 + 32;
              return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 232LL))(
                       v11,
                       v287,
                       v289,
                       v291,
                       *v292);
            }
            v292 = *((_QWORD **)a3 + 1);
LABEL_293:
            *((_QWORD *)a3 + 1) = v292 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 232LL))(
                     v11,
                     v287,
                     v289,
                     v291,
                     *v292);
          }
          v317 = *((__int64 **)a3 + 1);
LABEL_292:
          v292 = v317 + 1;
          *((_QWORD *)a3 + 1) = v317 + 1;
          v291 = *v317;
          goto LABEL_293;
        }
        v316 = *((_DWORD **)a3 + 1);
      }
      v317 = (__int64 *)(v316 + 2);
      *((_QWORD *)a3 + 1) = v316 + 2;
      v289 = *v316;
      goto LABEL_292;
    case 20LL:
      v81 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v351 = *((_QWORD **)a3 + 1);
        v352 = (unsigned int *)(v351 + 1);
        *((_QWORD *)a3 + 1) = v351 + 1;
        v84 = *v351;
      }
      else
      {
        v82 = *((_QWORD *)a3 + 2);
        v83 = v81 + 8;
        *a3 = v83;
        v84 = *(_QWORD *)(v82 + v81);
        if ( (unsigned int)v83 <= 0x2F )
        {
          v85 = v81 + 16;
          *a3 = v85;
          v86 = *(_DWORD *)(v82 + v83);
          if ( (unsigned int)v85 <= 0x2F )
          {
            v87 = v81 + 24;
            *a3 = v87;
            v88 = *(_DWORD *)(v82 + v85);
            if ( (unsigned int)v87 <= 0x2F )
            {
              v89 = (_QWORD *)(v87 + v82);
              *a3 = v81 + 32;
              return (*(int (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v11 + 240LL))(
                       v11,
                       v84,
                       v86,
                       v88,
                       *v89);
            }
            v89 = *((_QWORD **)a3 + 1);
LABEL_340:
            *((_QWORD *)a3 + 1) = v89 + 1;
            return (*(int (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v11 + 240LL))(
                     v11,
                     v84,
                     v86,
                     v88,
                     *v89);
          }
          v353 = *((_DWORD **)a3 + 1);
LABEL_339:
          v89 = v353 + 2;
          *((_QWORD *)a3 + 1) = v353 + 2;
          v88 = *v353;
          goto LABEL_340;
        }
        v352 = *((unsigned int **)a3 + 1);
      }
      v353 = v352 + 2;
      *((_QWORD *)a3 + 1) = v352 + 2;
      v86 = *v352;
      goto LABEL_339;
    case 21LL:
      v270 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v311 = *((__int64 **)a3 + 1);
        v274 = v311 + 1;
        *((_QWORD *)a3 + 1) = v311 + 1;
        v273 = *v311;
      }
      else
      {
        v271 = *((_QWORD *)a3 + 2);
        v272 = v270 + 8;
        *a3 = v272;
        v273 = *(_QWORD *)(v271 + v270);
        if ( (unsigned int)v272 <= 0x2F )
        {
          v274 = (_QWORD *)(v272 + v271);
          *a3 = v270 + 16;
          return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 256LL))(v11, v273, *v274);
        }
        v274 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v274 + 1;
      return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 256LL))(v11, v273, *v274);
    case 22LL:
      v260 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v378 = *((_QWORD ***)a3 + 1);
        v379 = (__int64 *)(v378 + 1);
        *((_QWORD *)a3 + 1) = v378 + 1;
        v156 = *v378;
      }
      else
      {
        v261 = *((_QWORD *)a3 + 2);
        v262 = v260 + 8;
        *a3 = v262;
        v156 = *(__int64 **)(v261 + v260);
        if ( (unsigned int)v262 <= 0x2F )
        {
          v263 = v260 + 16;
          *a3 = v263;
          v264 = *(_QWORD *)(v261 + v262);
          if ( (unsigned int)v263 <= 0x2F )
          {
            v265 = v260 + 24;
            *a3 = v265;
            v266 = *(_QWORD *)(v261 + v263);
            if ( (unsigned int)v265 <= 0x2F )
            {
              v267 = v260 + 32;
              *a3 = v267;
              v268 = *(_QWORD *)(v261 + v265);
              if ( (unsigned int)v267 <= 0x2F )
              {
                v269 = (_QWORD *)(v267 + v261);
                *a3 = v260 + 40;
                goto LABEL_233;
              }
              v269 = *((_QWORD **)a3 + 1);
LABEL_384:
              *((_QWORD *)a3 + 1) = v269 + 1;
LABEL_233:
              v164 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 288LL))(
                       v11,
                       v264,
                       v266,
                       v268,
                       *v269);
              goto LABEL_141;
            }
            v381 = *((__int64 **)a3 + 1);
LABEL_383:
            v269 = v381 + 1;
            *((_QWORD *)a3 + 1) = v381 + 1;
            v268 = *v381;
            goto LABEL_384;
          }
          v380 = *((__int64 **)a3 + 1);
LABEL_382:
          v381 = v380 + 1;
          *((_QWORD *)a3 + 1) = v380 + 1;
          v266 = *v380;
          goto LABEL_383;
        }
        v379 = *((__int64 **)a3 + 1);
      }
      v380 = v379 + 1;
      *((_QWORD *)a3 + 1) = v379 + 1;
      v264 = *v379;
      goto LABEL_382;
    case 23LL:
      v153 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v363 = *((_QWORD ***)a3 + 1);
        v364 = (__int64 *)(v363 + 1);
        *((_QWORD *)a3 + 1) = v363 + 1;
        v156 = *v363;
      }
      else
      {
        v154 = *((_QWORD *)a3 + 2);
        v155 = v153 + 8;
        *a3 = v155;
        v156 = *(__int64 **)(v154 + v153);
        if ( (unsigned int)v155 <= 0x2F )
        {
          v157 = v153 + 16;
          *a3 = v157;
          v158 = *(_QWORD *)(v154 + v155);
          if ( (unsigned int)v157 <= 0x2F )
          {
            v159 = v153 + 24;
            *a3 = v159;
            v160 = *(_QWORD *)(v154 + v157);
            if ( (unsigned int)v159 <= 0x2F )
            {
              v161 = v153 + 32;
              *a3 = v161;
              v162 = *(_QWORD *)(v154 + v159);
              if ( (unsigned int)v161 <= 0x2F )
              {
                v163 = (_QWORD *)(v161 + v154);
                *a3 = v153 + 40;
                goto LABEL_140;
              }
              v163 = *((_QWORD **)a3 + 1);
LABEL_359:
              *((_QWORD *)a3 + 1) = v163 + 1;
LABEL_140:
              v164 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 296LL))(
                       v11,
                       v158,
                       v160,
                       v162,
                       *v163);
LABEL_141:
              v165 = 0;
              v6 = -5;
              if ( v164 >= 0 )
                v165 = v164;
              *v156 = v165;
              if ( v164 < 0 )
                return v6;
              return 1;
            }
            v366 = *((__int64 **)a3 + 1);
LABEL_358:
            v163 = v366 + 1;
            *((_QWORD *)a3 + 1) = v366 + 1;
            v162 = *v366;
            goto LABEL_359;
          }
          v365 = *((__int64 **)a3 + 1);
LABEL_357:
          v366 = v365 + 1;
          *((_QWORD *)a3 + 1) = v365 + 1;
          v160 = *v365;
          goto LABEL_358;
        }
        v364 = *((__int64 **)a3 + 1);
      }
      v365 = v364 + 1;
      *((_QWORD *)a3 + 1) = v364 + 1;
      v158 = *v364;
      goto LABEL_357;
    case 24LL:
      v143 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v360 = *((_DWORD ***)a3 + 1);
        v361 = (unsigned int *)(v360 + 1);
        *((_QWORD *)a3 + 1) = v360 + 1;
        v146 = *v360;
      }
      else
      {
        v144 = *((_QWORD *)a3 + 2);
        v145 = v143 + 8;
        *a3 = v145;
        v146 = *(_DWORD **)(v144 + v143);
        if ( (unsigned int)v145 <= 0x2F )
        {
          v147 = v143 + 16;
          *a3 = v147;
          v148 = *(unsigned int *)(v144 + v145);
          if ( (unsigned int)v147 <= 0x2F )
          {
            v149 = v143 + 24;
            *a3 = v149;
            v150 = *(_QWORD *)(v144 + v147);
            if ( (unsigned int)v149 <= 0x2F )
            {
              v151 = (unsigned int *)(v149 + v144);
              *a3 = v143 + 32;
              goto LABEL_124;
            }
            v151 = *((unsigned int **)a3 + 1);
LABEL_354:
            *((_QWORD *)a3 + 1) = v151 + 2;
LABEL_124:
            v152 = *v151;
            if ( (_DWORD)v148 != 4 )
            {
              if ( (v9[154] & 0x40) == 0 )
              {
                if ( (v148 & 0xFFFFFFFD) == 1 || (_DWORD)v148 == 8 )
                {
                  if ( (_DWORD)v152 != 1 )
                  {
                    if ( (_DWORD)v148 == 8 || (((_DWORD)v152 - 2) & 0xFFFFFFFD) != 0 && (_DWORD)v152 != 8 )
                    {
                      *v146 = 5;
                      return 1;
                    }
                    if ( (v150 & ((int)v152 - 1)) != 0 )
                    {
                      *v146 = 3;
                      return 1;
                    }
                  }
                  goto LABEL_133;
                }
LABEL_386:
                *v146 = 2;
                return 1;
              }
              if ( !(_DWORD)v148 )
                goto LABEL_386;
            }
LABEL_133:
            *v146 = 0;
            *v146 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v11 + 304LL))(
                      v11,
                      v148,
                      v150,
                      v152);
            return 1;
          }
          v362 = *((_QWORD **)a3 + 1);
LABEL_353:
          v151 = (unsigned int *)(v362 + 1);
          *((_QWORD *)a3 + 1) = v362 + 1;
          v150 = *v362;
          goto LABEL_354;
        }
        v361 = *((unsigned int **)a3 + 1);
      }
      v362 = v361 + 2;
      *((_QWORD *)a3 + 1) = v361 + 2;
      v148 = *v361;
      goto LABEL_353;
    case 25LL:
      v183 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v339 = *((_DWORD ***)a3 + 1);
        v340 = (__int64 *)(v339 + 1);
        *((_QWORD *)a3 + 1) = v339 + 1;
        v186 = *v339;
      }
      else
      {
        v184 = *((_QWORD *)a3 + 2);
        v185 = v183 + 8;
        *a3 = v185;
        v186 = *(_DWORD **)(v184 + v183);
        if ( (unsigned int)v185 <= 0x2F )
        {
          v187 = v183 + 16;
          *a3 = v187;
          v188 = *(_QWORD *)(v184 + v185);
          if ( (unsigned int)v187 <= 0x2F )
          {
            v189 = v183 + 24;
            *a3 = v189;
            v190 = *(_DWORD *)(v184 + v187);
            if ( (unsigned int)v189 <= 0x2F )
            {
              *a3 = v183 + 32;
              v191 = *(_DWORD *)(v184 + v189);
              if ( v183 + 32 <= 0x2F )
              {
                *a3 = v183 + 40;
                return (int)sub_A700(v9, v186, v188, v190, v191);
              }
              v343 = *((int **)a3 + 1);
LABEL_328:
              *((_QWORD *)a3 + 1) = v343 + 2;
              return (int)sub_A700(v9, v186, v188, v190, v191);
            }
            v342 = *((int **)a3 + 1);
LABEL_327:
            v343 = v342 + 2;
            *((_QWORD *)a3 + 1) = v342 + 2;
            v191 = *v342;
            goto LABEL_328;
          }
          v341 = *((unsigned int **)a3 + 1);
LABEL_326:
          v342 = (int *)(v341 + 2);
          *((_QWORD *)a3 + 1) = v341 + 2;
          v190 = *v341;
          goto LABEL_327;
        }
        v340 = *((__int64 **)a3 + 1);
      }
      v341 = (unsigned int *)(v340 + 1);
      *((_QWORD *)a3 + 1) = v340 + 1;
      v188 = *v340;
      goto LABEL_326;
    case 26LL:
      v166 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v367 = *((__int64 **)a3 + 1);
        v368 = v367 + 1;
        *((_QWORD *)a3 + 1) = v367 + 1;
        v169 = *v367;
      }
      else
      {
        v167 = *((_QWORD *)a3 + 2);
        v168 = v166 + 8;
        *a3 = v168;
        v169 = *(_QWORD *)(v167 + v166);
        if ( (unsigned int)v168 <= 0x2F )
        {
          v170 = v166 + 16;
          *a3 = v170;
          v171 = *(_QWORD *)(v167 + v168);
          if ( (unsigned int)v170 <= 0x2F )
          {
            v172 = v166 + 24;
            *a3 = v172;
            v173 = *(_DWORD *)(v167 + v170);
            if ( (unsigned int)v172 <= 0x2F )
            {
              v174 = (_QWORD *)(v172 + v167);
              *a3 = v166 + 32;
              return (*(int (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 352LL))(
                       v11,
                       v169,
                       v171,
                       v173,
                       *v174);
            }
            v174 = *((_QWORD **)a3 + 1);
LABEL_363:
            *((_QWORD *)a3 + 1) = v174 + 1;
            return (*(int (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 352LL))(
                     v11,
                     v169,
                     v171,
                     v173,
                     *v174);
          }
          v369 = *((_DWORD **)a3 + 1);
LABEL_362:
          v174 = v369 + 2;
          *((_QWORD *)a3 + 1) = v369 + 2;
          v173 = *v369;
          goto LABEL_363;
        }
        v368 = *((_QWORD **)a3 + 1);
      }
      v369 = v368 + 1;
      *((_QWORD *)a3 + 1) = v368 + 1;
      v171 = *v368;
      goto LABEL_362;
    case 27LL:
      v175 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v372 = *((__int64 **)a3 + 1);
        v373 = v372 + 1;
        *((_QWORD *)a3 + 1) = v372 + 1;
        v178 = *v372;
      }
      else
      {
        v176 = *((_QWORD *)a3 + 2);
        v177 = v175 + 8;
        *a3 = v177;
        v178 = *(_QWORD *)(v176 + v175);
        if ( (unsigned int)v177 <= 0x2F )
        {
          v179 = v175 + 16;
          *a3 = v179;
          v180 = *(_QWORD *)(v176 + v177);
          if ( (unsigned int)v179 <= 0x2F )
          {
            v181 = (_DWORD *)(v179 + v176);
            *a3 = v175 + 24;
            goto LABEL_155;
          }
          v181 = *((_DWORD **)a3 + 1);
LABEL_372:
          *((_QWORD *)a3 + 1) = v181 + 2;
LABEL_155:
          v6 = -1;
          v182 = *(__int64 (**)())(*(_QWORD *)v11 + 368LL);
          if ( v182 != sub_9460 )
            return ((int (__fastcall *)(__int64, __int64, __int64, bool))v182)(v11, v178, v180, *v181 != 0);
          return v6;
        }
        v373 = *((_QWORD **)a3 + 1);
      }
      v181 = v373 + 1;
      *((_QWORD *)a3 + 1) = v373 + 1;
      v180 = *v373;
      goto LABEL_372;
    case 28LL:
      v59 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v60 = *((unsigned int **)a3 + 1);
        *((_QWORD *)a3 + 1) = v60 + 2;
      }
      else
      {
        v60 = (unsigned int *)(*((_QWORD *)a3 + 2) + v59);
        *a3 = v59 + 8;
      }
      v61 = *(void (**)())(*(_QWORD *)v11 + 376LL);
      if ( v61 != nullsub_3 )
        ((void (__fastcall *)(__int64, _QWORD))v61)(v11, *v60);
      return 1;
    case 29LL:
      v255 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v318 = *((_DWORD **)a3 + 1);
        v319 = (__int64 *)(v318 + 2);
        *((_QWORD *)a3 + 1) = v318 + 2;
        v199 = *v318;
LABEL_295:
        v320 = v319 + 1;
        *((_QWORD *)a3 + 1) = v319 + 1;
        v201 = *v319;
LABEL_296:
        v204 = v320 + 1;
        *((_QWORD *)a3 + 1) = v320 + 1;
        v203 = *v320;
        goto LABEL_297;
      }
      v256 = *((_QWORD *)a3 + 2);
      v257 = v255 + 8;
      *a3 = v257;
      v199 = *(_DWORD *)(v256 + v255);
      if ( (unsigned int)v257 > 0x2F )
      {
        v319 = *((__int64 **)a3 + 1);
        goto LABEL_295;
      }
      v258 = v255 + 16;
      *a3 = v258;
      v201 = *(_QWORD *)(v256 + v257);
      if ( (unsigned int)v258 > 0x2F )
      {
        v320 = *((__int64 **)a3 + 1);
        goto LABEL_296;
      }
      v259 = v255 + 24;
      *a3 = v259;
      v203 = *(_QWORD *)(v256 + v258);
      if ( (unsigned int)v259 <= 0x2F )
      {
        v204 = (_QWORD *)(v259 + v256);
        *a3 = v255 + 32;
        goto LABEL_225;
      }
      v204 = *((_QWORD **)a3 + 1);
LABEL_297:
      *((_QWORD *)a3 + 1) = v204 + 1;
LABEL_225:
      v6 = 0;
      v205 = *(__int64 (**)())(*(_QWORD *)v11 + 384LL);
      if ( v205 != sub_9480 )
        return ((int (__fastcall *)(__int64, _QWORD, __int64, __int64, _QWORD))v205)(v11, v199, v201, v203, *v204);
      return v6;
    case 30LL:
      v196 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v321 = *((_DWORD **)a3 + 1);
        v322 = (__int64 *)(v321 + 2);
        *((_QWORD *)a3 + 1) = v321 + 2;
        v199 = *v321;
      }
      else
      {
        v197 = *((_QWORD *)a3 + 2);
        v198 = v196 + 8;
        *a3 = v198;
        v199 = *(_DWORD *)(v197 + v196);
        if ( (unsigned int)v198 <= 0x2F )
        {
          v200 = v196 + 16;
          *a3 = v200;
          v201 = *(_QWORD *)(v197 + v198);
          if ( (unsigned int)v200 <= 0x2F )
          {
            v202 = v196 + 24;
            *a3 = v202;
            v203 = *(_QWORD *)(v197 + v200);
            if ( (unsigned int)v202 <= 0x2F )
            {
              v204 = (_QWORD *)(v202 + v197);
              *a3 = v196 + 32;
              goto LABEL_175;
            }
            v204 = *((_QWORD **)a3 + 1);
LABEL_301:
            *((_QWORD *)a3 + 1) = v204 + 1;
LABEL_175:
            v6 = 0;
            v205 = *(__int64 (**)())(*(_QWORD *)v11 + 392LL);
            if ( v205 != sub_9490 )
              return ((int (__fastcall *)(__int64, _QWORD, __int64, __int64, _QWORD))v205)(v11, v199, v201, v203, *v204);
            return v6;
          }
          v323 = *((__int64 **)a3 + 1);
LABEL_300:
          v204 = v323 + 1;
          *((_QWORD *)a3 + 1) = v323 + 1;
          v203 = *v323;
          goto LABEL_301;
        }
        v322 = *((__int64 **)a3 + 1);
      }
      v323 = v322 + 1;
      *((_QWORD *)a3 + 1) = v322 + 1;
      v201 = *v322;
      goto LABEL_300;
    case 31LL:
      v220 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v312 = *((_QWORD ***)a3 + 1);
        v313 = (__int64 *)(v312 + 1);
        *((_QWORD *)a3 + 1) = v312 + 1;
        v223 = *v312;
      }
      else
      {
        v221 = *((_QWORD *)a3 + 2);
        v222 = v220 + 8;
        *a3 = v222;
        v223 = *(__int64 **)(v221 + v220);
        if ( (unsigned int)v222 <= 0x2F )
        {
          v224 = v220 + 16;
          *a3 = v224;
          v225 = *(_QWORD *)(v221 + v222);
          if ( (unsigned int)v224 <= 0x2F )
          {
            v226 = v220 + 24;
            *a3 = v226;
            v227 = *(_QWORD *)(v221 + v224);
            if ( (unsigned int)v226 <= 0x2F )
            {
              v228 = (unsigned int *)(v226 + v221);
              *a3 = v220 + 32;
              goto LABEL_197;
            }
            v228 = *((unsigned int **)a3 + 1);
LABEL_289:
            *((_QWORD *)a3 + 1) = v228 + 2;
LABEL_197:
            v229 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 248LL);
            if ( v229 != sub_9450 )
              v225 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))v229)(v11, v225, v227, *v228);
            *v223 = v225;
            return 1;
          }
          v314 = *((_QWORD **)a3 + 1);
LABEL_288:
          v228 = (unsigned int *)(v314 + 1);
          *((_QWORD *)a3 + 1) = v314 + 1;
          v227 = *v314;
          goto LABEL_289;
        }
        v313 = *((__int64 **)a3 + 1);
      }
      v314 = v313 + 1;
      *((_QWORD *)a3 + 1) = v313 + 1;
      v225 = *v313;
      goto LABEL_288;
    case 33LL:
      v73 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v324 = *((_DWORD **)a3 + 1);
        v77 = v324 + 2;
        *((_QWORD *)a3 + 1) = v324 + 2;
        v76 = *v324;
      }
      else
      {
        v74 = *((_QWORD *)a3 + 2);
        v75 = v73 + 8;
        *a3 = v75;
        v76 = *(_DWORD *)(v74 + v73);
        if ( (unsigned int)v75 <= 0x2F )
        {
          v77 = (_QWORD *)(v75 + v74);
          *a3 = v73 + 16;
          goto LABEL_74;
        }
        v77 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v77 + 1;
LABEL_74:
      v78 = dbg;
      v79 = *(_QWORD *)(dbg + 32LL);
      if ( (v79 & 0x80000000000LL) == 0 )
        return 0;
      v80 = *(__int64 (**)())(*(_QWORD *)v11 + 416LL);
      if ( v80 == sub_94B0 )
        goto LABEL_76;
      v388 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v80)(v11, v76, *v77);
      if ( (unsigned int)(v388 + 1) > 1 )
        return v388;
      v78 = dbg;
      v79 = *(_QWORD *)(dbg + 32LL);
LABEL_76:
      *(_QWORD *)(v78 + 32) = v79 & 0xFFFFF7FFFFFFFFFFLL;
      return 0;
    case 34LL:
      if ( (v9[157] & 0x10) == 0 )
        return 0;
      v127 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v382 = *((_QWORD ***)a3 + 1);
        *((_QWORD *)a3 + 1) = v382 + 1;
        v130 = *v382;
      }
      else
      {
        v128 = *((_QWORD *)a3 + 2);
        v129 = v127 + 8;
        *a3 = v129;
        v130 = *(_QWORD **)(v128 + v127);
        if ( (unsigned int)v129 <= 0x2F )
        {
          v131 = v127 + 16;
          *a3 = v131;
          v132 = *(_QWORD *)(v128 + v129);
          if ( (unsigned int)v131 <= 0x2F )
          {
            v133 = v127 + 24;
            *a3 = v133;
            v134 = *(_DWORD *)(v128 + v131);
            if ( (unsigned int)v133 <= 0x2F )
            {
              *a3 = v127 + 32;
              v135 = *(_QWORD *)(v128 + v133);
              if ( v127 + 32 <= 0x2F )
              {
                v136 = v127 + 40;
                if ( (unsigned int)v136 <= 0x2F )
                {
                  *a3 = v127 + 48;
                  v137 = *(_QWORD *)(v128 + v136);
                  goto LABEL_118;
                }
                *a3 = v136;
LABEL_392:
                v386 = *((__int64 **)a3 + 1);
                *((_QWORD *)a3 + 1) = v386 + 1;
                v137 = *v386;
LABEL_118:
                v138 = *((__int64 **)a3 + 1);
                *((_QWORD *)a3 + 1) = v138 + 1;
                v139 = *v138;
                *((_QWORD *)a3 + 1) = v138 + 2;
                v140 = v138[1];
                *((_QWORD *)a3 + 1) = v138 + 3;
                v141 = v138[2];
                *((_QWORD *)a3 + 1) = v138 + 4;
                v142 = v138[3];
                *((_QWORD *)a3 + 1) = v138 + 5;
                *v130 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 424LL))(
                          v11,
                          v132,
                          v134,
                          (unsigned int)*(_QWORD *)(v135 + 56),
                          v137,
                          v139,
                          v140,
                          v141,
                          v142,
                          *((unsigned int *)v138 + 8));
                return 1;
              }
LABEL_391:
              *((_QWORD *)a3 + 1) += 8LL;
              goto LABEL_392;
            }
LABEL_390:
            v385 = *((__int64 **)a3 + 1);
            *((_QWORD *)a3 + 1) = v385 + 1;
            v135 = *v385;
            goto LABEL_391;
          }
LABEL_389:
          v384 = *((unsigned int **)a3 + 1);
          *((_QWORD *)a3 + 1) = v384 + 2;
          v134 = *v384;
          goto LABEL_390;
        }
      }
      v383 = *((__int64 **)a3 + 1);
      *((_QWORD *)a3 + 1) = v383 + 1;
      v132 = *v383;
      goto LABEL_389;
    case 35LL:
      if ( (v9[157] & 0x10) == 0 )
        return 0;
      v57 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v58 = *((unsigned int **)a3 + 1);
        *((_QWORD *)a3 + 1) = v58 + 2;
      }
      else
      {
        v58 = (unsigned int *)(*((_QWORD *)a3 + 2) + v57);
        *a3 = v57 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 432LL))(v11, *v58);
    case 36LL:
      v50 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v358 = *((_DWORD **)a3 + 1);
        v359 = (__int64 *)(v358 + 2);
        *((_QWORD *)a3 + 1) = v358 + 2;
        v53 = *v358;
      }
      else
      {
        v51 = *((_QWORD *)a3 + 2);
        v52 = v50 + 8;
        *a3 = v52;
        v53 = *(_DWORD *)(v51 + v50);
        if ( (unsigned int)v52 <= 0x2F )
        {
          v54 = v50 + 16;
          *a3 = v54;
          v55 = *(_QWORD *)(v51 + v52);
          if ( (unsigned int)v54 <= 0x2F )
          {
            v56 = (_QWORD *)(v54 + v51);
            *a3 = v50 + 24;
            return (*(int (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 360LL))(
                     v11,
                     v53,
                     v55,
                     *v56);
          }
          v56 = *((_QWORD **)a3 + 1);
LABEL_350:
          *((_QWORD *)a3 + 1) = v56 + 1;
          return (*(int (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 360LL))(v11, v53, v55, *v56);
        }
        v359 = *((__int64 **)a3 + 1);
      }
      v56 = v359 + 1;
      *((_QWORD *)a3 + 1) = v359 + 1;
      v55 = *v359;
      goto LABEL_350;
    case 37LL:
      v39 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v325 = *((_DWORD **)a3 + 1);
        v326 = v325 + 2;
        *((_QWORD *)a3 + 1) = v325 + 2;
        v42 = *v325;
      }
      else
      {
        v40 = *((_QWORD *)a3 + 2);
        v41 = v39 + 8;
        *a3 = v41;
        v42 = *(_DWORD *)(v40 + v39);
        if ( (unsigned int)v41 <= 0x2F )
        {
          v43 = v39 + 16;
          *a3 = v43;
          v44 = *(_QWORD *)(v40 + v41);
          if ( (unsigned int)v43 <= 0x2F )
          {
            v45 = v39 + 24;
            *a3 = v45;
            v9 = *(_BYTE **)(v40 + v43);
            if ( (unsigned int)v45 <= 0x2F )
            {
              v46 = v39 + 32;
              *a3 = v46;
              v47 = *(_QWORD *)(v40 + v45);
              if ( (unsigned int)v46 <= 0x2F )
              {
                v48 = (_QWORD *)(v46 + v40);
                *a3 = v39 + 40;
                goto LABEL_44;
              }
              v48 = *((_QWORD **)a3 + 1);
LABEL_309:
              *((_QWORD *)a3 + 1) = v48 + 1;
LABEL_44:
              v49 = *(__int64 (**)())(*(_QWORD *)v11 + 400LL);
              if ( v49 != sub_94A0 )
                return ((int (__fastcall *)(__int64, _QWORD, __int64, _BYTE *, __int64, _QWORD))v49)(
                         v11,
                         v42,
                         v44,
                         v9,
                         v47,
                         *v48);
              return 0;
            }
LABEL_423:
            v328 = *((__int64 **)a3 + 1);
LABEL_308:
            v48 = v328 + 1;
            *((_QWORD *)a3 + 1) = v328 + 1;
            v47 = *v328;
            goto LABEL_309;
          }
          v327 = *((_BYTE ***)a3 + 1);
LABEL_307:
          v328 = (__int64 *)(v327 + 1);
          *((_QWORD *)a3 + 1) = v327 + 1;
          v9 = *v327;
          goto LABEL_308;
        }
        v326 = *((_QWORD **)a3 + 1);
      }
      v327 = (_BYTE **)(v326 + 1);
      *((_QWORD *)a3 + 1) = v326 + 1;
      v44 = *v326;
      goto LABEL_307;
    case 38LL:
      v110 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v370 = *((unsigned int **)a3 + 1);
        v371 = v370 + 2;
        *((_QWORD *)a3 + 1) = v370 + 2;
        v113 = *v370;
      }
      else
      {
        v111 = *((_QWORD *)a3 + 2);
        v112 = v110 + 8;
        *a3 = v112;
        v113 = *(_DWORD *)(v111 + v110);
        if ( (unsigned int)v112 <= 0x2F )
        {
          v114 = v110 + 16;
          *a3 = v114;
          v115 = *(_DWORD *)(v111 + v112) != 0;
          if ( (unsigned int)v114 <= 0x2F )
          {
            v116 = (unsigned int *)(v114 + v111);
            *a3 = v110 + 24;
            goto LABEL_102;
          }
          v116 = *((unsigned int **)a3 + 1);
LABEL_366:
          *((_QWORD *)a3 + 1) = v116 + 2;
LABEL_102:
          v117 = *(__int64 (**)())(*(_QWORD *)v11 + 520LL);
          if ( v117 != sub_94C0 )
            return ((unsigned __int8 (__fastcall *)(__int64, _QWORD, bool, _QWORD))v117)(v11, v113, v115, *v116);
          return 0;
        }
        v371 = *((_DWORD **)a3 + 1);
      }
      v116 = v371 + 2;
      *((_QWORD *)a3 + 1) = v371 + 2;
      v115 = *v371 != 0;
      goto LABEL_366;
    case 39LL:
      v104 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v357 = *((unsigned int **)a3 + 1);
        v108 = v357 + 2;
        *((_QWORD *)a3 + 1) = v357 + 2;
        v107 = *v357;
      }
      else
      {
        v105 = *((_QWORD *)a3 + 2);
        v106 = v104 + 8;
        *a3 = v106;
        v107 = *(_DWORD *)(v105 + v104);
        if ( (unsigned int)v106 <= 0x2F )
        {
          v108 = (unsigned int *)(v106 + v105);
          *a3 = v104 + 16;
          goto LABEL_96;
        }
        v108 = *((unsigned int **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v108 + 2;
LABEL_96:
      v109 = *(__int64 (**)())(*(_QWORD *)v11 + 528LL);
      if ( v109 == sub_94D0 )
        return 0;
      return ((unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD))v109)(v11, v107, *v108);
    case 40LL:
      v192 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v193 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v193 + 1;
      }
      else
      {
        v193 = (_QWORD *)(*((_QWORD *)a3 + 2) + v192);
        *a3 = v192 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 536LL))(v11, *v193);
    case 41LL:
      v62 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v310 = *((__int64 **)a3 + 1);
        v66 = v310 + 1;
        *((_QWORD *)a3 + 1) = v310 + 1;
        v65 = *v310;
      }
      else
      {
        v63 = *((_QWORD *)a3 + 2);
        v64 = v62 + 8;
        *a3 = v64;
        v65 = *(_QWORD *)(v63 + v62);
        if ( (unsigned int)v64 <= 0x2F )
        {
          v66 = (_QWORD *)(v64 + v63);
          *a3 = v62 + 16;
          goto LABEL_62;
        }
        v66 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v66 + 1;
LABEL_62:
      v67 = *(__int64 (**)())(*(_QWORD *)v11 + 560LL);
      if ( v67 == sub_94E0 )
        return 0;
      return ((unsigned __int8 (__fastcall *)(__int64, __int64, _QWORD))v67)(v11, v65, *v66);
    case 42LL:
      v26 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v329 = *((__int64 **)a3 + 1);
        v330 = v329 + 1;
        *((_QWORD *)a3 + 1) = v329 + 1;
        v29 = *v329;
      }
      else
      {
        v27 = *((_QWORD *)a3 + 2);
        v28 = v26 + 8;
        *a3 = v28;
        v29 = *(_QWORD *)(v27 + v26);
        if ( (unsigned int)v28 <= 0x2F )
        {
          v30 = v26 + 16;
          *a3 = v30;
          v31 = *(_QWORD *)(v27 + v28);
          if ( (unsigned int)v30 <= 0x2F )
          {
            v32 = v26 + 24;
            *a3 = v32;
            v33 = *(const char **)(v27 + v30);
            if ( (unsigned int)v32 <= 0x2F )
            {
              v34 = v26 + 32;
              *a3 = v34;
              v35 = *(_QWORD *)(v27 + v32);
              if ( (unsigned int)v34 <= 0x2F )
              {
                v36 = v26 + 40;
                *a3 = v36;
                v37 = *(unsigned int *)(v27 + v34);
                if ( (unsigned int)v36 <= 0x2F )
                {
                  v38 = (_QWORD *)(v36 + v27);
                  *a3 = v26 + 48;
                  goto LABEL_35;
                }
                v38 = *((_QWORD **)a3 + 1);
LABEL_315:
                *((_QWORD *)a3 + 1) = v38 + 1;
LABEL_35:
                if ( v35 )
                {
                  v6 = (*(int (__fastcall **)(__int64, __int64, __int64, const char *, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 576LL))(
                         v11,
                         v29,
                         v31,
                         v33,
                         v35,
                         v37,
                         *v38);
                  if ( (*(_DWORD *)debug & 0x10000) != 0 )
                    sub_9D40((__int64)"debugger_t::ev_bin_search(%a, %a) -> %d(%s) ea %a\n", a4, a5, v31, v33, a6);
                  return v6;
                }
                return 0;
              }
              v333 = *((unsigned int **)a3 + 1);
LABEL_314:
              v38 = v333 + 2;
              *((_QWORD *)a3 + 1) = v333 + 2;
              v37 = *v333;
              goto LABEL_315;
            }
            v332 = *((_QWORD **)a3 + 1);
LABEL_313:
            v333 = (unsigned int *)(v332 + 1);
            *((_QWORD *)a3 + 1) = v332 + 1;
            v35 = *v332;
            goto LABEL_314;
          }
          v331 = *((const char ***)a3 + 1);
LABEL_312:
          v332 = v331 + 1;
          *((_QWORD *)a3 + 1) = v331 + 1;
          v33 = *v331;
          goto LABEL_313;
        }
        v330 = *((_QWORD **)a3 + 1);
      }
      v331 = (const char **)(v330 + 1);
      *((_QWORD *)a3 + 1) = v330 + 1;
      v31 = *v330;
      goto LABEL_312;
    case 43LL:
      if ( !v9[208] )
        return 0;
      if ( (unsigned int)*a3 > 0x2F )
        *((_QWORD *)a3 + 1) += 8LL;
      else
        *a3 += 8;
      v25 = *(__int64 (**)())(*(_QWORD *)v11 + 584LL);
      if ( v25 == sub_9500 || (v387 = v25(), v387 >= 0) )
      {
        serialize_dynamic_register_set();
        deserialize_dynamic_register_set();
        return 1;
      }
      return v387;
    case 44LL:
      v12 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v334 = *((_QWORD ***)a3 + 1);
        v335 = v334 + 1;
        *((_QWORD *)a3 + 1) = v334 + 1;
        v15 = *v334;
      }
      else
      {
        v13 = *((_QWORD *)a3 + 2);
        v14 = v12 + 8;
        *a3 = v14;
        v15 = *(__int64 **)(v13 + v12);
        if ( (unsigned int)v14 <= 0x2F )
        {
          v16 = v12 + 16;
          *a3 = v16;
          v17 = *(_QWORD *)(v13 + v14);
          if ( (unsigned int)v16 <= 0x2F )
          {
            v18 = v12 + 24;
            *a3 = v18;
            v390 = *(_DWORD *)(v13 + v16);
            if ( (unsigned int)v18 <= 0x2F )
            {
              v19 = v12 + 32;
              *a3 = v19;
              v20 = *(_DWORD *)(v13 + v18);
              if ( (unsigned int)v19 <= 0x2F )
              {
                v21 = (__int64 *)(v19 + v13);
                *a3 = v12 + 40;
                goto LABEL_13;
              }
              v21 = *((__int64 **)a3 + 1);
LABEL_320:
              *((_QWORD *)a3 + 1) = v21 + 1;
LABEL_13:
              v22 = *v21;
              if ( (*(_DWORD *)debug & 0x10000) != 0 )
                sub_9D40((__int64)"debugger_t::ev_set_dbg_options(%s)\n", (const char *)v17);
              v23 = *(__int64 (**)())(*(_QWORD *)v9 + 64LL);
              v24 = 0;
              if ( v23 != sub_9410 )
                v24 = ((__int64 (__fastcall *)(_BYTE *, __int64, _QWORD, _QWORD, __int64))v23)(v9, v17, v390, v20, v22);
              if ( !v17 || *(_BYTE *)v17 != 32 || (v6 = v24 != 0, *(_BYTE *)(v17 + 1)) )
              {
                if ( v15 )
                  *v15 = v24;
                return 1;
              }
              return v6;
            }
            v337 = *((_DWORD **)a3 + 1);
LABEL_319:
            v21 = (__int64 *)(v337 + 2);
            *((_QWORD *)a3 + 1) = v337 + 2;
            v20 = *v337;
            goto LABEL_320;
          }
          v336 = *((unsigned int **)a3 + 1);
LABEL_318:
          v337 = v336 + 2;
          *((_QWORD *)a3 + 1) = v336 + 2;
          v390 = *v336;
          goto LABEL_319;
        }
        v335 = *((_QWORD **)a3 + 1);
      }
      v336 = (unsigned int *)(v335 + 1);
      *((_QWORD *)a3 + 1) = v335 + 1;
      v17 = *v335;
      goto LABEL_318;
    default:
      return 0;
  }
}

