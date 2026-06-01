__int64 __fastcall sub_FBE0(__int64 a1, __int64 a2, int *a3, double a4, double a5, double a6)
{
  __int64 v6; // r15
  int v7; // ecx
  __int64 (*v10)(void); // rax
  __int64 v11; // rdi
  unsigned int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // r13
  __int64 v18; // rdi
  __int64 v19; // rsi
  unsigned int v20; // r14d
  __int64 *v21; // rax
  __int64 v22; // r15
  __int64 v23; // rax
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // r13
  __int64 v29; // r8
  __int64 v30; // rbx
  __int64 v31; // rsi
  const char *v32; // r12
  __int64 v33; // r9
  __int64 v34; // r8
  __int64 v35; // rsi
  __int64 v36; // r9
  _QWORD *v37; // rax
  unsigned int v38; // ecx
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // r8
  _QWORD *v42; // rax
  __int64 (*v43)(); // rcx
  unsigned int v44; // eax
  _QWORD *v45; // rcx
  unsigned int v46; // ecx
  __int64 v47; // rax
  __int64 v48; // rsi
  unsigned int v49; // r8d
  unsigned int *v50; // rax
  __int64 (*v51)(); // rcx
  unsigned int v52; // ecx
  __int64 v53; // rax
  __int64 v54; // r8
  unsigned int v55; // r10d
  __int64 v56; // rsi
  bool v57; // r9
  unsigned int *v58; // rax
  __int64 (*v59)(); // r8
  unsigned int v60; // ecx
  __int64 v61; // rax
  __int64 v62; // r8
  unsigned int v63; // r10d
  __int64 v64; // rsi
  __int64 v65; // r11
  __int64 v66; // r8
  __int64 v67; // rbx
  __int64 v68; // rsi
  __int64 v69; // r8
  _QWORD *v70; // rax
  unsigned int v71; // ecx
  unsigned int *v72; // rax
  unsigned int v73; // eax
  unsigned int *v74; // rcx
  unsigned int v75; // ecx
  __int64 v76; // rax
  __int64 v77; // rsi
  unsigned int v78; // r8d
  _QWORD *v79; // rax
  int v80; // ebx
  unsigned int v81; // eax
  _DWORD *v82; // rcx
  __int64 (*v83)(); // rax
  unsigned int v84; // ecx
  __int64 v85; // rax
  __int64 v86; // r8
  _DWORD *v87; // rbx
  __int64 v88; // rsi
  __int64 v89; // r8
  unsigned int *v90; // rax
  unsigned int v91; // eax
  _QWORD *v92; // rcx
  unsigned int v93; // eax
  __int64 v94; // rsi
  __int64 v95; // rcx
  _QWORD *v96; // rbx
  __int64 v97; // r8
  __int64 v98; // r10
  __int64 v99; // rcx
  unsigned int v100; // r11d
  __int64 v101; // r14
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 *v104; // rax
  __int64 v105; // r9
  __int64 v106; // rcx
  __int64 v107; // rsi
  __int64 v108; // r12
  unsigned int v109; // ecx
  __int64 v110; // rax
  __int64 v111; // rsi
  __int64 v112; // r9
  __int64 v113; // r8
  unsigned int v114; // r10d
  __int64 v115; // rsi
  unsigned int v116; // ebx
  _QWORD *v117; // rax
  unsigned int v118; // ecx
  __int64 v119; // rax
  __int64 v120; // rsi
  unsigned int v121; // r9d
  __int64 v122; // r8
  unsigned int v123; // r10d
  __int64 v124; // rsi
  __int64 v125; // rbx
  _QWORD *v126; // rax
  unsigned int v127; // eax
  unsigned int *v128; // rcx
  unsigned int v129; // eax
  unsigned int *v130; // rcx
  unsigned int v131; // ecx
  __int64 v132; // rax
  __int64 v133; // rsi
  bool v134; // bl
  _QWORD *v135; // rax
  unsigned int v136; // ecx
  __int64 v137; // rax
  __int64 v138; // rsi
  __int64 v139; // r8
  unsigned int *v140; // rax
  unsigned int v141; // ecx
  __int64 v142; // rax
  __int64 v143; // r8
  unsigned int v144; // r9d
  __int64 v145; // rsi
  __int64 v146; // r8
  _QWORD *v147; // rax
  unsigned int v148; // ecx
  __int64 v149; // rax
  __int64 v150; // rsi
  unsigned int v151; // r9d
  __int64 v152; // r8
  unsigned int v153; // r10d
  __int64 v154; // rsi
  unsigned int v155; // r14d
  _QWORD *v156; // rax
  int v157; // eax
  unsigned int v158; // ecx
  __int64 v159; // rax
  __int64 v160; // rsi
  unsigned int v161; // r9d
  __int64 v162; // r8
  __int64 v163; // r10
  __int64 v164; // rsi
  __int64 v165; // rbx
  _QWORD *v166; // rax
  unsigned int v167; // ecx
  __int64 v168; // rax
  __int64 v169; // rsi
  unsigned int v170; // r9d
  __int64 v171; // r8
  __int64 v172; // r10
  __int64 v173; // rsi
  __int64 v174; // rbx
  _QWORD *v175; // rax
  unsigned int v176; // ecx
  __int64 v177; // rax
  __int64 v178; // rsi
  __int64 *v179; // rbx
  __int64 v180; // r9
  __int64 v181; // rsi
  __int64 v182; // r8
  __int64 v183; // r9
  unsigned int *v184; // rax
  __int64 (__fastcall *v185)(__int64, __int64); // r8
  unsigned int v186; // ecx
  __int64 v187; // rax
  __int64 v188; // rsi
  _DWORD *v189; // rbx
  __int64 v190; // r8
  __int64 v191; // rsi
  __int64 v192; // r9
  __int64 v193; // r8
  _DWORD *v194; // rax
  unsigned int v195; // ecx
  __int64 v196; // rax
  __int64 v197; // rsi
  __int64 v198; // r9
  __int64 v199; // r8
  __int64 v200; // r10
  __int64 v201; // rsi
  unsigned int v202; // ebx
  _QWORD *v203; // rax
  unsigned int v204; // ecx
  __int64 v205; // rax
  __int64 v206; // rdi
  _DWORD *v207; // r10
  __int64 v208; // rsi
  __int64 *v209; // r11
  __int64 v210; // rdi
  unsigned int v211; // r14d
  int v212; // r8d
  unsigned int v213; // ecx
  __int64 v214; // rax
  __int64 v215; // r8
  __int64 v216; // r9
  __int64 v217; // rsi
  __int64 v218; // r8
  _DWORD *v219; // rax
  unsigned int v220; // eax
  _QWORD *v221; // rcx
  unsigned int v222; // eax
  _QWORD *v223; // rcx
  unsigned int v224; // ecx
  __int64 v225; // rax
  __int64 v226; // rsi
  unsigned int v227; // r9d
  __int64 v228; // r8
  unsigned int v229; // r10d
  __int64 v230; // rsi
  __int64 v231; // rbx
  _QWORD *v232; // rax
  unsigned int v233; // ecx
  __int64 v234; // rax
  __int64 v235; // rsi
  unsigned int v236; // r8d
  unsigned int *v237; // rax
  unsigned int v238; // ecx
  __int64 v239; // rax
  __int64 v240; // r8
  __int64 *v241; // rbx
  __int64 v242; // rsi
  __int64 v243; // r9
  __int64 v244; // r8
  __int64 v245; // r10
  __int64 v246; // rsi
  __int64 v247; // r14
  _QWORD *v248; // rax
  __int64 v249; // rax
  __int64 v250; // rdx
  unsigned int v251; // ecx
  __int64 v252; // rax
  __int64 v253; // rsi
  __int64 v254; // r8
  _QWORD *v255; // rax
  unsigned int v256; // ecx
  __int64 v257; // rax
  __int64 v258; // rsi
  __int64 v259; // rdi
  unsigned int v260; // r12d
  __int64 v261; // rsi
  __int64 v262; // r13
  __int64 *v263; // rax
  __int64 v264; // r14
  const char *v265; // rsi
  unsigned int v266; // ecx
  __int64 v267; // rax
  __int64 v268; // rsi
  __int64 v269; // r8
  _QWORD *v270; // rax
  const char *v271; // rsi
  unsigned int v272; // ecx
  __int64 v273; // rax
  __int64 v274; // r8
  __int64 v275; // rsi
  __int64 v276; // r9
  __int64 v277; // r8
  __int64 v278; // r10
  __int64 v279; // rsi
  __int64 v280; // r14
  _QWORD *v281; // rax
  unsigned int v282; // eax
  _QWORD *v283; // rcx
  unsigned int v284; // eax
  char **v285; // rcx
  unsigned int v286; // eax
  __int64 v287; // rcx
  __int64 v288; // rsi
  __int64 v289; // r11
  __int64 v290; // r8
  __int64 v291; // r14
  __int64 v292; // rsi
  __int64 v293; // r8
  __int64 v294; // r10
  __int64 v295; // r9
  __int64 v296; // rsi
  __int64 v297; // r10
  __int64 *v298; // rax
  __int64 v299; // rsi
  __int64 v300; // r12
  int v301; // eax
  __int64 v302; // rax
  __int64 *v303; // rax
  _QWORD *v304; // rcx
  unsigned int *v305; // rcx
  _DWORD *v306; // rax
  __int64 *v307; // rcx
  const char **v308; // rcx
  unsigned int *v309; // rax
  __int64 *v310; // rcx
  _QWORD **v311; // rax
  __int64 *v312; // rcx
  __int64 *v313; // rax
  __int64 *v314; // rcx
  unsigned int *v315; // rcx
  _DWORD *v316; // rax
  __int64 *v317; // rcx
  __int64 *v318; // rcx
  _QWORD *v319; // rax
  _DWORD *v320; // rcx
  _DWORD *v321; // rcx
  __int64 *v322; // rax
  __int64 *v323; // rcx
  _DWORD **v324; // rax
  __int64 **v325; // rcx
  unsigned int *v326; // rax
  int *v327; // rcx
  int *v328; // rax
  _DWORD **v329; // rax
  _QWORD *v330; // rcx
  unsigned int *v331; // rcx
  _QWORD *v332; // rcx
  unsigned int *v333; // rax
  _DWORD *v334; // rcx
  unsigned int *v335; // rcx
  _DWORD *v336; // rax
  __int64 *v337; // rcx
  _DWORD *v338; // rcx
  _DWORD *v339; // rcx
  __int64 *v340; // rax
  __int64 *v341; // rcx
  _DWORD **v342; // rcx
  unsigned int *v343; // rax
  _QWORD *v344; // rcx
  __int64 *v345; // rcx
  _QWORD *v346; // rax
  const char **v347; // rcx
  _QWORD *v348; // rax
  unsigned int *v349; // rcx
  _QWORD **v350; // rax
  _QWORD *v351; // rcx
  unsigned int *v352; // rax
  _DWORD *v353; // rcx
  _DWORD *v354; // rax
  __int64 *v355; // rcx
  __int64 *v356; // rax
  __int64 *v357; // rcx
  __int64 *v358; // rcx
  unsigned int *v359; // rax
  _DWORD *v360; // rcx
  _QWORD *v361; // rcx
  unsigned int *v362; // rcx
  unsigned int *v363; // rax
  _DWORD *v364; // rcx
  __int64 *v365; // rcx
  _QWORD **v366; // rcx
  __int64 *v367; // rax
  _QWORD *v368; // rcx
  _DWORD *v369; // rcx
  _QWORD **v370; // rax
  __int64 *v371; // rcx
  __int64 *v372; // rax
  __int64 *v373; // rcx
  __int64 *v374; // rcx
  __int64 *v375; // rax
  __int64 *v376; // rcx
  _QWORD *v377; // rax
  unsigned int *v378; // rcx
  _QWORD *v379; // rax
  unsigned int *v380; // rcx
  _QWORD **v381; // rax
  __int64 *v382; // rax
  unsigned int *v383; // rax
  __int64 *v384; // rax
  __int64 *v385; // rax
  int *v386; // [rsp+10h] [rbp-70h]
  unsigned int v387; // [rsp+18h] [rbp-68h]
  const char *v388; // [rsp+18h] [rbp-68h]
  const char *v389; // [rsp+30h] [rbp-50h] BYREF
  __int128 v390; // [rsp+38h] [rbp-48h]
  unsigned __int64 v391; // [rsp+48h] [rbp-38h]

  v6 = 0;
  v7 = *(_DWORD *)(a1 + 136);
  v391 = __readfsqword(0x28u);
  if ( *(_DWORD *)(dbg + 16LL) != v7 || *(_QWORD *)(dbg + 32LL) != *(_QWORD *)(a1 + 152) )
    return v6;
  v10 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
  if ( (char *)v10 == (char *)sub_BCB0 )
  {
    v11 = a1 + 272;
  }
  else
  {
    v386 = a3;
    v302 = v10();
    a3 = v386;
    v11 = v302;
  }
  switch ( a2 )
  {
    case 0LL:
      v256 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v308 = *((const char ***)a3 + 1);
        v309 = (unsigned int *)(v308 + 1);
        *((_QWORD *)a3 + 1) = v308 + 1;
        v388 = *v308;
      }
      else
      {
        v257 = *((_QWORD *)a3 + 2);
        v258 = v256 + 8;
        *a3 = v258;
        v388 = *(const char **)(v257 + v256);
        if ( (unsigned int)v258 <= 0x2F )
        {
          v259 = v256 + 16;
          *a3 = v259;
          v260 = *(_DWORD *)(v257 + v258);
          if ( (unsigned int)v259 <= 0x2F )
          {
            v261 = v256 + 24;
            *a3 = v261;
            v262 = *(_QWORD *)(v257 + v259);
            if ( (unsigned int)v261 <= 0x2F )
            {
              v263 = (__int64 *)(v261 + v257);
              *a3 = v256 + 32;
              goto LABEL_221;
            }
            while ( 1 )
            {
              v263 = *((__int64 **)a3 + 1);
LABEL_274:
              *((_QWORD *)a3 + 1) = v263 + 1;
LABEL_221:
              v264 = *v263;
              if ( *v263 )
                break;
              if ( under_debugger )
                BUG();
              interr();
            }
            if ( (*(_DWORD *)debug & 0x10000) != 0 )
            {
              v389 = nullptr;
              v390 = 0;
              get_dbctx_id();
              sub_ED40((__int64 *)&v389);
              v265 = s;
              if ( (_QWORD)v390 )
                v265 = v389;
              sub_C7B0((__int64)"%s: debugger_t::ev_init_debugger (%s,%d,)\n", v265, v388, v260);
              if ( v389 )
              {
                *(_QWORD *)&v390 = 0;
                qfree();
              }
            }
            return (int)sub_F4D0(a1, (__int64)v388, v260, v262, v264);
          }
          v310 = *((__int64 **)a3 + 1);
LABEL_273:
          v263 = v310 + 1;
          *((_QWORD *)a3 + 1) = v310 + 1;
          v262 = *v310;
          goto LABEL_274;
        }
        v309 = *((unsigned int **)a3 + 1);
      }
      v310 = (__int64 *)(v309 + 2);
      *((_QWORD *)a3 + 1) = v309 + 2;
      v260 = *v309;
      goto LABEL_273;
    case 1LL:
      if ( (*(_DWORD *)debug & 0x10000) != 0 )
      {
        v389 = nullptr;
        v390 = 0;
        get_dbctx_id();
        sub_ED40((__int64 *)&v389);
        v271 = s;
        if ( (_QWORD)v390 )
          v271 = v389;
        sub_C7B0((__int64)"%s: debugger_t::ev_term_debugger\n", v271);
        if ( v389 )
        {
          *(_QWORD *)&v390 = 0;
          qfree();
        }
      }
      return (int)sub_EC10((__int64 *)a1);
    case 2LL:
      v266 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v365 = *((__int64 **)a3 + 1);
        v270 = v365 + 1;
        *((_QWORD *)a3 + 1) = v365 + 1;
        v269 = *v365;
      }
      else
      {
        v267 = *((_QWORD *)a3 + 2);
        v268 = v266 + 8;
        *a3 = v268;
        v269 = *(_QWORD *)(v267 + v266);
        if ( (unsigned int)v268 <= 0x2F )
        {
          v270 = (_QWORD *)(v268 + v267);
          *a3 = v266 + 16;
          return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 72LL))(v11, v269, *v270);
        }
        v270 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v270 + 1;
      return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 72LL))(v11, v269, *v270);
    case 3LL:
      v286 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v375 = *((__int64 **)a3 + 1);
        v376 = v375 + 1;
        *((_QWORD *)a3 + 1) = v375 + 1;
        v289 = *v375;
      }
      else
      {
        v287 = *((_QWORD *)a3 + 2);
        v288 = v286 + 8;
        *a3 = v288;
        v289 = *(_QWORD *)(v287 + v286);
        if ( (unsigned int)v288 <= 0x2F )
        {
          v290 = v286 + 16;
          *a3 = v290;
          v291 = *(_QWORD *)(v287 + v288);
          if ( (unsigned int)v290 <= 0x2F )
          {
            v292 = v286 + 24;
            *a3 = v292;
            v293 = *(_QWORD *)(v287 + v290);
            if ( (unsigned int)v292 <= 0x2F )
            {
              v294 = v286 + 32;
              *a3 = v294;
              v295 = *(unsigned int *)(v287 + v292);
              if ( (unsigned int)v294 <= 0x2F )
              {
                v296 = v286 + 40;
                *a3 = v296;
                v297 = *(_QWORD *)(v287 + v294);
                if ( (unsigned int)v296 <= 0x2F )
                {
                  *a3 = v286 + 48;
                  v298 = *((__int64 **)a3 + 1);
                  v299 = *(unsigned int *)(v287 + v296);
                  goto LABEL_258;
                }
                v380 = *((unsigned int **)a3 + 1);
LABEL_375:
                v298 = (__int64 *)(v380 + 2);
                *((_QWORD *)a3 + 1) = v380 + 2;
                v299 = *v380;
LABEL_258:
                *((_QWORD *)a3 + 1) = v298 + 1;
                v300 = *v298;
                *((_QWORD *)a3 + 1) = v298 + 2;
                v301 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v11 + 128LL))(
                         v11,
                         v289,
                         v291,
                         v298[1],
                         v293,
                         v295,
                         v297,
                         v299,
                         v300);
                v6 = v301;
                if ( v301 > 0 )
                  goto LABEL_135;
                return v6;
              }
              v379 = *((_QWORD **)a3 + 1);
LABEL_374:
              v380 = (unsigned int *)(v379 + 1);
              *((_QWORD *)a3 + 1) = v379 + 1;
              v297 = *v379;
              goto LABEL_375;
            }
            v378 = *((unsigned int **)a3 + 1);
LABEL_373:
            v379 = v378 + 2;
            *((_QWORD *)a3 + 1) = v378 + 2;
            v295 = *v378;
            goto LABEL_374;
          }
          v377 = *((_QWORD **)a3 + 1);
