__int64 __fastcall sub_16CB0(__int64 a1, __int64 a2, int *a3, double a4, double a5, double a6)
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
  unsigned int v42; // eax
  _QWORD *v43; // rcx
  unsigned int v44; // ecx
  __int64 v45; // rax
  __int64 v46; // rsi
  unsigned int v47; // edi
  unsigned int *v48; // rax
  __int64 (*v49)(); // rcx
  unsigned int v50; // ecx
  __int64 v51; // rax
  __int64 v52; // rdi
  unsigned int v53; // r9d
  __int64 v54; // rsi
  bool v55; // di
  unsigned int *v56; // rax
  __int64 (*v57)(); // r8
  unsigned int v58; // ecx
  __int64 v59; // rax
  __int64 v60; // rdi
  unsigned int v61; // r10d
  __int64 v62; // rsi
  __int64 v63; // r11
  __int64 v64; // rdi
  __int64 v65; // rbx
  __int64 v66; // rsi
  __int64 v67; // r8
  _QWORD *v68; // rax
  __int64 (*v69)(); // r12
  unsigned int v70; // ecx
  unsigned int *v71; // rax
  unsigned int v72; // eax
  unsigned int *v73; // rcx
  unsigned int v74; // ecx
  __int64 v75; // rax
  __int64 v76; // rsi
  unsigned int v77; // edi
  _QWORD *v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 (*v81)(); // r8
  unsigned int v82; // eax
  _DWORD *v83; // rcx
  __int64 (*v84)(); // rax
  unsigned int v85; // ecx
  __int64 v86; // rax
  __int64 v87; // rdi
  _DWORD *v88; // rbx
  __int64 v89; // rsi
  __int64 v90; // rdi
  unsigned int *v91; // rax
  unsigned int v92; // eax
  _QWORD *v93; // rcx
  unsigned int v94; // eax
  __int64 v95; // rsi
  __int64 v96; // rcx
  _QWORD *v97; // rbx
  __int64 v98; // r8
  __int64 v99; // rdi
  __int64 v100; // rcx
  unsigned int v101; // r10d
  __int64 v102; // r11
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
  __int64 v114; // rdi
  unsigned int v115; // r10d
  __int64 v116; // rsi
  unsigned int v117; // edi
  _QWORD *v118; // rax
  unsigned int v119; // ecx
  __int64 v120; // rax
  __int64 v121; // rsi
  unsigned int v122; // r9d
  __int64 v123; // rdi
  unsigned int v124; // r10d
  __int64 v125; // rsi
  __int64 v126; // rdi
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
  __int64 v140; // rdi
  unsigned int *v141; // rax
  unsigned int v142; // ecx
  __int64 v143; // rax
  __int64 v144; // rdi
  unsigned int v145; // r8d
  __int64 v146; // rsi
  __int64 v147; // rdi
  _QWORD *v148; // rax
  unsigned int v149; // ecx
  __int64 v150; // rax
  __int64 v151; // rsi
  unsigned int v152; // r9d
  __int64 v153; // rdi
  unsigned int v154; // r10d
  __int64 v155; // rsi
  unsigned int v156; // edi
  _QWORD *v157; // rax
  int v158; // eax
  unsigned int v159; // ecx
  __int64 v160; // rax
  __int64 v161; // rsi
  unsigned int v162; // r9d
  __int64 v163; // rdi
  __int64 v164; // r10
  __int64 v165; // rsi
  __int64 v166; // rdi
  _QWORD *v167; // rax
  unsigned int v168; // ecx
  __int64 v169; // rax
  __int64 v170; // rsi
  unsigned int v171; // r9d
  __int64 v172; // rdi
  __int64 v173; // r10
  __int64 v174; // rsi
  __int64 v175; // rdi
  _QWORD *v176; // rax
  unsigned int v177; // ecx
  __int64 v178; // rax
  __int64 v179; // rsi
  _QWORD *v180; // rbx
  __int64 v181; // rdi
  __int64 v182; // r8
  __int64 v183; // rsi
  __int64 v184; // rdi
  unsigned int *v185; // rax
  unsigned int v186; // ecx
  __int64 v187; // rax
  __int64 v188; // rsi
  _DWORD *v189; // r12
  __int64 v190; // rdi
  unsigned int v191; // r13d
  __int64 v192; // rsi
  __int64 v193; // r14
  unsigned int *v194; // rax
  unsigned int v195; // r15d
  int v196; // eax
  unsigned int v197; // ecx
  __int64 v198; // rax
  __int64 v199; // rdi
  __int64 *v200; // rbx
  __int64 v201; // rsi
  __int64 v202; // r9
  __int64 v203; // rdi
  __int64 v204; // r10
  __int64 v205; // rsi
  __int64 v206; // rdi
  _QWORD *v207; // rax
  __int64 v208; // rax
  __int64 v209; // rdx
  unsigned int v210; // ecx
  __int64 v211; // rax
  __int64 v212; // rdi
  __int64 v213; // rsi
  __int64 v214; // r9
  __int64 v215; // rdi
  __int64 v216; // r10
  __int64 v217; // rsi
  __int64 v218; // rdi
  _QWORD *v219; // rax
  unsigned int v220; // ecx
  __int64 v221; // rax
  __int64 v222; // rsi
  __int64 v223; // rdi
  _QWORD *v224; // rax
  unsigned int v225; // eax
  _QWORD *v226; // rcx
  unsigned int v227; // eax
  __int64 *v228; // rcx
  unsigned int v229; // ecx
  __int64 v230; // rax
  __int64 v231; // rsi
  unsigned int v232; // r9d
  __int64 v233; // rdi
  unsigned int v234; // r10d
  __int64 v235; // rsi
  __int64 v236; // rdi
  _QWORD *v237; // rax
  unsigned int v238; // ecx
  __int64 v239; // rax
  __int64 v240; // rsi
  __int64 v241; // rdi
  unsigned int v242; // r12d
  __int64 v243; // rsi
  __int64 v244; // r13
  __int64 *v245; // rax
  __int64 v246; // r14
  const char *v247; // rsi
  unsigned int v248; // eax
  __int64 v249; // rcx
  __int64 v250; // rsi
  __int64 v251; // r10
  __int64 v252; // rdi
  __int64 v253; // r11
  __int64 v254; // rsi
  __int64 v255; // r8
  __int64 v256; // rdi
  __int64 v257; // r9
  __int64 v258; // rsi
  __int64 v259; // rdi
  __int64 *v260; // rax
  __int64 v261; // rsi
  __int64 v262; // r12
  int v263; // eax
  unsigned int v264; // ecx
  __int64 v265; // rax
  __int64 v266; // rsi
  __int64 v267; // r9
  __int64 v268; // rdi
  __int64 v269; // r10
  __int64 v270; // rsi
  unsigned int v271; // edi
  _QWORD *v272; // rax
  unsigned int v273; // ecx
  __int64 v274; // rax
  __int64 v275; // rdi
  _DWORD *v276; // r10
  __int64 v277; // rsi
  __int64 v278; // r11
  __int64 v279; // rdi
  unsigned int v280; // r14d
  __int64 v281; // rsi
  unsigned int v282; // r8d
  __int64 *v283; // rax
  unsigned int v284; // eax
  _QWORD *v285; // rcx
  unsigned int v286; // eax
  _QWORD *v287; // rcx
  unsigned int v288; // ecx
  __int64 v289; // rax
  __int64 v290; // rsi
  unsigned int v291; // edi
  unsigned int *v292; // rax
  unsigned int v293; // ecx
  __int64 v294; // rax
  __int64 v295; // rsi
  __int64 v296; // rdi
  _QWORD *v297; // rax
  const char *v298; // rsi
  unsigned int v299; // ecx
  __int64 v300; // rax
  __int64 v301; // rdi
  __int64 v302; // r8
  __int64 v303; // rsi
  __int64 v304; // rdi
  _DWORD *v305; // rax
  __int64 v306; // rax
  __int64 *v307; // rcx
  __int64 *v308; // rax
  _QWORD *v309; // rcx
  __int64 *v310; // rax
  __int64 *v311; // rcx
  _QWORD *v312; // rax
  unsigned int *v313; // rcx
  _QWORD *v314; // rax
  unsigned int *v315; // rcx
  _DWORD *v316; // rax
  __int64 *v317; // rcx
  unsigned int *v318; // rcx
  _DWORD *v319; // rax
  __int64 *v320; // rcx
  _DWORD *v321; // rcx
  _DWORD **v322; // rax
  __int64 *v323; // rcx
  unsigned int *v324; // rax
  unsigned int *v325; // rcx
  __int64 *v326; // rcx
  _QWORD *v327; // rax
  const char **v328; // rcx
  _QWORD *v329; // rax
  unsigned int *v330; // rcx
  _QWORD **v331; // rax
  _QWORD *v332; // rcx
  unsigned int *v333; // rax
  _DWORD *v334; // rcx
  _DWORD *v335; // rax
  __int64 *v336; // rcx
  __int64 *v337; // rax
  __int64 *v338; // rcx
  unsigned int *v339; // rcx
  unsigned int *v340; // rax
  _DWORD *v341; // rcx
  _QWORD *v342; // rcx
  unsigned int *v343; // rcx
  unsigned int *v344; // rax
  _DWORD *v345; // rcx
  _DWORD **v346; // rax
  _QWORD *v347; // rcx
  __int64 *v348; // rcx
  _QWORD *v349; // rcx
  unsigned int *v350; // rax
  _DWORD *v351; // rcx
  unsigned int *v352; // rcx
  _DWORD *v353; // rax
  __int64 *v354; // rcx
  _DWORD *v355; // rcx
  _DWORD *v356; // rcx
  __int64 *v357; // rax
  __int64 *v358; // rcx
  _QWORD **v359; // rax
  __int64 *v360; // rcx
  __int64 *v361; // rax
  __int64 *v362; // rcx
  const char **v363; // rcx
  unsigned int *v364; // rax
  __int64 *v365; // rcx
  _DWORD **v366; // rcx
  unsigned int *v367; // rax
  __int64 *v368; // rcx
  _DWORD *v369; // rcx
  __int64 *v370; // rax
  __int64 *v371; // rcx
  _QWORD **v372; // rcx
  __int64 *v373; // rax
  _QWORD *v374; // rcx
  __int64 *v375; // rcx
  _QWORD *v376; // rax
  _DWORD *v377; // rcx
  _QWORD **v378; // rax
  __int64 *v379; // rcx
  __int64 *v380; // rax
  __int64 *v381; // rcx
  __int64 *v382; // rcx
  unsigned int *v383; // rcx
  _QWORD **v384; // rax
  __int64 *v385; // rax
  unsigned int *v386; // rax
  __int64 *v387; // rax
  __int64 *v388; // rax
  int v389; // eax
  int v390; // ebx
  int *v391; // [rsp+8h] [rbp-78h]
  __int64 v392; // [rsp+18h] [rbp-68h]
  unsigned int v393; // [rsp+18h] [rbp-68h]
  const char *v394; // [rsp+18h] [rbp-68h]
  const char *v395; // [rsp+30h] [rbp-50h] BYREF
  __int128 v396; // [rsp+38h] [rbp-48h]
  unsigned __int64 v397; // [rsp+48h] [rbp-38h]

  v6 = 0;
  v7 = *(_DWORD *)(a1 + 136);
  v397 = __readfsqword(0x28u);
  if ( *(_DWORD *)(dbg + 16LL) != v7 || *(_QWORD *)(dbg + 32LL) != *(_QWORD *)(a1 + 152) )
    return v6;
  v10 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
  if ( (char *)v10 == (char *)sub_12A40 )
  {
    v392 = a1 + 488;
  }
  else
  {
    v391 = a3;
    v306 = v10();
    a3 = v391;
    v392 = v306;
  }
  switch ( a2 )
  {
    case 0LL:
      v238 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v363 = *((const char ***)a3 + 1);
        v364 = (unsigned int *)(v363 + 1);
        *((_QWORD *)a3 + 1) = v363 + 1;
        v394 = *v363;
      }
      else
      {
        v239 = *((_QWORD *)a3 + 2);
        v240 = v238 + 8;
        *a3 = v240;
        v394 = *(const char **)(v239 + v238);
        if ( (unsigned int)v240 <= 0x2F )
        {
          v241 = v238 + 16;
          *a3 = v241;
          v242 = *(_DWORD *)(v239 + v240);
          if ( (unsigned int)v241 <= 0x2F )
          {
            v243 = v238 + 24;
            *a3 = v243;
            v244 = *(_QWORD *)(v239 + v241);
            if ( (unsigned int)v243 <= 0x2F )
            {
              v245 = (__int64 *)(v243 + v239);
              *a3 = v238 + 32;
              goto LABEL_200;
            }
            while ( 1 )
            {
              v245 = *((__int64 **)a3 + 1);
LABEL_344:
              *((_QWORD *)a3 + 1) = v245 + 1;
LABEL_200:
              v246 = *v245;
              if ( *v245 )
                break;
              if ( under_debugger )
                BUG();
              interr();
            }
            if ( (*(_DWORD *)debug & 0x10000) != 0 )
            {
              v396 = 0;
              v395 = nullptr;
              get_dbctx_id();
              sub_15ED0((__int64 *)&v395);
              v247 = src;
              if ( (_QWORD)v396 )
                v247 = v395;
              sub_13DB0((__int64)"%s: debugger_t::ev_init_debugger (%s,%d,)\n", v247, v394, v242);
              if ( v395 )
              {
                *(_QWORD *)&v396 = 0;
                qfree();
              }
            }
            return (int)sub_165A0(a1, (__int64)v394, v242, v244, v246);
          }
          v365 = *((__int64 **)a3 + 1);
LABEL_343:
          v245 = v365 + 1;
          *((_QWORD *)a3 + 1) = v365 + 1;
          v244 = *v365;
          goto LABEL_344;
        }
        v364 = *((unsigned int **)a3 + 1);
      }
      v365 = (__int64 *)(v364 + 2);
      *((_QWORD *)a3 + 1) = v364 + 2;
      v242 = *v364;
      goto LABEL_343;
    case 1LL:
      if ( (*(_DWORD *)debug & 0x10000) != 0 )
      {
        v395 = nullptr;
        v396 = 0;
        get_dbctx_id();
        sub_15ED0((__int64 *)&v395);
        v298 = src;
        if ( (_QWORD)v396 )
          v298 = v395;
        sub_13DB0((__int64)"%s: debugger_t::ev_term_debugger\n", v298);
        if ( v395 )
        {
          *(_QWORD *)&v396 = 0;
          qfree();
        }
      }
      return (int)sub_15DA0((__int64 *)a1);
    case 2LL:
      v293 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v307 = *((__int64 **)a3 + 1);
        v297 = v307 + 1;
        *((_QWORD *)a3 + 1) = v307 + 1;
        v296 = *v307;
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
          return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v392 + 72LL))(v392, v296, *v297);
        }
        v297 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v297 + 1;
      return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v392 + 72LL))(v392, v296, *v297);
    case 3LL:
      v248 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v310 = *((__int64 **)a3 + 1);
        v311 = v310 + 1;
        *((_QWORD *)a3 + 1) = v310 + 1;
        v251 = *v310;
      }
      else
      {
        v249 = *((_QWORD *)a3 + 2);
        v250 = v248 + 8;
        *a3 = v250;
        v251 = *(_QWORD *)(v249 + v248);
        if ( (unsigned int)v250 <= 0x2F )
        {
          v252 = v248 + 16;
          *a3 = v252;
          v253 = *(_QWORD *)(v249 + v250);
          if ( (unsigned int)v252 <= 0x2F )
          {
            v254 = v248 + 24;
            *a3 = v254;
            v255 = *(_QWORD *)(v249 + v252);
            if ( (unsigned int)v254 <= 0x2F )
            {
              v256 = v248 + 32;
              *a3 = v256;
              v257 = *(unsigned int *)(v249 + v254);
              if ( (unsigned int)v256 <= 0x2F )
              {
                v258 = v248 + 40;
                *a3 = v258;
                v259 = *(_QWORD *)(v249 + v256);
                if ( (unsigned int)v258 <= 0x2F )
                {
                  *a3 = v248 + 48;
                  v260 = *((__int64 **)a3 + 1);
                  v261 = *(unsigned int *)(v249 + v258);
                  goto LABEL_214;
                }
                v315 = *((unsigned int **)a3 + 1);
LABEL_266:
                v260 = (__int64 *)(v315 + 2);
                *((_QWORD *)a3 + 1) = v315 + 2;
                v261 = *v315;
LABEL_214:
                *((_QWORD *)a3 + 1) = v260 + 1;
                v262 = *v260;
                *((_QWORD *)a3 + 1) = v260 + 2;
                v263 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v392 + 128LL))(
                         v392,
                         v251,
                         v253,
                         v260[1],
                         v255,
                         v257,
                         v259,
                         v261,
                         v262);
                v6 = v263;
                if ( v263 > 0 )
                  goto LABEL_135;
                return v6;
              }
              v314 = *((_QWORD **)a3 + 1);
LABEL_265:
              v315 = (unsigned int *)(v314 + 1);
              *((_QWORD *)a3 + 1) = v314 + 1;
              v259 = *v314;
              goto LABEL_266;
            }
            v313 = *((unsigned int **)a3 + 1);
LABEL_264:
            v314 = v313 + 2;
            *((_QWORD *)a3 + 1) = v313 + 2;
            v257 = *v313;
            goto LABEL_265;
          }
          v312 = *((_QWORD **)a3 + 1);
