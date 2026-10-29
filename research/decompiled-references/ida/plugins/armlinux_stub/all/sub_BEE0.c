__int64 __fastcall sub_BEE0(__int64 a1, __int64 a2, int *a3, double a4, double a5, double a6)
{
  __int64 v6; // r15
  int v7; // ecx
  __int64 v9; // rbx
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
  int v25; // eax
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
  __int64 v46; // rbx
  __int64 v47; // rsi
  __int64 v48; // r8
  _QWORD *v49; // rax
  unsigned int v50; // ecx
  __int64 v51; // rax
  __int64 v52; // r8
  unsigned int v53; // r9d
  __int64 v54; // rsi
  __int64 v55; // r8
  _QWORD *v56; // rax
  unsigned int v57; // ecx
  __int64 v58; // rax
  __int64 v59; // rsi
  unsigned int v60; // r8d
  _QWORD *v61; // rax
  int v62; // ebx
  unsigned int v63; // ecx
  __int64 v64; // rax
  __int64 v65; // rsi
  unsigned int v66; // r9d
  __int64 v67; // r8
  __int64 v68; // r10
  __int64 v69; // rsi
  __int64 v70; // rbx
  _QWORD *v71; // rax
  unsigned int v72; // ecx
  __int64 v73; // rax
  __int64 v74; // rsi
  unsigned int v75; // r9d
  __int64 v76; // r8
  __int64 v77; // r10
  __int64 v78; // rsi
  __int64 v79; // rbx
  _QWORD *v80; // rax
  unsigned int v81; // eax
  unsigned int *v82; // rcx
  unsigned int v83; // ecx
  __int64 v84; // rax
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rsi
  __int64 v88; // r8
  _DWORD *v89; // rax
  unsigned int v90; // ecx
  __int64 v91; // rax
  __int64 v92; // rsi
  __int64 v93; // r9
  __int64 v94; // r8
  __int64 v95; // r10
  __int64 v96; // rsi
  unsigned int v97; // ebx
  _QWORD *v98; // rax
  unsigned int v99; // ecx
  __int64 v100; // rax
  __int64 v101; // rdi
  _DWORD *v102; // r10
  __int64 v103; // rsi
  __int64 *v104; // r11
  __int64 v105; // rdi
  unsigned int v106; // r14d
  int v107; // r8d
  unsigned int v108; // ecx
  __int64 v109; // rax
  __int64 v110; // rsi
  __int64 v111; // r8
  _QWORD *v112; // rax
  __int64 (*v113)(); // rcx
  unsigned int v114; // eax
  _DWORD *v115; // rcx
  __int64 (*v116)(); // rax
  unsigned int v117; // eax
  _QWORD *v118; // rcx
  unsigned int v119; // ecx
  __int64 v120; // rax
  __int64 v121; // r8
  _DWORD *v122; // rbx
  __int64 v123; // rsi
  __int64 v124; // r8
  unsigned int *v125; // rax
  unsigned int v126; // ecx
  __int64 v127; // rax
  __int64 v128; // rsi
  __int64 *v129; // rbx
  __int64 v130; // r9
  __int64 v131; // rsi
  __int64 v132; // r8
  __int64 v133; // r9
  unsigned int *v134; // rax
  __int64 (__fastcall *v135)(__int64, __int64); // r8
  unsigned int v136; // ecx
  __int64 v137; // rax
  __int64 v138; // rsi
  __int64 v139; // r9
  __int64 v140; // r8
  unsigned int v141; // r10d
  __int64 v142; // rsi
  unsigned int v143; // ebx
  _QWORD *v144; // rax
  unsigned int v145; // eax
  unsigned int *v146; // rcx
  unsigned int v147; // eax
  unsigned int *v148; // rcx
  unsigned int v149; // ecx
  __int64 v150; // rax
  __int64 v151; // r8
  bool v152; // si
  _QWORD *v153; // rax
  unsigned int v154; // ecx
  __int64 v155; // rax
  __int64 v156; // rsi
  __int64 v157; // r8
  unsigned int *v158; // rax
  unsigned int v159; // ecx
  unsigned int *v160; // rax
  unsigned int v161; // eax
  __int64 v162; // rsi
  __int64 v163; // rcx
  _QWORD *v164; // rbx
  __int64 v165; // r8
  __int64 v166; // r10
  __int64 v167; // rcx
  unsigned int v168; // r11d
  __int64 v169; // r14
  __int64 v170; // rcx
  __int64 v171; // r8
  __int64 *v172; // rax
  __int64 v173; // r9
  __int64 v174; // rcx
  __int64 v175; // rsi
  __int64 v176; // r12
  unsigned int v177; // ecx
  __int64 v178; // rax
  __int64 v179; // rsi
  unsigned int v180; // r9d
  __int64 v181; // r8
  unsigned int v182; // r10d
  __int64 v183; // rsi
  unsigned int v184; // r14d
  _QWORD *v185; // rax
  int v186; // eax
  unsigned int v187; // eax
  __int64 v188; // rcx
  __int64 v189; // rsi
  __int64 v190; // r11
  __int64 v191; // r8
  __int64 v192; // r14
  __int64 v193; // rsi
  __int64 v194; // r8
  __int64 v195; // r10
  __int64 v196; // r9
  __int64 v197; // rsi
  __int64 v198; // r10
  __int64 *v199; // rax
  __int64 v200; // rsi
  __int64 v201; // r12
  int v202; // eax
  unsigned int v203; // ecx
  __int64 v204; // rax
  __int64 v205; // rsi
  __int64 v206; // rdi
  unsigned int v207; // r12d
  __int64 v208; // rsi
  __int64 v209; // r13
  __int64 *v210; // rax
  __int64 v211; // r14
  const char *v212; // rsi
  unsigned int v213; // ecx
  __int64 v214; // rax
  __int64 v215; // rsi
  unsigned int v216; // r8d
  unsigned int *v217; // rax
  __int64 (*v218)(); // rcx
  unsigned int v219; // ecx
  __int64 v220; // rax
  __int64 v221; // r8
  unsigned int v222; // r10d
  __int64 v223; // rsi
  bool v224; // r9
  unsigned int *v225; // rax
  __int64 (*v226)(); // r8
  unsigned int v227; // ecx
  __int64 v228; // rax
  __int64 v229; // rsi
  _DWORD *v230; // rbx
  __int64 v231; // r8
  __int64 v232; // rsi
  __int64 v233; // r9
  __int64 v234; // r8
  _DWORD *v235; // rax
  unsigned int v236; // ecx
  __int64 v237; // rax
  __int64 v238; // r8
  __int64 v239; // rsi
  __int64 v240; // r9
  __int64 v241; // r8
  __int64 v242; // r10
  __int64 v243; // rsi
  _QWORD *v244; // rax
  __int64 v245; // rax
  __int64 v246; // rdx
  unsigned int v247; // ecx
  __int64 v248; // rax
  __int64 v249; // rsi
  __int64 v250; // r8
  _QWORD *v251; // rax
  unsigned int v252; // eax
  _QWORD *v253; // rcx
  unsigned int v254; // eax
  _QWORD *v255; // rcx
  unsigned int v256; // ecx
  __int64 v257; // rax
  __int64 v258; // rsi
  unsigned int v259; // r9d
  __int64 v260; // r8
  unsigned int v261; // r10d
  __int64 v262; // rsi
  __int64 v263; // rbx
  _QWORD *v264; // rax
  unsigned int v265; // ecx
  __int64 v266; // rax
  __int64 v267; // rsi
  __int64 v268; // r8
  _QWORD *v269; // rax
  const char *v270; // rsi
  unsigned int v271; // ecx
  __int64 v272; // rax
  __int64 v273; // r8
  __int64 v274; // rsi
  __int64 v275; // r9
  __int64 v276; // r8
  __int64 v277; // r10
  __int64 v278; // rsi
  __int64 v279; // r14
  _QWORD *v280; // rax
  unsigned int v281; // ecx
  __int64 v282; // rax
  __int64 v283; // rsi
  unsigned int v284; // r9d
  __int64 v285; // r8
  unsigned int v286; // r10d
  __int64 v287; // rsi
  __int64 v288; // rbx
  _QWORD *v289; // rax
  unsigned int v290; // eax
  _QWORD *v291; // rcx
  unsigned int v292; // ecx
  __int64 v293; // rax
  __int64 v294; // rsi
  unsigned int v295; // r8d
  unsigned int *v296; // rax
  unsigned int v297; // eax
  _QWORD *v298; // rcx
  unsigned int v299; // eax
  __int64 *v300; // rcx
  __int64 v301; // rax
  __int64 *v302; // rcx
  _QWORD **v303; // rcx
  __int64 *v304; // rax
  _QWORD *v305; // rcx
  unsigned int *v306; // rcx
  unsigned int *v307; // rcx
  _DWORD *v308; // rax
  __int64 *v309; // rcx
  unsigned int *v310; // rcx
  _DWORD *v311; // rax
  __int64 *v312; // rcx
  unsigned int *v313; // rax
  _DWORD *v314; // rcx
  _DWORD *v315; // rcx
  __int64 *v316; // rax
  __int64 *v317; // rcx
  __int64 *v318; // rax
  __int64 *v319; // rcx
  __int64 *v320; // rax
  __int64 *v321; // rcx
  __int64 *v322; // rcx
  _QWORD *v323; // rax
  const char **v324; // rcx
  _QWORD *v325; // rax
  unsigned int *v326; // rcx
  _QWORD **v327; // rax
  _QWORD *v328; // rcx
  unsigned int *v329; // rax
  _DWORD *v330; // rcx
  _DWORD **v331; // rax
  _QWORD *v332; // rcx
  _DWORD *v333; // rax
  __int64 *v334; // rcx
  __int64 *v335; // rax
  __int64 *v336; // rcx
  _QWORD *v337; // rcx
  _DWORD **v338; // rax
  __int64 **v339; // rcx
  unsigned int *v340; // rax
  int *v341; // rcx
  int *v342; // rax
  unsigned int *v343; // rcx
  __int64 *v344; // rcx
  _DWORD *v345; // rcx
  __int64 *v346; // rax
  __int64 *v347; // rcx
  __int64 *v348; // rcx
  _QWORD *v349; // rax
  _DWORD *v350; // rcx
  _DWORD *v351; // rcx
  __int64 *v352; // rcx
  __int64 *v353; // rax
  _QWORD *v354; // rcx
  _QWORD *v355; // rcx
  unsigned int *v356; // rax
  _DWORD *v357; // rcx
  _DWORD *v358; // rcx
  _DWORD *v359; // rax
  __int64 *v360; // rcx
  __int64 *v361; // rax
  __int64 *v362; // rcx
  __int64 *v363; // rax
  __int64 *v364; // rcx
  _DWORD **v365; // rcx
  unsigned int *v366; // rax
  _QWORD *v367; // rcx
  const char **v368; // rcx
  unsigned int *v369; // rax
  __int64 *v370; // rcx
  unsigned int *v371; // rcx
  unsigned int *v372; // rax
  _DWORD *v373; // rcx
  __int64 *v374; // rax
  __int64 *v375; // rcx
  _QWORD *v376; // rax
  unsigned int *v377; // rcx
  _QWORD *v378; // rax
  unsigned int *v379; // rcx
  _QWORD **v380; // rax
  __int64 *v381; // rax
  unsigned int *v382; // rax
  __int64 *v383; // rax
  __int64 *v384; // rax
  int *v385; // [rsp+10h] [rbp-70h]
  unsigned int v386; // [rsp+18h] [rbp-68h]
  const char *v387; // [rsp+18h] [rbp-68h]
  const char *v388; // [rsp+30h] [rbp-50h] BYREF
  __int128 v389; // [rsp+38h] [rbp-48h]
  unsigned __int64 v390; // [rsp+48h] [rbp-38h]

  v6 = 0;
  v7 = *(_DWORD *)(a1 + 136);
  v390 = __readfsqword(0x28u);
  if ( *(_DWORD *)(dbg + 16LL) != v7 )
    return v6;
  v9 = a1;
  if ( *(_QWORD *)(dbg + 32LL) != *(_QWORD *)(a1 + 152) )
    return v6;
  v10 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
  if ( (char *)v10 == (char *)sub_9300 )
  {
    v11 = a1 + 272;
  }
  else
  {
    v385 = a3;
    v301 = v10();
    a3 = v385;
    v11 = v301;
  }
  switch ( a2 )
  {
    case 0LL:
      v203 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v368 = *((const char ***)a3 + 1);
        v369 = (unsigned int *)(v368 + 1);
        *((_QWORD *)a3 + 1) = v368 + 1;
        v387 = *v368;
      }
      else
      {
        v204 = *((_QWORD *)a3 + 2);
        v205 = v203 + 8;
        *a3 = v205;
        v387 = *(const char **)(v204 + v203);
        if ( (unsigned int)v205 <= 0x2F )
        {
          v206 = v203 + 16;
          *a3 = v206;
          v207 = *(_DWORD *)(v204 + v205);
          if ( (unsigned int)v206 <= 0x2F )
          {
            v208 = v203 + 24;
            *a3 = v208;
            v209 = *(_QWORD *)(v204 + v206);
            if ( (unsigned int)v208 <= 0x2F )
            {
              v210 = (__int64 *)(v208 + v204);
              *a3 = v203 + 32;
              goto LABEL_169;
            }
            v210 = *((__int64 **)a3 + 1);
LABEL_365:
            *((_QWORD *)a3 + 1) = v210 + 1;
LABEL_169:
            v211 = *v210;
            if ( !*v210 )
            {
              if ( under_debugger )
                BUG();
              v11 = 1522;
              interr();
              goto LABEL_464;
            }
            if ( (*(_DWORD *)debug & 0x10000) != 0 )
            {
              v388 = nullptr;
              v389 = 0;
              get_dbctx_id();
              sub_B140((__int64 *)&v388);
              v212 = s;
              if ( (_QWORD)v389 )
                v212 = v388;
              sub_9F20((__int64)"%s: debugger_t::ev_init_debugger (%s,%d,)\n", v212, v387, v207);
              if ( v388 )
              {
                *(_QWORD *)&v389 = 0;
                qfree();
              }
            }
            return (int)sub_B810(v9, (__int64)v387, v207, v209, v211);
          }
          v370 = *((__int64 **)a3 + 1);
LABEL_364:
          v210 = v370 + 1;
          *((_QWORD *)a3 + 1) = v370 + 1;
          v209 = *v370;
          goto LABEL_365;
        }
        v369 = *((unsigned int **)a3 + 1);
      }
      v370 = (__int64 *)(v369 + 2);
      *((_QWORD *)a3 + 1) = v369 + 2;
      v207 = *v369;
      goto LABEL_364;
    case 1LL:
      if ( (*(_DWORD *)debug & 0x10000) != 0 )
      {
        v388 = nullptr;
        v389 = 0;
        get_dbctx_id();
        sub_B140((__int64 *)&v388);
        v270 = s;
        if ( (_QWORD)v389 )
          v270 = v388;
        sub_9F20((__int64)"%s: debugger_t::ev_term_debugger\n", v270);
        if ( v388 )
        {
          *(_QWORD *)&v389 = 0;
          qfree();
        }
      }
      return (int)sub_B010((__int64 *)v9);
    case 2LL:
      v265 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v302 = *((__int64 **)a3 + 1);
        v269 = v302 + 1;
        *((_QWORD *)a3 + 1) = v302 + 1;
        v268 = *v302;
      }
      else
      {
        v266 = *((_QWORD *)a3 + 2);
        v267 = v265 + 8;
        *a3 = v267;
        v268 = *(_QWORD *)(v266 + v265);
        if ( (unsigned int)v267 <= 0x2F )
        {
          v269 = (_QWORD *)(v267 + v266);
          *a3 = v265 + 16;
          return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 72LL))(v11, v268, *v269);
        }
        v269 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v269 + 1;
      return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 72LL))(v11, v268, *v269);
    case 3LL:
      v187 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v374 = *((__int64 **)a3 + 1);
        v375 = v374 + 1;
        *((_QWORD *)a3 + 1) = v374 + 1;
        v190 = *v374;
      }
      else
      {
        v188 = *((_QWORD *)a3 + 2);
        v189 = v187 + 8;
        *a3 = v189;
        v190 = *(_QWORD *)(v188 + v187);
        if ( (unsigned int)v189 <= 0x2F )
        {
          v191 = v187 + 16;
          *a3 = v191;
          v192 = *(_QWORD *)(v188 + v189);
          if ( (unsigned int)v191 <= 0x2F )
          {
            v193 = v187 + 24;
            *a3 = v193;
            v194 = *(_QWORD *)(v188 + v191);
            if ( (unsigned int)v193 <= 0x2F )
            {
              v195 = v187 + 32;
              *a3 = v195;
              v196 = *(unsigned int *)(v188 + v193);
              if ( (unsigned int)v195 <= 0x2F )
              {
                v197 = v187 + 40;
                *a3 = v197;
                v198 = *(_QWORD *)(v188 + v195);
                if ( (unsigned int)v197 <= 0x2F )
                {
                  *a3 = v187 + 48;
                  v199 = *((__int64 **)a3 + 1);
                  v200 = *(unsigned int *)(v188 + v197);
                  goto LABEL_162;
                }
                v379 = *((unsigned int **)a3 + 1);
LABEL_375:
                v199 = (__int64 *)(v379 + 2);
                *((_QWORD *)a3 + 1) = v379 + 2;
                v200 = *v379;
LABEL_162:
                *((_QWORD *)a3 + 1) = v199 + 1;
                v201 = *v199;
                *((_QWORD *)a3 + 1) = v199 + 2;
                v202 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v11 + 128LL))(
                         v11,
                         v190,
                         v192,
                         v199[1],
                         v194,
                         v196,
                         v198,
                         v200,
                         v201);
                v6 = v202;
                if ( v202 > 0 )
                  goto LABEL_154;
                return v6;
              }
              v378 = *((_QWORD **)a3 + 1);
LABEL_374:
              v379 = (unsigned int *)(v378 + 1);
              *((_QWORD *)a3 + 1) = v378 + 1;
              v198 = *v378;
              goto LABEL_375;
            }
            v377 = *((unsigned int **)a3 + 1);
LABEL_373:
            v378 = v377 + 2;
            *((_QWORD *)a3 + 1) = v377 + 2;
            v196 = *v377;
            goto LABEL_374;
          }
          v376 = *((_QWORD **)a3 + 1);
