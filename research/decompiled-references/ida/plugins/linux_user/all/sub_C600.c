__int64 __fastcall sub_C600(_BYTE *a1, __int64 a2, int *a3, double a4, double a5, double a6)
{
  __int64 v6; // r15
  int v7; // ecx
  __int64 (*v10)(void); // rax
  _BYTE *v11; // rdi
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
  __int64 (*v24)(); // rax
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
  void (*v75)(); // rax
  unsigned int v76; // ecx
  __int64 v77; // rax
  __int64 v78; // rsi
  unsigned int v79; // r8d
  _QWORD *v80; // rax
  int v81; // ebx
  unsigned int v82; // eax
  _DWORD *v83; // rcx
  __int64 (*v84)(); // rax
  unsigned int v85; // ecx
  __int64 v86; // rax
  __int64 v87; // r8
  _DWORD *v88; // rbx
  __int64 v89; // rsi
  __int64 v90; // r8
  unsigned int *v91; // rax
  unsigned int v92; // eax
  _QWORD *v93; // rcx
  unsigned int v94; // eax
  __int64 v95; // rsi
  __int64 v96; // rcx
  _QWORD *v97; // rbx
  __int64 v98; // r8
  __int64 v99; // r10
  __int64 v100; // rcx
  unsigned int v101; // r11d
  __int64 v102; // r14
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 *v105; // rax
  __int64 v106; // r9
  __int64 v107; // rcx
  __int64 v108; // rsi
  __int64 v109; // r12
  unsigned int v110; // ecx
  __int64 v111; // rax
  __int64 v112; // rsi
  __int64 v113; // r9
  __int64 v114; // r8
  unsigned int v115; // r10d
  __int64 v116; // rsi
  unsigned int v117; // ebx
  _QWORD *v118; // rax
  unsigned int v119; // ecx
  __int64 v120; // rax
  __int64 v121; // rsi
  unsigned int v122; // r9d
  __int64 v123; // r8
  unsigned int v124; // r10d
  __int64 v125; // rsi
  __int64 v126; // rbx
  _QWORD *v127; // rax
  unsigned int v128; // eax
  unsigned int *v129; // rcx
  unsigned int v130; // eax
  unsigned int *v131; // rcx
  unsigned int v132; // ecx
  __int64 v133; // rax
  __int64 v134; // rsi
  bool v135; // bl
  _QWORD *v136; // rax
  unsigned int v137; // ecx
  __int64 v138; // rax
  __int64 v139; // rsi
  __int64 v140; // r8
  unsigned int *v141; // rax
  unsigned int v142; // ecx
  __int64 v143; // rax
  __int64 v144; // r8
  unsigned int v145; // r9d
  __int64 v146; // rsi
  __int64 v147; // r8
  _QWORD *v148; // rax
  unsigned int v149; // ecx
  __int64 v150; // rax
  __int64 v151; // rsi
  unsigned int v152; // r9d
  __int64 v153; // r8
  unsigned int v154; // r10d
  __int64 v155; // rsi
  unsigned int v156; // r14d
  _QWORD *v157; // rax
  int v158; // eax
  unsigned int v159; // ecx
  __int64 v160; // rax
  __int64 v161; // rsi
  unsigned int v162; // r9d
  __int64 v163; // r8
  __int64 v164; // r10
  __int64 v165; // rsi
  __int64 v166; // rbx
  _QWORD *v167; // rax
  __int64 (*v168)(); // r11
  unsigned int v169; // ecx
  __int64 v170; // rax
  __int64 v171; // rsi
  __int64 v172; // r8
  __int64 v173; // rsi
  unsigned int v174; // ecx
  __int64 v175; // rax
  __int64 v176; // rsi
  __int64 *v177; // rbx
  __int64 v178; // r9
  __int64 v179; // rsi
  __int64 v180; // r8
  __int64 v181; // r9
  unsigned int *v182; // rax
  __int64 (__fastcall *v183)(__int64, __int64); // r8
  unsigned int v184; // ecx
  __int64 v185; // rax
  __int64 v186; // rsi
  _DWORD *v187; // r14
  __int64 v188; // r9
  __int64 v189; // rsi
  __int64 v190; // r8
  __int64 v191; // r9
  unsigned int *v192; // rax
  __int64 v193; // rcx
  unsigned int v194; // ecx
  __int64 v195; // rax
  __int64 v196; // rsi
  __int64 v197; // r9
  __int64 v198; // r8
  __int64 v199; // r10
  __int64 v200; // rsi
  unsigned int v201; // ebx
  _QWORD *v202; // rax
  unsigned int v203; // ecx
  __int64 v204; // rax
  __int64 v205; // rdi
  _DWORD *v206; // r10
  __int64 v207; // rsi
  __int64 v208; // r11
  __int64 v209; // rdi
  unsigned int v210; // r14d
  int v211; // r8d
  unsigned int v212; // ecx
  __int64 v213; // rax
  __int64 v214; // r8
  __int64 v215; // r9
  __int64 v216; // rsi
  __int64 v217; // r10
  _DWORD *v218; // rax
  __int64 (*v219)(); // r8
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
  __int64 *v285; // rcx
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
  _DWORD **v318; // rcx
  unsigned int *v319; // rax
  _QWORD *v320; // rcx
  __int64 *v321; // rcx
  _QWORD *v322; // rax
  _DWORD *v323; // rcx
  _DWORD *v324; // rcx
  __int64 *v325; // rax
  __int64 *v326; // rcx
  _DWORD **v327; // rax
  _QWORD *v328; // rcx
  unsigned int *v329; // rcx
  _QWORD *v330; // rcx
  unsigned int *v331; // rax
  _DWORD *v332; // rcx
  unsigned int *v333; // rcx
  _DWORD *v334; // rax
  __int64 *v335; // rcx
  _DWORD *v336; // rcx
  _DWORD *v337; // rcx
  __int64 *v338; // rax
  __int64 *v339; // rcx
  _DWORD **v340; // rax
  __int64 *v341; // rcx
  unsigned int *v342; // rax
  int *v343; // rcx
  int *v344; // rax
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
  int v386; // eax
  int *v387; // [rsp+10h] [rbp-70h]
  unsigned int v388; // [rsp+18h] [rbp-68h]
  const char *v389; // [rsp+18h] [rbp-68h]
  const char *v390; // [rsp+30h] [rbp-50h] BYREF
  __int128 v391; // [rsp+38h] [rbp-48h]
  unsigned __int64 v392; // [rsp+48h] [rbp-38h]

  v6 = 0;
  v7 = *((_DWORD *)a1 + 34);
  v392 = __readfsqword(0x28u);
  if ( *(_DWORD *)(dbg + 16LL) != v7 || *(_QWORD *)(dbg + 32LL) != *((_QWORD *)a1 + 19) )
    return v6;
  v10 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
  if ( (char *)v10 == (char *)sub_ABD0 )
  {
    v11 = a1 + 224;
  }
  else
  {
    v387 = a3;
    v302 = v10();
    a3 = v387;
    v11 = (_BYTE *)v302;
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
        v389 = *v308;
      }
      else
      {
        v257 = *((_QWORD *)a3 + 2);
        v258 = v256 + 8;
        *a3 = v258;
        v389 = *(const char **)(v257 + v256);
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
              goto LABEL_230;
            }
            while ( 1 )
            {
              v263 = *((__int64 **)a3 + 1);
LABEL_283:
              *((_QWORD *)a3 + 1) = v263 + 1;
LABEL_230:
              v264 = *v263;
              if ( *v263 )
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
              sub_BF00((__int64 *)&v390);
              v265 = s;
              if ( (_QWORD)v391 )
                v265 = v390;
              sub_AF10((__int64)"%s: debugger_t::ev_init_debugger (%s,%d,)\n", v265, v389, v260);
              if ( v390 )
              {
                *(_QWORD *)&v391 = 0;
                qfree();
              }
            }
            return (int)sub_C320((__int64)a1, (__int64)v389, v260, v262, v264);
          }
          v310 = *((__int64 **)a3 + 1);
