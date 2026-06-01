__int64 __fastcall sub_D780(_BYTE *a1, __int64 a2, int *a3)
{
  __int64 v3; // r15
  int v4; // ecx
  __int64 (*v7)(void); // rax
  __int64 v8; // rdi
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 *v12; // r13
  __int64 v13; // rsi
  _BYTE *v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rsi
  unsigned int v17; // r14d
  __int64 *v18; // rax
  __int64 v19; // r15
  __int64 (*v20)(); // r9
  __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // r13
  __int64 v27; // r8
  __int64 v28; // rbx
  __int64 v29; // rsi
  __int64 v30; // r12
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // rsi
  __int64 v34; // r9
  _QWORD *v35; // rax
  unsigned int v36; // ecx
  __int64 v37; // rax
  __int64 v38; // r8
  unsigned int v39; // r10d
  __int64 v40; // rsi
  __int64 v41; // r11
  __int64 v42; // r8
  __int64 v43; // rbx
  __int64 v44; // rsi
  __int64 v45; // r8
  _QWORD *v46; // rax
  unsigned int v47; // ecx
  __int64 v48; // rax
  __int64 v49; // r8
  unsigned int v50; // r9d
  __int64 v51; // rsi
  __int64 v52; // r8
  _QWORD *v53; // rax
  unsigned int v54; // ecx
  __int64 v55; // rax
  __int64 v56; // rsi
  unsigned int v57; // r8d
  _QWORD *v58; // rax
  int v59; // ebx
  unsigned int v60; // ecx
  __int64 v61; // rax
  __int64 v62; // rsi
  unsigned int v63; // r9d
  __int64 v64; // r8
  __int64 v65; // r10
  __int64 v66; // rsi
  __int64 v67; // rbx
  _QWORD *v68; // rax
  unsigned int v69; // ecx
  __int64 v70; // rax
  __int64 v71; // rsi
  unsigned int v72; // r9d
  __int64 v73; // r8
  __int64 v74; // r10
  __int64 v75; // rsi
  __int64 v76; // rbx
  _QWORD *v77; // rax
  unsigned int v78; // eax
  unsigned int *v79; // rcx
  unsigned int v80; // ecx
  __int64 v81; // rax
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rsi
  __int64 v85; // r8
  _DWORD *v86; // rax
  unsigned int v87; // ecx
  __int64 v88; // rax
  __int64 v89; // rsi
  __int64 v90; // r9
  __int64 v91; // r8
  __int64 v92; // r10
  __int64 v93; // rsi
  unsigned int v94; // ebx
  _QWORD *v95; // rax
  unsigned int v96; // ecx
  __int64 v97; // rax
  __int64 v98; // rdi
  _DWORD *v99; // r10
  __int64 v100; // rsi
  __int64 v101; // r11
  __int64 v102; // rdi
  unsigned int v103; // r14d
  int v104; // r8d
  unsigned int v105; // ecx
  __int64 v106; // rax
  __int64 v107; // rsi
  __int64 v108; // r8
  _QWORD *v109; // rax
  __int64 (*v110)(); // rcx
  unsigned int v111; // eax
  _DWORD *v112; // rcx
  __int64 (*v113)(); // rax
  unsigned int v114; // eax
  _QWORD *v115; // rcx
  unsigned int v116; // ecx
  __int64 v117; // rax
  __int64 v118; // r8
  _DWORD *v119; // rbx
  __int64 v120; // rsi
  __int64 v121; // r8
  unsigned int *v122; // rax
  unsigned int v123; // ecx
  __int64 v124; // rax
  __int64 v125; // rsi
  __int64 *v126; // rbx
  __int64 v127; // r9
  __int64 v128; // rsi
  __int64 v129; // r8
  __int64 v130; // r9
  unsigned int *v131; // rax
  __int64 (__fastcall *v132)(__int64, __int64); // r8
  unsigned int v133; // ecx
  __int64 v134; // rax
  __int64 v135; // rsi
  __int64 v136; // r9
  __int64 v137; // r8
  unsigned int v138; // r10d
  __int64 v139; // rsi
  unsigned int v140; // ebx
  _QWORD *v141; // rax
  unsigned int v142; // eax
  unsigned int *v143; // rcx
  unsigned int v144; // eax
  unsigned int *v145; // rcx
  unsigned int v146; // ecx
  __int64 v147; // rax
  __int64 v148; // r8
  bool v149; // si
  _QWORD *v150; // rax
  unsigned int v151; // ecx
  __int64 v152; // rax
  __int64 v153; // rsi
  __int64 v154; // r8
  unsigned int *v155; // rax
  unsigned int v156; // ecx
  unsigned int *v157; // rax
  unsigned int v158; // eax
  __int64 v159; // rsi
  __int64 v160; // rcx
  _QWORD *v161; // rbx
  __int64 v162; // r8
  __int64 v163; // r10
  __int64 v164; // rcx
  unsigned int v165; // r11d
  __int64 v166; // r14
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 *v169; // rax
  __int64 v170; // r9
  __int64 v171; // rcx
  __int64 v172; // rsi
  __int64 v173; // r12
  unsigned int v174; // ecx
  __int64 v175; // rax
  __int64 v176; // rsi
  unsigned int v177; // r9d
  __int64 v178; // r8
  unsigned int v179; // r10d
  __int64 v180; // rsi
  unsigned int v181; // r14d
  _QWORD *v182; // rax
  int v183; // eax
  unsigned int v184; // eax
  __int64 v185; // rcx
  __int64 v186; // rsi
  __int64 v187; // r11
  __int64 v188; // r8
  __int64 v189; // r14
  __int64 v190; // rsi
  __int64 v191; // r8
  __int64 v192; // r10
  __int64 v193; // r9
  __int64 v194; // rsi
  __int64 v195; // r10
  __int64 *v196; // rax
  __int64 v197; // rsi
  __int64 v198; // r12
  int v199; // eax
  unsigned int v200; // ecx
  __int64 v201; // rax
  __int64 v202; // rsi
  __int64 v203; // rdi
  unsigned int v204; // r12d
  __int64 v205; // rsi
  __int64 v206; // r13
  __int64 *v207; // rax
  __int64 v208; // r14
  unsigned int v209; // ecx
  __int64 v210; // rax
  __int64 v211; // rsi
  unsigned int v212; // r8d
  unsigned int *v213; // rax
  __int64 (*v214)(); // rcx
  unsigned int v215; // ecx
  __int64 v216; // rax
  __int64 v217; // r8
  unsigned int v218; // r10d
  __int64 v219; // rsi
  bool v220; // r9
  unsigned int *v221; // rax
  __int64 (*v222)(); // r8
  unsigned int v223; // ecx
  __int64 v224; // rax
  __int64 v225; // rsi
  _DWORD *v226; // r14
  __int64 v227; // r9
  __int64 v228; // rsi
  __int64 v229; // r8
  __int64 v230; // r9
  unsigned int *v231; // rax
  __int64 v232; // rcx
  unsigned int v233; // ecx
  __int64 v234; // rax
  __int64 v235; // r8
  __int64 *v236; // rbx
  __int64 v237; // rsi
  __int64 v238; // r9
  __int64 v239; // r8
  __int64 v240; // r10
  __int64 v241; // rsi
  __int64 v242; // r14
  _QWORD *v243; // rax
  __int64 v244; // rax
  __int64 v245; // rdx
  unsigned int v246; // ecx
  __int64 v247; // rax
  __int64 v248; // rsi
  __int64 v249; // r8
  _QWORD *v250; // rax
  unsigned int v251; // eax
  _QWORD *v252; // rcx
  unsigned int v253; // eax
  _QWORD *v254; // rcx
  unsigned int v255; // ecx
  __int64 v256; // rax
  __int64 v257; // rsi
  unsigned int v258; // r9d
  __int64 v259; // r8
  unsigned int v260; // r10d
  __int64 v261; // rsi
  __int64 v262; // rbx
  _QWORD *v263; // rax
  unsigned int v264; // ecx
  __int64 v265; // rax
  __int64 v266; // rsi
  __int64 v267; // r8
  _QWORD *v268; // rax
  unsigned int v269; // ecx
  __int64 v270; // rax
  __int64 v271; // r8
  __int64 v272; // rsi
  __int64 v273; // r9
  __int64 v274; // r8
  __int64 v275; // r10
  __int64 v276; // rsi
  __int64 v277; // r14
  _QWORD *v278; // rax
  unsigned int v279; // ecx
  __int64 v280; // rax
  __int64 v281; // rsi
  unsigned int v282; // r9d
  __int64 v283; // r8
  unsigned int v284; // r10d
  __int64 v285; // rsi
  __int64 v286; // rbx
  _QWORD *v287; // rax
  unsigned int v288; // eax
  _QWORD *v289; // rcx
  unsigned int v290; // ecx
  __int64 v291; // rax
  __int64 v292; // rsi
  unsigned int v293; // r8d
  unsigned int *v294; // rax
  unsigned int v295; // eax
  _QWORD *v296; // rcx
  unsigned int v297; // eax
  __int64 *v298; // rcx
  __int64 v299; // rbx
  __int64 v300; // rax
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
  _QWORD **v318; // rax
  __int64 *v319; // rcx
  __int64 *v320; // rax
  __int64 *v321; // rcx
  __int64 *v322; // rcx
  __int64 *v323; // rax
  __int64 *v324; // rcx
  _QWORD *v325; // rax
  unsigned int *v326; // rcx
  _QWORD **v327; // rax
  _BYTE **v328; // rcx
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
  __int64 *v339; // rcx
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
  _DWORD **v361; // rcx
  unsigned int *v362; // rax
  _QWORD *v363; // rcx
  _QWORD **v364; // rax
  __int64 *v365; // rcx
  __int64 *v366; // rax
  __int64 *v367; // rcx
  __int64 *v368; // rcx
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
  __int64 v387; // [rsp+18h] [rbp-68h]
  __int64 v388; // [rsp+30h] [rbp-50h] BYREF
  __int128 v389; // [rsp+38h] [rbp-48h]
  unsigned __int64 v390; // [rsp+48h] [rbp-38h]

  v3 = 0;
  v4 = *((_DWORD *)a1 + 34);
  v390 = __readfsqword(0x28u);
  if ( *(_DWORD *)(dbg + 16LL) != v4 || *(_QWORD *)(dbg + 32LL) != *((_QWORD *)a1 + 19) )
    return v3;
  v7 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
  if ( (char *)v7 == (char *)sub_A830 )
  {
    v8 = (__int64)(a1 + 224);
  }
  else
  {
    v385 = a3;
    v301 = v7();
    a3 = v385;
    v8 = v301;
  }
  switch ( a2 )
  {
    case 0LL:
      v200 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v368 = *((__int64 **)a3 + 1);
        v369 = (unsigned int *)(v368 + 1);
        *((_QWORD *)a3 + 1) = v368 + 1;
        v387 = *v368;
      }
      else
      {
        v201 = *((_QWORD *)a3 + 2);
        v202 = v200 + 8;
        *a3 = v202;
        v387 = *(_QWORD *)(v201 + v200);
        if ( (unsigned int)v202 <= 0x2F )
        {
          v203 = v200 + 16;
          *a3 = v203;
          v204 = *(_DWORD *)(v201 + v202);
          if ( (unsigned int)v203 <= 0x2F )
          {
            v205 = v200 + 24;
            *a3 = v205;
            v206 = *(_QWORD *)(v201 + v203);
            if ( (unsigned int)v205 <= 0x2F )
            {
              v207 = (__int64 *)(v205 + v201);
              *a3 = v200 + 32;
              goto LABEL_169;
            }
            v207 = *((__int64 **)a3 + 1);
LABEL_368:
            *((_QWORD *)a3 + 1) = v207 + 1;
LABEL_169:
            v208 = *v207;
            if ( !*v207 )
            {
              if ( under_debugger )
                BUG();
              v8 = 1522;
              interr();
              goto LABEL_411;
            }
            if ( (*(_DWORD *)debug & 0x10000) != 0 )
            {
              v388 = 0;
              v389 = 0;
              get_dbctx_id();
              sub_C7A0(&v388);
              sub_B4F0();
              if ( v388 )
              {
                *(_QWORD *)&v389 = 0;
                qfree();
              }
            }
            return (int)sub_CE60((__int64)a1, v387, v204, v206, v208);
          }
          v370 = *((__int64 **)a3 + 1);
LABEL_367:
          v207 = v370 + 1;
          *((_QWORD *)a3 + 1) = v370 + 1;
          v206 = *v370;
          goto LABEL_368;
        }
        v369 = *((unsigned int **)a3 + 1);
      }
      v370 = (__int64 *)(v369 + 2);
      *((_QWORD *)a3 + 1) = v369 + 2;
      v204 = *v369;
      goto LABEL_367;
    case 1LL:
      if ( (*(_DWORD *)debug & 0x10000) != 0 )
      {
        v388 = 0;
        v389 = 0;
        get_dbctx_id();
        sub_C7A0(&v388);
        sub_B4F0();
        if ( v388 )
        {
          *(_QWORD *)&v389 = 0;
          qfree();
        }
      }
      return (int)sub_C650(a1);
    case 2LL:
      v264 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v302 = *((__int64 **)a3 + 1);
        v268 = v302 + 1;
        *((_QWORD *)a3 + 1) = v302 + 1;
        v267 = *v302;
      }
      else
      {
        v265 = *((_QWORD *)a3 + 2);
        v266 = v264 + 8;
        *a3 = v266;
        v267 = *(_QWORD *)(v265 + v264);
        if ( (unsigned int)v266 <= 0x2F )
        {
          v268 = (_QWORD *)(v266 + v265);
          *a3 = v264 + 16;
          return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, v267, *v268);
        }
        v268 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v268 + 1;
      return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, v267, *v268);
    case 3LL:
      v184 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v374 = *((__int64 **)a3 + 1);
        v375 = v374 + 1;
        *((_QWORD *)a3 + 1) = v374 + 1;
        v187 = *v374;
      }
      else
      {
        v185 = *((_QWORD *)a3 + 2);
        v186 = v184 + 8;
        *a3 = v186;
        v187 = *(_QWORD *)(v185 + v184);
        if ( (unsigned int)v186 <= 0x2F )
        {
          v188 = v184 + 16;
          *a3 = v188;
          v189 = *(_QWORD *)(v185 + v186);
          if ( (unsigned int)v188 <= 0x2F )
          {
            v190 = v184 + 24;
            *a3 = v190;
            v191 = *(_QWORD *)(v185 + v188);
            if ( (unsigned int)v190 <= 0x2F )
            {
              v192 = v184 + 32;
              *a3 = v192;
              v193 = *(unsigned int *)(v185 + v190);
              if ( (unsigned int)v192 <= 0x2F )
              {
                v194 = v184 + 40;
                *a3 = v194;
                v195 = *(_QWORD *)(v185 + v192);
                if ( (unsigned int)v194 <= 0x2F )
                {
                  *a3 = v184 + 48;
                  v196 = *((__int64 **)a3 + 1);
                  v197 = *(unsigned int *)(v185 + v194);
                  goto LABEL_162;
                }
                v379 = *((unsigned int **)a3 + 1);
LABEL_378:
                v196 = (__int64 *)(v379 + 2);
                *((_QWORD *)a3 + 1) = v379 + 2;
                v197 = *v379;
LABEL_162:
                *((_QWORD *)a3 + 1) = v196 + 1;
                v198 = *v196;
                *((_QWORD *)a3 + 1) = v196 + 2;
                v199 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v8 + 128LL))(
                         v8,
                         v187,
                         v189,
                         v196[1],
                         v191,
                         v193,
                         v195,
                         v197,
                         v198);
                v3 = v199;
                if ( v199 > 0 )
                  goto LABEL_154;
                return v3;
              }
              v378 = *((_QWORD **)a3 + 1);
LABEL_377:
              v379 = (unsigned int *)(v378 + 1);
              *((_QWORD *)a3 + 1) = v378 + 1;
              v195 = *v378;
              goto LABEL_378;
            }
            v377 = *((unsigned int **)a3 + 1);
LABEL_376:
            v378 = v377 + 2;
            *((_QWORD *)a3 + 1) = v377 + 2;
            v193 = *v377;
            goto LABEL_377;
          }
          v376 = *((_QWORD **)a3 + 1);
