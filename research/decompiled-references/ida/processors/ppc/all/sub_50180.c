__int64 __fastcall sub_50180(
        __int64 a1,
        const char *a2,
        __int64 a3,
        double a4,
        double a5,
        double a6,
        __int64 a7,
        int a8,
        int a9)
{
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rsi
  _QWORD **v13; // rcx
  __int64 result; // rax
  unsigned __int64 v15; // rsi
  unsigned int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rsi
  _QWORD *v20; // rdx
  unsigned int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 *v24; // rbp
  _QWORD *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned int v28; // edx
  __int64 *v29; // rcx
  unsigned int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // r8
  _QWORD *v34; // rdx
  unsigned int v35; // edx
  const char **v36; // rcx
  unsigned int v37; // edx
  __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rsi
  unsigned int v42; // ecx
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rdi
  unsigned __int64 *v46; // rdx
  unsigned int v47; // ecx
  __int64 v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // rdi
  _QWORD *v51; // rdx
  unsigned int v52; // ecx
  __int64 v53; // rdx
  __int64 v54; // rsi
  __int64 v55; // rdi
  int *v56; // rdx
  int v57; // ebp
  unsigned int v58; // edx
  _QWORD *v59; // rcx
  __int64 v60; // r14
  size_t v61; // rax
  size_t v62; // r15
  size_t v63; // rbp
  _BYTE **v64; // r12
  _BYTE *v65; // rsi
  char *v66; // r14
  char *v67; // rbp
  __int64 v68; // r15
  const char *v69; // rsi
  __int64 v70; // rdi
  __int64 v71; // rdi
  __int64 v72; // rax
  unsigned int v73; // ecx
  __int64 v74; // rdx
  __int64 v75; // rdi
  __int64 v76; // rsi
  unsigned __int16 **v77; // rdx
  unsigned __int16 *v78; // rdx
  unsigned __int16 v79; // ax
  unsigned int v80; // ecx
  __int64 v81; // rdx
  __int64 v82; // rdi
  const __m128i *v83; // r8
  __int64 v84; // rsi
  _QWORD *v85; // rbp
  _QWORD **v86; // rdx
  _QWORD *v87; // r12
  __int64 v88; // rax
  unsigned int v89; // edx
  _QWORD *v90; // rcx
  unsigned int v91; // edx
  _DWORD **v92; // rcx
  unsigned int v93; // ecx
  __int64 v94; // rdx
  __int64 v95; // rdi
  __int64 v96; // r8
  __int64 v97; // rsi
  __int64 v98; // rdi
  unsigned int *v99; // rdx
  unsigned int v100; // edx
  __int64 *v101; // rcx
  unsigned int v102; // ecx
  __int64 v103; // rdx
  __int64 v104; // rsi
  __int64 v105; // rdi
  _DWORD *v106; // rdx
  unsigned int v107; // edx
  __int64 *v108; // rcx
  __int64 v109; // rbp
  int v110; // eax
  unsigned int v111; // edx
  __int64 v112; // rcx
  int v113; // edx
  _QWORD *v114; // rcx
  unsigned int v115; // edx
  __int64 *v116; // rcx
  unsigned int v117; // ecx
  __int64 v118; // rdx
  __int64 v119; // rsi
  __int64 *v120; // rbp
  __int64 *v121; // rdx
  unsigned int v122; // edx
  __int64 *v123; // rcx
  unsigned int v124; // edx
  __int64 *v125; // rcx
  unsigned int v126; // ecx
  __int64 v127; // rdx
  __int64 v128; // rsi
  _DWORD *v129; // rdi
  __int64 *v130; // rdx
  __int64 v131; // rdx
  unsigned int v132; // edx
  _DWORD *v133; // rcx
  _UNKNOWN **v134; // rax
  unsigned int v135; // ecx
  __int64 v136; // rdx
  __int64 v137; // rdi
  const char *v138; // r9
  __int64 v139; // rsi
  int v140; // r10d
  __int64 v141; // rdi
  __int64 *v142; // r11
  __int64 v143; // rsi
  __int64 *v144; // rbp
  _DWORD *v145; // rdx
  __int64 v146; // rax
  unsigned int v147; // edx
  const char **v148; // rcx
  const char *v149; // r12
  size_t v150; // rax
  size_t v151; // r13
  size_t v152; // rbp
  __int64 v153; // rbp
  unsigned __int64 v154; // r14
  unsigned __int64 v155; // rbp
  _BYTE *v156; // r15
  char *v157; // rax
  unsigned __int64 v158; // r12
  size_t v159; // rbp
  unsigned int v160; // edx
  __int64 v161; // rcx
  __int64 *v162; // rcx
  __int64 v163; // rsi
  unsigned int v164; // edx
  _QWORD *v165; // rcx
  __int64 func; // rax
  unsigned int v167; // ecx
  __int64 v168; // rdx
  __int64 v169; // rsi
  __int64 v170; // r8
  _QWORD *v171; // rdx
  unsigned int v172; // ecx
  __int64 v173; // rdx
  __int64 v174; // rsi
  __int64 v175; // rdi
  unsigned __int8 *v176; // rdx
  unsigned int v177; // edx
  _QWORD *v178; // rcx
  __int64 v179; // rbp
  unsigned int v180; // ecx
  __int64 v181; // rdx
  __int64 v182; // rsi
  __int64 v183; // rdi
  __int64 *v184; // rdx
  unsigned int v185; // ecx
  unsigned int v186; // ecx
  __int64 v187; // rdx
  __int64 v188; // rdi
  __int64 v189; // r9
  __int64 v190; // rsi
  __int64 v191; // rdi
  unsigned int *v192; // rdx
  unsigned int v193; // ecx
  __int64 v194; // rdx
  __int64 v195; // rdi
  __int64 v196; // r12
  __int64 v197; // rsi
  __int64 v198; // r13
  int *v199; // rdx
  __int64 v200; // rbp
  __int64 v201; // rdx
  unsigned int v202; // ecx
  __int64 v203; // rdx
  __int64 v204; // rsi
  __int64 *v205; // r9
  __int64 v206; // rdi
  __int64 *v207; // r10
  __int64 v208; // rsi
  __int64 v209; // rdi
  __int64 *v210; // rdx
  unsigned int v211; // edx
  __int64 *v212; // rcx
  __int64 v213; // rsi
  char *v214; // rax
  unsigned int v215; // ecx
  __int64 v216; // rdx
  __int64 v217; // rdi
  _DWORD *v218; // r8
  __int64 v219; // rsi
  __int64 v220; // rdi
  __int64 *v221; // rdx
  __int64 v222; // rdx
  char v223; // al
  unsigned int v224; // ecx
  __int64 v225; // rdx
  __int64 v226; // rdi
  __int64 *v227; // r8
  __int64 v228; // rsi
  _QWORD *v229; // rdi
  __int64 *v230; // rdx
  __int64 v231; // rdi
  __int64 v232; // r14
  _QWORD *v233; // rbp
  __int64 v234; // rdi
  __int64 v235; // r12
  __int64 i; // r15
  __int64 *v237; // r13
  __int64 v238; // rdi
  __int64 v239; // rdi
  __int64 v240; // rdi
  __int64 v241; // rdi
  __int64 v242; // rdi
  __int64 v243; // r14
  _QWORD *v244; // rbp
  __int64 v245; // rdi
  __int64 v246; // r12
  __int64 j; // r15
  __int64 *v248; // r13
  __int64 v249; // rdi
  __int64 v250; // rdi
  __int64 v251; // rdi
  __int64 v252; // rdi
  __int64 v253; // rdi
  __int64 v254; // r14
  _QWORD *v255; // rbp
  __int64 v256; // rdi
  __int64 v257; // r12
  __int64 k; // r15
  __int64 *v259; // r13
  __int64 v260; // rdi
  __int64 v261; // rdi
  __int64 v262; // rdi
  __int64 v263; // rdi
  unsigned int v264; // ecx
  __int64 v265; // rdx
  __int64 v266; // rsi
  __int64 v267; // r11
  __int64 v268; // rdi
  int v269; // esi
  __int64 v270; // r9
  __int64 v271; // r8
  __int64 v272; // rdi
  __int64 v273; // r9
  __int64 v274; // r10
  int v275; // edi
  _QWORD *v276; // rdx
  unsigned int v277; // ecx
  __int64 v278; // rdx
  __int64 v279; // rdi
  __int64 v280; // r8
  __int64 v281; // rsi
  __int64 v282; // rdi
  __int64 *v283; // rdx
  unsigned int v284; // ecx
  __int64 v285; // rdx
  __int64 v286; // rsi
  _QWORD *v287; // rdi
  unsigned __int8 **v288; // rdx
  unsigned int v289; // edx
  __int64 *v290; // rcx
  unsigned int v291; // edx
  unsigned int v292; // edx
  __int64 *v293; // rcx
  unsigned int v294; // edx
  __int64 v295; // rbp
  unsigned int v296; // eax
  __int64 v297; // r12
  unsigned __int64 v298; // rax
  __int64 v299; // rdx
  int v300; // eax
  bool v301; // r12
  bool v302; // r13
  __int64 n; // rbp
  unsigned int v304; // edx
  __int64 *v305; // rcx
  unsigned int v306; // edx
  __int64 *v307; // rcx
  unsigned int v308; // ecx
  __int64 v309; // rdx
  __int64 v310; // rsi
  __int64 v311; // rdi
  __int64 *v312; // rdx
  unsigned int v313; // ecx
  __int64 v314; // rdx
  __int64 v315; // rsi
  int v316; // edi
  _DWORD *v317; // rdx
  unsigned int v318; // edx
  __int64 v319; // rcx
  unsigned int v320; // edx
  __int64 *v321; // rcx
  unsigned int v322; // edx
  __int64 v323; // rcx
  unsigned int v324; // edx
  _QWORD **v325; // rcx
  _QWORD *v326; // rax
  char **p_s1; // rsi
  char *v328; // rdx
  unsigned int v329; // ecx
  __int64 v330; // rdx
  __int64 v331; // rsi
  _QWORD *v332; // rbp
  int *v333; // rdx
  int v334; // r12d
  int v335; // eax
  unsigned int v336; // ecx
  __int64 v337; // rdx
  __int64 v338; // rdi
  _DWORD *v339; // rbp
  __int64 v340; // rsi
  const char *v341; // rdi
  _QWORD **v342; // rdx
  _QWORD *v343; // rdx
  unsigned int v344; // ecx
  __int64 v345; // rdx
  __int64 v346; // rsi
  __int64 *v347; // rdi
  _QWORD **v348; // rdx
  unsigned int v349; // ecx
  __int64 v350; // rdx
  __int64 v351; // rdi
  void **v352; // rbx
  const char *v353; // rbp
  const char *v354; // rdx
  char v355; // al
  unsigned int v356; // ecx
  unsigned int v357; // ecx
  __int64 v358; // rdx
  __int64 v359; // rdi
  _DWORD *v360; // r8
  __int64 v361; // rsi
  __int64 *v362; // rdi
  unsigned int *v363; // rdx
  unsigned int v364; // ecx
  __int64 v365; // rdx
  __int64 v366; // rdi
  __int64 v367; // r8
  __int64 v368; // rdi
  unsigned int v369; // ecx
  __int64 v370; // rdx
  __int64 v371; // rdi
  __int64 v372; // r8
  __int64 v373; // rsi
  __int64 *v374; // rdi
  int *v375; // rdx
  unsigned int v376; // ecx
  __int64 v377; // rdx
  unsigned int *v378; // rbp
  unsigned int *v379; // rdx
  unsigned int v380; // eax
  __int64 v381; // rdi
  __int64 v382; // rdi
  __int64 v383; // rax
  unsigned __int64 v384; // rdx
  __int64 v385; // rcx
  unsigned int v386; // edx
  __int64 *v387; // rcx
  unsigned int v388; // ecx
  __int64 v389; // rdx
  __int64 v390; // rdi
  unsigned __int64 *v391; // rbp
  __int64 v392; // rsi
  __int64 v393; // r9
  __int64 v394; // rdi
  unsigned int v395; // r10d
  __int64 v396; // rsi
  __int64 (__fastcall *v397)(const char *, __int64, double); // rdi
  __int64 *v398; // rdx
  char *v399; // rdi
  size_t v400; // r8
  unsigned int v401; // ecx
  __int64 v402; // rdx
  __int64 v403; // rsi
  __int64 v404; // rdi
  __int64 *v405; // rdx
  unsigned int v406; // ecx
  __int64 v407; // rdx
  __int64 v408; // rsi
  __int64 v409; // r10
  __int64 v410; // rdi
  __int64 v411; // r11
  __int64 v412; // rsi
  unsigned int v413; // ebp
  __int64 v414; // rdi
  __int64 v415; // r8
  __int64 v416; // rsi
  __int64 (__fastcall *v417)(_QWORD, _QWORD); // r9
  __int64 *v418; // rdx
  unsigned int v419; // ecx
  __int64 v420; // rdx
  __int64 v421; // rsi
  __int64 *v422; // rbx
  __int64 *v423; // rdx
  _DWORD **v424; // rdx
  __int64 **v425; // rcx
  __int64 *v426; // rcx
  __int64 *v427; // rdx
  unsigned int *v428; // rcx
  unsigned int *v429; // rdx
  __int64 (__fastcall **v430)(_QWORD, _QWORD); // rcx
  unsigned int **v431; // rcx
  _QWORD *v432; // rcx
  __int64 v433; // rcx
  __int64 v434; // rdx
  void ***v435; // rdx
  _QWORD *v436; // rcx
  __int64 *v437; // rcx
  const __m128i **v438; // rdx
  _QWORD **v439; // rcx
  __int64 *v440; // rcx
  _QWORD *v441; // rdx
  _QWORD *v442; // rdx
  _DWORD **v443; // rdx
  const char **v444; // rcx
  __int64 *v445; // rdx
  _QWORD *v446; // rcx
  __int64 *v447; // rcx
  __int64 v448; // rdx
  __int64 **v449; // rcx
  __int64 **v450; // rdx
  __int64 *v451; // rcx
  const char **v452; // rcx
  const char **v453; // rdx
  const char **v454; // rdx
  int *v455; // rcx
  __int64 **v456; // rdx
  _QWORD **v457; // rcx
  _QWORD **v458; // rdx
  __int64 *v459; // rcx
  _DWORD *v460; // rdx
  __int64 (__fastcall **v461)(const char *, __int64, double); // rcx
  __int64 *v462; // rcx
  _DWORD **v463; // rdx
  __int64 *v464; // rcx
  __int64 *v465; // rdx
  _QWORD *v466; // rcx
  __int64 *v467; // rdx
  __int64 *v468; // rcx
  __int64 *v469; // rdx
  __int64 *v470; // rcx
  _QWORD *v471; // rdx
  _QWORD **v472; // rcx
  __int64 *v473; // rcx
  __int64 *v474; // rcx
  _QWORD *v475; // rdx
  __int64 *v476; // rcx
  __int64 v477; // rsi
  const char *v478; // rdx
  __int64 *v479; // rcx
  int *v480; // rcx
  __int64 *v481; // rdx
  _QWORD *v482; // rcx
  _QWORD **v483; // rcx
  _DWORD **v484; // rcx
  __int64 **v485; // rdx
  _QWORD **v486; // rcx
  __int64 *v487; // rcx
  _QWORD **v488; // rcx
  __int64 *v489; // rcx
  __int64 *v490; // rdx
  __int64 *v491; // rcx
  __int64 *v492; // rdx
  __int64 *v493; // rdx
  __int64 **v494; // rcx
  __int64 *v495; // rcx
  _QWORD *v496; // rcx
  __int64 **v497; // rcx
  __int64 *v498; // rcx
  __int64 *v499; // rdx
  __int64 *v500; // rdx
  _QWORD *v501; // rcx
  _DWORD *v502; // rdx
  __int64 *v503; // rcx
  _QWORD *v504; // rdx
  _DWORD *v505; // rcx
  _QWORD **v506; // rcx
  __int64 v507; // rdi
  _QWORD *m; // rbp
  unsigned int v509; // ebx
  int v510; // eax
  unsigned __int64 v511; // rax
  __int64 v512; // rdx
  __int64 v513; // rdi
  __int64 v514; // rdx
  __int64 v515; // rsi
  int v516; // r13d
  int *v517; // rbx
  __int64 v518; // rax
  void *v519; // rdi
  char *v520; // r12
  __int64 v521; // r14
  void *v522; // rax
  size_t v523; // rax
  char *v524; // r12
  size_t v525; // r13
  size_t v526; // r14
  _BYTE *v527; // rax
  const char *v528; // r12
  size_t v529; // rax
  size_t v530; // rbp
  void *v531; // r13
  __int64 v532; // rax
  __int64 v533; // rdi
  __int64 v534; // rdx
  __int64 v535; // rsi
  int v536; // r13d
  const char *v537; // rbx
  __int64 v538; // rax
  __int64 v539; // rax
  unsigned __int64 v540; // rcx
  __int64 v541; // rsi
  __int64 v542; // [rsp+0h] [rbp-238h]
  __int64 v543; // [rsp+0h] [rbp-238h]
  __int64 v544; // [rsp+0h] [rbp-238h]
  __int64 v545; // [rsp+8h] [rbp-230h]
  __int64 v546; // [rsp+8h] [rbp-230h]
  __int64 v547; // [rsp+8h] [rbp-230h]
  _QWORD v548[2]; // [rsp+10h] [rbp-228h] BYREF
  char v549; // [rsp+20h] [rbp-218h]
  void *v550; // [rsp+30h] [rbp-208h] BYREF
  __int128 v551; // [rsp+38h] [rbp-200h]
  char *s1; // [rsp+50h] [rbp-1E8h] BYREF
  __int128 v553; // [rsp+58h] [rbp-1E0h]
  __int128 v554; // [rsp+70h] [rbp-1C8h] BYREF
  __int64 v555; // [rsp+80h] [rbp-1B8h]
  __int64 v556; // [rsp+88h] [rbp-1B0h]
  __int64 v557; // [rsp+90h] [rbp-1A8h]
  char v558; // [rsp+98h] [rbp-1A0h] BYREF
  char v559[8]; // [rsp+1D8h] [rbp-60h] BYREF
  char s[24]; // [rsp+1E0h] [rbp-58h] BYREF
  unsigned __int64 v561; // [rsp+1F8h] [rbp-40h]

  v561 = __readfsqword(0x28u);
  v10 = a3;
  if ( (__int64)a2 <= 100 )
  {
    if ( (__int64)a2 < 0 )
      return 0;
    switch ( (unsigned __int64)a2 )
    {
      case 0uLL:
        setinf_flag(3, 32, 1);
        netnode_check(a1 + 120, "$ toc", 0, 1);
        v71 = *(_QWORD *)(a1 + 312);
        *(_QWORD *)(a1 + 256) = a1;
        *(_QWORD *)(a1 + 264) = &off_93160;
        *(_QWORD *)(a1 + 272) = 7;
        *(_QWORD *)(a1 + 280) = "sysv";
        *(_DWORD *)(a1 + 288) = 0;
        *(_QWORD *)(a1 + 296) = 0;
        *(_BYTE *)(a1 + 304) = 0;
        if ( v71 )
        {
          *(_QWORD *)(a1 + 320) = 0;
          qfree(v71, "$ toc");
          *(_QWORD *)(a1 + 312) = 0;
          *(_QWORD *)(a1 + 328) = 0;
        }
        *(_QWORD *)(a1 + 336) = sub_5B4D0(a1);
        sub_590E0(a1);
        hook_event_listener(3, a1 + 232, &LPH, 0);
        v72 = getinf(55);
        setinf(55, v72 | 0x10);
        return 0;
      case 1uLL:
        sub_59170();
        v231 = *(_QWORD *)(a1 + 160);
        if ( v231 )
        {
          v542 = 0;
          v232 = 0;
          v545 = *(_QWORD *)(a1 + 168);
          if ( v545 )
          {
            do
            {
              v233 = (_QWORD *)(v231 + v232);
              v234 = *(_QWORD *)(v231 + v232 + 56);
              if ( v234 )
              {
                v235 = v233[8];
                if ( v235 )
                {
                  for ( i = 0; i != v235; ++i )
                  {
                    v237 = (__int64 *)(v234 + 48 * i);
                    v238 = v237[3];
                    if ( v238 )
                    {
                      v237[4] = 0;
                      qfree(v238, a2);
                    }
                    v239 = *v237;
                    if ( *v237 )
                    {
                      v237[1] = 0;
                      qfree(v239, a2);
                    }
                    v234 = v233[7];
                  }
                }
                v233[8] = 0;
                qfree(v234, a2);
              }
              v240 = v233[4];
              if ( v240 )
              {
                v233[5] = 0;
                qfree(v240, a2);
              }
              v241 = v233[1];
              if ( v241 )
              {
                v233[2] = 0;
                qfree(v241, a2);
              }
              ++v542;
              v231 = *(_QWORD *)(a1 + 160);
              v232 += 88;
            }
            while ( v545 != v542 );
          }
          *(_QWORD *)(a1 + 168) = 0;
          qfree(v231, a2);
          *(_QWORD *)(a1 + 160) = 0;
          *(_QWORD *)(a1 + 176) = 0;
        }
        v242 = *(_QWORD *)(a1 + 376);
        if ( v242 )
        {
          v543 = 0;
          v243 = 0;
          v546 = *(_QWORD *)(a1 + 384);
          if ( v546 )
          {
            do
            {
              v244 = (_QWORD *)(v242 + v243);
              v245 = *(_QWORD *)(v242 + v243 + 56);
              if ( v245 )
              {
                v246 = v244[8];
                if ( v246 )
                {
                  for ( j = 0; j != v246; ++j )
                  {
                    v248 = (__int64 *)(v245 + 48 * j);
                    v249 = v248[3];
                    if ( v249 )
                    {
                      v248[4] = 0;
                      qfree(v249, a2);
                    }
                    v250 = *v248;
                    if ( *v248 )
                    {
                      v248[1] = 0;
                      qfree(v250, a2);
                    }
                    v245 = v244[7];
                  }
                }
                v244[8] = 0;
                qfree(v245, a2);
              }
              v251 = v244[4];
              if ( v251 )
              {
                v244[5] = 0;
                qfree(v251, a2);
              }
              v252 = v244[1];
              if ( v252 )
              {
                v244[2] = 0;
                qfree(v252, a2);
              }
              ++v543;
              v242 = *(_QWORD *)(a1 + 376);
              v243 += 88;
            }
            while ( v546 != v543 );
          }
          *(_QWORD *)(a1 + 384) = 0;
          qfree(v242, a2);
          *(_QWORD *)(a1 + 376) = 0;
          *(_QWORD *)(a1 + 392) = 0;
        }
        v253 = *(_QWORD *)(a1 + 400);
        if ( v253 )
        {
          v544 = 0;
          v254 = 0;
          v547 = *(_QWORD *)(a1 + 408);
          if ( v547 )
          {
            do
            {
              v255 = (_QWORD *)(v253 + v254);
              v256 = *(_QWORD *)(v253 + v254 + 56);
              if ( v256 )
              {
                v257 = v255[8];
                if ( v257 )
                {
                  for ( k = 0; k != v257; ++k )
                  {
                    v259 = (__int64 *)(v256 + 48 * k);
                    v260 = v259[3];
                    if ( v260 )
                    {
                      v259[4] = 0;
                      qfree(v260, a2);
                    }
                    v261 = *v259;
                    if ( *v259 )
                    {
                      v259[1] = 0;
                      qfree(v261, a2);
                    }
                    v256 = v255[7];
                  }
                }
                v255[8] = 0;
                qfree(v256, a2);
              }
              v262 = v255[4];
              if ( v262 )
              {
                v255[5] = 0;
                qfree(v262, a2);
              }
              v263 = v255[1];
              if ( v263 )
              {
                v255[2] = 0;
                qfree(v263, a2);
              }
              ++v544;
              v253 = *(_QWORD *)(a1 + 400);
              v254 += 88;
            }
            while ( v547 != v544 );
          }
          *(_QWORD *)(a1 + 408) = 0;
          qfree(v253, a2);
          *(_QWORD *)(a1 + 400) = 0;
          *(_QWORD *)(a1 + 416) = 0;
        }
        unhook_event_listener(3, a1 + 232);
        clr_module_data((unsigned int)dword_959F0);
        sub_5B5E0(*(_QWORD *)(a1 + 336));
        return 0;
      case 2uLL:
        v313 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v480 = *(int **)(a3 + 8);
          v317 = v480 + 2;
          *(_QWORD *)(v10 + 8) = v480 + 2;
          v316 = *v480;
        }
        else
        {
          v314 = *(_QWORD *)(a3 + 16);
          v315 = v313 + 8;
          *(_DWORD *)v10 = v315;
          v316 = *(_DWORD *)(v314 + v313);
          if ( (unsigned int)v315 <= 0x2F )
          {
            v317 = (_DWORD *)(v315 + v314);
            *(_DWORD *)v10 = v313 + 16;
            goto LABEL_360;
          }
          v317 = *(_DWORD **)(v10 + 8);
        }
        *(_QWORD *)(v10 + 8) = v317 + 2;
LABEL_360:
        if ( !*v317 )
          setinf_flag(3, 32, v316 == 0);
        return 0;
      case 3uLL:
        v132 = *(_DWORD *)a3;
        if ( v132 > 0x2F )
        {
          v133 = *(_DWORD **)(v10 + 8);
          *(_QWORD *)(v10 + 8) = v133 + 2;
        }
        else
        {
          v133 = (_DWORD *)(*(_QWORD *)(v10 + 16) + v132);
          *(_DWORD *)v10 = v132 + 8;
        }
        v134 = &off_93300;
        if ( !*v133 )
          v134 = &off_93D20;
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) = v134;
        return 0;
      case 4uLL:
        v294 = *(_DWORD *)a3;
        if ( v294 > 0x2F )
          *(_QWORD *)(v10 + 8) += 8LL;
        else
          *(_DWORD *)v10 = v294 + 8;
        v295 = *(_QWORD *)(a1 + 16);
        v296 = getinf(5);
        v297 = v296;
        if ( v296 == 2 && get_last_seg() && (*(_BYTE *)(v295 + 9) & 0x20) != 0 )
        {
          if ( (unsigned int)sub_4C280(
                               1u,
                               (__int64)"HIDECANCEL\n"
                                        "The loaded binary file can be disassembled in two modes:\n"
                                        " 1. 64-bit mode\n"
                                        " 2. 32-bit mode\n"
                                        "Do you want to disassemble it as 64-bit code?") != 1 )
            v297 = 1;
          setinf_flag(3, 4, (_DWORD)v297 == 2);
          for ( m = (_QWORD *)get_first_seg(); m; m = (_QWORD *)get_next_seg(*m) )
            set_segm_addressing(m, v297);
        }
        set_target_assembler(1);
        v298 = getinf(5);
        if ( (unsigned int)v298 > 0xD || (v299 = -8293, _bittest64(&v299, v298)) )
        {
          v477 = *(_QWORD *)(a1 + 136);
          if ( *(_QWORD *)(a1 + 152) <= 3u )
          {
            v532 = qvector_reserve(a1 + 136, v477, 4, 1);
            *(_QWORD *)(a1 + 136) = v532;
            v477 = v532;
          }
          v478 = ::s1;
          *(_QWORD *)(a1 + 144) = 4;
          *(_WORD *)v477 = 28784;
          *(_BYTE *)(v477 + 2) = 99;
          *(_BYTE *)(*(_QWORD *)(a1 + 136) + 3LL) = 0;
          if ( *(_QWORD *)(a1 + 144) )
            v478 = *(const char **)(a1 + 136);
          netnode_supset(**(_QWORD **)(a1 + 216), -1, v478, 0, 83);
          sub_4B350(a1 + 128, 0, a4);
        }
        else
        {
          sub_4CA00(a1, 7, a4);
          v300 = sub_4C360(
                   (__int64)"VLE only",
                   (__int64)"32-bit ISA only",
                   (__int64)"both VLE and 32-bit",
                   0xFFFFFFFF,
                   (__int64)&unk_79530);
          if ( v300 == -1 )
          {
            sub_4BF00((__int64)"Please use Alt-G to mark blocks of VLE code (set vle=1).");
          }
          else
          {
            v301 = v300 == 1;
            v302 = v300 == 1;
            for ( n = get_first_seg(); n; n = get_next_seg(*(_QWORD *)(n + 8)) )
              set_default_sreg_value(n, 32, v302);
            sub_4BF00(
              (__int64)"All currently loaded segments have been set to vle=%d.\n"
                       "You can still override this manually using Alt-G.",
              v301);
          }
        }
        *(_WORD *)(a1 + 472) |= 0x8000u;
        setinf(66, *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 120LL));
        sub_4EA80(a1, 0);
        sub_4C430(a1);
        return 0;
      case 5uLL:
        v326 = *(_QWORD **)(a1 + 216);
        v553 = 0;
        p_s1 = &s1;
        s1 = nullptr;
        if ( netnode_qsupstr(*v326, &s1, 0, 83) >= 0 )
        {
          v328 = (char *)::s1;
          if ( (_QWORD)v553 )
            v328 = s1;
          netnode_supset(**(_QWORD **)(a1 + 216), -1, v328, 0, 83);
          p_s1 = nullptr;
          netnode_supdel(**(_QWORD **)(a1 + 216), 0, 83);
        }
        if ( s1 )
        {
          *(_QWORD *)&v553 = 0;
          qfree(s1, (const char *)p_s1);
        }
        goto LABEL_80;
      case 8uLL:
        v135 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v454 = *(const char ***)(a3 + 8);
          v455 = (int *)(v454 + 1);
          *(_QWORD *)(v10 + 8) = v454 + 1;
          v138 = *v454;
        }
        else
        {
          v136 = *(_QWORD *)(a3 + 16);
          v137 = v135 + 8;
          *(_DWORD *)v10 = v137;
          v138 = *(const char **)(v136 + v135);
          if ( (unsigned int)v137 <= 0x2F )
          {
            v139 = v135 + 16;
            *(_DWORD *)v10 = v139;
            v140 = *(_DWORD *)(v136 + v137);
            if ( (unsigned int)v139 <= 0x2F )
            {
              v141 = v135 + 24;
              *(_DWORD *)v10 = v141;
              v142 = *(__int64 **)(v136 + v139);
              if ( (unsigned int)v141 <= 0x2F )
              {
                v143 = v135 + 32;
                *(_DWORD *)v10 = v143;
                v144 = *(__int64 **)(v136 + v141);
                if ( (unsigned int)v143 <= 0x2F )
                {
                  v145 = (_DWORD *)(v143 + v136);
                  *(_DWORD *)v10 = v135 + 40;
                  goto LABEL_160;
                }
                v145 = *(_DWORD **)(v10 + 8);
LABEL_542:
                *(_QWORD *)(v10 + 8) = v145 + 2;
LABEL_160:
                v146 = sub_4F960(a1, v138, v140, v142, *v145 != 0, a4, a5);
                if ( v146 )
                {
                  if ( v144 )
                    *v144 = v146;
                  return -1;
                }
                return 1;
              }
              v457 = *(_QWORD ***)(v10 + 8);
LABEL_541:
              v145 = v457 + 1;
              *(_QWORD *)(v10 + 8) = v457 + 1;
              v144 = *v457;
              goto LABEL_542;
            }
            v456 = *(__int64 ***)(v10 + 8);
LABEL_540:
            v457 = v456 + 1;
            *(_QWORD *)(v10 + 8) = v456 + 1;
            v142 = *v456;
            goto LABEL_541;
          }
          v455 = *(int **)(v10 + 8);
        }
        v456 = (__int64 **)(v455 + 2);
        *(_QWORD *)(v10 + 8) = v455 + 2;
        v140 = *v455;
        goto LABEL_540;
      case 9uLL:
        v147 = *(_DWORD *)a3;
        if ( v147 > 0x2F )
        {
          v452 = *(const char ***)(v10 + 8);
          v453 = v452 + 1;
          *(_QWORD *)(v10 + 8) = v452 + 1;
          v149 = *v452;
        }
        else
        {
          v148 = (const char **)(*(_QWORD *)(v10 + 16) + v147);
          *(_DWORD *)v10 = v147 + 8;
          v149 = *v148;
          if ( v147 + 8 <= 0x2F )
          {
            *(_DWORD *)v10 = v147 + 16;
            goto LABEL_166;
          }
          v453 = *(const char ***)(v10 + 8);
        }
        *(_QWORD *)(v10 + 8) = v453 + 1;
