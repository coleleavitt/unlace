__int64 __fastcall sub_10500(__int64 a1, __int64 a2, int *a3, double a4, double a5, double a6)
{
  __int64 v6; // r15
  int v7; // ecx
  __int64 (*v10)(void); // rax
  unsigned int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 *v14; // r12
  __int64 v15; // rsi
  __int64 v16; // r13
  __int64 v17; // rdi
  __int64 v18; // rsi
  unsigned int v19; // r14d
  __int64 *v20; // rax
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 (*v23)(); // rax
  unsigned int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // r13
  __int64 v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rsi
  const char *v31; // r12
  __int64 v32; // rdi
  __int64 v33; // r8
  __int64 v34; // rsi
  __int64 v35; // r9
  _QWORD *v36; // rax
  unsigned int v37; // ecx
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rdi
  _QWORD *v41; // rax
  __int64 (*v42)(); // rcx
  unsigned int v43; // eax
  _QWORD *v44; // rcx
  unsigned int v45; // ecx
  __int64 v46; // rax
  __int64 v47; // rsi
  unsigned int v48; // edi
  unsigned int *v49; // rax
  __int64 (*v50)(); // rcx
  unsigned int v51; // ecx
  __int64 v52; // rax
  __int64 v53; // rdi
  unsigned int v54; // r9d
  __int64 v55; // rsi
  bool v56; // di
  unsigned int *v57; // rax
  __int64 (*v58)(); // r8
  unsigned int v59; // ecx
  __int64 v60; // rax
  __int64 v61; // rdi
  unsigned int v62; // r10d
  __int64 v63; // rsi
  __int64 v64; // r11
  __int64 v65; // rdi
  __int64 v66; // rbx
  __int64 v67; // rsi
  __int64 v68; // r8
  _QWORD *v69; // rax
  __int64 (*v70)(); // r12
  unsigned int v71; // ecx
  unsigned int *v72; // rax
  unsigned int v73; // eax
  unsigned int *v74; // rcx
  unsigned int v75; // ecx
  __int64 v76; // rax
  __int64 v77; // rsi
  unsigned int v78; // edi
  _QWORD *v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 (*v82)(); // r8
  unsigned int v83; // eax
  _DWORD *v84; // rcx
  __int64 (*v85)(); // rax
  unsigned int v86; // ecx
  __int64 v87; // rax
  __int64 v88; // rdi
  _DWORD *v89; // rbx
  __int64 v90; // rsi
  __int64 v91; // rdi
  unsigned int *v92; // rax
  unsigned int v93; // eax
  _QWORD *v94; // rcx
  unsigned int v95; // eax
  __int64 v96; // rsi
  __int64 v97; // rcx
  _QWORD *v98; // rbx
  __int64 v99; // r8
  __int64 v100; // rdi
  __int64 v101; // rcx
  unsigned int v102; // r10d
  __int64 v103; // r11
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 *v106; // rax
  __int64 v107; // r9
  __int64 v108; // rcx
  __int64 v109; // rsi
  __int64 v110; // r12
  unsigned int v111; // ecx
  __int64 v112; // rax
  __int64 v113; // rsi
  __int64 v114; // r9
  __int64 v115; // rdi
  unsigned int v116; // r10d
  __int64 v117; // rsi
  unsigned int v118; // edi
  _QWORD *v119; // rax
  unsigned int v120; // ecx
  __int64 v121; // rax
  __int64 v122; // rsi
  unsigned int v123; // r9d
  __int64 v124; // rdi
  unsigned int v125; // r10d
  __int64 v126; // rsi
  __int64 v127; // rdi
  _QWORD *v128; // rax
  unsigned int v129; // eax
  unsigned int *v130; // rcx
  unsigned int v131; // eax
  unsigned int *v132; // rcx
  unsigned int v133; // ecx
  __int64 v134; // rax
  __int64 v135; // rsi
  bool v136; // bl
  _QWORD *v137; // rax
  unsigned int v138; // ecx
  __int64 v139; // rax
  __int64 v140; // rsi
  __int64 v141; // rdi
  unsigned int *v142; // rax
  unsigned int v143; // ecx
  __int64 v144; // rax
  __int64 v145; // rdi
  unsigned int v146; // r8d
  __int64 v147; // rsi
  __int64 v148; // rdi
  _QWORD *v149; // rax
  unsigned int v150; // ecx
  __int64 v151; // rax
  __int64 v152; // rsi
  unsigned int v153; // r9d
  __int64 v154; // rdi
  unsigned int v155; // r10d
  __int64 v156; // rsi
  unsigned int v157; // edi
  _QWORD *v158; // rax
  int v159; // eax
  unsigned int v160; // ecx
  __int64 v161; // rax
  __int64 v162; // rsi
  unsigned int v163; // r9d
  __int64 v164; // rdi
  __int64 v165; // r10
  __int64 v166; // rsi
  __int64 v167; // rdi
  _QWORD *v168; // rax
  unsigned int v169; // ecx
  __int64 v170; // rax
  __int64 v171; // rsi
  unsigned int v172; // r9d
  __int64 v173; // rdi
  __int64 v174; // r10
  __int64 v175; // rsi
  __int64 v176; // rdi
  _QWORD *v177; // rax
  unsigned int v178; // ecx
  __int64 v179; // rax
  __int64 v180; // rsi
  _QWORD *v181; // rbx
  __int64 v182; // rdi
  __int64 v183; // r8
  __int64 v184; // rsi
  __int64 v185; // rdi
  unsigned int *v186; // rax
  unsigned int v187; // ecx
  __int64 v188; // rax
  __int64 v189; // rsi
  _DWORD *v190; // r12
  __int64 v191; // rdi
  unsigned int v192; // r13d
  __int64 v193; // rsi
  __int64 v194; // r14
  unsigned int *v195; // rax
  unsigned int v196; // r15d
  int v197; // eax
  unsigned int v198; // ecx
  __int64 v199; // rax
  __int64 v200; // rdi
  __int64 *v201; // rbx
  __int64 v202; // rsi
  __int64 v203; // r9
  __int64 v204; // rdi
  __int64 v205; // r10
  __int64 v206; // rsi
  __int64 v207; // rdi
  _QWORD *v208; // rax
  __int64 v209; // rax
  __int64 v210; // rdx
  unsigned int v211; // ecx
  __int64 v212; // rax
  __int64 v213; // rdi
  __int64 v214; // rsi
  __int64 v215; // r9
  __int64 v216; // rdi
  __int64 v217; // r10
  __int64 v218; // rsi
  __int64 v219; // rdi
  _QWORD *v220; // rax
  unsigned int v221; // ecx
  __int64 v222; // rax
  __int64 v223; // rsi
  __int64 v224; // rdi
  _QWORD *v225; // rax
  unsigned int v226; // eax
  _QWORD *v227; // rcx
  unsigned int v228; // eax
  __int64 *v229; // rcx
  unsigned int v230; // ecx
  __int64 v231; // rax
  __int64 v232; // rsi
  unsigned int v233; // r9d
  __int64 v234; // rdi
  unsigned int v235; // r10d
  __int64 v236; // rsi
  __int64 v237; // rdi
  _QWORD *v238; // rax
  unsigned int v239; // ecx
  __int64 v240; // rax
  __int64 v241; // rsi
  __int64 v242; // rdi
  unsigned int v243; // r12d
  __int64 v244; // rsi
  __int64 v245; // r13
  __int64 *v246; // rax
  __int64 v247; // r14
  const char *v248; // rsi
  unsigned int v249; // eax
  __int64 v250; // rcx
  __int64 v251; // rsi
  __int64 v252; // r10
  __int64 v253; // rdi
  __int64 v254; // r11
  __int64 v255; // rsi
  __int64 v256; // r8
  __int64 v257; // rdi
  __int64 v258; // r9
  __int64 v259; // rsi
  __int64 v260; // rdi
  __int64 *v261; // rax
  __int64 v262; // rsi
  __int64 v263; // r12
  int v264; // eax
  unsigned int v265; // ecx
  __int64 v266; // rax
  __int64 v267; // rsi
  __int64 v268; // r9
  __int64 v269; // rdi
  __int64 v270; // r10
  __int64 v271; // rsi
  unsigned int v272; // edi
  _QWORD *v273; // rax
  unsigned int v274; // ecx
  __int64 v275; // rax
  __int64 v276; // rdi
  _DWORD *v277; // r10
  __int64 v278; // rsi
  __int64 v279; // r11
  __int64 v280; // rdi
  unsigned int v281; // r14d
  __int64 v282; // rsi
  unsigned int v283; // r8d
  __int64 *v284; // rax
  unsigned int v285; // eax
  _QWORD *v286; // rcx
  unsigned int v287; // eax
  _QWORD *v288; // rcx
  unsigned int v289; // ecx
  __int64 v290; // rax
  __int64 v291; // rsi
  unsigned int v292; // edi
  unsigned int *v293; // rax
  unsigned int v294; // ecx
  __int64 v295; // rax
  __int64 v296; // rsi
  __int64 v297; // rdi
  _QWORD *v298; // rax
  const char *v299; // rsi
  unsigned int v300; // ecx
  __int64 v301; // rax
  __int64 v302; // rdi
  __int64 v303; // r8
  __int64 v304; // rsi
  __int64 v305; // rdi
  _DWORD *v306; // rax
  __int64 v307; // rax
  __int64 *v308; // rcx
  __int64 *v309; // rax
  _QWORD *v310; // rcx
  __int64 *v311; // rax
  __int64 *v312; // rcx
  _QWORD *v313; // rax
  unsigned int *v314; // rcx
  _QWORD *v315; // rax
  unsigned int *v316; // rcx
  _DWORD *v317; // rax
  __int64 *v318; // rcx
  unsigned int *v319; // rcx
  _DWORD *v320; // rax
  __int64 *v321; // rcx
  _DWORD *v322; // rcx
  _DWORD **v323; // rax
  __int64 *v324; // rcx
  unsigned int *v325; // rax
  unsigned int *v326; // rcx
  __int64 *v327; // rcx
  _QWORD *v328; // rax
  const char **v329; // rcx
  _QWORD *v330; // rax
  unsigned int *v331; // rcx
  _QWORD **v332; // rax
  _QWORD *v333; // rcx
  unsigned int *v334; // rax
  _DWORD *v335; // rcx
  _DWORD *v336; // rax
  __int64 *v337; // rcx
  __int64 *v338; // rax
  __int64 *v339; // rcx
  __int64 *v340; // rcx
  unsigned int *v341; // rax
  _DWORD *v342; // rcx
  _QWORD *v343; // rcx
  unsigned int *v344; // rcx
  unsigned int *v345; // rax
  _DWORD *v346; // rcx
  _DWORD **v347; // rax
  _QWORD *v348; // rcx
  unsigned int *v349; // rcx
  _QWORD *v350; // rcx
  unsigned int *v351; // rax
  _DWORD *v352; // rcx
  unsigned int *v353; // rcx
  _DWORD *v354; // rax
  __int64 *v355; // rcx
  _DWORD *v356; // rcx
  _DWORD *v357; // rcx
  __int64 *v358; // rax
  __int64 *v359; // rcx
  _QWORD **v360; // rax
  __int64 *v361; // rcx
  __int64 *v362; // rax
  __int64 *v363; // rcx
  const char **v364; // rcx
  unsigned int *v365; // rax
  __int64 *v366; // rcx
  _DWORD **v367; // rcx
  unsigned int *v368; // rax
  __int64 *v369; // rcx
  _DWORD *v370; // rcx
  __int64 *v371; // rax
  __int64 *v372; // rcx
  _QWORD **v373; // rcx
  __int64 *v374; // rax
  _QWORD *v375; // rcx
  __int64 *v376; // rcx
  _QWORD *v377; // rax
  _DWORD *v378; // rcx
  _QWORD **v379; // rax
  __int64 *v380; // rcx
  __int64 *v381; // rax
  __int64 *v382; // rcx
  __int64 *v383; // rcx
  unsigned int *v384; // rcx
  _QWORD **v385; // rax
  __int64 *v386; // rax
  unsigned int *v387; // rax
  __int64 *v388; // rax
  __int64 *v389; // rax
  int v390; // ebx
  int v391; // eax
  int *v392; // [rsp+8h] [rbp-78h]
  __int64 v393; // [rsp+18h] [rbp-68h]
  unsigned int v394; // [rsp+18h] [rbp-68h]
  const char *v395; // [rsp+18h] [rbp-68h]
  const char *v396; // [rsp+30h] [rbp-50h] BYREF
  __int128 v397; // [rsp+38h] [rbp-48h]
  unsigned __int64 v398; // [rsp+48h] [rbp-38h]

  v6 = 0;
  v7 = *(_DWORD *)(a1 + 136);
  v398 = __readfsqword(0x28u);
  if ( *(_DWORD *)(dbg + 16LL) != v7 || *(_QWORD *)(dbg + 32LL) != *(_QWORD *)(a1 + 152) )
    return v6;
  v10 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
  if ( (char *)v10 == (char *)sub_CB10 )
  {
    v393 = a1 + 488;
  }
  else
  {
    v392 = a3;
    v307 = v10();
    a3 = v392;
    v393 = v307;
  }
  switch ( a2 )
  {
    case 0LL:
      v239 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v364 = *((const char ***)a3 + 1);
        v365 = (unsigned int *)(v364 + 1);
        *((_QWORD *)a3 + 1) = v364 + 1;
        v395 = *v364;
      }
      else
      {
        v240 = *((_QWORD *)a3 + 2);
        v241 = v239 + 8;
        *a3 = v241;
        v395 = *(const char **)(v240 + v239);
        if ( (unsigned int)v241 <= 0x2F )
        {
          v242 = v239 + 16;
          *a3 = v242;
          v243 = *(_DWORD *)(v240 + v241);
          if ( (unsigned int)v242 <= 0x2F )
          {
            v244 = v239 + 24;
            *a3 = v244;
            v245 = *(_QWORD *)(v240 + v242);
            if ( (unsigned int)v244 <= 0x2F )
            {
              v246 = (__int64 *)(v244 + v240);
              *a3 = v239 + 32;
              goto LABEL_201;
            }
            while ( 1 )
            {
              v246 = *((__int64 **)a3 + 1);
LABEL_345:
              *((_QWORD *)a3 + 1) = v246 + 1;
LABEL_201:
              v247 = *v246;
              if ( *v246 )
                break;
              if ( under_debugger )
                BUG();
              interr();
            }
            if ( (*(_DWORD *)debug & 0x10000) != 0 )
            {
              v397 = 0;
              v396 = nullptr;
              get_dbctx_id();
              sub_F710((__int64 *)&v396);
              v248 = s;
              if ( (_QWORD)v397 )
                v248 = v396;
              sub_D8A0((__int64)"%s: debugger_t::ev_init_debugger (%s,%d,)\n", v248, v395, v243);
              if ( v396 )
              {
                *(_QWORD *)&v397 = 0;
                qfree();
              }
            }
            return (int)sub_FDF0(a1, (__int64)v395, v243, v245, v247);
          }
          v366 = *((__int64 **)a3 + 1);
LABEL_344:
          v246 = v366 + 1;
          *((_QWORD *)a3 + 1) = v366 + 1;
          v245 = *v366;
          goto LABEL_345;
        }
        v365 = *((unsigned int **)a3 + 1);
      }
      v366 = (__int64 *)(v365 + 2);
      *((_QWORD *)a3 + 1) = v365 + 2;
      v243 = *v365;
      goto LABEL_344;
    case 1LL:
      if ( (*(_DWORD *)debug & 0x10000) != 0 )
      {
        v396 = nullptr;
        v397 = 0;
        get_dbctx_id();
        sub_F710((__int64 *)&v396);
        v299 = s;
        if ( (_QWORD)v397 )
          v299 = v396;
        sub_D8A0((__int64)"%s: debugger_t::ev_term_debugger\n", v299);
        if ( v396 )
        {
          *(_QWORD *)&v397 = 0;
          qfree();
        }
      }
      return (int)sub_F5E0((__int64 *)a1);
    case 2LL:
      v294 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v308 = *((__int64 **)a3 + 1);
        v298 = v308 + 1;
        *((_QWORD *)a3 + 1) = v308 + 1;
        v297 = *v308;
      }
      else
      {
        v295 = *((_QWORD *)a3 + 2);
        v296 = v294 + 8;
        *a3 = v296;
        v297 = *(_QWORD *)(v295 + v294);
        if ( (unsigned int)v296 <= 0x2F )
        {
          v298 = (_QWORD *)(v296 + v295);
          *a3 = v294 + 16;
          return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v393 + 72LL))(v393, v297, *v298);
        }
        v298 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v298 + 1;
      return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v393 + 72LL))(v393, v297, *v298);
    case 3LL:
      v249 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v311 = *((__int64 **)a3 + 1);
        v312 = v311 + 1;
        *((_QWORD *)a3 + 1) = v311 + 1;
        v252 = *v311;
      }
      else
      {
        v250 = *((_QWORD *)a3 + 2);
        v251 = v249 + 8;
        *a3 = v251;
        v252 = *(_QWORD *)(v250 + v249);
        if ( (unsigned int)v251 <= 0x2F )
        {
          v253 = v249 + 16;
          *a3 = v253;
          v254 = *(_QWORD *)(v250 + v251);
          if ( (unsigned int)v253 <= 0x2F )
          {
            v255 = v249 + 24;
            *a3 = v255;
            v256 = *(_QWORD *)(v250 + v253);
            if ( (unsigned int)v255 <= 0x2F )
            {
              v257 = v249 + 32;
              *a3 = v257;
              v258 = *(unsigned int *)(v250 + v255);
              if ( (unsigned int)v257 <= 0x2F )
              {
                v259 = v249 + 40;
                *a3 = v259;
                v260 = *(_QWORD *)(v250 + v257);
                if ( (unsigned int)v259 <= 0x2F )
                {
                  *a3 = v249 + 48;
                  v261 = *((__int64 **)a3 + 1);
                  v262 = *(unsigned int *)(v250 + v259);
                  goto LABEL_215;
                }
                v316 = *((unsigned int **)a3 + 1);
LABEL_267:
                v261 = (__int64 *)(v316 + 2);
                *((_QWORD *)a3 + 1) = v316 + 2;
                v262 = *v316;
LABEL_215:
                *((_QWORD *)a3 + 1) = v261 + 1;
                v263 = *v261;
                *((_QWORD *)a3 + 1) = v261 + 2;
                v264 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v393 + 128LL))(
                         v393,
                         v252,
                         v254,
                         v261[1],
                         v256,
                         v258,
                         v260,
                         v262,
                         v263);
                v6 = v264;
                if ( v264 > 0 )
                  goto LABEL_136;
                return v6;
              }
              v315 = *((_QWORD **)a3 + 1);
LABEL_266:
              v316 = (unsigned int *)(v315 + 1);
              *((_QWORD *)a3 + 1) = v315 + 1;
              v260 = *v315;
              goto LABEL_267;
            }
            v314 = *((unsigned int **)a3 + 1);
LABEL_265:
            v315 = v314 + 2;
            *((_QWORD *)a3 + 1) = v314 + 2;
            v258 = *v314;
            goto LABEL_266;
          }
          v313 = *((_QWORD **)a3 + 1);