LABEL_372:
          v378 = (unsigned int *)(v377 + 1);
          *((_QWORD *)a3 + 1) = v377 + 1;
          v293 = *v377;
          goto LABEL_373;
        }
        v376 = *((__int64 **)a3 + 1);
      }
      v377 = v376 + 1;
      *((_QWORD *)a3 + 1) = v376 + 1;
      v291 = *v376;
      goto LABEL_372;
    case 4LL:
      v148 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v362 = *((unsigned int **)a3 + 1);
        v363 = v362 + 2;
        *((_QWORD *)a3 + 1) = v362 + 2;
        v151 = *v362;
      }
      else
      {
        v149 = *((_QWORD *)a3 + 2);
        v150 = v148 + 8;
        *a3 = v150;
        v151 = *(_DWORD *)(v149 + v148);
        if ( (unsigned int)v150 <= 0x2F )
        {
          v152 = v148 + 16;
          *a3 = v152;
          v153 = *(_DWORD *)(v149 + v150);
          if ( (unsigned int)v152 <= 0x2F )
          {
            v154 = v148 + 24;
            *a3 = v154;
            v155 = *(_DWORD *)(v149 + v152);
            if ( (unsigned int)v154 <= 0x2F )
            {
              v156 = (_QWORD *)(v154 + v149);
              *a3 = v148 + 32;
              goto LABEL_134;
            }
            v156 = *((_QWORD **)a3 + 1);
LABEL_352:
            *((_QWORD *)a3 + 1) = v156 + 1;
LABEL_134:
            v157 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v11 + 144LL))(
                     v11,
                     v151,
                     v153,
                     v155,
                     *v156);
            v6 = v157;
            if ( v157 > 0 )
LABEL_135:
              sub_F170((__int64 *)a1, 1u);
            return v6;
          }
          v364 = *((_DWORD **)a3 + 1);
