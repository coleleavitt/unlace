__int64 __fastcall sub_FFD0(_BYTE *a1, const char *a2, int *a3, double a4, double a5, double a6)
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
  unsigned int v51; // ecx
  __int64 v52; // rax
  __int64 v53; // r8
  unsigned int v54; // r9d
  __int64 v55; // rsi
  __int64 v56; // r8
  _QWORD *v57; // rax
  unsigned int v58; // ecx
  __int64 v59; // rax
  __int64 v60; // r8
  unsigned int v61; // r10d
  __int64 v62; // rsi
  bool v63; // r9
  unsigned int *v64; // rax
  __int64 (*v65)(); // r8
  unsigned int v66; // ecx
  unsigned int *v67; // rax
  unsigned int v68; // ecx
  __int64 v69; // rax
  __int64 v70; // rsi
  unsigned int v71; // r9d
  _QWORD *v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 (*v75)(); // r8
  unsigned int v76; // eax
  _QWORD **v77; // rcx
  _QWORD *v78; // rbx
  unsigned int v79; // ecx
  __int64 v80; // rax
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rsi
  __int64 v84; // r10
  _DWORD *v85; // rax
  __int64 (*v86)(); // r8
  unsigned int v87; // ecx
  __int64 v88; // rax
  __int64 v89; // rsi
  _QWORD *v90; // rbx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rsi
  __int64 v94; // r8
  unsigned int *v95; // rax
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
  unsigned int v237; // ecx
  __int64 v238; // rax
  __int64 v239; // rsi
  __int64 v240; // rdi
  unsigned int v241; // r12d
  __int64 v242; // rsi
  __int64 v243; // r13
  __int64 *v244; // rax
  __int64 v245; // r14
  const char *v246; // rsi
  unsigned int v247; // ecx
  __int64 v248; // rax
  __int64 v249; // rdi
  _DWORD *v250; // r10
  __int64 v251; // rsi
  __int64 v252; // r11
  __int64 v253; // rdi
  unsigned int v254; // r14d
  int v255; // r8d
  unsigned int v256; // ecx
  __int64 v257; // rax
  __int64 v258; // rsi
  _DWORD *v259; // r14
  __int64 v260; // r9
  __int64 v261; // rsi
  __int64 v262; // r8
  __int64 v263; // r9
  unsigned int *v264; // rax
  __int64 v265; // rcx
  unsigned int v266; // ecx
  __int64 v267; // rax
  __int64 v268; // rsi
  __int64 v269; // r8
  _QWORD *v270; // rax
  unsigned int v271; // ecx
  __int64 v272; // rax
  __int64 v273; // rsi
  __int64 v274; // r9
  __int64 v275; // r8
  unsigned int v276; // r10d
  __int64 v277; // rsi
  unsigned int v278; // ebx
  _QWORD *v279; // rax
  unsigned int v280; // ecx
  __int64 v281; // rax
  __int64 v282; // rsi
  unsigned int v283; // r9d
  __int64 v284; // r8
  unsigned int v285; // r10d
  __int64 v286; // rsi
  unsigned int v287; // r14d
  _QWORD *v288; // rax
  int v289; // eax
  unsigned int v290; // eax
  _QWORD *v291; // rcx
  unsigned int v292; // eax
  unsigned int *v293; // rcx
  unsigned int v294; // ecx
  __int64 v295; // rax
  __int64 v296; // rsi
  __int64 v297; // r9
  __int64 v298; // r8
  __int64 v299; // r10
  __int64 v300; // rsi
  unsigned int v301; // ebx
  _QWORD *v302; // rax
  __int64 v303; // rax
  unsigned int *v304; // rcx
  unsigned int *v305; // rcx
  unsigned int *v306; // rax
  _DWORD *v307; // rcx
  __int64 *v308; // rcx
  __int64 *v309; // rcx
  _DWORD **v310; // rcx
  unsigned int *v311; // rax
  _QWORD *v312; // rcx
  const char **v313; // rcx
  unsigned int *v314; // rax
  __int64 *v315; // rcx
  _QWORD **v316; // rax
  _QWORD *v317; // rcx
  unsigned int *v318; // rax
  _DWORD *v319; // rcx
  __int64 *v320; // rax
  __int64 *v321; // rcx
  _QWORD *v322; // rax
  unsigned int *v323; // rcx
  _QWORD *v324; // rax
  unsigned int *v325; // rcx
  _DWORD **v326; // rax
  _QWORD *v327; // rcx
  _QWORD **v328; // rcx
  __int64 *v329; // rax
  _QWORD *v330; // rcx
  _DWORD *v331; // rcx
  _DWORD *v332; // rcx
  __int64 *v333; // rax
  __int64 *v334; // rcx
  unsigned int *v335; // rcx
  _DWORD *v336; // rax
  __int64 *v337; // rcx
  unsigned int *v338; // rcx
  _DWORD *v339; // rax
  __int64 *v340; // rcx
  _DWORD *v341; // rcx
  _QWORD *v342; // rcx
  _QWORD **v343; // rax
  __int64 *v344; // rcx
  __int64 *v345; // rax
  __int64 *v346; // rcx
  _DWORD *v347; // rax
  __int64 *v348; // rcx
  __int64 *v349; // rax
  __int64 *v350; // rcx
  __int64 *v351; // rcx
  unsigned int *v352; // rcx
  _DWORD *v353; // rax
  __int64 *v354; // rcx
  __int64 *v355; // rcx
  _QWORD *v356; // rax
  const char **v357; // rcx
  _QWORD *v358; // rax
  unsigned int *v359; // rcx
  unsigned int *v360; // rax
  _DWORD *v361; // rcx
  __int64 *v362; // rax
  _QWORD *v363; // rcx
  _DWORD **v364; // rax
  __int64 *v365; // rcx
  unsigned int *v366; // rax
  int *v367; // rcx
  int *v368; // rax
  _QWORD **v369; // rax
  __int64 *v370; // rcx
  __int64 *v371; // rax
  __int64 *v372; // rcx
  _QWORD *v373; // rcx
  unsigned int *v374; // rax
  _DWORD *v375; // rcx
  _DWORD *v376; // rcx
  __int64 *v377; // rax
  __int64 *v378; // rcx
  __int64 *v379; // rcx
  _QWORD *v380; // rax
  _DWORD *v381; // rcx
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
  v7 = *((_DWORD *)a1 + 34);
  v394 = __readfsqword(0x28u);
  if ( *(_DWORD *)(dbg + 16LL) != v7 || *(_QWORD *)(dbg + 32LL) != *((_QWORD *)a1 + 19) )
    return v6;
  v10 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
  if ( (char *)v10 == (char *)sub_DFD0 )
  {
    v11 = a1 + 224;
  }
  else
  {
    v389 = a3;
    v303 = v10();
    a3 = v389;
    v11 = (_BYTE *)v303;
  }
  switch ( (unsigned __int64)a2 )
  {
    case 0uLL:
      v237 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v313 = *((const char ***)a3 + 1);
        v314 = (unsigned int *)(v313 + 1);
        *((_QWORD *)a3 + 1) = v313 + 1;
        v391 = *v313;
      }
      else
      {
        v238 = *((_QWORD *)a3 + 2);
        v239 = v237 + 8;
        *a3 = v239;
        v391 = *(const char **)(v238 + v237);
        if ( (unsigned int)v239 <= 0x2F )
        {
          v240 = v237 + 16;
          *a3 = v240;
          v241 = *(_DWORD *)(v238 + v239);
          if ( (unsigned int)v240 > 0x2F )
          {
            v315 = *((__int64 **)a3 + 1);
            goto LABEL_286;
          }
          v242 = v237 + 24;
          *a3 = v242;
          v243 = *(_QWORD *)(v238 + v240);
          if ( (unsigned int)v242 <= 0x2F )
          {
            v244 = (__int64 *)(v242 + v238);
            *a3 = v237 + 32;
            goto LABEL_210;
          }
          v244 = *((__int64 **)a3 + 1);
LABEL_287:
          *((_QWORD *)a3 + 1) = v244 + 1;
LABEL_210:
          v245 = *v244;
          if ( *v244 )
          {
            if ( (*(_DWORD *)debug & 0x10000) != 0 )
            {
              v392 = nullptr;
              v393 = 0;
              get_dbctx_id();
              sub_F490((__int64 *)&v392);
              v246 = s1;
              if ( (_QWORD)v393 )
                v246 = v392;
              sub_E960((__int64)"%s: debugger_t::ev_init_debugger (%s,%d,)\n", v246, v391, v241);
              if ( v392 )
              {
                *(_QWORD *)&v393 = 0;
                qfree();
              }
            }
            return (int)sub_FCD0((__int64)a1, (__int64)v391, v241, v243, v245);
          }
          if ( under_debugger )
            BUG();
          interr();
        }
        v314 = *((unsigned int **)a3 + 1);
      }
      v315 = (__int64 *)(v314 + 2);
      *((_QWORD *)a3 + 1) = v314 + 2;
      v241 = *v314;