LABEL_166:
        v548[1] = a1;
        v548[0] = &off_92B80;
        v549 = 0;
        v550 = nullptr;
        v551 = 0;
        if ( v149 )
        {
          v150 = strlen(v149);
          v151 = v150 + 1;
          v152 = v150;
          v550 = (void *)qvector_reserve(&v550, 0, v150 + 1, 1);
          *(_QWORD *)&v551 = v151;
          memmove(v550, v149, v152);
          *((_BYTE *)v550 + v152) = 0;
          v153 = v551;
        }
        else
        {
          v153 = 0;
        }
        v154 = 0;
        while ( 2 )
        {
          if ( !v153 )
          {
            v158 = -1;
            s1 = nullptr;
            v553 = 0;
            goto LABEL_176;
          }
          v155 = v153 - 1;
          v156 = v550;
          if ( v155 >= v154 && (v157 = strchr((const char *)v550 + v154, 59)) != nullptr )
          {
            v158 = v157 - v156;
            if ( v155 >= v157 - v156 )
            {
              if ( v154 > v158 )
                v154 = v157 - v156;
              v159 = v158 - v154;
              goto LABEL_175;
            }
          }
          else
          {
            v158 = -1;
          }
          if ( v154 > v155 )
            v154 = v155;
          v159 = v155 - v154;
LABEL_175:
          s1 = nullptr;
          v553 = 0;
          if ( v159 )
          {
            v399 = nullptr;
            v400 = v159 + 1;
            if ( v159 != -1 )
            {
              s1 = (char *)qvector_reserve(&s1, 0, v159 + 1, 1);
              v400 = v159 + 1;
              v399 = s1;
            }
            *(_QWORD *)&v553 = v400;
            memmove(v399, &v156[v154], v159);
            s1[v159] = 0;
          }
LABEL_176:
          if ( !(unsigned __int8)sub_4AA40((__int64)v548, (__int64)&s1) )
          {
            if ( s1 )
            {
              *(_QWORD *)&v553 = 0;
              qfree(s1, (const char *)&s1);
            }
            if ( v550 )
            {
              *(_QWORD *)&v551 = 0;
              qfree(v550, (const char *)&s1);
            }
            return -1;
          }
          v154 = v158 + 1;
          if ( s1 )
          {
            *(_QWORD *)&v553 = 0;
            qfree(s1, (const char *)&s1);
          }
          if ( v158 != -1 )
          {
            v153 = v551;
            continue;
          }
          break;
        }
        if ( v550 )
        {
          *(_QWORD *)&v551 = 0;
          qfree(v550, (const char *)&s1);
        }
        v507 = *(_QWORD *)(a1 + 120);
        s1 = (char *)*(unsigned int *)(a1 + 460);
        netnode_supset(v507, -4, &s1, 8, 65);
        return 0;
      case 0xAuLL:
        v115 = *(_DWORD *)a3;
        if ( v115 > 0x2F )
        {
          v116 = *(__int64 **)(v10 + 8);
          *(_QWORD *)(v10 + 8) = v116 + 1;
        }
        else
        {
          v116 = (__int64 *)(*(_QWORD *)(v10 + 16) + v115);
          *(_DWORD *)v10 = v115 + 8;
        }
        return (int)sub_31310(a1, *v116);
      case 0xBuLL:
        v320 = *(_DWORD *)a3;
        if ( v320 > 0x2F )
        {
          v321 = *(__int64 **)(v10 + 8);
          *(_QWORD *)(v10 + 8) = v321 + 1;
        }
        else
        {
          v321 = (__int64 *)(*(_QWORD *)(v10 + 16) + v320);
          *(_DWORD *)v10 = v320 + 8;
        }
        if ( !(unsigned int)sub_47940((_QWORD *)a1, *v321, a4, a5, a6) )
          return -1;
        return 1;
      case 0xCuLL:
        v289 = *(_DWORD *)a3;
        if ( v289 > 0x2F )
        {
          v290 = *(__int64 **)(v10 + 8);
          *(_QWORD *)(v10 + 8) = v290 + 1;
        }
        else
        {
          v290 = (__int64 *)(*(_QWORD *)(v10 + 16) + v289);
          *(_DWORD *)v10 = v289 + 8;
        }
        sub_49F20(a1, *v290, a4);
        return 1;
      case 0xDuLL:
        v291 = *(_DWORD *)a3;
        if ( v291 > 0x2F )
          *(_QWORD *)(v10 + 8) += 8LL;
        else
          *(_DWORD *)v10 = v291 + 8;
        nullsub_4();
        return 1;
      case 0xEuLL:
        v180 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v489 = *(__int64 **)(a3 + 8);
          v184 = v489 + 1;
          *(_QWORD *)(v10 + 8) = v489 + 1;
          v183 = *v489;
        }
        else
        {
          v181 = *(_QWORD *)(a3 + 16);
          v182 = v180 + 8;
          *(_DWORD *)v10 = v182;
          v183 = *(_QWORD *)(v181 + v180);
          if ( (unsigned int)v182 <= 0x2F )
          {
            v184 = (__int64 *)(v182 + v181);
            *(_DWORD *)v10 = v180 + 16;
            goto LABEL_208;
          }
          v184 = *(__int64 **)(v10 + 8);
        }
        *(_QWORD *)(v10 + 8) = v184 + 1;