LABEL_351:
          v156 = v364 + 2;
          *((_QWORD *)a3 + 1) = v364 + 2;
          v155 = *v364;
          goto LABEL_352;
        }
        v363 = *((unsigned int **)a3 + 1);
      }
      v364 = v363 + 2;
      *((_QWORD *)a3 + 1) = v363 + 2;
      v153 = *v363;
      goto LABEL_351;
    case 5LL:
      return (*(int (__fastcall **)(__int64))(*(_QWORD *)v11 + 120LL))(v11);
    case 6LL:
      v222 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v223 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v223 + 1;
      }
      else
      {
        v223 = (_QWORD *)(*((_QWORD *)a3 + 2) + v222);
        *a3 = v222 + 8;
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 552LL))(v11, *v223);
      return 1;
    case 7LL:
      v284 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v285 = *((char ***)a3 + 1);
        *((_QWORD *)a3 + 1) = v285 + 1;
      }
      else
      {
        v285 = (char **)(*((_QWORD *)a3 + 2) + v284);
        *a3 = v284 + 8;
      }
      sub_E300(*v285, a4, a5);
      return 1;
    case 8LL:
      v220 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v221 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v221 + 1;
      }
      else
      {
        v221 = (_QWORD *)(*((_QWORD *)a3 + 2) + v220);
        *a3 = v220 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 152LL))(v11, *v221);
    case 9LL:
      v91 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v92 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v92 + 1;
      }
      else
      {
        v92 = (_QWORD *)(*((_QWORD *)a3 + 2) + v91);
        *a3 = v91 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 160LL))(v11, *v92);
    case 10LL:
      v84 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v329 = *((_DWORD ***)a3 + 1);
        v330 = v329 + 1;
        *((_QWORD *)a3 + 1) = v329 + 1;
        v87 = *v329;
      }
      else
      {
        v85 = *((_QWORD *)a3 + 2);
        v86 = v84 + 8;
        *a3 = v86;
        v87 = *(_DWORD **)(v85 + v84);
        if ( (unsigned int)v86 <= 0x2F )
        {
          v88 = v84 + 16;
          *a3 = v88;
          v89 = *(_QWORD *)(v85 + v86);
          if ( (unsigned int)v88 <= 0x2F )
          {
            v90 = (unsigned int *)(v88 + v85);
            *a3 = v84 + 24;
            goto LABEL_84;
          }
          v90 = *((unsigned int **)a3 + 1);
LABEL_301:
          *((_QWORD *)a3 + 1) = v90 + 2;
LABEL_84:
          *v87 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 136LL))(v11, v89, *v90);
          return 1;
        }
        v330 = *((_QWORD **)a3 + 1);
      }
      v90 = (unsigned int *)(v330 + 1);
      *((_QWORD *)a3 + 1) = v330 + 1;
      v89 = *v330;
      goto LABEL_301;
    case 11LL:
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
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 168LL))(v11, *v283);
    case 12LL:
      v81 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v82 = *((_DWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v82 + 2;
      }
      else
      {
        v82 = (_DWORD *)(*((_QWORD *)a3 + 2) + v81);
        *a3 = v81 + 8;
      }
      v83 = *(__int64 (**)())(*(_QWORD *)v11 + 176LL);
      if ( v83 == sub_BC60 )
        return 0;
      return ((int (__fastcall *)(__int64, bool))v83)(v11, *v82 != 0);
    case 13LL:
      v136 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v361 = *((_QWORD **)a3 + 1);
        v140 = (unsigned int *)(v361 + 1);
        *((_QWORD *)a3 + 1) = v361 + 1;
        v139 = *v361;
      }
      else
      {
        v137 = *((_QWORD *)a3 + 2);
        v138 = v136 + 8;
        *a3 = v138;
        v139 = *(_QWORD *)(v137 + v136);
        if ( (unsigned int)v138 <= 0x2F )
        {
          v140 = (unsigned int *)(v138 + v137);
          *a3 = v136 + 16;
          goto LABEL_123;
        }
        v140 = *((unsigned int **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v140 + 2;
LABEL_123:
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 184LL))(v11, v139, *v140);
      return 1;
    case 14LL:
      v131 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v338 = *((_DWORD **)a3 + 1);
        v135 = v338 + 2;
        *((_QWORD *)a3 + 1) = v338 + 2;
        v134 = *v338 != 0;
      }
      else
      {
        v132 = *((_QWORD *)a3 + 2);
        v133 = v131 + 8;
        *a3 = v133;
        v134 = *(_DWORD *)(v132 + v131) != 0;
        if ( (unsigned int)v133 <= 0x2F )
        {
          v135 = (_QWORD *)(v133 + v132);
          *a3 = v131 + 16;
          goto LABEL_118;
        }
        v135 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v135 + 1;
LABEL_118:
      (*(void (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)v11 + 192LL))(v11, 0, v134, *v135);
      if ( v134 )
        sub_1E9A0(v11);
      return 1;
    case 15LL:
      v129 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v130 = *((unsigned int **)a3 + 1);
        *((_QWORD *)a3 + 1) = v130 + 2;
      }
      else
      {
        v130 = (unsigned int *)(*((_QWORD *)a3 + 2) + v129);
        *a3 = v129 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 200LL))(v11, *v130);
    case 16LL:
      v127 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v128 = *((unsigned int **)a3 + 1);
        *((_QWORD *)a3 + 1) = v128 + 2;
      }
      else
      {
        v128 = (unsigned int *)(*((_QWORD *)a3 + 2) + v127);
        *a3 = v127 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 208LL))(v11, *v128);
    case 17LL:
      v233 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v305 = *((unsigned int **)a3 + 1);
        v237 = v305 + 2;
        *((_QWORD *)a3 + 1) = v305 + 2;
        v236 = *v305;
      }
      else
      {
        v234 = *((_QWORD *)a3 + 2);
        v235 = v233 + 8;
        *a3 = v235;
        v236 = *(_DWORD *)(v234 + v233);
        if ( (unsigned int)v235 <= 0x2F )
        {
          v237 = (unsigned int *)(v235 + v234);
          *a3 = v233 + 16;
          return (*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 216LL))(v11, v236, *v237);
        }
        v237 = *((unsigned int **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v237 + 2;
      return (*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 216LL))(v11, v236, *v237);
    case 18LL:
      v224 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v315 = *((unsigned int **)a3 + 1);
        v316 = v315 + 2;
        *((_QWORD *)a3 + 1) = v315 + 2;
        v227 = *v315;
      }
      else
      {
        v225 = *((_QWORD *)a3 + 2);
        v226 = v224 + 8;
        *a3 = v226;
        v227 = *(_DWORD *)(v225 + v224);
        if ( (unsigned int)v226 <= 0x2F )
        {
          v228 = v224 + 16;
          *a3 = v228;
          v229 = *(_DWORD *)(v225 + v226);
          if ( (unsigned int)v228 <= 0x2F )
          {
            v230 = v224 + 24;
            *a3 = v230;
            v231 = *(_QWORD *)(v225 + v228);
            if ( (unsigned int)v230 <= 0x2F )
            {
              v232 = (_QWORD *)(v230 + v225);
              *a3 = v224 + 32;
              return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 224LL))(
                       v11,
                       v227,
                       v229,
                       v231,
                       *v232);
            }
            v232 = *((_QWORD **)a3 + 1);
LABEL_283:
            *((_QWORD *)a3 + 1) = v232 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 224LL))(
                     v11,
                     v227,
                     v229,
                     v231,
                     *v232);
          }
          v317 = *((__int64 **)a3 + 1);
