__int64 __fastcall sub_47560(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  __int64 v8; // rax
  __int64 v9; // r13
  size_t v10; // rax
  void *v11; // r14
  size_t v12; // rbp
  _BYTE **v13; // r13
  _BYTE *v14; // rsi
  void *v15; // r14
  const char *v16; // r12
  __int64 v17; // rbp
  __int64 result; // rax
  unsigned int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // r8
  __int64 v23; // rsi
  __int64 v24; // r9
  _QWORD *v25; // rdx
  unsigned int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rdi
  _WORD *v29; // rbp
  __int64 v30; // rsi
  void **v31; // r12
  __int64 *v32; // rdx
  char v33; // dl
  unsigned int v34; // edx
  __int64 *v35; // rcx
  unsigned int v36; // edx
  unsigned int v37; // edx
  _QWORD *v38; // rcx
  unsigned int v39; // edx
  _QWORD *v40; // rcx
  unsigned int v41; // ecx
  __int64 v42; // rdx
  __int64 v43; // rdi
  _DWORD *v44; // r8
  __int64 v45; // rsi
  __int64 v46; // rdi
  _DWORD *v47; // rdx
  unsigned int v48; // ecx
  __int64 v49; // rdx
  __int64 v50; // rdi
  __int64 *v51; // r8
  __int64 v52; // rsi
  __int64 v53; // rdi
  _DWORD *v54; // rdx
  unsigned int v55; // ecx
  __int64 v56; // rdx
  __int64 v57; // rdi
  __int64 v58; // r8
  __int64 v59; // rsi
  __int64 v60; // rdi
  _QWORD *v61; // rdx
  unsigned int v62; // edx
  __int64 *v63; // rcx
  __int64 v64; // rbp
  unsigned __int64 v65; // r12
  unsigned __int64 v66; // r12
  unsigned int v67; // ecx
  __int64 v68; // rdx
  __int64 v69; // rsi
  __int64 v70; // r8
  _QWORD *v71; // rdx
  unsigned int v72; // ecx
  __int64 v73; // rdx
  __int64 v74; // rsi
  __int64 v75; // rdi
  _QWORD *v76; // rdx
  unsigned int v77; // ecx
  __int64 v78; // rdx
  __int64 v79; // rsi
  _DWORD *v80; // r8
  __int64 *v81; // rdx
  unsigned int v82; // ecx
  __int64 v83; // rdx
  __int64 v84; // rsi
  __int64 *v85; // r9
  __int64 v86; // rdi
  unsigned int v87; // r10d
  __int64 v88; // rsi
  __int64 (__fastcall *v89)(const char *, __int64, double); // rdi
  __int64 *v90; // rdx
  unsigned int v91; // ecx
  __int64 v92; // rdx
  __int64 v93; // rdi
  __int64 *v94; // r8
  __int64 v95; // rsi
  __int64 v96; // rdi
  _DWORD *v97; // rdx
  unsigned int v98; // ecx
  __int64 v99; // rdx
  __int64 v100; // rsi
  __int64 *v101; // rbx
  __int64 *v102; // rdx
  unsigned int v103; // ecx
  __int64 v104; // rdx
  __int64 v105; // rdi
  unsigned __int64 *v106; // rbp
  __int64 v107; // rsi
  __int64 v108; // r9
  __int64 v109; // rdi
  unsigned int v110; // r10d
  __int64 v111; // rsi
  __int64 (__fastcall *v112)(char *, __int64); // rdi
  __int64 *v113; // rdx
  unsigned int v114; // ecx
  __int64 v115; // rdx
  __int64 v116; // rdi
  _QWORD *v117; // r8
  __int64 v118; // rsi
  _WORD *v119; // rdi
  char **v120; // rdx
  unsigned int v121; // ecx
  __int64 v122; // rdx
  __int64 v123; // rsi
  _DWORD *v124; // rbx
  _BYTE **v125; // rdx
  unsigned int v126; // ecx
  __int64 v127; // rdx
  __int64 v128; // rsi
  __int64 v129; // r10
  __int64 v130; // rdi
  __int64 v131; // r11
  __int64 v132; // rsi
  unsigned int v133; // ebp
  __int64 v134; // rdi
  __int64 v135; // r8
  __int64 v136; // rsi
  __int64 v137; // r9
  __int64 *v138; // rdx
  unsigned int v139; // ecx
  __int64 v140; // rdx
  __int64 v141; // rsi
  __int64 *v142; // rbx
  __int64 *v143; // rdx
  unsigned int v144; // ecx
  unsigned int v145; // ecx
  unsigned int v146; // ecx
  __int64 v147; // rdx
  __int64 v148; // rsi
  _DWORD *v149; // rbx
  _QWORD *v150; // rdx
  unsigned int v151; // ecx
  __int64 v152; // rdx
  __int64 v153; // rsi
  __int64 v154; // r9
  __int64 v155; // rdi
  __int64 v156; // rsi
  int *v157; // rdx
  __int64 v158; // rax
  unsigned int v159; // ecx
  __int64 v160; // rdx
  __int64 v161; // rdi
  __int64 *v162; // r8
  __int64 v163; // rsi
  _QWORD *v164; // rdi
  __int64 *v165; // rdx
  unsigned int v166; // ecx
  __int64 v167; // rdx
  __int64 v168; // rdi
  unsigned int v169; // edx
  __int64 *v170; // rcx
  unsigned int v171; // edx
  __int64 *v172; // rcx
  unsigned int v173; // ecx
  __int64 v174; // rdx
  __int64 v175; // rdi
  const char *v176; // r9
  __int64 v177; // rsi
  int v178; // r10d
  __int64 v179; // rdi
  _QWORD *v180; // r11
  __int64 v181; // rsi
  __int64 *v182; // rbp
  _DWORD *v183; // rdx
  __int64 v184; // rax
  unsigned int v185; // edx
  __int64 *v186; // rcx
  unsigned int v187; // edx
  __int64 v188; // rcx
  __int16 v189; // ax
  unsigned int v190; // ecx
  __int64 v191; // rdx
  __int64 v192; // rsi
  __int64 v193; // rbp
  const char **v194; // rdx
  const char *v195; // r12
  unsigned int v196; // ecx
  __int64 v197; // rdx
  __int64 v198; // rsi
  __int64 v199; // r12
  _DWORD *v200; // rdx
  char v201; // bp
  unsigned int v202; // edx
  __int64 v203; // rcx
  __int64 v204; // rsi
  __int64 v205; // rbx
  __int64 v206; // rdi
  __int64 v207; // r8
  __int64 v208; // rsi
  __int64 v209; // rbp
  __int64 *v210; // rcx
  __int64 v211; // r12
  unsigned int v212; // ecx
  __int64 v213; // rdx
  __int64 v214; // rsi
  _WORD *v215; // rdi
  __int64 *v216; // rdx
  unsigned int v217; // ecx
  __int64 v218; // rdx
  __int64 v219; // rsi
  int *v220; // rdi
  _DWORD **v221; // rdx
  _WORD *v222; // rax
  __int16 v223; // dx
  int v224; // edx
  unsigned int v225; // ecx
  __int64 v226; // rdx
  __int64 v227; // rsi
  __int64 v228; // r11
  __int64 v229; // rdi
  int v230; // esi
  __int64 v231; // r9
  __int64 v232; // r8
  __int64 v233; // rdi
  unsigned int *v234; // r9
  __int64 v235; // r10
  int v236; // edi
  __int64 **v237; // rdx
  unsigned int v238; // edx
  const char **v239; // rcx
  const char *v240; // rbp
  unsigned int v241; // edx
  __int64 v242; // rbp
  __int64 v243; // rdx
  __int64 v244; // rcx
  __int64 v245; // r8
  __int64 v246; // r9
  __int64 v247; // rdx
  __int64 v248; // rcx
  __int64 v249; // r8
  __int64 v250; // r9
  unsigned __int8 *v251; // r15
  __int64 v252; // r14
  char *v253; // r13
  char *v254; // r8
  unsigned __int64 v255; // r10
  __int64 v256; // r11
  __int64 v257; // rsi
  __int64 v258; // rax
  __int64 v259; // r8
  __int64 v260; // r11
  __int64 v261; // rdx
  __int64 v262; // rcx
  _QWORD *v263; // r10
  __int64 v264; // rax
  char *v265; // rdi
  unsigned __int64 v266; // rbp
  void *v267; // r14
  void *v268; // r13
  __int64 *v269; // r12
  __int64 v270; // rdi
  __int64 v271; // rdi
  __int64 v272; // rdi
  unsigned int v273; // ecx
  __int64 v274; // rdx
  __int64 v275; // rsi
  __int64 v276; // rdi
  __int64 **v277; // rdx
  unsigned int v278; // edx
  __int64 *v279; // rcx
  unsigned int v280; // ecx
  __int64 v281; // rdx
  __int64 v282; // rsi
  __int64 v283; // rdi
  __int64 *v284; // rdx
  unsigned int v285; // edx
  _QWORD *v286; // rcx
  unsigned int v287; // ecx
  __int64 v288; // rdx
  __int64 v289; // rsi
  int v290; // ebp
  __int64 v291; // rcx
  int *v292; // rdx
  int v293; // r12d
  void *v294; // rax
  unsigned int v295; // edx
  __int64 v296; // rcx
  __int64 v297; // rdi
  __int64 v298; // r8
  __int64 v299; // rsi
  __int64 v300; // r9
  __int64 **v301; // rcx
  __int64 v302; // rdi
  int v303; // r12d
  __int64 *v304; // rax
  __int64 v305; // r14
  __int64 item_end; // rbx
  unsigned int v307; // ecx
  __int64 v308; // rdx
  __int64 v309; // rsi
  __int64 v310; // rbp
  __int64 v311; // rdi
  __int64 v312; // r12
  __int64 v313; // rsi
  bool v314; // r13
  _QWORD **v315; // rdx
  _QWORD *v316; // r14
  unsigned int v317; // ecx
  unsigned int v318; // ecx
  unsigned int v319; // ecx
  __int64 v320; // rdx
  __int64 v321; // rsi
  __int64 *v322; // rdi
  __int64 *v323; // rdx
  unsigned int v324; // edx
  __int64 *v325; // rcx
  _QWORD *func; // rax
  __int64 v327; // rcx
  __int64 v328; // r8
  __int64 v329; // r9
  unsigned int v330; // edx
  __int64 *v331; // rcx
  __int64 v332; // rdx
  __int64 v333; // rcx
  __int64 v334; // r8
  __int64 v335; // r9
  __int64 v336; // rdx
  __int64 v337; // rcx
  __int64 v338; // r8
  __int64 v339; // r9
  unsigned int v340; // edx
  _QWORD *v341; // rcx
  unsigned int v342; // ecx
  __int64 v343; // rdx
  __int64 v344; // rdi
  __int64 *v345; // r8
  __int64 v346; // rsi
  unsigned __int64 *v347; // rdi
  __int64 **v348; // rdx
  unsigned int v349; // edx
  __int64 *v350; // rcx
  unsigned int v351; // edx
  _QWORD **v352; // rcx
  unsigned int v353; // edx
  unsigned __int16 **v354; // rcx
  __m128i v355; // xmm1
  __int64 v356; // rdx
  __int64 v357; // rcx
  __int64 v358; // r8
  __int64 v359; // r9
  __int64 v360; // rdx
  __int64 v361; // rcx
  __int64 v362; // r8
  __int64 v363; // r9
  __m128i v364; // xmm6
  __int64 v365; // r8
  __int64 v366; // r9
  __int64 v367; // rdx
  __int64 v368; // rcx
  __int64 v369; // r8
  __int64 v370; // r9
  unsigned int v371; // edx
  _QWORD **v372; // rcx
  unsigned int v373; // edx
  __int64 v374; // rcx
  __int64 v375; // rdx
  char **v376; // rcx
  char *v377; // rbx
  char v378; // al
  char v379; // cl
  unsigned int v380; // edx
  __int64 *v381; // rcx
  unsigned int v382; // ecx
  __int64 v383; // rdx
  __int64 v384; // rdi
  _DWORD *v385; // rbp
  __int64 v386; // rsi
  __int64 v387; // rdi
  __int64 *v388; // rdx
  unsigned int v389; // edx
  __int64 **v390; // rcx
  __int64 *v391; // r12
  __int64 v392; // r13
  __int64 sreg; // rbp
  unsigned int v394; // edx
  __int64 *v395; // rcx
  __int64 v396; // r13
  __int64 flags; // r12
  unsigned int v398; // ecx
  __int64 v399; // rdx
  __int64 v400; // rsi
  __int64 *v401; // r8
  __int64 v402; // rdi
  unsigned int v403; // r9d
  __int64 v404; // rsi
  unsigned __int64 v405; // rdi
  unsigned int *v406; // rdx
  unsigned int v407; // edx
  __int64 *v408; // rcx
  unsigned int v409; // edx
  __int64 *v410; // rcx
  unsigned int v411; // ecx
  __int64 v412; // rdx
  __int64 v413; // rsi
  __int64 v414; // r8
  __int64 v415; // rdi
  __int64 v416; // r9
  __int64 v417; // rsi
  __int64 v418; // rdi
  _QWORD *v419; // rdx
  unsigned int v420; // edx
  __int64 **v421; // rcx
  unsigned int v422; // ecx
  __int64 v423; // rdx
  __int64 v424; // rsi
  _QWORD *v425; // rdi
  unsigned __int8 *v426; // rdx
  unsigned int v427; // edx
  __int64 v428; // rcx
  unsigned __int64 v429; // rax
  __int64 v430; // rdx
  unsigned int v431; // ecx
  __int64 v432; // rdx
  __int64 v433; // rsi
  __int64 v434; // rdi
  _QWORD *v435; // rdx
  unsigned int v436; // edx
  __int64 *v437; // rcx
  unsigned int v438; // edx
  __int64 *v439; // rcx
  __int64 v440; // rdx
  unsigned int v441; // ecx
  __int64 v442; // rdx
  unsigned __int64 v443; // rbx
  unsigned int v444; // edx
  __int64 v445; // rcx
  __int64 v446; // rsi
  _QWORD *v447; // rcx
  unsigned int v448; // ecx
  __int64 v449; // rdx
  __int64 v450; // rsi
  _DWORD *v451; // rdi
  __int64 *v452; // rdx
  unsigned int v453; // ecx
  __int64 v454; // rdx
  __int64 v455; // rdi
  __int64 v456; // rsi
  __int64 *v457; // rdx
  __int64 v458; // rdx
  unsigned int v459; // esi
  __int64 v460; // rcx
  __int64 v461; // rdx
  __int64 v462; // r8
  __int64 v463; // rdi
  _BYTE *v464; // rdx
  unsigned int *v465; // rcx
  __int64 v466; // rcx
  unsigned int v467; // ecx
  __int64 v468; // rdx
  __int64 v469; // rsi
  __int64 v470; // rdi
  __int64 v471; // r8
  __int64 v472; // rsi
  unsigned int *v473; // rdx
  unsigned int v474; // edx
  __int64 *v475; // rcx
  __int64 v476; // rbp
  char v477; // dl
  unsigned int v478; // eax
  unsigned int v479; // ecx
  __int64 v480; // rdx
  __int64 v481; // rdi
  __int64 v482; // r8
  __int64 v483; // rsi
  __int64 v484; // rdi
  _DWORD *v485; // rdx
  unsigned int v486; // ecx
  __int64 v487; // rdx
  __int64 v488; // rsi
  __int64 v489; // rbx
  __int64 v490; // rcx
  int *v491; // rdx
  int v492; // eax
  unsigned int v493; // ecx
  __int64 v494; // rdx
  __int64 v495; // rsi
  __int64 v496; // r9
  __int64 v497; // rdi
  __int64 v498; // r10
  __int64 v499; // rsi
  __int64 v500; // rdi
  _DWORD *v501; // rdx
  unsigned int v502; // ecx
  __int64 v503; // rdx
  __int64 v504; // rdi
  __int64 *v505; // r8
  __int64 v506; // rsi
  __int64 *v507; // rdi
  unsigned __int8 *v508; // rdx
  unsigned int v509; // ecx
  __int64 v510; // rdx
  __int64 v511; // rdi
  __int64 v512; // r8
  __int64 v513; // rsi
  __int64 v514; // rdi
  _QWORD *v515; // rdx
  unsigned int v516; // ecx
  __int64 v517; // rdx
  __int64 v518; // rdi
  _DWORD *v519; // rbp
  __int64 v520; // rsi
  __int64 v521; // rdi
  _QWORD *v522; // rdx
  unsigned int v523; // ecx
  __int64 v524; // rdx
  __int64 v525; // rsi
  __int64 v526; // rbp
  _QWORD *v527; // rdx
  __int64 v528; // r12
  char v529; // dl
  unsigned int v530; // eax
  unsigned int v531; // ecx
  __int64 v532; // rdx
  __int64 v533; // rsi
  __int64 v534; // rdi
  unsigned int *v535; // rdx
  __int64 v536; // rdx
  bool v537; // zf
  unsigned int v538; // edx
  _QWORD *v539; // rcx
  __int64 **v540; // rcx
  __int64 *v541; // rcx
  __int64 *v542; // rdx
  __int64 *v543; // rcx
  _QWORD **v544; // rdx
  _WORD **v545; // rcx
  __int64 *v546; // rcx
  __int64 *v547; // rdx
  unsigned int *v548; // rcx
  unsigned int *v549; // rdx
  __int64 *v550; // rcx
  __int64 *v551; // rcx
  _DWORD *v552; // rdx
  __int64 *v553; // rcx
  unsigned int **v554; // rdx
  _DWORD *v555; // rcx
  __int64 *v556; // rcx
  __int64 *v557; // rdx
  _DWORD *v558; // rcx
  __int64 *v559; // rcx
  _QWORD *v560; // rdx
  __int64 v561; // rdx
  __int64 *v562; // rdx
  __int64 *v563; // rcx
  _QWORD *v564; // rdx
  _QWORD *v565; // rcx
  __int64 **v566; // rcx
  _DWORD *v567; // rdx
  __int64 (__fastcall **v568)(const char *, __int64, double); // rcx
  _QWORD *v569; // rcx
  __int64 *v570; // rcx
  __int64 *v571; // rcx
  __int64 *v572; // rcx
  __int64 *v573; // rdx
  __int64 *v574; // rdx
  _QWORD *v575; // rcx
  __int64 v576; // rcx
  __int64 v577; // rdx
  int **v578; // rcx
  const char **v579; // rcx
  const char **v580; // rdx
  _WORD **v581; // rcx
  __int64 **v582; // rdx
  _QWORD **v583; // rcx
  _QWORD *v584; // rdx
  _QWORD *v585; // rcx
  _BYTE **v586; // rdx
  __int64 *v587; // rcx
  __int64 *v588; // rdx
  _QWORD *v589; // rcx
  _DWORD **v590; // rdx
  __int64 *v591; // rcx
  _DWORD **v592; // rcx
  __int64 *v593; // rdx
  __int64 *v594; // rcx
  __int64 *v595; // rcx
  int *v596; // rcx
  const char **v597; // rdx
  int *v598; // rcx
  _QWORD **v599; // rdx
  _QWORD **v600; // rcx
  __int64 **v601; // rdx
  unsigned __int64 **v602; // rcx
  __int64 **v603; // rcx
  unsigned int *v604; // rdx
  unsigned __int64 *v605; // rcx
  _DWORD **v606; // rdx
  __int64 *v607; // rcx
  __int64 v608; // rcx
  __int64 v609; // rdx
  int v610; // ebp
  __int64 i; // rbp
  char v612; // al
  _QWORD **v613; // rcx
  __int64 *v614; // rcx
  __int64 **v615; // rdx
  __int64 *v616; // rcx
  _WORD **v617; // rdx
  void ***v618; // rcx
  __int64 *v619; // rdx
  __int64 *v620; // rcx
  __int64 **v621; // rdx
  __int64 *v622; // rcx
  _QWORD **v623; // rcx
  _QWORD **v624; // rcx
  _DWORD **v625; // rcx
  __int64 *v626; // rcx
  _QWORD **v627; // rdx
  __int64 *v628; // rcx
  _DWORD *v629; // rdx
  __int64 (__fastcall **v630)(char *, __int64); // rcx
  __int64 *v631; // rdx
  _QWORD *v632; // rcx
  __int64 *v633; // rcx
  _QWORD *v634; // rcx
  _QWORD *v635; // rdx
  _DWORD **v636; // rcx
  __int64 *v637; // rcx
  _DWORD **v638; // rcx
  __int64 v639; // rdx
  const char *v640; // rsi
  __int64 v641; // rdx
  __int64 v642; // rcx
  __int64 v643; // r8
  __int64 v644; // r9
  const char *v645; // rbx
  __int64 **v646; // rdx
  __int64 **v647; // rcx
  __int64 *v648; // rdx
  __int64 *v649; // rcx
  __int64 *v650; // rcx
  __int64 *v651; // rcx
  __int64 *v652; // rdx
  __int64 *v653; // rcx
  __int64 *v654; // rdx
  _DWORD **v655; // rdx
  __int64 *v656; // rcx
  int v657; // eax
  void *v658; // rax
  __int64 v659; // rdx
  __int64 v660; // rcx
  __int64 v661; // r8
  __int64 v662; // r9
  char v663; // dl
  const void *v664; // r14
  const void *v665; // r14
  __int16 v666; // ax
  __m128i v667; // [rsp+0h] [rbp-248h] BYREF
  __m128i v668; // [rsp+10h] [rbp-238h] BYREF
  int v669; // [rsp+20h] [rbp-228h]
  char *v670; // [rsp+28h] [rbp-220h]
  __int64 v671; // [rsp+30h] [rbp-218h]
  unsigned __int64 v672; // [rsp+38h] [rbp-210h]
  void *s1[3]; // [rsp+40h] [rbp-208h] BYREF
  __int64 v674; // [rsp+58h] [rbp-1F0h]
  _BYTE v675[20]; // [rsp+60h] [rbp-1E8h]
  int v676; // [rsp+74h] [rbp-1D4h]
  __int64 v677; // [rsp+78h] [rbp-1D0h]
  __int128 v678; // [rsp+80h] [rbp-1C8h]
  __int64 v679; // [rsp+90h] [rbp-1B8h]
  __int64 v680; // [rsp+98h] [rbp-1B0h]
  __int64 v681; // [rsp+A0h] [rbp-1A8h]
  __int64 v682; // [rsp+A8h] [rbp-1A0h] BYREF
  int v683; // [rsp+B0h] [rbp-198h]
  int v684; // [rsp+B8h] [rbp-190h]
  int v685; // [rsp+C0h] [rbp-188h]
  __int64 v686; // [rsp+C8h] [rbp-180h]
  __int64 v687; // [rsp+D0h] [rbp-178h]
  int v688; // [rsp+D8h] [rbp-170h]
  int v689; // [rsp+E0h] [rbp-168h]
  int v690; // [rsp+E8h] [rbp-160h]
  __int64 v691; // [rsp+F0h] [rbp-158h]
  __int64 v692; // [rsp+F8h] [rbp-150h]
  int v693; // [rsp+100h] [rbp-148h]
  int v694; // [rsp+108h] [rbp-140h]
  int v695; // [rsp+110h] [rbp-138h]
  int v696; // [rsp+118h] [rbp-130h]
  int v697; // [rsp+120h] [rbp-128h]
  int v698; // [rsp+128h] [rbp-120h]
  int v699; // [rsp+130h] [rbp-118h]
  int v700; // [rsp+138h] [rbp-110h]
  __int64 v701; // [rsp+140h] [rbp-108h]
  char v702; // [rsp+1E8h] [rbp-60h] BYREF
  char s[24]; // [rsp+1F0h] [rbp-58h] BYREF
  unsigned __int64 v704; // [rsp+208h] [rbp-40h]

  v704 = __readfsqword(0x28u);
  v8 = a3;
  if ( a2 <= 100 )
  {
    if ( a2 < 0 )
      return 0;
    switch ( a2 )
    {
      case 0LL:
        v667 = _mm_unpacklo_epi64(
                 _mm_loadl_epi64((const __m128i *)off_A1AA8),
                 (__m128i)(unsigned __int64)"Force BL ~j~ump");
        v668 = _mm_unpacklo_epi64(
                 _mm_loadl_epi64((const __m128i *)off_A1AA0),
                 (__m128i)(unsigned __int64)"~F~orce BL call");
        netnode_check();
        sub_21940((_QWORD *)a1, a7);
        *(_QWORD *)(a1 + 616) = sub_81C80(a1, " $arm");
        sub_59150(a1);
        v355 = _mm_load_si128(&v667);
        HIDWORD(s1[0]) = 0;
        *(_OWORD *)&v675[4] = 0;
        v674 = a1 + 472;
        *(_DWORD *)(a1 + 512) = 8;
        v676 = 0;
        LODWORD(s1[0]) = 64;
        *(_QWORD *)v675 = a1;
        v677 = 0x8FFFFFFFFLL;
        *(__m128i *)&s1[1] = v355;
        if ( (unsigned __int8)callui(
                                127,
                                s1,
                                v356,
                                v357,
                                v358,
                                v359,
                                s1,
                                v667.m128i_i64[1],
                                v668.m128i_i64[0],
                                v668.m128i_i64[1])
          && !(unsigned __int8)callui(
                                 129,
                                 "Edit/Other/Create",
                                 "arm:ForceBLJump",
                                 0,
                                 v362,
                                 v363,
                                 v667.m128i_i64[0],
                                 v667.m128i_i64[1],
                                 v668.m128i_i64[0],
                                 v668.m128i_i64[1]) )
        {
          callui(
            128,
            "arm:ForceBLJump",
            v360,
            v361,
            v362,
            v363,
            v667.m128i_i64[0],
            v667.m128i_i64[1],
            v668.m128i_i64[0],
            v668.m128i_i64[1]);
        }
        v364 = _mm_load_si128(&v668);
        v676 = 0;
        v674 = a1 + 488;
        *(_OWORD *)&v675[4] = 0;
        s1[0] = &dword_40;
        *(_QWORD *)v675 = a1;
        v677 = 0x8FFFFFFFFLL;
        *(__m128i *)&s1[1] = v364;
        if ( (unsigned __int8)callui(
                                127,
                                v667.m128i_i64[0],
                                v360,
                                v361,
                                v362,
                                v363,
                                v667.m128i_i64[0],
                                v667.m128i_i64[1],
                                v668.m128i_i64[0],
                                v668.m128i_i64[1]) )
        {
          if ( !(unsigned __int8)callui(
                                   129,
                                   "Edit/Other/Create",
                                   "arm:ForceBLCall",
                                   0,
                                   v365,
                                   v366,
                                   v667.m128i_i64[0],
                                   v667.m128i_i64[1],
                                   v668.m128i_i64[0],
                                   v668.m128i_i64[1]) )
            callui(
              128,
              "arm:ForceBLCall",
              v367,
              v368,
              v369,
              v370,
              v667.m128i_i64[0],
              v667.m128i_i64[1],
              v668.m128i_i64[0],
              v668.m128i_i64[1]);
        }
        add_idc_func();
        add_idc_func();
        hook_event_listener();
        hook_event_listener();
        sub_46410((_QWORD *)a1);
        nullsub_3();
        return 0;
      case 1LL:
        sub_464B0((_QWORD *)a1);
        callui(
          128,
          "arm:ForceBLJump",
          v332,
          v333,
          v334,
          v335,
          v667.m128i_i64[0],
          v667.m128i_i64[1],
          v668.m128i_i64[0],
          v668.m128i_i64[1]);
        callui(
          128,
          "arm:ForceBLCall",
          v336,
          v337,
          v338,
          v339,
          v667.m128i_i64[0],
          v667.m128i_i64[1],
          v668.m128i_i64[0],
          v668.m128i_i64[1]);
        sub_593D0(a1);
        sub_1DF70((_QWORD *)a1);
        del_idc_func();
        del_idc_func();
        unhook_event_listener();
        *(_QWORD *)(a1 + 176) = -1;
        clr_module_data();
        sub_81D90(*(_QWORD *)(a1 + 616));
        *(_QWORD *)(a1 + 616) = 0;
        return 0;
      case 2LL:
        v287 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v596 = *(int **)(a3 + 8);
          v292 = v596 + 2;
          *(_QWORD *)(v8 + 8) = v596 + 2;
          v290 = *v596;
        }
        else
        {
          v288 = *(_QWORD *)(a3 + 16);
          v289 = v287 + 8;
          *(_DWORD *)v8 = v289;
          v290 = *(_DWORD *)(v288 + v287);
          if ( (unsigned int)v289 <= 0x2F )
          {
            v291 = v287 + 16;
            v292 = (int *)(v289 + v288);
            *(_DWORD *)v8 = v291;
            goto LABEL_295;
          }
          v292 = *(int **)(v8 + 8);
        }
        v291 = (__int64)(v292 + 2);
        *(_QWORD *)(v8 + 8) = v292 + 2;
LABEL_295:
        v293 = *v292;
        if ( !*v292 )
          setinf_flag();
        if ( (unsigned __int8)getinf_flag(
                                3,
                                4,
                                (__int64)v292,
                                v291,
                                a5,
                                a6,
                                v667.m128i_i64[0],
                                v667.m128i_i64[1],
                                v668.m128i_i64[0])
          || (getinf(3) & 0x1006) == 0x1002 )
        {
          v294 = 0;
        }
        else
        {
          v537 = (unsigned __int8)getinf_flag(
                                    3,
                                    32,
                                    v536,
                                    a4,
                                    a5,
                                    a6,
                                    v667.m128i_i64[0],
                                    v667.m128i_i64[1],
                                    v668.m128i_i64[0]) == 0;
          v294 = &unk_A1A80;
          if ( !v537 )
            v294 = &unk_A1A40;
        }
        a3 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a3 + 88) = v294;
        if ( !v290 || v290 > 2 )
        {
          v640 = "ARMv4T";
          if ( v290 )
            v640 = "XScale";
          if ( (unsigned __int8)sub_56980(a1 + 192, v640) )
            sub_55330(a1 + 192);
          if ( !v293 )
          {
            v645 = "ARMB";
            if ( !(unsigned __int8)getinf_flag(
                                     3,
                                     32,
                                     v641,
                                     v642,
                                     v643,
                                     v644,
                                     v667.m128i_i64[0],
                                     v667.m128i_i64[1],
                                     v668.m128i_i64[0]) )
              v645 = "ARM";
            strlen(v645);
            setinf_buf();
          }
          return 0;
        }
        if ( !*(_BYTE *)(a1 + 516) )
          return 0;
        goto LABEL_302;
      case 4LL:
        v241 = *(_DWORD *)a3;
        if ( v241 > 0x2F )
          *(_QWORD *)(v8 + 8) += 8LL;
        else
          *(_DWORD *)v8 = v241 + 8;
        v242 = *(_QWORD *)(a1 + 16);
        if ( (unsigned int)getinf(5) == 2 )
        {
          if ( get_last_seg() )
          {
            if ( (*(_BYTE *)(v242 + 9) & 0x20) != 0 )
            {
              sub_23720(
                1u,
                (__int64)"HIDECANCEL\n"
                         "The loaded binary file can be disassembled in two modes:\n"
                         " 1. 64-bit mode\n"
                         " 2. 32-bit mode\n"
                         "Do you want to disassemble it as 64-bit code?");
              setinf_flag();
              if ( get_first_seg() )
              {
                do
                  set_segm_addressing();
                while ( get_next_seg() );
              }
            }
          }
        }
        if ( (unsigned int)getinf(5) == 2 )
        {
          if ( (unsigned __int8)getinf_flag(
                                  3,
                                  4,
                                  v243,
                                  v244,
                                  v245,
                                  v246,
                                  v667.m128i_i64[0],
                                  v667.m128i_i64[1],
                                  v668.m128i_i64[0])
            || (getinf(3) & 0x1006) == 0x1002 )
          {
            v658 = 0;
          }
          else
          {
            v663 = getinf_flag(3, 32, v659, v660, v661, v662, v667.m128i_i64[0], v667.m128i_i64[1], v668.m128i_i64[0]);
            v658 = &unk_A1A80;
            if ( v663 )
              v658 = &unk_A1A40;
          }
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL) = v658;
        }
        if ( (getinf(10) & 2) != 0 && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL) && !(unsigned __int8)is_debugger_on() )
        {
          v251 = *(unsigned __int8 **)(*(_QWORD *)(a1 + 16) + 88LL);
          v667.m128i_i64[0] = (__int64)s1;
          if ( !*v251 )
          {
LABEL_553:
            sub_331D0();
            goto LABEL_554;
          }
LABEL_255:
          getinf(19);
          while ( 1 )
          {
            v252 = *v251;
            v253 = (char *)*((_QWORD *)v251 + 1);
            getinf(20);
            memset(s1, 0, sizeof(s1));
            s1[0] = (void *)qvector_reserve(v667.m128i_i64[0], 0, 1, 80);
            v254 = (char *)s1[0] + 80 * (__int64)s1[1];
            *(_QWORD *)v254 = 0;
            *((_QWORD *)v254 + 3) = 0;
            *((_QWORD *)v254 + 6) = 0;
            *((_DWORD *)v254 + 18) = -1;
            *(_OWORD *)(v254 + 8) = 0;
            *((_OWORD *)v254 + 2) = 0;
            *(_OWORD *)(v254 + 56) = 0;
            ++s1[1];
            if ( !v252 )
              goto LABEL_263;
            v255 = *((_QWORD *)v254 + 1);
            v256 = v255 + v252;
            if ( __CFADD__(v255, v252) )
            {
              if ( v255 > 0x7FFFFFFFFFFFFFFELL )
              {
                if ( v255 != 0x7FFFFFFFFFFFFFFFLL )
                  *((_QWORD *)v254 + 1) = 0x7FFFFFFFFFFFFFFFLL;
                goto LABEL_259;
              }
              v256 = 0x7FFFFFFFFFFFFFFFLL;
            }
            v257 = *(_QWORD *)v254;
            v672 = *((_QWORD *)v254 + 1);
            v671 = v256;
            v668.m128i_i64[0] = (__int64)v254;
            v258 = qvector_reserve((__int64)v254, v257, v256, 1);
            v259 = v668.m128i_i64[0];
            v260 = v671;
            v261 = *(_QWORD *)(v668.m128i_i64[0] + 8);
            v262 = v671;
            *(_QWORD *)v668.m128i_i64[0] = v258;
            v670 = (char *)v259;
            v668.m128i_i64[0] = v260;
            memset((void *)(v258 + v261), 0, v262 - v261);
            v254 = v670;
            v255 = v672;
            *((_QWORD *)v670 + 1) = v668.m128i_i64[0];
LABEL_259:
            v263 = (_QWORD *)(*(_QWORD *)v254 + v255);
            if ( (unsigned int)v252 >= 8 )
            {
              *v263 = *(_QWORD *)v253;
              *(_QWORD *)((char *)v263 + v252 - 8) = *(_QWORD *)&v253[v252 - 8];
              qmemcpy(
                (void *)((unsigned __int64)(v263 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                (const void *)(v253 - ((char *)v263 - ((unsigned __int64)(v263 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                8LL * (((unsigned int)v252 + (_DWORD)v263 - (((_DWORD)v263 + 8) & 0xFFFFFFF8)) >> 3));
            }
            else if ( (v252 & 4) != 0 )
            {
              *(_DWORD *)v263 = *(_DWORD *)v253;
              *(_DWORD *)((char *)v263 + v252 - 4) = *(_DWORD *)&v253[v252 - 4];
            }
            else
            {
              *(_BYTE *)v263 = *v253;
              if ( (v252 & 2) != 0 )
                *(_WORD *)((char *)v263 + v252 - 2) = *(_WORD *)&v253[v252 - 2];
            }
LABEL_263:
            v264 = bin_search();
            v265 = (char *)s1[0];
            v266 = v264;
            if ( s1[0] )
            {
              v267 = s1[1];
              if ( s1[1] )
              {
                v268 = 0;
                do
                {
                  v269 = (__int64 *)&v265[80 * (_QWORD)v268];
                  v270 = v269[6];
                  if ( v270 )
                  {
                    v269[7] = 0;
                    qfree(v270);
                  }
                  v271 = v269[3];
                  if ( v271 )
                  {
                    v269[4] = 0;
                    qfree(v271);
                  }
                  v272 = *v269;
                  if ( *v269 )
                  {
                    v269[1] = 0;
                    qfree(v272);
                  }
                  v268 = (char *)v268 + 1;
                  v265 = (char *)s1[0];
                }
                while ( v267 != v268 );
              }
              s1[1] = 0;
              qfree((__int64)v265);
            }
            if ( v266 >= getinf(20) )
            {
              v251 += 16;
              if ( !*v251 )
                goto LABEL_553;
              goto LABEL_255;
            }
            split_sreg_range();
          }
        }
        v667.m128i_i64[0] = (__int64)s1;
LABEL_554:
        if ( !(unsigned __int8)getinf_flag(
                                 3,
                                 4,
                                 v247,
                                 v248,
                                 v249,
                                 v250,
                                 v667.m128i_i64[0],
                                 v667.m128i_i64[1],
                                 v668.m128i_i64[0])
          && (getinf(3) & 0x1006) != 0x1002 )
        {
          sub_437F0((__int64)&unk_88760);
        }
        *(_BYTE *)(a1 + 516) = 1;
        netnode_supdel_all();
        s1[0] = (void *)*(unsigned __int16 *)(a1 + 184);
        netnode_supset();
        sub_47200(a1, -1);
        return 0;
      case 5LL:
        goto LABEL_15;
      case 8LL:
        v173 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v597 = *(const char ***)(a3 + 8);
          v598 = (int *)(v597 + 1);
          *(_QWORD *)(v8 + 8) = v597 + 1;
          v176 = *v597;
        }
        else
        {
          v174 = *(_QWORD *)(a3 + 16);
          v175 = v173 + 8;
          *(_DWORD *)v8 = v175;
          v176 = *(const char **)(v174 + v173);
          if ( (unsigned int)v175 <= 0x2F )
          {
            v177 = v173 + 16;
            *(_DWORD *)v8 = v177;
            v178 = *(_DWORD *)(v174 + v175);
            if ( (unsigned int)v177 <= 0x2F )
            {
              v179 = v173 + 24;
              *(_DWORD *)v8 = v179;
              v180 = *(_QWORD **)(v174 + v177);
              if ( (unsigned int)v179 <= 0x2F )
              {
                v181 = v173 + 32;
                *(_DWORD *)v8 = v181;
                v182 = *(__int64 **)(v174 + v179);
                if ( (unsigned int)v181 <= 0x2F )
                {
                  v183 = (_DWORD *)(v181 + v174);
                  *(_DWORD *)v8 = v173 + 40;
                  goto LABEL_180;
                }
                v183 = *(_DWORD **)(v8 + 8);
LABEL_667:
                *(_QWORD *)(v8 + 8) = v183 + 2;
LABEL_180:
                v184 = sub_46B10(a1, v176, v178, v180, *v183 != 0);
                if ( v184 )
                {
                  if ( v182 )
                    *v182 = v184;
                  return -1;
                }
                return 1;
              }
              v600 = *(_QWORD ***)(v8 + 8);
LABEL_666:
              v183 = v600 + 1;
              *(_QWORD *)(v8 + 8) = v600 + 1;
              v182 = *v600;
              goto LABEL_667;
            }
            v599 = *(_QWORD ***)(v8 + 8);
LABEL_665:
            v600 = v599 + 1;
            *(_QWORD *)(v8 + 8) = v599 + 1;
            v180 = *v599;
            goto LABEL_666;
          }
          v598 = *(int **)(v8 + 8);
        }
        v599 = (_QWORD **)(v598 + 2);
        *(_QWORD *)(v8 + 8) = v598 + 2;
        v178 = *v598;
        goto LABEL_665;
      case 9LL:
        v238 = *(_DWORD *)a3;
        if ( v238 > 0x2F )
        {
          v579 = *(const char ***)(v8 + 8);
          v580 = v579 + 1;
          *(_QWORD *)(v8 + 8) = v579 + 1;
          v240 = *v579;
        }
        else
        {
          v239 = (const char **)(*(_QWORD *)(v8 + 16) + v238);
          *(_DWORD *)v8 = v238 + 8;
          v240 = *v239;
          if ( v238 + 8 <= 0x2F )
          {
            *(_DWORD *)v8 = v238 + 16;
            goto LABEL_239;
          }
          v580 = *(const char ***)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v580 + 1;
LABEL_239:
        if ( !(unsigned __int8)sub_570D0(a1 + 192, v240) )
          return -1;
        sub_55330(a1 + 192);
        if ( *(int *)(a1 + 192) <= 13 || *(_DWORD *)(a1 + 196) == 77 )
        {
          setinf_flag();
          *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL) &= 0xEFFFDFFF;
        }
        if ( !strcmp(v240, "ARMv7") && ((unsigned int)getinf(5) == 11 || (unsigned int)getinf(5) == 10) )
          setinf_flag();
        return 0;
      case 10LL:
        v278 = *(_DWORD *)a3;
        if ( v278 > 0x2F )
        {
          v279 = *(__int64 **)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v279 + 1;
        }
        else
        {
          v279 = (__int64 *)(*(_QWORD *)(v8 + 16) + v278);
          *(_DWORD *)v8 = v278 + 8;
        }
        return (int)sub_21660(a1, *v279);
      case 11LL:
        v353 = *(_DWORD *)a3;
        if ( v353 > 0x2F )
        {
          v354 = *(unsigned __int16 ***)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v354 + 1;
        }
        else
        {
          v354 = (unsigned __int16 **)(*(_QWORD *)(v8 + 16) + v353);
          *(_DWORD *)v8 = v353 + 8;
        }
        if ( !(unsigned int)sub_364C0(a1, *v354) )
          return -1;
        return 1;
      case 12LL:
        v171 = *(_DWORD *)a3;
        if ( v171 > 0x2F )
        {
          v172 = *(__int64 **)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v172 + 1;
        }
        else
        {
          v172 = (__int64 *)(*(_QWORD *)(v8 + 16) + v171);
          *(_DWORD *)v8 = v171 + 8;
        }
        sub_3B760(a1, *v172);
        return 1;
      case 13LL:
        v169 = *(_DWORD *)a3;
        if ( v169 > 0x2F )
        {
          v170 = *(__int64 **)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v170 + 1;
        }
        else
        {
          v170 = (__int64 *)(*(_QWORD *)(v8 + 16) + v169);
          *(_DWORD *)v8 = v169 + 8;
        }
        sub_3B7D0(a1, *v170);
        return 1;
      case 14LL:
        v273 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v626 = *(__int64 **)(a3 + 8);
          v277 = (__int64 **)(v626 + 1);
          *(_QWORD *)(v8 + 8) = v626 + 1;
          v276 = *v626;
        }
        else
        {
          v274 = *(_QWORD *)(a3 + 16);
          v275 = v273 + 8;
          *(_DWORD *)v8 = v275;
          v276 = *(_QWORD *)(v274 + v273);
          if ( (unsigned int)v275 <= 0x2F )
          {
            v277 = (__int64 **)(v275 + v274);
            *(_DWORD *)v8 = v273 + 16;
            goto LABEL_279;
          }
          v277 = *(__int64 ***)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v277 + 1;
LABEL_279:
        sub_3AF50(a1, v276, *v277);
        return 1;
      case 15LL:
        v166 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v572 = *(__int64 **)(a3 + 8);
          v573 = v572 + 1;
          *(_QWORD *)(v8 + 8) = v572 + 1;
          v168 = *v572;
        }
        else
        {
          v167 = *(_QWORD *)(a3 + 16);
          *(_DWORD *)v8 = v166 + 8;
          v168 = *(_QWORD *)(v167 + v166);
          if ( v166 + 8 <= 0x2F )
          {
            *(_DWORD *)v8 = v166 + 16;
            goto LABEL_167;
          }
          v573 = *(__int64 **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v573 + 1;
LABEL_167:
        sub_3B480(a1, v168);
        return 1;
      case 16LL:
        v409 = *(_DWORD *)a3;
        if ( v409 > 0x2F )
        {
          v410 = *(__int64 **)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v410 + 1;
        }
        else
        {
          v410 = (__int64 *)(*(_QWORD *)(v8 + 16) + v409);
          *(_DWORD *)v8 = v409 + 8;
        }
        sub_3B590(a1, *v410);
        return 1;
      case 17LL:
        v407 = *(_DWORD *)a3;
        if ( v407 > 0x2F )
        {
          v408 = *(__int64 **)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v408 + 1;
        }
        else
        {
          v408 = (__int64 *)(*(_QWORD *)(v8 + 16) + v407);
          *(_DWORD *)v8 = v407 + 8;
        }
        sub_3E390(*v408);
        return 1;
      case 18LL:
        v420 = *(_DWORD *)a3;
        if ( v420 > 0x2F )
        {
          v421 = *(__int64 ***)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v421 + 1;
        }
        else
        {
          v421 = (__int64 **)(*(_QWORD *)(v8 + 16) + v420);
          *(_DWORD *)v8 = v420 + 8;
        }
        sub_40130(*v421);
        return 1;
      case 19LL:
        v212 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v581 = *(_WORD ***)(a3 + 8);
          v216 = (__int64 *)(v581 + 1);
          *(_QWORD *)(v8 + 8) = v581 + 1;
          v215 = *v581;
        }
        else
        {
          v213 = *(_QWORD *)(a3 + 16);
          v214 = v212 + 8;
          *(_DWORD *)v8 = v214;
          v215 = *(_WORD **)(v213 + v212);
          if ( (unsigned int)v214 <= 0x2F )
          {
            v216 = (__int64 *)(v214 + v213);
            *(_DWORD *)v8 = v212 + 16;
            goto LABEL_217;
          }
          v216 = *(__int64 **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v216 + 1;
LABEL_217:
        if ( !(unsigned __int8)sub_3D540(v215, *v216, a7) )
          return -1;
        return 1;
      case 22LL:
        v422 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v613 = *(_QWORD ***)(a3 + 8);
          v426 = (unsigned __int8 *)(v613 + 1);
          *(_QWORD *)(v8 + 8) = v613 + 1;
          v425 = *v613;
        }
        else
        {
          v423 = *(_QWORD *)(a3 + 16);
          v424 = v422 + 8;
          *(_DWORD *)v8 = v424;
          v425 = *(_QWORD **)(v423 + v422);
          if ( (unsigned int)v424 <= 0x2F )
          {
            v426 = (unsigned __int8 *)(v424 + v423);
            *(_DWORD *)v8 = v422 + 16;
            goto LABEL_432;
          }
          v426 = *(unsigned __int8 **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v426 + 8;
LABEL_432:
        sub_3B890(a1, v425, *v426);
        return 1;
      case 25LL:
        v389 = *(_DWORD *)a3;
        if ( v389 > 0x2F )
        {
          v390 = *(__int64 ***)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v390 + 1;
        }
        else
        {
          v390 = (__int64 **)(*(_QWORD *)(v8 + 16) + v389);
          *(_DWORD *)v8 = v389 + 8;
        }
        v391 = *v390;
        v392 = **v390;
        sreg = get_sreg(v392, 20);
        if ( !(unsigned __int8)is_loaded() )
          sreg = 0;
        if ( *((_BYTE *)v391 + 43) == 2 || !*(_DWORD *)(a1 + 216) )
          goto LABEL_402;
        if ( *(_DWORD *)(a1 + 212) )
        {
          if ( sreg == -1 )
          {
            if ( !v392 || (sreg = get_sreg(v392 - 1, 20), sreg == -1) )
LABEL_402:
              sreg = 0;
          }
        }
        else
        {
          sreg = 1;
        }
        v391[20 - *(_DWORD *)(*(_QWORD *)(a1 + 16) + 68LL) + 7] = sreg;
        return 0;
      case 27LL:
        v394 = *(_DWORD *)a3;
        if ( v394 > 0x2F )
        {
          v395 = *(__int64 **)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v395 + 1;
        }
        else
        {
          v395 = (__int64 *)(*(_QWORD *)(v8 + 16) + v394);
          *(_DWORD *)v8 = v394 + 8;
        }
        v396 = *v395;
        flags = get_flags_ex(*v395, 4);
        if ( (flags & 0x600) != 0 )
          return get_item_end() - v396;
        v610 = sub_28410(a1, v396);
        if ( !v610 || (flags & 0x1000) != 0 || (unsigned __int8)create_align() )
          goto LABEL_687;
        if ( v610 == 4 )
        {
          if ( (unsigned int)get_dword(v396) )
            return (int)create_insn();
        }
        else if ( (unsigned __int16)get_word(v396) )
        {
          return (int)create_insn();
        }
LABEL_687:
        for ( i = v396; ; flags = get_flags_ex(i, 4) )
        {
          v612 = is_loaded();
          if ( flags || !v612 || !(unsigned __int8)sub_36530(a1, i) )
            break;
          i = get_item_end();
        }
        return i - v396;
      case 28LL:
        v330 = *(_DWORD *)a3;
        if ( v330 > 0x2F )
        {
          v331 = *(__int64 **)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v331 + 1;
        }
        else
        {
          v331 = (__int64 *)(*(_QWORD *)(v8 + 16) + v330);
          *(_DWORD *)v8 = v330 + 8;
        }
        sub_1E3E0((_QWORD *)a1, *v331);
        return 1;
      case 29LL:
        v202 = *(_DWORD *)a3;
        if ( v202 > 0x2F )
        {
          v652 = *(__int64 **)(v8 + 8);
          v653 = v652 + 1;
          *(_QWORD *)(v8 + 8) = v652 + 1;
          v205 = *v652;
        }
        else
        {
          v203 = *(_QWORD *)(v8 + 16);
          v204 = v202 + 8;
          *(_DWORD *)v8 = v204;
          v205 = *(_QWORD *)(v203 + v202);
          if ( (unsigned int)v204 <= 0x2F )
          {
            v206 = v202 + 16;
            *(_DWORD *)v8 = v206;
            v207 = *(_QWORD *)(v203 + v204);
            if ( (unsigned int)v206 <= 0x2F )
            {
              v208 = v202 + 24;
              *(_DWORD *)v8 = v208;
              v209 = *(_QWORD *)(v203 + v206);
              if ( (unsigned int)v208 <= 0x2F )
              {
                v210 = (__int64 *)(v208 + v203);
                *(_DWORD *)v8 = v202 + 32;
                goto LABEL_211;
              }
              v210 = *(__int64 **)(v8 + 8);
LABEL_767:
              *(_QWORD *)(v8 + 8) = v210 + 1;
LABEL_211:
              if ( !v207 )
              {
                v211 = *v210;
                if ( (~((unsigned __int16)get_flags_ex(v205, 4) >> 8) & 6) == 0 )
                  return -(__int64)(v209 + v211 >= (unsigned __int64)get_item_end());
              }
              return 0;
            }
            v654 = *(__int64 **)(v8 + 8);
LABEL_766:
            v210 = v654 + 1;
            *(_QWORD *)(v8 + 8) = v654 + 1;
            v209 = *v654;
            goto LABEL_767;
          }
          v653 = *(__int64 **)(v8 + 8);
        }
        v654 = v653 + 1;
        *(_QWORD *)(v8 + 8) = v653 + 1;
        v207 = *v653;
        goto LABEL_766;
      case 30LL:
        v190 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v571 = *(__int64 **)(a3 + 8);
          v194 = (const char **)(v571 + 1);
          *(_QWORD *)(v8 + 8) = v571 + 1;
          v193 = *v571;
        }
        else
        {
          v191 = *(_QWORD *)(a3 + 16);
          v192 = v190 + 8;
          *(_DWORD *)v8 = v192;
          v193 = *(_QWORD *)(v191 + v190);
          if ( (unsigned int)v192 <= 0x2F )
          {
            v194 = (const char **)(v192 + v191);
            *(_DWORD *)v8 = v190 + 16;
            goto LABEL_195;
          }
          v194 = *(const char ***)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v194 + 1;
LABEL_195:
        v195 = *v194;
        if ( (unsigned __int8)segtype() != 10 && !strcmp(v195, "_GLOBAL_OFFSET_TABLE_") )
          sub_43C00(a1, v193);
        return 0;
      case 32LL:
        v196 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v570 = *(__int64 **)(a3 + 8);
          v200 = v570 + 1;
          *(_QWORD *)(v8 + 8) = v570 + 1;
          v199 = *v570;
        }
        else
        {
          v197 = *(_QWORD *)(a3 + 16);
          v198 = v196 + 8;
          *(_DWORD *)v8 = v198;
          v199 = *(_QWORD *)(v197 + v196);
          if ( (unsigned int)v198 <= 0x2F )
          {
            v200 = (_DWORD *)(v198 + v197);
            *(_DWORD *)v8 = v196 + 16;
            goto LABEL_201;
          }
          v200 = *(_DWORD **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v200 + 2;
LABEL_201:
        v201 = 4 - ((*v200 == 0) - 1);
        if ( !*(_DWORD *)(a1 + 212)
          || (unsigned __int64)(get_sreg(*(_QWORD *)(v199 + 16), 20) - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        {
          v201 |= 2u;
        }
        if ( !sub_28040(a1, v199, v201) )
          return -1;
        return 1;
      case 33LL:
        v187 = *(_DWORD *)a3;
        if ( v187 > 0x2F )
        {
          v188 = *(_QWORD *)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v188 + 8;
        }
        else
        {
          v188 = *(_QWORD *)(v8 + 16) + v187;
          *(_DWORD *)v8 = v187 + 8;
        }
        if ( (*(_BYTE *)(*(_QWORD *)v188 + 32LL) & 0xF) != 0xE )
          return 1;
        v189 = *(_WORD *)(*(_QWORD *)v188 + 24LL);
        if ( (unsigned __int16)(v189 - 282) <= 1u || (unsigned __int16)(v189 - 468) <= 1u )
          return 1;
        return -1;
      case 34LL:
        v380 = *(_DWORD *)a3;
        if ( v380 > 0x2F )
        {
          v381 = *(__int64 **)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v381 + 1;
        }
        else
        {
          v381 = (__int64 *)(*(_QWORD *)(v8 + 16) + v380);
          *(_DWORD *)v8 = v380 + 8;
        }
        if ( !sub_2CF00(a1, *v381) )
          return -1;
        return 1;
      case 35LL:
        v349 = *(_DWORD *)a3;
        if ( v349 > 0x2F )
        {
          v350 = *(__int64 **)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v350 + 1;
        }
        else
        {
          v350 = (__int64 *)(*(_QWORD *)(v8 + 16) + v349);
          *(_DWORD *)v8 = v349 + 8;
        }
        if ( !sub_312C0(a1, *v350, 0) )
          return -1;
        return 1;
      case 36LL:
        v351 = *(_DWORD *)a3;
        if ( v351 > 0x2F )
        {
          v352 = *(_QWORD ***)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v352 + 1;
        }
        else
        {
          v352 = (_QWORD **)(*(_QWORD *)(v8 + 16) + v351);
          *(_DWORD *)v8 = v351 + 8;
        }
        return (int)sub_32CE0(a1, *v352, 1);
      case 37LL:
        v185 = *(_DWORD *)a3;
        if ( v185 > 0x2F )
        {
          v186 = *(__int64 **)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v186 + 1;
        }
        else
        {
          v186 = (__int64 *)(*(_QWORD *)(v8 + 16) + v185);
          *(_DWORD *)v8 = v185 + 8;
        }
        return (unsigned __int8)sub_312C0(a1, *v186, 0);
      case 38LL:
        v438 = *(_DWORD *)a3;
        if ( v438 > 0x2F )
        {
          v439 = *(__int64 **)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v439 + 1;
        }
        else
        {
          v439 = (__int64 *)(*(_QWORD *)(v8 + 16) + v438);
          *(_DWORD *)v8 = v438 + 8;
        }
        v440 = *v439;
        if ( (*(_WORD *)(*v439 + 24) & 0xFFFD) != 0xC || *(_BYTE *)(v440 + 41) != 1 )
          return 0;
        return 2LL * (*(_WORD *)(v440 + 46) == 15);
      case 41LL:
        v411 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v541 = *(__int64 **)(a3 + 8);
          v542 = v541 + 1;
          *(_QWORD *)(v8 + 8) = v541 + 1;
          v414 = *v541;
        }
        else
        {
          v412 = *(_QWORD *)(a3 + 16);
          v413 = v411 + 8;
          *(_DWORD *)v8 = v413;
          v414 = *(_QWORD *)(v412 + v411);
          if ( (unsigned int)v413 <= 0x2F )
          {
            v415 = v411 + 16;
            *(_DWORD *)v8 = v415;
            v416 = *(_QWORD *)(v412 + v413);
            if ( (unsigned int)v415 <= 0x2F )
            {
              v417 = v411 + 24;
              *(_DWORD *)v8 = v417;
              v418 = *(_QWORD *)(v412 + v415);
              if ( (unsigned int)v417 <= 0x2F )
              {
                v419 = (_QWORD *)(v417 + v412);
                *(_DWORD *)v8 = v411 + 32;
                return (int)sub_6F600(v414, v416, v418, *v419);
              }
              v419 = *(_QWORD **)(v8 + 8);
LABEL_568:
              *(_QWORD *)(v8 + 8) = v419 + 1;
              return (int)sub_6F600(v414, v416, v418, *v419);
            }
            v543 = *(__int64 **)(v8 + 8);
LABEL_567:
            v419 = v543 + 1;
            *(_QWORD *)(v8 + 8) = v543 + 1;
            v418 = *v543;
            goto LABEL_568;
          }
          v542 = *(__int64 **)(v8 + 8);
        }
        v543 = v542 + 1;
        *(_QWORD *)(v8 + 8) = v542 + 1;
        v416 = *v542;
        goto LABEL_567;
      case 42LL:
        v431 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v614 = *(__int64 **)(a3 + 8);
          v435 = v614 + 1;
          *(_QWORD *)(v8 + 8) = v614 + 1;
          v434 = *v614;
        }
        else
        {
          v432 = *(_QWORD *)(a3 + 16);
          v433 = v431 + 8;
          *(_DWORD *)v8 = v433;
          v434 = *(_QWORD *)(v432 + v431);
          if ( (unsigned int)v433 <= 0x2F )
          {
            v435 = (_QWORD *)(v433 + v432);
            *(_DWORD *)v8 = v431 + 16;
            return (int)sub_6F440(v434, *v435);
          }
          v435 = *(_QWORD **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v435 + 1;
        return (int)sub_6F440(v434, *v435);
      case 43LL:
        v436 = *(_DWORD *)a3;
        if ( v436 > 0x2F )
        {
          v437 = *(__int64 **)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v437 + 1;
        }
        else
        {
          v437 = (__int64 *)(*(_QWORD *)(v8 + 16) + v436);
          *(_DWORD *)v8 = v436 + 8;
        }
        return (int)sub_28410(a1, *v437);
      case 46LL:
        v382 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v606 = *(_DWORD ***)(a3 + 8);
          v607 = (__int64 *)(v606 + 1);
          *(_QWORD *)(v8 + 8) = v606 + 1;
          v385 = *v606;
        }
        else
        {
          v383 = *(_QWORD *)(a3 + 16);
          v384 = v382 + 8;
          *(_DWORD *)v8 = v384;
          v385 = *(_DWORD **)(v383 + v382);
          if ( (unsigned int)v384 <= 0x2F )
          {
            v386 = v382 + 16;
            *(_DWORD *)v8 = v386;
            v387 = *(_QWORD *)(v383 + v384);
            if ( (unsigned int)v386 <= 0x2F )
            {
              v388 = (__int64 *)(v386 + v383);
              *(_DWORD *)v8 = v382 + 24;
              goto LABEL_392;
            }
            v388 = *(__int64 **)(v8 + 8);
LABEL_678:
            *(_QWORD *)(v8 + 8) = v388 + 1;
LABEL_392:
            *v385 = sub_2F920((_QWORD *)a1, v387, *v388);
            return 1;
          }
          v607 = *(__int64 **)(v8 + 8);
        }
        v388 = v607 + 1;
        *(_QWORD *)(v8 + 8) = v607 + 1;
        v387 = *v607;
        goto LABEL_678;
      case 47LL:
        v427 = *(_DWORD *)a3;
        if ( v427 > 0x2F )
        {
          v428 = *(_QWORD *)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v428 + 8;
        }
        else
        {
          v428 = *(_QWORD *)(v8 + 16) + v427;
          *(_DWORD *)v8 = v427 + 8;
        }
        v429 = *(unsigned __int8 *)(*(_QWORD *)v428 + 1LL);
        if ( (unsigned __int8)v429 > 0xDu )
          return 1;
        v430 = 16139;
        if ( !_bittest64(&v430, v429) )
          return 1;
        return -1;
      case 48LL:
        v280 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v633 = *(__int64 **)(a3 + 8);
          v284 = v633 + 1;
          *(_QWORD *)(v8 + 8) = v633 + 1;
          v283 = *v633;
        }
        else
        {
          v281 = *(_QWORD *)(a3 + 16);
          v282 = v280 + 8;
          *(_DWORD *)v8 = v282;
          v283 = *(_QWORD *)(v281 + v280);
          if ( (unsigned int)v282 <= 0x2F )
          {
            v284 = (__int64 *)(v282 + v281);
            *(_DWORD *)v8 = v280 + 16;
            goto LABEL_286;
          }
          v284 = *(__int64 **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v284 + 1;
LABEL_286:
        if ( !(unsigned __int8)sub_2A020(v283, *v284) )
          return -1;
        return 1;
      case 51LL:
        v398 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v603 = *(__int64 ***)(a3 + 8);
          v604 = (unsigned int *)(v603 + 1);
          *(_QWORD *)(v8 + 8) = v603 + 1;
          v401 = *v603;
        }
        else
        {
          v399 = *(_QWORD *)(a3 + 16);
          v400 = v398 + 8;
          *(_DWORD *)v8 = v400;
          v401 = *(__int64 **)(v399 + v398);
          if ( (unsigned int)v400 <= 0x2F )
          {
            v402 = v398 + 16;
            *(_DWORD *)v8 = v402;
            v403 = *(_DWORD *)(v399 + v400);
            if ( (unsigned int)v402 <= 0x2F )
            {
              v404 = v398 + 24;
              *(_DWORD *)v8 = v404;
              v405 = *(_QWORD *)(v399 + v402);
              if ( (unsigned int)v404 <= 0x2F )
              {
                v406 = (unsigned int *)(v404 + v399);
                *(_DWORD *)v8 = v398 + 32;
                return (int)sub_24EC0(v401, v403, v405, *v406);
              }
              v406 = *(unsigned int **)(v8 + 8);
LABEL_675:
              *(_QWORD *)(v8 + 8) = v406 + 2;
              return (int)sub_24EC0(v401, v403, v405, *v406);
            }
            v605 = *(unsigned __int64 **)(v8 + 8);
LABEL_674:
            v406 = (unsigned int *)(v605 + 1);
            *(_QWORD *)(v8 + 8) = v605 + 1;
            v405 = *v605;
            goto LABEL_675;
          }
          v604 = *(unsigned int **)(v8 + 8);
        }
        v605 = (unsigned __int64 *)(v604 + 2);
        *(_QWORD *)(v8 + 8) = v604 + 2;
        v403 = *v604;
        goto LABEL_674;
      case 52LL:
        v373 = *(_DWORD *)a3;
        if ( v373 > 0x2F )
        {
          v376 = *(char ***)(v8 + 8);
          v375 = (__int64)(v376 + 1);
          *(_QWORD *)(v8 + 8) = v376 + 1;
        }
        else
        {
          v374 = v373;
          v375 = v373 + 8;
          v376 = (char **)(*(_QWORD *)(v8 + 16) + v374);
          *(_DWORD *)v8 = v375;
        }
        v377 = *v376;
        v378 = getinf_flag(3, 4, v375, (__int64)v376, a5, a6, v667.m128i_i64[0], v667.m128i_i64[1], v668.m128i_i64[0]);
        v379 = 1;
        if ( !v378 )
          v379 = (getinf(3) & 0x1006) == 4098;
        return (int)(sub_36610(v377, 0, 0, v379) + 1);
      case 55LL:
        v342 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v601 = *(__int64 ***)(a3 + 8);
          v602 = (unsigned __int64 **)(v601 + 1);
          *(_QWORD *)(v8 + 8) = v601 + 1;
          v345 = *v601;
        }
        else
        {
          v343 = *(_QWORD *)(a3 + 16);
          v344 = v342 + 8;
          *(_DWORD *)v8 = v344;
          v345 = *(__int64 **)(v343 + v342);
          if ( (unsigned int)v344 <= 0x2F )
          {
            v346 = v342 + 16;
            *(_DWORD *)v8 = v346;
            v347 = *(unsigned __int64 **)(v343 + v344);
            if ( (unsigned int)v346 <= 0x2F )
            {
              v348 = (__int64 **)(v346 + v343);
              *(_DWORD *)v8 = v342 + 24;
              return (int)sub_28B80(a1, v345, v347, *v348);
            }
            v348 = *(__int64 ***)(v8 + 8);
LABEL_670:
            *(_QWORD *)(v8 + 8) = v348 + 1;
            return (int)sub_28B80(a1, v345, v347, *v348);
          }
          v602 = *(unsigned __int64 ***)(v8 + 8);
        }
        v348 = (__int64 **)(v602 + 1);
        *(_QWORD *)(v8 + 8) = v602 + 1;
        v347 = *v602;
        goto LABEL_670;
      case 57LL:
        v340 = *(_DWORD *)a3;
        if ( v340 > 0x2F )
        {
          v341 = *(_QWORD **)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v341 + 1;
        }
        else
        {
          v341 = (_QWORD *)(*(_QWORD *)(v8 + 16) + v340);
          *(_DWORD *)v8 = v340 + 8;
        }
        if ( !*v341 )
          return -1;
        return (unsigned __int8)sub_29E80(a1) - 1LL;
      case 59LL:
        v371 = *(_DWORD *)a3;
        if ( v371 > 0x2F )
        {
          v372 = *(_QWORD ***)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v372 + 1;
        }
        else
        {
          v372 = (_QWORD **)(*(_QWORD *)(v8 + 16) + v371);
          *(_DWORD *)v8 = v371 + 8;
        }
        sub_30260(
          a1,
          *v372,
          0,
          (__int64)v372,
          a5,
          a6,
          v667.m128i_i32[0],
          v667.m128i_i64[1],
          v668.m128i_i64[0],
          v668.m128i_i32[2],
          v669,
          (int)v670,
          v671,
          v672,
          (int)s1[0],
          (int)s1[1],
          (int)s1[2],
          v674,
          *(int *)v675,
          *(int *)&v675[8],
          *(int *)&v675[16],
          v677,
          v678,
          SDWORD2(v678),
          v679,
          v680,
          v681,
          v682,
          v683,
          v684,
          v685,
          v686,
          v687,
          v688,
          v689,
          v690,
          v691,
          v692,
          v693,
          v694,
          v695,
          v696,
          v697,
          v698,
          v699,
          v700,
          v701);
        return 1;
      case 60LL:
        v146 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v638 = *(_DWORD ***)(a3 + 8);
          v150 = v638 + 1;
          *(_QWORD *)(v8 + 8) = v638 + 1;
          v149 = *v638;
        }
        else
        {
          v147 = *(_QWORD *)(a3 + 16);
          v148 = v146 + 8;
          *(_DWORD *)v8 = v148;
          v149 = *(_DWORD **)(v147 + v146);
          if ( (unsigned int)v148 <= 0x2F )
          {
            v150 = (_QWORD *)(v148 + v147);
            *(_DWORD *)v8 = v146 + 16;
            goto LABEL_151;
          }
          v150 = *(_QWORD **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v150 + 1;
LABEL_151:
        *v149 = sub_302A0(*v150);
        return 1;
      case 63LL:
        v145 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v608 = *(_QWORD *)(a3 + 8) + 8LL;
          *(_QWORD *)(a3 + 8) = v608;
        }
        else
        {
          *(_DWORD *)a3 = v145 + 8;
          if ( v145 + 8 <= 0x2F )
          {
            *(_DWORD *)a3 = v145 + 16;
            if ( v145 + 16 <= 0x2F )
            {
              *(_DWORD *)a3 = v145 + 24;
              goto LABEL_147;
            }
            v609 = *(_QWORD *)(a3 + 8);
LABEL_683:
            *(_QWORD *)(v8 + 8) = v609 + 8;
LABEL_147:
            invalidate_regfinder_cache();
            return 0;
          }
          v608 = *(_QWORD *)(a3 + 8);
        }
        v609 = v608 + 8;
        *(_QWORD *)(v8 + 8) = v608 + 8;
        goto LABEL_683;
      case 64LL:
        v144 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v576 = *(_QWORD *)(a3 + 8) + 8LL;
        }
        else
        {
          *(_DWORD *)a3 = v144 + 8;
          if ( v144 + 8 <= 0x2F )
          {
            *(_DWORD *)a3 = v144 + 16;
            if ( v144 + 16 <= 0x2F )
            {
              *(_DWORD *)a3 = v144 + 24;
              goto LABEL_142;
            }
            v577 = *(_QWORD *)(a3 + 8);
LABEL_623:
            *(_QWORD *)(v8 + 8) = v577 + 8;
LABEL_142:
            invalidate_regfinder_xrefs_cache();
            return 0;
          }
          v576 = *(_QWORD *)(a3 + 8);
        }
        v577 = v576 + 8;
        *(_QWORD *)(v8 + 8) = v576 + 8;
        goto LABEL_623;
      case 65LL:
        v318 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v639 = *(_QWORD *)(a3 + 8) + 8LL;
          *(_QWORD *)(v8 + 8) = v639;
        }
        else
        {
          *(_DWORD *)a3 = v318 + 8;
          if ( v318 + 8 <= 0x2F )
          {
            *(_DWORD *)a3 = v318 + 16;
            goto LABEL_147;
          }
          v639 = *(_QWORD *)(a3 + 8);
        }
        *(_QWORD *)(v8 + 8) = v639 + 8;
        goto LABEL_147;
      case 66LL:
        v317 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v561 = *(_QWORD *)(a3 + 8) + 8LL;
        }
        else
        {
          *(_DWORD *)a3 = v317 + 8;
          if ( v317 + 8 <= 0x2F )
          {
            *(_DWORD *)a3 = v317 + 16;
            goto LABEL_142;
          }
          v561 = *(_QWORD *)(a3 + 8);
        }
        *(_QWORD *)(v8 + 8) = v561 + 8;
        goto LABEL_142;
      case 67LL:
        v307 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v556 = *(__int64 **)(a3 + 8);
          v557 = v556 + 1;
          *(_QWORD *)(v8 + 8) = v556 + 1;
          v310 = *v556;
        }
        else
        {
          v308 = *(_QWORD *)(a3 + 16);
          v309 = v307 + 8;
          *(_DWORD *)v8 = v309;
          v310 = *(_QWORD *)(v308 + v307);
          if ( (unsigned int)v309 <= 0x2F )
          {
            v311 = v307 + 16;
            *(_DWORD *)v8 = v311;
            v312 = *(_QWORD *)(v308 + v309);
            if ( (unsigned int)v311 <= 0x2F )
            {
              v313 = v307 + 24;
              *(_DWORD *)v8 = v313;
              v314 = *(_DWORD *)(v308 + v311) != 0;
              if ( (unsigned int)v313 <= 0x2F )
              {
                v315 = (_QWORD **)(v313 + v308);
                *(_DWORD *)v8 = v307 + 32;
                goto LABEL_325;
              }
              v315 = *(_QWORD ***)(v8 + 8);
LABEL_592:
              *(_QWORD *)(v8 + 8) = v315 + 1;
LABEL_325:
              v316 = *v315;
              if ( (unsigned __int8)segtype() == 2 )
              {
                if ( v310 != -1 )
                {
                  v657 = get_flags_ex(v310, 4);
                  if ( (~(_WORD)v657 & 0x600) == 0
                    && (v657 & 0xF000000) == 0x5000000
                    && (unsigned __int8)get_refinfo()
                    && s1[1] == (void *)v312 )
                  {
                    return -1;
                  }
                  *v316 &= ~1uLL;
                  return v314
                      && (get_flags_ex(v312 & 0xFFFFFFFFFFFFFFFELL, 4) & 0x600) == 0
                      && sub_33E80(a1, v310, v312, 1);
                }
                *v316 &= ~1uLL;
                if ( v314 )
                {
                  if ( (get_flags_ex(v312 & 0xFFFFFFFFFFFFFFFELL, 4) & 0x600) == 0 && sub_33E80(a1, -1, v312, 0) )
                    return 1;
LABEL_328:
                  if ( (unsigned __int8)is_loaded() && (get_flags_ex(v312, 4) & 0x600) == 0 )
                    return (unsigned __int8)sub_36530(a1, v312);
                }
              }
              else if ( v310 == -1 && v314 )
              {
                goto LABEL_328;
              }
              return 0;
            }
            v558 = *(_DWORD **)(v8 + 8);
LABEL_591:
            v315 = (_QWORD **)(v558 + 2);
            *(_QWORD *)(v8 + 8) = v558 + 2;
            v314 = *v558 != 0;
            goto LABEL_592;
          }
          v557 = *(__int64 **)(v8 + 8);
        }
        v558 = v557 + 1;
        *(_QWORD *)(v8 + 8) = v557 + 1;
        v312 = *v557;
        goto LABEL_591;
      case 72LL:
        v295 = *(_DWORD *)a3;
        if ( v295 > 0x2F )
        {
          v559 = *(__int64 **)(v8 + 8);
          v560 = v559 + 1;
          *(_QWORD *)(v8 + 8) = v559 + 1;
          v298 = *v559;
        }
        else
        {
          v296 = *(_QWORD *)(v8 + 16);
          v297 = v295 + 8;
          *(_DWORD *)v8 = v297;
          v298 = *(_QWORD *)(v296 + v295);
          if ( (unsigned int)v297 <= 0x2F )
          {
            v299 = v295 + 16;
            *(_DWORD *)v8 = v299;
            v300 = *(_QWORD *)(v296 + v297);
            if ( (unsigned int)v299 <= 0x2F )
            {
              v301 = (__int64 **)(v299 + v296);
              *(_DWORD *)v8 = v295 + 24;
              goto LABEL_308;
            }
            v301 = *(__int64 ***)(v8 + 8);
LABEL_595:
            *(_QWORD *)(v8 + 8) = v301 + 1;
LABEL_308:
            if ( *(_BYTE *)(v298 + 6) > 7u )
            {
              v302 = **v301 + (*(int *)(v300 + 24) & 0xFFFFFFFFFFFFFFFELL);
              **v301 = v302;
              v303 = *(_DWORD *)(v300 + 24) & 1;
              if ( v303 != get_sreg(v302, 20) )
              {
                v679 = -1;
                v304 = &v682;
                v678 = -1;
                v680 = 0;
                v681 = 0;
                do
                {
                  *(_WORD *)v304 = 0;
                  v304 += 5;
                  *((_WORD *)v304 - 19) = 0;
                  *((_WORD *)v304 - 18) = 0;
                  *((_DWORD *)v304 - 2) = 0;
                  *((_WORD *)v304 - 17) = 0;
                  *((_OWORD *)v304 - 2) = 0;
                  *(v304 - 2) = 0;
                }
                while ( v304 != (__int64 *)&v702 );
                v305 = -1;
                while ( (int)decode_insn() > 0 )
                {
                  item_end = get_item_end();
                  if ( (unsigned __int8)is_basic_block_end() )
                    goto LABEL_317;
                  v305 = item_end;
                }
                item_end = v305;
LABEL_317:
                if ( item_end != -1 )
                  del_items();
                sub_23880();
              }
              return 1;
            }
            return 0;
          }
          v560 = *(_QWORD **)(v8 + 8);
        }
        v301 = (__int64 **)(v560 + 1);
        *(_QWORD *)(v8 + 8) = v560 + 1;
        v300 = *v560;
        goto LABEL_595;
      case 80LL:
        v324 = *(_DWORD *)a3;
        if ( v324 > 0x2F )
        {
          v325 = *(__int64 **)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v325 + 1;
        }
        else
        {
          v325 = (__int64 *)(*(_QWORD *)(v8 + 16) + v324);
          *(_DWORD *)v8 = v324 + 8;
        }
        func = (_QWORD *)get_func(*v325);
        if ( func )
          sub_30260(
            a1,
            func,
            1u,
            v327,
            v328,
            v329,
            v667.m128i_i32[0],
            v667.m128i_i64[1],
            v668.m128i_i64[0],
            v668.m128i_i32[2],
            v669,
            (int)v670,
            v671,
            v672,
            (int)s1[0],
            (int)s1[1],
            (int)s1[2],
            v674,
            *(int *)v675,
            *(int *)&v675[8],
            *(int *)&v675[16],
            v677,
            v678,
            SDWORD2(v678),
            v679,
            v680,
            v681,
            v682,
            v683,
            v684,
            v685,
            v686,
            v687,
            v688,
            v689,
            v690,
            v691,
            v692,
            v693,
            v694,
            v695,
            v696,
            v697,
            v698,
            v699,
            v700,
            v701);
        return 1;
      case 81LL:
        v319 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v540 = *(__int64 ***)(a3 + 8);
          v323 = (__int64 *)(v540 + 1);
          *(_QWORD *)(v8 + 8) = v540 + 1;
          v322 = *v540;
        }
        else
        {
          v320 = *(_QWORD *)(a3 + 16);
          v321 = v319 + 8;
          *(_DWORD *)v8 = v321;
          v322 = *(__int64 **)(v320 + v319);
          if ( (unsigned int)v321 <= 0x2F )
          {
            v323 = (__int64 *)(v321 + v320);
            *(_DWORD *)v8 = v319 + 16;
            return (unsigned __int8)sub_30100(a1, v322, *v323);
          }
          v323 = *(__int64 **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v323 + 1;
        return (unsigned __int8)sub_30100(a1, v322, *v323);
      case 82LL:
        v159 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v582 = *(__int64 ***)(a3 + 8);
          v583 = v582 + 1;
          *(_QWORD *)(v8 + 8) = v582 + 1;
          v162 = *v582;
        }
        else
        {
          v160 = *(_QWORD *)(a3 + 16);
          v161 = v159 + 8;
          *(_DWORD *)v8 = v161;
          v162 = *(__int64 **)(v160 + v159);
          if ( (unsigned int)v161 <= 0x2F )
          {
            v163 = v159 + 16;
            *(_DWORD *)v8 = v163;
            v164 = *(_QWORD **)(v160 + v161);
            if ( (unsigned int)v163 <= 0x2F )
            {
              v165 = (__int64 *)(v163 + v160);
              *(_DWORD *)v8 = v159 + 24;
              return sub_383C0(v162, v164, *v165);
            }
            v165 = *(__int64 **)(v8 + 8);
LABEL_633:
            *(_QWORD *)(v8 + 8) = v165 + 1;
            return sub_383C0(v162, v164, *v165);
          }
          v583 = *(_QWORD ***)(v8 + 8);
        }
        v165 = (__int64 *)(v583 + 1);
        *(_QWORD *)(v8 + 8) = v583 + 1;
        v164 = *v583;
        goto LABEL_633;
      case 84LL:
        v151 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v574 = *(__int64 **)(a3 + 8);
          v575 = v574 + 1;
          *(_QWORD *)(v8 + 8) = v574 + 1;
          v154 = *v574;
        }
        else
        {
          v152 = *(_QWORD *)(a3 + 16);
          v153 = v151 + 8;
          *(_DWORD *)v8 = v153;
          v154 = *(_QWORD *)(v152 + v151);
          if ( (unsigned int)v153 <= 0x2F )
          {
            v155 = v151 + 16;
            *(_DWORD *)v8 = v155;
            v156 = *(_QWORD *)(v152 + v153);
            if ( (unsigned int)v155 <= 0x2F )
            {
              v157 = (int *)(v155 + v152);
              *(_DWORD *)v8 = v151 + 24;
              goto LABEL_156;
            }
            v157 = *(int **)(v8 + 8);
LABEL_620:
            *(_QWORD *)(v8 + 8) = v157 + 2;
LABEL_156:
            v158 = *v157;
            if ( (unsigned int)v158 > 4 || !(unsigned __int8)sub_839C0(a1, v154, v156, v156 + 8 * (5 * v158 + 5), 0) )
              return -1;
            return 1;
          }
          v575 = *(_QWORD **)(v8 + 8);
        }
        v157 = (int *)(v575 + 1);
        *(_QWORD *)(v8 + 8) = v575 + 1;
        v156 = *v575;
        goto LABEL_620;
      case 86LL:
        invalidate_regfinder_cache();
        sub_42ED0(*(_QWORD **)(a1 + 584));
        *(_QWORD *)(a1 + 584) = 0;
        *(_QWORD *)(a1 + 592) = a1 + 576;
        *(_QWORD *)(a1 + 600) = a1 + 576;
        *(_QWORD *)(a1 + 608) = 0;
        sub_21940((_QWORD *)a1, a7);
        v9 = *(_QWORD *)(a1 + 16);
        if ( !getinf_buf() )
          s[0] = 0;
        memset(s1, 0, sizeof(s1));
        v10 = strlen(s);
        v11 = (void *)(v10 + 1);
        v12 = v10;
        s1[0] = (void *)qvector_reserve((__int64)s1, 0, v10 + 1, 1);
        s1[1] = v11;
        memmove(s1[0], s, v12);
        *((_BYTE *)s1[0] + v12) = 0;
        v13 = *(_BYTE ***)(v9 + 24);
        v14 = *v13;
        if ( !*v13 )
          goto LABEL_819;
        v15 = s1[0];
        v16 = &::s1;
        if ( s1[1] )
          v16 = (const char *)s1[0];
        v17 = 0;
        do
        {
          if ( !strcmp(v16, &v14[*v14 == 45]) )
          {
            if ( v15 )
            {
              s1[1] = 0;
              qfree((__int64)v15);
            }
            setinf_flag();
LABEL_15:
            sub_47270(a1);
            sub_445D0(a1, 0);
            return 0;
          }
          v14 = v13[++v17];
        }
        while ( v14 );
LABEL_819:
        if ( under_debugger )
          BUG();
        v8 = interr(10336);
LABEL_821:
        v465 = *(unsigned int **)(v8 + 8);
LABEL_644:
        *(_QWORD *)(v8 + 8) = v465 + 2;
        goto LABEL_475;
      case 87LL:
        v441 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v634 = *(_QWORD **)(a3 + 8);
          v635 = v634 + 1;
          *(_QWORD *)(v8 + 8) = v634 + 1;
          v443 = *v634 & 0xFFFFFFFFFFFFFFFELL;
        }
        else
        {
          v442 = *(_QWORD *)(a3 + 16);
          *(_DWORD *)v8 = v441 + 8;
          v443 = *(_QWORD *)(v442 + v441) & 0xFFFFFFFFFFFFFFFELL;
          if ( v441 + 8 <= 0x2F )
          {
            *(_DWORD *)v8 = v441 + 16;
            goto LABEL_453;
          }
          v635 = *(_QWORD **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v635 + 1;
LABEL_453:
        if ( !(unsigned __int8)sub_55C30(v443) )
          goto LABEL_559;
        return 0;
      case 88LL:
        goto LABEL_46;
      case 91LL:
        v453 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v637 = *(__int64 **)(a3 + 8);
          v457 = v637 + 1;
          *(_QWORD *)(v8 + 8) = v637 + 1;
          v456 = *v637;
        }
        else
        {
          v454 = *(_QWORD *)(a3 + 16);
          v455 = v453 + 8;
          *(_DWORD *)v8 = v455;
          v456 = *(_QWORD *)(v454 + v453);
          if ( (unsigned int)v455 <= 0x2F )
          {
            v457 = (__int64 *)(v455 + v454);
            *(_DWORD *)v8 = v453 + 16;
            goto LABEL_469;
          }
          v457 = *(__int64 **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v457 + 1;
LABEL_469:
        v458 = *v457;
        if ( !v456 )
          return -1;
        sub_372A0(a1, v456, v458);
        return 1;
      case 92LL:
        v448 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v636 = *(_DWORD ***)(a3 + 8);
          v452 = (__int64 *)(v636 + 1);
          *(_QWORD *)(v8 + 8) = v636 + 1;
          v451 = *v636;
        }
        else
        {
          v449 = *(_QWORD *)(a3 + 16);
          v450 = v448 + 8;
          *(_DWORD *)v8 = v450;
          v451 = *(_DWORD **)(v449 + v448);
          if ( (unsigned int)v450 <= 0x2F )
          {
            v452 = (__int64 *)(v450 + v449);
            *(_DWORD *)v8 = v448 + 16;
            goto LABEL_464;
          }
          v452 = *(__int64 **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v452 + 1;
LABEL_464:
        LODWORD(result) = sub_37C40(a1, *v452, v451);
        if ( !(_DWORD)result )
          return -1;
        return (int)result;
      case 93LL:
        v444 = *(_DWORD *)a3;
        if ( v444 > 0x2F )
        {
          v584 = *(_QWORD **)(v8 + 8);
          v447 = v584 + 1;
          *(_QWORD *)(v8 + 8) = v584 + 1;
          if ( *v584 != 0x45485F5041525345LL )
            return 0;
        }
        else
        {
          v445 = *(_QWORD *)(v8 + 16);
          v446 = v444 + 8;
          *(_DWORD *)v8 = v446;
          if ( *(_QWORD *)(v445 + v444) != 0x45485F5041525345LL )
            return 0;
          if ( (unsigned int)v446 <= 0x2F )
          {
            v447 = (_QWORD *)(v446 + v445);
            *(_DWORD *)v8 = v444 + 16;
            goto LABEL_459;
          }
          v447 = *(_QWORD **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v447 + 1;
LABEL_459:
        if ( *v447 )
          *(_QWORD *)(a1 + 168) = *v447;
        return 0;
      case 94LL:
        v285 = *(_DWORD *)a3;
        if ( v285 > 0x2F )
        {
          v286 = *(_QWORD **)(v8 + 8);
          *(_QWORD *)(v8 + 8) = v286 + 1;
        }
        else
        {
          v286 = (_QWORD *)(*(_QWORD *)(v8 + 16) + v285);
          *(_DWORD *)v8 = v285 + 8;
        }
        sub_61450(*v286);
        return 0;
      case 95LL:
        netnode_check();
        return 0;
      case 96LL:
        v225 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v551 = *(__int64 **)(a3 + 8);
          v552 = v551 + 1;
          *(_QWORD *)(v8 + 8) = v551 + 1;
          v228 = *v551;
        }
        else
        {
          v226 = *(_QWORD *)(a3 + 16);
          v227 = v225 + 8;
          *(_DWORD *)v8 = v227;
          v228 = *(_QWORD *)(v226 + v225);
          if ( (unsigned int)v227 <= 0x2F )
          {
            v229 = v225 + 16;
            *(_DWORD *)v8 = v229;
            v230 = *(_DWORD *)(v226 + v227);
            if ( (unsigned int)v229 <= 0x2F )
            {
              v231 = v225 + 24;
              *(_DWORD *)v8 = v231;
              v232 = *(_QWORD *)(v226 + v229);
              if ( (unsigned int)v231 <= 0x2F )
              {
                v233 = v225 + 32;
                *(_DWORD *)v8 = v233;
                v234 = *(unsigned int **)(v226 + v231);
                if ( (unsigned int)v233 <= 0x2F )
                {
                  v235 = v225 + 40;
                  *(_DWORD *)v8 = v235;
                  v236 = *(_DWORD *)(v226 + v233);
                  if ( (unsigned int)v235 <= 0x2F )
                  {
                    v237 = (__int64 **)(v235 + v226);
                    *(_DWORD *)v8 = v225 + 48;
                    return (int)sub_1CDE0(a1, *v237, v228, v230, v232, v234, v236);
                  }
                  v237 = *(__int64 ***)(v8 + 8);
LABEL_583:
                  *(_QWORD *)(v8 + 8) = v237 + 1;
                  return (int)sub_1CDE0(a1, *v237, v228, v230, v232, v234, v236);
                }
                v555 = *(_DWORD **)(v8 + 8);
LABEL_582:
                v237 = (__int64 **)(v555 + 2);
                *(_QWORD *)(v8 + 8) = v555 + 2;
                v236 = *v555;
                goto LABEL_583;
              }
              v554 = *(unsigned int ***)(v8 + 8);
LABEL_581:
              v555 = v554 + 1;
              *(_QWORD *)(v8 + 8) = v554 + 1;
              v234 = *v554;
              goto LABEL_582;
            }
            v553 = *(__int64 **)(v8 + 8);
LABEL_580:
            v554 = (unsigned int **)(v553 + 1);
            *(_QWORD *)(v8 + 8) = v553 + 1;
            v232 = *v553;
            goto LABEL_581;
          }
          v552 = *(_DWORD **)(v8 + 8);
        }
        v553 = (__int64 *)(v552 + 2);
        *(_QWORD *)(v8 + 8) = v552 + 2;
        v230 = *v552;
        goto LABEL_580;
      case 98LL:
        return *(_QWORD *)(a1 + 616);
      case 100LL:
        v217 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v578 = *(int ***)(a3 + 8);
          v221 = v578 + 1;
          *(_QWORD *)(v8 + 8) = v578 + 1;
          v220 = *v578;
        }
        else
        {
          v218 = *(_QWORD *)(a3 + 16);
          v219 = v217 + 8;
          *(_DWORD *)v8 = v219;
          v220 = *(int **)(v218 + v217);
          if ( (unsigned int)v219 <= 0x2F )
          {
            v221 = (_DWORD **)(v219 + v218);
            *(_DWORD *)v8 = v217 + 16;
            goto LABEL_222;
          }
          v221 = *(_DWORD ***)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v221 + 1;
LABEL_222:
        v222 = *v221;
        v223 = *((_WORD *)*v221 + 12);
        if ( v223 == 12 )
        {
          v224 = 2;
        }
        else
        {
          if ( v223 != 14 )
            return 0;
          v224 = 0;
        }
        *v220 = v224;
        if ( *((_BYTE *)v222 + 121) == 5 )
          return 3;
        else
          return 2LL * (*((_BYTE *)v222 + 81) == 5);
      default:
        return 0;
    }
  }
  if ( a2 <= 2020 )
  {
    if ( a2 > 2000 )
    {
      switch ( a2 )
      {
        case 2001LL:
          v502 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v646 = *(__int64 ***)(a3 + 8);
            v647 = v646 + 1;
            *(_QWORD *)(v8 + 8) = v646 + 1;
            v505 = *v646;
          }
          else
          {
            v503 = *(_QWORD *)(a3 + 16);
            v504 = v502 + 8;
            *(_DWORD *)v8 = v504;
            v505 = *(__int64 **)(v503 + v502);
            if ( (unsigned int)v504 <= 0x2F )
            {
              v506 = v502 + 16;
              *(_DWORD *)v8 = v506;
              v507 = *(__int64 **)(v503 + v504);
              if ( (unsigned int)v506 <= 0x2F )
              {
                v508 = (unsigned __int8 *)(v506 + v503);
                *(_DWORD *)v8 = v502 + 24;
                goto LABEL_518;
              }
              v508 = *(unsigned __int8 **)(v8 + 8);
LABEL_756:
              *(_QWORD *)(v8 + 8) = v508 + 8;
LABEL_518:
              sub_43D80(a1, v505, v507, *v508, (__int64)v505, a6);
              return 1;
            }
            v647 = *(__int64 ***)(v8 + 8);
          }
          v508 = (unsigned __int8 *)(v647 + 1);
          *(_QWORD *)(v8 + 8) = v647 + 1;
          v507 = *v647;
          goto LABEL_756;
        case 2004LL:
          v531 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v569 = *(_QWORD **)(a3 + 8);
            v535 = (unsigned int *)(v569 + 1);
            *(_QWORD *)(v8 + 8) = v569 + 1;
            v534 = *v569;
          }
          else
          {
            v532 = *(_QWORD *)(a3 + 16);
            v533 = v531 + 8;
            *(_DWORD *)v8 = v533;
            v534 = *(_QWORD *)(v532 + v531);
            if ( (unsigned int)v533 <= 0x2F )
            {
              v535 = (unsigned int *)(v533 + v532);
              *(_DWORD *)v8 = v531 + 16;
              return (unsigned __int8)sub_78800(a1, v534, *v535);
            }
            v535 = *(unsigned int **)(v8 + 8);
          }
          *(_QWORD *)(v8 + 8) = v535 + 2;
          return (unsigned __int8)sub_78800(a1, v534, *v535);
        case 2005LL:
          v493 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v587 = *(__int64 **)(a3 + 8);
            v588 = v587 + 1;
            *(_QWORD *)(v8 + 8) = v587 + 1;
            v496 = *v587;
          }
          else
          {
            v494 = *(_QWORD *)(a3 + 16);
            v495 = v493 + 8;
            *(_DWORD *)v8 = v495;
            v496 = *(_QWORD *)(v494 + v493);
            if ( (unsigned int)v495 <= 0x2F )
            {
              v497 = v493 + 16;
              *(_DWORD *)v8 = v497;
              v498 = *(_QWORD *)(v494 + v495);
              if ( (unsigned int)v497 <= 0x2F )
              {
                v499 = v493 + 24;
                *(_DWORD *)v8 = v499;
                v500 = *(_QWORD *)(v494 + v497);
                if ( (unsigned int)v499 <= 0x2F )
                {
                  v501 = (_DWORD *)(v499 + v494);
                  *(_DWORD *)v8 = v493 + 32;
                  return (int)sub_7D180(a1, v496, v498, v500, *v501 != 0);
                }
                v501 = *(_DWORD **)(v8 + 8);
LABEL_650:
                *(_QWORD *)(v8 + 8) = v501 + 2;
                return (int)sub_7D180(a1, v496, v498, v500, *v501 != 0);
              }
              v589 = *(_QWORD **)(v8 + 8);
LABEL_649:
              v501 = v589 + 1;
              *(_QWORD *)(v8 + 8) = v589 + 1;
              v500 = *v589;
              goto LABEL_650;
            }
            v588 = *(__int64 **)(v8 + 8);
          }
          v589 = v588 + 1;
          *(_QWORD *)(v8 + 8) = v588 + 1;
          v498 = *v588;
          goto LABEL_649;
        case 2008LL:
          v479 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v631 = *(__int64 **)(a3 + 8);
            v632 = v631 + 1;
            *(_QWORD *)(v8 + 8) = v631 + 1;
            v482 = *v631;
          }
          else
          {
            v480 = *(_QWORD *)(a3 + 16);
            v481 = v479 + 8;
            *(_DWORD *)v8 = v481;
            v482 = *(_QWORD *)(v480 + v479);
            if ( (unsigned int)v481 <= 0x2F )
            {
              v483 = v479 + 16;
              *(_DWORD *)v8 = v483;
              v484 = *(_QWORD *)(v480 + v481);
              if ( (unsigned int)v483 <= 0x2F )
              {
                v485 = (_DWORD *)(v483 + v480);
                *(_DWORD *)v8 = v479 + 24;
                goto LABEL_500;
              }
              v485 = *(_DWORD **)(v8 + 8);
LABEL_733:
              *(_QWORD *)(v8 + 8) = v485 + 2;
LABEL_500:
              if ( !(unsigned __int8)sub_7DEC0(
                                       a1,
                                       v482,
                                       v484,
                                       *v485,
                                       v482,
                                       a6,
                                       v667.m128i_i32[0],
                                       v667.m128i_i32[2],
                                       v668.m128i_i32[0],
                                       v668.m128i_i32[2],
                                       v669,
                                       (_DWORD)v670,
                                       v671,
                                       v672,
                                       s1[0],
                                       s1[1],
                                       s1[2],
                                       v674,
                                       *(_DWORD *)v675,
                                       *(_DWORD *)&v675[8],
                                       *(_DWORD *)&v675[16],
                                       v677,
                                       v678,
                                       DWORD2(v678),
                                       v679,
                                       v680,
                                       v681) )
                return -1;
              return 1;
            }
            v632 = *(_QWORD **)(v8 + 8);
          }
          v485 = v632 + 1;
          *(_QWORD *)(v8 + 8) = v632 + 1;
          v484 = *v632;
          goto LABEL_733;
        case 2009LL:
          v474 = *(_DWORD *)a3;
          if ( v474 > 0x2F )
          {
            v475 = *(__int64 **)(v8 + 8);
            *(_QWORD *)(v8 + 8) = v475 + 1;
          }
          else
          {
            v475 = (__int64 *)(*(_QWORD *)(v8 + 16) + v474);
            *(_DWORD *)v8 = v474 + 8;
          }
          v476 = *v475;
          v477 = *(_BYTE *)(*v475 + 88);
          v478 = v477 & 0xF0;
          if ( (v477 & 0xF0) == 0xC0 )
            v478 = *(_DWORD *)(v476 + 28);
          if ( v478 <= 0x10 )
            v478 = getinf(99);
          if ( v478 == 144 )
            return 0;
          if ( !(unsigned __int8)sub_80000(a1, v476) )
            return -1;
          return 1;
        case 2010LL:
          v467 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v562 = *(__int64 **)(a3 + 8);
            v563 = v562 + 1;
            *(_QWORD *)(v8 + 8) = v562 + 1;
            v470 = *v562;
          }
          else
          {
            v468 = *(_QWORD *)(a3 + 16);
            v469 = v467 + 8;
            *(_DWORD *)v8 = v469;
            v470 = *(_QWORD *)(v468 + v467);
            if ( (unsigned int)v469 <= 0x2F )
            {
              *(_DWORD *)v8 = v467 + 16;
              v471 = *(_QWORD *)(v468 + v469);
              if ( v467 + 16 <= 0x2F )
              {
                v472 = v467 + 24;
                *(_DWORD *)v8 = v472;
                if ( (unsigned int)v472 <= 0x2F )
                {
                  v473 = (unsigned int *)(v472 + v468);
                  *(_DWORD *)v8 = v467 + 32;
                  goto LABEL_485;
                }
                v473 = *(unsigned int **)(v8 + 8);
LABEL_601:
                *(_QWORD *)(v8 + 8) = v473 + 2;
LABEL_485:
                if ( !(unsigned __int8)sub_80010(a1, v470, v471, *v473) )
                  return -1;
                return 1;
              }
              v564 = *(_QWORD **)(v8 + 8);
LABEL_600:
              v473 = (unsigned int *)(v564 + 1);
              goto LABEL_601;
            }
            v563 = *(__int64 **)(v8 + 8);
          }
          v564 = v563 + 1;
          *(_QWORD *)(v8 + 8) = v563 + 1;
          v471 = *v563;
          goto LABEL_600;
        case 2011LL:
          v459 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v585 = *(_QWORD **)(a3 + 8);
            v586 = (_BYTE **)(v585 + 1);
            *(_QWORD *)(v8 + 8) = v585 + 1;
            v462 = *v585;
          }
          else
          {
            v460 = *(_QWORD *)(a3 + 16);
            v461 = v459 + 8;
            *(_DWORD *)v8 = v461;
            v462 = *(_QWORD *)(v460 + v459);
            if ( (unsigned int)v461 <= 0x2F )
            {
              v463 = v459 + 16;
              *(_DWORD *)v8 = v463;
              v464 = *(_BYTE **)(v460 + v461);
              if ( (unsigned int)v463 > 0x2F )
                goto LABEL_821;
              v465 = (unsigned int *)(v463 + v460);
              *(_DWORD *)v8 = v459 + 24;
LABEL_475:
              v466 = *v465;
              if ( v464 && !*v464 )
                v464 = 0;
              if ( !(unsigned __int8)sub_7A320(a1, v462, v464, v466) )
                return -1;
              return 1;
            }
            v586 = *(_BYTE ***)(v8 + 8);
          }
          v465 = (unsigned int *)(v586 + 1);
          *(_QWORD *)(v8 + 8) = v586 + 1;
          v464 = *v586;
          goto LABEL_644;
        case 2012LL:
          v523 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v595 = *(__int64 **)(a3 + 8);
            v527 = v595 + 1;
            *(_QWORD *)(v8 + 8) = v595 + 1;
            v526 = *v595;
          }
          else
          {
            v524 = *(_QWORD *)(a3 + 16);
            v525 = v523 + 8;
            *(_DWORD *)v8 = v525;
            v526 = *(_QWORD *)(v524 + v523);
            if ( (unsigned int)v525 <= 0x2F )
            {
              v527 = (_QWORD *)(v525 + v524);
              *(_DWORD *)v8 = v523 + 16;
              goto LABEL_532;
            }
            v527 = *(_QWORD **)(v8 + 8);
          }
          *(_QWORD *)(v8 + 8) = v527 + 1;
LABEL_532:
          v528 = *v527;
          v529 = *(_BYTE *)(*v527 + 88LL);
          v530 = v529 & 0xF0;
          if ( (v529 & 0xF0) == 0xC0 )
            v530 = *(_DWORD *)(v528 + 28);
          if ( v530 <= 0x10 )
            v530 = getinf(99);
          if ( v530 == 144 )
            return 0;
          sub_7AAA0(a1, v526, v528);
          return 1;
        case 2015LL:
          v516 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v590 = *(_DWORD ***)(a3 + 8);
            v591 = (__int64 *)(v590 + 1);
            *(_QWORD *)(v8 + 8) = v590 + 1;
            v519 = *v590;
          }
          else
          {
            v517 = *(_QWORD *)(a3 + 16);
            v518 = v516 + 8;
            *(_DWORD *)v8 = v518;
            v519 = *(_DWORD **)(v517 + v516);
            if ( (unsigned int)v518 <= 0x2F )
            {
              v520 = v516 + 16;
              *(_DWORD *)v8 = v520;
              v521 = *(_QWORD *)(v517 + v518);
              if ( (unsigned int)v520 <= 0x2F )
              {
                v522 = (_QWORD *)(v520 + v517);
                *(_DWORD *)v8 = v516 + 24;
                goto LABEL_528;
              }
              v522 = *(_QWORD **)(v8 + 8);
LABEL_653:
              *(_QWORD *)(v8 + 8) = v522 + 1;
LABEL_528:
              *v519 = sub_7B2C0(a1, v521, *v522);
              return 1;
            }
            v591 = *(__int64 **)(v8 + 8);
          }
          v522 = v591 + 1;
          *(_QWORD *)(v8 + 8) = v591 + 1;
          v521 = *v591;
          goto LABEL_653;
        case 2016LL:
          v509 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v593 = *(__int64 **)(a3 + 8);
            v594 = v593 + 1;
            *(_QWORD *)(v8 + 8) = v593 + 1;
            v512 = *v593;
          }
          else
          {
            v510 = *(_QWORD *)(a3 + 16);
            v511 = v509 + 8;
            *(_DWORD *)v8 = v511;
            v512 = *(_QWORD *)(v510 + v509);
            if ( (unsigned int)v511 <= 0x2F )
            {
              v513 = v509 + 16;
              *(_DWORD *)v8 = v513;
              v514 = *(_QWORD *)(v510 + v511);
              if ( (unsigned int)v513 <= 0x2F )
              {
                v515 = (_QWORD *)(v513 + v510);
                *(_DWORD *)v8 = v509 + 24;
                goto LABEL_523;
              }
              v515 = *(_QWORD **)(v8 + 8);
LABEL_658:
              *(_QWORD *)(v8 + 8) = v515 + 1;
LABEL_523:
              sub_7C0A0(a1, v512, v514, *v515);
              return 1;
            }
            v594 = *(__int64 **)(v8 + 8);
          }
          v515 = v594 + 1;
          *(_QWORD *)(v8 + 8) = v594 + 1;
          v514 = *v594;
          goto LABEL_658;
        case 2019LL:
LABEL_302:
          if ( !(unsigned __int8)sub_557D0(
                                   (int)a1 + 192,
                                   a1,
                                   a3,
                                   a4,
                                   a5,
                                   a6,
                                   v667.m128i_i32[0],
                                   v667.m128i_i32[2],
                                   v668.m128i_i32[0],
                                   v668.m128i_i32[2],
                                   v669,
                                   (__int64)v670,
                                   v671,
                                   v672,
                                   (__int64)s1[0]) )
            sub_45D00(a1);
          return 0;
        case 2020LL:
          v486 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v565 = *(_QWORD **)(a3 + 8);
            v491 = (int *)(v565 + 1);
            *(_QWORD *)(v8 + 8) = v565 + 1;
            v489 = *v565;
          }
          else
          {
            v487 = *(_QWORD *)(a3 + 16);
            v488 = v486 + 8;
            *(_DWORD *)v8 = v488;
            v489 = *(_QWORD *)(v487 + v486);
            if ( (unsigned int)v488 <= 0x2F )
            {
              v490 = v486 + 16;
              v491 = (int *)(v488 + v487);
              *(_DWORD *)v8 = v490;
              goto LABEL_505;
            }
            v491 = *(int **)(v8 + 8);
          }
          v490 = (__int64)(v491 + 2);
          *(_QWORD *)(v8 + 8) = v491 + 2;
