__int64 __fastcall sub_DC10(__int64 a1, __int64 a2, int *a3, double a4, double a5, double a6)
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
  __int64 v133; // r8
  bool v134; // si
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
  _DWORD *v189; // r14
  __int64 v190; // r9
  __int64 v191; // rsi
  __int64 v192; // r8
  __int64 v193; // r9
  unsigned int *v194; // rax
  __int64 v195; // rcx
  unsigned int v196; // ecx
  __int64 v197; // rax
  __int64 v198; // rsi
  __int64 v199; // r9
  __int64 v200; // r8
  __int64 v201; // r10
  __int64 v202; // rsi
  unsigned int v203; // ebx
  _QWORD *v204; // rax
  unsigned int v205; // ecx
  __int64 v206; // rax
  __int64 v207; // rdi
  _DWORD *v208; // r10
  __int64 v209; // rsi
  __int64 v210; // r11
  __int64 v211; // rdi
  unsigned int v212; // r14d
  int v213; // r8d
  unsigned int v214; // ecx
  __int64 v215; // rax
  __int64 v216; // r8
  __int64 v217; // r9
  __int64 v218; // rsi
  __int64 v219; // r8
  _DWORD *v220; // rax
  unsigned int v221; // eax
  _QWORD *v222; // rcx
  unsigned int v223; // eax
  _QWORD *v224; // rcx
  unsigned int v225; // ecx
  __int64 v226; // rax
  __int64 v227; // rsi
  unsigned int v228; // r9d
  __int64 v229; // r8
  unsigned int v230; // r10d
  __int64 v231; // rsi
  __int64 v232; // rbx
  _QWORD *v233; // rax
  unsigned int v234; // ecx
  __int64 v235; // rax
  __int64 v236; // rsi
  unsigned int v237; // r8d
  unsigned int *v238; // rax
  unsigned int v239; // ecx
  __int64 v240; // rax
  __int64 v241; // r8
  __int64 *v242; // rbx
  __int64 v243; // rsi
  __int64 v244; // r9
  __int64 v245; // r8
  __int64 v246; // r10
  __int64 v247; // rsi
  __int64 v248; // r14
  _QWORD *v249; // rax
  __int64 v250; // rax
  __int64 v251; // rdx
  unsigned int v252; // ecx
  __int64 v253; // rax
  __int64 v254; // rsi
  __int64 v255; // r8
  _QWORD *v256; // rax
  unsigned int v257; // ecx
  __int64 v258; // rax
  __int64 v259; // rsi
  __int64 v260; // rdi
  unsigned int v261; // r12d
  __int64 v262; // rsi
  __int64 v263; // r13
  __int64 *v264; // rax
  __int64 v265; // r14
  const char *v266; // rsi
  unsigned int v267; // ecx
  __int64 v268; // rax
  __int64 v269; // rsi
  __int64 v270; // r8
  _QWORD *v271; // rax
  const char *v272; // rsi
  unsigned int v273; // ecx
  __int64 v274; // rax
  __int64 v275; // r8
  __int64 v276; // rsi
  __int64 v277; // r9
  __int64 v278; // r8
  __int64 v279; // r10
  __int64 v280; // rsi
  __int64 v281; // r14
  _QWORD *v282; // rax
  unsigned int v283; // eax
  _QWORD *v284; // rcx
  unsigned int v285; // eax
  __int64 *v286; // rcx
  unsigned int v287; // eax
  __int64 v288; // rcx
  __int64 v289; // rsi
  __int64 v290; // r11
  __int64 v291; // r8
  __int64 v292; // r14
  __int64 v293; // rsi
  __int64 v294; // r8
  __int64 v295; // r10
  __int64 v296; // r9
  __int64 v297; // rsi
  __int64 v298; // r10
  __int64 *v299; // rax
  __int64 v300; // rsi
  __int64 v301; // r12
  int v302; // eax
  __int64 v303; // rax
  __int64 *v304; // rax
  _QWORD *v305; // rcx
  unsigned int *v306; // rcx
  _DWORD *v307; // rax
  __int64 *v308; // rcx
  const char **v309; // rcx
  unsigned int *v310; // rax
  __int64 *v311; // rcx
  _QWORD **v312; // rax
  __int64 *v313; // rcx
  __int64 *v314; // rax
  __int64 *v315; // rcx
  unsigned int *v316; // rcx
  _DWORD *v317; // rax
  __int64 *v318; // rcx
  _DWORD **v319; // rcx
  unsigned int *v320; // rax
  _QWORD *v321; // rcx
  __int64 *v322; // rcx
  _QWORD *v323; // rax
  _DWORD *v324; // rcx
  _DWORD *v325; // rcx
  __int64 *v326; // rax
  __int64 *v327; // rcx
  _DWORD **v328; // rax
  _QWORD *v329; // rcx
  unsigned int *v330; // rcx
  _QWORD *v331; // rcx
  unsigned int *v332; // rax
  _DWORD *v333; // rcx
  unsigned int *v334; // rcx
  _DWORD *v335; // rax
  __int64 *v336; // rcx
  _DWORD *v337; // rcx
  _DWORD *v338; // rcx
  __int64 *v339; // rax
  __int64 *v340; // rcx
  _DWORD **v341; // rax
  __int64 *v342; // rcx
  unsigned int *v343; // rax
  int *v344; // rcx
  int *v345; // rax
  __int64 *v346; // rcx
  _QWORD *v347; // rax
  const char **v348; // rcx
  _QWORD *v349; // rax
  unsigned int *v350; // rcx
  _QWORD **v351; // rax
  _QWORD *v352; // rcx
  unsigned int *v353; // rax
  _DWORD *v354; // rcx
  _DWORD *v355; // rax
  __int64 *v356; // rcx
  __int64 *v357; // rax
  __int64 *v358; // rcx
  __int64 *v359; // rcx
  unsigned int *v360; // rax
  _DWORD *v361; // rcx
  _QWORD *v362; // rcx
  unsigned int *v363; // rcx
  unsigned int *v364; // rax
  _DWORD *v365; // rcx
  __int64 *v366; // rcx
  _QWORD **v367; // rcx
  __int64 *v368; // rax
  _QWORD *v369; // rcx
  _DWORD *v370; // rcx
  _QWORD **v371; // rax
  __int64 *v372; // rcx
  __int64 *v373; // rax
  __int64 *v374; // rcx
  __int64 *v375; // rcx
  __int64 *v376; // rax
  __int64 *v377; // rcx
  _QWORD *v378; // rax
  unsigned int *v379; // rcx
  _QWORD *v380; // rax
  unsigned int *v381; // rcx
  _QWORD **v382; // rax
  __int64 *v383; // rax
  unsigned int *v384; // rax
  __int64 *v385; // rax
  __int64 *v386; // rax
  int *v387; // [rsp+10h] [rbp-70h]
  unsigned int v388; // [rsp+18h] [rbp-68h]
  const char *v389; // [rsp+18h] [rbp-68h]
  const char *v390; // [rsp+30h] [rbp-50h] BYREF
  __int128 v391; // [rsp+38h] [rbp-48h]
  unsigned __int64 v392; // [rsp+48h] [rbp-38h]

  v6 = 0;
  v7 = *(_DWORD *)(a1 + 136);
  v392 = __readfsqword(0x28u);
  if ( *(_DWORD *)(dbg + 16LL) != v7 || *(_QWORD *)(dbg + 32LL) != *(_QWORD *)(a1 + 152) )
    return v6;
  v10 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
  if ( (char *)v10 == (char *)sub_A6F0 )
  {
    v11 = a1 + 224;
  }
  else
  {
    v387 = a3;
    v303 = v10();
    a3 = v387;
    v11 = v303;
  }
  switch ( a2 )
  {
    case 0LL:
      v257 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v309 = *((const char ***)a3 + 1);
        v310 = (unsigned int *)(v309 + 1);
        *((_QWORD *)a3 + 1) = v309 + 1;
        v389 = *v309;
      }
      else
      {
        v258 = *((_QWORD *)a3 + 2);
        v259 = v257 + 8;
        *a3 = v259;
        v389 = *(const char **)(v258 + v257);
        if ( (unsigned int)v259 <= 0x2F )
        {
          v260 = v257 + 16;
          *a3 = v260;
          v261 = *(_DWORD *)(v258 + v259);
          if ( (unsigned int)v260 <= 0x2F )
          {
            v262 = v257 + 24;
            *a3 = v262;
            v263 = *(_QWORD *)(v258 + v260);
            if ( (unsigned int)v262 <= 0x2F )
            {
              v264 = (__int64 *)(v262 + v258);
              *a3 = v257 + 32;
              goto LABEL_225;
            }
            while ( 1 )
            {
              v264 = *((__int64 **)a3 + 1);
LABEL_278:
              *((_QWORD *)a3 + 1) = v264 + 1;
LABEL_225:
              v265 = *v264;
              if ( *v264 )
                break;
              if ( under_debugger )
                BUG();
              interr();
            }
            if ( (*(_DWORD *)debug & 0x10000) != 0 )
            {
              v390 = nullptr;
              v391 = 0;
              get_dbctx_id();
              sub_CD10((__int64 *)&v390);
              v266 = s;
              if ( (_QWORD)v391 )
                v266 = v390;
              sub_B0F0((__int64)"%s: debugger_t::ev_init_debugger (%s,%d,)\n", v266, v389, v261);
              if ( v390 )
              {
                *(_QWORD *)&v391 = 0;
                qfree();
              }
            }
            return (int)sub_D3E0(a1, (__int64)v389, v261, v263, v265);
          }
          v311 = *((__int64 **)a3 + 1);
LABEL_277:
          v264 = v311 + 1;
          *((_QWORD *)a3 + 1) = v311 + 1;
          v263 = *v311;
          goto LABEL_278;
        }
        v310 = *((unsigned int **)a3 + 1);
      }
      v311 = (__int64 *)(v310 + 2);
      *((_QWORD *)a3 + 1) = v310 + 2;
      v261 = *v310;
      goto LABEL_277;
    case 1LL:
      if ( (*(_DWORD *)debug & 0x10000) != 0 )
      {
        v390 = nullptr;
        v391 = 0;
        get_dbctx_id();
        sub_CD10((__int64 *)&v390);
        v272 = s;
        if ( (_QWORD)v391 )
          v272 = v390;
        sub_B0F0((__int64)"%s: debugger_t::ev_term_debugger\n", v272);
        if ( v390 )
        {
          *(_QWORD *)&v391 = 0;
          qfree();
        }
      }
      return (int)sub_CBE0((__int64 *)a1);
    case 2LL:
      v267 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v366 = *((__int64 **)a3 + 1);
        v271 = v366 + 1;
        *((_QWORD *)a3 + 1) = v366 + 1;
        v270 = *v366;
      }
      else
      {
        v268 = *((_QWORD *)a3 + 2);
        v269 = v267 + 8;
        *a3 = v269;
        v270 = *(_QWORD *)(v268 + v267);
        if ( (unsigned int)v269 <= 0x2F )
        {
          v271 = (_QWORD *)(v269 + v268);
          *a3 = v267 + 16;
          return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 72LL))(v11, v270, *v271);
        }
        v271 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v271 + 1;
      return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 72LL))(v11, v270, *v271);
    case 3LL:
      v287 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v376 = *((__int64 **)a3 + 1);
        v377 = v376 + 1;
        *((_QWORD *)a3 + 1) = v376 + 1;
        v290 = *v376;
      }
      else
      {
        v288 = *((_QWORD *)a3 + 2);
        v289 = v287 + 8;
        *a3 = v289;
        v290 = *(_QWORD *)(v288 + v287);
        if ( (unsigned int)v289 <= 0x2F )
        {
          v291 = v287 + 16;
          *a3 = v291;
          v292 = *(_QWORD *)(v288 + v289);
          if ( (unsigned int)v291 <= 0x2F )
          {
            v293 = v287 + 24;
            *a3 = v293;
            v294 = *(_QWORD *)(v288 + v291);
            if ( (unsigned int)v293 <= 0x2F )
            {
              v295 = v287 + 32;
              *a3 = v295;
              v296 = *(unsigned int *)(v288 + v293);
              if ( (unsigned int)v295 <= 0x2F )
              {
                v297 = v287 + 40;
                *a3 = v297;
                v298 = *(_QWORD *)(v288 + v295);
                if ( (unsigned int)v297 <= 0x2F )
                {
                  *a3 = v287 + 48;
                  v299 = *((__int64 **)a3 + 1);
                  v300 = *(unsigned int *)(v288 + v297);
                  goto LABEL_262;
                }
                v381 = *((unsigned int **)a3 + 1);
LABEL_379:
                v299 = (__int64 *)(v381 + 2);
                *((_QWORD *)a3 + 1) = v381 + 2;
                v300 = *v381;
LABEL_262:
                *((_QWORD *)a3 + 1) = v299 + 1;
                v301 = *v299;
                *((_QWORD *)a3 + 1) = v299 + 2;
                v302 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v11 + 128LL))(
                         v11,
                         v290,
                         v292,
                         v299[1],
                         v294,
                         v296,
                         v298,
                         v300,
                         v301);
                v6 = v302;
                if ( v302 > 0 )
                  goto LABEL_134;
                return v6;
              }
              v380 = *((_QWORD **)a3 + 1);
LABEL_378:
              v381 = (unsigned int *)(v380 + 1);
              *((_QWORD *)a3 + 1) = v380 + 1;
              v298 = *v380;
              goto LABEL_379;
            }
            v379 = *((unsigned int **)a3 + 1);
LABEL_377:
            v380 = v379 + 2;
            *((_QWORD *)a3 + 1) = v379 + 2;
            v296 = *v379;
            goto LABEL_378;
          }
          v378 = *((_QWORD **)a3 + 1);