LABEL_372:
          v377 = (unsigned int *)(v376 + 1);
          *((_QWORD *)a3 + 1) = v376 + 1;
          v194 = *v376;
          goto LABEL_373;
        }
        v375 = *((__int64 **)a3 + 1);
      }
      v376 = v375 + 1;
      *((_QWORD *)a3 + 1) = v375 + 1;
      v192 = *v375;
      goto LABEL_372;
    case 4LL:
      v177 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v371 = *((unsigned int **)a3 + 1);
        v372 = v371 + 2;
        *((_QWORD *)a3 + 1) = v371 + 2;
        v180 = *v371;
      }
      else
      {
        v178 = *((_QWORD *)a3 + 2);
        v179 = v177 + 8;
        *a3 = v179;
        v180 = *(_DWORD *)(v178 + v177);
        if ( (unsigned int)v179 <= 0x2F )
        {
          v181 = v177 + 16;
          *a3 = v181;
          v182 = *(_DWORD *)(v178 + v179);
          if ( (unsigned int)v181 <= 0x2F )
          {
            v183 = v177 + 24;
            *a3 = v183;
            v184 = *(_DWORD *)(v178 + v181);
            if ( (unsigned int)v183 <= 0x2F )
            {
              v185 = (_QWORD *)(v183 + v178);
              *a3 = v177 + 32;
              goto LABEL_153;
            }
            v185 = *((_QWORD **)a3 + 1);
LABEL_369:
            *((_QWORD *)a3 + 1) = v185 + 1;
LABEL_153:
            v186 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v11 + 144LL))(
                     v11,
                     v180,
                     v182,
                     v184,
                     *v185);
            v6 = v186;
            if ( v186 > 0 )
LABEL_154:
              sub_B4B0((__int64 *)v9, 1u);
            return v6;
          }
          v373 = *((_DWORD **)a3 + 1);
