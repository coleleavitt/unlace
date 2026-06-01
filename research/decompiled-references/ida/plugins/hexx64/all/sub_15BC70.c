__int64 __fastcall sub_15BC70(
        unsigned int *a1,
        unsigned __int8 *a2,
        __int64 m128i_i64,
        __int64 a4,
        int **a5,
        __m128 **a6,
        __m128i a7,
        __m128 a8,
        unsigned int a9)
{
  unsigned int *v9; // r14
  int v10; // r12d
  __int128 v11; // rdi
  unsigned __int8 v12; // bl
  unsigned int v13; // r8d
  __int64 v14; // rax
  __int32 v15; // r9d
  int v16; // eax
  unsigned __int64 *v17; // rbx
  unsigned int *v18; // rbx
  __int64 v19; // r12
  char *v20; // r15
  int v21; // eax
  __int64 v22; // r12
  int v23; // ebx
  __int64 v24; // rsi
  __int64 (*v25)(); // rax
  int v26; // esi
  char v27; // al
  int v28; // eax
  __int64 v29; // rdi
  char v30; // r15
  __m128 **v31; // rax
  __m128 **v32; // rax
  __m128 **v33; // rax
  __m128 **v34; // rax
  _DWORD *v35; // rax
  unsigned __int64 *v36; // r15
  __int64 v37; // rax
  unsigned __int64 *v38; // rbx
  unsigned int v39; // eax
  __int64 result; // rax
  __m128 **v41; // rax
  __m128 **v42; // rax
  __int64 v43; // rbx
  _DWORD *v44; // rax
  int v45; // ecx
  char v46; // dl
  char v47; // al
  char v48; // al
  _DWORD *v49; // rax
  __int128 v50; // rdi
  unsigned __int64 *v51; // r13
  bool v52; // zf
  __int64 v53; // rcx
  unsigned __int64 *v54; // r12
  unsigned __int64 *v55; // r13
  int v56; // ecx
  __int64 v57; // r8
  char v58; // al
  __int64 v59; // rdx
  int v60; // ecx
  __int64 v61; // rbx
  unsigned int *v62; // rbx
  _DWORD *v63; // rax
  int v64; // edx
  char v65; // al
  __int64 v66; // rbx
  int v67; // eax
  unsigned int v68; // eax
  unsigned int v69; // eax
  unsigned int v70; // eax
  unsigned int *v71; // rdi
  unsigned int v72; // edx
  __int64 v73; // rax
  char v74; // al
  unsigned int v75; // eax
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rbx
  int v80; // eax
  char *v81; // rbx
  __int64 v82; // rdx
  __int64 v83; // rcx
  unsigned int v84; // eax
  int v85; // edx
  int v86; // eax
  int v87; // eax
  __int64 v88; // rdx
  __int64 v89; // rcx
  unsigned int v90; // eax
  __int64 v91; // rax
  __int64 v92; // r13
  char *v93; // rbx
  unsigned __int64 *v94; // rbx
  unsigned __int64 *v95; // rbx
  int v96; // r9d
  char v97; // al
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 *v101; // rbx
  char v102; // al
  char v103; // bl
  __int64 v104; // rbx
  __int64 v105; // rax
  unsigned int v106; // ebx
  __m128 *v107; // rax
  unsigned int v108; // eax
  unsigned __int64 v109; // rdx
  __int64 v110; // r8
  char v111; // di
  signed int v112; // eax
  signed int v113; // edx
  __int64 v114; // rbx
  char *v115; // r15
  __m128i *v116; // rbx
  __int64 v117; // rax
  _BYTE *v118; // rdi
  char v119; // al
  _DWORD *v120; // rax
  __int64 v121; // rax
  char *v122; // rbx
  char *v123; // rsi
  char *v124; // rbx
  int v125; // eax
  unsigned int v126; // eax
  int v127; // r8d
  __int64 v128; // rdx
  __int64 v129; // rax
  int v130; // ecx
  unsigned __int64 v131; // rax
  __int32 v132; // ecx
  __int64 v133; // rdi
  int v134; // ecx
  unsigned __int64 v135; // rax
  unsigned __int64 v136; // rax
  __int64 v137; // rdx
  int v138; // edi
  char v139; // al
  __int64 v140; // rbx
  int v141; // edi
  __int64 v142; // r15
  unsigned __int8 *v143; // rax
  int *v144; // rdx
  int v145; // ecx
  int v146; // ecx
  __int64 v147; // rdx
  char *v148; // r13
  char *v149; // rdi
  unsigned __int8 *v150; // rbx
  __int64 v151; // rdx
  __int64 v152; // rcx
  char *v153; // rbx
  unsigned int v154; // eax
  __int64 v155; // rcx
  unsigned int v156; // eax
  int v157; // r13d
  __int64 v158; // r12
  __int64 v159; // rbx
  __int64 v160; // rbx
  unsigned __int8 *v161; // rax
  __int64 v162; // rcx
  __int64 v163; // rax
  unsigned int v164; // eax
  unsigned int v165; // ebx
  __int64 v166; // rax
  int v167; // eax
  __int64 v168; // rbx
  __int64 v169; // rax
  __int64 v170; // rdx
  int v171; // ecx
  __int64 v172; // rax
  unsigned __int8 *v173; // rax
  char v174; // dl
  __m128 *v175; // r9
  __m128 *v176; // r8
  __m128 **v177; // rax
  char v178; // r10
  __m128 **v179; // rax
  __m128 *v180; // r9
  __m128 **v181; // rax
  char v182; // r13
  __m128 **v183; // rax
  __m128 *v184; // r8
  __m128 **v185; // rax
  char v186; // r10
  __m128 **v187; // rax
  signed int v188; // ecx
  char *v189; // r15
  int v190; // eax
  __int64 *v191; // rcx
  bool v192; // bl
  __int64 v193; // rax
  unsigned __int64 v194; // rdx
  unsigned int v195; // edi
  unsigned int *v196; // rsi
  int v197; // r14d
  unsigned int *v198; // r8
  __int64 *v199; // rbx
  __int64 v200; // rdx
  __int64 v201; // r12
  int v202; // r14d
  __int64 *v203; // r13
  char *v204; // rbx
  unsigned int *v205; // r15
  __int64 v206; // rax
  __m128 *v207; // rdx
  char v208; // al
  __int64 v209; // rbx
  int v210; // edx
  int v211; // ecx
  __int64 v212; // rax
  __m128i *v213; // r13
  char *v214; // rax
  char *v215; // r12
  __int64 v216; // rax
  int v217; // eax
  char v218; // al
  __int64 v219; // rax
  __int32 v220; // esi
  __int32 v221; // ecx
  __int64 v222; // rcx
  unsigned int v223; // eax
  char v224; // dl
  unsigned __int64 v225; // rax
  char v226; // dl
  __int64 v227; // r12
  int v228; // eax
  int v229; // edx
  __int64 v230; // rax
  unsigned __int64 *v231; // r13
  char *v232; // rbx
  int v233; // ecx
  int v234; // ebx
  __m128i *v235; // r12
  __int64 v236; // rdx
  __int64 v237; // rax
  char *v238; // r13
  __m128 **v239; // rax
  char v240; // r10
  __m128 **v241; // rax
  __int64 v242; // r13
  unsigned __int8 *v243; // rbx
  __int64 v244; // rdx
  __int64 v245; // rcx
  int v246; // edi
  __int128 v247; // kr10_16
  char v248; // al
  unsigned int v249; // edx
  int v250; // eax
  __int64 v251; // rdi
  int v252; // r15d
  __int64 v253; // rax
  int v254; // r13d
  __int64 v255; // rdx
  int v256; // r12d
  char v257; // dl
  _QWORD *v258; // rdi
  int v259; // r8d
  __int64 v260; // rax
  unsigned int v261; // esi
  unsigned __int8 *v262; // r10
  unsigned int v263; // ebx
  _QWORD *v264; // rcx
  int v265; // edx
  __int64 v266; // rax
  _QWORD *v267; // rsi
  __int64 v268; // rax
  __int64 v269; // rax
  _DWORD *v270; // r13
  __int64 v271; // rbx
  int v272; // ecx
  unsigned __int8 *v273; // rax
  __int64 v274; // rax
  __int64 v275; // rdx
  __int64 v276; // rcx
  int v277; // r12d
  __int64 v278; // rbx
  __int64 v279; // rbx
  __int64 v280; // rdx
  __int64 v281; // rcx
  unsigned __int64 v282; // rax
  __int64 v283; // rsi
  unsigned int v284; // eax
  __int64 v285; // rax
  __int64 v286; // rax
  __int64 v287; // rax
  __int64 v288; // rsi
  unsigned __int8 *v289; // r12
  __int64 v290; // rdx
  __int64 v291; // rcx
  _QWORD *v292; // rbx
  unsigned int v293; // eax
  char v294; // al
  __int64 v295; // rdx
  unsigned __int64 *v296; // r15
  __int64 v297; // rax
  __int64 v298; // rax
  int v299; // r12d
  unsigned __int64 v300; // rbx
  __int64 v301; // r8
  int v302; // eax
  unsigned int v303; // r12d
  int v304; // r9d
  __int64 v305; // rax
  __int64 v306; // rax
  _DWORD *v307; // rdx
  unsigned int v308; // r13d
  unsigned int v309; // r12d
  __int64 v310; // rbx
  unsigned __int64 v311; // rax
  _DWORD *v312; // rax
  char v313; // al
  unsigned int *v314; // rdx
  __int64 v315; // rbx
  int v316; // eax
  __m128 *v317; // rax
  _DWORD *v318; // rax
  __int64 v319; // rbx
  char v320; // al
  __int64 v321; // rbx
  char v322; // al
  __int64 v323; // rdx
  __int64 v324; // rcx
  __int64 v325; // rbx
  unsigned __int8 *v326; // rsi
  unsigned __int8 *v327; // rbx
  __int64 v328; // rdx
  __int64 v329; // rcx
  __int64 v330; // r12
  int v331; // r13d
  __int64 v332; // rax
  char *v333; // r15
  unsigned __int64 *v334; // rbx
  unsigned __int8 *v335; // rbx
  unsigned int *v336; // r13
  unsigned int v337; // r15d
  int i; // r12d
  char v339; // al
  unsigned __int8 *v340; // rax
  __int64 v341; // rax
  __int64 v342; // rax
  unsigned int v343; // r13d
  __int64 v344; // rbx
  char v345; // al
  unsigned __int64 *v346; // r15
  __int64 v347; // rdx
  __int64 v348; // rcx
  char v349; // al
  __int64 v350; // r13
  __int64 v351; // rbx
  __int64 v352; // rax
  int v353; // ecx
  unsigned __int64 v354; // rbx
  char v355; // al
  int *v356; // rax
  int v357; // edx
  int *v358; // rbx
  __int64 v359; // rax
  __int64 v360; // r13
  __int64 v361; // rdi
  unsigned int v362; // edx
  int v363; // eax
  _DWORD *v364; // rax
  unsigned __int8 *v365; // rdi
  __int64 v366; // rbx
  __int64 v367; // rdx
  __int64 v368; // rcx
  unsigned __int8 *v369; // rsi
  char *v370; // rbx
  __int64 v371; // rdx
  __int64 v372; // rcx
  __int64 v373; // rdx
  void *v374; // rax
  int v375; // r12d
  __int64 *v376; // rdi
  unsigned __int8 *v377; // rdx
  int v378; // ecx
  __int64 v379; // r13
  char v380; // al
  __int64 v381; // rdx
  __m128 *v382; // r9
  __m128 **v383; // rax
  __m128 **v384; // rdx
  __m128 **v385; // rax
  __m128 **v386; // rsi
  __int64 v387; // rax
  __int64 v388; // rbx
  __int64 v389; // r12
  unsigned __int64 *v390; // rbx
  __m128 *v391; // r10
  __m128 **v392; // rax
  __m128 **v393; // rsi
  unsigned int v394; // eax
  char v395; // al
  __int64 v396; // r12
  int v397; // edi
  int v398; // eax
  __int64 v399; // rax
  __int64 v400; // rax
  unsigned int v401; // eax
  __int64 v402; // rax
  unsigned __int64 v403; // rax
  __m128 *v404; // r10
  __m128 **v405; // rax
  __m128 *v406; // r9
  __m128 **v407; // rax
  __m128 *v408; // r9
  __m128 **v409; // rax
  char v410; // r15
  __m128 *v411; // r9
  __m128 **v412; // rax
  __m128 *v413; // r11
  __m128 **v414; // rax
  __m128 *v415; // r11
  __m128 **v416; // rax
  __m128 **v417; // rdx
  __m128 **v418; // rax
  __int64 v419; // rax
  char *v420; // rax
  char v421; // dl
  __int64 v422; // rcx
  __int64 v423; // rdi
  int v424; // ecx
  char v425; // dl
  unsigned __int64 v426; // r13
  unsigned int v427; // edx
  __int64 v428; // rdx
  unsigned __int64 *v429; // rbx
  unsigned __int8 *v430; // rbx
  unsigned int v431; // eax
  _DWORD *v432; // rax
  __m128i *v433; // rdx
  __int64 v434; // rcx
  __int64 v435; // rax
  __int64 v436; // rax
  __int64 v437; // rbx
  int v438; // eax
  int v439; // eax
  unsigned __int8 *v440; // rsi
  unsigned int v441; // ebx
  unsigned __int8 *v442; // r13
  __int64 v443; // rdx
  __int64 v444; // rcx
  unsigned __int64 v445; // rax
  __int64 v446; // rcx
  __int64 *v447; // rbx
  unsigned __int8 *v448; // rsi
  char *v449; // rbx
  unsigned __int8 *v450; // r13
  unsigned __int8 *v451; // r12
  __int128 v452; // rdi
  __int128 v453; // rdi
  char *v454; // rbx
  __int64 v455; // rdx
  __int64 v456; // rcx
  __int64 v457; // rdx
  __int64 v458; // rcx
  __int64 v459; // rbx
  __int64 v460; // rax
  char *v461; // rbx
  __int64 v462; // rax
  unsigned int *v463; // rax
  __int64 v464; // rdx
  __int64 v465; // rax
  __int64 v466; // rbx
  __int64 v467; // rdx
  __int64 v468; // rcx
  char *v469; // rbx
  __int64 v470; // rdx
  __int64 v471; // rcx
  __int64 v472; // rdx
  int v473; // r13d
  __int64 v474; // r12
  __int64 v475; // rbx
  __int64 v476; // rdi
  int v477; // eax
  __int64 v478; // r8
  __int64 v479; // r9
  int v480; // ecx
  unsigned __int64 v481; // rdx
  __int64 v482; // rdi
  int v483; // edx
  __int64 v484; // rcx
  int v485; // eax
  _DWORD *v486; // rax
  __int64 v487; // rbx
  __int64 v488; // rax
  __int64 v489; // rdx
  int v490; // ecx
  __int64 v491; // rax
  __int64 v492; // rax
  __int128 v493; // rdi
  char *v494; // r15
  int v495; // eax
  __int64 v496; // rbx
  __int64 v497; // rbx
  int v498; // edx
  int v499; // esi
  __int64 v500; // rax
  unsigned __int64 v501; // rax
  int v502; // ecx
  __int64 v503; // rdx
  __int64 v504; // rax
  _DWORD *v505; // rsi
  __int64 v506; // rdx
  __int64 v507; // rcx
  __int64 v508; // rdi
  int v509; // ebx
  unsigned __int8 *v510; // rax
  __int64 v511; // rax
  __int64 v512; // r12
  __int64 v513; // rbx
  __int64 v514; // rax
  int v515; // ecx
  __int64 v516; // rax
  __int64 v517; // rax
  __int64 v518; // r8
  __int64 v519; // r9
  bool v520; // al
  unsigned int v521; // eax
  unsigned int *v522; // rax
  __int64 v523; // rax
  char v524; // r15
  __m128 **v525; // rax
  _DWORD *v526; // r11
  __int64 *v527; // r13
  __int64 v528; // r11
  char v529; // r15
  char v530; // al
  _DWORD *v531; // r11
  __int64 *v532; // r13
  __int64 v533; // r11
  char v534; // al
  char v535; // r10
  __m128 **v536; // rax
  __m128 **v537; // rsi
  _DWORD *v538; // r15
  __int64 *v539; // r13
  char v540; // al
  char v541; // r10
  _DWORD *v542; // r15
  __int64 *v543; // r13
  char v544; // al
  unsigned int v545; // eax
  unsigned int v546; // r12d
  int v547; // eax
  signed int v548; // edi
  int v549; // edx
  signed int v550; // esi
  int v551; // eax
  int v552; // ecx
  int v553; // ecx
  __int64 v554; // r13
  __int64 v555; // rax
  __int64 v556; // rax
  int v557; // eax
  int v558; // eax
  char *v559; // r15
  int v560; // ebx
  __int64 v561; // rdx
  __int64 v562; // rcx
  unsigned int *v563; // rax
  __int64 v564; // rdx
  __int64 v565; // rbx
  __int64 v566; // rax
  unsigned __int8 *v567; // rsi
  char *v568; // rbx
  __int64 v569; // rdx
  __int64 v570; // rcx
  int v571; // eax
  __int64 v572; // rdx
  unsigned __int64 v573; // r12
  int v574; // ecx
  __int64 v575; // rdi
  __int64 v576; // rax
  int v577; // eax
  char *v578; // r12
  int v579; // esi
  unsigned __int64 v580; // rcx
  __int64 v581; // rax
  __int64 v582; // rdx
  __int64 v583; // rcx
  __int64 v584; // rdi
  char *v585; // rbx
  __int64 v586; // rax
  __int64 v587; // rax
  __int64 v588; // rdi
  char v589; // r10
  __m128 **v590; // rax
  __m128 **v591; // rsi
  _DWORD *v592; // r11
  __int64 *v593; // r13
  __int64 v594; // r11
  char v595; // al
  char v596; // r10
  _DWORD *v597; // r11
  __int64 *v598; // r13
  __int64 v599; // r11
  char v600; // al
  __int64 v601; // rax
  unsigned __int64 v602; // rax
  unsigned __int64 v603; // rdi
  unsigned __int64 v604; // rax
  __int64 v605; // rax
  char v606; // r12
  int v607; // eax
  char v608; // al
  __int64 v609; // r12
  unsigned __int8 *v610; // rbx
  unsigned __int8 *v611; // r12
  __int64 v612; // rdx
  __int64 v613; // rcx
  char *v614; // rbx
  __int64 v615; // rsi
  __m128 **v616; // rax
  _DWORD *v617; // r11
  char v618; // al
  __int64 v619; // r11
  char v620; // al
  _DWORD *v621; // r11
  char v622; // al
  __int64 v623; // r11
  char v624; // al
  __int64 v625; // rax
  unsigned int v626; // edx
  bool v627; // cc
  __int64 v628; // rbx
  int v629; // ecx
  __int64 v630; // rdx
  __int64 v631; // rbx
  int v632; // edx
  __int64 v633; // rdx
  __int64 v634; // rax
  int v635; // r13d
  int v636; // r12d
  __int64 v637; // rdx
  unsigned __int64 *v638; // r13
  unsigned int v639; // eax
  __int64 v640; // r8
  __int64 v641; // rax
  __int64 v642; // rax
  char *v643; // rbx
  __int64 v644; // rax
  char v645; // dl
  __int64 v646; // rax
  int v647; // eax
  _DWORD *v648; // r15
  __int64 *v649; // r13
  char v650; // al
  __int64 v651; // r13
  unsigned __int64 v652; // r12
  __int64 v653; // rbx
  __int64 v654; // rbx
  __int64 v655; // r13
  __int64 v656; // rdx
  __int64 v657; // rcx
  __int64 v658; // rbx
  unsigned int v659; // eax
  __int64 v660; // rdx
  __int64 v661; // rcx
  __int64 v662; // rbx
  unsigned int v663; // eax
  int v664; // ebx
  __m128i v665; // xmm0
  _DWORD *v666; // r15
  __int64 *v667; // r13
  char v668; // al
  int v669; // eax
  int v670; // ecx
  __int64 v671; // rsi
  _QWORD *v672; // rcx
  unsigned __int64 v673; // rbx
  unsigned __int64 *v674; // r13
  int v675; // r8d
  _QWORD *v676; // rax
  char *v677; // rbx
  unsigned int v678; // eax
  __m128 **v679; // rax
  _DWORD *v680; // r11
  __int64 v681; // r11
  char v682; // r15
  __int64 v683; // r10
  char v684; // al
  char *v685; // rbx
  __int64 v686; // rdx
  __int64 v687; // rcx
  _DWORD *v688; // r11
  __int64 *v689; // r13
  __int64 v690; // r11
  char v691; // al
  char v692; // r10
  __int64 v693; // rax
  int v694; // esi
  unsigned __int64 v695; // rax
  int v696; // eax
  __int64 v697; // rdx
  __int64 v698; // rcx
  unsigned __int64 v699; // r15
  void *v700; // r12
  __int64 v701; // rdi
  void *v702; // rax
  __int64 *v703; // r15
  int v704; // eax
  int v705; // edx
  _DWORD *v706; // rdi
  __int64 v707; // rdx
  __int64 v708; // rcx
  unsigned __int8 *v709; // rsi
  __int64 v710; // rax
  char *v711; // rbx
  int v712; // eax
  char v713; // r13
  __m128 **v714; // rax
  __m128 **v715; // rsi
  _DWORD *v716; // r11
  __int64 *v717; // r13
  __int64 v718; // r11
  char v719; // al
  _DWORD *v720; // r11
  __int64 v721; // r11
  char v722; // al
  __int64 v723; // rcx
  __int64 v724; // rax
  __int64 v725; // rax
  __int64 v726; // rdx
  __int64 v727; // rdi
  int v728; // ecx
  __int64 v729; // rbx
  unsigned int v730; // eax
  _DWORD *v731; // rdi
  __int64 v732; // rax
  __int64 v733; // rbx
  unsigned int *v734; // rdx
  char *v735; // rsi
  char *v736; // rbx
  _DWORD *v737; // r11
  __int64 *v738; // r13
  __int64 v739; // r11
  char v740; // al
  _DWORD *v741; // r11
  __int64 *v742; // r13
  __int64 v743; // r11
  char v744; // al
  __int64 v745; // rax
  unsigned __int64 *v746; // r15
  __int64 v747; // rbx
  _DWORD *v748; // rcx
  int v749; // eax
  __int64 v750; // rcx
  __int64 v751; // rdx
  unsigned __int64 *v752; // rbx
  int *v753; // r9
  int *v754; // r8
  char v755; // al
  _DWORD *v756; // r9
  unsigned int v757; // eax
  unsigned __int64 v758; // rax
  __int64 v759; // rcx
  __int128 v760; // rdi
  __int128 v761; // rdi
  _BYTE *v762; // rsi
  _BYTE *v763; // rax
  char v764; // dl
  _BYTE *v765; // rbx
  unsigned int v766; // eax
  char *v767; // rsi
  char *v768; // rbx
  __int64 v769; // rax
  char v770; // [rsp+10h] [rbp-180h]
  char v771; // [rsp+10h] [rbp-180h]
  _QWORD *v772; // [rsp+10h] [rbp-180h]
  unsigned __int8 v773; // [rsp+10h] [rbp-180h]
  int v774; // [rsp+18h] [rbp-178h]
  char *v775; // [rsp+18h] [rbp-178h]
  unsigned __int8 v776; // [rsp+18h] [rbp-178h]
  char v777; // [rsp+18h] [rbp-178h]
  __int64 v778; // [rsp+18h] [rbp-178h]
  char v779; // [rsp+18h] [rbp-178h]
  __int32 v780; // [rsp+18h] [rbp-178h]
  char v781; // [rsp+18h] [rbp-178h]
  char v782; // [rsp+18h] [rbp-178h]
  char v783; // [rsp+18h] [rbp-178h]
  int v784; // [rsp+18h] [rbp-178h]
  unsigned __int8 v785; // [rsp+18h] [rbp-178h]
  __int64 v786; // [rsp+18h] [rbp-178h]
  char v787; // [rsp+18h] [rbp-178h]
  char v788; // [rsp+18h] [rbp-178h]
  char v789; // [rsp+18h] [rbp-178h]
  char v790; // [rsp+18h] [rbp-178h]
  unsigned int *v792; // [rsp+28h] [rbp-168h]
  unsigned __int8 *v793; // [rsp+30h] [rbp-160h]
  __m128i *v794; // [rsp+38h] [rbp-158h]
  __m128i v795; // [rsp+40h] [rbp-150h] BYREF
  int **v796; // [rsp+50h] [rbp-140h]
  __m128i *v797; // [rsp+58h] [rbp-138h]
  unsigned __int8 *v798; // [rsp+60h] [rbp-130h]
  bool v799; // [rsp+6Ah] [rbp-126h]
  char v800; // [rsp+6Bh] [rbp-125h]
  unsigned int v801; // [rsp+6Ch] [rbp-124h]
  char v802; // [rsp+77h] [rbp-119h] BYREF
  __int128 v803; // [rsp+78h] [rbp-118h] BYREF
  _BYTE *v804; // [rsp+88h] [rbp-108h] BYREF
  unsigned __int8 *v805[2]; // [rsp+90h] [rbp-100h] BYREF
  unsigned int *v806; // [rsp+A0h] [rbp-F0h] BYREF
  _BYTE *v807; // [rsp+A8h] [rbp-E8h]
  __int64 v808; // [rsp+B0h] [rbp-E0h] BYREF
  void *src[4]; // [rsp+B8h] [rbp-D8h] BYREF
  __int128 v810; // [rsp+D8h] [rbp-B8h] BYREF
  __m128 **v811; // [rsp+E8h] [rbp-A8h]
  __int128 v812; // [rsp+F0h] [rbp-A0h] BYREF
  __int64 v813; // [rsp+100h] [rbp-90h]
  unsigned int v814; // [rsp+108h] [rbp-88h]
  _BYTE v815[64]; // [rsp+110h] [rbp-80h] BYREF
  signed int v816; // [rsp+150h] [rbp-40h]
  unsigned __int64 v817; // [rsp+158h] [rbp-38h]

  v9 = a1;
  v10 = -1;
  v798 = a2;
  v794 = (__m128i *)m128i_i64;
  v793 = (unsigned __int8 *)a4;
  v796 = a5;
  v817 = __readfsqword(0x28u);
  v802 = 0;
  v799 = m128i_i64 == 0;
  *((_QWORD *)&v11 + 1) = m128i_i64 == 0;
  v795.m128i_i8[0] = 0;
  *(_QWORD *)&v803 = 0;
  v800 = BYTE8(v11) | (a1 != (unsigned int *)a4);
  v792 = a1 + 8;
  while ( 2 )
  {
    v801 = v10 + 1;
    v12 = sub_154E90((__int64)v9, *((__int64 *)&v11 + 1), m128i_i64, a4);
    if ( v12 )
      goto LABEL_33;
    if ( v796 )
    {
      LODWORD(v797) = *(_DWORD *)v796;
      if ( (unsigned int)((_DWORD)v797 - 12) <= 1 )
        goto LABEL_6;
    }
    a7 = 0;
    memset(src, 0, sizeof(src));
    v808 = (__int64)v798;
    v14 = *((_QWORD *)v9 + 3);
    v811 = nullptr;
    v813 = v14;
    LODWORD(v14) = *v9;
    v814 = 0;
    v810 = 0;
    v812 = 0;
    if ( (unsigned int)(v14 - 12) > 1 )
      goto LABEL_6;
    v797 = (__m128i *)&v808;
    sub_159480(&v808, (__int64)v792, 0, 0.0);
    *((_QWORD *)&v11 + 1) = v9 + 12;
    sub_159480(&v808, (__int64)(v9 + 12), *v9 == 13, 0.0);
    a4 = v814;
    if ( !v814 )
    {
      v29 = (__int64)v811;
      v30 = 0;
      goto LABEL_80;
    }
    m128i_i64 = v812;
    if ( !(_QWORD)v812 )
    {
      if ( !under_debugger )
        sub_383060(0xCB3Cu, 0.0);
      goto LABEL_2165;
    }
    if ( *v9 - 12 > 1 )
    {
LABEL_79:
      v29 = (__int64)v811;
      v30 = 1;
      goto LABEL_80;
    }
    if ( *((_BYTE *)v9 + 32) != 4 )
    {
      v31 = v811;
      m128i_i64 = (__int64)&v811[v812];
      if ( v811 != (__m128 **)m128i_i64 )
      {
        *((_QWORD *)&v11 + 1) = v801;
        a4 = (__int64)v792;
        do
        {
          if ( v792 == (unsigned int *)*v31 )
          {
            if ( (__m128 **)m128i_i64 == v31 )
              goto LABEL_95;
            goto LABEL_94;
          }
          ++v31;
        }
        while ( (__m128 **)m128i_i64 != v31 );
        if ( *((_BYTE *)v9 + 48) != 4 )
          goto LABEL_96;
        goto LABEL_104;
      }
      goto LABEL_95;
    }
    a4 = *((_QWORD *)v9 + 5);
    if ( (unsigned int)(*(_DWORD *)a4 - 12) > 1 )
      goto LABEL_95;
    if ( *(_BYTE *)(a4 + 32) == 4 )
    {
      v184 = *(__m128 **)(a4 + 40);
      if ( (unsigned int)(v184->m128_i32[0] - 12) > 1 )
        goto LABEL_660;
      if ( v184[2].m128_i8[0] != 4 )
      {
        v185 = v811;
        m128i_i64 = (__int64)&v811[v812];
        if ( v811 != (__m128 **)m128i_i64 )
        {
          while ( &v184[2] != *v185 )
          {
            if ( (__m128 **)m128i_i64 == ++v185 )
              goto LABEL_1184;
          }
          if ( (__m128 **)m128i_i64 != v185 )
            goto LABEL_729;
        }
LABEL_1184:
        v186 = 0;
LABEL_730:
        if ( v184[3].m128_i8[0] != 4 )
        {
          v187 = v811;
          m128i_i64 = (__int64)&v811[v812];
          if ( v811 != (__m128 **)m128i_i64 )
          {
            while ( &v184[3] != *v187 )
            {
              if ( (__m128 **)m128i_i64 == ++v187 )
                goto LABEL_1216;
            }
            if ( (__m128 **)m128i_i64 != v187 )
              goto LABEL_736;
          }
          goto LABEL_1216;
        }
        v382 = (__m128 *)v184[3].m128_u64[1];
        if ( (unsigned int)(v382->m128_i32[0] - 12) > 1 )
        {
LABEL_1216:
          if ( v186 )
            goto LABEL_146;
          goto LABEL_660;
        }
        if ( v382[2].m128_i8[0] == 4 )
        {
          v737 = (_DWORD *)v382[2].m128_u64[1];
          if ( (unsigned int)(*v737 - 12) <= 1 )
          {
            v738 = (__int64 *)v797;
            v789 = sub_14EBA0((__int64)v797, (__int64)(v737 + 8));
            v740 = sub_14EBA0((__int64)v738, v739 + 48);
            if ( !v789 && !v740 )
            {
              m128i_i64 = 0;
              goto LABEL_1244;
            }
            goto LABEL_1243;
          }
        }
        else
        {
          v383 = v811;
          v384 = &v811[v812];
          if ( v811 != v384 )
          {
            while ( &v382[2] != *v383 )
            {
              if ( v384 == ++v383 )
                goto LABEL_2068;
            }
            if ( v384 != v383 )
            {
LABEL_1243:
              m128i_i64 = 1;
              v382[2].m128_i16[1] = 0;
LABEL_1244:
              if ( v382[3].m128_i8[0] == 4 )
              {
                v741 = (_DWORD *)v382[3].m128_u64[1];
                if ( (unsigned int)(*v741 - 12) <= 1 )
                {
                  v742 = (__int64 *)v797;
                  v773 = m128i_i64;
                  v790 = sub_14EBA0((__int64)v797, (__int64)(v741 + 8));
                  v744 = sub_14EBA0((__int64)v742, v743 + 48);
                  if ( v790 )
                    goto LABEL_2078;
                  m128i_i64 = v773;
                  if ( v744 )
                    goto LABEL_2078;
                }
              }
              else
              {
                v385 = v811;
                v386 = &v811[v812];
                if ( v811 != v386 )
                {
                  while ( &v382[3] != *v385 )
                  {
                    if ( v386 == ++v385 )
                      goto LABEL_2073;
                  }
                  if ( v386 != v385 )
                  {
LABEL_2078:
                    v382[3].m128_i16[1] = 0;
LABEL_736:
                    v184[3].m128_i16[1] = 0;
LABEL_146:
                    v13 = 1;
                    *(_WORD *)(a4 + 34) = 0;
                    goto LABEL_147;
                  }
                }
              }
LABEL_2073:
              if ( (_BYTE)m128i_i64 )
                goto LABEL_736;
              goto LABEL_1216;
            }
          }
        }
LABEL_2068:
        m128i_i64 = 0;
        goto LABEL_1244;
      }
      v406 = (__m128 *)v184[2].m128_u64[1];
      if ( (unsigned int)(v406->m128_i32[0] - 12) > 1 )
        goto LABEL_1184;
      if ( v406[2].m128_i8[0] == 4 )
      {
        v592 = (_DWORD *)v406[2].m128_u64[1];
        if ( (unsigned int)(*v592 - 12) > 1
          || (v593 = (__int64 *)v797,
              sub_14EBA0((__int64)v797, (__int64)(v592 + 8)),
              v595 = sub_14EBA0((__int64)v593, v594 + 48),
              !v596)
          && !v595 )
        {
LABEL_1741:
          v589 = 0;
          goto LABEL_1742;
        }
      }
      else
      {
        v407 = v811;
        m128i_i64 = (__int64)&v811[v812];
        if ( v811 == (__m128 **)m128i_i64 )
          goto LABEL_1741;
        while ( &v406[2] != *v407 )
        {
          if ( (__m128 **)m128i_i64 == ++v407 )
            goto LABEL_1741;
        }
        if ( (__m128 **)m128i_i64 == v407 )
          goto LABEL_1741;
      }
      m128i_i64 = 0;
      v589 = 1;
      v406[2].m128_i16[1] = 0;
LABEL_1742:
      if ( v406[3].m128_i8[0] == 4 )
      {
        v597 = (_DWORD *)v406[3].m128_u64[1];
        if ( (unsigned int)(*v597 - 12) <= 1 )
        {
          v598 = (__int64 *)v797;
          v779 = sub_14EBA0((__int64)v797, (__int64)(v597 + 8));
          v600 = sub_14EBA0((__int64)v598, v599 + 48);
          if ( v779 || v600 )
          {
LABEL_1748:
            v406[3].m128_i16[1] = 0;
            goto LABEL_729;
          }
        }
      }
      else
      {
        v590 = v811;
        v591 = &v811[v812];
        if ( v811 != v591 )
        {
          m128i_i64 = v801;
          while ( &v406[3] != *v590 )
          {
            if ( v591 == ++v590 )
              goto LABEL_1753;
          }
          if ( v591 != v590 )
            goto LABEL_1748;
        }
      }
LABEL_1753:
      if ( !v589 )
        goto LABEL_1184;
LABEL_729:
      v186 = 1;
      v184[2].m128_i16[1] = 0;
      goto LABEL_730;
    }
    v41 = v811;
    m128i_i64 = (__int64)&v811[v812];
    if ( v811 != (__m128 **)m128i_i64 )
    {
      while ( (__m128 *)(a4 + 32) != *v41 )
      {
        if ( (__m128 **)m128i_i64 == ++v41 )
          goto LABEL_660;
      }
      if ( (__m128 **)m128i_i64 != v41 )
        goto LABEL_146;
    }
LABEL_660:
    v13 = 0;
LABEL_147:
    *((_QWORD *)&v11 + 1) = a4 + 48;
    if ( *(_BYTE *)(a4 + 48) != 4 )
    {
      v42 = v811;
      m128i_i64 = (__int64)&v811[v812];
      if ( v811 != (__m128 **)m128i_i64 )
      {
        while ( *((__m128 **)&v11 + 1) != *v42 )
        {
          if ( (__m128 **)m128i_i64 == ++v42 )
            goto LABEL_657;
        }
        if ( v42 != (__m128 **)m128i_i64 )
          goto LABEL_153;
      }
      goto LABEL_657;
    }
    v180 = *(__m128 **)(a4 + 56);
    if ( (unsigned int)(v180->m128_i32[0] - 12) <= 1 )
    {
      if ( v180[2].m128_i8[0] != 4 )
      {
        v181 = v811;
        m128i_i64 = (__int64)&v811[v812];
        if ( v811 != (__m128 **)m128i_i64 )
        {
          while ( &v180[2] != *v181 )
          {
            if ( (__m128 **)m128i_i64 == ++v181 )
              goto LABEL_1188;
          }
          if ( (__m128 **)m128i_i64 != v181 )
          {
LABEL_714:
            v182 = 1;
            v180[2].m128_i16[1] = 0;
            goto LABEL_715;
          }
        }
LABEL_1188:
        v182 = 0;
LABEL_715:
        *((_QWORD *)&v11 + 1) = v180 + 3;
        if ( v180[3].m128_i8[0] != 4 )
        {
          v183 = v811;
          m128i_i64 = (__int64)&v811[v812];
          if ( v811 != (__m128 **)m128i_i64 )
          {
            while ( *((__m128 **)&v11 + 1) != *v183 )
            {
              if ( (__m128 **)m128i_i64 == ++v183 )
                goto LABEL_1182;
            }
            if ( v183 != (__m128 **)m128i_i64 )
              goto LABEL_721;
          }
          goto LABEL_1182;
        }
        v404 = (__m128 *)v180[3].m128_u64[1];
        if ( (unsigned int)(v404->m128_i32[0] - 12) > 1 )
        {
LABEL_1182:
          if ( v182 )
            goto LABEL_153;
          goto LABEL_657;
        }
        if ( v404[2].m128_i8[0] == 4 )
        {
          v617 = (_DWORD *)v404[2].m128_u64[1];
          if ( (unsigned int)(*v617 - 12) > 1 )
            goto LABEL_1779;
          v618 = sub_14EBA0((__int64)v797, (__int64)(v617 + 8));
          *((_QWORD *)&v11 + 1) = v619 + 48;
          v782 = v618;
          v620 = sub_14EBA0((__int64)v797, v619 + 48);
          if ( !v782 && !v620 )
            goto LABEL_1779;
        }
        else
        {
          v405 = v811;
          *((_QWORD *)&v11 + 1) = &v811[v812];
          if ( v811 == *((__m128 ***)&v11 + 1) )
            goto LABEL_1779;
          m128i_i64 = v801;
          while ( &v404[2] != *v405 )
          {
            if ( *((__m128 ***)&v11 + 1) == ++v405 )
              goto LABEL_1779;
          }
          if ( *((__m128 ***)&v11 + 1) == v405 )
          {
LABEL_1779:
            v781 = 0;
LABEL_1780:
            if ( v404[3].m128_i8[0] == 4 )
            {
              v621 = (_DWORD *)v404[3].m128_u64[1];
              if ( (unsigned int)(*v621 - 12) <= 1 )
              {
                v622 = sub_14EBA0((__int64)v797, (__int64)(v621 + 8));
                *((_QWORD *)&v11 + 1) = v623 + 48;
                v771 = v622;
                v624 = sub_14EBA0((__int64)v797, v623 + 48);
                if ( v771 || v624 )
                  goto LABEL_1786;
              }
            }
            else
            {
              v616 = v811;
              *((_QWORD *)&v11 + 1) = &v811[v812];
              if ( v811 != *((__m128 ***)&v11 + 1) )
              {
                m128i_i64 = v801;
                while ( &v404[3] != *v616 )
                {
                  if ( *((__m128 ***)&v11 + 1) == ++v616 )
                    goto LABEL_1791;
                }
                if ( *((__m128 ***)&v11 + 1) != v616 )
                {
LABEL_1786:
                  v404[3].m128_i16[1] = 0;
LABEL_721:
                  v180[3].m128_i16[1] = 0;
LABEL_153:
                  *(_WORD *)(a4 + 50) = 0;
LABEL_94:
                  *((_WORD *)v9 + 17) = 0;
                  goto LABEL_95;
                }
              }
            }
LABEL_1791:
            if ( v781 )
              goto LABEL_721;
            goto LABEL_1182;
          }
        }
        m128i_i64 = 0;
        v781 = 1;
        v404[2].m128_i16[1] = 0;
        goto LABEL_1780;
      }
      v391 = (__m128 *)v180[2].m128_u64[1];
      if ( (unsigned int)(v391->m128_i32[0] - 12) > 1 )
        goto LABEL_1188;
      if ( v391[2].m128_i8[0] == 4 )
      {
        v716 = (_DWORD *)v391[2].m128_u64[1];
        if ( (unsigned int)(*v716 - 12) > 1 )
          goto LABEL_2013;
        v717 = (__int64 *)v797;
        v787 = sub_14EBA0((__int64)v797, (__int64)(v716 + 8));
        v719 = sub_14EBA0((__int64)v717, v718 + 48);
        if ( !v787 && !v719 )
          goto LABEL_2013;
      }
      else
      {
        v392 = v811;
        v393 = &v811[v812];
        if ( v811 == v393 )
          goto LABEL_2013;
        m128i_i64 = v801;
        while ( &v391[2] != *v392 )
        {
          if ( v393 == ++v392 )
            goto LABEL_2013;
        }
        if ( v393 == v392 )
        {
LABEL_2013:
          v713 = 0;
          goto LABEL_2014;
        }
      }
      v713 = 1;
      v391[2].m128_i16[1] = 0;
LABEL_2014:
      if ( v391[3].m128_i8[0] == 4 )
      {
        v720 = (_DWORD *)v391[3].m128_u64[1];
        if ( (unsigned int)(*v720 - 12) <= 1 )
        {
          v788 = sub_14EBA0((__int64)v797, (__int64)(v720 + 8));
          v722 = sub_14EBA0((__int64)v797, v721 + 48);
          if ( v788 || v722 )
          {
LABEL_2020:
            v391[3].m128_i16[1] = 0;
            goto LABEL_714;
          }
        }
      }
      else
      {
        v714 = v811;
        v715 = &v811[v812];
        if ( v811 != v715 )
        {
          m128i_i64 = v801;
          while ( &v391[3] != *v714 )
          {
            if ( v715 == ++v714 )
              goto LABEL_2025;
          }
          if ( v714 != v715 )
            goto LABEL_2020;
        }
      }
LABEL_2025:
      if ( v713 )
        goto LABEL_714;
      goto LABEL_1188;
    }
LABEL_657:
    if ( (_BYTE)v13 )
      goto LABEL_94;
LABEL_95:
    if ( *((_BYTE *)v9 + 48) != 4 )
    {
LABEL_96:
      v29 = (__int64)v811;
      m128i_i64 = (__int64)&v811[v812];
      if ( v811 == (__m128 **)m128i_i64 )
      {
LABEL_489:
        v30 = 1;
        goto LABEL_80;
      }
      *((_QWORD *)&v11 + 1) = v801;
      v32 = v811;
      while ( v9 + 12 != (unsigned int *)*v32 )
      {
        if ( (__m128 **)m128i_i64 == ++v32 )
        {
          v30 = 1;
          goto LABEL_80;
        }
      }
      if ( (__m128 **)m128i_i64 == v32 )
        goto LABEL_489;
LABEL_101:
      *((_WORD *)v9 + 25) = 0;
      v30 = 1;
      goto LABEL_80;
    }
LABEL_104:
    a4 = *((_QWORD *)v9 + 7);
    if ( (unsigned int)(*(_DWORD *)a4 - 12) > 1 )
      goto LABEL_79;
    if ( *(_BYTE *)(a4 + 32) == 4 )
    {
      v176 = *(__m128 **)(a4 + 40);
      if ( (unsigned int)(v176->m128_i32[0] - 12) > 1 )
        goto LABEL_659;
      if ( v176[2].m128_i8[0] != 4 )
      {
        v177 = v811;
        m128i_i64 = (__int64)&v811[v812];
        if ( v811 != (__m128 **)m128i_i64 )
        {
          while ( &v176[2] != *v177 )
          {
            if ( (__m128 **)m128i_i64 == ++v177 )
              goto LABEL_1193;
          }
          if ( (__m128 **)m128i_i64 != v177 )
          {
LABEL_699:
            v178 = 1;
            v176[2].m128_i16[1] = 0;
            goto LABEL_700;
          }
        }
LABEL_1193:
        v178 = 0;
LABEL_700:
        if ( v176[3].m128_i8[0] != 4 )
        {
          v179 = v811;
          m128i_i64 = (__int64)&v811[v812];
          if ( v811 != (__m128 **)m128i_i64 )
          {
            while ( &v176[3] != *v179 )
            {
              if ( (__m128 **)m128i_i64 == ++v179 )
                goto LABEL_1191;
            }
            if ( v179 != (__m128 **)m128i_i64 )
              goto LABEL_706;
          }
          goto LABEL_1191;
        }
        v411 = (__m128 *)v176[3].m128_u64[1];
        if ( (unsigned int)(v411->m128_i32[0] - 12) > 1 )
        {
LABEL_1191:
          if ( v178 )
            goto LABEL_111;
          goto LABEL_659;
        }
        if ( v411[2].m128_i8[0] == 4 )
        {
          v526 = (_DWORD *)v411[2].m128_u64[1];
          if ( (unsigned int)(*v526 - 12) > 1 )
            goto LABEL_1634;
          v527 = (__int64 *)v797;
          v529 = sub_14EBA0((__int64)v797, (__int64)(v526 + 8));
          v530 = sub_14EBA0((__int64)v527, v528 + 48);
          if ( !v529 && !v530 )
            goto LABEL_1634;
        }
        else
        {
          v412 = v811;
          m128i_i64 = (__int64)&v811[v812];
          if ( v811 == (__m128 **)m128i_i64 )
            goto LABEL_1634;
          while ( &v411[2] != *v412 )
          {
            if ( (__m128 **)m128i_i64 == ++v412 )
              goto LABEL_1634;
          }
          if ( v412 == (__m128 **)m128i_i64 )
          {
LABEL_1634:
            v524 = 0;
LABEL_1635:
            if ( v411[3].m128_i8[0] == 4 )
            {
              v531 = (_DWORD *)v411[3].m128_u64[1];
              if ( (unsigned int)(*v531 - 12) <= 1 )
              {
                v532 = (__int64 *)v797;
                v776 = sub_14EBA0((__int64)v797, (__int64)(v531 + 8));
                v534 = sub_14EBA0((__int64)v532, v533 + 48);
                m128i_i64 = v776;
                if ( v776 || v534 )
                  goto LABEL_1641;
              }
            }
            else
            {
              v525 = v811;
              m128i_i64 = (__int64)&v811[v812];
              if ( v811 != (__m128 **)m128i_i64 )
              {
                while ( &v411[3] != *v525 )
                {
                  if ( (__m128 **)m128i_i64 == ++v525 )
                    goto LABEL_1646;
                }
                if ( v525 != (__m128 **)m128i_i64 )
                {
LABEL_1641:
                  v411[3].m128_i16[1] = 0;
LABEL_706:
                  v176[3].m128_i16[1] = 0;
LABEL_111:
                  v13 = 1;
                  *(_WORD *)(a4 + 34) = 0;
                  goto LABEL_112;
                }
              }
            }
LABEL_1646:
            if ( v524 )
              goto LABEL_706;
            goto LABEL_1191;
          }
        }
        v524 = 1;
        v411[2].m128_i16[1] = 0;
        goto LABEL_1635;
      }
      v408 = (__m128 *)v176[2].m128_u64[1];
      if ( (unsigned int)(v408->m128_i32[0] - 12) > 1 )
        goto LABEL_1193;
      if ( v408[2].m128_i8[0] == 4 )
      {
        v680 = (_DWORD *)v408[2].m128_u64[1];
        if ( (unsigned int)(*v680 - 12) <= 1 )
        {
          v682 = sub_14EBA0((__int64)v797, (__int64)(v680 + 8));
          v684 = sub_14EBA0(v683, v681 + 48);
          if ( v682 || v684 )
            goto LABEL_1342;
        }
      }
      else
      {
        v409 = v811;
        m128i_i64 = (__int64)&v811[v812];
        if ( v811 != (__m128 **)m128i_i64 )
        {
          while ( &v408[2] != *v409 )
          {
            if ( (__m128 **)m128i_i64 == ++v409 )
              goto LABEL_1911;
          }
          if ( v409 != (__m128 **)m128i_i64 )
          {
LABEL_1342:
            v410 = 1;
            v408[2].m128_i16[1] = 0;
            goto LABEL_1912;
          }
        }
      }
LABEL_1911:
      v410 = 0;
LABEL_1912:
      if ( v408[3].m128_i8[0] == 4 )
      {
        v688 = (_DWORD *)v408[3].m128_u64[1];
        if ( (unsigned int)(*v688 - 12) > 1 )
          goto LABEL_1926;
        v689 = (__int64 *)v797;
        sub_14EBA0((__int64)v797, (__int64)(v688 + 8));
        v691 = sub_14EBA0((__int64)v689, v690 + 48);
        if ( !v692 && !v691 )
          goto LABEL_1926;
      }
      else
      {
        v679 = v811;
        m128i_i64 = (__int64)&v811[v812];
        if ( v811 == (__m128 **)m128i_i64 )
          goto LABEL_1926;
        while ( &v408[3] != *v679 )
        {
          if ( (__m128 **)m128i_i64 == ++v679 )
            goto LABEL_1926;
        }
        if ( (__m128 **)m128i_i64 == v679 )
        {
LABEL_1926:
          if ( v410 )
            goto LABEL_699;
          goto LABEL_1193;
        }
      }
      v408[3].m128_i16[1] = 0;
      goto LABEL_699;
    }
    v33 = v811;
    m128i_i64 = (__int64)&v811[v812];
    if ( v811 != (__m128 **)m128i_i64 )
    {
      while ( (__m128 *)(a4 + 32) != *v33 )
      {
        if ( (__m128 **)m128i_i64 == ++v33 )
          goto LABEL_659;
      }
      if ( (__m128 **)m128i_i64 != v33 )
        goto LABEL_111;
    }
LABEL_659:
    v13 = 0;
LABEL_112:
    *((_QWORD *)&v11 + 1) = a4 + 48;
    if ( *(_BYTE *)(a4 + 48) != 4 )
    {
      v29 = (__int64)v811;
      m128i_i64 = (__int64)&v811[v812];
      if ( v811 != (__m128 **)m128i_i64 )
      {
        v34 = v811;
        while ( *((__m128 **)&v11 + 1) != *v34 )
        {
          if ( (__m128 **)m128i_i64 == ++v34 )
            goto LABEL_655;
        }
        if ( (__m128 **)m128i_i64 != v34 )
          goto LABEL_118;
      }
      goto LABEL_655;
    }
    v175 = *(__m128 **)(a4 + 56);
    if ( (unsigned int)(v175->m128_i32[0] - 12) <= 1 )
    {
      if ( v175[2].m128_i8[0] != 4 )
      {
        v239 = v811;
        m128i_i64 = (__int64)&v811[v812];
        if ( v811 != (__m128 **)m128i_i64 )
        {
          while ( &v175[2] != *v239 )
          {
            if ( (__m128 **)m128i_i64 == ++v239 )
              goto LABEL_1194;
          }
          if ( v239 != (__m128 **)m128i_i64 )
          {
LABEL_858:
            v240 = 1;
            v175[2].m128_i16[1] = 0;
            goto LABEL_859;
          }
        }
LABEL_1194:
        v240 = 0;
LABEL_859:
        *((_QWORD *)&v11 + 1) = v175 + 3;
        if ( v175[3].m128_i8[0] != 4 )
        {
          v241 = v811;
          m128i_i64 = (__int64)&v811[v812];
          if ( v811 != (__m128 **)m128i_i64 )
          {
            while ( *((__m128 **)&v11 + 1) != *v241 )
            {
              if ( (__m128 **)m128i_i64 == ++v241 )
                goto LABEL_1195;
            }
            if ( v241 != (__m128 **)m128i_i64 )
              goto LABEL_865;
          }
          goto LABEL_1195;
        }
        v415 = (__m128 *)v175[3].m128_u64[1];
        if ( (unsigned int)(v415->m128_i32[0] - 12) <= 1 )
        {
          *((_QWORD *)&v11 + 1) = v415 + 2;
          if ( v415[2].m128_i8[0] == 4 )
          {
            v648 = (_DWORD *)v415[2].m128_u64[1];
            if ( (unsigned int)(*v648 - 12) > 1 )
              goto LABEL_1862;
            v649 = (__int64 *)v797;
            *((_QWORD *)&v11 + 1) = v648 + 12;
            v783 = sub_14EBA0((__int64)v797, (__int64)(v648 + 8));
            v650 = sub_14EBA0((__int64)v649, (__int64)(v648 + 12));
            if ( v783 || v650 )
              goto LABEL_1366;
            m128i_i64 = 0;
          }
          else
          {
            v416 = v811;
            v417 = &v811[v812];
            if ( v811 != v417 )
            {
              while ( *((__m128 **)&v11 + 1) != *v416 )
              {
                if ( v417 == ++v416 )
                  goto LABEL_1862;
              }
              if ( v416 != v417 )
              {
LABEL_1366:
                m128i_i64 = 1;
                v415[2].m128_i16[1] = 0;
                goto LABEL_1367;
              }
            }
LABEL_1862:
            m128i_i64 = 0;
          }
LABEL_1367:
          if ( v415[3].m128_i8[0] == 4 )
          {
            v666 = (_DWORD *)v415[3].m128_u64[1];
            if ( (unsigned int)(*v666 - 12) <= 1 )
            {
              v667 = (__int64 *)v797;
              v785 = m128i_i64;
              *((_QWORD *)&v11 + 1) = v666 + 12;
              LOBYTE(v797) = sub_14EBA0((__int64)v797, (__int64)(v666 + 8));
              v668 = sub_14EBA0((__int64)v667, (__int64)(v666 + 12));
              if ( (_BYTE)v797 )
                goto LABEL_1373;
              m128i_i64 = v785;
              if ( v668 )
                goto LABEL_1373;
            }
          }
          else
          {
            v418 = v811;
            *((_QWORD *)&v11 + 1) = &v811[v812];
            if ( v811 != *((__m128 ***)&v11 + 1) )
            {
              while ( &v415[3] != *v418 )
              {
                if ( *((__m128 ***)&v11 + 1) == ++v418 )
                  goto LABEL_1878;
              }
              if ( *((__m128 ***)&v11 + 1) != v418 )
              {
LABEL_1373:
                v415[3].m128_i16[1] = 0;
LABEL_865:
                v175[3].m128_i16[1] = 0;
LABEL_118:
                *(_WORD *)(a4 + 50) = 0;
                v29 = (__int64)v811;
                goto LABEL_101;
              }
            }
          }
LABEL_1878:
          if ( (_BYTE)m128i_i64 )
            goto LABEL_865;
        }
LABEL_1195:
        if ( v240 )
          goto LABEL_118;
        goto LABEL_691;
      }
      v413 = (__m128 *)v175[2].m128_u64[1];
      if ( (unsigned int)(v413->m128_i32[0] - 12) > 1 )
        goto LABEL_1194;
      if ( v413[2].m128_i8[0] == 4 )
      {
        v538 = (_DWORD *)v413[2].m128_u64[1];
        if ( (unsigned int)(*v538 - 12) > 1 )
          goto LABEL_1652;
        v539 = (__int64 *)v797;
        sub_14EBA0((__int64)v797, (__int64)(v538 + 8));
        v540 = sub_14EBA0((__int64)v539, (__int64)(v538 + 12));
        if ( !v541 && !v540 )
          goto LABEL_1652;
      }
      else
      {
        v414 = v811;
        m128i_i64 = (__int64)&v811[v812];
        if ( v811 == (__m128 **)m128i_i64 )
          goto LABEL_1652;
        while ( &v413[2] != *v414 )
        {
          if ( (__m128 **)m128i_i64 == ++v414 )
            goto LABEL_1652;
        }
        if ( (__m128 **)m128i_i64 == v414 )
        {
LABEL_1652:
          v535 = 0;
          goto LABEL_1653;
        }
      }
      v535 = 1;
      v413[2].m128_i16[1] = 0;
LABEL_1653:
      if ( v413[3].m128_i8[0] == 4 )
      {
        v542 = (_DWORD *)v413[3].m128_u64[1];
        if ( (unsigned int)(*v542 - 12) <= 1 )
        {
          v543 = (__int64 *)v797;
          v777 = sub_14EBA0((__int64)v797, (__int64)(v542 + 8));
          v544 = sub_14EBA0((__int64)v543, (__int64)(v542 + 12));
          if ( v777 || v544 )
          {
LABEL_1659:
            m128i_i64 = 0;
            v413[3].m128_i16[1] = 0;
            goto LABEL_858;
          }
        }
      }
      else
      {
        v536 = v811;
        v537 = &v811[v812];
        if ( v811 != v537 )
        {
          m128i_i64 = v801;
          while ( &v413[3] != *v536 )
          {
            if ( v537 == ++v536 )
              goto LABEL_1664;
          }
          if ( v537 != v536 )
            goto LABEL_1659;
        }
      }
LABEL_1664:
      if ( v535 )
        goto LABEL_858;
      goto LABEL_1194;
    }
LABEL_691:
    v29 = (__int64)v811;
LABEL_655:
    v30 = 1;
    if ( (_BYTE)v13 )
      goto LABEL_101;
LABEL_80:
    if ( v29 )
    {
      *(_QWORD *)&v812 = 0;
      qfree(v29);
    }
    if ( src[3] )
    {
      *(_QWORD *)&v810 = 0;
      qfree((__int64)src[3]);
    }
    if ( src[0] )
    {
      src[1] = nullptr;
      qfree((__int64)src[0]);
    }
    if ( v30 )
      goto LABEL_33;
LABEL_6:
    if ( !v795.m128i_i8[0] )
    {
      src[0] = nullptr;
      v808 = (__int64)&off_4DDD28;
      *((_QWORD *)&v810 + 1) = v798;
      LOBYTE(v810) = 0;
      v811 = a6;
      *(_QWORD *)&v812 = 0;
      *((_QWORD *)&v812 + 1) = a9;
      src[1] = v794;
      *(_OWORD *)&src[2] = (unsigned __int64)v793;
      *((_QWORD *)&v11 + 1) = &v808;
      sub_11E900(v9, (__int64)&v808);
      if ( HIDWORD(v812) )
      {
        *((_QWORD *)&v11 + 1) = v801;
        v795.m128i_i8[0] = 1;
        v801 = HIDWORD(v812) + v801 - 1;
        goto LABEL_33;
      }
    }
    v15 = *v9;
    m128i_i64 = *v9;
    switch ( *v9 )
    {
      case 0u:
      case 0x3Au:
      case 0x3Bu:
      case 0x3Cu:
      case 0x3Du:
      case 0x3Eu:
        goto LABEL_20;
      case 1u:
        if ( !v794 )
        {
          if ( (v9[1] & 0x10) != 0 )
          {
            if ( v15 != 1 )
              goto LABEL_31;
            goto LABEL_122;
          }
LABEL_497:
          if ( *((_BYTE *)v9 + 32) != 4 || !sub_122600(*((unsigned int **)v9 + 5)) )
            goto LABEL_19;
          v15 = *v9;
          v9[1] |= 0x10u;
          LODWORD(m128i_i64) = v15;
          goto LABEL_20;
        }
        v20 = (char *)(v9 + 12);
        *((_QWORD *)&v11 + 1) = v9 + 16;
        if ( !(unsigned __int8)sub_13CF50(
                                 (__int64)v794,
                                 (__int64)(v9 + 16),
                                 (__int64)v9,
                                 (__int64)(v9 + 12),
                                 (__int64)(v9 + 16),
                                 (__int64)(v9 + 8),
                                 a7) )
        {
          if ( (v9[1] & 0x10) != 0 )
            goto LABEL_19;
          goto LABEL_497;
        }
        goto LABEL_349;
      case 2u:
        if ( !v794 )
          goto LABEL_26;
        v20 = (char *)(v9 + 12);
        *((_QWORD *)&v11 + 1) = v9 + 8;
        if ( (unsigned __int8)sub_13CF50(
                                (__int64)v794,
                                (__int64)(v9 + 8),
                                (__int64)v9,
                                (__int64)(v9 + 8),
                                (__int64)(v9 + 12),
                                (__int64)(v9 + 16),
                                a7) )
          goto LABEL_349;
LABEL_212:
        LODWORD(m128i_i64) = *v9;
        v15 = *v9;
        goto LABEL_20;
      case 3u:
        *v9 = 4;
        goto LABEL_32;
      case 4u:
        v795.m128i_i64[0] = (__int64)(v9 + 8);
        if ( sub_125B60((unsigned __int8 *)v9 + 32, (__int64)(v9 + 16), 0, *(double *)a7.m128i_i64) )
          goto LABEL_538;
        if ( !*((_BYTE *)v9 + 64) && v9 == (unsigned int *)v793 )
        {
          memset(src, 0, sizeof(src));
          v808 = (__int64)&off_4DDD00;
          *(_QWORD *)&v810 = *((_QWORD *)v798 + 12);
          if ( !(unsigned int)sub_11F760(v9, &v808) )
            goto LABEL_538;
        }
        *((_QWORD *)&v11 + 1) = v798;
        if ( (unsigned __int8)sub_11CD10(v795.m128i_i64[0], (__int64)v798)
          || (*((_QWORD *)&v11 + 1) = v798, (unsigned __int8)sub_11CD10((__int64)(v9 + 16), (__int64)v798))
          && (*((_QWORD *)&v11 + 1) = *((_QWORD *)v9 + 5), sub_14E700(*((_BYTE *)v9 + 32), *((__int64 *)&v11 + 1))) )
        {
          v9[1] |= 0x10u;
          *v9 = 67;
          goto LABEL_32;
        }
        if ( *((_BYTE *)v9 + 32) == 4 )
        {
          if ( sub_122600(*((unsigned int **)v9 + 5)) )
            v9[1] |= 0x10u;
          if ( sub_32ED70(**((unsigned int **)v9 + 5)) )
          {
            v361 = *((_QWORD *)v9 + 5);
            v362 = *(_DWORD *)v361;
            if ( (unsigned int)(*(_DWORD *)v361 - 56) > 1 )
            {
              if ( *(_DWORD *)(v361 + 68) == v9[17] )
              {
                v69 = v9[1];
                if ( (v69 & 0x20000) != 0 )
                {
                  if ( !v794 )
                  {
                    if ( *((_BYTE *)v9 + 64) != 5 || *((_BYTE *)v9 + 32) != 6 || !(unsigned __int8)sub_14E100(v361) )
                      goto LABEL_160;
                    goto LABEL_539;
                  }
                  v520 = sub_178D10((_BYTE *)v361, v794[30].m128i_i64[0]);
                  v361 = *((_QWORD *)v9 + 5);
                  if ( v520 )
                  {
                    *(_DWORD *)(v361 + 4) |= 0x20000u;
                    v361 = *((_QWORD *)v9 + 5);
                  }
                  v521 = *(_DWORD *)v361;
                  *v9 = *(_DWORD *)v361;
                  if ( v521 != 2 )
                    goto LABEL_1619;
                }
                else
                {
                  *v9 = v362;
                  if ( v362 != 2 || !v794 )
                    goto LABEL_1620;
                }
                sub_B57F0(v794[4].m128i_i64[0], *((__int64 **)v9 + 3), *(_QWORD *)(v361 + 24));
                v361 = *((_QWORD *)v9 + 5);
LABEL_1619:
                v69 = v9[1];
LABEL_1620:
                if ( (*((_BYTE *)v9 + 33) & 0x20) != 0 )
                  *((_BYTE *)v9 + 65) |= 0x20u;
                v61 = v361;
                v20 = (char *)(v9 + 12);
                v797 = (__m128i *)&v808;
                goto LABEL_517;
              }
              if ( !under_debugger )
                sub_383060(0xC546u, *(double *)a7.m128i_i64);
LABEL_2165:
              BUG();
            }
          }
        }
        if ( *((_BYTE *)v9 + 64) != 5 )
          goto LABEL_19;
        if ( *((_BYTE *)v9 + 32) != 6 || !(unsigned __int8)sub_14E100(*((_QWORD *)v9 + 5)) )
        {
          if ( v794 )
          {
            v168 = v794[4].m128i_i64[0];
            if ( *(_QWORD *)(v168 + 1352) == -1 )
              goto LABEL_19;
            *((_QWORD *)&v11 + 1) = &v808;
            v797 = (__m128i *)&v808;
            if ( !(unsigned __int8)sub_11FD80((char *)v795.m128i_i64[0], &v808, 0) )
            {
              if ( *((_BYTE *)v9 + 32) != 10 )
                goto LABEL_19;
              v169 = *((_QWORD *)v9 + 5);
              if ( *(_BYTE *)v169 != 6 )
                goto LABEL_19;
              v170 = *(_QWORD *)(v169 + 8);
              v171 = 8 * v9[9];
              v172 = 0;
              *((_QWORD *)&v11 + 1) = v171;
              if ( (unsigned __int64)v171 <= 0x3F )
                v172 = 1LL << v171;
              v808 = v170 & (v172 - 1);
            }
            if ( *(_QWORD *)(v168 + 1352) != v808 )
              goto LABEL_19;
            *((_QWORD *)&v11 + 1) = v797;
            *(_QWORD *)&v11 = v794[4].m128i_i64[0];
            v173 = (unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v9 + 9) + 8LL) + *(_QWORD *)(v11 + 1440));
            src[0] = (void *)(int)v9[17];
            v808 = (__int64)v173;
            sub_F7AC0((__int64 *)v11, v797, *(double *)a7.m128i_i64, a8);
            v15 = *v9;
            LODWORD(m128i_i64) = *v9;
            goto LABEL_20;
          }
          goto LABEL_160;
        }
        goto LABEL_538;
      case 5u:
        *((_QWORD *)&v11 + 1) = &v803;
        v795.m128i_i64[0] = (__int64)(v9 + 8);
        if ( !(unsigned __int8)sub_11FD80((char *)v9 + 32, (__int64 *)&v803, 1) )
        {
          if ( *((_BYTE *)v9 + 32) != 4 )
            goto LABEL_19;
          v61 = *((_QWORD *)v9 + 5);
          v70 = *(_DWORD *)v61;
          if ( *(_DWORD *)v61 != 5 )
          {
            if ( v70 == 7 )
            {
              sub_120A10((__int64)(v9 + 12), (unsigned __int64 *)v798, 1, v9[9], *(_QWORD *)(v61 + 24), 0);
              v61 = *((_QWORD *)v9 + 5);
              *v9 = 12;
              v797 = (__m128i *)&v808;
              goto LABEL_519;
            }
            if ( v70 != 13 )
            {
              if ( (v70 & 0xFFFFFFFD) == 8 )
              {
                if ( *(_BYTE *)(v61 + 32) != 4 )
                  goto LABEL_19;
                v71 = *(unsigned int **)(v61 + 40);
                v72 = *v71;
              }
              else
              {
                v72 = *(_DWORD *)v61;
                v71 = *((unsigned int **)v9 + 5);
              }
              if ( ((v72 - 14) & 0xFFFFFFFD) != 0 )
              {
                if ( v70 != 12 || !v794 )
                  goto LABEL_19;
              }
              else
              {
                *((_QWORD *)&v11 + 1) = 0;
                v73 = sub_11C8A0((__int64)v71, nullptr);
                if ( v73 )
                {
                  *((_QWORD *)&v11 + 1) = v798;
                  v74 = sub_120B00(
                          v73,
                          (unsigned __int64 *)v798,
                          *(_QWORD *)(*(_QWORD *)(v73 + 8) + 16LL),
                          *(double *)a7.m128i_i64);
                  v61 = *((_QWORD *)v9 + 5);
                  if ( v74 )
                  {
                    a7 = 0;
                    v615 = *((_QWORD *)v9 + 5);
                    *(_QWORD *)&v810 = 0;
                    src[3] = (void *)0xFFFFFFFF00000000LL;
                    *((_QWORD *)&v810 + 1) = 0xFFFFFFFF00000000LL;
                    v812 = 0xFFFFFFFF00000000LL;
                    v797 = (__m128i *)&v808;
                    v811 = nullptr;
                    *(_OWORD *)src = 0;
                    sub_1253A0((__int64)&v808, v615);
                    sub_11CA10((char *)&v812, (char *)v9 + 64);
                    *((_QWORD *)&v11 + 1) = v797;
                    sub_11D7A0((__int64)v9, (__int64)v797);
                    sub_11CDA0((__int64)&v812);
                    sub_11CDA0((__int64)&v810 + 8);
                    sub_11CDA0((__int64)&src[3]);
                    goto LABEL_32;
                  }
                  v75 = *(_DWORD *)v61;
                }
                else
                {
                  v61 = *((_QWORD *)v9 + 5);
                  v75 = *(_DWORD *)v61;
                }
                if ( v75 != 12 || !v794 )
                {
LABEL_300:
                  if ( v75 != 13 )
                    goto LABEL_19;
                  goto LABEL_301;
                }
              }
              *((_QWORD *)&v11 + 1) = v805;
              v399 = sub_11C8E0(v61, v805, 9);
              if ( v399 )
              {
                if ( *(_BYTE *)(v399 + 32) == 4 )
                {
                  v706 = *(_DWORD **)(v399 + 40);
                  if ( *v706 == 32 )
                  {
                    *((_QWORD *)&v11 + 1) = &v806;
                    *(_QWORD *)&v11 = sub_11C8A0((__int64)v706, &v806);
                    if ( (_QWORD)v11 )
                    {
                      *((_QWORD *)&v11 + 1) = 0;
                      if ( sub_A2350((char *)v11, 0, 0) )
                      {
                        *((_QWORD *)&v11 + 1) = v806;
                        if ( v806[1] == *((_DWORD *)v805[0] + 1) )
                        {
                          v797 = (__m128i *)&v808;
                          sub_123A40((__int64)&v808, (unsigned __int8 *)v806, v707, v708);
                          v709 = v793;
                          *(_QWORD *)&v11 = v794;
                          sub_B1520(
                            v11,
                            (__int64)&v808,
                            v793,
                            (unsigned __int8 *)&v808,
                            (__int64)v793,
                            *(double *)a7.m128i_i64,
                            (__int64)v805[0],
                            0);
                          sub_1207E0(
                            (char *)&v808,
                            (unsigned __int64 *)v798,
                            5,
                            *((_QWORD *)v9 + 3),
                            SHIDWORD(v808),
                            a7);
                          *((_QWORD *)&v11 + 1) = &v808;
                          sub_11CA10((char *)v795.m128i_i64[0], (char *)&v808);
                          *v9 = 11;
                          sub_11CDA0((__int64)&v808);
                          goto LABEL_32;
                        }
                      }
                    }
                  }
                }
              }
              v61 = *((_QWORD *)v9 + 5);
              v75 = *(_DWORD *)v61;
              goto LABEL_300;
            }
            if ( !v794 || *(_BYTE *)(v61 + 32) == 1 && *(_DWORD *)(v794[4].m128i_i64[0] + 1184) == *(_DWORD *)(v61 + 40) )
            {
LABEL_301:
              *((_QWORD *)&v11 + 1) = &v808;
              v797 = (__m128i *)&v808;
              if ( !(unsigned __int8)sub_11FD80((char *)(v61 + 48), &v808, 1) )
                goto LABEL_19;
              if ( v808 != 1 )
                goto LABEL_19;
              v76 = *((_QWORD *)v9 + 5);
              if ( *(_BYTE *)(v76 + 32) != 4 )
                goto LABEL_19;
              v77 = *(_QWORD *)(v76 + 40);
              v78 = v76 + 32;
              if ( *(_DWORD *)v77 == 9 )
              {
                if ( *(_BYTE *)(v77 + 32) != 4 )
                  goto LABEL_19;
                v78 = v77 + 32;
              }
              v79 = *(_QWORD *)(v78 + 8);
              if ( *(_DWORD *)v79 == 29 )
              {
                *(_DWORD *)v79 = 39;
                sub_120A10(v79 + 48, (unsigned __int64 *)v798, 0, *(_DWORD *)(v79 + 36), *(_QWORD *)(v79 + 24), 0);
              }
              else
              {
                v80 = sub_32E9E0(*(_DWORD *)v79);
                if ( !v80 )
                  goto LABEL_19;
                *(_DWORD *)v79 = v80;
              }
              v81 = (char *)v797;
              v808 = 0xFFFFFFFF00000000LL;
              src[0] = nullptr;
              sub_11CA10(v797->m128i_i8, (char *)(*((_QWORD *)v9 + 5) + 32LL));
              sub_11CA10((char *)v795.m128i_i64[0], v81);
              v20 = (char *)(v9 + 12);
              sub_11CDA0((__int64)v81);
              goto LABEL_283;
            }
            sub_11CA10((char *)(v61 + 32), (char *)(v61 + 48));
            *v9 = 13;
LABEL_887:
            v61 = *((_QWORD *)v9 + 5);
LABEL_888:
            v20 = (char *)(v9 + 12);
            v797 = (__m128i *)&v808;
            goto LABEL_516;
          }
LABEL_1149:
          *v9 = 4;
          v797 = (__m128i *)&v808;
          goto LABEL_519;
        }
        *(_QWORD *)&v803 = -(__int64)v803;
        goto LABEL_259;
      case 6u:
        *((_QWORD *)&v11 + 1) = &v803;
        v62 = v9 + 8;
        if ( !(unsigned __int8)sub_11FD80((char *)v9 + 32, (__int64 *)&v803, 0) )
        {
          if ( *((_BYTE *)v9 + 32) != 4 )
            goto LABEL_19;
          v63 = *((_DWORD **)v9 + 5);
          v64 = *v63;
          if ( *v63 == 6 )
          {
            *((_QWORD *)&v11 + 1) = v798;
            if ( sub_11FDE0((__int64)(v63 + 8), (__int64)v798) )
            {
              v61 = *((_QWORD *)v9 + 5);
              *v9 = 4;
              v797 = (__m128i *)&v808;
              goto LABEL_519;
            }
            if ( *((_BYTE *)v9 + 32) != 4 )
              goto LABEL_19;
            v63 = *((_DWORD **)v9 + 5);
            v64 = *v63;
          }
          if ( v64 == 9 )
          {
            v62 = v63 + 8;
            v65 = *((_BYTE *)v63 + 32);
          }
          else
          {
            v65 = *((_BYTE *)v9 + 32);
          }
          if ( v65 != 4 )
            goto LABEL_19;
          v66 = *((_QWORD *)v62 + 1);
          if ( *(_DWORD *)v66 == 29 )
          {
            *(_DWORD *)v66 = 39;
            v20 = (char *)(v9 + 12);
            sub_120A10(v66 + 48, (unsigned __int64 *)v798, 0, *(_DWORD *)(v66 + 36), *(_QWORD *)(v66 + 24), 0);
            v797 = (__m128i *)&v808;
          }
          else
          {
            v67 = sub_32E9E0(*(_DWORD *)v66);
            if ( !v67 )
              goto LABEL_19;
            *(_DWORD *)v66 = v67;
            v20 = (char *)(v9 + 12);
            v797 = (__m128i *)&v808;
          }
LABEL_283:
          v61 = *((_QWORD *)v9 + 5);
          v68 = *(_DWORD *)v61;
          *v9 = *(_DWORD *)v61;
          if ( v68 - 8 <= 1 && *(_DWORD *)(v61 + 36) == v9[17] )
          {
            *v9 = 4;
            v69 = v9[1];
LABEL_517:
            v9[1] = *(_DWORD *)(v61 + 4) & 0xFFDFF7FF | v69 & 0x210000;
            sub_11CA10(v20, (char *)(v61 + 48));
LABEL_518:
            v61 = *((_QWORD *)v9 + 5);
            goto LABEL_519;
          }
LABEL_516:
          v69 = v9[1];
          goto LABEL_517;
        }
        *(_QWORD *)&v803 = v803 == 0;
        goto LABEL_259;
      case 7u:
        *((_QWORD *)&v11 + 1) = &v803;
        if ( !(unsigned __int8)sub_11FD80((char *)v9 + 32, (__int64 *)&v803, 0) )
        {
          if ( *((_BYTE *)v9 + 32) != 4 )
            goto LABEL_19;
          v61 = *((_QWORD *)v9 + 5);
          if ( *(_DWORD *)v61 == 7 )
            goto LABEL_1149;
          if ( *(_DWORD *)v61 != 5 )
            goto LABEL_19;
          if ( *(_BYTE *)(v61 + 32) != 4 )
            goto LABEL_273;
          v435 = *(_QWORD *)(v61 + 40);
          if ( *(_DWORD *)v435 == 9 )
          {
            if ( *(_BYTE *)(v435 + 32) != 4 )
              goto LABEL_273;
            v436 = v435 + 32;
          }
          else
          {
            v436 = v61 + 32;
          }
          v437 = *(_QWORD *)(v436 + 8);
          if ( *(_DWORD *)v437 == 29 )
          {
            *(_DWORD *)v437 = 39;
            sub_120A10(v437 + 48, (unsigned __int64 *)v798, 0, *(_DWORD *)(v437 + 36), *(_QWORD *)(v437 + 24), 0);
            goto LABEL_1430;
          }
          v438 = sub_32E9E0(*(_DWORD *)v437);
          if ( v438 )
          {
            *(_DWORD *)v437 = v438;
LABEL_1430:
            *v9 = 5;
            goto LABEL_887;
          }
          v61 = *((_QWORD *)v9 + 5);
          if ( *(_DWORD *)v61 != 5 )
            goto LABEL_19;
LABEL_273:
          *((_QWORD *)&v11 + 1) = v798;
          v20 = (char *)(v9 + 12);
          sub_120A10(v61 + 48, (unsigned __int64 *)v798, 1, *(_DWORD *)(v61 + 36), *(_QWORD *)(v61 + 24), 0);
          **((_DWORD **)v9 + 5) = 13;
          goto LABEL_349;
        }
        *(_QWORD *)&v803 = ~(_QWORD)v803;
        goto LABEL_259;
      case 8u:
        if ( *((_BYTE *)v9 + 32) != 4 )
          goto LABEL_65;
        v61 = *((_QWORD *)v9 + 5);
        if ( *(_DWORD *)v61 != 9 )
          goto LABEL_65;
        *v9 = 9;
        v797 = (__m128i *)&v808;
        goto LABEL_519;
      case 9u:
LABEL_65:
        if ( v796 )
        {
          if ( *(_DWORD *)v796 == 20 )
          {
            *((_QWORD *)&v11 + 1) = &v806;
            if ( (unsigned __int8)sub_11E2C0(v796, &v806, &v808, 0) )
            {
              v167 = sub_11CA90((int)v806 + (int)v808, *(double *)a7.m128i_i64);
              *((_QWORD *)&v11 + 1) = v796;
              if ( v167 != *((_DWORD *)v796 + 17) && v167 < (int)v9[9] )
              {
                *((_QWORD *)&v11 + 1) = v798;
                if ( (unsigned __int8)sub_1272B0(
                                        (__int64)(v9 + 8),
                                        (unsigned __int64 *)v798,
                                        v167,
                                        0,
                                        *(double *)a7.m128i_i64) )
                  goto LABEL_32;
              }
            }
          }
        }
        v27 = *((_BYTE *)v9 + 32);
        if ( v27 == 10 )
        {
          *((_QWORD *)&v11 + 1) = v798;
          v28 = v9[17];
          m128i_i64 = *((unsigned int *)v798 + 21);
          if ( v28 <= (int)m128i_i64 )
          {
            v9[9] = v28;
            v20 = (char *)(v9 + 12);
            goto LABEL_349;
          }
          if ( v9[9] != (_DWORD)m128i_i64 )
          {
            v9[9] = m128i_i64;
            goto LABEL_32;
          }
        }
        else
        {
          if ( v27 == 4 )
          {
            m128i_i64 = *((_QWORD *)v9 + 5);
            v132 = *(_DWORD *)m128i_i64;
            if ( (*(_DWORD *)m128i_i64 & 0xFFFFFFFD) != 5 )
            {
              v28 = v9[17];
              if ( v132 == 10 && *(_BYTE *)(m128i_i64 + 32) == 10 )
              {
                v133 = *(_QWORD *)(m128i_i64 + 40);
                if ( *(_BYTE *)v133 == 6 && *(_DWORD *)(m128i_i64 + 36) == v28 )
                {
                  v134 = 8 * *(_DWORD *)(m128i_i64 + 68) - (*v9 == 8);
                  if ( (unsigned __int64)v134 > 0x3F
                    || (*((_QWORD *)&v11 + 1) = -1LL << v134, (*(_QWORD *)(v133 + 8) & (-1LL << v134)) == 0) )
                  {
                    *((_QWORD *)&v11 + 1) = m128i_i64 + 32;
                    v20 = (char *)(v9 + 12);
                    sub_11CA10((char *)v9 + 32, (char *)(m128i_i64 + 32));
                    goto LABEL_349;
                  }
                }
              }
              goto LABEL_70;
            }
            if ( *(_BYTE *)(m128i_i64 + 32) == 4 )
            {
              v219 = *(_QWORD *)(m128i_i64 + 40);
              if ( *(_DWORD *)v219 == 10 )
              {
                *(_DWORD *)m128i_i64 = 10;
                v220 = *(_DWORD *)(v219 + 4);
                *(_DWORD *)v219 = v132;
                v221 = *(_DWORD *)(m128i_i64 + 4);
                *(_DWORD *)(m128i_i64 + 4) = v220;
                *((_QWORD *)&v11 + 1) = *(_QWORD *)(v219 + 24);
                *(_DWORD *)(v219 + 4) = v221;
                v222 = *(_QWORD *)(m128i_i64 + 24);
                *(_QWORD *)(m128i_i64 + 24) = *((_QWORD *)&v11 + 1);
                *(_QWORD *)(v219 + 24) = v222;
                a4 = *(unsigned int *)(v219 + 36);
                *(_DWORD *)(m128i_i64 + 36) = a4;
                *(_DWORD *)(v219 + 68) = a4;
                goto LABEL_32;
              }
            }
          }
          v28 = v9[17];
        }
LABEL_70:
        if ( v28 <= 8 )
        {
          v174 = *v9 == 8;
          *((_QWORD *)&v11 + 1) = &v803;
          v795.m128i_i64[0] = (__int64)(v9 + 8);
          if ( (unsigned __int8)sub_11FD80((char *)v9 + 32, (__int64 *)&v803, v174) )
          {
            v20 = (char *)(v9 + 12);
            *((_QWORD *)&v11 + 1) = v798;
            sub_120A10(
              v795.m128i_i64[0],
              (unsigned __int64 *)v798,
              v803,
              v9[17],
              **((_QWORD **)v9 + 5),
              *(_DWORD *)(*((_QWORD *)v9 + 5) + 8LL));
            goto LABEL_349;
          }
        }
        v15 = *v9;
        LODWORD(m128i_i64) = *v9;
        if ( *v9 != 9 )
        {
          if ( v794 )
            goto LABEL_20;
          goto LABEL_26;
        }
        if ( *((_BYTE *)v9 + 32) != 4 )
        {
          if ( !v794 )
            goto LABEL_31;
          goto LABEL_688;
        }
        if ( **((_DWORD **)v9 + 5) != 20 )
        {
          if ( !v794 )
            goto LABEL_31;
LABEL_1079:
          if ( *((_BYTE *)v9 + 32) != 4 )
          {
LABEL_688:
            if ( !v800 )
              goto LABEL_25;
            goto LABEL_31;
          }
          if ( (unsigned int)sub_14E760(**((_DWORD **)v9 + 5)) == 1
            && (!v796 || (unsigned int)sub_14E760(*(_DWORD *)v796) != 2) )
          {
            *((_QWORD *)&v11 + 1) = v793;
            *(_QWORD *)&v11 = v794;
            if ( (unsigned __int8)sub_1299D0(v11, (char *)v9 + 32, 0, *(double *)a7.m128i_i64, a8) )
            {
              *v9 = 8;
              goto LABEL_32;
            }
            goto LABEL_19;
          }
          if ( v800 )
            goto LABEL_31;
LABEL_24:
          if ( *((_BYTE *)v9 + 32) == 4 )
            goto LABEL_156;
          goto LABEL_25;
        }
        *((_QWORD *)&v11 + 1) = 20;
        if ( sub_11CC20((__int64)v798, 0x14u, v9[17]) )
        {
          *((_QWORD *)&v11 + 1) = &v806;
          v459 = sub_11C8A0(*((_QWORD *)v9 + 5), &v806);
          if ( v459 )
          {
            if ( *(_BYTE *)v806 == 4 )
            {
              v460 = *((_QWORD *)v806 + 1);
              if ( *(_DWORD *)v460 == 10 )
              {
                *((_QWORD *)&v11 + 1) = v9[17];
                if ( *(_DWORD *)(v460 + 36) == DWORD2(v11) )
                {
                  v797 = (__m128i *)&v808;
                  sub_123A40((__int64)&v808, (unsigned __int8 *)(v460 + 32), v457, v458);
                  sub_11CA10((char *)v806, (char *)&v808);
                  sub_120A10(
                    v459,
                    (unsigned __int64 *)v798,
                    *(_QWORD *)(*(_QWORD *)(v459 + 8) + 16LL),
                    v806[1],
                    **(_QWORD **)(v459 + 8),
                    0);
                  *v9 = 20;
                  v20 = (char *)(v9 + 12);
                  sub_11CDA0((__int64)&v808);
                  v61 = *((_QWORD *)v9 + 5);
                  v69 = v9[1];
                  goto LABEL_517;
                }
              }
            }
          }
        }
        v15 = *v9;
        if ( !v794 )
          goto LABEL_25;
        if ( v15 == 9 )
          goto LABEL_1079;
LABEL_908:
        LODWORD(m128i_i64) = v15;
        goto LABEL_20;
      case 0xAu:
        *((_QWORD *)&v11 + 1) = v798;
        if ( (unsigned __int8)sub_12D880(
                                (__int64)v9,
                                (unsigned __int64 *)v798,
                                (unsigned __int64)v794,
                                (unsigned __int64)v793,
                                v796,
                                a7) )
          goto LABEL_32;
        if ( *((_BYTE *)v9 + 32) == 4 && **((_DWORD **)v9 + 5) == 2 )
        {
          *((_QWORD *)&v11 + 1) = v794;
          if ( (unsigned __int8)sub_151440(*((_QWORD *)v798 + 12), v794, (__int64)v9, a9) )
            goto LABEL_32;
        }
        goto LABEL_19;
      case 0xBu:
        *((_QWORD *)&v11 + 1) = v793;
        if ( (unsigned __int8)sub_118AF0((__int64)v794, (__int64)v793, (__int64)v796, (__int64)v9) )
          goto LABEL_32;
        v58 = *((_BYTE *)v9 + 32);
        if ( v58 != 4 )
          goto LABEL_254;
        v61 = *((_QWORD *)v9 + 5);
        switch ( *(_DWORD *)v61 )
        {
          case 2:
            *((_QWORD *)&v11 + 1) = v794;
            if ( (unsigned __int8)sub_151440(*((_QWORD *)v798 + 12), v794, (__int64)v9, a9) )
              goto LABEL_32;
            goto LABEL_961;
          case 4:
            v797 = (__m128i *)&v808;
            sub_123A40((__int64)&v808, (unsigned __int8 *)(v61 + 32), m128i_i64, a4);
            *((_QWORD *)&v11 + 1) = v798;
            if ( (unsigned __int8)sub_127850((__int64)&v808, (unsigned __int64 *)v798, v9[17], 0, a7) )
            {
              v447 = (__int64 *)v797;
              *((_QWORD *)&v11 + 1) = v797;
              sub_125180((unsigned __int8 *)v9 + 32, (unsigned __int8 *)v797);
              *v9 = 4;
              sub_11CDA0((__int64)v447);
              goto LABEL_32;
            }
            sub_11CDA0((__int64)v797);
            v58 = *((_BYTE *)v9 + 32);
            goto LABEL_254;
          case 5:
            if ( *(_BYTE *)(v61 + 32) != 14 )
              goto LABEL_19;
            v287 = *(_QWORD *)(v61 + 40);
            if ( *(_BYTE *)v287 != 4 || **(_DWORD **)(v287 + 8) != 5 )
              goto LABEL_19;
            src[0] = nullptr;
            v808 = 0xFFFFFFFF00000000LL;
            v288 = *(_QWORD *)(v287 + 8);
            v797 = (__m128i *)&v808;
            sub_11CA10((char *)&v808, (char *)(v288 + 32));
            *((_QWORD *)&v11 + 1) = *(_QWORD *)(v61 + 40);
            sub_11CA10((char *)&v808, *((char **)&v11 + 1));
            sub_11CDA0((__int64)&v808);
            goto LABEL_32;
          case 7:
            if ( *(_BYTE *)(v61 + 32) != 14 )
              goto LABEL_19;
            v286 = *(_QWORD *)(v61 + 40);
            *((_QWORD *)&v11 + 1) = v9[17];
            if ( *(_DWORD *)(v286 + 20) != DWORD2(v11) )
              goto LABEL_19;
            v797 = (__m128i *)&v808;
            sub_123A40((__int64)&v808, (unsigned __int8 *)(v286 + 16), m128i_i64, a4);
            *((_QWORD *)&v11 + 1) = &v808;
            sub_11CA10((char *)v9 + 32, (char *)&v808);
            *v9 = 4;
            sub_11CDA0((__int64)&v808);
            goto LABEL_32;
          case 8:
            *((_QWORD *)&v11 + 1) = &v803;
            if ( !(unsigned __int8)sub_11FD80((char *)(v61 + 32), (__int64 *)&v803, 1) )
            {
              if ( v794 )
              {
                *((_QWORD *)&v11 + 1) = *((_QWORD *)v9 + 5) + 32LL;
                if ( (unsigned __int8)sub_12CF30(
                                        v794[4].m128i_i64[0],
                                        *((__int64 *)&v11 + 1),
                                        (unsigned __int8 *)v9 + 64,
                                        (__int64)(v9 + 16),
                                        1,
                                        v304,
                                        a7) )
                {
                  v61 = *((_QWORD *)v9 + 5);
                  *v9 = *(_DWORD *)v61;
                  v797 = (__m128i *)&v808;
                  goto LABEL_519;
                }
              }
              v305 = *((_QWORD *)v9 + 5);
              if ( (int)(v9[17] + *(_DWORD *)(v305 + 36)) <= (int)v9[9] )
              {
                *((_QWORD *)&v11 + 1) = v793;
                *(_QWORD *)&v11 = v794;
                if ( (unsigned __int8)sub_1299D0(v11, (char *)(v305 + 32), 0, *(double *)a7.m128i_i64, a8) )
                  goto LABEL_258;
              }
              goto LABEL_961;
            }
            *(_QWORD *)&v803 = (__int64)v803 >> 63;
            goto LABEL_259;
          case 0xB:
            goto LABEL_888;
          case 0xE:
            *((_QWORD *)&v11 + 1) = &v808;
            v297 = sub_11C8A0(*((_QWORD *)v9 + 5), &v808);
            if ( !v297 )
              goto LABEL_961;
            *((_QWORD *)&v11 + 1) = *(unsigned int *)(v297 + 4);
            v298 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v297 + 8) + 16LL), SDWORD2(v11), 0);
            v299 = 8 * (v9[9] - v9[17]);
            v300 = v298;
            if ( (unsigned __int64)v299 > 0x3F )
            {
              if ( !v298 )
              {
                sub_11CA10((char *)v808, (char *)v9 + 48);
                sub_12B320((__int64)(v9 + 12), (unsigned __int64 *)v798, *((_QWORD *)v9 + 3), v9[17], a7);
                v301 = *((_QWORD *)v9 + 3);
                v795.m128i_i64[0] = (__int64)(v9 + 8);
                v302 = v9[17];
                goto LABEL_993;
              }
            }
            else if ( (v298 & ~(-1LL << v299)) == 0 )
            {
              sub_11CA10((char *)v808, (char *)v9 + 48);
              sub_12B320((__int64)(v9 + 12), (unsigned __int64 *)v798, *((_QWORD *)v9 + 3), v9[17], a7);
              v301 = *((_QWORD *)v9 + 3);
              v795.m128i_i64[0] = (__int64)(v9 + 8);
              v302 = v9[17];
              v300 >>= v299;
LABEL_993:
              *((_QWORD *)&v11 + 1) = v798;
              sub_120A10(v795.m128i_i64[0], (unsigned __int64 *)v798, v300, v302, v301, 0);
              *v9 = 14;
              goto LABEL_32;
            }