LABEL_263:
          v313 = (unsigned int *)(v312 + 1);
          *((_QWORD *)a3 + 1) = v312 + 1;
          v255 = *v312;
          goto LABEL_264;
        }
        v311 = *((__int64 **)a3 + 1);
      }
      v312 = v311 + 1;
      *((_QWORD *)a3 + 1) = v311 + 1;
      v253 = *v311;
      goto LABEL_263;
    case 4LL:
      v149 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v343 = *((unsigned int **)a3 + 1);
        v344 = v343 + 2;
        *((_QWORD *)a3 + 1) = v343 + 2;
        v152 = *v343;
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
              goto LABEL_134;
            }
            v157 = *((_QWORD **)a3 + 1);
LABEL_311:
            *((_QWORD *)a3 + 1) = v157 + 1;
LABEL_134:
            v158 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v392 + 144LL))(
                     v392,
                     v152,
                     v154,
                     v156,
                     *v157);
            v6 = v158;
            if ( v158 > 0 )
LABEL_135:
              sub_16200((__int64 *)a1, 1u);
            return v6;
          }
          v345 = *((_DWORD **)a3 + 1);
LABEL_310:
          v157 = v345 + 2;
          *((_QWORD *)a3 + 1) = v345 + 2;
          v156 = *v345;
          goto LABEL_311;
        }
        v344 = *((unsigned int **)a3 + 1);
      }
      v345 = v344 + 2;
      *((_QWORD *)a3 + 1) = v344 + 2;
      v154 = *v344;
      goto LABEL_310;
    case 5LL:
      return (*(int (__fastcall **)(__int64))(*(_QWORD *)v392 + 120LL))(v392);
    case 6LL:
      v286 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v287 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v287 + 1;
      }
      else
      {
        v287 = (_QWORD *)(*((_QWORD *)a3 + 2) + v286);
        *a3 = v286 + 8;
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v392 + 552LL))(v392, *v287);
      return 1;
    case 7LL:
      v227 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v228 = *((__int64 **)a3 + 1);
        *((_QWORD *)a3 + 1) = v228 + 1;
      }
      else
      {
        v228 = (__int64 *)(*((_QWORD *)a3 + 2) + v227);
        *a3 = v227 + 8;
      }
      sub_14F90(*v228, a4, a5);
      return 1;
    case 8LL:
      v225 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v226 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v226 + 1;
      }
      else
      {
        v226 = (_QWORD *)(*((_QWORD *)a3 + 2) + v225);
        *a3 = v225 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v392 + 152LL))(v392, *v226);
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
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v392 + 160LL))(v392, *v93);
    case 10LL:
      v85 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v346 = *((_DWORD ***)a3 + 1);
        v347 = v346 + 1;
        *((_QWORD *)a3 + 1) = v346 + 1;
        v88 = *v346;
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
            goto LABEL_84;
          }
          v91 = *((unsigned int **)a3 + 1);
