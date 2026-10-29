__int64 __fastcall sub_147F0(_BYTE *a1, __int64 a2, int *a3, double a4, double a5, double a6)
{
  __int64 v6; // r15
  int v7; // ecx
  __int64 (*v10)(void); // rax
  _BYTE *v11; // rdi
  __int64 (*v12)(); // rax
  unsigned int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r13
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rsi
  const char *v20; // r12
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // rsi
  __int64 v24; // r9
  _QWORD *v25; // rax
  unsigned int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // r8
  _QWORD *v30; // rax
  __int64 (*v31)(); // rcx
  unsigned int v32; // eax
  _QWORD *v33; // rcx
  unsigned int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // rsi
  unsigned int v37; // r8d
  unsigned int *v38; // rax
  __int64 (*v39)(); // rcx
  unsigned int v40; // ecx
  __int64 v41; // rax
  __int64 v42; // r8
  unsigned int v43; // r10d
  __int64 v44; // rsi
  __int64 v45; // r11
  __int64 v46; // r8
  __int64 v47; // rbx
  __int64 v48; // rsi
  __int64 v49; // r8
  _QWORD *v50; // rax
  __int64 (*v51)(); // r14
  unsigned int v52; // ecx
  __int64 v53; // rax
  __int64 v54; // r8
  unsigned int v55; // r9d
  __int64 v56; // rsi
  __int64 v57; // r8
  _QWORD *v58; // rax
  unsigned int v59; // ecx
  __int64 v60; // rax
  __int64 v61; // r8
  unsigned int v62; // r10d
  __int64 v63; // rsi
  bool v64; // r9
  unsigned int *v65; // rax
  __int64 (*v66)(); // r8
  unsigned int v67; // ecx
  unsigned int *v68; // rax
  unsigned int v69; // ecx
  __int64 v70; // rax
  __int64 v71; // rsi
  unsigned int v72; // r8d
  _QWORD *v73; // rax
  int v74; // ebx
  unsigned int v75; // eax
  _QWORD **v76; // rcx
  _QWORD *v77; // rbx
  unsigned int v78; // ecx
  __int64 v79; // rax
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rsi
  __int64 v83; // r10
  _DWORD *v84; // rax
  __int64 (*v85)(); // r8
  unsigned int v86; // ecx
  __int64 v87; // rax
  __int64 v88; // rsi
  __int64 *v89; // rbx
  __int64 v90; // r9
  __int64 v91; // rsi
  __int64 v92; // r8
  __int64 v93; // r9
  unsigned int *v94; // rax
  __int64 (__fastcall *v95)(__int64, __int64); // r8
  unsigned int v96; // ecx
  __int64 v97; // rax
  __int64 v98; // rsi
  unsigned int v99; // r9d
  __int64 v100; // r8
  __int64 v101; // r10
  __int64 v102; // rsi
  __int64 v103; // rbx
  _QWORD *v104; // rax
  __int64 (*v105)(); // r11
  unsigned int v106; // eax
  unsigned int *v107; // rcx
  void (*v108)(); // rax
  unsigned int v109; // eax
  _QWORD *v110; // rcx
  unsigned int v111; // eax
  __int64 v112; // rsi
  __int64 v113; // rcx
  _QWORD *v114; // rbx
  __int64 v115; // r8
  __int64 v116; // r10
  __int64 v117; // rcx
  unsigned int v118; // r11d
  __int64 v119; // r14
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 *v122; // rax
  __int64 v123; // r9
  __int64 v124; // rcx
  __int64 v125; // rsi
  __int64 v126; // r12
  unsigned int v127; // ecx
  __int64 v128; // rax
  __int64 v129; // rsi
  unsigned int v130; // r9d
  __int64 v131; // r8
  unsigned int v132; // r10d
  __int64 v133; // rsi
  __int64 v134; // rbx
  _QWORD *v135; // rax
  unsigned int v136; // ecx
  __int64 v137; // rax
  __int64 v138; // rsi
  unsigned int v139; // r9d
  __int64 v140; // r8
  unsigned int v141; // r10d
  __int64 v142; // rsi
  __int64 v143; // rbx
  _QWORD *v144; // rax
  unsigned int v145; // eax
  unsigned int *v146; // rcx
  unsigned int v147; // ecx
  __int64 v148; // rax
  __int64 v149; // rsi
  bool v150; // bl
  _QWORD *v151; // rax
  unsigned int v152; // ecx
  __int64 v153; // rax
  __int64 v154; // rsi
  __int64 v155; // r8
  unsigned int *v156; // rax
  unsigned int v157; // eax
  _DWORD *v158; // rcx
  __int64 (*v159)(); // rax
  unsigned int v160; // ecx
  __int64 v161; // rax
  __int64 v162; // rsi
  __int64 v163; // r8
  __int64 v164; // rsi
  unsigned int v165; // eax
  __int64 v166; // rcx
  __int64 v167; // rsi
  __int64 v168; // r11
  __int64 v169; // r8
  __int64 v170; // r14
  __int64 v171; // rsi
  __int64 v172; // r8
  __int64 v173; // r10
  __int64 v174; // r9
  __int64 v175; // rsi
  __int64 v176; // r10
  __int64 *v177; // rax
  __int64 v178; // rsi
  __int64 v179; // r12
  int v180; // eax
  unsigned int v181; // ecx
  __int64 v182; // rax
  __int64 v183; // rsi
  __int64 v184; // r8
  _QWORD *v185; // rax
  unsigned int v186; // ecx
  __int64 v187; // rax
  __int64 v188; // r8
  __int64 *v189; // rbx
  __int64 v190; // rsi
  __int64 v191; // r9
  __int64 v192; // r8
  __int64 v193; // r10
  __int64 v194; // rsi
  __int64 v195; // r14
  _QWORD *v196; // rax
  __int64 v197; // rax
  __int64 v198; // rdx
  unsigned int v199; // ecx
  __int64 v200; // rax
  __int64 v201; // r8
  __int64 v202; // rsi
  __int64 v203; // r9
  __int64 v204; // r8
  __int64 v205; // r10
  __int64 v206; // rsi
  __int64 v207; // r14
  _QWORD *v208; // rax
  unsigned int v209; // eax
  _QWORD *v210; // rcx
  unsigned int v211; // ecx
  __int64 v212; // rax
  __int64 v213; // r8
  _DWORD *v214; // rbx
  __int64 v215; // rsi
  __int64 v216; // r8
  unsigned int *v217; // rax
  unsigned int v218; // eax
  _QWORD *v219; // rcx
  unsigned int v220; // ecx
  __int64 v221; // rax
  __int64 v222; // rsi
  unsigned int v223; // r8d
  unsigned int *v224; // rax
  unsigned int v225; // ecx
  __int64 v226; // rax
  __int64 v227; // rdi
  __int64 *v228; // r12
  __int64 v229; // rsi
  __int64 v230; // r13
  __int64 v231; // rdi
  __int64 v232; // rsi
  unsigned int v233; // r14d
  __int64 *v234; // rax
  __int64 v235; // r15
  __int64 v236; // rax
  const char *v237; // rsi
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
  unsigned int v248; // ecx
  __int64 v249; // rax
  __int64 v250; // rdi
  _DWORD *v251; // r10
  __int64 v252; // rsi
  __int64 v253; // r11
  __int64 v254; // rdi
  unsigned int v255; // r14d
  int v256; // r8d
  unsigned int v257; // ecx
  __int64 v258; // rax
  __int64 v259; // rsi
  _DWORD *v260; // rbx
  __int64 v261; // r8
  int v262; // r9d
  __int64 v263; // rsi
  __int64 v264; // r8
  unsigned int *v265; // rax
  __int64 v266; // rcx
  unsigned int v267; // ecx
  __int64 v268; // rax
  __int64 v269; // rsi
  __int64 v270; // r9
  __int64 v271; // r8
  __int64 v272; // r10
  __int64 v273; // rsi
  unsigned int v274; // ebx
  _QWORD *v275; // rax
  unsigned int v276; // ecx
  __int64 v277; // rax
  __int64 v278; // rsi
  __int64 v279; // r8
  _QWORD *v280; // rax
  unsigned int v281; // ecx
  __int64 v282; // rax
  __int64 v283; // rsi
  __int64 v284; // r9
  __int64 v285; // r8
  unsigned int v286; // r10d
  __int64 v287; // rsi
  unsigned int v288; // ebx
  _QWORD *v289; // rax
  unsigned int v290; // ecx
  __int64 v291; // rax
  __int64 v292; // rsi
  unsigned int v293; // r9d
  __int64 v294; // r8
  unsigned int v295; // r10d
  __int64 v296; // rsi
  unsigned int v297; // r14d
  _QWORD *v298; // rax
  int v299; // eax
  unsigned int v300; // eax
  _QWORD *v301; // rcx
  unsigned int v302; // eax
  unsigned int *v303; // rcx
  __int64 v304; // rax
  unsigned int *v305; // rcx
  unsigned int *v306; // rax
  _DWORD *v307; // rcx
  __int64 *v308; // rcx
  __int64 *v309; // rcx
  __int64 *v310; // rax
  __int64 *v311; // rcx
  _QWORD *v312; // rax
  unsigned int *v313; // rcx
  _QWORD *v314; // rax
  unsigned int *v315; // rcx
  _QWORD *v316; // rcx
  unsigned int *v317; // rcx
  _DWORD *v318; // rax
  __int64 *v319; // rcx
  _DWORD *v320; // rcx
  _QWORD **v321; // rcx
  __int64 *v322; // rax
  _QWORD *v323; // rcx
  _DWORD *v324; // rcx
  _DWORD *v325; // rcx
  __int64 *v326; // rax
  __int64 *v327; // rcx
  unsigned int *v328; // rcx
  _DWORD *v329; // rax
  __int64 *v330; // rcx
  _QWORD **v331; // rax
  _QWORD *v332; // rcx
  unsigned int *v333; // rax
  _DWORD *v334; // rcx
  _QWORD **v335; // rax
  __int64 *v336; // rcx
  __int64 *v337; // rax
  __int64 *v338; // rcx
  _DWORD **v339; // rax
  _QWORD *v340; // rcx
  const char **v341; // rcx
  unsigned int *v342; // rax
  __int64 *v343; // rcx
  _DWORD **v344; // rax
  __int64 *v345; // rcx
  unsigned int *v346; // rax
  int *v347; // rcx
  int *v348; // rax
  __int64 *v349; // rcx
  _QWORD *v350; // rax
  _DWORD *v351; // rcx
  _DWORD *v352; // rax
  __int64 *v353; // rcx
  __int64 *v354; // rax
  __int64 *v355; // rcx
  __int64 *v356; // rcx
  unsigned int *v357; // rcx
  _DWORD *v358; // rax
  __int64 *v359; // rcx
  __int64 *v360; // rcx
  _QWORD *v361; // rax
  const char **v362; // rcx
  _QWORD *v363; // rax
  unsigned int *v364; // rcx
  unsigned int *v365; // rax
  _DWORD *v366; // rcx
  __int64 *v367; // rax
  _QWORD *v368; // rcx
  _DWORD **v369; // rcx
  _DWORD *v370; // rax
  _QWORD *v371; // rcx
  _QWORD **v372; // rax
  __int64 *v373; // rcx
  __int64 *v374; // rax
  __int64 *v375; // rcx
  _QWORD *v376; // rcx
  unsigned int *v377; // rax
  _DWORD *v378; // rcx
  _DWORD *v379; // rcx
  __int64 *v380; // rax
  __int64 *v381; // rcx
  unsigned int *v382; // rcx
  _QWORD **v383; // rax
  __int64 *v384; // rax
  unsigned int *v385; // rax
  __int64 *v386; // rax
  __int64 *v387; // rax
  int v388; // eax
  int *v389; // [rsp+10h] [rbp-70h]
  unsigned int v390; // [rsp+18h] [rbp-68h]
  const char *v391; // [rsp+18h] [rbp-68h]
  const char *v392; // [rsp+30h] [rbp-50h] BYREF
  __int128 v393; // [rsp+38h] [rbp-48h]
  unsigned __int64 v394; // [rsp+48h] [rbp-38h]

  v6 = 0;
  v7 = *((_DWORD *)a1 + 34);
  v394 = __readfsqword(0x28u);
  if ( *(_DWORD *)(dbg + 16LL) != v7 || *(_QWORD *)(dbg + 32LL) != *((_QWORD *)a1 + 19) )
    return v6;
  v10 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
  if ( (char *)v10 == (char *)sub_F0E0 )
  {
    v11 = a1 + 224;
  }
  else
  {
    v389 = a3;
    v304 = v10();
    a3 = v389;
    v11 = (_BYTE *)v304;
  }
  switch ( a2 )
  {
    case 0LL:
      v238 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v341 = *((const char ***)a3 + 1);
        v342 = (unsigned int *)(v341 + 1);
        *((_QWORD *)a3 + 1) = v341 + 1;
        v391 = *v341;
      }
      else
      {
        v239 = *((_QWORD *)a3 + 2);
        v240 = v238 + 8;
        *a3 = v240;
        v391 = *(const char **)(v239 + v238);
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
              goto LABEL_213;
            }
            while ( 1 )
            {
              v245 = *((__int64 **)a3 + 1);
LABEL_319:
              *((_QWORD *)a3 + 1) = v245 + 1;
LABEL_213:
              v246 = *v245;
              if ( *v245 )
                break;
              if ( under_debugger )
                BUG();
              interr();
            }
            if ( (*(_DWORD *)debug & 0x10000) != 0 )
            {
              v392 = nullptr;
              v393 = 0;
              get_dbctx_id();
              sub_13B20((__int64 *)&v392);
              v247 = nptr;
              if ( (_QWORD)v393 )
                v247 = v392;
              sub_111A0((__int64)"%s: debugger_t::ev_init_debugger (%s,%d,)\n", v247, v391, v242);
              if ( v392 )
              {
                *(_QWORD *)&v393 = 0;
                qfree();
              }
            }
            return (int)sub_141C0((__int64)a1, (__int64)v391, v242, v244, v246);
          }
          v343 = *((__int64 **)a3 + 1);