LABEL_961:
            v58 = *((_BYTE *)v9 + 32);
LABEL_254:
            if ( v58 != 10 )
              goto LABEL_19;
            v59 = *((_QWORD *)v9 + 5);
            if ( *(_BYTE *)v59 != 6 )
              goto LABEL_19;
            v60 = 8 * v9[17];
            if ( (unsigned __int64)v60 <= 0x3F && (*(_QWORD *)(v59 + 8) & (-1LL << v60)) != 0 )
              goto LABEL_19;
            goto LABEL_258;
          case 0x13:
          case 0x15:
            *((_QWORD *)&v11 + 1) = &v806;
            v285 = sub_11C8E0(*((_QWORD *)v9 + 5), &v806, 9);
            if ( v285 )
            {
              m128i_i64 = v9[9] - *(_DWORD *)(v285 + 36);
              if ( (_DWORD)m128i_i64 == v9[17] )
              {
                v797 = (__m128i *)&v808;
                sub_123A40((__int64)&v808, (unsigned __int8 *)v806, m128i_i64, a4);
                *((_QWORD *)&v11 + 1) = &v808;
                sub_11CA10((char *)(v61 + 32), (char *)&v808);
                sub_11CDA0(v61 + 48);
                *(_DWORD *)v61 = 4;
                sub_11CDA0((__int64)&v808);
                goto LABEL_32;
              }
            }
            v61 = *((_QWORD *)v9 + 5);