LABEL_286:
      v244 = v315 + 1;
      *((_QWORD *)a3 + 1) = v315 + 1;
      v243 = *v315;
      goto LABEL_287;
    case 1uLL:
      if ( (*(_DWORD *)debug & 0x10000) != 0 )
      {
        v392 = nullptr;
        v393 = 0;
        get_dbctx_id();
        sub_F490((__int64 *)&v392);
        a2 = s1;
        if ( (_QWORD)v393 )
          a2 = v392;
        sub_E960((__int64)"%s: debugger_t::ev_term_debugger\n", a2);
        if ( v392 )
        {
          *(_QWORD *)&v393 = 0;
          qfree();
        }
      }
      return (int)sub_F300(a1, (__int64)a2);
    case 2uLL:
      v181 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v309 = *((__int64 **)a3 + 1);
        v185 = v309 + 1;
        *((_QWORD *)a3 + 1) = v309 + 1;
        v184 = *v309;
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
    case 3uLL:
      v165 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v320 = *((__int64 **)a3 + 1);
        v321 = v320 + 1;
        *((_QWORD *)a3 + 1) = v320 + 1;
        v168 = *v320;
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
                  goto LABEL_144;
                }
                v325 = *((unsigned int **)a3 + 1);
LABEL_300:
                v177 = (__int64 *)(v325 + 2);
                *((_QWORD *)a3 + 1) = v325 + 2;
                v178 = *v325;
LABEL_144:
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
                  goto LABEL_145;
                return v6;
              }
              v324 = *((_QWORD **)a3 + 1);
LABEL_299:
              v325 = (unsigned int *)(v324 + 1);
              *((_QWORD *)a3 + 1) = v324 + 1;
              v176 = *v324;
              goto LABEL_300;
            }
            v323 = *((unsigned int **)a3 + 1);
LABEL_298:
            v324 = v323 + 2;
            *((_QWORD *)a3 + 1) = v323 + 2;
            v174 = *v323;
            goto LABEL_299;
          }
          v322 = *((_QWORD **)a3 + 1);