LABEL_282:
          v232 = v317 + 1;
          *((_QWORD *)a3 + 1) = v317 + 1;
          v231 = *v317;
          goto LABEL_283;
        }
        v316 = *((_DWORD **)a3 + 1);
      }
      v317 = (__int64 *)(v316 + 2);
      *((_QWORD *)a3 + 1) = v316 + 2;
      v229 = *v316;
      goto LABEL_282;
    case 19LL:
      v118 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v335 = *((unsigned int **)a3 + 1);
        v336 = v335 + 2;
        *((_QWORD *)a3 + 1) = v335 + 2;
        v121 = *v335;
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
            v125 = *(_QWORD *)(v119 + v122);
            if ( (unsigned int)v124 <= 0x2F )
            {
              v126 = (_QWORD *)(v124 + v119);
              *a3 = v118 + 32;
              return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 232LL))(
                       v11,
                       v121,
                       v123,
                       v125,
                       *v126);
            }
            v126 = *((_QWORD **)a3 + 1);
LABEL_311:
            *((_QWORD *)a3 + 1) = v126 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 232LL))(
                     v11,
                     v121,
                     v123,
                     v125,
                     *v126);
          }
          v337 = *((__int64 **)a3 + 1);
LABEL_310:
          v126 = v337 + 1;
          *((_QWORD *)a3 + 1) = v337 + 1;
          v125 = *v337;
          goto LABEL_311;
        }
        v336 = *((_DWORD **)a3 + 1);
      }
      v337 = (__int64 *)(v336 + 2);
      *((_QWORD *)a3 + 1) = v336 + 2;
      v123 = *v336;
      goto LABEL_310;
    case 20LL:
      v109 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v332 = *((_QWORD **)a3 + 1);
        v333 = (unsigned int *)(v332 + 1);
        *((_QWORD *)a3 + 1) = v332 + 1;
        v112 = *v332;
      }
      else
      {
        v110 = *((_QWORD *)a3 + 2);
        v111 = v109 + 8;
        *a3 = v111;
        v112 = *(_QWORD *)(v110 + v109);
        if ( (unsigned int)v111 <= 0x2F )
        {
          v113 = v109 + 16;
          *a3 = v113;
          v114 = *(_DWORD *)(v110 + v111);
          if ( (unsigned int)v113 <= 0x2F )
          {
            v115 = v109 + 24;
            *a3 = v115;
            v116 = *(_DWORD *)(v110 + v113);
            if ( (unsigned int)v115 <= 0x2F )
            {
              v117 = (_QWORD *)(v115 + v110);
              *a3 = v109 + 32;
              return (*(int (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v11 + 240LL))(
                       v11,
                       v112,
                       v114,
                       v116,
                       *v117);
            }
            v117 = *((_QWORD **)a3 + 1);
LABEL_307:
            *((_QWORD *)a3 + 1) = v117 + 1;
            return (*(int (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v11 + 240LL))(
                     v11,
                     v112,
                     v114,
                     v116,
                     *v117);
          }
          v334 = *((_DWORD **)a3 + 1);
LABEL_306:
          v117 = v334 + 2;
          *((_QWORD *)a3 + 1) = v334 + 2;
          v116 = *v334;
          goto LABEL_307;
        }
        v333 = *((unsigned int **)a3 + 1);
      }
      v334 = v333 + 2;
      *((_QWORD *)a3 + 1) = v333 + 2;
      v114 = *v333;
      goto LABEL_306;
    case 21LL:
      v251 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v374 = *((__int64 **)a3 + 1);
        v255 = v374 + 1;
        *((_QWORD *)a3 + 1) = v374 + 1;
        v254 = *v374;
      }
      else
      {
        v252 = *((_QWORD *)a3 + 2);
        v253 = v251 + 8;
        *a3 = v253;
        v254 = *(_QWORD *)(v252 + v251);
        if ( (unsigned int)v253 <= 0x2F )
        {
          v255 = (_QWORD *)(v253 + v252);
          *a3 = v251 + 16;
          return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 256LL))(v11, v254, *v255);
        }
        v255 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v255 + 1;
      return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 256LL))(v11, v254, *v255);
    case 22LL:
      v238 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v311 = *((_QWORD ***)a3 + 1);
        v312 = (__int64 *)(v311 + 1);
        *((_QWORD *)a3 + 1) = v311 + 1;
        v241 = *v311;
      }
      else
      {
        v239 = *((_QWORD *)a3 + 2);
        v240 = v238 + 8;
        *a3 = v240;
        v241 = *(__int64 **)(v239 + v238);
        if ( (unsigned int)v240 <= 0x2F )
        {
          v242 = v238 + 16;
          *a3 = v242;
          v243 = *(_QWORD *)(v239 + v240);
          if ( (unsigned int)v242 <= 0x2F )
          {
            v244 = v238 + 24;
            *a3 = v244;
            v245 = *(_QWORD *)(v239 + v242);
            if ( (unsigned int)v244 <= 0x2F )
            {
              v246 = v238 + 32;
              *a3 = v246;
              v247 = *(_QWORD *)(v239 + v244);
              if ( (unsigned int)v246 <= 0x2F )
              {
                v248 = (_QWORD *)(v246 + v239);
                *a3 = v238 + 40;
                goto LABEL_207;
              }
              v248 = *((_QWORD **)a3 + 1);
LABEL_279:
              *((_QWORD *)a3 + 1) = v248 + 1;
LABEL_207:
              v249 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 288LL))(
                       v11,
                       v243,
                       v245,
                       v247,
                       *v248);
              goto LABEL_208;
            }
            v314 = *((__int64 **)a3 + 1);
LABEL_278:
            v248 = v314 + 1;
            *((_QWORD *)a3 + 1) = v314 + 1;
            v247 = *v314;
            goto LABEL_279;
          }
          v313 = *((__int64 **)a3 + 1);
