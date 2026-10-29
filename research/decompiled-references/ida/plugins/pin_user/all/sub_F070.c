__int64 __fastcall sub_F070(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        double a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // r15
  int v10; // ecx
  __int64 (*v13)(void); // rax
  __int64 v14; // rdi
  unsigned int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 *v18; // r12
  __int64 v19; // rsi
  __int64 v20; // r13
  __int64 v21; // rdi
  __int64 v22; // rsi
  unsigned int v23; // r14d
  __int64 *v24; // rax
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 (*v27)(); // rax
  unsigned int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // r13
  __int64 v32; // r8
  __int64 v33; // rbx
  __int64 v34; // rsi
  const char *v35; // r12
  __int64 v36; // r9
  __int64 v37; // r8
  __int64 v38; // rsi
  __int64 v39; // r9
  _QWORD *v40; // rax
  unsigned int v41; // ecx
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // r8
  _QWORD *v45; // rax
  __int64 (*v46)(); // rcx
  unsigned int v47; // eax
  _QWORD *v48; // rcx
  unsigned int v49; // ecx
  __int64 v50; // rax
  __int64 v51; // rsi
  unsigned int v52; // r8d
  unsigned int *v53; // rax
  unsigned int v54; // ecx
  __int64 v55; // rax
  __int64 v56; // rsi
  unsigned int v57; // r9d
  __int64 v58; // r8
  bool v59; // si
  unsigned int *v60; // rax
  unsigned int v61; // ecx
  __int64 v62; // rax
  __int64 v63; // r8
  unsigned int v64; // r10d
  __int64 v65; // rsi
  __int64 v66; // r11
  __int64 v67; // r8
  __int64 v68; // rbx
  __int64 v69; // rsi
  __int64 v70; // r8
  _QWORD *v71; // rax
  __int64 (*v72)(); // r14
  unsigned int v73; // ecx
  unsigned int *v74; // rax
  unsigned int v75; // eax
  unsigned int *v76; // rcx
  void (*v77)(); // rax
  unsigned int v78; // ecx
  __int64 v79; // rax
  __int64 v80; // rsi
  unsigned int v81; // r9d
  _QWORD *v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 (*v85)(); // r8
  unsigned int v86; // eax
  _DWORD *v87; // rcx
  __int64 (*v88)(); // rax
  unsigned int v89; // ecx
  __int64 v90; // rax
  __int64 v91; // r8
  _DWORD *v92; // rbx
  __int64 v93; // rsi
  __int64 v94; // r8
  unsigned int *v95; // rax
  unsigned int v96; // eax
  _QWORD *v97; // rcx
  unsigned int v98; // eax
  __int64 v99; // rsi
  __int64 v100; // rcx
  _QWORD *v101; // rbx
  __int64 v102; // r8
  __int64 v103; // r10
  __int64 v104; // rcx
  unsigned int v105; // r11d
  __int64 v106; // r14
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 *v109; // rax
  __int64 v110; // r9
  __int64 v111; // rcx
  __int64 v112; // rsi
  __int64 v113; // r12
  unsigned int v114; // ecx
  __int64 v115; // rax
  __int64 v116; // rsi
  __int64 v117; // r9
  __int64 v118; // r8
  unsigned int v119; // r10d
  __int64 v120; // rsi
  unsigned int v121; // ebx
  _QWORD *v122; // rax
  unsigned int v123; // ecx
  __int64 v124; // rax
  __int64 v125; // rsi
  unsigned int v126; // r9d
  __int64 v127; // r8
  unsigned int v128; // r10d
  __int64 v129; // rsi
  __int64 v130; // rbx
  _QWORD *v131; // rax
  unsigned int v132; // eax
  unsigned int *v133; // rcx
  unsigned int v134; // eax
  unsigned int *v135; // rcx
  unsigned int v136; // ecx
  __int64 v137; // rax
  __int64 v138; // rsi
  bool v139; // bl
  _QWORD *v140; // rax
  unsigned int v141; // ecx
  __int64 v142; // rax
  __int64 v143; // rsi
  __int64 v144; // r8
  unsigned int *v145; // rax
  unsigned int v146; // ecx
  __int64 v147; // rax
  __int64 v148; // r8
  unsigned int v149; // r9d
  __int64 v150; // rsi
  __int64 v151; // r8
  _QWORD *v152; // rax
  unsigned int v153; // ecx
  __int64 v154; // rax
  __int64 v155; // rsi
  unsigned int v156; // r9d
  __int64 v157; // r8
  unsigned int v158; // r10d
  __int64 v159; // rsi
  unsigned int v160; // r14d
  _QWORD *v161; // rax
  int v162; // eax
  unsigned int v163; // ecx
  __int64 v164; // rax
  __int64 v165; // rsi
  unsigned int v166; // r9d
  __int64 v167; // r8
  __int64 v168; // r10
  __int64 v169; // rsi
  __int64 v170; // rbx
  _QWORD *v171; // rax
  __int64 (*v172)(); // r11
  unsigned int v173; // ecx
  __int64 v174; // rax
  __int64 v175; // rsi
  __int64 v176; // r8
  __int64 v177; // rsi
  unsigned int v178; // ecx
  __int64 v179; // rax
  __int64 v180; // rsi
  __int64 *v181; // rbx
  __int64 v182; // r9
  __int64 v183; // rsi
  __int64 v184; // r8
  __int64 v185; // r9
  unsigned int *v186; // rax
  __int64 (__fastcall *v187)(__int64, __int64); // r8
  unsigned int v188; // ecx
  __int64 v189; // rax
  __int64 v190; // rsi
  _DWORD *v191; // r14
  __int64 v192; // r9
  __int64 v193; // rsi
  __int64 v194; // r8
  __int64 v195; // r9
  unsigned int *v196; // rax
  __int64 v197; // rcx
  unsigned int v198; // ecx
  __int64 v199; // rax
  __int64 v200; // rsi
  __int64 v201; // r9
  __int64 v202; // r8
  __int64 v203; // r10
  __int64 v204; // rsi
  unsigned int v205; // ebx
  _QWORD *v206; // rax
  unsigned int v207; // ecx
  __int64 v208; // rax
  __int64 v209; // rdi
  _DWORD *v210; // r10
  __int64 v211; // rsi
  __int64 v212; // r11
  __int64 v213; // rdi
  unsigned int v214; // r14d
  int v215; // r8d
  unsigned int v216; // ecx
  __int64 v217; // rax
  __int64 v218; // r8
  __int64 v219; // r9
  __int64 v220; // rsi
  __int64 v221; // r10
  _DWORD *v222; // rax
  __int64 (*v223)(); // r8
  unsigned int v224; // eax
  _QWORD *v225; // rcx
  unsigned int v226; // eax
  _QWORD *v227; // rcx
  unsigned int v228; // ecx
  __int64 v229; // rax
  __int64 v230; // rsi
  unsigned int v231; // r9d
  __int64 v232; // r8
  unsigned int v233; // r10d
  __int64 v234; // rsi
  __int64 v235; // rbx
  _QWORD *v236; // rax
  unsigned int v237; // ecx
  __int64 v238; // rax
  __int64 v239; // rsi
  unsigned int v240; // r8d
  unsigned int *v241; // rax
  unsigned int v242; // ecx
  __int64 v243; // rax
  __int64 v244; // r8
  __int64 *v245; // rbx
  __int64 v246; // rsi
  __int64 v247; // r9
  __int64 v248; // r8
  __int64 v249; // r10
  __int64 v250; // rsi
  __int64 v251; // r14
  _QWORD *v252; // rax
  __int64 v253; // rax
  __int64 v254; // rdx
  unsigned int v255; // ecx
  __int64 v256; // rax
  __int64 v257; // rsi
  __int64 v258; // r8
  _QWORD *v259; // rax
  unsigned int v260; // ecx
  __int64 v261; // rax
  __int64 v262; // rsi
  __int64 v263; // rdi
  unsigned int v264; // r12d
  __int64 v265; // rsi
  __int64 v266; // r13
  __int64 *v267; // rax
  __int64 v268; // r14
  const char *v269; // rsi
  unsigned int v270; // ecx
  __int64 v271; // rax
  __int64 v272; // rsi
  __int64 v273; // r8
  _QWORD *v274; // rax
  const char *v275; // rsi
  unsigned int v276; // ecx
  __int64 v277; // rax
  __int64 v278; // r8
  __int64 v279; // rsi
  __int64 v280; // r9
  __int64 v281; // r8
  __int64 v282; // r10
  __int64 v283; // rsi
  __int64 v284; // r14
  _QWORD *v285; // rax
  unsigned int v286; // eax
  _QWORD *v287; // rcx
  unsigned int v288; // eax
  __int64 *v289; // rcx
  unsigned int v290; // eax
  __int64 v291; // rcx
  __int64 v292; // rsi
  __int64 v293; // r11
  __int64 v294; // r8
  __int64 v295; // r14
  __int64 v296; // rsi
  __int64 v297; // r8
  __int64 v298; // r10
  __int64 v299; // r9
  __int64 v300; // rsi
  __int64 v301; // r10
  __int64 *v302; // rax
  __int64 v303; // rsi
  __int64 v304; // r12
  int v305; // eax
  __int64 v306; // rax
  __int64 *v307; // rax
  _QWORD *v308; // rcx
  unsigned int *v309; // rcx
  _DWORD *v310; // rax
  __int64 *v311; // rcx
  const char **v312; // rcx
  unsigned int *v313; // rax
  __int64 *v314; // rcx
  _QWORD **v315; // rax
  __int64 *v316; // rcx
  __int64 *v317; // rax
  __int64 *v318; // rcx
  unsigned int *v319; // rcx
  _DWORD *v320; // rax
  __int64 *v321; // rcx
  _DWORD **v322; // rcx
  unsigned int *v323; // rax
  _QWORD *v324; // rcx
  __int64 *v325; // rcx
  _QWORD *v326; // rax
  _DWORD *v327; // rcx
  _DWORD *v328; // rcx
  __int64 *v329; // rax
  __int64 *v330; // rcx
  _DWORD **v331; // rax
  _QWORD *v332; // rcx
  unsigned int *v333; // rcx
  _QWORD *v334; // rcx
  unsigned int *v335; // rax
  _DWORD *v336; // rcx
  unsigned int *v337; // rcx
  _DWORD *v338; // rax
  __int64 *v339; // rcx
  _DWORD *v340; // rcx
  _DWORD *v341; // rcx
  __int64 *v342; // rax
  __int64 *v343; // rcx
  _DWORD **v344; // rax
  __int64 *v345; // rcx
  unsigned int *v346; // rax
  int *v347; // rcx
  int *v348; // rax
  __int64 *v349; // rcx
  _QWORD *v350; // rax
  const char **v351; // rcx
  _QWORD *v352; // rax
  unsigned int *v353; // rcx
  _QWORD **v354; // rax
  _QWORD *v355; // rcx
  unsigned int *v356; // rax
  _DWORD *v357; // rcx
  _DWORD *v358; // rax
  __int64 *v359; // rcx
  __int64 *v360; // rax
  __int64 *v361; // rcx
  __int64 *v362; // rcx
  unsigned int *v363; // rax
  _DWORD *v364; // rcx
  _QWORD *v365; // rcx
  unsigned int *v366; // rcx
  unsigned int *v367; // rax
  _DWORD *v368; // rcx
  __int64 *v369; // rcx
  _QWORD **v370; // rcx
  __int64 *v371; // rax
  _QWORD *v372; // rcx
  _DWORD *v373; // rcx
  _QWORD **v374; // rax
  __int64 *v375; // rcx
  __int64 *v376; // rax
  __int64 *v377; // rcx
  __int64 *v378; // rcx
  __int64 *v379; // rax
  __int64 *v380; // rcx
  _QWORD *v381; // rax
  unsigned int *v382; // rcx
  _QWORD *v383; // rax
  unsigned int *v384; // rcx
  _QWORD **v385; // rax
  __int64 *v386; // rax
  unsigned int *v387; // rax
  __int64 *v388; // rax
  __int64 *v389; // rax
  int v390; // ebx
  int v391; // eax
  __int64 v392; // [rsp+0h] [rbp-80h]
  __int64 v393; // [rsp+8h] [rbp-78h]
  __int64 v394; // [rsp+10h] [rbp-70h]
  __int64 v395; // [rsp+18h] [rbp-68h]
  unsigned int v396; // [rsp+18h] [rbp-68h]
  const char *v397; // [rsp+18h] [rbp-68h]
  const char *v398; // [rsp+30h] [rbp-50h] BYREF
  __int128 v399; // [rsp+38h] [rbp-48h]
  unsigned __int64 v400; // [rsp+48h] [rbp-38h]

  v9 = 0;
  v10 = *(_DWORD *)(a1 + 136);
  v400 = __readfsqword(0x28u);
  if ( *(_DWORD *)(dbg + 16LL) != v10 || *(_QWORD *)(dbg + 32LL) != *(_QWORD *)(a1 + 152) )
    return v9;
  v13 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
  if ( (char *)v13 == (char *)sub_B400 )
  {
    v14 = a1 + 224;
  }
  else
  {
    v394 = a3;
    v395 = a2;
    v306 = v13();
    a3 = v394;
    v14 = v306;
  }
  switch ( a2 )
  {
    case 0LL:
      v260 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v312 = *(const char ***)(a3 + 8);
        v313 = (unsigned int *)(v312 + 1);
        *(_QWORD *)(a3 + 8) = v312 + 1;
        v397 = *v312;
      }
      else
      {
        v261 = *(_QWORD *)(a3 + 16);
        v262 = v260 + 8;
        *(_DWORD *)a3 = v262;
        v397 = *(const char **)(v261 + v260);
        if ( (unsigned int)v262 <= 0x2F )
        {
          v263 = v260 + 16;
          *(_DWORD *)a3 = v263;
          v264 = *(_DWORD *)(v261 + v262);
          if ( (unsigned int)v263 <= 0x2F )
          {
            v265 = v260 + 24;
            *(_DWORD *)a3 = v265;
            v266 = *(_QWORD *)(v261 + v263);
            if ( (unsigned int)v265 <= 0x2F )
            {
              v267 = (__int64 *)(v265 + v261);
              *(_DWORD *)a3 = v260 + 32;
              goto LABEL_229;
            }
            while ( 1 )
            {
              v267 = *(__int64 **)(a3 + 8);
LABEL_282:
              *(_QWORD *)(a3 + 8) = v267 + 1;
LABEL_229:
              v268 = *v267;
              if ( *v267 )
                break;
              if ( under_debugger )
                BUG();
              interr();
            }
            if ( (*(_DWORD *)debug & 0x10000) != 0 )
            {
              v398 = nullptr;
              v399 = 0;
              get_dbctx_id();
              sub_E3C0((__int64 *)&v398);
              v269 = s;
              if ( (_QWORD)v399 )
                v269 = v398;
              sub_BC00((__int64)"%s: debugger_t::ev_init_debugger (%s,%d,)\n", v269, v397, v264);
              if ( v398 )
              {
                *(_QWORD *)&v399 = 0;
                qfree();
              }
            }
            return (int)sub_EA60(a1, (__int64)v397, v264, v266, v268);
          }
          v314 = *(__int64 **)(a3 + 8);
LABEL_281:
          v267 = v314 + 1;
          *(_QWORD *)(a3 + 8) = v314 + 1;
          v266 = *v314;
          goto LABEL_282;
        }
        v313 = *(unsigned int **)(a3 + 8);
      }
      v314 = (__int64 *)(v313 + 2);
      *(_QWORD *)(a3 + 8) = v313 + 2;
      v264 = *v313;
      goto LABEL_281;
    case 1LL:
      if ( (*(_DWORD *)debug & 0x10000) != 0 )
      {
        v398 = nullptr;
        v399 = 0;
        get_dbctx_id();
        sub_E3C0((__int64 *)&v398);
        v275 = s;
        if ( (_QWORD)v399 )
          v275 = v398;
        sub_BC00((__int64)"%s: debugger_t::ev_term_debugger\n", v275);
        if ( v398 )
        {
          *(_QWORD *)&v399 = 0;
          qfree();
        }
      }
      return (int)sub_E290((__int64 *)a1);
    case 2LL:
      v270 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v369 = *(__int64 **)(a3 + 8);
        v274 = v369 + 1;
        *(_QWORD *)(a3 + 8) = v369 + 1;
        v273 = *v369;
      }
      else
      {
        v271 = *(_QWORD *)(a3 + 16);
        v272 = v270 + 8;
        *(_DWORD *)a3 = v272;
        v273 = *(_QWORD *)(v271 + v270);
        if ( (unsigned int)v272 <= 0x2F )
        {
          v274 = (_QWORD *)(v272 + v271);
          *(_DWORD *)a3 = v270 + 16;
          return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v14 + 72LL))(v14, v273, *v274);
        }
        v274 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v274 + 1;
      return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v14 + 72LL))(v14, v273, *v274);
    case 3LL:
      v290 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v379 = *(__int64 **)(a3 + 8);
        v380 = v379 + 1;
        *(_QWORD *)(a3 + 8) = v379 + 1;
        v293 = *v379;
      }
      else
      {
        v291 = *(_QWORD *)(a3 + 16);
        v292 = v290 + 8;
        *(_DWORD *)a3 = v292;
        v293 = *(_QWORD *)(v291 + v290);
        if ( (unsigned int)v292 <= 0x2F )
        {
          v294 = v290 + 16;
          *(_DWORD *)a3 = v294;
          v295 = *(_QWORD *)(v291 + v292);
          if ( (unsigned int)v294 <= 0x2F )
          {
            v296 = v290 + 24;
            *(_DWORD *)a3 = v296;
            v297 = *(_QWORD *)(v291 + v294);
            if ( (unsigned int)v296 <= 0x2F )
            {
              v298 = v290 + 32;
              *(_DWORD *)a3 = v298;
              v299 = *(unsigned int *)(v291 + v296);
              if ( (unsigned int)v298 <= 0x2F )
              {
                v300 = v290 + 40;
                *(_DWORD *)a3 = v300;
                v301 = *(_QWORD *)(v291 + v298);
                if ( (unsigned int)v300 <= 0x2F )
                {
                  *(_DWORD *)a3 = v290 + 48;
                  v302 = *(__int64 **)(a3 + 8);
                  v303 = *(unsigned int *)(v291 + v300);
                  goto LABEL_266;
                }
                v384 = *(unsigned int **)(a3 + 8);
LABEL_383:
                v302 = (__int64 *)(v384 + 2);
                *(_QWORD *)(a3 + 8) = v384 + 2;
                v303 = *v384;
LABEL_266:
                *(_QWORD *)(a3 + 8) = v302 + 1;
                v304 = *v302;
                *(_QWORD *)(a3 + 8) = v302 + 2;
                v305 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v14 + 128LL))(
                         v14,
                         v293,
                         v295,
                         v302[1],
                         v297,
                         v299,
                         v301,
                         v303,
                         v304);
                v9 = v305;
                if ( v305 > 0 )
                  goto LABEL_135;
                return v9;
              }
              v383 = *(_QWORD **)(a3 + 8);
LABEL_382:
              v384 = (unsigned int *)(v383 + 1);
              *(_QWORD *)(a3 + 8) = v383 + 1;
              v301 = *v383;
              goto LABEL_383;
            }
            v382 = *(unsigned int **)(a3 + 8);
LABEL_381:
            v383 = v382 + 2;
            *(_QWORD *)(a3 + 8) = v382 + 2;
            v299 = *v382;
            goto LABEL_382;
          }
          v381 = *(_QWORD **)(a3 + 8);