LABEL_208:
        sub_49D00(a1, v183, *v184);
        return 1;
      case 0xFuLL:
        v185 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v448 = *(_QWORD *)(a3 + 8) + 8LL;
          *(_QWORD *)(v10 + 8) = v448;
        }
        else
        {
          *(_DWORD *)a3 = v185 + 8;
          if ( v185 + 8 <= 0x2F )
          {
            *(_DWORD *)a3 = v185 + 16;
            goto LABEL_212;
          }
          v448 = *(_QWORD *)(a3 + 8);
        }
        *(_QWORD *)(v10 + 8) = v448 + 8;
LABEL_212:
        nullsub_3();
        return 1;
      case 0x10uLL:
        v306 = *(_DWORD *)a3;
        if ( v306 > 0x2F )
        {
          v307 = *(__int64 **)(v10 + 8);
          *(_QWORD *)(v10 + 8) = v307 + 1;
        }
        else
        {
          v307 = (__int64 *)(*(_QWORD *)(v10 + 16) + v306);
          *(_DWORD *)v10 = v306 + 8;
        }
        sub_49BF0(a1, *v307);
        return 1;
      case 0x11uLL:
        v324 = *(_DWORD *)a3;
        if ( v324 > 0x2F )
        {
          v325 = *(_QWORD ***)(v10 + 8);
          *(_QWORD *)(v10 + 8) = v325 + 1;
        }
        else
        {
          v325 = (_QWORD **)(*(_QWORD *)(v10 + 16) + v324);
          *(_DWORD *)v10 = v324 + 8;
        }
        sub_49BE0(*v325);
        return 1;
      case 0x12uLL:
        v100 = *(_DWORD *)a3;
        if ( v100 > 0x2F )
        {
          v101 = *(__int64 **)(v10 + 8);
          *(_QWORD *)(v10 + 8) = v101 + 1;
        }
        else
        {
          v101 = (__int64 *)(*(_QWORD *)(v10 + 16) + v100);
          *(_DWORD *)v10 = v100 + 8;
        }
        sub_49850(*v101);
        return 1;
      case 0x13uLL:
        v284 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v488 = *(_QWORD ***)(a3 + 8);
          v288 = (unsigned __int8 **)(v488 + 1);
          *(_QWORD *)(v10 + 8) = v488 + 1;
          v287 = *v488;
        }
        else
        {
          v285 = *(_QWORD *)(a3 + 16);
          v286 = v284 + 8;
          *(_DWORD *)v10 = v286;
          v287 = *(_QWORD **)(v285 + v284);
          if ( (unsigned int)v286 <= 0x2F )
          {
            v288 = (unsigned __int8 **)(v286 + v285);
            *(_DWORD *)v10 = v284 + 16;
            goto LABEL_325;
          }
          v288 = *(unsigned __int8 ***)(v10 + 8);
        }
        *(_QWORD *)(v10 + 8) = v288 + 1;