LABEL_505:
          v492 = *v491;
          if ( *v491 == 176 || (v491 = 0, v492 == 256) )
          {
            if ( (unsigned __int8)getinf_flag(
                                    3,
                                    4,
                                    (__int64)v491,
                                    v490,
                                    a5,
                                    a6,
                                    v667.m128i_i64[0],
                                    v667.m128i_i64[1],
                                    v668.m128i_i64[0])
              || (v666 = getinf(3), v491 = (_DWORD *)&byte_4, (v666 & 0x1006) == 0x1002) )
            {
              v491 = (_DWORD *)&byte_8;
            }
          }
          *(_QWORD *)(v489 + 8) = v491;
          return 1;
        default:
          return 0;
      }
    }
    switch ( a2 )
    {
      case 1000LL:
        v103 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v627 = *(_QWORD ***)(a3 + 8);
          v628 = (__int64 *)(v627 + 1);
          *(_QWORD *)(v8 + 8) = v627 + 1;
          v106 = *v627;
        }
        else
        {
          v104 = *(_QWORD *)(a3 + 16);
          v105 = v103 + 8;
          *(_DWORD *)v8 = v105;
          v106 = *(unsigned __int64 **)(v104 + v103);
          if ( (unsigned int)v105 <= 0x2F )
          {
            v107 = v103 + 16;
            *(_DWORD *)v8 = v107;
            v108 = *(_QWORD *)(v104 + v105);
            if ( (unsigned int)v107 <= 0x2F )
            {
              v109 = v103 + 24;
              *(_DWORD *)v8 = v109;
              v110 = *(_DWORD *)(v104 + v107);
              if ( (unsigned int)v109 <= 0x2F )
              {
                v111 = v103 + 32;
                *(_DWORD *)v8 = v111;
                v112 = *(__int64 (__fastcall **)(char *, __int64))(v104 + v109);
                if ( (unsigned int)v111 <= 0x2F )
                {
                  v113 = (__int64 *)(v111 + v104);
                  *(_DWORD *)v8 = v103 + 40;
                  goto LABEL_115;
                }
                v113 = *(__int64 **)(v8 + 8);
LABEL_730:
                *(_QWORD *)(v8 + 8) = v113 + 1;
LABEL_115:
                *v106 = sub_30A00((_DWORD *)a1, v108, v110, v112, *v113);
                return 1;
              }
              v630 = *(__int64 (__fastcall ***)(char *, __int64))(v8 + 8);
LABEL_729:
              v113 = (__int64 *)(v630 + 1);
              *(_QWORD *)(v8 + 8) = v630 + 1;
              v112 = *v630;
              goto LABEL_730;
            }
            v629 = *(_DWORD **)(v8 + 8);
LABEL_728:
            v630 = (__int64 (__fastcall **)(char *, __int64))(v629 + 2);
            *(_QWORD *)(v8 + 8) = v629 + 2;
            v110 = *v629;
            goto LABEL_729;
          }
          v628 = *(__int64 **)(v8 + 8);
        }
        v629 = v628 + 1;
        *(_QWORD *)(v8 + 8) = v628 + 1;
        v108 = *v628;
        goto LABEL_728;
      case 1001LL:
        v98 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v624 = *(_QWORD ***)(a3 + 8);
          v102 = (__int64 *)(v624 + 1);
          *(_QWORD *)(v8 + 8) = v624 + 1;
          v101 = *v624;
        }
        else
        {
          v99 = *(_QWORD *)(a3 + 16);
          v100 = v98 + 8;
          *(_DWORD *)v8 = v100;
          v101 = *(__int64 **)(v99 + v98);
          if ( (unsigned int)v100 <= 0x2F )
          {
            v102 = (__int64 *)(v100 + v99);
            *(_DWORD *)v8 = v98 + 16;
            goto LABEL_108;
          }
          v102 = *(__int64 **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v102 + 1;
LABEL_108:
        *v101 = sub_30340(*v102);
        return 1;
      case 1002LL:
        v91 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v621 = *(__int64 ***)(a3 + 8);
          v622 = (__int64 *)(v621 + 1);
          *(_QWORD *)(v8 + 8) = v621 + 1;
          v94 = *v621;
        }
        else
        {
          v92 = *(_QWORD *)(a3 + 16);
          v93 = v91 + 8;
          *(_DWORD *)v8 = v93;
          v94 = *(__int64 **)(v92 + v91);
          if ( (unsigned int)v93 <= 0x2F )
          {
            v95 = v91 + 16;
            *(_DWORD *)v8 = v95;
            v96 = *(_QWORD *)(v92 + v93);
            if ( (unsigned int)v95 <= 0x2F )
            {
              v97 = (_DWORD *)(v95 + v92);
              *(_DWORD *)v8 = v91 + 24;
              return (int)sub_304A0(a1, v94, v96, *v97 != 0);
            }
            v97 = *(_DWORD **)(v8 + 8);
LABEL_716:
            *(_QWORD *)(v8 + 8) = v97 + 2;
            return (int)sub_304A0(a1, v94, v96, *v97 != 0);
          }
          v622 = *(__int64 **)(v8 + 8);
        }
        v97 = v622 + 1;
        *(_QWORD *)(v8 + 8) = v622 + 1;
        v96 = *v622;
        goto LABEL_716;
      case 1003LL:
        v139 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v623 = *(_QWORD ***)(a3 + 8);
          v143 = (__int64 *)(v623 + 1);
          *(_QWORD *)(v8 + 8) = v623 + 1;
          v142 = *v623;
        }
        else
        {
          v140 = *(_QWORD *)(a3 + 16);
          v141 = v139 + 8;
          *(_DWORD *)v8 = v141;
          v142 = *(__int64 **)(v140 + v139);
          if ( (unsigned int)v141 <= 0x2F )
          {
            v143 = (__int64 *)(v141 + v140);
            *(_DWORD *)v8 = v139 + 16;
            goto LABEL_137;
          }
          v143 = *(__int64 **)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v143 + 1;
LABEL_137:
        *v142 = sub_302F0(*v143);
        return 1;
      case 1004LL:
        v121 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v592 = *(_DWORD ***)(a3 + 8);
          v125 = (_BYTE **)(v592 + 1);
          *(_QWORD *)(v8 + 8) = v592 + 1;
          v124 = *v592;
        }
        else
        {
          v122 = *(_QWORD *)(a3 + 16);
          v123 = v121 + 8;
          *(_DWORD *)v8 = v123;
          v124 = *(_DWORD **)(v122 + v121);
          if ( (unsigned int)v123 <= 0x2F )
          {
            v125 = (_BYTE **)(v123 + v122);
            *(_DWORD *)v8 = v121 + 16;
            goto LABEL_125;
          }
          v125 = *(_BYTE ***)(v8 + 8);
        }
        *(_QWORD *)(v8 + 8) = v125 + 1;