LABEL_282:
          v263 = v310 + 1;
          *((_QWORD *)a3 + 1) = v310 + 1;
          v262 = *v310;
          goto LABEL_283;
        }
        v309 = *((unsigned int **)a3 + 1);
      }
      v310 = (__int64 *)(v309 + 2);
      *((_QWORD *)a3 + 1) = v309 + 2;
      v260 = *v309;
      goto LABEL_282;
    case 1LL:
      if ( (*(_DWORD *)debug & 0x10000) != 0 )
      {
        v390 = nullptr;
        v391 = 0;
        get_dbctx_id();
        sub_BF00((__int64 *)&v390);
        v271 = s;
        if ( (_QWORD)v391 )
          v271 = v390;
        sub_AF10((__int64)"%s: debugger_t::ev_term_debugger\n", v271);
        if ( v390 )
        {
          *(_QWORD *)&v391 = 0;
          qfree();
        }
      }
      return (int)sub_BDA0(a1);
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
          return (*(int (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v11 + 72LL))(v11, v269, *v270);
        }
        v270 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v270 + 1;
      return (*(int (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v11 + 72LL))(v11, v269, *v270);
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
                  goto LABEL_267;
                }
                v380 = *((unsigned int **)a3 + 1);
LABEL_384:
                v298 = (__int64 *)(v380 + 2);
                *((_QWORD *)a3 + 1) = v380 + 2;
                v299 = *v380;
LABEL_267:
                *((_QWORD *)a3 + 1) = v298 + 1;
                v300 = *v298;
                *((_QWORD *)a3 + 1) = v298 + 2;
                v301 = (*(__int64 (__fastcall **)(_BYTE *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v11 + 128LL))(
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
                  goto LABEL_136;
                return v6;
              }
              v379 = *((_QWORD **)a3 + 1);
LABEL_383:
              v380 = (unsigned int *)(v379 + 1);
              *((_QWORD *)a3 + 1) = v379 + 1;
              v297 = *v379;
              goto LABEL_384;
            }
            v378 = *((unsigned int **)a3 + 1);
LABEL_382:
            v379 = v378 + 2;
            *((_QWORD *)a3 + 1) = v378 + 2;
            v295 = *v378;
            goto LABEL_383;
          }
          v377 = *((_QWORD **)a3 + 1);
LABEL_381:
          v378 = (unsigned int *)(v377 + 1);
          *((_QWORD *)a3 + 1) = v377 + 1;
          v293 = *v377;
          goto LABEL_382;
        }
        v376 = *((__int64 **)a3 + 1);
      }
      v377 = v376 + 1;
      *((_QWORD *)a3 + 1) = v376 + 1;
      v291 = *v376;
      goto LABEL_381;
    case 4LL:
      v149 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v362 = *((unsigned int **)a3 + 1);
        v363 = v362 + 2;
        *((_QWORD *)a3 + 1) = v362 + 2;
        v152 = *v362;
      }
      else
      {
        v150 = *((_QWORD *)a3 + 2);
        v151 = v149 + 8;
        *a3 = v151;
        v152 = *(_DWORD *)(v150 + v149);
        if ( (unsigned int)v151 <= 0x2F )
        {
          v153 = v149 + 16;
          *a3 = v153;
          v154 = *(_DWORD *)(v150 + v151);
          if ( (unsigned int)v153 <= 0x2F )
          {
            v155 = v149 + 24;
            *a3 = v155;
            v156 = *(_DWORD *)(v150 + v153);
            if ( (unsigned int)v155 <= 0x2F )
            {
              v157 = (_QWORD *)(v155 + v150);
              *a3 = v149 + 32;
              goto LABEL_135;
            }
            v157 = *((_QWORD **)a3 + 1);
LABEL_361:
            *((_QWORD *)a3 + 1) = v157 + 1;
LABEL_135:
            v158 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v11 + 144LL))(
                     v11,
                     v152,
                     v154,
                     v156,
                     *v157);
            v6 = v158;
            if ( v158 > 0 )
LABEL_136:
              sub_BFC0((__int64)a1, 1);
            return v6;
          }
          v364 = *((_DWORD **)a3 + 1);