LABEL_264:
          v314 = (unsigned int *)(v313 + 1);
          *((_QWORD *)a3 + 1) = v313 + 1;
          v256 = *v313;
          goto LABEL_265;
        }
        v312 = *((__int64 **)a3 + 1);
      }
      v313 = v312 + 1;
      *((_QWORD *)a3 + 1) = v312 + 1;
      v254 = *v312;
      goto LABEL_264;
    case 4LL:
      v150 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v344 = *((unsigned int **)a3 + 1);
        v345 = v344 + 2;
        *((_QWORD *)a3 + 1) = v344 + 2;
        v153 = *v344;
      }
      else
      {
        v151 = *((_QWORD *)a3 + 2);
        v152 = v150 + 8;
        *a3 = v152;
        v153 = *(_DWORD *)(v151 + v150);
        if ( (unsigned int)v152 <= 0x2F )
        {
          v154 = v150 + 16;
          *a3 = v154;
          v155 = *(_DWORD *)(v151 + v152);
          if ( (unsigned int)v154 <= 0x2F )
          {
            v156 = v150 + 24;
            *a3 = v156;
            v157 = *(_DWORD *)(v151 + v154);
            if ( (unsigned int)v156 <= 0x2F )
            {
              v158 = (_QWORD *)(v156 + v151);
              *a3 = v150 + 32;
              goto LABEL_135;
            }
            v158 = *((_QWORD **)a3 + 1);
LABEL_313:
            *((_QWORD *)a3 + 1) = v158 + 1;
LABEL_135:
            v159 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v393 + 144LL))(
                     v393,
                     v153,
                     v155,
                     v157,
                     *v158);
            v6 = v159;
            if ( v159 > 0 )
LABEL_136:
              sub_FA50((__int64 *)a1, 1u);
            return v6;
          }
          v346 = *((_DWORD **)a3 + 1);