LABEL_380:
          v382 = (unsigned int *)(v381 + 1);
          *(_QWORD *)(a3 + 8) = v381 + 1;
          v297 = *v381;
          goto LABEL_381;
        }
        v380 = *(__int64 **)(a3 + 8);
      }
      v381 = v380 + 1;
      *(_QWORD *)(a3 + 8) = v380 + 1;
      v295 = *v380;
      goto LABEL_380;
    case 4LL:
      v153 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v366 = *(unsigned int **)(a3 + 8);
        v367 = v366 + 2;
        *(_QWORD *)(a3 + 8) = v366 + 2;
        v156 = *v366;
      }
      else
      {
        v154 = *(_QWORD *)(a3 + 16);
        v155 = v153 + 8;
        *(_DWORD *)a3 = v155;
        v156 = *(_DWORD *)(v154 + v153);
        if ( (unsigned int)v155 <= 0x2F )
        {
          v157 = v153 + 16;
          *(_DWORD *)a3 = v157;
          v158 = *(_DWORD *)(v154 + v155);
          if ( (unsigned int)v157 <= 0x2F )
          {
            v159 = v153 + 24;
            *(_DWORD *)a3 = v159;
            v160 = *(_DWORD *)(v154 + v157);
            if ( (unsigned int)v159 <= 0x2F )
            {
              v161 = (_QWORD *)(v159 + v154);
              *(_DWORD *)a3 = v153 + 32;
              goto LABEL_134;
            }
            v161 = *(_QWORD **)(a3 + 8);
LABEL_360:
            *(_QWORD *)(a3 + 8) = v161 + 1;
LABEL_134:
            v162 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v14 + 144LL))(
                     v14,
                     v156,
                     v158,
                     v160,
                     *v161);
            v9 = v162;
            if ( v162 > 0 )
LABEL_135:
              sub_E700(a1, 1);
            return v9;
          }
          v368 = *(_DWORD **)(a3 + 8);