LABEL_375:
          v377 = (unsigned int *)(v376 + 1);
          *((_QWORD *)a3 + 1) = v376 + 1;
          v191 = *v376;
          goto LABEL_376;
        }
        v375 = *((__int64 **)a3 + 1);
      }
      v376 = v375 + 1;
      *((_QWORD *)a3 + 1) = v375 + 1;
      v189 = *v375;
      goto LABEL_375;
    case 4LL:
      v174 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v371 = *((unsigned int **)a3 + 1);
        v372 = v371 + 2;
        *((_QWORD *)a3 + 1) = v371 + 2;
        v177 = *v371;
      }
      else
      {
        v175 = *((_QWORD *)a3 + 2);
        v176 = v174 + 8;
        *a3 = v176;
        v177 = *(_DWORD *)(v175 + v174);
        if ( (unsigned int)v176 <= 0x2F )
        {
          v178 = v174 + 16;
          *a3 = v178;
          v179 = *(_DWORD *)(v175 + v176);
          if ( (unsigned int)v178 <= 0x2F )
          {
            v180 = v174 + 24;
            *a3 = v180;
            v181 = *(_DWORD *)(v175 + v178);
            if ( (unsigned int)v180 <= 0x2F )
            {
              v182 = (_QWORD *)(v180 + v175);
              *a3 = v174 + 32;
              goto LABEL_153;
            }
            v182 = *((_QWORD **)a3 + 1);
LABEL_372:
            *((_QWORD *)a3 + 1) = v182 + 1;
LABEL_153:
            v183 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v8 + 144LL))(
                     v8,
                     v177,
                     v179,
                     v181,
                     *v182);
            v3 = v183;
            if ( v183 > 0 )
LABEL_154:
              sub_CB00((__int64 *)a1, 1);
            return v3;
          }
          v373 = *((_DWORD **)a3 + 1);