LABEL_312:
          v158 = v346 + 2;
          *((_QWORD *)a3 + 1) = v346 + 2;
          v157 = *v346;
          goto LABEL_313;
        }
        v345 = *((unsigned int **)a3 + 1);
      }
      v346 = v345 + 2;
      *((_QWORD *)a3 + 1) = v345 + 2;
      v155 = *v345;
      goto LABEL_312;
    case 5LL:
      return (*(int (__fastcall **)(__int64))(*(_QWORD *)v393 + 120LL))(v393);
    case 6LL:
      v287 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v288 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v288 + 1;
      }
      else
      {
        v288 = (_QWORD *)(*((_QWORD *)a3 + 2) + v287);
        *a3 = v287 + 8;
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v393 + 552LL))(v393, *v288);
      return 1;
    case 7LL:
      v228 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v229 = *((__int64 **)a3 + 1);
        *((_QWORD *)a3 + 1) = v229 + 1;
      }
      else
      {
        v229 = (__int64 *)(*((_QWORD *)a3 + 2) + v228);
        *a3 = v228 + 8;
      }
      sub_EA80(*v229, a4, a5);
      return 1;
    case 8LL:
      v226 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v227 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v227 + 1;
      }
      else
      {
        v227 = (_QWORD *)(*((_QWORD *)a3 + 2) + v226);
        *a3 = v226 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v393 + 152LL))(v393, *v227);
    case 9LL:
      v93 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v94 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v94 + 1;
      }
      else
      {
        v94 = (_QWORD *)(*((_QWORD *)a3 + 2) + v93);
        *a3 = v93 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v393 + 160LL))(v393, *v94);
    case 10LL:
      v86 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v347 = *((_DWORD ***)a3 + 1);
        v348 = v347 + 1;
        *((_QWORD *)a3 + 1) = v347 + 1;
        v89 = *v347;
      }
      else
      {
        v87 = *((_QWORD *)a3 + 2);
        v88 = v86 + 8;
        *a3 = v88;
        v89 = *(_DWORD **)(v87 + v86);
        if ( (unsigned int)v88 <= 0x2F )
        {
          v90 = v86 + 16;
          *a3 = v90;
          v91 = *(_QWORD *)(v87 + v88);
          if ( (unsigned int)v90 <= 0x2F )
          {
            v92 = (unsigned int *)(v90 + v87);
            *a3 = v86 + 24;
            goto LABEL_85;
          }
          v92 = *((unsigned int **)a3 + 1);
LABEL_317:
          *((_QWORD *)a3 + 1) = v92 + 2;
LABEL_85:
          *v89 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v393 + 136LL))(v393, v91, *v92);
          return 1;
        }
        v348 = *((_QWORD **)a3 + 1);
      }
      v92 = (unsigned int *)(v348 + 1);
      *((_QWORD *)a3 + 1) = v348 + 1;
      v91 = *v348;
      goto LABEL_317;
    case 11LL:
      v285 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v286 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v286 + 1;
      }
      else
      {
        v286 = (_QWORD *)(*((_QWORD *)a3 + 2) + v285);
        *a3 = v285 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v393 + 168LL))(v393, *v286);
    case 12LL:
      v83 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v84 = *((_DWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v84 + 2;
      }
      else
      {
        v84 = (_DWORD *)(*((_QWORD *)a3 + 2) + v83);
        *a3 = v83 + 8;
      }
      v85 = *(__int64 (**)())(*(_QWORD *)v393 + 176LL);
      if ( v85 == sub_CA60 )
        return 0;
      return ((int (__fastcall *)(__int64, bool))v85)(v393, *v84 != 0);
    case 13LL:
      v138 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v343 = *((_QWORD **)a3 + 1);
        v142 = (unsigned int *)(v343 + 1);
        *((_QWORD *)a3 + 1) = v343 + 1;
        v141 = *v343;
      }
      else
      {
        v139 = *((_QWORD *)a3 + 2);
        v140 = v138 + 8;
        *a3 = v140;
        v141 = *(_QWORD *)(v139 + v138);
        if ( (unsigned int)v140 <= 0x2F )
        {
          v142 = (unsigned int *)(v140 + v139);
          *a3 = v138 + 16;
          goto LABEL_124;
        }
        v142 = *((unsigned int **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v142 + 2;
LABEL_124:
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v393 + 184LL))(v393, v141, *v142);
      return 1;
    case 14LL:
      v133 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v356 = *((_DWORD **)a3 + 1);
        v137 = v356 + 2;
        *((_QWORD *)a3 + 1) = v356 + 2;
        v136 = *v356 != 0;
      }
      else
      {
        v134 = *((_QWORD *)a3 + 2);
        v135 = v133 + 8;
        *a3 = v135;
        v136 = *(_DWORD *)(v134 + v133) != 0;
        if ( (unsigned int)v135 <= 0x2F )
        {
          v137 = (_QWORD *)(v135 + v134);
          *a3 = v133 + 16;
          goto LABEL_119;
        }
        v137 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v137 + 1;
LABEL_119:
      (*(void (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)v393 + 192LL))(v393, 0, v136, *v137);
      if ( v136 )
        sub_49310(v393);
      return 1;
    case 15LL:
      v131 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v132 = *((unsigned int **)a3 + 1);
        *((_QWORD *)a3 + 1) = v132 + 2;
      }
      else
      {
        v132 = (unsigned int *)(*((_QWORD *)a3 + 2) + v131);
        *a3 = v131 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v393 + 200LL))(v393, *v132);
    case 16LL:
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
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v393 + 208LL))(v393, *v130);
    case 17LL:
      v289 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v384 = *((unsigned int **)a3 + 1);
        v293 = v384 + 2;
        *((_QWORD *)a3 + 1) = v384 + 2;
        v292 = *v384;
      }
      else
      {
        v290 = *((_QWORD *)a3 + 2);
        v291 = v289 + 8;
        *a3 = v291;
        v292 = *(_DWORD *)(v290 + v289);
        if ( (unsigned int)v291 <= 0x2F )
        {
          v293 = (unsigned int *)(v291 + v290);
          *a3 = v289 + 16;
          return (*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v393 + 216LL))(v393, v292, *v293);
        }
        v293 = *((unsigned int **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v293 + 2;
      return (*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v393 + 216LL))(v393, v292, *v293);
    case 18LL:
      v230 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v319 = *((unsigned int **)a3 + 1);
        v320 = v319 + 2;
        *((_QWORD *)a3 + 1) = v319 + 2;
        v233 = *v319;
      }
      else
      {
        v231 = *((_QWORD *)a3 + 2);
        v232 = v230 + 8;
        *a3 = v232;
        v233 = *(_DWORD *)(v231 + v230);
        if ( (unsigned int)v232 <= 0x2F )
        {
          v234 = v230 + 16;
          *a3 = v234;
          v235 = *(_DWORD *)(v231 + v232);
          if ( (unsigned int)v234 <= 0x2F )
          {
            v236 = v230 + 24;
            *a3 = v236;
            v237 = *(_QWORD *)(v231 + v234);
            if ( (unsigned int)v236 <= 0x2F )
            {
              v238 = (_QWORD *)(v236 + v231);
              *a3 = v230 + 32;
              return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v393 + 224LL))(
                       v393,
                       v233,
                       v235,
                       v237,
                       *v238);
            }
            v238 = *((_QWORD **)a3 + 1);
LABEL_277:
            *((_QWORD *)a3 + 1) = v238 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v393 + 224LL))(
                     v393,
                     v233,
                     v235,
                     v237,
                     *v238);
          }
          v321 = *((__int64 **)a3 + 1);