LABEL_325:
        if ( !(unsigned __int8)sub_496D0(v287, *v288, a4) )
          return -1;
        return 1;
      case 0x14uLL:
        v102 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v437 = *(__int64 **)(a3 + 8);
          v106 = v437 + 1;
          *(_QWORD *)(v10 + 8) = v437 + 1;
          v105 = *v437;
        }
        else
        {
          v103 = *(_QWORD *)(a3 + 16);
          v104 = v102 + 8;
          *(_DWORD *)v10 = v104;
          v105 = *(_QWORD *)(v103 + v102);
          if ( (unsigned int)v104 <= 0x2F )
          {
            v106 = (_DWORD *)(v104 + v103);
            *(_DWORD *)v10 = v102 + 16;
            goto LABEL_122;
          }
          v106 = *(_DWORD **)(v10 + 8);
        }
        *(_QWORD *)(v10 + 8) = v106 + 2;
LABEL_122:
        sub_4A9A0(a1, v105, *v106 != 0);
        return 1;
      case 0x15uLL:
        v107 = *(_DWORD *)a3;
        if ( v107 > 0x2F )
        {
          v108 = *(__int64 **)(v10 + 8);
          *(_QWORD *)(v10 + 8) = v108 + 1;
        }
        else
        {
          v108 = (__int64 *)(*(_QWORD *)(v10 + 16) + v107);
          *(_DWORD *)v10 = v107 + 8;
        }
        v109 = *v108;
        v110 = sub_4A420(a1, *v108, 0);
        sub_484A0(v109, v110);
        return 0;
      case 0x16uLL:
        v172 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v447 = *(__int64 **)(a3 + 8);
          v176 = (unsigned __int8 *)(v447 + 1);
          *(_QWORD *)(v10 + 8) = v447 + 1;
          v175 = *v447;
        }
        else
        {
          v173 = *(_QWORD *)(a3 + 16);
          v174 = v172 + 8;
          *(_DWORD *)v10 = v174;
          v175 = *(_QWORD *)(v173 + v172);
          if ( (unsigned int)v174 <= 0x2F )
          {
            v176 = (unsigned __int8 *)(v174 + v173);
            *(_DWORD *)v10 = v172 + 16;
            goto LABEL_200;
          }
          v176 = *(unsigned __int8 **)(v10 + 8);
        }
        *(_QWORD *)(v10 + 8) = v176 + 8;
LABEL_200:
        sub_4A840(a1, v175, *v176);
        return 1;
      case 0x1CuLL:
        v177 = *(_DWORD *)a3;
        if ( v177 > 0x2F )
        {
          v178 = *(_QWORD **)(v10 + 8);
          *(_QWORD *)(v10 + 8) = v178 + 1;
        }
        else
        {
          v178 = (_QWORD *)(*(_QWORD *)(v10 + 16) + v177);
          *(_DWORD *)v10 = v177 + 8;
        }
        v179 = *v178;
        netnode_supdel(*(_QWORD *)(a1 + 120), *v178, 321);
        netnode_supdel(*(_QWORD *)(a1 + 104), v179, 256);
        return 1;
      case 0x21uLL:
        v304 = *(_DWORD *)a3;
        if ( v304 > 0x2F )
        {
          v305 = *(__int64 **)(v10 + 8);
          *(_QWORD *)(v10 + 8) = v305 + 1;
        }
        else
        {
          v305 = (__int64 *)(*(_QWORD *)(v10 + 16) + v304);
          *(_DWORD *)v10 = v304 + 8;
        }
        if ( !(unsigned __int8)sub_34B50(*v305) )
          return -1;
        return 1;
      case 0x22uLL:
        v318 = *(_DWORD *)a3;
        if ( v318 > 0x2F )
        {
          v319 = *(_QWORD *)(v10 + 8);
          *(_QWORD *)(v10 + 8) = v319 + 8;
        }
        else
        {
          v319 = *(_QWORD *)(v10 + 16) + v318;
          *(_DWORD *)v10 = v318 + 8;
        }
        if ( (*(_BYTE *)(*(_QWORD *)v319 + 28LL) & 8) == 0 )
          return -1;
        return 1;
      case 0x23uLL:
        v122 = *(_DWORD *)a3;
        if ( v122 > 0x2F )
        {
          v123 = *(__int64 **)(v10 + 8);
          *(_QWORD *)(v10 + 8) = v123 + 1;
        }
        else
        {
          v123 = (__int64 *)(*(_QWORD *)(v10 + 16) + v122);
          *(_DWORD *)v10 = v122 + 8;
        }
        if ( !sub_34FC0(a1, *v123) )
          return -1;
        return 1;
      case 0x24uLL:
        v124 = *(_DWORD *)a3;
        if ( v124 > 0x2F )
        {
          v125 = *(__int64 **)(v10 + 8);
          *(_QWORD *)(v10 + 8) = v125 + 1;
        }
        else
        {
          v125 = (__int64 *)(*(_QWORD *)(v10 + 16) + v124);
          *(_DWORD *)v10 = v124 + 8;
        }
        return (int)sub_37380(a1, *v125);
      case 0x25uLL:
        v292 = *(_DWORD *)a3;
        if ( v292 > 0x2F )
        {
          v293 = *(__int64 **)(v10 + 8);
          *(_QWORD *)(v10 + 8) = v293 + 1;
        }
        else
        {
          v293 = (__int64 *)(*(_QWORD *)(v10 + 16) + v292);
          *(_DWORD *)v10 = v292 + 8;
        }
        return sub_34FC0(a1, *v293);
      case 0x26uLL:
        v322 = *(_DWORD *)a3;
        if ( v322 > 0x2F )
        {
          v323 = *(_QWORD *)(v10 + 8);
          *(_QWORD *)(v10 + 8) = v323 + 8;
        }
        else
        {
          v323 = *(_QWORD *)(v10 + 16) + v322;
          *(_DWORD *)v10 = v322 + 8;
        }
        result = 2;
        if ( (*(_BYTE *)(*(_QWORD *)v323 + 29LL) & 3) == 0 )
          return 2LL * (*(_WORD *)(*(_QWORD *)v323 + 24LL) == 2082);
        return result;
      case 0x29uLL:
        v202 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v449 = *(__int64 ***)(a3 + 8);
          v450 = v449 + 1;
          *(_QWORD *)(v10 + 8) = v449 + 1;
          v205 = *v449;
        }
        else
        {
          v203 = *(_QWORD *)(a3 + 16);
          v204 = v202 + 8;
          *(_DWORD *)v10 = v204;
          v205 = *(__int64 **)(v203 + v202);
          if ( (unsigned int)v204 <= 0x2F )
          {
            v206 = v202 + 16;
            *(_DWORD *)v10 = v206;
            v207 = *(__int64 **)(v203 + v204);
            if ( (unsigned int)v206 <= 0x2F )
            {
              v208 = v202 + 24;
              *(_DWORD *)v10 = v208;
              v209 = *(_QWORD *)(v203 + v206);
              if ( (unsigned int)v208 <= 0x2F )
              {
                v210 = (__int64 *)(v208 + v203);
                *(_DWORD *)v10 = v202 + 32;
                return (int)sub_3ECC0(a1, v205, v207, v209, *v210);
              }
              v210 = *(__int64 **)(v10 + 8);
LABEL_533:
              *(_QWORD *)(v10 + 8) = v210 + 1;
              return (int)sub_3ECC0(a1, v205, v207, v209, *v210);
            }
            v451 = *(__int64 **)(v10 + 8);
LABEL_532:
            v210 = v451 + 1;
            *(_QWORD *)(v10 + 8) = v451 + 1;
            v209 = *v451;
            goto LABEL_533;
          }
          v450 = *(__int64 ***)(v10 + 8);
        }
        v451 = (__int64 *)(v450 + 1);
        *(_QWORD *)(v10 + 8) = v450 + 1;
        v207 = *v450;
        goto LABEL_532;
      case 0x2AuLL:
        v308 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v487 = *(__int64 **)(a3 + 8);
          v312 = v487 + 1;
          *(_QWORD *)(v10 + 8) = v487 + 1;
          v311 = *v487;
        }
        else
        {
          v309 = *(_QWORD *)(a3 + 16);
          v310 = v308 + 8;
          *(_DWORD *)v10 = v310;
          v311 = *(_QWORD *)(v309 + v308);
          if ( (unsigned int)v310 <= 0x2F )
          {
            v312 = (__int64 *)(v310 + v309);
            *(_DWORD *)v10 = v308 + 16;
            return (int)sub_3EB00(a1, v311, *v312);
          }
          v312 = *(__int64 **)(v10 + 8);
        }
        *(_QWORD *)(v10 + 8) = v312 + 1;
        return (int)sub_3EB00(a1, v311, *v312);
      case 0x2BuLL:
        v211 = *(_DWORD *)a3;
        if ( v211 > 0x2F )
        {
          v212 = *(__int64 **)(v10 + 8);
          *(_QWORD *)(v10 + 8) = v212 + 1;
        }
        else
        {
          v212 = (__int64 *)(*(_QWORD *)(v10 + 16) + v211);
          *(_DWORD *)v10 = v211 + 8;
        }
        v213 = *v212;
        v555 = -1;
        v214 = &v558;
        v554 = -1;
        v556 = 0;
        v557 = 0;
        do
        {
          *(_WORD *)v214 = 0;
          v214 += 40;
          *((_WORD *)v214 - 19) = 0;
          *((_WORD *)v214 - 18) = 0;
          *((_DWORD *)v214 - 2) = 0;
          *((_WORD *)v214 - 17) = 0;
          *((_OWORD *)v214 - 2) = 0;
          *((_QWORD *)v214 - 2) = 0;
        }
        while ( v559 != v214 );
        if ( (int)decode_insn(&v554, v213, v559, 0.0) <= 0 )
          return 0;
        return (int)sub_39180(a1, (__int64)&v554);
      case 0x2EuLL:
        v215 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v463 = *(_DWORD ***)(a3 + 8);
          v464 = (__int64 *)(v463 + 1);
          *(_QWORD *)(v10 + 8) = v463 + 1;
          v218 = *v463;
        }
        else
        {
          v216 = *(_QWORD *)(a3 + 16);
          v217 = v215 + 8;
          *(_DWORD *)v10 = v217;
          v218 = *(_DWORD **)(v216 + v215);
          if ( (unsigned int)v217 <= 0x2F )
          {
            v219 = v215 + 16;
            *(_DWORD *)v10 = v219;
            v220 = *(_QWORD *)(v216 + v217);
            if ( (unsigned int)v219 <= 0x2F )
            {
              v221 = (__int64 *)(v219 + v216);
              *(_DWORD *)v10 = v215 + 24;
              goto LABEL_243;
            }
            v221 = *(__int64 **)(v10 + 8);
LABEL_552:
            *(_QWORD *)(v10 + 8) = v221 + 1;
LABEL_243:
            v222 = *v221;
            *v218 = 0;
            v223 = *(_BYTE *)(v222 + 1);
            if ( v223 == 4 )
            {
              if ( *(_WORD *)(v222 + 6) != 1 )
                return 1;
            }
            else if ( v223 != 5
                   || *(_BYTE *)v222 != 2
                   || (unsigned __int16)(*(_WORD *)(v220 + 24) - 4) > 1u
                   || *(_BYTE *)(v220 + 41) == 1 && *(_WORD *)(v220 + 46) == 1
                   || *(_BYTE *)(v220 + 81) != 1
                   || *(_WORD *)(v220 + 86) != 1 )
            {
              return 1;
            }
            *v218 = 1;
            return 1;
          }
          v464 = *(__int64 **)(v10 + 8);
        }
        v221 = v464 + 1;
        *(_QWORD *)(v10 + 8) = v464 + 1;
        v220 = *v464;
        goto LABEL_552;
      case 0x31uLL:
        v73 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v440 = *(__int64 **)(a3 + 8);
          v441 = v440 + 1;
          *(_QWORD *)(v10 + 8) = v440 + 1;
          v75 = *v440;
        }
        else
        {
          v74 = *(_QWORD *)(a3 + 16);
          *(_DWORD *)v10 = v73 + 8;
          v75 = *(_QWORD *)(v74 + v73);
          if ( v73 + 8 <= 0x2F )
          {
            *(_DWORD *)v10 = v73 + 16;
            if ( v73 + 16 > 0x2F )
              goto LABEL_708;
            v76 = v73 + 24;
            *(_DWORD *)v10 = v76;
            if ( (unsigned int)v76 <= 0x2F )
            {
              v77 = (unsigned __int16 **)(v76 + v74);
              *(_DWORD *)v10 = v73 + 32;
              goto LABEL_91;
            }
            v77 = *(unsigned __int16 ***)(v10 + 8);
LABEL_514:
            *(_QWORD *)(v10 + 8) = v77 + 1;
LABEL_91:
            v78 = *v77;
            v79 = *v78;
            if ( *v78 == 4 )
            {
              if ( (v78[2] & 1) != 0 )
                *(_DWORD *)(v75 + 24) |= 0x200u;
              return 1;
            }
            if ( v79 <= 4u )
            {
              if ( v79 == 1 )
                goto LABEL_95;
            }
            else if ( ((v79 - 7) & 0xFFFD) == 0 )
            {
              goto LABEL_95;
            }
            if ( *(_WORD *)(a1 + 536) != v79 )
              return 1;
LABEL_95:
            *(_DWORD *)(v75 + 24) |= 0x80u;
            return 1;
          }
          v441 = *(_QWORD **)(v10 + 8);
        }
        v442 = v441 + 1;
        goto LABEL_513;
      case 0x37uLL:
        v80 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v438 = *(const __m128i ***)(a3 + 8);
          v439 = (_QWORD **)(v438 + 1);
          *(_QWORD *)(v10 + 8) = v438 + 1;
          v83 = *v438;
        }
        else
        {
          v81 = *(_QWORD *)(a3 + 16);
          v82 = v80 + 8;
          *(_DWORD *)v10 = v82;
          v83 = *(const __m128i **)(v81 + v80);
          if ( (unsigned int)v82 <= 0x2F )
          {
            v84 = v80 + 16;
            *(_DWORD *)v10 = v84;
            v85 = *(_QWORD **)(v81 + v82);
            if ( (unsigned int)v84 <= 0x2F )
            {
              v86 = (_QWORD **)(v84 + v81);
              *(_DWORD *)v10 = v80 + 24;
              goto LABEL_100;
            }
            v86 = *(_QWORD ***)(v10 + 8);
LABEL_510:
            *(_QWORD *)(v10 + 8) = v86 + 1;
LABEL_100:
            v87 = *v86;
            v88 = *(_QWORD *)(a1 + 344);
            if ( v83->m128i_i64[0] == v88 )
            {
LABEL_103:
              if ( v88 != -1 )
              {
                *v85 = *(_QWORD *)(a1 + 360);
                *v87 = *(_QWORD *)(a1 + 368);
                return 1;
              }
              return 0;
            }
            *(__m128i *)(a1 + 344) = _mm_loadu_si128(v83);
            if ( (unsigned __int8)sub_35AD0(a1, (__int64 *)(a1 + 344), (__int64 *)(a1 + 360), (char **)(a1 + 368)) )
            {
              v88 = *(_QWORD *)(a1 + 344);
              goto LABEL_103;
            }
            *(_QWORD *)(a1 + 344) = -1;
            return 0;
          }
          v439 = *(_QWORD ***)(v10 + 8);
        }
        v86 = v439 + 1;
        *(_QWORD *)(v10 + 8) = v439 + 1;
        v85 = *v439;
        goto LABEL_510;
      case 0x3BuLL:
        v89 = *(_DWORD *)a3;
        if ( v89 > 0x2F )
        {
          v90 = *(_QWORD **)(v10 + 8);
          *(_QWORD *)(v10 + 8) = v90 + 1;
        }
        else
        {
          v90 = (_QWORD *)(*(_QWORD *)(v10 + 16) + v89);
          *(_DWORD *)v10 = v89 + 8;
        }
        sub_58BC0(a1, *v90, 0);
        return 1;
      case 0x3CuLL:
        v91 = *(_DWORD *)a3;
        if ( v91 > 0x2F )
        {
          v92 = *(_DWORD ***)(v10 + 8);
          *(_QWORD *)(v10 + 8) = v92 + 1;
        }
        else
        {
          v92 = (_DWORD **)(*(_QWORD *)(v10 + 16) + v91);
          *(_DWORD *)v10 = v91 + 8;
        }
        **v92 = 0;
        return 1;
      case 0x3FuLL:
        v93 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v465 = *(__int64 **)(a3 + 8);
          v466 = v465 + 1;
          *(_QWORD *)(v10 + 8) = v465 + 1;
          v96 = *v465;
        }
        else
        {
          v94 = *(_QWORD *)(a3 + 16);
          v95 = v93 + 8;
          *(_DWORD *)v10 = v95;
          v96 = *(_QWORD *)(v94 + v93);
          if ( (unsigned int)v95 <= 0x2F )
          {
            v97 = v93 + 16;
            *(_DWORD *)v10 = v97;
            v98 = *(_QWORD *)(v94 + v95);
            if ( (unsigned int)v97 <= 0x2F )
            {
              v99 = (unsigned int *)(v97 + v94);
              *(_DWORD *)v10 = v93 + 24;
              goto LABEL_115;
            }
            v99 = *(unsigned int **)(v10 + 8);
LABEL_556:
            *(_QWORD *)(v10 + 8) = v99 + 2;
LABEL_115:
            invalidate_regfinder_cache(v98, v96, *v99);
            return 0;
          }
          v466 = *(_QWORD **)(v10 + 8);
        }
        v99 = (unsigned int *)(v466 + 1);
        *(_QWORD *)(v10 + 8) = v466 + 1;
        v98 = *v466;
        goto LABEL_556;
      case 0x41uLL:
        v167 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v479 = *(__int64 **)(a3 + 8);
          v171 = v479 + 1;
          *(_QWORD *)(v10 + 8) = v479 + 1;
          v170 = *v479;
        }
        else
        {
          v168 = *(_QWORD *)(a3 + 16);
          v169 = v167 + 8;
          *(_DWORD *)v10 = v169;
          v170 = *(_QWORD *)(v168 + v167);
          if ( (unsigned int)v169 <= 0x2F )
          {
            v171 = (_QWORD *)(v169 + v168);
            *(_DWORD *)v10 = v167 + 16;
            goto LABEL_196;
          }
          v171 = *(_QWORD **)(v10 + 8);
        }
        *(_QWORD *)(v10 + 8) = v171 + 1;