LABEL_371:
          v182 = v373 + 2;
          *((_QWORD *)a3 + 1) = v373 + 2;
          v181 = *v373;
          goto LABEL_372;
        }
        v372 = *((unsigned int **)a3 + 1);
      }
      v373 = v372 + 2;
      *((_QWORD *)a3 + 1) = v372 + 2;
      v179 = *v372;
      goto LABEL_371;
    case 5LL:
      return (*(int (__fastcall **)(__int64))(*(_QWORD *)v8 + 120LL))(v8);
    case 6LL:
      v295 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v296 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v296 + 1;
      }
      else
      {
        v296 = (_QWORD *)(*((_QWORD *)a3 + 2) + v295);
        *a3 = v295 + 8;
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 552LL))(v8, *v296);
      return 1;
    case 7LL:
      v297 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v298 = *((__int64 **)a3 + 1);
        *((_QWORD *)a3 + 1) = v298 + 1;
      }
      else
      {
        v298 = (__int64 *)(*((_QWORD *)a3 + 2) + v297);
        *a3 = v297 + 8;
      }
      v299 = *v298;
      netnode_check();
      v300 = netnode_altval();
      if ( v300 )
      {
        if ( v299 != v300 )
          sub_C030(v300, v299);
      }
      else if ( !(unsigned __int8)is_miniidb() )
      {
        sub_B5C0();
      }
      return 1;
    case 8LL:
      v253 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v254 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v254 + 1;
      }
      else
      {
        v254 = (_QWORD *)(*((_QWORD *)a3 + 2) + v253);
        *a3 = v253 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 152LL))(v8, *v254);
    case 9LL:
      v288 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v289 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v289 + 1;
      }
      else
      {
        v289 = (_QWORD *)(*((_QWORD *)a3 + 2) + v288);
        *a3 = v288 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 160LL))(v8, *v289);
    case 10LL:
      v116 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v331 = *((_DWORD ***)a3 + 1);
        v332 = v331 + 1;
        *((_QWORD *)a3 + 1) = v331 + 1;
        v119 = *v331;
      }
      else
      {
        v117 = *((_QWORD *)a3 + 2);
        v118 = v116 + 8;
        *a3 = v118;
        v119 = *(_DWORD **)(v117 + v116);
        if ( (unsigned int)v118 <= 0x2F )
        {
          v120 = v116 + 16;
          *a3 = v120;
          v121 = *(_QWORD *)(v117 + v118);
          if ( (unsigned int)v120 <= 0x2F )
          {
            v122 = (unsigned int *)(v120 + v117);
            *a3 = v116 + 24;
            goto LABEL_106;
          }
          v122 = *((unsigned int **)a3 + 1);
LABEL_311:
          *((_QWORD *)a3 + 1) = v122 + 2;
LABEL_106:
          *v119 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v8 + 136LL))(v8, v121, *v122);
          return 1;
        }
        v332 = *((_QWORD **)a3 + 1);
      }
      v122 = (unsigned int *)(v332 + 1);
      *((_QWORD *)a3 + 1) = v332 + 1;
      v121 = *v332;
      goto LABEL_311;
    case 11LL:
      v114 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v115 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v115 + 1;
      }
      else
      {
        v115 = (_QWORD *)(*((_QWORD *)a3 + 2) + v114);
        *a3 = v114 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 168LL))(v8, *v115);
    case 12LL:
      v111 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v112 = *((_DWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v112 + 2;
      }
      else
      {
        v112 = (_DWORD *)(*((_QWORD *)a3 + 2) + v111);
        *a3 = v111 + 8;
      }
      v113 = *(__int64 (**)())(*(_QWORD *)v8 + 176LL);
      if ( v113 == sub_A740 )
        return 0;
      return ((int (__fastcall *)(__int64, bool))v113)(v8, *v112 != 0);
    case 13LL:
      v151 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v337 = *((_QWORD **)a3 + 1);
        v155 = (unsigned int *)(v337 + 1);
        *((_QWORD *)a3 + 1) = v337 + 1;
        v154 = *v337;
      }
      else
      {
        v152 = *((_QWORD *)a3 + 2);
        v153 = v151 + 8;
        *a3 = v153;
        v154 = *(_QWORD *)(v152 + v151);
        if ( (unsigned int)v153 <= 0x2F )
        {
          v155 = (unsigned int *)(v153 + v152);
          *a3 = v151 + 16;
          goto LABEL_134;
        }
        v155 = *((unsigned int **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v155 + 2;
LABEL_134:
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v8 + 184LL))(v8, v154, *v155);
      return 1;
    case 14LL:
      v146 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v358 = *((_DWORD **)a3 + 1);
        v150 = v358 + 2;
        *((_QWORD *)a3 + 1) = v358 + 2;
        v149 = *v358 != 0;
      }
      else
      {
        v147 = *((_QWORD *)a3 + 2);
        v148 = v146 + 8;
        *a3 = v148;
        v149 = *(_DWORD *)(v147 + v146) != 0;
        if ( (unsigned int)v148 <= 0x2F )
        {
          v150 = (_QWORD *)(v148 + v147);
          *a3 = v146 + 16;
          goto LABEL_130;
        }
        v150 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v150 + 1;
LABEL_130:
      (*(void (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)v8 + 192LL))(v8, 0, v149, *v150);
      return 1;
    case 15LL:
      v144 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v145 = *((unsigned int **)a3 + 1);
        *((_QWORD *)a3 + 1) = v145 + 2;
      }
      else
      {
        v145 = (unsigned int *)(*((_QWORD *)a3 + 2) + v144);
        *a3 = v144 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 200LL))(v8, *v145);
    case 16LL:
      v142 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v143 = *((unsigned int **)a3 + 1);
        *((_QWORD *)a3 + 1) = v143 + 2;
      }
      else
      {
        v143 = (unsigned int *)(*((_QWORD *)a3 + 2) + v142);
        *a3 = v142 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 208LL))(v8, *v143);
    case 17LL:
      v290 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v306 = *((unsigned int **)a3 + 1);
        v294 = v306 + 2;
        *((_QWORD *)a3 + 1) = v306 + 2;
        v293 = *v306;
      }
      else
      {
        v291 = *((_QWORD *)a3 + 2);
        v292 = v290 + 8;
        *a3 = v292;
        v293 = *(_DWORD *)(v291 + v290);
        if ( (unsigned int)v292 <= 0x2F )
        {
          v294 = (unsigned int *)(v292 + v291);
          *a3 = v290 + 16;
          return (*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 216LL))(v8, v293, *v294);
        }
        v294 = *((unsigned int **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v294 + 2;
      return (*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 216LL))(v8, v293, *v294);
    case 18LL:
      v255 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v310 = *((unsigned int **)a3 + 1);
        v311 = v310 + 2;
        *((_QWORD *)a3 + 1) = v310 + 2;
        v258 = *v310;
      }
      else
      {
        v256 = *((_QWORD *)a3 + 2);
        v257 = v255 + 8;
        *a3 = v257;
        v258 = *(_DWORD *)(v256 + v255);
        if ( (unsigned int)v257 <= 0x2F )
        {
          v259 = v255 + 16;
          *a3 = v259;
          v260 = *(_DWORD *)(v256 + v257);
          if ( (unsigned int)v259 <= 0x2F )
          {
            v261 = v255 + 24;
            *a3 = v261;
            v262 = *(_QWORD *)(v256 + v259);
            if ( (unsigned int)v261 <= 0x2F )
            {
              v263 = (_QWORD *)(v261 + v256);
              *a3 = v255 + 32;
              return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v8 + 224LL))(
                       v8,
                       v258,
                       v260,
                       v262,
                       *v263);
            }
            v263 = *((_QWORD **)a3 + 1);
LABEL_283:
            *((_QWORD *)a3 + 1) = v263 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v8 + 224LL))(
                     v8,
                     v258,
                     v260,
                     v262,
                     *v263);
          }
          v312 = *((__int64 **)a3 + 1);