LABEL_276:
          v238 = v321 + 1;
          *((_QWORD *)a3 + 1) = v321 + 1;
          v237 = *v321;
          goto LABEL_277;
        }
        v320 = *((_DWORD **)a3 + 1);
      }
      v321 = (__int64 *)(v320 + 2);
      *((_QWORD *)a3 + 1) = v320 + 2;
      v235 = *v320;
      goto LABEL_276;
    case 19LL:
      v120 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v353 = *((unsigned int **)a3 + 1);
        v354 = v353 + 2;
        *((_QWORD *)a3 + 1) = v353 + 2;
        v123 = *v353;
      }
      else
      {
        v121 = *((_QWORD *)a3 + 2);
        v122 = v120 + 8;
        *a3 = v122;
        v123 = *(_DWORD *)(v121 + v120);
        if ( (unsigned int)v122 <= 0x2F )
        {
          v124 = v120 + 16;
          *a3 = v124;
          v125 = *(_DWORD *)(v121 + v122);
          if ( (unsigned int)v124 <= 0x2F )
          {
            v126 = v120 + 24;
            *a3 = v126;
            v127 = *(_QWORD *)(v121 + v124);
            if ( (unsigned int)v126 <= 0x2F )
            {
              v128 = (_QWORD *)(v126 + v121);
              *a3 = v120 + 32;
              return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v393 + 232LL))(
                       v393,
                       v123,
                       v125,
                       v127,
                       *v128);
            }
            v128 = *((_QWORD **)a3 + 1);
LABEL_327:
            *((_QWORD *)a3 + 1) = v128 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v393 + 232LL))(
                     v393,
                     v123,
                     v125,
                     v127,
                     *v128);
          }
          v355 = *((__int64 **)a3 + 1);
LABEL_326:
          v128 = v355 + 1;
          *((_QWORD *)a3 + 1) = v355 + 1;
          v127 = *v355;
          goto LABEL_327;
        }
        v354 = *((_DWORD **)a3 + 1);
      }
      v355 = (__int64 *)(v354 + 2);
      *((_QWORD *)a3 + 1) = v354 + 2;
      v125 = *v354;
      goto LABEL_326;
    case 20LL:
      v111 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v350 = *((_QWORD **)a3 + 1);
        v351 = (unsigned int *)(v350 + 1);
        *((_QWORD *)a3 + 1) = v350 + 1;
        v114 = *v350;
      }
      else
      {
        v112 = *((_QWORD *)a3 + 2);
        v113 = v111 + 8;
        *a3 = v113;
        v114 = *(_QWORD *)(v112 + v111);
        if ( (unsigned int)v113 <= 0x2F )
        {
          v115 = v111 + 16;
          *a3 = v115;
          v116 = *(_DWORD *)(v112 + v113);
          if ( (unsigned int)v115 <= 0x2F )
          {
            v117 = v111 + 24;
            *a3 = v117;
            v118 = *(_DWORD *)(v112 + v115);
            if ( (unsigned int)v117 <= 0x2F )
            {
              v119 = (_QWORD *)(v117 + v112);
              *a3 = v111 + 32;
              return (*(int (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v393 + 240LL))(
                       v393,
                       v114,
                       v116,
                       v118,
                       *v119);
            }
            v119 = *((_QWORD **)a3 + 1);
LABEL_323:
            *((_QWORD *)a3 + 1) = v119 + 1;
            return (*(int (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v393 + 240LL))(
                     v393,
                     v114,
                     v116,
                     v118,
                     *v119);
          }
          v352 = *((_DWORD **)a3 + 1);
LABEL_322:
          v119 = v352 + 2;
          *((_QWORD *)a3 + 1) = v352 + 2;
          v118 = *v352;
          goto LABEL_323;
        }
        v351 = *((unsigned int **)a3 + 1);
      }
      v352 = v351 + 2;
      *((_QWORD *)a3 + 1) = v351 + 2;
      v116 = *v351;
      goto LABEL_322;
    case 21LL:
      v221 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v383 = *((__int64 **)a3 + 1);
        v225 = v383 + 1;
        *((_QWORD *)a3 + 1) = v383 + 1;
        v224 = *v383;
      }
      else
      {
        v222 = *((_QWORD *)a3 + 2);
        v223 = v221 + 8;
        *a3 = v223;
        v224 = *(_QWORD *)(v222 + v221);
        if ( (unsigned int)v223 <= 0x2F )
        {
          v225 = (_QWORD *)(v223 + v222);
          *a3 = v221 + 16;
          return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v393 + 256LL))(v393, v224, *v225);
        }
        v225 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v225 + 1;
      return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v393 + 256LL))(v393, v224, *v225);
    case 22LL:
      v211 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v360 = *((_QWORD ***)a3 + 1);
        v361 = (__int64 *)(v360 + 1);
        *((_QWORD *)a3 + 1) = v360 + 1;
        v201 = *v360;
      }
      else
      {
        v212 = *((_QWORD *)a3 + 2);
        v213 = v211 + 8;
        *a3 = v213;
        v201 = *(__int64 **)(v212 + v211);
        if ( (unsigned int)v213 <= 0x2F )
        {
          v214 = v211 + 16;
          *a3 = v214;
          v215 = *(_QWORD *)(v212 + v213);
          if ( (unsigned int)v214 <= 0x2F )
          {
            v216 = v211 + 24;
            *a3 = v216;
            v217 = *(_QWORD *)(v212 + v214);
            if ( (unsigned int)v216 <= 0x2F )
            {
              v218 = v211 + 32;
              *a3 = v218;
              v219 = *(_QWORD *)(v212 + v216);
              if ( (unsigned int)v218 <= 0x2F )
              {
                v220 = (_QWORD *)(v218 + v212);
                *a3 = v211 + 40;
                goto LABEL_179;
              }
              v220 = *((_QWORD **)a3 + 1);
LABEL_341:
              *((_QWORD *)a3 + 1) = v220 + 1;
LABEL_179:
              v209 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v393 + 288LL))(
                       v393,
                       v215,
                       v217,
                       v219,
                       *v220);
              goto LABEL_169;
            }
            v363 = *((__int64 **)a3 + 1);
LABEL_340:
            v220 = v363 + 1;
            *((_QWORD *)a3 + 1) = v363 + 1;
            v219 = *v363;
            goto LABEL_341;
          }
          v362 = *((__int64 **)a3 + 1);