LABEL_960:
            if ( *(_BYTE *)(v61 + 32) != 14 )
              goto LABEL_961;
            *((_QWORD *)&v11 + 1) = v9[17];
            if ( *(_DWORD *)(*(_QWORD *)(v61 + 40) + 20LL) != DWORD2(v11) )
              goto LABEL_961;
            sub_123A40((__int64)&v806, (unsigned __int8 *)(v61 + 48), m128i_i64, a4);
            *((_QWORD *)&v11 + 1) = v798;
            if ( (unsigned __int8)sub_1279B0((__int64)&v806, (unsigned __int64 *)v798, *((_QWORD *)v9 + 3), v9[17], a7) )
            {
              v563 = *((unsigned int **)v9 + 5);
              v797 = (__m128i *)&v808;
              v564 = *v563;
              *v9 = v564;
              sub_123A40((__int64)&v808, (unsigned __int8 *)(*((_QWORD *)v563 + 5) + 16LL), v564, v446);
              sub_11CA10((char *)v9 + 32, (char *)&v808);
              *((_QWORD *)&v11 + 1) = &v806;
              sub_11CA10((char *)v9 + 48, (char *)&v806);
              sub_11CDA0((__int64)&v808);
              sub_11CDA0((__int64)&v806);
              goto LABEL_32;
            }
            sub_11CDA0((__int64)&v806);
            v58 = *((_BYTE *)v9 + 32);
            goto LABEL_254;
          case 0x14:
            goto LABEL_960;
          case 0x17:
            if ( *(_BYTE *)(v61 + 48) == 2 && (int)(8 * v9[17]) <= *(unsigned __int8 *)(*(_QWORD *)(v61 + 56) + 16LL) )
              goto LABEL_258;
            goto LABEL_19;
          default:
            goto LABEL_19;
        }
      case 0xCu:
        v20 = (char *)(v9 + 12);
        v55 = (unsigned __int64 *)v798;
        *((_QWORD *)&v11 + 1) = v9 + 8;
        v795.m128i_i64[0] = (__int64)(v9 + 8);
        if ( (unsigned __int8)sub_151FF0(
                                (unsigned __int64 *)v798,
                                (__int64)(v9 + 8),
                                (__int64)v794,
                                (__int64)v9,
                                0,
                                (__int64)(v9 + 12),
                                a7) )
          goto LABEL_32;
        *((_QWORD *)&v11 + 1) = v9 + 12;
        if ( (unsigned __int8)sub_151FF0(v55, (__int64)(v9 + 12), (__int64)v794, (__int64)v9, 0, (__int64)(v9 + 8), a7) )
          goto LABEL_32;
        if ( sub_125B60((unsigned __int8 *)v9 + 32, (__int64)(v9 + 12), 0, *(double *)a7.m128i_i64)
          && !(unsigned __int8)sub_1205A0(v9, (__int64)v798, 0)
          && *((_BYTE *)v9 + 32) != 10 )
        {
          v56 = v9[9];
          v57 = *((_QWORD *)v9 + 3);
          *v9 = 14;
          *((_QWORD *)&v11 + 1) = v798;
          sub_120A10(v795.m128i_i64[0], (unsigned __int64 *)v798, 2, v56, v57, 0);
          goto LABEL_32;
        }
        if ( (unsigned __int8)sub_11FD80((char *)v795.m128i_i64[0], nullptr, 0) && *((_BYTE *)v9 + 48) != 2 )
          sub_11CA10((char *)v795.m128i_i64[0], (char *)v9 + 48);
        if ( v794 )
        {
          *((_QWORD *)&v11 + 1) = v794;
          if ( (unsigned __int8)sub_118900((__int64)v798, v794, (__int64)v793, (char *)v9) )
            goto LABEL_32;
        }
        if ( !(unsigned __int8)sub_159410((__int64)(v9 + 12), (__int64 *)&v803, 1) )
          goto LABEL_627;
        if ( (*((_BYTE *)v9 + 49) & 0x20) != 0 )
          goto LABEL_1228;
        v354 = v803;
        v355 = *((_BYTE *)v9 + 32);
        if ( !v794 || (__int64)v803 <= 0 || v355 != 10 )
          goto LABEL_1132;
        v462 = *((_QWORD *)v9 + 5);
        v797 = (__m128i *)&v808;
        if ( *(_BYTE *)v462 != 6 || *(_QWORD *)(v462 + 8) == *(_QWORD *)(v794[4].m128i_i64[0] + 1352) )
          goto LABEL_628;
        v797 = *(__m128i **)(v462 + 8);
        if ( (unsigned __int8)is_spec_ea()
          || v354 < get_item_end() - (__int64)v797
          || (v379 = getseg(), v379 != getseg()) )
        {
          v355 = *((_BYTE *)v9 + 32);
LABEL_1132:
          v797 = (__m128i *)&v808;
          if ( v355 != 4 )
            goto LABEL_628;
          v356 = *((int **)v9 + 5);
          v357 = *v356;
        }
        else
        {
LABEL_1228:
          v380 = *((_BYTE *)v9 + 32);
          if ( v380 == 10 )
          {
            v381 = *((_QWORD *)v9 + 5);
            if ( *(_BYTE *)v381 == 6 )
            {
LABEL_1233:
              *((_QWORD *)&v11 + 1) = v798;
              *(_QWORD *)(v381 + 8) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v798 + 12) + 24LL) + 16LL)
                                    & (*(_QWORD *)(v381 + 8) + v803);
              goto LABEL_349;
            }
            goto LABEL_627;
          }
          if ( v380 != 4 )
          {
LABEL_627:
            v797 = (__m128i *)&v808;
            goto LABEL_628;
          }
          v356 = *((int **)v9 + 5);
          v357 = *v356;
          if ( *v356 == 10 )
          {
            v52 = *((_BYTE *)v356 + 32) == 10;
            v797 = (__m128i *)&v808;
            if ( v52 )
            {
              v381 = *((_QWORD *)v356 + 5);
              if ( *(_BYTE *)v381 == 6 )
                goto LABEL_1233;
            }
            goto LABEL_628;
          }
        }
        v797 = (__m128i *)&v808;
        if ( v357 != 12 )
          goto LABEL_628;
        v358 = v356 + 8;
        if ( *((_BYTE *)v356 + 32) != 10 )
        {
          if ( *((_BYTE *)v356 + 48) != 10 )
            goto LABEL_628;
          v358 = v356 + 12;
        }
        if ( (*((_BYTE *)v9 + 49) & 0x20) == 0 )
        {
          v359 = *((_QWORD *)v358 + 1);
          v797 = (__m128i *)&v808;
          if ( *(_BYTE *)v359 != 6 || (v360 = *(_QWORD *)(v359 + 8), v360 != getinf()) )
          {
LABEL_628:
            *((_QWORD *)&v11 + 1) = v797;
            if ( (unsigned __int8)sub_11FD80(v20, v797->m128i_i64, 0) && !v808 )
              goto LABEL_349;
            if ( *((_BYTE *)v9 + 32) == 10 )
            {
              v349 = *((_BYTE *)v9 + 48);
              if ( v349 == 10 )
              {
                v419 = *((_QWORD *)v9 + 7);
                if ( *(_BYTE *)v419 == 6 && !*(_QWORD *)(v419 + 8) )
                  goto LABEL_349;
              }
              else if ( v349 == 2 )
              {
                v350 = *((_QWORD *)v9 + 5);
                if ( *(_BYTE *)v350 == 6 )
                {
                  v351 = *(_QWORD *)(v350 + 8);
                  if ( !v351 )
                  {
                    *((_QWORD *)&v11 + 1) = *((_QWORD *)v9 + 7);
                    v352 = sub_14E8A0(v9[13], *((__int64 *)&v11 + 1));
                    *(_BYTE *)v350 = 6;
                    v353 = 8 * *((_DWORD *)v798 + 21);
                    LODWORD(v797) = *((_DWORD *)v798 + 21);
                    if ( (unsigned __int64)v353 <= 0x3F )
                      v351 = 1LL << v353;
                    *(_QWORD *)(v350 + 8) = v352 & (v351 - 1);
                    goto LABEL_349;
                  }
                }
              }
            }
            *((_QWORD *)&v11 + 1) = &v803;
            if ( (unsigned __int8)sub_11FD80((char *)v795.m128i_i64[0], (__int64 *)&v803, *v9 == 12)
              && (*((_BYTE *)v9 + 32) != 2 || (*((_BYTE *)v9 + 33) & 8) == 0) )
            {
              *((_QWORD *)&v11 + 1) = (char *)&v803 + 8;
              if ( (unsigned __int8)sub_11FD80(v20, (__int64 *)&v803 + 1, *v9 == 12) )
              {
                if ( *((_BYTE *)v9 + 48) != 2 || (*((_BYTE *)v9 + 49) & 8) == 0 )
                {
                  v156 = *v9;
                  if ( *v9 == 19 )
                  {
                    *(_QWORD *)&v803 = *((_QWORD *)&v803 + 1) | v803;
                  }
                  else if ( v156 == 21 )
                  {
                    *(_QWORD *)&v803 = *((_QWORD *)&v803 + 1) ^ v803;
                  }
                  else if ( v156 == 12 )
                  {
                    v157 = v9[9];
                    v158 = *((_QWORD *)&v803 + 1);
                    v159 = sub_32ABC0(v803, v157, 1);
                    *(_QWORD *)&v803 = sub_32ABC0(v158, v157, 1) + v159;
                  }
                  if ( v9[9] == 8 && DWORD1(v803) && *((_DWORD *)v798 + 21) == 8 && (unsigned __int8)is_mapped() )
                  {
                    v160 = v803;
                    sub_11CDA0(v795.m128i_i64[0]);
                    v161 = v798;
                    *((_BYTE *)v9 + 32) = 6;
                    LODWORD(v161) = *((_DWORD *)v161 + 21);
                    v162 = (unsigned int)(8 * (_DWORD)v161);
                    LODWORD(v797) = (_DWORD)v161;
                    v163 = 0;
                    if ( (unsigned __int64)(int)v162 <= 0x3F )
                      v163 = 1LL << v162;
                    *((_QWORD *)&v11 + 1) = v798;
                    *(_QWORD *)&v11 = v795.m128i_i64[0];
                    *((_QWORD *)v9 + 5) = v160 & (v163 - 1);
                    sub_11C950((unsigned __int8 *)v11, *((__int64 *)&v11 + 1), (int)v162, v162, *(double *)a7.m128i_i64);
                    sub_11CDA0((__int64)v20);
                    *v9 = 4;
                    goto LABEL_32;
                  }
                  goto LABEL_259;
                }
              }
            }
            v15 = *v9;
            LODWORD(m128i_i64) = *v9;
            if ( *v9 != 12 )
              goto LABEL_20;
            if ( !v794 )
            {
LABEL_1044:
              if ( !(unsigned __int8)sub_159410((__int64)v20, (__int64 *)&v803, 1) )
                goto LABEL_1048;
              v322 = *((_BYTE *)v9 + 32);
              if ( v322 != 10 )
              {
                if ( v322 == 4 )
                {
                  v517 = *((_QWORD *)v9 + 5);
                  if ( *(_DWORD *)v517 == 13
                    && *(_BYTE *)(v517 + 32) == 10
                    && **(_BYTE **)(v517 + 40) == 6
                    && (unsigned __int8)sub_11FD80((char *)(v517 + 48), (__int64 *)&v803 + 1, 1)
                    && (unsigned __int8)sub_14E580((__int64)v794, a9, v803, *((__int64 *)&v803 + 1)) )
                  {
                    v480 = v9[9];
                    v481 = v518 - v519;
LABEL_1535:
                    sub_120A10((__int64)v20, (unsigned __int64 *)v798, v481, v480, *((_QWORD *)v9 + 3), 0);
                    v61 = *((_QWORD *)v9 + 5);
                    goto LABEL_519;
                  }
                }
                goto LABEL_1047;
              }
              v487 = *((_QWORD *)v9 + 5);
              if ( *(_BYTE *)v487 == 5 )
              {
                v651 = v803;
                v652 = *((_QWORD *)v798 + 12);
                v784 = v9[9];
                v653 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v487 + 8) + 8LL), v784, 1);
                v654 = sub_32ABC0(v651, v784, 1) + v653;
                *((_QWORD *)&v11 + 1) = (int)v654;
                if ( *(_DWORD *)(*(_QWORD *)(v652 + 24) + 24LL) == 8 )
                  *((_QWORD *)&v11 + 1) = v654;
                if ( (unsigned __int8)sub_1599D0(*((_QWORD *)v9 + 5), *((__int64 *)&v11 + 1), (__int64)v794, a9) )
                  goto LABEL_349;
              }
              else if ( *(_BYTE *)v487 == 6 && (a9 & 1) != 0 )
              {
                v488 = sub_15A410(*(_QWORD *)(v487 + 8), v803, v9[9]);
                goto LABEL_1548;
              }
LABEL_1047:
              if ( *((_BYTE *)v9 + 48) == 2 && (__int64)v803 < 0 )
              {
                *((_QWORD *)&v11 + 1) = v798;
                if ( (unsigned __int8)sub_120B00((__int64)v20, (unsigned __int64 *)v798, v803, *(double *)a7.m128i_i64) )
                {
                  *v9 = 13;
                  goto LABEL_32;
                }
              }
LABEL_1048:
              v325 = sub_11C8E0((__int64)v9, v805, 5);
              if ( v325 )
              {
                sub_123A40((__int64)&v806, v805[0], v323, v324);
                v326 = (unsigned __int8 *)(v325 + 32);
                v327 = (unsigned __int8 *)v797;
                sub_123A40((__int64)v797, v326, v328, v329);
                sub_125180((unsigned __int8 *)v795.m128i_i64[0], (unsigned __int8 *)&v806);
                *((_QWORD *)&v11 + 1) = v327;
                sub_125180((unsigned __int8 *)v20, v327);
                *v9 = 13;
                sub_11CDA0((__int64)v327);
                sub_11CDA0((__int64)&v806);
                goto LABEL_32;
              }
              *((_QWORD *)&v11 + 1) = &v806;
              v387 = sub_11C8E0((__int64)v9, &v806, 13);
              v388 = v387;
              if ( v387 )
              {
                *((_QWORD *)&v11 + 1) = v806;
                if ( sub_125B60((unsigned __int8 *)(v387 + 48), (__int64)v806, 0, *(double *)a7.m128i_i64) )
                {
                  v734 = v806;
                  if ( *(_BYTE *)v806 == 4 )
                  {
                    *((_QWORD *)&v11 + 1) = v798;
                    if ( (unsigned __int8)sub_1205A0(*((_BYTE **)v806 + 1), (__int64)v798, 0) )
                      goto LABEL_1256;
                    v734 = v806;
                  }
                  *((_QWORD *)&v11 + 1) = v794;
                  if ( sub_14F260(*((_QWORD *)v798 + 12), (__int64)v794, (__int64)v734) )
                  {
                    src[0] = nullptr;
                    v735 = (char *)(v388 + 32);
                    v736 = (char *)v797;
                    v808 = 0xFFFFFFFF00000000LL;
                    sub_11CA10(v797->m128i_i8, v735);
                    *((_QWORD *)&v11 + 1) = v736;
                    sub_11CA10((char *)v795.m128i_i64[0], v736);
                    sub_11CDA0((__int64)v736);
                    goto LABEL_349;
                  }
                }
              }