LABEL_282:
          v263 = v312 + 1;
          *((_QWORD *)a3 + 1) = v312 + 1;
          v262 = *v312;
          goto LABEL_283;
        }
        v311 = *((_DWORD **)a3 + 1);
      }
      v312 = (__int64 *)(v311 + 2);
      *((_QWORD *)a3 + 1) = v311 + 2;
      v260 = *v311;
      goto LABEL_282;
    case 19LL:
      v279 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v307 = *((unsigned int **)a3 + 1);
        v308 = v307 + 2;
        *((_QWORD *)a3 + 1) = v307 + 2;
        v282 = *v307;
      }
      else
      {
        v280 = *((_QWORD *)a3 + 2);
        v281 = v279 + 8;
        *a3 = v281;
        v282 = *(_DWORD *)(v280 + v279);
        if ( (unsigned int)v281 <= 0x2F )
        {
          v283 = v279 + 16;
          *a3 = v283;
          v284 = *(_DWORD *)(v280 + v281);
          if ( (unsigned int)v283 <= 0x2F )
          {
            v285 = v279 + 24;
            *a3 = v285;
            v286 = *(_QWORD *)(v280 + v283);
            if ( (unsigned int)v285 <= 0x2F )
            {
              v287 = (_QWORD *)(v285 + v280);
              *a3 = v279 + 32;
              return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v8 + 232LL))(
                       v8,
                       v282,
                       v284,
                       v286,
                       *v287);
            }
            v287 = *((_QWORD **)a3 + 1);
LABEL_279:
            *((_QWORD *)a3 + 1) = v287 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v8 + 232LL))(
                     v8,
                     v282,
                     v284,
                     v286,
                     *v287);
          }
          v309 = *((__int64 **)a3 + 1);
LABEL_278:
          v287 = v309 + 1;
          *((_QWORD *)a3 + 1) = v309 + 1;
          v286 = *v309;
          goto LABEL_279;
        }
        v308 = *((_DWORD **)a3 + 1);
      }
      v309 = (__int64 *)(v308 + 2);
      *((_QWORD *)a3 + 1) = v308 + 2;
      v284 = *v308;
      goto LABEL_278;
    case 20LL:
      v133 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v355 = *((_QWORD **)a3 + 1);
        v356 = (unsigned int *)(v355 + 1);
        *((_QWORD *)a3 + 1) = v355 + 1;
        v136 = *v355;
      }
      else
      {
        v134 = *((_QWORD *)a3 + 2);
        v135 = v133 + 8;
        *a3 = v135;
        v136 = *(_QWORD *)(v134 + v133);
        if ( (unsigned int)v135 <= 0x2F )
        {
          v137 = v133 + 16;
          *a3 = v137;
          v138 = *(_DWORD *)(v134 + v135);
          if ( (unsigned int)v137 <= 0x2F )
          {
            v139 = v133 + 24;
            *a3 = v139;
            v140 = *(_DWORD *)(v134 + v137);
            if ( (unsigned int)v139 <= 0x2F )
            {
              v141 = (_QWORD *)(v139 + v134);
              *a3 = v133 + 32;
              return (*(int (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v8 + 240LL))(
                       v8,
                       v136,
                       v138,
                       v140,
                       *v141);
            }
            v141 = *((_QWORD **)a3 + 1);
LABEL_347:
            *((_QWORD *)a3 + 1) = v141 + 1;
            return (*(int (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v8 + 240LL))(
                     v8,
                     v136,
                     v138,
                     v140,
                     *v141);
          }
          v357 = *((_DWORD **)a3 + 1);
LABEL_346:
          v141 = v357 + 2;
          *((_QWORD *)a3 + 1) = v357 + 2;
          v140 = *v357;
          goto LABEL_347;
        }
        v356 = *((unsigned int **)a3 + 1);
      }
      v357 = v356 + 2;
      *((_QWORD *)a3 + 1) = v356 + 2;
      v138 = *v356;
      goto LABEL_346;
    case 21LL:
      v246 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v344 = *((__int64 **)a3 + 1);
        v250 = v344 + 1;
        *((_QWORD *)a3 + 1) = v344 + 1;
        v249 = *v344;
      }
      else
      {
        v247 = *((_QWORD *)a3 + 2);
        v248 = v246 + 8;
        *a3 = v248;
        v249 = *(_QWORD *)(v247 + v246);
        if ( (unsigned int)v248 <= 0x2F )
        {
          v250 = (_QWORD *)(v248 + v247);
          *a3 = v246 + 16;
          return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v8 + 256LL))(v8, v249, *v250);
        }
        v250 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v250 + 1;
      return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v8 + 256LL))(v8, v249, *v250);
    case 22LL:
      v233 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v364 = *((_QWORD ***)a3 + 1);
        v365 = (__int64 *)(v364 + 1);
        *((_QWORD *)a3 + 1) = v364 + 1;
        v236 = *v364;
      }
      else
      {
        v234 = *((_QWORD *)a3 + 2);
        v235 = v233 + 8;
        *a3 = v235;
        v236 = *(__int64 **)(v234 + v233);
        if ( (unsigned int)v235 <= 0x2F )
        {
          v237 = v233 + 16;
          *a3 = v237;
          v238 = *(_QWORD *)(v234 + v235);
          if ( (unsigned int)v237 <= 0x2F )
          {
            v239 = v233 + 24;
            *a3 = v239;
            v240 = *(_QWORD *)(v234 + v237);
            if ( (unsigned int)v239 <= 0x2F )
            {
              v241 = v233 + 32;
              *a3 = v241;
              v242 = *(_QWORD *)(v234 + v239);
              if ( (unsigned int)v241 <= 0x2F )
              {
                v243 = (_QWORD *)(v241 + v234);
                *a3 = v233 + 40;
                goto LABEL_206;
              }
              v243 = *((_QWORD **)a3 + 1);
LABEL_364:
              *((_QWORD *)a3 + 1) = v243 + 1;
LABEL_206:
              v244 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v8 + 288LL))(
                       v8,
                       v238,
                       v240,
                       v242,
                       *v243);
              goto LABEL_207;
            }
            v367 = *((__int64 **)a3 + 1);
LABEL_363:
            v243 = v367 + 1;
            *((_QWORD *)a3 + 1) = v367 + 1;
            v242 = *v367;
            goto LABEL_364;
          }
          v366 = *((__int64 **)a3 + 1);