LABEL_339:
          v363 = v362 + 1;
          *((_QWORD *)a3 + 1) = v362 + 1;
          v217 = *v362;
          goto LABEL_340;
        }
        v361 = *((__int64 **)a3 + 1);
      }
      v362 = v361 + 1;
      *((_QWORD *)a3 + 1) = v361 + 1;
      v215 = *v361;
      goto LABEL_339;
    case 23LL:
      v198 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v379 = *((_QWORD ***)a3 + 1);
        v380 = (__int64 *)(v379 + 1);
        *((_QWORD *)a3 + 1) = v379 + 1;
        v201 = *v379;
      }
      else
      {
        v199 = *((_QWORD *)a3 + 2);
        v200 = v198 + 8;
        *a3 = v200;
        v201 = *(__int64 **)(v199 + v198);
        if ( (unsigned int)v200 <= 0x2F )
        {
          v202 = v198 + 16;
          *a3 = v202;
          v203 = *(_QWORD *)(v199 + v200);
          if ( (unsigned int)v202 <= 0x2F )
          {
            v204 = v198 + 24;
            *a3 = v204;
            v205 = *(_QWORD *)(v199 + v202);
            if ( (unsigned int)v204 <= 0x2F )
            {
              v206 = v198 + 32;
              *a3 = v206;
              v207 = *(_QWORD *)(v199 + v204);
              if ( (unsigned int)v206 <= 0x2F )
              {
                v208 = (_QWORD *)(v206 + v199);
                *a3 = v198 + 40;
                goto LABEL_168;
              }
              v208 = *((_QWORD **)a3 + 1);
LABEL_367:
              *((_QWORD *)a3 + 1) = v208 + 1;
LABEL_168:
              v209 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v393 + 296LL))(
                       v393,
                       v203,
                       v205,
                       v207,
                       *v208);
LABEL_169:
              v210 = 0;
              if ( v209 >= 0 )
                v210 = v209;
              *v201 = v210;
              if ( v209 < 0 )
                return -5;
              return 1;
            }
            v382 = *((__int64 **)a3 + 1);
LABEL_366:
            v208 = v382 + 1;
            *((_QWORD *)a3 + 1) = v382 + 1;
            v207 = *v382;
            goto LABEL_367;
          }
          v381 = *((__int64 **)a3 + 1);
LABEL_365:
          v382 = v381 + 1;
          *((_QWORD *)a3 + 1) = v381 + 1;
          v205 = *v381;
          goto LABEL_366;
        }
        v380 = *((__int64 **)a3 + 1);
      }
      v381 = v380 + 1;
      *((_QWORD *)a3 + 1) = v380 + 1;
      v203 = *v380;
      goto LABEL_365;
    case 24LL:
      v187 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v367 = *((_DWORD ***)a3 + 1);
        v368 = (unsigned int *)(v367 + 1);
        *((_QWORD *)a3 + 1) = v367 + 1;
        v190 = *v367;
      }
      else
      {
        v188 = *((_QWORD *)a3 + 2);
        v189 = v187 + 8;
        *a3 = v189;
        v190 = *(_DWORD **)(v188 + v187);
        if ( (unsigned int)v189 <= 0x2F )
        {
          v191 = v187 + 16;
          *a3 = v191;
          v192 = *(_DWORD *)(v188 + v189);
          if ( (unsigned int)v191 <= 0x2F )
          {
            v193 = v187 + 24;
            *a3 = v193;
            v194 = *(_QWORD *)(v188 + v191);
            if ( (unsigned int)v193 <= 0x2F )
            {
              v195 = (unsigned int *)(v193 + v188);
              *a3 = v187 + 32;
              goto LABEL_160;
            }
            v195 = *((unsigned int **)a3 + 1);
LABEL_350:
            *((_QWORD *)a3 + 1) = v195 + 2;
LABEL_160:
            v196 = *v195;
            v197 = sub_EB10(a1 + 120, v192, v194, *v195);
            *v190 = v197;
            if ( !v197 )
              *v190 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v393 + 304LL))(
                        v393,
                        v192,
                        v194,
                        v196);
            return 1;
          }
          v369 = *((__int64 **)a3 + 1);