LABEL_196:
        invalidate_regfinder_cache(*v171, v170, 0);
        return 0;
      case 0x43uLL:
        v160 = *(_DWORD *)a3;
        if ( v160 > 0x2F )
        {
          v498 = (__int64 *)(*(_QWORD *)(v10 + 8) + 8LL);
        }
        else
        {
          v161 = v160 + 8;
          *(_DWORD *)v10 = v161;
          if ( (unsigned int)v161 <= 0x2F )
          {
            v162 = (__int64 *)(*(_QWORD *)(v10 + 16) + v161);
            *(_DWORD *)v10 = v160 + 16;
            v163 = *v162;
            if ( v160 + 16 <= 0x2F )
            {
              *(_DWORD *)v10 = v160 + 24;
              if ( v160 + 24 <= 0x2F )
              {
                *(_DWORD *)v10 = v160 + 32;
                return (unsigned __int8)sub_393C0(a1, v163);
              }
              v500 = *(__int64 **)(v10 + 8);
LABEL_626:
              *(_QWORD *)(v10 + 8) = v500 + 1;
              return (unsigned __int8)sub_393C0(a1, v163);
            }
            v499 = *(__int64 **)(v10 + 8);
LABEL_625:
            v500 = v499 + 1;
            goto LABEL_626;
          }
          v498 = *(__int64 **)(v10 + 8);
        }
        v499 = v498 + 1;
        *(_QWORD *)(v10 + 8) = v498 + 1;
        v163 = *v498;
        goto LABEL_625;
      case 0x50uLL:
        v164 = *(_DWORD *)a3;
        if ( v164 > 0x2F )
        {
          v165 = *(_QWORD **)(v10 + 8);
          *(_QWORD *)(v10 + 8) = v165 + 1;
        }
        else
        {
          v165 = (_QWORD *)(*(_QWORD *)(v10 + 16) + v164);
          *(_DWORD *)v10 = v164 + 8;
        }
        func = get_func(*v165);
        if ( func )
          sub_58BC0(a1, func, 1);
        return 1;
      case 0x51uLL:
        v117 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v483 = *(_QWORD ***)(a3 + 8);
          v121 = (__int64 *)(v483 + 1);
          *(_QWORD *)(v10 + 8) = v483 + 1;
          v120 = *v483;
        }
        else
        {
          v118 = *(_QWORD *)(a3 + 16);
          v119 = v117 + 8;
          *(_DWORD *)v10 = v119;
          v120 = *(__int64 **)(v118 + v117);
          if ( (unsigned int)v119 <= 0x2F )
          {
            v121 = (__int64 *)(v119 + v118);
            *(_DWORD *)v10 = v117 + 16;
            goto LABEL_135;
          }
          v121 = *(__int64 **)(v10 + 8);
        }
        *(_QWORD *)(v10 + 8) = v121 + 1;
LABEL_135:
        *v120 = sub_3F8C0(a1, *v121);
        return 1;
      case 0x52uLL:
        v224 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v485 = *(__int64 ***)(a3 + 8);
          v486 = v485 + 1;
          *(_QWORD *)(v10 + 8) = v485 + 1;
          v227 = *v485;
        }
        else
        {
          v225 = *(_QWORD *)(a3 + 16);
          v226 = v224 + 8;
          *(_DWORD *)v10 = v226;
          v227 = *(__int64 **)(v225 + v224);
          if ( (unsigned int)v226 <= 0x2F )
          {
            v228 = v224 + 16;
            *(_DWORD *)v10 = v228;
            v229 = *(_QWORD **)(v225 + v226);
            if ( (unsigned int)v228 <= 0x2F )
            {
              v230 = (__int64 *)(v228 + v225);
              *(_DWORD *)v10 = v224 + 24;
              return sub_311C0(v227, v229, *v230);
            }
            v230 = *(__int64 **)(v10 + 8);
LABEL_598:
            *(_QWORD *)(v10 + 8) = v230 + 1;
            return sub_311C0(v227, v229, *v230);
          }
          v486 = *(_QWORD ***)(v10 + 8);
        }
        v230 = (__int64 *)(v486 + 1);
        *(_QWORD *)(v10 + 8) = v486 + 1;
        v229 = *v486;
        goto LABEL_598;
      case 0x53uLL:
        v186 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v445 = *(__int64 **)(a3 + 8);
          v446 = v445 + 1;
          *(_QWORD *)(v10 + 8) = v445 + 1;
          v189 = *v445;
        }
        else
        {
          v187 = *(_QWORD *)(a3 + 16);
          v188 = v186 + 8;
          *(_DWORD *)v10 = v188;
          v189 = *(_QWORD *)(v187 + v186);
          if ( (unsigned int)v188 <= 0x2F )
          {
            v190 = v186 + 16;
            *(_DWORD *)v10 = v190;
            v191 = *(_QWORD *)(v187 + v188);
            if ( (unsigned int)v190 <= 0x2F )
            {
              v192 = (unsigned int *)(v190 + v187);
              *(_DWORD *)v10 = v186 + 24;
              goto LABEL_217;
            }
            v192 = *(unsigned int **)(v10 + 8);
LABEL_521:
            *(_QWORD *)(v10 + 8) = v192 + 2;
LABEL_217:
            if ( !(unsigned __int8)sub_5B600(a1, v189, *(_QWORD *)(v191 + 16), *v192, 0) )
              return -1;
            return 1;
          }
          v446 = *(_QWORD **)(v10 + 8);
        }
        v192 = (unsigned int *)(v446 + 1);
        *(_QWORD *)(v10 + 8) = v446 + 1;
        v191 = *v446;
        goto LABEL_521;
      case 0x54uLL:
        v193 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v481 = *(__int64 **)(a3 + 8);
          v482 = v481 + 1;
          *(_QWORD *)(v10 + 8) = v481 + 1;
          v196 = *v481;
        }
        else
        {
          v194 = *(_QWORD *)(a3 + 16);
          v195 = v193 + 8;
          *(_DWORD *)v10 = v195;
          v196 = *(_QWORD *)(v194 + v193);
          if ( (unsigned int)v195 <= 0x2F )
          {
            v197 = v193 + 16;
            *(_DWORD *)v10 = v197;
            v198 = *(_QWORD *)(v194 + v195);
            if ( (unsigned int)v197 <= 0x2F )
            {
              v199 = (int *)(v197 + v194);
              *(_DWORD *)v10 = v193 + 24;
              goto LABEL_223;
            }
            v199 = *(int **)(v10 + 8);
LABEL_587:
            *(_QWORD *)(v10 + 8) = v199 + 2;
LABEL_223:
            v200 = *v199;
            if ( (unsigned int)v200 > 5 )
              return -1;
            v201 = get_func(*(_QWORD *)(v198 + 16));
            if ( !v201 || !(unsigned __int8)sub_5B7C0(a1, v196, v201, v198, v198 + 8 * (5 * v200 + 5)) )
              return -1;
            return 1;
          }
          v482 = *(_QWORD **)(v10 + 8);
        }
        v199 = (int *)(v482 + 1);
        *(_QWORD *)(v10 + 8) = v482 + 1;
        v198 = *v482;
        goto LABEL_587;
      case 0x56uLL:
        v60 = *(_QWORD *)(a1 + 16);
        if ( !getinf_buf(1) )
          s[0] = 0;
        s1 = nullptr;
        v553 = 0;
        v61 = strlen(s);
        v62 = v61 + 1;
        v63 = v61;
        s1 = (char *)qvector_reserve(&s1, 0, v61 + 1, 1);
        *(_QWORD *)&v553 = v62;
        memmove(s1, s, v63);
        s1[v63] = 0;
        v64 = *(_BYTE ***)(v60 + 24);
        v65 = *v64;
        if ( !*v64 )
          goto LABEL_706;
        v66 = s1;
        v67 = (char *)::s1;
        if ( (_QWORD)v553 )
          v67 = s1;
        v68 = 0;
        do
        {
          v69 = &v65[*v65 == 45];
          if ( !strcmp(v67, v69) )
          {
            if ( v66 )
            {
              *(_QWORD *)&v553 = 0;
              qfree(v66, v69);
            }
            setinf_flag(3, 32, (_DWORD)v68 == 0);
            invalidate_regfinder_cache(-1, -1, 0);
LABEL_80:
            sub_4FF80(a1, 0.0);
            sub_4EA80(a1, 0);
            if ( !(unsigned __int8)getinf(66) )
              setinf(66, *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 120LL));
            v70 = *(_QWORD *)(a1 + 120);
            s1 = (char *)*(unsigned __int16 *)(a1 + 472);
            netnode_supset(v70, -3, &s1, 8, 65);
            return 0;
          }
          v65 = v64[++v68];
        }
        while ( v65 );
LABEL_706:
        if ( under_debugger )
          BUG();
        v75 = 10336;
        v10 = interr(10336);
LABEL_708:
        v442 = *(_QWORD **)(v10 + 8);