LABEL_125:
        *v124 = sub_302B0(*v125);
        return 1;
      case 1007LL:
        v126 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v546 = *(__int64 **)(a3 + 8);
          v547 = v546 + 1;
          *(_QWORD *)(v8 + 8) = v546 + 1;
          v129 = *v546;
        }
        else
        {
          v127 = *(_QWORD *)(a3 + 16);
          v128 = v126 + 8;
          *(_DWORD *)v8 = v128;
          v129 = *(_QWORD *)(v127 + v126);
          if ( (unsigned int)v128 <= 0x2F )
          {
            v130 = v126 + 16;
            *(_DWORD *)v8 = v130;
            v131 = *(_QWORD *)(v127 + v128);
            if ( (unsigned int)v130 <= 0x2F )
            {
              v132 = v126 + 24;
              *(_DWORD *)v8 = v132;
              v133 = *(_DWORD *)(v127 + v130);
              if ( (unsigned int)v132 <= 0x2F )
              {
                v134 = v126 + 32;
                *(_DWORD *)v8 = v134;
                v135 = *(unsigned int *)(v127 + v132);
                if ( (unsigned int)v134 <= 0x2F )
                {
                  v136 = v126 + 40;
                  *(_DWORD *)v8 = v136;
                  v137 = *(_QWORD *)(v127 + v134);
                  if ( (unsigned int)v136 <= 0x2F )
                  {
                    v138 = (__int64 *)(v136 + v127);
                    *(_DWORD *)v8 = v126 + 48;
                    return (unsigned __int8)sub_30880(a1, v129, v131, v133, v135, v137, *v138);
                  }
                  v138 = *(__int64 **)(v8 + 8);
LABEL_577:
                  *(_QWORD *)(v8 + 8) = v138 + 1;
                  return (unsigned __int8)sub_30880(a1, v129, v131, v133, v135, v137, *v138);
                }
                v550 = *(__int64 **)(v8 + 8);
LABEL_576:
                v138 = v550 + 1;
                *(_QWORD *)(v8 + 8) = v550 + 1;
                v137 = *v550;
                goto LABEL_577;
              }
              v549 = *(unsigned int **)(v8 + 8);
LABEL_575:
              v550 = (__int64 *)(v549 + 2);
              *(_QWORD *)(v8 + 8) = v549 + 2;
              v135 = *v549;
              goto LABEL_576;
            }
            v548 = *(unsigned int **)(v8 + 8);
LABEL_574:
            v549 = v548 + 2;
            *(_QWORD *)(v8 + 8) = v548 + 2;
            v133 = *v548;
            goto LABEL_575;
          }
          v547 = *(__int64 **)(v8 + 8);
        }
        v548 = (unsigned int *)(v547 + 1);
        *(_QWORD *)(v8 + 8) = v547 + 1;
        v131 = *v547;
        goto LABEL_574;
      case 1008LL:
        v114 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v544 = *(_QWORD ***)(a3 + 8);
          v545 = (_WORD **)(v544 + 1);
          *(_QWORD *)(v8 + 8) = v544 + 1;
          v117 = *v544;
        }
        else
        {
          v115 = *(_QWORD *)(a3 + 16);
          v116 = v114 + 8;
          *(_DWORD *)v8 = v116;
          v117 = *(_QWORD **)(v115 + v114);
          if ( (unsigned int)v116 <= 0x2F )
          {
            v118 = v114 + 16;
            *(_DWORD *)v8 = v118;
            v119 = *(_WORD **)(v115 + v116);
            if ( (unsigned int)v118 <= 0x2F )
            {
              v120 = (char **)(v118 + v115);
              *(_DWORD *)v8 = v114 + 24;
              goto LABEL_120;
            }
            v120 = *(char ***)(v8 + 8);
LABEL_571:
            *(_QWORD *)(v8 + 8) = v120 + 1;
LABEL_120:
            if ( !(unsigned __int8)sub_37A40(a1, v117, v119, *v120, (__int64)v117, a6) )
              return -1;
            return 1;
          }
          v545 = *(_WORD ***)(v8 + 8);
        }
        v120 = (char **)(v545 + 1);
        *(_QWORD *)(v8 + 8) = v545 + 1;
        v119 = *v545;
        goto LABEL_571;
      case 1009LL:
        v82 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v566 = *(__int64 ***)(a3 + 8);
          v567 = v566 + 1;
          *(_QWORD *)(v8 + 8) = v566 + 1;
          v85 = *v566;
        }
        else
        {
          v83 = *(_QWORD *)(a3 + 16);
          v84 = v82 + 8;
          *(_DWORD *)v8 = v84;
          v85 = *(__int64 **)(v83 + v82);
          if ( (unsigned int)v84 <= 0x2F )
          {
            v86 = v82 + 16;
            *(_DWORD *)v8 = v86;
            v87 = *(_DWORD *)(v83 + v84);
            if ( (unsigned int)v86 <= 0x2F )
            {
              v88 = v82 + 24;
              *(_DWORD *)v8 = v88;
              v89 = *(__int64 (__fastcall **)(const char *, __int64, double))(v83 + v86);
              if ( (unsigned int)v88 <= 0x2F )
              {
                v90 = (__int64 *)(v88 + v83);
                *(_DWORD *)v8 = v82 + 32;
                goto LABEL_98;
              }
              v90 = *(__int64 **)(v8 + 8);
LABEL_607:
              *(_QWORD *)(v8 + 8) = v90 + 1;
LABEL_98:
              if ( !(unsigned __int8)sub_30CC0(a1, v85, v87, v89, *v90) )
                return -1;
              return 1;
            }
            v568 = *(__int64 (__fastcall ***)(const char *, __int64, double))(v8 + 8);
LABEL_606:
            v90 = (__int64 *)(v568 + 1);
            *(_QWORD *)(v8 + 8) = v568 + 1;
            v89 = *v568;
            goto LABEL_607;
          }
          v567 = *(_DWORD **)(v8 + 8);
        }
        v568 = (__int64 (__fastcall **)(const char *, __int64, double))(v567 + 2);
        *(_QWORD *)(v8 + 8) = v567 + 2;
        v87 = *v567;
        goto LABEL_606;
      default:
        return 0;
    }
  }
  if ( (unsigned __int64)(a2 - 3000) > 0xD )
    return 0;
  switch ( a2 )
  {
    case 3001LL:
      v39 = *(_DWORD *)a3;
      if ( *(_DWORD *)v8 > 0x2Fu )
      {
        v40 = *(_QWORD **)(v8 + 8);
        *(_QWORD *)(v8 + 8) = v40 + 1;
      }
      else
      {
        v40 = (_QWORD *)(*(_QWORD *)(v8 + 16) + v39);
        *(_DWORD *)v8 = v39 + 8;
      }
      if ( (unsigned __int8)sub_55C30(*v40 & 0xFFFFFFFFFFFFFFFELL) )
        return 0;
      goto LABEL_559;
    case 3002LL:
LABEL_46:
      v37 = *(_DWORD *)a3;
      if ( *(_DWORD *)v8 > 0x2Fu )
      {
        v38 = *(_QWORD **)(v8 + 8);
        *(_QWORD *)(v8 + 8) = v38 + 1;
      }
      else
      {
        v38 = (_QWORD *)(*(_QWORD *)(v8 + 16) + v37);
        *(_DWORD *)v8 = v37 + 8;
      }
      return get_sreg(*v38 & 0xFFFFFFFFFFFFFFFELL, 20) == 1;
    case 3003LL:
      v72 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v651 = *(__int64 **)(a3 + 8);
        v76 = v651 + 1;
        *(_QWORD *)(v8 + 8) = v651 + 1;
        v75 = *v651;
      }
      else
      {
        v73 = *(_QWORD *)(a3 + 16);
        v74 = v72 + 8;
        *(_DWORD *)v8 = v74;
        v75 = *(_QWORD *)(v73 + v72);
        if ( (unsigned int)v74 <= 0x2F )
        {
          v76 = (_QWORD *)(v74 + v73);
          *(_DWORD *)v8 = v72 + 16;
          return (unsigned __int8)sub_5A510(v75, a1, *v76);
        }
        v76 = *(_QWORD **)(v8 + 8);
      }
      *(_QWORD *)(v8 + 8) = v76 + 1;
      return (unsigned __int8)sub_5A510(v75, a1, *v76);
    case 3004LL:
      v67 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v650 = *(__int64 **)(a3 + 8);
        v71 = v650 + 1;
        *(_QWORD *)(v8 + 8) = v650 + 1;
        v70 = *v650;
      }
      else
      {
        v68 = *(_QWORD *)(a3 + 16);
        v69 = v67 + 8;
        *(_DWORD *)v8 = v69;
        v70 = *(_QWORD *)(v68 + v67);
        if ( (unsigned int)v69 <= 0x2F )
        {
          v71 = (_QWORD *)(v69 + v68);
          *(_DWORD *)v8 = v67 + 16;
          goto LABEL_83;
        }
        v71 = *(_QWORD **)(v8 + 8);
      }
      *(_QWORD *)(v8 + 8) = v71 + 1;