LABEL_277:
          v314 = v313 + 1;
          *((_QWORD *)a3 + 1) = v313 + 1;
          v245 = *v313;
          goto LABEL_278;
        }
        v312 = *((__int64 **)a3 + 1);
      }
      v313 = v312 + 1;
      *((_QWORD *)a3 + 1) = v312 + 1;
      v243 = *v312;
      goto LABEL_277;
    case 23LL:
      v272 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v370 = *((_QWORD ***)a3 + 1);
        v371 = (__int64 *)(v370 + 1);
        *((_QWORD *)a3 + 1) = v370 + 1;
        v241 = *v370;
      }
      else
      {
        v273 = *((_QWORD *)a3 + 2);
        v274 = v272 + 8;
        *a3 = v274;
        v241 = *(__int64 **)(v273 + v272);
        if ( (unsigned int)v274 <= 0x2F )
        {
          v275 = v272 + 16;
          *a3 = v275;
          v276 = *(_QWORD *)(v273 + v274);
          if ( (unsigned int)v275 <= 0x2F )
          {
            v277 = v272 + 24;
            *a3 = v277;
            v278 = *(_QWORD *)(v273 + v275);
            if ( (unsigned int)v277 <= 0x2F )
            {
              v279 = v272 + 32;
              *a3 = v279;
              v280 = *(_QWORD *)(v273 + v277);
              if ( (unsigned int)v279 <= 0x2F )
              {
                v281 = (_QWORD *)(v279 + v273);
                *a3 = v272 + 40;
                goto LABEL_244;
              }
              v281 = *((_QWORD **)a3 + 1);
LABEL_367:
              *((_QWORD *)a3 + 1) = v281 + 1;
LABEL_244:
              v249 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 296LL))(
                       v11,
                       v276,
                       v278,
                       v280,
                       *v281);
LABEL_208:
              v250 = 0;
              if ( v249 >= 0 )
                v250 = v249;
              *v241 = v250;
              if ( v249 < 0 )
                return -5;
              return 1;
            }
            v373 = *((__int64 **)a3 + 1);
LABEL_366:
            v281 = v373 + 1;
            *((_QWORD *)a3 + 1) = v373 + 1;
            v280 = *v373;
            goto LABEL_367;
          }
          v372 = *((__int64 **)a3 + 1);
LABEL_365:
          v373 = v372 + 1;
          *((_QWORD *)a3 + 1) = v372 + 1;
          v278 = *v372;
          goto LABEL_366;
        }
        v371 = *((__int64 **)a3 + 1);
      }
      v372 = v371 + 1;
      *((_QWORD *)a3 + 1) = v371 + 1;
      v276 = *v371;
      goto LABEL_365;
    case 24LL:
      v186 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v342 = *((_DWORD ***)a3 + 1);
        v343 = (unsigned int *)(v342 + 1);
        *((_QWORD *)a3 + 1) = v342 + 1;
        v189 = *v342;
      }
      else
      {
        v187 = *((_QWORD *)a3 + 2);
        v188 = v186 + 8;
        *a3 = v188;
        v189 = *(_DWORD **)(v187 + v186);
        if ( (unsigned int)v188 <= 0x2F )
        {
          v190 = v186 + 16;
          *a3 = v190;
          v191 = *(unsigned int *)(v187 + v188);
          if ( (unsigned int)v190 <= 0x2F )
          {
            v192 = v186 + 24;
            *a3 = v192;
            v193 = *(_QWORD *)(v187 + v190);
            if ( (unsigned int)v192 <= 0x2F )
            {
              v194 = (_DWORD *)(v192 + v187);
              *a3 = v186 + 32;
              goto LABEL_161;
            }
            v194 = *((_DWORD **)a3 + 1);
LABEL_323:
            *((_QWORD *)a3 + 1) = v194 + 2;
LABEL_161:
            if ( (_DWORD)v191 == 4 )
            {
              if ( (v193 & 1) != 0 )
              {
                *v189 = 4;
                return 1;
              }
              goto LABEL_165;
            }
            if ( (_DWORD)v191 == 8 )
            {
              if ( (v193 & 3) == 0 )
              {
LABEL_165:
                *v189 = 0;
                *v189 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v11 + 304LL))(v11, v191, v193);
                return 1;
              }
            }
            else if ( (v193 & 7) == 0 )
            {
              if ( (unsigned int)(*v194 - 1) > 7 )
              {
                *v189 = 5;
                return 1;
              }
              goto LABEL_165;
            }
            *v189 = 3;
            return 1;
          }
          v344 = *((_QWORD **)a3 + 1);