LABEL_318:
          v245 = v343 + 1;
          *((_QWORD *)a3 + 1) = v343 + 1;
          v244 = *v343;
          goto LABEL_319;
        }
        v342 = *((unsigned int **)a3 + 1);
      }
      v343 = (__int64 *)(v342 + 2);
      *((_QWORD *)a3 + 1) = v342 + 2;
      v242 = *v342;
      goto LABEL_318;
    case 1LL:
      if ( (*(_DWORD *)debug & 0x10000) != 0 )
      {
        v392 = nullptr;
        v393 = 0;
        get_dbctx_id();
        sub_13B20((__int64 *)&v392);
        v237 = nptr;
        if ( (_QWORD)v393 )
          v237 = v392;
        sub_111A0((__int64)"%s: debugger_t::ev_term_debugger\n", v237);
        if ( v392 )
        {
          *(_QWORD *)&v393 = 0;
          qfree();
        }
      }
      return (int)sub_139C0(a1);
    case 2LL:
      v181 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v308 = *((__int64 **)a3 + 1);
        v185 = v308 + 1;
        *((_QWORD *)a3 + 1) = v308 + 1;
        v184 = *v308;
      }
      else
      {
        v182 = *((_QWORD *)a3 + 2);
        v183 = v181 + 8;
        *a3 = v183;
        v184 = *(_QWORD *)(v182 + v181);
        if ( (unsigned int)v183 <= 0x2F )
        {
          v185 = (_QWORD *)(v183 + v182);
          *a3 = v181 + 16;
          return (*(int (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v11 + 72LL))(v11, v184, *v185);
        }
        v185 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v185 + 1;
      return (*(int (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v11 + 72LL))(v11, v184, *v185);
    case 3LL:
      v165 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v310 = *((__int64 **)a3 + 1);
        v311 = v310 + 1;
        *((_QWORD *)a3 + 1) = v310 + 1;
        v168 = *v310;
      }
      else
      {
        v166 = *((_QWORD *)a3 + 2);
        v167 = v165 + 8;
        *a3 = v167;
        v168 = *(_QWORD *)(v166 + v165);
        if ( (unsigned int)v167 <= 0x2F )
        {
          v169 = v165 + 16;
          *a3 = v169;
          v170 = *(_QWORD *)(v166 + v167);
          if ( (unsigned int)v169 <= 0x2F )
          {
            v171 = v165 + 24;
            *a3 = v171;
            v172 = *(_QWORD *)(v166 + v169);
            if ( (unsigned int)v171 <= 0x2F )
            {
              v173 = v165 + 32;
              *a3 = v173;
              v174 = *(unsigned int *)(v166 + v171);
              if ( (unsigned int)v173 <= 0x2F )
              {
                v175 = v165 + 40;
                *a3 = v175;
                v176 = *(_QWORD *)(v166 + v173);
                if ( (unsigned int)v175 <= 0x2F )
                {
                  *a3 = v165 + 48;
                  v177 = *((__int64 **)a3 + 1);
                  v178 = *(unsigned int *)(v166 + v175);
                  goto LABEL_147;
                }
                v315 = *((unsigned int **)a3 + 1);
LABEL_278:
                v177 = (__int64 *)(v315 + 2);
                *((_QWORD *)a3 + 1) = v315 + 2;
                v178 = *v315;
LABEL_147:
                *((_QWORD *)a3 + 1) = v177 + 1;
                v179 = *v177;
                *((_QWORD *)a3 + 1) = v177 + 2;
                v180 = (*(__int64 (__fastcall **)(_BYTE *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v11 + 128LL))(
                         v11,
                         v168,
                         v170,
                         v177[1],
                         v172,
                         v174,
                         v176,
                         v178,
                         v179);
                v6 = v180;
                if ( v180 > 0 )
                  goto LABEL_148;
                return v6;
              }
              v314 = *((_QWORD **)a3 + 1);
LABEL_277:
              v315 = (unsigned int *)(v314 + 1);
              *((_QWORD *)a3 + 1) = v314 + 1;
              v176 = *v314;
              goto LABEL_278;
            }
            v313 = *((unsigned int **)a3 + 1);
LABEL_276:
            v314 = v313 + 2;
            *((_QWORD *)a3 + 1) = v313 + 2;
            v174 = *v313;
            goto LABEL_277;
          }
          v312 = *((_QWORD **)a3 + 1);
LABEL_275:
          v313 = (unsigned int *)(v312 + 1);
          *((_QWORD *)a3 + 1) = v312 + 1;
          v172 = *v312;
          goto LABEL_276;
        }
        v311 = *((__int64 **)a3 + 1);
      }
      v312 = v311 + 1;
      *((_QWORD *)a3 + 1) = v311 + 1;
      v170 = *v311;
      goto LABEL_275;
    case 4LL:
      v290 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v305 = *((unsigned int **)a3 + 1);
        v306 = v305 + 2;
        *((_QWORD *)a3 + 1) = v305 + 2;
        v293 = *v305;
      }
      else
      {
        v291 = *((_QWORD *)a3 + 2);
        v292 = v290 + 8;
        *a3 = v292;
        v293 = *(_DWORD *)(v291 + v290);
        if ( (unsigned int)v292 <= 0x2F )
        {
          v294 = v290 + 16;
          *a3 = v294;
          v295 = *(_DWORD *)(v291 + v292);
          if ( (unsigned int)v294 <= 0x2F )
          {
            v296 = v290 + 24;
            *a3 = v296;
            v297 = *(_DWORD *)(v291 + v294);
            if ( (unsigned int)v296 <= 0x2F )
            {
              v298 = (_QWORD *)(v296 + v291);
              *a3 = v290 + 32;
              goto LABEL_256;
            }
            v298 = *((_QWORD **)a3 + 1);
LABEL_268:
            *((_QWORD *)a3 + 1) = v298 + 1;
LABEL_256:
            v299 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v11 + 144LL))(
                     v11,
                     v293,
                     v295,
                     v297,
                     *v298);
            v6 = v299;
            if ( v299 > 0 )
LABEL_148:
              sub_13E10((__int64 *)a1, 1u);
            return v6;
          }
          v307 = *((_DWORD **)a3 + 1);
LABEL_267:
          v298 = v307 + 2;
          *((_QWORD *)a3 + 1) = v307 + 2;
          v297 = *v307;
          goto LABEL_268;
        }
        v306 = *((unsigned int **)a3 + 1);
      }
      v307 = v306 + 2;
      *((_QWORD *)a3 + 1) = v306 + 2;
      v295 = *v306;
      goto LABEL_267;
    case 5LL:
      return (*(int (__fastcall **)(_BYTE *))(*(_QWORD *)v11 + 120LL))(v11);
    case 6LL:
      v300 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v301 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v301 + 1;
      }
      else
      {
        v301 = (_QWORD *)(*((_QWORD *)a3 + 2) + v300);
        *a3 = v300 + 8;
      }
      (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v11 + 552LL))(v11, *v301);
      return 1;
    case 7LL:
      if ( (unsigned int)*a3 > 0x2F )
        *((_QWORD *)a3 + 1) += 8LL;
      else
        *a3 += 8;
      return 1;
    case 8LL:
      v218 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v219 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v219 + 1;
      }
      else
      {
        v219 = (_QWORD *)(*((_QWORD *)a3 + 2) + v218);
        *a3 = v218 + 8;
      }
      return (*(int (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v11 + 152LL))(v11, *v219);
    case 9LL:
      v209 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v210 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v210 + 1;
      }
      else
      {
        v210 = (_QWORD *)(*((_QWORD *)a3 + 2) + v209);
        *a3 = v209 + 8;
      }
      return (*(int (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v11 + 160LL))(v11, *v210);
    case 10LL:
      v211 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v339 = *((_DWORD ***)a3 + 1);
        v340 = v339 + 1;
        *((_QWORD *)a3 + 1) = v339 + 1;
        v214 = *v339;
      }
      else
      {
        v212 = *((_QWORD *)a3 + 2);
        v213 = v211 + 8;
        *a3 = v213;
        v214 = *(_DWORD **)(v212 + v211);
        if ( (unsigned int)v213 <= 0x2F )
        {
          v215 = v211 + 16;
          *a3 = v215;
          v216 = *(_QWORD *)(v212 + v213);
          if ( (unsigned int)v215 <= 0x2F )
          {
            v217 = (unsigned int *)(v215 + v212);
            *a3 = v211 + 24;
            goto LABEL_180;
          }
          v217 = *((unsigned int **)a3 + 1);
LABEL_315:
          *((_QWORD *)a3 + 1) = v217 + 2;
LABEL_180:
          *v214 = (*(__int64 (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v11 + 136LL))(v11, v216, *v217);
          return 1;
        }
        v340 = *((_QWORD **)a3 + 1);
      }
      v217 = (unsigned int *)(v340 + 1);
      *((_QWORD *)a3 + 1) = v340 + 1;
      v216 = *v340;
      goto LABEL_315;
    case 11LL:
      v109 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v110 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v110 + 1;
      }
      else
      {
        v110 = (_QWORD *)(*((_QWORD *)a3 + 2) + v109);
        *a3 = v109 + 8;
      }
      return (*(int (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v11 + 168LL))(v11, *v110);
    case 12LL:
      v157 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v158 = *((_DWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v158 + 2;
      }
      else
      {
        v158 = (_DWORD *)(*((_QWORD *)a3 + 2) + v157);
        *a3 = v157 + 8;
      }
      v159 = *(__int64 (**)())(*(_QWORD *)v11 + 176LL);
      if ( v159 == sub_F020 )
        return 0;
      return ((int (__fastcall *)(_BYTE *, bool))v159)(v11, *v158 != 0);
    case 13LL:
      v152 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v316 = *((_QWORD **)a3 + 1);
        v156 = (unsigned int *)(v316 + 1);
        *((_QWORD *)a3 + 1) = v316 + 1;
        v155 = *v316;
      }
      else
      {
        v153 = *((_QWORD *)a3 + 2);
        v154 = v152 + 8;
        *a3 = v154;
        v155 = *(_QWORD *)(v153 + v152);
        if ( (unsigned int)v154 <= 0x2F )
        {
          v156 = (unsigned int *)(v154 + v153);
          *a3 = v152 + 16;
          goto LABEL_128;
        }
        v156 = *((unsigned int **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v156 + 2;
LABEL_128:
      (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v11 + 184LL))(v11, v155, *v156);
      return 1;
    case 14LL:
      v147 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v320 = *((_DWORD **)a3 + 1);
        v151 = v320 + 2;
        *((_QWORD *)a3 + 1) = v320 + 2;
        v150 = *v320 != 0;
      }
      else
      {
        v148 = *((_QWORD *)a3 + 2);
        v149 = v147 + 8;
        *a3 = v149;
        v150 = *(_DWORD *)(v148 + v147) != 0;
        if ( (unsigned int)v149 <= 0x2F )
        {
          v151 = (_QWORD *)(v149 + v148);
          *a3 = v147 + 16;
          goto LABEL_123;
        }
        v151 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v151 + 1;
LABEL_123:
      (*(void (__fastcall **)(_BYTE *, _QWORD, bool, _QWORD))(*(_QWORD *)v11 + 192LL))(v11, 0, v150, *v151);
      if ( v150 )
        sub_58E10(v11);
      return 1;
    case 15LL:
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
      return (*(int (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v11 + 200LL))(v11, *v146);
    case 16LL:
      v302 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v303 = *((unsigned int **)a3 + 1);
        *((_QWORD *)a3 + 1) = v303 + 2;
      }
      else
      {
        v303 = (unsigned int *)(*((_QWORD *)a3 + 2) + v302);
        *a3 = v302 + 8;
      }
      return (*(int (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v11 + 208LL))(v11, *v303);
    case 17LL:
      v220 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v382 = *((unsigned int **)a3 + 1);
        v224 = v382 + 2;
        *((_QWORD *)a3 + 1) = v382 + 2;
        v223 = *v382;
      }
      else
      {
        v221 = *((_QWORD *)a3 + 2);
        v222 = v220 + 8;
        *a3 = v222;
        v223 = *(_DWORD *)(v221 + v220);
        if ( (unsigned int)v222 <= 0x2F )
        {
          v224 = (unsigned int *)(v222 + v221);
          *a3 = v220 + 16;
          return (*(int (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)v11 + 216LL))(v11, v223, *v224);
        }
        v224 = *((unsigned int **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v224 + 2;
      return (*(int (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)v11 + 216LL))(v11, v223, *v224);
    case 18LL:
      v136 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v328 = *((unsigned int **)a3 + 1);
        v329 = v328 + 2;
        *((_QWORD *)a3 + 1) = v328 + 2;
        v139 = *v328;
      }
      else
      {
        v137 = *((_QWORD *)a3 + 2);
        v138 = v136 + 8;
        *a3 = v138;
        v139 = *(_DWORD *)(v137 + v136);
        if ( (unsigned int)v138 <= 0x2F )
        {
          v140 = v136 + 16;
          *a3 = v140;
          v141 = *(_DWORD *)(v137 + v138);
          if ( (unsigned int)v140 <= 0x2F )
          {
            v142 = v136 + 24;
            *a3 = v142;
            v143 = *(_QWORD *)(v137 + v140);
            if ( (unsigned int)v142 <= 0x2F )
            {
              v144 = (_QWORD *)(v142 + v137);
              *a3 = v136 + 32;
              return (*(int (__fastcall **)(_BYTE *, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 224LL))(
                       v11,
                       v139,
                       v141,
                       v143,
                       *v144);
            }
            v144 = *((_QWORD **)a3 + 1);
LABEL_301:
            *((_QWORD *)a3 + 1) = v144 + 1;
            return (*(int (__fastcall **)(_BYTE *, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 224LL))(
                     v11,
                     v139,
                     v141,
                     v143,
                     *v144);
          }
          v330 = *((__int64 **)a3 + 1);
LABEL_300:
          v144 = v330 + 1;
          *((_QWORD *)a3 + 1) = v330 + 1;
          v143 = *v330;
          goto LABEL_301;
        }
        v329 = *((_DWORD **)a3 + 1);
      }
      v330 = (__int64 *)(v329 + 2);
      *((_QWORD *)a3 + 1) = v329 + 2;
      v141 = *v329;
      goto LABEL_300;
    case 19LL:
      v127 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v317 = *((unsigned int **)a3 + 1);
        v318 = v317 + 2;
        *((_QWORD *)a3 + 1) = v317 + 2;
        v130 = *v317;
      }
      else
      {
        v128 = *((_QWORD *)a3 + 2);
        v129 = v127 + 8;
        *a3 = v129;
        v130 = *(_DWORD *)(v128 + v127);
        if ( (unsigned int)v129 <= 0x2F )
        {
          v131 = v127 + 16;
          *a3 = v131;
          v132 = *(_DWORD *)(v128 + v129);
          if ( (unsigned int)v131 <= 0x2F )
          {
            v133 = v127 + 24;
            *a3 = v133;
            v134 = *(_QWORD *)(v128 + v131);
            if ( (unsigned int)v133 <= 0x2F )
            {
              v135 = (_QWORD *)(v133 + v128);
              *a3 = v127 + 32;
              return (*(int (__fastcall **)(_BYTE *, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 232LL))(
                       v11,
                       v130,
                       v132,
                       v134,
                       *v135);
            }
            v135 = *((_QWORD **)a3 + 1);
LABEL_284:
            *((_QWORD *)a3 + 1) = v135 + 1;
            return (*(int (__fastcall **)(_BYTE *, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 232LL))(
                     v11,
                     v130,
                     v132,
                     v134,
                     *v135);
          }
          v319 = *((__int64 **)a3 + 1);
LABEL_283:
          v135 = v319 + 1;
          *((_QWORD *)a3 + 1) = v319 + 1;
          v134 = *v319;
          goto LABEL_284;
        }
        v318 = *((_DWORD **)a3 + 1);
      }
      v319 = (__int64 *)(v318 + 2);
      *((_QWORD *)a3 + 1) = v318 + 2;
      v132 = *v318;
      goto LABEL_283;
    case 20LL:
      v281 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v376 = *((_QWORD **)a3 + 1);
        v377 = (unsigned int *)(v376 + 1);
        *((_QWORD *)a3 + 1) = v376 + 1;
        v284 = *v376;
      }
      else
      {
        v282 = *((_QWORD *)a3 + 2);
        v283 = v281 + 8;
        *a3 = v283;
        v284 = *(_QWORD *)(v282 + v281);
        if ( (unsigned int)v283 <= 0x2F )
        {
          v285 = v281 + 16;
          *a3 = v285;
          v286 = *(_DWORD *)(v282 + v283);
          if ( (unsigned int)v285 <= 0x2F )
          {
            v287 = v281 + 24;
            *a3 = v287;
            v288 = *(_DWORD *)(v282 + v285);
            if ( (unsigned int)v287 <= 0x2F )
            {
              v289 = (_QWORD *)(v287 + v282);
              *a3 = v281 + 32;
              return (*(int (__fastcall **)(_BYTE *, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v11 + 240LL))(
                       v11,
                       v284,
                       v286,
                       v288,
                       *v289);
            }
            v289 = *((_QWORD **)a3 + 1);
LABEL_374:
            *((_QWORD *)a3 + 1) = v289 + 1;
            return (*(int (__fastcall **)(_BYTE *, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v11 + 240LL))(
                     v11,
                     v284,
                     v286,
                     v288,
                     *v289);
          }
          v378 = *((_DWORD **)a3 + 1);
LABEL_373:
          v289 = v378 + 2;
          *((_QWORD *)a3 + 1) = v378 + 2;
          v288 = *v378;
          goto LABEL_374;
        }
        v377 = *((unsigned int **)a3 + 1);
      }
      v378 = v377 + 2;
      *((_QWORD *)a3 + 1) = v377 + 2;
      v286 = *v377;
      goto LABEL_373;
    case 21LL:
      v276 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v309 = *((__int64 **)a3 + 1);
        v280 = v309 + 1;
        *((_QWORD *)a3 + 1) = v309 + 1;
        v279 = *v309;
      }
      else
      {
        v277 = *((_QWORD *)a3 + 2);
        v278 = v276 + 8;
        *a3 = v278;
        v279 = *(_QWORD *)(v277 + v276);
        if ( (unsigned int)v278 <= 0x2F )
        {
          v280 = (_QWORD *)(v278 + v277);
          *a3 = v276 + 16;
          return (*(int (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v11 + 256LL))(v11, v279, *v280);
        }
        v280 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v280 + 1;
      return (*(int (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v11 + 256LL))(v11, v279, *v280);
    case 22LL:
      v199 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v372 = *((_QWORD ***)a3 + 1);
        v373 = (__int64 *)(v372 + 1);
        *((_QWORD *)a3 + 1) = v372 + 1;
        v189 = *v372;
      }
      else
      {
        v200 = *((_QWORD *)a3 + 2);
        v201 = v199 + 8;
        *a3 = v201;
        v189 = *(__int64 **)(v200 + v199);
        if ( (unsigned int)v201 <= 0x2F )
        {
          v202 = v199 + 16;
          *a3 = v202;
          v203 = *(_QWORD *)(v200 + v201);
          if ( (unsigned int)v202 <= 0x2F )
          {
            v204 = v199 + 24;
            *a3 = v204;
            v205 = *(_QWORD *)(v200 + v202);
            if ( (unsigned int)v204 <= 0x2F )
            {
              v206 = v199 + 32;
              *a3 = v206;
              v207 = *(_QWORD *)(v200 + v204);
              if ( (unsigned int)v206 <= 0x2F )
              {
                v208 = (_QWORD *)(v206 + v200);
                *a3 = v199 + 40;
                goto LABEL_170;
              }
              v208 = *((_QWORD **)a3 + 1);
LABEL_370:
              *((_QWORD *)a3 + 1) = v208 + 1;
LABEL_170:
              v197 = (*(__int64 (__fastcall **)(_BYTE *, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 288LL))(
                       v11,
                       v203,
                       v205,
                       v207,
                       *v208);
              goto LABEL_160;
            }
            v375 = *((__int64 **)a3 + 1);
LABEL_369:
            v208 = v375 + 1;
            *((_QWORD *)a3 + 1) = v375 + 1;
            v207 = *v375;
            goto LABEL_370;
          }
          v374 = *((__int64 **)a3 + 1);
LABEL_368:
          v375 = v374 + 1;
          *((_QWORD *)a3 + 1) = v374 + 1;
          v205 = *v374;
          goto LABEL_369;
        }
        v373 = *((__int64 **)a3 + 1);
      }
      v374 = v373 + 1;
      *((_QWORD *)a3 + 1) = v373 + 1;
      v203 = *v373;
      goto LABEL_368;
    case 23LL:
      v186 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v335 = *((_QWORD ***)a3 + 1);
        v336 = (__int64 *)(v335 + 1);
        *((_QWORD *)a3 + 1) = v335 + 1;
        v189 = *v335;
      }
      else
      {
        v187 = *((_QWORD *)a3 + 2);
        v188 = v186 + 8;
        *a3 = v188;
        v189 = *(__int64 **)(v187 + v186);
        if ( (unsigned int)v188 <= 0x2F )
        {
          v190 = v186 + 16;
          *a3 = v190;
          v191 = *(_QWORD *)(v187 + v188);
          if ( (unsigned int)v190 <= 0x2F )
          {
            v192 = v186 + 24;
            *a3 = v192;
            v193 = *(_QWORD *)(v187 + v190);
            if ( (unsigned int)v192 <= 0x2F )
            {
              v194 = v186 + 32;
              *a3 = v194;
              v195 = *(_QWORD *)(v187 + v192);
              if ( (unsigned int)v194 <= 0x2F )
              {
                v196 = (_QWORD *)(v194 + v187);
                *a3 = v186 + 40;
                goto LABEL_159;
              }
              v196 = *((_QWORD **)a3 + 1);
LABEL_311:
              *((_QWORD *)a3 + 1) = v196 + 1;
LABEL_159:
              v197 = (*(__int64 (__fastcall **)(_BYTE *, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 296LL))(
                       v11,
                       v191,
                       v193,
                       v195,
                       *v196);
LABEL_160:
              v198 = 0;
              if ( v197 >= 0 )
                v198 = v197;
              *v189 = v198;
              if ( v197 < 0 )
                return -5;
              return 1;
            }
            v338 = *((__int64 **)a3 + 1);
LABEL_310:
            v196 = v338 + 1;
            *((_QWORD *)a3 + 1) = v338 + 1;
            v195 = *v338;
            goto LABEL_311;
          }
          v337 = *((__int64 **)a3 + 1);
LABEL_309:
          v338 = v337 + 1;
          *((_QWORD *)a3 + 1) = v337 + 1;
          v193 = *v337;
          goto LABEL_310;
        }
        v336 = *((__int64 **)a3 + 1);
      }
      v337 = v336 + 1;
      *((_QWORD *)a3 + 1) = v336 + 1;
      v191 = *v336;
      goto LABEL_309;
    case 24LL:
      v257 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v369 = *((_DWORD ***)a3 + 1);
        v370 = v369 + 1;
        *((_QWORD *)a3 + 1) = v369 + 1;
        v260 = *v369;
      }
      else
      {
        v258 = *((_QWORD *)a3 + 2);
        v259 = v257 + 8;
        *a3 = v259;
        v260 = *(_DWORD **)(v258 + v257);
        if ( (unsigned int)v259 <= 0x2F )
        {
          v261 = v257 + 16;
          *a3 = v261;
          v262 = *(_DWORD *)(v258 + v259);
          if ( (unsigned int)v261 <= 0x2F )
          {
            v263 = v257 + 24;
            *a3 = v263;
            v264 = *(_QWORD *)(v258 + v261);
            if ( (unsigned int)v263 <= 0x2F )
            {
              v265 = (unsigned int *)(v263 + v258);
              *a3 = v257 + 32;
              goto LABEL_232;
            }
            v265 = *((unsigned int **)a3 + 1);
LABEL_363:
            *((_QWORD *)a3 + 1) = v265 + 2;
LABEL_232:
            if ( v262 == 8 )
            {
              v266 = *v265;
              *v260 = 0;
              *v260 = (*(__int64 (__fastcall **)(_BYTE *, __int64, __int64, __int64))(*(_QWORD *)v11 + 304LL))(
                        v11,
                        8,
                        v264,
                        v266);
            }
            else
            {
              *v260 = 2;
            }
            return 1;
          }
          v371 = *((_QWORD **)a3 + 1);
LABEL_362:
          v265 = (unsigned int *)(v371 + 1);
          *((_QWORD *)a3 + 1) = v371 + 1;
          v264 = *v371;
          goto LABEL_363;
        }
        v370 = *((_DWORD **)a3 + 1);
      }
      v371 = v370 + 2;
      *((_QWORD *)a3 + 1) = v370 + 2;
      v262 = *v370;
      goto LABEL_362;
    case 25LL:
      v248 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v344 = *((_DWORD ***)a3 + 1);
        v345 = (__int64 *)(v344 + 1);
        *((_QWORD *)a3 + 1) = v344 + 1;
        v251 = *v344;
      }
      else
      {
        v249 = *((_QWORD *)a3 + 2);
        v250 = v248 + 8;
        *a3 = v250;
        v251 = *(_DWORD **)(v249 + v248);
        if ( (unsigned int)v250 <= 0x2F )
        {
          v252 = v248 + 16;
          *a3 = v252;
          v253 = *(_QWORD *)(v249 + v250);
          if ( (unsigned int)v252 <= 0x2F )
          {
            v254 = v248 + 24;
            *a3 = v254;
            v255 = *(_DWORD *)(v249 + v252);
            if ( (unsigned int)v254 <= 0x2F )
            {
              *a3 = v248 + 32;
              v256 = *(_DWORD *)(v249 + v254);
              if ( v248 + 32 <= 0x2F )
              {
                *a3 = v248 + 40;
                return (int)sub_13650((__int64)a1, v251, v253, v255, v256);
              }
              v348 = *((int **)a3 + 1);
LABEL_326:
              *((_QWORD *)a3 + 1) = v348 + 2;
              return (int)sub_13650((__int64)a1, v251, v253, v255, v256);
            }
            v347 = *((int **)a3 + 1);
LABEL_325:
            v348 = v347 + 2;
            *((_QWORD *)a3 + 1) = v347 + 2;
            v256 = *v347;
            goto LABEL_326;
          }
          v346 = *((unsigned int **)a3 + 1);
LABEL_324:
          v347 = (int *)(v346 + 2);
          *((_QWORD *)a3 + 1) = v346 + 2;
          v255 = *v346;
          goto LABEL_325;
        }
        v345 = *((__int64 **)a3 + 1);
      }
      v346 = (unsigned int *)(v345 + 1);
      *((_QWORD *)a3 + 1) = v345 + 1;
      v253 = *v345;
      goto LABEL_324;
    case 26LL:
      v267 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v349 = *((__int64 **)a3 + 1);
        v350 = v349 + 1;
        *((_QWORD *)a3 + 1) = v349 + 1;
        v270 = *v349;
      }
      else
      {
        v268 = *((_QWORD *)a3 + 2);
        v269 = v267 + 8;
        *a3 = v269;
        v270 = *(_QWORD *)(v268 + v267);
        if ( (unsigned int)v269 <= 0x2F )
        {
          v271 = v267 + 16;
          *a3 = v271;
          v272 = *(_QWORD *)(v268 + v269);
          if ( (unsigned int)v271 <= 0x2F )
          {
            v273 = v267 + 24;
            *a3 = v273;
            v274 = *(_DWORD *)(v268 + v271);
            if ( (unsigned int)v273 <= 0x2F )
            {
              v275 = (_QWORD *)(v273 + v268);
              *a3 = v267 + 32;
              return (*(int (__fastcall **)(_BYTE *, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 352LL))(
                       v11,
                       v270,
                       v272,
                       v274,
                       *v275);
            }
            v275 = *((_QWORD **)a3 + 1);
LABEL_330:
            *((_QWORD *)a3 + 1) = v275 + 1;
            return (*(int (__fastcall **)(_BYTE *, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 352LL))(
                     v11,
                     v270,
                     v272,
                     v274,
                     *v275);
          }
          v351 = *((_DWORD **)a3 + 1);
LABEL_329:
          v275 = v351 + 2;
          *((_QWORD *)a3 + 1) = v351 + 2;
          v274 = *v351;
          goto LABEL_330;
        }
        v350 = *((_QWORD **)a3 + 1);
      }
      v351 = v350 + 1;
      *((_QWORD *)a3 + 1) = v350 + 1;
      v272 = *v350;
      goto LABEL_329;
    case 27LL:
      v78 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v367 = *((__int64 **)a3 + 1);
        v368 = v367 + 1;
        *((_QWORD *)a3 + 1) = v367 + 1;
        v81 = *v367;
      }
      else
      {
        v79 = *((_QWORD *)a3 + 2);
        v80 = v78 + 8;
        *a3 = v80;
        v81 = *(_QWORD *)(v79 + v78);
        if ( (unsigned int)v80 <= 0x2F )
        {
          v82 = v78 + 16;
          *a3 = v82;
          v83 = *(_QWORD *)(v79 + v80);
          if ( (unsigned int)v82 <= 0x2F )
          {
            v84 = (_DWORD *)(v82 + v79);
            *a3 = v78 + 24;
            goto LABEL_72;
          }
          v84 = *((_DWORD **)a3 + 1);
LABEL_356:
          *((_QWORD *)a3 + 1) = v84 + 2;
LABEL_72:
          v6 = -1;
          v85 = *(__int64 (**)())(*(_QWORD *)v11 + 368LL);
          if ( v85 != sub_F040 )
            return ((int (__fastcall *)(_BYTE *, __int64, __int64, bool))v85)(v11, v81, v83, *v84 != 0);
          return v6;
        }
        v368 = *((_QWORD **)a3 + 1);
      }
      v84 = v368 + 1;
      *((_QWORD *)a3 + 1) = v368 + 1;
      v83 = *v368;
      goto LABEL_356;
    case 28LL:
      v106 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v107 = *((unsigned int **)a3 + 1);
        *((_QWORD *)a3 + 1) = v107 + 2;
      }
      else
      {
        v107 = (unsigned int *)(*((_QWORD *)a3 + 2) + v106);
        *a3 = v106 + 8;
      }
      v108 = *(void (**)())(*(_QWORD *)v11 + 376LL);
      if ( v108 != nullsub_3 )
        ((void (__fastcall *)(_BYTE *, _QWORD))v108)(v11, *v107);
      return 1;
    case 29LL:
      v96 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v325 = *((_DWORD **)a3 + 1);
        v326 = (__int64 *)(v325 + 2);
        *((_QWORD *)a3 + 1) = v325 + 2;
        v99 = *v325;
LABEL_295:
        v327 = v326 + 1;
        *((_QWORD *)a3 + 1) = v326 + 1;
        v101 = *v326;
LABEL_296:
        v104 = v327 + 1;
        *((_QWORD *)a3 + 1) = v327 + 1;
        v103 = *v327;
        goto LABEL_297;
      }
      v97 = *((_QWORD *)a3 + 2);
      v98 = v96 + 8;
      *a3 = v98;
      v99 = *(_DWORD *)(v97 + v96);
      if ( (unsigned int)v98 > 0x2F )
      {
        v326 = *((__int64 **)a3 + 1);
        goto LABEL_295;
      }
      v100 = v96 + 16;
      *a3 = v100;
      v101 = *(_QWORD *)(v97 + v98);
      if ( (unsigned int)v100 > 0x2F )
      {
        v327 = *((__int64 **)a3 + 1);
        goto LABEL_296;
      }
      v102 = v96 + 24;
      *a3 = v102;
      v103 = *(_QWORD *)(v97 + v100);
      if ( (unsigned int)v102 <= 0x2F )
      {
        v104 = (_QWORD *)(v102 + v97);
        *a3 = v96 + 32;
        goto LABEL_87;
      }
      v104 = *((_QWORD **)a3 + 1);
LABEL_297:
      *((_QWORD *)a3 + 1) = v104 + 1;
LABEL_87:
      v6 = 0;
      v105 = *(__int64 (**)())(*(_QWORD *)v11 + 384LL);
      if ( v105 != sub_F060 )
        return ((int (__fastcall *)(_BYTE *, _QWORD, __int64, __int64, _QWORD))v105)(v11, v99, v101, v103, *v104);
      return v6;
    case 30LL:
      v160 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v379 = *((_DWORD **)a3 + 1);
        v380 = (__int64 *)(v379 + 2);
        *((_QWORD *)a3 + 1) = v379 + 2;
        v99 = *v379;
      }
      else
      {
        v161 = *((_QWORD *)a3 + 2);
        v162 = v160 + 8;
        *a3 = v162;
        v99 = *(_DWORD *)(v161 + v160);
        if ( (unsigned int)v162 <= 0x2F )
        {
          v163 = v160 + 16;
          *a3 = v163;
          v101 = *(_QWORD *)(v161 + v162);
          if ( (unsigned int)v163 <= 0x2F )
          {
            v164 = v160 + 24;
            *a3 = v164;
            v103 = *(_QWORD *)(v161 + v163);
            if ( (unsigned int)v164 <= 0x2F )
            {
              v104 = (_QWORD *)(v164 + v161);
              *a3 = v160 + 32;
              goto LABEL_138;
            }
            v104 = *((_QWORD **)a3 + 1);
LABEL_378:
            *((_QWORD *)a3 + 1) = v104 + 1;
LABEL_138:
            v6 = 0;
            v105 = *(__int64 (**)())(*(_QWORD *)v11 + 392LL);
            if ( v105 != sub_F070 )
              return ((int (__fastcall *)(_BYTE *, _QWORD, __int64, __int64, _QWORD))v105)(v11, v99, v101, v103, *v104);
            return v6;
          }
          v381 = *((__int64 **)a3 + 1);
LABEL_377:
          v104 = v381 + 1;
          *((_QWORD *)a3 + 1) = v381 + 1;
          v103 = *v381;
          goto LABEL_378;
        }
        v380 = *((__int64 **)a3 + 1);
      }
      v381 = v380 + 1;
      *((_QWORD *)a3 + 1) = v380 + 1;
      v101 = *v380;
      goto LABEL_377;
    case 31LL:
      v86 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v321 = *((_QWORD ***)a3 + 1);
        v322 = (__int64 *)(v321 + 1);
        *((_QWORD *)a3 + 1) = v321 + 1;
        v89 = *v321;
      }
      else
      {
        v87 = *((_QWORD *)a3 + 2);
        v88 = v86 + 8;
        *a3 = v88;
        v89 = *(__int64 **)(v87 + v86);
        if ( (unsigned int)v88 <= 0x2F )
        {
          v90 = v86 + 16;
          *a3 = v90;
          v91 = *(_QWORD *)(v87 + v88);
          if ( (unsigned int)v90 <= 0x2F )
          {
            v92 = v86 + 24;
            *a3 = v92;
            v93 = *(_QWORD *)(v87 + v90);
            if ( (unsigned int)v92 <= 0x2F )
            {
              v94 = (unsigned int *)(v92 + v87);
              *a3 = v86 + 32;
              goto LABEL_79;
            }
            v94 = *((unsigned int **)a3 + 1);
LABEL_291:
            *((_QWORD *)a3 + 1) = v94 + 2;
LABEL_79:
            v95 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 248LL);
            if ( v95 != sub_F030 )
              v91 = ((__int64 (__fastcall *)(_BYTE *, __int64, __int64, _QWORD))v95)(v11, v91, v93, *v94);
            *v89 = v91;
            return 1;
          }
          v323 = *((_QWORD **)a3 + 1);
LABEL_290:
          v94 = (unsigned int *)(v323 + 1);
          *((_QWORD *)a3 + 1) = v323 + 1;
          v93 = *v323;
          goto LABEL_291;
        }
        v322 = *((__int64 **)a3 + 1);
      }
      v323 = v322 + 1;
      *((_QWORD *)a3 + 1) = v322 + 1;
      v91 = *v322;
      goto LABEL_290;
    case 32LL:
      v75 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v76 = *((_QWORD ***)a3 + 1);
        *((_QWORD *)a3 + 1) = v76 + 1;
      }
      else
      {
        v76 = (_QWORD **)(*((_QWORD *)a3 + 2) + v75);
        *a3 = v75 + 8;
      }
      v77 = *v76;
      *v77 = sub_1E460(v11);
      return 1;
    case 33LL:
      v69 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v324 = *((_DWORD **)a3 + 1);
        v73 = v324 + 2;
        *((_QWORD *)a3 + 1) = v324 + 2;
        v72 = *v324;
      }
      else
      {
        v70 = *((_QWORD *)a3 + 2);
        v71 = v69 + 8;
        *a3 = v71;
        v72 = *(_DWORD *)(v70 + v69);
        if ( (unsigned int)v71 <= 0x2F )
        {
          v73 = (_QWORD *)(v71 + v70);
          *a3 = v69 + 16;
          goto LABEL_62;
        }
        v73 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v73 + 1;
LABEL_62:
      if ( (*(_BYTE *)(dbg + 37LL) & 8) == 0 )
        return 0;
      v74 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)v11 + 416LL))(v11, v72, *v73);
      if ( (unsigned int)(v74 + 1) > 1 )
        return v74;
      *(_QWORD *)(dbg + 32LL) &= ~0x80000000000uLL;
      return 0;
    case 34LL:
      if ( (a1[157] & 0x10) == 0 )
        return 0;
      v111 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v383 = *((_QWORD ***)a3 + 1);
        *((_QWORD *)a3 + 1) = v383 + 1;
        v114 = *v383;
      }
      else
      {
        v112 = *((_QWORD *)a3 + 2);
        v113 = v111 + 8;
        *a3 = v113;
        v114 = *(_QWORD **)(v112 + v111);
        if ( (unsigned int)v113 <= 0x2F )
        {
          v115 = v111 + 16;
          *a3 = v115;
          v116 = *(_QWORD *)(v112 + v113);
          if ( (unsigned int)v115 <= 0x2F )
          {
            v117 = v111 + 24;
            *a3 = v117;
            v118 = *(_DWORD *)(v112 + v115);
            if ( (unsigned int)v117 <= 0x2F )
            {
              *a3 = v111 + 32;
              v119 = *(_QWORD *)(v112 + v117);
              if ( v111 + 32 <= 0x2F )
              {
                v120 = v111 + 40;
                if ( (unsigned int)v120 <= 0x2F )
                {
                  *a3 = v111 + 48;
                  v121 = *(_QWORD *)(v112 + v120);
                  goto LABEL_104;
                }
                *a3 = v120;
LABEL_388:
                v387 = *((__int64 **)a3 + 1);
                *((_QWORD *)a3 + 1) = v387 + 1;
                v121 = *v387;
LABEL_104:
                v122 = *((__int64 **)a3 + 1);
                *((_QWORD *)a3 + 1) = v122 + 1;
                v123 = *v122;
                *((_QWORD *)a3 + 1) = v122 + 2;
                v124 = v122[1];
                *((_QWORD *)a3 + 1) = v122 + 3;
                v125 = v122[2];
                *((_QWORD *)a3 + 1) = v122 + 4;
                v126 = v122[3];
                *((_QWORD *)a3 + 1) = v122 + 5;
                *v114 = (*(__int64 (__fastcall **)(_BYTE *, __int64, _QWORD, _QWORD, __int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 424LL))(
                          v11,
                          v116,
                          v118,
                          (unsigned int)*(_QWORD *)(v119 + 56),
                          v121,
                          v123,
                          v124,
                          v125,
                          v126,
                          *((unsigned int *)v122 + 8));
                return 1;
              }
LABEL_387:
              *((_QWORD *)a3 + 1) += 8LL;
              goto LABEL_388;
            }
LABEL_386:
            v386 = *((__int64 **)a3 + 1);
            *((_QWORD *)a3 + 1) = v386 + 1;
            v119 = *v386;
            goto LABEL_387;
          }
LABEL_385:
          v385 = *((unsigned int **)a3 + 1);
          *((_QWORD *)a3 + 1) = v385 + 2;
          v118 = *v385;
          goto LABEL_386;
        }
      }
      v384 = *((__int64 **)a3 + 1);
      *((_QWORD *)a3 + 1) = v384 + 1;
      v116 = *v384;
      goto LABEL_385;
    case 35LL:
      if ( (a1[157] & 0x10) == 0 )
        return 0;
      v67 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v68 = *((unsigned int **)a3 + 1);
        *((_QWORD *)a3 + 1) = v68 + 2;
      }
      else
      {
        v68 = (unsigned int *)(*((_QWORD *)a3 + 2) + v67);
        *a3 = v67 + 8;
      }
      return (*(int (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v11 + 432LL))(v11, *v68);
    case 36LL:
      v52 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v358 = *((_DWORD **)a3 + 1);
        v359 = (__int64 *)(v358 + 2);
        *((_QWORD *)a3 + 1) = v358 + 2;
        v55 = *v358;
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
          v57 = *(_QWORD *)(v53 + v54);
          if ( (unsigned int)v56 <= 0x2F )
          {
            v58 = (_QWORD *)(v56 + v53);
            *a3 = v52 + 24;
            return (*(int (__fastcall **)(_BYTE *, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 360LL))(
                     v11,
                     v55,
                     v57,
                     *v58);
          }
          v58 = *((_QWORD **)a3 + 1);
LABEL_343:
          *((_QWORD *)a3 + 1) = v58 + 1;
          return (*(int (__fastcall **)(_BYTE *, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 360LL))(v11, v55, v57, *v58);
        }
        v359 = *((__int64 **)a3 + 1);
      }
      v58 = v359 + 1;
      *((_QWORD *)a3 + 1) = v359 + 1;
      v57 = *v359;
      goto LABEL_343;
    case 37LL:
      v40 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v352 = *((_DWORD **)a3 + 1);
        v353 = (__int64 *)(v352 + 2);
        *((_QWORD *)a3 + 1) = v352 + 2;
        v43 = *v352;
      }
      else
      {
        v41 = *((_QWORD *)a3 + 2);
        v42 = v40 + 8;
        *a3 = v42;
        v43 = *(_DWORD *)(v41 + v40);
        if ( (unsigned int)v42 <= 0x2F )
        {
          v44 = v40 + 16;
          *a3 = v44;
          v45 = *(_QWORD *)(v41 + v42);
          if ( (unsigned int)v44 <= 0x2F )
          {
            v46 = v40 + 24;
            *a3 = v46;
            v47 = *(_QWORD *)(v41 + v44);
            if ( (unsigned int)v46 <= 0x2F )
            {
              v48 = v40 + 32;
              *a3 = v48;
              v49 = *(_QWORD *)(v41 + v46);
              if ( (unsigned int)v48 <= 0x2F )
              {
                v50 = (_QWORD *)(v48 + v41);
                *a3 = v40 + 40;
                goto LABEL_42;
              }
              v50 = *((_QWORD **)a3 + 1);
LABEL_335:
              *((_QWORD *)a3 + 1) = v50 + 1;
LABEL_42:
              v51 = *(__int64 (**)())(*(_QWORD *)v11 + 400LL);
              if ( v51 != sub_F080 )
                return ((int (__fastcall *)(_BYTE *, _QWORD, __int64, __int64, __int64, _QWORD))v51)(
                         v11,
                         v43,
                         v45,
                         v47,
                         v49,
                         *v50);
              return 0;
            }
            v355 = *((__int64 **)a3 + 1);
LABEL_334:
            v50 = v355 + 1;
            *((_QWORD *)a3 + 1) = v355 + 1;
            v49 = *v355;
            goto LABEL_335;
          }
          v354 = *((__int64 **)a3 + 1);
LABEL_333:
          v355 = v354 + 1;
          *((_QWORD *)a3 + 1) = v354 + 1;
          v47 = *v354;
          goto LABEL_334;
        }
        v353 = *((__int64 **)a3 + 1);
      }
      v354 = v353 + 1;
      *((_QWORD *)a3 + 1) = v353 + 1;
      v45 = *v353;
      goto LABEL_333;
    case 38LL:
      v59 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v365 = *((unsigned int **)a3 + 1);
        v366 = v365 + 2;
        *((_QWORD *)a3 + 1) = v365 + 2;
        v62 = *v365;
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
          v64 = *(_DWORD *)(v60 + v61) != 0;
          if ( (unsigned int)v63 <= 0x2F )
          {
            v65 = (unsigned int *)(v63 + v60);
            *a3 = v59 + 24;
            goto LABEL_53;
          }
          v65 = *((unsigned int **)a3 + 1);