LABEL_362:
          v367 = v366 + 1;
          *((_QWORD *)a3 + 1) = v366 + 1;
          v240 = *v366;
          goto LABEL_363;
        }
        v365 = *((__int64 **)a3 + 1);
      }
      v366 = v365 + 1;
      *((_QWORD *)a3 + 1) = v365 + 1;
      v238 = *v365;
      goto LABEL_362;
    case 23LL:
      v269 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v318 = *((_QWORD ***)a3 + 1);
        v319 = (__int64 *)(v318 + 1);
        *((_QWORD *)a3 + 1) = v318 + 1;
        v236 = *v318;
      }
      else
      {
        v270 = *((_QWORD *)a3 + 2);
        v271 = v269 + 8;
        *a3 = v271;
        v236 = *(__int64 **)(v270 + v269);
        if ( (unsigned int)v271 <= 0x2F )
        {
          v272 = v269 + 16;
          *a3 = v272;
          v273 = *(_QWORD *)(v270 + v271);
          if ( (unsigned int)v272 <= 0x2F )
          {
            v274 = v269 + 24;
            *a3 = v274;
            v275 = *(_QWORD *)(v270 + v272);
            if ( (unsigned int)v274 <= 0x2F )
            {
              v276 = v269 + 32;
              *a3 = v276;
              v277 = *(_QWORD *)(v270 + v274);
              if ( (unsigned int)v276 <= 0x2F )
              {
                v278 = (_QWORD *)(v276 + v270);
                *a3 = v269 + 40;
                goto LABEL_241;
              }
              v278 = *((_QWORD **)a3 + 1);
LABEL_295:
              *((_QWORD *)a3 + 1) = v278 + 1;
LABEL_241:
              v244 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v8 + 296LL))(
                       v8,
                       v273,
                       v275,
                       v277,
                       *v278);
LABEL_207:
              v245 = 0;
              if ( v244 >= 0 )
                v245 = v244;
              *v236 = v245;
              if ( v244 < 0 )
                return -5;
              return 1;
            }
            v321 = *((__int64 **)a3 + 1);
LABEL_294:
            v278 = v321 + 1;
            *((_QWORD *)a3 + 1) = v321 + 1;
            v277 = *v321;
            goto LABEL_295;
          }
          v320 = *((__int64 **)a3 + 1);
LABEL_293:
          v321 = v320 + 1;
          *((_QWORD *)a3 + 1) = v320 + 1;
          v275 = *v320;
          goto LABEL_294;
        }
        v319 = *((__int64 **)a3 + 1);
      }
      v320 = v319 + 1;
      *((_QWORD *)a3 + 1) = v319 + 1;
      v273 = *v319;
      goto LABEL_293;
    case 24LL:
      v223 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v361 = *((_DWORD ***)a3 + 1);
        v362 = (unsigned int *)(v361 + 1);
        *((_QWORD *)a3 + 1) = v361 + 1;
        v226 = *v361;
      }
      else
      {
        v224 = *((_QWORD *)a3 + 2);
        v225 = v223 + 8;
        *a3 = v225;
        v226 = *(_DWORD **)(v224 + v223);
        if ( (unsigned int)v225 <= 0x2F )
        {
          v227 = v223 + 16;
          *a3 = v227;
          v228 = *(unsigned int *)(v224 + v225);
          if ( (unsigned int)v227 <= 0x2F )
          {
            v229 = v223 + 24;
            *a3 = v229;
            v230 = *(_QWORD *)(v224 + v227);
            if ( (unsigned int)v229 <= 0x2F )
            {
              v231 = (unsigned int *)(v229 + v224);
              *a3 = v223 + 32;
              goto LABEL_190;
            }
            v231 = *((unsigned int **)a3 + 1);
LABEL_359:
            *((_QWORD *)a3 + 1) = v231 + 2;
LABEL_190:
            v232 = *v231;
            if ( (_DWORD)v228 != 4 )
            {
              if ( (a1[154] & 0x40) == 0 )
              {
                if ( (v228 & 0xFFFFFFFD) == 1 || (_DWORD)v228 == 8 )
                {
                  if ( (_DWORD)v232 != 1 )
                  {
                    if ( (_DWORD)v228 == 8 || (((_DWORD)v232 - 2) & 0xFFFFFFFD) != 0 && (_DWORD)v232 != 8 )
                    {
                      *v226 = 5;
                      return 1;
                    }
                    if ( (v230 & ((int)v232 - 1)) != 0 )
                    {
                      *v226 = 3;
                      return 1;
                    }
                  }
                  goto LABEL_199;
                }
LABEL_383:
                *v226 = 2;
                return 1;
              }
              if ( !(_DWORD)v228 )
                goto LABEL_383;
            }
LABEL_199:
            *v226 = 0;
            *v226 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v8 + 304LL))(
                      v8,
                      v228,
                      v230,
                      v232);
            return 1;
          }
          v363 = *((_QWORD **)a3 + 1);