LABEL_322:
          v194 = v344 + 1;
          *((_QWORD *)a3 + 1) = v344 + 1;
          v193 = *v344;
          goto LABEL_323;
        }
        v343 = *((unsigned int **)a3 + 1);
      }
      v344 = v343 + 2;
      *((_QWORD *)a3 + 1) = v343 + 2;
      v191 = *v343;
      goto LABEL_322;
    case 25LL:
      v204 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v324 = *((_DWORD ***)a3 + 1);
        v325 = (__int64 **)(v324 + 1);
        *((_QWORD *)a3 + 1) = v324 + 1;
        v207 = *v324;
      }
      else
      {
        v205 = *((_QWORD *)a3 + 2);
        v206 = v204 + 8;
        *a3 = v206;
        v207 = *(_DWORD **)(v205 + v204);
        if ( (unsigned int)v206 <= 0x2F )
        {
          v208 = v204 + 16;
          *a3 = v208;
          v209 = *(__int64 **)(v205 + v206);
          if ( (unsigned int)v208 <= 0x2F )
          {
            v210 = v204 + 24;
            *a3 = v210;
            v211 = *(_DWORD *)(v205 + v208);
            if ( (unsigned int)v210 <= 0x2F )
            {
              *a3 = v204 + 32;
              v212 = *(_DWORD *)(v205 + v210);
              if ( v204 + 32 <= 0x2F )
              {
                *a3 = v204 + 40;
                return (int)sub_E7D0(a1, v207, v209, v211, v212);
              }
              v328 = *((int **)a3 + 1);
LABEL_297:
              *((_QWORD *)a3 + 1) = v328 + 2;
              return (int)sub_E7D0(a1, v207, v209, v211, v212);
            }
            v327 = *((int **)a3 + 1);
LABEL_296:
            v328 = v327 + 2;
            *((_QWORD *)a3 + 1) = v327 + 2;
            v212 = *v327;
            goto LABEL_297;
          }
          v326 = *((unsigned int **)a3 + 1);
LABEL_295:
          v327 = (int *)(v326 + 2);
          *((_QWORD *)a3 + 1) = v326 + 2;
          v211 = *v326;
          goto LABEL_296;
        }
        v325 = *((__int64 ***)a3 + 1);
      }
      v326 = (unsigned int *)(v325 + 1);
      *((_QWORD *)a3 + 1) = v325 + 1;
      v209 = *v325;
      goto LABEL_295;
    case 26LL:
      v195 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v318 = *((__int64 **)a3 + 1);
        v319 = v318 + 1;
        *((_QWORD *)a3 + 1) = v318 + 1;
        v198 = *v318;
      }
      else
      {
        v196 = *((_QWORD *)a3 + 2);
        v197 = v195 + 8;
        *a3 = v197;
        v198 = *(_QWORD *)(v196 + v195);
        if ( (unsigned int)v197 <= 0x2F )
        {
          v199 = v195 + 16;
          *a3 = v199;
          v200 = *(_QWORD *)(v196 + v197);
          if ( (unsigned int)v199 <= 0x2F )
          {
            v201 = v195 + 24;
            *a3 = v201;
            v202 = *(_DWORD *)(v196 + v199);
            if ( (unsigned int)v201 <= 0x2F )
            {
              v203 = (_QWORD *)(v201 + v196);
              *a3 = v195 + 32;
              return (*(int (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 352LL))(
                       v11,
                       v198,
                       v200,
                       v202,
                       *v203);
            }
            v203 = *((_QWORD **)a3 + 1);
LABEL_287:
            *((_QWORD *)a3 + 1) = v203 + 1;
            return (*(int (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 352LL))(
                     v11,
                     v198,
                     v200,
                     v202,
                     *v203);
          }
          v320 = *((_DWORD **)a3 + 1);
LABEL_286:
          v203 = v320 + 2;
          *((_QWORD *)a3 + 1) = v320 + 2;
          v202 = *v320;
          goto LABEL_287;
        }
        v319 = *((_QWORD **)a3 + 1);
      }
      v320 = v319 + 1;
      *((_QWORD *)a3 + 1) = v319 + 1;
      v200 = *v319;
      goto LABEL_286;
    case 27LL:
      v213 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v303 = *((__int64 **)a3 + 1);
        v304 = v303 + 1;
        *((_QWORD *)a3 + 1) = v303 + 1;
        v216 = *v303;
      }
      else
      {
        v214 = *((_QWORD *)a3 + 2);
        v215 = v213 + 8;
        *a3 = v215;
        v216 = *(_QWORD *)(v214 + v213);
        if ( (unsigned int)v215 <= 0x2F )
        {
          v217 = v213 + 16;
          *a3 = v217;
          v218 = *(_QWORD *)(v214 + v215);
          if ( (unsigned int)v217 <= 0x2F )
          {
            v219 = (_DWORD *)(v217 + v214);
            *a3 = v213 + 24;
            return (*(int (__fastcall **)(__int64, __int64, __int64, bool))(*(_QWORD *)v11 + 368LL))(
                     v11,
                     v216,
                     v218,
                     *v219 != 0);
          }
          v219 = *((_DWORD **)a3 + 1);
LABEL_263:
          *((_QWORD *)a3 + 1) = v219 + 2;
          return (*(int (__fastcall **)(__int64, __int64, __int64, bool))(*(_QWORD *)v11 + 368LL))(
                   v11,
                   v216,
                   v218,
                   *v219 != 0);
        }
        v304 = *((_QWORD **)a3 + 1);
      }
      v219 = v304 + 1;
      *((_QWORD *)a3 + 1) = v304 + 1;
      v218 = *v304;
      goto LABEL_263;
    case 28LL:
      v73 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v74 = *((unsigned int **)a3 + 1);
        *((_QWORD *)a3 + 1) = v74 + 2;
      }
      else
      {
        v74 = (unsigned int *)(*((_QWORD *)a3 + 2) + v73);
        *a3 = v73 + 8;
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 376LL))(v11, *v74);
      return 1;
    case 29LL:
      v167 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v321 = *((_DWORD **)a3 + 1);
        v322 = (__int64 *)(v321 + 2);
        *((_QWORD *)a3 + 1) = v321 + 2;
        v170 = *v321;
      }
      else
      {
        v168 = *((_QWORD *)a3 + 2);
        v169 = v167 + 8;
        *a3 = v169;
        v170 = *(_DWORD *)(v168 + v167);
        if ( (unsigned int)v169 <= 0x2F )
        {
          v171 = v167 + 16;
          *a3 = v171;
          v172 = *(_QWORD *)(v168 + v169);
          if ( (unsigned int)v171 <= 0x2F )
          {
            v173 = v167 + 24;
            *a3 = v173;
            v174 = *(_QWORD *)(v168 + v171);
            if ( (unsigned int)v173 <= 0x2F )
            {
              v175 = (_QWORD *)(v173 + v168);
              *a3 = v167 + 32;
              return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 384LL))(
                       v11,
                       v170,
                       v172,
                       v174,
                       *v175);
            }
            v175 = *((_QWORD **)a3 + 1);
LABEL_291:
            *((_QWORD *)a3 + 1) = v175 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 384LL))(
                     v11,
                     v170,
                     v172,
                     v174,
                     *v175);
          }
          v323 = *((__int64 **)a3 + 1);
LABEL_290:
          v175 = v323 + 1;
          *((_QWORD *)a3 + 1) = v323 + 1;
          v174 = *v323;
          goto LABEL_291;
        }
        v322 = *((__int64 **)a3 + 1);
      }
      v323 = v322 + 1;
      *((_QWORD *)a3 + 1) = v322 + 1;
      v172 = *v322;
      goto LABEL_290;
    case 30LL:
      v158 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v339 = *((_DWORD **)a3 + 1);
        v340 = (__int64 *)(v339 + 2);
        *((_QWORD *)a3 + 1) = v339 + 2;
        v161 = *v339;
      }
      else
      {
        v159 = *((_QWORD *)a3 + 2);
        v160 = v158 + 8;
        *a3 = v160;
        v161 = *(_DWORD *)(v159 + v158);
        if ( (unsigned int)v160 <= 0x2F )
        {
          v162 = v158 + 16;
          *a3 = v162;
          v163 = *(_QWORD *)(v159 + v160);
          if ( (unsigned int)v162 <= 0x2F )
          {
            v164 = v158 + 24;
            *a3 = v164;
            v165 = *(_QWORD *)(v159 + v162);
            if ( (unsigned int)v164 <= 0x2F )
            {
              v166 = (_QWORD *)(v164 + v159);
              *a3 = v158 + 32;
              return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 392LL))(
                       v11,
                       v161,
                       v163,
                       v165,
                       *v166);
            }
            v166 = *((_QWORD **)a3 + 1);
LABEL_319:
            *((_QWORD *)a3 + 1) = v166 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 392LL))(
                     v11,
                     v161,
                     v163,
                     v165,
                     *v166);
          }
          v341 = *((__int64 **)a3 + 1);
LABEL_318:
          v166 = v341 + 1;
          *((_QWORD *)a3 + 1) = v341 + 1;
          v165 = *v341;
          goto LABEL_319;
        }
        v340 = *((__int64 **)a3 + 1);
      }
      v341 = v340 + 1;
      *((_QWORD *)a3 + 1) = v340 + 1;
      v163 = *v340;
      goto LABEL_318;
    case 31LL:
      v176 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v366 = *((_QWORD ***)a3 + 1);
        v367 = (__int64 *)(v366 + 1);
        *((_QWORD *)a3 + 1) = v366 + 1;
        v179 = *v366;
      }
      else
      {
        v177 = *((_QWORD *)a3 + 2);
        v178 = v176 + 8;
        *a3 = v178;
        v179 = *(__int64 **)(v177 + v176);
        if ( (unsigned int)v178 <= 0x2F )
        {
          v180 = v176 + 16;
          *a3 = v180;
          v181 = *(_QWORD *)(v177 + v178);
          if ( (unsigned int)v180 <= 0x2F )
          {
            v182 = v176 + 24;
            *a3 = v182;
            v183 = *(_QWORD *)(v177 + v180);
            if ( (unsigned int)v182 <= 0x2F )
            {
              v184 = (unsigned int *)(v182 + v177);
              *a3 = v176 + 32;
              goto LABEL_153;
            }
            v184 = *((unsigned int **)a3 + 1);
LABEL_358:
            *((_QWORD *)a3 + 1) = v184 + 2;
LABEL_153:
            v185 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 248LL);
            if ( v185 != sub_BC70 )
              v181 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))v185)(v11, v181, v183, *v184);
            *v179 = v181;
            return 1;
          }
          v368 = *((_QWORD **)a3 + 1);