LABEL_359:
          v161 = v368 + 2;
          *(_QWORD *)(a3 + 8) = v368 + 2;
          v160 = *v368;
          goto LABEL_360;
        }
        v367 = *(unsigned int **)(a3 + 8);
      }
      v368 = v367 + 2;
      *(_QWORD *)(a3 + 8) = v367 + 2;
      v158 = *v367;
      goto LABEL_359;
    case 5LL:
      return (*(int (__fastcall **)(__int64))(*(_QWORD *)v14 + 120LL))(v14);
    case 6LL:
      v226 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v227 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v227 + 1;
      }
      else
      {
        v227 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v226);
        *(_DWORD *)a3 = v226 + 8;
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 552LL))(v14, *v227);
      return 1;
    case 7LL:
      v288 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v289 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v289 + 1;
      }
      else
      {
        v289 = (__int64 *)(*(_QWORD *)(a3 + 16) + v288);
        *(_DWORD *)a3 = v288 + 8;
      }
      sub_DE20(*v289, a4, a2, a3, (__int64)v289, a8, a9, v392, v393, v394, v395);
      return 1;
    case 8LL:
      v224 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v225 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v225 + 1;
      }
      else
      {
        v225 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v224);
        *(_DWORD *)a3 = v224 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 152LL))(v14, *v225);
    case 9LL:
      v96 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v97 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v97 + 1;
      }
      else
      {
        v97 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v96);
        *(_DWORD *)a3 = v96 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 160LL))(v14, *v97);
    case 10LL:
      v89 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v331 = *(_DWORD ***)(a3 + 8);
        v332 = v331 + 1;
        *(_QWORD *)(a3 + 8) = v331 + 1;
        v92 = *v331;
      }
      else
      {
        v90 = *(_QWORD *)(a3 + 16);
        v91 = v89 + 8;
        *(_DWORD *)a3 = v91;
        v92 = *(_DWORD **)(v90 + v89);
        if ( (unsigned int)v91 <= 0x2F )
        {
          v93 = v89 + 16;
          *(_DWORD *)a3 = v93;
          v94 = *(_QWORD *)(v90 + v91);
          if ( (unsigned int)v93 <= 0x2F )
          {
            v95 = (unsigned int *)(v93 + v90);
            *(_DWORD *)a3 = v89 + 24;
            goto LABEL_84;
          }
          v95 = *(unsigned int **)(a3 + 8);
LABEL_308:
          *(_QWORD *)(a3 + 8) = v95 + 2;
LABEL_84:
          *v92 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v14 + 136LL))(v14, v94, *v95);
          return 1;
        }
        v332 = *(_QWORD **)(a3 + 8);
      }
      v95 = (unsigned int *)(v332 + 1);
      *(_QWORD *)(a3 + 8) = v332 + 1;
      v94 = *v332;
      goto LABEL_308;
    case 11LL:
      v286 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v287 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v287 + 1;
      }
      else
      {
        v287 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v286);
        *(_DWORD *)a3 = v286 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 168LL))(v14, *v287);
    case 12LL:
      v86 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v87 = *(_DWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v87 + 2;
      }
      else
      {
        v87 = (_DWORD *)(*(_QWORD *)(a3 + 16) + v86);
        *(_DWORD *)a3 = v86 + 8;
      }
      v88 = *(__int64 (**)())(*(_QWORD *)v14 + 176LL);
      if ( v88 == sub_B320 )
        return 0;
      return ((int (__fastcall *)(__int64, bool))v88)(v14, *v87 != 0);
    case 13LL:
      v141 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v365 = *(_QWORD **)(a3 + 8);
        v145 = (unsigned int *)(v365 + 1);
        *(_QWORD *)(a3 + 8) = v365 + 1;
        v144 = *v365;
      }
      else
      {
        v142 = *(_QWORD *)(a3 + 16);
        v143 = v141 + 8;
        *(_DWORD *)a3 = v143;
        v144 = *(_QWORD *)(v142 + v141);
        if ( (unsigned int)v143 <= 0x2F )
        {
          v145 = (unsigned int *)(v143 + v142);
          *(_DWORD *)a3 = v141 + 16;
          goto LABEL_123;
        }
        v145 = *(unsigned int **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v145 + 2;
LABEL_123:
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v14 + 184LL))(v14, v144, *v145);
      return 1;
    case 14LL:
      v136 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v340 = *(_DWORD **)(a3 + 8);
        v140 = v340 + 2;
        *(_QWORD *)(a3 + 8) = v340 + 2;
        v139 = *v340 != 0;
      }
      else
      {
        v137 = *(_QWORD *)(a3 + 16);
        v138 = v136 + 8;
        *(_DWORD *)a3 = v138;
        v139 = *(_DWORD *)(v137 + v136) != 0;
        if ( (unsigned int)v138 <= 0x2F )
        {
          v140 = (_QWORD *)(v138 + v137);
          *(_DWORD *)a3 = v136 + 16;
          goto LABEL_118;
        }
        v140 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v140 + 1;
LABEL_118:
      (*(void (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)v14 + 192LL))(v14, 0, v139, *v140);
      if ( v139 )
        sub_22F70(v14);
      return 1;
    case 15LL:
      v134 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v135 = *(unsigned int **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v135 + 2;
      }
      else
      {
        v135 = (unsigned int *)(*(_QWORD *)(a3 + 16) + v134);
        *(_DWORD *)a3 = v134 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 200LL))(v14, *v135);
    case 16LL:
      v132 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v133 = *(unsigned int **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v133 + 2;
      }
      else
      {
        v133 = (unsigned int *)(*(_QWORD *)(a3 + 16) + v132);
        *(_DWORD *)a3 = v132 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 208LL))(v14, *v133);
    case 17LL:
      v237 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v309 = *(unsigned int **)(a3 + 8);
        v241 = v309 + 2;
        *(_QWORD *)(a3 + 8) = v309 + 2;
        v240 = *v309;
      }
      else
      {
        v238 = *(_QWORD *)(a3 + 16);
        v239 = v237 + 8;
        *(_DWORD *)a3 = v239;
        v240 = *(_DWORD *)(v238 + v237);
        if ( (unsigned int)v239 <= 0x2F )
        {
          v241 = (unsigned int *)(v239 + v238);
          *(_DWORD *)a3 = v237 + 16;
          return (*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 216LL))(v14, v240, *v241);
        }
        v241 = *(unsigned int **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v241 + 2;
      return (*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 216LL))(v14, v240, *v241);
    case 18LL:
      v228 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v319 = *(unsigned int **)(a3 + 8);
        v320 = v319 + 2;
        *(_QWORD *)(a3 + 8) = v319 + 2;
        v231 = *v319;
      }
      else
      {
        v229 = *(_QWORD *)(a3 + 16);
        v230 = v228 + 8;
        *(_DWORD *)a3 = v230;
        v231 = *(_DWORD *)(v229 + v228);
        if ( (unsigned int)v230 <= 0x2F )
        {
          v232 = v228 + 16;
          *(_DWORD *)a3 = v232;
          v233 = *(_DWORD *)(v229 + v230);
          if ( (unsigned int)v232 <= 0x2F )
          {
            v234 = v228 + 24;
            *(_DWORD *)a3 = v234;
            v235 = *(_QWORD *)(v229 + v232);
            if ( (unsigned int)v234 <= 0x2F )
            {
              v236 = (_QWORD *)(v234 + v229);
              *(_DWORD *)a3 = v228 + 32;
              return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v14 + 224LL))(
                       v14,
                       v231,
                       v233,
                       v235,
                       *v236);
            }
            v236 = *(_QWORD **)(a3 + 8);
LABEL_291:
            *(_QWORD *)(a3 + 8) = v236 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v14 + 224LL))(
                     v14,
                     v231,
                     v233,
                     v235,
                     *v236);
          }
          v321 = *(__int64 **)(a3 + 8);