LABEL_1256:
              if ( (unsigned __int8)sub_14DB30(v9) )
                goto LABEL_32;
              v11 = (unsigned __int64)sub_11C8E0((__int64)v9, nullptr, 7);
              if ( (_QWORD)v11 )
              {
                if ( (unsigned __int8)sub_14F6A0(v11) )
                  goto LABEL_32;
              }
              if ( (unsigned __int8)sub_11FD80(v20, (__int64 *)&v803 + 1, 1) )
              {
                if ( v803 < 0 )
                {
                  *((_QWORD *)&v11 + 1) = v798;
                  if ( (unsigned __int8)sub_120B00(
                                          (__int64)v20,
                                          (unsigned __int64 *)v798,
                                          *((__int64 *)&v803 + 1),
                                          *(double *)a7.m128i_i64) )
                    goto LABEL_2054;
                }
              }
              if ( *((_BYTE *)v9 + 48) == 4 )
              {
                v731 = *((_DWORD **)v9 + 7);
                if ( *v731 == 14 )
                {
                  v732 = sub_11C8A0((__int64)v731, nullptr);
                  v733 = v732;
                  if ( v732 )
                  {
                    *((_QWORD *)&v803 + 1) = sub_14E8B0(*(_DWORD *)(v732 + 4), *(_QWORD *)(v732 + 8));
                    if ( v803 < 0 )
                    {
                      *((_QWORD *)&v11 + 1) = v798;
                      if ( (unsigned __int8)sub_120B00(
                                              v733,
                                              (unsigned __int64 *)v798,
                                              *((__int64 *)&v803 + 1),
                                              *(double *)a7.m128i_i64) )
                      {
LABEL_2054:
                        *v9 = 13;
                        goto LABEL_32;
                      }
                    }
                  }
                  if ( *((_BYTE *)v9 + 32) != 4 )
                  {
LABEL_2058:
                    if ( *((_BYTE *)v9 + 48) != 4 )
                    {
LABEL_1263:
                      *((_QWORD *)&v11 + 1) = v9;
                      if ( (unsigned __int8)sub_14F770((__int64)v798, (__int64)v9, *(double *)a7.m128i_i64) )
                        goto LABEL_32;
                      *((_QWORD *)&v11 + 1) = v9;
                      if ( (unsigned __int8)sub_14F2F0((__int64)v798, (__int64)v9, *(double *)a7.m128i_i64) )
                        goto LABEL_32;
                      v389 = v795.m128i_i64[0];
                      *((_QWORD *)&v11 + 1) = v794;
                      if ( (unsigned __int8)sub_1194E0((char *)v9, v794, (__int64)v793, v795.m128i_i64[0], (__int64)v20) )
                        goto LABEL_32;
                      *((_QWORD *)&v11 + 1) = v794;
                      if ( (unsigned __int8)sub_1194E0((char *)v9, v794, (__int64)v793, (__int64)v20, v389) )
                        goto LABEL_32;
                      if ( v794 )
                      {
                        *((_QWORD *)&v11 + 1) = v793;
                        *(_QWORD *)&v11 = v794;
                        if ( (unsigned __int8)sub_158D70(v11, (__int64)v9, (__m128)a7, a8) )
                          goto LABEL_32;
                      }
                      *((_QWORD *)&v11 + 1) = v793;
                      if ( (unsigned __int8)sub_118AF0((__int64)v794, (__int64)v793, (__int64)v796, (__int64)v9) )
                        goto LABEL_32;
                      v390 = (unsigned __int64 *)v798;
                      *((_QWORD *)&v11 + 1) = v794;
                      if ( (unsigned __int8)sub_189DE0((__int64)v798, (__int64)v794, (__int64)v793, (__int64)v9) )
                        goto LABEL_32;
                      *((_QWORD *)&v11 + 1) = v390;
                      if ( (unsigned __int8)sub_151A60((__int64)v9, v390) )
                        goto LABEL_32;
                      goto LABEL_19;
                    }
LABEL_2051:
                    *((_QWORD *)&v11 + 1) = v798;
                    if ( (unsigned __int8)sub_15A480(
                                            (__int64)v9,
                                            (__int64)v798,
                                            v794,
                                            (__int64)v20,
                                            v795.m128i_i64[0],
                                            (__int64)v793,
                                            *(double *)a7.m128i_i64) )
                      goto LABEL_32;
                    goto LABEL_1263;
                  }
                }
                else if ( *((_BYTE *)v9 + 32) != 4 )
                {
                  goto LABEL_2051;
                }
              }
              else if ( *((_BYTE *)v9 + 32) != 4 )
              {
                goto LABEL_1263;
              }
              *((_QWORD *)&v11 + 1) = v798;
              if ( (unsigned __int8)sub_15A480(
                                      (__int64)v9,
                                      (__int64)v798,
                                      v794,
                                      v795.m128i_i64[0],
                                      (__int64)v20,
                                      (__int64)v793,
                                      *(double *)a7.m128i_i64) )
                goto LABEL_32;
              goto LABEL_2058;
            }
            v319 = v794[4].m128i_i64[0];
            if ( *(_QWORD *)(v319 + 1352) == -1 )
              goto LABEL_1213;
            if ( *((_BYTE *)v9 + 48) == 5 )
            {
              if ( (unsigned __int8)sub_159410(v795.m128i_i64[0], v797->m128i_i64, 0)
                && *(_QWORD *)(v319 + 1352) == v808 )
              {
                v373 = (__int64)v20;
                goto LABEL_1208;
              }
              v320 = *((_BYTE *)v9 + 32);
              if ( v320 != 5 )
                goto LABEL_1040;
              if ( *(_QWORD *)(v319 + 1352) == -1 )
                goto LABEL_1042;
            }
            else
            {
              v320 = *((_BYTE *)v9 + 32);
              if ( v320 != 5 )
                goto LABEL_1040;
            }
            if ( !(unsigned __int8)sub_159410((__int64)v20, v797->m128i_i64, 0) || *(_QWORD *)(v319 + 1352) != v808 )
            {
LABEL_1213:
              v320 = *((_BYTE *)v9 + 32);
LABEL_1040:
              if ( v320 != 14 || *((_BYTE *)v9 + 48) != 14 )
              {
LABEL_1042:
                v321 = sub_11C8E0((__int64)v9, &v806, 9);
                if ( v321 )
                {
                  if ( *(_BYTE *)v806 == 14 )
                  {
                    v492 = *((_QWORD *)v806 + 1);
                    if ( *(_DWORD *)(v492 + 20) == *(_DWORD *)(v321 + 36) )
                    {
                      *((_QWORD *)&v493 + 1) = v793;
                      *(_QWORD *)&v493 = v794;
                      if ( (unsigned __int8)sub_14EFD0(v493, v321 + 32, v321 + 32, v492 + 16, 0, a7) )
                      {
                        v494 = (char *)v797;
                        src[0] = nullptr;
                        v808 = 0xFFFFFFFF00000000LL;
                        sub_11CA10(v797->m128i_i8, (char *)(v321 + 32));
                        sub_11CA10(v494, (char *)v806);
                        sub_11CA10((char *)src[0], (char *)(v321 + 32));
                        *((_QWORD *)&v11 + 1) = v798;
                        v495 = sub_15BC70(
                                 (unsigned int *)v321,
                                 (unsigned __int64 *)v798,
                                 (__int64)v794,
                                 (__int64)v793,
                                 (int **)v9,
                                 a6,
                                 a7,
                                 2u);
                        v801 += v495;
                        sub_11CDA0((__int64)v494);
                        goto LABEL_32;
                      }
                    }
                  }
                }
                goto LABEL_1044;
              }
              v759 = *((_QWORD *)v9 + 5);
              *((_QWORD *)&v760 + 1) = v793;
              src[0] = nullptr;
              v808 = 0xFFFFFFFF00000000LL;
              *(_QWORD *)&v760 = v794;
              if ( (unsigned __int8)sub_14EFD0(v760, (__int64)v797, v759, *((_QWORD *)v9 + 7) + 16LL, 0, a7)
                && (unsigned __int8)sub_157240(
                                      (__int64)v794,
                                      *((_QWORD *)v9 + 7),
                                      *((_QWORD *)v9 + 5) + 16LL,
                                      (__m128)a7) )
              {
                sub_11CA10((char *)(*((_QWORD *)v9 + 5) + 16LL), (char *)(*((_QWORD *)v9 + 7) + 16LL));
                *((_QWORD *)&v11 + 1) = v797;
                sub_11CA10((char *)v795.m128i_i64[0], v797->m128i_i8);
              }
              else
              {
                *((_QWORD *)&v761 + 1) = v793;
                *(_QWORD *)&v761 = v794;
                if ( (unsigned __int8)sub_14EFD0(
                                        v761,
                                        (__int64)v797,
                                        *((_QWORD *)v9 + 7),
                                        *((_QWORD *)v9 + 5) + 16LL,
                                        0,
                                        a7)
                  && (unsigned __int8)sub_157240(
                                        (__int64)v794,
                                        *((_QWORD *)v9 + 5),
                                        *((_QWORD *)v9 + 7) + 16LL,
                                        (__m128)a7) )
                {
                  sub_11CA10((char *)(*((_QWORD *)v9 + 5) + 16LL), (char *)(*((_QWORD *)v9 + 7) + 16LL));
                  *((_QWORD *)&v11 + 1) = v797;
                  sub_11CA10(v20, v797->m128i_i8);
                }
                else
                {
                  v762 = *((_BYTE **)v9 + 5);
                  v763 = *((_BYTE **)v9 + 7);
                  if ( *v762 != v763[16]
                    || (v764 = v762[16], *v763 != v764)
                    || *v762 == v764
                    || !(unsigned __int8)sub_157240((__int64)v794, (__int64)v762, (__int64)(v763 + 16), (__m128)a7)
                    || !(unsigned __int8)sub_157240(
                                           (__int64)v794,
                                           *((_QWORD *)v9 + 7),
                                           *((_QWORD *)v9 + 5) + 16LL,
                                           (__m128)a7) )
                  {
                    sub_11CDA0((__int64)v797);
                    goto LABEL_1042;
                  }
                  *((_QWORD *)&v11 + 1) = *((_QWORD *)v9 + 7) + 16LL;
                  sub_11CA10((char *)(*((_QWORD *)v9 + 5) + 16LL), *((char **)&v11 + 1));
                }
              }
LABEL_2152:
              sub_11CDA0((__int64)v797);
              goto LABEL_32;
            }
            v373 = v795.m128i_i64[0];
LABEL_1208:
            v374 = (void *)*(int *)(v373 + 4);
            if ( (_DWORD)v374 == *((_DWORD *)v798 + 21) )
            {
              if ( *(_BYTE *)v373 != 5 )
              {
                if ( !under_debugger )
                  sub_383060(0xCA8Eu, *(double *)a7.m128i_i64);
                goto LABEL_2165;
              }
              v375 = v10 + 2;
              v376 = (__int64 *)v794[4].m128i_i64[0];
              v377 = (unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v373 + 8) + 8LL) + v376[180]);
              src[0] = v374;
              v808 = (__int64)v377;
              if ( !(unsigned __int8)sub_F7AC0(v376, v797, *(double *)a7.m128i_i64, a8) )
                v375 = v801;
              v801 = v375;
            }
            goto LABEL_1213;
          }
        }
        *((_QWORD *)&v11 + 1) = v798;
        if ( (unsigned __int8)sub_126F10(
                                *((int **)v358 + 1),
                                (unsigned __int64 *)v798,
                                v803,
                                v155,
                                *(double *)a7.m128i_i64) )
        {
          *(_DWORD *)(*((_QWORD *)v358 + 1) + 4LL) = -1;
          goto LABEL_349;
        }
        goto LABEL_627;
      case 0xDu:
        v20 = (char *)(v9 + 12);
        v51 = (unsigned __int64 *)v798;
        *((_QWORD *)&v11 + 1) = v9 + 8;
        v795.m128i_i64[0] = (__int64)(v9 + 8);
        if ( (unsigned __int8)sub_151FF0(
                                (unsigned __int64 *)v798,
                                (__int64)(v9 + 8),
                                (__int64)v794,
                                (__int64)v9,
                                0,
                                (__int64)(v9 + 12),
                                a7) )
          goto LABEL_32;
        *((_QWORD *)&v11 + 1) = v9 + 12;
        if ( (unsigned __int8)sub_151FF0(v51, (__int64)(v9 + 12), (__int64)v794, (__int64)v9, 0, (__int64)(v9 + 8), a7) )
          goto LABEL_32;
        if ( sub_125B60((unsigned __int8 *)v9 + 32, (__int64)(v9 + 12), 0, *(double *)a7.m128i_i64) )
        {
          if ( !v794 )
          {
            memset(src, 0, sizeof(src));
            v808 = (__int64)&off_4DDD00;
            *(_QWORD *)&v810 = *((_QWORD *)v798 + 12);
            *((_QWORD *)&v11 + 1) = &v808;
            if ( (unsigned int)sub_11F760(v9, &v808) )
              goto LABEL_160;
          }
          *((_QWORD *)&v11 + 1) = v798;
          sub_120A10(v795.m128i_i64[0], (unsigned __int64 *)v798, 0, v9[9], *((_QWORD *)v9 + 3), 0);
          goto LABEL_349;
        }
        if ( *((_BYTE *)v9 + 32) == 14 )
        {
          v807 = nullptr;
          v806 = (unsigned int *)0xFFFFFFFF00000000LL;
          v343 = *(_DWORD *)(*((_QWORD *)v9 + 5) + 20LL);
          sub_125180((unsigned __int8 *)&v806, (unsigned __int8 *)v9 + 48);
          if ( (unsigned __int8)sub_127850((__int64)&v806, (unsigned __int64 *)v798, v343, 0, a7) )
          {
            v775 = (char *)(v9 + 12);
            v344 = v795.m128i_i64[0];
            goto LABEL_1114;
          }
        }
        else
        {
          v52 = *((_BYTE *)v9 + 48) == 14;
          v797 = (__m128i *)&v808;
          if ( !v52 )
            goto LABEL_218;
          v807 = nullptr;
          v806 = (unsigned int *)0xFFFFFFFF00000000LL;
          v343 = *(_DWORD *)(*((_QWORD *)v9 + 7) + 20LL);
          sub_125180((unsigned __int8 *)&v806, (unsigned __int8 *)v795.m128i_i64[0]);
          if ( (unsigned __int8)sub_127850((__int64)&v806, (unsigned __int64 *)v798, v343, 0, a7) )
          {
            v344 = (__int64)(v9 + 12);
            v775 = (char *)v795.m128i_i64[0];
LABEL_1114:
            v345 = sub_125B60((unsigned __int8 *)&v806, *(_QWORD *)(v344 + 8) + 16LL, 0, *(double *)a7.m128i_i64);
            v797 = (__m128i *)&v808;
            if ( v345 )
            {
              if ( (_BYTE)v806 != 4
                || v794
                || (v808 = (__int64)&off_4DDD00,
                    v758 = *((_QWORD *)v798 + 12),
                    memset(src, 0, sizeof(src)),
                    *(_QWORD *)&v810 = v758,
                    !(unsigned int)sub_11F760(v807, v797)) )
              {
                sub_11CDA0((__int64)&v806);
                sub_11CA10((char *)&v806, *(char **)(v344 + 8));
                v746 = (unsigned __int64 *)v798;
                sub_1207E0((char *)&v806, (unsigned __int64 *)v798, 9, *((_QWORD *)v9 + 3), *(_DWORD *)(v344 + 4), a7);
                sub_11CA10((char *)v344, (char *)&v806);
                sub_1273B0((__int64)v775, v746, *((_QWORD *)v9 + 3), v343, a7);
                *((_QWORD *)&v11 + 1) = v746;
                sub_1207E0(v775, v746, 9, *((_QWORD *)v9 + 3), *(_DWORD *)(v344 + 4), a7);
                sub_11CDA0((__int64)&v806);
                goto LABEL_32;
              }
            }
            goto LABEL_1115;
          }
        }
        v797 = (__m128i *)&v808;
LABEL_1115:
        sub_11CDA0((__int64)&v806);
LABEL_218:
        if ( !(unsigned __int8)sub_11FD80((char *)v795.m128i_i64[0], v797->m128i_i64, 0) || v808 )
        {
          if ( *((_BYTE *)v9 + 48) == 2 && *((_BYTE *)v9 + 32) == 10 )
          {
            v512 = *((_QWORD *)v9 + 5);
            if ( *(_BYTE *)v512 == 6 )
            {
              v513 = *(_QWORD *)(v512 + 8);
              if ( !v513 )
              {
                *((_QWORD *)&v11 + 1) = *((_QWORD *)v9 + 7);
                v514 = sub_14E8A0(v9[13], *((__int64 *)&v11 + 1));
                *(_BYTE *)v512 = 6;
                v515 = 8 * *((_DWORD *)v798 + 21);
                LODWORD(v797) = *((_DWORD *)v798 + 21);
                if ( (unsigned __int64)v515 <= 0x3F )
                  v513 = 1LL << v515;
                *(_QWORD *)(v512 + 8) = -v514 & (v513 - 1);
                goto LABEL_349;
              }
            }
          }
          *((_QWORD *)&v11 + 1) = v797;
          if ( !(unsigned __int8)sub_11FD80((char *)v9 + 48, v797->m128i_i64, 0) || v808 )
          {
            if ( *((_BYTE *)v9 + 48) == 10 )
            {
              v420 = *((char **)v9 + 7);
              v421 = *v420;
              if ( *v420 == 6 && !*((_QWORD *)v420 + 1) )
                goto LABEL_349;
              if ( *((_BYTE *)v9 + 32) == 10 )
              {
                v422 = *((_QWORD *)v9 + 5);
                if ( *(_BYTE *)v422 == v421 && (a9 & 1) != 0 )
                {
                  if ( v421 == 5 )
                  {
                    *(_QWORD *)&v803 = sub_15AEB0(
                                         *(_QWORD *)(*(_QWORD *)(v422 + 8) + 8LL),
                                         *(_QWORD *)(*((_QWORD *)v420 + 1) + 8LL),
                                         v9[9]);
                    goto LABEL_259;
                  }
                  if ( v421 == 6 )
                  {
                    *(_QWORD *)&v803 = sub_15A440(*(_QWORD *)(v422 + 8), *((_QWORD *)v420 + 1), v9[9]);
                    goto LABEL_259;
                  }
                }
              }
            }
            if ( !(unsigned __int8)sub_11FD80((char *)v9 + 48, (__int64 *)&v803, 1) )
              goto LABEL_231;
            *((_QWORD *)&v11 + 1) = v803;
            if ( *((_BYTE *)v9 + 32) == 10 )
            {
              v487 = *((_QWORD *)v9 + 5);
              if ( *(_BYTE *)v487 == 5 )
              {
                v573 = *((_QWORD *)v798 + 12);
                *((_QWORD *)&v11 + 1) = sub_15AEB0(*(_QWORD *)(*(_QWORD *)(v487 + 8) + 8LL), v803, v9[9]);
                if ( *(_DWORD *)(*(_QWORD *)(v573 + 24) + 24LL) != 8 )
                  *((_QWORD *)&v11 + 1) = SDWORD2(v11);
                if ( (unsigned __int8)sub_1599D0(*((_QWORD *)v9 + 5), *((__int64 *)&v11 + 1), (__int64)v794, a9) )
                  goto LABEL_349;
                *((_QWORD *)&v11 + 1) = v803;
              }
              else if ( *(_BYTE *)v487 == 6 && (a9 & 1) != 0 )
              {
                v488 = sub_15A440(*(_QWORD *)(v487 + 8), v803, v9[9]);
LABEL_1548:
                *(_BYTE *)v487 = 6;
                v489 = v488;
                v490 = 8 * *((_DWORD *)v798 + 21);
                LODWORD(v797) = *((_DWORD *)v798 + 21);
                v491 = 0;
                *((_QWORD *)&v11 + 1) = v490;
                if ( (unsigned __int64)v490 <= 0x3F )
                  v491 = 1LL << v490;
                *(_QWORD *)(v487 + 8) = v489 & (v491 - 1);
                goto LABEL_349;
              }
            }
            if ( v11 < 0 )
            {
              v572 = *((_QWORD *)&v11 + 1);
              *((_QWORD *)&v11 + 1) = v798;
              sub_120B00((__int64)(v9 + 12), (unsigned __int64 *)v798, v572, *(double *)a7.m128i_i64);
              *v9 = 12;
              goto LABEL_32;
            }
            if ( *((_BYTE *)v9 + 32) == 4 )
            {
              v482 = *((_QWORD *)v9 + 5);
              if ( *(_DWORD *)v482 == 12 )
              {
                if ( v794 )
                {
                  *((_QWORD *)&v11 + 1) = v794;
                  v483 = *(_DWORD *)(v794[4].m128i_i64[0] + 1184);
                  v484 = *(_QWORD *)(v794[30].m128i_i64[0] + 112);
                  if ( *(_BYTE *)(v482 + 32) == 1 )
                  {
                    v571 = *(_DWORD *)(v482 + 40);
                    if ( *(_DWORD *)(v484 + 60) == v571 || v483 == v571 )
                      goto LABEL_1543;
                  }
                  if ( *(_BYTE *)(v482 + 48) == 1 )
                  {
                    v485 = *(_DWORD *)(v482 + 56);
                    if ( *(_DWORD *)(v484 + 60) == v485 || v483 == v485 )
                    {
                      sub_11CA10((char *)(v482 + 32), (char *)(v482 + 48));
LABEL_1543:
                      *((_QWORD *)&v11 + 1) = *((_QWORD *)v9 + 5) + 48LL;
                      sub_11CA10((char *)v9 + 48, *((char **)&v11 + 1));
                      v486 = *((_DWORD **)v9 + 5);
                      *v9 = 12;
                      *v486 = 13;
                      goto LABEL_32;
                    }
                  }
                }
              }
            }
            if ( (unsigned __int8)sub_14DB30(v9) )
              goto LABEL_32;
            if ( *((_BYTE *)v9 + 32) != 4 )
              goto LABEL_231;
            v476 = *((_QWORD *)v9 + 5);
            v477 = *(_DWORD *)v476;
            if ( *(_DWORD *)v476 == 7 )
            {
              if ( (unsigned __int8)sub_14F6A0(v476) )
                goto LABEL_32;
              if ( *((_BYTE *)v9 + 32) != 4 )
              {
LABEL_231:
                if ( !(unsigned __int8)sub_11FD80((char *)v795.m128i_i64[0], (__int64 *)&v803, 1) )
                {
LABEL_232:
                  if ( *((_BYTE *)v9 + 48) != 4 )
                    goto LABEL_233;
                  v463 = *((unsigned int **)v9 + 7);
                  v464 = *v463;
                  if ( (_DWORD)v464 != 12 )
                  {
LABEL_1486:
                    if ( (_DWORD)v464 == 5 )
                    {
                      v643 = (char *)v797;
                      *v9 = 12;
                      sub_123A40((__int64)v643, (unsigned __int8 *)v463 + 32, v464, v53);
                      *((_QWORD *)&v11 + 1) = v643;
                      sub_11CA10((char *)v9 + 48, v643);
                      sub_11CDA0((__int64)v643);
                      goto LABEL_32;
                    }
                    if ( (_DWORD)v464 == 7 )
                    {
                      *((_QWORD *)&v11 + 1) = v798;
                      sub_120A10((__int64)(v463 + 12), (unsigned __int64 *)v798, 1, v463[9], *((_QWORD *)v463 + 3), 0);
                      **((_DWORD **)v9 + 7) = 12;
                      *v9 = 12;
                      goto LABEL_32;
                    }
                    if ( *((_BYTE *)v9 + 32) != 4 )
                      goto LABEL_1492;
                    goto LABEL_1489;
                  }
                  if ( !sub_125B60((unsigned __int8 *)v463 + 32, v795.m128i_i64[0], 0, *(double *)a7.m128i_i64)
                    && !sub_125B60(
                          (unsigned __int8 *)(*((_QWORD *)v9 + 7) + 48LL),
                          v795.m128i_i64[0],
                          0,
                          *(double *)a7.m128i_i64)
                    || !sub_14E190(*((_QWORD *)v798 + 12), (__int64)v794, v9) )
                  {
                    if ( *((_BYTE *)v9 + 48) == 4 )
                    {
                      v463 = *((unsigned int **)v9 + 7);
                      v464 = *v463;
                      goto LABEL_1486;
                    }
LABEL_233:
                    if ( *((_BYTE *)v9 + 32) != 4 )
                      goto LABEL_234;
LABEL_1489:
                    if ( **((_DWORD **)v9 + 5) == 12
                      && !(unsigned __int8)sub_1516B0((__int64)(v9 + 12), (__int64)v798, 0)
                      && sub_14F260(*((_QWORD *)v798 + 12), (__int64)v794, (__int64)(v9 + 12)) )
                    {
                      v609 = *((_QWORD *)v9 + 5);
                      v610 = (unsigned __int8 *)(v609 + 32);
                      if ( sub_125B60((unsigned __int8 *)(v609 + 32), (__int64)(v9 + 12), 0, *(double *)a7.m128i_i64) )
                      {
                        v611 = (unsigned __int8 *)(v609 + 48);
                        if ( !sub_125B60(v611, (__int64)(v9 + 12), 0, *(double *)a7.m128i_i64) )
                        {
LABEL_1773:
                          v614 = (char *)v797;
                          sub_123A40((__int64)v797, v611, v612, v613);
                          *((_QWORD *)&v11 + 1) = v614;
                          sub_11CA10((char *)v795.m128i_i64[0], v614);
                          sub_11CDA0((__int64)v614);
                          goto LABEL_349;
                        }
LABEL_1933:
                        v611 = v610;
                        goto LABEL_1773;
                      }
                      if ( sub_125B60((unsigned __int8 *)(v609 + 48), (__int64)(v9 + 12), 0, *(double *)a7.m128i_i64) )
                        goto LABEL_1933;
                    }
                    if ( *((_BYTE *)v9 + 48) != 4 )
                    {
LABEL_234:
                      if ( v794 )
                      {
                        *((_QWORD *)&v11 + 1) = v793;
                        *(_QWORD *)&v11 = v794;
                        if ( (unsigned __int8)sub_158FC0(v11, (__int64)v9, (__m128)a7) )
                          goto LABEL_32;
                        *((_QWORD *)&v11 + 1) = v798;
                        if ( (unsigned __int8)sub_1205A0(v9, (__int64)v798, 0) )
                          goto LABEL_19;
                      }
                      else
                      {
                        *((_QWORD *)&v11 + 1) = v798;
                        if ( (unsigned __int8)sub_1205A0(v9, (__int64)v798, 0) )
                          goto LABEL_160;
                      }
                      if ( *((_BYTE *)v9 + 32) != 4 )
                      {
LABEL_238:
                        if ( *((_BYTE *)v9 + 48) == 4 && **((_DWORD **)v9 + 7) == 14 )
                        {
                          *((_QWORD *)&v11 + 1) = v798;
                          if ( (unsigned __int8)sub_154C10(
                                                  (__int64)v9,
                                                  (unsigned __int64 *)v798,
                                                  (__int64)(v9 + 12),
                                                  v795.m128i_i64[0],
                                                  *(double *)a7.m128i_i64) )
                            goto LABEL_32;
                        }
                        *((_QWORD *)&v11 + 1) = v9;
                        if ( (unsigned __int8)sub_14F770((__int64)v798, (__int64)v9, *(double *)a7.m128i_i64) )
                          goto LABEL_32;
                        v54 = (unsigned __int64 *)v798;
                        *((_QWORD *)&v11 + 1) = v798;
                        if ( (unsigned __int8)sub_154100((__int64)v9, (unsigned __int64 *)v798, v794, v793, a7, a8) )
                          goto LABEL_32;
                        *((_QWORD *)&v11 + 1) = v793;
                        if ( (unsigned __int8)sub_118AF0((__int64)v794, (__int64)v793, (__int64)v796, (__int64)v9) )
                          goto LABEL_32;
                        *((_QWORD *)&v11 + 1) = v793;
                        if ( (unsigned __int8)sub_119F10(v794, (__int64)v793, (__int64)v9) )
                          goto LABEL_32;
                        *((_QWORD *)&v11 + 1) = v794;
                        if ( (unsigned __int8)sub_1194E0(
                                                (char *)v9,
                                                v794,
                                                (__int64)v793,
                                                (__int64)(v9 + 12),
                                                v795.m128i_i64[0]) )
                          goto LABEL_32;
                        *((_QWORD *)&v11 + 1) = v54;
                        if ( (unsigned __int8)sub_151A60((__int64)v9, v54) )
                          goto LABEL_32;
                        goto LABEL_19;
                      }
                      v745 = *((_QWORD *)v9 + 5);
                      if ( *(_DWORD *)v745 == 22 )
                      {
                        if ( *(_BYTE *)(v745 + 48) != 2 )
                          goto LABEL_238;
                        v747 = *(_QWORD *)(*(_QWORD *)(v745 + 56) + 16LL);
                        if ( sub_125B60((unsigned __int8 *)v9 + 48, v745 + 32, 0, *(double *)a7.m128i_i64) )
                        {
                          *v9 = 14;
                          v769 = 0;
                          if ( (v747 & 0xC0) == 0 )
                            v769 = 1LL << v747;
                          *((_QWORD *)&v11 + 1) = v798;
                          sub_120A10(
                            v795.m128i_i64[0],
                            (unsigned __int64 *)v798,
                            v769 - 1,
                            v9[13],
                            *((_QWORD *)v9 + 3),
                            0);
                          goto LABEL_32;
                        }
                        if ( *((_BYTE *)v9 + 32) != 4 )
                          goto LABEL_238;
                        v745 = *((_QWORD *)v9 + 5);
                      }
                      if ( *(_DWORD *)v745 == 14 )
                      {
                        *((_QWORD *)&v11 + 1) = v798;
                        if ( (unsigned __int8)sub_154C10(
                                                (__int64)v9,
                                                (unsigned __int64 *)v798,
                                                v795.m128i_i64[0],
                                                (__int64)(v9 + 12),
                                                *(double *)a7.m128i_i64) )
                          goto LABEL_32;
                      }
                      goto LABEL_238;
                    }
                    v463 = *((unsigned int **)v9 + 7);
LABEL_1492:
                    if ( *v463 == 12
                      && !(unsigned __int8)sub_1516B0(v795.m128i_i64[0], (__int64)v798, 0)
                      && sub_14F260(*((_QWORD *)v798 + 12), (__int64)v794, v795.m128i_i64[0]) )
                    {
                      v465 = sub_11C8E0(*((_QWORD *)v9 + 7), v805, 13);
                      v466 = v465;
                      if ( v465 )
                      {
                        if ( sub_125B60((unsigned __int8 *)(v465 + 32), v795.m128i_i64[0], 0, *(double *)a7.m128i_i64) )
                        {
                          sub_123A40((__int64)&v806, (unsigned __int8 *)(v466 + 48), v467, v468);
                          sub_11CA10((char *)v795.m128i_i64[0], (char *)&v806);
                          v469 = (char *)v797;
                          sub_123A40((__int64)v797, v805[0], v470, v471);
                          *((_QWORD *)&v11 + 1) = v469;
                          sub_11CA10((char *)v9 + 48, v469);
                          sub_11CDA0((__int64)v469);
                          sub_11CDA0((__int64)&v806);
                          goto LABEL_32;
                        }
                      }
                    }
                    goto LABEL_234;
                  }
                  v644 = *((_QWORD *)v9 + 7);
                  *v9 = 5;
                  v645 = sub_125B60((unsigned __int8 *)(v644 + 32), v795.m128i_i64[0], 0, *(double *)a7.m128i_i64);
                  v646 = *((_QWORD *)v9 + 7);
                  *((_QWORD *)&v11 + 1) = v646 + 32;
                  if ( v645 )
                    *((_QWORD *)&v11 + 1) = v646 + 48;
                  sub_11CA10((char *)v795.m128i_i64[0], *((char **)&v11 + 1));
LABEL_350:
                  if ( *((_BYTE *)v9 + 48) == 4 )
                    goto LABEL_387;
                  goto LABEL_351;
                }
                if ( !(unsigned __int8)sub_11FD80((char *)v9 + 48, (__int64 *)&v803 + 1, 1)
                  || *((_BYTE *)v9 + 32) == 2 && (*((_BYTE *)v9 + 33) & 8) != 0 )
                {
                  if ( (_QWORD)v803 != 1 )
                    goto LABEL_232;
LABEL_1613:
                  if ( (unsigned __int8)sub_154F80((unsigned __int64 *)v798, (__int64)(v9 + 12)) )
                  {
                    sub_11CA10((char *)v795.m128i_i64[0], (char *)v9 + 48);
                    goto LABEL_283;
                  }
                  goto LABEL_232;
                }
                if ( *((_BYTE *)v9 + 48) == 2 && (*((_BYTE *)v9 + 49) & 8) != 0 )
                {
                  if ( (_QWORD)v803 != 1 )
                    goto LABEL_233;
                  goto LABEL_1613;
                }
                v473 = v9[9];
                v474 = *((_QWORD *)&v803 + 1);
                v475 = sub_32ABC0(v803, v473, 1);
                *(_QWORD *)&v803 = v475 - sub_32ABC0(v474, v473, 1);
LABEL_259:
                if ( !v794 )
                {
                  *((_QWORD *)&v11 + 1) = v798;
                  if ( (unsigned __int8)sub_1205A0(v9, (__int64)v798, 1) )
                    goto LABEL_160;
                }
                if ( *((_BYTE *)v9 + 32) == 4 )
                {
                  v118 = *((_BYTE **)v9 + 5);
                  src[0] = nullptr;
                  v808 = (__int64)&off_4DDCD8;
                  *(_QWORD *)&v810 = *((_QWORD *)v798 + 12);
                  *((_QWORD *)&v810 + 1) = &v802;
                  src[1] = v794;
                  *(_OWORD *)&src[2] = (unsigned __int64)v793;
                  if ( (unsigned int)sub_11F760(v118, &v808) )
                  {
                    if ( !under_debugger )
                      sub_383060(0xC80Du, *(double *)a7.m128i_i64);
                    goto LABEL_2165;
                  }
                }
                *((_QWORD *)&v11 + 1) = v798;
                sub_120A10((__int64)v792, (unsigned __int64 *)v798, v803, v9[17], *((_QWORD *)v9 + 3), 0);
                v9[1] &= ~0x10u;
                goto LABEL_262;
              }
              v476 = *((_QWORD *)v9 + 5);
              v477 = *(_DWORD *)v476;
            }
            if ( (unsigned int)(v477 - 12) <= 1
              && (unsigned __int8)sub_11FD80((char *)(v476 + 48), (__int64 *)&v803 + 1, 1)
              && (unsigned __int8)sub_14E580((__int64)v794, a9, v803, *((__int64 *)&v803 + 1)) )
            {
              if ( *((_BYTE *)v9 + 32) != 4 || **((_DWORD **)v9 + 5) != 13 )
                v479 = -v479;
              v480 = v9[9];
              v481 = v478 + v479;
              goto LABEL_1535;
            }
            goto LABEL_231;
          }
LABEL_349:
          *v9 = 4;
          goto LABEL_350;
        }
LABEL_846:
        *v9 = 5;
LABEL_653:
        *((_QWORD *)&v11 + 1) = v20;
        sub_11CA10((char *)v795.m128i_i64[0], v20);
        goto LABEL_350;
      case 0xEu:
        if ( *((_BYTE *)v9 + 32) != 2 && *((_BYTE *)v9 + 48) != 2 )
          goto LABEL_382;
        v795.m128i_i64[0] = (__int64)(v9 + 8);
        v20 = (char *)(v9 + 12);
        v797 = (__m128i *)&v808;
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 32, &v808, 0) && v808 == 1 )
          goto LABEL_341;
        *((_QWORD *)&v11 + 1) = v797;
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, v797->m128i_i64, 0) && v808 == 1 )
          goto LABEL_349;
        if ( (unsigned __int8)sub_11FD80((char *)v795.m128i_i64[0], v797->m128i_i64, 1) && v808 == -1 )
          goto LABEL_846;
        *((_QWORD *)&v11 + 1) = v797;
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, v797->m128i_i64, 1) && v808 == -1 )
        {
LABEL_618:
          *v9 = 5;
          goto LABEL_350;
        }
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, v797->m128i_i64, 0) && !v808 )
          sub_11CA10((char *)v795.m128i_i64[0], (char *)v9 + 48);
        *((_QWORD *)&v11 + 1) = v797;
        if ( (unsigned __int8)sub_11FD80((char *)v795.m128i_i64[0], v797->m128i_i64, 0) )
        {
          if ( !v808 )
          {
            if ( v794 )
              goto LABEL_349;
            v808 = (__int64)&off_4DDD00;
            *((_QWORD *)&v11 + 1) = v797;
            v445 = *((_QWORD *)v798 + 12);
            memset(src, 0, sizeof(src));
            *(_QWORD *)&v810 = v445;
            if ( !(unsigned int)sub_11F760(v9, v797) )
              goto LABEL_349;
          }
        }
        if ( (unsigned __int8)sub_11FD80((char *)v795.m128i_i64[0], (__int64 *)&v803, 0)
          && (unsigned __int8)sub_11FD80((char *)v9 + 48, (__int64 *)&v803 + 1, 0) )
        {
          *(_QWORD *)&v803 = *((_QWORD *)&v803 + 1) * v803;
          goto LABEL_259;
        }
        v140 = sub_11C8A0((__int64)v9, v805);
        v141 = *(_DWORD *)(v140 + 4);
        if ( *v805[0] == 4 && **((_DWORD **)v805[0] + 1) == 5 )
        {
          sub_14E870(v141, *(__m128i **)(v140 + 8), -*(_QWORD *)(*(_QWORD *)(v140 + 8) + 16LL));
          if ( v795.m128i_i64[0] == v140 )
            sub_11CA10((char *)v795.m128i_i64[0], (char *)v9 + 48);
          goto LABEL_518;
        }
        v142 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v140 + 8) + 16LL), v141, 0);
        v143 = v805[0];
        if ( *v805[0] != 4 )
          goto LABEL_382;
        v144 = *((int **)v805[0] + 1);
        v145 = *v144;
        if ( *v144 != 20 )
          goto LABEL_603;
        v795.m128i_i64[0] = (v142 - 1) & v142;
        if ( !v795.m128i_i64[0] )
        {
          v547 = log2ceil();
          v548 = v9[9];
          v549 = v547;
          v550 = *(unsigned __int8 *)(*((_QWORD *)v798 + 12) + 130LL);
          v551 = 8 * v548;
          v552 = 8 * v548;
          if ( v548 < v550 )
            v552 = 8 * v550;
          v553 = v552 - v549;
          v554 = 0;
          if ( (unsigned __int64)v553 <= 0x3F )
            v554 = (v142 - 1) << v553;
          if ( (unsigned __int64)v551 <= 0x3F )
            v795.m128i_i64[0] = 1LL << v551;
          v555 = sub_11C8A0(*((_QWORD *)v805[0] + 1), &v806);
          if ( v555 )
          {
            v556 = sub_14E8A0(*(_DWORD *)(v555 + 4), *(_QWORD *)(v555 + 8));
            if ( (v554 | v556) == v795.m128i_i64[0] - 1 )
            {
              v557 = sub_207610((__int64)v806, *((int ***)v805[0] + 1));
              v558 = sub_11CA90(v557, *(double *)a7.m128i_i64);
              v559 = (char *)v797;
              v560 = v558;
              sub_123A40((__int64)v797, (unsigned __int8 *)v806, v561, v562);
              *((_QWORD *)&v11 + 1) = v559;
              sub_11CA10((char *)v805[0], v559);
              if ( *((_DWORD *)v805[0] + 1) > v560 && *v805[0] == 1 )
              {
                *((_QWORD *)&v11 + 1) = v798;
                if ( (unsigned __int8)sub_12AB50((unsigned int **)v805[0], (unsigned __int64 *)v798, v560, 1, a7) )
                {
                  *((_QWORD *)&v11 + 1) = v798;
                  sub_1207E0((char *)v805[0], (unsigned __int64 *)v798, 9, *((_QWORD *)src[0] + 3), v9[17], a7);
                }
              }
              goto LABEL_2152;
            }
          }
          v143 = v805[0];
          if ( *v805[0] == 4 )
          {
            v144 = *((int **)v805[0] + 1);
            v145 = *v144;
LABEL_603:
            if ( (unsigned int)(v145 - 23) <= 1 && *((_BYTE *)v144 + 32) == 10 && *((_BYTE *)v144 + 48) == 2 )
            {
              v146 = *(unsigned __int8 *)(*((_QWORD *)v144 + 7) + 16LL);
              v147 = 0;
              if ( v146 <= 63 )
                v147 = 1LL << v146;
              if ( v147 == v142 )
              {
                v148 = (char *)v797;
                v808 = 0xFFFFFFFF00000000LL;
                src[0] = nullptr;
                sub_11CA10((char *)(*((_QWORD *)v143 + 1) + 32LL), v797->m128i_i8);
                sub_11CA10((char *)v805[0], v148);
                *((_QWORD *)&v11 + 1) = *(_QWORD *)(v140 + 8);
                sub_14E870(*(_DWORD *)(v140 + 4), *((__m128i **)&v11 + 1), -v142);
                *v9 = 20;
                sub_11CDA0((__int64)v148);
                goto LABEL_32;
              }
            }
          }
        }