LABEL_315:
          *((_QWORD *)a3 + 1) = v91 + 2;
LABEL_84:
          *v88 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v392 + 136LL))(v392, v90, *v91);
          return 1;
        }
        v347 = *((_QWORD **)a3 + 1);
      }
      v91 = (unsigned int *)(v347 + 1);
      *((_QWORD *)a3 + 1) = v347 + 1;
      v90 = *v347;
      goto LABEL_315;
    case 11LL:
      v284 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v285 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v285 + 1;
      }
      else
      {
        v285 = (_QWORD *)(*((_QWORD *)a3 + 2) + v284);
        *a3 = v284 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v392 + 168LL))(v392, *v285);
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
      v84 = *(__int64 (**)())(*(_QWORD *)v392 + 176LL);
      if ( v84 == sub_129A0 )
        return 0;
      return ((int (__fastcall *)(__int64, bool))v84)(v392, *v83 != 0);
    case 13LL:
      v137 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v342 = *((_QWORD **)a3 + 1);
        v141 = (unsigned int *)(v342 + 1);
        *((_QWORD *)a3 + 1) = v342 + 1;
        v140 = *v342;
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
          goto LABEL_123;
        }
        v141 = *((unsigned int **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v141 + 2;
LABEL_123:
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v392 + 184LL))(v392, v140, *v141);
      return 1;
    case 14LL:
      v132 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v355 = *((_DWORD **)a3 + 1);
        v136 = v355 + 2;
        *((_QWORD *)a3 + 1) = v355 + 2;
        v135 = *v355 != 0;
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
          goto LABEL_118;
        }
        v136 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v136 + 1;