LABEL_357:
          v184 = (unsigned int *)(v368 + 1);
          *((_QWORD *)a3 + 1) = v368 + 1;
          v183 = *v368;
          goto LABEL_358;
        }
        v367 = *((__int64 **)a3 + 1);
      }
      v368 = v367 + 1;
      *((_QWORD *)a3 + 1) = v367 + 1;
      v181 = *v367;
      goto LABEL_357;
    case 33LL:
      v75 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v369 = *((_DWORD **)a3 + 1);
        v79 = v369 + 2;
        *((_QWORD *)a3 + 1) = v369 + 2;
        v78 = *v369;
      }
      else
      {
        v76 = *((_QWORD *)a3 + 2);
        v77 = v75 + 8;
        *a3 = v77;
        v78 = *(_DWORD *)(v76 + v75);
        if ( (unsigned int)v77 <= 0x2F )
        {
          v79 = (_QWORD *)(v77 + v76);
          *a3 = v75 + 16;
          goto LABEL_73;
        }
        v79 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v79 + 1;
LABEL_73:
      if ( (*(_BYTE *)(dbg + 37LL) & 8) == 0 )
        return 0;
      v80 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 416LL))(v11, v78, *v79);
      if ( (unsigned int)(v80 + 1) > 1 )
        return v80;
      *(_QWORD *)(dbg + 32LL) &= ~0x80000000000uLL;
      return 0;
    case 34LL:
      if ( (*(_BYTE *)(a1 + 157) & 0x10) == 0 )
        return 0;
      v93 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v381 = *((_QWORD ***)a3 + 1);
        *((_QWORD *)a3 + 1) = v381 + 1;
        v96 = *v381;
      }
      else
      {
        v94 = *((_QWORD *)a3 + 2);
        v95 = v93 + 8;
        *a3 = v95;
        v96 = *(_QWORD **)(v94 + v93);
        if ( (unsigned int)v95 <= 0x2F )
        {
          v97 = v93 + 16;
          *a3 = v97;
          v98 = *(_QWORD *)(v94 + v95);
          if ( (unsigned int)v97 <= 0x2F )
          {
            v99 = v93 + 24;
            *a3 = v99;
            v100 = *(_DWORD *)(v94 + v97);
            if ( (unsigned int)v99 <= 0x2F )
            {
              *a3 = v93 + 32;
              v101 = *(_QWORD *)(v94 + v99);
              if ( v93 + 32 <= 0x2F )
              {
                v102 = v93 + 40;
                if ( (unsigned int)v102 <= 0x2F )
                {
                  *a3 = v93 + 48;
                  v103 = *(_QWORD *)(v94 + v102);
                  goto LABEL_96;
                }
                *a3 = v102;
LABEL_386:
                v385 = *((__int64 **)a3 + 1);
                *((_QWORD *)a3 + 1) = v385 + 1;
                v103 = *v385;
LABEL_96:
                v104 = *((__int64 **)a3 + 1);
                *((_QWORD *)a3 + 1) = v104 + 1;
                v105 = *v104;
                *((_QWORD *)a3 + 1) = v104 + 2;
                v106 = v104[1];
                *((_QWORD *)a3 + 1) = v104 + 3;
                v107 = v104[2];
                *((_QWORD *)a3 + 1) = v104 + 4;
                v108 = v104[3];
                *((_QWORD *)a3 + 1) = v104 + 5;
                *v96 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 424LL))(
                         v11,
                         v98,
                         v100,
                         (unsigned int)*(_QWORD *)(v101 + 56),
                         v103,
                         v105,
                         v106,
                         v107,
                         v108,
                         *((unsigned int *)v104 + 8));
                return 1;
              }
LABEL_385:
              *((_QWORD *)a3 + 1) += 8LL;
              goto LABEL_386;
            }
LABEL_384:
            v384 = *((__int64 **)a3 + 1);
            *((_QWORD *)a3 + 1) = v384 + 1;
            v101 = *v384;
            goto LABEL_385;
          }
LABEL_383:
          v383 = *((unsigned int **)a3 + 1);
          *((_QWORD *)a3 + 1) = v383 + 2;
          v100 = *v383;
          goto LABEL_384;
        }
      }
      v382 = *((__int64 **)a3 + 1);
      *((_QWORD *)a3 + 1) = v382 + 1;
      v98 = *v382;
      goto LABEL_383;
    case 35LL:
      if ( (*(_BYTE *)(a1 + 157) & 0x10) == 0 )
        return 0;
      v71 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v72 = *((unsigned int **)a3 + 1);
        *((_QWORD *)a3 + 1) = v72 + 2;
      }
      else
      {
        v72 = (unsigned int *)(*((_QWORD *)a3 + 2) + v71);
        *a3 = v71 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 432LL))(v11, *v72);
    case 36LL:
      v141 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v306 = *((_DWORD **)a3 + 1);
        v307 = (__int64 *)(v306 + 2);
        *((_QWORD *)a3 + 1) = v306 + 2;
        v144 = *v306;
      }
      else
      {
        v142 = *((_QWORD *)a3 + 2);
        v143 = v141 + 8;
        *a3 = v143;
        v144 = *(_DWORD *)(v142 + v141);
        if ( (unsigned int)v143 <= 0x2F )
        {
          v145 = v141 + 16;
          *a3 = v145;
          v146 = *(_QWORD *)(v142 + v143);
          if ( (unsigned int)v145 <= 0x2F )
          {
            v147 = (_QWORD *)(v145 + v142);
            *a3 = v141 + 24;
            return (*(int (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 360LL))(
                     v11,
                     v144,
                     v146,
                     *v147);
          }
          v147 = *((_QWORD **)a3 + 1);
LABEL_269:
          *((_QWORD *)a3 + 1) = v147 + 1;
          return (*(int (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 360LL))(
                   v11,
                   v144,
                   v146,
                   *v147);
        }
        v307 = *((__int64 **)a3 + 1);
      }
      v147 = v307 + 1;
      *((_QWORD *)a3 + 1) = v307 + 1;
      v146 = *v307;
      goto LABEL_269;
    case 37LL:
      v60 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v354 = *((_DWORD **)a3 + 1);
        v355 = (__int64 *)(v354 + 2);
        *((_QWORD *)a3 + 1) = v354 + 2;
        v63 = *v354;
      }
      else
      {
        v61 = *((_QWORD *)a3 + 2);
        v62 = v60 + 8;
        *a3 = v62;
        v63 = *(_DWORD *)(v61 + v60);
        if ( (unsigned int)v62 <= 0x2F )
        {
          v64 = v60 + 16;
          *a3 = v64;
          v65 = *(_QWORD *)(v61 + v62);
          if ( (unsigned int)v64 <= 0x2F )
          {
            v66 = v60 + 24;
            *a3 = v66;
            v67 = *(_QWORD *)(v61 + v64);
            if ( (unsigned int)v66 <= 0x2F )
            {
              v68 = v60 + 32;
              *a3 = v68;
              v69 = *(_QWORD *)(v61 + v66);
              if ( (unsigned int)v68 <= 0x2F )
              {
                v70 = (_QWORD *)(v68 + v61);
                *a3 = v60 + 40;
                return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 400LL))(
                         v11,
                         v63,
                         v65,
                         v67,
                         v69,
                         *v70);
              }
              v70 = *((_QWORD **)a3 + 1);
LABEL_339:
              *((_QWORD *)a3 + 1) = v70 + 1;
              return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 400LL))(
                       v11,
                       v63,
                       v65,
                       v67,
                       v69,
                       *v70);
            }
            v357 = *((__int64 **)a3 + 1);
LABEL_338:
            v70 = v357 + 1;
            *((_QWORD *)a3 + 1) = v357 + 1;
            v69 = *v357;
            goto LABEL_339;
          }
          v356 = *((__int64 **)a3 + 1);