LABEL_360:
          v157 = v364 + 2;
          *((_QWORD *)a3 + 1) = v364 + 2;
          v156 = *v364;
          goto LABEL_361;
        }
        v363 = *((unsigned int **)a3 + 1);
      }
      v364 = v363 + 2;
      *((_QWORD *)a3 + 1) = v363 + 2;
      v154 = *v363;
      goto LABEL_360;
    case 5LL:
      return (*(int (__fastcall **)(_BYTE *))(*(_QWORD *)v11 + 120LL))(v11);
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
      (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v11 + 552LL))(v11, *v223);
      return 1;
    case 7LL:
      v284 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v285 = *((__int64 **)a3 + 1);
        *((_QWORD *)a3 + 1) = v285 + 1;
      }
      else
      {
        v285 = (__int64 *)(*((_QWORD *)a3 + 2) + v284);
        *a3 = v284 + 8;
      }
      sub_B440(*v285, a4);
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
      return (*(int (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v11 + 152LL))(v11, *v221);
    case 9LL:
      v92 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v93 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v93 + 1;
      }
      else
      {
        v93 = (_QWORD *)(*((_QWORD *)a3 + 2) + v92);
        *a3 = v92 + 8;
      }
      return (*(int (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v11 + 160LL))(v11, *v93);
    case 10LL:
      v85 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v327 = *((_DWORD ***)a3 + 1);
        v328 = v327 + 1;
        *((_QWORD *)a3 + 1) = v327 + 1;
        v88 = *v327;
      }
      else
      {
        v86 = *((_QWORD *)a3 + 2);
        v87 = v85 + 8;
        *a3 = v87;
        v88 = *(_DWORD **)(v86 + v85);
        if ( (unsigned int)v87 <= 0x2F )
        {
          v89 = v85 + 16;
          *a3 = v89;
          v90 = *(_QWORD *)(v86 + v87);
          if ( (unsigned int)v89 <= 0x2F )
          {
            v91 = (unsigned int *)(v89 + v86);
            *a3 = v85 + 24;
            goto LABEL_85;
          }
          v91 = *((unsigned int **)a3 + 1);
LABEL_309:
          *((_QWORD *)a3 + 1) = v91 + 2;
LABEL_85:
          *v88 = (*(__int64 (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v11 + 136LL))(v11, v90, *v91);
          return 1;
        }
        v328 = *((_QWORD **)a3 + 1);
      }
      v91 = (unsigned int *)(v328 + 1);
      *((_QWORD *)a3 + 1) = v328 + 1;
      v90 = *v328;
      goto LABEL_309;
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
      return (*(int (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v11 + 168LL))(v11, *v283);
    case 12LL:
      v82 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v83 = *((_DWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v83 + 2;
      }
      else
      {
        v83 = (_DWORD *)(*((_QWORD *)a3 + 2) + v82);
        *a3 = v82 + 8;
      }
      v84 = *(__int64 (**)())(*(_QWORD *)v11 + 176LL);
      if ( v84 == sub_AB20 )
        return 0;
      return ((int (__fastcall *)(_BYTE *, bool))v84)(v11, *v83 != 0);
    case 13LL:
      v137 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v361 = *((_QWORD **)a3 + 1);
        v141 = (unsigned int *)(v361 + 1);
        *((_QWORD *)a3 + 1) = v361 + 1;
        v140 = *v361;
      }
      else
      {
        v138 = *((_QWORD *)a3 + 2);
        v139 = v137 + 8;
        *a3 = v139;
        v140 = *(_QWORD *)(v138 + v137);
        if ( (unsigned int)v139 <= 0x2F )
        {
          v141 = (unsigned int *)(v139 + v138);
          *a3 = v137 + 16;
          goto LABEL_124;
        }
        v141 = *((unsigned int **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v141 + 2;
LABEL_124:
      (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v11 + 184LL))(v11, v140, *v141);
      return 1;
    case 14LL:
      v132 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v336 = *((_DWORD **)a3 + 1);
        v136 = v336 + 2;
        *((_QWORD *)a3 + 1) = v336 + 2;
        v135 = *v336 != 0;
      }
      else
      {
        v133 = *((_QWORD *)a3 + 2);
        v134 = v132 + 8;
        *a3 = v134;
        v135 = *(_DWORD *)(v133 + v132) != 0;
        if ( (unsigned int)v134 <= 0x2F )
        {
          v136 = (_QWORD *)(v134 + v133);
          *a3 = v132 + 16;
          goto LABEL_119;
        }
        v136 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v136 + 1;
LABEL_119:
      (*(void (__fastcall **)(_BYTE *, _QWORD, bool, _QWORD))(*(_QWORD *)v11 + 192LL))(v11, 0, v135, *v136);
      if ( v135 )
        sub_32AE0(v11);
      return 1;
    case 15LL:
      v130 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v131 = *((unsigned int **)a3 + 1);
        *((_QWORD *)a3 + 1) = v131 + 2;
      }
      else
      {
        v131 = (unsigned int *)(*((_QWORD *)a3 + 2) + v130);
        *a3 = v130 + 8;
      }
      return (*(int (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v11 + 200LL))(v11, *v131);
    case 16LL:
      v128 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v129 = *((unsigned int **)a3 + 1);
        *((_QWORD *)a3 + 1) = v129 + 2;
      }
      else
      {
        v129 = (unsigned int *)(*((_QWORD *)a3 + 2) + v128);
        *a3 = v128 + 8;
      }
      return (*(int (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v11 + 208LL))(v11, *v129);
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
          return (*(int (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)v11 + 216LL))(v11, v236, *v237);
        }
        v237 = *((unsigned int **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v237 + 2;
      return (*(int (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)v11 + 216LL))(v11, v236, *v237);
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
              return (*(int (__fastcall **)(_BYTE *, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 224LL))(
                       v11,
                       v227,
                       v229,
                       v231,
                       *v232);
            }
            v232 = *((_QWORD **)a3 + 1);
LABEL_292:
            *((_QWORD *)a3 + 1) = v232 + 1;
            return (*(int (__fastcall **)(_BYTE *, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 224LL))(
                     v11,
                     v227,
                     v229,
                     v231,
                     *v232);
          }
          v317 = *((__int64 **)a3 + 1);
LABEL_291:
          v232 = v317 + 1;
          *((_QWORD *)a3 + 1) = v317 + 1;
          v231 = *v317;
          goto LABEL_292;
        }
        v316 = *((_DWORD **)a3 + 1);
      }
      v317 = (__int64 *)(v316 + 2);
      *((_QWORD *)a3 + 1) = v316 + 2;
      v229 = *v316;
      goto LABEL_291;
    case 19LL:
      v119 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v333 = *((unsigned int **)a3 + 1);
        v334 = v333 + 2;
        *((_QWORD *)a3 + 1) = v333 + 2;
        v122 = *v333;
      }
      else
      {
        v120 = *((_QWORD *)a3 + 2);
        v121 = v119 + 8;
        *a3 = v121;
        v122 = *(_DWORD *)(v120 + v119);
        if ( (unsigned int)v121 <= 0x2F )
        {
          v123 = v119 + 16;
          *a3 = v123;
          v124 = *(_DWORD *)(v120 + v121);
          if ( (unsigned int)v123 <= 0x2F )
          {
            v125 = v119 + 24;
            *a3 = v125;
            v126 = *(_QWORD *)(v120 + v123);
            if ( (unsigned int)v125 <= 0x2F )
            {
              v127 = (_QWORD *)(v125 + v120);
              *a3 = v119 + 32;
              return (*(int (__fastcall **)(_BYTE *, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 232LL))(
                       v11,
                       v122,
                       v124,
                       v126,
                       *v127);
            }
            v127 = *((_QWORD **)a3 + 1);
LABEL_319:
            *((_QWORD *)a3 + 1) = v127 + 1;
            return (*(int (__fastcall **)(_BYTE *, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 232LL))(
                     v11,
                     v122,
                     v124,
                     v126,
                     *v127);
          }
          v335 = *((__int64 **)a3 + 1);
LABEL_318:
          v127 = v335 + 1;
          *((_QWORD *)a3 + 1) = v335 + 1;
          v126 = *v335;
          goto LABEL_319;
        }
        v334 = *((_DWORD **)a3 + 1);
      }
      v335 = (__int64 *)(v334 + 2);
      *((_QWORD *)a3 + 1) = v334 + 2;
      v124 = *v334;
      goto LABEL_318;
    case 20LL:
      v110 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v330 = *((_QWORD **)a3 + 1);
        v331 = (unsigned int *)(v330 + 1);
        *((_QWORD *)a3 + 1) = v330 + 1;
        v113 = *v330;
      }
      else
      {
        v111 = *((_QWORD *)a3 + 2);
        v112 = v110 + 8;
        *a3 = v112;
        v113 = *(_QWORD *)(v111 + v110);
        if ( (unsigned int)v112 <= 0x2F )
        {
          v114 = v110 + 16;
          *a3 = v114;
          v115 = *(_DWORD *)(v111 + v112);
          if ( (unsigned int)v114 <= 0x2F )
          {
            v116 = v110 + 24;
            *a3 = v116;
            v117 = *(_DWORD *)(v111 + v114);
            if ( (unsigned int)v116 <= 0x2F )
            {
              v118 = (_QWORD *)(v116 + v111);
              *a3 = v110 + 32;
              return (*(int (__fastcall **)(_BYTE *, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v11 + 240LL))(
                       v11,
                       v113,
                       v115,
                       v117,
                       *v118);
            }
            v118 = *((_QWORD **)a3 + 1);
LABEL_315:
            *((_QWORD *)a3 + 1) = v118 + 1;
            return (*(int (__fastcall **)(_BYTE *, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v11 + 240LL))(
                     v11,
                     v113,
                     v115,
                     v117,
                     *v118);
          }
          v332 = *((_DWORD **)a3 + 1);
LABEL_314:
          v118 = v332 + 2;
          *((_QWORD *)a3 + 1) = v332 + 2;
          v117 = *v332;
          goto LABEL_315;
        }
        v331 = *((unsigned int **)a3 + 1);
      }
      v332 = v331 + 2;
      *((_QWORD *)a3 + 1) = v331 + 2;
      v115 = *v331;
      goto LABEL_314;
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
          return (*(int (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v11 + 256LL))(v11, v254, *v255);
        }
        v255 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v255 + 1;
      return (*(int (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v11 + 256LL))(v11, v254, *v255);
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
                goto LABEL_216;
              }
              v248 = *((_QWORD **)a3 + 1);
LABEL_288:
              *((_QWORD *)a3 + 1) = v248 + 1;
LABEL_216:
              v249 = (*(__int64 (__fastcall **)(_BYTE *, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 288LL))(
                       v11,
                       v243,
                       v245,
                       v247,
                       *v248);
              goto LABEL_217;
            }
            v314 = *((__int64 **)a3 + 1);
LABEL_287:
            v248 = v314 + 1;
            *((_QWORD *)a3 + 1) = v314 + 1;
            v247 = *v314;
            goto LABEL_288;
          }
          v313 = *((__int64 **)a3 + 1);
LABEL_286:
          v314 = v313 + 1;
          *((_QWORD *)a3 + 1) = v313 + 1;
          v245 = *v313;
          goto LABEL_287;
        }
        v312 = *((__int64 **)a3 + 1);
      }
      v313 = v312 + 1;
      *((_QWORD *)a3 + 1) = v312 + 1;
      v243 = *v312;
      goto LABEL_286;
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
                goto LABEL_253;
              }
              v281 = *((_QWORD **)a3 + 1);
LABEL_376:
              *((_QWORD *)a3 + 1) = v281 + 1;
LABEL_253:
              v249 = (*(__int64 (__fastcall **)(_BYTE *, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 296LL))(
                       v11,
                       v276,
                       v278,
                       v280,
                       *v281);
LABEL_217:
              v250 = 0;
              if ( v249 >= 0 )
                v250 = v249;
              *v241 = v250;
              if ( v249 < 0 )
                return -5;
              return 1;
            }
            v373 = *((__int64 **)a3 + 1);
LABEL_375:
            v281 = v373 + 1;
            *((_QWORD *)a3 + 1) = v373 + 1;
            v280 = *v373;
            goto LABEL_376;
          }
          v372 = *((__int64 **)a3 + 1);