LABEL_368:
          v185 = v373 + 2;
          *((_QWORD *)a3 + 1) = v373 + 2;
          v184 = *v373;
          goto LABEL_369;
        }
        v372 = *((unsigned int **)a3 + 1);
      }
      v373 = v372 + 2;
      *((_QWORD *)a3 + 1) = v372 + 2;
      v182 = *v372;
      goto LABEL_368;
    case 5LL:
      return (*(int (__fastcall **)(__int64))(*(_QWORD *)v11 + 120LL))(v11);
    case 6LL:
      v297 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v298 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v298 + 1;
      }
      else
      {
        v298 = (_QWORD *)(*((_QWORD *)a3 + 2) + v297);
        *a3 = v297 + 8;
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 552LL))(v11, *v298);
      return 1;
    case 7LL:
      v299 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v300 = *((__int64 **)a3 + 1);
        *((_QWORD *)a3 + 1) = v300 + 1;
      }
      else
      {
        v300 = (__int64 *)(*((_QWORD *)a3 + 2) + v299);
        *a3 = v299 + 8;
      }
      sub_A9F0(*v300);
      return 1;
    case 8LL:
      v254 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v255 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v255 + 1;
      }
      else
      {
        v255 = (_QWORD *)(*((_QWORD *)a3 + 2) + v254);
        *a3 = v254 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 152LL))(v11, *v255);
    case 9LL:
      v290 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v291 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v291 + 1;
      }
      else
      {
        v291 = (_QWORD *)(*((_QWORD *)a3 + 2) + v290);
        *a3 = v290 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 160LL))(v11, *v291);
    case 10LL:
      v119 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v331 = *((_DWORD ***)a3 + 1);
        v332 = v331 + 1;
        *((_QWORD *)a3 + 1) = v331 + 1;
        v122 = *v331;
      }
      else
      {
        v120 = *((_QWORD *)a3 + 2);
        v121 = v119 + 8;
        *a3 = v121;
        v122 = *(_DWORD **)(v120 + v119);
        if ( (unsigned int)v121 <= 0x2F )
        {
          v123 = v119 + 16;
          *a3 = v123;
          v124 = *(_QWORD *)(v120 + v121);
          if ( (unsigned int)v123 <= 0x2F )
          {
            v125 = (unsigned int *)(v123 + v120);
            *a3 = v119 + 24;
            goto LABEL_106;
          }
          v125 = *((unsigned int **)a3 + 1);
LABEL_308:
          *((_QWORD *)a3 + 1) = v125 + 2;
LABEL_106:
          *v122 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 136LL))(v11, v124, *v125);
          return 1;
        }
        v332 = *((_QWORD **)a3 + 1);
      }
      v125 = (unsigned int *)(v332 + 1);
      *((_QWORD *)a3 + 1) = v332 + 1;
      v124 = *v332;
      goto LABEL_308;
    case 11LL:
      v117 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v118 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v118 + 1;
      }
      else
      {
        v118 = (_QWORD *)(*((_QWORD *)a3 + 2) + v117);
        *a3 = v117 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 168LL))(v11, *v118);
    case 12LL:
      v114 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v115 = *((_DWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v115 + 2;
      }
      else
      {
        v115 = (_DWORD *)(*((_QWORD *)a3 + 2) + v114);
        *a3 = v114 + 8;
      }
      v116 = *(__int64 (**)())(*(_QWORD *)v11 + 176LL);
      if ( v116 == sub_92A0 )
        return 0;
      return ((int (__fastcall *)(__int64, bool))v116)(v11, *v115 != 0);
    case 13LL:
      v154 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v337 = *((_QWORD **)a3 + 1);
        v158 = (unsigned int *)(v337 + 1);
        *((_QWORD *)a3 + 1) = v337 + 1;
        v157 = *v337;
      }
      else
      {
        v155 = *((_QWORD *)a3 + 2);
        v156 = v154 + 8;
        *a3 = v156;
        v157 = *(_QWORD *)(v155 + v154);
        if ( (unsigned int)v156 <= 0x2F )
        {
          v158 = (unsigned int *)(v156 + v155);
          *a3 = v154 + 16;
          goto LABEL_134;
        }
        v158 = *((unsigned int **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v158 + 2;
LABEL_134:
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 184LL))(v11, v157, *v158);
      return 1;
    case 14LL:
      v149 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v358 = *((_DWORD **)a3 + 1);
        v153 = v358 + 2;
        *((_QWORD *)a3 + 1) = v358 + 2;
        v152 = *v358 != 0;
      }
      else
      {
        v150 = *((_QWORD *)a3 + 2);
        v151 = v149 + 8;
        *a3 = v151;
        v152 = *(_DWORD *)(v150 + v149) != 0;
        if ( (unsigned int)v151 <= 0x2F )
        {
          v153 = (_QWORD *)(v151 + v150);
          *a3 = v149 + 16;
          goto LABEL_130;
        }
        v153 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v153 + 1;
LABEL_130:
      (*(void (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)v11 + 192LL))(v11, 0, v152, *v153);
      return 1;
    case 15LL:
      v147 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v148 = *((unsigned int **)a3 + 1);
        *((_QWORD *)a3 + 1) = v148 + 2;
      }
      else
      {
        v148 = (unsigned int *)(*((_QWORD *)a3 + 2) + v147);
        *a3 = v147 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 200LL))(v11, *v148);
    case 16LL:
      v145 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v146 = *((unsigned int **)a3 + 1);
        *((_QWORD *)a3 + 1) = v146 + 2;
      }
      else
      {
        v146 = (unsigned int *)(*((_QWORD *)a3 + 2) + v145);
        *a3 = v145 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 208LL))(v11, *v146);
    case 17LL:
      v292 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v306 = *((unsigned int **)a3 + 1);
        v296 = v306 + 2;
        *((_QWORD *)a3 + 1) = v306 + 2;
        v295 = *v306;
      }
      else
      {
        v293 = *((_QWORD *)a3 + 2);
        v294 = v292 + 8;
        *a3 = v294;
        v295 = *(_DWORD *)(v293 + v292);
        if ( (unsigned int)v294 <= 0x2F )
        {
          v296 = (unsigned int *)(v294 + v293);
          *a3 = v292 + 16;
          return (*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 216LL))(v11, v295, *v296);
        }
        v296 = *((unsigned int **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v296 + 2;
      return (*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 216LL))(v11, v295, *v296);
    case 18LL:
      v256 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v310 = *((unsigned int **)a3 + 1);
        v311 = v310 + 2;
        *((_QWORD *)a3 + 1) = v310 + 2;
        v259 = *v310;
      }
      else
      {
        v257 = *((_QWORD *)a3 + 2);
        v258 = v256 + 8;
        *a3 = v258;
        v259 = *(_DWORD *)(v257 + v256);
        if ( (unsigned int)v258 <= 0x2F )
        {
          v260 = v256 + 16;
          *a3 = v260;
          v261 = *(_DWORD *)(v257 + v258);
          if ( (unsigned int)v260 <= 0x2F )
          {
            v262 = v256 + 24;
            *a3 = v262;
            v263 = *(_QWORD *)(v257 + v260);
            if ( (unsigned int)v262 <= 0x2F )
            {
              v264 = (_QWORD *)(v262 + v257);
              *a3 = v256 + 32;
              return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 224LL))(
                       v11,
                       v259,
                       v261,
                       v263,
                       *v264);
            }
            v264 = *((_QWORD **)a3 + 1);
LABEL_280:
            *((_QWORD *)a3 + 1) = v264 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 224LL))(
                     v11,
                     v259,
                     v261,
                     v263,
                     *v264);
          }
          v312 = *((__int64 **)a3 + 1);