LABEL_118:
      (*(void (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)v392 + 192LL))(v392, 0, v135, *v136);
      if ( v135 )
        sub_71150(v392);
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
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v392 + 200LL))(v392, *v131);
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
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v392 + 208LL))(v392, *v129);
    case 17LL:
      v288 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v383 = *((unsigned int **)a3 + 1);
        v292 = v383 + 2;
        *((_QWORD *)a3 + 1) = v383 + 2;
        v291 = *v383;
      }
      else
      {
        v289 = *((_QWORD *)a3 + 2);
        v290 = v288 + 8;
        *a3 = v290;
        v291 = *(_DWORD *)(v289 + v288);
        if ( (unsigned int)v290 <= 0x2F )
        {
          v292 = (unsigned int *)(v290 + v289);
          *a3 = v288 + 16;
          return (*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v392 + 216LL))(v392, v291, *v292);
        }
        v292 = *((unsigned int **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v292 + 2;
      return (*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v392 + 216LL))(v392, v291, *v292);
    case 18LL:
      v229 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v318 = *((unsigned int **)a3 + 1);
        v319 = v318 + 2;
        *((_QWORD *)a3 + 1) = v318 + 2;
        v232 = *v318;
      }
      else
      {
        v230 = *((_QWORD *)a3 + 2);
        v231 = v229 + 8;
        *a3 = v231;
        v232 = *(_DWORD *)(v230 + v229);
        if ( (unsigned int)v231 <= 0x2F )
        {
          v233 = v229 + 16;
          *a3 = v233;
          v234 = *(_DWORD *)(v230 + v231);
          if ( (unsigned int)v233 <= 0x2F )
          {
            v235 = v229 + 24;
            *a3 = v235;
            v236 = *(_QWORD *)(v230 + v233);
            if ( (unsigned int)v235 <= 0x2F )
            {
              v237 = (_QWORD *)(v235 + v230);
              *a3 = v229 + 32;
              return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v392 + 224LL))(
                       v392,
                       v232,
                       v234,
                       v236,
                       *v237);
            }
            v237 = *((_QWORD **)a3 + 1);
LABEL_276:
            *((_QWORD *)a3 + 1) = v237 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v392 + 224LL))(
                     v392,
                     v232,
                     v234,
                     v236,
                     *v237);
          }
          v320 = *((__int64 **)a3 + 1);
LABEL_275:
          v237 = v320 + 1;
          *((_QWORD *)a3 + 1) = v320 + 1;
          v236 = *v320;
          goto LABEL_276;
        }
        v319 = *((_DWORD **)a3 + 1);
      }
      v320 = (__int64 *)(v319 + 2);
      *((_QWORD *)a3 + 1) = v319 + 2;
      v234 = *v319;
      goto LABEL_275;
    case 19LL:
      v119 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v352 = *((unsigned int **)a3 + 1);
        v353 = v352 + 2;
        *((_QWORD *)a3 + 1) = v352 + 2;
        v122 = *v352;
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
              return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v392 + 232LL))(
                       v392,
                       v122,
                       v124,
                       v126,
                       *v127);
            }
            v127 = *((_QWORD **)a3 + 1);
LABEL_326:
            *((_QWORD *)a3 + 1) = v127 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v392 + 232LL))(
                     v392,
                     v122,
                     v124,
                     v126,
                     *v127);
          }
          v354 = *((__int64 **)a3 + 1);
LABEL_325:
          v127 = v354 + 1;
          *((_QWORD *)a3 + 1) = v354 + 1;
          v126 = *v354;
          goto LABEL_326;
        }
        v353 = *((_DWORD **)a3 + 1);
      }
      v354 = (__int64 *)(v353 + 2);
      *((_QWORD *)a3 + 1) = v353 + 2;
      v124 = *v353;
      goto LABEL_325;
    case 20LL:
      v110 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v349 = *((_QWORD **)a3 + 1);
        v350 = (unsigned int *)(v349 + 1);
        *((_QWORD *)a3 + 1) = v349 + 1;
        v113 = *v349;
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
              return (*(int (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v392 + 240LL))(
                       v392,
                       v113,
                       v115,
                       v117,
                       *v118);
            }
            v118 = *((_QWORD **)a3 + 1);
LABEL_322:
            *((_QWORD *)a3 + 1) = v118 + 1;
            return (*(int (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v392 + 240LL))(
                     v392,
                     v113,
                     v115,
                     v117,
                     *v118);
          }
          v351 = *((_DWORD **)a3 + 1);
LABEL_321:
          v118 = v351 + 2;
          *((_QWORD *)a3 + 1) = v351 + 2;
          v117 = *v351;
          goto LABEL_322;
        }
        v350 = *((unsigned int **)a3 + 1);
      }
      v351 = v350 + 2;
      *((_QWORD *)a3 + 1) = v350 + 2;
      v115 = *v350;
      goto LABEL_321;
    case 21LL:
      v220 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v382 = *((__int64 **)a3 + 1);
        v224 = v382 + 1;
        *((_QWORD *)a3 + 1) = v382 + 1;
        v223 = *v382;
      }
      else
      {
        v221 = *((_QWORD *)a3 + 2);
        v222 = v220 + 8;
        *a3 = v222;
        v223 = *(_QWORD *)(v221 + v220);
        if ( (unsigned int)v222 <= 0x2F )
        {
          v224 = (_QWORD *)(v222 + v221);
          *a3 = v220 + 16;
          return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v392 + 256LL))(v392, v223, *v224);
        }
        v224 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v224 + 1;
      return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v392 + 256LL))(v392, v223, *v224);
    case 22LL:
      v210 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v359 = *((_QWORD ***)a3 + 1);
        v360 = (__int64 *)(v359 + 1);
        *((_QWORD *)a3 + 1) = v359 + 1;
        v200 = *v359;
      }
      else
      {
        v211 = *((_QWORD *)a3 + 2);
        v212 = v210 + 8;
        *a3 = v212;
        v200 = *(__int64 **)(v211 + v210);
        if ( (unsigned int)v212 <= 0x2F )
        {
          v213 = v210 + 16;
          *a3 = v213;
          v214 = *(_QWORD *)(v211 + v212);
          if ( (unsigned int)v213 <= 0x2F )
          {
            v215 = v210 + 24;
            *a3 = v215;
            v216 = *(_QWORD *)(v211 + v213);
            if ( (unsigned int)v215 <= 0x2F )
            {
              v217 = v210 + 32;
              *a3 = v217;
              v218 = *(_QWORD *)(v211 + v215);
              if ( (unsigned int)v217 <= 0x2F )
              {
                v219 = (_QWORD *)(v217 + v211);
                *a3 = v210 + 40;
                goto LABEL_178;
              }
              v219 = *((_QWORD **)a3 + 1);
LABEL_340:
              *((_QWORD *)a3 + 1) = v219 + 1;
LABEL_178:
              v208 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v392 + 288LL))(
                       v392,
                       v214,
                       v216,
                       v218,
                       *v219);
              goto LABEL_168;
            }
            v362 = *((__int64 **)a3 + 1);
LABEL_339:
            v219 = v362 + 1;
            *((_QWORD *)a3 + 1) = v362 + 1;
            v218 = *v362;
            goto LABEL_340;
          }
          v361 = *((__int64 **)a3 + 1);