LABEL_376:
          v379 = (unsigned int *)(v378 + 1);
          *((_QWORD *)a3 + 1) = v378 + 1;
          v294 = *v378;
          goto LABEL_377;
        }
        v377 = *((__int64 **)a3 + 1);
      }
      v378 = v377 + 1;
      *((_QWORD *)a3 + 1) = v377 + 1;
      v292 = *v377;
      goto LABEL_376;
    case 4LL:
      v148 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v363 = *((unsigned int **)a3 + 1);
        v364 = v363 + 2;
        *((_QWORD *)a3 + 1) = v363 + 2;
        v151 = *v363;
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
              goto LABEL_133;
            }
            v156 = *((_QWORD **)a3 + 1);
LABEL_356:
            *((_QWORD *)a3 + 1) = v156 + 1;
LABEL_133:
            v157 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v11 + 144LL))(
                     v11,
                     v151,
                     v153,
                     v155,
                     *v156);
            v6 = v157;
            if ( v157 > 0 )
LABEL_134:
              sub_D080((__int64 *)a1, 1u);
            return v6;
          }
          v365 = *((_DWORD **)a3 + 1);
LABEL_355:
          v156 = v365 + 2;
          *((_QWORD *)a3 + 1) = v365 + 2;
          v155 = *v365;
          goto LABEL_356;
        }
        v364 = *((unsigned int **)a3 + 1);
      }
      v365 = v364 + 2;
      *((_QWORD *)a3 + 1) = v364 + 2;
      v153 = *v364;
      goto LABEL_355;
    case 5LL:
      return (*(int (__fastcall **)(__int64))(*(_QWORD *)v11 + 120LL))(v11);
    case 6LL:
      v223 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v224 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v224 + 1;
      }
      else
      {
        v224 = (_QWORD *)(*((_QWORD *)a3 + 2) + v223);
        *a3 = v223 + 8;
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 552LL))(v11, *v224);
      return 1;
    case 7LL:
      v285 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v286 = *((__int64 **)a3 + 1);
        *((_QWORD *)a3 + 1) = v286 + 1;
      }
      else
      {
        v286 = (__int64 *)(*((_QWORD *)a3 + 2) + v285);
        *a3 = v285 + 8;
      }
      sub_C240(*v286, a4);
      return 1;
    case 8LL:
      v221 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v222 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v222 + 1;
      }
      else
      {
        v222 = (_QWORD *)(*((_QWORD *)a3 + 2) + v221);
        *a3 = v221 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 152LL))(v11, *v222);
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
        v328 = *((_DWORD ***)a3 + 1);
        v329 = v328 + 1;
        *((_QWORD *)a3 + 1) = v328 + 1;
        v87 = *v328;
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
LABEL_304:
          *((_QWORD *)a3 + 1) = v90 + 2;