LABEL_83:
      sub_5A480(*v71, a1, v70);
      return 1;
    case 3005LL:
      v77 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v625 = *(_DWORD ***)(a3 + 8);
        v81 = (__int64 *)(v625 + 1);
        *(_QWORD *)(v8 + 8) = v625 + 1;
        v80 = *v625;
      }
      else
      {
        v78 = *(_QWORD *)(a3 + 16);
        v79 = v77 + 8;
        *(_DWORD *)v8 = v79;
        v80 = *(_DWORD **)(v78 + v77);
        if ( (unsigned int)v79 <= 0x2F )
        {
          v81 = (__int64 *)(v79 + v78);
          *(_DWORD *)v8 = v77 + 16;
          goto LABEL_91;
        }
        v81 = *(__int64 **)(v8 + 8);
      }
      *(_QWORD *)(v8 + 8) = v81 + 1;
LABEL_91:
      if ( !sub_29790(*v81, v80) )
        return -1;
      return 1;
    case 3006LL:
      v41 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v655 = *(_DWORD ***)(a3 + 8);
        v656 = (__int64 *)(v655 + 1);
        *(_QWORD *)(v8 + 8) = v655 + 1;
        v44 = *v655;
      }
      else
      {
        v42 = *(_QWORD *)(a3 + 16);
        v43 = v41 + 8;
        *(_DWORD *)v8 = v43;
        v44 = *(_DWORD **)(v42 + v41);
        if ( (unsigned int)v43 <= 0x2F )
        {
          v45 = v41 + 16;
          *(_DWORD *)v8 = v45;
          v46 = *(_QWORD *)(v42 + v43);
          if ( (unsigned int)v45 <= 0x2F )
          {
            v47 = (_DWORD *)(v45 + v42);
            *(_DWORD *)v8 = v41 + 24;
            goto LABEL_57;
          }
          v47 = *(_DWORD **)(v8 + 8);
LABEL_770:
          *(_QWORD *)(v8 + 8) = v47 + 2;
LABEL_57:
          if ( !(unsigned __int8)sub_29880(v46, v44, *v47 != 0) )
            return -1;
          return 1;
        }
        v656 = *(__int64 **)(v8 + 8);
      }
      v47 = v656 + 1;
      *(_QWORD *)(v8 + 8) = v656 + 1;
      v46 = *v656;
      goto LABEL_770;
    case 3007LL:
      v36 = *(_DWORD *)a3;
      if ( *(_DWORD *)v8 > 0x2Fu )
        *(_QWORD *)(v8 + 8) += 8LL;
      else
        *(_DWORD *)v8 = v36 + 8;
      if ( !sub_25150() )
        return -1;
      return 1;
    case 3008LL:
      v34 = *(_DWORD *)a3;
      if ( *(_DWORD *)v8 > 0x2Fu )
      {
        v35 = *(__int64 **)(v8 + 8);
        *(_QWORD *)(v8 + 8) = v35 + 1;
      }
      else
      {
        v35 = (__int64 *)(*(_QWORD *)(v8 + 16) + v34);
        *(_DWORD *)v8 = v34 + 8;
      }
      return (unsigned int)sub_37FF0(a1, *v35);
    case 3009LL:
      v62 = *(_DWORD *)a3;
      if ( *(_DWORD *)v8 > 0x2Fu )
      {
        v63 = *(__int64 **)(v8 + 8);
        *(_QWORD *)(v8 + 8) = v63 + 1;
      }
      else
      {
        v63 = (__int64 *)(*(_QWORD *)(v8 + 16) + v62);
        *(_DWORD *)v8 = v62 + 8;
      }
      v64 = *v63;
      *(_DWORD *)v64 = *(_DWORD *)(a1 + 192);
      *(_DWORD *)(v64 + 4) = *(_DWORD *)(a1 + 196);
      *(_DWORD *)(v64 + 8) = *(_DWORD *)(a1 + 200);
      *(_DWORD *)(v64 + 12) = *(_DWORD *)(a1 + 204);
      *(_DWORD *)(v64 + 16) = *(_DWORD *)(a1 + 208);
      *(_DWORD *)(v64 + 20) = *(_DWORD *)(a1 + 212);
      *(_DWORD *)(v64 + 24) = *(_DWORD *)(a1 + 216);
      *(_DWORD *)(v64 + 28) = *(_DWORD *)(a1 + 220);
      *(_DWORD *)(v64 + 32) = *(_DWORD *)(a1 + 224);
      *(_DWORD *)(v64 + 36) = *(_DWORD *)(a1 + 228);
      *(_DWORD *)(v64 + 40) = *(_DWORD *)(a1 + 232);
      if ( v64 + 48 != a1 + 240 )
      {
        v65 = *(_QWORD *)(a1 + 248);
        if ( v65 > 1 )
        {
          v665 = *(const void **)(a1 + 240);
          if ( *(_QWORD *)(v64 + 64) < v65 )
            *(_QWORD *)(v64 + 48) = qvector_reserve(v64 + 48, *(_QWORD *)(v64 + 48), *(_QWORD *)(a1 + 248), 1);
          *(_QWORD *)(v64 + 56) = v65;
          memmove(*(void **)(v64 + 48), v665, v65 - 1);
          *(_BYTE *)(*(_QWORD *)(v64 + 48) + v65 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v64 + 56) = 0;
        }
      }
      if ( v64 + 72 != a1 + 264 )
      {
        v66 = *(_QWORD *)(a1 + 272);
        if ( v66 > 1 )
        {
          v664 = *(const void **)(a1 + 264);
          if ( *(_QWORD *)(v64 + 88) < v66 )
            *(_QWORD *)(v64 + 72) = qvector_reserve(v64 + 72, *(_QWORD *)(v64 + 72), *(_QWORD *)(a1 + 272), 1);
          *(_QWORD *)(v64 + 80) = v66;
          memmove(*(void **)(v64 + 72), v664, v66 - 1);
          *(_BYTE *)(*(_QWORD *)(v64 + 72) + v66 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v64 + 80) = 0;
        }
      }
      *(_BYTE *)(v64 + 96) = *(_BYTE *)(a1 + 288);
      *(_BYTE *)(v64 + 97) = *(_BYTE *)(a1 + 289);
      return 1;
    case 3010LL:
      v26 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v617 = *(_WORD ***)(a3 + 8);
        v618 = (void ***)(v617 + 1);
        *(_QWORD *)(v8 + 8) = v617 + 1;
        v29 = *v617;