LABEL_352:
          *((_QWORD *)a3 + 1) = v65 + 2;
LABEL_53:
          v66 = *(__int64 (**)())(*(_QWORD *)v11 + 520LL);
          if ( v66 != sub_F090 )
            return ((unsigned __int8 (__fastcall *)(_BYTE *, _QWORD, bool, _QWORD))v66)(v11, v62, v64, *v65);
          return 0;
        }
        v366 = *((_DWORD **)a3 + 1);
      }
      v65 = v366 + 2;
      *((_QWORD *)a3 + 1) = v366 + 2;
      v64 = *v366 != 0;
      goto LABEL_352;
    case 39LL:
      v34 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v357 = *((unsigned int **)a3 + 1);
        v38 = v357 + 2;
        *((_QWORD *)a3 + 1) = v357 + 2;
        v37 = *v357;
      }
      else
      {
        v35 = *((_QWORD *)a3 + 2);
        v36 = v34 + 8;
        *a3 = v36;
        v37 = *(_DWORD *)(v35 + v34);
        if ( (unsigned int)v36 <= 0x2F )
        {
          v38 = (unsigned int *)(v36 + v35);
          *a3 = v34 + 16;
          goto LABEL_34;
        }
        v38 = *((unsigned int **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v38 + 2;
LABEL_34:
      v39 = *(__int64 (**)())(*(_QWORD *)v11 + 528LL);
      if ( v39 == sub_F0A0 )
        return 0;
      return ((unsigned __int8 (__fastcall *)(_BYTE *, _QWORD, _QWORD))v39)(v11, v37, *v38);
    case 40LL:
      v32 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v33 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v33 + 1;
      }
      else
      {
        v33 = (_QWORD *)(*((_QWORD *)a3 + 2) + v32);
        *a3 = v32 + 8;
      }
      return (*(int (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v11 + 536LL))(v11, *v33);
    case 41LL:
      v26 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v356 = *((__int64 **)a3 + 1);
        v30 = v356 + 1;
        *((_QWORD *)a3 + 1) = v356 + 1;
        v29 = *v356;
      }
      else
      {
        v27 = *((_QWORD *)a3 + 2);
        v28 = v26 + 8;
        *a3 = v28;
        v29 = *(_QWORD *)(v27 + v26);
        if ( (unsigned int)v28 <= 0x2F )
        {
          v30 = (_QWORD *)(v28 + v27);
          *a3 = v26 + 16;
          goto LABEL_26;
        }
        v30 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v30 + 1;
LABEL_26:
      v31 = *(__int64 (**)())(*(_QWORD *)v11 + 560LL);
      if ( v31 == sub_F0B0 )
        return 0;
      return ((unsigned __int8 (__fastcall *)(_BYTE *, __int64, _QWORD))v31)(v11, v29, *v30);
    case 42LL:
      v13 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v360 = *((__int64 **)a3 + 1);
        v361 = v360 + 1;
        *((_QWORD *)a3 + 1) = v360 + 1;
        v16 = *v360;
      }
      else
      {
        v14 = *((_QWORD *)a3 + 2);
        v15 = v13 + 8;
        *a3 = v15;
        v16 = *(_QWORD *)(v14 + v13);
        if ( (unsigned int)v15 <= 0x2F )
        {
          v17 = v13 + 16;
          *a3 = v17;
          v18 = *(_QWORD *)(v14 + v15);
          if ( (unsigned int)v17 <= 0x2F )
          {
            v19 = v13 + 24;
            *a3 = v19;
            v20 = *(const char **)(v14 + v17);
            if ( (unsigned int)v19 <= 0x2F )
            {
              v21 = v13 + 32;
              *a3 = v21;
              v22 = *(_QWORD *)(v14 + v19);
              if ( (unsigned int)v21 <= 0x2F )
              {
                v23 = v13 + 40;
                *a3 = v23;
                v24 = *(unsigned int *)(v14 + v21);
                if ( (unsigned int)v23 <= 0x2F )
                {
                  v25 = (_QWORD *)(v23 + v14);
                  *a3 = v13 + 48;
                  goto LABEL_20;
                }
                v25 = *((_QWORD **)a3 + 1);
LABEL_349:
                *((_QWORD *)a3 + 1) = v25 + 1;
LABEL_20:
                if ( v22 )
                {
                  v6 = (*(int (__fastcall **)(_BYTE *, __int64, __int64, const char *, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 576LL))(
                         v11,
                         v16,
                         v18,
                         v20,
                         v22,
                         v24,
                         *v25);
                  if ( (*(_DWORD *)debug & 0x10000) != 0 )
                    sub_111A0((__int64)"debugger_t::ev_bin_search(%a, %a) -> %d(%s) ea %a\n", a4, a5, v18, v20, a6);
                  return v6;
                }
                return 0;
              }
              v364 = *((unsigned int **)a3 + 1);
LABEL_348:
              v25 = v364 + 2;
              *((_QWORD *)a3 + 1) = v364 + 2;
              v24 = *v364;
              goto LABEL_349;
            }
            v363 = *((_QWORD **)a3 + 1);
LABEL_347:
            v364 = (unsigned int *)(v363 + 1);
            *((_QWORD *)a3 + 1) = v363 + 1;
            v22 = *v363;
            goto LABEL_348;
          }
          v362 = *((const char ***)a3 + 1);
LABEL_346:
          v363 = v362 + 1;
          *((_QWORD *)a3 + 1) = v362 + 1;
          v20 = *v362;
          goto LABEL_347;
        }
        v361 = *((_QWORD **)a3 + 1);
      }
      v362 = (const char **)(v361 + 1);
      *((_QWORD *)a3 + 1) = v361 + 1;
      v18 = *v361;
      goto LABEL_346;
    case 43LL:
      if ( !a1[208] )
        return 0;
      if ( (unsigned int)*a3 > 0x2F )
        *((_QWORD *)a3 + 1) += 8LL;
      else
        *a3 += 8;
      v12 = *(__int64 (**)())(*(_QWORD *)v11 + 584LL);
      if ( v12 == sub_F0D0 || (v388 = v12(), v388 >= 0) )
      {
        serialize_dynamic_register_set();
        deserialize_dynamic_register_set();
        return 1;
      }
      return v388;
    case 44LL:
      v225 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v331 = *((_QWORD ***)a3 + 1);
        v332 = v331 + 1;
        *((_QWORD *)a3 + 1) = v331 + 1;
        v228 = *v331;
      }
      else
      {
        v226 = *((_QWORD *)a3 + 2);
        v227 = v225 + 8;
        *a3 = v227;
        v228 = *(__int64 **)(v226 + v225);
        if ( (unsigned int)v227 <= 0x2F )
        {
          v229 = v225 + 16;
          *a3 = v229;
          v230 = *(_QWORD *)(v226 + v227);
          if ( (unsigned int)v229 <= 0x2F )
          {
            v231 = v225 + 24;
            *a3 = v231;
            v390 = *(_DWORD *)(v226 + v229);
            if ( (unsigned int)v231 <= 0x2F )
            {
              v232 = v225 + 32;
              *a3 = v232;
              v233 = *(_DWORD *)(v226 + v231);
              if ( (unsigned int)v232 <= 0x2F )
              {
                v234 = (__int64 *)(v232 + v226);
                *a3 = v225 + 40;
                goto LABEL_194;
              }
              v234 = *((__int64 **)a3 + 1);
LABEL_306:
              *((_QWORD *)a3 + 1) = v234 + 1;
LABEL_194:
              v235 = *v234;
              if ( (*(_DWORD *)debug & 0x10000) != 0 )
                sub_111A0((__int64)"debugger_t::ev_set_dbg_options(%s)\n", (const char *)v230);
              v236 = (*(__int64 (__fastcall **)(_BYTE *, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 64LL))(
                       a1,
                       v230,
                       v390,
                       v233,
                       v235);
              if ( !v230 || *(_BYTE *)v230 != 32 || (v6 = v236 != 0, *(_BYTE *)(v230 + 1)) )
              {
                if ( v228 )
                  *v228 = v236;
                sub_13E10((__int64 *)a1, a1[208]);
                return 1;
              }
              return v6;
            }
            v334 = *((_DWORD **)a3 + 1);
LABEL_305:
            v234 = (__int64 *)(v334 + 2);
            *((_QWORD *)a3 + 1) = v334 + 2;
            v233 = *v334;
            goto LABEL_306;
          }
          v333 = *((unsigned int **)a3 + 1);
LABEL_304:
          v334 = v333 + 2;
          *((_QWORD *)a3 + 1) = v333 + 2;
          v390 = *v333;
          goto LABEL_305;
        }
        v332 = *((_QWORD **)a3 + 1);
      }
      v333 = (unsigned int *)(v332 + 1);
      *((_QWORD *)a3 + 1) = v332 + 1;
      v230 = *v332;
      goto LABEL_304;
    default:
      return 0;
  }
}