LABEL_84:
          *v87 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 136LL))(v11, v89, *v90);
          return 1;
        }
        v329 = *((_QWORD **)a3 + 1);
      }
      v90 = (unsigned int *)(v329 + 1);
      *((_QWORD *)a3 + 1) = v329 + 1;
      v89 = *v329;
      goto LABEL_304;
    case 11LL:
      v283 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v284 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v284 + 1;
      }
      else
      {
        v284 = (_QWORD *)(*((_QWORD *)a3 + 2) + v283);
        *a3 = v283 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 168LL))(v11, *v284);
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
      if ( v83 == sub_A600 )
        return 0;
      return ((int (__fastcall *)(__int64, bool))v83)(v11, *v82 != 0);
    case 13LL:
      v136 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v362 = *((_QWORD **)a3 + 1);
        v140 = (unsigned int *)(v362 + 1);
        *((_QWORD *)a3 + 1) = v362 + 1;
        v139 = *v362;
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
          goto LABEL_122;
        }
        v140 = *((unsigned int **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v140 + 2;
LABEL_122:
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 184LL))(v11, v139, *v140);
      return 1;
    case 14LL:
      v131 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v337 = *((_DWORD **)a3 + 1);
        v135 = v337 + 2;
        *((_QWORD *)a3 + 1) = v337 + 2;
        v134 = *v337 != 0;
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
      v234 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v306 = *((unsigned int **)a3 + 1);
        v238 = v306 + 2;
        *((_QWORD *)a3 + 1) = v306 + 2;
        v237 = *v306;
      }
      else
      {
        v235 = *((_QWORD *)a3 + 2);
        v236 = v234 + 8;
        *a3 = v236;
        v237 = *(_DWORD *)(v235 + v234);
        if ( (unsigned int)v236 <= 0x2F )
        {
          v238 = (unsigned int *)(v236 + v235);
          *a3 = v234 + 16;
          return (*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 216LL))(v11, v237, *v238);
        }
        v238 = *((unsigned int **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v238 + 2;
      return (*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 216LL))(v11, v237, *v238);
    case 18LL:
      v225 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v316 = *((unsigned int **)a3 + 1);
        v317 = v316 + 2;
        *((_QWORD *)a3 + 1) = v316 + 2;
        v228 = *v316;
      }
      else
      {
        v226 = *((_QWORD *)a3 + 2);
        v227 = v225 + 8;
        *a3 = v227;
        v228 = *(_DWORD *)(v226 + v225);
        if ( (unsigned int)v227 <= 0x2F )
        {
          v229 = v225 + 16;
          *a3 = v229;
          v230 = *(_DWORD *)(v226 + v227);
          if ( (unsigned int)v229 <= 0x2F )
          {
            v231 = v225 + 24;
            *a3 = v231;
            v232 = *(_QWORD *)(v226 + v229);
            if ( (unsigned int)v231 <= 0x2F )
            {
              v233 = (_QWORD *)(v231 + v226);
              *a3 = v225 + 32;
              return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 224LL))(
                       v11,
                       v228,
                       v230,
                       v232,
                       *v233);
            }
            v233 = *((_QWORD **)a3 + 1);
LABEL_287:
            *((_QWORD *)a3 + 1) = v233 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 224LL))(
                     v11,
                     v228,
                     v230,
                     v232,
                     *v233);
          }
          v318 = *((__int64 **)a3 + 1);