LABEL_279:
          v264 = v312 + 1;
          *((_QWORD *)a3 + 1) = v312 + 1;
          v263 = *v312;
          goto LABEL_280;
        }
        v311 = *((_DWORD **)a3 + 1);
      }
      v312 = (__int64 *)(v311 + 2);
      *((_QWORD *)a3 + 1) = v311 + 2;
      v261 = *v311;
      goto LABEL_279;
    case 19LL:
      v281 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v307 = *((unsigned int **)a3 + 1);
        v308 = v307 + 2;
        *((_QWORD *)a3 + 1) = v307 + 2;
        v284 = *v307;
      }
      else
      {
        v282 = *((_QWORD *)a3 + 2);
        v283 = v281 + 8;
        *a3 = v283;
        v284 = *(_DWORD *)(v282 + v281);
        if ( (unsigned int)v283 <= 0x2F )
        {
          v285 = v281 + 16;
          *a3 = v285;
          v286 = *(_DWORD *)(v282 + v283);
          if ( (unsigned int)v285 <= 0x2F )
          {
            v287 = v281 + 24;
            *a3 = v287;
            v288 = *(_QWORD *)(v282 + v285);
            if ( (unsigned int)v287 <= 0x2F )
            {
              v289 = (_QWORD *)(v287 + v282);
              *a3 = v281 + 32;
              return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 232LL))(
                       v11,
                       v284,
                       v286,
                       v288,
                       *v289);
            }
            v289 = *((_QWORD **)a3 + 1);
LABEL_276:
            *((_QWORD *)a3 + 1) = v289 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 232LL))(
                     v11,
                     v284,
                     v286,
                     v288,
                     *v289);
          }
          v309 = *((__int64 **)a3 + 1);
LABEL_275:
          v289 = v309 + 1;
          *((_QWORD *)a3 + 1) = v309 + 1;
          v288 = *v309;
          goto LABEL_276;
        }
        v308 = *((_DWORD **)a3 + 1);
      }
      v309 = (__int64 *)(v308 + 2);
      *((_QWORD *)a3 + 1) = v308 + 2;
      v286 = *v308;
      goto LABEL_275;
    case 20LL:
      v136 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v355 = *((_QWORD **)a3 + 1);
        v356 = (unsigned int *)(v355 + 1);
        *((_QWORD *)a3 + 1) = v355 + 1;
        v139 = *v355;
      }
      else
      {
        v137 = *((_QWORD *)a3 + 2);
        v138 = v136 + 8;
        *a3 = v138;
        v139 = *(_QWORD *)(v137 + v136);
        if ( (unsigned int)v138 <= 0x2F )
        {
          v140 = v136 + 16;
          *a3 = v140;
          v141 = *(_DWORD *)(v137 + v138);
          if ( (unsigned int)v140 <= 0x2F )
          {
            v142 = v136 + 24;
            *a3 = v142;
            v143 = *(_DWORD *)(v137 + v140);
            if ( (unsigned int)v142 <= 0x2F )
            {
              v144 = (_QWORD *)(v142 + v137);
              *a3 = v136 + 32;
              return (*(int (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v11 + 240LL))(
                       v11,
                       v139,
                       v141,
                       v143,
                       *v144);
            }
            v144 = *((_QWORD **)a3 + 1);
LABEL_344:
            *((_QWORD *)a3 + 1) = v144 + 1;
            return (*(int (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v11 + 240LL))(
                     v11,
                     v139,
                     v141,
                     v143,
                     *v144);
          }
          v357 = *((_DWORD **)a3 + 1);
LABEL_343:
          v144 = v357 + 2;
          *((_QWORD *)a3 + 1) = v357 + 2;
          v143 = *v357;
          goto LABEL_344;
        }
        v356 = *((unsigned int **)a3 + 1);
      }
      v357 = v356 + 2;
      *((_QWORD *)a3 + 1) = v356 + 2;
      v141 = *v356;
      goto LABEL_343;
    case 21LL:
      v247 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v344 = *((__int64 **)a3 + 1);
        v251 = v344 + 1;
        *((_QWORD *)a3 + 1) = v344 + 1;
        v250 = *v344;
      }
      else
      {
        v248 = *((_QWORD *)a3 + 2);
        v249 = v247 + 8;
        *a3 = v249;
        v250 = *(_QWORD *)(v248 + v247);
        if ( (unsigned int)v249 <= 0x2F )
        {
          v251 = (_QWORD *)(v249 + v248);
          *a3 = v247 + 16;
          return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 256LL))(v11, v250, *v251);
        }
        v251 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v251 + 1;
      return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 256LL))(v11, v250, *v251);
    case 22LL:
      v236 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v361 = *((__int64 **)a3 + 1);
        v362 = v361 + 1;
        *((_QWORD *)a3 + 1) = v361 + 1;
        v9 = *v361;
      }
      else
      {
        v237 = *((_QWORD *)a3 + 2);
        v238 = v236 + 8;
        *a3 = v238;
        v9 = *(_QWORD *)(v237 + v236);
        if ( (unsigned int)v238 <= 0x2F )
        {
          v239 = v236 + 16;
          *a3 = v239;
          v240 = *(_QWORD *)(v237 + v238);
          if ( (unsigned int)v239 <= 0x2F )
          {
            v241 = v236 + 24;
            *a3 = v241;
            v242 = *(_QWORD *)(v237 + v239);
            if ( (unsigned int)v241 <= 0x2F )
            {
              v243 = v236 + 32;
              *a3 = v243;
              v211 = *(_QWORD *)(v237 + v241);
              if ( (unsigned int)v243 <= 0x2F )
              {
                v244 = (_QWORD *)(v243 + v237);
                *a3 = v236 + 40;
                goto LABEL_203;
              }
LABEL_464:
              v244 = *((_QWORD **)a3 + 1);
LABEL_357:
              *((_QWORD *)a3 + 1) = v244 + 1;
LABEL_203:
              v245 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 288LL))(
                       v11,
                       v240,
                       v242,
                       v211,
                       *v244);
              goto LABEL_204;
            }
            v364 = *((__int64 **)a3 + 1);
LABEL_356:
            v244 = v364 + 1;
            *((_QWORD *)a3 + 1) = v364 + 1;
            v211 = *v364;
            goto LABEL_357;
          }
          v363 = *((__int64 **)a3 + 1);
