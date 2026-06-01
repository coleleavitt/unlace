__int64 __fastcall sub_69100(__int64 a1, _DWORD *a2, __int64 *a3, unsigned int a4, unsigned int a5, int a6)
{
  _QWORD *v9; // rdi
  __int64 v10; // rax
  unsigned int v12; // r14d
  _QWORD *v14; // r15
  __int64 v15; // r14
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // ax
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 *v26; // r13
  __m128i v27; // xmm0
  __int64 v28; // rax
  void (*v29)(); // rax
  _QWORD *v30; // rbp
  unsigned __int16 v31; // ax
  int v32; // r13d
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 *v36; // r13
  __m128i v37; // xmm0
  __int64 v38; // rax
  void (*v39)(); // rax
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 *v42; // r13
  __m128i v43; // xmm0
  __int64 v44; // rax
  void (*v45)(); // rax
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 *v50; // r13
  __m128i v51; // xmm0
  __int64 v52; // rax
  void (*v53)(); // rax
  __int64 v54; // rax
  __int64 v55; // rdi
  __int64 *v56; // r13
  __m128i v57; // xmm0
  __int64 v58; // rax
  void (*v59)(); // rax
  __int64 v60; // rax
  __int64 v61; // rdi
  __int64 *v62; // r13
  __m128i v63; // xmm0
  __int64 v64; // rax
  void (*v65)(); // rax
  __int64 v66; // rax
  __int64 v67; // rdi
  __int64 *v68; // r13
  __m128i v69; // xmm0
  __int64 v70; // rax
  void (*v71)(); // rax
  __int64 v72; // rax
  __int64 v73; // rdi
  __int64 *v74; // r13
  __m128i v75; // xmm0
  __int64 v76; // rax
  void (*v77)(); // rax
  __int64 v78; // rax
  __int64 v79; // rdi
  __int64 *v80; // r13
  __m128i v81; // xmm0
  __int64 v82; // rax
  void (*v83)(); // rax
  __int64 v84; // rax
  __m128i v85; // xmm3
  __int64 v86; // r13
  __int64 v87; // rdi
  __int64 *v88; // rsi
  char v89; // al
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r9
  __int64 v93; // rax
  unsigned int v94; // r9d
  void (*v95)(); // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  unsigned int v98; // r9d
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rax
  __m128i v102; // xmm2
  __int64 *v103; // rbp
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 **v106; // rax
  __int64 v107; // rax
  __int64 v108; // rdi
  __int64 *v109; // r13
  __m128i v110; // xmm0
  __int64 v111; // rax
  __int64 (__fastcall *v112)(); // rdx
  void (*v113)(); // rax
  __int64 v114; // rax
  __int64 v115; // rdi
  __int64 *v116; // r13
  __m128i v117; // xmm0
  __int64 v118; // rax
  void (*v119)(); // rax
  __int64 v120; // rax
  __int64 *v121; // r13
  __m128i v122; // xmm0
  __int64 v123; // rdi
  __int64 v124; // rax
  void (*v125)(); // rax
  __int64 v126; // rax
  __int64 v127; // rdi
  __int64 *v128; // r13
  __m128i v129; // xmm0
  __int64 v130; // rax
  void (*v131)(); // rax
  __int64 v132; // rax
  __int64 v133; // rdi
  __int64 *v134; // r13
  __m128i v135; // xmm0
  __int64 v136; // rax
  void (*v137)(); // rax
  __int64 v138; // rax
  __int64 v139; // rdi
  __int64 *v140; // r13
  __m128i v141; // xmm0
  __int64 v142; // rax
  __int64 (__fastcall *v143)(); // rdx
  void (*v144)(); // rax
  __int64 v145; // rax
  __int64 v146; // rdi
  __int64 *v147; // r13
  __m128i v148; // xmm0
  __int64 v149; // rax
  void (*v150)(); // rax
  __int64 v151; // rax
  __int64 v152; // rdi
  __int64 *v153; // r13
  __m128i v154; // xmm0
  __int64 v155; // rax
  void (*v156)(); // rax
  __int64 v157; // rax
  __int64 v158; // rdi
  __int64 *v159; // r13
  __m128i v160; // xmm0
  __int64 v161; // rax
  void (*v162)(); // rax
  __int64 v163; // rax
  __int64 v164; // rdi
  __int64 *v165; // r13
  __m128i v166; // xmm0
  __int64 v167; // rax
  void (*v168)(); // rax
  __int64 v169; // rax
  __int64 v170; // rdi
  __int64 *v171; // r13
  __m128i v172; // xmm0
  __int64 v173; // rax
  __int64 (__fastcall *v174)(); // rdx
  void (*v175)(); // rax
  __int64 v176; // rax
  __int64 v177; // rdi
  __int64 *v178; // r13
  __m128i v179; // xmm0
  __int64 v180; // rax
  void (*v181)(); // rax
  __int64 v182; // rax
  __int64 v183; // rdi
  __int64 *v184; // r13
  __m128i v185; // xmm0
  __int64 v186; // rax
  void (*v187)(); // rax
  __int64 v188; // rax
  __int64 v189; // rdi
  __int64 *v190; // r13
  __m128i v191; // xmm0
  __int64 v192; // rax
  __int64 (__fastcall *v193)(__int64); // rax
  __int64 v194; // rax
  __int64 v195; // rdi
  __int64 v196; // r13
  __m128i v197; // xmm0
  __int64 v198; // rax
  void (*v199)(); // rax
  __int64 v200; // rax
  __int64 v201; // rdi
  __int64 v202; // r13
  __m128i v203; // xmm0
  __int64 v204; // rax
  void (*v205)(); // rax
  __int64 v206; // rax
  __int64 v207; // rdi
  __int64 v208; // r13
  __m128i v209; // xmm0
  __int64 v210; // rax
  void (*v211)(); // rax
  __int64 v212; // rax
  __int64 v213; // rdi
  __int64 *v214; // r13
  __m128i v215; // xmm0
  __int64 v216; // rax
  void (*v217)(); // rax
  __int64 v218; // rax
  __int64 v219; // rdi
  __int64 *v220; // r13
  __m128i v221; // xmm0
  __int64 v222; // rax
  __int64 (__fastcall *v223)(); // rdx
  void (*v224)(); // rax
  __int64 v225; // rax
  __int64 v226; // rdi
  __int64 *v227; // r13
  __m128i v228; // xmm0
  __int64 v229; // rax
  __int64 (__fastcall *v230)(); // rdx
  void (*v231)(); // rax
  int v232; // eax
  __int64 v233; // rax
  __int64 v234; // rdi
  void (*v235)(); // rax
  __int64 v236; // rax
  __int64 v237; // rdi
  __int64 *v238; // r13
  __m128i v239; // xmm0
  __int64 v240; // rax
  __int64 (__fastcall *v241)(); // rdx
  void (*v242)(); // rax
  __int64 v243; // rax
  __int64 v244; // rdi
  __int64 *v245; // r13
  __m128i v246; // xmm0
  __int64 v247; // rax
  __int64 (__fastcall *v248)(__int64); // rax
  __int64 v249; // rax
  __int64 v250; // rdi
  __int64 *v251; // r13
  __m128i v252; // xmm0
  __int64 v253; // rax
  __int64 (__fastcall *v254)(); // rdx
  void (*v255)(); // rax
  __int64 v256; // rax
  __int64 v257; // rdi
  __int64 *v258; // r13
  __m128i v259; // xmm0
  __int64 v260; // rax
  void (*v261)(); // rax
  __int64 v262; // rax
  __int64 v263; // rdi
  __int64 *v264; // r13
  __m128i v265; // xmm0
  __int64 v266; // rax
  void (*v267)(); // rax
  __int64 v268; // rax
  __int64 v269; // rdi
  __int64 *v270; // r13
  __m128i v271; // xmm0
  __int64 v272; // rax
  __int64 (__fastcall *v273)(); // rdx
  void (*v274)(); // rax
  __int64 v275; // rax
  __int64 v276; // rdi
  __int64 *v277; // r13
  __m128i v278; // xmm0
  __int64 v279; // rax
  __int64 (__fastcall *v280)(); // rdx
  void (*v281)(); // rax
  __int64 v282; // rax
  __int64 v283; // rdi
  __int64 *v284; // r13
  __m128i v285; // xmm0
  __int64 v286; // rax
  __int64 (__fastcall *v287)(); // rdx
  void (*v288)(); // rax
  __int64 v289; // rax
  __int64 v290; // rdi
  __int64 *v291; // r13
  __m128i v292; // xmm0
  __int64 v293; // rax
  __int64 (__fastcall *v294)(); // rdx
  void (*v295)(); // rax
  __int64 v296; // rax
  __int64 v297; // rdi
  __int64 *v298; // r13
  __m128i v299; // xmm0
  __int64 v300; // rax
  __int64 (__fastcall *v301)(); // rdx
  void (*v302)(); // rax
  __int64 v303; // rax
  __int64 v304; // rdi
  __int64 *v305; // r13
  __m128i v306; // xmm0
  __int64 v307; // rax
  __int64 (__fastcall *v308)(); // rdx
  void (*v309)(); // rax
  __int64 v310; // rax
  __int64 *v311; // r13
  __m128i v312; // xmm0
  __int64 v313; // rdi
  __int64 v314; // rax
  void (*v315)(); // rax
  __int64 v316; // rax
  __int64 v317; // rdi
  __int64 *v318; // r13
  __m128i v319; // xmm0
  __int64 v320; // rax
  void (*v321)(); // rax
  __int64 v322; // rax
  __int64 *v323; // r13
  __m128i v324; // xmm0
  __int64 v325; // rdi
  __int64 v326; // rax
  __int64 (__fastcall *v327)(); // rdx
  void (*v328)(); // rax
  __int64 v329; // rax
  __int64 v330; // rdi
  __int64 *v331; // r13
  __m128i si128; // xmm0
  __int64 v333; // rax
  __int64 (__fastcall *v334)(); // rdx
  void (*v335)(); // rax
  __int64 v336; // rax
  __int64 v337; // rdi
  __int64 *v338; // r13
  __m128i v339; // xmm0
  __int64 v340; // rax
  __int64 (__fastcall *v341)(); // rdx
  void (*v342)(); // rax
  __int64 v343; // rax
  __int64 v344; // rdi
  __int64 *v345; // r13
  __m128i v346; // xmm0
  __int64 v347; // rax
  __int64 (__fastcall *v348)(); // rdx
  __int64 (__fastcall *v349)(__int64); // rax
  __int64 v350; // rax
  __int64 v351; // rdi
  __int64 *v352; // r13
  __m128i v353; // xmm0
  __int64 v354; // rax
  void (*v355)(); // rax
  void *v356; // rax
  __int64 v358; // [rsp+8h] [rbp-2F0h]
  __int64 v359; // [rsp+10h] [rbp-2E8h]
  int v360; // [rsp+18h] [rbp-2E0h]
  int v361; // [rsp+18h] [rbp-2E0h]
  int v362; // [rsp+18h] [rbp-2E0h]
  int v363; // [rsp+18h] [rbp-2E0h]
  int v364; // [rsp+18h] [rbp-2E0h]
  int v365; // [rsp+18h] [rbp-2E0h]
  int v366; // [rsp+18h] [rbp-2E0h]
  int v367; // [rsp+18h] [rbp-2E0h]
  int v368; // [rsp+18h] [rbp-2E0h]
  int v369; // [rsp+18h] [rbp-2E0h]
  unsigned int v370; // [rsp+18h] [rbp-2E0h]
  int v371; // [rsp+18h] [rbp-2E0h]
  int v372; // [rsp+18h] [rbp-2E0h]
  int v373; // [rsp+18h] [rbp-2E0h]
  int v374; // [rsp+18h] [rbp-2E0h]
  int v375; // [rsp+18h] [rbp-2E0h]
  int v376; // [rsp+18h] [rbp-2E0h]
  int v377; // [rsp+18h] [rbp-2E0h]
  int v378; // [rsp+18h] [rbp-2E0h]
  int v379; // [rsp+18h] [rbp-2E0h]
  int v380; // [rsp+18h] [rbp-2E0h]
  int v381; // [rsp+18h] [rbp-2E0h]
  int v382; // [rsp+18h] [rbp-2E0h]
  int v383; // [rsp+18h] [rbp-2E0h]
  int v384; // [rsp+18h] [rbp-2E0h]
  int v385; // [rsp+18h] [rbp-2E0h]
  int v386; // [rsp+18h] [rbp-2E0h]
  int v387; // [rsp+18h] [rbp-2E0h]
  int v388; // [rsp+18h] [rbp-2E0h]
  int v389; // [rsp+18h] [rbp-2E0h]
  int v390; // [rsp+18h] [rbp-2E0h]
  int v391; // [rsp+18h] [rbp-2E0h]
  _WORD *v392; // [rsp+18h] [rbp-2E0h]
  int v393; // [rsp+18h] [rbp-2E0h]
  int v394; // [rsp+18h] [rbp-2E0h]
  int v395; // [rsp+18h] [rbp-2E0h]
  int v396; // [rsp+18h] [rbp-2E0h]
  int v397; // [rsp+18h] [rbp-2E0h]
  int v398; // [rsp+18h] [rbp-2E0h]
  int v399; // [rsp+18h] [rbp-2E0h]
  int v400; // [rsp+18h] [rbp-2E0h]
  int v401; // [rsp+18h] [rbp-2E0h]
  int v402; // [rsp+18h] [rbp-2E0h]
  int v403; // [rsp+18h] [rbp-2E0h]
  int v404; // [rsp+18h] [rbp-2E0h]
  int v405; // [rsp+18h] [rbp-2E0h]
  int v406; // [rsp+18h] [rbp-2E0h]
  int v407; // [rsp+18h] [rbp-2E0h]
  int v408; // [rsp+18h] [rbp-2E0h]
  int v409; // [rsp+18h] [rbp-2E0h]
  int v410; // [rsp+18h] [rbp-2E0h]
  __int64 srca; // [rsp+20h] [rbp-2D8h]
  unsigned int src; // [rsp+20h] [rbp-2D8h]
  int srcc; // [rsp+20h] [rbp-2D8h]
  void *srcb; // [rsp+20h] [rbp-2D8h]
  __int64 v415; // [rsp+28h] [rbp-2D0h]
  int v416; // [rsp+28h] [rbp-2D0h]
  unsigned __int64 v417; // [rsp+28h] [rbp-2D0h]
  unsigned int v418; // [rsp+30h] [rbp-2C8h]
  size_t n; // [rsp+38h] [rbp-2C0h]
  unsigned __int16 v420; // [rsp+44h] [rbp-2B4h] BYREF
  unsigned __int16 v421; // [rsp+46h] [rbp-2B2h]
  __int64 *v422; // [rsp+48h] [rbp-2B0h] BYREF
  __int64 *v423; // [rsp+50h] [rbp-2A8h] BYREF
  __int64 *v424; // [rsp+58h] [rbp-2A0h] BYREF
  __int64 *v425; // [rsp+60h] [rbp-298h] BYREF
  __int64 *v426; // [rsp+68h] [rbp-290h] BYREF
  __int64 *v427; // [rsp+70h] [rbp-288h] BYREF
  __int64 *v428; // [rsp+78h] [rbp-280h] BYREF
  __int64 *v429; // [rsp+80h] [rbp-278h] BYREF
  __int64 *v430; // [rsp+88h] [rbp-270h] BYREF
  __int64 *v431; // [rsp+90h] [rbp-268h] BYREF
  __int64 *v432; // [rsp+98h] [rbp-260h] BYREF
  __int64 *v433; // [rsp+A0h] [rbp-258h] BYREF
  __int64 *v434; // [rsp+A8h] [rbp-250h] BYREF
  __int64 *v435; // [rsp+B0h] [rbp-248h] BYREF
  __int64 *v436; // [rsp+B8h] [rbp-240h] BYREF
  __int64 *v437; // [rsp+C0h] [rbp-238h] BYREF
  __int64 *v438; // [rsp+C8h] [rbp-230h] BYREF
  __int64 *v439; // [rsp+D0h] [rbp-228h] BYREF
  __int64 *v440; // [rsp+D8h] [rbp-220h] BYREF
  __int64 *v441; // [rsp+E0h] [rbp-218h] BYREF
  __int64 *v442; // [rsp+E8h] [rbp-210h] BYREF
  __int64 *v443; // [rsp+F0h] [rbp-208h] BYREF
  __int64 *v444; // [rsp+F8h] [rbp-200h] BYREF
  __int64 *v445; // [rsp+100h] [rbp-1F8h] BYREF
  __int64 *v446; // [rsp+108h] [rbp-1F0h] BYREF
  __int64 *v447; // [rsp+110h] [rbp-1E8h] BYREF
  __int64 *v448; // [rsp+118h] [rbp-1E0h] BYREF
  __int64 *v449; // [rsp+120h] [rbp-1D8h] BYREF
  __int64 *v450; // [rsp+128h] [rbp-1D0h] BYREF
  __int64 *v451; // [rsp+130h] [rbp-1C8h] BYREF
  __int64 *v452; // [rsp+138h] [rbp-1C0h] BYREF
  __int64 *v453; // [rsp+140h] [rbp-1B8h] BYREF
  __int64 *v454; // [rsp+148h] [rbp-1B0h] BYREF
  __int64 *v455; // [rsp+150h] [rbp-1A8h] BYREF
  __int64 *v456; // [rsp+158h] [rbp-1A0h] BYREF
  __int64 *v457; // [rsp+160h] [rbp-198h] BYREF
  __int64 *v458; // [rsp+168h] [rbp-190h] BYREF
  __int64 *v459; // [rsp+170h] [rbp-188h] BYREF
  __int64 *v460; // [rsp+178h] [rbp-180h] BYREF
  __int64 *v461; // [rsp+180h] [rbp-178h] BYREF
  __int64 *v462; // [rsp+188h] [rbp-170h] BYREF
  __int64 *v463; // [rsp+190h] [rbp-168h] BYREF
  __int64 *v464; // [rsp+198h] [rbp-160h] BYREF
  __int64 *v465; // [rsp+1A0h] [rbp-158h] BYREF
  __int64 *v466; // [rsp+1A8h] [rbp-150h] BYREF
  __int64 *v467; // [rsp+1B0h] [rbp-148h] BYREF
  __int64 *v468; // [rsp+1B8h] [rbp-140h] BYREF
  __int64 *v469; // [rsp+1C0h] [rbp-138h] BYREF
  __int64 *v470; // [rsp+1C8h] [rbp-130h] BYREF
  __int64 *v471; // [rsp+1D0h] [rbp-128h] BYREF
  __int64 *v472; // [rsp+1D8h] [rbp-120h] BYREF
  __int64 *v473; // [rsp+1E0h] [rbp-118h] BYREF
  __int64 *v474; // [rsp+1E8h] [rbp-110h] BYREF
  __int64 *v475; // [rsp+1F0h] [rbp-108h] BYREF
  __int64 *v476; // [rsp+1F8h] [rbp-100h] BYREF
  __int64 *v477; // [rsp+200h] [rbp-F8h] BYREF
  __int64 *v478; // [rsp+208h] [rbp-F0h] BYREF
  __int64 *v479; // [rsp+210h] [rbp-E8h] BYREF
  __int64 *v480; // [rsp+218h] [rbp-E0h] BYREF
  __int64 *v481; // [rsp+220h] [rbp-D8h] BYREF
  __int64 *v482; // [rsp+228h] [rbp-D0h] BYREF
  __int64 *v483; // [rsp+230h] [rbp-C8h] BYREF
  __int64 *v484; // [rsp+238h] [rbp-C0h] BYREF
  __int64 *v485; // [rsp+240h] [rbp-B8h] BYREF
  __int64 *v486; // [rsp+248h] [rbp-B0h] BYREF
  __int64 *v487; // [rsp+250h] [rbp-A8h] BYREF
  __int64 *v488; // [rsp+258h] [rbp-A0h] BYREF
  __int64 *v489; // [rsp+260h] [rbp-98h] BYREF
  __int64 *v490; // [rsp+268h] [rbp-90h] BYREF
  __int64 v491; // [rsp+270h] [rbp-88h] BYREF
  __int64 v492; // [rsp+278h] [rbp-80h] BYREF
  __int64 v493; // [rsp+280h] [rbp-78h] BYREF
  void *v494; // [rsp+288h] [rbp-70h] BYREF
  __int64 v495; // [rsp+290h] [rbp-68h] BYREF
  int v496; // [rsp+298h] [rbp-60h]
  unsigned __int16 v497; // [rsp+29Ch] [rbp-5Ch]
  __int64 *v498; // [rsp+2A0h] [rbp-58h] BYREF
  __int128 v499; // [rsp+2A8h] [rbp-50h]
  unsigned __int64 v500; // [rsp+2B8h] [rbp-40h]

  v9 = (_QWORD *)*a3;
  v10 = *(_QWORD *)*a3;
  v500 = __readfsqword(0x28u);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(v10 + 40))(v9, a5) )
    return 0;
  v14 = (_QWORD *)*a3;
  v359 = *(_QWORD *)(a1 + 8);
  v358 = *(_QWORD *)a1;
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a3 + 32LL))(*a3);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, unsigned __int16 *, __int64))(*v14 + 48LL))(v14, &v420, 4) )
    return 0;
  v12 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v14 + 40LL))(v14, v15);
  if ( !(_BYTE)v12 )
    return 0;
  v16 = sub_72930(v421);
  v17 = sub_72B70(v16);
  v18 = sub_72700(v17);
  v19 = *(_QWORD *)a1;
  v20 = v18;
  v21 = v421;
  v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v23 = v22 >> 3;
  if ( v421 > 0x1165u )
    goto LABEL_20;
  if ( v421 > 0x1000u )
  {
    LOWORD(v21) = v421 - 4097;
    switch ( v21 )
    {
      case 0LL:
        sub_65D20(&v440, a1, a3, v23, v20);
        if ( v440 )
        {
          v498 = v440;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 1LL:
        sub_65E60(&v441, a1, a3, v23, v20);
        if ( v441 )
        {
          v498 = v441;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 4LL:
        sub_65FA0(&v442, a1, a3, v23, v20);
        if ( v442 )
        {
          v498 = v442;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 5LL:
        sub_64E80(&v443, a1, a3, v23, v20);
        if ( v443 )
        {
          v498 = v443;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 6LL:
        sub_660F0(&v444, a1, a3, v23, v20);
        if ( v444 )
        {
          v498 = v444;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 7LL:
        sub_660F0(&v445, a1, a3, v23, v20);
        if ( v445 )
        {
          v498 = v445;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 8LL:
        sub_66230(&v446, a1, a3, v23, v20);
        if ( v446 )
        {
          v498 = v446;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 11LL:
        v407 = v20;
        v329 = operator new(0x68u);
        v330 = *a3;
        *(_OWORD *)(v329 + 32) = 0;
        v331 = (__int64 *)v329;
        si128 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_DWORD *)(v329 + 20) = v407;
        *(_QWORD *)(v329 + 8) = 0;
        *(_DWORD *)(v329 + 16) = v23;
        *(_QWORD *)(v329 + 24) = 0;
        *(_DWORD *)(v329 + 80) = -1;
        *(_QWORD *)(v329 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v329 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v329 + 84) = -1;
        *(_QWORD *)v329 = off_AE778;
        *(__m128i *)(v329 + 64) = si128;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v330 + 48LL))(
                v330,
                v329 + 86,
                18) )
          goto LABEL_612;
        *((_WORD *)v331 + 42) = *((_WORD *)v331 + 44);
        v333 = *v331;
        v334 = *(__int64 (__fastcall **)())(*v331 + 320);
        if ( v334 == sub_5E520 )
          goto LABEL_569;
        if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64 *))v334)(v331, a3) )
        {
          v333 = *v331;
LABEL_569:
          v331[1] = a1;
          v335 = *(void (**)())(v333 + 312);
          if ( v335 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v335)(v331);
          if ( v331 )
          {
            v498 = v331;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else
        {
LABEL_612:
          if ( v331 )
            (*(void (__fastcall **)(__int64 *))(*v331 + 272))(v331);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 12LL:
        sub_66390(&v447, a1, a3, v23, v20);
        if ( v447 )
        {
          v498 = v447;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 15LL:
        sub_664D0(&v448, a1, a3, v23, v20);
        if ( v448 )
        {
          v498 = v448;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 16LL:
        sub_664D0(&v449, a1, a3, v23, v20);
        if ( v449 )
        {
          v498 = v449;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 17LL:
        v406 = v20;
        v322 = operator new(0x78u);
        *(_OWORD *)(v322 + 32) = 0;
        v323 = (__int64 *)v322;
        v324 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_QWORD *)(v322 + 8) = 0;
        *(_DWORD *)(v322 + 16) = v23;
        *(_DWORD *)(v322 + 20) = v406;
        *(_QWORD *)(v322 + 24) = 0;
        *(_WORD *)(v322 + 84) = -1;
        v325 = *a3;
        *(_QWORD *)(v322 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v322 + 56) = 0xFFFFFFFFLL;
        *(_DWORD *)(v322 + 80) = -1;
        *(_QWORD *)v322 = off_AE620;
        *(__m128i *)(v322 + 64) = v324;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v325 + 48LL))(
                v325,
                v322 + 86,
                30) )
          goto LABEL_614;
        *((_WORD *)v323 + 42) = *((_WORD *)v323 + 44);
        v326 = *v323;
        v327 = *(__int64 (__fastcall **)())(*v323 + 320);
        if ( v327 == sub_5E530 )
          goto LABEL_553;
        if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64 *))v327)(v323, a3) )
        {
          v326 = *v323;
LABEL_553:
          v323[1] = a1;
          v328 = *(void (**)())(v326 + 312);
          if ( v328 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v328)(v323);
          if ( v323 )
          {
            v498 = v323;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else
        {
LABEL_614:
          if ( v323 )
            (*(void (__fastcall **)(__int64 *))(*v323 + 272))(v323);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 19LL:
        sub_66630(&v450, a1, a3, v23, v20);
        if ( v450 )
        {
          v498 = v450;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 20LL:
        sub_66780(&v451, a1, a3, v23, v20);
        if ( v451 )
        {
          v498 = v451;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 21LL:
        sub_66780(&v452, a1, a3, v23, v20);
        if ( v452 )
        {
          v498 = v452;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 24LL:
        v369 = v20;
        v84 = operator new(0x80u);
        v85 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_DWORD *)(v84 + 16) = v23;
        v86 = v84;
        v87 = *a3;
        *(_DWORD *)(v84 + 20) = v369;
        v88 = (__int64 *)(v84 + 86);
        *(_QWORD *)(v84 + 8) = 0;
        *(_QWORD *)(v84 + 24) = 0;
        *(_OWORD *)(v84 + 32) = 0;
        *(_DWORD *)(v84 + 80) = -1;
        *(_QWORD *)(v84 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v84 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v84 + 84) = -1;
        *(_QWORD *)v84 = off_AFB98;
        *(_QWORD *)(v84 + 104) = 0;
        *(__m128i *)(v84 + 64) = v85;
        *(_OWORD *)(v84 + 112) = 0;
        v89 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v87 + 48LL))(v87, v84 + 86, 12);
        v92 = (unsigned int)v23;
        if ( v89
          && (v88 = a3,
              *(_WORD *)(v86 + 84) = *(_WORD *)(v86 + 88),
              (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v86 + 320LL))(v86, a3)) )
        {
          v93 = *(_QWORD *)v86;
          *(_QWORD *)(v86 + 8) = a1;
          v94 = v23;
          v95 = *(void (**)())(v93 + 312);
          if ( v95 != nullsub_15 )
          {
            ((void (__fastcall *)(__int64, __int64 *, void (*)(), __int64, unsigned __int64, _QWORD))v95)(
              v86,
              a3,
              nullsub_15,
              v91,
              v20,
              (unsigned int)v23);
            v94 = v23;
          }
          if ( v86 )
          {
            v370 = v94;
            v495 = v86;
            sub_681C0(a1, &v495);
            v98 = v370;
            if ( v495 )
            {
              (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64, unsigned __int64, _QWORD))(*(_QWORD *)v495 + 272LL))(
                v495,
                &v495,
                v96,
                v97,
                v20,
                v370);
              v98 = v370;
            }
            v99 = *(_QWORD *)(a1 + 8);
            if ( *(_QWORD *)(v86 + 112) )
            {
              v371 = 0;
              v100 = 0;
              do
              {
                v418 = v98;
                v415 = v100;
                srca = (v99 - *(_QWORD *)a1) >> 3;
                v101 = operator new(0x70u);
                v102 = _mm_load_si128((const __m128i *)&xmmword_94150);
                v103 = (__int64 *)v101;
                v20 = 0xFFFFFFFFLL;
                v98 = v418;
                *(_DWORD *)(v101 + 20) = 7;
                *(_DWORD *)(v101 + 16) = srca;
                *(_QWORD *)(v101 + 24) = 0;
                *(_QWORD *)(v101 + 48) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v101 + 56) = 0xFFFFFFFFLL;
                *(_QWORD *)v101 = off_AFCF0;
                v104 = *(_QWORD *)(v86 + 104);
                *((_DWORD *)v103 + 20) = -1;
                v105 = v104 + 24 * v415;
                *((_WORD *)v103 + 42) = -1;
                v103[11] = 0;
                v103[1] = a1;
                *((_OWORD *)v103 + 2) = 0;
                *((__m128i *)v103 + 4) = v102;
                *((_OWORD *)v103 + 6) = 0;
                if ( v103 + 11 != (__int64 *)v105 )
                {
                  v20 = *(_QWORD *)(v105 + 8);
                  if ( v20 >= 2 )
                  {
                    n = v20 - 1;
                    srcb = *(void **)v105;
                    v417 = *(_QWORD *)(v105 + 8);
                    v356 = (void *)qvector_reserve();
                    v103[11] = (__int64)v356;
                    v103[12] = v417;
                    memmove(v356, srcb, n);
                    v20 = v417;
                    v98 = v418;
                    *(_BYTE *)(v103[11] + v417 - 1) = 0;
                  }
                }
                *((_DWORD *)v103 + 16) = v98;
                *((_DWORD *)v103 + 15) = a4 + 1;
                v106 = *(__int64 ***)(a1 + 8);
                if ( v106 == *(__int64 ***)(a1 + 16) )
                {
                  v498 = v103;
                  src = v98;
                  sub_57F80(a1, (__int64 *)&v498);
                  v98 = src;
                  if ( v498 )
                  {
                    (*(void (__fastcall **)(__int64 *))(*v498 + 272))(v498);
                    v99 = *(_QWORD *)(a1 + 8);
                    v98 = src;
                  }
                  else
                  {
                    v99 = *(_QWORD *)(a1 + 8);
                  }
                }
                else
                {
                  *v106 = v103;
                  v99 = *(_QWORD *)(a1 + 8) + 8LL;
                  *(_QWORD *)(a1 + 8) = v99;
                }
                v100 = ++v371;
              }
              while ( (unsigned __int64)v371 < *(_QWORD *)(v86 + 112) );
            }
            v19 = *(_QWORD *)a1;
            v22 = v99 - *(_QWORD *)a1;
            *(_DWORD *)(v86 + 68) = (v22 >> 3) - v23 - 1;
            goto LABEL_20;
          }
        }
        else if ( v86 )
        {
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64, unsigned __int64, __int64))(*(_QWORD *)v86
                                                                                                  + 272LL))(
            v86,
            v88,
            v90,
            v91,
            v20,
            v92);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 25LL:
        sub_668C0(&v453, a1, a3, v23, v20);
        if ( v453 )
        {
          v498 = v453;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 26LL:
        sub_668C0(&v454, a1, a3, v23, v20);
        if ( v454 )
        {
          v498 = v454;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 256LL:
        v368 = v20;
        v78 = operator new(0x60u);
        v79 = *a3;
        *(_OWORD *)(v78 + 32) = 0;
        v80 = (__int64 *)v78;
        v81 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_QWORD *)(v78 + 8) = 0;
        *(_DWORD *)(v78 + 16) = v23;
        *(_DWORD *)(v78 + 20) = v368;
        *(_QWORD *)(v78 + 24) = 0;
        *(_WORD *)(v78 + 84) = -1;
        *(_QWORD *)(v78 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v78 + 56) = 0xFFFFFFFFLL;
        *(_DWORD *)(v78 + 80) = -1;
        *(_QWORD *)v78 = off_AA9A8;
        *(__m128i *)(v78 + 64) = v81;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v79 + 48LL))(v79, v78 + 86, 8)
          && (*((_WORD *)v80 + 42) = *((_WORD *)v80 + 44),
              (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v80 + 320))(v80, a3)) )
        {
          v82 = *v80;
          v80[1] = a1;
          v83 = *(void (**)())(v82 + 312);
          if ( v83 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v83)(v80);
          if ( v80 )
          {
            v498 = v80;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else if ( v80 )
        {
          (*(void (__fastcall **)(__int64 *))(*v80 + 272))(v80);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 257LL:
        sub_65580(&v455, a1, a3, v23, v20);
        if ( v455 )
        {
          v498 = v455;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 258LL:
        sub_656C0(&v456, a1, a3, v23, v20);
        if ( v456 )
        {
          v498 = v456;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 259LL:
        sub_65800(&v457, a1, a3, v23, v20);
        if ( v457 )
        {
          v498 = v457;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 260LL:
        sub_65940(&v458, a1, a3, v23, v20);
        if ( v458 )
        {
          v498 = v458;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 261LL:
        sub_65D20(&v459, a1, a3, v23, v20);
        if ( v459 )
        {
          v498 = v459;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 262LL:
        sub_65E60(&v460, a1, a3, v23, v20);
        if ( v460 )
        {
          v498 = v460;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 263LL:
        sub_66A20(&v461, a1, a3, v23, v20);
        if ( v461 )
        {
          v498 = v461;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 264LL:
        sub_66A20(&v462, a1, a3, v23, v20);
        if ( v462 )
        {
          v498 = v462;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 265LL:
        sub_65FA0(&v463, a1, a3, v23, v20);
        if ( v463 )
        {
          v498 = v463;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 266LL:
        sub_64E80(&v464, a1, a3, v23, v20);
        if ( v464 )
        {
          v498 = v464;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 267LL:
        sub_660F0(&v465, a1, a3, v23, v20);
        if ( v465 )
        {
          v498 = v465;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 268LL:
        sub_660F0(&v466, a1, a3, v23, v20);
        if ( v466 )
        {
          v498 = v466;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 269LL:
        sub_66230(&v467, a1, a3, v23, v20);
        if ( v467 )
        {
          v498 = v467;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 270LL:
        sub_66B60(&v468, a1, a3, v23, v20);
        if ( v468 )
        {
          v498 = v468;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 271LL:
        sub_66B60(&v469, a1, a3, v23, v20);
        if ( v469 )
        {
          v498 = v469;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 272LL:
        sub_66390(&v470, a1, a3, v23, v20);
        if ( v470 )
        {
          v498 = v470;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 273LL:
        sub_66CA0(&v471, a1, a3, v23, v20);
        if ( v471 )
        {
          v498 = v471;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 274LL:
        sub_66CA0(&v472, a1, a3, v23, v20);
        if ( v472 )
        {
          v498 = v472;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 275LL:
        sub_664D0(&v473, a1, a3, v23, v20);
        if ( v473 )
        {
          v498 = v473;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 276LL:
        sub_664D0(&v474, a1, a3, v23, v20);
        if ( v474 )
        {
          v498 = v474;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 277LL:
        v385 = v20;
        v188 = operator new(0x70u);
        v189 = *a3;
        *(_OWORD *)(v188 + 32) = 0;
        v190 = (__int64 *)v188;
        v191 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_DWORD *)(v188 + 16) = v23;
        *(_QWORD *)(v188 + 8) = 0;
        *(_DWORD *)(v188 + 20) = v385;
        *(_QWORD *)(v188 + 24) = 0;
        *(_DWORD *)(v188 + 80) = -1;
        *(_QWORD *)(v188 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v188 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v188 + 84) = -1;
        *(_QWORD *)v188 = &off_AEF80;
        *(__m128i *)(v188 + 64) = v191;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v189 + 48LL))(
               v189,
               v188 + 86,
               22)
          && (*((_WORD *)v190 + 42) = *((_WORD *)v190 + 44),
              (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v190 + 320))(v190, a3)) )
        {
          v192 = *v190;
          v190[1] = a1;
          v193 = *(__int64 (__fastcall **)(__int64))(v192 + 312);
          if ( v193 == sub_5D4D0 )
          {
            if ( *(_WORD *)(a1 + 544) == 0xFFFF )
              *(_WORD *)(a1 + 544) = *((_WORD *)v190 + 47);
          }
          else
          {
            v193((__int64)v190);
          }
          if ( v190 )
          {
            v498 = v190;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else if ( v190 )
        {
          (*(void (__fastcall **)(__int64 *))(*v190 + 272))(v190);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 278LL:
        sub_66630(&v475, a1, a3, v23, v20);
        if ( v475 )
        {
          v498 = v475;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 279LL:
        sub_66780(&v476, a1, a3, v23, v20);
        if ( v476 )
        {
          v498 = v476;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 280LL:
        sub_66780(&v477, a1, a3, v23, v20);
        if ( v477 )
        {
          v498 = v477;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 281LL:
        v383 = v20;
        v176 = operator new(0x68u);
        v177 = *a3;
        *(_OWORD *)(v176 + 32) = 0;
        v178 = (__int64 *)v176;
        v179 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_QWORD *)(v176 + 8) = 0;
        *(_DWORD *)(v176 + 16) = v23;
        *(_DWORD *)(v176 + 20) = v383;
        *(_QWORD *)(v176 + 24) = 0;
        *(_WORD *)(v176 + 84) = -1;
        *(_QWORD *)(v176 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v176 + 56) = 0xFFFFFFFFLL;
        *(_DWORD *)(v176 + 80) = -1;
        *(_QWORD *)v176 = off_AC9E8;
        *(__m128i *)(v176 + 64) = v179;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v177 + 48LL))(
               v177,
               v176 + 86,
               12)
          && (*((_WORD *)v178 + 42) = *((_WORD *)v178 + 44),
              (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v178 + 320))(v178, a3)) )
        {
          v180 = *v178;
          v178[1] = a1;
          v181 = *(void (**)())(v180 + 312);
          if ( v181 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v181)(v178);
          if ( v178 )
          {
            v498 = v178;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else if ( v178 )
        {
          (*(void (__fastcall **)(__int64 *))(*v178 + 272))(v178);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 282LL:
        v384 = v20;
        v182 = operator new(0x68u);
        v183 = *a3;
        *(_OWORD *)(v182 + 32) = 0;
        v184 = (__int64 *)v182;
        v185 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_QWORD *)(v182 + 8) = 0;
        *(_DWORD *)(v182 + 16) = v23;
        *(_DWORD *)(v182 + 20) = v384;
        *(_QWORD *)(v182 + 24) = 0;
        *(_DWORD *)(v182 + 80) = -1;
        *(_QWORD *)(v182 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v182 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v182 + 84) = -1;
        *(_QWORD *)v182 = off_AC9E8;
        *(__m128i *)(v182 + 64) = v185;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v183 + 48LL))(
               v183,
               v182 + 86,
               12)
          && (*((_WORD *)v184 + 42) = *((_WORD *)v184 + 44),
              (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v184 + 320))(v184, a3)) )
        {
          v186 = *v184;
          v184[1] = a1;
          v187 = *(void (**)())(v186 + 312);
          if ( v187 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v187)(v184);
          if ( v184 )
          {
            v498 = v184;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else if ( v184 )
        {
          (*(void (__fastcall **)(__int64 *))(*v184 + 272))(v184);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 283LL:
        sub_660F0(&v478, a1, a3, v23, v20);
        if ( v478 )
        {
          v498 = v478;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 284LL:
        sub_660F0(&v479, a1, a3, v23, v20);
        if ( v479 )
        {
          v498 = v479;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 285LL:
        v379 = v20;
        v151 = operator new(0x70u);
        v152 = *a3;
        *(_OWORD *)(v151 + 32) = 0;
        v153 = (__int64 *)v151;
        v154 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_QWORD *)(v151 + 8) = 0;
        *(_DWORD *)(v151 + 16) = v23;
        *(_DWORD *)(v151 + 20) = v379;
        *(_QWORD *)(v151 + 24) = 0;
        *(_DWORD *)(v151 + 80) = -1;
        *(_QWORD *)(v151 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v151 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v151 + 84) = -1;
        *(_QWORD *)v151 = off_ACB40;
        *(__m128i *)(v151 + 64) = v154;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v152 + 48LL))(
               v152,
               v151 + 86,
               20)
          && (*((_WORD *)v153 + 42) = *((_WORD *)v153 + 44),
              (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v153 + 320))(v153, a3)) )
        {
          v155 = *v153;
          v153[1] = a1;
          v156 = *(void (**)())(v155 + 312);
          if ( v156 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v156)(v153);
          if ( v153 )
          {
            v498 = v153;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else if ( v153 )
        {
          (*(void (__fastcall **)(__int64 *))(*v153 + 272))(v153);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 286LL:
        v380 = v20;
        v157 = operator new(0x68u);
        v158 = *a3;
        *(_OWORD *)(v157 + 32) = 0;
        v159 = (__int64 *)v157;
        v160 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_QWORD *)(v157 + 8) = 0;
        *(_DWORD *)(v157 + 16) = v23;
        *(_DWORD *)(v157 + 20) = v380;
        *(_QWORD *)(v157 + 24) = 0;
        *(_DWORD *)(v157 + 80) = -1;
        *(_QWORD *)(v157 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v157 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v157 + 84) = -1;
        *(_QWORD *)v157 = off_ACC98;
        *(__m128i *)(v157 + 64) = v160;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v158 + 48LL))(
               v158,
               v157 + 86,
               18)
          && (*((_WORD *)v159 + 42) = *((_WORD *)v159 + 44),
              (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v159 + 320))(v159, a3)) )
        {
          v161 = *v159;
          v159[1] = a1;
          v162 = *(void (**)())(v161 + 312);
          if ( v162 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v162)(v159);
          if ( v159 )
          {
            v498 = v159;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else if ( v159 )
        {
          (*(void (__fastcall **)(__int64 *))(*v159 + 272))(v159);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 287LL:
        v378 = v20;
        v145 = operator new(0x70u);
        v146 = *a3;
        *(_OWORD *)(v145 + 32) = 0;
        v147 = (__int64 *)v145;
        v148 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_QWORD *)(v145 + 8) = 0;
        *(_DWORD *)(v145 + 16) = v23;
        *(_DWORD *)(v145 + 20) = v378;
        *(_QWORD *)(v145 + 24) = 0;
        *(_DWORD *)(v145 + 80) = -1;
        *(_QWORD *)(v145 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v145 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v145 + 84) = -1;
        *(_QWORD *)v145 = off_ACDF0;
        *(__m128i *)(v145 + 64) = v148;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v146 + 48LL))(
               v146,
               v145 + 86,
               20)
          && (*((_WORD *)v147 + 42) = *((_WORD *)v147 + 44),
              (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v147 + 320))(v147, a3)) )
        {
          v149 = *v147;
          v147[1] = a1;
          v150 = *(void (**)())(v149 + 312);
          if ( v150 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v150)(v147);
          if ( v147 )
          {
            v498 = v147;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else if ( v147 )
        {
          (*(void (__fastcall **)(__int64 *))(*v147 + 272))(v147);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 288LL:
        v382 = v20;
        v169 = operator new(0x68u);
        v170 = *a3;
        *(_OWORD *)(v169 + 32) = 0;
        v171 = (__int64 *)v169;
        v172 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_QWORD *)(v169 + 8) = 0;
        *(_DWORD *)(v169 + 16) = v23;
        *(_DWORD *)(v169 + 20) = v382;
        *(_QWORD *)(v169 + 24) = 0;
        *(_DWORD *)(v169 + 80) = -1;
        *(_QWORD *)(v169 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v169 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v169 + 84) = -1;
        *(_QWORD *)v169 = off_ACF48;
        *(__m128i *)(v169 + 64) = v172;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v170 + 48LL))(
                v170,
                v169 + 86,
                17) )
          goto LABEL_689;
        *((_WORD *)v171 + 42) = *((_WORD *)v171 + 44);
        v173 = *v171;
        v174 = *(__int64 (__fastcall **)())(*v171 + 320);
        if ( v174 == sub_5E550 )
          goto LABEL_289;
        if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64 *))v174)(v171, a3) )
        {
          v173 = *v171;
LABEL_289:
          v171[1] = a1;
          v175 = *(void (**)())(v173 + 312);
          if ( v175 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v175)(v171);
          if ( v171 )
          {
            v498 = v171;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else
        {
LABEL_689:
          if ( v171 )
            (*(void (__fastcall **)(__int64 *))(*v171 + 272))(v171);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 289LL:
        v381 = v20;
        v163 = operator new(0x70u);
        v164 = *a3;
        *(_OWORD *)(v163 + 32) = 0;
        v165 = (__int64 *)v163;
        v166 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_DWORD *)(v163 + 16) = v23;
        *(_QWORD *)(v163 + 8) = 0;
        *(_DWORD *)(v163 + 20) = v381;
        *(_QWORD *)(v163 + 24) = 0;
        *(_DWORD *)(v163 + 80) = -1;
        *(_QWORD *)(v163 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v163 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v163 + 84) = -1;
        *(_QWORD *)v163 = off_AD0A0;
        *(__m128i *)(v163 + 64) = v166;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v164 + 48LL))(
               v164,
               v163 + 86,
               22)
          && (*((_WORD *)v165 + 42) = *((_WORD *)v165 + 44),
              (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v165 + 320))(v165, a3)) )
        {
          v167 = *v165;
          v165[1] = a1;
          v168 = *(void (**)())(v167 + 312);
          if ( v168 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v168)(v165);
          if ( v165 )
          {
            v498 = v165;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else if ( v165 )
        {
          (*(void (__fastcall **)(__int64 *))(*v165 + 272))(v165);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 290LL:
        v377 = v20;
        v138 = operator new(0x68u);
        v139 = *a3;
        *(_OWORD *)(v138 + 32) = 0;
        v140 = (__int64 *)v138;
        v141 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_DWORD *)(v138 + 16) = v23;
        *(_QWORD *)(v138 + 8) = 0;
        *(_DWORD *)(v138 + 20) = v377;
        *(_QWORD *)(v138 + 24) = 0;
        *(_DWORD *)(v138 + 80) = -1;
        *(_QWORD *)(v138 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v138 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v138 + 84) = -1;
        *(_QWORD *)v138 = off_AD1F8;
        *(__m128i *)(v138 + 64) = v141;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v139 + 48LL))(
                v139,
                v138 + 86,
                18) )
          goto LABEL_641;
        *((_WORD *)v140 + 42) = *((_WORD *)v140 + 44);
        v142 = *v140;
        v143 = *(__int64 (__fastcall **)())(*v140 + 320);
        if ( v143 == sub_5E560 )
          goto LABEL_251;
        if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64 *))v143)(v140, a3) )
        {
          v142 = *v140;
LABEL_251:
          v140[1] = a1;
          v144 = *(void (**)())(v142 + 312);
          if ( v144 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v144)(v140);
          if ( v140 )
          {
            v498 = v140;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else
        {
LABEL_641:
          if ( v140 )
            (*(void (__fastcall **)(__int64 *))(*v140 + 272))(v140);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 291LL:
        v376 = v20;
        v132 = operator new(0x60u);
        v133 = *a3;
        *(_OWORD *)(v132 + 32) = 0;
        v134 = (__int64 *)v132;
        v135 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_DWORD *)(v132 + 16) = v23;
        *(_QWORD *)(v132 + 8) = 0;
        *(_DWORD *)(v132 + 20) = v376;
        *(_QWORD *)(v132 + 24) = 0;
        *(_DWORD *)(v132 + 80) = -1;
        *(_QWORD *)(v132 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v132 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v132 + 84) = -1;
        *(_QWORD *)v132 = off_ADA08;
        *(__m128i *)(v132 + 64) = v135;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v133 + 48LL))(v133, v132 + 86, 4)
          && (*((_WORD *)v134 + 42) = *((_WORD *)v134 + 44),
              (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v134 + 320))(v134, a3)) )
        {
          v136 = *v134;
          v134[1] = a1;
          v137 = *(void (**)())(v136 + 312);
          if ( v137 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v137)(v134);
          if ( v134 )
          {
            v498 = v134;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else if ( v134 )
        {
          (*(void (__fastcall **)(__int64 *))(*v134 + 272))(v134);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 292LL:
      case 293LL:
      case 294LL:
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64, __int64, unsigned __int64))(*(_QWORD *)*a3 + 48LL))(
                *a3,
                &v495,
                14,
                v19,
                v20) )
          goto LABEL_610;
        v498 = nullptr;
        v46 = *a3;
        v499 = 0;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v46 + 56LL))(v46, &v498) )
        {
          if ( (unsigned __int16)(v497 - 1) <= 0xFFFDu && (unsigned __int64)v497 < *(_QWORD *)(a1 + 152) )
          {
            v47 = *(_QWORD *)(a1 + 144) + 120LL * v497;
            if ( *(_DWORD *)(v47 + 84) )
            {
              (*(void (__fastcall **)(void **, _QWORD, _QWORD))(**(_QWORD **)(a1 + 608) + 24LL))(
                &v494,
                *(_QWORD *)(a1 + 608),
                *(unsigned __int16 *)(v47 + 82));
              if ( v494 )
                v12 = sub_69100(a1, (_DWORD)a2, (unsigned int)&v494, a4, v496, a6);
              else
                v12 = 0;
              sub_55E50(&v494);
              if ( v498 )
              {
                *(_QWORD *)&v499 = 0;
                qfree();
              }
              return v12;
            }
          }
        }
        if ( v498 )
        {
          *(_QWORD *)&v499 = 0;
          qfree();
        }