LABEL_374:
          v373 = v372 + 1;
          *((_QWORD *)a3 + 1) = v372 + 1;
          v278 = *v372;
          goto LABEL_375;
        }
        v371 = *((__int64 **)a3 + 1);
      }
      v372 = v371 + 1;
      *((_QWORD *)a3 + 1) = v371 + 1;
      v276 = *v371;
      goto LABEL_374;
    case 24LL:
      v184 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v318 = *((_DWORD ***)a3 + 1);
        v319 = (unsigned int *)(v318 + 1);
        *((_QWORD *)a3 + 1) = v318 + 1;
        v187 = *v318;
      }
      else
      {
        v185 = *((_QWORD *)a3 + 2);
        v186 = v184 + 8;
        *a3 = v186;
        v187 = *(_DWORD **)(v185 + v184);
        if ( (unsigned int)v186 <= 0x2F )
        {
          v188 = v184 + 16;
          *a3 = v188;
          v189 = *(unsigned int *)(v185 + v186);
          if ( (unsigned int)v188 <= 0x2F )
          {
            v190 = v184 + 24;
            *a3 = v190;
            v191 = *(_QWORD *)(v185 + v188);
            if ( (unsigned int)v190 <= 0x2F )
            {
              v192 = (unsigned int *)(v190 + v185);
              *a3 = v184 + 32;
              goto LABEL_164;
            }
            v192 = *((unsigned int **)a3 + 1);
LABEL_296:
            *((_QWORD *)a3 + 1) = v192 + 2;
LABEL_164:
            v193 = *v192;
            if ( (_DWORD)v189 != 4 )
            {
              if ( (a1[154] & 0x40) == 0 )
              {
                if ( (v189 & 0xFFFFFFFD) == 1 || (_DWORD)v189 == 8 )
                {
                  if ( (_DWORD)v193 != 1 )
                  {
                    if ( (_DWORD)v189 == 8 || (((_DWORD)v193 - 2) & 0xFFFFFFFD) != 0 && (_DWORD)v193 != 8 )
                    {
                      *v187 = 5;
                      return 1;
                    }
                    if ( (v191 & ((int)v193 - 1)) != 0 )
                    {
                      *v187 = 3;
                      return 1;
                    }
                  }
                  goto LABEL_173;
                }
LABEL_386:
                *v187 = 2;
                return 1;
              }
              if ( !(_DWORD)v189 )
                goto LABEL_386;
            }
LABEL_173:
            *v187 = 0;
            *v187 = (*(__int64 (__fastcall **)(_BYTE *, __int64, __int64, __int64))(*(_QWORD *)v11 + 304LL))(
                      v11,
                      v189,
                      v191,
                      v193);
            return 1;
          }
          v320 = *((_QWORD **)a3 + 1);
LABEL_295:
          v192 = (unsigned int *)(v320 + 1);
          *((_QWORD *)a3 + 1) = v320 + 1;
          v191 = *v320;
          goto LABEL_296;
        }
        v319 = *((unsigned int **)a3 + 1);
      }
      v320 = v319 + 2;
      *((_QWORD *)a3 + 1) = v319 + 2;
      v189 = *v319;
      goto LABEL_295;
    case 25LL:
      v203 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v340 = *((_DWORD ***)a3 + 1);
        v341 = (__int64 *)(v340 + 1);
        *((_QWORD *)a3 + 1) = v340 + 1;
        v206 = *v340;
      }
      else
      {
        v204 = *((_QWORD *)a3 + 2);
        v205 = v203 + 8;
        *a3 = v205;
        v206 = *(_DWORD **)(v204 + v203);
        if ( (unsigned int)v205 <= 0x2F )
        {
          v207 = v203 + 16;
          *a3 = v207;
          v208 = *(_QWORD *)(v204 + v205);
          if ( (unsigned int)v207 <= 0x2F )
          {
            v209 = v203 + 24;
            *a3 = v209;
            v210 = *(_DWORD *)(v204 + v207);
            if ( (unsigned int)v209 <= 0x2F )
            {
              *a3 = v203 + 32;
              v211 = *(_DWORD *)(v204 + v209);
              if ( v203 + 32 <= 0x2F )
              {
                *a3 = v203 + 40;
                return (int)sub_B970(a1, v206, v208, v210, v211);
              }
              v344 = *((int **)a3 + 1);
LABEL_332:
              *((_QWORD *)a3 + 1) = v344 + 2;
              return (int)sub_B970(a1, v206, v208, v210, v211);
            }
            v343 = *((int **)a3 + 1);
LABEL_331:
            v344 = v343 + 2;
            *((_QWORD *)a3 + 1) = v343 + 2;
            v211 = *v343;
            goto LABEL_332;
          }
          v342 = *((unsigned int **)a3 + 1);
LABEL_330:
          v343 = (int *)(v342 + 2);
          *((_QWORD *)a3 + 1) = v342 + 2;
          v210 = *v342;
          goto LABEL_331;
        }
        v341 = *((__int64 **)a3 + 1);
      }
      v342 = (unsigned int *)(v341 + 1);
      *((_QWORD *)a3 + 1) = v341 + 1;
      v208 = *v341;
      goto LABEL_330;
    case 26LL:
      v194 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v321 = *((__int64 **)a3 + 1);
        v322 = v321 + 1;
        *((_QWORD *)a3 + 1) = v321 + 1;
        v197 = *v321;
      }
      else
      {
        v195 = *((_QWORD *)a3 + 2);
        v196 = v194 + 8;
        *a3 = v196;
        v197 = *(_QWORD *)(v195 + v194);
        if ( (unsigned int)v196 <= 0x2F )
        {
          v198 = v194 + 16;
          *a3 = v198;
          v199 = *(_QWORD *)(v195 + v196);
          if ( (unsigned int)v198 <= 0x2F )
          {
            v200 = v194 + 24;
            *a3 = v200;
            v201 = *(_DWORD *)(v195 + v198);
            if ( (unsigned int)v200 <= 0x2F )
            {
              v202 = (_QWORD *)(v200 + v195);
              *a3 = v194 + 32;
              return (*(int (__fastcall **)(_BYTE *, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 352LL))(
                       v11,
                       v197,
                       v199,
                       v201,
                       *v202);
            }
            v202 = *((_QWORD **)a3 + 1);
LABEL_301:
            *((_QWORD *)a3 + 1) = v202 + 1;
            return (*(int (__fastcall **)(_BYTE *, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 352LL))(
                     v11,
                     v197,
                     v199,
                     v201,
                     *v202);
          }
          v323 = *((_DWORD **)a3 + 1);
LABEL_300:
          v202 = v323 + 2;
          *((_QWORD *)a3 + 1) = v323 + 2;
          v201 = *v323;
          goto LABEL_301;
        }
        v322 = *((_QWORD **)a3 + 1);
      }
      v323 = v322 + 1;
      *((_QWORD *)a3 + 1) = v322 + 1;
      v199 = *v322;
      goto LABEL_300;
    case 27LL:
      v212 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v303 = *((__int64 **)a3 + 1);
        v304 = v303 + 1;
        *((_QWORD *)a3 + 1) = v303 + 1;
        v215 = *v303;
      }
      else
      {
        v213 = *((_QWORD *)a3 + 2);
        v214 = v212 + 8;
        *a3 = v214;
        v215 = *(_QWORD *)(v213 + v212);
        if ( (unsigned int)v214 <= 0x2F )
        {
          v216 = v212 + 16;
          *a3 = v216;
          v217 = *(_QWORD *)(v213 + v214);
          if ( (unsigned int)v216 <= 0x2F )
          {
            v218 = (_DWORD *)(v216 + v213);
            *a3 = v212 + 24;
            goto LABEL_191;
          }
          v218 = *((_DWORD **)a3 + 1);
LABEL_272:
          *((_QWORD *)a3 + 1) = v218 + 2;
LABEL_191:
          v6 = -1;
          v219 = *(__int64 (**)())(*(_QWORD *)v11 + 368LL);
          if ( v219 != sub_AB40 )
            return ((int (__fastcall *)(_BYTE *, __int64, __int64, bool))v219)(v11, v215, v217, *v218 != 0);
          return v6;
        }
        v304 = *((_QWORD **)a3 + 1);
      }
      v218 = v304 + 1;
      *((_QWORD *)a3 + 1) = v304 + 1;
      v217 = *v304;
      goto LABEL_272;
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
      v75 = *(void (**)())(*(_QWORD *)v11 + 376LL);
      if ( v75 != nullsub_3 )
        ((void (__fastcall *)(_BYTE *, _QWORD))v75)(v11, *v74);
      return 1;
    case 29LL:
      v169 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v324 = *((_DWORD **)a3 + 1);
        v325 = (__int64 *)(v324 + 2);
        *((_QWORD *)a3 + 1) = v324 + 2;
        v162 = *v324;
LABEL_303:
        v326 = v325 + 1;
        *((_QWORD *)a3 + 1) = v325 + 1;
        v164 = *v325;
LABEL_304:
        v167 = v326 + 1;
        *((_QWORD *)a3 + 1) = v326 + 1;
        v166 = *v326;
        goto LABEL_305;
      }
      v170 = *((_QWORD *)a3 + 2);
      v171 = v169 + 8;
      *a3 = v171;
      v162 = *(_DWORD *)(v170 + v169);
      if ( (unsigned int)v171 > 0x2F )
      {
        v325 = *((__int64 **)a3 + 1);
        goto LABEL_303;
      }
      v172 = v169 + 16;
      *a3 = v172;
      v164 = *(_QWORD *)(v170 + v171);
      if ( (unsigned int)v172 > 0x2F )
      {
        v326 = *((__int64 **)a3 + 1);
        goto LABEL_304;
      }
      v173 = v169 + 24;
      *a3 = v173;
      v166 = *(_QWORD *)(v170 + v172);
      if ( (unsigned int)v173 <= 0x2F )
      {
        v167 = (_QWORD *)(v173 + v170);
        *a3 = v169 + 32;
        goto LABEL_149;
      }
      v167 = *((_QWORD **)a3 + 1);