LABEL_513:
        v77 = (unsigned __int16 **)(v442 + 1);
        goto LABEL_514;
      case 0x57uLL:
        goto LABEL_61;
      case 0x58uLL:
        goto LABEL_66;
      case 0x5EuLL:
        v111 = *(_DWORD *)a3;
        if ( v111 > 0x2F )
        {
          v114 = *(_QWORD **)(v10 + 8);
          v113 = (_DWORD)v114 + 8;
          *(_QWORD *)(v10 + 8) = v114 + 1;
        }
        else
        {
          v112 = v111;
          v113 = v111 + 8;
          v114 = (_QWORD *)(*(_QWORD *)(v10 + 16) + v112);
          *(_DWORD *)v10 = v113;
        }
        sub_5E470(*v114, (_DWORD)a2, v113, (_DWORD)v114, a8, a9);
        return 0;
      case 0x5FuLL:
        netnode_check(a1 + 120, "$ toc", 0, 1);
        return 0;
      case 0x60uLL:
        v264 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v501 = *(_QWORD **)(a3 + 8);
          v502 = v501 + 1;
          *(_QWORD *)(v10 + 8) = v501 + 1;
          v267 = *v501;
        }
        else
        {
          v265 = *(_QWORD *)(a3 + 16);
          v266 = v264 + 8;
          *(_DWORD *)v10 = v266;
          v267 = *(_QWORD *)(v265 + v264);
          if ( (unsigned int)v266 <= 0x2F )
          {
            v268 = v264 + 16;
            *(_DWORD *)v10 = v268;
            v269 = *(_DWORD *)(v265 + v266);
            if ( (unsigned int)v268 <= 0x2F )
            {
              v270 = v264 + 24;
              *(_DWORD *)v10 = v270;
              v271 = *(_QWORD *)(v265 + v268);
              if ( (unsigned int)v270 <= 0x2F )
              {
                v272 = v264 + 32;
                *(_DWORD *)v10 = v272;
                v273 = *(_QWORD *)(v265 + v270);
                if ( (unsigned int)v272 <= 0x2F )
                {
                  v274 = v264 + 40;
                  *(_DWORD *)v10 = v274;
                  v275 = *(_DWORD *)(v265 + v272);
                  if ( (unsigned int)v274 <= 0x2F )
                  {
                    v276 = (_QWORD *)(v274 + v265);
                    *(_DWORD *)v10 = v264 + 48;
                    return (int)sub_5EFA0(a1, *v276, v267, (unsigned __int8)v269, v271, v273, v275);
                  }
                  v276 = *(_QWORD **)(v10 + 8);
LABEL_632:
                  *(_QWORD *)(v10 + 8) = v276 + 1;
                  return (int)sub_5EFA0(a1, *v276, v267, (unsigned __int8)v269, v271, v273, v275);
                }
                v505 = *(_DWORD **)(v10 + 8);
LABEL_631:
                v276 = v505 + 2;
                *(_QWORD *)(v10 + 8) = v505 + 2;
                v275 = *v505;
                goto LABEL_632;
              }
              v504 = *(_QWORD **)(v10 + 8);
LABEL_630:
              v505 = v504 + 1;
              *(_QWORD *)(v10 + 8) = v504 + 1;
              v273 = *v504;
              goto LABEL_631;
            }
            v503 = *(__int64 **)(v10 + 8);
LABEL_629:
            v504 = v503 + 1;
            *(_QWORD *)(v10 + 8) = v503 + 1;
            v271 = *v503;
            goto LABEL_630;
          }
          v502 = *(_DWORD **)(v10 + 8);
        }
        v503 = (__int64 *)(v502 + 2);
        *(_QWORD *)(v10 + 8) = v502 + 2;
        v269 = *v502;
        goto LABEL_629;
      case 0x62uLL:
        return *(_QWORD *)(a1 + 336);
      case 0x63uLL:
        v277 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v467 = *(__int64 **)(a3 + 8);
          v468 = v467 + 1;
          *(_QWORD *)(v10 + 8) = v467 + 1;
          v280 = *v467;
        }
        else
        {
          v278 = *(_QWORD *)(a3 + 16);
          v279 = v277 + 8;
          *(_DWORD *)v10 = v279;
          v280 = *(_QWORD *)(v278 + v277);
          if ( (unsigned int)v279 <= 0x2F )
          {
            v281 = v277 + 16;
            *(_DWORD *)v10 = v281;
            v282 = *(_QWORD *)(v278 + v279);
            if ( (unsigned int)v281 <= 0x2F )
            {
              v283 = (__int64 *)(v281 + v278);
              *(_DWORD *)v10 = v277 + 24;
              goto LABEL_321;
            }
            v283 = *(__int64 **)(v10 + 8);
LABEL_559:
            *(_QWORD *)(v10 + 8) = v283 + 1;
LABEL_321:
            sub_48400(v280, v282, *v283);
            return 1;
          }
          v468 = *(__int64 **)(v10 + 8);
        }
        v283 = v468 + 1;
        *(_QWORD *)(v10 + 8) = v468 + 1;
        v282 = *v468;
        goto LABEL_559;
      case 0x64uLL:
        v126 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v484 = *(_DWORD ***)(a3 + 8);
          v130 = (__int64 *)(v484 + 1);
          *(_QWORD *)(v10 + 8) = v484 + 1;
          v129 = *v484;
        }
        else
        {
          v127 = *(_QWORD *)(a3 + 16);
          v128 = v126 + 8;
          *(_DWORD *)v10 = v128;
          v129 = *(_DWORD **)(v127 + v126);
          if ( (unsigned int)v128 <= 0x2F )
          {
            v130 = (__int64 *)(v128 + v127);
            *(_DWORD *)v10 = v126 + 16;
            goto LABEL_146;
          }
          v130 = *(__int64 **)(v10 + 8);
        }
        *(_QWORD *)(v10 + 8) = v130 + 1;