LABEL_297:
          v323 = (unsigned int *)(v322 + 1);
          *((_QWORD *)a3 + 1) = v322 + 1;
          v172 = *v322;
          goto LABEL_298;
        }
        v321 = *((__int64 **)a3 + 1);
      }
      v322 = v321 + 1;
      *((_QWORD *)a3 + 1) = v321 + 1;
      v170 = *v321;
      goto LABEL_297;
    case 4uLL:
      v280 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v305 = *((unsigned int **)a3 + 1);
        v306 = v305 + 2;
        *((_QWORD *)a3 + 1) = v305 + 2;
        v283 = *v305;
      }
      else
      {
        v281 = *((_QWORD *)a3 + 2);
        v282 = v280 + 8;
        *a3 = v282;
        v283 = *(_DWORD *)(v281 + v280);
        if ( (unsigned int)v282 <= 0x2F )
        {
          v284 = v280 + 16;
          *a3 = v284;
          v285 = *(_DWORD *)(v281 + v282);
          if ( (unsigned int)v284 <= 0x2F )
          {
            v286 = v280 + 24;
            *a3 = v286;
            v287 = *(_DWORD *)(v281 + v284);
            if ( (unsigned int)v286 <= 0x2F )
            {
              v288 = (_QWORD *)(v286 + v281);
              *a3 = v280 + 32;
              goto LABEL_255;
            }
            v288 = *((_QWORD **)a3 + 1);
LABEL_275:
            *((_QWORD *)a3 + 1) = v288 + 1;
LABEL_255:
            v289 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v11 + 144LL))(
                     v11,
                     v283,
                     v285,
                     v287,
                     *v288);
            v6 = v289;
            if ( v289 > 0 )
LABEL_145:
              sub_F970((__int64)a1, 1);
            return v6;
          }
          v307 = *((_DWORD **)a3 + 1);
LABEL_274:
          v288 = v307 + 2;
          *((_QWORD *)a3 + 1) = v307 + 2;
          v287 = *v307;
          goto LABEL_275;
        }
        v306 = *((unsigned int **)a3 + 1);
      }
      v307 = v306 + 2;
      *((_QWORD *)a3 + 1) = v306 + 2;
      v285 = *v306;
      goto LABEL_274;
    case 5uLL:
      return (*(int (__fastcall **)(_BYTE *))(*(_QWORD *)v11 + 120LL))(v11);
    case 6uLL:
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
      (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v11 + 552LL))(v11, *v291);
      return 1;
    case 7uLL:
      if ( (unsigned int)*a3 > 0x2F )
        *((_QWORD *)a3 + 1) += 8LL;
      else
        *a3 += 8;
      return 1;
    case 8uLL:
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
    case 9uLL:
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
    case 0xAuLL:
      v211 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v326 = *((_DWORD ***)a3 + 1);
        v327 = v326 + 1;
        *((_QWORD *)a3 + 1) = v326 + 1;
        v214 = *v326;
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
            goto LABEL_177;
          }
          v217 = *((unsigned int **)a3 + 1);
LABEL_304:
          *((_QWORD *)a3 + 1) = v217 + 2;
LABEL_177:
          *v214 = (*(__int64 (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v11 + 136LL))(v11, v216, *v217);
          return 1;
        }
        v327 = *((_QWORD **)a3 + 1);
      }
      v217 = (unsigned int *)(v327 + 1);
      *((_QWORD *)a3 + 1) = v327 + 1;
      v216 = *v327;
      goto LABEL_304;
    case 0xBuLL:
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
    case 0xCuLL:
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
      if ( v159 == sub_DE50 )
        return 0;
      return ((int (__fastcall *)(_BYTE *, bool))v159)(v11, *v158 != 0);
    case 0xDuLL:
      v152 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v342 = *((_QWORD **)a3 + 1);
        v156 = (unsigned int *)(v342 + 1);
        *((_QWORD *)a3 + 1) = v342 + 1;
        v155 = *v342;
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
          goto LABEL_125;
        }
        v156 = *((unsigned int **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v156 + 2;
LABEL_125:
      (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v11 + 184LL))(v11, v155, *v156);
      return 1;
    case 0xEuLL:
      v147 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v341 = *((_DWORD **)a3 + 1);
        v151 = v341 + 2;
        *((_QWORD *)a3 + 1) = v341 + 2;
        v150 = *v341 != 0;
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
          goto LABEL_120;
        }
        v151 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v151 + 1;
LABEL_120:
      (*(void (__fastcall **)(_BYTE *, _QWORD, bool, _QWORD))(*(_QWORD *)v11 + 192LL))(v11, 0, v150, *v151);
      if ( v150 )
        sub_20BE0(v11);
      return 1;
    case 0xFuLL:
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
    case 0x10uLL:
      v292 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v293 = *((unsigned int **)a3 + 1);
        *((_QWORD *)a3 + 1) = v293 + 2;
      }
      else
      {
        v293 = (unsigned int *)(*((_QWORD *)a3 + 2) + v292);
        *a3 = v292 + 8;
      }
      return (*(int (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v11 + 208LL))(v11, *v293);
    case 0x11uLL:
      v220 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v304 = *((unsigned int **)a3 + 1);
        v224 = v304 + 2;
        *((_QWORD *)a3 + 1) = v304 + 2;
        v223 = *v304;
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
    case 0x12uLL:
      v136 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v335 = *((unsigned int **)a3 + 1);
        v336 = v335 + 2;
        *((_QWORD *)a3 + 1) = v335 + 2;
        v139 = *v335;
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
LABEL_318:
            *((_QWORD *)a3 + 1) = v144 + 1;
            return (*(int (__fastcall **)(_BYTE *, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 224LL))(
                     v11,
                     v139,
                     v141,
                     v143,
                     *v144);
          }
          v337 = *((__int64 **)a3 + 1);
LABEL_317:
          v144 = v337 + 1;
          *((_QWORD *)a3 + 1) = v337 + 1;
          v143 = *v337;
          goto LABEL_318;
        }
        v336 = *((_DWORD **)a3 + 1);
      }
      v337 = (__int64 *)(v336 + 2);
      *((_QWORD *)a3 + 1) = v336 + 2;
      v141 = *v336;
      goto LABEL_317;
    case 0x13uLL:
      v127 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v338 = *((unsigned int **)a3 + 1);
        v339 = v338 + 2;
        *((_QWORD *)a3 + 1) = v338 + 2;
        v130 = *v338;
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
LABEL_322:
            *((_QWORD *)a3 + 1) = v135 + 1;
            return (*(int (__fastcall **)(_BYTE *, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 232LL))(
                     v11,
                     v130,
                     v132,
                     v134,
                     *v135);
          }
          v340 = *((__int64 **)a3 + 1);