LABEL_305:
      *((_QWORD *)a3 + 1) = v167 + 1;
LABEL_149:
      v6 = 0;
      v168 = *(__int64 (**)())(*(_QWORD *)v11 + 384LL);
      if ( v168 != sub_AB60 )
        return ((int (__fastcall *)(_BYTE *, _QWORD, __int64, __int64, _QWORD))v168)(v11, v162, v164, v166, *v167);
      return v6;
    case 30LL:
      v159 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v337 = *((_DWORD **)a3 + 1);
        v338 = (__int64 *)(v337 + 2);
        *((_QWORD *)a3 + 1) = v337 + 2;
        v162 = *v337;
      }
      else
      {
        v160 = *((_QWORD *)a3 + 2);
        v161 = v159 + 8;
        *a3 = v161;
        v162 = *(_DWORD *)(v160 + v159);
        if ( (unsigned int)v161 <= 0x2F )
        {
          v163 = v159 + 16;
          *a3 = v163;
          v164 = *(_QWORD *)(v160 + v161);
          if ( (unsigned int)v163 <= 0x2F )
          {
            v165 = v159 + 24;
            *a3 = v165;
            v166 = *(_QWORD *)(v160 + v163);
            if ( (unsigned int)v165 <= 0x2F )
            {
              v167 = (_QWORD *)(v165 + v160);
              *a3 = v159 + 32;
              goto LABEL_142;
            }
            v167 = *((_QWORD **)a3 + 1);
LABEL_327:
            *((_QWORD *)a3 + 1) = v167 + 1;
LABEL_142:
            v6 = 0;
            v168 = *(__int64 (**)())(*(_QWORD *)v11 + 392LL);
            if ( v168 != sub_AB70 )
              return ((int (__fastcall *)(_BYTE *, _QWORD, __int64, __int64, _QWORD))v168)(v11, v162, v164, v166, *v167);
            return v6;
          }
          v339 = *((__int64 **)a3 + 1);
LABEL_326:
          v167 = v339 + 1;
          *((_QWORD *)a3 + 1) = v339 + 1;
          v166 = *v339;
          goto LABEL_327;
        }
        v338 = *((__int64 **)a3 + 1);
      }
      v339 = v338 + 1;
      *((_QWORD *)a3 + 1) = v338 + 1;
      v164 = *v338;
      goto LABEL_326;
    case 31LL:
      v174 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v366 = *((_QWORD ***)a3 + 1);
        v367 = (__int64 *)(v366 + 1);
        *((_QWORD *)a3 + 1) = v366 + 1;
        v177 = *v366;
      }
      else
      {
        v175 = *((_QWORD *)a3 + 2);
        v176 = v174 + 8;
        *a3 = v176;
        v177 = *(__int64 **)(v175 + v174);
        if ( (unsigned int)v176 <= 0x2F )
        {
          v178 = v174 + 16;
          *a3 = v178;
          v179 = *(_QWORD *)(v175 + v176);
          if ( (unsigned int)v178 <= 0x2F )
          {
            v180 = v174 + 24;
            *a3 = v180;
            v181 = *(_QWORD *)(v175 + v178);
            if ( (unsigned int)v180 <= 0x2F )
            {
              v182 = (unsigned int *)(v180 + v175);
              *a3 = v174 + 32;
              goto LABEL_156;
            }
            v182 = *((unsigned int **)a3 + 1);
LABEL_367:
            *((_QWORD *)a3 + 1) = v182 + 2;
LABEL_156:
            v183 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 248LL);
            if ( v183 != sub_AB30 )
              v179 = ((__int64 (__fastcall *)(_BYTE *, __int64, __int64, _QWORD))v183)(v11, v179, v181, *v182);
            *v177 = v179;
            return 1;
          }
          v368 = *((_QWORD **)a3 + 1);
LABEL_366:
          v182 = (unsigned int *)(v368 + 1);
          *((_QWORD *)a3 + 1) = v368 + 1;
          v181 = *v368;
          goto LABEL_367;
        }
        v367 = *((__int64 **)a3 + 1);
      }
      v368 = v367 + 1;
      *((_QWORD *)a3 + 1) = v367 + 1;
      v179 = *v367;
      goto LABEL_366;
    case 33LL:
      v76 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v369 = *((_DWORD **)a3 + 1);
        v80 = v369 + 2;
        *((_QWORD *)a3 + 1) = v369 + 2;
        v79 = *v369;
      }
      else
      {
        v77 = *((_QWORD *)a3 + 2);
        v78 = v76 + 8;
        *a3 = v78;
        v79 = *(_DWORD *)(v77 + v76);
        if ( (unsigned int)v78 <= 0x2F )
        {
          v80 = (_QWORD *)(v78 + v77);
          *a3 = v76 + 16;
          goto LABEL_74;
        }
        v80 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v80 + 1;
LABEL_74:
      if ( (*(_BYTE *)(dbg + 37LL) & 8) == 0 )
        return 0;
      v81 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)v11 + 416LL))(v11, v79, *v80);
      if ( (unsigned int)(v81 + 1) > 1 )
        return v81;
      *(_QWORD *)(dbg + 32LL) &= ~0x80000000000uLL;
      return 0;
    case 34LL:
      if ( (a1[157] & 0x10) == 0 )
        return 0;
      v94 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v381 = *((_QWORD ***)a3 + 1);
        *((_QWORD *)a3 + 1) = v381 + 1;
        v97 = *v381;
      }
      else
      {
        v95 = *((_QWORD *)a3 + 2);
        v96 = v94 + 8;
        *a3 = v96;
        v97 = *(_QWORD **)(v95 + v94);
        if ( (unsigned int)v96 <= 0x2F )
        {
          v98 = v94 + 16;
          *a3 = v98;
          v99 = *(_QWORD *)(v95 + v96);
          if ( (unsigned int)v98 <= 0x2F )
          {
            v100 = v94 + 24;
            *a3 = v100;
            v101 = *(_DWORD *)(v95 + v98);
            if ( (unsigned int)v100 <= 0x2F )
            {
              *a3 = v94 + 32;
              v102 = *(_QWORD *)(v95 + v100);
              if ( v94 + 32 <= 0x2F )
              {
                v103 = v94 + 40;
                if ( (unsigned int)v103 <= 0x2F )
                {
                  *a3 = v94 + 48;
                  v104 = *(_QWORD *)(v95 + v103);
                  goto LABEL_97;
                }
                *a3 = v103;
LABEL_394:
                v385 = *((__int64 **)a3 + 1);
                *((_QWORD *)a3 + 1) = v385 + 1;
                v104 = *v385;
LABEL_97:
                v105 = *((__int64 **)a3 + 1);
                *((_QWORD *)a3 + 1) = v105 + 1;
                v106 = *v105;
                *((_QWORD *)a3 + 1) = v105 + 2;
                v107 = v105[1];
                *((_QWORD *)a3 + 1) = v105 + 3;
                v108 = v105[2];
                *((_QWORD *)a3 + 1) = v105 + 4;
                v109 = v105[3];
                *((_QWORD *)a3 + 1) = v105 + 5;
                *v97 = (*(__int64 (__fastcall **)(_BYTE *, __int64, _QWORD, _QWORD, __int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 424LL))(
                         v11,
                         v99,
                         v101,
                         (unsigned int)*(_QWORD *)(v102 + 56),
                         v104,
                         v106,
                         v107,
                         v108,
                         v109,
                         *((unsigned int *)v105 + 8));
                return 1;
              }
LABEL_393:
              *((_QWORD *)a3 + 1) += 8LL;
              goto LABEL_394;
            }
LABEL_392:
            v384 = *((__int64 **)a3 + 1);
            *((_QWORD *)a3 + 1) = v384 + 1;
            v102 = *v384;
            goto LABEL_393;
          }
LABEL_391:
          v383 = *((unsigned int **)a3 + 1);
          *((_QWORD *)a3 + 1) = v383 + 2;
          v101 = *v383;
          goto LABEL_392;
        }
      }
      v382 = *((__int64 **)a3 + 1);
      *((_QWORD *)a3 + 1) = v382 + 1;
      v99 = *v382;
      goto LABEL_391;
    case 35LL:
      if ( (a1[157] & 0x10) == 0 )
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
      return (*(int (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v11 + 432LL))(v11, *v72);
    case 36LL:
      v142 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v306 = *((_DWORD **)a3 + 1);
        v307 = (__int64 *)(v306 + 2);
        *((_QWORD *)a3 + 1) = v306 + 2;
        v145 = *v306;
      }
      else
      {
        v143 = *((_QWORD *)a3 + 2);
        v144 = v142 + 8;
        *a3 = v144;
        v145 = *(_DWORD *)(v143 + v142);
        if ( (unsigned int)v144 <= 0x2F )
        {
          v146 = v142 + 16;
          *a3 = v146;
          v147 = *(_QWORD *)(v143 + v144);
          if ( (unsigned int)v146 <= 0x2F )
          {
            v148 = (_QWORD *)(v146 + v143);
            *a3 = v142 + 24;
            return (*(int (__fastcall **)(_BYTE *, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 360LL))(
                     v11,
                     v145,
                     v147,
                     *v148);
          }
          v148 = *((_QWORD **)a3 + 1);
LABEL_278:
          *((_QWORD *)a3 + 1) = v148 + 1;
          return (*(int (__fastcall **)(_BYTE *, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 360LL))(
                   v11,
                   v145,
                   v147,
                   *v148);
        }
        v307 = *((__int64 **)a3 + 1);
      }
      v148 = v307 + 1;
      *((_QWORD *)a3 + 1) = v307 + 1;
      v147 = *v307;
      goto LABEL_278;
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
                return (*(int (__fastcall **)(_BYTE *, _QWORD, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 400LL))(
                         v11,
                         v63,
                         v65,
                         v67,
                         v69,
                         *v70);
              }
              v70 = *((_QWORD **)a3 + 1);
LABEL_348:
              *((_QWORD *)a3 + 1) = v70 + 1;
              return (*(int (__fastcall **)(_BYTE *, _QWORD, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 400LL))(
                       v11,
                       v63,
                       v65,
                       v67,
                       v69,
                       *v70);
            }
            v357 = *((__int64 **)a3 + 1);
LABEL_347:
            v70 = v357 + 1;
            *((_QWORD *)a3 + 1) = v357 + 1;
            v69 = *v357;
            goto LABEL_348;
          }
          v356 = *((__int64 **)a3 + 1);
LABEL_346:
          v357 = v356 + 1;
          *((_QWORD *)a3 + 1) = v356 + 1;
          v67 = *v356;
          goto LABEL_347;
        }
        v355 = *((__int64 **)a3 + 1);
      }
      v356 = v355 + 1;
      *((_QWORD *)a3 + 1) = v355 + 1;
      v65 = *v355;
      goto LABEL_346;
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
LABEL_355:
          *((_QWORD *)a3 + 1) = v58 + 2;