LABEL_146:
        v131 = *v130;
        if ( (unsigned __int16)(*(_WORD *)(v131 + 24) - 4) > 1u )
          return 0;
        *v129 = 0;
        if ( *(_BYTE *)(v131 + 121) == 5 )
          return 3;
        else
          return 2LL * (*(_BYTE *)(v131 + 81) == 5);
      default:
        return 0;
    }
  }
  if ( (__int64)a2 > 3016 )
    return 0;
  if ( (__int64)a2 <= 3000 )
  {
    if ( (__int64)a2 > 2020 )
      return 0;
    if ( (__int64)a2 > 2000 )
    {
      v15 = (unsigned __int64)(a2 - 2001);
      switch ( v15 )
      {
        case 0uLL:
          v364 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v490 = *(__int64 **)(a3 + 8);
            v491 = v490 + 1;
            *(_QWORD *)(v10 + 8) = v490 + 1;
            v367 = *v490;
          }
          else
          {
            v365 = *(_QWORD *)(a3 + 16);
            v366 = v364 + 8;
            *(_DWORD *)v10 = v366;
            v367 = *(_QWORD *)(v365 + v364);
            if ( (unsigned int)v366 <= 0x2F )
            {
              *(_DWORD *)v10 = v364 + 16;
              v368 = *(_QWORD *)(v365 + v366);
              if ( v364 + 16 <= 0x2F )
              {
                *(_DWORD *)v10 = v364 + 24;
                goto LABEL_422;
              }
              v492 = *(__int64 **)(v10 + 8);
LABEL_611:
              *(_QWORD *)(v10 + 8) = v492 + 1;
LABEL_422:
              sub_4CFC0(v367, v368);
              return 1;
            }
            v491 = *(__int64 **)(v10 + 8);
          }
          v492 = v491 + 1;
          *(_QWORD *)(v10 + 8) = v491 + 1;
          v368 = *v491;
          goto LABEL_611;
        case 3uLL:
          v376 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v431 = *(unsigned int ***)(a3 + 8);
            v379 = (unsigned int *)(v431 + 1);
            *(_QWORD *)(v10 + 8) = v431 + 1;
            v378 = *v431;
          }
          else
          {
            v377 = *(_QWORD *)(a3 + 16);
            v15 = v376 + 8;
            *(_DWORD *)v10 = v15;
            v378 = *(unsigned int **)(v377 + v376);
            if ( (unsigned int)v15 <= 0x2F )
            {
              v379 = (unsigned int *)(v15 + v377);
              *(_DWORD *)v10 = v376 + 16;
              goto LABEL_432;
            }
            v379 = *(unsigned int **)(v10 + 8);
          }
          *(_QWORD *)(v10 + 8) = v379 + 2;
LABEL_432:
          v380 = *v379;
          if ( *v379 == 112 || v380 == 64 )
          {
            sub_40880(a1, (__int64)v378, a4);
            return 1;
          }
          if ( (v380 & 0xFFFFFFEF) == 0x80 )
          {
            v381 = *((_QWORD *)v378 + 1);
            *v378 = 0;
            if ( v381 )
            {
              *((_QWORD *)v378 + 2) = 0;
              qfree(v381, (const char *)v15);
              *((_QWORD *)v378 + 1) = 0;
              *((_QWORD *)v378 + 3) = 0;
            }
            v382 = *((_QWORD *)v378 + 4);
            if ( v382 )
            {
              *((_QWORD *)v378 + 5) = 0;
              qfree(v382, (const char *)v15);
              *((_QWORD *)v378 + 4) = 0;
              *((_QWORD *)v378 + 6) = 0;
            }
            v383 = *((_QWORD *)v378 + 2);
            v384 = *v378;
            v378[1] = v383;
            if ( (unsigned int)v384 <= 6 )
            {
              v385 = 84;
              if ( _bittest64(&v385, v384) )
                v378[1] = v378[10] + v383;
            }
            return 1;
          }
          if ( v380 <= 0x10 )
            v380 = getinf(99);
          if ( v380 != 176 )
            return 0;
          if ( (unsigned __int64)getinf(88) <= 0x397 )
          {
            if ( !(unsigned __int8)getinf_flag(3, 4) )
              return 0;
            netnode_check(&s1, "$ golang", 0, 0);
            v15 = 0;
            v509 = netnode_altval(s1, 0, 65);
            if ( v509 <= 0x74 )
              return 0;
            v510 = *(_DWORD *)(get_ph() + 4);
            if ( v510 )
            {
              v511 = (unsigned int)(v510 - 13);
              if ( (unsigned int)v511 > 0x3B )
                return 0;
              v512 = 0x800000000000005LL;
              if ( !_bittest64(&v512, v511) || v509 == 117 )
                return 0;
            }
          }
          v513 = *((_QWORD *)v378 + 1);
          *v378 = 2;
          if ( v513 )
          {
            *((_QWORD *)v378 + 2) = 0;
            qfree(v513, (const char *)v15);
            *((_QWORD *)v378 + 1) = 0;
            *((_QWORD *)v378 + 3) = 0;
          }
          v514 = *((_QWORD *)v378 + 2);
          v515 = 0;
          v516 = 3;
          v517 = (int *)&unk_7AC20;
          while ( 1 )
          {
            ++v517;
            if ( *((_QWORD *)v378 + 3) < (unsigned __int64)(v514 + 1) )
            {
              v518 = qvector_reserve(v378 + 2, v515, v514 + 1, 4);
              v514 = *((_QWORD *)v378 + 2);
              *((_QWORD *)v378 + 1) = v518;
              v515 = v518;
            }
            *(_DWORD *)(v515 + 4 * v514) = v516;
            v514 = *((_QWORD *)v378 + 2) + 1LL;
            *((_QWORD *)v378 + 2) = v514;
            v516 = *v517;
            if ( *v517 == -1 )
              break;
            v515 = *((_QWORD *)v378 + 1);
          }
          v533 = *((_QWORD *)v378 + 4);
          if ( v533 )
          {
            *((_QWORD *)v378 + 5) = 0;
            qfree(v533, nullptr);
            *((_QWORD *)v378 + 4) = 0;
            *((_QWORD *)v378 + 6) = 0;
          }
          v534 = *((_QWORD *)v378 + 5);
          v535 = 0;
          v536 = 36;
          v537 = "$";
          while ( 1 )
          {
            v537 += 4;
            if ( *((_QWORD *)v378 + 6) < (unsigned __int64)(v534 + 1) )
            {
              v538 = qvector_reserve(v378 + 8, v535, v534 + 1, 4);
              v534 = *((_QWORD *)v378 + 5);
              *((_QWORD *)v378 + 4) = v538;
              v535 = v538;
            }
            *(_DWORD *)(v535 + 4 * v534) = v536;
            v534 = *((_QWORD *)v378 + 5) + 1LL;
            *((_QWORD *)v378 + 5) = v534;
            v536 = *(_DWORD *)v537;
            if ( *(_DWORD *)v537 == -1 )
              break;
            v535 = *((_QWORD *)v378 + 4);
          }
          v539 = *((_QWORD *)v378 + 2);
          v540 = *v378;
          v378[1] = v539;
          if ( (unsigned int)v540 <= 6 )
          {
            v541 = 84;
            if ( _bittest64(&v541, v540) )
              v378[1] = v534 + v539;
          }
          return 1;
        case 7uLL:
          v357 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v424 = *(_DWORD ***)(a3 + 8);
            v425 = (__int64 **)(v424 + 1);
            *(_QWORD *)(v10 + 8) = v424 + 1;
            v360 = *v424;
          }
          else
          {
            v358 = *(_QWORD *)(a3 + 16);
            v359 = v357 + 8;
            *(_DWORD *)v10 = v359;
            v360 = *(_DWORD **)(v358 + v357);
            if ( (unsigned int)v359 <= 0x2F )
            {
              v361 = v357 + 16;
              *(_DWORD *)v10 = v361;
              v362 = *(__int64 **)(v358 + v359);
              if ( (unsigned int)v361 <= 0x2F )
              {
                v363 = (unsigned int *)(v361 + v358);
                *(_DWORD *)v10 = v357 + 24;
                goto LABEL_416;
              }
              v363 = *(unsigned int **)(v10 + 8);
LABEL_485:
              *(_QWORD *)(v10 + 8) = v363 + 2;
LABEL_416:
              if ( !sub_46860(a1, v360, v362, *v363) )
                return -1;
              return 1;
            }
            v425 = *(__int64 ***)(v10 + 8);
          }
          v363 = (unsigned int *)(v425 + 1);
          *(_QWORD *)(v10 + 8) = v425 + 1;
          v362 = *v425;
          goto LABEL_485;
        case 8uLL:
          v386 = *(_DWORD *)a3;
          if ( v386 > 0x2F )
          {
            v387 = *(__int64 **)(v10 + 8);
            *(_QWORD *)(v10 + 8) = v387 + 1;
          }
          else
          {
            v387 = (__int64 *)(*(_QWORD *)(v10 + 16) + v386);
            *(_DWORD *)v10 = v386 + 8;
          }
          if ( !(unsigned __int8)sub_46D90(a1, *v387) )
            return -1;
          return 1;
        case 0xAuLL:
          v369 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v493 = *(__int64 **)(a3 + 8);
            v494 = (__int64 **)(v493 + 1);
            *(_QWORD *)(v10 + 8) = v493 + 1;
            v372 = *v493;
          }
          else
          {
            v370 = *(_QWORD *)(a3 + 16);
            v371 = v369 + 8;
            *(_DWORD *)v10 = v371;
            v372 = *(_QWORD *)(v370 + v369);
            if ( (unsigned int)v371 <= 0x2F )
            {
              v373 = v369 + 16;
              *(_DWORD *)v10 = v373;
              v374 = *(__int64 **)(v370 + v371);
              if ( (unsigned int)v373 <= 0x2F )
              {
                v375 = (int *)(v373 + v370);
                *(_DWORD *)v10 = v369 + 24;
                goto LABEL_427;
              }
              v375 = *(int **)(v10 + 8);
LABEL_614:
              *(_QWORD *)(v10 + 8) = v375 + 2;
LABEL_427:
              if ( !(unsigned __int8)sub_408F0(v372, v374, *v375) )
                return -1;
              return 1;
            }
            v494 = *(__int64 ***)(v10 + 8);
          }
          v375 = (int *)(v494 + 1);
          *(_QWORD *)(v10 + 8) = v494 + 1;
          v374 = *v494;
          goto LABEL_614;
        case 0xBuLL:
          v344 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v497 = *(__int64 ***)(a3 + 8);
            v348 = v497 + 1;
            *(_QWORD *)(v10 + 8) = v497 + 1;
            v347 = *v497;
          }
          else
          {
            v345 = *(_QWORD *)(a3 + 16);
            v346 = v344 + 8;
            *(_DWORD *)v10 = v346;
            v347 = *(__int64 **)(v345 + v344);
            if ( (unsigned int)v346 <= 0x2F )
            {
              v348 = (_QWORD **)(v346 + v345);
              *(_DWORD *)v10 = v344 + 16;
              return (unsigned __int8)sub_46630(a1, v347, *v348) + 1LL;
            }
            v348 = *(_QWORD ***)(v10 + 8);
          }
          *(_QWORD *)(v10 + 8) = v348 + 1;
          return (unsigned __int8)sub_46630(a1, v347, *v348) + 1LL;
        case 0xEuLL:
          v336 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v443 = *(_DWORD ***)(a3 + 8);
            v444 = (const char **)(v443 + 1);
            *(_QWORD *)(v10 + 8) = v443 + 1;
            v339 = *v443;
          }
          else
          {
            v337 = *(_QWORD *)(a3 + 16);
            v338 = v336 + 8;
            *(_DWORD *)v10 = v338;
            v339 = *(_DWORD **)(v337 + v336);
            if ( (unsigned int)v338 <= 0x2F )
            {
              v340 = v336 + 16;
              *(_DWORD *)v10 = v340;
              v341 = *(const char **)(v337 + v338);
              if ( (unsigned int)v340 <= 0x2F )
              {
                v342 = (_QWORD **)(v340 + v337);
                *(_DWORD *)v10 = v336 + 24;
                goto LABEL_391;
              }
              v342 = *(_QWORD ***)(v10 + 8);
LABEL_517:
              *(_QWORD *)(v10 + 8) = v342 + 1;
LABEL_391:
              v343 = *v342;
              v553 = 0;
              s1 = nullptr;
              *v339 = sub_41300(a1, (__int64)v341, v343, (__int64)&s1);
              if ( s1 )
              {
                *(_QWORD *)&v553 = 0;
                qfree(s1, v341);
              }
              return 1;
            }
            v444 = *(const char ***)(v10 + 8);
          }
          v342 = (_QWORD **)(v444 + 1);
          *(_QWORD *)(v10 + 8) = v444 + 1;
          v341 = *v444;
          goto LABEL_517;
        case 0xFuLL:
          v356 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v433 = *(_QWORD *)(a3 + 8) + 8LL;
            *(_QWORD *)(a3 + 8) = v433;
          }
          else
          {
            *(_DWORD *)a3 = v356 + 8;
            if ( v356 + 8 <= 0x2F )
            {
              *(_DWORD *)a3 = v356 + 16;
              if ( v356 + 16 <= 0x2F )
              {
                *(_DWORD *)a3 = v356 + 24;
                goto LABEL_411;
              }
              v434 = *(_QWORD *)(a3 + 8);
LABEL_499:
              *(_QWORD *)(v10 + 8) = v434 + 8;
LABEL_411:
              sub_41570(a1);
              return 1;
            }
            v433 = *(_QWORD *)(a3 + 8);
          }
          v434 = v433 + 8;
          *(_QWORD *)(v10 + 8) = v433 + 8;
          goto LABEL_499;
        case 0x11uLL:
          v349 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v435 = *(void ****)(a3 + 8);
            v436 = v435 + 1;
            *(_QWORD *)(v10 + 8) = v435 + 1;
            v352 = *v435;
          }
          else
          {
            v350 = *(_QWORD *)(a3 + 16);
            v351 = v349 + 8;
            v15 = v349;
            *(_DWORD *)v10 = v351;
            v352 = *(void ***)(v350 + v349);
            if ( (unsigned int)v351 <= 0x2F )
            {
              v15 = v349 + 16;
              *(_DWORD *)v10 = v15;
              v353 = *(const char **)(v350 + v351);
              if ( (unsigned int)v15 <= 0x2F )
              {
                v354 = (const char *)(v15 + v350);
                *(_DWORD *)v10 = v349 + 24;
                goto LABEL_401;
              }
              v354 = *(const char **)(v10 + 8);
LABEL_503:
              *(_QWORD *)(v10 + 8) = v354 + 8;
LABEL_401:
              if ( *(_DWORD *)v354 )
              {
                v519 = *v352;
                if ( *v352 )
                {
                  v352[1] = nullptr;
                  qfree(v519, (const char *)v15);
                  *v352 = nullptr;
                  v352[2] = nullptr;
                }
                if ( *v353 != 95 )
                {
                  v520 = (char *)v352[1];
                  v521 = 1;
                  if ( v520 )
                  {
                    v521 = (__int64)v352[1];
                    --v520;
                  }
                  if ( v352[2] < v520 + 2 )
                    *v352 = (void *)qvector_reserve(v352, *v352, v520 + 2, 1);
                  v522 = *v352;
                  v352[1] = v520 + 2;
                  v520[(_QWORD)v522] = 95;
                  *((_BYTE *)*v352 + v521) = 0;
                }
                if ( v353 )
                {
                  v523 = strlen(v353);
                  v524 = (char *)v352[1];
                  v525 = v523;
                  v526 = v523;
                  if ( v524 )
                  {
                    --v524;
                    v526 = (size_t)&v524[v523];
                  }
                  if ( (unsigned __int64)v352[2] < v526 + 1 )
                    *v352 = (void *)qvector_reserve(v352, *v352, v526 + 1, 1);
                  v527 = *v352;
                  v352[1] = (void *)(v526 + 1);
                  v527[v526] = 0;
                  memmove((char *)*v352 + (_QWORD)v524, v353, v525);
                }
                return 1;
              }
              v355 = *v353;
              if ( *v353 == 95 || v355 == 46 )
              {
                v528 = v353 + 1;
                if ( v353[1] )
                  goto LABEL_680;
              }
              else if ( v355 )
              {
                if ( !v353 )
                {
LABEL_406:
                  v352[1] = nullptr;
                  return 1;
                }
                v528 = v353;
LABEL_680:
                v529 = strlen(v528);
                v530 = v529;
                if ( v529 )
                {
                  v531 = (void *)(v529 + 1);
                  if ( (unsigned __int64)v352[2] < v529 + 1 )
                    *v352 = (void *)qvector_reserve(v352, *v352, v529 + 1, 1);
                  v352[1] = v531;
                  memmove(*v352, v528, v530);
                  *((_BYTE *)*v352 + v530) = 0;
                  return 1;
                }
                goto LABEL_406;
              }
              return -1;
            }
            v436 = *(_QWORD **)(v10 + 8);
          }
          v354 = (const char *)(v436 + 1);
          *(_QWORD *)(v10 + 8) = v436 + 1;
          v353 = (const char *)*v436;
          goto LABEL_503;
        case 0x13uLL:
          v329 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v432 = *(_QWORD **)(a3 + 8);
            v333 = (int *)(v432 + 1);
            *(_QWORD *)(v10 + 8) = v432 + 1;
            v332 = (_QWORD *)*v432;
          }
          else
          {
            v330 = *(_QWORD *)(a3 + 16);
            v331 = v329 + 8;
            *(_DWORD *)v10 = v331;
            v332 = *(_QWORD **)(v330 + v329);
            if ( (unsigned int)v331 <= 0x2F )
            {
              v333 = (int *)(v331 + v330);
              *(_DWORD *)v10 = v329 + 16;
              goto LABEL_386;
            }
            v333 = *(int **)(v10 + 8);
          }
          *(_QWORD *)(v10 + 8) = v333 + 2;
LABEL_386:
          v334 = *v333;
          v335 = sub_405A0(a1, *v333);
          v332[1] = v335;
          v332[3] = v335;
          v332[2] = (int)sub_40650(a1, v334);
          return 1;
        default:
          return 0;
      }
    }
    if ( a2 != (_BYTE *)&stru_3D8.st_size + 1 )
    {
      if ( a2 != (_BYTE *)&stru_3D8.st_size + 7 )
      {
        if ( a2 != (const char *)&stru_3D8.st_size )
          return 0;
        v388 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v458 = *(_QWORD ***)(a3 + 8);
          v459 = (__int64 *)(v458 + 1);
          *(_QWORD *)(v10 + 8) = v458 + 1;
          v391 = *v458;
        }
        else
        {
          v389 = *(_QWORD *)(a3 + 16);
          v390 = v388 + 8;
          *(_DWORD *)v10 = v390;
          v391 = *(unsigned __int64 **)(v389 + v388);
          if ( (unsigned int)v390 <= 0x2F )
          {
            v392 = v388 + 16;
            *(_DWORD *)v10 = v392;
            v393 = *(_QWORD *)(v389 + v390);
            if ( (unsigned int)v392 <= 0x2F )
            {
              v394 = v388 + 24;
              *(_DWORD *)v10 = v394;
              v395 = *(_DWORD *)(v389 + v392);
              if ( (unsigned int)v394 <= 0x2F )
              {
                v396 = v388 + 32;
                *(_DWORD *)v10 = v396;
                v397 = *(__int64 (__fastcall **)(const char *, __int64, double))(v389 + v394);
                if ( (unsigned int)v396 <= 0x2F )
                {
                  v398 = (__int64 *)(v396 + v389);
                  *(_DWORD *)v10 = v388 + 40;
LABEL_455:
                  *v391 = sub_415C0(a1, v393, v395, v397, *v398);
                  return 1;
                }
                v398 = *(__int64 **)(v10 + 8);
LABEL_547:
                *(_QWORD *)(v10 + 8) = v398 + 1;
                goto LABEL_455;
              }
              v461 = *(__int64 (__fastcall ***)(const char *, __int64, double))(v10 + 8);
LABEL_546:
              v398 = (__int64 *)(v461 + 1);
              *(_QWORD *)(v10 + 8) = v461 + 1;
              v397 = *v461;
              goto LABEL_547;
            }
            v460 = *(_DWORD **)(v10 + 8);
LABEL_545:
            v461 = (__int64 (__fastcall **)(const char *, __int64, double))(v460 + 2);
            *(_QWORD *)(v10 + 8) = v460 + 2;
            v395 = *v460;
            goto LABEL_546;
          }
          v459 = *(__int64 **)(v10 + 8);
        }
        v460 = v459 + 1;
        *(_QWORD *)(v10 + 8) = v459 + 1;
        v393 = *v459;
        goto LABEL_545;
      }
      v406 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v426 = *(__int64 **)(a3 + 8);
        v427 = v426 + 1;
        *(_QWORD *)(v10 + 8) = v426 + 1;
        v409 = *v426;
      }
      else
      {
        v407 = *(_QWORD *)(a3 + 16);
        v408 = v406 + 8;
        *(_DWORD *)v10 = v408;
        v409 = *(_QWORD *)(v407 + v406);
        if ( (unsigned int)v408 <= 0x2F )
        {
          v410 = v406 + 16;
          *(_DWORD *)v10 = v410;
          v411 = *(_QWORD *)(v407 + v408);
          if ( (unsigned int)v410 <= 0x2F )
          {
            v412 = v406 + 24;
            *(_DWORD *)v10 = v412;
            v413 = *(_DWORD *)(v407 + v410);
            if ( (unsigned int)v412 <= 0x2F )
            {
              v414 = v406 + 32;
              *(_DWORD *)v10 = v414;
              v415 = *(unsigned int *)(v407 + v412);
              if ( (unsigned int)v414 <= 0x2F )
              {
                v416 = v406 + 40;
                *(_DWORD *)v10 = v416;
                v417 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v407 + v414);
                if ( (unsigned int)v416 <= 0x2F )
                {
                  v418 = (__int64 *)(v416 + v407);
                  *(_DWORD *)v10 = v406 + 48;
                  return (unsigned __int8)sub_41E00(a1, v409, v411, v413, v415, v417, *v418);
                }
                v418 = *(__int64 **)(v10 + 8);
LABEL_491:
                *(_QWORD *)(v10 + 8) = v418 + 1;
                return (unsigned __int8)sub_41E00(a1, v409, v411, v413, v415, v417, *v418);
              }
              v430 = *(__int64 (__fastcall ***)(_QWORD, _QWORD))(v10 + 8);
LABEL_490:
              v418 = (__int64 *)(v430 + 1);
              *(_QWORD *)(v10 + 8) = v430 + 1;
              v417 = *v430;
              goto LABEL_491;
            }
            v429 = *(unsigned int **)(v10 + 8);
LABEL_489:
            v430 = (__int64 (__fastcall **)(_QWORD, _QWORD))(v429 + 2);
            *(_QWORD *)(v10 + 8) = v429 + 2;
            v415 = *v429;
            goto LABEL_490;
          }
          v428 = *(unsigned int **)(v10 + 8);
LABEL_488:
          v429 = v428 + 2;
          *(_QWORD *)(v10 + 8) = v428 + 2;
          v413 = *v428;
          goto LABEL_489;
        }
        v427 = *(__int64 **)(v10 + 8);
      }
      v428 = (unsigned int *)(v427 + 1);
      *(_QWORD *)(v10 + 8) = v427 + 1;
      v411 = *v427;
      goto LABEL_488;
    }
    v419 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0x2Fu )
    {
      v506 = *(_QWORD ***)(a3 + 8);
      v423 = (__int64 *)(v506 + 1);
      *(_QWORD *)(v10 + 8) = v506 + 1;
      v422 = *v506;
    }
    else
    {
      v420 = *(_QWORD *)(a3 + 16);
      v421 = v419 + 8;
      *(_DWORD *)v10 = v421;
      v422 = *(__int64 **)(v420 + v419);
      if ( (unsigned int)v421 <= 0x2F )
      {
        v423 = (__int64 *)(v421 + v420);
        *(_DWORD *)v10 = v419 + 16;
LABEL_478:
        *v422 = sub_41B00(*v423);
        return 1;
      }
      v423 = *(__int64 **)(v10 + 8);
    }
    *(_QWORD *)(v10 + 8) = v423 + 1;
    goto LABEL_478;
  }
  switch ( (unsigned __int64)a2 )
  {
    case 0xBBAuLL:
LABEL_61:
      v52 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v496 = *(_QWORD **)(a3 + 8);
        v56 = (int *)(v496 + 1);
        *(_QWORD *)(v10 + 8) = v496 + 1;
        v55 = *v496;
      }
      else
      {
        v53 = *(_QWORD *)(a3 + 16);
        v54 = v52 + 8;
        *(_DWORD *)v10 = v54;
        v55 = *(_QWORD *)(v53 + v52);
        if ( (unsigned int)v54 <= 0x2F )
        {
          v56 = (int *)(v54 + v53);
          *(_DWORD *)v10 = v52 + 16;
          goto LABEL_64;
        }
        v56 = *(int **)(v10 + 8);
      }
      *(_QWORD *)(v10 + 8) = v56 + 2;