LABEL_382:
        *((_QWORD *)&v11 + 1) = v793;
        if ( (unsigned __int8)sub_118AF0((__int64)v794, (__int64)v793, (__int64)v796, (__int64)v9) )
          goto LABEL_32;
        v15 = *v9;
        LODWORD(m128i_i64) = *v9;
        goto LABEL_20;
      case 0xFu:
        v20 = (char *)(v9 + 12);
        *((_QWORD *)&v11 + 1) = &v808;
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, &v808, 0) && v808 == 1 )
          goto LABEL_349;
        *((_QWORD *)&v11 + 1) = &v803;
        v795.m128i_i64[0] = (__int64)(v9 + 8);
        if ( !(unsigned __int8)sub_11FD80((char *)v9 + 32, (__int64 *)&v803, 0) )
          goto LABEL_19;
        *((_QWORD *)&v11 + 1) = (char *)&v803 + 8;
        if ( !(unsigned __int8)sub_11FD80((char *)v9 + 48, (__int64 *)&v803 + 1, 0) || !*((_QWORD *)&v803 + 1) )
          goto LABEL_1052;
        *(_QWORD *)&v803 = (unsigned __int64)v803 / *((_QWORD *)&v803 + 1);
        goto LABEL_259;
      case 0x10u:
        v20 = (char *)(v9 + 12);
        *((_QWORD *)&v11 + 1) = &v808;
        v797 = (__m128i *)&v808;
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, &v808, 1) && v808 == -1 )
          goto LABEL_618;
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 32, (__int64 *)&v803, 1)
          && (unsigned __int8)sub_11FD80((char *)v9 + 48, (__int64 *)&v803 + 1, 1)
          && *((_QWORD *)&v803 + 1)
          && v803 != __PAIR128__(-1, 0x8000000000000000LL) )
        {
          *(_QWORD *)&v803 = (__int64)v803 / *((_QWORD *)&v803 + 1);
          goto LABEL_259;
        }
        *((_QWORD *)&v11 + 1) = v797;
        if ( !(unsigned __int8)sub_11FD80((char *)v9 + 48, v797->m128i_i64, 0) || v808 != 1 )
          goto LABEL_19;
        goto LABEL_349;
      case 0x11u:
      case 0x12u:
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, &v808, 0) && v808 == 1 )
          goto LABEL_258;
        v46 = *v9 == 18;
        *((_QWORD *)&v11 + 1) = &v803;
        v795.m128i_i64[0] = (__int64)(v9 + 8);
        v47 = sub_11FD80((char *)v9 + 32, (__int64 *)&v803, v46);
        v15 = *v9;
        LODWORD(m128i_i64) = *v9;
        if ( !v47 )
        {
          if ( v15 == 17 && v794 )
          {
            *((_QWORD *)&v11 + 1) = v794;
            if ( (unsigned __int8)sub_11A880((__int64)v798, v794, (__int64)v793, (__int64)v9, *(double *)a7.m128i_i64) )
              goto LABEL_32;
            goto LABEL_19;
          }
          goto LABEL_20;
        }
        *((_QWORD *)&v11 + 1) = (char *)&v803 + 8;
        v218 = sub_11FD80((char *)v9 + 48, (__int64 *)&v803 + 1, v15 == 18);
        v15 = *v9;
        LODWORD(m128i_i64) = *v9;
        if ( !v218 )
          goto LABEL_1051;
        if ( v15 != 18 )
        {
          if ( !*((_QWORD *)&v803 + 1) )
          {
LABEL_1051:
            if ( v15 != 17 )
              goto LABEL_20;
LABEL_1052:
            if ( *((_BYTE *)v9 + 48) != 4 )
              goto LABEL_19;
            v330 = *((_QWORD *)v9 + 7);
            if ( *(_DWORD *)v330 != 9 || v9 == (unsigned int *)v793 && !*((_BYTE *)v9 + 64) )
              goto LABEL_19;
            if ( v794 )
            {
              v331 = *(_DWORD *)(v330 + 36);
              if ( v331 >= *(_DWORD *)(*(_QWORD *)(v794[4].m128i_i64[0] + 1504) + 80LL) )
              {
                *((_QWORD *)&v11 + 1) = (unsigned int)v331;
                v332 = sub_32ABC0(v803, v331, 0);
                if ( (_QWORD)v803 == v332 )
                {
                  v333 = (char *)v795.m128i_i64[0];
                  sub_12AB50((unsigned int **)v795.m128i_i64[0], (unsigned __int64 *)v798, v331, 1, a7);
                  sub_11D7A0((__int64)v9, v330);
                  sub_11CA10((char *)v9 + 64, (char *)(v330 + 64));
                  *((_QWORD *)&v11 + 1) = v330 + 48;
                  sub_11CA10(v333, (char *)(v330 + 48));
                  v9[9] = v331;
                  *(_DWORD *)(v330 + 68) = v331;
                  goto LABEL_32;
                }
              }
              goto LABEL_19;
            }
            goto LABEL_160;
          }
          *(_QWORD *)&v803 = (unsigned __int64)v803 % *((_QWORD *)&v803 + 1);
          goto LABEL_259;
        }
        if ( *((_QWORD *)&v803 + 1) )
        {
          *((_QWORD *)&v11 + 1) = 0x8000000000000000LL;
          if ( v803 == __PAIR128__(-1, 0x8000000000000000LL) )
            goto LABEL_20;
          *(_QWORD *)&v803 = (__int64)v803 % *((_QWORD *)&v803 + 1);
          goto LABEL_259;
        }
        if ( v800 )
          goto LABEL_31;
        goto LABEL_162;
      case 0x13u:
        v20 = (char *)(v9 + 12);
        v795.m128i_i64[0] = (__int64)(v9 + 8);
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 32, nullptr, 0) && *((_BYTE *)v9 + 48) != 2 )
          sub_11CA10((char *)v9 + 32, (char *)v9 + 48);
        *((_QWORD *)&v11 + 1) = v9 + 12;
        if ( sub_125B60((unsigned __int8 *)v795.m128i_i64[0], (__int64)(v9 + 12), 0, *(double *)a7.m128i_i64) )
          goto LABEL_348;
        v797 = (__m128i *)&v808;
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, &v808, 1) && v808 == -1
          || (unsigned __int8)sub_11FD80((char *)v9 + 48, v797->m128i_i64, 1)
          && v808 == 1
          && sub_11FDE0(v795.m128i_i64[0], (__int64)v798) )
        {
          goto LABEL_651;
        }
        if ( (unsigned __int64)(int)v9[9] <= 8 && *((_BYTE *)v9 + 32) == 4 )
        {
          v402 = *((_QWORD *)v9 + 5);
          if ( *(_DWORD *)v402 == 20 )
          {
            if ( (unsigned __int8)sub_11FD80((char *)(v402 + 48), (__int64 *)&v803, 0) )
            {
              if ( (_QWORD)v803 != 255 && (_QWORD)v803 != 0xFFFF && (_QWORD)v803 != 0xFFFFFFFFLL )
              {
                *((_QWORD *)&v11 + 1) = (char *)&v803 + 8;
                if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, (__int64 *)&v803 + 1, 0) )
                {
                  v403 = v803 & ~*((_QWORD *)&v803 + 1);
                  *((_QWORD *)&v803 + 1) = v403;
                  if ( v403 < (unsigned __int64)v803 )
                  {
                    a7 = _mm_unpacklo_epi64((__m128i)v403, (__m128i)v403);
                    m128i_i64 = *(_QWORD *)(*((_QWORD *)v9 + 5) + 56LL);
                    *(__m128i *)(m128i_i64 + 16) = a7;
                    goto LABEL_32;
                  }
                }
              }
            }
          }
        }
        v95 = (unsigned __int64 *)v798;
        if ( (unsigned __int8)sub_14E070(
                                (__int64)v798,
                                v794,
                                (__int64)v793,
                                v795.m128i_i64[0],
                                (__int64)(v9 + 12),
                                20,
                                a7,
                                a8) )
          goto LABEL_651;
        *((_QWORD *)&v11 + 1) = v794;
        if ( (unsigned __int8)sub_14E070(
                                (__int64)v95,
                                v794,
                                (__int64)v793,
                                (__int64)(v9 + 12),
                                v795.m128i_i64[0],
                                20,
                                a7,
                                a8) )
          goto LABEL_348;
        *((_QWORD *)&v11 + 1) = v794;
        if ( (unsigned __int8)sub_14E070(
                                (__int64)v95,
                                v794,
                                (__int64)v793,
                                v795.m128i_i64[0],
                                (__int64)(v9 + 12),
                                19,
                                a7,
                                a8) )
          goto LABEL_348;
        if ( (unsigned __int8)sub_14E070(
                                (__int64)v95,
                                v794,
                                (__int64)v793,
                                (__int64)(v9 + 12),
                                v795.m128i_i64[0],
                                19,
                                a7,
                                a8) )
          goto LABEL_651;
        if ( *((_BYTE *)v9 + 32) != 4 )
        {
          if ( !v794 )
            goto LABEL_368;
          goto LABEL_367;
        }
        if ( *((_BYTE *)v9 + 48) != 4 )
        {
          if ( v794 && **((_DWORD **)v9 + 5) == 21 )
          {
LABEL_1627:
            *((_QWORD *)&v11 + 1) = v793;
            if ( (unsigned __int8)sub_158080(v794, (__int64)v793, (__int64)v9, (__m128)a7, a8) )
              goto LABEL_32;
          }
LABEL_368:
          *((_QWORD *)&v11 + 1) = &v803;
          if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, (__int64 *)&v803, 0) )
          {
            v97 = *((_BYTE *)v9 + 32);
            if ( v97 != 4 )
            {
              if ( v97 == 10 )
              {
                v98 = *((_QWORD *)v9 + 5);
                if ( *(_BYTE *)v98 == 6 )
                {
                  m128i_i64 = v803;
                  v723 = *(_QWORD *)(v98 + 8);
                  v724 = v803 + v723;
                  a4 = v803 | v723;
                  if ( a4 == v724 )
                  {
                    *v9 = 12;
                    goto LABEL_32;
                  }
                }
              }
              goto LABEL_372;
            }
            v725 = *((_QWORD *)v9 + 5);
            if ( *(_DWORD *)v725 == 9 && *(_BYTE *)(v725 + 32) == 4 )
            {
              v726 = *(_QWORD *)(v725 + 40);
              if ( *(_DWORD *)v726 == 10 && *(_BYTE *)(v726 + 32) == 10 )
              {
                v727 = *(_QWORD *)(v726 + 40);
                if ( *(_BYTE *)v727 == 6 && *(_DWORD *)(v726 + 36) == v9[17] )
                {
                  v728 = 8 * *(_DWORD *)(v726 + 68);
                  if ( (unsigned __int64)v728 > 0x3F )
                  {
                    if ( !(_QWORD)v803 )
                      goto LABEL_2041;
                  }
                  else if ( !((unsigned __int64)v803 & ((1LL << v728) - 1)
                            | -(1LL << v728) & ((unsigned __int64)v803 ^ *(_QWORD *)(v727 + 8))) )
                  {
LABEL_2041:
                    *((_QWORD *)&v11 + 1) = v726 + 32;
                    sub_11CA10((char *)v795.m128i_i64[0], (char *)(v726 + 32));
                    goto LABEL_349;
                  }
                }
              }
            }
          }
LABEL_372:
          *((_QWORD *)&v11 + 1) = v9;
          if ( (unsigned __int8)sub_14F2F0((__int64)v798, (__int64)v9, *(double *)a7.m128i_i64) )
            goto LABEL_32;
          goto LABEL_628;
        }
        if ( v9[9] != 1 )
          goto LABEL_2098;
        v752 = (unsigned __int64 *)v798;
        *((_QWORD *)&v11 + 1) = v798;
        if ( sub_1547A0((__int64)v9, (unsigned __int64 *)v798, 40, 33, 41, *(double *)a7.m128i_i64) )
          goto LABEL_32;
        *((_QWORD *)&v11 + 1) = v752;
        if ( sub_1547A0((__int64)v9, v752, 38, 33, 39, *(double *)a7.m128i_i64) )
          goto LABEL_32;
        *((_QWORD *)&v11 + 1) = v752;
        if ( sub_1547A0((__int64)v9, v752, 35, 33, 37, *(double *)a7.m128i_i64) )
          goto LABEL_32;
        *((_QWORD *)&v11 + 1) = v752;
        if ( sub_1547A0((__int64)v9, v752, 36, 33, 34, *(double *)a7.m128i_i64) )
          goto LABEL_32;
        *((_QWORD *)&v11 + 1) = v752;
        if ( sub_1547A0((__int64)v9, v752, 32, 33, 0, *(double *)a7.m128i_i64) )
          goto LABEL_669;
        if ( (unsigned __int8)sub_14DE90((__int64)v9, *(double *)a7.m128i_i64) )
          goto LABEL_32;
        v753 = *((int **)v9 + 7);
        v754 = *((int **)v9 + 5);
        v805[0] = (unsigned __int8 *)0xFFFFFFFF00000000LL;
        v805[1] = nullptr;
        v755 = sub_152A20((unsigned __int64 *)v798, (__int64)v805, v794, (__int64)v793, v754, v753, a7, a8);
        v756 = *((_DWORD **)v9 + 5);
        if ( v755 )
        {
          *v9 = 41;
          if ( *v756 == 33 )
            v757 = v756[1];
          else
            v757 = *(_DWORD *)(*((_QWORD *)v9 + 7) + 4LL);
          v9[1] = v757;
          sub_11CA10((char *)v795.m128i_i64[0], (char *)v805);
          *((_QWORD *)&v11 + 1) = v798;
          sub_120A10((__int64)(v9 + 12), (unsigned __int64 *)v798, 0, v9[9], *((_QWORD *)v9 + 3), 0);
          goto LABEL_2131;
        }
        if ( (unsigned __int8)sub_14FFE0(
                                (__int64)v798,
                                (__int64 *)&v804,
                                33,
                                v794,
                                (__int64)v793,
                                (__int64)v756,
                                a7,
                                a8,
                                *((_QWORD *)v9 + 7)) )
        {
          v765 = v804;
          *v9 = 37;
          v766 = *((_DWORD *)v765 + 1);
          v807 = nullptr;
          v9[1] = v766;
          v806 = (unsigned int *)0xFFFFFFFF00000000LL;
          sub_11CA10((char *)&v806, v765 + 32);
          v767 = v765 + 48;
          v768 = (char *)v797;
          src[0] = nullptr;
          v808 = 0xFFFFFFFF00000000LL;
          sub_11CA10(v797->m128i_i8, v767);
          sub_11CA10((char *)v795.m128i_i64[0], (char *)&v806);
          *((_QWORD *)&v11 + 1) = v768;
          sub_11CA10((char *)v9 + 48, v768);
          sub_11CDA0((__int64)v768);
          sub_11CDA0((__int64)&v806);
LABEL_2131:
          sub_11CDA0((__int64)v805);
          goto LABEL_32;
        }
        sub_11CDA0((__int64)v805);
LABEL_2098:
        if ( !v794 )
          goto LABEL_368;
        v748 = *((_DWORD **)v9 + 5);
        if ( *v748 != 9 )
          goto LABEL_2100;
        v751 = *((_QWORD *)v9 + 7);
        if ( *(_DWORD *)v751 != 22 )
          goto LABEL_2100;
        v749 = v9[9];
        if ( *(_BYTE *)(v751 + 48) == 2
          && 4 * v749 == *(unsigned __int8 *)(*(_QWORD *)(v751 + 56) + 16LL)
          && *(_BYTE *)(v751 + 32) == 4 )
        {
          if ( (unsigned __int8)sub_12CF30(
                                  v794[4].m128i_i64[0],
                                  (__int64)(v748 + 8),
                                  (unsigned __int8 *)(*(_QWORD *)(v751 + 40) + 32LL),
                                  0,
                                  0,
                                  v96,
                                  a7)
            && sub_131730(
                 (unsigned __int64 *)v798,
                 v794,
                 (__int64)v793,
                 *((_QWORD *)v9 + 5) + 32LL,
                 2 * *(_DWORD *)(*((_QWORD *)v9 + 5) + 36LL),
                 0,
                 a7,
                 a8,
                 1u) )
          {
            *v9 = 4;
            sub_11CDA0((__int64)(v9 + 12));
            v61 = *((_QWORD *)v9 + 5);
            goto LABEL_519;
          }
LABEL_2100:
          v749 = v9[9];
        }
        if ( v749 < *((_DWORD *)v798 + 22) )
        {
          if ( v749 > 1 )
          {
            v816 = v9[17];
            if ( (unsigned __int64)v816 > 8 )
            {
              if ( !under_debugger )
                sub_383060(0xC7E4u, *(double *)a7.m128i_i64);
              goto LABEL_2165;
            }
            v750 = 16;
            *(_QWORD *)&v11 = v815;
            *((_QWORD *)&v11 + 1) = v794;
            while ( v750 )
            {
              *(_DWORD *)v11 = 0;
              *(_QWORD *)&v11 = v11 + 4;
              --v750;
            }
            if ( (unsigned __int8)sub_153210((__int64)v815, v794, (__int64)v793, (__int64)v9, a7, a8) )
              goto LABEL_32;
          }
          *((_QWORD *)&v11 + 1) = v793;
          *(_QWORD *)&v11 = v794;
          if ( (unsigned __int8)sub_150650(v11, (__int64)v9, a7, a8) )
            goto LABEL_32;
          *((_QWORD *)&v11 + 1) = v794;
          if ( (unsigned __int8)sub_157530((__int64)v9, v794, v793, (__m128)a7, a8) )
            goto LABEL_32;
        }
        *((_QWORD *)&v11 + 1) = v793;
        if ( (unsigned __int8)sub_153B30(v794, (__int64)v793, (__int64)v9, a7, a8) )
          goto LABEL_32;
        if ( *((_BYTE *)v9 + 32) == 4 && **((_DWORD **)v9 + 5) == 21 )
          goto LABEL_1627;
LABEL_367:
        if ( *((_BYTE *)v9 + 48) == 4 && **((_DWORD **)v9 + 7) == 21 )
          goto LABEL_1627;
        goto LABEL_368;
      case 0x14u:
        v795.m128i_i64[0] = (__int64)(v9 + 8);
        if ( !(unsigned __int8)sub_11FD80((char *)v9 + 32, nullptr, 0) )
          goto LABEL_345;
        if ( *((_BYTE *)v9 + 48) != 2 )
        {
          sub_11CA10((char *)v795.m128i_i64[0], (char *)v9 + 48);
LABEL_345:
          if ( *((_BYTE *)v9 + 48) != 2 )
          {
            v20 = (char *)(v9 + 12);
            *((_QWORD *)&v11 + 1) = v9 + 12;
            if ( sub_125B60((unsigned __int8 *)v795.m128i_i64[0], (__int64)(v9 + 12), 0, *(double *)a7.m128i_i64) )
              goto LABEL_348;
LABEL_347:
            v94 = (unsigned __int64 *)v798;
            *((_QWORD *)&v11 + 1) = v794;
            if ( (unsigned __int8)sub_14E070(
                                    (__int64)v798,
                                    v794,
                                    (__int64)v793,
                                    v795.m128i_i64[0],
                                    (__int64)v20,
                                    20,
                                    a7,
                                    a8) )
            {
LABEL_348:
              if ( v794 )
                goto LABEL_349;
              goto LABEL_758;
            }
            if ( !(unsigned __int8)sub_14E070(
                                     (__int64)v94,
                                     v794,
                                     (__int64)v793,
                                     (__int64)v20,
                                     v795.m128i_i64[0],
                                     20,
                                     a7,
                                     a8) )
            {
              if ( v9[9] != 1 || *((_BYTE *)v9 + 32) != 4 || *((_BYTE *)v9 + 48) != 4 )
                goto LABEL_806;
              v429 = (unsigned __int64 *)v798;
              *((_QWORD *)&v11 + 1) = v798;
              if ( sub_1547A0((__int64)v9, (unsigned __int64 *)v798, 34, 32, 36, *(double *)a7.m128i_i64) )
                goto LABEL_32;
              *((_QWORD *)&v11 + 1) = v429;
              if ( sub_1547A0((__int64)v9, v429, 37, 32, 35, *(double *)a7.m128i_i64) )
                goto LABEL_32;
              *((_QWORD *)&v11 + 1) = v429;
              if ( sub_1547A0((__int64)v9, v429, 39, 32, 38, *(double *)a7.m128i_i64) )
                goto LABEL_32;
              *((_QWORD *)&v11 + 1) = v429;
              if ( sub_1547A0((__int64)v9, v429, 41, 32, 40, *(double *)a7.m128i_i64) )
                goto LABEL_32;
              if ( !sub_1547A0((__int64)v9, v429, 32, 33, 0, *(double *)a7.m128i_i64) )
              {
                if ( (unsigned __int8)sub_14FFE0(
                                        (__int64)v429,
                                        (__int64 *)v805,
                                        32,
                                        v794,
                                        (__int64)v793,
                                        *((_QWORD *)v9 + 5),
                                        a7,
                                        a8,
                                        *((_QWORD *)v9 + 7)) )
                {
                  v430 = v805[0];
                  *v9 = 36;
                  v431 = *((_DWORD *)v430 + 1);
                  v806 = (unsigned int *)0xFFFFFFFF00000000LL;
                  v9[1] = v431;
                  v807 = nullptr;
                  sub_11CA10((char *)&v806, (char *)v430 + 32);
                  v808 = 0xFFFFFFFF00000000LL;
                  src[0] = nullptr;
                  v797 = (__m128i *)&v808;
                  sub_11CA10((char *)&v808, (char *)v430 + 48);
                  sub_11CA10((char *)v795.m128i_i64[0], (char *)&v806);
                  *((_QWORD *)&v11 + 1) = &v808;
                  sub_11CA10(v20, (char *)&v808);
                  sub_11CDA0((__int64)&v808);
                  sub_11CDA0((__int64)&v806);
                  goto LABEL_32;
                }
LABEL_806:
                *((_QWORD *)&v11 + 1) = &v808;
                if ( !(unsigned __int8)sub_11E2C0((int **)v9, &v808, nullptr, 0) || v9[17] != (_DWORD)v808 )
                  goto LABEL_19;
              }
LABEL_258:
              *(_QWORD *)&v803 = 0;
              goto LABEL_259;
            }
LABEL_651:
            if ( !v794 )
            {
              memset(src, 0, sizeof(src));
              v808 = (__int64)&off_4DDD00;
              *(_QWORD *)&v810 = *((_QWORD *)v798 + 12);
              *((_QWORD *)&v11 + 1) = &v808;
              if ( (unsigned int)sub_11F760(v9, &v808) )
                goto LABEL_160;
            }
            *v9 = 4;
            v20 = (char *)(v9 + 12);
            goto LABEL_653;
          }
        }
        v166 = sub_32ABC0(*(_QWORD *)(*((_QWORD *)v9 + 7) + 16LL), v9[13], 0);
        *((_QWORD *)&v803 + 1) = v166;
        if ( !v166 )
          goto LABEL_651;
        *((_QWORD *)&v11 + 1) = v9[13];
        if ( sub_32ABC0(v166, SDWORD2(v11), 1) == -1 )
          goto LABEL_262;
        *((_QWORD *)&v11 + 1) = v795.m128i_i64[0];
        if ( (unsigned __int8)sub_14E260((__int64)v798, v795.m128i_i64[0]) )
          goto LABEL_262;
        v224 = *((_BYTE *)v9 + 32);
        if ( v224 == 2 )
        {
          v516 = sub_32ABC0(*(_QWORD *)(*((_QWORD *)v9 + 5) + 16LL), v9[9], 0);
          *(_QWORD *)&v803 = *((_QWORD *)&v803 + 1) & v516;
          goto LABEL_259;
        }
        if ( !v794 )
          goto LABEL_815;
        if ( (*((_BYTE *)v9 + 33) & 4) != 0 )
          goto LABEL_1399;
        if ( v224 == 4 )
        {
          if ( sub_122600(*((unsigned int **)v9 + 5)) )
          {
LABEL_1399:
            v427 = v9[9];
            v225 = *((_QWORD *)&v803 + 1);
            if ( ((v427 - 4) & 0xFFFFFFFB) == 0 )
            {
              v52 = 8 * v427 == 32;
              v428 = 0x7FFFFFFF;
              if ( !v52 )
                v428 = 0x7FFFFFFFFFFFFFFFLL;
              if ( v428 == *((_QWORD *)&v803 + 1) )
              {
                v522 = (_DWORD *)(qword_18 + 1);
                if ( v9[13] == 4 )
                  v522 = (_DWORD *)byte_9;
                v806 = v522;
                v808 = 0xFFFFFFFF00000000LL;
                src[3] = nullptr;
                v811 = nullptr;
                *(_QWORD *)&v812 = 0;
                *(__m128i *)&src[1] = _mm_load_si128((const __m128i *)&xmmword_4247F0);
                a7 = 0;
                src[0] = nullptr;
                DWORD2(v812) = 0;
                v797 = (__m128i *)&v808;
                v810 = 0;
                sub_11CA10((char *)&v808, (char *)v795.m128i_i64[0]);
                copy_tinfo_t();
                *((_QWORD *)&v11 + 1) = *((_QWORD *)v9 + 3);
                v9[9] = v9[17];
                v523 = sub_335B10(
                         v794[4].m128i_i64[0],
                         *((__int64 *)&v11 + 1),
                         (__int64)"fabs",
                         (__int64)&v806,
                         1,
                         (__int64)&v808,
                         1);
                v20 = (char *)(v9 + 12);
                *(_DWORD *)(*(_QWORD *)(v523 + 72) + 280LL) |= 0x10u;
                *((_QWORD *)v9 + 5) = v523;
                *((_BYTE *)v9 + 32) = 4;
                sub_82400((__int64)&v808);
                clear_tinfo_t();
                goto LABEL_349;
              }
            }
            v224 = *((_BYTE *)v9 + 32);
          }
          else
          {
            v225 = *((_QWORD *)&v803 + 1);
            v224 = *((_BYTE *)v9 + 32);
          }
        }
        else
        {
LABEL_815:
          v225 = *((_QWORD *)&v803 + 1);
        }
        if ( v224 == 10 )
        {
          v423 = *((_QWORD *)v9 + 5);
          v424 = ~(_DWORD)v225;
          if ( *(_BYTE *)v423 == 5 && v424 <= 16 && (v424 & -(int)v225) == 0 )
          {
            *((_QWORD *)&v11 + 1) = *(_QWORD *)(*(_QWORD *)(v423 + 8) + 8LL) & v225;
            if ( (unsigned __int8)sub_1599D0(v423, *((__int64 *)&v11 + 1), (__int64)v794, a9) )
            {
LABEL_262:
              v20 = (char *)(v9 + 12);
              goto LABEL_349;
            }
            v225 = *((_QWORD *)&v803 + 1);
          }
        }
        v20 = (char *)(v9 + 12);
        if ( (v225 & 1) == 0 )
          goto LABEL_818;
        *((_QWORD *)&v11 + 1) = v798;
        v425 = sub_11FDE0(v795.m128i_i64[0], (__int64)v798);
        v225 = *((_QWORD *)&v803 + 1);
        v426 = *((_QWORD *)&v803 + 1);
        if ( v425 )
        {
          if ( *((_QWORD *)&v803 + 1) == 1 )
            goto LABEL_349;
          if ( (BYTE8(v803) & 1) != 0 )
          {
            v797 = (__m128i *)&v808;
            goto LABEL_283;
          }
LABEL_818:
          v226 = *((_BYTE *)v9 + 32);
LABEL_819:
          if ( v226 != 4 )
            goto LABEL_820;
          goto LABEL_1567;
        }
        v226 = *((_BYTE *)v9 + 32);
        if ( *((_QWORD *)&v803 + 1) != 1 )
        {
          BYTE8(v11) = *((_QWORD *)&v803 + 1) == 0xFFFF;
          if ( *((_QWORD *)&v803 + 1) == 0xFFFF
            || *((_QWORD *)&v803 + 1) == 255
            || *((_QWORD *)&v803 + 1) == 0xFFFFFFFFLL )
          {
            if ( v226 == 10 )
            {
              v630 = *((_QWORD *)v9 + 5);
              if ( *(_BYTE *)v630 == 6 && (*(_QWORD *)(v630 + 8) & ~*((_QWORD *)&v803 + 1)) == 0 )
                goto LABEL_349;
              goto LABEL_821;
            }
            if ( v226 != 4 )
            {
LABEL_820:
              if ( v226 != 14 )
                goto LABEL_821;
              v508 = *((_QWORD *)v9 + 5);
              v509 = 8 * *(_DWORD *)(v508 + 4);
              if ( (unsigned __int8)sub_11FD80((char *)v508, &v808, 0) && (v510 = (unsigned __int8 *)v808) == nullptr )
              {
                *((_QWORD *)&v11 + 1) = v509;
                a4 = (unsigned int)v509;
                if ( (unsigned __int64)v509 < 0x40 )
                  v510 = (unsigned __int8 *)(1LL << v509);
                v511 = (__int64)(v510 - 1);
              }
              else
              {
                *((_QWORD *)&v11 + 1) = 0;
                if ( !sub_A2350((char *)(*((_QWORD *)v9 + 5) + 16LL), 0, 0) || (unsigned __int64)v509 > 0x3F )
                  goto LABEL_821;
                a4 = (unsigned int)v509;
                v511 = -1LL << v509;
              }
              if ( (*((_QWORD *)&v803 + 1) & v511) != 0 )
              {
                m128i_i64 = *((_QWORD *)v9 + 7);
                a7 = _mm_unpacklo_epi64(
                       (__m128i)(*(_QWORD *)(m128i_i64 + 16) & (unsigned __int64)~v511),
                       (__m128i)(*(_QWORD *)(m128i_i64 + 16) & (unsigned __int64)~v511));
                *(__m128i *)(m128i_i64 + 16) = a7;
                goto LABEL_32;
              }
LABEL_821:
              if ( !v794 )
              {
                if ( sub_125B60((unsigned __int8 *)v795.m128i_i64[0], (__int64)(v9 + 12), 0, *(double *)a7.m128i_i64) )
                {
LABEL_758:
                  memset(src, 0, sizeof(src));
                  v808 = (__int64)&off_4DDD00;
                  *(_QWORD *)&v810 = *((_QWORD *)v798 + 12);
                  *((_QWORD *)&v11 + 1) = &v808;
                  if ( (unsigned int)sub_11F760(v9, &v808) )
                    goto LABEL_160;
                  goto LABEL_349;
                }
                goto LABEL_347;
              }
              if ( (a9 & 0x10) != 0 )
                goto LABEL_831;
              v227 = *((_QWORD *)&v803 + 1);
              if ( *((_QWORD *)&v803 + 1) == 0xFFFF
                || *((_QWORD *)&v803 + 1) == 255
                || *((_QWORD *)&v803 + 1) == 0xFFFFFFFFLL )
              {
                goto LABEL_831;
              }
              v228 = bitcount();
              v229 = v228;
              if ( v228 == 31 )
              {
                v230 = 0xFFFFFFFFLL;
              }
              else
              {
                if ( v228 > 31 )
                {
                  if ( v228 != 63 )
                  {
LABEL_830:
                    if ( (unsigned int *)v794[3].m128i_i64[0] == v9 && (*(_BYTE *)(v794[4].m128i_i64[0] + 4) & 8) != 0 )
                    {
                      *((_QWORD *)&v11 + 1) = (char *)&v803 + 8;
                      v647 = sub_1E23E0(
                               v794[26].m128i_i64,
                               (unsigned __int64 *)&v803 + 1,
                               v795.m128i_u64[0],
                               *((_QWORD *)v9 + 3));
                      if ( v647 == 1 )
                      {
                        v665 = _mm_loadl_epi64((const __m128i *)((char *)&v803 + 8));
                        a7 = _mm_unpacklo_epi64(v665, v665);
                        *(__m128i *)(*((_QWORD *)v9 + 7) + 16LL) = a7;
                        goto LABEL_32;
                      }
                      if ( v647 == 4 )
                        goto LABEL_349;
                    }
                  }
LABEL_831:
                  *((_QWORD *)&v11 + 1) = v9 + 12;
                  if ( sub_125B60((unsigned __int8 *)v795.m128i_i64[0], (__int64)(v9 + 12), 0, *(double *)a7.m128i_i64) )
                    goto LABEL_349;
                  goto LABEL_347;
                }
                if ( v228 == 7 )
                {
                  v230 = 255;
                }
                else
                {
                  v230 = 0xFFFF;
                  if ( v229 != 15 )
                    goto LABEL_830;
                }
              }
              if ( (v227 & ~v230) != 0 )
                goto LABEL_830;
              goto LABEL_831;
            }
            v629 = 1;
            if ( *((_QWORD *)&v803 + 1) != 255 )
              v629 = 2 * (*((_QWORD *)&v803 + 1) != 0xFFFF) + 2;
            v497 = *((_QWORD *)v9 + 5);
            v498 = *(_DWORD *)v497;
            *((_QWORD *)&v11 + 1) = (unsigned int)(*(_DWORD *)v497 - 8);
            if ( DWORD2(v11) <= 1 )
            {
              if ( *(_DWORD *)(v497 + 36) < v629 )
              {
                v499 = 1;
                if ( *((_QWORD *)&v803 + 1) != 255 )
                {
                  v499 = 2;
                  if ( *((_QWORD *)&v803 + 1) != 0xFFFF )
                    v499 = 4;
                }
                goto LABEL_1821;
              }
              v631 = v497 + 32;
            }
            else
            {
              if ( (int)v9[9] < v629 )
              {
                if ( *((_QWORD *)&v803 + 1) != 255 && *((_QWORD *)&v803 + 1) != 0xFFFF )
                  v426 = 0xFFFFFFFFLL;
                goto LABEL_1573;
              }
              v631 = v795.m128i_i64[0];
            }
            LODWORD(v797) = v629;
            if ( sub_11CAD0(v629) || (*(_BYTE *)(v631 + 1) & 4) == 0 )
            {
              if ( *(_DWORD *)(v631 + 4) == (_DWORD)v797
                || (*((_QWORD *)&v11 + 1) = v798,
                    (unsigned __int8)sub_1273B0(v631, (unsigned __int64 *)v798, *((_QWORD *)v9 + 3), (int)v797, a7)) )
              {
                sub_11CDA0((__int64)(v9 + 12));
                *v9 = 9;
                if ( v795.m128i_i64[0] == v631 )
                  goto LABEL_32;
LABEL_843:
                v61 = *((_QWORD *)v9 + 5);
LABEL_844:
                v797 = (__m128i *)&v808;
LABEL_519:
                v123 = (char *)(v61 + 32);
                v124 = (char *)v797;
                src[0] = nullptr;
                v808 = 0xFFFFFFFF00000000LL;
                sub_11CA10(v797->m128i_i8, v123);
                *((_QWORD *)&v11 + 1) = v124;
                sub_11CA10((char *)v9 + 32, v124);
                sub_11CDA0((__int64)v124);
                v795.m128i_i8[0] = 1;
                goto LABEL_33;
              }
            }
            v497 = *((_QWORD *)v9 + 5);
            v426 = *((_QWORD *)&v803 + 1);
            v498 = *(_DWORD *)v497;
LABEL_1568:
            if ( v426 <= 0xFF )
            {
              v499 = 1;
            }
            else if ( v426 <= 0xFFFF )
            {
              v499 = 2;
            }
            else
            {
              if ( v426 > 0xFFFFFFFF )
                goto LABEL_1573;
              v499 = 4;
            }
            if ( (unsigned int)(v498 - 8) > 1 )
              goto LABEL_1573;
LABEL_1821:
            if ( *(_BYTE *)(v497 + 32) == 4 || *(_DWORD *)(v497 + 36) <= v499 )
              goto LABEL_1582;
            v632 = v499;
            *((_QWORD *)&v11 + 1) = v798;
            if ( (unsigned __int8)sub_12AB50((unsigned int **)(v497 + 32), (unsigned __int64 *)v798, v632, 1, a7) )
              goto LABEL_32;
            v497 = *((_QWORD *)v9 + 5);
            v426 = *((_QWORD *)&v803 + 1);
            v498 = *(_DWORD *)v497;
LABEL_1573:
            if ( v498 == 22 )
            {
              if ( *(_BYTE *)(v497 + 48) != 2 )
                goto LABEL_1582;
              v500 = 0;
              if ( *(unsigned __int8 *)(*(_QWORD *)(v497 + 56) + 16LL) <= 0x3Fu )
                v500 = 1LL << *(_BYTE *)(*(_QWORD *)(v497 + 56) + 16LL);
              v501 = -v500;
            }
            else
            {
              if ( v498 != 14 )
                goto LABEL_1582;
              v641 = sub_11C8A0(v497, nullptr);
              if ( !v641 )
                goto LABEL_1582;
              v642 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v641 + 8) + 16LL), *(_DWORD *)(v641 + 4), 1);
              v501 = ~((v642 ^ (unsigned __int64)(v642 - 1)) >> 1);
            }
            v502 = 8 * *(_DWORD *)(v497 + 68);
            *((_QWORD *)&v11 + 1) = v502;
            v503 = 1LL << v502;
            if ( (unsigned __int64)v502 >= 0x40 )
              v503 = 0;
            v504 = (v503 - 1) & v501;
            if ( v504 == (v504 & v426) )
              goto LABEL_349;
            if ( (v504 & v426) == 0 )
              goto LABEL_258;