LABEL_290:
          v236 = v321 + 1;
          *(_QWORD *)(a3 + 8) = v321 + 1;
          v235 = *v321;
          goto LABEL_291;
        }
        v320 = *(_DWORD **)(a3 + 8);
      }
      v321 = (__int64 *)(v320 + 2);
      *(_QWORD *)(a3 + 8) = v320 + 2;
      v233 = *v320;
      goto LABEL_290;
    case 19LL:
      v123 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v337 = *(unsigned int **)(a3 + 8);
        v338 = v337 + 2;
        *(_QWORD *)(a3 + 8) = v337 + 2;
        v126 = *v337;
      }
      else
      {
        v124 = *(_QWORD *)(a3 + 16);
        v125 = v123 + 8;
        *(_DWORD *)a3 = v125;
        v126 = *(_DWORD *)(v124 + v123);
        if ( (unsigned int)v125 <= 0x2F )
        {
          v127 = v123 + 16;
          *(_DWORD *)a3 = v127;
          v128 = *(_DWORD *)(v124 + v125);
          if ( (unsigned int)v127 <= 0x2F )
          {
            v129 = v123 + 24;
            *(_DWORD *)a3 = v129;
            v130 = *(_QWORD *)(v124 + v127);
            if ( (unsigned int)v129 <= 0x2F )
            {
              v131 = (_QWORD *)(v129 + v124);
              *(_DWORD *)a3 = v123 + 32;
              return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v14 + 232LL))(
                       v14,
                       v126,
                       v128,
                       v130,
                       *v131);
            }
            v131 = *(_QWORD **)(a3 + 8);
LABEL_318:
            *(_QWORD *)(a3 + 8) = v131 + 1;
            return (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v14 + 232LL))(
                     v14,
                     v126,
                     v128,
                     v130,
                     *v131);
          }
          v339 = *(__int64 **)(a3 + 8);
LABEL_317:
          v131 = v339 + 1;
          *(_QWORD *)(a3 + 8) = v339 + 1;
          v130 = *v339;
          goto LABEL_318;
        }
        v338 = *(_DWORD **)(a3 + 8);
      }
      v339 = (__int64 *)(v338 + 2);
      *(_QWORD *)(a3 + 8) = v338 + 2;
      v128 = *v338;
      goto LABEL_317;
    case 20LL:
      v114 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v334 = *(_QWORD **)(a3 + 8);
        v335 = (unsigned int *)(v334 + 1);
        *(_QWORD *)(a3 + 8) = v334 + 1;
        v117 = *v334;
      }
      else
      {
        v115 = *(_QWORD *)(a3 + 16);
        v116 = v114 + 8;
        *(_DWORD *)a3 = v116;
        v117 = *(_QWORD *)(v115 + v114);
        if ( (unsigned int)v116 <= 0x2F )
        {
          v118 = v114 + 16;
          *(_DWORD *)a3 = v118;
          v119 = *(_DWORD *)(v115 + v116);
          if ( (unsigned int)v118 <= 0x2F )
          {
            v120 = v114 + 24;
            *(_DWORD *)a3 = v120;
            v121 = *(_DWORD *)(v115 + v118);
            if ( (unsigned int)v120 <= 0x2F )
            {
              v122 = (_QWORD *)(v120 + v115);
              *(_DWORD *)a3 = v114 + 32;
              return (*(int (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v14 + 240LL))(
                       v14,
                       v117,
                       v119,
                       v121,
                       *v122);
            }
            v122 = *(_QWORD **)(a3 + 8);
LABEL_314:
            *(_QWORD *)(a3 + 8) = v122 + 1;
            return (*(int (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v14 + 240LL))(
                     v14,
                     v117,
                     v119,
                     v121,
                     *v122);
          }
          v336 = *(_DWORD **)(a3 + 8);
LABEL_313:
          v122 = v336 + 2;
          *(_QWORD *)(a3 + 8) = v336 + 2;
          v121 = *v336;
          goto LABEL_314;
        }
        v335 = *(unsigned int **)(a3 + 8);
      }
      v336 = v335 + 2;
      *(_QWORD *)(a3 + 8) = v335 + 2;
      v119 = *v335;
      goto LABEL_313;
    case 21LL:
      v255 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v378 = *(__int64 **)(a3 + 8);
        v259 = v378 + 1;
        *(_QWORD *)(a3 + 8) = v378 + 1;
        v258 = *v378;
      }
      else
      {
        v256 = *(_QWORD *)(a3 + 16);
        v257 = v255 + 8;
        *(_DWORD *)a3 = v257;
        v258 = *(_QWORD *)(v256 + v255);
        if ( (unsigned int)v257 <= 0x2F )
        {
          v259 = (_QWORD *)(v257 + v256);
          *(_DWORD *)a3 = v255 + 16;
          return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v14 + 256LL))(v14, v258, *v259);
        }
        v259 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v259 + 1;
      return (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v14 + 256LL))(v14, v258, *v259);
    case 22LL:
      v242 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v315 = *(_QWORD ***)(a3 + 8);
        v316 = (__int64 *)(v315 + 1);
        *(_QWORD *)(a3 + 8) = v315 + 1;
        v245 = *v315;
      }
      else
      {
        v243 = *(_QWORD *)(a3 + 16);
        v244 = v242 + 8;
        *(_DWORD *)a3 = v244;
        v245 = *(__int64 **)(v243 + v242);
        if ( (unsigned int)v244 <= 0x2F )
        {
          v246 = v242 + 16;
          *(_DWORD *)a3 = v246;
          v247 = *(_QWORD *)(v243 + v244);
          if ( (unsigned int)v246 <= 0x2F )
          {
            v248 = v242 + 24;
            *(_DWORD *)a3 = v248;
            v249 = *(_QWORD *)(v243 + v246);
            if ( (unsigned int)v248 <= 0x2F )
            {
              v250 = v242 + 32;
              *(_DWORD *)a3 = v250;
              v251 = *(_QWORD *)(v243 + v248);
              if ( (unsigned int)v250 <= 0x2F )
              {
                v252 = (_QWORD *)(v250 + v243);
                *(_DWORD *)a3 = v242 + 40;
                goto LABEL_215;
              }
              v252 = *(_QWORD **)(a3 + 8);
LABEL_287:
              *(_QWORD *)(a3 + 8) = v252 + 1;
LABEL_215:
              v253 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v14 + 288LL))(
                       v14,
                       v247,
                       v249,
                       v251,
                       *v252);
              goto LABEL_216;
            }
            v318 = *(__int64 **)(a3 + 8);
LABEL_286:
            v252 = v318 + 1;
            *(_QWORD *)(a3 + 8) = v318 + 1;
            v251 = *v318;
            goto LABEL_287;
          }
          v317 = *(__int64 **)(a3 + 8);