LABEL_286:
          v233 = v318 + 1;
          *((_QWORD *)a3 + 1) = v318 + 1;
          v232 = *v318;
          goto LABEL_287;
        }
        v317 = *((_DWORD **)a3 + 1);
      }
      v318 = (__int64 *)(v317 + 2);
      *((_QWORD *)a3 + 1) = v317 + 2;
      v230 = *v317;
      goto LABEL_286;
    case 19LL:
      v118 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v334 = *((unsigned int **)a3 + 1);
        v335 = v334 + 2;
        *((_QWORD *)a3 + 1) = v334 + 2;
        v121 = *v334;
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
LABEL_314:
            *((_QWORD *)a3 + 1) = v126 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 232LL))(
                     v11,
                     v121,
                     v123,
                     v125,
                     *v126);
          }
          v336 = *((__int64 **)a3 + 1);
LABEL_313:
          v126 = v336 + 1;
          *((_QWORD *)a3 + 1) = v336 + 1;
          v125 = *v336;
          goto LABEL_314;
        }
        v335 = *((_DWORD **)a3 + 1);
      }
      v336 = (__int64 *)(v335 + 2);
      *((_QWORD *)a3 + 1) = v335 + 2;
      v123 = *v335;
      goto LABEL_313;
    case 20LL:
      v109 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v331 = *((_QWORD **)a3 + 1);
        v332 = (unsigned int *)(v331 + 1);
        *((_QWORD *)a3 + 1) = v331 + 1;
        v112 = *v331;
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
LABEL_310:
            *((_QWORD *)a3 + 1) = v117 + 1;
            return (*(int (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v11 + 240LL))(
                     v11,
                     v112,
                     v114,
                     v116,
                     *v117);
          }
          v333 = *((_DWORD **)a3 + 1);