LABEL_321:
          v135 = v340 + 1;
          *((_QWORD *)a3 + 1) = v340 + 1;
          v134 = *v340;
          goto LABEL_322;
        }
        v339 = *((_DWORD **)a3 + 1);
      }
      v340 = (__int64 *)(v339 + 2);
      *((_QWORD *)a3 + 1) = v339 + 2;
      v132 = *v339;
      goto LABEL_321;
    case 0x14uLL:
      v271 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v373 = *((_QWORD **)a3 + 1);
        v374 = (unsigned int *)(v373 + 1);
        *((_QWORD *)a3 + 1) = v373 + 1;
        v274 = *v373;
      }
      else
      {
        v272 = *((_QWORD *)a3 + 2);
        v273 = v271 + 8;
        *a3 = v273;
        v274 = *(_QWORD *)(v272 + v271);
        if ( (unsigned int)v273 <= 0x2F )
        {
          v275 = v271 + 16;
          *a3 = v275;
          v276 = *(_DWORD *)(v272 + v273);
          if ( (unsigned int)v275 <= 0x2F )
          {
            v277 = v271 + 24;
            *a3 = v277;
            v278 = *(_DWORD *)(v272 + v275);
            if ( (unsigned int)v277 <= 0x2F )
            {
              v279 = (_QWORD *)(v277 + v272);
              *a3 = v271 + 32;
              return (*(int (__fastcall **)(_BYTE *, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v11 + 240LL))(
                       v11,
                       v274,
                       v276,
                       v278,
                       *v279);
            }
            v279 = *((_QWORD **)a3 + 1);
LABEL_377:
            *((_QWORD *)a3 + 1) = v279 + 1;
            return (*(int (__fastcall **)(_BYTE *, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v11 + 240LL))(
                     v11,
                     v274,
                     v276,
                     v278,
                     *v279);
          }
          v375 = *((_DWORD **)a3 + 1);
LABEL_376:
          v279 = v375 + 2;
          *((_QWORD *)a3 + 1) = v375 + 2;
          v278 = *v375;
          goto LABEL_377;
        }
        v374 = *((unsigned int **)a3 + 1);
      }
      v375 = v374 + 2;
      *((_QWORD *)a3 + 1) = v374 + 2;
      v276 = *v374;
      goto LABEL_376;
    case 0x15uLL:
      v266 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v308 = *((__int64 **)a3 + 1);
        v270 = v308 + 1;
        *((_QWORD *)a3 + 1) = v308 + 1;
        v269 = *v308;
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
          return (*(int (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v11 + 256LL))(v11, v269, *v270);
        }
        v270 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v270 + 1;
      return (*(int (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v11 + 256LL))(v11, v269, *v270);
    case 0x16uLL:
      v199 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v369 = *((_QWORD ***)a3 + 1);
        v370 = (__int64 *)(v369 + 1);
        *((_QWORD *)a3 + 1) = v369 + 1;
        v189 = *v369;
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
                goto LABEL_167;
              }
              v208 = *((_QWORD **)a3 + 1);
LABEL_373:
              *((_QWORD *)a3 + 1) = v208 + 1;
LABEL_167:
              v197 = (*(__int64 (__fastcall **)(_BYTE *, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 288LL))(
                       v11,
                       v203,
                       v205,
                       v207,
                       *v208);
              goto LABEL_157;
            }
            v372 = *((__int64 **)a3 + 1);
LABEL_372:
            v208 = v372 + 1;
            *((_QWORD *)a3 + 1) = v372 + 1;
            v207 = *v372;
            goto LABEL_373;
          }
          v371 = *((__int64 **)a3 + 1);
LABEL_371:
          v372 = v371 + 1;
          *((_QWORD *)a3 + 1) = v371 + 1;
          v205 = *v371;
          goto LABEL_372;
        }
        v370 = *((__int64 **)a3 + 1);
      }
      v371 = v370 + 1;
      *((_QWORD *)a3 + 1) = v370 + 1;
      v203 = *v370;
      goto LABEL_371;
    case 0x17uLL:
      v186 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v343 = *((_QWORD ***)a3 + 1);
        v344 = (__int64 *)(v343 + 1);
        *((_QWORD *)a3 + 1) = v343 + 1;
        v189 = *v343;
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
                goto LABEL_156;
              }
              v196 = *((_QWORD **)a3 + 1);
LABEL_332:
              *((_QWORD *)a3 + 1) = v196 + 1;
LABEL_156:
              v197 = (*(__int64 (__fastcall **)(_BYTE *, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 296LL))(
                       v11,
                       v191,
                       v193,
                       v195,
                       *v196);
LABEL_157:
              v198 = 0;
              if ( v197 >= 0 )
                v198 = v197;
              *v189 = v198;
              if ( v197 < 0 )
                return -5;
              return 1;
            }
            v346 = *((__int64 **)a3 + 1);
LABEL_331:
            v196 = v346 + 1;
            *((_QWORD *)a3 + 1) = v346 + 1;
            v195 = *v346;
            goto LABEL_332;
          }
          v345 = *((__int64 **)a3 + 1);