LABEL_355:
          v364 = v363 + 1;
          *((_QWORD *)a3 + 1) = v363 + 1;
          v242 = *v363;
          goto LABEL_356;
        }
        v362 = *((__int64 **)a3 + 1);
      }
      v363 = v362 + 1;
      *((_QWORD *)a3 + 1) = v362 + 1;
      v240 = *v362;
      goto LABEL_355;
    case 23LL:
      v271 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v318 = *((__int64 **)a3 + 1);
        v319 = v318 + 1;
        *((_QWORD *)a3 + 1) = v318 + 1;
        v9 = *v318;
      }
      else
      {
        v272 = *((_QWORD *)a3 + 2);
        v273 = v271 + 8;
        *a3 = v273;
        v9 = *(_QWORD *)(v272 + v271);
        if ( (unsigned int)v273 <= 0x2F )
        {
          v274 = v271 + 16;
          *a3 = v274;
          v275 = *(_QWORD *)(v272 + v273);
          if ( (unsigned int)v274 <= 0x2F )
          {
            v276 = v271 + 24;
            *a3 = v276;
            v277 = *(_QWORD *)(v272 + v274);
            if ( (unsigned int)v276 <= 0x2F )
            {
              v278 = v271 + 32;
              *a3 = v278;
              v279 = *(_QWORD *)(v272 + v276);
              if ( (unsigned int)v278 <= 0x2F )
              {
                v280 = (_QWORD *)(v278 + v272);
                *a3 = v271 + 40;
                goto LABEL_240;
              }
              v280 = *((_QWORD **)a3 + 1);
LABEL_292:
              *((_QWORD *)a3 + 1) = v280 + 1;
LABEL_240:
              v245 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 296LL))(
                       v11,
                       v275,
                       v277,
                       v279,
                       *v280);
LABEL_204:
              v246 = 0;
              if ( v245 >= 0 )
                v246 = v245;
              *(_QWORD *)v9 = v246;
              if ( v245 < 0 )
                return -5;
              return 1;
            }
            v321 = *((__int64 **)a3 + 1);
LABEL_291:
            v280 = v321 + 1;
            *((_QWORD *)a3 + 1) = v321 + 1;
            v279 = *v321;
            goto LABEL_292;
          }
          v320 = *((__int64 **)a3 + 1);
LABEL_290:
          v321 = v320 + 1;
          *((_QWORD *)a3 + 1) = v320 + 1;
          v277 = *v320;
          goto LABEL_291;
        }
        v319 = *((__int64 **)a3 + 1);
      }
      v320 = v319 + 1;
      *((_QWORD *)a3 + 1) = v319 + 1;
      v275 = *v319;
      goto LABEL_290;
    case 24LL:
      v227 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v365 = *((_DWORD ***)a3 + 1);
        v366 = (unsigned int *)(v365 + 1);
        *((_QWORD *)a3 + 1) = v365 + 1;
        v230 = *v365;
      }
      else
      {
        v228 = *((_QWORD *)a3 + 2);
        v229 = v227 + 8;
        *a3 = v229;
        v230 = *(_DWORD **)(v228 + v227);
        if ( (unsigned int)v229 <= 0x2F )
        {
          v231 = v227 + 16;
          *a3 = v231;
          v232 = *(unsigned int *)(v228 + v229);
          if ( (unsigned int)v231 <= 0x2F )
          {
            v233 = v227 + 24;
            *a3 = v233;
            v234 = *(_QWORD *)(v228 + v231);
            if ( (unsigned int)v233 <= 0x2F )
            {
              v235 = (_DWORD *)(v233 + v228);
              *a3 = v227 + 32;
              goto LABEL_192;
            }
            v235 = *((_DWORD **)a3 + 1);
LABEL_361:
            *((_QWORD *)a3 + 1) = v235 + 2;
LABEL_192:
            if ( (_DWORD)v232 == 4 )
            {
              if ( (v234 & 1) != 0 )
              {
                *v230 = 4;
                return 1;
              }
              goto LABEL_196;
            }
            if ( (_DWORD)v232 == 8 )
            {
              if ( (v234 & 3) == 0 )
              {
LABEL_196:
                *v230 = 0;
                *v230 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v11 + 304LL))(v11, v232, v234);
                return 1;
              }
            }
            else if ( (v234 & 7) == 0 )
            {
              if ( (unsigned int)(*v235 - 1) > 7 )
              {
                *v230 = 5;
                return 1;
              }
              goto LABEL_196;
            }
            *v230 = 3;
            return 1;
          }
          v367 = *((_QWORD **)a3 + 1);