LABEL_1582:
            *((_QWORD *)&v11 + 1) = v798;
            if ( (unsigned __int8)sub_1522E0((__int64)v9, (unsigned __int64 *)v798, a7) )
              goto LABEL_32;
            v226 = *((_BYTE *)v9 + 32);
            if ( v226 == 4 )
            {
              v505 = *((_DWORD **)v9 + 5);
              if ( *v505 != 19 )
                goto LABEL_821;
              if ( !(unsigned __int8)sub_159DD0((__int64)v794, (__int64)v505, *(double *)a7.m128i_i64, a8) )
              {
                v655 = j__qalloc_or_throw(80, (__int64)v505, v506, v507);
                sub_1510E0((_QWORD *)v655, *(_QWORD *)(*((_QWORD *)v9 + 5) + 24LL));
                sub_125180((unsigned __int8 *)(v655 + 64), (unsigned __int8 *)v9 + 64);
                *(_DWORD *)v655 = 19;
                *(_DWORD *)(v655 + 4) = *(_DWORD *)(*((_QWORD *)v9 + 5) + 4LL);
                v658 = j__qalloc_or_throw(80, (__int64)(v9 + 16), v656, v657);
                sub_1510E0((_QWORD *)v658, *((_QWORD *)v9 + 3));
                sub_125180((unsigned __int8 *)(v658 + 32), (unsigned __int8 *)(*((_QWORD *)v9 + 5) + 32LL));
                sub_125180((unsigned __int8 *)(v658 + 48), (unsigned __int8 *)v9 + 48);
                v659 = v9[9];
                *(_DWORD *)v658 = 20;
                *(_DWORD *)(v658 + 68) = v659;
                *(_DWORD *)(v658 + 4) = v9[1];
                *(_QWORD *)(v655 + 40) = v658;
                *(_BYTE *)(v655 + 32) = 4;
                *(_DWORD *)(v655 + 36) = v9[9];
                v662 = j__qalloc_or_throw(80, (__int64)(v9 + 12), v660, v661);
                sub_1510E0((_QWORD *)v662, *((_QWORD *)v9 + 3));
                sub_125180((unsigned __int8 *)(v662 + 32), (unsigned __int8 *)(*((_QWORD *)v9 + 5) + 48LL));
                sub_125180((unsigned __int8 *)(v662 + 48), (unsigned __int8 *)v9 + 48);
                v663 = v9[9];
                *(_DWORD *)v662 = 20;
                *(_DWORD *)(v662 + 68) = v663;
                *(_DWORD *)(v662 + 4) = v9[1];
                *(_QWORD *)(v655 + 56) = v662;
                *(_BYTE *)(v655 + 48) = 4;
                *(_DWORD *)(v655 + 52) = v9[9];
                v664 = sub_15BC70(
                         (unsigned int *)v655,
                         (unsigned __int64 *)v798,
                         (__int64)v794,
                         (__int64)v793,
                         v796,
                         a6,
                         a7,
                         a9);
                if ( v664 > 0 )
                {
                  *((_QWORD *)&v11 + 1) = v655;
                  sub_11D7A0((__int64)v9, v655);
                  v9[1] = *(_DWORD *)(v655 + 4);
                  if ( v655 )
                  {
                    sub_7CCD0(v655);
                    j__qfree(v655);
                  }
                  v795.m128i_i8[0] = 1;
                  v801 = v10 + v664;
                  goto LABEL_33;
                }
                if ( v655 )
                {
                  sub_7CCD0(v655);
                  j__qfree(v655);
                }
              }
              v226 = *((_BYTE *)v9 + 32);
            }
            goto LABEL_820;
          }
          goto LABEL_819;
        }
        if ( v226 != 4 )
          goto LABEL_820;
        v496 = *((_QWORD *)v9 + 5);
        if ( *(_DWORD *)v496 == 7 )
        {
          sub_11CA10((char *)v9 + 48, (char *)(v496 + 48));
          v625 = *((_QWORD *)v9 + 5);
          v626 = v9[1];
          *((_QWORD *)&v11 + 1) = v798;
          v9[1] = *(_DWORD *)(v625 + 4);
          *(_DWORD *)(v625 + 4) = v626;
          sub_120A10((__int64)(v9 + 12), *((unsigned __int64 **)&v11 + 1), 0, v9[9], *((_QWORD *)v9 + 3), 0);
          **((_DWORD **)v9 + 5) = 20;
          v627 = (int)v9[17] <= 1;
          *v9 = 33;
          if ( !v627 )
          {
            v628 = j__qalloc_or_throw(80, *((__int64 *)&v11 + 1), m128i_i64, a4);
            sub_1510E0((_QWORD *)v628, *((_QWORD *)v9 + 3));
            sub_11D890(v628, (__int64)v9);
            *((_QWORD *)v9 + 5) = v628;
            *((_QWORD *)&v11 + 1) = v628 + 64;
            *v9 = 9;
            *((_BYTE *)v9 + 32) = 4;
            v9[9] = 1;
            v9[17] = 1;
            sub_11CA10((char *)v9 + 64, (char *)(v628 + 64));
          }
          goto LABEL_32;
        }
        if ( v9[17] != 1 )
          goto LABEL_1567;
        v633 = *((_QWORD *)v9 + 5);
        if ( *(_DWORD *)v496 != 10 )
          goto LABEL_1829;
        if ( *(_BYTE *)(v496 + 32) == 4 )
        {
          v633 = *(_QWORD *)(v496 + 40);
LABEL_1829:
          if ( *(_DWORD *)v633 == 23 && *(_BYTE *)(v633 + 48) == 2 )
          {
            v634 = *(_QWORD *)(v633 + 56);
            v795.m128i_i64[0] = v633;
            v635 = *(unsigned __int8 *)(v634 + 16);
            src[0] = nullptr;
            v808 = 0xFFFFFFFF00000000LL;
            v797 = (__m128i *)&v808;
            sub_11CA10((char *)&v808, (char *)(v633 + 32));
            v636 = HIDWORD(v808);
            *(_DWORD *)v496 = 20;
            sub_11CA10((char *)(v496 + 32), v797->m128i_i8);
            v637 = 0;
            if ( v635 <= 63 )
              v637 = 1LL << v635;
            v638 = (unsigned __int64 *)v798;
            sub_120A10(
              v496 + 48,
              (unsigned __int64 *)v798,
              v637,
              v636,
              **(_QWORD **)(v795.m128i_i64[0] + 56),
              *(_DWORD *)(*(_QWORD *)(v795.m128i_i64[0] + 56) + 8LL));
            *(_DWORD *)(v496 + 68) = v636;
            v639 = v9[1];
            *((_QWORD *)&v11 + 1) = v638;
            v9[1] = *(_DWORD *)(v496 + 4);
            *(_DWORD *)(v496 + 4) = v639;
            v640 = *((_QWORD *)v9 + 3);
            *v9 = 32;
            v9[9] = v636;
            sub_120A10((__int64)(v9 + 12), v638, 0, v636, v640, 0);
            sub_11CDA0((__int64)v797);
            goto LABEL_32;
          }
        }
LABEL_1567:
        v497 = *((_QWORD *)v9 + 5);
        v426 = v225;
        v498 = *(_DWORD *)v497;
        goto LABEL_1568;
      case 0x15u:
        v20 = (char *)(v9 + 12);
        v795.m128i_i64[0] = (__int64)(v9 + 8);
        if ( sub_125B60((unsigned __int8 *)v9 + 32, (__int64)(v9 + 12), 0, *(double *)a7.m128i_i64)
          && (v794 || !sub_11ED30(v795.m128i_i64[0], *(double *)a7.m128i_i64)) )
        {
          goto LABEL_258;
        }
        if ( (unsigned __int8)sub_11FD80((char *)v795.m128i_i64[0], nullptr, 0) && *((_BYTE *)v9 + 48) != 2 )
          sub_11CA10((char *)v795.m128i_i64[0], (char *)v9 + 48);
        *((_QWORD *)&v11 + 1) = &v808;
        v797 = (__m128i *)&v808;
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, &v808, 1) && v808 == -1 )
        {
          *v9 = 7;
          goto LABEL_350;
        }
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, v797->m128i_i64, 0) )
        {
          if ( v808 == 1 )
          {
            *((_QWORD *)&v11 + 1) = v798;
            if ( sub_11FDE0(v795.m128i_i64[0], (__int64)v798) )
            {
              v52 = v9[9] == 1;
              *v9 = 6;
              if ( !v52 )
              {
                v231 = (unsigned __int64 *)v798;
                v232 = (char *)v795.m128i_i64[0];
                sub_1273B0(v795.m128i_i64[0], (unsigned __int64 *)v798, *((_QWORD *)v9 + 3), 1, a7);
                *((_QWORD *)&v11 + 1) = v231;
                sub_1207E0(v232, v231, 6, *((_QWORD *)v9 + 3), 1, a7);
                *v9 = 9;
              }
              goto LABEL_350;
            }
          }
        }
        v90 = v9[9];
        if ( v90 != 1 )
        {
          if ( (*((_BYTE *)v9 + 33) & 4) != 0 )
          {
LABEL_1098:
            if ( ((v90 - 4) & 0xFFFFFFFB) == 0 )
            {
              *((_QWORD *)&v11 + 1) = (char *)&v803 + 8;
              if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, (__int64 *)&v803 + 1, 0) )
              {
                v341 = 1LL << (8 * *((_BYTE *)v9 + 36) - 1);
                if ( (unsigned __int64)(int)(8 * v9[9] - 1) >= 0x40 )
                  v341 = 0;
                if ( *((_QWORD *)&v803 + 1) == v341 )
                {
                  v9[1] |= 0x10u;
                  *v9 = 68;
                  goto LABEL_350;
                }
              }
            }
LABEL_336:
            v91 = sub_11C8E0((__int64)v9, v797, 21);
            v92 = v91;
            if ( v91 )
            {
              v93 = (char *)(v91 + 32);
              if ( sub_125B60((unsigned __int8 *)v808, v91 + 32, 0, *(double *)a7.m128i_i64) )
              {
                v93 = (char *)(v92 + 48);
LABEL_339:
                if ( v794 || !sub_11ED30(v808, *(double *)a7.m128i_i64) )
                {
                  *((_QWORD *)&v11 + 1) = v93;
                  sub_11CA10((char *)v808, v93);
                  if ( v20 == (char *)v808 )
                  {
LABEL_341:
                    *((_QWORD *)&v11 + 1) = v20;
                    sub_11CA10((char *)v795.m128i_i64[0], v20);
                  }
                  goto LABEL_349;
                }
                goto LABEL_1084;
              }
              if ( sub_125B60((unsigned __int8 *)v808, v92 + 48, 0, *(double *)a7.m128i_i64) )
                goto LABEL_339;
            }
LABEL_1084:
            if ( *((_BYTE *)v9 + 64) != 5 )
              goto LABEL_628;
            v339 = *((_BYTE *)v9 + 32);
            if ( *((_BYTE *)v9 + 48) == 10 && **((_BYTE **)v9 + 7) == 5 && v339 == 6 )
            {
              if ( (unsigned __int8)sub_14E100(*((_QWORD *)v9 + 5)) )
                goto LABEL_538;
              v339 = *((_BYTE *)v9 + 32);
            }
            if ( v339 != 10
              || **((_BYTE **)v9 + 5) != 5
              || *((_BYTE *)v9 + 48) != 6
              || !(unsigned __int8)sub_14E100(*((_QWORD *)v9 + 7)) )
            {
              goto LABEL_628;
            }
LABEL_538:
            if ( v794 )
              goto LABEL_540;
LABEL_539:
            *((_QWORD *)&v11 + 1) = v798;
            if ( !(unsigned __int8)sub_1205A0(v9, (__int64)v798, 0) )
              goto LABEL_540;
LABEL_160:
            LODWORD(m128i_i64) = *v9;
            goto LABEL_26;
          }
          if ( *((_BYTE *)v9 + 32) != 4 )
            goto LABEL_336;
LABEL_1096:
          if ( !sub_122600(*((unsigned int **)v9 + 5)) )
            goto LABEL_336;
          v90 = v9[9];
          goto LABEL_1098;
        }
        if ( *((_BYTE *)v9 + 32) != 4 )
          goto LABEL_336;
        if ( *((_BYTE *)v9 + 48) != 4 )
          goto LABEL_1277;
        v565 = *((_QWORD *)v9 + 5);
        v566 = *((_QWORD *)v9 + 7);
        if ( *(_DWORD *)v565 == 30 )
          goto LABEL_1697;
        if ( *(_DWORD *)v566 == 30 )
        {
          v566 = *((_QWORD *)v9 + 5);
          v565 = *((_QWORD *)v9 + 7);
LABEL_1697:
          if ( *(_DWORD *)v566 == 29
            && (*(_BYTE *)(v565 + 4) & 0x10) == 0
            && (*(_BYTE *)(v566 + 4) & 0x10) == 0
            && *(_QWORD *)(v565 + 24) == *(_QWORD *)(v566 + 24) )
          {
            *v9 = 40;
            v9[1] = *(_DWORD *)(v565 + 4);
            sub_123A40((__int64)&v806, (unsigned __int8 *)(v565 + 48), v88, v89);
            v567 = (unsigned __int8 *)(v565 + 32);
            v568 = (char *)v797;
            sub_123A40((__int64)v797, v567, v569, v570);
            sub_11CA10((char *)v9 + 48, (char *)&v806);
            *((_QWORD *)&v11 + 1) = v568;
            sub_11CA10((char *)v795.m128i_i64[0], v568);
            sub_11CDA0((__int64)v568);
            sub_11CDA0((__int64)&v806);
            goto LABEL_32;
          }
        }
LABEL_1277:
        if ( (*((_BYTE *)v9 + 33) & 4) != 0 )
          goto LABEL_336;
        goto LABEL_1096;
      case 0x16u:
        goto LABEL_56;
      case 0x17u:
        *((_QWORD *)&v11 + 1) = v793;
        if ( (unsigned __int8)sub_118AF0((__int64)v794, (__int64)v793, (__int64)v796, (__int64)v9) )
          goto LABEL_32;
        if ( *((_BYTE *)v9 + 32) != 4 )
          goto LABEL_56;
        if ( *((_BYTE *)v9 + 48) != 2 )
          goto LABEL_56;
        v82 = v9[9];
        v83 = (unsigned int)(8 * v82 - 1);
        if ( (_DWORD)v83 != *(unsigned __int8 *)(*((_QWORD *)v9 + 7) + 16LL) )
          goto LABEL_56;
        v61 = *((_QWORD *)v9 + 5);
        v84 = *(_DWORD *)v61;
        if ( *(_DWORD *)v61 == 24 )
          goto LABEL_844;
        if ( v84 == 11 )
        {
          if ( *(_DWORD *)(v61 + 36) == 2 * (_DWORD)v82 && *(_BYTE *)(v61 + 32) == 4 )
          {
            v400 = *(_QWORD *)(v61 + 40);
            if ( *(_DWORD *)v400 == 8 )
            {
              if ( (_DWORD)v82 == *(_DWORD *)(v400 + 36) )
              {
                v797 = (__m128i *)&v808;
                sub_123A40((__int64)&v808, (unsigned __int8 *)(v400 + 32), v82, v83);
                *((_QWORD *)&v11 + 1) = &v808;
                sub_11CA10((char *)v9 + 32, (char *)&v808);
                sub_11CDA0((__int64)&v808);
                goto LABEL_32;
              }
              if ( (int)v82 > *(_DWORD *)(v400 + 36) )
              {
                v797 = (__m128i *)&v808;
                sub_123A40((__int64)&v808, (unsigned __int8 *)(v61 + 32), v82, v83);
                v401 = v9[9];
                *((_QWORD *)&v11 + 1) = &v808;
                *((_DWORD *)src[0] + 17) = v401;
                HIDWORD(v808) = v401;
                sub_11CA10((char *)v9 + 32, (char *)&v808);
                sub_11CDA0((__int64)&v808);
                goto LABEL_32;
              }
            }
          }
        }
        else if ( (v84 & 0xFFFFFFFD) == 5 )
        {
          if ( (int)v82 >= *(unsigned __int8 *)(*((_QWORD *)v798 + 12) + 130LL) )
          {
            *v9 = 9;
            *((_QWORD *)&v11 + 1) = v798;
            v9[9] = 1;
            v20 = (char *)(v9 + 12);
            v378 = *(_DWORD *)(v61 + 36);
            *(_DWORD *)v61 = (*(_DWORD *)v61 != 5) + 38;
            sub_120A10(v61 + 48, *((unsigned __int64 **)&v11 + 1), 0, v378, -1, 0);
            *(_DWORD *)(v61 + 68) = 1;
            goto LABEL_350;
          }
        }
        else if ( v84 == 13 && *(_BYTE *)(v61 + 32) == 4 && *(_BYTE *)(v61 + 48) == 4 )
        {
          v85 = **(_DWORD **)(v61 + 40);
          if ( (unsigned int)(v85 - 8) <= 1 )
          {
            v86 = **(_DWORD **)(v61 + 56);
            if ( (unsigned int)(v86 - 8) <= 1 )
            {
              if ( v85 == 9 && v86 == 9 )
                v87 = 35;
              else
                v87 = 40;
              *(_DWORD *)v61 = v87;
              v20 = (char *)(v9 + 12);
              *(_DWORD *)(v61 + 68) = 1;
              v9[9] = 1;
              *v9 = 9;
              goto LABEL_350;
            }
          }
        }
LABEL_56:
        *((_QWORD *)&v11 + 1) = &v808;
        v795.m128i_i64[0] = (__int64)(v9 + 8);
        v797 = (__m128i *)&v808;
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 32, &v808, 0) && !v808 )
        {
          v20 = (char *)(v9 + 12);
          if ( v794 )
            goto LABEL_349;
          memset(src, 0, sizeof(src));
          v808 = (__int64)&off_4DDD00;
          *((_QWORD *)&v11 + 1) = v797;
          *(_QWORD *)&v810 = *((_QWORD *)v798 + 12);
          if ( !(unsigned int)sub_11F760(v9, v797) )
            goto LABEL_349;
          if ( *((_BYTE *)v9 + 48) != 2 )
            goto LABEL_160;
        }
        else if ( *((_BYTE *)v9 + 48) != 2 )
        {
          goto LABEL_19;
        }
        v20 = (char *)(v9 + 12);
        v22 = *(_QWORD *)(*((_QWORD *)v9 + 7) + 16LL);
        v23 = (unsigned __int8)v22;
        if ( !(_BYTE)v22 )
          goto LABEL_349;
        m128i_i64 = (__int64)sub_14DA60;
        v24 = v9[9];
        v25 = *(__int64 (**)())(*(_QWORD *)v798 + 328LL);
        if ( v25 != sub_14DA60 )
        {
          v363 = ((__int64 (__fastcall *)(unsigned __int8 *, __int64, double))v25)(v798, v24, *(double *)a7.m128i_i64);
          if ( v363 )
          {
            if ( *((_BYTE *)v9 + 48) == 2 )
            {
              m128i_i64 = *((_QWORD *)v9 + 7);
              a4 = *(_QWORD *)(m128i_i64 + 16);
              *((_QWORD *)&v11 + 1) = (unsigned __int8)a4;
              if ( (unsigned __int8)a4 > v363 )
              {
                *(_QWORD *)(m128i_i64 + 16) = a4 & v363;
                goto LABEL_32;
              }
            }
          }
          LODWORD(v24) = v9[9];
        }
        v26 = 8 * v24;
        if ( v26 <= (unsigned __int8)v22 )
        {
          if ( *v9 == 24 )
          {
            *((_QWORD *)&v11 + 1) = v26 - 1;
            a7 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)SDWORD2(v11), (__m128i)(unsigned __int64)SDWORD2(v11));
            *(__m128i *)(*((_QWORD *)v9 + 7) + 16LL) = a7;
            goto LABEL_32;
          }
          goto LABEL_258;
        }
        *((_QWORD *)&v11 + 1) = &v803;
        v248 = sub_11FD80((char *)v795.m128i_i64[0], (__int64 *)&v803, 1);
        v249 = *v9;
        if ( !v248 || (*((_QWORD *)&v11 + 1) = v9[9], SDWORD2(v11) > 8) )
        {
          if ( v249 == 22 )
          {
            v472 = 0;
            *v9 = 14;
            if ( (v22 & 0xC0) == 0 )
              v472 = 1LL << v22;
            *((_QWORD *)&v11 + 1) = v798;
            sub_120A10((__int64)(v9 + 12), (unsigned __int64 *)v798, v472, v9[9], *((_QWORD *)v9 + 3), 0);
            goto LABEL_32;
          }
          if ( v249 - 23 <= 1 )
          {
            if ( *((_BYTE *)v9 + 32) == 4 )
            {
              v693 = *((_QWORD *)v9 + 5);
              if ( *(_DWORD *)v693 == 15
                && (unsigned __int8)sub_11FD80((char *)(v693 + 48), v797->m128i_i64, 0)
                && (unsigned __int64)v808 > 1 )
              {
                v694 = v9[9];
                if ( (v22 & 0xC0) != 0 )
                {
                  v481 = sub_32ABC0(0, v694, 0);
                  v695 = 0;
                }
                else
                {
                  v481 = sub_32ABC0(v808 << v22, v694, 0);
                  v695 = v481 >> v22;
                }
                if ( v808 == v695 )
                {
                  *v9 = 15;
                  v480 = v9[9];
                  v20 = (char *)(v9 + 12);
                  goto LABEL_1535;
                }
              }
            }
            *((_QWORD *)&v11 + 1) = v793;
            *(_QWORD *)&v11 = v794;
            if ( (unsigned __int8)sub_1299D0(v11, (char *)v795.m128i_i64[0], 0, *(double *)a7.m128i_i64, a8) )
            {
              if ( (int)(8 * v9[9] - 1) <= (unsigned __int8)v22 )
                goto LABEL_258;
            }
            if ( (unsigned __int8)v22 > 7u )
            {
              *((_QWORD *)&v11 + 1) = v793;
              *(_QWORD *)&v11 = v794;
              if ( (unsigned __int8)sub_12A040(v11, v795.m128i_i64[0], (int)(unsigned __int8)v22 >> 3, a7, a8) )
                goto LABEL_258;
            }
          }
          if ( *((_BYTE *)v9 + 32) != 4 )
            goto LABEL_19;
          *((_QWORD *)&v11 + 1) = (unsigned __int8)v22;
          v250 = sub_151C80((int *)v9, (unsigned __int8)v22);
          if ( v250 == -1 )
            goto LABEL_258;
          if ( v250 == 1 )
            goto LABEL_32;
          v251 = *((_QWORD *)v9 + 5);
          v15 = *v9;
          v252 = *(_DWORD *)v251;
          v770 = *v9 == 24;
          if ( *(_DWORD *)v251 != 14 )
          {
            if ( v252 != 22 )
              goto LABEL_908;
            if ( *(_BYTE *)(v251 + 48) != 2 )
            {
              v254 = 0;
LABEL_901:
              v806 = (unsigned int *)(v251 + 32);
LABEL_902:
              *((_QWORD *)&v11 + 1) = v806;
              if ( v806 )
              {
                if ( v23 != v254 && (v254 & 7) == 0 )
                {
                  v255 = (unsigned int)(v254 >> 31);
                  v256 = v9[9] - v254 / 8;
                  if ( (unsigned int)(v256 - 1) <= 1 || v256 == 4 )
                  {
                    v703 = (__int64 *)v797;
                    v795.m128i_i32[0] = v15;
                    LODWORD(v255) = v254 % 8;
                    sub_123A40((__int64)v797, (unsigned __int8 *)v806, v255, 8);
                    *((_QWORD *)&v11 + 1) = v798;
                    if ( (unsigned __int8)sub_1272B0(
                                            (__int64)v703,
                                            (unsigned __int64 *)v798,
                                            v256,
                                            0,
                                            *(double *)a7.m128i_i64) )
                    {
                      sub_11CA10((char *)(*((_QWORD *)v9 + 5) + 32LL), v797->m128i_i8);
                      sub_11CDA0(*((_QWORD *)v9 + 5) + 48LL);
                      v704 = 9;
                      if ( v795.m128i_i32[0] == 24 )
                        v704 = 8;
                      **((_DWORD **)v9 + 5) = v704;
                      if ( v23 < v254 )
                        *v9 = 22;
                      *((_QWORD *)&v11 + 1) = v798;
                      v705 = v23 - v254;
                      if ( v23 - v254 < 0 )
                        v705 = v254 - v23;
                      sub_120A10((__int64)(v9 + 12), (unsigned __int64 *)v798, v705, v9[13], *((_QWORD *)v9 + 3), 0);
                      sub_11CDA0((__int64)v797);
                      goto LABEL_32;
                    }
                    sub_11CDA0((__int64)v797);
                  }
                }
              }
              v15 = *v9;
              goto LABEL_908;
            }
            v253 = *(_QWORD *)(v251 + 56);
            v254 = *(unsigned __int8 *)(v253 + 16);
            if ( (unsigned __int8)v22 != v254 )
            {
              if ( v15 == 24 )
              {
                v574 = *(unsigned __int8 *)(v253 + 16);
                *((_QWORD *)&v11 + 1) = v9;
                v795.m128i_i32[0] = 24;
                if ( (unsigned __int8)sub_14E360(
                                        (unsigned __int64 *)v798,
                                        (__int64)v9,
                                        (unsigned __int8)v22,
                                        v574,
                                        0,
                                        a7) )
                  goto LABEL_32;
                v251 = *((_QWORD *)v9 + 5);
                v15 = v795.m128i_i32[0];
              }
              goto LABEL_901;
            }
            v778 = 1;
            v578 = nullptr;
            goto LABEL_1726;
          }
          if ( (unsigned int)(unsigned __int8)v22 - 3 <= 0x3C )
          {
            v780 = *v9;
            v601 = sub_11C8A0(v251, nullptr);
            v15 = v780;
            v578 = (char *)v601;
            if ( v601 )
            {
              v602 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v601 + 8) + 16LL), *(_DWORD *)(v601 + 4), v770);
              v15 = v780;
              v603 = v602;
              *(_QWORD *)&v803 = v602;
              v604 = v602 >> v23;
              if ( v604 << v23 == v603 )
              {
                v778 = v604;
                v254 = 0;
LABEL_1726:
                v579 = v9[9];
                v580 = (unsigned int)(8 * v579 - v23);
                if ( v15 != 24 )
                {
                  *v9 = 20;
                  v581 = 0;
                  if ( (unsigned __int64)(int)v580 <= 0x3F )
                    v581 = 1LL << (8 * (unsigned __int8)v579 - v23);
                  sub_120A10((__int64)(v9 + 12), (unsigned __int64 *)v798, v581 - 1, v579, *((_QWORD *)v9 + 3), 0);
                  v584 = *((_QWORD *)v9 + 5);
                  if ( (char *)(v584 + 32) == v578 )
                  {
                    sub_11CA10(v578, (char *)(v584 + 48));
                    v584 = *((_QWORD *)v9 + 5);
                  }
LABEL_1731:
                  v585 = (char *)v797;
                  sub_123A40((__int64)v797, (unsigned __int8 *)(v584 + 32), v582, v583);
                  sub_11CA10((char *)v795.m128i_i64[0], v585);
                  *((_QWORD *)&v11 + 1) = v9[17];
                  v586 = sub_32ABC0(v778, SDWORD2(v11), v770);
                  if ( v586 == -1 )
                  {
                    *((_QWORD *)&v11 + 1) = v798;
                    sub_12B6F0((__int64)v9, (unsigned __int64 *)v798, 5, v9[17], 1, a7);
                  }
                  else if ( v586 != 1 )
                  {
                    *((_QWORD *)&v11 + 1) = v798;
                    sub_126240(
                      (char *)v795.m128i_i64[0],
                      (unsigned __int64 *)v798,
                      0xEu,
                      *((_QWORD *)v9 + 3),
                      v586,
                      v9[9],
                      a7);
                  }
                  goto LABEL_2152;
                }
                if ( (unsigned int)v580 <= 0x20 )
                {
                  v587 = 0x100010100LL;
                  if ( _bittest64(&v587, v580) )
                  {
                    v588 = *((_QWORD *)v9 + 5);
                    *v9 = 8;
                    if ( (char *)(v588 + 32) == v578 )
                    {
                      sub_11CA10(v578, (char *)(v588 + 48));
                      v588 = *((_QWORD *)v9 + 5);
                      LODWORD(v580) = 8 * v579 - v23;
                    }
                    sub_1273B0(v588 + 32, (unsigned __int64 *)v798, *((_QWORD *)v9 + 3), (int)v580 >> 3, a7);
                    sub_11CDA0((__int64)(v9 + 12));
                    v584 = *((_QWORD *)v9 + 5);
                    goto LABEL_1731;
                  }
                }
                v806 = nullptr;
                if ( v252 == 22 )
                {
                  v251 = *((_QWORD *)v9 + 5);
                  goto LABEL_901;
                }
LABEL_1722:
                if ( ((unsigned __int64)v803 & ((_QWORD)v803 - 1LL)) == 0 )
                {
                  v575 = *((_QWORD *)v9 + 5);
                  v795.m128i_i32[0] = v15;
                  v576 = sub_11C8A0(v575, &v806);
                  v15 = v795.m128i_i32[0];
                  if ( v576 )
                  {
                    v577 = log2ceil();
                    v15 = v795.m128i_i32[0];
                    v254 = v577;
                  }
                }
                goto LABEL_902;
              }
              if ( *v9 == 24 && (v603 & (v603 - 1)) == 0 )
              {
                v605 = *((_QWORD *)v9 + 5);
                v795.m128i_i32[0] = v780;
                v606 = v578 == (char *)(v605 + 32);
                v607 = log2ceil();
                *((_QWORD *)&v11 + 1) = v9;
                v608 = sub_14E360((unsigned __int64 *)v798, (__int64)v9, (unsigned int)v23, v607, v606, a7);
                v15 = v795.m128i_i32[0];
                if ( v608 )
                  goto LABEL_32;
              }
            }
          }
          v254 = 0;
          v806 = nullptr;
          goto LABEL_1722;
        }
        v696 = v803;
        if ( DWORD2(v11) == 4 )
        {
          if ( v249 == 23 )
          {
            v311 = (unsigned int)v803 >> v22;
            goto LABEL_1009;
          }
          if ( v249 != 24 )
          {
            if ( v249 != 22 )
              sub_14E4E0(*(double *)a7.m128i_i64);
            v311 = (unsigned int)((_DWORD)v803 << v22);
            goto LABEL_1009;
          }
        }
        else
        {
          if ( SDWORD2(v11) > 4 )
          {
            if ( DWORD2(v11) == 8 )
            {
              switch ( v249 )
              {
                case 0x17u:
                  v311 = (unsigned __int64)v803 >> v22;
                  break;
                case 0x18u:
                  v311 = (__int64)v803 >> v22;
                  break;
                case 0x16u:
                  v311 = (_QWORD)v803 << v22;
                  break;
                default:
                  sub_14E4E0(*(double *)a7.m128i_i64);
              }
              goto LABEL_1009;
            }
            goto LABEL_1978;
          }
          if ( DWORD2(v11) != 1 )
          {
            if ( DWORD2(v11) == 2 )
            {
              switch ( v249 )
              {
                case 0x17u:
                  v311 = (int)(unsigned __int16)v803 >> v22;
                  break;
                case 0x18u:
                  v311 = (__int16)v803 >> v22;
                  break;
                case 0x16u:
                  v311 = (unsigned __int16)((unsigned __int16)v803 << v22);
                  break;
                default:
                  sub_14E4E0(*(double *)a7.m128i_i64);
              }
              goto LABEL_1009;
            }
LABEL_1978:
            if ( !under_debugger )
              sub_383060(0xC777u, *(double *)a7.m128i_i64);
            goto LABEL_2165;
          }
          if ( v249 == 23 )
          {
            v311 = (int)(unsigned __int8)v803 >> v22;
            goto LABEL_1009;
          }
          if ( v249 != 24 )
          {
            if ( v249 != 22 )
              sub_14E4E0(*(double *)a7.m128i_i64);
            v311 = (unsigned __int8)((unsigned __int8)v803 << v22);
            goto LABEL_1009;
          }
          v696 = (char)v803;
        }
        v311 = v696 >> v22;
LABEL_1009:
        *(_QWORD *)&v803 = v311;
        goto LABEL_259;
      case 0x18u:
        *((_QWORD *)&v11 + 1) = v793;
        *(_QWORD *)&v11 = v794;
        v16 = sub_119AE0(v11, (__int64)v9, 0, *(double *)a7.m128i_i64);
        if ( v16 )
          goto LABEL_47;
        *((_QWORD *)&v11 + 1) = v793;
        if ( !(unsigned __int8)sub_118AF0((__int64)v794, (__int64)v793, (__int64)v796, (__int64)v9) )
          goto LABEL_56;
        goto LABEL_32;
      case 0x19u:
        v795.m128i_i64[0] = (__int64)(v9 + 8);
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 32, (__int64 *)&v803, 0) )
        {
          v115 = (char *)(v9 + 12);
          if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, (__int64 *)&v803 + 1, 0) )
          {
            v131 = sub_32ABC0(v803 + *((_QWORD *)&v803 + 1), v9[9], 0);
            *(_QWORD *)&v803 = v131 < (unsigned __int64)v803;
            goto LABEL_259;
          }
        }
        else
        {
          v115 = (char *)(v9 + 12);
        }
        if ( *((_BYTE *)v9 + 32) == 2 )
          sub_11CA10((char *)v795.m128i_i64[0], v115);
        if ( v793
          && *(_DWORD *)v793 == 42
          && (unsigned __int8)sub_11FD80(v115, (__int64 *)&v803 + 1, 0)
          && *((_QWORD *)&v803 + 1) )
        {
          *((_QWORD *)&v11 + 1) = v9[13];
          v116 = *((__m128i **)v9 + 7);
          v117 = sub_32ABC0(-*((_QWORD *)&v803 + 1), SDWORD2(v11), 0);
          a7 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v117, (__m128i)(unsigned __int64)v117);
          v116[1] = a7;
          *v9 = 34;
          goto LABEL_32;
        }
LABEL_455:
        v797 = (__m128i *)&v808;
        if ( !(unsigned __int8)sub_11FD80(v115, &v808, 0) || v808 )
        {
          *((_QWORD *)&v11 + 1) = v797;
          if ( !(unsigned __int8)sub_11FD80((char *)v9 + 32, v797->m128i_i64, 0) )
            goto LABEL_19;
LABEL_458:
          if ( v808 )
          {
            v15 = *v9;
            LODWORD(m128i_i64) = *v9;
            goto LABEL_20;
          }
        }
        goto LABEL_258;
      case 0x1Au:
        v115 = (char *)(v9 + 12);
        if ( !v796 )
          goto LABEL_455;
        v115 = (char *)(v9 + 12);
        LODWORD(v797) = *(_DWORD *)v796;
        if ( (((_DWORD)v797 - 19) & 0xFFFFFFFD) != 0
          || !(unsigned __int8)sub_11FD80((char *)v9 + 48, (__int64 *)&v803 + 1, 0) )
        {
          goto LABEL_455;
        }
        v127 = v9[13];
        v128 = *((_QWORD *)&v803 + 1);
        v129 = 0;
        v130 = 8 * v127 - 1;
        if ( (unsigned __int64)v130 <= 0x3F )
        {
          v129 = 1LL << v130;
          v128 = (2 * (1LL << v130) - 1) & *((_QWORD *)&v803 + 1);
        }
        if ( v129 == v128 )
          goto LABEL_455;
        *((_QWORD *)&v11 + 1) = v798;
        sub_1207E0((char *)v9 + 48, (unsigned __int64 *)v798, 5, *((_QWORD *)v9 + 3), v127, a7);
        *v9 = 30;
        goto LABEL_32;
      case 0x1Bu:
        v797 = (__m128i *)&v808;
        goto LABEL_473;
      case 0x1Cu:
        v797 = (__m128i *)&v808;
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, &v808, 0) && v808 == 1 )
        {
          v154 = v9[9];
          *v9 = 20;
          *((_QWORD *)&v11 + 1) = v798;
          v9[13] = v154;
          v9[17] = v154;
          sub_12B6F0((__int64)v9, *((unsigned __int64 **)&v11 + 1), 10, -1, 1, a7);
          v9[17] = 1;
          goto LABEL_32;
        }
        if ( v793
          && *(_DWORD *)v793 == 42
          && (unsigned __int8)sub_11FD80((char *)v9 + 48, (__int64 *)&v803, 0)
          && (_QWORD)v803 )
        {
          v233 = v803 - 1;
          v234 = v9[9];
          v235 = *((__m128i **)v9 + 7);
          *v9 = 20;
          v236 = 0;
          v9[13] = v234;
          if ( (unsigned __int64)v233 < 0x40 )
            v236 = 1LL << v233;
          v237 = sub_32ABC0(v236, v234, 0);
          v238 = (char *)v797;
          a7 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v237, (__m128i)(unsigned __int64)v237);
          *(_QWORD *)&v11 = v797;
          v235[1] = a7;
          v9[17] = v234;
          v808 = 0xFFFFFFFF00000000LL;
          src[0] = nullptr;
          sub_1262E0(v11, (unsigned __int8 *)v9, *(double *)a7.m128i_i64);
          *v9 = 32;
          sub_11CA10((char *)v9 + 32, v238);
          v9[9] = v234;
          *((_QWORD *)&v11 + 1) = v798;
          sub_120A10((__int64)(v9 + 12), (unsigned __int64 *)v798, 0, v234, *((_QWORD *)v9 + 3), 0);
          v9[17] = 1;
          sub_11CDA0((__int64)v238);
          goto LABEL_32;
        }