LABEL_337:
          v357 = v356 + 1;
          *((_QWORD *)a3 + 1) = v356 + 1;
          v67 = *v356;
          goto LABEL_338;
        }
        v355 = *((__int64 **)a3 + 1);
      }
      v356 = v355 + 1;
      *((_QWORD *)a3 + 1) = v355 + 1;
      v65 = *v355;
      goto LABEL_337;
    case 38LL:
      v52 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v359 = *((unsigned int **)a3 + 1);
        v360 = v359 + 2;
        *((_QWORD *)a3 + 1) = v359 + 2;
        v55 = *v359;
      }
      else
      {
        v53 = *((_QWORD *)a3 + 2);
        v54 = v52 + 8;
        *a3 = v54;
        v55 = *(_DWORD *)(v53 + v52);
        if ( (unsigned int)v54 <= 0x2F )
        {
          v56 = v52 + 16;
          *a3 = v56;
          v57 = *(_DWORD *)(v53 + v54) != 0;
          if ( (unsigned int)v56 <= 0x2F )
          {
            v58 = (unsigned int *)(v56 + v53);
            *a3 = v52 + 24;
            goto LABEL_54;
          }
          v58 = *((unsigned int **)a3 + 1);
LABEL_346:
          *((_QWORD *)a3 + 1) = v58 + 2;
LABEL_54:
          v59 = *(__int64 (**)())(*(_QWORD *)v11 + 520LL);
          if ( v59 != sub_BC80 )
            return ((unsigned __int8 (__fastcall *)(__int64, _QWORD, bool, _QWORD))v59)(v11, v55, v57, *v58);
          return 0;
        }
        v360 = *((_DWORD **)a3 + 1);
      }
      v58 = v360 + 2;
      *((_QWORD *)a3 + 1) = v360 + 2;
      v57 = *v360 != 0;
      goto LABEL_346;
    case 39LL:
      v46 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v331 = *((unsigned int **)a3 + 1);
        v50 = v331 + 2;
        *((_QWORD *)a3 + 1) = v331 + 2;
        v49 = *v331;
      }
      else
      {
        v47 = *((_QWORD *)a3 + 2);
        v48 = v46 + 8;
        *a3 = v48;
        v49 = *(_DWORD *)(v47 + v46);
        if ( (unsigned int)v48 <= 0x2F )
        {
          v50 = (unsigned int *)(v48 + v47);
          *a3 = v46 + 16;
          goto LABEL_48;
        }
        v50 = *((unsigned int **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v50 + 2;
LABEL_48:
      v51 = *(__int64 (**)())(*(_QWORD *)v11 + 528LL);
      if ( v51 == sub_BC90 )
        return 0;
      return ((unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD))v51)(v11, v49, *v50);
    case 40LL:
      v44 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v45 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v45 + 1;
      }
      else
      {
        v45 = (_QWORD *)(*((_QWORD *)a3 + 2) + v44);
        *a3 = v44 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 536LL))(v11, *v45);
    case 41LL:
      v38 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v358 = *((__int64 **)a3 + 1);
        v42 = v358 + 1;
        *((_QWORD *)a3 + 1) = v358 + 1;
        v41 = *v358;
      }
      else
      {
        v39 = *((_QWORD *)a3 + 2);
        v40 = v38 + 8;
        *a3 = v40;
        v41 = *(_QWORD *)(v39 + v38);
        if ( (unsigned int)v40 <= 0x2F )
        {
          v42 = (_QWORD *)(v40 + v39);
          *a3 = v38 + 16;
          goto LABEL_40;
        }
        v42 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v42 + 1;
LABEL_40:
      v43 = *(__int64 (**)())(*(_QWORD *)v11 + 560LL);
      if ( v43 == sub_BCA0 )
        return 0;
      return ((unsigned __int8 (__fastcall *)(__int64, __int64, _QWORD))v43)(v11, v41, *v42);
    case 42LL:
      v25 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v345 = *((__int64 **)a3 + 1);
        v346 = v345 + 1;
        *((_QWORD *)a3 + 1) = v345 + 1;
        v28 = *v345;
      }
      else
      {
        v26 = *((_QWORD *)a3 + 2);
        v27 = v25 + 8;
        *a3 = v27;
        v28 = *(_QWORD *)(v26 + v25);
        if ( (unsigned int)v27 <= 0x2F )
        {
          v29 = v25 + 16;
          *a3 = v29;
          v30 = *(_QWORD *)(v26 + v27);
          if ( (unsigned int)v29 <= 0x2F )
          {
            v31 = v25 + 24;
            *a3 = v31;
            v32 = *(const char **)(v26 + v29);
            if ( (unsigned int)v31 <= 0x2F )
            {
              v33 = v25 + 32;
              *a3 = v33;
              v34 = *(_QWORD *)(v26 + v31);
              if ( (unsigned int)v33 <= 0x2F )
              {
                v35 = v25 + 40;
                *a3 = v35;
                v36 = *(unsigned int *)(v26 + v33);
                if ( (unsigned int)v35 <= 0x2F )
                {
                  v37 = (_QWORD *)(v35 + v26);
                  *a3 = v25 + 48;
                  goto LABEL_34;
                }
                v37 = *((_QWORD **)a3 + 1);
LABEL_329:
                *((_QWORD *)a3 + 1) = v37 + 1;
LABEL_34:
                if ( v34 )
                {
                  v6 = (*(int (__fastcall **)(__int64, __int64, __int64, const char *, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 576LL))(
                         v11,
                         v28,
                         v30,
                         v32,
                         v34,
                         v36,
                         *v37);
                  if ( (*(_DWORD *)debug & 0x10000) != 0 )
                    sub_C7B0((__int64)"debugger_t::ev_bin_search(%a, %a) -> %d(%s) ea %a\n", a4, a5, v30, v32, a6);
                  return v6;
                }
                return 0;
              }
              v349 = *((unsigned int **)a3 + 1);
LABEL_328:
              v37 = v349 + 2;
              *((_QWORD *)a3 + 1) = v349 + 2;
              v36 = *v349;
              goto LABEL_329;
            }
            v348 = *((_QWORD **)a3 + 1);
LABEL_327:
            v349 = (unsigned int *)(v348 + 1);
            *((_QWORD *)a3 + 1) = v348 + 1;
            v34 = *v348;
            goto LABEL_328;
          }
          v347 = *((const char ***)a3 + 1);
LABEL_326:
          v348 = v347 + 1;
          *((_QWORD *)a3 + 1) = v347 + 1;
          v32 = *v347;
          goto LABEL_327;
        }
        v346 = *((_QWORD **)a3 + 1);
      }
      v347 = (const char **)(v346 + 1);
      *((_QWORD *)a3 + 1) = v346 + 1;
      v30 = *v346;
      goto LABEL_326;
    case 43LL:
      if ( !*(_BYTE *)(a1 + 208) )
        return 0;
      if ( (unsigned int)*a3 > 0x2F )
        *((_QWORD *)a3 + 1) += 8LL;
      else
        *a3 += 8;
      v24 = (*(__int64 (**)(void))(*(_QWORD *)v11 + 584LL))();
      if ( v24 >= 0 )
      {
        serialize_dynamic_register_set();
        deserialize_dynamic_register_set();
        return 1;
      }
      return v24;
    case 44LL:
      v12 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v350 = *((_QWORD ***)a3 + 1);
        v351 = v350 + 1;
        *((_QWORD *)a3 + 1) = v350 + 1;
        v15 = *v350;
LABEL_331:
        v352 = (unsigned int *)(v351 + 1);
        *((_QWORD *)a3 + 1) = v351 + 1;
        v17 = *v351;
LABEL_332:
        v353 = v352 + 2;
        *((_QWORD *)a3 + 1) = v352 + 2;
        v387 = *v352;
LABEL_333:
        v21 = (__int64 *)(v353 + 2);
        *((_QWORD *)a3 + 1) = v353 + 2;
        v20 = *v353;
        goto LABEL_334;
      }
      v13 = *((_QWORD *)a3 + 2);
      v14 = v12 + 8;
      *a3 = v14;
      v15 = *(__int64 **)(v13 + v12);
      if ( (unsigned int)v14 > 0x2F )
      {
        v351 = *((_QWORD **)a3 + 1);
        goto LABEL_331;
      }
      v16 = v12 + 16;
      *a3 = v16;
      v17 = *(_QWORD *)(v13 + v14);
      if ( (unsigned int)v16 > 0x2F )
      {
        v352 = *((unsigned int **)a3 + 1);
        goto LABEL_332;
      }
      v18 = v12 + 24;
      *a3 = v18;
      v387 = *(_DWORD *)(v13 + v16);
      if ( (unsigned int)v18 > 0x2F )
      {
        v353 = *((_DWORD **)a3 + 1);
        goto LABEL_333;
      }
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
LABEL_334:
      *((_QWORD *)a3 + 1) = v21 + 1;
LABEL_13:
      v22 = *v21;
      if ( (*(_DWORD *)debug & 0x10000) != 0 )
        sub_C7B0((__int64)"debugger_t::ev_set_dbg_options(%s)\n", (const char *)v17);
      v23 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 64LL))(
              a1,
              v17,
              v387,
              v20,
              v22);
      if ( !v17 || *(_BYTE *)v17 != 32 || (v6 = v23 != 0, *(_BYTE *)(v17 + 1)) )
      {
        if ( v15 )
          *v15 = v23;
        sub_F170((__int64 *)a1, *(_BYTE *)(a1 + 208));
        return 1;
      }
      return v6;
    default:
      return 0;
  }
}