LABEL_309:
          v117 = v333 + 2;
          *((_QWORD *)a3 + 1) = v333 + 2;
          v116 = *v333;
          goto LABEL_310;
        }
        v332 = *((unsigned int **)a3 + 1);
      }
      v333 = v332 + 2;
      *((_QWORD *)a3 + 1) = v332 + 2;
      v114 = *v332;
      goto LABEL_309;
    case 21LL:
      v252 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v375 = *((__int64 **)a3 + 1);
        v256 = v375 + 1;
        *((_QWORD *)a3 + 1) = v375 + 1;
        v255 = *v375;
      }
      else
      {
        v253 = *((_QWORD *)a3 + 2);
        v254 = v252 + 8;
        *a3 = v254;
        v255 = *(_QWORD *)(v253 + v252);
        if ( (unsigned int)v254 <= 0x2F )
        {
          v256 = (_QWORD *)(v254 + v253);
          *a3 = v252 + 16;
          return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 256LL))(v11, v255, *v256);
        }
        v256 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v256 + 1;
      return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 256LL))(v11, v255, *v256);
    case 22LL:
      v239 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v312 = *((_QWORD ***)a3 + 1);
        v313 = (__int64 *)(v312 + 1);
        *((_QWORD *)a3 + 1) = v312 + 1;
        v242 = *v312;
      }
      else
      {
        v240 = *((_QWORD *)a3 + 2);
        v241 = v239 + 8;
        *a3 = v241;
        v242 = *(__int64 **)(v240 + v239);
        if ( (unsigned int)v241 <= 0x2F )
        {
          v243 = v239 + 16;
          *a3 = v243;
          v244 = *(_QWORD *)(v240 + v241);
          if ( (unsigned int)v243 <= 0x2F )
          {
            v245 = v239 + 24;
            *a3 = v245;
            v246 = *(_QWORD *)(v240 + v243);
            if ( (unsigned int)v245 <= 0x2F )
            {
              v247 = v239 + 32;
              *a3 = v247;
              v248 = *(_QWORD *)(v240 + v245);
              if ( (unsigned int)v247 <= 0x2F )
              {
                v249 = (_QWORD *)(v247 + v240);
                *a3 = v239 + 40;
                goto LABEL_211;
              }
              v249 = *((_QWORD **)a3 + 1);
LABEL_283:
              *((_QWORD *)a3 + 1) = v249 + 1;
LABEL_211:
              v250 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 288LL))(
                       v11,
                       v244,
                       v246,
                       v248,
                       *v249);
              goto LABEL_212;
            }
            v315 = *((__int64 **)a3 + 1);
LABEL_282:
            v249 = v315 + 1;
            *((_QWORD *)a3 + 1) = v315 + 1;
            v248 = *v315;
            goto LABEL_283;
          }
          v314 = *((__int64 **)a3 + 1);
LABEL_281:
          v315 = v314 + 1;
          *((_QWORD *)a3 + 1) = v314 + 1;
          v246 = *v314;
          goto LABEL_282;
        }
        v313 = *((__int64 **)a3 + 1);
      }
      v314 = v313 + 1;
      *((_QWORD *)a3 + 1) = v313 + 1;
      v244 = *v313;
      goto LABEL_281;
    case 23LL:
      v273 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v371 = *((_QWORD ***)a3 + 1);
        v372 = (__int64 *)(v371 + 1);
        *((_QWORD *)a3 + 1) = v371 + 1;
        v242 = *v371;
      }
      else
      {
        v274 = *((_QWORD *)a3 + 2);
        v275 = v273 + 8;
        *a3 = v275;
        v242 = *(__int64 **)(v274 + v273);
        if ( (unsigned int)v275 <= 0x2F )
        {
          v276 = v273 + 16;
          *a3 = v276;
          v277 = *(_QWORD *)(v274 + v275);
          if ( (unsigned int)v276 <= 0x2F )
          {
            v278 = v273 + 24;
            *a3 = v278;
            v279 = *(_QWORD *)(v274 + v276);
            if ( (unsigned int)v278 <= 0x2F )
            {
              v280 = v273 + 32;
              *a3 = v280;
              v281 = *(_QWORD *)(v274 + v278);
              if ( (unsigned int)v280 <= 0x2F )
              {
                v282 = (_QWORD *)(v280 + v274);
                *a3 = v273 + 40;
                goto LABEL_248;
              }
              v282 = *((_QWORD **)a3 + 1);
LABEL_371:
              *((_QWORD *)a3 + 1) = v282 + 1;
LABEL_248:
              v250 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 296LL))(
                       v11,
                       v277,
                       v279,
                       v281,
                       *v282);
LABEL_212:
              v251 = 0;
              if ( v250 >= 0 )
                v251 = v250;
              *v242 = v251;
              if ( v250 < 0 )
                return -5;
              return 1;
            }
            v374 = *((__int64 **)a3 + 1);
LABEL_370:
            v282 = v374 + 1;
            *((_QWORD *)a3 + 1) = v374 + 1;
            v281 = *v374;
            goto LABEL_371;
          }
          v373 = *((__int64 **)a3 + 1);
LABEL_369:
          v374 = v373 + 1;
          *((_QWORD *)a3 + 1) = v373 + 1;
          v279 = *v373;
          goto LABEL_370;
        }
        v372 = *((__int64 **)a3 + 1);
      }
      v373 = v372 + 1;
      *((_QWORD *)a3 + 1) = v372 + 1;
      v277 = *v372;
      goto LABEL_369;
    case 24LL:
      v186 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v319 = *((_DWORD ***)a3 + 1);
        v320 = (unsigned int *)(v319 + 1);
        *((_QWORD *)a3 + 1) = v319 + 1;
        v189 = *v319;
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
              v194 = (unsigned int *)(v192 + v187);
              *a3 = v186 + 32;
              goto LABEL_160;
            }
            v194 = *((unsigned int **)a3 + 1);
LABEL_291:
            *((_QWORD *)a3 + 1) = v194 + 2;
LABEL_160:
            v195 = *v194;
            if ( (_DWORD)v191 != 4 )
            {
              if ( (*(_BYTE *)(a1 + 154) & 0x40) == 0 )
              {
                if ( (v191 & 0xFFFFFFFD) == 1 || (_DWORD)v191 == 8 )
                {
                  if ( (_DWORD)v195 != 1 )
                  {
                    if ( (_DWORD)v191 == 8 || (((_DWORD)v195 - 2) & 0xFFFFFFFD) != 0 && (_DWORD)v195 != 8 )
                    {
                      *v189 = 5;
                      return 1;
                    }
                    if ( (v193 & ((int)v195 - 1)) != 0 )
                    {
                      *v189 = 3;
                      return 1;
                    }
                  }
                  goto LABEL_169;
                }
LABEL_381:
                *v189 = 2;
                return 1;
              }
              if ( !(_DWORD)v191 )
                goto LABEL_381;
            }