LABEL_285:
          v318 = v317 + 1;
          *(_QWORD *)(a3 + 8) = v317 + 1;
          v249 = *v317;
          goto LABEL_286;
        }
        v316 = *(__int64 **)(a3 + 8);
      }
      v317 = v316 + 1;
      *(_QWORD *)(a3 + 8) = v316 + 1;
      v247 = *v316;
      goto LABEL_285;
    case 23LL:
      v276 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v374 = *(_QWORD ***)(a3 + 8);
        v375 = (__int64 *)(v374 + 1);
        *(_QWORD *)(a3 + 8) = v374 + 1;
        v245 = *v374;
      }
      else
      {
        v277 = *(_QWORD *)(a3 + 16);
        v278 = v276 + 8;
        *(_DWORD *)a3 = v278;
        v245 = *(__int64 **)(v277 + v276);
        if ( (unsigned int)v278 <= 0x2F )
        {
          v279 = v276 + 16;
          *(_DWORD *)a3 = v279;
          v280 = *(_QWORD *)(v277 + v278);
          if ( (unsigned int)v279 <= 0x2F )
          {
            v281 = v276 + 24;
            *(_DWORD *)a3 = v281;
            v282 = *(_QWORD *)(v277 + v279);
            if ( (unsigned int)v281 <= 0x2F )
            {
              v283 = v276 + 32;
              *(_DWORD *)a3 = v283;
              v284 = *(_QWORD *)(v277 + v281);
              if ( (unsigned int)v283 <= 0x2F )
              {
                v285 = (_QWORD *)(v283 + v277);
                *(_DWORD *)a3 = v276 + 40;
                goto LABEL_252;
              }
              v285 = *(_QWORD **)(a3 + 8);
LABEL_375:
              *(_QWORD *)(a3 + 8) = v285 + 1;
LABEL_252:
              v253 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v14 + 296LL))(
                       v14,
                       v280,
                       v282,
                       v284,
                       *v285);
LABEL_216:
              v254 = 0;
              if ( v253 >= 0 )
                v254 = v253;
              *v245 = v254;
              if ( v253 < 0 )
                return -5;
              return 1;
            }
            v377 = *(__int64 **)(a3 + 8);
LABEL_374:
            v285 = v377 + 1;
            *(_QWORD *)(a3 + 8) = v377 + 1;
            v284 = *v377;
            goto LABEL_375;
          }
          v376 = *(__int64 **)(a3 + 8);
LABEL_373:
          v377 = v376 + 1;
          *(_QWORD *)(a3 + 8) = v376 + 1;
          v282 = *v376;
          goto LABEL_374;
        }
        v375 = *(__int64 **)(a3 + 8);
      }
      v376 = v375 + 1;
      *(_QWORD *)(a3 + 8) = v375 + 1;
      v280 = *v375;
      goto LABEL_373;
    case 24LL:
      v188 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v322 = *(_DWORD ***)(a3 + 8);
        v323 = (unsigned int *)(v322 + 1);
        *(_QWORD *)(a3 + 8) = v322 + 1;
        v191 = *v322;
      }
      else
      {
        v189 = *(_QWORD *)(a3 + 16);
        v190 = v188 + 8;
        *(_DWORD *)a3 = v190;
        v191 = *(_DWORD **)(v189 + v188);
        if ( (unsigned int)v190 <= 0x2F )
        {
          v192 = v188 + 16;
          *(_DWORD *)a3 = v192;
          v193 = *(unsigned int *)(v189 + v190);
          if ( (unsigned int)v192 <= 0x2F )
          {
            v194 = v188 + 24;
            *(_DWORD *)a3 = v194;
            v195 = *(_QWORD *)(v189 + v192);
            if ( (unsigned int)v194 <= 0x2F )
            {
              v196 = (unsigned int *)(v194 + v189);
              *(_DWORD *)a3 = v188 + 32;
              goto LABEL_163;
            }
            v196 = *(unsigned int **)(a3 + 8);
LABEL_295:
            *(_QWORD *)(a3 + 8) = v196 + 2;
LABEL_163:
            v197 = *v196;
            if ( (_DWORD)v193 != 4 )
            {
              if ( (*(_BYTE *)(a1 + 154) & 0x40) == 0 )
              {
                if ( (v193 & 0xFFFFFFFD) == 1 || (_DWORD)v193 == 8 )
                {
                  if ( (_DWORD)v197 != 1 )
                  {
                    if ( (_DWORD)v193 == 8 || (((_DWORD)v197 - 2) & 0xFFFFFFFD) != 0 && (_DWORD)v197 != 8 )
                    {
                      *v191 = 5;
                      return 1;
                    }
                    if ( (v195 & ((int)v197 - 1)) != 0 )
                    {
                      *v191 = 3;
                      return 1;
                    }
                  }
                  goto LABEL_172;
                }
LABEL_385:
                *v191 = 2;
                return 1;
              }
              if ( !(_DWORD)v193 )
                goto LABEL_385;
            }
LABEL_172:
            *v191 = 0;
            *v191 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v14 + 304LL))(
                      v14,
                      v193,
                      v195,
                      v197);
            return 1;
          }
          v324 = *(_QWORD **)(a3 + 8);