LABEL_358:
          v231 = (unsigned int *)(v363 + 1);
          *((_QWORD *)a3 + 1) = v363 + 1;
          v230 = *v363;
          goto LABEL_359;
        }
        v362 = *((unsigned int **)a3 + 1);
      }
      v363 = v362 + 2;
      *((_QWORD *)a3 + 1) = v362 + 2;
      v228 = *v362;
      goto LABEL_358;
    case 25LL:
      v96 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v338 = *((_DWORD ***)a3 + 1);
        v339 = (__int64 *)(v338 + 1);
        *((_QWORD *)a3 + 1) = v338 + 1;
        v99 = *v338;
      }
      else
      {
        v97 = *((_QWORD *)a3 + 2);
        v98 = v96 + 8;
        *a3 = v98;
        v99 = *(_DWORD **)(v97 + v96);
        if ( (unsigned int)v98 <= 0x2F )
        {
          v100 = v96 + 16;
          *a3 = v100;
          v101 = *(_QWORD *)(v97 + v98);
          if ( (unsigned int)v100 <= 0x2F )
          {
            v102 = v96 + 24;
            *a3 = v102;
            v103 = *(_DWORD *)(v97 + v100);
            if ( (unsigned int)v102 <= 0x2F )
            {
              *a3 = v96 + 32;
              v104 = *(_DWORD *)(v97 + v102);
              if ( v96 + 32 <= 0x2F )
              {
                *a3 = v96 + 40;
                return (int)sub_C160(a1, v99, v101, v103, v104);
              }
              v342 = *((int **)a3 + 1);
LABEL_323:
              *((_QWORD *)a3 + 1) = v342 + 2;
              return (int)sub_C160(a1, v99, v101, v103, v104);
            }
            v341 = *((int **)a3 + 1);
LABEL_322:
            v342 = v341 + 2;
            *((_QWORD *)a3 + 1) = v341 + 2;
            v104 = *v341;
            goto LABEL_323;
          }
          v340 = *((unsigned int **)a3 + 1);
LABEL_321:
          v341 = (int *)(v340 + 2);
          *((_QWORD *)a3 + 1) = v340 + 2;
          v103 = *v340;
          goto LABEL_322;
        }
        v339 = *((__int64 **)a3 + 1);
      }
      v340 = (unsigned int *)(v339 + 1);
      *((_QWORD *)a3 + 1) = v339 + 1;
      v101 = *v339;
      goto LABEL_321;
    case 26LL:
      v87 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v348 = *((__int64 **)a3 + 1);
        v349 = v348 + 1;
        *((_QWORD *)a3 + 1) = v348 + 1;
        v90 = *v348;
      }
      else
      {
        v88 = *((_QWORD *)a3 + 2);
        v89 = v87 + 8;
        *a3 = v89;
        v90 = *(_QWORD *)(v88 + v87);
        if ( (unsigned int)v89 <= 0x2F )
        {
          v91 = v87 + 16;
          *a3 = v91;
          v92 = *(_QWORD *)(v88 + v89);
          if ( (unsigned int)v91 <= 0x2F )
          {
            v93 = v87 + 24;
            *a3 = v93;
            v94 = *(_DWORD *)(v88 + v91);
            if ( (unsigned int)v93 <= 0x2F )
            {
              v95 = (_QWORD *)(v93 + v88);
              *a3 = v87 + 32;
              return (*(int (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 352LL))(
                       v8,
                       v90,
                       v92,
                       v94,
                       *v95);
            }
            v95 = *((_QWORD **)a3 + 1);
LABEL_335:
            *((_QWORD *)a3 + 1) = v95 + 1;
            return (*(int (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 352LL))(
                     v8,
                     v90,
                     v92,
                     v94,
                     *v95);
          }
          v350 = *((_DWORD **)a3 + 1);
LABEL_334:
          v95 = v350 + 2;
          *((_QWORD *)a3 + 1) = v350 + 2;
          v94 = *v350;
          goto LABEL_335;
        }
        v349 = *((_QWORD **)a3 + 1);
      }
      v350 = v349 + 1;
      *((_QWORD *)a3 + 1) = v349 + 1;
      v92 = *v349;
      goto LABEL_334;
    case 27LL:
      v80 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v353 = *((__int64 **)a3 + 1);
        v354 = v353 + 1;
        *((_QWORD *)a3 + 1) = v353 + 1;
        v83 = *v353;
      }
      else
      {
        v81 = *((_QWORD *)a3 + 2);
        v82 = v80 + 8;
        *a3 = v82;
        v83 = *(_QWORD *)(v81 + v80);
        if ( (unsigned int)v82 <= 0x2F )
        {
          v84 = v80 + 16;
          *a3 = v84;
          v85 = *(_QWORD *)(v81 + v82);
          if ( (unsigned int)v84 <= 0x2F )
          {
            v86 = (_DWORD *)(v84 + v81);
            *a3 = v80 + 24;
            return (*(int (__fastcall **)(__int64, __int64, __int64, bool))(*(_QWORD *)v8 + 368LL))(
                     v8,
                     v83,
                     v85,
                     *v86 != 0);
          }
          v86 = *((_DWORD **)a3 + 1);
LABEL_343:
          *((_QWORD *)a3 + 1) = v86 + 2;
          return (*(int (__fastcall **)(__int64, __int64, __int64, bool))(*(_QWORD *)v8 + 368LL))(
                   v8,
                   v83,
                   v85,
                   *v86 != 0);
        }
        v354 = *((_QWORD **)a3 + 1);
      }
      v86 = v354 + 1;
      *((_QWORD *)a3 + 1) = v354 + 1;
      v85 = *v354;
      goto LABEL_343;
    case 28LL:
      v78 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v79 = *((unsigned int **)a3 + 1);
        *((_QWORD *)a3 + 1) = v79 + 2;
      }
      else
      {
        v79 = (unsigned int *)(*((_QWORD *)a3 + 2) + v78);
        *a3 = v78 + 8;
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 376LL))(v8, *v79);
      return 1;
    case 29LL:
      v69 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v315 = *((_DWORD **)a3 + 1);
        v316 = (__int64 *)(v315 + 2);
        *((_QWORD *)a3 + 1) = v315 + 2;
        v72 = *v315;
      }
      else
      {
        v70 = *((_QWORD *)a3 + 2);
        v71 = v69 + 8;
        *a3 = v71;
        v72 = *(_DWORD *)(v70 + v69);
        if ( (unsigned int)v71 <= 0x2F )
        {
          v73 = v69 + 16;
          *a3 = v73;
          v74 = *(_QWORD *)(v70 + v71);
          if ( (unsigned int)v73 <= 0x2F )
          {
            v75 = v69 + 24;
            *a3 = v75;
            v76 = *(_QWORD *)(v70 + v73);
            if ( (unsigned int)v75 <= 0x2F )
            {
              v77 = (_QWORD *)(v75 + v70);
              *a3 = v69 + 32;
              return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v8 + 384LL))(
                       v8,
                       v72,
                       v74,
                       v76,
                       *v77);
            }
            v77 = *((_QWORD **)a3 + 1);
LABEL_290:
            *((_QWORD *)a3 + 1) = v77 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v8 + 384LL))(
                     v8,
                     v72,
                     v74,
                     v76,
                     *v77);
          }
          v317 = *((__int64 **)a3 + 1);
LABEL_289:
          v77 = v317 + 1;
          *((_QWORD *)a3 + 1) = v317 + 1;
          v76 = *v317;
          goto LABEL_290;
        }
        v316 = *((__int64 **)a3 + 1);
      }
      v317 = v316 + 1;
      *((_QWORD *)a3 + 1) = v316 + 1;
      v74 = *v316;
      goto LABEL_289;
    case 30LL:
      v60 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v345 = *((_DWORD **)a3 + 1);
        v346 = (__int64 *)(v345 + 2);
        *((_QWORD *)a3 + 1) = v345 + 2;
        v63 = *v345;
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
              v68 = (_QWORD *)(v66 + v61);
              *a3 = v60 + 32;
              return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v8 + 392LL))(
                       v8,
                       v63,
                       v65,
                       v67,
                       *v68);
            }
            v68 = *((_QWORD **)a3 + 1);
LABEL_331:
            *((_QWORD *)a3 + 1) = v68 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v8 + 392LL))(
                     v8,
                     v63,
                     v65,
                     v67,
                     *v68);
          }
          v347 = *((__int64 **)a3 + 1);
LABEL_330:
          v68 = v347 + 1;
          *((_QWORD *)a3 + 1) = v347 + 1;
          v67 = *v347;
          goto LABEL_331;
        }
        v346 = *((__int64 **)a3 + 1);
      }
      v347 = v346 + 1;
      *((_QWORD *)a3 + 1) = v346 + 1;
      v65 = *v346;
      goto LABEL_330;
    case 31LL:
      v123 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v303 = *((_QWORD ***)a3 + 1);
        v304 = (__int64 *)(v303 + 1);
        *((_QWORD *)a3 + 1) = v303 + 1;
        v126 = *v303;
      }
      else
      {
        v124 = *((_QWORD *)a3 + 2);
        v125 = v123 + 8;
        *a3 = v125;
        v126 = *(__int64 **)(v124 + v123);
        if ( (unsigned int)v125 <= 0x2F )
        {
          v127 = v123 + 16;
          *a3 = v127;
          v128 = *(_QWORD *)(v124 + v125);
          if ( (unsigned int)v127 <= 0x2F )
          {
            v129 = v123 + 24;
            *a3 = v129;
            v130 = *(_QWORD *)(v124 + v127);
            if ( (unsigned int)v129 <= 0x2F )
            {
              v131 = (unsigned int *)(v129 + v124);
              *a3 = v123 + 32;
              goto LABEL_112;
            }
            v131 = *((unsigned int **)a3 + 1);
LABEL_271:
            *((_QWORD *)a3 + 1) = v131 + 2;
LABEL_112:
            v132 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 248LL);
            if ( v132 != sub_A750 )
              v128 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))v132)(v8, v128, v130, *v131);
            *v126 = v128;
            return 1;
          }
          v305 = *((_QWORD **)a3 + 1);