LABEL_169:
            *v189 = 0;
            *v189 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v11 + 304LL))(
                      v11,
                      v191,
                      v193,
                      v195);
            return 1;
          }
          v321 = *((_QWORD **)a3 + 1);
LABEL_290:
          v194 = (unsigned int *)(v321 + 1);
          *((_QWORD *)a3 + 1) = v321 + 1;
          v193 = *v321;
          goto LABEL_291;
        }
        v320 = *((unsigned int **)a3 + 1);
      }
      v321 = v320 + 2;
      *((_QWORD *)a3 + 1) = v320 + 2;
      v191 = *v320;
      goto LABEL_290;
    case 25LL:
      v205 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v341 = *((_DWORD ***)a3 + 1);
        v342 = (__int64 *)(v341 + 1);
        *((_QWORD *)a3 + 1) = v341 + 1;
        v208 = *v341;
      }
      else
      {
        v206 = *((_QWORD *)a3 + 2);
        v207 = v205 + 8;
        *a3 = v207;
        v208 = *(_DWORD **)(v206 + v205);
        if ( (unsigned int)v207 <= 0x2F )
        {
          v209 = v205 + 16;
          *a3 = v209;
          v210 = *(_QWORD *)(v206 + v207);
          if ( (unsigned int)v209 <= 0x2F )
          {
            v211 = v205 + 24;
            *a3 = v211;
            v212 = *(_DWORD *)(v206 + v209);
            if ( (unsigned int)v211 <= 0x2F )
            {
              *a3 = v205 + 32;
              v213 = *(_DWORD *)(v206 + v211);
              if ( v205 + 32 <= 0x2F )
              {
                *a3 = v205 + 40;
                return (int)sub_C770((_BYTE *)a1, v208, v210, v212, v213);
              }
              v345 = *((int **)a3 + 1);
LABEL_327:
              *((_QWORD *)a3 + 1) = v345 + 2;
              return (int)sub_C770((_BYTE *)a1, v208, v210, v212, v213);
            }
            v344 = *((int **)a3 + 1);
LABEL_326:
            v345 = v344 + 2;
            *((_QWORD *)a3 + 1) = v344 + 2;
            v213 = *v344;
            goto LABEL_327;
          }
          v343 = *((unsigned int **)a3 + 1);
LABEL_325:
          v344 = (int *)(v343 + 2);
          *((_QWORD *)a3 + 1) = v343 + 2;
          v212 = *v343;
          goto LABEL_326;
        }
        v342 = *((__int64 **)a3 + 1);
      }
      v343 = (unsigned int *)(v342 + 1);
      *((_QWORD *)a3 + 1) = v342 + 1;
      v210 = *v342;
      goto LABEL_325;
    case 26LL:
      v196 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v322 = *((__int64 **)a3 + 1);
        v323 = v322 + 1;
        *((_QWORD *)a3 + 1) = v322 + 1;
        v199 = *v322;
      }
      else
      {
        v197 = *((_QWORD *)a3 + 2);
        v198 = v196 + 8;
        *a3 = v198;
        v199 = *(_QWORD *)(v197 + v196);
        if ( (unsigned int)v198 <= 0x2F )
        {
          v200 = v196 + 16;
          *a3 = v200;
          v201 = *(_QWORD *)(v197 + v198);
          if ( (unsigned int)v200 <= 0x2F )
          {
            v202 = v196 + 24;
            *a3 = v202;
            v203 = *(_DWORD *)(v197 + v200);
            if ( (unsigned int)v202 <= 0x2F )
            {
              v204 = (_QWORD *)(v202 + v197);
              *a3 = v196 + 32;
              return (*(int (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 352LL))(
                       v11,
                       v199,
                       v201,
                       v203,
                       *v204);
            }
            v204 = *((_QWORD **)a3 + 1);
LABEL_296:
            *((_QWORD *)a3 + 1) = v204 + 1;
            return (*(int (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 352LL))(
                     v11,
                     v199,
                     v201,
                     v203,
                     *v204);
          }
          v324 = *((_DWORD **)a3 + 1);
LABEL_295:
          v204 = v324 + 2;
          *((_QWORD *)a3 + 1) = v324 + 2;
          v203 = *v324;
          goto LABEL_296;
        }
        v323 = *((_QWORD **)a3 + 1);
      }
      v324 = v323 + 1;
      *((_QWORD *)a3 + 1) = v323 + 1;
      v201 = *v323;
      goto LABEL_295;
    case 27LL:
      v214 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v304 = *((__int64 **)a3 + 1);
        v305 = v304 + 1;
        *((_QWORD *)a3 + 1) = v304 + 1;
        v217 = *v304;
      }
      else
      {
        v215 = *((_QWORD *)a3 + 2);
        v216 = v214 + 8;
        *a3 = v216;
        v217 = *(_QWORD *)(v215 + v214);
        if ( (unsigned int)v216 <= 0x2F )
        {
          v218 = v214 + 16;
          *a3 = v218;
          v219 = *(_QWORD *)(v215 + v216);
          if ( (unsigned int)v218 <= 0x2F )
          {
            v220 = (_DWORD *)(v218 + v215);
            *a3 = v214 + 24;
            return (*(int (__fastcall **)(__int64, __int64, __int64, bool))(*(_QWORD *)v11 + 368LL))(
                     v11,
                     v217,
                     v219,
                     *v220 != 0);
          }
          v220 = *((_DWORD **)a3 + 1);
LABEL_267:
          *((_QWORD *)a3 + 1) = v220 + 2;
          return (*(int (__fastcall **)(__int64, __int64, __int64, bool))(*(_QWORD *)v11 + 368LL))(
                   v11,
                   v217,
                   v219,
                   *v220 != 0);
        }
        v305 = *((_QWORD **)a3 + 1);
      }
      v220 = v305 + 1;
      *((_QWORD *)a3 + 1) = v305 + 1;
      v219 = *v305;
      goto LABEL_267;
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
        v325 = *((_DWORD **)a3 + 1);
        v326 = (__int64 *)(v325 + 2);
        *((_QWORD *)a3 + 1) = v325 + 2;
        v170 = *v325;
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
LABEL_300:
            *((_QWORD *)a3 + 1) = v175 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 384LL))(
                     v11,
                     v170,
                     v172,
                     v174,
                     *v175);
          }
          v327 = *((__int64 **)a3 + 1);