LABEL_360:
          v235 = v367 + 1;
          *((_QWORD *)a3 + 1) = v367 + 1;
          v234 = *v367;
          goto LABEL_361;
        }
        v366 = *((unsigned int **)a3 + 1);
      }
      v367 = v366 + 2;
      *((_QWORD *)a3 + 1) = v366 + 2;
      v232 = *v366;
      goto LABEL_360;
    case 25LL:
      v99 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v338 = *((_DWORD ***)a3 + 1);
        v339 = (__int64 **)(v338 + 1);
        *((_QWORD *)a3 + 1) = v338 + 1;
        v102 = *v338;
      }
      else
      {
        v100 = *((_QWORD *)a3 + 2);
        v101 = v99 + 8;
        *a3 = v101;
        v102 = *(_DWORD **)(v100 + v99);
        if ( (unsigned int)v101 <= 0x2F )
        {
          v103 = v99 + 16;
          *a3 = v103;
          v104 = *(__int64 **)(v100 + v101);
          if ( (unsigned int)v103 <= 0x2F )
          {
            v105 = v99 + 24;
            *a3 = v105;
            v106 = *(_DWORD *)(v100 + v103);
            if ( (unsigned int)v105 <= 0x2F )
            {
              *a3 = v99 + 32;
              v107 = *(_DWORD *)(v100 + v105);
              if ( v99 + 32 <= 0x2F )
              {
                *a3 = v99 + 40;
                return (int)sub_AC60(v9, v102, v104, v106, v107);
              }
              v342 = *((int **)a3 + 1);
LABEL_320:
              *((_QWORD *)a3 + 1) = v342 + 2;
              return (int)sub_AC60(v9, v102, v104, v106, v107);
            }
            v341 = *((int **)a3 + 1);
LABEL_319:
            v342 = v341 + 2;
            *((_QWORD *)a3 + 1) = v341 + 2;
            v107 = *v341;
            goto LABEL_320;
          }
          v340 = *((unsigned int **)a3 + 1);
LABEL_318:
          v341 = (int *)(v340 + 2);
          *((_QWORD *)a3 + 1) = v340 + 2;
          v106 = *v340;
          goto LABEL_319;
        }
        v339 = *((__int64 ***)a3 + 1);
      }
      v340 = (unsigned int *)(v339 + 1);
      *((_QWORD *)a3 + 1) = v339 + 1;
      v104 = *v339;
      goto LABEL_318;
    case 26LL:
      v90 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v348 = *((__int64 **)a3 + 1);
        v349 = v348 + 1;
        *((_QWORD *)a3 + 1) = v348 + 1;
        v93 = *v348;
      }
      else
      {
        v91 = *((_QWORD *)a3 + 2);
        v92 = v90 + 8;
        *a3 = v92;
        v93 = *(_QWORD *)(v91 + v90);
        if ( (unsigned int)v92 <= 0x2F )
        {
          v94 = v90 + 16;
          *a3 = v94;
          v95 = *(_QWORD *)(v91 + v92);
          if ( (unsigned int)v94 <= 0x2F )
          {
            v96 = v90 + 24;
            *a3 = v96;
            v97 = *(_DWORD *)(v91 + v94);
            if ( (unsigned int)v96 <= 0x2F )
            {
              v98 = (_QWORD *)(v96 + v91);
              *a3 = v90 + 32;
              return (*(int (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 352LL))(
                       v11,
                       v93,
                       v95,
                       v97,
                       *v98);
            }
            v98 = *((_QWORD **)a3 + 1);
LABEL_332:
            *((_QWORD *)a3 + 1) = v98 + 1;
            return (*(int (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 352LL))(
                     v11,
                     v93,
                     v95,
                     v97,
                     *v98);
          }
          v350 = *((_DWORD **)a3 + 1);
LABEL_331:
          v98 = v350 + 2;
          *((_QWORD *)a3 + 1) = v350 + 2;
          v97 = *v350;
          goto LABEL_332;
        }
        v349 = *((_QWORD **)a3 + 1);
      }
      v350 = v349 + 1;
      *((_QWORD *)a3 + 1) = v349 + 1;
      v95 = *v349;
      goto LABEL_331;
    case 27LL:
      v83 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v353 = *((__int64 **)a3 + 1);
        v354 = v353 + 1;
        *((_QWORD *)a3 + 1) = v353 + 1;
        v86 = *v353;
      }
      else
      {
        v84 = *((_QWORD *)a3 + 2);
        v85 = v83 + 8;
        *a3 = v85;
        v86 = *(_QWORD *)(v84 + v83);
        if ( (unsigned int)v85 <= 0x2F )
        {
          v87 = v83 + 16;
          *a3 = v87;
          v88 = *(_QWORD *)(v84 + v85);
          if ( (unsigned int)v87 <= 0x2F )
          {
            v89 = (_DWORD *)(v87 + v84);
            *a3 = v83 + 24;
            return (*(int (__fastcall **)(__int64, __int64, __int64, bool))(*(_QWORD *)v11 + 368LL))(
                     v11,
                     v86,
                     v88,
                     *v89 != 0);
          }
          v89 = *((_DWORD **)a3 + 1);
LABEL_340:
          *((_QWORD *)a3 + 1) = v89 + 2;
          return (*(int (__fastcall **)(__int64, __int64, __int64, bool))(*(_QWORD *)v11 + 368LL))(
                   v11,
                   v86,
                   v88,
                   *v89 != 0);
        }
        v354 = *((_QWORD **)a3 + 1);
      }
      v89 = v354 + 1;
      *((_QWORD *)a3 + 1) = v354 + 1;
      v88 = *v354;
      goto LABEL_340;
    case 28LL:
      v81 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v82 = *((unsigned int **)a3 + 1);
        *((_QWORD *)a3 + 1) = v82 + 2;
      }
      else
      {
        v82 = (unsigned int *)(*((_QWORD *)a3 + 2) + v81);
        *a3 = v81 + 8;
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 376LL))(v11, *v82);
      return 1;
    case 29LL:
      v72 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v315 = *((_DWORD **)a3 + 1);
        v316 = (__int64 *)(v315 + 2);
        *((_QWORD *)a3 + 1) = v315 + 2;
        v75 = *v315;
      }
      else
      {
        v73 = *((_QWORD *)a3 + 2);
        v74 = v72 + 8;
        *a3 = v74;
        v75 = *(_DWORD *)(v73 + v72);
        if ( (unsigned int)v74 <= 0x2F )
        {
          v76 = v72 + 16;
          *a3 = v76;
          v77 = *(_QWORD *)(v73 + v74);
          if ( (unsigned int)v76 <= 0x2F )
          {
            v78 = v72 + 24;
            *a3 = v78;
            v79 = *(_QWORD *)(v73 + v76);
            if ( (unsigned int)v78 <= 0x2F )
            {
              v80 = (_QWORD *)(v78 + v73);
              *a3 = v72 + 32;
              return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 384LL))(
                       v11,
                       v75,
                       v77,
                       v79,
                       *v80);
            }
            v80 = *((_QWORD **)a3 + 1);
LABEL_287:
            *((_QWORD *)a3 + 1) = v80 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 384LL))(
                     v11,
                     v75,
                     v77,
                     v79,
                     *v80);
          }
          v317 = *((__int64 **)a3 + 1);
LABEL_286:
          v80 = v317 + 1;
          *((_QWORD *)a3 + 1) = v317 + 1;
          v79 = *v317;
          goto LABEL_287;
        }
        v316 = *((__int64 **)a3 + 1);
      }
      v317 = v316 + 1;
      *((_QWORD *)a3 + 1) = v316 + 1;
      v77 = *v316;
      goto LABEL_286;
    case 30LL:
      v63 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v345 = *((_DWORD **)a3 + 1);
        v346 = (__int64 *)(v345 + 2);
        *((_QWORD *)a3 + 1) = v345 + 2;
        v66 = *v345;
      }
      else
      {
        v64 = *((_QWORD *)a3 + 2);
        v65 = v63 + 8;
        *a3 = v65;
        v66 = *(_DWORD *)(v64 + v63);
        if ( (unsigned int)v65 <= 0x2F )
        {
          v67 = v63 + 16;
          *a3 = v67;
          v68 = *(_QWORD *)(v64 + v65);
          if ( (unsigned int)v67 <= 0x2F )
          {
            v69 = v63 + 24;
            *a3 = v69;
            v70 = *(_QWORD *)(v64 + v67);
            if ( (unsigned int)v69 <= 0x2F )
            {
              v71 = (_QWORD *)(v69 + v64);
              *a3 = v63 + 32;
              return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 392LL))(
                       v11,
                       v66,
                       v68,
                       v70,
                       *v71);
            }
            v71 = *((_QWORD **)a3 + 1);
LABEL_328:
            *((_QWORD *)a3 + 1) = v71 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 392LL))(
                     v11,
                     v66,
                     v68,
                     v70,
                     *v71);
          }
          v347 = *((__int64 **)a3 + 1);