LABEL_270:
          v131 = (unsigned int *)(v305 + 1);
          *((_QWORD *)a3 + 1) = v305 + 1;
          v130 = *v305;
          goto LABEL_271;
        }
        v304 = *((__int64 **)a3 + 1);
      }
      v305 = v304 + 1;
      *((_QWORD *)a3 + 1) = v304 + 1;
      v128 = *v304;
      goto LABEL_270;
    case 33LL:
      v54 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v351 = *((_DWORD **)a3 + 1);
        v58 = v351 + 2;
        *((_QWORD *)a3 + 1) = v351 + 2;
        v57 = *v351;
      }
      else
      {
        v55 = *((_QWORD *)a3 + 2);
        v56 = v54 + 8;
        *a3 = v56;
        v57 = *(_DWORD *)(v55 + v54);
        if ( (unsigned int)v56 <= 0x2F )
        {
          v58 = (_QWORD *)(v56 + v55);
          *a3 = v54 + 16;
          goto LABEL_54;
        }
        v58 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v58 + 1;
LABEL_54:
      if ( (*(_BYTE *)(dbg + 37LL) & 8) == 0 )
        return 0;
      v59 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 416LL))(v8, v57, *v58);
      if ( (unsigned int)(v59 + 1) > 1 )
        return v59;
      *(_QWORD *)(dbg + 32LL) &= ~0x80000000000uLL;
      return 0;
    case 34LL:
      if ( (a1[157] & 0x10) == 0 )
        return 0;
      v158 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v380 = *((_QWORD ***)a3 + 1);
        *((_QWORD *)a3 + 1) = v380 + 1;
        v161 = *v380;
      }
      else
      {
        v159 = *((_QWORD *)a3 + 2);
        v160 = v158 + 8;
        *a3 = v160;
        v161 = *(_QWORD **)(v159 + v158);
        if ( (unsigned int)v160 <= 0x2F )
        {
          v162 = v158 + 16;
          *a3 = v162;
          v163 = *(_QWORD *)(v159 + v160);
          if ( (unsigned int)v162 <= 0x2F )
          {
            v164 = v158 + 24;
            *a3 = v164;
            v165 = *(_DWORD *)(v159 + v162);
            if ( (unsigned int)v164 <= 0x2F )
            {
              *a3 = v158 + 32;
              v166 = *(_QWORD *)(v159 + v164);
              if ( v158 + 32 <= 0x2F )
              {
                v167 = v158 + 40;
                if ( (unsigned int)v167 <= 0x2F )
                {
                  *a3 = v158 + 48;
                  v168 = *(_QWORD *)(v159 + v167);
                  goto LABEL_147;
                }
                *a3 = v167;
LABEL_389:
                v384 = *((__int64 **)a3 + 1);
                *((_QWORD *)a3 + 1) = v384 + 1;
                v168 = *v384;
LABEL_147:
                v169 = *((__int64 **)a3 + 1);
                *((_QWORD *)a3 + 1) = v169 + 1;
                v170 = *v169;
                *((_QWORD *)a3 + 1) = v169 + 2;
                v171 = v169[1];
                *((_QWORD *)a3 + 1) = v169 + 3;
                v172 = v169[2];
                *((_QWORD *)a3 + 1) = v169 + 4;
                v173 = v169[3];
                *((_QWORD *)a3 + 1) = v169 + 5;
                *v161 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v8 + 424LL))(
                          v8,
                          v163,
                          v165,
                          (unsigned int)*(_QWORD *)(v166 + 56),
                          v168,
                          v170,
                          v171,
                          v172,
                          v173,
                          *((unsigned int *)v169 + 8));
                return 1;
              }
LABEL_388:
              *((_QWORD *)a3 + 1) += 8LL;
              goto LABEL_389;
            }
LABEL_387:
            v383 = *((__int64 **)a3 + 1);
            *((_QWORD *)a3 + 1) = v383 + 1;
            v166 = *v383;
            goto LABEL_388;
          }
LABEL_386:
          v382 = *((unsigned int **)a3 + 1);
          *((_QWORD *)a3 + 1) = v382 + 2;
          v165 = *v382;
          goto LABEL_387;
        }
      }
      v381 = *((__int64 **)a3 + 1);
      *((_QWORD *)a3 + 1) = v381 + 1;
      v163 = *v381;
      goto LABEL_386;
    case 35LL:
      if ( (a1[157] & 0x10) == 0 )
        return 0;
      v156 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v157 = *((unsigned int **)a3 + 1);
        *((_QWORD *)a3 + 1) = v157 + 2;
      }
      else
      {
        v157 = (unsigned int *)(*((_QWORD *)a3 + 2) + v156);
        *a3 = v156 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 432LL))(v8, *v157);
    case 36LL:
      v47 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v359 = *((_DWORD **)a3 + 1);
        v360 = (__int64 *)(v359 + 2);
        *((_QWORD *)a3 + 1) = v359 + 2;
        v50 = *v359;
      }
      else
      {
        v48 = *((_QWORD *)a3 + 2);
        v49 = v47 + 8;
        *a3 = v49;
        v50 = *(_DWORD *)(v48 + v47);
        if ( (unsigned int)v49 <= 0x2F )
        {
          v51 = v47 + 16;
          *a3 = v51;
          v52 = *(_QWORD *)(v48 + v49);
          if ( (unsigned int)v51 <= 0x2F )
          {
            v53 = (_QWORD *)(v51 + v48);
            *a3 = v47 + 24;
            return (*(int (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v8 + 360LL))(v8, v50, v52, *v53);
          }
          v53 = *((_QWORD **)a3 + 1);
LABEL_354:
          *((_QWORD *)a3 + 1) = v53 + 1;
          return (*(int (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v8 + 360LL))(v8, v50, v52, *v53);
        }
        v360 = *((__int64 **)a3 + 1);
      }
      v53 = v360 + 1;
      *((_QWORD *)a3 + 1) = v360 + 1;
      v52 = *v360;
      goto LABEL_354;
    case 37LL:
      v36 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v333 = *((_DWORD **)a3 + 1);
        v334 = (__int64 *)(v333 + 2);
        *((_QWORD *)a3 + 1) = v333 + 2;
        v39 = *v333;
      }
      else
      {
        v37 = *((_QWORD *)a3 + 2);
        v38 = v36 + 8;
        *a3 = v38;
        v39 = *(_DWORD *)(v37 + v36);
        if ( (unsigned int)v38 <= 0x2F )
        {
          v40 = v36 + 16;
          *a3 = v40;
          v41 = *(_QWORD *)(v37 + v38);
          if ( (unsigned int)v40 <= 0x2F )
          {
            v42 = v36 + 24;
            *a3 = v42;
            v43 = *(_QWORD *)(v37 + v40);
            if ( (unsigned int)v42 <= 0x2F )
            {
              v44 = v36 + 32;
              *a3 = v44;
              v45 = *(_QWORD *)(v37 + v42);
              if ( (unsigned int)v44 <= 0x2F )
              {
                v46 = (_QWORD *)(v44 + v37);
                *a3 = v36 + 40;
                return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v8 + 400LL))(
                         v8,
                         v39,
                         v41,
                         v43,
                         v45,
                         *v46);
              }
              v46 = *((_QWORD **)a3 + 1);
LABEL_316:
              *((_QWORD *)a3 + 1) = v46 + 1;
              return (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v8 + 400LL))(
                       v8,
                       v39,
                       v41,
                       v43,
                       v45,
                       *v46);
            }
            v336 = *((__int64 **)a3 + 1);
LABEL_315:
            v46 = v336 + 1;
            *((_QWORD *)a3 + 1) = v336 + 1;
            v45 = *v336;
            goto LABEL_316;
          }
          v335 = *((__int64 **)a3 + 1);
LABEL_314:
          v336 = v335 + 1;
          *((_QWORD *)a3 + 1) = v335 + 1;
          v43 = *v335;
          goto LABEL_315;
        }