LABEL_330:
          v346 = v345 + 1;
          *((_QWORD *)a3 + 1) = v345 + 1;
          v193 = *v345;
          goto LABEL_331;
        }
        v344 = *((__int64 **)a3 + 1);
      }
      v345 = v344 + 1;
      *((_QWORD *)a3 + 1) = v344 + 1;
      v191 = *v344;
      goto LABEL_330;
    case 0x18uLL:
      v256 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v310 = *((_DWORD ***)a3 + 1);
        v311 = (unsigned int *)(v310 + 1);
        *((_QWORD *)a3 + 1) = v310 + 1;
        v259 = *v310;
      }
      else
      {
        v257 = *((_QWORD *)a3 + 2);
        v258 = v256 + 8;
        *a3 = v258;
        v259 = *(_DWORD **)(v257 + v256);
        if ( (unsigned int)v258 <= 0x2F )
        {
          v260 = v256 + 16;
          *a3 = v260;
          v261 = *(unsigned int *)(v257 + v258);
          if ( (unsigned int)v260 <= 0x2F )
          {
            v262 = v256 + 24;
            *a3 = v262;
            v263 = *(_QWORD *)(v257 + v260);
            if ( (unsigned int)v262 <= 0x2F )
            {
              v264 = (unsigned int *)(v262 + v257);
              *a3 = v256 + 32;
              goto LABEL_229;
            }
            v264 = *((unsigned int **)a3 + 1);
LABEL_283:
            *((_QWORD *)a3 + 1) = v264 + 2;
LABEL_229:
            v265 = *v264;
            if ( (_DWORD)v261 != 4 )
            {
              if ( (a1[154] & 0x40) == 0 )
              {
                if ( (v261 & 0xFFFFFFFD) == 1 || (_DWORD)v261 == 8 )
                {
                  if ( (_DWORD)v265 != 1 )
                  {
                    if ( (_DWORD)v261 == 8 || (((_DWORD)v265 - 2) & 0xFFFFFFFD) != 0 && (_DWORD)v265 != 8 )
                    {
                      *v259 = 5;
                      return 1;
                    }
                    if ( (v263 & ((int)v265 - 1)) != 0 )
                    {
                      *v259 = 3;
                      return 1;
                    }
                  }
                  goto LABEL_238;
                }
LABEL_387:
                *v259 = 2;
                return 1;
              }
              if ( !(_DWORD)v261 )
                goto LABEL_387;
            }
LABEL_238:
            *v259 = 0;
            *v259 = (*(__int64 (__fastcall **)(_BYTE *, __int64, __int64, __int64))(*(_QWORD *)v11 + 304LL))(
                      v11,
                      v261,
                      v263,
                      v265);
            return 1;
          }
          v312 = *((_QWORD **)a3 + 1);
LABEL_282:
          v264 = (unsigned int *)(v312 + 1);
          *((_QWORD *)a3 + 1) = v312 + 1;
          v263 = *v312;
          goto LABEL_283;
        }
        v311 = *((unsigned int **)a3 + 1);
      }
      v312 = v311 + 2;
      *((_QWORD *)a3 + 1) = v311 + 2;
      v261 = *v311;
      goto LABEL_282;
    case 0x19uLL:
      v247 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v364 = *((_DWORD ***)a3 + 1);
        v365 = (__int64 *)(v364 + 1);
        *((_QWORD *)a3 + 1) = v364 + 1;
        v250 = *v364;
      }
      else
      {
        v248 = *((_QWORD *)a3 + 2);
        v249 = v247 + 8;
        *a3 = v249;
        v250 = *(_DWORD **)(v248 + v247);
        if ( (unsigned int)v249 <= 0x2F )
        {
          v251 = v247 + 16;
          *a3 = v251;
          v252 = *(_QWORD *)(v248 + v249);
          if ( (unsigned int)v251 <= 0x2F )
          {
            v253 = v247 + 24;
            *a3 = v253;
            v254 = *(_DWORD *)(v248 + v251);
            if ( (unsigned int)v253 <= 0x2F )
            {
              *a3 = v247 + 32;
              v255 = *(_DWORD *)(v248 + v253);
              if ( v247 + 32 <= 0x2F )
              {
                *a3 = v247 + 40;
                return (int)sub_EE40(a1, v250, v252, v254, v255);
              }
              v368 = *((int **)a3 + 1);
LABEL_366:
              *((_QWORD *)a3 + 1) = v368 + 2;
              return (int)sub_EE40(a1, v250, v252, v254, v255);
            }
            v367 = *((int **)a3 + 1);
LABEL_365:
            v368 = v367 + 2;
            *((_QWORD *)a3 + 1) = v367 + 2;
            v255 = *v367;
            goto LABEL_366;
          }
          v366 = *((unsigned int **)a3 + 1);
LABEL_364:
          v367 = (int *)(v366 + 2);
          *((_QWORD *)a3 + 1) = v366 + 2;
          v254 = *v366;
          goto LABEL_365;
        }
        v365 = *((__int64 **)a3 + 1);
      }
      v366 = (unsigned int *)(v365 + 1);
      *((_QWORD *)a3 + 1) = v365 + 1;
      v252 = *v365;
      goto LABEL_364;
    case 0x1AuLL:
      v294 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v379 = *((__int64 **)a3 + 1);
        v380 = v379 + 1;
        *((_QWORD *)a3 + 1) = v379 + 1;
        v297 = *v379;
      }
      else
      {
        v295 = *((_QWORD *)a3 + 2);
        v296 = v294 + 8;
        *a3 = v296;
        v297 = *(_QWORD *)(v295 + v294);
        if ( (unsigned int)v296 <= 0x2F )
        {
          v298 = v294 + 16;
          *a3 = v298;
          v299 = *(_QWORD *)(v295 + v296);
          if ( (unsigned int)v298 <= 0x2F )
          {
            v300 = v294 + 24;
            *a3 = v300;
            v301 = *(_DWORD *)(v295 + v298);
            if ( (unsigned int)v300 <= 0x2F )
            {
              v302 = (_QWORD *)(v300 + v295);
              *a3 = v294 + 32;
              return (*(int (__fastcall **)(_BYTE *, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 352LL))(
                       v11,
                       v297,
                       v299,
                       v301,
                       *v302);
            }
            v302 = *((_QWORD **)a3 + 1);
LABEL_385:
            *((_QWORD *)a3 + 1) = v302 + 1;
            return (*(int (__fastcall **)(_BYTE *, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 352LL))(
                     v11,
                     v297,
                     v299,
                     v301,
                     *v302);
          }
          v381 = *((_DWORD **)a3 + 1);
LABEL_384:
          v302 = v381 + 2;
          *((_QWORD *)a3 + 1) = v381 + 2;
          v301 = *v381;
          goto LABEL_385;
        }
        v380 = *((_QWORD **)a3 + 1);
      }
      v381 = v380 + 1;
      *((_QWORD *)a3 + 1) = v380 + 1;
      v299 = *v380;
      goto LABEL_384;
    case 0x1BuLL:
      v79 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v362 = *((__int64 **)a3 + 1);
        v363 = v362 + 1;
        *((_QWORD *)a3 + 1) = v362 + 1;
        v82 = *v362;
      }
      else
      {
        v80 = *((_QWORD *)a3 + 2);
        v81 = v79 + 8;
        *a3 = v81;
        v82 = *(_QWORD *)(v80 + v79);
        if ( (unsigned int)v81 <= 0x2F )
        {
          v83 = v79 + 16;
          *a3 = v83;
          v84 = *(_QWORD *)(v80 + v81);
          if ( (unsigned int)v83 <= 0x2F )
          {
            v85 = (_DWORD *)(v83 + v80);
            *a3 = v79 + 24;
            goto LABEL_71;
          }
          v85 = *((_DWORD **)a3 + 1);
LABEL_358:
          *((_QWORD *)a3 + 1) = v85 + 2;
LABEL_71:
          v6 = -1;
          v86 = *(__int64 (**)())(*(_QWORD *)v11 + 368LL);
          if ( v86 != sub_DE60 )
            return ((int (__fastcall *)(_BYTE *, __int64, __int64, bool))v86)(v11, v82, v84, *v85 != 0);
          return v6;
        }
        v363 = *((_QWORD **)a3 + 1);
      }
      v85 = v363 + 1;
      *((_QWORD *)a3 + 1) = v363 + 1;
      v84 = *v363;
      goto LABEL_358;
    case 0x1CuLL:
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
      if ( v108 != nullsub_5 )
        ((void (__fastcall *)(_BYTE *, _QWORD))v108)(v11, *v107);
      return 1;
    case 0x1DuLL:
      v96 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v332 = *((_DWORD **)a3 + 1);
        v333 = (__int64 *)(v332 + 2);
        *((_QWORD *)a3 + 1) = v332 + 2;
        v99 = *v332;
LABEL_312:
        v334 = v333 + 1;
        *((_QWORD *)a3 + 1) = v333 + 1;
        v101 = *v333;
LABEL_313:
        v104 = v334 + 1;
        *((_QWORD *)a3 + 1) = v334 + 1;
        v103 = *v334;
        goto LABEL_314;
      }
      v97 = *((_QWORD *)a3 + 2);
      v98 = v96 + 8;
      *a3 = v98;
      v99 = *(_DWORD *)(v97 + v96);
      if ( (unsigned int)v98 > 0x2F )
      {
        v333 = *((__int64 **)a3 + 1);
        goto LABEL_312;
      }
      v100 = v96 + 16;
      *a3 = v100;
      v101 = *(_QWORD *)(v97 + v98);
      if ( (unsigned int)v100 > 0x2F )
      {
        v334 = *((__int64 **)a3 + 1);
        goto LABEL_313;
      }
      v102 = v96 + 24;
      *a3 = v102;
      v103 = *(_QWORD *)(v97 + v100);
      if ( (unsigned int)v102 <= 0x2F )
      {
        v104 = (_QWORD *)(v102 + v97);
        *a3 = v96 + 32;
        goto LABEL_84;
      }
      v104 = *((_QWORD **)a3 + 1);