LABEL_338:
          v362 = v361 + 1;
          *((_QWORD *)a3 + 1) = v361 + 1;
          v216 = *v361;
          goto LABEL_339;
        }
        v360 = *((__int64 **)a3 + 1);
      }
      v361 = v360 + 1;
      *((_QWORD *)a3 + 1) = v360 + 1;
      v214 = *v360;
      goto LABEL_338;
    case 23LL:
      v197 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v378 = *((_QWORD ***)a3 + 1);
        v379 = (__int64 *)(v378 + 1);
        *((_QWORD *)a3 + 1) = v378 + 1;
        v200 = *v378;
      }
      else
      {
        v198 = *((_QWORD *)a3 + 2);
        v199 = v197 + 8;
        *a3 = v199;
        v200 = *(__int64 **)(v198 + v197);
        if ( (unsigned int)v199 <= 0x2F )
        {
          v201 = v197 + 16;
          *a3 = v201;
          v202 = *(_QWORD *)(v198 + v199);
          if ( (unsigned int)v201 <= 0x2F )
          {
            v203 = v197 + 24;
            *a3 = v203;
            v204 = *(_QWORD *)(v198 + v201);
            if ( (unsigned int)v203 <= 0x2F )
            {
              v205 = v197 + 32;
              *a3 = v205;
              v206 = *(_QWORD *)(v198 + v203);
              if ( (unsigned int)v205 <= 0x2F )
              {
                v207 = (_QWORD *)(v205 + v198);
                *a3 = v197 + 40;
                goto LABEL_167;
              }
              v207 = *((_QWORD **)a3 + 1);
LABEL_366:
              *((_QWORD *)a3 + 1) = v207 + 1;
LABEL_167:
              v208 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v392 + 296LL))(
                       v392,
                       v202,
                       v204,
                       v206,
                       *v207);
LABEL_168:
              v209 = 0;
              if ( v208 >= 0 )
                v209 = v208;
              *v200 = v209;
              if ( v208 < 0 )
                return -5;
              return 1;
            }
            v381 = *((__int64 **)a3 + 1);
LABEL_365:
            v207 = v381 + 1;
            *((_QWORD *)a3 + 1) = v381 + 1;
            v206 = *v381;
            goto LABEL_366;
          }
          v380 = *((__int64 **)a3 + 1);
LABEL_364:
          v381 = v380 + 1;
          *((_QWORD *)a3 + 1) = v380 + 1;
          v204 = *v380;
          goto LABEL_365;
        }
        v379 = *((__int64 **)a3 + 1);
      }
      v380 = v379 + 1;
      *((_QWORD *)a3 + 1) = v379 + 1;
      v202 = *v379;
      goto LABEL_364;
    case 24LL:
      v186 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v366 = *((_DWORD ***)a3 + 1);
        v367 = (unsigned int *)(v366 + 1);
        *((_QWORD *)a3 + 1) = v366 + 1;
        v189 = *v366;
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
          v191 = *(_DWORD *)(v187 + v188);
          if ( (unsigned int)v190 <= 0x2F )
          {
            v192 = v186 + 24;
            *a3 = v192;
            v193 = *(_QWORD *)(v187 + v190);
            if ( (unsigned int)v192 <= 0x2F )
            {
              v194 = (unsigned int *)(v192 + v187);
              *a3 = v186 + 32;
              goto LABEL_159;
            }
            v194 = *((unsigned int **)a3 + 1);
LABEL_349:
            *((_QWORD *)a3 + 1) = v194 + 2;
LABEL_159:
            v195 = *v194;
            v196 = sub_15020(a1 + 120, v191, v193, *v194);
            *v189 = v196;
            if ( !v196 )
              *v189 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v392 + 304LL))(
                        v392,
                        v191,
                        v193,
                        v195);
            return 1;
          }
          v368 = *((__int64 **)a3 + 1);