LABEL_54:
          v59 = *(__int64 (**)())(*(_QWORD *)v11 + 520LL);
          if ( v59 != sub_AB80 )
            return ((unsigned __int8 (__fastcall *)(_BYTE *, _QWORD, bool, _QWORD))v59)(v11, v55, v57, *v58);
          return 0;
        }
        v360 = *((_DWORD **)a3 + 1);
      }
      v58 = v360 + 2;
      *((_QWORD *)a3 + 1) = v360 + 2;
      v57 = *v360 != 0;
      goto LABEL_355;
    case 39LL:
      v46 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v329 = *((unsigned int **)a3 + 1);
        v50 = v329 + 2;
        *((_QWORD *)a3 + 1) = v329 + 2;
        v49 = *v329;
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
      if ( v51 == sub_AB90 )
        return 0;
      return ((unsigned __int8 (__fastcall *)(_BYTE *, _QWORD, _QWORD))v51)(v11, v49, *v50);
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
      return (*(int (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v11 + 536LL))(v11, *v45);
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
      if ( v43 == sub_ABA0 )
        return 0;
      return ((unsigned __int8 (__fastcall *)(_BYTE *, __int64, _QWORD))v43)(v11, v41, *v42);
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
LABEL_338:
                *((_QWORD *)a3 + 1) = v37 + 1;
LABEL_34:
                if ( v34 )
                {
                  v6 = (*(int (__fastcall **)(_BYTE *, __int64, __int64, const char *, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 576LL))(
                         v11,
                         v28,
                         v30,
                         v32,
                         v34,
                         v36,
                         *v37);
                  if ( (*(_DWORD *)debug & 0x10000) != 0 )
                    sub_AF10((__int64)"debugger_t::ev_bin_search(%a, %a) -> %d(%s) ea %a\n", a4, a5, v30, v32, a6);
                  return v6;
                }
                return 0;
              }
              v349 = *((unsigned int **)a3 + 1);
LABEL_337:
              v37 = v349 + 2;
              *((_QWORD *)a3 + 1) = v349 + 2;
              v36 = *v349;
              goto LABEL_338;
            }
            v348 = *((_QWORD **)a3 + 1);