LABEL_314:
      *((_QWORD *)a3 + 1) = v104 + 1;
LABEL_84:
      v6 = 0;
      v105 = *(__int64 (**)())(*(_QWORD *)v11 + 384LL);
      if ( v105 != sub_DE80 )
        return ((int (__fastcall *)(_BYTE *, _QWORD, __int64, __int64, _QWORD))v105)(v11, v99, v101, v103, *v104);
      return v6;
    case 0x1EuLL:
      v160 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v376 = *((_DWORD **)a3 + 1);
        v377 = (__int64 *)(v376 + 2);
        *((_QWORD *)a3 + 1) = v376 + 2;
        v99 = *v376;
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
              goto LABEL_135;
            }
            v104 = *((_QWORD **)a3 + 1);
LABEL_381:
            *((_QWORD *)a3 + 1) = v104 + 1;
LABEL_135:
            v6 = 0;
            v105 = *(__int64 (**)())(*(_QWORD *)v11 + 392LL);
            if ( v105 != sub_DE90 )
              return ((int (__fastcall *)(_BYTE *, _QWORD, __int64, __int64, _QWORD))v105)(v11, v99, v101, v103, *v104);
            return v6;
          }
          v378 = *((__int64 **)a3 + 1);
LABEL_380:
          v104 = v378 + 1;
          *((_QWORD *)a3 + 1) = v378 + 1;
          v103 = *v378;
          goto LABEL_381;
        }
        v377 = *((__int64 **)a3 + 1);
      }
      v378 = v377 + 1;
      *((_QWORD *)a3 + 1) = v377 + 1;
      v101 = *v377;
      goto LABEL_380;
    case 0x1FuLL:
      v87 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v328 = *((_QWORD ***)a3 + 1);
        v329 = (__int64 *)(v328 + 1);
        *((_QWORD *)a3 + 1) = v328 + 1;
        v90 = *v328;
      }
      else
      {
        v88 = *((_QWORD *)a3 + 2);
        v89 = v87 + 8;
        *a3 = v89;
        v90 = *(_QWORD **)(v88 + v87);
        if ( (unsigned int)v89 <= 0x2F )
        {
          v91 = v87 + 16;
          *a3 = v91;
          v92 = *(_QWORD *)(v88 + v89);
          if ( (unsigned int)v91 <= 0x2F )
          {
            v93 = v87 + 24;
            *a3 = v93;
            v94 = *(_QWORD *)(v88 + v91);
            if ( (unsigned int)v93 <= 0x2F )
            {
              v95 = (unsigned int *)(v93 + v88);
              *a3 = v87 + 32;
              goto LABEL_78;
            }
            v95 = *((unsigned int **)a3 + 1);
LABEL_308:
            *((_QWORD *)a3 + 1) = v95 + 2;
LABEL_78:
            *v90 = (*(__int64 (__fastcall **)(_BYTE *, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 248LL))(
                     v11,
                     v92,
                     v94,
                     *v95);
            return 1;
          }
          v330 = *((_QWORD **)a3 + 1);
LABEL_307:
          v95 = (unsigned int *)(v330 + 1);
          *((_QWORD *)a3 + 1) = v330 + 1;
          v94 = *v330;
          goto LABEL_308;
        }
        v329 = *((__int64 **)a3 + 1);
      }
      v330 = v329 + 1;
      *((_QWORD *)a3 + 1) = v329 + 1;
      v92 = *v329;
      goto LABEL_307;
    case 0x20uLL:
      v76 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v77 = *((_QWORD ***)a3 + 1);
        *((_QWORD *)a3 + 1) = v77 + 1;
      }
      else
      {
        v77 = (_QWORD **)(*((_QWORD *)a3 + 2) + v76);
        *a3 = v76 + 8;
      }
      v78 = *v77;
      *v78 = sub_1B440(v11);
      return 1;
    case 0x21uLL:
      v68 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v331 = *((_DWORD **)a3 + 1);
        v72 = v331 + 2;
        *((_QWORD *)a3 + 1) = v331 + 2;
        v71 = *v331;
      }
      else
      {
        v69 = *((_QWORD *)a3 + 2);
        v70 = v68 + 8;
        *a3 = v70;
        v71 = *(_DWORD *)(v69 + v68);
        if ( (unsigned int)v70 <= 0x2F )
        {
          v72 = (_QWORD *)(v70 + v69);
          *a3 = v68 + 16;
          goto LABEL_61;
        }
        v72 = *((_QWORD **)a3 + 1);
      }
      *((_QWORD *)a3 + 1) = v72 + 1;