LABEL_294:
          v196 = (unsigned int *)(v324 + 1);
          *(_QWORD *)(a3 + 8) = v324 + 1;
          v195 = *v324;
          goto LABEL_295;
        }
        v323 = *(unsigned int **)(a3 + 8);
      }
      v324 = v323 + 2;
      *(_QWORD *)(a3 + 8) = v323 + 2;
      v193 = *v323;
      goto LABEL_294;
    case 25LL:
      v207 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v344 = *(_DWORD ***)(a3 + 8);
        v345 = (__int64 *)(v344 + 1);
        *(_QWORD *)(a3 + 8) = v344 + 1;
        v210 = *v344;
      }
      else
      {
        v208 = *(_QWORD *)(a3 + 16);
        v209 = v207 + 8;
        *(_DWORD *)a3 = v209;
        v210 = *(_DWORD **)(v208 + v207);
        if ( (unsigned int)v209 <= 0x2F )
        {
          v211 = v207 + 16;
          *(_DWORD *)a3 = v211;
          v212 = *(_QWORD *)(v208 + v209);
          if ( (unsigned int)v211 <= 0x2F )
          {
            v213 = v207 + 24;
            *(_DWORD *)a3 = v213;
            v214 = *(_DWORD *)(v208 + v211);
            if ( (unsigned int)v213 <= 0x2F )
            {
              *(_DWORD *)a3 = v207 + 32;
              v215 = *(_DWORD *)(v208 + v213);
              if ( v207 + 32 <= 0x2F )
              {
                *(_DWORD *)a3 = v207 + 40;
                return (int)sub_DEE0((_BYTE *)a1, v210, v212, v214, v215);
              }
              v348 = *(int **)(a3 + 8);
LABEL_331:
              *(_QWORD *)(a3 + 8) = v348 + 2;
              return (int)sub_DEE0((_BYTE *)a1, v210, v212, v214, v215);
            }
            v347 = *(int **)(a3 + 8);
LABEL_330:
            v348 = v347 + 2;
            *(_QWORD *)(a3 + 8) = v347 + 2;
            v215 = *v347;
            goto LABEL_331;
          }
          v346 = *(unsigned int **)(a3 + 8);
LABEL_329:
          v347 = (int *)(v346 + 2);
          *(_QWORD *)(a3 + 8) = v346 + 2;
          v214 = *v346;
          goto LABEL_330;
        }
        v345 = *(__int64 **)(a3 + 8);
      }
      v346 = (unsigned int *)(v345 + 1);
      *(_QWORD *)(a3 + 8) = v345 + 1;
      v212 = *v345;
      goto LABEL_329;
    case 26LL:
      v198 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v325 = *(__int64 **)(a3 + 8);
        v326 = v325 + 1;
        *(_QWORD *)(a3 + 8) = v325 + 1;
        v201 = *v325;
      }
      else
      {
        v199 = *(_QWORD *)(a3 + 16);
        v200 = v198 + 8;
        *(_DWORD *)a3 = v200;
        v201 = *(_QWORD *)(v199 + v198);
        if ( (unsigned int)v200 <= 0x2F )
        {
          v202 = v198 + 16;
          *(_DWORD *)a3 = v202;
          v203 = *(_QWORD *)(v199 + v200);
          if ( (unsigned int)v202 <= 0x2F )
          {
            v204 = v198 + 24;
            *(_DWORD *)a3 = v204;
            v205 = *(_DWORD *)(v199 + v202);
            if ( (unsigned int)v204 <= 0x2F )
            {
              v206 = (_QWORD *)(v204 + v199);
              *(_DWORD *)a3 = v198 + 32;
              return (*(int (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 352LL))(
                       v14,
                       v201,
                       v203,
                       v205,
                       *v206);
            }
            v206 = *(_QWORD **)(a3 + 8);
LABEL_300:
            *(_QWORD *)(a3 + 8) = v206 + 1;
            return (*(int (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 352LL))(
                     v14,
                     v201,
                     v203,
                     v205,
                     *v206);
          }
          v327 = *(_DWORD **)(a3 + 8);
LABEL_299:
          v206 = v327 + 2;
          *(_QWORD *)(a3 + 8) = v327 + 2;
          v205 = *v327;
          goto LABEL_300;
        }
        v326 = *(_QWORD **)(a3 + 8);
      }
      v327 = v326 + 1;
      *(_QWORD *)(a3 + 8) = v326 + 1;
      v203 = *v326;
      goto LABEL_299;
    case 27LL:
      v216 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v307 = *(__int64 **)(a3 + 8);
        v308 = v307 + 1;
        *(_QWORD *)(a3 + 8) = v307 + 1;
        v219 = *v307;
      }
      else
      {
        v217 = *(_QWORD *)(a3 + 16);
        v218 = v216 + 8;
        *(_DWORD *)a3 = v218;
        v219 = *(_QWORD *)(v217 + v216);
        if ( (unsigned int)v218 <= 0x2F )
        {
          v220 = v216 + 16;
          *(_DWORD *)a3 = v220;
          v221 = *(_QWORD *)(v217 + v218);
          if ( (unsigned int)v220 <= 0x2F )
          {
            v222 = (_DWORD *)(v220 + v217);
            *(_DWORD *)a3 = v216 + 24;
            goto LABEL_190;
          }
          v222 = *(_DWORD **)(a3 + 8);
LABEL_271:
          *(_QWORD *)(a3 + 8) = v222 + 2;
LABEL_190:
          v9 = -1;
          v223 = *(__int64 (**)())(*(_QWORD *)v14 + 368LL);
          if ( v223 != sub_B340 )
            return ((int (__fastcall *)(__int64, __int64, __int64, bool))v223)(v14, v219, v221, *v222 != 0);
          return v9;
        }
        v308 = *(_QWORD **)(a3 + 8);
      }
      v222 = v308 + 1;
      *(_QWORD *)(a3 + 8) = v308 + 1;
      v221 = *v308;
      goto LABEL_271;
    case 28LL:
      v75 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v76 = *(unsigned int **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v76 + 2;
      }
      else
      {
        v76 = (unsigned int *)(*(_QWORD *)(a3 + 16) + v75);
        *(_DWORD *)a3 = v75 + 8;
      }
      v77 = *(void (**)())(*(_QWORD *)v14 + 376LL);
      if ( v77 != nullsub_1 )
        ((void (__fastcall *)(__int64, _QWORD))v77)(v14, *v76);
      return 1;
    case 29LL:
      v173 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v328 = *(_DWORD **)(a3 + 8);
        v329 = (__int64 *)(v328 + 2);
        *(_QWORD *)(a3 + 8) = v328 + 2;
        v166 = *v328;
LABEL_302:
        v330 = v329 + 1;
        *(_QWORD *)(a3 + 8) = v329 + 1;
        v168 = *v329;
LABEL_303:
        v171 = v330 + 1;
        *(_QWORD *)(a3 + 8) = v330 + 1;
        v170 = *v330;
        goto LABEL_304;
      }
      v174 = *(_QWORD *)(a3 + 16);
      v175 = v173 + 8;
      *(_DWORD *)a3 = v175;
      v166 = *(_DWORD *)(v174 + v173);
      if ( (unsigned int)v175 > 0x2F )
      {
        v329 = *(__int64 **)(a3 + 8);
        goto LABEL_302;
      }
      v176 = v173 + 16;
      *(_DWORD *)a3 = v176;
      v168 = *(_QWORD *)(v174 + v175);
      if ( (unsigned int)v176 > 0x2F )
      {
        v330 = *(__int64 **)(a3 + 8);
        goto LABEL_303;
      }
      v177 = v173 + 24;
      *(_DWORD *)a3 = v177;
      v170 = *(_QWORD *)(v174 + v176);
      if ( (unsigned int)v177 <= 0x2F )
      {
        v171 = (_QWORD *)(v177 + v174);
        *(_DWORD *)a3 = v173 + 32;
        goto LABEL_148;
      }
      v171 = *(_QWORD **)(a3 + 8);
LABEL_304:
      *(_QWORD *)(a3 + 8) = v171 + 1;
LABEL_148:
      v9 = 0;
      v172 = *(__int64 (**)())(*(_QWORD *)v14 + 384LL);
      if ( v172 != sub_B360 )
        return ((int (__fastcall *)(__int64, _QWORD, __int64, __int64, _QWORD))v172)(v14, v166, v168, v170, *v171);
      return v9;
    case 30LL:
      v163 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v341 = *(_DWORD **)(a3 + 8);
        v342 = (__int64 *)(v341 + 2);
        *(_QWORD *)(a3 + 8) = v341 + 2;
        v166 = *v341;
      }
      else
      {
        v164 = *(_QWORD *)(a3 + 16);
        v165 = v163 + 8;
        *(_DWORD *)a3 = v165;
        v166 = *(_DWORD *)(v164 + v163);
        if ( (unsigned int)v165 <= 0x2F )
        {
          v167 = v163 + 16;
          *(_DWORD *)a3 = v167;
          v168 = *(_QWORD *)(v164 + v165);
          if ( (unsigned int)v167 <= 0x2F )
          {
            v169 = v163 + 24;
            *(_DWORD *)a3 = v169;
            v170 = *(_QWORD *)(v164 + v167);
            if ( (unsigned int)v169 <= 0x2F )
            {
              v171 = (_QWORD *)(v169 + v164);
              *(_DWORD *)a3 = v163 + 32;
              goto LABEL_141;
            }
            v171 = *(_QWORD **)(a3 + 8);
LABEL_326:
            *(_QWORD *)(a3 + 8) = v171 + 1;
LABEL_141:
            v9 = 0;
            v172 = *(__int64 (**)())(*(_QWORD *)v14 + 392LL);
            if ( v172 != sub_B370 )
              return ((int (__fastcall *)(__int64, _QWORD, __int64, __int64, _QWORD))v172)(v14, v166, v168, v170, *v171);
            return v9;
          }
          v343 = *(__int64 **)(a3 + 8);
LABEL_325:
          v171 = v343 + 1;
          *(_QWORD *)(a3 + 8) = v343 + 1;
          v170 = *v343;
          goto LABEL_326;
        }
        v342 = *(__int64 **)(a3 + 8);
      }
      v343 = v342 + 1;
      *(_QWORD *)(a3 + 8) = v342 + 1;
      v168 = *v342;
      goto LABEL_325;
    case 31LL:
      v178 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v370 = *(_QWORD ***)(a3 + 8);
        v371 = (__int64 *)(v370 + 1);
        *(_QWORD *)(a3 + 8) = v370 + 1;
        v181 = *v370;
      }
      else
      {
        v179 = *(_QWORD *)(a3 + 16);
        v180 = v178 + 8;
        *(_DWORD *)a3 = v180;
        v181 = *(__int64 **)(v179 + v178);
        if ( (unsigned int)v180 <= 0x2F )
        {
          v182 = v178 + 16;
          *(_DWORD *)a3 = v182;
          v183 = *(_QWORD *)(v179 + v180);
          if ( (unsigned int)v182 <= 0x2F )
          {
            v184 = v178 + 24;
            *(_DWORD *)a3 = v184;
            v185 = *(_QWORD *)(v179 + v182);
            if ( (unsigned int)v184 <= 0x2F )
            {
              v186 = (unsigned int *)(v184 + v179);
              *(_DWORD *)a3 = v178 + 32;
              goto LABEL_155;
            }
            v186 = *(unsigned int **)(a3 + 8);
LABEL_366:
            *(_QWORD *)(a3 + 8) = v186 + 2;
LABEL_155:
            v187 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 248LL);
            if ( v187 != sub_B330 )
              v183 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))v187)(v14, v183, v185, *v186);
            *v181 = v183;
            return 1;
          }
          v372 = *(_QWORD **)(a3 + 8);