LABEL_299:
          v175 = v327 + 1;
          *((_QWORD *)a3 + 1) = v327 + 1;
          v174 = *v327;
          goto LABEL_300;
        }
        v326 = *((__int64 **)a3 + 1);
      }
      v327 = v326 + 1;
      *((_QWORD *)a3 + 1) = v326 + 1;
      v172 = *v326;
      goto LABEL_299;
    case 30LL:
      v158 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v338 = *((_DWORD **)a3 + 1);
        v339 = (__int64 *)(v338 + 2);
        *((_QWORD *)a3 + 1) = v338 + 2;
        v161 = *v338;
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
LABEL_322:
            *((_QWORD *)a3 + 1) = v166 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 392LL))(
                     v11,
                     v161,
                     v163,
                     v165,
                     *v166);
          }
          v340 = *((__int64 **)a3 + 1);
LABEL_321:
          v166 = v340 + 1;
          *((_QWORD *)a3 + 1) = v340 + 1;
          v165 = *v340;
          goto LABEL_322;
        }
        v339 = *((__int64 **)a3 + 1);
      }
      v340 = v339 + 1;
      *((_QWORD *)a3 + 1) = v339 + 1;
      v163 = *v339;
      goto LABEL_321;
    case 31LL:
      v176 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v367 = *((_QWORD ***)a3 + 1);
        v368 = (__int64 *)(v367 + 1);
        *((_QWORD *)a3 + 1) = v367 + 1;
        v179 = *v367;
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
              goto LABEL_152;
            }
            v184 = *((unsigned int **)a3 + 1);
LABEL_362:
            *((_QWORD *)a3 + 1) = v184 + 2;
LABEL_152:
            v185 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 248LL);
            if ( v185 != sub_A610 )
              v181 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))v185)(v11, v181, v183, *v184);
            *v179 = v181;
            return 1;
          }
          v369 = *((_QWORD **)a3 + 1);
LABEL_361:
          v184 = (unsigned int *)(v369 + 1);
          *((_QWORD *)a3 + 1) = v369 + 1;
          v183 = *v369;
          goto LABEL_362;
        }
        v368 = *((__int64 **)a3 + 1);
      }
      v369 = v368 + 1;
      *((_QWORD *)a3 + 1) = v368 + 1;
      v181 = *v368;
      goto LABEL_361;
    case 33LL:
      v75 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v370 = *((_DWORD **)a3 + 1);
        v79 = v370 + 2;
        *((_QWORD *)a3 + 1) = v370 + 2;
        v78 = *v370;
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
        v382 = *((_QWORD ***)a3 + 1);
        *((_QWORD *)a3 + 1) = v382 + 1;
        v96 = *v382;
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
LABEL_389:
                v386 = *((__int64 **)a3 + 1);
                *((_QWORD *)a3 + 1) = v386 + 1;
                v103 = *v386;
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
LABEL_388:
              *((_QWORD *)a3 + 1) += 8LL;
              goto LABEL_389;
            }
LABEL_387:
            v385 = *((__int64 **)a3 + 1);
            *((_QWORD *)a3 + 1) = v385 + 1;
            v101 = *v385;
            goto LABEL_388;
          }
LABEL_386:
          v384 = *((unsigned int **)a3 + 1);
          *((_QWORD *)a3 + 1) = v384 + 2;
          v100 = *v384;
          goto LABEL_387;
        }
      }
      v383 = *((__int64 **)a3 + 1);
      *((_QWORD *)a3 + 1) = v383 + 1;
      v98 = *v383;
      goto LABEL_386;
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
        v307 = *((_DWORD **)a3 + 1);
        v308 = (__int64 *)(v307 + 2);
        *((_QWORD *)a3 + 1) = v307 + 2;
        v144 = *v307;
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
LABEL_273:
          *((_QWORD *)a3 + 1) = v147 + 1;
          return (*(int (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 360LL))(
                   v11,
                   v144,
                   v146,
                   *v147);
        }
        v308 = *((__int64 **)a3 + 1);
      }
      v147 = v308 + 1;
      *((_QWORD *)a3 + 1) = v308 + 1;
      v146 = *v308;
      goto LABEL_273;
    case 37LL:
      v60 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v355 = *((_DWORD **)a3 + 1);
        v356 = (__int64 *)(v355 + 2);
        *((_QWORD *)a3 + 1) = v355 + 2;
        v63 = *v355;
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
LABEL_343:
              *((_QWORD *)a3 + 1) = v70 + 1;
              return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 400LL))(
                       v11,
                       v63,
                       v65,
                       v67,
                       v69,
                       *v70);
            }
            v358 = *((__int64 **)a3 + 1);