LABEL_349:
          v195 = (unsigned int *)(v369 + 1);
          *((_QWORD *)a3 + 1) = v369 + 1;
          v194 = *v369;
          goto LABEL_350;
        }
        v368 = *((unsigned int **)a3 + 1);
      }
      v369 = (__int64 *)(v368 + 2);
      *((_QWORD *)a3 + 1) = v368 + 2;
      v192 = *v368;
      goto LABEL_349;
    case 25LL:
      v274 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v323 = *((_DWORD ***)a3 + 1);
        v324 = (__int64 *)(v323 + 1);
        *((_QWORD *)a3 + 1) = v323 + 1;
        v277 = *v323;
      }
      else
      {
        v275 = *((_QWORD *)a3 + 2);
        v276 = v274 + 8;
        *a3 = v276;
        v277 = *(_DWORD **)(v275 + v274);
        if ( (unsigned int)v276 <= 0x2F )
        {
          v278 = v274 + 16;
          *a3 = v278;
          v279 = *(_QWORD *)(v275 + v276);
          if ( (unsigned int)v278 <= 0x2F )
          {
            v280 = v274 + 24;
            *a3 = v280;
            v281 = *(_DWORD *)(v275 + v278);
            if ( (unsigned int)v280 <= 0x2F )
            {
              v282 = v274 + 32;
              *a3 = v282;
              v283 = *(_DWORD *)(v275 + v280);
              if ( (unsigned int)v282 <= 0x2F )
              {
                v284 = (__int64 *)(v282 + v275);
                *a3 = v274 + 40;
                return (int)sub_F180((_QWORD *)a1, v277, v279, v281, v283, *v284);
              }
              v284 = *((__int64 **)a3 + 1);
LABEL_284:
              *((_QWORD *)a3 + 1) = v284 + 1;
              return (int)sub_F180((_QWORD *)a1, v277, v279, v281, v283, *v284);
            }
            v326 = *((unsigned int **)a3 + 1);
LABEL_283:
            v284 = (__int64 *)(v326 + 2);
            *((_QWORD *)a3 + 1) = v326 + 2;
            v283 = *v326;
            goto LABEL_284;
          }
          v325 = *((unsigned int **)a3 + 1);
LABEL_282:
          v326 = v325 + 2;
          *((_QWORD *)a3 + 1) = v325 + 2;
          v281 = *v325;
          goto LABEL_283;
        }
        v324 = *((__int64 **)a3 + 1);
      }
      v325 = (unsigned int *)(v324 + 1);
      *((_QWORD *)a3 + 1) = v324 + 1;
      v279 = *v324;
      goto LABEL_282;
    case 26LL:
      v265 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v376 = *((__int64 **)a3 + 1);
        v377 = v376 + 1;
        *((_QWORD *)a3 + 1) = v376 + 1;
        v268 = *v376;
      }
      else
      {
        v266 = *((_QWORD *)a3 + 2);
        v267 = v265 + 8;
        *a3 = v267;
        v268 = *(_QWORD *)(v266 + v265);
        if ( (unsigned int)v267 <= 0x2F )
        {
          v269 = v265 + 16;
          *a3 = v269;
          v270 = *(_QWORD *)(v266 + v267);
          if ( (unsigned int)v269 <= 0x2F )
          {
            v271 = v265 + 24;
            *a3 = v271;
            v272 = *(_DWORD *)(v266 + v269);
            if ( (unsigned int)v271 <= 0x2F )
            {
              v273 = (_QWORD *)(v271 + v266);
              *a3 = v265 + 32;
              return (*(int (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v393 + 352LL))(
                       v393,
                       v268,
                       v270,
                       v272,
                       *v273);
            }
            v273 = *((_QWORD **)a3 + 1);
LABEL_362:
            *((_QWORD *)a3 + 1) = v273 + 1;
            return (*(int (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v393 + 352LL))(
                     v393,
                     v268,
                     v270,
                     v272,
                     *v273);
          }
          v378 = *((_DWORD **)a3 + 1);
LABEL_361:
          v273 = v378 + 2;
          *((_QWORD *)a3 + 1) = v378 + 2;
          v272 = *v378;
          goto LABEL_362;
        }
        v377 = *((_QWORD **)a3 + 1);
      }
      v378 = v377 + 1;
      *((_QWORD *)a3 + 1) = v377 + 1;
      v270 = *v377;
      goto LABEL_361;
    case 27LL:
      v300 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v309 = *((__int64 **)a3 + 1);
        v310 = v309 + 1;
        *((_QWORD *)a3 + 1) = v309 + 1;
        v303 = *v309;
      }
      else
      {
        v301 = *((_QWORD *)a3 + 2);
        v302 = v300 + 8;
        *a3 = v302;
        v303 = *(_QWORD *)(v301 + v300);
        if ( (unsigned int)v302 <= 0x2F )
        {
          v304 = v300 + 16;
          *a3 = v304;
          v305 = *(_QWORD *)(v301 + v302);
          if ( (unsigned int)v304 <= 0x2F )
          {
            v306 = (_DWORD *)(v304 + v301);
            *a3 = v300 + 24;
            return (*(int (__fastcall **)(__int64, __int64, __int64, bool))(*(_QWORD *)v393 + 368LL))(
                     v393,
                     v303,
                     v305,
                     *v306 != 0);
          }
          v306 = *((_DWORD **)a3 + 1);
LABEL_261:
          *((_QWORD *)a3 + 1) = v306 + 2;
          return (*(int (__fastcall **)(__int64, __int64, __int64, bool))(*(_QWORD *)v393 + 368LL))(
                   v393,
                   v303,
                   v305,
                   *v306 != 0);
        }
        v310 = *((_QWORD **)a3 + 1);
      }
      v306 = v310 + 1;
      *((_QWORD *)a3 + 1) = v310 + 1;
      v305 = *v310;
      goto LABEL_261;
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
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v393 + 376LL))(v393, *v74);
      return 1;
    case 29LL:
      v169 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v370 = *((_DWORD **)a3 + 1);
        v371 = (__int64 *)(v370 + 2);
        *((_QWORD *)a3 + 1) = v370 + 2;
        v172 = *v370;
      }
      else
      {
        v170 = *((_QWORD *)a3 + 2);
        v171 = v169 + 8;
        *a3 = v171;
        v172 = *(_DWORD *)(v170 + v169);
        if ( (unsigned int)v171 <= 0x2F )
        {
          v173 = v169 + 16;
          *a3 = v173;
          v174 = *(_QWORD *)(v170 + v171);
          if ( (unsigned int)v173 <= 0x2F )
          {
            v175 = v169 + 24;
            *a3 = v175;
            v176 = *(_QWORD *)(v170 + v173);
            if ( (unsigned int)v175 <= 0x2F )
            {
              v177 = (_QWORD *)(v175 + v170);
              *a3 = v169 + 32;
              return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v393 + 384LL))(
                       v393,
                       v172,
                       v174,
                       v176,
                       *v177);
            }
            v177 = *((_QWORD **)a3 + 1);
LABEL_354:
            *((_QWORD *)a3 + 1) = v177 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v393 + 384LL))(
                     v393,
                     v172,
                     v174,
                     v176,
                     *v177);
          }
          v372 = *((__int64 **)a3 + 1);
LABEL_353:
          v177 = v372 + 1;
          *((_QWORD *)a3 + 1) = v372 + 1;
          v176 = *v372;
          goto LABEL_354;
        }
        v371 = *((__int64 **)a3 + 1);
      }
      v372 = v371 + 1;
      *((_QWORD *)a3 + 1) = v371 + 1;
      v174 = *v371;
      goto LABEL_353;
    case 30LL:
      v160 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v357 = *((_DWORD **)a3 + 1);
        v358 = (__int64 *)(v357 + 2);
        *((_QWORD *)a3 + 1) = v357 + 2;
        v163 = *v357;
      }
      else
      {
        v161 = *((_QWORD *)a3 + 2);
        v162 = v160 + 8;
        *a3 = v162;
        v163 = *(_DWORD *)(v161 + v160);
        if ( (unsigned int)v162 <= 0x2F )
        {
          v164 = v160 + 16;
          *a3 = v164;
          v165 = *(_QWORD *)(v161 + v162);
          if ( (unsigned int)v164 <= 0x2F )
          {
            v166 = v160 + 24;
            *a3 = v166;
            v167 = *(_QWORD *)(v161 + v164);
            if ( (unsigned int)v166 <= 0x2F )
            {
              v168 = (_QWORD *)(v166 + v161);
              *a3 = v160 + 32;
              return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v393 + 392LL))(
                       v393,
                       v163,
                       v165,
                       v167,
                       *v168);
            }
            v168 = *((_QWORD **)a3 + 1);
LABEL_335:
            *((_QWORD *)a3 + 1) = v168 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v393 + 392LL))(
                     v393,
                     v163,
                     v165,
                     v167,
                     *v168);
          }
          v359 = *((__int64 **)a3 + 1);
LABEL_334:
          v168 = v359 + 1;
          *((_QWORD *)a3 + 1) = v359 + 1;
          v167 = *v359;
          goto LABEL_335;
        }
        v358 = *((__int64 **)a3 + 1);
      }
      v359 = v358 + 1;
      *((_QWORD *)a3 + 1) = v358 + 1;
      v165 = *v358;
      goto LABEL_334;
    case 31LL:
      v178 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v373 = *((_QWORD ***)a3 + 1);
        v374 = (__int64 *)(v373 + 1);
        *((_QWORD *)a3 + 1) = v373 + 1;
        v181 = *v373;
      }
      else
      {
        v179 = *((_QWORD *)a3 + 2);
        v180 = v178 + 8;
        *a3 = v180;
        v181 = *(_QWORD **)(v179 + v178);
        if ( (unsigned int)v180 <= 0x2F )
        {
          v182 = v178 + 16;
          *a3 = v182;
          v183 = *(_QWORD *)(v179 + v180);
          if ( (unsigned int)v182 <= 0x2F )
          {
            v184 = v178 + 24;
            *a3 = v184;
            v185 = *(_QWORD *)(v179 + v182);
            if ( (unsigned int)v184 <= 0x2F )
            {
              v186 = (unsigned int *)(v184 + v179);
              *a3 = v178 + 32;
              goto LABEL_154;
            }
            v186 = *((unsigned int **)a3 + 1);
LABEL_358:
            *((_QWORD *)a3 + 1) = v186 + 2;
LABEL_154:
            *v181 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v393 + 248LL))(
                      v393,
                      v183,
                      v185,
                      *v186);
            return 1;
          }
          v375 = *((_QWORD **)a3 + 1);
LABEL_357:
          v186 = (unsigned int *)(v375 + 1);
          *((_QWORD *)a3 + 1) = v375 + 1;
          v185 = *v375;
          goto LABEL_358;
        }
        v374 = *((__int64 **)a3 + 1);
      }
      v375 = v374 + 1;
      *((_QWORD *)a3 + 1) = v374 + 1;
      v183 = *v374;
      goto LABEL_357;
    case 33LL:
      v75 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v322 = *((_DWORD **)a3 + 1);
        v79 = v322 + 2;
        *((_QWORD *)a3 + 1) = v322 + 2;
        v78 = *v322;
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
          goto LABEL_74;
        }
        v79 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v79 + 1;