LABEL_336:
            v349 = (unsigned int *)(v348 + 1);
            *((_QWORD *)a3 + 1) = v348 + 1;
            v34 = *v348;
            goto LABEL_337;
          }
          v347 = *((const char ***)a3 + 1);
LABEL_335:
          v348 = v347 + 1;
          *((_QWORD *)a3 + 1) = v347 + 1;
          v32 = *v347;
          goto LABEL_336;
        }
        v346 = *((_QWORD **)a3 + 1);
      }
      v347 = (const char **)(v346 + 1);
      *((_QWORD *)a3 + 1) = v346 + 1;
      v30 = *v346;
      goto LABEL_335;
    case 43LL:
      if ( !a1[208] )
        return 0;
      if ( (unsigned int)*a3 > 0x2F )
        *((_QWORD *)a3 + 1) += 8LL;
      else
        *a3 += 8;
      v24 = *(__int64 (**)())(*(_QWORD *)v11 + 584LL);
      if ( v24 == sub_ABC0 || (v386 = v24(), v386 >= 0) )
      {
        serialize_dynamic_register_set();
        deserialize_dynamic_register_set();
        return 1;
      }
      return v386;
    case 44LL:
      v12 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v350 = *((_QWORD ***)a3 + 1);
        v351 = v350 + 1;
        *((_QWORD *)a3 + 1) = v350 + 1;
        v15 = *v350;
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
            v388 = *(_DWORD *)(v13 + v16);
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
LABEL_343:
              *((_QWORD *)a3 + 1) = v21 + 1;