LABEL_327:
          v71 = v347 + 1;
          *((_QWORD *)a3 + 1) = v347 + 1;
          v70 = *v347;
          goto LABEL_328;
        }
        v346 = *((__int64 **)a3 + 1);
      }
      v347 = v346 + 1;
      *((_QWORD *)a3 + 1) = v346 + 1;
      v68 = *v346;
      goto LABEL_327;
    case 31LL:
      v126 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v303 = *((_QWORD ***)a3 + 1);
        v304 = (__int64 *)(v303 + 1);
        *((_QWORD *)a3 + 1) = v303 + 1;
        v129 = *v303;
      }
      else
      {
        v127 = *((_QWORD *)a3 + 2);
        v128 = v126 + 8;
        *a3 = v128;
        v129 = *(__int64 **)(v127 + v126);
        if ( (unsigned int)v128 <= 0x2F )
        {
          v130 = v126 + 16;
          *a3 = v130;
          v131 = *(_QWORD *)(v127 + v128);
          if ( (unsigned int)v130 <= 0x2F )
          {
            v132 = v126 + 24;
            *a3 = v132;
            v133 = *(_QWORD *)(v127 + v130);
            if ( (unsigned int)v132 <= 0x2F )
            {
              v134 = (unsigned int *)(v132 + v127);
              *a3 = v126 + 32;
              goto LABEL_112;
            }
            v134 = *((unsigned int **)a3 + 1);
LABEL_268:
            *((_QWORD *)a3 + 1) = v134 + 2;
LABEL_112:
            v135 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 248LL);
            if ( v135 != sub_92B0 )
              v131 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))v135)(v11, v131, v133, *v134);
            *v129 = v131;
            return 1;
          }
          v305 = *((_QWORD **)a3 + 1);
LABEL_267:
          v134 = (unsigned int *)(v305 + 1);
          *((_QWORD *)a3 + 1) = v305 + 1;
          v133 = *v305;
          goto LABEL_268;
        }
        v304 = *((__int64 **)a3 + 1);
      }
      v305 = v304 + 1;
      *((_QWORD *)a3 + 1) = v304 + 1;
      v131 = *v304;
      goto LABEL_267;
    case 33LL:
      v57 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v351 = *((_DWORD **)a3 + 1);
        v61 = v351 + 2;
        *((_QWORD *)a3 + 1) = v351 + 2;
        v60 = *v351;
      }
      else
      {
        v58 = *((_QWORD *)a3 + 2);
        v59 = v57 + 8;
        *a3 = v59;
        v60 = *(_DWORD *)(v58 + v57);
        if ( (unsigned int)v59 <= 0x2F )
        {
          v61 = (_QWORD *)(v59 + v58);
          *a3 = v57 + 16;
          goto LABEL_54;
        }
        v61 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v61 + 1;
LABEL_54:
      if ( (*(_BYTE *)(dbg + 37LL) & 8) == 0 )
        return 0;
      v62 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 416LL))(v11, v60, *v61);
      if ( (unsigned int)(v62 + 1) > 1 )
        return v62;
      *(_QWORD *)(dbg + 32LL) &= ~0x80000000000uLL;
      return 0;
    case 34LL:
      if ( (*(_BYTE *)(v9 + 157) & 0x10) == 0 )
        return 0;
      v161 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v380 = *((_QWORD ***)a3 + 1);
        *((_QWORD *)a3 + 1) = v380 + 1;
        v164 = *v380;
      }
      else
      {
        v162 = *((_QWORD *)a3 + 2);
        v163 = v161 + 8;
        *a3 = v163;
        v164 = *(_QWORD **)(v162 + v161);
        if ( (unsigned int)v163 <= 0x2F )
        {
          v165 = v161 + 16;
          *a3 = v165;
          v166 = *(_QWORD *)(v162 + v163);
          if ( (unsigned int)v165 <= 0x2F )
          {
            v167 = v161 + 24;
            *a3 = v167;
            v168 = *(_DWORD *)(v162 + v165);
            if ( (unsigned int)v167 <= 0x2F )
            {
              *a3 = v161 + 32;
              v169 = *(_QWORD *)(v162 + v167);
              if ( v161 + 32 <= 0x2F )
              {
                v170 = v161 + 40;
                if ( (unsigned int)v170 <= 0x2F )
                {
                  *a3 = v161 + 48;
                  v171 = *(_QWORD *)(v162 + v170);
                  goto LABEL_147;
                }
                *a3 = v170;
LABEL_386:
                v384 = *((__int64 **)a3 + 1);
                *((_QWORD *)a3 + 1) = v384 + 1;
                v171 = *v384;
LABEL_147:
                v172 = *((__int64 **)a3 + 1);
                *((_QWORD *)a3 + 1) = v172 + 1;
                v173 = *v172;
                *((_QWORD *)a3 + 1) = v172 + 2;
                v174 = v172[1];
                *((_QWORD *)a3 + 1) = v172 + 3;
                v175 = v172[2];
                *((_QWORD *)a3 + 1) = v172 + 4;
                v176 = v172[3];
                *((_QWORD *)a3 + 1) = v172 + 5;
                *v164 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 424LL))(
                          v11,
                          v166,
                          v168,
                          (unsigned int)*(_QWORD *)(v169 + 56),
                          v171,
                          v173,
                          v174,
                          v175,
                          v176,
                          *((unsigned int *)v172 + 8));
                return 1;
              }
LABEL_385:
              *((_QWORD *)a3 + 1) += 8LL;
              goto LABEL_386;
            }
LABEL_384:
            v383 = *((__int64 **)a3 + 1);
            *((_QWORD *)a3 + 1) = v383 + 1;
            v169 = *v383;
            goto LABEL_385;
          }
LABEL_383:
          v382 = *((unsigned int **)a3 + 1);
          *((_QWORD *)a3 + 1) = v382 + 2;
          v168 = *v382;
          goto LABEL_384;
        }
      }
      v381 = *((__int64 **)a3 + 1);
      *((_QWORD *)a3 + 1) = v381 + 1;
      v166 = *v381;
      goto LABEL_383;
    case 35LL:
      if ( (*(_BYTE *)(v9 + 157) & 0x10) == 0 )
        return 0;
      v159 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v160 = *((unsigned int **)a3 + 1);
        *((_QWORD *)a3 + 1) = v160 + 2;
      }
      else
      {
        v160 = (unsigned int *)(*((_QWORD *)a3 + 2) + v159);
        *a3 = v159 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 432LL))(v11, *v160);
    case 36LL:
      v50 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v359 = *((_DWORD **)a3 + 1);
        v360 = (__int64 *)(v359 + 2);
        *((_QWORD *)a3 + 1) = v359 + 2;
        v53 = *v359;
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
LABEL_351:
          *((_QWORD *)a3 + 1) = v56 + 1;
          return (*(int (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 360LL))(v11, v53, v55, *v56);
        }
        v360 = *((__int64 **)a3 + 1);
      }
      v56 = v360 + 1;
      *((_QWORD *)a3 + 1) = v360 + 1;
      v55 = *v360;
      goto LABEL_351;
    case 37LL:
      v39 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v333 = *((_DWORD **)a3 + 1);
        v334 = (__int64 *)(v333 + 2);
        *((_QWORD *)a3 + 1) = v333 + 2;
        v42 = *v333;
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
            v46 = *(_QWORD *)(v40 + v43);
            if ( (unsigned int)v45 <= 0x2F )
            {
              v47 = v39 + 32;
              *a3 = v47;
              v48 = *(_QWORD *)(v40 + v45);
              if ( (unsigned int)v47 <= 0x2F )
              {
                v49 = (_QWORD *)(v47 + v40);
                *a3 = v39 + 40;
                return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 400LL))(
                         v11,
                         v42,
                         v44,
                         v46,
                         v48,
                         *v49);
              }
              v49 = *((_QWORD **)a3 + 1);
LABEL_313:
              *((_QWORD *)a3 + 1) = v49 + 1;
              return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 400LL))(
                       v11,
                       v42,
                       v44,
                       v46,
                       v48,
                       *v49);
            }
            v336 = *((__int64 **)a3 + 1);
LABEL_312:
            v49 = v336 + 1;
            *((_QWORD *)a3 + 1) = v336 + 1;
            v48 = *v336;
            goto LABEL_313;
          }
          v335 = *((__int64 **)a3 + 1);