LABEL_61:
      v73 = dbg;
      v74 = *(_QWORD *)(dbg + 32LL);
      if ( (v74 & 0x80000000000LL) == 0 )
        return 0;
      v75 = *(__int64 (**)())(*(_QWORD *)v11 + 416LL);
      if ( v75 == sub_DEA0 )
        goto LABEL_63;
      v388 = ((__int64 (__fastcall *)(_BYTE *, _QWORD, _QWORD))v75)(v11, v71, *v72);
      if ( (unsigned int)(v388 + 1) > 1 )
        return v388;
      v73 = dbg;
      v74 = *(_QWORD *)(dbg + 32LL);
LABEL_63:
      *(_QWORD *)(v73 + 32) = v74 & 0xFFFFF7FFFFFFFFFFLL;
      return 0;
    case 0x22uLL:
      if ( (a1[157] & 0x10) == 0 )
        return 0;
      v111 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v382 = *((_QWORD ***)a3 + 1);
        *((_QWORD *)a3 + 1) = v382 + 1;
        v114 = *v382;
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
                  goto LABEL_101;
                }
                *a3 = v120;
LABEL_393:
                v386 = *((__int64 **)a3 + 1);
                *((_QWORD *)a3 + 1) = v386 + 1;
                v121 = *v386;
LABEL_101:
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
LABEL_392:
              *((_QWORD *)a3 + 1) += 8LL;
              goto LABEL_393;
            }
LABEL_391:
            v385 = *((__int64 **)a3 + 1);
            *((_QWORD *)a3 + 1) = v385 + 1;
            v119 = *v385;
            goto LABEL_392;
          }
LABEL_390:
          v384 = *((unsigned int **)a3 + 1);
          *((_QWORD *)a3 + 1) = v384 + 2;
          v118 = *v384;
          goto LABEL_391;
        }
      }
      v383 = *((__int64 **)a3 + 1);
      *((_QWORD *)a3 + 1) = v383 + 1;
      v116 = *v383;
      goto LABEL_390;
    case 0x23uLL:
      if ( (a1[157] & 0x10) == 0 )
        return 0;
      v66 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v67 = *((unsigned int **)a3 + 1);
        *((_QWORD *)a3 + 1) = v67 + 2;
      }
      else
      {
        v67 = (unsigned int *)(*((_QWORD *)a3 + 2) + v66);
        *a3 = v66 + 8;
      }
      return (*(int (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v11 + 432LL))(v11, *v67);
    case 0x24uLL:
      v51 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v353 = *((_DWORD **)a3 + 1);
        v354 = (__int64 *)(v353 + 2);
        *((_QWORD *)a3 + 1) = v353 + 2;
        v54 = *v353;
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
          v56 = *(_QWORD *)(v52 + v53);
          if ( (unsigned int)v55 <= 0x2F )
          {
            v57 = (_QWORD *)(v55 + v52);
            *a3 = v51 + 24;
            return (*(int (__fastcall **)(_BYTE *, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 360LL))(
                     v11,
                     v54,
                     v56,
                     *v57);
          }
          v57 = *((_QWORD **)a3 + 1);
LABEL_345:
          *((_QWORD *)a3 + 1) = v57 + 1;
          return (*(int (__fastcall **)(_BYTE *, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 360LL))(v11, v54, v56, *v57);
        }
        v354 = *((__int64 **)a3 + 1);
      }
      v57 = v354 + 1;
      *((_QWORD *)a3 + 1) = v354 + 1;
      v56 = *v354;
      goto LABEL_345;
    case 0x25uLL:
      v40 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v347 = *((_DWORD **)a3 + 1);
        v348 = (__int64 *)(v347 + 2);
        *((_QWORD *)a3 + 1) = v347 + 2;
        v43 = *v347;
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
                return (*(int (__fastcall **)(_BYTE *, _QWORD, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 400LL))(
                         v11,
                         v43,
                         v45,
                         v47,
                         v49,
                         *v50);
              }
              v50 = *((_QWORD **)a3 + 1);
LABEL_337:
              *((_QWORD *)a3 + 1) = v50 + 1;
              return (*(int (__fastcall **)(_BYTE *, _QWORD, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 400LL))(
                       v11,
                       v43,
                       v45,
                       v47,
                       v49,
                       *v50);
            }
            v350 = *((__int64 **)a3 + 1);
LABEL_336:
            v50 = v350 + 1;
            *((_QWORD *)a3 + 1) = v350 + 1;
            v49 = *v350;
            goto LABEL_337;
          }
          v349 = *((__int64 **)a3 + 1);