LABEL_411:
        v334 = *((__int64 **)a3 + 1);
      }
      v335 = v334 + 1;
      *((_QWORD *)a3 + 1) = v334 + 1;
      v41 = *v334;
      goto LABEL_314;
    case 38LL:
      v215 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v313 = *((unsigned int **)a3 + 1);
        v314 = v313 + 2;
        *((_QWORD *)a3 + 1) = v313 + 2;
        v218 = *v313;
      }
      else
      {
        v216 = *((_QWORD *)a3 + 2);
        v217 = v215 + 8;
        *a3 = v217;
        v218 = *(_DWORD *)(v216 + v215);
        if ( (unsigned int)v217 <= 0x2F )
        {
          v219 = v215 + 16;
          *a3 = v219;
          v220 = *(_DWORD *)(v216 + v217) != 0;
          if ( (unsigned int)v219 <= 0x2F )
          {
            v221 = (unsigned int *)(v219 + v216);
            *a3 = v215 + 24;
            goto LABEL_183;
          }
          v221 = *((unsigned int **)a3 + 1);
LABEL_286:
          *((_QWORD *)a3 + 1) = v221 + 2;
LABEL_183:
          v222 = *(__int64 (**)())(*(_QWORD *)v8 + 520LL);
          if ( v222 != sub_A7D0 )
            return ((unsigned __int8 (__fastcall *)(__int64, _QWORD, bool, _QWORD))v222)(v8, v218, v220, *v221);
          return 0;
        }
        v314 = *((_DWORD **)a3 + 1);
      }
      v221 = v314 + 2;
      *((_QWORD *)a3 + 1) = v314 + 2;
      v220 = *v314 != 0;
      goto LABEL_286;
    case 39LL:
      v209 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v343 = *((unsigned int **)a3 + 1);
        v213 = v343 + 2;
        *((_QWORD *)a3 + 1) = v343 + 2;
        v212 = *v343;
      }
      else
      {
        v210 = *((_QWORD *)a3 + 2);
        v211 = v209 + 8;
        *a3 = v211;
        v212 = *(_DWORD *)(v210 + v209);
        if ( (unsigned int)v211 <= 0x2F )
        {
          v213 = (unsigned int *)(v211 + v210);
          *a3 = v209 + 16;
          goto LABEL_177;
        }
        v213 = *((unsigned int **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v213 + 2;
LABEL_177:
      v214 = *(__int64 (**)())(*(_QWORD *)v8 + 528LL);
      if ( v214 == sub_A7E0 )
        return 0;
      return ((unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD))v214)(v8, v212, *v213);
    case 40LL:
      v251 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v252 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v252 + 1;
      }
      else
      {
        v252 = (_QWORD *)(*((_QWORD *)a3 + 2) + v251);
        *a3 = v251 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 536LL))(v8, *v252);
    case 41LL:
      v105 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v352 = *((__int64 **)a3 + 1);
        v109 = v352 + 1;
        *((_QWORD *)a3 + 1) = v352 + 1;
        v108 = *v352;
      }
      else
      {
        v106 = *((_QWORD *)a3 + 2);
        v107 = v105 + 8;
        *a3 = v107;
        v108 = *(_QWORD *)(v106 + v105);
        if ( (unsigned int)v107 <= 0x2F )
        {
          v109 = (_QWORD *)(v107 + v106);
          *a3 = v105 + 16;
          goto LABEL_93;
        }
        v109 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v109 + 1;
LABEL_93:
      v110 = *(__int64 (**)())(*(_QWORD *)v8 + 560LL);
      if ( v110 == sub_A800 )
        return 0;
      return ((unsigned __int8 (__fastcall *)(__int64, __int64, _QWORD))v110)(v8, v108, *v109);
    case 42LL:
      v23 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v322 = *((__int64 **)a3 + 1);
        v323 = v322 + 1;
        *((_QWORD *)a3 + 1) = v322 + 1;
        v26 = *v322;
      }
      else
      {
        v24 = *((_QWORD *)a3 + 2);
        v25 = v23 + 8;
        *a3 = v25;
        v26 = *(_QWORD *)(v24 + v23);
        if ( (unsigned int)v25 <= 0x2F )
        {
          v27 = v23 + 16;
          *a3 = v27;
          v28 = *(_QWORD *)(v24 + v25);
          if ( (unsigned int)v27 <= 0x2F )
          {
            v29 = v23 + 24;
            *a3 = v29;
            v30 = *(_QWORD *)(v24 + v27);
            if ( (unsigned int)v29 <= 0x2F )
            {
              v31 = v23 + 32;
              *a3 = v31;
              v32 = *(_QWORD *)(v24 + v29);
              if ( (unsigned int)v31 <= 0x2F )
              {
                v33 = v23 + 40;
                *a3 = v33;
                v34 = *(unsigned int *)(v24 + v31);
                if ( (unsigned int)v33 <= 0x2F )
                {
                  v35 = (_QWORD *)(v33 + v24);
                  *a3 = v23 + 48;
                  goto LABEL_36;
                }
                v35 = *((_QWORD **)a3 + 1);
LABEL_303:
                *((_QWORD *)a3 + 1) = v35 + 1;
LABEL_36:
                if ( v32 )
                {
                  v3 = (*(int (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v8 + 576LL))(
                         v8,
                         v26,
                         v28,
                         v30,
                         v32,
                         v34,
                         *v35);
                  if ( (*(_DWORD *)debug & 0x10000) != 0 )
                    sub_B4F0();
                  return v3;
                }
                return 0;
              }
              v326 = *((unsigned int **)a3 + 1);
LABEL_302:
              v35 = v326 + 2;
              *((_QWORD *)a3 + 1) = v326 + 2;
              v34 = *v326;
              goto LABEL_303;
            }
            v325 = *((_QWORD **)a3 + 1);
LABEL_301:
            v326 = (unsigned int *)(v325 + 1);
            *((_QWORD *)a3 + 1) = v325 + 1;
            v32 = *v325;
            goto LABEL_302;
          }
          v324 = *((__int64 **)a3 + 1);
LABEL_300:
          v325 = v324 + 1;
          *((_QWORD *)a3 + 1) = v324 + 1;
          v30 = *v324;
          goto LABEL_301;
        }
        v323 = *((__int64 **)a3 + 1);
      }
      v324 = v323 + 1;
      *((_QWORD *)a3 + 1) = v323 + 1;
      v28 = *v323;
      goto LABEL_300;
    case 43LL:
      if ( !a1[208] )
        return 0;
      if ( (unsigned int)*a3 > 0x2F )
        *((_QWORD *)a3 + 1) += 8LL;
      else
        *a3 += 8;
      v22 = (*(__int64 (**)(void))(*(_QWORD *)v8 + 584LL))();
      if ( v22 >= 0 )
      {
        serialize_dynamic_register_set();
        deserialize_dynamic_register_set();
        return 1;
      }
      return v22;
    case 44LL:
      v9 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v327 = *((_QWORD ***)a3 + 1);
        v328 = (_BYTE **)(v327 + 1);
        *((_QWORD *)a3 + 1) = v327 + 1;
        v12 = *v327;
LABEL_305:
        v329 = (unsigned int *)(v328 + 1);
        *((_QWORD *)a3 + 1) = v328 + 1;
        v14 = *v328;
LABEL_306:
        v330 = v329 + 2;
        *((_QWORD *)a3 + 1) = v329 + 2;
        v386 = *v329;
LABEL_307:
        v18 = (__int64 *)(v330 + 2);
        *((_QWORD *)a3 + 1) = v330 + 2;
        v17 = *v330;
        goto LABEL_308;
      }
      v10 = *((_QWORD *)a3 + 2);
      v11 = v9 + 8;
      *a3 = v11;
      v12 = *(__int64 **)(v10 + v9);
      if ( (unsigned int)v11 > 0x2F )
      {
        v328 = *((_BYTE ***)a3 + 1);
        goto LABEL_305;
      }
      v13 = v9 + 16;
      *a3 = v13;
      v14 = *(_BYTE **)(v10 + v11);
      if ( (unsigned int)v13 > 0x2F )
      {
        v329 = *((unsigned int **)a3 + 1);
        goto LABEL_306;
      }
      v15 = v9 + 24;
      *a3 = v15;
      v386 = *(_DWORD *)(v10 + v13);
      if ( (unsigned int)v15 > 0x2F )
      {
        v330 = *((_DWORD **)a3 + 1);
        goto LABEL_307;
      }
      v16 = v9 + 32;
      *a3 = v16;
      v17 = *(_DWORD *)(v10 + v15);
      if ( (unsigned int)v16 <= 0x2F )
      {
        v18 = (__int64 *)(v16 + v10);
        *a3 = v9 + 40;
        goto LABEL_13;
      }
      v18 = *((__int64 **)a3 + 1);
LABEL_308:
      *((_QWORD *)a3 + 1) = v18 + 1;
LABEL_13:
      v19 = *v18;
      if ( (*(_DWORD *)debug & 0x10000) != 0 )
        sub_B4F0();
      v20 = *(__int64 (**)())(*(_QWORD *)a1 + 64LL);
      v21 = 0;
      if ( v20 != sub_A6F0 )
        v21 = ((__int64 (__fastcall *)(_BYTE *, _BYTE *, _QWORD, _QWORD, __int64))v20)(a1, v14, v386, v17, v19);
      if ( !v14 || *v14 != 32 || (v3 = v21 != 0, v14[1]) )
      {
        if ( v12 )
          *v12 = v21;
        sub_CB00((__int64 *)a1, a1[208]);
        return 1;
      }
      return v3;
    default:
      return 0;
  }
}