LABEL_473:
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 32, v797->m128i_i64, 0) && !v808 )
          goto LABEL_258;
        *((_QWORD *)&v11 + 1) = v797;
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, v797->m128i_i64, 0) )
          goto LABEL_458;
        v15 = *v9;
        LODWORD(m128i_i64) = *v9;
        goto LABEL_20;
      case 0x1Du:
        v795.m128i_i64[0] = (__int64)(v9 + 8);
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 32, (__int64 *)&v803, 1) )
        {
          *(_QWORD *)&v803 = (unsigned __int64)v803 >> 63;
          goto LABEL_259;
        }
        *((_QWORD *)&v11 + 1) = v9;
        v16 = sub_122E80((unsigned __int64 *)v798, v9);
        if ( v16 )
          goto LABEL_47;
        if ( *((_BYTE *)v9 + 32) != 4 )
          goto LABEL_2168;
        *((_QWORD *)&v11 + 1) = v9;
        if ( (unsigned __int8)sub_14DC50((unsigned __int64 *)v798, (__int64)v9, a7) )
          goto LABEL_32;
        if ( **((_DWORD **)v9 + 5) != 9 )
        {
LABEL_2168:
          *((_QWORD *)&v50 + 1) = v793;
          *(_QWORD *)&v50 = v794;
          if ( !(unsigned __int8)sub_1299D0(v50, (char *)v795.m128i_i64[0], 0, *(double *)a7.m128i_i64, a8) )
            goto LABEL_200;
        }
        goto LABEL_258;
      case 0x1Eu:
        v797 = (__m128i *)&v808;
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, &v808, 0) && !v808 )
          goto LABEL_258;
        if ( *((_BYTE *)v9 + 32) != 4 )
          goto LABEL_10;
        v213 = *((__m128i **)v9 + 5);
        if ( (unsigned int)(v213->m128i_i32[0] - 12) > 1 )
          goto LABEL_10;
        v214 = (char *)sub_11C8A0(*((_QWORD *)v9 + 5), &v806);
        v215 = v214;
        if ( !v214 || (unsigned __int8)sub_11FD80(v214, v797->m128i_i64, 0) && !v808 )
          goto LABEL_10;
        if ( !sub_125B60((unsigned __int8 *)v806, (__int64)(v9 + 12), 0, *(double *)a7.m128i_i64) )
          goto LABEL_10;
        *((_QWORD *)&v11 + 1) = *((unsigned int *)v215 + 1);
        v216 = sub_32ABC0(*(_QWORD *)(*((_QWORD *)v215 + 1) + 16LL), SDWORD2(v11), 1);
        LOBYTE(m128i_i64) = v216 <= 0;
        if ( v213->m128i_i32[0] == 12 )
          goto LABEL_784;
        m128i_i64 = (__int64)v213[3].m128i_i64;
        if ( v215 == (char *)&v213[3] )
        {
          LOBYTE(m128i_i64) = v216 > 0;
LABEL_784:
          v217 = 41;
          if ( (_BYTE)m128i_i64 )
            v217 = 39;
          *v9 = v217;
          goto LABEL_32;
        }
LABEL_10:
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 32, (__int64 *)&v803, 1)
          && (unsigned __int8)sub_11FD80((char *)v9 + 48, (__int64 *)&v803 + 1, 1) )
        {
          switch ( *v9 )
          {
            case 0x1Eu:
              v282 = 8 * v9[9] - 1;
              if ( (unsigned __int64)(int)v282 <= 0x3F )
              {
                v283 = v803 - *((_QWORD *)&v803 + 1);
                v12 = _bittest64(&v283, v282);
              }
              *(_QWORD *)&v803 = (__int64)v803 >= *((_QWORD *)&v803 + 1) == v12;
              break;
            case 0x26u:
              *(_QWORD *)&v803 = (__int64)v803 > *((_QWORD *)&v803 + 1);
              break;
            case 0x27u:
              *(_QWORD *)&v803 = (__int64)v803 >= *((_QWORD *)&v803 + 1);
              break;
            case 0x28u:
              *(_QWORD *)&v803 = (__int64)v803 < *((_QWORD *)&v803 + 1);
              break;
            case 0x29u:
              *(_QWORD *)&v803 = (__int64)v803 <= *((_QWORD *)&v803 + 1);
              break;
            default:
              goto LABEL_259;
          }
          goto LABEL_259;
        }
        *((_QWORD *)&v11 + 1) = v9;
        v16 = sub_122E80((unsigned __int64 *)v798, v9);
        if ( v16 )
          goto LABEL_47;
LABEL_12:
        if ( *((_BYTE *)v9 + 32) != 4 )
          goto LABEL_13;
        *((_QWORD *)&v11 + 1) = &v808;
        v797 = (__m128i *)&v808;
        if ( !(unsigned __int8)sub_11FD80((char *)v9 + 48, &v808, 0) || v808 )
          goto LABEL_13;
        *((_QWORD *)&v11 + 1) = v9;
        if ( (unsigned __int8)sub_14DC50((unsigned __int64 *)v798, (__int64)v9, a7) )
          goto LABEL_32;
        v125 = **((_DWORD **)v9 + 5);
        if ( v125 != 5 )
          goto LABEL_524;
        v126 = sub_32EA00(*v9);
        if ( v126 )
          goto LABEL_527;
        v125 = **((_DWORD **)v9 + 5);
LABEL_524:
        if ( v125 == 7 && *v9 - 50 <= 1 )
        {
          v126 = sub_32E9E0(*v9);
          if ( v126 )
          {
LABEL_527:
            *v9 = v126;
            v61 = *((_QWORD *)v9 + 5);
            goto LABEL_519;
          }
        }
        goto LABEL_13;
      case 0x1Fu:
        v108 = v9[1];
        if ( (v108 & 0x10) != 0 )
        {
          *((_QWORD *)&v11 + 1) = v798;
          v109 = *((_QWORD *)v798 + 12);
          if ( (*(_BYTE *)(v109 + 604) & 4) != 0 )
          {
            if ( !v794 )
            {
              memset(src, 0, sizeof(src));
              v808 = (__int64)&off_4DDD00;
              *((_QWORD *)&v11 + 1) = &v808;
              *(_QWORD *)&v810 = v109;
              if ( (unsigned int)sub_11F760(v9, &v808) )
                goto LABEL_160;
              v108 = v9[1];
            }
            v110 = *((_QWORD *)v9 + 3);
            *((_QWORD *)&v11 + 1) = v798;
            v9[1] = v108 & 0xFFFFFFEF;
            v20 = (char *)(v9 + 12);
            sub_120A10((__int64)(v9 + 8), *((unsigned __int64 **)&v11 + 1), 0, 1, v110, 0);
            goto LABEL_349;
          }
        }
        else if ( *((_BYTE *)v9 + 32) == 4 && **((_DWORD **)v9 + 5) == 13 )
        {
          v20 = (char *)(v9 + 12);
          *((_QWORD *)&v11 + 1) = &v808;
          v797 = (__m128i *)&v808;
          if ( !(unsigned __int8)sub_11FD80((char *)v9 + 48, &v808, 0) || v808 )
            goto LABEL_19;
          v61 = *((_QWORD *)v9 + 5);
          goto LABEL_516;
        }
LABEL_416:
        if ( !v800 )
          goto LABEL_21;
        goto LABEL_31;
      case 0x20u:
      case 0x21u:
        *((_QWORD *)&v11 + 1) = v793;
        if ( (unsigned __int8)sub_118AF0((__int64)v794, (__int64)v793, (__int64)v796, (__int64)v9) )
          goto LABEL_32;
        v795.m128i_i64[0] = (__int64)(v9 + 8);
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 32, (__int64 *)&v803, 1)
          && (unsigned __int8)sub_11FD80((char *)v9 + 48, (__int64 *)&v803 + 1, 1) )
        {
          v247 = v803;
          v52 = *v9 == 32;
          *(_QWORD *)&v803 = v803 == *((_QWORD *)&v803 + 1);
          if ( v52 )
            *(_QWORD *)&v803 = v247 != *((_QWORD *)&v247 + 1);
          goto LABEL_259;
        }
        v797 = (__m128i *)&v808;
        if ( (unsigned __int8)sub_11FD80((char *)v795.m128i_i64[0], &v808, 0) && !v808 )
          sub_11CA10((char *)v795.m128i_i64[0], (char *)v9 + 48);
        if ( *((_BYTE *)v9 + 32) != 4 )
          goto LABEL_192;
        if ( (v9[1] & 0x10) != 0 )
        {
          if ( *v9 - 42 <= 0xA )
            goto LABEL_17;
          goto LABEL_487;
        }
        v20 = (char *)(v9 + 12);
        if ( !(unsigned __int8)sub_11FD80((char *)v9 + 48, v797->m128i_i64, 0) || v808 )
          goto LABEL_1171;
        v61 = *((_QWORD *)v9 + 5);
        v394 = *(_DWORD *)v61;
        if ( *(_DWORD *)v61 == 5 )
          goto LABEL_519;
        switch ( v394 )
        {
          case 7u:
LABEL_1480:
            sub_120A10((__int64)v20, (unsigned __int64 *)v798, -1, v9[13], *(_QWORD *)(v61 + 24), 0);
            v61 = *((_QWORD *)v9 + 5);
            goto LABEL_519;
          case 0xDu:
            if ( v794
              && (*(_BYTE *)(v61 + 32) != 1 || *(_DWORD *)(v794[4].m128i_i64[0] + 1184) != *(_DWORD *)(v61 + 40)) )
            {
              goto LABEL_516;
            }
            break;
          case 0x13u:
            if ( (unsigned __int8)sub_11FD80((char *)(v61 + 48), (__int64 *)&v803, 0) && (_QWORD)v803 )
              goto LABEL_1111;
            v61 = *((_QWORD *)v9 + 5);
            break;
        }
        v395 = sub_97B50((__int64)v798, v794, (__int64)v793, (unsigned __int8 *)v61, *(double *)a7.m128i_i64);
        v396 = *((_QWORD *)v9 + 5);
        if ( v395 )
        {
          v675 = *(_DWORD *)(v396 + 68);
          *((_QWORD *)&v11 + 1) = v798;
          v9[9] = v675;
          sub_1207E0((char *)v9 + 48, *((unsigned __int64 **)&v11 + 1), 9, *(_QWORD *)(v396 + 24), v675, a7);
          goto LABEL_32;
        }
        v397 = *(_DWORD *)v396;
        if ( *(_DWORD *)v396 != 9 )
          goto LABEL_1295;
        v439 = 9;
        if ( *(_BYTE *)(v396 + 32) != 4 )
          goto LABEL_2169;
        v396 = *(_QWORD *)(v396 + 40);
        v397 = *(_DWORD *)v396;
LABEL_1295:
        if ( (unsigned int)(v397 - 29) <= 0xC && (*v9 != 33 || (v397 = sub_32E9E0(v397)) != 0) )
        {
          *(_DWORD *)v396 = v397;
          v61 = *((_QWORD *)v9 + 5);
          v398 = *(_DWORD *)v61;
          if ( *(_DWORD *)v61 == 9 )
            v398 = 4;
          *v9 = v398;
          v69 = v9[1];
          goto LABEL_517;
        }
        v439 = *(_DWORD *)v396;
        if ( (unsigned int)(*(_DWORD *)v396 - 23) <= 1 )
        {
          if ( *(_BYTE *)(v396 + 48) == 2
            && 8 * *(_DWORD *)(v396 + 36) - 1 == *(unsigned __int8 *)(*(_QWORD *)(v396 + 56) + 16LL)
            && *(_BYTE *)(v396 + 32) == 4 )
          {
            v710 = *(_QWORD *)(v396 + 40);
            if ( *(_DWORD *)v710 == 7 )
            {
              v711 = (char *)v797;
              src[0] = nullptr;
              v808 = 0xFFFFFFFF00000000LL;
              sub_11CA10(v797->m128i_i8, (char *)(v710 + 32));
              *((_QWORD *)&v11 + 1) = v795.m128i_i64[0];
              sub_11CA10(v711, (char *)v795.m128i_i64[0]);
              v52 = *v9 == 32;
              v9[13] = v9[9];
              v712 = 40;
              if ( v52 )
                v712 = 39;
              *v9 = v712;
              sub_11CDA0((__int64)v797);
              goto LABEL_32;
            }
          }
        }
        else
        {
LABEL_2169:
          if ( v794 )
          {
            if ( v439 == 20 )
            {
              v669 = *(_DWORD *)(v396 + 36);
              if ( v396 == *((_QWORD *)v9 + 5) || *(unsigned __int8 *)(*((_QWORD *)v798 + 12) + 130LL) <= v669 )
              {
                v670 = 8 * v669 - 1;
                v671 = 0;
                if ( (unsigned __int64)v670 <= 0x3F )
                  v671 = 1LL << v670;
                if ( sub_A2350((char *)(v396 + 48), v671, 0) )
                {
                  v672 = *(_QWORD **)(v794[4].m128i_i64[0] + 1328);
                  if ( !*v672 )
                    goto LABEL_1907;
                  v673 = *(_QWORD *)*v672 & 0xFFFFFFFFFFFFFFFCLL;
                  if ( v673 )
                  {
                    v772 = (_QWORD *)*v672;
                    v674 = *(unsigned __int64 **)(v794[4].m128i_i64[0] + 1328);
                    v786 = *(_QWORD *)(v396 + 56);
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        if ( (*(_BYTE *)v673 & 2) != 0 )
                        {
                          v676 = v772;
                          v673 = *v674;
                          goto LABEL_1906;
                        }
                        if ( (int)sub_257C40(v786, v673 + 24) >= 0 )
                          break;
                        v673 = *(_QWORD *)(v673 + 8);
                      }
                      if ( (int)sub_257C40(v673 + 24, v786) >= 0 )
                        break;
                      v673 = *(_QWORD *)(v673 + 16);
                    }
                    v676 = v772;
LABEL_1906:
                    if ( v676 == (_QWORD *)v673 )
                    {
LABEL_1907:
                      v677 = (char *)v797;
                      src[0] = nullptr;
                      v808 = 0xFFFFFFFF00000000LL;
                      sub_11CA10(v797->m128i_i8, (char *)(v396 + 32));
                      *((_QWORD *)&v11 + 1) = v677;
                      sub_11CA10((char *)v795.m128i_i64[0], v677);
                      if ( *v9 == 33 )
                      {
                        v678 = v9[9];
                        *v9 = 39;
                        v9[13] = v678;
                      }
                      else
                      {
                        *v9 = 29;
                        sub_11CDA0((__int64)(v9 + 12));
                      }
                      goto LABEL_2152;
                    }
                  }
                }
              }
            }
          }
        }
        v440 = (unsigned __int8 *)sub_30D1C0(*((_QWORD *)v9 + 5));
        if ( v440 )
        {
          v441 = *v9;
          v442 = (unsigned __int8 *)v797;
          *v9 = 29;
          v808 = 0xFFFFFFFF00000000LL;
          src[0] = nullptr;
          sub_125180(v442, v440);
          *((_QWORD *)&v11 + 1) = v442;
          sub_11CA10((char *)v795.m128i_i64[0], (char *)v442);
          sub_11CDA0((__int64)(v9 + 12));
          if ( v441 == 33 )
          {
            v729 = j__qalloc_or_throw(80, (__int64)v442, v443, v444);
            sub_1510E0((_QWORD *)v729, *((_QWORD *)v9 + 3));
            sub_11D890(v729, (__int64)v9);
            *((_QWORD *)v9 + 5) = v729;
            *((_QWORD *)&v11 + 1) = v729 + 64;
            *v9 = 6;
            *((_BYTE *)v9 + 32) = 4;
            v730 = *(_DWORD *)(v729 + 68);
            v9[9] = v730;
            v9[17] = v730;
            sub_11CA10((char *)v9 + 64, (char *)(v729 + 64));
          }
          goto LABEL_2152;
        }
LABEL_1171:
        v364 = *((_DWORD **)v9 + 5);
        if ( *v364 == 5 && sub_14FC50((__int64)(v364 + 8), (__int64)(v9 + 12), *(double *)a7.m128i_i64)
          || (unsigned __int8)sub_11FD80((char *)v9 + 48, v797->m128i_i64, 0)
          && !v808
          && (v432 = *((_DWORD **)v9 + 5), *v432 == 12)
          && sub_14FC50((__int64)(v432 + 8), (__int64)(v432 + 12), *(double *)a7.m128i_i64) )
        {
LABEL_1111:
          *(_QWORD *)&v803 = *v9 != 33;
          goto LABEL_259;
        }
        if ( *((_BYTE *)v9 + 48) == 4 )
        {
          v365 = (unsigned __int8 *)sub_11C8E0((__int64)v9, v805, 33);
          if ( v365 )
          {
            if ( *v805[0] == 4 )
            {
              v366 = *((_QWORD *)v805[0] + 1);
              if ( *(_DWORD *)v366 == 35
                && v366
                && ((*(_BYTE *)(v366 + 4) & 0x10) != 0) == ((v365[4] & 0x10) != 0)
                && sub_125B90(v365, (__int64)v798, *((unsigned int **)v805[0] + 1), 2u, *(double *)a7.m128i_i64) )
              {
                *v9 = 36;
                v9[1] = *(_DWORD *)(v366 + 4);
                sub_123A40((__int64)&v806, (unsigned __int8 *)(v366 + 32), v367, v368);
                v369 = (unsigned __int8 *)(v366 + 48);
                v370 = (char *)v797;
                sub_123A40((__int64)v797, v369, v371, v372);
                sub_11CA10((char *)v795.m128i_i64[0], (char *)&v806);
                *((_QWORD *)&v11 + 1) = v370;
                sub_11CA10((char *)v9 + 48, v370);
                sub_11CDA0((__int64)v370);
                sub_11CDA0((__int64)&v806);
                goto LABEL_32;
              }
            }
          }
        }
LABEL_192:
        if ( (v9[1] & 0x10) == 0 )
        {
          v335 = (unsigned __int8 *)v795.m128i_i64[0];
          v336 = v9 + 12;
          v337 = v801;
          for ( i = 2; ; i = 1 )
          {
            if ( *(_BYTE *)v336 == 4 )
            {
              v342 = *((_QWORD *)v336 + 1);
              if ( (unsigned int)(*(_DWORD *)v342 - 12) <= 1
                && *(_BYTE *)(v342 + 48) == 2
                && (!(unsigned __int8)sub_11FD80((char *)(v342 + 48), v797->m128i_i64, 0) || v808)
                && sub_125B60(v335, *((_QWORD *)v336 + 1) + 32LL, 0, *(double *)a7.m128i_i64)
                && !(unsigned __int8)sub_1516B0((__int64)v335, (__int64)v798, 0) )
              {
                break;
              }
            }
            if ( i == 1 )
            {
              v801 = v337;
              goto LABEL_193;
            }
            v340 = v335;
            v335 = (unsigned __int8 *)v336;
            v336 = (unsigned int *)v340;
          }
          v801 = v337;
          goto LABEL_1111;
        }
LABEL_193:
        if ( *((_BYTE *)v9 + 32) == 2 && *((_BYTE *)v9 + 48) != 2 )
        {
          *((_QWORD *)&v11 + 1) = v9 + 12;
          sub_11CA10((char *)v795.m128i_i64[0], (char *)v9 + 48);
          goto LABEL_32;
        }
        goto LABEL_14;
      case 0x22u:
      case 0x24u:
      case 0x25u:
        goto LABEL_40;
      case 0x23u:
        v20 = (char *)(v9 + 12);
        v797 = (__m128i *)&v808;
        if ( !(unsigned __int8)sub_11FD80((char *)v9 + 48, &v808, 0) || v808 != 1 )
          goto LABEL_503;
        v21 = v9[1] & 0x10;
        if ( *((_BYTE *)v9 + 32) == 4 )
        {
          if ( v21 )
            goto LABEL_1022;
          if ( (unsigned __int8)sub_97B50(
                                  (__int64)v798,
                                  v794,
                                  (__int64)v793,
                                  *((unsigned __int8 **)v9 + 5),
                                  *(double *)a7.m128i_i64) )
          {
            a7 = 0;
            *((_QWORD *)&v11 + 1) = v798;
            v9[9] = *(_DWORD *)(*((_QWORD *)v9 + 5) + 68LL);
            *(_OWORD *)(*((_QWORD *)v9 + 7) + 16LL) = 0;
            sub_1207E0(
              (char *)v9 + 48,
              *((unsigned __int64 **)&v11 + 1),
              9,
              *(_QWORD *)(*((_QWORD *)v9 + 5) + 24LL),
              v9[9],
              (__m128i)0LL);
            *v9 = 33;
            goto LABEL_32;
          }
          if ( *((_BYTE *)v9 + 32) == 4 )
          {
LABEL_1022:
            v312 = *((_DWORD **)v9 + 5);
            if ( *v312 == 9 )
            {
              v314 = v312 + 8;
              v313 = *((_BYTE *)v312 + 32);
            }
            else
            {
              v313 = *((_BYTE *)v9 + 32);
              v314 = v9 + 8;
            }
            if ( v313 == 4 )
            {
              v315 = *((_QWORD *)v314 + 1);
              if ( *(_DWORD *)v315 == 29 )
              {
                *(_DWORD *)v315 = 39;
                sub_120A10(v315 + 48, (unsigned __int64 *)v798, 0, *(_DWORD *)(v315 + 36), *(_QWORD *)(v315 + 24), 0);
                goto LABEL_283;
              }
              v316 = sub_32E9E0(*(_DWORD *)v315);
              if ( v316 )
              {
                *(_DWORD *)v315 = v316;
                goto LABEL_283;
              }
            }
          }
LABEL_503:
          if ( (v9[1] & 0x10) == 0 )
          {
            if ( *((_BYTE *)v9 + 32) == 4 )
            {
              v120 = *((_DWORD **)v9 + 5);
              if ( *v120 == 13 )
              {
                if ( sub_125B60((unsigned __int8 *)v9 + 48, (__int64)(v120 + 8), 0, *(double *)a7.m128i_i64) )
                {
                  v121 = *((_QWORD *)v9 + 5);
                  if ( *(_BYTE *)(v121 + 32) == 4 )
                  {
                    if ( (unsigned __int8)sub_1205A0(*(_BYTE **)(v121 + 40), (__int64)v798, 0) )
                      goto LABEL_38;
                    v121 = *((_QWORD *)v9 + 5);
                  }
                  sub_11CA10((char *)v9 + 48, (char *)(v121 + 48));
                  v122 = (char *)v797;
                  src[0] = nullptr;
                  v808 = 0xFFFFFFFF00000000LL;
                  sub_11CA10(v797->m128i_i8, (char *)(*((_QWORD *)v9 + 5) + 32LL));
                  *((_QWORD *)&v11 + 1) = v122;
                  sub_11CA10((char *)v9 + 32, v122);
                  *v9 = 34;
                  sub_11CDA0((__int64)v122);
                  goto LABEL_32;
                }
              }
            }
LABEL_38:
            if ( *((_BYTE *)v9 + 48) == 4 && (v318 = *((_DWORD **)v9 + 7), *v318 == 13) )
            {
              v795.m128i_i64[0] = (__int64)(v9 + 8);
              if ( sub_125B60((unsigned __int8 *)v9 + 32, (__int64)(v318 + 8), 0, *(double *)a7.m128i_i64)
                && (*((_BYTE *)v9 + 32) != 4 || !(unsigned __int8)sub_1205A0(*((_BYTE **)v9 + 5), (__int64)v798, 0)) )
              {
                v461 = (char *)v797;
                src[0] = nullptr;
                v808 = 0xFFFFFFFF00000000LL;
                sub_11CA10(v797->m128i_i8, (char *)(*((_QWORD *)v9 + 7) + 48LL));
                *((_QWORD *)&v11 + 1) = v461;
                sub_11CA10((char *)v9 + 48, v461);
                sub_11CDA0((__int64)v461);
                goto LABEL_32;
              }
              LODWORD(m128i_i64) = *v9;
            }
            else
            {
              LODWORD(m128i_i64) = *v9;
LABEL_40:
              v795.m128i_i64[0] = (__int64)(v9 + 8);
            }
            if ( (unsigned int)(m128i_i64 - 34) <= 1
              && (v9[1] & 0x10) == 0
              && *((_BYTE *)v9 + 32) == 4
              && **((_DWORD **)v9 + 5) == 12 )
            {
              if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, (__int64 *)v805, 0) )
              {
                v149 = (char *)sub_11C8A0(*((_QWORD *)v9 + 5), &v806);
                if ( v149 )
                {
                  v150 = v805[0];
                  v797 = (__m128i *)&v808;
                  if ( (unsigned __int8)sub_11FD80(v149, &v808, 0) )
                  {
                    if ( v150 == (unsigned __int8 *)v808 )
                    {
                      v153 = (char *)v797;
                      sub_123A40((__int64)v797, (unsigned __int8 *)v806, v151, v152);
                      sub_11CA10((char *)v795.m128i_i64[0], v153);
                      *((_QWORD *)&v11 + 1) = v798;
                      sub_120A10(
                        (__int64)(v9 + 12),
                        (unsigned __int64 *)v798,
                        -(__int64)v805[0],
                        v9[13],
                        **((_QWORD **)v9 + 7),
                        0);
                      *v9 = sub_32E9E0(*v9);
                      sub_11CDA0((__int64)v153);
                      goto LABEL_32;
                    }
                  }
                }
              }
            }
            goto LABEL_44;
          }
        }
        else if ( !v21 )
        {
          goto LABEL_38;
        }
        v795.m128i_i64[0] = (__int64)(v9 + 8);
LABEL_44:
        if ( (unsigned __int8)sub_11FD80((char *)v795.m128i_i64[0], (__int64 *)&v803, 1)
          && (unsigned __int8)sub_11FD80((char *)v9 + 48, (__int64 *)&v803 + 1, 1) )
        {
          v223 = *v9;
          if ( *v9 == 36 )
          {
            *(_QWORD *)&v803 = *((_QWORD *)&v803 + 1) < (unsigned __int64)v803;
          }
          else if ( v223 > 0x24 )
          {
            if ( v223 == 37 )
              *(_QWORD *)&v803 = *((_QWORD *)&v803 + 1) >= (unsigned __int64)v803;
          }
          else if ( v223 == 34 )
          {
            *(_QWORD *)&v803 = (unsigned __int64)v803 >= *((_QWORD *)&v803 + 1);
          }
          else if ( v223 == 35 )
          {
            *(_QWORD *)&v803 = (unsigned __int64)v803 < *((_QWORD *)&v803 + 1);
          }
          v9[1] &= ~0x10u;
          goto LABEL_259;
        }
        *((_QWORD *)&v11 + 1) = v9;
        v16 = sub_122E80((unsigned __int64 *)v798, v9);
        if ( v16 )
        {
LABEL_47:
          switch ( v16 )
          {
            case 2:
              goto LABEL_258;
            case 3:
LABEL_669:
              *(_QWORD *)&v803 = 1;
              goto LABEL_259;
            case 1:
              goto LABEL_32;
          }
        }
LABEL_13:
        if ( (unsigned __int8)sub_154F20(v9) )
          goto LABEL_32;
LABEL_14:
        if ( *v9 - 42 <= 0xA )
        {
LABEL_15:
          if ( (v9[1] & 0x10) == 0 )
          {
LABEL_200:
            *((_QWORD *)&v11 + 1) = v9;
            if ( (unsigned __int8)sub_14F900((unsigned __int64 *)v798, (int *)v9) )
              goto LABEL_32;
            v15 = *v9;
            LODWORD(m128i_i64) = *v9;
            goto LABEL_20;
          }
LABEL_16:
          v795.m128i_i64[0] = (__int64)(v9 + 8);
LABEL_17:
          v17 = (unsigned __int64 *)v798;
          *((_QWORD *)&v11 + 1) = v798;
          if ( (unsigned __int8)sub_1552F0(v795.m128i_i64[0], (__int64)v798, *(double *)a7.m128i_i64) )
            goto LABEL_32;
          *((_QWORD *)&v11 + 1) = v17;
          if ( (unsigned __int8)sub_1552F0((__int64)(v9 + 12), (__int64)v17, *(double *)a7.m128i_i64) )
            goto LABEL_32;
          goto LABEL_19;
        }
LABEL_487:
        if ( (unsigned __int8)sub_14F5C0(
                                *((_QWORD *)v798 + 12),
                                (__int64)v794,
                                (__int64)v9,
                                (unsigned __int64 *)&v803,
                                *(double *)a7.m128i_i64) )
          goto LABEL_259;
        goto LABEL_15;
      case 0x26u:
      case 0x27u:
      case 0x29u:
        goto LABEL_10;
      case 0x28u:
        *((_QWORD *)&v11 + 1) = &v808;
        if ( !(unsigned __int8)sub_11FD80((char *)v9 + 48, &v808, 0) || v808 )
          goto LABEL_10;
        *v9 = 29;
        sub_11CDA0((__int64)(v9 + 12));
        goto LABEL_32;
      case 0x2Au:
        if ( *((_BYTE *)v9 + 32) != 4 )
          goto LABEL_416;
        *((_QWORD *)&v11 + 1) = v798;
        if ( (unsigned __int8)sub_152150((__int64)v9, (unsigned __int64 *)v798, m128i_i64, a4) )
          goto LABEL_32;
        goto LABEL_19;
      case 0x2Bu:
      case 0x2Cu:
        v48 = *((_BYTE *)v9 + 32);
        if ( v48 == 4 )
        {
          v20 = (char *)(v9 + 12);
          v797 = (__m128i *)&v808;
          if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, &v808, 0) && !v808 )
          {
            v242 = *((_QWORD *)v9 + 5);
            if ( *(_DWORD *)v242 == 10 && *(_BYTE *)(v242 + 32) == 4 )
              v242 = *(_QWORD *)(v242 + 40);
            v806 = (unsigned int *)v793;
            v243 = (unsigned __int8 *)sub_30D5C0((__int64)v798, (__int64)v794, &v806, (_DWORD *)v242);
            if ( v243
              || (v243 = (unsigned __int8 *)sub_30D340((__int64)v798, (__int64)v794, &v806, (int *)v242)) != nullptr )
            {
              if ( (unsigned __int8)sub_155C40(
                                      (__int64)v798,
                                      (__int64)v794,
                                      v806,
                                      (__int64)v243,
                                      *(double *)a7.m128i_i64) )
              {
                v448 = v243;
                v449 = (char *)v797;
                sub_123A40((__int64)v797, v448, v244, v245);
                *((_QWORD *)&v11 + 1) = v449;
                sub_11CA10((char *)v9 + 32, v449);
                *v9 = (*v9 != 44) + 50;
                v9[13] = v9[9];
                sub_11CDA0((__int64)v449);
                goto LABEL_32;
              }
            }
            v61 = *((_QWORD *)v9 + 5);
            v246 = *(_DWORD *)v61;
            switch ( *(_DWORD *)v61 )
            {
              case 5:
                goto LABEL_519;
              case 6:
                *v9 = (*v9 != 44) + 43;
                goto LABEL_519;
              case 7:
                goto LABEL_1480;
              case 8:
              case 9:
                if ( !(unsigned __int8)sub_12AB50(
                                         (unsigned int **)v9 + 6,
                                         (unsigned __int64 *)v798,
                                         *(_DWORD *)(v61 + 36),
                                         1,
                                         a7) )
                  goto LABEL_761;
                v9[1] &= ~0x10u;
                v61 = *((_QWORD *)v9 + 5);
                goto LABEL_519;
              case 0x13:
                if ( (signed int)v9[9] >= *((_DWORD *)v798 + 22) )
                  goto LABEL_761;
                if ( !v794 )
                  goto LABEL_1163;
                v450 = (unsigned __int8 *)(v61 + 48);
                v451 = (unsigned __int8 *)(v61 + 32);
                *(_QWORD *)&v452 = v794;
                *((_QWORD *)&v452 + 1) = v793;
                if ( (unsigned __int8)sub_132E20(v452, v61 + 32, (__int64)v793, v61 + 48, 0, a7, a8) )
                {
                  sub_1207E0(
                    (char *)v9 + 48,
                    (unsigned __int64 *)v798,
                    9,
                    *(_QWORD *)(v61 + 24),
                    *(_DWORD *)(v61 + 36),
                    a7);
                  v685 = (char *)v797;
                  sub_123A40((__int64)v797, v451, v686, v687);
                  *((_QWORD *)&v11 + 1) = v685;
                  sub_11CA10((char *)v9 + 32, v685);
                  sub_11CDA0((__int64)v685);
                  goto LABEL_32;
                }
                *((_QWORD *)&v453 + 1) = v793;
                *(_QWORD *)&v453 = v794;
                if ( !(unsigned __int8)sub_132E20(v453, v61 + 48, (__int64)v793, v61 + 32, 0, a7, a8) )
                  goto LABEL_762;
                sub_1207E0(
                  (char *)v9 + 48,
                  (unsigned __int64 *)v798,
                  9,
                  *(_QWORD *)(v61 + 24),
                  *(_DWORD *)(v61 + 52),
                  a7);
                v454 = (char *)v797;
                sub_123A40((__int64)v797, v450, v455, v456);
                *((_QWORD *)&v11 + 1) = v454;
                sub_11CA10((char *)v9 + 32, v454);
                sub_11CDA0((__int64)v454);
                goto LABEL_32;
              case 0x19:
                if ( (unsigned __int8)sub_11FD80((char *)(v61 + 48), (__int64 *)&v803 + 1, 0) && *((_QWORD *)&v803 + 1) )
                {
                  *((_QWORD *)&v11 + 1) = *(_QWORD *)(v61 + 56);
                  sub_14E870(*(_DWORD *)(v61 + 52), *((__m128i **)&v11 + 1), -*((_QWORD *)&v803 + 1));
                  *(_DWORD *)v61 = 34;
                  goto LABEL_32;
                }
                v246 = *(_DWORD *)v61;
LABEL_952:
                if ( (unsigned int)(v246 - 29) > 0xC )
                  goto LABEL_761;
                v284 = sub_32E9E0(v246);
                if ( !v284 )
                  goto LABEL_761;
                if ( *v9 == 43 )
                  v284 = *(_DWORD *)v61;
                v61 = *((_QWORD *)v9 + 5);
                *v9 = v284 + 11;
                v69 = v9[1];
                break;
              default:
                goto LABEL_952;
            }
            goto LABEL_517;
          }
LABEL_761:
          if ( !v794 )
          {
LABEL_1163:
            v48 = *((_BYTE *)v9 + 32);
            if ( v48 != 4 )
              goto LABEL_182;
            sub_11FD80((char *)v9 + 48, (__int64 *)&v803 + 1, 0);
            goto LABEL_181;
          }
LABEL_762:
          v208 = *((_BYTE *)v9 + 32);
          if ( v208 != 14 )
          {
            if ( v208 != 4 )
              goto LABEL_177;
            goto LABEL_764;
          }
        }
        else
        {
          if ( !v794 )
          {
LABEL_182:
            if ( v48 == 2 && *((_BYTE *)v9 + 48) != 2 )
            {
LABEL_184:
              *((_QWORD *)&v11 + 1) = v9 + 12;
              sub_11CA10((char *)v9 + 32, (char *)v9 + 48);
              goto LABEL_32;
            }
            goto LABEL_14;
          }
          if ( v48 != 14 )
            goto LABEL_177;
          v20 = (char *)(v9 + 12);
          v797 = (__m128i *)&v808;
        }
        if ( (unsigned __int8)sub_11FD80(v20, v797->m128i_i64, 0) && !v808 )
        {
          *((_QWORD *)&v11 + 1) = v793;
          *(_QWORD *)&v11 = v794;
          if ( (unsigned __int8)sub_14EFD0(
                                  v11,
                                  (__int64)(v9 + 8),
                                  *((_QWORD *)v9 + 5) + 16LL,
                                  *((_QWORD *)v9 + 5),
                                  0,
                                  a7) )
            goto LABEL_32;
          if ( *((_BYTE *)v9 + 32) != 4 )
          {
            v49 = (_DWORD *)v794[4].m128i_i64[0];
            goto LABEL_178;
          }
        }
        else if ( *((_BYTE *)v9 + 32) != 4 )
        {
          goto LABEL_177;
        }
LABEL_764:
        if ( !(unsigned __int8)sub_11FD80(v20, (__int64 *)&v803 + 1, 0) )
          goto LABEL_177;
        v209 = *((_QWORD *)v9 + 5);
        v49 = (_DWORD *)v794[4].m128i_i64[0];
        if ( (*(_BYTE *)(v209 + 32) != 1 || v49[296] != *(_DWORD *)(v209 + 40))
          && (unsigned int)(*(_DWORD *)v209 - 12) <= 1 )
        {
          if ( (unsigned __int8)sub_11FD80((char *)(v209 + 48), (__int64 *)&v803, 1) )
          {
            v210 = v9[9];
            if ( *(_DWORD *)v209 == 13 )
            {
LABEL_773:
              sub_120A10(
                v209 + 48,
                (unsigned __int64 *)v798,
                v803 + *((_QWORD *)&v803 + 1),
                v210,
                **(_QWORD **)(v209 + 56),
                *(_DWORD *)(*(_QWORD *)(v209 + 56) + 8LL));
              v61 = *((_QWORD *)v9 + 5);
              v69 = v9[1];
              goto LABEL_517;
            }
            v211 = 8 * v210 - 1;
            v212 = 1LL << v211;
            if ( (unsigned __int64)v211 >= 0x40 )
              v212 = 0;
            if ( v212 != ((unsigned __int64)v803 & (2 * v212 - 1)) )
            {
              *(_QWORD *)&v803 = -(__int64)v803;
              goto LABEL_773;
            }
          }
LABEL_177:
          v49 = (_DWORD *)v794[4].m128i_i64[0];
        }
LABEL_178:
        if ( (*v49 & 0x800) != 0 )
          sub_13B6E0(v794, *(double *)a7.m128i_i64, a8);
        *((_QWORD *)&v11 + 1) = v9;
        if ( (unsigned __int8)sub_1569E0(v794, (__int64)v9, a7, a8) )
          goto LABEL_32;
