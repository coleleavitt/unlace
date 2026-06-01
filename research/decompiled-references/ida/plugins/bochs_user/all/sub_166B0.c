__int64 __fastcall sub_166B0(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdi
  __m128i si128; // xmm1
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdi
  __m128i v12; // xmm2
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdi
  __m128i v18; // xmm3
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdi
  __m128i v24; // xmm4
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rdi
  __m128i v30; // xmm5
  __int64 v31; // rax
  __int64 v32; // r12
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rdi
  __m128i v36; // xmm6
  __int64 v37; // rax
  __int64 v38; // r12
  __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // rdi
  __m128i v42; // xmm7
  __int64 v43; // rax
  __int64 v44; // r12
  __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // rdi
  __m128i v48; // xmm1
  __int64 v49; // rax
  __int64 v50; // r12
  __int64 v51; // r13
  __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // rdi
  __m128i v55; // xmm0
  __int64 v56; // rax
  char *v57; // rsi
  char **v58; // r9
  char v59; // r8
  char v60; // cl
  int v61; // edx
  __int64 v62; // r12
  __int64 v63; // r13
  __int64 v64; // rdx
  __int64 v65; // rsi
  __int64 v66; // rdi
  __m128i v67; // xmm0
  __int64 v68; // rax
  char *v69; // rsi
  char v70; // r8
  char **v71; // r9
  char v72; // cl
  int v73; // edx
  __int64 v74; // r12
  __int64 v75; // r13
  __int64 v76; // rdx
  __int64 v77; // rsi
  __int64 v78; // rdi
  __m128i v79; // xmm0
  __int64 v80; // rax
  char *v81; // rsi
  char v82; // cl
  char **v83; // r9
  char v84; // r8
  int v85; // edx
  __int64 v86; // r12
  __int64 v87; // r14
  __int64 v88; // r13
  __int64 v89; // rsi
  __int64 v90; // rdi
  __int64 v91; // rdx
  __m128i v92; // xmm0
  __int64 v93; // rax
  char *v94; // rsi
  int v95; // edx
  __int64 v96; // r9
  char v97; // r8
  char v98; // cl
  __int64 v99; // r12
  __int64 v100; // r14
  __int64 v101; // r13
  __int64 v102; // rsi
  __int64 v103; // rdi
  __int64 v104; // rdx
  __m128i v105; // xmm0
  __int64 v106; // rax
  const void *v107; // rsi
  __int64 v108; // r9
  char v109; // r8
  char v110; // cl
  int v111; // edx
  __int64 v112; // r12
  __int64 v113; // r14
  __int64 v114; // r13
  __int64 v115; // rsi
  __int64 v116; // rdi
  __int64 v117; // rdx
  __m128i v118; // xmm0
  __int64 v119; // rax
  const void *v120; // rsi
  __int64 v121; // r9
  char v122; // r8
  char v123; // cl
  int v124; // edx
  __int64 v125; // r12
  __int64 v126; // r14
  __int64 v127; // r13
  __int64 v128; // rsi
  __int64 v129; // rdi
  __int64 v130; // rdx
  __m128i v131; // xmm0
  __int64 v132; // rax
  char *v133; // rsi
  char v134; // r8
  __int64 v135; // r9
  char v136; // cl
  int v137; // edx
  __int64 v138; // r12
  __int64 v139; // r14
  __int64 v140; // r13
  __int64 v141; // rsi
  __int64 v142; // rdi
  __int64 v143; // rdx
  __m128i v144; // xmm0
  __int64 v145; // rax
  const void *v146; // rsi
  char v147; // cl
  __int64 v148; // r9
  char v149; // r8
  int v150; // edx
  __int64 v151; // r12
  __int64 v152; // r14
  __int64 v153; // r13
  __int64 v154; // rsi
  __int64 v155; // rdi
  __int64 v156; // rdx
  __m128i v157; // xmm0
  __int64 v158; // rax
  char *v159; // rsi
  int v160; // edx
  __int64 v161; // r9
  char v162; // r8
  char v163; // cl
  bool v164; // zf
  __int64 v165; // rbp
  __int64 v166; // r13
  __int64 v167; // rdx
  __int64 v168; // rsi
  __int64 v169; // rdi
  __m128i v170; // xmm0
  __int64 v171; // rax
  char *v172; // rsi
  __int64 v173; // r9
  char v174; // r8
  char v175; // cl
  int v176; // edx
  __int64 v177; // r12
  __int64 v178; // r13
  __int64 v179; // rdx
  __int64 v180; // rsi
  __int64 v181; // rdi
  __m128i v182; // xmm0
  __int64 v183; // rax
  char *v184; // rsi
  __int64 v185; // r9
  char v186; // r8
  char v187; // cl
  int v188; // edx
  __int64 v189; // r12
  __int64 v190; // r13
  __int64 v191; // rdx
  __int64 v192; // rsi
  __int64 v193; // rdi
  __m128i v194; // xmm0
  __int64 v195; // rax
  char *v196; // rsi
  char v197; // cl
  int v198; // edx
  __int64 v199; // r9
  char v200; // r8
  __int64 v201; // r12
  __int64 v202; // r13
  __int64 v203; // rdx
  __int64 v204; // rsi
  __int64 v205; // rdi
  __m128i v206; // xmm0
  __int64 v207; // rax
  char *v208; // rsi
  __int64 v209; // r9
  char v210; // r8
  char v211; // cl
  int v212; // edx
  __int64 v213; // r12
  __int64 v214; // r13
  __int64 v215; // rdx
  __int64 v216; // rsi
  __int64 v217; // rdi
  __m128i v218; // xmm0
  __int64 v219; // rax
  char *v220; // rsi
  __int64 v221; // r9
  char v222; // r8
  char v223; // cl
  int v224; // edx
  __int64 v225; // r12
  __int64 v226; // r13
  __int64 v227; // rdx
  __int64 v228; // rsi
  __int64 v229; // rdi
  __m128i v230; // xmm0
  __int64 v231; // rax
  char *v232; // rsi
  __int64 v233; // r9
  char v234; // r8
  char v235; // cl
  int v236; // edx
  __int64 v237; // r12
  __int64 v238; // r14
  __int64 v239; // r13
  __int64 v240; // rsi
  __int64 v241; // rdi
  __int64 v242; // rdx
  __m128i v243; // xmm0
  __int64 v244; // rax
  char *v245; // rsi
  __int64 v246; // r9
  char v247; // r8
  char v248; // cl
  int v249; // edx
  __int64 v250; // r12
  __int64 v251; // r14
  __int64 v252; // r13
  __int64 v253; // rsi
  __int64 v254; // rdi
  __int64 v255; // rdx
  __m128i v256; // xmm0
  __int64 v257; // rax
  char *v258; // rsi
  char v259; // cl
  int v260; // edx
  __int64 v261; // r9
  char v262; // r8
  __int64 v263; // r12
  __int64 v264; // r14
  __int64 v265; // r13
  __int64 v266; // rsi
  __int64 v267; // rdi
  __int64 v268; // rdx
  __m128i v269; // xmm0
  __int64 v270; // rax
  char *v271; // rsi
  __int64 v272; // r9
  char v273; // r8
  char v274; // cl
  int v275; // edx
  __int64 v276; // r12
  __int64 v277; // r14
  __int64 v278; // r13
  __int64 v279; // rsi
  __int64 v280; // rdi
  __int64 v281; // rdx
  __m128i v282; // xmm0
  __int64 v283; // rax
  char *v284; // rsi
  int v285; // edx
  char **v286; // r9
  char v287; // r8
  char v288; // cl
  __int64 v289; // r12
  __int64 v290; // rdx
  __int64 v291; // rsi
  __int64 v292; // rdi
  __m128i v293; // xmm0
  __int64 v294; // rax
  __int64 v295; // r12
  __int64 v296; // rdx
  __int64 v297; // rsi
  __int64 v298; // rdi
  __m128i v299; // xmm0
  __int64 v300; // rax
  __int64 v301; // r12
  __int64 v302; // rdx
  __int64 v303; // rsi
  __int64 v304; // rdi
  __m128i v305; // xmm0
  __int64 v306; // rax
  __int64 v307; // r12
  __int64 v308; // rdx
  __int64 v309; // rsi
  __int64 v310; // rdi
  __m128i v311; // xmm0
  __int64 v312; // rax
  __int64 v313; // r12
  __int64 v314; // rdx
  __int64 v315; // rsi
  __int64 v316; // rdi
  __m128i v317; // xmm0
  __int64 v318; // rax
  __int64 v319; // r12
  __int64 v320; // rdx
  __int64 v321; // rsi
  __int64 v322; // rdi
  __m128i v323; // xmm0
  __int64 v324; // rax
  __int64 v325; // r12
  __int64 v326; // rdx
  __int64 v327; // rsi
  __int64 v328; // rdi
  __m128i v329; // xmm0
  __int64 v330; // rax
  __int64 v331; // r12
  __int64 v332; // rdx
  __int64 v333; // rsi
  __int64 v334; // rdi
  __m128i v335; // xmm0
  __int64 v336; // rax
  __int64 v337; // r12
  __int64 v338; // r13
  __int64 v339; // rdx
  __int64 v340; // rsi
  __int64 v341; // rdi
  __m128i v342; // xmm0
  __int64 v343; // rax
  char *v344; // rsi
  int v345; // edx
  _UNKNOWN **v346; // r9
  char v347; // r8
  char v348; // cl
  __int64 v349; // r12
  __int64 v350; // rdx
  __int64 v351; // rsi
  __int64 v352; // rdi
  __m128i v353; // xmm2
  __int64 v354; // rax
  __int64 v355; // r12
  __int64 v356; // rdx
  __int64 v357; // rsi
  __int64 v358; // rdi
  __m128i v359; // xmm3
  __int64 v360; // rax
  __int64 v361; // r12
  __int64 v362; // rdx
  __int64 v363; // rsi
  __int64 v364; // rdi
  __m128i v365; // xmm4
  __int64 v366; // rax
  __int64 v367; // r12
  __int64 v368; // rdx
  __int64 v369; // rsi
  __int64 v370; // rdi
  __m128i v371; // xmm5
  __int64 v372; // rax
  __int64 v373; // r12
  __int64 v374; // rdx
  __int64 v375; // rsi
  __int64 v376; // rdi
  __m128i v377; // xmm6
  __int64 v378; // rax
  __int64 v379; // r12
  __int64 v380; // rdx
  __int64 v381; // rsi
  __int64 v382; // rdi
  __m128i v383; // xmm7
  __int64 v384; // rax
  __int64 v385; // r12
  __int64 v386; // rdx
  __int64 v387; // rsi
  __int64 v388; // rdi
  __m128i v389; // xmm1
  __int64 v390; // rax
  __int64 v391; // rbx
  __int64 v392; // rdx
  __int64 v393; // rsi
  __int64 v394; // rdi
  __m128i v395; // xmm2
  __int64 v396; // rax
  __int64 v398; // r13
  __int64 v399; // rdx
  __int64 v400; // rsi
  __int64 v401; // rdi
  __m128i v402; // xmm0
  __int64 v403; // rax
  char *v404; // rsi
  __int64 v405; // r9
  char v406; // r8
  char v407; // cl
  int v408; // edx
  __int64 v409; // r12
  __int64 v410; // r13
  __int64 v411; // rdx
  __int64 v412; // rsi
  __int64 v413; // rdi
  __m128i v414; // xmm0
  __int64 v415; // rax
  char *v416; // rsi
  __int64 v417; // r9
  char v418; // r8
  char v419; // cl
  int v420; // edx
  __int64 v421; // r12
  __int64 v422; // r13
  __int64 v423; // rdx
  __int64 v424; // rsi
  __int64 v425; // rdi
  __m128i v426; // xmm0
  __int64 v427; // rax
  char *v428; // rsi
  __int64 v429; // r9
  char v430; // r8
  char v431; // cl
  int v432; // edx
  __int64 v433; // r12
  __int64 v434; // r13
  __int64 v435; // rdx
  __int64 v436; // rsi
  __int64 v437; // rdi
  __m128i v438; // xmm0
  __int64 v439; // rax
  char *v440; // rsi
  __int64 v441; // r9
  char v442; // r8
  char v443; // cl
  int v444; // edx
  __int64 v445; // r12
  __int64 v446; // r13
  __int64 v447; // rdx
  __int64 v448; // rsi
  __int64 v449; // rdi
  __m128i v450; // xmm0
  __int64 v451; // rax
  char *v452; // rsi
  char v453; // cl
  int v454; // edx
  __int64 v455; // r9
  char v456; // r8
  __int64 v457; // r12
  __int64 v458; // r13
  __int64 v459; // rdx
  __int64 v460; // rsi
  __int64 v461; // rdi
  __m128i v462; // xmm0
  __int64 v463; // rax
  char *v464; // rsi
  __int64 v465; // r9
  char v466; // r8
  char v467; // cl
  int v468; // edx
  __int64 v469; // r12
  __int64 v470; // r14
  __int64 v471; // r13
  __int64 v472; // rsi
  __int64 v473; // rdi
  __int64 v474; // rdx
  __m128i v475; // xmm0
  __int64 v476; // rax
  char *v477; // rsi
  __int64 v478; // r9
  char v479; // r8
  char v480; // cl
  int v481; // edx
  __int64 v482; // r12
  __int64 v483; // r14
  __int64 v484; // r13
  __int64 v485; // rsi
  __int64 v486; // rdi
  __int64 v487; // rdx
  __m128i v488; // xmm0
  __int64 v489; // rax
  char *v490; // rsi
  __int64 v491; // r9
  char v492; // r8
  char v493; // cl
  int v494; // edx
  __int64 v495; // r12
  __int64 v496; // r14
  __int64 v497; // r13
  __int64 v498; // rsi
  __int64 v499; // rdi
  __int64 v500; // rdx
  __m128i v501; // xmm0
  __int64 v502; // rax
  char *v503; // rsi
  __int64 v504; // r9
  char v505; // r8
  char v506; // cl
  int v507; // edx
  __int64 v508; // r12
  __int64 v509; // r13
  __int64 v510; // rdx
  __int64 v511; // rsi
  __int64 v512; // rdi
  __m128i v513; // xmm0
  __int64 v514; // rax
  char *v515; // rsi
  char v516; // cl
  int v517; // edx
  __int64 v518; // r9
  char v519; // r8
  __int64 v520; // r12
  __int64 v521; // r13
  __int64 v522; // rdx
  __int64 v523; // rsi
  __int64 v524; // rdi
  __m128i v525; // xmm0
  __int64 v526; // rax
  char *v527; // rsi
  __int64 v528; // r9
  char v529; // r8
  char v530; // cl
  int v531; // edx
  __int64 v532; // r12
  __int64 v533; // r13
  __int64 v534; // rdx
  __int64 v535; // rsi
  __int64 v536; // rdi
  __m128i v537; // xmm0
  __int64 v538; // rax
  char *v539; // rsi
  __int64 v540; // r9
  char v541; // r8
  char v542; // cl
  int v543; // edx
  __int64 v544; // r12
  __int64 v545; // r13
  __int64 v546; // rdx
  __int64 v547; // rsi
  __int64 v548; // rdi
  __m128i v549; // xmm0
  __int64 v550; // rax
  char *v551; // rsi
  __int64 v552; // r9
  char v553; // r8
  char v554; // cl
  int v555; // edx
  __int64 v556; // r12
  __int64 v557; // r13
  __int64 v558; // rdx
  __int64 v559; // rsi
  __int64 v560; // rdi
  __m128i v561; // xmm0
  __int64 v562; // rax
  char *v563; // rsi
  __int64 v564; // r9
  char v565; // r8
  char v566; // cl
  int v567; // edx
  __int64 v568; // r12
  __int64 v569; // r13
  __int64 v570; // rdx
  __int64 v571; // rsi
  __int64 v572; // rdi
  __m128i v573; // xmm0
  __int64 v574; // rax
  char *v575; // rsi
  char v576; // cl
  int v577; // edx
  __int64 v578; // r9
  char v579; // r8
  __int64 v580; // r12
  __int64 v581; // r13
  __int64 v582; // rdx
  __int64 v583; // rsi
  __int64 v584; // rdi
  __m128i v585; // xmm0
  __int64 v586; // rax
  char *v587; // rsi
  __int64 v588; // r9
  char v589; // r8
  char v590; // cl
  int v591; // edx
  __int64 v592; // r12
  __int64 v593; // r13
  __int64 v594; // rdx
  __int64 v595; // rsi
  __int64 v596; // rdi
  __m128i v597; // xmm0
  __int64 v598; // rax
  char *v599; // rsi
  __int64 v600; // r9
  char v601; // r8
  char v602; // cl
  int v603; // edx
  __int64 v604; // rax
  __int64 v605; // rax
  __int64 v606; // rax
  __int64 v607; // rax
  __int64 v608; // rax
  __int64 v609; // rax
  __int64 v610; // rax
  __int64 v611; // rax
  __int64 v612; // rax
  __int64 v613; // rax
  __int64 v614; // rax
  __int64 v615; // rax
  __int64 v616; // rax
  __int64 v617; // rax
  __int64 v618; // rax
  __int64 v619; // rax
  __int64 v620; // rax
  __int64 v621; // rax
  __int64 v622; // rax
  __int64 v623; // rax
  __int64 v624; // rax
  __int64 v625; // rax
  __int64 v626; // rax
  __int64 v627; // rax
  __int64 v628; // rax
  __int64 v629; // rax
  __int64 v630; // rax
  __int64 v631; // rax
  __int64 v632; // rax
  __int64 v633; // rax
  __int64 v634; // rax
  __int64 v635; // rax
  __int64 v636; // rax
  __int64 v637; // rax
  __int64 v638; // rax
  __int64 v639; // rax
  __int64 v640; // rax
  __int64 v641; // rax
  __int64 v642; // rax
  __int64 v643; // rax
  __int64 v644; // rax
  __int64 v645; // rax
  __int64 v646; // rax
  __int64 v647; // rax
  __int64 v648; // rax
  __int64 v649; // rax
  __int64 v650; // rax
  __int64 v651; // rax
  __int64 v652; // rax
  __int64 v653; // rax
  __int64 v654; // rax
  __int64 v655; // rax
  __int64 v656; // rax
  __int64 v657; // rax
  __int64 v658; // rax
  __int64 v659; // rax
  __int64 v660; // rax
  __int64 v661; // rax
  __int64 v662; // rax
  __int64 v663; // rax
  __int64 v664; // rax
  __int64 v665; // [rsp-10h] [rbp-38h]

  v2 = operator new(0x2A8u);
  sub_16380(v2, a1 + 672, a1);
  v3 = *(_QWORD *)(v2 + 24);
  *(_QWORD *)(a1 + 664) = v2;
  v4 = *(_QWORD *)(v2 + 16);
  v5 = v3 + 1;
  if ( *(_QWORD *)(v2 + 32) < (unsigned __int64)(v3 + 1) )
  {
    v616 = qvector_reserve();
    v3 = *(_QWORD *)(v2 + 24);
    *(_QWORD *)(v2 + 16) = v616;
    v4 = v616;
    v5 = v3 + 1;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_61A50);
  v7 = v4 + 40 * v3;
  *(_QWORD *)(v2 + 24) = v5;
  *(_DWORD *)v7 = 1;
  *(__m128i *)(v7 + 8) = si128;
  *(__m128i *)(v7 + 24) = _mm_unpacklo_epi64((__m128i)0xAuLL, (__m128i)0xAuLL);
  sub_14B80(*(__int64 **)(v2 + 8), off_74AA0, unk_74AA8, unk_74AAD, unk_74AAC, unk_74AB0, unk_74AB8);
  v8 = *(_QWORD *)(a1 + 664);
  v9 = *(_QWORD *)(v8 + 24);
  v10 = *(_QWORD *)(v8 + 16);
  v11 = v9 + 1;
  if ( *(_QWORD *)(v8 + 32) < (unsigned __int64)(v9 + 1) )
  {
    v615 = qvector_reserve();
    v9 = *(_QWORD *)(v8 + 24);
    *(_QWORD *)(v8 + 16) = v615;
    v10 = v615;
    v11 = v9 + 1;
  }
  *(_QWORD *)(v8 + 24) = v11;
  v12 = _mm_load_si128((const __m128i *)&xmmword_61A60);
  v13 = v10 + 40 * v9;
  *(_DWORD *)v13 = 1;
  *(__m128i *)(v13 + 8) = v12;
  *(__m128i *)(v13 + 24) = _mm_unpacklo_epi64((__m128i)0xAuLL, (__m128i)0xAuLL);
  sub_14B80(*(__int64 **)(v8 + 8), off_74AC0, unk_74AC8, unk_74ACD, unk_74ACC, unk_74AD0, unk_74AD8);
  v14 = *(_QWORD *)(a1 + 664);
  v15 = *(_QWORD *)(v14 + 24);
  v16 = *(_QWORD *)(v14 + 16);
  v17 = v15 + 1;
  if ( *(_QWORD *)(v14 + 32) < (unsigned __int64)(v15 + 1) )
  {
    v624 = qvector_reserve();
    v15 = *(_QWORD *)(v14 + 24);
    *(_QWORD *)(v14 + 16) = v624;
    v16 = v624;
    v17 = v15 + 1;
  }
  *(_QWORD *)(v14 + 24) = v17;
  v18 = _mm_load_si128((const __m128i *)&xmmword_61A70);
  v19 = v16 + 40 * v15;
  *(_DWORD *)v19 = 1;
  *(__m128i *)(v19 + 8) = v18;
  *(__m128i *)(v19 + 24) = _mm_unpacklo_epi64((__m128i)0xAuLL, (__m128i)0xAuLL);
  sub_14B80(*(__int64 **)(v14 + 8), off_74AE0, unk_74AE8, unk_74AED, unk_74AEC, unk_74AF0, unk_74AF8);
  v20 = *(_QWORD *)(a1 + 664);
  v21 = *(_QWORD *)(v20 + 24);
  v22 = *(_QWORD *)(v20 + 16);
  v23 = v21 + 1;
  if ( *(_QWORD *)(v20 + 32) < (unsigned __int64)(v21 + 1) )
  {
    v623 = qvector_reserve();
    v21 = *(_QWORD *)(v20 + 24);
    *(_QWORD *)(v20 + 16) = v623;
    v22 = v623;
    v23 = v21 + 1;
  }
  *(_QWORD *)(v20 + 24) = v23;
  v24 = _mm_load_si128((const __m128i *)&xmmword_61A80);
  v25 = v22 + 40 * v21;
  *(_DWORD *)v25 = 1;
  *(__m128i *)(v25 + 8) = v24;
  *(__m128i *)(v25 + 24) = _mm_unpacklo_epi64((__m128i)0xAuLL, (__m128i)0xAuLL);
  sub_14B80(*(__int64 **)(v20 + 8), off_74B00, unk_74B08, unk_74B0D, unk_74B0C, unk_74B10, unk_74B18);
  v26 = *(_QWORD *)(a1 + 664);
  v27 = *(_QWORD *)(v26 + 24);
  v28 = *(_QWORD *)(v26 + 16);
  v29 = v27 + 1;
  if ( *(_QWORD *)(v26 + 32) < (unsigned __int64)(v27 + 1) )
  {
    v622 = qvector_reserve();
    v27 = *(_QWORD *)(v26 + 24);
    *(_QWORD *)(v26 + 16) = v622;
    v28 = v622;
    v29 = v27 + 1;
  }
  *(_QWORD *)(v26 + 24) = v29;
  v30 = _mm_load_si128((const __m128i *)&xmmword_61A90);
  v31 = v28 + 40 * v27;
  *(_DWORD *)v31 = 1;
  *(__m128i *)(v31 + 8) = v30;
  *(__m128i *)(v31 + 24) = _mm_unpacklo_epi64((__m128i)0xAuLL, (__m128i)0xAuLL);
  sub_14B80(*(__int64 **)(v26 + 8), off_74B20, unk_74B28, unk_74B2D, unk_74B2C, unk_74B30, unk_74B38);
  v32 = *(_QWORD *)(a1 + 664);
  v33 = *(_QWORD *)(v32 + 24);
  v34 = *(_QWORD *)(v32 + 16);
  v35 = v33 + 1;
  if ( *(_QWORD *)(v32 + 32) < (unsigned __int64)(v33 + 1) )
  {
    v621 = qvector_reserve();
    v33 = *(_QWORD *)(v32 + 24);
    *(_QWORD *)(v32 + 16) = v621;
    v34 = v621;
    v35 = v33 + 1;
  }
  *(_QWORD *)(v32 + 24) = v35;
  v36 = _mm_load_si128((const __m128i *)&xmmword_61AA0);
  v37 = v34 + 40 * v33;
  *(_DWORD *)v37 = 1;
  *(__m128i *)(v37 + 8) = v36;
  *(__m128i *)(v37 + 24) = _mm_unpacklo_epi64((__m128i)0xAuLL, (__m128i)0xAuLL);
  sub_14B80(*(__int64 **)(v32 + 8), off_74B40, unk_74B48, unk_74B4D, unk_74B4C, unk_74B50, unk_74B58);
  v38 = *(_QWORD *)(a1 + 664);
  v39 = *(_QWORD *)(v38 + 24);
  v40 = *(_QWORD *)(v38 + 16);
  v41 = v39 + 1;
  if ( *(_QWORD *)(v38 + 32) < (unsigned __int64)(v39 + 1) )
  {
    v614 = qvector_reserve();
    v39 = *(_QWORD *)(v38 + 24);
    *(_QWORD *)(v38 + 16) = v614;
    v40 = v614;
    v41 = v39 + 1;
  }
  *(_QWORD *)(v38 + 24) = v41;
  v42 = _mm_load_si128((const __m128i *)&xmmword_61AB0);
  v43 = v40 + 40 * v39;
  *(_DWORD *)v43 = 1;
  *(__m128i *)(v43 + 8) = v42;
  *(__m128i *)(v43 + 24) = _mm_unpacklo_epi64((__m128i)0xAuLL, (__m128i)0xAuLL);
  sub_14B80(*(__int64 **)(v38 + 8), off_74B60, unk_74B68, unk_74B6D, unk_74B6C, unk_74B70, unk_74B78);
  v44 = *(_QWORD *)(a1 + 664);
  v45 = *(_QWORD *)(v44 + 24);
  v46 = *(_QWORD *)(v44 + 16);
  v47 = v45 + 1;
  if ( *(_QWORD *)(v44 + 32) < (unsigned __int64)(v45 + 1) )
  {
    v613 = qvector_reserve();
    v45 = *(_QWORD *)(v44 + 24);
    *(_QWORD *)(v44 + 16) = v613;
    v46 = v613;
    v47 = v45 + 1;
  }
  *(_QWORD *)(v44 + 24) = v47;
  v48 = _mm_load_si128((const __m128i *)&xmmword_61AC0);
  v49 = v46 + 40 * v45;
  *(_DWORD *)v49 = 1;
  *(__m128i *)(v49 + 8) = v48;
  *(__m128i *)(v49 + 24) = _mm_unpacklo_epi64((__m128i)0xAuLL, (__m128i)0xAuLL);
  sub_14B80(*(__int64 **)(v44 + 8), off_74B80, unk_74B88, unk_74B8D, unk_74B8C, unk_74B90, unk_74B98);
  v50 = *(_QWORD *)(a1 + 664);
  switch ( unk_74A8D )
  {
    case 2:
      v51 = 4;
      break;
    case 7:
      v51 = 8;
      break;
    case 1:
      v51 = 2;
      break;
    default:
      goto LABEL_349;
  }
  v52 = *(_QWORD *)(v50 + 24);
  v53 = *(_QWORD *)(v50 + 16);
  v54 = v52 + 1;
  if ( *(_QWORD *)(v50 + 32) < (unsigned __int64)(v52 + 1) )
  {
    v628 = qvector_reserve();
    v52 = *(_QWORD *)(v50 + 24);
    *(_QWORD *)(v50 + 16) = v628;
    v53 = v628;
    v54 = v52 + 1;
  }
  v55 = _mm_load_si128((const __m128i *)&xmmword_61AD0);
  *(_QWORD *)(v50 + 24) = v54;
  v56 = v53 + 40 * v52;
  *(_DWORD *)v56 = 0;
  v57 = off_74A80;
  *(__m128i *)(v56 + 8) = v55;
  v58 = off_74A90;
  v59 = unk_74A8C;
  v60 = unk_74A8D;
  v61 = unk_74A88;
  *(_QWORD *)(v56 + 24) = 4;
  *(_QWORD *)(v56 + 32) = v51;
  sub_14B80(*(__int64 **)(v50 + 8), v57, v61, v60, v59, (__int64)v58, unk_74A98);
  v62 = *(_QWORD *)(a1 + 664);
  switch ( unk_74A6D )
  {
    case 2:
      v63 = 4;
      break;
    case 7:
      v63 = 8;
      break;
    case 1:
      v63 = 2;
      break;
    default:
      if ( under_debugger )
        goto LABEL_420;
      goto LABEL_350;
  }
  v64 = *(_QWORD *)(v62 + 24);
  v65 = *(_QWORD *)(v62 + 16);
  v66 = v64 + 1;
  if ( *(_QWORD *)(v62 + 32) < (unsigned __int64)(v64 + 1) )
  {
    v634 = qvector_reserve();
    v64 = *(_QWORD *)(v62 + 24);
    *(_QWORD *)(v62 + 16) = v634;
    v65 = v634;
    v66 = v64 + 1;
  }
  v67 = _mm_load_si128((const __m128i *)&xmmword_61AE0);
  *(_QWORD *)(v62 + 24) = v66;
  v68 = v65 + 40 * v64;
  *(_DWORD *)v68 = 0;
  v69 = off_74A60;
  *(__m128i *)(v68 + 8) = v67;
  v70 = unk_74A6C;
  v71 = off_74A70;
  v72 = unk_74A6D;
  v73 = unk_74A68;
  *(_QWORD *)(v68 + 24) = 4;
  *(_QWORD *)(v68 + 32) = v63;
  sub_14B80(*(__int64 **)(v62 + 8), v69, v73, v72, v70, (__int64)v71, unk_74A78);
  v74 = *(_QWORD *)(a1 + 664);
  switch ( unk_74A4D )
  {
    case 2:
      v75 = 4;
      break;
    case 7:
      v75 = 8;
      break;
    case 1:
      v75 = 2;
      break;
    default:
      if ( under_debugger )
        goto LABEL_420;
      goto LABEL_350;
  }
  v76 = *(_QWORD *)(v74 + 24);
  v77 = *(_QWORD *)(v74 + 16);
  v78 = v76 + 1;
  if ( *(_QWORD *)(v74 + 32) < (unsigned __int64)(v76 + 1) )
  {
    v633 = qvector_reserve();
    v76 = *(_QWORD *)(v74 + 24);
    *(_QWORD *)(v74 + 16) = v633;
    v77 = v633;
    v78 = v76 + 1;
  }
  v79 = _mm_load_si128((const __m128i *)&xmmword_61AF0);
  *(_QWORD *)(v74 + 24) = v78;
  v80 = v77 + 40 * v76;
  *(_DWORD *)v80 = 0;
  v81 = off_74A40;
  *(__m128i *)(v80 + 8) = v79;
  v82 = unk_74A4D;
  v83 = off_74A50;
  v84 = unk_74A4C;
  v85 = unk_74A48;
  *(_QWORD *)(v80 + 24) = 4;
  *(_QWORD *)(v80 + 32) = v75;
  sub_14B80(*(__int64 **)(v74 + 8), v81, v85, v82, v84, (__int64)v83, unk_74A58);
  v86 = *(_QWORD *)(a1 + 664);
  switch ( unk_74A2D )
  {
    case 2:
      v87 = 4;
      break;
    case 7:
      v87 = 8;
      break;
    case 1:
      v87 = 2;
      break;
    default:
      if ( under_debugger )
        goto LABEL_420;
      goto LABEL_350;
  }
  v88 = *(_QWORD *)(v86 + 24);
  v89 = *(_QWORD *)(v86 + 16);
  v90 = v88 + 1;
  v91 = v88;
  if ( *(_QWORD *)(v86 + 32) < (unsigned __int64)(v88 + 1) )
  {
    v632 = qvector_reserve();
    v91 = *(_QWORD *)(v86 + 24);
    *(_QWORD *)(v86 + 16) = v632;
    v89 = v632;
    v90 = v91 + 1;
  }
  v92 = _mm_load_si128((const __m128i *)&xmmword_61B00);
  *(_QWORD *)(v86 + 24) = v90;
  v93 = v89 + 40 * v91;
  *(_DWORD *)v93 = 0;
  v94 = off_74A20;
  *(__m128i *)(v93 + 8) = v92;
  v95 = unk_74A28;
  v96 = unk_74A30;
  v97 = unk_74A2C;
  v98 = unk_74A2D;
  *(_QWORD *)(v93 + 32) = v87;
  *(_QWORD *)(v93 + 24) = 4;
  sub_14B80(*(__int64 **)(v86 + 8), v94, v95, v98, v97, v96, unk_74A38);
  *(_DWORD *)(a1 + 932) = v88;
  v99 = *(_QWORD *)(a1 + 664);
  switch ( unk_74A0D )
  {
    case 2:
      v100 = 4;
      break;
    case 7:
      v100 = 8;
      break;
    case 1:
      v100 = 2;
      break;
    default:
      if ( under_debugger )
        goto LABEL_420;
      goto LABEL_350;
  }
  v101 = *(_QWORD *)(v99 + 24);
  v102 = *(_QWORD *)(v99 + 16);
  v103 = v101 + 1;
  v104 = v101;
  if ( *(_QWORD *)(v99 + 32) < (unsigned __int64)(v101 + 1) )
  {
    v631 = qvector_reserve();
    v104 = *(_QWORD *)(v99 + 24);
    *(_QWORD *)(v99 + 16) = v631;
    v102 = v631;
    v103 = v104 + 1;
  }
  v105 = _mm_load_si128((const __m128i *)&xmmword_61B10);
  *(_QWORD *)(v99 + 24) = v103;
  v106 = v102 + 40 * v104;
  *(_DWORD *)v106 = 0;
  v107 = off_74A00;
  *(__m128i *)(v106 + 8) = v105;
  v108 = unk_74A10;
  v109 = unk_74A0C;
  v110 = unk_74A0D;
  v111 = unk_74A08;
  *(_QWORD *)(v106 + 24) = 4;
  *(_QWORD *)(v106 + 32) = v100;
  sub_14B80(*(__int64 **)(v99 + 8), v107, v111, v110, v109, v108, unk_74A18);
  *(_DWORD *)(a1 + 936) = v101;
  v112 = *(_QWORD *)(a1 + 664);
  switch ( unk_749ED )
  {
    case 2:
      v113 = 4;
      break;
    case 7:
      v113 = 8;
      break;
    case 1:
      v113 = 2;
      break;
    default:
      if ( under_debugger )
        goto LABEL_420;
      goto LABEL_350;
  }
  v114 = *(_QWORD *)(v112 + 24);
  v115 = *(_QWORD *)(v112 + 16);
  v116 = v114 + 1;
  v117 = v114;
  if ( *(_QWORD *)(v112 + 32) < (unsigned __int64)(v114 + 1) )
  {
    v638 = qvector_reserve();
    v117 = *(_QWORD *)(v112 + 24);
    *(_QWORD *)(v112 + 16) = v638;
    v115 = v638;
    v116 = v117 + 1;
  }
  v118 = _mm_load_si128((const __m128i *)&xmmword_61B20);
  *(_QWORD *)(v112 + 24) = v116;
  v119 = v115 + 40 * v117;
  *(_DWORD *)v119 = 0;
  v120 = off_749E0;
  *(__m128i *)(v119 + 8) = v118;
  v121 = unk_749F0;
  v122 = unk_749EC;
  v123 = unk_749ED;
  v124 = unk_749E8;
  *(_QWORD *)(v119 + 24) = 4;
  *(_QWORD *)(v119 + 32) = v113;
  sub_14B80(*(__int64 **)(v112 + 8), v120, v124, v123, v122, v121, unk_749F8);
  *(_DWORD *)(a1 + 940) = v114;
  v125 = *(_QWORD *)(a1 + 664);
  switch ( unk_749CD )
  {
    case 2:
      v126 = 4;
      break;
    case 7:
      v126 = 8;
      break;
    case 1:
      v126 = 2;
      break;
    default:
      goto LABEL_351;
  }
  v127 = *(_QWORD *)(v125 + 24);
  v128 = *(_QWORD *)(v125 + 16);
  v129 = v127 + 1;
  v130 = v127;
  if ( *(_QWORD *)(v125 + 32) < (unsigned __int64)(v127 + 1) )
  {
    v637 = qvector_reserve();
    v130 = *(_QWORD *)(v125 + 24);
    *(_QWORD *)(v125 + 16) = v637;
    v128 = v637;
    v129 = v130 + 1;
  }
  v131 = _mm_load_si128((const __m128i *)&xmmword_61B30);
  *(_QWORD *)(v125 + 24) = v129;
  v132 = v128 + 40 * v130;
  *(_DWORD *)v132 = 0;
  v133 = off_749C0;
  *(__m128i *)(v132 + 8) = v131;
  v134 = unk_749CC;
  v135 = unk_749D0;
  v136 = unk_749CD;
  v137 = unk_749C8;
  *(_QWORD *)(v132 + 24) = 4;
  *(_QWORD *)(v132 + 32) = v126;
  sub_14B80(*(__int64 **)(v125 + 8), v133, v137, v136, v134, v135, unk_749D8);
  *(_DWORD *)(a1 + 924) = v127;
  v138 = *(_QWORD *)(a1 + 664);
  switch ( unk_749AD )
  {
    case 2:
      v139 = 4;
      break;
    case 7:
      v139 = 8;
      break;
    case 1:
      v139 = 2;
      break;
    default:
      if ( under_debugger )
        goto LABEL_420;
      goto LABEL_350;
  }
  v140 = *(_QWORD *)(v138 + 24);
  v141 = *(_QWORD *)(v138 + 16);
  v142 = v140 + 1;
  v143 = v140;
  if ( *(_QWORD *)(v138 + 32) < (unsigned __int64)(v140 + 1) )
  {
    v636 = qvector_reserve();
    v143 = *(_QWORD *)(v138 + 24);
    *(_QWORD *)(v138 + 16) = v636;
    v141 = v636;
    v142 = v143 + 1;
  }
  v144 = _mm_load_si128((const __m128i *)&xmmword_61B40);
  *(_QWORD *)(v138 + 24) = v142;
  v145 = v141 + 40 * v143;
  *(_DWORD *)v145 = 0;
  v146 = off_749A0;
  *(__m128i *)(v145 + 8) = v144;
  v147 = unk_749AD;
  v148 = unk_749B0;
  v149 = unk_749AC;
  v150 = unk_749A8;
  *(_QWORD *)(v145 + 24) = 4;
  *(_QWORD *)(v145 + 32) = v139;
  sub_14B80(*(__int64 **)(v138 + 8), v146, v150, v147, v149, v148, unk_749B8);
  *(_DWORD *)(a1 + 928) = v140;
  v151 = *(_QWORD *)(a1 + 664);
  switch ( unk_7498D )
  {
    case 2:
      v152 = 4;
      break;
    case 7:
      v152 = 8;
      break;
    case 1:
      v152 = 2;
      break;
    default:
      if ( under_debugger )
        goto LABEL_420;
      goto LABEL_350;
  }
  v153 = *(_QWORD *)(v151 + 24);
  v154 = *(_QWORD *)(v151 + 16);
  v155 = v153 + 1;
  v156 = v153;
  if ( *(_QWORD *)(v151 + 32) < (unsigned __int64)(v153 + 1) )
  {
    v635 = qvector_reserve();
    v156 = *(_QWORD *)(v151 + 24);
    *(_QWORD *)(v151 + 16) = v635;
    v154 = v635;
    v155 = v156 + 1;
  }
  v157 = _mm_load_si128((const __m128i *)&xmmword_61B50);
  *(_QWORD *)(v151 + 24) = v155;
  v158 = v154 + 40 * v156;
  *(_DWORD *)v158 = 0;
  v159 = off_74980;
  *(__m128i *)(v158 + 8) = v157;
  v160 = unk_74988;
  v161 = unk_74990;
  v162 = unk_7498C;
  v163 = unk_7498D;
  *(_QWORD *)(v158 + 24) = 4;
  *(_QWORD *)(v158 + 32) = v152;
  sub_14B80(*(__int64 **)(v151 + 8), v159, v160, v163, v162, v161, unk_74998);
  v164 = *(_DWORD *)(a1 + 276) == 8;
  *(_DWORD *)(a1 + 944) = v153;
  v165 = *(_QWORD *)(a1 + 664);
  if ( v164 )
  {
    switch ( unk_74EED )
    {
      case 2:
        v398 = 4;
        break;
      case 7:
        v398 = 8;
        break;
      case 1:
        v398 = 2;
        break;
      default:
        if ( under_debugger )
          goto LABEL_420;
        goto LABEL_350;
    }
    v399 = *(_QWORD *)(v165 + 24);
    v400 = *(_QWORD *)(v165 + 16);
    v401 = v399 + 1;
    if ( *(_QWORD *)(v165 + 32) < (unsigned __int64)(v399 + 1) )
    {
      v648 = qvector_reserve();
      v399 = *(_QWORD *)(v165 + 24);
      *(_QWORD *)(v165 + 16) = v648;
      v400 = v648;
      v401 = v399 + 1;
    }
    v402 = _mm_load_si128((const __m128i *)&xmmword_61B60);
    *(_QWORD *)(v165 + 24) = v401;
    v403 = v400 + 40 * v399;
    *(_DWORD *)v403 = 0;
    v404 = off_74EE0;
    *(__m128i *)(v403 + 8) = v402;
    v405 = xmmword_74EF0;
    v406 = unk_74EEC;
    v407 = unk_74EED;
    v408 = unk_74EE8;
    *(_QWORD *)(v403 + 32) = v398;
    *(_QWORD *)(v403 + 24) = 8;
    sub_14B80(*(__int64 **)(v165 + 8), v404, v408, v407, v406, v405, *((__int64 *)&xmmword_74EF0 + 1));
    v409 = *(_QWORD *)(a1 + 664);
    switch ( unk_74ECD )
    {
      case 2:
        v410 = 4;
        break;
      case 7:
        v410 = 8;
        break;
      case 1:
        v410 = 2;
        break;
      default:
        if ( under_debugger )
          goto LABEL_420;
        goto LABEL_350;
    }
    v411 = *(_QWORD *)(v409 + 24);
    v412 = *(_QWORD *)(v409 + 16);
    v413 = v411 + 1;
    if ( *(_QWORD *)(v409 + 32) < (unsigned __int64)(v411 + 1) )
    {
      v652 = qvector_reserve();
      v411 = *(_QWORD *)(v409 + 24);
      *(_QWORD *)(v409 + 16) = v652;
      v412 = v652;
      v413 = v411 + 1;
    }
    v414 = _mm_load_si128((const __m128i *)&xmmword_61B70);
    *(_QWORD *)(v409 + 24) = v413;
    v415 = v412 + 40 * v411;
    *(_DWORD *)v415 = 0;
    v416 = off_74EC0;
    *(__m128i *)(v415 + 8) = v414;
    v417 = xmmword_74ED0;
    v418 = unk_74ECC;
    v419 = unk_74ECD;
    v420 = unk_74EC8;
    *(_QWORD *)(v415 + 24) = 8;
    *(_QWORD *)(v415 + 32) = v410;
    sub_14B80(*(__int64 **)(v409 + 8), v416, v420, v419, v418, v417, *((__int64 *)&xmmword_74ED0 + 1));
    v421 = *(_QWORD *)(a1 + 664);
    switch ( unk_74EAD )
    {
      case 2:
        v422 = 4;
        break;
      case 7:
        v422 = 8;
        break;
      case 1:
        v422 = 2;
        break;
      default:
        if ( under_debugger )
          goto LABEL_420;
        goto LABEL_350;
    }
    v423 = *(_QWORD *)(v421 + 24);
    v424 = *(_QWORD *)(v421 + 16);
    v425 = v423 + 1;
    if ( *(_QWORD *)(v421 + 32) < (unsigned __int64)(v423 + 1) )
    {
      v651 = qvector_reserve();
      v423 = *(_QWORD *)(v421 + 24);
      *(_QWORD *)(v421 + 16) = v651;
      v424 = v651;
      v425 = v423 + 1;
    }
    v426 = _mm_load_si128((const __m128i *)&xmmword_61B80);
    *(_QWORD *)(v421 + 24) = v425;
    v427 = v424 + 40 * v423;
    *(_DWORD *)v427 = 0;
    v428 = off_74EA0;
    *(__m128i *)(v427 + 8) = v426;
    v429 = xmmword_74EB0;
    v430 = unk_74EAC;
    v431 = unk_74EAD;
    v432 = unk_74EA8;
    *(_QWORD *)(v427 + 24) = 8;
    *(_QWORD *)(v427 + 32) = v422;
    sub_14B80(*(__int64 **)(v421 + 8), v428, v432, v431, v430, v429, *((__int64 *)&xmmword_74EB0 + 1));
    v433 = *(_QWORD *)(a1 + 664);
    switch ( unk_74E8D )
    {
      case 2:
        v434 = 4;
        break;
      case 7:
        v434 = 8;
        break;
      case 1:
        v434 = 2;
        break;
      default:
        if ( under_debugger )
          goto LABEL_420;
        goto LABEL_350;
    }
    v435 = *(_QWORD *)(v433 + 24);
    v436 = *(_QWORD *)(v433 + 16);
    v437 = v435 + 1;
    if ( *(_QWORD *)(v433 + 32) < (unsigned __int64)(v435 + 1) )
    {
      v650 = qvector_reserve();
      v435 = *(_QWORD *)(v433 + 24);
      *(_QWORD *)(v433 + 16) = v650;
      v436 = v650;
      v437 = v435 + 1;
    }
    v438 = _mm_load_si128((const __m128i *)&xmmword_61B90);
    *(_QWORD *)(v433 + 24) = v437;
    v439 = v436 + 40 * v435;
    *(_DWORD *)v439 = 0;
    v440 = off_74E80;
    *(__m128i *)(v439 + 8) = v438;
    v441 = xmmword_74E90;
    v442 = unk_74E8C;
    v443 = unk_74E8D;
    v444 = unk_74E88;
    *(_QWORD *)(v439 + 24) = 8;
    *(_QWORD *)(v439 + 32) = v434;
    sub_14B80(*(__int64 **)(v433 + 8), v440, v444, v443, v442, v441, *((__int64 *)&xmmword_74E90 + 1));
    v445 = *(_QWORD *)(a1 + 664);
    switch ( unk_74E6D )
    {
      case 2:
        v446 = 4;
        break;
      case 7:
        v446 = 8;
        break;
      case 1:
        v446 = 2;
        break;
      default:
        if ( under_debugger )
          goto LABEL_420;
        goto LABEL_350;
    }
    v447 = *(_QWORD *)(v445 + 24);
    v448 = *(_QWORD *)(v445 + 16);
    v449 = v447 + 1;
    if ( *(_QWORD *)(v445 + 32) < (unsigned __int64)(v447 + 1) )
    {
      v649 = qvector_reserve();
      v447 = *(_QWORD *)(v445 + 24);
      *(_QWORD *)(v445 + 16) = v649;
      v448 = v649;
      v449 = v447 + 1;
    }
    v450 = _mm_load_si128((const __m128i *)&xmmword_61BA0);
    *(_QWORD *)(v445 + 24) = v449;
    v451 = v448 + 40 * v447;
    *(_DWORD *)v451 = 0;
    v452 = off_74E60;
    *(__m128i *)(v451 + 8) = v450;
    v453 = unk_74E6D;
    v454 = unk_74E68;
    v455 = xmmword_74E70;
    v456 = unk_74E6C;
    *(_QWORD *)(v451 + 32) = v446;
    *(_QWORD *)(v451 + 24) = 8;
    sub_14B80(*(__int64 **)(v445 + 8), v452, v454, v453, v456, v455, *((__int64 *)&xmmword_74E70 + 1));
    v457 = *(_QWORD *)(a1 + 664);
    switch ( unk_74E4D )
    {
      case 2:
        v458 = 4;
        break;
      case 7:
        v458 = 8;
        break;
      case 1:
        v458 = 2;
        break;
      default:
        if ( under_debugger )
          goto LABEL_420;
        goto LABEL_350;
    }
    v459 = *(_QWORD *)(v457 + 24);
    v460 = *(_QWORD *)(v457 + 16);
    v461 = v459 + 1;
    if ( *(_QWORD *)(v457 + 32) < (unsigned __int64)(v459 + 1) )
    {
      v663 = qvector_reserve();
      v459 = *(_QWORD *)(v457 + 24);
      *(_QWORD *)(v457 + 16) = v663;
      v460 = v663;
      v461 = v459 + 1;
    }
    v462 = _mm_load_si128((const __m128i *)&xmmword_61BB0);
    *(_QWORD *)(v457 + 24) = v461;
    v463 = v460 + 40 * v459;
    *(_DWORD *)v463 = 0;
    v464 = off_74E40;
    *(__m128i *)(v463 + 8) = v462;
    v465 = xmmword_74E50;
    v466 = unk_74E4C;
    v467 = unk_74E4D;
    v468 = unk_74E48;
    *(_QWORD *)(v463 + 32) = v458;
    *(_QWORD *)(v463 + 24) = 8;
    sub_14B80(*(__int64 **)(v457 + 8), v464, v468, v467, v466, v465, *((__int64 *)&xmmword_74E50 + 1));
    v469 = *(_QWORD *)(a1 + 664);
    switch ( unk_74E2D )
    {
      case 2:
        v470 = 4;
        break;
      case 7:
        v470 = 8;
        break;
      case 1:
        v470 = 2;
        break;
      default:
        if ( under_debugger )
          goto LABEL_420;
        goto LABEL_350;
    }
    v471 = *(_QWORD *)(v469 + 24);
    v472 = *(_QWORD *)(v469 + 16);
    v473 = v471 + 1;
    v474 = v471;
    if ( *(_QWORD *)(v469 + 32) < (unsigned __int64)(v471 + 1) )
    {
      v662 = qvector_reserve();
      v474 = *(_QWORD *)(v469 + 24);
      *(_QWORD *)(v469 + 16) = v662;
      v472 = v662;
      v473 = v474 + 1;
    }
    v475 = _mm_load_si128((const __m128i *)&xmmword_61BC0);
    *(_QWORD *)(v469 + 24) = v473;
    v476 = v472 + 40 * v474;
    *(_DWORD *)v476 = 0;
    v477 = off_74E20;
    *(__m128i *)(v476 + 8) = v475;
    v478 = xmmword_74E30;
    v479 = unk_74E2C;
    v480 = unk_74E2D;
    v481 = unk_74E28;
    *(_QWORD *)(v476 + 24) = 8;
    *(_QWORD *)(v476 + 32) = v470;
    sub_14B80(*(__int64 **)(v469 + 8), v477, v481, v480, v479, v478, *((__int64 *)&xmmword_74E30 + 1));
    *(_DWORD *)(a1 + 788) = v471;
    v482 = *(_QWORD *)(a1 + 664);
    switch ( unk_74E0D )
    {
      case 2:
        v483 = 4;
        break;
      case 7:
        v483 = 8;
        break;
      case 1:
        v483 = 2;
        break;
      default:
        if ( under_debugger )
          goto LABEL_420;
        goto LABEL_350;
    }
    v484 = *(_QWORD *)(v482 + 24);
    v485 = *(_QWORD *)(v482 + 16);
    v486 = v484 + 1;
    v487 = v484;
    if ( *(_QWORD *)(v482 + 32) < (unsigned __int64)(v484 + 1) )
    {
      v661 = qvector_reserve();
      v487 = *(_QWORD *)(v482 + 24);
      *(_QWORD *)(v482 + 16) = v661;
      v485 = v661;
      v486 = v487 + 1;
    }
    v488 = _mm_load_si128((const __m128i *)&xmmword_61BD0);
    *(_QWORD *)(v482 + 24) = v486;
    v489 = v485 + 40 * v487;
    *(_DWORD *)v489 = 0;
    v490 = off_74E00;
    *(__m128i *)(v489 + 8) = v488;
    v491 = xmmword_74E10;
    v492 = unk_74E0C;
    v493 = unk_74E0D;
    v494 = unk_74E08;
    *(_QWORD *)(v489 + 24) = 8;
    *(_QWORD *)(v489 + 32) = v483;
    sub_14B80(*(__int64 **)(v482 + 8), v490, v494, v493, v492, v491, *((__int64 *)&xmmword_74E10 + 1));
    *(_DWORD *)(a1 + 780) = v484;
    v495 = *(_QWORD *)(a1 + 664);
    switch ( unk_74DED )
    {
      case 2:
        v496 = 4;
        break;
      case 7:
        v496 = 8;
        break;
      case 1:
        v496 = 2;
        break;
      default:
        if ( under_debugger )
          goto LABEL_420;
        goto LABEL_350;
    }
    v497 = *(_QWORD *)(v495 + 24);
    v498 = *(_QWORD *)(v495 + 16);
    v499 = v497 + 1;
    v500 = v497;
    if ( *(_QWORD *)(v495 + 32) < (unsigned __int64)(v497 + 1) )
    {
      v660 = qvector_reserve();
      v500 = *(_QWORD *)(v495 + 24);
      *(_QWORD *)(v495 + 16) = v660;
      v498 = v660;
      v499 = v500 + 1;
    }
    v501 = _mm_load_si128((const __m128i *)&xmmword_61BE0);
    *(_QWORD *)(v495 + 24) = v499;
    v502 = v498 + 40 * v500;
    *(_DWORD *)v502 = 0;
    v503 = off_74DE0;
    *(__m128i *)(v502 + 8) = v501;
    v504 = xmmword_74DF0;
    v505 = unk_74DEC;
    v506 = unk_74DED;
    v507 = unk_74DE8;
    *(_QWORD *)(v502 + 24) = 8;
    *(_QWORD *)(v502 + 32) = v496;
    sub_14B80(*(__int64 **)(v495 + 8), v503, v507, v506, v505, v504, *((__int64 *)&xmmword_74DF0 + 1));
    *(_DWORD *)(a1 + 784) = v497;
    v508 = *(_QWORD *)(a1 + 664);
    switch ( unk_74DCD )
    {
      case 2:
        v509 = 4;
        break;
      case 7:
        v509 = 8;
        break;
      case 1:
        v509 = 2;
        break;
      default:
        if ( under_debugger )
          goto LABEL_420;
        goto LABEL_350;
    }
    v510 = *(_QWORD *)(v508 + 24);
    v511 = *(_QWORD *)(v508 + 16);
    v512 = v510 + 1;
    if ( *(_QWORD *)(v508 + 32) < (unsigned __int64)(v510 + 1) )
    {
      v659 = qvector_reserve();
      v510 = *(_QWORD *)(v508 + 24);
      *(_QWORD *)(v508 + 16) = v659;
      v511 = v659;
      v512 = v510 + 1;
    }
    v513 = _mm_load_si128((const __m128i *)&xmmword_61BF0);
    *(_QWORD *)(v508 + 24) = v512;
    v514 = v511 + 40 * v510;
    *(_DWORD *)v514 = 0;
    v515 = off_74DC0;
    *(__m128i *)(v514 + 8) = v513;
    v516 = unk_74DCD;
    v517 = unk_74DC8;
    v518 = xmmword_74DD0;
    v519 = unk_74DCC;
    *(_QWORD *)(v514 + 32) = v509;
    *(_QWORD *)(v514 + 24) = 8;
    sub_14B80(*(__int64 **)(v508 + 8), v515, v517, v516, v519, v518, *((__int64 *)&xmmword_74DD0 + 1));
    v520 = *(_QWORD *)(a1 + 664);
    switch ( unk_74DAD )
    {
      case 2:
        v521 = 4;
        break;
      case 7:
        v521 = 8;
        break;
      case 1:
        v521 = 2;
        break;
      default:
        if ( under_debugger )
          goto LABEL_420;
        goto LABEL_350;
    }
    v522 = *(_QWORD *)(v520 + 24);
    v523 = *(_QWORD *)(v520 + 16);
    v524 = v522 + 1;
    if ( *(_QWORD *)(v520 + 32) < (unsigned __int64)(v522 + 1) )
    {
      v658 = qvector_reserve();
      v522 = *(_QWORD *)(v520 + 24);
      *(_QWORD *)(v520 + 16) = v658;
      v523 = v658;
      v524 = v522 + 1;
    }
    v525 = _mm_load_si128((const __m128i *)&xmmword_61C00);
    *(_QWORD *)(v520 + 24) = v524;
    v526 = v523 + 40 * v522;
    *(_DWORD *)v526 = 0;
    v527 = off_74DA0;
    *(__m128i *)(v526 + 8) = v525;
    v528 = xmmword_74DB0;
    v529 = unk_74DAC;
    v530 = unk_74DAD;
    v531 = unk_74DA8;
    *(_QWORD *)(v526 + 32) = v521;
    *(_QWORD *)(v526 + 24) = 8;
    sub_14B80(*(__int64 **)(v520 + 8), v527, v531, v530, v529, v528, *((__int64 *)&xmmword_74DB0 + 1));
    v532 = *(_QWORD *)(a1 + 664);
    switch ( unk_74D8D )
    {
      case 2:
        v533 = 4;
        break;
      case 7:
        v533 = 8;
        break;
      case 1:
        v533 = 2;
        break;
      default:
        if ( under_debugger )
          goto LABEL_420;
        goto LABEL_350;
    }
    v534 = *(_QWORD *)(v532 + 24);
    v535 = *(_QWORD *)(v532 + 16);
    v536 = v534 + 1;
    if ( *(_QWORD *)(v532 + 32) < (unsigned __int64)(v534 + 1) )
    {
      v657 = qvector_reserve();
      v534 = *(_QWORD *)(v532 + 24);
      *(_QWORD *)(v532 + 16) = v657;
      v535 = v657;
      v536 = v534 + 1;
    }
    v537 = _mm_load_si128((const __m128i *)&xmmword_61C10);
    *(_QWORD *)(v532 + 24) = v536;
    v538 = v535 + 40 * v534;
    *(_DWORD *)v538 = 0;
    v539 = off_74D80;
    *(__m128i *)(v538 + 8) = v537;
    v540 = xmmword_74D90;
    v541 = unk_74D8C;
    v542 = unk_74D8D;
    v543 = unk_74D88;
    *(_QWORD *)(v538 + 24) = 8;
    *(_QWORD *)(v538 + 32) = v533;
    sub_14B80(*(__int64 **)(v532 + 8), v539, v543, v542, v541, v540, *((__int64 *)&xmmword_74D90 + 1));
    v544 = *(_QWORD *)(a1 + 664);
    switch ( unk_74D6D )
    {
      case 2:
        v545 = 4;
        break;
      case 7:
        v545 = 8;
        break;
      case 1:
        v545 = 2;
        break;
      default:
        if ( under_debugger )
          goto LABEL_420;
        goto LABEL_350;
    }
    v546 = *(_QWORD *)(v544 + 24);
    v547 = *(_QWORD *)(v544 + 16);
    v548 = v546 + 1;
    if ( *(_QWORD *)(v544 + 32) < (unsigned __int64)(v546 + 1) )
    {
      v656 = qvector_reserve();
      v546 = *(_QWORD *)(v544 + 24);
      *(_QWORD *)(v544 + 16) = v656;
      v547 = v656;
      v548 = v546 + 1;
    }
    v549 = _mm_load_si128((const __m128i *)&xmmword_61C20);
    *(_QWORD *)(v544 + 24) = v548;
    v550 = v547 + 40 * v546;
    *(_DWORD *)v550 = 0;
    v551 = off_74D60;
    *(__m128i *)(v550 + 8) = v549;
    v552 = xmmword_74D70;
    v553 = unk_74D6C;
    v554 = unk_74D6D;
    v555 = unk_74D68;
    *(_QWORD *)(v550 + 24) = 8;
    *(_QWORD *)(v550 + 32) = v545;
    sub_14B80(*(__int64 **)(v544 + 8), v551, v555, v554, v553, v552, *((__int64 *)&xmmword_74D70 + 1));
    v556 = *(_QWORD *)(a1 + 664);
    switch ( unk_74D4D )
    {
      case 2:
        v557 = 4;
        break;
      case 7:
        v557 = 8;
        break;
      case 1:
        v557 = 2;
        break;
      default:
        if ( under_debugger )
          goto LABEL_420;
        goto LABEL_350;
    }
    v558 = *(_QWORD *)(v556 + 24);
    v559 = *(_QWORD *)(v556 + 16);
    v560 = v558 + 1;
    if ( *(_QWORD *)(v556 + 32) < (unsigned __int64)(v558 + 1) )
    {
      v655 = qvector_reserve();
      v558 = *(_QWORD *)(v556 + 24);
      *(_QWORD *)(v556 + 16) = v655;
      v559 = v655;
      v560 = v558 + 1;
    }
    v561 = _mm_load_si128((const __m128i *)&xmmword_61C30);
    *(_QWORD *)(v556 + 24) = v560;
    v562 = v559 + 40 * v558;
    *(_DWORD *)v562 = 0;
    v563 = off_74D40;
    *(__m128i *)(v562 + 8) = v561;
    v564 = xmmword_74D50;
    v565 = unk_74D4C;
    v566 = unk_74D4D;
    v567 = unk_74D48;
    *(_QWORD *)(v562 + 24) = 8;
    *(_QWORD *)(v562 + 32) = v557;
    sub_14B80(*(__int64 **)(v556 + 8), v563, v567, v566, v565, v564, *((__int64 *)&xmmword_74D50 + 1));
    v568 = *(_QWORD *)(a1 + 664);
    switch ( unk_74D2D )
    {
      case 2:
        v569 = 4;
        break;
      case 7:
        v569 = 8;
        break;
      case 1:
        v569 = 2;
        break;
      default:
        if ( under_debugger )
          goto LABEL_420;
        goto LABEL_350;
    }
    v570 = *(_QWORD *)(v568 + 24);
    v571 = *(_QWORD *)(v568 + 16);
    v572 = v570 + 1;
    if ( *(_QWORD *)(v568 + 32) < (unsigned __int64)(v570 + 1) )
    {
      v654 = qvector_reserve();
      v570 = *(_QWORD *)(v568 + 24);
      *(_QWORD *)(v568 + 16) = v654;
      v571 = v654;
      v572 = v570 + 1;
    }
    v573 = _mm_load_si128((const __m128i *)&xmmword_61C40);
    *(_QWORD *)(v568 + 24) = v572;
    v574 = v571 + 40 * v570;
    *(_DWORD *)v574 = 0;
    v575 = off_74D20;
    *(__m128i *)(v574 + 8) = v573;
    v576 = unk_74D2D;
    v577 = unk_74D28;
    v578 = xmmword_74D30;
    v579 = unk_74D2C;
    *(_QWORD *)(v574 + 32) = v569;
    *(_QWORD *)(v574 + 24) = 8;
    sub_14B80(*(__int64 **)(v568 + 8), v575, v577, v576, v579, v578, *((__int64 *)&xmmword_74D30 + 1));
    v580 = *(_QWORD *)(a1 + 664);
    switch ( unk_74D0D )
    {
      case 2:
        v581 = 4;
        break;
      case 7:
        v581 = 8;
        break;
      case 1:
        v581 = 2;
        break;
      default:
        if ( under_debugger )
          goto LABEL_420;
        goto LABEL_350;
    }
    v582 = *(_QWORD *)(v580 + 24);
    v583 = *(_QWORD *)(v580 + 16);
    v584 = v582 + 1;
    if ( *(_QWORD *)(v580 + 32) < (unsigned __int64)(v582 + 1) )
    {
      v653 = qvector_reserve();
      v582 = *(_QWORD *)(v580 + 24);
      *(_QWORD *)(v580 + 16) = v653;
      v583 = v653;
      v584 = v582 + 1;
    }
    v585 = _mm_load_si128((const __m128i *)&xmmword_61C50);
    *(_QWORD *)(v580 + 24) = v584;
    v586 = v583 + 40 * v582;
    *(_DWORD *)v586 = 0;
    v587 = off_74D00;
    *(__m128i *)(v586 + 8) = v585;
    v588 = xmmword_74D10;
    v589 = unk_74D0C;
    v590 = unk_74D0D;
    v591 = unk_74D08;
    *(_QWORD *)(v586 + 32) = v581;
    *(_QWORD *)(v586 + 24) = 8;
    sub_14B80(*(__int64 **)(v580 + 8), v587, v591, v590, v589, v588, *((__int64 *)&xmmword_74D10 + 1));
    v592 = *(_QWORD *)(a1 + 664);
    switch ( unk_74CED )
    {
      case 2:
        v593 = 4;
        break;
      case 7:
        v593 = 8;
        break;
      case 1:
        v593 = 2;
        break;
      default:
        if ( under_debugger )
          goto LABEL_420;
        goto LABEL_350;
    }
    v594 = *(_QWORD *)(v592 + 24);
    v595 = *(_QWORD *)(v592 + 16);
    v596 = v594 + 1;
    if ( *(_QWORD *)(v592 + 32) < (unsigned __int64)(v594 + 1) )
    {
      v664 = qvector_reserve();
      v594 = *(_QWORD *)(v592 + 24);
      *(_QWORD *)(v592 + 16) = v664;
      v595 = v664;
      v596 = v594 + 1;
    }
    v597 = _mm_load_si128((const __m128i *)&xmmword_61C60);
    *(_QWORD *)(v592 + 24) = v596;
    v598 = v595 + 40 * v594;
    *(_DWORD *)v598 = 0;
    v599 = off_74CE0;
    *(__m128i *)(v598 + 8) = v597;
    v600 = xmmword_74CF0;
    v601 = unk_74CEC;
    v602 = unk_74CED;
    v603 = unk_74CE8;
    *(_QWORD *)(v598 + 24) = 8;
    *(_QWORD *)(v598 + 32) = v593;
    sub_14B80(*(__int64 **)(v592 + 8), v599, v603, v602, v601, v600, *((__int64 *)&xmmword_74CF0 + 1));
  }
  else
  {
    switch ( unk_74CCD )
    {
      case 2:
        v166 = 4;
        break;
      case 7:
        v166 = 8;
        break;
      case 1:
        v166 = 2;
        break;
      default:
        if ( under_debugger )
          goto LABEL_420;
        goto LABEL_350;
    }
    v167 = *(_QWORD *)(v165 + 24);
    v168 = *(_QWORD *)(v165 + 16);
    v169 = v167 + 1;
    if ( *(_QWORD *)(v165 + 32) < (unsigned __int64)(v167 + 1) )
    {
      v643 = qvector_reserve();
      v167 = *(_QWORD *)(v165 + 24);
      *(_QWORD *)(v165 + 16) = v643;
      v168 = v643;
      v169 = v167 + 1;
    }
    v170 = _mm_load_si128((const __m128i *)&xmmword_61B60);
    *(_QWORD *)(v165 + 24) = v169;
    v171 = v168 + 40 * v167;
    *(_DWORD *)v171 = 0;
    v172 = off_74CC0;
    *(__m128i *)(v171 + 8) = v170;
    v173 = xmmword_74CD0;
    v174 = unk_74CCC;
    v175 = unk_74CCD;
    v176 = unk_74CC8;
    *(_QWORD *)(v171 + 32) = v166;
    *(_QWORD *)(v171 + 24) = 8;
    sub_14B80(*(__int64 **)(v165 + 8), v172, v176, v175, v174, v173, *((__int64 *)&xmmword_74CD0 + 1));
    v177 = *(_QWORD *)(a1 + 664);
    switch ( unk_74CAD )
    {
      case 2:
        v178 = 4;
        break;
      case 7:
        v178 = 8;
        break;
      case 1:
        v178 = 2;
        break;
      default:
        if ( under_debugger )
          goto LABEL_420;
        goto LABEL_350;
    }
    v179 = *(_QWORD *)(v177 + 24);
    v180 = *(_QWORD *)(v177 + 16);
    v181 = v179 + 1;
    if ( *(_QWORD *)(v177 + 32) < (unsigned __int64)(v179 + 1) )
    {
      v647 = qvector_reserve();
      v179 = *(_QWORD *)(v177 + 24);
      *(_QWORD *)(v177 + 16) = v647;
      v180 = v647;
      v181 = v179 + 1;
    }
    v182 = _mm_load_si128((const __m128i *)&xmmword_61B70);
    *(_QWORD *)(v177 + 24) = v181;
    v183 = v180 + 40 * v179;
    *(_DWORD *)v183 = 0;
    v184 = off_74CA0;
    *(__m128i *)(v183 + 8) = v182;
    v185 = xmmword_74CB0;
    v186 = unk_74CAC;
    v187 = unk_74CAD;
    v188 = unk_74CA8;
    *(_QWORD *)(v183 + 24) = 8;
    *(_QWORD *)(v183 + 32) = v178;
    sub_14B80(*(__int64 **)(v177 + 8), v184, v188, v187, v186, v185, *((__int64 *)&xmmword_74CB0 + 1));
    v189 = *(_QWORD *)(a1 + 664);
    switch ( unk_74C8D )
    {
      case 2:
        v190 = 4;
        break;
      case 7:
        v190 = 8;
        break;
      case 1:
        v190 = 2;
        break;
      default:
        if ( under_debugger )
          goto LABEL_420;
        goto LABEL_350;
    }
    v191 = *(_QWORD *)(v189 + 24);
    v192 = *(_QWORD *)(v189 + 16);
    v193 = v191 + 1;
    if ( *(_QWORD *)(v189 + 32) < (unsigned __int64)(v191 + 1) )
    {
      v640 = qvector_reserve();
      v191 = *(_QWORD *)(v189 + 24);
      *(_QWORD *)(v189 + 16) = v640;
      v192 = v640;
      v193 = v191 + 1;
    }
    v194 = _mm_load_si128((const __m128i *)&xmmword_61B80);
    *(_QWORD *)(v189 + 24) = v193;
    v195 = v192 + 40 * v191;
    *(_DWORD *)v195 = 0;
    v196 = off_74C80;
    *(__m128i *)(v195 + 8) = v194;
    v197 = unk_74C8D;
    v198 = unk_74C88;
    v199 = xmmword_74C90;
    v200 = unk_74C8C;
    *(_QWORD *)(v195 + 32) = v190;
    *(_QWORD *)(v195 + 24) = 8;
    sub_14B80(*(__int64 **)(v189 + 8), v196, v198, v197, v200, v199, *((__int64 *)&xmmword_74C90 + 1));
    v201 = *(_QWORD *)(a1 + 664);
    switch ( unk_74C6D )
    {
      case 2:
        v202 = 4;
        break;
      case 7:
        v202 = 8;
        break;
      case 1:
        v202 = 2;
        break;
      default:
        if ( under_debugger )
          goto LABEL_420;
        goto LABEL_350;
    }
    v203 = *(_QWORD *)(v201 + 24);
    v204 = *(_QWORD *)(v201 + 16);
    v205 = v203 + 1;
    if ( *(_QWORD *)(v201 + 32) < (unsigned __int64)(v203 + 1) )
    {
      v639 = qvector_reserve();
      v203 = *(_QWORD *)(v201 + 24);
      *(_QWORD *)(v201 + 16) = v639;
      v204 = v639;
      v205 = v203 + 1;
    }
    v206 = _mm_load_si128((const __m128i *)&xmmword_61B90);
    *(_QWORD *)(v201 + 24) = v205;
    v207 = v204 + 40 * v203;
    *(_DWORD *)v207 = 0;
    v208 = off_74C60;
    *(__m128i *)(v207 + 8) = v206;
    v209 = xmmword_74C70;
    v210 = unk_74C6C;
    v211 = unk_74C6D;
    v212 = unk_74C68;
    *(_QWORD *)(v207 + 32) = v202;
    *(_QWORD *)(v207 + 24) = 8;
    sub_14B80(*(__int64 **)(v201 + 8), v208, v212, v211, v210, v209, *((__int64 *)&xmmword_74C70 + 1));
    v213 = *(_QWORD *)(a1 + 664);
    switch ( unk_74C4D )
    {
      case 2:
        v214 = 4;
        break;
      case 7:
        v214 = 8;
        break;
      case 1:
        v214 = 2;
        break;
      default:
        if ( under_debugger )
          goto LABEL_420;
        goto LABEL_350;
    }
    v215 = *(_QWORD *)(v213 + 24);
    v216 = *(_QWORD *)(v213 + 16);
    v217 = v215 + 1;
    if ( *(_QWORD *)(v213 + 32) < (unsigned __int64)(v215 + 1) )
    {
      v642 = qvector_reserve();
      v215 = *(_QWORD *)(v213 + 24);
      *(_QWORD *)(v213 + 16) = v642;
      v216 = v642;
      v217 = v215 + 1;
    }
    v218 = _mm_load_si128((const __m128i *)&xmmword_61BA0);
    *(_QWORD *)(v213 + 24) = v217;
    v219 = v216 + 40 * v215;
    *(_DWORD *)v219 = 0;
    v220 = off_74C40;
    *(__m128i *)(v219 + 8) = v218;
    v221 = xmmword_74C50;
    v222 = unk_74C4C;
    v223 = unk_74C4D;
    v224 = unk_74C48;
    *(_QWORD *)(v219 + 24) = 8;
    *(_QWORD *)(v219 + 32) = v214;
    sub_14B80(*(__int64 **)(v213 + 8), v220, v224, v223, v222, v221, *((__int64 *)&xmmword_74C50 + 1));
    v225 = *(_QWORD *)(a1 + 664);
    switch ( unk_74C2D )
    {
      case 2:
        v226 = 4;
        break;
      case 7:
        v226 = 8;
        break;
      case 1:
        v226 = 2;
        break;
      default:
        if ( under_debugger )
          goto LABEL_420;
        goto LABEL_350;
    }
    v227 = *(_QWORD *)(v225 + 24);
    v228 = *(_QWORD *)(v225 + 16);
    v229 = v227 + 1;
    if ( *(_QWORD *)(v225 + 32) < (unsigned __int64)(v227 + 1) )
    {
      v641 = qvector_reserve();
      v227 = *(_QWORD *)(v225 + 24);
      *(_QWORD *)(v225 + 16) = v641;
      v228 = v641;
      v229 = v227 + 1;
    }
    v230 = _mm_load_si128((const __m128i *)&xmmword_61BB0);
    *(_QWORD *)(v225 + 24) = v229;
    v231 = v228 + 40 * v227;
    *(_DWORD *)v231 = 0;
    v232 = off_74C20;
    *(__m128i *)(v231 + 8) = v230;
    v233 = xmmword_74C30;
    v234 = unk_74C2C;
    v235 = unk_74C2D;
    v236 = unk_74C28;
    *(_QWORD *)(v231 + 24) = 8;
    *(_QWORD *)(v231 + 32) = v226;
    sub_14B80(*(__int64 **)(v225 + 8), v232, v236, v235, v234, v233, *((__int64 *)&xmmword_74C30 + 1));
    v237 = *(_QWORD *)(a1 + 664);
    switch ( unk_74C0D )
    {
      case 2:
        v238 = 4;
        break;
      case 7:
        v238 = 8;
        break;
      case 1:
        v238 = 2;
        break;
      default:
        if ( under_debugger )
          goto LABEL_420;
        goto LABEL_350;
    }
    v239 = *(_QWORD *)(v237 + 24);
    v240 = *(_QWORD *)(v237 + 16);
    v241 = v239 + 1;
    v242 = v239;
    if ( *(_QWORD *)(v237 + 32) < (unsigned __int64)(v239 + 1) )
    {
      v644 = qvector_reserve();
      v242 = *(_QWORD *)(v237 + 24);
      *(_QWORD *)(v237 + 16) = v644;
      v240 = v644;
      v241 = v242 + 1;
    }
    v243 = _mm_load_si128((const __m128i *)&xmmword_61BC0);
    *(_QWORD *)(v237 + 24) = v241;
    v244 = v240 + 40 * v242;
    *(_DWORD *)v244 = 0;
    v245 = off_74C00;
    *(__m128i *)(v244 + 8) = v243;
    v246 = xmmword_74C10;
    v247 = unk_74C0C;
    v248 = unk_74C0D;
    v249 = unk_74C08;
    *(_QWORD *)(v244 + 24) = 8;
    *(_QWORD *)(v244 + 32) = v238;
    sub_14B80(*(__int64 **)(v237 + 8), v245, v249, v248, v247, v246, *((__int64 *)&xmmword_74C10 + 1));
    *(_DWORD *)(a1 + 788) = v239;
    v250 = *(_QWORD *)(a1 + 664);
    switch ( unk_74BED )
    {
      case 2:
        v251 = 4;
        break;
      case 7:
        v251 = 8;
        break;
      case 1:
        v251 = 2;
        break;
      default:
        if ( under_debugger )
          goto LABEL_420;
        goto LABEL_350;
    }
    v252 = *(_QWORD *)(v250 + 24);
    v253 = *(_QWORD *)(v250 + 16);
    v254 = v252 + 1;
    v255 = v252;
    if ( *(_QWORD *)(v250 + 32) < (unsigned __int64)(v252 + 1) )
    {
      v646 = qvector_reserve();
      v255 = *(_QWORD *)(v250 + 24);
      *(_QWORD *)(v250 + 16) = v646;
      v253 = v646;
      v254 = v255 + 1;
    }
    v256 = _mm_load_si128((const __m128i *)&xmmword_61BD0);
    *(_QWORD *)(v250 + 24) = v254;
    v257 = v253 + 40 * v255;
    *(_DWORD *)v257 = 0;
    v258 = off_74BE0;
    *(__m128i *)(v257 + 8) = v256;
    v259 = unk_74BED;
    v260 = unk_74BE8;
    v261 = xmmword_74BF0;
    v262 = unk_74BEC;
    *(_QWORD *)(v257 + 32) = v251;
    *(_QWORD *)(v257 + 24) = 8;
    sub_14B80(*(__int64 **)(v250 + 8), v258, v260, v259, v262, v261, *((__int64 *)&xmmword_74BF0 + 1));
    *(_DWORD *)(a1 + 780) = v252;
    v263 = *(_QWORD *)(a1 + 664);
    switch ( unk_74BCD )
    {
      case 2:
        v264 = 4;
        break;
      case 7:
        v264 = 8;
        break;
      case 1:
        v264 = 2;
        break;
      default:
        if ( under_debugger )
          goto LABEL_420;
        goto LABEL_350;
    }
    v265 = *(_QWORD *)(v263 + 24);
    v266 = *(_QWORD *)(v263 + 16);
    v267 = v265 + 1;
    v268 = v265;
    if ( *(_QWORD *)(v263 + 32) < (unsigned __int64)(v265 + 1) )
    {
      v645 = qvector_reserve();
      v268 = *(_QWORD *)(v263 + 24);
      *(_QWORD *)(v263 + 16) = v645;
      v266 = v645;
      v267 = v268 + 1;
    }
    v269 = _mm_load_si128((const __m128i *)&xmmword_61BE0);
    *(_QWORD *)(v263 + 24) = v267;
    v270 = v266 + 40 * v268;
    *(_DWORD *)v270 = 0;
    v271 = off_74BC0;
    *(__m128i *)(v270 + 8) = v269;
    v272 = xmmword_74BD0;
    v273 = unk_74BCC;
    v274 = unk_74BCD;
    v275 = unk_74BC8;
    *(_QWORD *)(v270 + 32) = v264;
    *(_QWORD *)(v270 + 24) = 8;
    sub_14B80(*(__int64 **)(v263 + 8), v271, v275, v274, v273, v272, *((__int64 *)&xmmword_74BD0 + 1));
    *(_DWORD *)(a1 + 784) = v265;
  }
  v276 = *(_QWORD *)(a1 + 664);
  switch ( unk_74BAD )
  {
    case 2:
      v277 = 4;
      break;
    case 7:
      v277 = 8;
      break;
    case 1:
      v277 = 2;
      break;
    default:
      if ( under_debugger )
        goto LABEL_420;
      goto LABEL_350;
  }
  v278 = *(_QWORD *)(v276 + 24);
  v279 = *(_QWORD *)(v276 + 16);
  v280 = v278 + 1;
  v281 = v278;
  if ( *(_QWORD *)(v276 + 32) < (unsigned __int64)(v278 + 1) )
  {
    v629 = qvector_reserve();
    v281 = *(_QWORD *)(v276 + 24);
    *(_QWORD *)(v276 + 16) = v629;
    v279 = v629;
    v280 = v281 + 1;
  }
  v282 = _mm_load_si128((const __m128i *)&xmmword_61C70);
  *(_QWORD *)(v276 + 24) = v280;
  v283 = v279 + 40 * v281;
  *(_DWORD *)v283 = 0;
  v284 = off_74BA0;
  *(__m128i *)(v283 + 8) = v282;
  v285 = unk_74BA8;
  v286 = off_74BB0;
  v287 = unk_74BAC;
  v288 = unk_74BAD;
  *(_QWORD *)(v283 + 24) = 4;
  *(_QWORD *)(v283 + 32) = v277;
  sub_14B80(*(__int64 **)(v276 + 8), v284, v285, v288, v287, (__int64)v286, unk_74BB8);
  v289 = *(_QWORD *)(a1 + 664);
  *(_DWORD *)(a1 + 920) = v278;
  v290 = *(_QWORD *)(v289 + 24);
  v291 = *(_QWORD *)(v289 + 16);
  v292 = v290 + 1;
  if ( *(_QWORD *)(v289 + 32) < (unsigned __int64)(v290 + 1) )
  {
    v611 = qvector_reserve();
    v290 = *(_QWORD *)(v289 + 24);
    *(_QWORD *)(v289 + 16) = v611;
    v291 = v611;
    v292 = v290 + 1;
  }
  v293 = _mm_load_si128((const __m128i *)&xmmword_61C80);
  v294 = v291 + 40 * v290;
  *(_QWORD *)(v289 + 24) = v292;
  *(__m128i *)(v294 + 8) = v293;
  *(_DWORD *)v294 = 2;
  *(__m128i *)(v294 + 24) = _mm_unpacklo_epi64((__m128i)0x10uLL, (__m128i)0x10uLL);
  sub_14B80(
    *(__int64 **)(v289 + 8),
    off_74780,
    unk_74788,
    unk_7478D,
    unk_7478C,
    (__int64)off_74790,
    *(__int64 *)algn_74798);
  v295 = *(_QWORD *)(a1 + 664);
  v296 = *(_QWORD *)(v295 + 24);
  v297 = *(_QWORD *)(v295 + 16);
  v298 = v296 + 1;
  if ( *(_QWORD *)(v295 + 32) < (unsigned __int64)(v296 + 1) )
  {
    v610 = qvector_reserve();
    v296 = *(_QWORD *)(v295 + 24);
    *(_QWORD *)(v295 + 16) = v610;
    v297 = v610;
    v298 = v296 + 1;
  }
  v299 = _mm_load_si128((const __m128i *)&xmmword_61C90);
  *(_QWORD *)(v295 + 24) = v298;
  v300 = v297 + 40 * v296;
  *(__m128i *)(v300 + 8) = v299;
  *(_DWORD *)v300 = 2;
  *(__m128i *)(v300 + 24) = _mm_unpacklo_epi64((__m128i)0x10uLL, (__m128i)0x10uLL);
  sub_14B80(
    *(__int64 **)(v295 + 8),
    off_747A0,
    unk_747A8,
    unk_747AD,
    unk_747AC,
    (__int64)off_747B0,
    *(__int64 *)algn_747B8);
  v301 = *(_QWORD *)(a1 + 664);
  v302 = *(_QWORD *)(v301 + 24);
  v303 = *(_QWORD *)(v301 + 16);
  v304 = v302 + 1;
  if ( *(_QWORD *)(v301 + 32) < (unsigned __int64)(v302 + 1) )
  {
    v609 = qvector_reserve();
    v302 = *(_QWORD *)(v301 + 24);
    *(_QWORD *)(v301 + 16) = v609;
    v303 = v609;
    v304 = v302 + 1;
  }
  v305 = _mm_load_si128((const __m128i *)&xmmword_61CA0);
  *(_QWORD *)(v301 + 24) = v304;
  v306 = v303 + 40 * v302;
  *(__m128i *)(v306 + 8) = v305;
  *(_DWORD *)v306 = 2;
  *(__m128i *)(v306 + 24) = _mm_unpacklo_epi64((__m128i)0x10uLL, (__m128i)0x10uLL);
  sub_14B80(
    *(__int64 **)(v301 + 8),
    off_747C0,
    unk_747C8,
    unk_747CD,
    unk_747CC,
    (__int64)off_747D0,
    *(__int64 *)algn_747D8);
  v307 = *(_QWORD *)(a1 + 664);
  v308 = *(_QWORD *)(v307 + 24);
  v309 = *(_QWORD *)(v307 + 16);
  v310 = v308 + 1;
  if ( *(_QWORD *)(v307 + 32) < (unsigned __int64)(v308 + 1) )
  {
    v608 = qvector_reserve();
    v308 = *(_QWORD *)(v307 + 24);
    *(_QWORD *)(v307 + 16) = v608;
    v309 = v608;
    v310 = v308 + 1;
  }
  v311 = _mm_load_si128((const __m128i *)&xmmword_61CB0);
  *(_QWORD *)(v307 + 24) = v310;
  v312 = v309 + 40 * v308;
  *(__m128i *)(v312 + 8) = v311;
  *(_DWORD *)v312 = 2;
  *(__m128i *)(v312 + 24) = _mm_unpacklo_epi64((__m128i)0x10uLL, (__m128i)0x10uLL);
  sub_14B80(
    *(__int64 **)(v307 + 8),
    off_747E0,
    unk_747E8,
    unk_747ED,
    unk_747EC,
    (__int64)off_747F0,
    *(__int64 *)algn_747F8);
  v313 = *(_QWORD *)(a1 + 664);
  v314 = *(_QWORD *)(v313 + 24);
  v315 = *(_QWORD *)(v313 + 16);
  v316 = v314 + 1;
  if ( *(_QWORD *)(v313 + 32) < (unsigned __int64)(v314 + 1) )
  {
    v607 = qvector_reserve();
    v314 = *(_QWORD *)(v313 + 24);
    *(_QWORD *)(v313 + 16) = v607;
    v315 = v607;
    v316 = v314 + 1;
  }
  v317 = _mm_load_si128((const __m128i *)&xmmword_61CC0);
  *(_QWORD *)(v313 + 24) = v316;
  v318 = v315 + 40 * v314;
  *(__m128i *)(v318 + 8) = v317;
  *(_DWORD *)v318 = 2;
  *(__m128i *)(v318 + 24) = _mm_unpacklo_epi64((__m128i)0x10uLL, (__m128i)0x10uLL);
  sub_14B80(
    *(__int64 **)(v313 + 8),
    off_74800,
    unk_74808,
    unk_7480D,
    unk_7480C,
    (__int64)off_74810,
    *(__int64 *)algn_74818);
  v319 = *(_QWORD *)(a1 + 664);
  v320 = *(_QWORD *)(v319 + 24);
  v321 = *(_QWORD *)(v319 + 16);
  v322 = v320 + 1;
  if ( *(_QWORD *)(v319 + 32) < (unsigned __int64)(v320 + 1) )
  {
    v606 = qvector_reserve();
    v320 = *(_QWORD *)(v319 + 24);
    *(_QWORD *)(v319 + 16) = v606;
    v321 = v606;
    v322 = v320 + 1;
  }
  v323 = _mm_load_si128((const __m128i *)&xmmword_61CD0);
  *(_QWORD *)(v319 + 24) = v322;
  v324 = v321 + 40 * v320;
  *(__m128i *)(v324 + 8) = v323;
  *(_DWORD *)v324 = 2;
  *(__m128i *)(v324 + 24) = _mm_unpacklo_epi64((__m128i)0x10uLL, (__m128i)0x10uLL);
  sub_14B80(
    *(__int64 **)(v319 + 8),
    off_74820,
    unk_74828,
    unk_7482D,
    unk_7482C,
    (__int64)off_74830,
    *(__int64 *)algn_74838);
  v325 = *(_QWORD *)(a1 + 664);
  v326 = *(_QWORD *)(v325 + 24);
  v327 = *(_QWORD *)(v325 + 16);
  v328 = v326 + 1;
  if ( *(_QWORD *)(v325 + 32) < (unsigned __int64)(v326 + 1) )
  {
    v605 = qvector_reserve();
    v326 = *(_QWORD *)(v325 + 24);
    *(_QWORD *)(v325 + 16) = v605;
    v327 = v605;
    v328 = v326 + 1;
  }
  v329 = _mm_load_si128((const __m128i *)&xmmword_61CE0);
  *(_QWORD *)(v325 + 24) = v328;
  v330 = v327 + 40 * v326;
  *(__m128i *)(v330 + 8) = v329;
  *(_DWORD *)v330 = 2;
  *(__m128i *)(v330 + 24) = _mm_unpacklo_epi64((__m128i)0x10uLL, (__m128i)0x10uLL);
  sub_14B80(
    *(__int64 **)(v325 + 8),
    off_74840,
    unk_74848,
    unk_7484D,
    unk_7484C,
    (__int64)off_74850,
    *(__int64 *)algn_74858);
  v331 = *(_QWORD *)(a1 + 664);
  v332 = *(_QWORD *)(v331 + 24);
  v333 = *(_QWORD *)(v331 + 16);
  v334 = v332 + 1;
  if ( *(_QWORD *)(v331 + 32) < (unsigned __int64)(v332 + 1) )
  {
    v604 = qvector_reserve();
    v332 = *(_QWORD *)(v331 + 24);
    *(_QWORD *)(v331 + 16) = v604;
    v333 = v604;
    v334 = v332 + 1;
  }
  v335 = _mm_load_si128((const __m128i *)&xmmword_61CF0);
  *(_QWORD *)(v331 + 24) = v334;
  v336 = v333 + 40 * v332;
  *(__m128i *)(v336 + 8) = v335;
  *(_DWORD *)v336 = 2;
  *(__m128i *)(v336 + 24) = _mm_unpacklo_epi64((__m128i)0x10uLL, (__m128i)0x10uLL);
  sub_14B80(
    *(__int64 **)(v331 + 8),
    off_74860,
    unk_74868,
    unk_7486D,
    unk_7486C,
    (__int64)off_74870,
    *(__int64 *)algn_74878);
  v337 = *(_QWORD *)(a1 + 664);
  switch ( unk_7476D )
  {
    case 2:
      v338 = 4;
      break;
    case 7:
      v338 = 8;
      break;
    case 1:
      v338 = 2;
      break;
    default:
LABEL_349:
      if ( under_debugger )
        goto LABEL_420;
      do
      {
LABEL_350:
        interr();
LABEL_351:
        ;
      }
      while ( !under_debugger );
LABEL_420:
      BUG();
  }
  v339 = *(_QWORD *)(v337 + 24);
  v340 = *(_QWORD *)(v337 + 16);
  v341 = v339 + 1;
  if ( *(_QWORD *)(v337 + 32) < (unsigned __int64)(v339 + 1) )
  {
    v630 = qvector_reserve();
    v339 = *(_QWORD *)(v337 + 24);
    *(_QWORD *)(v337 + 16) = v630;
    v340 = v630;
    v341 = v339 + 1;
  }
  v342 = _mm_load_si128((const __m128i *)&xmmword_61D00);
  *(_QWORD *)(v337 + 24) = v341;
  v343 = v340 + 40 * v339;
  *(_DWORD *)v343 = 0;
  v344 = off_74760;
  *(__m128i *)(v343 + 8) = v342;
  v345 = unk_74768;
  v346 = off_74770;
  v347 = unk_7476C;
  v348 = unk_7476D;
  *(_QWORD *)(v343 + 32) = v338;
  *(_QWORD *)(v343 + 24) = 4;
  sub_14B80(*(__int64 **)(v337 + 8), v344, v345, v348, v347, (__int64)v346, unk_74778);
  v349 = *(_QWORD *)(a1 + 664);
  v350 = *(_QWORD *)(v349 + 24);
  v351 = *(_QWORD *)(v349 + 16);
  v352 = v350 + 1;
  if ( *(_QWORD *)(v349 + 32) < (unsigned __int64)(v350 + 1) )
  {
    v612 = qvector_reserve();
    v350 = *(_QWORD *)(v349 + 24);
    *(_QWORD *)(v349 + 16) = v612;
    v351 = v612;
    v352 = v350 + 1;
  }
  v353 = _mm_load_si128((const __m128i *)&xmmword_61A50);
  v354 = v351 + 40 * v350;
  *(_QWORD *)(v349 + 24) = v352;
  *(_DWORD *)v354 = 2;
  *(__m128i *)(v354 + 8) = v353;
  *(__m128i *)(v354 + 24) = _mm_unpacklo_epi64((__m128i)8uLL, (__m128i)8uLL);
  sub_14B80(
    *(__int64 **)(v349 + 8),
    off_74660,
    unk_74668,
    unk_7466D,
    unk_7466C,
    (__int64)off_74670,
    *(__int64 *)algn_74678);
  v355 = *(_QWORD *)(a1 + 664);
  v356 = *(_QWORD *)(v355 + 24);
  v357 = *(_QWORD *)(v355 + 16);
  v358 = v356 + 1;
  if ( *(_QWORD *)(v355 + 32) < (unsigned __int64)(v356 + 1) )
  {
    v620 = qvector_reserve();
    v356 = *(_QWORD *)(v355 + 24);
    *(_QWORD *)(v355 + 16) = v620;
    v357 = v620;
    v358 = v356 + 1;
  }
  *(_QWORD *)(v355 + 24) = v358;
  v359 = _mm_load_si128((const __m128i *)&xmmword_61A60);
  v360 = v357 + 40 * v356;
  *(_DWORD *)v360 = 2;
  *(__m128i *)(v360 + 8) = v359;
  *(__m128i *)(v360 + 24) = _mm_unpacklo_epi64((__m128i)8uLL, (__m128i)8uLL);
  sub_14B80(
    *(__int64 **)(v355 + 8),
    off_74680,
    unk_74688,
    unk_7468D,
    unk_7468C,
    (__int64)off_74690,
    *(__int64 *)algn_74698);
  v361 = *(_QWORD *)(a1 + 664);
  v362 = *(_QWORD *)(v361 + 24);
  v363 = *(_QWORD *)(v361 + 16);
  v364 = v362 + 1;
  if ( *(_QWORD *)(v361 + 32) < (unsigned __int64)(v362 + 1) )
  {
    v619 = qvector_reserve();
    v362 = *(_QWORD *)(v361 + 24);
    *(_QWORD *)(v361 + 16) = v619;
    v363 = v619;
    v364 = v362 + 1;
  }
  *(_QWORD *)(v361 + 24) = v364;
  v365 = _mm_load_si128((const __m128i *)&xmmword_61A70);
  v366 = v363 + 40 * v362;
  *(_DWORD *)v366 = 2;
  *(__m128i *)(v366 + 8) = v365;
  *(__m128i *)(v366 + 24) = _mm_unpacklo_epi64((__m128i)8uLL, (__m128i)8uLL);
  sub_14B80(
    *(__int64 **)(v361 + 8),
    off_746A0,
    unk_746A8,
    unk_746AD,
    unk_746AC,
    (__int64)off_746B0,
    *(__int64 *)algn_746B8);
  v367 = *(_QWORD *)(a1 + 664);
  v368 = *(_QWORD *)(v367 + 24);
  v369 = *(_QWORD *)(v367 + 16);
  v370 = v368 + 1;
  if ( *(_QWORD *)(v367 + 32) < (unsigned __int64)(v368 + 1) )
  {
    v618 = qvector_reserve();
    v368 = *(_QWORD *)(v367 + 24);
    *(_QWORD *)(v367 + 16) = v618;
    v369 = v618;
    v370 = v368 + 1;
  }
  *(_QWORD *)(v367 + 24) = v370;
  v371 = _mm_load_si128((const __m128i *)&xmmword_61A80);
  v372 = v369 + 40 * v368;
  *(_DWORD *)v372 = 2;
  *(__m128i *)(v372 + 8) = v371;
  *(__m128i *)(v372 + 24) = _mm_unpacklo_epi64((__m128i)8uLL, (__m128i)8uLL);
  sub_14B80(
    *(__int64 **)(v367 + 8),
    off_746C0,
    unk_746C8,
    unk_746CD,
    unk_746CC,
    (__int64)off_746D0,
    *(__int64 *)algn_746D8);
  v373 = *(_QWORD *)(a1 + 664);
  v374 = *(_QWORD *)(v373 + 24);
  v375 = *(_QWORD *)(v373 + 16);
  v376 = v374 + 1;
  if ( *(_QWORD *)(v373 + 32) < (unsigned __int64)(v374 + 1) )
  {
    v617 = qvector_reserve();
    v374 = *(_QWORD *)(v373 + 24);
    *(_QWORD *)(v373 + 16) = v617;
    v375 = v617;
    v376 = v374 + 1;
  }
  *(_QWORD *)(v373 + 24) = v376;
  v377 = _mm_load_si128((const __m128i *)&xmmword_61A90);
  v378 = v375 + 40 * v374;
  *(_DWORD *)v378 = 2;
  *(__m128i *)(v378 + 8) = v377;
  *(__m128i *)(v378 + 24) = _mm_unpacklo_epi64((__m128i)8uLL, (__m128i)8uLL);
  sub_14B80(
    *(__int64 **)(v373 + 8),
    off_746E0,
    unk_746E8,
    unk_746ED,
    unk_746EC,
    (__int64)off_746F0,
    *(__int64 *)algn_746F8);
  v379 = *(_QWORD *)(a1 + 664);
  v380 = *(_QWORD *)(v379 + 24);
  v381 = *(_QWORD *)(v379 + 16);
  v382 = v380 + 1;
  if ( *(_QWORD *)(v379 + 32) < (unsigned __int64)(v380 + 1) )
  {
    v627 = qvector_reserve();
    v380 = *(_QWORD *)(v379 + 24);
    *(_QWORD *)(v379 + 16) = v627;
    v381 = v627;
    v382 = v380 + 1;
  }
  *(_QWORD *)(v379 + 24) = v382;
  v383 = _mm_load_si128((const __m128i *)&xmmword_61AA0);
  v384 = v381 + 40 * v380;
  *(_DWORD *)v384 = 2;
  *(__m128i *)(v384 + 8) = v383;
  *(__m128i *)(v384 + 24) = _mm_unpacklo_epi64((__m128i)8uLL, (__m128i)8uLL);
  sub_14B80(
    *(__int64 **)(v379 + 8),
    off_74700,
    unk_74708,
    unk_7470D,
    unk_7470C,
    (__int64)off_74710,
    *(__int64 *)algn_74718);
  v385 = *(_QWORD *)(a1 + 664);
  v386 = *(_QWORD *)(v385 + 24);
  v387 = *(_QWORD *)(v385 + 16);
  v388 = v386 + 1;
  if ( *(_QWORD *)(v385 + 32) < (unsigned __int64)(v386 + 1) )
  {
    v626 = qvector_reserve();
    v386 = *(_QWORD *)(v385 + 24);
    *(_QWORD *)(v385 + 16) = v626;
    v387 = v626;
    v388 = v386 + 1;
  }
  *(_QWORD *)(v385 + 24) = v388;
  v389 = _mm_load_si128((const __m128i *)&xmmword_61AB0);
  v390 = v387 + 40 * v386;
  *(_DWORD *)v390 = 2;
  *(__m128i *)(v390 + 8) = v389;
  *(__m128i *)(v390 + 24) = _mm_unpacklo_epi64((__m128i)8uLL, (__m128i)8uLL);
  sub_14B80(
    *(__int64 **)(v385 + 8),
    off_74720,
    unk_74728,
    unk_7472D,
    unk_7472C,
    (__int64)off_74730,
    *(__int64 *)algn_74738);
  v391 = *(_QWORD *)(a1 + 664);
  v392 = *(_QWORD *)(v391 + 24);
  v393 = *(_QWORD *)(v391 + 16);
  v394 = v392 + 1;
  if ( *(_QWORD *)(v391 + 32) < (unsigned __int64)(v392 + 1) )
  {
    v625 = qvector_reserve();
    v392 = *(_QWORD *)(v391 + 24);
    *(_QWORD *)(v391 + 16) = v625;
    v393 = v625;
    v394 = v392 + 1;
  }
  *(_QWORD *)(v391 + 24) = v394;
  v395 = _mm_load_si128((const __m128i *)&xmmword_61AC0);
  v396 = v393 + 40 * v392;
  *(_DWORD *)v396 = 2;
  *(__m128i *)(v396 + 8) = v395;
  *(__m128i *)(v396 + 24) = _mm_unpacklo_epi64((__m128i)8uLL, (__m128i)8uLL);
  sub_14B80(
    *(__int64 **)(v391 + 8),
    off_74740,
    unk_74748,
    unk_7474D,
    unk_7474C,
    (__int64)off_74750,
    *(__int64 *)algn_74758);
  return v665;
}