LABEL_342:
            v70 = v358 + 1;
            *((_QWORD *)a3 + 1) = v358 + 1;
            v69 = *v358;
            goto LABEL_343;
          }
          v357 = *((__int64 **)a3 + 1);
LABEL_341:
          v358 = v357 + 1;
          *((_QWORD *)a3 + 1) = v357 + 1;
          v67 = *v357;
          goto LABEL_342;
        }
        v356 = *((__int64 **)a3 + 1);
      }
      v357 = v356 + 1;
      *((_QWORD *)a3 + 1) = v356 + 1;
      v65 = *v356;
      goto LABEL_341;
    case 38LL:
      v52 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v360 = *((unsigned int **)a3 + 1);
        v361 = v360 + 2;
        *((_QWORD *)a3 + 1) = v360 + 2;
        v55 = *v360;
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
LABEL_350:
          *((_QWORD *)a3 + 1) = v58 + 2;
LABEL_54:
          v59 = *(__int64 (**)())(*(_QWORD *)v11 + 520LL);
          if ( v59 != sub_A690 )
            return ((unsigned __int8 (__fastcall *)(__int64, _QWORD, bool, _QWORD))v59)(v11, v55, v57, *v58);
          return 0;
        }
        v361 = *((_DWORD **)a3 + 1);
      }
      v58 = v361 + 2;
      *((_QWORD *)a3 + 1) = v361 + 2;
      v57 = *v361 != 0;
      goto LABEL_350;
    case 39LL:
      v46 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v330 = *((unsigned int **)a3 + 1);
        v50 = v330 + 2;
        *((_QWORD *)a3 + 1) = v330 + 2;
        v49 = *v330;
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
      if ( v51 == sub_A6A0 )
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
        v359 = *((__int64 **)a3 + 1);
        v42 = v359 + 1;
        *((_QWORD *)a3 + 1) = v359 + 1;
        v41 = *v359;
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
      if ( v43 == sub_A6C0 )
        return 0;
      return ((unsigned __int8 (__fastcall *)(__int64, __int64, _QWORD))v43)(v11, v41, *v42);
    case 42LL:
      v25 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v346 = *((__int64 **)a3 + 1);
        v347 = v346 + 1;
        *((_QWORD *)a3 + 1) = v346 + 1;
        v28 = *v346;
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
LABEL_333:
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
                    sub_B0F0((__int64)"debugger_t::ev_bin_search(%a, %a) -> %d(%s) ea %a\n", a4, a5, v30, v32, a6);
                  return v6;
                }
                return 0;
              }
              v350 = *((unsigned int **)a3 + 1);
LABEL_332:
              v37 = v350 + 2;
              *((_QWORD *)a3 + 1) = v350 + 2;
              v36 = *v350;
              goto LABEL_333;
            }
            v349 = *((_QWORD **)a3 + 1);
LABEL_331:
            v350 = (unsigned int *)(v349 + 1);
            *((_QWORD *)a3 + 1) = v349 + 1;
            v34 = *v349;
            goto LABEL_332;
          }
          v348 = *((const char ***)a3 + 1);
LABEL_330:
          v349 = v348 + 1;
          *((_QWORD *)a3 + 1) = v348 + 1;
          v32 = *v348;
          goto LABEL_331;
        }
        v347 = *((_QWORD **)a3 + 1);
      }
      v348 = (const char **)(v347 + 1);
      *((_QWORD *)a3 + 1) = v347 + 1;
      v30 = *v347;
      goto LABEL_330;
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
        v351 = *((_QWORD ***)a3 + 1);
        v352 = v351 + 1;
        *((_QWORD *)a3 + 1) = v351 + 1;
        v15 = *v351;
LABEL_335:
        v353 = (unsigned int *)(v352 + 1);
        *((_QWORD *)a3 + 1) = v352 + 1;
        v17 = *v352;
LABEL_336:
        v354 = v353 + 2;
        *((_QWORD *)a3 + 1) = v353 + 2;
        v388 = *v353;
LABEL_337:
        v21 = (__int64 *)(v354 + 2);
        *((_QWORD *)a3 + 1) = v354 + 2;
        v20 = *v354;
        goto LABEL_338;
      }
      v13 = *((_QWORD *)a3 + 2);
      v14 = v12 + 8;
      *a3 = v14;
      v15 = *(__int64 **)(v13 + v12);
      if ( (unsigned int)v14 > 0x2F )
      {
        v352 = *((_QWORD **)a3 + 1);
        goto LABEL_335;
      }
      v16 = v12 + 16;
      *a3 = v16;
      v17 = *(_QWORD *)(v13 + v14);
      if ( (unsigned int)v16 > 0x2F )
      {
        v353 = *((unsigned int **)a3 + 1);
        goto LABEL_336;
      }
      v18 = v12 + 24;
      *a3 = v18;
      v388 = *(_DWORD *)(v13 + v16);
      if ( (unsigned int)v18 > 0x2F )
      {
        v354 = *((_DWORD **)a3 + 1);
        goto LABEL_337;
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
LABEL_338:
      *((_QWORD *)a3 + 1) = v21 + 1;
LABEL_13:
      v22 = *v21;
      if ( (*(_DWORD *)debug & 0x10000) != 0 )
        sub_B0F0((__int64)"debugger_t::ev_set_dbg_options(%s)\n", (const char *)v17);
      v23 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 64LL))(
              a1,
              v17,
              v388,
              v20,
              v22);
      if ( !v17 || *(_BYTE *)v17 != 32 || (v6 = v23 != 0, *(_BYTE *)(v17 + 1)) )
      {
        if ( v15 )
          *v15 = v23;
        sub_D080((__int64 *)a1, *(_BYTE *)(a1 + 208));
        return 1;
      }
      return v6;
    default:
      return 0;
  }
}