LABEL_365:
          v186 = (unsigned int *)(v372 + 1);
          *(_QWORD *)(a3 + 8) = v372 + 1;
          v185 = *v372;
          goto LABEL_366;
        }
        v371 = *(__int64 **)(a3 + 8);
      }
      v372 = v371 + 1;
      *(_QWORD *)(a3 + 8) = v371 + 1;
      v183 = *v371;
      goto LABEL_365;
    case 33LL:
      v78 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v373 = *(_DWORD **)(a3 + 8);
        v82 = v373 + 2;
        *(_QWORD *)(a3 + 8) = v373 + 2;
        v81 = *v373;
      }
      else
      {
        v79 = *(_QWORD *)(a3 + 16);
        v80 = v78 + 8;
        *(_DWORD *)a3 = v80;
        v81 = *(_DWORD *)(v79 + v78);
        if ( (unsigned int)v80 <= 0x2F )
        {
          v82 = (_QWORD *)(v80 + v79);
          *(_DWORD *)a3 = v78 + 16;
          goto LABEL_73;
        }
        v82 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v82 + 1;
LABEL_73:
      v83 = dbg;
      v84 = *(_QWORD *)(dbg + 32LL);
      if ( (v84 & 0x80000000000LL) == 0 )
        return 0;
      v85 = *(__int64 (**)())(*(_QWORD *)v14 + 416LL);
      if ( v85 == sub_B390 )
        goto LABEL_75;
      v390 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v85)(v14, v81, *v82);
      if ( (unsigned int)(v390 + 1) > 1 )
        return v390;
      v83 = dbg;
      v84 = *(_QWORD *)(dbg + 32LL);
LABEL_75:
      *(_QWORD *)(v83 + 32) = v84 & 0xFFFFF7FFFFFFFFFFLL;
      return 0;
    case 34LL:
      if ( (*(_BYTE *)(a1 + 157) & 0x10) == 0 )
        return 0;
      v98 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v385 = *(_QWORD ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v385 + 1;
        v101 = *v385;
      }
      else
      {
        v99 = *(_QWORD *)(a3 + 16);
        v100 = v98 + 8;
        *(_DWORD *)a3 = v100;
        v101 = *(_QWORD **)(v99 + v98);
        if ( (unsigned int)v100 <= 0x2F )
        {
          v102 = v98 + 16;
          *(_DWORD *)a3 = v102;
          v103 = *(_QWORD *)(v99 + v100);
          if ( (unsigned int)v102 <= 0x2F )
          {
            v104 = v98 + 24;
            *(_DWORD *)a3 = v104;
            v105 = *(_DWORD *)(v99 + v102);
            if ( (unsigned int)v104 <= 0x2F )
            {
              *(_DWORD *)a3 = v98 + 32;
              v106 = *(_QWORD *)(v99 + v104);
              if ( v98 + 32 <= 0x2F )
              {
                v107 = v98 + 40;
                if ( (unsigned int)v107 <= 0x2F )
                {
                  *(_DWORD *)a3 = v98 + 48;
                  v108 = *(_QWORD *)(v99 + v107);
                  goto LABEL_96;
                }
                *(_DWORD *)a3 = v107;
LABEL_393:
                v389 = *(__int64 **)(a3 + 8);
                *(_QWORD *)(a3 + 8) = v389 + 1;
                v108 = *v389;
LABEL_96:
                v109 = *(__int64 **)(a3 + 8);
                *(_QWORD *)(a3 + 8) = v109 + 1;
                v110 = *v109;
                *(_QWORD *)(a3 + 8) = v109 + 2;
                v111 = v109[1];
                *(_QWORD *)(a3 + 8) = v109 + 3;
                v112 = v109[2];
                *(_QWORD *)(a3 + 8) = v109 + 4;
                v113 = v109[3];
                *(_QWORD *)(a3 + 8) = v109 + 5;
                *v101 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v14 + 424LL))(
                          v14,
                          v103,
                          v105,
                          (unsigned int)*(_QWORD *)(v106 + 56),
                          v108,
                          v110,
                          v111,
                          v112,
                          v113,
                          *((unsigned int *)v109 + 8));
                return 1;
              }
LABEL_392:
              *(_QWORD *)(a3 + 8) += 8LL;
              goto LABEL_393;
            }
LABEL_391:
            v388 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v388 + 1;
            v106 = *v388;
            goto LABEL_392;
          }
LABEL_390:
          v387 = *(unsigned int **)(a3 + 8);
          *(_QWORD *)(a3 + 8) = v387 + 2;
          v105 = *v387;
          goto LABEL_391;
        }
      }
      v386 = *(__int64 **)(a3 + 8);
      *(_QWORD *)(a3 + 8) = v386 + 1;
      v103 = *v386;
      goto LABEL_390;
    case 35LL:
      if ( (*(_BYTE *)(a1 + 157) & 0x10) == 0 )
        return 0;
      v73 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v74 = *(unsigned int **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v74 + 2;
      }
      else
      {
        v74 = (unsigned int *)(*(_QWORD *)(a3 + 16) + v73);
        *(_DWORD *)a3 = v73 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 432LL))(v14, *v74);
    case 36LL:
      v146 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v310 = *(_DWORD **)(a3 + 8);
        v311 = (__int64 *)(v310 + 2);
        *(_QWORD *)(a3 + 8) = v310 + 2;
        v149 = *v310;
      }
      else
      {
        v147 = *(_QWORD *)(a3 + 16);
        v148 = v146 + 8;
        *(_DWORD *)a3 = v148;
        v149 = *(_DWORD *)(v147 + v146);
        if ( (unsigned int)v148 <= 0x2F )
        {
          v150 = v146 + 16;
          *(_DWORD *)a3 = v150;
          v151 = *(_QWORD *)(v147 + v148);
          if ( (unsigned int)v150 <= 0x2F )
          {
            v152 = (_QWORD *)(v150 + v147);
            *(_DWORD *)a3 = v146 + 24;
            return (*(int (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v14 + 360LL))(
                     v14,
                     v149,
                     v151,
                     *v152);
          }
          v152 = *(_QWORD **)(a3 + 8);
LABEL_277:
          *(_QWORD *)(a3 + 8) = v152 + 1;
          return (*(int (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v14 + 360LL))(
                   v14,
                   v149,
                   v151,
                   *v152);
        }
        v311 = *(__int64 **)(a3 + 8);
      }
      v152 = v311 + 1;
      *(_QWORD *)(a3 + 8) = v311 + 1;
      v151 = *v311;
      goto LABEL_277;
    case 37LL:
      v61 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v358 = *(_DWORD **)(a3 + 8);
        v359 = (__int64 *)(v358 + 2);
        *(_QWORD *)(a3 + 8) = v358 + 2;
        v64 = *v358;
      }
      else
      {
        v62 = *(_QWORD *)(a3 + 16);
        v63 = v61 + 8;
        *(_DWORD *)a3 = v63;
        v64 = *(_DWORD *)(v62 + v61);
        if ( (unsigned int)v63 <= 0x2F )
        {
          v65 = v61 + 16;
          *(_DWORD *)a3 = v65;
          v66 = *(_QWORD *)(v62 + v63);
          if ( (unsigned int)v65 <= 0x2F )
          {
            v67 = v61 + 24;
            *(_DWORD *)a3 = v67;
            v68 = *(_QWORD *)(v62 + v65);
            if ( (unsigned int)v67 <= 0x2F )
            {
              v69 = v61 + 32;
              *(_DWORD *)a3 = v69;
              v70 = *(_QWORD *)(v62 + v67);
              if ( (unsigned int)v69 <= 0x2F )
              {
                v71 = (_QWORD *)(v69 + v62);
                *(_DWORD *)a3 = v61 + 40;
                goto LABEL_60;
              }
              v71 = *(_QWORD **)(a3 + 8);
LABEL_347:
              *(_QWORD *)(a3 + 8) = v71 + 1;
LABEL_60:
              v72 = *(__int64 (**)())(*(_QWORD *)v14 + 400LL);
              if ( v72 != sub_B380 )
                return ((int (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, _QWORD))v72)(
                         v14,
                         v64,
                         v66,
                         v68,
                         v70,
                         *v71);
              return 0;
            }
            v361 = *(__int64 **)(a3 + 8);
LABEL_346:
            v71 = v361 + 1;
            *(_QWORD *)(a3 + 8) = v361 + 1;
            v70 = *v361;
            goto LABEL_347;
          }
          v360 = *(__int64 **)(a3 + 8);
LABEL_345:
          v361 = v360 + 1;
          *(_QWORD *)(a3 + 8) = v360 + 1;
          v68 = *v360;
          goto LABEL_346;
        }
        v359 = *(__int64 **)(a3 + 8);
      }
      v360 = v359 + 1;
      *(_QWORD *)(a3 + 8) = v359 + 1;
      v66 = *v359;
      goto LABEL_345;
    case 38LL:
      v54 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v363 = *(unsigned int **)(a3 + 8);
        v364 = v363 + 2;
        *(_QWORD *)(a3 + 8) = v363 + 2;
        v57 = *v363;
      }
      else
      {
        v55 = *(_QWORD *)(a3 + 16);
        v56 = v54 + 8;
        *(_DWORD *)a3 = v56;
        v57 = *(_DWORD *)(v55 + v54);
        if ( (unsigned int)v56 <= 0x2F )
        {
          v58 = v54 + 16;
          *(_DWORD *)a3 = v58;
          v59 = *(_DWORD *)(v55 + v56) != 0;
          if ( (unsigned int)v58 <= 0x2F )
          {
            v60 = (unsigned int *)(v58 + v55);
            *(_DWORD *)a3 = v54 + 24;
            return (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)v14 + 520LL))(
                     v14,
                     v57,
                     v59,
                     *v60);
          }
          v60 = *(unsigned int **)(a3 + 8);