LABEL_610:
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 297LL:
        sub_668C0(&v480, a1, a3, v23, v20);
        if ( v480 )
        {
          v498 = v480;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 298LL:
        sub_668C0(&v481, a1, a3, v23, v20);
        if ( v481 )
        {
          v498 = v481;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 299LL:
        v372 = v20;
        v107 = operator new(0x70u);
        v108 = *a3;
        *(_OWORD *)(v107 + 32) = 0;
        v109 = (__int64 *)v107;
        v110 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_DWORD *)(v107 + 20) = v372;
        *(_QWORD *)(v107 + 8) = 0;
        *(_DWORD *)(v107 + 16) = v23;
        *(_QWORD *)(v107 + 24) = 0;
        *(_DWORD *)(v107 + 80) = -1;
        *(_QWORD *)(v107 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v107 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v107 + 84) = -1;
        *(_QWORD *)v107 = off_B00F0;
        *(__m128i *)(v107 + 64) = v110;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v108 + 48LL))(
                v108,
                v107 + 86,
                20) )
          goto LABEL_631;
        *((_WORD *)v109 + 42) = *((_WORD *)v109 + 44);
        v111 = *v109;
        v112 = *(__int64 (__fastcall **)())(*v109 + 320);
        if ( v112 == sub_5E570 )
          goto LABEL_210;
        if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64 *))v112)(v109, a3) )
        {
          v111 = *v109;
LABEL_210:
          v109[1] = a1;
          v113 = *(void (**)())(v111 + 312);
          if ( v113 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v113)(v109);
          if ( v109 )
          {
            v498 = v109;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else
        {
LABEL_631:
          if ( v109 )
            (*(void (__fastcall **)(__int64 *))(*v109 + 272))(v109);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 300LL:
        sub_65E60(&v482, a1, a3, v23, v20);
        if ( v482 )
        {
          v498 = v482;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 301LL:
        v374 = v20;
        v120 = operator new(0x70u);
        *(_OWORD *)(v120 + 32) = 0;
        v121 = (__int64 *)v120;
        v122 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_QWORD *)(v120 + 8) = 0;
        *(_DWORD *)(v120 + 16) = v23;
        *(_DWORD *)(v120 + 20) = v374;
        *(_QWORD *)(v120 + 24) = 0;
        *(_WORD *)(v120 + 84) = -1;
        v123 = *a3;
        *(_QWORD *)(v120 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v120 + 56) = 0xFFFFFFFFLL;
        *(_DWORD *)(v120 + 80) = -1;
        *(_QWORD *)v120 = off_ACB40;
        *(__m128i *)(v120 + 64) = v122;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v123 + 48LL))(
               v123,
               v120 + 86,
               20)
          && (*((_WORD *)v121 + 42) = *((_WORD *)v121 + 44),
              (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v121 + 320))(v121, a3)) )
        {
          v124 = *v121;
          v121[1] = a1;
          v125 = *(void (**)())(v124 + 312);
          if ( v125 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v125)(v121);
          if ( v121 )
          {
            v498 = v121;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else if ( v121 )
        {
          (*(void (__fastcall **)(__int64 *))(*v121 + 272))(v121);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 302LL:
        v375 = v20;
        v126 = operator new(0x68u);
        v127 = *a3;
        *(_OWORD *)(v126 + 32) = 0;
        v128 = (__int64 *)v126;
        v129 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_QWORD *)(v126 + 8) = 0;
        *(_DWORD *)(v126 + 16) = v23;
        *(_DWORD *)(v126 + 20) = v375;
        *(_QWORD *)(v126 + 24) = 0;
        *(_WORD *)(v126 + 84) = -1;
        *(_QWORD *)(v126 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v126 + 56) = 0xFFFFFFFFLL;
        *(_DWORD *)(v126 + 80) = -1;
        *(_QWORD *)v126 = off_ACC98;
        *(__m128i *)(v126 + 64) = v129;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v127 + 48LL))(
               v127,
               v126 + 86,
               18)
          && (*((_WORD *)v128 + 42) = *((_WORD *)v128 + 44),
              (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v128 + 320))(v128, a3)) )
        {
          v130 = *v128;
          v128[1] = a1;
          v131 = *(void (**)())(v130 + 312);
          if ( v131 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v131)(v128);
          if ( v128 )
          {
            v498 = v128;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else if ( v128 )
        {
          (*(void (__fastcall **)(__int64 *))(*v128 + 272))(v128);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 303LL:
        v373 = v20;
        v114 = operator new(0x70u);
        v115 = *a3;
        *(_OWORD *)(v114 + 32) = 0;
        v116 = (__int64 *)v114;
        v117 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_DWORD *)(v114 + 16) = v23;
        *(_QWORD *)(v114 + 8) = 0;
        *(_DWORD *)(v114 + 20) = v373;
        *(_QWORD *)(v114 + 24) = 0;
        *(_DWORD *)(v114 + 80) = -1;
        *(_QWORD *)(v114 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v114 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v114 + 84) = -1;
        *(_QWORD *)v114 = off_AD0A0;
        *(__m128i *)(v114 + 64) = v117;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v115 + 48LL))(
               v115,
               v114 + 86,
               22)
          && (*((_WORD *)v116 + 42) = *((_WORD *)v116 + 44),
              (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v116 + 320))(v116, a3)) )
        {
          v118 = *v116;
          v116[1] = a1;
          v119 = *(void (**)())(v118 + 312);
          if ( v119 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v119)(v116);
          if ( v116 )
          {
            v498 = v116;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else if ( v116 )
        {
          (*(void (__fastcall **)(__int64 *))(*v116 + 272))(v116);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 304LL:
        v399 = v20;
        v275 = operator new(0x68u);
        v276 = *a3;
        *(_OWORD *)(v275 + 32) = 0;
        v277 = (__int64 *)v275;
        v278 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_QWORD *)(v275 + 8) = 0;
        *(_DWORD *)(v275 + 16) = v23;
        *(_DWORD *)(v275 + 20) = v399;
        *(_QWORD *)(v275 + 24) = 0;
        *(_WORD *)(v275 + 84) = -1;
        *(_QWORD *)(v275 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v275 + 56) = 0xFFFFFFFFLL;
        *(_DWORD *)(v275 + 80) = -1;
        *(_QWORD *)v275 = off_AD1F8;
        *(__m128i *)(v275 + 64) = v278;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v276 + 48LL))(
                v276,
                v275 + 86,
                18) )
          goto LABEL_669;
        *((_WORD *)v277 + 42) = *((_WORD *)v277 + 44);
        v279 = *v277;
        v280 = *(__int64 (__fastcall **)())(*v277 + 320);
        if ( v280 == sub_5E560 )
          goto LABEL_492;
        if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64 *))v280)(v277, a3) )
        {
          v279 = *v277;
LABEL_492:
          v277[1] = a1;
          v281 = *(void (**)())(v279 + 312);
          if ( v281 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v281)(v277);
          if ( v277 )
          {
            v498 = v277;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else
        {
LABEL_669:
          if ( v277 )
            (*(void (__fastcall **)(__int64 *))(*v277 + 272))(v277);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 305LL:
        v398 = v20;
        v268 = operator new(0x78u);
        v269 = *a3;
        *(_OWORD *)(v268 + 32) = 0;
        v270 = (__int64 *)v268;
        v271 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_QWORD *)(v268 + 8) = 0;
        *(_DWORD *)(v268 + 16) = v23;
        *(_DWORD *)(v268 + 20) = v398;
        *(_QWORD *)(v268 + 24) = 0;
        *(_DWORD *)(v268 + 80) = -1;
        *(_QWORD *)(v268 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v268 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v268 + 84) = -1;
        *(_QWORD *)v268 = off_ABB20;
        *(__m128i *)(v268 + 64) = v271;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v269 + 48LL))(
                v269,
                v268 + 86,
                32) )
          goto LABEL_671;
        *((_WORD *)v270 + 42) = *((_WORD *)v270 + 44);
        v272 = *v270;
        v273 = *(__int64 (__fastcall **)())(*v270 + 320);
        if ( v273 == sub_5E580 )
          goto LABEL_485;
        if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64 *))v273)(v270, a3) )
        {
          v272 = *v270;
LABEL_485:
          v270[1] = a1;
          v274 = *(void (**)())(v272 + 312);
          if ( v274 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v274)(v270);
          if ( v270 )
          {
            v498 = v270;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else
        {
LABEL_671:
          if ( v270 )
            (*(void (__fastcall **)(__int64 *))(*v270 + 272))(v270);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 310LL:
        v397 = v20;
        v262 = operator new(0x68u);
        v263 = *a3;
        *(_OWORD *)(v262 + 32) = 0;
        v264 = (__int64 *)v262;
        v265 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_QWORD *)(v262 + 8) = 0;
        *(_DWORD *)(v262 + 16) = v23;
        *(_DWORD *)(v262 + 20) = v397;
        *(_QWORD *)(v262 + 24) = 0;
        *(_DWORD *)(v262 + 80) = -1;
        *(_QWORD *)(v262 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v262 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v262 + 84) = -1;
        *(_QWORD *)v262 = off_AE4C8;
        *(__m128i *)(v262 + 64) = v265;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v263 + 48LL))(
               v263,
               v262 + 86,
               18)
          && (*((_WORD *)v264 + 42) = *((_WORD *)v264 + 44),
              (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v264 + 320))(v264, a3)) )
        {
          v266 = *v264;
          v264[1] = a1;
          v267 = *(void (**)())(v266 + 312);
          if ( v267 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v267)(v264);
          if ( v264 )
          {
            v498 = v264;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else if ( v264 )
        {
          (*(void (__fastcall **)(__int64 *))(*v264 + 272))(v264);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 311LL:
        v396 = v20;
        v256 = operator new(0x60u);
        v257 = *a3;
        *(_OWORD *)(v256 + 32) = 0;
        v258 = (__int64 *)v256;
        v259 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_QWORD *)(v256 + 8) = 0;
        *(_DWORD *)(v256 + 16) = v23;
        *(_DWORD *)(v256 + 20) = v396;
        *(_QWORD *)(v256 + 24) = 0;
        *(_DWORD *)(v256 + 80) = -1;
        *(_QWORD *)(v256 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v256 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v256 + 84) = -1;
        *(_QWORD *)v256 = off_B04F8;
        *(__m128i *)(v256 + 64) = v259;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v257 + 48LL))(v257, v256 + 86, 8)
          && (*((_WORD *)v258 + 42) = *((_WORD *)v258 + 44),
              (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v258 + 320))(v258, a3)) )
        {
          v260 = *v258;
          v258[1] = a1;
          v261 = *(void (**)())(v260 + 312);
          if ( v261 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v261)(v258);
          if ( v258 )
          {
            v498 = v258;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else if ( v258 )
        {
          (*(void (__fastcall **)(__int64 *))(*v258 + 272))(v258);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 312LL:
        v395 = v20;
        v249 = operator new(0x68u);
        v250 = *a3;
        *(_OWORD *)(v249 + 32) = 0;
        v251 = (__int64 *)v249;
        v252 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_QWORD *)(v249 + 8) = 0;
        *(_DWORD *)(v249 + 16) = v23;
        *(_DWORD *)(v249 + 20) = v395;
        *(_QWORD *)(v249 + 24) = 0;
        *(_DWORD *)(v249 + 80) = -1;
        *(_QWORD *)(v249 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v249 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v249 + 84) = -1;
        *(_QWORD *)v249 = off_ADE10;
        *(__m128i *)(v249 + 64) = v252;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v250 + 48LL))(
                v250,
                v249 + 86,
                16) )
          goto LABEL_675;
        *((_WORD *)v251 + 42) = *((_WORD *)v251 + 44);
        v253 = *v251;
        v254 = *(__int64 (__fastcall **)())(*v251 + 320);
        if ( v254 == sub_5E590 )
          goto LABEL_464;
        if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64 *))v254)(v251, a3) )
        {
          v253 = *v251;
LABEL_464:
          v251[1] = a1;
          v255 = *(void (**)())(v253 + 312);
          if ( v255 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v255)(v251);
          if ( v251 )
          {
            v498 = v251;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else
        {
LABEL_675:
          if ( v251 )
            (*(void (__fastcall **)(__int64 *))(*v251 + 272))(v251);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 315LL:
        v394 = v20;
        v243 = operator new(0x70u);
        v244 = *a3;
        *(_OWORD *)(v243 + 32) = 0;
        v245 = (__int64 *)v243;
        v246 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_QWORD *)(v243 + 8) = 0;
        *(_DWORD *)(v243 + 16) = v23;
        *(_DWORD *)(v243 + 20) = v394;
        *(_QWORD *)(v243 + 24) = 0;
        *(_DWORD *)(v243 + 80) = -1;
        *(_QWORD *)(v243 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v243 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v243 + 84) = -1;
        *(_QWORD *)v243 = &off_AF0D8;
        *(__m128i *)(v243 + 64) = v246;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v244 + 48LL))(
               v244,
               v243 + 86,
               26)
          && (*((_WORD *)v245 + 42) = *((_WORD *)v245 + 44),
              (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v245 + 320))(v245, a3)) )
        {
          v247 = *v245;
          v245[1] = a1;
          v248 = *(__int64 (__fastcall **)(__int64))(v247 + 312);
          if ( v248 == sub_5D510 )
          {
            if ( *(_WORD *)(a1 + 544) == 0xFFFF )
              *(_WORD *)(a1 + 544) = *((_WORD *)v245 + 47);
          }
          else
          {
            v248((__int64)v245);
          }
          if ( v245 )
          {
            v498 = v245;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else if ( v245 )
        {
          (*(void (__fastcall **)(__int64 *))(*v245 + 272))(v245);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 316LL:
        v393 = v20;
        v236 = operator new(0x60u);
        v237 = *a3;
        *(_OWORD *)(v236 + 32) = 0;
        v238 = (__int64 *)v236;
        v239 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_DWORD *)(v236 + 16) = v23;
        *(_QWORD *)(v236 + 8) = 0;
        *(_DWORD *)(v236 + 20) = v393;
        *(_QWORD *)(v236 + 24) = 0;
        *(_DWORD *)(v236 + 80) = -1;
        *(_QWORD *)(v236 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v236 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v236 + 84) = -1;
        *(_QWORD *)v236 = off_AA850;
        *(__m128i *)(v236 + 64) = v239;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v237 + 48LL))(
                v237,
                v236 + 86,
                5) )
          goto LABEL_657;
        *((_WORD *)v238 + 42) = *((_WORD *)v238 + 44);
        v240 = *v238;
        v241 = *(__int64 (__fastcall **)())(*v238 + 320);
        if ( v241 == sub_5E5A0 )
          goto LABEL_449;
        if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64 *))v241)(v238, a3) )
        {
          v240 = *v238;
LABEL_449:
          v238[1] = a1;
          v242 = *(void (**)())(v240 + 312);
          if ( v242 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v242)(v238);
          if ( v238 )
          {
            v498 = v238;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else
        {
LABEL_657:
          if ( v238 )
            (*(void (__fastcall **)(__int64 *))(*v238 + 272))(v238);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 317LL:
        v416 = v20;
        v232 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a3 + 32LL))(*a3);
        srcc = v420 + v232 + 2;
        v233 = operator new(0x70u);
        *(_DWORD *)(v233 + 16) = v23;
        v234 = *a3;
        *(_DWORD *)(v233 + 20) = v416;
        *(_QWORD *)(v233 + 24) = 0;
        *(_OWORD *)(v233 + 32) = 0;
        v392 = (_WORD *)v233;
        *(_QWORD *)(v233 + 56) = 0xFFFFFFFFLL;
        *(_QWORD *)(v233 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v233 + 68) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v233 + 76) = 0xFFFFFFFF00000000LL;
        *(_DWORD *)(v233 + 96) = srcc;
        *(_WORD *)(v233 + 84) = -1;
        *(_QWORD *)v233 = off_AF638;
        *(_DWORD *)(v233 + 100) = -1;
        *(_WORD *)(v233 + 104) = -1;
        *(_QWORD *)(v233 + 8) = a1;
        *(_DWORD *)(v233 + 64) = a6;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v234 + 48LL))(
               v234,
               v233 + 86,
               10)
          && (v392[42] = v392[44],
              (*(unsigned __int8 (__fastcall **)(_WORD *, __int64 *))(*(_QWORD *)v392 + 320LL))(v392, a3)) )
        {
          v235 = *(void (**)())(*(_QWORD *)v392 + 312LL);
          if ( v235 != nullsub_15 )
            ((void (__fastcall *)(_WORD *))v235)(v392);
          if ( v392 )
          {
            v494 = v392;
            sub_681C0(a1, (__int64 *)&v494);
            if ( v494 )
              (*(void (__fastcall **)(void *))(*(_QWORD *)v494 + 272LL))(v494);
          }
        }
        else if ( v392 )
        {
          (*(void (__fastcall **)(_WORD *))(*(_QWORD *)v392 + 272LL))(v392);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 325LL:
        sub_66B60(&v483, a1, a3, v23, v20);
        if ( v483 )
        {
          v498 = v483;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 326LL:
        sub_66B60(&v484, a1, a3, v23, v20);
        if ( v484 )
        {
          v498 = v484;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 327LL:
        sub_664D0(&v485, a1, a3, v23, v20);
        if ( v485 )
        {
          v498 = v485;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 328LL:
        sub_664D0(&v486, a1, a3, v23, v20);
        if ( v486 )
        {
          v498 = v486;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 329LL:
        sub_66780(&v487, a1, a3, v23, v20);
        if ( v487 )
        {
          v498 = v487;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 330LL:
        sub_66780(&v488, a1, a3, v23, v20);
        if ( v488 )
        {
          v498 = v488;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 331LL:
        v391 = v20;
        v225 = operator new(0x60u);
        v226 = *a3;
        *(_OWORD *)(v225 + 32) = 0;
        v227 = (__int64 *)v225;
        v228 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_DWORD *)(v225 + 16) = v23;
        *(_QWORD *)(v225 + 8) = 0;
        *(_DWORD *)(v225 + 20) = v391;
        *(_QWORD *)(v225 + 24) = 0;
        *(_DWORD *)(v225 + 80) = -1;
        *(_QWORD *)(v225 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v225 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v225 + 84) = -1;
        *(_QWORD *)v225 = off_AAB00;
        *(__m128i *)(v225 + 64) = v228;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v226 + 48LL))(
                v226,
                v225 + 86,
                8) )
          goto LABEL_659;
        *((_WORD *)v227 + 42) = *((_WORD *)v227 + 44);
        v229 = *v227;
        v230 = *(__int64 (__fastcall **)())(*v227 + 320);
        if ( v230 == sub_5E5B0 )
          goto LABEL_416;
        if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64 *))v230)(v227, a3) )
        {
          v229 = *v227;
LABEL_416:
          v227[1] = a1;
          v231 = *(void (**)())(v229 + 312);
          if ( v231 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v231)(v227);
          if ( v227 )
          {
            v498 = v227;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else
        {
LABEL_659:
          if ( v227 )
            (*(void (__fastcall **)(__int64 *))(*v227 + 272))(v227);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 332LL:
        v390 = v20;
        v218 = operator new(0x68u);
        v219 = *a3;
        *(_OWORD *)(v218 + 32) = 0;
        v220 = (__int64 *)v218;
        v221 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_DWORD *)(v218 + 16) = v23;
        *(_QWORD *)(v218 + 8) = 0;
        *(_DWORD *)(v218 + 20) = v390;
        *(_QWORD *)(v218 + 24) = 0;
        *(_DWORD *)(v218 + 80) = -1;
        *(_QWORD *)(v218 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v218 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v218 + 84) = -1;
        *(_QWORD *)v218 = off_ADF68;
        *(__m128i *)(v218 + 64) = v221;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v219 + 48LL))(
                v219,
                v218 + 86,
                16) )
          goto LABEL_661;
        *((_WORD *)v220 + 42) = *((_WORD *)v220 + 44);
        v222 = *v220;
        v223 = *(__int64 (__fastcall **)())(*v220 + 320);
        if ( v223 == sub_5E5C0 )
          goto LABEL_409;
        if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64 *))v223)(v220, a3) )
        {
          v222 = *v220;
LABEL_409:
          v220[1] = a1;
          v224 = *(void (**)())(v222 + 312);
          if ( v224 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v224)(v220);
          if ( v220 )
          {
            v498 = v220;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else
        {
LABEL_661:
          if ( v220 )
            (*(void (__fastcall **)(__int64 *))(*v220 + 272))(v220);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 336LL:
        v405 = v20;
        v316 = operator new(0x70u);
        v317 = *a3;
        *(_OWORD *)(v316 + 32) = 0;
        v318 = (__int64 *)v316;
        v319 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_DWORD *)(v316 + 20) = v405;
        *(_QWORD *)(v316 + 8) = 0;
        *(_DWORD *)(v316 + 16) = v23;
        *(_QWORD *)(v316 + 24) = 0;
        *(_DWORD *)(v316 + 80) = -1;
        *(_QWORD *)(v316 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v316 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v316 + 84) = -1;
        *(_QWORD *)v316 = off_AD350;
        *(__m128i *)(v316 + 64) = v319;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v317 + 48LL))(
               v317,
               v316 + 86,
               20)
          && (*((_WORD *)v318 + 42) = *((_WORD *)v318 + 44),
              (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v318 + 320))(v318, a3)) )
        {
          v320 = *v318;
          v318[1] = a1;
          v321 = *(void (**)())(v320 + 312);
          if ( v321 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v321)(v318);
          if ( v318 )
          {
            v498 = v318;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else if ( v318 )
        {
          (*(void (__fastcall **)(__int64 *))(*v318 + 272))(v318);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 337LL:
        v404 = v20;
        v310 = operator new(0x70u);
        *(_OWORD *)(v310 + 32) = 0;
        v311 = (__int64 *)v310;
        v312 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_QWORD *)(v310 + 8) = 0;
        *(_DWORD *)(v310 + 16) = v23;
        *(_DWORD *)(v310 + 20) = v404;
        *(_QWORD *)(v310 + 24) = 0;
        *(_WORD *)(v310 + 84) = -1;
        v313 = *a3;
        *(_QWORD *)(v310 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v310 + 56) = 0xFFFFFFFFLL;
        *(_DWORD *)(v310 + 80) = -1;
        *(_QWORD *)v310 = off_AD350;
        *(__m128i *)(v310 + 64) = v312;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v313 + 48LL))(
               v313,
               v310 + 86,
               20)
          && (*((_WORD *)v311 + 42) = *((_WORD *)v311 + 44),
              (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v311 + 320))(v311, a3)) )
        {
          v314 = *v311;
          v311[1] = a1;
          v315 = *(void (**)())(v314 + 312);
          if ( v315 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v315)(v311);
          if ( v311 )
          {
            v498 = v311;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else if ( v311 )
        {
          (*(void (__fastcall **)(__int64 *))(*v311 + 272))(v311);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 340LL:
        sub_66B60(&v489, a1, a3, v23, v20);
        if ( v489 )
        {
          v498 = v489;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 341LL:
        sub_66B60(&v490, a1, a3, v23, v20);
        if ( v490 )
        {
          v498 = v490;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 345LL:
        v403 = v20;
        v303 = operator new(0x60u);
        v304 = *a3;
        *(_OWORD *)(v303 + 32) = 0;
        v305 = (__int64 *)v303;
        v306 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_QWORD *)(v303 + 8) = 0;
        *(_DWORD *)(v303 + 16) = v23;
        *(_DWORD *)(v303 + 20) = v403;
        *(_QWORD *)(v303 + 24) = 0;
        *(_WORD *)(v303 + 84) = -1;
        *(_QWORD *)(v303 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v303 + 56) = 0xFFFFFFFFLL;
        *(_DWORD *)(v303 + 80) = -1;
        *(_QWORD *)v303 = off_AE218;
        *(__m128i *)(v303 + 64) = v306;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v304 + 48LL))(
                v304,
                v303 + 86,
                8) )
          goto LABEL_697;
        *((_WORD *)v305 + 42) = *((_WORD *)v305 + 44);
        v307 = *v305;
        v308 = *(__int64 (__fastcall **)())(*v305 + 320);
        if ( v308 == sub_5E5D0 )
          goto LABEL_520;
        if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64 *))v308)(v305, a3) )
        {
          v307 = *v305;
LABEL_520:
          v305[1] = a1;
          v309 = *(void (**)())(v307 + 312);
          if ( v309 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v309)(v305);
          if ( v305 )
          {
            v498 = v305;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else
        {
LABEL_697:
          if ( v305 )
            (*(void (__fastcall **)(__int64 *))(*v305 + 272))(v305);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 346LL:
        v402 = v20;
        v296 = operator new(0x60u);
        v297 = *a3;
        *(_OWORD *)(v296 + 32) = 0;
        v298 = (__int64 *)v296;
        v299 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_DWORD *)(v296 + 16) = v23;
        *(_QWORD *)(v296 + 8) = 0;
        *(_DWORD *)(v296 + 20) = v402;
        *(_QWORD *)(v296 + 24) = 0;
        *(_DWORD *)(v296 + 80) = -1;
        *(_QWORD *)(v296 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v296 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v296 + 84) = -1;
        *(_QWORD *)v296 = off_AE218;
        *(__m128i *)(v296 + 64) = v299;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v297 + 48LL))(
                v297,
                v296 + 86,
                8) )
          goto LABEL_663;
        *((_WORD *)v298 + 42) = *((_WORD *)v298 + 44);
        v300 = *v298;
        v301 = *(__int64 (__fastcall **)())(*v298 + 320);
        if ( v301 == sub_5E5D0 )
          goto LABEL_513;
        if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64 *))v301)(v298, a3) )
        {
          v300 = *v298;
LABEL_513:
          v298[1] = a1;
          v302 = *(void (**)())(v300 + 312);
          if ( v302 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v302)(v298);
          if ( v298 )
          {
            v498 = v298;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else
        {
LABEL_663:
          if ( v298 )
            (*(void (__fastcall **)(__int64 *))(*v298 + 272))(v298);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 348LL:
        v401 = v20;
        v289 = operator new(0x70u);
        v290 = *a3;
        *(_OWORD *)(v289 + 32) = 0;
        v291 = (__int64 *)v289;
        v292 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_QWORD *)(v289 + 8) = 0;
        *(_DWORD *)(v289 + 16) = v23;
        *(_DWORD *)(v289 + 20) = v401;
        *(_QWORD *)(v289 + 24) = 0;
        *(_WORD *)(v289 + 84) = -1;
        *(_QWORD *)(v289 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v289 + 56) = 0xFFFFFFFFLL;
        *(_DWORD *)(v289 + 80) = -1;
        *(_QWORD *)v289 = off_AE0C0;
        *(__m128i *)(v289 + 64) = v292;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v290 + 48LL))(
                v290,
                v289 + 86,
                20) )
          goto LABEL_665;
        *((_WORD *)v291 + 42) = *((_WORD *)v291 + 44);
        v293 = *v291;
        v294 = *(__int64 (__fastcall **)())(*v291 + 320);
        if ( v294 == sub_5E5E0 )
          goto LABEL_506;
        if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64 *))v294)(v291, a3) )
        {
          v293 = *v291;
LABEL_506:
          v291[1] = a1;
          v295 = *(void (**)())(v293 + 312);
          if ( v295 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v295)(v291);
          if ( v291 )
          {
            v498 = v291;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else
        {
LABEL_665:
          if ( v291 )
            (*(void (__fastcall **)(__int64 *))(*v291 + 272))(v291);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 349LL:
        v400 = v20;
        v282 = operator new(0x68u);
        v283 = *a3;
        *(_OWORD *)(v282 + 32) = 0;
        v284 = (__int64 *)v282;
        v285 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_QWORD *)(v282 + 8) = 0;
        *(_DWORD *)(v282 + 16) = v23;
        *(_DWORD *)(v282 + 20) = v400;
        *(_QWORD *)(v282 + 24) = 0;
        *(_DWORD *)(v282 + 80) = -1;
        *(_QWORD *)(v282 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v282 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v282 + 84) = -1;
        *(_QWORD *)v282 = off_AE370;
        *(__m128i *)(v282 + 64) = v285;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v283 + 48LL))(
                v283,
                v282 + 86,
                16) )
          goto LABEL_667;
        *((_WORD *)v284 + 42) = *((_WORD *)v284 + 44);
        v286 = *v284;
        v287 = *(__int64 (__fastcall **)())(*v284 + 320);
        if ( v287 == sub_5E5F0 )
          goto LABEL_499;
        if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64 *))v287)(v284, a3) )
        {
          v286 = *v284;
LABEL_499:
          v284[1] = a1;
          v288 = *(void (**)())(v286 + 312);
          if ( v288 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v288)(v284);
          if ( v284 )
          {
            v498 = v284;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else
        {
LABEL_667:
          if ( v284 )
            (*(void (__fastcall **)(__int64 *))(*v284 + 272))(v284);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 353LL:
        v389 = v20;
        v212 = operator new(0x78u);
        v213 = *a3;
        *(_OWORD *)(v212 + 32) = 0;
        v214 = (__int64 *)v212;
        v215 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_QWORD *)(v212 + 8) = 0;
        *(_DWORD *)(v212 + 16) = v23;
        *(_DWORD *)(v212 + 20) = v389;
        *(_QWORD *)(v212 + 24) = 0;
        *(_DWORD *)(v212 + 80) = -1;
        *(_QWORD *)(v212 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v212 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v212 + 84) = -1;
        *(_QWORD *)v212 = off_AD4A8;
        *(__m128i *)(v212 + 64) = v215;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v213 + 48LL))(
               v213,
               v212 + 86,
               30)
          && (*((_WORD *)v214 + 42) = *((_WORD *)v214 + 44),
              (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v214 + 320))(v214, a3)) )
        {
          v216 = *v214;
          v214[1] = a1;
          v217 = *(void (**)())(v216 + 312);
          if ( v217 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v217)(v214);
          if ( v214 )
          {
            v498 = v214;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else if ( v214 )
        {
          (*(void (__fastcall **)(__int64 *))(*v214 + 272))(v214);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 354LL:
        v388 = v20;
        v206 = operator new(0x78u);
        v207 = *a3;
        *(_OWORD *)(v206 + 32) = 0;
        v208 = v206;
        v209 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_QWORD *)(v206 + 8) = 0;
        *(_DWORD *)(v206 + 16) = v23;
        *(_DWORD *)(v206 + 20) = v388;
        *(_QWORD *)(v206 + 24) = 0;
        *(_DWORD *)(v206 + 80) = -1;
        *(_QWORD *)(v206 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v206 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v206 + 84) = -1;
        *(_QWORD *)v206 = off_AD4A8;
        *(__m128i *)(v206 + 64) = v209;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v207 + 48LL))(
               v207,
               v206 + 86,
               30)
          && (*(_WORD *)(v208 + 84) = *(_WORD *)(v208 + 88),
              (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v208 + 320LL))(v208, a3)) )
        {
          v210 = *(_QWORD *)v208;
          *(_QWORD *)(v208 + 8) = a1;
          v211 = *(void (**)())(v210 + 312);
          if ( v211 != nullsub_15 )
            ((void (__fastcall *)(__int64))v211)(v208);
          if ( v208 )
          {
            v491 = v208;
            sub_681C0(a1, &v491);
            if ( v491 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v491 + 272LL))(v491);
          }
        }
        else if ( v208 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v208 + 272LL))(v208);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 355LL:
        v387 = v20;
        v200 = operator new(0x70u);
        v201 = *a3;
        *(_OWORD *)(v200 + 32) = 0;
        v202 = v200;
        v203 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_QWORD *)(v200 + 8) = 0;
        *(_DWORD *)(v200 + 16) = v23;
        *(_DWORD *)(v200 + 20) = v387;
        *(_QWORD *)(v200 + 24) = 0;
        *(_DWORD *)(v200 + 80) = -1;
        *(_QWORD *)(v200 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v200 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v200 + 84) = -1;
        *(_QWORD *)v200 = off_AD600;
        *(__m128i *)(v200 + 64) = v203;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v201 + 48LL))(
               v201,
               v200 + 86,
               26)
          && (*(_WORD *)(v202 + 84) = *(_WORD *)(v202 + 88),
              (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v202 + 320LL))(v202, a3)) )
        {
          v204 = *(_QWORD *)v202;
          *(_QWORD *)(v202 + 8) = a1;
          v205 = *(void (**)())(v204 + 312);
          if ( v205 != nullsub_15 )
            ((void (__fastcall *)(__int64))v205)(v202);
          if ( v202 )
          {
            v492 = v202;
            sub_681C0(a1, &v492);
            if ( v492 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v492 + 272LL))(v492);
          }
        }
        else if ( v202 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v202 + 272LL))(v202);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      case 356LL:
        v386 = v20;
        v194 = operator new(0x70u);
        v195 = *a3;
        *(_OWORD *)(v194 + 32) = 0;
        v196 = v194;
        v197 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_QWORD *)(v194 + 8) = 0;
        *(_DWORD *)(v194 + 16) = v23;
        *(_DWORD *)(v194 + 20) = v386;
        *(_QWORD *)(v194 + 24) = 0;
        *(_DWORD *)(v194 + 80) = -1;
        *(_QWORD *)(v194 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v194 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v194 + 84) = -1;
        *(_QWORD *)v194 = off_AD600;
        *(__m128i *)(v194 + 64) = v197;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v195 + 48LL))(
               v195,
               v194 + 86,
               26)
          && (*(_WORD *)(v196 + 84) = *(_WORD *)(v196 + 88),
              (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v196 + 320LL))(v196, a3)) )
        {
          v198 = *(_QWORD *)v196;
          *(_QWORD *)(v196 + 8) = a1;
          v199 = *(void (**)())(v198 + 312);
          if ( v199 != nullsub_15 )
            ((void (__fastcall *)(__int64))v199)(v196);
          if ( v196 )
          {
            v493 = v196;
            sub_681C0(a1, &v493);
            if ( v493 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v493 + 272LL))(v493);
          }
        }
        else if ( v196 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v196 + 272LL))(v196);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        goto LABEL_20;
      default:
        goto LABEL_20;
    }
  }
  if ( v421 > 0x20Eu )
  {
    if ( v421 == 768 )
    {
      sub_65BE0(&v438, a1, a3, v23, v20);
      if ( v438 )
      {
        v498 = v438;
        sub_681C0(a1, (__int64 *)&v498);
        sub_56200((__int64 *)&v498);
      }
      v19 = *(_QWORD *)a1;
      v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
    }
    else if ( v421 == 769 )
    {
      sub_65BE0(&v439, a1, a3, v23, v20);
      if ( v439 )
      {
        v498 = v439;
        sub_681C0(a1, (__int64 *)&v498);
        sub_56200((__int64 *)&v498);
      }
      v19 = *(_QWORD *)a1;
      v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
    }
  }
  else if ( v421 > 0x1FFu )
  {
    LOWORD(v21) = v421 - 512;
    switch ( v21 )
    {
      case 0LL:
        v362 = v20;
        v40 = operator new(0x60u);
        v41 = *a3;
        *(_OWORD *)(v40 + 32) = 0;
        v42 = (__int64 *)v40;
        v43 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_DWORD *)(v40 + 16) = v23;
        *(_QWORD *)(v40 + 8) = 0;
        *(_DWORD *)(v40 + 20) = v362;
        *(_QWORD *)(v40 + 24) = 0;
        *(_DWORD *)(v40 + 80) = -1;
        *(_QWORD *)(v40 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v40 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v40 + 84) = -1;
        *(_QWORD *)v40 = off_AF790;
        *(__m128i *)(v40 + 64) = v43;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v41 + 48LL))(v41, v40 + 86, 10)
          && (*((_WORD *)v42 + 42) = *((_WORD *)v42 + 44),
              (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v42 + 320))(v42, a3)) )
        {
          v44 = *v42;
          v42[1] = a1;
          v45 = *(void (**)())(v44 + 312);
          if ( v45 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v45)(v42);
          if ( v42 )
          {
            v498 = v42;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else if ( v42 )
        {
          (*(void (__fastcall **)(__int64 *))(*v42 + 272))(v42);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        break;
      case 1LL:
        sub_65300(&v427, a1, a3, v23, v20);
        if ( v427 )
        {
          v498 = v427;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        break;
      case 2LL:
        sub_65300(&v428, a1, a3, v23, v20);
        if ( v428 )
        {
          v498 = v428;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        break;
      case 3LL:
        sub_65300(&v429, a1, a3, v23, v20);
        if ( v429 )
        {
          v498 = v429;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        break;
      case 4LL:
        sub_65440(&v430, a1, a3, v23, v20);
        if ( v430 )
        {
          v498 = v430;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        break;
      case 5LL:
        sub_65440(&v431, a1, a3, v23, v20);
        if ( v431 )
        {
          v498 = v431;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        break;
      case 6LL:
        sub_65580(&v432, a1, a3, v23, v20);
        if ( v432 )
        {
          v498 = v432;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        break;
      case 7LL:
        sub_656C0(&v433, a1, a3, v23, v20);
        if ( v433 )
        {
          v498 = v433;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        break;
      case 8LL:
        sub_65800(&v434, a1, a3, v23, v20);
        if ( v434 )
        {
          v498 = v434;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        break;
      case 9LL:
        sub_65940(&v435, a1, a3, v23, v20);
        if ( v435 )
        {
          v498 = v435;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        break;
      case 12LL:
        v361 = v20;
        v34 = operator new(0x68u);
        v35 = *a3;
        *(_OWORD *)(v34 + 32) = 0;
        v36 = (__int64 *)v34;
        v37 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_DWORD *)(v34 + 16) = v23;
        *(_QWORD *)(v34 + 8) = 0;
        *(_DWORD *)(v34 + 20) = v361;
        *(_QWORD *)(v34 + 24) = 0;
        *(_DWORD *)(v34 + 80) = -1;
        *(_QWORD *)(v34 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v34 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v34 + 84) = -1;
        *(_QWORD *)v34 = off_AC5E0;
        *(__m128i *)(v34 + 64) = v37;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v35 + 48LL))(v35, v34 + 86, 12)
          && (*((_WORD *)v36 + 42) = *((_WORD *)v36 + 44),
              (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v36 + 320))(v36, a3)) )
        {
          v38 = *v36;
          v36[1] = a1;
          v39 = *(void (**)())(v38 + 312);
          if ( v39 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v39)(v36);
          if ( v36 )
          {
            v498 = v36;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
        }
        else if ( v36 )
        {
          (*(void (__fastcall **)(__int64 *))(*v36 + 272))(v36);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        break;
      case 13LL:
        sub_65AA0(&v436, a1, a3, v23, v20);
        if ( v436 )
        {
          v498 = v436;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        break;
      case 14LL:
        sub_65AA0(&v437, a1, a3, v23, v20);
        if ( v437 )
        {
          v498 = v437;
          sub_681C0(a1, (__int64 *)&v498);
          sub_56200((__int64 *)&v498);
        }
        v19 = *(_QWORD *)a1;
        v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
        break;
      default:
        break;
    }
  }
  else
  {
    if ( v421 > 0x10Cu )
      goto LABEL_20;
    if ( v421 > 0xFFu )
    {
      LOWORD(v21) = v421 - 256;
      switch ( v21 )
      {
        case 0LL:
          sub_64E80(&v422, a1, a3, v23, v20);
          if ( v422 )
          {
            v498 = v422;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
          v19 = *(_QWORD *)a1;
          v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
          break;
        case 1LL:
          sub_64FC0(&v423, a1, a3, v23, v20);
          if ( v423 )
          {
            v498 = v423;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
          v19 = *(_QWORD *)a1;
          v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
          break;
        case 2LL:
          sub_64FC0(&v424, a1, a3, v23, v20);
          if ( v424 )
          {
            v498 = v424;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
          v19 = *(_QWORD *)a1;
          v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
          break;
        case 4LL:
          sub_65100(&v425, a1, a3, v23, v20);
          if ( v425 )
          {
            v498 = v425;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
          v19 = *(_QWORD *)a1;
          v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
          break;
        case 5LL:
          sub_65100(&v426, a1, a3, v23, v20);
          if ( v426 )
          {
            v498 = v426;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
          v19 = *(_QWORD *)a1;
          v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
          break;
        case 6LL:
          v365 = v20;
          v60 = operator new(0x70u);
          v61 = *a3;
          *(_OWORD *)(v60 + 32) = 0;
          v62 = (__int64 *)v60;
          v63 = _mm_load_si128((const __m128i *)&xmmword_94150);
          *(_QWORD *)(v60 + 8) = 0;
          *(_DWORD *)(v60 + 16) = v23;
          *(_DWORD *)(v60 + 20) = v365;
          *(_QWORD *)(v60 + 24) = 0;
          *(_DWORD *)(v60 + 80) = -1;
          *(_QWORD *)(v60 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v60 + 56) = 0xFFFFFFFFLL;
          *(_WORD *)(v60 + 84) = -1;
          *(_QWORD *)v60 = off_ADB60;
          *(__m128i *)(v60 + 64) = v63;
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v61 + 48LL))(v61, v60 + 86, 23)
            && (*((_WORD *)v62 + 42) = *((_WORD *)v62 + 44),
                (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v62 + 320))(v62, a3)) )
          {
            v64 = *v62;
            v62[1] = a1;
            v65 = *(void (**)())(v64 + 312);
            if ( v65 != nullsub_15 )
              ((void (__fastcall *)(__int64 *))v65)(v62);
            if ( v62 )
            {
              v498 = v62;
              sub_681C0(a1, (__int64 *)&v498);
              sub_56200((__int64 *)&v498);
            }
          }
          else if ( v62 )
          {
            (*(void (__fastcall **)(__int64 *))(*v62 + 272))(v62);
          }
          v19 = *(_QWORD *)a1;
          v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
          break;
        case 7LL:
          v364 = v20;
          v54 = operator new(0x68u);
          v55 = *a3;
          *(_OWORD *)(v54 + 32) = 0;
          v56 = (__int64 *)v54;
          v57 = _mm_load_si128((const __m128i *)&xmmword_94150);
          *(_QWORD *)(v54 + 8) = 0;
          *(_DWORD *)(v54 + 16) = v23;
          *(_DWORD *)(v54 + 20) = v364;
          *(_QWORD *)(v54 + 24) = 0;
          *(_DWORD *)(v54 + 80) = -1;
          *(_QWORD *)(v54 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v54 + 56) = 0xFFFFFFFFLL;
          *(_WORD *)(v54 + 84) = -1;
          *(_QWORD *)v54 = off_AB5C0;
          *(__m128i *)(v54 + 64) = v57;
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v55 + 48LL))(v55, v54 + 86, 18)
            && (*((_WORD *)v56 + 42) = *((_WORD *)v56 + 44),
                (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v56 + 320))(v56, a3)) )
          {
            v58 = *v56;
            v56[1] = a1;
            v59 = *(void (**)())(v58 + 312);
            if ( v59 != nullsub_15 )
              ((void (__fastcall *)(__int64 *))v59)(v56);
            if ( v56 )
            {
              v498 = v56;
              sub_681C0(a1, (__int64 *)&v498);
              sub_56200((__int64 *)&v498);
            }
          }
          else if ( v56 )
          {
            (*(void (__fastcall **)(__int64 *))(*v56 + 272))(v56);
          }
          v19 = *(_QWORD *)a1;
          v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
          break;
        case 8LL:
          v367 = v20;
          v72 = operator new(0x68u);
          v73 = *a3;
          *(_OWORD *)(v72 + 32) = 0;
          v74 = (__int64 *)v72;
          v75 = _mm_load_si128((const __m128i *)&xmmword_94150);
          *(_QWORD *)(v72 + 8) = 0;
          *(_DWORD *)(v72 + 16) = v23;
          *(_DWORD *)(v72 + 20) = v367;
          *(_QWORD *)(v72 + 24) = 0;
          *(_DWORD *)(v72 + 80) = -1;
          *(_QWORD *)(v72 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v72 + 56) = 0xFFFFFFFFLL;
          *(_WORD *)(v72 + 84) = -1;
          *(_QWORD *)v72 = off_AB718;
          *(__m128i *)(v72 + 64) = v75;
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v73 + 48LL))(v73, v72 + 86, 18)
            && (*((_WORD *)v74 + 42) = *((_WORD *)v74 + 44),
                (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v74 + 320))(v74, a3)) )
          {
            v76 = *v74;
            v74[1] = a1;
            v77 = *(void (**)())(v76 + 312);
            if ( v77 != nullsub_15 )
              ((void (__fastcall *)(__int64 *))v77)(v74);
            if ( v74 )
            {
              v498 = v74;
              sub_681C0(a1, (__int64 *)&v498);
              sub_56200((__int64 *)&v498);
            }
          }
          else if ( v74 )
          {
            (*(void (__fastcall **)(__int64 *))(*v74 + 272))(v74);
          }
          v19 = *(_QWORD *)a1;
          v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
          break;
        case 9LL:
          v366 = v20;
          v66 = operator new(0x60u);
          v67 = *a3;
          *(_OWORD *)(v66 + 32) = 0;
          v68 = (__int64 *)v66;
          v69 = _mm_load_si128((const __m128i *)&xmmword_94150);
          *(_QWORD *)(v66 + 8) = 0;
          *(_DWORD *)(v66 + 16) = v23;
          *(_DWORD *)(v66 + 20) = v366;
          *(_QWORD *)(v66 + 24) = 0;
          *(_DWORD *)(v66 + 80) = -1;
          *(_QWORD *)(v66 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v66 + 56) = 0xFFFFFFFFLL;
          *(_WORD *)(v66 + 84) = -1;
          *(_QWORD *)v66 = off_AD758;
          *(__m128i *)(v66 + 64) = v69;
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v67 + 48LL))(v67, v66 + 86, 9)
            && (*((_WORD *)v68 + 42) = *((_WORD *)v68 + 44),
                (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v68 + 320))(v68, a3)) )
          {
            v70 = *v68;
            v68[1] = a1;
            v71 = *(void (**)())(v70 + 312);
            if ( v71 != nullsub_15 )
              ((void (__fastcall *)(__int64 *))v71)(v68);
            if ( v68 )
            {
              v498 = v68;
              sub_681C0(a1, (__int64 *)&v498);
              sub_56200((__int64 *)&v498);
            }
          }
          else if ( v68 )
          {
            (*(void (__fastcall **)(__int64 *))(*v68 + 272))(v68);
          }
          v19 = *(_QWORD *)a1;
          v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
          break;
        case 12LL:
          v363 = v20;
          v48 = operator new(0x60u);
          v49 = *a3;
          *(_OWORD *)(v48 + 32) = 0;
          v50 = (__int64 *)v48;
          v51 = _mm_load_si128((const __m128i *)&xmmword_94150);
          *(_DWORD *)(v48 + 16) = v23;
          *(_QWORD *)(v48 + 8) = 0;
          *(_DWORD *)(v48 + 20) = v363;
          *(_QWORD *)(v48 + 24) = 0;
          *(_DWORD *)(v48 + 80) = -1;
          *(_QWORD *)(v48 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v48 + 56) = 0xFFFFFFFFLL;
          *(_WORD *)(v48 + 84) = -1;
          *(_QWORD *)v48 = off_ABDD0;
          *(__m128i *)(v48 + 64) = v51;
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v49 + 48LL))(v49, v48 + 86, 10)
            && (*((_WORD *)v50 + 42) = *((_WORD *)v50 + 44),
                (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v50 + 320))(v50, a3)) )
          {
            v52 = *v50;
            v50[1] = a1;
            v53 = *(void (**)())(v52 + 312);
            if ( v53 != nullsub_15 )
              ((void (__fastcall *)(__int64 *))v53)(v50);
            if ( v50 )
            {
              v498 = v50;
              sub_681C0(a1, (__int64 *)&v498);
              sub_56200((__int64 *)&v498);
            }
          }
          else if ( v50 )
          {
            (*(void (__fastcall **)(__int64 *))(*v50 + 272))(v50);
          }
          v19 = *(_QWORD *)a1;
          v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
          break;
        default:
          goto LABEL_20;
      }
      goto LABEL_20;
    }
    if ( v421 != 3 )
    {
      if ( v421 <= 3u )
      {
        if ( v421 != 1 )
        {
          if ( v421 == 2 )
          {
            v360 = v20;
            v24 = operator new(0x60u);
            v25 = *a3;
            *(_OWORD *)(v24 + 32) = 0;
            v26 = (__int64 *)v24;
            v27 = _mm_load_si128((const __m128i *)&xmmword_94150);
            *(_DWORD *)(v24 + 16) = v23;
            *(_QWORD *)(v24 + 8) = 0;
            *(_DWORD *)(v24 + 20) = v360;
            *(_QWORD *)(v24 + 24) = 0;
            *(_DWORD *)(v24 + 80) = -1;
            *(_QWORD *)(v24 + 48) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v24 + 56) = 0xFFFFFFFFLL;
            *(_WORD *)(v24 + 84) = -1;
            *(_QWORD *)v24 = off_ABF28;
            *(__m128i *)(v24 + 64) = v27;
            if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v25 + 48LL))(
                   v25,
                   v24 + 86,
                   8)
              && (*((_WORD *)v26 + 42) = *((_WORD *)v26 + 44),
                  (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v26 + 320))(v26, a3)) )
            {
              v28 = *v26;
              v26[1] = a1;
              v29 = *(void (**)())(v28 + 312);
              if ( v29 != nullsub_15 )
                ((void (__fastcall *)(__int64 *))v29)(v26);
              if ( v26 )
              {
                v498 = v26;
                sub_681C0(a1, (__int64 *)&v498);
                sub_56200((__int64 *)&v498);
              }
            }
            else if ( v26 )
            {
              (*(void (__fastcall **)(__int64 *))(*v26 + 272))(v26);
            }
            v19 = *(_QWORD *)a1;
            v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
          }
          goto LABEL_20;
        }
        v409 = v20;
        v343 = operator new(0x60u);
        v344 = *a3;
        *(_OWORD *)(v343 + 32) = 0;
        v345 = (__int64 *)v343;
        v346 = _mm_load_si128((const __m128i *)&xmmword_94150);
        *(_QWORD *)(v343 + 8) = 0;
        *(_DWORD *)(v343 + 16) = v23;
        *(_DWORD *)(v343 + 20) = v409;
        *(_QWORD *)(v343 + 24) = 0;
        *(_WORD *)(v343 + 84) = -1;
        *(_QWORD *)(v343 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v343 + 56) = 0xFFFFFFFFLL;
        *(_DWORD *)(v343 + 80) = -1;
        *(_QWORD *)v343 = off_AAC58;
        *(__m128i *)(v343 + 64) = v346;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v344 + 48LL))(v344, v343 + 86, 8) )
        {
          *((_WORD *)v345 + 42) = *((_WORD *)v345 + 44);
          v347 = *v345;
          v348 = *(__int64 (__fastcall **)())(*v345 + 320);
          if ( v348 == sub_5E4F0 )
          {
LABEL_592:
            v345[1] = a1;
            v349 = *(__int64 (__fastcall **)(__int64))(v347 + 312);
            if ( v349 == sub_5D490 )
            {
              if ( *(_WORD *)(a1 + 544) == 0xFFFF )
                *(_WORD *)(a1 + 544) = *((unsigned __int8 *)v345 + 90);
            }
            else
            {
              v349((__int64)v345);
            }
            if ( v345 )
            {
              v498 = v345;
              sub_681C0(a1, (__int64 *)&v498);
              sub_56200((__int64 *)&v498);
            }
LABEL_597:
            v19 = *(_QWORD *)a1;
            v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
            goto LABEL_20;
          }
          if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64 *))v348)(v345, a3) )
          {
            v347 = *v345;
            goto LABEL_592;
          }
        }
        if ( v345 )
          (*(void (__fastcall **)(__int64 *))(*v345 + 272))(v345);
        goto LABEL_597;
      }
      if ( v421 != 12 )
        goto LABEL_20;
      v408 = v20;
      v336 = operator new(0x60u);
      v337 = *a3;
      *(_OWORD *)(v336 + 32) = 0;
      v338 = (__int64 *)v336;
      v339 = _mm_load_si128((const __m128i *)&xmmword_94150);
      *(_QWORD *)(v336 + 8) = 0;
      *(_DWORD *)(v336 + 16) = v23;
      *(_DWORD *)(v336 + 20) = v408;
      *(_QWORD *)(v336 + 24) = 0;
      *(_DWORD *)(v336 + 80) = -1;
      *(_QWORD *)(v336 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v336 + 56) = 0xFFFFFFFFLL;
      *(_WORD *)(v336 + 84) = -1;
      *(_QWORD *)v336 = off_AC080;
      *(__m128i *)(v336 + 64) = v339;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v337 + 48LL))(v337, v336 + 86, 7) )
      {
        *((_WORD *)v338 + 42) = *((_WORD *)v338 + 44);
        v340 = *v338;
        v341 = *(__int64 (__fastcall **)())(*v338 + 320);
        if ( v341 == sub_5E500 )
        {
LABEL_585:
          v338[1] = a1;
          v342 = *(void (**)())(v340 + 312);
          if ( v342 != nullsub_15 )
            ((void (__fastcall *)(__int64 *))v342)(v338);
          if ( v338 )
          {
            v498 = v338;
            sub_681C0(a1, (__int64 *)&v498);
            sub_56200((__int64 *)&v498);
          }
LABEL_589:
          v19 = *(_QWORD *)a1;
          v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
          goto LABEL_20;
        }
        if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64 *))v341)(v338, a3) )
        {
          v340 = *v338;
          goto LABEL_585;
        }
      }
      if ( v338 )
        (*(void (__fastcall **)(__int64 *))(*v338 + 272))(v338);
      goto LABEL_589;
    }
    v410 = v20;
    v350 = operator new(0x60u);
    v351 = *a3;
    *(_OWORD *)(v350 + 32) = 0;
    v352 = (__int64 *)v350;
    v353 = _mm_load_si128((const __m128i *)&xmmword_94150);
    *(_QWORD *)(v350 + 8) = 0;
    *(_DWORD *)(v350 + 16) = v23;
    *(_DWORD *)(v350 + 20) = v410;
    *(_QWORD *)(v350 + 24) = 0;
    *(_WORD *)(v350 + 84) = -1;
    *(_QWORD *)(v350 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v350 + 56) = 0xFFFFFFFFLL;
    *(_DWORD *)(v350 + 80) = -1;
    *(_QWORD *)v350 = off_B0248;
    *(__m128i *)(v350 + 64) = v353;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v351 + 48LL))(v351, v350 + 86, 8)
      && (*((_WORD *)v352 + 42) = *((_WORD *)v352 + 44),
          (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v352 + 320))(v352, a3)) )
    {
      v354 = *v352;
      v352[1] = a1;
      v355 = *(void (**)())(v354 + 312);
      if ( v355 != nullsub_15 )
        ((void (__fastcall *)(__int64 *))v355)(v352);
      if ( v352 )
      {
        v498 = v352;
        sub_681C0(a1, (__int64 *)&v498);
        sub_56200((__int64 *)&v498);
      }
    }
    else if ( v352 )
    {
      (*(void (__fastcall **)(__int64 *))(*v352 + 272))(v352);
    }
    v19 = *(_QWORD *)a1;
    v22 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  }
LABEL_20:
  if ( v359 - v358 == v22 )
    return 0;
  v30 = (_QWORD *)(v19 + 8LL * (unsigned int)v23);
  *(_DWORD *)(*v30 + 60LL) = a4;
  v31 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, unsigned __int64))(*(_QWORD *)*v30 + 280LL))(
          *v30,
          v358,
          v22,
          a4,
          v20);
  if ( v31 )
  {
    if ( *(_QWORD *)(a1 + 640) >= (unsigned __int64)v31 )
    {
      v32 = *(_DWORD *)(*(_QWORD *)(a1 + 632) + 40LL * (v31 - 1) + 12);
      if ( v32 != -1 )
      {
LABEL_23:
        v33 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v30 + 288LL))(*v30);
        if ( v33 != -1 )
          *(_DWORD *)(*v30 + 56LL) = sub_64340((_QWORD *)a1, v33 + v32);
      }
    }
  }
  else
  {
    v32 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 608) + 16LL))(*(_QWORD *)(a1 + 608));
    if ( !v32 )
      goto LABEL_23;
  }
  if ( a2 )
    *a2 = v23;
  return v12;
}