LABEL_74:
      v80 = dbg;
      v81 = *(_QWORD *)(dbg + 32LL);
      if ( (v81 & 0x80000000000LL) == 0 )
        return 0;
      v82 = *(__int64 (**)())(*(_QWORD *)v393 + 416LL);
      if ( v82 == sub_CAB0 )
        goto LABEL_76;
      v390 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v82)(v393, v78, *v79);
      if ( (unsigned int)(v390 + 1) > 1 )
        return v390;
      v80 = dbg;
      v81 = *(_QWORD *)(dbg + 32LL);
LABEL_76:
      *(_QWORD *)(v80 + 32) = v81 & 0xFFFFF7FFFFFFFFFFLL;
      return 0;
    case 34LL:
      if ( (*(_BYTE *)(a1 + 157) & 0x10) == 0 )
        return 0;
      v95 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v385 = *((_QWORD ***)a3 + 1);
        *((_QWORD *)a3 + 1) = v385 + 1;
        v98 = *v385;
      }
      else
      {
        v96 = *((_QWORD *)a3 + 2);
        v97 = v95 + 8;
        *a3 = v97;
        v98 = *(_QWORD **)(v96 + v95);
        if ( (unsigned int)v97 <= 0x2F )
        {
          v99 = v95 + 16;
          *a3 = v99;
          v100 = *(_QWORD *)(v96 + v97);
          if ( (unsigned int)v99 <= 0x2F )
          {
            v101 = v95 + 24;
            *a3 = v101;
            v102 = *(_DWORD *)(v96 + v99);
            if ( (unsigned int)v101 <= 0x2F )
            {
              *a3 = v95 + 32;
              v103 = *(_QWORD *)(v96 + v101);
              if ( v95 + 32 <= 0x2F )
              {
                v104 = v95 + 40;
                if ( (unsigned int)v104 <= 0x2F )
                {
                  *a3 = v95 + 48;
                  v105 = *(_QWORD *)(v96 + v104);
                  goto LABEL_97;
                }
                *a3 = v104;
LABEL_378:
                v389 = *((__int64 **)a3 + 1);
                *((_QWORD *)a3 + 1) = v389 + 1;
                v105 = *v389;
LABEL_97:
                v106 = *((__int64 **)a3 + 1);
                *((_QWORD *)a3 + 1) = v106 + 1;
                v107 = *v106;
                *((_QWORD *)a3 + 1) = v106 + 2;
                v108 = v106[1];
                *((_QWORD *)a3 + 1) = v106 + 3;
                v109 = v106[2];
                *((_QWORD *)a3 + 1) = v106 + 4;
                v110 = v106[3];
                *((_QWORD *)a3 + 1) = v106 + 5;
                *v98 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v393 + 424LL))(
                         v393,
                         v100,
                         v102,
                         (unsigned int)*(_QWORD *)(v103 + 56),
                         v105,
                         v107,
                         v108,
                         v109,
                         v110,
                         *((unsigned int *)v106 + 8));
                return 1;
              }
LABEL_377:
              *((_QWORD *)a3 + 1) += 8LL;
              goto LABEL_378;
            }
LABEL_376:
            v388 = *((__int64 **)a3 + 1);
            *((_QWORD *)a3 + 1) = v388 + 1;
            v103 = *v388;
            goto LABEL_377;
          }