LABEL_354:
          *(_QWORD *)(a3 + 8) = v60 + 2;
          return (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)v14 + 520LL))(
                   v14,
                   v57,
                   v59,
                   *v60);
        }
        v364 = *(_DWORD **)(a3 + 8);
      }
      v60 = v364 + 2;
      *(_QWORD *)(a3 + 8) = v364 + 2;
      v59 = *v364 != 0;
      goto LABEL_354;
    case 39LL:
      v49 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v333 = *(unsigned int **)(a3 + 8);
        v53 = v333 + 2;
        *(_QWORD *)(a3 + 8) = v333 + 2;
        v52 = *v333;
      }
      else
      {
        v50 = *(_QWORD *)(a3 + 16);
        v51 = v49 + 8;
        *(_DWORD *)a3 = v51;
        v52 = *(_DWORD *)(v50 + v49);
        if ( (unsigned int)v51 <= 0x2F )
        {
          v53 = (unsigned int *)(v51 + v50);
          *(_DWORD *)a3 = v49 + 16;
          return (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 528LL))(v14, v52, *v53);
        }
        v53 = *(unsigned int **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v53 + 2;
      return (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 528LL))(v14, v52, *v53);
    case 40LL:
      v47 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v48 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v48 + 1;
      }
      else
      {
        v48 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v47);
        *(_DWORD *)a3 = v47 + 8;
      }
      return (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 536LL))(v14, *v48);
    case 41LL:
      v41 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v362 = *(__int64 **)(a3 + 8);
        v45 = v362 + 1;
        *(_QWORD *)(a3 + 8) = v362 + 1;
        v44 = *v362;
      }
      else
      {
        v42 = *(_QWORD *)(a3 + 16);
        v43 = v41 + 8;
        *(_DWORD *)a3 = v43;
        v44 = *(_QWORD *)(v42 + v41);
        if ( (unsigned int)v43 <= 0x2F )
        {
          v45 = (_QWORD *)(v43 + v42);
          *(_DWORD *)a3 = v41 + 16;
          goto LABEL_40;
        }
        v45 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v45 + 1;
LABEL_40:
      v46 = *(__int64 (**)())(*(_QWORD *)v14 + 560LL);
      if ( v46 == sub_B3A0 )
        return 0;
      return ((unsigned __int8 (__fastcall *)(__int64, __int64, _QWORD))v46)(v14, v44, *v45);
    case 42LL:
      v28 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v349 = *(__int64 **)(a3 + 8);
        v350 = v349 + 1;
        *(_QWORD *)(a3 + 8) = v349 + 1;
        v31 = *v349;
      }
      else
      {
        v29 = *(_QWORD *)(a3 + 16);
        v30 = v28 + 8;
        *(_DWORD *)a3 = v30;
        v31 = *(_QWORD *)(v29 + v28);
        if ( (unsigned int)v30 <= 0x2F )
        {
          v32 = v28 + 16;
          *(_DWORD *)a3 = v32;
          v33 = *(_QWORD *)(v29 + v30);
          if ( (unsigned int)v32 <= 0x2F )
          {
            v34 = v28 + 24;
            *(_DWORD *)a3 = v34;
            v35 = *(const char **)(v29 + v32);
            if ( (unsigned int)v34 <= 0x2F )
            {
              v36 = v28 + 32;
              *(_DWORD *)a3 = v36;
              v37 = *(_QWORD *)(v29 + v34);
              if ( (unsigned int)v36 <= 0x2F )
              {
                v38 = v28 + 40;
                *(_DWORD *)a3 = v38;
                v39 = *(unsigned int *)(v29 + v36);
                if ( (unsigned int)v38 <= 0x2F )
                {
                  v40 = (_QWORD *)(v38 + v29);
                  *(_DWORD *)a3 = v28 + 48;
                  goto LABEL_34;
                }
                v40 = *(_QWORD **)(a3 + 8);
LABEL_337:
                *(_QWORD *)(a3 + 8) = v40 + 1;
LABEL_34:
                if ( v37 )
                {
                  v9 = (*(int (__fastcall **)(__int64, __int64, __int64, const char *, __int64, __int64, _QWORD))(*(_QWORD *)v14 + 576LL))(
                         v14,
                         v31,
                         v33,
                         v35,
                         v37,
                         v39,
                         *v40);
                  if ( (*(_DWORD *)debug & 0x10000) != 0 )
                    sub_BC00((__int64)"debugger_t::ev_bin_search(%a, %a) -> %d(%s) ea %a\n", a4, a5, v33, v35, a6);
                  return v9;
                }
                return 0;
              }
              v353 = *(unsigned int **)(a3 + 8);
LABEL_336:
              v40 = v353 + 2;
              *(_QWORD *)(a3 + 8) = v353 + 2;
              v39 = *v353;
              goto LABEL_337;
            }
            v352 = *(_QWORD **)(a3 + 8);
LABEL_335:
            v353 = (unsigned int *)(v352 + 1);
            *(_QWORD *)(a3 + 8) = v352 + 1;
            v37 = *v352;
            goto LABEL_336;
          }
          v351 = *(const char ***)(a3 + 8);
LABEL_334:
          v352 = v351 + 1;
          *(_QWORD *)(a3 + 8) = v351 + 1;
          v35 = *v351;
          goto LABEL_335;
        }
        v350 = *(_QWORD **)(a3 + 8);
      }
      v351 = (const char **)(v350 + 1);
      *(_QWORD *)(a3 + 8) = v350 + 1;
      v33 = *v350;
      goto LABEL_334;
    case 43LL:
      if ( !*(_BYTE *)(a1 + 208) )
        return 0;
      if ( *(_DWORD *)a3 > 0x2Fu )
        *(_QWORD *)(a3 + 8) += 8LL;
      else
        *(_DWORD *)a3 += 8;
      v27 = *(__int64 (**)())(*(_QWORD *)v14 + 584LL);
      if ( v27 == sub_B3C0 || (v391 = v27(), v391 >= 0) )
      {
        serialize_dynamic_register_set();
        deserialize_dynamic_register_set();
        return 1;
      }
      return v391;
    case 44LL:
      v15 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v354 = *(_QWORD ***)(a3 + 8);
        v355 = v354 + 1;
        *(_QWORD *)(a3 + 8) = v354 + 1;
        v18 = *v354;
      }
      else
      {
        v16 = *(_QWORD *)(a3 + 16);
        v17 = v15 + 8;
        *(_DWORD *)a3 = v17;
        v18 = *(__int64 **)(v16 + v15);
        if ( (unsigned int)v17 <= 0x2F )
        {
          v19 = v15 + 16;
          *(_DWORD *)a3 = v19;
          v20 = *(_QWORD *)(v16 + v17);
          if ( (unsigned int)v19 <= 0x2F )
          {
            v21 = v15 + 24;
            *(_DWORD *)a3 = v21;
            v396 = *(_DWORD *)(v16 + v19);
            if ( (unsigned int)v21 <= 0x2F )
            {
              v22 = v15 + 32;
              *(_DWORD *)a3 = v22;
              v23 = *(_DWORD *)(v16 + v21);
              if ( (unsigned int)v22 <= 0x2F )
              {
                v24 = (__int64 *)(v22 + v16);
                *(_DWORD *)a3 = v15 + 40;
                goto LABEL_13;
              }
              v24 = *(__int64 **)(a3 + 8);
LABEL_342:
              *(_QWORD *)(a3 + 8) = v24 + 1;
LABEL_13:
              v25 = *v24;
              if ( (*(_DWORD *)debug & 0x10000) != 0 )
                sub_BC00((__int64)"debugger_t::ev_set_dbg_options(%s)\n", (const char *)v20);
              v26 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 64LL))(
                      a1,
                      v20,
                      v396,
                      v23,
                      v25);
              if ( !v20 || *(_BYTE *)v20 != 32 || (v9 = v26 != 0, *(_BYTE *)(v20 + 1)) )
              {
                if ( v18 )
                  *v18 = v26;
                sub_E700(a1, *(_BYTE *)(a1 + 208));
                return 1;
              }
              return v9;
            }
            v357 = *(_DWORD **)(a3 + 8);
LABEL_341:
            v24 = (__int64 *)(v357 + 2);
            *(_QWORD *)(a3 + 8) = v357 + 2;
            v23 = *v357;
            goto LABEL_342;
          }
          v356 = *(unsigned int **)(a3 + 8);
LABEL_340:
          v357 = v356 + 2;
          *(_QWORD *)(a3 + 8) = v356 + 2;
          v396 = *v356;
          goto LABEL_341;
        }
        v355 = *(_QWORD **)(a3 + 8);
      }
      v356 = (unsigned int *)(v355 + 1);
      *(_QWORD *)(a3 + 8) = v355 + 1;
      v20 = *v355;
      goto LABEL_340;
    default:
      return 0;
  }
}