LABEL_64:
      v57 = *v56;
      split_sreg_range(v55, 32, *v56 != 0, 4, 1);
      if ( v57 )
        sub_4C550(a1, "vle");
      return 0;
    case 0xBBBuLL:
      v47 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v495 = *(__int64 **)(a3 + 8);
        v51 = v495 + 1;
        *(_QWORD *)(v10 + 8) = v495 + 1;
        v50 = *v495;
      }
      else
      {
        v48 = *(_QWORD *)(a3 + 16);
        v49 = v47 + 8;
        *(_DWORD *)v10 = v49;
        v50 = *(_QWORD *)(v48 + v47);
        if ( (unsigned int)v49 <= 0x2F )
        {
          v51 = (_QWORD *)(v49 + v48);
          *(_DWORD *)v10 = v47 + 16;
          return (unsigned __int8)sub_54AC0(v50, a1, *v51);
        }
        v51 = *(_QWORD **)(v10 + 8);
      }
      *(_QWORD *)(v10 + 8) = v51 + 1;
      return (unsigned __int8)sub_54AC0(v50, a1, *v51);
    case 0xBBCuLL:
      v30 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v476 = *(__int64 **)(a3 + 8);
        v34 = v476 + 1;
        *(_QWORD *)(v10 + 8) = v476 + 1;
        v33 = *v476;
      }
      else
      {
        v31 = *(_QWORD *)(a3 + 16);
        v32 = v30 + 8;
        *(_DWORD *)v10 = v32;
        v33 = *(_QWORD *)(v31 + v30);
        if ( (unsigned int)v32 <= 0x2F )
        {
          v34 = (_QWORD *)(v32 + v31);
          *(_DWORD *)v10 = v30 + 16;
          goto LABEL_40;
        }
        v34 = *(_QWORD **)(v10 + 8);
      }
      *(_QWORD *)(v10 + 8) = v34 + 1;
LABEL_40:
      sub_54A30(*v34, a1, v33);
      return 1;
    case 0xBBDuLL:
LABEL_66:
      v58 = *(_DWORD *)a3;
      if ( v58 > 0x2F )
      {
        v59 = *(_QWORD **)(v10 + 8);
        *(_QWORD *)(v10 + 8) = v59 + 1;
      }
      else
      {
        v59 = (_QWORD *)(*(_QWORD *)(v10 + 16) + v58);
        *(_DWORD *)v10 = v58 + 8;
      }
      return get_sreg(*v59, 32) == 1;
    case 0xBBEuLL:
      v28 = *(_DWORD *)a3;
      if ( v28 > 0x2F )
      {
        v29 = *(__int64 **)(v10 + 8);
        *(_QWORD *)(v10 + 8) = v29 + 1;
      }
      else
      {
        v29 = (__int64 *)(*(_QWORD *)(v10 + 16) + v28);
        *(_DWORD *)v10 = v28 + 8;
      }
      if ( *v29 != *(_QWORD *)(a1 + 432) )
        sub_4B0C0(a1, *v29, 1);
      return 0;
    case 0xBBFuLL:
      v11 = *(_DWORD *)a3;
      v12 = *(_QWORD *)(a1 + 432);
      if ( v11 <= 0x2F )
        goto LABEL_5;
      goto LABEL_46;
    case 0xBC0uLL:
      v11 = *(_DWORD *)a3;
      v12 = *(_QWORD *)(a1 + 424);
      if ( v11 <= 0x2F )
      {
LABEL_5:
        v13 = (_QWORD **)(*(_QWORD *)(v10 + 16) + v11);
        *(_DWORD *)v10 = v11 + 8;
      }
      else
      {
LABEL_46:
        v13 = *(_QWORD ***)(v10 + 8);
        *(_QWORD *)(v10 + 8) = v13 + 1;
      }
      **v13 = v12;
      return 0;
    case 0xBC1uLL:
      v35 = *(_DWORD *)a3;
      if ( v35 > 0x2F )
      {
        v36 = *(const char ***)(v10 + 8);
        *(_QWORD *)(v10 + 8) = v36 + 1;
      }
      else
      {
        v36 = (const char **)(*(_QWORD *)(v10 + 16) + v35);
        *(_DWORD *)v10 = v35 + 8;
      }
      if ( !sub_34520(*v36) )
        return -1;
      return 1;
    case 0xBC2uLL:
      v42 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v473 = *(__int64 **)(a3 + 8);
        v46 = (unsigned __int64 *)(v473 + 1);
        *(_QWORD *)(v10 + 8) = v473 + 1;
        v45 = *v473;
      }
      else
      {
        v43 = *(_QWORD *)(a3 + 16);
        v44 = v42 + 8;
        *(_DWORD *)v10 = v44;
        v45 = *(_QWORD *)(v43 + v42);
        if ( (unsigned int)v44 <= 0x2F )
        {
          v46 = (unsigned __int64 *)(v44 + v43);
          *(_DWORD *)v10 = v42 + 16;
          goto LABEL_56;
        }
        v46 = *(unsigned __int64 **)(v10 + 8);
      }
      *(_QWORD *)(v10 + 8) = v46 + 1;
LABEL_56:
      sub_4F800(a1, v45, *v46);
      return 0;
    case 0xBC3uLL:
      goto LABEL_31;
    case 0xBC4uLL:
      result = *(unsigned int *)(a1 + 288);
      if ( (_DWORD)result )
        return result;
      sub_4B0A0(a1);
LABEL_31:
      if ( !*(_BYTE *)(a1 + 556) )
        return -1;
      return 1;
    case 0xBC5uLL:
      v21 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v472 = *(_QWORD ***)(a3 + 8);
        v25 = v472 + 1;
        *(_QWORD *)(v10 + 8) = v472 + 1;
        v24 = *v472;
      }
      else
      {
        v22 = *(_QWORD *)(a3 + 16);
        v23 = v21 + 8;
        *(_DWORD *)v10 = v23;
        v24 = *(__int64 **)(v22 + v21);
        if ( (unsigned int)v23 <= 0x2F )
        {
          v25 = (_QWORD *)(v23 + v22);
          *(_DWORD *)v10 = v21 + 16;
          goto LABEL_24;
        }
        v25 = *(_QWORD **)(v10 + 8);
      }
      *(_QWORD *)(v10 + 8) = v25 + 1;
LABEL_24:
      v26 = netnode_altval(*(_QWORD *)(a1 + 120), *v25, 839);
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) == 8 )
      {
        v27 = v26;
      }
      else
      {
        v27 = (int)v26;
        if ( (unsigned __int64)(int)v26 <= 0xFFFFFFFFFFFFFFFCLL )
          goto LABEL_28;
      }
      v26 = -1;
      if ( (unsigned __int64)(v27 + 3) >= 2 )
        v26 = v27;
LABEL_28:
      *v24 = v26;
      return 0;
    case 0xBC6uLL:
      v16 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v474 = *(__int64 **)(a3 + 8);
        v475 = v474 + 1;
        *(_QWORD *)(v10 + 8) = v474 + 1;
        v18 = *v474;
      }
      else
      {
        v17 = *(_QWORD *)(a3 + 16);
        *(_DWORD *)v10 = v16 + 8;
        v18 = *(_QWORD *)(v17 + v16);
        if ( v16 + 8 <= 0x2F )
        {
          v19 = v16 + 16;
          *(_DWORD *)v10 = v19;
          if ( (unsigned int)v19 <= 0x2F )
          {
            v20 = (_QWORD *)(v19 + v17);
            *(_DWORD *)v10 = v16 + 24;
            goto LABEL_19;
          }
          v20 = *(_QWORD **)(v10 + 8);
LABEL_572:
          *(_QWORD *)(v10 + 8) = v20 + 1;
LABEL_19:
          sub_54680(*v20, v18);
          return 1;
        }
        v475 = *(_QWORD **)(v10 + 8);
      }
      v20 = v475 + 1;
      goto LABEL_572;
    case 0xBC7uLL:
      v37 = *(_DWORD *)a3;
      if ( v37 > 0x2F )
      {
        v469 = *(__int64 **)(v10 + 8);
        v470 = v469 + 1;
        *(_QWORD *)(v10 + 8) = v469 + 1;
        v40 = *v469;
LABEL_564:
        v471 = v470 + 1;
        *(_QWORD *)(v10 + 8) = v470 + 1;
        v41 = *v470;
        goto LABEL_565;
      }
      v38 = *(_QWORD *)(v10 + 16);
      v39 = v37 + 8;
      *(_DWORD *)v10 = v39;
      v40 = *(_QWORD *)(v38 + v37);
      if ( (unsigned int)v39 > 0x2F )
      {
        v470 = *(__int64 **)(v10 + 8);
        goto LABEL_564;
      }
      *(_DWORD *)v10 = v37 + 16;
      v41 = *(_QWORD *)(v38 + v39);
      if ( v37 + 16 <= 0x2F )
      {
        *(_DWORD *)v10 = v37 + 24;
        return (unsigned __int8)sub_54880(v40, v41);
      }
      v471 = *(_QWORD **)(v10 + 8);
LABEL_565:
      *(_QWORD *)(v10 + 8) = v471 + 1;
      return (unsigned __int8)sub_54880(v40, v41);
    case 0xBC8uLL:
      return *(unsigned int *)(a1 + 460);
    default:
      v401 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v462 = *(__int64 **)(a3 + 8);
        v405 = v462 + 1;
        *(_QWORD *)(v10 + 8) = v462 + 1;
        v404 = *v462;
      }
      else
      {
        v402 = *(_QWORD *)(a3 + 16);
        v403 = v401 + 8;
        *(_DWORD *)v10 = v403;
        v404 = *(_QWORD *)(v402 + v401);
        if ( (unsigned int)v403 <= 0x2F )
        {
          v405 = (__int64 *)(v403 + v402);
          *(_DWORD *)v10 = v401 + 16;
          goto LABEL_466;
        }
        v405 = *(__int64 **)(v10 + 8);
      }
      *(_QWORD *)(v10 + 8) = v405 + 1;
LABEL_466:
      sub_4F5D0(a1, v404, 1, *v405);
      return 0;
  }
}