LABEL_375:
          v387 = *((unsigned int **)a3 + 1);
          *((_QWORD *)a3 + 1) = v387 + 2;
          v102 = *v387;
          goto LABEL_376;
        }
      }
      v386 = *((__int64 **)a3 + 1);
      *((_QWORD *)a3 + 1) = v386 + 1;
      v100 = *v386;
      goto LABEL_375;
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
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v393 + 432LL))(v393, *v72);
    case 36LL:
      v143 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v317 = *((_DWORD **)a3 + 1);
        v318 = (__int64 *)(v317 + 2);
        *((_QWORD *)a3 + 1) = v317 + 2;
        v146 = *v317;
      }
      else
      {
        v144 = *((_QWORD *)a3 + 2);
        v145 = v143 + 8;
        *a3 = v145;
        v146 = *(_DWORD *)(v144 + v143);
        if ( (unsigned int)v145 <= 0x2F )
        {
          v147 = v143 + 16;
          *a3 = v147;
          v148 = *(_QWORD *)(v144 + v145);
          if ( (unsigned int)v147 <= 0x2F )
          {
            v149 = (_QWORD *)(v147 + v144);
            *a3 = v143 + 24;
            return (*(int (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v393 + 360LL))(
                     v393,
                     v146,
                     v148,
                     *v149);
          }
          v149 = *((_QWORD **)a3 + 1);
LABEL_272:
          *((_QWORD *)a3 + 1) = v149 + 1;
          return (*(int (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v393 + 360LL))(
                   v393,
                   v146,
                   v148,
                   *v149);
        }
        v318 = *((__int64 **)a3 + 1);
      }
      v149 = v318 + 1;
      *((_QWORD *)a3 + 1) = v318 + 1;
      v148 = *v318;
      goto LABEL_272;
    case 37LL:
      v59 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v336 = *((_DWORD **)a3 + 1);
        v337 = (__int64 *)(v336 + 2);
        *((_QWORD *)a3 + 1) = v336 + 2;
        v62 = *v336;
      }
      else
      {
        v60 = *((_QWORD *)a3 + 2);
        v61 = v59 + 8;
        *a3 = v61;
        v62 = *(_DWORD *)(v60 + v59);
        if ( (unsigned int)v61 <= 0x2F )
        {
          v63 = v59 + 16;
          *a3 = v63;
          v64 = *(_QWORD *)(v60 + v61);
          if ( (unsigned int)v63 <= 0x2F )
          {
            v65 = v59 + 24;
            *a3 = v65;
            v66 = *(_QWORD *)(v60 + v63);
            if ( (unsigned int)v65 <= 0x2F )
            {
              v67 = v59 + 32;
              *a3 = v67;
              v68 = *(_QWORD *)(v60 + v65);
              if ( (unsigned int)v67 <= 0x2F )
              {
                v69 = (_QWORD *)(v67 + v60);
                *a3 = v59 + 40;
                goto LABEL_62;
              }
              v69 = *((_QWORD **)a3 + 1);
LABEL_300:
              *((_QWORD *)a3 + 1) = v69 + 1;
LABEL_62:
              v70 = *(__int64 (**)())(*(_QWORD *)v393 + 400LL);
              if ( v70 != sub_CAA0 )
                return ((int (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, _QWORD))v70)(
                         v393,
                         v62,
                         v64,
                         v66,
                         v68,
                         *v69);
              return 0;
            }
            v339 = *((__int64 **)a3 + 1);
LABEL_299:
            v69 = v339 + 1;
            *((_QWORD *)a3 + 1) = v339 + 1;
            v68 = *v339;
            goto LABEL_300;
          }
          v338 = *((__int64 **)a3 + 1);
LABEL_298:
          v339 = v338 + 1;
          *((_QWORD *)a3 + 1) = v338 + 1;
          v66 = *v338;
          goto LABEL_299;
        }
        v337 = *((__int64 **)a3 + 1);
      }
      v338 = v337 + 1;
      *((_QWORD *)a3 + 1) = v337 + 1;
      v64 = *v337;
      goto LABEL_298;
    case 38LL:
      v51 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v341 = *((unsigned int **)a3 + 1);
        v342 = v341 + 2;
        *((_QWORD *)a3 + 1) = v341 + 2;
        v54 = *v341;
      }
      else
      {
        v52 = *((_QWORD *)a3 + 2);
        v53 = v51 + 8;
        *a3 = v53;
        v54 = *(_DWORD *)(v52 + v51);
        if ( (unsigned int)v53 <= 0x2F )
        {
          v55 = v51 + 16;
          *a3 = v55;
          v56 = *(_DWORD *)(v52 + v53) != 0;
          if ( (unsigned int)v55 <= 0x2F )
          {
            v57 = (unsigned int *)(v55 + v52);
            *a3 = v51 + 24;
            goto LABEL_54;
          }
          v57 = *((unsigned int **)a3 + 1);
LABEL_307:
          *((_QWORD *)a3 + 1) = v57 + 2;
LABEL_54:
          v58 = *(__int64 (**)())(*(_QWORD *)v393 + 520LL);
          if ( v58 != sub_CAC0 )
            return ((unsigned __int8 (__fastcall *)(__int64, _QWORD, bool, _QWORD))v58)(v393, v54, v56, *v57);
          return 0;
        }
        v342 = *((_DWORD **)a3 + 1);
      }
      v57 = v342 + 2;
      *((_QWORD *)a3 + 1) = v342 + 2;
      v56 = *v342 != 0;
      goto LABEL_307;
    case 39LL:
      v45 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v349 = *((unsigned int **)a3 + 1);
        v49 = v349 + 2;
        *((_QWORD *)a3 + 1) = v349 + 2;
        v48 = *v349;
      }
      else
      {
        v46 = *((_QWORD *)a3 + 2);
        v47 = v45 + 8;
        *a3 = v47;
        v48 = *(_DWORD *)(v46 + v45);
        if ( (unsigned int)v47 <= 0x2F )
        {
          v49 = (unsigned int *)(v47 + v46);
          *a3 = v45 + 16;
          goto LABEL_48;
        }
        v49 = *((unsigned int **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v49 + 2;
LABEL_48:
      v50 = *(__int64 (**)())(*(_QWORD *)v393 + 528LL);
      if ( v50 == sub_CAD0 )
        return 0;
      return ((unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD))v50)(v393, v48, *v49);
    case 40LL:
      v43 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v44 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v44 + 1;
      }
      else
      {
        v44 = (_QWORD *)(*((_QWORD *)a3 + 2) + v43);
        *a3 = v43 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v393 + 536LL))(v393, *v44);
    case 41LL:
      v37 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v340 = *((__int64 **)a3 + 1);
        v41 = v340 + 1;
        *((_QWORD *)a3 + 1) = v340 + 1;
        v40 = *v340;
      }
      else
      {
        v38 = *((_QWORD *)a3 + 2);
        v39 = v37 + 8;
        *a3 = v39;
        v40 = *(_QWORD *)(v38 + v37);
        if ( (unsigned int)v39 <= 0x2F )
        {
          v41 = (_QWORD *)(v39 + v38);
          *a3 = v37 + 16;
          goto LABEL_40;
        }
        v41 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v41 + 1;
LABEL_40:
      v42 = *(__int64 (**)())(*(_QWORD *)v393 + 560LL);
      if ( v42 == sub_CAE0 )
        return 0;
      return ((unsigned __int8 (__fastcall *)(__int64, __int64, _QWORD))v42)(v393, v40, *v41);
    case 42LL:
      v24 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v327 = *((__int64 **)a3 + 1);
        v328 = v327 + 1;
        *((_QWORD *)a3 + 1) = v327 + 1;
        v27 = *v327;
      }
      else
      {
        v25 = *((_QWORD *)a3 + 2);
        v26 = v24 + 8;
        *a3 = v26;
        v27 = *(_QWORD *)(v25 + v24);
        if ( (unsigned int)v26 <= 0x2F )
        {
          v28 = v24 + 16;
          *a3 = v28;
          v29 = *(_QWORD *)(v25 + v26);
          if ( (unsigned int)v28 <= 0x2F )
          {
            v30 = v24 + 24;
            *a3 = v30;
            v31 = *(const char **)(v25 + v28);
            if ( (unsigned int)v30 <= 0x2F )
            {
              v32 = v24 + 32;
              *a3 = v32;
              v33 = *(_QWORD *)(v25 + v30);
              if ( (unsigned int)v32 <= 0x2F )
              {
                v34 = v24 + 40;
                *a3 = v34;
                v35 = *(unsigned int *)(v25 + v32);
                if ( (unsigned int)v34 <= 0x2F )
                {
                  v36 = (_QWORD *)(v34 + v25);
                  *a3 = v24 + 48;
                  goto LABEL_34;
                }
                v36 = *((_QWORD **)a3 + 1);
LABEL_290:
                *((_QWORD *)a3 + 1) = v36 + 1;
LABEL_34:
                if ( v33 )
                {
                  v6 = (*(int (__fastcall **)(__int64, __int64, __int64, const char *, __int64, __int64, _QWORD))(*(_QWORD *)v393 + 576LL))(
                         v393,
                         v27,
                         v29,
                         v31,
                         v33,
                         v35,
                         *v36);
                  if ( (*(_DWORD *)debug & 0x10000) != 0 )
                    sub_D8A0((__int64)"debugger_t::ev_bin_search(%a, %a) -> %d(%s) ea %a\n", a4, a5, v29, v31, a6);
                  return v6;
                }
                return 0;
              }
              v331 = *((unsigned int **)a3 + 1);
LABEL_289:
              v36 = v331 + 2;
              *((_QWORD *)a3 + 1) = v331 + 2;
              v35 = *v331;
              goto LABEL_290;
            }
            v330 = *((_QWORD **)a3 + 1);
LABEL_288:
            v331 = (unsigned int *)(v330 + 1);
            *((_QWORD *)a3 + 1) = v330 + 1;
            v33 = *v330;
            goto LABEL_289;
          }
          v329 = *((const char ***)a3 + 1);
LABEL_287:
          v330 = v329 + 1;
          *((_QWORD *)a3 + 1) = v329 + 1;
          v31 = *v329;
          goto LABEL_288;
        }
        v328 = *((_QWORD **)a3 + 1);
      }
      v329 = (const char **)(v328 + 1);
      *((_QWORD *)a3 + 1) = v328 + 1;
      v29 = *v328;
      goto LABEL_287;
    case 43LL:
      if ( !*(_BYTE *)(a1 + 208) )
        return 0;
      if ( (unsigned int)*a3 > 0x2F )
        *((_QWORD *)a3 + 1) += 8LL;
      else
        *a3 += 8;
      v23 = *(__int64 (**)())(*(_QWORD *)v393 + 584LL);
      if ( v23 == sub_CB00 || (v391 = ((__int64 (__fastcall *)(__int64))v23)(v393), v391 >= 0) )
      {
        serialize_dynamic_register_set();
        deserialize_dynamic_register_set();
        return 1;
      }
      return v391;
    case 44LL:
      v11 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v332 = *((_QWORD ***)a3 + 1);
        v333 = v332 + 1;
        *((_QWORD *)a3 + 1) = v332 + 1;
        v14 = *v332;
LABEL_292:
        v334 = (unsigned int *)(v333 + 1);
        *((_QWORD *)a3 + 1) = v333 + 1;
        v16 = *v333;
LABEL_293:
        v335 = v334 + 2;
        *((_QWORD *)a3 + 1) = v334 + 2;
        v394 = *v334;
LABEL_294:
        v20 = (__int64 *)(v335 + 2);
        *((_QWORD *)a3 + 1) = v335 + 2;
        v19 = *v335;
        goto LABEL_295;
      }
      v12 = *((_QWORD *)a3 + 2);
      v13 = v11 + 8;
      *a3 = v13;
      v14 = *(__int64 **)(v12 + v11);
      if ( (unsigned int)v13 > 0x2F )
      {
        v333 = *((_QWORD **)a3 + 1);
        goto LABEL_292;
      }
      v15 = v11 + 16;
      *a3 = v15;
      v16 = *(_QWORD *)(v12 + v13);
      if ( (unsigned int)v15 > 0x2F )
      {
        v334 = *((unsigned int **)a3 + 1);
        goto LABEL_293;
      }
      v17 = v11 + 24;
      *a3 = v17;
      v394 = *(_DWORD *)(v12 + v15);
      if ( (unsigned int)v17 > 0x2F )
      {
        v335 = *((_DWORD **)a3 + 1);
        goto LABEL_294;
      }
      v18 = v11 + 32;
      *a3 = v18;
      v19 = *(_DWORD *)(v12 + v17);
      if ( (unsigned int)v18 <= 0x2F )
      {
        v20 = (__int64 *)(v18 + v12);
        *a3 = v11 + 40;
        goto LABEL_13;
      }
      v20 = *((__int64 **)a3 + 1);
LABEL_295:
      *((_QWORD *)a3 + 1) = v20 + 1;
LABEL_13:
      v21 = *v20;
      if ( (*(_DWORD *)debug & 0x10000) != 0 )
        sub_D8A0((__int64)"debugger_t::ev_set_dbg_options(%s)\n", (const char *)v16);
      v22 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 64LL))(
              a1,
              v16,
              v394,
              v19,
              v21);
      if ( !v16 || *(_BYTE *)v16 != 32 || (v6 = v22 != 0, *(_BYTE *)(v16 + 1)) )
      {
        if ( v14 )
          *v14 = v22;
        sub_FA50((__int64 *)a1, *(_BYTE *)(a1 + 208));
        return 1;
      }
      return v6;
    default:
      return 0;
  }
}