LABEL_707:
        v32 = (__int64 *)(v618 + 1);
        *(_QWORD *)(v8 + 8) = v618 + 1;
        v31 = *v618;
        goto LABEL_708;
      }
      v27 = *(_QWORD *)(a3 + 16);
      v28 = v26 + 8;
      *(_DWORD *)v8 = v28;
      v29 = *(_WORD **)(v27 + v26);
      if ( (unsigned int)v28 > 0x2F )
      {
        v618 = *(void ****)(v8 + 8);
        goto LABEL_707;
      }
      v30 = v26 + 16;
      *(_DWORD *)v8 = v30;
      v31 = *(void ***)(v27 + v28);
      if ( (unsigned int)v30 <= 0x2F )
      {
        v32 = (__int64 *)(v30 + v27);
        *(_DWORD *)v8 = v26 + 24;
        goto LABEL_34;
      }
      v32 = *(__int64 **)(v8 + 8);
LABEL_708:
      *(_QWORD *)(v8 + 8) = v32 + 1;
LABEL_34:
      v33 = sub_2F860(a1, (__int64)s1, *v32);
      result = -1;
      if ( v33 )
      {
        if ( v29 )
          *v29 = s1[1];
        if ( v31 )
          *v31 = s1[0];
        return 1;
      }
      return result;
    case 3011LL:
      v19 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v619 = *(__int64 **)(a3 + 8);
        v620 = v619 + 1;
        *(_QWORD *)(v8 + 8) = v619 + 1;
        v22 = *v619;
      }
      else
      {
        v20 = *(_QWORD *)(a3 + 16);
        v21 = v19 + 8;
        *(_DWORD *)v8 = v21;
        v22 = *(_QWORD *)(v20 + v19);
        if ( (unsigned int)v21 <= 0x2F )
        {
          v23 = v19 + 16;
          *(_DWORD *)v8 = v23;
          v24 = *(_QWORD *)(v20 + v21);
          if ( (unsigned int)v23 <= 0x2F )
          {
            v25 = (_QWORD *)(v23 + v20);
            *(_DWORD *)v8 = v19 + 24;
            goto LABEL_28;
          }
          v25 = *(_QWORD **)(v8 + 8);
LABEL_713:
          *(_QWORD *)(v8 + 8) = v25 + 1;
LABEL_28:
          sub_59BD0(*v25, v22, v24);
          return 1;
        }
        v620 = *(__int64 **)(v8 + 8);
      }
      v25 = v620 + 1;
      *(_QWORD *)(v8 + 8) = v620 + 1;
      v24 = *v620;
      goto LABEL_713;
    case 3012LL:
      v55 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v648 = *(__int64 **)(a3 + 8);
        v649 = v648 + 1;
        *(_QWORD *)(v8 + 8) = v648 + 1;
        v58 = *v648;
      }
      else
      {
        v56 = *(_QWORD *)(a3 + 16);
        v57 = v55 + 8;
        *(_DWORD *)v8 = v57;
        v58 = *(_QWORD *)(v56 + v55);
        if ( (unsigned int)v57 <= 0x2F )
        {
          v59 = v55 + 16;
          *(_DWORD *)v8 = v59;
          v60 = *(_QWORD *)(v56 + v57);
          if ( (unsigned int)v59 <= 0x2F )
          {
            v61 = (_QWORD *)(v59 + v56);
            *(_DWORD *)v8 = v55 + 24;
            return (unsigned __int8)sub_59F50(v58, v60, *v61);
          }
          v61 = *(_QWORD **)(v8 + 8);
LABEL_759:
          *(_QWORD *)(v8 + 8) = v61 + 1;
          return (unsigned __int8)sub_59F50(v58, v60, *v61);
        }
        v649 = *(__int64 **)(v8 + 8);
      }
      v61 = v649 + 1;
      *(_QWORD *)(v8 + 8) = v649 + 1;
      v60 = *v649;
      goto LABEL_759;
    case 3013LL:
      v48 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v615 = *(__int64 ***)(a3 + 8);
        v616 = (__int64 *)(v615 + 1);
        *(_QWORD *)(v8 + 8) = v615 + 1;
        v51 = *v615;
      }
      else
      {
        v49 = *(_QWORD *)(a3 + 16);
        v50 = v48 + 8;
        *(_DWORD *)v8 = v50;
        v51 = *(__int64 **)(v49 + v48);
        if ( (unsigned int)v50 <= 0x2F )
        {
          v52 = v48 + 16;
          *(_DWORD *)v8 = v52;
          v53 = *(_QWORD *)(v49 + v50);
          if ( (unsigned int)v52 <= 0x2F )
          {
            v54 = (_DWORD *)(v52 + v49);
            *(_DWORD *)v8 = v48 + 24;
            goto LABEL_63;
          }
          v54 = *(_DWORD **)(v8 + 8);
LABEL_705:
          *(_QWORD *)(v8 + 8) = v54 + 2;
LABEL_63:
          if ( *v54 || !(unsigned __int8)sub_3AC40(a1, v51, v53) )
            return -1;
          return 1;
        }
        v616 = *(__int64 **)(v8 + 8);
      }
      v54 = v616 + 1;
      *(_QWORD *)(v8 + 8) = v616 + 1;
      v53 = *v616;
      goto LABEL_705;
    default:
      v538 = *(_DWORD *)a3;
      if ( *(_DWORD *)v8 > 0x2Fu )
      {
        v539 = *(_QWORD **)(v8 + 8);
        *(_QWORD *)(v8 + 8) = v539 + 1;
      }
      else
      {
        v539 = (_QWORD *)(*(_QWORD *)(v8 + 16) + v538);
        *(_DWORD *)v8 = v538 + 8;
      }
      if ( (unsigned __int8)sub_55C30(*v539 & 0xFFFFFFFFFFFFFFFELL) )
        return 0;
LABEL_559:
      split_sreg_range();
      return 0;
  }
}