LABEL_311:
          v336 = v335 + 1;
          *((_QWORD *)a3 + 1) = v335 + 1;
          v46 = *v335;
          goto LABEL_312;
        }
        v334 = *((__int64 **)a3 + 1);
      }
      v335 = v334 + 1;
      *((_QWORD *)a3 + 1) = v334 + 1;
      v44 = *v334;
      goto LABEL_311;
    case 38LL:
      v219 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v313 = *((unsigned int **)a3 + 1);
        v314 = v313 + 2;
        *((_QWORD *)a3 + 1) = v313 + 2;
        v222 = *v313;
      }
      else
      {
        v220 = *((_QWORD *)a3 + 2);
        v221 = v219 + 8;
        *a3 = v221;
        v222 = *(_DWORD *)(v220 + v219);
        if ( (unsigned int)v221 <= 0x2F )
        {
          v223 = v219 + 16;
          *a3 = v223;
          v224 = *(_DWORD *)(v220 + v221) != 0;
          if ( (unsigned int)v223 <= 0x2F )
          {
            v225 = (unsigned int *)(v223 + v220);
            *a3 = v219 + 24;
            goto LABEL_185;
          }
          v225 = *((unsigned int **)a3 + 1);
LABEL_283:
          *((_QWORD *)a3 + 1) = v225 + 2;
LABEL_185:
          v226 = *(__int64 (**)())(*(_QWORD *)v11 + 520LL);
          if ( v226 != sub_92C0 )
            return ((unsigned __int8 (__fastcall *)(__int64, _QWORD, bool, _QWORD))v226)(v11, v222, v224, *v225);
          return 0;
        }
        v314 = *((_DWORD **)a3 + 1);
      }
      v225 = v314 + 2;
      *((_QWORD *)a3 + 1) = v314 + 2;
      v224 = *v314 != 0;
      goto LABEL_283;
    case 39LL:
      v213 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v343 = *((unsigned int **)a3 + 1);
        v217 = v343 + 2;
        *((_QWORD *)a3 + 1) = v343 + 2;
        v216 = *v343;
      }
      else
      {
        v214 = *((_QWORD *)a3 + 2);
        v215 = v213 + 8;
        *a3 = v215;
        v216 = *(_DWORD *)(v214 + v213);
        if ( (unsigned int)v215 <= 0x2F )
        {
          v217 = (unsigned int *)(v215 + v214);
          *a3 = v213 + 16;
          goto LABEL_179;
        }
        v217 = *((unsigned int **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v217 + 2;
LABEL_179:
      v218 = *(__int64 (**)())(*(_QWORD *)v11 + 528LL);
      if ( v218 == sub_92D0 )
        return 0;
      return ((unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD))v218)(v11, v216, *v217);
    case 40LL:
      v252 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v253 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v253 + 1;
      }
      else
      {
        v253 = (_QWORD *)(*((_QWORD *)a3 + 2) + v252);
        *a3 = v252 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 536LL))(v11, *v253);
    case 41LL:
      v108 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v352 = *((__int64 **)a3 + 1);
        v112 = v352 + 1;
        *((_QWORD *)a3 + 1) = v352 + 1;
        v111 = *v352;
      }
      else
      {
        v109 = *((_QWORD *)a3 + 2);
        v110 = v108 + 8;
        *a3 = v110;
        v111 = *(_QWORD *)(v109 + v108);
        if ( (unsigned int)v110 <= 0x2F )
        {
          v112 = (_QWORD *)(v110 + v109);
          *a3 = v108 + 16;
          goto LABEL_93;
        }
        v112 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v112 + 1;
LABEL_93:
      v113 = *(__int64 (**)())(*(_QWORD *)v11 + 560LL);
      if ( v113 == sub_92E0 )
        return 0;
      return ((unsigned __int8 (__fastcall *)(__int64, __int64, _QWORD))v113)(v11, v111, *v112);
    case 42LL:
      v26 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v322 = *((__int64 **)a3 + 1);
        v323 = v322 + 1;
        *((_QWORD *)a3 + 1) = v322 + 1;
        v29 = *v322;
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
                  goto LABEL_36;
                }
                v38 = *((_QWORD **)a3 + 1);
LABEL_300:
                *((_QWORD *)a3 + 1) = v38 + 1;
LABEL_36:
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
                    sub_9F20((__int64)"debugger_t::ev_bin_search(%a, %a) -> %d(%s) ea %a\n", a4, a5, v31, v33, a6);
                  return v6;
                }
                return 0;
              }
              v326 = *((unsigned int **)a3 + 1);
LABEL_299:
              v38 = v326 + 2;
              *((_QWORD *)a3 + 1) = v326 + 2;
              v37 = *v326;
              goto LABEL_300;
            }
            v325 = *((_QWORD **)a3 + 1);
LABEL_298:
            v326 = (unsigned int *)(v325 + 1);
            *((_QWORD *)a3 + 1) = v325 + 1;
            v35 = *v325;
            goto LABEL_299;
          }
          v324 = *((const char ***)a3 + 1);
LABEL_297:
          v325 = v324 + 1;
          *((_QWORD *)a3 + 1) = v324 + 1;
          v33 = *v324;
          goto LABEL_298;
        }
        v323 = *((_QWORD **)a3 + 1);
      }
      v324 = (const char **)(v323 + 1);
      *((_QWORD *)a3 + 1) = v323 + 1;
      v31 = *v323;
      goto LABEL_297;
    case 43LL:
      if ( !*(_BYTE *)(v9 + 208) )
        return 0;
      if ( (unsigned int)*a3 > 0x2F )
        *((_QWORD *)a3 + 1) += 8LL;
      else
        *a3 += 8;
      v25 = (*(__int64 (**)(void))(*(_QWORD *)v11 + 584LL))();
      if ( v25 >= 0 )
      {
        serialize_dynamic_register_set();
        deserialize_dynamic_register_set();
        return 1;
      }
      return v25;
    case 44LL:
      v12 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v327 = *((_QWORD ***)a3 + 1);
        v328 = v327 + 1;
        *((_QWORD *)a3 + 1) = v327 + 1;
        v15 = *v327;
LABEL_302:
        v329 = (unsigned int *)(v328 + 1);
        *((_QWORD *)a3 + 1) = v328 + 1;
        v17 = *v328;
LABEL_303:
        v330 = v329 + 2;
        *((_QWORD *)a3 + 1) = v329 + 2;
        v386 = *v329;
LABEL_304:
        v21 = (__int64 *)(v330 + 2);
        *((_QWORD *)a3 + 1) = v330 + 2;
        v20 = *v330;
        goto LABEL_305;
      }
      v13 = *((_QWORD *)a3 + 2);
      v14 = v12 + 8;
      *a3 = v14;
      v15 = *(__int64 **)(v13 + v12);
      if ( (unsigned int)v14 > 0x2F )
      {
        v328 = *((_QWORD **)a3 + 1);
        goto LABEL_302;
      }
      v16 = v12 + 16;
      *a3 = v16;
      v17 = *(_QWORD *)(v13 + v14);
      if ( (unsigned int)v16 > 0x2F )
      {
        v329 = *((unsigned int **)a3 + 1);
        goto LABEL_303;
      }
      v18 = v12 + 24;
      *a3 = v18;
      v386 = *(_DWORD *)(v13 + v16);
      if ( (unsigned int)v18 > 0x2F )
      {
        v330 = *((_DWORD **)a3 + 1);
        goto LABEL_304;
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
LABEL_305:
      *((_QWORD *)a3 + 1) = v21 + 1;
LABEL_13:
      v22 = *v21;
      if ( (*(_DWORD *)debug & 0x10000) != 0 )
        sub_9F20((__int64)"debugger_t::ev_set_dbg_options(%s)\n", (const char *)v17);
      v23 = *(__int64 (**)())(*(_QWORD *)v9 + 64LL);
      v24 = 0;
      if ( v23 != sub_9280 )
        v24 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, __int64))v23)(v9, v17, v386, v20, v22);
      if ( !v17 || *(_BYTE *)v17 != 32 || (v6 = v24 != 0, *(_BYTE *)(v17 + 1)) )
      {
        if ( v15 )
          *v15 = v24;
        sub_B4B0((__int64 *)v9, *(_BYTE *)(v9 + 208));
        return 1;
      }
      return v6;
    default:
      return 0;
  }
}