LABEL_335:
          v350 = v349 + 1;
          *((_QWORD *)a3 + 1) = v349 + 1;
          v47 = *v349;
          goto LABEL_336;
        }
        v348 = *((__int64 **)a3 + 1);
      }
      v349 = v348 + 1;
      *((_QWORD *)a3 + 1) = v348 + 1;
      v45 = *v348;
      goto LABEL_335;
    case 0x26uLL:
      v58 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v360 = *((unsigned int **)a3 + 1);
        v361 = v360 + 2;
        *((_QWORD *)a3 + 1) = v360 + 2;
        v61 = *v360;
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
          v63 = *(_DWORD *)(v59 + v60) != 0;
          if ( (unsigned int)v62 <= 0x2F )
          {
            v64 = (unsigned int *)(v62 + v59);
            *a3 = v58 + 24;
            goto LABEL_52;
          }
          v64 = *((unsigned int **)a3 + 1);
LABEL_354:
          *((_QWORD *)a3 + 1) = v64 + 2;
LABEL_52:
          v65 = *(__int64 (**)())(*(_QWORD *)v11 + 520LL);
          if ( v65 != sub_DEB0 )
            return ((unsigned __int8 (__fastcall *)(_BYTE *, _QWORD, bool, _QWORD))v65)(v11, v61, v63, *v64);
          return 0;
        }
        v361 = *((_DWORD **)a3 + 1);
      }
      v64 = v361 + 2;
      *((_QWORD *)a3 + 1) = v361 + 2;
      v63 = *v361 != 0;
      goto LABEL_354;
    case 0x27uLL:
      v34 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v352 = *((unsigned int **)a3 + 1);
        v38 = v352 + 2;
        *((_QWORD *)a3 + 1) = v352 + 2;
        v37 = *v352;
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
      if ( v39 == sub_DEC0 )
        return 0;
      return ((unsigned __int8 (__fastcall *)(_BYTE *, _QWORD, _QWORD))v39)(v11, v37, *v38);
    case 0x28uLL:
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
    case 0x29uLL:
      v26 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v351 = *((__int64 **)a3 + 1);
        v30 = v351 + 1;
        *((_QWORD *)a3 + 1) = v351 + 1;
        v29 = *v351;
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
      if ( v31 == sub_DED0 )
        return 0;
      return ((unsigned __int8 (__fastcall *)(_BYTE *, __int64, _QWORD))v31)(v11, v29, *v30);
    case 0x2AuLL:
      v13 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v355 = *((__int64 **)a3 + 1);
        v356 = v355 + 1;
        *((_QWORD *)a3 + 1) = v355 + 1;
        v16 = *v355;
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
LABEL_351:
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
                    sub_E960((__int64)"debugger_t::ev_bin_search(%a, %a) -> %d(%s) ea %a\n", a4, a5, v18, v20, a6);
                  return v6;
                }
                return 0;
              }
              v359 = *((unsigned int **)a3 + 1);
LABEL_350:
              v25 = v359 + 2;
              *((_QWORD *)a3 + 1) = v359 + 2;
              v24 = *v359;
              goto LABEL_351;
            }
            v358 = *((_QWORD **)a3 + 1);
LABEL_349:
            v359 = (unsigned int *)(v358 + 1);
            *((_QWORD *)a3 + 1) = v358 + 1;
            v22 = *v358;
            goto LABEL_350;
          }
          v357 = *((const char ***)a3 + 1);
LABEL_348:
          v358 = v357 + 1;
          *((_QWORD *)a3 + 1) = v357 + 1;
          v20 = *v357;
          goto LABEL_349;
        }
        v356 = *((_QWORD **)a3 + 1);
      }
      v357 = (const char **)(v356 + 1);
      *((_QWORD *)a3 + 1) = v356 + 1;
      v18 = *v356;
      goto LABEL_348;
    case 0x2BuLL:
      if ( !a1[208] )
        return 0;
      if ( (unsigned int)*a3 > 0x2F )
        *((_QWORD *)a3 + 1) += 8LL;
      else
        *a3 += 8;
      v12 = *(__int64 (**)())(*(_QWORD *)v11 + 584LL);
      if ( v12 == sub_DEF0 || (v387 = v12(), v387 >= 0) )
      {
        serialize_dynamic_register_set();
        deserialize_dynamic_register_set();
        return 1;
      }
      return v387;
    case 0x2CuLL:
      v225 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v316 = *((_QWORD ***)a3 + 1);
        v317 = v316 + 1;
        *((_QWORD *)a3 + 1) = v316 + 1;
        v228 = *v316;
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
                goto LABEL_191;
              }
              v234 = *((__int64 **)a3 + 1);
LABEL_294:
              *((_QWORD *)a3 + 1) = v234 + 1;
LABEL_191:
              v235 = *v234;
              if ( (*(_DWORD *)debug & 0x10000) != 0 )
                sub_E960((__int64)"debugger_t::ev_set_dbg_options(%s)\n", (const char *)v230);
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
                sub_F970((__int64)a1, a1[208]);
                return 1;
              }
              return v6;
            }
            v319 = *((_DWORD **)a3 + 1);
LABEL_293:
            v234 = (__int64 *)(v319 + 2);
            *((_QWORD *)a3 + 1) = v319 + 2;
            v233 = *v319;
            goto LABEL_294;
          }
          v318 = *((unsigned int **)a3 + 1);
LABEL_292:
          v319 = v318 + 2;
          *((_QWORD *)a3 + 1) = v318 + 2;
          v390 = *v318;
          goto LABEL_293;
        }
        v317 = *((_QWORD **)a3 + 1);
      }
      v318 = (unsigned int *)(v317 + 1);
      *((_QWORD *)a3 + 1) = v317 + 1;
      v230 = *v317;
      goto LABEL_292;
    default:
      return 0;
  }
}