LABEL_348:
          v194 = (unsigned int *)(v368 + 1);
          *((_QWORD *)a3 + 1) = v368 + 1;
          v193 = *v368;
          goto LABEL_349;
        }
        v367 = *((unsigned int **)a3 + 1);
      }
      v368 = (__int64 *)(v367 + 2);
      *((_QWORD *)a3 + 1) = v367 + 2;
      v191 = *v367;
      goto LABEL_348;
    case 25LL:
      v273 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v322 = *((_DWORD ***)a3 + 1);
        v323 = (__int64 *)(v322 + 1);
        *((_QWORD *)a3 + 1) = v322 + 1;
        v276 = *v322;
      }
      else
      {
        v274 = *((_QWORD *)a3 + 2);
        v275 = v273 + 8;
        *a3 = v275;
        v276 = *(_DWORD **)(v274 + v273);
        if ( (unsigned int)v275 <= 0x2F )
        {
          v277 = v273 + 16;
          *a3 = v277;
          v278 = *(_QWORD *)(v274 + v275);
          if ( (unsigned int)v277 <= 0x2F )
          {
            v279 = v273 + 24;
            *a3 = v279;
            v280 = *(_DWORD *)(v274 + v277);
            if ( (unsigned int)v279 <= 0x2F )
            {
              v281 = v273 + 32;
              *a3 = v281;
              v282 = *(_DWORD *)(v274 + v279);
              if ( (unsigned int)v281 <= 0x2F )
              {
                v283 = (__int64 *)(v281 + v274);
                *a3 = v273 + 40;
                return (int)sub_15940((_QWORD *)a1, v276, v278, v280, v282, *v283);
              }
              v283 = *((__int64 **)a3 + 1);
LABEL_283:
              *((_QWORD *)a3 + 1) = v283 + 1;
              return (int)sub_15940((_QWORD *)a1, v276, v278, v280, v282, *v283);
            }
            v325 = *((unsigned int **)a3 + 1);
LABEL_282:
            v283 = (__int64 *)(v325 + 2);
            *((_QWORD *)a3 + 1) = v325 + 2;
            v282 = *v325;
            goto LABEL_283;
          }
          v324 = *((unsigned int **)a3 + 1);
LABEL_281:
          v325 = v324 + 2;
          *((_QWORD *)a3 + 1) = v324 + 2;
          v280 = *v324;
          goto LABEL_282;
        }
        v323 = *((__int64 **)a3 + 1);
      }
      v324 = (unsigned int *)(v323 + 1);
      *((_QWORD *)a3 + 1) = v323 + 1;
      v278 = *v323;
      goto LABEL_281;
    case 26LL:
      v264 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v375 = *((__int64 **)a3 + 1);
        v376 = v375 + 1;
        *((_QWORD *)a3 + 1) = v375 + 1;
        v267 = *v375;
      }
      else
      {
        v265 = *((_QWORD *)a3 + 2);
        v266 = v264 + 8;
        *a3 = v266;
        v267 = *(_QWORD *)(v265 + v264);
        if ( (unsigned int)v266 <= 0x2F )
        {
          v268 = v264 + 16;
          *a3 = v268;
          v269 = *(_QWORD *)(v265 + v266);
          if ( (unsigned int)v268 <= 0x2F )
          {
            v270 = v264 + 24;
            *a3 = v270;
            v271 = *(_DWORD *)(v265 + v268);
            if ( (unsigned int)v270 <= 0x2F )
            {
              v272 = (_QWORD *)(v270 + v265);
              *a3 = v264 + 32;
              return (*(int (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v392 + 352LL))(
                       v392,
                       v267,
                       v269,
                       v271,
                       *v272);
            }
            v272 = *((_QWORD **)a3 + 1);
LABEL_361:
            *((_QWORD *)a3 + 1) = v272 + 1;
            return (*(int (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v392 + 352LL))(
                     v392,
                     v267,
                     v269,
                     v271,
                     *v272);
          }
          v377 = *((_DWORD **)a3 + 1);
LABEL_360:
          v272 = v377 + 2;
          *((_QWORD *)a3 + 1) = v377 + 2;
          v271 = *v377;
          goto LABEL_361;
        }
        v376 = *((_QWORD **)a3 + 1);
      }
      v377 = v376 + 1;
      *((_QWORD *)a3 + 1) = v376 + 1;
      v269 = *v376;
      goto LABEL_360;
    case 27LL:
      v299 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v308 = *((__int64 **)a3 + 1);
        v309 = v308 + 1;
        *((_QWORD *)a3 + 1) = v308 + 1;
        v302 = *v308;
      }
      else
      {
        v300 = *((_QWORD *)a3 + 2);
        v301 = v299 + 8;
        *a3 = v301;
        v302 = *(_QWORD *)(v300 + v299);
        if ( (unsigned int)v301 <= 0x2F )
        {
          v303 = v299 + 16;
          *a3 = v303;
          v304 = *(_QWORD *)(v300 + v301);
          if ( (unsigned int)v303 <= 0x2F )
          {
            v305 = (_DWORD *)(v303 + v300);
            *a3 = v299 + 24;
            return (*(int (__fastcall **)(__int64, __int64, __int64, bool))(*(_QWORD *)v392 + 368LL))(
                     v392,
                     v302,
                     v304,
                     *v305 != 0);
          }
          v305 = *((_DWORD **)a3 + 1);
LABEL_260:
          *((_QWORD *)a3 + 1) = v305 + 2;
          return (*(int (__fastcall **)(__int64, __int64, __int64, bool))(*(_QWORD *)v392 + 368LL))(
                   v392,
                   v302,
                   v304,
                   *v305 != 0);
        }
        v309 = *((_QWORD **)a3 + 1);
      }
      v305 = v309 + 1;
      *((_QWORD *)a3 + 1) = v309 + 1;
      v304 = *v309;
      goto LABEL_260;
    case 28LL:
      v72 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v73 = *((unsigned int **)a3 + 1);
        *((_QWORD *)a3 + 1) = v73 + 2;
      }
      else
      {
        v73 = (unsigned int *)(*((_QWORD *)a3 + 2) + v72);
        *a3 = v72 + 8;
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v392 + 376LL))(v392, *v73);
      return 1;
    case 29LL:
      v168 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v369 = *((_DWORD **)a3 + 1);
        v370 = (__int64 *)(v369 + 2);
        *((_QWORD *)a3 + 1) = v369 + 2;
        v171 = *v369;
      }
      else
      {
        v169 = *((_QWORD *)a3 + 2);
        v170 = v168 + 8;
        *a3 = v170;
        v171 = *(_DWORD *)(v169 + v168);
        if ( (unsigned int)v170 <= 0x2F )
        {
          v172 = v168 + 16;
          *a3 = v172;
          v173 = *(_QWORD *)(v169 + v170);
          if ( (unsigned int)v172 <= 0x2F )
          {
            v174 = v168 + 24;
            *a3 = v174;
            v175 = *(_QWORD *)(v169 + v172);
            if ( (unsigned int)v174 <= 0x2F )
            {
              v176 = (_QWORD *)(v174 + v169);
              *a3 = v168 + 32;
              return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v392 + 384LL))(
                       v392,
                       v171,
                       v173,
                       v175,
                       *v176);
            }
            v176 = *((_QWORD **)a3 + 1);
LABEL_353:
            *((_QWORD *)a3 + 1) = v176 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v392 + 384LL))(
                     v392,
                     v171,
                     v173,
                     v175,
                     *v176);
          }
          v371 = *((__int64 **)a3 + 1);
LABEL_352:
          v176 = v371 + 1;
          *((_QWORD *)a3 + 1) = v371 + 1;
          v175 = *v371;
          goto LABEL_353;
        }
        v370 = *((__int64 **)a3 + 1);
      }
      v371 = v370 + 1;
      *((_QWORD *)a3 + 1) = v370 + 1;
      v173 = *v370;
      goto LABEL_352;
    case 30LL:
      v159 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v356 = *((_DWORD **)a3 + 1);
        v357 = (__int64 *)(v356 + 2);
        *((_QWORD *)a3 + 1) = v356 + 2;
        v162 = *v356;
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
              return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v392 + 392LL))(
                       v392,
                       v162,
                       v164,
                       v166,
                       *v167);
            }
            v167 = *((_QWORD **)a3 + 1);
LABEL_334:
            *((_QWORD *)a3 + 1) = v167 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v392 + 392LL))(
                     v392,
                     v162,
                     v164,
                     v166,
                     *v167);
          }
          v358 = *((__int64 **)a3 + 1);
LABEL_333:
          v167 = v358 + 1;
          *((_QWORD *)a3 + 1) = v358 + 1;
          v166 = *v358;
          goto LABEL_334;
        }
        v357 = *((__int64 **)a3 + 1);
      }
      v358 = v357 + 1;
      *((_QWORD *)a3 + 1) = v357 + 1;
      v164 = *v357;
      goto LABEL_333;
    case 31LL:
      v177 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v372 = *((_QWORD ***)a3 + 1);
        v373 = (__int64 *)(v372 + 1);
        *((_QWORD *)a3 + 1) = v372 + 1;
        v180 = *v372;
      }
      else
      {
        v178 = *((_QWORD *)a3 + 2);
        v179 = v177 + 8;
        *a3 = v179;
        v180 = *(_QWORD **)(v178 + v177);
        if ( (unsigned int)v179 <= 0x2F )
        {
          v181 = v177 + 16;
          *a3 = v181;
          v182 = *(_QWORD *)(v178 + v179);
          if ( (unsigned int)v181 <= 0x2F )
          {
            v183 = v177 + 24;
            *a3 = v183;
            v184 = *(_QWORD *)(v178 + v181);
            if ( (unsigned int)v183 <= 0x2F )
            {
              v185 = (unsigned int *)(v183 + v178);
              *a3 = v177 + 32;
              goto LABEL_153;
            }
            v185 = *((unsigned int **)a3 + 1);
LABEL_357:
            *((_QWORD *)a3 + 1) = v185 + 2;
LABEL_153:
            *v180 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v392 + 248LL))(
                      v392,
                      v182,
                      v184,
                      *v185);
            return 1;
          }
          v374 = *((_QWORD **)a3 + 1);
