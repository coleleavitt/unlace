char *__fastcall sub_345A20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8,
        char a9)
{
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 *v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rsi
  char *v16; // rax
  __int64 v17; // rbx
  __m128i v18; // xmm0
  char *result; // rax
  __int64 v20; // rcx
  char *v21; // rax
  __int64 v22; // rcx
  __int64 *v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 *v29; // rax
  __int64 v30; // rcx
  __int64 *v31; // rax
  __int64 v32; // rcx
  char *v33; // rax
  __int64 v34; // rcx
  char *v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // r8
  __int64 v41; // rcx
  char *v42; // rax
  __int64 v43; // rcx
  __int64 *v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // r8
  unsigned int v50; // edx
  __int64 v51; // rcx
  __int64 v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // rsi
  char *v55; // rax
  unsigned int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rdi
  __int64 v59; // rax
  int v60; // esi
  int *v61; // rax
  __int64 v62; // rcx
  char *v63; // rax
  __int64 v64; // rcx
  __int64 *v65; // rax
  unsigned int v66; // edx
  __int64 v67; // rsi
  _QWORD *v68; // rbx
  __int64 v69; // rcx
  __int64 v70; // rsi
  __int64 *v71; // rax
  __int64 v72; // rbp
  __m128i v73; // xmm0
  __int64 v74; // rcx
  char *v75; // rax
  unsigned int v76; // eax
  __int64 v77; // rcx
  __int64 v78; // rdi
  __int64 v79; // rax
  const __m128i *v80; // rsi
  const char **v81; // rax
  unsigned int v82; // eax
  __int64 v83; // rcx
  __int64 v84; // rdi
  __int64 v85; // rax
  unsigned __int64 *v86; // rsi
  int *v87; // rax
  unsigned int v88; // eax
  __int64 v89; // rcx
  __int64 v90; // rdi
  __int64 v91; // rax
  __int64 v92; // rsi
  char *v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rbx
  __int64 *v96; // rax
  __int64 v97; // rbp
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rbx
  __int64 *v101; // rax
  __int64 v102; // rbp
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rbx
  __int64 *v106; // rax
  __int64 v107; // rbp
  __int64 v108; // rax
  unsigned int v109; // eax
  __int64 v110; // rcx
  __int64 v111; // rdi
  __int64 v112; // rax
  __int64 v113; // rsi
  __int64 *v114; // rax
  __int64 v115; // rsi
  __int64 v116; // rax
  unsigned int v117; // eax
  __int64 v118; // rcx
  _QWORD *v119; // rbp
  __int64 v120; // rax
  _DWORD *v121; // r12
  int *v122; // rax
  int v123; // r13d
  __int64 v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 v129; // rcx
  char *v130; // rax
  __int64 v131; // rcx
  char *v132; // rax
  __int64 v133; // rcx
  char *v134; // rax
  unsigned int v135; // eax
  __int64 v136; // rcx
  __int64 v137; // rdi
  __int64 v138; // rax
  __int64 v139; // rsi
  char *v140; // rax
  __int64 v141; // rcx
  __int64 **v142; // rax
  __int64 v143; // rbx
  __int64 v144; // rax
  __int64 v145; // rcx
  char *v146; // rax
  unsigned int v147; // eax
  __int64 v148; // rsi
  __int64 v149; // rdi
  __int64 v150; // rsi
  __int64 v151; // rax
  char *v152; // rax
  const __m128i *v153; // roff
  unsigned int v154; // eax
  char v155; // si
  __int64 v156; // rax
  char *v157; // rax
  const __m128i *v158; // roff
  __int64 v159; // rcx
  char *v160; // rax
  unsigned int v161; // eax
  __int64 v162; // rcx
  __int64 v163; // rdi
  __int64 v164; // rax
  __int64 v165; // rsi
  char *v166; // rax
  unsigned int v167; // eax
  __int64 v168; // rcx
  __int64 v169; // rdi
  __int64 v170; // rax
  int v171; // esi
  char *v172; // rax
  __int64 v173; // rax
  __int64 v174; // rcx
  unsigned __int64 v175; // rbx
  char *v176; // rax
  unsigned __int8 v177; // bp
  __int64 v178; // rax
  __int64 v179; // rcx
  char *v180; // rax
  __int64 v181; // rcx
  char *v182; // rax
  __int64 v183; // rcx
  char *v184; // rax
  unsigned int v185; // eax
  __int64 v186; // rcx
  __int64 v187; // rdi
  __int64 v188; // rax
  __int64 v189; // rsi
  char *v190; // rax
  unsigned int v191; // eax
  __int64 v192; // rcx
  __int64 v193; // rdi
  __int64 v194; // r8
  __int64 v195; // rsi
  __int64 v196; // rcx
  int v197; // r10d
  __int64 v198; // r8
  bool v199; // cl
  __int64 v200; // rax
  __int64 v201; // r8
  __int64 v202; // r9
  __int64 *v203; // rax
  unsigned int v204; // eax
  __int64 v205; // rcx
  __int64 v206; // rbx
  __int64 v207; // rax
  __int64 v208; // rbp
  char *v209; // rax
  _QWORD *v210; // r12
  __int64 v211; // rax
  __int64 v212; // rcx
  char *v213; // rax
  __int64 v214; // rbx
  __int64 v215; // rax
  __int64 v216; // rbx
  __int64 v217; // rax
  __int64 v218; // rcx
  char *v219; // rax
  __int64 v220; // rcx
  __int64 *v221; // rax
  unsigned int v222; // eax
  __int64 v223; // rsi
  __int64 v224; // rdi
  __int64 v225; // rcx
  __int64 v226; // rsi
  __int64 v227; // rax
  __int64 v228; // r8
  char *v229; // rax
  __int64 v230; // rcx
  char *v231; // rax
  __int64 v232; // rcx
  int *v233; // rax
  unsigned int v234; // eax
  __int64 v235; // rcx
  __int64 v236; // rdi
  __int64 v237; // rax
  __int64 v238; // rsi
  char *v239; // rax
  __int64 v240; // rcx
  char *v241; // rax
  __int64 v242; // rcx
  __int64 v243; // rbx
  __int64 *v244; // rax
  __int64 v245; // rbp
  __int64 v246; // rax
  __int64 v247; // rcx
  char *v248; // rax
  unsigned int v249; // eax
  __int64 v250; // rcx
  _QWORD *v251; // rbx
  __int64 v252; // rsi
  __int64 v253; // rbp
  __int64 v254; // rcx
  __int64 v255; // r12
  __int64 v256; // rax
  int v257; // r13d
  char *v258; // rax
  unsigned int v259; // r14d
  __int64 v260; // rax
  __int64 v261; // rcx
  char *v262; // rax
  unsigned int v263; // eax
  __int64 v264; // rcx
  __int64 v265; // rdi
  __int64 v266; // rax
  int v267; // esi
  char *v268; // rax
  __int64 v269; // rcx
  char *v270; // rax
  unsigned int v271; // eax
  __int64 v272; // rcx
  __int64 v273; // rdi
  __int64 v274; // rax
  unsigned __int64 v275; // rsi
  __int64 *v276; // rax
  unsigned int v277; // eax
  __int64 v278; // rcx
  __int64 v279; // rdi
  __int64 v280; // rax
  __int64 v281; // rsi
  char *v282; // rax
  unsigned int v283; // edx
  __int64 v284; // rsi
  __int64 v285; // rdi
  __int64 v286; // rcx
  __int64 *v287; // rsi
  char *v288; // rax
  int v289; // r12d
  __int64 v290; // rax
  __int64 v291; // rcx
  char *v292; // rax
  unsigned __int64 v293; // rbx
  __int64 v294; // rax
  __int64 v295; // rcx
  char *v296; // rax
  __int64 v297; // rbx
  __int64 v298; // rax
  unsigned int v299; // eax
  __int64 v300; // rcx
  __int64 v301; // rdi
  __int64 v302; // rax
  __int64 v303; // rsi
  __int64 *v304; // rax
  __int64 v305; // rbx
  __int64 v306; // rax
  unsigned int v307; // eax
  __int64 v308; // rcx
  __int64 v309; // rdi
  __int64 v310; // rax
  const __m128i *v311; // rsi
  int *v312; // rax
  __int64 v313; // rcx
  char *v314; // rax
  __int64 v315; // rcx
  __int64 **v316; // rax
  unsigned int v317; // eax
  __int64 v318; // rsi
  __int64 v319; // rdi
  __int64 v320; // rcx
  __int64 v321; // rsi
  __int64 v322; // rax
  __int64 v323; // r8
  char *v324; // rax
  __int64 v325; // rcx
  __int64 *v326; // rax
  unsigned int v327; // eax
  __int64 v328; // rcx
  __int64 v329; // rbx
  __int64 v330; // rax
  int v331; // ebp
  char *v332; // rax
  unsigned __int8 v333; // r12
  __int64 v334; // rax
  int v335; // r8d
  int v336; // r9d
  __int64 v337; // rcx
  __int64 v338; // rbx
  char *v339; // rax
  _QWORD *v340; // rbp
  __int64 v341; // rax
  __int64 v342; // rbx
  __int64 v343; // rax
  __int64 v344; // rdx
  __int64 v345; // rcx
  __int64 v346; // r8
  __int64 v347; // rcx
  unsigned __int64 **v348; // rax
  unsigned int v349; // eax
  __int64 v350; // rsi
  __int64 v351; // rdi
  __int64 v352; // rcx
  __int64 v353; // rsi
  __int64 v354; // r8
  __int64 v355; // r10
  __int64 v356; // rcx
  int v357; // r11d
  __int64 v358; // rax
  unsigned int v359; // r8d
  unsigned int *v360; // rax
  unsigned int v361; // eax
  __int64 v362; // rcx
  __int64 v363; // rdi
  __int64 v364; // rax
  unsigned __int64 v365; // rsi
  char *v366; // rax
  __int64 v367; // rcx
  _QWORD *v368; // rbx
  char *v369; // rax
  __int64 v370; // rcx
  char *v371; // rax
  __int64 v372; // rbx
  __int64 v373; // rax
  __int64 v374; // rbx
  __int64 v375; // rax
  __int64 v376; // rcx
  unsigned __int64 *v377; // rax
  __int64 **v378; // rax
  __int64 *v379; // rax
  __int64 v380; // rax
  __int64 v381; // rcx
  unsigned __int64 v382; // rbx
  __int64 *v383; // rax
  __int64 v384; // rbp
  __int64 v385; // rax
  __int64 v386; // rcx
  __int64 **v387; // rax
  __int64 **v388; // rax
  __int64 v389; // rcx
  __int64 *v390; // rax
  __int64 v391; // rcx
  __int64 **v392; // rax
  __int64 v393; // rcx
  char *v394; // rax
  __int64 v395; // rcx
  char *v396; // rax
  unsigned int v397; // eax
  __int64 v398; // rcx
  __int64 v399; // rdi
  __int64 v400; // rax
  _QWORD *v401; // rsi
  int *v402; // rax
  _QWORD ***v403; // rax
  _QWORD *v404; // rbx
  unsigned int v405; // edx
  __int64 v406; // rcx
  _QWORD *v407; // rsi
  char *v408; // rax
  _QWORD *v409; // rax
  __int64 v410; // rcx
  int *v411; // rax
  unsigned int v412; // eax
  __int64 v413; // rsi
  __int64 v414; // rdi
  __int64 v415; // rcx
  __int64 v416; // rsi
  __int64 v417; // r8
  __int64 v418; // r10
  __int64 v419; // rcx
  __int64 v420; // r11
  __int64 v421; // rax
  __int64 v422; // r8
  __int64 *v423; // rax
  unsigned int v424; // eax
  __int64 v425; // rcx
  __int64 v426; // rdi
  __int64 v427; // r8
  __int64 v428; // rsi
  __int64 v429; // rcx
  __int64 v430; // r9
  __int64 v431; // rax
  char v432; // cl
  __int64 *v433; // rax
  unsigned int v434; // eax
  __int64 v435; // rsi
  _QWORD *v436; // rdi
  int v437; // esi
  __int64 v438; // rax
  char *v439; // rax
  const __m128i *v440; // roff
  __int64 v441; // rcx
  __int64 *v442; // rax
  unsigned int v443; // eax
  __int64 v444; // rsi
  __int64 v445; // rdi
  __int64 v446; // rcx
  int v447; // esi
  __int64 v448; // rax
  int v449; // r8d
  int *v450; // rax
  __int64 v451; // rcx
  __int64 v452; // rbx
  char *v453; // rax
  __int64 v454; // rbp
  __int64 v455; // r12
  __int64 v456; // rax
  unsigned int v457; // eax
  __int64 v458; // rsi
  __int64 v459; // rdi
  __int64 v460; // rcx
  unsigned int v461; // esi
  __int64 v462; // rax
  _QWORD *v463; // r8
  unsigned int *v464; // rax
  __int64 v465; // rcx
  unsigned __int64 *v466; // rax
  unsigned int v467; // eax
  __int64 v468; // rcx
  _QWORD *v469; // rdi
  __int64 v470; // rax
  __m128i *v471; // rsi
  char *v472; // rax
  __int64 v473; // rcx
  __int64 *v474; // rbx
  __int64 **v475; // rax
  unsigned int v476; // eax
  __int64 v477; // rcx
  _QWORD *v478; // rdi
  __int64 v479; // rsi
  __int64 *v480; // r9
  __int64 v481; // rcx
  __int64 v482; // rsi
  __int64 v483; // rax
  __int64 v484; // rcx
  __int64 *v485; // rax
  unsigned int v486; // edx
  __int64 v487; // rcx
  __int64 *v488; // rbx
  __int64 v489; // rsi
  __m128i *v490; // r12
  __int64 v491; // rcx
  unsigned __int64 *v492; // rsi
  __int64 *v493; // rax
  __int64 v494; // rax
  unsigned __int64 v495; // rdx
  __int64 v496; // rbp
  _QWORD **v497; // rax
  _QWORD *v498; // rsi
  _QWORD *v499; // rdx
  _QWORD *v500; // rcx
  _QWORD *mm; // rax
  _QWORD ***v502; // rax
  _QWORD *v503; // rbx
  unsigned int v504; // edx
  __int64 v505; // rcx
  _QWORD *v506; // rsi
  char *v507; // rax
  _QWORD *v508; // rax
  unsigned int v509; // edx
  __int64 v510; // rcx
  _QWORD *v511; // rsi
  char *v512; // rax
  __int64 *v513; // rdx
  __int64 v514; // rax
  unsigned int v515; // eax
  __int64 v516; // rcx
  __int64 v517; // rdi
  __int64 v518; // rsi
  unsigned int v519; // r10d
  __int64 v520; // rcx
  int v521; // r11d
  __int64 v522; // rsi
  __int64 v523; // rcx
  __int64 v524; // rax
  __int64 v525; // r8
  __int64 v526; // r9
  int *v527; // rax
  __int64 v528; // rcx
  int *v529; // rax
  unsigned int v530; // eax
  __int64 v531; // rsi
  _QWORD *v532; // rdi
  __int64 v533; // rcx
  __int64 v534; // rsi
  __int64 v535; // rax
  const char *v536; // r8
  int *v537; // rax
  __int64 v538; // rcx
  unsigned __int64 *v539; // rax
  unsigned int v540; // eax
  __int64 v541; // rsi
  __int64 *v542; // rdi
  __int64 v543; // rcx
  __int64 v544; // rsi
  __int64 v545; // r8
  int v546; // r10d
  __int64 v547; // rcx
  unsigned int v548; // r11d
  __int64 v549; // rax
  __int64 v550; // r8
  __int64 v551; // r9
  char *v552; // rax
  unsigned int v553; // eax
  __int64 v554; // rcx
  __int64 *v555; // rbx
  __int64 v556; // rax
  __int64 v557; // rbp
  signed int *v558; // rax
  signed int v559; // r12d
  _DWORD *v560; // rax
  unsigned int v561; // eax
  __int64 v562; // rcx
  __int64 v563; // rdi
  __int64 v564; // rax
  __int64 v565; // rsi
  char *v566; // rax
  unsigned int v567; // eax
  __int64 v568; // rsi
  __int64 v569; // rbx
  __int64 v570; // rcx
  __int64 v571; // rbp
  __int64 v572; // rax
  unsigned int v573; // r12d
  char *v574; // rax
  _BOOL4 v575; // r13d
  __int64 v576; // rax
  unsigned int v577; // edx
  __int64 v578; // rcx
  __int64 *v579; // rax
  unsigned int v580; // edx
  __int64 v581; // rcx
  char *v582; // rax
  _QWORD *v583; // r12
  __int64 v584; // rax
  unsigned int v585; // eax
  __int64 v586; // rcx
  __int64 v587; // rbx
  __int64 v588; // rax
  __int64 v589; // rbp
  char *v590; // rax
  unsigned int v591; // r12d
  __int64 v592; // rax
  __int64 v593; // rcx
  unsigned __int64 v594; // rbx
  int *v595; // rax
  int v596; // ebp
  __int64 v597; // rax
  __int64 v598; // rcx
  unsigned __int64 v599; // rbx
  int *v600; // rax
  int v601; // ebp
  __int64 v602; // rax
  __int64 v603; // rcx
  unsigned __int64 v604; // rbx
  int *v605; // rax
  int v606; // ebp
  __int64 v607; // rax
  unsigned int v608; // edx
  __int64 v609; // rcx
  unsigned __int64 **v610; // rdi
  __int64 ***v611; // rax
  __int64 **v612; // rax
  unsigned int v613; // edx
  __int64 v614; // rcx
  unsigned __int64 *v615; // rbx
  __int64 v616; // rsi
  __m128i *v617; // rbp
  __int64 v618; // rcx
  const __m128i *v619; // rsi
  char *v620; // rax
  __int64 v621; // r12
  __m128i v622; // xmm0
  __int64 v623; // rsi
  __m128i v624; // xmm1
  char v625; // al
  __int64 v626; // rdx
  __m128i v627; // xmm1
  __int64 v628; // rcx
  __int64 *v629; // rax
  __int64 v630; // rcx
  __int64 *v631; // rax
  __int64 v632; // rcx
  __int64 *v633; // rax
  unsigned int v634; // eax
  __int64 v635; // rcx
  _QWORD *v636; // rdi
  __int64 v637; // rax
  __int64 v638; // rsi
  __int64 *v639; // rax
  __int64 v640; // rbx
  __int64 v641; // rax
  __int64 v642; // rcx
  int *v643; // rax
  __int64 v644; // rcx
  __int64 *v645; // rax
  __int64 v646; // rbx
  int v647; // eax
  unsigned int v648; // edx
  __int64 v649; // rcx
  _QWORD *v650; // rsi
  char *v651; // rax
  _QWORD *v652; // rax
  _QWORD ***v653; // rax
  _QWORD *v654; // rbx
  __int64 v655; // rcx
  __int64 **v656; // rax
  __int64 v657; // rcx
  __int64 **v658; // rax
  unsigned int v659; // edx
  __int64 v660; // rcx
  __int64 *v661; // rbp
  __int64 v662; // rsi
  __int64 v663; // rdi
  __int64 v664; // rcx
  __int64 v665; // rsi
  unsigned int *v666; // rax
  __int64 v667; // rbx
  __m128i v668; // xmm0
  _QWORD ***v669; // rax
  _QWORD *v670; // rbx
  unsigned int v671; // edx
  __int64 v672; // rcx
  _QWORD *v673; // rsi
  char *v674; // rax
  _QWORD *v675; // rax
  unsigned int v676; // edx
  __int64 v677; // rcx
  _QWORD *v678; // rsi
  char *v679; // rax
  __int64 *v680; // rdx
  __int64 v681; // rax
  __int64 **v682; // rax
  unsigned int v683; // edx
  __int64 v684; // rcx
  _QWORD *v685; // rbx
  __int64 v686; // rdx
  __int64 *v687; // rax
  __int64 v688; // rbp
  __m128i v689; // xmm0
  unsigned int v690; // eax
  __int64 v691; // rcx
  _DWORD *v692; // rbx
  __int64 v693; // rax
  unsigned int v694; // ebp
  char *v695; // rax
  int v696; // r12d
  _QWORD *v697; // rax
  unsigned int v698; // eax
  __int64 v699; // rcx
  __int64 v700; // rbx
  __int64 v701; // rax
  _BYTE *v702; // rbp
  char *v703; // rax
  char v704; // r12
  __int64 v705; // rax
  unsigned int v706; // eax
  __int64 v707; // rcx
  __int64 v708; // rbx
  __int64 v709; // rax
  _BYTE *v710; // rbp
  char *v711; // rax
  char v712; // r12
  __int64 v713; // rax
  __int64 v714; // rcx
  int **v715; // rax
  unsigned int v716; // eax
  __int64 v717; // rsi
  int *v718; // rdi
  __int64 v719; // rcx
  unsigned __int64 v720; // rsi
  __int64 v721; // rax
  int *v722; // r8
  unsigned __int64 *v723; // rax
  int *v724; // rbx
  _QWORD *v725; // rax
  __int64 v726; // rcx
  __int64 *v727; // rax
  __int64 v728; // rcx
  __int64 *v729; // rax
  __int64 v730; // rsi
  __int64 v731; // rdi
  __int64 v732; // rcx
  int v733; // esi
  int v734; // r8d
  _QWORD **v735; // rax
  _QWORD *v736; // rsi
  _QWORD *v737; // rdx
  _QWORD *v738; // rcx
  _QWORD *n; // rax
  _QWORD ***v740; // rax
  _QWORD *v741; // rbx
  unsigned int v742; // edx
  __int64 v743; // rcx
  _QWORD *v744; // rsi
  char *v745; // rax
  _QWORD *v746; // rax
  unsigned int v747; // edx
  __int64 v748; // rcx
  _QWORD *v749; // rsi
  char *v750; // rax
  __int64 *v751; // rdx
  __int64 v752; // rax
  __int64 v753; // rcx
  __int64 *v754; // rax
  __int64 v755; // rcx
  __int64 *v756; // rax
  unsigned int v757; // eax
  __int64 v758; // rcx
  _QWORD *v759; // rdi
  __int64 v760; // rax
  int v761; // esi
  int *v762; // rax
  unsigned int v763; // eax
  __int64 v764; // rcx
  unsigned __int8 *v765; // rbx
  __int64 v766; // rax
  unsigned int *v767; // rbp
  unsigned int *v768; // rax
  unsigned int v769; // r12d
  __int64 v770; // rax
  __int64 v771; // rcx
  char *v772; // rax
  __int64 v773; // rcx
  __int64 *v774; // rax
  unsigned __int64 ***v775; // rax
  unsigned int v776; // edx
  __int64 v777; // rcx
  unsigned __int64 **v778; // rdi
  __int64 ***v779; // rax
  __int64 **v780; // rax
  unsigned int v781; // eax
  __int64 v782; // rsi
  __int64 v783; // rdi
  __int64 v784; // rcx
  __int64 v785; // rsi
  __int64 v786; // rax
  unsigned int v787; // r8d
  char *v788; // rax
  unsigned int v789; // eax
  __int64 v790; // rsi
  __int64 v791; // rdi
  __int64 v792; // rcx
  _QWORD *v793; // rsi
  __int64 v794; // rax
  __int64 **v795; // r8
  unsigned __int64 *v796; // rax
  __int64 *v797; // rax
  __int64 v798; // rax
  unsigned __int64 ***v799; // rax
  unsigned int v800; // edx
  __int64 v801; // rcx
  unsigned __int64 **v802; // rdi
  __int64 ***v803; // rax
  __int64 **v804; // rax
  unsigned int v805; // edx
  __int64 v806; // rcx
  __int64 *v807; // r14
  __int64 v808; // rsi
  __m128i *v809; // r13
  __int64 v810; // rcx
  __int64 v811; // rbx
  char *v812; // rax
  __int64 v813; // r15
  __int64 v814; // rax
  __int64 v815; // rax
  __int64 v816; // rcx
  char *v817; // rax
  __int64 v818; // rcx
  __int64 *v819; // rax
  __int64 v820; // rcx
  __int64 *v821; // rax
  __int64 v822; // rcx
  __int64 *v823; // rax
  __int64 v824; // rcx
  __int64 *v825; // rax
  __int64 v826; // rcx
  __int64 *v827; // rax
  __int64 v828; // rcx
  __int64 *v829; // rax
  __int64 v830; // rcx
  __int64 *v831; // rax
  unsigned int v832; // eax
  __int64 v833; // rcx
  __int64 *v834; // rdi
  __int64 v835; // rax
  __int64 v836; // rsi
  __m128i **v837; // rax
  __int64 v838; // rcx
  __int64 ***v839; // rax
  unsigned int v840; // eax
  __int64 v841; // rsi
  __int64 v842; // rdi
  __int64 v843; // rcx
  __int64 v844; // rsi
  __int64 v845; // r8
  signed int v846; // r10d
  __int64 v847; // rcx
  unsigned __int64 **v848; // r11
  __int64 v849; // rax
  int v850; // r8d
  char *v851; // rax
  unsigned int v852; // edx
  __int64 v853; // rsi
  __int64 v854; // rcx
  int v855; // r12d
  char *v856; // rax
  char v857; // r13
  __int64 v858; // rax
  unsigned int v859; // edx
  __int64 v860; // rcx
  int *v861; // rax
  int v862; // r12d
  __int64 v863; // rax
  __int64 v864; // rcx
  unsigned __int8 **v865; // rax
  unsigned int v866; // edx
  __int64 v867; // rcx
  _QWORD *v868; // rsi
  char *v869; // rax
  __int64 *v870; // rdx
  __int64 v871; // rax
  unsigned int v872; // eax
  __int64 v873; // rcx
  __int64 v874; // rdi
  __int64 v875; // rax
  __int64 v876; // rsi
  __int64 *v877; // rax
  __int64 v878; // rcx
  char *v879; // rax
  unsigned int v880; // eax
  __int64 v881; // rcx
  __int64 v882; // rdi
  __int64 v883; // rax
  __int64 v884; // rsi
  char *v885; // rax
  __int64 v886; // rcx
  __int64 *v887; // rax
  unsigned int v888; // eax
  __int64 v889; // rcx
  __int64 v890; // rdi
  __int64 v891; // rax
  __int64 v892; // rsi
  __int64 *v893; // rax
  unsigned int v894; // edx
  __int64 v895; // rsi
  _QWORD *v896; // rdi
  __int64 v897; // rcx
  _QWORD **v898; // rsi
  char *v899; // rax
  _QWORD *v900; // rcx
  unsigned __int64 v901; // rdx
  unsigned __int64 v902; // rax
  unsigned __int64 v903; // rsi
  unsigned int v904; // edx
  __int64 v905; // rcx
  __int64 v906; // rsi
  __int64 v907; // rdi
  __int64 v908; // rcx
  __int64 v909; // rsi
  signed int *v910; // rax
  unsigned int v911; // edx
  __int64 v912; // rcx
  __int64 v913; // rsi
  __int64 v914; // rdi
  __int64 v915; // rcx
  signed int v916; // esi
  __int64 *v917; // rax
  unsigned int v918; // edx
  __int64 v919; // rcx
  __int64 v920; // rsi
  __int64 v921; // rdi
  __int64 v922; // rcx
  __int64 v923; // rsi
  int *v924; // rax
  unsigned int v925; // eax
  __int64 v926; // rcx
  __int64 *v927; // rbx
  __int64 v928; // rax
  __int64 v929; // rdi
  __int64 *v930; // rax
  unsigned int v931; // edx
  __int64 v932; // rcx
  __int64 v933; // rsi
  __int64 v934; // rdi
  __int64 v935; // rcx
  int v936; // esi
  __int64 *v937; // rax
  unsigned int v938; // eax
  __int64 v939; // rcx
  __int64 *v940; // rbx
  __int64 v941; // rax
  _QWORD *v942; // rdi
  __int64 *v943; // rax
  __int64 v944; // rcx
  unsigned __int64 *v945; // rax
  __int64 v946; // rcx
  int **v947; // rax
  __int64 v948; // rcx
  int **v949; // rax
  __int64 v950; // rcx
  int *v951; // rax
  __int64 v952; // rcx
  signed int *v953; // rax
  unsigned int v954; // edx
  __int64 v955; // rcx
  unsigned __int64 *v956; // rbx
  __int64 v957; // rsi
  __m128i *v958; // rbp
  __int64 v959; // rcx
  __int64 v960; // rsi
  char *v961; // rax
  __int64 *v962; // r12
  size_t v963; // r13
  __int64 v964; // r8
  void *v965; // rcx
  int v966; // r15d
  __int64 v967; // r14
  __m128i v968; // xmm0
  __int64 v969; // rax
  unsigned int v970; // edx
  __int64 v971; // rsi
  _QWORD *v972; // rbp
  __int64 v973; // rcx
  _QWORD **v974; // r12
  __int64 *v975; // rax
  _QWORD *v976; // rbx
  _QWORD *v977; // rdx
  __int64 v978; // r13
  __int64 v979; // rcx
  __int64 *v980; // rax
  __int64 v981; // rcx
  __int64 *v982; // rax
  __int64 v983; // rcx
  __int64 **v984; // rax
  __int64 v985; // rcx
  __int64 *v986; // rax
  unsigned int v987; // eax
  __int64 v988; // rsi
  __int64 v989; // rdi
  __int64 v990; // rcx
  __int64 v991; // rsi
  __int64 v992; // rax
  __int64 v993; // r8
  char *v994; // rax
  __int64 v995; // rcx
  __int64 *v996; // rax
  int v997; // ebx
  __int64 v998; // rax
  int v999; // ebx
  unsigned int v1000; // eax
  __int64 v1001; // rcx
  __int128 v1002; // rdi
  __int64 v1003; // rsi
  __int64 v1004; // r9
  __int64 v1005; // rcx
  __int64 v1006; // rax
  __int64 v1007; // rcx
  char *v1008; // rax
  __int64 *v1009; // rdx
  unsigned int v1010; // edx
  __int64 v1011; // rsi
  unsigned __int64 *v1012; // rbx
  __int64 v1013; // rcx
  __m128i *v1014; // rdi
  __int64 *v1015; // rax
  __int64 v1016; // rsi
  unsigned __int64 ***v1017; // rax
  unsigned int v1018; // edx
  __int64 v1019; // rcx
  unsigned __int64 **v1020; // rdi
  __int64 ***v1021; // rax
  __int64 **v1022; // rax
  __int64 v1023; // rcx
  __int64 v1024; // rbx
  __int64 *v1025; // rax
  __int64 v1026; // rbp
  __int64 v1027; // rax
  unsigned int v1028; // eax
  __int64 v1029; // rsi
  unsigned __int64 v1030; // rdi
  __int64 v1031; // rcx
  __int64 *v1032; // rsi
  __int64 v1033; // rax
  int v1034; // r8d
  unsigned int *v1035; // rax
  unsigned int v1036; // edx
  __int64 v1037; // rcx
  unsigned __int64 *v1038; // rbx
  __int64 v1039; // rsi
  __m128i *v1040; // rdi
  __int64 v1041; // rcx
  __int64 v1042; // rsi
  char *v1043; // rax
  int *v1044; // rax
  int v1045; // edx
  int v1046; // eax
  unsigned int v1047; // edx
  __int64 v1048; // rsi
  _QWORD *v1049; // rbp
  __int64 v1050; // rcx
  _QWORD **v1051; // r12
  __int64 *v1052; // rax
  _QWORD *v1053; // rbx
  _QWORD *v1054; // rdx
  __int64 v1055; // r13
  __int64 v1056; // rcx
  __int64 *v1057; // rax
  __int64 v1058; // rcx
  int *v1059; // rax
  __int64 v1060; // rcx
  char *v1061; // rax
  __int64 v1062; // rcx
  const char **v1063; // rax
  unsigned int v1064; // edx
  __int64 v1065; // rcx
  _QWORD *v1066; // rsi
  char *v1067; // rax
  __int64 *v1068; // rdx
  __int64 v1069; // rax
  __int64 v1070; // rcx
  __int64 **v1071; // rax
  unsigned int v1072; // eax
  __int64 v1073; // rsi
  __int64 v1074; // rdi
  int v1075; // esi
  __int64 v1076; // rax
  char *v1077; // rax
  const __m128i *v1078; // roff
  unsigned int v1079; // eax
  __int64 v1080; // rsi
  __int64 v1081; // rdi
  int v1082; // esi
  __int64 v1083; // rax
  char *v1084; // rax
  const __m128i *v1085; // roff
  unsigned int v1086; // eax
  __int64 v1087; // rcx
  __int64 v1088; // rbx
  __int64 v1089; // rsi
  __int64 v1090; // rbp
  __int64 v1091; // rcx
  int v1092; // r12d
  __int64 v1093; // rax
  __int64 v1094; // r13
  __int32 *v1095; // rax
  __int32 v1096; // r14d
  int v1097; // eax
  __int64 v1098; // rcx
  unsigned __int8 **v1099; // rax
  unsigned int v1100; // edx
  __int64 v1101; // rsi
  __int64 v1102; // rbp
  __int64 v1103; // rcx
  __int64 v1104; // r12
  const char *v1105; // r13
  __int64 v1106; // rcx
  char *v1107; // rax
  _DWORD *v1108; // r14
  unsigned int v1109; // eax
  __int64 v1110; // rsi
  __int64 v1111; // rdi
  __int64 v1112; // rcx
  __int64 v1113; // rsi
  __int64 v1114; // rax
  __int64 v1115; // r8
  int *v1116; // rax
  unsigned int v1117; // edx
  __int64 v1118; // rcx
  _QWORD *v1119; // rsi
  char *v1120; // rax
  _QWORD *v1121; // rax
  unsigned int v1122; // edx
  __int64 v1123; // rcx
  _QWORD *v1124; // rsi
  char *v1125; // rax
  __int64 *v1126; // rdx
  __int64 v1127; // rax
  __int64 **v1128; // rax
  __int64 v1129; // rcx
  __int64 *v1130; // rax
  __int64 v1131; // rcx
  __int64 **v1132; // rax
  __int64 v1133; // rcx
  __int64 *v1134; // rax
  unsigned int v1135; // eax
  __int64 v1136; // rcx
  __int64 v1137; // rdi
  __int64 v1138; // rax
  _QWORD *v1139; // rsi
  __int64 *v1140; // rax
  unsigned int v1141; // eax
  __int64 v1142; // rcx
  __int64 v1143; // rdi
  __int64 v1144; // rax
  const char *v1145; // rsi
  char *v1146; // rax
  const __m128i *v1147; // roff
  unsigned int v1148; // edx
  __int64 v1149; // rsi
  _QWORD *v1150; // rbp
  __int64 v1151; // rcx
  _QWORD **v1152; // r13
  __int64 **v1153; // rax
  _QWORD *v1154; // rbx
  _QWORD *v1155; // rdx
  __int64 *v1156; // r12
  char *v1157; // r14
  char *v1158; // r15
  unsigned int v1159; // eax
  unsigned int v1160; // eax
  __int64 v1161; // rcx
  __int64 *v1162; // rax
  __int64 v1163; // rcx
  int *v1164; // rax
  __int64 v1165; // rcx
  int **v1166; // rax
  __int64 v1167; // rcx
  unsigned int *v1168; // rax
  __int64 v1169; // rcx
  char *v1170; // rax
  unsigned int v1171; // eax
  __int64 v1172; // rcx
  char *v1173; // rdi
  __int64 v1174; // rax
  _QWORD *v1175; // rsi
  char *v1176; // rax
  _QWORD ***v1177; // rax
  _QWORD *v1178; // rbx
  unsigned int v1179; // edx
  __int64 v1180; // rcx
  _QWORD *v1181; // rsi
  char *v1182; // rax
  _QWORD *v1183; // rax
  __int64 v1184; // rcx
  __int64 *v1185; // rax
  __int64 v1186; // rcx
  __int64 **v1187; // rax
  unsigned int v1188; // eax
  __int64 v1189; // rcx
  _QWORD *v1190; // rbx
  __int64 v1191; // rax
  _QWORD *v1192; // rbp
  char *v1193; // rax
  int v1194; // r12d
  __int64 v1195; // rax
  __int64 *v1196; // rax
  __int64 v1197; // rax
  unsigned int v1198; // edx
  __int64 v1199; // rcx
  unsigned __int64 **v1200; // rdi
  __int64 ***v1201; // rax
  __int64 **v1202; // rax
  unsigned int v1203; // edx
  __int64 v1204; // rcx
  __int64 *v1205; // rbx
  __int64 v1206; // rsi
  __m128i *v1207; // r12
  __int64 v1208; // rcx
  __int64 *v1209; // rsi
  char *v1210; // rax
  __int64 v1211; // r13
  unsigned __int64 v1212; // rax
  __int64 v1213; // r14
  void *v1214; // rcx
  __m128i v1215; // xmm0
  __int64 v1216; // rcx
  char *v1217; // rax
  __int64 v1218; // rcx
  int **v1219; // rax
  __int64 v1220; // rcx
  int **v1221; // rax
  __int64 **v1222; // rax
  __int64 *v1223; // rax
  __int64 v1224; // rdx
  unsigned __int64 v1225; // rax
  __int64 v1226; // rcx
  __int64 *v1227; // rax
  __int64 **v1228; // rax
  __int64 *v1229; // rax
  __int64 v1230; // rax
  __int64 v1231; // rcx
  __int64 *v1232; // rax
  __int64 v1233; // rcx
  __int64 *v1234; // rax
  __int64 v1235; // rcx
  char *v1236; // rax
  __int64 v1237; // rcx
  char *v1238; // rax
  unsigned __int64 ***v1239; // rax
  unsigned int v1240; // edx
  __int64 v1241; // rcx
  unsigned __int64 **v1242; // rdi
  __int64 ***v1243; // rax
  __int64 **v1244; // rax
  __int64 v1245; // rcx
  char *v1246; // rax
  unsigned int v1247; // eax
  __int64 v1248; // rcx
  __int64 v1249; // rbx
  __int64 v1250; // rax
  __int64 v1251; // rbp
  char *v1252; // rax
  char v1253; // r12
  __int64 v1254; // rax
  unsigned int v1255; // eax
  __int64 v1256; // rsi
  __int64 v1257; // rdi
  __int64 v1258; // rcx
  __int64 v1259; // rsi
  __int64 v1260; // rax
  __int64 v1261; // r8
  char *v1262; // rax
  unsigned int v1263; // eax
  __int64 v1264; // rcx
  _QWORD *v1265; // rbx
  __int64 v1266; // rax
  unsigned __int64 v1267; // rbp
  int *v1268; // rax
  int v1269; // r12d
  __int64 v1270; // rax
  unsigned int v1271; // eax
  __int64 v1272; // rsi
  char *v1273; // rbx
  __int64 v1274; // rcx
  int v1275; // ebp
  __int64 v1276; // rax
  __int64 v1277; // r12
  int *v1278; // rax
  int v1279; // r13d
  int v1280; // eax
  unsigned int v1281; // eax
  __int64 v1282; // rcx
  unsigned __int64 v1283; // rbx
  __int64 v1284; // rax
  int v1285; // ebp
  int *v1286; // rax
  int v1287; // r12d
  __int64 v1288; // rax
  __int64 v1289; // rcx
  unsigned __int64 v1290; // rbx
  signed int *v1291; // rax
  signed int v1292; // ebp
  __int64 v1293; // rax
  __int64 **v1294; // rax
  unsigned int v1295; // eax
  __int64 v1296; // rcx
  __int64 v1297; // rdi
  __int64 v1298; // rsi
  __int64 v1299; // r9
  __int64 v1300; // rcx
  __int64 v1301; // rsi
  __int64 v1302; // rax
  unsigned int v1303; // ecx
  unsigned int *v1304; // rax
  __int64 v1305; // rcx
  int *v1306; // rax
  unsigned int v1307; // eax
  __int64 v1308; // rcx
  _QWORD *v1309; // rdi
  __int64 v1310; // rax
  int v1311; // esi
  int *v1312; // rax
  __int64 v1313; // rcx
  int *v1314; // rax
  unsigned int v1315; // eax
  __int64 v1316; // rsi
  unsigned int *v1317; // rbx
  __int64 v1318; // rcx
  __m128i *v1319; // rbp
  __int64 v1320; // rsi
  __int64 v1321; // r12
  __int64 v1322; // rcx
  int **v1323; // r13
  __int64 v1324; // rax
  __int64 *v1325; // r14
  unsigned int *v1326; // rax
  unsigned int v1327; // r15d
  __int64 v1328; // rax
  __int64 v1329; // rcx
  __int64 *v1330; // rax
  char *v1331; // rax
  __int64 v1332; // rax
  __int64 v1333; // rcx
  char *v1334; // rax
  __int64 v1335; // rcx
  char **v1336; // rax
  unsigned int v1337; // edx
  __int64 v1338; // rsi
  unsigned __int64 *v1339; // rbp
  __int64 v1340; // rcx
  unsigned __int64 *v1341; // r12
  int **v1342; // rax
  unsigned __int64 v1343; // rbx
  unsigned __int64 v1344; // rdx
  int *v1345; // r13
  __int64 v1346; // rcx
  __int64 *v1347; // rax
  __int64 v1348; // rcx
  int *v1349; // rax
  __int64 v1350; // rcx
  __int64 *v1351; // rax
  unsigned int v1352; // edx
  __int64 v1353; // rcx
  unsigned __int64 **v1354; // rdi
  __int64 ***v1355; // rax
  __int64 **v1356; // rax
  __int64 v1357; // rcx
  __int64 *v1358; // rax
  __int64 v1359; // rcx
  __int64 **v1360; // rax
  unsigned int v1361; // edx
  __int64 v1362; // rsi
  __int64 v1363; // rcx
  unsigned int v1364; // r12d
  int *v1365; // rax
  int v1366; // r13d
  __int64 v1367; // rax
  unsigned int v1368; // edx
  __int64 v1369; // rcx
  int *v1370; // rax
  int v1371; // r12d
  __int64 v1372; // rax
  __int64 v1373; // rbx
  __int64 v1374; // rax
  unsigned int v1375; // ebx
  __int64 v1376; // rax
  unsigned __int64 ***v1377; // rax
  unsigned int v1378; // edx
  __int64 v1379; // rcx
  unsigned __int64 **v1380; // rdi
  __int64 ***v1381; // rax
  __int64 **v1382; // rax
  unsigned int v1383; // eax
  __int64 v1384; // rsi
  __int64 v1385; // rbx
  __int64 v1386; // rcx
  __int64 v1387; // rbp
  __int64 v1388; // rax
  unsigned int v1389; // r12d
  int *v1390; // rax
  int v1391; // r13d
  __int64 v1392; // rax
  unsigned int v1393; // eax
  __int64 v1394; // rcx
  __int64 *v1395; // rbx
  __int64 *v1396; // rdi
  __int64 v1397; // rcx
  unsigned __int64 v1398; // rbx
  __int64 *v1399; // rax
  __int64 v1400; // rbp
  __int64 v1401; // rax
  unsigned int v1402; // eax
  __int64 v1403; // rcx
  __int64 v1404; // rbx
  __int64 v1405; // rax
  __int64 v1406; // rbp
  const char **v1407; // rax
  const char *v1408; // r12
  __int64 v1409; // rax
  unsigned int v1410; // eax
  __int64 v1411; // rcx
  __int64 v1412; // rbx
  __int64 v1413; // rax
  int v1414; // ebp
  __int64 *v1415; // rax
  __int64 v1416; // r12
  __int64 v1417; // rax
  __int64 v1418; // rcx
  __int64 **v1419; // rax
  __int64 v1420; // rcx
  __int64 **v1421; // rax
  unsigned int v1422; // eax
  __int64 v1423; // rcx
  unsigned __int64 *v1424; // rbx
  __int64 v1425; // rax
  __int64 v1426; // rdi
  __int64 *v1427; // rax
  _QWORD ***v1428; // rax
  _QWORD *v1429; // rbx
  unsigned int v1430; // edx
  __int64 v1431; // rcx
  _QWORD *v1432; // rsi
  char *v1433; // rax
  __int64 *v1434; // rdx
  __int64 v1435; // rax
  unsigned int v1436; // eax
  __int64 v1437; // rsi
  __int64 *v1438; // rdi
  __int64 v1439; // rcx
  _QWORD *v1440; // rsi
  __int64 v1441; // rax
  __int64 *v1442; // r8
  char *v1443; // rax
  _QWORD **v1444; // rax
  _QWORD *v1445; // rsi
  _QWORD *v1446; // rdx
  _QWORD *v1447; // rcx
  _QWORD *i; // rax
  _QWORD ***v1449; // rax
  _QWORD *v1450; // rbx
  unsigned int v1451; // edx
  __int64 v1452; // rcx
  _QWORD *v1453; // rsi
  char *v1454; // rax
  _QWORD *v1455; // rax
  unsigned int v1456; // edx
  __int64 v1457; // rcx
  _QWORD *v1458; // rsi
  char *v1459; // rax
  __int64 *v1460; // rdx
  __int64 v1461; // rax
  __int64 v1462; // rcx
  __int64 *v1463; // rax
  __int64 v1464; // rcx
  char *v1465; // rax
  unsigned int v1466; // eax
  __int64 v1467; // rcx
  __int64 v1468; // rdi
  __int64 v1469; // rax
  __int64 v1470; // rsi
  __int64 *v1471; // rax
  unsigned int v1472; // eax
  __int64 v1473; // rcx
  __int64 v1474; // rdi
  __int64 v1475; // rax
  int v1476; // esi
  int *v1477; // rax
  __int64 v1478; // rcx
  __int64 *v1479; // rax
  __int64 v1480; // rcx
  __int64 *v1481; // rax
  __int64 v1482; // rsi
  __int64 *v1483; // rbx
  __int64 v1484; // rcx
  int v1485; // ebp
  unsigned int v1486; // r12d
  _DWORD *v1487; // rax
  __int64 v1488; // rcx
  unsigned int v1489; // ebx
  char *v1490; // rax
  unsigned int v1491; // ebp
  __int64 v1492; // rax
  unsigned int v1493; // eax
  __int64 v1494; // rcx
  _QWORD *v1495; // rdi
  __int64 v1496; // rsi
  __m128i *v1497; // r9
  __int64 v1498; // rcx
  __int64 *v1499; // rsi
  __int64 v1500; // rax
  __int64 v1501; // rcx
  unsigned int *v1502; // rax
  unsigned int v1503; // eax
  __int64 v1504; // rsi
  _QWORD *v1505; // rdi
  __int64 v1506; // rcx
  __m128i *v1507; // rsi
  __int64 v1508; // rax
  __int64 *v1509; // r8
  unsigned int *v1510; // rax
  _QWORD **v1511; // rax
  _QWORD *v1512; // rsi
  _QWORD *v1513; // rdx
  _QWORD *v1514; // rcx
  _QWORD *nn; // rax
  unsigned int v1516; // edx
  __int64 v1517; // rsi
  _QWORD *v1518; // rdi
  __int64 v1519; // rcx
  _QWORD **v1520; // rsi
  char *v1521; // rax
  _QWORD *v1522; // rcx
  unsigned __int64 v1523; // rdx
  __int64 v1524; // rsi
  unsigned __int8 v1525; // al
  unsigned __int8 v1526; // r9
  __int64 v1527; // rbx
  unsigned int v1528; // eax
  __int64 v1529; // rcx
  __int64 v1530; // rdi
  __int64 v1531; // rax
  __int64 *v1532; // rsi
  __int64 *v1533; // rax
  __int64 v1534; // rcx
  unsigned __int64 v1535; // rbx
  __int64 *v1536; // rax
  __int64 v1537; // rbp
  __int64 v1538; // rax
  unsigned int v1539; // eax
  __int64 v1540; // rsi
  __int64 *v1541; // rdi
  __int64 v1542; // rcx
  int *v1543; // rsi
  __int64 v1544; // rax
  int v1545; // r8d
  int *v1546; // rax
  __int64 v1547; // rcx
  __int64 **v1548; // rax
  __int64 v1549; // rcx
  __int64 **v1550; // rax
  unsigned __int64 ***v1551; // rax
  unsigned int v1552; // edx
  __int64 v1553; // rcx
  unsigned __int64 **v1554; // rdi
  __int64 ***v1555; // rax
  __int64 **v1556; // rax
  __int64 *v1557; // rax
  __int64 v1558; // rbp
  __int64 v1559; // rbx
  __int64 v1560; // rcx
  __int64 *v1561; // rbx
  char *v1562; // rax
  unsigned int v1563; // ebp
  __int64 v1564; // rax
  __int64 v1565; // rcx
  int *v1566; // rax
  __int64 v1567; // rcx
  _BYTE *v1568; // rbx
  char *v1569; // rax
  char v1570; // bp
  __int64 v1571; // rax
  __int64 v1572; // rcx
  __int64 v1573; // r8
  int v1574; // r9d
  _QWORD **v1575; // rax
  _QWORD *v1576; // rsi
  _QWORD *v1577; // rdx
  _QWORD *v1578; // rcx
  _QWORD *kk; // rax
  unsigned int v1580; // eax
  __int64 v1581; // rsi
  __int64 v1582; // rdi
  __int64 v1583; // rcx
  __int64 v1584; // rsi
  __int64 v1585; // r8
  __int64 *v1586; // r10
  __int64 v1587; // rcx
  __int64 v1588; // r11
  __int64 v1589; // rax
  __int64 v1590; // r8
  char *v1591; // rax
  __int64 v1592; // rcx
  __int64 v1593; // rbp
  char *v1594; // rax
  __int64 v1595; // rbx
  __int64 v1596; // rax
  int v1597; // ecx
  __int64 v1598; // rax
  _QWORD **v1599; // rax
  _QWORD *v1600; // rsi
  _QWORD *v1601; // rdx
  _QWORD *v1602; // rcx
  _QWORD *k; // rax
  _QWORD ***v1604; // rax
  _QWORD *v1605; // rbx
  __int64 v1606; // rcx
  __int64 *v1607; // rax
  __int64 v1608; // rcx
  __int64 *v1609; // rax
  __int64 v1610; // rcx
  __m128i **v1611; // rax
  __int64 v1612; // rcx
  __int64 *v1613; // rax
  __int64 v1614; // rcx
  __int64 *v1615; // rax
  unsigned int v1616; // eax
  __int64 v1617; // rcx
  _QWORD *v1618; // rdi
  __int64 v1619; // rax
  __int64 v1620; // rsi
  char *v1621; // rax
  __int64 v1622; // rcx
  unsigned __int64 *v1623; // rax
  __int64 v1624; // rcx
  __int64 **v1625; // rax
  __int64 v1626; // rcx
  unsigned __int8 *v1627; // rbx
  int *v1628; // rax
  int v1629; // ebp
  __int64 v1630; // rax
  unsigned int v1631; // edx
  __int64 v1632; // rsi
  _QWORD *v1633; // rdi
  __int64 v1634; // rcx
  _QWORD **v1635; // rsi
  char *v1636; // rax
  _QWORD *v1637; // rcx
  unsigned __int64 v1638; // rdx
  unsigned __int64 *v1639; // rax
  unsigned __int64 v1640; // rsi
  __int64 v1641; // rcx
  __int64 *v1642; // rax
  unsigned int v1643; // eax
  __int64 v1644; // rcx
  __int64 *v1645; // rdi
  __int64 v1646; // rax
  int v1647; // esi
  int *v1648; // rax
  __int64 v1649; // rcx
  int *v1650; // rax
  __int64 v1651; // rcx
  __int64 *v1652; // rax
  __int64 v1653; // rcx
  __int64 *v1654; // rax
  __int64 **v1655; // rax
  __int64 v1656; // rcx
  unsigned int *v1657; // rax
  unsigned int v1658; // eax
  __int64 v1659; // rcx
  _DWORD *v1660; // rdi
  __int64 v1661; // rax
  __int64 v1662; // rsi
  __int64 *v1663; // rax
  __int64 v1664; // rcx
  char *v1665; // rax
  unsigned int v1666; // eax
  __int64 v1667; // rcx
  __int64 v1668; // rsi
  __int64 v1669; // rax
  __m128i *v1670; // rdi
  char *v1671; // rax
  __int64 v1672; // rcx
  __int64 *v1673; // rax
  unsigned int v1674; // edx
  __int64 v1675; // rcx
  _QWORD *v1676; // rsi
  char *v1677; // rax
  __int64 *v1678; // rdx
  __int64 v1679; // rax
  __int64 v1680; // rcx
  unsigned __int64 ***v1681; // rax
  unsigned int v1682; // eax
  __int64 v1683; // rcx
  __int64 *v1684; // rdi
  __int64 v1685; // rax
  unsigned __int64 v1686; // rsi
  unsigned __int64 *v1687; // rax
  unsigned int v1688; // eax
  __int64 v1689; // rsi
  __int64 v1690; // rdi
  __int64 v1691; // rcx
  __int64 *v1692; // rsi
  __int64 v1693; // rax
  __int64 v1694; // r8
  unsigned int *v1695; // rax
  __int64 *v1696; // rax
  __int64 v1697; // rax
  __int64 v1698; // rcx
  __int64 *v1699; // rax
  unsigned int v1700; // eax
  __int64 v1701; // rcx
  unsigned __int64 v1702; // rdi
  __int64 v1703; // rax
  __int64 *v1704; // rsi
  unsigned int *v1705; // rax
  __int64 *v1706; // rax
  __int64 v1707; // rax
  __int64 v1708; // rcx
  __int64 v1709; // rbx
  char *v1710; // rax
  char v1711; // bp
  __int64 v1712; // rax
  __int64 v1713; // rcx
  __int64 **v1714; // rax
  unsigned int v1715; // eax
  __int64 v1716; // rcx
  __int64 *v1717; // rdi
  __int64 v1718; // rax
  int v1719; // esi
  int *v1720; // rax
  unsigned int v1721; // edx
  __int64 v1722; // rcx
  __int64 *v1723; // rbx
  __int64 v1724; // rsi
  __m128i *v1725; // rbp
  __int64 v1726; // rcx
  __int32 *v1727; // rsi
  __int64 *v1728; // rax
  __int64 v1729; // rax
  __int32 v1730; // edx
  __m128i v1731; // xmm0
  __int64 v1732; // rcx
  __int64 *v1733; // rax
  __int64 v1734; // rcx
  char *v1735; // rax
  unsigned int v1736; // eax
  __int64 v1737; // rsi
  __int64 v1738; // rdi
  bool v1739; // zf
  char v1740; // si
  __int64 v1741; // rax
  char *v1742; // rax
  const __m128i *v1743; // roff
  __int64 v1744; // rcx
  char *v1745; // rax
  unsigned int v1746; // eax
  __int64 v1747; // rsi
  __int64 *v1748; // rbx
  __int64 v1749; // rcx
  __int64 *v1750; // rdi
  __int64 v1751; // rax
  __int64 v1752; // rsi
  char *v1753; // rax
  unsigned int v1754; // eax
  __int64 v1755; // rcx
  unsigned __int64 v1756; // rdi
  __int64 v1757; // rax
  char *v1758; // rsi
  unsigned int *v1759; // rax
  unsigned int v1760; // eax
  __int64 v1761; // rsi
  __int64 v1762; // rdi
  __int64 v1763; // rcx
  _QWORD *v1764; // rsi
  __int64 v1765; // rax
  _QWORD *v1766; // r8
  unsigned __int64 *v1767; // rax
  _QWORD **v1768; // rax
  _QWORD *v1769; // rsi
  _QWORD *v1770; // rdx
  _QWORD *v1771; // rcx
  _QWORD *j; // rax
  __int64 v1773; // rcx
  __m128i **v1774; // rax
  unsigned int v1775; // eax
  __int64 v1776; // rsi
  __int64 v1777; // rdi
  __int64 v1778; // rcx
  __int64 v1779; // rsi
  __int64 v1780; // rax
  __int64 v1781; // r8
  int *v1782; // rax
  __int64 *v1783; // rax
  __int64 v1784; // rax
  unsigned __int64 ***v1785; // rax
  __int64 **v1786; // rax
  unsigned int v1787; // eax
  __int64 v1788; // rcx
  unsigned __int64 *v1789; // rbx
  __int64 v1790; // rax
  _QWORD *v1791; // rdi
  unsigned __int64 *v1792; // rax
  __int64 v1793; // rcx
  __int32 *v1794; // rax
  __int64 v1795; // rcx
  __int64 v1796; // rbx
  int *v1797; // rax
  int v1798; // ebp
  __int64 v1799; // rax
  __int64 v1800; // rcx
  char *v1801; // rax
  __int64 **v1802; // rax
  __int64 *v1803; // rax
  __int64 v1804; // rax
  __int64 v1805; // rcx
  __int64 *v1806; // rax
  __int64 v1807; // rcx
  __int64 v1808; // rbx
  char *v1809; // rax
  int v1810; // r14d
  __int64 v1811; // rax
  __int64 v1812; // rcx
  __int64 v1813; // rbx
  __int64 *v1814; // rax
  __int64 v1815; // rbp
  __int64 v1816; // rax
  _QWORD **v1817; // rax
  _QWORD *v1818; // rsi
  _QWORD *v1819; // rdx
  _QWORD *v1820; // rcx
  _QWORD *ii; // rax
  __int64 v1822; // rcx
  int *v1823; // rax
  __int64 v1824; // rcx
  __int64 **v1825; // rax
  __int64 v1826; // rcx
  __int64 **v1827; // rax
  __int64 v1828; // rcx
  _DWORD *v1829; // rbx
  __int64 *v1830; // rax
  __int64 v1831; // rbp
  __int64 v1832; // rax
  __int64 v1833; // rcx
  __int64 *v1834; // rax
  unsigned int v1835; // eax
  __int64 v1836; // rcx
  __int64 v1837; // rdi
  __int64 v1838; // rsi
  _QWORD *v1839; // r9
  __int64 v1840; // rcx
  __int64 v1841; // rsi
  __int64 v1842; // rax
  __int64 v1843; // rcx
  unsigned int *v1844; // rax
  unsigned int v1845; // eax
  __int64 v1846; // rcx
  __int64 v1847; // rdi
  __int64 v1848; // rsi
  __int64 *v1849; // r9
  __int64 v1850; // rcx
  __int64 v1851; // rsi
  __int64 v1852; // rax
  __int64 v1853; // rcx
  unsigned int *v1854; // rax
  unsigned int v1855; // edx
  __int64 v1856; // rsi
  _QWORD *v1857; // rdi
  __int64 v1858; // rcx
  _QWORD **v1859; // rsi
  char *v1860; // rax
  _QWORD *v1861; // rcx
  unsigned __int64 v1862; // rdx
  unsigned __int64 v1863; // rax
  unsigned __int64 v1864; // rsi
  __int64 v1865; // rcx
  __int64 v1866; // rbx
  char *v1867; // rax
  _BOOL4 v1868; // ebp
  __int64 v1869; // rax
  unsigned int v1870; // edx
  __int64 v1871; // rcx
  __int64 *v1872; // rax
  __int64 *v1873; // rax
  __int64 v1874; // rax
  unsigned int v1875; // eax
  __int64 v1876; // rcx
  __int64 *v1877; // rdi
  __int64 v1878; // rsi
  __int64 *v1879; // r9
  __int64 v1880; // rcx
  __int64 v1881; // rsi
  __int64 v1882; // rax
  __int64 v1883; // rcx
  char *v1884; // rax
  __int64 v1885; // rcx
  int *v1886; // rax
  __int64 v1887; // rcx
  int *v1888; // rbx
  char *v1889; // rax
  int v1890; // ebp
  __int64 v1891; // rax
  __int64 v1892; // rcx
  __int64 *v1893; // rax
  __int64 **v1894; // rax
  __int64 *v1895; // rax
  __int64 v1896; // rax
  __int64 v1897; // rcx
  __int64 *v1898; // rax
  unsigned int v1899; // eax
  __int64 v1900; // rcx
  __int64 v1901; // rbx
  __int64 v1902; // rax
  __int64 v1903; // rbp
  __int64 *v1904; // rax
  __int64 v1905; // r12
  __int64 v1906; // rax
  unsigned __int64 ***v1907; // rax
  __int64 v1908; // rcx
  __int64 *v1909; // rax
  __int64 v1910; // rcx
  __int64 *v1911; // rax
  __int64 v1912; // rcx
  char *v1913; // rax
  __int64 v1914; // rcx
  char *v1915; // rax
  unsigned int v1916; // edx
  __int64 v1917; // rcx
  __int64 *v1918; // rbx
  __int64 v1919; // rsi
  __m128i *v1920; // r12
  __int64 v1921; // rcx
  __int64 *v1922; // rsi
  char *v1923; // rax
  __int64 v1924; // r13
  unsigned __int64 v1925; // rax
  __int64 v1926; // r14
  void *v1927; // rcx
  __m128i v1928; // xmm0
  unsigned int v1929; // eax
  __int64 v1930; // rcx
  __int64 v1931; // rdi
  __int64 v1932; // rax
  int v1933; // esi
  __int64 *v1934; // rax
  unsigned int v1935; // eax
  __int64 v1936; // rcx
  __int64 *v1937; // rbx
  __int64 v1938; // rax
  _QWORD *v1939; // rdi
  __int64 *v1940; // rax
  unsigned int v1941; // eax
  __int64 v1942; // rcx
  __int64 v1943; // rdi
  __int64 v1944; // rax
  int v1945; // esi
  unsigned __int64 *v1946; // rax
  _QWORD **v1947; // rax
  _QWORD *v1948; // rsi
  _QWORD *v1949; // rdx
  _QWORD *v1950; // rcx
  _QWORD *m; // rax
  unsigned int v1952; // eax
  __int64 v1953; // rcx
  __int64 *v1954; // rdi
  __int64 v1955; // rax
  __int64 v1956; // rsi
  __int64 *v1957; // rax
  __int64 v1958; // rcx
  char *v1959; // rax
  __int64 v1960; // rcx
  char *v1961; // rax
  __int64 v1962; // rcx
  char *v1963; // rax
  __int64 v1964; // rcx
  __int64 **v1965; // rax
  unsigned __int64 ***v1966; // rax
  __int64 v1967; // rcx
  int *v1968; // rax
  __int64 v1969; // rcx
  __m128i ***v1970; // rax
  __int64 v1971; // rcx
  __int64 *v1972; // rax
  unsigned int v1973; // eax
  __int64 v1974; // rcx
  __int64 v1975; // rdi
  __int64 v1976; // rax
  int v1977; // esi
  int *v1978; // rax
  __int64 v1979; // rcx
  int *v1980; // rax
  unsigned int v1981; // edx
  __int64 v1982; // rcx
  _QWORD *v1983; // rsi
  char *v1984; // rax
  _QWORD *v1985; // rax
  __int64 v1986; // rcx
  int *v1987; // rax
  unsigned int v1988; // eax
  __int64 v1989; // rcx
  __int64 v1990; // rdi
  __int64 v1991; // rax
  __int64 v1992; // rsi
  char *v1993; // rax
  __int64 v1994; // rcx
  char *v1995; // rax
  unsigned int v1996; // eax
  __int64 v1997; // rsi
  _BYTE *v1998; // rbx
  __int64 v1999; // rcx
  __int64 v2000; // rbp
  __int64 v2001; // rax
  __int64 v2002; // r12
  __int64 *v2003; // rax
  __int64 v2004; // r13
  __int64 v2005; // rax
  unsigned __int64 ***v2006; // rax
  __int64 v2007; // rcx
  __int64 v2008; // rbx
  __int64 *v2009; // rax
  __int64 v2010; // rbp
  __int64 v2011; // rax
  unsigned int v2012; // eax
  __int64 v2013; // rcx
  int *v2014; // rdi
  __int64 v2015; // rax
  __int64 *v2016; // rsi
  unsigned int *v2017; // rax
  _QWORD **v2018; // rax
  _QWORD *v2019; // rsi
  _QWORD *v2020; // rdx
  _QWORD *v2021; // rcx
  _QWORD *jj; // rax
  __int64 v2023; // rcx
  __int64 *v2024; // rax
  __int64 v2025; // rcx
  unsigned __int8 **v2026; // rax
  unsigned int v2027; // edx
  __int64 v2028; // rcx
  unsigned __int64 **v2029; // rdi
  __int64 ***v2030; // rax
  __int64 **v2031; // rax
  unsigned int v2032; // eax
  __int64 v2033; // rcx
  __int64 v2034; // rdi
  __int64 v2035; // rax
  __int64 v2036; // rsi
  __int64 *v2037; // rax
  __int64 v2038; // rcx
  __int64 **v2039; // rax
  unsigned int v2040; // eax
  __int64 v2041; // rcx
  __int64 v2042; // rdi
  __int64 v2043; // rax
  __int64 v2044; // rsi
  __int64 *v2045; // rax
  unsigned int v2046; // edx
  __int64 v2047; // rcx
  _QWORD *v2048; // rsi
  char *v2049; // rax
  _QWORD *v2050; // rax
  __int64 v2051; // rcx
  const char **v2052; // rax
  __int64 v2053; // rcx
  __int64 *v2054; // rax
  unsigned int v2055; // edx
  __int64 v2056; // rcx
  unsigned __int64 *v2057; // rbp
  __int64 v2058; // rsi
  __m128i *v2059; // rbx
  __int64 v2060; // rcx
  unsigned __int64 *v2061; // rsi
  char *v2062; // rax
  __int64 v2063; // r12
  unsigned __int64 v2064; // rax
  size_t v2065; // r13
  __m128i si128; // xmm0
  unsigned int v2067; // eax
  __int64 v2068; // rcx
  __int64 v2069; // rdi
  __int64 v2070; // rax
  int v2071; // esi
  int *v2072; // rax
  unsigned int v2073; // edx
  __int64 v2074; // rsi
  _QWORD *v2075; // rdi
  __int64 v2076; // rcx
  _QWORD **v2077; // rsi
  char *v2078; // rax
  _QWORD *v2079; // rcx
  unsigned __int64 v2080; // rdx
  int v2081; // eax
  unsigned int v2082; // edx
  __int64 v2083; // rsi
  _QWORD *v2084; // rdi
  __int64 v2085; // rcx
  _QWORD **v2086; // rsi
  char *v2087; // rax
  _QWORD *v2088; // rcx
  unsigned __int64 v2089; // rdx
  unsigned __int64 v2090; // rax
  unsigned __int64 v2091; // rsi
  unsigned int v2092; // eax
  __int64 v2093; // rcx
  __int64 v2094; // rdi
  __int64 v2095; // rax
  __int64 v2096; // rsi
  char *v2097; // rax
  unsigned int v2098; // eax
  __int64 v2099; // rcx
  __int64 v2100; // rdi
  __int64 v2101; // rsi
  int v2102; // r9d
  __int64 v2103; // rcx
  unsigned __int8 *v2104; // rsi
  __int64 v2105; // rax
  unsigned __int8 *v2106; // rcx
  unsigned __int8 **v2107; // rax
  unsigned int v2108; // edx
  __int64 v2109; // rcx
  _QWORD *v2110; // rsi
  char *v2111; // rax
  __int64 *v2112; // rdx
  __int64 v2113; // rax
  __int64 v2114; // rbx
  __int64 v2115; // rax
  __int64 v2116; // rbx
  __int64 v2117; // rax
  _QWORD ***v2118; // rax
  _QWORD *v2119; // rbx
  __int64 v2120; // rcx
  __int64 *v2121; // rax
  __int64 v2122; // rcx
  __int64 *v2123; // rax
  __int64 v2124; // rcx
  unsigned __int8 **v2125; // rax
  unsigned int v2126; // eax
  __int64 v2127; // rcx
  __int128 v2128; // rdi
  __int64 v2129; // rsi
  __int64 v2130; // r9
  __int64 v2131; // rcx
  __int64 v2132; // rax
  unsigned int v2133; // ecx
  unsigned int **v2134; // rax
  __int64 v2135; // rdx
  unsigned int v2136; // eax
  __int64 v2137; // rsi
  __int64 v2138; // rdi
  __int64 v2139; // rcx
  __int64 v2140; // rsi
  __int64 v2141; // rax
  __int64 v2142; // r8
  char *v2143; // rax
  unsigned int v2144; // eax
  __int64 v2145; // rsi
  __int64 v2146; // rdi
  __int64 v2147; // rcx
  __int64 v2148; // rsi
  __int64 v2149; // rax
  __int64 v2150; // r8
  __int64 *v2151; // rax
  __int64 v2152; // rcx
  __int64 **v2153; // rax
  unsigned int v2154; // eax
  __int64 v2155; // rcx
  unsigned __int8 *v2156; // rdi
  __int64 v2157; // rax
  __int64 v2158; // rsi
  unsigned int *v2159; // rax
  unsigned int v2160; // eax
  __int64 v2161; // rcx
  __int64 *v2162; // rdi
  __int64 v2163; // rax
  __int64 *v2164; // rsi
  char *v2165; // rax
  __m128i **v2166; // rdx
  __int32 **v2167; // rdx
  __int64 *v2168; // rdx
  char *v2169; // rdx
  char *v2170; // rdx
  char *v2171; // rdx
  __int64 *v2172; // rdx
  __int64 *v2173; // rdx
  int *v2174; // rdx
  char *v2175; // rdx
  __int64 *v2176; // rdx
  int *v2177; // rdx
  __int64 **v2178; // rdx
  char *v2179; // rdx
  __m128i **v2180; // rdx
  char *v2181; // rax
  __int64 **v2182; // rdx
  char *v2183; // rax
  __int64 *v2184; // rdx
  int *v2185; // rdx
  unsigned int *v2186; // rax
  char *v2187; // rdx
  __int64 *v2188; // rdx
  unsigned __int64 **v2189; // rdx
  unsigned int *v2190; // rdx
  __int64 *v2191; // rdx
  char *v2192; // rax
  unsigned int *v2193; // rdx
  __int64 *v2194; // rdx
  __m128i **v2195; // rdx
  __int64 *v2196; // rdx
  char *v2197; // rax
  int ***v2198; // rdx
  char *v2199; // rax
  __int64 **v2200; // rdx
  int *v2201; // rdx
  int *v2202; // rdx
  __int64 *v2203; // rdx
  char *v2204; // rax
  __int64 *v2205; // rdx
  int *v2206; // rdx
  __int64 *v2207; // rdx
  char *v2208; // rdx
  char *v2209; // rdx
  __m128i **v2210; // rdx
  __int64 *v2211; // rdx
  int *v2212; // rdx
  __int64 *v2213; // rdx
  __int64 *v2214; // rdx
  char *v2215; // rax
  char *v2216; // rdx
  unsigned __int64 *v2217; // rdx
  int *v2218; // rdx
  char *v2219; // rdx
  char *v2220; // rax
  char **v2221; // rdx
  char *v2222; // rdx
  __int64 *v2223; // rdx
  char *v2224; // rax
  __int64 *v2225; // rdx
  char *v2226; // rdx
  unsigned int **v2227; // rdx
  __int64 *v2228; // rdx
  __int64 *v2229; // rdx
  __int64 *v2230; // rdx
  __int64 *v2231; // rdx
  char *v2232; // rdx
  unsigned int *v2233; // rdx
  char *v2234; // rdx
  unsigned __int64 *v2235; // rdx
  char *v2236; // rax
  int **v2237; // rdx
  char *v2238; // rdx
  int *v2239; // rdx
  char *v2240; // rax
  int *v2241; // rdx
  __m128i **v2242; // rdx
  __m128i **v2243; // rdx
  char *v2244; // rax
  char *v2245; // rdx
  char *v2246; // rdx
  char *v2247; // rax
  char *v2248; // rdx
  __int64 *v2249; // rdx
  __int64 *v2250; // rdx
  char *v2251; // rax
  const char **v2252; // rdx
  __int64 *v2253; // rdx
  __int64 *v2254; // rdx
  signed int *v2255; // rdx
  __int64 *v2256; // rdx
  char *v2257; // rax
  int *v2258; // rdx
  __int64 *v2259; // rdx
  char *v2260; // rax
  __int64 *v2261; // rdx
  __int64 *v2262; // rdx
  __int64 *v2263; // rdx
  char *v2264; // rax
  __int64 *v2265; // rdx
  __int64 *v2266; // rdx
  int *v2267; // rdx
  __int64 *v2268; // rdx
  __m128i **v2269; // rdx
  char *v2270; // rax
  char *v2271; // rdx
  __m128i **v2272; // rdx
  char *v2273; // rdx
  char *v2274; // rdx
  __m128i **v2275; // rdx
  char *v2276; // rdx
  char *v2277; // rdx
  __int64 *v2278; // rdx
  int *v2279; // rdx
  char *v2280; // rax
  __int64 *v2281; // rdx
  __int64 *v2282; // rdx
  const char **v2283; // rdx
  char *v2284; // rax
  int *v2285; // rdx
  char *v2286; // rax
  int *v2287; // rdx
  __int64 *v2288; // rdx
  __int64 *v2289; // rdx
  char *v2290; // rax
  char *v2291; // rdx
  unsigned __int64 *v2292; // rdx
  char *v2293; // rax
  __int64 *v2294; // rdx
  char *v2295; // rdx
  __int64 *v2296; // rdx
  __int64 *v2297; // rdx
  char *v2298; // rdx
  __int64 *v2299; // rdx
  unsigned __int64 **v2300; // rdx
  int *v2301; // rdx
  char *v2302; // rdx
  __int64 *v2303; // rdx
  int *v2304; // rdx
  char *v2305; // rdx
  char *v2306; // rdx
  __int64 *v2307; // rdx
  __int64 *v2308; // rdx
  char *v2309; // rax
  char *v2310; // rdx
  unsigned int *v2311; // rax
  unsigned int *v2312; // rdx
  char *v2313; // rdx
  char *v2314; // rax
  char *v2315; // rdx
  char *v2316; // rdx
  __int64 *v2317; // rdx
  char *v2318; // rdx
  char *v2319; // rdx
  unsigned __int64 *v2320; // rdx
  __int64 *v2321; // rdx
  const __m128i **v2322; // rdx
  __int64 *v2323; // rdx
  char *v2324; // rdx
  char *v2325; // rdx
  char *v2326; // rdx
  char *v2327; // rax
  char *v2328; // rdx
  char *v2329; // rax
  char *v2330; // rdx
  char *v2331; // rax
  char *v2332; // rdx
  char *v2333; // rdx
  char *v2334; // rax
  char *v2335; // rdx
  char *v2336; // rdx
  const __m128i **v2337; // rdx
  __int64 *v2338; // rdx
  char *v2339; // rax
  __int64 *v2340; // rdx
  __int64 *v2341; // rax
  __int64 *v2342; // rdx
  __int64 *v2343; // rax
  __int64 *v2344; // rdx
  int *v2345; // rdx
  char *v2346; // rax
  __m128i **v2347; // rdx
  char *v2348; // rax
  const __m128i **v2349; // rdx
  __m128i **v2350; // rdx
  char *v2351; // rdx
  int *v2352; // rdx
  __m128i **v2353; // rdx
  char *v2354; // rax
  char *v2355; // rdx
  __m128i **v2356; // rdx
  char *v2357; // rdx
  char *v2358; // rdx
  __int64 **v2359; // rdx
  char *v2360; // rdx
  char *v2361; // rdx
  char *v2362; // rdx
  unsigned int *v2363; // rdx
  char *v2364; // rax
  int *v2365; // rdx
  __int64 *v2366; // rax
  __int64 *v2367; // rdx
  __int64 *v2368; // rax
  __int64 *v2369; // rdx
  char *v2370; // rax
  __int64 *v2371; // rdx
  __m128i **v2372; // rdx
  char *v2373; // rax
  char *v2374; // rdx
  char *v2375; // rdx
  int *v2376; // rdx
  int *v2377; // rdx
  __int64 *v2378; // rdx
  __int64 *v2379; // rdx
  unsigned __int64 *v2380; // rdx
  int **v2381; // rdx
  char *v2382; // rax
  int *v2383; // rdx
  int *v2384; // rdx
  char *v2385; // rdx
  char *v2386; // rdx
  char *v2387; // rax
  unsigned int *v2388; // rdx
  int *v2389; // rdx
  char *v2390; // rax
  __int64 **v2391; // rdx
  char *v2392; // rax
  char *v2393; // rdx
  __int64 *v2394; // rdx
  char *v2395; // rax
  __int64 *v2396; // rdx
  __int64 *v2397; // rdx
  __int64 *v2398; // rdx
  char *v2399; // rax
  int *v2400; // rdx
  unsigned int *v2401; // rax
  unsigned int *v2402; // rdx
  __int64 *v2403; // rax
  __int64 *v2404; // rdx
  __int64 *v2405; // rax
  __int64 *v2406; // rdx
  __int64 *v2407; // rdx
  char *v2408; // rax
  signed int *v2409; // rdx
  char *v2410; // rax
  unsigned __int64 ***v2411; // rdx
  int *v2412; // rax
  int *v2413; // rdx
  __int64 *v2414; // rdx
  __int64 **v2415; // rdx
  __int64 *v2416; // rdx
  __int64 **v2417; // rdx
  __int64 *v2418; // rax
  __int64 *v2419; // rdx
  char *v2420; // rax
  __int64 *v2421; // rdx
  char *v2422; // rdx
  char *v2423; // rax
  char *v2424; // rdx
  char *v2425; // rdx
  __int64 *v2426; // rdx
  char *v2427; // rdx
  unsigned int *v2428; // rdx
  char *v2429; // rax
  char *v2430; // rdx
  __int64 *v2431; // rdx
  char *v2432; // rax
  __int64 *v2433; // rdx
  unsigned int *v2434; // rax
  unsigned int *v2435; // rdx
  __int64 **v2436; // rdx
  __int64 *v2437; // rdx
  char *v2438; // rax
  __int64 *v2439; // rdx
  __int64 *v2440; // rdx
  __int64 *v2441; // rdx
  __int64 *v2442; // rdx
  char *v2443; // rax
  __int64 *v2444; // rdx
  char *v2445; // rdx
  __int64 ***v2446; // rdx
  char *v2447; // rdx
  char *v2448; // rax
  char *v2449; // rdx
  char *v2450; // rdx
  __int64 **v2451; // rdx
  __int64 *v2452; // rdx
  __int64 **v2453; // rdx
  char *v2454; // rax
  int *v2455; // rdx
  int *v2456; // rdx
  int *v2457; // rax
  __int64 *v2458; // rdx
  char *v2459; // rax
  __int64 *v2460; // rdx
  char *v2461; // rdx
  char *v2462; // rdx
  char *v2463; // rax
  char *v2464; // rdx
  char *v2465; // rax
  __int64 *v2466; // rdx
  __m128i **v2467; // rdx
  __int64 **v2468; // rdx
  __int64 **v2469; // rdx
  char *v2470; // rax
  __int64 *v2471; // rdx
  __int64 **v2472; // rdx
  char *v2473; // rax
  __int64 *v2474; // rdx
  __int64 *v2475; // rax
  __int64 *v2476; // rdx
  const char **v2477; // rdx
  __int64 **v2478; // rdx
  char *v2479; // rax
  __int64 *v2480; // rdx
  char *v2481; // rax
  __int64 *v2482; // rdx
  char *v2483; // rdx
  char *v2484; // rdx
  int *v2485; // rdx
  __int64 **v2486; // rdx
  int *v2487; // rdx
  char *v2488; // rax
  unsigned __int8 **v2489; // rdx
  unsigned __int8 **v2490; // rax
  unsigned __int8 **v2491; // rdx
  __int64 *v2492; // rdx
  size_t v2493; // rbp
  void *v2494; // rax
  void *v2495; // rax
  size_t v2496; // rbp
  void *v2497; // rax
  void *v2498; // rax
  void *v2499; // rax
  void *v2500; // rax
  unsigned __int64 v2501; // rdi
  int v2502; // ebx
  char *v2503; // rax
  char *v2504; // rax
  char *v2505; // rax
  char *v2506; // rax
  char *v2507; // rax
  __int64 **v2508; // rax
  char *v2509; // rax
  char *v2510; // rax
  char *v2511; // rax
  char *v2512; // rax
  char *v2513; // r14
  char *v2514; // r15
  int v2515; // eax
  char *v2516; // rax
  char *v2517; // rax
  char *v2518; // rax
  char *v2519; // rax
  __int64 *v2520; // rax
  __int64 *v2521; // rax
  char *v2522; // rax
  char *v2523; // rax
  char *v2524; // rax
  char *v2525; // rax
  char *v2526; // rax
  char *v2527; // rax
  char *v2528; // rax
  char *v2529; // rax
  char *v2530; // rax
  char *v2531; // rax
  char *v2532; // rax
  char *v2533; // rax
  char *v2534; // rax
  __m128i v2535; // [rsp+0h] [rbp-128h] BYREF
  __m128i v2536; // [rsp+10h] [rbp-118h] BYREF
  __m128i v2537; // [rsp+20h] [rbp-108h] BYREF
  _BYTE v2538[24]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v2539; // [rsp+48h] [rbp-E0h]
  _BYTE v2540[48]; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v2541; // [rsp+80h] [rbp-A8h]
  unsigned int v2542; // [rsp+88h] [rbp-A0h]
  char *v2543; // [rsp+90h] [rbp-98h]
  int *v2544; // [rsp+98h] [rbp-90h]
  __m128i v2545; // [rsp+A0h] [rbp-88h]
  __int64 v2546; // [rsp+B0h] [rbp-78h]
  unsigned __int64 v2547; // [rsp+B8h] [rbp-70h]
  int v2548; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v2549; // [rsp+C8h] [rbp-60h]
  __int64 v2550; // [rsp+D0h] [rbp-58h]
  __int64 v2551; // [rsp+D8h] [rbp-50h]
  __int64 v2552; // [rsp+E0h] [rbp-48h]
  __int64 v2553; // [rsp+E8h] [rbp-40h]

  v2549 = a2;
  v2550 = a3;
  v2551 = a4;
  v2552 = a5;
  v2553 = a6;
  v2547 = __readfsqword(0x28u);
  v2542 = 8;
  v2543 = &a9;
  v2544 = &v2548;
  switch ( a1 )
  {
    case 0LL:
      v1456 = v2542;
      v1457 = v2542 + 8;
      v2542 = v1457;
      v1458 = *(_QWORD **)((char *)v2544 + v1456);
      if ( (unsigned int)v1457 > 0x2F )
      {
        v1459 = v2543;
        v2543 += 8;
      }
      else
      {
        v1459 = (char *)v2544 + v1457;
        v2542 = v1456 + 16;
      }
      v1460 = *(__int64 **)v1459;
      if ( !*(_QWORD *)v1459 )
        goto LABEL_2320;
      v1461 = *v1460;
      if ( *v1460 )
      {
        if ( v1460[1] )
          v1461 = *(_QWORD *)(v1461 + 8);
      }
      *v1458 = v1461;
      return nullptr;
    case 1LL:
      v1451 = v2542;
      v1452 = v2542 + 8;
      v2542 = v1452;
      v1453 = *(_QWORD **)((char *)v2544 + v1451);
      if ( (unsigned int)v1452 > 0x2F )
      {
        v1454 = v2543;
        v2543 += 8;
      }
      else
      {
        v1454 = (char *)v2544 + v1452;
        v2542 = v1451 + 16;
      }
      v1455 = *(_QWORD **)v1454;
      if ( !v1455 )
        goto LABEL_2657;
      *v1453 = *v1455;
      return nullptr;
    case 2LL:
      v1449 = (_QWORD ***)((char *)v2544 + v2542);
      v1450 = *v1449;
      *v1450 = sub_3403C0(**v1449);
      return nullptr;
    case 3LL:
      v1444 = (_QWORD **)((char *)v2544 + v2542);
      v1445 = *v1444;
      v1446 = (_QWORD *)**v1444;
      if ( (*v1446 & 2) != 0 )
      {
        i = (_QWORD *)v1446[2];
      }
      else
      {
        v1447 = (_QWORD *)v1446[1];
        if ( (*(_BYTE *)v1447 & 2) != 0 )
        {
          for ( i = (_QWORD *)(*v1446 & 0xFFFFFFFFFFFFFFFCLL);
                (*i & 2) == 0 && (_QWORD *)i[1] == v1446;
                i = (_QWORD *)(*i & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v1446 = i;
          }
        }
        else
        {
          do
          {
            i = v1447;
            v1447 = (_QWORD *)v1447[2];
          }
          while ( (*(_BYTE *)v1447 & 2) == 0 );
        }
      }
      *v1445 = i;
      return nullptr;
    case 4LL:
      return (char *)(**(_QWORD **)((char *)v2544 + v2542) + 24LL);
    case 5LL:
      return (char *)(**(_QWORD **)((char *)v2544 + v2542) + 40LL);
    case 6LL:
      v970 = v2542;
      v971 = v2542 + 8;
      v2542 = v971;
      v972 = *(_QWORD **)((char *)v2544 + v970);
      if ( (unsigned int)v971 > 0x2F )
      {
        v2187 = v2543;
        v975 = (__int64 *)(v2543 + 8);
        v2543 += 8;
        v974 = *(_QWORD ***)v2187;
      }
      else
      {
        v973 = v970 + 16;
        v974 = *(_QWORD ***)((char *)v2544 + v971);
        v2542 = v973;
        if ( (unsigned int)v973 <= 0x2F )
        {
          v975 = (__int64 *)((char *)v2544 + v973);
          v2542 = v970 + 24;
          goto LABEL_852;
        }
        v975 = (__int64 *)v2543;
      }
      v2543 = (char *)(v975 + 1);
LABEL_852:
      if ( !v974 )
        goto LABEL_2204;
      v976 = *v974;
      v977 = *v974;
      if ( !*v974 )
        goto LABEL_862;
      v976 = (_QWORD *)(*v976 & 0xFFFFFFFFFFFFFFFCLL);
      if ( !v976 )
        goto LABEL_862;
      if ( (*(_BYTE *)v976 & 2) != 0 )
        goto LABEL_861;
      v978 = *v975;
      do
      {
        if ( (int)sub_2533C0(v978, (__int64)(v976 + 3)) >= 0 )
        {
          if ( (int)sub_2533C0((__int64)(v976 + 3), v978) >= 0 )
            goto LABEL_862;
          v976 = (_QWORD *)v976[2];
        }
        else
        {
          v976 = (_QWORD *)v976[1];
        }
      }
      while ( (*(_BYTE *)v976 & 2) == 0 );
      v977 = *v974;
LABEL_861:
      v976 = v977;
LABEL_862:
      *v972 = v976;
      return nullptr;
    case 7LL:
      v954 = v2542;
      v955 = v2542 + 8;
      v2542 = v955;
      v956 = *(unsigned __int64 **)((char *)v2544 + v954);
      if ( (unsigned int)v955 > 0x2F )
      {
        v2275 = (__m128i **)v2543;
        v2524 = v2543 + 8;
        v2543 += 8;
        v958 = *v2275;
      }
      else
      {
        v957 = v954 + 16;
        v958 = *(__m128i **)((char *)v2544 + v955);
        v2542 = v957;
        if ( (unsigned int)v957 <= 0x2F )
        {
          v959 = v954 + 24;
          v960 = *(_QWORD *)((char *)v2544 + v957);
          v2542 = v959;
          if ( (unsigned int)v959 <= 0x2F )
          {
            v961 = (char *)v2544 + v959;
            v2542 = v954 + 32;
            goto LABEL_844;
          }
          v961 = v2543;
LABEL_2034:
          v2543 = v961 + 8;
LABEL_844:
          v962 = *(__int64 **)v961;
          if ( v958 )
          {
            v963 = v962[2];
            v964 = *(_QWORD *)v960;
            v965 = nullptr;
            v966 = *(_DWORD *)(v960 + 8);
            v967 = *v962;
            v968 = _mm_unpacklo_epi64((__m128i)v963, (__m128i)v963);
            if ( v963 )
            {
              v2535.m128i_i64[0] = *(_QWORD *)v960;
              v2536 = v968;
              v2499 = (void *)qalloc_or_throw();
              v2500 = memcpy(v2499, (const void *)v962[1], v963);
              v968 = _mm_load_si128(&v2536);
              v964 = v2535.m128i_i64[0];
              v965 = v2500;
            }
            v969 = v962[4];
            *(_QWORD *)v2540 = v964;
            *(_DWORD *)&v2540[8] = v966;
            *(_QWORD *)&v2540[16] = v967;
            *(_QWORD *)&v2540[24] = v965;
            v2541 = v969;
            *(__m128i *)&v2540[32] = v968;
            *v956 = sub_3407B0(v958, (const __m128i *)v2540);
            if ( *(_QWORD *)&v2540[24] )
            {
              *(_QWORD *)&v2540[32] = 0;
              qfree();
            }
            return nullptr;
          }
          goto LABEL_2532;
        }
        v2524 = v2543;
      }
      v2276 = v2524;
      v961 = v2524 + 8;
      v2543 = v961;
      v960 = *(_QWORD *)v2276;
      goto LABEL_2034;
    case 8LL:
      v2027 = v2542;
      v2028 = v2542 + 8;
      v2542 = v2028;
      v2029 = *(unsigned __int64 ***)((char *)v2544 + v2027);
      if ( (unsigned int)v2028 > 0x2F )
      {
        v2030 = (__int64 ***)v2543;
        v2543 += 8;
      }
      else
      {
        v2030 = (__int64 ***)((char *)v2544 + v2028);
        v2542 = v2027 + 16;
      }
      v2031 = *v2030;
      if ( !v2029 )
        goto LABEL_2664;
      sub_340F30(v2029, *v2031);
      return nullptr;
    case 9LL:
      v1907 = (unsigned __int64 ***)((char *)v2544 + v2542);
      v2542 += 8;
      if ( !*v1907 )
        goto LABEL_2673;
      sub_33FD70(*v1907);
      return nullptr;
    case 10LL:
      v1229 = (__int64 *)((char *)v2544 + v2542);
      v2542 += 8;
      v1230 = *v1229;
      if ( !v1230 )
        goto LABEL_2652;
      return *(char **)(v1230 + 8);
    case 11LL:
      v1228 = (__int64 **)((char *)v2544 + v2542);
      v2542 += 8;
      if ( *v1228 )
      {
        sub_7EC00(*v1228);
        qfree();
      }
      return nullptr;
    case 12LL:
      result = (char *)qalloc();
      if ( !result )
        sub_5364B(16);
      *(_QWORD *)result = 0;
      *((_QWORD *)result + 1) = 0;
      return result;
    case 13LL:
      v1674 = v2542;
      v1675 = v2542 + 8;
      v2542 = v1675;
      v1676 = *(_QWORD **)((char *)v2544 + v1674);
      if ( (unsigned int)v1675 > 0x2F )
      {
        v1677 = v2543;
        v2543 += 8;
      }
      else
      {
        v1677 = (char *)v2544 + v1675;
        v2542 = v1674 + 16;
      }
      v1678 = *(__int64 **)v1677;
      if ( *(_QWORD *)v1677 )
      {
        v1679 = *v1678;
        if ( *v1678 && v1678[1] )
          v1679 = *(_QWORD *)(v1679 + 8);
        *v1676 = v1679;
        return nullptr;
      }
      if ( !under_debugger )
LABEL_2212:
        sub_37E160(52638);
      goto LABEL_2707;
    case 14LL:
      v1981 = v2542;
      v1982 = v2542 + 8;
      v2542 = v1982;
      v1983 = *(_QWORD **)((char *)v2544 + v1981);
      if ( (unsigned int)v1982 > 0x2F )
      {
        v1984 = v2543;
        v2543 += 8;
      }
      else
      {
        v1984 = (char *)v2544 + v1982;
        v2542 = v1981 + 16;
      }
      v1985 = *(_QWORD **)v1984;
      if ( !v1985 )
        goto LABEL_2657;
      *v1983 = *v1985;
      return nullptr;
    case 15LL:
      v653 = (_QWORD ***)((char *)v2544 + v2542);
      v654 = *v653;
      *v654 = sub_340430(**v653);
      return nullptr;
    case 16LL:
      v1768 = (_QWORD **)((char *)v2544 + v2542);
      v1769 = *v1768;
      v1770 = (_QWORD *)**v1768;
      if ( (*v1770 & 2) != 0 )
      {
        j = (_QWORD *)v1770[2];
      }
      else
      {
        v1771 = (_QWORD *)v1770[1];
        if ( (*(_BYTE *)v1771 & 2) != 0 )
        {
          for ( j = (_QWORD *)(*v1770 & 0xFFFFFFFFFFFFFFFCLL);
                (*j & 2) == 0 && (_QWORD *)j[1] == v1770;
                j = (_QWORD *)(*j & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v1770 = j;
          }
        }
        else
        {
          do
          {
            j = v1771;
            v1771 = (_QWORD *)v1771[2];
          }
          while ( (*(_BYTE *)v1771 & 2) == 0 );
        }
      }
      *v1769 = j;
      return nullptr;
    case 17LL:
      return (char *)(**(_QWORD **)((char *)v2544 + v2542) + 24LL);
    case 18LL:
      return (char *)(**(_QWORD **)((char *)v2544 + v2542) + 48LL);
    case 19LL:
      v1337 = v2542;
      v1338 = v2542 + 8;
      v2542 = v1338;
      v1339 = *(unsigned __int64 **)((char *)v2544 + v1337);
      if ( (unsigned int)v1338 > 0x2F )
      {
        v2189 = (unsigned __int64 **)v2543;
        v1342 = (int **)(v2543 + 8);
        v2543 += 8;
        v1341 = *v2189;
      }
      else
      {
        v1340 = v1337 + 16;
        v1341 = *(unsigned __int64 **)((char *)v2544 + v1338);
        v2542 = v1340;
        if ( (unsigned int)v1340 <= 0x2F )
        {
          v1342 = (int **)((char *)v2544 + v1340);
          v2542 = v1337 + 24;
          goto LABEL_1209;
        }
        v1342 = (int **)v2543;
      }
      v2543 = (char *)(v1342 + 1);
LABEL_1209:
      if ( !v1341 )
        goto LABEL_2204;
      v1343 = *v1341;
      v1344 = *v1341;
      if ( !*v1341 )
        goto LABEL_1219;
      v1343 = *(_QWORD *)v1343 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v1343 )
        goto LABEL_1219;
      if ( (*(_BYTE *)v1343 & 2) != 0 )
        goto LABEL_1218;
      v1345 = *v1342;
      do
      {
        if ( (int)sub_32B790(v1345, (int *)(v1343 + 24)) >= 0 )
        {
          if ( (int)sub_32B790((int *)(v1343 + 24), v1345) >= 0 )
            goto LABEL_1219;
          v1343 = *(_QWORD *)(v1343 + 16);
        }
        else
        {
          v1343 = *(_QWORD *)(v1343 + 8);
        }
      }
      while ( (*(_BYTE *)v1343 & 2) == 0 );
      v1344 = *v1341;
LABEL_1218:
      v1343 = v1344;
LABEL_1219:
      *v1339 = v1343;
      return nullptr;
    case 20LL:
      v805 = v2542;
      v806 = v2542 + 8;
      v2542 = v806;
      v807 = *(__int64 **)((char *)v2544 + v805);
      if ( (unsigned int)v806 > 0x2F )
      {
        v2353 = (__m128i **)v2543;
        v2354 = v2543 + 8;
        v2543 += 8;
        v809 = *v2353;
      }
      else
      {
        v808 = v805 + 16;
        v809 = *(__m128i **)((char *)v2544 + v806);
        v2542 = v808;
        if ( (unsigned int)v808 <= 0x2F )
        {
          v810 = v805 + 24;
          v811 = *(_QWORD *)((char *)v2544 + v808);
          v2542 = v810;
          if ( (unsigned int)v810 <= 0x2F )
          {
            v812 = (char *)v2544 + v810;
            v2542 = v805 + 32;
            goto LABEL_697;
          }
          v812 = v2543;
LABEL_2070:
          v2543 = v812 + 8;
LABEL_697:
          v813 = *(_QWORD *)v812;
          if ( v809 )
          {
            v2537.m128i_i32[0] = 0;
            copy_argloc();
            v814 = *(_QWORD *)(v811 + 16);
            *(_DWORD *)&v2538[8] = 0;
            *(_QWORD *)v2538 = v814;
            copy_argloc();
            v815 = *(_QWORD *)(v813 + 16);
            *(_DWORD *)v2540 = 0;
            v2539 = v815;
            copy_argloc();
            *(_DWORD *)&v2540[24] = 0;
            *(_QWORD *)&v2540[16] = *(_QWORD *)v2538;
            copy_argloc();
            *(_QWORD *)&v2540[40] = v2539;
            *v807 = sub_3414B0(v809, (int *)v2540);
            cleanup_argloc();
            cleanup_argloc();
            cleanup_argloc();
            cleanup_argloc();
            return nullptr;
          }
LABEL_2532:
          if ( !under_debugger )
            sub_37E160(52635);
          goto LABEL_2707;
        }
        v2354 = v2543;
      }
      v2355 = v2354;
      v812 = v2354 + 8;
      v2543 = v812;
      v811 = *(_QWORD *)v2355;
      goto LABEL_2070;
    case 21LL:
      v800 = v2542;
      v801 = v2542 + 8;
      v2542 = v801;
      v802 = *(unsigned __int64 ***)((char *)v2544 + v800);
      if ( (unsigned int)v801 > 0x2F )
      {
        v803 = (__int64 ***)v2543;
        v2543 += 8;
      }
      else
      {
        v803 = (__int64 ***)((char *)v2544 + v801);
        v2542 = v800 + 16;
      }
      v804 = *v803;
      if ( !v802 )
        goto LABEL_2664;
      sub_214040(v802, *v804);
      return nullptr;
    case 22LL:
      v799 = (unsigned __int64 ***)((char *)v2544 + v2542);
      v2542 += 8;
      if ( !*v799 )
        goto LABEL_2673;
      sub_7FA10(*v799);
      return nullptr;
    case 23LL:
      v797 = (__int64 *)((char *)v2544 + v2542);
      v2542 += 8;
      v798 = *v797;
      if ( !v798 )
        goto LABEL_2652;
      return *(char **)(v798 + 8);
    case 24LL:
      v1128 = (__int64 **)((char *)v2544 + v2542);
      v2542 += 8;
      if ( *v1128 )
      {
        sub_2132E0(*v1128);
        qfree();
      }
      return nullptr;
    case 25LL:
      result = (char *)qalloc();
      if ( !result )
        sub_5364B(16);
      *(_QWORD *)result = 0;
      *((_QWORD *)result + 1) = 0;
      return result;
    case 26LL:
      v1122 = v2542;
      v1123 = v2542 + 8;
      v2542 = v1123;
      v1124 = *(_QWORD **)((char *)v2544 + v1122);
      if ( (unsigned int)v1123 > 0x2F )
      {
        v1125 = v2543;
        v2543 += 8;
      }
      else
      {
        v1125 = (char *)v2544 + v1123;
        v2542 = v1122 + 16;
      }
      v1126 = *(__int64 **)v1125;
      if ( *(_QWORD *)v1125 )
      {
        v1127 = *v1126;
        if ( *v1126 && v1126[1] )
          v1127 = *(_QWORD *)(v1127 + 8);
        *v1124 = v1127;
        return nullptr;
      }
      if ( under_debugger )
        goto LABEL_2707;
      goto LABEL_2212;
    case 27LL:
      v1117 = v2542;
      v1118 = v2542 + 8;
      v2542 = v1118;
      v1119 = *(_QWORD **)((char *)v2544 + v1117);
      if ( (unsigned int)v1118 > 0x2F )
      {
        v1120 = v2543;
        v2543 += 8;
      }
      else
      {
        v1120 = (char *)v2544 + v1118;
        v2542 = v1117 + 16;
      }
      v1121 = *(_QWORD **)v1120;
      if ( !v1121 )
        goto LABEL_2657;
      *v1119 = *v1121;
      return nullptr;
    case 28LL:
      v1604 = (_QWORD ***)((char *)v2544 + v2542);
      v1605 = *v1604;
      *v1605 = sub_3404A0(**v1604);
      return nullptr;
    case 29LL:
      v1599 = (_QWORD **)((char *)v2544 + v2542);
      v1600 = *v1599;
      v1601 = (_QWORD *)**v1599;
      if ( (*v1601 & 2) != 0 )
      {
        k = (_QWORD *)v1601[2];
      }
      else
      {
        v1602 = (_QWORD *)v1601[1];
        if ( (*(_BYTE *)v1602 & 2) != 0 )
        {
          for ( k = (_QWORD *)(*v1601 & 0xFFFFFFFFFFFFFFFCLL);
                (*k & 2) == 0 && (_QWORD *)k[1] == v1601;
                k = (_QWORD *)(*k & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v1601 = k;
          }
        }
        else
        {
          do
          {
            k = v1602;
            v1602 = (_QWORD *)v1602[2];
          }
          while ( (*(_BYTE *)v1602 & 2) == 0 );
        }
      }
      *v1600 = k;
      return nullptr;
    case 30LL:
      return (char *)(**(_QWORD **)((char *)v2544 + v2542) + 24LL);
    case 31LL:
      return (char *)(**(_QWORD **)((char *)v2544 + v2542) + 32LL);
    case 32LL:
      v2082 = v2542;
      v2083 = v2542 + 8;
      v2542 = v2083;
      v2084 = *(_QWORD **)((char *)v2544 + v2082);
      if ( (unsigned int)v2083 > 0x2F )
      {
        v2361 = v2543;
        v2087 = v2543 + 8;
        v2543 += 8;
        v2086 = *(_QWORD ***)v2361;
      }
      else
      {
        v2085 = v2082 + 16;
        v2086 = *(_QWORD ***)((char *)v2544 + v2083);
        v2542 = v2085;
        if ( (unsigned int)v2085 <= 0x2F )
        {
          v2087 = (char *)v2544 + v2085;
          v2542 = v2082 + 24;
          goto LABEL_1912;
        }
        v2087 = v2543;
      }
      v2543 = v2087 + 8;
LABEL_1912:
      if ( !v2086 )
        goto LABEL_2204;
      v2088 = *v2086;
      if ( !*v2086 )
        goto LABEL_1920;
      v2089 = *v2088 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v2089 )
      {
        v2088 = nullptr;
        goto LABEL_1920;
      }
      if ( (*(_BYTE *)v2089 & 2) != 0 )
        goto LABEL_1920;
      v2090 = **(_QWORD **)v2087;
      while ( 2 )
      {
        v2091 = *(_QWORD *)(v2089 + 24);
        if ( v2090 >= v2091 )
        {
          if ( v2091 >= v2090 )
          {
            v2088 = (_QWORD *)v2089;
LABEL_1920:
            *v2084 = v2088;
            return nullptr;
          }
          v2089 = *(_QWORD *)(v2089 + 16);
        }
        else
        {
          v2089 = *(_QWORD *)(v2089 + 8);
        }
        if ( (*(_BYTE *)v2089 & 2) != 0 )
          goto LABEL_1920;
        continue;
      }
    case 33LL:
      v2055 = v2542;
      v2056 = v2542 + 8;
      v2542 = v2056;
      v2057 = *(unsigned __int64 **)((char *)v2544 + v2055);
      if ( (unsigned int)v2056 > 0x2F )
      {
        v2350 = (__m128i **)v2543;
        v2504 = v2543 + 8;
        v2543 += 8;
        v2059 = *v2350;
      }
      else
      {
        v2058 = v2055 + 16;
        v2059 = *(__m128i **)((char *)v2544 + v2056);
        v2542 = v2058;
        if ( (unsigned int)v2058 <= 0x2F )
        {
          v2060 = v2055 + 24;
          v2061 = *(unsigned __int64 **)((char *)v2544 + v2058);
          v2542 = v2060;
          if ( (unsigned int)v2060 <= 0x2F )
          {
            v2062 = (char *)v2544 + v2060;
            v2542 = v2055 + 32;
            goto LABEL_1887;
          }
          v2062 = v2543;
LABEL_2067:
          v2543 = v2062 + 8;
LABEL_1887:
          v2063 = *(_QWORD *)v2062;
          if ( v2059 )
          {
            v2064 = *v2061;
            *(_OWORD *)v2538 = 0;
            v2537 = (__m128i)v2064;
            v2065 = *(_QWORD *)(v2063 + 8);
            if ( v2065 )
            {
              *(_QWORD *)&v2538[8] = *(_QWORD *)(v2063 + 8);
              v2537.m128i_i64[1] = qalloc_or_throw();
              memcpy((void *)v2537.m128i_i64[1], *(const void **)v2063, v2065);
              *(_QWORD *)v2538 = v2065;
            }
            copy_tinfo_t();
            si128 = _mm_load_si128((const __m128i *)v2538);
            *(_QWORD *)&v2540[32] = 0;
            *(__m128i *)v2540 = v2537;
            *(__m128i *)&v2540[16] = si128;
            v2537.m128i_i64[1] = 0;
            memset(v2538, 0, sizeof(v2538));
            copy_tinfo_t();
            *v2057 = sub_341840(v2059, v2540);
            sub_2B08E0(&v2540[8]);
            sub_2B08E0(&v2537.m128i_i64[1]);
            return nullptr;
          }
          goto LABEL_2532;
        }
        v2504 = v2543;
      }
      v2351 = v2504;
      v2062 = v2504 + 8;
      v2543 = v2062;
      v2061 = *(unsigned __int64 **)v2351;
      goto LABEL_2067;
    case 34LL:
      v1378 = v2542;
      v1379 = v2542 + 8;
      v2542 = v1379;
      v1380 = *(unsigned __int64 ***)((char *)v2544 + v1378);
      if ( (unsigned int)v1379 > 0x2F )
      {
        v1381 = (__int64 ***)v2543;
        v2543 += 8;
      }
      else
      {
        v1381 = (__int64 ***)((char *)v2544 + v1379);
        v2542 = v1378 + 16;
      }
      v1382 = *v1381;
      if ( !v1380 )
        goto LABEL_2664;
      sub_341F80(v1380, *v1382);
      return nullptr;
    case 35LL:
      v1377 = (unsigned __int64 ***)((char *)v2544 + v2542);
      v2542 += 8;
      if ( !*v1377 )
        goto LABEL_2673;
      sub_7FD70(*v1377);
      return nullptr;
    case 36LL:
      v1803 = (__int64 *)((char *)v2544 + v2542);
      v2542 += 8;
      v1804 = *v1803;
      if ( !v1804 )
        goto LABEL_2652;
      return *(char **)(v1804 + 8);
    case 37LL:
      v1802 = (__int64 **)((char *)v2544 + v2542);
      v2542 += 8;
      if ( *v1802 )
      {
        sub_2B7CE0(*v1802);
        qfree();
      }
      return nullptr;
    case 38LL:
      result = (char *)qalloc();
      if ( !result )
        sub_5364B(16);
      *(_QWORD *)result = 0;
      *((_QWORD *)result + 1) = 0;
      return result;
    case 39LL:
      v866 = v2542;
      v867 = v2542 + 8;
      v2542 = v867;
      v868 = *(_QWORD **)((char *)v2544 + v866);
      if ( (unsigned int)v867 > 0x2F )
      {
        v869 = v2543;
        v2543 += 8;
      }
      else
      {
        v869 = (char *)v2544 + v867;
        v2542 = v866 + 16;
      }
      v870 = *(__int64 **)v869;
      if ( *(_QWORD *)v869 )
      {
        v871 = *v870;
        if ( *v870 && v870[1] )
          v871 = *(_QWORD *)(v871 + 8);
        *v868 = v871;
        return nullptr;
      }
      if ( under_debugger )
        goto LABEL_2707;
      goto LABEL_2212;
    case 40LL:
      v1179 = v2542;
      v1180 = v2542 + 8;
      v2542 = v1180;
      v1181 = *(_QWORD **)((char *)v2544 + v1179);
      if ( (unsigned int)v1180 > 0x2F )
      {
        v1182 = v2543;
        v2543 += 8;
      }
      else
      {
        v1182 = (char *)v2544 + v1180;
        v2542 = v1179 + 16;
      }
      v1183 = *(_QWORD **)v1182;
      if ( !v1183 )
        goto LABEL_2657;
      *v1181 = *v1183;
      return nullptr;
    case 41LL:
      v1177 = (_QWORD ***)((char *)v2544 + v2542);
      v1178 = *v1177;
      *v1178 = sub_340510(**v1177);
      return nullptr;
    case 42LL:
      v1947 = (_QWORD **)((char *)v2544 + v2542);
      v1948 = *v1947;
      v1949 = (_QWORD *)**v1947;
      if ( (*v1949 & 2) != 0 )
      {
        m = (_QWORD *)v1949[2];
      }
      else
      {
        v1950 = (_QWORD *)v1949[1];
        if ( (*(_BYTE *)v1950 & 2) != 0 )
        {
          for ( m = (_QWORD *)(*v1949 & 0xFFFFFFFFFFFFFFFCLL);
                (*m & 2) == 0 && (_QWORD *)m[1] == v1949;
                m = (_QWORD *)(*m & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v1949 = m;
          }
        }
        else
        {
          do
          {
            m = v1950;
            v1950 = (_QWORD *)v1950[2];
          }
          while ( (*(_BYTE *)v1950 & 2) == 0 );
        }
      }
      *v1948 = m;
      return nullptr;
    case 43LL:
      return (char *)(**(_QWORD **)((char *)v2544 + v2542) + 24LL);
    case 44LL:
      return (char *)(**(_QWORD **)((char *)v2544 + v2542) + 40LL);
    case 45LL:
      v1631 = v2542;
      v1632 = v2542 + 8;
      v2542 = v1632;
      v1633 = *(_QWORD **)((char *)v2544 + v1631);
      if ( (unsigned int)v1632 > 0x2F )
      {
        v2179 = v2543;
        v1636 = v2543 + 8;
        v2543 += 8;
        v1635 = *(_QWORD ***)v2179;
      }
      else
      {
        v1634 = v1631 + 16;
        v1635 = *(_QWORD ***)((char *)v2544 + v1632);
        v2542 = v1634;
        if ( (unsigned int)v1634 <= 0x2F )
        {
          v1636 = (char *)v2544 + v1634;
          v2542 = v1631 + 24;
          goto LABEL_1471;
        }
        v1636 = v2543;
      }
      v2543 = v1636 + 8;
LABEL_1471:
      if ( !v1635 )
        goto LABEL_2204;
      v1637 = *v1635;
      if ( !*v1635 )
        goto LABEL_1480;
      v1638 = *v1637 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v1638 )
      {
        v1637 = nullptr;
        goto LABEL_1480;
      }
      if ( (*(_BYTE *)v1638 & 2) != 0 )
        goto LABEL_1480;
      v1639 = *(unsigned __int64 **)v1636;
      v1640 = *v1639;
      while ( 2 )
      {
        if ( v1640 < *(_QWORD *)(v1638 + 24) )
          goto LABEL_2126;
        if ( v1640 != *(_QWORD *)(v1638 + 24) )
          goto LABEL_1478;
        v2502 = *(_DWORD *)(v1638 + 32);
        if ( *((_DWORD *)v1639 + 2) < v2502 )
        {
LABEL_2126:
          v1638 = *(_QWORD *)(v1638 + 8);
        }
        else
        {
          if ( *((_DWORD *)v1639 + 2) <= v2502 )
          {
            v1637 = (_QWORD *)v1638;
LABEL_1480:
            *v1633 = v1637;
            return nullptr;
          }
LABEL_1478:
          v1638 = *(_QWORD *)(v1638 + 16);
        }
        if ( (*(_BYTE *)v1638 & 2) != 0 )
          goto LABEL_1480;
        continue;
      }
    case 46LL:
      v613 = v2542;
      v614 = v2542 + 8;
      v2542 = v614;
      v615 = *(unsigned __int64 **)((char *)v2544 + v613);
      if ( (unsigned int)v614 > 0x2F )
      {
        v2347 = (__m128i **)v2543;
        v2348 = v2543 + 8;
        v2543 += 8;
        v617 = *v2347;
      }
      else
      {
        v616 = v613 + 16;
        v617 = *(__m128i **)((char *)v2544 + v614);
        v2542 = v616;
        if ( (unsigned int)v616 <= 0x2F )
        {
          v618 = v613 + 24;
          v619 = *(const __m128i **)((char *)v2544 + v616);
          v2542 = v618;
          if ( (unsigned int)v618 <= 0x2F )
          {
            v620 = (char *)v2544 + v618;
            v2542 = v613 + 32;
            goto LABEL_523;
          }
          v620 = v2543;
LABEL_2065:
          v2543 = v620 + 8;
LABEL_523:
          v621 = *(_QWORD *)v620;
          if ( v617 )
          {
            v622 = _mm_loadu_si128(v619);
            v623 = *(_QWORD *)v620;
            memset(v2538, 0, sizeof(v2538));
            v2537 = v622;
            sub_33E770(v2538, v623);
            v624 = _mm_load_si128(&v2537);
            v625 = *(_BYTE *)(v621 + 24);
            v626 = *(_QWORD *)v2538;
            memset(v2538, 0, sizeof(v2538));
            *(__m128i *)v2540 = v624;
            v627 = _mm_loadu_si128((const __m128i *)&v2538[8]);
            LOBYTE(v2539) = v625;
            *(_QWORD *)&v2540[16] = v626;
            v2540[40] = v625;
            *(__m128i *)&v2540[24] = v627;
            *v615 = sub_3424C0(v617, (const __m128i *)v2540);
            if ( *(_QWORD *)&v2540[16] )
            {
              *(_QWORD *)&v2540[24] = 0;
              qfree();
            }
            return nullptr;
          }
          goto LABEL_2532;
        }
        v2348 = v2543;
      }
      v2349 = (const __m128i **)v2348;
      v620 = v2348 + 8;
      v2543 = v620;
      v619 = *v2349;
      goto LABEL_2065;
    case 47LL:
      v608 = v2542;
      v609 = v2542 + 8;
      v2542 = v609;
      v610 = *(unsigned __int64 ***)((char *)v2544 + v608);
      if ( (unsigned int)v609 > 0x2F )
      {
        v611 = (__int64 ***)v2543;
        v2543 += 8;
      }
      else
      {
        v611 = (__int64 ***)((char *)v2544 + v609);
        v2542 = v608 + 16;
      }
      v612 = *v611;
      if ( !v610 )
        goto LABEL_2664;
      sub_257640(v610, *v612);
      return nullptr;
    case 48LL:
      v2006 = (unsigned __int64 ***)((char *)v2544 + v2542);
      v2542 += 8;
      if ( !*v2006 )
        goto LABEL_2673;
      sub_33FE80(*v2006);
      return nullptr;
    case 49LL:
      v1706 = (__int64 *)((char *)v2544 + v2542);
      v2542 += 8;
      v1707 = *v1706;
      if ( !v1707 )
        goto LABEL_2652;
      return *(char **)(v1707 + 8);
    case 50LL:
      v1294 = (__int64 **)((char *)v2544 + v2542);
      v2542 += 8;
      if ( *v1294 )
      {
        sub_2BDC10(*v1294);
        qfree();
      }
      return nullptr;
    case 51LL:
      result = (char *)qalloc();
      if ( !result )
        sub_5364B(16);
      *(_QWORD *)result = 0;
      *((_QWORD *)result + 1) = 0;
      return result;
    case 52LL:
      v747 = v2542;
      v748 = v2542 + 8;
      v2542 = v748;
      v749 = *(_QWORD **)((char *)v2544 + v747);
      if ( (unsigned int)v748 > 0x2F )
      {
        v750 = v2543;
        v2543 += 8;
      }
      else
      {
        v750 = (char *)v2544 + v748;
        v2542 = v747 + 16;
      }
      v751 = *(__int64 **)v750;
      if ( *(_QWORD *)v750 )
      {
        v752 = *v751;
        if ( *v751 && v751[1] )
          v752 = *(_QWORD *)(v752 + 8);
        *v749 = v752;
        return nullptr;
      }
      if ( under_debugger )
        goto LABEL_2707;
      goto LABEL_2212;
    case 53LL:
      v742 = v2542;
      v743 = v2542 + 8;
      v2542 = v743;
      v744 = *(_QWORD **)((char *)v2544 + v742);
      if ( (unsigned int)v743 > 0x2F )
      {
        v745 = v2543;
        v2543 += 8;
      }
      else
      {
        v745 = (char *)v2544 + v743;
        v2542 = v742 + 16;
      }
      v746 = *(_QWORD **)v745;
      if ( !v746 )
        goto LABEL_2657;
      *v744 = *v746;
      return nullptr;
    case 54LL:
      v740 = (_QWORD ***)((char *)v2544 + v2542);
      v741 = *v740;
      *v741 = sub_340580(**v740);
      return nullptr;
    case 55LL:
      v735 = (_QWORD **)((char *)v2544 + v2542);
      v736 = *v735;
      v737 = (_QWORD *)**v735;
      if ( (*v737 & 2) != 0 )
      {
        n = (_QWORD *)v737[2];
      }
      else
      {
        v738 = (_QWORD *)v737[1];
        if ( (*(_BYTE *)v738 & 2) != 0 )
        {
          for ( n = (_QWORD *)(*v737 & 0xFFFFFFFFFFFFFFFCLL);
                (*n & 2) == 0 && (_QWORD *)n[1] == v737;
                n = (_QWORD *)(*n & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v737 = n;
          }
        }
        else
        {
          do
          {
            n = v738;
            v738 = (_QWORD *)v738[2];
          }
          while ( (*(_BYTE *)v738 & 2) == 0 );
        }
      }
      *v736 = n;
      return nullptr;
    case 56LL:
      return (char *)(**(_QWORD **)((char *)v2544 + v2542) + 24LL);
    case 57LL:
      return (char *)(**(_QWORD **)((char *)v2544 + v2542) + 40LL);
    case 58LL:
      v1047 = v2542;
      v1048 = v2542 + 8;
      v2542 = v1048;
      v1049 = *(_QWORD **)((char *)v2544 + v1047);
      if ( (unsigned int)v1048 > 0x2F )
      {
        v2277 = v2543;
        v1052 = (__int64 *)(v2543 + 8);
        v2543 += 8;
        v1051 = *(_QWORD ***)v2277;
      }
      else
      {
        v1050 = v1047 + 16;
        v1051 = *(_QWORD ***)((char *)v2544 + v1048);
        v2542 = v1050;
        if ( (unsigned int)v1050 <= 0x2F )
        {
          v1052 = (__int64 *)((char *)v2544 + v1050);
          v2542 = v1047 + 24;
          goto LABEL_922;
        }
        v1052 = (__int64 *)v2543;
      }
      v2543 = (char *)(v1052 + 1);
LABEL_922:
      if ( !v1051 )
        goto LABEL_2204;
      v1053 = *v1051;
      v1054 = *v1051;
      if ( !*v1051 )
        goto LABEL_932;
      v1053 = (_QWORD *)(*v1053 & 0xFFFFFFFFFFFFFFFCLL);
      if ( !v1053 )
        goto LABEL_932;
      if ( (*(_BYTE *)v1053 & 2) != 0 )
        goto LABEL_931;
      v1055 = *v1052;
      do
      {
        if ( (int)sub_2533F0(v1055, (__int64)(v1053 + 3)) >= 0 )
        {
          if ( (int)sub_2533F0((__int64)(v1053 + 3), v1055) >= 0 )
            goto LABEL_932;
          v1053 = (_QWORD *)v1053[2];
        }
        else
        {
          v1053 = (_QWORD *)v1053[1];
        }
      }
      while ( (*(_BYTE *)v1053 & 2) == 0 );
      v1054 = *v1051;
LABEL_931:
      v1053 = v1054;
LABEL_932:
      *v1049 = v1053;
      return nullptr;
    case 59LL:
      v1036 = v2542;
      v1037 = v2542 + 8;
      v2542 = v1037;
      v1038 = *(unsigned __int64 **)((char *)v2544 + v1036);
      if ( (unsigned int)v1037 > 0x2F )
      {
        v2269 = (__m128i **)v2543;
        v2270 = v2543 + 8;
        v2543 += 8;
        v1040 = *v2269;
      }
      else
      {
        v1039 = v1036 + 16;
        v1040 = *(__m128i **)((char *)v2544 + v1037);
        v2542 = v1039;
        if ( (unsigned int)v1039 <= 0x2F )
        {
          v1041 = v1036 + 24;
          v1042 = *(_QWORD *)((char *)v2544 + v1039);
          v2542 = v1041;
          if ( (unsigned int)v1041 <= 0x2F )
          {
            v1043 = (char *)v2544 + v1041;
            v2542 = v1036 + 32;
            goto LABEL_917;
          }
          v1043 = v2543;
LABEL_2030:
          v2543 = v1043 + 8;
LABEL_917:
          v1044 = *(int **)v1043;
          if ( v1040 )
          {
            v1045 = *(_DWORD *)(v1042 + 8);
            v1046 = *v1044;
            *(_QWORD *)v2540 = *(_QWORD *)v1042;
            *(_DWORD *)&v2540[8] = v1045;
            *(_DWORD *)&v2540[16] = v1046;
            *v1038 = sub_342680(v1040, (const __m128i *)v2540);
            return nullptr;
          }
          goto LABEL_2532;
        }
        v2270 = v2543;
      }
      v2271 = v2270;
      v1043 = v2270 + 8;
      v2543 = v1043;
      v1042 = *(_QWORD *)v2271;
      goto LABEL_2030;
    case 60LL:
      v1552 = v2542;
      v1553 = v2542 + 8;
      v2542 = v1553;
      v1554 = *(unsigned __int64 ***)((char *)v2544 + v1552);
      if ( (unsigned int)v1553 > 0x2F )
      {
        v1555 = (__int64 ***)v2543;
        v2543 += 8;
      }
      else
      {
        v1555 = (__int64 ***)((char *)v2544 + v1553);
        v2542 = v1552 + 16;
      }
      v1556 = *v1555;
      if ( !v1554 )
        goto LABEL_2664;
      sub_258960(v1554, *v1556);
      return nullptr;
    case 61LL:
      v1551 = (unsigned __int64 ***)((char *)v2544 + v2542);
      v2542 += 8;
      if ( !*v1551 )
        goto LABEL_2673;
      sub_33FF90(*v1551);
      return nullptr;
    case 62LL:
      v1873 = (__int64 *)((char *)v2544 + v2542);
      v2542 += 8;
      v1874 = *v1873;
      if ( !v1874 )
        goto LABEL_2652;
      return *(char **)(v1874 + 8);
    case 63LL:
      v388 = (__int64 **)((char *)v2544 + v2542);
      v2542 += 8;
      if ( *v388 )
      {
        sub_2BDF10(*v388);
        qfree();
      }
      return nullptr;
    case 64LL:
      result = (char *)qalloc();
      if ( !result )
        sub_5364B(16);
      *(_QWORD *)result = 0;
      *((_QWORD *)result + 1) = 0;
      return result;
    case 65LL:
      v1430 = v2542;
      v1431 = v2542 + 8;
      v2542 = v1431;
      v1432 = *(_QWORD **)((char *)v2544 + v1430);
      if ( (unsigned int)v1431 > 0x2F )
      {
        v1433 = v2543;
        v2543 += 8;
      }
      else
      {
        v1433 = (char *)v2544 + v1431;
        v2542 = v1430 + 16;
      }
      v1434 = *(__int64 **)v1433;
      if ( *(_QWORD *)v1433 )
      {
        v1435 = *v1434;
        if ( *v1434 && v1434[1] )
          v1435 = *(_QWORD *)(v1435 + 8);
        *v1432 = v1435;
        return nullptr;
      }
      if ( !under_debugger )
        goto LABEL_2212;
      goto LABEL_2707;
    case 66LL:
      v2046 = v2542;
      v2047 = v2542 + 8;
      v2542 = v2047;
      v2048 = *(_QWORD **)((char *)v2544 + v2046);
      if ( (unsigned int)v2047 > 0x2F )
      {
        v2049 = v2543;
        v2543 += 8;
      }
      else
      {
        v2049 = (char *)v2544 + v2047;
        v2542 = v2046 + 16;
      }
      v2050 = *(_QWORD **)v2049;
      if ( !v2050 )
        goto LABEL_2657;
      *v2048 = *v2050;
      return nullptr;
    case 67LL:
      v1428 = (_QWORD ***)((char *)v2544 + v2542);
      v1429 = *v1428;
      *v1429 = sub_3405F0(**v1428);
      return nullptr;
    case 68LL:
      v1817 = (_QWORD **)((char *)v2544 + v2542);
      v1818 = *v1817;
      v1819 = (_QWORD *)**v1817;
      if ( (*v1819 & 2) != 0 )
      {
        ii = (_QWORD *)v1819[2];
      }
      else
      {
        v1820 = (_QWORD *)v1819[1];
        if ( (*(_BYTE *)v1820 & 2) != 0 )
        {
          for ( ii = (_QWORD *)(*v1819 & 0xFFFFFFFFFFFFFFFCLL);
                (*ii & 2) == 0 && (_QWORD *)ii[1] == v1819;
                ii = (_QWORD *)(*ii & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v1819 = ii;
          }
        }
        else
        {
          do
          {
            ii = v1820;
            v1820 = (_QWORD *)v1820[2];
          }
          while ( (*(_BYTE *)v1820 & 2) == 0 );
        }
      }
      *v1818 = ii;
      return nullptr;
    case 69LL:
      return (char *)(**(_QWORD **)((char *)v2544 + v2542) + 24LL);
    case 70LL:
      return (char *)(**(_QWORD **)((char *)v2544 + v2542) + 32LL);
    case 71LL:
      v894 = v2542;
      v895 = v2542 + 8;
      v2542 = v895;
      v896 = *(_QWORD **)((char *)v2544 + v894);
      if ( (unsigned int)v895 > 0x2F )
      {
        v2358 = v2543;
        v899 = v2543 + 8;
        v2543 += 8;
        v898 = *(_QWORD ***)v2358;
      }
      else
      {
        v897 = v894 + 16;
        v898 = *(_QWORD ***)((char *)v2544 + v895);
        v2542 = v897;
        if ( (unsigned int)v897 <= 0x2F )
        {
          v899 = (char *)v2544 + v897;
          v2542 = v894 + 24;
          goto LABEL_787;
        }
        v899 = v2543;
      }
      v2543 = v899 + 8;
LABEL_787:
      if ( !v898 )
        goto LABEL_2204;
      v900 = *v898;
      if ( !*v898 )
        goto LABEL_795;
      v901 = *v900 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v901 )
      {
        v900 = nullptr;
        goto LABEL_795;
      }
      if ( (*(_BYTE *)v901 & 2) != 0 )
        goto LABEL_795;
      v902 = **(_QWORD **)v899;
      while ( 2 )
      {
        v903 = *(_QWORD *)(v901 + 24);
        if ( v902 >= v903 )
        {
          if ( v903 >= v902 )
          {
            v900 = (_QWORD *)v901;
LABEL_795:
            *v896 = v900;
            return nullptr;
          }
          v901 = *(_QWORD *)(v901 + 16);
        }
        else
        {
          v901 = *(_QWORD *)(v901 + 8);
        }
        if ( (*(_BYTE *)v901 & 2) != 0 )
          goto LABEL_795;
        continue;
      }
    case 72LL:
      v1203 = v2542;
      v1204 = v2542 + 8;
      v2542 = v1204;
      v1205 = *(__int64 **)((char *)v2544 + v1203);
      if ( (unsigned int)v1204 > 0x2F )
      {
        v2356 = (__m128i **)v2543;
        v2503 = v2543 + 8;
        v2543 += 8;
        v1207 = *v2356;
      }
      else
      {
        v1206 = v1203 + 16;
        v1207 = *(__m128i **)((char *)v2544 + v1204);
        v2542 = v1206;
        if ( (unsigned int)v1206 <= 0x2F )
        {
          v1208 = v1203 + 24;
          v1209 = *(__int64 **)((char *)v2544 + v1206);
          v2542 = v1208;
          if ( (unsigned int)v1208 <= 0x2F )
          {
            v1210 = (char *)v2544 + v1208;
            v2542 = v1203 + 32;
            goto LABEL_1091;
          }
          v1210 = v2543;
LABEL_2075:
          v2543 = v1210 + 8;
LABEL_1091:
          v1211 = *(_QWORD *)v1210;
          if ( !v1207 )
            goto LABEL_2532;
          v1212 = *(_QWORD *)(v1211 + 8);
          v1213 = *v1209;
          v1214 = nullptr;
          v1215 = _mm_unpacklo_epi64((__m128i)v1212, (__m128i)v1212);
          if ( v1212 )
          {
            v2496 = 4 * v1212;
            v2535 = v1215;
            v2497 = (void *)qalloc_or_throw();
            v2498 = memcpy(v2497, *(const void **)v1211, v2496);
            v1215 = _mm_load_si128(&v2535);
            v1214 = v2498;
          }
          *(_QWORD *)v2540 = v1213;
          *(_QWORD *)&v2540[8] = v1214;
          *(__m128i *)&v2540[16] = v1215;
          *v1205 = sub_342AF0(v1207, (const __m128i *)v2540);
          if ( !*(_QWORD *)&v2540[8] )
            return nullptr;
LABEL_1095:
          *(_QWORD *)&v2540[16] = 0;
          qfree();
          return nullptr;
        }
        v2503 = v2543;
      }
      v2357 = v2503;
      v1210 = v2503 + 8;
      v2543 = v1210;
      v1209 = *(__int64 **)v2357;
      goto LABEL_2075;
    case 73LL:
      v1198 = v2542;
      v1199 = v2542 + 8;
      v2542 = v1199;
      v1200 = *(unsigned __int64 ***)((char *)v2544 + v1198);
      if ( (unsigned int)v1199 > 0x2F )
      {
        v1201 = (__int64 ***)v2543;
        v2543 += 8;
      }
      else
      {
        v1201 = (__int64 ***)((char *)v2544 + v1199);
        v2542 = v1198 + 16;
      }
      v1202 = *v1201;
      if ( !v1200 )
        goto LABEL_2664;
      sub_259990(v1200, *v1202);
      return nullptr;
    case 74LL:
      v1966 = (unsigned __int64 ***)((char *)v2544 + v2542);
      v2542 += 8;
      if ( !*v1966 )
        goto LABEL_2673;
      sub_340090(*v1966);
      return nullptr;
    case 75LL:
      v1196 = (__int64 *)((char *)v2544 + v2542);
      v2542 += 8;
      v1197 = *v1196;
      if ( !v1197 )
        goto LABEL_2652;
      return *(char **)(v1197 + 8);
    case 76LL:
      v1655 = (__int64 **)((char *)v2544 + v2542);
      v2542 += 8;
      if ( *v1655 )
      {
        sub_2BE140(*v1655);
        qfree();
      }
      return nullptr;
    case 77LL:
      result = (char *)qalloc();
      if ( !result )
        sub_5364B(16);
      *(_QWORD *)result = 0;
      *((_QWORD *)result + 1) = 0;
      return result;
    case 78LL:
      v2108 = v2542;
      v2109 = v2542 + 8;
      v2542 = v2109;
      v2110 = *(_QWORD **)((char *)v2544 + v2108);
      if ( (unsigned int)v2109 > 0x2F )
      {
        v2111 = v2543;
        v2543 += 8;
      }
      else
      {
        v2111 = (char *)v2544 + v2109;
        v2542 = v2108 + 16;
      }
      v2112 = *(__int64 **)v2111;
      if ( *(_QWORD *)v2111 )
      {
        v2113 = *v2112;
        if ( *v2112 && v2112[1] )
          v2113 = *(_QWORD *)(v2113 + 8);
        *v2110 = v2113;
        return nullptr;
      }
      if ( under_debugger )
        goto LABEL_2707;
      goto LABEL_2212;
    case 79LL:
      v648 = v2542;
      v649 = v2542 + 8;
      v2542 = v649;
      v650 = *(_QWORD **)((char *)v2544 + v648);
      if ( (unsigned int)v649 > 0x2F )
      {
        v651 = v2543;
        v2543 += 8;
      }
      else
      {
        v651 = (char *)v2544 + v649;
        v2542 = v648 + 16;
      }
      v652 = *(_QWORD **)v651;
      if ( !v652 )
        goto LABEL_2657;
      *v650 = *v652;
      return nullptr;
    case 80LL:
      v2118 = (_QWORD ***)((char *)v2544 + v2542);
      v2119 = *v2118;
      *v2119 = sub_340660(**v2118);
      return nullptr;
    case 81LL:
      v2018 = (_QWORD **)((char *)v2544 + v2542);
      v2019 = *v2018;
      v2020 = (_QWORD *)**v2018;
      if ( (*v2020 & 2) != 0 )
      {
        jj = (_QWORD *)v2020[2];
      }
      else
      {
        v2021 = (_QWORD *)v2020[1];
        if ( (*(_BYTE *)v2021 & 2) != 0 )
        {
          for ( jj = (_QWORD *)(*v2020 & 0xFFFFFFFFFFFFFFFCLL);
                (*jj & 2) == 0 && (_QWORD *)jj[1] == v2020;
                jj = (_QWORD *)(*jj & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v2020 = jj;
          }
        }
        else
        {
          do
          {
            jj = v2021;
            v2021 = (_QWORD *)v2021[2];
          }
          while ( (*(_BYTE *)v2021 & 2) == 0 );
        }
      }
      *v2019 = jj;
      return nullptr;
    case 82LL:
      return (char *)(**(_QWORD **)((char *)v2544 + v2542) + 24LL);
    case 83LL:
      return (char *)(**(_QWORD **)((char *)v2544 + v2542) + 32LL);
    case 84LL:
      v2073 = v2542;
      v2074 = v2542 + 8;
      v2542 = v2074;
      v2075 = *(_QWORD **)((char *)v2544 + v2073);
      if ( (unsigned int)v2074 > 0x2F )
      {
        v2375 = v2543;
        v2078 = v2543 + 8;
        v2543 += 8;
        v2077 = *(_QWORD ***)v2375;
      }
      else
      {
        v2076 = v2073 + 16;
        v2077 = *(_QWORD ***)((char *)v2544 + v2074);
        v2542 = v2076;
        if ( (unsigned int)v2076 <= 0x2F )
        {
          v2078 = (char *)v2544 + v2076;
          v2542 = v2073 + 24;
          goto LABEL_1899;
        }
        v2078 = v2543;
      }
      v2543 = v2078 + 8;
LABEL_1899:
      if ( !v2077 )
        goto LABEL_2204;
      v2079 = *v2077;
      if ( !*v2077 )
        goto LABEL_1907;
      v2080 = *v2079 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v2080 )
      {
        v2079 = nullptr;
        goto LABEL_1907;
      }
      if ( (*(_BYTE *)v2080 & 2) != 0 )
        goto LABEL_1907;
      v2081 = **(_DWORD **)v2078;
      while ( 2 )
      {
        if ( v2081 >= *(_DWORD *)(v2080 + 24) )
        {
          if ( v2081 <= *(_DWORD *)(v2080 + 24) )
          {
            v2079 = (_QWORD *)v2080;
LABEL_1907:
            *v2075 = v2079;
            return nullptr;
          }
          v2080 = *(_QWORD *)(v2080 + 16);
        }
        else
        {
          v2080 = *(_QWORD *)(v2080 + 8);
        }
        if ( (*(_BYTE *)v2080 & 2) != 0 )
          goto LABEL_1907;
        continue;
      }
    case 85LL:
      v1721 = v2542;
      v1722 = v2542 + 8;
      v2542 = v1722;
      v1723 = *(__int64 **)((char *)v2544 + v1721);
      if ( (unsigned int)v1722 > 0x2F )
      {
        v2166 = (__m128i **)v2543;
        v2530 = v2543 + 8;
        v2543 += 8;
        v1725 = *v2166;
      }
      else
      {
        v1724 = v1721 + 16;
        v1725 = *(__m128i **)((char *)v2544 + v1722);
        v2542 = v1724;
        if ( (unsigned int)v1724 <= 0x2F )
        {
          v1726 = v1721 + 24;
          v1727 = *(__int32 **)((char *)v2544 + v1724);
          v2542 = v1726;
          if ( (unsigned int)v1726 <= 0x2F )
          {
            v1728 = (__int64 *)((char *)v2544 + v1726);
            v2542 = v1721 + 32;
            goto LABEL_1569;
          }
          v1728 = (__int64 *)v2543;
LABEL_1983:
          v2543 = (char *)(v1728 + 1);
LABEL_1569:
          v1729 = *v1728;
          if ( v1725 )
          {
            v1730 = *v1727;
            *(_OWORD *)v2538 = 0;
            v2537.m128i_i32[0] = v1730;
            v2537.m128i_i64[1] = 0;
            sub_33E770(&v2537.m128i_i64[1], v1729);
            v1731 = _mm_load_si128((const __m128i *)v2538);
            *(_DWORD *)v2540 = v2537.m128i_i32[0];
            *(__m128i *)&v2540[16] = v1731;
            *(_QWORD *)&v2540[8] = v2537.m128i_i64[1];
            *v1723 = sub_342DA0(v1725, (const __m128i *)v2540);
            if ( *(_QWORD *)&v2540[8] )
            {
              *(_QWORD *)&v2540[16] = 0;
              qfree();
            }
            return nullptr;
          }
          goto LABEL_2532;
        }
        v2530 = v2543;
      }
      v2167 = (__int32 **)v2530;
      v1728 = (__int64 *)(v2530 + 8);
      v2543 = (char *)v1728;
      v1727 = *v2167;
      goto LABEL_1983;
    case 86LL:
      v776 = v2542;
      v777 = v2542 + 8;
      v2542 = v777;
      v778 = *(unsigned __int64 ***)((char *)v2544 + v776);
      if ( (unsigned int)v777 > 0x2F )
      {
        v779 = (__int64 ***)v2543;
        v2543 += 8;
      }
      else
      {
        v779 = (__int64 ***)((char *)v2544 + v777);
        v2542 = v776 + 16;
      }
      v780 = *v779;
      if ( !v778 )
        goto LABEL_2664;
      sub_343530(v778, *v780);
      return nullptr;
    case 87LL:
      v775 = (unsigned __int64 ***)((char *)v2544 + v2542);
      v2542 += 8;
      if ( !*v775 )
        goto LABEL_2673;
      sub_33FC60(*v775);
      return nullptr;
    case 88LL:
      v1895 = (__int64 *)((char *)v2544 + v2542);
      v2542 += 8;
      v1896 = *v1895;
      if ( !v1896 )
        goto LABEL_2652;
      return *(char **)(v1896 + 8);
    case 89LL:
      v1894 = (__int64 **)((char *)v2544 + v2542);
      v2542 += 8;
      if ( *v1894 )
      {
        sub_2B72B0(*v1894);
        qfree();
      }
      return nullptr;
    case 90LL:
      result = (char *)qalloc();
      if ( !result )
        sub_5364B(16);
      *(_QWORD *)result = 0;
      *((_QWORD *)result + 1) = 0;
      return result;
    case 91LL:
      v1064 = v2542;
      v1065 = v2542 + 8;
      v2542 = v1065;
      v1066 = *(_QWORD **)((char *)v2544 + v1064);
      if ( (unsigned int)v1065 > 0x2F )
      {
        v1067 = v2543;
        v2543 += 8;
      }
      else
      {
        v1067 = (char *)v2544 + v1065;
        v2542 = v1064 + 16;
      }
      v1068 = *(__int64 **)v1067;
      if ( *(_QWORD *)v1067 )
      {
        v1069 = *v1068;
        if ( *v1068 && v1068[1] )
          v1069 = *(_QWORD *)(v1069 + 8);
        *v1066 = v1069;
        return nullptr;
      }
      if ( under_debugger )
        goto LABEL_2707;
      goto LABEL_2212;
    case 92LL:
      v405 = v2542;
      v406 = v2542 + 8;
      v2542 = v406;
      v407 = *(_QWORD **)((char *)v2544 + v405);
      if ( (unsigned int)v406 > 0x2F )
      {
        v408 = v2543;
        v2543 += 8;
      }
      else
      {
        v408 = (char *)v2544 + v406;
        v2542 = v405 + 16;
      }
      v409 = *(_QWORD **)v408;
      if ( !v409 )
        goto LABEL_2657;
      *v407 = *v409;
      return nullptr;
    case 93LL:
      v403 = (_QWORD ***)((char *)v2544 + v2542);
      v404 = *v403;
      *v404 = sub_3406D0(**v403);
      return nullptr;
    case 94LL:
      v1575 = (_QWORD **)((char *)v2544 + v2542);
      v1576 = *v1575;
      v1577 = (_QWORD *)**v1575;
      if ( (*v1577 & 2) != 0 )
      {
        kk = (_QWORD *)v1577[2];
      }
      else
      {
        v1578 = (_QWORD *)v1577[1];
        if ( (*(_BYTE *)v1578 & 2) != 0 )
        {
          for ( kk = (_QWORD *)(*v1577 & 0xFFFFFFFFFFFFFFFCLL);
                (*kk & 2) == 0 && (_QWORD *)kk[1] == v1577;
                kk = (_QWORD *)(*kk & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v1577 = kk;
          }
        }
        else
        {
          do
          {
            kk = v1578;
            v1578 = (_QWORD *)v1578[2];
          }
          while ( (*(_BYTE *)v1578 & 2) == 0 );
        }
      }
      *v1576 = kk;
      return nullptr;
    case 95LL:
      return (char *)(**(_QWORD **)((char *)v2544 + v2542) + 24LL);
    case 96LL:
      return (char *)(**(_QWORD **)((char *)v2544 + v2542) + 32LL);
    case 97LL:
      v1855 = v2542;
      v1856 = v2542 + 8;
      v2542 = v1856;
      v1857 = *(_QWORD **)((char *)v2544 + v1855);
      if ( (unsigned int)v1856 > 0x2F )
      {
        v2362 = v2543;
        v1860 = v2543 + 8;
        v2543 += 8;
        v1859 = *(_QWORD ***)v2362;
      }
      else
      {
        v1858 = v1855 + 16;
        v1859 = *(_QWORD ***)((char *)v2544 + v1856);
        v2542 = v1858;
        if ( (unsigned int)v1858 <= 0x2F )
        {
          v1860 = (char *)v2544 + v1858;
          v2542 = v1855 + 24;
          goto LABEL_1688;
        }
        v1860 = v2543;
      }
      v2543 = v1860 + 8;
LABEL_1688:
      if ( !v1859 )
        goto LABEL_2204;
      v1861 = *v1859;
      if ( !*v1859 )
        goto LABEL_1696;
      v1862 = *v1861 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v1862 )
      {
        v1861 = nullptr;
        goto LABEL_1696;
      }
      if ( (*(_BYTE *)v1862 & 2) != 0 )
        goto LABEL_1696;
      v1863 = **(_QWORD **)v1860;
      while ( 2 )
      {
        v1864 = *(_QWORD *)(v1862 + 24);
        if ( v1863 >= v1864 )
        {
          if ( v1864 >= v1863 )
          {
            v1861 = (_QWORD *)v1862;
LABEL_1696:
            *v1857 = v1861;
            return nullptr;
          }
          v1862 = *(_QWORD *)(v1862 + 16);
        }
        else
        {
          v1862 = *(_QWORD *)(v1862 + 8);
        }
        if ( (*(_BYTE *)v1862 & 2) != 0 )
          goto LABEL_1696;
        continue;
      }
    case 98LL:
      v1916 = v2542;
      v1917 = v2542 + 8;
      v2542 = v1917;
      v1918 = *(__int64 **)((char *)v2544 + v1916);
      if ( (unsigned int)v1917 > 0x2F )
      {
        v2372 = (__m128i **)v2543;
        v2373 = v2543 + 8;
        v2543 += 8;
        v1920 = *v2372;
      }
      else
      {
        v1919 = v1916 + 16;
        v1920 = *(__m128i **)((char *)v2544 + v1917);
        v2542 = v1919;
        if ( (unsigned int)v1919 <= 0x2F )
        {
          v1921 = v1916 + 24;
          v1922 = *(__int64 **)((char *)v2544 + v1919);
          v2542 = v1921;
          if ( (unsigned int)v1921 <= 0x2F )
          {
            v1923 = (char *)v2544 + v1921;
            v2542 = v1916 + 32;
            goto LABEL_1753;
          }
          v1923 = v2543;
LABEL_2084:
          v2543 = v1923 + 8;
LABEL_1753:
          v1924 = *(_QWORD *)v1923;
          if ( !v1920 )
            goto LABEL_2532;
          v1925 = *(_QWORD *)(v1924 + 8);
          v1926 = *v1922;
          v1927 = nullptr;
          v1928 = _mm_unpacklo_epi64((__m128i)v1925, (__m128i)v1925);
          if ( v1925 )
          {
            v2493 = 8 * v1925;
            v2535 = v1928;
            v2494 = (void *)qalloc_or_throw();
            v2495 = memcpy(v2494, *(const void **)v1924, v2493);
            v1928 = _mm_load_si128(&v2535);
            v1927 = v2495;
          }
          *(_QWORD *)v2540 = v1926;
          *(_QWORD *)&v2540[8] = v1927;
          *(__m128i *)&v2540[16] = v1928;
          *v1918 = sub_343E10(v1920, (const __m128i *)v2540);
          if ( !*(_QWORD *)&v2540[8] )
            return nullptr;
          goto LABEL_1095;
        }
        v2373 = v2543;
      }
      v2374 = v2373;
      v1923 = v2373 + 8;
      v2543 = v1923;
      v1922 = *(__int64 **)v2374;
      goto LABEL_2084;
    case 99LL:
      v1352 = v2542;
      v1353 = v2542 + 8;
      v2542 = v1353;
      v1354 = *(unsigned __int64 ***)((char *)v2544 + v1352);
      if ( (unsigned int)v1353 > 0x2F )
      {
        v1355 = (__int64 ***)v2543;
        v2543 += 8;
      }
      else
      {
        v1355 = (__int64 ***)((char *)v2544 + v1353);
        v2542 = v1352 + 16;
      }
      v1356 = *v1355;
      if ( !v1354 )
        goto LABEL_2664;
      sub_3445A0(v1354, *v1356);
      return nullptr;
    case 100LL:
      v1785 = (unsigned __int64 ***)((char *)v2544 + v2542);
      v2542 += 8;
      if ( !*v1785 )
        goto LABEL_2673;
      sub_3401A0(*v1785);
      return nullptr;
    case 101LL:
      v1783 = (__int64 *)((char *)v2544 + v2542);
      v2542 += 8;
      v1784 = *v1783;
      if ( !v1784 )
        goto LABEL_2652;
      return *(char **)(v1784 + 8);
    case 102LL:
      v1786 = (__int64 **)((char *)v2544 + v2542);
      v2542 += 8;
      if ( *v1786 )
      {
        sub_33FA00(*v1786);
        qfree();
      }
      return nullptr;
    case 103LL:
      result = (char *)qalloc();
      if ( !result )
        sub_5364B(16);
      *(_QWORD *)result = 0;
      *((_QWORD *)result + 1) = 0;
      return result;
    case 104LL:
      v509 = v2542;
      v510 = v2542 + 8;
      v2542 = v510;
      v511 = *(_QWORD **)((char *)v2544 + v509);
      if ( (unsigned int)v510 > 0x2F )
      {
        v512 = v2543;
        v2543 += 8;
      }
      else
      {
        v512 = (char *)v2544 + v510;
        v2542 = v509 + 16;
      }
      v513 = *(__int64 **)v512;
      if ( *(_QWORD *)v512 )
      {
        v514 = *v513;
        if ( *v513 && v513[1] )
          v514 = *(_QWORD *)(v514 + 8);
        *v511 = v514;
        return nullptr;
      }
      if ( under_debugger )
        goto LABEL_2707;
      goto LABEL_2212;
    case 105LL:
      v504 = v2542;
      v505 = v2542 + 8;
      v2542 = v505;
      v506 = *(_QWORD **)((char *)v2544 + v504);
      if ( (unsigned int)v505 > 0x2F )
      {
        v507 = v2543;
        v2543 += 8;
      }
      else
      {
        v507 = (char *)v2544 + v505;
        v2542 = v504 + 16;
      }
      v508 = *(_QWORD **)v507;
      if ( !v508 )
        goto LABEL_2657;
      *v506 = *v508;
      return nullptr;
    case 106LL:
      v502 = (_QWORD ***)((char *)v2544 + v2542);
      v503 = *v502;
      *v503 = sub_340740(**v502);
      return nullptr;
    case 107LL:
      v497 = (_QWORD **)((char *)v2544 + v2542);
      v498 = *v497;
      v499 = (_QWORD *)**v497;
      if ( (*v499 & 2) != 0 )
      {
        mm = (_QWORD *)v499[2];
      }
      else
      {
        v500 = (_QWORD *)v499[1];
        if ( (*(_BYTE *)v500 & 2) != 0 )
        {
          for ( mm = (_QWORD *)(*v499 & 0xFFFFFFFFFFFFFFFCLL);
                (*mm & 2) == 0 && (_QWORD *)mm[1] == v499;
                mm = (_QWORD *)(*mm & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v499 = mm;
          }
        }
        else
        {
          do
          {
            mm = v500;
            v500 = (_QWORD *)v500[2];
          }
          while ( (*(_BYTE *)v500 & 2) == 0 );
        }
      }
      *v498 = mm;
      return nullptr;
    case 108LL:
      return (char *)(**(_QWORD **)((char *)v2544 + v2542) + 24LL);
    case 109LL:
      return (char *)(**(_QWORD **)((char *)v2544 + v2542) + 32LL);
    case 110LL:
      v1148 = v2542;
      v1149 = v2542 + 8;
      v2542 = v1149;
      v1150 = *(_QWORD **)((char *)v2544 + v1148);
      if ( (unsigned int)v1149 > 0x2F )
      {
        v2209 = v2543;
        v1153 = (__int64 **)(v2543 + 8);
        v2543 += 8;
        v1152 = *(_QWORD ***)v2209;
      }
      else
      {
        v1151 = v1148 + 16;
        v1152 = *(_QWORD ***)((char *)v2544 + v1149);
        v2542 = v1151;
        if ( (unsigned int)v1151 <= 0x2F )
        {
          v1153 = (__int64 **)((char *)v2544 + v1151);
          v2542 = v1148 + 24;
          goto LABEL_1026;
        }
        v1153 = (__int64 **)v2543;
      }
      v2543 = (char *)(v1153 + 1);
LABEL_1026:
      if ( !v1152 )
      {
LABEL_2204:
        if ( !under_debugger )
          sub_37E160(52634);
        goto LABEL_2707;
      }
      v1154 = *v1152;
      v1155 = *v1152;
      if ( !*v1152 )
        goto LABEL_1043;
      v1154 = (_QWORD *)(*v1154 & 0xFFFFFFFFFFFFFFFCLL);
      if ( !v1154 )
        goto LABEL_1043;
      if ( (*(_BYTE *)v1154 & 2) == 0 )
      {
        v1156 = *v1153;
        while ( 1 )
        {
          v1157 = (char *)v1154[3];
          v1158 = (char *)*v1156;
          v2535.m128i_i64[0] = (__int64)(v1154 + 3);
          if ( v1157 == v1158 )
            goto LABEL_1043;
          if ( v1158 == &byte_1 || !v1157 )
            break;
          if ( v1157 != &byte_1 && v1158 )
          {
            v1159 = sub_254E20((__int64)v1158, (__int64)v1157);
            if ( v1159 )
              v1160 = v1159 >> 31;
            else
              LOBYTE(v1160) = *(_QWORD *)v1158 < *(_QWORD *)v1157;
            if ( !(_BYTE)v1160 )
            {
              v2513 = (char *)*v1156;
              v2514 = *(char **)v2535.m128i_i64[0];
              if ( *v1156 == *(_QWORD *)v2535.m128i_i64[0] || v2514 == &byte_1 || !v2513 )
                goto LABEL_1043;
              if ( v2513 != &byte_1 && v2514 )
              {
                v2515 = sub_254E20(*(_QWORD *)v2535.m128i_i64[0], *v1156);
                if ( v2515 )
                {
                  if ( v2515 >= 0 )
                    goto LABEL_1043;
                }
                else if ( *(_QWORD *)v2514 >= *(_QWORD *)v2513 )
                {
                  goto LABEL_1043;
                }
              }
LABEL_2147:
              v1154 = (_QWORD *)v1154[2];
              goto LABEL_1040;
            }
          }
          v1154 = (_QWORD *)v1154[1];
LABEL_1040:
          if ( (*(_BYTE *)v1154 & 2) != 0 )
          {
            v1155 = *v1152;
            goto LABEL_1042;
          }
        }
        if ( !v1158 || v1157 == &byte_1 )
          goto LABEL_1043;
        goto LABEL_2147;
      }
LABEL_1042:
      v1154 = v1155;
LABEL_1043:
      *v1150 = v1154;
      return nullptr;
    case 111LL:
      v486 = v2542;
      v487 = v2542 + 8;
      v2542 = v487;
      v488 = *(__int64 **)((char *)v2544 + v486);
      if ( (unsigned int)v487 > 0x2F )
      {
        v2243 = (__m128i **)v2543;
        v2244 = v2543 + 8;
        v2543 += 8;
        v490 = *v2243;
      }
      else
      {
        v489 = v486 + 16;
        v490 = *(__m128i **)((char *)v2544 + v487);
        v2542 = v489;
        if ( (unsigned int)v489 <= 0x2F )
        {
          v491 = v486 + 24;
          v492 = *(unsigned __int64 **)((char *)v2544 + v489);
          v2542 = v491;
          if ( (unsigned int)v491 <= 0x2F )
          {
            v493 = (__int64 *)((char *)v2544 + v491);
            v2542 = v486 + 32;
            goto LABEL_436;
          }
          v493 = (__int64 *)v2543;
LABEL_2017:
          v2543 = (char *)(v493 + 1);
LABEL_436:
          v494 = *v493;
          if ( v490 )
          {
            v495 = *v492;
            *(_OWORD *)v2538 = 0;
            v2537 = (__m128i)v495;
            sub_33E7C0(&v2537.m128i_i64[1], v494);
            v496 = v2537.m128i_i64[1];
            *(_QWORD *)&v2538[16] = 0;
            LODWORD(v2539) = -1;
            *(_OWORD *)v2540 = v2537.m128i_u64[0];
            *(_OWORD *)&v2540[16] = 0;
            sub_33E7C0(&v2540[8], (__int64)&v2537.m128i_i64[1]);
            *(_QWORD *)&v2540[32] = 0;
            *(_DWORD *)&v2540[40] = -1;
            *v488 = sub_344F00(v490, (__int64 *)v2540);
            if ( *(_QWORD *)&v2540[8] )
            {
              *(_QWORD *)&v2540[16] = 0;
              qfree();
            }
            if ( v496 )
              qfree();
            return nullptr;
          }
          goto LABEL_2532;
        }
        v2244 = v2543;
      }
      v2245 = v2244;
      v493 = (__int64 *)(v2244 + 8);
      v2543 = (char *)v493;
      v492 = *(unsigned __int64 **)v2245;
      goto LABEL_2017;
    case 112LL:
      v1240 = v2542;
      v1241 = v2542 + 8;
      v2542 = v1241;
      v1242 = *(unsigned __int64 ***)((char *)v2544 + v1240);
      if ( (unsigned int)v1241 > 0x2F )
      {
        v1243 = (__int64 ***)v2543;
        v2543 += 8;
      }
      else
      {
        v1243 = (__int64 ***)((char *)v2544 + v1241);
        v2542 = v1240 + 16;
      }
      v1244 = *v1243;
      if ( !v1242 )
        goto LABEL_2664;
      sub_345670(v1242, *v1244);
      return nullptr;
    case 113LL:
      v1239 = (unsigned __int64 ***)((char *)v2544 + v2542);
      v2542 += 8;
      if ( !*v1239 )
        goto LABEL_2673;
      sub_3402B0(*v1239);
      return nullptr;
    case 114LL:
      v1696 = (__int64 *)((char *)v2544 + v2542);
      v2542 += 8;
      v1697 = *v1696;
      if ( !v1697 )
        goto LABEL_2652;
      return *(char **)(v1697 + 8);
    case 115LL:
      v682 = (__int64 **)((char *)v2544 + v2542);
      v2542 += 8;
      if ( *v682 )
      {
        sub_33FB30(*v682);
        qfree();
      }
      return nullptr;
    case 116LL:
      result = (char *)qalloc();
      if ( !result )
        sub_5364B(16);
      *(_QWORD *)result = 0;
      *((_QWORD *)result + 1) = 0;
      return result;
    case 117LL:
      v676 = v2542;
      v677 = v2542 + 8;
      v2542 = v677;
      v678 = *(_QWORD **)((char *)v2544 + v676);
      if ( (unsigned int)v677 > 0x2F )
      {
        v679 = v2543;
        v2543 += 8;
      }
      else
      {
        v679 = (char *)v2544 + v677;
        v2542 = v676 + 16;
      }
      v680 = *(__int64 **)v679;
      if ( *(_QWORD *)v679 )
      {
        v681 = *v680;
        if ( *v680 && v680[1] )
          v681 = *(_QWORD *)(v681 + 8);
        *v678 = v681;
        return nullptr;
      }
LABEL_2320:
      if ( under_debugger )
        goto LABEL_2707;
      goto LABEL_2212;
    case 118LL:
      v671 = v2542;
      v672 = v2542 + 8;
      v2542 = v672;
      v673 = *(_QWORD **)((char *)v2544 + v671);
      if ( (unsigned int)v672 > 0x2F )
      {
        v674 = v2543;
        v2543 += 8;
      }
      else
      {
        v674 = (char *)v2544 + v672;
        v2542 = v671 + 16;
      }
      v675 = *(_QWORD **)v674;
      if ( !v675 )
      {
LABEL_2657:
        if ( !under_debugger )
          sub_37E160(52639);
        goto LABEL_2707;
      }
      *v673 = *v675;
      return nullptr;
    case 119LL:
      v669 = (_QWORD ***)((char *)v2544 + v2542);
      v670 = *v669;
      *v670 = sub_102AC0(**v669);
      return nullptr;
    case 120LL:
      v1511 = (_QWORD **)((char *)v2544 + v2542);
      v1512 = *v1511;
      v1513 = (_QWORD *)**v1511;
      if ( (*v1513 & 2) != 0 )
      {
        nn = (_QWORD *)v1513[2];
      }
      else
      {
        v1514 = (_QWORD *)v1513[1];
        if ( (*(_BYTE *)v1514 & 2) != 0 )
        {
          for ( nn = (_QWORD *)(*v1513 & 0xFFFFFFFFFFFFFFFCLL);
                (*nn & 2) == 0 && (_QWORD *)nn[1] == v1513;
                nn = (_QWORD *)(*nn & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v1513 = nn;
          }
        }
        else
        {
          do
          {
            nn = v1514;
            v1514 = (_QWORD *)v1514[2];
          }
          while ( (*(_BYTE *)v1514 & 2) == 0 );
        }
      }
      *v1512 = nn;
      return nullptr;
    case 121LL:
      return (char *)(**(_QWORD **)((char *)v2544 + v2542) + 24LL);
    case 122LL:
      v1516 = v2542;
      v1517 = v2542 + 8;
      v2542 = v1517;
      v1518 = *(_QWORD **)((char *)v2544 + v1516);
      if ( (unsigned int)v1517 > 0x2F )
      {
        v2226 = v2543;
        v1521 = v2543 + 8;
        v2543 += 8;
        v1520 = *(_QWORD ***)v2226;
      }
      else
      {
        v1519 = v1516 + 16;
        v1520 = *(_QWORD ***)((char *)v2544 + v1517);
        v2542 = v1519;
        if ( (unsigned int)v1519 <= 0x2F )
        {
          v1521 = (char *)v2544 + v1519;
          v2542 = v1516 + 24;
          goto LABEL_1368;
        }
        v1521 = v2543;
      }
      v2543 = v1521 + 8;
LABEL_1368:
      if ( !v1520 )
      {
        if ( !under_debugger )
          sub_37E160(52636);
LABEL_2707:
        BUG();
      }
      v1522 = *v1520;
      if ( !*v1520 )
        goto LABEL_1378;
      v1523 = *v1522 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v1523 )
      {
        v1522 = nullptr;
LABEL_1378:
        *v1518 = v1522;
        return nullptr;
      }
      if ( (*(_BYTE *)v1523 & 2) != 0 )
        goto LABEL_1378;
      v1524 = *(_QWORD *)v1521;
      v1525 = *(_BYTE *)(*(_QWORD *)v1521 + 32LL);
      while ( 1 )
      {
        v1526 = *(_BYTE *)(v1523 + 56);
        if ( v1525 < v1526 )
          break;
        if ( v1526 >= v1525 )
        {
          v1527 = *(_QWORD *)(v1523 + 48);
          if ( *(_QWORD *)(v1524 + 24) < v1527 )
            break;
          if ( *(_QWORD *)(v1524 + 24) <= v1527 )
          {
            v1522 = (_QWORD *)v1523;
            goto LABEL_1378;
          }
        }
        v1523 = *(_QWORD *)(v1523 + 16);
LABEL_2136:
        if ( (*(_BYTE *)v1523 & 2) != 0 )
          goto LABEL_1378;
      }
      v1523 = *(_QWORD *)(v1523 + 8);
      goto LABEL_2136;
    case 123LL:
      v1010 = v2542;
      v1011 = v2542 + 8;
      v2542 = v1011;
      v1012 = *(unsigned __int64 **)((char *)v2544 + v1010);
      if ( (unsigned int)v1011 > 0x2F )
      {
        v2272 = (__m128i **)v2543;
        v1015 = (__int64 *)(v2543 + 8);
        v2543 += 8;
        v1014 = *v2272;
      }
      else
      {
        v1013 = v1010 + 16;
        v1014 = *(__m128i **)((char *)v2544 + v1011);
        v2542 = v1013;
        if ( (unsigned int)v1013 <= 0x2F )
        {
          v1015 = (__int64 *)((char *)v2544 + v1013);
          v2542 = v1010 + 24;
          goto LABEL_894;
        }
        v1015 = (__int64 *)v2543;
      }
      v2543 = (char *)(v1015 + 1);
LABEL_894:
      v1016 = *v1015;
      if ( v1014 )
      {
        *(_QWORD *)v2540 = *v1015;
        *v1012 = sub_1033D0(v1014, v1016, (__int64 *)v2540);
        return nullptr;
      }
      if ( !under_debugger )
        sub_37E160(52637);
      goto LABEL_2707;
    case 124LL:
      v1018 = v2542;
      v1019 = v2542 + 8;
      v2542 = v1019;
      v1020 = *(unsigned __int64 ***)((char *)v2544 + v1018);
      if ( (unsigned int)v1019 > 0x2F )
      {
        v1021 = (__int64 ***)v2543;
        v2543 += 8;
      }
      else
      {
        v1021 = (__int64 ***)((char *)v2544 + v1019);
        v2542 = v1018 + 16;
      }
      v1022 = *v1021;
      if ( v1020 )
      {
        sub_103CB0(v1020, *v1022);
        return nullptr;
      }
LABEL_2664:
      if ( !under_debugger )
        sub_37E160(52640);
      goto LABEL_2707;
    case 125LL:
      v1017 = (unsigned __int64 ***)((char *)v2544 + v2542);
      v2542 += 8;
      if ( *v1017 )
      {
        sub_102470(*v1017);
        return nullptr;
      }
LABEL_2673:
      if ( !under_debugger )
        sub_37E160(52641);
      goto LABEL_2707;
    case 126LL:
      v379 = (__int64 *)((char *)v2544 + v2542);
      v2542 += 8;
      v380 = *v379;
      if ( v380 )
        return *(char **)(v380 + 8);
LABEL_2652:
      if ( !under_debugger )
        sub_37E160(52642);
      goto LABEL_2707;
    case 127LL:
      v378 = (__int64 **)((char *)v2544 + v2542);
      v2542 += 8;
      if ( *v378 )
      {
        sub_DCC30(*v378);
        j__qfree();
      }
      return nullptr;
    case 128LL:
      result = (char *)j__qalloc_or_throw();
      *(_QWORD *)result = 0;
      *((_QWORD *)result + 1) = 0;
      *((_DWORD *)result + 4) = -1;
      return result;
    case 129LL:
      return (char *)j__qalloc_or_throw();
    case 130LL:
      j__qfree();
      return nullptr;
    case 131LL:
      sub_30DE00(*(_QWORD *)((char *)v2544 + v2542));
      return nullptr;
    case 132LL:
      v948 = v2542 + 8;
      v949 = (int **)((char *)v2544 + v948);
      if ( (unsigned int)v948 > 0x2F )
        v949 = (int **)v2543;
      sub_30DEC0(*(_QWORD *)((char *)v2544 + v2542), *v949);
      return nullptr;
    case 133LL:
      v946 = v2542 + 8;
      v947 = (int **)((char *)v2544 + v946);
      if ( (unsigned int)v946 > 0x2F )
        v947 = (int **)v2543;
      return (char *)sub_30E010(*(_QWORD *)((char *)v2544 + v2542), *v947);
    case 134LL:
      v1698 = v2542 + 8;
      v1699 = (__int64 *)((char *)v2544 + v1698);
      if ( (unsigned int)v1698 > 0x2F )
        v1699 = (__int64 *)v2543;
      return (char *)(int)sub_30E040(*(_QWORD *)((char *)v2544 + v2542), *v1699);
    case 135LL:
      v944 = v2542 + 8;
      v945 = (unsigned __int64 *)((char *)v2544 + v944);
      if ( (unsigned int)v944 > 0x2F )
        v945 = (unsigned __int64 *)v2543;
      sub_30E3E0(*(_QWORD *)((char *)v2544 + v2542), *v945);
      return nullptr;
    case 136LL:
      v1941 = v2542;
      v1942 = v2542 + 8;
      v2542 = v1942;
      v1943 = *(_QWORD *)((char *)v2544 + v1941);
      if ( (unsigned int)v1942 > 0x2F )
      {
        v2384 = (int *)v2543;
        v1946 = (unsigned __int64 *)(v2543 + 8);
        v2543 += 8;
        v1945 = *v2384;
      }
      else
      {
        v1944 = v1941 + 16;
        v1945 = *(int *)((char *)v2544 + v1942);
        if ( (unsigned int)v1944 > 0x2F )
          v1946 = (unsigned __int64 *)v2543;
        else
          v1946 = (unsigned __int64 *)((char *)v2544 + v1944);
      }
      sub_30E480(v1943, v1945, *v1946);
      return nullptr;
    case 137LL:
      v1793 = v2542 + 8;
      v1794 = (int *)((char *)v2544 + v1793);
      if ( (unsigned int)v1793 > 0x2F )
        v1794 = (__int32 *)v2543;
      return (char *)(unsigned __int8)sub_310940(*(__m128i **)((char *)v2544 + v2542), *v1794);
    case 138LL:
      v1220 = v2542 + 8;
      v1221 = (int **)((char *)v2544 + v1220);
      if ( (unsigned int)v1220 > 0x2F )
        v1221 = (int **)v2543;
      return (char *)(unsigned __int8)sub_30FA30(*(_QWORD *)((char *)v2544 + v2542), *v1221);
    case 139LL:
      v1218 = v2542 + 8;
      v1219 = (int **)((char *)v2544 + v1218);
      if ( (unsigned int)v1218 > 0x2F )
        v1219 = (int **)v2543;
      return (char *)(unsigned __int8)sub_30FE80(*(int **)((char *)v2544 + v2542), *v1219);
    case 140LL:
      sub_3109B0(*(__m128i **)((char *)v2544 + v2542), a2, a3, a4, a5, a6);
      return nullptr;
    case 141LL:
      v1622 = v2542 + 8;
      v1623 = (unsigned __int64 *)((char *)v2544 + v1622);
      if ( (unsigned int)v1622 > 0x2F )
        v1623 = (unsigned __int64 *)v2543;
      return (char *)(unsigned __int8)sub_310B10(*(_QWORD *)((char *)v2544 + v2542), *v1623);
    case 142LL:
      v1624 = v2542 + 8;
      v1625 = (__int64 **)((char *)v2544 + v1624);
      if ( (unsigned int)v1624 > 0x2F )
        v1625 = (__int64 **)v2543;
      sub_311090(*(_QWORD *)((char *)v2544 + v2542), *v1625);
      return nullptr;
    case 143LL:
      return (char *)sub_1AA1F0(*(_QWORD *)((char *)v2544 + v2542));
    case 144LL:
      v1664 = v2542 + 8;
      v1665 = (char *)v2544 + v1664;
      if ( (unsigned int)v1664 > 0x2F )
        v1665 = v2543;
      return (char *)(unsigned __int8)sub_30DD70(*(_QWORD *)((char *)v2544 + v2542), *(_QWORD **)v1665);
    case 145LL:
      v1658 = v2542;
      v1659 = v2542 + 8;
      v2542 = v1659;
      v1660 = *(_DWORD **)((char *)v2544 + v1658);
      if ( (unsigned int)v1659 > 0x2F )
      {
        v2211 = (__int64 *)v2543;
        v1663 = (__int64 *)(v2543 + 8);
        v2543 += 8;
        v1662 = *v2211;
      }
      else
      {
        v1661 = v1658 + 16;
        v1662 = *(_QWORD *)((char *)v2544 + v1659);
        if ( (unsigned int)v1661 > 0x2F )
          v1663 = (__int64 *)v2543;
        else
          v1663 = (__int64 *)((char *)v2544 + v1661);
      }
      return (char *)(unsigned __int8)sub_30DDB0(v1660, v1662, *v1663);
    case 146LL:
      v1746 = v2542;
      v1747 = v2542 + 8;
      v1748 = *(__int64 **)((char *)v2544 + v2542);
      if ( (unsigned int)v1747 > 0x2F )
      {
        v2391 = (__int64 **)v2543;
        v2392 = v2543 + 8;
        v2543 += 8;
        v1750 = *v2391;
      }
      else
      {
        v1749 = v2542 + 16;
        v1750 = *(__int64 **)((char *)v2544 + v1747);
        v2542 = v1749;
        if ( (unsigned int)v1749 <= 0x2F )
        {
          v1751 = v1746 + 24;
          v1752 = *(unsigned int *)((char *)v2544 + v1749);
          if ( (unsigned int)v1751 > 0x2F )
            v1753 = v2543;
          else
            v1753 = (char *)v2544 + v1751;
LABEL_1590:
          *v1748 = sub_331790(v1750, v1752, *(_QWORD **)v1753);
          return nullptr;
        }
        v2392 = v2543;
      }
      v2393 = v2392;
      v1753 = v2392 + 8;
      v2543 = v1753;
      v1752 = *(unsigned int *)v2393;
      goto LABEL_1590;
    case 147LL:
      v1333 = v2542 + 8;
      v1334 = (char *)v2544 + v1333;
      if ( (unsigned int)v1333 > 0x2F )
        v1334 = v2543;
      return (char *)(unsigned __int8)sub_329E00(*(int *)((char *)v2544 + v2542), *(_DWORD *)v1334 != 0);
    case 148LL:
      return (char *)sub_329E30(*(unsigned int *)((char *)v2544 + v2542));
    case 149LL:
      return (char *)(unsigned int)sub_329AA0(*(int *)((char *)v2544 + v2542));
    case 150LL:
      return (char *)(unsigned int)sub_329AC0(*(int *)((char *)v2544 + v2542));
    case 151LL:
      return (char *)(unsigned int)sub_329AE0(*(int *)((char *)v2544 + v2542));
    case 152LL:
      return (char *)(unsigned int)sub_329BB0(*(int *)((char *)v2544 + v2542));
    case 153LL:
      return (char *)sub_11A6A0(*(unsigned int *)((char *)v2544 + v2542));
    case 154LL:
      v441 = v2542 + 8;
      v442 = (__int64 *)((char *)v2544 + v441);
      if ( (unsigned int)v441 > 0x2F )
        v442 = (__int64 *)v2543;
      return (char *)(int)sub_2533C0(*(_QWORD *)((char *)v2544 + v2542), *v442);
    case 155LL:
      v434 = v2542;
      v435 = v2542 + 8;
      v436 = *(_QWORD **)((char *)v2544 + v2542);
      if ( (unsigned int)v435 > 0x2F )
      {
        v2345 = (int *)v2543;
        v2346 = v2543 + 8;
        v2543 += 8;
        v437 = *v2345;
      }
      else
      {
        v437 = *(int *)((char *)v2544 + v435);
        v2542 += 16;
        if ( v434 + 16 <= 0x2F )
        {
          v438 = v434 + 24;
          if ( (unsigned int)v438 > 0x2F )
            v439 = v2543;
          else
            v439 = (char *)v2544 + v438;
LABEL_392:
          v440 = *(const __m128i **)v439;
          v2545 = _mm_loadu_si128((const __m128i *)*(_QWORD *)v439);
          v2546 = v440[1].m128i_i64[0];
          return (char *)(int)sub_32F350(v436, v437);
        }
        v2346 = v2543;
      }
      v439 = v2346 + 8;
      v2543 = v439;
      goto LABEL_392;
    case 156LL:
      v1079 = v2542;
      v1080 = v2542 + 8;
      v1081 = *(_QWORD *)((char *)v2544 + v2542);
      if ( (unsigned int)v1080 > 0x2F )
      {
        v2389 = (int *)v2543;
        v2390 = v2543 + 8;
        v2543 += 8;
        v1082 = *v2389;
      }
      else
      {
        v1082 = *(int *)((char *)v2544 + v1080);
        v2542 += 16;
        if ( v1079 + 16 <= 0x2F )
        {
          v1083 = v1079 + 24;
          if ( (unsigned int)v1083 > 0x2F )
            v1084 = v2543;
          else
            v1084 = (char *)v2544 + v1083;
LABEL_969:
          v1085 = *(const __m128i **)v1084;
          v2545 = _mm_loadu_si128((const __m128i *)*(_QWORD *)v1084);
          v2546 = v1085[1].m128i_i64[0];
          return (char *)(int)sub_32F5C0(v1081, v1082);
        }
        v2390 = v2543;
      }
      v1084 = v2390 + 8;
      v2543 = v1084;
      goto LABEL_969;
    case 157LL:
      v1072 = v2542;
      v1073 = v2542 + 8;
      v1074 = *(_QWORD *)((char *)v2544 + v2542);
      if ( (unsigned int)v1073 > 0x2F )
      {
        v2285 = (int *)v2543;
        v2286 = v2543 + 8;
        v2543 += 8;
        v1075 = *v2285;
      }
      else
      {
        v1075 = *(int *)((char *)v2544 + v1073);
        v2542 += 16;
        if ( v1072 + 16 <= 0x2F )
        {
          v1076 = v1072 + 24;
          if ( (unsigned int)v1076 > 0x2F )
            v1077 = v2543;
          else
            v1077 = (char *)v2544 + v1076;
LABEL_964:
          v1078 = *(const __m128i **)v1077;
          v2545 = _mm_loadu_si128((const __m128i *)*(_QWORD *)v1077);
          v2546 = v1078[1].m128i_i64[0];
          return (char *)(int)sub_265390(v1074, v1075);
        }
        v2286 = v2543;
      }
      v1077 = v2286 + 8;
      v2543 = v1077;
      goto LABEL_964;
    case 158LL:
      return (char *)j__dstr_tinfo();
    case 159LL:
      return (char *)(unsigned __int8)sub_3297F0(*(_QWORD *)((char *)v2544 + v2542));
    case 160LL:
      return (char *)sub_3279C0();
    case 161LL:
      return (char *)(unsigned __int8)sub_298760(*(__int64 **)((char *)v2544 + v2542));
    case 162LL:
      return (char *)(unsigned __int8)sub_298400(*(_QWORD **)((char *)v2544 + v2542));
    case 163LL:
      return (char *)(int)sub_329400(*(__int64 **)((char *)v2544 + v2542));
    case 164LL:
      v1368 = v2542;
      v1369 = v2542 + 8;
      v2542 = v1369;
      if ( (unsigned int)v1369 > 0x2F )
      {
        v1370 = (int *)v2543;
        v2543 += 8;
      }
      else
      {
        v1370 = (int *)((char *)v2544 + v1369);
        v2542 = v1368 + 16;
      }
      v1371 = *v1370;
      v1372 = sub_334A60();
      sub_327220(v2540, v1372, v1371);
      copy_tinfo_t();
      clear_tinfo_t();
      return nullptr;
    case 165LL:
      v1361 = v2542;
      v1362 = v2542 + 8;
      v2542 = v1362;
      if ( (unsigned int)v1362 > 0x2F )
      {
        v2190 = (unsigned int *)v2543;
        v1365 = (int *)(v2543 + 8);
        v2543 += 8;
        v1364 = *v2190;
      }
      else
      {
        v1363 = v1361 + 16;
        v1364 = *(int *)((char *)v2544 + v1362);
        v2542 = v1363;
        if ( (unsigned int)v1363 <= 0x2F )
        {
          v1365 = (int *)((char *)v2544 + v1363);
          v2542 = v1361 + 24;
          goto LABEL_1245;
        }
        v1365 = (int *)v2543;
      }
      v2543 = (char *)(v1365 + 2);
LABEL_1245:
      v1366 = *v1365;
      v1367 = sub_334A60();
      sub_327500((__int64 *)v2540, v1367, v1364, v1366);
      copy_tinfo_t();
      clear_tinfo_t();
      return nullptr;
    case 166LL:
      v859 = v2542;
      v860 = v2542 + 8;
      v2542 = v860;
      if ( (unsigned int)v860 > 0x2F )
      {
        v861 = (int *)v2543;
        v2543 += 8;
      }
      else
      {
        v861 = (int *)((char *)v2544 + v860);
        v2542 = v859 + 16;
      }
      v862 = *v861;
      v863 = sub_334A60();
      sub_327340(v2540, v863, v862);
      copy_tinfo_t();
      clear_tinfo_t();
      return nullptr;
    case 167LL:
      v852 = v2542;
      v853 = v2542 + 8;
      v2542 = v853;
      if ( (unsigned int)v853 > 0x2F )
      {
        v2267 = (int *)v2543;
        v856 = v2543 + 8;
        v2543 += 8;
        v855 = *v2267;
      }
      else
      {
        v854 = v852 + 16;
        v855 = *(int *)((char *)v2544 + v853);
        v2542 = v854;
        if ( (unsigned int)v854 <= 0x2F )
        {
          v856 = (char *)v2544 + v854;
          v2542 = v852 + 24;
          goto LABEL_744;
        }
        v856 = v2543;
      }
      v2543 = v856 + 8;
LABEL_744:
      v857 = *(_DWORD *)v856 != 0;
      v858 = sub_334A60();
      sub_327390((__int64 *)v2540, v858, v855, v857);
      copy_tinfo_t();
      clear_tinfo_t();
      return nullptr;
    case 169LL:
      v580 = v2542;
      v581 = v2542 + 8;
      v2542 = v581;
      if ( (unsigned int)v581 > 0x2F )
      {
        v582 = v2543;
        v2543 += 8;
      }
      else
      {
        v582 = (char *)v2544 + v581;
        v2542 = v580 + 16;
      }
      v583 = *(_QWORD **)v582;
      v584 = sub_334A60();
      sub_327610(v2540, v584, v583);
      copy_tinfo_t();
      clear_tinfo_t();
      return nullptr;
    case 170LL:
      v577 = v2542;
      v578 = v2542 + 8;
      v2542 = v578;
      if ( (unsigned int)v578 > 0x2F )
      {
        v579 = (__int64 *)v2543;
        v2543 += 8;
      }
      else
      {
        v579 = (__int64 *)((char *)v2544 + v578);
        v2542 = v577 + 16;
      }
      sub_325D80(v2540, *v579);
      copy_tinfo_t();
      clear_tinfo_t();
      return nullptr;
    case 171LL:
      v585 = v2542;
      v586 = v2542 + 8;
      v2542 = v586;
      v587 = *(_QWORD *)((char *)v2544 + v585);
      if ( (unsigned int)v586 > 0x2F )
      {
        v2360 = v2543;
        v590 = v2543 + 8;
        v2543 += 8;
        v589 = *(_QWORD *)v2360;
      }
      else
      {
        v588 = v585 + 16;
        v589 = *(_QWORD *)((char *)v2544 + v586);
        if ( (unsigned int)v588 > 0x2F )
          v590 = v2543;
        else
          v590 = (char *)v2544 + v588;
      }
      v591 = *(_DWORD *)v590;
      v592 = sub_334A60();
      return (char *)(unsigned __int8)sub_37CE00(v592, v587, v589, v591);
    case 172LL:
      v567 = v2542;
      v568 = v2542 + 8;
      v569 = *(_QWORD *)((char *)v2544 + v2542);
      if ( (unsigned int)v568 > 0x2F )
      {
        v2246 = v2543;
        v2247 = v2543 + 8;
        v2543 += 8;
        v571 = *(_QWORD *)v2246;
      }
      else
      {
        v570 = v2542 + 16;
        v571 = *(_QWORD *)((char *)v2544 + v568);
        v2542 = v570;
        if ( (unsigned int)v570 <= 0x2F )
        {
          v572 = v567 + 24;
          v573 = *(int *)((char *)v2544 + v570);
          if ( (unsigned int)v572 > 0x2F )
            v574 = v2543;
          else
            v574 = (char *)v2544 + v572;
LABEL_495:
          v575 = *(_DWORD *)v574 != 0;
          v576 = sub_334A60();
          return (char *)(unsigned __int8)sub_37D190(v576, v569, v571, v573, v575);
        }
        v2247 = v2543;
      }
      v2248 = v2247;
      v574 = v2247 + 8;
      v2543 = v574;
      v573 = *(_DWORD *)v2248;
      goto LABEL_495;
    case 173LL:
      v1167 = v2542 + 8;
      v1168 = (unsigned int *)((char *)v2544 + v1167);
      if ( (unsigned int)v1167 > 0x2F )
        v1168 = (unsigned int *)v2543;
      return sub_1AA920(*(_QWORD *)((char *)v2544 + v2542), *v1168);
    case 174LL:
      v1165 = v2542 + 8;
      v1166 = (int **)((char *)v2544 + v1165);
      if ( (unsigned int)v1165 > 0x2F )
        v1166 = (int **)v2543;
      return (char *)(int)sub_1BE710(*(int **)((char *)v2544 + v2542), *v1166);
    case 175LL:
      v561 = v2542;
      v562 = v2542 + 8;
      v2542 = v562;
      v563 = *(_QWORD *)((char *)v2544 + v561);
      if ( (unsigned int)v562 > 0x2F )
      {
        v2253 = (__int64 *)v2543;
        v566 = v2543 + 8;
        v2543 += 8;
        v565 = *v2253;
      }
      else
      {
        v564 = v561 + 16;
        v565 = *(_QWORD *)((char *)v2544 + v562);
        if ( (unsigned int)v564 > 0x2F )
          v566 = v2543;
        else
          v566 = (char *)v2544 + v564;
      }
      return (char *)(unsigned __int8)sub_1BE410(v563, v565, *(unsigned int *)v566);
    case 176LL:
      v553 = v2542;
      v554 = v2542 + 8;
      v2542 = v554;
      v555 = *(__int64 **)((char *)v2544 + v553);
      if ( (unsigned int)v554 > 0x2F )
      {
        v2249 = (__int64 *)v2543;
        v558 = (signed int *)(v2543 + 8);
        v2543 += 8;
        v557 = *v2249;
      }
      else
      {
        v556 = v553 + 16;
        v557 = *(_QWORD *)((char *)v2544 + v554);
        if ( (unsigned int)v556 > 0x2F )
          v558 = (signed int *)v2543;
        else
          v558 = (int *)((char *)v2544 + v556);
      }
      v559 = *v558;
      v560 = (_DWORD *)sub_334A60();
      sub_1C3D80(v560, v555, v557, v559);
      return nullptr;
    case 177LL:
      v716 = v2542;
      v717 = v2542 + 8;
      v718 = *(int **)((char *)v2544 + v2542);
      if ( (unsigned int)v717 > 0x2F )
      {
        v2235 = (unsigned __int64 *)v2543;
        v2236 = v2543 + 8;
        v2543 += 8;
        v720 = *v2235;
      }
      else
      {
        v719 = v2542 + 16;
        v720 = *(_QWORD *)((char *)v2544 + v717);
        v2542 = v719;
        if ( (unsigned int)v719 <= 0x2F )
        {
          v721 = v716 + 24;
          v722 = *(int **)((char *)v2544 + v719);
          if ( (unsigned int)v721 > 0x2F )
            v723 = (unsigned __int64 *)v2543;
          else
            v723 = (unsigned __int64 *)((char *)v2544 + v721);
          return (char *)(unsigned __int8)sub_1C0720(v718, v720, v722, *v723);
        }
        v2236 = v2543;
      }
      v2237 = (int **)v2236;
      v723 = (unsigned __int64 *)(v2236 + 8);
      v2543 = (char *)v723;
      v722 = *v2237;
      return (char *)(unsigned __int8)sub_1C0720(v718, v720, v722, *v723);
    case 178LL:
      v714 = v2542 + 8;
      v715 = (int **)((char *)v2544 + v714);
      if ( (unsigned int)v714 > 0x2F )
        v715 = (int **)v2543;
      return (char *)(int)sub_32B790(*(int **)((char *)v2544 + v2542), *v715);
    case 179LL:
      return (char *)sub_1AC050(*(_QWORD *)((char *)v2544 + v2542));
    case 180LL:
      return (char *)sub_1AA5A0(*(_QWORD *)((char *)v2544 + v2542));
    case 181LL:
      v724 = *(int **)((char *)v2544 + v2542);
      v725 = (_QWORD *)sub_334A60();
      return (char *)(unsigned __int8)sub_1EC4F0(v724, v725);
    case 182LL:
      v706 = v2542;
      v707 = v2542 + 8;
      v2542 = v707;
      v708 = *(_QWORD *)((char *)v2544 + v706);
      if ( (unsigned int)v707 > 0x2F )
      {
        v2238 = v2543;
        v711 = v2543 + 8;
        v2543 += 8;
        v710 = *(_BYTE **)v2238;
      }
      else
      {
        v709 = v706 + 16;
        v710 = *(_BYTE **)((char *)v2544 + v707);
        if ( (unsigned int)v709 > 0x2F )
          v711 = v2543;
        else
          v711 = (char *)v2544 + v709;
      }
      v712 = *(_DWORD *)v711 != 0;
      v713 = sub_334A60();
      return (char *)(unsigned __int8)sub_1EAC90(v708, v713, v710, v712);
    case 183LL:
      v698 = v2542;
      v699 = v2542 + 8;
      v2542 = v699;
      v700 = *(_QWORD *)((char *)v2544 + v698);
      if ( (unsigned int)v699 > 0x2F )
      {
        v2234 = v2543;
        v703 = v2543 + 8;
        v2543 += 8;
        v702 = *(_BYTE **)v2234;
      }
      else
      {
        v701 = v698 + 16;
        v702 = *(_BYTE **)((char *)v2544 + v699);
        if ( (unsigned int)v701 > 0x2F )
          v703 = v2543;
        else
          v703 = (char *)v2544 + v701;
      }
      v704 = *(_DWORD *)v703 != 0;
      v705 = sub_334A60();
      return (char *)(unsigned __int8)sub_1EB070(v700, v705, v702, v704);
    case 184LL:
      v690 = v2542;
      v691 = v2542 + 8;
      v2542 = v691;
      v692 = *(_DWORD **)((char *)v2544 + v690);
      if ( (unsigned int)v691 > 0x2F )
      {
        v2233 = (unsigned int *)v2543;
        v695 = v2543 + 8;
        v2543 += 8;
        v694 = *v2233;
      }
      else
      {
        v693 = v690 + 16;
        v694 = *(int *)((char *)v2544 + v691);
        if ( (unsigned int)v693 > 0x2F )
          v695 = v2543;
        else
          v695 = (char *)v2544 + v693;
      }
      v696 = *(_DWORD *)v695;
      v697 = (_QWORD *)sub_334A60();
      return (char *)(unsigned __int8)sub_1EAE00(v692, v697, v694, v696);
    case 185LL:
      v1255 = v2542;
      v1256 = v2542 + 8;
      v1257 = *(_QWORD *)((char *)v2544 + v2542);
      if ( (unsigned int)v1256 > 0x2F )
      {
        v2203 = (__int64 *)v2543;
        v2204 = v2543 + 8;
        v2543 += 8;
        v1259 = *v2203;
      }
      else
      {
        v1258 = v2542 + 16;
        v1259 = *(_QWORD *)((char *)v2544 + v1256);
        v2542 = v1258;
        if ( (unsigned int)v1258 <= 0x2F )
        {
          v1260 = v1255 + 24;
          v1261 = *(_QWORD *)((char *)v2544 + v1258);
          if ( (unsigned int)v1260 > 0x2F )
            v1262 = v2543;
          else
            v1262 = (char *)v2544 + v1260;
LABEL_1148:
          sub_1BEFC0(v1257, v1259, v1261, *(_DWORD *)v1262 != 0);
          return nullptr;
        }
        v2204 = v2543;
      }
      v2205 = (__int64 *)v2204;
      v1262 = v2204 + 8;
      v2543 = v1262;
      v1261 = *v2205;
      goto LABEL_1148;
    case 186LL:
      v1247 = v2542;
      v1248 = v2542 + 8;
      v2542 = v1248;
      v1249 = *(_QWORD *)((char *)v2544 + v1247);
      if ( (unsigned int)v1248 > 0x2F )
      {
        v2414 = (__int64 *)v2543;
        v1252 = v2543 + 8;
        v2543 += 8;
        v1251 = *v2414;
      }
      else
      {
        v1250 = v1247 + 16;
        v1251 = *(_QWORD *)((char *)v2544 + v1248);
        if ( (unsigned int)v1250 > 0x2F )
          v1252 = v2543;
        else
          v1252 = (char *)v2544 + v1250;
      }
      v1253 = *(_DWORD *)v1252 != 0;
      v1254 = sub_334A60();
      sub_1BEFF0(v1249, v1254, v1251, v1253);
      return nullptr;
    case 187LL:
      v1263 = v2542;
      v1264 = v2542 + 8;
      v2542 = v1264;
      v1265 = *(_QWORD **)((char *)v2544 + v1263);
      if ( (unsigned int)v1264 > 0x2F )
      {
        v2380 = (unsigned __int64 *)v2543;
        v1268 = (int *)(v2543 + 8);
        v2543 += 8;
        v1267 = *v2380;
      }
      else
      {
        v1266 = v1263 + 16;
        v1267 = *(_QWORD *)((char *)v2544 + v1264);
        if ( (unsigned int)v1266 > 0x2F )
          v1268 = (int *)v2543;
        else
          v1268 = (int *)((char *)v2544 + v1266);
      }
      v1269 = *v1268;
      v1270 = sub_334A60();
      return (char *)(int)sub_224760(v1265, v1270, v1267, v1269);
    case 188LL:
      v726 = v2542 + 8;
      v727 = (__int64 *)((char *)v2544 + v726);
      if ( (unsigned int)v726 > 0x2F )
        v727 = (__int64 *)v2543;
      return (char *)sub_1EBC20(*(__int64 **)((char *)v2544 + v2542), *v727);
    case 189LL:
      v1539 = v2542;
      v1540 = v2542 + 8;
      v1541 = *(__int64 **)((char *)v2544 + v2542);
      if ( (unsigned int)v1540 > 0x2F )
      {
        v2381 = (int **)v2543;
        v2382 = v2543 + 8;
        v2543 += 8;
        v1543 = *v2381;
      }
      else
      {
        v1542 = v2542 + 16;
        v1543 = *(int **)((char *)v2544 + v1540);
        v2542 = v1542;
        if ( (unsigned int)v1542 <= 0x2F )
        {
          v1544 = v1539 + 24;
          v1545 = *(int *)((char *)v2544 + v1542);
          if ( (unsigned int)v1544 > 0x2F )
            v1546 = (int *)v2543;
          else
            v1546 = (int *)((char *)v2544 + v1544);
          return (char *)(int)sub_1EBE40(v1541, v1543, v1545, *v1546);
        }
        v2382 = v2543;
      }
      v2383 = (int *)v2382;
      v1546 = (int *)(v2382 + 8);
      v2543 = (char *)v1546;
      v1545 = *v2383;
      return (char *)(int)sub_1EBE40(v1541, v1543, v1545, *v1546);
    case 190LL:
      v1023 = v2542 + 8;
      v1024 = *(_QWORD *)((char *)v2544 + v2542);
      v1025 = (__int64 *)((char *)v2544 + v1023);
      if ( (unsigned int)v1023 > 0x2F )
        v1025 = (__int64 *)v2543;
      v1026 = *v1025;
      v1027 = sub_334A60();
      return (char *)(unsigned __int8)sub_2B3E30(v1027, v1024, v1026);
    case 191LL:
      v1534 = v2542 + 8;
      v1535 = *(_QWORD *)((char *)v2544 + v2542);
      v1536 = (__int64 *)((char *)v2544 + v1534);
      if ( (unsigned int)v1534 > 0x2F )
        v1536 = (__int64 *)v2543;
      v1537 = *v1536;
      v1538 = sub_334A60();
      sub_2B3EB0(v1538, v1535, v1537);
      return nullptr;
    case 192LL:
      v381 = v2542 + 8;
      v382 = *(_QWORD *)((char *)v2544 + v2542);
      v383 = (__int64 *)((char *)v2544 + v381);
      if ( (unsigned int)v381 > 0x2F )
        v383 = (__int64 *)v2543;
      v384 = *v383;
      v385 = sub_334A60();
      return (char *)(unsigned __int8)sub_2B7A40(v385, v382, v384);
    case 193LL:
      v1410 = v2542;
      v1411 = v2542 + 8;
      v2542 = v1411;
      v1412 = *(_QWORD *)((char *)v2544 + v1410);
      if ( (unsigned int)v1411 > 0x2F )
      {
        v2376 = (int *)v2543;
        v1415 = (__int64 *)(v2543 + 8);
        v2543 += 8;
        v1414 = *v2376;
      }
      else
      {
        v1413 = v1410 + 16;
        v1414 = *(int *)((char *)v2544 + v1411);
        if ( (unsigned int)v1413 > 0x2F )
          v1415 = (__int64 *)v2543;
        else
          v1415 = (__int64 *)((char *)v2544 + v1413);
      }
      v1416 = *v1415;
      v1417 = sub_334A60();
      return (char *)(unsigned __int8)sub_212030(v1417, v1412, v1414, v1416);
    case 194LL:
      v1402 = v2542;
      v1403 = v2542 + 8;
      v2542 = v1403;
      v1404 = *(_QWORD *)((char *)v2544 + v1402);
      if ( (unsigned int)v1403 > 0x2F )
      {
        v2194 = (__int64 *)v2543;
        v1407 = (const char **)(v2543 + 8);
        v2543 += 8;
        v1406 = *v2194;
      }
      else
      {
        v1405 = v1402 + 16;
        v1406 = *(_QWORD *)((char *)v2544 + v1403);
        if ( (unsigned int)v1405 > 0x2F )
          v1407 = (const char **)v2543;
        else
          v1407 = (const char **)((char *)v2544 + v1405);
      }
      v1408 = *v1407;
      v1409 = sub_334A60();
      return (char *)(unsigned __int8)sub_213400(v1409, v1404, v1406, v1408);
    case 195LL:
      v2007 = v2542 + 8;
      v2008 = *(_QWORD *)((char *)v2544 + v2542);
      v2009 = (__int64 *)((char *)v2544 + v2007);
      if ( (unsigned int)v2007 > 0x2F )
        v2009 = (__int64 *)v2543;
      v2010 = *v2009;
      v2011 = sub_334A60();
      return (char *)sub_2B3560(v2011, v2008, v2010);
    case 196LL:
      v1397 = v2542 + 8;
      v1398 = *(_QWORD *)((char *)v2544 + v2542);
      v1399 = (__int64 *)((char *)v2544 + v1397);
      if ( (unsigned int)v1397 > 0x2F )
        v1399 = (__int64 *)v2543;
      v1400 = *v1399;
      v1401 = sub_334A60();
      sub_2B34E0(v1401, v1398, v1400);
      return nullptr;
    case 197LL:
      v880 = v2542;
      v881 = v2542 + 8;
      v2542 = v881;
      v882 = *(_QWORD *)((char *)v2544 + v880);
      if ( (unsigned int)v881 > 0x2F )
      {
        v2170 = v2543;
        v885 = v2543 + 8;
        v2543 += 8;
        v884 = *(_QWORD *)v2170;
      }
      else
      {
        v883 = v880 + 16;
        v884 = *(_QWORD *)((char *)v2544 + v881);
        if ( (unsigned int)v883 > 0x2F )
          v885 = v2543;
        else
          v885 = (char *)v2544 + v883;
      }
      return (char *)(unsigned __int8)sub_3C0A80(v882, v884, *(_DWORD *)v885 != 0);
    case 198LL:
      v878 = v2542 + 8;
      v879 = (char *)v2544 + v878;
      if ( (unsigned int)v878 > 0x2F )
        v879 = v2543;
      return (char *)(int)sub_3C2810(*(_QWORD *)((char *)v2544 + v2542), *(_QWORD *)v879);
    case 199LL:
      v1807 = v2542 + 8;
      v1808 = *(_QWORD *)((char *)v2544 + v2542);
      v1809 = (char *)v2544 + v1807;
      if ( (unsigned int)v1807 > 0x2F )
        v1809 = v2543;
      v1810 = *(_DWORD *)v1809;
      v1811 = sub_334A60();
      return (char *)(unsigned __int8)sub_1D1850(v1811, v1808, v1810 != 0);
    case 200LL:
      sub_3C0B60(*(_QWORD *)((char *)v2544 + v2542));
      return nullptr;
    case 201LL:
      v1962 = v2542 + 8;
      v1963 = (char *)v2544 + v1962;
      if ( (unsigned int)v1962 > 0x2F )
        v1963 = v2543;
      return (char *)(unsigned __int8)sub_3C0BA0(*(_QWORD *)((char *)v2544 + v2542), *(_QWORD *)v1963);
    case 202LL:
      v1960 = v2542 + 8;
      v1961 = (char *)v2544 + v1960;
      if ( (unsigned int)v1960 > 0x2F )
        v1961 = v2543;
      return (char *)(int)sub_3C2860(*(_QWORD *)((char *)v2544 + v2542), *(_QWORD *)v1961);
    case 203LL:
      v2053 = v2542 + 8;
      v2054 = (__int64 *)((char *)v2544 + v2053);
      if ( (unsigned int)v2053 > 0x2F )
        v2054 = (__int64 *)v2543;
      sub_5FE00(*(__int64 **)((char *)v2544 + v2542), *v2054);
      return nullptr;
    case 204LL:
      v1186 = v2542 + 8;
      v1187 = (__int64 **)((char *)v2544 + v1186);
      if ( (unsigned int)v1186 > 0x2F )
        v1187 = (__int64 **)v2543;
      return (char *)sub_606D0(*(__int64 **)((char *)v2544 + v2542), *v1187);
    case 205LL:
      v1649 = v2542 + 8;
      v1650 = (int *)((char *)v2544 + v1649);
      if ( (unsigned int)v1649 > 0x2F )
        v1650 = (int *)v2543;
      return (char *)(unsigned __int8)sub_5FF90(*(__int64 **)((char *)v2544 + v2542), *v1650);
    case 206LL:
      v1643 = v2542;
      v1644 = v2542 + 8;
      v2542 = v1644;
      v1645 = *(__int64 **)((char *)v2544 + v1643);
      if ( (unsigned int)v1644 > 0x2F )
      {
        v2212 = (int *)v2543;
        v1648 = (int *)(v2543 + 8);
        v2543 += 8;
        v1647 = *v2212;
      }
      else
      {
        v1646 = v1643 + 16;
        v1647 = *(int *)((char *)v2544 + v1644);
        if ( (unsigned int)v1646 > 0x2F )
          v1648 = (int *)v2543;
        else
          v1648 = (int *)((char *)v2544 + v1646);
      }
      return (char *)(unsigned __int8)sub_5FC80(v1645, v1647, *v1648);
    case 207LL:
      v2038 = v2542 + 8;
      v2039 = (__int64 **)((char *)v2544 + v2038);
      if ( (unsigned int)v2038 > 0x2F )
        v2039 = (__int64 **)v2543;
      return (char *)(unsigned __int8)sub_60080(*(__int64 **)((char *)v2544 + v2542), *v2039);
    case 208LL:
      v642 = v2542 + 8;
      v643 = (int *)((char *)v2544 + v642);
      if ( (unsigned int)v642 > 0x2F )
        v643 = (int *)v2543;
      return (char *)(unsigned __int8)sub_60140(*(__int64 **)((char *)v2544 + v2542), *v643);
    case 209LL:
      v1715 = v2542;
      v1716 = v2542 + 8;
      v2542 = v1716;
      v1717 = *(__int64 **)((char *)v2544 + v1715);
      if ( (unsigned int)v1716 > 0x2F )
      {
        v2377 = (int *)v2543;
        v1720 = (int *)(v2543 + 8);
        v2543 += 8;
        v1719 = *v2377;
      }
      else
      {
        v1718 = v1715 + 16;
        v1719 = *(int *)((char *)v2544 + v1716);
        if ( (unsigned int)v1718 > 0x2F )
          v1720 = (int *)v2543;
        else
          v1720 = (int *)((char *)v2544 + v1718);
      }
      return (char *)(unsigned __int8)sub_60240(v1717, v1719, *v1720);
    case 210LL:
      v1713 = v2542 + 8;
      v1714 = (__int64 **)((char *)v2544 + v1713);
      if ( (unsigned int)v1713 > 0x2F )
        v1714 = (__int64 **)v2543;
      return (char *)(unsigned __int8)sub_60440(*(__int64 **)((char *)v2544 + v2542), *v1714, v2542, v1713, a5, a6);
    case 211LL:
      v1986 = v2542 + 8;
      v1987 = (int *)((char *)v2544 + v1986);
      if ( (unsigned int)v1986 > 0x2F )
        v1987 = (int *)v2543;
      return (char *)(unsigned __int8)sub_601C0(*(__int64 **)((char *)v2544 + v2542), *v1987);
    case 212LL:
      v1305 = v2542 + 8;
      v1306 = (int *)((char *)v2544 + v1305);
      if ( (unsigned int)v1305 > 0x2F )
        v1306 = (int *)v2543;
      sub_602F0(*(__int64 **)((char *)v2544 + v2542), *v1306);
      return nullptr;
    case 213LL:
      v1313 = v2542 + 8;
      v1314 = (int *)((char *)v2544 + v1313);
      if ( (unsigned int)v1313 > 0x2F )
        v1314 = (int *)v2543;
      return (char *)sub_60730(*(_QWORD **)((char *)v2544 + v2542), *v1314);
    case 214LL:
      v1307 = v2542;
      v1308 = v2542 + 8;
      v2542 = v1308;
      v1309 = *(_QWORD **)((char *)v2544 + v1307);
      if ( (unsigned int)v1308 > 0x2F )
      {
        v2201 = (int *)v2543;
        v1312 = (int *)(v2543 + 8);
        v2543 += 8;
        v1311 = *v2201;
      }
      else
      {
        v1310 = v1307 + 16;
        v1311 = *(int *)((char *)v2544 + v1308);
        if ( (unsigned int)v1310 > 0x2F )
          v1312 = (int *)v2543;
        else
          v1312 = (int *)((char *)v2544 + v1310);
      }
      return (char *)(unsigned __int8)sub_60810(v1309, v1311, *v1312);
    case 215LL:
      v757 = v2542;
      v758 = v2542 + 8;
      v2542 = v758;
      v759 = *(_QWORD **)((char *)v2544 + v757);
      if ( (unsigned int)v758 > 0x2F )
      {
        v2218 = (int *)v2543;
        v762 = (int *)(v2543 + 8);
        v2543 += 8;
        v761 = *v2218;
      }
      else
      {
        v760 = v757 + 16;
        v761 = *(int *)((char *)v2544 + v758);
        if ( (unsigned int)v760 > 0x2F )
          v762 = (int *)v2543;
        else
          v762 = (int *)((char *)v2544 + v760);
      }
      return (char *)(unsigned __int8)sub_60860(v759, v761, *v762);
    case 216LL:
      return (char *)sub_1ABFC0(*(_QWORD **)((char *)v2544 + v2542));
    case 217LL:
      return (char *)(unsigned __int8)sub_60680(*(_QWORD **)((char *)v2544 + v2542));
    case 218LL:
      return (char *)(int)sub_60920(*(_QWORD *)((char *)v2544 + v2542));
    case 219LL:
      v1058 = v2542 + 8;
      v1059 = (int *)((char *)v2544 + v1058);
      if ( (unsigned int)v1058 > 0x2F )
        v1059 = (int *)v2543;
      return (char *)(int)sub_609A0(*(_QWORD **)((char *)v2544 + v2542), *v1059);
    case 220LL:
      return (char *)(int)sub_60A00(*(_QWORD **)((char *)v2544 + v2542));
    case 221LL:
      v1885 = v2542 + 8;
      v1886 = (int *)((char *)v2544 + v1885);
      if ( (unsigned int)v1885 > 0x2F )
        v1886 = (int *)v2543;
      sub_5FE70(*(__int64 **)((char *)v2544 + v2542), *v1886);
      return nullptr;
    case 222LL:
      v1560 = v2542 + 8;
      v1561 = *(__int64 **)((char *)v2544 + v2542);
      v1562 = (char *)v2544 + v1560;
      if ( (unsigned int)v1560 > 0x2F )
        v1562 = v2543;
      v1563 = *(_DWORD *)v1562;
      v1564 = sub_334A60();
      return (char *)(unsigned __int8)sub_60A70(v1561, v1563, *(_DWORD *)(v1564 + 80));
    case 223LL:
      v393 = v2542 + 8;
      v394 = (char *)v2544 + v393;
      if ( (unsigned int)v393 > 0x2F )
        v394 = v2543;
      return (char *)(unsigned __int8)sub_60580(*(_QWORD **)((char *)v2544 + v2542), *(_QWORD **)v394);
    case 224LL:
      v391 = v2542 + 8;
      v392 = (__int64 **)((char *)v2544 + v391);
      if ( (unsigned int)v391 > 0x2F )
        v392 = (__int64 **)v2543;
      return (char *)(unsigned __int8)sub_60500(*(__int64 **)((char *)v2544 + v2542), *v392);
    case 225LL:
      v1912 = v2542 + 8;
      v1913 = (char *)v2544 + v1912;
      if ( (unsigned int)v1912 > 0x2F )
        v1913 = v2543;
      return (char *)(unsigned __int8)sub_60620(*(_QWORD **)((char *)v2544 + v2542), *(_QWORD **)v1913);
    case 226LL:
      v1910 = v2542 + 8;
      v1911 = (__int64 *)((char *)v2544 + v1910);
      if ( (unsigned int)v1910 > 0x2F )
        v1911 = (__int64 *)v2543;
      return (char *)sub_605F0(*(_QWORD *)((char *)v2544 + v2542), *v1911);
    case 227LL:
      v1348 = v2542 + 8;
      v1349 = (int *)((char *)v2544 + v1348);
      if ( (unsigned int)v1348 > 0x2F )
        v1349 = (int *)v2543;
      return (char *)(int)sub_60760(*(_QWORD **)((char *)v2544 + v2542), *v1349);
    case 228LL:
      return (char *)sub_1B1BF0(*(unsigned __int64 **)((char *)v2544 + v2542));
    case 229LL:
      v1994 = v2542 + 8;
      v1995 = (char *)v2544 + v1994;
      if ( (unsigned int)v1994 > 0x2F )
        v1995 = v2543;
      return (char *)(int)sub_3121C0(*(_QWORD **)((char *)v2544 + v2542), *(_QWORD **)v1995);
    case 230LL:
      v1773 = v2542 + 8;
      v1774 = (__m128i **)((char *)v2544 + v1773);
      if ( (unsigned int)v1773 > 0x2F )
        v1774 = (__m128i **)v2543;
      return (char *)(unsigned __int8)sub_311E30(
                                        *(__int64 **)((char *)v2544 + v2542),
                                        *v1774,
                                        *(double *)a7.m128i_i64,
                                        a8);
    case 231LL:
      v838 = v2542 + 8;
      v839 = (__int64 ***)((char *)v2544 + v838);
      if ( (unsigned int)v838 > 0x2F )
        v839 = (__int64 ***)v2543;
      return (char *)(unsigned __int8)sub_311F30(*(__int64 **)((char *)v2544 + v2542), *v839);
    case 232LL:
      v832 = v2542;
      v833 = v2542 + 8;
      v2542 = v833;
      v834 = *(__int64 **)((char *)v2544 + v832);
      if ( (unsigned int)v833 > 0x2F )
      {
        v2268 = (__int64 *)v2543;
        v837 = (__m128i **)(v2543 + 8);
        v2543 += 8;
        v836 = *v2268;
      }
      else
      {
        v835 = v832 + 16;
        v836 = *(_QWORD *)((char *)v2544 + v833);
        if ( (unsigned int)v835 > 0x2F )
          v837 = (__m128i **)v2543;
        else
          v837 = (__m128i **)((char *)v2544 + v835);
      }
      return (char *)(unsigned __int8)sub_312490(v834, v836, *v837, *(double *)a7.m128i_i64, a8);
    case 233LL:
      v1610 = v2542 + 8;
      v1611 = (__m128i **)((char *)v2544 + v1610);
      if ( (unsigned int)v1610 > 0x2F )
        v1611 = (__m128i **)v2543;
      return (char *)(unsigned __int8)sub_312E50(*(__int64 **)((char *)v2544 + v2542), *v1611);
    case 234LL:
      v1608 = v2542 + 8;
      v1609 = (__int64 *)((char *)v2544 + v1608);
      if ( (unsigned int)v1608 > 0x2F )
        v1609 = (__int64 *)v2543;
      return (char *)(unsigned __int8)sub_312EE0(*(__int64 **)((char *)v2544 + v2542), *v1609);
    case 235LL:
      v1133 = v2542 + 8;
      v1134 = (__int64 *)((char *)v2544 + v1133);
      if ( (unsigned int)v1133 > 0x2F )
        v1134 = (__int64 *)v2543;
      return (char *)(unsigned __int8)sub_3136F0(*(unsigned __int64 ***)((char *)v2544 + v2542), *v1134);
    case 236LL:
      v1131 = v2542 + 8;
      v1132 = (__int64 **)((char *)v2544 + v1131);
      if ( (unsigned int)v1131 > 0x2F )
        v1132 = (__int64 **)v2543;
      sub_1AF690(*(_QWORD *)((char *)v2544 + v2542), *v1132);
      return nullptr;
    case 237LL:
      return (char *)sub_1AF840(*(_QWORD *)((char *)v2544 + v2542));
    case 238LL:
      v473 = v2542 + 8;
      v475 = (__int64 **)((char *)v2544 + v473);
      if ( (unsigned int)v473 > 0x2F )
        v475 = (__int64 **)v2543;
      v474 = *(__int64 **)((char *)v2544 + v2542);
      *v474 = sub_312290(*v475);
      return nullptr;
    case 239LL:
      v467 = v2542;
      v468 = v2542 + 8;
      v2542 = v468;
      v469 = *(_QWORD **)((char *)v2544 + v467);
      if ( (unsigned int)v468 > 0x2F )
      {
        v2242 = (__m128i **)v2543;
        v472 = v2543 + 8;
        v2543 += 8;
        v471 = *v2242;
      }
      else
      {
        v470 = v467 + 16;
        v471 = *(__m128i **)((char *)v2544 + v468);
        if ( (unsigned int)v470 > 0x2F )
          v472 = v2543;
        else
          v472 = (char *)v2544 + v470;
      }
      return (char *)(unsigned __int8)sub_3130F0(v469, v471, *(_DWORD *)v472 != 0);
    case 240LL:
      v465 = v2542 + 8;
      v466 = (unsigned __int64 *)((char *)v2544 + v465);
      if ( (unsigned int)v465 > 0x2F )
        v466 = (unsigned __int64 *)v2543;
      return (char *)sub_3122C0(*(unsigned __int64 ***)((char *)v2544 + v2542), *v466);
    case 241LL:
      v1971 = v2542 + 8;
      v1972 = (__int64 *)((char *)v2544 + v1971);
      if ( (unsigned int)v1971 > 0x2F )
        v1972 = (__int64 *)v2543;
      return (char *)(unsigned __int8)sub_3131C0(*(__int64 **)((char *)v2544 + v2542), *v1972);
    case 242LL:
      v1969 = v2542 + 8;
      v1970 = (__m128i ***)((char *)v2544 + v1969);
      if ( (unsigned int)v1969 > 0x2F )
        v1970 = (__m128i ***)v2543;
      return (char *)(unsigned __int8)sub_313340(*(__int64 **)((char *)v2544 + v2542), *v1970);
    case 243LL:
      v1235 = v2542 + 8;
      v1236 = (char *)v2544 + v1235;
      if ( (unsigned int)v1235 > 0x2F )
        v1236 = v2543;
      return (char *)(int)sub_312200(*(__int64 **)((char *)v2544 + v2542), *(_QWORD **)v1236);
    case 244LL:
      v1233 = v2542 + 8;
      v1234 = (__int64 *)((char *)v2544 + v1233);
      if ( (unsigned int)v1233 > 0x2F )
        v1234 = (__int64 *)v2543;
      sub_60BF0(*(_QWORD *)((char *)v2544 + v2542), *v1234);
      return nullptr;
    case 245LL:
      return (char *)sub_1AA170(*(_QWORD *)((char *)v2544 + v2542));
    case 246LL:
      v1682 = v2542;
      v1683 = v2542 + 8;
      v2542 = v1683;
      v1684 = *(__int64 **)((char *)v2544 + v1682);
      if ( (unsigned int)v1683 > 0x2F )
      {
        v2217 = (unsigned __int64 *)v2543;
        v1687 = (unsigned __int64 *)(v2543 + 8);
        v2543 += 8;
        v1686 = *v2217;
      }
      else
      {
        v1685 = v1682 + 16;
        v1686 = *(_QWORD *)((char *)v2544 + v1683);
        if ( (unsigned int)v1685 > 0x2F )
          v1687 = (unsigned __int64 *)v2543;
        else
          v1687 = (unsigned __int64 *)((char *)v2544 + v1685);
      }
      return (char *)(unsigned __int8)sub_11E920(v1684, v1686, *v1687);
    case 247LL:
      v657 = v2542 + 8;
      v658 = (__int64 **)((char *)v2544 + v657);
      if ( (unsigned int)v657 > 0x2F )
        v658 = (__int64 **)v2543;
      sub_1B1950(*(_QWORD **)((char *)v2544 + v2542), *v658);
      return nullptr;
    case 248LL:
      return (char *)sub_1B19C0(*(_QWORD **)((char *)v2544 + v2542));
    case 249LL:
      v1833 = v2542 + 8;
      v1834 = (__int64 *)((char *)v2544 + v1833);
      if ( (unsigned int)v1833 > 0x2F )
        v1834 = (__int64 *)v2543;
      return (char *)sub_11EA30(*(_QWORD *)((char *)v2544 + v2542), *v1834);
    case 250LL:
      return (char *)(sub_334A60() + 104);
    case 251LL:
      v999 = *(int *)((char *)v2544 + v2542);
      return (char *)(v999 >= *(_DWORD *)(sub_334A60() + 68));
    case 252LL:
      v997 = *(int *)((char *)v2544 + v2542);
      v998 = sub_334A60();
      return (char *)(int)sub_11E8F0(v998, v997);
    case 253LL:
      v1488 = v2542 + 8;
      v1489 = *(int *)((char *)v2544 + v2542);
      v1490 = (char *)v2544 + v1488;
      if ( (unsigned int)v1488 > 0x2F )
        v1490 = v2543;
      v1491 = *(_DWORD *)v1490;
      v1492 = sub_334A60();
      return (char *)(*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v1492 + 176LL))(v1492, v1489, v1491);
    case 254LL:
      v1482 = v2542 + 8;
      v1483 = *(__int64 **)((char *)v2544 + v2542);
      if ( (unsigned int)v1482 > 0x2F )
      {
        v2185 = (int *)v2543;
        v2186 = (unsigned int *)(v2543 + 8);
        v2543 += 8;
        v1485 = *v2185;
      }
      else
      {
        v1484 = v2542 + 16;
        v1485 = *(int *)((char *)v2544 + v1482);
        v2542 = v1484;
        if ( (unsigned int)v1484 <= 0x2F )
        {
          v1486 = *(int *)((char *)v2544 + v1484);
          goto LABEL_1345;
        }
        v2186 = (unsigned int *)v2543;
      }
      v2543 = (char *)(v2186 + 2);
      v1486 = *v2186;
LABEL_1345:
      v1487 = (_DWORD *)sub_334A60();
      return (char *)(int)sub_12F6F0(v1487, v1483, v1485, v1486);
    case 255LL:
      v374 = *(_QWORD *)((char *)v2544 + v2542);
      v375 = sub_334A60();
      sub_14D4D0(v375, v374);
      return nullptr;
    case 256LL:
      v372 = *(_QWORD *)((char *)v2544 + v2542);
      v373 = sub_334A60();
      return (char *)(unsigned __int8)sub_14D570(v373, v372);
    case 257LL:
      v2116 = *(_QWORD *)((char *)v2544 + v2542);
      v2117 = sub_334A60();
      sub_164F20(v2117, v2116);
      return nullptr;
    case 258LL:
      v2114 = *(_QWORD *)((char *)v2544 + v2542);
      v2115 = sub_334A60();
      return (char *)(unsigned __int8)sub_164FC0(v2115, v2114);
    case 259LL:
      v2160 = v2542;
      v2161 = v2542 + 8;
      v2542 = v2161;
      v2162 = *(__int64 **)((char *)v2544 + v2160);
      if ( (unsigned int)v2161 > 0x2F )
      {
        v2359 = (__int64 **)v2543;
        v2165 = v2543 + 8;
        v2543 += 8;
        v2164 = *v2359;
      }
      else
      {
        v2163 = v2160 + 16;
        v2164 = *(__int64 **)((char *)v2544 + v2161);
        if ( (unsigned int)v2163 > 0x2F )
          v2165 = v2543;
        else
          v2165 = (char *)v2544 + v2163;
      }
      sub_6D190(v2162, v2164, *(_DWORD *)v2165 != 0);
      return nullptr;
    case 260LL:
      v1436 = v2542;
      v1437 = v2542 + 8;
      v1438 = *(__int64 **)((char *)v2544 + v2542);
      if ( (unsigned int)v1437 > 0x2F )
      {
        v2450 = v2543;
        v2506 = v2543 + 8;
        v2543 += 8;
        v1440 = *(_QWORD **)v2450;
      }
      else
      {
        v1439 = v2542 + 16;
        v1440 = *(_QWORD **)((char *)v2544 + v1437);
        v2542 = v1439;
        if ( (unsigned int)v1439 <= 0x2F )
        {
          v1441 = v1436 + 24;
          v1442 = *(__int64 **)((char *)v2544 + v1439);
          if ( (unsigned int)v1441 > 0x2F )
            v1443 = v2543;
          else
            v1443 = (char *)v2544 + v1441;
LABEL_1303:
          sub_6D540(v1438, v1440, v1442, *(_DWORD *)v1443 != 0);
          return nullptr;
        }
        v2506 = v2543;
      }
      v2451 = (__int64 **)v2506;
      v1443 = v2506 + 8;
      v2543 = v1443;
      v1442 = *v2451;
      goto LABEL_1303;
    case 261LL:
      v1826 = v2542 + 8;
      v1827 = (__int64 **)((char *)v2544 + v1826);
      if ( (unsigned int)v1826 > 0x2F )
        v1827 = (__int64 **)v2543;
      return (char *)(int)sub_69200(*(_QWORD *)((char *)v2544 + v2542), *v1827);
    case 262LL:
      v1824 = v2542 + 8;
      v1825 = (__int64 **)((char *)v2544 + v1824);
      if ( (unsigned int)v1824 > 0x2F )
        v1825 = (__int64 **)v2543;
      return (char *)(int)sub_699E0(*(__int64 **)((char *)v2544 + v2542), *v1825);
    case 263LL:
      v952 = v2542 + 8;
      v953 = (int *)((char *)v2544 + v952);
      if ( (unsigned int)v952 > 0x2F )
        v953 = (signed int *)v2543;
      return (char *)(int)sub_63840(*(_QWORD *)((char *)v2544 + v2542), *v953);
    case 264LL:
      v950 = v2542 + 8;
      v951 = (int *)((char *)v2544 + v950);
      if ( (unsigned int)v950 > 0x2F )
        v951 = (int *)v2543;
      sub_631C0(*(_QWORD *)((char *)v2544 + v2542), *v951);
      return nullptr;
    case 265LL:
      v1979 = v2542 + 8;
      v1980 = (int *)((char *)v2544 + v1979);
      if ( (unsigned int)v1979 > 0x2F )
        v1980 = (int *)v2543;
      return (char *)(int)sub_61520(*(int **)((char *)v2544 + v2542), *v1980);
    case 266LL:
      v1973 = v2542;
      v1974 = v2542 + 8;
      v2542 = v1974;
      v1975 = *(_QWORD *)((char *)v2544 + v1973);
      if ( (unsigned int)v1974 > 0x2F )
      {
        v2177 = (int *)v2543;
        v1978 = (int *)(v2543 + 8);
        v2543 += 8;
        v1977 = *v2177;
      }
      else
      {
        v1976 = v1973 + 16;
        v1977 = *(int *)((char *)v2544 + v1974);
        if ( (unsigned int)v1976 > 0x2F )
          v1978 = (int *)v2543;
        else
          v1978 = (int *)((char *)v2544 + v1976);
      }
      return (char *)(unsigned __int8)sub_69120(v1975, v1977, *v1978);
    case 267LL:
      v1226 = v2542 + 8;
      v1227 = (__int64 *)((char *)v2544 + v1226);
      if ( (unsigned int)v1226 > 0x2F )
        v1227 = (__int64 *)v2543;
      return (char *)(int)sub_32B8D0(*(_QWORD *)((char *)v2544 + v2542), *v1227);
    case 268LL:
      v1222 = (__int64 **)((char *)v2544 + v2542);
      v2542 += 8;
      v1223 = *v1222;
      v1224 = *v1223;
      v1225 = *((int *)v1223 + 4);
      if ( *(_QWORD *)(v1224 + 440) >= v1225 )
        return (char *)(*(_QWORD *)(v1224 + 432) + 104 * v1225);
      if ( !under_debugger )
        sub_37E160(51258);
      goto LABEL_2707;
    case 269LL:
      v1672 = v2542 + 8;
      v1673 = (__int64 *)((char *)v2544 + v1672);
      if ( (unsigned int)v1672 > 0x2F )
        v1673 = (__int64 *)v2543;
      return (char *)(int)sub_32B900(*(_QWORD *)((char *)v2544 + v2542), *v1673);
    case 270LL:
      v1666 = v2542;
      v1667 = v2542 + 8;
      v2542 = v1667;
      v1668 = *(_QWORD *)((char *)v2544 + v1666);
      if ( (unsigned int)v1667 > 0x2F )
      {
        v2210 = (__m128i **)v2543;
        v1671 = v2543 + 8;
        v2543 += 8;
        v1670 = *v2210;
      }
      else
      {
        v1669 = v1666 + 16;
        v1670 = *(__m128i **)((char *)v2544 + v1667);
        if ( (unsigned int)v1669 > 0x2F )
          v1671 = v2543;
        else
          v1671 = (char *)v2544 + v1669;
      }
      return (char *)sub_1CBE90(*(_QWORD **)v1668, v1670, *(_QWORD *)(v1668 + 8), *(_QWORD **)v1671, nullptr);
    case 271LL:
      v2152 = v2542 + 8;
      v2153 = (__int64 **)((char *)v2544 + v2152);
      if ( (unsigned int)v2152 > 0x2F )
        v2153 = (__int64 **)v2543;
      sub_118010(*(_QWORD *)((char *)v2544 + v2542), *v2153);
      return nullptr;
    case 272LL:
      return (char *)sub_1AA370(*(_QWORD *)((char *)v2544 + v2542));
    case 273LL:
      v2124 = v2542 + 8;
      v2125 = (unsigned __int8 **)((char *)v2544 + v2124);
      if ( (unsigned int)v2124 > 0x2F )
        v2125 = (unsigned __int8 **)v2543;
      sub_11F840(*(_QWORD *)((char *)v2544 + v2542), *v2125);
      return nullptr;
    case 274LL:
      v2025 = v2542 + 8;
      v2026 = (unsigned __int8 **)((char *)v2544 + v2025);
      if ( (unsigned int)v2025 > 0x2F )
        v2026 = (unsigned __int8 **)v2543;
      return (char *)sub_120F80(*(_QWORD *)((char *)v2544 + v2542), *v2026);
    case 275LL:
      v1335 = v2542 + 8;
      v1336 = (char **)((char *)v2544 + v1335);
      if ( (unsigned int)v1335 > 0x2F )
        v1336 = (char **)v2543;
      sub_118810(*(char **)((char *)v2544 + v2542), *v1336);
      return nullptr;
    case 276LL:
      sub_118BA0(*(_QWORD *)((char *)v2544 + v2542));
      return nullptr;
    case 277LL:
      v1754 = v2542;
      v1755 = v2542 + 8;
      v2542 = v1755;
      v1756 = *(_QWORD *)((char *)v2544 + v1754);
      if ( (unsigned int)v1755 > 0x2F )
      {
        v2221 = (char **)v2543;
        v1759 = (unsigned int *)(v2543 + 8);
        v2543 += 8;
        v1758 = *v2221;
      }
      else
      {
        v1757 = v1754 + 16;
        v1758 = *(char **)((char *)v2544 + v1755);
        if ( (unsigned int)v1757 > 0x2F )
          v1759 = (unsigned int *)v2543;
        else
          v1759 = (unsigned int *)((char *)v2544 + v1757);
      }
      sub_1AE320(v1756, v1758, *v1759);
      return nullptr;
    case 278LL:
      return (char *)sub_1AE3A0(*(_QWORD *)((char *)v2544 + v2542));
    case 279LL:
      v1760 = v2542;
      v1761 = v2542 + 8;
      v1762 = *(_QWORD *)((char *)v2544 + v2542);
      if ( (unsigned int)v1761 > 0x2F )
      {
        v2447 = v2543;
        v2448 = v2543 + 8;
        v2543 += 8;
        v1764 = *(_QWORD **)v2447;
      }
      else
      {
        v1763 = v2542 + 16;
        v1764 = *(_QWORD **)((char *)v2544 + v1761);
        v2542 = v1763;
        if ( (unsigned int)v1763 <= 0x2F )
        {
          v1765 = v1760 + 24;
          v1766 = *(_QWORD **)((char *)v2544 + v1763);
          if ( (unsigned int)v1765 > 0x2F )
            v1767 = (unsigned __int64 *)v2543;
          else
            v1767 = (unsigned __int64 *)((char *)v2544 + v1765);
          return (char *)(unsigned __int8)sub_118E20(v1762, v1764, v1766, *v1767);
        }
        v2448 = v2543;
      }
      v2449 = v2448;
      v1767 = (unsigned __int64 *)(v2448 + 8);
      v2543 = (char *)v1767;
      v1766 = *(_QWORD **)v2449;
      return (char *)(unsigned __int8)sub_118E20(v1762, v1764, v1766, *v1767);
    case 280LL:
      v789 = v2542;
      v790 = v2542 + 8;
      v791 = *(_QWORD *)((char *)v2544 + v2542);
      if ( (unsigned int)v790 > 0x2F )
      {
        v2445 = v2543;
        v2505 = v2543 + 8;
        v2543 += 8;
        v793 = *(_QWORD **)v2445;
      }
      else
      {
        v792 = v2542 + 16;
        v793 = *(_QWORD **)((char *)v2544 + v790);
        v2542 = v792;
        if ( (unsigned int)v792 <= 0x2F )
        {
          v794 = v789 + 24;
          v795 = *(__int64 ***)((char *)v2544 + v792);
          if ( (unsigned int)v794 > 0x2F )
            v796 = (unsigned __int64 *)v2543;
          else
            v796 = (unsigned __int64 *)((char *)v2544 + v794);
          return (char *)(unsigned __int8)sub_1192D0(v791, v793, v795, *v796);
        }
        v2505 = v2543;
      }
      v2446 = (__int64 ***)v2505;
      v796 = (unsigned __int64 *)(v2505 + 8);
      v2543 = (char *)v796;
      v795 = *v2446;
      return (char *)(unsigned __int8)sub_1192D0(v791, v793, v795, *v796);
    case 281LL:
      v1109 = v2542;
      v1110 = v2542 + 8;
      v1111 = *(_QWORD *)((char *)v2544 + v2542);
      if ( (unsigned int)v1110 > 0x2F )
      {
        v2442 = (__int64 *)v2543;
        v2443 = v2543 + 8;
        v2543 += 8;
        v1113 = *v2442;
      }
      else
      {
        v1112 = v2542 + 16;
        v1113 = *(_QWORD *)((char *)v2544 + v1110);
        v2542 = v1112;
        if ( (unsigned int)v1112 <= 0x2F )
        {
          v1114 = v1109 + 24;
          v1115 = *(_QWORD *)((char *)v2544 + v1112);
          if ( (unsigned int)v1114 > 0x2F )
            v1116 = (int *)v2543;
          else
            v1116 = (int *)((char *)v2544 + v1114);
LABEL_989:
          sub_122220(v1111, v1113, v1115, *v1116);
          return nullptr;
        }
        v2443 = v2543;
      }
      v2444 = (__int64 *)v2443;
      v1116 = (int *)(v2443 + 8);
      v2543 = (char *)v1116;
      v1115 = *v2444;
      goto LABEL_989;
    case 282LL:
      v1100 = v2542;
      v1101 = v2542 + 8;
      v2542 = v1101;
      v1102 = *(_QWORD *)((char *)v2544 + v1100);
      if ( (unsigned int)v1101 > 0x2F )
      {
        v2282 = (__int64 *)v2543;
        v2526 = v2543 + 8;
        v2543 += 8;
        v1104 = *v2282;
      }
      else
      {
        v1103 = v1100 + 16;
        v1104 = *(_QWORD *)((char *)v2544 + v1101);
        v2542 = v1103;
        if ( (unsigned int)v1103 <= 0x2F )
        {
          v1105 = *(const char **)((char *)v2544 + v1103);
          v2542 = v1100 + 24;
          if ( v1100 + 24 <= 0x2F )
          {
            v1106 = v1100 + 32;
            v2542 = v1106;
            if ( (unsigned int)v1106 <= 0x2F )
            {
              v1107 = (char *)v2544 + v1106;
              v2542 = v1100 + 40;
              goto LABEL_984;
            }
            v1107 = v2543;
LABEL_2040:
            v2543 = v1107 + 8;
LABEL_984:
            v1108 = *(_DWORD **)v1107;
            *(_QWORD *)v2540 = 0;
            copy_tinfo_t();
            sub_118F50(v1102, v1104, v1105, (__int64 *)v2540, v1108);
            clear_tinfo_t();
            return nullptr;
          }
          v2284 = v2543;
LABEL_2039:
          v1107 = v2284 + 8;
          v2543 = v1107;
          goto LABEL_2040;
        }
        v2526 = v2543;
      }
      v2283 = (const char **)v2526;
      v2284 = v2526 + 8;
      v2543 = v2284;
      v1105 = *v2283;
      goto LABEL_2039;
    case 283LL:
      v1098 = v2542 + 8;
      v1099 = (unsigned __int8 **)((char *)v2544 + v1098);
      if ( (unsigned int)v1098 > 0x2F )
        v1099 = (unsigned __int8 **)v2543;
      sub_1220E0(*(_QWORD *)((char *)v2544 + v2542), *v1099);
      return nullptr;
    case 284LL:
      v1086 = v2542;
      v1087 = v2542 + 8;
      v2542 = v1087;
      v1088 = *(_QWORD *)((char *)v2544 + v1086);
      if ( (unsigned int)v1087 > 0x2F )
      {
        v2278 = (__int64 *)v2543;
        v2525 = v2543 + 8;
        v2543 += 8;
        v1090 = *v2278;
      }
      else
      {
        v1089 = v1086 + 16;
        v1090 = *(_QWORD *)((char *)v2544 + v1087);
        if ( (unsigned int)v1089 <= 0x2F )
        {
          v1091 = v1086 + 24;
          v1092 = *(int *)((char *)v2544 + v1089);
          v2542 = v1091;
          if ( (unsigned int)v1091 <= 0x2F )
          {
            v1093 = v1086 + 32;
            v1094 = *(_QWORD *)((char *)v2544 + v1091);
            if ( (unsigned int)v1093 > 0x2F )
              v1095 = (__int32 *)v2543;
            else
              v1095 = (int *)((char *)v2544 + v1093);
LABEL_975:
            v1096 = *v1095;
            v1097 = sub_334A60();
            sub_11C810(v1088, v1097, v1090, v1092, v1094, v1096);
            return nullptr;
          }
          v2280 = v2543;
LABEL_2037:
          v2281 = (__int64 *)v2280;
          v1095 = (__int32 *)(v2280 + 8);
          v2543 = (char *)v1095;
          v1094 = *v2281;
          goto LABEL_975;
        }
        v2525 = v2543;
      }
      v2279 = (int *)v2525;
      v2280 = v2525 + 8;
      v2543 = v2280;
      v1092 = *v2279;
      goto LABEL_2037;
    case 285LL:
      v1899 = v2542;
      v1900 = v2542 + 8;
      v2542 = v1900;
      v1901 = *(_QWORD *)((char *)v2544 + v1899);
      if ( (unsigned int)v1900 > 0x2F )
      {
        v2452 = (__int64 *)v2543;
        v1904 = (__int64 *)(v2543 + 8);
        v2543 += 8;
        v1903 = *v2452;
      }
      else
      {
        v1902 = v1899 + 16;
        v1903 = *(_QWORD *)((char *)v2544 + v1900);
        if ( (unsigned int)v1902 > 0x2F )
          v1904 = (__int64 *)v2543;
        else
          v1904 = (__int64 *)((char *)v2544 + v1902);
      }
      v1905 = *v1904;
      v1906 = sub_334A60();
      return (char *)(unsigned __int8)sub_119160(v1901, v1906, v1903, v1905);
    case 286LL:
      v1592 = v2542 + 8;
      v1593 = *(_QWORD *)((char *)v2544 + v2542);
      v1594 = (char *)v2544 + v1592;
      if ( (unsigned int)v1592 > 0x2F )
        v1594 = v2543;
      v1595 = *(_QWORD *)v1594;
      v1596 = sub_334A60();
      *(_BYTE *)v1593 = 6;
      v1597 = 8 * *(_DWORD *)(v1596 + 84);
      v1598 = 1LL << (8 * *(_BYTE *)(v1596 + 84));
      if ( (unsigned __int64)v1597 >= 0x40 )
        v1598 = 0;
      *(_QWORD *)(v1593 + 8) = v1595 & (v1598 - 1);
      return nullptr;
    case 287LL:
      v451 = v2542 + 8;
      v452 = *(_QWORD *)((char *)v2544 + v2542);
      v453 = (char *)v2544 + v451;
      if ( (unsigned int)v451 > 0x2F )
        v453 = v2543;
      v454 = *(_QWORD *)v453;
      v455 = sub_334A60();
      sub_118BA0(v452);
      *(_BYTE *)v452 = 6;
      v456 = 1LL << (8 * *(_BYTE *)(v455 + 84));
      if ( (unsigned __int64)(8 * *(_DWORD *)(v455 + 84)) >= 0x40 )
        v456 = 0;
      *(_QWORD *)(v452 + 8) = v454 & (v456 - 1);
      return nullptr;
    case 288LL:
      v443 = v2542;
      v444 = v2542 + 8;
      v445 = *(_QWORD *)((char *)v2544 + v2542);
      if ( (unsigned int)v444 > 0x2F )
      {
        v2239 = (int *)v2543;
        v2240 = v2543 + 8;
        v2543 += 8;
        v447 = *v2239;
      }
      else
      {
        v446 = v2542 + 16;
        v447 = *(int *)((char *)v2544 + v444);
        v2542 = v446;
        if ( (unsigned int)v446 <= 0x2F )
        {
          v448 = v443 + 24;
          v449 = *(int *)((char *)v2544 + v446);
          if ( (unsigned int)v448 > 0x2F )
            v450 = (int *)v2543;
          else
            v450 = (int *)((char *)v2544 + v448);
LABEL_402:
          sub_1210A0(v445, v447, v449, *v450);
          return nullptr;
        }
        v2240 = v2543;
      }
      v2241 = (int *)v2240;
      v450 = (int *)(v2240 + 8);
      v2543 = (char *)v450;
      v449 = *v2241;
      goto LABEL_402;
    case 289LL:
      sub_1192A0(*(_QWORD *)((char *)v2544 + v2542));
      return nullptr;
    case 290LL:
      v1375 = *(int *)((char *)v2544 + v2542);
      v1376 = sub_334A60();
      return (char *)(unsigned __int8)sub_118AD0(v1376, v1375);
    case 291LL:
      return (char *)(unsigned __int8)sub_11AB30(*(_QWORD *)((char *)v2544 + v2542));
    case 292LL:
      v1373 = *(_QWORD *)((char *)v2544 + v2542);
      v1374 = sub_334A60();
      return (char *)(unsigned __int8)sub_11BBE0(v1373, v1374);
    case 293LL:
      v1800 = v2542 + 8;
      v1801 = (char *)v2544 + v1800;
      if ( (unsigned int)v1800 > 0x2F )
        v1801 = v2543;
      return (char *)sub_309240(*(_QWORD *)((char *)v2544 + v2542), *(unsigned int *)v1801);
    case 294LL:
      v1795 = v2542 + 8;
      v1796 = *(_QWORD *)((char *)v2544 + v2542);
      v1797 = (int *)((char *)v2544 + v1795);
      if ( (unsigned int)v1795 > 0x2F )
        v1797 = (int *)v2543;
      v1798 = *v1797;
      v1799 = sub_334A60();
      return (char *)(unsigned __int8)sub_1236D0(v1796, v1799, v1798);
    case 295LL:
      v2154 = v2542;
      v2155 = v2542 + 8;
      v2542 = v2155;
      v2156 = *(unsigned __int8 **)((char *)v2544 + v2154);
      if ( (unsigned int)v2155 > 0x2F )
      {
        v2397 = (__int64 *)v2543;
        v2159 = (unsigned int *)(v2543 + 8);
        v2543 += 8;
        v2158 = *v2397;
      }
      else
      {
        v2157 = v2154 + 16;
        v2158 = *(_QWORD *)((char *)v2544 + v2155);
        if ( (unsigned int)v2157 > 0x2F )
          v2159 = (unsigned int *)v2543;
        else
          v2159 = (unsigned int *)((char *)v2544 + v2157);
      }
      return (char *)(unsigned __int8)sub_121960(v2156, v2158, *v2159);
    case 296LL:
      v864 = v2542 + 8;
      v865 = (unsigned __int8 **)((char *)v2544 + v864);
      if ( (unsigned int)v864 > 0x2F )
        v865 = (unsigned __int8 **)v2543;
      return (char *)sub_119840(*(unsigned __int8 **)((char *)v2544 + v2542), *v865);
    case 297LL:
      v2136 = v2542;
      v2137 = v2542 + 8;
      v2138 = *(_QWORD *)((char *)v2544 + v2542);
      if ( (unsigned int)v2137 > 0x2F )
      {
        v2378 = (__int64 *)v2543;
        v2510 = v2543 + 8;
        v2543 += 8;
        v2140 = *v2378;
      }
      else
      {
        v2139 = v2542 + 16;
        v2140 = *(_QWORD *)((char *)v2544 + v2137);
        v2542 = v2139;
        if ( (unsigned int)v2139 <= 0x2F )
        {
          v2141 = v2136 + 24;
          v2142 = *(_QWORD *)((char *)v2544 + v2139);
          if ( (unsigned int)v2141 > 0x2F )
            v2143 = v2543;
          else
            v2143 = (char *)v2544 + v2141;
          return (char *)(int)sub_11A7B0(v2138, v2140, v2142, *(_DWORD *)v2143 != 0);
        }
        v2510 = v2543;
      }
      v2379 = (__int64 *)v2510;
      v2143 = v2510 + 8;
      v2543 = v2143;
      v2142 = *v2379;
      return (char *)(int)sub_11A7B0(v2138, v2140, v2142, *(_DWORD *)v2143 != 0);
    case 298LL:
      return (char *)(int)sub_11A340(*(_BYTE **)((char *)v2544 + v2542));
    case 299LL:
      v1171 = v2542;
      v1172 = v2542 + 8;
      v2542 = v1172;
      v1173 = *(char **)((char *)v2544 + v1171);
      if ( (unsigned int)v1172 > 0x2F )
      {
        v2461 = v2543;
        v1176 = v2543 + 8;
        v2543 += 8;
        v1175 = *(_QWORD **)v2461;
      }
      else
      {
        v1174 = v1171 + 16;
        v1175 = *(_QWORD **)((char *)v2544 + v1172);
        if ( (unsigned int)v1174 > 0x2F )
          v1176 = v2543;
        else
          v1176 = (char *)v2544 + v1174;
      }
      return (char *)(unsigned __int8)sub_11BB80(v1173, v1175, *(_DWORD *)v1176 != 0);
    case 300LL:
      v1169 = v2542 + 8;
      v1170 = (char *)v2544 + v1169;
      if ( (unsigned int)v1169 > 0x2F )
        v1170 = v2543;
      return (char *)(unsigned __int8)sub_32A2E0(*(_QWORD *)((char *)v2544 + v2542), *(_QWORD **)v1170);
    case 301LL:
      v603 = v2542 + 8;
      v604 = *(_QWORD *)((char *)v2544 + v2542);
      v605 = (int *)((char *)v2544 + v603);
      if ( (unsigned int)v603 > 0x2F )
        v605 = (int *)v2543;
      v606 = *v605;
      v607 = sub_334A60();
      return (char *)(unsigned __int8)sub_1230B0(v604, v607, v606);
    case 302LL:
      v598 = v2542 + 8;
      v599 = *(_QWORD *)((char *)v2544 + v2542);
      v600 = (int *)((char *)v2544 + v598);
      if ( (unsigned int)v598 > 0x2F )
        v600 = (int *)v2543;
      v601 = *v600;
      v602 = sub_334A60();
      return (char *)(unsigned __int8)sub_123650(v599, v602, v601, 0);
    case 303LL:
      v1626 = v2542 + 8;
      v1627 = *(unsigned __int8 **)((char *)v2544 + v2542);
      v1628 = (int *)((char *)v2544 + v1626);
      if ( (unsigned int)v1626 > 0x2F )
        v1628 = (int *)v2543;
      v1629 = *v1628;
      v1630 = sub_334A60();
      return (char *)(unsigned __int8)sub_1232C0(v1627, v1630, v1629, 0);
    case 304LL:
      v593 = v2542 + 8;
      v594 = *(_QWORD *)((char *)v2544 + v2542);
      v595 = (int *)((char *)v2544 + v593);
      if ( (unsigned int)v593 > 0x2F )
        v595 = (int *)v2543;
      v596 = *v595;
      v597 = sub_334A60();
      return (char *)(unsigned __int8)sub_123090(v594, v597, v596);
    case 305LL:
      v1289 = v2542 + 8;
      v1290 = *(_QWORD *)((char *)v2544 + v2542);
      v1291 = (int *)((char *)v2544 + v1289);
      if ( (unsigned int)v1289 > 0x2F )
        v1291 = (signed int *)v2543;
      v1292 = *v1291;
      v1293 = sub_334A60();
      return (char *)(unsigned __int8)sub_122D10(v1290, v1293, v1292);
    case 306LL:
      v1281 = v2542;
      v1282 = v2542 + 8;
      v2542 = v1282;
      v1283 = *(_QWORD *)((char *)v2544 + v1281);
      if ( (unsigned int)v1282 > 0x2F )
      {
        v2202 = (int *)v2543;
        v1286 = (int *)(v2543 + 8);
        v2543 += 8;
        v1285 = *v2202;
      }
      else
      {
        v1284 = v1281 + 16;
        v1285 = *(int *)((char *)v2544 + v1282);
        if ( (unsigned int)v1284 > 0x2F )
          v1286 = (int *)v2543;
        else
          v1286 = (int *)((char *)v2544 + v1284);
      }
      v1287 = *v1286;
      v1288 = sub_334A60();
      return (char *)(unsigned __int8)sub_126950(v1283, v1288, v1285, v1287);
    case 307LL:
      v1996 = v2542;
      v1997 = v2542 + 8;
      v1998 = *(_BYTE **)((char *)v2544 + v2542);
      if ( (unsigned int)v1997 > 0x2F )
      {
        v2458 = (__int64 *)v2543;
        v2459 = v2543 + 8;
        v2543 += 8;
        v2000 = *v2458;
      }
      else
      {
        v1999 = v2542 + 16;
        v2000 = *(_QWORD *)((char *)v2544 + v1997);
        v2542 = v1999;
        if ( (unsigned int)v1999 <= 0x2F )
        {
          v2001 = v1996 + 24;
          v2002 = *(_QWORD *)((char *)v2544 + v1999);
          if ( (unsigned int)v2001 > 0x2F )
            v2003 = (__int64 *)v2543;
          else
            v2003 = (__int64 *)((char *)v2544 + v2001);
LABEL_1832:
          v2004 = *v2003;
          v2005 = sub_334A60();
          return (char *)(unsigned __int8)sub_155B40(v1998, v2005, v2000, v2002, v2004);
        }
        v2459 = v2543;
      }
      v2460 = (__int64 *)v2459;
      v2003 = (__int64 *)(v2459 + 8);
      v2543 = (char *)v2003;
      v2002 = *v2460;
      goto LABEL_1832;
    case 308LL:
      v1271 = v2542;
      v1272 = v2542 + 8;
      v1273 = *(char **)((char *)v2544 + v2542);
      if ( (unsigned int)v1272 > 0x2F )
      {
        v2206 = (int *)v2543;
        v2531 = v2543 + 8;
        v2543 += 8;
        v1275 = *v2206;
      }
      else
      {
        v1274 = v2542 + 16;
        v1275 = *(int *)((char *)v2544 + v1272);
        v2542 = v1274;
        if ( (unsigned int)v1274 <= 0x2F )
        {
          v1276 = v1271 + 24;
          v1277 = *(_QWORD *)((char *)v2544 + v1274);
          if ( (unsigned int)v1276 > 0x2F )
            v1278 = (int *)v2543;
          else
            v1278 = (int *)((char *)v2544 + v1276);
LABEL_1157:
          v1279 = *v1278;
          v1280 = sub_334A60();
          sub_11C5E0(v1273, v1280, v1275, v1277, v1279);
          return nullptr;
        }
        v2531 = v2543;
      }
      v2207 = (__int64 *)v2531;
      v1278 = (int *)(v2531 + 8);
      v2543 = (char *)v1278;
      v1277 = *v2207;
      goto LABEL_1157;
    case 309LL:
      v1700 = v2542;
      v1701 = v2542 + 8;
      v2542 = v1701;
      v1702 = *(_QWORD *)((char *)v2544 + v1700);
      if ( (unsigned int)v1701 > 0x2F )
      {
        v2178 = (__int64 **)v2543;
        v1705 = (unsigned int *)(v2543 + 8);
        v2543 += 8;
        v1704 = *v2178;
      }
      else
      {
        v1703 = v1700 + 16;
        v1704 = *(__int64 **)((char *)v2544 + v1701);
        if ( (unsigned int)v1703 > 0x2F )
          v1705 = (unsigned int *)v2543;
        else
          v1705 = (unsigned int *)((char *)v2544 + v1703);
      }
      sub_1AE490(v1702, v1704, *v1705);
      return nullptr;
    case 310LL:
      return (char *)sub_1AE5A0(*(_QWORD *)((char *)v2544 + v2542));
    case 311LL:
      v730 = v2542 + 8;
      v731 = *(_QWORD *)((char *)v2544 + v2542);
      if ( (unsigned int)v730 > 0x2F )
      {
        v2456 = (int *)v2543;
        v2457 = (int *)(v2543 + 8);
        v2543 += 8;
        v733 = *v2456;
      }
      else
      {
        v732 = v2542 + 16;
        v733 = *(int *)((char *)v2544 + v730);
        v2542 = v732;
        if ( (unsigned int)v732 <= 0x2F )
        {
          v734 = *(int *)((char *)v2544 + v732);
          goto LABEL_626;
        }
        v2457 = (int *)v2543;
      }
      v2543 = (char *)(v2457 + 2);
      v734 = *v2457;
LABEL_626:
      sub_32A190(v731, v733, v734);
      return nullptr;
    case 312LL:
      v728 = v2542 + 8;
      v729 = (__int64 *)((char *)v2544 + v728);
      if ( (unsigned int)v728 > 0x2F )
        v729 = (__int64 *)v2543;
      return (char *)(int)sub_329E50(*(_QWORD *)((char *)v2544 + v2542), *v729);
    case 313LL:
      return (char *)(unsigned __int8)sub_32FFE0(*(_QWORD *)((char *)v2544 + v2542));
    case 314LL:
      v1870 = v2542;
      v1871 = v2542 + 8;
      v2542 = v1871;
      if ( (unsigned int)v1871 > 0x2F )
      {
        v1872 = (__int64 *)v2543;
        v2543 += 8;
      }
      else
      {
        v1872 = (__int64 *)((char *)v2544 + v1871);
        v2542 = v1870 + 16;
      }
      sub_331070(v2540, *v1872);
      copy_tinfo_t();
      clear_tinfo_t();
      return nullptr;
    case 315LL:
      v1028 = v2542;
      v1029 = v2542 + 8;
      v1030 = *(_QWORD *)((char *)v2544 + v2542);
      if ( (unsigned int)v1029 > 0x2F )
      {
        v2453 = (__int64 **)v2543;
        v2454 = v2543 + 8;
        v2543 += 8;
        v1032 = *v2453;
      }
      else
      {
        v1031 = v2542 + 16;
        v1032 = *(__int64 **)((char *)v2544 + v1029);
        v2542 = v1031;
        if ( (unsigned int)v1031 <= 0x2F )
        {
          v1033 = v1028 + 24;
          v1034 = *(int *)((char *)v2544 + v1031);
          if ( (unsigned int)v1033 > 0x2F )
            v1035 = (unsigned int *)v2543;
          else
            v1035 = (unsigned int *)((char *)v2544 + v1033);
LABEL_912:
          sub_1AEE80(v1030, v1032, v1034, *v1035);
          return nullptr;
        }
        v2454 = v2543;
      }
      v2455 = (int *)v2454;
      v1035 = (unsigned int *)(v2454 + 8);
      v2543 = (char *)v1035;
      v1034 = *v2455;
      goto LABEL_912;
    case 316LL:
      return (char *)sub_1AEF00(*(_QWORD *)((char *)v2544 + v2542));
    case 317LL:
      v1549 = v2542 + 8;
      v1550 = (__int64 **)((char *)v2544 + v1549);
      if ( (unsigned int)v1549 > 0x2F )
        v1550 = (__int64 **)v2543;
      return (char *)(int)sub_119400(*(__int64 **)((char *)v2544 + v2542), *v1550);
    case 318LL:
      v1547 = v2542 + 8;
      v1548 = (__int64 **)((char *)v2544 + v1547);
      if ( (unsigned int)v1547 > 0x2F )
        v1548 = (__int64 **)v2543;
      sub_1AC9B0(*(_QWORD **)((char *)v2544 + v2542), *v1548);
      return nullptr;
    case 319LL:
      return (char *)sub_1AF000(*(_QWORD **)((char *)v2544 + v2542));
    case 320LL:
      v386 = v2542 + 8;
      v387 = (__int64 **)((char *)v2544 + v386);
      if ( (unsigned int)v386 > 0x2F )
        v387 = (__int64 **)v2543;
      return (char *)(unsigned __int8)sub_32A8D0(*(__int64 **)((char *)v2544 + v2542), *v387);
    case 321LL:
      v1422 = v2542;
      v1423 = v2542 + 8;
      v2542 = v1423;
      v1424 = *(unsigned __int64 **)((char *)v2544 + v1422);
      if ( (unsigned int)v1423 > 0x2F )
      {
        v2492 = (__int64 *)v2543;
        v1427 = (__int64 *)(v2543 + 8);
        v2543 += 8;
        v1426 = *v2492;
      }
      else
      {
        v1425 = v1422 + 16;
        v1426 = *(_QWORD *)((char *)v2544 + v1423);
        if ( (unsigned int)v1425 > 0x2F )
          v1427 = (__int64 *)v2543;
        else
          v1427 = (__int64 *)((char *)v2544 + v1425);
      }
      *v1424 = sub_32A940(v1426, *v1427);
      return nullptr;
    case 322LL:
      v1420 = v2542 + 8;
      v1421 = (__int64 **)((char *)v2544 + v1420);
      if ( (unsigned int)v1420 > 0x2F )
        v1421 = (__int64 **)v2543;
      sub_1B1A90(*(_QWORD *)((char *)v2544 + v2542), *v1421);
      return nullptr;
    case 323LL:
      return (char *)sub_1B1B70(*(_QWORD *)((char *)v2544 + v2542));
    case 324LL:
      v1418 = v2542 + 8;
      v1419 = (__int64 **)((char *)v2544 + v1418);
      if ( (unsigned int)v1418 > 0x2F )
        v1419 = (__int64 **)v2543;
      sub_102580(*(_QWORD *)((char *)v2544 + v2542), *v1419);
      return nullptr;
    case 325LL:
      return (char *)sub_1AA270(*(_QWORD *)((char *)v2544 + v2542));
    case 326LL:
      v888 = v2542;
      v889 = v2542 + 8;
      v2542 = v889;
      v890 = *(_QWORD *)((char *)v2544 + v888);
      if ( (unsigned int)v889 > 0x2F )
      {
        v2262 = (__int64 *)v2543;
        v893 = (__int64 *)(v2543 + 8);
        v2543 += 8;
        v892 = *v2262;
      }
      else
      {
        v891 = v888 + 16;
        v892 = *(_QWORD *)((char *)v2544 + v889);
        if ( (unsigned int)v891 > 0x2F )
          v893 = (__int64 *)v2543;
        else
          v893 = (__int64 *)((char *)v2544 + v891);
      }
      sub_FFB60(v890, v892, *v893);
      return nullptr;
    case 327LL:
      v1812 = v2542 + 8;
      v1813 = *(_QWORD *)((char *)v2544 + v2542);
      v1814 = (__int64 *)((char *)v2544 + v1812);
      if ( (unsigned int)v1812 > 0x2F )
        v1814 = (__int64 *)v2543;
      v1815 = *v1814;
      v1816 = sub_334A60();
      sub_FFB80(v1813, v1816, v1815);
      return nullptr;
    case 328LL:
      v886 = v2542 + 8;
      v887 = (__int64 *)((char *)v2544 + v886);
      if ( (unsigned int)v886 > 0x2F )
        v887 = (__int64 *)v2543;
      return (char *)sub_100BF0(*(unsigned __int64 **)((char *)v2544 + v2542), *v887);
    case 329LL:
      v1964 = v2542 + 8;
      v1965 = (__int64 **)((char *)v2544 + v1964);
      if ( (unsigned int)v1964 > 0x2F )
        v1965 = (__int64 **)v2543;
      sub_1028E0(*(_QWORD **)((char *)v2544 + v2542), *v1965);
      return nullptr;
    case 330LL:
      return (char *)sub_1AA2F0(*(_QWORD **)((char *)v2544 + v2542));
    case 331LL:
      v1188 = v2542;
      v1189 = v2542 + 8;
      v2542 = v1189;
      v1190 = *(_QWORD **)((char *)v2544 + v1188);
      if ( (unsigned int)v1189 > 0x2F )
      {
        v2171 = v2543;
        v1193 = v2543 + 8;
        v2543 += 8;
        v1192 = *(_QWORD **)v2171;
      }
      else
      {
        v1191 = v1188 + 16;
        v1192 = *(_QWORD **)((char *)v2544 + v1189);
        if ( (unsigned int)v1191 > 0x2F )
          v1193 = v2543;
        else
          v1193 = (char *)v2544 + v1191;
      }
      v1194 = *(_DWORD *)v1193;
      v1195 = sub_334A60();
      return (char *)(int)sub_100C40(v1190, v1195, v1192, v1194);
    case 332LL:
      sub_100C10(*(_QWORD *)((char *)v2544 + v2542));
      return nullptr;
    case 333LL:
      v1653 = v2542 + 8;
      v1654 = (__int64 *)((char *)v2544 + v1653);
      if ( (unsigned int)v1653 > 0x2F )
        v1654 = (__int64 *)v2543;
      sub_32B920(*(_QWORD *)((char *)v2544 + v2542), *v1654);
      return nullptr;
    case 334LL:
      v1651 = v2542 + 8;
      v1652 = (__int64 *)((char *)v2544 + v1651);
      if ( (unsigned int)v1651 > 0x2F )
        v1652 = (__int64 *)v2543;
      sub_1211A0(*(_QWORD *)((char *)v2544 + v2542), *v1652);
      return nullptr;
    case 335LL:
      v646 = *(_QWORD *)((char *)v2544 + v2542);
      v647 = sub_334A60();
      sub_1193D0(v646, v647);
      return nullptr;
    case 336LL:
      v644 = v2542 + 8;
      v645 = (__int64 *)((char *)v2544 + v644);
      if ( (unsigned int)v644 > 0x2F )
        v645 = (__int64 *)v2543;
      sub_119690(*(_QWORD *)((char *)v2544 + v2542), *v645);
      return nullptr;
    case 337LL:
      v2012 = v2542;
      v2013 = v2542 + 8;
      v2542 = v2013;
      v2014 = *(int **)((char *)v2544 + v2012);
      if ( (unsigned int)v2013 > 0x2F )
      {
        v2486 = (__int64 **)v2543;
        v2017 = (unsigned int *)(v2543 + 8);
        v2543 += 8;
        v2016 = *v2486;
      }
      else
      {
        v2015 = v2012 + 16;
        v2016 = *(__int64 **)((char *)v2544 + v2013);
        if ( (unsigned int)v2015 > 0x2F )
          v2017 = (unsigned int *)v2543;
        else
          v2017 = (unsigned int *)((char *)v2544 + v2015);
      }
      sub_1B1670(v2014, v2016, *v2017);
      return nullptr;
    case 338LL:
      return (char *)sub_1B1800(*(int **)((char *)v2544 + v2542));
    case 339LL:
      v1329 = v2542 + 8;
      v1330 = (__int64 *)((char *)v2544 + v1329);
      if ( (unsigned int)v1329 > 0x2F )
        v1330 = (__int64 *)v2543;
      sub_11E090(*(_QWORD *)((char *)v2544 + v2542), *v1330);
      return nullptr;
    case 340LL:
      v1315 = v2542;
      v1316 = v2542 + 8;
      v1317 = *(unsigned int **)((char *)v2544 + v2542);
      if ( (unsigned int)v1316 > 0x2F )
      {
        v2195 = (__m128i **)v2543;
        v2529 = v2543 + 8;
        v2543 += 8;
        v1319 = *v2195;
      }
      else
      {
        v1318 = v2542 + 16;
        v1319 = *(__m128i **)((char *)v2544 + v1316);
        v2542 = v1318;
        if ( (unsigned int)v1318 <= 0x2F )
        {
          v1320 = v1315 + 24;
          v1321 = *(_QWORD *)((char *)v2544 + v1318);
          if ( (unsigned int)v1320 <= 0x2F )
          {
            v1322 = v1315 + 32;
            v1323 = *(int ***)((char *)v2544 + v1320);
            v2542 = v1322;
            if ( (unsigned int)v1322 <= 0x2F )
            {
              v1324 = v1315 + 40;
              v1325 = *(__int64 **)((char *)v2544 + v1322);
              if ( (unsigned int)v1324 > 0x2F )
                v1326 = (unsigned int *)v2543;
              else
                v1326 = (unsigned int *)((char *)v2544 + v1324);
LABEL_1191:
              v1327 = *v1326;
              v1328 = sub_334A60();
              return (char *)(int)sub_157A70(v1317, v1328, v1319, v1321, v1323, v1325, a7, v1327);
            }
            v2199 = v2543;
LABEL_1996:
            v2200 = (__int64 **)v2199;
            v1326 = (unsigned int *)(v2199 + 8);
            v2543 = (char *)v1326;
            v1325 = *v2200;
            goto LABEL_1191;
          }
          v2197 = v2543;
LABEL_1995:
          v2198 = (int ***)v2197;
          v2199 = v2197 + 8;
          v2543 = v2199;
          v1323 = *v2198;
          goto LABEL_1996;
        }
        v2529 = v2543;
      }
      v2196 = (__int64 *)v2529;
      v2197 = v2529 + 8;
      v2543 = v2197;
      v1321 = *v2196;
      goto LABEL_1995;
    case 341LL:
      v773 = v2542 + 8;
      v774 = (__int64 *)((char *)v2544 + v773);
      if ( (unsigned int)v773 > 0x2F )
        v774 = (__int64 *)v2543;
      return (char *)(int)sub_11A700(*(_BYTE **)((char *)v2544 + v2542), *v774);
    case 342LL:
      v771 = v2542 + 8;
      v772 = (char *)v2544 + v771;
      if ( (unsigned int)v771 > 0x2F )
        v772 = v2543;
      return (char *)(int)sub_11B560(*(_BYTE **)((char *)v2544 + v2542), *(_QWORD **)v772);
    case 343LL:
      sub_1193A0(*(_QWORD *)((char *)v2544 + v2542));
      return nullptr;
    case 344LL:
      v763 = v2542;
      v764 = v2542 + 8;
      v2542 = v764;
      v765 = *(unsigned __int8 **)((char *)v2544 + v763);
      if ( (unsigned int)v764 > 0x2F )
      {
        v2227 = (unsigned int **)v2543;
        v768 = (unsigned int *)(v2543 + 8);
        v2543 += 8;
        v767 = *v2227;
      }
      else
      {
        v766 = v763 + 16;
        v767 = *(unsigned int **)((char *)v2544 + v764);
        if ( (unsigned int)v766 > 0x2F )
          v768 = (unsigned int *)v2543;
        else
          v768 = (unsigned int *)((char *)v2544 + v766);
      }
      v769 = *v768;
      v770 = sub_334A60();
      return (char *)(unsigned __int8)sub_121990(v765, v770, v767, v769);
    case 345LL:
      v1892 = v2542 + 8;
      v1893 = (__int64 *)((char *)v2544 + v1892);
      if ( (unsigned int)v1892 > 0x2F )
        v1893 = (__int64 *)v2543;
      return (char *)(int)sub_1197A0(*(_QWORD *)((char *)v2544 + v2542), *v1893);
    case 346LL:
      v1887 = v2542 + 8;
      v1888 = *(int **)((char *)v2544 + v2542);
      v1889 = (char *)v2544 + v1887;
      if ( (unsigned int)v1887 > 0x2F )
        v1889 = v2543;
      v1890 = *(_DWORD *)v1889;
      v1891 = sub_334A60();
      return (char *)(unsigned __int8)sub_118550(v1888, v1891, v1890);
    case 347LL:
      v1062 = v2542 + 8;
      v1063 = (const char **)((char *)v2544 + v1062);
      if ( (unsigned int)v1062 > 0x2F )
        v1063 = (const char **)v2543;
      return (char *)(unsigned __int8)sub_11C360(*(_QWORD *)((char *)v2544 + v2542), *v1063);
    case 348LL:
      v1060 = v2542 + 8;
      v1061 = (char *)v2544 + v1060;
      if ( (unsigned int)v1060 > 0x2F )
        v1061 = v2543;
      return sub_11C180(*(_BYTE **)((char *)v2544 + v2542), *(_DWORD *)v1061 != 0);
    case 349LL:
      v1567 = v2542 + 8;
      v1568 = *(_BYTE **)((char *)v2544 + v2542);
      v1569 = (char *)v2544 + v1567;
      if ( (unsigned int)v1567 > 0x2F )
        v1569 = v2543;
      v1570 = *(_DWORD *)v1569 != 0;
      v1571 = sub_334A60();
      return (char *)(unsigned __int8)sub_11C3A0(v1568, v1571, v1570, v1572, v1573, v1574);
    case 350LL:
      v1565 = v2542 + 8;
      v1566 = (int *)((char *)v2544 + v1565);
      if ( (unsigned int)v1565 > 0x2F )
        v1566 = (int *)v2543;
      return sub_11C0F0(*(_BYTE **)((char *)v2544 + v2542), *v1566);
    case 351LL:
      v397 = v2542;
      v398 = v2542 + 8;
      v2542 = v398;
      v399 = *(_QWORD *)((char *)v2544 + v397);
      if ( (unsigned int)v398 > 0x2F )
      {
        v2484 = v2543;
        v402 = (int *)(v2543 + 8);
        v2543 += 8;
        v401 = *(_QWORD **)v2484;
      }
      else
      {
        v400 = v397 + 16;
        v401 = *(_QWORD **)((char *)v2544 + v398);
        if ( (unsigned int)v400 > 0x2F )
          v402 = (int *)v2543;
        else
          v402 = (int *)((char *)v2544 + v400);
      }
      return (char *)sub_1186E0(v399, v401, *v402);
    case 352LL:
      v395 = v2542 + 8;
      v396 = (char *)v2544 + v395;
      if ( (unsigned int)v395 > 0x2F )
        v396 = v2543;
      return (char *)sub_1186A0(*(_QWORD *)((char *)v2544 + v2542), *(_QWORD **)v396);
    case 353LL:
      return (char *)(unsigned __int8)sub_11A6C0(*(unsigned int **)((char *)v2544 + v2542));
    case 354LL:
      v2040 = v2542;
      v2041 = v2542 + 8;
      v2542 = v2041;
      v2042 = *(_QWORD *)((char *)v2544 + v2040);
      if ( (unsigned int)v2041 > 0x2F )
      {
        v2168 = (__int64 *)v2543;
        v2045 = (__int64 *)(v2543 + 8);
        v2543 += 8;
        v2044 = *v2168;
      }
      else
      {
        v2043 = v2040 + 16;
        v2044 = *(_QWORD *)((char *)v2544 + v2041);
        if ( (unsigned int)v2043 > 0x2F )
          v2045 = (__int64 *)v2543;
        else
          v2045 = (__int64 *)((char *)v2544 + v2043);
      }
      return (char *)sub_11E040(v2042, v2044, *v2045);
    case 355LL:
      return (char *)(unsigned __int8)sub_11AA90(*(_BYTE **)((char *)v2544 + v2542));
    case 356LL:
      v1350 = v2542 + 8;
      v1351 = (__int64 *)((char *)v2544 + v1350);
      if ( (unsigned int)v1350 > 0x2F )
        v1351 = (__int64 *)v2543;
      return (char *)(int)sub_8CE20(*(unsigned __int8 **)((char *)v2544 + v2542), *v1351);
    case 357LL:
      v1775 = v2542;
      v1776 = v2542 + 8;
      v1777 = *(_QWORD *)((char *)v2544 + v2542);
      if ( (unsigned int)v1776 > 0x2F )
      {
        v2172 = (__int64 *)v2543;
        v2528 = v2543 + 8;
        v2543 += 8;
        v1779 = *v2172;
      }
      else
      {
        v1778 = v2542 + 16;
        v1779 = *(_QWORD *)((char *)v2544 + v1776);
        v2542 = v1778;
        if ( (unsigned int)v1778 <= 0x2F )
        {
          v1780 = v1775 + 24;
          v1781 = *(_QWORD *)((char *)v2544 + v1778);
          if ( (unsigned int)v1780 > 0x2F )
            v1782 = (int *)v2543;
          else
            v1782 = (int *)((char *)v2544 + v1780);
          return (char *)(unsigned __int8)sub_842C0(v1777, v1779, v1781, *v1782);
        }
        v2528 = v2543;
      }
      v2173 = (__int64 *)v2528;
      v1782 = (int *)(v2528 + 8);
      v2543 = (char *)v1782;
      v1781 = *v2173;
      return (char *)(unsigned __int8)sub_842C0(v1777, v1779, v1781, *v1782);
    case 358LL:
      return (char *)sub_11E7A0(*(_QWORD *)((char *)v2544 + v2542));
    case 359LL:
      return (char *)sub_11E7D0(*(_QWORD *)((char *)v2544 + v2542));
    case 360LL:
      sub_32BC90(*(_QWORD *)((char *)v2544 + v2542));
      return nullptr;
    case 361LL:
      v1914 = v2542 + 8;
      v1915 = (char *)v2544 + v1914;
      if ( (unsigned int)v1914 > 0x2F )
        v1915 = v2543;
      sub_1B15F0(*(_QWORD *)((char *)v2544 + v2542), *(void (****)(_QWORD, _QWORD, const char *, ...))v1915);
      return nullptr;
    case 362LL:
      sub_1B3DE0(*(_QWORD *)((char *)v2544 + v2542));
      return nullptr;
    case 363LL:
      v1141 = v2542;
      v1142 = v2542 + 8;
      v2542 = v1142;
      v1143 = *(_QWORD *)((char *)v2544 + v1141);
      if ( (unsigned int)v1142 > 0x2F )
      {
        v2477 = (const char **)v2543;
        v1146 = v2543 + 8;
        v2543 += 8;
        v1145 = *v2477;
      }
      else
      {
        v1144 = v1141 + 16;
        v1145 = *(const char **)((char *)v2544 + v1142);
        if ( (unsigned int)v1144 > 0x2F )
          v1146 = v2543;
        else
          v1146 = (char *)v2544 + v1144;
      }
      v1147 = *(const __m128i **)v1146;
      v2545 = _mm_loadu_si128((const __m128i *)*(_QWORD *)v1146);
      v2546 = v1147[1].m128i_i64[0];
      sub_1B3840(v1143, v1145);
      return nullptr;
    case 364LL:
      v1135 = v2542;
      v1136 = v2542 + 8;
      v2542 = v1136;
      v1137 = *(_QWORD *)((char *)v2544 + v1135);
      if ( (unsigned int)v1136 > 0x2F )
      {
        v2208 = v2543;
        v1140 = (__int64 *)(v2543 + 8);
        v2543 += 8;
        v1139 = *(_QWORD **)v2208;
      }
      else
      {
        v1138 = v1135 + 16;
        v1139 = *(_QWORD **)((char *)v2544 + v1136);
        if ( (unsigned int)v1138 > 0x2F )
          v1140 = (__int64 *)v2543;
        else
          v1140 = (__int64 *)((char *)v2544 + v1138);
      }
      return (char *)sub_9EF60(v1137, v1139, *v1140);
    case 365LL:
      v1614 = v2542 + 8;
      v1615 = (__int64 *)((char *)v2544 + v1614);
      if ( (unsigned int)v1614 > 0x2F )
        v1615 = (__int64 *)v2543;
      return (char *)sub_9F1C0(*(_QWORD *)((char *)v2544 + v2542), *v1615);
    case 366LL:
      v1612 = v2542 + 8;
      v1613 = (__int64 *)((char *)v2544 + v1612);
      if ( (unsigned int)v1612 > 0x2F )
        v1613 = (__int64 *)v2543;
      return (char *)(int)sub_11B630(*(const __m128i **)((char *)v2544 + v2542), *v1613);
    case 367LL:
      v2122 = v2542 + 8;
      v2123 = (__int64 *)((char *)v2544 + v2122);
      if ( (unsigned int)v2122 > 0x2F )
        v2123 = (__int64 *)v2543;
      return (char *)(int)sub_11B3B0(*(const __m128i **)((char *)v2544 + v2542), *v2123);
    case 368LL:
      v476 = v2542;
      v477 = v2542 + 8;
      v2542 = v477;
      v478 = *(_QWORD **)((char *)v2544 + v476);
      if ( (unsigned int)v477 > 0x2F )
      {
        v2472 = (__int64 **)v2543;
        v2473 = v2543 + 8;
        v2543 += 8;
        v480 = *v2472;
      }
      else
      {
        v479 = v476 + 16;
        v480 = *(__int64 **)((char *)v2544 + v477);
        if ( (unsigned int)v479 <= 0x2F )
        {
          v481 = v476 + 24;
          v482 = *(_QWORD *)((char *)v2544 + v479);
          v2542 = v481;
          if ( (unsigned int)v481 <= 0x2F )
          {
            v483 = v476 + 32;
            v484 = *(_QWORD *)((char *)v2544 + v481);
            if ( (unsigned int)v483 > 0x2F )
              v485 = (__int64 *)v2543;
            else
              v485 = (__int64 *)((char *)v2544 + v483);
            return (char *)(int)sub_125A50(v478, v480, v482, v484, *v485);
          }
          v2475 = (__int64 *)v2543;
LABEL_2121:
          v2476 = v2475;
          v485 = v2475 + 1;
          v2543 = (char *)v485;
          v484 = *v2476;
          return (char *)(int)sub_125A50(v478, v480, v482, v484, *v485);
        }
        v2473 = v2543;
      }
      v2474 = (__int64 *)v2473;
      v2475 = (__int64 *)(v2473 + 8);
      v2543 = (char *)v2475;
      v482 = *v2474;
      goto LABEL_2121;
    case 369LL:
      v1988 = v2542;
      v1989 = v2542 + 8;
      v2542 = v1989;
      v1990 = *(_QWORD *)((char *)v2544 + v1988);
      if ( (unsigned int)v1989 > 0x2F )
      {
        v2483 = v2543;
        v1993 = v2543 + 8;
        v2543 += 8;
        v1992 = *(_QWORD *)v2483;
      }
      else
      {
        v1991 = v1988 + 16;
        v1992 = *(_QWORD *)((char *)v2544 + v1989);
        if ( (unsigned int)v1991 > 0x2F )
          v1993 = v2543;
        else
          v1993 = (char *)v2544 + v1991;
      }
      return (char *)(int)sub_163610(v1990, v1992, *(unsigned int *)v1993);
    case 370LL:
      return (char *)(int)sub_B15E0(*(_QWORD *)((char *)v2544 + v2542), a2, a3, a4, a5, a6);
    case 371LL:
      v1237 = v2542 + 8;
      v1238 = (char *)v2544 + v1237;
      if ( (unsigned int)v1237 > 0x2F )
        v1238 = v2543;
      return (char *)(int)sub_A3390(
                            *(_QWORD *)((char *)v2544 + v2542),
                            *(_DWORD *)v1238 != 0,
                            *(unsigned int *)v1238,
                            v1237,
                            a5,
                            a6);
    case 372LL:
      return (char *)(int)sub_A4120(*(_QWORD *)((char *)v2544 + v2542));
    case 373LL:
      v2126 = v2542;
      v2127 = v2542 + 8;
      v2542 = v2127;
      *(_QWORD *)&v2128 = *(_QWORD *)((char *)v2544 + v2126);
      if ( (unsigned int)v2127 > 0x2F )
      {
        v2385 = v2543;
        v2512 = v2543 + 8;
        v2543 += 8;
        v2130 = *(_QWORD *)v2385;
      }
      else
      {
        v2129 = v2126 + 16;
        v2130 = *(_QWORD *)((char *)v2544 + v2127);
        if ( (unsigned int)v2129 <= 0x2F )
        {
          v2131 = v2126 + 24;
          *((_QWORD *)&v2128 + 1) = *(_QWORD *)((char *)v2544 + v2129);
          v2542 = v2131;
          if ( (unsigned int)v2131 <= 0x2F )
          {
            v2132 = v2126 + 32;
            v2133 = *(int *)((char *)v2544 + v2131);
            if ( (unsigned int)v2132 > 0x2F )
              v2134 = (unsigned int **)v2543;
            else
              v2134 = (unsigned int **)((char *)v2544 + v2132);
LABEL_1960:
            v2135 = *((_QWORD *)&v2128 + 1);
            *((_QWORD *)&v2128 + 1) = v2130;
            sub_11FCA0(v2128, v2135, v2133, **v2134);
            return nullptr;
          }
          v2387 = v2543;
LABEL_2089:
          v2388 = (unsigned int *)v2387;
          v2134 = (unsigned int **)(v2387 + 8);
          v2543 = (char *)v2134;
          v2133 = *v2388;
          goto LABEL_1960;
        }
        v2512 = v2543;
      }
      v2386 = v2512;
      v2387 = v2512 + 8;
      v2543 = v2387;
      *((_QWORD *)&v2128 + 1) = *(_QWORD *)v2386;
      goto LABEL_2089;
    case 374LL:
      v1688 = v2542;
      v1689 = v2542 + 8;
      v1690 = *(_QWORD *)((char *)v2544 + v2542);
      if ( (unsigned int)v1689 > 0x2F )
      {
        v2469 = (__int64 **)v2543;
        v2470 = v2543 + 8;
        v2543 += 8;
        v1692 = *v2469;
      }
      else
      {
        v1691 = v2542 + 16;
        v1692 = *(__int64 **)((char *)v2544 + v1689);
        v2542 = v1691;
        if ( (unsigned int)v1691 <= 0x2F )
        {
          v1693 = v1688 + 24;
          v1694 = *(_QWORD *)((char *)v2544 + v1691);
          if ( (unsigned int)v1693 > 0x2F )
            v1695 = (unsigned int *)v2543;
          else
            v1695 = (unsigned int *)((char *)v2544 + v1693);
LABEL_1540:
          sub_123DE0(v1690, v1692, v1694, *v1695);
          return nullptr;
        }
        v2470 = v2543;
      }
      v2471 = (__int64 *)v2470;
      v1695 = (unsigned int *)(v2470 + 8);
      v2543 = (char *)v1695;
      v1694 = *v2471;
      goto LABEL_1540;
    case 375LL:
      v659 = v2542;
      v660 = v2542 + 8;
      v2542 = v660;
      v661 = *(__int64 **)((char *)v2544 + v659);
      if ( (unsigned int)v660 > 0x2F )
      {
        v2228 = (__int64 *)v2543;
        v2516 = v2543 + 8;
        v2543 += 8;
        v663 = *v2228;
      }
      else
      {
        v662 = v659 + 16;
        v663 = *(_QWORD *)((char *)v2544 + v660);
        v2542 = v662;
        if ( (unsigned int)v662 <= 0x2F )
        {
          v664 = v659 + 24;
          v665 = *(_QWORD *)((char *)v2544 + v662);
          v2542 = v664;
          if ( (unsigned int)v664 <= 0x2F )
          {
            v666 = (unsigned int *)((char *)v2544 + v664);
            v2542 = v659 + 32;
            goto LABEL_567;
          }
          v666 = (unsigned int *)v2543;
LABEL_2010:
          v2543 = (char *)(v666 + 2);
LABEL_567:
          sub_120480((__int64)v2540, v663, v665, *v666);
          sub_606D0(v661, (__int64 *)v2540);
          v667 = *(_QWORD *)&v2540[16];
          v668 = _mm_loadu_si128((const __m128i *)&v2540[24]);
          memset(&v2540[16], 0, 24);
          if ( v661[2] )
          {
            v2535 = v668;
            v661[3] = 0;
            qfree();
            v668 = _mm_load_si128(&v2535);
          }
          v661[2] = v667;
          *(__m128i *)(v661 + 3) = v668;
          if ( *(_QWORD *)&v2540[16] )
          {
            *(_QWORD *)&v2540[24] = 0;
            qfree();
          }
LABEL_10:
          qfree();
          return nullptr;
        }
        v2516 = v2543;
      }
      v2229 = (__int64 *)v2516;
      v666 = (unsigned int *)(v2516 + 8);
      v2543 = (char *)v666;
      v665 = *v2229;
      goto LABEL_2010;
    case 376LL:
      v9 = v2542;
      v10 = v2542 + 8;
      v2542 = v10;
      v11 = *(__int64 **)((char *)v2544 + v9);
      if ( (unsigned int)v10 > 0x2F )
      {
        v2230 = (__int64 *)v2543;
        v2534 = v2543 + 8;
        v2543 += 8;
        v13 = *v2230;
      }
      else
      {
        v12 = v9 + 16;
        v13 = *(_QWORD *)((char *)v2544 + v10);
        v2542 = v12;
        if ( (unsigned int)v12 <= 0x2F )
        {
          v14 = v9 + 24;
          v15 = *(_QWORD *)((char *)v2544 + v12);
          v2542 = v14;
          if ( (unsigned int)v14 <= 0x2F )
          {
            v16 = (char *)v2544 + v14;
            v2542 = v9 + 32;
            goto LABEL_6;
          }
          v16 = v2543;
LABEL_2012:
          v2543 = v16 + 8;
LABEL_6:
          sub_123820((__int64)v2540, v13, v15, *(unsigned int *)v16);
          sub_606D0(v11, (__int64 *)v2540);
          v17 = *(_QWORD *)&v2540[16];
          v18 = _mm_loadu_si128((const __m128i *)&v2540[24]);
          memset(&v2540[16], 0, 24);
          if ( v11[2] )
          {
            v2535 = v18;
            v11[3] = 0;
            qfree();
            v18 = _mm_load_si128(&v2535);
          }
          v11[2] = v17;
          *(__m128i *)(v11 + 3) = v18;
          if ( *(_QWORD *)&v2540[16] )
          {
            *(_QWORD *)&v2540[24] = 0;
            qfree();
          }
          goto LABEL_10;
        }
        v2534 = v2543;
      }
      v2231 = (__int64 *)v2534;
      v16 = v2534 + 8;
      v2543 = v16;
      v15 = *v2231;
      goto LABEL_2012;
    case 377LL:
      v1845 = v2542;
      v1846 = v2542 + 8;
      v2542 = v1846;
      v1847 = *(_QWORD *)((char *)v2544 + v1845);
      if ( (unsigned int)v1846 > 0x2F )
      {
        v2478 = (__int64 **)v2543;
        v2479 = v2543 + 8;
        v2543 += 8;
        v1849 = *v2478;
      }
      else
      {
        v1848 = v1845 + 16;
        v1849 = *(__int64 **)((char *)v2544 + v1846);
        if ( (unsigned int)v1848 <= 0x2F )
        {
          v1850 = v1845 + 24;
          v1851 = *(_QWORD *)((char *)v2544 + v1848);
          v2542 = v1850;
          if ( (unsigned int)v1850 <= 0x2F )
          {
            v1852 = v1845 + 32;
            v1853 = *(_QWORD *)((char *)v2544 + v1850);
            if ( (unsigned int)v1852 > 0x2F )
              v1854 = (unsigned int *)v2543;
            else
              v1854 = (unsigned int *)((char *)v2544 + v1852);
            return (char *)sub_A5B90(v1847, v1849, v1851, v1853, *v1854);
          }
          v2481 = v2543;
LABEL_2123:
          v2482 = (__int64 *)v2481;
          v1854 = (unsigned int *)(v2481 + 8);
          v2543 = (char *)v1854;
          v1853 = *v2482;
          return (char *)sub_A5B90(v1847, v1849, v1851, v1853, *v1854);
        }
        v2479 = v2543;
      }
      v2480 = (__int64 *)v2479;
      v2481 = v2479 + 8;
      v2543 = v2481;
      v1851 = *v2480;
      goto LABEL_2123;
    case 378LL:
      v1835 = v2542;
      v1836 = v2542 + 8;
      v2542 = v1836;
      v1837 = *(_QWORD *)((char *)v2544 + v1835);
      if ( (unsigned int)v1836 > 0x2F )
      {
        v2222 = v2543;
        v2532 = v2543 + 8;
        v2543 += 8;
        v1839 = *(_QWORD **)v2222;
      }
      else
      {
        v1838 = v1835 + 16;
        v1839 = *(_QWORD **)((char *)v2544 + v1836);
        if ( (unsigned int)v1838 <= 0x2F )
        {
          v1840 = v1835 + 24;
          v1841 = *(_QWORD *)((char *)v2544 + v1838);
          v2542 = v1840;
          if ( (unsigned int)v1840 <= 0x2F )
          {
            v1842 = v1835 + 32;
            v1843 = *(_QWORD *)((char *)v2544 + v1840);
            if ( (unsigned int)v1842 > 0x2F )
              v1844 = (unsigned int *)v2543;
            else
              v1844 = (unsigned int *)((char *)v2544 + v1842);
            return (char *)sub_A58A0(v1837, v1839, v1841, v1843, *v1844);
          }
          v2224 = v2543;
LABEL_2005:
          v2225 = (__int64 *)v2224;
          v1844 = (unsigned int *)(v2224 + 8);
          v2543 = (char *)v1844;
          v1843 = *v2225;
          return (char *)sub_A58A0(v1837, v1839, v1841, v1843, *v1844);
        }
        v2532 = v2543;
      }
      v2223 = (__int64 *)v2532;
      v2224 = v2532 + 8;
      v2543 = v2224;
      v1841 = *v2223;
      goto LABEL_2005;
    case 379LL:
      v2144 = v2542;
      v2145 = v2542 + 8;
      v2146 = *(_QWORD *)((char *)v2544 + v2542);
      if ( (unsigned int)v2145 > 0x2F )
      {
        v2394 = (__int64 *)v2543;
        v2395 = v2543 + 8;
        v2543 += 8;
        v2148 = *v2394;
      }
      else
      {
        v2147 = v2542 + 16;
        v2148 = *(_QWORD *)((char *)v2544 + v2145);
        v2542 = v2147;
        if ( (unsigned int)v2147 <= 0x2F )
        {
          v2149 = v2144 + 24;
          v2150 = *(_QWORD *)((char *)v2544 + v2147);
          if ( (unsigned int)v2149 > 0x2F )
            v2151 = (__int64 *)v2543;
          else
            v2151 = (__int64 *)((char *)v2544 + v2149);
          return (char *)(unsigned __int8)sub_A59E0(v2146, v2148, v2150, *v2151);
        }
        v2395 = v2543;
      }
      v2396 = (__int64 *)v2395;
      v2151 = (__int64 *)(v2395 + 8);
      v2543 = (char *)v2151;
      v2150 = *v2396;
      return (char *)(unsigned __int8)sub_A59E0(v2146, v2148, v2150, *v2151);
    case 380LL:
      v1000 = v2542;
      v1001 = v2542 + 8;
      v2542 = v1001;
      *(_QWORD *)&v1002 = *(_QWORD *)((char *)v2544 + v1000);
      if ( (unsigned int)v1001 > 0x2F )
      {
        v2462 = v2543;
        v2463 = v2543 + 8;
        v2543 += 8;
        v1004 = *(_QWORD *)v2462;
      }
      else
      {
        v1003 = v1000 + 16;
        v1004 = *(_QWORD *)((char *)v2544 + v1001);
        if ( (unsigned int)v1003 <= 0x2F )
        {
          v1005 = v1000 + 24;
          *((_QWORD *)&v1002 + 1) = *(_QWORD *)((char *)v2544 + v1003);
          v2542 = v1005;
          if ( (unsigned int)v1005 <= 0x2F )
          {
            v1006 = v1000 + 32;
            v1007 = *(_QWORD *)((char *)v2544 + v1005);
            if ( (unsigned int)v1006 > 0x2F )
              v1008 = v2543;
            else
              v1008 = (char *)v2544 + v1006;
LABEL_890:
            v1009 = *((__int64 **)&v1002 + 1);
            *((_QWORD *)&v1002 + 1) = v1004;
            return (char *)sub_1263C0(v1002, v1009, v1007, *(_DWORD *)v1008);
          }
          v2465 = v2543;
LABEL_2117:
          v2466 = (__int64 *)v2465;
          v1008 = v2465 + 8;
          v2543 = v1008;
          v1007 = *v2466;
          goto LABEL_890;
        }
        v2463 = v2543;
      }
      v2464 = v2463;
      v2465 = v2463 + 8;
      v2543 = v2465;
      *((_QWORD *)&v1002 + 1) = *(_QWORD *)v2464;
      goto LABEL_2117;
    case 381LL:
      v1503 = v2542;
      v1504 = v2542 + 8;
      v1505 = *(_QWORD **)((char *)v2544 + v2542);
      if ( (unsigned int)v1504 > 0x2F )
      {
        v2467 = (__m128i **)v2543;
        v2509 = v2543 + 8;
        v2543 += 8;
        v1507 = *v2467;
      }
      else
      {
        v1506 = v2542 + 16;
        v1507 = *(__m128i **)((char *)v2544 + v1504);
        v2542 = v1506;
        if ( (unsigned int)v1506 <= 0x2F )
        {
          v1508 = v1503 + 24;
          v1509 = *(__int64 **)((char *)v2544 + v1506);
          if ( (unsigned int)v1508 > 0x2F )
            v1510 = (unsigned int *)v2543;
          else
            v1510 = (unsigned int *)((char *)v2544 + v1508);
          return (char *)(unsigned __int8)sub_1E6860(v1505, v1507, v1509, *v1510);
        }
        v2509 = v2543;
      }
      v2468 = (__int64 **)v2509;
      v1510 = (unsigned int *)(v2509 + 8);
      v2543 = (char *)v1510;
      v1509 = *v2468;
      return (char *)(unsigned __int8)sub_1E6860(v1505, v1507, v1509, *v1510);
    case 382LL:
      v1493 = v2542;
      v1494 = v2542 + 8;
      v2542 = v1494;
      v1495 = *(_QWORD **)((char *)v2544 + v1493);
      if ( (unsigned int)v1494 > 0x2F )
      {
        v2180 = (__m128i **)v2543;
        v2181 = v2543 + 8;
        v2543 += 8;
        v1497 = *v2180;
      }
      else
      {
        v1496 = v1493 + 16;
        v1497 = *(__m128i **)((char *)v2544 + v1494);
        if ( (unsigned int)v1496 <= 0x2F )
        {
          v1498 = v1493 + 24;
          v1499 = *(__int64 **)((char *)v2544 + v1496);
          v2542 = v1498;
          if ( (unsigned int)v1498 <= 0x2F )
          {
            v1500 = v1493 + 32;
            v1501 = *(_QWORD *)((char *)v2544 + v1498);
            if ( (unsigned int)v1500 > 0x2F )
              v1502 = (unsigned int *)v2543;
            else
              v1502 = (unsigned int *)((char *)v2544 + v1500);
            return (char *)(unsigned __int8)sub_1E6590(v1495, v1497, v1499, v1501, *v1502);
          }
          v2183 = v2543;
LABEL_1988:
          v2184 = (__int64 *)v2183;
          v1502 = (unsigned int *)(v2183 + 8);
          v2543 = (char *)v1502;
          v1501 = *v2184;
          return (char *)(unsigned __int8)sub_1E6590(v1495, v1497, v1499, v1501, *v1502);
        }
        v2181 = v2543;
      }
      v2182 = (__int64 **)v2181;
      v2183 = v2181 + 8;
      v2543 = v2183;
      v1499 = *v2182;
      goto LABEL_1988;
    case 383LL:
      return (char *)sub_32BD80(*(_QWORD *)((char *)v2544 + v2542));
    case 384LL:
      v376 = v2542 + 8;
      v377 = (unsigned __int64 *)((char *)v2544 + v376);
      if ( (unsigned int)v376 > 0x2F )
        v377 = (unsigned __int64 *)v2543;
      return (char *)(unsigned __int8)sub_32D8E0(*(_QWORD *)((char *)v2544 + v2542), *v377);
    case 385LL:
      v938 = v2542;
      v939 = v2542 + 8;
      v2542 = v939;
      v940 = *(__int64 **)((char *)v2544 + v938);
      if ( (unsigned int)v939 > 0x2F )
      {
        v2425 = v2543;
        v943 = (__int64 *)(v2543 + 8);
        v2543 += 8;
        v942 = *(_QWORD **)v2425;
      }
      else
      {
        v941 = v938 + 16;
        v942 = *(_QWORD **)((char *)v2544 + v939);
        if ( (unsigned int)v941 > 0x2F )
          v943 = (__int64 *)v2543;
        else
          v943 = (__int64 *)((char *)v2544 + v941);
      }
      *v940 = sub_1CB990(v942, *v943);
      return nullptr;
    case 386LL:
      v925 = v2542;
      v926 = v2542 + 8;
      v2542 = v926;
      v927 = *(__int64 **)((char *)v2544 + v925);
      if ( (unsigned int)v926 > 0x2F )
      {
        v2266 = (__int64 *)v2543;
        v930 = (__int64 *)(v2543 + 8);
        v2543 += 8;
        v929 = *v2266;
      }
      else
      {
        v928 = v925 + 16;
        v929 = *(_QWORD *)((char *)v2544 + v926);
        if ( (unsigned int)v928 > 0x2F )
          v930 = (__int64 *)v2543;
        else
          v930 = (__int64 *)((char *)v2544 + v928);
      }
      *v927 = sub_1CBA10(v929, *v930);
      return nullptr;
    case 387LL:
      v931 = v2542;
      v932 = v2542 + 8;
      v2542 = v932;
      if ( (unsigned int)v932 > 0x2F )
      {
        v2256 = (__int64 *)v2543;
        v2257 = v2543 + 8;
        v2543 += 8;
        v934 = *v2256;
      }
      else
      {
        v933 = v931 + 16;
        v934 = *(_QWORD *)((char *)v2544 + v932);
        v2542 = v933;
        if ( (unsigned int)v933 <= 0x2F )
        {
          v935 = v931 + 24;
          v936 = *(int *)((char *)v2544 + v933);
          v2542 = v935;
          if ( (unsigned int)v935 <= 0x2F )
          {
            v937 = (__int64 *)((char *)v2544 + v935);
            v2542 = v931 + 32;
            goto LABEL_820;
          }
          v937 = (__int64 *)v2543;
LABEL_2023:
          v2543 = (char *)(v937 + 1);
LABEL_820:
          sub_1C1BF0((__int64)v2540, v934, v936, *v937);
          copy_argloc();
          cleanup_argloc();
          return nullptr;
        }
        v2257 = v2543;
      }
      v2258 = (int *)v2257;
      v937 = (__int64 *)(v2257 + 8);
      v2543 = (char *)v937;
      v936 = *v2258;
      goto LABEL_2023;
    case 388LL:
      v918 = v2542;
      v919 = v2542 + 8;
      v2542 = v919;
      if ( (unsigned int)v919 > 0x2F )
      {
        v2263 = (__int64 *)v2543;
        v2264 = v2543 + 8;
        v2543 += 8;
        v921 = *v2263;
      }
      else
      {
        v920 = v918 + 16;
        v921 = *(_QWORD *)((char *)v2544 + v919);
        v2542 = v920;
        if ( (unsigned int)v920 <= 0x2F )
        {
          v922 = v918 + 24;
          v923 = *(_QWORD *)((char *)v2544 + v920);
          v2542 = v922;
          if ( (unsigned int)v922 <= 0x2F )
          {
            v924 = (int *)((char *)v2544 + v922);
            v2542 = v918 + 32;
            goto LABEL_811;
          }
          v924 = (int *)v2543;
LABEL_2027:
          v2543 = (char *)(v924 + 2);
LABEL_811:
          sub_1C1C50((__int64)v2540, v921, v923, *v924);
          copy_argloc();
          cleanup_argloc();
          return nullptr;
        }
        v2264 = v2543;
      }
      v2265 = (__int64 *)v2264;
      v924 = (int *)(v2264 + 8);
      v2543 = (char *)v924;
      v923 = *v2265;
      goto LABEL_2027;
    case 389LL:
      v911 = v2542;
      v912 = v2542 + 8;
      v2542 = v912;
      if ( (unsigned int)v912 > 0x2F )
      {
        v2254 = (__int64 *)v2543;
        v2527 = v2543 + 8;
        v2543 += 8;
        v914 = *v2254;
      }
      else
      {
        v913 = v911 + 16;
        v914 = *(_QWORD *)((char *)v2544 + v912);
        v2542 = v913;
        if ( (unsigned int)v913 <= 0x2F )
        {
          v915 = v911 + 24;
          v916 = *(int *)((char *)v2544 + v913);
          v2542 = v915;
          if ( (unsigned int)v915 <= 0x2F )
          {
            v917 = (__int64 *)((char *)v2544 + v915);
            v2542 = v911 + 32;
            goto LABEL_806;
          }
          v917 = (__int64 *)v2543;
LABEL_2021:
          v2543 = (char *)(v917 + 1);
LABEL_806:
          sub_1C3320(v2540, v914, v916, *v917);
          copy_argloc();
          cleanup_argloc();
          return nullptr;
        }
        v2527 = v2543;
      }
      v2255 = (signed int *)v2527;
      v917 = (__int64 *)(v2527 + 8);
      v2543 = (char *)v917;
      v916 = *v2255;
      goto LABEL_2021;
    case 390LL:
      v904 = v2542;
      v905 = v2542 + 8;
      v2542 = v905;
      if ( (unsigned int)v905 > 0x2F )
      {
        v2259 = (__int64 *)v2543;
        v2260 = v2543 + 8;
        v2543 += 8;
        v907 = *v2259;
      }
      else
      {
        v906 = v904 + 16;
        v907 = *(_QWORD *)((char *)v2544 + v905);
        v2542 = v906;
        if ( (unsigned int)v906 <= 0x2F )
        {
          v908 = v904 + 24;
          v909 = *(_QWORD *)((char *)v2544 + v906);
          v2542 = v908;
          if ( (unsigned int)v908 <= 0x2F )
          {
            v910 = (int *)((char *)v2544 + v908);
            v2542 = v904 + 32;
            goto LABEL_801;
          }
          v910 = (signed int *)v2543;
LABEL_2025:
          v2543 = (char *)(v910 + 2);
LABEL_801:
          sub_1C3380(v2540, v907, v909, *v910);
          copy_argloc();
          cleanup_argloc();
          return nullptr;
        }
        v2260 = v2543;
      }
      v2261 = (__int64 *)v2260;
      v910 = (signed int *)(v2260 + 8);
      v2543 = (char *)v910;
      v909 = *v2261;
      goto LABEL_2025;
    case 391LL:
      sub_3333B0(*(_QWORD **)((char *)v2544 + v2542));
      return nullptr;
    case 392LL:
      return (char *)sub_1CA620(*(_QWORD *)((char *)v2544 + v2542));
    case 393LL:
      v1822 = v2542 + 8;
      v1823 = (int *)((char *)v2544 + v1822);
      if ( (unsigned int)v1822 > 0x2F )
        v1823 = (int *)v2543;
      return (char *)(int)sub_32BEC0(*(_QWORD *)((char *)v2544 + v2542), *v1823, v2542, v1822, a5, a6);
    case 394LL:
      v1656 = v2542 + 8;
      v1657 = (unsigned int *)((char *)v2544 + v1656);
      if ( (unsigned int)v1656 > 0x2F )
        v1657 = (unsigned int *)v2543;
      return (char *)(int)sub_1401F0(*(_QWORD *)((char *)v2544 + v2542), *v1657, v2542, v1656, a5, a6);
    case 395LL:
      return (char *)(int)sub_138180(*(_QWORD *)((char *)v2544 + v2542), a2);
    case 396LL:
      return (char *)sub_62EE0(*(_QWORD **)((char *)v2544 + v2542));
    case 397LL:
      v1216 = v2542 + 8;
      v1217 = (char *)v2544 + v1216;
      if ( (unsigned int)v1216 > 0x2F )
        v1217 = v2543;
      return (char *)(int)sub_F62C0(*(_QWORD *)((char *)v2544 + v2542), *(unsigned int *)v1217, v2542);
    case 398LL:
      return (char *)(int)sub_1476B0(*(_QWORD *)((char *)v2544 + v2542), a2);
    case 399LL:
      sub_1F64B0(*(_QWORD *)((char *)v2544 + v2542));
      return nullptr;
    case 400LL:
      sub_1B3830(*(_QWORD *)((char *)v2544 + v2542));
      return nullptr;
    case 401LL:
      v1736 = v2542;
      v1737 = v2542 + 8;
      v1738 = *(_QWORD *)((char *)v2544 + v2542);
      if ( (unsigned int)v1737 > 0x2F )
      {
        v2219 = v2543;
        v2220 = v2543 + 8;
        v2543 += 8;
        v1740 = *(_DWORD *)v2219 != 0;
      }
      else
      {
        v1739 = *(int *)((char *)v2544 + v1737) == 0;
        v2542 += 16;
        v1740 = !v1739;
        if ( v1736 + 16 <= 0x2F )
        {
          v1741 = v1736 + 24;
          if ( (unsigned int)v1741 > 0x2F )
            v1742 = v2543;
          else
            v1742 = (char *)v2544 + v1741;
LABEL_1582:
          v1743 = *(const __m128i **)v1742;
          v2545 = _mm_loadu_si128((const __m128i *)*(_QWORD *)v1742);
          v2546 = v1743[1].m128i_i64[0];
          sub_1B35F0(v1738, v1740);
          return nullptr;
        }
        v2220 = v2543;
      }
      v1742 = v2220 + 8;
      v2543 = v1742;
      goto LABEL_1582;
    case 402LL:
      v1734 = v2542 + 8;
      v1735 = (char *)v2544 + v1734;
      if ( (unsigned int)v1734 > 0x2F )
        v1735 = v2543;
      sub_1AB200(*(_QWORD *)((char *)v2544 + v2542), *(void (****)(_QWORD, _QWORD, const char *, ...))v1735);
      return nullptr;
    case 403LL:
      v1744 = v2542 + 8;
      v1745 = (char *)v2544 + v1744;
      if ( (unsigned int)v1744 > 0x2F )
        v1745 = v2543;
      sub_31D150(*(_QWORD *)((char *)v2544 + v2542), *(_DWORD *)v1745 != 0, *(double *)a7.m128i_i64, a8);
      return nullptr;
    case 404LL:
      v1331 = (char *)v2544 + v2542;
      v2542 += 8;
      v1332 = *(_QWORD *)(*(_QWORD *)v1331 + 784LL);
      if ( v1332 )
        *(_DWORD *)(v1332 + 48) = 63;
      return nullptr;
    case 405LL:
      v1967 = v2542 + 8;
      v1968 = (int *)((char *)v2544 + v1967);
      if ( (unsigned int)v1967 > 0x2F )
        v1968 = (int *)v2543;
      return (char *)sub_64DC0(*(_QWORD *)((char *)v2544 + v2542), *v1968);
    case 406LL:
      v1732 = v2542 + 8;
      v1733 = (__int64 *)((char *)v2544 + v1732);
      if ( (unsigned int)v1732 > 0x2F )
        v1733 = (__int64 *)v2543;
      return (char *)(unsigned __int8)sub_65CC0(*(_QWORD *)((char *)v2544 + v2542), *v1733);
    case 407LL:
      v781 = v2542;
      v782 = v2542 + 8;
      v783 = *(_QWORD *)((char *)v2544 + v2542);
      if ( (unsigned int)v782 > 0x2F )
      {
        v2422 = v2543;
        v2423 = v2543 + 8;
        v2543 += 8;
        v785 = *(_QWORD *)v2422;
      }
      else
      {
        v784 = v2542 + 16;
        v785 = *(_QWORD *)((char *)v2544 + v782);
        v2542 = v784;
        if ( (unsigned int)v784 <= 0x2F )
        {
          v786 = v781 + 24;
          v787 = *(int *)((char *)v2544 + v784);
          if ( (unsigned int)v786 > 0x2F )
            v788 = v2543;
          else
            v788 = (char *)v2544 + v786;
          return (char *)sub_65110(v783, v785, v787, *(unsigned int *)v788);
        }
        v2423 = v2543;
      }
      v2424 = v2423;
      v788 = v2423 + 8;
      v2543 = v788;
      v787 = *(_DWORD *)v2424;
      return (char *)sub_65110(v783, v785, v787, *(unsigned int *)v788);
    case 408LL:
      return (char *)(unsigned __int8)sub_65D70(*(_QWORD *)((char *)v2544 + v2542));
    case 409LL:
      return (char *)(unsigned __int8)sub_66300(*(_QWORD *)((char *)v2544 + v2542));
    case 410LL:
      v1897 = v2542 + 8;
      v1898 = (__int64 *)((char *)v2544 + v1897);
      if ( (unsigned int)v1897 > 0x2F )
        v1898 = (__int64 *)v2543;
      return (char *)(int)sub_11B9B0(*(_QWORD *)((char *)v2544 + v2542), *v1898);
    case 411LL:
      v2023 = v2542 + 8;
      v2024 = (__int64 *)((char *)v2544 + v2023);
      if ( (unsigned int)v2023 > 0x2F )
        v2024 = (__int64 *)v2543;
      return (char *)(int)sub_11BA20(*(_QWORD *)((char *)v2544 + v2542), *v2024);
    case 412LL:
      v1070 = v2542 + 8;
      v1071 = (__int64 **)((char *)v2544 + v1070);
      if ( (unsigned int)v1070 > 0x2F )
        v1071 = (__int64 **)v2543;
      return (char *)(int)sub_11B7E0(*(_QWORD *)((char *)v2544 + v2542), *v1071);
    case 413LL:
      v424 = v2542;
      v425 = v2542 + 8;
      v2542 = v425;
      v426 = *(_QWORD *)((char *)v2544 + v424);
      if ( (unsigned int)v425 > 0x2F )
      {
        v2213 = (__int64 *)v2543;
        v2533 = v2543 + 8;
        v2543 += 8;
        v428 = *v2213;
      }
      else
      {
        v427 = v424 + 16;
        v428 = *(_QWORD *)((char *)v2544 + v425);
        if ( (unsigned int)v427 <= 0x2F )
        {
          v429 = v424 + 24;
          v430 = *(_QWORD *)((char *)v2544 + v427);
          v2542 = v429;
          if ( (unsigned int)v429 <= 0x2F )
          {
            v431 = v424 + 32;
            v432 = *(int *)((char *)v2544 + v429) != 0;
            if ( (unsigned int)v431 > 0x2F )
              v433 = (__int64 *)v2543;
            else
              v433 = (__int64 *)((char *)v2544 + v431);
            return (char *)sub_11BA90(v426, v428, v430, v432, *v433);
          }
          v2215 = v2543;
LABEL_2002:
          v2216 = v2215;
          v433 = (__int64 *)(v2215 + 8);
          v1739 = *(_DWORD *)v2216 == 0;
          v2543 = (char *)v433;
          v432 = !v1739;
          return (char *)sub_11BA90(v426, v428, v430, v432, *v433);
        }
        v2533 = v2543;
      }
      v2214 = (__int64 *)v2533;
      v2215 = v2533 + 8;
      v2543 = v2215;
      v430 = *v2214;
      goto LABEL_2002;
    case 414LL:
      v412 = v2542;
      v413 = v2542 + 8;
      v414 = *(_QWORD *)((char *)v2544 + v2542);
      if ( (unsigned int)v413 > 0x2F )
      {
        v2338 = (__int64 *)v2543;
        v2339 = v2543 + 8;
        v2543 += 8;
        v416 = *v2338;
      }
      else
      {
        v415 = v2542 + 16;
        v416 = *(_QWORD *)((char *)v2544 + v413);
        v2542 = v415;
        if ( (unsigned int)v415 <= 0x2F )
        {
          v417 = v412 + 24;
          v418 = *(_QWORD *)((char *)v2544 + v415);
          if ( (unsigned int)v417 <= 0x2F )
          {
            v419 = v412 + 32;
            v420 = *(_QWORD *)((char *)v2544 + v417);
            v2542 = v419;
            if ( (unsigned int)v419 <= 0x2F )
            {
              v421 = v412 + 40;
              v422 = *(_QWORD *)((char *)v2544 + v419);
              if ( (unsigned int)v421 > 0x2F )
                v423 = (__int64 *)v2543;
              else
                v423 = (__int64 *)((char *)v2544 + v421);
              return (char *)sub_330F30(v414, v416, v418, v420, v422, *v423);
            }
            v2343 = (__int64 *)v2543;
LABEL_2061:
            v2344 = v2343;
            v423 = v2343 + 1;
            v2543 = (char *)v423;
            v422 = *v2344;
            return (char *)sub_330F30(v414, v416, v418, v420, v422, *v423);
          }
          v2341 = (__int64 *)v2543;
LABEL_2060:
          v2342 = v2341;
          v2343 = v2341 + 1;
          v2543 = (char *)v2343;
          v420 = *v2342;
          goto LABEL_2061;
        }
        v2339 = v2543;
      }
      v2340 = (__int64 *)v2339;
      v2341 = (__int64 *)(v2339 + 8);
      v2543 = (char *)v2341;
      v418 = *v2340;
      goto LABEL_2060;
    case 415LL:
      v1580 = v2542;
      v1581 = v2542 + 8;
      v1582 = *(_QWORD *)((char *)v2544 + v2542);
      if ( (unsigned int)v1581 > 0x2F )
      {
        v2416 = (__int64 *)v2543;
        v2511 = v2543 + 8;
        v2543 += 8;
        v1584 = *v2416;
      }
      else
      {
        v1583 = v2542 + 16;
        v1584 = *(_QWORD *)((char *)v2544 + v1581);
        v2542 = v1583;
        if ( (unsigned int)v1583 <= 0x2F )
        {
          v1585 = v1580 + 24;
          v1586 = *(__int64 **)((char *)v2544 + v1583);
          if ( (unsigned int)v1585 <= 0x2F )
          {
            v1587 = v1580 + 32;
            v1588 = *(_QWORD *)((char *)v2544 + v1585);
            v2542 = v1587;
            if ( (unsigned int)v1587 <= 0x2F )
            {
              v1589 = v1580 + 40;
              v1590 = *(_QWORD *)((char *)v2544 + v1587);
              if ( (unsigned int)v1589 > 0x2F )
                v1591 = v2543;
              else
                v1591 = (char *)v2544 + v1589;
LABEL_1427:
              sub_134EC0(v1582, v1584, v1586, v1588, v1590, *(_DWORD *)v1591 != 0);
              return nullptr;
            }
            v2420 = v2543;
LABEL_2102:
            v2421 = (__int64 *)v2420;
            v1591 = v2420 + 8;
            v2543 = v1591;
            v1590 = *v2421;
            goto LABEL_1427;
          }
          v2418 = (__int64 *)v2543;
LABEL_2101:
          v2419 = v2418;
          v2420 = (char *)(v2418 + 1);
          v2543 = v2420;
          v1588 = *v2419;
          goto LABEL_2102;
        }
        v2511 = v2543;
      }
      v2417 = (__int64 **)v2511;
      v2418 = (__int64 *)(v2511 + 8);
      v2543 = (char *)v2418;
      v1586 = *v2417;
      goto LABEL_2101;
    case 416LL:
      v410 = v2542 + 8;
      v411 = (int *)((char *)v2544 + v410);
      if ( (unsigned int)v410 > 0x2F )
        v411 = (int *)v2543;
      return (char *)sub_139080(*(_QWORD **)((char *)v2544 + v2542), *v411);
    case 417LL:
      v1935 = v2542;
      v1936 = v2542 + 8;
      v2542 = v1936;
      v1937 = *(__int64 **)((char *)v2544 + v1935);
      if ( (unsigned int)v1936 > 0x2F )
      {
        v2427 = v2543;
        v1940 = (__int64 *)(v2543 + 8);
        v2543 += 8;
        v1939 = *(_QWORD **)v2427;
      }
      else
      {
        v1938 = v1935 + 16;
        v1939 = *(_QWORD **)((char *)v2544 + v1936);
        if ( (unsigned int)v1938 > 0x2F )
          v1940 = (__int64 *)v2543;
        else
          v1940 = (__int64 *)((char *)v2544 + v1938);
      }
      *v1937 = sub_32DA70(v1939, *v1940);
      return nullptr;
    case 418LL:
      v1787 = v2542;
      v1788 = v2542 + 8;
      v2542 = v1788;
      v1789 = *(unsigned __int64 **)((char *)v2544 + v1787);
      if ( (unsigned int)v1788 > 0x2F )
      {
        v2175 = v2543;
        v1792 = (unsigned __int64 *)(v2543 + 8);
        v2543 += 8;
        v1791 = *(_QWORD **)v2175;
      }
      else
      {
        v1790 = v1787 + 16;
        v1791 = *(_QWORD **)((char *)v2544 + v1788);
        if ( (unsigned int)v1790 > 0x2F )
          v1792 = (unsigned __int64 *)v2543;
        else
          v1792 = (unsigned __int64 *)((char *)v2544 + v1790);
      }
      *v1789 = sub_32BF20(v1791, *v1792);
      return nullptr;
    case 419LL:
      v1359 = v2542 + 8;
      v1360 = (__int64 **)((char *)v2544 + v1359);
      if ( (unsigned int)v1359 > 0x2F )
        v1360 = (__int64 **)v2543;
      sub_8E790(*(_QWORD *)((char *)v2544 + v2542), *v1360);
      return nullptr;
    case 420LL:
      v1357 = v2542 + 8;
      v1358 = (__int64 *)((char *)v2544 + v1357);
      if ( (unsigned int)v1357 > 0x2F )
        v1358 = (__int64 *)v2543;
      return (char *)sub_8ADD0(*(_QWORD *)((char *)v2544 + v2542), *v1358);
    case 421LL:
      v2051 = v2542 + 8;
      v2052 = (const char **)((char *)v2544 + v2051);
      if ( (unsigned int)v2051 > 0x2F )
        v2052 = (const char **)v2543;
      sub_8E840(*(_QWORD *)((char *)v2544 + v2542), *v2052);
      return nullptr;
    case 422LL:
      v1616 = v2542;
      v1617 = v2542 + 8;
      v2542 = v1617;
      v1618 = *(_QWORD **)((char *)v2544 + v1616);
      if ( (unsigned int)v1617 > 0x2F )
      {
        v2426 = (__int64 *)v2543;
        v1621 = v2543 + 8;
        v2543 += 8;
        v1620 = *v2426;
      }
      else
      {
        v1619 = v1616 + 16;
        v1620 = *(_QWORD *)((char *)v2544 + v1617);
        if ( (unsigned int)v1619 > 0x2F )
          v1621 = v2543;
        else
          v1621 = (char *)v2544 + v1619;
      }
      return (char *)(int)sub_133F40(v1618, v1620, *(_DWORD *)v1621 != 0);
    case 423LL:
      v1929 = v2542;
      v1930 = v2542 + 8;
      v2542 = v1930;
      v1931 = *(_QWORD *)((char *)v2544 + v1929);
      if ( (unsigned int)v1930 > 0x2F )
      {
        v2174 = (int *)v2543;
        v1934 = (__int64 *)(v2543 + 8);
        v2543 += 8;
        v1933 = *v2174;
      }
      else
      {
        v1932 = v1929 + 16;
        v1933 = *(int *)((char *)v2544 + v1930);
        if ( (unsigned int)v1932 > 0x2F )
          v1934 = (__int64 *)v2543;
        else
          v1934 = (__int64 *)((char *)v2544 + v1932);
      }
      sub_133DB0(v1931, v1933, *v1934);
      return nullptr;
    case 424LL:
      v840 = v2542;
      v841 = v2542 + 8;
      v842 = *(_QWORD *)((char *)v2544 + v2542);
      if ( (unsigned int)v841 > 0x2F )
      {
        v2407 = (__int64 *)v2543;
        v2408 = v2543 + 8;
        v2543 += 8;
        v844 = *v2407;
      }
      else
      {
        v843 = v2542 + 16;
        v844 = *(_QWORD *)((char *)v2544 + v841);
        v2542 = v843;
        if ( (unsigned int)v843 <= 0x2F )
        {
          v845 = v840 + 24;
          v846 = *(int *)((char *)v2544 + v843);
          if ( (unsigned int)v845 <= 0x2F )
          {
            v847 = v840 + 32;
            v848 = *(unsigned __int64 ***)((char *)v2544 + v845);
            v2542 = v847;
            if ( (unsigned int)v847 <= 0x2F )
            {
              v849 = v840 + 40;
              v850 = *(int *)((char *)v2544 + v847);
              if ( (unsigned int)v849 > 0x2F )
                v851 = v2543;
              else
                v851 = (char *)v2544 + v849;
              return (char *)(int)sub_1D6860(v842, v844, v846, v848, v850, *(_DWORD *)v851);
            }
            v2412 = (int *)v2543;
LABEL_2099:
            v2413 = v2412;
            v851 = (char *)(v2412 + 2);
            v2543 = v851;
            v850 = *v2413;
            return (char *)(int)sub_1D6860(v842, v844, v846, v848, v850, *(_DWORD *)v851);
          }
          v2410 = v2543;
LABEL_2098:
          v2411 = (unsigned __int64 ***)v2410;
          v2412 = (int *)(v2410 + 8);
          v2543 = (char *)v2412;
          v848 = *v2411;
          goto LABEL_2099;
        }
        v2408 = v2543;
      }
      v2409 = (signed int *)v2408;
      v2410 = v2408 + 8;
      v2543 = v2410;
      v846 = *v2409;
      goto LABEL_2098;
    case 425LL:
      v538 = v2542 + 8;
      v539 = (unsigned __int64 *)((char *)v2544 + v538);
      if ( (unsigned int)v538 > 0x2F )
        v539 = (unsigned __int64 *)v2543;
      return (char *)sub_1CB780(*(_QWORD *)((char *)v2544 + v2542), *v539);
    case 426LL:
      v530 = v2542;
      v531 = v2542 + 8;
      v532 = *(_QWORD **)((char *)v2544 + v2542);
      if ( (unsigned int)v531 > 0x2F )
      {
        v2250 = (__int64 *)v2543;
        v2251 = v2543 + 8;
        v2543 += 8;
        v534 = *v2250;
      }
      else
      {
        v533 = v2542 + 16;
        v534 = *(_QWORD *)((char *)v2544 + v531);
        v2542 = v533;
        if ( (unsigned int)v533 <= 0x2F )
        {
          v535 = v530 + 24;
          v536 = *(const char **)((char *)v2544 + v533);
          if ( (unsigned int)v535 > 0x2F )
            v537 = (int *)v2543;
          else
            v537 = (int *)((char *)v2544 + v535);
          return (char *)(unsigned __int8)sub_20F4D0(v532, v534, v536, *v537);
        }
        v2251 = v2543;
      }
      v2252 = (const char **)v2251;
      v537 = (int *)(v2251 + 8);
      v2543 = (char *)v537;
      v536 = *v2252;
      return (char *)(unsigned __int8)sub_20F4D0(v532, v534, v536, *v537);
    case 427LL:
      v540 = v2542;
      v541 = v2542 + 8;
      v542 = *(__int64 **)((char *)v2544 + v2542);
      if ( (unsigned int)v541 > 0x2F )
      {
        v2398 = (__int64 *)v2543;
        v2399 = v2543 + 8;
        v2543 += 8;
        v544 = *v2398;
      }
      else
      {
        v543 = v2542 + 16;
        v544 = *(_QWORD *)((char *)v2544 + v541);
        v2542 = v543;
        if ( (unsigned int)v543 <= 0x2F )
        {
          v545 = v540 + 24;
          v546 = *(int *)((char *)v2544 + v543);
          if ( (unsigned int)v545 <= 0x2F )
          {
            v547 = v540 + 32;
            v548 = *(int *)((char *)v2544 + v545);
            v2542 = v547;
            if ( (unsigned int)v547 <= 0x2F )
            {
              v549 = v540 + 40;
              v550 = *(_QWORD *)((char *)v2544 + v547);
              if ( (unsigned int)v549 <= 0x2F )
              {
                v551 = *(_QWORD *)((char *)v2544 + v549);
                v552 = v2543;
                goto LABEL_482;
              }
              v2405 = (__int64 *)v2543;
LABEL_2096:
              v2406 = v2405;
              v552 = (char *)(v2405 + 1);
              v2543 = v552;
              v551 = *v2406;
LABEL_482:
              v2543 = v552 + 8;
              return (char *)sub_1782E0(v542, v544, v546, v548, v550, v551, *v552, *((_DWORD *)v552 + 2));
            }
            v2403 = (__int64 *)v2543;
LABEL_2095:
            v2404 = v2403;
            v2405 = v2403 + 1;
            v2543 = (char *)v2405;
            v550 = *v2404;
            goto LABEL_2096;
          }
          v2401 = (unsigned int *)v2543;
LABEL_2094:
          v2402 = v2401;
          v2403 = (__int64 *)(v2401 + 2);
          v2543 = (char *)v2403;
          v548 = *v2402;
          goto LABEL_2095;
        }
        v2399 = v2543;
      }
      v2400 = (int *)v2399;
      v2401 = (unsigned int *)(v2399 + 8);
      v2543 = (char *)v2401;
      v546 = *v2400;
      goto LABEL_2094;
    case 428LL:
      v528 = v2542 + 8;
      v529 = (int *)((char *)v2544 + v528);
      if ( (unsigned int)v528 > 0x2F )
        v529 = (int *)v2543;
      return (char *)sub_10C140(*(_QWORD *)((char *)v2544 + v2542), *v529);
    case 429LL:
      v1163 = v2542 + 8;
      v1164 = (int *)((char *)v2544 + v1163);
      if ( (unsigned int)v1163 > 0x2F )
        v1164 = (int *)v2543;
      return (char *)sub_10C6E0(*(_QWORD *)((char *)v2544 + v2542), *v1164);
    case 430LL:
      v1161 = v2542 + 8;
      v1162 = (__int64 *)((char *)v2544 + v1161);
      if ( (unsigned int)v1161 > 0x2F )
        v1162 = (__int64 *)v2543;
      return (char *)(int)sub_1D1950(*(_QWORD **)((char *)v2544 + v2542), *v1162);
    case 431LL:
      sub_1D3760(*(_QWORD *)((char *)v2544 + v2542));
      return nullptr;
    case 432LL:
      v515 = v2542;
      v516 = v2542 + 8;
      v2542 = v516;
      v517 = *(_QWORD *)((char *)v2544 + v515);
      if ( (unsigned int)v516 > 0x2F )
      {
        v2363 = (unsigned int *)v2543;
        v2364 = v2543 + 8;
        v2543 += 8;
        v519 = *v2363;
      }
      else
      {
        v518 = v515 + 16;
        v519 = *(int *)((char *)v2544 + v516);
        if ( (unsigned int)v518 <= 0x2F )
        {
          v520 = v515 + 24;
          v521 = *(int *)((char *)v2544 + v518);
          v2542 = v520;
          if ( (unsigned int)v520 <= 0x2F )
          {
            v522 = v515 + 32;
            v523 = *(_QWORD *)((char *)v2544 + v520);
            if ( (unsigned int)v522 <= 0x2F )
            {
              v524 = v515 + 40;
              v525 = *(_QWORD *)((char *)v2544 + v522);
              v2542 = v524;
              if ( (unsigned int)v524 <= 0x2F )
              {
                v526 = *(_QWORD *)((char *)v2544 + v524);
                v527 = (int *)v2543;
                return (char *)sub_1D1F50(v517, v519, v521, v523, v525, v526, *v527);
              }
              v2370 = v2543;
LABEL_2082:
              v2371 = (__int64 *)v2370;
              v527 = (int *)(v2370 + 8);
              v2543 = (char *)v527;
              v526 = *v2371;
              return (char *)sub_1D1F50(v517, v519, v521, v523, v525, v526, *v527);
            }
            v2368 = (__int64 *)v2543;
LABEL_2081:
            v2369 = v2368;
            v2370 = (char *)(v2368 + 1);
            v2543 = v2370;
            v525 = *v2369;
            goto LABEL_2082;
          }
          v2366 = (__int64 *)v2543;
LABEL_2080:
          v2367 = v2366;
          v2368 = v2366 + 1;
          v2543 = (char *)v2368;
          v523 = *v2367;
          goto LABEL_2081;
        }
        v2364 = v2543;
      }
      v2365 = (int *)v2364;
      v2366 = (__int64 *)(v2364 + 8);
      v2543 = (char *)v2366;
      v521 = *v2365;
      goto LABEL_2080;
    case 433LL:
      v2098 = v2542;
      v2099 = v2542 + 8;
      v2542 = v2099;
      v2100 = *(_QWORD *)((char *)v2544 + v2098);
      if ( (unsigned int)v2099 > 0x2F )
      {
        v2487 = (int *)v2543;
        v2488 = v2543 + 8;
        v2543 += 8;
        v2102 = *v2487;
      }
      else
      {
        v2101 = v2098 + 16;
        v2102 = *(int *)((char *)v2544 + v2099);
        if ( (unsigned int)v2101 <= 0x2F )
        {
          v2103 = v2098 + 24;
          v2104 = *(unsigned __int8 **)((char *)v2544 + v2101);
          v2542 = v2103;
          if ( (unsigned int)v2103 <= 0x2F )
          {
            v2105 = v2098 + 32;
            v2106 = *(unsigned __int8 **)((char *)v2544 + v2103);
            if ( (unsigned int)v2105 > 0x2F )
              v2107 = (unsigned __int8 **)v2543;
            else
              v2107 = (unsigned __int8 **)((char *)v2544 + v2105);
            return (char *)sub_1D2090(v2100, v2102, v2104, v2106, *v2107);
          }
          v2490 = (unsigned __int8 **)v2543;
LABEL_2125:
          v2491 = v2490;
          v2107 = v2490 + 1;
          v2543 = (char *)v2107;
          v2106 = *v2491;
          return (char *)sub_1D2090(v2100, v2102, v2104, v2106, *v2107);
        }
        v2488 = v2543;
      }
      v2489 = (unsigned __int8 **)v2488;
      v2490 = (unsigned __int8 **)(v2488 + 8);
      v2543 = (char *)v2490;
      v2104 = *v2489;
      goto LABEL_2125;
    case 434LL:
      return (char *)(unsigned __int8)sub_338F00(*(_QWORD *)((char *)v2544 + v2542));
    case 435LL:
      return sub_339020();
    case 436LL:
      v1245 = v2542 + 8;
      v1246 = (char *)v2544 + v1245;
      if ( (unsigned int)v1245 > 0x2F )
        v1246 = v2543;
      return (char *)sub_396120(*(_QWORD *)((char *)v2544 + v2542), *(unsigned int *)v1246);
    case 437LL:
      return (char *)(unsigned __int8)sub_384EE0(*(_QWORD *)((char *)v2544 + v2542));
    case 438LL:
      return (char *)sub_384E80(*(_QWORD *)((char *)v2544 + v2542));
    case 439LL:
      v2092 = v2542;
      v2093 = v2542 + 8;
      v2542 = v2093;
      v2094 = *(_QWORD *)((char *)v2544 + v2092);
      if ( (unsigned int)v2093 > 0x2F )
      {
        v2169 = v2543;
        v2097 = v2543 + 8;
        v2543 += 8;
        v2096 = *(_QWORD *)v2169;
      }
      else
      {
        v2095 = v2092 + 16;
        v2096 = *(_QWORD *)((char *)v2544 + v2093);
        if ( (unsigned int)v2095 > 0x2F )
          v2097 = v2543;
        else
          v2097 = (char *)v2544 + v2095;
      }
      return (char *)(unsigned __int8)sub_3648C0(v2094, v2096, *(unsigned int *)v2097);
    case 440LL:
      v683 = v2542;
      v684 = v2542 + 8;
      v2542 = v684;
      v685 = *(_QWORD **)((char *)v2544 + v683);
      if ( (unsigned int)v684 > 0x2F )
      {
        v687 = (__int64 *)v2543;
        v686 = (__int64)(v2543 + 8);
        v2543 += 8;
      }
      else
      {
        v686 = v683 + 16;
        v687 = (__int64 *)((char *)v2544 + v684);
        v2542 = v686;
      }
      sub_32C090((__int64)v2540, *v687, v686);
      v688 = *(_QWORD *)v2540;
      v689 = _mm_loadu_si128((const __m128i *)&v2540[8]);
      memset(v2540, 0, 24);
      if ( *v685 )
      {
        v2535 = v689;
        v685[1] = 0;
        qfree();
        v689 = _mm_load_si128(&v2535);
      }
      *v685 = v688;
      *(__m128i *)(v685 + 1) = v689;
      if ( *(_QWORD *)v2540 )
        goto LABEL_67;
      return nullptr;
    case 441LL:
      v1865 = v2542 + 8;
      v1866 = *(_QWORD *)((char *)v2544 + v2542);
      v1867 = (char *)v2544 + v1865;
      if ( (unsigned int)v1865 > 0x2F )
        v1867 = v2543;
      v1868 = *(_DWORD *)v1867 != 0;
      v1869 = sub_334A60();
      sub_37E550(v1869, v1866, v1868);
      return nullptr;
    case 442LL:
      v1528 = v2542;
      v1529 = v2542 + 8;
      v2542 = v1529;
      v1530 = *(_QWORD *)((char *)v2544 + v1528);
      if ( (unsigned int)v1529 > 0x2F )
      {
        v2415 = (__int64 **)v2543;
        v1533 = (__int64 *)(v2543 + 8);
        v2543 += 8;
        v1532 = *v2415;
      }
      else
      {
        v1531 = v1528 + 16;
        v1532 = *(__int64 **)((char *)v2544 + v1529);
        if ( (unsigned int)v1531 > 0x2F )
          v1533 = (__int64 *)v2543;
        else
          v1533 = (__int64 *)((char *)v2544 + v1531);
      }
      return (char *)(unsigned __int8)sub_32CC90(v1530, v1532, *v1533);
    case 443LL:
      return (char *)(unsigned __int8)sub_32C640(*(_QWORD *)((char *)v2544 + v2542), a2, a3, a4, a5, a6);
    case 444LL:
      nullsub_183();
      return nullptr;
    case 445LL:
      return (char *)(unsigned int)sub_2503F0(*(int *)((char *)v2544 + v2542));
    case 446LL:
      return (char *)(unsigned int)sub_250410(*(int *)((char *)v2544 + v2542));
    case 447LL:
      return (char *)(int)sub_250780(*(int *)((char *)v2544 + v2542));
    case 448LL:
      return (char *)(unsigned int)sub_240710(*(int *)((char *)v2544 + v2542));
    case 449LL:
      return (char *)(unsigned int)sub_240750(*(int *)((char *)v2544 + v2542));
    case 450LL:
      v1875 = v2542;
      v1876 = v2542 + 8;
      v2542 = v1876;
      v1877 = *(__int64 **)((char *)v2544 + v1875);
      if ( (unsigned int)v1876 > 0x2F )
      {
        v2436 = (__int64 **)v2543;
        v2507 = v2543 + 8;
        v2543 += 8;
        v1879 = *v2436;
      }
      else
      {
        v1878 = v1875 + 16;
        v1879 = *(__int64 **)((char *)v2544 + v1876);
        if ( (unsigned int)v1878 <= 0x2F )
        {
          v1880 = v1875 + 24;
          v1881 = *(_QWORD *)((char *)v2544 + v1878);
          v2542 = v1880;
          if ( (unsigned int)v1880 <= 0x2F )
          {
            v1882 = v1875 + 32;
            v1883 = *(_QWORD *)((char *)v2544 + v1880);
            if ( (unsigned int)v1882 > 0x2F )
              v1884 = v2543;
            else
              v1884 = (char *)v2544 + v1882;
LABEL_1711:
            sub_2619F0(v1877, v1879, v1881, v1883, *(_BYTE **)v1884);
            return nullptr;
          }
          v2438 = v2543;
LABEL_2108:
          v2439 = (__int64 *)v2438;
          v1884 = v2438 + 8;
          v2543 = v1884;
          v1883 = *v2439;
          goto LABEL_1711;
        }
        v2507 = v2543;
      }
      v2437 = (__int64 *)v2507;
      v2438 = v2507 + 8;
      v2543 = v2438;
      v1881 = *v2437;
      goto LABEL_2108;
    case 451LL:
      v1393 = v2542;
      v1394 = v2542 + 8;
      v2542 = v1394;
      v1395 = *(__int64 **)((char *)v2544 + v1393);
      if ( (unsigned int)v1394 > 0x2F )
      {
        v2508 = (__int64 **)v2543;
        v2543 += 8;
        v1396 = *v2508;
      }
      else
      {
        v1396 = *(__int64 **)((char *)v2544 + v1394);
      }
      *v1395 = sub_2511B0(v1396);
      return nullptr;
    case 452LL:
      v1383 = v2542;
      v1384 = v2542 + 8;
      v1385 = *(_QWORD *)((char *)v2544 + v2542);
      if ( (unsigned int)v1384 > 0x2F )
      {
        v2191 = (__int64 *)v2543;
        v2192 = v2543 + 8;
        v2543 += 8;
        v1387 = *v2191;
      }
      else
      {
        v1386 = v2542 + 16;
        v1387 = *(_QWORD *)((char *)v2544 + v1384);
        v2542 = v1386;
        if ( (unsigned int)v1386 <= 0x2F )
        {
          v1388 = v1383 + 24;
          v1389 = *(int *)((char *)v2544 + v1386);
          if ( (unsigned int)v1388 > 0x2F )
            v1390 = (int *)v2543;
          else
            v1390 = (int *)((char *)v2544 + v1388);
LABEL_1262:
          v1391 = *v1390;
          v1392 = sub_334A60();
          sub_23B830(v1385, v1392, v1387, v1389, v1391);
          return nullptr;
        }
        v2192 = v2543;
      }
      v2193 = (unsigned int *)v2192;
      v1390 = (int *)(v2192 + 8);
      v2543 = (char *)v1390;
      v1389 = *v2193;
      goto LABEL_1262;
    case 453LL:
      v1958 = v2542 + 8;
      v1959 = (char *)v2544 + v1958;
      if ( (unsigned int)v1958 > 0x2F )
        v1959 = v2543;
      return (char *)(int)sub_252130(*(_QWORD **)((char *)v2544 + v2542), *(_QWORD **)v1959);
    case 454LL:
      v1805 = v2542 + 8;
      v1806 = (__int64 *)((char *)v2544 + v1805);
      if ( (unsigned int)v1805 > 0x2F )
        v1806 = (__int64 *)v2543;
      return (char *)(int)sub_252100(*(_QWORD *)((char *)v2544 + v2542), *v1806);
    case 455LL:
      v1952 = v2542;
      v1953 = v2542 + 8;
      v2542 = v1953;
      v1954 = *(__int64 **)((char *)v2544 + v1952);
      if ( (unsigned int)v1953 > 0x2F )
      {
        v2176 = (__int64 *)v2543;
        v1957 = (__int64 *)(v2543 + 8);
        v2543 += 8;
        v1956 = *v2176;
      }
      else
      {
        v1955 = v1952 + 16;
        v1956 = *(_QWORD *)((char *)v2544 + v1953);
        if ( (unsigned int)v1955 > 0x2F )
          v1957 = (__int64 *)v2543;
        else
          v1957 = (__int64 *)((char *)v2544 + v1955);
      }
      return (char *)(int)sub_251200(v1954, v1956, *v1957);
    case 456LL:
      v872 = v2542;
      v873 = v2542 + 8;
      v2542 = v873;
      v874 = *(_QWORD *)((char *)v2544 + v872);
      if ( (unsigned int)v873 > 0x2F )
      {
        v2440 = (__int64 *)v2543;
        v877 = (__int64 *)(v2543 + 8);
        v2543 += 8;
        v876 = *v2440;
      }
      else
      {
        v875 = v872 + 16;
        v876 = *(_QWORD *)((char *)v2544 + v873);
        if ( (unsigned int)v875 > 0x2F )
          v877 = (__int64 *)v2543;
        else
          v877 = (__int64 *)((char *)v2544 + v875);
      }
      return (char *)(int)sub_251B10(v874, v876, *v877);
    case 457LL:
      v640 = *(_QWORD *)((char *)v2544 + v2542);
      v641 = sub_334A60();
      return (char *)(unsigned __int8)sub_27F280(v640, v641);
    case 458LL:
      v634 = v2542;
      v635 = v2542 + 8;
      v2542 = v635;
      v636 = *(_QWORD **)((char *)v2544 + v634);
      if ( (unsigned int)v635 > 0x2F )
      {
        v2232 = v2543;
        v639 = (__int64 *)(v2543 + 8);
        v2543 += 8;
        v638 = *(_QWORD *)v2232;
      }
      else
      {
        v637 = v634 + 16;
        v638 = *(_QWORD *)((char *)v2544 + v635);
        if ( (unsigned int)v637 > 0x2F )
          v639 = (__int64 *)v2543;
        else
          v639 = (__int64 *)((char *)v2544 + v637);
      }
      return (char *)(unsigned __int8)sub_280080(v636, v638, *v639);
    case 459LL:
      v632 = v2542 + 8;
      v633 = (__int64 *)((char *)v2544 + v632);
      if ( (unsigned int)v632 > 0x2F )
        v633 = (__int64 *)v2543;
      return (char *)(int)sub_2533F0(*(_QWORD *)((char *)v2544 + v2542), *v633);
    case 460LL:
      v630 = v2542 + 8;
      v631 = (__int64 *)((char *)v2544 + v630);
      if ( (unsigned int)v630 > 0x2F )
        v631 = (__int64 *)v2543;
      return (char *)(unsigned __int8)sub_280810(*(_QWORD *)((char *)v2544 + v2542), *v631);
    case 461LL:
      return (char *)(unsigned __int8)sub_2809B0(*(_QWORD *)((char *)v2544 + v2542));
    case 462LL:
      v1184 = v2542 + 8;
      v1185 = (__int64 *)((char *)v2544 + v1184);
      if ( (unsigned int)v1184 > 0x2F )
        v1185 = (__int64 *)v2543;
      return (char *)sub_2524F0(*(_QWORD *)((char *)v2544 + v2542), *v1185);
    case 463LL:
      v1641 = v2542 + 8;
      v1642 = (__int64 *)((char *)v2544 + v1641);
      if ( (unsigned int)v1641 > 0x2F )
        v1642 = (__int64 *)v2543;
      return (char *)sub_2525E0(*(_QWORD *)((char *)v2544 + v2542), *v1642);
    case 464LL:
      v628 = v2542 + 8;
      v629 = (__int64 *)((char *)v2544 + v628);
      if ( (unsigned int)v628 > 0x2F )
        v629 = (__int64 *)v2543;
      return (char *)sub_256770(*(_QWORD *)((char *)v2544 + v2542), *v629);
    case 465LL:
      v2120 = v2542 + 8;
      v2121 = (__int64 *)((char *)v2544 + v2120);
      if ( (unsigned int)v2120 > 0x2F )
        v2121 = (__int64 *)v2543;
      return (char *)sub_255220(*(_QWORD *)((char *)v2544 + v2542), *v2121);
    case 466LL:
      v1908 = v2542 + 8;
      v1909 = (__int64 *)((char *)v2544 + v1908);
      if ( (unsigned int)v1908 > 0x2F )
        v1909 = (__int64 *)v2543;
      sub_250FD0(*(__int64 **)((char *)v2544 + v2542), *v1909);
      return nullptr;
    case 467LL:
      sub_250DB0(*(_QWORD *)((char *)v2544 + v2542));
      return nullptr;
    case 468LL:
      v1295 = v2542;
      v1296 = v2542 + 8;
      v2542 = v1296;
      v1297 = *(_QWORD *)((char *)v2544 + v1295);
      if ( (unsigned int)v1296 > 0x2F )
      {
        v2431 = (__int64 *)v2543;
        v2432 = v2543 + 8;
        v2543 += 8;
        v1299 = *v2431;
      }
      else
      {
        v1298 = v1295 + 16;
        v1299 = *(_QWORD *)((char *)v2544 + v1296);
        if ( (unsigned int)v1298 <= 0x2F )
        {
          v1300 = v1295 + 24;
          v1301 = *(_QWORD *)((char *)v2544 + v1298);
          v2542 = v1300;
          if ( (unsigned int)v1300 <= 0x2F )
          {
            v1302 = v1295 + 32;
            v1303 = *(int *)((char *)v2544 + v1300);
            if ( (unsigned int)v1302 > 0x2F )
              v1304 = (unsigned int *)v2543;
            else
              v1304 = (unsigned int *)((char *)v2544 + v1302);
LABEL_1174:
            sub_23C310(v1297, v1299, v1301, v1303, *v1304);
            return nullptr;
          }
          v2434 = (unsigned int *)v2543;
LABEL_2106:
          v2435 = v2434;
          v1304 = v2434 + 2;
          v2543 = (char *)v1304;
          v1303 = *v2435;
          goto LABEL_1174;
        }
        v2432 = v2543;
      }
      v2433 = (__int64 *)v2432;
      v2434 = (unsigned int *)(v2432 + 8);
      v2543 = (char *)v2434;
      v1301 = *v2433;
      goto LABEL_2106;
    case 469LL:
      v2032 = v2542;
      v2033 = v2542 + 8;
      v2542 = v2033;
      v2034 = *(_QWORD *)((char *)v2544 + v2032);
      if ( (unsigned int)v2033 > 0x2F )
      {
        v2441 = (__int64 *)v2543;
        v2037 = (__int64 *)(v2543 + 8);
        v2543 += 8;
        v2036 = *v2441;
      }
      else
      {
        v2035 = v2032 + 16;
        v2036 = *(_QWORD *)((char *)v2544 + v2033);
        if ( (unsigned int)v2035 > 0x2F )
          v2037 = (__int64 *)v2543;
        else
          v2037 = (__int64 *)((char *)v2544 + v2035);
      }
      sub_263760(v2034, v2036, *v2037);
      return nullptr;
    case 470LL:
      v1708 = v2542 + 8;
      v1709 = *(_QWORD *)((char *)v2544 + v2542);
      v1710 = (char *)v2544 + v1708;
      if ( (unsigned int)v1708 > 0x2F )
        v1710 = v2543;
      v1711 = *(_DWORD *)v1710 != 0;
      v1712 = sub_334A60();
      sub_23F940(v1709, v1712, v1711);
      return nullptr;
    case 471LL:
      v755 = v2542 + 8;
      v756 = (__int64 *)((char *)v2544 + v755);
      if ( (unsigned int)v755 > 0x2F )
        v756 = (__int64 *)v2543;
      return (char *)(unsigned __int8)sub_255230(*(_QWORD *)((char *)v2544 + v2542), *v756);
    case 472LL:
      v753 = v2542 + 8;
      v754 = (__int64 *)((char *)v2544 + v753);
      if ( (unsigned int)v753 > 0x2F )
        v754 = (__int64 *)v2543;
      return (char *)sub_251BD0(*(_QWORD *)((char *)v2544 + v2542), *v754);
    case 473LL:
      v2067 = v2542;
      v2068 = v2542 + 8;
      v2542 = v2068;
      v2069 = *(_QWORD *)((char *)v2544 + v2067);
      if ( (unsigned int)v2068 > 0x2F )
      {
        v2485 = (int *)v2543;
        v2072 = (int *)(v2543 + 8);
        v2543 += 8;
        v2071 = *v2485;
      }
      else
      {
        v2070 = v2067 + 16;
        v2071 = *(int *)((char *)v2544 + v2068);
        if ( (unsigned int)v2070 > 0x2F )
          v2072 = (int *)v2543;
        else
          v2072 = (int *)((char *)v2544 + v2070);
      }
      return (char *)(unsigned __int8)sub_2808E0(v2069, v2071, *v2072);
    case 474LL:
      v1828 = v2542 + 8;
      v1829 = *(_DWORD **)((char *)v2544 + v2542);
      v1830 = (__int64 *)((char *)v2544 + v1828);
      if ( (unsigned int)v1828 > 0x2F )
        v1830 = (__int64 *)v2543;
      v1831 = *v1830;
      v1832 = sub_334A60();
      *v1829 = sub_2810F0(v1831, v1832);
      return nullptr;
    case 475LL:
      return (char *)(int)sub_280E80(*(_QWORD *)((char *)v2544 + v2542));
    case 476LL:
      v1056 = v2542 + 8;
      v1057 = (__int64 *)((char *)v2544 + v1056);
      if ( (unsigned int)v1056 > 0x2F )
        v1057 = (__int64 *)v2543;
      return (char *)(unsigned __int8)sub_240790(*(_QWORD *)((char *)v2544 + v2542), *v1057);
    case 477LL:
      return (char *)(unsigned __int8)sub_251D10(*(_QWORD *)((char *)v2544 + v2542));
    case 478LL:
      v1557 = (__int64 *)((char *)v2544 + v2542);
      v2542 += 8;
      v1558 = *v1557;
      v1559 = sub_334A60();
      LOBYTE(result) = 1;
      if ( *(_DWORD *)(v1558 + 8) == 61 )
      {
        v2501 = sub_2511B0(*(__int64 **)(v1558 + 24));
        LOBYTE(result) = 0;
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1559 + 96) + 24LL) + 16LL) >= v2501 )
          LOBYTE(result) = is_mapped();
      }
      return (char *)(unsigned __int8)result;
    case 479LL:
      return (char *)sub_1AA6F0(*(_QWORD *)((char *)v2544 + v2542));
    case 480LL:
      v389 = v2542 + 8;
      v390 = (__int64 *)((char *)v2544 + v389);
      if ( (unsigned int)v389 > 0x2F )
        v390 = (__int64 *)v2543;
      return (char *)sub_256C50(*(_QWORD *)((char *)v2544 + v2542), *v390);
    case 481LL:
      v830 = v2542 + 8;
      v831 = (__int64 *)((char *)v2544 + v830);
      if ( (unsigned int)v830 > 0x2F )
        v831 = (__int64 *)v2543;
      return (char *)sub_255EF0(*(_QWORD *)((char *)v2544 + v2542), *v831);
    case 482LL:
      v828 = v2542 + 8;
      v829 = (__int64 *)((char *)v2544 + v828);
      if ( (unsigned int)v828 > 0x2F )
        v829 = (__int64 *)v2543;
      return (char *)sub_256D30(*(_QWORD *)((char *)v2544 + v2542), *v829);
    case 483LL:
      v822 = v2542 + 8;
      v823 = (__int64 *)((char *)v2544 + v822);
      if ( (unsigned int)v822 > 0x2F )
        v823 = (__int64 *)v2543;
      return (char *)sub_255AA0(*(_QWORD *)((char *)v2544 + v2542), *v823);
    case 484LL:
      v820 = v2542 + 8;
      v821 = (__int64 *)((char *)v2544 + v820);
      if ( (unsigned int)v820 > 0x2F )
        v821 = (__int64 *)v2543;
      return (char *)sub_255EB0(*(_QWORD *)((char *)v2544 + v2542), *v821);
    case 485LL:
      v826 = v2542 + 8;
      v827 = (__int64 *)((char *)v2544 + v826);
      if ( (unsigned int)v826 > 0x2F )
        v827 = (__int64 *)v2543;
      return (char *)sub_255E70(*(_QWORD *)((char *)v2544 + v2542), *v827);
    case 486LL:
      v824 = v2542 + 8;
      v825 = (__int64 *)((char *)v2544 + v824);
      if ( (unsigned int)v824 > 0x2F )
        v825 = (__int64 *)v2543;
      return (char *)sub_255990(*(_QWORD *)((char *)v2544 + v2542), *v825);
    case 487LL:
      v818 = v2542 + 8;
      v819 = (__int64 *)((char *)v2544 + v818);
      if ( (unsigned int)v818 > 0x2F )
        v819 = (__int64 *)v2543;
      return (char *)sub_255A90(*(_QWORD *)((char *)v2544 + v2542), *v819);
    case 488LL:
      v816 = v2542 + 8;
      v817 = (char *)v2544 + v816;
      if ( (unsigned int)v816 > 0x2F )
        v817 = v2543;
      return (char *)(int)sub_252150(*(_DWORD **)((char *)v2544 + v2542), *(_DWORD **)v817);
    case 489LL:
      v1680 = v2542 + 8;
      v1681 = (unsigned __int64 ***)((char *)v2544 + v1680);
      if ( (unsigned int)v1680 > 0x2F )
        v1681 = (unsigned __int64 ***)v2543;
      return (char *)(int)sub_252170(*(unsigned __int64 ***)((char *)v2544 + v2542), *v1681);
    case 490LL:
      v1478 = v2542 + 8;
      v1479 = (__int64 *)((char *)v2544 + v1478);
      if ( (unsigned int)v1478 > 0x2F )
        v1479 = (__int64 *)v2543;
      return (char *)sub_2561F0(*(_QWORD *)((char *)v2544 + v2542), *v1479);
    case 491LL:
      v1480 = v2542 + 8;
      v1481 = (__int64 *)((char *)v2544 + v1480);
      if ( (unsigned int)v1480 > 0x2F )
        v1481 = (__int64 *)v2543;
      return (char *)(int)sub_254E20(*(_QWORD *)((char *)v2544 + v2542), *v1481);
    case 492LL:
      v1129 = v2542 + 8;
      v1130 = (__int64 *)((char *)v2544 + v1129);
      if ( (unsigned int)v1129 > 0x2F )
        v1130 = (__int64 *)v2543;
      sub_250D00(*(__int64 **)((char *)v2544 + v2542), *v1130);
      return nullptr;
    case 493LL:
      sub_2507D0(*(_QWORD *)((char *)v2544 + v2542));
      return nullptr;
    case 494LL:
      v1346 = v2542 + 8;
      v1347 = (__int64 *)((char *)v2544 + v1346);
      if ( (unsigned int)v1346 > 0x2F )
        v1347 = (__int64 *)v2543;
      return (char *)sub_23CB40(*(_QWORD *)((char *)v2544 + v2542), *v1347);
    case 495LL:
      v1606 = v2542 + 8;
      v1607 = (__int64 *)((char *)v2544 + v1606);
      if ( (unsigned int)v1606 > 0x2F )
        v1607 = (__int64 *)v2543;
      return (char *)sub_23D0A0(*(_QWORD *)((char *)v2544 + v2542), *v1607);
    case 496LL:
      v457 = v2542;
      v458 = v2542 + 8;
      v459 = *(_QWORD *)((char *)v2544 + v2542);
      if ( (unsigned int)v458 > 0x2F )
      {
        v2428 = (unsigned int *)v2543;
        v2429 = v2543 + 8;
        v2543 += 8;
        v461 = *v2428;
      }
      else
      {
        v460 = v2542 + 16;
        v461 = *(int *)((char *)v2544 + v458);
        v2542 = v460;
        if ( (unsigned int)v460 <= 0x2F )
        {
          v462 = v457 + 24;
          v463 = *(_QWORD **)((char *)v2544 + v460);
          if ( (unsigned int)v462 > 0x2F )
            v464 = (unsigned int *)v2543;
          else
            v464 = (unsigned int *)((char *)v2544 + v462);
LABEL_414:
          sub_263CF0(v459, v461, v463, *v464);
          return nullptr;
        }
        v2429 = v2543;
      }
      v2430 = v2429;
      v464 = (unsigned int *)(v2429 + 8);
      v2543 = (char *)v464;
      v463 = *(_QWORD **)v2430;
      goto LABEL_414;
    case 497LL:
      v1466 = v2542;
      v1467 = v2542 + 8;
      v2542 = v1467;
      v1468 = *(_QWORD *)((char *)v2544 + v1466);
      if ( (unsigned int)v1467 > 0x2F )
      {
        v2188 = (__int64 *)v2543;
        v1471 = (__int64 *)(v2543 + 8);
        v2543 += 8;
        v1470 = *v2188;
      }
      else
      {
        v1469 = v1466 + 16;
        v1470 = *(_QWORD *)((char *)v2544 + v1467);
        if ( (unsigned int)v1469 > 0x2F )
          v1471 = (__int64 *)v2543;
        else
          v1471 = (__int64 *)((char *)v2544 + v1469);
      }
      sub_264E20(v1468, v1470, *v1471);
      return nullptr;
    case 498LL:
      return (char *)(unsigned __int8)sub_23D2C0(*(_QWORD *)((char *)v2544 + v2542), a2, a3, a4, a5);
    case 499LL:
      v1472 = v2542;
      v1473 = v2542 + 8;
      v2542 = v1473;
      v1474 = *(_QWORD *)((char *)v2544 + v1472);
      if ( (unsigned int)v1473 > 0x2F )
      {
        v2352 = (int *)v2543;
        v1477 = (int *)(v2543 + 8);
        v2543 += 8;
        v1476 = *v2352;
      }
      else
      {
        v1475 = v1472 + 16;
        v1476 = *(int *)((char *)v2544 + v1473);
        if ( (unsigned int)v1475 > 0x2F )
          v1477 = (int *)v2543;
        else
          v1477 = (int *)((char *)v2544 + v1475);
      }
      return (char *)(unsigned __int8)sub_280B40(v1474, v1476, *v1477);
    case 500LL:
      v1231 = v2542 + 8;
      v1232 = (__int64 *)((char *)v2544 + v1231);
      if ( (unsigned int)v1231 > 0x2F )
        v1232 = (__int64 *)v2543;
      return (char *)(unsigned __int8)sub_280C10(*(_QWORD *)((char *)v2544 + v2542), *v1232);
    case 501LL:
      v1462 = v2542 + 8;
      v1463 = (__int64 *)((char *)v2544 + v1462);
      if ( (unsigned int)v1462 > 0x2F )
        v1463 = (__int64 *)v2543;
      return (char *)(unsigned __int8)sub_280CF0(*(_QWORD *)((char *)v2544 + v2542), *v1463);
    case 502LL:
      return (char *)sub_1AA7A0(*(_QWORD *)((char *)v2544 + v2542));
    case 503LL:
      v1464 = v2542 + 8;
      v1465 = (char *)v2544 + v1464;
      if ( (unsigned int)v1464 > 0x2F )
        v1465 = v2543;
      return (char *)(int)sub_255C40(*(_QWORD ***)((char *)v2544 + v2542), *(_QWORD ***)v1465);
    case 504LL:
      v655 = v2542 + 8;
      v656 = (__int64 **)((char *)v2544 + v655);
      if ( (unsigned int)v655 > 0x2F )
        v656 = (__int64 **)v2543;
      return (char *)sub_255A40(*(__int64 **)((char *)v2544 + v2542), *v656);
    case 505LL:
      v985 = v2542 + 8;
      v986 = (__int64 *)((char *)v2544 + v985);
      if ( (unsigned int)v985 > 0x2F )
        v986 = (__int64 *)v2543;
      return (char *)(int)sub_255B10(*(_QWORD *)((char *)v2544 + v2542), *v986);
    case 506LL:
      v983 = v2542 + 8;
      v984 = (__int64 **)((char *)v2544 + v983);
      if ( (unsigned int)v983 > 0x2F )
        v984 = (__int64 **)v2543;
      return (char *)(int)sub_254E10(*(__int64 **)((char *)v2544 + v2542), *v984);
    case 507LL:
      v981 = v2542 + 8;
      v982 = (__int64 *)((char *)v2544 + v981);
      if ( (unsigned int)v981 > 0x2F )
        v982 = (__int64 *)v2543;
      return (char *)sub_255A50(*(_QWORD *)((char *)v2544 + v2542), *v982);
    case 508LL:
      v979 = v2542 + 8;
      v980 = (__int64 *)((char *)v2544 + v979);
      if ( (unsigned int)v979 > 0x2F )
        v980 = (__int64 *)v2543;
      return (char *)sub_255C50(*(_QWORD *)((char *)v2544 + v2542), *v980);
    case 509LL:
      v995 = v2542 + 8;
      v996 = (__int64 *)((char *)v2544 + v995);
      if ( (unsigned int)v995 > 0x2F )
        v996 = (__int64 *)v2543;
      return (char *)sub_255D50(*(_QWORD *)((char *)v2544 + v2542), *v996);
    case 510LL:
      v987 = v2542;
      v988 = v2542 + 8;
      v989 = *(_QWORD *)((char *)v2544 + v2542);
      if ( (unsigned int)v988 > 0x2F )
      {
        v2273 = v2543;
        v2523 = v2543 + 8;
        v2543 += 8;
        v991 = *(_QWORD *)v2273;
      }
      else
      {
        v990 = v2542 + 16;
        v991 = *(_QWORD *)((char *)v2544 + v988);
        v2542 = v990;
        if ( (unsigned int)v990 <= 0x2F )
        {
          v992 = v987 + 24;
          v993 = *(_QWORD *)((char *)v2544 + v990);
          if ( (unsigned int)v992 > 0x2F )
            v994 = v2543;
          else
            v994 = (char *)v2544 + v992;
          return (char *)(int)sub_3884D0(
                                v989,
                                v991,
                                v993,
                                *(_QWORD *)v994,
                                v993,
                                a6,
                                v2535.m128i_i32[0],
                                v2535.m128i_i8[8],
                                v2536.m128i_i32[0],
                                v2536.m128i_i32[2],
                                v2537.m128i_i32[0],
                                v2537.m128i_i32[2],
                                *(_DWORD *)v2538,
                                *(_DWORD *)&v2538[8],
                                *(_DWORD *)&v2538[16],
                                v2539,
                                *(_DWORD *)v2540,
                                *(_DWORD *)&v2540[8],
                                *(_DWORD *)&v2540[16],
                                *(_DWORD *)&v2540[24],
                                *(_DWORD *)&v2540[32],
                                *(_DWORD *)&v2540[40],
                                v2541,
                                v2542,
                                (_DWORD)v2543,
                                (_DWORD)v2544,
                                v2545.m128i_i64[0]);
        }
        v2523 = v2543;
      }
      v2274 = v2523;
      v994 = v2523 + 8;
      v2543 = v994;
      v993 = *(_QWORD *)v2274;
      return (char *)(int)sub_3884D0(
                            v989,
                            v991,
                            v993,
                            *(_QWORD *)v994,
                            v993,
                            a6,
                            v2535.m128i_i32[0],
                            v2535.m128i_i8[8],
                            v2536.m128i_i32[0],
                            v2536.m128i_i32[2],
                            v2537.m128i_i32[0],
                            v2537.m128i_i32[2],
                            *(_DWORD *)v2538,
                            *(_DWORD *)&v2538[8],
                            *(_DWORD *)&v2538[16],
                            v2539,
                            *(_DWORD *)v2540,
                            *(_DWORD *)&v2540[8],
                            *(_DWORD *)&v2540[16],
                            *(_DWORD *)&v2540[24],
                            *(_DWORD *)&v2540[32],
                            *(_DWORD *)&v2540[40],
                            v2541,
                            v2542,
                            (_DWORD)v2543,
                            (_DWORD)v2544,
                            v2545.m128i_i64[0]);
    case 511LL:
      v370 = v2542 + 8;
      v371 = (char *)v2544 + v370;
      if ( (unsigned int)v370 > 0x2F )
        v371 = v2543;
      return (char *)(int)sub_388230(*(_QWORD *)((char *)v2544 + v2542), *(_QWORD *)v371);
    case 512LL:
      return (char *)sub_388820(*(_QWORD *)((char *)v2544 + v2542));
    case 513LL:
      v367 = v2542 + 8;
      v369 = (char *)v2544 + v367;
      if ( (unsigned int)v367 > 0x2F )
        v369 = v2543;
      v368 = *(_QWORD **)((char *)v2544 + v2542);
      *v368 = sub_388860(*(_QWORD *)v369);
      return nullptr;
    case 514LL:
      v313 = v2542 + 8;
      v314 = (char *)v2544 + v313;
      if ( (unsigned int)v313 > 0x2F )
        v314 = v2543;
      return (char *)(int)sub_3888A0(*(_QWORD *)((char *)v2544 + v2542), *(unsigned int *)v314, v2542);
    case 515LL:
      v315 = v2542 + 8;
      v316 = (__int64 **)((char *)v2544 + v315);
      if ( (unsigned int)v315 > 0x2F )
        v316 = (__int64 **)v2543;
      sub_1B2020(*(_QWORD *)((char *)v2544 + v2542), *v316);
      return nullptr;
    case 516LL:
      return (char *)sub_1B2360(*(_QWORD *)((char *)v2544 + v2542));
    case 517LL:
      v342 = *(_QWORD *)((char *)v2544 + v2542);
      v343 = sub_334A60();
      return (char *)sub_23FBE0(v343, v342, v344, v345, v346);
    case 518LL:
      return (char *)sub_23CAB0();
    case 519LL:
      v154 = v2542;
      v155 = *(int *)((char *)v2544 + v2542) != 0;
      if ( v2542 + 8 > 0x2F )
      {
        v2293 = v2543 + 8;
        v2543 += 8;
      }
      else
      {
        v2542 += 16;
        if ( v154 + 16 <= 0x2F )
        {
          v156 = v154 + 24;
          if ( (unsigned int)v156 > 0x2F )
            v157 = v2543;
          else
            v157 = (char *)v2544 + v156;
LABEL_142:
          v158 = *(const __m128i **)v157;
          v2545 = _mm_loadu_si128((const __m128i *)*(_QWORD *)v157);
          v2546 = v158[1].m128i_i64[0];
          return (char *)sub_23DD70(v155);
        }
        v2293 = v2543;
      }
      v157 = v2293 + 8;
      v2543 = v157;
      goto LABEL_142;
    case 520LL:
      v147 = v2542;
      v148 = v2542 + 8;
      v149 = *(_QWORD *)((char *)v2544 + v2542);
      if ( (unsigned int)v148 > 0x2F )
      {
        v2323 = (__int64 *)v2543;
        v2517 = v2543 + 8;
        v2543 += 8;
        v150 = *v2323;
      }
      else
      {
        v150 = *(_QWORD *)((char *)v2544 + v148);
        v2542 += 16;
        if ( v147 + 16 <= 0x2F )
        {
          v151 = v147 + 24;
          if ( (unsigned int)v151 > 0x2F )
            v152 = v2543;
          else
            v152 = (char *)v2544 + v151;
LABEL_137:
          v153 = *(const __m128i **)v152;
          v2545 = _mm_loadu_si128((const __m128i *)*(_QWORD *)v152);
          v2546 = v153[1].m128i_i64[0];
          return (char *)sub_240E40(v149, v150);
        }
        v2517 = v2543;
      }
      v152 = v2517 + 8;
      v2543 = v152;
      goto LABEL_137;
    case 521LL:
      v349 = v2542;
      v350 = v2542 + 8;
      v351 = *(_QWORD *)((char *)v2544 + v2542);
      if ( (unsigned int)v350 > 0x2F )
      {
        v2307 = (__int64 *)v2543;
        v2518 = v2543 + 8;
        v2543 += 8;
        v353 = *v2307;
      }
      else
      {
        v352 = v2542 + 16;
        v353 = *(_QWORD *)((char *)v2544 + v350);
        v2542 = v352;
        if ( (unsigned int)v352 <= 0x2F )
        {
          v354 = v349 + 24;
          v355 = *(_QWORD *)((char *)v2544 + v352);
          if ( (unsigned int)v354 <= 0x2F )
          {
            v356 = v349 + 32;
            v357 = *(int *)((char *)v2544 + v354);
            v2542 = v356;
            if ( (unsigned int)v356 <= 0x2F )
            {
              v358 = v349 + 40;
              v359 = *(int *)((char *)v2544 + v356);
              if ( (unsigned int)v358 > 0x2F )
                v360 = (unsigned int *)v2543;
              else
                v360 = (unsigned int *)((char *)v2544 + v358);
              return (char *)sub_23C7B0(v351, v353, v355, v357, v359, *v360);
            }
            v2311 = (unsigned int *)v2543;
LABEL_2049:
            v2312 = v2311;
            v360 = v2311 + 2;
            v2543 = (char *)v360;
            v359 = *v2312;
            return (char *)sub_23C7B0(v351, v353, v355, v357, v359, *v360);
          }
          v2309 = v2543;
LABEL_2048:
          v2310 = v2309;
          v2311 = (unsigned int *)(v2309 + 8);
          v2543 = (char *)v2311;
          v357 = *(_DWORD *)v2310;
          goto LABEL_2049;
        }
        v2518 = v2543;
      }
      v2308 = (__int64 *)v2518;
      v2309 = v2518 + 8;
      v2543 = v2309;
      v355 = *v2308;
      goto LABEL_2048;
    case 522LL:
      v297 = *(_QWORD *)((char *)v2544 + v2542);
      v298 = sub_334A60();
      return (char *)sub_242C90(v298, v297);
    case 523LL:
      v327 = v2542;
      v328 = v2542 + 8;
      v2542 = v328;
      v329 = *(_QWORD *)((char *)v2544 + v327);
      if ( (unsigned int)v328 > 0x2F )
      {
        v2304 = (int *)v2543;
        v332 = v2543 + 8;
        v2543 += 8;
        v331 = *v2304;
      }
      else
      {
        v330 = v327 + 16;
        v331 = *(int *)((char *)v2544 + v328);
        if ( (unsigned int)v330 > 0x2F )
          v332 = v2543;
        else
          v332 = (char *)v2544 + v330;
      }
      v333 = *(_DWORD *)v332 != 0;
      v334 = sub_334A60();
      return (char *)sub_23FAA0(v334, v329, v331, v333, v335, v336);
    case 524LL:
      v204 = v2542;
      v205 = v2542 + 8;
      v2542 = v205;
      v206 = *(_QWORD *)((char *)v2544 + v204);
      if ( (unsigned int)v205 > 0x2F )
      {
        v2294 = (__int64 *)v2543;
        v209 = v2543 + 8;
        v2543 += 8;
        v208 = *v2294;
      }
      else
      {
        v207 = v204 + 16;
        v208 = *(_QWORD *)((char *)v2544 + v205);
        if ( (unsigned int)v207 > 0x2F )
          v209 = v2543;
        else
          v209 = (char *)v2544 + v207;
      }
      v210 = *(_QWORD **)v209;
      v211 = sub_334A60();
      sub_2B1CF0(v211, v206, v208, v210);
      return nullptr;
    case 525LL:
      v104 = v2542 + 8;
      v105 = *(_QWORD *)((char *)v2544 + v2542);
      v106 = (__int64 *)((char *)v2544 + v104);
      if ( (unsigned int)v104 > 0x2F )
        v106 = (__int64 *)v2543;
      v107 = *v106;
      v108 = sub_334A60();
      sub_2B1DD0(v108, v105, v107);
      return nullptr;
    case 526LL:
      v99 = v2542 + 8;
      v100 = *(_QWORD *)((char *)v2544 + v2542);
      v101 = (__int64 *)((char *)v2544 + v99);
      if ( (unsigned int)v99 > 0x2F )
        v101 = (__int64 *)v2543;
      v102 = *v101;
      v103 = sub_334A60();
      sub_2B1E90(v103, v100, v102);
      return nullptr;
    case 527LL:
      v242 = v2542 + 8;
      v243 = *(_QWORD *)((char *)v2544 + v2542);
      v244 = (__int64 *)((char *)v2544 + v242);
      if ( (unsigned int)v242 > 0x2F )
        v244 = (__int64 *)v2543;
      v245 = *v244;
      v246 = sub_334A60();
      sub_2B2000(v246, v243, v245);
      return nullptr;
    case 528LL:
      v94 = v2542 + 8;
      v95 = *(_QWORD *)((char *)v2544 + v2542);
      v96 = (__int64 *)((char *)v2544 + v94);
      if ( (unsigned int)v94 > 0x2F )
        v96 = (__int64 *)v2543;
      v97 = *v96;
      v98 = sub_334A60();
      sub_2B3410(v98, v95, v97);
      return nullptr;
    case 529LL:
      v337 = v2542 + 8;
      v338 = *(_QWORD *)((char *)v2544 + v2542);
      v339 = (char *)v2544 + v337;
      if ( (unsigned int)v337 > 0x2F )
        v339 = v2543;
      v340 = *(_QWORD **)v339;
      v341 = sub_334A60();
      return (char *)sub_2B1D60(v341, v338, v340);
    case 530LL:
      v305 = *(_QWORD *)((char *)v2544 + v2542);
      v306 = sub_334A60();
      return (char *)sub_2B1E30(v306, v305);
    case 531LL:
      v216 = *(_QWORD *)((char *)v2544 + v2542);
      v217 = sub_334A60();
      return (char *)sub_2B1FA0(v217, v216);
    case 532LL:
      v214 = *(_QWORD *)((char *)v2544 + v2542);
      v215 = sub_334A60();
      return (char *)sub_2B2060(v215, v214);
    case 533LL:
      v143 = *(_QWORD *)((char *)v2544 + v2542);
      v144 = sub_334A60();
      return (char *)sub_2B3470(v144, v143);
    case 534LL:
      sub_24DB40(*(_QWORD *)((char *)v2544 + v2542));
      return nullptr;
    case 535LL:
      v263 = v2542;
      v264 = v2542 + 8;
      v2542 = v264;
      v265 = *(_QWORD *)((char *)v2544 + v263);
      if ( (unsigned int)v264 > 0x2F )
      {
        v2287 = (int *)v2543;
        v268 = v2543 + 8;
        v2543 += 8;
        v267 = *v2287;
      }
      else
      {
        v266 = v263 + 16;
        v267 = *(int *)((char *)v2544 + v264);
        if ( (unsigned int)v266 > 0x2F )
          v268 = v2543;
        else
          v268 = (char *)v2544 + v266;
      }
      sub_320550(v265, v267, *(_DWORD *)v268 != 0);
      return nullptr;
    case 536LL:
      v141 = v2542 + 8;
      v142 = (__int64 **)((char *)v2544 + v141);
      if ( (unsigned int)v141 > 0x2F )
        v142 = (__int64 **)v2543;
      sub_25EF90(*(_QWORD *)((char *)v2544 + v2542), *v142);
      return nullptr;
    case 537LL:
      v325 = v2542 + 8;
      v326 = (__int64 *)((char *)v2544 + v325);
      if ( (unsigned int)v325 > 0x2F )
        v326 = (__int64 *)v2543;
      sub_264720(*(_QWORD *)((char *)v2544 + v2542), *v326);
      return nullptr;
    case 538LL:
      v295 = v2542 + 8;
      v296 = (char *)v2544 + v295;
      if ( (unsigned int)v295 > 0x2F )
        v296 = v2543;
      return (char *)(unsigned __int8)sub_3718A0(*(_QWORD *)(*(_QWORD *)((char *)v2544 + v2542) + 8LL), *(_QWORD *)v296);
    case 539LL:
      return (char *)(*(_QWORD *)(*(_QWORD *)((char *)v2544 + v2542) + 8LL) + 432LL);
    case 540LL:
      v183 = v2542 + 8;
      v184 = (char *)v2544 + v183;
      if ( (unsigned int)v183 > 0x2F )
        v184 = v2543;
      **(_QWORD **)((char *)v2544 + v2542) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v184 + 8LL) + 80LL);
      return nullptr;
    case 541LL:
      v232 = v2542 + 8;
      v233 = (int *)((char *)v2544 + v232);
      if ( (unsigned int)v232 > 0x2F )
        v233 = (int *)v2543;
      return (char *)sub_253A20(*(_QWORD *)((char *)v2544 + v2542), *v233);
    case 542LL:
      sub_253D40(*(_QWORD *)((char *)v2544 + v2542));
      return nullptr;
    case 543LL:
      v82 = v2542;
      v83 = v2542 + 8;
      v2542 = v83;
      v84 = *(_QWORD *)((char *)v2544 + v82);
      if ( (unsigned int)v83 > 0x2F )
      {
        v2300 = (unsigned __int64 **)v2543;
        v87 = (int *)(v2543 + 8);
        v2543 += 8;
        v86 = *v2300;
      }
      else
      {
        v85 = v82 + 16;
        v86 = *(unsigned __int64 **)((char *)v2544 + v83);
        if ( (unsigned int)v85 > 0x2F )
          v87 = (int *)v2543;
        else
          v87 = (int *)((char *)v2544 + v85);
      }
      return (char *)sub_253270(v84, v86, *v87);
    case 544LL:
      v76 = v2542;
      v77 = v2542 + 8;
      v2542 = v77;
      v78 = *(_QWORD *)((char *)v2544 + v76);
      if ( (unsigned int)v77 > 0x2F )
      {
        v2322 = (const __m128i **)v2543;
        v81 = (const char **)(v2543 + 8);
        v2543 += 8;
        v80 = *v2322;
      }
      else
      {
        v79 = v76 + 16;
        v80 = *(const __m128i **)((char *)v2544 + v77);
        if ( (unsigned int)v79 > 0x2F )
          v81 = (const char **)v2543;
        else
          v81 = (const char **)((char *)v2544 + v79);
      }
      sub_257EB0(v78, v80, *v81, v77, a5, a6);
      return nullptr;
    case 545LL:
      v347 = v2542 + 8;
      v348 = (unsigned __int64 **)((char *)v2544 + v347);
      if ( (unsigned int)v347 > 0x2F )
        v348 = (unsigned __int64 **)v2543;
      return (char *)(int)sub_253620(*(_QWORD *)((char *)v2544 + v2542), *v348);
    case 546LL:
      v307 = v2542;
      v308 = v2542 + 8;
      v2542 = v308;
      v309 = *(_QWORD *)((char *)v2544 + v307);
      if ( (unsigned int)v308 > 0x2F )
      {
        v2337 = (const __m128i **)v2543;
        v312 = (int *)(v2543 + 8);
        v2543 += 8;
        v311 = *v2337;
      }
      else
      {
        v310 = v307 + 16;
        v311 = *(const __m128i **)((char *)v2544 + v308);
        if ( (unsigned int)v310 > 0x2F )
          v312 = (int *)v2543;
        else
          v312 = (int *)((char *)v2544 + v310);
      }
      sub_259090(v309, v311, *v312);
      return nullptr;
    case 547LL:
      return (char *)(unsigned __int8)sub_2510E0(*(_QWORD *)((char *)v2544 + v2542));
    case 548LL:
      return (char *)(int)sub_2579F0(*(_QWORD *)((char *)v2544 + v2542));
    case 549LL:
      v361 = v2542;
      v362 = v2542 + 8;
      v2542 = v362;
      v363 = *(_QWORD *)((char *)v2544 + v361);
      if ( (unsigned int)v362 > 0x2F )
      {
        v2320 = (unsigned __int64 *)v2543;
        v366 = v2543 + 8;
        v2543 += 8;
        v365 = *v2320;
      }
      else
      {
        v364 = v361 + 16;
        v365 = *(_QWORD *)((char *)v2544 + v362);
        if ( (unsigned int)v364 > 0x2F )
          v366 = v2543;
        else
          v366 = (char *)v2544 + v364;
      }
      return (char *)(unsigned __int8)sub_253690(v363, v365, *(_QWORD **)v366);
    case 550LL:
      v271 = v2542;
      v272 = v2542 + 8;
      v2542 = v272;
      v273 = *(_QWORD *)((char *)v2544 + v271);
      if ( (unsigned int)v272 > 0x2F )
      {
        v2292 = (unsigned __int64 *)v2543;
        v276 = (__int64 *)(v2543 + 8);
        v2543 += 8;
        v275 = *v2292;
      }
      else
      {
        v274 = v271 + 16;
        v275 = *(_QWORD *)((char *)v2544 + v272);
        if ( (unsigned int)v274 > 0x2F )
          v276 = (__int64 *)v2543;
        else
          v276 = (__int64 *)((char *)v2544 + v274);
      }
      sub_25A0E0(v273, v275, *v276);
      return nullptr;
    case 551LL:
      sub_2B1CF0(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)v2544 + v2542) + 216LL) + 112LL),
        **(_QWORD **)((char *)v2544 + v2542),
        *(_QWORD *)(*(_QWORD *)((char *)v2544 + v2542) + 64LL),
        *(_QWORD **)((char *)v2544 + v2542));
      return nullptr;
    case 552LL:
      sub_2B1DD0(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)v2544 + v2542) + 216LL) + 112LL),
        **(_QWORD **)((char *)v2544 + v2542),
        *(_QWORD *)(*(_QWORD *)((char *)v2544 + v2542) + 72LL));
      return nullptr;
    case 553LL:
      sub_2B1E90(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)v2544 + v2542) + 216LL) + 112LL),
        **(_QWORD **)((char *)v2544 + v2542),
        *(_QWORD *)(*(_QWORD *)((char *)v2544 + v2542) + 80LL));
      return nullptr;
    case 554LL:
      sub_2B2000(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)v2544 + v2542) + 216LL) + 112LL),
        **(_QWORD **)((char *)v2544 + v2542),
        *(_QWORD *)(*(_QWORD *)((char *)v2544 + v2542) + 88LL));
      return nullptr;
    case 555LL:
      sub_2B3410(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)v2544 + v2542) + 216LL) + 112LL),
        **(_QWORD **)((char *)v2544 + v2542),
        *(_QWORD *)(*(_QWORD *)((char *)v2544 + v2542) + 96LL));
      return nullptr;
    case 556LL:
      v191 = v2542;
      v192 = v2542 + 8;
      v2542 = v192;
      v193 = *(_QWORD *)((char *)v2544 + v191);
      if ( (unsigned int)v192 > 0x2F )
      {
        v2325 = v2543;
        v2519 = v2543 + 8;
        v2543 += 8;
        v195 = *(_QWORD *)v2325;
      }
      else
      {
        v194 = v191 + 16;
        v195 = *(_QWORD *)((char *)v2544 + v192);
        if ( (unsigned int)v194 <= 0x2F )
        {
          v196 = v191 + 24;
          v197 = *(int *)((char *)v2544 + v194);
          v2542 = v196;
          if ( (unsigned int)v196 <= 0x2F )
          {
            v198 = v191 + 32;
            v199 = *(int *)((char *)v2544 + v196) != 0;
            if ( (unsigned int)v198 <= 0x2F )
            {
              v200 = v191 + 40;
              v201 = *(_QWORD *)((char *)v2544 + v198);
              v2542 = v200;
              if ( (unsigned int)v200 <= 0x2F )
              {
                v202 = *(_QWORD *)((char *)v2544 + v200);
                v203 = (__int64 *)v2543;
                return (char *)(unsigned __int8)sub_385890(v193, v195, v197, v199, v201, v202, *v203);
              }
              v2331 = v2543;
LABEL_2056:
              v2332 = v2331;
              v203 = (__int64 *)(v2331 + 8);
              v2543 = (char *)v203;
              v202 = *(_QWORD *)v2332;
              return (char *)(unsigned __int8)sub_385890(v193, v195, v197, v199, v201, v202, *v203);
            }
            v2329 = v2543;
LABEL_2055:
            v2330 = v2329;
            v2331 = v2329 + 8;
            v2543 = v2331;
            v201 = *(_QWORD *)v2330;
            goto LABEL_2056;
          }
          v2327 = v2543;
LABEL_2054:
          v2328 = v2327;
          v2329 = v2327 + 8;
          v2543 = v2329;
          v199 = *(_DWORD *)v2328 != 0;
          goto LABEL_2055;
        }
        v2519 = v2543;
      }
      v2326 = v2519;
      v2327 = v2519 + 8;
      v2543 = v2327;
      v197 = *(_DWORD *)v2326;
      goto LABEL_2054;
    case 557LL:
      return (char *)(*(_QWORD *)(*(_QWORD *)((char *)v2544 + v2542) + 8LL) + 728LL);
    case 558LL:
      return (char *)sub_253790(*(_QWORD *)((char *)v2544 + v2542));
    case 559LL:
      return (char *)sub_2537A0(*(_QWORD *)((char *)v2544 + v2542));
    case 560LL:
      return (char *)sub_253960(*(_QWORD *)((char *)v2544 + v2542), a2, a3);
    case 561LL:
      sub_38B260(*(_QWORD *)((char *)v2544 + v2542));
      return nullptr;
    case 562LL:
      v299 = v2542;
      v300 = v2542 + 8;
      v2542 = v300;
      v301 = *(_QWORD *)((char *)v2544 + v299);
      if ( (unsigned int)v300 > 0x2F )
      {
        v2317 = (__int64 *)v2543;
        v304 = (__int64 *)(v2543 + 8);
        v2543 += 8;
        v303 = *v2317;
      }
      else
      {
        v302 = v299 + 16;
        v303 = *(_QWORD *)((char *)v2544 + v300);
        if ( (unsigned int)v302 > 0x2F )
          v304 = (__int64 *)v2543;
        else
          v304 = (__int64 *)((char *)v2544 + v302);
      }
      return (char *)(unsigned __int8)sub_252C40(v301, v303, *v304);
    case 563LL:
      v317 = v2542;
      v318 = v2542 + 8;
      v319 = *(_QWORD *)((char *)v2544 + v2542);
      if ( (unsigned int)v318 > 0x2F )
      {
        v2313 = v2543;
        v2314 = v2543 + 8;
        v2543 += 8;
        v321 = *(_QWORD *)v2313;
      }
      else
      {
        v320 = v2542 + 16;
        v321 = *(_QWORD *)((char *)v2544 + v318);
        v2542 = v320;
        if ( (unsigned int)v320 <= 0x2F )
        {
          v322 = v317 + 24;
          v323 = *(_QWORD *)((char *)v2544 + v320);
          if ( (unsigned int)v322 > 0x2F )
            v324 = v2543;
          else
            v324 = (char *)v2544 + v322;
          return (char *)(unsigned __int8)sub_386E60(v319, v321, v323, *(_QWORD *)v324);
        }
        v2314 = v2543;
      }
      v2315 = v2314;
      v324 = v2314 + 8;
      v2543 = v324;
      v323 = *(_QWORD *)v2315;
      return (char *)(unsigned __int8)sub_386E60(v319, v321, v323, *(_QWORD *)v324);
    case 564LL:
      sub_2540F0(*(__int64 **)((char *)v2544 + v2542));
      return nullptr;
    case 565LL:
      v124 = sub_334A60();
      sub_133430(
        v124,
        a2,
        v125,
        v126,
        v127,
        v128,
        v2535.m128i_i64[0],
        v2535.m128i_i64[1],
        v2536.m128i_i64[0],
        v2536.m128i_i64[1]);
      return nullptr;
    case 566LL:
      v117 = v2542;
      v118 = v2542 + 8;
      v2542 = v118;
      v119 = *(_QWORD **)((char *)v2544 + v117);
      if ( (unsigned int)v118 > 0x2F )
      {
        v2295 = v2543;
        v122 = (int *)(v2543 + 8);
        v2543 += 8;
        v121 = *(_DWORD **)v2295;
      }
      else
      {
        v120 = v117 + 16;
        v121 = *(_DWORD **)((char *)v2544 + v118);
        if ( (unsigned int)v120 > 0x2F )
          v122 = (int *)v2543;
        else
          v122 = (int *)((char *)v2544 + v120);
      }
      v123 = *v122;
      v115 = sub_334A60();
      sub_148BC0(v2540, v115, v119, v121, v123);
      v116 = *(_QWORD *)v2540;
      if ( *(_QWORD *)v2540 )
        ++*(_DWORD *)(*(_QWORD *)v2540 + 104LL);
      goto LABEL_102;
    case 567LL:
      v249 = v2542;
      v250 = v2542 + 8;
      v2542 = v250;
      v251 = *(_QWORD **)((char *)v2544 + v249);
      if ( (unsigned int)v250 > 0x2F )
      {
        v2288 = (__int64 *)v2543;
        v2522 = v2543 + 8;
        v2543 += 8;
        v253 = *v2288;
      }
      else
      {
        v252 = v249 + 16;
        v253 = *(_QWORD *)((char *)v2544 + v250);
        if ( (unsigned int)v252 <= 0x2F )
        {
          v254 = v249 + 24;
          v255 = *(_QWORD *)((char *)v2544 + v252);
          v2542 = v254;
          if ( (unsigned int)v254 <= 0x2F )
          {
            v256 = v249 + 32;
            v257 = *(int *)((char *)v2544 + v254);
            if ( (unsigned int)v256 > 0x2F )
              v258 = v2543;
            else
              v258 = (char *)v2544 + v256;
LABEL_238:
            v259 = *(_DWORD *)v258;
            v260 = sub_334A60();
            return (char *)sub_148C10(v260, v251, v253, v255, v257, v259);
          }
          v2290 = v2543;
LABEL_2043:
          v2291 = v2290;
          v258 = v2290 + 8;
          v2543 = v258;
          v257 = *(_DWORD *)v2291;
          goto LABEL_238;
        }
        v2522 = v2543;
      }
      v2289 = (__int64 *)v2522;
      v2290 = v2522 + 8;
      v2543 = v2290;
      v255 = *v2289;
      goto LABEL_2043;
    case 568LL:
      v115 = *(_QWORD *)((char *)v2544 + v2542);
      sub_252A20((__int64 **)v2540, v115);
      v116 = *(_QWORD *)v2540;
      if ( *(_QWORD *)v2540 )
        ++*(_DWORD *)(*(_QWORD *)v2540 + 104LL);
LABEL_102:
      v2535.m128i_i64[0] = v116;
      sub_13BF40(v2540, v115);
      return (char *)v2535.m128i_i64[0];
    case 569LL:
      v174 = v2542 + 8;
      v175 = *(_QWORD *)((char *)v2544 + v2542);
      v176 = (char *)v2544 + v174;
      if ( (unsigned int)v174 > 0x2F )
        v176 = v2543;
      v177 = *(_DWORD *)v176 != 0;
      v178 = sub_334A60();
      return (char *)(unsigned __int8)sub_143B70(v178, v175, v177);
    case 570LL:
      v173 = sub_334A60();
      sub_1427A0(v173, a2);
      return nullptr;
    case 571LL:
      v293 = *(_QWORD *)((char *)v2544 + v2542);
      v294 = sub_334A60();
      return (char *)sub_139AA0(v294, v293);
    case 572LL:
      return (char *)sub_25BBF0(*(int *)((char *)v2544 + v2542));
    case 573LL:
      v66 = v2542;
      v67 = v2542 + 8;
      v2542 = v67;
      v68 = *(_QWORD **)((char *)v2544 + v66);
      if ( (unsigned int)v67 > 0x2F )
      {
        v2321 = (__int64 *)v2543;
        v71 = (__int64 *)(v2543 + 8);
        v2543 += 8;
        v70 = *v2321;
      }
      else
      {
        v69 = v66 + 16;
        v70 = *(_QWORD *)((char *)v2544 + v67);
        v2542 = v69;
        if ( (unsigned int)v69 <= 0x2F )
        {
          v71 = (__int64 *)((char *)v2544 + v69);
          v2542 = v66 + 24;
          goto LABEL_64;
        }
        v71 = (__int64 *)v2543;
      }
      v2543 = (char *)(v71 + 1);
LABEL_64:
      sub_326B70((__int64 *)v2540, v70, *v71);
      v72 = *(_QWORD *)v2540;
      v73 = _mm_loadu_si128((const __m128i *)&v2540[8]);
      memset(v2540, 0, 24);
      if ( *v68 )
      {
        v2535 = v73;
        v68[1] = 0;
        qfree();
        v73 = _mm_load_si128(&v2535);
      }
      *v68 = v72;
      *(__m128i *)(v68 + 1) = v73;
      if ( *(_QWORD *)v2540 )
      {
LABEL_67:
        *(_QWORD *)&v2540[8] = 0;
        qfree();
      }
      return nullptr;
    case 574LL:
      v64 = v2542 + 8;
      v65 = (__int64 *)((char *)v2544 + v64);
      if ( (unsigned int)v64 > 0x2F )
        v65 = (__int64 *)v2543;
      return (char *)(unsigned __int8)sub_339030(*(_QWORD *)((char *)v2544 + v2542), *v65);
    case 575LL:
      v220 = v2542 + 8;
      v221 = (__int64 *)((char *)v2544 + v220);
      if ( (unsigned int)v220 > 0x2F )
        v221 = (__int64 *)v2543;
      return (char *)(int)sub_3391F0(*(_QWORD *)((char *)v2544 + v2542), *v221);
    case 576LL:
      v62 = v2542 + 8;
      v63 = (char *)v2544 + v62;
      if ( (unsigned int)v62 > 0x2F )
        v63 = v2543;
      return (char *)(unsigned __int8)sub_390E60(*(_QWORD *)((char *)v2544 + v2542), *(_DWORD *)v63 != 0);
    case 577LL:
      v291 = v2542 + 8;
      v292 = (char *)v2544 + v291;
      if ( (unsigned int)v291 > 0x2F )
        v292 = v2543;
      sub_390DC0(*(_QWORD *)((char *)v2544 + v2542), *(_DWORD *)v292 != 0);
      return nullptr;
    case 578LL:
      v240 = v2542 + 8;
      v241 = (char *)v2544 + v240;
      if ( (unsigned int)v240 > 0x2F )
        v241 = v2543;
      sub_38A720(*(_QWORD *)((char *)v2544 + v2542), *(_DWORD *)v241 != 0);
      return nullptr;
    case 579LL:
      v283 = v2542;
      v284 = v2542 + 8;
      v2542 = v284;
      v285 = *(_QWORD *)((char *)v2544 + v283);
      if ( (unsigned int)v284 > 0x2F )
      {
        v2336 = v2543;
        v288 = v2543 + 8;
        v2543 += 8;
        v287 = *(__int64 **)v2336;
      }
      else
      {
        v286 = v283 + 16;
        v287 = *(__int64 **)((char *)v2544 + v284);
        v2542 = v286;
        if ( (unsigned int)v286 <= 0x2F )
        {
          v288 = (char *)v2544 + v286;
          v2542 = v283 + 24;
          goto LABEL_262;
        }
        v288 = v2543;
      }
      v2543 = v288 + 8;
LABEL_262:
      v289 = *(_DWORD *)v288;
      v290 = *v287;
      *(_QWORD *)v2540 = v290;
      if ( v290 )
        ++*(_DWORD *)(v290 + 104);
      sub_38B460(v285, v2540, v289 != 0);
      sub_13BF40(v2540, (__int64)v2540);
      return nullptr;
    case 580LL:
      return (char *)sub_3879B0(*(_QWORD *)((char *)v2544 + v2542));
    case 581LL:
      return (char *)(int)sub_3A7D00(*(_QWORD *)((char *)v2544 + v2542));
    case 582LL:
      sub_38A5D0(*(_QWORD *)((char *)v2544 + v2542));
      return nullptr;
    case 583LL:
      v269 = v2542 + 8;
      v270 = (char *)v2544 + v269;
      if ( (unsigned int)v269 > 0x2F )
        v270 = v2543;
      return (char *)(unsigned __int8)sub_386530(*(_QWORD *)((char *)v2544 + v2542), *(unsigned int *)v270);
    case 584LL:
      v145 = v2542 + 8;
      v146 = (char *)v2544 + v145;
      if ( (unsigned int)v145 > 0x2F )
        v146 = v2543;
      return (char *)(unsigned __int8)sub_386590(*(_QWORD *)((char *)v2544 + v2542), *(unsigned int *)v146);
    case 585LL:
      v230 = v2542 + 8;
      v231 = (char *)v2544 + v230;
      if ( (unsigned int)v230 > 0x2F )
        v231 = v2543;
      return (char *)(unsigned __int8)sub_393F10(*(_QWORD *)((char *)v2544 + v2542), *(_QWORD *)v231);
    case 586LL:
      v222 = v2542;
      v223 = v2542 + 8;
      v224 = *(_QWORD *)((char *)v2544 + v2542);
      if ( (unsigned int)v223 > 0x2F )
      {
        v2333 = v2543;
        v2334 = v2543 + 8;
        v2543 += 8;
        v226 = *(_QWORD *)v2333;
LABEL_2057:
        v2335 = v2334;
        v229 = v2334 + 8;
        v2543 = v229;
        v228 = *(_QWORD *)v2335;
        return (char *)(unsigned __int8)sub_3927F0(v224, v226, v228, *(_DWORD *)v229 != 0);
      }
      v225 = v2542 + 16;
      v226 = *(_QWORD *)((char *)v2544 + v223);
      v2542 = v225;
      if ( (unsigned int)v225 > 0x2F )
      {
        v2334 = v2543;
        goto LABEL_2057;
      }
      v227 = v222 + 24;
      v228 = *(_QWORD *)((char *)v2544 + v225);
      if ( (unsigned int)v227 > 0x2F )
        v229 = v2543;
      else
        v229 = (char *)v2544 + v227;
      return (char *)(unsigned __int8)sub_3927F0(v224, v226, v228, *(_DWORD *)v229 != 0);
    case 587LL:
      v181 = v2542 + 8;
      v182 = (char *)v2544 + v181;
      if ( (unsigned int)v181 > 0x2F )
        v182 = v2543;
      return (char *)(unsigned __int8)sub_390EB0(*(_QWORD *)((char *)v2544 + v2542), *(_QWORD *)v182);
    case 588LL:
      v179 = v2542 + 8;
      v180 = (char *)v2544 + v179;
      if ( (unsigned int)v179 > 0x2F )
        v180 = v2543;
      return (char *)(unsigned __int8)sub_394740(*(_QWORD *)((char *)v2544 + v2542), *(_QWORD *)v180);
    case 589LL:
      v277 = v2542;
      v278 = v2542 + 8;
      v2542 = v278;
      v279 = *(_QWORD *)((char *)v2544 + v277);
      if ( (unsigned int)v278 > 0x2F )
      {
        v2319 = v2543;
        v282 = v2543 + 8;
        v2543 += 8;
        v281 = *(_QWORD *)v2319;
      }
      else
      {
        v280 = v277 + 16;
        v281 = *(_QWORD *)((char *)v2544 + v278);
        if ( (unsigned int)v280 > 0x2F )
          v282 = v2543;
        else
          v282 = (char *)v2544 + v280;
      }
      return (char *)(unsigned __int8)sub_394730(v279, v281, *(_QWORD *)v282);
    case 590LL:
      v212 = v2542 + 8;
      v213 = (char *)v2544 + v212;
      if ( (unsigned int)v212 > 0x2F )
        v213 = v2543;
      return (char *)(unsigned __int8)sub_394A10(*(_QWORD *)((char *)v2544 + v2542), *(_QWORD *)v213);
    case 591LL:
      v261 = v2542 + 8;
      v262 = (char *)v2544 + v261;
      if ( (unsigned int)v261 > 0x2F )
        v262 = v2543;
      return (char *)(unsigned __int8)sub_38A880(*(_QWORD *)((char *)v2544 + v2542), *(_QWORD *)v262);
    case 592LL:
      v88 = v2542;
      v89 = v2542 + 8;
      v2542 = v89;
      v90 = *(_QWORD *)((char *)v2544 + v88);
      if ( (unsigned int)v89 > 0x2F )
      {
        v2318 = v2543;
        v93 = v2543 + 8;
        v2543 += 8;
        v92 = *(_QWORD *)v2318;
      }
      else
      {
        v91 = v88 + 16;
        v92 = *(_QWORD *)((char *)v2544 + v89);
        if ( (unsigned int)v91 > 0x2F )
          v93 = v2543;
        else
          v93 = (char *)v2544 + v91;
      }
      return (char *)(unsigned __int8)sub_38A7B0(v90, v92, *(_QWORD *)v93);
    case 593LL:
      v247 = v2542 + 8;
      v248 = (char *)v2544 + v247;
      if ( (unsigned int)v247 > 0x2F )
        v248 = v2543;
      return (char *)(unsigned __int8)sub_3912F0(*(_QWORD *)((char *)v2544 + v2542), *(_QWORD *)v248);
    case 594LL:
      v218 = v2542 + 8;
      v219 = (char *)v2544 + v218;
      if ( (unsigned int)v218 > 0x2F )
        v219 = v2543;
      return (char *)(unsigned __int8)sub_3910B0(
                                        *(_QWORD *)((char *)v2544 + v2542),
                                        *(_QWORD *)v219,
                                        v2542,
                                        v218,
                                        a5,
                                        a6,
                                        v2535.m128i_i32[0],
                                        v2535.m128i_i32[2],
                                        v2536.m128i_i32[0],
                                        v2536.m128i_i32[2],
                                        v2537.m128i_i32[0],
                                        v2537.m128i_i32[2],
                                        *(_DWORD *)v2538,
                                        *(_DWORD *)&v2538[8],
                                        *(_DWORD *)&v2538[16],
                                        v2539,
                                        *(_DWORD *)v2540,
                                        *(_DWORD *)&v2540[8],
                                        *(_DWORD *)&v2540[16],
                                        *(_DWORD *)&v2540[24],
                                        *(_DWORD *)&v2540[32],
                                        *(_DWORD *)&v2540[40],
                                        v2541,
                                        v2542,
                                        (char)v2543,
                                        (_DWORD)v2544,
                                        v2545.m128i_i32[0],
                                        v2545.m128i_i32[2],
                                        v2546,
                                        v2547,
                                        v2548,
                                        v2549,
                                        v2550,
                                        v2551,
                                        v2552);
    case 595LL:
      v234 = v2542;
      v235 = v2542 + 8;
      v2542 = v235;
      v236 = *(_QWORD *)((char *)v2544 + v234);
      if ( (unsigned int)v235 > 0x2F )
      {
        v2306 = v2543;
        v239 = v2543 + 8;
        v2543 += 8;
        v238 = *(_QWORD *)v2306;
      }
      else
      {
        v237 = v234 + 16;
        v238 = *(_QWORD *)((char *)v2544 + v235);
        if ( (unsigned int)v237 > 0x2F )
          v239 = v2543;
        else
          v239 = (char *)v2544 + v237;
      }
      return (char *)(unsigned __int8)sub_391030(v236, v238, *(_QWORD *)v239);
    case 596LL:
      v185 = v2542;
      v186 = v2542 + 8;
      v2542 = v186;
      v187 = *(_QWORD *)((char *)v2544 + v185);
      if ( (unsigned int)v186 > 0x2F )
      {
        v2305 = v2543;
        v190 = v2543 + 8;
        v2543 += 8;
        v189 = *(_QWORD *)v2305;
      }
      else
      {
        v188 = v185 + 16;
        v189 = *(_QWORD *)((char *)v2544 + v186);
        if ( (unsigned int)v188 > 0x2F )
          v190 = v2543;
        else
          v190 = (char *)v2544 + v188;
      }
      return (char *)(unsigned __int8)sub_391B30(v187, v189, *(unsigned int *)v190);
    case 597LL:
      v135 = v2542;
      v136 = v2542 + 8;
      v2542 = v136;
      v137 = *(_QWORD *)((char *)v2544 + v135);
      if ( (unsigned int)v136 > 0x2F )
      {
        v2316 = v2543;
        v140 = v2543 + 8;
        v2543 += 8;
        v139 = *(_QWORD *)v2316;
      }
      else
      {
        v138 = v135 + 16;
        v139 = *(_QWORD *)((char *)v2544 + v136);
        if ( (unsigned int)v138 > 0x2F )
          v140 = v2543;
        else
          v140 = (char *)v2544 + v138;
      }
      return (char *)(unsigned __int8)sub_392080(v137, v139, *(unsigned int *)v140);
    case 598LL:
      v133 = v2542 + 8;
      v134 = (char *)v2544 + v133;
      if ( (unsigned int)v133 > 0x2F )
        v134 = v2543;
      return (char *)(unsigned __int8)sub_3929A0(*(_QWORD *)((char *)v2544 + v2542), *(_QWORD *)v134);
    case 599LL:
      v131 = v2542 + 8;
      v132 = (char *)v2544 + v131;
      if ( (unsigned int)v131 > 0x2F )
        v132 = v2543;
      return (char *)(unsigned __int8)sub_392300(*(_QWORD *)((char *)v2544 + v2542), *(_QWORD *)v132);
    case 600LL:
      v129 = v2542 + 8;
      v130 = (char *)v2544 + v129;
      if ( (unsigned int)v129 > 0x2F )
        v130 = v2543;
      return (char *)(unsigned __int8)sub_3962E0(
                                        *(_QWORD *)((char *)v2544 + v2542),
                                        *(_DWORD *)v130,
                                        v2542,
                                        v129,
                                        a5,
                                        a6,
                                        v2535.m128i_i32[0],
                                        v2535.m128i_i32[2],
                                        v2536.m128i_i64[0],
                                        v2536.m128i_i32[2],
                                        v2537.m128i_i32[0],
                                        v2537.m128i_i64[1],
                                        *(__int64 *)v2538,
                                        *(_DWORD *)&v2538[8],
                                        *(_DWORD *)&v2538[16],
                                        v2539,
                                        *(__int64 *)v2540,
                                        *(__int64 *)&v2540[8],
                                        *(_DWORD *)&v2540[16],
                                        *(_DWORD *)&v2540[24],
                                        *(__int64 *)&v2540[32]);
    case 601LL:
      v167 = v2542;
      v168 = v2542 + 8;
      v2542 = v168;
      v169 = *(_QWORD *)((char *)v2544 + v167);
      if ( (unsigned int)v168 > 0x2F )
      {
        v2302 = v2543;
        v172 = v2543 + 8;
        v2543 += 8;
        v171 = *(_DWORD *)v2302;
      }
      else
      {
        v170 = v167 + 16;
        v171 = *(int *)((char *)v2544 + v168);
        if ( (unsigned int)v170 > 0x2F )
          v172 = v2543;
        else
          v172 = (char *)v2544 + v170;
      }
      return (char *)(unsigned __int8)sub_3958C0(
                                        v169,
                                        v171,
                                        *(_DWORD *)v172,
                                        v168,
                                        a5,
                                        a6,
                                        v2535.m128i_i32[0],
                                        v2535.m128i_i32[2],
                                        v2536.m128i_i32[0],
                                        v2536.m128i_i32[2],
                                        v2537.m128i_i32[0],
                                        v2537.m128i_i32[2],
                                        *(_DWORD *)v2538,
                                        *(_DWORD *)&v2538[8],
                                        *(_DWORD *)&v2538[16],
                                        v2539,
                                        *(__int128 *)v2540,
                                        *(__int64 *)&v2540[16]);
    case 602LL:
      return (char *)(unsigned __int8)sub_387350(*(_QWORD *)((char *)v2544 + v2542));
    case 603LL:
      v161 = v2542;
      v162 = v2542 + 8;
      v2542 = v162;
      v163 = *(_QWORD *)((char *)v2544 + v161);
      if ( (unsigned int)v162 > 0x2F )
      {
        v2324 = v2543;
        v166 = v2543 + 8;
        v2543 += 8;
        v165 = *(_QWORD *)v2324;
      }
      else
      {
        v164 = v161 + 16;
        v165 = *(_QWORD *)((char *)v2544 + v162);
        if ( (unsigned int)v164 > 0x2F )
          v166 = v2543;
        else
          v166 = (char *)v2544 + v164;
      }
      return (char *)(int)sub_386790(v163, v165, *(unsigned int *)v166);
    case 604LL:
      v159 = v2542 + 8;
      v160 = (char *)v2544 + v159;
      if ( (unsigned int)v159 > 0x2F )
        v160 = v2543;
      return (char *)(unsigned __int8)sub_38A970(*(_QWORD *)((char *)v2544 + v2542), *(_QWORD *)v160);
    case 605LL:
      return (char *)(unsigned __int8)sub_38AAE0(*(_QWORD *)((char *)v2544 + v2542));
    case 606LL:
      return (char *)(unsigned __int8)sub_38AC60(*(_QWORD *)((char *)v2544 + v2542));
    case 607LL:
      v74 = v2542 + 8;
      v75 = (char *)v2544 + v74;
      if ( (unsigned int)v74 > 0x2F )
        v75 = v2543;
      return (char *)(unsigned __int8)sub_39B150(*(_QWORD *)((char *)v2544 + v2542), *(unsigned int *)v75);
    case 608LL:
      return (char *)(unsigned __int8)sub_39B220(*(_QWORD *)((char *)v2544 + v2542));
    case 609LL:
      return (char *)(unsigned __int8)sub_39B480(*(_QWORD *)((char *)v2544 + v2542));
    case 610LL:
      return (char *)(unsigned __int8)sub_39B550(*(_QWORD *)((char *)v2544 + v2542));
    case 611LL:
      return (char *)(unsigned __int8)sub_39B5A0(*(_QWORD *)((char *)v2544 + v2542));
    case 612LL:
      v41 = v2542 + 8;
      v42 = (char *)v2544 + v41;
      if ( (unsigned int)v41 > 0x2F )
        v42 = v2543;
      return (char *)(unsigned __int8)sub_38AF50(*(_QWORD *)((char *)v2544 + v2542), *(_DWORD *)v42 != 0);
    case 613LL:
      v34 = v2542 + 8;
      v35 = (char *)v2544 + v34;
      if ( (unsigned int)v34 > 0x2F )
        v35 = v2543;
      return (char *)(unsigned __int8)sub_38B040(*(_QWORD *)((char *)v2544 + v2542), *(_DWORD *)v35 != 0);
    case 614LL:
      v32 = v2542 + 8;
      v33 = (char *)v2544 + v32;
      if ( (unsigned int)v32 > 0x2F )
        v33 = v2543;
      return (char *)(unsigned __int8)sub_391EF0(*(_QWORD *)((char *)v2544 + v2542), *(_DWORD *)v33 != 0);
    case 615LL:
      v50 = v2542;
      v51 = v2542 + 8;
      v2542 = v51;
      v52 = *(_QWORD *)((char *)v2544 + v50);
      if ( (unsigned int)v51 > 0x2F )
      {
        v2298 = v2543;
        v55 = v2543 + 8;
        v2543 += 8;
        v54 = *(_QWORD *)v2298;
      }
      else
      {
        v53 = v50 + 16;
        v54 = *(_QWORD *)((char *)v2544 + v51);
        v55 = (char *)v2544 + v53;
        if ( (unsigned int)v53 > 0x2F )
          v55 = v2543;
      }
      return (char *)(int)sub_38BDB0(v52, v54, *(_QWORD *)v55);
    case 616LL:
      v30 = v2542 + 8;
      v31 = (__int64 *)((char *)v2544 + v30);
      if ( (unsigned int)v30 > 0x2F )
        v31 = (__int64 *)v2543;
      return (char *)sub_255920(*(_QWORD *)((char *)v2544 + v2542), *v31);
    case 617LL:
      v109 = v2542;
      v110 = v2542 + 8;
      v2542 = v110;
      v111 = *(_QWORD *)((char *)v2544 + v109);
      if ( (unsigned int)v110 > 0x2F )
      {
        v2303 = (__int64 *)v2543;
        v114 = (__int64 *)(v2543 + 8);
        v2543 += 8;
        v113 = *v2303;
      }
      else
      {
        v112 = v109 + 16;
        v113 = *(_QWORD *)((char *)v2544 + v110);
        if ( (unsigned int)v112 > 0x2F )
          v114 = (__int64 *)v2543;
        else
          v114 = (__int64 *)((char *)v2544 + v112);
      }
      return (char *)sub_65730(v111, v113, *v114);
    case 618LL:
      v56 = v2542;
      v57 = v2542 + 8;
      v2542 = v57;
      v58 = *(_QWORD *)((char *)v2544 + v56);
      if ( (unsigned int)v57 > 0x2F )
      {
        v2301 = (int *)v2543;
        v61 = (int *)(v2543 + 8);
        v2543 += 8;
        v60 = *v2301;
      }
      else
      {
        v59 = v56 + 16;
        v60 = *(int *)((char *)v2544 + v57);
        if ( (unsigned int)v59 > 0x2F )
          v61 = (int *)v2543;
        else
          v61 = (int *)((char *)v2544 + v59);
      }
      return (char *)(unsigned __int8)sub_65D20(v58, v60, *v61);
    case 619LL:
      sub_2516F0(*(_QWORD *)((char *)v2544 + v2542));
      return nullptr;
    case 622LL:
      v36 = v2542 + 8;
      v37 = *(_QWORD *)((char *)v2544 + v2542);
      if ( (unsigned int)v36 > 0x2F )
      {
        v2296 = (__int64 *)v2543;
        v2520 = (__int64 *)(v2543 + 8);
        v2543 += 8;
        v39 = *v2296;
      }
      else
      {
        v38 = v2542 + 16;
        v39 = *(_QWORD *)((char *)v2544 + v36);
        v2542 = v38;
        if ( (unsigned int)v38 <= 0x2F )
        {
          v40 = *(_QWORD *)((char *)v2544 + v38);
          return (char *)(unsigned __int8)sub_314E50(v37, v39, v40);
        }
        v2520 = (__int64 *)v2543;
      }
      v2543 = (char *)(v2520 + 1);
      v40 = *v2520;
      return (char *)(unsigned __int8)sub_314E50(v37, v39, v40);
    case 623LL:
      v45 = v2542 + 8;
      v46 = *(_QWORD *)((char *)v2544 + v2542);
      if ( (unsigned int)v45 > 0x2F )
      {
        v2299 = (__int64 *)v2543;
        v2521 = (__int64 *)(v2543 + 8);
        v2543 += 8;
        v48 = *v2299;
      }
      else
      {
        v47 = v2542 + 16;
        v48 = *(_QWORD *)((char *)v2544 + v45);
        v2542 = v47;
        if ( (unsigned int)v47 <= 0x2F )
        {
          v49 = *(_QWORD *)((char *)v2544 + v47);
          return (char *)(unsigned __int8)sub_314EC0(v46, v48, v49);
        }
        v2521 = (__int64 *)v2543;
      }
      v2543 = (char *)(v2521 + 1);
      v49 = *v2521;
      return (char *)(unsigned __int8)sub_314EC0(v46, v48, v49);
    case 624LL:
      v43 = v2542 + 8;
      v44 = (__int64 *)((char *)v2544 + v43);
      if ( (unsigned int)v43 > 0x2F )
        v44 = (__int64 *)v2543;
      return (char *)(unsigned __int8)sub_7D1F0(*(__int64 **)((char *)v2544 + v2542), *v44);
    case 625LL:
      v24 = v2542;
      v25 = v2542 + 8;
      v2542 = v25;
      v26 = *(_QWORD *)((char *)v2544 + v24);
      if ( (unsigned int)v25 > 0x2F )
      {
        v2297 = (__int64 *)v2543;
        v29 = (__int64 *)(v2543 + 8);
        v2543 += 8;
        v28 = *v2297;
      }
      else
      {
        v27 = v24 + 16;
        v28 = *(_QWORD *)((char *)v2544 + v25);
        if ( (unsigned int)v27 > 0x2F )
          v29 = (__int64 *)v2543;
        else
          v29 = (__int64 *)((char *)v2544 + v27);
      }
      return (char *)sub_82680(v26, v28, *v29);
    case 626LL:
      v22 = v2542 + 8;
      v23 = (__int64 *)((char *)v2544 + v22);
      if ( (unsigned int)v22 > 0x2F )
        v23 = (__int64 *)v2543;
      sub_319F70(*(_QWORD *)((char *)v2544 + v2542), *v23, v2542, v22, a5, a6);
      return nullptr;
    case 627LL:
      v20 = v2542 + 8;
      v21 = (char *)v2544 + v20;
      if ( (unsigned int)v20 > 0x2F )
        v21 = v2543;
      return (char *)(unsigned __int8)sub_391720(*(_QWORD *)((char *)v2544 + v2542), *(_QWORD *)v21);
    default:
      return nullptr;
  }
}

