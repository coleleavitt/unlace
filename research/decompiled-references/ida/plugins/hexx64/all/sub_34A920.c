__m128i *__fastcall sub_34A920(
        __int64 a1,
        _UNKNOWN ***a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD),
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        char a14)
{
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 *v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rsi
  char *v21; // rax
  __int64 v22; // rbx
  __m128i v23; // xmm0
  __int64 v24; // rdi
  __m128i *result; // rax
  __int64 v26; // rcx
  __int64 *v27; // rax
  __int64 v28; // rcx
  __int64 *v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 *v35; // rax
  __int64 v36; // rcx
  __int64 *v37; // rax
  __int64 v38; // rcx
  char *v39; // rax
  __int64 v40; // rcx
  char *v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // rsi
  __int64 v46; // r8
  __int64 v47; // rcx
  char *v48; // rax
  __int64 v49; // rcx
  __int64 *v50; // rax
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // rcx
  __int64 v54; // rsi
  __int64 v55; // r8
  unsigned int v56; // edx
  __int64 v57; // rcx
  __int64 v58; // rdi
  __int64 v59; // rdx
  __int64 v60; // rsi
  __int64 *v61; // rax
  unsigned int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // rdi
  __int64 v65; // rax
  int v66; // esi
  int *v67; // rax
  __int64 v68; // rcx
  char *v69; // rax
  __int64 v70; // rcx
  __int64 *v71; // rax
  unsigned int v72; // edx
  __int64 v73; // rsi
  __int64 *v74; // rbx
  __int64 v75; // rcx
  __int64 v76; // rsi
  __int64 *v77; // rax
  __int64 v78; // rbp
  __m128i v79; // xmm0
  __int64 v80; // rdi
  __int64 v81; // rdi
  __int64 v82; // rcx
  int *v83; // rax
  unsigned int v84; // eax
  __int64 v85; // rcx
  __int64 v86; // rdi
  __int64 v87; // rax
  const __m128i *v88; // rsi
  const char **v89; // rax
  unsigned int v90; // eax
  __int64 v91; // rcx
  __int64 v92; // rdi
  __int64 v93; // rax
  unsigned __int64 *v94; // rsi
  int *v95; // rax
  unsigned int v96; // eax
  __int64 v97; // rcx
  __int64 v98; // rdi
  __int64 v99; // rax
  __int64 *v100; // rsi
  const char **v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rbx
  __int64 *v104; // rax
  __int64 v105; // rbp
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rbx
  __int64 *v109; // rax
  __int64 v110; // rbp
  __int64 v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rbx
  __int64 *v114; // rax
  __int64 v115; // rbp
  __int64 v116; // rax
  unsigned int v117; // eax
  __int64 v118; // rcx
  __int64 v119; // rdi
  __int64 v120; // rax
  __int64 v121; // rsi
  __int64 *v122; // rax
  __int64 v123; // rax
  unsigned int v124; // eax
  __int64 v125; // rcx
  __int64 **v126; // rbp
  __int64 v127; // rax
  _DWORD *v128; // r12
  int *v129; // rax
  int v130; // r13d
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v137; // rcx
  __int32 *v138; // rax
  __int64 v139; // rcx
  __int64 *v140; // rax
  __int64 v141; // rcx
  unsigned __int64 *v142; // rax
  unsigned int v143; // eax
  __int64 v144; // rdi
  __int64 v145; // rcx
  __int64 **v146; // rax
  __int64 v147; // rbx
  __int64 v148; // rax
  __int64 v149; // rcx
  char *v150; // rax
  unsigned int v151; // eax
  __int64 v152; // rsi
  __int64 v153; // rdi
  __int64 v154; // rsi
  __int64 v155; // rax
  char *v156; // rax
  const __m128i *v157; // roff
  unsigned int v158; // eax
  char v159; // si
  __int64 v160; // rax
  char *v161; // rax
  const __m128i *v162; // roff
  __int64 v163; // rcx
  __m128i **v164; // rax
  unsigned int v165; // eax
  __int64 v166; // rcx
  __int64 v167; // rdi
  __int64 v168; // rax
  unsigned __int64 v169; // rsi
  int *v170; // rax
  unsigned int v171; // eax
  __int64 v172; // rcx
  __int64 v173; // rdi
  __int64 v174; // rax
  __int64 v175; // rsi
  int *v176; // rax
  __int64 v177; // rax
  __int64 v178; // rcx
  unsigned __int64 v179; // rbx
  char *v180; // rax
  char v181; // bp
  __int64 v182; // rax
  __int64 v183; // rcx
  __int64 *v184; // rax
  __int64 v185; // rcx
  char *v186; // rax
  __int64 v187; // rcx
  char *v188; // rax
  unsigned int v189; // eax
  __int64 v190; // rcx
  __int64 v191; // rdi
  __int64 v192; // rax
  __int64 v193; // rsi
  int *v194; // rax
  unsigned int v195; // eax
  __int64 v196; // rcx
  __int64 v197; // rdi
  __int64 v198; // r8
  _BYTE *v199; // rsi
  __int64 v200; // rcx
  int v201; // r10d
  __int64 v202; // r8
  char v203; // cl
  __int64 v204; // rax
  __int64 v205; // r8
  __int64 v206; // r9
  __int64 *v207; // rax
  unsigned int v208; // eax
  __int64 v209; // rcx
  __int64 v210; // rbx
  __int64 v211; // rax
  __int64 v212; // rbp
  char *v213; // rax
  _QWORD *v214; // r12
  __int64 v215; // rax
  __int64 v216; // rcx
  __int64 *v217; // rax
  __int64 v218; // rbx
  __int64 v219; // rax
  __int64 v220; // rbx
  __int64 v221; // rax
  __int64 v222; // rcx
  __int64 *v223; // rax
  __int64 v224; // rcx
  __int64 *v225; // rax
  unsigned int v226; // eax
  __int64 v227; // rsi
  __int64 v228; // rdi
  __int64 v229; // rcx
  __int64 v230; // rsi
  __int64 v231; // rax
  const char *v232; // r8
  char *v233; // rax
  __int64 v234; // rcx
  __int64 *v235; // rax
  __int64 v236; // rcx
  int *v237; // rax
  unsigned int v238; // eax
  __int64 v239; // rcx
  __int64 v240; // rdi
  __int64 v241; // rax
  __int64 v242; // rsi
  __int64 *v243; // rax
  __int64 v244; // rcx
  char *v245; // rax
  __int64 v246; // rcx
  __int64 v247; // rbx
  __int64 *v248; // rax
  __int64 v249; // rbp
  __int64 v250; // rax
  __int64 v251; // rcx
  __int64 *v252; // rax
  unsigned int v253; // eax
  __int64 v254; // rcx
  __int64 **v255; // rbx
  __int64 v256; // rsi
  __int64 v257; // rbp
  __int64 v258; // rcx
  __int64 v259; // r12
  __int64 v260; // rax
  int v261; // r13d
  char *v262; // rax
  unsigned int v263; // r14d
  __int64 v264; // rax
  __int64 v265; // rcx
  __int64 **v266; // rax
  unsigned int v267; // eax
  __int64 v268; // rcx
  __int64 v269; // rdi
  __int64 v270; // rax
  int v271; // esi
  char *v272; // rax
  __int64 v273; // rcx
  char *v274; // rax
  unsigned int v275; // eax
  __int64 v276; // rcx
  __int64 v277; // rdi
  __int64 v278; // rax
  __int64 v279; // rsi
  __int64 *v280; // rax
  unsigned int v281; // eax
  __int64 v282; // rcx
  __int64 v283; // rdi
  __int64 v284; // rax
  __int64 v285; // rsi
  char *v286; // rax
  unsigned int v287; // edx
  __int64 v288; // rsi
  __int64 v289; // rdi
  __int64 v290; // rcx
  __int64 *v291; // rsi
  char *v292; // rax
  int v293; // r12d
  __int64 v294; // rax
  __int64 v295; // rcx
  char *v296; // rax
  unsigned __int64 v297; // rbx
  __int64 v298; // rax
  __int64 v299; // rbx
  __int64 v300; // rax
  __int64 v301; // rdx
  __int64 v302; // rcx
  unsigned int v303; // eax
  __int64 v304; // rcx
  __int64 v305; // rdi
  __int64 v306; // rax
  __int64 v307; // rsi
  __int64 *v308; // rax
  __int64 v309; // rbx
  __int64 v310; // rax
  unsigned int v311; // eax
  __int64 v312; // rcx
  __int64 v313; // rdi
  __int64 v314; // rax
  const __m128i *v315; // rsi
  int *v316; // rax
  __int64 v317; // rcx
  char *v318; // rax
  __int64 v319; // rcx
  __int64 **v320; // rax
  unsigned int v321; // eax
  __int64 v322; // rsi
  __int64 v323; // rdi
  __int64 v324; // rcx
  __int64 v325; // rsi
  __int64 v326; // rax
  _DWORD *v327; // r8
  char *v328; // rax
  __int64 v329; // rcx
  __int64 *v330; // rax
  unsigned int v331; // eax
  __int64 v332; // rcx
  __int64 v333; // rbx
  __int64 v334; // rax
  unsigned int v335; // ebp
  char *v336; // rax
  _BOOL4 v337; // r12d
  __int64 v338; // rax
  __int64 v339; // rcx
  __int64 v340; // rbx
  char *v341; // rax
  _QWORD *v342; // rbp
  __int64 v343; // rax
  __int64 v344; // rbx
  __int64 v345; // rax
  __int64 v346; // rdx
  __int64 v347; // rcx
  __int64 v348; // r8
  __int64 v349; // rcx
  unsigned __int64 **v350; // rax
  unsigned int v351; // eax
  __int64 v352; // rsi
  __int64 v353; // rdi
  __int64 v354; // rcx
  __int64 v355; // rsi
  __int64 v356; // r8
  __int64 v357; // r10
  __int64 v358; // rcx
  int v359; // r11d
  __int64 v360; // rax
  int v361; // r8d
  int *v362; // rax
  unsigned int v363; // eax
  unsigned __int64 v364; // rcx
  __int64 v365; // rdi
  __int64 v366; // rax
  unsigned __int64 v367; // rsi
  __int64 **v368; // rax
  __int64 v369; // rcx
  __int64 *v370; // rbx
  __int64 *v371; // rax
  __int64 v372; // rbx
  __int64 v373; // rax
  __int64 v374; // rbx
  __int64 v375; // rax
  __int64 v376; // rcx
  unsigned __int64 *v377; // rax
  __int64 **v378; // rax
  __int64 *v379; // rbx
  __int64 *v380; // rax
  __int64 v381; // rax
  __int64 v382; // rcx
  unsigned __int64 v383; // rbx
  __int64 *v384; // rax
  __int64 v385; // rbp
  __int64 v386; // rax
  __int64 v387; // rcx
  __int64 **v388; // rax
  __int64 **v389; // rax
  __int64 *v390; // rbx
  __int64 v391; // rcx
  __int64 *v392; // rax
  __int64 v393; // rcx
  __int64 **v394; // rax
  __int64 v395; // rcx
  char *v396; // rax
  __int64 v397; // rcx
  char *v398; // rax
  unsigned int v399; // eax
  __int64 v400; // rcx
  __int64 v401; // rdi
  __int64 v402; // rax
  _QWORD *v403; // rsi
  int *v404; // rax
  char *v405; // rax
  _QWORD *v406; // rbx
  unsigned int v407; // edx
  __int64 v408; // rcx
  _QWORD *v409; // rsi
  char *v410; // rax
  _QWORD *v411; // rax
  __int64 v412; // rcx
  int *v413; // rax
  unsigned int v414; // eax
  __int64 v415; // rsi
  __int64 v416; // rdi
  __int64 v417; // rcx
  __int64 v418; // rsi
  __int64 v419; // r8
  __int64 v420; // r10
  __int64 v421; // rcx
  __int64 v422; // r11
  __int64 v423; // rax
  __int64 v424; // r8
  __int64 *v425; // rax
  unsigned int v426; // eax
  __int64 v427; // rcx
  __int64 v428; // rdi
  __int64 v429; // r8
  __int64 v430; // rsi
  __int64 v431; // rcx
  __int64 v432; // r9
  __int64 v433; // rax
  char v434; // cl
  __int64 *v435; // rax
  unsigned int v436; // eax
  __int64 v437; // rsi
  _QWORD *v438; // rdi
  int v439; // esi
  __int64 v440; // rax
  char *v441; // rax
  const __m128i *v442; // roff
  __int64 v443; // rcx
  __int64 *v444; // rax
  unsigned int v445; // eax
  __int64 v446; // rsi
  __int64 v447; // rdi
  __int64 v448; // rcx
  __int64 v449; // rsi
  __int64 v450; // rax
  int v451; // r8d
  int *v452; // rax
  __int64 v453; // rcx
  __int64 v454; // rbx
  char *v455; // rax
  __int64 v456; // rbp
  __int64 v457; // r12
  __int64 v458; // rax
  unsigned int v459; // eax
  __int64 v460; // rsi
  __int64 v461; // rdi
  __int64 v462; // rcx
  unsigned int v463; // esi
  __int64 v464; // rax
  _QWORD *v465; // r8
  unsigned int *v466; // rax
  __int64 v467; // rcx
  unsigned __int64 *v468; // rax
  unsigned int v469; // eax
  __int64 v470; // rcx
  _QWORD *v471; // rdi
  __int64 v472; // rax
  __m128i *v473; // rsi
  char *v474; // rax
  __int64 v475; // rcx
  __int64 *v476; // rbx
  __int64 **v477; // rax
  unsigned int v478; // eax
  __int64 v479; // rcx
  _QWORD *v480; // rdi
  __int64 v481; // rsi
  __int64 *v482; // r9
  __int64 v483; // rcx
  __int64 v484; // rsi
  __int64 v485; // rax
  __int64 v486; // rcx
  __int64 *v487; // rax
  unsigned int v488; // edx
  __int64 v489; // rcx
  unsigned __int64 *v490; // rbx
  __int64 v491; // rsi
  __m128i *v492; // r12
  __int64 *v493; // rsi
  __int64 *v494; // rax
  __int64 v495; // rax
  __int64 v496; // rdx
  __int64 v497; // rbp
  __int64 v498; // rdx
  __int64 v499; // rcx
  char *v500; // rax
  _QWORD *v501; // rsi
  _QWORD *v502; // rdx
  _QWORD *v503; // rcx
  _QWORD *mm; // rax
  char *v505; // rax
  _QWORD *v506; // rbx
  unsigned int v507; // edx
  __int64 v508; // rcx
  _QWORD *v509; // rsi
  char *v510; // rax
  _QWORD *v511; // rax
  unsigned int v512; // edx
  __int64 v513; // rcx
  _QWORD *v514; // rsi
  char *v515; // rax
  __int64 *v516; // rdx
  __int64 v517; // rax
  unsigned int v518; // eax
  __int64 v519; // rcx
  __int64 v520; // rdi
  __int64 v521; // rsi
  unsigned int v522; // r10d
  __int64 v523; // rcx
  int v524; // r11d
  __int64 v525; // rsi
  __int64 v526; // rcx
  __int64 v527; // rax
  __int64 v528; // r8
  __int64 v529; // r9
  int *v530; // rax
  __int64 v531; // rcx
  char *v532; // rax
  unsigned int v533; // eax
  __int64 v534; // rsi
  _QWORD *v535; // rdi
  __int64 v536; // rcx
  __int64 v537; // rsi
  __int64 v538; // rax
  const char *v539; // r8
  int *v540; // rax
  __int64 v541; // rcx
  unsigned __int64 *v542; // rax
  unsigned int v543; // eax
  __int64 v544; // rsi
  __int64 *v545; // rdi
  __int64 v546; // rcx
  __int64 v547; // rsi
  __int64 v548; // r8
  int v549; // r10d
  __int64 v550; // rcx
  unsigned int v551; // r11d
  __int64 v552; // rax
  __int64 v553; // r8
  __int64 v554; // r9
  char *v555; // rax
  unsigned int v556; // eax
  __int64 v557; // rcx
  __int64 *v558; // rbx
  __int64 v559; // rax
  __int64 v560; // rbp
  signed int *v561; // rax
  signed int v562; // r12d
  _DWORD *v563; // rax
  unsigned int v564; // eax
  __int64 v565; // rcx
  __int64 v566; // rdi
  __int64 v567; // rax
  __int64 v568; // rsi
  int *v569; // rax
  unsigned int v570; // eax
  __int64 v571; // rsi
  unsigned __int64 v572; // rbx
  __int64 v573; // rcx
  _BYTE *v574; // rbp
  __int64 v575; // rax
  unsigned int v576; // r12d
  char *v577; // rax
  char v578; // r13
  __int64 v579; // rax
  unsigned int v580; // edx
  __int64 v581; // rcx
  __int64 *v582; // rax
  unsigned int v583; // edx
  __int64 v584; // rcx
  char *v585; // rax
  _QWORD *v586; // r12
  __int64 v587; // rax
  unsigned int v588; // eax
  __int64 v589; // rcx
  unsigned __int64 v590; // rbx
  __int64 v591; // rax
  __int64 v592; // rbp
  int *v593; // rax
  int v594; // r12d
  __int64 v595; // rax
  __int64 v596; // rcx
  int *v597; // rbx
  int *v598; // rax
  int v599; // ebp
  unsigned __int64 *v600; // rax
  __int64 v601; // rcx
  __int64 v602; // rbx
  unsigned int *v603; // rax
  unsigned int v604; // ebp
  unsigned __int64 *v605; // rax
  __int64 v606; // rcx
  __int64 v607; // rbx
  int *v608; // rax
  int v609; // ebp
  unsigned __int64 *v610; // rax
  unsigned int v611; // edx
  __int64 v612; // rcx
  unsigned __int64 **v613; // rdi
  __int64 ***v614; // rax
  __int64 **v615; // rax
  unsigned int v616; // edx
  __int64 v617; // rcx
  _QWORD *v618; // rbx
  __int64 v619; // rsi
  __m128i *v620; // rbp
  const __m128i *v621; // rsi
  __int64 v622; // rdx
  char *v623; // rax
  __int64 v624; // r12
  __m128i v625; // xmm0
  __int64 v626; // rsi
  __m128i v627; // xmm1
  char v628; // al
  __int64 v629; // rdx
  __m128i v630; // xmm1
  __int64 v631; // rcx
  __int64 *v632; // rax
  __int64 v633; // rcx
  __int64 *v634; // rax
  __int64 v635; // rcx
  __int64 *v636; // rax
  unsigned int v637; // eax
  __int64 v638; // rcx
  _QWORD *v639; // rdi
  __int64 v640; // rax
  __int64 v641; // rsi
  __int64 *v642; // rax
  __int64 v643; // rbx
  __int64 v644; // rax
  __int64 v645; // rcx
  int *v646; // rax
  __int64 v647; // rcx
  __int64 *v648; // rax
  unsigned int *v649; // rbx
  unsigned __int64 *v650; // rax
  unsigned int v651; // edx
  __int64 v652; // rcx
  _QWORD *v653; // rsi
  char *v654; // rax
  _QWORD *v655; // rax
  char *v656; // rax
  _QWORD *v657; // rbx
  __int64 v658; // rcx
  __int64 **v659; // rax
  __int64 v660; // rcx
  __int64 **v661; // rax
  unsigned int v662; // edx
  __int64 v663; // rcx
  __int64 *v664; // rbp
  __int64 v665; // rsi
  __int64 v666; // rdi
  __int64 v667; // rcx
  __int64 v668; // rsi
  char *v669; // rax
  __int64 v670; // rbx
  __m128i v671; // xmm0
  __int64 v672; // rdi
  char *v673; // rax
  _QWORD *v674; // rbx
  unsigned int v675; // edx
  __int64 v676; // rcx
  _QWORD *v677; // rsi
  char *v678; // rax
  _QWORD *v679; // rax
  unsigned int v680; // edx
  __int64 v681; // rcx
  _QWORD *v682; // rsi
  char *v683; // rax
  __int64 *v684; // rdx
  __int64 v685; // rax
  __int64 **v686; // rax
  __int64 *v687; // rbx
  unsigned int v688; // edx
  __int64 v689; // rcx
  __int64 *v690; // rbx
  char *v691; // rax
  __int64 v692; // rbp
  __m128i v693; // xmm0
  __int64 v694; // rdi
  unsigned int v695; // eax
  __int64 v696; // rcx
  _DWORD *v697; // rbx
  __int64 v698; // rax
  int v699; // ebp
  char *v700; // rax
  int v701; // r12d
  _QWORD *v702; // rax
  unsigned int v703; // eax
  __int64 v704; // rcx
  __int64 v705; // rbx
  __int64 v706; // rax
  _BYTE *v707; // rbp
  char *v708; // rax
  char v709; // r12
  __int64 v710; // rax
  unsigned int v711; // eax
  __int64 v712; // rcx
  __int64 v713; // rbx
  __int64 v714; // rax
  _BYTE *v715; // rbp
  char *v716; // rax
  char v717; // r12
  __int64 v718; // rax
  __int64 v719; // rcx
  int **v720; // rax
  unsigned int v721; // eax
  __int64 v722; // rsi
  int *v723; // rdi
  __int64 v724; // rcx
  unsigned __int64 v725; // rsi
  __int64 v726; // rax
  int *v727; // r8
  unsigned __int64 *v728; // rax
  int *v729; // rbx
  _QWORD *v730; // rax
  __int64 v731; // rcx
  __int64 *v732; // rax
  __int64 v733; // rcx
  __int64 *v734; // rax
  __int64 v735; // rsi
  __int64 v736; // rdi
  __int64 v737; // rcx
  int v738; // esi
  int v739; // r8d
  char *v740; // rax
  _QWORD *v741; // rsi
  _QWORD *v742; // rdx
  _QWORD *v743; // rcx
  _QWORD *n; // rax
  char *v745; // rax
  _QWORD *v746; // rbx
  unsigned int v747; // edx
  __int64 v748; // rcx
  _QWORD *v749; // rsi
  char *v750; // rax
  _QWORD *v751; // rax
  unsigned int v752; // edx
  __int64 v753; // rcx
  _QWORD *v754; // rsi
  char *v755; // rax
  __int64 *v756; // rdx
  __int64 v757; // rax
  __int64 v758; // rcx
  __int64 *v759; // rax
  __int64 v760; // rcx
  __int64 *v761; // rax
  unsigned int v762; // eax
  __int64 v763; // rcx
  _QWORD *v764; // rdi
  __int64 v765; // rax
  int v766; // esi
  int *v767; // rax
  unsigned int v768; // eax
  __int64 v769; // rcx
  unsigned __int8 *v770; // rbx
  __int64 v771; // rax
  unsigned int *v772; // rbp
  unsigned int *v773; // rax
  unsigned int v774; // r12d
  __int64 v775; // rax
  __int64 v776; // rcx
  char *v777; // rax
  __int64 v778; // rcx
  __int64 *v779; // rax
  unsigned __int64 ***v780; // rax
  unsigned int v781; // edx
  __int64 v782; // rcx
  unsigned __int64 **v783; // rdi
  __int64 ***v784; // rax
  __int64 **v785; // rax
  unsigned int v786; // eax
  __int64 v787; // rsi
  __int64 v788; // rdi
  __int64 v789; // rcx
  __int64 v790; // rsi
  __int64 v791; // rax
  int v792; // r8d
  char *v793; // rax
  unsigned int v794; // eax
  __int64 v795; // rsi
  __int64 v796; // rdi
  __int64 v797; // rcx
  _QWORD *v798; // rsi
  __int64 v799; // rax
  __int64 v800; // r8
  unsigned __int64 *v801; // rax
  __int64 *v802; // rax
  __int64 v803; // rax
  unsigned __int64 ***v804; // rax
  unsigned int v805; // edx
  __int64 v806; // rcx
  unsigned __int64 **v807; // rdi
  __int64 ***v808; // rax
  __int64 **v809; // rax
  unsigned int v810; // edx
  __int64 v811; // rcx
  unsigned __int64 *v812; // r14
  __int64 v813; // rsi
  __m128i *v814; // r13
  __int64 v815; // rcx
  __int64 v816; // rbx
  char *v817; // rax
  __int64 v818; // r15
  __int64 v819; // rax
  __int64 v820; // rax
  __int64 v821; // rcx
  char *v822; // rax
  __int64 v823; // rcx
  __int64 *v824; // rax
  __int64 v825; // rcx
  __int64 *v826; // rax
  __int64 v827; // rcx
  __int64 *v828; // rax
  __int64 v829; // rcx
  __int64 *v830; // rax
  __int64 v831; // rcx
  __int64 *v832; // rax
  __int64 v833; // rcx
  __int64 *v834; // rax
  __int64 v835; // rcx
  __int64 *v836; // rax
  unsigned int v837; // eax
  __int64 v838; // rcx
  __int64 *v839; // rdi
  __int64 v840; // rax
  __int64 v841; // rsi
  __m128i **v842; // rax
  __int64 v843; // rcx
  const void ***v844; // rax
  unsigned int v845; // eax
  __int64 v846; // rsi
  __int64 v847; // rdi
  __int64 v848; // rcx
  __int64 v849; // rsi
  __int64 v850; // r8
  signed int v851; // r10d
  __int64 v852; // rcx
  unsigned __int64 **v853; // r11
  __int64 v854; // rax
  int v855; // r8d
  char *v856; // rax
  unsigned int v857; // edx
  __int64 v858; // rsi
  __int64 v859; // rcx
  int v860; // r12d
  char *v861; // rax
  char v862; // r13
  __int64 v863; // rax
  unsigned int v864; // edx
  __int64 v865; // rcx
  int *v866; // rax
  int v867; // r12d
  __int64 v868; // rax
  __int64 v869; // rcx
  unsigned __int8 **v870; // rax
  unsigned int v871; // edx
  __int64 v872; // rcx
  _QWORD *v873; // rsi
  char *v874; // rax
  __int64 *v875; // rdx
  __int64 v876; // rax
  unsigned int v877; // eax
  __int64 v878; // rcx
  __int64 v879; // rdi
  __int64 v880; // rax
  __int64 v881; // rsi
  __int64 *v882; // rax
  __int64 v883; // rcx
  __int64 *v884; // rax
  unsigned int v885; // eax
  __int64 v886; // rcx
  __int64 v887; // rdi
  __int64 v888; // rax
  _BYTE *v889; // rsi
  char *v890; // rax
  __int64 v891; // rcx
  __int64 *v892; // rax
  unsigned int v893; // eax
  __int64 v894; // rcx
  __int64 v895; // rdi
  __int64 v896; // rax
  __int64 v897; // rsi
  __int64 **v898; // rax
  unsigned int v899; // edx
  __int64 v900; // rsi
  _QWORD *v901; // rdi
  __int64 v902; // rcx
  _QWORD **v903; // rsi
  char *v904; // rax
  _QWORD *v905; // rcx
  unsigned __int64 v906; // rdx
  unsigned __int64 v907; // rax
  unsigned __int64 v908; // rsi
  unsigned int v909; // edx
  __int64 v910; // rcx
  __int64 v911; // rsi
  __int64 v912; // rdi
  __int64 v913; // rcx
  __int64 v914; // rsi
  char *v915; // rax
  unsigned int v916; // edx
  __int64 v917; // rcx
  __int64 v918; // rsi
  __int64 v919; // rdi
  __int64 v920; // rcx
  unsigned int v921; // esi
  __int64 *v922; // rax
  unsigned int v923; // edx
  __int64 v924; // rcx
  __int64 v925; // rsi
  __int64 v926; // rdi
  __int64 v927; // rcx
  __int64 v928; // rsi
  char *v929; // rax
  unsigned int v930; // eax
  __int64 v931; // rcx
  __int64 *v932; // rbx
  __int64 v933; // rax
  __int64 v934; // rdi
  __int64 *v935; // rax
  unsigned int v936; // edx
  __int64 v937; // rcx
  __int64 v938; // rsi
  __int64 v939; // rdi
  __int64 v940; // rcx
  unsigned int v941; // esi
  __int64 *v942; // rax
  unsigned int v943; // eax
  __int64 v944; // rcx
  __int64 *v945; // rbx
  __int64 v946; // rax
  _QWORD *v947; // rdi
  __int64 *v948; // rax
  __int64 v949; // rcx
  unsigned __int64 *v950; // rax
  __int64 v951; // rcx
  __int64 *v952; // rax
  __int64 v953; // rcx
  __int64 *v954; // rax
  __int64 v955; // rcx
  int *v956; // rax
  __int64 v957; // rcx
  signed int *v958; // rax
  unsigned int v959; // edx
  __int64 v960; // rcx
  unsigned __int64 *v961; // rbx
  __int64 v962; // rsi
  __m128i *v963; // rbp
  __int64 v964; // rcx
  __int64 v965; // rsi
  __int64 v966; // rdx
  char *v967; // rax
  __int64 *v968; // r12
  size_t v969; // r13
  __int64 v970; // r8
  void *v971; // rcx
  int v972; // r15d
  __int64 v973; // r14
  __m128i v974; // xmm0
  __int64 v975; // rax
  unsigned int v976; // edx
  __int64 v977; // rsi
  _QWORD *v978; // rbp
  __int64 v979; // rcx
  _QWORD **v980; // r12
  __int64 *v981; // rax
  _QWORD *v982; // rbx
  _QWORD *v983; // rdx
  __int64 v984; // r13
  __int64 v985; // rcx
  __int64 *v986; // rax
  __int64 v987; // rcx
  __int64 *v988; // rax
  __int64 v989; // rcx
  __int64 **v990; // rax
  __int64 v991; // rcx
  __int64 *v992; // rax
  unsigned int v993; // eax
  __int64 v994; // rsi
  __int64 v995; // rdi
  __int64 v996; // rcx
  __int128 *v997; // rsi
  __int64 v998; // rax
  _QWORD *v999; // r8
  __int64 **v1000; // rax
  __int64 v1001; // rcx
  __int64 *v1002; // rax
  int v1003; // ebx
  __int64 v1004; // rax
  int v1005; // ebx
  unsigned int v1006; // eax
  __int64 v1007; // rcx
  __int64 v1008; // rdi
  __int64 v1009; // rsi
  _QWORD *v1010; // r9
  __int64 v1011; // rcx
  __int64 *v1012; // rsi
  __int64 v1013; // rax
  __int64 v1014; // rcx
  char *v1015; // rax
  unsigned int v1016; // edx
  __int64 v1017; // rsi
  _QWORD *v1018; // rbx
  __int64 v1019; // rcx
  __m128i *v1020; // rdi
  __int64 *v1021; // rax
  __int64 v1022; // rsi
  unsigned __int64 ***v1023; // rax
  unsigned int v1024; // edx
  __int64 v1025; // rcx
  unsigned __int64 **v1026; // rdi
  __int64 ***v1027; // rax
  __int64 **v1028; // rax
  __int64 v1029; // rcx
  __int64 v1030; // rbx
  __int64 *v1031; // rax
  __int64 v1032; // rbp
  __int64 v1033; // rax
  unsigned int v1034; // eax
  __int64 v1035; // rsi
  unsigned __int64 v1036; // rdi
  __int64 v1037; // rcx
  __int64 *v1038; // rsi
  __int64 v1039; // rax
  int v1040; // r8d
  unsigned int *v1041; // rax
  unsigned int v1042; // edx
  __int64 v1043; // rcx
  unsigned __int64 *v1044; // rbx
  __int64 v1045; // rsi
  __m128i *v1046; // rdi
  __int64 v1047; // rcx
  __int64 v1048; // rsi
  char *v1049; // rax
  int *v1050; // rax
  int v1051; // edx
  int v1052; // eax
  unsigned int v1053; // edx
  __int64 v1054; // rsi
  _QWORD *v1055; // rbp
  __int64 v1056; // rcx
  _QWORD **v1057; // r12
  __int64 *v1058; // rax
  _QWORD *v1059; // rbx
  _QWORD *v1060; // rdx
  __int64 v1061; // r13
  __int64 v1062; // rcx
  __int64 *v1063; // rax
  __int64 v1064; // rcx
  int *v1065; // rax
  __int64 v1066; // rcx
  char *v1067; // rax
  __int64 v1068; // rcx
  const char **v1069; // rax
  unsigned int v1070; // edx
  __int64 v1071; // rcx
  _QWORD *v1072; // rsi
  char *v1073; // rax
  __int64 *v1074; // rdx
  __int64 v1075; // rax
  __int64 v1076; // rcx
  __int64 **v1077; // rax
  unsigned int v1078; // eax
  __int64 v1079; // rsi
  __int64 v1080; // rdi
  int v1081; // esi
  __int64 v1082; // rax
  char *v1083; // rax
  const __m128i *v1084; // roff
  unsigned int v1085; // eax
  __int64 v1086; // rsi
  __int64 v1087; // rdi
  int v1088; // esi
  __int64 v1089; // rax
  char *v1090; // rax
  const __m128i *v1091; // roff
  unsigned int v1092; // eax
  __int64 v1093; // rcx
  __int64 v1094; // rbx
  __int64 v1095; // rsi
  __int64 v1096; // rbp
  __int64 v1097; // rcx
  int v1098; // r12d
  __int64 v1099; // rax
  __int64 v1100; // r13
  int *v1101; // rax
  int v1102; // r14d
  unsigned __int64 *v1103; // rax
  __int64 v1104; // rcx
  unsigned __int8 **v1105; // rax
  unsigned int v1106; // edx
  __int64 v1107; // rsi
  __int64 v1108; // rbp
  __int64 v1109; // rcx
  __int64 v1110; // r12
  const char *v1111; // r13
  __int64 v1112; // rcx
  char *v1113; // rax
  _DWORD *v1114; // r14
  unsigned int v1115; // eax
  __int64 v1116; // rsi
  __int64 v1117; // rdi
  __int64 v1118; // rcx
  __int64 v1119; // rsi
  __int64 v1120; // rax
  __int64 v1121; // r8
  int *v1122; // rax
  unsigned int v1123; // edx
  __int64 v1124; // rcx
  _QWORD *v1125; // rsi
  char *v1126; // rax
  _QWORD *v1127; // rax
  unsigned int v1128; // edx
  __int64 v1129; // rcx
  _QWORD *v1130; // rsi
  char *v1131; // rax
  __int64 *v1132; // rdx
  __int64 v1133; // rax
  __int64 **v1134; // rax
  __int64 *v1135; // rbx
  __int64 v1136; // rcx
  __int64 *v1137; // rax
  __int64 v1138; // rcx
  __int64 **v1139; // rax
  __int64 v1140; // rcx
  __int64 *v1141; // rax
  unsigned int v1142; // eax
  __int64 v1143; // rcx
  __int64 v1144; // rdi
  __int64 v1145; // rax
  _QWORD *v1146; // rsi
  __int64 *v1147; // rax
  unsigned int v1148; // eax
  __int64 v1149; // rcx
  __int64 v1150; // rdi
  __int64 v1151; // rax
  const char *v1152; // rsi
  char *v1153; // rax
  const __m128i *v1154; // roff
  unsigned int v1155; // edx
  __int64 v1156; // rsi
  _QWORD *v1157; // rbp
  __int64 v1158; // rcx
  _QWORD **v1159; // r13
  __int64 **v1160; // rax
  _QWORD *v1161; // rbx
  _QWORD *v1162; // rdx
  __int64 *v1163; // r12
  char *v1164; // r14
  char *v1165; // r15
  unsigned int v1166; // eax
  unsigned int v1167; // eax
  __int64 v1168; // rcx
  __int64 *v1169; // rax
  __int64 v1170; // rcx
  char *v1171; // rax
  __int64 v1172; // rcx
  int **v1173; // rax
  __int64 v1174; // rcx
  signed int *v1175; // rax
  __int64 v1176; // rcx
  char *v1177; // rax
  unsigned int v1178; // eax
  __int64 v1179; // rcx
  char *v1180; // rdi
  __int64 v1181; // rax
  __int64 *v1182; // rsi
  char *v1183; // rax
  char *v1184; // rax
  _QWORD *v1185; // rbx
  unsigned int v1186; // edx
  __int64 v1187; // rcx
  _QWORD *v1188; // rsi
  char *v1189; // rax
  _QWORD *v1190; // rax
  __int64 v1191; // rcx
  __int64 *v1192; // rax
  __int64 v1193; // rcx
  const void ***v1194; // rax
  unsigned int v1195; // eax
  __int64 v1196; // rcx
  _QWORD *v1197; // rbx
  __int64 v1198; // rax
  _QWORD *v1199; // rbp
  char *v1200; // rax
  int v1201; // r12d
  __int64 v1202; // rax
  __int64 *v1203; // rax
  __int64 v1204; // rax
  unsigned int v1205; // edx
  __int64 v1206; // rcx
  unsigned __int64 **v1207; // rdi
  __int64 ***v1208; // rax
  __int64 **v1209; // rax
  unsigned int v1210; // edx
  __int64 v1211; // rcx
  unsigned __int64 *v1212; // rbx
  __int64 v1213; // rsi
  __m128i *v1214; // r12
  __int64 v1215; // rcx
  __int64 *v1216; // rsi
  __int64 v1217; // rdx
  char *v1218; // rax
  __int64 v1219; // r13
  unsigned __int64 v1220; // rax
  __int64 v1221; // r14
  void *v1222; // rcx
  __m128i v1223; // xmm0
  __int64 v1224; // rdi
  __int64 v1225; // rcx
  char *v1226; // rax
  __int64 v1227; // rcx
  int **v1228; // rax
  __int64 v1229; // rcx
  int **v1230; // rax
  __int64 **v1231; // rax
  __int64 *v1232; // rax
  __int64 v1233; // rdx
  unsigned __int64 v1234; // rax
  __int64 v1235; // rcx
  __int64 *v1236; // rax
  __int64 **v1237; // rax
  __int64 *v1238; // rbx
  __int64 *v1239; // rax
  __int64 v1240; // rax
  __int64 v1241; // rcx
  __int64 *v1242; // rax
  __int64 v1243; // rcx
  __int64 **v1244; // rax
  __int64 v1245; // rcx
  char *v1246; // rax
  __int64 v1247; // rcx
  char *v1248; // rax
  unsigned __int64 ***v1249; // rax
  unsigned int v1250; // edx
  __int64 v1251; // rcx
  unsigned __int64 **v1252; // rdi
  __int64 ***v1253; // rax
  __int64 **v1254; // rax
  __int64 v1255; // rcx
  char *v1256; // rax
  unsigned int v1257; // eax
  __int64 v1258; // rcx
  __int64 v1259; // rbx
  __int64 v1260; // rax
  __int64 v1261; // rbp
  char *v1262; // rax
  char v1263; // r12
  __int64 v1264; // rax
  unsigned int v1265; // eax
  __int64 v1266; // rsi
  __int64 v1267; // rdi
  __int64 v1268; // rcx
  __int64 v1269; // rsi
  __int64 v1270; // rax
  __int64 v1271; // r8
  char *v1272; // rax
  unsigned int v1273; // eax
  __int64 v1274; // rcx
  _QWORD *v1275; // rbx
  __int64 v1276; // rax
  unsigned __int64 v1277; // rbp
  int *v1278; // rax
  int v1279; // r12d
  __int64 v1280; // rax
  unsigned int v1281; // eax
  __int64 v1282; // rsi
  char *v1283; // rbx
  __int64 v1284; // rcx
  unsigned int v1285; // ebp
  __int64 v1286; // rax
  __int64 v1287; // r12
  int *v1288; // rax
  int v1289; // r13d
  unsigned __int64 *v1290; // rax
  unsigned int v1291; // eax
  __int64 v1292; // rcx
  unsigned int **v1293; // rbx
  __int64 v1294; // rax
  int v1295; // ebp
  int *v1296; // rax
  int v1297; // r12d
  unsigned __int64 *v1298; // rax
  __int64 v1299; // rcx
  int *v1300; // rbx
  int *v1301; // rax
  int v1302; // ebp
  unsigned __int64 *v1303; // rax
  __int64 v1304; // rcx
  __int64 **v1305; // rax
  __int64 *v1306; // rbx
  unsigned int v1307; // eax
  __int64 v1308; // rcx
  __int64 v1309; // rdi
  __int64 v1310; // rsi
  __int64 v1311; // r9
  __int64 v1312; // rcx
  __int64 v1313; // rsi
  __int64 v1314; // rax
  int v1315; // ecx
  int *v1316; // rax
  __int64 v1317; // rcx
  int *v1318; // rax
  unsigned int v1319; // eax
  __int64 v1320; // rcx
  _QWORD *v1321; // rdi
  __int64 v1322; // rax
  int v1323; // esi
  int *v1324; // rax
  __int64 v1325; // rcx
  int *v1326; // rax
  unsigned int v1327; // eax
  __int64 v1328; // rsi
  unsigned int *v1329; // rbx
  __int64 v1330; // rcx
  __int64 v1331; // rbp
  __int64 v1332; // rsi
  __int64 v1333; // r12
  __int64 v1334; // rcx
  int **v1335; // r13
  __int64 v1336; // rax
  __m128 **v1337; // r14
  unsigned int *v1338; // rax
  unsigned int v1339; // r15d
  unsigned __int8 *v1340; // rax
  __int64 v1341; // rcx
  __int64 *v1342; // rax
  char *v1343; // rax
  __int64 v1344; // rax
  __int64 v1345; // rcx
  char *v1346; // rax
  __int64 v1347; // rcx
  char **v1348; // rax
  unsigned int v1349; // edx
  __int64 v1350; // rsi
  unsigned __int64 *v1351; // rbp
  __int64 v1352; // rcx
  unsigned __int64 *v1353; // r12
  int **v1354; // rax
  unsigned __int64 v1355; // rbx
  unsigned __int64 v1356; // rdx
  int *v1357; // r13
  __int64 v1358; // rcx
  __int64 *v1359; // rax
  __int64 v1360; // rcx
  int *v1361; // rax
  __int64 v1362; // rcx
  __int64 *v1363; // rax
  unsigned int v1364; // edx
  __int64 v1365; // rcx
  unsigned __int64 **v1366; // rdi
  __int64 ***v1367; // rax
  __int64 **v1368; // rax
  __int64 v1369; // rcx
  __int64 *v1370; // rax
  __int64 v1371; // rcx
  __int64 *v1372; // rax
  unsigned int v1373; // edx
  __int64 v1374; // rsi
  __int64 v1375; // rcx
  unsigned int v1376; // r12d
  int *v1377; // rax
  int v1378; // r13d
  __int64 v1379; // rax
  unsigned int v1380; // edx
  __int64 v1381; // rcx
  int *v1382; // rax
  int v1383; // r12d
  __int64 v1384; // rax
  __int64 v1385; // rbx
  __int64 v1386; // rax
  unsigned int v1387; // ebx
  __int64 v1388; // rax
  unsigned __int64 ***v1389; // rax
  unsigned int v1390; // edx
  __int64 v1391; // rcx
  unsigned __int64 **v1392; // rdi
  __int64 ***v1393; // rax
  __int64 **v1394; // rax
  unsigned int v1395; // eax
  __int64 v1396; // rsi
  __int64 v1397; // rbx
  __int64 v1398; // rcx
  __int64 v1399; // rbp
  __int64 v1400; // rax
  int v1401; // r12d
  int *v1402; // rax
  int v1403; // r13d
  __int64 v1404; // rax
  unsigned int v1405; // eax
  __int64 v1406; // rcx
  __int64 *v1407; // rbx
  __int64 *v1408; // rdi
  __int64 v1409; // rcx
  unsigned __int64 v1410; // rbx
  __int64 *v1411; // rax
  __int64 v1412; // rbp
  __int64 v1413; // rax
  unsigned int v1414; // eax
  __int64 v1415; // rcx
  __int64 v1416; // rbx
  __int64 v1417; // rax
  __int64 v1418; // rbp
  const char **v1419; // rax
  const char *v1420; // r12
  __int64 v1421; // rax
  unsigned int v1422; // eax
  __int64 v1423; // rcx
  unsigned __int64 v1424; // rbx
  __int64 v1425; // rax
  int v1426; // ebp
  __int64 *v1427; // rax
  __int64 v1428; // r12
  __int64 v1429; // rax
  __int64 v1430; // rcx
  __int64 **v1431; // rax
  __int64 v1432; // rcx
  __int64 **v1433; // rax
  unsigned int v1434; // eax
  __int64 v1435; // rcx
  unsigned __int64 *v1436; // rbx
  __int64 v1437; // rax
  __int64 v1438; // rdi
  __int64 *v1439; // rax
  char *v1440; // rax
  _QWORD *v1441; // rbx
  unsigned int v1442; // edx
  __int64 v1443; // rcx
  _QWORD *v1444; // rsi
  char *v1445; // rax
  __int64 *v1446; // rdx
  __int64 v1447; // rax
  unsigned int v1448; // eax
  __int64 v1449; // rsi
  __int64 *v1450; // rdi
  __int64 v1451; // rcx
  _QWORD *v1452; // rsi
  __int64 v1453; // rax
  __int64 *v1454; // r8
  char *v1455; // rax
  char *v1456; // rax
  _QWORD *v1457; // rsi
  _QWORD *v1458; // rdx
  _QWORD *v1459; // rcx
  _QWORD *i; // rax
  char *v1461; // rax
  _QWORD *v1462; // rbx
  unsigned int v1463; // edx
  __int64 v1464; // rcx
  _QWORD *v1465; // rsi
  char *v1466; // rax
  _QWORD *v1467; // rax
  unsigned int v1468; // edx
  __int64 v1469; // rcx
  _QWORD *v1470; // rsi
  char *v1471; // rax
  __int64 *v1472; // rdx
  __int64 v1473; // rax
  __int64 v1474; // rcx
  __int64 *v1475; // rax
  __int64 v1476; // rcx
  char *v1477; // rax
  unsigned int v1478; // eax
  __int64 v1479; // rcx
  __int64 v1480; // rdi
  __int64 v1481; // rax
  __int64 v1482; // rsi
  __int64 *v1483; // rax
  unsigned int v1484; // eax
  __int64 v1485; // rcx
  __int64 v1486; // rdi
  __int64 v1487; // rax
  int v1488; // esi
  int *v1489; // rax
  __int64 v1490; // rcx
  __int64 *v1491; // rax
  __int64 v1492; // rcx
  __int64 *v1493; // rax
  __int64 v1494; // rsi
  __int64 *v1495; // rbx
  __int64 v1496; // rcx
  int v1497; // ebp
  unsigned int v1498; // r12d
  _DWORD *v1499; // rax
  __int64 v1500; // rcx
  unsigned int v1501; // ebx
  char *v1502; // rax
  unsigned int v1503; // ebp
  __int64 v1504; // rax
  unsigned int v1505; // eax
  __int64 v1506; // rcx
  _QWORD *v1507; // rdi
  __int64 v1508; // rsi
  __m128i *v1509; // r9
  __int64 v1510; // rcx
  __int64 *v1511; // rsi
  __int64 v1512; // rax
  __int64 v1513; // rcx
  unsigned int *v1514; // rax
  unsigned int v1515; // eax
  __int64 v1516; // rsi
  _QWORD *v1517; // rdi
  __int64 v1518; // rcx
  __m128i *v1519; // rsi
  __int64 v1520; // rax
  __int64 *v1521; // r8
  unsigned int *v1522; // rax
  char *v1523; // rax
  _QWORD *v1524; // rsi
  _QWORD *v1525; // rdx
  _QWORD *v1526; // rcx
  _QWORD *nn; // rax
  unsigned int v1528; // edx
  __int64 v1529; // rsi
  _QWORD *v1530; // rdi
  __int64 v1531; // rcx
  _QWORD **v1532; // rsi
  char *v1533; // rax
  _QWORD *v1534; // rcx
  unsigned __int64 v1535; // rdx
  __int64 v1536; // rsi
  unsigned __int8 v1537; // al
  unsigned __int8 v1538; // r9
  __int64 v1539; // rbx
  unsigned int v1540; // eax
  __int64 v1541; // rcx
  __int64 v1542; // rdi
  __int64 v1543; // rax
  __int64 *v1544; // rsi
  __int64 *v1545; // rax
  __int64 v1546; // rcx
  unsigned __int64 v1547; // rbx
  __int64 *v1548; // rax
  __int64 v1549; // rbp
  __int64 v1550; // rax
  unsigned int v1551; // eax
  __int64 v1552; // rsi
  __int64 *v1553; // rdi
  __int64 v1554; // rcx
  int *v1555; // rsi
  __int64 v1556; // rax
  int v1557; // r8d
  int *v1558; // rax
  __int64 v1559; // rcx
  __int64 **v1560; // rax
  __int64 v1561; // rcx
  __int64 **v1562; // rax
  unsigned __int64 ***v1563; // rax
  unsigned int v1564; // edx
  __int64 v1565; // rcx
  unsigned __int64 **v1566; // rdi
  __int64 ***v1567; // rax
  __int64 **v1568; // rax
  __int64 *v1569; // rax
  __int64 v1570; // rbp
  __int64 v1571; // rbx
  __int64 v1572; // rcx
  __int64 *v1573; // rbx
  char *v1574; // rax
  unsigned int v1575; // ebp
  __int64 v1576; // rax
  __int64 v1577; // rcx
  int *v1578; // rax
  __int64 v1579; // rcx
  _BYTE *v1580; // rbx
  char *v1581; // rax
  char v1582; // bp
  __int64 v1583; // rax
  char *v1584; // rax
  _QWORD *v1585; // rsi
  _QWORD *v1586; // rdx
  _QWORD *v1587; // rcx
  _QWORD *kk; // rax
  unsigned int v1589; // eax
  __int64 v1590; // rsi
  __int64 v1591; // rdi
  __int64 v1592; // rcx
  __int64 v1593; // rsi
  __int64 v1594; // r8
  __int64 *v1595; // r10
  __int64 v1596; // rcx
  __int64 v1597; // r11
  __int64 v1598; // rax
  unsigned __int64 v1599; // r8
  char *v1600; // rax
  __int64 v1601; // rcx
  __int64 v1602; // rbp
  char *v1603; // rax
  __int64 v1604; // rbx
  __int64 v1605; // rax
  int v1606; // ecx
  __int64 v1607; // rax
  char *v1608; // rax
  _QWORD *v1609; // rsi
  _QWORD *v1610; // rdx
  _QWORD *v1611; // rcx
  _QWORD *k; // rax
  char *v1613; // rax
  _QWORD *v1614; // rbx
  __int64 v1615; // rcx
  __int64 *v1616; // rax
  __int64 v1617; // rcx
  __int64 *v1618; // rax
  __int64 v1619; // rcx
  __m128i **v1620; // rax
  __int64 v1621; // rcx
  __int64 *v1622; // rax
  __int64 v1623; // rcx
  __int64 *v1624; // rax
  unsigned int v1625; // eax
  __int64 v1626; // rcx
  _QWORD *v1627; // rdi
  __int64 v1628; // rax
  __int64 v1629; // rsi
  char *v1630; // rax
  __int64 v1631; // rcx
  unsigned __int64 *v1632; // rax
  __int64 v1633; // rcx
  __int64 **v1634; // rax
  __int64 v1635; // rcx
  unsigned __int8 *v1636; // rbx
  char *v1637; // rax
  unsigned int v1638; // ebp
  unsigned __int64 *v1639; // rax
  unsigned int v1640; // edx
  __int64 v1641; // rsi
  _QWORD *v1642; // rdi
  __int64 v1643; // rcx
  _QWORD **v1644; // rsi
  char *v1645; // rax
  _QWORD *v1646; // rcx
  unsigned __int64 v1647; // rdx
  unsigned __int64 *v1648; // rax
  unsigned __int64 v1649; // rsi
  __int64 v1650; // rcx
  __int64 *v1651; // rax
  unsigned int v1652; // eax
  __int64 v1653; // rcx
  __int64 *v1654; // rdi
  __int64 v1655; // rax
  int v1656; // esi
  int *v1657; // rax
  __int64 v1658; // rcx
  int *v1659; // rax
  __int64 v1660; // rcx
  __int64 *v1661; // rax
  __int64 v1662; // rcx
  __int64 *v1663; // rax
  __int64 **v1664; // rax
  __int64 *v1665; // rbx
  __int64 v1666; // rcx
  char *v1667; // rax
  unsigned int v1668; // eax
  __int64 v1669; // rcx
  _DWORD *v1670; // rdi
  __int64 v1671; // rax
  _DWORD *v1672; // rsi
  __int64 **v1673; // rax
  __int64 v1674; // rcx
  char *v1675; // rax
  unsigned int v1676; // eax
  __int64 v1677; // rcx
  __int64 v1678; // rsi
  __int64 v1679; // rax
  __m128i *v1680; // rdi
  char *v1681; // rax
  __int64 v1682; // rcx
  __int64 *v1683; // rax
  unsigned int v1684; // edx
  __int64 v1685; // rcx
  _QWORD *v1686; // rsi
  char *v1687; // rax
  __int64 *v1688; // rdx
  __int64 v1689; // rax
  __int64 v1690; // rcx
  unsigned __int64 ***v1691; // rax
  unsigned int v1692; // eax
  __int64 v1693; // rcx
  __int64 *v1694; // rdi
  __int64 v1695; // rax
  unsigned __int64 v1696; // rsi
  unsigned __int64 *v1697; // rax
  unsigned int v1698; // eax
  __int64 v1699; // rsi
  __int64 v1700; // rdi
  __int64 v1701; // rcx
  __int64 *v1702; // rsi
  __int64 v1703; // rax
  __int64 v1704; // r8
  char *v1705; // rax
  __int64 *v1706; // rax
  __int64 v1707; // rax
  __int64 v1708; // rcx
  __int64 *v1709; // rax
  unsigned int v1710; // eax
  __int64 v1711; // rcx
  unsigned __int64 v1712; // rdi
  __int64 v1713; // rax
  __int64 *v1714; // rsi
  unsigned int *v1715; // rax
  __int64 *v1716; // rax
  __int64 v1717; // rax
  __int64 v1718; // rcx
  __int64 v1719; // rbx
  char *v1720; // rax
  char v1721; // bp
  __int64 v1722; // rax
  __int64 v1723; // rcx
  __int64 **v1724; // rax
  unsigned int v1725; // eax
  __int64 v1726; // rcx
  __int64 *v1727; // rdi
  __int64 v1728; // rax
  int v1729; // esi
  int *v1730; // rax
  unsigned int v1731; // edx
  __int64 v1732; // rcx
  unsigned __int64 *v1733; // rbx
  __int64 v1734; // rsi
  __m128i *v1735; // rbp
  unsigned int *v1736; // rsi
  __int64 *v1737; // rax
  __int64 v1738; // rax
  __int64 v1739; // rdx
  __m128i v1740; // xmm0
  __int64 v1741; // rcx
  __int64 *v1742; // rax
  __int64 v1743; // rcx
  char *v1744; // rax
  unsigned int v1745; // eax
  __int64 v1746; // rsi
  __int64 v1747; // rdi
  bool v1748; // zf
  char v1749; // si
  __int64 v1750; // rax
  char *v1751; // rax
  const __m128i *v1752; // roff
  __int64 v1753; // rcx
  char *v1754; // rax
  unsigned int v1755; // eax
  __int64 v1756; // rsi
  __int64 *v1757; // rbx
  __int64 v1758; // rcx
  __int64 *v1759; // rdi
  __int64 v1760; // rax
  int v1761; // esi
  char *v1762; // rax
  unsigned int v1763; // eax
  __int64 v1764; // rcx
  unsigned __int64 v1765; // rdi
  __int64 v1766; // rax
  char *v1767; // rsi
  unsigned int *v1768; // rax
  unsigned int v1769; // eax
  __int64 v1770; // rsi
  __int64 v1771; // rdi
  __int64 v1772; // rcx
  _QWORD *v1773; // rsi
  __int64 v1774; // rax
  _QWORD *v1775; // r8
  unsigned __int64 *v1776; // rax
  char *v1777; // rax
  _QWORD *v1778; // rsi
  _QWORD *v1779; // rdx
  _QWORD *v1780; // rcx
  _QWORD *j; // rax
  __int64 v1782; // rcx
  __m128i **v1783; // rax
  unsigned int v1784; // eax
  __int64 v1785; // rsi
  __int64 v1786; // rdi
  __int64 v1787; // rcx
  __int64 v1788; // rsi
  __int64 v1789; // rax
  __int64 v1790; // r8
  int *v1791; // rax
  __int64 *v1792; // rax
  __int64 v1793; // rax
  unsigned __int64 ***v1794; // rax
  __int64 **v1795; // rax
  __int64 *v1796; // rbx
  unsigned int v1797; // eax
  __int64 v1798; // rcx
  unsigned __int64 *v1799; // rbx
  __int64 v1800; // rax
  _QWORD *v1801; // rdi
  unsigned __int64 *v1802; // rax
  __int64 v1803; // rcx
  unsigned int *v1804; // rax
  __int64 v1805; // rcx
  __int64 v1806; // rbx
  char *v1807; // rax
  unsigned int v1808; // ebp
  unsigned __int64 *v1809; // rax
  __int64 v1810; // rcx
  __int64 v1811; // rcx
  int *v1812; // rax
  __int64 **v1813; // rax
  __int64 *v1814; // rbx
  __int64 *v1815; // rax
  __int64 v1816; // rax
  __int64 v1817; // rcx
  __int64 *v1818; // rax
  __int64 v1819; // rcx
  __int64 v1820; // rbx
  char *v1821; // rax
  int v1822; // r14d
  __int64 v1823; // rax
  __int64 v1824; // rcx
  __int64 v1825; // rbx
  __int64 **v1826; // rax
  __int64 *v1827; // rbp
  __int64 v1828; // rax
  char *v1829; // rax
  _QWORD *v1830; // rsi
  _QWORD *v1831; // rdx
  _QWORD *v1832; // rcx
  _QWORD *ii; // rax
  __int64 v1834; // rcx
  int *v1835; // rax
  __int64 v1836; // rcx
  __int64 **v1837; // rax
  __int64 v1838; // rcx
  __int64 *v1839; // rax
  __int64 v1840; // rcx
  _DWORD *v1841; // rbx
  __int64 *v1842; // rax
  __int64 v1843; // rbp
  __int64 v1844; // rax
  __int64 v1845; // rcx
  __int64 *v1846; // rax
  unsigned int v1847; // eax
  __int64 v1848; // rcx
  __int64 v1849; // rdi
  __int64 v1850; // rsi
  unsigned __int64 **v1851; // r9
  __int64 v1852; // rcx
  __int64 v1853; // rsi
  __int64 v1854; // rax
  __int64 v1855; // rcx
  unsigned int *v1856; // rax
  unsigned int v1857; // eax
  __int64 v1858; // rcx
  __int64 v1859; // rdi
  __int64 v1860; // rsi
  unsigned __int64 **v1861; // r9
  __int64 v1862; // rcx
  __int64 v1863; // rsi
  __int64 v1864; // rax
  __int64 v1865; // rcx
  unsigned int *v1866; // rax
  unsigned int v1867; // edx
  __int64 v1868; // rsi
  _QWORD *v1869; // rdi
  __int64 v1870; // rcx
  _QWORD **v1871; // rsi
  char *v1872; // rax
  _QWORD *v1873; // rcx
  unsigned __int64 v1874; // rdx
  unsigned __int64 v1875; // rax
  unsigned __int64 v1876; // rsi
  __int64 v1877; // rcx
  __int64 v1878; // rbx
  char *v1879; // rax
  char v1880; // bp
  __int64 v1881; // rax
  unsigned int v1882; // edx
  __int64 v1883; // rcx
  __int64 *v1884; // rax
  __int64 *v1885; // rax
  __int64 v1886; // rax
  unsigned int v1887; // eax
  __int64 v1888; // rcx
  __int64 *v1889; // rdi
  __int64 v1890; // rsi
  __int64 *v1891; // r9
  __int64 v1892; // rcx
  _QWORD *v1893; // rsi
  __int64 v1894; // rax
  __int64 v1895; // rcx
  char *v1896; // rax
  __int64 v1897; // rcx
  int *v1898; // rax
  __int64 v1899; // rcx
  int *v1900; // rbx
  char *v1901; // rax
  int v1902; // ebp
  __int64 v1903; // rax
  __int64 v1904; // rcx
  __int64 *v1905; // rax
  __int64 **v1906; // rax
  __int64 *v1907; // rbx
  __int64 *v1908; // rax
  __int64 v1909; // rax
  __int64 v1910; // rcx
  __int64 *v1911; // rax
  unsigned int v1912; // eax
  __int64 v1913; // rcx
  __int64 v1914; // rbx
  __int64 v1915; // rax
  _BYTE *v1916; // rbp
  __int64 *v1917; // rax
  __int64 v1918; // r12
  __int64 v1919; // rax
  unsigned __int64 ***v1920; // rax
  __int64 v1921; // rcx
  __int64 *v1922; // rax
  __int64 v1923; // rcx
  __int64 *v1924; // rax
  __int64 v1925; // rcx
  char *v1926; // rax
  __int64 v1927; // rcx
  char *v1928; // rax
  unsigned int v1929; // edx
  __int64 v1930; // rcx
  unsigned __int64 *v1931; // rbx
  __int64 v1932; // rsi
  __m128i *v1933; // r12
  __int64 v1934; // rcx
  __int64 *v1935; // rsi
  __int64 v1936; // rdx
  char *v1937; // rax
  __int64 v1938; // r13
  unsigned __int64 v1939; // rax
  __int64 v1940; // r14
  void *v1941; // rcx
  __m128i v1942; // xmm0
  unsigned int v1943; // eax
  __int64 v1944; // rcx
  __int64 v1945; // rdi
  __int64 v1946; // rax
  int v1947; // esi
  __int64 *v1948; // rax
  unsigned int v1949; // eax
  __int64 v1950; // rcx
  __int64 *v1951; // rbx
  __int64 v1952; // rax
  _QWORD *v1953; // rdi
  __int64 *v1954; // rax
  unsigned int v1955; // eax
  __int64 v1956; // rcx
  __int64 v1957; // rdi
  __int64 v1958; // rax
  int v1959; // esi
  unsigned __int64 *v1960; // rax
  char *v1961; // rax
  _QWORD *v1962; // rsi
  _QWORD *v1963; // rdx
  _QWORD *v1964; // rcx
  _QWORD *m; // rax
  unsigned int v1966; // eax
  __int64 v1967; // rcx
  __int64 *v1968; // rdi
  __int64 v1969; // rax
  __int64 v1970; // rsi
  __int64 *v1971; // rax
  __int64 v1972; // rcx
  char *v1973; // rax
  __int64 v1974; // rcx
  __int64 *v1975; // rax
  __int64 v1976; // rcx
  char *v1977; // rax
  __int64 v1978; // rcx
  __int64 **v1979; // rax
  unsigned __int64 ***v1980; // rax
  __int64 v1981; // rcx
  int *v1982; // rax
  __int64 v1983; // rcx
  __int64 *v1984; // rax
  __int64 v1985; // rcx
  __int64 *v1986; // rax
  unsigned int v1987; // eax
  __int64 v1988; // rcx
  __int64 v1989; // rdi
  __int64 v1990; // rax
  int v1991; // esi
  int *v1992; // rax
  __int64 v1993; // rcx
  int *v1994; // rax
  unsigned int v1995; // edx
  __int64 v1996; // rcx
  _QWORD *v1997; // rsi
  char *v1998; // rax
  _QWORD *v1999; // rax
  __int64 v2000; // rcx
  int *v2001; // rax
  unsigned int v2002; // eax
  __int64 v2003; // rcx
  __int64 v2004; // rdi
  __int64 v2005; // rax
  unsigned int *v2006; // rsi
  unsigned int *v2007; // rax
  __int64 v2008; // rcx
  char *v2009; // rax
  unsigned int v2010; // eax
  __int64 v2011; // rsi
  _BYTE *v2012; // rbx
  __int64 v2013; // rcx
  __int64 v2014; // rbp
  __int64 v2015; // rax
  __int64 v2016; // r12
  __int64 *v2017; // rax
  __int64 v2018; // r13
  __int64 v2019; // rax
  unsigned __int64 ***v2020; // rax
  __int64 v2021; // rcx
  __int64 v2022; // rbx
  __int64 *v2023; // rax
  __int64 v2024; // rbp
  __int64 v2025; // rax
  unsigned int v2026; // eax
  __int64 v2027; // rcx
  int *v2028; // rdi
  __int64 v2029; // rax
  __int64 *v2030; // rsi
  unsigned int *v2031; // rax
  char *v2032; // rax
  _QWORD *v2033; // rsi
  _QWORD *v2034; // rdx
  _QWORD *v2035; // rcx
  _QWORD *jj; // rax
  __int64 v2037; // rcx
  __int64 *v2038; // rax
  __int64 v2039; // rcx
  unsigned __int8 **v2040; // rax
  unsigned int v2041; // edx
  __int64 v2042; // rcx
  unsigned __int64 **v2043; // rdi
  __int64 ***v2044; // rax
  __int64 **v2045; // rax
  unsigned int v2046; // eax
  __int64 v2047; // rcx
  __int64 v2048; // rdi
  __int64 v2049; // rax
  __int64 v2050; // rsi
  __int64 *v2051; // rax
  __int64 v2052; // rcx
  __int64 **v2053; // rax
  unsigned int v2054; // eax
  __int64 v2055; // rcx
  __int64 v2056; // rdi
  __int64 v2057; // rax
  __int64 v2058; // rsi
  __int64 *v2059; // rax
  unsigned int v2060; // edx
  __int64 v2061; // rcx
  _QWORD *v2062; // rsi
  char *v2063; // rax
  _QWORD *v2064; // rax
  __int64 v2065; // rcx
  const char **v2066; // rax
  __int64 v2067; // rcx
  __int64 *v2068; // rax
  unsigned int v2069; // edx
  __int64 v2070; // rcx
  unsigned __int64 **v2071; // rbp
  __int64 v2072; // rsi
  __m128i *v2073; // rbx
  unsigned __int64 *v2074; // rsi
  __int64 v2075; // rdx
  char *v2076; // rax
  __int64 v2077; // r12
  unsigned __int64 v2078; // rax
  size_t v2079; // r13
  __m128i si128; // xmm0
  unsigned int v2081; // eax
  __int64 v2082; // rcx
  __int64 v2083; // rdi
  __int64 v2084; // rax
  int v2085; // esi
  int *v2086; // rax
  unsigned int v2087; // edx
  __int64 v2088; // rsi
  _QWORD *v2089; // rdi
  __int64 v2090; // rcx
  _QWORD **v2091; // rsi
  char *v2092; // rax
  _QWORD *v2093; // rcx
  unsigned __int64 v2094; // rdx
  int v2095; // eax
  unsigned int v2096; // edx
  __int64 v2097; // rsi
  _QWORD *v2098; // rdi
  __int64 v2099; // rcx
  _QWORD **v2100; // rsi
  char *v2101; // rax
  _QWORD *v2102; // rcx
  unsigned __int64 v2103; // rdx
  unsigned __int64 v2104; // rax
  unsigned __int64 v2105; // rsi
  unsigned int v2106; // eax
  __int64 v2107; // rcx
  const char *v2108; // rdi
  __int64 v2109; // rax
  __int64 v2110; // rsi
  int *v2111; // rax
  unsigned int v2112; // eax
  __int64 v2113; // rcx
  __int64 v2114; // rdi
  __int64 v2115; // rsi
  unsigned int v2116; // r9d
  __int64 v2117; // rcx
  unsigned __int8 *v2118; // rsi
  __int64 v2119; // rax
  unsigned __int8 *v2120; // rcx
  unsigned __int8 **v2121; // rax
  unsigned int v2122; // edx
  __int64 v2123; // rcx
  _QWORD *v2124; // rsi
  char *v2125; // rax
  __int64 *v2126; // rdx
  __int64 v2127; // rax
  __int64 v2128; // rbx
  __int64 v2129; // rax
  __int64 v2130; // rbx
  __int64 v2131; // rax
  char *v2132; // rax
  _QWORD *v2133; // rbx
  __int64 v2134; // rcx
  __int64 *v2135; // rax
  __int64 v2136; // rcx
  __int64 *v2137; // rax
  __int64 v2138; // rcx
  unsigned __int8 **v2139; // rax
  unsigned int v2140; // eax
  __int64 v2141; // rcx
  __int64 v2142; // rdi
  __int64 v2143; // rsi
  __int64 *v2144; // r9
  __int64 v2145; // rcx
  __int64 v2146; // rsi
  __int64 v2147; // rax
  __int64 v2148; // rcx
  unsigned int **v2149; // rax
  unsigned int v2150; // eax
  __int64 v2151; // rsi
  __int64 v2152; // rdi
  __int64 v2153; // rcx
  __int64 v2154; // rsi
  __int64 v2155; // rax
  __int64 v2156; // r8
  char *v2157; // rax
  unsigned int v2158; // eax
  __int64 v2159; // rsi
  __int64 v2160; // rdi
  __int64 v2161; // rcx
  __int64 v2162; // rsi
  __int64 v2163; // rax
  __int64 v2164; // r8
  __int64 *v2165; // rax
  __int64 v2166; // rcx
  __int64 **v2167; // rax
  unsigned int v2168; // eax
  __int64 v2169; // rcx
  unsigned __int8 *v2170; // rdi
  __int64 v2171; // rax
  __int64 v2172; // rsi
  unsigned int *v2173; // rax
  unsigned int v2174; // eax
  __int64 v2175; // rcx
  __int64 *v2176; // rdi
  __int64 v2177; // rax
  __int64 *v2178; // rsi
  char *v2179; // rax
  __m128i **v2180; // rdx
  char *v2181; // rdx
  __int64 *v2182; // rdx
  __int64 *v2183; // rdx
  char *v2184; // rdx
  char *v2185; // rdx
  __int64 *v2186; // rdx
  __int64 *v2187; // rdx
  int *v2188; // rdx
  char *v2189; // rdx
  __int64 *v2190; // rdx
  int *v2191; // rdx
  __int64 **v2192; // rdx
  char *v2193; // rdx
  __m128i **v2194; // rdx
  char *v2195; // rax
  __int64 **v2196; // rdx
  char *v2197; // rax
  __int64 *v2198; // rdx
  int *v2199; // rdx
  unsigned int *v2200; // rax
  char *v2201; // rdx
  __int64 *v2202; // rdx
  unsigned __int64 **v2203; // rdx
  unsigned int *v2204; // rdx
  __int64 *v2205; // rdx
  char *v2206; // rax
  int *v2207; // rdx
  __int64 *v2208; // rdx
  __int64 *v2209; // rdx
  __int64 *v2210; // rdx
  char *v2211; // rax
  int ***v2212; // rdx
  char *v2213; // rax
  __m128 ***v2214; // rdx
  int *v2215; // rdx
  int *v2216; // rdx
  __int64 *v2217; // rdx
  char *v2218; // rax
  __int64 *v2219; // rdx
  char *v2220; // rdx
  __int64 *v2221; // rdx
  char *v2222; // rdx
  char *v2223; // rdx
  __m128i **v2224; // rdx
  char *v2225; // rdx
  int *v2226; // rdx
  __int64 *v2227; // rdx
  __int64 *v2228; // rdx
  char *v2229; // rax
  char *v2230; // rdx
  unsigned __int64 *v2231; // rdx
  int *v2232; // rdx
  char *v2233; // rdx
  char *v2234; // rax
  char **v2235; // rdx
  unsigned __int64 ***v2236; // rdx
  __int64 *v2237; // rdx
  char *v2238; // rax
  __int64 *v2239; // rdx
  char *v2240; // rdx
  unsigned int **v2241; // rdx
  __int64 *v2242; // rdx
  __int64 *v2243; // rdx
  __int64 *v2244; // rdx
  __int64 *v2245; // rdx
  char *v2246; // rdx
  int *v2247; // rdx
  char *v2248; // rdx
  unsigned __int64 *v2249; // rdx
  char *v2250; // rax
  int **v2251; // rdx
  char *v2252; // rdx
  char *v2253; // rdx
  char *v2254; // rax
  int *v2255; // rdx
  __m128i **v2256; // rdx
  __m128i **v2257; // rdx
  char *v2258; // rax
  __int64 **v2259; // rdx
  char *v2260; // rdx
  char *v2261; // rax
  unsigned int *v2262; // rdx
  __int64 *v2263; // rdx
  __int64 *v2264; // rdx
  char *v2265; // rax
  const char **v2266; // rdx
  __int64 *v2267; // rdx
  __int64 *v2268; // rdx
  unsigned int *v2269; // rdx
  __int64 *v2270; // rdx
  char *v2271; // rax
  unsigned int *v2272; // rdx
  __int64 *v2273; // rdx
  char *v2274; // rax
  __int64 *v2275; // rdx
  __int64 *v2276; // rdx
  __int64 *v2277; // rdx
  char *v2278; // rax
  __int64 *v2279; // rdx
  __int64 *v2280; // rdx
  int *v2281; // rdx
  __int64 *v2282; // rdx
  __m128i **v2283; // rdx
  char *v2284; // rax
  char *v2285; // rdx
  __m128i **v2286; // rdx
  __int128 **v2287; // rdx
  char *v2288; // rdx
  __m128i **v2289; // rdx
  __int64 *v2290; // rdx
  char *v2291; // rdx
  __int64 *v2292; // rdx
  int *v2293; // rdx
  char *v2294; // rax
  __int64 *v2295; // rdx
  __int64 *v2296; // rdx
  const char **v2297; // rdx
  char *v2298; // rax
  int *v2299; // rdx
  char *v2300; // rax
  int *v2301; // rdx
  __int64 *v2302; // rdx
  __int64 *v2303; // rdx
  char *v2304; // rax
  char *v2305; // rdx
  __int64 *v2306; // rdx
  char *v2307; // rax
  __int64 *v2308; // rdx
  char *v2309; // rdx
  __int64 *v2310; // rdx
  __int64 *v2311; // rdx
  __int64 *v2312; // rdx
  __int64 *v2313; // rdx
  unsigned __int64 **v2314; // rdx
  int *v2315; // rdx
  char *v2316; // rdx
  __int64 *v2317; // rdx
  char *v2318; // rdx
  __int64 *v2319; // rdx
  __int64 *v2320; // rdx
  __int64 *v2321; // rdx
  __int64 *v2322; // rdx
  char *v2323; // rax
  char *v2324; // rdx
  int *v2325; // rax
  int *v2326; // rdx
  __int64 *v2327; // rdx
  char *v2328; // rax
  char *v2329; // rdx
  __int64 *v2330; // rdx
  __int64 **v2331; // rdx
  __int64 *v2332; // rdx
  unsigned __int64 *v2333; // rdx
  __int64 *v2334; // rdx
  const __m128i **v2335; // rdx
  __int64 *v2336; // rdx
  unsigned __int64 *v2337; // rdx
  char *v2338; // rdx
  int *v2339; // rdx
  char *v2340; // rax
  char *v2341; // rdx
  __int64 *v2342; // rax
  __int64 *v2343; // rdx
  __int64 *v2344; // rax
  __int64 *v2345; // rdx
  __int64 *v2346; // rdx
  char *v2347; // rax
  const char **v2348; // rdx
  char *v2349; // rdx
  const __m128i **v2350; // rdx
  __int64 *v2351; // rdx
  char *v2352; // rax
  __int64 *v2353; // rdx
  __int64 *v2354; // rax
  __int64 *v2355; // rdx
  __int64 *v2356; // rax
  __int64 *v2357; // rdx
  int *v2358; // rdx
  char *v2359; // rax
  __m128i **v2360; // rdx
  char *v2361; // rax
  const __m128i **v2362; // rdx
  __m128i **v2363; // rdx
  char *v2364; // rdx
  int *v2365; // rdx
  __m128i **v2366; // rdx
  char *v2367; // rax
  char *v2368; // rdx
  __m128i **v2369; // rdx
  char *v2370; // rdx
  char *v2371; // rdx
  __int64 **v2372; // rdx
  __int64 *v2373; // rdx
  char *v2374; // rdx
  char *v2375; // rdx
  unsigned int *v2376; // rdx
  char *v2377; // rax
  int *v2378; // rdx
  __int64 *v2379; // rax
  __int64 *v2380; // rdx
  __int64 *v2381; // rax
  __int64 *v2382; // rdx
  char *v2383; // rax
  __int64 *v2384; // rdx
  __m128i **v2385; // rdx
  char *v2386; // rax
  char *v2387; // rdx
  char *v2388; // rdx
  int *v2389; // rdx
  int *v2390; // rdx
  __int64 *v2391; // rdx
  __int64 *v2392; // rdx
  unsigned __int64 *v2393; // rdx
  int **v2394; // rdx
  char *v2395; // rax
  int *v2396; // rdx
  int *v2397; // rdx
  __int64 **v2398; // rdx
  __int64 *v2399; // rdx
  char *v2400; // rax
  char *v2401; // rdx
  int *v2402; // rdx
  char *v2403; // rax
  __int64 **v2404; // rdx
  char *v2405; // rax
  int *v2406; // rdx
  __int64 *v2407; // rdx
  char *v2408; // rax
  __int64 *v2409; // rdx
  __int64 *v2410; // rdx
  __int64 *v2411; // rdx
  char *v2412; // rax
  int *v2413; // rdx
  unsigned int *v2414; // rax
  unsigned int *v2415; // rdx
  __int64 *v2416; // rax
  __int64 *v2417; // rdx
  __int64 *v2418; // rax
  __int64 *v2419; // rdx
  __int64 *v2420; // rdx
  char *v2421; // rax
  signed int *v2422; // rdx
  char *v2423; // rax
  unsigned __int64 ***v2424; // rdx
  int *v2425; // rax
  int *v2426; // rdx
  __int64 *v2427; // rdx
  __int64 **v2428; // rdx
  __int64 *v2429; // rdx
  __int64 **v2430; // rdx
  __int64 *v2431; // rax
  __int64 *v2432; // rdx
  char *v2433; // rax
  unsigned __int64 *v2434; // rdx
  __int64 *v2435; // rdx
  char *v2436; // rax
  int *v2437; // rdx
  char *v2438; // rdx
  __int64 *v2439; // rdx
  char *v2440; // rdx
  unsigned int *v2441; // rdx
  char *v2442; // rax
  char *v2443; // rdx
  __int64 *v2444; // rdx
  char *v2445; // rax
  __int64 *v2446; // rdx
  int *v2447; // rax
  int *v2448; // rdx
  __int64 **v2449; // rdx
  char *v2450; // rdx
  char *v2451; // rax
  __int64 *v2452; // rdx
  __int64 *v2453; // rdx
  __int64 *v2454; // rdx
  __int64 *v2455; // rdx
  char *v2456; // rax
  __int64 *v2457; // rdx
  char *v2458; // rdx
  __int64 *v2459; // rdx
  char *v2460; // rdx
  char *v2461; // rax
  char *v2462; // rdx
  char *v2463; // rdx
  __int64 **v2464; // rdx
  char *v2465; // rdx
  __int64 **v2466; // rdx
  char *v2467; // rax
  int *v2468; // rdx
  int *v2469; // rdx
  int *v2470; // rax
  __int64 *v2471; // rdx
  char *v2472; // rax
  __int64 *v2473; // rdx
  __int64 **v2474; // rdx
  char *v2475; // rdx
  char *v2476; // rax
  __int64 **v2477; // rdx
  char *v2478; // rax
  __int64 *v2479; // rdx
  __m128i **v2480; // rdx
  __int64 **v2481; // rdx
  __int64 **v2482; // rdx
  char *v2483; // rax
  __int64 *v2484; // rdx
  __int64 **v2485; // rdx
  char *v2486; // rax
  __int64 *v2487; // rdx
  __int64 *v2488; // rax
  __int64 *v2489; // rdx
  const char **v2490; // rdx
  unsigned __int64 ***v2491; // rdx
  char *v2492; // rax
  __int64 *v2493; // rdx
  char *v2494; // rax
  __int64 *v2495; // rdx
  unsigned int **v2496; // rdx
  char *v2497; // rdx
  int *v2498; // rdx
  __int64 **v2499; // rdx
  char *v2500; // rdx
  char *v2501; // rax
  unsigned __int8 **v2502; // rdx
  unsigned __int8 **v2503; // rax
  unsigned __int8 **v2504; // rdx
  __int64 *v2505; // rdx
  size_t v2506; // rbp
  void *v2507; // rax
  void *v2508; // rax
  size_t v2509; // rbp
  void *v2510; // rax
  void *v2511; // rax
  __int64 v2512; // rdi
  void *v2513; // rax
  void *v2514; // rax
  void *v2515; // rax
  unsigned __int64 v2516; // rdi
  int v2517; // ebx
  char *v2518; // rax
  char *v2519; // rax
  char *v2520; // rax
  char *v2521; // rax
  char *v2522; // rax
  __int64 **v2523; // rax
  char *v2524; // rax
  char *v2525; // rax
  char *v2526; // rax
  char *v2527; // rax
  char *v2528; // r14
  char *v2529; // r15
  int v2530; // eax
  char *v2531; // rax
  char *v2532; // rax
  char *v2533; // rax
  char *v2534; // rax
  __int64 *v2535; // rax
  __int64 *v2536; // rax
  char *v2537; // rax
  char *v2538; // rax
  char *v2539; // rax
  char *v2540; // rax
  char *v2541; // rax
  char *v2542; // rax
  char *v2543; // rax
  char *v2544; // rax
  char *v2545; // rax
  char *v2546; // rax
  char *v2547; // rax
  char *v2548; // rax
  char *v2549; // rax
  __m128i v2550; // [rsp+0h] [rbp-128h] BYREF
  __m128i v2551; // [rsp+10h] [rbp-118h] BYREF
  __m128i v2552; // [rsp+20h] [rbp-108h] BYREF
  _BYTE v2553[24]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v2554; // [rsp+48h] [rbp-E0h]
  _BYTE v2555[48]; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v2556; // [rsp+80h] [rbp-A8h]
  unsigned int v2557; // [rsp+88h] [rbp-A0h]
  char *v2558; // [rsp+90h] [rbp-98h]
  char *v2559; // [rsp+98h] [rbp-90h]
  __m128i v2560; // [rsp+A0h] [rbp-88h]
  __int64 v2561; // [rsp+B0h] [rbp-78h]
  unsigned __int64 v2562; // [rsp+B8h] [rbp-70h]
  char v2563; // [rsp+C0h] [rbp-68h] BYREF
  _UNKNOWN ***v2564; // [rsp+C8h] [rbp-60h]
  __int64 v2565; // [rsp+D0h] [rbp-58h]
  __int64 v2566; // [rsp+D8h] [rbp-50h]
  __int64 v2567; // [rsp+E0h] [rbp-48h]
  __int64 (__fastcall *v2568)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+E8h] [rbp-40h]

  v2564 = a2;
  v2565 = a3;
  v2566 = a4;
  v2567 = a5;
  v2568 = a6;
  v2562 = __readfsqword(0x28u);
  v2557 = 8;
  v2558 = &a14;
  v2559 = &v2563;
  switch ( a1 )
  {
    case 0LL:
      v1468 = v2557;
      v1469 = v2557 + 8;
      v2557 = v1469;
      v1470 = *(_QWORD **)&v2559[v1468];
      if ( (unsigned int)v1469 > 0x2F )
      {
        v1471 = v2558;
        v2558 += 8;
      }
      else
      {
        v1471 = &v2559[v1469];
        v2557 = v1468 + 16;
      }
      v1472 = *(__int64 **)v1471;
      if ( !*(_QWORD *)v1471 )
        goto LABEL_2315;
      v1473 = *v1472;
      if ( *v1472 )
      {
        if ( v1472[1] )
          v1473 = *(_QWORD *)(v1473 + 8);
      }
      *v1470 = v1473;
      return nullptr;
    case 1LL:
      v1463 = v2557;
      v1464 = v2557 + 8;
      v2557 = v1464;
      v1465 = *(_QWORD **)&v2559[v1463];
      if ( (unsigned int)v1464 > 0x2F )
      {
        v1466 = v2558;
        v2558 += 8;
      }
      else
      {
        v1466 = &v2559[v1464];
        v2557 = v1463 + 16;
      }
      v1467 = *(_QWORD **)v1466;
      if ( !v1467 )
        goto LABEL_2650;
      *v1465 = *v1467;
      return nullptr;
    case 2LL:
      v1461 = &v2559[v2557];
      v1462 = *(_QWORD **)v1461;
      *v1462 = sub_3452C0(**(_QWORD ***)v1461);
      return nullptr;
    case 3LL:
      v1456 = &v2559[v2557];
      v1457 = *(_QWORD **)v1456;
      v1458 = **(_QWORD ***)v1456;
      if ( (*v1458 & 2) != 0 )
      {
        i = (_QWORD *)v1458[2];
      }
      else
      {
        v1459 = (_QWORD *)v1458[1];
        if ( (*(_BYTE *)v1459 & 2) != 0 )
        {
          for ( i = (_QWORD *)(*v1458 & 0xFFFFFFFFFFFFFFFCLL);
                (*i & 2) == 0 && (_QWORD *)i[1] == v1458;
                i = (_QWORD *)(*i & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v1458 = i;
          }
        }
        else
        {
          do
          {
            i = v1459;
            v1459 = (_QWORD *)v1459[2];
          }
          while ( (*(_BYTE *)v1459 & 2) == 0 );
        }
      }
      *v1457 = i;
      return nullptr;
    case 4LL:
      return (__m128i *)(**(_QWORD **)&v2559[v2557] + 24LL);
    case 5LL:
      return (__m128i *)(**(_QWORD **)&v2559[v2557] + 40LL);
    case 6LL:
      v976 = v2557;
      v977 = v2557 + 8;
      v2557 = v977;
      v978 = *(_QWORD **)&v2559[v976];
      if ( (unsigned int)v977 > 0x2F )
      {
        v2201 = v2558;
        v981 = (__int64 *)(v2558 + 8);
        v2558 += 8;
        v980 = *(_QWORD ***)v2201;
      }
      else
      {
        v979 = v976 + 16;
        v980 = *(_QWORD ***)&v2559[v977];
        v2557 = v979;
        if ( (unsigned int)v979 <= 0x2F )
        {
          v981 = (__int64 *)&v2559[v979];
          v2557 = v976 + 24;
          goto LABEL_847;
        }
        v981 = (__int64 *)v2558;
      }
      v2558 = (char *)(v981 + 1);
LABEL_847:
      if ( !v980 )
        goto LABEL_2199;
      v982 = *v980;
      v983 = *v980;
      if ( !*v980 )
        goto LABEL_857;
      v982 = (_QWORD *)(*v982 & 0xFFFFFFFFFFFFFFFCLL);
      if ( !v982 )
        goto LABEL_857;
      if ( (*(_BYTE *)v982 & 2) != 0 )
        goto LABEL_856;
      v984 = *v981;
      do
      {
        if ( (int)sub_257C40(v984, (__int64)(v982 + 3)) >= 0 )
        {
          if ( (int)sub_257C40((__int64)(v982 + 3), v984) >= 0 )
            goto LABEL_857;
          v982 = (_QWORD *)v982[2];
        }
        else
        {
          v982 = (_QWORD *)v982[1];
        }
      }
      while ( (*(_BYTE *)v982 & 2) == 0 );
      v983 = *v980;
LABEL_856:
      v982 = v983;
LABEL_857:
      *v978 = v982;
      return nullptr;
    case 7LL:
      v959 = v2557;
      v960 = v2557 + 8;
      v2557 = v960;
      v961 = *(unsigned __int64 **)&v2559[v959];
      if ( (unsigned int)v960 > 0x2F )
      {
        v2289 = (__m128i **)v2558;
        v2539 = v2558 + 8;
        v2558 += 8;
        v963 = *v2289;
      }
      else
      {
        v962 = v959 + 16;
        v963 = *(__m128i **)&v2559[v960];
        v2557 = v962;
        if ( (unsigned int)v962 <= 0x2F )
        {
          v964 = v959 + 24;
          v965 = *(_QWORD *)&v2559[v962];
          v2557 = v964;
          if ( (unsigned int)v964 <= 0x2F )
          {
            v966 = v959 + 32;
            v967 = &v2559[v964];
            v2557 = v966;
            goto LABEL_839;
          }
          v967 = v2558;
LABEL_2029:
          v966 = (__int64)(v967 + 8);
          v2558 = v967 + 8;
LABEL_839:
          v968 = *(__int64 **)v967;
          if ( v963 )
          {
            v969 = v968[2];
            v970 = *(_QWORD *)v965;
            v971 = nullptr;
            v972 = *(_DWORD *)(v965 + 8);
            v973 = *v968;
            v974 = _mm_unpacklo_epi64((__m128i)v969, (__m128i)v969);
            if ( v969 )
            {
              v2512 = v968[2];
              v2550.m128i_i64[0] = *(_QWORD *)v965;
              v2551 = v974;
              v2513 = (void *)qalloc_or_throw(v2512, v965, v966, 0);
              v2514 = memcpy(v2513, (const void *)v968[1], v969);
              v974 = _mm_load_si128(&v2551);
              v970 = v2550.m128i_i64[0];
              v971 = v2514;
            }
            v975 = v968[4];
            *(_QWORD *)v2555 = v970;
            *(_DWORD *)&v2555[8] = v972;
            *(_QWORD *)&v2555[16] = v973;
            *(_QWORD *)&v2555[24] = v971;
            v2556 = v975;
            *(__m128i *)&v2555[32] = v974;
            *v961 = sub_3456B0(v963, (const __m128i *)v2555);
            if ( *(_QWORD *)&v2555[24] )
            {
              *(_QWORD *)&v2555[32] = 0;
              qfree(*(__int64 *)&v2555[24]);
            }
            return nullptr;
          }
          goto LABEL_2525;
        }
        v2539 = v2558;
      }
      v2290 = (__int64 *)v2539;
      v967 = v2539 + 8;
      v2558 = v967;
      v965 = *v2290;
      goto LABEL_2029;
    case 8LL:
      v2041 = v2557;
      v2042 = v2557 + 8;
      v2557 = v2042;
      v2043 = *(unsigned __int64 ***)&v2559[v2041];
      if ( (unsigned int)v2042 > 0x2F )
      {
        v2044 = (__int64 ***)v2558;
        v2558 += 8;
      }
      else
      {
        v2044 = (__int64 ***)&v2559[v2042];
        v2557 = v2041 + 16;
      }
      v2045 = *v2044;
      if ( !v2043 )
        goto LABEL_2657;
      sub_345E30(v2043, *v2045);
      return nullptr;
    case 9LL:
      v1920 = (unsigned __int64 ***)&v2559[v2557];
      v2557 += 8;
      if ( !*v1920 )
        goto LABEL_2666;
      sub_344C70(*v1920);
      return nullptr;
    case 10LL:
      v1239 = (__int64 *)&v2559[v2557];
      v2557 += 8;
      v1240 = *v1239;
      if ( !v1240 )
        goto LABEL_2645;
      return *(__m128i **)(v1240 + 8);
    case 11LL:
      v1237 = (__int64 **)&v2559[v2557];
      v2557 += 8;
      v1238 = *v1237;
      if ( *v1237 )
      {
        sub_82E00(*v1237);
        qfree((__int64)v1238);
      }
      return nullptr;
    case 12LL:
      result = (__m128i *)qalloc();
      if ( !result )
        sub_548D9(16);
      result->m128i_i64[0] = 0;
      result->m128i_i64[1] = 0;
      return result;
    case 13LL:
      v1684 = v2557;
      v1685 = v2557 + 8;
      v2557 = v1685;
      v1686 = *(_QWORD **)&v2559[v1684];
      if ( (unsigned int)v1685 > 0x2F )
      {
        v1687 = v2558;
        v2558 += 8;
      }
      else
      {
        v1687 = &v2559[v1685];
        v2557 = v1684 + 16;
      }
      v1688 = *(__int64 **)v1687;
      if ( *(_QWORD *)v1687 )
      {
        v1689 = *v1688;
        if ( *v1688 && v1688[1] )
          v1689 = *(_QWORD *)(v1689 + 8);
        *v1686 = v1689;
        return nullptr;
      }
      if ( !under_debugger )
LABEL_2207:
        sub_383060(0xCD9Eu, *(double *)a7.m128_u64);
      goto LABEL_2700;
    case 14LL:
      v1995 = v2557;
      v1996 = v2557 + 8;
      v2557 = v1996;
      v1997 = *(_QWORD **)&v2559[v1995];
      if ( (unsigned int)v1996 > 0x2F )
      {
        v1998 = v2558;
        v2558 += 8;
      }
      else
      {
        v1998 = &v2559[v1996];
        v2557 = v1995 + 16;
      }
      v1999 = *(_QWORD **)v1998;
      if ( !v1999 )
        goto LABEL_2650;
      *v1997 = *v1999;
      return nullptr;
    case 15LL:
      v656 = &v2559[v2557];
      v657 = *(_QWORD **)v656;
      *v657 = sub_345330(**(_QWORD ***)v656);
      return nullptr;
    case 16LL:
      v1777 = &v2559[v2557];
      v1778 = *(_QWORD **)v1777;
      v1779 = **(_QWORD ***)v1777;
      if ( (*v1779 & 2) != 0 )
      {
        j = (_QWORD *)v1779[2];
      }
      else
      {
        v1780 = (_QWORD *)v1779[1];
        if ( (*(_BYTE *)v1780 & 2) != 0 )
        {
          for ( j = (_QWORD *)(*v1779 & 0xFFFFFFFFFFFFFFFCLL);
                (*j & 2) == 0 && (_QWORD *)j[1] == v1779;
                j = (_QWORD *)(*j & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v1779 = j;
          }
        }
        else
        {
          do
          {
            j = v1780;
            v1780 = (_QWORD *)v1780[2];
          }
          while ( (*(_BYTE *)v1780 & 2) == 0 );
        }
      }
      *v1778 = j;
      return nullptr;
    case 17LL:
      return (__m128i *)(**(_QWORD **)&v2559[v2557] + 24LL);
    case 18LL:
      return (__m128i *)(**(_QWORD **)&v2559[v2557] + 48LL);
    case 19LL:
      v1349 = v2557;
      v1350 = v2557 + 8;
      v2557 = v1350;
      v1351 = *(unsigned __int64 **)&v2559[v1349];
      if ( (unsigned int)v1350 > 0x2F )
      {
        v2203 = (unsigned __int64 **)v2558;
        v1354 = (int **)(v2558 + 8);
        v2558 += 8;
        v1353 = *v2203;
      }
      else
      {
        v1352 = v1349 + 16;
        v1353 = *(unsigned __int64 **)&v2559[v1350];
        v2557 = v1352;
        if ( (unsigned int)v1352 <= 0x2F )
        {
          v1354 = (int **)&v2559[v1352];
          v2557 = v1349 + 24;
          goto LABEL_1204;
        }
        v1354 = (int **)v2558;
      }
      v2558 = (char *)(v1354 + 1);
LABEL_1204:
      if ( !v1353 )
        goto LABEL_2199;
      v1355 = *v1353;
      v1356 = *v1353;
      if ( !*v1353 )
        goto LABEL_1214;
      v1355 = *(_QWORD *)v1355 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v1355 )
        goto LABEL_1214;
      if ( (*(_BYTE *)v1355 & 2) != 0 )
        goto LABEL_1213;
      v1357 = *v1354;
      do
      {
        if ( (int)sub_3307E0(v1357, (int *)(v1355 + 24), *(double *)a7.m128_u64) >= 0 )
        {
          if ( (int)sub_3307E0((int *)(v1355 + 24), v1357, *(double *)a7.m128_u64) >= 0 )
            goto LABEL_1214;
          v1355 = *(_QWORD *)(v1355 + 16);
        }
        else
        {
          v1355 = *(_QWORD *)(v1355 + 8);
        }
      }
      while ( (*(_BYTE *)v1355 & 2) == 0 );
      v1356 = *v1353;
LABEL_1213:
      v1355 = v1356;
LABEL_1214:
      *v1351 = v1355;
      return nullptr;
    case 20LL:
      v810 = v2557;
      v811 = v2557 + 8;
      v2557 = v811;
      v812 = *(unsigned __int64 **)&v2559[v810];
      if ( (unsigned int)v811 > 0x2F )
      {
        v2366 = (__m128i **)v2558;
        v2367 = v2558 + 8;
        v2558 += 8;
        v814 = *v2366;
      }
      else
      {
        v813 = v810 + 16;
        v814 = *(__m128i **)&v2559[v811];
        v2557 = v813;
        if ( (unsigned int)v813 <= 0x2F )
        {
          v815 = v810 + 24;
          v816 = *(_QWORD *)&v2559[v813];
          v2557 = v815;
          if ( (unsigned int)v815 <= 0x2F )
          {
            v817 = &v2559[v815];
            v2557 = v810 + 32;
            goto LABEL_692;
          }
          v817 = v2558;
LABEL_2065:
          v2558 = v817 + 8;
LABEL_692:
          v818 = *(_QWORD *)v817;
          if ( v814 )
          {
            v2552.m128i_i32[0] = 0;
            copy_argloc();
            v819 = *(_QWORD *)(v816 + 16);
            *(_DWORD *)&v2553[8] = 0;
            *(_QWORD *)v2553 = v819;
            copy_argloc();
            v820 = *(_QWORD *)(v818 + 16);
            *(_DWORD *)v2555 = 0;
            v2554 = v820;
            copy_argloc();
            *(_DWORD *)&v2555[24] = 0;
            *(_QWORD *)&v2555[16] = *(_QWORD *)v2553;
            copy_argloc();
            *(_QWORD *)&v2555[40] = v2554;
            *v812 = sub_3463B0(v814, (int *)v2555, *(double *)a7.m128_u64);
            cleanup_argloc();
            cleanup_argloc();
            cleanup_argloc();
            cleanup_argloc();
            return nullptr;
          }
LABEL_2525:
          if ( !under_debugger )
            sub_383060(0xCD9Bu, *(double *)a7.m128_u64);
          goto LABEL_2700;
        }
        v2367 = v2558;
      }
      v2368 = v2367;
      v817 = v2367 + 8;
      v2558 = v817;
      v816 = *(_QWORD *)v2368;
      goto LABEL_2065;
    case 21LL:
      v805 = v2557;
      v806 = v2557 + 8;
      v2557 = v806;
      v807 = *(unsigned __int64 ***)&v2559[v805];
      if ( (unsigned int)v806 > 0x2F )
      {
        v808 = (__int64 ***)v2558;
        v2558 += 8;
      }
      else
      {
        v808 = (__int64 ***)&v2559[v806];
        v2557 = v805 + 16;
      }
      v809 = *v808;
      if ( !v807 )
        goto LABEL_2657;
      sub_2188C0(v807, *v809);
      return nullptr;
    case 22LL:
      v804 = (unsigned __int64 ***)&v2559[v2557];
      v2557 += 8;
      if ( !*v804 )
        goto LABEL_2666;
      sub_83C10(*v804);
      return nullptr;
    case 23LL:
      v802 = (__int64 *)&v2559[v2557];
      v2557 += 8;
      v803 = *v802;
      if ( !v803 )
        goto LABEL_2645;
      return *(__m128i **)(v803 + 8);
    case 24LL:
      v1134 = (__int64 **)&v2559[v2557];
      v2557 += 8;
      v1135 = *v1134;
      if ( *v1134 )
      {
        sub_217B60(*v1134);
        qfree((__int64)v1135);
      }
      return nullptr;
    case 25LL:
      result = (__m128i *)qalloc();
      if ( !result )
        sub_548D9(16);
      result->m128i_i64[0] = 0;
      result->m128i_i64[1] = 0;
      return result;
    case 26LL:
      v1128 = v2557;
      v1129 = v2557 + 8;
      v2557 = v1129;
      v1130 = *(_QWORD **)&v2559[v1128];
      if ( (unsigned int)v1129 > 0x2F )
      {
        v1131 = v2558;
        v2558 += 8;
      }
      else
      {
        v1131 = &v2559[v1129];
        v2557 = v1128 + 16;
      }
      v1132 = *(__int64 **)v1131;
      if ( *(_QWORD *)v1131 )
      {
        v1133 = *v1132;
        if ( *v1132 && v1132[1] )
          v1133 = *(_QWORD *)(v1133 + 8);
        *v1130 = v1133;
        return nullptr;
      }
      if ( under_debugger )
        goto LABEL_2700;
      goto LABEL_2207;
    case 27LL:
      v1123 = v2557;
      v1124 = v2557 + 8;
      v2557 = v1124;
      v1125 = *(_QWORD **)&v2559[v1123];
      if ( (unsigned int)v1124 > 0x2F )
      {
        v1126 = v2558;
        v2558 += 8;
      }
      else
      {
        v1126 = &v2559[v1124];
        v2557 = v1123 + 16;
      }
      v1127 = *(_QWORD **)v1126;
      if ( !v1127 )
        goto LABEL_2650;
      *v1125 = *v1127;
      return nullptr;
    case 28LL:
      v1613 = &v2559[v2557];
      v1614 = *(_QWORD **)v1613;
      *v1614 = sub_3453A0(**(_QWORD ***)v1613);
      return nullptr;
    case 29LL:
      v1608 = &v2559[v2557];
      v1609 = *(_QWORD **)v1608;
      v1610 = **(_QWORD ***)v1608;
      if ( (*v1610 & 2) != 0 )
      {
        k = (_QWORD *)v1610[2];
      }
      else
      {
        v1611 = (_QWORD *)v1610[1];
        if ( (*(_BYTE *)v1611 & 2) != 0 )
        {
          for ( k = (_QWORD *)(*v1610 & 0xFFFFFFFFFFFFFFFCLL);
                (*k & 2) == 0 && (_QWORD *)k[1] == v1610;
                k = (_QWORD *)(*k & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v1610 = k;
          }
        }
        else
        {
          do
          {
            k = v1611;
            v1611 = (_QWORD *)v1611[2];
          }
          while ( (*(_BYTE *)v1611 & 2) == 0 );
        }
      }
      *v1609 = k;
      return nullptr;
    case 30LL:
      return (__m128i *)(**(_QWORD **)&v2559[v2557] + 24LL);
    case 31LL:
      return (__m128i *)(**(_QWORD **)&v2559[v2557] + 32LL);
    case 32LL:
      v2096 = v2557;
      v2097 = v2557 + 8;
      v2557 = v2097;
      v2098 = *(_QWORD **)&v2559[v2096];
      if ( (unsigned int)v2097 > 0x2F )
      {
        v2374 = v2558;
        v2101 = v2558 + 8;
        v2558 += 8;
        v2100 = *(_QWORD ***)v2374;
      }
      else
      {
        v2099 = v2096 + 16;
        v2100 = *(_QWORD ***)&v2559[v2097];
        v2557 = v2099;
        if ( (unsigned int)v2099 <= 0x2F )
        {
          v2101 = &v2559[v2099];
          v2557 = v2096 + 24;
          goto LABEL_1907;
        }
        v2101 = v2558;
      }
      v2558 = v2101 + 8;
LABEL_1907:
      if ( !v2100 )
        goto LABEL_2199;
      v2102 = *v2100;
      if ( !*v2100 )
        goto LABEL_1915;
      v2103 = *v2102 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v2103 )
      {
        v2102 = nullptr;
        goto LABEL_1915;
      }
      if ( (*(_BYTE *)v2103 & 2) != 0 )
        goto LABEL_1915;
      v2104 = **(_QWORD **)v2101;
      while ( 2 )
      {
        v2105 = *(_QWORD *)(v2103 + 24);
        if ( v2104 >= v2105 )
        {
          if ( v2105 >= v2104 )
          {
            v2102 = (_QWORD *)v2103;
LABEL_1915:
            *v2098 = v2102;
            return nullptr;
          }
          v2103 = *(_QWORD *)(v2103 + 16);
        }
        else
        {
          v2103 = *(_QWORD *)(v2103 + 8);
        }
        if ( (*(_BYTE *)v2103 & 2) != 0 )
          goto LABEL_1915;
        continue;
      }
    case 33LL:
      v2069 = v2557;
      v2070 = v2557 + 8;
      v2557 = v2070;
      v2071 = *(unsigned __int64 ***)&v2559[v2069];
      if ( (unsigned int)v2070 > 0x2F )
      {
        v2363 = (__m128i **)v2558;
        v2519 = v2558 + 8;
        v2558 += 8;
        v2073 = *v2363;
      }
      else
      {
        v2072 = v2069 + 16;
        v2073 = *(__m128i **)&v2559[v2070];
        v2557 = v2072;
        if ( (unsigned int)v2072 <= 0x2F )
        {
          v2070 = v2069 + 24;
          v2074 = *(unsigned __int64 **)&v2559[v2072];
          v2557 = v2070;
          if ( (unsigned int)v2070 <= 0x2F )
          {
            v2075 = v2069 + 32;
            v2076 = &v2559[v2070];
            v2557 = v2075;
            goto LABEL_1882;
          }
          v2076 = v2558;
LABEL_2062:
          v2075 = (__int64)(v2076 + 8);
          v2558 = v2076 + 8;
LABEL_1882:
          v2077 = *(_QWORD *)v2076;
          if ( v2073 )
          {
            v2078 = *v2074;
            *(_OWORD *)v2553 = 0;
            v2552 = (__m128i)v2078;
            v2079 = *(_QWORD *)(v2077 + 8);
            if ( v2079 )
            {
              v2515 = (void *)qalloc_or_throw(*(_QWORD *)(v2077 + 8), (__int64)v2074, v2075, v2070);
              *(_QWORD *)&v2553[8] = v2079;
              v2552.m128i_i64[1] = (__int64)v2515;
              memcpy(v2515, *(const void **)v2077, v2079);
              *(_QWORD *)v2553 = v2079;
            }
            copy_tinfo_t();
            si128 = _mm_load_si128((const __m128i *)v2553);
            *(_QWORD *)&v2555[32] = 0;
            *(__m128i *)v2555 = v2552;
            *(__m128i *)&v2555[16] = si128;
            v2552.m128i_i64[1] = 0;
            memset(v2553, 0, sizeof(v2553));
            copy_tinfo_t();
            *v2071 = sub_346740(v2073, (const __m128i *)v2555);
            sub_2B5160((__int64 *)&v2555[8]);
            sub_2B5160(&v2552.m128i_i64[1]);
            return nullptr;
          }
          goto LABEL_2525;
        }
        v2519 = v2558;
      }
      v2364 = v2519;
      v2076 = v2519 + 8;
      v2558 = v2076;
      v2074 = *(unsigned __int64 **)v2364;
      goto LABEL_2062;
    case 34LL:
      v1390 = v2557;
      v1391 = v2557 + 8;
      v2557 = v1391;
      v1392 = *(unsigned __int64 ***)&v2559[v1390];
      if ( (unsigned int)v1391 > 0x2F )
      {
        v1393 = (__int64 ***)v2558;
        v2558 += 8;
      }
      else
      {
        v1393 = (__int64 ***)&v2559[v1391];
        v2557 = v1390 + 16;
      }
      v1394 = *v1393;
      if ( !v1392 )
        goto LABEL_2657;
      sub_346E80(v1392, *v1394);
      return nullptr;
    case 35LL:
      v1389 = (unsigned __int64 ***)&v2559[v2557];
      v2557 += 8;
      if ( !*v1389 )
        goto LABEL_2666;
      sub_83F70(*v1389);
      return nullptr;
    case 36LL:
      v1815 = (__int64 *)&v2559[v2557];
      v2557 += 8;
      v1816 = *v1815;
      if ( !v1816 )
        goto LABEL_2645;
      return *(__m128i **)(v1816 + 8);
    case 37LL:
      v1813 = (__int64 **)&v2559[v2557];
      v2557 += 8;
      v1814 = *v1813;
      if ( *v1813 )
      {
        sub_2BC560(*v1813);
        qfree((__int64)v1814);
      }
      return nullptr;
    case 38LL:
      result = (__m128i *)qalloc();
      if ( !result )
        sub_548D9(16);
      result->m128i_i64[0] = 0;
      result->m128i_i64[1] = 0;
      return result;
    case 39LL:
      v871 = v2557;
      v872 = v2557 + 8;
      v2557 = v872;
      v873 = *(_QWORD **)&v2559[v871];
      if ( (unsigned int)v872 > 0x2F )
      {
        v874 = v2558;
        v2558 += 8;
      }
      else
      {
        v874 = &v2559[v872];
        v2557 = v871 + 16;
      }
      v875 = *(__int64 **)v874;
      if ( *(_QWORD *)v874 )
      {
        v876 = *v875;
        if ( *v875 && v875[1] )
          v876 = *(_QWORD *)(v876 + 8);
        *v873 = v876;
        return nullptr;
      }
      if ( under_debugger )
        goto LABEL_2700;
      goto LABEL_2207;
    case 40LL:
      v1186 = v2557;
      v1187 = v2557 + 8;
      v2557 = v1187;
      v1188 = *(_QWORD **)&v2559[v1186];
      if ( (unsigned int)v1187 > 0x2F )
      {
        v1189 = v2558;
        v2558 += 8;
      }
      else
      {
        v1189 = &v2559[v1187];
        v2557 = v1186 + 16;
      }
      v1190 = *(_QWORD **)v1189;
      if ( !v1190 )
        goto LABEL_2650;
      *v1188 = *v1190;
      return nullptr;
    case 41LL:
      v1184 = &v2559[v2557];
      v1185 = *(_QWORD **)v1184;
      *v1185 = sub_345410(**(_QWORD ***)v1184);
      return nullptr;
    case 42LL:
      v1961 = &v2559[v2557];
      v1962 = *(_QWORD **)v1961;
      v1963 = **(_QWORD ***)v1961;
      if ( (*v1963 & 2) != 0 )
      {
        m = (_QWORD *)v1963[2];
      }
      else
      {
        v1964 = (_QWORD *)v1963[1];
        if ( (*(_BYTE *)v1964 & 2) != 0 )
        {
          for ( m = (_QWORD *)(*v1963 & 0xFFFFFFFFFFFFFFFCLL);
                (*m & 2) == 0 && (_QWORD *)m[1] == v1963;
                m = (_QWORD *)(*m & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v1963 = m;
          }
        }
        else
        {
          do
          {
            m = v1964;
            v1964 = (_QWORD *)v1964[2];
          }
          while ( (*(_BYTE *)v1964 & 2) == 0 );
        }
      }
      *v1962 = m;
      return nullptr;
    case 43LL:
      return (__m128i *)(**(_QWORD **)&v2559[v2557] + 24LL);
    case 44LL:
      return (__m128i *)(**(_QWORD **)&v2559[v2557] + 40LL);
    case 45LL:
      v1640 = v2557;
      v1641 = v2557 + 8;
      v2557 = v1641;
      v1642 = *(_QWORD **)&v2559[v1640];
      if ( (unsigned int)v1641 > 0x2F )
      {
        v2193 = v2558;
        v1645 = v2558 + 8;
        v2558 += 8;
        v1644 = *(_QWORD ***)v2193;
      }
      else
      {
        v1643 = v1640 + 16;
        v1644 = *(_QWORD ***)&v2559[v1641];
        v2557 = v1643;
        if ( (unsigned int)v1643 <= 0x2F )
        {
          v1645 = &v2559[v1643];
          v2557 = v1640 + 24;
          goto LABEL_1466;
        }
        v1645 = v2558;
      }
      v2558 = v1645 + 8;
LABEL_1466:
      if ( !v1644 )
        goto LABEL_2199;
      v1646 = *v1644;
      if ( !*v1644 )
        goto LABEL_1475;
      v1647 = *v1646 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v1647 )
      {
        v1646 = nullptr;
        goto LABEL_1475;
      }
      if ( (*(_BYTE *)v1647 & 2) != 0 )
        goto LABEL_1475;
      v1648 = *(unsigned __int64 **)v1645;
      v1649 = *v1648;
      while ( 2 )
      {
        if ( v1649 < *(_QWORD *)(v1647 + 24) )
          goto LABEL_2121;
        if ( v1649 != *(_QWORD *)(v1647 + 24) )
          goto LABEL_1473;
        v2517 = *(_DWORD *)(v1647 + 32);
        if ( *((_DWORD *)v1648 + 2) < v2517 )
        {
LABEL_2121:
          v1647 = *(_QWORD *)(v1647 + 8);
        }
        else
        {
          if ( *((_DWORD *)v1648 + 2) <= v2517 )
          {
            v1646 = (_QWORD *)v1647;
LABEL_1475:
            *v1642 = v1646;
            return nullptr;
          }
LABEL_1473:
          v1647 = *(_QWORD *)(v1647 + 16);
        }
        if ( (*(_BYTE *)v1647 & 2) != 0 )
          goto LABEL_1475;
        continue;
      }
    case 46LL:
      v616 = v2557;
      v617 = v2557 + 8;
      v2557 = v617;
      v618 = *(_QWORD **)&v2559[v616];
      if ( (unsigned int)v617 > 0x2F )
      {
        v2360 = (__m128i **)v2558;
        v2361 = v2558 + 8;
        v2558 += 8;
        v620 = *v2360;
      }
      else
      {
        v619 = v616 + 16;
        v620 = *(__m128i **)&v2559[v617];
        v2557 = v619;
        if ( (unsigned int)v619 <= 0x2F )
        {
          v617 = v616 + 24;
          v621 = *(const __m128i **)&v2559[v619];
          v2557 = v617;
          if ( (unsigned int)v617 <= 0x2F )
          {
            v622 = v616 + 32;
            v623 = &v2559[v617];
            v2557 = v622;
            goto LABEL_518;
          }
          v623 = v2558;
LABEL_2060:
          v622 = (__int64)(v623 + 8);
          v2558 = v623 + 8;
LABEL_518:
          v624 = *(_QWORD *)v623;
          if ( v620 )
          {
            v625 = _mm_loadu_si128(v621);
            v626 = *(_QWORD *)v623;
            memset(v2553, 0, sizeof(v2553));
            v2552 = v625;
            sub_343670(v2553, v626, v622, v617);
            v627 = _mm_load_si128(&v2552);
            v628 = *(_BYTE *)(v624 + 24);
            v629 = *(_QWORD *)v2553;
            memset(v2553, 0, sizeof(v2553));
            *(__m128i *)v2555 = v627;
            v630 = _mm_loadu_si128((const __m128i *)&v2553[8]);
            LOBYTE(v2554) = v628;
            *(_QWORD *)&v2555[16] = v629;
            v2555[40] = v628;
            *(__m128i *)&v2555[24] = v630;
            *v618 = sub_3473C0(v620, (const __m128i *)v2555);
            if ( *(_QWORD *)&v2555[16] )
            {
              *(_QWORD *)&v2555[24] = 0;
              qfree(*(__int64 *)&v2555[16]);
            }
            return nullptr;
          }
          goto LABEL_2525;
        }
        v2361 = v2558;
      }
      v2362 = (const __m128i **)v2361;
      v623 = v2361 + 8;
      v2558 = v623;
      v621 = *v2362;
      goto LABEL_2060;
    case 47LL:
      v611 = v2557;
      v612 = v2557 + 8;
      v2557 = v612;
      v613 = *(unsigned __int64 ***)&v2559[v611];
      if ( (unsigned int)v612 > 0x2F )
      {
        v614 = (__int64 ***)v2558;
        v2558 += 8;
      }
      else
      {
        v614 = (__int64 ***)&v2559[v612];
        v2557 = v611 + 16;
      }
      v615 = *v614;
      if ( !v613 )
        goto LABEL_2657;
      sub_25BEC0(v613, *v615);
      return nullptr;
    case 48LL:
      v2020 = (unsigned __int64 ***)&v2559[v2557];
      v2557 += 8;
      if ( !*v2020 )
        goto LABEL_2666;
      sub_344D80(*v2020);
      return nullptr;
    case 49LL:
      v1716 = (__int64 *)&v2559[v2557];
      v2557 += 8;
      v1717 = *v1716;
      if ( !v1717 )
        goto LABEL_2645;
      return *(__m128i **)(v1717 + 8);
    case 50LL:
      v1305 = (__int64 **)&v2559[v2557];
      v2557 += 8;
      v1306 = *v1305;
      if ( *v1305 )
      {
        sub_2C2490(*v1305);
        qfree((__int64)v1306);
      }
      return nullptr;
    case 51LL:
      result = (__m128i *)qalloc();
      if ( !result )
        sub_548D9(16);
      result->m128i_i64[0] = 0;
      result->m128i_i64[1] = 0;
      return result;
    case 52LL:
      v752 = v2557;
      v753 = v2557 + 8;
      v2557 = v753;
      v754 = *(_QWORD **)&v2559[v752];
      if ( (unsigned int)v753 > 0x2F )
      {
        v755 = v2558;
        v2558 += 8;
      }
      else
      {
        v755 = &v2559[v753];
        v2557 = v752 + 16;
      }
      v756 = *(__int64 **)v755;
      if ( *(_QWORD *)v755 )
      {
        v757 = *v756;
        if ( *v756 && v756[1] )
          v757 = *(_QWORD *)(v757 + 8);
        *v754 = v757;
        return nullptr;
      }
      if ( under_debugger )
        goto LABEL_2700;
      goto LABEL_2207;
    case 53LL:
      v747 = v2557;
      v748 = v2557 + 8;
      v2557 = v748;
      v749 = *(_QWORD **)&v2559[v747];
      if ( (unsigned int)v748 > 0x2F )
      {
        v750 = v2558;
        v2558 += 8;
      }
      else
      {
        v750 = &v2559[v748];
        v2557 = v747 + 16;
      }
      v751 = *(_QWORD **)v750;
      if ( !v751 )
        goto LABEL_2650;
      *v749 = *v751;
      return nullptr;
    case 54LL:
      v745 = &v2559[v2557];
      v746 = *(_QWORD **)v745;
      *v746 = sub_345480(**(_QWORD ***)v745);
      return nullptr;
    case 55LL:
      v740 = &v2559[v2557];
      v741 = *(_QWORD **)v740;
      v742 = **(_QWORD ***)v740;
      if ( (*v742 & 2) != 0 )
      {
        n = (_QWORD *)v742[2];
      }
      else
      {
        v743 = (_QWORD *)v742[1];
        if ( (*(_BYTE *)v743 & 2) != 0 )
        {
          for ( n = (_QWORD *)(*v742 & 0xFFFFFFFFFFFFFFFCLL);
                (*n & 2) == 0 && (_QWORD *)n[1] == v742;
                n = (_QWORD *)(*n & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v742 = n;
          }
        }
        else
        {
          do
          {
            n = v743;
            v743 = (_QWORD *)v743[2];
          }
          while ( (*(_BYTE *)v743 & 2) == 0 );
        }
      }
      *v741 = n;
      return nullptr;
    case 56LL:
      return (__m128i *)(**(_QWORD **)&v2559[v2557] + 24LL);
    case 57LL:
      return (__m128i *)(**(_QWORD **)&v2559[v2557] + 40LL);
    case 58LL:
      v1053 = v2557;
      v1054 = v2557 + 8;
      v2557 = v1054;
      v1055 = *(_QWORD **)&v2559[v1053];
      if ( (unsigned int)v1054 > 0x2F )
      {
        v2291 = v2558;
        v1058 = (__int64 *)(v2558 + 8);
        v2558 += 8;
        v1057 = *(_QWORD ***)v2291;
      }
      else
      {
        v1056 = v1053 + 16;
        v1057 = *(_QWORD ***)&v2559[v1054];
        v2557 = v1056;
        if ( (unsigned int)v1056 <= 0x2F )
        {
          v1058 = (__int64 *)&v2559[v1056];
          v2557 = v1053 + 24;
          goto LABEL_917;
        }
        v1058 = (__int64 *)v2558;
      }
      v2558 = (char *)(v1058 + 1);
LABEL_917:
      if ( !v1057 )
        goto LABEL_2199;
      v1059 = *v1057;
      v1060 = *v1057;
      if ( !*v1057 )
        goto LABEL_927;
      v1059 = (_QWORD *)(*v1059 & 0xFFFFFFFFFFFFFFFCLL);
      if ( !v1059 )
        goto LABEL_927;
      if ( (*(_BYTE *)v1059 & 2) != 0 )
        goto LABEL_926;
      v1061 = *v1058;
      do
      {
        if ( (int)sub_257C70(v1061, (__int64)(v1059 + 3)) >= 0 )
        {
          if ( (int)sub_257C70((__int64)(v1059 + 3), v1061) >= 0 )
            goto LABEL_927;
          v1059 = (_QWORD *)v1059[2];
        }
        else
        {
          v1059 = (_QWORD *)v1059[1];
        }
      }
      while ( (*(_BYTE *)v1059 & 2) == 0 );
      v1060 = *v1057;
LABEL_926:
      v1059 = v1060;
LABEL_927:
      *v1055 = v1059;
      return nullptr;
    case 59LL:
      v1042 = v2557;
      v1043 = v2557 + 8;
      v2557 = v1043;
      v1044 = *(unsigned __int64 **)&v2559[v1042];
      if ( (unsigned int)v1043 > 0x2F )
      {
        v2283 = (__m128i **)v2558;
        v2284 = v2558 + 8;
        v2558 += 8;
        v1046 = *v2283;
      }
      else
      {
        v1045 = v1042 + 16;
        v1046 = *(__m128i **)&v2559[v1043];
        v2557 = v1045;
        if ( (unsigned int)v1045 <= 0x2F )
        {
          v1047 = v1042 + 24;
          v1048 = *(_QWORD *)&v2559[v1045];
          v2557 = v1047;
          if ( (unsigned int)v1047 <= 0x2F )
          {
            v1049 = &v2559[v1047];
            v2557 = v1042 + 32;
            goto LABEL_912;
          }
          v1049 = v2558;
LABEL_2025:
          v2558 = v1049 + 8;
LABEL_912:
          v1050 = *(int **)v1049;
          if ( v1046 )
          {
            v1051 = *(_DWORD *)(v1048 + 8);
            v1052 = *v1050;
            *(_QWORD *)v2555 = *(_QWORD *)v1048;
            *(_DWORD *)&v2555[8] = v1051;
            *(_DWORD *)&v2555[16] = v1052;
            *v1044 = sub_347580(v1046, (const __m128i *)v2555);
            return nullptr;
          }
          goto LABEL_2525;
        }
        v2284 = v2558;
      }
      v2285 = v2284;
      v1049 = v2284 + 8;
      v2558 = v1049;
      v1048 = *(_QWORD *)v2285;
      goto LABEL_2025;
    case 60LL:
      v1564 = v2557;
      v1565 = v2557 + 8;
      v2557 = v1565;
      v1566 = *(unsigned __int64 ***)&v2559[v1564];
      if ( (unsigned int)v1565 > 0x2F )
      {
        v1567 = (__int64 ***)v2558;
        v2558 += 8;
      }
      else
      {
        v1567 = (__int64 ***)&v2559[v1565];
        v2557 = v1564 + 16;
      }
      v1568 = *v1567;
      if ( !v1566 )
        goto LABEL_2657;
      sub_25D1E0(v1566, *v1568);
      return nullptr;
    case 61LL:
      v1563 = (unsigned __int64 ***)&v2559[v2557];
      v2557 += 8;
      if ( !*v1563 )
        goto LABEL_2666;
      sub_344E90(*v1563);
      return nullptr;
    case 62LL:
      v1885 = (__int64 *)&v2559[v2557];
      v2557 += 8;
      v1886 = *v1885;
      if ( !v1886 )
        goto LABEL_2645;
      return *(__m128i **)(v1886 + 8);
    case 63LL:
      v389 = (__int64 **)&v2559[v2557];
      v2557 += 8;
      v390 = *v389;
      if ( *v389 )
      {
        sub_2C2790(*v389);
        qfree((__int64)v390);
      }
      return nullptr;
    case 64LL:
      result = (__m128i *)qalloc();
      if ( !result )
        sub_548D9(16);
      result->m128i_i64[0] = 0;
      result->m128i_i64[1] = 0;
      return result;
    case 65LL:
      v1442 = v2557;
      v1443 = v2557 + 8;
      v2557 = v1443;
      v1444 = *(_QWORD **)&v2559[v1442];
      if ( (unsigned int)v1443 > 0x2F )
      {
        v1445 = v2558;
        v2558 += 8;
      }
      else
      {
        v1445 = &v2559[v1443];
        v2557 = v1442 + 16;
      }
      v1446 = *(__int64 **)v1445;
      if ( *(_QWORD *)v1445 )
      {
        v1447 = *v1446;
        if ( *v1446 && v1446[1] )
          v1447 = *(_QWORD *)(v1447 + 8);
        *v1444 = v1447;
        return nullptr;
      }
      if ( !under_debugger )
        goto LABEL_2207;
      goto LABEL_2700;
    case 66LL:
      v2060 = v2557;
      v2061 = v2557 + 8;
      v2557 = v2061;
      v2062 = *(_QWORD **)&v2559[v2060];
      if ( (unsigned int)v2061 > 0x2F )
      {
        v2063 = v2558;
        v2558 += 8;
      }
      else
      {
        v2063 = &v2559[v2061];
        v2557 = v2060 + 16;
      }
      v2064 = *(_QWORD **)v2063;
      if ( !v2064 )
        goto LABEL_2650;
      *v2062 = *v2064;
      return nullptr;
    case 67LL:
      v1440 = &v2559[v2557];
      v1441 = *(_QWORD **)v1440;
      *v1441 = sub_3454F0(**(_QWORD ***)v1440);
      return nullptr;
    case 68LL:
      v1829 = &v2559[v2557];
      v1830 = *(_QWORD **)v1829;
      v1831 = **(_QWORD ***)v1829;
      if ( (*v1831 & 2) != 0 )
      {
        ii = (_QWORD *)v1831[2];
      }
      else
      {
        v1832 = (_QWORD *)v1831[1];
        if ( (*(_BYTE *)v1832 & 2) != 0 )
        {
          for ( ii = (_QWORD *)(*v1831 & 0xFFFFFFFFFFFFFFFCLL);
                (*ii & 2) == 0 && (_QWORD *)ii[1] == v1831;
                ii = (_QWORD *)(*ii & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v1831 = ii;
          }
        }
        else
        {
          do
          {
            ii = v1832;
            v1832 = (_QWORD *)v1832[2];
          }
          while ( (*(_BYTE *)v1832 & 2) == 0 );
        }
      }
      *v1830 = ii;
      return nullptr;
    case 69LL:
      return (__m128i *)(**(_QWORD **)&v2559[v2557] + 24LL);
    case 70LL:
      return (__m128i *)(**(_QWORD **)&v2559[v2557] + 32LL);
    case 71LL:
      v899 = v2557;
      v900 = v2557 + 8;
      v2557 = v900;
      v901 = *(_QWORD **)&v2559[v899];
      if ( (unsigned int)v900 > 0x2F )
      {
        v2371 = v2558;
        v904 = v2558 + 8;
        v2558 += 8;
        v903 = *(_QWORD ***)v2371;
      }
      else
      {
        v902 = v899 + 16;
        v903 = *(_QWORD ***)&v2559[v900];
        v2557 = v902;
        if ( (unsigned int)v902 <= 0x2F )
        {
          v904 = &v2559[v902];
          v2557 = v899 + 24;
          goto LABEL_782;
        }
        v904 = v2558;
      }
      v2558 = v904 + 8;
LABEL_782:
      if ( !v903 )
        goto LABEL_2199;
      v905 = *v903;
      if ( !*v903 )
        goto LABEL_790;
      v906 = *v905 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v906 )
      {
        v905 = nullptr;
        goto LABEL_790;
      }
      if ( (*(_BYTE *)v906 & 2) != 0 )
        goto LABEL_790;
      v907 = **(_QWORD **)v904;
      while ( 2 )
      {
        v908 = *(_QWORD *)(v906 + 24);
        if ( v907 >= v908 )
        {
          if ( v908 >= v907 )
          {
            v905 = (_QWORD *)v906;
LABEL_790:
            *v901 = v905;
            return nullptr;
          }
          v906 = *(_QWORD *)(v906 + 16);
        }
        else
        {
          v906 = *(_QWORD *)(v906 + 8);
        }
        if ( (*(_BYTE *)v906 & 2) != 0 )
          goto LABEL_790;
        continue;
      }
    case 72LL:
      v1210 = v2557;
      v1211 = v2557 + 8;
      v2557 = v1211;
      v1212 = *(unsigned __int64 **)&v2559[v1210];
      if ( (unsigned int)v1211 > 0x2F )
      {
        v2369 = (__m128i **)v2558;
        v2518 = v2558 + 8;
        v2558 += 8;
        v1214 = *v2369;
      }
      else
      {
        v1213 = v1210 + 16;
        v1214 = *(__m128i **)&v2559[v1211];
        v2557 = v1213;
        if ( (unsigned int)v1213 <= 0x2F )
        {
          v1215 = v1210 + 24;
          v1216 = *(__int64 **)&v2559[v1213];
          v2557 = v1215;
          if ( (unsigned int)v1215 <= 0x2F )
          {
            v1217 = v1210 + 32;
            v1218 = &v2559[v1215];
            v2557 = v1217;
            goto LABEL_1086;
          }
          v1218 = v2558;
LABEL_2070:
          v1217 = (__int64)(v1218 + 8);
          v2558 = v1218 + 8;
LABEL_1086:
          v1219 = *(_QWORD *)v1218;
          if ( !v1214 )
            goto LABEL_2525;
          v1220 = *(_QWORD *)(v1219 + 8);
          v1221 = *v1216;
          v1222 = nullptr;
          v1223 = _mm_unpacklo_epi64((__m128i)v1220, (__m128i)v1220);
          if ( v1220 )
          {
            v2509 = 4 * v1220;
            v2550 = v1223;
            v2510 = (void *)qalloc_or_throw(4 * v1220, (__int64)v1216, v1217, 0);
            v2511 = memcpy(v2510, *(const void **)v1219, v2509);
            v1223 = _mm_load_si128(&v2550);
            v1222 = v2511;
          }
          *(_QWORD *)v2555 = v1221;
          *(_QWORD *)&v2555[8] = v1222;
          *(__m128i *)&v2555[16] = v1223;
          *v1212 = sub_3479F0(v1214, (const __m128i *)v2555);
          v1224 = *(_QWORD *)&v2555[8];
          if ( !*(_QWORD *)&v2555[8] )
            return nullptr;
LABEL_1090:
          *(_QWORD *)&v2555[16] = 0;
          qfree(v1224);
          return nullptr;
        }
        v2518 = v2558;
      }
      v2370 = v2518;
      v1218 = v2518 + 8;
      v2558 = v1218;
      v1216 = *(__int64 **)v2370;
      goto LABEL_2070;
    case 73LL:
      v1205 = v2557;
      v1206 = v2557 + 8;
      v2557 = v1206;
      v1207 = *(unsigned __int64 ***)&v2559[v1205];
      if ( (unsigned int)v1206 > 0x2F )
      {
        v1208 = (__int64 ***)v2558;
        v2558 += 8;
      }
      else
      {
        v1208 = (__int64 ***)&v2559[v1206];
        v2557 = v1205 + 16;
      }
      v1209 = *v1208;
      if ( !v1207 )
        goto LABEL_2657;
      sub_25E210(v1207, *v1209);
      return nullptr;
    case 74LL:
      v1980 = (unsigned __int64 ***)&v2559[v2557];
      v2557 += 8;
      if ( !*v1980 )
        goto LABEL_2666;
      sub_344F90(*v1980);
      return nullptr;
    case 75LL:
      v1203 = (__int64 *)&v2559[v2557];
      v2557 += 8;
      v1204 = *v1203;
      if ( !v1204 )
        goto LABEL_2645;
      return *(__m128i **)(v1204 + 8);
    case 76LL:
      v1664 = (__int64 **)&v2559[v2557];
      v2557 += 8;
      v1665 = *v1664;
      if ( *v1664 )
      {
        sub_2C29C0(*v1664);
        qfree((__int64)v1665);
      }
      return nullptr;
    case 77LL:
      result = (__m128i *)qalloc();
      if ( !result )
        sub_548D9(16);
      result->m128i_i64[0] = 0;
      result->m128i_i64[1] = 0;
      return result;
    case 78LL:
      v2122 = v2557;
      v2123 = v2557 + 8;
      v2557 = v2123;
      v2124 = *(_QWORD **)&v2559[v2122];
      if ( (unsigned int)v2123 > 0x2F )
      {
        v2125 = v2558;
        v2558 += 8;
      }
      else
      {
        v2125 = &v2559[v2123];
        v2557 = v2122 + 16;
      }
      v2126 = *(__int64 **)v2125;
      if ( *(_QWORD *)v2125 )
      {
        v2127 = *v2126;
        if ( *v2126 && v2126[1] )
          v2127 = *(_QWORD *)(v2127 + 8);
        *v2124 = v2127;
        return nullptr;
      }
      if ( under_debugger )
        goto LABEL_2700;
      goto LABEL_2207;
    case 79LL:
      v651 = v2557;
      v652 = v2557 + 8;
      v2557 = v652;
      v653 = *(_QWORD **)&v2559[v651];
      if ( (unsigned int)v652 > 0x2F )
      {
        v654 = v2558;
        v2558 += 8;
      }
      else
      {
        v654 = &v2559[v652];
        v2557 = v651 + 16;
      }
      v655 = *(_QWORD **)v654;
      if ( !v655 )
        goto LABEL_2650;
      *v653 = *v655;
      return nullptr;
    case 80LL:
      v2132 = &v2559[v2557];
      v2133 = *(_QWORD **)v2132;
      *v2133 = sub_345560(**(_QWORD ***)v2132);
      return nullptr;
    case 81LL:
      v2032 = &v2559[v2557];
      v2033 = *(_QWORD **)v2032;
      v2034 = **(_QWORD ***)v2032;
      if ( (*v2034 & 2) != 0 )
      {
        jj = (_QWORD *)v2034[2];
      }
      else
      {
        v2035 = (_QWORD *)v2034[1];
        if ( (*(_BYTE *)v2035 & 2) != 0 )
        {
          for ( jj = (_QWORD *)(*v2034 & 0xFFFFFFFFFFFFFFFCLL);
                (*jj & 2) == 0 && (_QWORD *)jj[1] == v2034;
                jj = (_QWORD *)(*jj & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v2034 = jj;
          }
        }
        else
        {
          do
          {
            jj = v2035;
            v2035 = (_QWORD *)v2035[2];
          }
          while ( (*(_BYTE *)v2035 & 2) == 0 );
        }
      }
      *v2033 = jj;
      return nullptr;
    case 82LL:
      return (__m128i *)(**(_QWORD **)&v2559[v2557] + 24LL);
    case 83LL:
      return (__m128i *)(**(_QWORD **)&v2559[v2557] + 32LL);
    case 84LL:
      v2087 = v2557;
      v2088 = v2557 + 8;
      v2557 = v2088;
      v2089 = *(_QWORD **)&v2559[v2087];
      if ( (unsigned int)v2088 > 0x2F )
      {
        v2388 = v2558;
        v2092 = v2558 + 8;
        v2558 += 8;
        v2091 = *(_QWORD ***)v2388;
      }
      else
      {
        v2090 = v2087 + 16;
        v2091 = *(_QWORD ***)&v2559[v2088];
        v2557 = v2090;
        if ( (unsigned int)v2090 <= 0x2F )
        {
          v2092 = &v2559[v2090];
          v2557 = v2087 + 24;
          goto LABEL_1894;
        }
        v2092 = v2558;
      }
      v2558 = v2092 + 8;
LABEL_1894:
      if ( !v2091 )
        goto LABEL_2199;
      v2093 = *v2091;
      if ( !*v2091 )
        goto LABEL_1902;
      v2094 = *v2093 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v2094 )
      {
        v2093 = nullptr;
        goto LABEL_1902;
      }
      if ( (*(_BYTE *)v2094 & 2) != 0 )
        goto LABEL_1902;
      v2095 = **(_DWORD **)v2092;
      while ( 2 )
      {
        if ( v2095 >= *(_DWORD *)(v2094 + 24) )
        {
          if ( v2095 <= *(_DWORD *)(v2094 + 24) )
          {
            v2093 = (_QWORD *)v2094;
LABEL_1902:
            *v2089 = v2093;
            return nullptr;
          }
          v2094 = *(_QWORD *)(v2094 + 16);
        }
        else
        {
          v2094 = *(_QWORD *)(v2094 + 8);
        }
        if ( (*(_BYTE *)v2094 & 2) != 0 )
          goto LABEL_1902;
        continue;
      }
    case 85LL:
      v1731 = v2557;
      v1732 = v2557 + 8;
      v2557 = v1732;
      v1733 = *(unsigned __int64 **)&v2559[v1731];
      if ( (unsigned int)v1732 > 0x2F )
      {
        v2180 = (__m128i **)v2558;
        v2545 = v2558 + 8;
        v2558 += 8;
        v1735 = *v2180;
      }
      else
      {
        v1734 = v1731 + 16;
        v1735 = *(__m128i **)&v2559[v1732];
        v2557 = v1734;
        if ( (unsigned int)v1734 <= 0x2F )
        {
          v1732 = v1731 + 24;
          v1736 = *(unsigned int **)&v2559[v1734];
          v2557 = v1732;
          if ( (unsigned int)v1732 <= 0x2F )
          {
            v1737 = (__int64 *)&v2559[v1732];
            v2557 = v1731 + 32;
            goto LABEL_1564;
          }
          v1737 = (__int64 *)v2558;
LABEL_1978:
          v2558 = (char *)(v1737 + 1);
LABEL_1564:
          v1738 = *v1737;
          if ( v1735 )
          {
            v1739 = *v1736;
            *(_OWORD *)v2553 = 0;
            v2552.m128i_i32[0] = v1739;
            v2552.m128i_i64[1] = 0;
            sub_343670(&v2552.m128i_i64[1], v1738, v1739, v1732);
            v1740 = _mm_load_si128((const __m128i *)v2553);
            *(_DWORD *)v2555 = v2552.m128i_i32[0];
            *(__m128i *)&v2555[16] = v1740;
            *(_QWORD *)&v2555[8] = v2552.m128i_i64[1];
            *v1733 = sub_347CA0(v1735, (const __m128i *)v2555);
            if ( *(_QWORD *)&v2555[8] )
            {
              *(_QWORD *)&v2555[16] = 0;
              qfree(*(__int64 *)&v2555[8]);
            }
            return nullptr;
          }
          goto LABEL_2525;
        }
        v2545 = v2558;
      }
      v2181 = v2545;
      v1737 = (__int64 *)(v2545 + 8);
      v2558 = (char *)v1737;
      v1736 = *(unsigned int **)v2181;
      goto LABEL_1978;
    case 86LL:
      v781 = v2557;
      v782 = v2557 + 8;
      v2557 = v782;
      v783 = *(unsigned __int64 ***)&v2559[v781];
      if ( (unsigned int)v782 > 0x2F )
      {
        v784 = (__int64 ***)v2558;
        v2558 += 8;
      }
      else
      {
        v784 = (__int64 ***)&v2559[v782];
        v2557 = v781 + 16;
      }
      v785 = *v784;
      if ( !v783 )
        goto LABEL_2657;
      sub_348430(v783, *v785);
      return nullptr;
    case 87LL:
      v780 = (unsigned __int64 ***)&v2559[v2557];
      v2557 += 8;
      if ( !*v780 )
        goto LABEL_2666;
      sub_344B60(*v780);
      return nullptr;
    case 88LL:
      v1908 = (__int64 *)&v2559[v2557];
      v2557 += 8;
      v1909 = *v1908;
      if ( !v1909 )
        goto LABEL_2645;
      return *(__m128i **)(v1909 + 8);
    case 89LL:
      v1906 = (__int64 **)&v2559[v2557];
      v2557 += 8;
      v1907 = *v1906;
      if ( *v1906 )
      {
        sub_2BBB30(*v1906);
        qfree((__int64)v1907);
      }
      return nullptr;
    case 90LL:
      result = (__m128i *)qalloc();
      if ( !result )
        sub_548D9(16);
      result->m128i_i64[0] = 0;
      result->m128i_i64[1] = 0;
      return result;
    case 91LL:
      v1070 = v2557;
      v1071 = v2557 + 8;
      v2557 = v1071;
      v1072 = *(_QWORD **)&v2559[v1070];
      if ( (unsigned int)v1071 > 0x2F )
      {
        v1073 = v2558;
        v2558 += 8;
      }
      else
      {
        v1073 = &v2559[v1071];
        v2557 = v1070 + 16;
      }
      v1074 = *(__int64 **)v1073;
      if ( *(_QWORD *)v1073 )
      {
        v1075 = *v1074;
        if ( *v1074 && v1074[1] )
          v1075 = *(_QWORD *)(v1075 + 8);
        *v1072 = v1075;
        return nullptr;
      }
      if ( under_debugger )
        goto LABEL_2700;
      goto LABEL_2207;
    case 92LL:
      v407 = v2557;
      v408 = v2557 + 8;
      v2557 = v408;
      v409 = *(_QWORD **)&v2559[v407];
      if ( (unsigned int)v408 > 0x2F )
      {
        v410 = v2558;
        v2558 += 8;
      }
      else
      {
        v410 = &v2559[v408];
        v2557 = v407 + 16;
      }
      v411 = *(_QWORD **)v410;
      if ( !v411 )
        goto LABEL_2650;
      *v409 = *v411;
      return nullptr;
    case 93LL:
      v405 = &v2559[v2557];
      v406 = *(_QWORD **)v405;
      *v406 = sub_3455D0(**(_QWORD ***)v405);
      return nullptr;
    case 94LL:
      v1584 = &v2559[v2557];
      v1585 = *(_QWORD **)v1584;
      v1586 = **(_QWORD ***)v1584;
      if ( (*v1586 & 2) != 0 )
      {
        kk = (_QWORD *)v1586[2];
      }
      else
      {
        v1587 = (_QWORD *)v1586[1];
        if ( (*(_BYTE *)v1587 & 2) != 0 )
        {
          for ( kk = (_QWORD *)(*v1586 & 0xFFFFFFFFFFFFFFFCLL);
                (*kk & 2) == 0 && (_QWORD *)kk[1] == v1586;
                kk = (_QWORD *)(*kk & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v1586 = kk;
          }
        }
        else
        {
          do
          {
            kk = v1587;
            v1587 = (_QWORD *)v1587[2];
          }
          while ( (*(_BYTE *)v1587 & 2) == 0 );
        }
      }
      *v1585 = kk;
      return nullptr;
    case 95LL:
      return (__m128i *)(**(_QWORD **)&v2559[v2557] + 24LL);
    case 96LL:
      return (__m128i *)(**(_QWORD **)&v2559[v2557] + 32LL);
    case 97LL:
      v1867 = v2557;
      v1868 = v2557 + 8;
      v2557 = v1868;
      v1869 = *(_QWORD **)&v2559[v1867];
      if ( (unsigned int)v1868 > 0x2F )
      {
        v2375 = v2558;
        v1872 = v2558 + 8;
        v2558 += 8;
        v1871 = *(_QWORD ***)v2375;
      }
      else
      {
        v1870 = v1867 + 16;
        v1871 = *(_QWORD ***)&v2559[v1868];
        v2557 = v1870;
        if ( (unsigned int)v1870 <= 0x2F )
        {
          v1872 = &v2559[v1870];
          v2557 = v1867 + 24;
          goto LABEL_1683;
        }
        v1872 = v2558;
      }
      v2558 = v1872 + 8;
LABEL_1683:
      if ( !v1871 )
        goto LABEL_2199;
      v1873 = *v1871;
      if ( !*v1871 )
        goto LABEL_1691;
      v1874 = *v1873 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v1874 )
      {
        v1873 = nullptr;
        goto LABEL_1691;
      }
      if ( (*(_BYTE *)v1874 & 2) != 0 )
        goto LABEL_1691;
      v1875 = **(_QWORD **)v1872;
      while ( 2 )
      {
        v1876 = *(_QWORD *)(v1874 + 24);
        if ( v1875 >= v1876 )
        {
          if ( v1876 >= v1875 )
          {
            v1873 = (_QWORD *)v1874;
LABEL_1691:
            *v1869 = v1873;
            return nullptr;
          }
          v1874 = *(_QWORD *)(v1874 + 16);
        }
        else
        {
          v1874 = *(_QWORD *)(v1874 + 8);
        }
        if ( (*(_BYTE *)v1874 & 2) != 0 )
          goto LABEL_1691;
        continue;
      }
    case 98LL:
      v1929 = v2557;
      v1930 = v2557 + 8;
      v2557 = v1930;
      v1931 = *(unsigned __int64 **)&v2559[v1929];
      if ( (unsigned int)v1930 > 0x2F )
      {
        v2385 = (__m128i **)v2558;
        v2386 = v2558 + 8;
        v2558 += 8;
        v1933 = *v2385;
      }
      else
      {
        v1932 = v1929 + 16;
        v1933 = *(__m128i **)&v2559[v1930];
        v2557 = v1932;
        if ( (unsigned int)v1932 <= 0x2F )
        {
          v1934 = v1929 + 24;
          v1935 = *(__int64 **)&v2559[v1932];
          v2557 = v1934;
          if ( (unsigned int)v1934 <= 0x2F )
          {
            v1936 = v1929 + 32;
            v1937 = &v2559[v1934];
            v2557 = v1936;
            goto LABEL_1748;
          }
          v1937 = v2558;
LABEL_2079:
          v1936 = (__int64)(v1937 + 8);
          v2558 = v1937 + 8;
LABEL_1748:
          v1938 = *(_QWORD *)v1937;
          if ( !v1933 )
            goto LABEL_2525;
          v1939 = *(_QWORD *)(v1938 + 8);
          v1940 = *v1935;
          v1941 = nullptr;
          v1942 = _mm_unpacklo_epi64((__m128i)v1939, (__m128i)v1939);
          if ( v1939 )
          {
            v2506 = 8 * v1939;
            v2550 = v1942;
            v2507 = (void *)qalloc_or_throw(8 * v1939, (__int64)v1935, v1936, 0);
            v2508 = memcpy(v2507, *(const void **)v1938, v2506);
            v1942 = _mm_load_si128(&v2550);
            v1941 = v2508;
          }
          *(_QWORD *)v2555 = v1940;
          *(_QWORD *)&v2555[8] = v1941;
          *(__m128i *)&v2555[16] = v1942;
          *v1931 = sub_348D10(v1933, (const __m128i *)v2555);
          v1224 = *(_QWORD *)&v2555[8];
          if ( !*(_QWORD *)&v2555[8] )
            return nullptr;
          goto LABEL_1090;
        }
        v2386 = v2558;
      }
      v2387 = v2386;
      v1937 = v2386 + 8;
      v2558 = v1937;
      v1935 = *(__int64 **)v2387;
      goto LABEL_2079;
    case 99LL:
      v1364 = v2557;
      v1365 = v2557 + 8;
      v2557 = v1365;
      v1366 = *(unsigned __int64 ***)&v2559[v1364];
      if ( (unsigned int)v1365 > 0x2F )
      {
        v1367 = (__int64 ***)v2558;
        v2558 += 8;
      }
      else
      {
        v1367 = (__int64 ***)&v2559[v1365];
        v2557 = v1364 + 16;
      }
      v1368 = *v1367;
      if ( !v1366 )
        goto LABEL_2657;
      sub_3494A0(v1366, *v1368);
      return nullptr;
    case 100LL:
      v1794 = (unsigned __int64 ***)&v2559[v2557];
      v2557 += 8;
      if ( !*v1794 )
        goto LABEL_2666;
      sub_3450A0(*v1794);
      return nullptr;
    case 101LL:
      v1792 = (__int64 *)&v2559[v2557];
      v2557 += 8;
      v1793 = *v1792;
      if ( !v1793 )
        goto LABEL_2645;
      return *(__m128i **)(v1793 + 8);
    case 102LL:
      v1795 = (__int64 **)&v2559[v2557];
      v2557 += 8;
      v1796 = *v1795;
      if ( *v1795 )
      {
        sub_344900(*v1795);
        qfree((__int64)v1796);
      }
      return nullptr;
    case 103LL:
      result = (__m128i *)qalloc();
      if ( !result )
        sub_548D9(16);
      result->m128i_i64[0] = 0;
      result->m128i_i64[1] = 0;
      return result;
    case 104LL:
      v512 = v2557;
      v513 = v2557 + 8;
      v2557 = v513;
      v514 = *(_QWORD **)&v2559[v512];
      if ( (unsigned int)v513 > 0x2F )
      {
        v515 = v2558;
        v2558 += 8;
      }
      else
      {
        v515 = &v2559[v513];
        v2557 = v512 + 16;
      }
      v516 = *(__int64 **)v515;
      if ( *(_QWORD *)v515 )
      {
        v517 = *v516;
        if ( *v516 && v516[1] )
          v517 = *(_QWORD *)(v517 + 8);
        *v514 = v517;
        return nullptr;
      }
      if ( under_debugger )
        goto LABEL_2700;
      goto LABEL_2207;
    case 105LL:
      v507 = v2557;
      v508 = v2557 + 8;
      v2557 = v508;
      v509 = *(_QWORD **)&v2559[v507];
      if ( (unsigned int)v508 > 0x2F )
      {
        v510 = v2558;
        v2558 += 8;
      }
      else
      {
        v510 = &v2559[v508];
        v2557 = v507 + 16;
      }
      v511 = *(_QWORD **)v510;
      if ( !v511 )
        goto LABEL_2650;
      *v509 = *v511;
      return nullptr;
    case 106LL:
      v505 = &v2559[v2557];
      v506 = *(_QWORD **)v505;
      *v506 = sub_345640(**(_QWORD ***)v505);
      return nullptr;
    case 107LL:
      v500 = &v2559[v2557];
      v501 = *(_QWORD **)v500;
      v502 = **(_QWORD ***)v500;
      if ( (*v502 & 2) != 0 )
      {
        mm = (_QWORD *)v502[2];
      }
      else
      {
        v503 = (_QWORD *)v502[1];
        if ( (*(_BYTE *)v503 & 2) != 0 )
        {
          for ( mm = (_QWORD *)(*v502 & 0xFFFFFFFFFFFFFFFCLL);
                (*mm & 2) == 0 && (_QWORD *)mm[1] == v502;
                mm = (_QWORD *)(*mm & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v502 = mm;
          }
        }
        else
        {
          do
          {
            mm = v503;
            v503 = (_QWORD *)v503[2];
          }
          while ( (*(_BYTE *)v503 & 2) == 0 );
        }
      }
      *v501 = mm;
      return nullptr;
    case 108LL:
      return (__m128i *)(**(_QWORD **)&v2559[v2557] + 24LL);
    case 109LL:
      return (__m128i *)(**(_QWORD **)&v2559[v2557] + 32LL);
    case 110LL:
      v1155 = v2557;
      v1156 = v2557 + 8;
      v2557 = v1156;
      v1157 = *(_QWORD **)&v2559[v1155];
      if ( (unsigned int)v1156 > 0x2F )
      {
        v2223 = v2558;
        v1160 = (__int64 **)(v2558 + 8);
        v2558 += 8;
        v1159 = *(_QWORD ***)v2223;
      }
      else
      {
        v1158 = v1155 + 16;
        v1159 = *(_QWORD ***)&v2559[v1156];
        v2557 = v1158;
        if ( (unsigned int)v1158 <= 0x2F )
        {
          v1160 = (__int64 **)&v2559[v1158];
          v2557 = v1155 + 24;
          goto LABEL_1021;
        }
        v1160 = (__int64 **)v2558;
      }
      v2558 = (char *)(v1160 + 1);
LABEL_1021:
      if ( !v1159 )
      {
LABEL_2199:
        if ( !under_debugger )
          sub_383060(0xCD9Au, *(double *)a7.m128_u64);
        goto LABEL_2700;
      }
      v1161 = *v1159;
      v1162 = *v1159;
      if ( !*v1159 )
        goto LABEL_1038;
      v1161 = (_QWORD *)(*v1161 & 0xFFFFFFFFFFFFFFFCLL);
      if ( !v1161 )
        goto LABEL_1038;
      if ( (*(_BYTE *)v1161 & 2) == 0 )
      {
        v1163 = *v1160;
        while ( 1 )
        {
          v1164 = (char *)v1161[3];
          v1165 = (char *)*v1163;
          v2550.m128i_i64[0] = (__int64)(v1161 + 3);
          if ( v1164 == v1165 )
            goto LABEL_1038;
          if ( v1165 == &byte_1 || !v1164 )
            break;
          if ( v1164 != &byte_1 && v1165 )
          {
            v1166 = sub_2596A0((__int64)v1165, (__int64)v1164, *(double *)a7.m128_u64);
            if ( v1166 )
              v1167 = v1166 >> 31;
            else
              LOBYTE(v1167) = *(_QWORD *)v1165 < *(_QWORD *)v1164;
            if ( !(_BYTE)v1167 )
            {
              v2528 = (char *)*v1163;
              v2529 = *(char **)v2550.m128i_i64[0];
              if ( *v1163 == *(_QWORD *)v2550.m128i_i64[0] || v2529 == &byte_1 || !v2528 )
                goto LABEL_1038;
              if ( v2528 != &byte_1 && v2529 )
              {
                v2530 = sub_2596A0(*(_QWORD *)v2550.m128i_i64[0], *v1163, *(double *)a7.m128_u64);
                if ( v2530 )
                {
                  if ( v2530 >= 0 )
                    goto LABEL_1038;
                }
                else if ( *(_QWORD *)v2529 >= *(_QWORD *)v2528 )
                {
                  goto LABEL_1038;
                }
              }
LABEL_2142:
              v1161 = (_QWORD *)v1161[2];
              goto LABEL_1035;
            }
          }
          v1161 = (_QWORD *)v1161[1];
LABEL_1035:
          if ( (*(_BYTE *)v1161 & 2) != 0 )
          {
            v1162 = *v1159;
            goto LABEL_1037;
          }
        }
        if ( !v1165 || v1164 == &byte_1 )
          goto LABEL_1038;
        goto LABEL_2142;
      }
LABEL_1037:
      v1161 = v1162;
LABEL_1038:
      *v1157 = v1161;
      return nullptr;
    case 111LL:
      v488 = v2557;
      v489 = v2557 + 8;
      v2557 = v489;
      v490 = *(unsigned __int64 **)&v2559[v488];
      if ( (unsigned int)v489 > 0x2F )
      {
        v2257 = (__m128i **)v2558;
        v2258 = v2558 + 8;
        v2558 += 8;
        v492 = *v2257;
      }
      else
      {
        v491 = v488 + 16;
        v492 = *(__m128i **)&v2559[v489];
        v2557 = v491;
        if ( (unsigned int)v491 <= 0x2F )
        {
          v489 = v488 + 24;
          v493 = *(__int64 **)&v2559[v491];
          v2557 = v489;
          if ( (unsigned int)v489 <= 0x2F )
          {
            v494 = (__int64 *)&v2559[v489];
            v2557 = v488 + 32;
            goto LABEL_431;
          }
          v494 = (__int64 *)v2558;
LABEL_2012:
          v2558 = (char *)(v494 + 1);
LABEL_431:
          v495 = *v494;
          if ( v492 )
          {
            v496 = *v493;
            *(_OWORD *)v2553 = 0;
            v2552 = (__m128i)(unsigned __int64)v496;
            sub_3436C0(&v2552.m128i_i64[1], v495, v496, v489);
            v497 = v2552.m128i_i64[1];
            *(_QWORD *)&v2553[16] = 0;
            LODWORD(v2554) = -1;
            *(_OWORD *)v2555 = v2552.m128i_u64[0];
            *(_OWORD *)&v2555[16] = 0;
            sub_3436C0(&v2555[8], (__int64)&v2552.m128i_i64[1], v498, v499);
            *(_QWORD *)&v2555[32] = 0;
            *(_DWORD *)&v2555[40] = -1;
            *v490 = sub_349E00(v492, (__int64 *)v2555, 0.0);
            if ( *(_QWORD *)&v2555[8] )
            {
              *(_QWORD *)&v2555[16] = 0;
              qfree(*(__int64 *)&v2555[8]);
            }
            if ( v497 )
              qfree(v497);
            return nullptr;
          }
          goto LABEL_2525;
        }
        v2258 = v2558;
      }
      v2259 = (__int64 **)v2258;
      v494 = (__int64 *)(v2258 + 8);
      v2558 = (char *)v494;
      v493 = *v2259;
      goto LABEL_2012;
    case 112LL:
      v1250 = v2557;
      v1251 = v2557 + 8;
      v2557 = v1251;
      v1252 = *(unsigned __int64 ***)&v2559[v1250];
      if ( (unsigned int)v1251 > 0x2F )
      {
        v1253 = (__int64 ***)v2558;
        v2558 += 8;
      }
      else
      {
        v1253 = (__int64 ***)&v2559[v1251];
        v2557 = v1250 + 16;
      }
      v1254 = *v1253;
      if ( !v1252 )
        goto LABEL_2657;
      sub_34A570(v1252, *v1254);
      return nullptr;
    case 113LL:
      v1249 = (unsigned __int64 ***)&v2559[v2557];
      v2557 += 8;
      if ( !*v1249 )
        goto LABEL_2666;
      sub_3451B0(*v1249);
      return nullptr;
    case 114LL:
      v1706 = (__int64 *)&v2559[v2557];
      v2557 += 8;
      v1707 = *v1706;
      if ( !v1707 )
        goto LABEL_2645;
      return *(__m128i **)(v1707 + 8);
    case 115LL:
      v686 = (__int64 **)&v2559[v2557];
      v2557 += 8;
      v687 = *v686;
      if ( *v686 )
      {
        sub_344A30(*v686);
        qfree((__int64)v687);
      }
      return nullptr;
    case 116LL:
      result = (__m128i *)qalloc();
      if ( !result )
        sub_548D9(16);
      result->m128i_i64[0] = 0;
      result->m128i_i64[1] = 0;
      return result;
    case 117LL:
      v680 = v2557;
      v681 = v2557 + 8;
      v2557 = v681;
      v682 = *(_QWORD **)&v2559[v680];
      if ( (unsigned int)v681 > 0x2F )
      {
        v683 = v2558;
        v2558 += 8;
      }
      else
      {
        v683 = &v2559[v681];
        v2557 = v680 + 16;
      }
      v684 = *(__int64 **)v683;
      if ( *(_QWORD *)v683 )
      {
        v685 = *v684;
        if ( *v684 && v684[1] )
          v685 = *(_QWORD *)(v685 + 8);
        *v682 = v685;
        return nullptr;
      }
LABEL_2315:
      if ( under_debugger )
        goto LABEL_2700;
      goto LABEL_2207;
    case 118LL:
      v675 = v2557;
      v676 = v2557 + 8;
      v2557 = v676;
      v677 = *(_QWORD **)&v2559[v675];
      if ( (unsigned int)v676 > 0x2F )
      {
        v678 = v2558;
        v2558 += 8;
      }
      else
      {
        v678 = &v2559[v676];
        v2557 = v675 + 16;
      }
      v679 = *(_QWORD **)v678;
      if ( !v679 )
      {
LABEL_2650:
        if ( !under_debugger )
          sub_383060(0xCD9Fu, *(double *)a7.m128_u64);
        goto LABEL_2700;
      }
      *v677 = *v679;
      return nullptr;
    case 119LL:
      v673 = &v2559[v2557];
      v674 = *(_QWORD **)v673;
      *v674 = sub_106CC0(**(_QWORD ***)v673);
      return nullptr;
    case 120LL:
      v1523 = &v2559[v2557];
      v1524 = *(_QWORD **)v1523;
      v1525 = **(_QWORD ***)v1523;
      if ( (*v1525 & 2) != 0 )
      {
        nn = (_QWORD *)v1525[2];
      }
      else
      {
        v1526 = (_QWORD *)v1525[1];
        if ( (*(_BYTE *)v1526 & 2) != 0 )
        {
          for ( nn = (_QWORD *)(*v1525 & 0xFFFFFFFFFFFFFFFCLL);
                (*nn & 2) == 0 && (_QWORD *)nn[1] == v1525;
                nn = (_QWORD *)(*nn & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v1525 = nn;
          }
        }
        else
        {
          do
          {
            nn = v1526;
            v1526 = (_QWORD *)v1526[2];
          }
          while ( (*(_BYTE *)v1526 & 2) == 0 );
        }
      }
      *v1524 = nn;
      return nullptr;
    case 121LL:
      return (__m128i *)(**(_QWORD **)&v2559[v2557] + 24LL);
    case 122LL:
      v1528 = v2557;
      v1529 = v2557 + 8;
      v2557 = v1529;
      v1530 = *(_QWORD **)&v2559[v1528];
      if ( (unsigned int)v1529 > 0x2F )
      {
        v2240 = v2558;
        v1533 = v2558 + 8;
        v2558 += 8;
        v1532 = *(_QWORD ***)v2240;
      }
      else
      {
        v1531 = v1528 + 16;
        v1532 = *(_QWORD ***)&v2559[v1529];
        v2557 = v1531;
        if ( (unsigned int)v1531 <= 0x2F )
        {
          v1533 = &v2559[v1531];
          v2557 = v1528 + 24;
          goto LABEL_1363;
        }
        v1533 = v2558;
      }
      v2558 = v1533 + 8;
LABEL_1363:
      if ( !v1532 )
      {
        if ( !under_debugger )
          sub_383060(0xCD9Cu, *(double *)a7.m128_u64);
LABEL_2700:
        BUG();
      }
      v1534 = *v1532;
      if ( !*v1532 )
        goto LABEL_1373;
      v1535 = *v1534 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v1535 )
      {
        v1534 = nullptr;
LABEL_1373:
        *v1530 = v1534;
        return nullptr;
      }
      if ( (*(_BYTE *)v1535 & 2) != 0 )
        goto LABEL_1373;
      v1536 = *(_QWORD *)v1533;
      v1537 = *(_BYTE *)(*(_QWORD *)v1533 + 32LL);
      while ( 1 )
      {
        v1538 = *(_BYTE *)(v1535 + 56);
        if ( v1537 < v1538 )
          break;
        if ( v1538 >= v1537 )
        {
          v1539 = *(_QWORD *)(v1535 + 48);
          if ( *(_QWORD *)(v1536 + 24) < v1539 )
            break;
          if ( *(_QWORD *)(v1536 + 24) <= v1539 )
          {
            v1534 = (_QWORD *)v1535;
            goto LABEL_1373;
          }
        }
        v1535 = *(_QWORD *)(v1535 + 16);
LABEL_2131:
        if ( (*(_BYTE *)v1535 & 2) != 0 )
          goto LABEL_1373;
      }
      v1535 = *(_QWORD *)(v1535 + 8);
      goto LABEL_2131;
    case 123LL:
      v1016 = v2557;
      v1017 = v2557 + 8;
      v2557 = v1017;
      v1018 = *(_QWORD **)&v2559[v1016];
      if ( (unsigned int)v1017 > 0x2F )
      {
        v2286 = (__m128i **)v2558;
        v1021 = (__int64 *)(v2558 + 8);
        v2558 += 8;
        v1020 = *v2286;
      }
      else
      {
        v1019 = v1016 + 16;
        v1020 = *(__m128i **)&v2559[v1017];
        v2557 = v1019;
        if ( (unsigned int)v1019 <= 0x2F )
        {
          v1021 = (__int64 *)&v2559[v1019];
          v2557 = v1016 + 24;
          goto LABEL_889;
        }
        v1021 = (__int64 *)v2558;
      }
      v2558 = (char *)(v1021 + 1);
LABEL_889:
      v1022 = *v1021;
      if ( v1020 )
      {
        *(_QWORD *)v2555 = *v1021;
        *v1018 = sub_1075D0(v1020, v1022, (__int64 *)v2555);
        return nullptr;
      }
      if ( !under_debugger )
        sub_383060(0xCD9Du, *(double *)a7.m128_u64);
      goto LABEL_2700;
    case 124LL:
      v1024 = v2557;
      v1025 = v2557 + 8;
      v2557 = v1025;
      v1026 = *(unsigned __int64 ***)&v2559[v1024];
      if ( (unsigned int)v1025 > 0x2F )
      {
        v1027 = (__int64 ***)v2558;
        v2558 += 8;
      }
      else
      {
        v1027 = (__int64 ***)&v2559[v1025];
        v2557 = v1024 + 16;
      }
      v1028 = *v1027;
      if ( v1026 )
      {
        sub_107EB0(v1026, *v1028);
        return nullptr;
      }
LABEL_2657:
      if ( !under_debugger )
        sub_383060(0xCDA0u, *(double *)a7.m128_u64);
      goto LABEL_2700;
    case 125LL:
      v1023 = (unsigned __int64 ***)&v2559[v2557];
      v2557 += 8;
      if ( *v1023 )
      {
        sub_106670(*v1023);
        return nullptr;
      }
LABEL_2666:
      if ( !under_debugger )
        sub_383060(0xCDA1u, *(double *)a7.m128_u64);
      goto LABEL_2700;
    case 126LL:
      v380 = (__int64 *)&v2559[v2557];
      v2557 += 8;
      v381 = *v380;
      if ( v381 )
        return *(__m128i **)(v381 + 8);
LABEL_2645:
      if ( !under_debugger )
        sub_383060(0xCDA2u, *(double *)a7.m128_u64);
      goto LABEL_2700;
    case 127LL:
      v378 = (__int64 **)&v2559[v2557];
      v2557 += 8;
      v379 = *v378;
      if ( *v378 )
      {
        sub_E0E30(*v378);
        j__qfree((__int64)v379);
      }
      return nullptr;
    case 128LL:
      result = (__m128i *)j__qalloc_or_throw(24, (__int64)a2, a3, a4);
      result->m128i_i64[0] = 0;
      result->m128i_i64[1] = 0;
      result[1].m128i_i32[0] = -1;
      return result;
    case 129LL:
      return (__m128i *)j__qalloc_or_throw(*(_QWORD *)&v2559[v2557], (__int64)a2, a3, a4);
    case 130LL:
      j__qfree(*(_QWORD *)&v2559[v2557]);
      return nullptr;
    case 131LL:
      sub_312B80(*(_QWORD *)&v2559[v2557], *(double *)a7.m128_u64);
      return nullptr;
    case 132LL:
      v953 = v2557 + 8;
      v954 = (__int64 *)&v2559[v953];
      if ( (unsigned int)v953 > 0x2F )
        v954 = (__int64 *)v2558;
      sub_312C40(*(_QWORD *)&v2559[v2557], *v954, v2557, v953, *(double *)a7.m128_u64);
      return nullptr;
    case 133LL:
      v951 = v2557 + 8;
      v952 = (__int64 *)&v2559[v951];
      if ( (unsigned int)v951 > 0x2F )
        v952 = (__int64 *)v2558;
      return (__m128i *)sub_312D90(*(_QWORD *)&v2559[v2557], *v952, *(double *)a7.m128_u64);
    case 134LL:
      v1708 = v2557 + 8;
      v1709 = (__int64 *)&v2559[v1708];
      if ( (unsigned int)v1708 > 0x2F )
        v1709 = (__int64 *)v2558;
      return (__m128i *)(int)sub_312DC0(*(_QWORD *)&v2559[v2557], *v1709, *(double *)a7.m128_u64);
    case 135LL:
      v949 = v2557 + 8;
      v950 = (unsigned __int64 *)&v2559[v949];
      if ( (unsigned int)v949 > 0x2F )
        v950 = (unsigned __int64 *)v2558;
      sub_313160(*(_QWORD *)&v2559[v2557], *v950, *(double *)a7.m128_u64, a8);
      return nullptr;
    case 136LL:
      v1955 = v2557;
      v1956 = v2557 + 8;
      v2557 = v1956;
      v1957 = *(_QWORD *)&v2559[v1955];
      if ( (unsigned int)v1956 > 0x2F )
      {
        v2397 = (int *)v2558;
        v1960 = (unsigned __int64 *)(v2558 + 8);
        v2558 += 8;
        v1959 = *v2397;
      }
      else
      {
        v1958 = v1955 + 16;
        v1959 = *(_DWORD *)&v2559[v1956];
        if ( (unsigned int)v1958 > 0x2F )
          v1960 = (unsigned __int64 *)v2558;
        else
          v1960 = (unsigned __int64 *)&v2559[v1958];
      }
      sub_313200(v1957, v1959, *v1960, *(double *)a7.m128_u64, a8);
      return nullptr;
    case 137LL:
      v1803 = v2557 + 8;
      v1804 = (unsigned int *)&v2559[v1803];
      if ( (unsigned int)v1803 > 0x2F )
        v1804 = (unsigned int *)v2558;
      return (__m128i *)(unsigned __int8)sub_3156C0(
                                           *(__m128i **)&v2559[v2557],
                                           *v1804,
                                           v2557,
                                           v1803,
                                           *(double *)a7.m128_u64,
                                           a8);
    case 138LL:
      v1229 = v2557 + 8;
      v1230 = (int **)&v2559[v1229];
      if ( (unsigned int)v1229 > 0x2F )
        v1230 = (int **)v2558;
      return (__m128i *)(unsigned __int8)sub_3147B0(*(_QWORD *)&v2559[v2557], *v1230, *(double *)a7.m128_u64);
    case 139LL:
      v1227 = v2557 + 8;
      v1228 = (int **)&v2559[v1227];
      if ( (unsigned int)v1227 > 0x2F )
        v1228 = (int **)v2558;
      return (__m128i *)(unsigned __int8)sub_314C00(*(int **)&v2559[v2557], *v1228, *(double *)a7.m128_u64);
    case 140LL:
      sub_315730(*(__m128i **)&v2559[v2557], *(double *)a7.m128_u64, a8);
      return nullptr;
    case 141LL:
      v1631 = v2557 + 8;
      v1632 = (unsigned __int64 *)&v2559[v1631];
      if ( (unsigned int)v1631 > 0x2F )
        v1632 = (unsigned __int64 *)v2558;
      return (__m128i *)sub_315890(*(_QWORD *)&v2559[v2557], *v1632, *(double *)a7.m128_u64);
    case 142LL:
      v1633 = v2557 + 8;
      v1634 = (__int64 **)&v2559[v1633];
      if ( (unsigned int)v1633 > 0x2F )
        v1634 = (__int64 **)v2558;
      sub_315E10(*(_QWORD *)&v2559[v2557], *v1634, *(double *)a7.m128_u64);
      return nullptr;
    case 143LL:
      return (__m128i *)sub_1AE530(*(_QWORD *)&v2559[v2557]);
    case 144LL:
      v1674 = v2557 + 8;
      v1675 = &v2559[v1674];
      if ( (unsigned int)v1674 > 0x2F )
        v1675 = v2558;
      return (__m128i *)(unsigned __int8)sub_312AF0(*(_QWORD *)&v2559[v2557], *(_QWORD **)v1675);
    case 145LL:
      v1668 = v2557;
      v1669 = v2557 + 8;
      v2557 = v1669;
      v1670 = *(_DWORD **)&v2559[v1668];
      if ( (unsigned int)v1669 > 0x2F )
      {
        v2225 = v2558;
        v1673 = (__int64 **)(v2558 + 8);
        v2558 += 8;
        v1672 = *(_DWORD **)v2225;
      }
      else
      {
        v1671 = v1668 + 16;
        v1672 = *(_DWORD **)&v2559[v1669];
        if ( (unsigned int)v1671 > 0x2F )
          v1673 = (__int64 **)v2558;
        else
          v1673 = (__int64 **)&v2559[v1671];
      }
      return (__m128i *)(unsigned __int8)sub_312B30(v1670, v1672, *v1673);
    case 146LL:
      v1755 = v2557;
      v1756 = v2557 + 8;
      v1757 = *(__int64 **)&v2559[v2557];
      if ( (unsigned int)v1756 > 0x2F )
      {
        v2404 = (__int64 **)v2558;
        v2405 = v2558 + 8;
        v2558 += 8;
        v1759 = *v2404;
      }
      else
      {
        v1758 = v2557 + 16;
        v1759 = *(__int64 **)&v2559[v1756];
        v2557 = v1758;
        if ( (unsigned int)v1758 <= 0x2F )
        {
          v1760 = v1755 + 24;
          v1761 = *(_DWORD *)&v2559[v1758];
          if ( (unsigned int)v1760 > 0x2F )
            v1762 = v2558;
          else
            v1762 = &v2559[v1760];
LABEL_1585:
          *v1757 = sub_3369B0(v1759, v1761, *(_QWORD **)v1762, *(double *)a7.m128_u64);
          return nullptr;
        }
        v2405 = v2558;
      }
      v2406 = (int *)v2405;
      v1762 = v2405 + 8;
      v2558 = v1762;
      v1761 = *v2406;
      goto LABEL_1585;
    case 147LL:
      v1345 = v2557 + 8;
      v1346 = &v2559[v1345];
      if ( (unsigned int)v1345 > 0x2F )
        v1346 = v2558;
      return (__m128i *)sub_32ED40(*(_DWORD *)&v2559[v2557], *(_DWORD *)v1346 != 0);
    case 148LL:
      return (__m128i *)sub_32ED70(*(unsigned int *)&v2559[v2557]);
    case 149LL:
      return (__m128i *)(unsigned int)sub_32E9E0(*(_DWORD *)&v2559[v2557]);
    case 150LL:
      return (__m128i *)(unsigned int)sub_32EA00(*(_DWORD *)&v2559[v2557]);
    case 151LL:
      return (__m128i *)(unsigned int)sub_32EA20(*(_DWORD *)&v2559[v2557]);
    case 152LL:
      return (__m128i *)(unsigned int)sub_32EAF0(*(_DWORD *)&v2559[v2557]);
    case 153LL:
      return (__m128i *)sub_11E8A0(*(unsigned int *)&v2559[v2557]);
    case 154LL:
      v443 = v2557 + 8;
      v444 = (__int64 *)&v2559[v443];
      if ( (unsigned int)v443 > 0x2F )
        v444 = (__int64 *)v2558;
      return (__m128i *)(int)sub_257C40(*(_QWORD *)&v2559[v2557], *v444);
    case 155LL:
      v436 = v2557;
      v437 = v2557 + 8;
      v438 = *(_QWORD **)&v2559[v2557];
      if ( (unsigned int)v437 > 0x2F )
      {
        v2358 = (int *)v2558;
        v2359 = v2558 + 8;
        v2558 += 8;
        v439 = *v2358;
      }
      else
      {
        v439 = *(_DWORD *)&v2559[v437];
        v2557 += 16;
        if ( v436 + 16 <= 0x2F )
        {
          v440 = v436 + 24;
          if ( (unsigned int)v440 > 0x2F )
            v441 = v2558;
          else
            v441 = &v2559[v440];
LABEL_387:
          v442 = *(const __m128i **)v441;
          v2560 = _mm_loadu_si128((const __m128i *)*(_QWORD *)v441);
          v2561 = v442[1].m128i_i64[0];
          return (__m128i *)(int)sub_334570(v438, v439);
        }
        v2359 = v2558;
      }
      v441 = v2359 + 8;
      v2558 = v441;
      goto LABEL_387;
    case 156LL:
      v1085 = v2557;
      v1086 = v2557 + 8;
      v1087 = *(_QWORD *)&v2559[v2557];
      if ( (unsigned int)v1086 > 0x2F )
      {
        v2402 = (int *)v2558;
        v2403 = v2558 + 8;
        v2558 += 8;
        v1088 = *v2402;
      }
      else
      {
        v1088 = *(_DWORD *)&v2559[v1086];
        v2557 += 16;
        if ( v1085 + 16 <= 0x2F )
        {
          v1089 = v1085 + 24;
          if ( (unsigned int)v1089 > 0x2F )
            v1090 = v2558;
          else
            v1090 = &v2559[v1089];
LABEL_964:
          v1091 = *(const __m128i **)v1090;
          v2560 = _mm_loadu_si128((const __m128i *)*(_QWORD *)v1090);
          v2561 = v1091[1].m128i_i64[0];
          return (__m128i *)(int)sub_3347E0(v1087, v1088);
        }
        v2403 = v2558;
      }
      v1090 = v2403 + 8;
      v2558 = v1090;
      goto LABEL_964;
    case 157LL:
      v1078 = v2557;
      v1079 = v2557 + 8;
      v1080 = *(_QWORD *)&v2559[v2557];
      if ( (unsigned int)v1079 > 0x2F )
      {
        v2299 = (int *)v2558;
        v2300 = v2558 + 8;
        v2558 += 8;
        v1081 = *v2299;
      }
      else
      {
        v1081 = *(_DWORD *)&v2559[v1079];
        v2557 += 16;
        if ( v1078 + 16 <= 0x2F )
        {
          v1082 = v1078 + 24;
          if ( (unsigned int)v1082 > 0x2F )
            v1083 = v2558;
          else
            v1083 = &v2559[v1082];
LABEL_959:
          v1084 = *(const __m128i **)v1083;
          v2560 = _mm_loadu_si128((const __m128i *)*(_QWORD *)v1083);
          v2561 = v1084[1].m128i_i64[0];
          return (__m128i *)(int)sub_269C10(v1080, v1081);
        }
        v2300 = v2558;
      }
      v1083 = v2300 + 8;
      v2558 = v1083;
      goto LABEL_959;
    case 158LL:
      return (__m128i *)j__dstr_tinfo();
    case 159LL:
      return (__m128i *)(unsigned __int8)sub_32E730(*(_QWORD *)&v2559[v2557]);
    case 160LL:
      return (__m128i *)sub_32C8F0();
    case 161LL:
      return (__m128i *)(unsigned __int8)sub_29CFE0(*(__int64 **)&v2559[v2557]);
    case 162LL:
      return (__m128i *)(unsigned __int8)sub_29CC80(*(_QWORD **)&v2559[v2557]);
    case 163LL:
      return (__m128i *)(int)sub_32E340(*(__int64 **)&v2559[v2557]);
    case 164LL:
      v1380 = v2557;
      v1381 = v2557 + 8;
      v2557 = v1381;
      if ( (unsigned int)v1381 > 0x2F )
      {
        v1382 = (int *)v2558;
        v2558 += 8;
      }
      else
      {
        v1382 = (int *)&v2559[v1381];
        v2557 = v1380 + 16;
      }
      v1383 = *v1382;
      v1384 = sub_339CA0();
      sub_32C150(v2555, v1384, v1383, *(double *)a7.m128_u64);
      copy_tinfo_t();
      clear_tinfo_t();
      return nullptr;
    case 165LL:
      v1373 = v2557;
      v1374 = v2557 + 8;
      v2557 = v1374;
      if ( (unsigned int)v1374 > 0x2F )
      {
        v2204 = (unsigned int *)v2558;
        v1377 = (int *)(v2558 + 8);
        v2558 += 8;
        v1376 = *v2204;
      }
      else
      {
        v1375 = v1373 + 16;
        v1376 = *(_DWORD *)&v2559[v1374];
        v2557 = v1375;
        if ( (unsigned int)v1375 <= 0x2F )
        {
          v1377 = (int *)&v2559[v1375];
          v2557 = v1373 + 24;
          goto LABEL_1240;
        }
        v1377 = (int *)v2558;
      }
      v2558 = (char *)(v1377 + 2);
LABEL_1240:
      v1378 = *v1377;
      v1379 = sub_339CA0();
      sub_32C430((__int64 *)v2555, v1379, v1376, v1378);
      copy_tinfo_t();
      clear_tinfo_t();
      return nullptr;
    case 166LL:
      v864 = v2557;
      v865 = v2557 + 8;
      v2557 = v865;
      if ( (unsigned int)v865 > 0x2F )
      {
        v866 = (int *)v2558;
        v2558 += 8;
      }
      else
      {
        v866 = (int *)&v2559[v865];
        v2557 = v864 + 16;
      }
      v867 = *v866;
      v868 = sub_339CA0();
      sub_32C270(v2555, v868, v867);
      copy_tinfo_t();
      clear_tinfo_t();
      return nullptr;
    case 167LL:
      v857 = v2557;
      v858 = v2557 + 8;
      v2557 = v858;
      if ( (unsigned int)v858 > 0x2F )
      {
        v2281 = (int *)v2558;
        v861 = v2558 + 8;
        v2558 += 8;
        v860 = *v2281;
      }
      else
      {
        v859 = v857 + 16;
        v860 = *(_DWORD *)&v2559[v858];
        v2557 = v859;
        if ( (unsigned int)v859 <= 0x2F )
        {
          v861 = &v2559[v859];
          v2557 = v857 + 24;
          goto LABEL_739;
        }
        v861 = v2558;
      }
      v2558 = v861 + 8;
LABEL_739:
      v862 = *(_DWORD *)v861 != 0;
      v863 = sub_339CA0();
      sub_32C2C0((__int64 *)v2555, v863, v860, v862, *(double *)a7.m128_u64);
      copy_tinfo_t();
      clear_tinfo_t();
      return nullptr;
    case 169LL:
      v583 = v2557;
      v584 = v2557 + 8;
      v2557 = v584;
      if ( (unsigned int)v584 > 0x2F )
      {
        v585 = v2558;
        v2558 += 8;
      }
      else
      {
        v585 = &v2559[v584];
        v2557 = v583 + 16;
      }
      v586 = *(_QWORD **)v585;
      v587 = sub_339CA0();
      sub_32C540(v2555, v587, v586);
      copy_tinfo_t();
      clear_tinfo_t();
      return nullptr;
    case 170LL:
      v580 = v2557;
      v581 = v2557 + 8;
      v2557 = v581;
      if ( (unsigned int)v581 > 0x2F )
      {
        v582 = (__int64 *)v2558;
        v2558 += 8;
      }
      else
      {
        v582 = (__int64 *)&v2559[v581];
        v2557 = v580 + 16;
      }
      sub_32ACB0(v2555, *v582, *(double *)a7.m128_u64);
      copy_tinfo_t();
      clear_tinfo_t();
      return nullptr;
    case 171LL:
      v588 = v2557;
      v589 = v2557 + 8;
      v2557 = v589;
      v590 = *(_QWORD *)&v2559[v588];
      if ( (unsigned int)v589 > 0x2F )
      {
        v2373 = (__int64 *)v2558;
        v593 = (int *)(v2558 + 8);
        v2558 += 8;
        v592 = *v2373;
      }
      else
      {
        v591 = v588 + 16;
        v592 = *(_QWORD *)&v2559[v589];
        if ( (unsigned int)v591 > 0x2F )
          v593 = (int *)v2558;
        else
          v593 = (int *)&v2559[v591];
      }
      v594 = *v593;
      v595 = sub_339CA0();
      return (__m128i *)(unsigned __int8)sub_381D00(v595, v590, v592, v594);
    case 172LL:
      v570 = v2557;
      v571 = v2557 + 8;
      v572 = *(_QWORD *)&v2559[v2557];
      if ( (unsigned int)v571 > 0x2F )
      {
        v2260 = v2558;
        v2261 = v2558 + 8;
        v2558 += 8;
        v574 = *(_BYTE **)v2260;
      }
      else
      {
        v573 = v2557 + 16;
        v574 = *(_BYTE **)&v2559[v571];
        v2557 = v573;
        if ( (unsigned int)v573 <= 0x2F )
        {
          v575 = v570 + 24;
          v576 = *(_DWORD *)&v2559[v573];
          if ( (unsigned int)v575 > 0x2F )
            v577 = v2558;
          else
            v577 = &v2559[v575];
LABEL_490:
          v578 = *(_DWORD *)v577 != 0;
          v579 = sub_339CA0();
          return (__m128i *)(unsigned __int8)sub_382090(v579, v572, v574, v576, v578);
        }
        v2261 = v2558;
      }
      v2262 = (unsigned int *)v2261;
      v577 = v2261 + 8;
      v2558 = v577;
      v576 = *v2262;
      goto LABEL_490;
    case 173LL:
      v1174 = v2557 + 8;
      v1175 = (signed int *)&v2559[v1174];
      if ( (unsigned int)v1174 > 0x2F )
        v1175 = (signed int *)v2558;
      return (__m128i *)sub_1AEC60(*(_QWORD *)&v2559[v2557], *v1175);
    case 174LL:
      v1172 = v2557 + 8;
      v1173 = (int **)&v2559[v1172];
      if ( (unsigned int)v1172 > 0x2F )
        v1173 = (int **)v2558;
      return (__m128i *)(int)sub_1C2AD0(*(int **)&v2559[v2557], *v1173, *(double *)a7.m128_u64);
    case 175LL:
      v564 = v2557;
      v565 = v2557 + 8;
      v2557 = v565;
      v566 = *(_QWORD *)&v2559[v564];
      if ( (unsigned int)v565 > 0x2F )
      {
        v2267 = (__int64 *)v2558;
        v569 = (int *)(v2558 + 8);
        v2558 += 8;
        v568 = *v2267;
      }
      else
      {
        v567 = v564 + 16;
        v568 = *(_QWORD *)&v2559[v565];
        if ( (unsigned int)v567 > 0x2F )
          v569 = (int *)v2558;
        else
          v569 = (int *)&v2559[v567];
      }
      return (__m128i *)(unsigned __int8)sub_1C27D0(v566, v568, *v569, *(double *)a7.m128_u64);
    case 176LL:
      v556 = v2557;
      v557 = v2557 + 8;
      v2557 = v557;
      v558 = *(__int64 **)&v2559[v556];
      if ( (unsigned int)v557 > 0x2F )
      {
        v2263 = (__int64 *)v2558;
        v561 = (signed int *)(v2558 + 8);
        v2558 += 8;
        v560 = *v2263;
      }
      else
      {
        v559 = v556 + 16;
        v560 = *(_QWORD *)&v2559[v557];
        if ( (unsigned int)v559 > 0x2F )
          v561 = (signed int *)v2558;
        else
          v561 = (signed int *)&v2559[v559];
      }
      v562 = *v561;
      v563 = (_DWORD *)sub_339CA0();
      sub_1C8140(v563, v558, v560, v562);
      return nullptr;
    case 177LL:
      v721 = v2557;
      v722 = v2557 + 8;
      v723 = *(int **)&v2559[v2557];
      if ( (unsigned int)v722 > 0x2F )
      {
        v2249 = (unsigned __int64 *)v2558;
        v2250 = v2558 + 8;
        v2558 += 8;
        v725 = *v2249;
      }
      else
      {
        v724 = v2557 + 16;
        v725 = *(_QWORD *)&v2559[v722];
        v2557 = v724;
        if ( (unsigned int)v724 <= 0x2F )
        {
          v726 = v721 + 24;
          v727 = *(int **)&v2559[v724];
          if ( (unsigned int)v726 > 0x2F )
            v728 = (unsigned __int64 *)v2558;
          else
            v728 = (unsigned __int64 *)&v2559[v726];
          return (__m128i *)(unsigned __int8)sub_1C4AE0(v723, v725, v727, *v728, *(double *)a7.m128_u64);
        }
        v2250 = v2558;
      }
      v2251 = (int **)v2250;
      v728 = (unsigned __int64 *)(v2250 + 8);
      v2558 = (char *)v728;
      v727 = *v2251;
      return (__m128i *)(unsigned __int8)sub_1C4AE0(v723, v725, v727, *v728, *(double *)a7.m128_u64);
    case 178LL:
      v719 = v2557 + 8;
      v720 = (int **)&v2559[v719];
      if ( (unsigned int)v719 > 0x2F )
        v720 = (int **)v2558;
      return (__m128i *)(int)sub_3307E0(*(int **)&v2559[v2557], *v720, *(double *)a7.m128_u64);
    case 179LL:
      return (__m128i *)sub_1B0390(*(_QWORD *)&v2559[v2557]);
    case 180LL:
      return (__m128i *)sub_1AE8E0(*(_QWORD *)&v2559[v2557]);
    case 181LL:
      v729 = *(int **)&v2559[v2557];
      v730 = (_QWORD *)sub_339CA0();
      return (__m128i *)(unsigned __int8)sub_1F0D70(v729, v730);
    case 182LL:
      v711 = v2557;
      v712 = v2557 + 8;
      v2557 = v712;
      v713 = *(_QWORD *)&v2559[v711];
      if ( (unsigned int)v712 > 0x2F )
      {
        v2252 = v2558;
        v716 = v2558 + 8;
        v2558 += 8;
        v715 = *(_BYTE **)v2252;
      }
      else
      {
        v714 = v711 + 16;
        v715 = *(_BYTE **)&v2559[v712];
        if ( (unsigned int)v714 > 0x2F )
          v716 = v2558;
        else
          v716 = &v2559[v714];
      }
      v717 = *(_DWORD *)v716 != 0;
      v718 = sub_339CA0();
      return (__m128i *)(unsigned __int8)sub_1EF510(v713, v718, v715, v717, *(double *)a7.m128_u64);
    case 183LL:
      v703 = v2557;
      v704 = v2557 + 8;
      v2557 = v704;
      v705 = *(_QWORD *)&v2559[v703];
      if ( (unsigned int)v704 > 0x2F )
      {
        v2248 = v2558;
        v708 = v2558 + 8;
        v2558 += 8;
        v707 = *(_BYTE **)v2248;
      }
      else
      {
        v706 = v703 + 16;
        v707 = *(_BYTE **)&v2559[v704];
        if ( (unsigned int)v706 > 0x2F )
          v708 = v2558;
        else
          v708 = &v2559[v706];
      }
      v709 = *(_DWORD *)v708 != 0;
      v710 = sub_339CA0();
      return (__m128i *)(unsigned __int8)sub_1EF8F0(v705, v710, v707, v709, *(double *)a7.m128_u64);
    case 184LL:
      v695 = v2557;
      v696 = v2557 + 8;
      v2557 = v696;
      v697 = *(_DWORD **)&v2559[v695];
      if ( (unsigned int)v696 > 0x2F )
      {
        v2247 = (int *)v2558;
        v700 = v2558 + 8;
        v2558 += 8;
        v699 = *v2247;
      }
      else
      {
        v698 = v695 + 16;
        v699 = *(_DWORD *)&v2559[v696];
        if ( (unsigned int)v698 > 0x2F )
          v700 = v2558;
        else
          v700 = &v2559[v698];
      }
      v701 = *(_DWORD *)v700;
      v702 = (_QWORD *)sub_339CA0();
      return (__m128i *)(unsigned __int8)sub_1EF680(v697, v702, v699, v701, *(double *)a7.m128_u64);
    case 185LL:
      v1265 = v2557;
      v1266 = v2557 + 8;
      v1267 = *(_QWORD *)&v2559[v2557];
      if ( (unsigned int)v1266 > 0x2F )
      {
        v2217 = (__int64 *)v2558;
        v2218 = v2558 + 8;
        v2558 += 8;
        v1269 = *v2217;
      }
      else
      {
        v1268 = v2557 + 16;
        v1269 = *(_QWORD *)&v2559[v1266];
        v2557 = v1268;
        if ( (unsigned int)v1268 <= 0x2F )
        {
          v1270 = v1265 + 24;
          v1271 = *(_QWORD *)&v2559[v1268];
          if ( (unsigned int)v1270 > 0x2F )
            v1272 = v2558;
          else
            v1272 = &v2559[v1270];
LABEL_1143:
          sub_1C3380(v1267, v1269, v1271, *(_DWORD *)v1272 != 0, *(double *)a7.m128_u64, a8);
          return nullptr;
        }
        v2218 = v2558;
      }
      v2219 = (__int64 *)v2218;
      v1272 = v2218 + 8;
      v2558 = v1272;
      v1271 = *v2219;
      goto LABEL_1143;
    case 186LL:
      v1257 = v2557;
      v1258 = v2557 + 8;
      v2557 = v1258;
      v1259 = *(_QWORD *)&v2559[v1257];
      if ( (unsigned int)v1258 > 0x2F )
      {
        v2427 = (__int64 *)v2558;
        v1262 = v2558 + 8;
        v2558 += 8;
        v1261 = *v2427;
      }
      else
      {
        v1260 = v1257 + 16;
        v1261 = *(_QWORD *)&v2559[v1258];
        if ( (unsigned int)v1260 > 0x2F )
          v1262 = v2558;
        else
          v1262 = &v2559[v1260];
      }
      v1263 = *(_DWORD *)v1262 != 0;
      v1264 = sub_339CA0();
      sub_1C33B0(v1259, v1264, v1261, v1263, *(double *)a7.m128_u64, a8);
      return nullptr;
    case 187LL:
      v1273 = v2557;
      v1274 = v2557 + 8;
      v2557 = v1274;
      v1275 = *(_QWORD **)&v2559[v1273];
      if ( (unsigned int)v1274 > 0x2F )
      {
        v2393 = (unsigned __int64 *)v2558;
        v1278 = (int *)(v2558 + 8);
        v2558 += 8;
        v1277 = *v2393;
      }
      else
      {
        v1276 = v1273 + 16;
        v1277 = *(_QWORD *)&v2559[v1274];
        if ( (unsigned int)v1276 > 0x2F )
          v1278 = (int *)v2558;
        else
          v1278 = (int *)&v2559[v1276];
      }
      v1279 = *v1278;
      v1280 = sub_339CA0();
      return (__m128i *)(int)sub_228FE0(v1275, v1280, v1277, v1279, *(double *)a7.m128_u64);
    case 188LL:
      v731 = v2557 + 8;
      v732 = (__int64 *)&v2559[v731];
      if ( (unsigned int)v731 > 0x2F )
        v732 = (__int64 *)v2558;
      return (__m128i *)sub_1F04A0(*(__int64 **)&v2559[v2557], *v732, *(double *)a7.m128_u64);
    case 189LL:
      v1551 = v2557;
      v1552 = v2557 + 8;
      v1553 = *(__int64 **)&v2559[v2557];
      if ( (unsigned int)v1552 > 0x2F )
      {
        v2394 = (int **)v2558;
        v2395 = v2558 + 8;
        v2558 += 8;
        v1555 = *v2394;
      }
      else
      {
        v1554 = v2557 + 16;
        v1555 = *(int **)&v2559[v1552];
        v2557 = v1554;
        if ( (unsigned int)v1554 <= 0x2F )
        {
          v1556 = v1551 + 24;
          v1557 = *(_DWORD *)&v2559[v1554];
          if ( (unsigned int)v1556 > 0x2F )
            v1558 = (int *)v2558;
          else
            v1558 = (int *)&v2559[v1556];
          return (__m128i *)(int)sub_1F06C0(v1553, v1555, v1557, *v1558, *(double *)a7.m128_u64);
        }
        v2395 = v2558;
      }
      v2396 = (int *)v2395;
      v1558 = (int *)(v2395 + 8);
      v2558 = (char *)v1558;
      v1557 = *v2396;
      return (__m128i *)(int)sub_1F06C0(v1553, v1555, v1557, *v1558, *(double *)a7.m128_u64);
    case 190LL:
      v1029 = v2557 + 8;
      v1030 = *(_QWORD *)&v2559[v2557];
      v1031 = (__int64 *)&v2559[v1029];
      if ( (unsigned int)v1029 > 0x2F )
        v1031 = (__int64 *)v2558;
      v1032 = *v1031;
      v1033 = sub_339CA0();
      return (__m128i *)(unsigned __int8)sub_2B86B0(v1033, v1030, v1032);
    case 191LL:
      v1546 = v2557 + 8;
      v1547 = *(_QWORD *)&v2559[v2557];
      v1548 = (__int64 *)&v2559[v1546];
      if ( (unsigned int)v1546 > 0x2F )
        v1548 = (__int64 *)v2558;
      v1549 = *v1548;
      v1550 = sub_339CA0();
      sub_2B8730(v1550, v1547, v1549);
      return nullptr;
    case 192LL:
      v382 = v2557 + 8;
      v383 = *(_QWORD *)&v2559[v2557];
      v384 = (__int64 *)&v2559[v382];
      if ( (unsigned int)v382 > 0x2F )
        v384 = (__int64 *)v2558;
      v385 = *v384;
      v386 = sub_339CA0();
      return (__m128i *)(unsigned __int8)sub_2BC2C0(v386, v383, v385);
    case 193LL:
      v1422 = v2557;
      v1423 = v2557 + 8;
      v2557 = v1423;
      v1424 = *(_QWORD *)&v2559[v1422];
      if ( (unsigned int)v1423 > 0x2F )
      {
        v2389 = (int *)v2558;
        v1427 = (__int64 *)(v2558 + 8);
        v2558 += 8;
        v1426 = *v2389;
      }
      else
      {
        v1425 = v1422 + 16;
        v1426 = *(_DWORD *)&v2559[v1423];
        if ( (unsigned int)v1425 > 0x2F )
          v1427 = (__int64 *)v2558;
        else
          v1427 = (__int64 *)&v2559[v1425];
      }
      v1428 = *v1427;
      v1429 = sub_339CA0();
      return (__m128i *)(unsigned __int8)sub_2168B0(v1429, v1424, v1426, v1428);
    case 194LL:
      v1414 = v2557;
      v1415 = v2557 + 8;
      v2557 = v1415;
      v1416 = *(_QWORD *)&v2559[v1414];
      if ( (unsigned int)v1415 > 0x2F )
      {
        v2208 = (__int64 *)v2558;
        v1419 = (const char **)(v2558 + 8);
        v2558 += 8;
        v1418 = *v2208;
      }
      else
      {
        v1417 = v1414 + 16;
        v1418 = *(_QWORD *)&v2559[v1415];
        if ( (unsigned int)v1417 > 0x2F )
          v1419 = (const char **)v2558;
        else
          v1419 = (const char **)&v2559[v1417];
      }
      v1420 = *v1419;
      v1421 = sub_339CA0();
      return (__m128i *)(unsigned __int8)sub_217C80(
                                           v1421,
                                           v1416,
                                           v1418,
                                           v1420,
                                           *(double *)a7.m128_u64,
                                           *(double *)a8.m128_u64,
                                           (__m128i)a9,
                                           *(double *)a10.m128_u64);
    case 195LL:
      v2021 = v2557 + 8;
      v2022 = *(_QWORD *)&v2559[v2557];
      v2023 = (__int64 *)&v2559[v2021];
      if ( (unsigned int)v2021 > 0x2F )
        v2023 = (__int64 *)v2558;
      v2024 = *v2023;
      v2025 = sub_339CA0();
      return (__m128i *)sub_2B7DE0(v2025, v2022, v2024);
    case 196LL:
      v1409 = v2557 + 8;
      v1410 = *(_QWORD *)&v2559[v2557];
      v1411 = (__int64 *)&v2559[v1409];
      if ( (unsigned int)v1409 > 0x2F )
        v1411 = (__int64 *)v2558;
      v1412 = *v1411;
      v1413 = sub_339CA0();
      sub_2B7D60(v1413, v1410, v1412);
      return nullptr;
    case 197LL:
      v885 = v2557;
      v886 = v2557 + 8;
      v2557 = v886;
      v887 = *(_QWORD *)&v2559[v885];
      if ( (unsigned int)v886 > 0x2F )
      {
        v2184 = v2558;
        v890 = v2558 + 8;
        v2558 += 8;
        v889 = *(_BYTE **)v2184;
      }
      else
      {
        v888 = v885 + 16;
        v889 = *(_BYTE **)&v2559[v886];
        if ( (unsigned int)v888 > 0x2F )
          v890 = v2558;
        else
          v890 = &v2559[v888];
      }
      return (__m128i *)(unsigned __int8)sub_3C5980(v887, v889, *(_DWORD *)v890 != 0);
    case 198LL:
      v883 = v2557 + 8;
      v884 = (__int64 *)&v2559[v883];
      if ( (unsigned int)v883 > 0x2F )
        v884 = (__int64 *)v2558;
      return (__m128i *)(int)sub_3C7710(*(_QWORD *)&v2559[v2557], *v884, *(double *)a7.m128_u64, a8);
    case 199LL:
      v1819 = v2557 + 8;
      v1820 = *(_QWORD *)&v2559[v2557];
      v1821 = &v2559[v1819];
      if ( (unsigned int)v1819 > 0x2F )
        v1821 = v2558;
      v1822 = *(_DWORD *)v1821;
      v1823 = sub_339CA0();
      return (__m128i *)(unsigned __int8)sub_1D5BD0(v1823, v1820, v1822 != 0);
    case 200LL:
      sub_3C5A60(*(_QWORD **)&v2559[v2557]);
      return nullptr;
    case 201LL:
      v1976 = v2557 + 8;
      v1977 = &v2559[v1976];
      if ( (unsigned int)v1976 > 0x2F )
        v1977 = v2558;
      return (__m128i *)(unsigned __int8)sub_3C5AA0(*(_QWORD *)&v2559[v2557], *(_BYTE **)v1977);
    case 202LL:
      v1974 = v2557 + 8;
      v1975 = (__int64 *)&v2559[v1974];
      if ( (unsigned int)v1974 > 0x2F )
        v1975 = (__int64 *)v2558;
      return (__m128i *)(int)sub_3C7760(*(_QWORD *)&v2559[v2557], *v1975, *(double *)a7.m128_u64, a8);
    case 203LL:
      v2067 = v2557 + 8;
      v2068 = (__int64 *)&v2559[v2067];
      if ( (unsigned int)v2067 > 0x2F )
        v2068 = (__int64 *)v2558;
      sub_64000(*(__int64 **)&v2559[v2557], *v2068, *(double *)a7.m128_u64);
      return nullptr;
    case 204LL:
      v1193 = v2557 + 8;
      v1194 = (const void ***)&v2559[v1193];
      if ( (unsigned int)v1193 > 0x2F )
        v1194 = (const void ***)v2558;
      return (__m128i *)sub_648D0(*(__int64 **)&v2559[v2557], *v1194, *(double *)a7.m128_u64);
    case 205LL:
      v1658 = v2557 + 8;
      v1659 = (int *)&v2559[v1658];
      if ( (unsigned int)v1658 > 0x2F )
        v1659 = (int *)v2558;
      return (__m128i *)(unsigned __int8)sub_64190(*(__int64 **)&v2559[v2557], *v1659, *(double *)a7.m128_u64);
    case 206LL:
      v1652 = v2557;
      v1653 = v2557 + 8;
      v2557 = v1653;
      v1654 = *(__int64 **)&v2559[v1652];
      if ( (unsigned int)v1653 > 0x2F )
      {
        v2226 = (int *)v2558;
        v1657 = (int *)(v2558 + 8);
        v2558 += 8;
        v1656 = *v2226;
      }
      else
      {
        v1655 = v1652 + 16;
        v1656 = *(_DWORD *)&v2559[v1653];
        if ( (unsigned int)v1655 > 0x2F )
          v1657 = (int *)v2558;
        else
          v1657 = (int *)&v2559[v1655];
      }
      return (__m128i *)(unsigned __int8)sub_63E80(v1654, v1656, *v1657, *(double *)a7.m128_u64);
    case 207LL:
      v2052 = v2557 + 8;
      v2053 = (__int64 **)&v2559[v2052];
      if ( (unsigned int)v2052 > 0x2F )
        v2053 = (__int64 **)v2558;
      return (__m128i *)(unsigned __int8)sub_64280(*(__int64 **)&v2559[v2557], *v2053, *(double *)a7.m128_u64);
    case 208LL:
      v645 = v2557 + 8;
      v646 = (int *)&v2559[v645];
      if ( (unsigned int)v645 > 0x2F )
        v646 = (int *)v2558;
      return (__m128i *)(unsigned __int8)sub_64340(*(__int64 **)&v2559[v2557], *v646, *(double *)a7.m128_u64);
    case 209LL:
      v1725 = v2557;
      v1726 = v2557 + 8;
      v2557 = v1726;
      v1727 = *(__int64 **)&v2559[v1725];
      if ( (unsigned int)v1726 > 0x2F )
      {
        v2390 = (int *)v2558;
        v1730 = (int *)(v2558 + 8);
        v2558 += 8;
        v1729 = *v2390;
      }
      else
      {
        v1728 = v1725 + 16;
        v1729 = *(_DWORD *)&v2559[v1726];
        if ( (unsigned int)v1728 > 0x2F )
          v1730 = (int *)v2558;
        else
          v1730 = (int *)&v2559[v1728];
      }
      return (__m128i *)(unsigned __int8)sub_64440(v1727, v1729, *v1730, *(double *)a7.m128_u64);
    case 210LL:
      v1723 = v2557 + 8;
      v1724 = (__int64 **)&v2559[v1723];
      if ( (unsigned int)v1723 > 0x2F )
        v1724 = (__int64 **)v2558;
      return (__m128i *)(unsigned __int8)sub_64640(*(__int64 **)&v2559[v2557], *v1724, v2557, v1723, a5, (int)a6);
    case 211LL:
      v2000 = v2557 + 8;
      v2001 = (int *)&v2559[v2000];
      if ( (unsigned int)v2000 > 0x2F )
        v2001 = (int *)v2558;
      return (__m128i *)(unsigned __int8)sub_643C0(*(__int64 **)&v2559[v2557], *v2001, *(double *)a7.m128_u64);
    case 212LL:
      v1317 = v2557 + 8;
      v1318 = (int *)&v2559[v1317];
      if ( (unsigned int)v1317 > 0x2F )
        v1318 = (int *)v2558;
      sub_644F0(*(__int64 **)&v2559[v2557], *v1318, *(double *)a7.m128_u64);
      return nullptr;
    case 213LL:
      v1325 = v2557 + 8;
      v1326 = (int *)&v2559[v1325];
      if ( (unsigned int)v1325 > 0x2F )
        v1326 = (int *)v2558;
      return (__m128i *)sub_64930(*(_QWORD **)&v2559[v2557], *v1326);
    case 214LL:
      v1319 = v2557;
      v1320 = v2557 + 8;
      v2557 = v1320;
      v1321 = *(_QWORD **)&v2559[v1319];
      if ( (unsigned int)v1320 > 0x2F )
      {
        v2215 = (int *)v2558;
        v1324 = (int *)(v2558 + 8);
        v2558 += 8;
        v1323 = *v2215;
      }
      else
      {
        v1322 = v1319 + 16;
        v1323 = *(_DWORD *)&v2559[v1320];
        if ( (unsigned int)v1322 > 0x2F )
          v1324 = (int *)v2558;
        else
          v1324 = (int *)&v2559[v1322];
      }
      return (__m128i *)(unsigned __int8)sub_64A10(v1321, v1323, *v1324);
    case 215LL:
      v762 = v2557;
      v763 = v2557 + 8;
      v2557 = v763;
      v764 = *(_QWORD **)&v2559[v762];
      if ( (unsigned int)v763 > 0x2F )
      {
        v2232 = (int *)v2558;
        v767 = (int *)(v2558 + 8);
        v2558 += 8;
        v766 = *v2232;
      }
      else
      {
        v765 = v762 + 16;
        v766 = *(_DWORD *)&v2559[v763];
        if ( (unsigned int)v765 > 0x2F )
          v767 = (int *)v2558;
        else
          v767 = (int *)&v2559[v765];
      }
      return (__m128i *)(unsigned __int8)sub_64A60(v764, v766, *v767);
    case 216LL:
      return (__m128i *)sub_1B0300(*(_QWORD **)&v2559[v2557]);
    case 217LL:
      return (__m128i *)(unsigned __int8)sub_64880(*(_QWORD **)&v2559[v2557]);
    case 218LL:
      return (__m128i *)(int)sub_64B20(*(_QWORD *)&v2559[v2557]);
    case 219LL:
      v1064 = v2557 + 8;
      v1065 = (int *)&v2559[v1064];
      if ( (unsigned int)v1064 > 0x2F )
        v1065 = (int *)v2558;
      return (__m128i *)(int)sub_64BA0(*(_QWORD **)&v2559[v2557], *v1065);
    case 220LL:
      return (__m128i *)(int)sub_64C00(*(_QWORD **)&v2559[v2557]);
    case 221LL:
      v1897 = v2557 + 8;
      v1898 = (int *)&v2559[v1897];
      if ( (unsigned int)v1897 > 0x2F )
        v1898 = (int *)v2558;
      sub_64070(*(__int64 **)&v2559[v2557], *v1898, *(double *)a7.m128_u64);
      return nullptr;
    case 222LL:
      v1572 = v2557 + 8;
      v1573 = *(__int64 **)&v2559[v2557];
      v1574 = &v2559[v1572];
      if ( (unsigned int)v1572 > 0x2F )
        v1574 = v2558;
      v1575 = *(_DWORD *)v1574;
      v1576 = sub_339CA0();
      return (__m128i *)(unsigned __int8)sub_64C70(v1573, v1575, *(_DWORD *)(v1576 + 80), *(double *)a7.m128_u64);
    case 223LL:
      v395 = v2557 + 8;
      v396 = &v2559[v395];
      if ( (unsigned int)v395 > 0x2F )
        v396 = v2558;
      return (__m128i *)(unsigned __int8)sub_64780(*(_QWORD **)&v2559[v2557], *(_QWORD **)v396);
    case 224LL:
      v393 = v2557 + 8;
      v394 = (__int64 **)&v2559[v393];
      if ( (unsigned int)v393 > 0x2F )
        v394 = (__int64 **)v2558;
      return (__m128i *)(unsigned __int8)sub_64700(*(__int64 **)&v2559[v2557], *v394);
    case 225LL:
      v1925 = v2557 + 8;
      v1926 = &v2559[v1925];
      if ( (unsigned int)v1925 > 0x2F )
        v1926 = v2558;
      return (__m128i *)(unsigned __int8)sub_64820(*(_QWORD **)&v2559[v2557], *(_QWORD **)v1926);
    case 226LL:
      v1923 = v2557 + 8;
      v1924 = (__int64 *)&v2559[v1923];
      if ( (unsigned int)v1923 > 0x2F )
        v1924 = (__int64 *)v2558;
      return (__m128i *)sub_647F0(*(_QWORD *)&v2559[v2557], *v1924);
    case 227LL:
      v1360 = v2557 + 8;
      v1361 = (int *)&v2559[v1360];
      if ( (unsigned int)v1360 > 0x2F )
        v1361 = (int *)v2558;
      return (__m128i *)(int)sub_64960(*(_QWORD **)&v2559[v2557], *v1361);
    case 228LL:
      return (__m128i *)sub_1B5F30(*(unsigned __int64 **)&v2559[v2557]);
    case 229LL:
      v2008 = v2557 + 8;
      v2009 = &v2559[v2008];
      if ( (unsigned int)v2008 > 0x2F )
        v2009 = v2558;
      return (__m128i *)(int)sub_316F40(*(_QWORD **)&v2559[v2557], *(_QWORD **)v2009);
    case 230LL:
      v1782 = v2557 + 8;
      v1783 = (__m128i **)&v2559[v1782];
      if ( (unsigned int)v1782 > 0x2F )
        v1783 = (__m128i **)v2558;
      return (__m128i *)(unsigned __int8)sub_316BB0(*(__int64 **)&v2559[v2557], *v1783, *(double *)a7.m128_u64, a8);
    case 231LL:
      v843 = v2557 + 8;
      v844 = (const void ***)&v2559[v843];
      if ( (unsigned int)v843 > 0x2F )
        v844 = (const void ***)v2558;
      return (__m128i *)(unsigned __int8)sub_316CB0(*(__int64 **)&v2559[v2557], *v844, v2557, v843);
    case 232LL:
      v837 = v2557;
      v838 = v2557 + 8;
      v2557 = v838;
      v839 = *(__int64 **)&v2559[v837];
      if ( (unsigned int)v838 > 0x2F )
      {
        v2282 = (__int64 *)v2558;
        v842 = (__m128i **)(v2558 + 8);
        v2558 += 8;
        v841 = *v2282;
      }
      else
      {
        v840 = v837 + 16;
        v841 = *(_QWORD *)&v2559[v838];
        if ( (unsigned int)v840 > 0x2F )
          v842 = (__m128i **)v2558;
        else
          v842 = (__m128i **)&v2559[v840];
      }
      return (__m128i *)(unsigned __int8)sub_317210(v839, v841, *v842, v838, *(double *)a7.m128_u64, a8);
    case 233LL:
      v1619 = v2557 + 8;
      v1620 = (__m128i **)&v2559[v1619];
      if ( (unsigned int)v1619 > 0x2F )
        v1620 = (__m128i **)v2558;
      return (__m128i *)(unsigned __int8)sub_317BD0(*(__int64 **)&v2559[v2557], *v1620);
    case 234LL:
      v1617 = v2557 + 8;
      v1618 = (__int64 *)&v2559[v1617];
      if ( (unsigned int)v1617 > 0x2F )
        v1618 = (__int64 *)v2558;
      return (__m128i *)(unsigned __int8)sub_317C60(*(__int64 **)&v2559[v2557], *v1618);
    case 235LL:
      v1140 = v2557 + 8;
      v1141 = (__int64 *)&v2559[v1140];
      if ( (unsigned int)v1140 > 0x2F )
        v1141 = (__int64 *)v2558;
      return (__m128i *)(unsigned __int8)sub_318470(*(unsigned __int64 ***)&v2559[v2557], *v1141);
    case 236LL:
      v1138 = v2557 + 8;
      v1139 = (__int64 **)&v2559[v1138];
      if ( (unsigned int)v1138 > 0x2F )
        v1139 = (__int64 **)v2558;
      sub_1B39D0(*(_QWORD *)&v2559[v2557], *v1139);
      return nullptr;
    case 237LL:
      return (__m128i *)sub_1B3B80(*(_QWORD *)&v2559[v2557]);
    case 238LL:
      v475 = v2557 + 8;
      v477 = (__int64 **)&v2559[v475];
      if ( (unsigned int)v475 > 0x2F )
        v477 = (__int64 **)v2558;
      v476 = *(__int64 **)&v2559[v2557];
      *v476 = sub_317010(*v477);
      return nullptr;
    case 239LL:
      v469 = v2557;
      v470 = v2557 + 8;
      v2557 = v470;
      v471 = *(_QWORD **)&v2559[v469];
      if ( (unsigned int)v470 > 0x2F )
      {
        v2256 = (__m128i **)v2558;
        v474 = v2558 + 8;
        v2558 += 8;
        v473 = *v2256;
      }
      else
      {
        v472 = v469 + 16;
        v473 = *(__m128i **)&v2559[v470];
        if ( (unsigned int)v472 > 0x2F )
          v474 = v2558;
        else
          v474 = &v2559[v472];
      }
      return (__m128i *)(unsigned __int8)sub_317E70(v471, v473, *(_DWORD *)v474 != 0);
    case 240LL:
      v467 = v2557 + 8;
      v468 = (unsigned __int64 *)&v2559[v467];
      if ( (unsigned int)v467 > 0x2F )
        v468 = (unsigned __int64 *)v2558;
      return (__m128i *)sub_317040(*(unsigned __int64 ***)&v2559[v2557], *v468);
    case 241LL:
      v1985 = v2557 + 8;
      v1986 = (__int64 *)&v2559[v1985];
      if ( (unsigned int)v1985 > 0x2F )
        v1986 = (__int64 *)v2558;
      return (__m128i *)(unsigned __int8)sub_317F40(*(__int64 **)&v2559[v2557], *v1986);
    case 242LL:
      v1983 = v2557 + 8;
      v1984 = (__int64 *)&v2559[v1983];
      if ( (unsigned int)v1983 > 0x2F )
        v1984 = (__int64 *)v2558;
      return (__m128i *)(unsigned __int8)sub_3180C0(*(__int64 **)&v2559[v2557], *v1984, (__m128i *)v2557, v1983);
    case 243LL:
      v1245 = v2557 + 8;
      v1246 = &v2559[v1245];
      if ( (unsigned int)v1245 > 0x2F )
        v1246 = v2558;
      return (__m128i *)(int)sub_316F80(*(__int64 **)&v2559[v2557], *(_QWORD **)v1246);
    case 244LL:
      v1243 = v2557 + 8;
      v1244 = (__int64 **)&v2559[v1243];
      if ( (unsigned int)v1243 > 0x2F )
        v1244 = (__int64 **)v2558;
      sub_64DF0(*(_QWORD **)&v2559[v2557], *v1244);
      return nullptr;
    case 245LL:
      return (__m128i *)sub_1AE4B0(*(_QWORD **)&v2559[v2557]);
    case 246LL:
      v1692 = v2557;
      v1693 = v2557 + 8;
      v2557 = v1693;
      v1694 = *(__int64 **)&v2559[v1692];
      if ( (unsigned int)v1693 > 0x2F )
      {
        v2231 = (unsigned __int64 *)v2558;
        v1697 = (unsigned __int64 *)(v2558 + 8);
        v2558 += 8;
        v1696 = *v2231;
      }
      else
      {
        v1695 = v1692 + 16;
        v1696 = *(_QWORD *)&v2559[v1693];
        if ( (unsigned int)v1695 > 0x2F )
          v1697 = (unsigned __int64 *)v2558;
        else
          v1697 = (unsigned __int64 *)&v2559[v1695];
      }
      return (__m128i *)(unsigned __int8)sub_122B20(v1694, v1696, *v1697);
    case 247LL:
      v660 = v2557 + 8;
      v661 = (__int64 **)&v2559[v660];
      if ( (unsigned int)v660 > 0x2F )
        v661 = (__int64 **)v2558;
      sub_1B5C90(*(_QWORD **)&v2559[v2557], *v661);
      return nullptr;
    case 248LL:
      return (__m128i *)sub_1B5D00(*(_QWORD **)&v2559[v2557]);
    case 249LL:
      v1845 = v2557 + 8;
      v1846 = (__int64 *)&v2559[v1845];
      if ( (unsigned int)v1845 > 0x2F )
        v1846 = (__int64 *)v2558;
      return (__m128i *)sub_122C30(*(_QWORD *)&v2559[v2557], *v1846);
    case 250LL:
      return (__m128i *)(sub_339CA0() + 104);
    case 251LL:
      v1005 = *(_DWORD *)&v2559[v2557];
      return (__m128i *)(v1005 >= *(_DWORD *)(sub_339CA0() + 68));
    case 252LL:
      v1003 = *(_DWORD *)&v2559[v2557];
      v1004 = sub_339CA0();
      return (__m128i *)(int)sub_122AF0(v1004, v1003);
    case 253LL:
      v1500 = v2557 + 8;
      v1501 = *(_DWORD *)&v2559[v2557];
      v1502 = &v2559[v1500];
      if ( (unsigned int)v1500 > 0x2F )
        v1502 = v2558;
      v1503 = *(_DWORD *)v1502;
      v1504 = sub_339CA0();
      return (__m128i *)(*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v1504 + 176LL))(v1504, v1501, v1503);
    case 254LL:
      v1494 = v2557 + 8;
      v1495 = *(__int64 **)&v2559[v2557];
      if ( (unsigned int)v1494 > 0x2F )
      {
        v2199 = (int *)v2558;
        v2200 = (unsigned int *)(v2558 + 8);
        v2558 += 8;
        v1497 = *v2199;
      }
      else
      {
        v1496 = v2557 + 16;
        v1497 = *(_DWORD *)&v2559[v1494];
        v2557 = v1496;
        if ( (unsigned int)v1496 <= 0x2F )
        {
          v1498 = *(_DWORD *)&v2559[v1496];
          goto LABEL_1340;
        }
        v2200 = (unsigned int *)v2558;
      }
      v2558 = (char *)(v2200 + 2);
      v1498 = *v2200;
LABEL_1340:
      v1499 = (_DWORD *)sub_339CA0();
      return (__m128i *)(int)sub_1338F0(v1499, v1495, v1497, v1498);
    case 255LL:
      v374 = *(_QWORD *)&v2559[v2557];
      v375 = sub_339CA0();
      sub_1516D0(v375, v374);
      return nullptr;
    case 256LL:
      v372 = *(_QWORD *)&v2559[v2557];
      v373 = sub_339CA0();
      return (__m128i *)(unsigned __int8)sub_151770(v373, v372);
    case 257LL:
      v2130 = *(_QWORD *)&v2559[v2557];
      v2131 = sub_339CA0();
      sub_169120(v2131, v2130);
      return nullptr;
    case 258LL:
      v2128 = *(_QWORD *)&v2559[v2557];
      v2129 = sub_339CA0();
      return (__m128i *)(unsigned __int8)sub_1691C0(v2129, v2128);
    case 259LL:
      v2174 = v2557;
      v2175 = v2557 + 8;
      v2557 = v2175;
      v2176 = *(__int64 **)&v2559[v2174];
      if ( (unsigned int)v2175 > 0x2F )
      {
        v2372 = (__int64 **)v2558;
        v2179 = v2558 + 8;
        v2558 += 8;
        v2178 = *v2372;
      }
      else
      {
        v2177 = v2174 + 16;
        v2178 = *(__int64 **)&v2559[v2175];
        if ( (unsigned int)v2177 > 0x2F )
          v2179 = v2558;
        else
          v2179 = &v2559[v2177];
      }
      sub_71390(v2176, v2178, *(_DWORD *)v2179 != 0);
      return nullptr;
    case 260LL:
      v1448 = v2557;
      v1449 = v2557 + 8;
      v1450 = *(__int64 **)&v2559[v2557];
      if ( (unsigned int)v1449 > 0x2F )
      {
        v2463 = v2558;
        v2521 = v2558 + 8;
        v2558 += 8;
        v1452 = *(_QWORD **)v2463;
      }
      else
      {
        v1451 = v2557 + 16;
        v1452 = *(_QWORD **)&v2559[v1449];
        v2557 = v1451;
        if ( (unsigned int)v1451 <= 0x2F )
        {
          v1453 = v1448 + 24;
          v1454 = *(__int64 **)&v2559[v1451];
          if ( (unsigned int)v1453 > 0x2F )
            v1455 = v2558;
          else
            v1455 = &v2559[v1453];
LABEL_1298:
          sub_71740(v1450, v1452, v1454, *(_DWORD *)v1455 != 0);
          return nullptr;
        }
        v2521 = v2558;
      }
      v2464 = (__int64 **)v2521;
      v1455 = v2521 + 8;
      v2558 = v1455;
      v1454 = *v2464;
      goto LABEL_1298;
    case 261LL:
      v1838 = v2557 + 8;
      v1839 = (__int64 *)&v2559[v1838];
      if ( (unsigned int)v1838 > 0x2F )
        v1839 = (__int64 *)v2558;
      return (__m128i *)(int)sub_6D400(*(_QWORD *)&v2559[v2557], *v1839);
    case 262LL:
      v1836 = v2557 + 8;
      v1837 = (__int64 **)&v2559[v1836];
      if ( (unsigned int)v1836 > 0x2F )
        v1837 = (__int64 **)v2558;
      return (__m128i *)(int)sub_6DBE0(*(__int64 **)&v2559[v2557], *v1837);
    case 263LL:
      v957 = v2557 + 8;
      v958 = (signed int *)&v2559[v957];
      if ( (unsigned int)v957 > 0x2F )
        v958 = (signed int *)v2558;
      return (__m128i *)(int)sub_67A40(*(_QWORD *)&v2559[v2557], *v958);
    case 264LL:
      v955 = v2557 + 8;
      v956 = (int *)&v2559[v955];
      if ( (unsigned int)v955 > 0x2F )
        v956 = (int *)v2558;
      sub_673C0(*(_QWORD *)&v2559[v2557], *v956, *(double *)a7.m128_u64);
      return nullptr;
    case 265LL:
      v1993 = v2557 + 8;
      v1994 = (int *)&v2559[v1993];
      if ( (unsigned int)v1993 > 0x2F )
        v1994 = (int *)v2558;
      return (__m128i *)(int)sub_65720(*(int **)&v2559[v2557], *v1994, *(double *)a7.m128_u64);
    case 266LL:
      v1987 = v2557;
      v1988 = v2557 + 8;
      v2557 = v1988;
      v1989 = *(_QWORD *)&v2559[v1987];
      if ( (unsigned int)v1988 > 0x2F )
      {
        v2191 = (int *)v2558;
        v1992 = (int *)(v2558 + 8);
        v2558 += 8;
        v1991 = *v2191;
      }
      else
      {
        v1990 = v1987 + 16;
        v1991 = *(_DWORD *)&v2559[v1988];
        if ( (unsigned int)v1990 > 0x2F )
          v1992 = (int *)v2558;
        else
          v1992 = (int *)&v2559[v1990];
      }
      return (__m128i *)(unsigned __int8)sub_6D320(v1989, v1991, *v1992);
    case 267LL:
      v1235 = v2557 + 8;
      v1236 = (__int64 *)&v2559[v1235];
      if ( (unsigned int)v1235 > 0x2F )
        v1236 = (__int64 *)v2558;
      return (__m128i *)(int)sub_330920(*(_QWORD *)&v2559[v2557], *v1236);
    case 268LL:
      v1231 = (__int64 **)&v2559[v2557];
      v2557 += 8;
      v1232 = *v1231;
      v1233 = *v1232;
      v1234 = *((int *)v1232 + 4);
      if ( *(_QWORD *)(v1233 + 440) >= v1234 )
        return (__m128i *)(*(_QWORD *)(v1233 + 432) + 104 * v1234);
      if ( !under_debugger )
        sub_383060(0xC83Au, *(double *)a7.m128_u64);
      goto LABEL_2700;
    case 269LL:
      v1682 = v2557 + 8;
      v1683 = (__int64 *)&v2559[v1682];
      if ( (unsigned int)v1682 > 0x2F )
        v1683 = (__int64 *)v2558;
      return (__m128i *)(int)sub_330950(*(_QWORD *)&v2559[v2557], *v1683);
    case 270LL:
      v1676 = v2557;
      v1677 = v2557 + 8;
      v2557 = v1677;
      v1678 = *(_QWORD *)&v2559[v1676];
      if ( (unsigned int)v1677 > 0x2F )
      {
        v2224 = (__m128i **)v2558;
        v1681 = v2558 + 8;
        v2558 += 8;
        v1680 = *v2224;
      }
      else
      {
        v1679 = v1676 + 16;
        v1680 = *(__m128i **)&v2559[v1677];
        if ( (unsigned int)v1679 > 0x2F )
          v1681 = v2558;
        else
          v1681 = &v2559[v1679];
      }
      return (__m128i *)sub_1D0250(
                          *(_QWORD **)v1678,
                          v1680,
                          *(_QWORD *)(v1678 + 8),
                          *(_QWORD **)v1681,
                          nullptr,
                          *(double *)a7.m128_u64);
    case 271LL:
      v2166 = v2557 + 8;
      v2167 = (__int64 **)&v2559[v2166];
      if ( (unsigned int)v2166 > 0x2F )
        v2167 = (__int64 **)v2558;
      sub_11C210(*(_QWORD *)&v2559[v2557], *v2167, *(double *)a7.m128_u64);
      return nullptr;
    case 272LL:
      return (__m128i *)sub_1AE6B0(*(_QWORD *)&v2559[v2557], *(double *)a7.m128_u64);
    case 273LL:
      v2138 = v2557 + 8;
      v2139 = (unsigned __int8 **)&v2559[v2138];
      if ( (unsigned int)v2138 > 0x2F )
        v2139 = (unsigned __int8 **)v2558;
      sub_123A40(*(_QWORD *)&v2559[v2557], *v2139, v2557, v2138);
      return nullptr;
    case 274LL:
      v2039 = v2557 + 8;
      v2040 = (unsigned __int8 **)&v2559[v2039];
      if ( (unsigned int)v2039 > 0x2F )
        v2040 = (unsigned __int8 **)v2558;
      return (__m128i *)sub_125180(*(unsigned __int8 **)&v2559[v2557], *v2040);
    case 275LL:
      v1347 = v2557 + 8;
      v1348 = (char **)&v2559[v1347];
      if ( (unsigned int)v1347 > 0x2F )
        v1348 = (char **)v2558;
      sub_11CA10(*(char **)&v2559[v2557], *v1348);
      return nullptr;
    case 276LL:
      sub_11CDA0(*(_QWORD *)&v2559[v2557]);
      return nullptr;
    case 277LL:
      v1763 = v2557;
      v1764 = v2557 + 8;
      v2557 = v1764;
      v1765 = *(_QWORD *)&v2559[v1763];
      if ( (unsigned int)v1764 > 0x2F )
      {
        v2235 = (char **)v2558;
        v1768 = (unsigned int *)(v2558 + 8);
        v2558 += 8;
        v1767 = *v2235;
      }
      else
      {
        v1766 = v1763 + 16;
        v1767 = *(char **)&v2559[v1764];
        if ( (unsigned int)v1766 > 0x2F )
          v1768 = (unsigned int *)v2558;
        else
          v1768 = (unsigned int *)&v2559[v1766];
      }
      sub_1B2660(v1765, v1767, *v1768);
      return nullptr;
    case 278LL:
      return (__m128i *)sub_1B26E0(*(_QWORD *)&v2559[v2557]);
    case 279LL:
      v1769 = v2557;
      v1770 = v2557 + 8;
      v1771 = *(_QWORD *)&v2559[v2557];
      if ( (unsigned int)v1770 > 0x2F )
      {
        v2460 = v2558;
        v2461 = v2558 + 8;
        v2558 += 8;
        v1773 = *(_QWORD **)v2460;
      }
      else
      {
        v1772 = v2557 + 16;
        v1773 = *(_QWORD **)&v2559[v1770];
        v2557 = v1772;
        if ( (unsigned int)v1772 <= 0x2F )
        {
          v1774 = v1769 + 24;
          v1775 = *(_QWORD **)&v2559[v1772];
          if ( (unsigned int)v1774 > 0x2F )
            v1776 = (unsigned __int64 *)v2558;
          else
            v1776 = (unsigned __int64 *)&v2559[v1774];
          return (__m128i *)(unsigned __int8)sub_11D020(v1771, v1773, v1775, *v1776);
        }
        v2461 = v2558;
      }
      v2462 = v2461;
      v1776 = (unsigned __int64 *)(v2461 + 8);
      v2558 = (char *)v1776;
      v1775 = *(_QWORD **)v2462;
      return (__m128i *)(unsigned __int8)sub_11D020(v1771, v1773, v1775, *v1776);
    case 280LL:
      v794 = v2557;
      v795 = v2557 + 8;
      v796 = *(_QWORD *)&v2559[v2557];
      if ( (unsigned int)v795 > 0x2F )
      {
        v2458 = v2558;
        v2520 = v2558 + 8;
        v2558 += 8;
        v798 = *(_QWORD **)v2458;
      }
      else
      {
        v797 = v2557 + 16;
        v798 = *(_QWORD **)&v2559[v795];
        v2557 = v797;
        if ( (unsigned int)v797 <= 0x2F )
        {
          v799 = v794 + 24;
          v800 = *(_QWORD *)&v2559[v797];
          if ( (unsigned int)v799 > 0x2F )
            v801 = (unsigned __int64 *)v2558;
          else
            v801 = (unsigned __int64 *)&v2559[v799];
          return (__m128i *)(unsigned __int8)sub_11D4D0(v796, v798, v800, *v801);
        }
        v2520 = v2558;
      }
      v2459 = (__int64 *)v2520;
      v801 = (unsigned __int64 *)(v2520 + 8);
      v2558 = (char *)v801;
      v800 = *v2459;
      return (__m128i *)(unsigned __int8)sub_11D4D0(v796, v798, v800, *v801);
    case 281LL:
      v1115 = v2557;
      v1116 = v2557 + 8;
      v1117 = *(_QWORD *)&v2559[v2557];
      if ( (unsigned int)v1116 > 0x2F )
      {
        v2455 = (__int64 *)v2558;
        v2456 = v2558 + 8;
        v2558 += 8;
        v1119 = *v2455;
      }
      else
      {
        v1118 = v2557 + 16;
        v1119 = *(_QWORD *)&v2559[v1116];
        v2557 = v1118;
        if ( (unsigned int)v1118 <= 0x2F )
        {
          v1120 = v1115 + 24;
          v1121 = *(_QWORD *)&v2559[v1118];
          if ( (unsigned int)v1120 > 0x2F )
            v1122 = (int *)v2558;
          else
            v1122 = (int *)&v2559[v1120];
LABEL_984:
          sub_126420(v1117, v1119, v1121, *v1122, *(double *)a7.m128_u64);
          return nullptr;
        }
        v2456 = v2558;
      }
      v2457 = (__int64 *)v2456;
      v1122 = (int *)(v2456 + 8);
      v2558 = (char *)v1122;
      v1121 = *v2457;
      goto LABEL_984;
    case 282LL:
      v1106 = v2557;
      v1107 = v2557 + 8;
      v2557 = v1107;
      v1108 = *(_QWORD *)&v2559[v1106];
      if ( (unsigned int)v1107 > 0x2F )
      {
        v2296 = (__int64 *)v2558;
        v2541 = v2558 + 8;
        v2558 += 8;
        v1110 = *v2296;
      }
      else
      {
        v1109 = v1106 + 16;
        v1110 = *(_QWORD *)&v2559[v1107];
        v2557 = v1109;
        if ( (unsigned int)v1109 <= 0x2F )
        {
          v1111 = *(const char **)&v2559[v1109];
          v2557 = v1106 + 24;
          if ( v1106 + 24 <= 0x2F )
          {
            v1112 = v1106 + 32;
            v2557 = v1112;
            if ( (unsigned int)v1112 <= 0x2F )
            {
              v1113 = &v2559[v1112];
              v2557 = v1106 + 40;
              goto LABEL_979;
            }
            v1113 = v2558;
LABEL_2035:
            v2558 = v1113 + 8;
LABEL_979:
            v1114 = *(_DWORD **)v1113;
            *(_QWORD *)v2555 = 0;
            copy_tinfo_t();
            sub_11D150(v1108, v1110, v1111, (__int64 *)v2555, v1114, *(double *)a7.m128_u64);
            clear_tinfo_t();
            return nullptr;
          }
          v2298 = v2558;
LABEL_2034:
          v1113 = v2298 + 8;
          v2558 = v1113;
          goto LABEL_2035;
        }
        v2541 = v2558;
      }
      v2297 = (const char **)v2541;
      v2298 = v2541 + 8;
      v2558 = v2298;
      v1111 = *v2297;
      goto LABEL_2034;
    case 283LL:
      v1104 = v2557 + 8;
      v1105 = (unsigned __int8 **)&v2559[v1104];
      if ( (unsigned int)v1104 > 0x2F )
        v1105 = (unsigned __int8 **)v2558;
      sub_1262E0(*(_QWORD *)&v2559[v2557], *v1105, *(double *)a7.m128_u64);
      return nullptr;
    case 284LL:
      v1092 = v2557;
      v1093 = v2557 + 8;
      v2557 = v1093;
      v1094 = *(_QWORD *)&v2559[v1092];
      if ( (unsigned int)v1093 > 0x2F )
      {
        v2292 = (__int64 *)v2558;
        v2540 = v2558 + 8;
        v2558 += 8;
        v1096 = *v2292;
      }
      else
      {
        v1095 = v1092 + 16;
        v1096 = *(_QWORD *)&v2559[v1093];
        if ( (unsigned int)v1095 <= 0x2F )
        {
          v1097 = v1092 + 24;
          v1098 = *(_DWORD *)&v2559[v1095];
          v2557 = v1097;
          if ( (unsigned int)v1097 <= 0x2F )
          {
            v1099 = v1092 + 32;
            v1100 = *(_QWORD *)&v2559[v1097];
            if ( (unsigned int)v1099 > 0x2F )
              v1101 = (int *)v2558;
            else
              v1101 = (int *)&v2559[v1099];
LABEL_970:
            v1102 = *v1101;
            v1103 = (unsigned __int64 *)sub_339CA0();
            sub_120A10(v1094, v1103, v1096, v1098, v1100, v1102);
            return nullptr;
          }
          v2294 = v2558;
LABEL_2032:
          v2295 = (__int64 *)v2294;
          v1101 = (int *)(v2294 + 8);
          v2558 = (char *)v1101;
          v1100 = *v2295;
          goto LABEL_970;
        }
        v2540 = v2558;
      }
      v2293 = (int *)v2540;
      v2294 = v2540 + 8;
      v2558 = v2294;
      v1098 = *v2293;
      goto LABEL_2032;
    case 285LL:
      v1912 = v2557;
      v1913 = v2557 + 8;
      v2557 = v1913;
      v1914 = *(_QWORD *)&v2559[v1912];
      if ( (unsigned int)v1913 > 0x2F )
      {
        v2465 = v2558;
        v1917 = (__int64 *)(v2558 + 8);
        v2558 += 8;
        v1916 = *(_BYTE **)v2465;
      }
      else
      {
        v1915 = v1912 + 16;
        v1916 = *(_BYTE **)&v2559[v1913];
        if ( (unsigned int)v1915 > 0x2F )
          v1917 = (__int64 *)v2558;
        else
          v1917 = (__int64 *)&v2559[v1915];
      }
      v1918 = *v1917;
      v1919 = sub_339CA0();
      return (__m128i *)(unsigned __int8)sub_11D360(v1914, v1919, v1916, v1918, *(double *)a7.m128_u64);
    case 286LL:
      v1601 = v2557 + 8;
      v1602 = *(_QWORD *)&v2559[v2557];
      v1603 = &v2559[v1601];
      if ( (unsigned int)v1601 > 0x2F )
        v1603 = v2558;
      v1604 = *(_QWORD *)v1603;
      v1605 = sub_339CA0();
      *(_BYTE *)v1602 = 6;
      v1606 = 8 * *(_DWORD *)(v1605 + 84);
      v1607 = 1LL << (8 * *(_BYTE *)(v1605 + 84));
      if ( (unsigned __int64)v1606 >= 0x40 )
        v1607 = 0;
      *(_QWORD *)(v1602 + 8) = v1604 & (v1607 - 1);
      return nullptr;
    case 287LL:
      v453 = v2557 + 8;
      v454 = *(_QWORD *)&v2559[v2557];
      v455 = &v2559[v453];
      if ( (unsigned int)v453 > 0x2F )
        v455 = v2558;
      v456 = *(_QWORD *)v455;
      v457 = sub_339CA0();
      sub_11CDA0(v454);
      *(_BYTE *)v454 = 6;
      v458 = 1LL << (8 * *(_BYTE *)(v457 + 84));
      if ( (unsigned __int64)(8 * *(_DWORD *)(v457 + 84)) >= 0x40 )
        v458 = 0;
      *(_QWORD *)(v454 + 8) = v456 & (v458 - 1);
      return nullptr;
    case 288LL:
      v445 = v2557;
      v446 = v2557 + 8;
      v447 = *(_QWORD *)&v2559[v2557];
      if ( (unsigned int)v446 > 0x2F )
      {
        v2253 = v2558;
        v2254 = v2558 + 8;
        v2558 += 8;
        v449 = *(unsigned int *)v2253;
      }
      else
      {
        v448 = v2557 + 16;
        v449 = *(unsigned int *)&v2559[v446];
        v2557 = v448;
        if ( (unsigned int)v448 <= 0x2F )
        {
          v450 = v445 + 24;
          v451 = *(_DWORD *)&v2559[v448];
          if ( (unsigned int)v450 > 0x2F )
            v452 = (int *)v2558;
          else
            v452 = (int *)&v2559[v450];
LABEL_397:
          sub_1252A0(v447, v449, v451, *v452);
          return nullptr;
        }
        v2254 = v2558;
      }
      v2255 = (int *)v2254;
      v452 = (int *)(v2254 + 8);
      v2558 = (char *)v452;
      v451 = *v2255;
      goto LABEL_397;
    case 289LL:
      sub_11D4A0(*(_QWORD *)&v2559[v2557]);
      return nullptr;
    case 290LL:
      v1387 = *(_DWORD *)&v2559[v2557];
      v1388 = sub_339CA0();
      return (__m128i *)(unsigned __int8)sub_11CCD0(v1388, v1387);
    case 291LL:
      return (__m128i *)(unsigned __int8)sub_11ED30(*(_QWORD *)&v2559[v2557], *(double *)a7.m128_u64);
    case 292LL:
      v1385 = *(_QWORD *)&v2559[v2557];
      v1386 = sub_339CA0();
      return (__m128i *)(unsigned __int8)sub_11FDE0(v1385, v1386);
    case 293LL:
      v1811 = v2557 + 8;
      v1812 = (int *)&v2559[v1811];
      if ( (unsigned int)v1811 > 0x2F )
        v1812 = (int *)v2558;
      return (__m128i *)sub_30DAC0(*(_QWORD *)&v2559[v2557], *v1812);
    case 294LL:
      v1805 = v2557 + 8;
      v1806 = *(_QWORD *)&v2559[v2557];
      v1807 = &v2559[v1805];
      if ( (unsigned int)v1805 > 0x2F )
        v1807 = v2558;
      v1808 = *(_DWORD *)v1807;
      v1809 = (unsigned __int64 *)sub_339CA0();
      return (__m128i *)(unsigned __int8)sub_1278D0(v1806, v1809, v1808, v1810, (__m128i)a7);
    case 295LL:
      v2168 = v2557;
      v2169 = v2557 + 8;
      v2557 = v2169;
      v2170 = *(unsigned __int8 **)&v2559[v2168];
      if ( (unsigned int)v2169 > 0x2F )
      {
        v2410 = (__int64 *)v2558;
        v2173 = (unsigned int *)(v2558 + 8);
        v2558 += 8;
        v2172 = *v2410;
      }
      else
      {
        v2171 = v2168 + 16;
        v2172 = *(_QWORD *)&v2559[v2169];
        if ( (unsigned int)v2171 > 0x2F )
          v2173 = (unsigned int *)v2558;
        else
          v2173 = (unsigned int *)&v2559[v2171];
      }
      return (__m128i *)(unsigned __int8)sub_125B60(v2170, v2172, *v2173, *(double *)a7.m128_u64);
    case 296LL:
      v869 = v2557 + 8;
      v870 = (unsigned __int8 **)&v2559[v869];
      if ( (unsigned int)v869 > 0x2F )
        v870 = (unsigned __int8 **)v2558;
      return (__m128i *)sub_11DA40(*(unsigned __int8 **)&v2559[v2557], *v870, *(double *)a7.m128_u64);
    case 297LL:
      v2150 = v2557;
      v2151 = v2557 + 8;
      v2152 = *(_QWORD *)&v2559[v2557];
      if ( (unsigned int)v2151 > 0x2F )
      {
        v2391 = (__int64 *)v2558;
        v2525 = v2558 + 8;
        v2558 += 8;
        v2154 = *v2391;
      }
      else
      {
        v2153 = v2557 + 16;
        v2154 = *(_QWORD *)&v2559[v2151];
        v2557 = v2153;
        if ( (unsigned int)v2153 <= 0x2F )
        {
          v2155 = v2150 + 24;
          v2156 = *(_QWORD *)&v2559[v2153];
          if ( (unsigned int)v2155 > 0x2F )
            v2157 = v2558;
          else
            v2157 = &v2559[v2155];
          return (__m128i *)(int)sub_11E9B0(v2152, v2154, v2156, *(_DWORD *)v2157 != 0, *(double *)a7.m128_u64);
        }
        v2525 = v2558;
      }
      v2392 = (__int64 *)v2525;
      v2157 = v2525 + 8;
      v2558 = v2157;
      v2156 = *v2392;
      return (__m128i *)(int)sub_11E9B0(v2152, v2154, v2156, *(_DWORD *)v2157 != 0, *(double *)a7.m128_u64);
    case 298LL:
      return (__m128i *)(int)sub_11E540(*(_BYTE **)&v2559[v2557], *(double *)a7.m128_u64);
    case 299LL:
      v1178 = v2557;
      v1179 = v2557 + 8;
      v2557 = v1179;
      v1180 = *(char **)&v2559[v1178];
      if ( (unsigned int)v1179 > 0x2F )
      {
        v2474 = (__int64 **)v2558;
        v1183 = v2558 + 8;
        v2558 += 8;
        v1182 = *v2474;
      }
      else
      {
        v1181 = v1178 + 16;
        v1182 = *(__int64 **)&v2559[v1179];
        if ( (unsigned int)v1181 > 0x2F )
          v1183 = v2558;
        else
          v1183 = &v2559[v1181];
      }
      return (__m128i *)(unsigned __int8)sub_11FD80(v1180, v1182, *(_DWORD *)v1183 != 0);
    case 300LL:
      v1176 = v2557 + 8;
      v1177 = &v2559[v1176];
      if ( (unsigned int)v1176 > 0x2F )
        v1177 = v2558;
      return (__m128i *)(unsigned __int8)sub_32F330(*(_QWORD *)&v2559[v2557], *(_QWORD **)v1177, *(double *)a7.m128_u64);
    case 301LL:
      v606 = v2557 + 8;
      v607 = *(_QWORD *)&v2559[v2557];
      v608 = (int *)&v2559[v606];
      if ( (unsigned int)v606 > 0x2F )
        v608 = (int *)v2558;
      v609 = *v608;
      v610 = (unsigned __int64 *)sub_339CA0();
      return (__m128i *)(unsigned __int8)sub_1272B0(v607, v610, v609, 0, *(double *)a7.m128_u64);
    case 302LL:
      v601 = v2557 + 8;
      v602 = *(_QWORD *)&v2559[v2557];
      v603 = (unsigned int *)&v2559[v601];
      if ( (unsigned int)v601 > 0x2F )
        v603 = (unsigned int *)v2558;
      v604 = *v603;
      v605 = (unsigned __int64 *)sub_339CA0();
      return (__m128i *)(unsigned __int8)sub_127850(v602, v605, v604, 0, (__m128i)a7);
    case 303LL:
      v1635 = v2557 + 8;
      v1636 = *(unsigned __int8 **)&v2559[v2557];
      v1637 = &v2559[v1635];
      if ( (unsigned int)v1635 > 0x2F )
        v1637 = v2558;
      v1638 = *(_DWORD *)v1637;
      v1639 = (unsigned __int64 *)sub_339CA0();
      return (__m128i *)(unsigned __int8)sub_1274C0(v1636, v1639, v1638, 0, (__m128i)a7);
    case 304LL:
      v596 = v2557 + 8;
      v597 = *(int **)&v2559[v2557];
      v598 = (int *)&v2559[v596];
      if ( (unsigned int)v596 > 0x2F )
        v598 = (int *)v2558;
      v599 = *v598;
      v600 = (unsigned __int64 *)sub_339CA0();
      return (__m128i *)(unsigned __int8)sub_127290(v597, v600, v599, 0, *(double *)a7.m128_u64);
    case 305LL:
      v1299 = v2557 + 8;
      v1300 = *(int **)&v2559[v2557];
      v1301 = (int *)&v2559[v1299];
      if ( (unsigned int)v1299 > 0x2F )
        v1301 = (int *)v2558;
      v1302 = *v1301;
      v1303 = (unsigned __int64 *)sub_339CA0();
      return (__m128i *)(unsigned __int8)sub_126F10(v1300, v1303, v1302, v1304, *(double *)a7.m128_u64);
    case 306LL:
      v1291 = v2557;
      v1292 = v2557 + 8;
      v2557 = v1292;
      v1293 = *(unsigned int ***)&v2559[v1291];
      if ( (unsigned int)v1292 > 0x2F )
      {
        v2216 = (int *)v2558;
        v1296 = (int *)(v2558 + 8);
        v2558 += 8;
        v1295 = *v2216;
      }
      else
      {
        v1294 = v1291 + 16;
        v1295 = *(_DWORD *)&v2559[v1292];
        if ( (unsigned int)v1294 > 0x2F )
          v1296 = (int *)v2558;
        else
          v1296 = (int *)&v2559[v1294];
      }
      v1297 = *v1296;
      v1298 = (unsigned __int64 *)sub_339CA0();
      return (__m128i *)(unsigned __int8)sub_12AB50(v1293, v1298, v1295, v1297, (__m128i)a7);
    case 307LL:
      v2010 = v2557;
      v2011 = v2557 + 8;
      v2012 = *(_BYTE **)&v2559[v2557];
      if ( (unsigned int)v2011 > 0x2F )
      {
        v2471 = (__int64 *)v2558;
        v2472 = v2558 + 8;
        v2558 += 8;
        v2014 = *v2471;
      }
      else
      {
        v2013 = v2557 + 16;
        v2014 = *(_QWORD *)&v2559[v2011];
        v2557 = v2013;
        if ( (unsigned int)v2013 <= 0x2F )
        {
          v2015 = v2010 + 24;
          v2016 = *(_QWORD *)&v2559[v2013];
          if ( (unsigned int)v2015 > 0x2F )
            v2017 = (__int64 *)v2558;
          else
            v2017 = (__int64 *)&v2559[v2015];
LABEL_1827:
          v2018 = *v2017;
          v2019 = sub_339CA0();
          return (__m128i *)(unsigned __int8)sub_159D40(v2012, v2019, v2014, v2016, v2018);
        }
        v2472 = v2558;
      }
      v2473 = (__int64 *)v2472;
      v2017 = (__int64 *)(v2472 + 8);
      v2558 = (char *)v2017;
      v2016 = *v2473;
      goto LABEL_1827;
    case 308LL:
      v1281 = v2557;
      v1282 = v2557 + 8;
      v1283 = *(char **)&v2559[v2557];
      if ( (unsigned int)v1282 > 0x2F )
      {
        v2220 = v2558;
        v2546 = v2558 + 8;
        v2558 += 8;
        v1285 = *(_DWORD *)v2220;
      }
      else
      {
        v1284 = v2557 + 16;
        v1285 = *(_DWORD *)&v2559[v1282];
        v2557 = v1284;
        if ( (unsigned int)v1284 <= 0x2F )
        {
          v1286 = v1281 + 24;
          v1287 = *(_QWORD *)&v2559[v1284];
          if ( (unsigned int)v1286 > 0x2F )
            v1288 = (int *)v2558;
          else
            v1288 = (int *)&v2559[v1286];
LABEL_1152:
          v1289 = *v1288;
          v1290 = (unsigned __int64 *)sub_339CA0();
          sub_1207E0(v1283, v1290, v1285, v1287, v1289, (__m128i)a7);
          return nullptr;
        }
        v2546 = v2558;
      }
      v2221 = (__int64 *)v2546;
      v1288 = (int *)(v2546 + 8);
      v2558 = (char *)v1288;
      v1287 = *v2221;
      goto LABEL_1152;
    case 309LL:
      v1710 = v2557;
      v1711 = v2557 + 8;
      v2557 = v1711;
      v1712 = *(_QWORD *)&v2559[v1710];
      if ( (unsigned int)v1711 > 0x2F )
      {
        v2192 = (__int64 **)v2558;
        v1715 = (unsigned int *)(v2558 + 8);
        v2558 += 8;
        v1714 = *v2192;
      }
      else
      {
        v1713 = v1710 + 16;
        v1714 = *(__int64 **)&v2559[v1711];
        if ( (unsigned int)v1713 > 0x2F )
          v1715 = (unsigned int *)v2558;
        else
          v1715 = (unsigned int *)&v2559[v1713];
      }
      sub_1B27D0(v1712, v1714, *v1715);
      return nullptr;
    case 310LL:
      return (__m128i *)sub_1B28E0(*(_QWORD *)&v2559[v2557]);
    case 311LL:
      v735 = v2557 + 8;
      v736 = *(_QWORD *)&v2559[v2557];
      if ( (unsigned int)v735 > 0x2F )
      {
        v2469 = (int *)v2558;
        v2470 = (int *)(v2558 + 8);
        v2558 += 8;
        v738 = *v2469;
      }
      else
      {
        v737 = v2557 + 16;
        v738 = *(_DWORD *)&v2559[v735];
        v2557 = v737;
        if ( (unsigned int)v737 <= 0x2F )
        {
          v739 = *(_DWORD *)&v2559[v737];
          goto LABEL_621;
        }
        v2470 = (int *)v2558;
      }
      v2558 = (char *)(v2470 + 2);
      v739 = *v2470;
LABEL_621:
      sub_32F0D0(v736, v738, v739);
      return nullptr;
    case 312LL:
      v733 = v2557 + 8;
      v734 = (__int64 *)&v2559[v733];
      if ( (unsigned int)v733 > 0x2F )
        v734 = (__int64 *)v2558;
      return (__m128i *)(int)sub_32ED90(*(_QWORD *)&v2559[v2557], *v734, *(double *)a7.m128_u64);
    case 313LL:
      return (__m128i *)(unsigned __int8)sub_335200(*(_QWORD *)&v2559[v2557]);
    case 314LL:
      v1882 = v2557;
      v1883 = v2557 + 8;
      v2557 = v1883;
      if ( (unsigned int)v1883 > 0x2F )
      {
        v1884 = (__int64 *)v2558;
        v2558 += 8;
      }
      else
      {
        v1884 = (__int64 *)&v2559[v1883];
        v2557 = v1882 + 16;
      }
      sub_336290(v2555, *v1884);
      copy_tinfo_t();
      clear_tinfo_t();
      return nullptr;
    case 315LL:
      v1034 = v2557;
      v1035 = v2557 + 8;
      v1036 = *(_QWORD *)&v2559[v2557];
      if ( (unsigned int)v1035 > 0x2F )
      {
        v2466 = (__int64 **)v2558;
        v2467 = v2558 + 8;
        v2558 += 8;
        v1038 = *v2466;
      }
      else
      {
        v1037 = v2557 + 16;
        v1038 = *(__int64 **)&v2559[v1035];
        v2557 = v1037;
        if ( (unsigned int)v1037 <= 0x2F )
        {
          v1039 = v1034 + 24;
          v1040 = *(_DWORD *)&v2559[v1037];
          if ( (unsigned int)v1039 > 0x2F )
            v1041 = (unsigned int *)v2558;
          else
            v1041 = (unsigned int *)&v2559[v1039];
LABEL_907:
          sub_1B31C0(v1036, v1038, v1040, *v1041);
          return nullptr;
        }
        v2467 = v2558;
      }
      v2468 = (int *)v2467;
      v1041 = (unsigned int *)(v2467 + 8);
      v2558 = (char *)v1041;
      v1040 = *v2468;
      goto LABEL_907;
    case 316LL:
      return (__m128i *)sub_1B3240(*(_QWORD *)&v2559[v2557]);
    case 317LL:
      v1561 = v2557 + 8;
      v1562 = (__int64 **)&v2559[v1561];
      if ( (unsigned int)v1561 > 0x2F )
        v1562 = (__int64 **)v2558;
      return (__m128i *)(int)sub_11D600(*(__int64 **)&v2559[v2557], *v1562);
    case 318LL:
      v1559 = v2557 + 8;
      v1560 = (__int64 **)&v2559[v1559];
      if ( (unsigned int)v1559 > 0x2F )
        v1560 = (__int64 **)v2558;
      sub_1B0CF0(*(_QWORD **)&v2559[v2557], *v1560);
      return nullptr;
    case 319LL:
      return (__m128i *)sub_1B3340(*(_QWORD **)&v2559[v2557]);
    case 320LL:
      v387 = v2557 + 8;
      v388 = (__int64 **)&v2559[v387];
      if ( (unsigned int)v387 > 0x2F )
        v388 = (__int64 **)v2558;
      return (__m128i *)(unsigned __int8)sub_32F920(*(__int64 **)&v2559[v2557], *v388, *(double *)a7.m128_u64);
    case 321LL:
      v1434 = v2557;
      v1435 = v2557 + 8;
      v2557 = v1435;
      v1436 = *(unsigned __int64 **)&v2559[v1434];
      if ( (unsigned int)v1435 > 0x2F )
      {
        v2505 = (__int64 *)v2558;
        v1439 = (__int64 *)(v2558 + 8);
        v2558 += 8;
        v1438 = *v2505;
      }
      else
      {
        v1437 = v1434 + 16;
        v1438 = *(_QWORD *)&v2559[v1435];
        if ( (unsigned int)v1437 > 0x2F )
          v1439 = (__int64 *)v2558;
        else
          v1439 = (__int64 *)&v2559[v1437];
      }
      *v1436 = sub_32F990(v1438, *v1439, *(double *)a7.m128_u64);
      return nullptr;
    case 322LL:
      v1432 = v2557 + 8;
      v1433 = (__int64 **)&v2559[v1432];
      if ( (unsigned int)v1432 > 0x2F )
        v1433 = (__int64 **)v2558;
      sub_1B5DD0(*(_QWORD *)&v2559[v2557], *v1433);
      return nullptr;
    case 323LL:
      return (__m128i *)sub_1B5EB0(*(_QWORD *)&v2559[v2557]);
    case 324LL:
      v1430 = v2557 + 8;
      v1431 = (__int64 **)&v2559[v1430];
      if ( (unsigned int)v1430 > 0x2F )
        v1431 = (__int64 **)v2558;
      sub_106780(*(_QWORD *)&v2559[v2557], *v1431, *(double *)a7.m128_u64);
      return nullptr;
    case 325LL:
      return (__m128i *)sub_1AE5B0(*(_QWORD *)&v2559[v2557], *(double *)a7.m128_u64);
    case 326LL:
      v893 = v2557;
      v894 = v2557 + 8;
      v2557 = v894;
      v895 = *(_QWORD *)&v2559[v893];
      if ( (unsigned int)v894 > 0x2F )
      {
        v2276 = (__int64 *)v2558;
        v898 = (__int64 **)(v2558 + 8);
        v2558 += 8;
        v897 = *v2276;
      }
      else
      {
        v896 = v893 + 16;
        v897 = *(_QWORD *)&v2559[v894];
        if ( (unsigned int)v896 > 0x2F )
          v898 = (__int64 **)v2558;
        else
          v898 = (__int64 **)&v2559[v896];
      }
      sub_103D60(v895, v897, *v898);
      return nullptr;
    case 327LL:
      v1824 = v2557 + 8;
      v1825 = *(_QWORD *)&v2559[v2557];
      v1826 = (__int64 **)&v2559[v1824];
      if ( (unsigned int)v1824 > 0x2F )
        v1826 = (__int64 **)v2558;
      v1827 = *v1826;
      v1828 = sub_339CA0();
      sub_103D80(v1825, v1828, v1827);
      return nullptr;
    case 328LL:
      v891 = v2557 + 8;
      v892 = (__int64 *)&v2559[v891];
      if ( (unsigned int)v891 > 0x2F )
        v892 = (__int64 *)v2558;
      return (__m128i *)sub_104DF0(*(unsigned __int64 **)&v2559[v2557], *v892);
    case 329LL:
      v1978 = v2557 + 8;
      v1979 = (__int64 **)&v2559[v1978];
      if ( (unsigned int)v1978 > 0x2F )
        v1979 = (__int64 **)v2558;
      sub_106AE0(*(_QWORD **)&v2559[v2557], *v1979, *(double *)a7.m128_u64);
      return nullptr;
    case 330LL:
      return (__m128i *)sub_1AE630(*(_QWORD **)&v2559[v2557], *(double *)a7.m128_u64);
    case 331LL:
      v1195 = v2557;
      v1196 = v2557 + 8;
      v2557 = v1196;
      v1197 = *(_QWORD **)&v2559[v1195];
      if ( (unsigned int)v1196 > 0x2F )
      {
        v2185 = v2558;
        v1200 = v2558 + 8;
        v2558 += 8;
        v1199 = *(_QWORD **)v2185;
      }
      else
      {
        v1198 = v1195 + 16;
        v1199 = *(_QWORD **)&v2559[v1196];
        if ( (unsigned int)v1198 > 0x2F )
          v1200 = v2558;
        else
          v1200 = &v2559[v1198];
      }
      v1201 = *(_DWORD *)v1200;
      v1202 = sub_339CA0();
      return (__m128i *)(int)sub_104E40(v1197, v1202, v1199, v1201);
    case 332LL:
      sub_104E10(*(_QWORD *)&v2559[v2557], *(double *)a7.m128_u64);
      return nullptr;
    case 333LL:
      v1662 = v2557 + 8;
      v1663 = (__int64 *)&v2559[v1662];
      if ( (unsigned int)v1662 > 0x2F )
        v1663 = (__int64 *)v2558;
      sub_330970(*(_QWORD *)&v2559[v2557], *v1663);
      return nullptr;
    case 334LL:
      v1660 = v2557 + 8;
      v1661 = (__int64 *)&v2559[v1660];
      if ( (unsigned int)v1660 > 0x2F )
        v1661 = (__int64 *)v2558;
      sub_1253A0(*(_QWORD *)&v2559[v2557], *v1661);
      return nullptr;
    case 335LL:
      v649 = *(unsigned int **)&v2559[v2557];
      v650 = (unsigned __int64 *)sub_339CA0();
      sub_11D5D0(v649, v650, (__m128i)a7);
      return nullptr;
    case 336LL:
      v647 = v2557 + 8;
      v648 = (__int64 *)&v2559[v647];
      if ( (unsigned int)v647 > 0x2F )
        v648 = (__int64 *)v2558;
      sub_11D890(*(_QWORD *)&v2559[v2557], *v648);
      return nullptr;
    case 337LL:
      v2026 = v2557;
      v2027 = v2557 + 8;
      v2557 = v2027;
      v2028 = *(int **)&v2559[v2026];
      if ( (unsigned int)v2027 > 0x2F )
      {
        v2499 = (__int64 **)v2558;
        v2031 = (unsigned int *)(v2558 + 8);
        v2558 += 8;
        v2030 = *v2499;
      }
      else
      {
        v2029 = v2026 + 16;
        v2030 = *(__int64 **)&v2559[v2027];
        if ( (unsigned int)v2029 > 0x2F )
          v2031 = (unsigned int *)v2558;
        else
          v2031 = (unsigned int *)&v2559[v2029];
      }
      sub_1B59B0(v2028, v2030, *v2031);
      return nullptr;
    case 338LL:
      return (__m128i *)sub_1B5B40(*(int **)&v2559[v2557]);
    case 339LL:
      v1341 = v2557 + 8;
      v1342 = (__int64 *)&v2559[v1341];
      if ( (unsigned int)v1341 > 0x2F )
        v1342 = (__int64 *)v2558;
      sub_122290(*(_QWORD *)&v2559[v2557], *v1342);
      return nullptr;
    case 340LL:
      v1327 = v2557;
      v1328 = v2557 + 8;
      v1329 = *(unsigned int **)&v2559[v2557];
      if ( (unsigned int)v1328 > 0x2F )
      {
        v2209 = (__int64 *)v2558;
        v2544 = v2558 + 8;
        v2558 += 8;
        v1331 = *v2209;
      }
      else
      {
        v1330 = v2557 + 16;
        v1331 = *(_QWORD *)&v2559[v1328];
        v2557 = v1330;
        if ( (unsigned int)v1330 <= 0x2F )
        {
          v1332 = v1327 + 24;
          v1333 = *(_QWORD *)&v2559[v1330];
          if ( (unsigned int)v1332 <= 0x2F )
          {
            v1334 = v1327 + 32;
            v1335 = *(int ***)&v2559[v1332];
            v2557 = v1334;
            if ( (unsigned int)v1334 <= 0x2F )
            {
              v1336 = v1327 + 40;
              v1337 = *(__m128 ***)&v2559[v1334];
              if ( (unsigned int)v1336 > 0x2F )
                v1338 = (unsigned int *)v2558;
              else
                v1338 = (unsigned int *)&v2559[v1336];
LABEL_1186:
              v1339 = *v1338;
              v1340 = (unsigned __int8 *)sub_339CA0();
              return (__m128i *)(int)sub_15BC70(v1329, v1340, v1331, v1333, v1335, v1337, (__m128i)a7, a8, v1339);
            }
            v2213 = v2558;
LABEL_1991:
            v2214 = (__m128 ***)v2213;
            v1338 = (unsigned int *)(v2213 + 8);
            v2558 = (char *)v1338;
            v1337 = *v2214;
            goto LABEL_1186;
          }
          v2211 = v2558;
LABEL_1990:
          v2212 = (int ***)v2211;
          v2213 = v2211 + 8;
          v2558 = v2213;
          v1335 = *v2212;
          goto LABEL_1991;
        }
        v2544 = v2558;
      }
      v2210 = (__int64 *)v2544;
      v2211 = v2544 + 8;
      v2558 = v2211;
      v1333 = *v2210;
      goto LABEL_1990;
    case 341LL:
      v778 = v2557 + 8;
      v779 = (__int64 *)&v2559[v778];
      if ( (unsigned int)v778 > 0x2F )
        v779 = (__int64 *)v2558;
      return (__m128i *)(int)sub_11E900(*(_BYTE **)&v2559[v2557], *v779);
    case 342LL:
      v776 = v2557 + 8;
      v777 = &v2559[v776];
      if ( (unsigned int)v776 > 0x2F )
        v777 = v2558;
      return (__m128i *)(int)sub_11F760(*(_BYTE **)&v2559[v2557], *(_QWORD **)v777);
    case 343LL:
      sub_11D5A0(*(_QWORD *)&v2559[v2557]);
      return nullptr;
    case 344LL:
      v768 = v2557;
      v769 = v2557 + 8;
      v2557 = v769;
      v770 = *(unsigned __int8 **)&v2559[v768];
      if ( (unsigned int)v769 > 0x2F )
      {
        v2241 = (unsigned int **)v2558;
        v773 = (unsigned int *)(v2558 + 8);
        v2558 += 8;
        v772 = *v2241;
      }
      else
      {
        v771 = v768 + 16;
        v772 = *(unsigned int **)&v2559[v769];
        if ( (unsigned int)v771 > 0x2F )
          v773 = (unsigned int *)v2558;
        else
          v773 = (unsigned int *)&v2559[v771];
      }
      v774 = *v773;
      v775 = sub_339CA0();
      return (__m128i *)(unsigned __int8)sub_125B90(v770, v775, v772, v774, *(double *)a7.m128_u64);
    case 345LL:
      v1904 = v2557 + 8;
      v1905 = (__int64 *)&v2559[v1904];
      if ( (unsigned int)v1904 > 0x2F )
        v1905 = (__int64 *)v2558;
      return (__m128i *)sub_11D9A0(*(_QWORD *)&v2559[v2557], *v1905);
    case 346LL:
      v1899 = v2557 + 8;
      v1900 = *(int **)&v2559[v2557];
      v1901 = &v2559[v1899];
      if ( (unsigned int)v1899 > 0x2F )
        v1901 = v2558;
      v1902 = *(_DWORD *)v1901;
      v1903 = sub_339CA0();
      return (__m128i *)(unsigned __int8)sub_11C750(v1900, v1903, v1902);
    case 347LL:
      v1068 = v2557 + 8;
      v1069 = (const char **)&v2559[v1068];
      if ( (unsigned int)v1068 > 0x2F )
        v1069 = (const char **)v2558;
      return (__m128i *)(unsigned __int8)sub_120560(*(_QWORD *)&v2559[v2557], *v1069);
    case 348LL:
      v1066 = v2557 + 8;
      v1067 = &v2559[v1066];
      if ( (unsigned int)v1066 > 0x2F )
        v1067 = v2558;
      return (__m128i *)sub_120380(*(_BYTE **)&v2559[v2557], *(_DWORD *)v1067 != 0);
    case 349LL:
      v1579 = v2557 + 8;
      v1580 = *(_BYTE **)&v2559[v2557];
      v1581 = &v2559[v1579];
      if ( (unsigned int)v1579 > 0x2F )
        v1581 = v2558;
      v1582 = *(_DWORD *)v1581 != 0;
      v1583 = sub_339CA0();
      return (__m128i *)(unsigned __int8)sub_1205A0(v1580, v1583, v1582);
    case 350LL:
      v1577 = v2557 + 8;
      v1578 = (int *)&v2559[v1577];
      if ( (unsigned int)v1577 > 0x2F )
        v1578 = (int *)v2558;
      return (__m128i *)sub_1202F0(*(_BYTE **)&v2559[v2557], *v1578);
    case 351LL:
      v399 = v2557;
      v400 = v2557 + 8;
      v2557 = v400;
      v401 = *(_QWORD *)&v2559[v399];
      if ( (unsigned int)v400 > 0x2F )
      {
        v2497 = v2558;
        v404 = (int *)(v2558 + 8);
        v2558 += 8;
        v403 = *(_QWORD **)v2497;
      }
      else
      {
        v402 = v399 + 16;
        v403 = *(_QWORD **)&v2559[v400];
        if ( (unsigned int)v402 > 0x2F )
          v404 = (int *)v2558;
        else
          v404 = (int *)&v2559[v402];
      }
      return (__m128i *)sub_11C8E0(v401, v403, *v404);
    case 352LL:
      v397 = v2557 + 8;
      v398 = &v2559[v397];
      if ( (unsigned int)v397 > 0x2F )
        v398 = v2558;
      return (__m128i *)sub_11C8A0(*(_QWORD *)&v2559[v2557], *(_QWORD **)v398);
    case 353LL:
      return (__m128i *)sub_11E8C0(*(unsigned int **)&v2559[v2557]);
    case 354LL:
      v2054 = v2557;
      v2055 = v2557 + 8;
      v2557 = v2055;
      v2056 = *(_QWORD *)&v2559[v2054];
      if ( (unsigned int)v2055 > 0x2F )
      {
        v2182 = (__int64 *)v2558;
        v2059 = (__int64 *)(v2558 + 8);
        v2558 += 8;
        v2058 = *v2182;
      }
      else
      {
        v2057 = v2054 + 16;
        v2058 = *(_QWORD *)&v2559[v2055];
        if ( (unsigned int)v2057 > 0x2F )
          v2059 = (__int64 *)v2558;
        else
          v2059 = (__int64 *)&v2559[v2057];
      }
      return (__m128i *)sub_122240(v2056, v2058, *v2059);
    case 355LL:
      return (__m128i *)(unsigned __int8)sub_11EC90(*(_BYTE **)&v2559[v2557]);
    case 356LL:
      v1362 = v2557 + 8;
      v1363 = (__int64 *)&v2559[v1362];
      if ( (unsigned int)v1362 > 0x2F )
        v1363 = (__int64 *)v2558;
      return (__m128i *)(int)sub_91020(*(unsigned __int8 **)&v2559[v2557], *v1363);
    case 357LL:
      v1784 = v2557;
      v1785 = v2557 + 8;
      v1786 = *(_QWORD *)&v2559[v2557];
      if ( (unsigned int)v1785 > 0x2F )
      {
        v2186 = (__int64 *)v2558;
        v2543 = v2558 + 8;
        v2558 += 8;
        v1788 = *v2186;
      }
      else
      {
        v1787 = v2557 + 16;
        v1788 = *(_QWORD *)&v2559[v1785];
        v2557 = v1787;
        if ( (unsigned int)v1787 <= 0x2F )
        {
          v1789 = v1784 + 24;
          v1790 = *(_QWORD *)&v2559[v1787];
          if ( (unsigned int)v1789 > 0x2F )
            v1791 = (int *)v2558;
          else
            v1791 = (int *)&v2559[v1789];
          return (__m128i *)(unsigned __int8)sub_884C0(v1786, v1788, v1790, *v1791, (__m128i)a7);
        }
        v2543 = v2558;
      }
      v2187 = (__int64 *)v2543;
      v1791 = (int *)(v2543 + 8);
      v2558 = (char *)v1791;
      v1790 = *v2187;
      return (__m128i *)(unsigned __int8)sub_884C0(v1786, v1788, v1790, *v1791, (__m128i)a7);
    case 358LL:
      return (__m128i *)sub_1229A0(*(_QWORD *)&v2559[v2557]);
    case 359LL:
      return (__m128i *)sub_1229D0(*(_QWORD *)&v2559[v2557]);
    case 360LL:
      sub_330CE0(*(_QWORD *)&v2559[v2557]);
      return nullptr;
    case 361LL:
      v1927 = v2557 + 8;
      v1928 = &v2559[v1927];
      if ( (unsigned int)v1927 > 0x2F )
        v1928 = v2558;
      sub_1B5930(*(_QWORD *)&v2559[v2557], *(void (****)(_QWORD, _QWORD, const char *, ...))v1928);
      return nullptr;
    case 362LL:
      sub_1B81C0(*(_QWORD *)&v2559[v2557]);
      return nullptr;
    case 363LL:
      v1148 = v2557;
      v1149 = v2557 + 8;
      v2557 = v1149;
      v1150 = *(_QWORD *)&v2559[v1148];
      if ( (unsigned int)v1149 > 0x2F )
      {
        v2490 = (const char **)v2558;
        v1153 = v2558 + 8;
        v2558 += 8;
        v1152 = *v2490;
      }
      else
      {
        v1151 = v1148 + 16;
        v1152 = *(const char **)&v2559[v1149];
        if ( (unsigned int)v1151 > 0x2F )
          v1153 = v2558;
        else
          v1153 = &v2559[v1151];
      }
      v1154 = *(const __m128i **)v1153;
      v2560 = _mm_loadu_si128((const __m128i *)*(_QWORD *)v1153);
      v2561 = v1154[1].m128i_i64[0];
      sub_1B7C20(v1150, v1152);
      return nullptr;
    case 364LL:
      v1142 = v2557;
      v1143 = v2557 + 8;
      v2557 = v1143;
      v1144 = *(_QWORD *)&v2559[v1142];
      if ( (unsigned int)v1143 > 0x2F )
      {
        v2222 = v2558;
        v1147 = (__int64 *)(v2558 + 8);
        v2558 += 8;
        v1146 = *(_QWORD **)v2222;
      }
      else
      {
        v1145 = v1142 + 16;
        v1146 = *(_QWORD **)&v2559[v1143];
        if ( (unsigned int)v1145 > 0x2F )
          v1147 = (__int64 *)v2558;
        else
          v1147 = (__int64 *)&v2559[v1145];
      }
      return (__m128i *)sub_A3160(v1144, v1146, *v1147, *(double *)a7.m128_u64);
    case 365LL:
      v1623 = v2557 + 8;
      v1624 = (__int64 *)&v2559[v1623];
      if ( (unsigned int)v1623 > 0x2F )
        v1624 = (__int64 *)v2558;
      return (__m128i *)sub_A33C0(*(_QWORD *)&v2559[v2557], *v1624);
    case 366LL:
      v1621 = v2557 + 8;
      v1622 = (__int64 *)&v2559[v1621];
      if ( (unsigned int)v1621 > 0x2F )
        v1622 = (__int64 *)v2558;
      return (__m128i *)(int)sub_11F830(*(const __m128i **)&v2559[v2557], *v1622);
    case 367LL:
      v2136 = v2557 + 8;
      v2137 = (__int64 *)&v2559[v2136];
      if ( (unsigned int)v2136 > 0x2F )
        v2137 = (__int64 *)v2558;
      return (__m128i *)(int)sub_11F5B0(*(const __m128i **)&v2559[v2557], *v2137);
    case 368LL:
      v478 = v2557;
      v479 = v2557 + 8;
      v2557 = v479;
      v480 = *(_QWORD **)&v2559[v478];
      if ( (unsigned int)v479 > 0x2F )
      {
        v2485 = (__int64 **)v2558;
        v2486 = v2558 + 8;
        v2558 += 8;
        v482 = *v2485;
      }
      else
      {
        v481 = v478 + 16;
        v482 = *(__int64 **)&v2559[v479];
        if ( (unsigned int)v481 <= 0x2F )
        {
          v483 = v478 + 24;
          v484 = *(_QWORD *)&v2559[v481];
          v2557 = v483;
          if ( (unsigned int)v483 <= 0x2F )
          {
            v485 = v478 + 32;
            v486 = *(_QWORD *)&v2559[v483];
            if ( (unsigned int)v485 > 0x2F )
              v487 = (__int64 *)v2558;
            else
              v487 = (__int64 *)&v2559[v485];
            return (__m128i *)(int)sub_129C50(v480, v482, v484, v486, *v487, *(double *)a7.m128_u64, a8);
          }
          v2488 = (__int64 *)v2558;
LABEL_2116:
          v2489 = v2488;
          v487 = v2488 + 1;
          v2558 = (char *)v487;
          v486 = *v2489;
          return (__m128i *)(int)sub_129C50(v480, v482, v484, v486, *v487, *(double *)a7.m128_u64, a8);
        }
        v2486 = v2558;
      }
      v2487 = (__int64 *)v2486;
      v2488 = (__int64 *)(v2486 + 8);
      v2558 = (char *)v2488;
      v484 = *v2487;
      goto LABEL_2116;
    case 369LL:
      v2002 = v2557;
      v2003 = v2557 + 8;
      v2557 = v2003;
      v2004 = *(_QWORD *)&v2559[v2002];
      if ( (unsigned int)v2003 > 0x2F )
      {
        v2496 = (unsigned int **)v2558;
        v2007 = (unsigned int *)(v2558 + 8);
        v2558 += 8;
        v2006 = *v2496;
      }
      else
      {
        v2005 = v2002 + 16;
        v2006 = *(unsigned int **)&v2559[v2003];
        if ( (unsigned int)v2005 > 0x2F )
          v2007 = (unsigned int *)v2558;
        else
          v2007 = (unsigned int *)&v2559[v2005];
      }
      return (__m128i *)(int)sub_167810(v2004, v2006, *v2007, (__m128i)a7, a8, a9);
    case 370LL:
      return (__m128i *)(int)sub_B57E0(*(_QWORD *)&v2559[v2557], (__int64)a2, a3, a4, a5, (int)a6);
    case 371LL:
      v1247 = v2557 + 8;
      v1248 = &v2559[v1247];
      if ( (unsigned int)v1247 > 0x2F )
        v1248 = v2558;
      return (__m128i *)(int)sub_A7590(
                               *(_QWORD *)&v2559[v2557],
                               *(_DWORD *)v1248 != 0,
                               *(unsigned int *)v1248,
                               v1247,
                               a5,
                               (int)a6);
    case 372LL:
      return (__m128i *)(int)sub_A8320(*(_QWORD *)&v2559[v2557]);
    case 373LL:
      v2140 = v2557;
      v2141 = v2557 + 8;
      v2557 = v2141;
      v2142 = *(_QWORD *)&v2559[v2140];
      if ( (unsigned int)v2141 > 0x2F )
      {
        v2398 = (__int64 **)v2558;
        v2527 = v2558 + 8;
        v2558 += 8;
        v2144 = *v2398;
      }
      else
      {
        v2143 = v2140 + 16;
        v2144 = *(__int64 **)&v2559[v2141];
        if ( (unsigned int)v2143 <= 0x2F )
        {
          v2145 = v2140 + 24;
          v2146 = *(_QWORD *)&v2559[v2143];
          v2557 = v2145;
          if ( (unsigned int)v2145 <= 0x2F )
          {
            v2147 = v2140 + 32;
            v2148 = *(unsigned int *)&v2559[v2145];
            if ( (unsigned int)v2147 > 0x2F )
              v2149 = (unsigned int **)v2558;
            else
              v2149 = (unsigned int **)&v2559[v2147];
LABEL_1955:
            sub_123EA0(v2142, v2144, v2146, v2148, **v2149, *(double *)a7.m128_u64);
            return nullptr;
          }
          v2400 = v2558;
LABEL_2084:
          v2401 = v2400;
          v2149 = (unsigned int **)(v2400 + 8);
          v2558 = (char *)v2149;
          v2148 = *(unsigned int *)v2401;
          goto LABEL_1955;
        }
        v2527 = v2558;
      }
      v2399 = (__int64 *)v2527;
      v2400 = v2527 + 8;
      v2558 = v2400;
      v2146 = *v2399;
      goto LABEL_2084;
    case 374LL:
      v1698 = v2557;
      v1699 = v2557 + 8;
      v1700 = *(_QWORD *)&v2559[v2557];
      if ( (unsigned int)v1699 > 0x2F )
      {
        v2482 = (__int64 **)v2558;
        v2483 = v2558 + 8;
        v2558 += 8;
        v1702 = *v2482;
      }
      else
      {
        v1701 = v2557 + 16;
        v1702 = *(__int64 **)&v2559[v1699];
        v2557 = v1701;
        if ( (unsigned int)v1701 <= 0x2F )
        {
          v1703 = v1698 + 24;
          v1704 = *(_QWORD *)&v2559[v1701];
          if ( (unsigned int)v1703 > 0x2F )
            v1705 = v2558;
          else
            v1705 = &v2559[v1703];
LABEL_1535:
          sub_127FE0(v1700, v1702, v1704, *(unsigned int *)v1705, v1704, (int)a6, *(double *)a7.m128_u64, a8);
          return nullptr;
        }
        v2483 = v2558;
      }
      v2484 = (__int64 *)v2483;
      v1705 = v2483 + 8;
      v2558 = v1705;
      v1704 = *v2484;
      goto LABEL_1535;
    case 375LL:
      v662 = v2557;
      v663 = v2557 + 8;
      v2557 = v663;
      v664 = *(__int64 **)&v2559[v662];
      if ( (unsigned int)v663 > 0x2F )
      {
        v2242 = (__int64 *)v2558;
        v2531 = v2558 + 8;
        v2558 += 8;
        v666 = *v2242;
      }
      else
      {
        v665 = v662 + 16;
        v666 = *(_QWORD *)&v2559[v663];
        v2557 = v665;
        if ( (unsigned int)v665 <= 0x2F )
        {
          v667 = v662 + 24;
          v668 = *(_QWORD *)&v2559[v665];
          v2557 = v667;
          if ( (unsigned int)v667 <= 0x2F )
          {
            v669 = &v2559[v667];
            v2557 = v662 + 32;
            goto LABEL_562;
          }
          v669 = v2558;
LABEL_2005:
          v2558 = v669 + 8;
LABEL_562:
          sub_124680((__int64)v2555, v666, v668, *(unsigned int *)v669, *(double *)a7.m128_u64, a8);
          sub_648D0(v664, (const void **)v2555, *(double *)a7.m128_u64);
          v670 = *(_QWORD *)&v2555[16];
          v671 = _mm_loadu_si128((const __m128i *)&v2555[24]);
          memset(&v2555[16], 0, 24);
          v672 = v664[2];
          if ( v672 )
          {
            v2550 = v671;
            v664[3] = 0;
            qfree(v672);
            v671 = _mm_load_si128(&v2550);
          }
          v664[2] = v670;
          *(__m128i *)(v664 + 3) = v671;
          if ( *(_QWORD *)&v2555[16] )
          {
            *(_QWORD *)&v2555[24] = 0;
            qfree(*(__int64 *)&v2555[16]);
          }
LABEL_10:
          qfree(*(__int64 *)v2555);
          return nullptr;
        }
        v2531 = v2558;
      }
      v2243 = (__int64 *)v2531;
      v669 = v2531 + 8;
      v2558 = v669;
      v668 = *v2243;
      goto LABEL_2005;
    case 376LL:
      v14 = v2557;
      v15 = v2557 + 8;
      v2557 = v15;
      v16 = *(__int64 **)&v2559[v14];
      if ( (unsigned int)v15 > 0x2F )
      {
        v2244 = (__int64 *)v2558;
        v2549 = v2558 + 8;
        v2558 += 8;
        v18 = *v2244;
      }
      else
      {
        v17 = v14 + 16;
        v18 = *(_QWORD *)&v2559[v15];
        v2557 = v17;
        if ( (unsigned int)v17 <= 0x2F )
        {
          v19 = v14 + 24;
          v20 = *(_QWORD *)&v2559[v17];
          v2557 = v19;
          if ( (unsigned int)v19 <= 0x2F )
          {
            v21 = &v2559[v19];
            v2557 = v14 + 32;
            goto LABEL_6;
          }
          v21 = v2558;
LABEL_2007:
          v2558 = v21 + 8;
LABEL_6:
          sub_127A20((__int64)v2555, v18, v20, *(unsigned int *)v21, a5, (int)a6, *(double *)a7.m128_u64, a8);
          sub_648D0(v16, (const void **)v2555, *(double *)a7.m128_u64);
          v22 = *(_QWORD *)&v2555[16];
          v23 = _mm_loadu_si128((const __m128i *)&v2555[24]);
          memset(&v2555[16], 0, 24);
          v24 = v16[2];
          if ( v24 )
          {
            v2550 = v23;
            v16[3] = 0;
            qfree(v24);
            v23 = _mm_load_si128(&v2550);
          }
          v16[2] = v22;
          *(__m128i *)(v16 + 3) = v23;
          if ( *(_QWORD *)&v2555[16] )
          {
            *(_QWORD *)&v2555[24] = 0;
            qfree(*(__int64 *)&v2555[16]);
          }
          goto LABEL_10;
        }
        v2549 = v2558;
      }
      v2245 = (__int64 *)v2549;
      v21 = v2549 + 8;
      v2558 = v21;
      v20 = *v2245;
      goto LABEL_2007;
    case 377LL:
      v1857 = v2557;
      v1858 = v2557 + 8;
      v2557 = v1858;
      v1859 = *(_QWORD *)&v2559[v1857];
      if ( (unsigned int)v1858 > 0x2F )
      {
        v2491 = (unsigned __int64 ***)v2558;
        v2492 = v2558 + 8;
        v2558 += 8;
        v1861 = *v2491;
      }
      else
      {
        v1860 = v1857 + 16;
        v1861 = *(unsigned __int64 ***)&v2559[v1858];
        if ( (unsigned int)v1860 <= 0x2F )
        {
          v1862 = v1857 + 24;
          v1863 = *(_QWORD *)&v2559[v1860];
          v2557 = v1862;
          if ( (unsigned int)v1862 <= 0x2F )
          {
            v1864 = v1857 + 32;
            v1865 = *(_QWORD *)&v2559[v1862];
            if ( (unsigned int)v1864 > 0x2F )
              v1866 = (unsigned int *)v2558;
            else
              v1866 = (unsigned int *)&v2559[v1864];
            return (__m128i *)sub_A9D90(v1859, v1861, v1863, v1865, *v1866);
          }
          v2494 = v2558;
LABEL_2118:
          v2495 = (__int64 *)v2494;
          v1866 = (unsigned int *)(v2494 + 8);
          v2558 = (char *)v1866;
          v1865 = *v2495;
          return (__m128i *)sub_A9D90(v1859, v1861, v1863, v1865, *v1866);
        }
        v2492 = v2558;
      }
      v2493 = (__int64 *)v2492;
      v2494 = v2492 + 8;
      v2558 = v2494;
      v1863 = *v2493;
      goto LABEL_2118;
    case 378LL:
      v1847 = v2557;
      v1848 = v2557 + 8;
      v2557 = v1848;
      v1849 = *(_QWORD *)&v2559[v1847];
      if ( (unsigned int)v1848 > 0x2F )
      {
        v2236 = (unsigned __int64 ***)v2558;
        v2547 = v2558 + 8;
        v2558 += 8;
        v1851 = *v2236;
      }
      else
      {
        v1850 = v1847 + 16;
        v1851 = *(unsigned __int64 ***)&v2559[v1848];
        if ( (unsigned int)v1850 <= 0x2F )
        {
          v1852 = v1847 + 24;
          v1853 = *(_QWORD *)&v2559[v1850];
          v2557 = v1852;
          if ( (unsigned int)v1852 <= 0x2F )
          {
            v1854 = v1847 + 32;
            v1855 = *(_QWORD *)&v2559[v1852];
            if ( (unsigned int)v1854 > 0x2F )
              v1856 = (unsigned int *)v2558;
            else
              v1856 = (unsigned int *)&v2559[v1854];
            return (__m128i *)sub_A9AA0(v1849, v1851, v1853, v1855, *v1856);
          }
          v2238 = v2558;
LABEL_2000:
          v2239 = (__int64 *)v2238;
          v1856 = (unsigned int *)(v2238 + 8);
          v2558 = (char *)v1856;
          v1855 = *v2239;
          return (__m128i *)sub_A9AA0(v1849, v1851, v1853, v1855, *v1856);
        }
        v2547 = v2558;
      }
      v2237 = (__int64 *)v2547;
      v2238 = v2547 + 8;
      v2558 = v2238;
      v1853 = *v2237;
      goto LABEL_2000;
    case 379LL:
      v2158 = v2557;
      v2159 = v2557 + 8;
      v2160 = *(_QWORD *)&v2559[v2557];
      if ( (unsigned int)v2159 > 0x2F )
      {
        v2407 = (__int64 *)v2558;
        v2408 = v2558 + 8;
        v2558 += 8;
        v2162 = *v2407;
      }
      else
      {
        v2161 = v2557 + 16;
        v2162 = *(_QWORD *)&v2559[v2159];
        v2557 = v2161;
        if ( (unsigned int)v2161 <= 0x2F )
        {
          v2163 = v2158 + 24;
          v2164 = *(_QWORD *)&v2559[v2161];
          if ( (unsigned int)v2163 > 0x2F )
            v2165 = (__int64 *)v2558;
          else
            v2165 = (__int64 *)&v2559[v2163];
          return (__m128i *)(unsigned __int8)sub_A9BE0(v2160, v2162, v2164, *v2165);
        }
        v2408 = v2558;
      }
      v2409 = (__int64 *)v2408;
      v2165 = (__int64 *)(v2408 + 8);
      v2558 = (char *)v2165;
      v2164 = *v2409;
      return (__m128i *)(unsigned __int8)sub_A9BE0(v2160, v2162, v2164, *v2165);
    case 380LL:
      v1006 = v2557;
      v1007 = v2557 + 8;
      v2557 = v1007;
      v1008 = *(_QWORD *)&v2559[v1006];
      if ( (unsigned int)v1007 > 0x2F )
      {
        v2475 = v2558;
        v2476 = v2558 + 8;
        v2558 += 8;
        v1010 = *(_QWORD **)v2475;
      }
      else
      {
        v1009 = v1006 + 16;
        v1010 = *(_QWORD **)&v2559[v1007];
        if ( (unsigned int)v1009 <= 0x2F )
        {
          v1011 = v1006 + 24;
          v1012 = *(__int64 **)&v2559[v1009];
          v2557 = v1011;
          if ( (unsigned int)v1011 <= 0x2F )
          {
            v1013 = v1006 + 32;
            v1014 = *(_QWORD *)&v2559[v1011];
            if ( (unsigned int)v1013 > 0x2F )
              v1015 = v2558;
            else
              v1015 = &v2559[v1013];
            return (__m128i *)sub_12A5C0(v1008, v1010, v1012, v1014, *(_DWORD *)v1015, *(double *)a7.m128_u64, a8);
          }
          v2478 = v2558;
LABEL_2112:
          v2479 = (__int64 *)v2478;
          v1015 = v2478 + 8;
          v2558 = v1015;
          v1014 = *v2479;
          return (__m128i *)sub_12A5C0(v1008, v1010, v1012, v1014, *(_DWORD *)v1015, *(double *)a7.m128_u64, a8);
        }
        v2476 = v2558;
      }
      v2477 = (__int64 **)v2476;
      v2478 = v2476 + 8;
      v2558 = v2478;
      v1012 = *v2477;
      goto LABEL_2112;
    case 381LL:
      v1515 = v2557;
      v1516 = v2557 + 8;
      v1517 = *(_QWORD **)&v2559[v2557];
      if ( (unsigned int)v1516 > 0x2F )
      {
        v2480 = (__m128i **)v2558;
        v2524 = v2558 + 8;
        v2558 += 8;
        v1519 = *v2480;
      }
      else
      {
        v1518 = v2557 + 16;
        v1519 = *(__m128i **)&v2559[v1516];
        v2557 = v1518;
        if ( (unsigned int)v1518 <= 0x2F )
        {
          v1520 = v1515 + 24;
          v1521 = *(__int64 **)&v2559[v1518];
          if ( (unsigned int)v1520 > 0x2F )
            v1522 = (unsigned int *)v2558;
          else
            v1522 = (unsigned int *)&v2559[v1520];
          return (__m128i *)(unsigned __int8)sub_1EB0E0(v1517, v1519, v1521, *v1522, *(double *)a7.m128_u64, a8);
        }
        v2524 = v2558;
      }
      v2481 = (__int64 **)v2524;
      v1522 = (unsigned int *)(v2524 + 8);
      v2558 = (char *)v1522;
      v1521 = *v2481;
      return (__m128i *)(unsigned __int8)sub_1EB0E0(v1517, v1519, v1521, *v1522, *(double *)a7.m128_u64, a8);
    case 382LL:
      v1505 = v2557;
      v1506 = v2557 + 8;
      v2557 = v1506;
      v1507 = *(_QWORD **)&v2559[v1505];
      if ( (unsigned int)v1506 > 0x2F )
      {
        v2194 = (__m128i **)v2558;
        v2195 = v2558 + 8;
        v2558 += 8;
        v1509 = *v2194;
      }
      else
      {
        v1508 = v1505 + 16;
        v1509 = *(__m128i **)&v2559[v1506];
        if ( (unsigned int)v1508 <= 0x2F )
        {
          v1510 = v1505 + 24;
          v1511 = *(__int64 **)&v2559[v1508];
          v2557 = v1510;
          if ( (unsigned int)v1510 <= 0x2F )
          {
            v1512 = v1505 + 32;
            v1513 = *(_QWORD *)&v2559[v1510];
            if ( (unsigned int)v1512 > 0x2F )
              v1514 = (unsigned int *)v2558;
            else
              v1514 = (unsigned int *)&v2559[v1512];
            return (__m128i *)(unsigned __int8)sub_1EAE10(
                                                 v1507,
                                                 v1509,
                                                 v1511,
                                                 v1513,
                                                 *v1514,
                                                 *(double *)a7.m128_u64,
                                                 a8);
          }
          v2197 = v2558;
LABEL_1983:
          v2198 = (__int64 *)v2197;
          v1514 = (unsigned int *)(v2197 + 8);
          v2558 = (char *)v1514;
          v1513 = *v2198;
          return (__m128i *)(unsigned __int8)sub_1EAE10(v1507, v1509, v1511, v1513, *v1514, *(double *)a7.m128_u64, a8);
        }
        v2195 = v2558;
      }
      v2196 = (__int64 **)v2195;
      v2197 = v2195 + 8;
      v2558 = v2197;
      v1511 = *v2196;
      goto LABEL_1983;
    case 383LL:
      return (__m128i *)sub_330DE0(*(_QWORD *)&v2559[v2557]);
    case 384LL:
      v376 = v2557 + 8;
      v377 = (unsigned __int64 *)&v2559[v376];
      if ( (unsigned int)v376 > 0x2F )
        v377 = (unsigned __int64 *)v2558;
      return (__m128i *)(unsigned __int8)sub_332920(*(_QWORD *)&v2559[v2557], *v377);
    case 385LL:
      v943 = v2557;
      v944 = v2557 + 8;
      v2557 = v944;
      v945 = *(__int64 **)&v2559[v943];
      if ( (unsigned int)v944 > 0x2F )
      {
        v2438 = v2558;
        v948 = (__int64 *)(v2558 + 8);
        v2558 += 8;
        v947 = *(_QWORD **)v2438;
      }
      else
      {
        v946 = v943 + 16;
        v947 = *(_QWORD **)&v2559[v944];
        if ( (unsigned int)v946 > 0x2F )
          v948 = (__int64 *)v2558;
        else
          v948 = (__int64 *)&v2559[v946];
      }
      *v945 = sub_1CFD50(v947, *v948, *(double *)a7.m128_u64);
      return nullptr;
    case 386LL:
      v930 = v2557;
      v931 = v2557 + 8;
      v2557 = v931;
      v932 = *(__int64 **)&v2559[v930];
      if ( (unsigned int)v931 > 0x2F )
      {
        v2280 = (__int64 *)v2558;
        v935 = (__int64 *)(v2558 + 8);
        v2558 += 8;
        v934 = *v2280;
      }
      else
      {
        v933 = v930 + 16;
        v934 = *(_QWORD *)&v2559[v931];
        if ( (unsigned int)v933 > 0x2F )
          v935 = (__int64 *)v2558;
        else
          v935 = (__int64 *)&v2559[v933];
      }
      *v932 = sub_1CFDD0(v934, *v935);
      return nullptr;
    case 387LL:
      v936 = v2557;
      v937 = v2557 + 8;
      v2557 = v937;
      if ( (unsigned int)v937 > 0x2F )
      {
        v2270 = (__int64 *)v2558;
        v2271 = v2558 + 8;
        v2558 += 8;
        v939 = *v2270;
      }
      else
      {
        v938 = v936 + 16;
        v939 = *(_QWORD *)&v2559[v937];
        v2557 = v938;
        if ( (unsigned int)v938 <= 0x2F )
        {
          v940 = v936 + 24;
          v941 = *(_DWORD *)&v2559[v938];
          v2557 = v940;
          if ( (unsigned int)v940 <= 0x2F )
          {
            v942 = (__int64 *)&v2559[v940];
            v2557 = v936 + 32;
            goto LABEL_815;
          }
          v942 = (__int64 *)v2558;
LABEL_2018:
          v2558 = (char *)(v942 + 1);
LABEL_815:
          sub_1C5FB0((__int64)v2555, v939, v941, *v942, *(double *)a7.m128_u64);
          copy_argloc();
          cleanup_argloc();
          return nullptr;
        }
        v2271 = v2558;
      }
      v2272 = (unsigned int *)v2271;
      v942 = (__int64 *)(v2271 + 8);
      v2558 = (char *)v942;
      v941 = *v2272;
      goto LABEL_2018;
    case 388LL:
      v923 = v2557;
      v924 = v2557 + 8;
      v2557 = v924;
      if ( (unsigned int)v924 > 0x2F )
      {
        v2277 = (__int64 *)v2558;
        v2278 = v2558 + 8;
        v2558 += 8;
        v926 = *v2277;
      }
      else
      {
        v925 = v923 + 16;
        v926 = *(_QWORD *)&v2559[v924];
        v2557 = v925;
        if ( (unsigned int)v925 <= 0x2F )
        {
          v927 = v923 + 24;
          v928 = *(_QWORD *)&v2559[v925];
          v2557 = v927;
          if ( (unsigned int)v927 <= 0x2F )
          {
            v929 = &v2559[v927];
            v2557 = v923 + 32;
            goto LABEL_806;
          }
          v929 = v2558;
LABEL_2022:
          v2558 = v929 + 8;
LABEL_806:
          sub_1C6010((__int64)v2555, v926, v928, *(unsigned int *)v929, *(double *)a7.m128_u64);
          copy_argloc();
          cleanup_argloc();
          return nullptr;
        }
        v2278 = v2558;
      }
      v2279 = (__int64 *)v2278;
      v929 = v2278 + 8;
      v2558 = v929;
      v928 = *v2279;
      goto LABEL_2022;
    case 389LL:
      v916 = v2557;
      v917 = v2557 + 8;
      v2557 = v917;
      if ( (unsigned int)v917 > 0x2F )
      {
        v2268 = (__int64 *)v2558;
        v2542 = v2558 + 8;
        v2558 += 8;
        v919 = *v2268;
      }
      else
      {
        v918 = v916 + 16;
        v919 = *(_QWORD *)&v2559[v917];
        v2557 = v918;
        if ( (unsigned int)v918 <= 0x2F )
        {
          v920 = v916 + 24;
          v921 = *(_DWORD *)&v2559[v918];
          v2557 = v920;
          if ( (unsigned int)v920 <= 0x2F )
          {
            v922 = (__int64 *)&v2559[v920];
            v2557 = v916 + 32;
            goto LABEL_801;
          }
          v922 = (__int64 *)v2558;
LABEL_2016:
          v2558 = (char *)(v922 + 1);
LABEL_801:
          sub_1C76E0(v2555, v919, v921, *v922, *(double *)a7.m128_u64);
          copy_argloc();
          cleanup_argloc();
          return nullptr;
        }
        v2542 = v2558;
      }
      v2269 = (unsigned int *)v2542;
      v922 = (__int64 *)(v2542 + 8);
      v2558 = (char *)v922;
      v921 = *v2269;
      goto LABEL_2016;
    case 390LL:
      v909 = v2557;
      v910 = v2557 + 8;
      v2557 = v910;
      if ( (unsigned int)v910 > 0x2F )
      {
        v2273 = (__int64 *)v2558;
        v2274 = v2558 + 8;
        v2558 += 8;
        v912 = *v2273;
      }
      else
      {
        v911 = v909 + 16;
        v912 = *(_QWORD *)&v2559[v910];
        v2557 = v911;
        if ( (unsigned int)v911 <= 0x2F )
        {
          v913 = v909 + 24;
          v914 = *(_QWORD *)&v2559[v911];
          v2557 = v913;
          if ( (unsigned int)v913 <= 0x2F )
          {
            v915 = &v2559[v913];
            v2557 = v909 + 32;
            goto LABEL_796;
          }
          v915 = v2558;
LABEL_2020:
          v2558 = v915 + 8;
LABEL_796:
          sub_1C7740(v2555, v912, v914, *(unsigned int *)v915, *(double *)a7.m128_u64);
          copy_argloc();
          cleanup_argloc();
          return nullptr;
        }
        v2274 = v2558;
      }
      v2275 = (__int64 *)v2274;
      v915 = v2274 + 8;
      v2558 = v915;
      v914 = *v2275;
      goto LABEL_2020;
    case 391LL:
      sub_3385F0(*(_QWORD **)&v2559[v2557], *(double *)a7.m128_u64);
      return nullptr;
    case 392LL:
      return (__m128i *)sub_1CE9E0(*(_QWORD *)&v2559[v2557]);
    case 393LL:
      v1834 = v2557 + 8;
      v1835 = (int *)&v2559[v1834];
      if ( (unsigned int)v1834 > 0x2F )
        v1835 = (int *)v2558;
      return (__m128i *)(int)sub_330F20(*(_QWORD *)&v2559[v2557], *v1835);
    case 394LL:
      v1666 = v2557 + 8;
      v1667 = &v2559[v1666];
      if ( (unsigned int)v1666 > 0x2F )
        v1667 = v2558;
      return (__m128i *)(int)sub_1443F0(
                               *(_QWORD *)&v2559[v2557],
                               *(_DWORD *)v1667,
                               v2557,
                               v1666,
                               a5,
                               (int)a6,
                               *(double *)a7.m128_u64,
                               a8);
    case 395LL:
      return (__m128i *)(int)sub_13C380(*(_QWORD *)&v2559[v2557], (__int64)a2, *(double *)a7.m128_u64, a8);
    case 396LL:
      return (__m128i *)sub_670E0(*(_QWORD **)&v2559[v2557], (__int64)a2, a3, a4);
    case 397LL:
      v1225 = v2557 + 8;
      v1226 = &v2559[v1225];
      if ( (unsigned int)v1225 > 0x2F )
        v1226 = v2558;
      return (__m128i *)(int)sub_FA4C0(*(_QWORD *)&v2559[v2557], *(_DWORD *)v1226, v2557, v1225, *(double *)a7.m128_u64);
    case 398LL:
      return (__m128i *)(int)sub_14B8B0(
                               *(__m128i **)&v2559[v2557],
                               (__int64)a2,
                               a7,
                               a8,
                               (__m128i)a9,
                               *(double *)a10.m128_u64);
    case 399LL:
      sub_1FAD30(*(__m128i **)&v2559[v2557], a7, a8, *(double *)a9.m128_u64, *(double *)a10.m128_u64);
      return nullptr;
    case 400LL:
      sub_1B7C10(*(_QWORD *)&v2559[v2557]);
      return nullptr;
    case 401LL:
      v1745 = v2557;
      v1746 = v2557 + 8;
      v1747 = *(_QWORD *)&v2559[v2557];
      if ( (unsigned int)v1746 > 0x2F )
      {
        v2233 = v2558;
        v2234 = v2558 + 8;
        v2558 += 8;
        v1749 = *(_DWORD *)v2233 != 0;
      }
      else
      {
        v1748 = *(_DWORD *)&v2559[v1746] == 0;
        v2557 += 16;
        v1749 = !v1748;
        if ( v1745 + 16 <= 0x2F )
        {
          v1750 = v1745 + 24;
          if ( (unsigned int)v1750 > 0x2F )
            v1751 = v2558;
          else
            v1751 = &v2559[v1750];
LABEL_1577:
          v1752 = *(const __m128i **)v1751;
          v2560 = _mm_loadu_si128((const __m128i *)*(_QWORD *)v1751);
          v2561 = v1752[1].m128i_i64[0];
          sub_1B79D0(v1747, v1749, *(double *)v2560.m128i_i64, a8);
          return nullptr;
        }
        v2234 = v2558;
      }
      v1751 = v2234 + 8;
      v2558 = v1751;
      goto LABEL_1577;
    case 402LL:
      v1743 = v2557 + 8;
      v1744 = &v2559[v1743];
      if ( (unsigned int)v1743 > 0x2F )
        v1744 = v2558;
      sub_1AF540(*(_QWORD *)&v2559[v2557], *(void (****)(_QWORD, _QWORD, const char *, ...))v1744);
      return nullptr;
    case 403LL:
      v1753 = v2557 + 8;
      v1754 = &v2559[v1753];
      if ( (unsigned int)v1753 > 0x2F )
        v1754 = v2558;
      sub_321ED0(*(_QWORD *)&v2559[v2557], *(_DWORD *)v1754 != 0, *(double *)a7.m128_u64, a8);
      return nullptr;
    case 404LL:
      v1343 = &v2559[v2557];
      v2557 += 8;
      v1344 = *(_QWORD *)(*(_QWORD *)v1343 + 784LL);
      if ( v1344 )
        *(_DWORD *)(v1344 + 48) = 63;
      return nullptr;
    case 405LL:
      v1981 = v2557 + 8;
      v1982 = (int *)&v2559[v1981];
      if ( (unsigned int)v1981 > 0x2F )
        v1982 = (int *)v2558;
      return (__m128i *)sub_68FC0(*(_QWORD *)&v2559[v2557], *v1982, v2557, v1981, *(double *)a7.m128_u64);
    case 406LL:
      v1741 = v2557 + 8;
      v1742 = (__int64 *)&v2559[v1741];
      if ( (unsigned int)v1741 > 0x2F )
        v1742 = (__int64 *)v2558;
      return (__m128i *)(unsigned __int8)sub_69EC0(*(_QWORD *)&v2559[v2557], *v1742, *(double *)a7.m128_u64);
    case 407LL:
      v786 = v2557;
      v787 = v2557 + 8;
      v788 = *(_QWORD *)&v2559[v2557];
      if ( (unsigned int)v787 > 0x2F )
      {
        v2435 = (__int64 *)v2558;
        v2436 = v2558 + 8;
        v2558 += 8;
        v790 = *v2435;
      }
      else
      {
        v789 = v2557 + 16;
        v790 = *(_QWORD *)&v2559[v787];
        v2557 = v789;
        if ( (unsigned int)v789 <= 0x2F )
        {
          v791 = v786 + 24;
          v792 = *(_DWORD *)&v2559[v789];
          if ( (unsigned int)v791 > 0x2F )
            v793 = v2558;
          else
            v793 = &v2559[v791];
          return (__m128i *)sub_69310(v788, v790, v792, *(unsigned int *)v793, *(double *)a7.m128_u64);
        }
        v2436 = v2558;
      }
      v2437 = (int *)v2436;
      v793 = v2436 + 8;
      v2558 = v793;
      v792 = *v2437;
      return (__m128i *)sub_69310(v788, v790, v792, *(unsigned int *)v793, *(double *)a7.m128_u64);
    case 408LL:
      return (__m128i *)(unsigned __int8)sub_69F70(*(_QWORD *)&v2559[v2557]);
    case 409LL:
      return (__m128i *)(unsigned __int8)sub_6A500(*(unsigned int **)&v2559[v2557], a2, a7);
    case 410LL:
      v1910 = v2557 + 8;
      v1911 = (__int64 *)&v2559[v1910];
      if ( (unsigned int)v1910 > 0x2F )
        v1911 = (__int64 *)v2558;
      return (__m128i *)(int)sub_11FBB0(*(_QWORD *)&v2559[v2557], *v1911);
    case 411LL:
      v2037 = v2557 + 8;
      v2038 = (__int64 *)&v2559[v2037];
      if ( (unsigned int)v2037 > 0x2F )
        v2038 = (__int64 *)v2558;
      return (__m128i *)(int)sub_11FC20(*(_QWORD *)&v2559[v2557], *v2038);
    case 412LL:
      v1076 = v2557 + 8;
      v1077 = (__int64 **)&v2559[v1076];
      if ( (unsigned int)v1076 > 0x2F )
        v1077 = (__int64 **)v2558;
      return (__m128i *)(int)sub_11F9E0(*(_QWORD *)&v2559[v2557], *v1077);
    case 413LL:
      v426 = v2557;
      v427 = v2557 + 8;
      v2557 = v427;
      v428 = *(_QWORD *)&v2559[v426];
      if ( (unsigned int)v427 > 0x2F )
      {
        v2227 = (__int64 *)v2558;
        v2548 = v2558 + 8;
        v2558 += 8;
        v430 = *v2227;
      }
      else
      {
        v429 = v426 + 16;
        v430 = *(_QWORD *)&v2559[v427];
        if ( (unsigned int)v429 <= 0x2F )
        {
          v431 = v426 + 24;
          v432 = *(_QWORD *)&v2559[v429];
          v2557 = v431;
          if ( (unsigned int)v431 <= 0x2F )
          {
            v433 = v426 + 32;
            v434 = *(_DWORD *)&v2559[v431] != 0;
            if ( (unsigned int)v433 > 0x2F )
              v435 = (__int64 *)v2558;
            else
              v435 = (__int64 *)&v2559[v433];
            return (__m128i *)sub_11FC90(v428, v430, v432, v434, *v435);
          }
          v2229 = v2558;
LABEL_1997:
          v2230 = v2229;
          v435 = (__int64 *)(v2229 + 8);
          v1748 = *(_DWORD *)v2230 == 0;
          v2558 = (char *)v435;
          v434 = !v1748;
          return (__m128i *)sub_11FC90(v428, v430, v432, v434, *v435);
        }
        v2548 = v2558;
      }
      v2228 = (__int64 *)v2548;
      v2229 = v2548 + 8;
      v2558 = v2229;
      v432 = *v2228;
      goto LABEL_1997;
    case 414LL:
      v414 = v2557;
      v415 = v2557 + 8;
      v416 = *(_QWORD *)&v2559[v2557];
      if ( (unsigned int)v415 > 0x2F )
      {
        v2351 = (__int64 *)v2558;
        v2352 = v2558 + 8;
        v2558 += 8;
        v418 = *v2351;
      }
      else
      {
        v417 = v2557 + 16;
        v418 = *(_QWORD *)&v2559[v415];
        v2557 = v417;
        if ( (unsigned int)v417 <= 0x2F )
        {
          v419 = v414 + 24;
          v420 = *(_QWORD *)&v2559[v417];
          if ( (unsigned int)v419 <= 0x2F )
          {
            v421 = v414 + 32;
            v422 = *(_QWORD *)&v2559[v419];
            v2557 = v421;
            if ( (unsigned int)v421 <= 0x2F )
            {
              v423 = v414 + 40;
              v424 = *(_QWORD *)&v2559[v421];
              if ( (unsigned int)v423 > 0x2F )
                v425 = (__int64 *)v2558;
              else
                v425 = (__int64 *)&v2559[v423];
              return (__m128i *)sub_336150(v416, v418, v420, v422, v424, *v425, *(double *)a7.m128_u64, a8);
            }
            v2356 = (__int64 *)v2558;
LABEL_2056:
            v2357 = v2356;
            v425 = v2356 + 1;
            v2558 = (char *)v425;
            v424 = *v2357;
            return (__m128i *)sub_336150(v416, v418, v420, v422, v424, *v425, *(double *)a7.m128_u64, a8);
          }
          v2354 = (__int64 *)v2558;
LABEL_2055:
          v2355 = v2354;
          v2356 = v2354 + 1;
          v2558 = (char *)v2356;
          v422 = *v2355;
          goto LABEL_2056;
        }
        v2352 = v2558;
      }
      v2353 = (__int64 *)v2352;
      v2354 = (__int64 *)(v2352 + 8);
      v2558 = (char *)v2354;
      v420 = *v2353;
      goto LABEL_2055;
    case 415LL:
      v1589 = v2557;
      v1590 = v2557 + 8;
      v1591 = *(_QWORD *)&v2559[v2557];
      if ( (unsigned int)v1590 > 0x2F )
      {
        v2429 = (__int64 *)v2558;
        v2526 = v2558 + 8;
        v2558 += 8;
        v1593 = *v2429;
      }
      else
      {
        v1592 = v2557 + 16;
        v1593 = *(_QWORD *)&v2559[v1590];
        v2557 = v1592;
        if ( (unsigned int)v1592 <= 0x2F )
        {
          v1594 = v1589 + 24;
          v1595 = *(__int64 **)&v2559[v1592];
          if ( (unsigned int)v1594 <= 0x2F )
          {
            v1596 = v1589 + 32;
            v1597 = *(_QWORD *)&v2559[v1594];
            v2557 = v1596;
            if ( (unsigned int)v1596 <= 0x2F )
            {
              v1598 = v1589 + 40;
              v1599 = *(_QWORD *)&v2559[v1596];
              if ( (unsigned int)v1598 > 0x2F )
                v1600 = v2558;
              else
                v1600 = &v2559[v1598];
LABEL_1422:
              sub_1390C0(v1591, v1593, v1595, v1597, v1599, *(_DWORD *)v1600 != 0);
              return nullptr;
            }
            v2433 = v2558;
LABEL_2097:
            v2434 = (unsigned __int64 *)v2433;
            v1600 = v2433 + 8;
            v2558 = v1600;
            v1599 = *v2434;
            goto LABEL_1422;
          }
          v2431 = (__int64 *)v2558;
LABEL_2096:
          v2432 = v2431;
          v2433 = (char *)(v2431 + 1);
          v2558 = v2433;
          v1597 = *v2432;
          goto LABEL_2097;
        }
        v2526 = v2558;
      }
      v2430 = (__int64 **)v2526;
      v2431 = (__int64 *)(v2526 + 8);
      v2558 = (char *)v2431;
      v1595 = *v2430;
      goto LABEL_2096;
    case 416LL:
      v412 = v2557 + 8;
      v413 = (int *)&v2559[v412];
      if ( (unsigned int)v412 > 0x2F )
        v413 = (int *)v2558;
      return (__m128i *)sub_13D280(*(_QWORD **)&v2559[v2557], *v413, *(double *)a7.m128_u64);
    case 417LL:
      v1949 = v2557;
      v1950 = v2557 + 8;
      v2557 = v1950;
      v1951 = *(__int64 **)&v2559[v1949];
      if ( (unsigned int)v1950 > 0x2F )
      {
        v2440 = v2558;
        v1954 = (__int64 *)(v2558 + 8);
        v2558 += 8;
        v1953 = *(_QWORD **)v2440;
      }
      else
      {
        v1952 = v1949 + 16;
        v1953 = *(_QWORD **)&v2559[v1950];
        if ( (unsigned int)v1952 > 0x2F )
          v1954 = (__int64 *)v2558;
        else
          v1954 = (__int64 *)&v2559[v1952];
      }
      *v1951 = sub_332AB0(v1953, *v1954, *(double *)a7.m128_u64);
      return nullptr;
    case 418LL:
      v1797 = v2557;
      v1798 = v2557 + 8;
      v2557 = v1798;
      v1799 = *(unsigned __int64 **)&v2559[v1797];
      if ( (unsigned int)v1798 > 0x2F )
      {
        v2189 = v2558;
        v1802 = (unsigned __int64 *)(v2558 + 8);
        v2558 += 8;
        v1801 = *(_QWORD **)v2189;
      }
      else
      {
        v1800 = v1797 + 16;
        v1801 = *(_QWORD **)&v2559[v1798];
        if ( (unsigned int)v1800 > 0x2F )
          v1802 = (unsigned __int64 *)v2558;
        else
          v1802 = (unsigned __int64 *)&v2559[v1800];
      }
      *v1799 = sub_330F80(v1801, *v1802);
      return nullptr;
    case 419LL:
      v1371 = v2557 + 8;
      v1372 = (__int64 *)&v2559[v1371];
      if ( (unsigned int)v1371 > 0x2F )
        v1372 = (__int64 *)v2558;
      sub_92990(*(_QWORD *)&v2559[v2557], *v1372);
      return nullptr;
    case 420LL:
      v1369 = v2557 + 8;
      v1370 = (__int64 *)&v2559[v1369];
      if ( (unsigned int)v1369 > 0x2F )
        v1370 = (__int64 *)v2558;
      return (__m128i *)sub_8EFD0(*(_QWORD *)&v2559[v2557], *v1370, a7);
    case 421LL:
      v2065 = v2557 + 8;
      v2066 = (const char **)&v2559[v2065];
      if ( (unsigned int)v2065 > 0x2F )
        v2066 = (const char **)v2558;
      sub_92A40(*(_QWORD *)&v2559[v2557], *v2066);
      return nullptr;
    case 422LL:
      v1625 = v2557;
      v1626 = v2557 + 8;
      v2557 = v1626;
      v1627 = *(_QWORD **)&v2559[v1625];
      if ( (unsigned int)v1626 > 0x2F )
      {
        v2439 = (__int64 *)v2558;
        v1630 = v2558 + 8;
        v2558 += 8;
        v1629 = *v2439;
      }
      else
      {
        v1628 = v1625 + 16;
        v1629 = *(_QWORD *)&v2559[v1626];
        if ( (unsigned int)v1628 > 0x2F )
          v1630 = v2558;
        else
          v1630 = &v2559[v1628];
      }
      return (__m128i *)(int)sub_138140(v1627, v1629, *(_DWORD *)v1630 != 0, *(double *)a7.m128_u64);
    case 423LL:
      v1943 = v2557;
      v1944 = v2557 + 8;
      v2557 = v1944;
      v1945 = *(_QWORD *)&v2559[v1943];
      if ( (unsigned int)v1944 > 0x2F )
      {
        v2188 = (int *)v2558;
        v1948 = (__int64 *)(v2558 + 8);
        v2558 += 8;
        v1947 = *v2188;
      }
      else
      {
        v1946 = v1943 + 16;
        v1947 = *(_DWORD *)&v2559[v1944];
        if ( (unsigned int)v1946 > 0x2F )
          v1948 = (__int64 *)v2558;
        else
          v1948 = (__int64 *)&v2559[v1946];
      }
      sub_137FB0(v1945, v1947, *v1948, *(double *)a7.m128_u64, a8);
      return nullptr;
    case 424LL:
      v845 = v2557;
      v846 = v2557 + 8;
      v847 = *(_QWORD *)&v2559[v2557];
      if ( (unsigned int)v846 > 0x2F )
      {
        v2420 = (__int64 *)v2558;
        v2421 = v2558 + 8;
        v2558 += 8;
        v849 = *v2420;
      }
      else
      {
        v848 = v2557 + 16;
        v849 = *(_QWORD *)&v2559[v846];
        v2557 = v848;
        if ( (unsigned int)v848 <= 0x2F )
        {
          v850 = v845 + 24;
          v851 = *(_DWORD *)&v2559[v848];
          if ( (unsigned int)v850 <= 0x2F )
          {
            v852 = v845 + 32;
            v853 = *(unsigned __int64 ***)&v2559[v850];
            v2557 = v852;
            if ( (unsigned int)v852 <= 0x2F )
            {
              v854 = v845 + 40;
              v855 = *(_DWORD *)&v2559[v852];
              if ( (unsigned int)v854 > 0x2F )
                v856 = v2558;
              else
                v856 = &v2559[v854];
              return (__m128i *)(int)sub_1DB100(v847, v849, v851, v853, v855, *(_DWORD *)v856, *(double *)a7.m128_u64);
            }
            v2425 = (int *)v2558;
LABEL_2094:
            v2426 = v2425;
            v856 = (char *)(v2425 + 2);
            v2558 = v856;
            v855 = *v2426;
            return (__m128i *)(int)sub_1DB100(v847, v849, v851, v853, v855, *(_DWORD *)v856, *(double *)a7.m128_u64);
          }
          v2423 = v2558;
LABEL_2093:
          v2424 = (unsigned __int64 ***)v2423;
          v2425 = (int *)(v2423 + 8);
          v2558 = (char *)v2425;
          v853 = *v2424;
          goto LABEL_2094;
        }
        v2421 = v2558;
      }
      v2422 = (signed int *)v2421;
      v2423 = v2421 + 8;
      v2558 = v2423;
      v851 = *v2422;
      goto LABEL_2093;
    case 425LL:
      v541 = v2557 + 8;
      v542 = (unsigned __int64 *)&v2559[v541];
      if ( (unsigned int)v541 > 0x2F )
        v542 = (unsigned __int64 *)v2558;
      return (__m128i *)sub_1CFB40(*(_QWORD *)&v2559[v2557], *v542);
    case 426LL:
      v533 = v2557;
      v534 = v2557 + 8;
      v535 = *(_QWORD **)&v2559[v2557];
      if ( (unsigned int)v534 > 0x2F )
      {
        v2264 = (__int64 *)v2558;
        v2265 = v2558 + 8;
        v2558 += 8;
        v537 = *v2264;
      }
      else
      {
        v536 = v2557 + 16;
        v537 = *(_QWORD *)&v2559[v534];
        v2557 = v536;
        if ( (unsigned int)v536 <= 0x2F )
        {
          v538 = v533 + 24;
          v539 = *(const char **)&v2559[v536];
          if ( (unsigned int)v538 > 0x2F )
            v540 = (int *)v2558;
          else
            v540 = (int *)&v2559[v538];
          return (__m128i *)(unsigned __int8)sub_213D50(v535, v537, v539, *v540);
        }
        v2265 = v2558;
      }
      v2266 = (const char **)v2265;
      v540 = (int *)(v2265 + 8);
      v2558 = (char *)v540;
      v539 = *v2266;
      return (__m128i *)(unsigned __int8)sub_213D50(v535, v537, v539, *v540);
    case 427LL:
      v543 = v2557;
      v544 = v2557 + 8;
      v545 = *(__int64 **)&v2559[v2557];
      if ( (unsigned int)v544 > 0x2F )
      {
        v2411 = (__int64 *)v2558;
        v2412 = v2558 + 8;
        v2558 += 8;
        v547 = *v2411;
      }
      else
      {
        v546 = v2557 + 16;
        v547 = *(_QWORD *)&v2559[v544];
        v2557 = v546;
        if ( (unsigned int)v546 <= 0x2F )
        {
          v548 = v543 + 24;
          v549 = *(_DWORD *)&v2559[v546];
          if ( (unsigned int)v548 <= 0x2F )
          {
            v550 = v543 + 32;
            v551 = *(_DWORD *)&v2559[v548];
            v2557 = v550;
            if ( (unsigned int)v550 <= 0x2F )
            {
              v552 = v543 + 40;
              v553 = *(_QWORD *)&v2559[v550];
              if ( (unsigned int)v552 <= 0x2F )
              {
                v554 = *(_QWORD *)&v2559[v552];
                v555 = v2558;
                goto LABEL_477;
              }
              v2418 = (__int64 *)v2558;
LABEL_2091:
              v2419 = v2418;
              v555 = (char *)(v2418 + 1);
              v2558 = v555;
              v554 = *v2419;
LABEL_477:
              v2558 = v555 + 8;
              return (__m128i *)sub_17C4E0(
                                  v545,
                                  v547,
                                  v549,
                                  v551,
                                  v553,
                                  v554,
                                  *(double *)a7.m128_u64,
                                  *v555,
                                  *((_DWORD *)v555 + 2));
            }
            v2416 = (__int64 *)v2558;
LABEL_2090:
            v2417 = v2416;
            v2418 = v2416 + 1;
            v2558 = (char *)v2418;
            v553 = *v2417;
            goto LABEL_2091;
          }
          v2414 = (unsigned int *)v2558;
LABEL_2089:
          v2415 = v2414;
          v2416 = (__int64 *)(v2414 + 2);
          v2558 = (char *)v2416;
          v551 = *v2415;
          goto LABEL_2090;
        }
        v2412 = v2558;
      }
      v2413 = (int *)v2412;
      v2414 = (unsigned int *)(v2412 + 8);
      v2558 = (char *)v2414;
      v549 = *v2413;
      goto LABEL_2089;
    case 428LL:
      v531 = v2557 + 8;
      v532 = &v2559[v531];
      if ( (unsigned int)v531 > 0x2F )
        v532 = v2558;
      return (__m128i *)sub_110340(
                          *(_QWORD *)&v2559[v2557],
                          *(unsigned int *)v532,
                          v2557,
                          v531,
                          a5,
                          (int)a6,
                          *(double *)a7.m128_u64,
                          a8);
    case 429LL:
      v1170 = v2557 + 8;
      v1171 = &v2559[v1170];
      if ( (unsigned int)v1170 > 0x2F )
        v1171 = v2558;
      return (__m128i *)sub_1108E0(
                          *(_QWORD *)&v2559[v2557],
                          *(unsigned int *)v1171,
                          v2557,
                          v1170,
                          a5,
                          (int)a6,
                          *(double *)a7.m128_u64,
                          a8);
    case 430LL:
      v1168 = v2557 + 8;
      v1169 = (__int64 *)&v2559[v1168];
      if ( (unsigned int)v1168 > 0x2F )
        v1169 = (__int64 *)v2558;
      return (__m128i *)(int)sub_1D5CD0(*(_QWORD **)&v2559[v2557], *v1169);
    case 431LL:
      sub_1D8010(*(_QWORD *)&v2559[v2557]);
      return nullptr;
    case 432LL:
      v518 = v2557;
      v519 = v2557 + 8;
      v2557 = v519;
      v520 = *(_QWORD *)&v2559[v518];
      if ( (unsigned int)v519 > 0x2F )
      {
        v2376 = (unsigned int *)v2558;
        v2377 = v2558 + 8;
        v2558 += 8;
        v522 = *v2376;
      }
      else
      {
        v521 = v518 + 16;
        v522 = *(_DWORD *)&v2559[v519];
        if ( (unsigned int)v521 <= 0x2F )
        {
          v523 = v518 + 24;
          v524 = *(_DWORD *)&v2559[v521];
          v2557 = v523;
          if ( (unsigned int)v523 <= 0x2F )
          {
            v525 = v518 + 32;
            v526 = *(_QWORD *)&v2559[v523];
            if ( (unsigned int)v525 <= 0x2F )
            {
              v527 = v518 + 40;
              v528 = *(_QWORD *)&v2559[v525];
              v2557 = v527;
              if ( (unsigned int)v527 <= 0x2F )
              {
                v529 = *(_QWORD *)&v2559[v527];
                v530 = (int *)v2558;
                return (__m128i *)sub_1D6310(v520, v522, v524, v526, v528, v529, *(double *)a7.m128_u64, *v530);
              }
              v2383 = v2558;
LABEL_2077:
              v2384 = (__int64 *)v2383;
              v530 = (int *)(v2383 + 8);
              v2558 = (char *)v530;
              v529 = *v2384;
              return (__m128i *)sub_1D6310(v520, v522, v524, v526, v528, v529, *(double *)a7.m128_u64, *v530);
            }
            v2381 = (__int64 *)v2558;
LABEL_2076:
            v2382 = v2381;
            v2383 = (char *)(v2381 + 1);
            v2558 = v2383;
            v528 = *v2382;
            goto LABEL_2077;
          }
          v2379 = (__int64 *)v2558;
LABEL_2075:
          v2380 = v2379;
          v2381 = v2379 + 1;
          v2558 = (char *)v2381;
          v526 = *v2380;
          goto LABEL_2076;
        }
        v2377 = v2558;
      }
      v2378 = (int *)v2377;
      v2379 = (__int64 *)(v2377 + 8);
      v2558 = (char *)v2379;
      v524 = *v2378;
      goto LABEL_2075;
    case 433LL:
      v2112 = v2557;
      v2113 = v2557 + 8;
      v2557 = v2113;
      v2114 = *(_QWORD *)&v2559[v2112];
      if ( (unsigned int)v2113 > 0x2F )
      {
        v2500 = v2558;
        v2501 = v2558 + 8;
        v2558 += 8;
        v2116 = *(_DWORD *)v2500;
      }
      else
      {
        v2115 = v2112 + 16;
        v2116 = *(_DWORD *)&v2559[v2113];
        if ( (unsigned int)v2115 <= 0x2F )
        {
          v2117 = v2112 + 24;
          v2118 = *(unsigned __int8 **)&v2559[v2115];
          v2557 = v2117;
          if ( (unsigned int)v2117 <= 0x2F )
          {
            v2119 = v2112 + 32;
            v2120 = *(unsigned __int8 **)&v2559[v2117];
            if ( (unsigned int)v2119 > 0x2F )
              v2121 = (unsigned __int8 **)v2558;
            else
              v2121 = (unsigned __int8 **)&v2559[v2119];
            return (__m128i *)sub_1D6450(v2114, v2116, v2118, v2120, *v2121, (__m128i)a7, a8, a9);
          }
          v2503 = (unsigned __int8 **)v2558;
LABEL_2120:
          v2504 = v2503;
          v2121 = v2503 + 1;
          v2558 = (char *)v2121;
          v2120 = *v2504;
          return (__m128i *)sub_1D6450(v2114, v2116, v2118, v2120, *v2121, (__m128i)a7, a8, a9);
        }
        v2501 = v2558;
      }
      v2502 = (unsigned __int8 **)v2501;
      v2503 = (unsigned __int8 **)(v2501 + 8);
      v2558 = (char *)v2503;
      v2118 = *v2502;
      goto LABEL_2120;
    case 434LL:
      return (__m128i *)(unsigned __int8)sub_33DE10(*(_QWORD *)&v2559[v2557]);
    case 435LL:
      return (__m128i *)sub_33DF30();
    case 436LL:
      v1255 = v2557 + 8;
      v1256 = &v2559[v1255];
      if ( (unsigned int)v1255 > 0x2F )
        v1256 = v2558;
      return (__m128i *)sub_39B020(*(_QWORD *)&v2559[v2557], (__int64 *)*(unsigned int *)v1256, *(double *)a7.m128_u64);
    case 437LL:
      return (__m128i *)(unsigned __int8)sub_389DE0(*(_QWORD *)&v2559[v2557]);
    case 438LL:
      return (__m128i *)sub_389D80(*(_QWORD *)&v2559[v2557]);
    case 439LL:
      v2106 = v2557;
      v2107 = v2557 + 8;
      v2557 = v2107;
      v2108 = *(const char **)&v2559[v2106];
      if ( (unsigned int)v2107 > 0x2F )
      {
        v2183 = (__int64 *)v2558;
        v2111 = (int *)(v2558 + 8);
        v2558 += 8;
        v2110 = *v2183;
      }
      else
      {
        v2109 = v2106 + 16;
        v2110 = *(_QWORD *)&v2559[v2107];
        if ( (unsigned int)v2109 > 0x2F )
          v2111 = (int *)v2558;
        else
          v2111 = (int *)&v2559[v2109];
      }
      return (__m128i *)sub_3697C0(
                          v2108,
                          v2110,
                          *v2111,
                          *(double *)a7.m128_u64,
                          *(double *)a8.m128_u64,
                          a9,
                          a10,
                          a11,
                          a12,
                          a13);
    case 440LL:
      v688 = v2557;
      v689 = v2557 + 8;
      v2557 = v689;
      v690 = *(__int64 **)&v2559[v688];
      if ( (unsigned int)v689 > 0x2F )
      {
        v691 = v2558;
        v2558 += 8;
      }
      else
      {
        v691 = &v2559[v689];
        v2557 = v688 + 16;
      }
      sub_3310F0((__int64)v2555, *(_DWORD **)v691, *(double *)a7.m128_u64);
      v692 = *(_QWORD *)v2555;
      v693 = _mm_loadu_si128((const __m128i *)&v2555[8]);
      memset(v2555, 0, 24);
      v694 = *v690;
      if ( *v690 )
      {
        v2550 = v693;
        v690[1] = 0;
        qfree(v694);
        v693 = _mm_load_si128(&v2550);
      }
      *v690 = v692;
      *(__m128i *)(v690 + 1) = v693;
      v81 = *(_QWORD *)v2555;
      if ( *(_QWORD *)v2555 )
        goto LABEL_67;
      return nullptr;
    case 441LL:
      v1877 = v2557 + 8;
      v1878 = *(_QWORD *)&v2559[v2557];
      v1879 = &v2559[v1877];
      if ( (unsigned int)v1877 > 0x2F )
        v1879 = v2558;
      v1880 = *(_DWORD *)v1879 != 0;
      v1881 = sub_339CA0();
      sub_383450(v1881, v1878, v1880);
      return nullptr;
    case 442LL:
      v1540 = v2557;
      v1541 = v2557 + 8;
      v2557 = v1541;
      v1542 = *(_QWORD *)&v2559[v1540];
      if ( (unsigned int)v1541 > 0x2F )
      {
        v2428 = (__int64 **)v2558;
        v1545 = (__int64 *)(v2558 + 8);
        v2558 += 8;
        v1544 = *v2428;
      }
      else
      {
        v1543 = v1540 + 16;
        v1544 = *(__int64 **)&v2559[v1541];
        if ( (unsigned int)v1543 > 0x2F )
          v1545 = (__int64 *)v2558;
        else
          v1545 = (__int64 *)&v2559[v1543];
      }
      return (__m128i *)(unsigned __int8)sub_331CD0(v1542, v1544, *v1545, *(double *)a7.m128_u64);
    case 443LL:
      return (__m128i *)(unsigned __int8)sub_331680(*(_QWORD *)&v2559[v2557], (__int64)a2, a3, a4, a5, (__int64)a6);
    case 444LL:
      nullsub_183();
      return nullptr;
    case 445LL:
      return (__m128i *)(unsigned int)sub_254C70(*(_DWORD *)&v2559[v2557]);
    case 446LL:
      return (__m128i *)(unsigned int)sub_254C90(*(_DWORD *)&v2559[v2557]);
    case 447LL:
      return (__m128i *)(int)sub_255000(*(_DWORD *)&v2559[v2557]);
    case 448LL:
      return (__m128i *)(unsigned int)sub_244F90(*(_DWORD *)&v2559[v2557]);
    case 449LL:
      return (__m128i *)(unsigned int)sub_244FD0(*(_DWORD *)&v2559[v2557]);
    case 450LL:
      v1887 = v2557;
      v1888 = v2557 + 8;
      v2557 = v1888;
      v1889 = *(__int64 **)&v2559[v1887];
      if ( (unsigned int)v1888 > 0x2F )
      {
        v2449 = (__int64 **)v2558;
        v2522 = v2558 + 8;
        v2558 += 8;
        v1891 = *v2449;
      }
      else
      {
        v1890 = v1887 + 16;
        v1891 = *(__int64 **)&v2559[v1888];
        if ( (unsigned int)v1890 <= 0x2F )
        {
          v1892 = v1887 + 24;
          v1893 = *(_QWORD **)&v2559[v1890];
          v2557 = v1892;
          if ( (unsigned int)v1892 <= 0x2F )
          {
            v1894 = v1887 + 32;
            v1895 = *(_QWORD *)&v2559[v1892];
            if ( (unsigned int)v1894 > 0x2F )
              v1896 = v2558;
            else
              v1896 = &v2559[v1894];
LABEL_1706:
            sub_266270(v1889, v1891, v1893, v1895, *(_BYTE **)v1896, *(double *)a7.m128_u64);
            return nullptr;
          }
          v2451 = v2558;
LABEL_2103:
          v2452 = (__int64 *)v2451;
          v1896 = v2451 + 8;
          v2558 = v1896;
          v1895 = *v2452;
          goto LABEL_1706;
        }
        v2522 = v2558;
      }
      v2450 = v2522;
      v2451 = v2522 + 8;
      v2558 = v2451;
      v1893 = *(_QWORD **)v2450;
      goto LABEL_2103;
    case 451LL:
      v1405 = v2557;
      v1406 = v2557 + 8;
      v2557 = v1406;
      v1407 = *(__int64 **)&v2559[v1405];
      if ( (unsigned int)v1406 > 0x2F )
      {
        v2523 = (__int64 **)v2558;
        v2558 += 8;
        v1408 = *v2523;
      }
      else
      {
        v1408 = *(__int64 **)&v2559[v1406];
      }
      *v1407 = sub_255A30(v1408);
      return nullptr;
    case 452LL:
      v1395 = v2557;
      v1396 = v2557 + 8;
      v1397 = *(_QWORD *)&v2559[v2557];
      if ( (unsigned int)v1396 > 0x2F )
      {
        v2205 = (__int64 *)v2558;
        v2206 = v2558 + 8;
        v2558 += 8;
        v1399 = *v2205;
      }
      else
      {
        v1398 = v2557 + 16;
        v1399 = *(_QWORD *)&v2559[v1396];
        v2557 = v1398;
        if ( (unsigned int)v1398 <= 0x2F )
        {
          v1400 = v1395 + 24;
          v1401 = *(_DWORD *)&v2559[v1398];
          if ( (unsigned int)v1400 > 0x2F )
            v1402 = (int *)v2558;
          else
            v1402 = (int *)&v2559[v1400];
LABEL_1257:
          v1403 = *v1402;
          v1404 = sub_339CA0();
          sub_2400B0(v1397, v1404, v1399, v1401, v1403, *(double *)a7.m128_u64);
          return nullptr;
        }
        v2206 = v2558;
      }
      v2207 = (int *)v2206;
      v1402 = (int *)(v2206 + 8);
      v2558 = (char *)v1402;
      v1401 = *v2207;
      goto LABEL_1257;
    case 453LL:
      v1972 = v2557 + 8;
      v1973 = &v2559[v1972];
      if ( (unsigned int)v1972 > 0x2F )
        v1973 = v2558;
      return (__m128i *)(int)sub_2569B0(*(_QWORD **)&v2559[v2557], *(_QWORD **)v1973);
    case 454LL:
      v1817 = v2557 + 8;
      v1818 = (__int64 *)&v2559[v1817];
      if ( (unsigned int)v1817 > 0x2F )
        v1818 = (__int64 *)v2558;
      return (__m128i *)(int)sub_256980(*(_QWORD *)&v2559[v2557], *v1818);
    case 455LL:
      v1966 = v2557;
      v1967 = v2557 + 8;
      v2557 = v1967;
      v1968 = *(__int64 **)&v2559[v1966];
      if ( (unsigned int)v1967 > 0x2F )
      {
        v2190 = (__int64 *)v2558;
        v1971 = (__int64 *)(v2558 + 8);
        v2558 += 8;
        v1970 = *v2190;
      }
      else
      {
        v1969 = v1966 + 16;
        v1970 = *(_QWORD *)&v2559[v1967];
        if ( (unsigned int)v1969 > 0x2F )
          v1971 = (__int64 *)v2558;
        else
          v1971 = (__int64 *)&v2559[v1969];
      }
      return (__m128i *)(int)sub_255A80(v1968, v1970, *v1971, *(double *)a7.m128_u64);
    case 456LL:
      v877 = v2557;
      v878 = v2557 + 8;
      v2557 = v878;
      v879 = *(_QWORD *)&v2559[v877];
      if ( (unsigned int)v878 > 0x2F )
      {
        v2453 = (__int64 *)v2558;
        v882 = (__int64 *)(v2558 + 8);
        v2558 += 8;
        v881 = *v2453;
      }
      else
      {
        v880 = v877 + 16;
        v881 = *(_QWORD *)&v2559[v878];
        if ( (unsigned int)v880 > 0x2F )
          v882 = (__int64 *)v2558;
        else
          v882 = (__int64 *)&v2559[v880];
      }
      return (__m128i *)(int)sub_256390(v879, v881, *v882);
    case 457LL:
      v643 = *(_QWORD *)&v2559[v2557];
      v644 = sub_339CA0();
      return (__m128i *)(unsigned __int8)sub_283B00(v643, v644, a7);
    case 458LL:
      v637 = v2557;
      v638 = v2557 + 8;
      v2557 = v638;
      v639 = *(_QWORD **)&v2559[v637];
      if ( (unsigned int)v638 > 0x2F )
      {
        v2246 = v2558;
        v642 = (__int64 *)(v2558 + 8);
        v2558 += 8;
        v641 = *(_QWORD *)v2246;
      }
      else
      {
        v640 = v637 + 16;
        v641 = *(_QWORD *)&v2559[v638];
        if ( (unsigned int)v640 > 0x2F )
          v642 = (__int64 *)v2558;
        else
          v642 = (__int64 *)&v2559[v640];
      }
      return (__m128i *)(unsigned __int8)sub_284900(v639, v641, *v642, *(double *)a7.m128_u64);
    case 459LL:
      v635 = v2557 + 8;
      v636 = (__int64 *)&v2559[v635];
      if ( (unsigned int)v635 > 0x2F )
        v636 = (__int64 *)v2558;
      return (__m128i *)(int)sub_257C70(*(_QWORD *)&v2559[v2557], *v636);
    case 460LL:
      v633 = v2557 + 8;
      v634 = (__int64 *)&v2559[v633];
      if ( (unsigned int)v633 > 0x2F )
        v634 = (__int64 *)v2558;
      return (__m128i *)(unsigned __int8)sub_285090(*(_QWORD *)&v2559[v2557], *v634);
    case 461LL:
      return (__m128i *)(unsigned __int8)sub_285230(*(_QWORD *)&v2559[v2557]);
    case 462LL:
      v1191 = v2557 + 8;
      v1192 = (__int64 *)&v2559[v1191];
      if ( (unsigned int)v1191 > 0x2F )
        v1192 = (__int64 *)v2558;
      return (__m128i *)sub_256D70(*(_QWORD *)&v2559[v2557], *v1192);
    case 463LL:
      v1650 = v2557 + 8;
      v1651 = (__int64 *)&v2559[v1650];
      if ( (unsigned int)v1650 > 0x2F )
        v1651 = (__int64 *)v2558;
      return (__m128i *)sub_256E60(*(_QWORD *)&v2559[v2557], *v1651);
    case 464LL:
      v631 = v2557 + 8;
      v632 = (__int64 *)&v2559[v631];
      if ( (unsigned int)v631 > 0x2F )
        v632 = (__int64 *)v2558;
      return (__m128i *)sub_25AFF0(*(_QWORD *)&v2559[v2557], *v632, *(double *)a7.m128_u64);
    case 465LL:
      v2134 = v2557 + 8;
      v2135 = (__int64 *)&v2559[v2134];
      if ( (unsigned int)v2134 > 0x2F )
        v2135 = (__int64 *)v2558;
      return (__m128i *)sub_259AA0(*(_QWORD *)&v2559[v2557], *v2135, *(double *)a7.m128_u64);
    case 466LL:
      v1921 = v2557 + 8;
      v1922 = (__int64 *)&v2559[v1921];
      if ( (unsigned int)v1921 > 0x2F )
        v1922 = (__int64 *)v2558;
      sub_255850(*(__int64 **)&v2559[v2557], *v1922, *(double *)a7.m128_u64);
      return nullptr;
    case 467LL:
      sub_255630(*(_QWORD *)&v2559[v2557], *(double *)a7.m128_u64);
      return nullptr;
    case 468LL:
      v1307 = v2557;
      v1308 = v2557 + 8;
      v2557 = v1308;
      v1309 = *(_QWORD *)&v2559[v1307];
      if ( (unsigned int)v1308 > 0x2F )
      {
        v2444 = (__int64 *)v2558;
        v2445 = v2558 + 8;
        v2558 += 8;
        v1311 = *v2444;
      }
      else
      {
        v1310 = v1307 + 16;
        v1311 = *(_QWORD *)&v2559[v1308];
        if ( (unsigned int)v1310 <= 0x2F )
        {
          v1312 = v1307 + 24;
          v1313 = *(_QWORD *)&v2559[v1310];
          v2557 = v1312;
          if ( (unsigned int)v1312 <= 0x2F )
          {
            v1314 = v1307 + 32;
            v1315 = *(_DWORD *)&v2559[v1312];
            if ( (unsigned int)v1314 > 0x2F )
              v1316 = (int *)v2558;
            else
              v1316 = (int *)&v2559[v1314];
LABEL_1169:
            sub_240B90(v1309, v1311, v1313, v1315, *v1316, *(double *)a7.m128_u64);
            return nullptr;
          }
          v2447 = (int *)v2558;
LABEL_2101:
          v2448 = v2447;
          v1316 = v2447 + 2;
          v2558 = (char *)v1316;
          v1315 = *v2448;
          goto LABEL_1169;
        }
        v2445 = v2558;
      }
      v2446 = (__int64 *)v2445;
      v2447 = (int *)(v2445 + 8);
      v2558 = (char *)v2447;
      v1313 = *v2446;
      goto LABEL_2101;
    case 469LL:
      v2046 = v2557;
      v2047 = v2557 + 8;
      v2557 = v2047;
      v2048 = *(_QWORD *)&v2559[v2046];
      if ( (unsigned int)v2047 > 0x2F )
      {
        v2454 = (__int64 *)v2558;
        v2051 = (__int64 *)(v2558 + 8);
        v2558 += 8;
        v2050 = *v2454;
      }
      else
      {
        v2049 = v2046 + 16;
        v2050 = *(_QWORD *)&v2559[v2047];
        if ( (unsigned int)v2049 > 0x2F )
          v2051 = (__int64 *)v2558;
        else
          v2051 = (__int64 *)&v2559[v2049];
      }
      sub_267FE0(v2048, v2050, *v2051);
      return nullptr;
    case 470LL:
      v1718 = v2557 + 8;
      v1719 = *(_QWORD *)&v2559[v2557];
      v1720 = &v2559[v1718];
      if ( (unsigned int)v1718 > 0x2F )
        v1720 = v2558;
      v1721 = *(_DWORD *)v1720 != 0;
      v1722 = sub_339CA0();
      sub_2441C0(v1719, v1722, v1721, *(double *)a7.m128_u64);
      return nullptr;
    case 471LL:
      v760 = v2557 + 8;
      v761 = (__int64 *)&v2559[v760];
      if ( (unsigned int)v760 > 0x2F )
        v761 = (__int64 *)v2558;
      return (__m128i *)(unsigned __int8)sub_259AB0(*(_QWORD *)&v2559[v2557], *v761, *(double *)a7.m128_u64);
    case 472LL:
      v758 = v2557 + 8;
      v759 = (__int64 *)&v2559[v758];
      if ( (unsigned int)v758 > 0x2F )
        v759 = (__int64 *)v2558;
      return (__m128i *)sub_256450(*(_QWORD *)&v2559[v2557], *v759, *(double *)a7.m128_u64);
    case 473LL:
      v2081 = v2557;
      v2082 = v2557 + 8;
      v2557 = v2082;
      v2083 = *(_QWORD *)&v2559[v2081];
      if ( (unsigned int)v2082 > 0x2F )
      {
        v2498 = (int *)v2558;
        v2086 = (int *)(v2558 + 8);
        v2558 += 8;
        v2085 = *v2498;
      }
      else
      {
        v2084 = v2081 + 16;
        v2085 = *(_DWORD *)&v2559[v2082];
        if ( (unsigned int)v2084 > 0x2F )
          v2086 = (int *)v2558;
        else
          v2086 = (int *)&v2559[v2084];
      }
      return (__m128i *)(unsigned __int8)sub_285160(v2083, v2085, *v2086);
    case 474LL:
      v1840 = v2557 + 8;
      v1841 = *(_DWORD **)&v2559[v2557];
      v1842 = (__int64 *)&v2559[v1840];
      if ( (unsigned int)v1840 > 0x2F )
        v1842 = (__int64 *)v2558;
      v1843 = *v1842;
      v1844 = sub_339CA0();
      *v1841 = sub_285970(v1843, v1844, *(double *)a7.m128_u64);
      return nullptr;
    case 475LL:
      return (__m128i *)(int)sub_285700(*(_QWORD *)&v2559[v2557], *(double *)a7.m128_u64);
    case 476LL:
      v1062 = v2557 + 8;
      v1063 = (__int64 *)&v2559[v1062];
      if ( (unsigned int)v1062 > 0x2F )
        v1063 = (__int64 *)v2558;
      return (__m128i *)(unsigned __int8)sub_245010(*(_QWORD *)&v2559[v2557], *v1063);
    case 477LL:
      return (__m128i *)(unsigned __int8)sub_256590(*(_QWORD *)&v2559[v2557]);
    case 478LL:
      v1569 = (__int64 *)&v2559[v2557];
      v2557 += 8;
      v1570 = *v1569;
      v1571 = sub_339CA0();
      LOBYTE(result) = 1;
      if ( *(_DWORD *)(v1570 + 8) == 61 )
      {
        v2516 = sub_255A30(*(__int64 **)(v1570 + 24));
        LOBYTE(result) = 0;
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1571 + 96) + 24LL) + 16LL) >= v2516 )
          LOBYTE(result) = is_mapped();
      }
      return (__m128i *)(unsigned __int8)result;
    case 479LL:
      return (__m128i *)sub_1AEA30(*(_QWORD *)&v2559[v2557]);
    case 480LL:
      v391 = v2557 + 8;
      v392 = (__int64 *)&v2559[v391];
      if ( (unsigned int)v391 > 0x2F )
        v392 = (__int64 *)v2558;
      return (__m128i *)sub_25B4D0(*(_QWORD *)&v2559[v2557], *v392, *(double *)a7.m128_u64);
    case 481LL:
      v835 = v2557 + 8;
      v836 = (__int64 *)&v2559[v835];
      if ( (unsigned int)v835 > 0x2F )
        v836 = (__int64 *)v2558;
      return (__m128i *)sub_25A770(*(_QWORD *)&v2559[v2557], *v836, *(double *)a7.m128_u64);
    case 482LL:
      v833 = v2557 + 8;
      v834 = (__int64 *)&v2559[v833];
      if ( (unsigned int)v833 > 0x2F )
        v834 = (__int64 *)v2558;
      return (__m128i *)sub_25B5B0(*(_QWORD *)&v2559[v2557], *v834, v2557, v833, *(double *)a7.m128_u64);
    case 483LL:
      v827 = v2557 + 8;
      v828 = (__int64 *)&v2559[v827];
      if ( (unsigned int)v827 > 0x2F )
        v828 = (__int64 *)v2558;
      return (__m128i *)sub_25A320(*(_QWORD *)&v2559[v2557], *v828, *(double *)a7.m128_u64);
    case 484LL:
      v825 = v2557 + 8;
      v826 = (__int64 *)&v2559[v825];
      if ( (unsigned int)v825 > 0x2F )
        v826 = (__int64 *)v2558;
      return (__m128i *)sub_25A730(*(_QWORD *)&v2559[v2557], *v826, *(double *)a7.m128_u64);
    case 485LL:
      v831 = v2557 + 8;
      v832 = (__int64 *)&v2559[v831];
      if ( (unsigned int)v831 > 0x2F )
        v832 = (__int64 *)v2558;
      return (__m128i *)sub_25A6F0(*(_QWORD *)&v2559[v2557], *v832, *(double *)a7.m128_u64);
    case 486LL:
      v829 = v2557 + 8;
      v830 = (__int64 *)&v2559[v829];
      if ( (unsigned int)v829 > 0x2F )
        v830 = (__int64 *)v2558;
      return (__m128i *)sub_25A210(*(_QWORD *)&v2559[v2557], *v830, *(double *)a7.m128_u64);
    case 487LL:
      v823 = v2557 + 8;
      v824 = (__int64 *)&v2559[v823];
      if ( (unsigned int)v823 > 0x2F )
        v824 = (__int64 *)v2558;
      return (__m128i *)sub_25A310(*(_QWORD *)&v2559[v2557], *v824, *(double *)a7.m128_u64);
    case 488LL:
      v821 = v2557 + 8;
      v822 = &v2559[v821];
      if ( (unsigned int)v821 > 0x2F )
        v822 = v2558;
      return (__m128i *)(int)sub_2569D0(*(_DWORD **)&v2559[v2557], *(_DWORD **)v822);
    case 489LL:
      v1690 = v2557 + 8;
      v1691 = (unsigned __int64 ***)&v2559[v1690];
      if ( (unsigned int)v1690 > 0x2F )
        v1691 = (unsigned __int64 ***)v2558;
      return (__m128i *)(int)sub_2569F0(*(unsigned __int64 ***)&v2559[v2557], *v1691, *(double *)a7.m128_u64);
    case 490LL:
      v1490 = v2557 + 8;
      v1491 = (__int64 *)&v2559[v1490];
      if ( (unsigned int)v1490 > 0x2F )
        v1491 = (__int64 *)v2558;
      return (__m128i *)sub_25AA70(*(_QWORD *)&v2559[v2557], *v1491, *(double *)a7.m128_u64);
    case 491LL:
      v1492 = v2557 + 8;
      v1493 = (__int64 *)&v2559[v1492];
      if ( (unsigned int)v1492 > 0x2F )
        v1493 = (__int64 *)v2558;
      return (__m128i *)sub_2596A0(*(_QWORD *)&v2559[v2557], *v1493, *(double *)a7.m128_u64);
    case 492LL:
      v1136 = v2557 + 8;
      v1137 = (__int64 *)&v2559[v1136];
      if ( (unsigned int)v1136 > 0x2F )
        v1137 = (__int64 *)v2558;
      sub_255580(*(__int64 **)&v2559[v2557], *v1137, *(double *)a7.m128_u64);
      return nullptr;
    case 493LL:
      sub_255050(*(_QWORD *)&v2559[v2557], *(double *)a7.m128_u64);
      return nullptr;
    case 494LL:
      v1358 = v2557 + 8;
      v1359 = (__int64 *)&v2559[v1358];
      if ( (unsigned int)v1358 > 0x2F )
        v1359 = (__int64 *)v2558;
      return (__m128i *)sub_2413C0(*(_QWORD *)&v2559[v2557], *v1359, v2557, v1358, *(double *)a7.m128_u64);
    case 495LL:
      v1615 = v2557 + 8;
      v1616 = (__int64 *)&v2559[v1615];
      if ( (unsigned int)v1615 > 0x2F )
        v1616 = (__int64 *)v2558;
      return (__m128i *)sub_241920(*(_QWORD *)&v2559[v2557], *v1616, v2557, v1615, *(double *)a7.m128_u64);
    case 496LL:
      v459 = v2557;
      v460 = v2557 + 8;
      v461 = *(_QWORD *)&v2559[v2557];
      if ( (unsigned int)v460 > 0x2F )
      {
        v2441 = (unsigned int *)v2558;
        v2442 = v2558 + 8;
        v2558 += 8;
        v463 = *v2441;
      }
      else
      {
        v462 = v2557 + 16;
        v463 = *(_DWORD *)&v2559[v460];
        v2557 = v462;
        if ( (unsigned int)v462 <= 0x2F )
        {
          v464 = v459 + 24;
          v465 = *(_QWORD **)&v2559[v462];
          if ( (unsigned int)v464 > 0x2F )
            v466 = (unsigned int *)v2558;
          else
            v466 = (unsigned int *)&v2559[v464];
LABEL_409:
          sub_268570(v461, v463, v465, *v466, *(double *)a7.m128_u64);
          return nullptr;
        }
        v2442 = v2558;
      }
      v2443 = v2442;
      v466 = (unsigned int *)(v2442 + 8);
      v2558 = (char *)v466;
      v465 = *(_QWORD **)v2443;
      goto LABEL_409;
    case 497LL:
      v1478 = v2557;
      v1479 = v2557 + 8;
      v2557 = v1479;
      v1480 = *(_QWORD *)&v2559[v1478];
      if ( (unsigned int)v1479 > 0x2F )
      {
        v2202 = (__int64 *)v2558;
        v1483 = (__int64 *)(v2558 + 8);
        v2558 += 8;
        v1482 = *v2202;
      }
      else
      {
        v1481 = v1478 + 16;
        v1482 = *(_QWORD *)&v2559[v1479];
        if ( (unsigned int)v1481 > 0x2F )
          v1483 = (__int64 *)v2558;
        else
          v1483 = (__int64 *)&v2559[v1481];
      }
      sub_2696A0(v1480, v1482, *v1483);
      return nullptr;
    case 498LL:
      return (__m128i *)(unsigned __int8)sub_241B40(*(_QWORD *)&v2559[v2557], (__int64)a2, a3, a4, a5);
    case 499LL:
      v1484 = v2557;
      v1485 = v2557 + 8;
      v2557 = v1485;
      v1486 = *(_QWORD *)&v2559[v1484];
      if ( (unsigned int)v1485 > 0x2F )
      {
        v2365 = (int *)v2558;
        v1489 = (int *)(v2558 + 8);
        v2558 += 8;
        v1488 = *v2365;
      }
      else
      {
        v1487 = v1484 + 16;
        v1488 = *(_DWORD *)&v2559[v1485];
        if ( (unsigned int)v1487 > 0x2F )
          v1489 = (int *)v2558;
        else
          v1489 = (int *)&v2559[v1487];
      }
      return (__m128i *)(unsigned __int8)sub_2853C0(v1486, v1488, *v1489);
    case 500LL:
      v1241 = v2557 + 8;
      v1242 = (__int64 *)&v2559[v1241];
      if ( (unsigned int)v1241 > 0x2F )
        v1242 = (__int64 *)v2558;
      return (__m128i *)(unsigned __int8)sub_285490(*(_QWORD *)&v2559[v2557], *v1242);
    case 501LL:
      v1474 = v2557 + 8;
      v1475 = (__int64 *)&v2559[v1474];
      if ( (unsigned int)v1474 > 0x2F )
        v1475 = (__int64 *)v2558;
      return (__m128i *)(unsigned __int8)sub_285570(*(_QWORD *)&v2559[v2557], *v1475);
    case 502LL:
      return (__m128i *)sub_1AEAE0(*(_QWORD *)&v2559[v2557]);
    case 503LL:
      v1476 = v2557 + 8;
      v1477 = &v2559[v1476];
      if ( (unsigned int)v1476 > 0x2F )
        v1477 = v2558;
      return (__m128i *)sub_25A4C0(*(_QWORD ***)&v2559[v2557], *(_QWORD ***)v1477, *(double *)a7.m128_u64);
    case 504LL:
      v658 = v2557 + 8;
      v659 = (__int64 **)&v2559[v658];
      if ( (unsigned int)v658 > 0x2F )
        v659 = (__int64 **)v2558;
      return (__m128i *)sub_25A2C0(*(__int64 **)&v2559[v2557], *v659, *(double *)a7.m128_u64);
    case 505LL:
      v991 = v2557 + 8;
      v992 = (__int64 *)&v2559[v991];
      if ( (unsigned int)v991 > 0x2F )
        v992 = (__int64 *)v2558;
      return (__m128i *)sub_25A390(*(_QWORD *)&v2559[v2557], *v992, *(double *)a7.m128_u64);
    case 506LL:
      v989 = v2557 + 8;
      v990 = (__int64 **)&v2559[v989];
      if ( (unsigned int)v989 > 0x2F )
        v990 = (__int64 **)v2558;
      return (__m128i *)(int)sub_259690(*(__int64 **)&v2559[v2557], *v990);
    case 507LL:
      v987 = v2557 + 8;
      v988 = (__int64 *)&v2559[v987];
      if ( (unsigned int)v987 > 0x2F )
        v988 = (__int64 *)v2558;
      return (__m128i *)sub_25A2D0(*(_QWORD *)&v2559[v2557], *v988, *(double *)a7.m128_u64);
    case 508LL:
      v985 = v2557 + 8;
      v986 = (__int64 *)&v2559[v985];
      if ( (unsigned int)v985 > 0x2F )
        v986 = (__int64 *)v2558;
      return (__m128i *)sub_25A4D0(*(_QWORD *)&v2559[v2557], *v986, *(double *)a7.m128_u64);
    case 509LL:
      v1001 = v2557 + 8;
      v1002 = (__int64 *)&v2559[v1001];
      if ( (unsigned int)v1001 > 0x2F )
        v1002 = (__int64 *)v2558;
      return (__m128i *)sub_25A5D0(*(_QWORD *)&v2559[v2557], *v1002, *(double *)a7.m128_u64);
    case 510LL:
      v993 = v2557;
      v994 = v2557 + 8;
      v995 = *(_QWORD *)&v2559[v2557];
      if ( (unsigned int)v994 > 0x2F )
      {
        v2287 = (__int128 **)v2558;
        v2538 = v2558 + 8;
        v2558 += 8;
        v997 = *v2287;
      }
      else
      {
        v996 = v2557 + 16;
        v997 = *(__int128 **)&v2559[v994];
        v2557 = v996;
        if ( (unsigned int)v996 <= 0x2F )
        {
          v998 = v993 + 24;
          v999 = *(_QWORD **)&v2559[v996];
          if ( (unsigned int)v998 > 0x2F )
            v1000 = (__int64 **)v2558;
          else
            v1000 = (__int64 **)&v2559[v998];
          return (__m128i *)(int)sub_38D3D0(v995, v997, v999, *v1000);
        }
        v2538 = v2558;
      }
      v2288 = v2538;
      v1000 = (__int64 **)(v2538 + 8);
      v2558 = (char *)v1000;
      v999 = *(_QWORD **)v2288;
      return (__m128i *)(int)sub_38D3D0(v995, v997, v999, *v1000);
    case 511LL:
      return (__m128i *)(int)sub_38D130(*(_QWORD *)&v2559[v2557]);
    case 512LL:
      return (__m128i *)sub_38D720(*(_QWORD *)&v2559[v2557]);
    case 513LL:
      v369 = v2557 + 8;
      v371 = (__int64 *)&v2559[v369];
      if ( (unsigned int)v369 > 0x2F )
        v371 = (__int64 *)v2558;
      v370 = *(__int64 **)&v2559[v2557];
      *v370 = sub_38D760(*v371);
      return nullptr;
    case 514LL:
      v317 = v2557 + 8;
      v318 = &v2559[v317];
      if ( (unsigned int)v317 > 0x2F )
        v318 = v2558;
      return (__m128i *)(int)sub_38D7A0(*(_QWORD *)&v2559[v2557], *(_DWORD *)v318);
    case 515LL:
      v319 = v2557 + 8;
      v320 = (__int64 **)&v2559[v319];
      if ( (unsigned int)v319 > 0x2F )
        v320 = (__int64 **)v2558;
      sub_1B6400(*(_QWORD *)&v2559[v2557], *v320);
      return nullptr;
    case 516LL:
      return (__m128i *)sub_1B6740(*(_QWORD *)&v2559[v2557]);
    case 517LL:
      v344 = *(_QWORD *)&v2559[v2557];
      v345 = sub_339CA0();
      return (__m128i *)sub_244460(v345, v344, v346, v347, v348, *(double *)a7.m128_u64);
    case 518LL:
      return (__m128i *)sub_241330((unsigned int)a1, (__int64)a2, a3, a4);
    case 519LL:
      v158 = v2557;
      v159 = *(_DWORD *)&v2559[v2557] != 0;
      if ( v2557 + 8 > 0x2F )
      {
        v2307 = v2558 + 8;
        v2558 += 8;
      }
      else
      {
        v2557 += 16;
        if ( v158 + 16 <= 0x2F )
        {
          v160 = v158 + 24;
          if ( (unsigned int)v160 > 0x2F )
            v161 = v2558;
          else
            v161 = &v2559[v160];
LABEL_141:
          v162 = *(const __m128i **)v161;
          v2560 = _mm_loadu_si128((const __m128i *)*(_QWORD *)v161);
          v2561 = v162[1].m128i_i64[0];
          return (__m128i *)sub_2425F0(v159);
        }
        v2307 = v2558;
      }
      v161 = v2307 + 8;
      v2558 = v161;
      goto LABEL_141;
    case 520LL:
      v151 = v2557;
      v152 = v2557 + 8;
      v153 = *(_QWORD *)&v2559[v2557];
      if ( (unsigned int)v152 > 0x2F )
      {
        v2336 = (__int64 *)v2558;
        v2532 = v2558 + 8;
        v2558 += 8;
        v154 = *v2336;
      }
      else
      {
        v154 = *(_QWORD *)&v2559[v152];
        v2557 += 16;
        if ( v151 + 16 <= 0x2F )
        {
          v155 = v151 + 24;
          if ( (unsigned int)v155 > 0x2F )
            v156 = v2558;
          else
            v156 = &v2559[v155];
LABEL_136:
          v157 = *(const __m128i **)v156;
          v2560 = _mm_loadu_si128((const __m128i *)*(_QWORD *)v156);
          v2561 = v157[1].m128i_i64[0];
          return (__m128i *)sub_2456C0(v153, v154);
        }
        v2532 = v2558;
      }
      v156 = v2532 + 8;
      v2558 = v156;
      goto LABEL_136;
    case 521LL:
      v351 = v2557;
      v352 = v2557 + 8;
      v353 = *(_QWORD *)&v2559[v2557];
      if ( (unsigned int)v352 > 0x2F )
      {
        v2321 = (__int64 *)v2558;
        v2533 = v2558 + 8;
        v2558 += 8;
        v355 = *v2321;
      }
      else
      {
        v354 = v2557 + 16;
        v355 = *(_QWORD *)&v2559[v352];
        v2557 = v354;
        if ( (unsigned int)v354 <= 0x2F )
        {
          v356 = v351 + 24;
          v357 = *(_QWORD *)&v2559[v354];
          if ( (unsigned int)v356 <= 0x2F )
          {
            v358 = v351 + 32;
            v359 = *(_DWORD *)&v2559[v356];
            v2557 = v358;
            if ( (unsigned int)v358 <= 0x2F )
            {
              v360 = v351 + 40;
              v361 = *(_DWORD *)&v2559[v358];
              if ( (unsigned int)v360 > 0x2F )
                v362 = (int *)v2558;
              else
                v362 = (int *)&v2559[v360];
              return (__m128i *)sub_241030(v353, v355, v357, v359, v361, *v362);
            }
            v2325 = (int *)v2558;
LABEL_2044:
            v2326 = v2325;
            v362 = v2325 + 2;
            v2558 = (char *)v362;
            v361 = *v2326;
            return (__m128i *)sub_241030(v353, v355, v357, v359, v361, *v362);
          }
          v2323 = v2558;
LABEL_2043:
          v2324 = v2323;
          v2325 = (int *)(v2323 + 8);
          v2558 = (char *)v2325;
          v359 = *(_DWORD *)v2324;
          goto LABEL_2044;
        }
        v2533 = v2558;
      }
      v2322 = (__int64 *)v2533;
      v2323 = v2533 + 8;
      v2558 = v2323;
      v357 = *v2322;
      goto LABEL_2043;
    case 522LL:
      v299 = *(_QWORD *)&v2559[v2557];
      v300 = sub_339CA0();
      return (__m128i *)sub_247510(v300, v299, v301, v302, *(double *)a7.m128_u64);
    case 523LL:
      v331 = v2557;
      v332 = v2557 + 8;
      v2557 = v332;
      v333 = *(_QWORD *)&v2559[v331];
      if ( (unsigned int)v332 > 0x2F )
      {
        v2318 = v2558;
        v336 = v2558 + 8;
        v2558 += 8;
        v335 = *(_DWORD *)v2318;
      }
      else
      {
        v334 = v331 + 16;
        v335 = *(_DWORD *)&v2559[v332];
        if ( (unsigned int)v334 > 0x2F )
          v336 = v2558;
        else
          v336 = &v2559[v334];
      }
      v337 = *(_DWORD *)v336 != 0;
      v338 = sub_339CA0();
      return (__m128i *)sub_244320(v338, v333, v335, v337, *(double *)a7.m128_u64);
    case 524LL:
      v208 = v2557;
      v209 = v2557 + 8;
      v2557 = v209;
      v210 = *(_QWORD *)&v2559[v208];
      if ( (unsigned int)v209 > 0x2F )
      {
        v2308 = (__int64 *)v2558;
        v213 = v2558 + 8;
        v2558 += 8;
        v212 = *v2308;
      }
      else
      {
        v211 = v208 + 16;
        v212 = *(_QWORD *)&v2559[v209];
        if ( (unsigned int)v211 > 0x2F )
          v213 = v2558;
        else
          v213 = &v2559[v211];
      }
      v214 = *(_QWORD **)v213;
      v215 = sub_339CA0();
      sub_2B6570(v215, v210, v212, v214);
      return nullptr;
    case 525LL:
      v112 = v2557 + 8;
      v113 = *(_QWORD *)&v2559[v2557];
      v114 = (__int64 *)&v2559[v112];
      if ( (unsigned int)v112 > 0x2F )
        v114 = (__int64 *)v2558;
      v115 = *v114;
      v116 = sub_339CA0();
      sub_2B6650(v116, v113, v115);
      return nullptr;
    case 526LL:
      v107 = v2557 + 8;
      v108 = *(_QWORD *)&v2559[v2557];
      v109 = (__int64 *)&v2559[v107];
      if ( (unsigned int)v107 > 0x2F )
        v109 = (__int64 *)v2558;
      v110 = *v109;
      v111 = sub_339CA0();
      sub_2B6710(v111, v108, v110);
      return nullptr;
    case 527LL:
      v246 = v2557 + 8;
      v247 = *(_QWORD *)&v2559[v2557];
      v248 = (__int64 *)&v2559[v246];
      if ( (unsigned int)v246 > 0x2F )
        v248 = (__int64 *)v2558;
      v249 = *v248;
      v250 = sub_339CA0();
      sub_2B6880(v250, v247, v249);
      return nullptr;
    case 528LL:
      v102 = v2557 + 8;
      v103 = *(_QWORD *)&v2559[v2557];
      v104 = (__int64 *)&v2559[v102];
      if ( (unsigned int)v102 > 0x2F )
        v104 = (__int64 *)v2558;
      v105 = *v104;
      v106 = sub_339CA0();
      sub_2B7C90(v106, v103, v105);
      return nullptr;
    case 529LL:
      v339 = v2557 + 8;
      v340 = *(_QWORD *)&v2559[v2557];
      v341 = &v2559[v339];
      if ( (unsigned int)v339 > 0x2F )
        v341 = v2558;
      v342 = *(_QWORD **)v341;
      v343 = sub_339CA0();
      return (__m128i *)sub_2B65E0(v343, v340, v342);
    case 530LL:
      v309 = *(_QWORD *)&v2559[v2557];
      v310 = sub_339CA0();
      return (__m128i *)sub_2B66B0(v310, v309);
    case 531LL:
      v220 = *(_QWORD *)&v2559[v2557];
      v221 = sub_339CA0();
      return (__m128i *)sub_2B6820(v221, v220);
    case 532LL:
      v218 = *(_QWORD *)&v2559[v2557];
      v219 = sub_339CA0();
      return (__m128i *)sub_2B68E0(v219, v218);
    case 533LL:
      v147 = *(_QWORD *)&v2559[v2557];
      v148 = sub_339CA0();
      return (__m128i *)sub_2B7CF0(v148, v147);
    case 534LL:
      sub_2523C0(*(_QWORD *)&v2559[v2557], (__int64)a2, a3, a4);
      return nullptr;
    case 535LL:
      v267 = v2557;
      v268 = v2557 + 8;
      v2557 = v268;
      v269 = *(_QWORD *)&v2559[v267];
      if ( (unsigned int)v268 > 0x2F )
      {
        v2301 = (int *)v2558;
        v272 = v2558 + 8;
        v2558 += 8;
        v271 = *v2301;
      }
      else
      {
        v270 = v267 + 16;
        v271 = *(_DWORD *)&v2559[v268];
        if ( (unsigned int)v270 > 0x2F )
          v272 = v2558;
        else
          v272 = &v2559[v270];
      }
      sub_3252D0(v269, v271, *(_DWORD *)v272 != 0, *(double *)a7.m128_u64);
      return nullptr;
    case 536LL:
      v145 = v2557 + 8;
      v146 = (__int64 **)&v2559[v145];
      if ( (unsigned int)v145 > 0x2F )
        v146 = (__int64 **)v2558;
      sub_263810(*(_QWORD *)&v2559[v2557], *v146, v2557, v145);
      return nullptr;
    case 537LL:
      v329 = v2557 + 8;
      v330 = (__int64 *)&v2559[v329];
      if ( (unsigned int)v329 > 0x2F )
        v330 = (__int64 *)v2558;
      sub_268FA0(*(_QWORD *)&v2559[v2557], *v330, *(double *)a7.m128_u64);
      return nullptr;
    case 538LL:
      return (__m128i *)(unsigned __int8)sub_3767A0(*(_QWORD *)(*(_QWORD *)&v2559[v2557] + 8LL));
    case 539LL:
      return (__m128i *)(*(_QWORD *)(*(_QWORD *)&v2559[v2557] + 8LL) + 432LL);
    case 540LL:
      v187 = v2557 + 8;
      v188 = &v2559[v187];
      if ( (unsigned int)v187 > 0x2F )
        v188 = v2558;
      **(_QWORD **)&v2559[v2557] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v188 + 8LL) + 80LL);
      return nullptr;
    case 541LL:
      v236 = v2557 + 8;
      v237 = (int *)&v2559[v236];
      if ( (unsigned int)v236 > 0x2F )
        v237 = (int *)v2558;
      return (__m128i *)sub_2582A0(*(_QWORD *)&v2559[v2557], *v237);
    case 542LL:
      sub_2585C0(*(_QWORD *)&v2559[v2557]);
      return nullptr;
    case 543LL:
      v90 = v2557;
      v91 = v2557 + 8;
      v2557 = v91;
      v92 = *(_QWORD *)&v2559[v90];
      if ( (unsigned int)v91 > 0x2F )
      {
        v2314 = (unsigned __int64 **)v2558;
        v95 = (int *)(v2558 + 8);
        v2558 += 8;
        v94 = *v2314;
      }
      else
      {
        v93 = v90 + 16;
        v94 = *(unsigned __int64 **)&v2559[v91];
        if ( (unsigned int)v93 > 0x2F )
          v95 = (int *)v2558;
        else
          v95 = (int *)&v2559[v93];
      }
      return (__m128i *)sub_257AF0(v92, v94, *v95, *(double *)a7.m128_u64);
    case 544LL:
      v84 = v2557;
      v85 = v2557 + 8;
      v2557 = v85;
      v86 = *(_QWORD *)&v2559[v84];
      if ( (unsigned int)v85 > 0x2F )
      {
        v2335 = (const __m128i **)v2558;
        v89 = (const char **)(v2558 + 8);
        v2558 += 8;
        v88 = *v2335;
      }
      else
      {
        v87 = v84 + 16;
        v88 = *(const __m128i **)&v2559[v85];
        if ( (unsigned int)v87 > 0x2F )
          v89 = (const char **)v2558;
        else
          v89 = (const char **)&v2559[v87];
      }
      sub_25C730(v86, v88, *v89);
      return nullptr;
    case 545LL:
      v349 = v2557 + 8;
      v350 = (unsigned __int64 **)&v2559[v349];
      if ( (unsigned int)v349 > 0x2F )
        v350 = (unsigned __int64 **)v2558;
      return (__m128i *)(int)sub_257EA0(*(_QWORD *)&v2559[v2557], *v350);
    case 546LL:
      v311 = v2557;
      v312 = v2557 + 8;
      v2557 = v312;
      v313 = *(_QWORD *)&v2559[v311];
      if ( (unsigned int)v312 > 0x2F )
      {
        v2350 = (const __m128i **)v2558;
        v316 = (int *)(v2558 + 8);
        v2558 += 8;
        v315 = *v2350;
      }
      else
      {
        v314 = v311 + 16;
        v315 = *(const __m128i **)&v2559[v312];
        if ( (unsigned int)v314 > 0x2F )
          v316 = (int *)v2558;
        else
          v316 = (int *)&v2559[v314];
      }
      sub_25D910(v313, v315, *v316);
      return nullptr;
    case 547LL:
      return (__m128i *)(unsigned __int8)sub_255960(*(_QWORD *)&v2559[v2557]);
    case 548LL:
      return (__m128i *)(int)sub_25C270(*(_QWORD *)&v2559[v2557]);
    case 549LL:
      v363 = v2557;
      v364 = v2557 + 8;
      v2557 = v364;
      v365 = *(_QWORD *)&v2559[v363];
      if ( (unsigned int)v364 > 0x2F )
      {
        v2333 = (unsigned __int64 *)v2558;
        v368 = (__int64 **)(v2558 + 8);
        v2558 += 8;
        v367 = *v2333;
      }
      else
      {
        v366 = v363 + 16;
        v367 = *(_QWORD *)&v2559[v364];
        if ( (unsigned int)v366 > 0x2F )
          v368 = (__int64 **)v2558;
        else
          v368 = (__int64 **)&v2559[v366];
      }
      return (__m128i *)(unsigned __int8)sub_257F10(v365, v367, *v368, v364);
    case 550LL:
      v275 = v2557;
      v276 = v2557 + 8;
      v2557 = v276;
      v277 = *(_QWORD *)&v2559[v275];
      if ( (unsigned int)v276 > 0x2F )
      {
        v2306 = (__int64 *)v2558;
        v280 = (__int64 *)(v2558 + 8);
        v2558 += 8;
        v279 = *v2306;
      }
      else
      {
        v278 = v275 + 16;
        v279 = *(_QWORD *)&v2559[v276];
        if ( (unsigned int)v278 > 0x2F )
          v280 = (__int64 *)v2558;
        else
          v280 = (__int64 *)&v2559[v278];
      }
      sub_25E960(v277, v279, *v280);
      return nullptr;
    case 551LL:
      sub_2B6570(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v2559[v2557] + 216LL) + 112LL),
        **(_QWORD **)&v2559[v2557],
        *(_QWORD *)(*(_QWORD *)&v2559[v2557] + 64LL),
        *(_QWORD **)&v2559[v2557]);
      return nullptr;
    case 552LL:
      sub_2B6650(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v2559[v2557] + 216LL) + 112LL),
        **(_QWORD **)&v2559[v2557],
        *(_QWORD *)(*(_QWORD *)&v2559[v2557] + 72LL));
      return nullptr;
    case 553LL:
      sub_2B6710(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v2559[v2557] + 216LL) + 112LL),
        **(_QWORD **)&v2559[v2557],
        *(_QWORD *)(*(_QWORD *)&v2559[v2557] + 80LL));
      return nullptr;
    case 554LL:
      sub_2B6880(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v2559[v2557] + 216LL) + 112LL),
        **(_QWORD **)&v2559[v2557],
        *(_QWORD *)(*(_QWORD *)&v2559[v2557] + 88LL));
      return nullptr;
    case 555LL:
      sub_2B7C90(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v2559[v2557] + 216LL) + 112LL),
        **(_QWORD **)&v2559[v2557],
        *(_QWORD *)(*(_QWORD *)&v2559[v2557] + 96LL));
      return nullptr;
    case 556LL:
      v195 = v2557;
      v196 = v2557 + 8;
      v2557 = v196;
      v197 = *(_QWORD *)&v2559[v195];
      if ( (unsigned int)v196 > 0x2F )
      {
        v2338 = v2558;
        v2534 = v2558 + 8;
        v2558 += 8;
        v199 = *(_BYTE **)v2338;
      }
      else
      {
        v198 = v195 + 16;
        v199 = *(_BYTE **)&v2559[v196];
        if ( (unsigned int)v198 <= 0x2F )
        {
          v200 = v195 + 24;
          v201 = *(_DWORD *)&v2559[v198];
          v2557 = v200;
          if ( (unsigned int)v200 <= 0x2F )
          {
            v202 = v195 + 32;
            v203 = *(_DWORD *)&v2559[v200] != 0;
            if ( (unsigned int)v202 <= 0x2F )
            {
              v204 = v195 + 40;
              v205 = *(_QWORD *)&v2559[v202];
              v2557 = v204;
              if ( (unsigned int)v204 <= 0x2F )
              {
                v206 = *(_QWORD *)&v2559[v204];
                v207 = (__int64 *)v2558;
                return (__m128i *)sub_38A790(v197, v199, v201, v203, v205, v206, *v207);
              }
              v2344 = (__int64 *)v2558;
LABEL_2051:
              v2345 = v2344;
              v207 = v2344 + 1;
              v2558 = (char *)v207;
              v206 = *v2345;
              return (__m128i *)sub_38A790(v197, v199, v201, v203, v205, v206, *v207);
            }
            v2342 = (__int64 *)v2558;
LABEL_2050:
            v2343 = v2342;
            v2344 = v2342 + 1;
            v2558 = (char *)v2344;
            v205 = *v2343;
            goto LABEL_2051;
          }
          v2340 = v2558;
LABEL_2049:
          v2341 = v2340;
          v2342 = (__int64 *)(v2340 + 8);
          v2558 = (char *)v2342;
          v203 = *(_DWORD *)v2341 != 0;
          goto LABEL_2050;
        }
        v2534 = v2558;
      }
      v2339 = (int *)v2534;
      v2340 = v2534 + 8;
      v2558 = v2340;
      v201 = *v2339;
      goto LABEL_2049;
    case 557LL:
      return (__m128i *)(*(_QWORD *)(*(_QWORD *)&v2559[v2557] + 8LL) + 728LL);
    case 558LL:
      return (__m128i *)sub_258010(*(_QWORD *)&v2559[v2557]);
    case 559LL:
      return (__m128i *)sub_258020(*(_QWORD *)&v2559[v2557]);
    case 560LL:
      return sub_2581E0(*(__m128i **)&v2559[v2557]);
    case 561LL:
      sub_390160(*(__int64 **)&v2559[v2557], (__int64)a2, a3);
      return nullptr;
    case 562LL:
      v303 = v2557;
      v304 = v2557 + 8;
      v2557 = v304;
      v305 = *(_QWORD *)&v2559[v303];
      if ( (unsigned int)v304 > 0x2F )
      {
        v2330 = (__int64 *)v2558;
        v308 = (__int64 *)(v2558 + 8);
        v2558 += 8;
        v307 = *v2330;
      }
      else
      {
        v306 = v303 + 16;
        v307 = *(_QWORD *)&v2559[v304];
        if ( (unsigned int)v306 > 0x2F )
          v308 = (__int64 *)v2558;
        else
          v308 = (__int64 *)&v2559[v306];
      }
      return (__m128i *)(unsigned __int8)sub_2574C0(v305, v307, *v308);
    case 563LL:
      v321 = v2557;
      v322 = v2557 + 8;
      v323 = *(_QWORD *)&v2559[v2557];
      if ( (unsigned int)v322 > 0x2F )
      {
        v2327 = (__int64 *)v2558;
        v2328 = v2558 + 8;
        v2558 += 8;
        v325 = *v2327;
      }
      else
      {
        v324 = v2557 + 16;
        v325 = *(_QWORD *)&v2559[v322];
        v2557 = v324;
        if ( (unsigned int)v324 <= 0x2F )
        {
          v326 = v321 + 24;
          v327 = *(_DWORD **)&v2559[v324];
          if ( (unsigned int)v326 > 0x2F )
            v328 = v2558;
          else
            v328 = &v2559[v326];
          return (__m128i *)(unsigned __int8)sub_38BD60(v323, v325, v327, *(_DWORD **)v328, *(double *)a7.m128_u64);
        }
        v2328 = v2558;
      }
      v2329 = v2328;
      v328 = v2328 + 8;
      v2558 = v328;
      v327 = *(_DWORD **)v2329;
      return (__m128i *)(unsigned __int8)sub_38BD60(v323, v325, v327, *(_DWORD **)v328, *(double *)a7.m128_u64);
    case 564LL:
      sub_258970(*(__int64 **)&v2559[v2557]);
      return nullptr;
    case 565LL:
      v132 = sub_339CA0();
      sub_137630(
        v132,
        (__int64)a2,
        v133,
        v134,
        v135,
        v136,
        v2550.m128i_i64[0],
        v2550.m128i_i64[1],
        v2551.m128i_i64[0],
        v2551.m128i_i64[1]);
      return nullptr;
    case 566LL:
      v124 = v2557;
      v125 = v2557 + 8;
      v2557 = v125;
      v126 = *(__int64 ***)&v2559[v124];
      if ( (unsigned int)v125 > 0x2F )
      {
        v2309 = v2558;
        v129 = (int *)(v2558 + 8);
        v2558 += 8;
        v128 = *(_DWORD **)v2309;
      }
      else
      {
        v127 = v124 + 16;
        v128 = *(_DWORD **)&v2559[v125];
        if ( (unsigned int)v127 > 0x2F )
          v129 = (int *)v2558;
        else
          v129 = (int *)&v2559[v127];
      }
      v130 = *v129;
      v131 = sub_339CA0();
      sub_14CDC0(
        (__int64 *)v2555,
        v131,
        v126,
        v128,
        v130,
        *(double *)a7.m128_u64,
        *(double *)a8.m128_u64,
        (__m128i)a9,
        *(double *)a10.m128_u64);
      v123 = *(_QWORD *)v2555;
      if ( *(_QWORD *)v2555 )
        ++*(_DWORD *)(*(_QWORD *)v2555 + 104LL);
      goto LABEL_102;
    case 567LL:
      v253 = v2557;
      v254 = v2557 + 8;
      v2557 = v254;
      v255 = *(__int64 ***)&v2559[v253];
      if ( (unsigned int)v254 > 0x2F )
      {
        v2302 = (__int64 *)v2558;
        v2537 = v2558 + 8;
        v2558 += 8;
        v257 = *v2302;
      }
      else
      {
        v256 = v253 + 16;
        v257 = *(_QWORD *)&v2559[v254];
        if ( (unsigned int)v256 <= 0x2F )
        {
          v258 = v253 + 24;
          v259 = *(_QWORD *)&v2559[v256];
          v2557 = v258;
          if ( (unsigned int)v258 <= 0x2F )
          {
            v260 = v253 + 32;
            v261 = *(_DWORD *)&v2559[v258];
            if ( (unsigned int)v260 > 0x2F )
              v262 = v2558;
            else
              v262 = &v2559[v260];
LABEL_237:
            v263 = *(_DWORD *)v262;
            v264 = sub_339CA0();
            return (__m128i *)sub_14CE10(
                                v264,
                                v255,
                                v257,
                                v259,
                                v261,
                                v263,
                                *(double *)a7.m128_u64,
                                *(double *)a8.m128_u64,
                                (__m128i)a9,
                                *(double *)a10.m128_u64);
          }
          v2304 = v2558;
LABEL_2038:
          v2305 = v2304;
          v262 = v2304 + 8;
          v2558 = v262;
          v261 = *(_DWORD *)v2305;
          goto LABEL_237;
        }
        v2537 = v2558;
      }
      v2303 = (__int64 *)v2537;
      v2304 = v2537 + 8;
      v2558 = v2304;
      v259 = *v2303;
      goto LABEL_2038;
    case 568LL:
      sub_2572A0((__int64 **)v2555, *(_QWORD *)&v2559[v2557], a3, a4);
      v123 = *(_QWORD *)v2555;
      if ( *(_QWORD *)v2555 )
        ++*(_DWORD *)(*(_QWORD *)v2555 + 104LL);
LABEL_102:
      v2550.m128i_i64[0] = v123;
      sub_140140((__int64 **)v2555);
      return (__m128i *)v2550.m128i_i64[0];
    case 569LL:
      v178 = v2557 + 8;
      v179 = *(_QWORD *)&v2559[v2557];
      v180 = &v2559[v178];
      if ( (unsigned int)v178 > 0x2F )
        v180 = v2558;
      v181 = *(_DWORD *)v180 != 0;
      v182 = sub_339CA0();
      return (__m128i *)(unsigned __int8)sub_147D70(v182, v179, v181);
    case 570LL:
      v177 = sub_339CA0();
      sub_1469A0(v177, (__int64)a2);
      return nullptr;
    case 571LL:
      v297 = *(_QWORD *)&v2559[v2557];
      v298 = sub_339CA0();
      return (__m128i *)sub_13DCA0(v298, v297);
    case 572LL:
      return (__m128i *)sub_260470(*(_DWORD *)&v2559[v2557]);
    case 573LL:
      v72 = v2557;
      v73 = v2557 + 8;
      v2557 = v73;
      v74 = *(__int64 **)&v2559[v72];
      if ( (unsigned int)v73 > 0x2F )
      {
        v2334 = (__int64 *)v2558;
        v77 = (__int64 *)(v2558 + 8);
        v2558 += 8;
        v76 = *v2334;
      }
      else
      {
        v75 = v72 + 16;
        v76 = *(_QWORD *)&v2559[v73];
        v2557 = v75;
        if ( (unsigned int)v75 <= 0x2F )
        {
          v77 = (__int64 *)&v2559[v75];
          v2557 = v72 + 24;
          goto LABEL_64;
        }
        v77 = (__int64 *)v2558;
      }
      v2558 = (char *)(v77 + 1);
LABEL_64:
      sub_32BAA0((__int64)v2555, v76, *v77);
      v78 = *(_QWORD *)v2555;
      v79 = _mm_loadu_si128((const __m128i *)&v2555[8]);
      memset(v2555, 0, 24);
      v80 = *v74;
      if ( *v74 )
      {
        v2550 = v79;
        v74[1] = 0;
        qfree(v80);
        v79 = _mm_load_si128(&v2550);
      }
      *v74 = v78;
      *(__m128i *)(v74 + 1) = v79;
      v81 = *(_QWORD *)v2555;
      if ( *(_QWORD *)v2555 )
      {
LABEL_67:
        *(_QWORD *)&v2555[8] = 0;
        qfree(v81);
      }
      return nullptr;
    case 574LL:
      v70 = v2557 + 8;
      v71 = (__int64 *)&v2559[v70];
      if ( (unsigned int)v70 > 0x2F )
        v71 = (__int64 *)v2558;
      return (__m128i *)(unsigned __int8)sub_33DF40(*(_QWORD *)&v2559[v2557], *v71);
    case 575LL:
      v224 = v2557 + 8;
      v225 = (__int64 *)&v2559[v224];
      if ( (unsigned int)v224 > 0x2F )
        v225 = (__int64 *)v2558;
      return (__m128i *)(int)sub_33E110(*(_QWORD *)&v2559[v2557], *v225);
    case 576LL:
      v68 = v2557 + 8;
      v69 = &v2559[v68];
      if ( (unsigned int)v68 > 0x2F )
        v69 = v2558;
      return (__m128i *)(unsigned __int8)sub_395D60(
                                           *(_QWORD *)&v2559[v2557],
                                           *(_DWORD *)v69 != 0,
                                           *(double *)a7.m128_u64,
                                           v2557,
                                           v68,
                                           a5);
    case 577LL:
      v295 = v2557 + 8;
      v296 = &v2559[v295];
      if ( (unsigned int)v295 > 0x2F )
        v296 = v2558;
      sub_395CC0(*(_QWORD *)&v2559[v2557], *(_DWORD *)v296 != 0, v2557, v295, a5, *(double *)a7.m128_u64);
      return nullptr;
    case 578LL:
      v244 = v2557 + 8;
      v245 = &v2559[v244];
      if ( (unsigned int)v244 > 0x2F )
        v245 = v2558;
      sub_38F620(*(_QWORD *)&v2559[v2557], *(_DWORD *)v245 != 0, v2557);
      return nullptr;
    case 579LL:
      v287 = v2557;
      v288 = v2557 + 8;
      v2557 = v288;
      v289 = *(_QWORD *)&v2559[v287];
      if ( (unsigned int)v288 > 0x2F )
      {
        v2349 = v2558;
        v292 = v2558 + 8;
        v2558 += 8;
        v291 = *(__int64 **)v2349;
      }
      else
      {
        v290 = v287 + 16;
        v291 = *(__int64 **)&v2559[v288];
        v2557 = v290;
        if ( (unsigned int)v290 <= 0x2F )
        {
          v292 = &v2559[v290];
          v2557 = v287 + 24;
          goto LABEL_261;
        }
        v292 = v2558;
      }
      v2558 = v292 + 8;
LABEL_261:
      v293 = *(_DWORD *)v292;
      v294 = *v291;
      *(_QWORD *)v2555 = v294;
      if ( v294 )
        ++*(_DWORD *)(v294 + 104);
      sub_390360(v289, (__int64 *)v2555, v293 != 0);
      sub_140140((__int64 **)v2555);
      return nullptr;
    case 580LL:
      return (__m128i *)sub_38C8B0(*(_QWORD *)&v2559[v2557]);
    case 581LL:
      return (__m128i *)(int)sub_3ACC00(*(_QWORD *)&v2559[v2557]);
    case 582LL:
      sub_38F4D0(*(_QWORD *)&v2559[v2557]);
      return nullptr;
    case 583LL:
      v273 = v2557 + 8;
      v274 = &v2559[v273];
      if ( (unsigned int)v273 > 0x2F )
        v274 = v2558;
      return (__m128i *)(unsigned __int8)sub_38B430(*(_QWORD *)&v2559[v2557], *(unsigned int *)v274);
    case 584LL:
      v149 = v2557 + 8;
      v150 = &v2559[v149];
      if ( (unsigned int)v149 > 0x2F )
        v150 = v2558;
      return (__m128i *)(unsigned __int8)sub_38B490(*(_QWORD *)&v2559[v2557], *(unsigned int *)v150);
    case 585LL:
      v234 = v2557 + 8;
      v235 = (__int64 *)&v2559[v234];
      if ( (unsigned int)v234 > 0x2F )
        v235 = (__int64 *)v2558;
      return (__m128i *)(unsigned __int8)sub_398E10(*(_QWORD *)&v2559[v2557], *v235, v2557, v234, a5);
    case 586LL:
      v226 = v2557;
      v227 = v2557 + 8;
      v228 = *(_QWORD *)&v2559[v2557];
      if ( (unsigned int)v227 > 0x2F )
      {
        v2346 = (__int64 *)v2558;
        v2347 = v2558 + 8;
        v2558 += 8;
        v230 = *v2346;
LABEL_2052:
        v2348 = (const char **)v2347;
        v233 = v2347 + 8;
        v2558 = v233;
        v232 = *v2348;
        return (__m128i *)(unsigned __int8)sub_3976F0(v228, v230, v232, *(_DWORD *)v233 != 0, *(double *)a7.m128_u64);
      }
      v229 = v2557 + 16;
      v230 = *(_QWORD *)&v2559[v227];
      v2557 = v229;
      if ( (unsigned int)v229 > 0x2F )
      {
        v2347 = v2558;
        goto LABEL_2052;
      }
      v231 = v226 + 24;
      v232 = *(const char **)&v2559[v229];
      if ( (unsigned int)v231 > 0x2F )
        v233 = v2558;
      else
        v233 = &v2559[v231];
      return (__m128i *)(unsigned __int8)sub_3976F0(v228, v230, v232, *(_DWORD *)v233 != 0, *(double *)a7.m128_u64);
    case 587LL:
      v185 = v2557 + 8;
      v186 = &v2559[v185];
      if ( (unsigned int)v185 > 0x2F )
        v186 = v2558;
      return (__m128i *)(unsigned __int8)sub_395DB0(*(_QWORD *)&v2559[v2557], *(_QWORD **)v186, *(double *)a7.m128_u64);
    case 588LL:
      v183 = v2557 + 8;
      v184 = (__int64 *)&v2559[v183];
      if ( (unsigned int)v183 > 0x2F )
        v184 = (__int64 *)v2558;
      return (__m128i *)(unsigned __int8)sub_399640(*(_QWORD *)&v2559[v2557], *v184);
    case 589LL:
      v281 = v2557;
      v282 = v2557 + 8;
      v2557 = v282;
      v283 = *(_QWORD *)&v2559[v281];
      if ( (unsigned int)v282 > 0x2F )
      {
        v2332 = (__int64 *)v2558;
        v286 = v2558 + 8;
        v2558 += 8;
        v285 = *v2332;
      }
      else
      {
        v284 = v281 + 16;
        v285 = *(_QWORD *)&v2559[v282];
        if ( (unsigned int)v284 > 0x2F )
          v286 = v2558;
        else
          v286 = &v2559[v284];
      }
      return (__m128i *)(unsigned __int8)sub_399630(v283, v285, *(_BYTE **)v286, *(double *)a7.m128_u64);
    case 590LL:
      v216 = v2557 + 8;
      v217 = (__int64 *)&v2559[v216];
      if ( (unsigned int)v216 > 0x2F )
        v217 = (__int64 *)v2558;
      return (__m128i *)(unsigned __int8)sub_399910(*(_QWORD *)&v2559[v2557], *v217, *(double *)a7.m128_u64);
    case 591LL:
      v265 = v2557 + 8;
      v266 = (__int64 **)&v2559[v265];
      if ( (unsigned int)v265 > 0x2F )
        v266 = (__int64 **)v2558;
      return (__m128i *)(unsigned __int8)sub_38F780(*(_QWORD *)&v2559[v2557], *v266);
    case 592LL:
      v96 = v2557;
      v97 = v2557 + 8;
      v2557 = v97;
      v98 = *(_QWORD *)&v2559[v96];
      if ( (unsigned int)v97 > 0x2F )
      {
        v2331 = (__int64 **)v2558;
        v101 = (const char **)(v2558 + 8);
        v2558 += 8;
        v100 = *v2331;
      }
      else
      {
        v99 = v96 + 16;
        v100 = *(__int64 **)&v2559[v97];
        if ( (unsigned int)v99 > 0x2F )
          v101 = (const char **)v2558;
        else
          v101 = (const char **)&v2559[v99];
      }
      return (__m128i *)(unsigned __int8)sub_38F6B0(v98, v100, *v101);
    case 593LL:
      v251 = v2557 + 8;
      v252 = (__int64 *)&v2559[v251];
      if ( (unsigned int)v251 > 0x2F )
        v252 = (__int64 *)v2558;
      return (__m128i *)(unsigned __int8)sub_3961F0(*(_QWORD *)&v2559[v2557], *v252);
    case 594LL:
      v222 = v2557 + 8;
      v223 = (__int64 *)&v2559[v222];
      if ( (unsigned int)v222 > 0x2F )
        v223 = (__int64 *)v2558;
      return (__m128i *)(unsigned __int8)sub_395FB0(*(_QWORD *)&v2559[v2557], *v223, v2557, v222, a5, (__int64)a6);
    case 595LL:
      v238 = v2557;
      v239 = v2557 + 8;
      v2557 = v239;
      v240 = *(_QWORD *)&v2559[v238];
      if ( (unsigned int)v239 > 0x2F )
      {
        v2320 = (__int64 *)v2558;
        v243 = (__int64 *)(v2558 + 8);
        v2558 += 8;
        v242 = *v2320;
      }
      else
      {
        v241 = v238 + 16;
        v242 = *(_QWORD *)&v2559[v239];
        if ( (unsigned int)v241 > 0x2F )
          v243 = (__int64 *)v2558;
        else
          v243 = (__int64 *)&v2559[v241];
      }
      return (__m128i *)(unsigned __int8)sub_395F30(v240, v242, *v243, *(double *)a7.m128_u64);
    case 596LL:
      v189 = v2557;
      v190 = v2557 + 8;
      v2557 = v190;
      v191 = *(_QWORD *)&v2559[v189];
      if ( (unsigned int)v190 > 0x2F )
      {
        v2319 = (__int64 *)v2558;
        v194 = (int *)(v2558 + 8);
        v2558 += 8;
        v193 = *v2319;
      }
      else
      {
        v192 = v189 + 16;
        v193 = *(_QWORD *)&v2559[v190];
        if ( (unsigned int)v192 > 0x2F )
          v194 = (int *)v2558;
        else
          v194 = (int *)&v2559[v192];
      }
      return (__m128i *)(unsigned __int8)sub_396A30(v191, v193, *v194);
    case 597LL:
      v143 = v2557;
      v2557 += 8;
      v144 = *(_QWORD *)&v2559[v143];
      if ( v143 + 8 > 0x2F )
        v2558 += 8;
      return (__m128i *)(unsigned __int8)sub_396F80(v144);
    case 598LL:
      v141 = v2557 + 8;
      v142 = (unsigned __int64 *)&v2559[v141];
      if ( (unsigned int)v141 > 0x2F )
        v142 = (unsigned __int64 *)v2558;
      return (__m128i *)(unsigned __int8)sub_3978A0(*(_QWORD *)&v2559[v2557], *v142);
    case 599LL:
      v139 = v2557 + 8;
      v140 = (__int64 *)&v2559[v139];
      if ( (unsigned int)v139 > 0x2F )
        v140 = (__int64 *)v2558;
      return (__m128i *)(unsigned __int8)sub_397200(
                                           *(_QWORD *)&v2559[v2557],
                                           *v140,
                                           *(double *)a7.m128_u64,
                                           v2557,
                                           v139,
                                           a5,
                                           a6);
    case 600LL:
      v137 = v2557 + 8;
      v138 = (__int32 *)&v2559[v137];
      if ( (unsigned int)v137 > 0x2F )
        v138 = (__int32 *)v2558;
      return (__m128i *)(unsigned __int8)sub_39B1E0(*(_QWORD *)&v2559[v2557], *v138);
    case 601LL:
      v171 = v2557;
      v172 = v2557 + 8;
      v2557 = v172;
      v173 = *(_QWORD *)&v2559[v171];
      if ( (unsigned int)v172 > 0x2F )
      {
        v2316 = v2558;
        v176 = (int *)(v2558 + 8);
        v2558 += 8;
        v175 = *(unsigned int *)v2316;
      }
      else
      {
        v174 = v171 + 16;
        v175 = *(unsigned int *)&v2559[v172];
        if ( (unsigned int)v174 > 0x2F )
          v176 = (int *)v2558;
        else
          v176 = (int *)&v2559[v174];
      }
      return (__m128i *)(unsigned __int8)sub_39A7C0(v173, v175, *v176);
    case 602LL:
      return (__m128i *)(unsigned __int8)sub_38C250(*(_QWORD *)&v2559[v2557]);
    case 603LL:
      v165 = v2557;
      v166 = v2557 + 8;
      v2557 = v166;
      v167 = *(_QWORD *)&v2559[v165];
      if ( (unsigned int)v166 > 0x2F )
      {
        v2337 = (unsigned __int64 *)v2558;
        v170 = (int *)(v2558 + 8);
        v2558 += 8;
        v169 = *v2337;
      }
      else
      {
        v168 = v165 + 16;
        v169 = *(_QWORD *)&v2559[v166];
        if ( (unsigned int)v168 > 0x2F )
          v170 = (int *)v2558;
        else
          v170 = (int *)&v2559[v168];
      }
      return (__m128i *)(int)sub_38B690(v167, v169, *v170);
    case 604LL:
      v163 = v2557 + 8;
      v164 = (__m128i **)&v2559[v163];
      if ( (unsigned int)v163 > 0x2F )
        v164 = (__m128i **)v2558;
      return (__m128i *)(unsigned __int8)sub_38F870(*(_QWORD *)&v2559[v2557], *v164);
    case 605LL:
      return (__m128i *)(unsigned __int8)sub_38F9E0(*(_QWORD *)&v2559[v2557]);
    case 606LL:
      return (__m128i *)(unsigned __int8)sub_38FB60(*(_QWORD *)&v2559[v2557]);
    case 607LL:
      v82 = v2557 + 8;
      v83 = (int *)&v2559[v82];
      if ( (unsigned int)v82 > 0x2F )
        v83 = (int *)v2558;
      return (__m128i *)(unsigned __int8)sub_3A0050(*(_QWORD *)&v2559[v2557], *v83, a7);
    case 608LL:
      return (__m128i *)(unsigned __int8)sub_3A0120(*(_QWORD *)&v2559[v2557]);
    case 609LL:
      return (__m128i *)(unsigned __int8)sub_3A0380(*(_QWORD *)&v2559[v2557], a7);
    case 610LL:
      return (__m128i *)(unsigned __int8)sub_3A0450(*(_QWORD *)&v2559[v2557], a7);
    case 611LL:
      return (__m128i *)(unsigned __int8)sub_3A04A0(*(_QWORD *)&v2559[v2557], a7);
    case 612LL:
      v47 = v2557 + 8;
      v48 = &v2559[v47];
      if ( (unsigned int)v47 > 0x2F )
        v48 = v2558;
      return (__m128i *)(unsigned __int8)sub_38FE50(*(_QWORD *)&v2559[v2557], *(_DWORD *)v48 != 0);
    case 613LL:
      v40 = v2557 + 8;
      v41 = &v2559[v40];
      if ( (unsigned int)v40 > 0x2F )
        v41 = v2558;
      return (__m128i *)(unsigned __int8)sub_38FF40(*(_QWORD *)&v2559[v2557], *(_DWORD *)v41 != 0);
    case 614LL:
      v38 = v2557 + 8;
      v39 = &v2559[v38];
      if ( (unsigned int)v38 > 0x2F )
        v39 = v2558;
      return (__m128i *)(unsigned __int8)sub_396DF0(
                                           *(_QWORD *)&v2559[v2557],
                                           *(_DWORD *)v39 != 0,
                                           *(double *)a7.m128_u64);
    case 615LL:
      v56 = v2557;
      v57 = v2557 + 8;
      v2557 = v57;
      v58 = *(_QWORD *)&v2559[v56];
      if ( (unsigned int)v57 > 0x2F )
      {
        v2312 = (__int64 *)v2558;
        v61 = (__int64 *)(v2558 + 8);
        v2558 += 8;
        v60 = *v2312;
      }
      else
      {
        v59 = v56 + 16;
        v60 = *(_QWORD *)&v2559[v57];
        v61 = (__int64 *)&v2559[v59];
        if ( (unsigned int)v59 > 0x2F )
          v61 = (__int64 *)v2558;
      }
      return (__m128i *)(int)sub_390CB0(v58, v60, *v61, v57, a5, (__int64)a6);
    case 616LL:
      v36 = v2557 + 8;
      v37 = (__int64 *)&v2559[v36];
      if ( (unsigned int)v36 > 0x2F )
        v37 = (__int64 *)v2558;
      return (__m128i *)sub_25A1A0(*(_QWORD *)&v2559[v2557], *v37, *(double *)a7.m128_u64);
    case 617LL:
      v117 = v2557;
      v118 = v2557 + 8;
      v2557 = v118;
      v119 = *(_QWORD *)&v2559[v117];
      if ( (unsigned int)v118 > 0x2F )
      {
        v2317 = (__int64 *)v2558;
        v122 = (__int64 *)(v2558 + 8);
        v2558 += 8;
        v121 = *v2317;
      }
      else
      {
        v120 = v117 + 16;
        v121 = *(_QWORD *)&v2559[v118];
        if ( (unsigned int)v120 > 0x2F )
          v122 = (__int64 *)v2558;
        else
          v122 = (__int64 *)&v2559[v120];
      }
      return (__m128i *)sub_69930(v119, v121, *v122, v118, *(double *)a7.m128_u64);
    case 618LL:
      v62 = v2557;
      v63 = v2557 + 8;
      v2557 = v63;
      v64 = *(_QWORD *)&v2559[v62];
      if ( (unsigned int)v63 > 0x2F )
      {
        v2315 = (int *)v2558;
        v67 = (int *)(v2558 + 8);
        v2558 += 8;
        v66 = *v2315;
      }
      else
      {
        v65 = v62 + 16;
        v66 = *(_DWORD *)&v2559[v63];
        if ( (unsigned int)v65 > 0x2F )
          v67 = (int *)v2558;
        else
          v67 = (int *)&v2559[v65];
      }
      return (__m128i *)(unsigned __int8)sub_69F20(v64, v66, *v67);
    case 619LL:
      sub_255F70(*(_QWORD *)&v2559[v2557]);
      return nullptr;
    case 622LL:
      v42 = v2557 + 8;
      v43 = *(_QWORD *)&v2559[v2557];
      if ( (unsigned int)v42 > 0x2F )
      {
        v2310 = (__int64 *)v2558;
        v2535 = (__int64 *)(v2558 + 8);
        v2558 += 8;
        v45 = *v2310;
      }
      else
      {
        v44 = v2557 + 16;
        v45 = *(_QWORD *)&v2559[v42];
        v2557 = v44;
        if ( (unsigned int)v44 <= 0x2F )
        {
          v46 = *(_QWORD *)&v2559[v44];
          return (__m128i *)(unsigned __int8)sub_319BD0(v43, v45, v46, *(double *)a7.m128_u64);
        }
        v2535 = (__int64 *)v2558;
      }
      v2558 = (char *)(v2535 + 1);
      v46 = *v2535;
      return (__m128i *)(unsigned __int8)sub_319BD0(v43, v45, v46, *(double *)a7.m128_u64);
    case 623LL:
      v51 = v2557 + 8;
      v52 = *(_QWORD *)&v2559[v2557];
      if ( (unsigned int)v51 > 0x2F )
      {
        v2313 = (__int64 *)v2558;
        v2536 = (__int64 *)(v2558 + 8);
        v2558 += 8;
        v54 = *v2313;
      }
      else
      {
        v53 = v2557 + 16;
        v54 = *(_QWORD *)&v2559[v51];
        v2557 = v53;
        if ( (unsigned int)v53 <= 0x2F )
        {
          v55 = *(_QWORD *)&v2559[v53];
          return (__m128i *)(unsigned __int8)sub_319C40(v52, v54, v55, *(double *)a7.m128_u64);
        }
        v2536 = (__int64 *)v2558;
      }
      v2558 = (char *)(v2536 + 1);
      v55 = *v2536;
      return (__m128i *)(unsigned __int8)sub_319C40(v52, v54, v55, *(double *)a7.m128_u64);
    case 624LL:
      v49 = v2557 + 8;
      v50 = (__int64 *)&v2559[v49];
      if ( (unsigned int)v49 > 0x2F )
        v50 = (__int64 *)v2558;
      return (__m128i *)(unsigned __int8)sub_813F0(*(__int64 **)&v2559[v2557], *v50);
    case 625LL:
      v30 = v2557;
      v31 = v2557 + 8;
      v2557 = v31;
      v32 = *(_QWORD *)&v2559[v30];
      if ( (unsigned int)v31 > 0x2F )
      {
        v2311 = (__int64 *)v2558;
        v35 = (__int64 *)(v2558 + 8);
        v2558 += 8;
        v34 = *v2311;
      }
      else
      {
        v33 = v30 + 16;
        v34 = *(_QWORD *)&v2559[v31];
        if ( (unsigned int)v33 > 0x2F )
          v35 = (__int64 *)v2558;
        else
          v35 = (__int64 *)&v2559[v33];
      }
      return (__m128i *)sub_86880(v32, v34, *v35, v31, *(double *)a7.m128_u64);
    case 626LL:
      v28 = v2557 + 8;
      v29 = (__int64 *)&v2559[v28];
      if ( (unsigned int)v28 > 0x2F )
        v29 = (__int64 *)v2558;
      sub_31ECF0(*(_QWORD *)&v2559[v2557], *v29, v2557, v28, a5, (int)a6);
      return nullptr;
    case 627LL:
      v26 = v2557 + 8;
      v27 = (__int64 *)&v2559[v26];
      if ( (unsigned int)v26 > 0x2F )
        v27 = (__int64 *)v2558;
      return (__m128i *)(unsigned __int8)sub_396620(*(_QWORD *)&v2559[v2557], *v27, *(double *)a7.m128_u64);
    default:
      return nullptr;
  }
}