LABEL_356:
          v185 = (unsigned int *)(v374 + 1);
          *((_QWORD *)a3 + 1) = v374 + 1;
          v184 = *v374;
          goto LABEL_357;
        }
        v373 = *((__int64 **)a3 + 1);
      }
      v374 = v373 + 1;
      *((_QWORD *)a3 + 1) = v373 + 1;
      v182 = *v373;
      goto LABEL_356;
    case 33LL:
      v74 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v321 = *((_DWORD **)a3 + 1);
        v78 = v321 + 2;
        *((_QWORD *)a3 + 1) = v321 + 2;
        v77 = *v321;
      }
      else
      {
        v75 = *((_QWORD *)a3 + 2);
        v76 = v74 + 8;
        *a3 = v76;
        v77 = *(_DWORD *)(v75 + v74);
        if ( (unsigned int)v76 <= 0x2F )
        {
          v78 = (_QWORD *)(v76 + v75);
          *a3 = v74 + 16;
          goto LABEL_73;
        }
        v78 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v78 + 1;
LABEL_73:
      v79 = dbg;
      v80 = *(_QWORD *)(dbg + 32LL);
      if ( (v80 & 0x80000000000LL) == 0 )
        return 0;
      v81 = *(__int64 (**)())(*(_QWORD *)v392 + 416LL);
      if ( v81 == sub_129F0 )
        goto LABEL_75;
      v390 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v81)(v392, v77, *v78);
      if ( (unsigned int)(v390 + 1) > 1 )
        return v390;
      v79 = dbg;
      v80 = *(_QWORD *)(dbg + 32LL);
LABEL_75:
      *(_QWORD *)(v79 + 32) = v80 & 0xFFFFF7FFFFFFFFFFLL;
      return 0;
    case 34LL:
      if ( (*(_BYTE *)(a1 + 157) & 0x10) == 0 )
        return 0;
      v94 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v384 = *((_QWORD ***)a3 + 1);
        *((_QWORD *)a3 + 1) = v384 + 1;
        v97 = *v384;
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
                  goto LABEL_96;
                }
                *a3 = v103;
LABEL_377:
                v388 = *((__int64 **)a3 + 1);
                *((_QWORD *)a3 + 1) = v388 + 1;
                v104 = *v388;
LABEL_96:
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
                *v97 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v392 + 424LL))(
                         v392,
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
LABEL_376:
              *((_QWORD *)a3 + 1) += 8LL;
              goto LABEL_377;
            }
LABEL_375:
            v387 = *((__int64 **)a3 + 1);
            *((_QWORD *)a3 + 1) = v387 + 1;
            v102 = *v387;
            goto LABEL_376;
          }
LABEL_374:
          v386 = *((unsigned int **)a3 + 1);
          *((_QWORD *)a3 + 1) = v386 + 2;
          v101 = *v386;
          goto LABEL_375;
        }
      }
      v385 = *((__int64 **)a3 + 1);
      *((_QWORD *)a3 + 1) = v385 + 1;
      v99 = *v385;
      goto LABEL_374;
    case 35LL:
      if ( (*(_BYTE *)(a1 + 157) & 0x10) == 0 )
        return 0;
      v70 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v71 = *((unsigned int **)a3 + 1);
        *((_QWORD *)a3 + 1) = v71 + 2;
      }
      else
      {
        v71 = (unsigned int *)(*((_QWORD *)a3 + 2) + v70);
        *a3 = v70 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v392 + 432LL))(v392, *v71);
    case 36LL:
      v142 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v316 = *((_DWORD **)a3 + 1);
        v317 = (__int64 *)(v316 + 2);
        *((_QWORD *)a3 + 1) = v316 + 2;
        v145 = *v316;
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
            return (*(int (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v392 + 360LL))(
                     v392,
                     v145,
                     v147,
                     *v148);
          }
          v148 = *((_QWORD **)a3 + 1);
LABEL_271:
          *((_QWORD *)a3 + 1) = v148 + 1;
          return (*(int (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v392 + 360LL))(
                   v392,
                   v145,
                   v147,
                   *v148);
        }
        v317 = *((__int64 **)a3 + 1);
      }
      v148 = v317 + 1;
      *((_QWORD *)a3 + 1) = v317 + 1;
      v147 = *v317;
      goto LABEL_271;
    case 37LL:
      v58 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v335 = *((_DWORD **)a3 + 1);
        v336 = (__int64 *)(v335 + 2);
        *((_QWORD *)a3 + 1) = v335 + 2;
        v61 = *v335;
      }
      else
      {
        v59 = *((_QWORD *)a3 + 2);
        v60 = v58 + 8;
        *a3 = v60;
        v61 = *(_DWORD *)(v59 + v58);
        if ( (unsigned int)v60 <= 0x2F )
        {
          v62 = v58 + 16;
          *a3 = v62;
          v63 = *(_QWORD *)(v59 + v60);
          if ( (unsigned int)v62 <= 0x2F )
          {
            v64 = v58 + 24;
            *a3 = v64;
            v65 = *(_QWORD *)(v59 + v62);
            if ( (unsigned int)v64 <= 0x2F )
            {
              v66 = v58 + 32;
              *a3 = v66;
              v67 = *(_QWORD *)(v59 + v64);
              if ( (unsigned int)v66 <= 0x2F )
              {
                v68 = (_QWORD *)(v66 + v59);
                *a3 = v58 + 40;
                goto LABEL_61;
              }
              v68 = *((_QWORD **)a3 + 1);
LABEL_299:
              *((_QWORD *)a3 + 1) = v68 + 1;
LABEL_61:
              v69 = *(__int64 (**)())(*(_QWORD *)v392 + 400LL);
              if ( v69 != sub_129E0 )
                return ((int (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, _QWORD))v69)(
                         v392,
                         v61,
                         v63,
                         v65,
                         v67,
                         *v68);
              return 0;
            }
            v338 = *((__int64 **)a3 + 1);
LABEL_298:
            v68 = v338 + 1;
            *((_QWORD *)a3 + 1) = v338 + 1;
            v67 = *v338;
            goto LABEL_299;
          }
          v337 = *((__int64 **)a3 + 1);
LABEL_297:
          v338 = v337 + 1;
          *((_QWORD *)a3 + 1) = v337 + 1;
          v65 = *v337;
          goto LABEL_298;
        }
        v336 = *((__int64 **)a3 + 1);
      }
      v337 = v336 + 1;
      *((_QWORD *)a3 + 1) = v336 + 1;
      v63 = *v336;
      goto LABEL_297;
    case 38LL:
      v50 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v340 = *((unsigned int **)a3 + 1);
        v341 = v340 + 2;
        *((_QWORD *)a3 + 1) = v340 + 2;
        v53 = *v340;
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
          v55 = *(_DWORD *)(v51 + v52) != 0;
          if ( (unsigned int)v54 <= 0x2F )
          {
            v56 = (unsigned int *)(v54 + v51);
            *a3 = v50 + 24;
            goto LABEL_53;
          }
          v56 = *((unsigned int **)a3 + 1);