LABEL_13:
              v22 = *v21;
              if ( (*(_DWORD *)debug & 0x10000) != 0 )
                sub_AF10((__int64)"debugger_t::ev_set_dbg_options(%s)\n", (const char *)v17);
              v23 = (*(__int64 (__fastcall **)(_BYTE *, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 64LL))(
                      a1,
                      v17,
                      v388,
                      v20,
                      v22);
              if ( !v17 || *(_BYTE *)v17 != 32 || (v6 = v23 != 0, *(_BYTE *)(v17 + 1)) )
              {
                if ( v15 )
                  *v15 = v23;
                sub_BFC0((__int64)a1, a1[208]);
                return 1;
              }
              return v6;
            }
            v353 = *((_DWORD **)a3 + 1);
LABEL_342:
            v21 = (__int64 *)(v353 + 2);
            *((_QWORD *)a3 + 1) = v353 + 2;
            v20 = *v353;
            goto LABEL_343;
          }
          v352 = *((unsigned int **)a3 + 1);
LABEL_341:
          v353 = v352 + 2;
          *((_QWORD *)a3 + 1) = v352 + 2;
          v388 = *v352;
          goto LABEL_342;
        }
        v351 = *((_QWORD **)a3 + 1);
      }
      v352 = (unsigned int *)(v351 + 1);
      *((_QWORD *)a3 + 1) = v351 + 1;
      v17 = *v351;
      goto LABEL_341;
    default:
      return 0;
  }
}