LABEL_181:
        v48 = *((_BYTE *)v9 + 32);
        goto LABEL_182;
      case 0x2Du:
      case 0x2Eu:
      case 0x2Fu:
      case 0x30u:
        goto LABEL_13;
      case 0x31u:
      case 0x32u:
      case 0x33u:
      case 0x34u:
        goto LABEL_12;
      case 0x35u:
        *((_QWORD *)&v11 + 1) = v9;
        if ( (unsigned __int8)sub_15B5C0(*((_QWORD *)v798 + 12), (__int64)v9, m128i_i64, a4, v13) )
          goto LABEL_32;
        if ( *((_BYTE *)v9 + 32) != 4 )
          goto LABEL_433;
        v189 = *((char **)v9 + 5);
        v190 = *(_DWORD *)v189;
        if ( (unsigned int)(*(_DWORD *)v189 - 12) <= 1 )
        {
          *((_QWORD *)&v11 + 1) = &v803;
          v257 = sub_11FD80(v189 + 48, (__int64 *)&v803, 1);
          v190 = *(_DWORD *)v189;
          if ( v257 )
          {
            if ( v190 == 12 )
              *(_QWORD *)&v803 = -(__int64)v803;
            v258 = *((_QWORD **)v9 + 7);
            v259 = 0;
            v260 = 0;
            if ( !v258[1] )
              goto LABEL_843;
            v261 = v801;
            v262 = v798;
            do
            {
              v263 = v261;
              v264 = (_QWORD *)(*v258 + 24 * v260);
              v265 = 0;
              v266 = 0;
              if ( v264[1] )
              {
                do
                {
                  v267 = (_QWORD *)(*v264 + 8 * v266);
                  v268 = v803 + *v267;
                  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v262 + 12) + 24LL) + 24LL) != 8 )
                    v268 = (int)v268;
                  ++v265;
                  *v267 = v268;
                  v266 = v265;
                }
                while ( (unsigned __int64)v265 < v264[1] );
                v261 = v263;
              }
              v260 = ++v259;
            }
            while ( (unsigned __int64)v259 < v258[1] );
            v801 = v261;
            v61 = *((_QWORD *)v9 + 5);
            v797 = (__m128i *)&v808;
            goto LABEL_519;
          }
        }
        if ( (unsigned int)(v190 - 8) > 1 )
          goto LABEL_433;
        v191 = *((__int64 **)v9 + 7);
        if ( !v191[1] )
          goto LABEL_843;
        v192 = v190 == 8;
        v193 = *v191;
        v194 = 0;
        v195 = v192;
        LODWORD(v797) = v801;
        v196 = v9;
        v197 = 0;
        v198 = v196;
        while ( 2 )
        {
          while ( 1 )
          {
            v199 = (__int64 *)(v193 + 24 * v194);
            if ( v199[1] )
              break;
            v194 = ++v197;
            if ( v197 >= (unsigned __int64)v191[1] )
            {
              v9 = v198;
              v801 = (unsigned int)v797;
              goto LABEL_843;
            }
          }
          v795.m128i_i64[0] = (__int64)v191;
          v200 = *v199;
          v201 = 0;
          v801 = v195;
          v774 = v197;
          v202 = 0;
          v203 = v199;
          v204 = v189;
          v205 = v198;
          while ( 1 )
          {
            ++v202;
            v206 = sub_32ABC0(*(_QWORD *)(v200 + 8 * v201), *((_DWORD *)v204 + 9), v801);
            v200 = *v203;
            *((_QWORD *)&v11 + 1) = *(_QWORD *)(*v203 + 8 * v201);
            v201 = v202;
            if ( v202 >= (unsigned __int64)v203[1] )
              break;
            if ( *((_QWORD *)&v11 + 1) != v206 )
            {
              v9 = v205;
              v801 = (unsigned int)v797;
              goto LABEL_433;
            }
          }
          v191 = (__int64 *)v795.m128i_i64[0];
          v198 = v205;
          v189 = v204;
          v195 = v801;
          v197 = v774 + 1;
          v194 = v774 + 1;
          if ( v194 < *(_QWORD *)(v795.m128i_i64[0] + 8) )
          {
            if ( *((_QWORD *)&v11 + 1) != v206 )
            {
              v9 = v198;
              v801 = (unsigned int)v797;
              goto LABEL_433;
            }
            v193 = *(_QWORD *)v795.m128i_i64[0];
            continue;
          }
          break;
        }
        v9 = v198;
        v801 = (unsigned int)v797;
        if ( *((_QWORD *)&v11 + 1) == v206 )
          goto LABEL_843;
LABEL_433:
        if ( !v794 )
          goto LABEL_160;
        v105 = *((_QWORD *)v9 + 7);
        if ( *(_QWORD *)(v105 + 8) == 1 && !*(_QWORD *)(*(_QWORD *)v105 + 8LL) )
        {
          v52 = *((_BYTE *)v9 + 32) == 4;
          v795.m128i_i64[0] = (__int64)(v9 + 8);
          if ( !v52 )
            goto LABEL_437;
          *(_QWORD *)&v11 = *((_QWORD *)v9 + 5);
          src[0] = nullptr;
          v808 = (__int64)&off_4DDCD8;
          *(_QWORD *)&v810 = *((_QWORD *)v798 + 12);
          *((_QWORD *)&v810 + 1) = &v802;
          src[1] = v794;
          *(_OWORD *)&src[2] = (unsigned __int64)v793;
          *((_QWORD *)&v11 + 1) = &v808;
          if ( (unsigned int)sub_11F760((_BYTE *)v11, &v808) )
            goto LABEL_19;
          v105 = *((_QWORD *)v9 + 7);
LABEL_437:
          v106 = **(_DWORD **)(v105 + 24);
          sub_11CDA0(v795.m128i_i64[0]);
          *((_BYTE *)v9 + 32) = 7;
          v9[10] = v106;
          v104 = (__int64)(v9 + 16);
          v794[4].m128i_i32[3] = 3;
LABEL_438:
          *v9 = 55;
          sub_11CDA0(v104);
          *((_QWORD *)&v11 + 1) = v795.m128i_i64[0];
          sub_339C80((__int64)v798, v795.m128i_i64[0]);
          if ( a6 )
          {
            v107 = *((__m128 **)v9 + 3);
            if ( *a6 == (__m128 *)-1LL || v107 == *a6 )
            {
              *((_QWORD *)&v11 + 1) = a6;
              v20 = (char *)(v9 + 12);
              *a6 = v107;
              goto LABEL_350;
            }
LABEL_408:
            sub_14E4C0(*(double *)a7.m128i_i64);
          }
LABEL_386:
          v20 = (char *)(v9 + 12);
          if ( *((_BYTE *)v9 + 48) == 4 )
          {
LABEL_387:
            *(_QWORD *)&v11 = *((_QWORD *)v9 + 7);
            src[0] = nullptr;
            v808 = (__int64)&off_4DDCD8;
            *(_QWORD *)&v810 = *((_QWORD *)v798 + 12);
            *((_QWORD *)&v810 + 1) = &v802;
            src[1] = v794;
            *(_OWORD *)&src[2] = (unsigned __int64)v793;
            *((_QWORD *)&v11 + 1) = &v808;
            if ( (unsigned int)sub_11F760((_BYTE *)v11, &v808) )
            {
              if ( !under_debugger )
                sub_383060(0xC77Eu, *(double *)a7.m128i_i64);
              goto LABEL_2165;
            }
          }
LABEL_351:
          sub_11CDA0((__int64)v20);
          v795.m128i_i8[0] = 1;
LABEL_33:
          v10 = v801;
          continue;
        }
        *((_QWORD *)&v11 + 1) = &v803;
        v795.m128i_i64[0] = (__int64)(v9 + 8);
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 32, (__int64 *)&v803, 1) )
        {
          *((_QWORD *)&v11 + 1) = v803;
          v164 = sub_1223C0(*((__int64 **)v9 + 7), v803);
          v165 = v164;
          if ( v164 != -1 )
          {
            sub_6B2C0((__int64)v794, v164, *(double *)a7.m128i_i64);
            if ( v794[4].m128i_i32[3] != 2 )
            {
              sub_11CDA0(v795.m128i_i64[0]);
              v9[10] = v165;
              v104 = (__int64)(v9 + 16);
              *((_BYTE *)v9 + 32) = 7;
              goto LABEL_438;
            }
LABEL_540:
            *((_QWORD *)&v11 + 1) = v798;
            sub_159B40(
              (__int64)v9,
              (__int64)v798,
              (__int64)v794,
              (__int64)v793,
              (__int64)&v802,
              *(double *)a7.m128i_i64);
            sub_11D5A0((__int64)v9);
LABEL_32:
            v795.m128i_i8[0] = 1;
            goto LABEL_33;
          }
        }
LABEL_19:
        v15 = *v9;
        LODWORD(m128i_i64) = *v9;
LABEL_20:
        if ( v800 )
          goto LABEL_26;
LABEL_21:
        if ( v15 == 4 )
          goto LABEL_24;
        if ( v15 != 67 )
          goto LABEL_23;
        if ( v9[17] != v9[9] )
          goto LABEL_31;
        if ( *((_BYTE *)v9 + 32) == 4 )
        {
LABEL_156:
          v43 = *((_QWORD *)v9 + 5);
LABEL_157:
          if ( *(_DWORD *)v43 == 57 && (*(_BYTE *)(v43 + 4) & 0x40) != 0 )
          {
            *((_QWORD *)&v11 + 1) = v793;
            v795.m128i_i8[0] = sub_150860((__int64)v794, (__int64)v793, v43 + 48, *(double *)a7.m128i_i64, a8);
            if ( v795.m128i_i8[0] )
            {
              *((_QWORD *)&v11 + 1) = v793;
              sub_101030((__int64)v794, (unsigned __int64)v793, v43, *(double *)a7.m128i_i64);
              goto LABEL_33;
            }
            goto LABEL_160;
          }
        }
LABEL_25:
        LODWORD(m128i_i64) = v15;
LABEL_26:
        if ( (_DWORD)m128i_i64 == 54 )
          goto LABEL_122;
        if ( (unsigned int)m128i_i64 > 0x36 )
        {
          if ( (_DWORD)m128i_i64 != 57 )
            goto LABEL_31;
          goto LABEL_30;
        }
        if ( (_DWORD)m128i_i64 == 1 )
        {
LABEL_122:
          v18 = v9 + 16;
          v19 = (__int64)(v9 + 12);
          if ( *((_BYTE *)v9 + 64) != 4 )
            goto LABEL_31;
LABEL_123:
          v35 = *((_DWORD **)v18 + 1);
          if ( *v35 != 12 )
            goto LABEL_31;
          *((_QWORD *)&v11 + 1) = v35 + 8;
          v36 = (unsigned __int64 *)v798;
          if ( (unsigned __int8)sub_151FF0(
                                  (unsigned __int64 *)v798,
                                  (__int64)(v35 + 8),
                                  (__int64)v794,
                                  (__int64)v9,
                                  v19,
                                  (__int64)(v35 + 12),
                                  a7) )
            goto LABEL_32;
          v37 = *((_QWORD *)v18 + 1);
          *((_QWORD *)&v11 + 1) = v37 + 48;
          if ( (unsigned __int8)sub_151FF0(v36, v37 + 48, (__int64)v794, (__int64)v9, v19, v37 + 32, a7)
            || (unsigned __int8)sub_14E900(v9) )
          {
            goto LABEL_32;
          }
          goto LABEL_127;
        }
        if ( (_DWORD)m128i_i64 == 2 )
          goto LABEL_30;
LABEL_31:
        if ( (unsigned __int8)sub_14E900(v9) )
          goto LABEL_32;
LABEL_127:
        v38 = (unsigned __int64 *)v798;
        *((_QWORD *)&v11 + 1) = v794;
        if ( (unsigned __int8)sub_151150(
                                (__int64)v798,
                                (__int64)v794,
                                (__int64)v793,
                                (__int64)v9,
                                *(double *)a7.m128i_i64,
                                a8) )
          goto LABEL_32;
        *((_QWORD *)&v11 + 1) = v38;
        if ( (unsigned __int8)sub_1517D0((__int64)v9, (__int64)v38) )
          goto LABEL_32;
        v39 = *v9;
        if ( (v9[1] & 0x10) != 0 )
        {
          m128i_i64 = v39 - 65;
          if ( (unsigned int)m128i_i64 <= 1 || v39 == 2 )
            goto LABEL_132;
          if ( *((_BYTE *)v9 + 32) == 4 )
          {
            m128i_i64 = *((_QWORD *)v9 + 5);
            if ( *(_DWORD *)m128i_i64 == 2 )
            {
              *(_DWORD *)(m128i_i64 + 4) |= 0x10u;
              v39 = *v9;
            }
          }
          if ( *((_BYTE *)v9 + 48) == 4 )
          {
            m128i_i64 = *((_QWORD *)v9 + 7);
            if ( *(_DWORD *)m128i_i64 == 2 )
            {
              if ( v39 == 1 )
                goto LABEL_132;
              *(_DWORD *)(m128i_i64 + 4) |= 0x10u;
              v39 = *v9;
            }
          }
        }
        switch ( v39 )
        {
          case 0xAu:
            v136 = *((unsigned __int8 *)v9 + 32);
            if ( (unsigned __int8)v136 <= 0xDu )
            {
              v137 = 9232;
              if ( _bittest64(&v137, v136) )
                break;
            }
            if ( (unsigned __int8)sub_1272B0(
                                    (__int64)(v9 + 8),
                                    (unsigned __int64 *)v798,
                                    v9[17],
                                    0,
                                    *(double *)a7.m128i_i64) )
            {
              ++v801;
              *v9 = 4;
              break;
            }
            v138 = v9[17];
            if ( 2 * v138 != v9[9] )
              break;
            if ( (*((_BYTE *)v9 + 33) & 4) != 0 )
              goto LABEL_579;
            v139 = *((_BYTE *)v9 + 32);
            if ( v139 == 4 )
            {
              if ( sub_122600(*((unsigned int **)v9 + 5)) )
              {
                v138 = v9[17];
LABEL_579:
                if ( !sub_11CAD0(v138) )
                  break;
              }
              v139 = *((_BYTE *)v9 + 32);
            }
            if ( v139 != 15 && (v139 != 6 || (unsigned __int8)segtype() != 1) )
            {
              if ( !under_debugger )
                sub_383060(0xC548u, *(double *)a7.m128i_i64);
              goto LABEL_2165;
            }
            return result;
          case 0xBu:
            sub_123A40((__int64)v805, (unsigned __int8 *)v9 + 32, m128i_i64, a4);
            if ( !(unsigned __int8)sub_127850((__int64)v805, (unsigned __int64 *)v798, v9[17], 0, a7) )
              goto LABEL_570;
            if ( *((_BYTE *)v9 + 32) != 4 )
              goto LABEL_569;
            v346 = (unsigned __int64 *)v798;
            if ( !(unsigned __int8)sub_1205A0(*((_BYTE **)v9 + 5), (__int64)v798, 0) )
              goto LABEL_569;
            sub_123A40((__int64)&v806, (unsigned __int8 *)v9 + 32, v347, v348);
            if ( !(unsigned __int8)sub_1272B0((__int64)&v806, v346, v9[9] - v9[17], 0, *(double *)a7.m128i_i64)
              || (_BYTE)v806 == 4
              && (src[0] = nullptr,
                  v808 = (__int64)&off_4DDCD8,
                  *(_QWORD *)&v810 = *((_QWORD *)v798 + 12),
                  *((_QWORD *)&v810 + 1) = &v802,
                  src[1] = v794,
                  *(_OWORD *)&src[2] = (unsigned __int64)v793,
                  (unsigned int)sub_11F760(v807, &v808)) )
            {
              sub_11CDA0((__int64)&v806);
              sub_11CDA0((__int64)v805);
            }
            else
            {
              sub_11CDA0((__int64)&v806);
LABEL_569:
              sub_11CA10((char *)v9 + 32, (char *)v805);
              ++v801;
              *v9 = 4;
LABEL_570:
              sub_11CDA0((__int64)v805);
            }
            break;
          case 0xCu:
          case 0x14u:
          case 0x15u:
            goto LABEL_490;
          case 0xEu:
            if ( *((_BYTE *)v9 + 48) == 2 && *((_BYTE *)v9 + 32) != 2 )
              goto LABEL_493;
            break;
          case 0x13u:
            v119 = *((_BYTE *)v9 + 32);
            if ( v119 != 10 )
              goto LABEL_491;
            if ( **((_BYTE **)v9 + 5) == 5 && *((_BYTE *)v9 + 48) == 2 )
            {
              v135 = sub_32ABC0(*(_QWORD *)(*((_QWORD *)v9 + 7) + 16LL), v9[13], 0);
              if ( *((int *)v798 + 21) < v135 || (*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 5) + 8LL) + 8LL) & v135) != 0 )
              {
LABEL_490:
                v119 = *((_BYTE *)v9 + 32);
LABEL_491:
                if ( v119 == 2 && *((_BYTE *)v9 + 48) != 2 )
                {
LABEL_493:
                  sub_11CA10((char *)v9 + 32, (char *)v9 + 48);
                  ++v801;
                }
              }
              else
              {
                ++v801;
                *v9 = 12;
              }
            }
            break;
          default:
            break;
        }
LABEL_132:
        if ( (*((_BYTE *)v9 + 6) & 2) != 0 && v793 )
          *((_DWORD *)v793 + 1) |= 0x20000u;
        return v801;
      case 0x36u:
        if ( !v794 )
          goto LABEL_26;
        v104 = (__int64)(v9 + 16);
        v795.m128i_i64[0] = (__int64)(v9 + 8);
        if ( !(unsigned __int8)sub_13C7E0(
                                 (__int64)v794,
                                 (__int64)(v9 + 8),
                                 (int *)v9,
                                 (__int64)(v9 + 12),
                                 (__int64)(v9 + 16),
                                 0xFFFFFFFF,
                                 a7) )
          goto LABEL_429;
        if ( (unsigned __int8)(*((_BYTE *)v9 + 32) - 6) <= 1u )
          goto LABEL_438;
        sub_11CDA0((__int64)(v9 + 8));
LABEL_429:
        *((_QWORD *)&v11 + 1) = v793;
        if ( !(unsigned __int8)sub_150860((__int64)v794, (__int64)v793, (__int64)(v9 + 16), *(double *)a7.m128i_i64, a8) )
          goto LABEL_19;
        sub_330990((__int64)v794, (__int64)v9);
        *((_QWORD *)&v11 + 1) = 0;
        sub_66FA0(v794[4].m128i_i64[0], 0);
        goto LABEL_32;
      case 0x37u:
        if ( v9 != (unsigned int *)v793 || !v794 )
          goto LABEL_416;
        *((_QWORD *)&v11 + 1) = v794;
        if ( sub_A74F0((__int64)v9, (__int64)v794) )
          goto LABEL_540;
        v15 = *v9;
        goto LABEL_21;
      case 0x38u:
        if ( *((_BYTE *)v9 + 64) != 8 )
          goto LABEL_416;
        v114 = *((_QWORD *)v9 + 9);
        switch ( *(_DWORD *)(v114 + 284) )
        {
          case 2:
          case 5:
          case 0x22:
          case 0x23:
            goto LABEL_921;
          case 3:
          case 4:
            *((_QWORD *)&v11 + 1) = &v803;
            v294 = sub_11FD80((char *)(*(_QWORD *)(v114 + 24) + 80LL), (__int64 *)&v803, 0);
            v114 = *((_QWORD *)v9 + 9);
            if ( v294 )
            {
              if ( (_WORD)v803 == WORD1(v803) && BYTE1(v803) == (_BYTE)v803 )
              {
                v295 = *(_QWORD *)(v114 + 24);
                if ( *(_DWORD *)(v295 + 84) == 4 || (_DWORD)v803 == DWORD1(v803) )
                {
                  v296 = (unsigned __int64 *)v798;
                  sub_126240(
                    (char *)(v295 + 160),
                    (unsigned __int64 *)v798,
                    0xEu,
                    *((_QWORD *)v9 + 3),
                    *(int *)(v295 + 164),
                    *(_DWORD *)(v295 + 164),
                    a7);
                  sub_120A10(
                    *(_QWORD *)(*((_QWORD *)v9 + 9) + 24LL) + 80LL,
                    v296,
                    (unsigned __int8)v803,
                    1,
                    **(_QWORD **)(*(_QWORD *)(*((_QWORD *)v9 + 9) + 24LL) + 88LL),
                    0);
                  v808 = 34;
                  v797 = (__m128i *)&v808;
                  copy_tinfo_t();
                  clear_tinfo_t();
                  *((_QWORD *)&v11 + 1) = "memset";
                  *(_DWORD *)(*((_QWORD *)v9 + 9) + 284LL) = 2;
                  sub_11D4A0((__int64)(v9 + 8));
                  goto LABEL_32;
                }
              }
            }
LABEL_921:
            v269 = *(_QWORD *)(v114 + 24);
            if ( *(_BYTE *)(v269 + 160) != 2 )
              goto LABEL_922;
            if ( sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v269 + 168) + 16LL), *(_DWORD *)(v269 + 164), 0) )
            {
              *((_QWORD *)&v11 + 1) = *(_QWORD *)(v114 + 24);
            }
            else
            {
              v545 = v9[17];
              if ( !v545 )
                goto LABEL_538;
              *((_QWORD *)&v11 + 1) = *(_QWORD *)(v114 + 24);
              if ( v545 == *(_DWORD *)(*((_QWORD *)&v11 + 1) + 4LL) )
              {
                v20 = (char *)(v9 + 12);
                sub_11CA10((char *)v9 + 32, *((char **)&v11 + 1));
                v546 = v9[17];
                sub_11CDA0((__int64)(v9 + 16));
                v9[17] = v546;
                goto LABEL_349;
              }
            }
            if ( **((_BYTE **)&v11 + 1) == 10 && v794 )
            {
              *((_QWORD *)&v11 + 1) = v794;
              sub_F2CA0(v114, (__int64)v794, v433, v434, *(double *)a7.m128i_i64, a8);
              *(_DWORD *)(v114 + 280) |= 0x20u;
            }
LABEL_922:
            if ( *(_DWORD *)(v114 + 284) == 5 )
            {
              *((_QWORD *)&v11 + 1) = v794;
              if ( (unsigned __int8)sub_15AA20((__int64)v798, v794, (__int64)v793, (__int64)v9, a7, a8) )
                goto LABEL_32;
            }
            goto LABEL_19;
          case 6:
            *((_QWORD *)&v11 + 1) = v794;
            if ( (unsigned __int8)sub_15AC80((__int64)v798, v794, (__int64)v793, (__int64)v9, a7, a8) )
              goto LABEL_32;
            goto LABEL_19;
          case 7:
          case 0x25:
            if ( !v794 )
              goto LABEL_26;
            *((_QWORD *)&v11 + 1) = v794;
            sub_F2CA0(*((_QWORD *)v9 + 9), (__int64)v794, (__m128i *)m128i_i64, a4, *(double *)a7.m128i_i64, a8);
            goto LABEL_212;
          case 9:
            *((_QWORD *)&v11 + 1) = v794;
            if ( !v794 )
              goto LABEL_26;
            v289 = *(unsigned __int8 **)(v114 + 24);
            if ( !(unsigned __int8)sub_155C40(
                                     (__int64)v798,
                                     (__int64)v794,
                                     v793,
                                     (__int64)v289,
                                     *(double *)a7.m128i_i64) )
              goto LABEL_212;
            v292 = (_QWORD *)j__qalloc_or_throw(80, (__int64)v794, v290, v291);
            sub_1510E0(v292, *((_QWORD *)v9 + 3));
            sub_11D890((__int64)v292, (__int64)v9);
            sub_11D4A0((__int64)(v292 + 4));
            copy_tinfo_t();
            *((_QWORD *)&v11 + 1) = v289;
            *(_DWORD *)(v292[9] + 284LL) = 7;
            *v9 = 12;
            sub_125180((unsigned __int8 *)v9 + 32, v289);
            v293 = v9[9];
            *((_BYTE *)v9 + 48) = 4;
            *((_QWORD *)v9 + 7) = v292;
            v9[13] = v293;
            v9[17] = v293;
            goto LABEL_32;
          case 0xB:
            *((_QWORD *)&v11 + 1) = *(_QWORD *)(v114 + 24);
            if ( (unsigned __int8)sub_14ED80((__int64)v798, *((__int64 *)&v11 + 1)) )
              goto LABEL_32;
            goto LABEL_19;
          case 0xD:
            v311 = sub_BE0A0((_QWORD *)(v114 + 24), *(double *)a7.m128i_i64);
            goto LABEL_1009;
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
            *((_QWORD *)&v11 + 1) = v793;
            if ( (unsigned __int8)sub_167020((__int64)v794, (__int64)v793, (__int64)v9) )
              goto LABEL_32;
            v279 = *((_QWORD *)v9 + 9);
            if ( (*(_BYTE *)(v279 + 280) & 0x40) != 0 )
              goto LABEL_19;
            a7 = 0;
            *(_QWORD *)&v11 = *((_QWORD *)v9 + 9);
            *((_QWORD *)&v11 + 1) = &v808;
            v808 = 0;
            memset(src, 0, sizeof(src));
            v797 = (__m128i *)&v808;
            if ( (unsigned __int8)sub_32FB50(v11, &v808, (__int64)v794, 1) )
            {
              *((_QWORD *)&v11 + 1) = &src[1];
              if ( (unsigned int)sub_316F80((__int64 *)(v279 + 216), &src[1]) )
              {
                *((_QWORD *)&v11 + 1) = &src[1];
                sub_14E660((__int64 *)(v279 + 216), (__int64)&src[1], v280, v281);
                if ( *((_BYTE *)v9 + 64) != 8 || *(_DWORD *)(*((_QWORD *)v9 + 9) + 284LL) != 19 )
                {
                  *((_QWORD *)&v11 + 1) = v797;
                  sub_648D0((__int64 *)(v279 + 136), (const void **)v797, 0.0);
                  v699 = (unsigned __int64)src[2];
                  v700 = nullptr;
                  if ( src[2] )
                  {
                    v702 = (void *)qalloc_or_throw(16 * (__int64)src[2], *((__int64 *)&v11 + 1), v697, v698);
                    *((void **)&v11 + 1) = src[1];
                    v700 = v702;
                    memcpy(v702, src[1], 16 * v699);
                  }
                  v701 = *(_QWORD *)(v279 + 152);
                  a7 = _mm_unpacklo_epi64((__m128i)v699, (__m128i)v699);
                  if ( v701 )
                  {
                    v795 = a7;
                    *(_QWORD *)(v279 + 160) = 0;
                    qfree(v701);
                    a7 = _mm_load_si128(&v795);
                  }
                  *(_QWORD *)(v279 + 152) = v700;
                  *(__m128i *)(v279 + 160) = a7;
                }
                *(_DWORD *)(v279 + 280) |= 0x40u;
                sub_93B40(v797->m128i_i64);
                goto LABEL_32;
              }
            }
            if ( src[1] )
            {
              src[2] = nullptr;
              qfree((__int64)src[1]);
            }
            qfree(v808);
            v15 = *v9;
            LODWORD(m128i_i64) = *v9;
            goto LABEL_20;
          case 0x1B:
          case 0x1C:
            *((_QWORD *)&v11 + 1) = &v808;
            if ( !(unsigned __int8)sub_11FD80((char *)(*(_QWORD *)(v114 + 24) + 80LL), &v808, 0) || v808 )
              goto LABEL_19;
            *((_QWORD *)&v11 + 1) = *(_QWORD *)(*((_QWORD *)v9 + 9) + 24LL);
            sub_11CA10((char *)v9 + 32, *((char **)&v11 + 1));
            v303 = v9[17];
            sub_11CDA0((__int64)(v9 + 16));
            v9[17] = v303;
            if ( v303 )
              goto LABEL_262;
            goto LABEL_538;
          case 0x1F:
            if ( !v794 )
              goto LABEL_26;
            v306 = *(_QWORD *)(v114 + 24);
            if ( *(_BYTE *)v306 != 4 )
              goto LABEL_416;
            v307 = *(_DWORD **)(v306 + 8);
            if ( *v307 != 8 )
              goto LABEL_416;
            v308 = v307[9];
            v309 = *(_DWORD *)(v306 + 4);
            *v9 = 9;
            *((_QWORD *)&v11 + 1) = *(_QWORD *)(v306 + 8) + 32LL;
            v310 = sub_153040(v794[4].m128i_i64[0], *((__int64 *)&v11 + 1), *((_QWORD *)v9 + 3));
            sub_11CDA0((__int64)(v9 + 8));
            *((_QWORD *)v9 + 5) = v310;
            *((_BYTE *)v9 + 32) = 4;
            v9[9] = v308;
            sub_11CDA0((__int64)(v9 + 16));
            v9[17] = v309;
            goto LABEL_32;
          default:
            *((_QWORD *)&v11 + 1) = v798;
            if ( (unsigned __int8)sub_1554C0(*((_QWORD *)v9 + 9), (__int64)v798, *(double *)a7.m128i_i64) )
              goto LABEL_32;
            *((_QWORD *)&v11 + 1) = v9 + 8;
            if ( (unsigned __int8)sub_155710(*((_QWORD *)v9 + 9), (_BYTE *)v9 + 32) )
              goto LABEL_32;
            if ( !v794 )
              goto LABEL_160;
            *((_QWORD *)&v11 + 1) = *((_QWORD *)v9 + 9);
            if ( (unsigned __int8)sub_155550((__int64)v798, *((__int64 *)&v11 + 1), (__int64)v794, (int *)v9, a7) )
              goto LABEL_32;
            goto LABEL_19;
        }
      case 0x39u:
        if ( !v793 || v799 )
        {
          if ( !v800 )
          {
LABEL_23:
            if ( (unsigned int)(v15 - 8) <= 2 )
              goto LABEL_24;
LABEL_162:
            v43 = (__int64)v9;
            goto LABEL_157;
          }
LABEL_30:
          v18 = v9 + 12;
          v19 = (__int64)v792;
          if ( *((_BYTE *)v9 + 48) != 4 )
            goto LABEL_31;
          goto LABEL_123;
        }
        v102 = *((_BYTE *)v9 + 48);
        if ( v102 == 10 )
        {
          *((_QWORD *)&v11 + 1) = *((_QWORD *)v9 + 7);
          if ( **((_BYTE **)&v11 + 1) == 6 )
          {
            sub_125180((unsigned __int8 *)v9 + 32, *((unsigned __int8 **)&v11 + 1));
            if ( a6 )
            {
              *((_QWORD *)&v11 + 1) = a6;
              v317 = *((__m128 **)v9 + 3);
              if ( *a6 == (__m128 *)-1LL )
              {
                *a6 = v317;
                v20 = (char *)(v9 + 12);
                goto LABEL_756;
              }
              if ( *a6 != v317 )
                goto LABEL_408;
            }
            v20 = (char *)(v9 + 12);
LABEL_756:
            *v9 = 56;
            goto LABEL_350;
          }
        }
        else if ( !v102 )
        {
LABEL_404:
          *((_QWORD *)&v11 + 1) = v798;
          v103 = *((_BYTE *)v9 + 5) >> 7;
          if ( (unsigned __int8)sub_11C750((int *)v9, (__int64)v798, 0) == v103 )
          {
            if ( *((_BYTE *)v9 + 64) == 8 )
            {
              v334 = (unsigned __int64 *)v798;
              *((_QWORD *)&v11 + 1) = v798;
              if ( (unsigned __int8)sub_1554C0(*((_QWORD *)v9 + 9), (__int64)v798, *(double *)a7.m128i_i64) )
                goto LABEL_32;
              *((_QWORD *)&v11 + 1) = *((_QWORD *)v9 + 9);
              if ( (unsigned __int8)sub_155550((__int64)v334, *((__int64 *)&v11 + 1), (__int64)v794, (int *)v9, a7) )
                goto LABEL_32;
            }
            goto LABEL_19;
          }
          if ( !a6 )
            goto LABEL_19;
          m128i_i64 = *((_QWORD *)v9 + 3);
          if ( *a6 != (__m128 *)-1LL )
          {
            if ( (__m128 *)m128i_i64 != *a6 )
              goto LABEL_408;
            goto LABEL_19;
          }
          *a6 = (__m128 *)m128i_i64;
          v15 = *v9;
          LODWORD(m128i_i64) = *v9;
          goto LABEL_20;
        }
        v20 = (char *)(v9 + 12);
        *((_QWORD *)&v11 + 1) = v9 + 8;
        if ( !(unsigned __int8)sub_13C7E0(
                                 (__int64)v794,
                                 (__int64)(v9 + 8),
                                 (int *)v9,
                                 (__int64)(v9 + 8),
                                 (__int64)(v9 + 12),
                                 0xFFFFFFFF,
                                 a7) )
          goto LABEL_404;
        if ( a6 )
        {
          v207 = *((__m128 **)v9 + 3);
          if ( *a6 == (__m128 *)-1LL )
          {
            *a6 = v207;
          }
          else if ( v207 != *a6 )
          {
            goto LABEL_408;
          }
        }
        goto LABEL_756;
      case 0x3Fu:
      case 0x40u:
      case 0x44u:
        v795.m128i_i64[0] = (__int64)(v9 + 8);
        goto LABEL_52;
      case 0x41u:
      case 0x42u:
        if ( *((_BYTE *)v9 + 32) != 4 )
          goto LABEL_20;
        v44 = *((_DWORD **)v9 + 5);
        if ( *v44 != 2 )
          goto LABEL_20;
        v45 = v44[1];
        if ( (v45 & 0x10) == 0 )
          goto LABEL_20;
        a4 = v45 & 0xFFFFFFEF;
        v44[1] = a4;
        goto LABEL_32;
      case 0x43u:
        v795.m128i_i64[0] = (__int64)(v9 + 8);
        if ( sub_125B60((unsigned __int8 *)v9 + 32, (__int64)(v9 + 16), 0, *(double *)a7.m128i_i64) )
          goto LABEL_538;
        v111 = *((_BYTE *)v9 + 32);
        v112 = v9[17];
        v113 = v9[9];
        if ( v111 == 4 )
        {
          v61 = *((_QWORD *)v9 + 5);
          if ( *(_DWORD *)v61 == 67 )
          {
            v188 = *(_DWORD *)(v61 + 36);
            if ( v112 <= v188 )
              v188 = v9[17];
            if ( v188 <= v113 )
              goto LABEL_844;
          }
        }
        if ( v113 == v112 )
        {
          *((_QWORD *)&v11 + 1) = *((_QWORD *)v9 + 5);
          if ( !sub_14E700(v111, *((__int64 *)&v11 + 1)) )
          {
            *v9 = 4;
            goto LABEL_32;
          }
        }
LABEL_52:
        *((_QWORD *)&v11 + 1) = v798;
        if ( (unsigned __int8)sub_1552F0(v795.m128i_i64[0], (__int64)v798, *(double *)a7.m128i_i64) )
          goto LABEL_32;
        v15 = *v9;
        LODWORD(m128i_i64) = *v9;
        goto LABEL_20;
      case 0x45u:
        if ( *((_BYTE *)v9 + 32) == 13 && *((_BYTE *)v9 + 48) != 13 )
          goto LABEL_184;
        if ( v793 && (unsigned __int8)sub_152760((unsigned __int64 *)v798, (__int64)v794, (__int64)v793, v9, a7) )
          goto LABEL_843;
        v99 = sub_11C8E0((__int64)v9, &v804, 65);
        if ( v99 )
        {
          if ( *(_BYTE *)(v99 + 32) == 4 && *v804 == 13 )
          {
            v270 = *(_DWORD **)(v99 + 40);
            v271 = sub_11C8A0((__int64)v270, &v806);
            if ( v271 )
            {
              if ( (unsigned int)(*v270 - 12) <= 1 && (unsigned int)eetol64u() == 1 )
              {
                v272 = 8 * *(_DWORD *)(v271 + 4) - 1;
                v273 = nullptr;
                if ( (unsigned __int64)v272 <= 0x3F )
                  v273 = (unsigned __int8 *)(1LL << v272);
                if ( v805[0] == v273 && sub_14E190(*((_QWORD *)v798 + 12), (__int64)v794, v9) )
                {
                  v274 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v271 + 8) + 16LL), *(_DWORD *)(v271 + 4), 0);
                  v805[0] -= v274;
                  if ( v805[0] )
                  {
                    v277 = v806[1];
                    v278 = j__qalloc_or_throw(80, (__int64)v806, v275, v276);
                    sub_1510E0((_QWORD *)v278, *((_QWORD *)v9 + 3));
                    *(_DWORD *)v278 = 12;
                    sub_11CA10((char *)(v278 + 32), (char *)v806);
                    *((_QWORD *)&v11 + 1) = v798;
                    sub_120A10(v278 + 48, (unsigned __int64 *)v798, (__int64)v805[0], v277, *((_QWORD *)v9 + 3), 0);
                    *(_DWORD *)(v278 + 68) = v277;
                    sub_11CDA0((__int64)(v9 + 8));
                    *((_BYTE *)v9 + 32) = 4;
                    *((_QWORD *)v9 + 5) = v278;
                    v9[9] = v277;
                  }
                  else
                  {
                    v797 = (__m128i *)&v808;
                    sub_123A40((__int64)&v808, (unsigned __int8 *)v806, v275, v276);
                    *((_QWORD *)&v11 + 1) = &v808;
                    sub_125180((unsigned __int8 *)v9 + 32, (unsigned __int8 *)&v808);
                    sub_11CDA0((__int64)&v808);
                  }
                  *v9 = 66;
                  goto LABEL_386;
                }
              }
            }
          }
        }
        v100 = sub_11C8E0((__int64)v9, &v806, 68);
        if ( !v100 )
          goto LABEL_16;
        src[0] = nullptr;
        v808 = 0xFFFFFFFF00000000LL;
        v797 = (__m128i *)&v808;
        sub_11CA10((char *)&v808, (char *)(v100 + 32));
        v795.m128i_i64[0] = (__int64)(v9 + 8);
        if ( v9 + 8 != v806 )
          sub_11CA10((char *)v795.m128i_i64[0], (char *)v9 + 48);
        v101 = (__int64 *)v797;
        *((_QWORD *)&v11 + 1) = v797;
        sub_11CA10((char *)v9 + 48, v797->m128i_i8);
        *v9 = 70;
        sub_11CDA0((__int64)v101);
        goto LABEL_32;
      case 0x46u:
        if ( v793 )
        {
          *((_QWORD *)&v11 + 1) = v793;
          if ( (unsigned __int8)sub_156070(v794, v793, (__int64)v9, a7, a8) )
            goto LABEL_386;
        }
        goto LABEL_16;
      case 0x47u:
      case 0x48u:
        goto LABEL_16;
      default:
        if ( !under_debugger )
          sub_383060(0xC547u, *(double *)a7.m128i_i64);
        goto LABEL_2165;
    }
  }
}