LABEL_305:
          *((_QWORD *)a3 + 1) = v56 + 2;
LABEL_53:
          v57 = *(__int64 (**)())(*(_QWORD *)v392 + 520LL);
          if ( v57 != sub_12A00 )
            return ((unsigned __int8 (__fastcall *)(__int64, _QWORD, bool, _QWORD))v57)(v392, v53, v55, *v56);
          return 0;
        }
        v341 = *((_DWORD **)a3 + 1);
      }
      v56 = v341 + 2;
      *((_QWORD *)a3 + 1) = v341 + 2;
      v55 = *v341 != 0;
      goto LABEL_305;
    case 39LL:
      v44 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v339 = *((unsigned int **)a3 + 1);
        v48 = v339 + 2;
        *((_QWORD *)a3 + 1) = v339 + 2;
        v47 = *v339;
      }
      else
      {
        v45 = *((_QWORD *)a3 + 2);
        v46 = v44 + 8;
        *a3 = v46;
        v47 = *(_DWORD *)(v45 + v44);
        if ( (unsigned int)v46 <= 0x2F )
        {
          v48 = (unsigned int *)(v46 + v45);
          *a3 = v44 + 16;
          goto LABEL_47;
        }
        v48 = *((unsigned int **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v48 + 2;
LABEL_47:
      v49 = *(__int64 (**)())(*(_QWORD *)v392 + 528LL);
      if ( v49 == sub_12A10 )
        return 0;
      return ((unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD))v49)(v392, v47, *v48);
    case 40LL:
      v42 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v43 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v43 + 1;
      }
      else
      {
        v43 = (_QWORD *)(*((_QWORD *)a3 + 2) + v42);
        *a3 = v42 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v392 + 536LL))(v392, *v43);
    case 41LL:
      v37 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v348 = *((__int64 **)a3 + 1);
        v41 = v348 + 1;
        *((_QWORD *)a3 + 1) = v348 + 1;
        v40 = *v348;
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
          return (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v392 + 560LL))(
                   v392,
                   v40,
                   *v41);
        }
        v41 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v41 + 1;
      return (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v392 + 560LL))(v392, v40, *v41);
    case 42LL:
      v24 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v326 = *((__int64 **)a3 + 1);
        v327 = v326 + 1;
        *((_QWORD *)a3 + 1) = v326 + 1;
        v27 = *v326;
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
LABEL_289:
                *((_QWORD *)a3 + 1) = v36 + 1;
LABEL_34:
                if ( v33 )
                {
                  v6 = (*(int (__fastcall **)(__int64, __int64, __int64, const char *, __int64, __int64, _QWORD))(*(_QWORD *)v392 + 576LL))(
                         v392,
                         v27,
                         v29,
                         v31,
                         v33,
                         v35,
                         *v36);
                  if ( (*(_DWORD *)debug & 0x10000) != 0 )
                    sub_13DB0((__int64)"debugger_t::ev_bin_search(%a, %a) -> %d(%s) ea %a\n", a4, a5, v29, v31, a6);
                  return v6;
                }
                return 0;
              }
              v330 = *((unsigned int **)a3 + 1);
LABEL_288:
              v36 = v330 + 2;
              *((_QWORD *)a3 + 1) = v330 + 2;
              v35 = *v330;
              goto LABEL_289;
            }
            v329 = *((_QWORD **)a3 + 1);
LABEL_287:
            v330 = (unsigned int *)(v329 + 1);
            *((_QWORD *)a3 + 1) = v329 + 1;
            v33 = *v329;
            goto LABEL_288;
          }
          v328 = *((const char ***)a3 + 1);
LABEL_286:
          v329 = v328 + 1;
          *((_QWORD *)a3 + 1) = v328 + 1;
          v31 = *v328;
          goto LABEL_287;
        }
        v327 = *((_QWORD **)a3 + 1);
      }
      v328 = (const char **)(v327 + 1);
      *((_QWORD *)a3 + 1) = v327 + 1;
      v29 = *v327;
      goto LABEL_286;
    case 43LL:
      if ( !*(_BYTE *)(a1 + 208) )
        return 0;
      if ( (unsigned int)*a3 > 0x2F )
        *((_QWORD *)a3 + 1) += 8LL;
      else
        *a3 += 8;
      v23 = *(__int64 (**)())(*(_QWORD *)v392 + 584LL);
      if ( v23 == sub_12A30 || (v389 = ((__int64 (__fastcall *)(__int64))v23)(v392), v389 >= 0) )
      {
        serialize_dynamic_register_set();
        deserialize_dynamic_register_set();
        return 1;
      }
      return v389;
    case 44LL:
      v11 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v331 = *((_QWORD ***)a3 + 1);
        v332 = v331 + 1;
        *((_QWORD *)a3 + 1) = v331 + 1;
        v14 = *v331;
LABEL_291:
        v333 = (unsigned int *)(v332 + 1);
        *((_QWORD *)a3 + 1) = v332 + 1;
        v16 = *v332;
LABEL_292:
        v334 = v333 + 2;
        *((_QWORD *)a3 + 1) = v333 + 2;
        v393 = *v333;
LABEL_293:
        v20 = (__int64 *)(v334 + 2);
        *((_QWORD *)a3 + 1) = v334 + 2;
        v19 = *v334;
        goto LABEL_294;
      }
      v12 = *((_QWORD *)a3 + 2);
      v13 = v11 + 8;
      *a3 = v13;
      v14 = *(__int64 **)(v12 + v11);
      if ( (unsigned int)v13 > 0x2F )
      {
        v332 = *((_QWORD **)a3 + 1);
        goto LABEL_291;
      }
      v15 = v11 + 16;
      *a3 = v15;
      v16 = *(_QWORD *)(v12 + v13);
      if ( (unsigned int)v15 > 0x2F )
      {
        v333 = *((unsigned int **)a3 + 1);
        goto LABEL_292;
      }
      v17 = v11 + 24;
      *a3 = v17;
      v393 = *(_DWORD *)(v12 + v15);
      if ( (unsigned int)v17 > 0x2F )
      {
        v334 = *((_DWORD **)a3 + 1);
        goto LABEL_293;
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
LABEL_294:
      *((_QWORD *)a3 + 1) = v20 + 1;
LABEL_13:
      v21 = *v20;
      if ( (*(_DWORD *)debug & 0x10000) != 0 )
        sub_13DB0((__int64)"debugger_t::ev_set_dbg_options(%s)\n", (const char *)v16);
      v22 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 64LL))(
              a1,
              v16,
              v393,
              v19,
              v21);
      if ( !v16 || *(_BYTE *)v16 != 32 || (v6 = v22 != 0, *(_BYTE *)(v16 + 1)) )
      {
        if ( v14 )
          *v14 = v22;
        sub_16200((__int64 *)a1, *(_BYTE *)(a1 + 208));
        return 1;
      }
      return v6;
    default:
      return 0;
  }
}

